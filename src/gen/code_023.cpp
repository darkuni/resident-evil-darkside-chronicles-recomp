#include "funcs.h"
#pragma GCC diagnostic ignored "-Wunused-label"

// fn_8016E5D8
void f_8016E5D8(Ctx* __restrict c) {
  trace_call(0x8016E5D8u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8016E5D8
  c->r[0]=c->lr; // 8016E5DC
  W32(c->r[1]+0x00000044u,c->r[0]); // 8016E5E0
  {uint32_t ea=c->r[1]+0x00000030u; for(int i=28;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 8016E5E4
  c->r[31]=c->r[1]|c->r[1]; // 8016E5E8
  c->r[28]=c->r[3]|c->r[3]; // 8016E5EC
  c->lr=0x8016E5F4u; f_8016C1EC(c); // 8016E5F0
  c->r[4]=c->r[3]|c->r[3]; // 8016E5F4
  c->r[3]=c->r[28]|c->r[28]; // 8016E5F8
  c->lr=0x8016E600u; f_80062F4C(c); // 8016E5FC
  c->r[0]=R8(c->r[28]+0x00000010u); // 8016E600
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 8016E604
  c->r[3]=c->r[28]+c->r[0]; // 8016E608
  c->r[29]=R32(c->r[3]+0x00000014u); // 8016E60C
  cmps(c,0,(int32_t)c->r[29],0); // 8016E610
  if (crb(c,2)) { goto L_8016E648; } // 8016E614
  c->r[30]=0u+0x00000000u; // 8016E618
  W32(c->r[31]+0x00000024u,c->r[1]); // 8016E61C
  W8(c->r[31]+0x00000008u,c->r[30]); // 8016E620
  c->lr=0x8016E628u; f_8016C1EC(c); // 8016E624
  W32(c->r[29]+0x00000000u,c->r[3]); // 8016E628
  c->r[0]=c->r[13]+0xFFFF8A20u; // 8016E62C
  c->r[3]=0u+0x806E0000u; // 8016E630
  W32(c->r[29]+0x00000004u,c->r[0]); // 8016E634
  c->r[3]=c->r[3]+0xFFFFF390u; // 8016E638
  W32(c->r[29]+0x00000008u,c->r[30]); // 8016E63C
  W32(c->r[29]+0x0000000Cu,c->r[30]); // 8016E640
  W32(c->r[29]+0x00000010u,c->r[3]); // 8016E644
L_8016E648:;
  W32(c->r[28]+0x00000008u,c->r[29]); // 8016E648
  c->r[0]=0u+0x00000000u; // 8016E64C
  c->r[3]=c->r[28]|c->r[28]; // 8016E650
  c->r[4]=c->r[29]|c->r[29]; // 8016E654
  W32(c->r[29]+0x00000008u,c->r[0]); // 8016E658
  c->r[0]=R32(c->r[28]+0x00000004u); // 8016E65C
  W32(c->r[28]+0x0000000Cu,c->r[0]); // 8016E660
  c->lr=0x8016E668u; f_8006306C(c); // 8016E664
  c->r[10]=c->r[31]|c->r[31]; // 8016E668
  c->r[3]=c->r[29]|c->r[29]; // 8016E66C
  {uint32_t ea=c->r[10]+0x00000030u; for(int i=28;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 8016E670
  c->r[10]=R32(c->r[1]+0x00000000u); // 8016E674
  c->r[0]=R32(c->r[10]+0x00000004u); // 8016E678
  c->r[1]=c->r[10]|c->r[10]; // 8016E67C
  c->lr=c->r[0]; // 8016E680
  return; // 8016E684
}

// fn_8016E688
void f_8016E688(Ctx* __restrict c) {
  trace_call(0x8016E688u);
  return; // 8016E688
}

// fn_8016E68C
void f_8016E68C(Ctx* __restrict c) {
  trace_call(0x8016E68Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8016E68C
  c->r[0]=c->lr; // 8016E690
  W32(c->r[1]+0x00000014u,c->r[0]); // 8016E694
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8016E698
  c->r[31]=c->r[4]|c->r[4]; // 8016E69C
  c->r[4]=0u+0x0000000Bu; // 8016E6A0
  c->r[3]=c->r[31]|c->r[31]; // 8016E6A4
  c->lr=0x8016E6ACu; f_8017133C(c); // 8016E6A8
  c->r[4]=0u+0x80690000u; // 8016E6AC
  {uint32_t ea=c->r[2]+0xFFFFBB78u; c->f[1]=c->ps1[1]=RF32(ea);} // 8016E6B0
  c->r[4]=c->r[4]+0x00001400u; // 8016E6B4
  {uint32_t ea=c->r[2]+0xFFFFBB74u; c->f[2]=c->ps1[2]=RF32(ea);} // 8016E6B8
  {uint32_t ea=c->r[2]+0xFFFFBB98u; c->f[3]=c->ps1[3]=RF32(ea);} // 8016E6BC
  c->r[3]=c->r[31]+0x000005DCu; // 8016E6C0
  c->r[4]=c->r[4]+0x000000A0u; // 8016E6C4
  c->lr=0x8016E6CCu; f_800E24D0(c); // 8016E6C8
  c->r[0]=0u+0x00000002u; // 8016E6CC
  W32(c->r[31]+0x000005D0u,c->r[0]); // 8016E6D0
  c->r[4]=R32(c->r[31]+0x00000688u); // 8016E6D4
  c->r[3]=c->r[31]|c->r[31]; // 8016E6D8
  W32(c->r[31]+0x000005C8u,c->r[0]); // 8016E6DC
  c->r[5]=0u+0x00000001u; // 8016E6E0
  c->lr=0x8016E6E8u; f_80064744(c); // 8016E6E4
  c->r[3]=c->r[31]|c->r[31]; // 8016E6E8
  c->lr=0x8016E6F0u; f_8016DEF4(c); // 8016E6EC
  c->r[0]=R32(c->r[31]+0x000005BCu); // 8016E6F0
  c->r[0]=c->r[0]|0x40000000u; // 8016E6F4
  W32(c->r[31]+0x000005BCu,c->r[0]); // 8016E6F8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8016E6FC
  c->r[0]=R32(c->r[1]+0x00000014u); // 8016E700
  c->lr=c->r[0]; // 8016E704
  c->r[1]=c->r[1]+0x00000010u; // 8016E708
  return; // 8016E70C
}

// fn_8016E710
void f_8016E710(Ctx* __restrict c) {
  trace_call(0x8016E710u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8016E710
  c->r[0]=c->lr; // 8016E714
  W32(c->r[1]+0x00000014u,c->r[0]); // 8016E718
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8016E71C
  c->r[31]=c->r[3]|c->r[3]; // 8016E720
  c->r[4]=R32(c->r[3]+0x00000004u); // 8016E724
  cmps(c,0,(int32_t)c->r[4],0); // 8016E728
  if (crb(c,2)) { goto L_8016E738; } // 8016E72C
  c->r[0]=R32(c->r[4]+0x00000008u); // 8016E730
  goto L_8016E73C; // 8016E734
L_8016E738:;
  c->r[0]=0u+0x00000000u; // 8016E738
L_8016E73C:;
  cmps(c,0,(int32_t)c->r[0],0); // 8016E73C
  if (!crb(c,2)) { goto L_8016E76C; } // 8016E740
  c->r[4]=0u+0x80690000u; // 8016E744
  {uint32_t ea=c->r[2]+0xFFFFBB78u; c->f[1]=c->ps1[1]=RF32(ea);} // 8016E748
  c->r[4]=c->r[4]+0x00001400u; // 8016E74C
  {uint32_t ea=c->r[2]+0xFFFFBB74u; c->f[2]=c->ps1[2]=RF32(ea);} // 8016E750
  {uint32_t ea=c->r[2]+0xFFFFBB98u; c->f[3]=c->ps1[3]=RF32(ea);} // 8016E754
  c->r[4]=c->r[4]+0x000000ABu; // 8016E758
  c->r[3]=c->r[3]+0x000005DCu; // 8016E75C
  c->lr=0x8016E764u; f_800E24D0(c); // 8016E760
  c->r[0]=0u+0x00000002u; // 8016E764
  W32(c->r[31]+0x000005CCu,c->r[0]); // 8016E768
L_8016E76C:;
  c->r[3]=c->r[31]+0x000005DCu; // 8016E76C
  c->lr=0x8016E774u; f_800E2B1C(c); // 8016E770
  cmps(c,0,(int32_t)c->r[3],0); // 8016E774
  if (crb(c,2)) { goto L_8016E790; } // 8016E778
  c->r[0]=0u+0x00000000u; // 8016E77C
  W32(c->r[31]+0x000005D0u,c->r[0]); // 8016E780
  c->r[3]=c->r[31]|c->r[31]; // 8016E784
  c->lr=0x8016E78Cu; f_8016E7A4(c); // 8016E788
  W32(c->r[31]+0x00000680u,c->r[3]); // 8016E78C
L_8016E790:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8016E790
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8016E794
  c->lr=c->r[0]; // 8016E798
  c->r[1]=c->r[1]+0x00000010u; // 8016E79C
  return; // 8016E7A0
}

// fn_8016E7A4
void f_8016E7A4(Ctx* __restrict c) {
  trace_call(0x8016E7A4u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8016E7A4
  c->r[0]=c->lr; // 8016E7A8
  W32(c->r[1]+0x00000044u,c->r[0]); // 8016E7AC
  {uint32_t ea=c->r[1]+0x00000030u; for(int i=28;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 8016E7B0
  c->r[31]=c->r[1]|c->r[1]; // 8016E7B4
  c->r[28]=c->r[3]|c->r[3]; // 8016E7B8
  c->lr=0x8016E7C0u; f_8016C148(c); // 8016E7BC
  c->r[4]=c->r[3]|c->r[3]; // 8016E7C0
  c->r[3]=c->r[28]|c->r[28]; // 8016E7C4
  c->lr=0x8016E7CCu; f_80062F4C(c); // 8016E7C8
  c->r[0]=R8(c->r[28]+0x00000010u); // 8016E7CC
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 8016E7D0
  c->r[3]=c->r[28]+c->r[0]; // 8016E7D4
  c->r[29]=R32(c->r[3]+0x00000014u); // 8016E7D8
  cmps(c,0,(int32_t)c->r[29],0); // 8016E7DC
  if (crb(c,2)) { goto L_8016E814; } // 8016E7E0
  c->r[30]=0u+0x00000000u; // 8016E7E4
  W32(c->r[31]+0x00000024u,c->r[1]); // 8016E7E8
  W8(c->r[31]+0x00000008u,c->r[30]); // 8016E7EC
  c->lr=0x8016E7F4u; f_8016C148(c); // 8016E7F0
  W32(c->r[29]+0x00000000u,c->r[3]); // 8016E7F4
  c->r[0]=c->r[13]+0xFFFF8A1Cu; // 8016E7F8
  c->r[3]=0u+0x806E0000u; // 8016E7FC
  W32(c->r[29]+0x00000004u,c->r[0]); // 8016E800
  c->r[3]=c->r[3]+0xFFFFF380u; // 8016E804
  W32(c->r[29]+0x00000008u,c->r[30]); // 8016E808
  W32(c->r[29]+0x0000000Cu,c->r[30]); // 8016E80C
  W32(c->r[29]+0x00000010u,c->r[3]); // 8016E810
L_8016E814:;
  W32(c->r[28]+0x00000008u,c->r[29]); // 8016E814
  c->r[0]=0u+0x00000000u; // 8016E818
  c->r[3]=c->r[28]|c->r[28]; // 8016E81C
  c->r[4]=c->r[29]|c->r[29]; // 8016E820
  W32(c->r[29]+0x00000008u,c->r[0]); // 8016E824
  c->r[0]=R32(c->r[28]+0x00000004u); // 8016E828
  W32(c->r[28]+0x0000000Cu,c->r[0]); // 8016E82C
  c->lr=0x8016E834u; f_8006306C(c); // 8016E830
  c->r[10]=c->r[31]|c->r[31]; // 8016E834
  c->r[3]=c->r[29]|c->r[29]; // 8016E838
  {uint32_t ea=c->r[10]+0x00000030u; for(int i=28;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 8016E83C
  c->r[10]=R32(c->r[1]+0x00000000u); // 8016E840
  c->r[0]=R32(c->r[10]+0x00000004u); // 8016E844
  c->r[1]=c->r[10]|c->r[10]; // 8016E848
  c->lr=c->r[0]; // 8016E84C
  return; // 8016E850
}

// fn_8016E854
void f_8016E854(Ctx* __restrict c) {
  trace_call(0x8016E854u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8016E854
  c->r[0]=c->lr; // 8016E858
  W32(c->r[1]+0x00000044u,c->r[0]); // 8016E85C
  c->r[11]=c->r[1]+0x00000040u; // 8016E860
  c->lr=0x8016E868u; { W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8016E864
  c->r[31]=c->r[1]|c->r[1]; // 8016E868
  c->r[4]=R32(c->r[3]+0x00000004u); // 8016E86C
  c->r[30]=c->r[3]|c->r[3]; // 8016E870
  cmps(c,0,(int32_t)c->r[4],0); // 8016E874
  if (crb(c,2)) { goto L_8016E884; } // 8016E878
  c->r[0]=R32(c->r[4]+0x00000008u); // 8016E87C
  goto L_8016E888; // 8016E880
L_8016E884:;
  c->r[0]=0u+0x00000000u; // 8016E884
L_8016E888:;
  cmps(c,0,(int32_t)c->r[0],0); // 8016E888
  if (!crb(c,2)) { goto L_8016E898; } // 8016E88C
  c->r[0]=0u+0x00000003u; // 8016E890
  W32(c->r[3]+0x000005CCu,c->r[0]); // 8016E894
L_8016E898:;
  c->r[0]=R32(c->r[3]+0x000005D0u); // 8016E898
  cmps(c,0,(int32_t)c->r[0],0); // 8016E89C
  if (crb(c,2)) { goto L_8016E8B8; } // 8016E8A0
  cmps(c,0,(int32_t)c->r[0],1); // 8016E8A4
  if (crb(c,2)) { goto L_8016E950; } // 8016E8A8
  cmps(c,0,(int32_t)c->r[0],2); // 8016E8AC
  if (crb(c,2)) { goto L_8016E994; } // 8016E8B0
  goto L_8016E9C4; // 8016E8B4
L_8016E8B8:;
  c->r[0]=0u+0x00000002u; // 8016E8B8
  c->r[29]=0u+0x00000000u; // 8016E8BC
  W32(c->r[3]+0x000005C8u,c->r[0]); // 8016E8C0
  W32(c->r[3]+0x000005D4u,c->r[29]); // 8016E8C4
  c->lr=0x8016E8CCu; f_8016BA3C(c); // 8016E8C8
  c->r[4]=c->r[3]|c->r[3]; // 8016E8CC
  c->r[3]=c->r[30]|c->r[30]; // 8016E8D0
  c->lr=0x8016E8D8u; f_80062F4C(c); // 8016E8D4
  c->r[0]=R8(c->r[30]+0x00000010u); // 8016E8D8
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 8016E8DC
  c->r[3]=c->r[30]+c->r[0]; // 8016E8E0
  c->r[28]=R32(c->r[3]+0x00000014u); // 8016E8E4
  cmps(c,0,(int32_t)c->r[28],0); // 8016E8E8
  if (crb(c,2)) { goto L_8016E91C; } // 8016E8EC
  W32(c->r[31]+0x00000024u,c->r[1]); // 8016E8F0
  W8(c->r[31]+0x00000008u,c->r[29]); // 8016E8F4
  c->lr=0x8016E8FCu; f_8016BA3C(c); // 8016E8F8
  W32(c->r[28]+0x00000000u,c->r[3]); // 8016E8FC
  c->r[0]=c->r[13]+0xFFFF89F0u; // 8016E900
  c->r[3]=0u+0x806E0000u; // 8016E904
  W32(c->r[28]+0x00000004u,c->r[0]); // 8016E908
  c->r[3]=c->r[3]+0xFFFFF2E0u; // 8016E90C
  W32(c->r[28]+0x00000008u,c->r[29]); // 8016E910
  W32(c->r[28]+0x0000000Cu,c->r[29]); // 8016E914
  W32(c->r[28]+0x00000010u,c->r[3]); // 8016E918
L_8016E91C:;
  W32(c->r[30]+0x00000008u,c->r[28]); // 8016E91C
  c->r[0]=0u+0x00000000u; // 8016E920
  c->r[3]=c->r[30]|c->r[30]; // 8016E924
  c->r[4]=c->r[28]|c->r[28]; // 8016E928
  W32(c->r[28]+0x00000008u,c->r[0]); // 8016E92C
  c->r[0]=R32(c->r[30]+0x00000004u); // 8016E930
  W32(c->r[30]+0x0000000Cu,c->r[0]); // 8016E934
  c->lr=0x8016E93Cu; f_8006306C(c); // 8016E938
  c->r[0]=R32(c->r[30]+0x000005BCu); // 8016E93C
  W32(c->r[30]+0x00000684u,c->r[28]); // 8016E940
  c->r[0]=c->r[0]|0x40000000u; // 8016E944
  W32(c->r[30]+0x000005BCu,c->r[0]); // 8016E948
  goto L_8016E9C4; // 8016E94C
L_8016E950:;
  c->r[4]=0u+0x00010000u; // 8016E950
  c->r[3]=c->r[30]|c->r[30]; // 8016E954
  c->r[4]=c->r[4]+0xFFFFDEA9u; // 8016E958
  c->r[5]=0u+0x00000001u; // 8016E95C
  c->lr=0x8016E964u; f_80064744(c); // 8016E960
  c->r[4]=0u+0x80690000u; // 8016E964
  {uint32_t ea=c->r[2]+0xFFFFBB78u; c->f[1]=c->ps1[1]=RF32(ea);} // 8016E968
  c->r[4]=c->r[4]+0x00001400u; // 8016E96C
  {uint32_t ea=c->r[2]+0xFFFFBB74u; c->f[2]=c->ps1[2]=RF32(ea);} // 8016E970
  {uint32_t ea=c->r[2]+0xFFFFBB98u; c->f[3]=c->ps1[3]=RF32(ea);} // 8016E974
  c->r[3]=c->r[30]+0x000005DCu; // 8016E978
  c->r[4]=c->r[4]+0x000000B7u; // 8016E97C
  c->lr=0x8016E984u; f_800E24D0(c); // 8016E980
  c->r[3]=R32(c->r[30]+0x000005D0u); // 8016E984
  c->r[0]=c->r[3]+0x00000001u; // 8016E988
  W32(c->r[30]+0x000005D0u,c->r[0]); // 8016E98C
  goto L_8016E9C4; // 8016E990
L_8016E994:;
  c->r[3]=c->r[3]+0x000005DCu; // 8016E994
  c->lr=0x8016E99Cu; f_800E2B1C(c); // 8016E998
  cmps(c,0,(int32_t)c->r[3],0); // 8016E99C
  if (crb(c,2)) { goto L_8016E9C4; } // 8016E9A0
  c->r[0]=0u+0x00000000u; // 8016E9A4
  W32(c->r[30]+0x000005D0u,c->r[0]); // 8016E9A8
  c->r[3]=c->r[30]|c->r[30]; // 8016E9AC
  c->lr=0x8016E9B4u; f_8016E9E4(c); // 8016E9B0
  c->r[0]=R32(c->r[30]+0x000005BCu); // 8016E9B4
  W32(c->r[30]+0x00000680u,c->r[3]); // 8016E9B8
  c->r[0]=c->r[0]|0x40000000u; // 8016E9BC
  W32(c->r[30]+0x000005BCu,c->r[0]); // 8016E9C0
L_8016E9C4:;
  c->r[10]=c->r[31]|c->r[31]; // 8016E9C4
  c->r[11]=c->r[10]+0x00000040u; // 8016E9C8
  c->lr=0x8016E9D0u; { c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8016E9CC
  c->r[10]=R32(c->r[1]+0x00000000u); // 8016E9D0
  c->r[0]=R32(c->r[10]+0x00000004u); // 8016E9D4
  c->r[1]=c->r[10]|c->r[10]; // 8016E9D8
  c->lr=c->r[0]; // 8016E9DC
  return; // 8016E9E0
}

// fn_8016E9E4
void f_8016E9E4(Ctx* __restrict c) {
  trace_call(0x8016E9E4u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8016E9E4
  c->r[0]=c->lr; // 8016E9E8
  W32(c->r[1]+0x00000044u,c->r[0]); // 8016E9EC
  {uint32_t ea=c->r[1]+0x00000030u; for(int i=28;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 8016E9F0
  c->r[31]=c->r[1]|c->r[1]; // 8016E9F4
  c->r[28]=c->r[3]|c->r[3]; // 8016E9F8
  c->lr=0x8016EA00u; f_8016C0A4(c); // 8016E9FC
  c->r[4]=c->r[3]|c->r[3]; // 8016EA00
  c->r[3]=c->r[28]|c->r[28]; // 8016EA04
  c->lr=0x8016EA0Cu; f_80062F4C(c); // 8016EA08
  c->r[0]=R8(c->r[28]+0x00000010u); // 8016EA0C
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 8016EA10
  c->r[3]=c->r[28]+c->r[0]; // 8016EA14
  c->r[29]=R32(c->r[3]+0x00000014u); // 8016EA18
  cmps(c,0,(int32_t)c->r[29],0); // 8016EA1C
  if (crb(c,2)) { goto L_8016EA54; } // 8016EA20
  c->r[30]=0u+0x00000000u; // 8016EA24
  W32(c->r[31]+0x00000024u,c->r[1]); // 8016EA28
  W8(c->r[31]+0x00000008u,c->r[30]); // 8016EA2C
  c->lr=0x8016EA34u; f_8016C0A4(c); // 8016EA30
  W32(c->r[29]+0x00000000u,c->r[3]); // 8016EA34
  c->r[0]=c->r[13]+0xFFFF8A18u; // 8016EA38
  c->r[3]=0u+0x806E0000u; // 8016EA3C
  W32(c->r[29]+0x00000004u,c->r[0]); // 8016EA40
  c->r[3]=c->r[3]+0xFFFFF370u; // 8016EA44
  W32(c->r[29]+0x00000008u,c->r[30]); // 8016EA48
  W32(c->r[29]+0x0000000Cu,c->r[30]); // 8016EA4C
  W32(c->r[29]+0x00000010u,c->r[3]); // 8016EA50
L_8016EA54:;
  W32(c->r[28]+0x00000008u,c->r[29]); // 8016EA54
  c->r[0]=0u+0x00000000u; // 8016EA58
  c->r[3]=c->r[28]|c->r[28]; // 8016EA5C
  c->r[4]=c->r[29]|c->r[29]; // 8016EA60
  W32(c->r[29]+0x00000008u,c->r[0]); // 8016EA64
  c->r[0]=R32(c->r[28]+0x00000004u); // 8016EA68
  W32(c->r[28]+0x0000000Cu,c->r[0]); // 8016EA6C
  c->lr=0x8016EA74u; f_8006306C(c); // 8016EA70
  c->r[10]=c->r[31]|c->r[31]; // 8016EA74
  c->r[3]=c->r[29]|c->r[29]; // 8016EA78
  {uint32_t ea=c->r[10]+0x00000030u; for(int i=28;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 8016EA7C
  c->r[10]=R32(c->r[1]+0x00000000u); // 8016EA80
  c->r[0]=R32(c->r[10]+0x00000004u); // 8016EA84
  c->r[1]=c->r[10]|c->r[10]; // 8016EA88
  c->lr=c->r[0]; // 8016EA8C
  return; // 8016EA90
}

// fn_8016EA94
void f_8016EA94(Ctx* __restrict c) {
  trace_call(0x8016EA94u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8016EA94
  c->r[0]=c->lr; // 8016EA98
  W32(c->r[1]+0x00000044u,c->r[0]); // 8016EA9C
  {uint32_t ea=c->r[1]+0x00000030u; for(int i=28;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 8016EAA0
  c->r[31]=c->r[1]|c->r[1]; // 8016EAA4
  c->r[30]=c->r[3]|c->r[3]; // 8016EAA8
  c->r[4]=R32(c->r[3]+0x00000004u); // 8016EAAC
  cmps(c,0,(int32_t)c->r[4],0); // 8016EAB0
  if (crb(c,2)) { goto L_8016EAC0; } // 8016EAB4
  c->r[0]=R32(c->r[4]+0x00000008u); // 8016EAB8
  goto L_8016EAC4; // 8016EABC
L_8016EAC0:;
  c->r[0]=0u+0x00000000u; // 8016EAC0
L_8016EAC4:;
  cmps(c,0,(int32_t)c->r[0],0); // 8016EAC4
  if (!crb(c,2)) { goto L_8016EAD4; } // 8016EAC8
  c->r[0]=0u+0x00000004u; // 8016EACC
  W32(c->r[3]+0x000005CCu,c->r[0]); // 8016EAD0
L_8016EAD4:;
  c->r[0]=R32(c->r[3]+0x000005D0u); // 8016EAD4
  cmps(c,0,(int32_t)c->r[0],0); // 8016EAD8
  if (crb(c,2)) { goto L_8016EAEC; } // 8016EADC
  cmps(c,0,(int32_t)c->r[0],1); // 8016EAE0
  if (crb(c,2)) { goto L_8016EB84; } // 8016EAE4
  goto L_8016EBA4; // 8016EAE8
L_8016EAEC:;
  c->r[0]=0u+0x00000002u; // 8016EAEC
  c->r[29]=0u+0x00000000u; // 8016EAF0
  W32(c->r[3]+0x000005C8u,c->r[0]); // 8016EAF4
  W32(c->r[3]+0x000005D4u,c->r[29]); // 8016EAF8
  c->lr=0x8016EB00u; f_8016B998(c); // 8016EAFC
  c->r[4]=c->r[3]|c->r[3]; // 8016EB00
  c->r[3]=c->r[30]|c->r[30]; // 8016EB04
  c->lr=0x8016EB0Cu; f_80062F4C(c); // 8016EB08
  c->r[0]=R8(c->r[30]+0x00000010u); // 8016EB0C
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 8016EB10
  c->r[3]=c->r[30]+c->r[0]; // 8016EB14
  c->r[28]=R32(c->r[3]+0x00000014u); // 8016EB18
  cmps(c,0,(int32_t)c->r[28],0); // 8016EB1C
  if (crb(c,2)) { goto L_8016EB50; } // 8016EB20
  W32(c->r[31]+0x00000024u,c->r[1]); // 8016EB24
  W8(c->r[31]+0x00000008u,c->r[29]); // 8016EB28
  c->lr=0x8016EB30u; f_8016B998(c); // 8016EB2C
  W32(c->r[28]+0x00000000u,c->r[3]); // 8016EB30
  c->r[0]=c->r[13]+0xFFFF89ECu; // 8016EB34
  c->r[3]=0u+0x806E0000u; // 8016EB38
  W32(c->r[28]+0x00000004u,c->r[0]); // 8016EB3C
  c->r[3]=c->r[3]+0xFFFFF2D4u; // 8016EB40
  W32(c->r[28]+0x00000008u,c->r[29]); // 8016EB44
  W32(c->r[28]+0x0000000Cu,c->r[29]); // 8016EB48
  W32(c->r[28]+0x00000010u,c->r[3]); // 8016EB4C
L_8016EB50:;
  W32(c->r[30]+0x00000008u,c->r[28]); // 8016EB50
  c->r[0]=0u+0x00000000u; // 8016EB54
  c->r[3]=c->r[30]|c->r[30]; // 8016EB58
  c->r[4]=c->r[28]|c->r[28]; // 8016EB5C
  W32(c->r[28]+0x00000008u,c->r[0]); // 8016EB60
  c->r[0]=R32(c->r[30]+0x00000004u); // 8016EB64
  W32(c->r[30]+0x0000000Cu,c->r[0]); // 8016EB68
  c->lr=0x8016EB70u; f_8006306C(c); // 8016EB6C
  c->r[0]=R32(c->r[30]+0x000005BCu); // 8016EB70
  W32(c->r[30]+0x00000684u,c->r[28]); // 8016EB74
  c->r[0]=c->r[0]|0x40000000u; // 8016EB78
  W32(c->r[30]+0x000005BCu,c->r[0]); // 8016EB7C
  goto L_8016EBA4; // 8016EB80
L_8016EB84:;
  c->r[0]=0u+0x00000000u; // 8016EB84
  W32(c->r[3]+0x000005D0u,c->r[0]); // 8016EB88
  c->r[3]=c->r[30]|c->r[30]; // 8016EB8C
  c->lr=0x8016EB94u; f_8016EBC0(c); // 8016EB90
  c->r[0]=R32(c->r[30]+0x000005BCu); // 8016EB94
  W32(c->r[30]+0x00000680u,c->r[3]); // 8016EB98
  c->r[0]=c->r[0]|0x40000000u; // 8016EB9C
  W32(c->r[30]+0x000005BCu,c->r[0]); // 8016EBA0
L_8016EBA4:;
  c->r[10]=c->r[31]|c->r[31]; // 8016EBA4
  {uint32_t ea=c->r[10]+0x00000030u; for(int i=28;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 8016EBA8
  c->r[10]=R32(c->r[1]+0x00000000u); // 8016EBAC
  c->r[0]=R32(c->r[10]+0x00000004u); // 8016EBB0
  c->r[1]=c->r[10]|c->r[10]; // 8016EBB4
  c->lr=c->r[0]; // 8016EBB8
  return; // 8016EBBC
}

// fn_8016EBC0
void f_8016EBC0(Ctx* __restrict c) {
  trace_call(0x8016EBC0u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8016EBC0
  c->r[0]=c->lr; // 8016EBC4
  W32(c->r[1]+0x00000044u,c->r[0]); // 8016EBC8
  {uint32_t ea=c->r[1]+0x00000030u; for(int i=28;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 8016EBCC
  c->r[31]=c->r[1]|c->r[1]; // 8016EBD0
  c->r[28]=c->r[3]|c->r[3]; // 8016EBD4
  c->lr=0x8016EBDCu; f_8016C000(c); // 8016EBD8
  c->r[4]=c->r[3]|c->r[3]; // 8016EBDC
  c->r[3]=c->r[28]|c->r[28]; // 8016EBE0
  c->lr=0x8016EBE8u; f_80062F4C(c); // 8016EBE4
  c->r[0]=R8(c->r[28]+0x00000010u); // 8016EBE8
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 8016EBEC
  c->r[3]=c->r[28]+c->r[0]; // 8016EBF0
  c->r[29]=R32(c->r[3]+0x00000014u); // 8016EBF4
  cmps(c,0,(int32_t)c->r[29],0); // 8016EBF8
  if (crb(c,2)) { goto L_8016EC30; } // 8016EBFC
  c->r[30]=0u+0x00000000u; // 8016EC00
  W32(c->r[31]+0x00000024u,c->r[1]); // 8016EC04
  W8(c->r[31]+0x00000008u,c->r[30]); // 8016EC08
  c->lr=0x8016EC10u; f_8016C000(c); // 8016EC0C
  W32(c->r[29]+0x00000000u,c->r[3]); // 8016EC10
  c->r[0]=c->r[13]+0xFFFF8A14u; // 8016EC14
  c->r[3]=0u+0x806E0000u; // 8016EC18
  W32(c->r[29]+0x00000004u,c->r[0]); // 8016EC1C
  c->r[3]=c->r[3]+0xFFFFF360u; // 8016EC20
  W32(c->r[29]+0x00000008u,c->r[30]); // 8016EC24
  W32(c->r[29]+0x0000000Cu,c->r[30]); // 8016EC28
  W32(c->r[29]+0x00000010u,c->r[3]); // 8016EC2C
L_8016EC30:;
  W32(c->r[28]+0x00000008u,c->r[29]); // 8016EC30
  c->r[0]=0u+0x00000000u; // 8016EC34
  c->r[3]=c->r[28]|c->r[28]; // 8016EC38
  c->r[4]=c->r[29]|c->r[29]; // 8016EC3C
  W32(c->r[29]+0x00000008u,c->r[0]); // 8016EC40
  c->r[0]=R32(c->r[28]+0x00000004u); // 8016EC44
  W32(c->r[28]+0x0000000Cu,c->r[0]); // 8016EC48
  c->lr=0x8016EC50u; f_8006306C(c); // 8016EC4C
  c->r[10]=c->r[31]|c->r[31]; // 8016EC50
  c->r[3]=c->r[29]|c->r[29]; // 8016EC54
  {uint32_t ea=c->r[10]+0x00000030u; for(int i=28;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 8016EC58
  c->r[10]=R32(c->r[1]+0x00000000u); // 8016EC5C
  c->r[0]=R32(c->r[10]+0x00000004u); // 8016EC60
  c->r[1]=c->r[10]|c->r[10]; // 8016EC64
  c->lr=c->r[0]; // 8016EC68
  return; // 8016EC6C
}

// fn_8016EC70
void f_8016EC70(Ctx* __restrict c) {
  trace_call(0x8016EC70u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8016EC70
  c->r[0]=c->lr; // 8016EC74
  W32(c->r[1]+0x00000014u,c->r[0]); // 8016EC78
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8016EC7C
  c->r[31]=c->r[3]|c->r[3]; // 8016EC80
  c->r[4]=R32(c->r[3]+0x00000004u); // 8016EC84
  cmps(c,0,(int32_t)c->r[4],0); // 8016EC88
  if (crb(c,2)) { goto L_8016EC98; } // 8016EC8C
  c->r[0]=R32(c->r[4]+0x00000008u); // 8016EC90
  goto L_8016EC9C; // 8016EC94
L_8016EC98:;
  c->r[0]=0u+0x00000000u; // 8016EC98
L_8016EC9C:;
  cmps(c,0,(int32_t)c->r[0],0); // 8016EC9C
  if (!crb(c,2)) { goto L_8016ECAC; } // 8016ECA0
  c->r[0]=0u+0x00000005u; // 8016ECA4
  W32(c->r[3]+0x000005CCu,c->r[0]); // 8016ECA8
L_8016ECAC:;
  c->r[0]=R32(c->r[3]+0x000005D0u); // 8016ECAC
  cmps(c,0,(int32_t)c->r[0],0); // 8016ECB0
  if (crb(c,2)) { goto L_8016ECD4; } // 8016ECB4
  cmps(c,0,(int32_t)c->r[0],1); // 8016ECB8
  if (crb(c,2)) { goto L_8016ED20; } // 8016ECBC
  cmps(c,0,(int32_t)c->r[0],2); // 8016ECC0
  if (crb(c,2)) { goto L_8016F044; } // 8016ECC4
  cmps(c,0,(int32_t)c->r[0],3); // 8016ECC8
  if (crb(c,2)) { goto L_8016F078; } // 8016ECCC
  goto L_8016F0BC; // 8016ECD0
L_8016ECD4:;
  {uint32_t ea=c->r[2]+0xFFFFBBACu; c->f[1]=c->ps1[1]=RF32(ea);} // 8016ECD4
  c->r[4]=0u+0xFFFFFFFFu; // 8016ECD8
  c->r[3]=c->r[3]+0x000007E0u; // 8016ECDC
  c->lr=0x8016ECE4u; f_8016D17C(c); // 8016ECE0
  {uint32_t ea=c->r[31]+0x00000690u; c->f[1]=c->ps1[1]=RF32(ea);} // 8016ECE4
  c->r[3]=c->r[31]+0x000007E0u; // 8016ECE8
  c->lr=0x8016ECF0u; f_8016DEDC(c); // 8016ECEC
  c->r[4]=R32(c->r[31]+0x000005D0u); // 8016ECF0
  c->r[0]=0u+0x00000000u; // 8016ECF4
  W32(c->r[31]+0x000005D8u,c->r[0]); // 8016ECF8
  c->r[3]=c->r[31]|c->r[31]; // 8016ECFC
  c->r[0]=c->r[4]+0x00000001u; // 8016ED00
  W32(c->r[31]+0x000005D0u,c->r[0]); // 8016ED04
  c->lr=0x8016ED0Cu; f_8016EBC0(c); // 8016ED08
  c->r[0]=R32(c->r[31]+0x000005BCu); // 8016ED0C
  W32(c->r[31]+0x00000680u,c->r[3]); // 8016ED10
  c->r[0]=c->r[0]|0x40000000u; // 8016ED14
  W32(c->r[31]+0x000005BCu,c->r[0]); // 8016ED18
  goto L_8016F0BC; // 8016ED1C
L_8016ED20:;
  c->r[4]=R32(c->r[3]+0x00000004u); // 8016ED20
  cmps(c,0,(int32_t)c->r[4],0); // 8016ED24
  if (crb(c,2)) { goto L_8016ED34; } // 8016ED28
  c->r[0]=R32(c->r[4]+0x00000008u); // 8016ED2C
  goto L_8016ED38; // 8016ED30
L_8016ED34:;
  c->r[0]=0u+0x00000000u; // 8016ED34
L_8016ED38:;
  cmps(c,0,(int32_t)c->r[0],0); // 8016ED38
  if (!crb(c,2)) { goto L_8016ED54; } // 8016ED3C
  c->r[4]=0u+0x00010000u; // 8016ED40
  c->r[0]=0u+0x00000000u; // 8016ED44
  c->r[4]=c->r[4]+0xFFFFE038u; // 8016ED48
  W32(c->r[3]+0x00000688u,c->r[4]); // 8016ED4C
  W32(c->r[3]+0x000005D4u,c->r[0]); // 8016ED50
L_8016ED54:;
  c->r[3]=c->r[3]+0x00000354u; // 8016ED54
  c->lr=0x8016ED5Cu; f_800667AC(c); // 8016ED58
  cmps(c,0,(int32_t)c->r[3],0); // 8016ED5C
  if (crb(c,2)) { goto L_8016F0BC; } // 8016ED60
  c->r[3]=c->r[31]|c->r[31]; // 8016ED64
  c->lr=0x8016ED6Cu; f_8016D6B4(c); // 8016ED68
  {uint32_t ea=c->r[2]+0xFFFFBB84u; c->f[0]=c->ps1[0]=RF32(ea);} // 8016ED6C
  fcmp(c,0,c->f[1],c->f[0]); // 8016ED70
  if (!crb(c,0)) { goto L_8016EECC; } // 8016ED74
  c->r[0]=R8(c->r[31]+0x00000830u); // 8016ED78
  cmps(c,0,(int32_t)c->r[0],0); // 8016ED7C
  if (crb(c,2)) { goto L_8016EE28; } // 8016ED80
  c->r[0]=R32(c->r[31]+0x000005D8u); // 8016ED84
  cmpu(c,0,c->r[0],0x00000007u); // 8016ED88
  if (crb(c,1)) { goto L_8016F024; } // 8016ED8C
  c->r[3]=0u+0x806E0000u; // 8016ED90
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 8016ED94
  c->r[3]=c->r[3]+0xFFFFEFC0u; // 8016ED98
  c->r[3]=R32(c->r[3]+c->r[0]); // 8016ED9C
  c->ctr=c->r[3]; // 8016EDA0
  if (true) { switch (c->ctr) { case 0x8016EDA8u: goto L_8016EDA8; case 0x8016EDB8u: goto L_8016EDB8; case 0x8016EDC8u: goto L_8016EDC8; case 0x8016EDD8u: goto L_8016EDD8; case 0x8016EDE8u: goto L_8016EDE8; case 0x8016EDF8u: goto L_8016EDF8; case 0x8016EE08u: goto L_8016EE08; case 0x8016EE18u: goto L_8016EE18; case 0x8016EE4Cu: goto L_8016EE4C; case 0x8016EE5Cu: goto L_8016EE5C; case 0x8016EE6Cu: goto L_8016EE6C; case 0x8016EE7Cu: goto L_8016EE7C; case 0x8016EE8Cu: goto L_8016EE8C; case 0x8016EE9Cu: goto L_8016EE9C; case 0x8016EEACu: goto L_8016EEAC; case 0x8016EEBCu: goto L_8016EEBC; case 0x8016EFA8u: goto L_8016EFA8; case 0x8016EFB8u: goto L_8016EFB8; case 0x8016EFC8u: goto L_8016EFC8; case 0x8016EFD8u: goto L_8016EFD8; case 0x8016EFE8u: goto L_8016EFE8; case 0x8016EFF8u: goto L_8016EFF8; case 0x8016F008u: goto L_8016F008; case 0x8016F018u: goto L_8016F018; default: break; } dispatch(c,c->ctr); return; } // 8016EDA4
L_8016EDA8:;
  c->r[3]=c->r[31]|c->r[31]; // 8016EDA8
  c->lr=0x8016EDB0u; f_8016E294(c); // 8016EDAC
  W32(c->r[31]+0x00000684u,c->r[3]); // 8016EDB0
  goto L_8016F024; // 8016EDB4
L_8016EDB8:;
  c->r[3]=c->r[31]|c->r[31]; // 8016EDB8
  c->lr=0x8016EDC0u; f_8016E1D8(c); // 8016EDBC
  W32(c->r[31]+0x00000684u,c->r[3]); // 8016EDC0
  goto L_8016F024; // 8016EDC4
L_8016EDC8:;
  c->r[3]=c->r[31]|c->r[31]; // 8016EDC8
  c->lr=0x8016EDD0u; f_8016E294(c); // 8016EDCC
  W32(c->r[31]+0x00000684u,c->r[3]); // 8016EDD0
  goto L_8016F024; // 8016EDD4
L_8016EDD8:;
  c->r[3]=c->r[31]|c->r[31]; // 8016EDD8
  c->lr=0x8016EDE0u; f_8016F180(c); // 8016EDDC
  W32(c->r[31]+0x00000684u,c->r[3]); // 8016EDE0
  goto L_8016F024; // 8016EDE4
L_8016EDE8:;
  c->r[3]=c->r[31]|c->r[31]; // 8016EDE8
  c->lr=0x8016EDF0u; f_8016E294(c); // 8016EDEC
  W32(c->r[31]+0x00000684u,c->r[3]); // 8016EDF0
  goto L_8016F024; // 8016EDF4
L_8016EDF8:;
  c->r[3]=c->r[31]|c->r[31]; // 8016EDF8
  c->lr=0x8016EE00u; f_8016E1D8(c); // 8016EDFC
  W32(c->r[31]+0x00000684u,c->r[3]); // 8016EE00
  goto L_8016F024; // 8016EE04
L_8016EE08:;
  c->r[3]=c->r[31]|c->r[31]; // 8016EE08
  c->lr=0x8016EE10u; f_8016E294(c); // 8016EE0C
  W32(c->r[31]+0x00000684u,c->r[3]); // 8016EE10
  goto L_8016F024; // 8016EE14
L_8016EE18:;
  c->r[3]=c->r[31]|c->r[31]; // 8016EE18
  c->lr=0x8016EE20u; f_8016DFA4(c); // 8016EE1C
  W32(c->r[31]+0x00000684u,c->r[3]); // 8016EE20
  goto L_8016F024; // 8016EE24
L_8016EE28:;
  c->r[0]=R32(c->r[31]+0x000005D8u); // 8016EE28
  cmpu(c,0,c->r[0],0x00000007u); // 8016EE2C
  if (crb(c,1)) { goto L_8016F024; } // 8016EE30
  c->r[3]=0u+0x806E0000u; // 8016EE34
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 8016EE38
  c->r[3]=c->r[3]+0xFFFFEFA0u; // 8016EE3C
  c->r[3]=R32(c->r[3]+c->r[0]); // 8016EE40
  c->ctr=c->r[3]; // 8016EE44
  if (true) { switch (c->ctr) { case 0x8016EDA8u: goto L_8016EDA8; case 0x8016EDB8u: goto L_8016EDB8; case 0x8016EDC8u: goto L_8016EDC8; case 0x8016EDD8u: goto L_8016EDD8; case 0x8016EDE8u: goto L_8016EDE8; case 0x8016EDF8u: goto L_8016EDF8; case 0x8016EE08u: goto L_8016EE08; case 0x8016EE18u: goto L_8016EE18; case 0x8016EE4Cu: goto L_8016EE4C; case 0x8016EE5Cu: goto L_8016EE5C; case 0x8016EE6Cu: goto L_8016EE6C; case 0x8016EE7Cu: goto L_8016EE7C; case 0x8016EE8Cu: goto L_8016EE8C; case 0x8016EE9Cu: goto L_8016EE9C; case 0x8016EEACu: goto L_8016EEAC; case 0x8016EEBCu: goto L_8016EEBC; case 0x8016EFA8u: goto L_8016EFA8; case 0x8016EFB8u: goto L_8016EFB8; case 0x8016EFC8u: goto L_8016EFC8; case 0x8016EFD8u: goto L_8016EFD8; case 0x8016EFE8u: goto L_8016EFE8; case 0x8016EFF8u: goto L_8016EFF8; case 0x8016F008u: goto L_8016F008; case 0x8016F018u: goto L_8016F018; default: break; } dispatch(c,c->ctr); return; } // 8016EE48
L_8016EE4C:;
  c->r[3]=c->r[31]|c->r[31]; // 8016EE4C
  c->lr=0x8016EE54u; f_8016E294(c); // 8016EE50
  W32(c->r[31]+0x00000684u,c->r[3]); // 8016EE54
  goto L_8016F024; // 8016EE58
L_8016EE5C:;
  c->r[3]=c->r[31]|c->r[31]; // 8016EE5C
  c->lr=0x8016EE64u; f_8016E1D8(c); // 8016EE60
  W32(c->r[31]+0x00000684u,c->r[3]); // 8016EE64
  goto L_8016F024; // 8016EE68
L_8016EE6C:;
  c->r[3]=c->r[31]|c->r[31]; // 8016EE6C
  c->lr=0x8016EE74u; f_8016E294(c); // 8016EE70
  W32(c->r[31]+0x00000684u,c->r[3]); // 8016EE74
  goto L_8016F024; // 8016EE78
L_8016EE7C:;
  c->r[3]=c->r[31]|c->r[31]; // 8016EE7C
  c->lr=0x8016EE84u; f_8016E11C(c); // 8016EE80
  W32(c->r[31]+0x00000684u,c->r[3]); // 8016EE84
  goto L_8016F024; // 8016EE88
L_8016EE8C:;
  c->r[3]=c->r[31]|c->r[31]; // 8016EE8C
  c->lr=0x8016EE94u; f_8016E294(c); // 8016EE90
  W32(c->r[31]+0x00000684u,c->r[3]); // 8016EE94
  goto L_8016F024; // 8016EE98
L_8016EE9C:;
  c->r[3]=c->r[31]|c->r[31]; // 8016EE9C
  c->lr=0x8016EEA4u; f_8016F180(c); // 8016EEA0
  W32(c->r[31]+0x00000684u,c->r[3]); // 8016EEA4
  goto L_8016F024; // 8016EEA8
L_8016EEAC:;
  c->r[3]=c->r[31]|c->r[31]; // 8016EEAC
  c->lr=0x8016EEB4u; f_8016E294(c); // 8016EEB0
  W32(c->r[31]+0x00000684u,c->r[3]); // 8016EEB4
  goto L_8016F024; // 8016EEB8
L_8016EEBC:;
  c->r[3]=c->r[31]|c->r[31]; // 8016EEBC
  c->lr=0x8016EEC4u; f_8016DFA4(c); // 8016EEC0
  W32(c->r[31]+0x00000684u,c->r[3]); // 8016EEC4
  goto L_8016F024; // 8016EEC8
L_8016EECC:;
  c->r[0]=R8(c->r[31]+0x00000830u); // 8016EECC
  cmps(c,0,(int32_t)c->r[0],0); // 8016EED0
  if (crb(c,2)) { goto L_8016EF84; } // 8016EED4
  c->r[0]=R32(c->r[31]+0x000005D8u); // 8016EED8
  cmps(c,0,(int32_t)c->r[0],5); // 8016EEDC
  if (!crb(c,1)) { goto L_8016EEEC; } // 8016EEE0
  c->r[0]=0u+0x00000000u; // 8016EEE4
  W32(c->r[31]+0x000005D8u,c->r[0]); // 8016EEE8
L_8016EEEC:;
  c->r[0]=R32(c->r[31]+0x000005D8u); // 8016EEEC
  cmps(c,0,(int32_t)c->r[0],0); // 8016EEF0
  if (crb(c,2)) { goto L_8016EF24; } // 8016EEF4
  cmps(c,0,(int32_t)c->r[0],1); // 8016EEF8
  if (crb(c,2)) { goto L_8016EF34; } // 8016EEFC
  cmps(c,0,(int32_t)c->r[0],2); // 8016EF00
  if (crb(c,2)) { goto L_8016EF44; } // 8016EF04
  cmps(c,0,(int32_t)c->r[0],3); // 8016EF08
  if (crb(c,2)) { goto L_8016EF54; } // 8016EF0C
  cmps(c,0,(int32_t)c->r[0],4); // 8016EF10
  if (crb(c,2)) { goto L_8016EF64; } // 8016EF14
  cmps(c,0,(int32_t)c->r[0],5); // 8016EF18
  if (crb(c,2)) { goto L_8016EF74; } // 8016EF1C
  goto L_8016F024; // 8016EF20
L_8016EF24:;
  c->r[3]=c->r[31]|c->r[31]; // 8016EF24
  c->lr=0x8016EF2Cu; f_8016E294(c); // 8016EF28
  W32(c->r[31]+0x00000684u,c->r[3]); // 8016EF2C
  goto L_8016F024; // 8016EF30
L_8016EF34:;
  c->r[3]=c->r[31]|c->r[31]; // 8016EF34
  c->lr=0x8016EF3Cu; f_8016E11C(c); // 8016EF38
  W32(c->r[31]+0x00000684u,c->r[3]); // 8016EF3C
  goto L_8016F024; // 8016EF40
L_8016EF44:;
  c->r[3]=c->r[31]|c->r[31]; // 8016EF44
  c->lr=0x8016EF4Cu; f_8016E294(c); // 8016EF48
  W32(c->r[31]+0x00000684u,c->r[3]); // 8016EF4C
  goto L_8016F024; // 8016EF50
L_8016EF54:;
  c->r[3]=c->r[31]|c->r[31]; // 8016EF54
  c->lr=0x8016EF5Cu; f_8016E1D8(c); // 8016EF58
  W32(c->r[31]+0x00000684u,c->r[3]); // 8016EF5C
  goto L_8016F024; // 8016EF60
L_8016EF64:;
  c->r[3]=c->r[31]|c->r[31]; // 8016EF64
  c->lr=0x8016EF6Cu; f_8016E294(c); // 8016EF68
  W32(c->r[31]+0x00000684u,c->r[3]); // 8016EF6C
  goto L_8016F024; // 8016EF70
L_8016EF74:;
  c->r[3]=c->r[31]|c->r[31]; // 8016EF74
  c->lr=0x8016EF7Cu; f_8016F180(c); // 8016EF78
  W32(c->r[31]+0x00000684u,c->r[3]); // 8016EF7C
  goto L_8016F024; // 8016EF80
L_8016EF84:;
  c->r[0]=R32(c->r[31]+0x000005D8u); // 8016EF84
  cmpu(c,0,c->r[0],0x00000007u); // 8016EF88
  if (crb(c,1)) { goto L_8016F024; } // 8016EF8C
  c->r[3]=0u+0x806E0000u; // 8016EF90
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 8016EF94
  c->r[3]=c->r[3]+0xFFFFEF80u; // 8016EF98
  c->r[3]=R32(c->r[3]+c->r[0]); // 8016EF9C
  c->ctr=c->r[3]; // 8016EFA0
  if (true) { switch (c->ctr) { case 0x8016EDA8u: goto L_8016EDA8; case 0x8016EDB8u: goto L_8016EDB8; case 0x8016EDC8u: goto L_8016EDC8; case 0x8016EDD8u: goto L_8016EDD8; case 0x8016EDE8u: goto L_8016EDE8; case 0x8016EDF8u: goto L_8016EDF8; case 0x8016EE08u: goto L_8016EE08; case 0x8016EE18u: goto L_8016EE18; case 0x8016EE4Cu: goto L_8016EE4C; case 0x8016EE5Cu: goto L_8016EE5C; case 0x8016EE6Cu: goto L_8016EE6C; case 0x8016EE7Cu: goto L_8016EE7C; case 0x8016EE8Cu: goto L_8016EE8C; case 0x8016EE9Cu: goto L_8016EE9C; case 0x8016EEACu: goto L_8016EEAC; case 0x8016EEBCu: goto L_8016EEBC; case 0x8016EFA8u: goto L_8016EFA8; case 0x8016EFB8u: goto L_8016EFB8; case 0x8016EFC8u: goto L_8016EFC8; case 0x8016EFD8u: goto L_8016EFD8; case 0x8016EFE8u: goto L_8016EFE8; case 0x8016EFF8u: goto L_8016EFF8; case 0x8016F008u: goto L_8016F008; case 0x8016F018u: goto L_8016F018; default: break; } dispatch(c,c->ctr); return; } // 8016EFA4
L_8016EFA8:;
  c->r[3]=c->r[31]|c->r[31]; // 8016EFA8
  c->lr=0x8016EFB0u; f_8016E294(c); // 8016EFAC
  W32(c->r[31]+0x00000684u,c->r[3]); // 8016EFB0
  goto L_8016F024; // 8016EFB4
L_8016EFB8:;
  c->r[3]=c->r[31]|c->r[31]; // 8016EFB8
  c->lr=0x8016EFC0u; f_8016E11C(c); // 8016EFBC
  W32(c->r[31]+0x00000684u,c->r[3]); // 8016EFC0
  goto L_8016F024; // 8016EFC4
L_8016EFC8:;
  c->r[3]=c->r[31]|c->r[31]; // 8016EFC8
  c->lr=0x8016EFD0u; f_8016E294(c); // 8016EFCC
  W32(c->r[31]+0x00000684u,c->r[3]); // 8016EFD0
  goto L_8016F024; // 8016EFD4
L_8016EFD8:;
  c->r[3]=c->r[31]|c->r[31]; // 8016EFD8
  c->lr=0x8016EFE0u; f_8016E1D8(c); // 8016EFDC
  W32(c->r[31]+0x00000684u,c->r[3]); // 8016EFE0
  goto L_8016F024; // 8016EFE4
L_8016EFE8:;
  c->r[3]=c->r[31]|c->r[31]; // 8016EFE8
  c->lr=0x8016EFF0u; f_8016E294(c); // 8016EFEC
  W32(c->r[31]+0x00000684u,c->r[3]); // 8016EFF0
  goto L_8016F024; // 8016EFF4
L_8016EFF8:;
  c->r[3]=c->r[31]|c->r[31]; // 8016EFF8
  c->lr=0x8016F000u; f_8016E11C(c); // 8016EFFC
  W32(c->r[31]+0x00000684u,c->r[3]); // 8016F000
  goto L_8016F024; // 8016F004
L_8016F008:;
  c->r[3]=c->r[31]|c->r[31]; // 8016F008
  c->lr=0x8016F010u; f_8016E294(c); // 8016F00C
  W32(c->r[31]+0x00000684u,c->r[3]); // 8016F010
  goto L_8016F024; // 8016F014
L_8016F018:;
  c->r[3]=c->r[31]|c->r[31]; // 8016F018
  c->lr=0x8016F020u; f_8016F180(c); // 8016F01C
  W32(c->r[31]+0x00000684u,c->r[3]); // 8016F020
L_8016F024:;
  c->r[3]=R32(c->r[31]+0x000005D8u); // 8016F024
  c->r[0]=c->r[3]+0x00000001u; // 8016F028
  W32(c->r[31]+0x000005D8u,c->r[0]); // 8016F02C
  cmps(c,0,(int32_t)c->r[0],7); // 8016F030
  if (!crb(c,1)) { goto L_8016F0BC; } // 8016F034
  c->r[0]=0u+0x00000000u; // 8016F038
  W32(c->r[31]+0x000005D8u,c->r[0]); // 8016F03C
  goto L_8016F0BC; // 8016F040
L_8016F044:;
  c->r[3]=c->r[3]+0x00000354u; // 8016F044
  c->lr=0x8016F04Cu; f_800667AC(c); // 8016F048
  cmps(c,0,(int32_t)c->r[3],0); // 8016F04C
  if (crb(c,2)) { goto L_8016F0BC; } // 8016F050
  c->r[0]=0u+0x00000001u; // 8016F054
  W32(c->r[31]+0x000005D0u,c->r[0]); // 8016F058
  c->r[3]=c->r[31]|c->r[31]; // 8016F05C
  c->lr=0x8016F064u; f_8016EBC0(c); // 8016F060
  c->r[0]=R32(c->r[31]+0x000005BCu); // 8016F064
  W32(c->r[31]+0x00000680u,c->r[3]); // 8016F068
  c->r[0]=c->r[0]|0x40000000u; // 8016F06C
  W32(c->r[31]+0x000005BCu,c->r[0]); // 8016F070
  goto L_8016F0BC; // 8016F074
L_8016F078:;
  {uint32_t ea=c->r[3]+0x00000658u; c->f[1]=c->ps1[1]=RF32(ea);} // 8016F078
  {uint32_t ea=c->r[2]+0xFFFFBBB8u; c->f[0]=c->ps1[0]=RF32(ea);} // 8016F07C
  fcmp(c,0,c->f[1],c->f[0]); // 8016F080
  setcrb(c,2,crb(c,1)|crb(c,2)); // 8016F084
  if (!crb(c,2)) { goto L_8016F0BC; } // 8016F088
  c->r[3]=c->r[31]|c->r[31]; // 8016F08C
  c->r[4]=0u+0x00000005u; // 8016F090
  c->r[5]=0u+0x00000000u; // 8016F094
  c->lr=0x8016F09Cu; f_800D5F20(c); // 8016F098
  {uint32_t ea=c->r[31]+0x00000690u; c->f[1]=c->ps1[1]=RF32(ea);} // 8016F09C
  c->r[3]=c->r[31]+0x000007E0u; // 8016F0A0
  c->lr=0x8016F0A8u; f_8016DEDC(c); // 8016F0A4
  c->r[3]=c->r[31]|c->r[31]; // 8016F0A8
  c->lr=0x8016F0B0u; f_8016F0D0(c); // 8016F0AC
  c->r[0]=0u+0x00000000u; // 8016F0B0
  W32(c->r[31]+0x00000680u,c->r[3]); // 8016F0B4
  W32(c->r[31]+0x000005D0u,c->r[0]); // 8016F0B8
L_8016F0BC:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8016F0BC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8016F0C0
  c->lr=c->r[0]; // 8016F0C4
  c->r[1]=c->r[1]+0x00000010u; // 8016F0C8
  return; // 8016F0CC
}

// fn_8016F0D0
void f_8016F0D0(Ctx* __restrict c) {
  trace_call(0x8016F0D0u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8016F0D0
  c->r[0]=c->lr; // 8016F0D4
  W32(c->r[1]+0x00000044u,c->r[0]); // 8016F0D8
  {uint32_t ea=c->r[1]+0x00000030u; for(int i=28;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 8016F0DC
  c->r[31]=c->r[1]|c->r[1]; // 8016F0E0
  c->r[28]=c->r[3]|c->r[3]; // 8016F0E4
  c->lr=0x8016F0ECu; f_8016BF5C(c); // 8016F0E8
  c->r[4]=c->r[3]|c->r[3]; // 8016F0EC
  c->r[3]=c->r[28]|c->r[28]; // 8016F0F0
  c->lr=0x8016F0F8u; f_80062F4C(c); // 8016F0F4
  c->r[0]=R8(c->r[28]+0x00000010u); // 8016F0F8
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 8016F0FC
  c->r[3]=c->r[28]+c->r[0]; // 8016F100
  c->r[29]=R32(c->r[3]+0x00000014u); // 8016F104
  cmps(c,0,(int32_t)c->r[29],0); // 8016F108
  if (crb(c,2)) { goto L_8016F140; } // 8016F10C
  c->r[30]=0u+0x00000000u; // 8016F110
  W32(c->r[31]+0x00000024u,c->r[1]); // 8016F114
  W8(c->r[31]+0x00000008u,c->r[30]); // 8016F118
  c->lr=0x8016F120u; f_8016BF5C(c); // 8016F11C
  W32(c->r[29]+0x00000000u,c->r[3]); // 8016F120
  c->r[0]=c->r[13]+0xFFFF8A10u; // 8016F124
  c->r[3]=0u+0x806E0000u; // 8016F128
  W32(c->r[29]+0x00000004u,c->r[0]); // 8016F12C
  c->r[3]=c->r[3]+0xFFFFF350u; // 8016F130
  W32(c->r[29]+0x00000008u,c->r[30]); // 8016F134
  W32(c->r[29]+0x0000000Cu,c->r[30]); // 8016F138
  W32(c->r[29]+0x00000010u,c->r[3]); // 8016F13C
L_8016F140:;
  W32(c->r[28]+0x00000008u,c->r[29]); // 8016F140
  c->r[0]=0u+0x00000000u; // 8016F144
  c->r[3]=c->r[28]|c->r[28]; // 8016F148
  c->r[4]=c->r[29]|c->r[29]; // 8016F14C
  W32(c->r[29]+0x00000008u,c->r[0]); // 8016F150
  c->r[0]=R32(c->r[28]+0x00000004u); // 8016F154
  W32(c->r[28]+0x0000000Cu,c->r[0]); // 8016F158
  c->lr=0x8016F160u; f_8006306C(c); // 8016F15C
  c->r[10]=c->r[31]|c->r[31]; // 8016F160
  c->r[3]=c->r[29]|c->r[29]; // 8016F164
  {uint32_t ea=c->r[10]+0x00000030u; for(int i=28;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 8016F168
  c->r[10]=R32(c->r[1]+0x00000000u); // 8016F16C
  c->r[0]=R32(c->r[10]+0x00000004u); // 8016F170
  c->r[1]=c->r[10]|c->r[10]; // 8016F174
  c->lr=c->r[0]; // 8016F178
  return; // 8016F17C
}

// fn_8016F180
void f_8016F180(Ctx* __restrict c) {
  trace_call(0x8016F180u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8016F180
  c->r[0]=c->lr; // 8016F184
  W32(c->r[1]+0x00000044u,c->r[0]); // 8016F188
  {uint32_t ea=c->r[1]+0x00000030u; for(int i=28;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 8016F18C
  c->r[31]=c->r[1]|c->r[1]; // 8016F190
  c->r[28]=c->r[3]|c->r[3]; // 8016F194
  c->lr=0x8016F19Cu; f_8016B8F4(c); // 8016F198
  c->r[4]=c->r[3]|c->r[3]; // 8016F19C
  c->r[3]=c->r[28]|c->r[28]; // 8016F1A0
  c->lr=0x8016F1A8u; f_80062F4C(c); // 8016F1A4
  c->r[0]=R8(c->r[28]+0x00000010u); // 8016F1A8
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 8016F1AC
  c->r[3]=c->r[28]+c->r[0]; // 8016F1B0
  c->r[29]=R32(c->r[3]+0x00000014u); // 8016F1B4
  cmps(c,0,(int32_t)c->r[29],0); // 8016F1B8
  if (crb(c,2)) { goto L_8016F1F0; } // 8016F1BC
  c->r[30]=0u+0x00000000u; // 8016F1C0
  W32(c->r[31]+0x00000024u,c->r[1]); // 8016F1C4
  W8(c->r[31]+0x00000008u,c->r[30]); // 8016F1C8
  c->lr=0x8016F1D0u; f_8016B8F4(c); // 8016F1CC
  W32(c->r[29]+0x00000000u,c->r[3]); // 8016F1D0
  c->r[0]=c->r[13]+0xFFFF89E8u; // 8016F1D4
  c->r[3]=0u+0x806E0000u; // 8016F1D8
  W32(c->r[29]+0x00000004u,c->r[0]); // 8016F1DC
  c->r[3]=c->r[3]+0xFFFFF2C8u; // 8016F1E0
  W32(c->r[29]+0x00000008u,c->r[30]); // 8016F1E4
  W32(c->r[29]+0x0000000Cu,c->r[30]); // 8016F1E8
  W32(c->r[29]+0x00000010u,c->r[3]); // 8016F1EC
L_8016F1F0:;
  W32(c->r[28]+0x00000008u,c->r[29]); // 8016F1F0
  c->r[0]=0u+0x00000000u; // 8016F1F4
  c->r[3]=c->r[28]|c->r[28]; // 8016F1F8
  c->r[4]=c->r[29]|c->r[29]; // 8016F1FC
  W32(c->r[29]+0x00000008u,c->r[0]); // 8016F200
  c->r[0]=R32(c->r[28]+0x00000004u); // 8016F204
  W32(c->r[28]+0x0000000Cu,c->r[0]); // 8016F208
  c->lr=0x8016F210u; f_8006306C(c); // 8016F20C
  c->r[0]=R32(c->r[28]+0x000005BCu); // 8016F210
  c->r[10]=c->r[31]|c->r[31]; // 8016F214
  c->r[3]=c->r[29]|c->r[29]; // 8016F218
  c->r[0]=c->r[0]|0x40000000u; // 8016F21C
  W32(c->r[28]+0x000005BCu,c->r[0]); // 8016F220
  {uint32_t ea=c->r[10]+0x00000030u; for(int i=28;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 8016F224
  c->r[10]=R32(c->r[1]+0x00000000u); // 8016F228
  c->r[0]=R32(c->r[10]+0x00000004u); // 8016F22C
  c->r[1]=c->r[10]|c->r[10]; // 8016F230
  c->lr=c->r[0]; // 8016F234
  return; // 8016F238
}

// fn_8016F23C
void f_8016F23C(Ctx* __restrict c) {
  trace_call(0x8016F23Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8016F23C
  c->r[0]=c->lr; // 8016F240
  c->r[5]=0u+0x80690000u; // 8016F244
  {uint32_t ea=c->r[2]+0xFFFFBB78u; c->f[1]=c->ps1[1]=RF32(ea);} // 8016F248
  W32(c->r[1]+0x00000014u,c->r[0]); // 8016F24C
  c->r[5]=c->r[5]+0x00001400u; // 8016F250
  {uint32_t ea=c->r[2]+0xFFFFBB74u; c->f[2]=c->ps1[2]=RF32(ea);} // 8016F254
  c->r[3]=c->r[4]+0x000005DCu; // 8016F258
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8016F25C
  c->r[31]=c->r[4]|c->r[4]; // 8016F260
  {uint32_t ea=c->r[2]+0xFFFFBB98u; c->f[3]=c->ps1[3]=RF32(ea);} // 8016F264
  c->r[4]=c->r[5]+0x000000C2u; // 8016F268
  c->lr=0x8016F270u; f_800E24D0(c); // 8016F26C
  c->r[3]=0u+0x00000002u; // 8016F270
  c->r[0]=0u+0x00000003u; // 8016F274
  c->r[4]=0u+0x00010000u; // 8016F278
  W32(c->r[31]+0x000005C8u,c->r[3]); // 8016F27C
  c->r[3]=c->r[31]|c->r[31]; // 8016F280
  c->r[5]=0u+0x00000001u; // 8016F284
  W32(c->r[31]+0x000005D0u,c->r[0]); // 8016F288
  c->r[4]=c->r[4]+0xFFFFE039u; // 8016F28C
  c->lr=0x8016F294u; f_80064744(c); // 8016F290
  c->r[3]=c->r[31]|c->r[31]; // 8016F294
  c->lr=0x8016F29Cu; f_8016EBC0(c); // 8016F298
  c->r[0]=R32(c->r[31]+0x000005BCu); // 8016F29C
  c->r[0]=c->r[0]|0x40000000u; // 8016F2A0
  W32(c->r[31]+0x000005BCu,c->r[0]); // 8016F2A4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8016F2A8
  c->r[0]=R32(c->r[1]+0x00000014u); // 8016F2AC
  c->lr=c->r[0]; // 8016F2B0
  c->r[1]=c->r[1]+0x00000010u; // 8016F2B4
  return; // 8016F2B8
}

// fn_8016F2BC
void f_8016F2BC(Ctx* __restrict c) {
  trace_call(0x8016F2BCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8016F2BC
  c->r[0]=c->lr; // 8016F2C0
  c->r[3]=0u+0x00000002u; // 8016F2C4
  c->r[5]=0u+0x00000001u; // 8016F2C8
  W32(c->r[1]+0x00000014u,c->r[0]); // 8016F2CC
  c->r[0]=0u+0x00000008u; // 8016F2D0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8016F2D4
  c->r[31]=c->r[4]|c->r[4]; // 8016F2D8
  W32(c->r[4]+0x000005D0u,c->r[3]); // 8016F2DC
  c->r[3]=c->r[31]|c->r[31]; // 8016F2E0
  W32(c->r[4]+0x000005C8u,c->r[0]); // 8016F2E4
  c->r[4]=R32(c->r[4]+0x00000688u); // 8016F2E8
  c->lr=0x8016F2F0u; f_80064744(c); // 8016F2EC
  c->r[3]=c->r[31]|c->r[31]; // 8016F2F0
  c->lr=0x8016F2F8u; f_8016EBC0(c); // 8016F2F4
  c->r[0]=R32(c->r[31]+0x000005BCu); // 8016F2F8
  c->r[0]=c->r[0]|0x40000000u; // 8016F2FC
  W32(c->r[31]+0x000005BCu,c->r[0]); // 8016F300
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8016F304
  c->r[0]=R32(c->r[1]+0x00000014u); // 8016F308
  c->lr=c->r[0]; // 8016F30C
  c->r[1]=c->r[1]+0x00000010u; // 8016F310
  return; // 8016F314
}

// fn_8016F318
void f_8016F318(Ctx* __restrict c) {
  trace_call(0x8016F318u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8016F318
  c->r[0]=c->lr; // 8016F31C
  W32(c->r[1]+0x00000014u,c->r[0]); // 8016F320
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8016F324
  c->r[31]=c->r[3]|c->r[3]; // 8016F328
  W32(c->r[1]+0x00000008u,c->r[30]); // 8016F32C
  c->r[4]=R32(c->r[3]+0x00000004u); // 8016F330
  cmps(c,0,(int32_t)c->r[4],0); // 8016F334
  if (crb(c,2)) { goto L_8016F344; } // 8016F338
  c->r[0]=R32(c->r[4]+0x00000008u); // 8016F33C
  goto L_8016F348; // 8016F340
L_8016F344:;
  c->r[0]=0u+0x00000000u; // 8016F344
L_8016F348:;
  cmps(c,0,(int32_t)c->r[0],0); // 8016F348
  if (!crb(c,2)) { goto L_8016F358; } // 8016F34C
  c->r[0]=0u+0x00000006u; // 8016F350
  W32(c->r[3]+0x000005CCu,c->r[0]); // 8016F354
L_8016F358:;
  c->r[0]=R32(c->r[3]+0x000005D0u); // 8016F358
  cmps(c,0,(int32_t)c->r[0],0); // 8016F35C
  if (crb(c,2)) { goto L_8016F378; } // 8016F360
  cmps(c,0,(int32_t)c->r[0],1); // 8016F364
  if (crb(c,2)) { goto L_8016F430; } // 8016F368
  cmps(c,0,(int32_t)c->r[0],2); // 8016F36C
  if (crb(c,2)) { goto L_8016F49C; } // 8016F370
  goto L_8016F4BC; // 8016F374
L_8016F378:;
  c->r[4]=R32(c->r[3]+0x00000004u); // 8016F378
  cmps(c,0,(int32_t)c->r[4],0); // 8016F37C
  if (crb(c,2)) { goto L_8016F38C; } // 8016F380
  c->r[0]=R32(c->r[4]+0x00000008u); // 8016F384
  goto L_8016F390; // 8016F388
L_8016F38C:;
  c->r[0]=0u+0x00000000u; // 8016F38C
L_8016F390:;
  cmps(c,0,(int32_t)c->r[0],0); // 8016F390
  if (!crb(c,2)) { goto L_8016F3F8; } // 8016F394
  {uint32_t ea=c->r[2]+0xFFFFBB74u; c->f[2]=c->ps1[2]=RF32(ea);} // 8016F398
  c->r[4]=0u+0x80690000u; // 8016F39C
  c->r[4]=c->r[4]+0x00001400u; // 8016F3A0
  c->r[0]=0u+0x00000006u; // 8016F3A4
  c->f[3]=c->f[2]; // 8016F3A8
  W32(c->r[3]+0x000005CCu,c->r[0]); // 8016F3AC
  {uint32_t ea=c->r[2]+0xFFFFBB78u; c->f[1]=c->ps1[1]=RF32(ea);} // 8016F3B0
  c->r[4]=c->r[4]+0x000000CDu; // 8016F3B4
  c->r[3]=c->r[3]+0x000005DCu; // 8016F3B8
  c->lr=0x8016F3C0u; f_800E24D0(c); // 8016F3BC
  c->r[3]=c->r[31]|c->r[31]; // 8016F3C0
  c->r[4]=0u+0x00000008u; // 8016F3C4
  c->lr=0x8016F3CCu; f_8017133C(c); // 8016F3C8
  c->r[30]=0u+0x00010000u; // 8016F3CC
  c->r[3]=c->r[31]|c->r[31]; // 8016F3D0
  c->r[4]=c->r[30]+0xFFFFDF70u; // 8016F3D4
  c->r[5]=0u+0x00000001u; // 8016F3D8
  c->lr=0x8016F3E0u; f_80064744(c); // 8016F3DC
  c->r[3]=c->r[31]|c->r[31]; // 8016F3E0
  c->r[4]=c->r[30]+0xFFFFDF70u; // 8016F3E4
  c->r[5]=0u+0x00000001u; // 8016F3E8
  c->lr=0x8016F3F0u; f_80064744(c); // 8016F3EC
  c->r[0]=0u+0x00000002u; // 8016F3F0
  W32(c->r[31]+0x000005C8u,c->r[0]); // 8016F3F4
L_8016F3F8:;
  c->r[3]=c->r[31]+0x00000354u; // 8016F3F8
  c->lr=0x8016F400u; f_800667AC(c); // 8016F3FC
  cmps(c,0,(int32_t)c->r[3],0); // 8016F400
  if (crb(c,2)) { goto L_8016F4BC; } // 8016F404
  c->r[4]=R32(c->r[31]+0x000005D0u); // 8016F408
  c->r[3]=c->r[31]|c->r[31]; // 8016F40C
  c->r[0]=c->r[4]+0x00000001u; // 8016F410
  W32(c->r[31]+0x000005D0u,c->r[0]); // 8016F414
  c->lr=0x8016F41Cu; f_8016F0D0(c); // 8016F418
  c->r[0]=R32(c->r[31]+0x000005BCu); // 8016F41C
  W32(c->r[31]+0x00000680u,c->r[3]); // 8016F420
  c->r[0]=c->r[0]|0x40000000u; // 8016F424
  W32(c->r[31]+0x000005BCu,c->r[0]); // 8016F428
  goto L_8016F4BC; // 8016F42C
L_8016F430:;
  c->r[3]=R32(c->r[3]+0x00000004u); // 8016F430
  cmps(c,0,(int32_t)c->r[3],0); // 8016F434
  if (crb(c,2)) { goto L_8016F444; } // 8016F438
  c->r[0]=R32(c->r[3]+0x00000008u); // 8016F43C
  goto L_8016F448; // 8016F440
L_8016F444:;
  c->r[0]=0u+0x00000000u; // 8016F444
L_8016F448:;
  cmps(c,0,(int32_t)c->r[0],0); // 8016F448
  if (!crb(c,2)) { goto L_8016F464; } // 8016F44C
  c->r[4]=0u+0x00010000u; // 8016F450
  c->r[3]=c->r[31]|c->r[31]; // 8016F454
  c->r[4]=c->r[4]+0xFFFFDEA9u; // 8016F458
  c->r[5]=0u+0x00000001u; // 8016F45C
  c->lr=0x8016F464u; f_80064744(c); // 8016F460
L_8016F464:;
  c->r[3]=c->r[31]+0x00000354u; // 8016F464
  c->lr=0x8016F46Cu; f_800667AC(c); // 8016F468
  cmps(c,0,(int32_t)c->r[3],0); // 8016F46C
  if (crb(c,2)) { goto L_8016F4BC; } // 8016F470
  c->r[4]=R32(c->r[31]+0x000005D0u); // 8016F474
  c->r[3]=c->r[31]|c->r[31]; // 8016F478
  c->r[0]=c->r[4]+0x00000001u; // 8016F47C
  W32(c->r[31]+0x000005D0u,c->r[0]); // 8016F480
  c->lr=0x8016F488u; f_8016F0D0(c); // 8016F484
  c->r[0]=R32(c->r[31]+0x000005BCu); // 8016F488
  W32(c->r[31]+0x00000680u,c->r[3]); // 8016F48C
  c->r[0]=c->r[0]|0x40000000u; // 8016F490
  W32(c->r[31]+0x000005BCu,c->r[0]); // 8016F494
  goto L_8016F4BC; // 8016F498
L_8016F49C:;
  c->r[0]=0u+0x00000000u; // 8016F49C
  W32(c->r[3]+0x000005D0u,c->r[0]); // 8016F4A0
  c->r[3]=c->r[31]|c->r[31]; // 8016F4A4
  c->lr=0x8016F4ACu; f_8016F4D4(c); // 8016F4A8
  c->r[0]=R32(c->r[31]+0x000005BCu); // 8016F4AC
  W32(c->r[31]+0x00000680u,c->r[3]); // 8016F4B0
  c->r[0]=c->r[0]|0x40000000u; // 8016F4B4
  W32(c->r[31]+0x000005BCu,c->r[0]); // 8016F4B8
L_8016F4BC:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8016F4BC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8016F4C0
  c->r[30]=R32(c->r[1]+0x00000008u); // 8016F4C4
  c->lr=c->r[0]; // 8016F4C8
  c->r[1]=c->r[1]+0x00000010u; // 8016F4CC
  return; // 8016F4D0
}

// fn_8016F4D4
void f_8016F4D4(Ctx* __restrict c) {
  trace_call(0x8016F4D4u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8016F4D4
  c->r[0]=c->lr; // 8016F4D8
  W32(c->r[1]+0x00000044u,c->r[0]); // 8016F4DC
  {uint32_t ea=c->r[1]+0x00000030u; for(int i=28;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 8016F4E0
  c->r[31]=c->r[1]|c->r[1]; // 8016F4E4
  c->r[28]=c->r[3]|c->r[3]; // 8016F4E8
  c->lr=0x8016F4F0u; f_8016BEB8(c); // 8016F4EC
  c->r[4]=c->r[3]|c->r[3]; // 8016F4F0
  c->r[3]=c->r[28]|c->r[28]; // 8016F4F4
  c->lr=0x8016F4FCu; f_80062F4C(c); // 8016F4F8
  c->r[0]=R8(c->r[28]+0x00000010u); // 8016F4FC
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 8016F500
  c->r[3]=c->r[28]+c->r[0]; // 8016F504
  c->r[29]=R32(c->r[3]+0x00000014u); // 8016F508
  cmps(c,0,(int32_t)c->r[29],0); // 8016F50C
  if (crb(c,2)) { goto L_8016F544; } // 8016F510
  c->r[30]=0u+0x00000000u; // 8016F514
  W32(c->r[31]+0x00000024u,c->r[1]); // 8016F518
  W8(c->r[31]+0x00000008u,c->r[30]); // 8016F51C
  c->lr=0x8016F524u; f_8016BEB8(c); // 8016F520
  W32(c->r[29]+0x00000000u,c->r[3]); // 8016F524
  c->r[0]=c->r[13]+0xFFFF8A0Cu; // 8016F528
  c->r[3]=0u+0x806E0000u; // 8016F52C
  W32(c->r[29]+0x00000004u,c->r[0]); // 8016F530
  c->r[3]=c->r[3]+0xFFFFF340u; // 8016F534
  W32(c->r[29]+0x00000008u,c->r[30]); // 8016F538
  W32(c->r[29]+0x0000000Cu,c->r[30]); // 8016F53C
  W32(c->r[29]+0x00000010u,c->r[3]); // 8016F540
L_8016F544:;
  W32(c->r[28]+0x00000008u,c->r[29]); // 8016F544
  c->r[0]=0u+0x00000000u; // 8016F548
  c->r[3]=c->r[28]|c->r[28]; // 8016F54C
  c->r[4]=c->r[29]|c->r[29]; // 8016F550
  W32(c->r[29]+0x00000008u,c->r[0]); // 8016F554
  c->r[0]=R32(c->r[28]+0x00000004u); // 8016F558
  W32(c->r[28]+0x0000000Cu,c->r[0]); // 8016F55C
  c->lr=0x8016F564u; f_8006306C(c); // 8016F560
  c->r[10]=c->r[31]|c->r[31]; // 8016F564
  c->r[3]=c->r[29]|c->r[29]; // 8016F568
  {uint32_t ea=c->r[10]+0x00000030u; for(int i=28;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 8016F56C
  c->r[10]=R32(c->r[1]+0x00000000u); // 8016F570
  c->r[0]=R32(c->r[10]+0x00000004u); // 8016F574
  c->r[1]=c->r[10]|c->r[10]; // 8016F578
  c->lr=c->r[0]; // 8016F57C
  return; // 8016F580
}

// fn_8016F584
void f_8016F584(Ctx* __restrict c) {
  trace_call(0x8016F584u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8016F584
  c->r[0]=c->lr; // 8016F588
  W32(c->r[1]+0x00000044u,c->r[0]); // 8016F58C
  {uint32_t ea=c->r[1]+0x00000030u; for(int i=28;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 8016F590
  c->r[31]=c->r[1]|c->r[1]; // 8016F594
  c->r[30]=c->r[3]|c->r[3]; // 8016F598
  c->r[4]=R32(c->r[3]+0x00000004u); // 8016F59C
  cmps(c,0,(int32_t)c->r[4],0); // 8016F5A0
  if (crb(c,2)) { goto L_8016F5B0; } // 8016F5A4
  c->r[0]=R32(c->r[4]+0x00000008u); // 8016F5A8
  goto L_8016F5B4; // 8016F5AC
L_8016F5B0:;
  c->r[0]=0u+0x00000000u; // 8016F5B0
L_8016F5B4:;
  cmps(c,0,(int32_t)c->r[0],0); // 8016F5B4
  if (!crb(c,2)) { goto L_8016F5C4; } // 8016F5B8
  c->r[0]=0u+0x00000007u; // 8016F5BC
  W32(c->r[3]+0x000005CCu,c->r[0]); // 8016F5C0
L_8016F5C4:;
  c->r[0]=R32(c->r[3]+0x000005D0u); // 8016F5C4
  cmps(c,0,(int32_t)c->r[0],0); // 8016F5C8
  if (crb(c,2)) { goto L_8016F5DC; } // 8016F5CC
  cmps(c,0,(int32_t)c->r[0],1); // 8016F5D0
  if (crb(c,2)) { goto L_8016F674; } // 8016F5D4
  goto L_8016F694; // 8016F5D8
L_8016F5DC:;
  c->r[0]=0u+0x00000002u; // 8016F5DC
  c->r[29]=0u+0x00000000u; // 8016F5E0
  W32(c->r[3]+0x000005C8u,c->r[0]); // 8016F5E4
  W32(c->r[3]+0x000005D4u,c->r[29]); // 8016F5E8
  c->lr=0x8016F5F0u; f_8016B850(c); // 8016F5EC
  c->r[4]=c->r[3]|c->r[3]; // 8016F5F0
  c->r[3]=c->r[30]|c->r[30]; // 8016F5F4
  c->lr=0x8016F5FCu; f_80062F4C(c); // 8016F5F8
  c->r[0]=R8(c->r[30]+0x00000010u); // 8016F5FC
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 8016F600
  c->r[3]=c->r[30]+c->r[0]; // 8016F604
  c->r[28]=R32(c->r[3]+0x00000014u); // 8016F608
  cmps(c,0,(int32_t)c->r[28],0); // 8016F60C
  if (crb(c,2)) { goto L_8016F640; } // 8016F610
  W32(c->r[31]+0x00000024u,c->r[1]); // 8016F614
  W8(c->r[31]+0x00000008u,c->r[29]); // 8016F618
  c->lr=0x8016F620u; f_8016B850(c); // 8016F61C
  W32(c->r[28]+0x00000000u,c->r[3]); // 8016F620
  c->r[0]=c->r[13]+0xFFFF89E4u; // 8016F624
  c->r[3]=0u+0x806E0000u; // 8016F628
  W32(c->r[28]+0x00000004u,c->r[0]); // 8016F62C
  c->r[3]=c->r[3]+0xFFFFF2BCu; // 8016F630
  W32(c->r[28]+0x00000008u,c->r[29]); // 8016F634
  W32(c->r[28]+0x0000000Cu,c->r[29]); // 8016F638
  W32(c->r[28]+0x00000010u,c->r[3]); // 8016F63C
L_8016F640:;
  W32(c->r[30]+0x00000008u,c->r[28]); // 8016F640
  c->r[0]=0u+0x00000000u; // 8016F644
  c->r[3]=c->r[30]|c->r[30]; // 8016F648
  c->r[4]=c->r[28]|c->r[28]; // 8016F64C
  W32(c->r[28]+0x00000008u,c->r[0]); // 8016F650
  c->r[0]=R32(c->r[30]+0x00000004u); // 8016F654
  W32(c->r[30]+0x0000000Cu,c->r[0]); // 8016F658
  c->lr=0x8016F660u; f_8006306C(c); // 8016F65C
  c->r[0]=R32(c->r[30]+0x000005BCu); // 8016F660
  W32(c->r[30]+0x00000684u,c->r[28]); // 8016F664
  c->r[0]=c->r[0]|0x40000000u; // 8016F668
  W32(c->r[30]+0x000005BCu,c->r[0]); // 8016F66C
  goto L_8016F694; // 8016F670
L_8016F674:;
  c->r[0]=0u+0x00000000u; // 8016F674
  W32(c->r[3]+0x000005D0u,c->r[0]); // 8016F678
  c->r[3]=c->r[30]|c->r[30]; // 8016F67C
  c->lr=0x8016F684u; f_8016F6B0(c); // 8016F680
  c->r[0]=R32(c->r[30]+0x000005BCu); // 8016F684
  W32(c->r[30]+0x00000680u,c->r[3]); // 8016F688
  c->r[0]=c->r[0]|0x40000000u; // 8016F68C
  W32(c->r[30]+0x000005BCu,c->r[0]); // 8016F690
L_8016F694:;
  c->r[10]=c->r[31]|c->r[31]; // 8016F694
  {uint32_t ea=c->r[10]+0x00000030u; for(int i=28;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 8016F698
  c->r[10]=R32(c->r[1]+0x00000000u); // 8016F69C
  c->r[0]=R32(c->r[10]+0x00000004u); // 8016F6A0
  c->r[1]=c->r[10]|c->r[10]; // 8016F6A4
  c->lr=c->r[0]; // 8016F6A8
  return; // 8016F6AC
}

// fn_8016F6B0
void f_8016F6B0(Ctx* __restrict c) {
  trace_call(0x8016F6B0u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8016F6B0
  c->r[0]=c->lr; // 8016F6B4
  W32(c->r[1]+0x00000044u,c->r[0]); // 8016F6B8
  {uint32_t ea=c->r[1]+0x00000030u; for(int i=28;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 8016F6BC
  c->r[31]=c->r[1]|c->r[1]; // 8016F6C0
  c->r[28]=c->r[3]|c->r[3]; // 8016F6C4
  c->lr=0x8016F6CCu; f_8016BE14(c); // 8016F6C8
  c->r[4]=c->r[3]|c->r[3]; // 8016F6CC
  c->r[3]=c->r[28]|c->r[28]; // 8016F6D0
  c->lr=0x8016F6D8u; f_80062F4C(c); // 8016F6D4
  c->r[0]=R8(c->r[28]+0x00000010u); // 8016F6D8
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 8016F6DC
  c->r[3]=c->r[28]+c->r[0]; // 8016F6E0
  c->r[29]=R32(c->r[3]+0x00000014u); // 8016F6E4
  cmps(c,0,(int32_t)c->r[29],0); // 8016F6E8
  if (crb(c,2)) { goto L_8016F720; } // 8016F6EC
  c->r[30]=0u+0x00000000u; // 8016F6F0
  W32(c->r[31]+0x00000024u,c->r[1]); // 8016F6F4
  W8(c->r[31]+0x00000008u,c->r[30]); // 8016F6F8
  c->lr=0x8016F700u; f_8016BE14(c); // 8016F6FC
  W32(c->r[29]+0x00000000u,c->r[3]); // 8016F700
  c->r[0]=c->r[13]+0xFFFF8A08u; // 8016F704
  c->r[3]=0u+0x806E0000u; // 8016F708
  W32(c->r[29]+0x00000004u,c->r[0]); // 8016F70C
  c->r[3]=c->r[3]+0xFFFFF330u; // 8016F710
  W32(c->r[29]+0x00000008u,c->r[30]); // 8016F714
  W32(c->r[29]+0x0000000Cu,c->r[30]); // 8016F718
  W32(c->r[29]+0x00000010u,c->r[3]); // 8016F71C
L_8016F720:;
  W32(c->r[28]+0x00000008u,c->r[29]); // 8016F720
  c->r[0]=0u+0x00000000u; // 8016F724
  c->r[3]=c->r[28]|c->r[28]; // 8016F728
  c->r[4]=c->r[29]|c->r[29]; // 8016F72C
  W32(c->r[29]+0x00000008u,c->r[0]); // 8016F730
  c->r[0]=R32(c->r[28]+0x00000004u); // 8016F734
  W32(c->r[28]+0x0000000Cu,c->r[0]); // 8016F738
  c->lr=0x8016F740u; f_8006306C(c); // 8016F73C
  c->r[10]=c->r[31]|c->r[31]; // 8016F740
  c->r[3]=c->r[29]|c->r[29]; // 8016F744
  {uint32_t ea=c->r[10]+0x00000030u; for(int i=28;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 8016F748
  c->r[10]=R32(c->r[1]+0x00000000u); // 8016F74C
  c->r[0]=R32(c->r[10]+0x00000004u); // 8016F750
  c->r[1]=c->r[10]|c->r[10]; // 8016F754
  c->lr=c->r[0]; // 8016F758
  return; // 8016F75C
}

// fn_8016F760
void f_8016F760(Ctx* __restrict c) {
  trace_call(0x8016F760u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8016F760
  c->r[0]=c->lr; // 8016F764
  W32(c->r[1]+0x00000024u,c->r[0]); // 8016F768
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8016F76C
  c->r[31]=c->r[3]|c->r[3]; // 8016F770
  c->r[4]=R32(c->r[3]+0x00000004u); // 8016F774
  cmps(c,0,(int32_t)c->r[4],0); // 8016F778
  if (crb(c,2)) { goto L_8016F788; } // 8016F77C
  c->r[0]=R32(c->r[4]+0x00000008u); // 8016F780
  goto L_8016F78C; // 8016F784
L_8016F788:;
  c->r[0]=0u+0x00000000u; // 8016F788
L_8016F78C:;
  cmps(c,0,(int32_t)c->r[0],0); // 8016F78C
  if (!crb(c,2)) { goto L_8016F79C; } // 8016F790
  c->r[0]=0u+0x00000008u; // 8016F794
  W32(c->r[3]+0x000005CCu,c->r[0]); // 8016F798
L_8016F79C:;
  c->r[0]=R32(c->r[3]+0x000005D0u); // 8016F79C
  cmps(c,0,(int32_t)c->r[0],0); // 8016F7A0
  if (crb(c,2)) { goto L_8016F7C4; } // 8016F7A4
  cmps(c,0,(int32_t)c->r[0],1); // 8016F7A8
  if (crb(c,2)) { goto L_8016F81C; } // 8016F7AC
  cmps(c,0,(int32_t)c->r[0],2); // 8016F7B0
  if (crb(c,2)) { goto L_8016FBB8; } // 8016F7B4
  cmps(c,0,(int32_t)c->r[0],3); // 8016F7B8
  if (crb(c,2)) { goto L_8016FBEC; } // 8016F7BC
  goto L_8016FC4C; // 8016F7C0
L_8016F7C4:;
  c->r[3]=c->r[31]|c->r[31]; // 8016F7C4
  c->r[4]=0u+0x00000009u; // 8016F7C8
  c->lr=0x8016F7D0u; f_8017133C(c); // 8016F7CC
  {uint32_t ea=c->r[2]+0xFFFFBB74u; c->f[1]=c->ps1[1]=RF32(ea);} // 8016F7D0
  c->r[3]=c->r[31]+0x000007E0u; // 8016F7D4
  c->r[4]=0u+0xFFFFFFFFu; // 8016F7D8
  c->lr=0x8016F7E0u; f_8016D17C(c); // 8016F7DC
  {uint32_t ea=c->r[31]+0x00000690u; c->f[1]=c->ps1[1]=RF32(ea);} // 8016F7E0
  c->r[3]=c->r[31]+0x000007E0u; // 8016F7E4
  c->lr=0x8016F7ECu; f_8016DEDC(c); // 8016F7E8
  c->r[4]=R32(c->r[31]+0x000005D0u); // 8016F7EC
  c->r[0]=0u+0x00000000u; // 8016F7F0
  W32(c->r[31]+0x000005D8u,c->r[0]); // 8016F7F4
  c->r[3]=c->r[31]|c->r[31]; // 8016F7F8
  c->r[0]=c->r[4]+0x00000001u; // 8016F7FC
  W32(c->r[31]+0x000005D0u,c->r[0]); // 8016F800
  c->lr=0x8016F808u; f_8016F6B0(c); // 8016F804
  c->r[0]=R32(c->r[31]+0x000005BCu); // 8016F808
  W32(c->r[31]+0x00000680u,c->r[3]); // 8016F80C
  c->r[0]=c->r[0]|0x40000000u; // 8016F810
  W32(c->r[31]+0x000005BCu,c->r[0]); // 8016F814
  goto L_8016FC4C; // 8016F818
L_8016F81C:;
  c->r[4]=R32(c->r[3]+0x00000004u); // 8016F81C
  cmps(c,0,(int32_t)c->r[4],0); // 8016F820
  if (crb(c,2)) { goto L_8016F830; } // 8016F824
  c->r[0]=R32(c->r[4]+0x00000008u); // 8016F828
  goto L_8016F834; // 8016F82C
L_8016F830:;
  c->r[0]=0u+0x00000000u; // 8016F830
L_8016F834:;
  cmps(c,0,(int32_t)c->r[0],0); // 8016F834
  if (!crb(c,2)) { goto L_8016F850; } // 8016F838
  c->r[4]=0u+0x00010000u; // 8016F83C
  c->r[0]=0u+0x00000000u; // 8016F840
  c->r[4]=c->r[4]+0xFFFFE038u; // 8016F844
  W32(c->r[3]+0x00000688u,c->r[4]); // 8016F848
  W32(c->r[3]+0x000005D4u,c->r[0]); // 8016F84C
L_8016F850:;
  c->r[3]=c->r[3]+0x00000354u; // 8016F850
  c->lr=0x8016F858u; f_800667AC(c); // 8016F854
  cmps(c,0,(int32_t)c->r[3],0); // 8016F858
  if (crb(c,2)) { goto L_8016FC4C; } // 8016F85C
  c->r[3]=c->r[31]|c->r[31]; // 8016F860
  c->lr=0x8016F868u; f_8016D6B4(c); // 8016F864
  {uint32_t ea=c->r[2]+0xFFFFBBBCu; c->f[0]=c->ps1[0]=RF32(ea);} // 8016F868
  fcmp(c,0,c->f[1],c->f[0]); // 8016F86C
  if (!crb(c,0)) { goto L_8016FA10; } // 8016F870
  c->r[0]=R8(c->r[31]+0x00000830u); // 8016F874
  cmps(c,0,(int32_t)c->r[0],0); // 8016F878
  if (crb(c,2)) { goto L_8016F938; } // 8016F87C
  c->r[0]=R32(c->r[31]+0x000005D8u); // 8016F880
  cmps(c,0,(int32_t)c->r[0],7); // 8016F884
  if (!crb(c,1)) { goto L_8016F894; } // 8016F888
  c->r[0]=0u+0x00000000u; // 8016F88C
  W32(c->r[31]+0x000005D8u,c->r[0]); // 8016F890
L_8016F894:;
  c->r[0]=R32(c->r[31]+0x000005D8u); // 8016F894
  cmpu(c,0,c->r[0],0x00000007u); // 8016F898
  if (crb(c,1)) { goto L_8016FBA8; } // 8016F89C
  c->r[3]=0u+0x806E0000u; // 8016F8A0
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 8016F8A4
  c->r[3]=c->r[3]+0xFFFFF050u; // 8016F8A8
  c->r[3]=R32(c->r[3]+c->r[0]); // 8016F8AC
  c->ctr=c->r[3]; // 8016F8B0
  if (true) { switch (c->ctr) { case 0x8016F8B8u: goto L_8016F8B8; case 0x8016F8C8u: goto L_8016F8C8; case 0x8016F8D8u: goto L_8016F8D8; case 0x8016F8E8u: goto L_8016F8E8; case 0x8016F8F8u: goto L_8016F8F8; case 0x8016F908u: goto L_8016F908; case 0x8016F918u: goto L_8016F918; case 0x8016F928u: goto L_8016F928; case 0x8016F970u: goto L_8016F970; case 0x8016F980u: goto L_8016F980; case 0x8016F990u: goto L_8016F990; case 0x8016F9A0u: goto L_8016F9A0; case 0x8016F9B0u: goto L_8016F9B0; case 0x8016F9C0u: goto L_8016F9C0; case 0x8016F9D0u: goto L_8016F9D0; case 0x8016F9E0u: goto L_8016F9E0; case 0x8016F9F0u: goto L_8016F9F0; case 0x8016FA00u: goto L_8016FA00; case 0x8016FA54u: goto L_8016FA54; case 0x8016FA64u: goto L_8016FA64; case 0x8016FA74u: goto L_8016FA74; case 0x8016FA84u: goto L_8016FA84; case 0x8016FA94u: goto L_8016FA94; case 0x8016FAA4u: goto L_8016FAA4; case 0x8016FAB4u: goto L_8016FAB4; case 0x8016FAC4u: goto L_8016FAC4; case 0x8016FB0Cu: goto L_8016FB0C; case 0x8016FB1Cu: goto L_8016FB1C; case 0x8016FB2Cu: goto L_8016FB2C; case 0x8016FB3Cu: goto L_8016FB3C; case 0x8016FB4Cu: goto L_8016FB4C; case 0x8016FB5Cu: goto L_8016FB5C; case 0x8016FB6Cu: goto L_8016FB6C; case 0x8016FB7Cu: goto L_8016FB7C; case 0x8016FB8Cu: goto L_8016FB8C; case 0x8016FB9Cu: goto L_8016FB9C; default: break; } dispatch(c,c->ctr); return; } // 8016F8B4
L_8016F8B8:;
  c->r[3]=c->r[31]|c->r[31]; // 8016F8B8
  c->lr=0x8016F8C0u; f_8016E294(c); // 8016F8BC
  W32(c->r[31]+0x00000684u,c->r[3]); // 8016F8C0
  goto L_8016FBA8; // 8016F8C4
L_8016F8C8:;
  c->r[3]=c->r[31]|c->r[31]; // 8016F8C8
  c->lr=0x8016F8D0u; f_8016E1D8(c); // 8016F8CC
  W32(c->r[31]+0x00000684u,c->r[3]); // 8016F8D0
  goto L_8016FBA8; // 8016F8D4
L_8016F8D8:;
  c->r[3]=c->r[31]|c->r[31]; // 8016F8D8
  c->lr=0x8016F8E0u; f_8016E294(c); // 8016F8DC
  W32(c->r[31]+0x00000684u,c->r[3]); // 8016F8E0
  goto L_8016FBA8; // 8016F8E4
L_8016F8E8:;
  c->r[3]=c->r[31]|c->r[31]; // 8016F8E8
  c->lr=0x8016F8F0u; f_8016F180(c); // 8016F8EC
  W32(c->r[31]+0x00000684u,c->r[3]); // 8016F8F0
  goto L_8016FBA8; // 8016F8F4
L_8016F8F8:;
  c->r[3]=c->r[31]|c->r[31]; // 8016F8F8
  c->lr=0x8016F900u; f_8016E294(c); // 8016F8FC
  W32(c->r[31]+0x00000684u,c->r[3]); // 8016F900
  goto L_8016FBA8; // 8016F904
L_8016F908:;
  c->r[3]=c->r[31]|c->r[31]; // 8016F908
  c->lr=0x8016F910u; f_8016FD10(c); // 8016F90C
  W32(c->r[31]+0x00000684u,c->r[3]); // 8016F910
  goto L_8016FBA8; // 8016F914
L_8016F918:;
  c->r[3]=c->r[31]|c->r[31]; // 8016F918
  c->lr=0x8016F920u; f_8016E294(c); // 8016F91C
  W32(c->r[31]+0x00000684u,c->r[3]); // 8016F920
  goto L_8016FBA8; // 8016F924
L_8016F928:;
  c->r[3]=c->r[31]|c->r[31]; // 8016F928
  c->lr=0x8016F930u; f_8016DFA4(c); // 8016F92C
  W32(c->r[31]+0x00000684u,c->r[3]); // 8016F930
  goto L_8016FBA8; // 8016F934
L_8016F938:;
  c->r[0]=R32(c->r[31]+0x000005D8u); // 8016F938
  cmps(c,0,(int32_t)c->r[0],9); // 8016F93C
  if (!crb(c,1)) { goto L_8016F94C; } // 8016F940
  c->r[0]=0u+0x00000000u; // 8016F944
  W32(c->r[31]+0x000005D8u,c->r[0]); // 8016F948
L_8016F94C:;
  c->r[0]=R32(c->r[31]+0x000005D8u); // 8016F94C
  cmpu(c,0,c->r[0],0x00000009u); // 8016F950
  if (crb(c,1)) { goto L_8016FBA8; } // 8016F954
  c->r[3]=0u+0x806E0000u; // 8016F958
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 8016F95C
  c->r[3]=c->r[3]+0xFFFFF028u; // 8016F960
  c->r[3]=R32(c->r[3]+c->r[0]); // 8016F964
  c->ctr=c->r[3]; // 8016F968
  if (true) { switch (c->ctr) { case 0x8016F8B8u: goto L_8016F8B8; case 0x8016F8C8u: goto L_8016F8C8; case 0x8016F8D8u: goto L_8016F8D8; case 0x8016F8E8u: goto L_8016F8E8; case 0x8016F8F8u: goto L_8016F8F8; case 0x8016F908u: goto L_8016F908; case 0x8016F918u: goto L_8016F918; case 0x8016F928u: goto L_8016F928; case 0x8016F970u: goto L_8016F970; case 0x8016F980u: goto L_8016F980; case 0x8016F990u: goto L_8016F990; case 0x8016F9A0u: goto L_8016F9A0; case 0x8016F9B0u: goto L_8016F9B0; case 0x8016F9C0u: goto L_8016F9C0; case 0x8016F9D0u: goto L_8016F9D0; case 0x8016F9E0u: goto L_8016F9E0; case 0x8016F9F0u: goto L_8016F9F0; case 0x8016FA00u: goto L_8016FA00; case 0x8016FA54u: goto L_8016FA54; case 0x8016FA64u: goto L_8016FA64; case 0x8016FA74u: goto L_8016FA74; case 0x8016FA84u: goto L_8016FA84; case 0x8016FA94u: goto L_8016FA94; case 0x8016FAA4u: goto L_8016FAA4; case 0x8016FAB4u: goto L_8016FAB4; case 0x8016FAC4u: goto L_8016FAC4; case 0x8016FB0Cu: goto L_8016FB0C; case 0x8016FB1Cu: goto L_8016FB1C; case 0x8016FB2Cu: goto L_8016FB2C; case 0x8016FB3Cu: goto L_8016FB3C; case 0x8016FB4Cu: goto L_8016FB4C; case 0x8016FB5Cu: goto L_8016FB5C; case 0x8016FB6Cu: goto L_8016FB6C; case 0x8016FB7Cu: goto L_8016FB7C; case 0x8016FB8Cu: goto L_8016FB8C; case 0x8016FB9Cu: goto L_8016FB9C; default: break; } dispatch(c,c->ctr); return; } // 8016F96C
L_8016F970:;
  c->r[3]=c->r[31]|c->r[31]; // 8016F970
  c->lr=0x8016F978u; f_8016E294(c); // 8016F974
  W32(c->r[31]+0x00000684u,c->r[3]); // 8016F978
  goto L_8016FBA8; // 8016F97C
L_8016F980:;
  c->r[3]=c->r[31]|c->r[31]; // 8016F980
  c->lr=0x8016F988u; f_8016E11C(c); // 8016F984
  W32(c->r[31]+0x00000684u,c->r[3]); // 8016F988
  goto L_8016FBA8; // 8016F98C
L_8016F990:;
  c->r[3]=c->r[31]|c->r[31]; // 8016F990
  c->lr=0x8016F998u; f_8016E294(c); // 8016F994
  W32(c->r[31]+0x00000684u,c->r[3]); // 8016F998
  goto L_8016FBA8; // 8016F99C
L_8016F9A0:;
  c->r[3]=c->r[31]|c->r[31]; // 8016F9A0
  c->lr=0x8016F9A8u; f_8016E1D8(c); // 8016F9A4
  W32(c->r[31]+0x00000684u,c->r[3]); // 8016F9A8
  goto L_8016FBA8; // 8016F9AC
L_8016F9B0:;
  c->r[3]=c->r[31]|c->r[31]; // 8016F9B0
  c->lr=0x8016F9B8u; f_8016E294(c); // 8016F9B4
  W32(c->r[31]+0x00000684u,c->r[3]); // 8016F9B8
  goto L_8016FBA8; // 8016F9BC
L_8016F9C0:;
  c->r[3]=c->r[31]|c->r[31]; // 8016F9C0
  c->lr=0x8016F9C8u; f_8016E11C(c); // 8016F9C4
  W32(c->r[31]+0x00000684u,c->r[3]); // 8016F9C8
  goto L_8016FBA8; // 8016F9CC
L_8016F9D0:;
  c->r[3]=c->r[31]|c->r[31]; // 8016F9D0
  c->lr=0x8016F9D8u; f_8016E294(c); // 8016F9D4
  W32(c->r[31]+0x00000684u,c->r[3]); // 8016F9D8
  goto L_8016FBA8; // 8016F9DC
L_8016F9E0:;
  c->r[3]=c->r[31]|c->r[31]; // 8016F9E0
  c->lr=0x8016F9E8u; f_8016FD10(c); // 8016F9E4
  W32(c->r[31]+0x00000684u,c->r[3]); // 8016F9E8
  goto L_8016FBA8; // 8016F9EC
L_8016F9F0:;
  c->r[3]=c->r[31]|c->r[31]; // 8016F9F0
  c->lr=0x8016F9F8u; f_8016E294(c); // 8016F9F4
  W32(c->r[31]+0x00000684u,c->r[3]); // 8016F9F8
  goto L_8016FBA8; // 8016F9FC
L_8016FA00:;
  c->r[3]=c->r[31]|c->r[31]; // 8016FA00
  c->lr=0x8016FA08u; f_8016F180(c); // 8016FA04
  W32(c->r[31]+0x00000684u,c->r[3]); // 8016FA08
  goto L_8016FBA8; // 8016FA0C
L_8016FA10:;
  c->r[0]=R8(c->r[31]+0x00000830u); // 8016FA10
  cmps(c,0,(int32_t)c->r[0],0); // 8016FA14
  if (crb(c,2)) { goto L_8016FAD4; } // 8016FA18
  c->r[0]=R32(c->r[31]+0x000005D8u); // 8016FA1C
  cmps(c,0,(int32_t)c->r[0],7); // 8016FA20
  if (!crb(c,1)) { goto L_8016FA30; } // 8016FA24
  c->r[0]=0u+0x00000000u; // 8016FA28
  W32(c->r[31]+0x000005D8u,c->r[0]); // 8016FA2C
L_8016FA30:;
  c->r[0]=R32(c->r[31]+0x000005D8u); // 8016FA30
  cmpu(c,0,c->r[0],0x00000007u); // 8016FA34
  if (crb(c,1)) { goto L_8016FBA8; } // 8016FA38
  c->r[3]=0u+0x806E0000u; // 8016FA3C
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 8016FA40
  c->r[3]=c->r[3]+0xFFFFF008u; // 8016FA44
  c->r[3]=R32(c->r[3]+c->r[0]); // 8016FA48
  c->ctr=c->r[3]; // 8016FA4C
  if (true) { switch (c->ctr) { case 0x8016F8B8u: goto L_8016F8B8; case 0x8016F8C8u: goto L_8016F8C8; case 0x8016F8D8u: goto L_8016F8D8; case 0x8016F8E8u: goto L_8016F8E8; case 0x8016F8F8u: goto L_8016F8F8; case 0x8016F908u: goto L_8016F908; case 0x8016F918u: goto L_8016F918; case 0x8016F928u: goto L_8016F928; case 0x8016F970u: goto L_8016F970; case 0x8016F980u: goto L_8016F980; case 0x8016F990u: goto L_8016F990; case 0x8016F9A0u: goto L_8016F9A0; case 0x8016F9B0u: goto L_8016F9B0; case 0x8016F9C0u: goto L_8016F9C0; case 0x8016F9D0u: goto L_8016F9D0; case 0x8016F9E0u: goto L_8016F9E0; case 0x8016F9F0u: goto L_8016F9F0; case 0x8016FA00u: goto L_8016FA00; case 0x8016FA54u: goto L_8016FA54; case 0x8016FA64u: goto L_8016FA64; case 0x8016FA74u: goto L_8016FA74; case 0x8016FA84u: goto L_8016FA84; case 0x8016FA94u: goto L_8016FA94; case 0x8016FAA4u: goto L_8016FAA4; case 0x8016FAB4u: goto L_8016FAB4; case 0x8016FAC4u: goto L_8016FAC4; case 0x8016FB0Cu: goto L_8016FB0C; case 0x8016FB1Cu: goto L_8016FB1C; case 0x8016FB2Cu: goto L_8016FB2C; case 0x8016FB3Cu: goto L_8016FB3C; case 0x8016FB4Cu: goto L_8016FB4C; case 0x8016FB5Cu: goto L_8016FB5C; case 0x8016FB6Cu: goto L_8016FB6C; case 0x8016FB7Cu: goto L_8016FB7C; case 0x8016FB8Cu: goto L_8016FB8C; case 0x8016FB9Cu: goto L_8016FB9C; default: break; } dispatch(c,c->ctr); return; } // 8016FA50
L_8016FA54:;
  c->r[3]=c->r[31]|c->r[31]; // 8016FA54
  c->lr=0x8016FA5Cu; f_8016E294(c); // 8016FA58
  W32(c->r[31]+0x00000684u,c->r[3]); // 8016FA5C
  goto L_8016FBA8; // 8016FA60
L_8016FA64:;
  c->r[3]=c->r[31]|c->r[31]; // 8016FA64
  c->lr=0x8016FA6Cu; f_8016E11C(c); // 8016FA68
  W32(c->r[31]+0x00000684u,c->r[3]); // 8016FA6C
  goto L_8016FBA8; // 8016FA70
L_8016FA74:;
  c->r[3]=c->r[31]|c->r[31]; // 8016FA74
  c->lr=0x8016FA7Cu; f_8016E294(c); // 8016FA78
  W32(c->r[31]+0x00000684u,c->r[3]); // 8016FA7C
  goto L_8016FBA8; // 8016FA80
L_8016FA84:;
  c->r[3]=c->r[31]|c->r[31]; // 8016FA84
  c->lr=0x8016FA8Cu; f_8016E1D8(c); // 8016FA88
  W32(c->r[31]+0x00000684u,c->r[3]); // 8016FA8C
  goto L_8016FBA8; // 8016FA90
L_8016FA94:;
  c->r[3]=c->r[31]|c->r[31]; // 8016FA94
  c->lr=0x8016FA9Cu; f_8016E294(c); // 8016FA98
  W32(c->r[31]+0x00000684u,c->r[3]); // 8016FA9C
  goto L_8016FBA8; // 8016FAA0
L_8016FAA4:;
  c->r[3]=c->r[31]|c->r[31]; // 8016FAA4
  c->lr=0x8016FAACu; f_8016F180(c); // 8016FAA8
  W32(c->r[31]+0x00000684u,c->r[3]); // 8016FAAC
  goto L_8016FBA8; // 8016FAB0
L_8016FAB4:;
  c->r[3]=c->r[31]|c->r[31]; // 8016FAB4
  c->lr=0x8016FABCu; f_8016E294(c); // 8016FAB8
  W32(c->r[31]+0x00000684u,c->r[3]); // 8016FABC
  goto L_8016FBA8; // 8016FAC0
L_8016FAC4:;
  c->r[3]=c->r[31]|c->r[31]; // 8016FAC4
  c->lr=0x8016FACCu; f_8016FD10(c); // 8016FAC8
  W32(c->r[31]+0x00000684u,c->r[3]); // 8016FACC
  goto L_8016FBA8; // 8016FAD0
L_8016FAD4:;
  c->r[0]=R32(c->r[31]+0x000005D8u); // 8016FAD4
  cmps(c,0,(int32_t)c->r[0],9); // 8016FAD8
  if (!crb(c,1)) { goto L_8016FAE8; } // 8016FADC
  c->r[0]=0u+0x00000000u; // 8016FAE0
  W32(c->r[31]+0x000005D8u,c->r[0]); // 8016FAE4
L_8016FAE8:;
  c->r[0]=R32(c->r[31]+0x000005D8u); // 8016FAE8
  cmpu(c,0,c->r[0],0x00000009u); // 8016FAEC
  if (crb(c,1)) { goto L_8016FBA8; } // 8016FAF0
  c->r[3]=0u+0x806E0000u; // 8016FAF4
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 8016FAF8
  c->r[3]=c->r[3]+0xFFFFEFE0u; // 8016FAFC
  c->r[3]=R32(c->r[3]+c->r[0]); // 8016FB00
  c->ctr=c->r[3]; // 8016FB04
  if (true) { switch (c->ctr) { case 0x8016F8B8u: goto L_8016F8B8; case 0x8016F8C8u: goto L_8016F8C8; case 0x8016F8D8u: goto L_8016F8D8; case 0x8016F8E8u: goto L_8016F8E8; case 0x8016F8F8u: goto L_8016F8F8; case 0x8016F908u: goto L_8016F908; case 0x8016F918u: goto L_8016F918; case 0x8016F928u: goto L_8016F928; case 0x8016F970u: goto L_8016F970; case 0x8016F980u: goto L_8016F980; case 0x8016F990u: goto L_8016F990; case 0x8016F9A0u: goto L_8016F9A0; case 0x8016F9B0u: goto L_8016F9B0; case 0x8016F9C0u: goto L_8016F9C0; case 0x8016F9D0u: goto L_8016F9D0; case 0x8016F9E0u: goto L_8016F9E0; case 0x8016F9F0u: goto L_8016F9F0; case 0x8016FA00u: goto L_8016FA00; case 0x8016FA54u: goto L_8016FA54; case 0x8016FA64u: goto L_8016FA64; case 0x8016FA74u: goto L_8016FA74; case 0x8016FA84u: goto L_8016FA84; case 0x8016FA94u: goto L_8016FA94; case 0x8016FAA4u: goto L_8016FAA4; case 0x8016FAB4u: goto L_8016FAB4; case 0x8016FAC4u: goto L_8016FAC4; case 0x8016FB0Cu: goto L_8016FB0C; case 0x8016FB1Cu: goto L_8016FB1C; case 0x8016FB2Cu: goto L_8016FB2C; case 0x8016FB3Cu: goto L_8016FB3C; case 0x8016FB4Cu: goto L_8016FB4C; case 0x8016FB5Cu: goto L_8016FB5C; case 0x8016FB6Cu: goto L_8016FB6C; case 0x8016FB7Cu: goto L_8016FB7C; case 0x8016FB8Cu: goto L_8016FB8C; case 0x8016FB9Cu: goto L_8016FB9C; default: break; } dispatch(c,c->ctr); return; } // 8016FB08
L_8016FB0C:;
  c->r[3]=c->r[31]|c->r[31]; // 8016FB0C
  c->lr=0x8016FB14u; f_8016E294(c); // 8016FB10
  W32(c->r[31]+0x00000684u,c->r[3]); // 8016FB14
  goto L_8016FBA8; // 8016FB18
L_8016FB1C:;
  c->r[3]=c->r[31]|c->r[31]; // 8016FB1C
  c->lr=0x8016FB24u; f_8016E11C(c); // 8016FB20
  W32(c->r[31]+0x00000684u,c->r[3]); // 8016FB24
  goto L_8016FBA8; // 8016FB28
L_8016FB2C:;
  c->r[3]=c->r[31]|c->r[31]; // 8016FB2C
  c->lr=0x8016FB34u; f_8016E294(c); // 8016FB30
  W32(c->r[31]+0x00000684u,c->r[3]); // 8016FB34
  goto L_8016FBA8; // 8016FB38
L_8016FB3C:;
  c->r[3]=c->r[31]|c->r[31]; // 8016FB3C
  c->lr=0x8016FB44u; f_8016E1D8(c); // 8016FB40
  W32(c->r[31]+0x00000684u,c->r[3]); // 8016FB44
  goto L_8016FBA8; // 8016FB48
L_8016FB4C:;
  c->r[3]=c->r[31]|c->r[31]; // 8016FB4C
  c->lr=0x8016FB54u; f_8016E294(c); // 8016FB50
  W32(c->r[31]+0x00000684u,c->r[3]); // 8016FB54
  goto L_8016FBA8; // 8016FB58
L_8016FB5C:;
  c->r[3]=c->r[31]|c->r[31]; // 8016FB5C
  c->lr=0x8016FB64u; f_8016E11C(c); // 8016FB60
  W32(c->r[31]+0x00000684u,c->r[3]); // 8016FB64
  goto L_8016FBA8; // 8016FB68
L_8016FB6C:;
  c->r[3]=c->r[31]|c->r[31]; // 8016FB6C
  c->lr=0x8016FB74u; f_8016E294(c); // 8016FB70
  W32(c->r[31]+0x00000684u,c->r[3]); // 8016FB74
  goto L_8016FBA8; // 8016FB78
L_8016FB7C:;
  c->r[3]=c->r[31]|c->r[31]; // 8016FB7C
  c->lr=0x8016FB84u; f_8016F180(c); // 8016FB80
  W32(c->r[31]+0x00000684u,c->r[3]); // 8016FB84
  goto L_8016FBA8; // 8016FB88
L_8016FB8C:;
  c->r[3]=c->r[31]|c->r[31]; // 8016FB8C
  c->lr=0x8016FB94u; f_8016E294(c); // 8016FB90
  W32(c->r[31]+0x00000684u,c->r[3]); // 8016FB94
  goto L_8016FBA8; // 8016FB98
L_8016FB9C:;
  c->r[3]=c->r[31]|c->r[31]; // 8016FB9C
  c->lr=0x8016FBA4u; f_8016FD10(c); // 8016FBA0
  W32(c->r[31]+0x00000684u,c->r[3]); // 8016FBA4
L_8016FBA8:;
  c->r[3]=R32(c->r[31]+0x000005D8u); // 8016FBA8
  c->r[0]=c->r[3]+0x00000001u; // 8016FBAC
  W32(c->r[31]+0x000005D8u,c->r[0]); // 8016FBB0
  goto L_8016FC4C; // 8016FBB4
L_8016FBB8:;
  c->r[3]=c->r[3]+0x00000354u; // 8016FBB8
  c->lr=0x8016FBC0u; f_800667AC(c); // 8016FBBC
  cmps(c,0,(int32_t)c->r[3],0); // 8016FBC0
  if (crb(c,2)) { goto L_8016FC4C; } // 8016FBC4
  c->r[0]=0u+0x00000001u; // 8016FBC8
  W32(c->r[31]+0x000005D0u,c->r[0]); // 8016FBCC
  c->r[3]=c->r[31]|c->r[31]; // 8016FBD0
  c->lr=0x8016FBD8u; f_8016F6B0(c); // 8016FBD4
  c->r[0]=R32(c->r[31]+0x000005BCu); // 8016FBD8
  W32(c->r[31]+0x00000680u,c->r[3]); // 8016FBDC
  c->r[0]=c->r[0]|0x40000000u; // 8016FBE0
  W32(c->r[31]+0x000005BCu,c->r[0]); // 8016FBE4
  goto L_8016FC4C; // 8016FBE8
L_8016FBEC:;
  c->r[5]=R32(c->r[3]+0x0000044Cu); // 8016FBEC
  c->r[3]=c->r[31]|c->r[31]; // 8016FBF0
  {uint32_t ea=c->r[2]+0xFFFFBB74u; c->f[0]=c->ps1[0]=RF32(ea);} // 8016FBF4
  c->r[4]=0u+0x00000016u; // 8016FBF8
  {uint32_t ea=c->r[5]+0x00000000u; WF32(ea,c->f[0]);} // 8016FBFC
  c->r[5]=0u+0x00000001u; // 8016FC00
  c->lr=0x8016FC08u; f_800D5F20(c); // 8016FC04
  c->r[7]=R32(c->r[31]+0x00000504u); // 8016FC08
  c->r[3]=c->r[31]|c->r[31]; // 8016FC0C
  c->r[0]=R32(c->r[31]+0x00000508u); // 8016FC10
  c->r[4]=c->r[1]+0x00000008u; // 8016FC14
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 8016FC18
  c->r[5]=0u+0x00000021u; // 8016FC1C
  c->r[6]=0u+0x00000000u; // 8016FC20
  W32(c->r[1]+0x00000008u,c->r[7]); // 8016FC24
  c->r[12]=R32(c->r[31]+0x0000001Cu); // 8016FC28
  c->r[12]=R32(c->r[12]+0x000001A0u); // 8016FC2C
  c->ctr=c->r[12]; // 8016FC30
  if (true) { c->lr=0x8016FC38u; dispatch(c,c->ctr); } // 8016FC34
  c->r[0]=0u+0x00000000u; // 8016FC38
  W32(c->r[31]+0x000005D0u,c->r[0]); // 8016FC3C
  c->r[3]=c->r[31]|c->r[31]; // 8016FC40
  c->lr=0x8016FC48u; f_8016FC60(c); // 8016FC44
  W32(c->r[31]+0x00000680u,c->r[3]); // 8016FC48
L_8016FC4C:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 8016FC4C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8016FC50
  c->lr=c->r[0]; // 8016FC54
  c->r[1]=c->r[1]+0x00000020u; // 8016FC58
  return; // 8016FC5C
}

// fn_8016FC60
void f_8016FC60(Ctx* __restrict c) {
  trace_call(0x8016FC60u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8016FC60
  c->r[0]=c->lr; // 8016FC64
  W32(c->r[1]+0x00000044u,c->r[0]); // 8016FC68
  {uint32_t ea=c->r[1]+0x00000030u; for(int i=28;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 8016FC6C
  c->r[31]=c->r[1]|c->r[1]; // 8016FC70
  c->r[28]=c->r[3]|c->r[3]; // 8016FC74
  c->lr=0x8016FC7Cu; f_8016BD70(c); // 8016FC78
  c->r[4]=c->r[3]|c->r[3]; // 8016FC7C
  c->r[3]=c->r[28]|c->r[28]; // 8016FC80
  c->lr=0x8016FC88u; f_80062F4C(c); // 8016FC84
  c->r[0]=R8(c->r[28]+0x00000010u); // 8016FC88
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 8016FC8C
  c->r[3]=c->r[28]+c->r[0]; // 8016FC90
  c->r[29]=R32(c->r[3]+0x00000014u); // 8016FC94
  cmps(c,0,(int32_t)c->r[29],0); // 8016FC98
  if (crb(c,2)) { goto L_8016FCD0; } // 8016FC9C
  c->r[30]=0u+0x00000000u; // 8016FCA0
  W32(c->r[31]+0x00000024u,c->r[1]); // 8016FCA4
  W8(c->r[31]+0x00000008u,c->r[30]); // 8016FCA8
  c->lr=0x8016FCB0u; f_8016BD70(c); // 8016FCAC
  W32(c->r[29]+0x00000000u,c->r[3]); // 8016FCB0
  c->r[0]=c->r[13]+0xFFFF8A04u; // 8016FCB4
  c->r[3]=0u+0x806E0000u; // 8016FCB8
  W32(c->r[29]+0x00000004u,c->r[0]); // 8016FCBC
  c->r[3]=c->r[3]+0xFFFFF320u; // 8016FCC0
  W32(c->r[29]+0x00000008u,c->r[30]); // 8016FCC4
  W32(c->r[29]+0x0000000Cu,c->r[30]); // 8016FCC8
  W32(c->r[29]+0x00000010u,c->r[3]); // 8016FCCC
L_8016FCD0:;
  W32(c->r[28]+0x00000008u,c->r[29]); // 8016FCD0
  c->r[0]=0u+0x00000000u; // 8016FCD4
  c->r[3]=c->r[28]|c->r[28]; // 8016FCD8
  c->r[4]=c->r[29]|c->r[29]; // 8016FCDC
  W32(c->r[29]+0x00000008u,c->r[0]); // 8016FCE0
  c->r[0]=R32(c->r[28]+0x00000004u); // 8016FCE4
  W32(c->r[28]+0x0000000Cu,c->r[0]); // 8016FCE8
  c->lr=0x8016FCF0u; f_8006306C(c); // 8016FCEC
  c->r[10]=c->r[31]|c->r[31]; // 8016FCF0
  c->r[3]=c->r[29]|c->r[29]; // 8016FCF4
  {uint32_t ea=c->r[10]+0x00000030u; for(int i=28;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 8016FCF8
  c->r[10]=R32(c->r[1]+0x00000000u); // 8016FCFC
  c->r[0]=R32(c->r[10]+0x00000004u); // 8016FD00
  c->r[1]=c->r[10]|c->r[10]; // 8016FD04
  c->lr=c->r[0]; // 8016FD08
  return; // 8016FD0C
}

// fn_8016FD10
void f_8016FD10(Ctx* __restrict c) {
  trace_call(0x8016FD10u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8016FD10
  c->r[0]=c->lr; // 8016FD14
  W32(c->r[1]+0x00000044u,c->r[0]); // 8016FD18
  {uint32_t ea=c->r[1]+0x00000030u; for(int i=28;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 8016FD1C
  c->r[31]=c->r[1]|c->r[1]; // 8016FD20
  c->r[28]=c->r[3]|c->r[3]; // 8016FD24
  c->lr=0x8016FD2Cu; f_8016B7AC(c); // 8016FD28
  c->r[4]=c->r[3]|c->r[3]; // 8016FD2C
  c->r[3]=c->r[28]|c->r[28]; // 8016FD30
  c->lr=0x8016FD38u; f_80062F4C(c); // 8016FD34
  c->r[0]=R8(c->r[28]+0x00000010u); // 8016FD38
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 8016FD3C
  c->r[3]=c->r[28]+c->r[0]; // 8016FD40
  c->r[29]=R32(c->r[3]+0x00000014u); // 8016FD44
  cmps(c,0,(int32_t)c->r[29],0); // 8016FD48
  if (crb(c,2)) { goto L_8016FD80; } // 8016FD4C
  c->r[30]=0u+0x00000000u; // 8016FD50
  W32(c->r[31]+0x00000024u,c->r[1]); // 8016FD54
  W8(c->r[31]+0x00000008u,c->r[30]); // 8016FD58
  c->lr=0x8016FD60u; f_8016B7AC(c); // 8016FD5C
  W32(c->r[29]+0x00000000u,c->r[3]); // 8016FD60
  c->r[0]=c->r[13]+0xFFFF89E0u; // 8016FD64
  c->r[3]=0u+0x806E0000u; // 8016FD68
  W32(c->r[29]+0x00000004u,c->r[0]); // 8016FD6C
  c->r[3]=c->r[3]+0xFFFFF2B0u; // 8016FD70
  W32(c->r[29]+0x00000008u,c->r[30]); // 8016FD74
  W32(c->r[29]+0x0000000Cu,c->r[30]); // 8016FD78
  W32(c->r[29]+0x00000010u,c->r[3]); // 8016FD7C
L_8016FD80:;
  W32(c->r[28]+0x00000008u,c->r[29]); // 8016FD80
  c->r[0]=0u+0x00000000u; // 8016FD84
  c->r[3]=c->r[28]|c->r[28]; // 8016FD88
  c->r[4]=c->r[29]|c->r[29]; // 8016FD8C
  W32(c->r[29]+0x00000008u,c->r[0]); // 8016FD90
  c->r[0]=R32(c->r[28]+0x00000004u); // 8016FD94
  W32(c->r[28]+0x0000000Cu,c->r[0]); // 8016FD98
  c->lr=0x8016FDA0u; f_8006306C(c); // 8016FD9C
  c->r[0]=R32(c->r[28]+0x000005BCu); // 8016FDA0
  c->r[10]=c->r[31]|c->r[31]; // 8016FDA4
  c->r[3]=c->r[29]|c->r[29]; // 8016FDA8
  c->r[0]=c->r[0]|0x40000000u; // 8016FDAC
  W32(c->r[28]+0x000005BCu,c->r[0]); // 8016FDB0
  {uint32_t ea=c->r[10]+0x00000030u; for(int i=28;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 8016FDB4
  c->r[10]=R32(c->r[1]+0x00000000u); // 8016FDB8
  c->r[0]=R32(c->r[10]+0x00000004u); // 8016FDBC
  c->r[1]=c->r[10]|c->r[10]; // 8016FDC0
  c->lr=c->r[0]; // 8016FDC4
  return; // 8016FDC8
}

// fn_8016FDCC
void f_8016FDCC(Ctx* __restrict c) {
  trace_call(0x8016FDCCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8016FDCC
  c->r[0]=c->lr; // 8016FDD0
  c->r[3]=0u+0x00000002u; // 8016FDD4
  W32(c->r[1]+0x00000014u,c->r[0]); // 8016FDD8
  c->r[0]=0u+0x00000003u; // 8016FDDC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8016FDE0
  c->r[31]=c->r[4]|c->r[4]; // 8016FDE4
  W32(c->r[4]+0x000005C8u,c->r[3]); // 8016FDE8
  c->r[3]=c->r[31]|c->r[31]; // 8016FDEC
  W32(c->r[4]+0x000005D0u,c->r[0]); // 8016FDF0
  c->lr=0x8016FDF8u; f_8016F6B0(c); // 8016FDF4
  c->r[0]=R32(c->r[31]+0x000005BCu); // 8016FDF8
  c->r[0]=c->r[0]|0x40000000u; // 8016FDFC
  W32(c->r[31]+0x000005BCu,c->r[0]); // 8016FE00
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8016FE04
  c->r[0]=R32(c->r[1]+0x00000014u); // 8016FE08
  c->lr=c->r[0]; // 8016FE0C
  c->r[1]=c->r[1]+0x00000010u; // 8016FE10
  return; // 8016FE14
}

// fn_8016FE18
void f_8016FE18(Ctx* __restrict c) {
  trace_call(0x8016FE18u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8016FE18
  c->r[0]=c->lr; // 8016FE1C
  c->r[3]=0u+0x00000002u; // 8016FE20
  c->r[5]=0u+0x00000001u; // 8016FE24
  W32(c->r[1]+0x00000014u,c->r[0]); // 8016FE28
  c->r[0]=0u+0x00000008u; // 8016FE2C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8016FE30
  c->r[31]=c->r[4]|c->r[4]; // 8016FE34
  W32(c->r[4]+0x000005D0u,c->r[3]); // 8016FE38
  c->r[3]=c->r[31]|c->r[31]; // 8016FE3C
  W32(c->r[4]+0x000005C8u,c->r[0]); // 8016FE40
  c->r[4]=R32(c->r[4]+0x00000688u); // 8016FE44
  c->lr=0x8016FE4Cu; f_80064744(c); // 8016FE48
  c->r[3]=c->r[31]|c->r[31]; // 8016FE4C
  c->lr=0x8016FE54u; f_8016F6B0(c); // 8016FE50
  c->r[0]=R32(c->r[31]+0x000005BCu); // 8016FE54
  c->r[0]=c->r[0]|0x40000000u; // 8016FE58
  W32(c->r[31]+0x000005BCu,c->r[0]); // 8016FE5C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8016FE60
  c->r[0]=R32(c->r[1]+0x00000014u); // 8016FE64
  c->lr=c->r[0]; // 8016FE68
  c->r[1]=c->r[1]+0x00000010u; // 8016FE6C
  return; // 8016FE70
}

// fn_8016FE74
void f_8016FE74(Ctx* __restrict c) {
  trace_call(0x8016FE74u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8016FE74
  c->r[0]=c->lr; // 8016FE78
  W32(c->r[1]+0x00000024u,c->r[0]); // 8016FE7C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8016FE80
  c->r[31]=c->r[3]|c->r[3]; // 8016FE84
  c->r[4]=R32(c->r[3]+0x00000004u); // 8016FE88
  cmps(c,0,(int32_t)c->r[4],0); // 8016FE8C
  if (crb(c,2)) { goto L_8016FE9C; } // 8016FE90
  c->r[0]=R32(c->r[4]+0x00000008u); // 8016FE94
  goto L_8016FEA0; // 8016FE98
L_8016FE9C:;
  c->r[0]=0u+0x00000000u; // 8016FE9C
L_8016FEA0:;
  cmps(c,0,(int32_t)c->r[0],0); // 8016FEA0
  if (!crb(c,2)) { goto L_8016FF0C; } // 8016FEA4
  c->r[3]=c->r[31]|c->r[31]; // 8016FEA8
  c->r[4]=0u+0x0000000Au; // 8016FEAC
  c->lr=0x8016FEB4u; f_8017133C(c); // 8016FEB0
  c->r[4]=0u+0x00010000u; // 8016FEB4
  c->r[3]=c->r[31]|c->r[31]; // 8016FEB8
  c->r[4]=c->r[4]+0xFFFFE100u; // 8016FEBC
  c->r[5]=0u+0x00000001u; // 8016FEC0
  c->lr=0x8016FEC8u; f_80064744(c); // 8016FEC4
  c->r[4]=0u+0x80690000u; // 8016FEC8
  {uint32_t ea=c->r[2]+0xFFFFBB78u; c->f[1]=c->ps1[1]=RF32(ea);} // 8016FECC
  c->r[4]=c->r[4]+0x00001400u; // 8016FED0
  {uint32_t ea=c->r[2]+0xFFFFBB74u; c->f[2]=c->ps1[2]=RF32(ea);} // 8016FED4
  {uint32_t ea=c->r[2]+0xFFFFBB98u; c->f[3]=c->ps1[3]=RF32(ea);} // 8016FED8
  c->r[3]=c->r[31]+0x000005DCu; // 8016FEDC
  c->r[4]=c->r[4]+0x000000D8u; // 8016FEE0
  c->lr=0x8016FEE8u; f_800E24D0(c); // 8016FEE4
  c->r[3]=c->r[31]+0x000005DCu; // 8016FEE8
  c->r[4]=0u+0x00000000u; // 8016FEEC
  c->lr=0x8016FEF4u; f_800E2960(c); // 8016FEF0
  c->r[0]=0u+0x00000000u; // 8016FEF4
  W8(c->r[1]+0x00000008u,c->r[0]); // 8016FEF8
  c->r[3]=c->r[1]+0x00000008u; // 8016FEFC
  c->lr=0x8016FF04u; f_800462D8(c); // 8016FF00
  c->r[4]=0u+0x00000000u; // 8016FF04
  c->lr=0x8016FF0Cu; f_800EA1A0(c); // 8016FF08
L_8016FF0C:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 8016FF0C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8016FF10
  c->lr=c->r[0]; // 8016FF14
  c->r[1]=c->r[1]+0x00000020u; // 8016FF18
  return; // 8016FF1C
}

// fn_8016FF20
void f_8016FF20(Ctx* __restrict c) {
  trace_call(0x8016FF20u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8016FF20
  c->r[0]=c->lr; // 8016FF24
  W32(c->r[1]+0x00000044u,c->r[0]); // 8016FF28
  W32(c->r[1]+0x0000003Cu,c->r[31]); // 8016FF2C
  c->r[31]=c->r[3]|c->r[3]; // 8016FF30
  c->r[4]=R32(c->r[3]+0x00000004u); // 8016FF34
  cmps(c,0,(int32_t)c->r[4],0); // 8016FF38
  if (crb(c,2)) { goto L_8016FF48; } // 8016FF3C
  c->r[0]=R32(c->r[4]+0x00000008u); // 8016FF40
  goto L_8016FF4C; // 8016FF44
L_8016FF48:;
  c->r[0]=0u+0x00000000u; // 8016FF48
L_8016FF4C:;
  cmps(c,0,(int32_t)c->r[0],0); // 8016FF4C
  if (!crb(c,2)) { goto L_8016FFAC; } // 8016FF50
  c->r[3]=c->r[3]+0x000001B8u; // 8016FF54
  c->r[4]=c->r[1]+0x00000008u; // 8016FF58
  c->lr=0x8016FF60u; f_80382F2C(c); // 8016FF5C
  c->r[4]=0u+0x80690000u; // 8016FF60
  {uint32_t ea=c->r[2]+0xFFFFBB78u; c->f[1]=c->ps1[1]=RF32(ea);} // 8016FF64
  c->r[4]=c->r[4]+0x00001400u; // 8016FF68
  {uint32_t ea=c->r[2]+0xFFFFBB74u; c->f[2]=c->ps1[2]=RF32(ea);} // 8016FF6C
  {uint32_t ea=c->r[2]+0xFFFFBB98u; c->f[3]=c->ps1[3]=RF32(ea);} // 8016FF70
  c->r[3]=c->r[31]+0x000005DCu; // 8016FF74
  c->r[4]=c->r[4]+0x000000E3u; // 8016FF78
  c->r[5]=c->r[1]+0x00000008u; // 8016FF7C
  c->lr=0x8016FF84u; f_800E2604(c); // 8016FF80
  c->r[4]=0u+0x00010000u; // 8016FF84
  c->r[3]=c->r[31]|c->r[31]; // 8016FF88
  c->r[4]=c->r[4]+0xFFFFDF0Cu; // 8016FF8C
  c->r[5]=0u+0x00000001u; // 8016FF90
  c->lr=0x8016FF98u; f_80064744(c); // 8016FF94
  {uint32_t ea=c->r[31]+0x0000079Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8016FF98
  c->r[3]=c->r[31]+0x000007E0u; // 8016FF9C
  c->lr=0x8016FFA4u; f_80170010(c); // 8016FFA0
  c->r[0]=0u+0x00000038u; // 8016FFA4
  W32(c->r[31]+0x000005C8u,c->r[0]); // 8016FFA8
L_8016FFAC:;
  c->r[3]=R32(c->r[31]+0x00000404u); // 8016FFAC
  {uint32_t ea=c->r[2]+0xFFFFBBC0u; c->f[1]=c->ps1[1]=RF32(ea);} // 8016FFB0
  c->lr=0x8016FFB8u; f_802EA5A4(c); // 8016FFB4
  cmps(c,0,(int32_t)c->r[3],0); // 8016FFB8
  if (crb(c,2)) { goto L_8016FFDC; } // 8016FFBC
  {uint32_t ea=c->r[31]+0x00000798u; c->f[1]=c->ps1[1]=RF32(ea);} // 8016FFC0
  c->r[3]=c->r[31]|c->r[31]; // 8016FFC4
  c->r[4]=0u+0x00000000u; // 8016FFC8
  c->r[5]=0u+0xFFFFFFFFu; // 8016FFCC
  c->lr=0x8016FFD4u; f_80062194(c); // 8016FFD0
  c->r[0]=0u+0x00000008u; // 8016FFD4
  W32(c->r[31]+0x000005C8u,c->r[0]); // 8016FFD8
L_8016FFDC:;
  c->r[3]=c->r[31]+0x00000354u; // 8016FFDC
  c->lr=0x8016FFE4u; f_800667AC(c); // 8016FFE0
  cmps(c,0,(int32_t)c->r[3],0); // 8016FFE4
  if (crb(c,2)) { goto L_8016FFFC; } // 8016FFE8
  c->r[0]=0u+0x00000000u; // 8016FFEC
  W32(c->r[31]+0x00000684u,c->r[0]); // 8016FFF0
  c->r[3]=c->r[31]|c->r[31]; // 8016FFF4
  c->lr=0x8016FFFCu; f_80171218(c); // 8016FFF8
L_8016FFFC:;
  c->r[0]=R32(c->r[1]+0x00000044u); // 8016FFFC
  c->r[31]=R32(c->r[1]+0x0000003Cu); // 80170000
  c->lr=c->r[0]; // 80170004
  c->r[1]=c->r[1]+0x00000040u; // 80170008
  return; // 8017000C
}

// fn_80170010
void f_80170010(Ctx* __restrict c) {
  trace_call(0x80170010u);
  {uint32_t ea=c->r[2]+0xFFFFBB74u; c->f[0]=c->ps1[0]=RF32(ea);} // 80170010
  c->r[0]=0u+0x00000000u; // 80170014
  {uint32_t ea=c->r[3]+0x0000000Cu; WF32(ea,c->f[1]);} // 80170018
  {uint32_t ea=c->r[3]+0x00000010u; WF32(ea,c->f[0]);} // 8017001C
  W8(c->r[3]+0x00000014u,c->r[0]); // 80170020
  return; // 80170024
}

// fn_80170028
void f_80170028(Ctx* __restrict c) {
  trace_call(0x80170028u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80170028
  c->r[0]=c->lr; // 8017002C
  W32(c->r[1]+0x00000014u,c->r[0]); // 80170030
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80170034
  c->r[31]=c->r[4]|c->r[4]; // 80170038
  c->r[3]=R32(c->r[4]+0x00000404u); // 8017003C
  c->lr=0x80170044u; f_802EA4B0(c); // 80170040
  {uint32_t ea=c->r[2]+0xFFFFBBBCu; c->f[0]=c->ps1[0]=RF32(ea);} // 80170044
  fcmp(c,0,c->f[1],c->f[0]); // 80170048
  setcrb(c,2,crb(c,0)|crb(c,2)); // 8017004C
  if (!crb(c,2)) { goto L_80170064; } // 80170050
  c->r[3]=0u+0x00010000u; // 80170054
  c->r[0]=c->r[3]+0xFFFFE038u; // 80170058
  W32(c->r[31]+0x00000688u,c->r[0]); // 8017005C
  goto L_80170070; // 80170060
L_80170064:;
  c->r[3]=0u+0x00010000u; // 80170064
  c->r[0]=c->r[3]+0xFFFFE039u; // 80170068
  W32(c->r[31]+0x00000688u,c->r[0]); // 8017006C
L_80170070:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80170070
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80170074
  c->lr=c->r[0]; // 80170078
  c->r[1]=c->r[1]+0x00000010u; // 8017007C
  return; // 80170080
}

// fn_80170084
void f_80170084(Ctx* __restrict c) {
  trace_call(0x80170084u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80170084
  c->r[0]=c->lr; // 80170088
  W32(c->r[1]+0x00000044u,c->r[0]); // 8017008C
  W32(c->r[1]+0x0000003Cu,c->r[31]); // 80170090
  c->r[31]=c->r[3]|c->r[3]; // 80170094
  c->r[4]=R32(c->r[3]+0x00000004u); // 80170098
  cmps(c,0,(int32_t)c->r[4],0); // 8017009C
  if (crb(c,2)) { goto L_801700AC; } // 801700A0
  c->r[0]=R32(c->r[4]+0x00000008u); // 801700A4
  goto L_801700B0; // 801700A8
L_801700AC:;
  c->r[0]=0u+0x00000000u; // 801700AC
L_801700B0:;
  cmps(c,0,(int32_t)c->r[0],0); // 801700B0
  if (!crb(c,2)) { goto L_80170110; } // 801700B4
  c->r[3]=c->r[3]+0x000001B8u; // 801700B8
  c->r[4]=c->r[1]+0x00000008u; // 801700BC
  c->lr=0x801700C4u; f_80382F2C(c); // 801700C0
  c->r[4]=0u+0x80690000u; // 801700C4
  {uint32_t ea=c->r[2]+0xFFFFBB78u; c->f[1]=c->ps1[1]=RF32(ea);} // 801700C8
  c->r[4]=c->r[4]+0x00001400u; // 801700CC
  {uint32_t ea=c->r[2]+0xFFFFBB74u; c->f[2]=c->ps1[2]=RF32(ea);} // 801700D0
  {uint32_t ea=c->r[2]+0xFFFFBB98u; c->f[3]=c->ps1[3]=RF32(ea);} // 801700D4
  c->r[3]=c->r[31]+0x000005DCu; // 801700D8
  c->r[4]=c->r[4]+0x000000EEu; // 801700DC
  c->r[5]=c->r[1]+0x00000008u; // 801700E0
  c->lr=0x801700E8u; f_800E2604(c); // 801700E4
  c->r[4]=0u+0x00010000u; // 801700E8
  c->r[3]=c->r[31]|c->r[31]; // 801700EC
  c->r[4]=c->r[4]+0xFFFFDF0Du; // 801700F0
  c->r[5]=0u+0x00000001u; // 801700F4
  c->lr=0x801700FCu; f_80064744(c); // 801700F8
  {uint32_t ea=c->r[31]+0x000007A4u; c->f[1]=c->ps1[1]=RF32(ea);} // 801700FC
  c->r[3]=c->r[31]+0x000007E0u; // 80170100
  c->lr=0x80170108u; f_80170010(c); // 80170104
  c->r[0]=0u+0x00000058u; // 80170108
  W32(c->r[31]+0x000005C8u,c->r[0]); // 8017010C
L_80170110:;
  c->r[3]=R32(c->r[31]+0x00000404u); // 80170110
  {uint32_t ea=c->r[2]+0xFFFFBBC4u; c->f[1]=c->ps1[1]=RF32(ea);} // 80170114
  c->lr=0x8017011Cu; f_802EA5A4(c); // 80170118
  cmps(c,0,(int32_t)c->r[3],0); // 8017011C
  if (crb(c,2)) { goto L_80170140; } // 80170120
  {uint32_t ea=c->r[31]+0x000007A0u; c->f[1]=c->ps1[1]=RF32(ea);} // 80170124
  c->r[3]=c->r[31]|c->r[31]; // 80170128
  c->r[4]=0u+0x00000000u; // 8017012C
  c->r[5]=0u+0xFFFFFFFFu; // 80170130
  c->lr=0x80170138u; f_80062194(c); // 80170134
  c->r[0]=0u+0x00000008u; // 80170138
  W32(c->r[31]+0x000005C8u,c->r[0]); // 8017013C
L_80170140:;
  c->r[3]=c->r[31]+0x00000354u; // 80170140
  c->lr=0x80170148u; f_800667AC(c); // 80170144
  cmps(c,0,(int32_t)c->r[3],0); // 80170148
  if (crb(c,2)) { goto L_80170160; } // 8017014C
  c->r[0]=0u+0x00000000u; // 80170150
  W32(c->r[31]+0x00000684u,c->r[0]); // 80170154
  c->r[3]=c->r[31]|c->r[31]; // 80170158
  c->lr=0x80170160u; f_80171218(c); // 8017015C
L_80170160:;
  c->r[0]=R32(c->r[1]+0x00000044u); // 80170160
  c->r[31]=R32(c->r[1]+0x0000003Cu); // 80170164
  c->lr=c->r[0]; // 80170168
  c->r[1]=c->r[1]+0x00000040u; // 8017016C
  return; // 80170170
}

// fn_80170174
void f_80170174(Ctx* __restrict c) {
  trace_call(0x80170174u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80170174
  c->r[0]=c->lr; // 80170178
  W32(c->r[1]+0x00000014u,c->r[0]); // 8017017C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80170180
  c->r[31]=c->r[4]|c->r[4]; // 80170184
  c->r[3]=R32(c->r[4]+0x00000404u); // 80170188
  c->lr=0x80170190u; f_802EA4B0(c); // 8017018C
  {uint32_t ea=c->r[2]+0xFFFFBBC8u; c->f[0]=c->ps1[0]=RF32(ea);} // 80170190
  fcmp(c,0,c->f[1],c->f[0]); // 80170194
  setcrb(c,2,crb(c,0)|crb(c,2)); // 80170198
  if (!crb(c,2)) { goto L_801701B0; } // 8017019C
  c->r[3]=0u+0x00010000u; // 801701A0
  c->r[0]=c->r[3]+0xFFFFE038u; // 801701A4
  W32(c->r[31]+0x00000688u,c->r[0]); // 801701A8
  goto L_801701BC; // 801701AC
L_801701B0:;
  c->r[3]=0u+0x00010000u; // 801701B0
  c->r[0]=c->r[3]+0xFFFFE039u; // 801701B4
  W32(c->r[31]+0x00000688u,c->r[0]); // 801701B8
L_801701BC:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801701BC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801701C0
  c->lr=c->r[0]; // 801701C4
  c->r[1]=c->r[1]+0x00000010u; // 801701C8
  return; // 801701CC
}

// fn_801701D0
void f_801701D0(Ctx* __restrict c) {
  trace_call(0x801701D0u);
  {uint32_t ea=c->r[1]+0xFFFFFF80u; W32(ea,c->r[1]); c->r[1]=ea;} // 801701D0
  c->r[0]=c->lr; // 801701D4
  W32(c->r[1]+0x00000084u,c->r[0]); // 801701D8
  W32(c->r[1]+0x0000007Cu,c->r[31]); // 801701DC
  c->r[31]=c->r[3]|c->r[3]; // 801701E0
  c->r[0]=R32(c->r[3]+0x000005D4u); // 801701E4
  cmps(c,0,(int32_t)c->r[0],0); // 801701E8
  if (crb(c,2)) { goto L_8017020C; } // 801701EC
  cmps(c,0,(int32_t)c->r[0],1); // 801701F0
  if (crb(c,2)) { goto L_80170324; } // 801701F4
  cmps(c,0,(int32_t)c->r[0],2); // 801701F8
  if (crb(c,2)) { goto L_80170374; } // 801701FC
  cmps(c,0,(int32_t)c->r[0],3); // 80170200
  if (crb(c,2)) { goto L_801703B0; } // 80170204
  goto L_801703D0; // 80170208
L_8017020C:;
  c->r[4]=R32(c->r[3]+0x00000004u); // 8017020C
  cmps(c,0,(int32_t)c->r[4],0); // 80170210
  if (crb(c,2)) { goto L_80170220; } // 80170214
  c->r[0]=R32(c->r[4]+0x00000008u); // 80170218
  goto L_80170224; // 8017021C
L_80170220:;
  c->r[0]=0u+0x00000000u; // 80170220
L_80170224:;
  cmps(c,0,(int32_t)c->r[0],0); // 80170224
  if (!crb(c,2)) { goto L_80170284; } // 80170228
  c->r[3]=c->r[3]+0x000001B8u; // 8017022C
  c->r[4]=c->r[1]+0x00000040u; // 80170230
  c->lr=0x80170238u; f_80382F2C(c); // 80170234
  c->r[4]=0u+0x80690000u; // 80170238
  {uint32_t ea=c->r[2]+0xFFFFBB78u; c->f[1]=c->ps1[1]=RF32(ea);} // 8017023C
  c->r[4]=c->r[4]+0x00001400u; // 80170240
  {uint32_t ea=c->r[2]+0xFFFFBB74u; c->f[2]=c->ps1[2]=RF32(ea);} // 80170244
  {uint32_t ea=c->r[2]+0xFFFFBB98u; c->f[3]=c->ps1[3]=RF32(ea);} // 80170248
  c->r[3]=c->r[31]+0x000005DCu; // 8017024C
  c->r[4]=c->r[4]+0x000000F9u; // 80170250
  c->r[5]=c->r[1]+0x00000040u; // 80170254
  c->lr=0x8017025Cu; f_800E2604(c); // 80170258
  c->r[4]=0u+0x00010000u; // 8017025C
  c->r[3]=c->r[31]|c->r[31]; // 80170260
  c->r[4]=c->r[4]+0xFFFFDF0Eu; // 80170264
  c->r[5]=0u+0x00000001u; // 80170268
  c->lr=0x80170270u; f_80064744(c); // 8017026C
  {uint32_t ea=c->r[2]+0xFFFFBBCCu; c->f[1]=c->ps1[1]=RF32(ea);} // 80170270
  c->r[3]=c->r[31]+0x000007E0u; // 80170274
  c->lr=0x8017027Cu; f_80170010(c); // 80170278
  c->r[0]=0u+0x00000002u; // 8017027C
  W32(c->r[31]+0x000005C8u,c->r[0]); // 80170280
L_80170284:;
  {uint32_t ea=c->r[2]+0xFFFFBB74u; c->f[1]=c->ps1[1]=RF32(ea);} // 80170284
  c->r[3]=c->r[31]+0x000005DCu; // 80170288
  c->lr=0x80170290u; f_800E2B50(c); // 8017028C
  cmps(c,0,(int32_t)c->r[3],0); // 80170290
  if (crb(c,2)) { goto L_801702D0; } // 80170294
  c->r[0]=0u+0x00000000u; // 80170298
  W8(c->r[1]+0x0000000Cu,c->r[0]); // 8017029C
  c->r[3]=c->r[1]+0x0000000Cu; // 801702A0
  c->lr=0x801702A8u; f_80046EFC(c); // 801702A4
  {uint32_t ea=c->r[2]+0xFFFFBBD0u; c->f[2]=c->ps1[2]=RF32(ea);} // 801702A8
  c->r[4]=0u+0x00000000u; // 801702AC
  c->r[3]=R32(c->r[3]+0x000000C8u); // 801702B0
  c->r[5]=0u+0x00000000u; // 801702B4
  c->f[3]=c->f[2]; // 801702B8
  {uint32_t ea=c->r[2]+0xFFFFBB78u; c->f[1]=c->ps1[1]=RF32(ea);} // 801702BC
  c->r[6]=0u+0x00000000u; // 801702C0
  c->r[7]=0u+0x00000000u; // 801702C4
  c->r[8]=0u+0xFFFFFFFFu; // 801702C8
  c->lr=0x801702D0u; f_8011A9B4(c); // 801702CC
L_801702D0:;
  {uint32_t ea=c->r[31]+0x00000658u; c->f[1]=c->ps1[1]=RF32(ea);} // 801702D0
  {uint32_t ea=c->r[2]+0xFFFFBB7Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801702D4
  fcmp(c,0,c->f[1],c->f[0]); // 801702D8
  setcrb(c,2,crb(c,1)|crb(c,2)); // 801702DC
  if (!crb(c,2)) { goto L_801703D0; } // 801702E0
  c->r[0]=0u+0x00000000u; // 801702E4
  W8(c->r[1]+0x00000008u,c->r[0]); // 801702E8
  c->r[3]=c->r[1]+0x00000008u; // 801702EC
  c->lr=0x801702F4u; f_80046EFC(c); // 801702F0
  c->r[3]=R32(c->r[3]+0x000000C8u); // 801702F4
  c->lr=0x801702FCu; f_8011AC88(c); // 801702F8
  cmps(c,0,(int32_t)c->r[3],2); // 801702FC
  if (!crb(c,2)) { goto L_80170314; } // 80170300
  c->r[3]=R32(c->r[31]+0x000005D4u); // 80170304
  c->r[0]=c->r[3]+0x00000001u; // 80170308
  W32(c->r[31]+0x000005D4u,c->r[0]); // 8017030C
  goto L_801703D0; // 80170310
L_80170314:;
  c->r[3]=R32(c->r[31]+0x000005D4u); // 80170314
  c->r[0]=c->r[3]+0x00000002u; // 80170318
  W32(c->r[31]+0x000005D4u,c->r[0]); // 8017031C
  goto L_801703D0; // 80170320
L_80170324:;
  c->r[4]=0u+0x00010000u; // 80170324
  c->r[5]=0u+0x00000001u; // 80170328
  c->r[4]=c->r[4]+0xFFFFDF16u; // 8017032C
  c->lr=0x80170334u; f_80064744(c); // 80170330
  c->r[3]=c->r[31]+0x000001B8u; // 80170334
  c->r[4]=c->r[1]+0x00000010u; // 80170338
  c->lr=0x80170340u; f_80382F2C(c); // 8017033C
  c->r[4]=0u+0x80690000u; // 80170340
  {uint32_t ea=c->r[2]+0xFFFFBB78u; c->f[1]=c->ps1[1]=RF32(ea);} // 80170344
  c->r[4]=c->r[4]+0x00001400u; // 80170348
  {uint32_t ea=c->r[2]+0xFFFFBB74u; c->f[2]=c->ps1[2]=RF32(ea);} // 8017034C
  {uint32_t ea=c->r[2]+0xFFFFBB98u; c->f[3]=c->ps1[3]=RF32(ea);} // 80170350
  c->r[3]=c->r[31]+0x000005DCu; // 80170354
  c->r[4]=c->r[4]+0x00000104u; // 80170358
  c->r[5]=c->r[1]+0x00000010u; // 8017035C
  c->lr=0x80170364u; f_800E2604(c); // 80170360
  c->r[3]=R32(c->r[31]+0x000005D4u); // 80170364
  c->r[0]=c->r[3]+0x00000002u; // 80170368
  W32(c->r[31]+0x000005D4u,c->r[0]); // 8017036C
  goto L_801703D0; // 80170370
L_80170374:;
  c->r[3]=R32(c->r[3]+0x00000404u); // 80170374
  c->lr=0x8017037Cu; f_802EA4B0(c); // 80170378
  {uint32_t ea=c->r[2]+0xFFFFBBD4u; c->f[0]=c->ps1[0]=RF32(ea);} // 8017037C
  fcmp(c,0,c->f[1],c->f[0]); // 80170380
  setcrb(c,2,crb(c,1)|crb(c,2)); // 80170384
  if (!crb(c,2)) { goto L_801703D0; } // 80170388
  {uint32_t ea=c->r[31]+0x000007A8u; c->f[1]=c->ps1[1]=RF32(ea);} // 8017038C
  c->r[3]=c->r[31]|c->r[31]; // 80170390
  c->r[4]=0u+0x00000000u; // 80170394
  c->r[5]=0u+0xFFFFFFFFu; // 80170398
  c->lr=0x801703A0u; f_80062194(c); // 8017039C
  c->r[3]=R32(c->r[31]+0x000005D4u); // 801703A0
  c->r[0]=c->r[3]+0x00000001u; // 801703A4
  W32(c->r[31]+0x000005D4u,c->r[0]); // 801703A8
  goto L_801703D0; // 801703AC
L_801703B0:;
  c->r[3]=c->r[3]+0x000005DCu; // 801703B0
  c->lr=0x801703B8u; f_800E2B1C(c); // 801703B4
  cmps(c,0,(int32_t)c->r[3],0); // 801703B8
  if (crb(c,2)) { goto L_801703D0; } // 801703BC
  c->r[0]=0u+0x00000000u; // 801703C0
  W32(c->r[31]+0x00000684u,c->r[0]); // 801703C4
  c->r[3]=c->r[31]|c->r[31]; // 801703C8
  c->lr=0x801703D0u; f_80171218(c); // 801703CC
L_801703D0:;
  c->r[0]=R32(c->r[1]+0x00000084u); // 801703D0
  c->r[31]=R32(c->r[1]+0x0000007Cu); // 801703D4
  c->lr=c->r[0]; // 801703D8
  c->r[1]=c->r[1]+0x00000080u; // 801703DC
  return; // 801703E0
}

// fn_801703E4
void f_801703E4(Ctx* __restrict c) {
  trace_call(0x801703E4u);
  return; // 801703E4
}

// fn_801703E8
void f_801703E8(Ctx* __restrict c) {
  trace_call(0x801703E8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801703E8
  c->r[0]=c->lr; // 801703EC
  W32(c->r[1]+0x00000014u,c->r[0]); // 801703F0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801703F4
  W32(c->r[1]+0x00000008u,c->r[30]); // 801703F8
  c->r[30]=c->r[3]|c->r[3]; // 801703FC
  c->r[4]=R32(c->r[3]+0x00000004u); // 80170400
  cmps(c,0,(int32_t)c->r[4],0); // 80170404
  if (crb(c,2)) { goto L_80170414; } // 80170408
  c->r[0]=R32(c->r[4]+0x00000008u); // 8017040C
  goto L_80170418; // 80170410
L_80170414:;
  c->r[0]=0u+0x00000000u; // 80170414
L_80170418:;
  cmps(c,0,(int32_t)c->r[0],0); // 80170418
  if (!crb(c,2)) { goto L_80170478; } // 8017041C
  {uint32_t ea=c->r[2]+0xFFFFBB74u; c->f[2]=c->ps1[2]=RF32(ea);} // 80170420
  c->r[4]=0u+0x80690000u; // 80170424
  c->r[4]=c->r[4]+0x00001400u; // 80170428
  c->r[0]=0u+0x00000030u; // 8017042C
  c->f[3]=c->f[2]; // 80170430
  W32(c->r[3]+0x000005C8u,c->r[0]); // 80170434
  {uint32_t ea=c->r[2]+0xFFFFBB78u; c->f[1]=c->ps1[1]=RF32(ea);} // 80170438
  c->r[4]=c->r[4]+0x0000010Fu; // 8017043C
  c->r[3]=c->r[3]+0x000005DCu; // 80170440
  c->lr=0x80170448u; f_800E24D0(c); // 80170444
  c->r[31]=0u+0x00010000u; // 80170448
  c->r[3]=c->r[30]|c->r[30]; // 8017044C
  c->r[4]=c->r[31]+0xFFFFDF0Fu; // 80170450
  c->r[5]=0u+0x00000001u; // 80170454
  c->lr=0x8017045Cu; f_80064744(c); // 80170458
  c->r[3]=c->r[30]|c->r[30]; // 8017045C
  c->r[4]=c->r[31]+0xFFFFDF0Fu; // 80170460
  c->r[5]=0u+0x00000001u; // 80170464
  c->lr=0x8017046Cu; f_80064744(c); // 80170468
  {uint32_t ea=c->r[30]+0x000007B4u; c->f[1]=c->ps1[1]=RF32(ea);} // 8017046C
  c->r[3]=c->r[30]+0x000007E0u; // 80170470
  c->lr=0x80170478u; f_80170010(c); // 80170474
L_80170478:;
  c->r[3]=R32(c->r[30]+0x00000404u); // 80170478
  {uint32_t ea=c->r[2]+0xFFFFBBD8u; c->f[1]=c->ps1[1]=RF32(ea);} // 8017047C
  c->lr=0x80170484u; f_802EA5A4(c); // 80170480
  cmps(c,0,(int32_t)c->r[3],0); // 80170484
  if (crb(c,2)) { goto L_801704A8; } // 80170488
  {uint32_t ea=c->r[30]+0x000007B0u; c->f[1]=c->ps1[1]=RF32(ea);} // 8017048C
  c->r[3]=c->r[30]|c->r[30]; // 80170490
  c->r[4]=0u+0x00000000u; // 80170494
  c->r[5]=0u+0xFFFFFFFFu; // 80170498
  c->lr=0x801704A0u; f_80062194(c); // 8017049C
  c->r[0]=0u+0x00000002u; // 801704A0
  W32(c->r[30]+0x000005C8u,c->r[0]); // 801704A4
L_801704A8:;
  c->r[3]=c->r[30]+0x00000354u; // 801704A8
  c->lr=0x801704B0u; f_800667AC(c); // 801704AC
  cmps(c,0,(int32_t)c->r[3],0); // 801704B0
  if (crb(c,2)) { goto L_801704C8; } // 801704B4
  c->r[0]=0u+0x00000000u; // 801704B8
  W32(c->r[30]+0x00000684u,c->r[0]); // 801704BC
  c->r[3]=c->r[30]|c->r[30]; // 801704C0
  c->lr=0x801704C8u; f_80171218(c); // 801704C4
L_801704C8:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801704C8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801704CC
  c->r[30]=R32(c->r[1]+0x00000008u); // 801704D0
  c->lr=c->r[0]; // 801704D4
  c->r[1]=c->r[1]+0x00000010u; // 801704D8
  return; // 801704DC
}

// fn_801704E0
void f_801704E0(Ctx* __restrict c) {
  trace_call(0x801704E0u);
  c->r[3]=0u+0x00010000u; // 801704E0
  c->r[0]=c->r[3]+0xFFFFE03Au; // 801704E4
  W32(c->r[4]+0x00000688u,c->r[0]); // 801704E8
  return; // 801704EC
}

// fn_801704F0
void f_801704F0(Ctx* __restrict c) {
  trace_call(0x801704F0u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801704F0
  c->r[0]=c->lr; // 801704F4
  W32(c->r[1]+0x00000034u,c->r[0]); // 801704F8
  c->r[11]=c->r[1]+0x00000030u; // 801704FC
  c->lr=0x80170504u; { W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80170500
  c->r[0]=R32(c->r[3]+0x000005D4u); // 80170504
  c->r[31]=c->r[3]|c->r[3]; // 80170508
  cmps(c,0,(int32_t)c->r[0],0); // 8017050C
  if (crb(c,2)) { goto L_80170538; } // 80170510
  cmps(c,0,(int32_t)c->r[0],1); // 80170514
  if (crb(c,2)) { goto L_8017057C; } // 80170518
  cmps(c,0,(int32_t)c->r[0],2); // 8017051C
  if (crb(c,2)) { goto L_801706BC; } // 80170520
  cmps(c,0,(int32_t)c->r[0],3); // 80170524
  if (crb(c,2)) { goto L_801706EC; } // 80170528
  cmps(c,0,(int32_t)c->r[0],4); // 8017052C
  if (crb(c,2)) { goto L_80170728; } // 80170530
  goto L_80170754; // 80170534
L_80170538:;
  c->r[4]=0u+0x80690000u; // 80170538
  {uint32_t ea=c->r[2]+0xFFFFBB78u; c->f[1]=c->ps1[1]=RF32(ea);} // 8017053C
  c->r[4]=c->r[4]+0x00001400u; // 80170540
  {uint32_t ea=c->r[2]+0xFFFFBB74u; c->f[2]=c->ps1[2]=RF32(ea);} // 80170544
  {uint32_t ea=c->r[2]+0xFFFFBB98u; c->f[3]=c->ps1[3]=RF32(ea);} // 80170548
  c->r[4]=c->r[4]+0x0000011Au; // 8017054C
  c->r[3]=c->r[3]+0x000005DCu; // 80170550
  c->lr=0x80170558u; f_800E24D0(c); // 80170554
  c->r[3]=c->r[31]+0x000000FCu; // 80170558
  c->r[4]=0u+0x00000000u; // 8017055C
  c->lr=0x80170564u; f_802E6678(c); // 80170560
  c->r[3]=R32(c->r[31]+0x000005D4u); // 80170564
  c->r[0]=0u+0x00000002u; // 80170568
  W32(c->r[31]+0x000005C8u,c->r[0]); // 8017056C
  c->r[0]=c->r[3]+0x00000001u; // 80170570
  W32(c->r[31]+0x000005D4u,c->r[0]); // 80170574
  goto L_80170754; // 80170578
L_8017057C:;
  {uint32_t ea=c->r[2]+0xFFFFBBDCu; c->f[1]=c->ps1[1]=RF32(ea);} // 8017057C
  c->r[3]=c->r[3]+0x000005DCu; // 80170580
  c->lr=0x80170588u; f_800E2B50(c); // 80170584
  cmps(c,0,(int32_t)c->r[3],0); // 80170588
  if (crb(c,2)) { goto L_801705CC; } // 8017058C
  c->r[3]=c->r[31]+0x000000FCu; // 80170590
  c->r[4]=0u+0x00000001u; // 80170594
  c->lr=0x8017059Cu; f_802E6678(c); // 80170598
  c->r[3]=c->r[31]|c->r[31]; // 8017059C
  c->r[4]=0u+0x00000004u; // 801705A0
  c->lr=0x801705A8u; f_8017133C(c); // 801705A4
  c->r[29]=0u+0x00010000u; // 801705A8
  c->r[3]=c->r[31]|c->r[31]; // 801705AC
  c->r[4]=c->r[29]+0xFFFFDF10u; // 801705B0
  c->r[5]=0u+0x00000001u; // 801705B4
  c->lr=0x801705BCu; f_80064744(c); // 801705B8
  c->r[3]=c->r[31]|c->r[31]; // 801705BC
  c->r[4]=c->r[29]+0xFFFFDF10u; // 801705C0
  c->r[5]=0u+0x00000001u; // 801705C4
  c->lr=0x801705CCu; f_80064744(c); // 801705C8
L_801705CC:;
  {uint32_t ea=c->r[2]+0xFFFFBBE0u; c->f[1]=c->ps1[1]=RF32(ea);} // 801705CC
  c->r[3]=c->r[31]+0x000005DCu; // 801705D0
  c->lr=0x801705D8u; f_800E2B50(c); // 801705D4
  cmps(c,0,(int32_t)c->r[3],0); // 801705D8
  if (crb(c,2)) { goto L_80170618; } // 801705DC
  c->r[0]=0u+0x00000000u; // 801705E0
  W8(c->r[1]+0x00000018u,c->r[0]); // 801705E4
  c->r[3]=c->r[1]+0x00000018u; // 801705E8
  c->lr=0x801705F0u; f_80046EFC(c); // 801705EC
  {uint32_t ea=c->r[2]+0xFFFFBBD0u; c->f[2]=c->ps1[2]=RF32(ea);} // 801705F0
  c->r[4]=0u+0x00000000u; // 801705F4
  c->r[3]=R32(c->r[3]+0x000000C8u); // 801705F8
  c->r[5]=0u+0x00000000u; // 801705FC
  c->f[3]=c->f[2]; // 80170600
  {uint32_t ea=c->r[2]+0xFFFFBB78u; c->f[1]=c->ps1[1]=RF32(ea);} // 80170604
  c->r[6]=0u+0x00000000u; // 80170608
  c->r[7]=0u+0x00000000u; // 8017060C
  c->r[8]=0u+0xFFFFFFFFu; // 80170610
  c->lr=0x80170618u; f_8011A9B4(c); // 80170614
L_80170618:;
  {uint32_t ea=c->r[31]+0x00000658u; c->f[1]=c->ps1[1]=RF32(ea);} // 80170618
  {uint32_t ea=c->r[2]+0xFFFFBBE4u; c->f[0]=c->ps1[0]=RF32(ea);} // 8017061C
  fcmp(c,0,c->f[1],c->f[0]); // 80170620
  setcrb(c,2,crb(c,1)|crb(c,2)); // 80170624
  if (!crb(c,2)) { goto L_80170754; } // 80170628
  c->r[29]=0u+0x00000000u; // 8017062C
  W8(c->r[1]+0x00000010u,c->r[29]); // 80170630
  c->r[3]=c->r[1]+0x00000010u; // 80170634
  c->r[28]=c->r[1]+0x00000014u; // 80170638
  W8(c->r[1]+0x00000014u,c->r[29]); // 8017063C
  c->lr=0x80170644u; f_8004DBC0(c); // 80170640
  c->lr=0x80170648u; f_80099108(c); // 80170644
  c->r[30]=c->r[3]|c->r[3]; // 80170648
  c->r[3]=c->r[28]|c->r[28]; // 8017064C
  c->lr=0x80170654u; f_8004DBC0(c); // 80170650
  c->r[4]=c->r[30]|c->r[30]; // 80170654
  c->lr=0x8017065Cu; f_80099344(c); // 80170658
  W8(c->r[1]+0x0000000Cu,c->r[29]); // 8017065C
  c->r[28]=c->r[3]|c->r[3]; // 80170660
  c->r[3]=c->r[1]+0x0000000Cu; // 80170664
  c->lr=0x8017066Cu; f_8004E228(c); // 80170668
  c->r[5]=0u+0x80690000u; // 8017066C
  c->r[4]=c->r[28]|c->r[28]; // 80170670
  c->r[5]=c->r[5]+0x00001400u; // 80170674
  c->r[5]=c->r[5]+0x00000006u; // 80170678
  c->lr=0x80170680u; f_80075FE0(c); // 8017067C
  W8(c->r[1]+0x00000008u,c->r[29]); // 80170680
  c->r[3]=c->r[1]+0x00000008u; // 80170684
  c->lr=0x8017068Cu; f_80046EFC(c); // 80170688
  c->r[3]=R32(c->r[3]+0x000000C8u); // 8017068C
  c->lr=0x80170694u; f_8011AC88(c); // 80170690
  cmps(c,0,(int32_t)c->r[3],2); // 80170694
  if (!crb(c,2)) { goto L_801706AC; } // 80170698
  c->r[3]=R32(c->r[31]+0x000005D4u); // 8017069C
  c->r[0]=c->r[3]+0x00000001u; // 801706A0
  W32(c->r[31]+0x000005D4u,c->r[0]); // 801706A4
  goto L_80170754; // 801706A8
L_801706AC:;
  c->r[3]=R32(c->r[31]+0x000005D4u); // 801706AC
  c->r[0]=c->r[3]+0x00000002u; // 801706B0
  W32(c->r[31]+0x000005D4u,c->r[0]); // 801706B4
  goto L_80170754; // 801706B8
L_801706BC:;
  c->r[4]=0u+0x80690000u; // 801706BC
  {uint32_t ea=c->r[2]+0xFFFFBB78u; c->f[1]=c->ps1[1]=RF32(ea);} // 801706C0
  c->r[4]=c->r[4]+0x00001400u; // 801706C4
  {uint32_t ea=c->r[2]+0xFFFFBB74u; c->f[2]=c->ps1[2]=RF32(ea);} // 801706C8
  {uint32_t ea=c->r[2]+0xFFFFBB98u; c->f[3]=c->ps1[3]=RF32(ea);} // 801706CC
  c->r[4]=c->r[4]+0x00000125u; // 801706D0
  c->r[3]=c->r[3]+0x000005DCu; // 801706D4
  c->lr=0x801706DCu; f_800E24D0(c); // 801706D8
  c->r[3]=R32(c->r[31]+0x000005D4u); // 801706DC
  c->r[0]=c->r[3]+0x00000002u; // 801706E0
  W32(c->r[31]+0x000005D4u,c->r[0]); // 801706E4
  goto L_80170754; // 801706E8
L_801706EC:;
  c->r[3]=R32(c->r[3]+0x00000404u); // 801706EC
  c->lr=0x801706F4u; f_802EA4B0(c); // 801706F0
  {uint32_t ea=c->r[2]+0xFFFFBBBCu; c->f[0]=c->ps1[0]=RF32(ea);} // 801706F4
  fcmp(c,0,c->f[1],c->f[0]); // 801706F8
  setcrb(c,2,crb(c,1)|crb(c,2)); // 801706FC
  if (!crb(c,2)) { goto L_80170754; } // 80170700
  {uint32_t ea=c->r[31]+0x000007B8u; c->f[1]=c->ps1[1]=RF32(ea);} // 80170704
  c->r[3]=c->r[31]|c->r[31]; // 80170708
  c->r[4]=0u+0x00000000u; // 8017070C
  c->r[5]=0u+0xFFFFFFFFu; // 80170710
  c->lr=0x80170718u; f_80062194(c); // 80170714
  c->r[3]=R32(c->r[31]+0x000005D4u); // 80170718
  c->r[0]=c->r[3]+0x00000001u; // 8017071C
  W32(c->r[31]+0x000005D4u,c->r[0]); // 80170720
  goto L_80170754; // 80170724
L_80170728:;
  c->r[3]=c->r[3]+0x000005DCu; // 80170728
  c->lr=0x80170730u; f_800E2B1C(c); // 8017072C
  cmps(c,0,(int32_t)c->r[3],0); // 80170730
  if (crb(c,2)) { goto L_80170754; } // 80170734
  c->r[4]=R32(c->r[31]+0x000005D0u); // 80170738
  c->r[0]=0u+0x00000000u; // 8017073C
  W32(c->r[31]+0x00000684u,c->r[0]); // 80170740
  c->r[3]=c->r[31]|c->r[31]; // 80170744
  c->r[0]=c->r[4]+0x00000001u; // 80170748
  W32(c->r[31]+0x000005D0u,c->r[0]); // 8017074C
  c->lr=0x80170754u; f_80171218(c); // 80170750
L_80170754:;
  c->r[11]=c->r[1]+0x00000030u; // 80170754
  c->lr=0x8017075Cu; { c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80170758
  c->r[0]=R32(c->r[1]+0x00000034u); // 8017075C
  c->lr=c->r[0]; // 80170760
  c->r[1]=c->r[1]+0x00000030u; // 80170764
  return; // 80170768
}

// fn_8017076C
void f_8017076C(Ctx* __restrict c) {
  trace_call(0x8017076Cu);
  return; // 8017076C
}

// fn_80170770
void f_80170770(Ctx* __restrict c) {
  trace_call(0x80170770u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80170770
  c->r[0]=c->lr; // 80170774
  W32(c->r[1]+0x00000024u,c->r[0]); // 80170778
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8017077C
  c->r[31]=c->r[3]|c->r[3]; // 80170780
  W32(c->r[1]+0x00000018u,c->r[30]); // 80170784
  c->r[0]=R32(c->r[3]+0x000005D4u); // 80170788
  cmps(c,0,(int32_t)c->r[0],0); // 8017078C
  if (crb(c,2)) { goto L_801707B8; } // 80170790
  cmps(c,0,(int32_t)c->r[0],1); // 80170794
  if (crb(c,2)) { goto L_801708D0; } // 80170798
  cmps(c,0,(int32_t)c->r[0],2); // 8017079C
  if (crb(c,2)) { goto L_80170900; } // 801707A0
  cmps(c,0,(int32_t)c->r[0],3); // 801707A4
  if (crb(c,2)) { goto L_8017093C; } // 801707A8
  cmps(c,0,(int32_t)c->r[0],4); // 801707AC
  if (crb(c,2)) { goto L_80170970; } // 801707B0
  goto L_8017099C; // 801707B4
L_801707B8:;
  c->r[4]=R32(c->r[3]+0x00000004u); // 801707B8
  cmps(c,0,(int32_t)c->r[4],0); // 801707BC
  if (crb(c,2)) { goto L_801707CC; } // 801707C0
  c->r[0]=R32(c->r[4]+0x00000008u); // 801707C4
  goto L_801707D0; // 801707C8
L_801707CC:;
  c->r[0]=0u+0x00000000u; // 801707CC
L_801707D0:;
  cmps(c,0,(int32_t)c->r[0],0); // 801707D0
  if (!crb(c,2)) { goto L_80170830; } // 801707D4
  c->r[4]=0u+0x80690000u; // 801707D8
  {uint32_t ea=c->r[2]+0xFFFFBB78u; c->f[1]=c->ps1[1]=RF32(ea);} // 801707DC
  c->r[4]=c->r[4]+0x00001400u; // 801707E0
  {uint32_t ea=c->r[2]+0xFFFFBB74u; c->f[2]=c->ps1[2]=RF32(ea);} // 801707E4
  {uint32_t ea=c->r[2]+0xFFFFBB98u; c->f[3]=c->ps1[3]=RF32(ea);} // 801707E8
  c->r[4]=c->r[4]+0x00000130u; // 801707EC
  c->r[3]=c->r[3]+0x000005DCu; // 801707F0
  c->lr=0x801707F8u; f_800E24D0(c); // 801707F4
  c->r[3]=c->r[31]|c->r[31]; // 801707F8
  c->r[4]=0u+0x00000006u; // 801707FC
  c->lr=0x80170804u; f_8017133C(c); // 80170800
  c->r[30]=0u+0x00010000u; // 80170804
  c->r[3]=c->r[31]|c->r[31]; // 80170808
  c->r[4]=c->r[30]+0xFFFFDF11u; // 8017080C
  c->r[5]=0u+0x00000001u; // 80170810
  c->lr=0x80170818u; f_80064744(c); // 80170814
  c->r[3]=c->r[31]|c->r[31]; // 80170818
  c->r[4]=c->r[30]+0xFFFFDF11u; // 8017081C
  c->r[5]=0u+0x00000001u; // 80170820
  c->lr=0x80170828u; f_80064744(c); // 80170824
  c->r[0]=0u+0x00000002u; // 80170828
  W32(c->r[31]+0x000005C8u,c->r[0]); // 8017082C
L_80170830:;
  {uint32_t ea=c->r[2]+0xFFFFBBE8u; c->f[1]=c->ps1[1]=RF32(ea);} // 80170830
  c->r[3]=c->r[31]+0x000005DCu; // 80170834
  c->lr=0x8017083Cu; f_800E2B50(c); // 80170838
  cmps(c,0,(int32_t)c->r[3],0); // 8017083C
  if (crb(c,2)) { goto L_8017087C; } // 80170840
  c->r[0]=0u+0x00000000u; // 80170844
  W8(c->r[1]+0x0000000Cu,c->r[0]); // 80170848
  c->r[3]=c->r[1]+0x0000000Cu; // 8017084C
  c->lr=0x80170854u; f_80046EFC(c); // 80170850
  {uint32_t ea=c->r[2]+0xFFFFBBD0u; c->f[2]=c->ps1[2]=RF32(ea);} // 80170854
  c->r[4]=0u+0x00000000u; // 80170858
  c->r[3]=R32(c->r[3]+0x000000C8u); // 8017085C
  c->r[5]=0u+0x00000000u; // 80170860
  c->f[3]=c->f[2]; // 80170864
  {uint32_t ea=c->r[2]+0xFFFFBB78u; c->f[1]=c->ps1[1]=RF32(ea);} // 80170868
  c->r[6]=0u+0x00000000u; // 8017086C
  c->r[7]=0u+0x00000000u; // 80170870
  c->r[8]=0u+0xFFFFFFFFu; // 80170874
  c->lr=0x8017087Cu; f_8011A9B4(c); // 80170878
L_8017087C:;
  {uint32_t ea=c->r[31]+0x00000658u; c->f[1]=c->ps1[1]=RF32(ea);} // 8017087C
  {uint32_t ea=c->r[2]+0xFFFFBBC0u; c->f[0]=c->ps1[0]=RF32(ea);} // 80170880
  fcmp(c,0,c->f[1],c->f[0]); // 80170884
  setcrb(c,2,crb(c,1)|crb(c,2)); // 80170888
  if (!crb(c,2)) { goto L_8017099C; } // 8017088C
  c->r[0]=0u+0x00000000u; // 80170890
  W8(c->r[1]+0x00000008u,c->r[0]); // 80170894
  c->r[3]=c->r[1]+0x00000008u; // 80170898
  c->lr=0x801708A0u; f_80046EFC(c); // 8017089C
  c->r[3]=R32(c->r[3]+0x000000C8u); // 801708A0
  c->lr=0x801708A8u; f_8011AC88(c); // 801708A4
  cmps(c,0,(int32_t)c->r[3],2); // 801708A8
  if (!crb(c,2)) { goto L_801708C0; } // 801708AC
  c->r[3]=R32(c->r[31]+0x000005D4u); // 801708B0
  c->r[0]=c->r[3]+0x00000001u; // 801708B4
  W32(c->r[31]+0x000005D4u,c->r[0]); // 801708B8
  goto L_8017099C; // 801708BC
L_801708C0:;
  c->r[3]=R32(c->r[31]+0x000005D4u); // 801708C0
  c->r[0]=c->r[3]+0x00000002u; // 801708C4
  W32(c->r[31]+0x000005D4u,c->r[0]); // 801708C8
  goto L_8017099C; // 801708CC
L_801708D0:;
  c->r[4]=0u+0x80690000u; // 801708D0
  {uint32_t ea=c->r[2]+0xFFFFBB78u; c->f[1]=c->ps1[1]=RF32(ea);} // 801708D4
  c->r[4]=c->r[4]+0x00001400u; // 801708D8
  {uint32_t ea=c->r[2]+0xFFFFBB74u; c->f[2]=c->ps1[2]=RF32(ea);} // 801708DC
  {uint32_t ea=c->r[2]+0xFFFFBB98u; c->f[3]=c->ps1[3]=RF32(ea);} // 801708E0
  c->r[4]=c->r[4]+0x0000013Bu; // 801708E4
  c->r[3]=c->r[3]+0x000005DCu; // 801708E8
  c->lr=0x801708F0u; f_800E24D0(c); // 801708EC
  c->r[3]=R32(c->r[31]+0x000005D4u); // 801708F0
  c->r[0]=c->r[3]+0x00000002u; // 801708F4
  W32(c->r[31]+0x000005D4u,c->r[0]); // 801708F8
  goto L_8017099C; // 801708FC
L_80170900:;
  c->r[3]=R32(c->r[3]+0x00000404u); // 80170900
  c->lr=0x80170908u; f_802EA4B0(c); // 80170904
  {uint32_t ea=c->r[2]+0xFFFFBBD8u; c->f[0]=c->ps1[0]=RF32(ea);} // 80170908
  fcmp(c,0,c->f[1],c->f[0]); // 8017090C
  setcrb(c,2,crb(c,1)|crb(c,2)); // 80170910
  if (!crb(c,2)) { goto L_8017099C; } // 80170914
  {uint32_t ea=c->r[31]+0x000007C0u; c->f[1]=c->ps1[1]=RF32(ea);} // 80170918
  c->r[3]=c->r[31]|c->r[31]; // 8017091C
  c->r[4]=0u+0x00000000u; // 80170920
  c->r[5]=0u+0xFFFFFFFFu; // 80170924
  c->lr=0x8017092Cu; f_80062194(c); // 80170928
  c->r[3]=R32(c->r[31]+0x000005D4u); // 8017092C
  c->r[0]=c->r[3]+0x00000001u; // 80170930
  W32(c->r[31]+0x000005D4u,c->r[0]); // 80170934
  goto L_8017099C; // 80170938
L_8017093C:;
  c->r[3]=c->r[3]+0x00000354u; // 8017093C
  c->lr=0x80170944u; f_800667AC(c); // 80170940
  cmps(c,0,(int32_t)c->r[3],0); // 80170944
  if (crb(c,2)) { goto L_8017099C; } // 80170948
  c->r[4]=0u+0x00010000u; // 8017094C
  c->r[3]=c->r[31]|c->r[31]; // 80170950
  c->r[4]=c->r[4]+0xFFFFDF71u; // 80170954
  c->r[5]=0u+0x00000001u; // 80170958
  c->lr=0x80170960u; f_80064744(c); // 8017095C
  c->r[3]=R32(c->r[31]+0x000005D4u); // 80170960
  c->r[0]=c->r[3]+0x00000001u; // 80170964
  W32(c->r[31]+0x000005D4u,c->r[0]); // 80170968
  goto L_8017099C; // 8017096C
L_80170970:;
  c->r[3]=c->r[3]+0x00000354u; // 80170970
  c->lr=0x80170978u; f_800667AC(c); // 80170974
  cmps(c,0,(int32_t)c->r[3],0); // 80170978
  if (crb(c,2)) { goto L_8017099C; } // 8017097C
  c->r[4]=R32(c->r[31]+0x000005D0u); // 80170980
  c->r[0]=0u+0x00000000u; // 80170984
  W32(c->r[31]+0x00000684u,c->r[0]); // 80170988
  c->r[3]=c->r[31]|c->r[31]; // 8017098C
  c->r[0]=c->r[4]+0x00000001u; // 80170990
  W32(c->r[31]+0x000005D0u,c->r[0]); // 80170994
  c->lr=0x8017099Cu; f_80171218(c); // 80170998
L_8017099C:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 8017099C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801709A0
  c->r[30]=R32(c->r[1]+0x00000018u); // 801709A4
  c->lr=c->r[0]; // 801709A8
  c->r[1]=c->r[1]+0x00000020u; // 801709AC
  return; // 801709B0
}

// fn_801709B4
void f_801709B4(Ctx* __restrict c) {
  trace_call(0x801709B4u);
  return; // 801709B4
}

// fn_801709B8
void f_801709B8(Ctx* __restrict c) {
  trace_call(0x801709B8u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801709B8
  c->r[0]=c->lr; // 801709BC
  W32(c->r[1]+0x00000044u,c->r[0]); // 801709C0
  W32(c->r[1]+0x0000003Cu,c->r[31]); // 801709C4
  c->r[31]=c->r[3]|c->r[3]; // 801709C8
  c->r[4]=R32(c->r[3]+0x00000004u); // 801709CC
  cmps(c,0,(int32_t)c->r[4],0); // 801709D0
  if (crb(c,2)) { goto L_801709E0; } // 801709D4
  c->r[0]=R32(c->r[4]+0x00000008u); // 801709D8
  goto L_801709E4; // 801709DC
L_801709E0:;
  c->r[0]=0u+0x00000000u; // 801709E0
L_801709E4:;
  cmps(c,0,(int32_t)c->r[0],0); // 801709E4
  if (!crb(c,2)) { goto L_80170A44; } // 801709E8
  c->r[3]=c->r[3]+0x000001B8u; // 801709EC
  c->r[4]=c->r[1]+0x00000008u; // 801709F0
  c->lr=0x801709F8u; f_80382F2C(c); // 801709F4
  c->r[4]=0u+0x80690000u; // 801709F8
  {uint32_t ea=c->r[2]+0xFFFFBB78u; c->f[1]=c->ps1[1]=RF32(ea);} // 801709FC
  c->r[4]=c->r[4]+0x00001400u; // 80170A00
  {uint32_t ea=c->r[2]+0xFFFFBB74u; c->f[2]=c->ps1[2]=RF32(ea);} // 80170A04
  {uint32_t ea=c->r[2]+0xFFFFBB98u; c->f[3]=c->ps1[3]=RF32(ea);} // 80170A08
  c->r[3]=c->r[31]+0x000005DCu; // 80170A0C
  c->r[4]=c->r[4]+0x00000146u; // 80170A10
  c->r[5]=c->r[1]+0x00000008u; // 80170A14
  c->lr=0x80170A1Cu; f_800E2604(c); // 80170A18
  c->r[4]=0u+0x00010000u; // 80170A1C
  c->r[3]=c->r[31]|c->r[31]; // 80170A20
  c->r[4]=c->r[4]+0xFFFFDF12u; // 80170A24
  c->r[5]=0u+0x00000001u; // 80170A28
  c->lr=0x80170A30u; f_80064744(c); // 80170A2C
  {uint32_t ea=c->r[31]+0x000007CCu; c->f[1]=c->ps1[1]=RF32(ea);} // 80170A30
  c->r[3]=c->r[31]+0x000007E0u; // 80170A34
  c->lr=0x80170A3Cu; f_80170010(c); // 80170A38
  c->r[0]=0u+0x00000018u; // 80170A3C
  W32(c->r[31]+0x000005C8u,c->r[0]); // 80170A40
L_80170A44:;
  c->r[3]=R32(c->r[31]+0x00000404u); // 80170A44
  {uint32_t ea=c->r[2]+0xFFFFBBECu; c->f[1]=c->ps1[1]=RF32(ea);} // 80170A48
  c->lr=0x80170A50u; f_802EA5A4(c); // 80170A4C
  cmps(c,0,(int32_t)c->r[3],0); // 80170A50
  if (crb(c,2)) { goto L_80170A74; } // 80170A54
  {uint32_t ea=c->r[31]+0x000007C8u; c->f[1]=c->ps1[1]=RF32(ea);} // 80170A58
  c->r[3]=c->r[31]|c->r[31]; // 80170A5C
  c->r[4]=0u+0x00000000u; // 80170A60
  c->r[5]=0u+0xFFFFFFFFu; // 80170A64
  c->lr=0x80170A6Cu; f_80062194(c); // 80170A68
  c->r[0]=0u+0x00000008u; // 80170A6C
  W32(c->r[31]+0x000005C8u,c->r[0]); // 80170A70
L_80170A74:;
  c->r[3]=c->r[31]+0x00000354u; // 80170A74
  c->lr=0x80170A7Cu; f_800667AC(c); // 80170A78
  cmps(c,0,(int32_t)c->r[3],0); // 80170A7C
  if (crb(c,2)) { goto L_80170A94; } // 80170A80
  c->r[0]=0u+0x00000000u; // 80170A84
  W32(c->r[31]+0x00000684u,c->r[0]); // 80170A88
  c->r[3]=c->r[31]|c->r[31]; // 80170A8C
  c->lr=0x80170A94u; f_80171218(c); // 80170A90
L_80170A94:;
  c->r[0]=R32(c->r[1]+0x00000044u); // 80170A94
  c->r[31]=R32(c->r[1]+0x0000003Cu); // 80170A98
  c->lr=c->r[0]; // 80170A9C
  c->r[1]=c->r[1]+0x00000040u; // 80170AA0
  return; // 80170AA4
}

// fn_80170AA8
void f_80170AA8(Ctx* __restrict c) {
  trace_call(0x80170AA8u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80170AA8
  c->r[0]=c->lr; // 80170AAC
  c->r[3]=c->r[4]+0x000001B8u; // 80170AB0
  W32(c->r[1]+0x00000044u,c->r[0]); // 80170AB4
  W32(c->r[1]+0x0000003Cu,c->r[31]); // 80170AB8
  c->r[31]=c->r[4]|c->r[4]; // 80170ABC
  c->r[4]=c->r[1]+0x00000008u; // 80170AC0
  c->lr=0x80170AC8u; f_80382F2C(c); // 80170AC4
  c->r[3]=0u+0x00010000u; // 80170AC8
  c->r[4]=0u+0x80690000u; // 80170ACC
  c->r[0]=c->r[3]+0xFFFFE039u; // 80170AD0
  W32(c->r[31]+0x00000688u,c->r[0]); // 80170AD4
  c->r[4]=c->r[4]+0x00001400u; // 80170AD8
  {uint32_t ea=c->r[2]+0xFFFFBB78u; c->f[1]=c->ps1[1]=RF32(ea);} // 80170ADC
  c->r[3]=c->r[31]+0x000005DCu; // 80170AE0
  c->r[5]=c->r[1]+0x00000008u; // 80170AE4
  c->r[4]=c->r[4]+0x00000151u; // 80170AE8
  c->r[6]=0u+0x00000000u; // 80170AEC
  c->lr=0x80170AF4u; f_800E23DC(c); // 80170AF0
  c->r[0]=R32(c->r[1]+0x00000044u); // 80170AF4
  c->r[31]=R32(c->r[1]+0x0000003Cu); // 80170AF8
  c->lr=c->r[0]; // 80170AFC
  c->r[1]=c->r[1]+0x00000040u; // 80170B00
  return; // 80170B04
}

// fn_80170B08
void f_80170B08(Ctx* __restrict c) {
  trace_call(0x80170B08u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80170B08
  c->r[0]=c->lr; // 80170B0C
  W32(c->r[1]+0x00000024u,c->r[0]); // 80170B10
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80170B14
  c->r[31]=c->r[3]|c->r[3]; // 80170B18
  c->r[4]=R32(c->r[3]+0x000005D4u); // 80170B1C
  cmps(c,0,(int32_t)c->r[4],0); // 80170B20
  if (crb(c,2)) { goto L_80170B4C; } // 80170B24
  cmps(c,0,(int32_t)c->r[4],1); // 80170B28
  if (crb(c,2)) { goto L_80170C48; } // 80170B2C
  cmps(c,0,(int32_t)c->r[4],2); // 80170B30
  if (crb(c,2)) { goto L_80170C78; } // 80170B34
  cmps(c,0,(int32_t)c->r[4],3); // 80170B38
  if (crb(c,2)) { goto L_80170C98; } // 80170B3C
  cmps(c,0,(int32_t)c->r[4],4); // 80170B40
  if (crb(c,2)) { goto L_80170D24; } // 80170B44
  goto L_80170D50; // 80170B48
L_80170B4C:;
  c->r[4]=R32(c->r[3]+0x00000004u); // 80170B4C
  cmps(c,0,(int32_t)c->r[4],0); // 80170B50
  if (crb(c,2)) { goto L_80170B60; } // 80170B54
  c->r[0]=R32(c->r[4]+0x00000008u); // 80170B58
  goto L_80170B64; // 80170B5C
L_80170B60:;
  c->r[0]=0u+0x00000000u; // 80170B60
L_80170B64:;
  cmps(c,0,(int32_t)c->r[0],0); // 80170B64
  if (!crb(c,2)) { goto L_80170BA8; } // 80170B68
  c->r[4]=0u+0x80690000u; // 80170B6C
  {uint32_t ea=c->r[2]+0xFFFFBB78u; c->f[1]=c->ps1[1]=RF32(ea);} // 80170B70
  c->r[4]=c->r[4]+0x00001400u; // 80170B74
  {uint32_t ea=c->r[2]+0xFFFFBB74u; c->f[2]=c->ps1[2]=RF32(ea);} // 80170B78
  {uint32_t ea=c->r[2]+0xFFFFBB98u; c->f[3]=c->ps1[3]=RF32(ea);} // 80170B7C
  c->r[4]=c->r[4]+0x0000015Cu; // 80170B80
  c->r[3]=c->r[3]+0x000005DCu; // 80170B84
  c->lr=0x80170B8Cu; f_800E24D0(c); // 80170B88
  c->r[4]=0u+0x00010000u; // 80170B8C
  c->r[3]=c->r[31]|c->r[31]; // 80170B90
  c->r[4]=c->r[4]+0xFFFFDF13u; // 80170B94
  c->r[5]=0u+0x00000001u; // 80170B98
  c->lr=0x80170BA0u; f_80064744(c); // 80170B9C
  c->r[0]=0u+0x00000002u; // 80170BA0
  W32(c->r[31]+0x000005C8u,c->r[0]); // 80170BA4
L_80170BA8:;
  {uint32_t ea=c->r[2]+0xFFFFBB74u; c->f[1]=c->ps1[1]=RF32(ea);} // 80170BA8
  c->r[3]=c->r[31]+0x000005DCu; // 80170BAC
  c->lr=0x80170BB4u; f_800E2B50(c); // 80170BB0
  cmps(c,0,(int32_t)c->r[3],0); // 80170BB4
  if (crb(c,2)) { goto L_80170BF4; } // 80170BB8
  c->r[0]=0u+0x00000000u; // 80170BBC
  W8(c->r[1]+0x00000014u,c->r[0]); // 80170BC0
  c->r[3]=c->r[1]+0x00000014u; // 80170BC4
  c->lr=0x80170BCCu; f_80046EFC(c); // 80170BC8
  {uint32_t ea=c->r[2]+0xFFFFBBD0u; c->f[2]=c->ps1[2]=RF32(ea);} // 80170BCC
  c->r[4]=0u+0x00000000u; // 80170BD0
  c->r[3]=R32(c->r[3]+0x000000C8u); // 80170BD4
  c->r[5]=0u+0x00000000u; // 80170BD8
  c->f[3]=c->f[2]; // 80170BDC
  {uint32_t ea=c->r[2]+0xFFFFBB78u; c->f[1]=c->ps1[1]=RF32(ea);} // 80170BE0
  c->r[6]=0u+0x00000000u; // 80170BE4
  c->r[7]=0u+0x00000000u; // 80170BE8
  c->r[8]=0u+0xFFFFFFFFu; // 80170BEC
  c->lr=0x80170BF4u; f_8011A9B4(c); // 80170BF0
L_80170BF4:;
  {uint32_t ea=c->r[31]+0x00000658u; c->f[1]=c->ps1[1]=RF32(ea);} // 80170BF4
  {uint32_t ea=c->r[2]+0xFFFFBB7Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80170BF8
  fcmp(c,0,c->f[1],c->f[0]); // 80170BFC
  setcrb(c,2,crb(c,1)|crb(c,2)); // 80170C00
  if (!crb(c,2)) { goto L_80170D50; } // 80170C04
  c->r[0]=0u+0x00000000u; // 80170C08
  W8(c->r[1]+0x00000010u,c->r[0]); // 80170C0C
  c->r[3]=c->r[1]+0x00000010u; // 80170C10
  c->lr=0x80170C18u; f_80046EFC(c); // 80170C14
  c->r[3]=R32(c->r[3]+0x000000C8u); // 80170C18
  c->lr=0x80170C20u; f_8011AC88(c); // 80170C1C
  cmps(c,0,(int32_t)c->r[3],2); // 80170C20
  if (!crb(c,2)) { goto L_80170C38; } // 80170C24
  c->r[3]=R32(c->r[31]+0x000005D4u); // 80170C28
  c->r[0]=c->r[3]+0x00000001u; // 80170C2C
  W32(c->r[31]+0x000005D4u,c->r[0]); // 80170C30
  goto L_80170D50; // 80170C34
L_80170C38:;
  c->r[3]=R32(c->r[31]+0x000005D4u); // 80170C38
  c->r[0]=c->r[3]+0x00000003u; // 80170C3C
  W32(c->r[31]+0x000005D4u,c->r[0]); // 80170C40
  goto L_80170D50; // 80170C44
L_80170C48:;
  c->r[4]=0u+0x80690000u; // 80170C48
  {uint32_t ea=c->r[2]+0xFFFFBB78u; c->f[1]=c->ps1[1]=RF32(ea);} // 80170C4C
  c->r[4]=c->r[4]+0x00001400u; // 80170C50
  {uint32_t ea=c->r[2]+0xFFFFBB74u; c->f[2]=c->ps1[2]=RF32(ea);} // 80170C54
  {uint32_t ea=c->r[2]+0xFFFFBB98u; c->f[3]=c->ps1[3]=RF32(ea);} // 80170C58
  c->r[4]=c->r[4]+0x00000167u; // 80170C5C
  c->r[3]=c->r[3]+0x000005DCu; // 80170C60
  c->lr=0x80170C68u; f_800E24D0(c); // 80170C64
  c->r[3]=R32(c->r[31]+0x000005D4u); // 80170C68
  c->r[0]=c->r[3]+0x00000001u; // 80170C6C
  W32(c->r[31]+0x000005D4u,c->r[0]); // 80170C70
  goto L_80170D50; // 80170C74
L_80170C78:;
  {uint32_t ea=c->r[3]+0x00000658u; c->f[1]=c->ps1[1]=RF32(ea);} // 80170C78
  {uint32_t ea=c->r[2]+0xFFFFBB84u; c->f[0]=c->ps1[0]=RF32(ea);} // 80170C7C
  fcmp(c,0,c->f[1],c->f[0]); // 80170C80
  setcrb(c,2,crb(c,1)|crb(c,2)); // 80170C84
  if (!crb(c,2)) { goto L_80170D50; } // 80170C88
  c->r[0]=c->r[4]+0x00000002u; // 80170C8C
  W32(c->r[3]+0x000005D4u,c->r[0]); // 80170C90
  goto L_80170D50; // 80170C94
L_80170C98:;
  c->r[3]=R32(c->r[3]+0x00000404u); // 80170C98
  {uint32_t ea=c->r[2]+0xFFFFBBACu; c->f[1]=c->ps1[1]=RF32(ea);} // 80170C9C
  c->lr=0x80170CA4u; f_802EA5A4(c); // 80170CA0
  cmps(c,0,(int32_t)c->r[3],0); // 80170CA4
  if (crb(c,2)) { goto L_80170CE0; } // 80170CA8
  {uint32_t ea=c->r[31]+0x000007D0u; c->f[1]=c->ps1[1]=RF32(ea);} // 80170CAC
  c->r[3]=c->r[31]|c->r[31]; // 80170CB0
  c->r[4]=0u+0x00000000u; // 80170CB4
  c->r[5]=0u+0xFFFFFFFFu; // 80170CB8
  c->lr=0x80170CC0u; f_80062194(c); // 80170CBC
  c->r[0]=0u+0x00000000u; // 80170CC0
  W8(c->r[1]+0x0000000Cu,c->r[0]); // 80170CC4
  c->r[3]=c->r[1]+0x0000000Cu; // 80170CC8
  c->lr=0x80170CD0u; f_80046EFC(c); // 80170CCC
  c->r[4]=0u+0x00000020u; // 80170CD0
  c->r[5]=0u+0x00000001u; // 80170CD4
  c->r[6]=0u+0xFFFFFFFFu; // 80170CD8
  c->lr=0x80170CE0u; f_800B1DE0(c); // 80170CDC
L_80170CE0:;
  {uint32_t ea=c->r[31]+0x00000658u; c->f[1]=c->ps1[1]=RF32(ea);} // 80170CE0
  {uint32_t ea=c->r[2]+0xFFFFBBF0u; c->f[0]=c->ps1[0]=RF32(ea);} // 80170CE4
  fcmp(c,0,c->f[1],c->f[0]); // 80170CE8
  setcrb(c,2,crb(c,1)|crb(c,2)); // 80170CEC
  if (!crb(c,2)) { goto L_80170D50; } // 80170CF0
  c->r[4]=R32(c->r[31]+0x000005D4u); // 80170CF4
  c->r[0]=0u+0x00000000u; // 80170CF8
  c->r[3]=c->r[1]+0x00000008u; // 80170CFC
  c->r[4]=c->r[4]+0x00000001u; // 80170D00
  W32(c->r[31]+0x000005D4u,c->r[4]); // 80170D04
  W8(c->r[1]+0x00000008u,c->r[0]); // 80170D08
  c->lr=0x80170D10u; f_80046EFC(c); // 80170D0C
  c->r[4]=0u+0x00000020u; // 80170D10
  c->r[5]=0u+0x00000000u; // 80170D14
  c->r[6]=0u+0xFFFFFFFFu; // 80170D18
  c->lr=0x80170D20u; f_800B1DE0(c); // 80170D1C
  goto L_80170D50; // 80170D20
L_80170D24:;
  c->r[3]=c->r[3]+0x000005DCu; // 80170D24
  c->lr=0x80170D2Cu; f_800E2B1C(c); // 80170D28
  cmps(c,0,(int32_t)c->r[3],0); // 80170D2C
  if (crb(c,2)) { goto L_80170D50; } // 80170D30
  c->r[4]=R32(c->r[31]+0x000005D0u); // 80170D34
  c->r[0]=0u+0x00000000u; // 80170D38
  W32(c->r[31]+0x00000684u,c->r[0]); // 80170D3C
  c->r[3]=c->r[31]|c->r[31]; // 80170D40
  c->r[0]=c->r[4]+0x00000001u; // 80170D44
  W32(c->r[31]+0x000005D0u,c->r[0]); // 80170D48
  c->lr=0x80170D50u; f_80171218(c); // 80170D4C
L_80170D50:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 80170D50
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80170D54
  c->lr=c->r[0]; // 80170D58
  c->r[1]=c->r[1]+0x00000020u; // 80170D5C
  return; // 80170D60
}

// fn_80170D64
void f_80170D64(Ctx* __restrict c) {
  trace_call(0x80170D64u);
  return; // 80170D64
}

// fn_80170D68
void f_80170D68(Ctx* __restrict c) {
  trace_call(0x80170D68u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80170D68
  c->r[0]=c->lr; // 80170D6C
  W32(c->r[1]+0x00000014u,c->r[0]); // 80170D70
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80170D74
  c->r[31]=c->r[3]|c->r[3]; // 80170D78
  c->r[0]=R32(c->r[3]+0x000005D4u); // 80170D7C
  cmps(c,0,(int32_t)c->r[0],0); // 80170D80
  if (crb(c,2)) { goto L_80170D94; } // 80170D84
  cmps(c,0,(int32_t)c->r[0],1); // 80170D88
  if (crb(c,2)) { goto L_80170E50; } // 80170D8C
  goto L_80170EBC; // 80170D90
L_80170D94:;
  c->r[4]=R32(c->r[3]+0x00000004u); // 80170D94
  cmps(c,0,(int32_t)c->r[4],0); // 80170D98
  if (crb(c,2)) { goto L_80170DA8; } // 80170D9C
  c->r[0]=R32(c->r[4]+0x00000008u); // 80170DA0
  goto L_80170DAC; // 80170DA4
L_80170DA8:;
  c->r[0]=0u+0x00000000u; // 80170DA8
L_80170DAC:;
  cmps(c,0,(int32_t)c->r[0],0); // 80170DAC
  if (!crb(c,2)) { goto L_80170DFC; } // 80170DB0
  c->r[4]=0u+0x80690000u; // 80170DB4
  {uint32_t ea=c->r[2]+0xFFFFBB78u; c->f[1]=c->ps1[1]=RF32(ea);} // 80170DB8
  c->r[4]=c->r[4]+0x00001400u; // 80170DBC
  {uint32_t ea=c->r[2]+0xFFFFBB74u; c->f[2]=c->ps1[2]=RF32(ea);} // 80170DC0
  {uint32_t ea=c->r[2]+0xFFFFBB98u; c->f[3]=c->ps1[3]=RF32(ea);} // 80170DC4
  c->r[4]=c->r[4]+0x00000172u; // 80170DC8
  c->r[3]=c->r[3]+0x000005DCu; // 80170DCC
  c->lr=0x80170DD4u; f_800E24D0(c); // 80170DD0
  c->r[4]=0u+0x00010000u; // 80170DD4
  c->r[3]=c->r[31]|c->r[31]; // 80170DD8
  c->r[4]=c->r[4]+0xFFFFDF14u; // 80170DDC
  c->r[5]=0u+0x00000001u; // 80170DE0
  c->lr=0x80170DE8u; f_80064744(c); // 80170DE4
  {uint32_t ea=c->r[31]+0x000007DCu; c->f[1]=c->ps1[1]=RF32(ea);} // 80170DE8
  c->r[3]=c->r[31]+0x000007E0u; // 80170DEC
  c->lr=0x80170DF4u; f_80170010(c); // 80170DF0
  c->r[0]=0u+0x00000004u; // 80170DF4
  W32(c->r[31]+0x000005C8u,c->r[0]); // 80170DF8
L_80170DFC:;
  c->r[3]=c->r[31]+0x000005DCu; // 80170DFC
  c->lr=0x80170E04u; f_800E2B1C(c); // 80170E00
  cmps(c,0,(int32_t)c->r[3],0); // 80170E04
  if (crb(c,2)) { goto L_80170EBC; } // 80170E08
  c->r[4]=0u+0x80690000u; // 80170E0C
  {uint32_t ea=c->r[2]+0xFFFFBB78u; c->f[1]=c->ps1[1]=RF32(ea);} // 80170E10
  c->r[4]=c->r[4]+0x00001400u; // 80170E14
  {uint32_t ea=c->r[2]+0xFFFFBB74u; c->f[2]=c->ps1[2]=RF32(ea);} // 80170E18
  {uint32_t ea=c->r[2]+0xFFFFBB98u; c->f[3]=c->ps1[3]=RF32(ea);} // 80170E1C
  c->r[3]=c->r[31]+0x000005DCu; // 80170E20
  c->r[4]=c->r[4]+0x0000017Du; // 80170E24
  c->lr=0x80170E2Cu; f_800E24D0(c); // 80170E28
  c->r[4]=0u+0x00010000u; // 80170E2C
  c->r[3]=c->r[31]|c->r[31]; // 80170E30
  c->r[4]=c->r[4]+0xFFFFDF15u; // 80170E34
  c->r[5]=0u+0x00000001u; // 80170E38
  c->lr=0x80170E40u; f_80064744(c); // 80170E3C
  c->r[3]=R32(c->r[31]+0x000005D4u); // 80170E40
  c->r[0]=c->r[3]+0x00000001u; // 80170E44
  W32(c->r[31]+0x000005D4u,c->r[0]); // 80170E48
  goto L_80170EBC; // 80170E4C
L_80170E50:;
  c->r[3]=R32(c->r[3]+0x00000404u); // 80170E50
  {uint32_t ea=c->r[2]+0xFFFFBBF4u; c->f[1]=c->ps1[1]=RF32(ea);} // 80170E54
  c->lr=0x80170E5Cu; f_802EA5A4(c); // 80170E58
  cmps(c,0,(int32_t)c->r[3],0); // 80170E5C
  if (crb(c,2)) { goto L_80170E6C; } // 80170E60
  c->r[0]=0u+0x00000038u; // 80170E64
  W32(c->r[31]+0x000005C8u,c->r[0]); // 80170E68
L_80170E6C:;
  c->r[3]=R32(c->r[31]+0x00000404u); // 80170E6C
  {uint32_t ea=c->r[2]+0xFFFFBBF8u; c->f[1]=c->ps1[1]=RF32(ea);} // 80170E70
  c->lr=0x80170E78u; f_802EA5A4(c); // 80170E74
  cmps(c,0,(int32_t)c->r[3],0); // 80170E78
  if (crb(c,2)) { goto L_80170E9C; } // 80170E7C
  {uint32_t ea=c->r[31]+0x000007D8u; c->f[1]=c->ps1[1]=RF32(ea);} // 80170E80
  c->r[3]=c->r[31]|c->r[31]; // 80170E84
  c->r[4]=0u+0x00000000u; // 80170E88
  c->r[5]=0u+0xFFFFFFFFu; // 80170E8C
  c->lr=0x80170E94u; f_80062194(c); // 80170E90
  c->r[0]=0u+0x00000008u; // 80170E94
  W32(c->r[31]+0x000005C8u,c->r[0]); // 80170E98
L_80170E9C:;
  c->r[3]=c->r[31]+0x00000354u; // 80170E9C
  c->lr=0x80170EA4u; f_800667AC(c); // 80170EA0
  cmps(c,0,(int32_t)c->r[3],0); // 80170EA4
  if (crb(c,2)) { goto L_80170EBC; } // 80170EA8
  c->r[0]=0u+0x00000000u; // 80170EAC
  W32(c->r[31]+0x00000684u,c->r[0]); // 80170EB0
  c->r[3]=c->r[31]|c->r[31]; // 80170EB4
  c->lr=0x80170EBCu; f_80171218(c); // 80170EB8
L_80170EBC:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80170EBC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80170EC0
  c->lr=c->r[0]; // 80170EC4
  c->r[1]=c->r[1]+0x00000010u; // 80170EC8
  return; // 80170ECC
}

// fn_80170ED0
void f_80170ED0(Ctx* __restrict c) {
  trace_call(0x80170ED0u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80170ED0
  c->r[0]=c->lr; // 80170ED4
  c->r[3]=c->r[4]+0x000001B8u; // 80170ED8
  W32(c->r[1]+0x00000044u,c->r[0]); // 80170EDC
  W32(c->r[1]+0x0000003Cu,c->r[31]); // 80170EE0
  c->r[31]=c->r[4]|c->r[4]; // 80170EE4
  c->r[4]=c->r[1]+0x00000008u; // 80170EE8
  c->lr=0x80170EF0u; f_80382F2C(c); // 80170EEC
  c->r[3]=0u+0x00010000u; // 80170EF0
  c->r[4]=0u+0x80690000u; // 80170EF4
  c->r[0]=c->r[3]+0xFFFFE03Bu; // 80170EF8
  W32(c->r[31]+0x00000688u,c->r[0]); // 80170EFC
  c->r[4]=c->r[4]+0x00001400u; // 80170F00
  {uint32_t ea=c->r[2]+0xFFFFBB78u; c->f[1]=c->ps1[1]=RF32(ea);} // 80170F04
  {uint32_t ea=c->r[2]+0xFFFFBB74u; c->f[2]=c->ps1[2]=RF32(ea);} // 80170F08
  c->r[3]=c->r[31]+0x000005DCu; // 80170F0C
  {uint32_t ea=c->r[2]+0xFFFFBB98u; c->f[3]=c->ps1[3]=RF32(ea);} // 80170F10
  c->r[4]=c->r[4]+0x00000188u; // 80170F14
  c->lr=0x80170F1Cu; f_800E24D0(c); // 80170F18
  c->r[0]=R32(c->r[1]+0x00000044u); // 80170F1C
  c->r[31]=R32(c->r[1]+0x0000003Cu); // 80170F20
  c->lr=c->r[0]; // 80170F24
  c->r[1]=c->r[1]+0x00000040u; // 80170F28
  return; // 80170F2C
}

// fn_80170F30
void f_80170F30(Ctx* __restrict c) {
  trace_call(0x80170F30u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80170F30
  c->r[0]=c->lr; // 80170F34
  W32(c->r[1]+0x00000014u,c->r[0]); // 80170F38
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80170F3C
  c->r[31]=c->r[3]|c->r[3]; // 80170F40
  c->r[4]=R32(c->r[3]+0x00000004u); // 80170F44
  cmps(c,0,(int32_t)c->r[4],0); // 80170F48
  if (crb(c,2)) { goto L_80170F58; } // 80170F4C
  c->r[0]=R32(c->r[4]+0x00000008u); // 80170F50
  goto L_80170F5C; // 80170F54
L_80170F58:;
  c->r[0]=0u+0x00000000u; // 80170F58
L_80170F5C:;
  cmps(c,0,(int32_t)c->r[0],0); // 80170F5C
  if (!crb(c,2)) { goto L_80170F84; } // 80170F60
  c->r[4]=0u+0x00010000u; // 80170F64
  c->r[3]=c->r[31]|c->r[31]; // 80170F68
  c->r[4]=c->r[4]+0xFFFFDEA9u; // 80170F6C
  c->r[5]=0u+0x00000001u; // 80170F70
  c->lr=0x80170F78u; f_80064744(c); // 80170F74
  {uint32_t ea=c->r[2]+0xFFFFBBFCu; c->f[1]=c->ps1[1]=RF32(ea);} // 80170F78
  c->r[3]=c->r[31]+0x000007E0u; // 80170F7C
  c->lr=0x80170F84u; f_80170010(c); // 80170F80
L_80170F84:;
  c->r[3]=c->r[31]+0x00000354u; // 80170F84
  c->lr=0x80170F8Cu; f_800667AC(c); // 80170F88
  cmps(c,0,(int32_t)c->r[3],0); // 80170F8C
  if (crb(c,2)) { goto L_80170FA4; } // 80170F90
  c->r[0]=0u+0x00000000u; // 80170F94
  W32(c->r[31]+0x00000684u,c->r[0]); // 80170F98
  c->r[3]=c->r[31]|c->r[31]; // 80170F9C
  c->lr=0x80170FA4u; f_80171218(c); // 80170FA0
L_80170FA4:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80170FA4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80170FA8
  c->lr=c->r[0]; // 80170FAC
  c->r[1]=c->r[1]+0x00000010u; // 80170FB0
  return; // 80170FB4
}

// fn_80170FB8
void f_80170FB8(Ctx* __restrict c) {
  trace_call(0x80170FB8u);
  return; // 80170FB8
}

// fn_80170FBC
void f_80170FBC(Ctx* __restrict c) {
  trace_call(0x80170FBCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80170FBC
  c->r[0]=c->lr; // 80170FC0
  W32(c->r[1]+0x00000014u,c->r[0]); // 80170FC4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80170FC8
  c->r[31]=c->r[3]|c->r[3]; // 80170FCC
  c->r[4]=R32(c->r[3]+0x00000004u); // 80170FD0
  cmps(c,0,(int32_t)c->r[4],0); // 80170FD4
  if (crb(c,2)) { goto L_80170FE4; } // 80170FD8
  c->r[0]=R32(c->r[4]+0x00000008u); // 80170FDC
  goto L_80170FE8; // 80170FE0
L_80170FE4:;
  c->r[0]=0u+0x00000000u; // 80170FE4
L_80170FE8:;
  cmps(c,0,(int32_t)c->r[0],0); // 80170FE8
  if (!crb(c,2)) { goto L_8017100C; } // 80170FEC
  c->r[0]=0u+0x00000008u; // 80170FF0
  W32(c->r[3]+0x000005C8u,c->r[0]); // 80170FF4
  c->r[4]=0u+0x00010000u; // 80170FF8
  c->r[3]=c->r[31]|c->r[31]; // 80170FFC
  c->r[4]=c->r[4]+0xFFFFDEA8u; // 80171000
  c->r[5]=0u+0x00000001u; // 80171004
  c->lr=0x8017100Cu; f_80064744(c); // 80171008
L_8017100C:;
  c->r[3]=R32(c->r[31]+0x00000404u); // 8017100C
  {uint32_t ea=c->r[2]+0xFFFFBB80u; c->f[1]=c->ps1[1]=RF32(ea);} // 80171010
  c->lr=0x80171018u; f_802EA5A4(c); // 80171014
  cmps(c,0,(int32_t)c->r[3],0); // 80171018
  if (crb(c,2)) { goto L_80171034; } // 8017101C
  c->r[0]=0u+0x00000000u; // 80171020
  W32(c->r[31]+0x00000360u,c->r[0]); // 80171024
  c->r[3]=c->r[31]|c->r[31]; // 80171028
  W32(c->r[31]+0x00000684u,c->r[0]); // 8017102C
  c->lr=0x80171034u; f_80171218(c); // 80171030
L_80171034:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80171034
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80171038
  c->lr=c->r[0]; // 8017103C
  c->r[1]=c->r[1]+0x00000010u; // 80171040
  return; // 80171044
}

// fn_80171048
void f_80171048(Ctx* __restrict c) {
  trace_call(0x80171048u);
  return; // 80171048
}

// fn_8017104C
void f_8017104C(Ctx* __restrict c) {
  trace_call(0x8017104Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8017104C
  c->r[0]=c->lr; // 80171050
  W32(c->r[1]+0x00000024u,c->r[0]); // 80171054
  {uint32_t ea=c->r[1]+0x0000000Cu; for(int i=27;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 80171058
  c->r[27]=c->r[3]|c->r[3]; // 8017105C
  c->r[28]=0u+0x00000000u; // 80171060
  c->r[31]=0u+0x00000000u; // 80171064
  c->r[29]=R32(c->r[3]+0x00000434u); // 80171068
L_8017106C:;
  c->r[30]=c->r[27]+c->r[31]; // 8017106C
  c->r[0]=R8(c->r[30]+0x00000808u); // 80171070
  cmps(c,0,(int32_t)c->r[0],0); // 80171074
  if (!crb(c,2)) { goto L_8017108C; } // 80171078
  c->r[3]=c->r[29]+0x00000030u; // 8017107C
  c->r[4]=c->r[28]+0x00000002u; // 80171080
  c->lr=0x80171088u; f_802D94E8(c); // 80171084
  {uint32_t ea=c->r[30]+0x00000804u; WF32(ea,c->f[1]);} // 80171088
L_8017108C:;
  c->r[28]=c->r[28]+0x00000001u; // 8017108C
  c->r[31]=c->r[31]+0x00000014u; // 80171090
  cmps(c,0,(int32_t)c->r[28],3); // 80171094
  if (crb(c,0)) { IRQCHK(c); goto L_8017106C; } // 80171098
  {uint32_t ea=c->r[1]+0x0000000Cu; for(int i=27;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 8017109C
  c->r[0]=R32(c->r[1]+0x00000024u); // 801710A0
  c->lr=c->r[0]; // 801710A4
  c->r[1]=c->r[1]+0x00000020u; // 801710A8
  return; // 801710AC
}

// fn_801710B0
void f_801710B0(Ctx* __restrict c) {
  trace_call(0x801710B0u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801710B0
  c->r[0]=c->lr; // 801710B4
  W32(c->r[1]+0x00000034u,c->r[0]); // 801710B8
  c->r[11]=c->r[1]+0x00000020u; // 801710BC
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[31]);} // 801710C0
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,31,ea,0,0);} // 801710C4
  c->lr=0x801710CCu; { W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801710C8
  c->f[31]=c->f[1]; // 801710CC
  c->r[31]=(uint32_t)((int32_t)c->r[4]*(int32_t)20); // 801710D0
  c->r[29]=c->r[3]|c->r[3]; // 801710D4
  c->r[30]=c->r[4]|c->r[4]; // 801710D8
  c->lr=0x801710E0u; f_8016D6B4(c); // 801710DC
  c->r[3]=c->r[29]+c->r[31]; // 801710E0
  {uint32_t ea=c->r[3]+0x0000080Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801710E4
  fcmp(c,0,c->f[0],c->f[1]); // 801710E8
  if (!crb(c,1)) { goto L_8017111C; } // 801710EC
  {uint32_t ea=c->r[3]+0x00000804u; c->f[1]=c->ps1[1]=RF32(ea);} // 801710F0
  {uint32_t ea=c->r[2]+0xFFFFBB74u; c->f[0]=c->ps1[0]=RF32(ea);} // 801710F4
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[31]); // 801710F8
  {uint32_t ea=c->r[3]+0x00000804u; WF32(ea,c->f[1]);} // 801710FC
  fcmp(c,0,c->f[1],c->f[0]); // 80171100
  setcrb(c,2,crb(c,0)|crb(c,2)); // 80171104
  if (!crb(c,2)) { goto L_8017111C; } // 80171108
  c->r[3]=c->r[29]|c->r[29]; // 8017110C
  c->r[4]=c->r[30]|c->r[30]; // 80171110
  c->lr=0x80171118u; f_80171190(c); // 80171114
  goto L_80171170; // 80171118
L_8017111C:;
  c->r[31]=c->r[29]+c->r[31]; // 8017111C
  c->r[0]=R32(c->r[31]+0x00000814u); // 80171120
  cmps(c,0,(int32_t)c->r[0],0); // 80171124
  if (!crb(c,0)) { goto L_80171170; } // 80171128
  c->r[0]=R8(c->r[31]+0x00000808u); // 8017112C
  cmps(c,0,(int32_t)c->r[0],0); // 80171130
  if (!crb(c,2)) { goto L_80171170; } // 80171134
  c->r[3]=R32(c->r[29]+0x00000404u); // 80171138
  c->r[4]=R32(c->r[31]+0x00000810u); // 8017113C
  c->lr=0x80171144u; f_802E9FB8(c); // 80171140
  c->r[4]=0u+0x806E0000u; // 80171144
  c->r[0]=rotl(c->r[30],6)&0xFFFFFFC0u; // 80171148
  c->r[4]=c->r[4]+0xFFFFEE00u; // 8017114C
  c->r[3]=R32(c->r[29]+0x00000404u); // 80171150
  c->r[6]=c->r[4]+c->r[0]; // 80171154
  {uint32_t ea=c->r[2]+0xFFFFBB74u; c->f[1]=c->ps1[1]=RF32(ea);} // 80171158
  {uint32_t ea=c->r[2]+0xFFFFBB78u; c->f[2]=c->ps1[2]=RF32(ea);} // 8017115C
  c->r[5]=c->r[30]|c->r[30]; // 80171160
  c->r[4]=0u+0x00000002u; // 80171164
  c->lr=0x8017116Cu; f_802E91C8(c); // 80171168
  W32(c->r[31]+0x00000814u,c->r[3]); // 8017116C
L_80171170:;
  c->r[11]=c->r[1]+0x00000020u; // 80171170
  {uint32_t ea=c->r[1]+0x00000028u; psq_load(c,31,ea,0,0);} // 80171174
  {uint32_t ea=c->r[1]+0x00000020u; c->f[31]=RF64(ea);} // 80171178
  c->lr=0x80171180u; { c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8017117C
  c->r[0]=R32(c->r[1]+0x00000034u); // 80171180
  c->lr=c->r[0]; // 80171184
  c->r[1]=c->r[1]+0x00000030u; // 80171188
  return; // 8017118C
}

// fn_80171190
void f_80171190(Ctx* __restrict c) {
  trace_call(0x80171190u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80171190
  c->r[0]=c->lr; // 80171194
  W32(c->r[1]+0x00000024u,c->r[0]); // 80171198
  c->r[11]=c->r[1]+0x00000020u; // 8017119C
  c->lr=0x801711A4u; { W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801711A0
  c->r[30]=(uint32_t)((int32_t)c->r[4]*(int32_t)20); // 801711A4
  c->r[28]=c->r[3]|c->r[3]; // 801711A8
  c->r[29]=c->r[4]|c->r[4]; // 801711AC
  c->r[31]=c->r[3]+c->r[30]; // 801711B0
  c->r[3]=R32(c->r[3]+0x00000404u); // 801711B4
  c->r[4]=R32(c->r[31]+0x00000810u); // 801711B8
  c->lr=0x801711C0u; f_802E9FB8(c); // 801711BC
  c->r[3]=R32(c->r[28]+0x00000404u); // 801711C0
  c->r[4]=R32(c->r[31]+0x00000814u); // 801711C4
  c->lr=0x801711CCu; f_802E9FB8(c); // 801711C8
  c->r[4]=0u+0x806E0000u; // 801711CC
  c->r[0]=rotl(c->r[29],6)&0xFFFFFFC0u; // 801711D0
  c->r[4]=c->r[4]+0xFFFFEEC0u; // 801711D4
  c->r[3]=R32(c->r[28]+0x00000404u); // 801711D8
  c->r[6]=c->r[4]+c->r[0]; // 801711DC
  {uint32_t ea=c->r[2]+0xFFFFBB74u; c->f[1]=c->ps1[1]=RF32(ea);} // 801711E0
  {uint32_t ea=c->r[2]+0xFFFFBB78u; c->f[2]=c->ps1[2]=RF32(ea);} // 801711E4
  c->r[5]=c->r[29]|c->r[29]; // 801711E8
  c->r[4]=0u+0x00000002u; // 801711EC
  c->lr=0x801711F4u; f_802E91C8(c); // 801711F0
  W32(c->r[31]+0x00000810u,c->r[3]); // 801711F4
  c->r[0]=0u+0x00000001u; // 801711F8
  c->r[11]=c->r[1]+0x00000020u; // 801711FC
  W8(c->r[31]+0x00000808u,c->r[0]); // 80171200
  c->lr=0x80171208u; { c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80171204
  c->r[0]=R32(c->r[1]+0x00000024u); // 80171208
  c->lr=c->r[0]; // 8017120C
  c->r[1]=c->r[1]+0x00000020u; // 80171210
  return; // 80171214
}

// fn_80171218
void f_80171218(Ctx* __restrict c) {
  trace_call(0x80171218u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80171218
  c->r[0]=c->lr; // 8017121C
  W32(c->r[1]+0x00000014u,c->r[0]); // 80171220
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80171224
  c->r[31]=c->r[3]|c->r[3]; // 80171228
  c->r[0]=R32(c->r[3]+0x000005CCu); // 8017122C
  cmpu(c,0,c->r[0],0x00000009u); // 80171230
  if (crb(c,1)) { goto L_801712C4; } // 80171234
  c->r[4]=0u+0x806E0000u; // 80171238
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 8017123C
  c->r[4]=c->r[4]+0xFFFFF070u; // 80171240
  c->r[4]=R32(c->r[4]+c->r[0]); // 80171244
  c->ctr=c->r[4]; // 80171248
  if (true) { switch (c->ctr) { case 0x80171250u: goto L_80171250; case 0x8017125Cu: goto L_8017125C; case 0x80171268u: goto L_80171268; case 0x80171274u: goto L_80171274; case 0x80171280u: goto L_80171280; case 0x8017128Cu: goto L_8017128C; case 0x80171298u: goto L_80171298; case 0x801712A4u: goto L_801712A4; case 0x801712B0u: goto L_801712B0; case 0x801712BCu: goto L_801712BC; default: break; } dispatch(c,c->ctr); return; } // 8017124C
L_80171250:;
  c->lr=0x80171254u; f_8016DA1C(c); // 80171250
  W32(c->r[31]+0x00000680u,c->r[3]); // 80171254
  goto L_801712C4; // 80171258
L_8017125C:;
  c->lr=0x80171260u; f_8016DEF4(c); // 8017125C
  W32(c->r[31]+0x00000680u,c->r[3]); // 80171260
  goto L_801712C4; // 80171264
L_80171268:;
  c->lr=0x8017126Cu; f_8016E5D8(c); // 80171268
  W32(c->r[31]+0x00000680u,c->r[3]); // 8017126C
  goto L_801712C4; // 80171270
L_80171274:;
  c->lr=0x80171278u; f_8016E7A4(c); // 80171274
  W32(c->r[31]+0x00000680u,c->r[3]); // 80171278
  goto L_801712C4; // 8017127C
L_80171280:;
  c->lr=0x80171284u; f_8016E9E4(c); // 80171280
  W32(c->r[31]+0x00000680u,c->r[3]); // 80171284
  goto L_801712C4; // 80171288
L_8017128C:;
  c->lr=0x80171290u; f_8016EBC0(c); // 8017128C
  W32(c->r[31]+0x00000680u,c->r[3]); // 80171290
  goto L_801712C4; // 80171294
L_80171298:;
  c->lr=0x8017129Cu; f_8016F0D0(c); // 80171298
  W32(c->r[31]+0x00000680u,c->r[3]); // 8017129C
  goto L_801712C4; // 801712A0
L_801712A4:;
  c->lr=0x801712A8u; f_8016F4D4(c); // 801712A4
  W32(c->r[31]+0x00000680u,c->r[3]); // 801712A8
  goto L_801712C4; // 801712AC
L_801712B0:;
  c->lr=0x801712B4u; f_8016F6B0(c); // 801712B0
  W32(c->r[31]+0x00000680u,c->r[3]); // 801712B4
  goto L_801712C4; // 801712B8
L_801712BC:;
  c->lr=0x801712C0u; f_8016FC60(c); // 801712BC
  W32(c->r[31]+0x00000680u,c->r[3]); // 801712C0
L_801712C4:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801712C4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801712C8
  c->lr=c->r[0]; // 801712CC
  c->r[1]=c->r[1]+0x00000010u; // 801712D0
  return; // 801712D4
}

// fn_801712D8
void f_801712D8(Ctx* __restrict c) {
  trace_call(0x801712D8u);
  {uint32_t ea=c->r[1]+0xFFFFFF20u; W32(ea,c->r[1]); c->r[1]=ea;} // 801712D8
  c->r[3]=0u+0x80690000u; // 801712DC
  c->r[3]=c->r[3]+0x000012E0u; // 801712E0
  c->r[0]=0u+0x0000001Bu; // 801712E4
  c->r[7]=c->r[1]+0x00000004u; // 801712E8
  c->r[6]=c->r[3]+0xFFFFFFFCu; // 801712EC
  c->ctr=c->r[0]; // 801712F0
L_801712F4:;
  c->r[3]=R32(c->r[6]+0x00000004u); // 801712F4
  {uint32_t ea=c->r[6]+0x00000008u; c->r[0]=R32(ea); c->r[6]=ea;} // 801712F8
  W32(c->r[7]+0x00000004u,c->r[3]); // 801712FC
  {uint32_t ea=c->r[7]+0x00000008u; W32(ea,c->r[0]); c->r[7]=ea;} // 80171300
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801712F4; } // 80171304
  c->r[0]=(uint32_t)((int32_t)c->r[4]*(int32_t)3); // 80171308
  c->r[6]=c->r[1]+0x00000010u; // 8017130C
  c->r[4]=c->r[1]+0x0000000Cu; // 80171310
  c->r[3]=c->r[1]+0x00000008u; // 80171314
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80171318
  {uint32_t ea=c->r[6]+c->r[0]; c->f[2]=c->ps1[2]=RF32(ea);} // 8017131C
  {uint32_t ea=c->r[4]+c->r[0]; c->f[1]=c->ps1[1]=RF32(ea);} // 80171320
  {uint32_t ea=c->r[3]+c->r[0]; c->f[0]=c->ps1[0]=RF32(ea);} // 80171324
  {uint32_t ea=c->r[5]+0x00000000u; WF32(ea,c->f[0]);} // 80171328
  {uint32_t ea=c->r[5]+0x00000004u; WF32(ea,c->f[1]);} // 8017132C
  {uint32_t ea=c->r[5]+0x00000008u; WF32(ea,c->f[2]);} // 80171330
  c->r[1]=c->r[1]+0x000000E0u; // 80171334
  return; // 80171338
}

// fn_8017133C
void f_8017133C(Ctx* __restrict c) {
  trace_call(0x8017133Cu);
  {uint32_t ea=c->r[1]+0xFFFFFF60u; W32(ea,c->r[1]); c->r[1]=ea;} // 8017133C
  c->r[0]=c->lr; // 80171340
  W32(c->r[1]+0x000000A4u,c->r[0]); // 80171344
  c->r[5]=c->r[1]+0x00000008u; // 80171348
  W32(c->r[1]+0x0000009Cu,c->r[31]); // 8017134C
  c->r[31]=c->r[4]|c->r[4]; // 80171350
  W32(c->r[1]+0x00000098u,c->r[30]); // 80171354
  c->r[30]=c->r[3]|c->r[3]; // 80171358
  c->lr=0x80171360u; f_801712D8(c); // 8017135C
  c->r[3]=0u+0x80690000u; // 80171360
  c->r[0]=0u+0x00000009u; // 80171364
  c->r[3]=c->r[3]+0x000013B8u; // 80171368
  c->r[5]=c->r[1]+0x00000044u; // 8017136C
  c->r[4]=c->r[3]+0xFFFFFFFCu; // 80171370
  c->ctr=c->r[0]; // 80171374
L_80171378:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 80171378
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R32(ea); c->r[4]=ea;} // 8017137C
  W32(c->r[5]+0x00000004u,c->r[3]); // 80171380
  {uint32_t ea=c->r[5]+0x00000008u; W32(ea,c->r[0]); c->r[5]=ea;} // 80171384
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80171378; } // 80171388
  c->r[0]=rotl(c->r[31],2)&0xFFFFFFFCu; // 8017138C
  c->r[3]=c->r[1]+0x00000048u; // 80171390
  {uint32_t ea=c->r[3]+c->r[0]; c->f[2]=c->ps1[2]=RF32(ea);} // 80171394
  c->r[3]=c->r[1]+0x00000018u; // 80171398
  {uint32_t ea=c->r[2]+0xFFFFBC00u; c->f[0]=c->ps1[0]=RF32(ea);} // 8017139C
  {uint32_t ea=c->r[2]+0xFFFFBB74u; c->f[1]=c->ps1[1]=RF32(ea);} // 801713A0
  c->f[2]=c->ps1[2]=S(c->f[0]*c->f[2]); // 801713A4
  {uint32_t ea=c->r[2]+0xFFFFBC04u; c->f[0]=c->ps1[0]=RF32(ea);} // 801713A8
  c->f[3]=c->f[1]; // 801713AC
  c->f[2]=c->ps1[2]=S(c->f[0]*c->f[2]); // 801713B0
  c->lr=0x801713B8u; f_804E18A0(c); // 801713B4
  {uint32_t ea=c->r[1]+0x00000008u; c->f[2]=c->ps1[2]=RF32(ea);} // 801713B8
  c->r[3]=c->r[30]|c->r[30]; // 801713BC
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801713C0
  c->r[4]=c->r[1]+0x00000018u; // 801713C4
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 801713C8
  {uint32_t ea=c->r[1]+0x00000024u; WF32(ea,c->f[2]);} // 801713CC
  {uint32_t ea=c->r[1]+0x00000034u; WF32(ea,c->f[1]);} // 801713D0
  {uint32_t ea=c->r[1]+0x00000044u; WF32(ea,c->f[0]);} // 801713D4
  c->r[12]=R32(c->r[30]+0x0000001Cu); // 801713D8
  c->r[12]=R32(c->r[12]+0x000000F0u); // 801713DC
  c->ctr=c->r[12]; // 801713E0
  if (true) { c->lr=0x801713E8u; dispatch(c,c->ctr); } // 801713E4
  c->r[0]=R32(c->r[1]+0x000000A4u); // 801713E8
  c->r[31]=R32(c->r[1]+0x0000009Cu); // 801713EC
  c->r[30]=R32(c->r[1]+0x00000098u); // 801713F0
  c->lr=c->r[0]; // 801713F4
  c->r[1]=c->r[1]+0x000000A0u; // 801713F8
  return; // 801713FC
}

// fn_80171400
void f_80171400(Ctx* __restrict c) {
  trace_call(0x80171400u);
  return; // 80171400
}

// fn_80171404
void f_80171404(Ctx* __restrict c) {
  trace_call(0x80171404u);
  return; // 80171404
}

// fn_80171408
void f_80171408(Ctx* __restrict c) {
  trace_call(0x80171408u);
  return; // 80171408
}

// fn_8017140C
void f_8017140C(Ctx* __restrict c) {
  trace_call(0x8017140Cu);
  return; // 8017140C
}

// fn_80171410
void f_80171410(Ctx* __restrict c) {
  trace_call(0x80171410u);
  return; // 80171410
}

// fn_80171414
void f_80171414(Ctx* __restrict c) {
  trace_call(0x80171414u);
  return; // 80171414
}

// fn_80171418
void f_80171418(Ctx* __restrict c) {
  trace_call(0x80171418u);
  return; // 80171418
}

// fn_8017141C
void f_8017141C(Ctx* __restrict c) {
  trace_call(0x8017141Cu);
  return; // 8017141C
}

// fn_80171420
void f_80171420(Ctx* __restrict c) {
  trace_call(0x80171420u);
  return; // 80171420
}

// fn_80171424
void f_80171424(Ctx* __restrict c) {
  trace_call(0x80171424u);
  return; // 80171424
}

// fn_80171428
void f_80171428(Ctx* __restrict c) {
  trace_call(0x80171428u);
  return; // 80171428
}

// fn_8017142C
void f_8017142C(Ctx* __restrict c) {
  trace_call(0x8017142Cu);
  return; // 8017142C
}

// fn_80171430
void f_80171430(Ctx* __restrict c) {
  trace_call(0x80171430u);
  c->r[3]=c->r[3]+0xFFFFFCACu; // 80171430
  f_8016CEE0(c); return; // 80171434
}

// fn_80171438
void f_80171438(Ctx* __restrict c) {
  trace_call(0x80171438u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80171438
  c->r[0]=c->lr; // 8017143C
  W32(c->r[1]+0x00000024u,c->r[0]); // 80171440
  c->r[11]=c->r[1]+0x00000020u; // 80171444
  c->lr=0x8017144Cu; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80171448
  c->r[29]=c->r[3]|c->r[3]; // 8017144C
  c->r[31]=0u+0x80690000u; // 80171450
  c->r[30]=c->r[29]|c->r[29]; // 80171454
  c->r[28]=c->r[29]|c->r[29]; // 80171458
  c->r[26]=c->r[29]|c->r[29]; // 8017145C
  c->r[31]=c->r[31]+0x00001598u; // 80171460
  c->lr=0x80171468u; f_80172250(c); // 80171464
  c->r[4]=0u+0x806D0000u; // 80171468
  c->r[27]=0u+0x00000000u; // 8017146C
  W32(c->r[29]+0x00000000u,c->r[3]); // 80171470
  c->r[4]=c->r[4]+0x000038C0u; // 80171474
  c->r[3]=c->r[29]+0x00000020u; // 80171478
  W32(c->r[29]+0x0000001Cu,c->r[4]); // 8017147C
  W32(c->r[29]+0x00000004u,c->r[27]); // 80171480
  W32(c->r[29]+0x00000008u,c->r[27]); // 80171484
  W32(c->r[29]+0x0000000Cu,c->r[27]); // 80171488
  W8(c->r[29]+0x00000010u,c->r[27]); // 8017148C
  W32(c->r[29]+0x00000014u,c->r[27]); // 80171490
  W32(c->r[29]+0x00000018u,c->r[27]); // 80171494
  c->lr=0x8017149Cu; f_80163ED4(c); // 80171498
  c->r[3]=c->r[29]+0x00000028u; // 8017149C
  c->r[4]=0u+0x00000001u; // 801714A0
  c->lr=0x801714A8u; f_80163FD0(c); // 801714A4
  c->r[3]=c->r[29]+0x00000038u; // 801714A8
  c->lr=0x801714B0u; f_80164094(c); // 801714AC
  c->r[3]=c->r[29]+0x00000044u; // 801714B0
  c->r[4]=0u+0x00000000u; // 801714B4
  c->lr=0x801714BCu; f_801640D8(c); // 801714B8
  c->r[3]=0u+0x806F0000u; // 801714BC
  W32(c->r[29]+0x00000058u,c->r[27]); // 801714C0
  c->r[3]=c->r[3]+0x00000E80u; // 801714C4
  W32(c->r[29]+0x0000001Cu,c->r[3]); // 801714C8
  c->r[3]=c->r[29]+0x0000009Cu; // 801714CC
  W32(c->r[29]+0x00000064u,c->r[27]); // 801714D0
  c->lr=0x801714D8u; f_8016419C(c); // 801714D4
  c->r[3]=c->r[29]+0x000000A8u; // 801714D8
  c->lr=0x801714E0u; f_801641E0(c); // 801714DC
  c->r[3]=c->r[29]+0x000000B4u; // 801714E0
  c->lr=0x801714E8u; f_80164224(c); // 801714E4
  c->r[3]=c->r[29]+0x000000C0u; // 801714E8
  c->lr=0x801714F0u; f_80164268(c); // 801714EC
  c->r[3]=c->r[29]+0x000000CCu; // 801714F0
  c->lr=0x801714F8u; f_801642AC(c); // 801714F4
  c->r[3]=c->r[29]+0x000000D8u; // 801714F8
  c->lr=0x80171500u; f_801642F0(c); // 801714FC
  c->r[0]=0u+0x00000006u; // 80171500
  W32(c->r[29]+0x000000E8u,c->r[0]); // 80171504
  c->r[3]=c->r[29]+0x000000FCu; // 80171508
  W32(c->r[29]+0x000000ECu,c->r[27]); // 8017150C
  W32(c->r[29]+0x000000F8u,c->r[27]); // 80171510
  c->lr=0x80171518u; f_80164320(c); // 80171514
  c->r[0]=0u+0x0000000Au; // 80171518
  c->r[3]=c->r[27]|c->r[27]; // 8017151C
  W32(c->r[29]+0x00000314u,c->r[27]); // 80171520
  c->r[7]=0u+0x00000000u; // 80171524
  c->r[6]=0u+0xFFFFFFFFu; // 80171528
  W8(c->r[29]+0x0000005Cu,c->r[27]); // 8017152C
  W32(c->r[29]+0x00000054u,c->r[27]); // 80171530
  W32(c->r[29]+0x00000310u,c->r[29]); // 80171534
  c->ctr=c->r[0]; // 80171538
L_8017153C:;
  c->r[5]=c->r[29]+c->r[3]; // 8017153C
  c->r[4]=c->r[29]+c->r[7]; // 80171540
  W32(c->r[5]+0x00000068u,c->r[6]); // 80171544
  c->r[7]=c->r[7]+0x00000001u; // 80171548
  c->r[3]=c->r[3]+0x00000004u; // 8017154C
  W8(c->r[4]+0x00000090u,c->r[27]); // 80171550
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8017153C; } // 80171554
  c->r[3]=c->r[29]+0x00000318u; // 80171558
  c->r[4]=0u+0x00000001u; // 8017155C
  c->lr=0x80171564u; f_80163E10(c); // 80171560
  c->r[3]=0u+0x806D0000u; // 80171564
  c->r[0]=0u+0x00000000u; // 80171568
  c->r[3]=c->r[3]+0xFFFFD974u; // 8017156C
  c->r[5]=0u+0xFFFFFFFFu; // 80171570
  c->r[4]=0u+0x00000001u; // 80171574
  c->r[26]=c->r[29]+0x0000032Cu; // 80171578
  W32(c->r[29]+0x0000001Cu,c->r[3]); // 8017157C
  c->r[3]=c->r[26]|c->r[26]; // 80171580
  W32(c->r[29]+0x00000328u,c->r[5]); // 80171584
  W32(c->r[29]+0x000000ECu,c->r[4]); // 80171588
  W32(c->r[29]+0x00000054u,c->r[0]); // 8017158C
  W32(c->r[29]+0x00000314u,c->r[0]); // 80171590
  c->lr=0x80171598u; f_800506C0(c); // 80171594
  cmps(c,0,(int32_t)c->r[26],0); // 80171598
  c->r[3]=c->r[26]|c->r[26]; // 8017159C
  if (crb(c,2)) { goto L_801715A8; } // 801715A0
  c->r[3]=c->r[26]+0xFFFFFCD4u; // 801715A4
L_801715A8:;
  c->r[27]=0u+0x00000001u; // 801715A8
  W32(c->r[26]+0x00000008u,c->r[3]); // 801715AC
  W8(c->r[26]+0x0000000Cu,c->r[27]); // 801715B0
  c->r[0]=R8(c->r[13]+0xFFFFBBA9u); // 801715B4
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 801715B8
  if (!crb(c,2)) { goto L_801715FC; } // 801715BC
  c->r[28]=0u+0x80730000u; // 801715C0
  c->r[3]=c->r[28]+0x000073A8u; // 801715C4
  c->lr=0x801715CCu; f_800506C0(c); // 801715C8
  c->r[6]=0u+0x806D0000u; // 801715CC
  c->r[4]=0u+0x80050000u; // 801715D0
  c->r[6]=c->r[6]+0xFFFFC8C8u; // 801715D4
  c->r[3]=c->r[28]+0x000073A8u; // 801715D8
  c->r[0]=c->r[6]+0x00000008u; // 801715DC
  c->r[5]=0u+0x80750000u; // 801715E0
  W32(c->r[3]+0x00000010u,c->r[6]); // 801715E4
  c->r[4]=c->r[4]+0xFFFFCF9Cu; // 801715E8
  c->r[5]=c->r[5]+0x00004964u; // 801715EC
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 801715F0
  c->lr=0x801715F8u; f_803A92B8(c); // 801715F4
  W8(c->r[13]+0xFFFFBBA9u,c->r[27]); // 801715F8
L_801715FC:;
  c->r[3]=0u+0x80730000u; // 801715FC
  c->r[5]=c->r[26]|c->r[26]; // 80171600
  c->r[3]=c->r[3]+0x000073A8u; // 80171604
  c->r[4]=c->r[3]|c->r[3]; // 80171608
  c->lr=0x80171610u; f_802DDCA8(c); // 8017160C
  c->r[27]=c->r[29]+0x0000033Cu; // 80171610
  c->r[3]=c->r[27]|c->r[27]; // 80171614
  c->lr=0x8017161Cu; f_800506C0(c); // 80171618
  cmps(c,0,(int32_t)c->r[27],0); // 8017161C
  c->r[3]=c->r[27]|c->r[27]; // 80171620
  if (crb(c,2)) { goto L_8017162C; } // 80171624
  c->r[3]=c->r[27]+0xFFFFFCC4u; // 80171628
L_8017162C:;
  c->r[0]=0u+0x00000000u; // 8017162C
  W32(c->r[27]+0x00000008u,c->r[3]); // 80171630
  c->r[3]=c->r[27]|c->r[27]; // 80171634
  W8(c->r[27]+0x0000000Cu,c->r[0]); // 80171638
  c->lr=0x80171640u; f_80163D78(c); // 8017163C
  c->r[3]=0u+0x806D0000u; // 80171640
  W32(c->r[29]+0x00000054u,c->r[31]); // 80171644
  c->r[3]=c->r[3]+0x00004AE8u; // 80171648
  W32(c->r[29]+0x0000001Cu,c->r[3]); // 8017164C
  c->r[0]=R8(c->r[13]+0xFFFFBC60u); // 80171650
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 80171654
  if (!crb(c,2)) { goto L_80171674; } // 80171658
  c->r[3]=R32(c->r[13]+0xFFFFBC48u); // 8017165C
  c->r[0]=0u+0x00000001u; // 80171660
  W32(c->r[13]+0xFFFFBC5Cu,c->r[3]); // 80171664
  c->r[3]=c->r[3]+0x00000001u; // 80171668
  W32(c->r[13]+0xFFFFBC48u,c->r[3]); // 8017166C
  W8(c->r[13]+0xFFFFBC60u,c->r[0]); // 80171670
L_80171674:;
  c->r[0]=R32(c->r[13]+0xFFFFBC5Cu); // 80171674
  W32(c->r[29]+0x00000328u,c->r[0]); // 80171678
  c->r[0]=R8(c->r[13]+0xFFFFCC5Cu); // 8017167C
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 80171680
  if (!crb(c,2)) { goto L_801716A0; } // 80171684
  c->r[3]=R32(c->r[13]+0xFFFFBDACu); // 80171688
  c->r[0]=0u+0x00000001u; // 8017168C
  W32(c->r[13]+0xFFFFCC58u,c->r[3]); // 80171690
  c->r[3]=c->r[3]+0x00000001u; // 80171694
  W32(c->r[13]+0xFFFFBDACu,c->r[3]); // 80171698
  W8(c->r[13]+0xFFFFCC5Cu,c->r[0]); // 8017169C
L_801716A0:;
  c->r[0]=R32(c->r[13]+0xFFFFCC58u); // 801716A0
  W32(c->r[29]+0x0000034Cu,c->r[0]); // 801716A4
  c->r[0]=R8(c->r[13]+0xFFFFC864u); // 801716A8
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 801716AC
  if (!crb(c,2)) { goto L_801716CC; } // 801716B0
  c->r[3]=R32(c->r[13]+0xFFFFBF90u); // 801716B4
  c->r[0]=0u+0x00000001u; // 801716B8
  W32(c->r[13]+0xFFFFC860u,c->r[3]); // 801716BC
  c->r[3]=c->r[3]+0x00000001u; // 801716C0
  W32(c->r[13]+0xFFFFBF90u,c->r[3]); // 801716C4
  W8(c->r[13]+0xFFFFC864u,c->r[0]); // 801716C8
L_801716CC:;
  c->r[0]=R32(c->r[13]+0xFFFFC860u); // 801716CC
  c->r[5]=0u+0x806D0000u; // 801716D0
  c->r[5]=c->r[5]+0xFFFFE468u; // 801716D4
  W32(c->r[29]+0x00000350u,c->r[0]); // 801716D8
  c->r[3]=c->r[29]+0x000003B0u; // 801716DC
  c->r[4]=0u+0x00000000u; // 801716E0
  W32(c->r[29]+0x00000400u,c->r[5]); // 801716E4
  c->r[5]=0u+0x00000050u; // 801716E8
  c->lr=0x801716F0u; f_800043EC(c); // 801716EC
  c->r[4]=0u+0x806D0000u; // 801716F0
  c->r[3]=c->r[29]+0x00000450u; // 801716F4
  c->r[4]=c->r[4]+0xFFFFE170u; // 801716F8
  W32(c->r[29]+0x0000001Cu,c->r[4]); // 801716FC
  c->r[0]=c->r[4]+0x00000044u; // 80171700
  W32(c->r[29]+0x00000400u,c->r[0]); // 80171704
  c->lr=0x8017170Cu; f_8007BDFC(c); // 80171708
  c->r[3]=c->r[29]+0x000004C4u; // 8017170C
  c->lr=0x80171714u; f_8007BDFC(c); // 80171710
  c->r[3]=c->r[29]+0x00000538u; // 80171714
  c->r[4]=0u+0x00000000u; // 80171718
  c->r[5]=0u+0x00000008u; // 8017171C
  c->lr=0x80171724u; f_800043EC(c); // 80171720
  c->r[26]=R32(c->r[13]+0xFFFFDBDCu); // 80171724
  cmps(c,0,(int32_t)c->r[26],0); // 80171728
  if (crb(c,2)) { goto L_80171770; } // 8017172C
  c->lr=0x80171734u; f_80172250(c); // 80171730
  c->r[30]=c->r[3]|c->r[3]; // 80171734
  c->lr=0x8017173Cu; f_8007BDCC(c); // 80171738
  c->r[4]=(uint32_t)((int32_t)c->r[30]*(int32_t)80); // 8017173C
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 80171740
  c->r[5]=0u+0x80170000u; // 80171744
  c->r[3]=rotl(c->r[30],2)&0xFFFFFFFCu; // 80171748
  c->r[4]=c->r[26]+c->r[4]; // 8017174C
  c->r[5]=c->r[5]+0x000026E8u; // 80171750
  c->r[4]=c->r[4]+c->r[0]; // 80171754
  W32(c->r[4]+0x000001CCu,c->r[5]); // 80171758
  c->r[0]=R32(c->r[26]+c->r[3]); // 8017175C
  cmpu(c,0,c->r[0],0x0000000Cu); // 80171760
  if (!crb(c,0)) { goto L_80171770; } // 80171764
  c->r[0]=0u+0x0000000Cu; // 80171768
  W32(c->r[26]+c->r[3],c->r[0]); // 8017176C
L_80171770:;
  c->r[26]=R32(c->r[13]+0xFFFFDBDCu); // 80171770
  cmps(c,0,(int32_t)c->r[26],0); // 80171774
  if (crb(c,2)) { goto L_801717E0; } // 80171778
  c->lr=0x80171780u; f_80172250(c); // 8017177C
  c->r[0]=R8(c->r[13]+0xFFFFBEACu); // 80171780
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 80171784
  if (!crb(c,2)) { goto L_801717A8; } // 80171788
  c->r[5]=R32(c->r[13]+0xFFFFBCC4u); // 8017178C
  c->r[0]=0u+0x00000001u; // 80171790
  W32(c->r[13]+0xFFFFBDF8u,c->r[5]); // 80171794
  c->r[4]=c->r[5]+0x00000001u; // 80171798
  W32(c->r[13]+0xFFFFBCC4u,c->r[4]); // 8017179C
  W32(c->r[13]+0xFFFFBEA8u,c->r[5]); // 801717A0
  W8(c->r[13]+0xFFFFBEACu,c->r[0]); // 801717A4
L_801717A8:;
  c->r[4]=(uint32_t)((int32_t)c->r[3]*(int32_t)80); // 801717A8
  c->r[0]=R32(c->r[13]+0xFFFFBEA8u); // 801717AC
  c->r[5]=0u+0x80170000u; // 801717B0
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801717B4
  c->r[4]=c->r[26]+c->r[4]; // 801717B8
  c->r[5]=c->r[5]+0x000026E4u; // 801717BC
  c->r[4]=c->r[4]+c->r[0]; // 801717C0
  c->r[3]=rotl(c->r[3],2)&0xFFFFFFFCu; // 801717C4
  W32(c->r[4]+0x000001CCu,c->r[5]); // 801717C8
  c->r[0]=R32(c->r[26]+c->r[3]); // 801717CC
  cmpu(c,0,c->r[0],0x00000018u); // 801717D0
  if (!crb(c,0)) { goto L_801717E0; } // 801717D4
  c->r[0]=0u+0x00000018u; // 801717D8
  W32(c->r[26]+c->r[3],c->r[0]); // 801717DC
L_801717E0:;
  c->r[26]=R32(c->r[13]+0xFFFFDBDCu); // 801717E0
  cmps(c,0,(int32_t)c->r[26],0); // 801717E4
  if (crb(c,2)) { goto L_8017182C; } // 801717E8
  c->lr=0x801717F0u; f_80172250(c); // 801717EC
  c->r[30]=c->r[3]|c->r[3]; // 801717F0
  c->lr=0x801717F8u; f_80076C4C(c); // 801717F4
  c->r[4]=(uint32_t)((int32_t)c->r[30]*(int32_t)80); // 801717F8
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 801717FC
  c->r[5]=0u+0x80170000u; // 80171800
  c->r[3]=rotl(c->r[30],2)&0xFFFFFFFCu; // 80171804
  c->r[4]=c->r[26]+c->r[4]; // 80171808
  c->r[5]=c->r[5]+0x000026E0u; // 8017180C
  c->r[4]=c->r[4]+c->r[0]; // 80171810
  W32(c->r[4]+0x000001CCu,c->r[5]); // 80171814
  c->r[0]=R32(c->r[26]+c->r[3]); // 80171818
  cmpu(c,0,c->r[0],0x0000006Cu); // 8017181C
  if (!crb(c,0)) { goto L_8017182C; } // 80171820
  c->r[0]=0u+0x0000006Cu; // 80171824
  W32(c->r[26]+c->r[3],c->r[0]); // 80171828
L_8017182C:;
  c->r[26]=R32(c->r[13]+0xFFFFDBDCu); // 8017182C
  cmps(c,0,(int32_t)c->r[26],0); // 80171830
  if (crb(c,2)) { goto L_8017189C; } // 80171834
  c->lr=0x8017183Cu; f_80172250(c); // 80171838
  c->r[0]=R8(c->r[13]+0xFFFFBD38u); // 8017183C
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 80171840
  if (!crb(c,2)) { goto L_80171864; } // 80171844
  c->r[5]=R32(c->r[13]+0xFFFFBCC4u); // 80171848
  c->r[0]=0u+0x00000001u; // 8017184C
  W32(c->r[13]+0xFFFFBDF8u,c->r[5]); // 80171850
  c->r[4]=c->r[5]+0x00000001u; // 80171854
  W32(c->r[13]+0xFFFFBCC4u,c->r[4]); // 80171858
  W32(c->r[13]+0xFFFFBD34u,c->r[5]); // 8017185C
  W8(c->r[13]+0xFFFFBD38u,c->r[0]); // 80171860
L_80171864:;
  c->r[4]=(uint32_t)((int32_t)c->r[3]*(int32_t)80); // 80171864
  c->r[0]=R32(c->r[13]+0xFFFFBD34u); // 80171868
  c->r[5]=0u+0x80170000u; // 8017186C
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80171870
  c->r[4]=c->r[26]+c->r[4]; // 80171874
  c->r[5]=c->r[5]+0x000026DCu; // 80171878
  c->r[4]=c->r[4]+c->r[0]; // 8017187C
  c->r[3]=rotl(c->r[3],2)&0xFFFFFFFCu; // 80171880
  W32(c->r[4]+0x000001CCu,c->r[5]); // 80171884
  c->r[0]=R32(c->r[26]+c->r[3]); // 80171888
  cmpu(c,0,c->r[0],0x0000002Cu); // 8017188C
  if (!crb(c,0)) { goto L_8017189C; } // 80171890
  c->r[0]=0u+0x0000002Cu; // 80171894
  W32(c->r[26]+c->r[3],c->r[0]); // 80171898
L_8017189C:;
  c->r[26]=R32(c->r[13]+0xFFFFDBDCu); // 8017189C
  cmps(c,0,(int32_t)c->r[26],0); // 801718A0
  if (crb(c,2)) { goto L_8017190C; } // 801718A4
  c->lr=0x801718ACu; f_80172250(c); // 801718A8
  c->r[0]=R8(c->r[13]+0xFFFFBEB4u); // 801718AC
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 801718B0
  if (!crb(c,2)) { goto L_801718D4; } // 801718B4
  c->r[5]=R32(c->r[13]+0xFFFFBCC4u); // 801718B8
  c->r[0]=0u+0x00000001u; // 801718BC
  W32(c->r[13]+0xFFFFBDF8u,c->r[5]); // 801718C0
  c->r[4]=c->r[5]+0x00000001u; // 801718C4
  W32(c->r[13]+0xFFFFBCC4u,c->r[4]); // 801718C8
  W32(c->r[13]+0xFFFFBEB0u,c->r[5]); // 801718CC
  W8(c->r[13]+0xFFFFBEB4u,c->r[0]); // 801718D0
L_801718D4:;
  c->r[4]=(uint32_t)((int32_t)c->r[3]*(int32_t)80); // 801718D4
  c->r[0]=R32(c->r[13]+0xFFFFBEB0u); // 801718D8
  c->r[5]=0u+0x80170000u; // 801718DC
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801718E0
  c->r[4]=c->r[26]+c->r[4]; // 801718E4
  c->r[5]=c->r[5]+0x000026D8u; // 801718E8
  c->r[4]=c->r[4]+c->r[0]; // 801718EC
  c->r[3]=rotl(c->r[3],2)&0xFFFFFFFCu; // 801718F0
  W32(c->r[4]+0x000001CCu,c->r[5]); // 801718F4
  c->r[0]=R32(c->r[26]+c->r[3]); // 801718F8
  cmpu(c,0,c->r[0],0x00000010u); // 801718FC
  if (!crb(c,0)) { goto L_8017190C; } // 80171900
  c->r[0]=0u+0x00000010u; // 80171904
  W32(c->r[26]+c->r[3],c->r[0]); // 80171908
L_8017190C:;
  c->r[26]=R32(c->r[13]+0xFFFFDBDCu); // 8017190C
  cmps(c,0,(int32_t)c->r[26],0); // 80171910
  if (crb(c,2)) { goto L_8017197C; } // 80171914
  c->lr=0x8017191Cu; f_80172250(c); // 80171918
  c->r[0]=R8(c->r[13]+0xFFFFBEBCu); // 8017191C
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 80171920
  if (!crb(c,2)) { goto L_80171944; } // 80171924
  c->r[5]=R32(c->r[13]+0xFFFFBCC4u); // 80171928
  c->r[0]=0u+0x00000001u; // 8017192C
  W32(c->r[13]+0xFFFFBDF8u,c->r[5]); // 80171930
  c->r[4]=c->r[5]+0x00000001u; // 80171934
  W32(c->r[13]+0xFFFFBCC4u,c->r[4]); // 80171938
  W32(c->r[13]+0xFFFFBEB8u,c->r[5]); // 8017193C
  W8(c->r[13]+0xFFFFBEBCu,c->r[0]); // 80171940
L_80171944:;
  c->r[4]=(uint32_t)((int32_t)c->r[3]*(int32_t)80); // 80171944
  c->r[0]=R32(c->r[13]+0xFFFFBEB8u); // 80171948
  c->r[5]=0u+0x80170000u; // 8017194C
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80171950
  c->r[4]=c->r[26]+c->r[4]; // 80171954
  c->r[5]=c->r[5]+0x000026D4u; // 80171958
  c->r[4]=c->r[4]+c->r[0]; // 8017195C
  c->r[3]=rotl(c->r[3],2)&0xFFFFFFFCu; // 80171960
  W32(c->r[4]+0x000001CCu,c->r[5]); // 80171964
  c->r[0]=R32(c->r[26]+c->r[3]); // 80171968
  cmpu(c,0,c->r[0],0x0000005Cu); // 8017196C
  if (!crb(c,0)) { goto L_8017197C; } // 80171970
  c->r[0]=0u+0x0000005Cu; // 80171974
  W32(c->r[26]+c->r[3],c->r[0]); // 80171978
L_8017197C:;
  c->r[26]=R32(c->r[13]+0xFFFFDBDCu); // 8017197C
  cmps(c,0,(int32_t)c->r[26],0); // 80171980
  if (crb(c,2)) { goto L_801719EC; } // 80171984
  c->lr=0x8017198Cu; f_80172250(c); // 80171988
  c->r[0]=R8(c->r[13]+0xFFFFBEC4u); // 8017198C
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 80171990
  if (!crb(c,2)) { goto L_801719B4; } // 80171994
  c->r[5]=R32(c->r[13]+0xFFFFBCC4u); // 80171998
  c->r[0]=0u+0x00000001u; // 8017199C
  W32(c->r[13]+0xFFFFBDF8u,c->r[5]); // 801719A0
  c->r[4]=c->r[5]+0x00000001u; // 801719A4
  W32(c->r[13]+0xFFFFBCC4u,c->r[4]); // 801719A8
  W32(c->r[13]+0xFFFFBEC0u,c->r[5]); // 801719AC
  W8(c->r[13]+0xFFFFBEC4u,c->r[0]); // 801719B0
L_801719B4:;
  c->r[4]=(uint32_t)((int32_t)c->r[3]*(int32_t)80); // 801719B4
  c->r[0]=R32(c->r[13]+0xFFFFBEC0u); // 801719B8
  c->r[5]=0u+0x80170000u; // 801719BC
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801719C0
  c->r[4]=c->r[26]+c->r[4]; // 801719C4
  c->r[5]=c->r[5]+0x000026D0u; // 801719C8
  c->r[4]=c->r[4]+c->r[0]; // 801719CC
  c->r[3]=rotl(c->r[3],2)&0xFFFFFFFCu; // 801719D0
  W32(c->r[4]+0x000001CCu,c->r[5]); // 801719D4
  c->r[0]=R32(c->r[26]+c->r[3]); // 801719D8
  cmpu(c,0,c->r[0],0x0000005Cu); // 801719DC
  if (!crb(c,0)) { goto L_801719EC; } // 801719E0
  c->r[0]=0u+0x0000005Cu; // 801719E4
  W32(c->r[26]+c->r[3],c->r[0]); // 801719E8
L_801719EC:;
  c->r[26]=R32(c->r[13]+0xFFFFDBDCu); // 801719EC
  cmps(c,0,(int32_t)c->r[26],0); // 801719F0
  if (crb(c,2)) { goto L_80171A5C; } // 801719F4
  c->lr=0x801719FCu; f_80172250(c); // 801719F8
  c->r[0]=R8(c->r[13]+0xFFFFBECCu); // 801719FC
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 80171A00
  if (!crb(c,2)) { goto L_80171A24; } // 80171A04
  c->r[5]=R32(c->r[13]+0xFFFFBCC4u); // 80171A08
  c->r[0]=0u+0x00000001u; // 80171A0C
  W32(c->r[13]+0xFFFFBDF8u,c->r[5]); // 80171A10
  c->r[4]=c->r[5]+0x00000001u; // 80171A14
  W32(c->r[13]+0xFFFFBCC4u,c->r[4]); // 80171A18
  W32(c->r[13]+0xFFFFBEC8u,c->r[5]); // 80171A1C
  W8(c->r[13]+0xFFFFBECCu,c->r[0]); // 80171A20
L_80171A24:;
  c->r[4]=(uint32_t)((int32_t)c->r[3]*(int32_t)80); // 80171A24
  c->r[0]=R32(c->r[13]+0xFFFFBEC8u); // 80171A28
  c->r[5]=0u+0x80170000u; // 80171A2C
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80171A30
  c->r[4]=c->r[26]+c->r[4]; // 80171A34
  c->r[5]=c->r[5]+0x000026CCu; // 80171A38
  c->r[4]=c->r[4]+c->r[0]; // 80171A3C
  c->r[3]=rotl(c->r[3],2)&0xFFFFFFFCu; // 80171A40
  W32(c->r[4]+0x000001CCu,c->r[5]); // 80171A44
  c->r[0]=R32(c->r[26]+c->r[3]); // 80171A48
  cmpu(c,0,c->r[0],0x0000005Cu); // 80171A4C
  if (!crb(c,0)) { goto L_80171A5C; } // 80171A50
  c->r[0]=0u+0x0000005Cu; // 80171A54
  W32(c->r[26]+c->r[3],c->r[0]); // 80171A58
L_80171A5C:;
  c->r[26]=R32(c->r[13]+0xFFFFDBDCu); // 80171A5C
  cmps(c,0,(int32_t)c->r[26],0); // 80171A60
  if (crb(c,2)) { goto L_80171ACC; } // 80171A64
  c->lr=0x80171A6Cu; f_80172250(c); // 80171A68
  c->r[0]=R8(c->r[13]+0xFFFFBED4u); // 80171A6C
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 80171A70
  if (!crb(c,2)) { goto L_80171A94; } // 80171A74
  c->r[5]=R32(c->r[13]+0xFFFFBCC4u); // 80171A78
  c->r[0]=0u+0x00000001u; // 80171A7C
  W32(c->r[13]+0xFFFFBDF8u,c->r[5]); // 80171A80
  c->r[4]=c->r[5]+0x00000001u; // 80171A84
  W32(c->r[13]+0xFFFFBCC4u,c->r[4]); // 80171A88
  W32(c->r[13]+0xFFFFBED0u,c->r[5]); // 80171A8C
  W8(c->r[13]+0xFFFFBED4u,c->r[0]); // 80171A90
L_80171A94:;
  c->r[4]=(uint32_t)((int32_t)c->r[3]*(int32_t)80); // 80171A94
  c->r[0]=R32(c->r[13]+0xFFFFBED0u); // 80171A98
  c->r[5]=0u+0x80170000u; // 80171A9C
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80171AA0
  c->r[4]=c->r[26]+c->r[4]; // 80171AA4
  c->r[5]=c->r[5]+0x000026C8u; // 80171AA8
  c->r[4]=c->r[4]+c->r[0]; // 80171AAC
  c->r[3]=rotl(c->r[3],2)&0xFFFFFFFCu; // 80171AB0
  W32(c->r[4]+0x000001CCu,c->r[5]); // 80171AB4
  c->r[0]=R32(c->r[26]+c->r[3]); // 80171AB8
  cmpu(c,0,c->r[0],0x0000005Cu); // 80171ABC
  if (!crb(c,0)) { goto L_80171ACC; } // 80171AC0
  c->r[0]=0u+0x0000005Cu; // 80171AC4
  W32(c->r[26]+c->r[3],c->r[0]); // 80171AC8
L_80171ACC:;
  c->r[3]=c->r[29]|c->r[29]; // 80171ACC
  c->lr=0x80171AD4u; f_8005BBF0(c); // 80171AD0
  c->r[5]=0u+0x806E0000u; // 80171AD4
  c->r[3]=c->r[29]+0x000005DCu; // 80171AD8
  c->r[5]=c->r[5]+0xFFFFF670u; // 80171ADC
  W32(c->r[29]+0x0000001Cu,c->r[5]); // 80171AE0
  c->r[4]=c->r[5]+0x00000044u; // 80171AE4
  c->r[0]=c->r[5]+0x000001F0u; // 80171AE8
  W32(c->r[29]+0x00000400u,c->r[4]); // 80171AEC
  W32(c->r[29]+0x000005C0u,c->r[0]); // 80171AF0
  c->lr=0x80171AF8u; f_800E1E14(c); // 80171AF4
  c->r[0]=0u+0x00000000u; // 80171AF8
  W32(c->r[29]+0x00000694u,c->r[0]); // 80171AFC
  c->r[3]=c->r[29]+0x0000069Cu; // 80171B00
  W32(c->r[29]+0x00000698u,c->r[0]); // 80171B04
  c->lr=0x80171B0Cu; f_80258690(c); // 80171B08
  {uint32_t ea=c->r[2]+0xFFFFBC08u; c->f[0]=c->ps1[0]=RF32(ea);} // 80171B0C
  c->r[3]=c->r[29]+0x000007A4u; // 80171B10
  c->r[0]=c->r[29]+0x000007F4u; // 80171B14
L_80171B18:;
  {uint32_t ea=c->r[3]+0x00000000u; WF32(ea,c->f[0]);} // 80171B18
  {uint32_t ea=c->r[3]+0x00000004u; WF32(ea,c->f[0]);} // 80171B1C
  c->r[3]=c->r[3]+0x00000008u; // 80171B20
  cmpu(c,0,c->r[3],c->r[0]); // 80171B24
  if (crb(c,0)) { IRQCHK(c); goto L_80171B18; } // 80171B28
  c->r[26]=R32(c->r[13]+0xFFFFDBD8u); // 80171B2C
  cmps(c,0,(int32_t)c->r[26],0); // 80171B30
  if (crb(c,2)) { goto L_80171B78; } // 80171B34
  c->lr=0x80171B3Cu; f_80172250(c); // 80171B38
  c->r[30]=c->r[3]|c->r[3]; // 80171B3C
  c->lr=0x80171B44u; f_80163CF0(c); // 80171B40
  c->r[4]=(uint32_t)((int32_t)c->r[30]*(int32_t)2600); // 80171B44
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 80171B48
  c->r[5]=0u+0x80170000u; // 80171B4C
  c->r[3]=rotl(c->r[30],2)&0xFFFFFFFCu; // 80171B50
  c->r[4]=c->r[26]+c->r[4]; // 80171B54
  c->r[5]=c->r[5]+0x000026C4u; // 80171B58
  c->r[4]=c->r[4]+c->r[0]; // 80171B5C
  W32(c->r[4]+0x000001CCu,c->r[5]); // 80171B60
  c->r[0]=R32(c->r[26]+c->r[3]); // 80171B64
  cmpu(c,0,c->r[0],0x00000010u); // 80171B68
  if (!crb(c,0)) { goto L_80171B78; } // 80171B6C
  c->r[0]=0u+0x00000010u; // 80171B70
  W32(c->r[26]+c->r[3],c->r[0]); // 80171B74
L_80171B78:;
  c->r[26]=R32(c->r[13]+0xFFFFDBD8u); // 80171B78
  cmps(c,0,(int32_t)c->r[26],0); // 80171B7C
  if (crb(c,2)) { goto L_80171BC4; } // 80171B80
  c->lr=0x80171B88u; f_80172250(c); // 80171B84
  c->r[30]=c->r[3]|c->r[3]; // 80171B88
  c->lr=0x80171B90u; f_80172694(c); // 80171B8C
  c->r[4]=(uint32_t)((int32_t)c->r[30]*(int32_t)2600); // 80171B90
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 80171B94
  c->r[5]=0u+0x80170000u; // 80171B98
  c->r[3]=rotl(c->r[30],2)&0xFFFFFFFCu; // 80171B9C
  c->r[4]=c->r[26]+c->r[4]; // 80171BA0
  c->r[5]=c->r[5]+0x00002690u; // 80171BA4
  c->r[4]=c->r[4]+c->r[0]; // 80171BA8
  W32(c->r[4]+0x000001CCu,c->r[5]); // 80171BAC
  c->r[0]=R32(c->r[26]+c->r[3]); // 80171BB0
  cmpu(c,0,c->r[0],0x00000014u); // 80171BB4
  if (!crb(c,0)) { goto L_80171BC4; } // 80171BB8
  c->r[0]=0u+0x00000014u; // 80171BBC
  W32(c->r[26]+c->r[3],c->r[0]); // 80171BC0
L_80171BC4:;
  c->r[26]=R32(c->r[13]+0xFFFFDBD8u); // 80171BC4
  cmps(c,0,(int32_t)c->r[26],0); // 80171BC8
  if (crb(c,2)) { goto L_80171C10; } // 80171BCC
  c->lr=0x80171BD4u; f_80172250(c); // 80171BD0
  c->r[30]=c->r[3]|c->r[3]; // 80171BD4
  c->lr=0x80171BDCu; f_80172660(c); // 80171BD8
  c->r[4]=(uint32_t)((int32_t)c->r[30]*(int32_t)2600); // 80171BDC
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 80171BE0
  c->r[5]=0u+0x80170000u; // 80171BE4
  c->r[3]=rotl(c->r[30],2)&0xFFFFFFFCu; // 80171BE8
  c->r[4]=c->r[26]+c->r[4]; // 80171BEC
  c->r[5]=c->r[5]+0x0000265Cu; // 80171BF0
  c->r[4]=c->r[4]+c->r[0]; // 80171BF4
  W32(c->r[4]+0x000001CCu,c->r[5]); // 80171BF8
  c->r[0]=R32(c->r[26]+c->r[3]); // 80171BFC
  cmpu(c,0,c->r[0],0x00000014u); // 80171C00
  if (!crb(c,0)) { goto L_80171C10; } // 80171C04
  c->r[0]=0u+0x00000014u; // 80171C08
  W32(c->r[26]+c->r[3],c->r[0]); // 80171C0C
L_80171C10:;
  c->r[26]=R32(c->r[13]+0xFFFFDBD8u); // 80171C10
  cmps(c,0,(int32_t)c->r[26],0); // 80171C14
  if (crb(c,2)) { goto L_80171C5C; } // 80171C18
  c->lr=0x80171C20u; f_80172250(c); // 80171C1C
  c->r[30]=c->r[3]|c->r[3]; // 80171C20
  c->lr=0x80171C28u; f_8017262C(c); // 80171C24
  c->r[4]=(uint32_t)((int32_t)c->r[30]*(int32_t)2600); // 80171C28
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 80171C2C
  c->r[5]=0u+0x80170000u; // 80171C30
  c->r[3]=rotl(c->r[30],2)&0xFFFFFFFCu; // 80171C34
  c->r[4]=c->r[26]+c->r[4]; // 80171C38
  c->r[5]=c->r[5]+0x00002628u; // 80171C3C
  c->r[4]=c->r[4]+c->r[0]; // 80171C40
  W32(c->r[4]+0x000001CCu,c->r[5]); // 80171C44
  c->r[0]=R32(c->r[26]+c->r[3]); // 80171C48
  cmpu(c,0,c->r[0],0x00000014u); // 80171C4C
  if (!crb(c,0)) { goto L_80171C5C; } // 80171C50
  c->r[0]=0u+0x00000014u; // 80171C54
  W32(c->r[26]+c->r[3],c->r[0]); // 80171C58
L_80171C5C:;
  c->r[26]=R32(c->r[13]+0xFFFFDBD8u); // 80171C5C
  cmps(c,0,(int32_t)c->r[26],0); // 80171C60
  if (crb(c,2)) { goto L_80171CA8; } // 80171C64
  c->lr=0x80171C6Cu; f_80172250(c); // 80171C68
  c->r[30]=c->r[3]|c->r[3]; // 80171C6C
  c->lr=0x80171C74u; f_801725F8(c); // 80171C70
  c->r[4]=(uint32_t)((int32_t)c->r[30]*(int32_t)2600); // 80171C74
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 80171C78
  c->r[5]=0u+0x80170000u; // 80171C7C
  c->r[3]=rotl(c->r[30],2)&0xFFFFFFFCu; // 80171C80
  c->r[4]=c->r[26]+c->r[4]; // 80171C84
  c->r[5]=c->r[5]+0x000025F4u; // 80171C88
  c->r[4]=c->r[4]+c->r[0]; // 80171C8C
  W32(c->r[4]+0x000001CCu,c->r[5]); // 80171C90
  c->r[0]=R32(c->r[26]+c->r[3]); // 80171C94
  cmpu(c,0,c->r[0],0x00000014u); // 80171C98
  if (!crb(c,0)) { goto L_80171CA8; } // 80171C9C
  c->r[0]=0u+0x00000014u; // 80171CA0
  W32(c->r[26]+c->r[3],c->r[0]); // 80171CA4
L_80171CA8:;
  c->r[26]=R32(c->r[13]+0xFFFFDBD8u); // 80171CA8
  cmps(c,0,(int32_t)c->r[26],0); // 80171CAC
  if (crb(c,2)) { goto L_80171CF4; } // 80171CB0
  c->lr=0x80171CB8u; f_80172250(c); // 80171CB4
  c->r[30]=c->r[3]|c->r[3]; // 80171CB8
  c->lr=0x80171CC0u; f_801725C4(c); // 80171CBC
  c->r[4]=(uint32_t)((int32_t)c->r[30]*(int32_t)2600); // 80171CC0
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 80171CC4
  c->r[5]=0u+0x80170000u; // 80171CC8
  c->r[3]=rotl(c->r[30],2)&0xFFFFFFFCu; // 80171CCC
  c->r[4]=c->r[26]+c->r[4]; // 80171CD0
  c->r[5]=c->r[5]+0x000025C0u; // 80171CD4
  c->r[4]=c->r[4]+c->r[0]; // 80171CD8
  W32(c->r[4]+0x000001CCu,c->r[5]); // 80171CDC
  c->r[0]=R32(c->r[26]+c->r[3]); // 80171CE0
  cmpu(c,0,c->r[0],0x00000014u); // 80171CE4
  if (!crb(c,0)) { goto L_80171CF4; } // 80171CE8
  c->r[0]=0u+0x00000014u; // 80171CEC
  W32(c->r[26]+c->r[3],c->r[0]); // 80171CF0
L_80171CF4:;
  c->r[26]=R32(c->r[13]+0xFFFFDBD8u); // 80171CF4
  cmps(c,0,(int32_t)c->r[26],0); // 80171CF8
  if (crb(c,2)) { goto L_80171D40; } // 80171CFC
  c->lr=0x80171D04u; f_80172250(c); // 80171D00
  c->r[30]=c->r[3]|c->r[3]; // 80171D04
  c->lr=0x80171D0Cu; f_80172590(c); // 80171D08
  c->r[4]=(uint32_t)((int32_t)c->r[30]*(int32_t)2600); // 80171D0C
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 80171D10
  c->r[5]=0u+0x80170000u; // 80171D14
  c->r[3]=rotl(c->r[30],2)&0xFFFFFFFCu; // 80171D18
  c->r[4]=c->r[26]+c->r[4]; // 80171D1C
  c->r[5]=c->r[5]+0x0000258Cu; // 80171D20
  c->r[4]=c->r[4]+c->r[0]; // 80171D24
  W32(c->r[4]+0x000001CCu,c->r[5]); // 80171D28
  c->r[0]=R32(c->r[26]+c->r[3]); // 80171D2C
  cmpu(c,0,c->r[0],0x00000014u); // 80171D30
  if (!crb(c,0)) { goto L_80171D40; } // 80171D34
  c->r[0]=0u+0x00000014u; // 80171D38
  W32(c->r[26]+c->r[3],c->r[0]); // 80171D3C
L_80171D40:;
  c->r[26]=R32(c->r[13]+0xFFFFDBD8u); // 80171D40
  cmps(c,0,(int32_t)c->r[26],0); // 80171D44
  if (crb(c,2)) { goto L_80171D8C; } // 80171D48
  c->lr=0x80171D50u; f_80172250(c); // 80171D4C
  c->r[30]=c->r[3]|c->r[3]; // 80171D50
  c->lr=0x80171D58u; f_8017255C(c); // 80171D54
  c->r[4]=(uint32_t)((int32_t)c->r[30]*(int32_t)2600); // 80171D58
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 80171D5C
  c->r[5]=0u+0x80170000u; // 80171D60
  c->r[3]=rotl(c->r[30],2)&0xFFFFFFFCu; // 80171D64
  c->r[4]=c->r[26]+c->r[4]; // 80171D68
  c->r[5]=c->r[5]+0x00002558u; // 80171D6C
  c->r[4]=c->r[4]+c->r[0]; // 80171D70
  W32(c->r[4]+0x000001CCu,c->r[5]); // 80171D74
  c->r[0]=R32(c->r[26]+c->r[3]); // 80171D78
  cmpu(c,0,c->r[0],0x00000014u); // 80171D7C
  if (!crb(c,0)) { goto L_80171D8C; } // 80171D80
  c->r[0]=0u+0x00000014u; // 80171D84
  W32(c->r[26]+c->r[3],c->r[0]); // 80171D88
L_80171D8C:;
  c->r[26]=R32(c->r[13]+0xFFFFDBD8u); // 80171D8C
  cmps(c,0,(int32_t)c->r[26],0); // 80171D90
  if (crb(c,2)) { goto L_80171DD8; } // 80171D94
  c->lr=0x80171D9Cu; f_80172250(c); // 80171D98
  c->r[30]=c->r[3]|c->r[3]; // 80171D9C
  c->lr=0x80171DA4u; f_80172528(c); // 80171DA0
  c->r[4]=(uint32_t)((int32_t)c->r[30]*(int32_t)2600); // 80171DA4
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 80171DA8
  c->r[5]=0u+0x80170000u; // 80171DAC
  c->r[3]=rotl(c->r[30],2)&0xFFFFFFFCu; // 80171DB0
  c->r[4]=c->r[26]+c->r[4]; // 80171DB4
  c->r[5]=c->r[5]+0x00002524u; // 80171DB8
  c->r[4]=c->r[4]+c->r[0]; // 80171DBC
  W32(c->r[4]+0x000001CCu,c->r[5]); // 80171DC0
  c->r[0]=R32(c->r[26]+c->r[3]); // 80171DC4
  cmpu(c,0,c->r[0],0x00000014u); // 80171DC8
  if (!crb(c,0)) { goto L_80171DD8; } // 80171DCC
  c->r[0]=0u+0x00000014u; // 80171DD0
  W32(c->r[26]+c->r[3],c->r[0]); // 80171DD4
L_80171DD8:;
  c->r[26]=R32(c->r[13]+0xFFFFDBD8u); // 80171DD8
  cmps(c,0,(int32_t)c->r[26],0); // 80171DDC
  if (crb(c,2)) { goto L_80171E24; } // 80171DE0
  c->lr=0x80171DE8u; f_80172250(c); // 80171DE4
  c->r[30]=c->r[3]|c->r[3]; // 80171DE8
  c->lr=0x80171DF0u; f_801724F4(c); // 80171DEC
  c->r[4]=(uint32_t)((int32_t)c->r[30]*(int32_t)2600); // 80171DF0
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 80171DF4
  c->r[5]=0u+0x80170000u; // 80171DF8
  c->r[3]=rotl(c->r[30],2)&0xFFFFFFFCu; // 80171DFC
  c->r[4]=c->r[26]+c->r[4]; // 80171E00
  c->r[5]=c->r[5]+0x000024F0u; // 80171E04
  c->r[4]=c->r[4]+c->r[0]; // 80171E08
  W32(c->r[4]+0x000001CCu,c->r[5]); // 80171E0C
  c->r[0]=R32(c->r[26]+c->r[3]); // 80171E10
  cmpu(c,0,c->r[0],0x00000014u); // 80171E14
  if (!crb(c,0)) { goto L_80171E24; } // 80171E18
  c->r[0]=0u+0x00000014u; // 80171E1C
  W32(c->r[26]+c->r[3],c->r[0]); // 80171E20
L_80171E24:;
  c->r[26]=R32(c->r[13]+0xFFFFDBD8u); // 80171E24
  cmps(c,0,(int32_t)c->r[26],0); // 80171E28
  if (crb(c,2)) { goto L_80171E70; } // 80171E2C
  c->lr=0x80171E34u; f_80172250(c); // 80171E30
  c->r[30]=c->r[3]|c->r[3]; // 80171E34
  c->lr=0x80171E3Cu; f_801724C0(c); // 80171E38
  c->r[4]=(uint32_t)((int32_t)c->r[30]*(int32_t)2600); // 80171E3C
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 80171E40
  c->r[5]=0u+0x80170000u; // 80171E44
  c->r[3]=rotl(c->r[30],2)&0xFFFFFFFCu; // 80171E48
  c->r[4]=c->r[26]+c->r[4]; // 80171E4C
  c->r[5]=c->r[5]+0x000024BCu; // 80171E50
  c->r[4]=c->r[4]+c->r[0]; // 80171E54
  W32(c->r[4]+0x000001CCu,c->r[5]); // 80171E58
  c->r[0]=R32(c->r[26]+c->r[3]); // 80171E5C
  cmpu(c,0,c->r[0],0x00000014u); // 80171E60
  if (!crb(c,0)) { goto L_80171E70; } // 80171E64
  c->r[0]=0u+0x00000014u; // 80171E68
  W32(c->r[26]+c->r[3],c->r[0]); // 80171E6C
L_80171E70:;
  c->r[26]=R32(c->r[13]+0xFFFFDBD8u); // 80171E70
  cmps(c,0,(int32_t)c->r[26],0); // 80171E74
  if (crb(c,2)) { goto L_80171EBC; } // 80171E78
  c->lr=0x80171E80u; f_80172250(c); // 80171E7C
  c->r[30]=c->r[3]|c->r[3]; // 80171E80
  c->lr=0x80171E88u; f_8017248C(c); // 80171E84
  c->r[4]=(uint32_t)((int32_t)c->r[30]*(int32_t)2600); // 80171E88
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 80171E8C
  c->r[5]=0u+0x80170000u; // 80171E90
  c->r[3]=rotl(c->r[30],2)&0xFFFFFFFCu; // 80171E94
  c->r[4]=c->r[26]+c->r[4]; // 80171E98
  c->r[5]=c->r[5]+0x00002488u; // 80171E9C
  c->r[4]=c->r[4]+c->r[0]; // 80171EA0
  W32(c->r[4]+0x000001CCu,c->r[5]); // 80171EA4
  c->r[0]=R32(c->r[26]+c->r[3]); // 80171EA8
  cmpu(c,0,c->r[0],0x00000014u); // 80171EAC
  if (!crb(c,0)) { goto L_80171EBC; } // 80171EB0
  c->r[0]=0u+0x00000014u; // 80171EB4
  W32(c->r[26]+c->r[3],c->r[0]); // 80171EB8
L_80171EBC:;
  c->r[26]=R32(c->r[13]+0xFFFFDBD8u); // 80171EBC
  cmps(c,0,(int32_t)c->r[26],0); // 80171EC0
  if (crb(c,2)) { goto L_80171F08; } // 80171EC4
  c->lr=0x80171ECCu; f_80172250(c); // 80171EC8
  c->r[30]=c->r[3]|c->r[3]; // 80171ECC
  c->lr=0x80171ED4u; f_80172458(c); // 80171ED0
  c->r[4]=(uint32_t)((int32_t)c->r[30]*(int32_t)2600); // 80171ED4
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 80171ED8
  c->r[5]=0u+0x80170000u; // 80171EDC
  c->r[3]=rotl(c->r[30],2)&0xFFFFFFFCu; // 80171EE0
  c->r[4]=c->r[26]+c->r[4]; // 80171EE4
  c->r[5]=c->r[5]+0x00002454u; // 80171EE8
  c->r[4]=c->r[4]+c->r[0]; // 80171EEC
  W32(c->r[4]+0x000001CCu,c->r[5]); // 80171EF0
  c->r[0]=R32(c->r[26]+c->r[3]); // 80171EF4
  cmpu(c,0,c->r[0],0x00000014u); // 80171EF8
  if (!crb(c,0)) { goto L_80171F08; } // 80171EFC
  c->r[0]=0u+0x00000014u; // 80171F00
  W32(c->r[26]+c->r[3],c->r[0]); // 80171F04
L_80171F08:;
  c->r[26]=R32(c->r[13]+0xFFFFDBD8u); // 80171F08
  cmps(c,0,(int32_t)c->r[26],0); // 80171F0C
  if (crb(c,2)) { goto L_80171F54; } // 80171F10
  c->lr=0x80171F18u; f_80172250(c); // 80171F14
  c->r[30]=c->r[3]|c->r[3]; // 80171F18
  c->lr=0x80171F20u; f_80172424(c); // 80171F1C
  c->r[4]=(uint32_t)((int32_t)c->r[30]*(int32_t)2600); // 80171F20
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 80171F24
  c->r[5]=0u+0x80170000u; // 80171F28
  c->r[3]=rotl(c->r[30],2)&0xFFFFFFFCu; // 80171F2C
  c->r[4]=c->r[26]+c->r[4]; // 80171F30
  c->r[5]=c->r[5]+0x00002420u; // 80171F34
  c->r[4]=c->r[4]+c->r[0]; // 80171F38
  W32(c->r[4]+0x000001CCu,c->r[5]); // 80171F3C
  c->r[0]=R32(c->r[26]+c->r[3]); // 80171F40
  cmpu(c,0,c->r[0],0x00000014u); // 80171F44
  if (!crb(c,0)) { goto L_80171F54; } // 80171F48
  c->r[0]=0u+0x00000014u; // 80171F4C
  W32(c->r[26]+c->r[3],c->r[0]); // 80171F50
L_80171F54:;
  c->r[26]=R32(c->r[13]+0xFFFFDBD8u); // 80171F54
  cmps(c,0,(int32_t)c->r[26],0); // 80171F58
  if (crb(c,2)) { goto L_80171FA0; } // 80171F5C
  c->lr=0x80171F64u; f_80172250(c); // 80171F60
  c->r[30]=c->r[3]|c->r[3]; // 80171F64
  c->lr=0x80171F6Cu; f_801723F0(c); // 80171F68
  c->r[4]=(uint32_t)((int32_t)c->r[30]*(int32_t)2600); // 80171F6C
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 80171F70
  c->r[5]=0u+0x80170000u; // 80171F74
  c->r[3]=rotl(c->r[30],2)&0xFFFFFFFCu; // 80171F78
  c->r[4]=c->r[26]+c->r[4]; // 80171F7C
  c->r[5]=c->r[5]+0x000023ECu; // 80171F80
  c->r[4]=c->r[4]+c->r[0]; // 80171F84
  W32(c->r[4]+0x000001CCu,c->r[5]); // 80171F88
  c->r[0]=R32(c->r[26]+c->r[3]); // 80171F8C
  cmpu(c,0,c->r[0],0x00000014u); // 80171F90
  if (!crb(c,0)) { goto L_80171FA0; } // 80171F94
  c->r[0]=0u+0x00000014u; // 80171F98
  W32(c->r[26]+c->r[3],c->r[0]); // 80171F9C
L_80171FA0:;
  c->r[26]=R32(c->r[13]+0xFFFFDBD8u); // 80171FA0
  cmps(c,0,(int32_t)c->r[26],0); // 80171FA4
  if (crb(c,2)) { goto L_80171FEC; } // 80171FA8
  c->lr=0x80171FB0u; f_80172250(c); // 80171FAC
  c->r[30]=c->r[3]|c->r[3]; // 80171FB0
  c->lr=0x80171FB8u; f_801723BC(c); // 80171FB4
  c->r[4]=(uint32_t)((int32_t)c->r[30]*(int32_t)2600); // 80171FB8
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 80171FBC
  c->r[5]=0u+0x80170000u; // 80171FC0
  c->r[3]=rotl(c->r[30],2)&0xFFFFFFFCu; // 80171FC4
  c->r[4]=c->r[26]+c->r[4]; // 80171FC8
  c->r[5]=c->r[5]+0x000023B8u; // 80171FCC
  c->r[4]=c->r[4]+c->r[0]; // 80171FD0
  W32(c->r[4]+0x000001CCu,c->r[5]); // 80171FD4
  c->r[0]=R32(c->r[26]+c->r[3]); // 80171FD8
  cmpu(c,0,c->r[0],0x00000014u); // 80171FDC
  if (!crb(c,0)) { goto L_80171FEC; } // 80171FE0
  c->r[0]=0u+0x00000014u; // 80171FE4
  W32(c->r[26]+c->r[3],c->r[0]); // 80171FE8
L_80171FEC:;
  c->r[26]=R32(c->r[13]+0xFFFFDBD8u); // 80171FEC
  cmps(c,0,(int32_t)c->r[26],0); // 80171FF0
  if (crb(c,2)) { goto L_80172038; } // 80171FF4
  c->lr=0x80171FFCu; f_80172250(c); // 80171FF8
  c->r[30]=c->r[3]|c->r[3]; // 80171FFC
  c->lr=0x80172004u; f_80172388(c); // 80172000
  c->r[4]=(uint32_t)((int32_t)c->r[30]*(int32_t)2600); // 80172004
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 80172008
  c->r[5]=0u+0x80170000u; // 8017200C
  c->r[3]=rotl(c->r[30],2)&0xFFFFFFFCu; // 80172010
  c->r[4]=c->r[26]+c->r[4]; // 80172014
  c->r[5]=c->r[5]+0x00002384u; // 80172018
  c->r[4]=c->r[4]+c->r[0]; // 8017201C
  W32(c->r[4]+0x000001CCu,c->r[5]); // 80172020
  c->r[0]=R32(c->r[26]+c->r[3]); // 80172024
  cmpu(c,0,c->r[0],0x00000014u); // 80172028
  if (!crb(c,0)) { goto L_80172038; } // 8017202C
  c->r[0]=0u+0x00000014u; // 80172030
  W32(c->r[26]+c->r[3],c->r[0]); // 80172034
L_80172038:;
  c->r[26]=R32(c->r[13]+0xFFFFDBD8u); // 80172038
  cmps(c,0,(int32_t)c->r[26],0); // 8017203C
  if (crb(c,2)) { goto L_80172084; } // 80172040
  c->lr=0x80172048u; f_80172250(c); // 80172044
  c->r[30]=c->r[3]|c->r[3]; // 80172048
  c->lr=0x80172050u; f_80172354(c); // 8017204C
  c->r[4]=(uint32_t)((int32_t)c->r[30]*(int32_t)2600); // 80172050
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 80172054
  c->r[5]=0u+0x80170000u; // 80172058
  c->r[3]=rotl(c->r[30],2)&0xFFFFFFFCu; // 8017205C
  c->r[4]=c->r[26]+c->r[4]; // 80172060
  c->r[5]=c->r[5]+0x00002350u; // 80172064
  c->r[4]=c->r[4]+c->r[0]; // 80172068
  W32(c->r[4]+0x000001CCu,c->r[5]); // 8017206C
  c->r[0]=R32(c->r[26]+c->r[3]); // 80172070
  cmpu(c,0,c->r[0],0x00000014u); // 80172074
  if (!crb(c,0)) { goto L_80172084; } // 80172078
  c->r[0]=0u+0x00000014u; // 8017207C
  W32(c->r[26]+c->r[3],c->r[0]); // 80172080
L_80172084:;
  c->r[26]=R32(c->r[13]+0xFFFFDBD8u); // 80172084
  cmps(c,0,(int32_t)c->r[26],0); // 80172088
  if (crb(c,2)) { goto L_801720D0; } // 8017208C
  c->lr=0x80172094u; f_80172250(c); // 80172090
  c->r[30]=c->r[3]|c->r[3]; // 80172094
  c->lr=0x8017209Cu; f_80172320(c); // 80172098
  c->r[4]=(uint32_t)((int32_t)c->r[30]*(int32_t)2600); // 8017209C
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 801720A0
  c->r[5]=0u+0x80170000u; // 801720A4
  c->r[3]=rotl(c->r[30],2)&0xFFFFFFFCu; // 801720A8
  c->r[4]=c->r[26]+c->r[4]; // 801720AC
  c->r[5]=c->r[5]+0x0000231Cu; // 801720B0
  c->r[4]=c->r[4]+c->r[0]; // 801720B4
  W32(c->r[4]+0x000001CCu,c->r[5]); // 801720B8
  c->r[0]=R32(c->r[26]+c->r[3]); // 801720BC
  cmpu(c,0,c->r[0],0x00000014u); // 801720C0
  if (!crb(c,0)) { goto L_801720D0; } // 801720C4
  c->r[0]=0u+0x00000014u; // 801720C8
  W32(c->r[26]+c->r[3],c->r[0]); // 801720CC
L_801720D0:;
  c->r[26]=R32(c->r[13]+0xFFFFDBD8u); // 801720D0
  cmps(c,0,(int32_t)c->r[26],0); // 801720D4
  if (crb(c,2)) { goto L_8017211C; } // 801720D8
  c->lr=0x801720E0u; f_80172250(c); // 801720DC
  c->r[30]=c->r[3]|c->r[3]; // 801720E0
  c->lr=0x801720E8u; f_801722EC(c); // 801720E4
  c->r[4]=(uint32_t)((int32_t)c->r[30]*(int32_t)2600); // 801720E8
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 801720EC
  c->r[5]=0u+0x80170000u; // 801720F0
  c->r[3]=rotl(c->r[30],2)&0xFFFFFFFCu; // 801720F4
  c->r[4]=c->r[26]+c->r[4]; // 801720F8
  c->r[5]=c->r[5]+0x000022E8u; // 801720FC
  c->r[4]=c->r[4]+c->r[0]; // 80172100
  W32(c->r[4]+0x000001CCu,c->r[5]); // 80172104
  c->r[0]=R32(c->r[26]+c->r[3]); // 80172108
  cmpu(c,0,c->r[0],0x00000014u); // 8017210C
  if (!crb(c,0)) { goto L_8017211C; } // 80172110
  c->r[0]=0u+0x00000014u; // 80172114
  W32(c->r[26]+c->r[3],c->r[0]); // 80172118
L_8017211C:;
  c->r[26]=R32(c->r[13]+0xFFFFDBD8u); // 8017211C
  cmps(c,0,(int32_t)c->r[26],0); // 80172120
  if (crb(c,2)) { goto L_80172168; } // 80172124
  c->lr=0x8017212Cu; f_80172250(c); // 80172128
  c->r[30]=c->r[3]|c->r[3]; // 8017212C
  c->lr=0x80172134u; f_801722B8(c); // 80172130
  c->r[4]=(uint32_t)((int32_t)c->r[30]*(int32_t)2600); // 80172134
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 80172138
  c->r[5]=0u+0x80170000u; // 8017213C
  c->r[3]=rotl(c->r[30],2)&0xFFFFFFFCu; // 80172140
  c->r[4]=c->r[26]+c->r[4]; // 80172144
  c->r[5]=c->r[5]+0x000022B4u; // 80172148
  c->r[4]=c->r[4]+c->r[0]; // 8017214C
  W32(c->r[4]+0x000001CCu,c->r[5]); // 80172150
  c->r[0]=R32(c->r[26]+c->r[3]); // 80172154
  cmpu(c,0,c->r[0],0x00000014u); // 80172158
  if (!crb(c,0)) { goto L_80172168; } // 8017215C
  c->r[0]=0u+0x00000014u; // 80172160
  W32(c->r[26]+c->r[3],c->r[0]); // 80172164
L_80172168:;
  c->r[26]=R32(c->r[13]+0xFFFFDBD8u); // 80172168
  cmps(c,0,(int32_t)c->r[26],0); // 8017216C
  if (crb(c,2)) { goto L_801721B4; } // 80172170
  c->lr=0x80172178u; f_80172250(c); // 80172174
  c->r[30]=c->r[3]|c->r[3]; // 80172178
  c->lr=0x80172180u; f_80172284(c); // 8017217C
  c->r[4]=(uint32_t)((int32_t)c->r[30]*(int32_t)2600); // 80172180
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 80172184
  c->r[5]=0u+0x80170000u; // 80172188
  c->r[3]=rotl(c->r[30],2)&0xFFFFFFFCu; // 8017218C
  c->r[4]=c->r[26]+c->r[4]; // 80172190
  c->r[5]=c->r[5]+0x00002280u; // 80172194
  c->r[4]=c->r[4]+c->r[0]; // 80172198
  W32(c->r[4]+0x000001CCu,c->r[5]); // 8017219C
  c->r[0]=R32(c->r[26]+c->r[3]); // 801721A0
  cmpu(c,0,c->r[0],0x00000014u); // 801721A4
  if (!crb(c,0)) { goto L_801721B4; } // 801721A8
  c->r[0]=0u+0x00000014u; // 801721AC
  W32(c->r[26]+c->r[3],c->r[0]); // 801721B0
L_801721B4:;
  c->r[26]=R32(c->r[13]+0xFFFFDBD8u); // 801721B4
  cmps(c,0,(int32_t)c->r[26],0); // 801721B8
  if (crb(c,2)) { goto L_80172200; } // 801721BC
  c->lr=0x801721C4u; f_80172250(c); // 801721C0
  c->r[30]=c->r[3]|c->r[3]; // 801721C4
  c->lr=0x801721CCu; f_80172220(c); // 801721C8
  c->r[4]=(uint32_t)((int32_t)c->r[30]*(int32_t)2600); // 801721CC
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 801721D0
  c->r[5]=0u+0x80170000u; // 801721D4
  c->r[3]=rotl(c->r[30],2)&0xFFFFFFFCu; // 801721D8
  c->r[4]=c->r[26]+c->r[4]; // 801721DC
  c->r[5]=c->r[5]+0x0000221Cu; // 801721E0
  c->r[4]=c->r[4]+c->r[0]; // 801721E4
  W32(c->r[4]+0x000001CCu,c->r[5]); // 801721E8
  c->r[0]=R32(c->r[26]+c->r[3]); // 801721EC
  cmpu(c,0,c->r[0],0x00000014u); // 801721F0
  if (!crb(c,0)) { goto L_80172200; } // 801721F4
  c->r[0]=0u+0x00000014u; // 801721F8
  W32(c->r[26]+c->r[3],c->r[0]); // 801721FC
L_80172200:;
  c->r[11]=c->r[1]+0x00000020u; // 80172200
  c->r[3]=c->r[29]|c->r[29]; // 80172204
  c->lr=0x8017220Cu; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80172208
  c->r[0]=R32(c->r[1]+0x00000024u); // 8017220C
  c->lr=c->r[0]; // 80172210
  c->r[1]=c->r[1]+0x00000020u; // 80172214
  return; // 80172218
}

// fn_8017221C
void f_8017221C(Ctx* __restrict c) {
  trace_call(0x8017221Cu);
  f_80177108(c); return; // 8017221C
}

// fn_80172220
void f_80172220(Ctx* __restrict c) {
  trace_call(0x80172220u);
  c->r[0]=R8(c->r[13]+0xFFFFCC44u); // 80172220
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 80172224
  if (!crb(c,2)) { goto L_80172248; } // 80172228
  c->r[4]=R32(c->r[13]+0xFFFFBCC8u); // 8017222C
  c->r[0]=0u+0x00000001u; // 80172230
  W32(c->r[13]+0xFFFFBDFCu,c->r[4]); // 80172234
  c->r[3]=c->r[4]+0x00000001u; // 80172238
  W32(c->r[13]+0xFFFFBCC8u,c->r[3]); // 8017223C
  W32(c->r[13]+0xFFFFCC40u,c->r[4]); // 80172240
  W8(c->r[13]+0xFFFFCC44u,c->r[0]); // 80172244
L_80172248:;
  c->r[3]=R32(c->r[13]+0xFFFFCC40u); // 80172248
  return; // 8017224C
}

// fn_80172250
void f_80172250(Ctx* __restrict c) {
  trace_call(0x80172250u);
  c->r[0]=R8(c->r[13]+0xFFFFCC54u); // 80172250
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 80172254
  if (!crb(c,2)) { goto L_80172278; } // 80172258
  c->r[4]=R32(c->r[13]+0xFFFFBE94u); // 8017225C
  c->r[0]=0u+0x00000001u; // 80172260
  W32(c->r[13]+0xFFFFBE98u,c->r[4]); // 80172264
  c->r[3]=c->r[4]+0x00000001u; // 80172268
  W32(c->r[13]+0xFFFFBE94u,c->r[3]); // 8017226C
  W32(c->r[13]+0xFFFFCC50u,c->r[4]); // 80172270
  W8(c->r[13]+0xFFFFCC54u,c->r[0]); // 80172274
L_80172278:;
  c->r[3]=R32(c->r[13]+0xFFFFCC50u); // 80172278
  return; // 8017227C
}

// fn_80172280
void f_80172280(Ctx* __restrict c) {
  trace_call(0x80172280u);
  f_80176EE8(c); return; // 80172280
}

// fn_80172284
void f_80172284(Ctx* __restrict c) {
  trace_call(0x80172284u);
  c->r[0]=R8(c->r[13]+0xFFFFCC3Cu); // 80172284
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 80172288
  if (!crb(c,2)) { goto L_801722AC; } // 8017228C
  c->r[4]=R32(c->r[13]+0xFFFFBCC8u); // 80172290
  c->r[0]=0u+0x00000001u; // 80172294
  W32(c->r[13]+0xFFFFBDFCu,c->r[4]); // 80172298
  c->r[3]=c->r[4]+0x00000001u; // 8017229C
  W32(c->r[13]+0xFFFFBCC8u,c->r[3]); // 801722A0
  W32(c->r[13]+0xFFFFCC38u,c->r[4]); // 801722A4
  W8(c->r[13]+0xFFFFCC3Cu,c->r[0]); // 801722A8
L_801722AC:;
  c->r[3]=R32(c->r[13]+0xFFFFCC38u); // 801722AC
  return; // 801722B0
}

// fn_801722B4
void f_801722B4(Ctx* __restrict c) {
  trace_call(0x801722B4u);
  f_80176E34(c); return; // 801722B4
}

// fn_801722B8
void f_801722B8(Ctx* __restrict c) {
  trace_call(0x801722B8u);
  c->r[0]=R8(c->r[13]+0xFFFFCC34u); // 801722B8
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 801722BC
  if (!crb(c,2)) { goto L_801722E0; } // 801722C0
  c->r[4]=R32(c->r[13]+0xFFFFBCC8u); // 801722C4
  c->r[0]=0u+0x00000001u; // 801722C8
  W32(c->r[13]+0xFFFFBDFCu,c->r[4]); // 801722CC
  c->r[3]=c->r[4]+0x00000001u; // 801722D0
  W32(c->r[13]+0xFFFFBCC8u,c->r[3]); // 801722D4
  W32(c->r[13]+0xFFFFCC30u,c->r[4]); // 801722D8
  W8(c->r[13]+0xFFFFCC34u,c->r[0]); // 801722DC
L_801722E0:;
  c->r[3]=R32(c->r[13]+0xFFFFCC30u); // 801722E0
  return; // 801722E4
}

// fn_801722E8
void f_801722E8(Ctx* __restrict c) {
  trace_call(0x801722E8u);
  f_80176CA4(c); return; // 801722E8
}

// fn_801722EC
void f_801722EC(Ctx* __restrict c) {
  trace_call(0x801722ECu);
  c->r[0]=R8(c->r[13]+0xFFFFCC2Cu); // 801722EC
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 801722F0
  if (!crb(c,2)) { goto L_80172314; } // 801722F4
  c->r[4]=R32(c->r[13]+0xFFFFBCC8u); // 801722F8
  c->r[0]=0u+0x00000001u; // 801722FC
  W32(c->r[13]+0xFFFFBDFCu,c->r[4]); // 80172300
  c->r[3]=c->r[4]+0x00000001u; // 80172304
  W32(c->r[13]+0xFFFFBCC8u,c->r[3]); // 80172308
  W32(c->r[13]+0xFFFFCC28u,c->r[4]); // 8017230C
  W8(c->r[13]+0xFFFFCC2Cu,c->r[0]); // 80172310
L_80172314:;
  c->r[3]=R32(c->r[13]+0xFFFFCC28u); // 80172314
  return; // 80172318
}

// fn_8017231C
void f_8017231C(Ctx* __restrict c) {
  trace_call(0x8017231Cu);
  f_80176B1C(c); return; // 8017231C
}

// fn_80172320
void f_80172320(Ctx* __restrict c) {
  trace_call(0x80172320u);
  c->r[0]=R8(c->r[13]+0xFFFFCC24u); // 80172320
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 80172324
  if (!crb(c,2)) { goto L_80172348; } // 80172328
  c->r[4]=R32(c->r[13]+0xFFFFBCC8u); // 8017232C
  c->r[0]=0u+0x00000001u; // 80172330
  W32(c->r[13]+0xFFFFBDFCu,c->r[4]); // 80172334
  c->r[3]=c->r[4]+0x00000001u; // 80172338
  W32(c->r[13]+0xFFFFBCC8u,c->r[3]); // 8017233C
  W32(c->r[13]+0xFFFFCC20u,c->r[4]); // 80172340
  W8(c->r[13]+0xFFFFCC24u,c->r[0]); // 80172344
L_80172348:;
  c->r[3]=R32(c->r[13]+0xFFFFCC20u); // 80172348
  return; // 8017234C
}

// fn_80172350
void f_80172350(Ctx* __restrict c) {
  trace_call(0x80172350u);
  f_80176914(c); return; // 80172350
}

// fn_80172354
void f_80172354(Ctx* __restrict c) {
  trace_call(0x80172354u);
  c->r[0]=R8(c->r[13]+0xFFFFCC1Cu); // 80172354
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 80172358
  if (!crb(c,2)) { goto L_8017237C; } // 8017235C
  c->r[4]=R32(c->r[13]+0xFFFFBCC8u); // 80172360
  c->r[0]=0u+0x00000001u; // 80172364
  W32(c->r[13]+0xFFFFBDFCu,c->r[4]); // 80172368
  c->r[3]=c->r[4]+0x00000001u; // 8017236C
  W32(c->r[13]+0xFFFFBCC8u,c->r[3]); // 80172370
  W32(c->r[13]+0xFFFFCC18u,c->r[4]); // 80172374
  W8(c->r[13]+0xFFFFCC1Cu,c->r[0]); // 80172378
L_8017237C:;
  c->r[3]=R32(c->r[13]+0xFFFFCC18u); // 8017237C
  return; // 80172380
}

// fn_80172384
void f_80172384(Ctx* __restrict c) {
  trace_call(0x80172384u);
  f_80176784(c); return; // 80172384
}

// fn_80172388
void f_80172388(Ctx* __restrict c) {
  trace_call(0x80172388u);
  c->r[0]=R8(c->r[13]+0xFFFFCC14u); // 80172388
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 8017238C
  if (!crb(c,2)) { goto L_801723B0; } // 80172390
  c->r[4]=R32(c->r[13]+0xFFFFBCC8u); // 80172394
  c->r[0]=0u+0x00000001u; // 80172398
  W32(c->r[13]+0xFFFFBDFCu,c->r[4]); // 8017239C
  c->r[3]=c->r[4]+0x00000001u; // 801723A0
  W32(c->r[13]+0xFFFFBCC8u,c->r[3]); // 801723A4
  W32(c->r[13]+0xFFFFCC10u,c->r[4]); // 801723A8
  W8(c->r[13]+0xFFFFCC14u,c->r[0]); // 801723AC
L_801723B0:;
  c->r[3]=R32(c->r[13]+0xFFFFCC10u); // 801723B0
  return; // 801723B4
}

// fn_801723B8
void f_801723B8(Ctx* __restrict c) {
  trace_call(0x801723B8u);
  f_801765F4(c); return; // 801723B8
}

// fn_801723BC
void f_801723BC(Ctx* __restrict c) {
  trace_call(0x801723BCu);
  c->r[0]=R8(c->r[13]+0xFFFFCC0Cu); // 801723BC
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 801723C0
  if (!crb(c,2)) { goto L_801723E4; } // 801723C4
  c->r[4]=R32(c->r[13]+0xFFFFBCC8u); // 801723C8
  c->r[0]=0u+0x00000001u; // 801723CC
  W32(c->r[13]+0xFFFFBDFCu,c->r[4]); // 801723D0
  c->r[3]=c->r[4]+0x00000001u; // 801723D4
  W32(c->r[13]+0xFFFFBCC8u,c->r[3]); // 801723D8
  W32(c->r[13]+0xFFFFCC08u,c->r[4]); // 801723DC
  W8(c->r[13]+0xFFFFCC0Cu,c->r[0]); // 801723E0
L_801723E4:;
  c->r[3]=R32(c->r[13]+0xFFFFCC08u); // 801723E4
  return; // 801723E8
}

// fn_801723EC
void f_801723EC(Ctx* __restrict c) {
  trace_call(0x801723ECu);
  f_80176320(c); return; // 801723EC
}

// fn_801723F0
void f_801723F0(Ctx* __restrict c) {
  trace_call(0x801723F0u);
  c->r[0]=R8(c->r[13]+0xFFFFCC04u); // 801723F0
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 801723F4
  if (!crb(c,2)) { goto L_80172418; } // 801723F8
  c->r[4]=R32(c->r[13]+0xFFFFBCC8u); // 801723FC
  c->r[0]=0u+0x00000001u; // 80172400
  W32(c->r[13]+0xFFFFBDFCu,c->r[4]); // 80172404
  c->r[3]=c->r[4]+0x00000001u; // 80172408
  W32(c->r[13]+0xFFFFBCC8u,c->r[3]); // 8017240C
  W32(c->r[13]+0xFFFFCC00u,c->r[4]); // 80172410
  W8(c->r[13]+0xFFFFCC04u,c->r[0]); // 80172414
L_80172418:;
  c->r[3]=R32(c->r[13]+0xFFFFCC00u); // 80172418
  return; // 8017241C
}

// fn_80172420
void f_80172420(Ctx* __restrict c) {
  trace_call(0x80172420u);
  f_801760A8(c); return; // 80172420
}

// fn_80172424
void f_80172424(Ctx* __restrict c) {
  trace_call(0x80172424u);
  c->r[0]=R8(c->r[13]+0xFFFFCBFCu); // 80172424
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 80172428
  if (!crb(c,2)) { goto L_8017244C; } // 8017242C
  c->r[4]=R32(c->r[13]+0xFFFFBCC8u); // 80172430
  c->r[0]=0u+0x00000001u; // 80172434
  W32(c->r[13]+0xFFFFBDFCu,c->r[4]); // 80172438
  c->r[3]=c->r[4]+0x00000001u; // 8017243C
  W32(c->r[13]+0xFFFFBCC8u,c->r[3]); // 80172440
  W32(c->r[13]+0xFFFFCBF8u,c->r[4]); // 80172444
  W8(c->r[13]+0xFFFFCBFCu,c->r[0]); // 80172448
L_8017244C:;
  c->r[3]=R32(c->r[13]+0xFFFFCBF8u); // 8017244C
  return; // 80172450
}

// fn_80172454
void f_80172454(Ctx* __restrict c) {
  trace_call(0x80172454u);
  f_80175F0C(c); return; // 80172454
}

// fn_80172458
void f_80172458(Ctx* __restrict c) {
  trace_call(0x80172458u);
  c->r[0]=R8(c->r[13]+0xFFFFCBF4u); // 80172458
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 8017245C
  if (!crb(c,2)) { goto L_80172480; } // 80172460
  c->r[4]=R32(c->r[13]+0xFFFFBCC8u); // 80172464
  c->r[0]=0u+0x00000001u; // 80172468
  W32(c->r[13]+0xFFFFBDFCu,c->r[4]); // 8017246C
  c->r[3]=c->r[4]+0x00000001u; // 80172470
  W32(c->r[13]+0xFFFFBCC8u,c->r[3]); // 80172474
  W32(c->r[13]+0xFFFFCBF0u,c->r[4]); // 80172478
  W8(c->r[13]+0xFFFFCBF4u,c->r[0]); // 8017247C
L_80172480:;
  c->r[3]=R32(c->r[13]+0xFFFFCBF0u); // 80172480
  return; // 80172484
}

// fn_80172488
void f_80172488(Ctx* __restrict c) {
  trace_call(0x80172488u);
  f_80175CB8(c); return; // 80172488
}

// fn_8017248C
void f_8017248C(Ctx* __restrict c) {
  trace_call(0x8017248Cu);
  c->r[0]=R8(c->r[13]+0xFFFFCBECu); // 8017248C
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 80172490
  if (!crb(c,2)) { goto L_801724B4; } // 80172494
  c->r[4]=R32(c->r[13]+0xFFFFBCC8u); // 80172498
  c->r[0]=0u+0x00000001u; // 8017249C
  W32(c->r[13]+0xFFFFBDFCu,c->r[4]); // 801724A0
  c->r[3]=c->r[4]+0x00000001u; // 801724A4
  W32(c->r[13]+0xFFFFBCC8u,c->r[3]); // 801724A8
  W32(c->r[13]+0xFFFFCBE8u,c->r[4]); // 801724AC
  W8(c->r[13]+0xFFFFCBECu,c->r[0]); // 801724B0
L_801724B4:;
  c->r[3]=R32(c->r[13]+0xFFFFCBE8u); // 801724B4
  return; // 801724B8
}

// fn_801724BC
void f_801724BC(Ctx* __restrict c) {
  trace_call(0x801724BCu);
  return; // 801724BC
}

// fn_801724C0
void f_801724C0(Ctx* __restrict c) {
  trace_call(0x801724C0u);
  c->r[0]=R8(c->r[13]+0xFFFFCBE4u); // 801724C0
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 801724C4
  if (!crb(c,2)) { goto L_801724E8; } // 801724C8
  c->r[4]=R32(c->r[13]+0xFFFFBCC8u); // 801724CC
  c->r[0]=0u+0x00000001u; // 801724D0
  W32(c->r[13]+0xFFFFBDFCu,c->r[4]); // 801724D4
  c->r[3]=c->r[4]+0x00000001u; // 801724D8
  W32(c->r[13]+0xFFFFBCC8u,c->r[3]); // 801724DC
  W32(c->r[13]+0xFFFFCBE0u,c->r[4]); // 801724E0
  W8(c->r[13]+0xFFFFCBE4u,c->r[0]); // 801724E4
L_801724E8:;
  c->r[3]=R32(c->r[13]+0xFFFFCBE0u); // 801724E8
  return; // 801724EC
}

// fn_801724F0
void f_801724F0(Ctx* __restrict c) {
  trace_call(0x801724F0u);
  f_801756E4(c); return; // 801724F0
}

// fn_801724F4
void f_801724F4(Ctx* __restrict c) {
  trace_call(0x801724F4u);
  c->r[0]=R8(c->r[13]+0xFFFFCBDCu); // 801724F4
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 801724F8
  if (!crb(c,2)) { goto L_8017251C; } // 801724FC
  c->r[4]=R32(c->r[13]+0xFFFFBCC8u); // 80172500
  c->r[0]=0u+0x00000001u; // 80172504
  W32(c->r[13]+0xFFFFBDFCu,c->r[4]); // 80172508
  c->r[3]=c->r[4]+0x00000001u; // 8017250C
  W32(c->r[13]+0xFFFFBCC8u,c->r[3]); // 80172510
  W32(c->r[13]+0xFFFFCBD8u,c->r[4]); // 80172514
  W8(c->r[13]+0xFFFFCBDCu,c->r[0]); // 80172518
L_8017251C:;
  c->r[3]=R32(c->r[13]+0xFFFFCBD8u); // 8017251C
  return; // 80172520
}

// fn_80172524
void f_80172524(Ctx* __restrict c) {
  trace_call(0x80172524u);
  f_80174F58(c); return; // 80172524
}

// fn_80172528
void f_80172528(Ctx* __restrict c) {
  trace_call(0x80172528u);
  c->r[0]=R8(c->r[13]+0xFFFFCBD4u); // 80172528
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 8017252C
  if (!crb(c,2)) { goto L_80172550; } // 80172530
  c->r[4]=R32(c->r[13]+0xFFFFBCC8u); // 80172534
  c->r[0]=0u+0x00000001u; // 80172538
  W32(c->r[13]+0xFFFFBDFCu,c->r[4]); // 8017253C
  c->r[3]=c->r[4]+0x00000001u; // 80172540
  W32(c->r[13]+0xFFFFBCC8u,c->r[3]); // 80172544
  W32(c->r[13]+0xFFFFCBD0u,c->r[4]); // 80172548
  W8(c->r[13]+0xFFFFCBD4u,c->r[0]); // 8017254C
L_80172550:;
  c->r[3]=R32(c->r[13]+0xFFFFCBD0u); // 80172550
  return; // 80172554
}

// fn_80172558
void f_80172558(Ctx* __restrict c) {
  trace_call(0x80172558u);
  f_80174CCC(c); return; // 80172558
}

// fn_8017255C
void f_8017255C(Ctx* __restrict c) {
  trace_call(0x8017255Cu);
  c->r[0]=R8(c->r[13]+0xFFFFCBCCu); // 8017255C
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 80172560
  if (!crb(c,2)) { goto L_80172584; } // 80172564
  c->r[4]=R32(c->r[13]+0xFFFFBCC8u); // 80172568
  c->r[0]=0u+0x00000001u; // 8017256C
  W32(c->r[13]+0xFFFFBDFCu,c->r[4]); // 80172570
  c->r[3]=c->r[4]+0x00000001u; // 80172574
  W32(c->r[13]+0xFFFFBCC8u,c->r[3]); // 80172578
  W32(c->r[13]+0xFFFFCBC8u,c->r[4]); // 8017257C
  W8(c->r[13]+0xFFFFCBCCu,c->r[0]); // 80172580
L_80172584:;
  c->r[3]=R32(c->r[13]+0xFFFFCBC8u); // 80172584
  return; // 80172588
}

// fn_8017258C
void f_8017258C(Ctx* __restrict c) {
  trace_call(0x8017258Cu);
  f_80174AA4(c); return; // 8017258C
}

// fn_80172590
void f_80172590(Ctx* __restrict c) {
  trace_call(0x80172590u);
  c->r[0]=R8(c->r[13]+0xFFFFCBC4u); // 80172590
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 80172594
  if (!crb(c,2)) { goto L_801725B8; } // 80172598
  c->r[4]=R32(c->r[13]+0xFFFFBCC8u); // 8017259C
  c->r[0]=0u+0x00000001u; // 801725A0
  W32(c->r[13]+0xFFFFBDFCu,c->r[4]); // 801725A4
  c->r[3]=c->r[4]+0x00000001u; // 801725A8
  W32(c->r[13]+0xFFFFBCC8u,c->r[3]); // 801725AC
  W32(c->r[13]+0xFFFFCBC0u,c->r[4]); // 801725B0
  W8(c->r[13]+0xFFFFCBC4u,c->r[0]); // 801725B4
L_801725B8:;
  c->r[3]=R32(c->r[13]+0xFFFFCBC0u); // 801725B8
  return; // 801725BC
}

// fn_801725C0
void f_801725C0(Ctx* __restrict c) {
  trace_call(0x801725C0u);
  f_801748D0(c); return; // 801725C0
}

// fn_801725C4
void f_801725C4(Ctx* __restrict c) {
  trace_call(0x801725C4u);
  c->r[0]=R8(c->r[13]+0xFFFFCBBCu); // 801725C4
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 801725C8
  if (!crb(c,2)) { goto L_801725EC; } // 801725CC
  c->r[4]=R32(c->r[13]+0xFFFFBCC8u); // 801725D0
  c->r[0]=0u+0x00000001u; // 801725D4
  W32(c->r[13]+0xFFFFBDFCu,c->r[4]); // 801725D8
  c->r[3]=c->r[4]+0x00000001u; // 801725DC
  W32(c->r[13]+0xFFFFBCC8u,c->r[3]); // 801725E0
  W32(c->r[13]+0xFFFFCBB8u,c->r[4]); // 801725E4
  W8(c->r[13]+0xFFFFCBBCu,c->r[0]); // 801725E8
L_801725EC:;
  c->r[3]=R32(c->r[13]+0xFFFFCBB8u); // 801725EC
  return; // 801725F0
}

// fn_801725F4
void f_801725F4(Ctx* __restrict c) {
  trace_call(0x801725F4u);
  f_801746B0(c); return; // 801725F4
}

// fn_801725F8
void f_801725F8(Ctx* __restrict c) {
  trace_call(0x801725F8u);
  c->r[0]=R8(c->r[13]+0xFFFFCBB4u); // 801725F8
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 801725FC
  if (!crb(c,2)) { goto L_80172620; } // 80172600
  c->r[4]=R32(c->r[13]+0xFFFFBCC8u); // 80172604
  c->r[0]=0u+0x00000001u; // 80172608
  W32(c->r[13]+0xFFFFBDFCu,c->r[4]); // 8017260C
  c->r[3]=c->r[4]+0x00000001u; // 80172610
  W32(c->r[13]+0xFFFFBCC8u,c->r[3]); // 80172614
  W32(c->r[13]+0xFFFFCBB0u,c->r[4]); // 80172618
  W8(c->r[13]+0xFFFFCBB4u,c->r[0]); // 8017261C
L_80172620:;
  c->r[3]=R32(c->r[13]+0xFFFFCBB0u); // 80172620
  return; // 80172624
}

// fn_80172628
void f_80172628(Ctx* __restrict c) {
  trace_call(0x80172628u);
  f_80174558(c); return; // 80172628
}

// fn_8017262C
void f_8017262C(Ctx* __restrict c) {
  trace_call(0x8017262Cu);
  c->r[0]=R8(c->r[13]+0xFFFFCBACu); // 8017262C
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 80172630
  if (!crb(c,2)) { goto L_80172654; } // 80172634
  c->r[4]=R32(c->r[13]+0xFFFFBCC8u); // 80172638
  c->r[0]=0u+0x00000001u; // 8017263C
  W32(c->r[13]+0xFFFFBDFCu,c->r[4]); // 80172640
  c->r[3]=c->r[4]+0x00000001u; // 80172644
  W32(c->r[13]+0xFFFFBCC8u,c->r[3]); // 80172648
  W32(c->r[13]+0xFFFFCBA8u,c->r[4]); // 8017264C
  W8(c->r[13]+0xFFFFCBACu,c->r[0]); // 80172650
L_80172654:;
  c->r[3]=R32(c->r[13]+0xFFFFCBA8u); // 80172654
  return; // 80172658
}

// fn_8017265C
void f_8017265C(Ctx* __restrict c) {
  trace_call(0x8017265Cu);
  f_80174384(c); return; // 8017265C
}

// fn_80172660
void f_80172660(Ctx* __restrict c) {
  trace_call(0x80172660u);
  c->r[0]=R8(c->r[13]+0xFFFFCBA4u); // 80172660
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 80172664
  if (!crb(c,2)) { goto L_80172688; } // 80172668
  c->r[4]=R32(c->r[13]+0xFFFFBCC8u); // 8017266C
  c->r[0]=0u+0x00000001u; // 80172670
  W32(c->r[13]+0xFFFFBDFCu,c->r[4]); // 80172674
  c->r[3]=c->r[4]+0x00000001u; // 80172678
  W32(c->r[13]+0xFFFFBCC8u,c->r[3]); // 8017267C
  W32(c->r[13]+0xFFFFCBA0u,c->r[4]); // 80172680
  W8(c->r[13]+0xFFFFCBA4u,c->r[0]); // 80172684
L_80172688:;
  c->r[3]=R32(c->r[13]+0xFFFFCBA0u); // 80172688
  return; // 8017268C
}

// fn_80172690
void f_80172690(Ctx* __restrict c) {
  trace_call(0x80172690u);
  f_801741D0(c); return; // 80172690
}

// fn_80172694
void f_80172694(Ctx* __restrict c) {
  trace_call(0x80172694u);
  c->r[0]=R8(c->r[13]+0xFFFFCB9Cu); // 80172694
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 80172698
  if (!crb(c,2)) { goto L_801726BC; } // 8017269C
  c->r[4]=R32(c->r[13]+0xFFFFBCC8u); // 801726A0
  c->r[0]=0u+0x00000001u; // 801726A4
  W32(c->r[13]+0xFFFFBDFCu,c->r[4]); // 801726A8
  c->r[3]=c->r[4]+0x00000001u; // 801726AC
  W32(c->r[13]+0xFFFFBCC8u,c->r[3]); // 801726B0
  W32(c->r[13]+0xFFFFCB98u,c->r[4]); // 801726B4
  W8(c->r[13]+0xFFFFCB9Cu,c->r[0]); // 801726B8
L_801726BC:;
  c->r[3]=R32(c->r[13]+0xFFFFCB98u); // 801726BC
  return; // 801726C0
}

// fn_801726C4
void f_801726C4(Ctx* __restrict c) {
  trace_call(0x801726C4u);
  f_80172F10(c); return; // 801726C4
}

// fn_801726C8
void f_801726C8(Ctx* __restrict c) {
  trace_call(0x801726C8u);
  f_8005E338(c); return; // 801726C8
}

// fn_801726CC
void f_801726CC(Ctx* __restrict c) {
  trace_call(0x801726CCu);
  f_8005E324(c); return; // 801726CC
}

// fn_801726D0
void f_801726D0(Ctx* __restrict c) {
  trace_call(0x801726D0u);
  f_8005E310(c); return; // 801726D0
}

// fn_801726D4
void f_801726D4(Ctx* __restrict c) {
  trace_call(0x801726D4u);
  f_8005E2FC(c); return; // 801726D4
}

// fn_801726D8
void f_801726D8(Ctx* __restrict c) {
  trace_call(0x801726D8u);
  f_8005E34C(c); return; // 801726D8
}

// fn_801726DC
void f_801726DC(Ctx* __restrict c) {
  trace_call(0x801726DCu);
  f_8005E360(c); return; // 801726DC
}

// fn_801726E0
void f_801726E0(Ctx* __restrict c) {
  trace_call(0x801726E0u);
  f_8005D47C(c); return; // 801726E0
}

// fn_801726E4
void f_801726E4(Ctx* __restrict c) {
  trace_call(0x801726E4u);
  f_8005D468(c); return; // 801726E4
}

// fn_801726E8
void f_801726E8(Ctx* __restrict c) {
  trace_call(0x801726E8u);
  f_8005BEDC(c); return; // 801726E8
}

// fn_801726EC
void f_801726EC(Ctx* __restrict c) {
  trace_call(0x801726ECu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801726EC
  c->r[0]=c->lr; // 801726F0
  cmps(c,0,(int32_t)c->r[3],0); // 801726F4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801726F8
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 801726FC
  c->r[30]=c->r[3]|c->r[3]; // 80172700
  c->r[31]=c->r[4]|c->r[4]; // 80172704
  if (crb(c,2)) { goto L_80172788; } // 80172708
  c->r[5]=0u+0x806E0000u; // 8017270C
  c->r[5]=c->r[5]+0xFFFFF670u; // 80172710
  W32(c->r[3]+0x0000001Cu,c->r[5]); // 80172714
  c->r[4]=c->r[5]+0x00000044u; // 80172718
  c->r[0]=c->r[5]+0x000001F0u; // 8017271C
  W32(c->r[3]+0x00000400u,c->r[4]); // 80172720
  W32(c->r[3]+0x000005C0u,c->r[0]); // 80172724
  c->r[3]=c->r[3]+0x00000694u; // 80172728
  c->lr=0x80172730u; f_800655F4(c); // 8017272C
  cmps(c,0,(int32_t)c->r[3],0); // 80172730
  if (crb(c,2)) { goto L_8017274C; } // 80172734
  c->r[3]=c->r[30]+0x00000694u; // 80172738
  c->lr=0x80172740u; f_800DBAA4(c); // 8017273C
  c->lr=0x80172744u; f_8031749C(c); // 80172740
  c->r[3]=c->r[30]+0x00000694u; // 80172744
  c->lr=0x8017274Cu; f_800B14B8(c); // 80172748
L_8017274C:;
  c->r[3]=c->r[30]+0x0000069Cu; // 8017274C
  c->r[4]=0u+0xFFFFFFFFu; // 80172750
  c->lr=0x80172758u; f_80132EC0(c); // 80172754
  c->r[3]=c->r[30]+0x000005DCu; // 80172758
  c->r[4]=0u+0xFFFFFFFFu; // 8017275C
  c->lr=0x80172764u; f_800E1E78(c); // 80172760
  cmps(c,0,(int32_t)c->r[30],0); // 80172764
  if (crb(c,2)) { goto L_80172778; } // 80172768
  c->r[3]=c->r[30]|c->r[30]; // 8017276C
  c->r[4]=0u+0x00000000u; // 80172770
  c->lr=0x80172778u; f_8005BD00(c); // 80172774
L_80172778:;
  cmps(c,0,(int32_t)c->r[31],0); // 80172778
  if (!crb(c,1)) { goto L_80172788; } // 8017277C
  c->r[3]=c->r[30]|c->r[30]; // 80172780
  c->lr=0x80172788u; f_8005328C(c); // 80172784
L_80172788:;
  c->r[3]=c->r[30]|c->r[30]; // 80172788
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 8017278C
  c->r[0]=R32(c->r[1]+0x00000014u); // 80172790
  c->lr=c->r[0]; // 80172794
  c->r[1]=c->r[1]+0x00000010u; // 80172798
  return; // 8017279C
}

// fn_801727A0
void f_801727A0(Ctx* __restrict c) {
  trace_call(0x801727A0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801727A0
  c->r[0]=c->lr; // 801727A4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801727A8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801727AC
  W32(c->r[1]+0x00000008u,c->r[30]); // 801727B0
  c->r[30]=c->r[3]|c->r[3]; // 801727B4
  c->r[3]=c->r[3]+0x000005DCu; // 801727B8
  c->r[4]=c->r[30]+0x000000FCu; // 801727BC
  c->lr=0x801727C4u; f_800E2088(c); // 801727C0
  {uint32_t ea=c->r[2]+0xFFFFBC0Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801727C4
  c->r[3]=c->r[30]+0x000005DCu; // 801727C8
  c->lr=0x801727D0u; f_800E21B4(c); // 801727CC
  {uint32_t ea=c->r[2]+0xFFFFBC10u; c->f[1]=c->ps1[1]=RF32(ea);} // 801727D0
  c->r[3]=c->r[30]+0x000005DCu; // 801727D4
  c->r[4]=0u+0x00000001u; // 801727D8
  c->lr=0x801727E0u; f_800E21E8(c); // 801727DC
  c->r[4]=0u+0x80690000u; // 801727E0
  c->r[3]=R32(c->r[30]+0x00000414u); // 801727E4
  c->r[4]=c->r[4]+0x00001598u; // 801727E8
  c->r[4]=c->r[4]+0x00000001u; // 801727EC
  c->lr=0x801727F4u; f_8034F3E0(c); // 801727F0
  c->r[31]=0u+0x00000000u; // 801727F4
  c->r[0]=0u+0x0000000Bu; // 801727F8
  W32(c->r[30]+0x000005C4u,c->r[31]); // 801727FC
  c->r[3]=c->r[30]+0x000007F4u; // 80172800
  {uint32_t ea=c->r[2]+0xFFFFBC0Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 80172804
  c->r[4]=0u+0x00000001u; // 80172808
  W32(c->r[30]+0x00000684u,c->r[31]); // 8017280C
  W32(c->r[30]+0x00000688u,c->r[31]); // 80172810
  W32(c->r[30]+0x000005CCu,c->r[0]); // 80172814
  c->lr=0x8017281Cu; f_80172924(c); // 80172818
  c->r[0]=0u+0x00000003u; // 8017281C
  c->r[4]=0u+0x00000001u; // 80172820
  W8(c->r[30]+0x000007A0u,c->r[4]); // 80172824
  c->r[3]=c->r[31]|c->r[31]; // 80172828
  {uint32_t ea=c->r[2]+0xFFFFBC0Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8017282C
  c->r[4]=0u+0xFFFFFFFFu; // 80172830
  c->ctr=c->r[0]; // 80172834
L_80172838:;
  c->r[5]=c->r[30]+c->r[3]; // 80172838
  c->r[3]=c->r[3]+0x00000014u; // 8017283C
  {uint32_t ea=c->r[5]+0x00000818u; WF32(ea,c->f[0]);} // 80172840
  W8(c->r[5]+0x0000081Cu,c->r[31]); // 80172844
  {uint32_t ea=c->r[5]+0x00000820u; WF32(ea,c->f[0]);} // 80172848
  W32(c->r[5]+0x00000824u,c->r[4]); // 8017284C
  W32(c->r[5]+0x00000828u,c->r[4]); // 80172850
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80172838; } // 80172854
  {uint32_t ea=c->r[2]+0xFFFFBC14u; c->f[2]=c->ps1[2]=RF32(ea);} // 80172858
  {uint32_t ea=c->r[2]+0xFFFFBC18u; c->f[1]=c->ps1[1]=RF32(ea);} // 8017285C
  {uint32_t ea=c->r[2]+0xFFFFBC1Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80172860
  {uint32_t ea=c->r[30]+0x00000820u; WF32(ea,c->f[2]);} // 80172864
  {uint32_t ea=c->r[30]+0x00000834u; WF32(ea,c->f[1]);} // 80172868
  {uint32_t ea=c->r[30]+0x00000848u; WF32(ea,c->f[0]);} // 8017286C
  c->r[0]=R8(c->r[13]+0xFFFFBC0Bu); // 80172870
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 80172874
  if (!crb(c,2)) { goto L_801728BC; } // 80172878
  c->r[31]=0u+0x80740000u; // 8017287C
  c->r[3]=c->r[31]+0x00004978u; // 80172880
  c->lr=0x80172888u; f_802F05B4(c); // 80172884
  c->r[6]=0u+0x806D0000u; // 80172888
  c->r[4]=0u+0x80050000u; // 8017288C
  c->r[6]=c->r[6]+0xFFFFCA20u; // 80172890
  c->r[3]=c->r[31]+0x00004978u; // 80172894
  c->r[0]=c->r[6]+0x0000000Cu; // 80172898
  c->r[5]=0u+0x80750000u; // 8017289C
  W32(c->r[31]+0x00004978u,c->r[6]); // 801728A0
  c->r[4]=c->r[4]+0x000006D0u; // 801728A4
  c->r[5]=c->r[5]+0x00004970u; // 801728A8
  W32(c->r[3]+0x000000A8u,c->r[0]); // 801728AC
  c->lr=0x801728B4u; f_803A92B8(c); // 801728B0
  c->r[0]=0u+0x00000001u; // 801728B4
  W8(c->r[13]+0xFFFFBC0Bu,c->r[0]); // 801728B8
L_801728BC:;
  c->r[4]=R32(c->r[30]+0x0000040Cu); // 801728BC
  c->r[3]=0u+0x80740000u; // 801728C0
  c->r[3]=c->r[3]+0x00004978u; // 801728C4
  c->r[5]=0u+0x00000000u; // 801728C8
  c->r[4]=R32(c->r[4]+0x00000094u); // 801728CC
  c->lr=0x801728D4u; f_802F1638(c); // 801728D0
  c->r[3]=c->r[30]|c->r[30]; // 801728D4
  c->r[4]=0u+0x00000038u; // 801728D8
  c->r[5]=0u+0x00000001u; // 801728DC
  c->lr=0x801728E4u; f_800D5F20(c); // 801728E0
  c->r[3]=c->r[30]|c->r[30]; // 801728E4
  c->lr=0x801728ECu; f_8006481C(c); // 801728E8
  c->r[31]=c->r[3]|c->r[3]; // 801728EC
  c->r[3]=c->r[30]|c->r[30]; // 801728F0
  c->lr=0x801728F8u; f_80064AFC(c); // 801728F4
  c->r[4]=c->r[3]|c->r[3]; // 801728F8
  c->r[5]=c->r[31]|c->r[31]; // 801728FC
  c->r[3]=c->r[30]+0x0000069Cu; // 80172900
  c->r[6]=c->r[30]+0x000005C0u; // 80172904
  c->lr=0x8017290Cu; f_80258718(c); // 80172908
  c->r[0]=R32(c->r[1]+0x00000014u); // 8017290C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80172910
  c->r[30]=R32(c->r[1]+0x00000008u); // 80172914
  c->lr=c->r[0]; // 80172918
  c->r[1]=c->r[1]+0x00000010u; // 8017291C
  return; // 80172920
}

// fn_80172924
void f_80172924(Ctx* __restrict c) {
  trace_call(0x80172924u);
  {uint32_t ea=c->r[2]+0xFFFFBC0Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80172924
  c->r[0]=0u+0x00000000u; // 80172928
  W32(c->r[3]+0x0000001Cu,c->r[4]); // 8017292C
  W32(c->r[3]+0x00000020u,c->r[0]); // 80172930
  {uint32_t ea=c->r[3]+0x00000018u; WF32(ea,c->f[1]);} // 80172934
  {uint32_t ea=c->r[3]+0x00000000u; WF32(ea,c->f[0]);} // 80172938
  {uint32_t ea=c->r[3]+0x00000004u; WF32(ea,c->f[0]);} // 8017293C
  W8(c->r[3]+0x00000008u,c->r[0]); // 80172940
  {uint32_t ea=c->r[3]+0x0000000Cu; WF32(ea,c->f[0]);} // 80172944
  {uint32_t ea=c->r[3]+0x00000010u; WF32(ea,c->f[0]);} // 80172948
  W8(c->r[3]+0x00000014u,c->r[0]); // 8017294C
  return; // 80172950
}

// fn_80172954
void f_80172954(Ctx* __restrict c) {
  trace_call(0x80172954u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80172954
  c->r[0]=c->lr; // 80172958
  W32(c->r[1]+0x00000034u,c->r[0]); // 8017295C
  c->r[11]=c->r[1]+0x00000030u; // 80172960
  c->lr=0x80172968u; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80172964
  c->r[25]=c->r[3]|c->r[3]; // 80172968
  c->r[3]=c->r[3]+0x000005DCu; // 8017296C
  c->lr=0x80172974u; f_800E1F38(c); // 80172970
  c->r[28]=0u+0x806E0000u; // 80172974
  c->r[26]=0u+0x00000000u; // 80172978
  c->r[28]=c->r[28]+0xFFFFF3C0u; // 8017297C
  c->r[31]=0u+0x00000000u; // 80172980
  c->r[30]=0u+0x00000000u; // 80172984
  c->r[29]=0u+0xFFFFFFFFu; // 80172988
L_8017298C:;
  c->r[27]=c->r[25]+c->r[30]; // 8017298C
  c->r[4]=R32(c->r[27]+0x00000828u); // 80172990
  cmps(c,0,(int32_t)c->r[4],0); // 80172994
  if (crb(c,0)) { goto L_801729E0; } // 80172998
  c->r[3]=R32(c->r[25]+0x00000404u); // 8017299C
  c->lr=0x801729A4u; f_802E9F0C(c); // 801729A0
  c->lr=0x801729A8u; f_802ECDA0(c); // 801729A4
  cmps(c,0,(int32_t)c->r[3],0); // 801729A8
  if (crb(c,2)) { goto L_801729E0; } // 801729AC
  c->r[3]=R32(c->r[25]+0x00000404u); // 801729B0
  c->r[4]=R32(c->r[27]+0x00000828u); // 801729B4
  c->lr=0x801729BCu; f_802E9FB8(c); // 801729B8
  c->r[3]=R32(c->r[25]+0x00000404u); // 801729BC
  c->r[5]=c->r[26]|c->r[26]; // 801729C0
  {uint32_t ea=c->r[2]+0xFFFFBC0Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801729C4
  c->r[6]=c->r[28]+c->r[31]; // 801729C8
  {uint32_t ea=c->r[2]+0xFFFFBC10u; c->f[2]=c->ps1[2]=RF32(ea);} // 801729CC
  c->r[4]=0u+0x00000002u; // 801729D0
  c->lr=0x801729D8u; f_802E91C8(c); // 801729D4
  W32(c->r[27]+0x00000824u,c->r[3]); // 801729D8
  W32(c->r[27]+0x00000828u,c->r[29]); // 801729DC
L_801729E0:;
  c->r[26]=c->r[26]+0x00000001u; // 801729E0
  c->r[30]=c->r[30]+0x00000014u; // 801729E4
  cmps(c,0,(int32_t)c->r[26],3); // 801729E8
  c->r[31]=c->r[31]+0x00000040u; // 801729EC
  if (crb(c,0)) { IRQCHK(c); goto L_8017298C; } // 801729F0
  c->r[11]=c->r[1]+0x00000030u; // 801729F4
  c->lr=0x801729FCu; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801729F8
  c->r[0]=R32(c->r[1]+0x00000034u); // 801729FC
  c->lr=c->r[0]; // 80172A00
  c->r[1]=c->r[1]+0x00000030u; // 80172A04
  return; // 80172A08
}

// fn_80172A0C
void f_80172A0C(Ctx* __restrict c) {
  trace_call(0x80172A0Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80172A0C
  c->r[0]=c->lr; // 80172A10
  W32(c->r[1]+0x00000054u,c->r[0]); // 80172A14
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[31]);} // 80172A18
  {uint32_t ea=c->r[1]+0x00000048u; psq_store(c,31,ea,0,0);} // 80172A1C
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[30]);} // 80172A20
  {uint32_t ea=c->r[1]+0x00000038u; psq_store(c,30,ea,0,0);} // 80172A24
  c->r[5]=R32(c->r[3]+0x00000444u); // 80172A28
  c->r[0]=0u+0x00000000u; // 80172A2C
  c->r[4]=R32(c->r[3]+0x0000044Cu); // 80172A30
  c->r[3]=c->r[1]+0x00000008u; // 80172A34
  {uint32_t ea=c->r[5]+0x00000000u; c->f[31]=c->ps1[31]=RF32(ea);} // 80172A38
  {uint32_t ea=c->r[4]+0x00000000u; c->f[30]=c->ps1[30]=RF32(ea);} // 80172A3C
  W8(c->r[1]+0x00000008u,c->r[0]); // 80172A40
  c->lr=0x80172A48u; f_800462D8(c); // 80172A44
  c->f[1]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[30],true)); // 80172A48
  c->r[4]=0u+0x43300000u; // 80172A4C
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[31],true)); // 80172A50
  W32(c->r[1]+0x00000018u,c->r[4]); // 80172A54
  {uint32_t ea=c->r[2]+0xFFFFBC20u; c->f[2]=RF64(ea);} // 80172A58
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[1]);} // 80172A5C
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[0]);} // 80172A60
  c->r[5]=R32(c->r[1]+0x00000014u); // 80172A64
  c->r[0]=R32(c->r[1]+0x00000024u); // 80172A68
  c->r[5]=c->r[5]^0x80000000u; // 80172A6C
  W32(c->r[1]+0x0000001Cu,c->r[5]); // 80172A70
  c->r[0]=c->r[0]^0x80000000u; // 80172A74
  {uint32_t ea=c->r[1]+0x00000018u; c->f[0]=RF64(ea);} // 80172A78
  W32(c->r[1]+0x0000002Cu,c->r[0]); // 80172A7C
  c->f[1]=c->ps1[1]=S(c->f[0]-c->f[2]); // 80172A80
  W32(c->r[1]+0x00000028u,c->r[4]); // 80172A84
  {uint32_t ea=c->r[1]+0x00000028u; c->f[0]=RF64(ea);} // 80172A88
  c->f[2]=c->ps1[2]=S(c->f[0]-c->f[2]); // 80172A8C
  c->lr=0x80172A94u; f_800EA1BC(c); // 80172A90
  c->r[0]=R32(c->r[1]+0x00000054u); // 80172A94
  {uint32_t ea=c->r[1]+0x00000048u; psq_load(c,31,ea,0,0);} // 80172A98
  {uint32_t ea=c->r[1]+0x00000040u; c->f[31]=RF64(ea);} // 80172A9C
  {uint32_t ea=c->r[1]+0x00000038u; psq_load(c,30,ea,0,0);} // 80172AA0
  {uint32_t ea=c->r[1]+0x00000030u; c->f[30]=RF64(ea);} // 80172AA4
  c->lr=c->r[0]; // 80172AA8
  c->r[1]=c->r[1]+0x00000050u; // 80172AAC
  return; // 80172AB0
}

// fn_80172AB4
void f_80172AB4(Ctx* __restrict c) {
  trace_call(0x80172AB4u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80172AB4
  c->r[0]=c->lr; // 80172AB8
  W32(c->r[1]+0x00000024u,c->r[0]); // 80172ABC
  {uint32_t ea=c->r[1]+0x00000018u; WF64(ea,c->f[31]);} // 80172AC0
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[30]);} // 80172AC4
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 80172AC8
  c->r[30]=c->r[3]|c->r[3]; // 80172ACC
  c->r[4]=R32(c->r[3]+0x00000354u); // 80172AD0
  cmps(c,0,(int32_t)c->r[4],0); // 80172AD4
  if (!crb(c,2)) { goto L_80172AE4; } // 80172AD8
  c->r[31]=0u+0x00000000u; // 80172ADC
  goto L_80172AF0; // 80172AE0
L_80172AE4:;
  c->r[4]=R32(c->r[4]+0x00000004u); // 80172AE4
  c->r[0]=sraw(c,c->r[4],31); // 80172AE8
  c->r[31]=c->r[4]&~c->r[0]; // 80172AEC
L_80172AF0:;
  c->r[3]=R32(c->r[3]+0x00000404u); // 80172AF0
  c->lr=0x80172AF8u; f_802EA4B0(c); // 80172AF4
  c->f[30]=c->f[1]; // 80172AF8
  c->r[3]=c->r[30]+0x000005DCu; // 80172AFC
  c->lr=0x80172B04u; f_800E2A98(c); // 80172B00
  c->f[31]=c->f[1]; // 80172B04
  c->r[3]=c->r[30]+0x000005DCu; // 80172B08
  c->lr=0x80172B10u; f_800E2090(c); // 80172B0C
  c->f[1]=c->f[30]; // 80172B10
  c->r[5]=c->r[3]|c->r[3]; // 80172B14
  c->f[2]=c->f[31]; // 80172B18
  c->r[4]=c->r[31]|c->r[31]; // 80172B1C
  c->r[3]=c->r[30]+0x0000069Cu; // 80172B20
  c->lr=0x80172B28u; f_802588C4(c); // 80172B24
  {uint32_t ea=c->r[1]+0x00000018u; c->f[31]=RF64(ea);} // 80172B28
  {uint32_t ea=c->r[1]+0x00000010u; c->f[30]=RF64(ea);} // 80172B2C
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 80172B30
  c->r[0]=R32(c->r[1]+0x00000024u); // 80172B34
  c->lr=c->r[0]; // 80172B38
  c->r[1]=c->r[1]+0x00000020u; // 80172B3C
  return; // 80172B40
}

// fn_80172B44
void f_80172B44(Ctx* __restrict c) {
  trace_call(0x80172B44u);
  return; // 80172B44
}

// fn_80172B48
void f_80172B48(Ctx* __restrict c) {
  trace_call(0x80172B48u);
  return; // 80172B48
}

// fn_80172B4C
void f_80172B4C(Ctx* __restrict c) {
  trace_call(0x80172B4Cu);
  return; // 80172B4C
}

// fn_80172B50
void f_80172B50(Ctx* __restrict c) {
  trace_call(0x80172B50u);
  return; // 80172B50
}

// fn_80172B54
void f_80172B54(Ctx* __restrict c) {
  trace_call(0x80172B54u);
  {uint32_t ea=c->r[3]+0x0000068Cu; WF32(ea,c->f[1]);} // 80172B54
  return; // 80172B58
}

// fn_80172B5C
void f_80172B5C(Ctx* __restrict c) {
  trace_call(0x80172B5Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80172B5C
  c->r[0]=c->lr; // 80172B60
  W32(c->r[1]+0x00000014u,c->r[0]); // 80172B64
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80172B68
  c->r[31]=c->r[3]|c->r[3]; // 80172B6C
  W32(c->r[1]+0x00000008u,c->r[30]); // 80172B70
  c->r[30]=c->r[4]|c->r[4]; // 80172B74
  c->r[4]=0u+0x00000016u; // 80172B78
  c->lr=0x80172B80u; f_800D5F00(c); // 80172B7C
  cmps(c,0,(int32_t)c->r[3],0); // 80172B80
  if (!crb(c,2)) { goto L_80172E1C; } // 80172B84
  c->r[3]=c->r[31]|c->r[31]; // 80172B88
  c->r[4]=0u+0x00000001u; // 80172B8C
  c->lr=0x80172B94u; f_800D5F00(c); // 80172B90
  cmps(c,0,(int32_t)c->r[3],0); // 80172B94
  if (!crb(c,2)) { goto L_80172E1C; } // 80172B98
  c->r[3]=c->r[31]|c->r[31]; // 80172B9C
  c->lr=0x80172BA4u; f_8016D6B4(c); // 80172BA0
  {uint32_t ea=c->r[31]+0x0000080Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 80172BA4
  fcmp(c,0,c->f[2],c->f[1]); // 80172BA8
  setcrb(c,2,crb(c,1)|crb(c,2)); // 80172BAC
  if (!crb(c,2)) { goto L_80172C3C; } // 80172BB0
  c->r[0]=R32(c->r[31]+0x000005CCu); // 80172BB4
  cmps(c,0,(int32_t)c->r[0],8); // 80172BB8
  if (!crb(c,2)) { goto L_80172BD4; } // 80172BBC
  c->r[0]=0u+0x00000003u; // 80172BC0
  W32(c->r[31]+0x000005D0u,c->r[0]); // 80172BC4
  c->r[3]=c->r[31]|c->r[31]; // 80172BC8
  c->lr=0x80172BD0u; f_80172E5C(c); // 80172BCC
  goto L_80172E1C; // 80172BD0
L_80172BD4:;
  {uint32_t ea=c->r[2]+0xFFFFBC0Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80172BD4
  fcmp(c,0,c->f[0],c->f[2]); // 80172BD8
  if (!crb(c,2)) { goto L_80172BEC; } // 80172BDC
  c->r[3]=R32(c->r[31]+0x0000044Cu); // 80172BE0
  {uint32_t ea=c->r[3]+0x00000000u; WF32(ea,c->f[0]);} // 80172BE4
  goto L_80172C18; // 80172BE8
L_80172BEC:;
  c->r[3]=c->r[31]|c->r[31]; // 80172BEC
  c->lr=0x80172BF4u; f_8016D6B4(c); // 80172BF0
  {uint32_t ea=c->r[2]+0xFFFFBC08u; c->f[0]=c->ps1[0]=RF32(ea);} // 80172BF4
  fcmp(c,0,c->f[1],c->f[0]); // 80172BF8
  if (!crb(c,0)) { goto L_80172C18; } // 80172BFC
  c->r[3]=R32(c->r[31]+0x00000444u); // 80172C00
  {uint32_t ea=c->r[2]+0xFFFFBC28u; c->f[0]=c->ps1[0]=RF32(ea);} // 80172C04
  {uint32_t ea=c->r[3]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 80172C08
  c->r[3]=R32(c->r[31]+0x0000044Cu); // 80172C0C
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[1]); // 80172C10
  {uint32_t ea=c->r[3]+0x00000000u; WF32(ea,c->f[0]);} // 80172C14
L_80172C18:;
  c->r[3]=c->r[31]|c->r[31]; // 80172C18
  c->r[4]=0u+0x00000016u; // 80172C1C
  c->lr=0x80172C24u; f_800D5F00(c); // 80172C20
  cmps(c,0,(int32_t)c->r[3],0); // 80172C24
  if (crb(c,2)) { goto L_80172C3C; } // 80172C28
  c->r[3]=c->r[31]|c->r[31]; // 80172C2C
  c->r[4]=0u+0x00000016u; // 80172C30
  c->r[5]=0u+0x00000000u; // 80172C34
  c->lr=0x80172C3Cu; f_800D5F20(c); // 80172C38
L_80172C3C:;
  c->r[0]=R32(c->r[31]+0x000005C8u); // 80172C3C
  c->r[0]=rotl(c->r[0],0)&0x0000003Cu; cr0(c,c->r[0]); // 80172C40
  if (crb(c,2)) { goto L_80172E1C; } // 80172C44
  c->r[30]=R32(c->r[30]+0x0000003Cu); // 80172C48
  c->r[4]=0u+0x00000004u; // 80172C4C
  cmps(c,0,(int32_t)c->r[30],24); // 80172C50
  if (!crb(c,2)) { goto L_80172C60; } // 80172C54
  c->r[4]=0u+0x00000000u; // 80172C58
  goto L_80172C7C; // 80172C5C
L_80172C60:;
  cmps(c,0,(int32_t)c->r[30],26); // 80172C60
  if (!crb(c,2)) { goto L_80172C70; } // 80172C64
  c->r[4]=0u+0x00000001u; // 80172C68
  goto L_80172C7C; // 80172C6C
L_80172C70:;
  cmps(c,0,(int32_t)c->r[30],17); // 80172C70
  if (!crb(c,2)) { goto L_80172C7C; } // 80172C74
  c->r[4]=0u+0x00000002u; // 80172C78
L_80172C7C:;
  cmps(c,0,(int32_t)c->r[4],4); // 80172C7C
  if (crb(c,2)) { goto L_80172C90; } // 80172C80
  {uint32_t ea=c->r[31]+0x0000068Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 80172C84
  c->r[3]=c->r[31]|c->r[31]; // 80172C88
  c->lr=0x80172C90u; f_80177220(c); // 80172C8C
L_80172C90:;
  cmpu(c,0,c->r[30],0x00000002u); // 80172C90
  if (!crb(c,1)) { goto L_80172CBC; } // 80172C94
  cmps(c,0,(int32_t)c->r[30],17); // 80172C98
  if (crb(c,2)) { goto L_80172CBC; } // 80172C9C
  cmps(c,0,(int32_t)c->r[30],24); // 80172CA0
  if (crb(c,2)) { goto L_80172CBC; } // 80172CA4
  cmps(c,0,(int32_t)c->r[30],26); // 80172CA8
  if (crb(c,2)) { goto L_80172CBC; } // 80172CAC
  c->r[0]=R32(c->r[31]+0x000005C8u); // 80172CB0
  c->r[0]=rotl(c->r[0],0)&0x00000020u; cr0(c,c->r[0]); // 80172CB4
  if (crb(c,2)) { goto L_80172D34; } // 80172CB8
L_80172CBC:;
  c->r[0]=R32(c->r[31]+0x000005C8u); // 80172CBC
  c->r[0]=c->r[0]&0x00000014u; cr0(c,c->r[0]); // 80172CC0
  if (crb(c,2)) { goto L_80172CD4; } // 80172CC4
  {uint32_t ea=c->r[31]+0x0000068Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 80172CC8
  c->r[3]=c->r[31]+0x000007F4u; // 80172CCC
  c->lr=0x80172CD4u; f_80172E34(c); // 80172CD0
L_80172CD4:;
  c->r[0]=R32(c->r[31]+0x000005C8u); // 80172CD4
  c->r[0]=rotl(c->r[0],0)&0x00000008u; cr0(c,c->r[0]); // 80172CD8
  if (crb(c,2)) { goto L_80172D10; } // 80172CDC
  {uint32_t ea=c->r[31]+0x0000068Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 80172CE0
  {uint32_t ea=c->r[31]+0x000007F8u; c->f[1]=c->ps1[1]=RF32(ea);} // 80172CE4
  {uint32_t ea=c->r[31]+0x000007F4u; c->f[0]=c->ps1[0]=RF32(ea);} // 80172CE8
  c->f[1]=c->ps1[1]=S(c->f[1]+c->f[2]); // 80172CEC
  {uint32_t ea=c->r[31]+0x000007F8u; WF32(ea,c->f[1]);} // 80172CF0
  fcmp(c,0,c->f[1],c->f[0]); // 80172CF4
  setcrb(c,2,crb(c,1)|crb(c,2)); // 80172CF8
  if (!crb(c,2)) { goto L_80172D10; } // 80172CFC
  {uint32_t ea=c->r[2]+0xFFFFBC0Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80172D00
  c->r[0]=0u+0x00000001u; // 80172D04
  W8(c->r[31]+0x000007FCu,c->r[0]); // 80172D08
  {uint32_t ea=c->r[31]+0x000007F8u; WF32(ea,c->f[0]);} // 80172D0C
L_80172D10:;
  c->r[0]=R8(c->r[31]+0x00000808u); // 80172D10
  cmps(c,0,(int32_t)c->r[0],0); // 80172D14
  if (!crb(c,2)) { goto L_80172D28; } // 80172D18
  c->r[0]=R8(c->r[31]+0x000007FCu); // 80172D1C
  cmps(c,0,(int32_t)c->r[0],0); // 80172D20
  if (crb(c,2)) { goto L_80172D34; } // 80172D24
L_80172D28:;
  c->r[3]=R32(c->r[31]+0x00000814u); // 80172D28
  c->r[0]=c->r[3]+0x00000001u; // 80172D2C
  W32(c->r[31]+0x00000814u,c->r[0]); // 80172D30
L_80172D34:;
  c->r[0]=R32(c->r[31]+0x000005C8u); // 80172D34
  c->r[0]=rotl(c->r[0],0)&0x00000008u; cr0(c,c->r[0]); // 80172D38
  if (crb(c,2)) { goto L_80172D88; } // 80172D3C
  c->r[3]=c->r[31]|c->r[31]; // 80172D40
  c->lr=0x80172D48u; f_8016D6B4(c); // 80172D44
  {uint32_t ea=c->r[31]+0x0000080Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80172D48
  fcmp(c,0,c->f[1],c->f[0]); // 80172D4C
  setcrb(c,2,crb(c,0)|crb(c,2)); // 80172D50
  c->r[0]=c->cr; // 80172D54
  c->r[0]=rotl(c->r[0],3)&0x00000001u; cr0(c,c->r[0]); // 80172D58
  if (crb(c,2)) { goto L_80172D88; } // 80172D5C
  c->r[3]=R32(c->r[31]+0x00000684u); // 80172D60
  c->r[4]=c->r[31]|c->r[31]; // 80172D64
  c->r[12]=R32(c->r[3]+0x00000010u); // 80172D68
  c->r[12]=R32(c->r[12]+0x00000008u); // 80172D6C
  c->ctr=c->r[12]; // 80172D70
  if (true) { c->lr=0x80172D78u; dispatch(c,c->ctr); } // 80172D74
  c->r[0]=0u+0x00000000u; // 80172D78
  W8(c->r[31]+0x000007FCu,c->r[0]); // 80172D7C
  W8(c->r[31]+0x00000808u,c->r[0]); // 80172D80
  goto L_80172E1C; // 80172D84
L_80172D88:;
  c->r[0]=R32(c->r[31]+0x000005C8u); // 80172D88
  c->r[0]=rotl(c->r[0],0)&0x00000018u; cr0(c,c->r[0]); // 80172D8C
  if (crb(c,2)) { goto L_80172E1C; } // 80172D90
  c->r[0]=R8(c->r[31]+0x000007FCu); // 80172D94
  cmps(c,0,(int32_t)c->r[0],0); // 80172D98
  if (!crb(c,2)) { goto L_80172DAC; } // 80172D9C
  c->r[0]=R8(c->r[31]+0x00000808u); // 80172DA0
  cmps(c,0,(int32_t)c->r[0],0); // 80172DA4
  if (crb(c,2)) { goto L_80172E1C; } // 80172DA8
L_80172DAC:;
  c->r[3]=R32(c->r[31]+0x00000688u); // 80172DAC
  cmps(c,0,(int32_t)c->r[3],0); // 80172DB0
  if (crb(c,2)) { goto L_80172DCC; } // 80172DB4
  c->r[12]=R32(c->r[3]+0x00000010u); // 80172DB8
  c->r[4]=c->r[31]|c->r[31]; // 80172DBC
  c->r[12]=R32(c->r[12]+0x00000008u); // 80172DC0
  c->ctr=c->r[12]; // 80172DC4
  if (true) { c->lr=0x80172DCCu; dispatch(c,c->ctr); } // 80172DC8
L_80172DCC:;
  c->r[3]=R32(c->r[31]+0x00000684u); // 80172DCC
  c->r[4]=c->r[31]|c->r[31]; // 80172DD0
  c->r[12]=R32(c->r[3]+0x00000010u); // 80172DD4
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 80172DD8
  c->ctr=c->r[12]; // 80172DDC
  if (true) { c->lr=0x80172DE4u; dispatch(c,c->ctr); } // 80172DE0
  c->r[0]=0u+0x00000000u; // 80172DE4
  W8(c->r[31]+0x000007FCu,c->r[0]); // 80172DE8
  c->r[3]=c->r[31]|c->r[31]; // 80172DEC
  W8(c->r[31]+0x00000808u,c->r[0]); // 80172DF0
  c->r[12]=R32(c->r[31]+0x0000001Cu); // 80172DF4
  c->r[12]=R32(c->r[12]+0x00000100u); // 80172DF8
  c->ctr=c->r[12]; // 80172DFC
  if (true) { c->lr=0x80172E04u; dispatch(c,c->ctr); } // 80172E00
  cmps(c,0,(int32_t)c->r[3],0); // 80172E04
  if (!crb(c,2)) { goto L_80172E1C; } // 80172E08
  c->r[3]=c->r[31]|c->r[31]; // 80172E0C
  c->r[4]=0u+0x00000016u; // 80172E10
  c->r[5]=0u+0x00000001u; // 80172E14
  c->lr=0x80172E1Cu; f_800D5F20(c); // 80172E18
L_80172E1C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80172E1C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80172E20
  c->r[30]=R32(c->r[1]+0x00000008u); // 80172E24
  c->lr=c->r[0]; // 80172E28
  c->r[1]=c->r[1]+0x00000010u; // 80172E2C
  return; // 80172E30
}

// fn_80172E34
void f_80172E34(Ctx* __restrict c) {
  trace_call(0x80172E34u);
  {uint32_t ea=c->r[3]+0x00000010u; c->f[2]=c->ps1[2]=RF32(ea);} // 80172E34
  {uint32_t ea=c->r[3]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80172E38
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[1]); // 80172E3C
  {uint32_t ea=c->r[3]+0x00000010u; WF32(ea,c->f[1]);} // 80172E40
  fcmp(c,0,c->f[1],c->f[0]); // 80172E44
  setcrb(c,2,crb(c,1)|crb(c,2)); // 80172E48
  if (!crb(c,2)) return; // 80172E4C
  c->r[0]=0u+0x00000001u; // 80172E50
  W8(c->r[3]+0x00000014u,c->r[0]); // 80172E54
  return; // 80172E58
}

// fn_80172E5C
void f_80172E5C(Ctx* __restrict c) {
  trace_call(0x80172E5Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80172E5C
  c->r[0]=c->lr; // 80172E60
  W32(c->r[1]+0x00000044u,c->r[0]); // 80172E64
  {uint32_t ea=c->r[1]+0x00000030u; for(int i=28;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 80172E68
  c->r[31]=c->r[1]|c->r[1]; // 80172E6C
  c->r[28]=c->r[3]|c->r[3]; // 80172E70
  c->lr=0x80172E78u; f_801724F4(c); // 80172E74
  c->r[4]=c->r[3]|c->r[3]; // 80172E78
  c->r[3]=c->r[28]|c->r[28]; // 80172E7C
  c->lr=0x80172E84u; f_80062F4C(c); // 80172E80
  c->r[0]=R8(c->r[28]+0x00000010u); // 80172E84
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80172E88
  c->r[3]=c->r[28]+c->r[0]; // 80172E8C
  c->r[29]=R32(c->r[3]+0x00000014u); // 80172E90
  cmps(c,0,(int32_t)c->r[29],0); // 80172E94
  if (crb(c,2)) { goto L_80172ECC; } // 80172E98
  c->r[30]=0u+0x00000000u; // 80172E9C
  W32(c->r[31]+0x00000024u,c->r[1]); // 80172EA0
  W8(c->r[31]+0x00000008u,c->r[30]); // 80172EA4
  c->lr=0x80172EACu; f_801724F4(c); // 80172EA8
  W32(c->r[29]+0x00000000u,c->r[3]); // 80172EAC
  c->r[0]=c->r[13]+0xFFFF8A84u; // 80172EB0
  c->r[3]=0u+0x806E0000u; // 80172EB4
  W32(c->r[29]+0x00000004u,c->r[0]); // 80172EB8
  c->r[3]=c->r[3]+0xFFFFF910u; // 80172EBC
  W32(c->r[29]+0x00000008u,c->r[30]); // 80172EC0
  W32(c->r[29]+0x0000000Cu,c->r[30]); // 80172EC4
  W32(c->r[29]+0x00000010u,c->r[3]); // 80172EC8
L_80172ECC:;
  W32(c->r[28]+0x00000008u,c->r[29]); // 80172ECC
  c->r[0]=0u+0x00000000u; // 80172ED0
  c->r[3]=c->r[28]|c->r[28]; // 80172ED4
  c->r[4]=c->r[29]|c->r[29]; // 80172ED8
  W32(c->r[29]+0x00000008u,c->r[0]); // 80172EDC
  c->r[0]=R32(c->r[28]+0x00000004u); // 80172EE0
  W32(c->r[28]+0x0000000Cu,c->r[0]); // 80172EE4
  c->lr=0x80172EECu; f_8006306C(c); // 80172EE8
  c->r[10]=c->r[31]|c->r[31]; // 80172EEC
  c->r[3]=c->r[29]|c->r[29]; // 80172EF0
  {uint32_t ea=c->r[10]+0x00000030u; for(int i=28;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 80172EF4
  c->r[10]=R32(c->r[1]+0x00000000u); // 80172EF8
  c->r[0]=R32(c->r[10]+0x00000004u); // 80172EFC
  c->r[1]=c->r[10]|c->r[10]; // 80172F00
  c->lr=c->r[0]; // 80172F04
  return; // 80172F08
}

// fn_80172F0C
void f_80172F0C(Ctx* __restrict c) {
  trace_call(0x80172F0Cu);
  return; // 80172F0C
}

// fn_80172F10
void f_80172F10(Ctx* __restrict c) {
  trace_call(0x80172F10u);
  {uint32_t ea=c->r[1]+0xFFFFFF30u; W32(ea,c->r[1]); c->r[1]=ea;} // 80172F10
  c->r[0]=c->lr; // 80172F14
  W32(c->r[1]+0x000000D4u,c->r[0]); // 80172F18
  c->r[11]=c->r[1]+0x000000C0u; // 80172F1C
  {uint32_t ea=c->r[1]+0x000000C0u; WF64(ea,c->f[31]);} // 80172F20
  {uint32_t ea=c->r[1]+0x000000C8u; psq_store(c,31,ea,0,0);} // 80172F24
  c->lr=0x80172F2Cu; { W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80172F28
  c->r[31]=c->r[1]|c->r[1]; // 80172F2C
  c->r[4]=0u+0x80690000u; // 80172F30
  c->r[25]=c->r[3]|c->r[3]; // 80172F34
  c->r[4]=c->r[4]+0x00001598u; // 80172F38
  {uint32_t ea=c->r[2]+0xFFFFBC10u; c->f[1]=c->ps1[1]=RF32(ea);} // 80172F3C
  c->r[5]=0u+0x00000000u; // 80172F40
  c->r[3]=c->r[3]+0x000005DCu; // 80172F44
  c->r[4]=c->r[4]+0x00000006u; // 80172F48
  c->lr=0x80172F50u; f_800E277C(c); // 80172F4C
  c->r[3]=c->r[25]|c->r[25]; // 80172F50
  c->r[4]=0u+0x00000000u; // 80172F54
  c->lr=0x80172F5Cu; f_8005EE88(c); // 80172F58
  c->r[3]=c->r[25]|c->r[25]; // 80172F5C
  c->r[4]=0u+0x00000000u; // 80172F60
  c->lr=0x80172F68u; f_8005E814(c); // 80172F64
  c->r[3]=R32(c->r[25]+0x00000138u); // 80172F68
  c->r[4]=0u+0x00000009u; // 80172F6C
  c->r[5]=0u+0x00000000u; // 80172F70
  c->r[12]=R32(c->r[3]+0x00000000u); // 80172F74
  c->r[12]=R32(c->r[12]+0x00000020u); // 80172F78
  c->ctr=c->r[12]; // 80172F7C
  if (true) { c->lr=0x80172F84u; dispatch(c,c->ctr); } // 80172F80
  c->r[23]=R32(c->r[25]+0x00000434u); // 80172F84
  c->r[4]=0u+0x00000001u; // 80172F88
  c->r[3]=c->r[23]+0x00000030u; // 80172F8C
  c->lr=0x80172F94u; f_802D94E8(c); // 80172F90
  {uint32_t ea=c->r[25]+0x00000690u; WF32(ea,c->f[1]);} // 80172F94
  c->r[3]=c->r[23]+0x00000030u; // 80172F98
  c->r[4]=0u+0x00000000u; // 80172F9C
  c->lr=0x80172FA4u; f_802D94E8(c); // 80172FA0
  c->r[5]=R32(c->r[25]+0x00000444u); // 80172FA4
  c->r[3]=c->r[23]+0x00000030u; // 80172FA8
  c->r[4]=0u+0x00000000u; // 80172FAC
  {uint32_t ea=c->r[5]+0x00000000u; WF32(ea,c->f[1]);} // 80172FB0
  c->lr=0x80172FB8u; f_802D94E8(c); // 80172FB4
  c->r[4]=R32(c->r[25]+0x0000044Cu); // 80172FB8
  c->r[0]=0u+0x00000000u; // 80172FBC
  c->r[3]=c->r[31]+0x00000050u; // 80172FC0
  {uint32_t ea=c->r[4]+0x00000000u; WF32(ea,c->f[1]);} // 80172FC4
  W8(c->r[31]+0x00000050u,c->r[0]); // 80172FC8
  c->lr=0x80172FD0u; f_800462D8(c); // 80172FCC
  c->r[4]=0u+0x00000000u; // 80172FD0
  c->lr=0x80172FD8u; f_800EA1A0(c); // 80172FD4
  {uint32_t ea=c->r[2]+0xFFFFBC18u; c->f[1]=c->ps1[1]=RF32(ea);} // 80172FD8
  c->r[3]=c->r[25]+0x000007F4u; // 80172FDC
  c->r[4]=0u+0xFFFFFFFFu; // 80172FE0
  c->lr=0x80172FE8u; f_80172924(c); // 80172FE4
  {uint32_t ea=c->r[25]+0x00000690u; c->f[1]=c->ps1[1]=RF32(ea);} // 80172FE8
  c->r[3]=c->r[25]+0x000007F4u; // 80172FEC
  c->lr=0x80172FF4u; f_801739CC(c); // 80172FF0
  c->r[3]=c->r[23]+0x00000030u; // 80172FF4
  c->r[4]=0u+0x00000005u; // 80172FF8
  c->lr=0x80173000u; f_802D94E8(c); // 80172FFC
  {uint32_t ea=c->r[2]+0xFFFFBC0Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80173000
  c->r[3]=c->r[23]+0x00000030u; // 80173004
  {uint32_t ea=c->r[25]+0x000007A4u; WF32(ea,c->f[1]);} // 80173008
  c->r[4]=0u+0x00000007u; // 8017300C
  {uint32_t ea=c->r[25]+0x000007A8u; WF32(ea,c->f[0]);} // 80173010
  c->lr=0x80173018u; f_802D94E8(c); // 80173014
  c->f[31]=c->f[1]; // 80173018
  c->r[3]=c->r[23]+0x00000030u; // 8017301C
  c->r[4]=0u+0x00000006u; // 80173020
  c->lr=0x80173028u; f_802D94E8(c); // 80173024
  c->f[2]=c->f[31]; // 80173028
  c->r[3]=c->r[25]+0x000007ACu; // 8017302C
  c->lr=0x80173034u; f_801739E4(c); // 80173030
  c->r[3]=c->r[23]+0x00000030u; // 80173034
  c->r[4]=0u+0x00000008u; // 80173038
  c->lr=0x80173040u; f_802D94E8(c); // 8017303C
  {uint32_t ea=c->r[2]+0xFFFFBC0Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80173040
  c->r[3]=c->r[23]+0x00000030u; // 80173044
  {uint32_t ea=c->r[25]+0x000007B4u; WF32(ea,c->f[1]);} // 80173048
  c->r[4]=0u+0x0000000Au; // 8017304C
  {uint32_t ea=c->r[25]+0x000007B8u; WF32(ea,c->f[0]);} // 80173050
  c->lr=0x80173058u; f_802D94E8(c); // 80173054
  c->f[31]=c->f[1]; // 80173058
  c->r[3]=c->r[23]+0x00000030u; // 8017305C
  c->r[4]=0u+0x00000009u; // 80173060
  c->lr=0x80173068u; f_802D94E8(c); // 80173064
  c->f[2]=c->f[31]; // 80173068
  c->r[3]=c->r[25]+0x000007BCu; // 8017306C
  c->lr=0x80173074u; f_801739E4(c); // 80173070
  c->r[3]=c->r[23]+0x00000030u; // 80173074
  c->r[4]=0u+0x0000000Cu; // 80173078
  c->lr=0x80173080u; f_802D94E8(c); // 8017307C
  c->f[31]=c->f[1]; // 80173080
  c->r[3]=c->r[23]+0x00000030u; // 80173084
  c->r[4]=0u+0x0000000Bu; // 80173088
  c->lr=0x80173090u; f_802D94E8(c); // 8017308C
  c->f[2]=c->f[31]; // 80173090
  c->r[3]=c->r[25]+0x000007C4u; // 80173094
  c->lr=0x8017309Cu; f_801739E4(c); // 80173098
  c->r[3]=c->r[23]+0x00000030u; // 8017309C
  c->r[4]=0u+0x0000000Eu; // 801730A0
  c->lr=0x801730A8u; f_802D94E8(c); // 801730A4
  c->f[31]=c->f[1]; // 801730A8
  c->r[3]=c->r[23]+0x00000030u; // 801730AC
  c->r[4]=0u+0x0000000Du; // 801730B0
  c->lr=0x801730B8u; f_802D94E8(c); // 801730B4
  c->f[2]=c->f[31]; // 801730B8
  c->r[3]=c->r[25]+0x000007CCu; // 801730BC
  c->lr=0x801730C4u; f_801739E4(c); // 801730C0
  c->r[3]=c->r[23]+0x00000030u; // 801730C4
  c->r[4]=0u+0x00000010u; // 801730C8
  c->lr=0x801730D0u; f_802D94E8(c); // 801730CC
  c->f[31]=c->f[1]; // 801730D0
  c->r[3]=c->r[23]+0x00000030u; // 801730D4
  c->r[4]=0u+0x0000000Fu; // 801730D8
  c->lr=0x801730E0u; f_802D94E8(c); // 801730DC
  c->f[2]=c->f[31]; // 801730E0
  c->r[3]=c->r[25]+0x000007D4u; // 801730E4
  c->lr=0x801730ECu; f_801739E4(c); // 801730E8
  c->r[3]=c->r[23]+0x00000030u; // 801730EC
  c->r[4]=0u+0x00000012u; // 801730F0
  c->lr=0x801730F8u; f_802D94E8(c); // 801730F4
  c->f[31]=c->f[1]; // 801730F8
  c->r[3]=c->r[23]+0x00000030u; // 801730FC
  c->r[4]=0u+0x00000011u; // 80173100
  c->lr=0x80173108u; f_802D94E8(c); // 80173104
  c->f[2]=c->f[31]; // 80173108
  c->r[3]=c->r[25]+0x000007DCu; // 8017310C
  c->lr=0x80173114u; f_801739E4(c); // 80173110
  c->r[3]=c->r[23]+0x00000030u; // 80173114
  c->r[4]=0u+0x00000014u; // 80173118
  c->lr=0x80173120u; f_802D94E8(c); // 8017311C
  c->f[31]=c->f[1]; // 80173120
  c->r[3]=c->r[23]+0x00000030u; // 80173124
  c->r[4]=0u+0x00000013u; // 80173128
  c->lr=0x80173130u; f_802D94E8(c); // 8017312C
  c->f[2]=c->f[31]; // 80173130
  c->r[3]=c->r[25]+0x000007E4u; // 80173134
  c->lr=0x8017313Cu; f_801739E4(c); // 80173138
  c->r[3]=c->r[23]+0x00000030u; // 8017313C
  c->r[4]=0u+0x00000016u; // 80173140
  c->lr=0x80173148u; f_802D94E8(c); // 80173144
  c->f[31]=c->f[1]; // 80173148
  c->r[3]=c->r[23]+0x00000030u; // 8017314C
  c->r[4]=0u+0x00000015u; // 80173150
  c->lr=0x80173158u; f_802D94E8(c); // 80173154
  c->f[2]=c->f[31]; // 80173158
  c->r[3]=c->r[25]+0x000007ECu; // 8017315C
  c->lr=0x80173164u; f_801739E4(c); // 80173160
  c->r[3]=c->r[25]|c->r[25]; // 80173164
  c->lr=0x8017316Cu; f_801771BC(c); // 80173168
  c->r[24]=0u+0x00000000u; // 8017316C
  goto L_801731B4; // 80173170
L_80173174:;
  c->r[6]=(uint32_t)((int32_t)c->r[24]*(int32_t)20); // 80173174
  c->r[4]=0u+0x806E0000u; // 80173178
  c->r[0]=rotl(c->r[24],6)&0xFFFFFFC0u; // 8017317C
  c->r[3]=R32(c->r[25]+0x00000404u); // 80173180
  c->r[4]=c->r[4]+0xFFFFF3C0u; // 80173184
  {uint32_t ea=c->r[2]+0xFFFFBC0Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 80173188
  c->r[23]=c->r[25]+c->r[6]; // 8017318C
  c->r[6]=c->r[4]+c->r[0]; // 80173190
  {uint32_t ea=c->r[2]+0xFFFFBC10u; c->f[2]=c->ps1[2]=RF32(ea);} // 80173194
  c->r[5]=c->r[24]|c->r[24]; // 80173198
  c->r[4]=0u+0x00000002u; // 8017319C
  c->lr=0x801731A4u; f_802E91C8(c); // 801731A0
  W32(c->r[23]+0x00000824u,c->r[3]); // 801731A4
  c->r[0]=0u+0xFFFFFFFFu; // 801731A8
  c->r[24]=c->r[24]+0x00000001u; // 801731AC
  W32(c->r[23]+0x00000828u,c->r[0]); // 801731B0
L_801731B4:;
  cmps(c,0,(int32_t)c->r[24],3); // 801731B4
  if (crb(c,0)) { IRQCHK(c); goto L_80173174; } // 801731B8
  c->r[26]=0u+0x80690000u; // 801731BC
  c->r[3]=R32(c->r[25]+0x00000404u); // 801731C0
  c->r[26]=c->r[26]+0x00001598u; // 801731C4
  {uint32_t ea=c->r[2]+0xFFFFBC0Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801731C8
  {uint32_t ea=c->r[2]+0xFFFFBC10u; c->f[2]=c->ps1[2]=RF32(ea);} // 801731CC
  c->r[6]=c->r[26]+0x0000001Du; // 801731D0
  c->r[4]=0u+0x00000002u; // 801731D4
  c->r[5]=0u+0x00000003u; // 801731D8
  c->lr=0x801731E0u; f_802E91C8(c); // 801731DC
  c->r[24]=0u+0x00000000u; // 801731E0
  W8(c->r[31]+0x00000048u,c->r[24]); // 801731E4
  c->r[3]=c->r[31]+0x00000048u; // 801731E8
  c->r[27]=c->r[31]+0x0000004Cu; // 801731EC
  W8(c->r[31]+0x0000004Cu,c->r[24]); // 801731F0
  c->lr=0x801731F8u; f_8004DBC0(c); // 801731F4
  c->lr=0x801731FCu; f_80099108(c); // 801731F8
  c->r[23]=c->r[3]|c->r[3]; // 801731FC
  c->r[3]=c->r[27]|c->r[27]; // 80173200
  c->lr=0x80173208u; f_8004DBC0(c); // 80173204
  c->r[4]=c->r[23]|c->r[23]; // 80173208
  c->lr=0x80173210u; f_80099344(c); // 8017320C
  W32(c->r[25]+0x00000680u,c->r[3]); // 80173210
  c->r[3]=c->r[31]+0x00000044u; // 80173214
  W8(c->r[31]+0x00000044u,c->r[24]); // 80173218
  c->lr=0x80173220u; f_8004E228(c); // 8017321C
  c->r[4]=R32(c->r[25]+0x00000680u); // 80173220
  c->lr=0x80173228u; f_800761A0(c); // 80173224
  c->r[4]=c->r[26]+0x00000028u; // 80173228
  c->r[5]=0u+0x00001000u; // 8017322C
  c->lr=0x80173234u; f_8007586C(c); // 80173230
  W8(c->r[31]+0x00000040u,c->r[24]); // 80173234
  c->r[3]=c->r[31]+0x00000040u; // 80173238
  c->lr=0x80173240u; f_8004E228(c); // 8017323C
  c->r[4]=R32(c->r[25]+0x00000680u); // 80173240
  c->r[5]=c->r[26]+0x00000028u; // 80173244
  c->lr=0x8017324Cu; f_80075FE0(c); // 80173248
  W8(c->r[31]+0x0000003Cu,c->r[24]); // 8017324C
  c->r[3]=c->r[31]+0x0000003Cu; // 80173250
  c->lr=0x80173258u; f_8004E228(c); // 80173254
  c->r[4]=R32(c->r[25]+0x00000680u); // 80173258
  c->r[5]=c->r[26]+0x00000028u; // 8017325C
  {uint32_t ea=c->r[2]+0xFFFFBC0Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 80173260
  c->r[6]=c->r[26]+0x00000039u; // 80173264
  c->lr=0x8017326Cu; f_800760CC(c); // 80173268
  W8(c->r[31]+0x00000038u,c->r[24]); // 8017326C
  c->r[3]=c->r[31]+0x00000038u; // 80173270
  c->lr=0x80173278u; f_8004E228(c); // 80173274
  c->r[4]=R32(c->r[25]+0x00000680u); // 80173278
  c->r[5]=c->r[26]+0x0000003Eu; // 8017327C
  c->r[6]=0u+0x00000001u; // 80173280
  c->lr=0x80173288u; f_80075ED0(c); // 80173284
  W8(c->r[31]+0x00000034u,c->r[24]); // 80173288
  c->r[3]=c->r[31]+0x00000034u; // 8017328C
  c->lr=0x80173294u; f_8004E228(c); // 80173290
  c->r[4]=R32(c->r[25]+0x00000680u); // 80173294
  c->r[5]=c->r[26]+0x0000004Du; // 80173298
  c->r[6]=0u+0x00000001u; // 8017329C
  c->lr=0x801732A4u; f_80075ED0(c); // 801732A0
  W8(c->r[31]+0x00000030u,c->r[24]); // 801732A4
  c->r[3]=c->r[31]+0x00000030u; // 801732A8
  c->lr=0x801732B0u; f_8004E228(c); // 801732AC
  c->r[4]=R32(c->r[25]+0x00000680u); // 801732B0
  c->r[5]=c->r[26]+0x0000005Eu; // 801732B4
  c->r[6]=0u+0x00000001u; // 801732B8
  c->lr=0x801732C0u; f_80075ED0(c); // 801732BC
  W8(c->r[31]+0x0000002Cu,c->r[24]); // 801732C0
  c->r[3]=c->r[31]+0x0000002Cu; // 801732C4
  c->lr=0x801732CCu; f_8004E228(c); // 801732C8
  c->r[4]=R32(c->r[25]+0x00000680u); // 801732CC
  c->r[5]=c->r[26]+0x0000006Du; // 801732D0
  c->r[6]=0u+0x00000001u; // 801732D4
  c->lr=0x801732DCu; f_80075ED0(c); // 801732D8
  W8(c->r[31]+0x00000028u,c->r[24]); // 801732DC
  c->r[3]=c->r[31]+0x00000028u; // 801732E0
  c->lr=0x801732E8u; f_8004E228(c); // 801732E4
  c->r[4]=R32(c->r[25]+0x00000680u); // 801732E8
  c->r[5]=c->r[26]+0x0000007Eu; // 801732EC
  c->r[6]=0u+0x00000001u; // 801732F0
  c->lr=0x801732F8u; f_80075ED0(c); // 801732F4
  c->r[0]=R8(c->r[13]+0xFFFFBC0Au); // 801732F8
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 801732FC
  if (!crb(c,2)) { goto L_80173344; } // 80173300
  c->r[23]=0u+0x80740000u; // 80173304
  c->r[3]=c->r[23]+0x000047D8u; // 80173308
  c->lr=0x80173310u; f_80317EFC(c); // 8017330C
  c->r[6]=0u+0x806D0000u; // 80173310
  c->r[4]=0u+0x80050000u; // 80173314
  c->r[6]=c->r[6]+0xFFFFCA68u; // 80173318
  c->r[3]=c->r[23]+0x000047D8u; // 8017331C
  c->r[0]=c->r[6]+0x00000028u; // 80173320
  c->r[5]=0u+0x80750000u; // 80173324
  W32(c->r[3]+0x000000A4u,c->r[6]); // 80173328
  c->r[4]=c->r[4]+0x0000074Cu; // 8017332C
  c->r[5]=c->r[5]+0x0000494Cu; // 80173330
  W32(c->r[3]+0x000000A8u,c->r[0]); // 80173334
  c->lr=0x8017333Cu; f_803A92B8(c); // 80173338
  c->r[0]=0u+0x00000001u; // 8017333C
  W8(c->r[13]+0xFFFFBC0Au,c->r[0]); // 80173340
L_80173344:;
  c->r[3]=0u+0x80690000u; // 80173344
  c->r[30]=0u+0x80740000u; // 80173348
  c->r[3]=c->r[3]+0x00001598u; // 8017334C
  c->r[4]=0u+0x00000000u; // 80173350
  c->r[30]=c->r[30]+0x000047D8u; // 80173354
  c->r[29]=c->r[3]+0x0000008Fu; // 80173358
  goto L_80173398; // 8017335C
L_80173360:;
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFFCu; // 80173360
  c->r[5]=c->r[30]+c->r[0]; // 80173364
  c->r[0]=R32(c->r[5]+0x000000ACu); // 80173368
  cmps(c,0,(int32_t)c->r[0],0); // 8017336C
  if (!crb(c,2)) { goto L_80173384; } // 80173370
  c->r[3]=0u+0x80740000u; // 80173374
  c->r[3]=c->r[3]+0x00005180u; // 80173378
  W32(c->r[5]+0x000000ACu,c->r[3]); // 8017337C
  goto L_801733A0; // 80173380
L_80173384:;
  c->r[3]=0u+0x80740000u; // 80173384
  c->r[3]=c->r[3]+0x00005180u; // 80173388
  cmpu(c,0,c->r[0],c->r[3]); // 8017338C
  if (crb(c,2)) { goto L_801733A0; } // 80173390
  c->r[4]=c->r[4]+0x00000001u; // 80173394
L_80173398:;
  cmps(c,0,(int32_t)c->r[4],5); // 80173398
  if (crb(c,0)) { IRQCHK(c); goto L_80173360; } // 8017339C
L_801733A0:;
  c->r[0]=R8(c->r[13]+0xFFFFBC30u); // 801733A0
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 801733A4
  if (!crb(c,2)) { goto L_801733D8; } // 801733A8
  c->r[23]=0u+0x80740000u; // 801733AC
  c->r[3]=c->r[23]+0x00004D40u; // 801733B0
  c->lr=0x801733B8u; f_80052DF0(c); // 801733B4
  c->r[4]=0u+0x80040000u; // 801733B8
  c->r[5]=0u+0x80750000u; // 801733BC
  c->r[3]=c->r[23]+0x00004D40u; // 801733C0
  c->r[4]=c->r[4]+0x000055F4u; // 801733C4
  c->r[5]=c->r[5]+0x00004934u; // 801733C8
  c->lr=0x801733D0u; f_803A92B8(c); // 801733CC
  c->r[0]=0u+0x00000001u; // 801733D0
  W8(c->r[13]+0xFFFFBC30u,c->r[0]); // 801733D4
L_801733D8:;
  c->r[3]=0u+0x80740000u; // 801733D8
  c->r[4]=0u+0x00000534u; // 801733DC
  c->r[3]=c->r[3]+0x00004D40u; // 801733E0
  c->lr=0x801733E8u; f_8005BFB0(c); // 801733E4
  c->r[26]=c->r[3]|c->r[3]; cr0(c,c->r[26]); // 801733E8
  if (crb(c,2)) { goto L_80173820; } // 801733EC
  c->r[23]=0u+0x00000000u; // 801733F0
  W8(c->r[31]+0x00000024u,c->r[23]); // 801733F4
  c->r[28]=c->r[26]|c->r[26]; // 801733F8
  c->r[27]=c->r[26]|c->r[26]; // 801733FC
  W8(c->r[31]+0x00000010u,c->r[23]); // 80173400
  c->r[24]=c->r[26]|c->r[26]; // 80173404
  W8(c->r[31]+0x0000001Cu,c->r[23]); // 80173408
  W8(c->r[31]+0x00000018u,c->r[23]); // 8017340C
  c->lr=0x80173414u; f_801739F0(c); // 80173410
  W32(c->r[26]+0x00000000u,c->r[3]); // 80173414
  c->r[4]=0u+0x806D0000u; // 80173418
  c->r[4]=c->r[4]+0x000038C0u; // 8017341C
  c->r[3]=c->r[26]+0x00000020u; // 80173420
  W32(c->r[26]+0x0000001Cu,c->r[4]); // 80173424
  W32(c->r[26]+0x00000004u,c->r[23]); // 80173428
  W32(c->r[26]+0x00000008u,c->r[23]); // 8017342C
  W32(c->r[26]+0x0000000Cu,c->r[23]); // 80173430
  W8(c->r[26]+0x00000010u,c->r[23]); // 80173434
  W32(c->r[26]+0x00000014u,c->r[23]); // 80173438
  W32(c->r[26]+0x00000018u,c->r[23]); // 8017343C
  c->lr=0x80173444u; f_80163ED4(c); // 80173440
  c->r[3]=c->r[26]+0x00000028u; // 80173444
  c->r[4]=0u+0x00000001u; // 80173448
  c->lr=0x80173450u; f_80163FD0(c); // 8017344C
  c->r[3]=c->r[26]+0x00000038u; // 80173450
  c->lr=0x80173458u; f_80164094(c); // 80173454
  c->r[3]=c->r[26]+0x00000044u; // 80173458
  c->r[4]=0u+0x00000000u; // 8017345C
  c->lr=0x80173464u; f_801640D8(c); // 80173460
  c->r[4]=0u+0x806F0000u; // 80173464
  c->r[3]=c->r[26]+0x0000009Cu; // 80173468
  c->r[4]=c->r[4]+0x00000E80u; // 8017346C
  W32(c->r[26]+0x0000001Cu,c->r[4]); // 80173470
  W32(c->r[26]+0x00000058u,c->r[23]); // 80173474
  W32(c->r[26]+0x00000064u,c->r[23]); // 80173478
  c->lr=0x80173480u; f_8016419C(c); // 8017347C
  c->r[3]=c->r[26]+0x000000A8u; // 80173480
  c->lr=0x80173488u; f_801641E0(c); // 80173484
  c->r[3]=c->r[26]+0x000000B4u; // 80173488
  c->lr=0x80173490u; f_80164224(c); // 8017348C
  c->r[3]=c->r[26]+0x000000C0u; // 80173490
  c->lr=0x80173498u; f_80164268(c); // 80173494
  c->r[3]=c->r[26]+0x000000CCu; // 80173498
  c->lr=0x801734A0u; f_801642AC(c); // 8017349C
  c->r[3]=c->r[26]+0x000000D8u; // 801734A0
  c->lr=0x801734A8u; f_801642F0(c); // 801734A4
  c->r[0]=0u+0x00000006u; // 801734A8
  W32(c->r[26]+0x000000E8u,c->r[0]); // 801734AC
  c->r[3]=c->r[26]+0x000000FCu; // 801734B0
  W32(c->r[26]+0x000000ECu,c->r[23]); // 801734B4
  W32(c->r[26]+0x000000F8u,c->r[23]); // 801734B8
  c->lr=0x801734C0u; f_80164320(c); // 801734BC
  W32(c->r[26]+0x00000314u,c->r[23]); // 801734C0
  c->r[5]=0u+0x00000000u; // 801734C4
  W8(c->r[26]+0x0000005Cu,c->r[23]); // 801734C8
  W32(c->r[26]+0x00000054u,c->r[23]); // 801734CC
  W32(c->r[26]+0x00000310u,c->r[26]); // 801734D0
  goto L_801734F8; // 801734D4
L_801734D8:;
  c->r[0]=rotl(c->r[5],2)&0xFFFFFFFCu; // 801734D8
  c->r[3]=c->r[26]+c->r[5]; // 801734DC
  c->r[4]=c->r[26]+c->r[0]; // 801734E0
  c->r[5]=c->r[5]+0x00000001u; // 801734E4
  c->r[0]=0u+0xFFFFFFFFu; // 801734E8
  W32(c->r[4]+0x00000068u,c->r[0]); // 801734EC
  c->r[0]=0u+0x00000000u; // 801734F0
  W8(c->r[3]+0x00000090u,c->r[0]); // 801734F4
L_801734F8:;
  cmps(c,0,(int32_t)c->r[5],10); // 801734F8
  if (crb(c,0)) { IRQCHK(c); goto L_801734D8; } // 801734FC
  c->r[3]=c->r[26]+0x00000318u; // 80173500
  c->r[4]=0u+0x00000001u; // 80173504
  c->lr=0x8017350Cu; f_80163E10(c); // 80173508
  c->r[3]=0u+0x806D0000u; // 8017350C
  c->r[0]=0u+0xFFFFFFFFu; // 80173510
  c->r[3]=c->r[3]+0xFFFFD974u; // 80173514
  W32(c->r[26]+0x0000001Cu,c->r[3]); // 80173518
  c->r[27]=c->r[26]+0x0000032Cu; // 8017351C
  c->r[4]=0u+0x00000001u; // 80173520
  W32(c->r[26]+0x00000328u,c->r[0]); // 80173524
  c->r[0]=0u+0x00000000u; // 80173528
  c->r[3]=c->r[27]|c->r[27]; // 8017352C
  W32(c->r[26]+0x000000ECu,c->r[4]); // 80173530
  W32(c->r[26]+0x00000054u,c->r[0]); // 80173534
  W32(c->r[26]+0x00000314u,c->r[0]); // 80173538
  c->lr=0x80173540u; f_800506C0(c); // 8017353C
  cmps(c,0,(int32_t)c->r[27],0); // 80173540
  c->r[3]=c->r[27]|c->r[27]; // 80173544
  if (crb(c,2)) { goto L_80173550; } // 80173548
  c->r[3]=c->r[27]+0xFFFFFCD4u; // 8017354C
L_80173550:;
  W32(c->r[27]+0x00000008u,c->r[3]); // 80173550
  c->r[0]=0u+0x00000000u; // 80173554
  c->r[23]=0u+0x00000001u; // 80173558
  W8(c->r[27]+0x0000000Cu,c->r[0]); // 8017355C
  W8(c->r[27]+0x0000000Cu,c->r[23]); // 80173560
  c->r[0]=R8(c->r[13]+0xFFFFBE9Cu); // 80173564
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 80173568
  if (!crb(c,2)) { goto L_801735AC; } // 8017356C
  c->r[24]=0u+0x80750000u; // 80173570
  c->r[3]=c->r[24]+0xFFFF8144u; // 80173574
  c->lr=0x8017357Cu; f_800506C0(c); // 80173578
  c->r[6]=0u+0x806D0000u; // 8017357C
  c->r[4]=0u+0x80080000u; // 80173580
  c->r[6]=c->r[6]+0x00003908u; // 80173584
  c->r[3]=c->r[24]+0xFFFF8144u; // 80173588
  c->r[0]=c->r[6]+0x00000008u; // 8017358C
  c->r[5]=0u+0x80750000u; // 80173590
  W32(c->r[3]+0x00000010u,c->r[6]); // 80173594
  c->r[4]=c->r[4]+0xFFFF993Cu; // 80173598
  c->r[5]=c->r[5]+0x00004958u; // 8017359C
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 801735A0
  c->lr=0x801735A8u; f_803A92B8(c); // 801735A4
  W8(c->r[13]+0xFFFFBE9Cu,c->r[23]); // 801735A8
L_801735AC:;
  c->r[3]=0u+0x80750000u; // 801735AC
  c->r[5]=c->r[27]|c->r[27]; // 801735B0
  c->r[3]=c->r[3]+0xFFFF8144u; // 801735B4
  c->r[4]=c->r[3]|c->r[3]; // 801735B8
  c->lr=0x801735C0u; f_802DDCA8(c); // 801735BC
  c->r[0]=0u+0x00000000u; // 801735C0
  c->r[23]=c->r[26]+0x0000033Cu; // 801735C4
  W8(c->r[31]+0x00000014u,c->r[0]); // 801735C8
  c->r[3]=c->r[23]|c->r[23]; // 801735CC
  W8(c->r[31]+0x00000020u,c->r[0]); // 801735D0
  c->lr=0x801735D8u; f_800506C0(c); // 801735D4
  cmps(c,0,(int32_t)c->r[23],0); // 801735D8
  c->r[0]=c->r[23]|c->r[23]; // 801735DC
  if (crb(c,2)) { goto L_801735E8; } // 801735E0
  c->r[0]=c->r[23]+0xFFFFFCC4u; // 801735E4
L_801735E8:;
  W32(c->r[23]+0x00000008u,c->r[0]); // 801735E8
  c->r[0]=0u+0x00000000u; // 801735EC
  c->r[3]=c->r[23]|c->r[23]; // 801735F0
  W8(c->r[23]+0x0000000Cu,c->r[0]); // 801735F4
  c->lr=0x801735FCu; f_80163D78(c); // 801735F8
  c->r[3]=0u+0x806D0000u; // 801735FC
  c->r[0]=c->r[13]+0xFFFF8A34u; // 80173600
  c->r[3]=c->r[3]+0x00003820u; // 80173604
  W32(c->r[26]+0x0000001Cu,c->r[3]); // 80173608
  W32(c->r[26]+0x00000054u,c->r[0]); // 8017360C
  c->r[0]=R8(c->r[13]+0xFFFFBC44u); // 80173610
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 80173614
  if (!crb(c,2)) { goto L_80173634; } // 80173618
  c->r[3]=R32(c->r[13]+0xFFFFBC48u); // 8017361C
  c->r[0]=0u+0x00000001u; // 80173620
  W32(c->r[13]+0xFFFFBC40u,c->r[3]); // 80173624
  c->r[3]=c->r[3]+0x00000001u; // 80173628
  W32(c->r[13]+0xFFFFBC48u,c->r[3]); // 8017362C
  W8(c->r[13]+0xFFFFBC44u,c->r[0]); // 80173630
L_80173634:;
  c->r[0]=R32(c->r[13]+0xFFFFBC40u); // 80173634
  c->r[4]=0u+0x806E0000u; // 80173638
  W32(c->r[26]+0x00000328u,c->r[0]); // 8017363C
  c->r[4]=c->r[4]+0xFFFFF628u; // 80173640
  c->r[3]=c->r[26]+0x0000034Cu; // 80173644
  W32(c->r[26]+0x0000001Cu,c->r[4]); // 80173648
  c->lr=0x80173650u; f_802F026C(c); // 8017364C
  c->r[3]=c->r[26]+0x0000049Cu; // 80173650
  c->lr=0x80173658u; f_80319908(c); // 80173654
  c->r[23]=R32(c->r[13]+0xFFFFDBD8u); // 80173658
  cmps(c,0,(int32_t)c->r[23],0); // 8017365C
  if (crb(c,2)) { goto L_801736A4; } // 80173660
  c->lr=0x80173668u; f_801739F0(c); // 80173664
  c->r[27]=c->r[3]|c->r[3]; // 80173668
  c->lr=0x80173670u; f_80163CF0(c); // 8017366C
  c->r[4]=(uint32_t)((int32_t)c->r[27]*(int32_t)2600); // 80173670
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 80173674
  c->r[5]=0u+0x80170000u; // 80173678
  c->r[3]=rotl(c->r[27],2)&0xFFFFFFFCu; // 8017367C
  c->r[4]=c->r[23]+c->r[4]; // 80173680
  c->r[5]=c->r[5]+0x00003FB0u; // 80173684
  c->r[4]=c->r[4]+c->r[0]; // 80173688
  W32(c->r[4]+0x000001CCu,c->r[5]); // 8017368C
  c->r[0]=R32(c->r[23]+c->r[3]); // 80173690
  cmpu(c,0,c->r[0],0x00000010u); // 80173694
  if (!crb(c,0)) { goto L_801736A4; } // 80173698
  c->r[0]=0u+0x00000010u; // 8017369C
  W32(c->r[23]+c->r[3],c->r[0]); // 801736A0
L_801736A4:;
  c->r[23]=R32(c->r[13]+0xFFFFDBD8u); // 801736A4
  cmps(c,0,(int32_t)c->r[23],0); // 801736A8
  if (crb(c,2)) { goto L_801736F0; } // 801736AC
  c->lr=0x801736B4u; f_801739F0(c); // 801736B0
  c->r[27]=c->r[3]|c->r[3]; // 801736B4
  c->lr=0x801736BCu; f_8005E1B0(c); // 801736B8
  c->r[4]=(uint32_t)((int32_t)c->r[27]*(int32_t)2600); // 801736BC
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 801736C0
  c->r[5]=0u+0x80170000u; // 801736C4
  c->r[3]=rotl(c->r[27],2)&0xFFFFFFFCu; // 801736C8
  c->r[4]=c->r[23]+c->r[4]; // 801736CC
  c->r[5]=c->r[5]+0x00003FACu; // 801736D0
  c->r[4]=c->r[4]+c->r[0]; // 801736D4
  W32(c->r[4]+0x000001CCu,c->r[5]); // 801736D8
  c->r[0]=R32(c->r[23]+c->r[3]); // 801736DC
  cmpu(c,0,c->r[0],0x00000010u); // 801736E0
  if (!crb(c,0)) { goto L_801736F0; } // 801736E4
  c->r[0]=0u+0x00000010u; // 801736E8
  W32(c->r[23]+c->r[3],c->r[0]); // 801736EC
L_801736F0:;
  c->r[23]=R32(c->r[13]+0xFFFFDBD8u); // 801736F0
  cmps(c,0,(int32_t)c->r[23],0); // 801736F4
  if (crb(c,2)) { goto L_8017373C; } // 801736F8
  c->lr=0x80173700u; f_801739F0(c); // 801736FC
  c->r[27]=c->r[3]|c->r[3]; // 80173700
  c->lr=0x80173708u; f_80062E5C(c); // 80173704
  c->r[4]=(uint32_t)((int32_t)c->r[27]*(int32_t)2600); // 80173708
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 8017370C
  c->r[5]=0u+0x80170000u; // 80173710
  c->r[3]=rotl(c->r[27],2)&0xFFFFFFFCu; // 80173714
  c->r[4]=c->r[23]+c->r[4]; // 80173718
  c->r[5]=c->r[5]+0x00003F60u; // 8017371C
  c->r[4]=c->r[4]+c->r[0]; // 80173720
  W32(c->r[4]+0x000001CCu,c->r[5]); // 80173724
  c->r[0]=R32(c->r[23]+c->r[3]); // 80173728
  cmpu(c,0,c->r[0],0x00000010u); // 8017372C
  if (!crb(c,0)) { goto L_8017373C; } // 80173730
  c->r[0]=0u+0x00000010u; // 80173734
  W32(c->r[23]+c->r[3],c->r[0]); // 80173738
L_8017373C:;
  c->r[23]=R32(c->r[13]+0xFFFFDBD8u); // 8017373C
  cmps(c,0,(int32_t)c->r[23],0); // 80173740
  if (crb(c,2)) { goto L_80173788; } // 80173744
  c->lr=0x8017374Cu; f_801739F0(c); // 80173748
  c->r[27]=c->r[3]|c->r[3]; // 8017374C
  c->lr=0x80173754u; f_80062D6C(c); // 80173750
  c->r[4]=(uint32_t)((int32_t)c->r[27]*(int32_t)2600); // 80173754
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 80173758
  c->r[5]=0u+0x80170000u; // 8017375C
  c->r[3]=rotl(c->r[27],2)&0xFFFFFFFCu; // 80173760
  c->r[4]=c->r[23]+c->r[4]; // 80173764
  c->r[5]=c->r[5]+0x00003F14u; // 80173768
  c->r[4]=c->r[4]+c->r[0]; // 8017376C
  W32(c->r[4]+0x000001CCu,c->r[5]); // 80173770
  c->r[0]=R32(c->r[23]+c->r[3]); // 80173774
  cmpu(c,0,c->r[0],0x00000010u); // 80173778
  if (!crb(c,0)) { goto L_80173788; } // 8017377C
  c->r[0]=0u+0x00000010u; // 80173780
  W32(c->r[23]+c->r[3],c->r[0]); // 80173784
L_80173788:;
  c->r[23]=R32(c->r[13]+0xFFFFDBD8u); // 80173788
  cmps(c,0,(int32_t)c->r[23],0); // 8017378C
  if (crb(c,2)) { goto L_801737D4; } // 80173790
  c->lr=0x80173798u; f_801739F0(c); // 80173794
  c->r[27]=c->r[3]|c->r[3]; // 80173798
  c->lr=0x801737A0u; f_80062D3C(c); // 8017379C
  c->r[4]=(uint32_t)((int32_t)c->r[27]*(int32_t)2600); // 801737A0
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 801737A4
  c->r[5]=0u+0x80170000u; // 801737A8
  c->r[3]=rotl(c->r[27],2)&0xFFFFFFFCu; // 801737AC
  c->r[4]=c->r[23]+c->r[4]; // 801737B0
  c->r[5]=c->r[5]+0x00003EC8u; // 801737B4
  c->r[4]=c->r[4]+c->r[0]; // 801737B8
  W32(c->r[4]+0x000001CCu,c->r[5]); // 801737BC
  c->r[0]=R32(c->r[23]+c->r[3]); // 801737C0
  cmpu(c,0,c->r[0],0x00000010u); // 801737C4
  if (!crb(c,0)) { goto L_801737D4; } // 801737C8
  c->r[0]=0u+0x00000010u; // 801737CC
  W32(c->r[23]+c->r[3],c->r[0]); // 801737D0
L_801737D4:;
  c->r[23]=R32(c->r[13]+0xFFFFDBDCu); // 801737D4
  cmps(c,0,(int32_t)c->r[23],0); // 801737D8
  if (crb(c,2)) { goto L_80173820; } // 801737DC
  c->lr=0x801737E4u; f_801739F0(c); // 801737E0
  c->r[27]=c->r[3]|c->r[3]; // 801737E4
  c->lr=0x801737ECu; f_80076C4C(c); // 801737E8
  c->r[4]=(uint32_t)((int32_t)c->r[27]*(int32_t)80); // 801737EC
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 801737F0
  c->r[5]=0u+0x80170000u; // 801737F4
  c->r[3]=rotl(c->r[27],2)&0xFFFFFFFCu; // 801737F8
  c->r[4]=c->r[23]+c->r[4]; // 801737FC
  c->r[5]=c->r[5]+0x00003A8Cu; // 80173800
  c->r[4]=c->r[4]+c->r[0]; // 80173804
  W32(c->r[4]+0x000001CCu,c->r[5]); // 80173808
  c->r[0]=R32(c->r[23]+c->r[3]); // 8017380C
  cmpu(c,0,c->r[0],0x0000006Cu); // 80173810
  if (!crb(c,0)) { goto L_80173820; } // 80173814
  c->r[0]=0u+0x0000006Cu; // 80173818
  W32(c->r[23]+c->r[3],c->r[0]); // 8017381C
L_80173820:;
  c->r[0]=0u+0x00000F7Du; // 80173820
  W32(c->r[26]+0x000000F4u,c->r[0]); // 80173824
  c->r[0]=0u+0x00000000u; // 80173828
  c->r[3]=0u+0x80740000u; // 8017382C
  W32(c->r[26]+0x000000F8u,c->r[0]); // 80173830
  c->r[3]=c->r[3]+0x00005180u; // 80173834
  c->r[0]=c->r[30]+0x000000D8u; // 80173838
  cmps(c,0,(int32_t)c->r[26],0); // 8017383C
  c->r[0]=c->r[3]-c->r[0]; // 80173840
  W32(c->r[26]+0x00000060u,c->r[3]); // 80173844
  c->r[0]=cntlz(c->r[0]); // 80173848
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 8017384C
  W8(c->r[26]+0x0000005Cu,c->r[0]); // 80173850
  if (crb(c,2)) { goto L_8017389C; } // 80173854
  c->r[6]=R8(c->r[30]+0x000000D4u); // 80173858
  c->r[3]=c->r[30]|c->r[30]; // 8017385C
  c->r[4]=c->r[29]|c->r[29]; // 80173860
  c->r[5]=c->r[26]|c->r[26]; // 80173864
  c->lr=0x8017386Cu; f_80318C10(c); // 80173868
  cmps(c,0,(int32_t)c->r[3],0); // 8017386C
  if (!crb(c,2)) { goto L_8017389C; } // 80173870
  cmps(c,0,(int32_t)c->r[26],0); // 80173874
  if (crb(c,2)) { goto L_80173898; } // 80173878
  c->r[12]=R32(c->r[26]+0x0000001Cu); // 8017387C
  c->r[0]=0u+0x00000001u; // 80173880
  c->r[3]=c->r[26]|c->r[26]; // 80173884
  c->r[12]=R32(c->r[12]+0x00000008u); // 80173888
  c->r[4]=(uint32_t)(int32_t)(int16_t)c->r[0]; // 8017388C
  c->ctr=c->r[12]; // 80173890
  if (true) { c->lr=0x80173898u; dispatch(c,c->ctr); } // 80173894
L_80173898:;
  c->r[26]=0u+0x00000000u; // 80173898
L_8017389C:;
  cmps(c,0,(int32_t)c->r[26],0); // 8017389C
  if (crb(c,2)) { goto L_8017391C; } // 801738A0
  c->r[4]=c->r[26]|c->r[26]; // 801738A4
  if (crb(c,2)) { goto L_801738B0; } // 801738A8
  c->r[4]=c->r[26]+0x00000020u; // 801738AC
L_801738B0:;
  c->r[3]=R32(c->r[4]+0x00000000u); // 801738B0
  c->r[4]=R32(c->r[4]+0x00000004u); // 801738B4
  W32(c->r[25]+0x00000698u,c->r[4]); // 801738B8
  W32(c->r[25]+0x00000694u,c->r[3]); // 801738BC
  c->r[0]=R8(c->r[26]+0x00000010u); // 801738C0
  W32(c->r[31]+0x00000058u,c->r[3]); // 801738C4
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801738C8
  c->r[3]=c->r[26]+c->r[0]; // 801738CC
  W32(c->r[31]+0x0000005Cu,c->r[4]); // 801738D0
  c->r[23]=R32(c->r[3]+0x00000014u); // 801738D4
  cmps(c,0,(int32_t)c->r[23],0); // 801738D8
  if (crb(c,2)) { goto L_80173904; } // 801738DC
  c->r[27]=0u+0x00000000u; // 801738E0
  W32(c->r[31]+0x0000008Cu,c->r[1]); // 801738E4
  W8(c->r[31]+0x0000000Cu,c->r[27]); // 801738E8
  c->lr=0x801738F0u; f_80163CF0(c); // 801738EC
  W32(c->r[23]+0x00000000u,c->r[3]); // 801738F0
  c->r[0]=c->r[13]+0xFFFF8AA8u; // 801738F4
  W32(c->r[23]+0x00000004u,c->r[0]); // 801738F8
  W32(c->r[23]+0x00000008u,c->r[27]); // 801738FC
  W32(c->r[23]+0x0000000Cu,c->r[27]); // 80173900
L_80173904:;
  W32(c->r[26]+0x00000008u,c->r[23]); // 80173904
  c->r[0]=0u+0x00000000u; // 80173908
  W32(c->r[23]+0x00000008u,c->r[0]); // 8017390C
  c->r[0]=R32(c->r[26]+0x00000004u); // 80173910
  W32(c->r[26]+0x0000000Cu,c->r[0]); // 80173914
  goto L_80173924; // 80173918
L_8017391C:;
  c->r[3]=c->r[25]+0x00000694u; // 8017391C
  c->lr=0x80173924u; f_800B14B8(c); // 80173920
L_80173924:;
  c->r[26]=0u+0x00000000u; // 80173924
  W32(c->r[25]+0x000005D0u,c->r[26]); // 80173928
  c->lr=0x80173930u; f_80172694(c); // 8017392C
  c->r[4]=c->r[3]|c->r[3]; // 80173930
  c->r[3]=c->r[25]|c->r[25]; // 80173934
  c->lr=0x8017393Cu; f_80062F4C(c); // 80173938
  c->r[0]=R8(c->r[25]+0x00000010u); // 8017393C
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80173940
  c->r[3]=c->r[25]+c->r[0]; // 80173944
  c->r[23]=R32(c->r[3]+0x00000014u); // 80173948
  cmps(c,0,(int32_t)c->r[23],0); // 8017394C
  if (crb(c,2)) { goto L_80173980; } // 80173950
  W32(c->r[31]+0x00000074u,c->r[1]); // 80173954
  W8(c->r[31]+0x00000008u,c->r[26]); // 80173958
  c->lr=0x80173960u; f_80172694(c); // 8017395C
  W32(c->r[23]+0x00000000u,c->r[3]); // 80173960
  c->r[0]=c->r[13]+0xFFFF8AA4u; // 80173964
  c->r[3]=0u+0x806E0000u; // 80173968
  W32(c->r[23]+0x00000004u,c->r[0]); // 8017396C
  c->r[3]=c->r[3]+0xFFFFF990u; // 80173970
  W32(c->r[23]+0x00000008u,c->r[26]); // 80173974
  W32(c->r[23]+0x0000000Cu,c->r[26]); // 80173978
  W32(c->r[23]+0x00000010u,c->r[3]); // 8017397C
L_80173980:;
  W32(c->r[25]+0x00000008u,c->r[23]); // 80173980
  c->r[0]=0u+0x00000000u; // 80173984
  c->r[3]=c->r[25]|c->r[25]; // 80173988
  c->r[4]=c->r[23]|c->r[23]; // 8017398C
  W32(c->r[23]+0x00000008u,c->r[0]); // 80173990
  c->r[0]=R32(c->r[25]+0x00000004u); // 80173994
  W32(c->r[25]+0x0000000Cu,c->r[0]); // 80173998
  c->lr=0x801739A0u; f_8006306C(c); // 8017399C
  W32(c->r[25]+0x00000684u,c->r[23]); // 801739A0
  c->r[10]=c->r[31]|c->r[31]; // 801739A4
  {uint32_t ea=c->r[10]+0x000000C8u; psq_load(c,31,ea,0,0);} // 801739A8
  {uint32_t ea=c->r[31]+0x000000C0u; c->f[31]=RF64(ea);} // 801739AC
  c->r[11]=c->r[10]+0x000000C0u; // 801739B0
  c->lr=0x801739B8u; { c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801739B4
  c->r[10]=R32(c->r[1]+0x00000000u); // 801739B8
  c->r[0]=R32(c->r[10]+0x00000004u); // 801739BC
  c->r[1]=c->r[10]|c->r[10]; // 801739C0
  c->lr=c->r[0]; // 801739C4
  return; // 801739C8
}

// fn_801739CC
void f_801739CC(Ctx* __restrict c) {
  trace_call(0x801739CCu);
  {uint32_t ea=c->r[2]+0xFFFFBC0Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801739CC
  c->r[0]=0u+0x00000000u; // 801739D0
  {uint32_t ea=c->r[3]+0x00000000u; WF32(ea,c->f[1]);} // 801739D4
  {uint32_t ea=c->r[3]+0x00000004u; WF32(ea,c->f[0]);} // 801739D8
  W8(c->r[3]+0x00000008u,c->r[0]); // 801739DC
  return; // 801739E0
}

// fn_801739E4
void f_801739E4(Ctx* __restrict c) {
  trace_call(0x801739E4u);
  {uint32_t ea=c->r[3]+0x00000000u; WF32(ea,c->f[1]);} // 801739E4
  {uint32_t ea=c->r[3]+0x00000004u; WF32(ea,c->f[2]);} // 801739E8
  return; // 801739EC
}

// fn_801739F0
void f_801739F0(Ctx* __restrict c) {
  trace_call(0x801739F0u);
  c->r[0]=R8(c->r[13]+0xFFFFCC4Cu); // 801739F0
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 801739F4
  if (!crb(c,2)) { goto L_80173A18; } // 801739F8
  c->r[4]=R32(c->r[13]+0xFFFFBE94u); // 801739FC
  c->r[0]=0u+0x00000001u; // 80173A00
  W32(c->r[13]+0xFFFFBE98u,c->r[4]); // 80173A04
  c->r[3]=c->r[4]+0x00000001u; // 80173A08
  W32(c->r[13]+0xFFFFBE94u,c->r[3]); // 80173A0C
  W32(c->r[13]+0xFFFFCC48u,c->r[4]); // 80173A10
  W8(c->r[13]+0xFFFFCC4Cu,c->r[0]); // 80173A14
L_80173A18:;
  c->r[3]=R32(c->r[13]+0xFFFFCC48u); // 80173A18
  return; // 80173A1C
}

// fn_80173A20
void f_80173A20(Ctx* __restrict c) {
  trace_call(0x80173A20u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80173A20
  c->r[0]=c->lr; // 80173A24
  cmps(c,0,(int32_t)c->r[3],0); // 80173A28
  W32(c->r[1]+0x00000014u,c->r[0]); // 80173A2C
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 80173A30
  c->r[30]=c->r[3]|c->r[3]; // 80173A34
  c->r[31]=c->r[4]|c->r[4]; // 80173A38
  if (crb(c,2)) { goto L_80173A74; } // 80173A3C
  c->r[4]=0u+0xFFFFFFFFu; // 80173A40
  c->r[3]=c->r[3]+0x0000049Cu; // 80173A44
  c->lr=0x80173A4Cu; f_80319AC8(c); // 80173A48
  c->r[3]=c->r[30]+0x0000034Cu; // 80173A4C
  c->r[4]=0u+0xFFFFFFFFu; // 80173A50
  c->lr=0x80173A58u; f_802F02F4(c); // 80173A54
  c->r[3]=c->r[30]|c->r[30]; // 80173A58
  c->r[4]=0u+0x00000000u; // 80173A5C
  c->lr=0x80173A64u; f_8007536C(c); // 80173A60
  cmps(c,0,(int32_t)c->r[31],0); // 80173A64
  if (!crb(c,1)) { goto L_80173A74; } // 80173A68
  c->r[3]=c->r[30]|c->r[30]; // 80173A6C
  c->lr=0x80173A74u; f_8005328C(c); // 80173A70
L_80173A74:;
  c->r[3]=c->r[30]|c->r[30]; // 80173A74
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 80173A78
  c->r[0]=R32(c->r[1]+0x00000014u); // 80173A7C
  c->lr=c->r[0]; // 80173A80
  c->r[1]=c->r[1]+0x00000010u; // 80173A84
  return; // 80173A88
}

// fn_80173A8C
void f_80173A8C(Ctx* __restrict c) {
  trace_call(0x80173A8Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80173A8C
  c->r[0]=c->lr; // 80173A90
  W32(c->r[1]+0x00000034u,c->r[0]); // 80173A94
  c->r[11]=c->r[1]+0x00000030u; // 80173A98
  c->lr=0x80173AA0u; { W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80173A9C
  c->r[5]=R32(c->r[4]+0x00000060u); // 80173AA0
  c->r[29]=c->r[3]|c->r[3]; // 80173AA4
  c->r[31]=R32(c->r[4]+0x00000040u); // 80173AA8
  c->r[30]=c->r[4]|c->r[4]; // 80173AAC
  cmps(c,0,(int32_t)c->r[5],3); // 80173AB0
  if (crb(c,2)) { goto L_80173B74; } // 80173AB4
  c->r[4]=c->r[31]|c->r[31]; // 80173AB8
  c->r[3]=c->r[1]+0x00000010u; // 80173ABC
  c->lr=0x80173AC4u; f_8013E99C(c); // 80173AC0
  cmps(c,0,(int32_t)c->r[3],0); // 80173AC4
  if (crb(c,2)) { goto L_80173B24; } // 80173AC8
  cmps(c,0,(int32_t)c->r[31],0); // 80173ACC
  if (crb(c,2)) { goto L_80173B24; } // 80173AD0
  c->r[31]=c->r[30]+0x00000014u; // 80173AD4
  c->r[4]=R32(c->r[1]+0x00000010u); // 80173AD8
  {uint32_t ea=c->r[13]+0xFFFF8A30u; c->f[1]=c->ps1[1]=RF32(ea);} // 80173ADC
  c->r[3]=c->r[29]|c->r[29]; // 80173AE0
  c->r[5]=c->r[31]|c->r[31]; // 80173AE4
  c->r[6]=c->r[30]+0x00000020u; // 80173AE8
  c->lr=0x80173AF0u; f_80173B8C(c); // 80173AEC
  c->r[0]=0u+0x00000000u; // 80173AF0
  W8(c->r[1]+0x0000000Cu,c->r[0]); // 80173AF4
  c->r[3]=c->r[1]+0x0000000Cu; // 80173AF8
  c->lr=0x80173B00u; f_800474F4(c); // 80173AFC
  c->r[4]=R32(c->r[1]+0x00000018u); // 80173B00
  c->r[5]=c->r[31]|c->r[31]; // 80173B04
  {uint32_t ea=c->r[2]+0xFFFFBC10u; c->f[1]=c->ps1[1]=RF32(ea);} // 80173B08
  c->r[6]=0u+0xFFFFFFFFu; // 80173B0C
  c->r[7]=0u+0x00000000u; // 80173B10
  c->r[8]=0u+0x00000000u; // 80173B14
  c->r[9]=0u+0x00000001u; // 80173B18
  c->lr=0x80173B20u; f_8004BFE0(c); // 80173B1C
  goto L_80173B74; // 80173B20
L_80173B24:;
  c->r[31]=c->r[30]+0x00000014u; // 80173B24
  c->r[4]=0u+0x806E0000u; // 80173B28
  {uint32_t ea=c->r[13]+0xFFFF8A30u; c->f[1]=c->ps1[1]=RF32(ea);} // 80173B2C
  c->r[3]=c->r[29]|c->r[29]; // 80173B30
  c->r[5]=c->r[31]|c->r[31]; // 80173B34
  c->r[4]=c->r[4]+0xFFFFF9D4u; // 80173B38
  c->r[6]=c->r[30]+0x00000020u; // 80173B3C
  c->lr=0x80173B44u; f_80173B8C(c); // 80173B40
  c->r[0]=0u+0x00000000u; // 80173B44
  W8(c->r[1]+0x00000008u,c->r[0]); // 80173B48
  c->r[3]=c->r[1]+0x00000008u; // 80173B4C
  c->lr=0x80173B54u; f_800474F4(c); // 80173B50
  {uint32_t ea=c->r[2]+0xFFFFBC10u; c->f[1]=c->ps1[1]=RF32(ea);} // 80173B54
  c->r[5]=c->r[31]|c->r[31]; // 80173B58
  c->r[4]=c->r[13]+0xFFFF8A48u; // 80173B5C
  c->r[6]=0u+0xFFFFFFFFu; // 80173B60
  c->r[7]=0u+0x00000000u; // 80173B64
  c->r[8]=0u+0x00000000u; // 80173B68
  c->r[9]=0u+0x00000001u; // 80173B6C
  c->lr=0x80173B74u; f_8004BFE0(c); // 80173B70
L_80173B74:;
  c->r[11]=c->r[1]+0x00000030u; // 80173B74
  c->lr=0x80173B7Cu; { c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80173B78
  c->r[0]=R32(c->r[1]+0x00000034u); // 80173B7C
  c->lr=c->r[0]; // 80173B80
  c->r[1]=c->r[1]+0x00000030u; // 80173B84
  return; // 80173B88
}

// fn_80173B8C
void f_80173B8C(Ctx* __restrict c) {
  trace_call(0x80173B8Cu);
  {uint32_t ea=c->r[1]+0xFFFFFF00u; W32(ea,c->r[1]); c->r[1]=ea;} // 80173B8C
  c->r[0]=c->lr; // 80173B90
  W32(c->r[1]+0x00000104u,c->r[0]); // 80173B94
  c->r[11]=c->r[1]+0x000000E0u; // 80173B98
  {uint32_t ea=c->r[1]+0x000000F0u; WF64(ea,c->f[31]);} // 80173B9C
  {uint32_t ea=c->r[1]+0x000000F8u; psq_store(c,31,ea,0,0);} // 80173BA0
  {uint32_t ea=c->r[1]+0x000000E0u; WF64(ea,c->f[30]);} // 80173BA4
  {uint32_t ea=c->r[1]+0x000000E8u; psq_store(c,30,ea,0,0);} // 80173BA8
  c->lr=0x80173BB0u; { W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80173BAC
  c->r[0]=R8(c->r[13]+0xFFFFBB5Cu); // 80173BB0
  c->f[30]=c->f[1]; // 80173BB4
  c->r[28]=c->r[4]|c->r[4]; // 80173BB8
  c->r[29]=c->r[5]|c->r[5]; // 80173BBC
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 80173BC0
  c->r[30]=c->r[6]|c->r[6]; // 80173BC4
  if (!crb(c,2)) { goto L_80173BF8; } // 80173BC8
  c->r[31]=0u+0x80730000u; // 80173BCC
  c->r[3]=c->r[31]+0x00002598u; // 80173BD0
  c->lr=0x80173BD8u; f_80321014(c); // 80173BD4
  c->r[4]=0u+0x80320000u; // 80173BD8
  c->r[5]=0u+0x80750000u; // 80173BDC
  c->r[3]=c->r[31]+0x00002598u; // 80173BE0
  c->r[4]=c->r[4]+0x0000116Cu; // 80173BE4
  c->r[5]=c->r[5]+0x00004928u; // 80173BE8
  c->lr=0x80173BF0u; f_803A92B8(c); // 80173BEC
  c->r[0]=0u+0x00000001u; // 80173BF0
  W8(c->r[13]+0xFFFFBB5Cu,c->r[0]); // 80173BF4
L_80173BF8:;
  c->r[4]=0u+0x80730000u; // 80173BF8
  c->r[5]=c->r[28]|c->r[28]; // 80173BFC
  c->r[3]=c->r[1]+0x0000008Cu; // 80173C00
  c->r[6]=0u+0x00000001u; // 80173C04
  c->r[4]=c->r[4]+0x00002598u; // 80173C08
  c->lr=0x80173C10u; f_80321B90(c); // 80173C0C
  c->r[3]=c->r[1]+0x0000008Cu; // 80173C10
  c->lr=0x80173C18u; f_80320BEC(c); // 80173C14
  cmps(c,0,(int32_t)c->r[3],0); // 80173C18
  if (!crb(c,2)) { goto L_80173C28; } // 80173C1C
  c->r[3]=0u+0x00000000u; // 80173C20
  goto L_80173EA0; // 80173C24
L_80173C28:;
  c->r[4]=c->r[30]|c->r[30]; // 80173C28
  c->r[3]=c->r[1]+0x00000080u; // 80173C2C
  c->lr=0x80173C34u; f_8005CD7C(c); // 80173C30
  c->lr=0x80173C38u; f_8033FE4C(c); // 80173C34
  c->r[4]=c->r[1]+0x00000044u; // 80173C38
  {uint32_t ea=c->r[3]+0x00000138u; psq_load(c,1,ea,0,0);} // 80173C3C
  {uint32_t ea=c->r[3]+0x0000012Cu; psq_load(c,0,ea,0,0);} // 80173C40
  {double t0=S(c->f[1]-c->f[0]), t1=S(c->ps1[1]-c->ps1[0]); c->f[0]=t0; c->ps1[0]=t1;} // 80173C44
  {uint32_t ea=c->r[4]+0x00000000u; psq_store(c,0,ea,0,0);} // 80173C48
  {uint32_t ea=c->r[3]+0x00000140u; psq_load(c,1,ea,1,0);} // 80173C4C
  {uint32_t ea=c->r[3]+0x00000134u; psq_load(c,0,ea,1,0);} // 80173C50
  {double t0=S(c->f[1]-c->f[0]), t1=S(c->ps1[1]-c->ps1[0]); c->f[0]=t0; c->ps1[0]=t1;} // 80173C54
  {uint32_t ea=c->r[4]+0x00000008u; psq_store(c,0,ea,1,0);} // 80173C58
  c->r[5]=0u+0x806A0000u; // 80173C5C
  c->r[3]=c->r[1]+0x00000050u; // 80173C60
  c->r[5]=c->r[5]+0x00000AA8u; // 80173C64
  c->lr=0x80173C6Cu; f_8030E0BC(c); // 80173C68
  c->r[3]=c->r[1]+0x00000050u; // 80173C6C
  c->r[4]=c->r[1]+0x00000038u; // 80173C70
  {uint32_t ea=c->r[3]+0x00000000u; psq_load(c,0,ea,0,0);} // 80173C74
  {double t0=-c->f[0], t1=-c->ps1[0]; c->f[0]=t0; c->ps1[0]=t1;} // 80173C78
  {uint32_t ea=c->r[4]+0x00000000u; psq_store(c,0,ea,0,0);} // 80173C7C
  {uint32_t ea=c->r[3]+0x00000008u; psq_load(c,0,ea,1,0);} // 80173C80
  {double t0=-c->f[0], t1=-c->ps1[0]; c->f[0]=t0; c->ps1[0]=t1;} // 80173C84
  {uint32_t ea=c->r[4]+0x00000008u; psq_store(c,0,ea,1,0);} // 80173C88
  c->r[3]=c->r[1]+0x0000005Cu; // 80173C8C
  c->lr=0x80173C94u; f_8005CD7C(c); // 80173C90
  c->r[3]=c->r[1]+0x0000005Cu; // 80173C94
  c->r[4]=c->r[1]+0x0000002Cu; // 80173C98
  {uint32_t ea=c->r[3]+0x00000000u; psq_load(c,0,ea,0,0);} // 80173C9C
  {double t0=S(c->f[0]*c->f[30]), t1=S(c->ps1[0]*c->f[30]); c->f[0]=t0; c->ps1[0]=t1;} // 80173CA0
  {uint32_t ea=c->r[4]+0x00000000u; psq_store(c,0,ea,0,0);} // 80173CA4
  {uint32_t ea=c->r[3]+0x00000008u; psq_load(c,0,ea,1,0);} // 80173CA8
  {double t0=S(c->f[0]*c->f[30]), t1=S(c->ps1[0]*c->f[30]); c->f[0]=t0; c->ps1[0]=t1;} // 80173CAC
  {uint32_t ea=c->r[4]+0x00000008u; psq_store(c,0,ea,1,0);} // 80173CB0
  c->r[3]=c->r[1]+0x00000068u; // 80173CB4
  c->lr=0x80173CBCu; f_8005CD7C(c); // 80173CB8
  c->r[3]=c->r[1]+0x00000068u; // 80173CBC
  c->r[4]=c->r[1]+0x00000074u; // 80173CC0
  {uint32_t ea=c->r[29]+0x00000000u; psq_load(c,0,ea,0,0);} // 80173CC4
  {uint32_t ea=c->r[3]+0x00000000u; psq_load(c,1,ea,0,0);} // 80173CC8
  {double t0=S(c->f[0]+c->f[1]), t1=S(c->ps1[0]+c->ps1[1]); c->f[0]=t0; c->ps1[0]=t1;} // 80173CCC
  {uint32_t ea=c->r[4]+0x00000000u; psq_store(c,0,ea,0,0);} // 80173CD0
  {uint32_t ea=c->r[29]+0x00000008u; psq_load(c,0,ea,1,0);} // 80173CD4
  {uint32_t ea=c->r[3]+0x00000008u; psq_load(c,1,ea,1,0);} // 80173CD8
  {double t0=S(c->f[0]+c->f[1]), t1=S(c->ps1[0]+c->ps1[1]); c->f[0]=t0; c->ps1[0]=t1;} // 80173CDC
  {uint32_t ea=c->r[4]+0x00000008u; psq_store(c,0,ea,1,0);} // 80173CE0
  c->r[4]=0u+0x80760000u; // 80173CE4
  c->r[4]=c->r[4]+0xFFFF9C9Cu; // 80173CE8
  c->r[3]=c->r[1]+0x00000080u; // 80173CEC
  {uint32_t ea=c->r[2]+0xFFFFBC2Cu; c->f[31]=c->ps1[31]=RF32(ea);} // 80173CF0
  {uint32_t ea=c->r[3]+0x00000004u; psq_load(c,30,ea,0,0);} // 80173CF4
  {uint32_t ea=c->r[4]+0x00000004u; psq_load(c,0,ea,0,0);} // 80173CF8
  {double t0=S(c->f[30]*c->f[0]), t1=S(c->ps1[30]*c->ps1[0]); c->f[0]=t0; c->ps1[0]=t1;} // 80173CFC
  {uint32_t ea=c->r[1]+0x00000080u; c->f[30]=c->ps1[30]=RF32(ea);} // 80173D00
  {double t0=S(c->f[0]+c->ps1[0]), t1=S(c->ps1[30]); c->f[0]=t0; c->ps1[0]=t1;} // 80173D04
  {uint32_t ea=c->r[4]+0x00000000u; c->f[30]=c->ps1[30]=RF32(ea);} // 80173D08
  {double t0=S(std::fma(c->f[30],c->ps1[0],c->f[0])), t1=S(std::fma(c->ps1[30],c->ps1[0],c->ps1[0])); c->f[30]=t0; c->ps1[30]=t1;} // 80173D0C
  {uint32_t ea=c->r[2]+0xFFFFBC10u; c->f[0]=c->ps1[0]=RF32(ea);} // 80173D10
  fcmp(c,0,c->f[30],c->f[0]); // 80173D14
  if (!crb(c,1)) { goto L_80173D24; } // 80173D18
  c->f[30]=c->f[0]; // 80173D1C
  goto L_80173D34; // 80173D20
L_80173D24:;
  {uint32_t ea=c->r[2]+0xFFFFBC30u; c->f[0]=c->ps1[0]=RF32(ea);} // 80173D24
  fcmp(c,0,c->f[30],c->f[0]); // 80173D28
  if (!crb(c,0)) { goto L_80173D34; } // 80173D2C
  c->f[30]=c->f[0]; // 80173D30
L_80173D34:;
  {uint32_t ea=c->r[2]+0xFFFFBC10u; c->f[0]=c->ps1[0]=RF32(ea);} // 80173D34
  c->r[0]=0u+0x00000000u; // 80173D38
  fcmp(c,0,c->f[30],c->f[0]); // 80173D3C
  setcrb(c,2,crb(c,0)|crb(c,2)); // 80173D40
  if (!crb(c,2)) { goto L_80173D5C; } // 80173D44
  {uint32_t ea=c->r[2]+0xFFFFBC30u; c->f[0]=c->ps1[0]=RF32(ea);} // 80173D48
  fcmp(c,0,c->f[30],c->f[0]); // 80173D4C
  setcrb(c,2,crb(c,1)|crb(c,2)); // 80173D50
  if (!crb(c,2)) { goto L_80173D5C; } // 80173D54
  c->r[0]=0u+0x00000001u; // 80173D58
L_80173D5C:;
  cmps(c,0,(int32_t)c->r[0],0); // 80173D5C
  if (!crb(c,2)) { goto L_80173D80; } // 80173D60
  c->r[3]=0u+0x806D0000u; // 80173D64
  c->r[5]=0u+0x806D0000u; // 80173D68
  c->r[3]=c->r[3]+0xFFFFE414u; // 80173D6C
  c->r[4]=0u+0x000000EFu; // 80173D70
  c->r[5]=c->r[5]+0xFFFFE3ECu; // 80173D74
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80173D78
  c->lr=0x80173D80u; f_80484708(c); // 80173D7C
L_80173D80:;
  c->f[1]=c->f[30]; // 80173D80
  c->lr=0x80173D88u; f_803BA740(c); // 80173D84
  c->f[0]=c->ps1[0]=S(c->f[1]); // 80173D88
  fcmp(c,0,c->f[0],c->f[31]); // 80173D8C
  c->r[0]=c->cr; // 80173D90
  c->r[0]=rotl(c->r[0],2)&0x00000001u; cr0(c,c->r[0]); // 80173D94
  if (!crb(c,2)) { goto L_80173DBC; } // 80173D98
  c->r[4]=0u+0x80760000u; // 80173D9C
  c->r[3]=c->r[4]+0xFFFF9CA8u; // 80173DA0
  {uint32_t ea=c->r[4]+0xFFFF9CA8u; c->f[2]=c->ps1[2]=RF32(ea);} // 80173DA4
  {uint32_t ea=c->r[3]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 80173DA8
  {uint32_t ea=c->r[3]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 80173DAC
  {uint32_t ea=c->r[1]+0x00000080u; WF32(ea,c->f[2]);} // 80173DB0
  {uint32_t ea=c->r[1]+0x00000084u; WF32(ea,c->f[1]);} // 80173DB4
  {uint32_t ea=c->r[1]+0x00000088u; WF32(ea,c->f[0]);} // 80173DB8
L_80173DBC:;
  c->r[0]=R8(c->r[13]+0xFFFFBCC0u); // 80173DBC
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 80173DC0
  if (!crb(c,2)) { goto L_80173DE8; } // 80173DC4
  {uint32_t ea=c->r[2]+0xFFFFBC0Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 80173DC8
  c->r[3]=0u+0x80740000u; // 80173DCC
  {uint32_t ea=c->r[2]+0xFFFFBC10u; c->f[2]=c->ps1[2]=RF32(ea);} // 80173DD0
  c->r[3]=c->r[3]+0x00007490u; // 80173DD4
  c->f[3]=c->f[1]; // 80173DD8
  c->lr=0x80173DE0u; f_8005FD70(c); // 80173DDC
  c->r[0]=0u+0x00000001u; // 80173DE0
  W8(c->r[13]+0xFFFFBCC0u,c->r[0]); // 80173DE4
L_80173DE8:;
  c->r[31]=0u+0x806A0000u; // 80173DE8
  c->r[3]=c->r[1]+0x00000008u; // 80173DEC
  c->r[4]=c->r[1]+0x00000080u; // 80173DF0
  c->r[5]=c->r[31]+0x00000AA8u; // 80173DF4
  c->lr=0x80173DFCu; f_8030E0BC(c); // 80173DF8
  c->r[3]=0u+0x80740000u; // 80173DFC
  c->r[4]=c->r[1]+0x00000014u; // 80173E00
  c->r[3]=c->r[3]+0x00007490u; // 80173E04
  c->r[5]=c->r[1]+0x00000008u; // 80173E08
  c->lr=0x80173E10u; f_8005FE58(c); // 80173E0C
  c->r[3]=c->r[1]+0x00000014u; // 80173E10
  c->r[5]=c->r[31]+0x00000AA8u; // 80173E14
  c->r[4]=c->r[3]|c->r[3]; // 80173E18
  c->lr=0x80173E20u; f_8030E0BC(c); // 80173E1C
  c->r[3]=c->r[1]+0x00000008u; // 80173E20
  c->r[4]=c->r[1]+0x00000020u; // 80173E24
  c->r[5]=c->r[1]+0x00000014u; // 80173E28
  c->lr=0x80173E30u; f_8005FE58(c); // 80173E2C
  {uint32_t ea=c->r[2]+0xFFFFBC0Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80173E30
  c->r[3]=c->r[1]+0x0000008Cu; // 80173E34
  {uint32_t ea=c->r[1]+0x00000014u; c->f[9]=c->ps1[9]=RF32(ea);} // 80173E38
  c->r[4]=c->r[1]+0x00000074u; // 80173E3C
  {uint32_t ea=c->r[1]+0x00000018u; c->f[8]=c->ps1[8]=RF32(ea);} // 80173E40
  {uint32_t ea=c->r[1]+0x0000001Cu; c->f[7]=c->ps1[7]=RF32(ea);} // 80173E44
  {uint32_t ea=c->r[1]+0x00000020u; c->f[6]=c->ps1[6]=RF32(ea);} // 80173E48
  {uint32_t ea=c->r[1]+0x00000024u; c->f[5]=c->ps1[5]=RF32(ea);} // 80173E4C
  {uint32_t ea=c->r[1]+0x00000028u; c->f[4]=c->ps1[4]=RF32(ea);} // 80173E50
  {uint32_t ea=c->r[1]+0x00000008u; c->f[3]=c->ps1[3]=RF32(ea);} // 80173E54
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 80173E58
  {uint32_t ea=c->r[1]+0x00000010u; c->f[1]=c->ps1[1]=RF32(ea);} // 80173E5C
  {uint32_t ea=c->r[1]+0x0000008Cu; WF32(ea,c->f[9]);} // 80173E60
  {uint32_t ea=c->r[1]+0x0000009Cu; WF32(ea,c->f[8]);} // 80173E64
  {uint32_t ea=c->r[1]+0x000000ACu; WF32(ea,c->f[7]);} // 80173E68
  {uint32_t ea=c->r[1]+0x00000090u; WF32(ea,c->f[6]);} // 80173E6C
  {uint32_t ea=c->r[1]+0x000000A0u; WF32(ea,c->f[5]);} // 80173E70
  {uint32_t ea=c->r[1]+0x000000B0u; WF32(ea,c->f[4]);} // 80173E74
  {uint32_t ea=c->r[1]+0x00000094u; WF32(ea,c->f[3]);} // 80173E78
  {uint32_t ea=c->r[1]+0x000000A4u; WF32(ea,c->f[2]);} // 80173E7C
  {uint32_t ea=c->r[1]+0x000000B4u; WF32(ea,c->f[1]);} // 80173E80
  {uint32_t ea=c->r[1]+0x00000098u; WF32(ea,c->f[0]);} // 80173E84
  {uint32_t ea=c->r[1]+0x000000A8u; WF32(ea,c->f[0]);} // 80173E88
  {uint32_t ea=c->r[1]+0x000000B8u; WF32(ea,c->f[0]);} // 80173E8C
  c->lr=0x80173E94u; f_8005CDC8(c); // 80173E90
  c->r[3]=c->r[1]+0x0000008Cu; // 80173E94
  c->lr=0x80173E9Cu; f_80320A28(c); // 80173E98
  c->r[3]=0u+0x00000001u; // 80173E9C
L_80173EA0:;
  c->r[11]=c->r[1]+0x000000E0u; // 80173EA0
  {uint32_t ea=c->r[1]+0x000000F8u; psq_load(c,31,ea,0,0);} // 80173EA4
  {uint32_t ea=c->r[1]+0x000000F0u; c->f[31]=RF64(ea);} // 80173EA8
  {uint32_t ea=c->r[1]+0x000000E8u; psq_load(c,30,ea,0,0);} // 80173EAC
  {uint32_t ea=c->r[1]+0x000000E0u; c->f[30]=RF64(ea);} // 80173EB0
  c->lr=0x80173EB8u; { c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80173EB4
  c->r[0]=R32(c->r[1]+0x00000104u); // 80173EB8
  c->lr=c->r[0]; // 80173EBC
  c->r[1]=c->r[1]+0x00000100u; // 80173EC0
  return; // 80173EC4
}

// fn_80173EC8
void f_80173EC8(Ctx* __restrict c) {
  trace_call(0x80173EC8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80173EC8
  c->r[0]=c->lr; // 80173ECC
  c->r[4]=0u+0x806E0000u; // 80173ED0
  {uint32_t ea=c->r[2]+0xFFFFBC0Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 80173ED4
  W32(c->r[1]+0x00000014u,c->r[0]); // 80173ED8
  c->r[4]=c->r[4]+0xFFFFF9C0u; // 80173EDC
  {uint32_t ea=c->r[2]+0xFFFFBC34u; c->f[2]=c->ps1[2]=RF32(ea);} // 80173EE0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80173EE4
  c->r[31]=c->r[3]|c->r[3]; // 80173EE8
  {uint32_t ea=c->r[2]+0xFFFFBC10u; c->f[3]=c->ps1[3]=RF32(ea);} // 80173EEC
  c->r[3]=c->r[3]+0x0000034Cu; // 80173EF0
  c->lr=0x80173EF8u; f_802E8A64(c); // 80173EF4
  c->r[3]=c->r[31]|c->r[31]; // 80173EF8
  c->lr=0x80173F00u; f_800E7CCC(c); // 80173EFC
  c->r[0]=R32(c->r[1]+0x00000014u); // 80173F00
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80173F04
  c->lr=c->r[0]; // 80173F08
  c->r[1]=c->r[1]+0x00000010u; // 80173F0C
  return; // 80173F10
}

// fn_80173F14
void f_80173F14(Ctx* __restrict c) {
  trace_call(0x80173F14u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80173F14
  c->r[0]=c->lr; // 80173F18
  c->r[4]=0u+0x806E0000u; // 80173F1C
  {uint32_t ea=c->r[2]+0xFFFFBC0Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 80173F20
  W32(c->r[1]+0x00000014u,c->r[0]); // 80173F24
  c->r[4]=c->r[4]+0xFFFFF9ACu; // 80173F28
  {uint32_t ea=c->r[2]+0xFFFFBC34u; c->f[2]=c->ps1[2]=RF32(ea);} // 80173F2C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80173F30
  c->r[31]=c->r[3]|c->r[3]; // 80173F34
  {uint32_t ea=c->r[2]+0xFFFFBC10u; c->f[3]=c->ps1[3]=RF32(ea);} // 80173F38
  c->r[3]=c->r[3]+0x0000034Cu; // 80173F3C
  c->lr=0x80173F44u; f_802E8A64(c); // 80173F40
  c->r[3]=c->r[31]|c->r[31]; // 80173F44
  c->lr=0x80173F4Cu; f_800E7CCC(c); // 80173F48
  c->r[0]=R32(c->r[1]+0x00000014u); // 80173F4C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80173F50
  c->lr=c->r[0]; // 80173F54
  c->r[1]=c->r[1]+0x00000010u; // 80173F58
  return; // 80173F5C
}

// fn_80173F60
void f_80173F60(Ctx* __restrict c) {
  trace_call(0x80173F60u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80173F60
  c->r[0]=c->lr; // 80173F64
  c->r[4]=0u+0x806E0000u; // 80173F68
  {uint32_t ea=c->r[2]+0xFFFFBC0Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 80173F6C
  W32(c->r[1]+0x00000014u,c->r[0]); // 80173F70
  c->r[4]=c->r[4]+0xFFFFF9A0u; // 80173F74
  {uint32_t ea=c->r[2]+0xFFFFBC34u; c->f[2]=c->ps1[2]=RF32(ea);} // 80173F78
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80173F7C
  c->r[31]=c->r[3]|c->r[3]; // 80173F80
  {uint32_t ea=c->r[2]+0xFFFFBC10u; c->f[3]=c->ps1[3]=RF32(ea);} // 80173F84
  c->r[3]=c->r[3]+0x0000034Cu; // 80173F88
  c->lr=0x80173F90u; f_802E8A64(c); // 80173F8C
  c->r[3]=c->r[31]|c->r[31]; // 80173F90
  c->lr=0x80173F98u; f_800E7CCC(c); // 80173F94
  c->r[0]=R32(c->r[1]+0x00000014u); // 80173F98
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80173F9C
  c->lr=c->r[0]; // 80173FA0
  c->r[1]=c->r[1]+0x00000010u; // 80173FA4
  return; // 80173FA8
}

// fn_80173FAC
void f_80173FAC(Ctx* __restrict c) {
  trace_call(0x80173FACu);
  return; // 80173FAC
}

// fn_80173FB0
void f_80173FB0(Ctx* __restrict c) {
  trace_call(0x80173FB0u);
  {uint32_t ea=c->r[1]+0xFFFFFF80u; W32(ea,c->r[1]); c->r[1]=ea;} // 80173FB0
  c->r[0]=c->lr; // 80173FB4
  W32(c->r[1]+0x00000084u,c->r[0]); // 80173FB8
  c->r[11]=c->r[1]+0x00000080u; // 80173FBC
  c->lr=0x80173FC4u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80173FC0
  c->r[31]=c->r[1]|c->r[1]; // 80173FC4
  {uint32_t ea=c->r[2]+0xFFFFBC38u; c->f[1]=c->ps1[1]=RF32(ea);} // 80173FC8
  c->r[30]=c->r[3]|c->r[3]; // 80173FCC
  {uint32_t ea=c->r[2]+0xFFFFBC3Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 80173FD0
  c->r[3]=c->r[31]+0x0000000Cu; // 80173FD4
  {uint32_t ea=c->r[2]+0xFFFFBC40u; c->f[3]=c->ps1[3]=RF32(ea);} // 80173FD8
  c->lr=0x80173FE0u; f_8005FD70(c); // 80173FDC
  {uint32_t ea=c->r[2]+0xFFFFBC0Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 80173FE0
  c->r[3]=c->r[31]+0x00000030u; // 80173FE4
  c->f[2]=c->f[1]; // 80173FE8
  c->f[3]=c->f[1]; // 80173FEC
  c->lr=0x80173FF4u; f_804E18A0(c); // 80173FF0
  c->r[3]=c->r[31]+0x00000030u; // 80173FF4
  c->r[4]=c->r[31]+0x0000000Cu; // 80173FF8
  c->lr=0x80174000u; f_8005CDC8(c); // 80173FFC
  c->r[27]=c->r[30]+0x000000FCu; // 80174000
  c->r[4]=c->r[31]+0x00000030u; // 80174004
  c->r[3]=c->r[27]|c->r[27]; // 80174008
  c->lr=0x80174010u; f_80078164(c); // 8017400C
  c->r[12]=R32(c->r[27]+0x00000000u); // 80174010
  c->r[3]=c->r[27]|c->r[27]; // 80174014
  c->r[4]=c->r[30]+0x0000034Cu; // 80174018
  c->r[5]=0u+0x00000001u; // 8017401C
  c->r[12]=R32(c->r[12]+0x00000040u); // 80174020
  c->ctr=c->r[12]; // 80174024
  if (true) { c->lr=0x8017402Cu; dispatch(c,c->ctr); } // 80174028
  c->r[12]=R32(c->r[27]+0x00000000u); // 8017402C
  c->r[3]=c->r[27]|c->r[27]; // 80174030
  c->r[4]=c->r[30]+0x0000049Cu; // 80174034
  c->r[5]=0u+0x00000001u; // 80174038
  c->r[12]=R32(c->r[12]+0x00000040u); // 8017403C
  c->ctr=c->r[12]; // 80174040
  if (true) { c->lr=0x80174048u; dispatch(c,c->ctr); } // 80174044
  c->r[3]=0u+0x00000154u; // 80174048
  c->lr=0x80174050u; f_8007C17C(c); // 8017404C
  cmps(c,0,(int32_t)c->r[3],0); // 80174050
  c->r[29]=c->r[3]|c->r[3]; // 80174054
  if (crb(c,2)) { goto L_801740AC; } // 80174058
  c->r[28]=c->r[29]|c->r[29]; // 8017405C
  c->lr=0x80174064u; f_8035712C(c); // 80174060
  c->r[4]=0u+0x806D0000u; // 80174064
  c->r[3]=c->r[29]+0x00000044u; // 80174068
  c->r[4]=c->r[4]+0x000060D0u; // 8017406C
  W32(c->r[29]+0x00000000u,c->r[4]); // 80174070
  c->r[0]=c->r[4]+0x00000018u; // 80174074
  W32(c->r[29]+0x00000024u,c->r[0]); // 80174078
  c->lr=0x80174080u; f_80095C14(c); // 8017407C
  c->r[0]=R8(c->r[13]+0xFFFFBD60u); // 80174080
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 80174084
  if (!crb(c,2)) { goto L_801740A4; } // 80174088
  c->r[3]=R32(c->r[13]+0xFFFFBCB0u); // 8017408C
  c->r[0]=0u+0x00000001u; // 80174090
  W32(c->r[13]+0xFFFFBD5Cu,c->r[3]); // 80174094
  c->r[3]=c->r[3]+0x00000001u; // 80174098
  W32(c->r[13]+0xFFFFBCB0u,c->r[3]); // 8017409C
  W8(c->r[13]+0xFFFFBD60u,c->r[0]); // 801740A0
L_801740A4:;
  c->r[0]=R32(c->r[13]+0xFFFFBD5Cu); // 801740A4
  W32(c->r[29]+0x00000028u,c->r[0]); // 801740A8
L_801740AC:;
  c->r[12]=R32(c->r[27]+0x00000000u); // 801740AC
  c->r[3]=c->r[27]|c->r[27]; // 801740B0
  c->r[4]=c->r[29]|c->r[29]; // 801740B4
  c->r[5]=0u+0x00000001u; // 801740B8
  c->r[12]=R32(c->r[12]+0x00000040u); // 801740BC
  c->ctr=c->r[12]; // 801740C0
  if (true) { c->lr=0x801740C8u; dispatch(c,c->ctr); } // 801740C4
  c->r[12]=R32(c->r[29]+0x00000000u); // 801740C8
  c->r[3]=c->r[29]|c->r[29]; // 801740CC
  c->r[4]=0u+0xFFFFFFFFu; // 801740D0
  c->r[5]=0u+0x00000000u; // 801740D4
  c->r[12]=R32(c->r[12]+0x00000054u); // 801740D8
  c->ctr=c->r[12]; // 801740DC
  if (true) { c->lr=0x801740E4u; dispatch(c,c->ctr); } // 801740E0
  c->r[12]=R32(c->r[29]+0x00000000u); // 801740E4
  c->r[3]=c->r[29]|c->r[29]; // 801740E8
  c->r[4]=c->r[13]+0xFFFF8A40u; // 801740EC
  c->r[12]=R32(c->r[12]+0x00000060u); // 801740F0
  c->ctr=c->r[12]; // 801740F4
  if (true) { c->lr=0x801740FCu; dispatch(c,c->ctr); } // 801740F8
  c->r[3]=0u+0x00000480u; // 801740FC
  c->lr=0x80174104u; f_8007C17C(c); // 80174100
  cmps(c,0,(int32_t)c->r[3],0); // 80174104
  c->r[28]=c->r[3]|c->r[3]; // 80174108
  if (crb(c,2)) { goto L_80174118; } // 8017410C
  c->r[4]=0u+0x00000000u; // 80174110
  c->lr=0x80174118u; f_8034EC80(c); // 80174114
L_80174118:;
  c->r[12]=R32(c->r[27]+0x00000000u); // 80174118
  c->r[3]=c->r[27]|c->r[27]; // 8017411C
  c->r[4]=c->r[28]|c->r[28]; // 80174120
  c->r[5]=0u+0x00000001u; // 80174124
  c->r[12]=R32(c->r[12]+0x00000040u); // 80174128
  c->ctr=c->r[12]; // 8017412C
  if (true) { c->lr=0x80174134u; dispatch(c,c->ctr); } // 80174130
  c->r[3]=c->r[28]|c->r[28]; // 80174134
  c->r[4]=c->r[13]+0xFFFF8A38u; // 80174138
  c->lr=0x80174140u; f_8034F3E0(c); // 8017413C
  c->r[4]=0u+0x00000000u; // 80174140
  c->r[3]=c->r[29]+0x00000044u; // 80174144
  c->r[5]=c->r[4]|c->r[4]; // 80174148
  c->lr=0x80174150u; f_80095D28(c); // 8017414C
  c->r[3]=c->r[29]+0x00000044u; // 80174150
  c->r[4]=0u+0x00000001u; // 80174154
  c->r[5]=0u+0x00000000u; // 80174158
  c->lr=0x80174160u; f_80095D28(c); // 8017415C
  c->r[0]=R8(c->r[30]+0x00000010u); // 80174160
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80174164
  c->r[3]=c->r[30]+c->r[0]; // 80174168
  c->r[28]=R32(c->r[3]+0x00000014u); // 8017416C
  cmps(c,0,(int32_t)c->r[28],0); // 80174170
  if (crb(c,2)) { goto L_8017419C; } // 80174174
  c->r[29]=0u+0x00000000u; // 80174178
  W32(c->r[31]+0x0000002Cu,c->r[1]); // 8017417C
  W8(c->r[31]+0x00000008u,c->r[29]); // 80174180
  c->lr=0x80174188u; f_80062E5C(c); // 80174184
  W32(c->r[28]+0x00000000u,c->r[3]); // 80174188
  c->r[0]=c->r[13]+0xFFFF80CCu; // 8017418C
  W32(c->r[28]+0x00000004u,c->r[0]); // 80174190
  W32(c->r[28]+0x00000008u,c->r[29]); // 80174194
  W32(c->r[28]+0x0000000Cu,c->r[29]); // 80174198
L_8017419C:;
  W32(c->r[30]+0x00000008u,c->r[28]); // 8017419C
  c->r[0]=0u+0x00000000u; // 801741A0
  c->r[10]=c->r[31]|c->r[31]; // 801741A4
  W32(c->r[28]+0x00000008u,c->r[0]); // 801741A8
  c->r[11]=c->r[10]+0x00000080u; // 801741AC
  c->r[0]=R32(c->r[30]+0x00000004u); // 801741B0
  W32(c->r[30]+0x0000000Cu,c->r[0]); // 801741B4
  c->lr=0x801741BCu; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801741B8
  c->r[10]=R32(c->r[1]+0x00000000u); // 801741BC
  c->r[0]=R32(c->r[10]+0x00000004u); // 801741C0
  c->r[1]=c->r[10]|c->r[10]; // 801741C4
  c->lr=c->r[0]; // 801741C8
  return; // 801741CC
}

// fn_801741D0
void f_801741D0(Ctx* __restrict c) {
  trace_call(0x801741D0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801741D0
  c->r[0]=c->lr; // 801741D4
  W32(c->r[1]+0x00000024u,c->r[0]); // 801741D8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801741DC
  c->r[31]=c->r[3]|c->r[3]; // 801741E0
  c->r[4]=R32(c->r[3]+0x00000004u); // 801741E4
  cmps(c,0,(int32_t)c->r[4],0); // 801741E8
  if (crb(c,2)) { goto L_801741F8; } // 801741EC
  c->r[0]=R32(c->r[4]+0x00000008u); // 801741F0
  goto L_801741FC; // 801741F4
L_801741F8:;
  c->r[0]=0u+0x00000000u; // 801741F8
L_801741FC:;
  cmps(c,0,(int32_t)c->r[0],0); // 801741FC
  if (!crb(c,2)) { goto L_80174258; } // 80174200
  c->r[4]=0u+0x80690000u; // 80174204
  c->r[5]=0u+0x00000001u; // 80174208
  c->r[4]=c->r[4]+0x00001598u; // 8017420C
  c->r[0]=0u+0x00000000u; // 80174210
  W32(c->r[3]+0x000005C8u,c->r[5]); // 80174214
  c->r[4]=c->r[4]+0x000000A4u; // 80174218
  {uint32_t ea=c->r[2]+0xFFFFBC10u; c->f[1]=c->ps1[1]=RF32(ea);} // 8017421C
  W32(c->r[3]+0x000005CCu,c->r[0]); // 80174220
  c->r[3]=c->r[3]+0x000005DCu; // 80174224
  {uint32_t ea=c->r[2]+0xFFFFBC0Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 80174228
  {uint32_t ea=c->r[2]+0xFFFFBC34u; c->f[3]=c->ps1[3]=RF32(ea);} // 8017422C
  c->lr=0x80174234u; f_800E24D0(c); // 80174230
  c->r[4]=0u+0x00010000u; // 80174234
  c->r[3]=c->r[31]|c->r[31]; // 80174238
  c->r[4]=c->r[4]+0xFFFFE678u; // 8017423C
  c->r[5]=0u+0x00000001u; // 80174240
  c->lr=0x80174248u; f_80064744(c); // 80174244
  c->r[3]=c->r[31]|c->r[31]; // 80174248
  c->r[4]=0u+0x00000001u; // 8017424C
  c->r[5]=0u+0x00000001u; // 80174250
  c->lr=0x80174258u; f_800D5F20(c); // 80174254
L_80174258:;
  {uint32_t ea=c->r[2]+0xFFFFBC44u; c->f[1]=c->ps1[1]=RF32(ea);} // 80174258
  c->r[3]=c->r[31]+0x000005DCu; // 8017425C
  c->lr=0x80174264u; f_800E2B50(c); // 80174260
  cmps(c,0,(int32_t)c->r[3],0); // 80174264
  if (crb(c,2)) { goto L_8017429C; } // 80174268
  c->r[0]=0u+0x00000000u; // 8017426C
  W8(c->r[1]+0x00000008u,c->r[0]); // 80174270
  c->r[3]=c->r[1]+0x00000008u; // 80174274
  c->lr=0x8017427Cu; f_800462D8(c); // 80174278
  c->r[4]=0u+0x00000001u; // 8017427C
  c->lr=0x80174284u; f_800EA1A0(c); // 80174280
  c->r[0]=0u+0x00000002u; // 80174284
  W32(c->r[31]+0x000005C8u,c->r[0]); // 80174288
  c->r[3]=c->r[31]|c->r[31]; // 8017428C
  c->r[4]=0u+0x00000001u; // 80174290
  c->r[5]=0u+0x00000000u; // 80174294
  c->lr=0x8017429Cu; f_800D5F20(c); // 80174298
L_8017429C:;
  c->r[3]=c->r[31]+0x000005DCu; // 8017429C
  c->lr=0x801742A4u; f_800E2B1C(c); // 801742A0
  cmps(c,0,(int32_t)c->r[3],0); // 801742A4
  if (crb(c,2)) { goto L_801742C0; } // 801742A8
  c->r[0]=0u+0x00000000u; // 801742AC
  W32(c->r[31]+0x000005D0u,c->r[0]); // 801742B0
  c->r[3]=c->r[31]|c->r[31]; // 801742B4
  c->lr=0x801742BCu; f_801742D4(c); // 801742B8
  W32(c->r[31]+0x00000684u,c->r[3]); // 801742BC
L_801742C0:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801742C0
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801742C4
  c->lr=c->r[0]; // 801742C8
  c->r[1]=c->r[1]+0x00000020u; // 801742CC
  return; // 801742D0
}

// fn_801742D4
void f_801742D4(Ctx* __restrict c) {
  trace_call(0x801742D4u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801742D4
  c->r[0]=c->lr; // 801742D8
  W32(c->r[1]+0x00000044u,c->r[0]); // 801742DC
  {uint32_t ea=c->r[1]+0x00000030u; for(int i=28;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 801742E0
  c->r[31]=c->r[1]|c->r[1]; // 801742E4
  c->r[28]=c->r[3]|c->r[3]; // 801742E8
  c->lr=0x801742F0u; f_80172660(c); // 801742EC
  c->r[4]=c->r[3]|c->r[3]; // 801742F0
  c->r[3]=c->r[28]|c->r[28]; // 801742F4
  c->lr=0x801742FCu; f_80062F4C(c); // 801742F8
  c->r[0]=R8(c->r[28]+0x00000010u); // 801742FC
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80174300
  c->r[3]=c->r[28]+c->r[0]; // 80174304
  c->r[29]=R32(c->r[3]+0x00000014u); // 80174308
  cmps(c,0,(int32_t)c->r[29],0); // 8017430C
  if (crb(c,2)) { goto L_80174344; } // 80174310
  c->r[30]=0u+0x00000000u; // 80174314
  W32(c->r[31]+0x00000024u,c->r[1]); // 80174318
  W8(c->r[31]+0x00000008u,c->r[30]); // 8017431C
  c->lr=0x80174324u; f_80172660(c); // 80174320
  W32(c->r[29]+0x00000000u,c->r[3]); // 80174324
  c->r[0]=c->r[13]+0xFFFF8AA0u; // 80174328
  c->r[3]=0u+0x806E0000u; // 8017432C
  W32(c->r[29]+0x00000004u,c->r[0]); // 80174330
  c->r[3]=c->r[3]+0xFFFFF980u; // 80174334
  W32(c->r[29]+0x00000008u,c->r[30]); // 80174338
  W32(c->r[29]+0x0000000Cu,c->r[30]); // 8017433C
  W32(c->r[29]+0x00000010u,c->r[3]); // 80174340
L_80174344:;
  W32(c->r[28]+0x00000008u,c->r[29]); // 80174344
  c->r[0]=0u+0x00000000u; // 80174348
  c->r[3]=c->r[28]|c->r[28]; // 8017434C
  c->r[4]=c->r[29]|c->r[29]; // 80174350
  W32(c->r[29]+0x00000008u,c->r[0]); // 80174354
  c->r[0]=R32(c->r[28]+0x00000004u); // 80174358
  W32(c->r[28]+0x0000000Cu,c->r[0]); // 8017435C
  c->lr=0x80174364u; f_8006306C(c); // 80174360
  c->r[10]=c->r[31]|c->r[31]; // 80174364
  c->r[3]=c->r[29]|c->r[29]; // 80174368
  {uint32_t ea=c->r[10]+0x00000030u; for(int i=28;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 8017436C
  c->r[10]=R32(c->r[1]+0x00000000u); // 80174370
  c->r[0]=R32(c->r[10]+0x00000004u); // 80174374
  c->r[1]=c->r[10]|c->r[10]; // 80174378
  c->lr=c->r[0]; // 8017437C
  return; // 80174380
}

// fn_80174384
void f_80174384(Ctx* __restrict c) {
  trace_call(0x80174384u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80174384
  c->r[0]=c->lr; // 80174388
  W32(c->r[1]+0x00000044u,c->r[0]); // 8017438C
  {uint32_t ea=c->r[1]+0x00000030u; for(int i=28;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 80174390
  c->r[31]=c->r[1]|c->r[1]; // 80174394
  c->r[30]=c->r[3]|c->r[3]; // 80174398
  c->r[4]=R32(c->r[3]+0x00000004u); // 8017439C
  cmps(c,0,(int32_t)c->r[4],0); // 801743A0
  if (crb(c,2)) { goto L_801743B0; } // 801743A4
  c->r[0]=R32(c->r[4]+0x00000008u); // 801743A8
  goto L_801743B4; // 801743AC
L_801743B0:;
  c->r[0]=0u+0x00000000u; // 801743B0
L_801743B4:;
  cmps(c,0,(int32_t)c->r[0],0); // 801743B4
  if (!crb(c,2)) { goto L_801743C4; } // 801743B8
  c->r[0]=0u+0x00000001u; // 801743BC
  W32(c->r[3]+0x000005CCu,c->r[0]); // 801743C0
L_801743C4:;
  c->r[0]=R32(c->r[3]+0x000005D0u); // 801743C4
  cmps(c,0,(int32_t)c->r[0],0); // 801743C8
  if (crb(c,2)) { goto L_801743DC; } // 801743CC
  cmps(c,0,(int32_t)c->r[0],1); // 801743D0
  if (crb(c,2)) { goto L_8017446C; } // 801743D4
  goto L_8017448C; // 801743D8
L_801743DC:;
  c->r[29]=0u+0x00000000u; // 801743DC
  W32(c->r[3]+0x000005D4u,c->r[29]); // 801743E0
  c->lr=0x801743E8u; f_8017248C(c); // 801743E4
  c->r[4]=c->r[3]|c->r[3]; // 801743E8
  c->r[3]=c->r[30]|c->r[30]; // 801743EC
  c->lr=0x801743F4u; f_80062F4C(c); // 801743F0
  c->r[0]=R8(c->r[30]+0x00000010u); // 801743F4
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801743F8
  c->r[3]=c->r[30]+c->r[0]; // 801743FC
  c->r[28]=R32(c->r[3]+0x00000014u); // 80174400
  cmps(c,0,(int32_t)c->r[28],0); // 80174404
  if (crb(c,2)) { goto L_80174438; } // 80174408
  W32(c->r[31]+0x00000024u,c->r[1]); // 8017440C
  W8(c->r[31]+0x00000008u,c->r[29]); // 80174410
  c->lr=0x80174418u; f_8017248C(c); // 80174414
  W32(c->r[28]+0x00000000u,c->r[3]); // 80174418
  c->r[0]=c->r[13]+0xFFFF8A7Cu; // 8017441C
  c->r[3]=0u+0x806E0000u; // 80174420
  W32(c->r[28]+0x00000004u,c->r[0]); // 80174424
  c->r[3]=c->r[3]+0xFFFFF8F4u; // 80174428
  W32(c->r[28]+0x00000008u,c->r[29]); // 8017442C
  W32(c->r[28]+0x0000000Cu,c->r[29]); // 80174430
  W32(c->r[28]+0x00000010u,c->r[3]); // 80174434
L_80174438:;
  W32(c->r[30]+0x00000008u,c->r[28]); // 80174438
  c->r[0]=0u+0x00000000u; // 8017443C
  c->r[3]=c->r[30]|c->r[30]; // 80174440
  c->r[4]=c->r[28]|c->r[28]; // 80174444
  W32(c->r[28]+0x00000008u,c->r[0]); // 80174448
  c->r[0]=R32(c->r[30]+0x00000004u); // 8017444C
  W32(c->r[30]+0x0000000Cu,c->r[0]); // 80174450
  c->lr=0x80174458u; f_8006306C(c); // 80174454
  c->r[0]=R32(c->r[30]+0x000005BCu); // 80174458
  W32(c->r[30]+0x00000688u,c->r[28]); // 8017445C
  c->r[0]=c->r[0]|0x40000000u; // 80174460
  W32(c->r[30]+0x000005BCu,c->r[0]); // 80174464
  goto L_8017448C; // 80174468
L_8017446C:;
  c->r[0]=0u+0x00000000u; // 8017446C
  W32(c->r[3]+0x000005D0u,c->r[0]); // 80174470
  c->r[3]=c->r[30]|c->r[30]; // 80174474
  c->lr=0x8017447Cu; f_801744A8(c); // 80174478
  c->r[0]=R32(c->r[30]+0x000005BCu); // 8017447C
  W32(c->r[30]+0x00000684u,c->r[3]); // 80174480
  c->r[0]=c->r[0]|0x40000000u; // 80174484
  W32(c->r[30]+0x000005BCu,c->r[0]); // 80174488
L_8017448C:;
  c->r[10]=c->r[31]|c->r[31]; // 8017448C
  {uint32_t ea=c->r[10]+0x00000030u; for(int i=28;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 80174490
  c->r[10]=R32(c->r[1]+0x00000000u); // 80174494
  c->r[0]=R32(c->r[10]+0x00000004u); // 80174498
  c->r[1]=c->r[10]|c->r[10]; // 8017449C
  c->lr=c->r[0]; // 801744A0
  return; // 801744A4
}

// fn_801744A8
void f_801744A8(Ctx* __restrict c) {
  trace_call(0x801744A8u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801744A8
  c->r[0]=c->lr; // 801744AC
  W32(c->r[1]+0x00000044u,c->r[0]); // 801744B0
  {uint32_t ea=c->r[1]+0x00000030u; for(int i=28;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 801744B4
  c->r[31]=c->r[1]|c->r[1]; // 801744B8
  c->r[28]=c->r[3]|c->r[3]; // 801744BC
  c->lr=0x801744C4u; f_8017262C(c); // 801744C0
  c->r[4]=c->r[3]|c->r[3]; // 801744C4
  c->r[3]=c->r[28]|c->r[28]; // 801744C8
  c->lr=0x801744D0u; f_80062F4C(c); // 801744CC
  c->r[0]=R8(c->r[28]+0x00000010u); // 801744D0
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801744D4
  c->r[3]=c->r[28]+c->r[0]; // 801744D8
  c->r[29]=R32(c->r[3]+0x00000014u); // 801744DC
  cmps(c,0,(int32_t)c->r[29],0); // 801744E0
  if (crb(c,2)) { goto L_80174518; } // 801744E4
  c->r[30]=0u+0x00000000u; // 801744E8
  W32(c->r[31]+0x00000024u,c->r[1]); // 801744EC
  W8(c->r[31]+0x00000008u,c->r[30]); // 801744F0
  c->lr=0x801744F8u; f_8017262C(c); // 801744F4
  W32(c->r[29]+0x00000000u,c->r[3]); // 801744F8
  c->r[0]=c->r[13]+0xFFFF8A9Cu; // 801744FC
  c->r[3]=0u+0x806E0000u; // 80174500
  W32(c->r[29]+0x00000004u,c->r[0]); // 80174504
  c->r[3]=c->r[3]+0xFFFFF970u; // 80174508
  W32(c->r[29]+0x00000008u,c->r[30]); // 8017450C
  W32(c->r[29]+0x0000000Cu,c->r[30]); // 80174510
  W32(c->r[29]+0x00000010u,c->r[3]); // 80174514
L_80174518:;
  W32(c->r[28]+0x00000008u,c->r[29]); // 80174518
  c->r[0]=0u+0x00000000u; // 8017451C
  c->r[3]=c->r[28]|c->r[28]; // 80174520
  c->r[4]=c->r[29]|c->r[29]; // 80174524
  W32(c->r[29]+0x00000008u,c->r[0]); // 80174528
  c->r[0]=R32(c->r[28]+0x00000004u); // 8017452C
  W32(c->r[28]+0x0000000Cu,c->r[0]); // 80174530
  c->lr=0x80174538u; f_8006306C(c); // 80174534
  c->r[10]=c->r[31]|c->r[31]; // 80174538
  c->r[3]=c->r[29]|c->r[29]; // 8017453C
  {uint32_t ea=c->r[10]+0x00000030u; for(int i=28;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 80174540
  c->r[10]=R32(c->r[1]+0x00000000u); // 80174544
  c->r[0]=R32(c->r[10]+0x00000004u); // 80174548
  c->r[1]=c->r[10]|c->r[10]; // 8017454C
  c->lr=c->r[0]; // 80174550
  return; // 80174554
}

// fn_80174558
void f_80174558(Ctx* __restrict c) {
  trace_call(0x80174558u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80174558
  c->r[0]=c->lr; // 8017455C
  W32(c->r[1]+0x00000014u,c->r[0]); // 80174560
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80174564
  c->r[31]=c->r[3]|c->r[3]; // 80174568
  c->r[4]=R32(c->r[3]+0x00000004u); // 8017456C
  cmps(c,0,(int32_t)c->r[4],0); // 80174570
  if (crb(c,2)) { goto L_80174580; } // 80174574
  c->r[0]=R32(c->r[4]+0x00000008u); // 80174578
  goto L_80174584; // 8017457C
L_80174580:;
  c->r[0]=0u+0x00000000u; // 80174580
L_80174584:;
  cmps(c,0,(int32_t)c->r[0],0); // 80174584
  if (!crb(c,2)) { goto L_801745C8; } // 80174588
  c->r[4]=0u+0x80690000u; // 8017458C
  c->r[0]=0u+0x00000002u; // 80174590
  W32(c->r[3]+0x000005CCu,c->r[0]); // 80174594
  c->r[4]=c->r[4]+0x00001598u; // 80174598
  {uint32_t ea=c->r[2]+0xFFFFBC10u; c->f[1]=c->ps1[1]=RF32(ea);} // 8017459C
  c->r[4]=c->r[4]+0x000000B0u; // 801745A0
  {uint32_t ea=c->r[2]+0xFFFFBC0Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 801745A4
  c->r[3]=c->r[3]+0x000005DCu; // 801745A8
  {uint32_t ea=c->r[2]+0xFFFFBC34u; c->f[3]=c->ps1[3]=RF32(ea);} // 801745AC
  c->lr=0x801745B4u; f_800E24D0(c); // 801745B0
  c->r[4]=0u+0x00010000u; // 801745B4
  c->r[3]=c->r[31]|c->r[31]; // 801745B8
  c->r[4]=c->r[4]+0xFFFFE740u; // 801745BC
  c->r[5]=0u+0x00000001u; // 801745C0
  c->lr=0x801745C8u; f_80064744(c); // 801745C4
L_801745C8:;
  c->r[3]=c->r[31]+0x000005DCu; // 801745C8
  c->lr=0x801745D0u; f_800E2B1C(c); // 801745CC
  cmps(c,0,(int32_t)c->r[3],0); // 801745D0
  if (crb(c,2)) { goto L_801745EC; } // 801745D4
  c->r[0]=0u+0x00000000u; // 801745D8
  W32(c->r[31]+0x000005D0u,c->r[0]); // 801745DC
  c->r[3]=c->r[31]|c->r[31]; // 801745E0
  c->lr=0x801745E8u; f_80174600(c); // 801745E4
  W32(c->r[31]+0x00000684u,c->r[3]); // 801745E8
L_801745EC:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801745EC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801745F0
  c->lr=c->r[0]; // 801745F4
  c->r[1]=c->r[1]+0x00000010u; // 801745F8
  return; // 801745FC
}

// fn_80174600
void f_80174600(Ctx* __restrict c) {
  trace_call(0x80174600u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80174600
  c->r[0]=c->lr; // 80174604
  W32(c->r[1]+0x00000044u,c->r[0]); // 80174608
  {uint32_t ea=c->r[1]+0x00000030u; for(int i=28;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 8017460C
  c->r[31]=c->r[1]|c->r[1]; // 80174610
  c->r[28]=c->r[3]|c->r[3]; // 80174614
  c->lr=0x8017461Cu; f_801725F8(c); // 80174618
  c->r[4]=c->r[3]|c->r[3]; // 8017461C
  c->r[3]=c->r[28]|c->r[28]; // 80174620
  c->lr=0x80174628u; f_80062F4C(c); // 80174624
  c->r[0]=R8(c->r[28]+0x00000010u); // 80174628
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 8017462C
  c->r[3]=c->r[28]+c->r[0]; // 80174630
  c->r[29]=R32(c->r[3]+0x00000014u); // 80174634
  cmps(c,0,(int32_t)c->r[29],0); // 80174638
  if (crb(c,2)) { goto L_80174670; } // 8017463C
  c->r[30]=0u+0x00000000u; // 80174640
  W32(c->r[31]+0x00000024u,c->r[1]); // 80174644
  W8(c->r[31]+0x00000008u,c->r[30]); // 80174648
  c->lr=0x80174650u; f_801725F8(c); // 8017464C
  W32(c->r[29]+0x00000000u,c->r[3]); // 80174650
  c->r[0]=c->r[13]+0xFFFF8A98u; // 80174654
  c->r[3]=0u+0x806E0000u; // 80174658
  W32(c->r[29]+0x00000004u,c->r[0]); // 8017465C
  c->r[3]=c->r[3]+0xFFFFF960u; // 80174660
  W32(c->r[29]+0x00000008u,c->r[30]); // 80174664
  W32(c->r[29]+0x0000000Cu,c->r[30]); // 80174668
  W32(c->r[29]+0x00000010u,c->r[3]); // 8017466C
L_80174670:;
  W32(c->r[28]+0x00000008u,c->r[29]); // 80174670
  c->r[0]=0u+0x00000000u; // 80174674
  c->r[3]=c->r[28]|c->r[28]; // 80174678
  c->r[4]=c->r[29]|c->r[29]; // 8017467C
  W32(c->r[29]+0x00000008u,c->r[0]); // 80174680
  c->r[0]=R32(c->r[28]+0x00000004u); // 80174684
  W32(c->r[28]+0x0000000Cu,c->r[0]); // 80174688
  c->lr=0x80174690u; f_8006306C(c); // 8017468C
  c->r[10]=c->r[31]|c->r[31]; // 80174690
  c->r[3]=c->r[29]|c->r[29]; // 80174694
  {uint32_t ea=c->r[10]+0x00000030u; for(int i=28;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 80174698
  c->r[10]=R32(c->r[1]+0x00000000u); // 8017469C
  c->r[0]=R32(c->r[10]+0x00000004u); // 801746A0
  c->r[1]=c->r[10]|c->r[10]; // 801746A4
  c->lr=c->r[0]; // 801746A8
  return; // 801746AC
}

// fn_801746B0
void f_801746B0(Ctx* __restrict c) {
  trace_call(0x801746B0u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801746B0
  c->r[0]=c->lr; // 801746B4
  W32(c->r[1]+0x00000044u,c->r[0]); // 801746B8
  {uint32_t ea=c->r[1]+0x00000030u; for(int i=28;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 801746BC
  c->r[31]=c->r[1]|c->r[1]; // 801746C0
  c->r[30]=c->r[3]|c->r[3]; // 801746C4
  c->r[4]=R32(c->r[3]+0x00000004u); // 801746C8
  cmps(c,0,(int32_t)c->r[4],0); // 801746CC
  if (crb(c,2)) { goto L_801746DC; } // 801746D0
  c->r[0]=R32(c->r[4]+0x00000008u); // 801746D4
  goto L_801746E0; // 801746D8
L_801746DC:;
  c->r[0]=0u+0x00000000u; // 801746DC
L_801746E0:;
  cmps(c,0,(int32_t)c->r[0],0); // 801746E0
  if (!crb(c,2)) { goto L_801746F0; } // 801746E4
  c->r[0]=0u+0x00000003u; // 801746E8
  W32(c->r[3]+0x000005CCu,c->r[0]); // 801746EC
L_801746F0:;
  c->r[0]=R32(c->r[3]+0x000005D0u); // 801746F0
  cmps(c,0,(int32_t)c->r[0],0); // 801746F4
  if (crb(c,2)) { goto L_80174710; } // 801746F8
  cmps(c,0,(int32_t)c->r[0],1); // 801746FC
  if (crb(c,2)) { goto L_801747A0; } // 80174700
  cmps(c,0,(int32_t)c->r[0],2); // 80174704
  if (crb(c,2)) { goto L_801747D4; } // 80174708
  goto L_80174804; // 8017470C
L_80174710:;
  c->r[29]=0u+0x00000000u; // 80174710
  W32(c->r[3]+0x000005D4u,c->r[29]); // 80174714
  c->lr=0x8017471Cu; f_80172458(c); // 80174718
  c->r[4]=c->r[3]|c->r[3]; // 8017471C
  c->r[3]=c->r[30]|c->r[30]; // 80174720
  c->lr=0x80174728u; f_80062F4C(c); // 80174724
  c->r[0]=R8(c->r[30]+0x00000010u); // 80174728
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 8017472C
  c->r[3]=c->r[30]+c->r[0]; // 80174730
  c->r[28]=R32(c->r[3]+0x00000014u); // 80174734
  cmps(c,0,(int32_t)c->r[28],0); // 80174738
  if (crb(c,2)) { goto L_8017476C; } // 8017473C
  W32(c->r[31]+0x00000024u,c->r[1]); // 80174740
  W8(c->r[31]+0x00000008u,c->r[29]); // 80174744
  c->lr=0x8017474Cu; f_80172458(c); // 80174748
  W32(c->r[28]+0x00000000u,c->r[3]); // 8017474C
  c->r[0]=c->r[13]+0xFFFF8A78u; // 80174750
  c->r[3]=0u+0x806E0000u; // 80174754
  W32(c->r[28]+0x00000004u,c->r[0]); // 80174758
  c->r[3]=c->r[3]+0xFFFFF8E8u; // 8017475C
  W32(c->r[28]+0x00000008u,c->r[29]); // 80174760
  W32(c->r[28]+0x0000000Cu,c->r[29]); // 80174764
  W32(c->r[28]+0x00000010u,c->r[3]); // 80174768
L_8017476C:;
  W32(c->r[30]+0x00000008u,c->r[28]); // 8017476C
  c->r[0]=0u+0x00000000u; // 80174770
  c->r[3]=c->r[30]|c->r[30]; // 80174774
  c->r[4]=c->r[28]|c->r[28]; // 80174778
  W32(c->r[28]+0x00000008u,c->r[0]); // 8017477C
  c->r[0]=R32(c->r[30]+0x00000004u); // 80174780
  W32(c->r[30]+0x0000000Cu,c->r[0]); // 80174784
  c->lr=0x8017478Cu; f_8006306C(c); // 80174788
  c->r[0]=R32(c->r[30]+0x000005BCu); // 8017478C
  W32(c->r[30]+0x00000688u,c->r[28]); // 80174790
  c->r[0]=c->r[0]|0x40000000u; // 80174794
  W32(c->r[30]+0x000005BCu,c->r[0]); // 80174798
  goto L_80174804; // 8017479C
L_801747A0:;
  c->r[3]=c->r[3]+0x00000354u; // 801747A0
  c->lr=0x801747A8u; f_800667AC(c); // 801747A4
  cmps(c,0,(int32_t)c->r[3],0); // 801747A8
  if (crb(c,2)) { goto L_80174804; } // 801747AC
  c->r[0]=0u+0x00000000u; // 801747B0
  W32(c->r[30]+0x000005D0u,c->r[0]); // 801747B4
  c->r[3]=c->r[30]|c->r[30]; // 801747B8
  c->lr=0x801747C0u; f_80174820(c); // 801747BC
  c->r[0]=R32(c->r[30]+0x000005BCu); // 801747C0
  W32(c->r[30]+0x00000684u,c->r[3]); // 801747C4
  c->r[0]=c->r[0]|0x40000000u; // 801747C8
  W32(c->r[30]+0x000005BCu,c->r[0]); // 801747CC
  goto L_80174804; // 801747D0
L_801747D4:;
  c->r[3]=c->r[3]+0x00000354u; // 801747D4
  c->lr=0x801747DCu; f_800667AC(c); // 801747D8
  cmps(c,0,(int32_t)c->r[3],0); // 801747DC
  if (crb(c,2)) { goto L_80174804; } // 801747E0
  c->r[0]=0u+0x00000000u; // 801747E4
  W32(c->r[30]+0x000005D0u,c->r[0]); // 801747E8
  c->r[3]=c->r[30]|c->r[30]; // 801747EC
  c->lr=0x801747F4u; f_80174820(c); // 801747F0
  c->r[0]=R32(c->r[30]+0x000005BCu); // 801747F4
  W32(c->r[30]+0x00000684u,c->r[3]); // 801747F8
  c->r[0]=c->r[0]|0x40000000u; // 801747FC
  W32(c->r[30]+0x000005BCu,c->r[0]); // 80174800
L_80174804:;
  c->r[10]=c->r[31]|c->r[31]; // 80174804
  {uint32_t ea=c->r[10]+0x00000030u; for(int i=28;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 80174808
  c->r[10]=R32(c->r[1]+0x00000000u); // 8017480C
  c->r[0]=R32(c->r[10]+0x00000004u); // 80174810
  c->r[1]=c->r[10]|c->r[10]; // 80174814
  c->lr=c->r[0]; // 80174818
  return; // 8017481C
}

// fn_80174820
void f_80174820(Ctx* __restrict c) {
  trace_call(0x80174820u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80174820
  c->r[0]=c->lr; // 80174824
  W32(c->r[1]+0x00000044u,c->r[0]); // 80174828
  {uint32_t ea=c->r[1]+0x00000030u; for(int i=28;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 8017482C
  c->r[31]=c->r[1]|c->r[1]; // 80174830
  c->r[28]=c->r[3]|c->r[3]; // 80174834
  c->lr=0x8017483Cu; f_801725C4(c); // 80174838
  c->r[4]=c->r[3]|c->r[3]; // 8017483C
  c->r[3]=c->r[28]|c->r[28]; // 80174840
  c->lr=0x80174848u; f_80062F4C(c); // 80174844
  c->r[0]=R8(c->r[28]+0x00000010u); // 80174848
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 8017484C
  c->r[3]=c->r[28]+c->r[0]; // 80174850
  c->r[29]=R32(c->r[3]+0x00000014u); // 80174854
  cmps(c,0,(int32_t)c->r[29],0); // 80174858
  if (crb(c,2)) { goto L_80174890; } // 8017485C
  c->r[30]=0u+0x00000000u; // 80174860
  W32(c->r[31]+0x00000024u,c->r[1]); // 80174864
  W8(c->r[31]+0x00000008u,c->r[30]); // 80174868
  c->lr=0x80174870u; f_801725C4(c); // 8017486C
  W32(c->r[29]+0x00000000u,c->r[3]); // 80174870
  c->r[0]=c->r[13]+0xFFFF8A94u; // 80174874
  c->r[3]=0u+0x806E0000u; // 80174878
  W32(c->r[29]+0x00000004u,c->r[0]); // 8017487C
  c->r[3]=c->r[3]+0xFFFFF950u; // 80174880
  W32(c->r[29]+0x00000008u,c->r[30]); // 80174884
  W32(c->r[29]+0x0000000Cu,c->r[30]); // 80174888
  W32(c->r[29]+0x00000010u,c->r[3]); // 8017488C
L_80174890:;
  W32(c->r[28]+0x00000008u,c->r[29]); // 80174890
  c->r[0]=0u+0x00000000u; // 80174894
  c->r[3]=c->r[28]|c->r[28]; // 80174898
  c->r[4]=c->r[29]|c->r[29]; // 8017489C
  W32(c->r[29]+0x00000008u,c->r[0]); // 801748A0
  c->r[0]=R32(c->r[28]+0x00000004u); // 801748A4
  W32(c->r[28]+0x0000000Cu,c->r[0]); // 801748A8
  c->lr=0x801748B0u; f_8006306C(c); // 801748AC
  c->r[10]=c->r[31]|c->r[31]; // 801748B0
  c->r[3]=c->r[29]|c->r[29]; // 801748B4
  {uint32_t ea=c->r[10]+0x00000030u; for(int i=28;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 801748B8
  c->r[10]=R32(c->r[1]+0x00000000u); // 801748BC
  c->r[0]=R32(c->r[10]+0x00000004u); // 801748C0
  c->r[1]=c->r[10]|c->r[10]; // 801748C4
  c->lr=c->r[0]; // 801748C8
  return; // 801748CC
}

// fn_801748D0
void f_801748D0(Ctx* __restrict c) {
  trace_call(0x801748D0u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801748D0
  c->r[0]=c->lr; // 801748D4
  W32(c->r[1]+0x00000044u,c->r[0]); // 801748D8
  {uint32_t ea=c->r[1]+0x00000030u; for(int i=28;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 801748DC
  c->r[31]=c->r[1]|c->r[1]; // 801748E0
  c->r[30]=c->r[3]|c->r[3]; // 801748E4
  c->r[4]=R32(c->r[3]+0x00000004u); // 801748E8
  cmps(c,0,(int32_t)c->r[4],0); // 801748EC
  if (crb(c,2)) { goto L_801748FC; } // 801748F0
  c->r[0]=R32(c->r[4]+0x00000008u); // 801748F4
  goto L_80174900; // 801748F8
L_801748FC:;
  c->r[0]=0u+0x00000000u; // 801748FC
L_80174900:;
  cmps(c,0,(int32_t)c->r[0],0); // 80174900
  if (!crb(c,2)) { goto L_80174910; } // 80174904
  c->r[0]=0u+0x00000004u; // 80174908
  W32(c->r[3]+0x000005CCu,c->r[0]); // 8017490C
L_80174910:;
  c->r[0]=R32(c->r[3]+0x000005D0u); // 80174910
  cmps(c,0,(int32_t)c->r[0],0); // 80174914
  if (crb(c,2)) { goto L_80174928; } // 80174918
  cmps(c,0,(int32_t)c->r[0],1); // 8017491C
  if (crb(c,2)) { goto L_801749B8; } // 80174920
  goto L_801749D8; // 80174924
L_80174928:;
  c->r[29]=0u+0x00000000u; // 80174928
  W32(c->r[3]+0x000005D4u,c->r[29]); // 8017492C
  c->lr=0x80174934u; f_80172424(c); // 80174930
  c->r[4]=c->r[3]|c->r[3]; // 80174934
  c->r[3]=c->r[30]|c->r[30]; // 80174938
  c->lr=0x80174940u; f_80062F4C(c); // 8017493C
  c->r[0]=R8(c->r[30]+0x00000010u); // 80174940
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80174944
  c->r[3]=c->r[30]+c->r[0]; // 80174948
  c->r[28]=R32(c->r[3]+0x00000014u); // 8017494C
  cmps(c,0,(int32_t)c->r[28],0); // 80174950
  if (crb(c,2)) { goto L_80174984; } // 80174954
  W32(c->r[31]+0x00000024u,c->r[1]); // 80174958
  W8(c->r[31]+0x00000008u,c->r[29]); // 8017495C
  c->lr=0x80174964u; f_80172424(c); // 80174960
  W32(c->r[28]+0x00000000u,c->r[3]); // 80174964
  c->r[0]=c->r[13]+0xFFFF8A74u; // 80174968
  c->r[3]=0u+0x806E0000u; // 8017496C
  W32(c->r[28]+0x00000004u,c->r[0]); // 80174970
  c->r[3]=c->r[3]+0xFFFFF8DCu; // 80174974
  W32(c->r[28]+0x00000008u,c->r[29]); // 80174978
  W32(c->r[28]+0x0000000Cu,c->r[29]); // 8017497C
  W32(c->r[28]+0x00000010u,c->r[3]); // 80174980
L_80174984:;
  W32(c->r[30]+0x00000008u,c->r[28]); // 80174984
  c->r[0]=0u+0x00000000u; // 80174988
  c->r[3]=c->r[30]|c->r[30]; // 8017498C
  c->r[4]=c->r[28]|c->r[28]; // 80174990
  W32(c->r[28]+0x00000008u,c->r[0]); // 80174994
  c->r[0]=R32(c->r[30]+0x00000004u); // 80174998
  W32(c->r[30]+0x0000000Cu,c->r[0]); // 8017499C
  c->lr=0x801749A4u; f_8006306C(c); // 801749A0
  c->r[0]=R32(c->r[30]+0x000005BCu); // 801749A4
  W32(c->r[30]+0x00000688u,c->r[28]); // 801749A8
  c->r[0]=c->r[0]|0x40000000u; // 801749AC
  W32(c->r[30]+0x000005BCu,c->r[0]); // 801749B0
  goto L_801749D8; // 801749B4
L_801749B8:;
  c->r[0]=0u+0x00000000u; // 801749B8
  W32(c->r[3]+0x000005D0u,c->r[0]); // 801749BC
  c->r[3]=c->r[30]|c->r[30]; // 801749C0
  c->lr=0x801749C8u; f_801749F4(c); // 801749C4
  c->r[0]=R32(c->r[30]+0x000005BCu); // 801749C8
  W32(c->r[30]+0x00000684u,c->r[3]); // 801749CC
  c->r[0]=c->r[0]|0x40000000u; // 801749D0
  W32(c->r[30]+0x000005BCu,c->r[0]); // 801749D4
L_801749D8:;
  c->r[10]=c->r[31]|c->r[31]; // 801749D8
  {uint32_t ea=c->r[10]+0x00000030u; for(int i=28;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 801749DC
  c->r[10]=R32(c->r[1]+0x00000000u); // 801749E0
  c->r[0]=R32(c->r[10]+0x00000004u); // 801749E4
  c->r[1]=c->r[10]|c->r[10]; // 801749E8
  c->lr=c->r[0]; // 801749EC
  return; // 801749F0
}

// fn_801749F4
void f_801749F4(Ctx* __restrict c) {
  trace_call(0x801749F4u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801749F4
  c->r[0]=c->lr; // 801749F8
  W32(c->r[1]+0x00000044u,c->r[0]); // 801749FC
  {uint32_t ea=c->r[1]+0x00000030u; for(int i=28;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 80174A00
  c->r[31]=c->r[1]|c->r[1]; // 80174A04
  c->r[28]=c->r[3]|c->r[3]; // 80174A08
  c->lr=0x80174A10u; f_80172590(c); // 80174A0C
  c->r[4]=c->r[3]|c->r[3]; // 80174A10
  c->r[3]=c->r[28]|c->r[28]; // 80174A14
  c->lr=0x80174A1Cu; f_80062F4C(c); // 80174A18
  c->r[0]=R8(c->r[28]+0x00000010u); // 80174A1C
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80174A20
  c->r[3]=c->r[28]+c->r[0]; // 80174A24
  c->r[29]=R32(c->r[3]+0x00000014u); // 80174A28
  cmps(c,0,(int32_t)c->r[29],0); // 80174A2C
  if (crb(c,2)) { goto L_80174A64; } // 80174A30
  c->r[30]=0u+0x00000000u; // 80174A34
  W32(c->r[31]+0x00000024u,c->r[1]); // 80174A38
  W8(c->r[31]+0x00000008u,c->r[30]); // 80174A3C
  c->lr=0x80174A44u; f_80172590(c); // 80174A40
  W32(c->r[29]+0x00000000u,c->r[3]); // 80174A44
  c->r[0]=c->r[13]+0xFFFF8A90u; // 80174A48
  c->r[3]=0u+0x806E0000u; // 80174A4C
  W32(c->r[29]+0x00000004u,c->r[0]); // 80174A50
  c->r[3]=c->r[3]+0xFFFFF940u; // 80174A54
  W32(c->r[29]+0x00000008u,c->r[30]); // 80174A58
  W32(c->r[29]+0x0000000Cu,c->r[30]); // 80174A5C
  W32(c->r[29]+0x00000010u,c->r[3]); // 80174A60
L_80174A64:;
  W32(c->r[28]+0x00000008u,c->r[29]); // 80174A64
  c->r[0]=0u+0x00000000u; // 80174A68
  c->r[3]=c->r[28]|c->r[28]; // 80174A6C
  c->r[4]=c->r[29]|c->r[29]; // 80174A70
  W32(c->r[29]+0x00000008u,c->r[0]); // 80174A74
  c->r[0]=R32(c->r[28]+0x00000004u); // 80174A78
  W32(c->r[28]+0x0000000Cu,c->r[0]); // 80174A7C
  c->lr=0x80174A84u; f_8006306C(c); // 80174A80
  c->r[10]=c->r[31]|c->r[31]; // 80174A84
  c->r[3]=c->r[29]|c->r[29]; // 80174A88
  {uint32_t ea=c->r[10]+0x00000030u; for(int i=28;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 80174A8C
  c->r[10]=R32(c->r[1]+0x00000000u); // 80174A90
  c->r[0]=R32(c->r[10]+0x00000004u); // 80174A94
  c->r[1]=c->r[10]|c->r[10]; // 80174A98
  c->lr=c->r[0]; // 80174A9C
  return; // 80174AA0
}

// fn_80174AA4
void f_80174AA4(Ctx* __restrict c) {
  trace_call(0x80174AA4u);
  {uint32_t ea=c->r[1]+0xFFFFFF70u; W32(ea,c->r[1]); c->r[1]=ea;} // 80174AA4
  c->r[0]=c->lr; // 80174AA8
  W32(c->r[1]+0x00000094u,c->r[0]); // 80174AAC
  W32(c->r[1]+0x0000008Cu,c->r[31]); // 80174AB0
  c->r[31]=c->r[3]|c->r[3]; // 80174AB4
  c->r[4]=R32(c->r[3]+0x00000004u); // 80174AB8
  cmps(c,0,(int32_t)c->r[4],0); // 80174ABC
  if (crb(c,2)) { goto L_80174ACC; } // 80174AC0
  c->r[0]=R32(c->r[4]+0x00000008u); // 80174AC4
  goto L_80174AD0; // 80174AC8
L_80174ACC:;
  c->r[0]=0u+0x00000000u; // 80174ACC
L_80174AD0:;
  cmps(c,0,(int32_t)c->r[0],0); // 80174AD0
  if (!crb(c,2)) { goto L_80174B5C; } // 80174AD4
  c->r[4]=0u+0x80690000u; // 80174AD8
  c->r[0]=0u+0x00000005u; // 80174ADC
  W32(c->r[3]+0x000005CCu,c->r[0]); // 80174AE0
  c->r[4]=c->r[4]+0x00001598u; // 80174AE4
  {uint32_t ea=c->r[2]+0xFFFFBC10u; c->f[1]=c->ps1[1]=RF32(ea);} // 80174AE8
  c->r[4]=c->r[4]+0x000000BCu; // 80174AEC
  {uint32_t ea=c->r[2]+0xFFFFBC0Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 80174AF0
  c->r[3]=c->r[3]+0x000005DCu; // 80174AF4
  {uint32_t ea=c->r[2]+0xFFFFBC34u; c->f[3]=c->ps1[3]=RF32(ea);} // 80174AF8
  c->lr=0x80174B00u; f_800E24D0(c); // 80174AFC
  c->r[3]=c->r[31]+0x000000FCu; // 80174B00
  c->r[4]=0u+0x00000000u; // 80174B04
  c->lr=0x80174B0Cu; f_802E6678(c); // 80174B08
  {uint32_t ea=c->r[2]+0xFFFFBC0Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 80174B0C
  c->r[3]=0u+0x00000000u; // 80174B10
  c->r[0]=0u+0x00000001u; // 80174B14
  W8(c->r[31]+0x000007A0u,c->r[3]); // 80174B18
  c->f[3]=c->f[1]; // 80174B1C
  {uint32_t ea=c->r[2]+0xFFFFBC48u; c->f[2]=c->ps1[2]=RF32(ea);} // 80174B20
  W32(c->r[31]+0x000005C8u,c->r[0]); // 80174B24
  c->r[3]=c->r[1]+0x00000018u; // 80174B28
  c->lr=0x80174B30u; f_8005FD70(c); // 80174B2C
  c->r[3]=c->r[1]+0x00000058u; // 80174B30
  c->lr=0x80174B38u; f_80382F00(c); // 80174B34
  c->r[3]=c->r[1]+0x00000058u; // 80174B38
  c->r[4]=c->r[1]+0x00000018u; // 80174B3C
  c->lr=0x80174B44u; f_8005CDC8(c); // 80174B40
  c->r[12]=R32(c->r[31]+0x0000001Cu); // 80174B44
  c->r[3]=c->r[31]|c->r[31]; // 80174B48
  c->r[4]=c->r[1]+0x00000058u; // 80174B4C
  c->r[12]=R32(c->r[12]+0x000000F0u); // 80174B50
  c->ctr=c->r[12]; // 80174B54
  if (true) { c->lr=0x80174B5Cu; dispatch(c,c->ctr); } // 80174B58
L_80174B5C:;
  {uint32_t ea=c->r[2]+0xFFFFBC4Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 80174B5C
  c->r[3]=c->r[31]+0x000005DCu; // 80174B60
  c->lr=0x80174B68u; f_800E2B50(c); // 80174B64
  cmps(c,0,(int32_t)c->r[3],0); // 80174B68
  if (crb(c,2)) { goto L_80174B88; } // 80174B6C
  c->r[0]=0u+0x00000000u; // 80174B70
  W8(c->r[1]+0x00000008u,c->r[0]); // 80174B74
  c->r[3]=c->r[1]+0x00000008u; // 80174B78
  c->lr=0x80174B80u; f_800462D8(c); // 80174B7C
  c->r[4]=0u+0x00000000u; // 80174B80
  c->lr=0x80174B88u; f_800EA1A0(c); // 80174B84
L_80174B88:;
  c->r[3]=c->r[31]+0x000005DCu; // 80174B88
  c->lr=0x80174B90u; f_800E2B1C(c); // 80174B8C
  cmps(c,0,(int32_t)c->r[3],0); // 80174B90
  if (crb(c,2)) { goto L_80174C08; } // 80174B94
  {uint32_t ea=c->r[2]+0xFFFFBC0Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 80174B98
  c->r[3]=c->r[1]+0x0000000Cu; // 80174B9C
  c->f[2]=c->f[1]; // 80174BA0
  c->f[3]=c->f[1]; // 80174BA4
  c->lr=0x80174BACu; f_8005FD70(c); // 80174BA8
  c->r[3]=c->r[1]+0x00000028u; // 80174BAC
  c->lr=0x80174BB4u; f_80382F00(c); // 80174BB0
  c->r[3]=c->r[1]+0x00000028u; // 80174BB4
  c->r[4]=c->r[1]+0x0000000Cu; // 80174BB8
  c->lr=0x80174BC0u; f_8005CDC8(c); // 80174BBC
  c->r[12]=R32(c->r[31]+0x0000001Cu); // 80174BC0
  c->r[3]=c->r[31]|c->r[31]; // 80174BC4
  c->r[4]=c->r[1]+0x00000028u; // 80174BC8
  c->r[12]=R32(c->r[12]+0x000000F0u); // 80174BCC
  c->ctr=c->r[12]; // 80174BD0
  if (true) { c->lr=0x80174BD8u; dispatch(c,c->ctr); } // 80174BD4
  c->r[3]=c->r[31]+0x000000FCu; // 80174BD8
  c->r[4]=0u+0x00000001u; // 80174BDC
  c->lr=0x80174BE4u; f_802E6678(c); // 80174BE0
  c->r[3]=0u+0x00000001u; // 80174BE4
  c->r[4]=0u+0x00000002u; // 80174BE8
  c->r[0]=0u+0x00000000u; // 80174BEC
  W8(c->r[31]+0x000007A0u,c->r[3]); // 80174BF0
  c->r[3]=c->r[31]|c->r[31]; // 80174BF4
  W32(c->r[31]+0x000005C8u,c->r[4]); // 80174BF8
  W32(c->r[31]+0x000005D0u,c->r[0]); // 80174BFC
  c->lr=0x80174C04u; f_80174C1C(c); // 80174C00
  W32(c->r[31]+0x00000684u,c->r[3]); // 80174C04
L_80174C08:;
  c->r[0]=R32(c->r[1]+0x00000094u); // 80174C08
  c->r[31]=R32(c->r[1]+0x0000008Cu); // 80174C0C
  c->lr=c->r[0]; // 80174C10
  c->r[1]=c->r[1]+0x00000090u; // 80174C14
  return; // 80174C18
}

// fn_80174C1C
void f_80174C1C(Ctx* __restrict c) {
  trace_call(0x80174C1Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80174C1C
  c->r[0]=c->lr; // 80174C20
  W32(c->r[1]+0x00000044u,c->r[0]); // 80174C24
  {uint32_t ea=c->r[1]+0x00000030u; for(int i=28;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 80174C28
  c->r[31]=c->r[1]|c->r[1]; // 80174C2C
  c->r[28]=c->r[3]|c->r[3]; // 80174C30
  c->lr=0x80174C38u; f_8017255C(c); // 80174C34
  c->r[4]=c->r[3]|c->r[3]; // 80174C38
  c->r[3]=c->r[28]|c->r[28]; // 80174C3C
  c->lr=0x80174C44u; f_80062F4C(c); // 80174C40
  c->r[0]=R8(c->r[28]+0x00000010u); // 80174C44
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80174C48
  c->r[3]=c->r[28]+c->r[0]; // 80174C4C
  c->r[29]=R32(c->r[3]+0x00000014u); // 80174C50
  cmps(c,0,(int32_t)c->r[29],0); // 80174C54
  if (crb(c,2)) { goto L_80174C8C; } // 80174C58
  c->r[30]=0u+0x00000000u; // 80174C5C
  W32(c->r[31]+0x00000024u,c->r[1]); // 80174C60
  W8(c->r[31]+0x00000008u,c->r[30]); // 80174C64
  c->lr=0x80174C6Cu; f_8017255C(c); // 80174C68
  W32(c->r[29]+0x00000000u,c->r[3]); // 80174C6C
  c->r[0]=c->r[13]+0xFFFF8A8Cu; // 80174C70
  c->r[3]=0u+0x806E0000u; // 80174C74
  W32(c->r[29]+0x00000004u,c->r[0]); // 80174C78
  c->r[3]=c->r[3]+0xFFFFF930u; // 80174C7C
  W32(c->r[29]+0x00000008u,c->r[30]); // 80174C80
  W32(c->r[29]+0x0000000Cu,c->r[30]); // 80174C84
  W32(c->r[29]+0x00000010u,c->r[3]); // 80174C88
L_80174C8C:;
  W32(c->r[28]+0x00000008u,c->r[29]); // 80174C8C
  c->r[0]=0u+0x00000000u; // 80174C90
  c->r[3]=c->r[28]|c->r[28]; // 80174C94
  c->r[4]=c->r[29]|c->r[29]; // 80174C98
  W32(c->r[29]+0x00000008u,c->r[0]); // 80174C9C
  c->r[0]=R32(c->r[28]+0x00000004u); // 80174CA0
  W32(c->r[28]+0x0000000Cu,c->r[0]); // 80174CA4
  c->lr=0x80174CACu; f_8006306C(c); // 80174CA8
  c->r[10]=c->r[31]|c->r[31]; // 80174CAC
  c->r[3]=c->r[29]|c->r[29]; // 80174CB0
  {uint32_t ea=c->r[10]+0x00000030u; for(int i=28;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 80174CB4
  c->r[10]=R32(c->r[1]+0x00000000u); // 80174CB8
  c->r[0]=R32(c->r[10]+0x00000004u); // 80174CBC
  c->r[1]=c->r[10]|c->r[10]; // 80174CC0
  c->lr=c->r[0]; // 80174CC4
  return; // 80174CC8
}

// fn_80174CCC
void f_80174CCC(Ctx* __restrict c) {
  trace_call(0x80174CCCu);
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80174CCC
  c->r[0]=c->lr; // 80174CD0
  W32(c->r[1]+0x00000064u,c->r[0]); // 80174CD4
  c->r[11]=c->r[1]+0x00000060u; // 80174CD8
  c->lr=0x80174CE0u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80174CDC
  c->r[31]=c->r[1]|c->r[1]; // 80174CE0
  c->r[4]=R32(c->r[3]+0x00000004u); // 80174CE4
  c->r[30]=c->r[3]|c->r[3]; // 80174CE8
  cmps(c,0,(int32_t)c->r[4],0); // 80174CEC
  if (crb(c,2)) { goto L_80174CFC; } // 80174CF0
  c->r[0]=R32(c->r[4]+0x00000008u); // 80174CF4
  goto L_80174D00; // 80174CF8
L_80174CFC:;
  c->r[0]=0u+0x00000000u; // 80174CFC
L_80174D00:;
  cmps(c,0,(int32_t)c->r[0],0); // 80174D00
  if (!crb(c,2)) { goto L_80174D10; } // 80174D04
  c->r[0]=0u+0x00000006u; // 80174D08
  W32(c->r[3]+0x000005CCu,c->r[0]); // 80174D0C
L_80174D10:;
  c->r[0]=R32(c->r[3]+0x000005D0u); // 80174D10
  cmps(c,0,(int32_t)c->r[0],0); // 80174D14
  if (crb(c,2)) { goto L_80174D28; } // 80174D18
  cmps(c,0,(int32_t)c->r[0],1); // 80174D1C
  if (crb(c,2)) { goto L_80174DB8; } // 80174D20
  goto L_80174E88; // 80174D24
L_80174D28:;
  c->r[28]=0u+0x00000000u; // 80174D28
  W32(c->r[3]+0x000005D4u,c->r[28]); // 80174D2C
  c->lr=0x80174D34u; f_801723F0(c); // 80174D30
  c->r[4]=c->r[3]|c->r[3]; // 80174D34
  c->r[3]=c->r[30]|c->r[30]; // 80174D38
  c->lr=0x80174D40u; f_80062F4C(c); // 80174D3C
  c->r[0]=R8(c->r[30]+0x00000010u); // 80174D40
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80174D44
  c->r[3]=c->r[30]+c->r[0]; // 80174D48
  c->r[29]=R32(c->r[3]+0x00000014u); // 80174D4C
  cmps(c,0,(int32_t)c->r[29],0); // 80174D50
  if (crb(c,2)) { goto L_80174D84; } // 80174D54
  W32(c->r[31]+0x00000044u,c->r[1]); // 80174D58
  W8(c->r[31]+0x00000010u,c->r[28]); // 80174D5C
  c->lr=0x80174D64u; f_801723F0(c); // 80174D60
  W32(c->r[29]+0x00000000u,c->r[3]); // 80174D64
  c->r[0]=c->r[13]+0xFFFF8A70u; // 80174D68
  c->r[3]=0u+0x806E0000u; // 80174D6C
  W32(c->r[29]+0x00000004u,c->r[0]); // 80174D70
  c->r[3]=c->r[3]+0xFFFFF8D0u; // 80174D74
  W32(c->r[29]+0x00000008u,c->r[28]); // 80174D78
  W32(c->r[29]+0x0000000Cu,c->r[28]); // 80174D7C
  W32(c->r[29]+0x00000010u,c->r[3]); // 80174D80
L_80174D84:;
  W32(c->r[30]+0x00000008u,c->r[29]); // 80174D84
  c->r[0]=0u+0x00000000u; // 80174D88
  c->r[3]=c->r[30]|c->r[30]; // 80174D8C
  c->r[4]=c->r[29]|c->r[29]; // 80174D90
  W32(c->r[29]+0x00000008u,c->r[0]); // 80174D94
  c->r[0]=R32(c->r[30]+0x00000004u); // 80174D98
  W32(c->r[30]+0x0000000Cu,c->r[0]); // 80174D9C
  c->lr=0x80174DA4u; f_8006306C(c); // 80174DA0
  c->r[0]=R32(c->r[30]+0x000005BCu); // 80174DA4
  W32(c->r[30]+0x00000688u,c->r[29]); // 80174DA8
  c->r[0]=c->r[0]|0x40000000u; // 80174DAC
  W32(c->r[30]+0x000005BCu,c->r[0]); // 80174DB0
  goto L_80174E88; // 80174DB4
L_80174DB8:;
  {uint32_t ea=c->r[2]+0xFFFFBC1Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 80174DB8
  c->r[3]=c->r[3]+0x000005DCu; // 80174DBC
  c->lr=0x80174DC4u; f_800E2B50(c); // 80174DC0
  cmps(c,0,(int32_t)c->r[3],0); // 80174DC4
  if (crb(c,2)) { goto L_80174E58; } // 80174DC8
  c->r[28]=0u+0x00000000u; // 80174DCC
  W8(c->r[31]+0x0000000Cu,c->r[28]); // 80174DD0
  c->r[3]=c->r[31]+0x0000000Cu; // 80174DD4
  c->lr=0x80174DDCu; f_8004E228(c); // 80174DD8
  c->r[5]=0u+0x80690000u; // 80174DDC
  c->r[4]=R32(c->r[30]+0x00000680u); // 80174DE0
  c->r[5]=c->r[5]+0x00001598u; // 80174DE4
  c->r[5]=c->r[5]+0x0000003Eu; // 80174DE8
  c->lr=0x80174DF0u; f_80075FE0(c); // 80174DEC
  c->r[3]=c->r[30]+0x00000694u; // 80174DF0
  c->lr=0x80174DF8u; f_800655F4(c); // 80174DF4
  cmps(c,0,(int32_t)c->r[3],0); // 80174DF8
  if (crb(c,2)) { goto L_80174E58; } // 80174DFC
  c->r[3]=c->r[30]+0x00000694u; // 80174E00
  c->lr=0x80174E08u; f_800DBAA4(c); // 80174E04
  c->r[0]=R8(c->r[3]+0x00000010u); // 80174E08
  c->r[29]=c->r[3]|c->r[3]; // 80174E0C
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80174E10
  c->r[3]=c->r[3]+c->r[0]; // 80174E14
  c->r[27]=R32(c->r[3]+0x00000014u); // 80174E18
  cmps(c,0,(int32_t)c->r[27],0); // 80174E1C
  if (crb(c,2)) { goto L_80174E44; } // 80174E20
  W32(c->r[31]+0x0000002Cu,c->r[1]); // 80174E24
  W8(c->r[31]+0x00000008u,c->r[28]); // 80174E28
  c->lr=0x80174E30u; f_80062D6C(c); // 80174E2C
  W32(c->r[27]+0x00000000u,c->r[3]); // 80174E30
  c->r[0]=c->r[13]+0xFFFF80C0u; // 80174E34
  W32(c->r[27]+0x00000004u,c->r[0]); // 80174E38
  W32(c->r[27]+0x00000008u,c->r[28]); // 80174E3C
  W32(c->r[27]+0x0000000Cu,c->r[28]); // 80174E40
L_80174E44:;
  W32(c->r[29]+0x00000008u,c->r[27]); // 80174E44
  c->r[0]=0u+0x00000000u; // 80174E48
  W32(c->r[27]+0x00000008u,c->r[0]); // 80174E4C
  c->r[0]=R32(c->r[29]+0x00000004u); // 80174E50
  W32(c->r[29]+0x0000000Cu,c->r[0]); // 80174E54
L_80174E58:;
  c->r[3]=c->r[30]+0x00000354u; // 80174E58
  c->lr=0x80174E60u; f_800667AC(c); // 80174E5C
  cmps(c,0,(int32_t)c->r[3],0); // 80174E60
  if (crb(c,2)) { goto L_80174E88; } // 80174E64
  c->r[0]=0u+0x00000000u; // 80174E68
  W32(c->r[30]+0x000005D0u,c->r[0]); // 80174E6C
  c->r[3]=c->r[30]|c->r[30]; // 80174E70
  c->lr=0x80174E78u; f_80174EA8(c); // 80174E74
  c->r[0]=R32(c->r[30]+0x000005BCu); // 80174E78
  W32(c->r[30]+0x00000684u,c->r[3]); // 80174E7C
  c->r[0]=c->r[0]|0x40000000u; // 80174E80
  W32(c->r[30]+0x000005BCu,c->r[0]); // 80174E84
L_80174E88:;
  c->r[10]=c->r[31]|c->r[31]; // 80174E88
  c->r[11]=c->r[10]+0x00000060u; // 80174E8C
  c->lr=0x80174E94u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80174E90
  c->r[10]=R32(c->r[1]+0x00000000u); // 80174E94
  c->r[0]=R32(c->r[10]+0x00000004u); // 80174E98
  c->r[1]=c->r[10]|c->r[10]; // 80174E9C
  c->lr=c->r[0]; // 80174EA0
  return; // 80174EA4
}

// fn_80174EA8
void f_80174EA8(Ctx* __restrict c) {
  trace_call(0x80174EA8u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80174EA8
  c->r[0]=c->lr; // 80174EAC
  W32(c->r[1]+0x00000044u,c->r[0]); // 80174EB0
  {uint32_t ea=c->r[1]+0x00000030u; for(int i=28;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 80174EB4
  c->r[31]=c->r[1]|c->r[1]; // 80174EB8
  c->r[28]=c->r[3]|c->r[3]; // 80174EBC
  c->lr=0x80174EC4u; f_80172528(c); // 80174EC0
  c->r[4]=c->r[3]|c->r[3]; // 80174EC4
  c->r[3]=c->r[28]|c->r[28]; // 80174EC8
  c->lr=0x80174ED0u; f_80062F4C(c); // 80174ECC
  c->r[0]=R8(c->r[28]+0x00000010u); // 80174ED0
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80174ED4
  c->r[3]=c->r[28]+c->r[0]; // 80174ED8
  c->r[29]=R32(c->r[3]+0x00000014u); // 80174EDC
  cmps(c,0,(int32_t)c->r[29],0); // 80174EE0
  if (crb(c,2)) { goto L_80174F18; } // 80174EE4
  c->r[30]=0u+0x00000000u; // 80174EE8
  W32(c->r[31]+0x00000024u,c->r[1]); // 80174EEC
  W8(c->r[31]+0x00000008u,c->r[30]); // 80174EF0
  c->lr=0x80174EF8u; f_80172528(c); // 80174EF4
  W32(c->r[29]+0x00000000u,c->r[3]); // 80174EF8
  c->r[0]=c->r[13]+0xFFFF8A88u; // 80174EFC
  c->r[3]=0u+0x806E0000u; // 80174F00
  W32(c->r[29]+0x00000004u,c->r[0]); // 80174F04
  c->r[3]=c->r[3]+0xFFFFF920u; // 80174F08
  W32(c->r[29]+0x00000008u,c->r[30]); // 80174F0C
  W32(c->r[29]+0x0000000Cu,c->r[30]); // 80174F10
  W32(c->r[29]+0x00000010u,c->r[3]); // 80174F14
L_80174F18:;
  W32(c->r[28]+0x00000008u,c->r[29]); // 80174F18
  c->r[0]=0u+0x00000000u; // 80174F1C
  c->r[3]=c->r[28]|c->r[28]; // 80174F20
  c->r[4]=c->r[29]|c->r[29]; // 80174F24
  W32(c->r[29]+0x00000008u,c->r[0]); // 80174F28
  c->r[0]=R32(c->r[28]+0x00000004u); // 80174F2C
  W32(c->r[28]+0x0000000Cu,c->r[0]); // 80174F30
  c->lr=0x80174F38u; f_8006306C(c); // 80174F34
  c->r[10]=c->r[31]|c->r[31]; // 80174F38
  c->r[3]=c->r[29]|c->r[29]; // 80174F3C
  {uint32_t ea=c->r[10]+0x00000030u; for(int i=28;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 80174F40
  c->r[10]=R32(c->r[1]+0x00000000u); // 80174F44
  c->r[0]=R32(c->r[10]+0x00000004u); // 80174F48
  c->r[1]=c->r[10]|c->r[10]; // 80174F4C
  c->lr=c->r[0]; // 80174F50
  return; // 80174F54
}

// fn_80174F58
void f_80174F58(Ctx* __restrict c) {
  trace_call(0x80174F58u);
  {uint32_t ea=c->r[1]+0xFFFFFF80u; W32(ea,c->r[1]); c->r[1]=ea;} // 80174F58
  c->r[0]=c->lr; // 80174F5C
  W32(c->r[1]+0x00000084u,c->r[0]); // 80174F60
  c->r[11]=c->r[1]+0x00000080u; // 80174F64
  c->lr=0x80174F6Cu; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80174F68
  c->r[31]=c->r[1]|c->r[1]; // 80174F6C
  c->r[4]=R32(c->r[3]+0x00000004u); // 80174F70
  c->r[30]=c->r[3]|c->r[3]; // 80174F74
  cmps(c,0,(int32_t)c->r[4],0); // 80174F78
  if (crb(c,2)) { goto L_80174F88; } // 80174F7C
  c->r[0]=R32(c->r[4]+0x00000008u); // 80174F80
  goto L_80174F8C; // 80174F84
L_80174F88:;
  c->r[0]=0u+0x00000000u; // 80174F88
L_80174F8C:;
  cmps(c,0,(int32_t)c->r[0],0); // 80174F8C
  if (!crb(c,2)) { goto L_80174F9C; } // 80174F90
  c->r[0]=0u+0x00000007u; // 80174F94
  W32(c->r[3]+0x000005CCu,c->r[0]); // 80174F98
L_80174F9C:;
  c->r[0]=R32(c->r[3]+0x000005D0u); // 80174F9C
  cmps(c,0,(int32_t)c->r[0],0); // 80174FA0
  if (crb(c,2)) { goto L_80174FC4; } // 80174FA4
  cmps(c,0,(int32_t)c->r[0],1); // 80174FA8
  if (crb(c,2)) { goto L_80175000; } // 80174FAC
  cmps(c,0,(int32_t)c->r[0],2); // 80174FB0
  if (crb(c,2)) { goto L_801751C8; } // 80174FB4
  cmps(c,0,(int32_t)c->r[0],3); // 80174FB8
  if (crb(c,2)) { goto L_801751E4; } // 80174FBC
  goto L_801752C4; // 80174FC0
L_80174FC4:;
  c->r[0]=0u+0x00000002u; // 80174FC4
  W32(c->r[3]+0x000005C8u,c->r[0]); // 80174FC8
  {uint32_t ea=c->r[2]+0xFFFFBC18u; c->f[1]=c->ps1[1]=RF32(ea);} // 80174FCC
  c->r[4]=0u+0xFFFFFFFFu; // 80174FD0
  c->r[3]=c->r[3]+0x000007F4u; // 80174FD4
  c->lr=0x80174FDCu; f_80172924(c); // 80174FD8
  {uint32_t ea=c->r[30]+0x00000690u; c->f[1]=c->ps1[1]=RF32(ea);} // 80174FDC
  c->r[3]=c->r[30]+0x000007F4u; // 80174FE0
  c->lr=0x80174FE8u; f_801739CC(c); // 80174FE4
  c->r[3]=R32(c->r[30]+0x000005D0u); // 80174FE8
  c->r[0]=0u+0x00000000u; // 80174FEC
  W32(c->r[30]+0x000005D8u,c->r[0]); // 80174FF0
  c->r[0]=c->r[3]+0x00000001u; // 80174FF4
  W32(c->r[30]+0x000005D0u,c->r[0]); // 80174FF8
  goto L_801752C4; // 80174FFC
L_80175000:;
  c->r[28]=0u+0x00000000u; // 80175000
  W32(c->r[3]+0x000005D4u,c->r[28]); // 80175004
  c->r[3]=c->r[30]|c->r[30]; // 80175008
  c->lr=0x80175010u; f_8016D6B4(c); // 8017500C
  {uint32_t ea=c->r[2]+0xFFFFBC14u; c->f[0]=c->ps1[0]=RF32(ea);} // 80175010
  fcmp(c,0,c->f[1],c->f[0]); // 80175014
  if (!crb(c,0)) { goto L_801750E4; } // 80175018
  c->r[0]=R32(c->r[30]+0x000005D8u); // 8017501C
  cmps(c,0,(int32_t)c->r[0],0); // 80175020
  if (crb(c,2)) { goto L_8017503C; } // 80175024
  cmps(c,0,(int32_t)c->r[0],1); // 80175028
  if (crb(c,2)) { goto L_801750C4; } // 8017502C
  cmps(c,0,(int32_t)c->r[0],2); // 80175030
  if (crb(c,2)) { goto L_801750D4; } // 80175034
  goto L_801751A8; // 80175038
L_8017503C:;
  c->lr=0x80175040u; f_80172354(c); // 8017503C
  c->r[4]=c->r[3]|c->r[3]; // 80175040
  c->r[3]=c->r[30]|c->r[30]; // 80175044
  c->lr=0x8017504Cu; f_80062F4C(c); // 80175048
  c->r[0]=R8(c->r[30]+0x00000010u); // 8017504C
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80175050
  c->r[3]=c->r[30]+c->r[0]; // 80175054
  c->r[29]=R32(c->r[3]+0x00000014u); // 80175058
  cmps(c,0,(int32_t)c->r[29],0); // 8017505C
  if (crb(c,2)) { goto L_80175090; } // 80175060
  W32(c->r[31]+0x00000064u,c->r[1]); // 80175064
  W8(c->r[31]+0x00000018u,c->r[28]); // 80175068
  c->lr=0x80175070u; f_80172354(c); // 8017506C
  W32(c->r[29]+0x00000000u,c->r[3]); // 80175070
  c->r[0]=c->r[13]+0xFFFF8A64u; // 80175074
  c->r[3]=0u+0x806E0000u; // 80175078
  W32(c->r[29]+0x00000004u,c->r[0]); // 8017507C
  c->r[3]=c->r[3]+0xFFFFF8ACu; // 80175080
  W32(c->r[29]+0x00000008u,c->r[28]); // 80175084
  W32(c->r[29]+0x0000000Cu,c->r[28]); // 80175088
  W32(c->r[29]+0x00000010u,c->r[3]); // 8017508C
L_80175090:;
  W32(c->r[30]+0x00000008u,c->r[29]); // 80175090
  c->r[0]=0u+0x00000000u; // 80175094
  c->r[3]=c->r[30]|c->r[30]; // 80175098
  c->r[4]=c->r[29]|c->r[29]; // 8017509C
  W32(c->r[29]+0x00000008u,c->r[0]); // 801750A0
  c->r[0]=R32(c->r[30]+0x00000004u); // 801750A4
  W32(c->r[30]+0x0000000Cu,c->r[0]); // 801750A8
  c->lr=0x801750B0u; f_8006306C(c); // 801750AC
  c->r[0]=R32(c->r[30]+0x000005BCu); // 801750B0
  W32(c->r[30]+0x00000688u,c->r[29]); // 801750B4
  c->r[0]=c->r[0]|0x40000000u; // 801750B8
  W32(c->r[30]+0x000005BCu,c->r[0]); // 801750BC
  goto L_801751A8; // 801750C0
L_801750C4:;
  c->r[3]=c->r[30]|c->r[30]; // 801750C4
  c->lr=0x801750CCu; f_80175560(c); // 801750C8
  W32(c->r[30]+0x00000688u,c->r[3]); // 801750CC
  goto L_801751A8; // 801750D0
L_801750D4:;
  c->r[3]=c->r[30]|c->r[30]; // 801750D4
  c->lr=0x801750DCu; f_801754A4(c); // 801750D8
  W32(c->r[30]+0x00000688u,c->r[3]); // 801750DC
  goto L_801751A8; // 801750E0
L_801750E4:;
  c->r[0]=R32(c->r[30]+0x000005D8u); // 801750E4
  cmps(c,0,(int32_t)c->r[0],0); // 801750E8
  if (crb(c,2)) { goto L_80175104; } // 801750EC
  cmps(c,0,(int32_t)c->r[0],1); // 801750F0
  if (crb(c,2)) { goto L_80175114; } // 801750F4
  cmps(c,0,(int32_t)c->r[0],2); // 801750F8
  if (crb(c,2)) { goto L_80175124; } // 801750FC
  goto L_801751A8; // 80175100
L_80175104:;
  c->r[3]=c->r[30]|c->r[30]; // 80175104
  c->lr=0x8017510Cu; f_80175560(c); // 80175108
  W32(c->r[30]+0x00000688u,c->r[3]); // 8017510C
  goto L_801751A8; // 80175110
L_80175114:;
  c->r[3]=c->r[30]|c->r[30]; // 80175114
  c->lr=0x8017511Cu; f_801754A4(c); // 80175118
  W32(c->r[30]+0x00000688u,c->r[3]); // 8017511C
  goto L_801751A8; // 80175120
L_80175124:;
  c->lr=0x80175128u; f_801722B8(c); // 80175124
  c->r[4]=c->r[3]|c->r[3]; // 80175128
  c->r[3]=c->r[30]|c->r[30]; // 8017512C
  c->lr=0x80175134u; f_80062F4C(c); // 80175130
  c->r[0]=R8(c->r[30]+0x00000010u); // 80175134
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80175138
  c->r[3]=c->r[30]+c->r[0]; // 8017513C
  c->r[29]=R32(c->r[3]+0x00000014u); // 80175140
  cmps(c,0,(int32_t)c->r[29],0); // 80175144
  if (crb(c,2)) { goto L_80175178; } // 80175148
  W32(c->r[31]+0x0000004Cu,c->r[1]); // 8017514C
  W8(c->r[31]+0x00000014u,c->r[28]); // 80175150
  c->lr=0x80175158u; f_801722B8(c); // 80175154
  W32(c->r[29]+0x00000000u,c->r[3]); // 80175158
  c->r[0]=c->r[13]+0xFFFF8A58u; // 8017515C
  c->r[3]=0u+0x806E0000u; // 80175160
  W32(c->r[29]+0x00000004u,c->r[0]); // 80175164
  c->r[3]=c->r[3]+0xFFFFF888u; // 80175168
  W32(c->r[29]+0x00000008u,c->r[28]); // 8017516C
  W32(c->r[29]+0x0000000Cu,c->r[28]); // 80175170
  W32(c->r[29]+0x00000010u,c->r[3]); // 80175174
L_80175178:;
  W32(c->r[30]+0x00000008u,c->r[29]); // 80175178
  c->r[0]=0u+0x00000000u; // 8017517C
  c->r[3]=c->r[30]|c->r[30]; // 80175180
  c->r[4]=c->r[29]|c->r[29]; // 80175184
  W32(c->r[29]+0x00000008u,c->r[0]); // 80175188
  c->r[0]=R32(c->r[30]+0x00000004u); // 8017518C
  W32(c->r[30]+0x0000000Cu,c->r[0]); // 80175190
  c->lr=0x80175198u; f_8006306C(c); // 80175194
  c->r[0]=R32(c->r[30]+0x000005BCu); // 80175198
  W32(c->r[30]+0x00000688u,c->r[29]); // 8017519C
  c->r[0]=c->r[0]|0x40000000u; // 801751A0
  W32(c->r[30]+0x000005BCu,c->r[0]); // 801751A4
L_801751A8:;
  c->r[3]=R32(c->r[30]+0x000005D8u); // 801751A8
  c->r[0]=c->r[3]+0x00000001u; // 801751AC
  W32(c->r[30]+0x000005D8u,c->r[0]); // 801751B0
  cmps(c,0,(int32_t)c->r[0],2); // 801751B4
  if (!crb(c,1)) { goto L_801752C4; } // 801751B8
  c->r[0]=0u+0x00000000u; // 801751BC
  W32(c->r[30]+0x000005D8u,c->r[0]); // 801751C0
  goto L_801752C4; // 801751C4
L_801751C8:;
  c->r[3]=c->r[3]+0x00000354u; // 801751C8
  c->lr=0x801751D0u; f_800667AC(c); // 801751CC
  cmps(c,0,(int32_t)c->r[3],0); // 801751D0
  if (crb(c,2)) { goto L_801752C4; } // 801751D4
  c->r[0]=0u+0x00000001u; // 801751D8
  W32(c->r[30]+0x000005D0u,c->r[0]); // 801751DC
  goto L_801752C4; // 801751E0
L_801751E4:;
  {uint32_t ea=c->r[2]+0xFFFFBC50u; c->f[1]=c->ps1[1]=RF32(ea);} // 801751E4
  c->r[3]=c->r[3]+0x000005DCu; // 801751E8
  c->lr=0x801751F0u; f_800E2B50(c); // 801751EC
  cmps(c,0,(int32_t)c->r[3],0); // 801751F0
  if (crb(c,2)) { goto L_801752A0; } // 801751F4
  c->r[3]=c->r[30]+0x00000694u; // 801751F8
  c->lr=0x80175200u; f_800655F4(c); // 801751FC
  cmps(c,0,(int32_t)c->r[3],0); // 80175200
  if (crb(c,2)) { goto L_80175264; } // 80175204
  c->r[3]=c->r[30]+0x00000694u; // 80175208
  c->lr=0x80175210u; f_800DBAA4(c); // 8017520C
  c->r[0]=R8(c->r[3]+0x00000010u); // 80175210
  c->r[28]=c->r[3]|c->r[3]; // 80175214
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80175218
  c->r[3]=c->r[3]+c->r[0]; // 8017521C
  c->r[27]=R32(c->r[3]+0x00000014u); // 80175220
  cmps(c,0,(int32_t)c->r[27],0); // 80175224
  if (crb(c,2)) { goto L_80175250; } // 80175228
  c->r[29]=0u+0x00000000u; // 8017522C
  W32(c->r[31]+0x00000034u,c->r[1]); // 80175230
  W8(c->r[31]+0x00000010u,c->r[29]); // 80175234
  c->lr=0x8017523Cu; f_80062D3C(c); // 80175238
  W32(c->r[27]+0x00000000u,c->r[3]); // 8017523C
  c->r[0]=c->r[13]+0xFFFF80BCu; // 80175240
  W32(c->r[27]+0x00000004u,c->r[0]); // 80175244
  W32(c->r[27]+0x00000008u,c->r[29]); // 80175248
  W32(c->r[27]+0x0000000Cu,c->r[29]); // 8017524C
L_80175250:;
  W32(c->r[28]+0x00000008u,c->r[27]); // 80175250
  c->r[0]=0u+0x00000000u; // 80175254
  W32(c->r[27]+0x00000008u,c->r[0]); // 80175258
  c->r[0]=R32(c->r[28]+0x00000004u); // 8017525C
  W32(c->r[28]+0x0000000Cu,c->r[0]); // 80175260
L_80175264:;
  c->r[29]=0u+0x00000000u; // 80175264
  W8(c->r[31]+0x0000000Cu,c->r[29]); // 80175268
  c->r[3]=c->r[31]+0x0000000Cu; // 8017526C
  c->lr=0x80175274u; f_80046EFC(c); // 80175270
  c->r[4]=0u+0x00000020u; // 80175274
  c->r[5]=0u+0x00000001u; // 80175278
  c->r[6]=0u+0xFFFFFFFFu; // 8017527C
  c->lr=0x80175284u; f_800B1DE0(c); // 80175280
  W8(c->r[31]+0x00000008u,c->r[29]); // 80175284
  c->r[3]=c->r[31]+0x00000008u; // 80175288
  c->lr=0x80175290u; f_8004F3FC(c); // 8017528C
  c->r[4]=0u+0x80690000u; // 80175290
  c->r[4]=c->r[4]+0x00001598u; // 80175294
  c->r[4]=c->r[4]+0x000000C8u; // 80175298
  c->lr=0x801752A0u; f_801752E4(c); // 8017529C
L_801752A0:;
  c->r[3]=c->r[30]+0x000005DCu; // 801752A0
  c->lr=0x801752A8u; f_800E2B1C(c); // 801752A4
  cmps(c,0,(int32_t)c->r[3],0); // 801752A8
  if (crb(c,2)) { goto L_801752C4; } // 801752AC
  c->r[3]=c->r[30]|c->r[30]; // 801752B0
  c->lr=0x801752B8u; f_80172E5C(c); // 801752B4
  c->r[0]=0u+0x00000000u; // 801752B8
  W32(c->r[30]+0x00000684u,c->r[3]); // 801752BC
  W32(c->r[30]+0x000005D0u,c->r[0]); // 801752C0
L_801752C4:;
  c->r[10]=c->r[31]|c->r[31]; // 801752C4
  c->r[11]=c->r[10]+0x00000080u; // 801752C8
  c->lr=0x801752D0u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801752CC
  c->r[10]=R32(c->r[1]+0x00000000u); // 801752D0
  c->r[0]=R32(c->r[10]+0x00000004u); // 801752D4
  c->r[1]=c->r[10]|c->r[10]; // 801752D8
  c->lr=c->r[0]; // 801752DC
  return; // 801752E0
}

// fn_801752E4
void f_801752E4(Ctx* __restrict c) {
  trace_call(0x801752E4u);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801752E4
  c->r[0]=c->lr; // 801752E8
  W32(c->r[1]+0x00000054u,c->r[0]); // 801752EC
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=17;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 801752F0
  c->r[25]=0u+0x80730000u; // 801752F4
  c->r[26]=0u+0x806D0000u; // 801752F8
  c->r[19]=c->r[3]|c->r[3]; // 801752FC
  c->r[20]=c->r[4]|c->r[4]; // 80175300
  c->r[27]=c->r[25]+0x00006160u; // 80175304
  c->r[26]=c->r[26]+0xFFFFC37Cu; // 80175308
  c->r[21]=0u+0x00000000u; // 8017530C
  c->r[17]=0u+0x00000000u; // 80175310
  c->r[24]=0u+0x00000000u; // 80175314
  c->r[28]=0u+0x80050000u; // 80175318
  c->r[29]=0u+0x80750000u; // 8017531C
  c->r[30]=0u+0x00000001u; // 80175320
  c->r[31]=0u+0x00000002u; // 80175324
  c->r[18]=0u+0x00000004u; // 80175328
L_8017532C:;
  W8(c->r[1]+0x00000008u,c->r[24]); // 8017532C
  c->r[3]=c->r[1]+0x00000008u; // 80175330
  c->r[22]=c->r[19]+c->r[17]; // 80175334
  c->lr=0x8017533Cu; f_8004DBC0(c); // 80175338
  c->r[4]=R32(c->r[22]+0x00000958u); // 8017533C
  c->lr=0x80175344u; f_80099348(c); // 80175340
  cmps(c,0,(int32_t)c->r[3],0); // 80175344
  if (crb(c,2)) { goto L_80175468; } // 80175348
  c->r[5]=R32(c->r[22]+0x00000958u); // 8017534C
  c->r[6]=0u+0x00000000u; // 80175350
  c->r[3]=0u+0x00000000u; // 80175354
  c->ctr=c->r[18]; // 80175358
L_8017535C:;
  c->r[4]=c->r[19]+c->r[3]; // 8017535C
  c->r[0]=R32(c->r[4]+0x00000958u); // 80175360
  cmps(c,0,(int32_t)c->r[5],(int32_t)c->r[0]); // 80175364
  if (crb(c,2)) { goto L_80175378; } // 80175368
  c->r[6]=c->r[6]+0x00000001u; // 8017536C
  c->r[3]=c->r[3]+0x000008B0u; // 80175370
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8017535C; } // 80175374
L_80175378:;
  cmps(c,0,(int32_t)c->r[6],4); // 80175378
  c->r[0]=0u+0xFFFFFFFFu; // 8017537C
  if (!crb(c,0)) { goto L_80175388; } // 80175380
  c->r[0]=c->r[6]|c->r[6]; // 80175384
L_80175388:;
  cmps(c,0,(int32_t)c->r[0],0); // 80175388
  if (crb(c,0)) { goto L_80175468; } // 8017538C
  c->r[22]=(uint32_t)((int32_t)c->r[0]*(int32_t)2224); // 80175390
  c->r[4]=c->r[20]|c->r[20]; // 80175394
  c->r[3]=c->r[19]+c->r[22]; // 80175398
  c->r[3]=c->r[3]+0x00000130u; // 8017539C
  c->lr=0x801753A4u; f_800A1DB0(c); // 801753A0
  cmps(c,0,(int32_t)c->r[3],0); // 801753A4
  c->r[23]=c->r[3]|c->r[3]; // 801753A8
  if (crb(c,0)) { goto L_80175450; } // 801753AC
  cmpu(c,0,c->r[3],0x000003FFu); // 801753B0
  c->r[4]=c->r[23]|c->r[23]; // 801753B4
  if (!crb(c,1)) { goto L_801753C0; } // 801753B8
  c->r[4]=0u+0x00000000u; // 801753BC
L_801753C0:;
  c->r[0]=sraw(c,c->r[4],3); // 801753C0
  c->r[22]=c->r[19]+c->r[22]; // 801753C4
  c->r[3]=c->r[22]+c->r[0]; // 801753C8
  c->r[4]=rotl(c->r[4],0)&0x00000007u; // 801753CC
  c->r[0]=R8(c->r[3]+0x000000B0u); // 801753D0
  c->r[3]=((c->r[4])&0x20)?0u:(c->r[30]<<((c->r[4])&31)); // 801753D4
  c->r[0]=c->r[3]&c->r[0]; cr0(c,c->r[0]); // 801753D8
  if (!crb(c,2)) { goto L_80175424; } // 801753DC
  c->r[0]=R8(c->r[13]+0xFFFFBB87u); // 801753E0
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 801753E4
  if (!crb(c,2)) { goto L_80175414; } // 801753E8
  c->r[3]=c->r[25]+0x00006160u; // 801753EC
  c->lr=0x801753F4u; f_8008C1BC(c); // 801753F0
  c->r[0]=c->r[26]+0x00000028u; // 801753F4
  W32(c->r[27]+0x000000A4u,c->r[26]); // 801753F8
  c->r[3]=c->r[27]|c->r[27]; // 801753FC
  c->r[4]=c->r[28]+0xFFFF9F5Cu; // 80175400
  W32(c->r[27]+0x000000A8u,c->r[0]); // 80175404
  c->r[5]=c->r[29]+0x00004940u; // 80175408
  c->lr=0x80175410u; f_803A92B8(c); // 8017540C
  W8(c->r[13]+0xFFFFBB87u,c->r[30]); // 80175410
L_80175414:;
  c->r[4]=c->r[20]|c->r[20]; // 80175414
  c->r[3]=c->r[25]+0x00006160u; // 80175418
  c->lr=0x80175420u; f_8008CD98(c); // 8017541C
  W32(c->r[22]+0x00000950u,c->r[31]); // 80175420
L_80175424:;
  cmpu(c,0,c->r[23],0x000003FFu); // 80175424
  if (!crb(c,1)) { goto L_80175430; } // 80175428
  c->r[23]=0u+0x00000000u; // 8017542C
L_80175430:;
  c->r[3]=sraw(c,c->r[23],3); // 80175430
  c->r[0]=rotl(c->r[23],0)&0x00000007u; // 80175434
  c->r[4]=c->r[22]+c->r[3]; // 80175438
  c->r[0]=((c->r[0])&0x20)?0u:(c->r[30]<<((c->r[0])&31)); // 8017543C
  c->r[3]=R8(c->r[4]+0x000000B0u); // 80175440
  c->r[0]=rotl(c->r[0],0)&0x000000FFu; // 80175444
  c->r[0]=c->r[3]|c->r[0]; // 80175448
  W8(c->r[4]+0x000000B0u,c->r[0]); // 8017544C
L_80175450:;
  c->r[4]=c->r[20]|c->r[20]; // 80175450
  c->r[3]=c->r[19]+0x0000236Cu; // 80175454
  c->lr=0x8017545Cu; f_80092BC0(c); // 80175458
  c->r[4]=c->r[20]|c->r[20]; // 8017545C
  c->r[3]=c->r[19]+0x000023ECu; // 80175460
  c->lr=0x80175468u; f_80092C64(c); // 80175464
L_80175468:;
  c->r[21]=c->r[21]+0x00000001u; // 80175468
  c->r[17]=c->r[17]+0x000008B0u; // 8017546C
  cmps(c,0,(int32_t)c->r[21],4); // 80175470
  if (crb(c,0)) { IRQCHK(c); goto L_8017532C; } // 80175474
  c->r[4]=c->r[20]|c->r[20]; // 80175478
  c->r[3]=c->r[19]+0x0000236Cu; // 8017547C
  c->lr=0x80175484u; f_80092BC0(c); // 80175480
  c->r[4]=c->r[20]|c->r[20]; // 80175484
  c->r[3]=c->r[19]+0x000023ECu; // 80175488
  c->lr=0x80175490u; f_80092C64(c); // 8017548C
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=17;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 80175490
  c->r[0]=R32(c->r[1]+0x00000054u); // 80175494
  c->lr=c->r[0]; // 80175498
  c->r[1]=c->r[1]+0x00000050u; // 8017549C
  return; // 801754A0
}

// fn_801754A4
void f_801754A4(Ctx* __restrict c) {
  trace_call(0x801754A4u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801754A4
  c->r[0]=c->lr; // 801754A8
  W32(c->r[1]+0x00000044u,c->r[0]); // 801754AC
  {uint32_t ea=c->r[1]+0x00000030u; for(int i=28;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 801754B0
  c->r[31]=c->r[1]|c->r[1]; // 801754B4
  c->r[28]=c->r[3]|c->r[3]; // 801754B8
  c->lr=0x801754C0u; f_80172388(c); // 801754BC
  c->r[4]=c->r[3]|c->r[3]; // 801754C0
  c->r[3]=c->r[28]|c->r[28]; // 801754C4
  c->lr=0x801754CCu; f_80062F4C(c); // 801754C8
  c->r[0]=R8(c->r[28]+0x00000010u); // 801754CC
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801754D0
  c->r[3]=c->r[28]+c->r[0]; // 801754D4
  c->r[29]=R32(c->r[3]+0x00000014u); // 801754D8
  cmps(c,0,(int32_t)c->r[29],0); // 801754DC
  if (crb(c,2)) { goto L_80175514; } // 801754E0
  c->r[30]=0u+0x00000000u; // 801754E4
  W32(c->r[31]+0x00000024u,c->r[1]); // 801754E8
  W8(c->r[31]+0x00000008u,c->r[30]); // 801754EC
  c->lr=0x801754F4u; f_80172388(c); // 801754F0
  W32(c->r[29]+0x00000000u,c->r[3]); // 801754F4
  c->r[0]=c->r[13]+0xFFFF8A68u; // 801754F8
  c->r[3]=0u+0x806E0000u; // 801754FC
  W32(c->r[29]+0x00000004u,c->r[0]); // 80175500
  c->r[3]=c->r[3]+0xFFFFF8B8u; // 80175504
  W32(c->r[29]+0x00000008u,c->r[30]); // 80175508
  W32(c->r[29]+0x0000000Cu,c->r[30]); // 8017550C
  W32(c->r[29]+0x00000010u,c->r[3]); // 80175510
L_80175514:;
  W32(c->r[28]+0x00000008u,c->r[29]); // 80175514
  c->r[0]=0u+0x00000000u; // 80175518
  c->r[3]=c->r[28]|c->r[28]; // 8017551C
  c->r[4]=c->r[29]|c->r[29]; // 80175520
  W32(c->r[29]+0x00000008u,c->r[0]); // 80175524
  c->r[0]=R32(c->r[28]+0x00000004u); // 80175528
  W32(c->r[28]+0x0000000Cu,c->r[0]); // 8017552C
  c->lr=0x80175534u; f_8006306C(c); // 80175530
  c->r[0]=R32(c->r[28]+0x000005BCu); // 80175534
  c->r[10]=c->r[31]|c->r[31]; // 80175538
  c->r[3]=c->r[29]|c->r[29]; // 8017553C
  c->r[0]=c->r[0]|0x40000000u; // 80175540
  W32(c->r[28]+0x000005BCu,c->r[0]); // 80175544
  {uint32_t ea=c->r[10]+0x00000030u; for(int i=28;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 80175548
  c->r[10]=R32(c->r[1]+0x00000000u); // 8017554C
  c->r[0]=R32(c->r[10]+0x00000004u); // 80175550
  c->r[1]=c->r[10]|c->r[10]; // 80175554
  c->lr=c->r[0]; // 80175558
  return; // 8017555C
}

// fn_80175560
void f_80175560(Ctx* __restrict c) {
  trace_call(0x80175560u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80175560
  c->r[0]=c->lr; // 80175564
  W32(c->r[1]+0x00000044u,c->r[0]); // 80175568
  {uint32_t ea=c->r[1]+0x00000030u; for(int i=28;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 8017556C
  c->r[31]=c->r[1]|c->r[1]; // 80175570
  c->r[28]=c->r[3]|c->r[3]; // 80175574
  c->lr=0x8017557Cu; f_801723BC(c); // 80175578
  c->r[4]=c->r[3]|c->r[3]; // 8017557C
  c->r[3]=c->r[28]|c->r[28]; // 80175580
  c->lr=0x80175588u; f_80062F4C(c); // 80175584
  c->r[0]=R8(c->r[28]+0x00000010u); // 80175588
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 8017558C
  c->r[3]=c->r[28]+c->r[0]; // 80175590
  c->r[29]=R32(c->r[3]+0x00000014u); // 80175594
  cmps(c,0,(int32_t)c->r[29],0); // 80175598
  if (crb(c,2)) { goto L_801755D0; } // 8017559C
  c->r[30]=0u+0x00000000u; // 801755A0
  W32(c->r[31]+0x00000024u,c->r[1]); // 801755A4
  W8(c->r[31]+0x00000008u,c->r[30]); // 801755A8
  c->lr=0x801755B0u; f_801723BC(c); // 801755AC
  W32(c->r[29]+0x00000000u,c->r[3]); // 801755B0
  c->r[0]=c->r[13]+0xFFFF8A6Cu; // 801755B4
  c->r[3]=0u+0x806E0000u; // 801755B8
  W32(c->r[29]+0x00000004u,c->r[0]); // 801755BC
  c->r[3]=c->r[3]+0xFFFFF8C4u; // 801755C0
  W32(c->r[29]+0x00000008u,c->r[30]); // 801755C4
  W32(c->r[29]+0x0000000Cu,c->r[30]); // 801755C8
  W32(c->r[29]+0x00000010u,c->r[3]); // 801755CC
L_801755D0:;
  W32(c->r[28]+0x00000008u,c->r[29]); // 801755D0
  c->r[0]=0u+0x00000000u; // 801755D4
  c->r[3]=c->r[28]|c->r[28]; // 801755D8
  c->r[4]=c->r[29]|c->r[29]; // 801755DC
  W32(c->r[29]+0x00000008u,c->r[0]); // 801755E0
  c->r[0]=R32(c->r[28]+0x00000004u); // 801755E4
  W32(c->r[28]+0x0000000Cu,c->r[0]); // 801755E8
  c->lr=0x801755F0u; f_8006306C(c); // 801755EC
  c->r[0]=R32(c->r[28]+0x000005BCu); // 801755F0
  c->r[10]=c->r[31]|c->r[31]; // 801755F4
  c->r[3]=c->r[29]|c->r[29]; // 801755F8
  c->r[0]=c->r[0]|0x40000000u; // 801755FC
  W32(c->r[28]+0x000005BCu,c->r[0]); // 80175600
  {uint32_t ea=c->r[10]+0x00000030u; for(int i=28;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 80175604
  c->r[10]=R32(c->r[1]+0x00000000u); // 80175608
  c->r[0]=R32(c->r[10]+0x00000004u); // 8017560C
  c->r[1]=c->r[10]|c->r[10]; // 80175610
  c->lr=c->r[0]; // 80175614
  return; // 80175618
}

// fn_8017561C
void f_8017561C(Ctx* __restrict c) {
  trace_call(0x8017561Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8017561C
  c->r[0]=c->lr; // 80175620
  c->r[5]=0u+0x00000000u; // 80175624
  W32(c->r[1]+0x00000014u,c->r[0]); // 80175628
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8017562C
  W32(c->r[1]+0x00000008u,c->r[30]); // 80175630
  c->r[30]=c->r[4]|c->r[4]; // 80175634
  c->r[4]=0u+0x00000005u; // 80175638
  c->r[3]=c->r[30]|c->r[30]; // 8017563C
  c->lr=0x80175644u; f_800D5F20(c); // 80175640
  {uint32_t ea=c->r[2]+0xFFFFBC0Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 80175644
  c->r[3]=c->r[30]+0x000007F4u; // 80175648
  c->r[4]=0u+0xFFFFFFFFu; // 8017564C
  c->lr=0x80175654u; f_80172924(c); // 80175650
  c->r[31]=0u+0x80690000u; // 80175654
  {uint32_t ea=c->r[2]+0xFFFFBC10u; c->f[1]=c->ps1[1]=RF32(ea);} // 80175658
  c->r[31]=c->r[31]+0x00001598u; // 8017565C
  {uint32_t ea=c->r[2]+0xFFFFBC0Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 80175660
  {uint32_t ea=c->r[2]+0xFFFFBC34u; c->f[3]=c->ps1[3]=RF32(ea);} // 80175664
  c->r[3]=c->r[30]+0x000005DCu; // 80175668
  c->r[4]=c->r[31]+0x000000D5u; // 8017566C
  c->lr=0x80175674u; f_800E24D0(c); // 80175670
  c->r[4]=0u+0x00010000u; // 80175674
  c->r[3]=c->r[30]|c->r[30]; // 80175678
  c->r[4]=c->r[4]+0xFFFFE80Du; // 8017567C
  c->r[5]=0u+0x00000001u; // 80175680
  c->lr=0x80175688u; f_80064744(c); // 80175684
  c->r[3]=R32(c->r[30]+0x00000404u); // 80175688
  c->r[6]=c->r[31]+0x0000001Du; // 8017568C
  {uint32_t ea=c->r[2]+0xFFFFBC0Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 80175690
  c->r[4]=0u+0x00000002u; // 80175694
  {uint32_t ea=c->r[2]+0xFFFFBC10u; c->f[2]=c->ps1[2]=RF32(ea);} // 80175698
  c->r[5]=0u+0x00000003u; // 8017569C
  c->lr=0x801756A4u; f_802E91C8(c); // 801756A0
  c->r[3]=0u+0x00000002u; // 801756A4
  c->r[0]=0u+0x00000003u; // 801756A8
  W32(c->r[30]+0x000005C8u,c->r[3]); // 801756AC
  c->r[3]=c->r[30]|c->r[30]; // 801756B0
  W32(c->r[30]+0x000005D0u,c->r[0]); // 801756B4
  c->lr=0x801756BCu; f_80174EA8(c); // 801756B8
  c->r[0]=R32(c->r[30]+0x000005BCu); // 801756BC
  c->r[0]=c->r[0]|0x40000000u; // 801756C0
  W32(c->r[30]+0x000005BCu,c->r[0]); // 801756C4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801756C8
  c->r[30]=R32(c->r[1]+0x00000008u); // 801756CC
  c->r[0]=R32(c->r[1]+0x00000014u); // 801756D0
  c->lr=c->r[0]; // 801756D4
  c->r[1]=c->r[1]+0x00000010u; // 801756D8
  return; // 801756DC
}

// fn_801756E0
void f_801756E0(Ctx* __restrict c) {
  trace_call(0x801756E0u);
  return; // 801756E0
}

// fn_801756E4
void f_801756E4(Ctx* __restrict c) {
  trace_call(0x801756E4u);
  {uint32_t ea=c->r[1]+0xFFFFFF80u; W32(ea,c->r[1]); c->r[1]=ea;} // 801756E4
  c->r[0]=c->lr; // 801756E8
  W32(c->r[1]+0x00000084u,c->r[0]); // 801756EC
  c->r[11]=c->r[1]+0x00000080u; // 801756F0
  c->lr=0x801756F8u; { W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801756F4
  c->r[31]=c->r[1]|c->r[1]; // 801756F8
  c->r[4]=R32(c->r[3]+0x00000004u); // 801756FC
  c->r[30]=c->r[3]|c->r[3]; // 80175700
  cmps(c,0,(int32_t)c->r[4],0); // 80175704
  if (crb(c,2)) { goto L_80175714; } // 80175708
  c->r[0]=R32(c->r[4]+0x00000008u); // 8017570C
  goto L_80175718; // 80175710
L_80175714:;
  c->r[0]=0u+0x00000000u; // 80175714
L_80175718:;
  cmps(c,0,(int32_t)c->r[0],0); // 80175718
  if (!crb(c,2)) { goto L_80175728; } // 8017571C
  c->r[0]=0u+0x00000008u; // 80175720
  W32(c->r[3]+0x000005CCu,c->r[0]); // 80175724
L_80175728:;
  c->r[0]=R32(c->r[3]+0x000005D0u); // 80175728
  cmps(c,0,(int32_t)c->r[0],0); // 8017572C
  if (crb(c,2)) { goto L_80175750; } // 80175730
  cmps(c,0,(int32_t)c->r[0],1); // 80175734
  if (crb(c,2)) { goto L_801757B0; } // 80175738
  cmps(c,0,(int32_t)c->r[0],2); // 8017573C
  if (crb(c,2)) { goto L_80175978; } // 80175740
  cmps(c,0,(int32_t)c->r[0],3); // 80175744
  if (crb(c,2)) { goto L_80175994; } // 80175748
  goto L_80175AD0; // 8017574C
L_80175750:;
  c->r[4]=0u+0x80690000u; // 80175750
  c->r[3]=R32(c->r[3]+0x00000404u); // 80175754
  c->r[4]=c->r[4]+0x00001598u; // 80175758
  {uint32_t ea=c->r[2]+0xFFFFBC0Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8017575C
  c->r[6]=c->r[4]+0x0000001Du; // 80175760
  {uint32_t ea=c->r[2]+0xFFFFBC10u; c->f[2]=c->ps1[2]=RF32(ea);} // 80175764
  c->r[4]=0u+0x00000002u; // 80175768
  c->r[5]=0u+0x00000003u; // 8017576C
  c->lr=0x80175774u; f_802E91C8(c); // 80175770
  c->r[0]=0u+0x00000002u; // 80175774
  W32(c->r[30]+0x000005C8u,c->r[0]); // 80175778
  {uint32_t ea=c->r[2]+0xFFFFBC0Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8017577C
  c->r[3]=c->r[30]+0x000007F4u; // 80175780
  c->r[4]=0u+0xFFFFFFFFu; // 80175784
  c->lr=0x8017578Cu; f_80172924(c); // 80175788
  {uint32_t ea=c->r[30]+0x00000690u; c->f[1]=c->ps1[1]=RF32(ea);} // 8017578C
  c->r[3]=c->r[30]+0x000007F4u; // 80175790
  c->lr=0x80175798u; f_801739CC(c); // 80175794
  c->r[3]=R32(c->r[30]+0x000005D0u); // 80175798
  c->r[0]=0u+0x00000000u; // 8017579C
  W32(c->r[30]+0x000005D8u,c->r[0]); // 801757A0
  c->r[0]=c->r[3]+0x00000001u; // 801757A4
  W32(c->r[30]+0x000005D0u,c->r[0]); // 801757A8
  goto L_80175AD0; // 801757AC
L_801757B0:;
  c->r[28]=0u+0x00000000u; // 801757B0
  W32(c->r[3]+0x000005D4u,c->r[28]); // 801757B4
  c->r[3]=c->r[30]|c->r[30]; // 801757B8
  c->lr=0x801757C0u; f_8016D6B4(c); // 801757BC
  {uint32_t ea=c->r[2]+0xFFFFBC18u; c->f[0]=c->ps1[0]=RF32(ea);} // 801757C0
  fcmp(c,0,c->f[1],c->f[0]); // 801757C4
  if (!crb(c,0)) { goto L_80175894; } // 801757C8
  c->r[0]=R32(c->r[30]+0x000005D8u); // 801757CC
  cmps(c,0,(int32_t)c->r[0],0); // 801757D0
  if (crb(c,2)) { goto L_801757EC; } // 801757D4
  cmps(c,0,(int32_t)c->r[0],1); // 801757D8
  if (crb(c,2)) { goto L_801757FC; } // 801757DC
  cmps(c,0,(int32_t)c->r[0],2); // 801757E0
  if (crb(c,2)) { goto L_8017580C; } // 801757E4
  goto L_80175958; // 801757E8
L_801757EC:;
  c->r[3]=c->r[30]|c->r[30]; // 801757EC
  c->lr=0x801757F4u; f_80175BAC(c); // 801757F0
  W32(c->r[30]+0x00000688u,c->r[3]); // 801757F4
  goto L_80175958; // 801757F8
L_801757FC:;
  c->r[3]=c->r[30]|c->r[30]; // 801757FC
  c->lr=0x80175804u; f_80175AF0(c); // 80175800
  W32(c->r[30]+0x00000688u,c->r[3]); // 80175804
  goto L_80175958; // 80175808
L_8017580C:;
  c->lr=0x80175810u; f_80172220(c); // 8017580C
  c->r[4]=c->r[3]|c->r[3]; // 80175810
  c->r[3]=c->r[30]|c->r[30]; // 80175814
  c->lr=0x8017581Cu; f_80062F4C(c); // 80175818
  c->r[0]=R8(c->r[30]+0x00000010u); // 8017581C
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80175820
  c->r[3]=c->r[30]+c->r[0]; // 80175824
  c->r[29]=R32(c->r[3]+0x00000014u); // 80175828
  cmps(c,0,(int32_t)c->r[29],0); // 8017582C
  if (crb(c,2)) { goto L_80175860; } // 80175830
  W32(c->r[31]+0x0000006Cu,c->r[1]); // 80175834
  W8(c->r[31]+0x0000001Cu,c->r[28]); // 80175838
  c->lr=0x80175840u; f_80172220(c); // 8017583C
  W32(c->r[29]+0x00000000u,c->r[3]); // 80175840
  c->r[0]=c->r[13]+0xFFFF8A50u; // 80175844
  c->r[3]=0u+0x806E0000u; // 80175848
  W32(c->r[29]+0x00000004u,c->r[0]); // 8017584C
  c->r[3]=c->r[3]+0xFFFFF870u; // 80175850
  W32(c->r[29]+0x00000008u,c->r[28]); // 80175854
  W32(c->r[29]+0x0000000Cu,c->r[28]); // 80175858
  W32(c->r[29]+0x00000010u,c->r[3]); // 8017585C
L_80175860:;
  W32(c->r[30]+0x00000008u,c->r[29]); // 80175860
  c->r[0]=0u+0x00000000u; // 80175864
  c->r[3]=c->r[30]|c->r[30]; // 80175868
  c->r[4]=c->r[29]|c->r[29]; // 8017586C
  W32(c->r[29]+0x00000008u,c->r[0]); // 80175870
  c->r[0]=R32(c->r[30]+0x00000004u); // 80175874
  W32(c->r[30]+0x0000000Cu,c->r[0]); // 80175878
  c->lr=0x80175880u; f_8006306C(c); // 8017587C
  c->r[0]=R32(c->r[30]+0x000005BCu); // 80175880
  W32(c->r[30]+0x00000688u,c->r[29]); // 80175884
  c->r[0]=c->r[0]|0x40000000u; // 80175888
  W32(c->r[30]+0x000005BCu,c->r[0]); // 8017588C
  goto L_80175958; // 80175890
L_80175894:;
  c->r[0]=R32(c->r[30]+0x000005D8u); // 80175894
  cmps(c,0,(int32_t)c->r[0],0); // 80175898
  if (crb(c,2)) { goto L_801758B4; } // 8017589C
  cmps(c,0,(int32_t)c->r[0],1); // 801758A0
  if (crb(c,2)) { goto L_8017593C; } // 801758A4
  cmps(c,0,(int32_t)c->r[0],2); // 801758A8
  if (crb(c,2)) { goto L_8017594C; } // 801758AC
  goto L_80175958; // 801758B0
L_801758B4:;
  c->lr=0x801758B8u; f_80172284(c); // 801758B4
  c->r[4]=c->r[3]|c->r[3]; // 801758B8
  c->r[3]=c->r[30]|c->r[30]; // 801758BC
  c->lr=0x801758C4u; f_80062F4C(c); // 801758C0
  c->r[0]=R8(c->r[30]+0x00000010u); // 801758C4
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801758C8
  c->r[3]=c->r[30]+c->r[0]; // 801758CC
  c->r[29]=R32(c->r[3]+0x00000014u); // 801758D0
  cmps(c,0,(int32_t)c->r[29],0); // 801758D4
  if (crb(c,2)) { goto L_80175908; } // 801758D8
  W32(c->r[31]+0x00000054u,c->r[1]); // 801758DC
  W8(c->r[31]+0x00000018u,c->r[28]); // 801758E0
  c->lr=0x801758E8u; f_80172284(c); // 801758E4
  W32(c->r[29]+0x00000000u,c->r[3]); // 801758E8
  c->r[0]=c->r[13]+0xFFFF8A54u; // 801758EC
  c->r[3]=0u+0x806E0000u; // 801758F0
  W32(c->r[29]+0x00000004u,c->r[0]); // 801758F4
  c->r[3]=c->r[3]+0xFFFFF87Cu; // 801758F8
  W32(c->r[29]+0x00000008u,c->r[28]); // 801758FC
  W32(c->r[29]+0x0000000Cu,c->r[28]); // 80175900
  W32(c->r[29]+0x00000010u,c->r[3]); // 80175904
L_80175908:;
  W32(c->r[30]+0x00000008u,c->r[29]); // 80175908
  c->r[0]=0u+0x00000000u; // 8017590C
  c->r[3]=c->r[30]|c->r[30]; // 80175910
  c->r[4]=c->r[29]|c->r[29]; // 80175914
  W32(c->r[29]+0x00000008u,c->r[0]); // 80175918
  c->r[0]=R32(c->r[30]+0x00000004u); // 8017591C
  W32(c->r[30]+0x0000000Cu,c->r[0]); // 80175920
  c->lr=0x80175928u; f_8006306C(c); // 80175924
  c->r[0]=R32(c->r[30]+0x000005BCu); // 80175928
  W32(c->r[30]+0x00000688u,c->r[29]); // 8017592C
  c->r[0]=c->r[0]|0x40000000u; // 80175930
  W32(c->r[30]+0x000005BCu,c->r[0]); // 80175934
  goto L_80175958; // 80175938
L_8017593C:;
  c->r[3]=c->r[30]|c->r[30]; // 8017593C
  c->lr=0x80175944u; f_80175BAC(c); // 80175940
  W32(c->r[30]+0x00000688u,c->r[3]); // 80175944
  goto L_80175958; // 80175948
L_8017594C:;
  c->r[3]=c->r[30]|c->r[30]; // 8017594C
  c->lr=0x80175954u; f_80175AF0(c); // 80175950
  W32(c->r[30]+0x00000688u,c->r[3]); // 80175954
L_80175958:;
  c->r[3]=R32(c->r[30]+0x000005D8u); // 80175958
  c->r[0]=c->r[3]+0x00000001u; // 8017595C
  W32(c->r[30]+0x000005D8u,c->r[0]); // 80175960
  cmps(c,0,(int32_t)c->r[0],2); // 80175964
  if (!crb(c,1)) { goto L_80175AD0; } // 80175968
  c->r[0]=0u+0x00000000u; // 8017596C
  W32(c->r[30]+0x000005D8u,c->r[0]); // 80175970
  goto L_80175AD0; // 80175974
L_80175978:;
  c->r[3]=c->r[3]+0x00000354u; // 80175978
  c->lr=0x80175980u; f_800667AC(c); // 8017597C
  cmps(c,0,(int32_t)c->r[3],0); // 80175980
  if (crb(c,2)) { goto L_80175AD0; } // 80175984
  c->r[0]=0u+0x00000001u; // 80175988
  W32(c->r[30]+0x000005D0u,c->r[0]); // 8017598C
  goto L_80175AD0; // 80175990
L_80175994:;
  c->r[28]=0u+0x00000000u; // 80175994
  W8(c->r[31]+0x00000014u,c->r[28]); // 80175998
  c->r[3]=c->r[31]+0x00000014u; // 8017599C
  c->lr=0x801759A4u; f_8004F3FC(c); // 801759A0
  c->r[29]=0u+0x80690000u; // 801759A4
  c->r[29]=c->r[29]+0x00001598u; // 801759A8
  c->r[4]=c->r[29]+0x000000E1u; // 801759AC
  c->lr=0x801759B4u; f_801752E4(c); // 801759B0
  c->r[7]=R32(c->r[30]+0x00000504u); // 801759B4
  c->r[3]=c->r[30]|c->r[30]; // 801759B8
  c->r[0]=R32(c->r[30]+0x00000508u); // 801759BC
  c->r[4]=c->r[31]+0x00000020u; // 801759C0
  W32(c->r[31]+0x00000024u,c->r[0]); // 801759C4
  c->r[5]=0u+0x00000021u; // 801759C8
  c->r[6]=0u+0x00000000u; // 801759CC
  W32(c->r[31]+0x00000020u,c->r[7]); // 801759D0
  c->r[12]=R32(c->r[30]+0x0000001Cu); // 801759D4
  c->r[12]=R32(c->r[12]+0x000001A0u); // 801759D8
  c->ctr=c->r[12]; // 801759DC
  if (true) { c->lr=0x801759E4u; dispatch(c,c->ctr); } // 801759E0
  c->r[5]=R32(c->r[30]+0x0000044Cu); // 801759E4
  c->r[3]=c->r[30]|c->r[30]; // 801759E8
  {uint32_t ea=c->r[2]+0xFFFFBC0Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801759EC
  c->r[4]=0u+0x00000016u; // 801759F0
  {uint32_t ea=c->r[5]+0x00000000u; WF32(ea,c->f[0]);} // 801759F4
  c->r[5]=0u+0x00000001u; // 801759F8
  c->lr=0x80175A00u; f_800D5F20(c); // 801759FC
  c->r[3]=R32(c->r[30]+0x00000404u); // 80175A00
  c->r[4]=c->r[29]+0x0000001Du; // 80175A04
  {uint32_t ea=c->r[2]+0xFFFFBC0Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 80175A08
  c->r[5]=0u+0x00000001u; // 80175A0C
  {uint32_t ea=c->r[2]+0xFFFFBC10u; c->f[2]=c->ps1[2]=RF32(ea);} // 80175A10
  c->lr=0x80175A18u; f_802E9044(c); // 80175A14
  c->r[3]=c->r[30]+0x000005DCu; // 80175A18
  c->r[4]=0u+0x00000000u; // 80175A1C
  c->lr=0x80175A24u; f_800E2960(c); // 80175A20
  W32(c->r[30]+0x000005D0u,c->r[28]); // 80175A24
  c->r[3]=c->r[31]+0x00000010u; // 80175A28
  W8(c->r[31]+0x00000010u,c->r[28]); // 80175A2C
  c->lr=0x80175A34u; f_80046EFC(c); // 80175A30
  c->r[4]=0u+0x00000020u; // 80175A34
  c->r[5]=0u+0x00000000u; // 80175A38
  c->r[6]=0u+0xFFFFFFFFu; // 80175A3C
  c->lr=0x80175A44u; f_800B1DE0(c); // 80175A40
  W8(c->r[31]+0x0000000Cu,c->r[28]); // 80175A44
  c->r[3]=c->r[31]+0x0000000Cu; // 80175A48
  c->lr=0x80175A50u; f_800462D8(c); // 80175A4C
  c->r[4]=0u+0x00000000u; // 80175A50
  c->lr=0x80175A58u; f_800EA1A0(c); // 80175A54
  c->lr=0x80175A5Cu; f_801724C0(c); // 80175A58
  c->r[4]=c->r[3]|c->r[3]; // 80175A5C
  c->r[3]=c->r[30]|c->r[30]; // 80175A60
  c->lr=0x80175A68u; f_80062F4C(c); // 80175A64
  c->r[0]=R8(c->r[30]+0x00000010u); // 80175A68
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80175A6C
  c->r[3]=c->r[30]+c->r[0]; // 80175A70
  c->r[29]=R32(c->r[3]+0x00000014u); // 80175A74
  cmps(c,0,(int32_t)c->r[29],0); // 80175A78
  if (crb(c,2)) { goto L_80175AAC; } // 80175A7C
  W32(c->r[31]+0x0000003Cu,c->r[1]); // 80175A80
  W8(c->r[31]+0x00000008u,c->r[28]); // 80175A84
  c->lr=0x80175A8Cu; f_801724C0(c); // 80175A88
  W32(c->r[29]+0x00000000u,c->r[3]); // 80175A8C
  c->r[0]=c->r[13]+0xFFFF8A80u; // 80175A90
  c->r[3]=0u+0x806E0000u; // 80175A94
  W32(c->r[29]+0x00000004u,c->r[0]); // 80175A98
  c->r[3]=c->r[3]+0xFFFFF900u; // 80175A9C
  W32(c->r[29]+0x00000008u,c->r[28]); // 80175AA0
  W32(c->r[29]+0x0000000Cu,c->r[28]); // 80175AA4
  W32(c->r[29]+0x00000010u,c->r[3]); // 80175AA8
L_80175AAC:;
  W32(c->r[30]+0x00000008u,c->r[29]); // 80175AAC
  c->r[0]=0u+0x00000000u; // 80175AB0
  c->r[3]=c->r[30]|c->r[30]; // 80175AB4
  c->r[4]=c->r[29]|c->r[29]; // 80175AB8
  W32(c->r[29]+0x00000008u,c->r[0]); // 80175ABC
  c->r[0]=R32(c->r[30]+0x00000004u); // 80175AC0
  W32(c->r[30]+0x0000000Cu,c->r[0]); // 80175AC4
  c->lr=0x80175ACCu; f_8006306C(c); // 80175AC8
  W32(c->r[30]+0x00000684u,c->r[29]); // 80175ACC
L_80175AD0:;
  c->r[10]=c->r[31]|c->r[31]; // 80175AD0
  c->r[11]=c->r[10]+0x00000080u; // 80175AD4
  c->lr=0x80175ADCu; { c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80175AD8
  c->r[10]=R32(c->r[1]+0x00000000u); // 80175ADC
  c->r[0]=R32(c->r[10]+0x00000004u); // 80175AE0
  c->r[1]=c->r[10]|c->r[10]; // 80175AE4
  c->lr=c->r[0]; // 80175AE8
  return; // 80175AEC
}

// fn_80175AF0
void f_80175AF0(Ctx* __restrict c) {
  trace_call(0x80175AF0u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80175AF0
  c->r[0]=c->lr; // 80175AF4
  W32(c->r[1]+0x00000044u,c->r[0]); // 80175AF8
  {uint32_t ea=c->r[1]+0x00000030u; for(int i=28;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 80175AFC
  c->r[31]=c->r[1]|c->r[1]; // 80175B00
  c->r[28]=c->r[3]|c->r[3]; // 80175B04
  c->lr=0x80175B0Cu; f_80172320(c); // 80175B08
  c->r[4]=c->r[3]|c->r[3]; // 80175B0C
  c->r[3]=c->r[28]|c->r[28]; // 80175B10
  c->lr=0x80175B18u; f_80062F4C(c); // 80175B14
  c->r[0]=R8(c->r[28]+0x00000010u); // 80175B18
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80175B1C
  c->r[3]=c->r[28]+c->r[0]; // 80175B20
  c->r[29]=R32(c->r[3]+0x00000014u); // 80175B24
  cmps(c,0,(int32_t)c->r[29],0); // 80175B28
  if (crb(c,2)) { goto L_80175B60; } // 80175B2C
  c->r[30]=0u+0x00000000u; // 80175B30
  W32(c->r[31]+0x00000024u,c->r[1]); // 80175B34
  W8(c->r[31]+0x00000008u,c->r[30]); // 80175B38
  c->lr=0x80175B40u; f_80172320(c); // 80175B3C
  W32(c->r[29]+0x00000000u,c->r[3]); // 80175B40
  c->r[0]=c->r[13]+0xFFFF8A60u; // 80175B44
  c->r[3]=0u+0x806E0000u; // 80175B48
  W32(c->r[29]+0x00000004u,c->r[0]); // 80175B4C
  c->r[3]=c->r[3]+0xFFFFF8A0u; // 80175B50
  W32(c->r[29]+0x00000008u,c->r[30]); // 80175B54
  W32(c->r[29]+0x0000000Cu,c->r[30]); // 80175B58
  W32(c->r[29]+0x00000010u,c->r[3]); // 80175B5C
L_80175B60:;
  W32(c->r[28]+0x00000008u,c->r[29]); // 80175B60
  c->r[0]=0u+0x00000000u; // 80175B64
  c->r[3]=c->r[28]|c->r[28]; // 80175B68
  c->r[4]=c->r[29]|c->r[29]; // 80175B6C
  W32(c->r[29]+0x00000008u,c->r[0]); // 80175B70
  c->r[0]=R32(c->r[28]+0x00000004u); // 80175B74
  W32(c->r[28]+0x0000000Cu,c->r[0]); // 80175B78
  c->lr=0x80175B80u; f_8006306C(c); // 80175B7C
  c->r[0]=R32(c->r[28]+0x000005BCu); // 80175B80
  c->r[10]=c->r[31]|c->r[31]; // 80175B84
  c->r[3]=c->r[29]|c->r[29]; // 80175B88
  c->r[0]=c->r[0]|0x40000000u; // 80175B8C
  W32(c->r[28]+0x000005BCu,c->r[0]); // 80175B90
  {uint32_t ea=c->r[10]+0x00000030u; for(int i=28;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 80175B94
  c->r[10]=R32(c->r[1]+0x00000000u); // 80175B98
  c->r[0]=R32(c->r[10]+0x00000004u); // 80175B9C
  c->r[1]=c->r[10]|c->r[10]; // 80175BA0
  c->lr=c->r[0]; // 80175BA4
  return; // 80175BA8
}

// fn_80175BAC
void f_80175BAC(Ctx* __restrict c) {
  trace_call(0x80175BACu);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80175BAC
  c->r[0]=c->lr; // 80175BB0
  W32(c->r[1]+0x00000044u,c->r[0]); // 80175BB4
  {uint32_t ea=c->r[1]+0x00000030u; for(int i=28;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 80175BB8
  c->r[31]=c->r[1]|c->r[1]; // 80175BBC
  c->r[28]=c->r[3]|c->r[3]; // 80175BC0
  c->lr=0x80175BC8u; f_801722EC(c); // 80175BC4
  c->r[4]=c->r[3]|c->r[3]; // 80175BC8
  c->r[3]=c->r[28]|c->r[28]; // 80175BCC
  c->lr=0x80175BD4u; f_80062F4C(c); // 80175BD0
  c->r[0]=R8(c->r[28]+0x00000010u); // 80175BD4
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80175BD8
  c->r[3]=c->r[28]+c->r[0]; // 80175BDC
  c->r[29]=R32(c->r[3]+0x00000014u); // 80175BE0
  cmps(c,0,(int32_t)c->r[29],0); // 80175BE4
  if (crb(c,2)) { goto L_80175C1C; } // 80175BE8
  c->r[30]=0u+0x00000000u; // 80175BEC
  W32(c->r[31]+0x00000024u,c->r[1]); // 80175BF0
  W8(c->r[31]+0x00000008u,c->r[30]); // 80175BF4
  c->lr=0x80175BFCu; f_801722EC(c); // 80175BF8
  W32(c->r[29]+0x00000000u,c->r[3]); // 80175BFC
  c->r[0]=c->r[13]+0xFFFF8A5Cu; // 80175C00
  c->r[3]=0u+0x806E0000u; // 80175C04
  W32(c->r[29]+0x00000004u,c->r[0]); // 80175C08
  c->r[3]=c->r[3]+0xFFFFF894u; // 80175C0C
  W32(c->r[29]+0x00000008u,c->r[30]); // 80175C10
  W32(c->r[29]+0x0000000Cu,c->r[30]); // 80175C14
  W32(c->r[29]+0x00000010u,c->r[3]); // 80175C18
L_80175C1C:;
  W32(c->r[28]+0x00000008u,c->r[29]); // 80175C1C
  c->r[0]=0u+0x00000000u; // 80175C20
  c->r[3]=c->r[28]|c->r[28]; // 80175C24
  c->r[4]=c->r[29]|c->r[29]; // 80175C28
  W32(c->r[29]+0x00000008u,c->r[0]); // 80175C2C
  c->r[0]=R32(c->r[28]+0x00000004u); // 80175C30
  W32(c->r[28]+0x0000000Cu,c->r[0]); // 80175C34
  c->lr=0x80175C3Cu; f_8006306C(c); // 80175C38
  c->r[0]=R32(c->r[28]+0x000005BCu); // 80175C3C
  c->r[10]=c->r[31]|c->r[31]; // 80175C40
  c->r[3]=c->r[29]|c->r[29]; // 80175C44
  c->r[0]=c->r[0]|0x40000000u; // 80175C48
  W32(c->r[28]+0x000005BCu,c->r[0]); // 80175C4C
  {uint32_t ea=c->r[10]+0x00000030u; for(int i=28;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 80175C50
  c->r[10]=R32(c->r[1]+0x00000000u); // 80175C54
  c->r[0]=R32(c->r[10]+0x00000004u); // 80175C58
  c->r[1]=c->r[10]|c->r[10]; // 80175C5C
  c->lr=c->r[0]; // 80175C60
  return; // 80175C64
}

// fn_80175C68
void f_80175C68(Ctx* __restrict c) {
  trace_call(0x80175C68u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80175C68
  c->r[0]=c->lr; // 80175C6C
  c->r[3]=0u+0x00000002u; // 80175C70
  W32(c->r[1]+0x00000014u,c->r[0]); // 80175C74
  c->r[0]=0u+0x00000003u; // 80175C78
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80175C7C
  c->r[31]=c->r[4]|c->r[4]; // 80175C80
  W32(c->r[4]+0x000005C8u,c->r[3]); // 80175C84
  c->r[3]=c->r[31]|c->r[31]; // 80175C88
  W32(c->r[4]+0x000005D0u,c->r[0]); // 80175C8C
  c->lr=0x80175C94u; f_80172E5C(c); // 80175C90
  c->r[0]=R32(c->r[31]+0x000005BCu); // 80175C94
  c->r[0]=c->r[0]|0x40000000u; // 80175C98
  W32(c->r[31]+0x000005BCu,c->r[0]); // 80175C9C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80175CA0
  c->r[0]=R32(c->r[1]+0x00000014u); // 80175CA4
  c->lr=c->r[0]; // 80175CA8
  c->r[1]=c->r[1]+0x00000010u; // 80175CAC
  return; // 80175CB0
}

// fn_80175CB4
void f_80175CB4(Ctx* __restrict c) {
  trace_call(0x80175CB4u);
  return; // 80175CB4
}

// fn_80175CB8
void f_80175CB8(Ctx* __restrict c) {
  trace_call(0x80175CB8u);
  {uint32_t ea=c->r[1]+0xFFFFFF70u; W32(ea,c->r[1]); c->r[1]=ea;} // 80175CB8
  c->r[0]=c->lr; // 80175CBC
  W32(c->r[1]+0x00000094u,c->r[0]); // 80175CC0
  c->r[11]=c->r[1]+0x00000090u; // 80175CC4
  c->lr=0x80175CCCu; { W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80175CC8
  c->r[0]=R32(c->r[3]+0x000005D4u); // 80175CCC
  c->r[31]=c->r[3]|c->r[3]; // 80175CD0
  cmps(c,0,(int32_t)c->r[0],0); // 80175CD4
  if (crb(c,2)) { goto L_80175CF8; } // 80175CD8
  cmps(c,0,(int32_t)c->r[0],1); // 80175CDC
  if (crb(c,2)) { goto L_80175E4C; } // 80175CE0
  cmps(c,0,(int32_t)c->r[0],2); // 80175CE4
  if (crb(c,2)) { goto L_80175E8C; } // 80175CE8
  cmps(c,0,(int32_t)c->r[0],3); // 80175CEC
  if (crb(c,2)) { goto L_80175EAC; } // 80175CF0
  goto L_80175ED8; // 80175CF4
L_80175CF8:;
  c->r[4]=R32(c->r[3]+0x00000004u); // 80175CF8
  cmps(c,0,(int32_t)c->r[4],0); // 80175CFC
  if (crb(c,2)) { goto L_80175D0C; } // 80175D00
  c->r[0]=R32(c->r[4]+0x00000008u); // 80175D04
  goto L_80175D10; // 80175D08
L_80175D0C:;
  c->r[0]=0u+0x00000000u; // 80175D0C
L_80175D10:;
  cmps(c,0,(int32_t)c->r[0],0); // 80175D10
  if (!crb(c,2)) { goto L_80175D70; } // 80175D14
  c->r[0]=0u+0x00000018u; // 80175D18
  W32(c->r[3]+0x000005C8u,c->r[0]); // 80175D1C
  c->r[3]=c->r[3]+0x000001B8u; // 80175D20
  c->r[4]=c->r[1]+0x00000048u; // 80175D24
  c->lr=0x80175D2Cu; f_80382F2C(c); // 80175D28
  c->r[4]=0u+0x80690000u; // 80175D2C
  {uint32_t ea=c->r[2]+0xFFFFBC10u; c->f[1]=c->ps1[1]=RF32(ea);} // 80175D30
  c->r[4]=c->r[4]+0x00001598u; // 80175D34
  {uint32_t ea=c->r[2]+0xFFFFBC0Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 80175D38
  {uint32_t ea=c->r[2]+0xFFFFBC34u; c->f[3]=c->ps1[3]=RF32(ea);} // 80175D3C
  c->r[3]=c->r[31]+0x000005DCu; // 80175D40
  c->r[4]=c->r[4]+0x000000EEu; // 80175D44
  c->r[5]=c->r[1]+0x00000048u; // 80175D48
  c->lr=0x80175D50u; f_800E2604(c); // 80175D4C
  c->r[4]=0u+0x00010000u; // 80175D50
  c->r[3]=c->r[31]|c->r[31]; // 80175D54
  c->r[4]=c->r[4]+0xFFFFE6DCu; // 80175D58
  c->r[5]=0u+0x00000001u; // 80175D5C
  c->lr=0x80175D64u; f_80064744(c); // 80175D60
  {uint32_t ea=c->r[2]+0xFFFFBC54u; c->f[1]=c->ps1[1]=RF32(ea);} // 80175D64
  c->r[3]=c->r[31]+0x000007F4u; // 80175D68
  c->lr=0x80175D70u; f_80175EF0(c); // 80175D6C
L_80175D70:;
  {uint32_t ea=c->r[2]+0xFFFFBC58u; c->f[1]=c->ps1[1]=RF32(ea);} // 80175D70
  c->r[3]=c->r[31]+0x000005DCu; // 80175D74
  c->lr=0x80175D7Cu; f_800E2B50(c); // 80175D78
  cmps(c,0,(int32_t)c->r[3],0); // 80175D7C
  if (crb(c,2)) { goto L_80175DBC; } // 80175D80
  c->r[0]=0u+0x00000000u; // 80175D84
  W8(c->r[1]+0x00000014u,c->r[0]); // 80175D88
  c->r[3]=c->r[1]+0x00000014u; // 80175D8C
  c->lr=0x80175D94u; f_80046EFC(c); // 80175D90
  {uint32_t ea=c->r[2]+0xFFFFBC5Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 80175D94
  c->r[4]=0u+0x00000000u; // 80175D98
  c->r[3]=R32(c->r[3]+0x000000C8u); // 80175D9C
  c->r[5]=0u+0x00000000u; // 80175DA0
  c->f[3]=c->f[2]; // 80175DA4
  {uint32_t ea=c->r[2]+0xFFFFBC10u; c->f[1]=c->ps1[1]=RF32(ea);} // 80175DA8
  c->r[6]=0u+0x00000000u; // 80175DAC
  c->r[7]=0u+0x00000000u; // 80175DB0
  c->r[8]=0u+0xFFFFFFFFu; // 80175DB4
  c->lr=0x80175DBCu; f_8011A9B4(c); // 80175DB8
L_80175DBC:;
  {uint32_t ea=c->r[31]+0x00000658u; c->f[1]=c->ps1[1]=RF32(ea);} // 80175DBC
  {uint32_t ea=c->r[2]+0xFFFFBC60u; c->f[0]=c->ps1[0]=RF32(ea);} // 80175DC0
  fcmp(c,0,c->f[1],c->f[0]); // 80175DC4
  setcrb(c,2,crb(c,1)|crb(c,2)); // 80175DC8
  if (!crb(c,2)) { goto L_80175ED8; } // 80175DCC
  c->r[0]=0u+0x00000000u; // 80175DD0
  W8(c->r[1]+0x00000010u,c->r[0]); // 80175DD4
  c->r[3]=c->r[1]+0x00000010u; // 80175DD8
  c->lr=0x80175DE0u; f_80046EFC(c); // 80175DDC
  c->r[3]=R32(c->r[3]+0x000000C8u); // 80175DE0
  c->lr=0x80175DE8u; f_8011AC88(c); // 80175DE4
  cmps(c,0,(int32_t)c->r[3],2); // 80175DE8
  if (!crb(c,2)) { goto L_80175E00; } // 80175DEC
  c->r[3]=R32(c->r[31]+0x000005D4u); // 80175DF0
  c->r[0]=c->r[3]+0x00000001u; // 80175DF4
  W32(c->r[31]+0x000005D4u,c->r[0]); // 80175DF8
  goto L_80175E0C; // 80175DFC
L_80175E00:;
  c->r[3]=R32(c->r[31]+0x000005D4u); // 80175E00
  c->r[0]=c->r[3]+0x00000002u; // 80175E04
  W32(c->r[31]+0x000005D4u,c->r[0]); // 80175E08
L_80175E0C:;
  c->r[29]=0u+0x00000000u; // 80175E0C
  W8(c->r[1]+0x0000000Cu,c->r[29]); // 80175E10
  c->r[3]=c->r[1]+0x0000000Cu; // 80175E14
  c->lr=0x80175E1Cu; f_8004E228(c); // 80175E18
  c->r[30]=0u+0x80690000u; // 80175E1C
  c->r[4]=R32(c->r[31]+0x00000680u); // 80175E20
  c->r[30]=c->r[30]+0x00001598u; // 80175E24
  c->r[5]=c->r[30]+0x0000004Du; // 80175E28
  c->lr=0x80175E30u; f_80075FE0(c); // 80175E2C
  W8(c->r[1]+0x00000008u,c->r[29]); // 80175E30
  c->r[3]=c->r[1]+0x00000008u; // 80175E34
  c->lr=0x80175E3Cu; f_8004E228(c); // 80175E38
  c->r[4]=R32(c->r[31]+0x00000680u); // 80175E3C
  c->r[5]=c->r[30]+0x0000005Eu; // 80175E40
  c->lr=0x80175E48u; f_80075FE0(c); // 80175E44
  goto L_80175ED8; // 80175E48
L_80175E4C:;
  c->r[3]=c->r[3]+0x000001B8u; // 80175E4C
  c->r[4]=c->r[1]+0x00000018u; // 80175E50
  c->lr=0x80175E58u; f_80382F2C(c); // 80175E54
  c->r[4]=0u+0x80690000u; // 80175E58
  {uint32_t ea=c->r[2]+0xFFFFBC10u; c->f[1]=c->ps1[1]=RF32(ea);} // 80175E5C
  c->r[4]=c->r[4]+0x00001598u; // 80175E60
  {uint32_t ea=c->r[2]+0xFFFFBC0Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 80175E64
  {uint32_t ea=c->r[2]+0xFFFFBC34u; c->f[3]=c->ps1[3]=RF32(ea);} // 80175E68
  c->r[3]=c->r[31]+0x000005DCu; // 80175E6C
  c->r[4]=c->r[4]+0x000000FAu; // 80175E70
  c->r[5]=c->r[1]+0x00000018u; // 80175E74
  c->lr=0x80175E7Cu; f_800E2604(c); // 80175E78
  c->r[3]=R32(c->r[31]+0x000005D4u); // 80175E7C
  c->r[0]=c->r[3]+0x00000002u; // 80175E80
  W32(c->r[31]+0x000005D4u,c->r[0]); // 80175E84
  goto L_80175ED8; // 80175E88
L_80175E8C:;
  {uint32_t ea=c->r[3]+0x000007A4u; c->f[1]=c->ps1[1]=RF32(ea);} // 80175E8C
  c->r[4]=0u+0x00000000u; // 80175E90
  c->r[5]=0u+0xFFFFFFFFu; // 80175E94
  c->lr=0x80175E9Cu; f_80062194(c); // 80175E98
  c->r[3]=R32(c->r[31]+0x000005D4u); // 80175E9C
  c->r[0]=c->r[3]+0x00000001u; // 80175EA0
  W32(c->r[31]+0x000005D4u,c->r[0]); // 80175EA4
  goto L_80175ED8; // 80175EA8
L_80175EAC:;
  c->r[3]=c->r[3]+0x000005DCu; // 80175EAC
  c->lr=0x80175EB4u; f_800E2B1C(c); // 80175EB0
  cmps(c,0,(int32_t)c->r[3],0); // 80175EB4
  if (crb(c,2)) { goto L_80175ED8; } // 80175EB8
  c->r[4]=R32(c->r[31]+0x000005D0u); // 80175EBC
  c->r[0]=0u+0x00000000u; // 80175EC0
  W32(c->r[31]+0x00000688u,c->r[0]); // 80175EC4
  c->r[3]=c->r[31]|c->r[31]; // 80175EC8
  c->r[0]=c->r[4]+0x00000001u; // 80175ECC
  W32(c->r[31]+0x000005D0u,c->r[0]); // 80175ED0
  c->lr=0x80175ED8u; f_80177388(c); // 80175ED4
L_80175ED8:;
  c->r[11]=c->r[1]+0x00000090u; // 80175ED8
  c->lr=0x80175EE0u; { c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80175EDC
  c->r[0]=R32(c->r[1]+0x00000094u); // 80175EE0
  c->lr=c->r[0]; // 80175EE4
  c->r[1]=c->r[1]+0x00000090u; // 80175EE8
  return; // 80175EEC
}

// fn_80175EF0
void f_80175EF0(Ctx* __restrict c) {
  trace_call(0x80175EF0u);
  {uint32_t ea=c->r[2]+0xFFFFBC0Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80175EF0
  c->r[0]=0u+0x00000000u; // 80175EF4
  {uint32_t ea=c->r[3]+0x0000000Cu; WF32(ea,c->f[1]);} // 80175EF8
  {uint32_t ea=c->r[3]+0x00000010u; WF32(ea,c->f[0]);} // 80175EFC
  W8(c->r[3]+0x00000014u,c->r[0]); // 80175F00
  return; // 80175F04
}

// fn_80175F08
void f_80175F08(Ctx* __restrict c) {
  trace_call(0x80175F08u);
  return; // 80175F08
}

// fn_80175F0C
void f_80175F0C(Ctx* __restrict c) {
  trace_call(0x80175F0Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80175F0C
  c->r[0]=c->lr; // 80175F10
  W32(c->r[1]+0x00000014u,c->r[0]); // 80175F14
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80175F18
  c->r[31]=c->r[3]|c->r[3]; // 80175F1C
  W32(c->r[1]+0x00000008u,c->r[30]); // 80175F20
  c->r[0]=R32(c->r[3]+0x000005D4u); // 80175F24
  cmps(c,0,(int32_t)c->r[0],0); // 80175F28
  if (crb(c,2)) { goto L_80175F3C; } // 80175F2C
  cmps(c,0,(int32_t)c->r[0],1); // 80175F30
  if (crb(c,2)) { goto L_8017603C; } // 80175F34
  goto L_8017608C; // 80175F38
L_80175F3C:;
  c->r[4]=R32(c->r[3]+0x00000004u); // 80175F3C
  cmps(c,0,(int32_t)c->r[4],0); // 80175F40
  if (crb(c,2)) { goto L_80175F50; } // 80175F44
  c->r[0]=R32(c->r[4]+0x00000008u); // 80175F48
  goto L_80175F54; // 80175F4C
L_80175F50:;
  c->r[0]=0u+0x00000000u; // 80175F50
L_80175F54:;
  cmps(c,0,(int32_t)c->r[0],0); // 80175F54
  if (!crb(c,2)) { goto L_80175FA4; } // 80175F58
  c->r[4]=0u+0x80690000u; // 80175F5C
  {uint32_t ea=c->r[2]+0xFFFFBC10u; c->f[1]=c->ps1[1]=RF32(ea);} // 80175F60
  c->r[4]=c->r[4]+0x00001598u; // 80175F64
  {uint32_t ea=c->r[2]+0xFFFFBC0Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 80175F68
  {uint32_t ea=c->r[2]+0xFFFFBC34u; c->f[3]=c->ps1[3]=RF32(ea);} // 80175F6C
  c->r[4]=c->r[4]+0x00000106u; // 80175F70
  c->r[3]=c->r[3]+0x000005DCu; // 80175F74
  c->lr=0x80175F7Cu; f_800E24D0(c); // 80175F78
  c->r[4]=0u+0x00010000u; // 80175F7C
  c->r[3]=c->r[31]|c->r[31]; // 80175F80
  c->r[4]=c->r[4]+0xFFFFE6DDu; // 80175F84
  c->r[5]=0u+0x00000001u; // 80175F88
  c->lr=0x80175F90u; f_80064744(c); // 80175F8C
  {uint32_t ea=c->r[31]+0x000007B0u; c->f[1]=c->ps1[1]=RF32(ea);} // 80175F90
  c->r[3]=c->r[31]+0x000007F4u; // 80175F94
  c->lr=0x80175F9Cu; f_80175EF0(c); // 80175F98
  c->r[0]=0u+0x00000004u; // 80175F9C
  W32(c->r[31]+0x000005C8u,c->r[0]); // 80175FA0
L_80175FA4:;
  c->r[3]=R32(c->r[31]+0x00000404u); // 80175FA4
  c->lr=0x80175FACu; f_802EA4B0(c); // 80175FA8
  {uint32_t ea=c->r[2]+0xFFFFBC64u; c->f[0]=c->ps1[0]=RF32(ea);} // 80175FAC
  fcmp(c,0,c->f[1],c->f[0]); // 80175FB0
  setcrb(c,2,crb(c,1)|crb(c,2)); // 80175FB4
  if (!crb(c,2)) { goto L_8017608C; } // 80175FB8
  c->r[30]=0u+0x00000002u; // 80175FBC
  W32(c->r[31]+0x000005C8u,c->r[30]); // 80175FC0
  {uint32_t ea=c->r[2]+0xFFFFBC0Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 80175FC4
  c->r[3]=c->r[31]+0x000007F4u; // 80175FC8
  c->lr=0x80175FD0u; f_80172E34(c); // 80175FCC
  c->r[0]=R8(c->r[31]+0x00000808u); // 80175FD0
  cmps(c,0,(int32_t)c->r[0],0); // 80175FD4
  if (crb(c,2)) { goto L_8017602C; } // 80175FD8
  c->r[4]=0u+0x80690000u; // 80175FDC
  {uint32_t ea=c->r[2]+0xFFFFBC10u; c->f[1]=c->ps1[1]=RF32(ea);} // 80175FE0
  c->r[4]=c->r[4]+0x00001598u; // 80175FE4
  {uint32_t ea=c->r[2]+0xFFFFBC0Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 80175FE8
  {uint32_t ea=c->r[2]+0xFFFFBC34u; c->f[3]=c->ps1[3]=RF32(ea);} // 80175FEC
  c->r[3]=c->r[31]+0x000005DCu; // 80175FF0
  c->r[4]=c->r[4]+0x00000111u; // 80175FF4
  c->lr=0x80175FFCu; f_800E24D0(c); // 80175FF8
  c->r[4]=0u+0x00010000u; // 80175FFC
  W32(c->r[31]+0x000005C8u,c->r[30]); // 80176000
  c->r[3]=c->r[31]|c->r[31]; // 80176004
  c->r[5]=0u+0x00000001u; // 80176008
  c->r[4]=c->r[4]+0xFFFFE808u; // 8017600C
  c->lr=0x80176014u; f_80064744(c); // 80176010
  c->r[4]=R32(c->r[31]+0x000005D0u); // 80176014
  c->r[3]=c->r[31]|c->r[31]; // 80176018
  c->r[0]=c->r[4]+0x00000001u; // 8017601C
  W32(c->r[31]+0x000005D0u,c->r[0]); // 80176020
  c->lr=0x80176028u; f_80177388(c); // 80176024
  goto L_8017608C; // 80176028
L_8017602C:;
  c->r[3]=R32(c->r[31]+0x000005D4u); // 8017602C
  c->r[0]=c->r[3]+0x00000001u; // 80176030
  W32(c->r[31]+0x000005D4u,c->r[0]); // 80176034
  goto L_8017608C; // 80176038
L_8017603C:;
  c->r[3]=R32(c->r[3]+0x00000404u); // 8017603C
  c->lr=0x80176044u; f_802EA4B0(c); // 80176040
  {uint32_t ea=c->r[2]+0xFFFFBC68u; c->f[0]=c->ps1[0]=RF32(ea);} // 80176044
  fcmp(c,0,c->f[1],c->f[0]); // 80176048
  setcrb(c,2,crb(c,1)|crb(c,2)); // 8017604C
  if (!crb(c,2)) { goto L_8017608C; } // 80176050
  {uint32_t ea=c->r[31]+0x000007ACu; c->f[1]=c->ps1[1]=RF32(ea);} // 80176054
  c->r[3]=c->r[31]|c->r[31]; // 80176058
  c->r[4]=0u+0x00000000u; // 8017605C
  c->r[5]=0u+0xFFFFFFFFu; // 80176060
  c->lr=0x80176068u; f_80062194(c); // 80176064
  c->r[3]=R32(c->r[31]+0x000005D0u); // 80176068
  c->r[0]=0u+0x00000002u; // 8017606C
  c->r[4]=0u+0x00000000u; // 80176070
  W32(c->r[31]+0x000005C8u,c->r[0]); // 80176074
  c->r[0]=c->r[3]+0x00000002u; // 80176078
  c->r[3]=c->r[31]|c->r[31]; // 8017607C
  W32(c->r[31]+0x00000688u,c->r[4]); // 80176080
  W32(c->r[31]+0x000005D0u,c->r[0]); // 80176084
  c->lr=0x8017608Cu; f_80177388(c); // 80176088
L_8017608C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8017608C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80176090
  c->r[30]=R32(c->r[1]+0x00000008u); // 80176094
  c->lr=c->r[0]; // 80176098
  c->r[1]=c->r[1]+0x00000010u; // 8017609C
  return; // 801760A0
}

// fn_801760A4
void f_801760A4(Ctx* __restrict c) {
  trace_call(0x801760A4u);
  return; // 801760A4
}

// fn_801760A8
void f_801760A8(Ctx* __restrict c) {
  trace_call(0x801760A8u);
  {uint32_t ea=c->r[1]+0xFFFFFF70u; W32(ea,c->r[1]); c->r[1]=ea;} // 801760A8
  c->r[0]=c->lr; // 801760AC
  W32(c->r[1]+0x00000094u,c->r[0]); // 801760B0
  c->r[11]=c->r[1]+0x00000090u; // 801760B4
  c->lr=0x801760BCu; { W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801760B8
  c->r[0]=R32(c->r[3]+0x000005D4u); // 801760BC
  c->r[31]=c->r[3]|c->r[3]; // 801760C0
  cmps(c,0,(int32_t)c->r[0],0); // 801760C4
  if (crb(c,2)) { goto L_801760E8; } // 801760C8
  cmps(c,0,(int32_t)c->r[0],1); // 801760CC
  if (crb(c,2)) { goto L_8017625C; } // 801760D0
  cmps(c,0,(int32_t)c->r[0],2); // 801760D4
  if (crb(c,2)) { goto L_8017629C; } // 801760D8
  cmps(c,0,(int32_t)c->r[0],3); // 801760DC
  if (crb(c,2)) { goto L_801762D8; } // 801760E0
  goto L_80176304; // 801760E4
L_801760E8:;
  c->r[4]=R32(c->r[3]+0x00000004u); // 801760E8
  cmps(c,0,(int32_t)c->r[4],0); // 801760EC
  if (crb(c,2)) { goto L_801760FC; } // 801760F0
  c->r[0]=R32(c->r[4]+0x00000008u); // 801760F4
  goto L_80176100; // 801760F8
L_801760FC:;
  c->r[0]=0u+0x00000000u; // 801760FC
L_80176100:;
  cmps(c,0,(int32_t)c->r[0],0); // 80176100
  if (!crb(c,2)) { goto L_80176160; } // 80176104
  c->r[0]=0u+0x00000002u; // 80176108
  W32(c->r[3]+0x000005C8u,c->r[0]); // 8017610C
  c->r[3]=c->r[3]+0x000001B8u; // 80176110
  c->r[4]=c->r[1]+0x00000050u; // 80176114
  c->lr=0x8017611Cu; f_80382F2C(c); // 80176118
  c->r[4]=0u+0x80690000u; // 8017611C
  {uint32_t ea=c->r[2]+0xFFFFBC10u; c->f[1]=c->ps1[1]=RF32(ea);} // 80176120
  c->r[4]=c->r[4]+0x00001598u; // 80176124
  {uint32_t ea=c->r[2]+0xFFFFBC0Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 80176128
  {uint32_t ea=c->r[2]+0xFFFFBC34u; c->f[3]=c->ps1[3]=RF32(ea);} // 8017612C
  c->r[3]=c->r[31]+0x000005DCu; // 80176130
  c->r[4]=c->r[4]+0x0000011Cu; // 80176134
  c->r[5]=c->r[1]+0x00000050u; // 80176138
  c->lr=0x80176140u; f_800E2604(c); // 8017613C
  c->r[4]=0u+0x00010000u; // 80176140
  c->r[3]=c->r[31]|c->r[31]; // 80176144
  c->r[4]=c->r[4]+0xFFFFE6DEu; // 80176148
  c->r[5]=0u+0x00000001u; // 8017614C
  c->lr=0x80176154u; f_80064744(c); // 80176150
  {uint32_t ea=c->r[2]+0xFFFFBC54u; c->f[1]=c->ps1[1]=RF32(ea);} // 80176154
  c->r[3]=c->r[31]+0x000007F4u; // 80176158
  c->lr=0x80176160u; f_80175EF0(c); // 8017615C
L_80176160:;
  {uint32_t ea=c->r[2]+0xFFFFBC6Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 80176160
  c->r[3]=c->r[31]+0x000005DCu; // 80176164
  c->lr=0x8017616Cu; f_800E2B50(c); // 80176168
  cmps(c,0,(int32_t)c->r[3],0); // 8017616C
  if (crb(c,2)) { goto L_801761AC; } // 80176170
  c->r[0]=0u+0x00000000u; // 80176174
  W8(c->r[1]+0x00000018u,c->r[0]); // 80176178
  c->r[3]=c->r[1]+0x00000018u; // 8017617C
  c->lr=0x80176184u; f_80046EFC(c); // 80176180
  {uint32_t ea=c->r[2]+0xFFFFBC5Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 80176184
  c->r[4]=0u+0x00000000u; // 80176188
  c->r[3]=R32(c->r[3]+0x000000C8u); // 8017618C
  c->r[5]=0u+0x00000000u; // 80176190
  c->f[3]=c->f[2]; // 80176194
  {uint32_t ea=c->r[2]+0xFFFFBC10u; c->f[1]=c->ps1[1]=RF32(ea);} // 80176198
  c->r[6]=0u+0x00000000u; // 8017619C
  c->r[7]=0u+0x00000000u; // 801761A0
  c->r[8]=0u+0xFFFFFFFFu; // 801761A4
  c->lr=0x801761ACu; f_8011A9B4(c); // 801761A8
L_801761AC:;
  {uint32_t ea=c->r[31]+0x00000658u; c->f[1]=c->ps1[1]=RF32(ea);} // 801761AC
  {uint32_t ea=c->r[2]+0xFFFFBC70u; c->f[0]=c->ps1[0]=RF32(ea);} // 801761B0
  fcmp(c,0,c->f[1],c->f[0]); // 801761B4
  setcrb(c,2,crb(c,1)|crb(c,2)); // 801761B8
  if (!crb(c,2)) { goto L_80176304; } // 801761BC
  c->r[0]=0u+0x00000000u; // 801761C0
  W8(c->r[1]+0x00000014u,c->r[0]); // 801761C4
  c->r[3]=c->r[1]+0x00000014u; // 801761C8
  c->lr=0x801761D0u; f_80046EFC(c); // 801761CC
  c->r[3]=R32(c->r[3]+0x000000C8u); // 801761D0
  c->lr=0x801761D8u; f_8011AC88(c); // 801761D4
  cmps(c,0,(int32_t)c->r[3],2); // 801761D8
  if (!crb(c,2)) { goto L_801761F0; } // 801761DC
  c->r[3]=R32(c->r[31]+0x000005D4u); // 801761E0
  c->r[0]=c->r[3]+0x00000001u; // 801761E4
  W32(c->r[31]+0x000005D4u,c->r[0]); // 801761E8
  goto L_801761FC; // 801761EC
L_801761F0:;
  c->r[3]=R32(c->r[31]+0x000005D4u); // 801761F0
  c->r[0]=c->r[3]+0x00000002u; // 801761F4
  W32(c->r[31]+0x000005D4u,c->r[0]); // 801761F8
L_801761FC:;
  c->r[29]=0u+0x00000000u; // 801761FC
  W8(c->r[1]+0x00000010u,c->r[29]); // 80176200
  c->r[3]=c->r[1]+0x00000010u; // 80176204
  c->lr=0x8017620Cu; f_8004E228(c); // 80176208
  c->r[30]=0u+0x80690000u; // 8017620C
  c->r[4]=R32(c->r[31]+0x00000680u); // 80176210
  c->r[30]=c->r[30]+0x00001598u; // 80176214
  c->r[5]=c->r[30]+0x0000006Du; // 80176218
  c->lr=0x80176220u; f_80075FE0(c); // 8017621C
  W8(c->r[1]+0x0000000Cu,c->r[29]); // 80176220
  c->r[3]=c->r[1]+0x0000000Cu; // 80176224
  c->lr=0x8017622Cu; f_8004E228(c); // 80176228
  c->r[4]=R32(c->r[31]+0x00000680u); // 8017622C
  c->r[5]=c->r[30]+0x0000007Eu; // 80176230
  c->lr=0x80176238u; f_80075FE0(c); // 80176234
  W8(c->r[1]+0x00000008u,c->r[29]); // 80176238
  c->r[3]=c->r[1]+0x00000008u; // 8017623C
  c->lr=0x80176244u; f_8004E228(c); // 80176240
  c->r[4]=R32(c->r[31]+0x00000680u); // 80176244
  c->r[5]=c->r[30]+0x0000005Eu; // 80176248
  {uint32_t ea=c->r[2]+0xFFFFBC0Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8017624C
  c->r[6]=c->r[30]+0x00000039u; // 80176250
  c->lr=0x80176258u; f_800760CC(c); // 80176254
  goto L_80176304; // 80176258
L_8017625C:;
  c->r[3]=c->r[3]+0x000001B8u; // 8017625C
  c->r[4]=c->r[1]+0x00000020u; // 80176260
  c->lr=0x80176268u; f_80382F2C(c); // 80176264
  c->r[4]=0u+0x80690000u; // 80176268
  {uint32_t ea=c->r[2]+0xFFFFBC10u; c->f[1]=c->ps1[1]=RF32(ea);} // 8017626C
  c->r[4]=c->r[4]+0x00001598u; // 80176270
  {uint32_t ea=c->r[2]+0xFFFFBC0Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 80176274
  {uint32_t ea=c->r[2]+0xFFFFBC34u; c->f[3]=c->ps1[3]=RF32(ea);} // 80176278
  c->r[3]=c->r[31]+0x000005DCu; // 8017627C
  c->r[4]=c->r[4]+0x00000128u; // 80176280
  c->r[5]=c->r[1]+0x00000020u; // 80176284
  c->lr=0x8017628Cu; f_800E2604(c); // 80176288
  c->r[3]=R32(c->r[31]+0x000005D4u); // 8017628C
  c->r[0]=c->r[3]+0x00000002u; // 80176290
  W32(c->r[31]+0x000005D4u,c->r[0]); // 80176294
  goto L_80176304; // 80176298
L_8017629C:;
  c->r[3]=R32(c->r[3]+0x00000404u); // 8017629C
  c->lr=0x801762A4u; f_802EA4B0(c); // 801762A0
  {uint32_t ea=c->r[2]+0xFFFFBC74u; c->f[0]=c->ps1[0]=RF32(ea);} // 801762A4
  fcmp(c,0,c->f[1],c->f[0]); // 801762A8
  setcrb(c,2,crb(c,1)|crb(c,2)); // 801762AC
  if (!crb(c,2)) { goto L_80176304; } // 801762B0
  {uint32_t ea=c->r[31]+0x000007B4u; c->f[1]=c->ps1[1]=RF32(ea);} // 801762B4
  c->r[3]=c->r[31]|c->r[31]; // 801762B8
  c->r[4]=0u+0x00000000u; // 801762BC
  c->r[5]=0u+0xFFFFFFFFu; // 801762C0
  c->lr=0x801762C8u; f_80062194(c); // 801762C4
  c->r[3]=R32(c->r[31]+0x000005D4u); // 801762C8
  c->r[0]=c->r[3]+0x00000001u; // 801762CC
  W32(c->r[31]+0x000005D4u,c->r[0]); // 801762D0
  goto L_80176304; // 801762D4
L_801762D8:;
  c->r[3]=c->r[3]+0x000005DCu; // 801762D8
  c->lr=0x801762E0u; f_800E2B1C(c); // 801762DC
  cmps(c,0,(int32_t)c->r[3],0); // 801762E0
  if (crb(c,2)) { goto L_80176304; } // 801762E4
  c->r[4]=R32(c->r[31]+0x000005D0u); // 801762E8
  c->r[0]=0u+0x00000000u; // 801762EC
  W32(c->r[31]+0x00000688u,c->r[0]); // 801762F0
  c->r[3]=c->r[31]|c->r[31]; // 801762F4
  c->r[0]=c->r[4]+0x00000001u; // 801762F8
  W32(c->r[31]+0x000005D0u,c->r[0]); // 801762FC
  c->lr=0x80176304u; f_80177388(c); // 80176300
L_80176304:;
  c->r[11]=c->r[1]+0x00000090u; // 80176304
  c->lr=0x8017630Cu; { c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80176308
  c->r[0]=R32(c->r[1]+0x00000094u); // 8017630C
  c->lr=c->r[0]; // 80176310
  c->r[1]=c->r[1]+0x00000090u; // 80176314
  return; // 80176318
}

// fn_8017631C
void f_8017631C(Ctx* __restrict c) {
  trace_call(0x8017631Cu);
  return; // 8017631C
}

// fn_80176320
void f_80176320(Ctx* __restrict c) {
  trace_call(0x80176320u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80176320
  c->r[0]=c->lr; // 80176324
  W32(c->r[1]+0x00000024u,c->r[0]); // 80176328
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8017632C
  c->r[31]=c->r[3]|c->r[3]; // 80176330
  c->r[0]=R32(c->r[3]+0x000005D4u); // 80176334
  cmps(c,0,(int32_t)c->r[0],0); // 80176338
  if (crb(c,2)) { goto L_8017635C; } // 8017633C
  cmps(c,0,(int32_t)c->r[0],1); // 80176340
  if (crb(c,2)) { goto L_80176444; } // 80176344
  cmps(c,0,(int32_t)c->r[0],2); // 80176348
  if (crb(c,2)) { goto L_801764AC; } // 8017634C
  cmps(c,0,(int32_t)c->r[0],3); // 80176350
  if (crb(c,2)) { goto L_80176584; } // 80176354
  goto L_801765DC; // 80176358
L_8017635C:;
  c->r[4]=R32(c->r[3]+0x00000004u); // 8017635C
  cmps(c,0,(int32_t)c->r[4],0); // 80176360
  if (crb(c,2)) { goto L_80176370; } // 80176364
  c->r[0]=R32(c->r[4]+0x00000008u); // 80176368
  goto L_80176374; // 8017636C
L_80176370:;
  c->r[0]=0u+0x00000000u; // 80176370
L_80176374:;
  cmps(c,0,(int32_t)c->r[0],0); // 80176374
  if (!crb(c,2)) { goto L_801763C4; } // 80176378
  c->r[4]=0u+0x80690000u; // 8017637C
  {uint32_t ea=c->r[2]+0xFFFFBC10u; c->f[1]=c->ps1[1]=RF32(ea);} // 80176380
  c->r[4]=c->r[4]+0x00001598u; // 80176384
  {uint32_t ea=c->r[2]+0xFFFFBC0Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 80176388
  {uint32_t ea=c->r[2]+0xFFFFBC34u; c->f[3]=c->ps1[3]=RF32(ea);} // 8017638C
  c->r[4]=c->r[4]+0x00000134u; // 80176390
  c->r[3]=c->r[3]+0x000005DCu; // 80176394
  c->lr=0x8017639Cu; f_800E24D0(c); // 80176398
  c->r[4]=0u+0x00010000u; // 8017639C
  c->r[3]=c->r[31]|c->r[31]; // 801763A0
  c->r[4]=c->r[4]+0xFFFFE6DFu; // 801763A4
  c->r[5]=0u+0x00000001u; // 801763A8
  c->lr=0x801763B0u; f_80064744(c); // 801763AC
  {uint32_t ea=c->r[31]+0x000007C0u; c->f[1]=c->ps1[1]=RF32(ea);} // 801763B0
  c->r[3]=c->r[31]+0x000007F4u; // 801763B4
  c->lr=0x801763BCu; f_80175EF0(c); // 801763B8
  c->r[0]=0u+0x00000004u; // 801763BC
  W32(c->r[31]+0x000005C8u,c->r[0]); // 801763C0
L_801763C4:;
  {uint32_t ea=c->r[2]+0xFFFFBC78u; c->f[1]=c->ps1[1]=RF32(ea);} // 801763C4
  c->r[3]=c->r[31]+0x000005DCu; // 801763C8
  c->lr=0x801763D0u; f_800E2B50(c); // 801763CC
  cmps(c,0,(int32_t)c->r[3],0); // 801763D0
  if (crb(c,2)) { goto L_801763F0; } // 801763D4
  c->r[0]=0u+0x00000000u; // 801763D8
  W8(c->r[1]+0x00000008u,c->r[0]); // 801763DC
  c->r[3]=c->r[1]+0x00000008u; // 801763E0
  c->lr=0x801763E8u; f_800462D8(c); // 801763E4
  c->r[4]=0u+0x00000001u; // 801763E8
  c->lr=0x801763F0u; f_800EA1A0(c); // 801763EC
L_801763F0:;
  c->r[3]=c->r[31]+0x000005DCu; // 801763F0
  c->lr=0x801763F8u; f_800E2B1C(c); // 801763F4
  cmps(c,0,(int32_t)c->r[3],0); // 801763F8
  if (crb(c,2)) { goto L_801765DC; } // 801763FC
  c->r[4]=0u+0x80690000u; // 80176400
  {uint32_t ea=c->r[2]+0xFFFFBC10u; c->f[1]=c->ps1[1]=RF32(ea);} // 80176404
  c->r[4]=c->r[4]+0x00001598u; // 80176408
  {uint32_t ea=c->r[2]+0xFFFFBC0Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 8017640C
  {uint32_t ea=c->r[2]+0xFFFFBC34u; c->f[3]=c->ps1[3]=RF32(ea);} // 80176410
  c->r[3]=c->r[31]+0x000005DCu; // 80176414
  c->r[4]=c->r[4]+0x00000140u; // 80176418
  c->lr=0x80176420u; f_800E24D0(c); // 8017641C
  c->r[4]=0u+0x00010000u; // 80176420
  c->r[3]=c->r[31]|c->r[31]; // 80176424
  c->r[4]=c->r[4]+0xFFFFE6E0u; // 80176428
  c->r[5]=0u+0x00000001u; // 8017642C
  c->lr=0x80176434u; f_80064744(c); // 80176430
  c->r[3]=R32(c->r[31]+0x000005D4u); // 80176434
  c->r[0]=c->r[3]+0x00000001u; // 80176438
  W32(c->r[31]+0x000005D4u,c->r[0]); // 8017643C
  goto L_801765DC; // 80176440
L_80176444:;
  c->r[3]=R32(c->r[3]+0x00000404u); // 80176444
  {uint32_t ea=c->r[2]+0xFFFFBC7Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 80176448
  c->lr=0x80176450u; f_802EA5A4(c); // 8017644C
  cmps(c,0,(int32_t)c->r[3],0); // 80176450
  if (crb(c,2)) { goto L_80176484; } // 80176454
  {uint32_t ea=c->r[2]+0xFFFFBC0Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 80176458
  c->r[3]=c->r[31]+0x000007F4u; // 8017645C
  c->lr=0x80176464u; f_80172E34(c); // 80176460
  c->r[0]=R8(c->r[31]+0x00000808u); // 80176464
  cmps(c,0,(int32_t)c->r[0],0); // 80176468
  if (!crb(c,2)) { goto L_80176484; } // 8017646C
  {uint32_t ea=c->r[31]+0x000007BCu; c->f[1]=c->ps1[1]=RF32(ea);} // 80176470
  c->r[3]=c->r[31]|c->r[31]; // 80176474
  c->r[4]=0u+0x00000000u; // 80176478
  c->r[5]=0u+0xFFFFFFFFu; // 8017647C
  c->lr=0x80176484u; f_80062194(c); // 80176480
L_80176484:;
  c->r[3]=R32(c->r[31]+0x00000404u); // 80176484
  c->lr=0x8017648Cu; f_802EA4B0(c); // 80176488
  {uint32_t ea=c->r[2]+0xFFFFBC80u; c->f[0]=c->ps1[0]=RF32(ea);} // 8017648C
  fcmp(c,0,c->f[1],c->f[0]); // 80176490
  setcrb(c,2,crb(c,1)|crb(c,2)); // 80176494
  if (!crb(c,2)) { goto L_801765DC; } // 80176498
  c->r[3]=R32(c->r[31]+0x000005D4u); // 8017649C
  c->r[0]=c->r[3]+0x00000001u; // 801764A0
  W32(c->r[31]+0x000005D4u,c->r[0]); // 801764A4
  goto L_801765DC; // 801764A8
L_801764AC:;
  c->r[3]=R32(c->r[3]+0x00000404u); // 801764AC
  {uint32_t ea=c->r[2]+0xFFFFBC7Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801764B0
  c->lr=0x801764B8u; f_802EA5A4(c); // 801764B4
  cmps(c,0,(int32_t)c->r[3],0); // 801764B8
  if (crb(c,2)) { goto L_801764EC; } // 801764BC
  {uint32_t ea=c->r[2]+0xFFFFBC0Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801764C0
  c->r[3]=c->r[31]+0x000007F4u; // 801764C4
  c->lr=0x801764CCu; f_80172E34(c); // 801764C8
  c->r[0]=R8(c->r[31]+0x00000808u); // 801764CC
  cmps(c,0,(int32_t)c->r[0],0); // 801764D0
  if (!crb(c,2)) { goto L_801764EC; } // 801764D4
  {uint32_t ea=c->r[31]+0x000007BCu; c->f[1]=c->ps1[1]=RF32(ea);} // 801764D8
  c->r[3]=c->r[31]|c->r[31]; // 801764DC
  c->r[4]=0u+0x00000000u; // 801764E0
  c->r[5]=0u+0xFFFFFFFFu; // 801764E4
  c->lr=0x801764ECu; f_80062194(c); // 801764E8
L_801764EC:;
  c->r[3]=c->r[31]+0x000005DCu; // 801764EC
  c->lr=0x801764F4u; f_800E2B1C(c); // 801764F0
  cmps(c,0,(int32_t)c->r[3],0); // 801764F4
  if (crb(c,2)) { goto L_801765DC; } // 801764F8
  {uint32_t ea=c->r[2]+0xFFFFBC0Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801764FC
  c->r[3]=c->r[31]+0x000007F4u; // 80176500
  c->lr=0x80176508u; f_80172E34(c); // 80176504
  c->r[0]=R8(c->r[31]+0x00000808u); // 80176508
  cmps(c,0,(int32_t)c->r[0],0); // 8017650C
  if (crb(c,2)) { goto L_80176560; } // 80176510
  c->r[4]=0u+0x80690000u; // 80176514
  {uint32_t ea=c->r[2]+0xFFFFBC10u; c->f[1]=c->ps1[1]=RF32(ea);} // 80176518
  c->r[4]=c->r[4]+0x00001598u; // 8017651C
  {uint32_t ea=c->r[2]+0xFFFFBC0Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 80176520
  {uint32_t ea=c->r[2]+0xFFFFBC34u; c->f[3]=c->ps1[3]=RF32(ea);} // 80176524
  c->r[3]=c->r[31]+0x000005DCu; // 80176528
  c->r[4]=c->r[4]+0x0000014Cu; // 8017652C
  c->lr=0x80176534u; f_800E24D0(c); // 80176530
  c->r[0]=0u+0x00000002u; // 80176534
  c->r[4]=0u+0x00010000u; // 80176538
  W32(c->r[31]+0x000005C8u,c->r[0]); // 8017653C
  c->r[3]=c->r[31]|c->r[31]; // 80176540
  c->r[4]=c->r[4]+0xFFFFE809u; // 80176544
  c->r[5]=0u+0x00000001u; // 80176548
  c->lr=0x80176550u; f_80064744(c); // 8017654C
  c->r[3]=R32(c->r[31]+0x000005D4u); // 80176550
  c->r[0]=c->r[3]+0x00000001u; // 80176554
  W32(c->r[31]+0x000005D4u,c->r[0]); // 80176558
  goto L_801765DC; // 8017655C
L_80176560:;
  c->r[4]=0u+0x80690000u; // 80176560
  {uint32_t ea=c->r[2]+0xFFFFBC10u; c->f[1]=c->ps1[1]=RF32(ea);} // 80176564
  c->r[4]=c->r[4]+0x00001598u; // 80176568
  {uint32_t ea=c->r[2]+0xFFFFBC0Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 8017656C
  {uint32_t ea=c->r[2]+0xFFFFBC34u; c->f[3]=c->ps1[3]=RF32(ea);} // 80176570
  c->r[3]=c->r[31]+0x000005DCu; // 80176574
  c->r[4]=c->r[4]+0x00000140u; // 80176578
  c->lr=0x80176580u; f_800E24D0(c); // 8017657C
  goto L_801765DC; // 80176580
L_80176584:;
  c->r[3]=c->r[3]+0x000005DCu; // 80176584
  c->lr=0x8017658Cu; f_800E2B1C(c); // 80176588
  cmps(c,0,(int32_t)c->r[3],0); // 8017658C
  if (crb(c,2)) { goto L_801765DC; } // 80176590
  c->r[4]=0u+0x80690000u; // 80176594
  {uint32_t ea=c->r[2]+0xFFFFBC10u; c->f[1]=c->ps1[1]=RF32(ea);} // 80176598
  c->r[4]=c->r[4]+0x00001598u; // 8017659C
  {uint32_t ea=c->r[2]+0xFFFFBC0Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 801765A0
  {uint32_t ea=c->r[2]+0xFFFFBC34u; c->f[3]=c->ps1[3]=RF32(ea);} // 801765A4
  c->r[3]=c->r[31]+0x000005DCu; // 801765A8
  c->r[4]=c->r[4]+0x00000158u; // 801765AC
  c->lr=0x801765B4u; f_800E24D0(c); // 801765B0
  c->r[4]=0u+0x00010000u; // 801765B4
  c->r[3]=c->r[31]|c->r[31]; // 801765B8
  c->r[4]=c->r[4]+0xFFFFE741u; // 801765BC
  c->r[5]=0u+0x00000001u; // 801765C0
  c->lr=0x801765C8u; f_80064744(c); // 801765C4
  c->r[4]=R32(c->r[31]+0x000005D0u); // 801765C8
  c->r[3]=c->r[31]|c->r[31]; // 801765CC
  c->r[0]=c->r[4]+0x00000001u; // 801765D0
  W32(c->r[31]+0x000005D0u,c->r[0]); // 801765D4
  c->lr=0x801765DCu; f_80177388(c); // 801765D8
L_801765DC:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801765DC
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801765E0
  c->lr=c->r[0]; // 801765E4
  c->r[1]=c->r[1]+0x00000020u; // 801765E8
  return; // 801765EC
}

// fn_801765F0
void f_801765F0(Ctx* __restrict c) {
  trace_call(0x801765F0u);
  return; // 801765F0
}

// fn_801765F4
void f_801765F4(Ctx* __restrict c) {
  trace_call(0x801765F4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801765F4
  c->r[0]=c->lr; // 801765F8
  W32(c->r[1]+0x00000014u,c->r[0]); // 801765FC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80176600
  c->r[31]=c->r[3]|c->r[3]; // 80176604
  c->r[0]=R32(c->r[3]+0x000005D4u); // 80176608
  cmps(c,0,(int32_t)c->r[0],0); // 8017660C
  if (crb(c,2)) { goto L_80176620; } // 80176610
  cmps(c,0,(int32_t)c->r[0],1); // 80176614
  if (crb(c,2)) { goto L_8017671C; } // 80176618
  goto L_8017676C; // 8017661C
L_80176620:;
  c->r[4]=R32(c->r[3]+0x00000004u); // 80176620
  cmps(c,0,(int32_t)c->r[4],0); // 80176624
  if (crb(c,2)) { goto L_80176634; } // 80176628
  c->r[0]=R32(c->r[4]+0x00000008u); // 8017662C
  goto L_80176638; // 80176630
L_80176634:;
  c->r[0]=0u+0x00000000u; // 80176634
L_80176638:;
  cmps(c,0,(int32_t)c->r[0],0); // 80176638
  if (!crb(c,2)) { goto L_80176688; } // 8017663C
  c->r[4]=0u+0x80690000u; // 80176640
  {uint32_t ea=c->r[2]+0xFFFFBC10u; c->f[1]=c->ps1[1]=RF32(ea);} // 80176644
  c->r[4]=c->r[4]+0x00001598u; // 80176648
  {uint32_t ea=c->r[2]+0xFFFFBC0Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 8017664C
  {uint32_t ea=c->r[2]+0xFFFFBC34u; c->f[3]=c->ps1[3]=RF32(ea);} // 80176650
  c->r[4]=c->r[4]+0x00000164u; // 80176654
  c->r[3]=c->r[3]+0x000005DCu; // 80176658
  c->lr=0x80176660u; f_800E24D0(c); // 8017665C
  c->r[4]=0u+0x00010000u; // 80176660
  c->r[3]=c->r[31]|c->r[31]; // 80176664
  c->r[4]=c->r[4]+0xFFFFE6E1u; // 80176668
  c->r[5]=0u+0x00000001u; // 8017666C
  c->lr=0x80176674u; f_80064744(c); // 80176670
  {uint32_t ea=c->r[31]+0x000007C8u; c->f[1]=c->ps1[1]=RF32(ea);} // 80176674
  c->r[3]=c->r[31]+0x000007F4u; // 80176678
  c->lr=0x80176680u; f_80175EF0(c); // 8017667C
  c->r[0]=0u+0x0000000Cu; // 80176680
  W32(c->r[31]+0x000005C8u,c->r[0]); // 80176684
L_80176688:;
  c->r[3]=R32(c->r[31]+0x00000404u); // 80176688
  c->lr=0x80176690u; f_802EA4B0(c); // 8017668C
  {uint32_t ea=c->r[2]+0xFFFFBC84u; c->f[0]=c->ps1[0]=RF32(ea);} // 80176690
  fcmp(c,0,c->f[1],c->f[0]); // 80176694
  setcrb(c,2,crb(c,1)|crb(c,2)); // 80176698
  if (!crb(c,2)) { goto L_8017676C; } // 8017669C
  c->r[0]=0u+0x00000002u; // 801766A0
  W32(c->r[31]+0x000005C8u,c->r[0]); // 801766A4
  {uint32_t ea=c->r[2]+0xFFFFBC0Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801766A8
  c->r[3]=c->r[31]+0x000007F4u; // 801766AC
  c->lr=0x801766B4u; f_80172E34(c); // 801766B0
  c->r[0]=R8(c->r[31]+0x00000808u); // 801766B4
  cmps(c,0,(int32_t)c->r[0],0); // 801766B8
  if (crb(c,2)) { goto L_8017670C; } // 801766BC
  c->r[4]=0u+0x80690000u; // 801766C0
  {uint32_t ea=c->r[2]+0xFFFFBC10u; c->f[1]=c->ps1[1]=RF32(ea);} // 801766C4
  c->r[4]=c->r[4]+0x00001598u; // 801766C8
  {uint32_t ea=c->r[2]+0xFFFFBC0Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 801766CC
  {uint32_t ea=c->r[2]+0xFFFFBC34u; c->f[3]=c->ps1[3]=RF32(ea);} // 801766D0
  c->r[3]=c->r[31]+0x000005DCu; // 801766D4
  c->r[4]=c->r[4]+0x00000170u; // 801766D8
  c->lr=0x801766E0u; f_800E24D0(c); // 801766DC
  c->r[4]=0u+0x00010000u; // 801766E0
  c->r[3]=c->r[31]|c->r[31]; // 801766E4
  c->r[4]=c->r[4]+0xFFFFE80Au; // 801766E8
  c->r[5]=0u+0x00000001u; // 801766EC
  c->lr=0x801766F4u; f_80064744(c); // 801766F0
  c->r[4]=R32(c->r[31]+0x000005D0u); // 801766F4
  c->r[3]=c->r[31]|c->r[31]; // 801766F8
  c->r[0]=c->r[4]+0x00000001u; // 801766FC
  W32(c->r[31]+0x000005D0u,c->r[0]); // 80176700
  c->lr=0x80176708u; f_80177388(c); // 80176704
  goto L_8017676C; // 80176708
L_8017670C:;
  c->r[3]=R32(c->r[31]+0x000005D4u); // 8017670C
  c->r[0]=c->r[3]+0x00000001u; // 80176710
  W32(c->r[31]+0x000005D4u,c->r[0]); // 80176714
  goto L_8017676C; // 80176718
L_8017671C:;
  c->r[3]=R32(c->r[3]+0x00000404u); // 8017671C
  c->lr=0x80176724u; f_802EA4B0(c); // 80176720
  {uint32_t ea=c->r[2]+0xFFFFBC88u; c->f[0]=c->ps1[0]=RF32(ea);} // 80176724
  fcmp(c,0,c->f[1],c->f[0]); // 80176728
  setcrb(c,2,crb(c,1)|crb(c,2)); // 8017672C
  if (!crb(c,2)) { goto L_8017676C; } // 80176730
  {uint32_t ea=c->r[31]+0x000007C4u; c->f[1]=c->ps1[1]=RF32(ea);} // 80176734
  c->r[3]=c->r[31]|c->r[31]; // 80176738
  c->r[4]=0u+0x00000000u; // 8017673C
  c->r[5]=0u+0xFFFFFFFFu; // 80176740
  c->lr=0x80176748u; f_80062194(c); // 80176744
  c->r[3]=R32(c->r[31]+0x000005D0u); // 80176748
  c->r[0]=0u+0x00000008u; // 8017674C
  c->r[4]=0u+0x00000000u; // 80176750
  W32(c->r[31]+0x000005C8u,c->r[0]); // 80176754
  c->r[0]=c->r[3]+0x00000001u; // 80176758
  c->r[3]=c->r[31]|c->r[31]; // 8017675C
  W32(c->r[31]+0x00000688u,c->r[4]); // 80176760
  W32(c->r[31]+0x000005D0u,c->r[0]); // 80176764
  c->lr=0x8017676Cu; f_80177388(c); // 80176768
L_8017676C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8017676C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80176770
  c->lr=c->r[0]; // 80176774
  c->r[1]=c->r[1]+0x00000010u; // 80176778
  return; // 8017677C
}

// fn_80176780
void f_80176780(Ctx* __restrict c) {
  trace_call(0x80176780u);
  return; // 80176780
}

// fn_80176784
void f_80176784(Ctx* __restrict c) {
  trace_call(0x80176784u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80176784
  c->r[0]=c->lr; // 80176788
  W32(c->r[1]+0x00000014u,c->r[0]); // 8017678C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80176790
  c->r[31]=c->r[3]|c->r[3]; // 80176794
  c->r[0]=R32(c->r[3]+0x000005D4u); // 80176798
  cmps(c,0,(int32_t)c->r[0],0); // 8017679C
  if (crb(c,2)) { goto L_801767B0; } // 801767A0
  cmps(c,0,(int32_t)c->r[0],1); // 801767A4
  if (crb(c,2)) { goto L_801768AC; } // 801767A8
  goto L_801768FC; // 801767AC
L_801767B0:;
  c->r[4]=R32(c->r[3]+0x00000004u); // 801767B0
  cmps(c,0,(int32_t)c->r[4],0); // 801767B4
  if (crb(c,2)) { goto L_801767C4; } // 801767B8
  c->r[0]=R32(c->r[4]+0x00000008u); // 801767BC
  goto L_801767C8; // 801767C0
L_801767C4:;
  c->r[0]=0u+0x00000000u; // 801767C4
L_801767C8:;
  cmps(c,0,(int32_t)c->r[0],0); // 801767C8
  if (!crb(c,2)) { goto L_80176818; } // 801767CC
  c->r[4]=0u+0x80690000u; // 801767D0
  {uint32_t ea=c->r[2]+0xFFFFBC10u; c->f[1]=c->ps1[1]=RF32(ea);} // 801767D4
  c->r[4]=c->r[4]+0x00001598u; // 801767D8
  {uint32_t ea=c->r[2]+0xFFFFBC0Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 801767DC
  {uint32_t ea=c->r[2]+0xFFFFBC34u; c->f[3]=c->ps1[3]=RF32(ea);} // 801767E0
  c->r[4]=c->r[4]+0x0000017Cu; // 801767E4
  c->r[3]=c->r[3]+0x000005DCu; // 801767E8
  c->lr=0x801767F0u; f_800E24D0(c); // 801767EC
  c->r[4]=0u+0x00010000u; // 801767F0
  c->r[3]=c->r[31]|c->r[31]; // 801767F4
  c->r[4]=c->r[4]+0xFFFFE6E2u; // 801767F8
  c->r[5]=0u+0x00000001u; // 801767FC
  c->lr=0x80176804u; f_80064744(c); // 80176800
  {uint32_t ea=c->r[31]+0x000007D0u; c->f[1]=c->ps1[1]=RF32(ea);} // 80176804
  c->r[3]=c->r[31]+0x000007F4u; // 80176808
  c->lr=0x80176810u; f_80175EF0(c); // 8017680C
  c->r[0]=0u+0x0000000Cu; // 80176810
  W32(c->r[31]+0x000005C8u,c->r[0]); // 80176814
L_80176818:;
  c->r[3]=R32(c->r[31]+0x00000404u); // 80176818
  c->lr=0x80176820u; f_802EA4B0(c); // 8017681C
  {uint32_t ea=c->r[2]+0xFFFFBC8Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80176820
  fcmp(c,0,c->f[1],c->f[0]); // 80176824
  setcrb(c,2,crb(c,1)|crb(c,2)); // 80176828
  if (!crb(c,2)) { goto L_801768FC; } // 8017682C
  c->r[0]=0u+0x00000002u; // 80176830
  W32(c->r[31]+0x000005C8u,c->r[0]); // 80176834
  {uint32_t ea=c->r[2]+0xFFFFBC0Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 80176838
  c->r[3]=c->r[31]+0x000007F4u; // 8017683C
  c->lr=0x80176844u; f_80172E34(c); // 80176840
  c->r[0]=R8(c->r[31]+0x00000808u); // 80176844
  cmps(c,0,(int32_t)c->r[0],0); // 80176848
  if (crb(c,2)) { goto L_8017689C; } // 8017684C
  c->r[4]=0u+0x80690000u; // 80176850
  {uint32_t ea=c->r[2]+0xFFFFBC10u; c->f[1]=c->ps1[1]=RF32(ea);} // 80176854
  c->r[4]=c->r[4]+0x00001598u; // 80176858
  {uint32_t ea=c->r[2]+0xFFFFBC0Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 8017685C
  {uint32_t ea=c->r[2]+0xFFFFBC34u; c->f[3]=c->ps1[3]=RF32(ea);} // 80176860
  c->r[3]=c->r[31]+0x000005DCu; // 80176864
  c->r[4]=c->r[4]+0x00000188u; // 80176868
  c->lr=0x80176870u; f_800E24D0(c); // 8017686C
  c->r[4]=0u+0x00010000u; // 80176870
  c->r[3]=c->r[31]|c->r[31]; // 80176874
  c->r[4]=c->r[4]+0xFFFFE80Bu; // 80176878
  c->r[5]=0u+0x00000001u; // 8017687C
  c->lr=0x80176884u; f_80064744(c); // 80176880
  c->r[4]=R32(c->r[31]+0x000005D0u); // 80176884
  c->r[3]=c->r[31]|c->r[31]; // 80176888
  c->r[0]=c->r[4]+0x00000001u; // 8017688C
  W32(c->r[31]+0x000005D0u,c->r[0]); // 80176890
  c->lr=0x80176898u; f_80177388(c); // 80176894
  goto L_801768FC; // 80176898
L_8017689C:;
  c->r[3]=R32(c->r[31]+0x000005D4u); // 8017689C
  c->r[0]=c->r[3]+0x00000001u; // 801768A0
  W32(c->r[31]+0x000005D4u,c->r[0]); // 801768A4
  goto L_801768FC; // 801768A8
L_801768AC:;
  c->r[3]=R32(c->r[3]+0x00000404u); // 801768AC
  c->lr=0x801768B4u; f_802EA4B0(c); // 801768B0
  {uint32_t ea=c->r[2]+0xFFFFBC90u; c->f[0]=c->ps1[0]=RF32(ea);} // 801768B4
  fcmp(c,0,c->f[1],c->f[0]); // 801768B8
  setcrb(c,2,crb(c,1)|crb(c,2)); // 801768BC
  if (!crb(c,2)) { goto L_801768FC; } // 801768C0
  {uint32_t ea=c->r[31]+0x000007CCu; c->f[1]=c->ps1[1]=RF32(ea);} // 801768C4
  c->r[3]=c->r[31]|c->r[31]; // 801768C8
  c->r[4]=0u+0x00000000u; // 801768CC
  c->r[5]=0u+0xFFFFFFFFu; // 801768D0
  c->lr=0x801768D8u; f_80062194(c); // 801768D4
  c->r[3]=R32(c->r[31]+0x000005D0u); // 801768D8
  c->r[0]=0u+0x00000008u; // 801768DC
  c->r[4]=0u+0x00000000u; // 801768E0
  W32(c->r[31]+0x000005C8u,c->r[0]); // 801768E4
  c->r[0]=c->r[3]+0x00000001u; // 801768E8
  c->r[3]=c->r[31]|c->r[31]; // 801768EC
  W32(c->r[31]+0x00000688u,c->r[4]); // 801768F0
  W32(c->r[31]+0x000005D0u,c->r[0]); // 801768F4
  c->lr=0x801768FCu; f_80177388(c); // 801768F8
L_801768FC:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801768FC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80176900
  c->lr=c->r[0]; // 80176904
  c->r[1]=c->r[1]+0x00000010u; // 80176908
  return; // 8017690C
}

// fn_80176910
void f_80176910(Ctx* __restrict c) {
  trace_call(0x80176910u);
  return; // 80176910
}

// fn_80176914
void f_80176914(Ctx* __restrict c) {
  trace_call(0x80176914u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80176914
  c->r[0]=c->lr; // 80176918
  W32(c->r[1]+0x00000014u,c->r[0]); // 8017691C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80176920
  c->r[31]=c->r[3]|c->r[3]; // 80176924
  W32(c->r[1]+0x00000008u,c->r[30]); // 80176928
  c->r[0]=R32(c->r[3]+0x000005D4u); // 8017692C
  cmps(c,0,(int32_t)c->r[0],0); // 80176930
  if (crb(c,2)) { goto L_80176944; } // 80176934
  cmps(c,0,(int32_t)c->r[0],1); // 80176938
  if (crb(c,2)) { goto L_80176A90; } // 8017693C
  goto L_80176B00; // 80176940
L_80176944:;
  c->r[4]=R32(c->r[3]+0x00000004u); // 80176944
  cmps(c,0,(int32_t)c->r[4],0); // 80176948
  if (crb(c,2)) { goto L_80176958; } // 8017694C
  c->r[0]=R32(c->r[4]+0x00000008u); // 80176950
  goto L_8017695C; // 80176954
L_80176958:;
  c->r[0]=0u+0x00000000u; // 80176958
L_8017695C:;
  cmps(c,0,(int32_t)c->r[0],0); // 8017695C
  if (!crb(c,2)) { goto L_801769AC; } // 80176960
  c->r[4]=0u+0x80690000u; // 80176964
  {uint32_t ea=c->r[2]+0xFFFFBC10u; c->f[1]=c->ps1[1]=RF32(ea);} // 80176968
  c->r[4]=c->r[4]+0x00001598u; // 8017696C
  {uint32_t ea=c->r[2]+0xFFFFBC0Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 80176970
  {uint32_t ea=c->r[2]+0xFFFFBC34u; c->f[3]=c->ps1[3]=RF32(ea);} // 80176974
  c->r[4]=c->r[4]+0x00000194u; // 80176978
  c->r[3]=c->r[3]+0x000005DCu; // 8017697C
  c->lr=0x80176984u; f_800E24D0(c); // 80176980
  c->r[4]=0u+0x00010000u; // 80176984
  c->r[3]=c->r[31]|c->r[31]; // 80176988
  c->r[4]=c->r[4]+0xFFFFE6E3u; // 8017698C
  c->r[5]=0u+0x00000001u; // 80176990
  c->lr=0x80176998u; f_80064744(c); // 80176994
  {uint32_t ea=c->r[31]+0x000007D8u; c->f[1]=c->ps1[1]=RF32(ea);} // 80176998
  c->r[3]=c->r[31]+0x000007F4u; // 8017699C
  c->lr=0x801769A4u; f_80175EF0(c); // 801769A0
  c->r[0]=0u+0x0000000Cu; // 801769A4
  W32(c->r[31]+0x000005C8u,c->r[0]); // 801769A8
L_801769AC:;
  c->r[3]=R32(c->r[31]+0x00000404u); // 801769AC
  {uint32_t ea=c->r[2]+0xFFFFBC7Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801769B0
  c->lr=0x801769B8u; f_802EA5A4(c); // 801769B4
  cmps(c,0,(int32_t)c->r[3],0); // 801769B8
  if (crb(c,2)) { goto L_801769E0; } // 801769BC
  c->r[4]=0u+0x80690000u; // 801769C0
  c->r[3]=R32(c->r[31]+0x00000404u); // 801769C4
  c->r[4]=c->r[4]+0x00001598u; // 801769C8
  {uint32_t ea=c->r[2]+0xFFFFBC0Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801769CC
  {uint32_t ea=c->r[2]+0xFFFFBC10u; c->f[2]=c->ps1[2]=RF32(ea);} // 801769D0
  c->r[4]=c->r[4]+0x0000001Du; // 801769D4
  c->r[5]=0u+0x00000001u; // 801769D8
  c->lr=0x801769E0u; f_802E9044(c); // 801769DC
L_801769E0:;
  c->r[3]=R32(c->r[31]+0x00000404u); // 801769E0
  c->lr=0x801769E8u; f_802EA4B0(c); // 801769E4
  {uint32_t ea=c->r[2]+0xFFFFBC94u; c->f[0]=c->ps1[0]=RF32(ea);} // 801769E8
  fcmp(c,0,c->f[1],c->f[0]); // 801769EC
  setcrb(c,2,crb(c,1)|crb(c,2)); // 801769F0
  if (!crb(c,2)) { goto L_80176B00; } // 801769F4
  c->r[0]=0u+0x00000002u; // 801769F8
  W32(c->r[31]+0x000005C8u,c->r[0]); // 801769FC
  {uint32_t ea=c->r[2]+0xFFFFBC0Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 80176A00
  c->r[3]=c->r[31]+0x000007F4u; // 80176A04
  c->lr=0x80176A0Cu; f_80172E34(c); // 80176A08
  c->r[0]=R8(c->r[31]+0x00000808u); // 80176A0C
  cmps(c,0,(int32_t)c->r[0],0); // 80176A10
  if (crb(c,2)) { goto L_80176A80; } // 80176A14
  c->r[30]=0u+0x80690000u; // 80176A18
  c->r[3]=R32(c->r[31]+0x00000404u); // 80176A1C
  c->r[30]=c->r[30]+0x00001598u; // 80176A20
  {uint32_t ea=c->r[2]+0xFFFFBC0Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 80176A24
  {uint32_t ea=c->r[2]+0xFFFFBC10u; c->f[2]=c->ps1[2]=RF32(ea);} // 80176A28
  c->r[6]=c->r[30]+0x0000001Du; // 80176A2C
  c->r[4]=0u+0x00000002u; // 80176A30
  c->r[5]=0u+0x00000003u; // 80176A34
  c->lr=0x80176A3Cu; f_802E91C8(c); // 80176A38
  {uint32_t ea=c->r[2]+0xFFFFBC10u; c->f[1]=c->ps1[1]=RF32(ea);} // 80176A3C
  c->r[3]=c->r[31]+0x000005DCu; // 80176A40
  {uint32_t ea=c->r[2]+0xFFFFBC0Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 80176A44
  c->r[4]=c->r[30]+0x000001A0u; // 80176A48
  {uint32_t ea=c->r[2]+0xFFFFBC34u; c->f[3]=c->ps1[3]=RF32(ea);} // 80176A4C
  c->lr=0x80176A54u; f_800E24D0(c); // 80176A50
  c->r[4]=0u+0x00010000u; // 80176A54
  c->r[3]=c->r[31]|c->r[31]; // 80176A58
  c->r[4]=c->r[4]+0xFFFFE80Cu; // 80176A5C
  c->r[5]=0u+0x00000001u; // 80176A60
  c->lr=0x80176A68u; f_80064744(c); // 80176A64
  c->r[4]=R32(c->r[31]+0x000005D0u); // 80176A68
  c->r[3]=c->r[31]|c->r[31]; // 80176A6C
  c->r[0]=c->r[4]+0x00000001u; // 80176A70
  W32(c->r[31]+0x000005D0u,c->r[0]); // 80176A74
  c->lr=0x80176A7Cu; f_80177388(c); // 80176A78
  goto L_80176B00; // 80176A7C
L_80176A80:;
  c->r[3]=R32(c->r[31]+0x000005D4u); // 80176A80
  c->r[0]=c->r[3]+0x00000001u; // 80176A84
  W32(c->r[31]+0x000005D4u,c->r[0]); // 80176A88
  goto L_80176B00; // 80176A8C
L_80176A90:;
  c->r[3]=R32(c->r[3]+0x00000404u); // 80176A90
  {uint32_t ea=c->r[2]+0xFFFFBC88u; c->f[1]=c->ps1[1]=RF32(ea);} // 80176A94
  c->lr=0x80176A9Cu; f_802EA5A4(c); // 80176A98
  cmps(c,0,(int32_t)c->r[3],0); // 80176A9C
  if (crb(c,2)) { goto L_80176B00; } // 80176AA0
  {uint32_t ea=c->r[31]+0x000007D4u; c->f[1]=c->ps1[1]=RF32(ea);} // 80176AA4
  c->r[3]=c->r[31]|c->r[31]; // 80176AA8
  c->r[4]=0u+0x00000000u; // 80176AAC
  c->r[5]=0u+0xFFFFFFFFu; // 80176AB0
  c->lr=0x80176AB8u; f_80062194(c); // 80176AB4
  c->r[3]=0u+0x80690000u; // 80176AB8
  c->r[4]=0u+0x00000008u; // 80176ABC
  c->r[3]=c->r[3]+0x00001598u; // 80176AC0
  c->r[0]=0u+0x00000000u; // 80176AC4
  W32(c->r[31]+0x000005C8u,c->r[4]); // 80176AC8
  c->r[6]=c->r[3]+0x0000001Du; // 80176ACC
  c->r[3]=R32(c->r[31]+0x00000404u); // 80176AD0
  c->r[4]=0u+0x00000002u; // 80176AD4
  W32(c->r[31]+0x00000688u,c->r[0]); // 80176AD8
  c->r[5]=0u+0x00000003u; // 80176ADC
  {uint32_t ea=c->r[2]+0xFFFFBC0Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 80176AE0
  {uint32_t ea=c->r[2]+0xFFFFBC10u; c->f[2]=c->ps1[2]=RF32(ea);} // 80176AE4
  c->lr=0x80176AECu; f_802E91C8(c); // 80176AE8
  c->r[4]=R32(c->r[31]+0x000005D0u); // 80176AEC
  c->r[3]=c->r[31]|c->r[31]; // 80176AF0
  c->r[0]=c->r[4]+0x00000001u; // 80176AF4
  W32(c->r[31]+0x000005D0u,c->r[0]); // 80176AF8
  c->lr=0x80176B00u; f_80177388(c); // 80176AFC
L_80176B00:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80176B00
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80176B04
  c->r[30]=R32(c->r[1]+0x00000008u); // 80176B08
  c->lr=c->r[0]; // 80176B0C
  c->r[1]=c->r[1]+0x00000010u; // 80176B10
  return; // 80176B14
}

// fn_80176B18
void f_80176B18(Ctx* __restrict c) {
  trace_call(0x80176B18u);
  return; // 80176B18
}

// fn_80176B1C
void f_80176B1C(Ctx* __restrict c) {
  trace_call(0x80176B1Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80176B1C
  c->r[0]=c->lr; // 80176B20
  W32(c->r[1]+0x00000014u,c->r[0]); // 80176B24
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80176B28
  c->r[31]=c->r[3]|c->r[3]; // 80176B2C
  c->r[0]=R32(c->r[3]+0x000005D4u); // 80176B30
  cmps(c,0,(int32_t)c->r[0],0); // 80176B34
  if (crb(c,2)) { goto L_80176B48; } // 80176B38
  cmps(c,0,(int32_t)c->r[0],1); // 80176B3C
  if (crb(c,2)) { goto L_80176C40; } // 80176B40
  goto L_80176C8C; // 80176B44
L_80176B48:;
  c->r[4]=R32(c->r[3]+0x00000004u); // 80176B48
  cmps(c,0,(int32_t)c->r[4],0); // 80176B4C
  if (crb(c,2)) { goto L_80176B5C; } // 80176B50
  c->r[0]=R32(c->r[4]+0x00000008u); // 80176B54
  goto L_80176B60; // 80176B58
L_80176B5C:;
  c->r[0]=0u+0x00000000u; // 80176B5C
L_80176B60:;
  cmps(c,0,(int32_t)c->r[0],0); // 80176B60
  if (!crb(c,2)) { goto L_80176BB0; } // 80176B64
  c->r[4]=0u+0x80690000u; // 80176B68
  {uint32_t ea=c->r[2]+0xFFFFBC10u; c->f[1]=c->ps1[1]=RF32(ea);} // 80176B6C
  c->r[4]=c->r[4]+0x00001598u; // 80176B70
  {uint32_t ea=c->r[2]+0xFFFFBC0Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 80176B74
  {uint32_t ea=c->r[2]+0xFFFFBC34u; c->f[3]=c->ps1[3]=RF32(ea);} // 80176B78
  c->r[4]=c->r[4]+0x000001ACu; // 80176B7C
  c->r[3]=c->r[3]+0x000005DCu; // 80176B80
  c->lr=0x80176B88u; f_800E24D0(c); // 80176B84
  c->r[4]=0u+0x00010000u; // 80176B88
  c->r[3]=c->r[31]|c->r[31]; // 80176B8C
  c->r[4]=c->r[4]+0xFFFFE6E4u; // 80176B90
  c->r[5]=0u+0x00000001u; // 80176B94
  c->lr=0x80176B9Cu; f_80064744(c); // 80176B98
  {uint32_t ea=c->r[31]+0x000007E0u; c->f[1]=c->ps1[1]=RF32(ea);} // 80176B9C
  c->r[3]=c->r[31]+0x000007F4u; // 80176BA0
  c->lr=0x80176BA8u; f_80175EF0(c); // 80176BA4
  c->r[0]=0u+0x0000000Cu; // 80176BA8
  W32(c->r[31]+0x000005C8u,c->r[0]); // 80176BAC
L_80176BB0:;
  c->r[3]=R32(c->r[31]+0x00000404u); // 80176BB0
  {uint32_t ea=c->r[2]+0xFFFFBC98u; c->f[1]=c->ps1[1]=RF32(ea);} // 80176BB4
  c->lr=0x80176BBCu; f_802EA5A4(c); // 80176BB8
  cmps(c,0,(int32_t)c->r[3],0); // 80176BBC
  if (crb(c,2)) { goto L_80176C8C; } // 80176BC0
  c->r[0]=0u+0x00000002u; // 80176BC4
  W32(c->r[31]+0x000005C8u,c->r[0]); // 80176BC8
  {uint32_t ea=c->r[2]+0xFFFFBC0Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 80176BCC
  c->r[3]=c->r[31]+0x000007F4u; // 80176BD0
  c->lr=0x80176BD8u; f_80172E34(c); // 80176BD4
  c->r[0]=R8(c->r[31]+0x00000808u); // 80176BD8
  cmps(c,0,(int32_t)c->r[0],0); // 80176BDC
  if (crb(c,2)) { goto L_80176C30; } // 80176BE0
  c->r[4]=0u+0x80690000u; // 80176BE4
  {uint32_t ea=c->r[2]+0xFFFFBC10u; c->f[1]=c->ps1[1]=RF32(ea);} // 80176BE8
  c->r[4]=c->r[4]+0x00001598u; // 80176BEC
  {uint32_t ea=c->r[2]+0xFFFFBC0Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 80176BF0
  {uint32_t ea=c->r[2]+0xFFFFBC34u; c->f[3]=c->ps1[3]=RF32(ea);} // 80176BF4
  c->r[3]=c->r[31]+0x000005DCu; // 80176BF8
  c->r[4]=c->r[4]+0x000001B8u; // 80176BFC
  c->lr=0x80176C04u; f_800E24D0(c); // 80176C00
  c->r[4]=0u+0x00010000u; // 80176C04
  c->r[3]=c->r[31]|c->r[31]; // 80176C08
  c->r[4]=c->r[4]+0xFFFFE80Eu; // 80176C0C
  c->r[5]=0u+0x00000001u; // 80176C10
  c->lr=0x80176C18u; f_80064744(c); // 80176C14
  c->r[4]=R32(c->r[31]+0x000005D0u); // 80176C18
  c->r[3]=c->r[31]|c->r[31]; // 80176C1C
  c->r[0]=c->r[4]+0x00000001u; // 80176C20
  W32(c->r[31]+0x000005D0u,c->r[0]); // 80176C24
  c->lr=0x80176C2Cu; f_80177388(c); // 80176C28
  goto L_80176C8C; // 80176C2C
L_80176C30:;
  c->r[3]=R32(c->r[31]+0x000005D4u); // 80176C30
  c->r[0]=c->r[3]+0x00000001u; // 80176C34
  W32(c->r[31]+0x000005D4u,c->r[0]); // 80176C38
  goto L_80176C8C; // 80176C3C
L_80176C40:;
  c->r[3]=R32(c->r[3]+0x00000404u); // 80176C40
  {uint32_t ea=c->r[2]+0xFFFFBC9Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 80176C44
  c->lr=0x80176C4Cu; f_802EA5A4(c); // 80176C48
  cmps(c,0,(int32_t)c->r[3],0); // 80176C4C
  if (crb(c,2)) { goto L_80176C8C; } // 80176C50
  {uint32_t ea=c->r[31]+0x000007DCu; c->f[1]=c->ps1[1]=RF32(ea);} // 80176C54
  c->r[3]=c->r[31]|c->r[31]; // 80176C58
  c->r[4]=0u+0x00000000u; // 80176C5C
  c->r[5]=0u+0xFFFFFFFFu; // 80176C60
  c->lr=0x80176C68u; f_80062194(c); // 80176C64
  c->r[3]=R32(c->r[31]+0x000005D0u); // 80176C68
  c->r[0]=0u+0x00000008u; // 80176C6C
  c->r[4]=0u+0x00000000u; // 80176C70
  W32(c->r[31]+0x000005C8u,c->r[0]); // 80176C74
  c->r[0]=c->r[3]+0x00000001u; // 80176C78
  c->r[3]=c->r[31]|c->r[31]; // 80176C7C
  W32(c->r[31]+0x00000688u,c->r[4]); // 80176C80
  W32(c->r[31]+0x000005D0u,c->r[0]); // 80176C84
  c->lr=0x80176C8Cu; f_80177388(c); // 80176C88
L_80176C8C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80176C8C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80176C90
  c->lr=c->r[0]; // 80176C94
  c->r[1]=c->r[1]+0x00000010u; // 80176C98
  return; // 80176C9C
}

// fn_80176CA0
void f_80176CA0(Ctx* __restrict c) {
  trace_call(0x80176CA0u);
  return; // 80176CA0
}

// fn_80176CA4
void f_80176CA4(Ctx* __restrict c) {
  trace_call(0x80176CA4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80176CA4
  c->r[0]=c->lr; // 80176CA8
  W32(c->r[1]+0x00000014u,c->r[0]); // 80176CAC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80176CB0
  c->r[31]=c->r[3]|c->r[3]; // 80176CB4
  c->r[0]=R32(c->r[3]+0x000005D4u); // 80176CB8
  cmps(c,0,(int32_t)c->r[0],0); // 80176CBC
  if (crb(c,2)) { goto L_80176CD0; } // 80176CC0
  cmps(c,0,(int32_t)c->r[0],1); // 80176CC4
  if (crb(c,2)) { goto L_80176DCC; } // 80176CC8
  goto L_80176E1C; // 80176CCC
L_80176CD0:;
  c->r[4]=R32(c->r[3]+0x00000004u); // 80176CD0
  cmps(c,0,(int32_t)c->r[4],0); // 80176CD4
  if (crb(c,2)) { goto L_80176CE4; } // 80176CD8
  c->r[0]=R32(c->r[4]+0x00000008u); // 80176CDC
  goto L_80176CE8; // 80176CE0
L_80176CE4:;
  c->r[0]=0u+0x00000000u; // 80176CE4
L_80176CE8:;
  cmps(c,0,(int32_t)c->r[0],0); // 80176CE8
  if (!crb(c,2)) { goto L_80176D38; } // 80176CEC
  c->r[4]=0u+0x80690000u; // 80176CF0
  {uint32_t ea=c->r[2]+0xFFFFBC10u; c->f[1]=c->ps1[1]=RF32(ea);} // 80176CF4
  c->r[4]=c->r[4]+0x00001598u; // 80176CF8
  {uint32_t ea=c->r[2]+0xFFFFBC0Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 80176CFC
  {uint32_t ea=c->r[2]+0xFFFFBC34u; c->f[3]=c->ps1[3]=RF32(ea);} // 80176D00
  c->r[4]=c->r[4]+0x000001C4u; // 80176D04
  c->r[3]=c->r[3]+0x000005DCu; // 80176D08
  c->lr=0x80176D10u; f_800E24D0(c); // 80176D0C
  c->r[4]=0u+0x00010000u; // 80176D10
  c->r[3]=c->r[31]|c->r[31]; // 80176D14
  c->r[4]=c->r[4]+0xFFFFE6E5u; // 80176D18
  c->r[5]=0u+0x00000001u; // 80176D1C
  c->lr=0x80176D24u; f_80064744(c); // 80176D20
  {uint32_t ea=c->r[31]+0x000007E8u; c->f[1]=c->ps1[1]=RF32(ea);} // 80176D24
  c->r[3]=c->r[31]+0x000007F4u; // 80176D28
  c->lr=0x80176D30u; f_80175EF0(c); // 80176D2C
  c->r[0]=0u+0x0000000Cu; // 80176D30
  W32(c->r[31]+0x000005C8u,c->r[0]); // 80176D34
L_80176D38:;
  c->r[3]=R32(c->r[31]+0x00000404u); // 80176D38
  c->lr=0x80176D40u; f_802EA4B0(c); // 80176D3C
  {uint32_t ea=c->r[2]+0xFFFFBC80u; c->f[0]=c->ps1[0]=RF32(ea);} // 80176D40
  fcmp(c,0,c->f[1],c->f[0]); // 80176D44
  setcrb(c,2,crb(c,1)|crb(c,2)); // 80176D48
  if (!crb(c,2)) { goto L_80176E1C; } // 80176D4C
  c->r[0]=0u+0x00000002u; // 80176D50
  W32(c->r[31]+0x000005C8u,c->r[0]); // 80176D54
  {uint32_t ea=c->r[2]+0xFFFFBC0Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 80176D58
  c->r[3]=c->r[31]+0x000007F4u; // 80176D5C
  c->lr=0x80176D64u; f_80172E34(c); // 80176D60
  c->r[0]=R8(c->r[31]+0x00000808u); // 80176D64
  cmps(c,0,(int32_t)c->r[0],0); // 80176D68
  if (crb(c,2)) { goto L_80176DBC; } // 80176D6C
  c->r[4]=0u+0x80690000u; // 80176D70
  {uint32_t ea=c->r[2]+0xFFFFBC10u; c->f[1]=c->ps1[1]=RF32(ea);} // 80176D74
  c->r[4]=c->r[4]+0x00001598u; // 80176D78
  {uint32_t ea=c->r[2]+0xFFFFBC0Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 80176D7C
  {uint32_t ea=c->r[2]+0xFFFFBC34u; c->f[3]=c->ps1[3]=RF32(ea);} // 80176D80
  c->r[3]=c->r[31]+0x000005DCu; // 80176D84
  c->r[4]=c->r[4]+0x000001D0u; // 80176D88
  c->lr=0x80176D90u; f_800E24D0(c); // 80176D8C
  c->r[4]=0u+0x00010000u; // 80176D90
  c->r[3]=c->r[31]|c->r[31]; // 80176D94
  c->r[4]=c->r[4]+0xFFFFE80Fu; // 80176D98
  c->r[5]=0u+0x00000001u; // 80176D9C
  c->lr=0x80176DA4u; f_80064744(c); // 80176DA0
  c->r[4]=R32(c->r[31]+0x000005D0u); // 80176DA4
  c->r[3]=c->r[31]|c->r[31]; // 80176DA8
  c->r[0]=c->r[4]+0x00000001u; // 80176DAC
  W32(c->r[31]+0x000005D0u,c->r[0]); // 80176DB0
  c->lr=0x80176DB8u; f_80177388(c); // 80176DB4
  goto L_80176E1C; // 80176DB8
L_80176DBC:;
  c->r[3]=R32(c->r[31]+0x000005D4u); // 80176DBC
  c->r[0]=c->r[3]+0x00000001u; // 80176DC0
  W32(c->r[31]+0x000005D4u,c->r[0]); // 80176DC4
  goto L_80176E1C; // 80176DC8
L_80176DCC:;
  c->r[3]=R32(c->r[3]+0x00000404u); // 80176DCC
  c->lr=0x80176DD4u; f_802EA4B0(c); // 80176DD0
  {uint32_t ea=c->r[2]+0xFFFFBC80u; c->f[0]=c->ps1[0]=RF32(ea);} // 80176DD4
  fcmp(c,0,c->f[1],c->f[0]); // 80176DD8
  setcrb(c,2,crb(c,1)|crb(c,2)); // 80176DDC
  if (!crb(c,2)) { goto L_80176E1C; } // 80176DE0
  {uint32_t ea=c->r[31]+0x000007E4u; c->f[1]=c->ps1[1]=RF32(ea);} // 80176DE4
  c->r[3]=c->r[31]|c->r[31]; // 80176DE8
  c->r[4]=0u+0x00000000u; // 80176DEC
  c->r[5]=0u+0xFFFFFFFFu; // 80176DF0
  c->lr=0x80176DF8u; f_80062194(c); // 80176DF4
  c->r[3]=R32(c->r[31]+0x000005D0u); // 80176DF8
  c->r[0]=0u+0x00000008u; // 80176DFC
  c->r[4]=0u+0x00000000u; // 80176E00
  W32(c->r[31]+0x000005C8u,c->r[0]); // 80176E04
  c->r[0]=c->r[3]+0x00000001u; // 80176E08
  c->r[3]=c->r[31]|c->r[31]; // 80176E0C
  W32(c->r[31]+0x00000688u,c->r[4]); // 80176E10
  W32(c->r[31]+0x000005D0u,c->r[0]); // 80176E14
  c->lr=0x80176E1Cu; f_80177388(c); // 80176E18
L_80176E1C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80176E1C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80176E20
  c->lr=c->r[0]; // 80176E24
  c->r[1]=c->r[1]+0x00000010u; // 80176E28
  return; // 80176E2C
}

// fn_80176E30
void f_80176E30(Ctx* __restrict c) {
  trace_call(0x80176E30u);
  return; // 80176E30
}

// fn_80176E34
void f_80176E34(Ctx* __restrict c) {
  trace_call(0x80176E34u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80176E34
  c->r[0]=c->lr; // 80176E38
  W32(c->r[1]+0x00000014u,c->r[0]); // 80176E3C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80176E40
  c->r[31]=c->r[3]|c->r[3]; // 80176E44
  c->r[4]=R32(c->r[3]+0x00000004u); // 80176E48
  cmps(c,0,(int32_t)c->r[4],0); // 80176E4C
  if (crb(c,2)) { goto L_80176E5C; } // 80176E50
  c->r[0]=R32(c->r[4]+0x00000008u); // 80176E54
  goto L_80176E60; // 80176E58
L_80176E5C:;
  c->r[0]=0u+0x00000000u; // 80176E5C
L_80176E60:;
  cmps(c,0,(int32_t)c->r[0],0); // 80176E60
  if (!crb(c,2)) { goto L_80176EB0; } // 80176E64
  c->r[4]=0u+0x80690000u; // 80176E68
  c->r[0]=0u+0x00000008u; // 80176E6C
  W32(c->r[3]+0x000005C8u,c->r[0]); // 80176E70
  c->r[4]=c->r[4]+0x00001598u; // 80176E74
  {uint32_t ea=c->r[2]+0xFFFFBC10u; c->f[1]=c->ps1[1]=RF32(ea);} // 80176E78
  c->r[4]=c->r[4]+0x000001DCu; // 80176E7C
  {uint32_t ea=c->r[2]+0xFFFFBC0Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 80176E80
  c->r[3]=c->r[3]+0x000005DCu; // 80176E84
  {uint32_t ea=c->r[2]+0xFFFFBC34u; c->f[3]=c->ps1[3]=RF32(ea);} // 80176E88
  c->lr=0x80176E90u; f_800E24D0(c); // 80176E8C
  c->r[4]=0u+0x00010000u; // 80176E90
  c->r[3]=c->r[31]|c->r[31]; // 80176E94
  c->r[4]=c->r[4]+0xFFFFE679u; // 80176E98
  c->r[5]=0u+0x00000001u; // 80176E9C
  c->lr=0x80176EA4u; f_80064744(c); // 80176EA0
  {uint32_t ea=c->r[2]+0xFFFFBC54u; c->f[1]=c->ps1[1]=RF32(ea);} // 80176EA4
  c->r[3]=c->r[31]+0x000007F4u; // 80176EA8
  c->lr=0x80176EB0u; f_80175EF0(c); // 80176EAC
L_80176EB0:;
  c->r[3]=c->r[31]+0x00000354u; // 80176EB0
  c->lr=0x80176EB8u; f_800667AC(c); // 80176EB4
  cmps(c,0,(int32_t)c->r[3],0); // 80176EB8
  if (crb(c,2)) { goto L_80176ED0; } // 80176EBC
  c->r[0]=0u+0x00000000u; // 80176EC0
  W32(c->r[31]+0x00000688u,c->r[0]); // 80176EC4
  c->r[3]=c->r[31]|c->r[31]; // 80176EC8
  c->lr=0x80176ED0u; f_80177388(c); // 80176ECC
L_80176ED0:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80176ED0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80176ED4
  c->lr=c->r[0]; // 80176ED8
  c->r[1]=c->r[1]+0x00000010u; // 80176EDC
  return; // 80176EE0
}

// fn_80176EE4
void f_80176EE4(Ctx* __restrict c) {
  trace_call(0x80176EE4u);
  return; // 80176EE4
}

// fn_80176EE8
void f_80176EE8(Ctx* __restrict c) {
  trace_call(0x80176EE8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80176EE8
  c->r[0]=c->lr; // 80176EEC
  W32(c->r[1]+0x00000014u,c->r[0]); // 80176EF0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80176EF4
  c->r[31]=c->r[3]|c->r[3]; // 80176EF8
  W32(c->r[1]+0x00000008u,c->r[30]); // 80176EFC
  c->r[0]=R32(c->r[3]+0x000005D4u); // 80176F00
  cmps(c,0,(int32_t)c->r[0],0); // 80176F04
  if (crb(c,2)) { goto L_80176F18; } // 80176F08
  cmps(c,0,(int32_t)c->r[0],1); // 80176F0C
  if (crb(c,2)) { goto L_8017707C; } // 80176F10
  goto L_801770EC; // 80176F14
L_80176F18:;
  c->r[4]=R32(c->r[3]+0x00000004u); // 80176F18
  cmps(c,0,(int32_t)c->r[4],0); // 80176F1C
  if (crb(c,2)) { goto L_80176F2C; } // 80176F20
  c->r[0]=R32(c->r[4]+0x00000008u); // 80176F24
  goto L_80176F30; // 80176F28
L_80176F2C:;
  c->r[0]=0u+0x00000000u; // 80176F2C
L_80176F30:;
  cmps(c,0,(int32_t)c->r[0],0); // 80176F30
  if (!crb(c,2)) { goto L_80176F98; } // 80176F34
  c->r[30]=0u+0x80690000u; // 80176F38
  c->r[3]=R32(c->r[3]+0x00000404u); // 80176F3C
  c->r[30]=c->r[30]+0x00001598u; // 80176F40
  {uint32_t ea=c->r[2]+0xFFFFBC0Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 80176F44
  {uint32_t ea=c->r[2]+0xFFFFBC10u; c->f[2]=c->ps1[2]=RF32(ea);} // 80176F48
  c->r[4]=c->r[30]+0x0000001Du; // 80176F4C
  c->r[5]=0u+0x00000001u; // 80176F50
  c->lr=0x80176F58u; f_802E9044(c); // 80176F54
  {uint32_t ea=c->r[2]+0xFFFFBC10u; c->f[1]=c->ps1[1]=RF32(ea);} // 80176F58
  c->r[3]=c->r[31]+0x000005DCu; // 80176F5C
  {uint32_t ea=c->r[2]+0xFFFFBC0Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 80176F60
  c->r[4]=c->r[30]+0x000001E8u; // 80176F64
  {uint32_t ea=c->r[2]+0xFFFFBC34u; c->f[3]=c->ps1[3]=RF32(ea);} // 80176F68
  c->lr=0x80176F70u; f_800E24D0(c); // 80176F6C
  c->r[4]=0u+0x00010000u; // 80176F70
  c->r[3]=c->r[31]|c->r[31]; // 80176F74
  c->r[4]=c->r[4]+0xFFFFE6E6u; // 80176F78
  c->r[5]=0u+0x00000001u; // 80176F7C
  c->lr=0x80176F84u; f_80064744(c); // 80176F80
  {uint32_t ea=c->r[31]+0x000007F0u; c->f[1]=c->ps1[1]=RF32(ea);} // 80176F84
  c->r[3]=c->r[31]+0x000007F4u; // 80176F88
  c->lr=0x80176F90u; f_80175EF0(c); // 80176F8C
  c->r[0]=0u+0x0000000Cu; // 80176F90
  W32(c->r[31]+0x000005C8u,c->r[0]); // 80176F94
L_80176F98:;
  c->r[3]=R32(c->r[31]+0x00000404u); // 80176F98
  {uint32_t ea=c->r[2]+0xFFFFBC78u; c->f[1]=c->ps1[1]=RF32(ea);} // 80176F9C
  c->lr=0x80176FA4u; f_802EA5A4(c); // 80176FA0
  cmps(c,0,(int32_t)c->r[3],0); // 80176FA4
  if (crb(c,2)) { goto L_80176FCC; } // 80176FA8
  c->r[4]=0u+0x80690000u; // 80176FAC
  c->r[3]=R32(c->r[31]+0x00000404u); // 80176FB0
  c->r[4]=c->r[4]+0x00001598u; // 80176FB4
  {uint32_t ea=c->r[2]+0xFFFFBC0Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 80176FB8
  {uint32_t ea=c->r[2]+0xFFFFBC10u; c->f[2]=c->ps1[2]=RF32(ea);} // 80176FBC
  c->r[4]=c->r[4]+0x0000001Du; // 80176FC0
  c->r[5]=0u+0x00000001u; // 80176FC4
  c->lr=0x80176FCCu; f_802E9044(c); // 80176FC8
L_80176FCC:;
  c->r[3]=R32(c->r[31]+0x00000404u); // 80176FCC
  c->lr=0x80176FD4u; f_802EA4B0(c); // 80176FD0
  {uint32_t ea=c->r[2]+0xFFFFBCA0u; c->f[0]=c->ps1[0]=RF32(ea);} // 80176FD4
  fcmp(c,0,c->f[1],c->f[0]); // 80176FD8
  setcrb(c,2,crb(c,1)|crb(c,2)); // 80176FDC
  if (!crb(c,2)) { goto L_801770EC; } // 80176FE0
  c->r[0]=0u+0x00000002u; // 80176FE4
  W32(c->r[31]+0x000005C8u,c->r[0]); // 80176FE8
  {uint32_t ea=c->r[2]+0xFFFFBC0Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 80176FEC
  c->r[3]=c->r[31]+0x000007F4u; // 80176FF0
  c->lr=0x80176FF8u; f_80172E34(c); // 80176FF4
  c->r[0]=R8(c->r[31]+0x00000808u); // 80176FF8
  cmps(c,0,(int32_t)c->r[0],0); // 80176FFC
  if (crb(c,2)) { goto L_8017706C; } // 80177000
  c->r[30]=0u+0x80690000u; // 80177004
  c->r[3]=R32(c->r[31]+0x00000404u); // 80177008
  c->r[30]=c->r[30]+0x00001598u; // 8017700C
  {uint32_t ea=c->r[2]+0xFFFFBC0Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 80177010
  {uint32_t ea=c->r[2]+0xFFFFBC10u; c->f[2]=c->ps1[2]=RF32(ea);} // 80177014
  c->r[6]=c->r[30]+0x0000001Du; // 80177018
  c->r[4]=0u+0x00000002u; // 8017701C
  c->r[5]=0u+0x00000003u; // 80177020
  c->lr=0x80177028u; f_802E91C8(c); // 80177024
  {uint32_t ea=c->r[2]+0xFFFFBC10u; c->f[1]=c->ps1[1]=RF32(ea);} // 80177028
  c->r[3]=c->r[31]+0x000005DCu; // 8017702C
  {uint32_t ea=c->r[2]+0xFFFFBC0Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 80177030
  c->r[4]=c->r[30]+0x000001F4u; // 80177034
  {uint32_t ea=c->r[2]+0xFFFFBC34u; c->f[3]=c->ps1[3]=RF32(ea);} // 80177038
  c->lr=0x80177040u; f_800E24D0(c); // 8017703C
  c->r[4]=0u+0x00010000u; // 80177040
  c->r[3]=c->r[31]|c->r[31]; // 80177044
  c->r[4]=c->r[4]+0xFFFFE810u; // 80177048
  c->r[5]=0u+0x00000001u; // 8017704C
  c->lr=0x80177054u; f_80064744(c); // 80177050
  c->r[4]=R32(c->r[31]+0x000005D0u); // 80177054
  c->r[3]=c->r[31]|c->r[31]; // 80177058
  c->r[0]=c->r[4]+0x00000001u; // 8017705C
  W32(c->r[31]+0x000005D0u,c->r[0]); // 80177060
  c->lr=0x80177068u; f_80177388(c); // 80177064
  goto L_801770EC; // 80177068
L_8017706C:;
  c->r[3]=R32(c->r[31]+0x000005D4u); // 8017706C
  c->r[0]=c->r[3]+0x00000001u; // 80177070
  W32(c->r[31]+0x000005D4u,c->r[0]); // 80177074
  goto L_801770EC; // 80177078
L_8017707C:;
  c->r[3]=R32(c->r[3]+0x00000404u); // 8017707C
  {uint32_t ea=c->r[2]+0xFFFFBC1Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 80177080
  c->lr=0x80177088u; f_802EA5A4(c); // 80177084
  cmps(c,0,(int32_t)c->r[3],0); // 80177088
  if (crb(c,2)) { goto L_801770EC; } // 8017708C
  {uint32_t ea=c->r[31]+0x000007ECu; c->f[1]=c->ps1[1]=RF32(ea);} // 80177090
  c->r[3]=c->r[31]|c->r[31]; // 80177094
  c->r[4]=0u+0x00000000u; // 80177098
  c->r[5]=0u+0xFFFFFFFFu; // 8017709C
  c->lr=0x801770A4u; f_80062194(c); // 801770A0
  c->r[3]=0u+0x80690000u; // 801770A4
  c->r[4]=0u+0x00000008u; // 801770A8
  c->r[3]=c->r[3]+0x00001598u; // 801770AC
  c->r[0]=0u+0x00000000u; // 801770B0
  W32(c->r[31]+0x000005C8u,c->r[4]); // 801770B4
  c->r[6]=c->r[3]+0x0000001Du; // 801770B8
  c->r[3]=R32(c->r[31]+0x00000404u); // 801770BC
  c->r[4]=0u+0x00000002u; // 801770C0
  W32(c->r[31]+0x00000688u,c->r[0]); // 801770C4
  c->r[5]=0u+0x00000003u; // 801770C8
  {uint32_t ea=c->r[2]+0xFFFFBC0Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801770CC
  {uint32_t ea=c->r[2]+0xFFFFBC10u; c->f[2]=c->ps1[2]=RF32(ea);} // 801770D0
  c->lr=0x801770D8u; f_802E91C8(c); // 801770D4
  c->r[4]=R32(c->r[31]+0x000005D0u); // 801770D8
  c->r[3]=c->r[31]|c->r[31]; // 801770DC
  c->r[0]=c->r[4]+0x00000001u; // 801770E0
  W32(c->r[31]+0x000005D0u,c->r[0]); // 801770E4
  c->lr=0x801770ECu; f_80177388(c); // 801770E8
L_801770EC:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801770EC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801770F0
  c->r[30]=R32(c->r[1]+0x00000008u); // 801770F4
  c->lr=c->r[0]; // 801770F8
  c->r[1]=c->r[1]+0x00000010u; // 801770FC
  return; // 80177100
}

// fn_80177104
void f_80177104(Ctx* __restrict c) {
  trace_call(0x80177104u);
  return; // 80177104
}

// fn_80177108
void f_80177108(Ctx* __restrict c) {
  trace_call(0x80177108u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80177108
  c->r[0]=c->lr; // 8017710C
  W32(c->r[1]+0x00000014u,c->r[0]); // 80177110
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80177114
  c->r[31]=c->r[3]|c->r[3]; // 80177118
  c->r[4]=R32(c->r[3]+0x00000004u); // 8017711C
  cmps(c,0,(int32_t)c->r[4],0); // 80177120
  if (crb(c,2)) { goto L_80177130; } // 80177124
  c->r[0]=R32(c->r[4]+0x00000008u); // 80177128
  goto L_80177134; // 8017712C
L_80177130:;
  c->r[0]=0u+0x00000000u; // 80177130
L_80177134:;
  cmps(c,0,(int32_t)c->r[0],0); // 80177134
  if (!crb(c,2)) { goto L_80177184; } // 80177138
  c->r[4]=0u+0x80690000u; // 8017713C
  c->r[0]=0u+0x00000008u; // 80177140
  W32(c->r[3]+0x000005C8u,c->r[0]); // 80177144
  c->r[4]=c->r[4]+0x00001598u; // 80177148
  {uint32_t ea=c->r[2]+0xFFFFBC10u; c->f[1]=c->ps1[1]=RF32(ea);} // 8017714C
  c->r[4]=c->r[4]+0x00000200u; // 80177150
  {uint32_t ea=c->r[2]+0xFFFFBC0Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 80177154
  c->r[3]=c->r[3]+0x000005DCu; // 80177158
  {uint32_t ea=c->r[2]+0xFFFFBC34u; c->f[3]=c->ps1[3]=RF32(ea);} // 8017715C
  c->lr=0x80177164u; f_800E24D0(c); // 80177160
  c->r[4]=0u+0x00010000u; // 80177164
  c->r[3]=c->r[31]|c->r[31]; // 80177168
  c->r[4]=c->r[4]+0xFFFFE67Au; // 8017716C
  c->r[5]=0u+0x00000001u; // 80177170
  c->lr=0x80177178u; f_80064744(c); // 80177174
  {uint32_t ea=c->r[2]+0xFFFFBC54u; c->f[1]=c->ps1[1]=RF32(ea);} // 80177178
  c->r[3]=c->r[31]+0x000007F4u; // 8017717C
  c->lr=0x80177184u; f_80175EF0(c); // 80177180
L_80177184:;
  c->r[3]=c->r[31]+0x00000354u; // 80177184
  c->lr=0x8017718Cu; f_800667AC(c); // 80177188
  cmps(c,0,(int32_t)c->r[3],0); // 8017718C
  if (crb(c,2)) { goto L_801771A4; } // 80177190
  c->r[0]=0u+0x00000000u; // 80177194
  W32(c->r[31]+0x00000688u,c->r[0]); // 80177198
  c->r[3]=c->r[31]|c->r[31]; // 8017719C
  c->lr=0x801771A4u; f_80177388(c); // 801771A0
L_801771A4:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801771A4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801771A8
  c->lr=c->r[0]; // 801771AC
  c->r[1]=c->r[1]+0x00000010u; // 801771B0
  return; // 801771B4
}

// fn_801771B8
void f_801771B8(Ctx* __restrict c) {
  trace_call(0x801771B8u);
  return; // 801771B8
}

// fn_801771BC
void f_801771BC(Ctx* __restrict c) {
  trace_call(0x801771BCu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801771BC
  c->r[0]=c->lr; // 801771C0
  W32(c->r[1]+0x00000024u,c->r[0]); // 801771C4
  {uint32_t ea=c->r[1]+0x0000000Cu; for(int i=27;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 801771C8
  c->r[27]=c->r[3]|c->r[3]; // 801771CC
  c->r[28]=0u+0x00000000u; // 801771D0
  c->r[31]=0u+0x00000000u; // 801771D4
  c->r[29]=R32(c->r[3]+0x00000434u); // 801771D8
L_801771DC:;
  c->r[30]=c->r[27]+c->r[31]; // 801771DC
  c->r[0]=R8(c->r[30]+0x0000081Cu); // 801771E0
  cmps(c,0,(int32_t)c->r[0],0); // 801771E4
  if (!crb(c,2)) { goto L_801771FC; } // 801771E8
  c->r[3]=c->r[29]+0x00000030u; // 801771EC
  c->r[4]=c->r[28]+0x00000002u; // 801771F0
  c->lr=0x801771F8u; f_802D94E8(c); // 801771F4
  {uint32_t ea=c->r[30]+0x00000818u; WF32(ea,c->f[1]);} // 801771F8
L_801771FC:;
  c->r[28]=c->r[28]+0x00000001u; // 801771FC
  c->r[31]=c->r[31]+0x00000014u; // 80177200
  cmps(c,0,(int32_t)c->r[28],3); // 80177204
  if (crb(c,0)) { IRQCHK(c); goto L_801771DC; } // 80177208
  {uint32_t ea=c->r[1]+0x0000000Cu; for(int i=27;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 8017720C
  c->r[0]=R32(c->r[1]+0x00000024u); // 80177210
  c->lr=c->r[0]; // 80177214
  c->r[1]=c->r[1]+0x00000020u; // 80177218
  return; // 8017721C
}

// fn_80177220
void f_80177220(Ctx* __restrict c) {
  trace_call(0x80177220u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80177220
  c->r[0]=c->lr; // 80177224
  W32(c->r[1]+0x00000034u,c->r[0]); // 80177228
  c->r[11]=c->r[1]+0x00000020u; // 8017722C
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[31]);} // 80177230
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,31,ea,0,0);} // 80177234
  c->lr=0x8017723Cu; { W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80177238
  c->f[31]=c->f[1]; // 8017723C
  c->r[31]=(uint32_t)((int32_t)c->r[4]*(int32_t)20); // 80177240
  c->r[29]=c->r[3]|c->r[3]; // 80177244
  c->r[30]=c->r[4]|c->r[4]; // 80177248
  c->lr=0x80177250u; f_8016D6B4(c); // 8017724C
  c->r[3]=c->r[29]+c->r[31]; // 80177250
  {uint32_t ea=c->r[3]+0x00000820u; c->f[0]=c->ps1[0]=RF32(ea);} // 80177254
  fcmp(c,0,c->f[0],c->f[1]); // 80177258
  if (!crb(c,1)) { goto L_8017728C; } // 8017725C
  {uint32_t ea=c->r[3]+0x00000818u; c->f[1]=c->ps1[1]=RF32(ea);} // 80177260
  {uint32_t ea=c->r[2]+0xFFFFBC0Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80177264
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[31]); // 80177268
  {uint32_t ea=c->r[3]+0x00000818u; WF32(ea,c->f[1]);} // 8017726C
  fcmp(c,0,c->f[1],c->f[0]); // 80177270
  setcrb(c,2,crb(c,0)|crb(c,2)); // 80177274
  if (!crb(c,2)) { goto L_8017728C; } // 80177278
  c->r[3]=c->r[29]|c->r[29]; // 8017727C
  c->r[4]=c->r[30]|c->r[30]; // 80177280
  c->lr=0x80177288u; f_80177300(c); // 80177284
  goto L_801772E0; // 80177288
L_8017728C:;
  c->r[31]=c->r[29]+c->r[31]; // 8017728C
  c->r[0]=R32(c->r[31]+0x00000828u); // 80177290
  cmps(c,0,(int32_t)c->r[0],0); // 80177294
  if (!crb(c,0)) { goto L_801772E0; } // 80177298
  c->r[0]=R8(c->r[31]+0x0000081Cu); // 8017729C
  cmps(c,0,(int32_t)c->r[0],0); // 801772A0
  if (!crb(c,2)) { goto L_801772E0; } // 801772A4
  c->r[3]=R32(c->r[29]+0x00000404u); // 801772A8
  c->r[4]=R32(c->r[31]+0x00000824u); // 801772AC
  c->lr=0x801772B4u; f_802E9FB8(c); // 801772B0
  c->r[4]=0u+0x806E0000u; // 801772B4
  c->r[0]=rotl(c->r[30],6)&0xFFFFFFC0u; // 801772B8
  c->r[4]=c->r[4]+0xFFFFF480u; // 801772BC
  c->r[3]=R32(c->r[29]+0x00000404u); // 801772C0
  c->r[6]=c->r[4]+c->r[0]; // 801772C4
  {uint32_t ea=c->r[2]+0xFFFFBC0Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801772C8
  {uint32_t ea=c->r[2]+0xFFFFBC10u; c->f[2]=c->ps1[2]=RF32(ea);} // 801772CC
  c->r[5]=c->r[30]|c->r[30]; // 801772D0
  c->r[4]=0u+0x00000002u; // 801772D4
  c->lr=0x801772DCu; f_802E91C8(c); // 801772D8
  W32(c->r[31]+0x00000828u,c->r[3]); // 801772DC
L_801772E0:;
  c->r[11]=c->r[1]+0x00000020u; // 801772E0
  {uint32_t ea=c->r[1]+0x00000028u; psq_load(c,31,ea,0,0);} // 801772E4
  {uint32_t ea=c->r[1]+0x00000020u; c->f[31]=RF64(ea);} // 801772E8
  c->lr=0x801772F0u; { c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801772EC
  c->r[0]=R32(c->r[1]+0x00000034u); // 801772F0
  c->lr=c->r[0]; // 801772F4
  c->r[1]=c->r[1]+0x00000030u; // 801772F8
  return; // 801772FC
}

// fn_80177300
void f_80177300(Ctx* __restrict c) {
  trace_call(0x80177300u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80177300
  c->r[0]=c->lr; // 80177304
  W32(c->r[1]+0x00000024u,c->r[0]); // 80177308
  c->r[11]=c->r[1]+0x00000020u; // 8017730C
  c->lr=0x80177314u; { W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80177310
  c->r[30]=(uint32_t)((int32_t)c->r[4]*(int32_t)20); // 80177314
  c->r[28]=c->r[3]|c->r[3]; // 80177318
  c->r[29]=c->r[4]|c->r[4]; // 8017731C
  c->r[31]=c->r[3]+c->r[30]; // 80177320
  c->r[3]=R32(c->r[3]+0x00000404u); // 80177324
  c->r[4]=R32(c->r[31]+0x00000824u); // 80177328
  c->lr=0x80177330u; f_802E9FB8(c); // 8017732C
  c->r[3]=R32(c->r[28]+0x00000404u); // 80177330
  c->r[4]=R32(c->r[31]+0x00000828u); // 80177334
  c->lr=0x8017733Cu; f_802E9FB8(c); // 80177338
  c->r[4]=0u+0x806E0000u; // 8017733C
  c->r[0]=rotl(c->r[29],6)&0xFFFFFFC0u; // 80177340
  c->r[4]=c->r[4]+0xFFFFF540u; // 80177344
  c->r[3]=R32(c->r[28]+0x00000404u); // 80177348
  c->r[6]=c->r[4]+c->r[0]; // 8017734C
  {uint32_t ea=c->r[2]+0xFFFFBC0Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 80177350
  {uint32_t ea=c->r[2]+0xFFFFBC10u; c->f[2]=c->ps1[2]=RF32(ea);} // 80177354
  c->r[5]=c->r[29]|c->r[29]; // 80177358
  c->r[4]=0u+0x00000002u; // 8017735C
  c->lr=0x80177364u; f_802E91C8(c); // 80177360
  W32(c->r[31]+0x00000824u,c->r[3]); // 80177364
  c->r[0]=0u+0x00000001u; // 80177368
  c->r[11]=c->r[1]+0x00000020u; // 8017736C
  W8(c->r[31]+0x0000081Cu,c->r[0]); // 80177370
  c->lr=0x80177378u; { c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80177374
  c->r[0]=R32(c->r[1]+0x00000024u); // 80177378
  c->lr=c->r[0]; // 8017737C
  c->r[1]=c->r[1]+0x00000020u; // 80177380
  return; // 80177384
}

// fn_80177388
void f_80177388(Ctx* __restrict c) {
  trace_call(0x80177388u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80177388
  c->r[0]=c->lr; // 8017738C
  W32(c->r[1]+0x00000014u,c->r[0]); // 80177390
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80177394
  c->r[31]=c->r[3]|c->r[3]; // 80177398
  c->r[0]=R32(c->r[3]+0x000005CCu); // 8017739C
  cmpu(c,0,c->r[0],0x00000008u); // 801773A0
  if (crb(c,1)) { goto L_8017741C; } // 801773A4
  c->r[4]=0u+0x806E0000u; // 801773A8
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801773AC
  c->r[4]=c->r[4]+0xFFFFF600u; // 801773B0
  c->r[4]=R32(c->r[4]+c->r[0]); // 801773B4
  c->ctr=c->r[4]; // 801773B8
  if (true) { switch (c->ctr) { case 0x801773C0u: goto L_801773C0; case 0x801773CCu: goto L_801773CC; case 0x801773D8u: goto L_801773D8; case 0x801773E4u: goto L_801773E4; case 0x801773F0u: goto L_801773F0; case 0x801773FCu: goto L_801773FC; case 0x80177408u: goto L_80177408; case 0x80177414u: goto L_80177414; case 0x8017741Cu: goto L_8017741C; default: break; } dispatch(c,c->ctr); return; } // 801773BC
L_801773C0:;
  c->lr=0x801773C4u; f_801742D4(c); // 801773C0
  W32(c->r[31]+0x00000684u,c->r[3]); // 801773C4
  goto L_8017741C; // 801773C8
L_801773CC:;
  c->lr=0x801773D0u; f_801744A8(c); // 801773CC
  W32(c->r[31]+0x00000684u,c->r[3]); // 801773D0
  goto L_8017741C; // 801773D4
L_801773D8:;
  c->lr=0x801773DCu; f_80174600(c); // 801773D8
  W32(c->r[31]+0x00000684u,c->r[3]); // 801773DC
  goto L_8017741C; // 801773E0
L_801773E4:;
  c->lr=0x801773E8u; f_80174820(c); // 801773E4
  W32(c->r[31]+0x00000684u,c->r[3]); // 801773E8
  goto L_8017741C; // 801773EC
L_801773F0:;
  c->lr=0x801773F4u; f_801749F4(c); // 801773F0
  W32(c->r[31]+0x00000684u,c->r[3]); // 801773F4
  goto L_8017741C; // 801773F8
L_801773FC:;
  c->lr=0x80177400u; f_80174C1C(c); // 801773FC
  W32(c->r[31]+0x00000684u,c->r[3]); // 80177400
  goto L_8017741C; // 80177404
L_80177408:;
  c->lr=0x8017740Cu; f_80174EA8(c); // 80177408
  W32(c->r[31]+0x00000684u,c->r[3]); // 8017740C
  goto L_8017741C; // 80177410
L_80177414:;
  c->lr=0x80177418u; f_80172E5C(c); // 80177414
  W32(c->r[31]+0x00000684u,c->r[3]); // 80177418
L_8017741C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8017741C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80177420
  c->lr=c->r[0]; // 80177424
  c->r[1]=c->r[1]+0x00000010u; // 80177428
  return; // 8017742C
}

// fn_80177430
void f_80177430(Ctx* __restrict c) {
  trace_call(0x80177430u);
  c->r[0]=R8(c->r[3]+0x000007A0u); // 80177430
  cmps(c,0,(int32_t)c->r[0],0); // 80177434
  if (crb(c,2)) { goto L_80177440; } // 80177438
  f_80061594(c); return; // 8017743C
L_80177440:;
  c->r[3]=0u+0x00000000u; // 80177440
  return; // 80177444
}

// fn_80177448
void f_80177448(Ctx* __restrict c) {
  trace_call(0x80177448u);
  return; // 80177448
}

// fn_8017744C
void f_8017744C(Ctx* __restrict c) {
  trace_call(0x8017744Cu);
  return; // 8017744C
}

// fn_80177450
void f_80177450(Ctx* __restrict c) {
  trace_call(0x80177450u);
  return; // 80177450
}

// fn_80177454
void f_80177454(Ctx* __restrict c) {
  trace_call(0x80177454u);
  return; // 80177454
}

// fn_80177458
void f_80177458(Ctx* __restrict c) {
  trace_call(0x80177458u);
  return; // 80177458
}

// fn_8017745C
void f_8017745C(Ctx* __restrict c) {
  trace_call(0x8017745Cu);
  return; // 8017745C
}

// fn_80177460
void f_80177460(Ctx* __restrict c) {
  trace_call(0x80177460u);
  return; // 80177460
}

// fn_80177464
void f_80177464(Ctx* __restrict c) {
  trace_call(0x80177464u);
  return; // 80177464
}

// fn_80177468
void f_80177468(Ctx* __restrict c) {
  trace_call(0x80177468u);
  return; // 80177468
}

// fn_8017746C
void f_8017746C(Ctx* __restrict c) {
  trace_call(0x8017746Cu);
  return; // 8017746C
}

// fn_80177470
void f_80177470(Ctx* __restrict c) {
  trace_call(0x80177470u);
  return; // 80177470
}

// fn_80177474
void f_80177474(Ctx* __restrict c) {
  trace_call(0x80177474u);
  return; // 80177474
}

// fn_80177478
void f_80177478(Ctx* __restrict c) {
  trace_call(0x80177478u);
  return; // 80177478
}

// fn_8017747C
void f_8017747C(Ctx* __restrict c) {
  trace_call(0x8017747Cu);
  return; // 8017747C
}

// fn_80177480
void f_80177480(Ctx* __restrict c) {
  trace_call(0x80177480u);
  return; // 80177480
}

// fn_80177484
void f_80177484(Ctx* __restrict c) {
  trace_call(0x80177484u);
  return; // 80177484
}

// fn_80177488
void f_80177488(Ctx* __restrict c) {
  trace_call(0x80177488u);
  c->r[3]=c->r[3]+0xFFFFFCACu; // 80177488
  f_801726EC(c); return; // 8017748C
}

// fn_80177490
void f_80177490(Ctx* __restrict c) {
  trace_call(0x80177490u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80177490
  c->r[0]=c->lr; // 80177494
  cmps(c,0,(int32_t)c->r[3],0); // 80177498
  W32(c->r[1]+0x00000014u,c->r[0]); // 8017749C
  if (!crb(c,2)) { goto L_801774AC; } // 801774A0
  c->r[3]=0u+0x00000002u; // 801774A4
  goto L_801774C4; // 801774A8
L_801774AC:;
  c->r[4]=c->r[13]+0xFFFF8AB0u; // 801774AC
  c->r[5]=0u+0x00000001u; // 801774B0
  c->lr=0x801774B8u; f_80064CE4(c); // 801774B4
  cmps(c,0,(int32_t)c->r[3],0); // 801774B8
  if (!crb(c,0)) { goto L_801774C4; } // 801774BC
  c->r[3]=0u+0x00000002u; // 801774C0
L_801774C4:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801774C4
  c->lr=c->r[0]; // 801774C8
  c->r[1]=c->r[1]+0x00000010u; // 801774CC
  return; // 801774D0
}

// fn_801774D4
void f_801774D4(Ctx* __restrict c) {
  trace_call(0x801774D4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801774D4
  c->r[0]=c->lr; // 801774D8
  cmps(c,0,(int32_t)c->r[3],0); // 801774DC
  W32(c->r[1]+0x00000014u,c->r[0]); // 801774E0
  if (!crb(c,2)) { goto L_801774F0; } // 801774E4
  c->r[3]=0u+0x0000000Cu; // 801774E8
  goto L_8017750C; // 801774EC
L_801774F0:;
  c->r[4]=0u+0x806E0000u; // 801774F0
  c->r[5]=0u+0x0000000Bu; // 801774F4
  c->r[4]=c->r[4]+0xFFFFF9E8u; // 801774F8
  c->lr=0x80177500u; f_80064CE4(c); // 801774FC
  cmps(c,0,(int32_t)c->r[3],0); // 80177500
  if (!crb(c,0)) { goto L_8017750C; } // 80177504
  c->r[3]=0u+0x0000000Cu; // 80177508
L_8017750C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8017750C
  c->lr=c->r[0]; // 80177510
  c->r[1]=c->r[1]+0x00000010u; // 80177514
  return; // 80177518
}

// fn_8017751C
void f_8017751C(Ctx* __restrict c) {
  trace_call(0x8017751Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8017751C
  c->r[0]=c->lr; // 80177520
  cmps(c,0,(int32_t)c->r[3],0); // 80177524
  W32(c->r[1]+0x00000014u,c->r[0]); // 80177528
  if (!crb(c,2)) { goto L_80177538; } // 8017752C
  c->r[3]=0u+0x0000000Cu; // 80177530
  goto L_80177554; // 80177534
L_80177538:;
  c->r[4]=0u+0x806E0000u; // 80177538
  c->r[5]=0u+0x0000000Bu; // 8017753C
  c->r[4]=c->r[4]+0xFFFFFA14u; // 80177540
  c->lr=0x80177548u; f_80064CE4(c); // 80177544
  cmps(c,0,(int32_t)c->r[3],0); // 80177548
  if (!crb(c,0)) { goto L_80177554; } // 8017754C
  c->r[3]=0u+0x0000000Cu; // 80177550
L_80177554:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80177554
  c->lr=c->r[0]; // 80177558
  c->r[1]=c->r[1]+0x00000010u; // 8017755C
  return; // 80177560
}

// fn_80177564
void f_80177564(Ctx* __restrict c) {
  trace_call(0x80177564u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80177564
  c->r[0]=c->lr; // 80177568
  W32(c->r[1]+0x00000044u,c->r[0]); // 8017756C
  {uint32_t ea=c->r[1]+0x00000020u; for(int i=24;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 80177570
  c->r[26]=c->r[3]|c->r[3]; // 80177574
  c->r[31]=0u+0x80690000u; // 80177578
  c->r[30]=c->r[26]|c->r[26]; // 8017757C
  c->r[27]=c->r[26]|c->r[26]; // 80177580
  c->r[29]=c->r[26]|c->r[26]; // 80177584
  c->r[31]=c->r[31]+0x000017B4u; // 80177588
  c->lr=0x80177590u; f_801783E4(c); // 8017758C
  c->r[4]=0u+0x806D0000u; // 80177590
  c->r[28]=addc(c,c->r[26],0x00000020u,0); cr0(c,c->r[28]); // 80177594
  c->r[0]=0u+0x00000000u; // 80177598
  W32(c->r[26]+0x00000000u,c->r[3]); // 8017759C
  c->r[4]=c->r[4]+0x000038C0u; // 801775A0
  W32(c->r[26]+0x0000001Cu,c->r[4]); // 801775A4
  W32(c->r[26]+0x00000004u,c->r[0]); // 801775A8
  W32(c->r[26]+0x00000008u,c->r[0]); // 801775AC
  W32(c->r[26]+0x0000000Cu,c->r[0]); // 801775B0
  W8(c->r[26]+0x00000010u,c->r[0]); // 801775B4
  W32(c->r[26]+0x00000014u,c->r[0]); // 801775B8
  W32(c->r[26]+0x00000018u,c->r[0]); // 801775BC
  W32(c->r[26]+0x00000020u,c->r[0]); // 801775C0
  W32(c->r[26]+0x00000024u,c->r[0]); // 801775C4
  if (crb(c,2)) { goto L_801775D0; } // 801775C8
  c->r[28]=c->r[28]+0xFFFFFFE0u; // 801775CC
L_801775D0:;
  c->lr=0x801775D4u; f_800797AC(c); // 801775D0
  c->r[0]=R32(c->r[3]+0x00000000u); // 801775D4
  c->r[0]=addc(c,c->r[0],0x00000001u,0); cr0(c,c->r[0]); // 801775D8
  W32(c->r[3]+0x00000000u,c->r[0]); // 801775DC
  if (!crb(c,2)) { goto L_801775EC; } // 801775E0
  c->r[0]=0u+0x00000001u; // 801775E4
  W32(c->r[3]+0x00000000u,c->r[0]); // 801775E8
L_801775EC:;
  c->r[7]=R32(c->r[3]+0x00000004u); // 801775EC
  c->r[5]=0u+0x0000012Cu; // 801775F0
  c->r[4]=c->r[7]+0x00000001u; // 801775F4
  c->r[0]=divwu(c->r[4],c->r[5]); // 801775F8
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)c->r[5]); // 801775FC
  c->r[6]=c->r[4]-c->r[0]; // 80177600
  goto L_80177650; // 80177604
L_80177608:;
  c->r[0]=rotl(c->r[6],3)&0xFFFFFFF8u; // 80177608
  c->r[4]=c->r[3]+c->r[0]; // 8017760C
  c->r[0]=R32(c->r[4]+0x00000008u); // 80177610
  cmps(c,0,(int32_t)c->r[0],0); // 80177614
  if (!crb(c,2)) { goto L_80177640; } // 80177618
  W32(c->r[3]+0x00000004u,c->r[6]); // 8017761C
  c->r[0]=R32(c->r[3]+0x00000000u); // 80177620
  W32(c->r[4]+0x00000008u,c->r[0]); // 80177624
  W32(c->r[4]+0x0000000Cu,c->r[28]); // 80177628
  c->r[4]=R32(c->r[3]+0x00000000u); // 8017762C
  c->r[0]=R32(c->r[3]+0x00000004u); // 80177630
  W32(c->r[1]+0x00000010u,c->r[4]); // 80177634
  W32(c->r[1]+0x00000014u,c->r[0]); // 80177638
  goto L_8017766C; // 8017763C
L_80177640:;
  c->r[4]=c->r[6]+0x00000001u; // 80177640
  c->r[0]=divwu(c->r[4],c->r[5]); // 80177644
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)c->r[5]); // 80177648
  c->r[6]=c->r[4]-c->r[0]; // 8017764C
L_80177650:;
  cmpu(c,0,c->r[6],c->r[7]); // 80177650
  if (!crb(c,2)) { IRQCHK(c); goto L_80177608; } // 80177654
  c->r[0]=0u+0x00000000u; // 80177658
  W32(c->r[1]+0x00000008u,c->r[0]); // 8017765C
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 80177660
  W32(c->r[1]+0x00000010u,c->r[0]); // 80177664
  W32(c->r[1]+0x00000014u,c->r[0]); // 80177668
L_8017766C:;
  c->r[4]=R32(c->r[1]+0x00000010u); // 8017766C
  c->r[24]=c->r[26]+0x00000028u; // 80177670
  c->r[0]=R32(c->r[1]+0x00000014u); // 80177674
  c->r[3]=c->r[24]|c->r[24]; // 80177678
  W32(c->r[1]+0x00000018u,c->r[4]); // 8017767C
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 80177680
  W32(c->r[26]+0x00000020u,c->r[4]); // 80177684
  W32(c->r[26]+0x00000024u,c->r[0]); // 80177688
  c->lr=0x80177690u; f_800506C0(c); // 8017768C
  cmps(c,0,(int32_t)c->r[24],0); // 80177690
  c->r[3]=c->r[24]|c->r[24]; // 80177694
  if (crb(c,2)) { goto L_801776A0; } // 80177698
  c->r[3]=c->r[24]+0xFFFFFFD8u; // 8017769C
L_801776A0:;
  c->r[28]=0u+0x00000001u; // 801776A0
  W32(c->r[24]+0x00000008u,c->r[3]); // 801776A4
  W8(c->r[24]+0x0000000Cu,c->r[28]); // 801776A8
  c->r[0]=R8(c->r[13]+0xFFFFBE09u); // 801776AC
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 801776B0
  if (!crb(c,2)) { goto L_801776F4; } // 801776B4
  c->r[25]=0u+0x80740000u; // 801776B8
  c->r[3]=c->r[25]+0x000074BCu; // 801776BC
  c->lr=0x801776C4u; f_800506C0(c); // 801776C0
  c->r[6]=0u+0x806D0000u; // 801776C4
  c->r[4]=0u+0x80060000u; // 801776C8
  c->r[6]=c->r[6]+0xFFFFE3A0u; // 801776CC
  c->r[3]=c->r[25]+0x000074BCu; // 801776D0
  c->r[0]=c->r[6]+0x00000008u; // 801776D4
  c->r[5]=0u+0x80750000u; // 801776D8
  W32(c->r[3]+0x00000010u,c->r[6]); // 801776DC
  c->r[4]=c->r[4]+0x000057D4u; // 801776E0
  c->r[5]=c->r[5]+0x000049B0u; // 801776E4
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 801776E8
  c->lr=0x801776F0u; f_803A92B8(c); // 801776EC
  W8(c->r[13]+0xFFFFBE09u,c->r[28]); // 801776F0
L_801776F4:;
  c->r[3]=0u+0x80740000u; // 801776F4
  c->r[5]=c->r[24]|c->r[24]; // 801776F8
  c->r[3]=c->r[3]+0x000074BCu; // 801776FC
  c->r[4]=c->r[3]|c->r[3]; // 80177700
  c->lr=0x80177708u; f_802DDCA8(c); // 80177704
  c->r[25]=c->r[26]+0x00000038u; // 80177708
  c->r[3]=c->r[25]|c->r[25]; // 8017770C
  c->lr=0x80177714u; f_800506C0(c); // 80177710
  cmps(c,0,(int32_t)c->r[25],0); // 80177714
  c->r[0]=c->r[25]|c->r[25]; // 80177718
  if (crb(c,2)) { goto L_80177724; } // 8017771C
  c->r[0]=c->r[25]+0xFFFFFFC8u; // 80177720
L_80177724:;
  c->r[28]=c->r[26]+0x00000044u; // 80177724
  W32(c->r[25]+0x00000008u,c->r[0]); // 80177728
  c->r[3]=c->r[28]|c->r[28]; // 8017772C
  c->lr=0x80177734u; f_800506C0(c); // 80177730
  cmps(c,0,(int32_t)c->r[28],0); // 80177734
  c->r[0]=c->r[28]|c->r[28]; // 80177738
  if (crb(c,2)) { goto L_80177744; } // 8017773C
  c->r[0]=c->r[28]+0xFFFFFFBCu; // 80177740
L_80177744:;
  c->r[3]=0u+0x806F0000u; // 80177744
  c->r[25]=0u+0x00000000u; // 80177748
  c->r[3]=c->r[3]+0x00000E80u; // 8017774C
  W32(c->r[28]+0x00000008u,c->r[0]); // 80177750
  W8(c->r[28]+0x0000000Cu,c->r[25]); // 80177754
  W32(c->r[26]+0x0000001Cu,c->r[3]); // 80177758
  W32(c->r[26]+0x00000058u,c->r[25]); // 8017775C
  W32(c->r[26]+0x00000064u,c->r[25]); // 80177760
  c->lr=0x80177768u; f_8007BDCC(c); // 80177764
  c->r[0]=c->r[13]+0xFFFF8114u; // 80177768
  W32(c->r[26]+0x0000009Cu,c->r[3]); // 8017776C
  W32(c->r[26]+0x000000A0u,c->r[0]); // 80177770
  W32(c->r[26]+0x000000A4u,c->r[25]); // 80177774
  c->r[0]=R8(c->r[13]+0xFFFFBE54u); // 80177778
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 8017777C
  if (!crb(c,2)) { goto L_801777A0; } // 80177780
  c->r[4]=R32(c->r[13]+0xFFFFBCC4u); // 80177784
  c->r[0]=0u+0x00000001u; // 80177788
  W32(c->r[13]+0xFFFFBDF8u,c->r[4]); // 8017778C
  c->r[3]=c->r[4]+0x00000001u; // 80177790
  W32(c->r[13]+0xFFFFBCC4u,c->r[3]); // 80177794
  W32(c->r[13]+0xFFFFBE50u,c->r[4]); // 80177798
  W8(c->r[13]+0xFFFFBE54u,c->r[0]); // 8017779C
L_801777A0:;
  c->r[4]=R32(c->r[13]+0xFFFFBE50u); // 801777A0
  c->r[3]=c->r[13]+0xFFFF8110u; // 801777A4
  c->r[0]=0u+0x00000000u; // 801777A8
  W32(c->r[26]+0x000000A8u,c->r[4]); // 801777AC
  W32(c->r[26]+0x000000ACu,c->r[3]); // 801777B0
  W32(c->r[26]+0x000000B0u,c->r[0]); // 801777B4
  c->r[0]=R8(c->r[13]+0xFFFFBE5Cu); // 801777B8
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 801777BC
  if (!crb(c,2)) { goto L_801777E0; } // 801777C0
  c->r[4]=R32(c->r[13]+0xFFFFBCC4u); // 801777C4
  c->r[0]=0u+0x00000001u; // 801777C8
  W32(c->r[13]+0xFFFFBDF8u,c->r[4]); // 801777CC
  c->r[3]=c->r[4]+0x00000001u; // 801777D0
  W32(c->r[13]+0xFFFFBCC4u,c->r[3]); // 801777D4
  W32(c->r[13]+0xFFFFBE58u,c->r[4]); // 801777D8
  W8(c->r[13]+0xFFFFBE5Cu,c->r[0]); // 801777DC
L_801777E0:;
  c->r[4]=R32(c->r[13]+0xFFFFBE58u); // 801777E0
  c->r[3]=c->r[13]+0xFFFF810Cu; // 801777E4
  c->r[0]=0u+0x00000000u; // 801777E8
  W32(c->r[26]+0x000000B4u,c->r[4]); // 801777EC
  W32(c->r[26]+0x000000B8u,c->r[3]); // 801777F0
  W32(c->r[26]+0x000000BCu,c->r[0]); // 801777F4
  c->r[0]=R8(c->r[13]+0xFFFFBE64u); // 801777F8
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 801777FC
  if (!crb(c,2)) { goto L_80177820; } // 80177800
  c->r[4]=R32(c->r[13]+0xFFFFBCC4u); // 80177804
  c->r[0]=0u+0x00000001u; // 80177808
  W32(c->r[13]+0xFFFFBDF8u,c->r[4]); // 8017780C
  c->r[3]=c->r[4]+0x00000001u; // 80177810
  W32(c->r[13]+0xFFFFBCC4u,c->r[3]); // 80177814
  W32(c->r[13]+0xFFFFBE60u,c->r[4]); // 80177818
  W8(c->r[13]+0xFFFFBE64u,c->r[0]); // 8017781C
L_80177820:;
  c->r[4]=R32(c->r[13]+0xFFFFBE60u); // 80177820
  c->r[3]=c->r[13]+0xFFFF8108u; // 80177824
  c->r[0]=0u+0x00000000u; // 80177828
  W32(c->r[26]+0x000000C0u,c->r[4]); // 8017782C
  W32(c->r[26]+0x000000C4u,c->r[3]); // 80177830
  W32(c->r[26]+0x000000C8u,c->r[0]); // 80177834
  c->r[0]=R8(c->r[13]+0xFFFFBE6Cu); // 80177838
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 8017783C
  if (!crb(c,2)) { goto L_80177860; } // 80177840
  c->r[4]=R32(c->r[13]+0xFFFFBCC4u); // 80177844
  c->r[0]=0u+0x00000001u; // 80177848
  W32(c->r[13]+0xFFFFBDF8u,c->r[4]); // 8017784C
  c->r[3]=c->r[4]+0x00000001u; // 80177850
  W32(c->r[13]+0xFFFFBCC4u,c->r[3]); // 80177854
  W32(c->r[13]+0xFFFFBE68u,c->r[4]); // 80177858
  W8(c->r[13]+0xFFFFBE6Cu,c->r[0]); // 8017785C
L_80177860:;
  c->r[3]=R32(c->r[13]+0xFFFFBE68u); // 80177860
  c->r[0]=c->r[13]+0xFFFF8104u; // 80177864
  c->r[25]=0u+0x00000000u; // 80177868
  W32(c->r[26]+0x000000CCu,c->r[3]); // 8017786C
  c->r[3]=c->r[26]+0x000000D8u; // 80177870
  W32(c->r[26]+0x000000D0u,c->r[0]); // 80177874
  W32(c->r[26]+0x000000D4u,c->r[25]); // 80177878
  c->lr=0x80177880u; f_800506C0(c); // 8017787C
  c->r[4]=0u+0x806F0000u; // 80177880
  c->r[3]=0u+0x00000006u; // 80177884
  c->r[4]=c->r[4]+0x000007A0u; // 80177888
  c->r[28]=c->r[26]+0x000000FCu; // 8017788C
  c->r[0]=c->r[4]+0x00000024u; // 80177890
  W32(c->r[26]+0x000000E8u,c->r[3]); // 80177894
  c->r[3]=c->r[28]+0x0000000Cu; // 80177898
  W32(c->r[26]+0x000000ECu,c->r[25]); // 8017789C
  W32(c->r[26]+0x000000F8u,c->r[25]); // 801778A0
  W32(c->r[26]+0x000000FCu,c->r[4]); // 801778A4
  W32(c->r[26]+0x00000100u,c->r[0]); // 801778A8
  c->lr=0x801778B0u; f_800506C0(c); // 801778AC
  c->r[3]=c->r[28]+0x00000018u; // 801778B0
  c->lr=0x801778B8u; f_800506C0(c); // 801778B4
  W32(c->r[28]+0x00000024u,c->r[25]); // 801778B8
  c->r[3]=c->r[28]+0x000000B0u; // 801778BC
  c->lr=0x801778C4u; f_800506C0(c); // 801778C0
  c->r[12]=R32(c->r[28]+0x00000000u); // 801778C4
  c->r[3]=c->r[28]|c->r[28]; // 801778C8
  c->r[12]=R32(c->r[12]+0x0000003Cu); // 801778CC
  c->ctr=c->r[12]; // 801778D0
  if (true) { c->lr=0x801778D8u; dispatch(c,c->ctr); } // 801778D4
  c->r[0]=R8(c->r[13]+0xFFFFBE74u); // 801778D8
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 801778DC
  if (!crb(c,2)) { goto L_801778FC; } // 801778E0
  c->r[3]=R32(c->r[13]+0xFFFFBE78u); // 801778E4
  c->r[0]=0u+0x00000001u; // 801778E8
  W32(c->r[13]+0xFFFFBE70u,c->r[3]); // 801778EC
  c->r[3]=c->r[3]+0x00000001u; // 801778F0
  W32(c->r[13]+0xFFFFBE78u,c->r[3]); // 801778F4
  W8(c->r[13]+0xFFFFBE74u,c->r[0]); // 801778F8
L_801778FC:;
  c->r[3]=R32(c->r[13]+0xFFFFBE70u); // 801778FC
  c->r[5]=0u+0x806F0000u; // 80177900
  c->r[5]=c->r[5]+0x000007F8u; // 80177904
  c->r[0]=0u+0x00000032u; // 80177908
  c->r[4]=c->r[5]+0x00000024u; // 8017790C
  W32(c->r[28]+0x00000008u,c->r[3]); // 80177910
  c->r[6]=0u+0x00000000u; // 80177914
  c->r[3]=0u+0x00000000u; // 80177918
  W32(c->r[28]+0x00000000u,c->r[5]); // 8017791C
  W32(c->r[28]+0x00000004u,c->r[4]); // 80177920
  c->ctr=c->r[0]; // 80177924
L_80177928:;
  c->r[4]=c->r[28]+c->r[3]; // 80177928
  c->r[3]=c->r[3]+0x00000004u; // 8017792C
  W32(c->r[4]+0x0000014Cu,c->r[6]); // 80177930
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80177928; } // 80177934
  c->r[3]=0u+0x806D0000u; // 80177938
  c->r[7]=0u+0x00000000u; // 8017793C
  c->r[3]=c->r[3]+0x00003868u; // 80177940
  c->r[0]=0u+0x0000000Au; // 80177944
  c->r[4]=c->r[3]+0x00000024u; // 80177948
  W32(c->r[28]+0x00000000u,c->r[3]); // 8017794C
  c->r[8]=0u+0x00000000u; // 80177950
  c->r[3]=0u+0x00000000u; // 80177954
  W32(c->r[28]+0x00000004u,c->r[4]); // 80177958
  c->r[6]=0u+0xFFFFFFFFu; // 8017795C
  W32(c->r[26]+0x00000314u,c->r[7]); // 80177960
  W8(c->r[26]+0x0000005Cu,c->r[7]); // 80177964
  W32(c->r[26]+0x00000054u,c->r[7]); // 80177968
  W32(c->r[26]+0x00000310u,c->r[26]); // 8017796C
  c->ctr=c->r[0]; // 80177970
L_80177974:;
  c->r[5]=c->r[26]+c->r[3]; // 80177974
  c->r[4]=c->r[26]+c->r[8]; // 80177978
  W32(c->r[5]+0x00000068u,c->r[6]); // 8017797C
  c->r[8]=c->r[8]+0x00000001u; // 80177980
  c->r[3]=c->r[3]+0x00000004u; // 80177984
  W8(c->r[4]+0x00000090u,c->r[7]); // 80177988
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80177974; } // 8017798C
  c->r[24]=c->r[26]+0x00000318u; // 80177990
  c->r[3]=c->r[24]|c->r[24]; // 80177994
  c->lr=0x8017799Cu; f_800506C0(c); // 80177998
  cmps(c,0,(int32_t)c->r[24],0); // 8017799C
  c->r[3]=c->r[24]|c->r[24]; // 801779A0
  if (crb(c,2)) { goto L_801779AC; } // 801779A4
  c->r[3]=c->r[24]+0xFFFFFCE8u; // 801779A8
L_801779AC:;
  c->r[29]=0u+0x00000001u; // 801779AC
  W32(c->r[24]+0x00000008u,c->r[3]); // 801779B0
  W8(c->r[24]+0x0000000Cu,c->r[29]); // 801779B4
  c->r[0]=R8(c->r[13]+0xFFFFBE9Eu); // 801779B8
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 801779BC
  if (!crb(c,2)) { goto L_80177A00; } // 801779C0
  c->r[28]=0u+0x80750000u; // 801779C4
  c->r[3]=c->r[28]+0xFFFF816Cu; // 801779C8
  c->lr=0x801779D0u; f_800506C0(c); // 801779CC
  c->r[6]=0u+0x806D0000u; // 801779D0
  c->r[4]=0u+0x80080000u; // 801779D4
  c->r[6]=c->r[6]+0x000038D8u; // 801779D8
  c->r[3]=c->r[28]+0xFFFF816Cu; // 801779DC
  c->r[0]=c->r[6]+0x00000008u; // 801779E0
  c->r[5]=0u+0x80750000u; // 801779E4
  W32(c->r[3]+0x00000010u,c->r[6]); // 801779E8
  c->r[4]=c->r[4]+0xFFFF9844u; // 801779EC
  c->r[5]=c->r[5]+0x000049A4u; // 801779F0
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 801779F4
  c->lr=0x801779FCu; f_803A92B8(c); // 801779F8
  W8(c->r[13]+0xFFFFBE9Eu,c->r[29]); // 801779FC
L_80177A00:;
  c->r[3]=0u+0x80750000u; // 80177A00
  c->r[5]=c->r[24]|c->r[24]; // 80177A04
  c->r[3]=c->r[3]+0xFFFF816Cu; // 80177A08
  c->r[4]=c->r[3]|c->r[3]; // 80177A0C
  c->lr=0x80177A14u; f_802DDCA8(c); // 80177A10
  c->r[3]=0u+0x806D0000u; // 80177A14
  c->r[0]=0u+0x00000000u; // 80177A18
  c->r[3]=c->r[3]+0xFFFFD974u; // 80177A1C
  c->r[5]=0u+0xFFFFFFFFu; // 80177A20
  c->r[4]=0u+0x00000001u; // 80177A24
  c->r[25]=c->r[26]+0x0000032Cu; // 80177A28
  W32(c->r[26]+0x0000001Cu,c->r[3]); // 80177A2C
  c->r[3]=c->r[25]|c->r[25]; // 80177A30
  W32(c->r[26]+0x00000328u,c->r[5]); // 80177A34
  W32(c->r[26]+0x000000ECu,c->r[4]); // 80177A38
  W32(c->r[26]+0x00000054u,c->r[0]); // 80177A3C
  W32(c->r[26]+0x00000314u,c->r[0]); // 80177A40
  c->lr=0x80177A48u; f_800506C0(c); // 80177A44
  cmps(c,0,(int32_t)c->r[25],0); // 80177A48
  c->r[3]=c->r[25]|c->r[25]; // 80177A4C
  if (crb(c,2)) { goto L_80177A58; } // 80177A50
  c->r[3]=c->r[25]+0xFFFFFCD4u; // 80177A54
L_80177A58:;
  c->r[28]=0u+0x00000001u; // 80177A58
  W32(c->r[25]+0x00000008u,c->r[3]); // 80177A5C
  W8(c->r[25]+0x0000000Cu,c->r[28]); // 80177A60
  c->r[0]=R8(c->r[13]+0xFFFFBBA9u); // 80177A64
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 80177A68
  if (!crb(c,2)) { goto L_80177AAC; } // 80177A6C
  c->r[27]=0u+0x80730000u; // 80177A70
  c->r[3]=c->r[27]+0x000073A8u; // 80177A74
  c->lr=0x80177A7Cu; f_800506C0(c); // 80177A78
  c->r[6]=0u+0x806D0000u; // 80177A7C
  c->r[4]=0u+0x80050000u; // 80177A80
  c->r[6]=c->r[6]+0xFFFFC8C8u; // 80177A84
  c->r[3]=c->r[27]+0x000073A8u; // 80177A88
  c->r[0]=c->r[6]+0x00000008u; // 80177A8C
  c->r[5]=0u+0x80750000u; // 80177A90
  W32(c->r[3]+0x00000010u,c->r[6]); // 80177A94
  c->r[4]=c->r[4]+0xFFFFCF9Cu; // 80177A98
  c->r[5]=c->r[5]+0x00004998u; // 80177A9C
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 80177AA0
  c->lr=0x80177AA8u; f_803A92B8(c); // 80177AA4
  W8(c->r[13]+0xFFFFBBA9u,c->r[28]); // 80177AA8
L_80177AAC:;
  c->r[3]=0u+0x80730000u; // 80177AAC
  c->r[5]=c->r[25]|c->r[25]; // 80177AB0
  c->r[3]=c->r[3]+0x000073A8u; // 80177AB4
  c->r[4]=c->r[3]|c->r[3]; // 80177AB8
  c->lr=0x80177AC0u; f_802DDCA8(c); // 80177ABC
  c->r[25]=c->r[26]+0x0000033Cu; // 80177AC0
  c->r[3]=c->r[25]|c->r[25]; // 80177AC4
  c->lr=0x80177ACCu; f_800506C0(c); // 80177AC8
  cmps(c,0,(int32_t)c->r[25],0); // 80177ACC
  c->r[3]=c->r[25]|c->r[25]; // 80177AD0
  if (crb(c,2)) { goto L_80177ADC; } // 80177AD4
  c->r[3]=c->r[25]+0xFFFFFCC4u; // 80177AD8
L_80177ADC:;
  c->r[28]=0u+0x00000001u; // 80177ADC
  W32(c->r[25]+0x00000008u,c->r[3]); // 80177AE0
  W8(c->r[25]+0x0000000Cu,c->r[28]); // 80177AE4
  c->r[0]=R8(c->r[13]+0xFFFFBE9Du); // 80177AE8
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 80177AEC
  if (!crb(c,2)) { goto L_80177B30; } // 80177AF0
  c->r[27]=0u+0x80750000u; // 80177AF4
  c->r[3]=c->r[27]+0xFFFF8158u; // 80177AF8
  c->lr=0x80177B00u; f_800506C0(c); // 80177AFC
  c->r[6]=0u+0x806D0000u; // 80177B00
  c->r[4]=0u+0x80080000u; // 80177B04
  c->r[6]=c->r[6]+0x000038F0u; // 80177B08
  c->r[3]=c->r[27]+0xFFFF8158u; // 80177B0C
  c->r[0]=c->r[6]+0x00000008u; // 80177B10
  c->r[5]=0u+0x80750000u; // 80177B14
  W32(c->r[3]+0x00000010u,c->r[6]); // 80177B18
  c->r[4]=c->r[4]+0xFFFF98C0u; // 80177B1C
  c->r[5]=c->r[5]+0x0000498Cu; // 80177B20
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 80177B24
  c->lr=0x80177B2Cu; f_803A92B8(c); // 80177B28
  W8(c->r[13]+0xFFFFBE9Du,c->r[28]); // 80177B2C
L_80177B30:;
  c->r[3]=0u+0x80750000u; // 80177B30
  c->r[5]=c->r[25]|c->r[25]; // 80177B34
  c->r[3]=c->r[3]+0xFFFF8158u; // 80177B38
  c->r[4]=c->r[3]|c->r[3]; // 80177B3C
  c->lr=0x80177B44u; f_802DDCA8(c); // 80177B40
  c->r[3]=0u+0x806D0000u; // 80177B44
  W32(c->r[26]+0x00000054u,c->r[31]); // 80177B48
  c->r[3]=c->r[3]+0x00004AE8u; // 80177B4C
  W32(c->r[26]+0x0000001Cu,c->r[3]); // 80177B50
  c->r[0]=R8(c->r[13]+0xFFFFBC60u); // 80177B54
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 80177B58
  if (!crb(c,2)) { goto L_80177B78; } // 80177B5C
  c->r[3]=R32(c->r[13]+0xFFFFBC48u); // 80177B60
  c->r[0]=0u+0x00000001u; // 80177B64
  W32(c->r[13]+0xFFFFBC5Cu,c->r[3]); // 80177B68
  c->r[3]=c->r[3]+0x00000001u; // 80177B6C
  W32(c->r[13]+0xFFFFBC48u,c->r[3]); // 80177B70
  W8(c->r[13]+0xFFFFBC60u,c->r[0]); // 80177B74
L_80177B78:;
  c->r[0]=R32(c->r[13]+0xFFFFBC5Cu); // 80177B78
  W32(c->r[26]+0x00000328u,c->r[0]); // 80177B7C
  c->r[0]=R8(c->r[13]+0xFFFFCCACu); // 80177B80
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 80177B84
  if (!crb(c,2)) { goto L_80177BA4; } // 80177B88
  c->r[3]=R32(c->r[13]+0xFFFFBDACu); // 80177B8C
  c->r[0]=0u+0x00000001u; // 80177B90
  W32(c->r[13]+0xFFFFCCA8u,c->r[3]); // 80177B94
  c->r[3]=c->r[3]+0x00000001u; // 80177B98
  W32(c->r[13]+0xFFFFBDACu,c->r[3]); // 80177B9C
  W8(c->r[13]+0xFFFFCCACu,c->r[0]); // 80177BA0
L_80177BA4:;
  c->r[0]=R32(c->r[13]+0xFFFFCCA8u); // 80177BA4
  W32(c->r[26]+0x0000034Cu,c->r[0]); // 80177BA8
  c->r[0]=R8(c->r[13]+0xFFFFBF8Cu); // 80177BAC
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 80177BB0
  if (!crb(c,2)) { goto L_80177BD0; } // 80177BB4
  c->r[3]=R32(c->r[13]+0xFFFFBF90u); // 80177BB8
  c->r[0]=0u+0x00000001u; // 80177BBC
  W32(c->r[13]+0xFFFFBF88u,c->r[3]); // 80177BC0
  c->r[3]=c->r[3]+0x00000001u; // 80177BC4
  W32(c->r[13]+0xFFFFBF90u,c->r[3]); // 80177BC8
  W8(c->r[13]+0xFFFFBF8Cu,c->r[0]); // 80177BCC
L_80177BD0:;
  c->r[0]=R32(c->r[13]+0xFFFFBF88u); // 80177BD0
  c->r[5]=0u+0x806D0000u; // 80177BD4
  c->r[5]=c->r[5]+0xFFFFE468u; // 80177BD8
  W32(c->r[26]+0x00000350u,c->r[0]); // 80177BDC
  c->r[3]=c->r[26]+0x000003B0u; // 80177BE0
  c->r[4]=0u+0x00000000u; // 80177BE4
  W32(c->r[26]+0x00000400u,c->r[5]); // 80177BE8
  c->r[5]=0u+0x00000050u; // 80177BEC
  c->lr=0x80177BF4u; f_800043EC(c); // 80177BF0
  c->r[4]=0u+0x806D0000u; // 80177BF4
  c->r[3]=c->r[26]+0x00000450u; // 80177BF8
  c->r[4]=c->r[4]+0xFFFFE170u; // 80177BFC
  W32(c->r[26]+0x0000001Cu,c->r[4]); // 80177C00
  c->r[0]=c->r[4]+0x00000044u; // 80177C04
  W32(c->r[26]+0x00000400u,c->r[0]); // 80177C08
  c->lr=0x80177C10u; f_8007BDFC(c); // 80177C0C
  c->r[3]=c->r[26]+0x000004C4u; // 80177C10
  c->lr=0x80177C18u; f_8007BDFC(c); // 80177C14
  c->r[3]=c->r[26]+0x00000538u; // 80177C18
  c->r[4]=0u+0x00000000u; // 80177C1C
  c->r[5]=0u+0x00000008u; // 80177C20
  c->lr=0x80177C28u; f_800043EC(c); // 80177C24
  c->r[24]=R32(c->r[13]+0xFFFFDBDCu); // 80177C28
  cmps(c,0,(int32_t)c->r[24],0); // 80177C2C
  if (crb(c,2)) { goto L_80177C74; } // 80177C30
  c->lr=0x80177C38u; f_801783E4(c); // 80177C34
  c->r[27]=c->r[3]|c->r[3]; // 80177C38
  c->lr=0x80177C40u; f_8007BDCC(c); // 80177C3C
  c->r[4]=(uint32_t)((int32_t)c->r[27]*(int32_t)80); // 80177C40
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 80177C44
  c->r[5]=0u+0x80180000u; // 80177C48
  c->r[3]=rotl(c->r[27],2)&0xFFFFFFFCu; // 80177C4C
  c->r[4]=c->r[24]+c->r[4]; // 80177C50
  c->r[5]=c->r[5]+0xFFFF85ACu; // 80177C54
  c->r[4]=c->r[4]+c->r[0]; // 80177C58
  W32(c->r[4]+0x000001CCu,c->r[5]); // 80177C5C
  c->r[0]=R32(c->r[24]+c->r[3]); // 80177C60
  cmpu(c,0,c->r[0],0x0000000Cu); // 80177C64
  if (!crb(c,0)) { goto L_80177C74; } // 80177C68
  c->r[0]=0u+0x0000000Cu; // 80177C6C
  W32(c->r[24]+c->r[3],c->r[0]); // 80177C70
L_80177C74:;
  c->r[24]=R32(c->r[13]+0xFFFFDBDCu); // 80177C74
  cmps(c,0,(int32_t)c->r[24],0); // 80177C78
  if (crb(c,2)) { goto L_80177CE4; } // 80177C7C
  c->lr=0x80177C84u; f_801783E4(c); // 80177C80
  c->r[0]=R8(c->r[13]+0xFFFFBEACu); // 80177C84
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 80177C88
  if (!crb(c,2)) { goto L_80177CAC; } // 80177C8C
  c->r[5]=R32(c->r[13]+0xFFFFBCC4u); // 80177C90
  c->r[0]=0u+0x00000001u; // 80177C94
  W32(c->r[13]+0xFFFFBDF8u,c->r[5]); // 80177C98
  c->r[4]=c->r[5]+0x00000001u; // 80177C9C
  W32(c->r[13]+0xFFFFBCC4u,c->r[4]); // 80177CA0
  W32(c->r[13]+0xFFFFBEA8u,c->r[5]); // 80177CA4
  W8(c->r[13]+0xFFFFBEACu,c->r[0]); // 80177CA8
L_80177CAC:;
  c->r[4]=(uint32_t)((int32_t)c->r[3]*(int32_t)80); // 80177CAC
  c->r[0]=R32(c->r[13]+0xFFFFBEA8u); // 80177CB0
  c->r[5]=0u+0x80180000u; // 80177CB4
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80177CB8
  c->r[4]=c->r[24]+c->r[4]; // 80177CBC
  c->r[5]=c->r[5]+0xFFFF85A8u; // 80177CC0
  c->r[4]=c->r[4]+c->r[0]; // 80177CC4
  c->r[3]=rotl(c->r[3],2)&0xFFFFFFFCu; // 80177CC8
  W32(c->r[4]+0x000001CCu,c->r[5]); // 80177CCC
  c->r[0]=R32(c->r[24]+c->r[3]); // 80177CD0
  cmpu(c,0,c->r[0],0x00000018u); // 80177CD4
  if (!crb(c,0)) { goto L_80177CE4; } // 80177CD8
  c->r[0]=0u+0x00000018u; // 80177CDC
  W32(c->r[24]+c->r[3],c->r[0]); // 80177CE0
L_80177CE4:;
  c->r[24]=R32(c->r[13]+0xFFFFDBDCu); // 80177CE4
  cmps(c,0,(int32_t)c->r[24],0); // 80177CE8
  if (crb(c,2)) { goto L_80177D54; } // 80177CEC
  c->lr=0x80177CF4u; f_801783E4(c); // 80177CF0
  c->r[0]=R8(c->r[13]+0xFFFFBCD0u); // 80177CF4
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 80177CF8
  if (!crb(c,2)) { goto L_80177D1C; } // 80177CFC
  c->r[5]=R32(c->r[13]+0xFFFFBCC4u); // 80177D00
  c->r[0]=0u+0x00000001u; // 80177D04
  W32(c->r[13]+0xFFFFBDF8u,c->r[5]); // 80177D08
  c->r[4]=c->r[5]+0x00000001u; // 80177D0C
  W32(c->r[13]+0xFFFFBCC4u,c->r[4]); // 80177D10
  W32(c->r[13]+0xFFFFBCCCu,c->r[5]); // 80177D14
  W8(c->r[13]+0xFFFFBCD0u,c->r[0]); // 80177D18
L_80177D1C:;
  c->r[4]=(uint32_t)((int32_t)c->r[3]*(int32_t)80); // 80177D1C
  c->r[0]=R32(c->r[13]+0xFFFFBCCCu); // 80177D20
  c->r[5]=0u+0x80180000u; // 80177D24
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80177D28
  c->r[4]=c->r[24]+c->r[4]; // 80177D2C
  c->r[5]=c->r[5]+0xFFFF85A4u; // 80177D30
  c->r[4]=c->r[4]+c->r[0]; // 80177D34
  c->r[3]=rotl(c->r[3],2)&0xFFFFFFFCu; // 80177D38
  W32(c->r[4]+0x000001CCu,c->r[5]); // 80177D3C
  c->r[0]=R32(c->r[24]+c->r[3]); // 80177D40
  cmpu(c,0,c->r[0],0x0000006Cu); // 80177D44
  if (!crb(c,0)) { goto L_80177D54; } // 80177D48
  c->r[0]=0u+0x0000006Cu; // 80177D4C
  W32(c->r[24]+c->r[3],c->r[0]); // 80177D50
L_80177D54:;
  c->r[24]=R32(c->r[13]+0xFFFFDBDCu); // 80177D54
  cmps(c,0,(int32_t)c->r[24],0); // 80177D58
  if (crb(c,2)) { goto L_80177DC4; } // 80177D5C
  c->lr=0x80177D64u; f_801783E4(c); // 80177D60
  c->r[0]=R8(c->r[13]+0xFFFFBD38u); // 80177D64
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 80177D68
  if (!crb(c,2)) { goto L_80177D8C; } // 80177D6C
  c->r[5]=R32(c->r[13]+0xFFFFBCC4u); // 80177D70
  c->r[0]=0u+0x00000001u; // 80177D74
  W32(c->r[13]+0xFFFFBDF8u,c->r[5]); // 80177D78
  c->r[4]=c->r[5]+0x00000001u; // 80177D7C
  W32(c->r[13]+0xFFFFBCC4u,c->r[4]); // 80177D80
  W32(c->r[13]+0xFFFFBD34u,c->r[5]); // 80177D84
  W8(c->r[13]+0xFFFFBD38u,c->r[0]); // 80177D88
L_80177D8C:;
  c->r[4]=(uint32_t)((int32_t)c->r[3]*(int32_t)80); // 80177D8C
  c->r[0]=R32(c->r[13]+0xFFFFBD34u); // 80177D90
  c->r[5]=0u+0x80180000u; // 80177D94
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80177D98
  c->r[4]=c->r[24]+c->r[4]; // 80177D9C
  c->r[5]=c->r[5]+0xFFFF85A0u; // 80177DA0
  c->r[4]=c->r[4]+c->r[0]; // 80177DA4
  c->r[3]=rotl(c->r[3],2)&0xFFFFFFFCu; // 80177DA8
  W32(c->r[4]+0x000001CCu,c->r[5]); // 80177DAC
  c->r[0]=R32(c->r[24]+c->r[3]); // 80177DB0
  cmpu(c,0,c->r[0],0x0000002Cu); // 80177DB4
  if (!crb(c,0)) { goto L_80177DC4; } // 80177DB8
  c->r[0]=0u+0x0000002Cu; // 80177DBC
  W32(c->r[24]+c->r[3],c->r[0]); // 80177DC0
L_80177DC4:;
  c->r[24]=R32(c->r[13]+0xFFFFDBDCu); // 80177DC4
  cmps(c,0,(int32_t)c->r[24],0); // 80177DC8
  if (crb(c,2)) { goto L_80177E34; } // 80177DCC
  c->lr=0x80177DD4u; f_801783E4(c); // 80177DD0
  c->r[0]=R8(c->r[13]+0xFFFFBEB4u); // 80177DD4
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 80177DD8
  if (!crb(c,2)) { goto L_80177DFC; } // 80177DDC
  c->r[5]=R32(c->r[13]+0xFFFFBCC4u); // 80177DE0
  c->r[0]=0u+0x00000001u; // 80177DE4
  W32(c->r[13]+0xFFFFBDF8u,c->r[5]); // 80177DE8
  c->r[4]=c->r[5]+0x00000001u; // 80177DEC
  W32(c->r[13]+0xFFFFBCC4u,c->r[4]); // 80177DF0
  W32(c->r[13]+0xFFFFBEB0u,c->r[5]); // 80177DF4
  W8(c->r[13]+0xFFFFBEB4u,c->r[0]); // 80177DF8
L_80177DFC:;
  c->r[4]=(uint32_t)((int32_t)c->r[3]*(int32_t)80); // 80177DFC
  c->r[0]=R32(c->r[13]+0xFFFFBEB0u); // 80177E00
  c->r[5]=0u+0x80180000u; // 80177E04
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80177E08
  c->r[4]=c->r[24]+c->r[4]; // 80177E0C
  c->r[5]=c->r[5]+0xFFFF859Cu; // 80177E10
  c->r[4]=c->r[4]+c->r[0]; // 80177E14
  c->r[3]=rotl(c->r[3],2)&0xFFFFFFFCu; // 80177E18
  W32(c->r[4]+0x000001CCu,c->r[5]); // 80177E1C
  c->r[0]=R32(c->r[24]+c->r[3]); // 80177E20
  cmpu(c,0,c->r[0],0x00000010u); // 80177E24
  if (!crb(c,0)) { goto L_80177E34; } // 80177E28
  c->r[0]=0u+0x00000010u; // 80177E2C
  W32(c->r[24]+c->r[3],c->r[0]); // 80177E30
L_80177E34:;
  c->r[24]=R32(c->r[13]+0xFFFFDBDCu); // 80177E34
  cmps(c,0,(int32_t)c->r[24],0); // 80177E38
  if (crb(c,2)) { goto L_80177EA4; } // 80177E3C
  c->lr=0x80177E44u; f_801783E4(c); // 80177E40
  c->r[0]=R8(c->r[13]+0xFFFFBEBCu); // 80177E44
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 80177E48
  if (!crb(c,2)) { goto L_80177E6C; } // 80177E4C
  c->r[5]=R32(c->r[13]+0xFFFFBCC4u); // 80177E50
  c->r[0]=0u+0x00000001u; // 80177E54
  W32(c->r[13]+0xFFFFBDF8u,c->r[5]); // 80177E58
  c->r[4]=c->r[5]+0x00000001u; // 80177E5C
  W32(c->r[13]+0xFFFFBCC4u,c->r[4]); // 80177E60
  W32(c->r[13]+0xFFFFBEB8u,c->r[5]); // 80177E64
  W8(c->r[13]+0xFFFFBEBCu,c->r[0]); // 80177E68
L_80177E6C:;
  c->r[4]=(uint32_t)((int32_t)c->r[3]*(int32_t)80); // 80177E6C
  c->r[0]=R32(c->r[13]+0xFFFFBEB8u); // 80177E70
  c->r[5]=0u+0x80180000u; // 80177E74
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80177E78
  c->r[4]=c->r[24]+c->r[4]; // 80177E7C
  c->r[5]=c->r[5]+0xFFFF8598u; // 80177E80
  c->r[4]=c->r[4]+c->r[0]; // 80177E84
  c->r[3]=rotl(c->r[3],2)&0xFFFFFFFCu; // 80177E88
  W32(c->r[4]+0x000001CCu,c->r[5]); // 80177E8C
  c->r[0]=R32(c->r[24]+c->r[3]); // 80177E90
  cmpu(c,0,c->r[0],0x0000005Cu); // 80177E94
  if (!crb(c,0)) { goto L_80177EA4; } // 80177E98
  c->r[0]=0u+0x0000005Cu; // 80177E9C
  W32(c->r[24]+c->r[3],c->r[0]); // 80177EA0
L_80177EA4:;
  c->r[24]=R32(c->r[13]+0xFFFFDBDCu); // 80177EA4
  cmps(c,0,(int32_t)c->r[24],0); // 80177EA8
  if (crb(c,2)) { goto L_80177F14; } // 80177EAC
  c->lr=0x80177EB4u; f_801783E4(c); // 80177EB0
  c->r[0]=R8(c->r[13]+0xFFFFBEC4u); // 80177EB4
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 80177EB8
  if (!crb(c,2)) { goto L_80177EDC; } // 80177EBC
  c->r[5]=R32(c->r[13]+0xFFFFBCC4u); // 80177EC0
  c->r[0]=0u+0x00000001u; // 80177EC4
  W32(c->r[13]+0xFFFFBDF8u,c->r[5]); // 80177EC8
  c->r[4]=c->r[5]+0x00000001u; // 80177ECC
  W32(c->r[13]+0xFFFFBCC4u,c->r[4]); // 80177ED0
  W32(c->r[13]+0xFFFFBEC0u,c->r[5]); // 80177ED4
  W8(c->r[13]+0xFFFFBEC4u,c->r[0]); // 80177ED8
L_80177EDC:;
  c->r[4]=(uint32_t)((int32_t)c->r[3]*(int32_t)80); // 80177EDC
  c->r[0]=R32(c->r[13]+0xFFFFBEC0u); // 80177EE0
  c->r[5]=0u+0x80180000u; // 80177EE4
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80177EE8
  c->r[4]=c->r[24]+c->r[4]; // 80177EEC
  c->r[5]=c->r[5]+0xFFFF8594u; // 80177EF0
  c->r[4]=c->r[4]+c->r[0]; // 80177EF4
  c->r[3]=rotl(c->r[3],2)&0xFFFFFFFCu; // 80177EF8
  W32(c->r[4]+0x000001CCu,c->r[5]); // 80177EFC
  c->r[0]=R32(c->r[24]+c->r[3]); // 80177F00
  cmpu(c,0,c->r[0],0x0000005Cu); // 80177F04
  if (!crb(c,0)) { goto L_80177F14; } // 80177F08
  c->r[0]=0u+0x0000005Cu; // 80177F0C
  W32(c->r[24]+c->r[3],c->r[0]); // 80177F10
L_80177F14:;
  c->r[24]=R32(c->r[13]+0xFFFFDBDCu); // 80177F14
  cmps(c,0,(int32_t)c->r[24],0); // 80177F18
  if (crb(c,2)) { goto L_80177F84; } // 80177F1C
  c->lr=0x80177F24u; f_801783E4(c); // 80177F20
  c->r[0]=R8(c->r[13]+0xFFFFBECCu); // 80177F24
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 80177F28
  if (!crb(c,2)) { goto L_80177F4C; } // 80177F2C
  c->r[5]=R32(c->r[13]+0xFFFFBCC4u); // 80177F30
  c->r[0]=0u+0x00000001u; // 80177F34
  W32(c->r[13]+0xFFFFBDF8u,c->r[5]); // 80177F38
  c->r[4]=c->r[5]+0x00000001u; // 80177F3C
  W32(c->r[13]+0xFFFFBCC4u,c->r[4]); // 80177F40
  W32(c->r[13]+0xFFFFBEC8u,c->r[5]); // 80177F44
  W8(c->r[13]+0xFFFFBECCu,c->r[0]); // 80177F48
L_80177F4C:;
  c->r[4]=(uint32_t)((int32_t)c->r[3]*(int32_t)80); // 80177F4C
  c->r[0]=R32(c->r[13]+0xFFFFBEC8u); // 80177F50
  c->r[5]=0u+0x80180000u; // 80177F54
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80177F58
  c->r[4]=c->r[24]+c->r[4]; // 80177F5C
  c->r[5]=c->r[5]+0xFFFF8590u; // 80177F60
  c->r[4]=c->r[4]+c->r[0]; // 80177F64
  c->r[3]=rotl(c->r[3],2)&0xFFFFFFFCu; // 80177F68
  W32(c->r[4]+0x000001CCu,c->r[5]); // 80177F6C
  c->r[0]=R32(c->r[24]+c->r[3]); // 80177F70
  cmpu(c,0,c->r[0],0x0000005Cu); // 80177F74
  if (!crb(c,0)) { goto L_80177F84; } // 80177F78
  c->r[0]=0u+0x0000005Cu; // 80177F7C
  W32(c->r[24]+c->r[3],c->r[0]); // 80177F80
L_80177F84:;
  c->r[24]=R32(c->r[13]+0xFFFFDBDCu); // 80177F84
  cmps(c,0,(int32_t)c->r[24],0); // 80177F88
  if (crb(c,2)) { goto L_80177FF4; } // 80177F8C
  c->lr=0x80177F94u; f_801783E4(c); // 80177F90
  c->r[0]=R8(c->r[13]+0xFFFFBED4u); // 80177F94
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 80177F98
  if (!crb(c,2)) { goto L_80177FBC; } // 80177F9C
  c->r[5]=R32(c->r[13]+0xFFFFBCC4u); // 80177FA0
  c->r[0]=0u+0x00000001u; // 80177FA4
  W32(c->r[13]+0xFFFFBDF8u,c->r[5]); // 80177FA8
  c->r[4]=c->r[5]+0x00000001u; // 80177FAC
  W32(c->r[13]+0xFFFFBCC4u,c->r[4]); // 80177FB0
  W32(c->r[13]+0xFFFFBED0u,c->r[5]); // 80177FB4
  W8(c->r[13]+0xFFFFBED4u,c->r[0]); // 80177FB8
L_80177FBC:;
  c->r[4]=(uint32_t)((int32_t)c->r[3]*(int32_t)80); // 80177FBC
  c->r[0]=R32(c->r[13]+0xFFFFBED0u); // 80177FC0
  c->r[5]=0u+0x80180000u; // 80177FC4
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80177FC8
  c->r[4]=c->r[24]+c->r[4]; // 80177FCC
  c->r[5]=c->r[5]+0xFFFF858Cu; // 80177FD0
  c->r[4]=c->r[4]+c->r[0]; // 80177FD4
  c->r[3]=rotl(c->r[3],2)&0xFFFFFFFCu; // 80177FD8
  W32(c->r[4]+0x000001CCu,c->r[5]); // 80177FDC
  c->r[0]=R32(c->r[24]+c->r[3]); // 80177FE0
  cmpu(c,0,c->r[0],0x0000005Cu); // 80177FE4
  if (!crb(c,0)) { goto L_80177FF4; } // 80177FE8
  c->r[0]=0u+0x0000005Cu; // 80177FEC
  W32(c->r[24]+c->r[3],c->r[0]); // 80177FF0
L_80177FF4:;
  c->r[3]=c->r[26]|c->r[26]; // 80177FF4
  c->lr=0x80177FFCu; f_8005BBF0(c); // 80177FF8
  c->r[4]=0u+0x806E0000u; // 80177FFC
  c->r[3]=c->r[26]+0x000005C0u; // 80178000
  c->r[4]=c->r[4]+0xFFFFFA40u; // 80178004
  W32(c->r[26]+0x0000001Cu,c->r[4]); // 80178008
  c->r[0]=c->r[4]+0x00000044u; // 8017800C
  c->r[5]=0u+0x00000028u; // 80178010
  W32(c->r[26]+0x00000400u,c->r[0]); // 80178014
  c->r[4]=0u+0x00000000u; // 80178018
  c->lr=0x80178020u; f_800043EC(c); // 8017801C
  c->r[0]=0u+0x00000002u; // 80178020
  W32(c->r[26]+0x000005C4u,c->r[0]); // 80178024
  c->r[3]=c->r[26]+0x000005F4u; // 80178028
  c->lr=0x80178030u; f_800A7AB8(c); // 8017802C
  c->r[24]=R32(c->r[13]+0xFFFFDBD8u); // 80178030
  cmps(c,0,(int32_t)c->r[24],0); // 80178034
  if (crb(c,2)) { goto L_801780A0; } // 80178038
  c->lr=0x80178040u; f_801783E4(c); // 8017803C
  c->r[0]=R8(c->r[13]+0xFFFFBEA4u); // 80178040
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 80178044
  if (!crb(c,2)) { goto L_80178068; } // 80178048
  c->r[5]=R32(c->r[13]+0xFFFFBCC8u); // 8017804C
  c->r[0]=0u+0x00000001u; // 80178050
  W32(c->r[13]+0xFFFFBDFCu,c->r[5]); // 80178054
  c->r[4]=c->r[5]+0x00000001u; // 80178058
  W32(c->r[13]+0xFFFFBCC8u,c->r[4]); // 8017805C
  W32(c->r[13]+0xFFFFBEA0u,c->r[5]); // 80178060
  W8(c->r[13]+0xFFFFBEA4u,c->r[0]); // 80178064
L_80178068:;
  c->r[4]=(uint32_t)((int32_t)c->r[3]*(int32_t)2600); // 80178068
  c->r[0]=R32(c->r[13]+0xFFFFBEA0u); // 8017806C
  c->r[5]=0u+0x80180000u; // 80178070
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80178074
  c->r[4]=c->r[24]+c->r[4]; // 80178078
  c->r[5]=c->r[5]+0xFFFF8588u; // 8017807C
  c->r[4]=c->r[4]+c->r[0]; // 80178080
  c->r[3]=rotl(c->r[3],2)&0xFFFFFFFCu; // 80178084
  W32(c->r[4]+0x000001CCu,c->r[5]); // 80178088
  c->r[0]=R32(c->r[24]+c->r[3]); // 8017808C
  cmpu(c,0,c->r[0],0x00000010u); // 80178090
  if (!crb(c,0)) { goto L_801780A0; } // 80178094
  c->r[0]=0u+0x00000010u; // 80178098
  W32(c->r[24]+c->r[3],c->r[0]); // 8017809C
L_801780A0:;
  c->r[24]=R32(c->r[13]+0xFFFFDBD8u); // 801780A0
  cmps(c,0,(int32_t)c->r[24],0); // 801780A4
  if (crb(c,2)) { goto L_801780EC; } // 801780A8
  c->lr=0x801780B0u; f_801783E4(c); // 801780AC
  c->r[27]=c->r[3]|c->r[3]; // 801780B0
  c->lr=0x801780B8u; f_80062DCC(c); // 801780B4
  c->r[4]=(uint32_t)((int32_t)c->r[27]*(int32_t)2600); // 801780B8
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 801780BC
  c->r[5]=0u+0x80180000u; // 801780C0
  c->r[3]=rotl(c->r[27],2)&0xFFFFFFFCu; // 801780C4
  c->r[4]=c->r[24]+c->r[4]; // 801780C8
  c->r[5]=c->r[5]+0xFFFF8584u; // 801780CC
  c->r[4]=c->r[4]+c->r[0]; // 801780D0
  W32(c->r[4]+0x000001CCu,c->r[5]); // 801780D4
  c->r[0]=R32(c->r[24]+c->r[3]); // 801780D8
  cmpu(c,0,c->r[0],0x00000010u); // 801780DC
  if (!crb(c,0)) { goto L_801780EC; } // 801780E0
  c->r[0]=0u+0x00000010u; // 801780E4
  W32(c->r[24]+c->r[3],c->r[0]); // 801780E8
L_801780EC:;
  c->r[24]=R32(c->r[13]+0xFFFFDBD8u); // 801780EC
  cmps(c,0,(int32_t)c->r[24],0); // 801780F0
  if (crb(c,2)) { goto L_80178138; } // 801780F4
  c->lr=0x801780FCu; f_801783E4(c); // 801780F8
  c->r[27]=c->r[3]|c->r[3]; // 801780FC
  c->lr=0x80178104u; f_8007B170(c); // 80178100
  c->r[4]=(uint32_t)((int32_t)c->r[27]*(int32_t)2600); // 80178104
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 80178108
  c->r[5]=0u+0x80180000u; // 8017810C
  c->r[3]=rotl(c->r[27],2)&0xFFFFFFFCu; // 80178110
  c->r[4]=c->r[24]+c->r[4]; // 80178114
  c->r[5]=c->r[5]+0xFFFF8580u; // 80178118
  c->r[4]=c->r[4]+c->r[0]; // 8017811C
  W32(c->r[4]+0x000001CCu,c->r[5]); // 80178120
  c->r[0]=R32(c->r[24]+c->r[3]); // 80178124
  cmpu(c,0,c->r[0],0x00000010u); // 80178128
  if (!crb(c,0)) { goto L_80178138; } // 8017812C
  c->r[0]=0u+0x00000010u; // 80178130
  W32(c->r[24]+c->r[3],c->r[0]); // 80178134
L_80178138:;
  c->r[24]=R32(c->r[13]+0xFFFFDBD8u); // 80178138
  cmps(c,0,(int32_t)c->r[24],0); // 8017813C
  if (crb(c,2)) { goto L_80178184; } // 80178140
  c->lr=0x80178148u; f_801783E4(c); // 80178144
  c->r[27]=c->r[3]|c->r[3]; // 80178148
  c->lr=0x80178150u; f_80178550(c); // 8017814C
  c->r[4]=(uint32_t)((int32_t)c->r[27]*(int32_t)2600); // 80178150
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 80178154
  c->r[5]=0u+0x80180000u; // 80178158
  c->r[3]=rotl(c->r[27],2)&0xFFFFFFFCu; // 8017815C
  c->r[4]=c->r[24]+c->r[4]; // 80178160
  c->r[5]=c->r[5]+0xFFFF854Cu; // 80178164
  c->r[4]=c->r[4]+c->r[0]; // 80178168
  W32(c->r[4]+0x000001CCu,c->r[5]); // 8017816C
  c->r[0]=R32(c->r[24]+c->r[3]); // 80178170
  cmpu(c,0,c->r[0],0x00000018u); // 80178174
  if (!crb(c,0)) { goto L_80178184; } // 80178178
  c->r[0]=0u+0x00000018u; // 8017817C
  W32(c->r[24]+c->r[3],c->r[0]); // 80178180
L_80178184:;
  c->r[24]=R32(c->r[13]+0xFFFFDBD8u); // 80178184
  cmps(c,0,(int32_t)c->r[24],0); // 80178188
  if (crb(c,2)) { goto L_801781D0; } // 8017818C
  c->lr=0x80178194u; f_801783E4(c); // 80178190
  c->r[27]=c->r[3]|c->r[3]; // 80178194
  c->lr=0x8017819Cu; f_8017851C(c); // 80178198
  c->r[4]=(uint32_t)((int32_t)c->r[27]*(int32_t)2600); // 8017819C
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 801781A0
  c->r[5]=0u+0x80180000u; // 801781A4
  c->r[3]=rotl(c->r[27],2)&0xFFFFFFFCu; // 801781A8
  c->r[4]=c->r[24]+c->r[4]; // 801781AC
  c->r[5]=c->r[5]+0xFFFF8518u; // 801781B0
  c->r[4]=c->r[4]+c->r[0]; // 801781B4
  W32(c->r[4]+0x000001CCu,c->r[5]); // 801781B8
  c->r[0]=R32(c->r[24]+c->r[3]); // 801781BC
  cmpu(c,0,c->r[0],0x00000018u); // 801781C0
  if (!crb(c,0)) { goto L_801781D0; } // 801781C4
  c->r[0]=0u+0x00000018u; // 801781C8
  W32(c->r[24]+c->r[3],c->r[0]); // 801781CC
L_801781D0:;
  c->r[24]=R32(c->r[13]+0xFFFFDBD8u); // 801781D0
  cmps(c,0,(int32_t)c->r[24],0); // 801781D4
  if (crb(c,2)) { goto L_8017821C; } // 801781D8
  c->lr=0x801781E0u; f_801783E4(c); // 801781DC
  c->r[27]=c->r[3]|c->r[3]; // 801781E0
  c->lr=0x801781E8u; f_801784E8(c); // 801781E4
  c->r[4]=(uint32_t)((int32_t)c->r[27]*(int32_t)2600); // 801781E8
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 801781EC
  c->r[5]=0u+0x80180000u; // 801781F0
  c->r[3]=rotl(c->r[27],2)&0xFFFFFFFCu; // 801781F4
  c->r[4]=c->r[24]+c->r[4]; // 801781F8
  c->r[5]=c->r[5]+0xFFFF84E4u; // 801781FC
  c->r[4]=c->r[4]+c->r[0]; // 80178200
  W32(c->r[4]+0x000001CCu,c->r[5]); // 80178204
  c->r[0]=R32(c->r[24]+c->r[3]); // 80178208
  cmpu(c,0,c->r[0],0x00000010u); // 8017820C
  if (!crb(c,0)) { goto L_8017821C; } // 80178210
  c->r[0]=0u+0x00000010u; // 80178214
  W32(c->r[24]+c->r[3],c->r[0]); // 80178218
L_8017821C:;
  c->r[24]=R32(c->r[13]+0xFFFFDBD8u); // 8017821C
  cmps(c,0,(int32_t)c->r[24],0); // 80178220
  if (crb(c,2)) { goto L_80178268; } // 80178224
  c->lr=0x8017822Cu; f_801783E4(c); // 80178228
  c->r[27]=c->r[3]|c->r[3]; // 8017822C
  c->lr=0x80178234u; f_801784B4(c); // 80178230
  c->r[4]=(uint32_t)((int32_t)c->r[27]*(int32_t)2600); // 80178234
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 80178238
  c->r[5]=0u+0x80180000u; // 8017823C
  c->r[3]=rotl(c->r[27],2)&0xFFFFFFFCu; // 80178240
  c->r[4]=c->r[24]+c->r[4]; // 80178244
  c->r[5]=c->r[5]+0xFFFF84B0u; // 80178248
  c->r[4]=c->r[4]+c->r[0]; // 8017824C
  W32(c->r[4]+0x000001CCu,c->r[5]); // 80178250
  c->r[0]=R32(c->r[24]+c->r[3]); // 80178254
  cmpu(c,0,c->r[0],0x00000018u); // 80178258
  if (!crb(c,0)) { goto L_80178268; } // 8017825C
  c->r[0]=0u+0x00000018u; // 80178260
  W32(c->r[24]+c->r[3],c->r[0]); // 80178264
L_80178268:;
  c->r[24]=R32(c->r[13]+0xFFFFDBD8u); // 80178268
  cmps(c,0,(int32_t)c->r[24],0); // 8017826C
  if (crb(c,2)) { goto L_801782B4; } // 80178270
  c->lr=0x80178278u; f_801783E4(c); // 80178274
  c->r[27]=c->r[3]|c->r[3]; // 80178278
  c->lr=0x80178280u; f_80178480(c); // 8017827C
  c->r[4]=(uint32_t)((int32_t)c->r[27]*(int32_t)2600); // 80178280
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 80178284
  c->r[5]=0u+0x80180000u; // 80178288
  c->r[3]=rotl(c->r[27],2)&0xFFFFFFFCu; // 8017828C
  c->r[4]=c->r[24]+c->r[4]; // 80178290
  c->r[5]=c->r[5]+0xFFFF847Cu; // 80178294
  c->r[4]=c->r[4]+c->r[0]; // 80178298
  W32(c->r[4]+0x000001CCu,c->r[5]); // 8017829C
  c->r[0]=R32(c->r[24]+c->r[3]); // 801782A0
  cmpu(c,0,c->r[0],0x00000028u); // 801782A4
  if (!crb(c,0)) { goto L_801782B4; } // 801782A8
  c->r[0]=0u+0x00000028u; // 801782AC
  W32(c->r[24]+c->r[3],c->r[0]); // 801782B0
L_801782B4:;
  c->r[24]=R32(c->r[13]+0xFFFFDBD8u); // 801782B4
  cmps(c,0,(int32_t)c->r[24],0); // 801782B8
  if (crb(c,2)) { goto L_80178300; } // 801782BC
  c->lr=0x801782C4u; f_801783E4(c); // 801782C0
  c->r[27]=c->r[3]|c->r[3]; // 801782C4
  c->lr=0x801782CCu; f_8017844C(c); // 801782C8
  c->r[4]=(uint32_t)((int32_t)c->r[27]*(int32_t)2600); // 801782CC
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 801782D0
  c->r[5]=0u+0x80180000u; // 801782D4
  c->r[3]=rotl(c->r[27],2)&0xFFFFFFFCu; // 801782D8
  c->r[4]=c->r[24]+c->r[4]; // 801782DC
  c->r[5]=c->r[5]+0xFFFF8448u; // 801782E0
  c->r[4]=c->r[4]+c->r[0]; // 801782E4
  W32(c->r[4]+0x000001CCu,c->r[5]); // 801782E8
  c->r[0]=R32(c->r[24]+c->r[3]); // 801782EC
  cmpu(c,0,c->r[0],0x00000028u); // 801782F0
  if (!crb(c,0)) { goto L_80178300; } // 801782F4
  c->r[0]=0u+0x00000028u; // 801782F8
  W32(c->r[24]+c->r[3],c->r[0]); // 801782FC
L_80178300:;
  c->r[24]=R32(c->r[13]+0xFFFFDBD8u); // 80178300
  cmps(c,0,(int32_t)c->r[24],0); // 80178304
  if (crb(c,2)) { goto L_8017834C; } // 80178308
  c->lr=0x80178310u; f_801783E4(c); // 8017830C
  c->r[27]=c->r[3]|c->r[3]; // 80178310
  c->lr=0x80178318u; f_80178418(c); // 80178314
  c->r[4]=(uint32_t)((int32_t)c->r[27]*(int32_t)2600); // 80178318
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 8017831C
  c->r[5]=0u+0x80180000u; // 80178320
  c->r[3]=rotl(c->r[27],2)&0xFFFFFFFCu; // 80178324
  c->r[4]=c->r[24]+c->r[4]; // 80178328
  c->r[5]=c->r[5]+0xFFFF8414u; // 8017832C
  c->r[4]=c->r[4]+c->r[0]; // 80178330
  W32(c->r[4]+0x000001CCu,c->r[5]); // 80178334
  c->r[0]=R32(c->r[24]+c->r[3]); // 80178338
  cmpu(c,0,c->r[0],0x00000010u); // 8017833C
  if (!crb(c,0)) { goto L_8017834C; } // 80178340
  c->r[0]=0u+0x00000010u; // 80178344
  W32(c->r[24]+c->r[3],c->r[0]); // 80178348
L_8017834C:;
  c->r[24]=R32(c->r[13]+0xFFFFDBD8u); // 8017834C
  cmps(c,0,(int32_t)c->r[24],0); // 80178350
  if (crb(c,2)) { goto L_80178398; } // 80178354
  c->lr=0x8017835Cu; f_801783E4(c); // 80178358
  c->r[27]=c->r[3]|c->r[3]; // 8017835C
  c->lr=0x80178364u; f_801783B4(c); // 80178360
  c->r[4]=(uint32_t)((int32_t)c->r[27]*(int32_t)2600); // 80178364
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 80178368
  c->r[5]=0u+0x80180000u; // 8017836C
  c->r[3]=rotl(c->r[27],2)&0xFFFFFFFCu; // 80178370
  c->r[4]=c->r[24]+c->r[4]; // 80178374
  c->r[5]=c->r[5]+0xFFFF83B0u; // 80178378
  c->r[4]=c->r[4]+c->r[0]; // 8017837C
  W32(c->r[4]+0x000001CCu,c->r[5]); // 80178380
  c->r[0]=R32(c->r[24]+c->r[3]); // 80178384
  cmpu(c,0,c->r[0],0x00000024u); // 80178388
  if (!crb(c,0)) { goto L_80178398; } // 8017838C
  c->r[0]=0u+0x00000024u; // 80178390
  W32(c->r[24]+c->r[3],c->r[0]); // 80178394
L_80178398:;
  c->r[3]=c->r[26]|c->r[26]; // 80178398
  {uint32_t ea=c->r[1]+0x00000020u; for(int i=24;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 8017839C
  c->r[0]=R32(c->r[1]+0x00000044u); // 801783A0
  c->lr=c->r[0]; // 801783A4
  c->r[1]=c->r[1]+0x00000040u; // 801783A8
  return; // 801783AC
}

// fn_801783B0
void f_801783B0(Ctx* __restrict c) {
  trace_call(0x801783B0u);
  f_8017A3C0(c); return; // 801783B0
}

// fn_801783B4
void f_801783B4(Ctx* __restrict c) {
  trace_call(0x801783B4u);
  c->r[0]=R8(c->r[13]+0xFFFFCC9Cu); // 801783B4
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 801783B8
  if (!crb(c,2)) { goto L_801783DC; } // 801783BC
  c->r[4]=R32(c->r[13]+0xFFFFBCC8u); // 801783C0
  c->r[0]=0u+0x00000001u; // 801783C4
  W32(c->r[13]+0xFFFFBDFCu,c->r[4]); // 801783C8
  c->r[3]=c->r[4]+0x00000001u; // 801783CC
  W32(c->r[13]+0xFFFFBCC8u,c->r[3]); // 801783D0
  W32(c->r[13]+0xFFFFCC98u,c->r[4]); // 801783D4
  W8(c->r[13]+0xFFFFCC9Cu,c->r[0]); // 801783D8
L_801783DC:;
  c->r[3]=R32(c->r[13]+0xFFFFCC98u); // 801783DC
  return; // 801783E0
}

// fn_801783E4
void f_801783E4(Ctx* __restrict c) {
  trace_call(0x801783E4u);
  c->r[0]=R8(c->r[13]+0xFFFFCCA4u); // 801783E4
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 801783E8
  if (!crb(c,2)) { goto L_8017840C; } // 801783EC
  c->r[4]=R32(c->r[13]+0xFFFFBE94u); // 801783F0
  c->r[0]=0u+0x00000001u; // 801783F4
  W32(c->r[13]+0xFFFFBE98u,c->r[4]); // 801783F8
  c->r[3]=c->r[4]+0x00000001u; // 801783FC
  W32(c->r[13]+0xFFFFBE94u,c->r[3]); // 80178400
  W32(c->r[13]+0xFFFFCCA0u,c->r[4]); // 80178404
  W8(c->r[13]+0xFFFFCCA4u,c->r[0]); // 80178408
L_8017840C:;
  c->r[3]=R32(c->r[13]+0xFFFFCCA0u); // 8017840C
  return; // 80178410
}

// fn_80178414
void f_80178414(Ctx* __restrict c) {
  trace_call(0x80178414u);
  f_80179FB8(c); return; // 80178414
}

// fn_80178418
void f_80178418(Ctx* __restrict c) {
  trace_call(0x80178418u);
  c->r[0]=R8(c->r[13]+0xFFFFCC94u); // 80178418
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 8017841C
  if (!crb(c,2)) { goto L_80178440; } // 80178420
  c->r[4]=R32(c->r[13]+0xFFFFBCC8u); // 80178424
  c->r[0]=0u+0x00000001u; // 80178428
  W32(c->r[13]+0xFFFFBDFCu,c->r[4]); // 8017842C
  c->r[3]=c->r[4]+0x00000001u; // 80178430
  W32(c->r[13]+0xFFFFBCC8u,c->r[3]); // 80178434
  W32(c->r[13]+0xFFFFCC90u,c->r[4]); // 80178438
  W8(c->r[13]+0xFFFFCC94u,c->r[0]); // 8017843C
L_80178440:;
  c->r[3]=R32(c->r[13]+0xFFFFCC90u); // 80178440
  return; // 80178444
}

// fn_80178448
void f_80178448(Ctx* __restrict c) {
  trace_call(0x80178448u);
  f_80179E10(c); return; // 80178448
}

// fn_8017844C
void f_8017844C(Ctx* __restrict c) {
  trace_call(0x8017844Cu);
  c->r[0]=R8(c->r[13]+0xFFFFCC84u); // 8017844C
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 80178450
  if (!crb(c,2)) { goto L_80178474; } // 80178454
  c->r[4]=R32(c->r[13]+0xFFFFBCC8u); // 80178458
  c->r[0]=0u+0x00000001u; // 8017845C
  W32(c->r[13]+0xFFFFBDFCu,c->r[4]); // 80178460
  c->r[3]=c->r[4]+0x00000001u; // 80178464
  W32(c->r[13]+0xFFFFBCC8u,c->r[3]); // 80178468
  W32(c->r[13]+0xFFFFCC80u,c->r[4]); // 8017846C
  W8(c->r[13]+0xFFFFCC84u,c->r[0]); // 80178470
L_80178474:;
  c->r[3]=R32(c->r[13]+0xFFFFCC80u); // 80178474
  return; // 80178478
}

// fn_8017847C
void f_8017847C(Ctx* __restrict c) {
  trace_call(0x8017847Cu);
  f_80179BF0(c); return; // 8017847C
}

// fn_80178480
void f_80178480(Ctx* __restrict c) {
  trace_call(0x80178480u);
  c->r[0]=R8(c->r[13]+0xFFFFCC7Cu); // 80178480
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 80178484
  if (!crb(c,2)) { goto L_801784A8; } // 80178488
  c->r[4]=R32(c->r[13]+0xFFFFBCC8u); // 8017848C
  c->r[0]=0u+0x00000001u; // 80178490
  W32(c->r[13]+0xFFFFBDFCu,c->r[4]); // 80178494
  c->r[3]=c->r[4]+0x00000001u; // 80178498
  W32(c->r[13]+0xFFFFBCC8u,c->r[3]); // 8017849C
  W32(c->r[13]+0xFFFFCC78u,c->r[4]); // 801784A0
  W8(c->r[13]+0xFFFFCC7Cu,c->r[0]); // 801784A4
L_801784A8:;
  c->r[3]=R32(c->r[13]+0xFFFFCC78u); // 801784A8
  return; // 801784AC
}

// fn_801784B0
void f_801784B0(Ctx* __restrict c) {
  trace_call(0x801784B0u);
  f_801798E0(c); return; // 801784B0
}

// fn_801784B4
void f_801784B4(Ctx* __restrict c) {
  trace_call(0x801784B4u);
  c->r[0]=R8(c->r[13]+0xFFFFCC74u); // 801784B4
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 801784B8
  if (!crb(c,2)) { goto L_801784DC; } // 801784BC
  c->r[4]=R32(c->r[13]+0xFFFFBCC8u); // 801784C0
  c->r[0]=0u+0x00000001u; // 801784C4
  W32(c->r[13]+0xFFFFBDFCu,c->r[4]); // 801784C8
  c->r[3]=c->r[4]+0x00000001u; // 801784CC
  W32(c->r[13]+0xFFFFBCC8u,c->r[3]); // 801784D0
  W32(c->r[13]+0xFFFFCC70u,c->r[4]); // 801784D4
  W8(c->r[13]+0xFFFFCC74u,c->r[0]); // 801784D8
L_801784DC:;
  c->r[3]=R32(c->r[13]+0xFFFFCC70u); // 801784DC
  return; // 801784E0
}

// fn_801784E4
void f_801784E4(Ctx* __restrict c) {
  trace_call(0x801784E4u);
  f_801791F8(c); return; // 801784E4
}

// fn_801784E8
void f_801784E8(Ctx* __restrict c) {
  trace_call(0x801784E8u);
  c->r[0]=R8(c->r[13]+0xFFFFCC8Cu); // 801784E8
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 801784EC
  if (!crb(c,2)) { goto L_80178510; } // 801784F0
  c->r[4]=R32(c->r[13]+0xFFFFBCC8u); // 801784F4
  c->r[0]=0u+0x00000001u; // 801784F8
  W32(c->r[13]+0xFFFFBDFCu,c->r[4]); // 801784FC
  c->r[3]=c->r[4]+0x00000001u; // 80178500
  W32(c->r[13]+0xFFFFBCC8u,c->r[3]); // 80178504
  W32(c->r[13]+0xFFFFCC88u,c->r[4]); // 80178508
  W8(c->r[13]+0xFFFFCC8Cu,c->r[0]); // 8017850C
L_80178510:;
  c->r[3]=R32(c->r[13]+0xFFFFCC88u); // 80178510
  return; // 80178514
}

// fn_80178518
void f_80178518(Ctx* __restrict c) {
  trace_call(0x80178518u);
  f_80179810(c); return; // 80178518
}

// fn_8017851C
void f_8017851C(Ctx* __restrict c) {
  trace_call(0x8017851Cu);
  c->r[0]=R8(c->r[13]+0xFFFFCC6Cu); // 8017851C
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 80178520
  if (!crb(c,2)) { goto L_80178544; } // 80178524
  c->r[4]=R32(c->r[13]+0xFFFFBCC8u); // 80178528
  c->r[0]=0u+0x00000001u; // 8017852C
  W32(c->r[13]+0xFFFFBDFCu,c->r[4]); // 80178530
  c->r[3]=c->r[4]+0x00000001u; // 80178534
  W32(c->r[13]+0xFFFFBCC8u,c->r[3]); // 80178538
  W32(c->r[13]+0xFFFFCC68u,c->r[4]); // 8017853C
  W8(c->r[13]+0xFFFFCC6Cu,c->r[0]); // 80178540
L_80178544:;
  c->r[3]=R32(c->r[13]+0xFFFFCC68u); // 80178544
  return; // 80178548
}

// fn_8017854C
void f_8017854C(Ctx* __restrict c) {
  trace_call(0x8017854Cu);
  f_8017964C(c); return; // 8017854C
}

// fn_80178550
void f_80178550(Ctx* __restrict c) {
  trace_call(0x80178550u);
  c->r[0]=R8(c->r[13]+0xFFFFCC64u); // 80178550
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 80178554
  if (!crb(c,2)) { goto L_80178578; } // 80178558
  c->r[4]=R32(c->r[13]+0xFFFFBCC8u); // 8017855C
  c->r[0]=0u+0x00000001u; // 80178560
  W32(c->r[13]+0xFFFFBDFCu,c->r[4]); // 80178564
  c->r[3]=c->r[4]+0x00000001u; // 80178568
  W32(c->r[13]+0xFFFFBCC8u,c->r[3]); // 8017856C
  W32(c->r[13]+0xFFFFCC60u,c->r[4]); // 80178570
  W8(c->r[13]+0xFFFFCC64u,c->r[0]); // 80178574
L_80178578:;
  c->r[3]=R32(c->r[13]+0xFFFFCC60u); // 80178578
  return; // 8017857C
}

// fn_80178580
void f_80178580(Ctx* __restrict c) {
  trace_call(0x80178580u);
  f_801792B8(c); return; // 80178580
}

// fn_80178584
void f_80178584(Ctx* __restrict c) {
  trace_call(0x80178584u);
  f_80178DE4(c); return; // 80178584
}

// fn_80178588
void f_80178588(Ctx* __restrict c) {
  trace_call(0x80178588u);
  f_80178AC4(c); return; // 80178588
}

// fn_8017858C
void f_8017858C(Ctx* __restrict c) {
  trace_call(0x8017858Cu);
  f_8005E338(c); return; // 8017858C
}

// fn_80178590
void f_80178590(Ctx* __restrict c) {
  trace_call(0x80178590u);
  f_8005E324(c); return; // 80178590
}

// fn_80178594
void f_80178594(Ctx* __restrict c) {
  trace_call(0x80178594u);
  f_8005E310(c); return; // 80178594
}

// fn_80178598
void f_80178598(Ctx* __restrict c) {
  trace_call(0x80178598u);
  f_8005E2FC(c); return; // 80178598
}

// fn_8017859C
void f_8017859C(Ctx* __restrict c) {
  trace_call(0x8017859Cu);
  f_8005E34C(c); return; // 8017859C
}

// fn_801785A0
void f_801785A0(Ctx* __restrict c) {
  trace_call(0x801785A0u);
  f_8005E360(c); return; // 801785A0
}

// fn_801785A4
void f_801785A4(Ctx* __restrict c) {
  trace_call(0x801785A4u);
  f_8005D47C(c); return; // 801785A4
}

// fn_801785A8
void f_801785A8(Ctx* __restrict c) {
  trace_call(0x801785A8u);
  f_8005D468(c); return; // 801785A8
}

// fn_801785AC
void f_801785AC(Ctx* __restrict c) {
  trace_call(0x801785ACu);
  f_8005BEDC(c); return; // 801785AC
}

// fn_801785B0
void f_801785B0(Ctx* __restrict c) {
  trace_call(0x801785B0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801785B0
  c->r[0]=c->lr; // 801785B4
  cmps(c,0,(int32_t)c->r[3],0); // 801785B8
  W32(c->r[1]+0x00000014u,c->r[0]); // 801785BC
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 801785C0
  c->r[30]=c->r[3]|c->r[3]; // 801785C4
  c->r[31]=c->r[4]|c->r[4]; // 801785C8
  if (crb(c,2)) { goto L_801785EC; } // 801785CC
  if (crb(c,2)) { goto L_801785DC; } // 801785D0
  c->r[4]=0u+0x00000000u; // 801785D4
  c->lr=0x801785DCu; f_8005BD00(c); // 801785D8
L_801785DC:;
  cmps(c,0,(int32_t)c->r[31],0); // 801785DC
  if (!crb(c,1)) { goto L_801785EC; } // 801785E0
  c->r[3]=c->r[30]|c->r[30]; // 801785E4
  c->lr=0x801785ECu; f_8005328C(c); // 801785E8
L_801785EC:;
  c->r[3]=c->r[30]|c->r[30]; // 801785EC
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 801785F0
  c->r[0]=R32(c->r[1]+0x00000014u); // 801785F4
  c->lr=c->r[0]; // 801785F8
  c->r[1]=c->r[1]+0x00000010u; // 801785FC
  return; // 80178600
}

// fn_80178604
void f_80178604(Ctx* __restrict c) {
  trace_call(0x80178604u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80178604
  c->r[0]=c->lr; // 80178608
  W32(c->r[1]+0x00000024u,c->r[0]); // 8017860C
  c->r[11]=c->r[1]+0x00000020u; // 80178610
  c->lr=0x80178618u; { W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80178614
  c->r[29]=c->r[3]|c->r[3]; // 80178618
  c->r[4]=0u+0x00000000u; // 8017861C
  c->r[5]=0u+0x00000004u; // 80178620
  c->r[3]=c->r[3]+0x000005E8u; // 80178624
  c->lr=0x8017862Cu; f_800043EC(c); // 80178628
  c->r[3]=c->r[29]|c->r[29]; // 8017862C
  c->r[4]=0u+0x00000000u; // 80178630
  c->lr=0x80178638u; f_8005E814(c); // 80178634
  c->r[3]=c->r[29]|c->r[29]; // 80178638
  c->lr=0x80178640u; f_8005EAA0(c); // 8017863C
  {uint32_t ea=c->r[2]+0xFFFFBCF8u; c->f[1]=c->ps1[1]=RF32(ea);} // 80178640
  c->lr=0x80178648u; f_80101528(c); // 80178644
  c->r[3]=c->r[29]|c->r[29]; // 80178648
  c->lr=0x80178650u; f_8005EAA0(c); // 8017864C
  c->r[4]=0u+0x00310000u; // 80178650
  c->r[31]=0u+0x80760000u; // 80178654
  c->r[0]=c->r[4]+0x00000004u; // 80178658
  W32(c->r[3]+0x000003F4u,c->r[0]); // 8017865C
  c->r[0]=0u+0x00000000u; // 80178660
  c->r[3]=c->r[29]+0x00000614u; // 80178664
  W32(c->r[29]+0x0000060Cu,c->r[0]); // 80178668
  c->r[4]=c->r[31]+0xFFFF9C78u; // 8017866C
  c->lr=0x80178674u; f_8005DC84(c); // 80178670
  {uint32_t ea=c->r[2]+0xFFFFBD00u; c->f[0]=c->ps1[0]=RF32(ea);} // 80178674
  c->r[30]=0u+0x00000000u; // 80178678
  {uint32_t ea=c->r[2]+0xFFFFBCFCu; c->f[1]=c->ps1[1]=RF32(ea);} // 8017867C
  {uint32_t ea=c->r[29]+0x00000620u; WF32(ea,c->f[1]);} // 80178680
  {uint32_t ea=c->r[29]+0x00000624u; WF32(ea,c->f[0]);} // 80178684
  {uint32_t ea=c->r[29]+0x00000628u; WF32(ea,c->f[0]);} // 80178688
L_8017868C:;
  c->r[3]=c->r[29]|c->r[29]; // 8017868C
  c->r[4]=c->r[31]+0xFFFF9C78u; // 80178690
  c->r[5]=0u+0x00000001u; // 80178694
  c->lr=0x8017869Cu; f_8017A9DC(c); // 80178698
  c->r[30]=c->r[30]+0x00000001u; // 8017869C
  cmps(c,0,(int32_t)c->r[30],4); // 801786A0
  if (crb(c,0)) { IRQCHK(c); goto L_8017868C; } // 801786A4
  c->r[11]=c->r[1]+0x00000020u; // 801786A8
  c->lr=0x801786B0u; { c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801786AC
  c->r[0]=R32(c->r[1]+0x00000024u); // 801786B0
  c->lr=c->r[0]; // 801786B4
  c->r[1]=c->r[1]+0x00000020u; // 801786B8
  return; // 801786BC
}

// fn_801786C0
void f_801786C0(Ctx* __restrict c) {
  trace_call(0x801786C0u);
  {uint32_t ea=c->r[1]+0xFFFFFF90u; W32(ea,c->r[1]); c->r[1]=ea;} // 801786C0
  c->r[0]=c->lr; // 801786C4
  W32(c->r[1]+0x00000074u,c->r[0]); // 801786C8
  {uint32_t ea=c->r[1]+0x00000050u; for(int i=24;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 801786CC
  c->r[30]=c->r[3]|c->r[3]; // 801786D0
  c->r[31]=c->r[4]|c->r[4]; // 801786D4
  c->r[12]=R32(c->r[3]+0x0000001Cu); // 801786D8
  c->r[12]=R32(c->r[12]+0x0000014Cu); // 801786DC
  c->ctr=c->r[12]; // 801786E0
  if (true) { c->lr=0x801786E8u; dispatch(c,c->ctr); } // 801786E4
  c->r[27]=c->r[3]|c->r[3]; // 801786E8
  c->r[4]=0u+0x00000000u; // 801786EC
  c->r[5]=0u+0x00000028u; // 801786F0
  c->lr=0x801786F8u; f_800043EC(c); // 801786F4
  c->r[0]=0u+0x00000002u; // 801786F8
  W32(c->r[27]+0x00000004u,c->r[0]); // 801786FC
  c->r[4]=0u+0x00000000u; // 80178700
  c->r[28]=R32(c->r[30]+0x00000434u); // 80178704
  c->r[3]=c->r[28]+0x00000030u; // 80178708
  c->lr=0x80178710u; f_802D94E8(c); // 8017870C
  {uint32_t ea=c->r[30]+0x00000624u; WF32(ea,c->f[1]);} // 80178710
  c->r[3]=c->r[28]+0x00000030u; // 80178714
  c->r[4]=0u+0x00000001u; // 80178718
  c->lr=0x80178720u; f_802D94E8(c); // 8017871C
  {uint32_t ea=c->r[30]+0x00000628u; WF32(ea,c->f[1]);} // 80178720
  c->r[3]=c->r[31]|c->r[31]; // 80178724
  c->lr=0x8017872Cu; f_802D93E8(c); // 80178728
  cmps(c,0,(int32_t)c->r[3],0); // 8017872C
  if (crb(c,2)) { goto L_801788AC; } // 80178730
  c->r[3]=c->r[31]|c->r[31]; // 80178734
  c->r[4]=0u+0x00000008u; // 80178738
  c->lr=0x80178740u; f_802D9584(c); // 8017873C
  W32(c->r[27]+0x00000000u,c->r[3]); // 80178740
  c->lr=0x80178748u; f_80177490(c); // 80178744
  W32(c->r[27]+0x00000004u,c->r[3]); // 80178748
  c->r[0]=R8(c->r[13]+0xFFFFBB85u); // 8017874C
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 80178750
  if (!crb(c,2)) { goto L_80178798; } // 80178754
  c->r[28]=0u+0x80730000u; // 80178758
  c->r[3]=c->r[28]+0x00005908u; // 8017875C
  c->lr=0x80178764u; f_8009822C(c); // 80178760
  c->r[6]=0u+0x806D0000u; // 80178764
  c->r[4]=0u+0x80050000u; // 80178768
  c->r[6]=c->r[6]+0xFFFFC3F4u; // 8017876C
  c->r[3]=c->r[28]+0x00005908u; // 80178770
  c->r[0]=c->r[6]+0x00000028u; // 80178774
  c->r[5]=0u+0x80750000u; // 80178778
  W32(c->r[3]+0x000000A4u,c->r[6]); // 8017877C
  c->r[4]=c->r[4]+0xFFFF9FD4u; // 80178780
  c->r[5]=c->r[5]+0x00004980u; // 80178784
  W32(c->r[3]+0x000000A8u,c->r[0]); // 80178788
  c->lr=0x80178790u; f_803A92B8(c); // 8017878C
  c->r[0]=0u+0x00000001u; // 80178790
  W8(c->r[13]+0xFFFFBB85u,c->r[0]); // 80178794
L_80178798:;
  c->r[4]=R32(c->r[30]+0x00000448u); // 80178798
  c->r[3]=0u+0x80730000u; // 8017879C
  c->r[3]=c->r[3]+0x00005908u; // 801787A0
  c->r[4]=R32(c->r[4]+0x0000000Cu); // 801787A4
  c->lr=0x801787ACu; f_800992D4(c); // 801787A8
  c->r[28]=0u+0x80690000u; // 801787AC
  c->r[26]=c->r[3]|c->r[3]; // 801787B0
  c->r[28]=c->r[28]+0x000017B4u; // 801787B4
  c->r[25]=0u+0x00000000u; // 801787B8
  c->r[29]=0u+0x00000000u; // 801787BC
L_801787C0:;
  c->r[3]=c->r[31]|c->r[31]; // 801787C0
  c->r[4]=c->r[25]+0x0000000Du; // 801787C4
  c->lr=0x801787CCu; f_802D9584(c); // 801787C8
  c->r[24]=c->r[3]|c->r[3]; // 801787CC
  c->lr=0x801787D4u; f_803A91D4(c); // 801787D0
  cmps(c,0,(int32_t)c->r[3],0); // 801787D4
  if (crb(c,2)) { goto L_8017889C; } // 801787D8
  c->r[4]=c->r[24]|c->r[24]; // 801787DC
  c->r[3]=c->r[1]+0x00000008u; // 801787E0
  c->r[5]=0u+0x00000000u; // 801787E4
  c->r[6]=0u+0x00000000u; // 801787E8
  c->r[7]=0u+0x00000000u; // 801787EC
  c->lr=0x801787F4u; f_800A7BF4(c); // 801787F0
  c->r[27]=R32(c->r[1]+0x00000008u); // 801787F4
  c->r[4]=c->r[28]+0x00000001u; // 801787F8
  c->r[3]=c->r[27]|c->r[27]; // 801787FC
  c->lr=0x80178804u; f_803B393C(c); // 80178800
  cmps(c,0,(int32_t)c->r[3],0); // 80178804
  if (!crb(c,2)) { goto L_80178820; } // 80178808
  c->r[3]=c->r[1]+0x00000008u; // 8017880C
  c->r[4]=0u+0x00000001u; // 80178810
  c->lr=0x80178818u; f_8007D0E0(c); // 80178814
  {uint32_t ea=c->r[30]+0x00000620u; WF32(ea,c->f[1]);} // 80178818
  goto L_8017889C; // 8017881C
L_80178820:;
  c->r[3]=c->r[27]|c->r[27]; // 80178820
  c->r[4]=c->r[28]+0x00000007u; // 80178824
  c->lr=0x8017882Cu; f_803B393C(c); // 80178828
  cmps(c,0,(int32_t)c->r[3],0); // 8017882C
  if (!crb(c,2)) { goto L_8017884C; } // 80178830
  c->r[3]=c->r[1]+0x00000008u; // 80178834
  c->r[4]=0u+0x00000001u; // 80178838
  c->lr=0x80178840u; f_8007D0E0(c); // 8017883C
  {uint32_t ea=c->r[30]+0x00000628u; WF32(ea,c->f[1]);} // 80178840
  {uint32_t ea=c->r[30]+0x00000624u; WF32(ea,c->f[1]);} // 80178844
  goto L_8017889C; // 80178848
L_8017884C:;
  c->r[3]=c->r[27]|c->r[27]; // 8017884C
  c->r[4]=c->r[28]+0x00000015u; // 80178850
  c->lr=0x80178858u; f_803B393C(c); // 80178854
  cmps(c,0,(int32_t)c->r[3],0); // 80178858
  if (!crb(c,2)) { goto L_80178884; } // 8017885C
  c->r[3]=c->r[1]+0x00000008u; // 80178860
  c->r[4]=0u+0x00000001u; // 80178864
  c->lr=0x8017886Cu; f_8007D0E0(c); // 80178868
  {uint32_t ea=c->r[30]+0x00000624u; WF32(ea,c->f[1]);} // 8017886C
  c->r[3]=c->r[1]+0x00000008u; // 80178870
  c->r[4]=0u+0x00000002u; // 80178874
  c->lr=0x8017887Cu; f_8007D0E0(c); // 80178878
  {uint32_t ea=c->r[30]+0x00000628u; WF32(ea,c->f[1]);} // 8017887C
  goto L_8017889C; // 80178880
L_80178884:;
  c->r[5]=c->r[30]+c->r[29]; // 80178884
  c->r[3]=c->r[26]|c->r[26]; // 80178888
  c->r[4]=c->r[24]|c->r[24]; // 8017888C
  c->r[6]=0u+0x00000000u; // 80178890
  c->r[5]=c->r[5]+0x000005C8u; // 80178894
  c->lr=0x8017889Cu; f_802D24C8(c); // 80178898
L_8017889C:;
  c->r[25]=c->r[25]+0x00000001u; // 8017889C
  c->r[29]=c->r[29]+0x00000004u; // 801788A0
  cmps(c,0,(int32_t)c->r[25],8); // 801788A4
  if (crb(c,0)) { IRQCHK(c); goto L_801787C0; } // 801788A8
L_801788AC:;
  {uint32_t ea=c->r[1]+0x00000050u; for(int i=24;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 801788AC
  c->r[0]=R32(c->r[1]+0x00000074u); // 801788B0
  c->lr=c->r[0]; // 801788B4
  c->r[1]=c->r[1]+0x00000070u; // 801788B8
  return; // 801788BC
}

// fn_801788C0
void f_801788C0(Ctx* __restrict c) {
  trace_call(0x801788C0u);
  c->r[3]=c->r[3]+0x000005C0u; // 801788C0
  return; // 801788C4
}

// fn_801788C8
void f_801788C8(Ctx* __restrict c) {
  trace_call(0x801788C8u);
  return; // 801788C8
}

// fn_801788CC
void f_801788CC(Ctx* __restrict c) {
  trace_call(0x801788CCu);
  return; // 801788CC
}

// fn_801788D0
void f_801788D0(Ctx* __restrict c) {
  trace_call(0x801788D0u);
  return; // 801788D0
}

// fn_801788D4
void f_801788D4(Ctx* __restrict c) {
  trace_call(0x801788D4u);
  return; // 801788D4
}

// fn_801788D8
void f_801788D8(Ctx* __restrict c) {
  trace_call(0x801788D8u);
  return; // 801788D8
}

// fn_801788DC
void f_801788DC(Ctx* __restrict c) {
  trace_call(0x801788DCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801788DC
  c->r[0]=c->lr; // 801788E0
  W32(c->r[1]+0x00000014u,c->r[0]); // 801788E4
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 801788E8
  c->r[30]=c->r[3]|c->r[3]; // 801788EC
  c->r[3]=c->r[4]|c->r[4]; // 801788F0
  c->lr=0x801788F8u; f_8017751C(c); // 801788F4
  cmps(c,0,(int32_t)c->r[3],12); // 801788F8
  c->r[31]=c->r[3]|c->r[3]; // 801788FC
  if (crb(c,2)) { goto L_80178938; } // 80178900
  c->r[4]=c->r[31]|c->r[31]; // 80178904
  c->r[3]=c->r[30]+0x000005E8u; // 80178908
  c->r[5]=0u+0x00000001u; // 8017890C
  c->lr=0x80178914u; f_8005DCA0(c); // 80178910
  c->r[4]=c->r[31]+0xFFFFFFFDu; // 80178914
  cmpu(c,0,c->r[4],0x00000007u); // 80178918
  if (crb(c,1)) { goto L_80178938; } // 8017891C
  c->r[3]=c->r[30]|c->r[30]; // 80178920
  c->lr=0x80178928u; f_8017A834(c); // 80178924
  c->r[4]=c->r[31]|c->r[31]; // 80178928
  c->r[3]=c->r[30]+0x000005E8u; // 8017892C
  c->r[5]=0u+0x00000000u; // 80178930
  c->lr=0x80178938u; f_8005DCA0(c); // 80178934
L_80178938:;
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 80178938
  c->r[0]=R32(c->r[1]+0x00000014u); // 8017893C
  c->lr=c->r[0]; // 80178940
  c->r[1]=c->r[1]+0x00000010u; // 80178944
  return; // 80178948
}

// fn_8017894C
void f_8017894C(Ctx* __restrict c) {
  trace_call(0x8017894Cu);
  return; // 8017894C
}

// fn_80178950
void f_80178950(Ctx* __restrict c) {
  trace_call(0x80178950u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80178950
  c->r[0]=c->lr; // 80178954
  W32(c->r[1]+0x00000014u,c->r[0]); // 80178958
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 8017895C
  c->r[30]=c->r[3]|c->r[3]; // 80178960
  c->r[12]=R32(c->r[3]+0x0000001Cu); // 80178964
  c->r[12]=R32(c->r[12]+0x00000110u); // 80178968
  c->ctr=c->r[12]; // 8017896C
  if (true) { c->lr=0x80178974u; dispatch(c,c->ctr); } // 80178970
  cmps(c,0,(int32_t)c->r[3],0); // 80178974
  if (crb(c,2)) { goto L_80178A00; } // 80178978
  c->r[3]=c->r[30]|c->r[30]; // 8017897C
  c->lr=0x80178984u; f_80060974(c); // 80178980
  c->r[12]=R32(c->r[30]+0x0000001Cu); // 80178984
  c->r[31]=c->r[3]|c->r[3]; // 80178988
  c->r[3]=c->r[30]|c->r[30]; // 8017898C
  c->r[12]=R32(c->r[12]+0x00000100u); // 80178990
  c->ctr=c->r[12]; // 80178994
  if (true) { c->lr=0x8017899Cu; dispatch(c,c->ctr); } // 80178998
  cmps(c,0,(int32_t)c->r[3],0); // 8017899C
  if (!crb(c,2)) { goto L_801789C0; } // 801789A0
  c->r[0]=0u+0x00000000u; // 801789A4
  W32(c->r[30]+0x0000055Cu,c->r[0]); // 801789A8
  c->r[3]=c->r[30]|c->r[30]; // 801789AC
  c->lr=0x801789B4u; f_8017A7D4(c); // 801789B0
  c->r[3]=c->r[30]|c->r[30]; // 801789B4
  c->lr=0x801789BCu; f_8007D624(c); // 801789B8
  goto L_80178A00; // 801789BC
L_801789C0:;
  c->r[0]=R32(c->r[30]+0x000005F0u); // 801789C0
  cmps(c,0,(int32_t)c->r[0],1); // 801789C4
  if (crb(c,2)) { goto L_80178A00; } // 801789C8
  cmps(c,0,(int32_t)c->r[31],0); // 801789CC
  if (!crb(c,2)) { goto L_801789E8; } // 801789D0
  c->r[0]=0u+0x000059F7u; // 801789D4
  W32(c->r[30]+0x00000608u,c->r[0]); // 801789D8
  c->r[3]=c->r[30]|c->r[30]; // 801789DC
  c->lr=0x801789E4u; f_80178A14(c); // 801789E0
  goto L_80178A00; // 801789E4
L_801789E8:;
  cmps(c,0,(int32_t)c->r[31],1); // 801789E8
  if (crb(c,0)) { goto L_80178A00; } // 801789EC
  c->r[0]=0u+0x000059F8u; // 801789F0
  W32(c->r[30]+0x00000608u,c->r[0]); // 801789F4
  c->r[3]=c->r[30]|c->r[30]; // 801789F8
  c->lr=0x80178A00u; f_80178A14(c); // 801789FC
L_80178A00:;
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 80178A00
  c->r[0]=R32(c->r[1]+0x00000014u); // 80178A04
  c->lr=c->r[0]; // 80178A08
  c->r[1]=c->r[1]+0x00000010u; // 80178A0C
  return; // 80178A10
}

// fn_80178A14
void f_80178A14(Ctx* __restrict c) {
  trace_call(0x80178A14u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80178A14
  c->r[0]=c->lr; // 80178A18
  W32(c->r[1]+0x00000044u,c->r[0]); // 80178A1C
  {uint32_t ea=c->r[1]+0x00000030u; for(int i=28;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 80178A20
  c->r[31]=c->r[1]|c->r[1]; // 80178A24
  c->r[28]=c->r[3]|c->r[3]; // 80178A28
  c->lr=0x80178A30u; f_801784E8(c); // 80178A2C
  c->r[4]=c->r[3]|c->r[3]; // 80178A30
  c->r[3]=c->r[28]|c->r[28]; // 80178A34
  c->lr=0x80178A3Cu; f_80062F4C(c); // 80178A38
  c->r[0]=R8(c->r[28]+0x00000010u); // 80178A3C
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80178A40
  c->r[3]=c->r[28]+c->r[0]; // 80178A44
  c->r[29]=R32(c->r[3]+0x00000014u); // 80178A48
  cmps(c,0,(int32_t)c->r[29],0); // 80178A4C
  if (crb(c,2)) { goto L_80178A78; } // 80178A50
  c->r[30]=0u+0x00000000u; // 80178A54
  W32(c->r[31]+0x00000024u,c->r[1]); // 80178A58
  W8(c->r[31]+0x00000008u,c->r[30]); // 80178A5C
  c->lr=0x80178A64u; f_801784E8(c); // 80178A60
  W32(c->r[29]+0x00000000u,c->r[3]); // 80178A64
  c->r[0]=c->r[13]+0xFFFF8ABCu; // 80178A68
  W32(c->r[29]+0x00000004u,c->r[0]); // 80178A6C
  W32(c->r[29]+0x00000008u,c->r[30]); // 80178A70
  W32(c->r[29]+0x0000000Cu,c->r[30]); // 80178A74
L_80178A78:;
  W32(c->r[28]+0x00000008u,c->r[29]); // 80178A78
  c->r[0]=0u+0x00000000u; // 80178A7C
  c->r[3]=c->r[28]|c->r[28]; // 80178A80
  c->r[4]=c->r[29]|c->r[29]; // 80178A84
  W32(c->r[29]+0x00000008u,c->r[0]); // 80178A88
  c->r[0]=R32(c->r[28]+0x00000004u); // 80178A8C
  W32(c->r[28]+0x0000000Cu,c->r[0]); // 80178A90
  c->lr=0x80178A98u; f_8006306C(c); // 80178A94
  c->r[0]=R32(c->r[28]+0x000005BCu); // 80178A98
  c->r[10]=c->r[31]|c->r[31]; // 80178A9C
  c->r[3]=c->r[29]|c->r[29]; // 80178AA0
  c->r[0]=c->r[0]|0x40000000u; // 80178AA4
  W32(c->r[28]+0x000005BCu,c->r[0]); // 80178AA8
  {uint32_t ea=c->r[10]+0x00000030u; for(int i=28;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 80178AAC
  c->r[10]=R32(c->r[1]+0x00000000u); // 80178AB0
  c->r[0]=R32(c->r[10]+0x00000004u); // 80178AB4
  c->r[1]=c->r[10]|c->r[10]; // 80178AB8
  c->lr=c->r[0]; // 80178ABC
  return; // 80178AC0
}

// fn_80178AC4
void f_80178AC4(Ctx* __restrict c) {
  trace_call(0x80178AC4u);
  {uint32_t ea=c->r[1]+0xFFFFFC10u; W32(ea,c->r[1]); c->r[1]=ea;} // 80178AC4
  c->r[0]=c->lr; // 80178AC8
  W32(c->r[1]+0x000003F4u,c->r[0]); // 80178ACC
  c->r[11]=c->r[1]+0x000003F0u; // 80178AD0
  c->lr=0x80178AD8u; { W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80178AD4
  c->r[31]=c->r[1]|c->r[1]; // 80178AD8
  c->r[12]=R32(c->r[3]+0x0000001Cu); // 80178ADC
  c->r[30]=c->r[3]|c->r[3]; // 80178AE0
  c->r[12]=R32(c->r[12]+0x0000014Cu); // 80178AE4
  c->ctr=c->r[12]; // 80178AE8
  if (true) { c->lr=0x80178AF0u; dispatch(c,c->ctr); } // 80178AEC
  c->r[28]=R32(c->r[3]+0x00000004u); // 80178AF0
  c->r[29]=0u+0x00000001u; // 80178AF4
  c->r[5]=0u+0x00000000u; // 80178AF8
  c->r[0]=0u+0xFFFFFFFFu; // 80178AFC
  W32(c->r[30]+0x000005ECu,c->r[29]); // 80178B00
  c->r[3]=c->r[30]|c->r[30]; // 80178B04
  c->r[4]=c->r[29]|c->r[29]; // 80178B08
  W32(c->r[30]+0x000005F0u,c->r[5]); // 80178B0C
  W32(c->r[30]+0x00000610u,c->r[0]); // 80178B10
  c->lr=0x80178B18u; f_8005E814(c); // 80178B14
  cmps(c,0,(int32_t)c->r[28],2); // 80178B18
  if (crb(c,2)) { goto L_80178B2C; } // 80178B1C
  cmps(c,0,(int32_t)c->r[28],0); // 80178B20
  if (crb(c,2)) { goto L_80178B38; } // 80178B24
  goto L_80178D20; // 80178B28
L_80178B2C:;
  c->r[3]=c->r[30]|c->r[30]; // 80178B2C
  c->lr=0x80178B34u; f_80094A38(c); // 80178B30
  goto L_80178D20; // 80178B34
L_80178B38:;
  c->r[3]=c->r[31]+0x00000090u; // 80178B38
  c->lr=0x80178B40u; f_8006585C(c); // 80178B3C
  c->r[12]=R32(c->r[30]+0x0000001Cu); // 80178B40
  c->r[4]=c->r[30]|c->r[30]; // 80178B44
  c->r[3]=c->r[31]+0x0000003Cu; // 80178B48
  c->r[12]=R32(c->r[12]+0x00000134u); // 80178B4C
  c->ctr=c->r[12]; // 80178B50
  if (true) { c->lr=0x80178B58u; dispatch(c,c->ctr); } // 80178B54
  c->r[4]=c->r[31]+0x0000003Cu; // 80178B58
  c->r[3]=0u+0x01310000u; // 80178B5C
  {uint32_t ea=c->r[2]+0xFFFFBCF8u; c->f[1]=c->ps1[1]=RF32(ea);} // 80178B60
  c->r[6]=c->r[4]|c->r[4]; // 80178B64
  c->r[3]=c->r[3]+0x00000004u; // 80178B68
  c->r[5]=c->r[31]+0x00000090u; // 80178B6C
  c->lr=0x80178B74u; f_8005EC34(c); // 80178B70
  cmps(c,0,(int32_t)c->r[3],0); // 80178B74
  if (crb(c,2)) { goto L_80178D00; } // 80178B78
  c->r[3]=c->r[31]+0x00000030u; // 80178B7C
  c->r[4]=c->r[31]+0x000000C4u; // 80178B80
  c->lr=0x80178B88u; f_8005FC20(c); // 80178B84
  c->r[0]=R8(c->r[13]+0xFFFFBCC0u); // 80178B88
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 80178B8C
  if (!crb(c,2)) { goto L_80178BB0; } // 80178B90
  {uint32_t ea=c->r[2]+0xFFFFBD04u; c->f[1]=c->ps1[1]=RF32(ea);} // 80178B94
  c->r[3]=0u+0x80740000u; // 80178B98
  {uint32_t ea=c->r[2]+0xFFFFBD08u; c->f[2]=c->ps1[2]=RF32(ea);} // 80178B9C
  c->r[3]=c->r[3]+0x00007490u; // 80178BA0
  c->f[3]=c->f[1]; // 80178BA4
  c->lr=0x80178BACu; f_8005FD70(c); // 80178BA8
  W8(c->r[13]+0xFFFFBCC0u,c->r[29]); // 80178BAC
L_80178BB0:;
  c->r[29]=0u+0x806A0000u; // 80178BB0
  c->r[3]=c->r[31]+0x0000000Cu; // 80178BB4
  c->r[4]=c->r[31]+0x00000030u; // 80178BB8
  c->r[5]=c->r[29]+0x00000AA8u; // 80178BBC
  c->lr=0x80178BC4u; f_8030E0BC(c); // 80178BC0
  c->r[3]=0u+0x80740000u; // 80178BC4
  c->r[4]=c->r[31]+0x00000018u; // 80178BC8
  c->r[3]=c->r[3]+0x00007490u; // 80178BCC
  c->r[5]=c->r[31]+0x0000000Cu; // 80178BD0
  c->lr=0x80178BD8u; f_8005FE58(c); // 80178BD4
  c->r[3]=c->r[31]+0x00000018u; // 80178BD8
  c->r[5]=c->r[29]+0x00000AA8u; // 80178BDC
  c->r[4]=c->r[3]|c->r[3]; // 80178BE0
  c->lr=0x80178BE8u; f_8030E0BC(c); // 80178BE4
  c->r[3]=c->r[31]+0x0000000Cu; // 80178BE8
  c->r[4]=c->r[31]+0x00000024u; // 80178BEC
  c->r[5]=c->r[31]+0x00000018u; // 80178BF0
  c->lr=0x80178BF8u; f_8005FE58(c); // 80178BF4
  {uint32_t ea=c->r[2]+0xFFFFBD04u; c->f[0]=c->ps1[0]=RF32(ea);} // 80178BF8
  c->r[3]=c->r[31]+0x00000060u; // 80178BFC
  {uint32_t ea=c->r[31]+0x00000018u; c->f[9]=c->ps1[9]=RF32(ea);} // 80178C00
  c->r[4]=c->r[31]+0x0000003Cu; // 80178C04
  {uint32_t ea=c->r[31]+0x0000001Cu; c->f[8]=c->ps1[8]=RF32(ea);} // 80178C08
  {uint32_t ea=c->r[31]+0x00000020u; c->f[7]=c->ps1[7]=RF32(ea);} // 80178C0C
  {uint32_t ea=c->r[31]+0x00000024u; c->f[6]=c->ps1[6]=RF32(ea);} // 80178C10
  {uint32_t ea=c->r[31]+0x00000028u; c->f[5]=c->ps1[5]=RF32(ea);} // 80178C14
  {uint32_t ea=c->r[31]+0x0000002Cu; c->f[4]=c->ps1[4]=RF32(ea);} // 80178C18
  {uint32_t ea=c->r[31]+0x0000000Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 80178C1C
  {uint32_t ea=c->r[31]+0x00000010u; c->f[2]=c->ps1[2]=RF32(ea);} // 80178C20
  {uint32_t ea=c->r[31]+0x00000014u; c->f[1]=c->ps1[1]=RF32(ea);} // 80178C24
  {uint32_t ea=c->r[31]+0x00000060u; WF32(ea,c->f[9]);} // 80178C28
  {uint32_t ea=c->r[31]+0x00000070u; WF32(ea,c->f[8]);} // 80178C2C
  {uint32_t ea=c->r[31]+0x00000080u; WF32(ea,c->f[7]);} // 80178C30
  {uint32_t ea=c->r[31]+0x00000064u; WF32(ea,c->f[6]);} // 80178C34
  {uint32_t ea=c->r[31]+0x00000074u; WF32(ea,c->f[5]);} // 80178C38
  {uint32_t ea=c->r[31]+0x00000084u; WF32(ea,c->f[4]);} // 80178C3C
  {uint32_t ea=c->r[31]+0x00000068u; WF32(ea,c->f[3]);} // 80178C40
  {uint32_t ea=c->r[31]+0x00000078u; WF32(ea,c->f[2]);} // 80178C44
  {uint32_t ea=c->r[31]+0x00000088u; WF32(ea,c->f[1]);} // 80178C48
  {uint32_t ea=c->r[31]+0x0000006Cu; WF32(ea,c->f[0]);} // 80178C4C
  {uint32_t ea=c->r[31]+0x0000007Cu; WF32(ea,c->f[0]);} // 80178C50
  {uint32_t ea=c->r[31]+0x0000008Cu; WF32(ea,c->f[0]);} // 80178C54
  c->lr=0x80178C5Cu; f_8005CDC8(c); // 80178C58
  c->r[12]=R32(c->r[30]+0x0000001Cu); // 80178C5C
  c->r[3]=c->r[30]|c->r[30]; // 80178C60
  c->r[4]=c->r[31]+0x00000060u; // 80178C64
  c->r[12]=R32(c->r[12]+0x00000020u); // 80178C68
  c->ctr=c->r[12]; // 80178C6C
  if (true) { c->lr=0x80178C74u; dispatch(c,c->ctr); } // 80178C70
  c->r[3]=c->r[30]|c->r[30]; // 80178C74
  c->r[4]=0u+0x00000000u; // 80178C78
  c->lr=0x80178C80u; f_8005E814(c); // 80178C7C
  c->lr=0x80178C84u; f_80178550(c); // 80178C80
  c->r[4]=c->r[3]|c->r[3]; // 80178C84
  c->r[3]=c->r[30]|c->r[30]; // 80178C88
  c->lr=0x80178C90u; f_80062F4C(c); // 80178C8C
  c->r[0]=R8(c->r[30]+0x00000010u); // 80178C90
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80178C94
  c->r[3]=c->r[30]+c->r[0]; // 80178C98
  c->r[28]=R32(c->r[3]+0x00000014u); // 80178C9C
  cmps(c,0,(int32_t)c->r[28],0); // 80178CA0
  if (crb(c,2)) { goto L_80178CCC; } // 80178CA4
  c->r[29]=0u+0x00000000u; // 80178CA8
  W32(c->r[31]+0x0000005Cu,c->r[1]); // 80178CAC
  W8(c->r[31]+0x00000008u,c->r[29]); // 80178CB0
  c->lr=0x80178CB8u; f_80178550(c); // 80178CB4
  W32(c->r[28]+0x00000000u,c->r[3]); // 80178CB8
  c->r[0]=c->r[13]+0xFFFF8AD0u; // 80178CBC
  W32(c->r[28]+0x00000004u,c->r[0]); // 80178CC0
  W32(c->r[28]+0x00000008u,c->r[29]); // 80178CC4
  W32(c->r[28]+0x0000000Cu,c->r[29]); // 80178CC8
L_80178CCC:;
  W32(c->r[30]+0x00000008u,c->r[28]); // 80178CCC
  c->r[0]=0u+0x00000000u; // 80178CD0
  c->r[3]=c->r[30]|c->r[30]; // 80178CD4
  c->r[4]=c->r[28]|c->r[28]; // 80178CD8
  W32(c->r[28]+0x00000008u,c->r[0]); // 80178CDC
  c->r[0]=R32(c->r[30]+0x00000004u); // 80178CE0
  W32(c->r[30]+0x0000000Cu,c->r[0]); // 80178CE4
  c->lr=0x80178CECu; f_8006306C(c); // 80178CE8
  {uint32_t ea=c->r[2]+0xFFFFBD04u; c->f[0]=c->ps1[0]=RF32(ea);} // 80178CEC
  {uint32_t ea=c->r[28]+0x00000014u; WF32(ea,c->f[0]);} // 80178CF0
  {uint32_t ea=c->r[2]+0xFFFFBD0Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80178CF4
  {uint32_t ea=c->r[28]+0x00000010u; WF32(ea,c->f[0]);} // 80178CF8
  goto L_80178D18; // 80178CFC
L_80178D00:;
  c->r[3]=c->r[30]|c->r[30]; // 80178D00
  c->lr=0x80178D08u; f_80178D40(c); // 80178D04
  {uint32_t ea=c->r[2]+0xFFFFBD04u; c->f[0]=c->ps1[0]=RF32(ea);} // 80178D08
  {uint32_t ea=c->r[3]+0x00000014u; WF32(ea,c->f[0]);} // 80178D0C
  {uint32_t ea=c->r[2]+0xFFFFBD0Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80178D10
  {uint32_t ea=c->r[3]+0x00000010u; WF32(ea,c->f[0]);} // 80178D14
L_80178D18:;
  c->r[0]=0u+0x00000000u; // 80178D18
  W32(c->r[31]+0x000003D8u,c->r[0]); // 80178D1C
L_80178D20:;
  c->r[10]=c->r[31]|c->r[31]; // 80178D20
  c->r[11]=c->r[10]+0x000003F0u; // 80178D24
  c->lr=0x80178D2Cu; { c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80178D28
  c->r[10]=R32(c->r[1]+0x00000000u); // 80178D2C
  c->r[0]=R32(c->r[10]+0x00000004u); // 80178D30
  c->r[1]=c->r[10]|c->r[10]; // 80178D34
  c->lr=c->r[0]; // 80178D38
  return; // 80178D3C
}

// fn_80178D40
void f_80178D40(Ctx* __restrict c) {
  trace_call(0x80178D40u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80178D40
  c->r[0]=c->lr; // 80178D44
  W32(c->r[1]+0x00000044u,c->r[0]); // 80178D48
  {uint32_t ea=c->r[1]+0x00000030u; for(int i=28;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 80178D4C
  c->r[31]=c->r[1]|c->r[1]; // 80178D50
  c->r[28]=c->r[3]|c->r[3]; // 80178D54
  c->lr=0x80178D5Cu; f_8017851C(c); // 80178D58
  c->r[4]=c->r[3]|c->r[3]; // 80178D5C
  c->r[3]=c->r[28]|c->r[28]; // 80178D60
  c->lr=0x80178D68u; f_80062F4C(c); // 80178D64
  c->r[0]=R8(c->r[28]+0x00000010u); // 80178D68
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80178D6C
  c->r[3]=c->r[28]+c->r[0]; // 80178D70
  c->r[29]=R32(c->r[3]+0x00000014u); // 80178D74
  cmps(c,0,(int32_t)c->r[29],0); // 80178D78
  if (crb(c,2)) { goto L_80178DA4; } // 80178D7C
  c->r[30]=0u+0x00000000u; // 80178D80
  W32(c->r[31]+0x00000024u,c->r[1]); // 80178D84
  W8(c->r[31]+0x00000008u,c->r[30]); // 80178D88
  c->lr=0x80178D90u; f_8017851C(c); // 80178D8C
  W32(c->r[29]+0x00000000u,c->r[3]); // 80178D90
  c->r[0]=c->r[13]+0xFFFF8ACCu; // 80178D94
  W32(c->r[29]+0x00000004u,c->r[0]); // 80178D98
  W32(c->r[29]+0x00000008u,c->r[30]); // 80178D9C
  W32(c->r[29]+0x0000000Cu,c->r[30]); // 80178DA0
L_80178DA4:;
  W32(c->r[28]+0x00000008u,c->r[29]); // 80178DA4
  c->r[0]=0u+0x00000000u; // 80178DA8
  c->r[3]=c->r[28]|c->r[28]; // 80178DAC
  c->r[4]=c->r[29]|c->r[29]; // 80178DB0
  W32(c->r[29]+0x00000008u,c->r[0]); // 80178DB4
  c->r[0]=R32(c->r[28]+0x00000004u); // 80178DB8
  W32(c->r[28]+0x0000000Cu,c->r[0]); // 80178DBC
  c->lr=0x80178DC4u; f_8006306C(c); // 80178DC0
  c->r[10]=c->r[31]|c->r[31]; // 80178DC4
  c->r[3]=c->r[29]|c->r[29]; // 80178DC8
  {uint32_t ea=c->r[10]+0x00000030u; for(int i=28;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 80178DCC
  c->r[10]=R32(c->r[1]+0x00000000u); // 80178DD0
  c->r[0]=R32(c->r[10]+0x00000004u); // 80178DD4
  c->r[1]=c->r[10]|c->r[10]; // 80178DD8
  c->lr=c->r[0]; // 80178DDC
  return; // 80178DE0
}

// fn_80178DE4
void f_80178DE4(Ctx* __restrict c) {
  trace_call(0x80178DE4u);
  {uint32_t ea=c->r[1]+0xFFFFFB60u; W32(ea,c->r[1]); c->r[1]=ea;} // 80178DE4
  c->r[0]=c->lr; // 80178DE8
  W32(c->r[1]+0x000004A4u,c->r[0]); // 80178DEC
  {uint32_t ea=c->r[1]+0x00000490u; WF64(ea,c->f[31]);} // 80178DF0
  {uint32_t ea=c->r[1]+0x00000498u; psq_store(c,31,ea,0,0);} // 80178DF4
  {uint32_t ea=c->r[1]+0x00000480u; WF64(ea,c->f[30]);} // 80178DF8
  {uint32_t ea=c->r[1]+0x00000488u; psq_store(c,30,ea,0,0);} // 80178DFC
  W32(c->r[1]+0x0000047Cu,c->r[31]); // 80178E00
  W32(c->r[1]+0x00000478u,c->r[30]); // 80178E04
  c->r[30]=c->r[3]|c->r[3]; // 80178E08
  c->r[0]=R32(c->r[3]+0x0000055Cu); // 80178E0C
  cmps(c,0,(int32_t)c->r[0],0); // 80178E10
  if (crb(c,2)) { goto L_80178E2C; } // 80178E14
  cmps(c,0,(int32_t)c->r[0],256); // 80178E18
  if (crb(c,2)) { goto L_80178E78; } // 80178E1C
  cmps(c,0,(int32_t)c->r[0],512); // 80178E20
  if (crb(c,2)) { goto L_80178EB0; } // 80178E24
  goto L_801790F0; // 80178E28
L_80178E2C:;
  c->r[3]=c->r[3]+0x000005F4u; // 80178E2C
  c->lr=0x80178E34u; f_800A7AE8(c); // 80178E30
  {uint32_t ea=c->r[2]+0xFFFFBD10u; c->f[1]=c->ps1[1]=RF32(ea);} // 80178E34
  c->r[3]=c->r[30]+0x000005F4u; // 80178E38
  {uint32_t ea=c->r[2]+0xFFFFBD14u; c->f[2]=c->ps1[2]=RF32(ea);} // 80178E3C
  {uint32_t ea=c->r[2]+0xFFFFBD18u; c->f[3]=c->ps1[3]=RF32(ea);} // 80178E40
  c->lr=0x80178E48u; f_800A7B08(c); // 80178E44
  {uint32_t ea=c->r[2]+0xFFFFBD08u; c->f[0]=c->ps1[0]=RF32(ea);} // 80178E48
  c->r[0]=0u+0x00000100u; // 80178E4C
  {uint32_t ea=c->r[30]+0x00000604u; WF32(ea,c->f[0]);} // 80178E50
  c->r[3]=c->r[30]|c->r[30]; // 80178E54
  c->r[4]=0u+0x00005A01u; // 80178E58
  c->r[5]=0u+0x00000001u; // 80178E5C
  W32(c->r[30]+0x0000055Cu,c->r[0]); // 80178E60
  c->lr=0x80178E68u; f_80064744(c); // 80178E64
  c->r[3]=c->r[30]|c->r[30]; // 80178E68
  c->r[4]=0u+0x00000001u; // 80178E6C
  c->lr=0x80178E74u; f_8005E814(c); // 80178E70
  goto L_801790F0; // 80178E74
L_80178E78:;
  c->r[3]=c->r[3]+0x00000354u; // 80178E78
  c->lr=0x80178E80u; f_800667AC(c); // 80178E7C
  cmps(c,0,(int32_t)c->r[3],0); // 80178E80
  if (crb(c,2)) { goto L_801790F0; } // 80178E84
  c->r[3]=c->r[30]|c->r[30]; // 80178E88
  c->r[4]=0u+0x00000000u; // 80178E8C
  c->lr=0x80178E94u; f_8005EE88(c); // 80178E90
  c->r[0]=0u+0x00000200u; // 80178E94
  W32(c->r[30]+0x0000055Cu,c->r[0]); // 80178E98
  c->r[3]=c->r[30]|c->r[30]; // 80178E9C
  c->r[4]=0u+0x00005A02u; // 80178EA0
  c->r[5]=0u+0x00000001u; // 80178EA4
  c->lr=0x80178EACu; f_80064744(c); // 80178EA8
  goto L_801790F0; // 80178EAC
L_80178EB0:;
  c->r[3]=c->r[1]+0x00000128u; // 80178EB0
  c->lr=0x80178EB8u; f_8006585C(c); // 80178EB4
  c->r[12]=R32(c->r[30]+0x0000001Cu); // 80178EB8
  c->r[4]=c->r[30]|c->r[30]; // 80178EBC
  c->r[3]=c->r[1]+0x000000E8u; // 80178EC0
  c->r[31]=0u+0x00000001u; // 80178EC4
  c->r[12]=R32(c->r[12]+0x00000134u); // 80178EC8
  c->ctr=c->r[12]; // 80178ECC
  if (true) { c->lr=0x80178ED4u; dispatch(c,c->ctr); } // 80178ED0
  {uint32_t ea=c->r[30]+0x000001BCu; c->f[1]=c->ps1[1]=RF32(ea);} // 80178ED4
  c->r[3]=c->r[1]+0x000000DCu; // 80178ED8
  {uint32_t ea=c->r[30]+0x000001CCu; c->f[2]=c->ps1[2]=RF32(ea);} // 80178EDC
  {uint32_t ea=c->r[30]+0x000001DCu; c->f[3]=c->ps1[3]=RF32(ea);} // 80178EE0
  c->lr=0x80178EE8u; f_8005FD70(c); // 80178EE4
  c->r[12]=R32(c->r[30]+0x0000001Cu); // 80178EE8
  c->r[4]=c->r[30]|c->r[30]; // 80178EEC
  c->r[3]=c->r[1]+0x000000D0u; // 80178EF0
  c->r[12]=R32(c->r[12]+0x00000134u); // 80178EF4
  c->ctr=c->r[12]; // 80178EF8
  if (true) { c->lr=0x80178F00u; dispatch(c,c->ctr); } // 80178EFC
  c->r[3]=0u+0x00110000u; // 80178F00
  {uint32_t ea=c->r[2]+0xFFFFBD1Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 80178F04
  c->r[3]=c->r[3]+0x00000004u; // 80178F08
  c->r[4]=c->r[1]+0x000000D0u; // 80178F0C
  c->r[5]=c->r[1]+0x00000128u; // 80178F10
  c->r[6]=c->r[1]+0x000000E8u; // 80178F14
  c->lr=0x80178F1Cu; f_8005EC34(c); // 80178F18
  cmps(c,0,(int32_t)c->r[3],0); // 80178F1C
  if (crb(c,2)) { goto L_80178F34; } // 80178F20
  c->r[3]=c->r[1]+0x000000DCu; // 80178F24
  c->r[4]=c->r[1]+0x0000015Cu; // 80178F28
  c->lr=0x80178F30u; f_8005DC84(c); // 80178F2C
  goto L_80178FE0; // 80178F30
L_80178F34:;
  c->r[3]=c->r[1]+0x000000C4u; // 80178F34
  c->r[4]=c->r[30]+0x0000058Cu; // 80178F38
  c->lr=0x80178F40u; f_80060878(c); // 80178F3C
  c->r[12]=R32(c->r[30]+0x0000001Cu); // 80178F40
  c->r[4]=c->r[30]|c->r[30]; // 80178F44
  c->r[3]=c->r[1]+0x000000B8u; // 80178F48
  c->r[12]=R32(c->r[12]+0x00000134u); // 80178F4C
  c->ctr=c->r[12]; // 80178F50
  if (true) { c->lr=0x80178F58u; dispatch(c,c->ctr); } // 80178F54
  c->r[3]=c->r[1]+0x000000C4u; // 80178F58
  c->r[4]=c->r[1]+0x000000B8u; // 80178F5C
  c->r[5]=c->r[1]+0x00000128u; // 80178F60
  c->lr=0x80178F68u; f_8005EB78(c); // 80178F64
  cmps(c,0,(int32_t)c->r[3],0); // 80178F68
  if (crb(c,2)) { goto L_80178FAC; } // 80178F6C
  {uint32_t ea=c->r[2]+0xFFFFBD1Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 80178F70
  c->r[3]=c->r[1]+0x000000A0u; // 80178F74
  c->r[4]=c->r[1]+0x0000015Cu; // 80178F78
  c->lr=0x80178F80u; f_8005ED34(c); // 80178F7C
  c->r[3]=c->r[1]+0x000000ACu; // 80178F80
  c->r[4]=c->r[1]+0x00000150u; // 80178F84
  c->r[5]=c->r[1]+0x000000A0u; // 80178F88
  c->lr=0x80178F90u; f_80073ACC(c); // 80178F8C
  c->r[3]=c->r[1]+0x000000E8u; // 80178F90
  c->r[4]=c->r[1]+0x000000ACu; // 80178F94
  c->lr=0x80178F9Cu; f_8005DC84(c); // 80178F98
  c->r[3]=c->r[1]+0x000000DCu; // 80178F9C
  c->r[4]=c->r[1]+0x0000015Cu; // 80178FA0
  c->lr=0x80178FA8u; f_8005DC84(c); // 80178FA4
  goto L_80178FE0; // 80178FA8
L_80178FAC:;
  c->r[12]=R32(c->r[30]+0x0000001Cu); // 80178FAC
  c->r[4]=c->r[30]|c->r[30]; // 80178FB0
  c->r[3]=c->r[1]+0x00000094u; // 80178FB4
  c->r[12]=R32(c->r[12]+0x00000134u); // 80178FB8
  c->ctr=c->r[12]; // 80178FBC
  if (true) { c->lr=0x80178FC4u; dispatch(c,c->ctr); } // 80178FC0
  {uint32_t ea=c->r[1]+0x00000098u; c->f[1]=c->ps1[1]=RF32(ea);} // 80178FC4
  {uint32_t ea=c->r[2]+0xFFFFBD20u; c->f[0]=c->ps1[0]=RF32(ea);} // 80178FC8
  fcmp(c,0,c->f[1],c->f[0]); // 80178FCC
  c->r[0]=c->cr; // 80178FD0
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 80178FD4
  if (!crb(c,2)) { goto L_80178FE0; } // 80178FD8
  c->r[31]=0u+0x00000000u; // 80178FDC
L_80178FE0:;
  cmps(c,0,(int32_t)c->r[31],0); // 80178FE0
  if (crb(c,2)) { goto L_801790E8; } // 80178FE4
  c->r[3]=c->r[1]+0x00000088u; // 80178FE8
  c->r[4]=c->r[30]+0x000001B8u; // 80178FEC
  c->lr=0x80178FF4u; f_80060F28(c); // 80178FF0
  c->r[31]=0u+0x806A0000u; // 80178FF4
  c->r[3]=c->r[1]+0x00000010u; // 80178FF8
  c->r[4]=c->r[1]+0x000000DCu; // 80178FFC
  c->r[5]=c->r[31]+0x00000AA8u; // 80179000
  c->lr=0x80179008u; f_8030E0BC(c); // 80179004
  c->r[3]=c->r[1]+0x0000001Cu; // 80179008
  c->r[4]=c->r[1]+0x00000088u; // 8017900C
  c->r[5]=c->r[31]+0x00000AA8u; // 80179010
  c->lr=0x80179018u; f_8030E0BC(c); // 80179014
  c->r[3]=c->r[1]+0x00000028u; // 80179018
  c->r[4]=c->r[1]+0x00000010u; // 8017901C
  c->r[5]=c->r[1]+0x0000001Cu; // 80179020
  c->lr=0x80179028u; f_80061B98(c); // 80179024
  c->r[3]=c->r[1]+0x00000028u; // 80179028
  c->r[5]=c->r[31]+0x00000AA8u; // 8017902C
  c->r[4]=c->r[3]|c->r[3]; // 80179030
  c->lr=0x80179038u; f_8030E0BC(c); // 80179034
  c->r[3]=c->r[1]+0x00000034u; // 80179038
  c->r[4]=c->r[1]+0x00000028u; // 8017903C
  c->r[5]=c->r[1]+0x00000010u; // 80179040
  c->lr=0x80179048u; f_80061B98(c); // 80179044
  c->r[3]=c->r[1]+0x0000001Cu; // 80179048
  c->r[4]=c->r[1]+0x00000034u; // 8017904C
  c->lr=0x80179054u; f_8005DC84(c); // 80179050
  {uint32_t ea=c->r[2]+0xFFFFBD04u; c->f[0]=c->ps1[0]=RF32(ea);} // 80179054
  c->r[3]=c->r[1]+0x000000F8u; // 80179058
  {uint32_t ea=c->r[1]+0x00000028u; c->f[9]=c->ps1[9]=RF32(ea);} // 8017905C
  c->r[4]=c->r[1]+0x000000E8u; // 80179060
  {uint32_t ea=c->r[1]+0x0000002Cu; c->f[8]=c->ps1[8]=RF32(ea);} // 80179064
  {uint32_t ea=c->r[1]+0x00000030u; c->f[7]=c->ps1[7]=RF32(ea);} // 80179068
  {uint32_t ea=c->r[1]+0x00000010u; c->f[6]=c->ps1[6]=RF32(ea);} // 8017906C
  {uint32_t ea=c->r[1]+0x00000014u; c->f[5]=c->ps1[5]=RF32(ea);} // 80179070
  {uint32_t ea=c->r[1]+0x00000018u; c->f[4]=c->ps1[4]=RF32(ea);} // 80179074
  {uint32_t ea=c->r[1]+0x0000001Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 80179078
  {uint32_t ea=c->r[1]+0x00000020u; c->f[2]=c->ps1[2]=RF32(ea);} // 8017907C
  {uint32_t ea=c->r[1]+0x00000024u; c->f[1]=c->ps1[1]=RF32(ea);} // 80179080
  {uint32_t ea=c->r[1]+0x000000F8u; WF32(ea,c->f[9]);} // 80179084
  {uint32_t ea=c->r[1]+0x00000108u; WF32(ea,c->f[8]);} // 80179088
  {uint32_t ea=c->r[1]+0x00000118u; WF32(ea,c->f[7]);} // 8017908C
  {uint32_t ea=c->r[1]+0x000000FCu; WF32(ea,c->f[6]);} // 80179090
  {uint32_t ea=c->r[1]+0x0000010Cu; WF32(ea,c->f[5]);} // 80179094
  {uint32_t ea=c->r[1]+0x0000011Cu; WF32(ea,c->f[4]);} // 80179098
  {uint32_t ea=c->r[1]+0x00000100u; WF32(ea,c->f[3]);} // 8017909C
  {uint32_t ea=c->r[1]+0x00000110u; WF32(ea,c->f[2]);} // 801790A0
  {uint32_t ea=c->r[1]+0x00000120u; WF32(ea,c->f[1]);} // 801790A4
  {uint32_t ea=c->r[1]+0x00000104u; WF32(ea,c->f[0]);} // 801790A8
  {uint32_t ea=c->r[1]+0x00000114u; WF32(ea,c->f[0]);} // 801790AC
  {uint32_t ea=c->r[1]+0x00000124u; WF32(ea,c->f[0]);} // 801790B0
  c->lr=0x801790B8u; f_8005CDC8(c); // 801790B4
  c->r[12]=R32(c->r[30]+0x0000001Cu); // 801790B8
  c->r[3]=c->r[30]|c->r[30]; // 801790BC
  c->r[4]=c->r[1]+0x000000F8u; // 801790C0
  c->r[12]=R32(c->r[12]+0x00000020u); // 801790C4
  c->ctr=c->r[12]; // 801790C8
  if (true) { c->lr=0x801790D0u; dispatch(c,c->ctr); } // 801790CC
  c->r[0]=0u+0x00000300u; // 801790D0
  W32(c->r[30]+0x0000055Cu,c->r[0]); // 801790D4
  c->r[3]=c->r[30]|c->r[30]; // 801790D8
  c->r[4]=0u+0x00005A03u; // 801790DC
  c->r[5]=0u+0x00000001u; // 801790E0
  c->lr=0x801790E8u; f_80064744(c); // 801790E4
L_801790E8:;
  c->r[0]=0u+0x00000000u; // 801790E8
  W32(c->r[1]+0x00000470u,c->r[0]); // 801790EC
L_801790F0:;
  c->r[0]=R32(c->r[30]+0x0000055Cu); // 801790F0
  cmps(c,0,(int32_t)c->r[0],768); // 801790F4
  if (crb(c,2)) { goto L_80179160; } // 801790F8
  c->r[0]=0u+0x00000000u; // 801790FC
  W8(c->r[1]+0x0000000Cu,c->r[0]); // 80179100
  c->r[3]=c->r[1]+0x0000000Cu; // 80179104
  c->lr=0x8017910Cu; f_8004714C(c); // 80179108
  {uint32_t ea=c->r[3]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 8017910C
  {uint32_t ea=c->r[30]+0x00000604u; c->f[1]=c->ps1[1]=RF32(ea);} // 80179110
  {uint32_t ea=c->r[2]+0xFFFFBD04u; c->f[0]=c->ps1[0]=RF32(ea);} // 80179114
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 80179118
  {uint32_t ea=c->r[30]+0x00000604u; WF32(ea,c->f[1]);} // 8017911C
  fcmp(c,0,c->f[1],c->f[0]); // 80179120
  if (!crb(c,0)) { goto L_8017912C; } // 80179124
  {uint32_t ea=c->r[30]+0x00000604u; WF32(ea,c->f[0]);} // 80179128
L_8017912C:;
  c->r[3]=c->r[1]+0x00000064u; // 8017912C
  c->r[4]=c->r[30]+0x000001B8u; // 80179130
  c->lr=0x80179138u; f_80060F28(c); // 80179134
  c->r[3]=c->r[1]+0x00000070u; // 80179138
  c->r[4]=c->r[1]+0x00000064u; // 8017913C
  c->lr=0x80179144u; f_8005FC20(c); // 80179140
  {uint32_t ea=c->r[30]+0x00000604u; c->f[1]=c->ps1[1]=RF32(ea);} // 80179144
  c->r[3]=c->r[1]+0x0000007Cu; // 80179148
  c->r[4]=c->r[1]+0x00000070u; // 8017914C
  c->lr=0x80179154u; f_8005ED34(c); // 80179150
  c->r[3]=c->r[30]|c->r[30]; // 80179154
  c->r[4]=c->r[1]+0x0000007Cu; // 80179158
  c->lr=0x80179160u; f_80083340(c); // 8017915C
L_80179160:;
  c->r[0]=R32(c->r[30]+0x0000055Cu); // 80179160
  cmps(c,0,(int32_t)c->r[0],512); // 80179164
  if (!crb(c,2)) { goto L_801791D0; } // 80179168
  c->r[3]=c->r[30]+0x000005F4u; // 8017916C
  c->lr=0x80179174u; f_800A7B64(c); // 80179170
  c->r[0]=0u+0x00000000u; // 80179174
  W8(c->r[1]+0x00000008u,c->r[0]); // 80179178
  c->r[3]=c->r[1]+0x00000008u; // 8017917C
  c->lr=0x80179184u; f_8004714C(c); // 80179180
  {uint32_t ea=c->r[3]+0x00000004u; c->f[30]=c->ps1[30]=RF32(ea);} // 80179184
  c->r[3]=c->r[30]+0x000005F4u; // 80179188
  c->lr=0x80179190u; f_800A7BEC(c); // 8017918C
  c->f[31]=c->f[1]; // 80179190
  c->r[4]=0u+0x80760000u; // 80179194
  c->r[3]=c->r[1]+0x00000040u; // 80179198
  c->r[4]=c->r[4]+0xFFFF9C9Cu; // 8017919C
  c->lr=0x801791A4u; f_8005FC20(c); // 801791A0
  c->f[1]=c->f[31]; // 801791A4
  c->r[3]=c->r[1]+0x0000004Cu; // 801791A8
  c->r[4]=c->r[1]+0x00000040u; // 801791AC
  c->lr=0x801791B4u; f_8005ED34(c); // 801791B0
  c->f[1]=c->f[30]; // 801791B4
  c->r[3]=c->r[1]+0x00000058u; // 801791B8
  c->r[4]=c->r[1]+0x0000004Cu; // 801791BC
  c->lr=0x801791C4u; f_8005ED34(c); // 801791C0
  c->r[3]=c->r[30]|c->r[30]; // 801791C4
  c->r[4]=c->r[1]+0x00000058u; // 801791C8
  c->lr=0x801791D0u; f_80083340(c); // 801791CC
L_801791D0:;
  c->r[0]=R32(c->r[1]+0x000004A4u); // 801791D0
  {uint32_t ea=c->r[1]+0x00000498u; psq_load(c,31,ea,0,0);} // 801791D4
  {uint32_t ea=c->r[1]+0x00000490u; c->f[31]=RF64(ea);} // 801791D8
  {uint32_t ea=c->r[1]+0x00000488u; psq_load(c,30,ea,0,0);} // 801791DC
  {uint32_t ea=c->r[1]+0x00000480u; c->f[30]=RF64(ea);} // 801791E0
  c->r[31]=R32(c->r[1]+0x0000047Cu); // 801791E4
  c->r[30]=R32(c->r[1]+0x00000478u); // 801791E8
  c->lr=c->r[0]; // 801791EC
  c->r[1]=c->r[1]+0x000004A0u; // 801791F0
  return; // 801791F4
}

// fn_801791F8
void f_801791F8(Ctx* __restrict c) {
  trace_call(0x801791F8u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801791F8
  c->r[0]=c->lr; // 801791FC
  W32(c->r[1]+0x00000024u,c->r[0]); // 80179200
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80179204
  c->r[31]=c->r[3]|c->r[3]; // 80179208
  c->r[0]=R32(c->r[3]+0x0000055Cu); // 8017920C
  cmps(c,0,(int32_t)c->r[0],0); // 80179210
  if (crb(c,2)) { goto L_80179224; } // 80179214
  cmps(c,0,(int32_t)c->r[0],768); // 80179218
  if (crb(c,2)) { goto L_80179248; } // 8017921C
  goto L_801792A4; // 80179220
L_80179224:;
  c->r[4]=0u+0x00000001u; // 80179224
  c->lr=0x8017922Cu; f_8005E814(c); // 80179228
  c->r[0]=0u+0x00000300u; // 8017922C
  W32(c->r[31]+0x0000055Cu,c->r[0]); // 80179230
  c->r[4]=R32(c->r[31]+0x00000608u); // 80179234
  c->r[3]=c->r[31]|c->r[31]; // 80179238
  c->r[5]=0u+0x00000001u; // 8017923C
  c->lr=0x80179244u; f_80064744(c); // 80179240
  goto L_801792A4; // 80179244
L_80179248:;
  c->r[3]=c->r[3]+0x00000354u; // 80179248
  c->lr=0x80179250u; f_800667AC(c); // 8017924C
  cmps(c,0,(int32_t)c->r[3],0); // 80179250
  if (crb(c,2)) { goto L_801792A4; } // 80179254
  c->r[12]=R32(c->r[31]+0x0000001Cu); // 80179258
  c->r[4]=c->r[31]|c->r[31]; // 8017925C
  c->r[3]=c->r[1]+0x00000008u; // 80179260
  c->r[12]=R32(c->r[12]+0x00000134u); // 80179264
  c->ctr=c->r[12]; // 80179268
  if (true) { c->lr=0x80179270u; dispatch(c,c->ctr); } // 8017926C
  {uint32_t ea=c->r[2]+0xFFFFBD04u; c->f[0]=c->ps1[0]=RF32(ea);} // 80179270
  c->r[3]=c->r[31]+0x00000638u; // 80179274
  {uint32_t ea=c->r[31]+0x0000068Cu; WF32(ea,c->f[0]);} // 80179278
  c->r[4]=c->r[1]+0x00000008u; // 8017927C
  c->lr=0x80179284u; f_8005DC84(c); // 80179280
  c->r[4]=c->r[3]|c->r[3]; // 80179284
  c->r[3]=c->r[31]+0x0000062Cu; // 80179288
  c->lr=0x80179290u; f_8005DC84(c); // 8017928C
  c->r[12]=R32(c->r[31]+0x0000001Cu); // 80179290
  c->r[3]=c->r[31]|c->r[31]; // 80179294
  c->r[12]=R32(c->r[12]+0x000001B0u); // 80179298
  c->ctr=c->r[12]; // 8017929C
  if (true) { c->lr=0x801792A4u; dispatch(c,c->ctr); } // 801792A0
L_801792A4:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801792A4
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801792A8
  c->lr=c->r[0]; // 801792AC
  c->r[1]=c->r[1]+0x00000020u; // 801792B0
  return; // 801792B4
}

// fn_801792B8
void f_801792B8(Ctx* __restrict c) {
  trace_call(0x801792B8u);
  {uint32_t ea=c->r[1]+0xFFFFFEC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801792B8
  c->r[0]=c->lr; // 801792BC
  W32(c->r[1]+0x00000144u,c->r[0]); // 801792C0
  c->r[11]=c->r[1]+0x00000130u; // 801792C4
  {uint32_t ea=c->r[1]+0x00000130u; WF64(ea,c->f[31]);} // 801792C8
  {uint32_t ea=c->r[1]+0x00000138u; psq_store(c,31,ea,0,0);} // 801792CC
  c->lr=0x801792D4u; { W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801792D0
  c->r[31]=0u+0x00000000u; // 801792D4
  W8(c->r[1]+0x00000008u,c->r[31]); // 801792D8
  c->r[29]=c->r[3]|c->r[3]; // 801792DC
  c->r[3]=c->r[1]+0x00000008u; // 801792E0
  c->lr=0x801792E8u; f_8004714C(c); // 801792E4
  {uint32_t ea=c->r[3]+0x00000004u; c->f[31]=c->ps1[31]=RF32(ea);} // 801792E8
  c->r[3]=c->r[1]+0x00000060u; // 801792EC
  c->r[4]=c->r[29]+0x000001B8u; // 801792F0
  c->lr=0x801792F8u; f_80060F28(c); // 801792F4
  {uint32_t ea=c->r[2]+0xFFFFBCFCu; c->f[1]=c->ps1[1]=RF32(ea);} // 801792F8
  c->r[3]=c->r[1]+0x0000006Cu; // 801792FC
  c->r[4]=c->r[1]+0x00000060u; // 80179300
  c->lr=0x80179308u; f_8005ED34(c); // 80179304
  {uint32_t ea=c->r[2]+0xFFFFBD14u; c->f[1]=c->ps1[1]=RF32(ea);} // 80179308
  c->r[3]=c->r[1]+0x00000078u; // 8017930C
  c->r[4]=c->r[1]+0x0000006Cu; // 80179310
  c->lr=0x80179318u; f_8005ED34(c); // 80179314
  c->f[1]=c->f[31]; // 80179318
  c->r[3]=c->r[1]+0x00000084u; // 8017931C
  c->r[4]=c->r[1]+0x00000078u; // 80179320
  c->lr=0x80179328u; f_8005ED34(c); // 80179324
  c->r[3]=c->r[29]|c->r[29]; // 80179328
  c->r[4]=c->r[1]+0x00000084u; // 8017932C
  c->lr=0x80179334u; f_80083340(c); // 80179330
  c->r[4]=R32(c->r[29]+0x0000041Cu); // 80179334
  c->r[3]=c->r[1]+0x00000090u; // 80179338
  c->lr=0x80179340u; f_800C2FB8(c); // 8017933C
  {uint32_t ea=c->r[2]+0xFFFFBD24u; c->f[1]=c->ps1[1]=RF32(ea);} // 80179340
  c->r[3]=c->r[29]|c->r[29]; // 80179344
  {uint32_t ea=c->r[2]+0xFFFFBD08u; c->f[3]=c->ps1[3]=RF32(ea);} // 80179348
  c->r[4]=c->r[1]+0x00000090u; // 8017934C
  c->f[2]=c->f[1]; // 80179350
  c->lr=0x80179358u; f_80063BD8(c); // 80179354
  c->r[0]=R32(c->r[29]+0x0000055Cu); // 80179358
  cmps(c,0,(int32_t)c->r[0],0); // 8017935C
  if (crb(c,2)) { goto L_80179370; } // 80179360
  cmps(c,0,(int32_t)c->r[0],256); // 80179364
  if (crb(c,2)) { goto L_8017939C; } // 80179368
  goto L_80179588; // 8017936C
L_80179370:;
  c->r[3]=c->r[29]|c->r[29]; // 80179370
  c->r[4]=0u+0x000059E4u; // 80179374
  c->r[5]=0u+0x00000000u; // 80179378
  c->lr=0x80179380u; f_80064744(c); // 8017937C
  c->r[0]=0u+0x00000100u; // 80179380
  {uint32_t ea=c->r[2]+0xFFFFA218u; c->f[1]=c->ps1[1]=RF32(ea);} // 80179384
  W32(c->r[29]+0x0000055Cu,c->r[0]); // 80179388
  c->r[3]=R32(c->r[29]+0x0000041Cu); // 8017938C
  {uint32_t ea=c->r[2]+0xFFFFBD04u; c->f[2]=c->ps1[2]=RF32(ea);} // 80179390
  c->lr=0x80179398u; f_800C30F4(c); // 80179394
  goto L_80179588; // 80179398
L_8017939C:;
  c->r[3]=c->r[1]+0x00000048u; // 8017939C
  c->r[4]=c->r[29]+0x000001B8u; // 801793A0
  c->lr=0x801793A8u; f_80060F28(c); // 801793A4
  c->r[12]=R32(c->r[29]+0x0000001Cu); // 801793A8
  c->r[4]=c->r[29]|c->r[29]; // 801793AC
  c->r[3]=c->r[1]+0x00000054u; // 801793B0
  c->r[30]=R32(c->r[29]+0x0000041Cu); // 801793B4
  c->r[12]=R32(c->r[12]+0x00000134u); // 801793B8
  c->ctr=c->r[12]; // 801793BC
  if (true) { c->lr=0x801793C4u; dispatch(c,c->ctr); } // 801793C0
  c->r[3]=c->r[30]|c->r[30]; // 801793C4
  c->r[4]=c->r[1]+0x00000054u; // 801793C8
  c->r[5]=c->r[1]+0x00000048u; // 801793CC
  c->lr=0x801793D4u; f_800C2D1C(c); // 801793D0
  cmps(c,0,(int32_t)c->r[3],0); // 801793D4
  if (crb(c,2)) { goto L_801793E0; } // 801793D8
  W32(c->r[29]+0x0000060Cu,c->r[31]); // 801793DC
L_801793E0:;
  c->r[3]=R32(c->r[29]+0x0000041Cu); // 801793E0
  c->r[30]=0u+0x00000001u; // 801793E4
  c->r[4]=R32(c->r[29]+0x0000060Cu); // 801793E8
  c->lr=0x801793F0u; f_800C2EE0(c); // 801793EC
  c->r[4]=c->r[3]|c->r[3]; // 801793F0
  c->r[3]=c->r[1]+0x000000D0u; // 801793F4
  c->r[5]=0u+0x00000000u; // 801793F8
  c->r[6]=0u+0x00000000u; // 801793FC
  c->r[7]=0u+0x00000000u; // 80179400
  c->lr=0x80179408u; f_800A7BF4(c); // 80179404
  c->r[3]=R32(c->r[1]+0x000000D0u); // 80179408
  c->lr=0x80179410u; f_801774D4(c); // 8017940C
  cmps(c,0,(int32_t)c->r[3],12); // 80179410
  if (crb(c,2)) { goto L_80179424; } // 80179414
  c->r[4]=R32(c->r[29]+0x0000060Cu); // 80179418
  c->r[0]=c->r[4]+0x00000001u; // 8017941C
  W32(c->r[29]+0x0000060Cu,c->r[0]); // 80179420
L_80179424:;
  cmps(c,0,(int32_t)c->r[3],12); // 80179424
  if (!crb(c,2)) { goto L_80179438; } // 80179428
  c->r[0]=R32(c->r[29]+0x0000060Cu); // 8017942C
  cmps(c,0,(int32_t)c->r[0],0); // 80179430
  if (!crb(c,2)) { goto L_801794DC; } // 80179434
L_80179438:;
  c->r[4]=c->r[3]+0xFFFFFFFDu; // 80179438
  cmpu(c,0,c->r[4],0x00000007u); // 8017943C
  if (!crb(c,1)) { goto L_801794CC; } // 80179440
  cmps(c,0,(int32_t)c->r[3],0); // 80179444
  if (crb(c,2)) { goto L_80179468; } // 80179448
  cmps(c,0,(int32_t)c->r[3],12); // 8017944C
  if (crb(c,2)) { goto L_801794A4; } // 80179450
  cmps(c,0,(int32_t)c->r[3],1); // 80179454
  if (crb(c,2)) { goto L_801794A4; } // 80179458
  cmps(c,0,(int32_t)c->r[3],2); // 8017945C
  if (crb(c,2)) { goto L_801794BC; } // 80179460
  goto L_801794D8; // 80179464
L_80179468:;
  c->r[3]=c->r[1]+0x000000D0u; // 80179468
  c->r[4]=0u+0x00000001u; // 8017946C
  c->lr=0x80179474u; f_8007D0E0(c); // 80179470
  {uint32_t ea=c->r[2]+0xFFFFBD04u; c->f[0]=c->ps1[0]=RF32(ea);} // 80179474
  c->f[31]=c->f[1]; // 80179478
  fcmp(c,0,c->f[1],c->f[0]); // 8017947C
  setcrb(c,2,crb(c,0)|crb(c,2)); // 80179480
  if (!crb(c,2)) { goto L_8017948C; } // 80179484
  {uint32_t ea=c->r[2]+0xFFFFBD0Cu; c->f[31]=c->ps1[31]=RF32(ea);} // 80179488
L_8017948C:;
  c->r[3]=c->r[29]|c->r[29]; // 8017948C
  c->lr=0x80179494u; f_80178D40(c); // 80179490
  {uint32_t ea=c->r[2]+0xFFFFBD04u; c->f[0]=c->ps1[0]=RF32(ea);} // 80179494
  {uint32_t ea=c->r[3]+0x00000014u; WF32(ea,c->f[0]);} // 80179498
  {uint32_t ea=c->r[3]+0x00000010u; WF32(ea,c->f[31]);} // 8017949C
  goto L_801794DC; // 801794A0
L_801794A4:;
  c->r[3]=c->r[29]|c->r[29]; // 801794A4
  c->r[4]=0u+0x000059E4u; // 801794A8
  c->r[5]=0u+0x00000000u; // 801794AC
  c->lr=0x801794B4u; f_80064744(c); // 801794B0
  c->r[30]=0u+0x00000000u; // 801794B4
  goto L_801794DC; // 801794B8
L_801794BC:;
  c->r[3]=c->r[29]|c->r[29]; // 801794BC
  c->lr=0x801794C4u; f_801795A8(c); // 801794C0
  c->r[30]=0u+0x00000000u; // 801794C4
  goto L_801794DC; // 801794C8
L_801794CC:;
  c->r[3]=c->r[29]|c->r[29]; // 801794CC
  c->lr=0x801794D4u; f_8017A834(c); // 801794D0
  goto L_801794DC; // 801794D4
L_801794D8:;
  c->r[30]=0u+0x00000000u; // 801794D8
L_801794DC:;
  c->r[3]=R32(c->r[29]+0x0000041Cu); // 801794DC
  c->r[0]=R8(c->r[3]+0x00000015u); // 801794E0
  cmps(c,0,(int32_t)c->r[0],0); // 801794E4
  if (crb(c,2)) { goto L_80179588; } // 801794E8
  cmps(c,0,(int32_t)c->r[30],0); // 801794EC
  if (!crb(c,2)) { goto L_80179588; } // 801794F0
  c->r[0]=0u+0x00000000u; // 801794F4
  W32(c->r[29]+0x000005ECu,c->r[0]); // 801794F8
  c->r[3]=c->r[29]|c->r[29]; // 801794FC
  c->r[4]=c->r[1]+0x000000A0u; // 80179500
  c->r[12]=R32(c->r[29]+0x0000001Cu); // 80179504
  c->r[12]=R32(c->r[12]+0x00000148u); // 80179508
  c->ctr=c->r[12]; // 8017950C
  if (true) { c->lr=0x80179514u; dispatch(c,c->ctr); } // 80179510
  c->r[4]=c->r[3]|c->r[3]; // 80179514
  c->r[3]=c->r[1]+0x00000024u; // 80179518
  c->lr=0x80179520u; f_80060878(c); // 8017951C
  c->r[4]=c->r[29]|c->r[29]; // 80179520
  c->r[3]=c->r[1]+0x0000000Cu; // 80179524
  c->lr=0x8017952Cu; f_80110318(c); // 80179528
  {uint32_t ea=c->r[2]+0xFFFFBD28u; c->f[1]=c->ps1[1]=RF32(ea);} // 8017952C
  c->r[3]=c->r[1]+0x00000018u; // 80179530
  c->r[4]=c->r[1]+0x0000000Cu; // 80179534
  c->lr=0x8017953Cu; f_8005ED34(c); // 80179538
  c->r[3]=c->r[1]+0x00000030u; // 8017953C
  c->r[4]=c->r[1]+0x00000024u; // 80179540
  c->r[5]=c->r[1]+0x00000018u; // 80179544
  c->lr=0x8017954Cu; f_80073ACC(c); // 80179548
  c->r[12]=R32(c->r[29]+0x0000001Cu); // 8017954C
  c->r[4]=c->r[29]|c->r[29]; // 80179550
  c->r[3]=c->r[1]+0x0000003Cu; // 80179554
  c->r[12]=R32(c->r[12]+0x00000134u); // 80179558
  c->ctr=c->r[12]; // 8017955C
  if (true) { c->lr=0x80179564u; dispatch(c,c->ctr); } // 80179560
  c->r[3]=c->r[29]|c->r[29]; // 80179564
  c->r[4]=c->r[1]+0x0000003Cu; // 80179568
  c->r[5]=c->r[1]+0x00000030u; // 8017956C
  c->lr=0x80179574u; f_8017A974(c); // 80179570
  c->r[12]=R32(c->r[29]+0x0000001Cu); // 80179574
  c->r[3]=c->r[29]|c->r[29]; // 80179578
  c->r[12]=R32(c->r[12]+0x000001B0u); // 8017957C
  c->ctr=c->r[12]; // 80179580
  if (true) { c->lr=0x80179588u; dispatch(c,c->ctr); } // 80179584
L_80179588:;
  c->r[11]=c->r[1]+0x00000130u; // 80179588
  {uint32_t ea=c->r[1]+0x00000138u; psq_load(c,31,ea,0,0);} // 8017958C
  {uint32_t ea=c->r[1]+0x00000130u; c->f[31]=RF64(ea);} // 80179590
  c->lr=0x80179598u; { c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80179594
  c->r[0]=R32(c->r[1]+0x00000144u); // 80179598
  c->lr=c->r[0]; // 8017959C
  c->r[1]=c->r[1]+0x00000140u; // 801795A0
  return; // 801795A4
}

// fn_801795A8
void f_801795A8(Ctx* __restrict c) {
  trace_call(0x801795A8u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801795A8
  c->r[0]=c->lr; // 801795AC
  W32(c->r[1]+0x00000044u,c->r[0]); // 801795B0
  {uint32_t ea=c->r[1]+0x00000030u; for(int i=28;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 801795B4
  c->r[31]=c->r[1]|c->r[1]; // 801795B8
  c->r[28]=c->r[3]|c->r[3]; // 801795BC
  c->lr=0x801795C4u; f_801784B4(c); // 801795C0
  c->r[4]=c->r[3]|c->r[3]; // 801795C4
  c->r[3]=c->r[28]|c->r[28]; // 801795C8
  c->lr=0x801795D0u; f_80062F4C(c); // 801795CC
  c->r[0]=R8(c->r[28]+0x00000010u); // 801795D0
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801795D4
  c->r[3]=c->r[28]+c->r[0]; // 801795D8
  c->r[29]=R32(c->r[3]+0x00000014u); // 801795DC
  cmps(c,0,(int32_t)c->r[29],0); // 801795E0
  if (crb(c,2)) { goto L_8017960C; } // 801795E4
  c->r[30]=0u+0x00000000u; // 801795E8
  W32(c->r[31]+0x00000024u,c->r[1]); // 801795EC
  W8(c->r[31]+0x00000008u,c->r[30]); // 801795F0
  c->lr=0x801795F8u; f_801784B4(c); // 801795F4
  W32(c->r[29]+0x00000000u,c->r[3]); // 801795F8
  c->r[0]=c->r[13]+0xFFFF8AC8u; // 801795FC
  W32(c->r[29]+0x00000004u,c->r[0]); // 80179600
  W32(c->r[29]+0x00000008u,c->r[30]); // 80179604
  W32(c->r[29]+0x0000000Cu,c->r[30]); // 80179608
L_8017960C:;
  W32(c->r[28]+0x00000008u,c->r[29]); // 8017960C
  c->r[0]=0u+0x00000000u; // 80179610
  c->r[3]=c->r[28]|c->r[28]; // 80179614
  c->r[4]=c->r[29]|c->r[29]; // 80179618
  W32(c->r[29]+0x00000008u,c->r[0]); // 8017961C
  c->r[0]=R32(c->r[28]+0x00000004u); // 80179620
  W32(c->r[28]+0x0000000Cu,c->r[0]); // 80179624
  c->lr=0x8017962Cu; f_8006306C(c); // 80179628
  c->r[10]=c->r[31]|c->r[31]; // 8017962C
  c->r[3]=c->r[29]|c->r[29]; // 80179630
  {uint32_t ea=c->r[10]+0x00000030u; for(int i=28;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 80179634
  c->r[10]=R32(c->r[1]+0x00000000u); // 80179638
  c->r[0]=R32(c->r[10]+0x00000004u); // 8017963C
  c->r[1]=c->r[10]|c->r[10]; // 80179640
  c->lr=c->r[0]; // 80179644
  return; // 80179648
}

// fn_8017964C
void f_8017964C(Ctx* __restrict c) {
  trace_call(0x8017964Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8017964C
  c->r[0]=c->lr; // 80179650
  W32(c->r[1]+0x00000024u,c->r[0]); // 80179654
  c->r[11]=c->r[1]+0x00000020u; // 80179658
  c->lr=0x80179660u; { W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8017965C
  c->r[0]=R32(c->r[3]+0x0000055Cu); // 80179660
  c->r[28]=c->r[3]|c->r[3]; // 80179664
  c->r[29]=c->r[4]|c->r[4]; // 80179668
  cmps(c,0,(int32_t)c->r[0],0); // 8017966C
  if (crb(c,2)) { goto L_80179688; } // 80179670
  cmps(c,0,(int32_t)c->r[0],256); // 80179674
  if (crb(c,2)) { goto L_801796A8; } // 80179678
  cmps(c,0,(int32_t)c->r[0],512); // 8017967C
  if (crb(c,2)) { goto L_801797A4; } // 80179680
  goto L_801797DC; // 80179684
L_80179688:;
  c->r[0]=0u+0x00000001u; // 80179688
  W32(c->r[3]+0x000005F0u,c->r[0]); // 8017968C
  c->r[4]=0u+0x000059D9u; // 80179690
  c->r[5]=0u+0x00000001u; // 80179694
  c->lr=0x8017969Cu; f_80064744(c); // 80179698
  c->r[0]=0u+0x00000100u; // 8017969C
  W32(c->r[28]+0x0000055Cu,c->r[0]); // 801796A0
  goto L_801797DC; // 801796A4
L_801796A8:;
  {uint32_t ea=c->r[4]+0x00000010u; c->f[1]=c->ps1[1]=RF32(ea);} // 801796A8
  c->r[31]=0u+0x00000000u; // 801796AC
  {uint32_t ea=c->r[2]+0xFFFFBD04u; c->f[0]=c->ps1[0]=RF32(ea);} // 801796B0
  c->r[30]=0u+0x00000000u; // 801796B4
  fcmp(c,0,c->f[1],c->f[0]); // 801796B8
  setcrb(c,2,crb(c,1)|crb(c,2)); // 801796BC
  if (!crb(c,2)) { goto L_801796F8; } // 801796C0
  c->r[0]=0u+0x00000000u; // 801796C4
  W8(c->r[1]+0x00000008u,c->r[0]); // 801796C8
  c->r[3]=c->r[1]+0x00000008u; // 801796CC
  c->lr=0x801796D4u; f_8004714C(c); // 801796D0
  {uint32_t ea=c->r[3]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 801796D4
  {uint32_t ea=c->r[29]+0x00000014u; c->f[1]=c->ps1[1]=RF32(ea);} // 801796D8
  {uint32_t ea=c->r[29]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 801796DC
  c->f[1]=c->ps1[1]=S(c->f[1]+c->f[2]); // 801796E0
  {uint32_t ea=c->r[29]+0x00000014u; WF32(ea,c->f[1]);} // 801796E4
  fcmp(c,0,c->f[1],c->f[0]); // 801796E8
  if (!crb(c,1)) { goto L_80179778; } // 801796EC
  c->r[31]=0u+0x00000001u; // 801796F0
  goto L_80179778; // 801796F4
L_801796F8:;
  c->r[4]=0u+0x00000000u; // 801796F8
  c->lr=0x80179700u; f_801797F4(c); // 801796FC
  cmps(c,0,(int32_t)c->r[3],0); // 80179700
  if (!crb(c,2)) { goto L_80179730; } // 80179704
  c->r[3]=c->r[28]|c->r[28]; // 80179708
  c->r[4]=0u+0x00000002u; // 8017970C
  c->lr=0x80179714u; f_801797F4(c); // 80179710
  cmps(c,0,(int32_t)c->r[3],0); // 80179714
  if (!crb(c,2)) { goto L_80179730; } // 80179718
  c->r[3]=c->r[28]|c->r[28]; // 8017971C
  c->r[4]=0u+0x00000001u; // 80179720
  c->lr=0x80179728u; f_801797F4(c); // 80179724
  cmps(c,0,(int32_t)c->r[3],0); // 80179728
  if (crb(c,2)) { goto L_80179778; } // 8017972C
L_80179730:;
  c->r[3]=c->r[28]|c->r[28]; // 80179730
  c->r[31]=0u+0x00000001u; // 80179734
  c->r[4]=0u+0x00000001u; // 80179738
  c->lr=0x80179740u; f_801797F4(c); // 8017973C
  c->r[0]=cntlz(c->r[3]); // 80179740
  c->r[3]=c->r[28]+0x000005E8u; // 80179744
  c->r[30]=rotl(c->r[0],27)&0x07FFFFFFu; // 80179748
  c->r[4]=0u+0x00000000u; // 8017974C
  c->r[5]=0u+0x00000000u; // 80179750
  c->lr=0x80179758u; f_8005DCA0(c); // 80179754
  c->r[3]=c->r[28]+0x000005E8u; // 80179758
  c->r[4]=0u+0x00000002u; // 8017975C
  c->r[5]=0u+0x00000000u; // 80179760
  c->lr=0x80179768u; f_8005DCA0(c); // 80179764
  c->r[3]=c->r[28]+0x000005E8u; // 80179768
  c->r[4]=0u+0x00000001u; // 8017976C
  c->r[5]=0u+0x00000000u; // 80179770
  c->lr=0x80179778u; f_8005DCA0(c); // 80179774
L_80179778:;
  cmps(c,0,(int32_t)c->r[31],0); // 80179778
  if (crb(c,2)) { goto L_801797DC; } // 8017977C
  c->r[0]=addc(c,c->r[30],0xFFFFFFFFu,0); // 80179780
  c->r[3]=c->r[28]|c->r[28]; // 80179784
  c->r[4]=addc(c,~c->r[0],c->r[30],c->xer_ca); // 80179788
  c->r[5]=0u+0x00000001u; // 8017978C
  c->r[4]=c->r[4]+0x000059E2u; // 80179790
  c->lr=0x80179798u; f_80064744(c); // 80179794
  c->r[0]=0u+0x00000200u; // 80179798
  W32(c->r[28]+0x0000055Cu,c->r[0]); // 8017979C
  goto L_801797DC; // 801797A0
L_801797A4:;
  c->r[3]=c->r[3]+0x00000354u; // 801797A4
  c->lr=0x801797ACu; f_800667AC(c); // 801797A8
  cmps(c,0,(int32_t)c->r[3],0); // 801797AC
  if (crb(c,2)) { goto L_801797DC; } // 801797B0
  c->r[0]=0u+0x00000000u; // 801797B4
  W32(c->r[28]+0x000005F0u,c->r[0]); // 801797B8
  c->r[3]=c->r[28]|c->r[28]; // 801797BC
  c->r[4]=0u+0x00000001u; // 801797C0
  c->lr=0x801797C8u; f_8005E814(c); // 801797C4
  c->r[12]=R32(c->r[28]+0x0000001Cu); // 801797C8
  c->r[3]=c->r[28]|c->r[28]; // 801797CC
  c->r[12]=R32(c->r[12]+0x000001B0u); // 801797D0
  c->ctr=c->r[12]; // 801797D4
  if (true) { c->lr=0x801797DCu; dispatch(c,c->ctr); } // 801797D8
L_801797DC:;
  c->r[11]=c->r[1]+0x00000020u; // 801797DC
  c->lr=0x801797E4u; { c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801797E0
  c->r[0]=R32(c->r[1]+0x00000024u); // 801797E4
  c->lr=c->r[0]; // 801797E8
  c->r[1]=c->r[1]+0x00000020u; // 801797EC
  return; // 801797F0
}

// fn_801797F4
void f_801797F4(Ctx* __restrict c) {
  trace_call(0x801797F4u);
  c->r[5]=rotl(c->r[4],29)&0x1FFFFFFCu; // 801797F4
  c->r[0]=rotl(c->r[4],0)&0x0000001Fu; // 801797F8
  c->r[3]=c->r[3]+c->r[5]; // 801797FC
  c->r[3]=R32(c->r[3]+0x000005E8u); // 80179800
  c->r[0]=((c->r[0])&0x20)?0u:(c->r[3]>>((c->r[0])&31)); // 80179804
  c->r[3]=rotl(c->r[0],0)&0x00000001u; // 80179808
  return; // 8017980C
}

// fn_80179810
void f_80179810(Ctx* __restrict c) {
  trace_call(0x80179810u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80179810
  c->r[0]=c->lr; // 80179814
  W32(c->r[1]+0x00000024u,c->r[0]); // 80179818
  c->r[11]=c->r[1]+0x00000020u; // 8017981C
  c->lr=0x80179824u; { W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80179820
  c->r[30]=c->r[4]|c->r[4]; // 80179824
  c->r[29]=c->r[3]|c->r[3]; // 80179828
  c->r[31]=0u+0x00000000u; // 8017982C
  c->r[4]=0u+0x000059E4u; // 80179830
  c->r[5]=0u+0x00000000u; // 80179834
  c->lr=0x8017983Cu; f_80064744(c); // 80179838
  {uint32_t ea=c->r[30]+0x00000010u; c->f[1]=c->ps1[1]=RF32(ea);} // 8017983C
  {uint32_t ea=c->r[2]+0xFFFFBD04u; c->f[0]=c->ps1[0]=RF32(ea);} // 80179840
  fcmp(c,0,c->f[1],c->f[0]); // 80179844
  setcrb(c,2,crb(c,1)|crb(c,2)); // 80179848
  if (!crb(c,2)) { goto L_80179884; } // 8017984C
  c->r[0]=0u+0x00000000u; // 80179850
  W8(c->r[1]+0x00000008u,c->r[0]); // 80179854
  c->r[3]=c->r[1]+0x00000008u; // 80179858
  c->lr=0x80179860u; f_8004714C(c); // 8017985C
  {uint32_t ea=c->r[3]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 80179860
  {uint32_t ea=c->r[30]+0x00000014u; c->f[1]=c->ps1[1]=RF32(ea);} // 80179864
  {uint32_t ea=c->r[30]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 80179868
  c->f[1]=c->ps1[1]=S(c->f[1]+c->f[2]); // 8017986C
  {uint32_t ea=c->r[30]+0x00000014u; WF32(ea,c->f[1]);} // 80179870
  fcmp(c,0,c->f[1],c->f[0]); // 80179874
  if (!crb(c,1)) { goto L_801798AC; } // 80179878
  c->r[31]=0u+0x00000001u; // 8017987C
  goto L_801798AC; // 80179880
L_80179884:;
  c->r[3]=c->r[29]|c->r[29]; // 80179884
  c->r[4]=0u+0x00000000u; // 80179888
  c->lr=0x80179890u; f_801797F4(c); // 8017988C
  cmps(c,0,(int32_t)c->r[3],0); // 80179890
  if (crb(c,2)) { goto L_801798AC; } // 80179894
  c->r[3]=c->r[29]+0x000005E8u; // 80179898
  c->r[31]=0u+0x00000001u; // 8017989C
  c->r[4]=0u+0x00000000u; // 801798A0
  c->r[5]=0u+0x00000000u; // 801798A4
  c->lr=0x801798ACu; f_8005DCA0(c); // 801798A8
L_801798AC:;
  cmps(c,0,(int32_t)c->r[31],0); // 801798AC
  if (crb(c,2)) { goto L_801798C8; } // 801798B0
  c->r[12]=R32(c->r[29]+0x0000001Cu); // 801798B4
  c->r[3]=c->r[29]|c->r[29]; // 801798B8
  c->r[12]=R32(c->r[12]+0x000001B0u); // 801798BC
  c->ctr=c->r[12]; // 801798C0
  if (true) { c->lr=0x801798C8u; dispatch(c,c->ctr); } // 801798C4
L_801798C8:;
  c->r[11]=c->r[1]+0x00000020u; // 801798C8
  c->lr=0x801798D0u; { c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801798CC
  c->r[0]=R32(c->r[1]+0x00000024u); // 801798D0
  c->lr=c->r[0]; // 801798D4
  c->r[1]=c->r[1]+0x00000020u; // 801798D8
  return; // 801798DC
}

// fn_801798E0
void f_801798E0(Ctx* __restrict c) {
  trace_call(0x801798E0u);
  {uint32_t ea=c->r[1]+0xFFFFFF00u; W32(ea,c->r[1]); c->r[1]=ea;} // 801798E0
  c->r[0]=c->lr; // 801798E4
  W32(c->r[1]+0x00000104u,c->r[0]); // 801798E8
  c->r[11]=c->r[1]+0x000000F0u; // 801798EC
  {uint32_t ea=c->r[1]+0x000000F0u; WF64(ea,c->f[31]);} // 801798F0
  {uint32_t ea=c->r[1]+0x000000F8u; psq_store(c,31,ea,0,0);} // 801798F4
  c->lr=0x801798FCu; { W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801798F8
  c->r[12]=R32(c->r[3]+0x0000001Cu); // 801798FC
  c->r[29]=c->r[3]|c->r[3]; // 80179900
  c->r[30]=c->r[4]|c->r[4]; // 80179904
  c->r[12]=R32(c->r[12]+0x00000114u); // 80179908
  c->ctr=c->r[12]; // 8017990C
  if (true) { c->lr=0x80179914u; dispatch(c,c->ctr); } // 80179910
  cmps(c,0,(int32_t)c->r[3],0); // 80179914
  if (!crb(c,2)) { goto L_80179938; } // 80179918
  c->r[3]=c->r[29]|c->r[29]; // 8017991C
  c->r[4]=0u+0x000059E4u; // 80179920
  c->r[5]=0u+0x00000000u; // 80179924
  c->lr=0x8017992Cu; f_80064744(c); // 80179928
  c->r[0]=0u+0x00000000u; // 8017992C
  W32(c->r[29]+0x0000055Cu,c->r[0]); // 80179930
  goto L_80179BD0; // 80179934
L_80179938:;
  c->r[0]=R32(c->r[29]+0x0000055Cu); // 80179938
  cmps(c,0,(int32_t)c->r[0],256); // 8017993C
  if (crb(c,2)) { goto L_8017994C; } // 80179940
  cmps(c,0,(int32_t)c->r[0],512); // 80179944
  if (!crb(c,2)) { goto L_80179970; } // 80179948
L_8017994C:;
  c->r[4]=R32(c->r[29]+0x0000041Cu); // 8017994C
  c->r[3]=c->r[1]+0x0000007Cu; // 80179950
  c->lr=0x80179958u; f_800C2FB8(c); // 80179954
  {uint32_t ea=c->r[2]+0xFFFFBD2Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 80179958
  c->r[3]=c->r[29]|c->r[29]; // 8017995C
  {uint32_t ea=c->r[2]+0xFFFFBD30u; c->f[2]=c->ps1[2]=RF32(ea);} // 80179960
  c->r[4]=c->r[1]+0x0000007Cu; // 80179964
  {uint32_t ea=c->r[2]+0xFFFFBD04u; c->f[3]=c->ps1[3]=RF32(ea);} // 80179968
  c->lr=0x80179970u; f_800634E8(c); // 8017996C
L_80179970:;
  c->r[0]=R32(c->r[29]+0x0000055Cu); // 80179970
  cmps(c,0,(int32_t)c->r[0],0); // 80179974
  if (crb(c,2)) { goto L_80179998; } // 80179978
  cmps(c,0,(int32_t)c->r[0],256); // 8017997C
  if (crb(c,2)) { goto L_801799C4; } // 80179980
  cmps(c,0,(int32_t)c->r[0],512); // 80179984
  if (crb(c,2)) { goto L_801799EC; } // 80179988
  cmps(c,0,(int32_t)c->r[0],768); // 8017998C
  if (crb(c,2)) { goto L_80179A8C; } // 80179990
  goto L_80179B3C; // 80179994
L_80179998:;
  c->r[0]=0u+0x00000100u; // 80179998
  W32(c->r[29]+0x0000055Cu,c->r[0]); // 8017999C
  c->r[3]=c->r[29]|c->r[29]; // 801799A0
  c->r[4]=0u+0x000059ECu; // 801799A4
  c->r[5]=0u+0x00000001u; // 801799A8
  c->lr=0x801799B0u; f_80064744(c); // 801799AC
  {uint32_t ea=c->r[2]+0xFFFFBCFCu; c->f[0]=c->ps1[0]=RF32(ea);} // 801799B0
  c->r[0]=0u+0x00000000u; // 801799B4
  {uint32_t ea=c->r[30]+0x00000010u; WF32(ea,c->f[0]);} // 801799B8
  W8(c->r[30]+0x00000014u,c->r[0]); // 801799BC
  goto L_80179B3C; // 801799C0
L_801799C4:;
  c->r[3]=c->r[29]+0x00000354u; // 801799C4
  c->lr=0x801799CCu; f_800667AC(c); // 801799C8
  cmps(c,0,(int32_t)c->r[3],0); // 801799CC
  if (crb(c,2)) { goto L_80179B3C; } // 801799D0
  c->r[3]=c->r[29]|c->r[29]; // 801799D4
  c->r[4]=0u+0x000059E4u; // 801799D8
  c->r[5]=0u+0x00000000u; // 801799DC
  c->lr=0x801799E4u; f_80064744(c); // 801799E0
  c->r[0]=0u+0x00000200u; // 801799E4
  W32(c->r[29]+0x0000055Cu,c->r[0]); // 801799E8
L_801799EC:;
  c->r[3]=c->r[1]+0x000000A0u; // 801799EC
  c->r[4]=c->r[29]+0x000001B8u; // 801799F0
  c->lr=0x801799F8u; f_80060F28(c); // 801799F4
  c->r[12]=R32(c->r[29]+0x0000001Cu); // 801799F8
  c->r[4]=c->r[29]|c->r[29]; // 801799FC
  c->r[3]=c->r[1]+0x00000064u; // 80179A00
  c->r[31]=R32(c->r[29]+0x0000041Cu); // 80179A04
  c->r[12]=R32(c->r[12]+0x00000134u); // 80179A08
  c->ctr=c->r[12]; // 80179A0C
  if (true) { c->lr=0x80179A14u; dispatch(c,c->ctr); } // 80179A10
  c->r[4]=c->r[31]|c->r[31]; // 80179A14
  c->r[3]=c->r[1]+0x00000070u; // 80179A18
  c->lr=0x80179A20u; f_800C2FB8(c); // 80179A1C
  c->r[3]=c->r[1]+0x00000094u; // 80179A20
  c->r[4]=c->r[1]+0x00000070u; // 80179A24
  c->r[5]=c->r[1]+0x00000064u; // 80179A28
  c->lr=0x80179A30u; f_8005FC60(c); // 80179A2C
  c->r[3]=c->r[1]+0x00000094u; // 80179A30
  c->lr=0x80179A38u; f_800632C0(c); // 80179A34
  c->f[31]=c->f[1]; // 80179A38
  c->r[3]=c->r[1]+0x000000A0u; // 80179A3C
  c->lr=0x80179A44u; f_800632C0(c); // 80179A40
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[31]); // 80179A44
  {uint32_t ea=c->r[2]+0xFFFFBD24u; c->f[0]=c->ps1[0]=RF32(ea);} // 80179A48
  c->f[1]=std::fabs(c->f[1]); // 80179A4C
  c->f[1]=c->ps1[1]=S(c->f[1]); // 80179A50
  fcmp(c,0,c->f[1],c->f[0]); // 80179A54
  if (!crb(c,1)) { goto L_80179A64; } // 80179A58
  {uint32_t ea=c->r[2]+0xFFFFBD34u; c->f[0]=c->ps1[0]=RF32(ea);} // 80179A5C
  c->f[1]=c->ps1[1]=S(c->f[0]-c->f[1]); // 80179A60
L_80179A64:;
  {uint32_t ea=c->r[2]+0xFFFFBD1Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80179A64
  fcmp(c,0,c->f[1],c->f[0]); // 80179A68
  if (!crb(c,0)) { goto L_80179B3C; } // 80179A6C
  c->r[3]=c->r[29]|c->r[29]; // 80179A70
  c->r[4]=0u+0x000059EDu; // 80179A74
  c->r[5]=0u+0x00000001u; // 80179A78
  c->lr=0x80179A80u; f_80064744(c); // 80179A7C
  c->r[0]=0u+0x00000300u; // 80179A80
  W32(c->r[29]+0x0000055Cu,c->r[0]); // 80179A84
  goto L_80179B3C; // 80179A88
L_80179A8C:;
  c->r[0]=R8(c->r[30]+0x00000014u); // 80179A8C
  cmps(c,0,(int32_t)c->r[0],0); // 80179A90
  if (!crb(c,2)) { goto L_80179B18; } // 80179A94
  c->r[12]=R32(c->r[29]+0x0000001Cu); // 80179A98
  c->r[3]=c->r[29]|c->r[29]; // 80179A9C
  c->r[4]=c->r[1]+0x000000B0u; // 80179AA0
  c->r[12]=R32(c->r[12]+0x00000148u); // 80179AA4
  c->ctr=c->r[12]; // 80179AA8
  if (true) { c->lr=0x80179AB0u; dispatch(c,c->ctr); } // 80179AAC
  c->r[4]=c->r[3]|c->r[3]; // 80179AB0
  c->r[3]=c->r[1]+0x00000040u; // 80179AB4
  c->lr=0x80179ABCu; f_80060878(c); // 80179AB8
  c->r[3]=c->r[1]+0x00000058u; // 80179ABC
  c->r[4]=c->r[29]+0x0000058Cu; // 80179AC0
  c->lr=0x80179AC8u; f_80060878(c); // 80179AC4
  c->r[12]=R32(c->r[29]+0x0000001Cu); // 80179AC8
  c->r[4]=c->r[29]|c->r[29]; // 80179ACC
  c->r[3]=c->r[1]+0x0000004Cu; // 80179AD0
  c->r[12]=R32(c->r[12]+0x00000134u); // 80179AD4
  c->ctr=c->r[12]; // 80179AD8
  if (true) { c->lr=0x80179AE0u; dispatch(c,c->ctr); } // 80179ADC
  {uint32_t ea=c->r[2]+0xFFFFBD1Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 80179AE0
  c->r[3]=c->r[1]+0x00000058u; // 80179AE4
  c->r[4]=c->r[1]+0x0000004Cu; // 80179AE8
  c->r[5]=c->r[1]+0x00000040u; // 80179AEC
  c->r[6]=c->r[1]+0x00000088u; // 80179AF0
  c->lr=0x80179AF8u; f_80064590(c); // 80179AF4
  cmps(c,0,(int32_t)c->r[3],0); // 80179AF8
  if (crb(c,2)) { goto L_80179B18; } // 80179AFC
  c->r[3]=c->r[29]|c->r[29]; // 80179B00
  c->r[4]=0u+0x00000003u; // 80179B04
  c->r[5]=0u+0x00000001u; // 80179B08
  c->lr=0x80179B10u; f_80062748(c); // 80179B0C
  c->r[0]=0u+0x00000001u; // 80179B10
  W8(c->r[30]+0x00000014u,c->r[0]); // 80179B14
L_80179B18:;
  c->r[3]=c->r[29]+0x00000354u; // 80179B18
  c->lr=0x80179B20u; f_800667AC(c); // 80179B1C
  cmps(c,0,(int32_t)c->r[3],0); // 80179B20
  if (crb(c,2)) { goto L_80179B3C; } // 80179B24
  c->r[12]=R32(c->r[29]+0x0000001Cu); // 80179B28
  c->r[3]=c->r[29]|c->r[29]; // 80179B2C
  c->r[12]=R32(c->r[12]+0x000001B0u); // 80179B30
  c->ctr=c->r[12]; // 80179B34
  if (true) { c->lr=0x80179B3Cu; dispatch(c,c->ctr); } // 80179B38
L_80179B3C:;
  c->r[31]=0u+0x00000000u; // 80179B3C
  W8(c->r[1]+0x0000000Cu,c->r[31]); // 80179B40
  c->r[3]=c->r[1]+0x0000000Cu; // 80179B44
  c->lr=0x80179B4Cu; f_8004714C(c); // 80179B48
  {uint32_t ea=c->r[3]+0x00000004u; c->f[31]=c->ps1[31]=RF32(ea);} // 80179B4C
  c->r[3]=c->r[1]+0x00000010u; // 80179B50
  c->r[4]=c->r[29]+0x000001B8u; // 80179B54
  c->lr=0x80179B5Cu; f_80060F28(c); // 80179B58
  {uint32_t ea=c->r[30]+0x00000010u; c->f[1]=c->ps1[1]=RF32(ea);} // 80179B5C
  c->r[3]=c->r[1]+0x0000001Cu; // 80179B60
  c->r[4]=c->r[1]+0x00000010u; // 80179B64
  c->lr=0x80179B6Cu; f_8005ED34(c); // 80179B68
  {uint32_t ea=c->r[2]+0xFFFFBD14u; c->f[1]=c->ps1[1]=RF32(ea);} // 80179B6C
  c->r[3]=c->r[1]+0x00000028u; // 80179B70
  c->r[4]=c->r[1]+0x0000001Cu; // 80179B74
  c->lr=0x80179B7Cu; f_8005ED34(c); // 80179B78
  c->f[1]=c->f[31]; // 80179B7C
  c->r[3]=c->r[1]+0x00000034u; // 80179B80
  c->r[4]=c->r[1]+0x00000028u; // 80179B84
  c->lr=0x80179B8Cu; f_8005ED34(c); // 80179B88
  c->r[3]=c->r[29]|c->r[29]; // 80179B8C
  c->r[4]=c->r[1]+0x00000034u; // 80179B90
  c->lr=0x80179B98u; f_80083340(c); // 80179B94
  {uint32_t ea=c->r[30]+0x00000010u; c->f[1]=c->ps1[1]=RF32(ea);} // 80179B98
  {uint32_t ea=c->r[2]+0xFFFFBD04u; c->f[0]=c->ps1[0]=RF32(ea);} // 80179B9C
  fcmp(c,0,c->f[1],c->f[0]); // 80179BA0
  if (!crb(c,1)) { goto L_80179BCC; } // 80179BA4
  W8(c->r[1]+0x00000008u,c->r[31]); // 80179BA8
  c->r[3]=c->r[1]+0x00000008u; // 80179BAC
  c->lr=0x80179BB4u; f_8004714C(c); // 80179BB0
  {uint32_t ea=c->r[3]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 80179BB4
  {uint32_t ea=c->r[2]+0xFFFFBD1Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 80179BB8
  {uint32_t ea=c->r[30]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 80179BBC
  c->f[0]=c->ps1[0]=S(-std::fma(c->f[1],c->f[2],-c->f[0])); // 80179BC0
  {uint32_t ea=c->r[30]+0x00000010u; WF32(ea,c->f[0]);} // 80179BC4
  goto L_80179BD0; // 80179BC8
L_80179BCC:;
  {uint32_t ea=c->r[30]+0x00000010u; WF32(ea,c->f[0]);} // 80179BCC
L_80179BD0:;
  c->r[11]=c->r[1]+0x000000F0u; // 80179BD0
  {uint32_t ea=c->r[1]+0x000000F8u; psq_load(c,31,ea,0,0);} // 80179BD4
  {uint32_t ea=c->r[1]+0x000000F0u; c->f[31]=RF64(ea);} // 80179BD8
  c->lr=0x80179BE0u; { c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80179BDC
  c->r[0]=R32(c->r[1]+0x00000104u); // 80179BE0
  c->lr=c->r[0]; // 80179BE4
  c->r[1]=c->r[1]+0x00000100u; // 80179BE8
  return; // 80179BEC
}

// fn_80179BF0
void f_80179BF0(Ctx* __restrict c) {
  trace_call(0x80179BF0u);
  {uint32_t ea=c->r[1]+0xFFFFFF60u; W32(ea,c->r[1]); c->r[1]=ea;} // 80179BF0
  c->r[0]=c->lr; // 80179BF4
  W32(c->r[1]+0x000000A4u,c->r[0]); // 80179BF8
  W32(c->r[1]+0x0000009Cu,c->r[31]); // 80179BFC
  c->r[31]=c->r[3]|c->r[3]; // 80179C00
  c->r[0]=R32(c->r[3]+0x0000055Cu); // 80179C04
  cmps(c,0,(int32_t)c->r[0],512); // 80179C08
  if (crb(c,2)) { goto L_80179C44; } // 80179C0C
  c->r[12]=R32(c->r[3]+0x0000001Cu); // 80179C10
  c->r[12]=R32(c->r[12]+0x00000114u); // 80179C14
  c->ctr=c->r[12]; // 80179C18
  if (true) { c->lr=0x80179C20u; dispatch(c,c->ctr); } // 80179C1C
  cmps(c,0,(int32_t)c->r[3],0); // 80179C20
  if (!crb(c,2)) { goto L_80179C44; } // 80179C24
  c->r[3]=c->r[31]|c->r[31]; // 80179C28
  c->r[4]=0u+0x000059E4u; // 80179C2C
  c->r[5]=0u+0x00000000u; // 80179C30
  c->lr=0x80179C38u; f_80064744(c); // 80179C34
  c->r[0]=0u+0x00000000u; // 80179C38
  W32(c->r[31]+0x0000055Cu,c->r[0]); // 80179C3C
  goto L_80179DFC; // 80179C40
L_80179C44:;
  c->r[0]=R32(c->r[31]+0x0000055Cu); // 80179C44
  cmps(c,0,(int32_t)c->r[0],0); // 80179C48
  if (crb(c,2)) { goto L_80179C74; } // 80179C4C
  cmps(c,0,(int32_t)c->r[0],256); // 80179C50
  if (crb(c,2)) { goto L_80179D28; } // 80179C54
  cmps(c,0,(int32_t)c->r[0],512); // 80179C58
  if (crb(c,2)) { goto L_80179D74; } // 80179C5C
  cmps(c,0,(int32_t)c->r[0],768); // 80179C60
  if (crb(c,2)) { goto L_80179DA0; } // 80179C64
  cmps(c,0,(int32_t)c->r[0],1024); // 80179C68
  if (crb(c,2)) { goto L_80179DCC; } // 80179C6C
  goto L_80179DFC; // 80179C70
L_80179C74:;
  c->r[3]=c->r[31]|c->r[31]; // 80179C74
  c->r[4]=0u+0x000059F1u; // 80179C78
  c->r[5]=0u+0x00000001u; // 80179C7C
  c->lr=0x80179C84u; f_80064744(c); // 80179C80
  c->r[12]=R32(c->r[31]+0x0000001Cu); // 80179C84
  c->r[3]=c->r[31]|c->r[31]; // 80179C88
  c->r[4]=c->r[1]+0x00000060u; // 80179C8C
  c->r[12]=R32(c->r[12]+0x00000148u); // 80179C90
  c->ctr=c->r[12]; // 80179C94
  if (true) { c->lr=0x80179C9Cu; dispatch(c,c->ctr); } // 80179C98
  c->r[4]=c->r[3]|c->r[3]; // 80179C9C
  c->r[3]=c->r[1]+0x00000038u; // 80179CA0
  c->lr=0x80179CA8u; f_80060878(c); // 80179CA4
  c->r[4]=0u+0x80760000u; // 80179CA8
  {uint32_t ea=c->r[2]+0xFFFFBD14u; c->f[1]=c->ps1[1]=RF32(ea);} // 80179CAC
  c->r[3]=c->r[1]+0x00000014u; // 80179CB0
  c->r[4]=c->r[4]+0xFFFF9C9Cu; // 80179CB4
  c->lr=0x80179CBCu; f_8005ED34(c); // 80179CB8
  c->r[4]=c->r[31]|c->r[31]; // 80179CBC
  c->r[3]=c->r[1]+0x00000020u; // 80179CC0
  c->lr=0x80179CC8u; f_80110318(c); // 80179CC4
  {uint32_t ea=c->r[2]+0xFFFFBD38u; c->f[1]=c->ps1[1]=RF32(ea);} // 80179CC8
  c->r[3]=c->r[1]+0x0000002Cu; // 80179CCC
  c->r[4]=c->r[1]+0x00000020u; // 80179CD0
  c->lr=0x80179CD8u; f_8005ED34(c); // 80179CD4
  c->r[3]=c->r[1]+0x00000044u; // 80179CD8
  c->r[4]=c->r[1]+0x00000038u; // 80179CDC
  c->r[5]=c->r[1]+0x0000002Cu; // 80179CE0
  c->lr=0x80179CE8u; f_80073ACC(c); // 80179CE4
  c->r[3]=c->r[1]+0x00000050u; // 80179CE8
  c->r[4]=c->r[1]+0x00000044u; // 80179CEC
  c->r[5]=c->r[1]+0x00000014u; // 80179CF0
  c->lr=0x80179CF8u; f_80073ACC(c); // 80179CF4
  c->r[12]=R32(c->r[31]+0x0000001Cu); // 80179CF8
  c->r[4]=c->r[31]|c->r[31]; // 80179CFC
  c->r[3]=c->r[1]+0x00000008u; // 80179D00
  c->r[12]=R32(c->r[12]+0x00000134u); // 80179D04
  c->ctr=c->r[12]; // 80179D08
  if (true) { c->lr=0x80179D10u; dispatch(c,c->ctr); } // 80179D0C
  c->r[3]=c->r[31]|c->r[31]; // 80179D10
  c->r[4]=c->r[1]+0x00000008u; // 80179D14
  c->r[5]=c->r[1]+0x00000050u; // 80179D18
  c->lr=0x80179D20u; f_8017A974(c); // 80179D1C
  c->r[0]=0u+0x00000100u; // 80179D20
  W32(c->r[31]+0x0000055Cu,c->r[0]); // 80179D24
L_80179D28:;
  c->r[3]=c->r[31]|c->r[31]; // 80179D28
  c->r[4]=0u+0x000059E4u; // 80179D2C
  c->r[5]=0u+0x00000000u; // 80179D30
  c->lr=0x80179D38u; f_80064744(c); // 80179D34
  c->r[3]=c->r[31]|c->r[31]; // 80179D38
  c->lr=0x80179D40u; f_8017AA80(c); // 80179D3C
  {uint32_t ea=c->r[31]+0x0000068Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 80179D40
  {uint32_t ea=c->r[2]+0xFFFFBD3Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80179D44
  fcmp(c,0,c->f[1],c->f[0]); // 80179D48
  c->r[0]=c->cr; // 80179D4C
  c->r[0]=rotl(c->r[0],2)&0x00000001u; cr0(c,c->r[0]); // 80179D50
  if (crb(c,2)) { goto L_80179DFC; } // 80179D54
  c->r[0]=0u+0x00000200u; // 80179D58
  W32(c->r[31]+0x0000055Cu,c->r[0]); // 80179D5C
  c->r[3]=c->r[31]|c->r[31]; // 80179D60
  c->r[4]=0u+0x000059F1u; // 80179D64
  c->r[5]=0u+0x00000001u; // 80179D68
  c->lr=0x80179D70u; f_80064744(c); // 80179D6C
  goto L_80179DFC; // 80179D70
L_80179D74:;
  c->r[3]=c->r[31]+0x00000354u; // 80179D74
  c->lr=0x80179D7Cu; f_800667AC(c); // 80179D78
  cmps(c,0,(int32_t)c->r[3],0); // 80179D7C
  if (crb(c,2)) { goto L_80179DFC; } // 80179D80
  c->r[3]=c->r[31]|c->r[31]; // 80179D84
  c->r[4]=0u+0x000059F2u; // 80179D88
  c->r[5]=0u+0x00000001u; // 80179D8C
  c->lr=0x80179D94u; f_80064744(c); // 80179D90
  c->r[0]=0u+0x00000300u; // 80179D94
  W32(c->r[31]+0x0000055Cu,c->r[0]); // 80179D98
  goto L_80179DFC; // 80179D9C
L_80179DA0:;
  c->r[3]=c->r[31]+0x00000354u; // 80179DA0
  c->lr=0x80179DA8u; f_800667AC(c); // 80179DA4
  cmps(c,0,(int32_t)c->r[3],0); // 80179DA8
  if (crb(c,2)) { goto L_80179DFC; } // 80179DAC
  c->r[3]=c->r[31]|c->r[31]; // 80179DB0
  c->r[4]=0u+0x000059F3u; // 80179DB4
  c->r[5]=0u+0x00000001u; // 80179DB8
  c->lr=0x80179DC0u; f_80064744(c); // 80179DBC
  c->r[0]=0u+0x00000400u; // 80179DC0
  W32(c->r[31]+0x0000055Cu,c->r[0]); // 80179DC4
  goto L_80179DFC; // 80179DC8
L_80179DCC:;
  {uint32_t ea=c->r[2]+0xFFFFBD0Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 80179DCC
  c->r[3]=c->r[31]|c->r[31]; // 80179DD0
  c->lr=0x80179DD8u; f_8017A890(c); // 80179DD4
  cmps(c,0,(int32_t)c->r[3],0); // 80179DD8
  if (crb(c,2)) { goto L_80179DFC; } // 80179DDC
  c->r[3]=c->r[31]|c->r[31]; // 80179DE0
  c->lr=0x80179DE8u; f_8017A8FC(c); // 80179DE4
  c->r[12]=R32(c->r[31]+0x0000001Cu); // 80179DE8
  c->r[3]=c->r[31]|c->r[31]; // 80179DEC
  c->r[12]=R32(c->r[12]+0x000001B0u); // 80179DF0
  c->ctr=c->r[12]; // 80179DF4
  if (true) { c->lr=0x80179DFCu; dispatch(c,c->ctr); } // 80179DF8
L_80179DFC:;
  c->r[0]=R32(c->r[1]+0x000000A4u); // 80179DFC
  c->r[31]=R32(c->r[1]+0x0000009Cu); // 80179E00
  c->lr=c->r[0]; // 80179E04
  c->r[1]=c->r[1]+0x000000A0u; // 80179E08
  return; // 80179E0C
}

// fn_80179E10
void f_80179E10(Ctx* __restrict c) {
  trace_call(0x80179E10u);
  {uint32_t ea=c->r[1]+0xFFFFFF60u; W32(ea,c->r[1]); c->r[1]=ea;} // 80179E10
  c->r[0]=c->lr; // 80179E14
  W32(c->r[1]+0x000000A4u,c->r[0]); // 80179E18
  W32(c->r[1]+0x0000009Cu,c->r[31]); // 80179E1C
  c->r[31]=c->r[3]|c->r[3]; // 80179E20
  c->r[0]=R32(c->r[3]+0x0000055Cu); // 80179E24
  cmps(c,0,(int32_t)c->r[0],512); // 80179E28
  if (crb(c,2)) { goto L_80179E64; } // 80179E2C
  c->r[12]=R32(c->r[3]+0x0000001Cu); // 80179E30
  c->r[12]=R32(c->r[12]+0x00000114u); // 80179E34
  c->ctr=c->r[12]; // 80179E38
  if (true) { c->lr=0x80179E40u; dispatch(c,c->ctr); } // 80179E3C
  cmps(c,0,(int32_t)c->r[3],0); // 80179E40
  if (!crb(c,2)) { goto L_80179E64; } // 80179E44
  c->r[3]=c->r[31]|c->r[31]; // 80179E48
  c->r[4]=0u+0x000059E4u; // 80179E4C
  c->r[5]=0u+0x00000000u; // 80179E50
  c->lr=0x80179E58u; f_80064744(c); // 80179E54
  c->r[0]=0u+0x00000000u; // 80179E58
  W32(c->r[31]+0x0000055Cu,c->r[0]); // 80179E5C
  goto L_80179FA4; // 80179E60
L_80179E64:;
  c->r[0]=R32(c->r[31]+0x0000055Cu); // 80179E64
  cmps(c,0,(int32_t)c->r[0],0); // 80179E68
  if (crb(c,2)) { goto L_80179E84; } // 80179E6C
  cmps(c,0,(int32_t)c->r[0],256); // 80179E70
  if (crb(c,2)) { goto L_80179F28; } // 80179E74
  cmps(c,0,(int32_t)c->r[0],512); // 80179E78
  if (crb(c,2)) { goto L_80179F74; } // 80179E7C
  goto L_80179FA4; // 80179E80
L_80179E84:;
  c->r[12]=R32(c->r[31]+0x0000001Cu); // 80179E84
  c->r[3]=c->r[31]|c->r[31]; // 80179E88
  c->r[4]=c->r[1]+0x00000060u; // 80179E8C
  c->r[12]=R32(c->r[12]+0x00000148u); // 80179E90
  c->ctr=c->r[12]; // 80179E94
  if (true) { c->lr=0x80179E9Cu; dispatch(c,c->ctr); } // 80179E98
  c->r[4]=c->r[3]|c->r[3]; // 80179E9C
  c->r[3]=c->r[1]+0x00000038u; // 80179EA0
  c->lr=0x80179EA8u; f_80060878(c); // 80179EA4
  c->r[4]=0u+0x80760000u; // 80179EA8
  {uint32_t ea=c->r[2]+0xFFFFBCFCu; c->f[1]=c->ps1[1]=RF32(ea);} // 80179EAC
  c->r[3]=c->r[1]+0x00000014u; // 80179EB0
  c->r[4]=c->r[4]+0xFFFF9C9Cu; // 80179EB4
  c->lr=0x80179EBCu; f_8005ED34(c); // 80179EB8
  c->r[4]=c->r[31]|c->r[31]; // 80179EBC
  c->r[3]=c->r[1]+0x00000020u; // 80179EC0
  c->lr=0x80179EC8u; f_80110318(c); // 80179EC4
  {uint32_t ea=c->r[2]+0xFFFFBD40u; c->f[1]=c->ps1[1]=RF32(ea);} // 80179EC8
  c->r[3]=c->r[1]+0x0000002Cu; // 80179ECC
  c->r[4]=c->r[1]+0x00000020u; // 80179ED0
  c->lr=0x80179ED8u; f_8005ED34(c); // 80179ED4
  c->r[3]=c->r[1]+0x00000044u; // 80179ED8
  c->r[4]=c->r[1]+0x00000038u; // 80179EDC
  c->r[5]=c->r[1]+0x0000002Cu; // 80179EE0
  c->lr=0x80179EE8u; f_80073ACC(c); // 80179EE4
  c->r[3]=c->r[1]+0x00000050u; // 80179EE8
  c->r[4]=c->r[1]+0x00000044u; // 80179EEC
  c->r[5]=c->r[1]+0x00000014u; // 80179EF0
  c->lr=0x80179EF8u; f_80073ACC(c); // 80179EF4
  c->r[12]=R32(c->r[31]+0x0000001Cu); // 80179EF8
  c->r[4]=c->r[31]|c->r[31]; // 80179EFC
  c->r[3]=c->r[1]+0x00000008u; // 80179F00
  c->r[12]=R32(c->r[12]+0x00000134u); // 80179F04
  c->ctr=c->r[12]; // 80179F08
  if (true) { c->lr=0x80179F10u; dispatch(c,c->ctr); } // 80179F0C
  c->r[3]=c->r[31]|c->r[31]; // 80179F10
  c->r[4]=c->r[1]+0x00000008u; // 80179F14
  c->r[5]=c->r[1]+0x00000050u; // 80179F18
  c->lr=0x80179F20u; f_8017A974(c); // 80179F1C
  c->r[0]=0u+0x00000100u; // 80179F20
  W32(c->r[31]+0x0000055Cu,c->r[0]); // 80179F24
L_80179F28:;
  c->r[3]=c->r[31]|c->r[31]; // 80179F28
  c->r[4]=0u+0x000059E4u; // 80179F2C
  c->r[5]=0u+0x00000000u; // 80179F30
  c->lr=0x80179F38u; f_80064744(c); // 80179F34
  c->r[3]=c->r[31]|c->r[31]; // 80179F38
  c->lr=0x80179F40u; f_8017AA80(c); // 80179F3C
  {uint32_t ea=c->r[31]+0x0000068Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 80179F40
  {uint32_t ea=c->r[2]+0xFFFFBD3Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80179F44
  fcmp(c,0,c->f[1],c->f[0]); // 80179F48
  c->r[0]=c->cr; // 80179F4C
  c->r[0]=rotl(c->r[0],2)&0x00000001u; cr0(c,c->r[0]); // 80179F50
  if (crb(c,2)) { goto L_80179FA4; } // 80179F54
  c->r[0]=0u+0x00000200u; // 80179F58
  W32(c->r[31]+0x0000055Cu,c->r[0]); // 80179F5C
  c->r[3]=c->r[31]|c->r[31]; // 80179F60
  c->r[4]=0u+0x000059F4u; // 80179F64
  c->r[5]=0u+0x00000001u; // 80179F68
  c->lr=0x80179F70u; f_80064744(c); // 80179F6C
  goto L_80179FA4; // 80179F70
L_80179F74:;
  {uint32_t ea=c->r[2]+0xFFFFBD0Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 80179F74
  c->r[3]=c->r[31]|c->r[31]; // 80179F78
  c->lr=0x80179F80u; f_8017A890(c); // 80179F7C
  cmps(c,0,(int32_t)c->r[3],0); // 80179F80
  if (crb(c,2)) { goto L_80179FA4; } // 80179F84
  c->r[3]=c->r[31]|c->r[31]; // 80179F88
  c->lr=0x80179F90u; f_8017A8FC(c); // 80179F8C
  c->r[12]=R32(c->r[31]+0x0000001Cu); // 80179F90
  c->r[3]=c->r[31]|c->r[31]; // 80179F94
  c->r[12]=R32(c->r[12]+0x000001B0u); // 80179F98
  c->ctr=c->r[12]; // 80179F9C
  if (true) { c->lr=0x80179FA4u; dispatch(c,c->ctr); } // 80179FA0
L_80179FA4:;
  c->r[0]=R32(c->r[1]+0x000000A4u); // 80179FA4
  c->r[31]=R32(c->r[1]+0x0000009Cu); // 80179FA8
  c->lr=c->r[0]; // 80179FAC
  c->r[1]=c->r[1]+0x000000A0u; // 80179FB0
  return; // 80179FB4
}

// fn_80179FB8
void f_80179FB8(Ctx* __restrict c) {
  trace_call(0x80179FB8u);
  {uint32_t ea=c->r[1]+0xFFFFFEE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80179FB8
  c->r[0]=c->lr; // 80179FBC
  W32(c->r[1]+0x00000124u,c->r[0]); // 80179FC0
  c->r[11]=c->r[1]+0x00000100u; // 80179FC4
  {uint32_t ea=c->r[1]+0x00000110u; WF64(ea,c->f[31]);} // 80179FC8
  {uint32_t ea=c->r[1]+0x00000118u; psq_store(c,31,ea,0,0);} // 80179FCC
  {uint32_t ea=c->r[1]+0x00000100u; WF64(ea,c->f[30]);} // 80179FD0
  {uint32_t ea=c->r[1]+0x00000108u; psq_store(c,30,ea,0,0);} // 80179FD4
  c->lr=0x80179FDCu; { W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80179FD8
  c->r[31]=c->r[1]|c->r[1]; // 80179FDC
  c->r[28]=c->r[3]|c->r[3]; // 80179FE0
  c->r[4]=0u+0x000059E4u; // 80179FE4
  c->r[5]=0u+0x00000000u; // 80179FE8
  c->lr=0x80179FF0u; f_80064744(c); // 80179FEC
  c->r[3]=R32(c->r[28]+0x00000434u); // 80179FF0
  c->lr=0x80179FF8u; f_800FE178(c); // 80179FF4
  cmps(c,0,(int32_t)c->r[3],0); // 80179FF8
  if (crb(c,2)) { goto L_8017A014; } // 80179FFC
  cmps(c,0,(int32_t)c->r[3],1); // 8017A000
  if (crb(c,2)) { goto L_8017A020; } // 8017A004
  cmps(c,0,(int32_t)c->r[3],2); // 8017A008
  if (crb(c,2)) { goto L_8017A02C; } // 8017A00C
  goto L_8017A230; // 8017A010
L_8017A014:;
  c->r[3]=c->r[28]|c->r[28]; // 8017A014
  c->lr=0x8017A01Cu; f_8017A310(c); // 8017A018
  goto L_8017A230; // 8017A01C
L_8017A020:;
  c->r[3]=c->r[28]|c->r[28]; // 8017A020
  c->lr=0x8017A028u; f_8017A260(c); // 8017A024
  goto L_8017A230; // 8017A028
L_8017A02C:;
  c->r[12]=R32(c->r[28]+0x0000001Cu); // 8017A02C
  c->r[3]=c->r[28]|c->r[28]; // 8017A030
  c->r[4]=c->r[31]+0x000000A8u; // 8017A034
  c->r[12]=R32(c->r[12]+0x00000148u); // 8017A038
  c->ctr=c->r[12]; // 8017A03C
  if (true) { c->lr=0x8017A044u; dispatch(c,c->ctr); } // 8017A040
  c->lr=0x8017A048u; f_803B220C(c); // 8017A044
  c->r[0]=c->r[3]^0x80000000u; // 8017A048
  c->r[30]=0u+0x43300000u; // 8017A04C
  W32(c->r[31]+0x000000DCu,c->r[0]); // 8017A050
  c->r[3]=c->r[31]+0x0000000Cu; // 8017A054
  {uint32_t ea=c->r[2]+0xFFFFBD58u; c->f[1]=RF64(ea);} // 8017A058
  W32(c->r[31]+0x000000D8u,c->r[30]); // 8017A05C
  {uint32_t ea=c->r[2]+0xFFFFBD44u; c->f[3]=c->ps1[3]=RF32(ea);} // 8017A060
  {uint32_t ea=c->r[31]+0x000000D8u; c->f[0]=RF64(ea);} // 8017A064
  {uint32_t ea=c->r[2]+0xFFFFBD4Cu; c->f[4]=c->ps1[4]=RF32(ea);} // 8017A068
  c->f[5]=c->ps1[5]=S(c->f[0]-c->f[1]); // 8017A06C
  {uint32_t ea=c->r[2]+0xFFFFBD48u; c->f[0]=c->ps1[0]=RF32(ea);} // 8017A070
  {uint32_t ea=c->r[31]+0x000000A8u; c->f[1]=c->ps1[1]=RF32(ea);} // 8017A074
  {uint32_t ea=c->r[31]+0x000000B8u; c->f[2]=c->ps1[2]=RF32(ea);} // 8017A078
  c->f[5]=c->ps1[5]=S(c->f[5]/c->f[3]); // 8017A07C
  {uint32_t ea=c->r[31]+0x000000C8u; c->f[3]=c->ps1[3]=RF32(ea);} // 8017A080
  c->f[30]=c->ps1[30]=S(std::fma(c->f[4],c->f[5],c->f[0])); // 8017A084
  c->lr=0x8017A08Cu; f_8005FD70(c); // 8017A088
  c->lr=0x8017A090u; f_803B220C(c); // 8017A08C
  c->r[0]=c->r[3]^0x80000000u; // 8017A090
  W32(c->r[31]+0x000000E4u,c->r[0]); // 8017A094
  {uint32_t ea=c->r[2]+0xFFFFBD58u; c->f[1]=RF64(ea);} // 8017A098
  c->r[3]=c->r[31]+0x00000024u; // 8017A09C
  W32(c->r[31]+0x000000E0u,c->r[30]); // 8017A0A0
  {uint32_t ea=c->r[2]+0xFFFFBD44u; c->f[3]=c->ps1[3]=RF32(ea);} // 8017A0A4
  {uint32_t ea=c->r[31]+0x000000E0u; c->f[0]=RF64(ea);} // 8017A0A8
  {uint32_t ea=c->r[2]+0xFFFFBD54u; c->f[4]=c->ps1[4]=RF32(ea);} // 8017A0AC
  c->f[5]=c->ps1[5]=S(c->f[0]-c->f[1]); // 8017A0B0
  {uint32_t ea=c->r[2]+0xFFFFBD50u; c->f[0]=c->ps1[0]=RF32(ea);} // 8017A0B4
  {uint32_t ea=c->r[31]+0x000000ACu; c->f[1]=c->ps1[1]=RF32(ea);} // 8017A0B8
  {uint32_t ea=c->r[31]+0x000000BCu; c->f[2]=c->ps1[2]=RF32(ea);} // 8017A0BC
  c->f[5]=c->ps1[5]=S(c->f[5]/c->f[3]); // 8017A0C0
  {uint32_t ea=c->r[31]+0x000000CCu; c->f[3]=c->ps1[3]=RF32(ea);} // 8017A0C4
  c->f[31]=c->ps1[31]=S(std::fma(c->f[4],c->f[5],c->f[0])); // 8017A0C8
  c->lr=0x8017A0D0u; f_8005FD70(c); // 8017A0CC
  {uint32_t ea=c->r[31]+0x000000B0u; c->f[1]=c->ps1[1]=RF32(ea);} // 8017A0D0
  c->r[3]=c->r[31]+0x0000003Cu; // 8017A0D4
  {uint32_t ea=c->r[31]+0x000000C0u; c->f[2]=c->ps1[2]=RF32(ea);} // 8017A0D8
  {uint32_t ea=c->r[31]+0x000000D0u; c->f[3]=c->ps1[3]=RF32(ea);} // 8017A0DC
  c->lr=0x8017A0E4u; f_8005FD70(c); // 8017A0E0
  {uint32_t ea=c->r[31]+0x000000B4u; c->f[1]=c->ps1[1]=RF32(ea);} // 8017A0E4
  c->r[3]=c->r[31]+0x00000060u; // 8017A0E8
  {uint32_t ea=c->r[31]+0x000000C4u; c->f[2]=c->ps1[2]=RF32(ea);} // 8017A0EC
  {uint32_t ea=c->r[31]+0x000000D4u; c->f[3]=c->ps1[3]=RF32(ea);} // 8017A0F0
  c->lr=0x8017A0F8u; f_8005FD70(c); // 8017A0F4
  c->f[1]=c->f[30]; // 8017A0F8
  c->r[3]=c->r[31]+0x00000018u; // 8017A0FC
  c->r[4]=c->r[31]+0x0000000Cu; // 8017A100
  c->lr=0x8017A108u; f_8005ED34(c); // 8017A104
  c->f[1]=c->f[31]; // 8017A108
  c->r[3]=c->r[31]+0x00000030u; // 8017A10C
  c->r[4]=c->r[31]+0x00000024u; // 8017A110
  c->lr=0x8017A118u; f_8005ED34(c); // 8017A114
  {uint32_t ea=c->r[28]+0x00000620u; c->f[1]=c->ps1[1]=RF32(ea);} // 8017A118
  c->r[3]=c->r[31]+0x00000048u; // 8017A11C
  c->r[4]=c->r[31]+0x0000003Cu; // 8017A120
  c->lr=0x8017A128u; f_8005ED34(c); // 8017A124
  {uint32_t ea=c->r[2]+0xFFFFBD14u; c->f[1]=c->ps1[1]=RF32(ea);} // 8017A128
  c->r[3]=c->r[31]+0x00000054u; // 8017A12C
  c->r[4]=c->r[31]+0x00000048u; // 8017A130
  c->lr=0x8017A138u; f_8005ED34(c); // 8017A134
  c->r[3]=c->r[31]+0x0000006Cu; // 8017A138
  c->r[4]=c->r[31]+0x00000060u; // 8017A13C
  c->r[5]=c->r[31]+0x00000054u; // 8017A140
  c->lr=0x8017A148u; f_80073ACC(c); // 8017A144
  c->r[3]=c->r[31]+0x00000078u; // 8017A148
  c->r[4]=c->r[31]+0x0000006Cu; // 8017A14C
  c->r[5]=c->r[31]+0x00000030u; // 8017A150
  c->lr=0x8017A158u; f_80073ACC(c); // 8017A154
  c->r[3]=c->r[31]+0x00000084u; // 8017A158
  c->r[4]=c->r[31]+0x00000078u; // 8017A15C
  c->r[5]=c->r[31]+0x00000018u; // 8017A160
  c->lr=0x8017A168u; f_80073ACC(c); // 8017A164
  c->lr=0x8017A16Cu; f_801783B4(c); // 8017A168
  c->r[4]=c->r[3]|c->r[3]; // 8017A16C
  c->r[3]=c->r[28]|c->r[28]; // 8017A170
  c->lr=0x8017A178u; f_80062F4C(c); // 8017A174
  c->r[0]=R8(c->r[28]+0x00000010u); // 8017A178
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 8017A17C
  c->r[3]=c->r[28]+c->r[0]; // 8017A180
  c->r[29]=R32(c->r[3]+0x00000014u); // 8017A184
  cmps(c,0,(int32_t)c->r[29],0); // 8017A188
  if (crb(c,2)) { goto L_8017A1B4; } // 8017A18C
  c->r[30]=0u+0x00000000u; // 8017A190
  W32(c->r[31]+0x000000A4u,c->r[1]); // 8017A194
  W8(c->r[31]+0x00000008u,c->r[30]); // 8017A198
  c->lr=0x8017A1A0u; f_801783B4(c); // 8017A19C
  W32(c->r[29]+0x00000000u,c->r[3]); // 8017A1A0
  c->r[0]=c->r[13]+0xFFFF8AB4u; // 8017A1A4
  W32(c->r[29]+0x00000004u,c->r[0]); // 8017A1A8
  W32(c->r[29]+0x00000008u,c->r[30]); // 8017A1AC
  W32(c->r[29]+0x0000000Cu,c->r[30]); // 8017A1B0
L_8017A1B4:;
  W32(c->r[28]+0x00000008u,c->r[29]); // 8017A1B4
  c->r[0]=0u+0x00000000u; // 8017A1B8
  c->r[3]=c->r[28]|c->r[28]; // 8017A1BC
  c->r[4]=c->r[29]|c->r[29]; // 8017A1C0
  W32(c->r[29]+0x00000008u,c->r[0]); // 8017A1C4
  c->r[0]=R32(c->r[28]+0x00000004u); // 8017A1C8
  W32(c->r[28]+0x0000000Cu,c->r[0]); // 8017A1CC
  c->lr=0x8017A1D4u; f_8006306C(c); // 8017A1D0
  c->r[0]=R32(c->r[28]+0x000005BCu); // 8017A1D4
  {uint32_t ea=c->r[28]+0x00000628u; c->f[30]=c->ps1[30]=RF32(ea);} // 8017A1D8
  c->r[0]=c->r[0]|0x40000000u; // 8017A1DC
  W32(c->r[28]+0x000005BCu,c->r[0]); // 8017A1E0
  {uint32_t ea=c->r[28]+0x00000624u; c->f[31]=c->ps1[31]=RF32(ea);} // 8017A1E4
  c->lr=0x8017A1ECu; f_803B220C(c); // 8017A1E8
  c->r[3]=c->r[3]^0x80000000u; // 8017A1EC
  c->r[0]=0u+0x43300000u; // 8017A1F0
  W32(c->r[31]+0x000000E4u,c->r[3]); // 8017A1F4
  c->f[1]=c->ps1[1]=S(c->f[30]-c->f[31]); // 8017A1F8
  {uint32_t ea=c->r[2]+0xFFFFBD58u; c->f[4]=RF64(ea);} // 8017A1FC
  c->r[3]=c->r[29]+0x00000018u; // 8017A200
  W32(c->r[31]+0x000000E0u,c->r[0]); // 8017A204
  c->r[4]=c->r[31]+0x00000084u; // 8017A208
  {uint32_t ea=c->r[2]+0xFFFFBD04u; c->f[0]=c->ps1[0]=RF32(ea);} // 8017A20C
  {uint32_t ea=c->r[31]+0x000000E0u; c->f[3]=RF64(ea);} // 8017A210
  {uint32_t ea=c->r[2]+0xFFFFBD44u; c->f[2]=c->ps1[2]=RF32(ea);} // 8017A214
  c->f[3]=c->ps1[3]=S(c->f[3]-c->f[4]); // 8017A218
  {uint32_t ea=c->r[29]+0x00000014u; WF32(ea,c->f[0]);} // 8017A21C
  c->f[0]=c->ps1[0]=S(c->f[3]/c->f[2]); // 8017A220
  c->f[0]=c->ps1[0]=S(std::fma(c->f[1],c->f[0],c->f[31])); // 8017A224
  {uint32_t ea=c->r[29]+0x00000010u; WF32(ea,c->f[0]);} // 8017A228
  c->lr=0x8017A230u; f_8005DC84(c); // 8017A22C
L_8017A230:;
  c->r[10]=c->r[31]|c->r[31]; // 8017A230
  c->r[11]=c->r[10]+0x00000100u; // 8017A234
  {uint32_t ea=c->r[10]+0x00000118u; psq_load(c,31,ea,0,0);} // 8017A238
  {uint32_t ea=c->r[31]+0x00000110u; c->f[31]=RF64(ea);} // 8017A23C
  {uint32_t ea=c->r[10]+0x00000108u; psq_load(c,30,ea,0,0);} // 8017A240
  {uint32_t ea=c->r[31]+0x00000100u; c->f[30]=RF64(ea);} // 8017A244
  c->lr=0x8017A24Cu; { c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8017A248
  c->r[10]=R32(c->r[1]+0x00000000u); // 8017A24C
  c->r[0]=R32(c->r[10]+0x00000004u); // 8017A250
  c->r[1]=c->r[10]|c->r[10]; // 8017A254
  c->lr=c->r[0]; // 8017A258
  return; // 8017A25C
}

// fn_8017A260
void f_8017A260(Ctx* __restrict c) {
  trace_call(0x8017A260u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8017A260
  c->r[0]=c->lr; // 8017A264
  W32(c->r[1]+0x00000044u,c->r[0]); // 8017A268
  {uint32_t ea=c->r[1]+0x00000030u; for(int i=28;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 8017A26C
  c->r[31]=c->r[1]|c->r[1]; // 8017A270
  c->r[28]=c->r[3]|c->r[3]; // 8017A274
  c->lr=0x8017A27Cu; f_8017844C(c); // 8017A278
  c->r[4]=c->r[3]|c->r[3]; // 8017A27C
  c->r[3]=c->r[28]|c->r[28]; // 8017A280
  c->lr=0x8017A288u; f_80062F4C(c); // 8017A284
  c->r[0]=R8(c->r[28]+0x00000010u); // 8017A288
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 8017A28C
  c->r[3]=c->r[28]+c->r[0]; // 8017A290
  c->r[29]=R32(c->r[3]+0x00000014u); // 8017A294
  cmps(c,0,(int32_t)c->r[29],0); // 8017A298
  if (crb(c,2)) { goto L_8017A2C4; } // 8017A29C
  c->r[30]=0u+0x00000000u; // 8017A2A0
  W32(c->r[31]+0x00000024u,c->r[1]); // 8017A2A4
  W8(c->r[31]+0x00000008u,c->r[30]); // 8017A2A8
  c->lr=0x8017A2B0u; f_8017844C(c); // 8017A2AC
  W32(c->r[29]+0x00000000u,c->r[3]); // 8017A2B0
  c->r[0]=c->r[13]+0xFFFF8AC0u; // 8017A2B4
  W32(c->r[29]+0x00000004u,c->r[0]); // 8017A2B8
  W32(c->r[29]+0x00000008u,c->r[30]); // 8017A2BC
  W32(c->r[29]+0x0000000Cu,c->r[30]); // 8017A2C0
L_8017A2C4:;
  W32(c->r[28]+0x00000008u,c->r[29]); // 8017A2C4
  c->r[0]=0u+0x00000000u; // 8017A2C8
  c->r[3]=c->r[28]|c->r[28]; // 8017A2CC
  c->r[4]=c->r[29]|c->r[29]; // 8017A2D0
  W32(c->r[29]+0x00000008u,c->r[0]); // 8017A2D4
  c->r[0]=R32(c->r[28]+0x00000004u); // 8017A2D8
  W32(c->r[28]+0x0000000Cu,c->r[0]); // 8017A2DC
  c->lr=0x8017A2E4u; f_8006306C(c); // 8017A2E0
  c->r[0]=R32(c->r[28]+0x000005BCu); // 8017A2E4
  c->r[10]=c->r[31]|c->r[31]; // 8017A2E8
  c->r[3]=c->r[29]|c->r[29]; // 8017A2EC
  c->r[0]=c->r[0]|0x40000000u; // 8017A2F0
  W32(c->r[28]+0x000005BCu,c->r[0]); // 8017A2F4
  {uint32_t ea=c->r[10]+0x00000030u; for(int i=28;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 8017A2F8
  c->r[10]=R32(c->r[1]+0x00000000u); // 8017A2FC
  c->r[0]=R32(c->r[10]+0x00000004u); // 8017A300
  c->r[1]=c->r[10]|c->r[10]; // 8017A304
  c->lr=c->r[0]; // 8017A308
  return; // 8017A30C
}

// fn_8017A310
void f_8017A310(Ctx* __restrict c) {
  trace_call(0x8017A310u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8017A310
  c->r[0]=c->lr; // 8017A314
  W32(c->r[1]+0x00000044u,c->r[0]); // 8017A318
  {uint32_t ea=c->r[1]+0x00000030u; for(int i=28;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 8017A31C
  c->r[31]=c->r[1]|c->r[1]; // 8017A320
  c->r[28]=c->r[3]|c->r[3]; // 8017A324
  c->lr=0x8017A32Cu; f_80178480(c); // 8017A328
  c->r[4]=c->r[3]|c->r[3]; // 8017A32C
  c->r[3]=c->r[28]|c->r[28]; // 8017A330
  c->lr=0x8017A338u; f_80062F4C(c); // 8017A334
  c->r[0]=R8(c->r[28]+0x00000010u); // 8017A338
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 8017A33C
  c->r[3]=c->r[28]+c->r[0]; // 8017A340
  c->r[29]=R32(c->r[3]+0x00000014u); // 8017A344
  cmps(c,0,(int32_t)c->r[29],0); // 8017A348
  if (crb(c,2)) { goto L_8017A374; } // 8017A34C
  c->r[30]=0u+0x00000000u; // 8017A350
  W32(c->r[31]+0x00000024u,c->r[1]); // 8017A354
  W8(c->r[31]+0x00000008u,c->r[30]); // 8017A358
  c->lr=0x8017A360u; f_80178480(c); // 8017A35C
  W32(c->r[29]+0x00000000u,c->r[3]); // 8017A360
  c->r[0]=c->r[13]+0xFFFF8AC4u; // 8017A364
  W32(c->r[29]+0x00000004u,c->r[0]); // 8017A368
  W32(c->r[29]+0x00000008u,c->r[30]); // 8017A36C
  W32(c->r[29]+0x0000000Cu,c->r[30]); // 8017A370
L_8017A374:;
  W32(c->r[28]+0x00000008u,c->r[29]); // 8017A374
  c->r[0]=0u+0x00000000u; // 8017A378
  c->r[3]=c->r[28]|c->r[28]; // 8017A37C
  c->r[4]=c->r[29]|c->r[29]; // 8017A380
  W32(c->r[29]+0x00000008u,c->r[0]); // 8017A384
  c->r[0]=R32(c->r[28]+0x00000004u); // 8017A388
  W32(c->r[28]+0x0000000Cu,c->r[0]); // 8017A38C
  c->lr=0x8017A394u; f_8006306C(c); // 8017A390
  c->r[0]=R32(c->r[28]+0x000005BCu); // 8017A394
  c->r[10]=c->r[31]|c->r[31]; // 8017A398
  c->r[3]=c->r[29]|c->r[29]; // 8017A39C
  c->r[0]=c->r[0]|0x40000000u; // 8017A3A0
  W32(c->r[28]+0x000005BCu,c->r[0]); // 8017A3A4
  {uint32_t ea=c->r[10]+0x00000030u; for(int i=28;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 8017A3A8
  c->r[10]=R32(c->r[1]+0x00000000u); // 8017A3AC
  c->r[0]=R32(c->r[10]+0x00000004u); // 8017A3B0
  c->r[1]=c->r[10]|c->r[10]; // 8017A3B4
  c->lr=c->r[0]; // 8017A3B8
  return; // 8017A3BC
}

// fn_8017A3C0
void f_8017A3C0(Ctx* __restrict c) {
  trace_call(0x8017A3C0u);
  {uint32_t ea=c->r[1]+0xFFFFFF00u; W32(ea,c->r[1]); c->r[1]=ea;} // 8017A3C0
  c->r[0]=c->lr; // 8017A3C4
  W32(c->r[1]+0x00000104u,c->r[0]); // 8017A3C8
  c->r[11]=c->r[1]+0x000000E0u; // 8017A3CC
  {uint32_t ea=c->r[1]+0x000000F0u; WF64(ea,c->f[31]);} // 8017A3D0
  {uint32_t ea=c->r[1]+0x000000F8u; psq_store(c,31,ea,0,0);} // 8017A3D4
  {uint32_t ea=c->r[1]+0x000000E0u; WF64(ea,c->f[30]);} // 8017A3D8
  {uint32_t ea=c->r[1]+0x000000E8u; psq_store(c,30,ea,0,0);} // 8017A3DC
  c->lr=0x8017A3E4u; { W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8017A3E0
  c->r[28]=c->r[3]|c->r[3]; // 8017A3E4
  c->r[29]=c->r[4]|c->r[4]; // 8017A3E8
  c->r[30]=0u+0x00000000u; // 8017A3EC
  c->lr=0x8017A3F4u; f_8017AA80(c); // 8017A3F0
  {uint32_t ea=c->r[28]+0x0000068Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8017A3F4
  {uint32_t ea=c->r[2]+0xFFFFBD3Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8017A3F8
  fcmp(c,0,c->f[1],c->f[0]); // 8017A3FC
  c->r[0]=c->cr; // 8017A400
  c->r[0]=rotl(c->r[0],2)&0x00000001u; cr0(c,c->r[0]); // 8017A404
  if (crb(c,2)) { goto L_8017A57C; } // 8017A408
  c->r[12]=R32(c->r[28]+0x0000001Cu); // 8017A40C
  c->r[3]=c->r[28]|c->r[28]; // 8017A410
  c->r[4]=c->r[1]+0x00000090u; // 8017A414
  c->r[12]=R32(c->r[12]+0x00000148u); // 8017A418
  c->ctr=c->r[12]; // 8017A41C
  if (true) { c->lr=0x8017A424u; dispatch(c,c->ctr); } // 8017A420
  c->lr=0x8017A428u; f_803B220C(c); // 8017A424
  c->r[0]=c->r[3]^0x80000000u; // 8017A428
  c->r[31]=0u+0x43300000u; // 8017A42C
  W32(c->r[1]+0x000000C4u,c->r[0]); // 8017A430
  c->r[3]=c->r[1]+0x0000000Cu; // 8017A434
  {uint32_t ea=c->r[2]+0xFFFFBD58u; c->f[1]=RF64(ea);} // 8017A438
  W32(c->r[1]+0x000000C0u,c->r[31]); // 8017A43C
  {uint32_t ea=c->r[2]+0xFFFFBD44u; c->f[3]=c->ps1[3]=RF32(ea);} // 8017A440
  {uint32_t ea=c->r[1]+0x000000C0u; c->f[0]=RF64(ea);} // 8017A444
  {uint32_t ea=c->r[2]+0xFFFFBD4Cu; c->f[4]=c->ps1[4]=RF32(ea);} // 8017A448
  c->f[5]=c->ps1[5]=S(c->f[0]-c->f[1]); // 8017A44C
  {uint32_t ea=c->r[2]+0xFFFFBD48u; c->f[0]=c->ps1[0]=RF32(ea);} // 8017A450
  {uint32_t ea=c->r[1]+0x00000090u; c->f[1]=c->ps1[1]=RF32(ea);} // 8017A454
  {uint32_t ea=c->r[1]+0x000000A0u; c->f[2]=c->ps1[2]=RF32(ea);} // 8017A458
  c->f[5]=c->ps1[5]=S(c->f[5]/c->f[3]); // 8017A45C
  {uint32_t ea=c->r[1]+0x000000B0u; c->f[3]=c->ps1[3]=RF32(ea);} // 8017A460
  c->f[31]=c->ps1[31]=S(std::fma(c->f[4],c->f[5],c->f[0])); // 8017A464
  c->lr=0x8017A46Cu; f_8005FD70(c); // 8017A468
  c->lr=0x8017A470u; f_803B220C(c); // 8017A46C
  c->r[0]=c->r[3]^0x80000000u; // 8017A470
  W32(c->r[1]+0x000000CCu,c->r[0]); // 8017A474
  {uint32_t ea=c->r[2]+0xFFFFBD58u; c->f[1]=RF64(ea);} // 8017A478
  c->r[3]=c->r[1]+0x00000024u; // 8017A47C
  W32(c->r[1]+0x000000C8u,c->r[31]); // 8017A480
  {uint32_t ea=c->r[2]+0xFFFFBD44u; c->f[3]=c->ps1[3]=RF32(ea);} // 8017A484
  {uint32_t ea=c->r[1]+0x000000C8u; c->f[0]=RF64(ea);} // 8017A488
  {uint32_t ea=c->r[2]+0xFFFFBD54u; c->f[4]=c->ps1[4]=RF32(ea);} // 8017A48C
  c->f[5]=c->ps1[5]=S(c->f[0]-c->f[1]); // 8017A490
  {uint32_t ea=c->r[2]+0xFFFFBD50u; c->f[0]=c->ps1[0]=RF32(ea);} // 8017A494
  {uint32_t ea=c->r[1]+0x00000094u; c->f[1]=c->ps1[1]=RF32(ea);} // 8017A498
  {uint32_t ea=c->r[1]+0x000000A4u; c->f[2]=c->ps1[2]=RF32(ea);} // 8017A49C
  c->f[5]=c->ps1[5]=S(c->f[5]/c->f[3]); // 8017A4A0
  {uint32_t ea=c->r[1]+0x000000B4u; c->f[3]=c->ps1[3]=RF32(ea);} // 8017A4A4
  c->f[30]=c->ps1[30]=S(std::fma(c->f[4],c->f[5],c->f[0])); // 8017A4A8
  c->lr=0x8017A4B0u; f_8005FD70(c); // 8017A4AC
  {uint32_t ea=c->r[1]+0x00000098u; c->f[1]=c->ps1[1]=RF32(ea);} // 8017A4B0
  c->r[3]=c->r[1]+0x0000003Cu; // 8017A4B4
  {uint32_t ea=c->r[1]+0x000000A8u; c->f[2]=c->ps1[2]=RF32(ea);} // 8017A4B8
  {uint32_t ea=c->r[1]+0x000000B8u; c->f[3]=c->ps1[3]=RF32(ea);} // 8017A4BC
  c->lr=0x8017A4C4u; f_8005FD70(c); // 8017A4C0
  {uint32_t ea=c->r[1]+0x0000009Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8017A4C4
  c->r[3]=c->r[1]+0x00000060u; // 8017A4C8
  {uint32_t ea=c->r[1]+0x000000ACu; c->f[2]=c->ps1[2]=RF32(ea);} // 8017A4CC
  {uint32_t ea=c->r[1]+0x000000BCu; c->f[3]=c->ps1[3]=RF32(ea);} // 8017A4D0
  c->lr=0x8017A4D8u; f_8005FD70(c); // 8017A4D4
  c->f[1]=c->f[31]; // 8017A4D8
  c->r[3]=c->r[1]+0x00000018u; // 8017A4DC
  c->r[4]=c->r[1]+0x0000000Cu; // 8017A4E0
  c->lr=0x8017A4E8u; f_8005ED34(c); // 8017A4E4
  c->f[1]=c->f[30]; // 8017A4E8
  c->r[3]=c->r[1]+0x00000030u; // 8017A4EC
  c->r[4]=c->r[1]+0x00000024u; // 8017A4F0
  c->lr=0x8017A4F8u; f_8005ED34(c); // 8017A4F4
  {uint32_t ea=c->r[28]+0x00000620u; c->f[1]=c->ps1[1]=RF32(ea);} // 8017A4F8
  c->r[3]=c->r[1]+0x00000048u; // 8017A4FC
  c->r[4]=c->r[1]+0x0000003Cu; // 8017A500
  c->lr=0x8017A508u; f_8005ED34(c); // 8017A504
  {uint32_t ea=c->r[2]+0xFFFFBD14u; c->f[1]=c->ps1[1]=RF32(ea);} // 8017A508
  c->r[3]=c->r[1]+0x00000054u; // 8017A50C
  c->r[4]=c->r[1]+0x00000048u; // 8017A510
  c->lr=0x8017A518u; f_8005ED34(c); // 8017A514
  c->r[3]=c->r[1]+0x0000006Cu; // 8017A518
  c->r[4]=c->r[1]+0x00000060u; // 8017A51C
  c->r[5]=c->r[1]+0x00000054u; // 8017A520
  c->lr=0x8017A528u; f_80073ACC(c); // 8017A524
  c->r[3]=c->r[1]+0x00000078u; // 8017A528
  c->r[4]=c->r[1]+0x0000006Cu; // 8017A52C
  c->r[5]=c->r[1]+0x00000030u; // 8017A530
  c->lr=0x8017A538u; f_80073ACC(c); // 8017A534
  c->r[3]=c->r[1]+0x00000084u; // 8017A538
  c->r[4]=c->r[1]+0x00000078u; // 8017A53C
  c->r[5]=c->r[1]+0x00000018u; // 8017A540
  c->lr=0x8017A548u; f_80073ACC(c); // 8017A544
  c->r[3]=c->r[28]|c->r[28]; // 8017A548
  c->r[4]=c->r[1]+0x00000084u; // 8017A54C
  c->r[5]=0u+0x00000001u; // 8017A550
  c->lr=0x8017A558u; f_8017A9DC(c); // 8017A554
  {uint32_t ea=c->r[29]+0x00000010u; c->f[1]=c->ps1[1]=RF32(ea);} // 8017A558
  {uint32_t ea=c->r[2]+0xFFFFBD04u; c->f[0]=c->ps1[0]=RF32(ea);} // 8017A55C
  fcmp(c,0,c->f[1],c->f[0]); // 8017A560
  setcrb(c,2,crb(c,1)|crb(c,2)); // 8017A564
  if (!crb(c,2)) { goto L_8017A57C; } // 8017A568
  {uint32_t ea=c->r[29]+0x00000014u; c->f[0]=c->ps1[0]=RF32(ea);} // 8017A56C
  fcmp(c,0,c->f[0],c->f[1]); // 8017A570
  if (!crb(c,1)) { goto L_8017A57C; } // 8017A574
  c->r[30]=0u+0x00000001u; // 8017A578
L_8017A57C:;
  c->r[0]=0u+0x00000000u; // 8017A57C
  W8(c->r[1]+0x00000008u,c->r[0]); // 8017A580
  c->r[3]=c->r[1]+0x00000008u; // 8017A584
  c->lr=0x8017A58Cu; f_8004714C(c); // 8017A588
  {uint32_t ea=c->r[3]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 8017A58C
  cmps(c,0,(int32_t)c->r[30],0); // 8017A590
  {uint32_t ea=c->r[29]+0x00000014u; c->f[0]=c->ps1[0]=RF32(ea);} // 8017A594
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[1]); // 8017A598
  {uint32_t ea=c->r[29]+0x00000014u; WF32(ea,c->f[0]);} // 8017A59C
  if (crb(c,2)) { goto L_8017A5B8; } // 8017A5A0
  c->r[12]=R32(c->r[28]+0x0000001Cu); // 8017A5A4
  c->r[3]=c->r[28]|c->r[28]; // 8017A5A8
  c->r[12]=R32(c->r[12]+0x000001B0u); // 8017A5AC
  c->ctr=c->r[12]; // 8017A5B0
  if (true) { c->lr=0x8017A5B8u; dispatch(c,c->ctr); } // 8017A5B4
L_8017A5B8:;
  c->r[11]=c->r[1]+0x000000E0u; // 8017A5B8
  {uint32_t ea=c->r[1]+0x000000F8u; psq_load(c,31,ea,0,0);} // 8017A5BC
  {uint32_t ea=c->r[1]+0x000000F0u; c->f[31]=RF64(ea);} // 8017A5C0
  {uint32_t ea=c->r[1]+0x000000E8u; psq_load(c,30,ea,0,0);} // 8017A5C4
  {uint32_t ea=c->r[1]+0x000000E0u; c->f[30]=RF64(ea);} // 8017A5C8
  c->lr=0x8017A5D0u; { c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8017A5CC
  c->r[0]=R32(c->r[1]+0x00000104u); // 8017A5D0
  c->lr=c->r[0]; // 8017A5D4
  c->r[1]=c->r[1]+0x00000100u; // 8017A5D8
  return; // 8017A5DC
}

// fn_8017A5E0
void f_8017A5E0(Ctx* __restrict c) {
  trace_call(0x8017A5E0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8017A5E0
  c->r[0]=c->lr; // 8017A5E4
  W32(c->r[1]+0x00000014u,c->r[0]); // 8017A5E8
  c->r[0]=0u+0x00000000u; // 8017A5EC
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 8017A5F0
  c->r[30]=c->r[3]|c->r[3]; // 8017A5F4
  c->r[31]=R32(c->r[3]+0x00000610u); // 8017A5F8
  W32(c->r[3]+0x0000055Cu,c->r[0]); // 8017A5FC
  cmps(c,0,(int32_t)c->r[31],0); // 8017A600
  if (crb(c,0)) { goto L_8017A6C4; } // 8017A604
  c->r[0]=0u+0xFFFFFFFFu; // 8017A608
  W32(c->r[3]+0x00000610u,c->r[0]); // 8017A60C
  c->lr=0x8017A614u; f_80062DCC(c); // 8017A610
  cmps(c,0,(int32_t)c->r[31],(int32_t)c->r[3]); // 8017A614
  if (!crb(c,2)) { goto L_8017A634; } // 8017A618
  c->r[3]=c->r[30]|c->r[30]; // 8017A61C
  c->lr=0x8017A624u; f_8007D624(c); // 8017A620
  c->r[0]=R32(c->r[30]+0x000005BCu); // 8017A624
  c->r[0]=c->r[0]|0x40000000u; // 8017A628
  W32(c->r[30]+0x000005BCu,c->r[0]); // 8017A62C
  goto L_8017A710; // 8017A630
L_8017A634:;
  c->lr=0x8017A638u; f_8017851C(c); // 8017A634
  cmps(c,0,(int32_t)c->r[31],(int32_t)c->r[3]); // 8017A638
  if (!crb(c,2)) { goto L_8017A658; } // 8017A63C
  c->r[3]=c->r[30]|c->r[30]; // 8017A640
  c->lr=0x8017A648u; f_80178D40(c); // 8017A644
  c->r[0]=R32(c->r[30]+0x000005BCu); // 8017A648
  c->r[0]=c->r[0]|0x40000000u; // 8017A64C
  W32(c->r[30]+0x000005BCu,c->r[0]); // 8017A650
  goto L_8017A710; // 8017A654
L_8017A658:;
  c->lr=0x8017A65Cu; f_801784B4(c); // 8017A658
  cmps(c,0,(int32_t)c->r[31],(int32_t)c->r[3]); // 8017A65C
  if (!crb(c,2)) { goto L_8017A67C; } // 8017A660
  c->r[3]=c->r[30]|c->r[30]; // 8017A664
  c->lr=0x8017A66Cu; f_801795A8(c); // 8017A668
  c->r[0]=R32(c->r[30]+0x000005BCu); // 8017A66C
  c->r[0]=c->r[0]|0x40000000u; // 8017A670
  W32(c->r[30]+0x000005BCu,c->r[0]); // 8017A674
  goto L_8017A710; // 8017A678
L_8017A67C:;
  c->lr=0x8017A680u; f_80178480(c); // 8017A67C
  cmps(c,0,(int32_t)c->r[31],(int32_t)c->r[3]); // 8017A680
  if (!crb(c,2)) { goto L_8017A694; } // 8017A684
  c->r[3]=c->r[30]|c->r[30]; // 8017A688
  c->lr=0x8017A690u; f_8017A310(c); // 8017A68C
  goto L_8017A710; // 8017A690
L_8017A694:;
  c->lr=0x8017A698u; f_8017844C(c); // 8017A694
  cmps(c,0,(int32_t)c->r[31],(int32_t)c->r[3]); // 8017A698
  if (!crb(c,2)) { goto L_8017A6AC; } // 8017A69C
  c->r[3]=c->r[30]|c->r[30]; // 8017A6A0
  c->lr=0x8017A6A8u; f_8017A260(c); // 8017A6A4
  goto L_8017A710; // 8017A6A8
L_8017A6AC:;
  c->lr=0x8017A6B0u; f_80178418(c); // 8017A6AC
  cmps(c,0,(int32_t)c->r[31],(int32_t)c->r[3]); // 8017A6B0
  if (!crb(c,2)) { goto L_8017A6C4; } // 8017A6B4
  c->r[3]=c->r[30]|c->r[30]; // 8017A6B8
  c->lr=0x8017A6C0u; f_8017A724(c); // 8017A6BC
  goto L_8017A710; // 8017A6C0
L_8017A6C4:;
  c->r[0]=R32(c->r[30]+0x000005ECu); // 8017A6C4
  cmps(c,0,(int32_t)c->r[0],1); // 8017A6C8
  if (!crb(c,2)) { goto L_8017A6E8; } // 8017A6CC
  c->r[3]=c->r[30]|c->r[30]; // 8017A6D0
  c->lr=0x8017A6D8u; f_80094A38(c); // 8017A6D4
  c->r[0]=R32(c->r[30]+0x000005BCu); // 8017A6D8
  c->r[0]=c->r[0]|0x40000000u; // 8017A6DC
  W32(c->r[30]+0x000005BCu,c->r[0]); // 8017A6E0
  goto L_8017A710; // 8017A6E4
L_8017A6E8:;
  cmps(c,0,(int32_t)c->r[0],0); // 8017A6E8
  if (!crb(c,2)) { goto L_8017A6FC; } // 8017A6EC
  c->r[3]=c->r[30]|c->r[30]; // 8017A6F0
  c->lr=0x8017A6F8u; f_8017A724(c); // 8017A6F4
  goto L_8017A710; // 8017A6F8
L_8017A6FC:;
  c->r[3]=c->r[30]|c->r[30]; // 8017A6FC
  c->lr=0x8017A704u; f_80178D40(c); // 8017A700
  c->r[0]=R32(c->r[30]+0x000005BCu); // 8017A704
  c->r[0]=c->r[0]|0x40000000u; // 8017A708
  W32(c->r[30]+0x000005BCu,c->r[0]); // 8017A70C
L_8017A710:;
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 8017A710
  c->r[0]=R32(c->r[1]+0x00000014u); // 8017A714
  c->lr=c->r[0]; // 8017A718
  c->r[1]=c->r[1]+0x00000010u; // 8017A71C
  return; // 8017A720
}

// fn_8017A724
void f_8017A724(Ctx* __restrict c) {
  trace_call(0x8017A724u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8017A724
  c->r[0]=c->lr; // 8017A728
  W32(c->r[1]+0x00000044u,c->r[0]); // 8017A72C
  {uint32_t ea=c->r[1]+0x00000030u; for(int i=28;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 8017A730
  c->r[31]=c->r[1]|c->r[1]; // 8017A734
  c->r[28]=c->r[3]|c->r[3]; // 8017A738
  c->lr=0x8017A740u; f_80178418(c); // 8017A73C
  c->r[4]=c->r[3]|c->r[3]; // 8017A740
  c->r[3]=c->r[28]|c->r[28]; // 8017A744
  c->lr=0x8017A74Cu; f_80062F4C(c); // 8017A748
  c->r[0]=R8(c->r[28]+0x00000010u); // 8017A74C
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 8017A750
  c->r[3]=c->r[28]+c->r[0]; // 8017A754
  c->r[29]=R32(c->r[3]+0x00000014u); // 8017A758
  cmps(c,0,(int32_t)c->r[29],0); // 8017A75C
  if (crb(c,2)) { goto L_8017A788; } // 8017A760
  c->r[30]=0u+0x00000000u; // 8017A764
  W32(c->r[31]+0x00000024u,c->r[1]); // 8017A768
  W8(c->r[31]+0x00000008u,c->r[30]); // 8017A76C
  c->lr=0x8017A774u; f_80178418(c); // 8017A770
  W32(c->r[29]+0x00000000u,c->r[3]); // 8017A774
  c->r[0]=c->r[13]+0xFFFF8AB8u; // 8017A778
  W32(c->r[29]+0x00000004u,c->r[0]); // 8017A77C
  W32(c->r[29]+0x00000008u,c->r[30]); // 8017A780
  W32(c->r[29]+0x0000000Cu,c->r[30]); // 8017A784
L_8017A788:;
  W32(c->r[28]+0x00000008u,c->r[29]); // 8017A788
  c->r[0]=0u+0x00000000u; // 8017A78C
  c->r[3]=c->r[28]|c->r[28]; // 8017A790
  c->r[4]=c->r[29]|c->r[29]; // 8017A794
  W32(c->r[29]+0x00000008u,c->r[0]); // 8017A798
  c->r[0]=R32(c->r[28]+0x00000004u); // 8017A79C
  W32(c->r[28]+0x0000000Cu,c->r[0]); // 8017A7A0
  c->lr=0x8017A7A8u; f_8006306C(c); // 8017A7A4
  c->r[0]=R32(c->r[28]+0x000005BCu); // 8017A7A8
  c->r[10]=c->r[31]|c->r[31]; // 8017A7AC
  c->r[3]=c->r[29]|c->r[29]; // 8017A7B0
  c->r[0]=c->r[0]|0x40000000u; // 8017A7B4
  W32(c->r[28]+0x000005BCu,c->r[0]); // 8017A7B8
  {uint32_t ea=c->r[10]+0x00000030u; for(int i=28;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 8017A7BC
  c->r[10]=R32(c->r[1]+0x00000000u); // 8017A7C0
  c->r[0]=R32(c->r[10]+0x00000004u); // 8017A7C4
  c->r[1]=c->r[10]|c->r[10]; // 8017A7C8
  c->lr=c->r[0]; // 8017A7CC
  return; // 8017A7D0
}

// fn_8017A7D4
void f_8017A7D4(Ctx* __restrict c) {
  trace_call(0x8017A7D4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8017A7D4
  c->r[0]=c->lr; // 8017A7D8
  W32(c->r[1]+0x00000014u,c->r[0]); // 8017A7DC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8017A7E0
  c->r[31]=c->r[3]|c->r[3]; // 8017A7E4
  c->r[12]=R32(c->r[3]+0x0000001Cu); // 8017A7E8
  c->r[12]=R32(c->r[12]+0x00000100u); // 8017A7EC
  c->ctr=c->r[12]; // 8017A7F0
  if (true) { c->lr=0x8017A7F8u; dispatch(c,c->ctr); } // 8017A7F4
  cmps(c,0,(int32_t)c->r[3],0); // 8017A7F8
  if (!crb(c,2)) { goto L_8017A820; } // 8017A7FC
  c->r[3]=c->r[31]|c->r[31]; // 8017A800
  c->r[4]=0u+0x00000000u; // 8017A804
  c->lr=0x8017A80Cu; f_8005EE88(c); // 8017A808
  c->r[3]=R32(c->r[31]+0x0000044Cu); // 8017A80C
  c->r[4]=0u+0x00000016u; // 8017A810
  c->r[5]=0u+0x00000001u; // 8017A814
  c->r[3]=c->r[3]+0x000000C4u; // 8017A818
  c->lr=0x8017A820u; f_8005DCA0(c); // 8017A81C
L_8017A820:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8017A820
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8017A824
  c->lr=c->r[0]; // 8017A828
  c->r[1]=c->r[1]+0x00000010u; // 8017A82C
  return; // 8017A830
}

// fn_8017A834
void f_8017A834(Ctx* __restrict c) {
  trace_call(0x8017A834u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8017A834
  c->r[0]=c->lr; // 8017A838
  W32(c->r[1]+0x00000014u,c->r[0]); // 8017A83C
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFFCu; // 8017A840
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 8017A844
  c->r[31]=c->r[3]+c->r[0]; // 8017A848
  c->r[30]=c->r[3]|c->r[3]; // 8017A84C
  c->r[0]=R32(c->r[31]+0x000005C8u); // 8017A850
  cmps(c,0,(int32_t)c->r[0],0); // 8017A854
  if (crb(c,2)) { goto L_8017A87C; } // 8017A858
  c->r[3]=R32(c->r[3]+0x0000041Cu); // 8017A85C
  c->lr=0x8017A864u; f_800C2DF8(c); // 8017A860
  c->r[3]=R32(c->r[30]+0x0000041Cu); // 8017A864
  c->r[4]=R32(c->r[31]+0x000005C8u); // 8017A868
  c->r[3]=c->r[3]+0x00000004u; // 8017A86C
  c->lr=0x8017A874u; f_800A0914(c); // 8017A870
  c->r[0]=0u+0x00000000u; // 8017A874
  W32(c->r[30]+0x0000060Cu,c->r[0]); // 8017A878
L_8017A87C:;
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 8017A87C
  c->r[0]=R32(c->r[1]+0x00000014u); // 8017A880
  c->lr=c->r[0]; // 8017A884
  c->r[1]=c->r[1]+0x00000010u; // 8017A888
  return; // 8017A88C
}

// fn_8017A890
void f_8017A890(Ctx* __restrict c) {
  trace_call(0x8017A890u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8017A890
  c->r[0]=c->lr; // 8017A894
  {uint32_t ea=c->r[2]+0xFFFFBD04u; c->f[0]=c->ps1[0]=RF32(ea);} // 8017A898
  W32(c->r[1]+0x00000024u,c->r[0]); // 8017A89C
  fcmp(c,0,c->f[1],c->f[0]); // 8017A8A0
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[31]);} // 8017A8A4
  {uint32_t ea=c->r[1]+0x00000018u; psq_store(c,31,ea,0,0);} // 8017A8A8
  c->f[31]=c->f[1]; // 8017A8AC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8017A8B0
  c->r[31]=c->r[3]|c->r[3]; // 8017A8B4
  if (!crb(c,0)) { goto L_8017A8C0; } // 8017A8B8
  {uint32_t ea=c->r[2]+0xFFFFBD1Cu; c->f[31]=c->ps1[31]=RF32(ea);} // 8017A8BC
L_8017A8C0:;
  c->r[3]=R32(c->r[3]+0x00000404u); // 8017A8C0
  c->lr=0x8017A8C8u; f_802EA43C(c); // 8017A8C4
  c->f[31]=c->ps1[31]=S(c->f[1]-c->f[31]); // 8017A8C8
  c->r[3]=R32(c->r[31]+0x00000404u); // 8017A8CC
  c->lr=0x8017A8D4u; f_802EA4B0(c); // 8017A8D0
  fcmp(c,0,c->f[1],c->f[31]); // 8017A8D4
  c->r[3]=c->cr; // 8017A8D8
  {uint32_t ea=c->r[1]+0x00000018u; psq_load(c,31,ea,0,0);} // 8017A8DC
  {uint32_t ea=c->r[1]+0x00000010u; c->f[31]=RF64(ea);} // 8017A8E0
  c->r[3]=rotl(c->r[3],2)&0x00000001u; // 8017A8E4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8017A8E8
  c->r[0]=R32(c->r[1]+0x00000024u); // 8017A8EC
  c->lr=c->r[0]; // 8017A8F0
  c->r[1]=c->r[1]+0x00000020u; // 8017A8F4
  return; // 8017A8F8
}

// fn_8017A8FC
void f_8017A8FC(Ctx* __restrict c) {
  trace_call(0x8017A8FCu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8017A8FC
  c->r[0]=c->lr; // 8017A900
  {uint32_t ea=c->r[2]+0xFFFFBD04u; c->f[0]=c->ps1[0]=RF32(ea);} // 8017A904
  W32(c->r[1]+0x00000024u,c->r[0]); // 8017A908
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8017A90C
  c->r[31]=c->r[3]|c->r[3]; // 8017A910
  c->r[4]=c->r[31]|c->r[31]; // 8017A914
  {uint32_t ea=c->r[3]+0x0000068Cu; WF32(ea,c->f[0]);} // 8017A918
  c->r[3]=c->r[1]+0x00000008u; // 8017A91C
  c->r[12]=R32(c->r[31]+0x0000001Cu); // 8017A920
  c->r[12]=R32(c->r[12]+0x00000134u); // 8017A924
  c->ctr=c->r[12]; // 8017A928
  if (true) { c->lr=0x8017A930u; dispatch(c,c->ctr); } // 8017A92C
  c->r[3]=c->r[31]+0x00000650u; // 8017A930
  c->r[4]=c->r[1]+0x00000008u; // 8017A934
  c->lr=0x8017A93Cu; f_8005DC84(c); // 8017A938
  c->r[4]=c->r[3]|c->r[3]; // 8017A93C
  c->r[3]=c->r[31]+0x00000644u; // 8017A940
  c->lr=0x8017A948u; f_8005DC84(c); // 8017A944
  c->r[4]=c->r[3]|c->r[3]; // 8017A948
  c->r[3]=c->r[31]+0x00000638u; // 8017A94C
  c->lr=0x8017A954u; f_8005DC84(c); // 8017A950
  c->r[4]=c->r[3]|c->r[3]; // 8017A954
  c->r[3]=c->r[31]+0x0000062Cu; // 8017A958
  c->lr=0x8017A960u; f_8005DC84(c); // 8017A95C
  c->r[0]=R32(c->r[1]+0x00000024u); // 8017A960
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8017A964
  c->lr=c->r[0]; // 8017A968
  c->r[1]=c->r[1]+0x00000020u; // 8017A96C
  return; // 8017A970
}

// fn_8017A974
void f_8017A974(Ctx* __restrict c) {
  trace_call(0x8017A974u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8017A974
  c->r[0]=c->lr; // 8017A978
  {uint32_t ea=c->r[2]+0xFFFFBD04u; c->f[0]=c->ps1[0]=RF32(ea);} // 8017A97C
  W32(c->r[1]+0x00000014u,c->r[0]); // 8017A980
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8017A984
  c->r[31]=c->r[5]|c->r[5]; // 8017A988
  W32(c->r[1]+0x00000008u,c->r[30]); // 8017A98C
  c->r[30]=c->r[3]|c->r[3]; // 8017A990
  {uint32_t ea=c->r[3]+0x0000068Cu; WF32(ea,c->f[0]);} // 8017A994
  c->r[3]=c->r[3]+0x00000638u; // 8017A998
  c->lr=0x8017A9A0u; f_8005DC84(c); // 8017A99C
  c->r[4]=c->r[3]|c->r[3]; // 8017A9A0
  c->r[3]=c->r[30]+0x0000062Cu; // 8017A9A4
  c->lr=0x8017A9ACu; f_8005DC84(c); // 8017A9A8
  c->r[4]=c->r[31]|c->r[31]; // 8017A9AC
  c->r[3]=c->r[30]+0x00000650u; // 8017A9B0
  c->lr=0x8017A9B8u; f_8005DC84(c); // 8017A9B4
  c->r[4]=c->r[3]|c->r[3]; // 8017A9B8
  c->r[3]=c->r[30]+0x00000644u; // 8017A9BC
  c->lr=0x8017A9C4u; f_8005DC84(c); // 8017A9C0
  c->r[0]=R32(c->r[1]+0x00000014u); // 8017A9C4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8017A9C8
  c->r[30]=R32(c->r[1]+0x00000008u); // 8017A9CC
  c->lr=c->r[0]; // 8017A9D0
  c->r[1]=c->r[1]+0x00000010u; // 8017A9D4
  return; // 8017A9D8
}

// fn_8017A9DC
void f_8017A9DC(Ctx* __restrict c) {
  trace_call(0x8017A9DCu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8017A9DC
  c->r[0]=c->lr; // 8017A9E0
  {uint32_t ea=c->r[2]+0xFFFFBD04u; c->f[0]=c->ps1[0]=RF32(ea);} // 8017A9E4
  cmps(c,0,(int32_t)c->r[5],0); // 8017A9E8
  W32(c->r[1]+0x00000024u,c->r[0]); // 8017A9EC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8017A9F0
  c->r[31]=c->r[4]|c->r[4]; // 8017A9F4
  W32(c->r[1]+0x00000018u,c->r[30]); // 8017A9F8
  c->r[30]=c->r[3]|c->r[3]; // 8017A9FC
  {uint32_t ea=c->r[3]+0x0000068Cu; WF32(ea,c->f[0]);} // 8017AA00
  if (crb(c,2)) { goto L_8017AA54; } // 8017AA04
  c->r[3]=c->r[3]+0x0000062Cu; // 8017AA08
  c->r[4]=c->r[30]+0x00000638u; // 8017AA0C
  c->lr=0x8017AA14u; f_8005DC84(c); // 8017AA10
  c->r[12]=R32(c->r[30]+0x0000001Cu); // 8017AA14
  c->r[4]=c->r[30]|c->r[30]; // 8017AA18
  c->r[3]=c->r[1]+0x00000008u; // 8017AA1C
  c->r[12]=R32(c->r[12]+0x00000134u); // 8017AA20
  c->ctr=c->r[12]; // 8017AA24
  if (true) { c->lr=0x8017AA2Cu; dispatch(c,c->ctr); } // 8017AA28
  c->r[3]=c->r[30]+0x00000638u; // 8017AA2C
  c->r[4]=c->r[1]+0x00000008u; // 8017AA30
  c->lr=0x8017AA38u; f_8005DC84(c); // 8017AA34
  c->r[3]=c->r[30]+0x00000644u; // 8017AA38
  c->r[4]=c->r[30]+0x00000650u; // 8017AA3C
  c->lr=0x8017AA44u; f_8005DC84(c); // 8017AA40
  c->r[4]=c->r[31]|c->r[31]; // 8017AA44
  c->r[3]=c->r[30]+0x00000650u; // 8017AA48
  c->lr=0x8017AA50u; f_8005DC84(c); // 8017AA4C
  goto L_8017AA68; // 8017AA50
L_8017AA54:;
  c->r[3]=c->r[3]+0x00000650u; // 8017AA54
  c->lr=0x8017AA5Cu; f_8005DC84(c); // 8017AA58
  c->r[4]=c->r[3]|c->r[3]; // 8017AA5C
  c->r[3]=c->r[30]+0x00000644u; // 8017AA60
  c->lr=0x8017AA68u; f_8005DC84(c); // 8017AA64
L_8017AA68:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 8017AA68
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8017AA6C
  c->r[30]=R32(c->r[1]+0x00000018u); // 8017AA70
  c->lr=c->r[0]; // 8017AA74
  c->r[1]=c->r[1]+0x00000020u; // 8017AA78
  return; // 8017AA7C
}

// fn_8017AA80
void f_8017AA80(Ctx* __restrict c) {
  trace_call(0x8017AA80u);
  {uint32_t ea=c->r[1]+0xFFFFFB60u; W32(ea,c->r[1]); c->r[1]=ea;} // 8017AA80
  c->r[0]=c->lr; // 8017AA84
  W32(c->r[1]+0x000004A4u,c->r[0]); // 8017AA88
  c->r[11]=c->r[1]+0x00000490u; // 8017AA8C
  {uint32_t ea=c->r[1]+0x00000490u; WF64(ea,c->f[31]);} // 8017AA90
  {uint32_t ea=c->r[1]+0x00000498u; psq_store(c,31,ea,0,0);} // 8017AA94
  c->lr=0x8017AA9Cu; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8017AA98
  c->r[25]=c->r[3]|c->r[3]; // 8017AA9C
  c->r[3]=c->r[1]+0x00000120u; // 8017AAA0
  c->lr=0x8017AAA8u; f_8006585C(c); // 8017AAA4
  {uint32_t ea=c->r[2]+0xFFFFBD04u; c->f[1]=c->ps1[1]=RF32(ea);} // 8017AAA8
  {uint32_t ea=c->r[25]+0x0000068Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8017AAAC
  fcmp(c,0,c->f[1],c->f[0]); // 8017AAB0
  if (!crb(c,2)) { goto L_8017ABA4; } // 8017AAB4
  {uint32_t ea=c->r[2]+0xFFFFBD60u; c->f[31]=c->ps1[31]=RF32(ea);} // 8017AAB8
  c->r[26]=0u+0x00000001u; // 8017AABC
  c->r[31]=0u+0x0000000Cu; // 8017AAC0
  c->r[29]=0u+0x806A0000u; // 8017AAC4
  c->r[30]=0u+0x00310000u; // 8017AAC8
L_8017AACC:;
  c->r[0]=c->r[26]+0x00000001u; // 8017AACC
  c->r[4]=c->r[25]+c->r[31]; // 8017AAD0
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)12); // 8017AAD4
  c->r[3]=c->r[1]+0x000000B4u; // 8017AAD8
  c->r[28]=c->r[4]+0x0000062Cu; // 8017AADC
  c->r[4]=c->r[25]+c->r[0]; // 8017AAE0
  c->r[5]=c->r[28]|c->r[28]; // 8017AAE4
  c->r[27]=c->r[4]+0x0000062Cu; // 8017AAE8
  c->r[4]=c->r[27]|c->r[27]; // 8017AAEC
  c->lr=0x8017AAF4u; f_8005FC60(c); // 8017AAF0
  c->r[4]=c->r[28]|c->r[28]; // 8017AAF4
  c->r[3]=c->r[1]+0x000000A8u; // 8017AAF8
  c->lr=0x8017AB00u; f_8005CD7C(c); // 8017AAFC
  c->r[3]=c->r[1]+0x0000009Cu; // 8017AB00
  c->r[4]=c->r[1]+0x000000B4u; // 8017AB04
  c->r[5]=c->r[29]+0x00000AA8u; // 8017AB08
  c->lr=0x8017AB10u; f_8030E0BC(c); // 8017AB0C
  c->r[3]=c->r[1]+0x000000B4u; // 8017AB10
  c->lr=0x8017AB18u; f_80084FAC(c); // 8017AB14
  c->f[1]=c->f[31]; // 8017AB18
  c->r[3]=c->r[1]+0x00000048u; // 8017AB1C
  c->r[4]=c->r[1]+0x0000009Cu; // 8017AB20
  c->lr=0x8017AB28u; f_8005ED34(c); // 8017AB24
  c->r[4]=c->r[27]|c->r[27]; // 8017AB28
  c->r[3]=c->r[1]+0x00000054u; // 8017AB2C
  c->r[5]=c->r[1]+0x00000048u; // 8017AB30
  c->lr=0x8017AB38u; f_80073ACC(c); // 8017AB34
  c->r[3]=c->r[28]|c->r[28]; // 8017AB38
  c->r[4]=c->r[1]+0x00000054u; // 8017AB3C
  c->r[5]=c->r[1]+0x00000120u; // 8017AB40
  c->lr=0x8017AB48u; f_8005EB5C(c); // 8017AB44
  cmps(c,0,(int32_t)c->r[3],0); // 8017AB48
  if (crb(c,2)) { goto L_8017AB7C; } // 8017AB4C
  c->f[1]=c->f[31]; // 8017AB50
  c->r[3]=c->r[1]+0x00000030u; // 8017AB54
  c->r[4]=c->r[1]+0x0000009Cu; // 8017AB58
  c->lr=0x8017AB60u; f_8005ED34(c); // 8017AB5C
  c->r[3]=c->r[1]+0x0000003Cu; // 8017AB60
  c->r[4]=c->r[1]+0x00000148u; // 8017AB64
  c->r[5]=c->r[1]+0x00000030u; // 8017AB68
  c->lr=0x8017AB70u; f_8005FC60(c); // 8017AB6C
  c->r[3]=c->r[27]|c->r[27]; // 8017AB70
  c->r[4]=c->r[1]+0x0000003Cu; // 8017AB74
  c->lr=0x8017AB7Cu; f_8005DC84(c); // 8017AB78
L_8017AB7C:;
  c->f[1]=c->f[31]; // 8017AB7C
  c->r[4]=c->r[27]|c->r[27]; // 8017AB80
  c->r[6]=c->r[27]|c->r[27]; // 8017AB84
  c->r[3]=c->r[30]+0x00000004u; // 8017AB88
  c->r[5]=0u+0x00000000u; // 8017AB8C
  c->lr=0x8017AB94u; f_8005EC34(c); // 8017AB90
  c->r[26]=c->r[26]+0x00000001u; // 8017AB94
  c->r[31]=c->r[31]+0x0000000Cu; // 8017AB98
  cmps(c,0,(int32_t)c->r[26],2); // 8017AB9C
  if (!crb(c,1)) { IRQCHK(c); goto L_8017AACC; } // 8017ABA0
L_8017ABA4:;
  c->r[3]=c->r[1]+0x00000018u; // 8017ABA4
  c->r[4]=c->r[25]+0x00000644u; // 8017ABA8
  c->r[5]=c->r[25]+0x00000638u; // 8017ABAC
  c->lr=0x8017ABB4u; f_8005FC60(c); // 8017ABB0
  c->r[3]=c->r[1]+0x00000024u; // 8017ABB4
  c->r[4]=c->r[1]+0x00000018u; // 8017ABB8
  c->lr=0x8017ABC0u; f_8005CD7C(c); // 8017ABBC
  c->lr=0x8017ABC4u; f_80084FAC(c); // 8017ABC0
  c->lr=0x8017ABC8u; f_803BA9AC(c); // 8017ABC4
  c->f[31]=c->ps1[31]=S(c->f[1]); // 8017ABC8
  c->r[0]=0u+0x00000000u; // 8017ABCC
  W8(c->r[1]+0x00000008u,c->r[0]); // 8017ABD0
  c->r[3]=c->r[1]+0x00000008u; // 8017ABD4
  c->lr=0x8017ABDCu; f_8004714C(c); // 8017ABD8
  {uint32_t ea=c->r[3]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 8017ABDC
  {uint32_t ea=c->r[2]+0xFFFFBCFCu; c->f[1]=c->ps1[1]=RF32(ea);} // 8017ABE0
  {uint32_t ea=c->r[25]+0x0000068Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8017ABE4
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[2]); // 8017ABE8
  {uint32_t ea=c->r[2]+0xFFFFBD04u; c->f[2]=c->ps1[2]=RF32(ea);} // 8017ABEC
  c->f[1]=c->ps1[1]=S(c->f[1]/c->f[31]); // 8017ABF0
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[1]); // 8017ABF4
  {uint32_t ea=c->r[25]+0x0000068Cu; WF32(ea,c->f[0]);} // 8017ABF8
  fcmp(c,0,c->f[0],c->f[2]); // 8017ABFC
  if (!crb(c,0)) { goto L_8017AC08; } // 8017AC00
  goto L_8017AC1C; // 8017AC04
L_8017AC08:;
  {uint32_t ea=c->r[2]+0xFFFFBD08u; c->f[2]=c->ps1[2]=RF32(ea);} // 8017AC08
  fcmp(c,0,c->f[0],c->f[2]); // 8017AC0C
  if (!crb(c,1)) { goto L_8017AC18; } // 8017AC10
  goto L_8017AC1C; // 8017AC14
L_8017AC18:;
  c->f[2]=c->f[0]; // 8017AC18
L_8017AC1C:;
  {uint32_t ea=c->r[25]+0x0000068Cu; WF32(ea,c->f[2]);} // 8017AC1C
  c->r[3]=c->r[1]+0x00000090u; // 8017AC20
  c->r[4]=c->r[25]+0x0000062Cu; // 8017AC24
  c->lr=0x8017AC2Cu; f_8005CD7C(c); // 8017AC28
  c->r[3]=c->r[1]+0x00000084u; // 8017AC2C
  c->r[4]=c->r[25]+0x00000638u; // 8017AC30
  c->lr=0x8017AC38u; f_8005CD7C(c); // 8017AC34
  c->r[3]=c->r[1]+0x00000078u; // 8017AC38
  c->r[4]=c->r[25]+0x00000644u; // 8017AC3C
  c->lr=0x8017AC44u; f_8005CD7C(c); // 8017AC40
  c->r[3]=c->r[1]+0x0000006Cu; // 8017AC44
  c->r[4]=c->r[25]+0x00000650u; // 8017AC48
  c->lr=0x8017AC50u; f_8005CD7C(c); // 8017AC4C
  {uint32_t ea=c->r[25]+0x0000068Cu; c->f[31]=c->ps1[31]=RF32(ea);} // 8017AC50
  {uint32_t ea=c->r[1]+0x00000090u; c->f[1]=c->ps1[1]=RF32(ea);} // 8017AC54
  c->f[5]=c->f[31]; // 8017AC58
  {uint32_t ea=c->r[1]+0x00000084u; c->f[2]=c->ps1[2]=RF32(ea);} // 8017AC5C
  {uint32_t ea=c->r[1]+0x00000078u; c->f[3]=c->ps1[3]=RF32(ea);} // 8017AC60
  {uint32_t ea=c->r[1]+0x0000006Cu; c->f[4]=c->ps1[4]=RF32(ea);} // 8017AC64
  c->lr=0x8017AC6Cu; f_800C36E4(c); // 8017AC68
  c->f[5]=c->f[31]; // 8017AC6C
  {uint32_t ea=c->r[1]+0x00000060u; WF32(ea,c->f[1]);} // 8017AC70
  {uint32_t ea=c->r[1]+0x00000094u; c->f[1]=c->ps1[1]=RF32(ea);} // 8017AC74
  {uint32_t ea=c->r[1]+0x00000088u; c->f[2]=c->ps1[2]=RF32(ea);} // 8017AC78
  {uint32_t ea=c->r[1]+0x0000007Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 8017AC7C
  {uint32_t ea=c->r[1]+0x00000070u; c->f[4]=c->ps1[4]=RF32(ea);} // 8017AC80
  c->lr=0x8017AC88u; f_800C36E4(c); // 8017AC84
  c->f[5]=c->f[31]; // 8017AC88
  {uint32_t ea=c->r[1]+0x00000064u; WF32(ea,c->f[1]);} // 8017AC8C
  {uint32_t ea=c->r[1]+0x00000098u; c->f[1]=c->ps1[1]=RF32(ea);} // 8017AC90
  {uint32_t ea=c->r[1]+0x0000008Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 8017AC94
  {uint32_t ea=c->r[1]+0x00000080u; c->f[3]=c->ps1[3]=RF32(ea);} // 8017AC98
  {uint32_t ea=c->r[1]+0x00000074u; c->f[4]=c->ps1[4]=RF32(ea);} // 8017AC9C
  c->lr=0x8017ACA4u; f_800C36E4(c); // 8017ACA0
  {uint32_t ea=c->r[1]+0x00000068u; WF32(ea,c->f[1]);} // 8017ACA4
  c->r[3]=c->r[25]+0x000001B8u; // 8017ACA8
  c->r[4]=c->r[1]+0x000000F0u; // 8017ACAC
  c->lr=0x8017ACB4u; f_80382F2C(c); // 8017ACB0
  c->r[3]=c->r[1]+0x000000F0u; // 8017ACB4
  c->r[4]=c->r[1]+0x00000060u; // 8017ACB8
  c->lr=0x8017ACC0u; f_8005CDC8(c); // 8017ACBC
  c->r[12]=R32(c->r[25]+0x0000001Cu); // 8017ACC0
  c->r[3]=c->r[25]|c->r[25]; // 8017ACC4
  c->r[4]=c->r[1]+0x000000F0u; // 8017ACC8
  c->r[12]=R32(c->r[12]+0x00000020u); // 8017ACCC
  c->ctr=c->r[12]; // 8017ACD0
  if (true) { c->lr=0x8017ACD8u; dispatch(c,c->ctr); } // 8017ACD4
  c->r[12]=R32(c->r[25]+0x0000001Cu); // 8017ACD8
  c->r[3]=c->r[25]|c->r[25]; // 8017ACDC
  c->r[4]=c->r[1]+0x000000C0u; // 8017ACE0
  c->r[12]=R32(c->r[12]+0x00000148u); // 8017ACE4
  c->ctr=c->r[12]; // 8017ACE8
  if (true) { c->lr=0x8017ACF0u; dispatch(c,c->ctr); } // 8017ACEC
  c->r[4]=c->r[3]|c->r[3]; // 8017ACF0
  c->r[3]=c->r[1]+0x0000000Cu; // 8017ACF4
  c->lr=0x8017ACFCu; f_80060878(c); // 8017ACF8
  {uint32_t ea=c->r[2]+0xFFFFBD24u; c->f[1]=c->ps1[1]=RF32(ea);} // 8017ACFC
  c->r[3]=c->r[25]|c->r[25]; // 8017AD00
  {uint32_t ea=c->r[2]+0xFFFFBD08u; c->f[3]=c->ps1[3]=RF32(ea);} // 8017AD04
  c->r[4]=c->r[1]+0x0000000Cu; // 8017AD08
  c->f[2]=c->f[1]; // 8017AD0C
  c->lr=0x8017AD14u; f_80063BD8(c); // 8017AD10
  c->r[0]=0u+0x00000000u; // 8017AD14
  W32(c->r[1]+0x00000468u,c->r[0]); // 8017AD18
  {uint32_t ea=c->r[1]+0x00000498u; psq_load(c,31,ea,0,0);} // 8017AD1C
  {uint32_t ea=c->r[1]+0x00000490u; c->f[31]=RF64(ea);} // 8017AD20
  c->r[11]=c->r[1]+0x00000490u; // 8017AD24
  c->lr=0x8017AD2Cu; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8017AD28
  c->r[0]=R32(c->r[1]+0x000004A4u); // 8017AD2C
  c->lr=c->r[0]; // 8017AD30
  c->r[1]=c->r[1]+0x000004A0u; // 8017AD34
  return; // 8017AD38
}

// fn_8017AD3C
void f_8017AD3C(Ctx* __restrict c) {
  trace_call(0x8017AD3Cu);
  return; // 8017AD3C
}

// fn_8017AD40
void f_8017AD40(Ctx* __restrict c) {
  trace_call(0x8017AD40u);
  c->r[3]=c->r[3]+0xFFFFFCACu; // 8017AD40
  f_801785B0(c); return; // 8017AD44
}

// fn_8017AD48
void f_8017AD48(Ctx* __restrict c) {
  trace_call(0x8017AD48u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8017AD48
  c->r[0]=c->lr; // 8017AD4C
  c->r[4]=0u+0x806D0000u; // 8017AD50
  W32(c->r[1]+0x00000024u,c->r[0]); // 8017AD54
  c->r[4]=c->r[4]+0xFFFFE0C0u; // 8017AD58
  {uint32_t ea=c->r[1]+0x00000010u; for(int i=28;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 8017AD5C
  c->r[30]=0u+0x80690000u; // 8017AD60
  c->r[28]=c->r[3]+0x00000004u; // 8017AD64
  c->r[31]=c->r[3]|c->r[3]; // 8017AD68
  c->r[30]=c->r[30]+0x00001818u; // 8017AD6C
  W32(c->r[3]+0x00000000u,c->r[4]); // 8017AD70
  c->r[3]=c->r[28]|c->r[28]; // 8017AD74
  c->lr=0x8017AD7Cu; f_800506C0(c); // 8017AD78
  cmps(c,0,(int32_t)c->r[28],0); // 8017AD7C
  c->r[0]=c->r[28]|c->r[28]; // 8017AD80
  if (crb(c,2)) { goto L_8017AD8C; } // 8017AD84
  c->r[0]=c->r[28]+0xFFFFFFFCu; // 8017AD88
L_8017AD8C:;
  c->r[29]=c->r[31]+0x00000010u; // 8017AD8C
  W32(c->r[28]+0x00000008u,c->r[0]); // 8017AD90
  c->r[3]=c->r[29]|c->r[29]; // 8017AD94
  c->lr=0x8017AD9Cu; f_800506C0(c); // 8017AD98
  cmps(c,0,(int32_t)c->r[29],0); // 8017AD9C
  c->r[0]=c->r[29]|c->r[29]; // 8017ADA0
  if (crb(c,2)) { goto L_8017ADAC; } // 8017ADA4
  c->r[0]=c->r[29]+0xFFFFFFF0u; // 8017ADA8
L_8017ADAC:;
  c->r[3]=0u+0x806D0000u; // 8017ADAC
  c->r[4]=0u+0x00000000u; // 8017ADB0
  c->r[3]=c->r[3]+0xFFFFE058u; // 8017ADB4
  W32(c->r[29]+0x00000008u,c->r[0]); // 8017ADB8
  c->r[0]=c->r[3]+0x00000018u; // 8017ADBC
  W32(c->r[31]+0x00000020u,c->r[4]); // 8017ADC0
  W32(c->r[31]+0x00000000u,c->r[3]); // 8017ADC4
  W32(c->r[31]+0x00000024u,c->r[0]); // 8017ADC8
  c->r[0]=R8(c->r[13]+0xFFFFCCB4u); // 8017ADCC
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 8017ADD0
  if (!crb(c,2)) { goto L_8017ADF0; } // 8017ADD4
  c->r[3]=R32(c->r[13]+0xFFFFBCB0u); // 8017ADD8
  c->r[0]=0u+0x00000001u; // 8017ADDC
  W32(c->r[13]+0xFFFFCCB0u,c->r[3]); // 8017ADE0
  c->r[3]=c->r[3]+0x00000001u; // 8017ADE4
  W32(c->r[13]+0xFFFFBCB0u,c->r[3]); // 8017ADE8
  W8(c->r[13]+0xFFFFCCB4u,c->r[0]); // 8017ADEC
L_8017ADF0:;
  c->r[0]=R32(c->r[13]+0xFFFFCCB0u); // 8017ADF0
  c->r[5]=0u+0x806E0000u; // 8017ADF4
  W32(c->r[31]+0x00000028u,c->r[0]); // 8017ADF8
  c->r[5]=c->r[5]+0xFFFFFF18u; // 8017ADFC
  c->r[4]=c->r[5]+0x00000018u; // 8017AE00
  c->r[6]=0u+0x00000001u; // 8017AE04
  c->r[3]=R32(c->r[13]+0xFFFF8B10u); // 8017AE08
  c->r[0]=0u+0x00000000u; // 8017AE0C
  W32(c->r[31]+0x0000002Cu,c->r[3]); // 8017AE10
  c->r[3]=c->r[31]|c->r[31]; // 8017AE14
  W32(c->r[31]+0x0000001Cu,c->r[30]); // 8017AE18
  W8(c->r[31]+0x00000034u,c->r[6]); // 8017AE1C
  W32(c->r[31]+0x00000000u,c->r[5]); // 8017AE20
  W32(c->r[31]+0x00000024u,c->r[4]); // 8017AE24
  W8(c->r[31]+0x0000008Cu,c->r[0]); // 8017AE28
  W32(c->r[31]+0x00000088u,c->r[0]); // 8017AE2C
  {uint32_t ea=c->r[1]+0x00000010u; for(int i=28;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 8017AE30
  c->r[0]=R32(c->r[1]+0x00000024u); // 8017AE34
  c->lr=c->r[0]; // 8017AE38
  c->r[1]=c->r[1]+0x00000020u; // 8017AE3C
  return; // 8017AE40
}

// fn_8017AE44
void f_8017AE44(Ctx* __restrict c) {
  trace_call(0x8017AE44u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8017AE44
  c->r[0]=c->lr; // 8017AE48
  cmps(c,0,(int32_t)c->r[3],0); // 8017AE4C
  W32(c->r[1]+0x00000014u,c->r[0]); // 8017AE50
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 8017AE54
  c->r[30]=c->r[3]|c->r[3]; // 8017AE58
  c->r[31]=c->r[4]|c->r[4]; // 8017AE5C
  if (crb(c,2)) { goto L_8017AE7C; } // 8017AE60
  c->r[4]=0u+0x00000000u; // 8017AE64
  c->lr=0x8017AE6Cu; f_80053874(c); // 8017AE68
  cmps(c,0,(int32_t)c->r[31],0); // 8017AE6C
  if (!crb(c,1)) { goto L_8017AE7C; } // 8017AE70
  c->r[3]=c->r[30]|c->r[30]; // 8017AE74
  c->lr=0x8017AE7Cu; f_8005328C(c); // 8017AE78
L_8017AE7C:;
  c->r[3]=c->r[30]|c->r[30]; // 8017AE7C
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 8017AE80
  c->r[0]=R32(c->r[1]+0x00000014u); // 8017AE84
  c->lr=c->r[0]; // 8017AE88
  c->r[1]=c->r[1]+0x00000010u; // 8017AE8C
  return; // 8017AE90
}

// fn_8017AE94
void f_8017AE94(Ctx* __restrict c) {
  trace_call(0x8017AE94u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8017AE94
  c->r[0]=c->lr; // 8017AE98
  W32(c->r[1]+0x00000024u,c->r[0]); // 8017AE9C
  {uint32_t ea=c->r[1]+0x00000018u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 8017AEA0
  c->r[30]=c->r[3]|c->r[3]; // 8017AEA4
  c->r[12]=R32(c->r[3]+0x00000000u); // 8017AEA8
  c->r[31]=R32(c->r[3]+0x00000030u); // 8017AEAC
  c->r[12]=R32(c->r[12]+0x00000048u); // 8017AEB0
  c->ctr=c->r[12]; // 8017AEB4
  if (true) { c->lr=0x8017AEBCu; dispatch(c,c->ctr); } // 8017AEB8
  c->r[4]=c->r[3]|c->r[3]; // 8017AEBC
  c->r[3]=c->r[31]|c->r[31]; // 8017AEC0
  c->lr=0x8017AEC8u; f_802E6E50(c); // 8017AEC4
  W32(c->r[1]+0x00000008u,c->r[3]); // 8017AEC8
  c->r[3]=c->r[1]+0x00000008u; // 8017AECC
  c->lr=0x8017AED4u; f_8005C9DC(c); // 8017AED0
  W32(c->r[30]+0x00000038u,c->r[3]); // 8017AED4
  c->r[0]=R32(c->r[1]+0x00000008u); // 8017AED8
  cmps(c,0,(int32_t)c->r[0],0); // 8017AEDC
  if (!crb(c,2)) { goto L_8017AF00; } // 8017AEE0
  c->r[3]=0u+0x806D0000u; // 8017AEE4
  c->r[5]=0u+0x806D0000u; // 8017AEE8
  c->r[3]=c->r[3]+0xFFFFD9D8u; // 8017AEEC
  c->r[4]=0u+0x00000053u; // 8017AEF0
  c->r[5]=c->r[5]+0xFFFFD9B8u; // 8017AEF4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8017AEF8
  c->lr=0x8017AF00u; f_80484674(c); // 8017AEFC
L_8017AF00:;
  c->r[3]=R32(c->r[1]+0x00000008u); // 8017AF00
  cmps(c,0,(int32_t)c->r[3],0); // 8017AF04
  if (crb(c,2)) { goto L_8017AF14; } // 8017AF08
  c->r[0]=R32(c->r[3]+0x00000010u); // 8017AF0C
  goto L_8017AF18; // 8017AF10
L_8017AF14:;
  c->r[0]=0u+0x00000000u; // 8017AF14
L_8017AF18:;
  W32(c->r[30]+0x0000003Cu,c->r[0]); // 8017AF18
  {uint32_t ea=c->r[1]+0x00000018u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 8017AF1C
  c->r[0]=R32(c->r[1]+0x00000024u); // 8017AF20
  c->lr=c->r[0]; // 8017AF24
  c->r[1]=c->r[1]+0x00000020u; // 8017AF28
  return; // 8017AF2C
}

// fn_8017AF30
void f_8017AF30(Ctx* __restrict c) {
  trace_call(0x8017AF30u);
  return; // 8017AF30
}

// fn_8017AF34
void f_8017AF34(Ctx* __restrict c) {
  trace_call(0x8017AF34u);
  c->r[0]=R8(c->r[3]+0x0000008Cu); // 8017AF34
  cmps(c,0,(int32_t)c->r[0],0); // 8017AF38
  if (!crb(c,2)) return; // 8017AF3C
  c->r[4]=0u+0x00000001u; // 8017AF40
  c->r[0]=0u+0x00000000u; // 8017AF44
  W8(c->r[3]+0x0000008Cu,c->r[4]); // 8017AF48
  W32(c->r[3]+0x00000088u,c->r[0]); // 8017AF4C
  return; // 8017AF50
}

// fn_8017AF54
void f_8017AF54(Ctx* __restrict c) {
  trace_call(0x8017AF54u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8017AF54
  c->r[0]=c->lr; // 8017AF58
  W32(c->r[1]+0x00000044u,c->r[0]); // 8017AF5C
  W32(c->r[1]+0x0000003Cu,c->r[31]); // 8017AF60
  W32(c->r[1]+0x00000038u,c->r[30]); // 8017AF64
  c->r[30]=c->r[3]|c->r[3]; // 8017AF68
  c->r[0]=R8(c->r[3]+0x0000008Cu); // 8017AF6C
  cmps(c,0,(int32_t)c->r[0],0); // 8017AF70
  if (crb(c,2)) { goto L_8017B06C; } // 8017AF74
  c->r[0]=R32(c->r[3]+0x0000003Cu); // 8017AF78
  c->r[3]=c->r[3]+0x00000040u; // 8017AF7C
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)48); // 8017AF80
  c->r[31]=c->r[4]+c->r[0]; // 8017AF84
  c->r[4]=c->r[1]+0x00000008u; // 8017AF88
  c->lr=0x8017AF90u; f_80382F2C(c); // 8017AF8C
  c->r[0]=R32(c->r[30]+0x00000088u); // 8017AF90
  cmps(c,0,(int32_t)c->r[0],0); // 8017AF94
  if (crb(c,2)) { goto L_8017AFC0; } // 8017AF98
  cmps(c,0,(int32_t)c->r[0],16); // 8017AF9C
  if (crb(c,2)) { goto L_8017AFEC; } // 8017AFA0
  cmps(c,0,(int32_t)c->r[0],32); // 8017AFA4
  if (crb(c,2)) { goto L_8017B014; } // 8017AFA8
  cmps(c,0,(int32_t)c->r[0],33); // 8017AFAC
  if (crb(c,2)) { goto L_8017B038; } // 8017AFB0
  cmps(c,0,(int32_t)c->r[0],48); // 8017AFB4
  if (crb(c,2)) { goto L_8017B060; } // 8017AFB8
  goto L_8017B06C; // 8017AFBC
L_8017AFC0:;
  c->r[3]=c->r[31]|c->r[31]; // 8017AFC0
  c->r[4]=c->r[30]+0x00000040u; // 8017AFC4
  c->lr=0x8017AFCCu; f_80382F2C(c); // 8017AFC8
  c->r[4]=0u+0x806E0000u; // 8017AFCC
  c->r[5]=0u+0x80760000u; // 8017AFD0
  c->r[3]=c->r[30]|c->r[30]; // 8017AFD4
  c->r[4]=c->r[4]+0xFFFFFC30u; // 8017AFD8
  c->r[5]=c->r[5]+0xFFFF9C9Cu; // 8017AFDC
  c->lr=0x8017AFE4u; f_8017B084(c); // 8017AFE0
  c->r[0]=0u+0x00000010u; // 8017AFE4
  W32(c->r[30]+0x00000088u,c->r[0]); // 8017AFE8
L_8017AFEC:;
  c->r[4]=0u+0x806E0000u; // 8017AFEC
  {uint32_t ea=c->r[13]+0xFFFF8AF8u; c->f[1]=c->ps1[1]=RF32(ea);} // 8017AFF0
  c->r[3]=c->r[30]|c->r[30]; // 8017AFF4
  c->r[5]=c->r[31]|c->r[31]; // 8017AFF8
  c->r[4]=c->r[4]+0xFFFFFC30u; // 8017AFFC
  c->lr=0x8017B004u; f_8017B378(c); // 8017B000
  cmps(c,0,(int32_t)c->r[3],0); // 8017B004
  if (crb(c,2)) { goto L_8017B06C; } // 8017B008
  c->r[0]=0u+0x00000020u; // 8017B00C
  W32(c->r[30]+0x00000088u,c->r[0]); // 8017B010
L_8017B014:;
  c->r[4]=0u+0x806E0000u; // 8017B014
  c->r[5]=0u+0x80760000u; // 8017B018
  c->r[3]=c->r[30]|c->r[30]; // 8017B01C
  c->r[4]=c->r[4]+0xFFFFFC58u; // 8017B020
  c->r[5]=c->r[5]+0xFFFF9C9Cu; // 8017B024
  c->lr=0x8017B02Cu; f_8017B084(c); // 8017B028
  c->r[3]=R32(c->r[30]+0x00000088u); // 8017B02C
  c->r[0]=c->r[3]+0x00000001u; // 8017B030
  W32(c->r[30]+0x00000088u,c->r[0]); // 8017B034
L_8017B038:;
  c->r[4]=0u+0x806E0000u; // 8017B038
  {uint32_t ea=c->r[13]+0xFFFF8AF8u; c->f[1]=c->ps1[1]=RF32(ea);} // 8017B03C
  c->r[3]=c->r[30]|c->r[30]; // 8017B040
  c->r[5]=c->r[31]|c->r[31]; // 8017B044
  c->r[4]=c->r[4]+0xFFFFFC58u; // 8017B048
  c->lr=0x8017B050u; f_8017B378(c); // 8017B04C
  cmps(c,0,(int32_t)c->r[3],0); // 8017B050
  if (crb(c,2)) { goto L_8017B06C; } // 8017B054
  c->r[0]=0u+0x00000030u; // 8017B058
  W32(c->r[30]+0x00000088u,c->r[0]); // 8017B05C
L_8017B060:;
  c->r[4]=c->r[31]|c->r[31]; // 8017B060
  c->r[3]=c->r[30]+0x00000040u; // 8017B064
  c->lr=0x8017B06Cu; f_80382F2C(c); // 8017B068
L_8017B06C:;
  c->r[0]=R32(c->r[1]+0x00000044u); // 8017B06C
  c->r[31]=R32(c->r[1]+0x0000003Cu); // 8017B070
  c->r[30]=R32(c->r[1]+0x00000038u); // 8017B074
  c->lr=c->r[0]; // 8017B078
  c->r[1]=c->r[1]+0x00000040u; // 8017B07C
  return; // 8017B080
}

