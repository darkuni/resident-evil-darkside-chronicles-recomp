#include "funcs.h"
#pragma GCC diagnostic ignored "-Wunused-label"

// fn_80213620
void f_80213620(Ctx* __restrict c) {
  trace_call(0x80213620u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80213620
  c->r[0]=c->lr; // 80213624
  cmps(c,0,(int32_t)c->r[4],2); // 80213628
  W32(c->r[1]+0x00000014u,c->r[0]); // 8021362C
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 80213630
  c->r[30]=c->r[4]|c->r[4]; // 80213634
  c->r[31]=c->r[5]|c->r[5]; // 80213638
  if (!crb(c,2)) { goto L_80213650; } // 8021363C
  cmps(c,0,(int32_t)c->r[5],4); // 80213640
  if (!crb(c,1)) { goto L_80213650; } // 80213644
  c->r[3]=0u+0x00000000u; // 80213648
  goto L_80213688; // 8021364C
L_80213650:;
  cmps(c,0,(int32_t)c->r[4],3); // 80213650
  if (!crb(c,2)) { goto L_80213674; } // 80213654
  cmps(c,0,(int32_t)c->r[5],2); // 80213658
  if (!crb(c,0)) { goto L_8021366C; } // 8021365C
  c->r[31]=c->r[5]+0x00000005u; // 80213660
  c->r[30]=0u+0x00000002u; // 80213664
  goto L_80213674; // 80213668
L_8021366C:;
  c->r[3]=0u+0x00000000u; // 8021366C
  goto L_80213688; // 80213670
L_80213674:;
  c->r[3]=R32(c->r[13]+0xFFFFC218u); // 80213674
  c->lr=0x8021367Cu; f_800CEC5C(c); // 80213678
  c->r[4]=c->r[30]+0x00000001u; // 8021367C
  c->r[5]=c->r[31]+0x00000001u; // 80213680
  c->lr=0x80213688u; f_800CF7B0(c); // 80213684
L_80213688:;
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 80213688
  c->r[0]=R32(c->r[1]+0x00000014u); // 8021368C
  c->lr=c->r[0]; // 80213690
  c->r[1]=c->r[1]+0x00000010u; // 80213694
  return; // 80213698
}

// fn_8021369C
void f_8021369C(Ctx* __restrict c) {
  trace_call(0x8021369Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8021369C
  c->r[0]=c->lr; // 802136A0
  {uint32_t ea=c->r[2]+0xFFFFDCF8u; c->f[2]=c->ps1[2]=RF32(ea);} // 802136A4
  W32(c->r[1]+0x00000064u,c->r[0]); // 802136A8
  {uint32_t ea=c->r[1]+0x00000050u; WF64(ea,c->f[31]);} // 802136AC
  {uint32_t ea=c->r[1]+0x00000058u; psq_store(c,31,ea,0,0);} // 802136B0
  {uint32_t ea=c->r[2]+0xFFFFDCF4u; c->f[31]=c->ps1[31]=RF32(ea);} // 802136B4
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[30]);} // 802136B8
  {uint32_t ea=c->r[1]+0x00000048u; psq_store(c,30,ea,0,0);} // 802136BC
  c->f[30]=c->f[1]; // 802136C0
  {uint32_t ea=c->r[2]+0xFFFFDCF0u; c->f[1]=c->ps1[1]=RF32(ea);} // 802136C4
  W32(c->r[1]+0x0000003Cu,c->r[31]); // 802136C8
  c->r[31]=c->r[3]|c->r[3]; // 802136CC
  c->f[3]=c->f[1]; // 802136D0
  c->r[3]=c->r[1]+0x00000020u; // 802136D4
  c->lr=0x802136DCu; f_8005FD70(c); // 802136D8
  {uint32_t ea=c->r[2]+0xFFFFDCF0u; c->f[1]=c->ps1[1]=RF32(ea);} // 802136DC
  c->r[3]=c->r[1]+0x00000014u; // 802136E0
  c->f[2]=c->f[1]; // 802136E4
  c->f[3]=c->f[1]; // 802136E8
  c->lr=0x802136F0u; f_8005FD70(c); // 802136EC
  c->r[0]=R32(c->r[31]+0x00000614u); // 802136F0
  cmps(c,0,(int32_t)c->r[0],0); // 802136F4
  if (!crb(c,2)) { goto L_80213918; } // 802136F8
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 802136FC
  c->r[3]=c->r[31]+c->r[0]; // 80213700
  c->r[0]=R32(c->r[3]+0x00000644u); // 80213704
  cmps(c,0,(int32_t)c->r[0],1); // 80213708
  if (!crb(c,2)) { goto L_8021373C; } // 8021370C
  {uint32_t ea=c->r[2]+0xFFFFDD10u; c->f[31]=c->ps1[31]=RF32(ea);} // 80213710
  c->r[3]=c->r[1]+0x00000020u; // 80213714
  {uint32_t ea=c->r[2]+0xFFFFDD14u; c->f[1]=c->ps1[1]=RF32(ea);} // 80213718
  c->f[2]=c->f[31]; // 8021371C
  {uint32_t ea=c->r[2]+0xFFFFDCF0u; c->f[3]=c->ps1[3]=RF32(ea);} // 80213720
  c->lr=0x80213728u; f_8005A6D0(c); // 80213724
  {uint32_t ea=c->r[2]+0xFFFFDD18u; c->f[1]=c->ps1[1]=RF32(ea);} // 80213728
  c->r[3]=c->r[1]+0x00000014u; // 8021372C
  {uint32_t ea=c->r[2]+0xFFFFDD1Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 80213730
  {uint32_t ea=c->r[2]+0xFFFFDD20u; c->f[3]=c->ps1[3]=RF32(ea);} // 80213734
  c->lr=0x8021373Cu; f_8005A6D0(c); // 80213738
L_8021373C:;
  c->r[0]=R32(c->r[31]+0x00000614u); // 8021373C
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80213740
  c->r[3]=c->r[31]+c->r[0]; // 80213744
  c->r[0]=R32(c->r[3]+0x00000644u); // 80213748
  cmps(c,0,(int32_t)c->r[0],2); // 8021374C
  if (!crb(c,2)) { goto L_80213780; } // 80213750
  {uint32_t ea=c->r[2]+0xFFFFDD24u; c->f[31]=c->ps1[31]=RF32(ea);} // 80213754
  c->r[3]=c->r[1]+0x00000020u; // 80213758
  {uint32_t ea=c->r[2]+0xFFFFDD28u; c->f[1]=c->ps1[1]=RF32(ea);} // 8021375C
  {uint32_t ea=c->r[2]+0xFFFFDD2Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 80213760
  {uint32_t ea=c->r[2]+0xFFFFDCF0u; c->f[3]=c->ps1[3]=RF32(ea);} // 80213764
  c->lr=0x8021376Cu; f_8005A6D0(c); // 80213768
  {uint32_t ea=c->r[2]+0xFFFFDD30u; c->f[1]=c->ps1[1]=RF32(ea);} // 8021376C
  c->r[3]=c->r[1]+0x00000014u; // 80213770
  {uint32_t ea=c->r[2]+0xFFFFDD34u; c->f[2]=c->ps1[2]=RF32(ea);} // 80213774
  {uint32_t ea=c->r[2]+0xFFFFDD38u; c->f[3]=c->ps1[3]=RF32(ea);} // 80213778
  c->lr=0x80213780u; f_8005A6D0(c); // 8021377C
L_80213780:;
  c->r[0]=R32(c->r[31]+0x00000614u); // 80213780
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80213784
  c->r[3]=c->r[31]+c->r[0]; // 80213788
  c->r[0]=R32(c->r[3]+0x00000644u); // 8021378C
  cmps(c,0,(int32_t)c->r[0],3); // 80213790
  if (!crb(c,2)) { goto L_802137C4; } // 80213794
  {uint32_t ea=c->r[2]+0xFFFFDCF0u; c->f[1]=c->ps1[1]=RF32(ea);} // 80213798
  c->r[3]=c->r[1]+0x00000020u; // 8021379C
  {uint32_t ea=c->r[2]+0xFFFFDD3Cu; c->f[31]=c->ps1[31]=RF32(ea);} // 802137A0
  c->f[3]=c->f[1]; // 802137A4
  {uint32_t ea=c->r[2]+0xFFFFDD2Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 802137A8
  c->lr=0x802137B0u; f_8005A6D0(c); // 802137AC
  {uint32_t ea=c->r[2]+0xFFFFDD40u; c->f[1]=c->ps1[1]=RF32(ea);} // 802137B0
  c->r[3]=c->r[1]+0x00000014u; // 802137B4
  {uint32_t ea=c->r[2]+0xFFFFDD44u; c->f[2]=c->ps1[2]=RF32(ea);} // 802137B8
  {uint32_t ea=c->r[2]+0xFFFFDD48u; c->f[3]=c->ps1[3]=RF32(ea);} // 802137BC
  c->lr=0x802137C4u; f_8005A6D0(c); // 802137C0
L_802137C4:;
  c->r[0]=R32(c->r[31]+0x00000614u); // 802137C4
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 802137C8
  c->r[3]=c->r[31]+c->r[0]; // 802137CC
  c->r[0]=R32(c->r[3]+0x00000644u); // 802137D0
  cmps(c,0,(int32_t)c->r[0],4); // 802137D4
  if (!crb(c,2)) { goto L_80213808; } // 802137D8
  {uint32_t ea=c->r[2]+0xFFFFDCF0u; c->f[1]=c->ps1[1]=RF32(ea);} // 802137DC
  c->r[3]=c->r[1]+0x00000020u; // 802137E0
  {uint32_t ea=c->r[2]+0xFFFFDD4Cu; c->f[31]=c->ps1[31]=RF32(ea);} // 802137E4
  c->f[3]=c->f[1]; // 802137E8
  {uint32_t ea=c->r[2]+0xFFFFDD0Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 802137EC
  c->lr=0x802137F4u; f_8005A6D0(c); // 802137F0
  {uint32_t ea=c->r[2]+0xFFFFDD50u; c->f[1]=c->ps1[1]=RF32(ea);} // 802137F4
  c->r[3]=c->r[1]+0x00000014u; // 802137F8
  {uint32_t ea=c->r[2]+0xFFFFDD54u; c->f[2]=c->ps1[2]=RF32(ea);} // 802137FC
  {uint32_t ea=c->r[2]+0xFFFFDD58u; c->f[3]=c->ps1[3]=RF32(ea);} // 80213800
  c->lr=0x80213808u; f_8005A6D0(c); // 80213804
L_80213808:;
  c->r[0]=R32(c->r[31]+0x00000614u); // 80213808
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 8021380C
  c->r[3]=c->r[31]+c->r[0]; // 80213810
  c->r[0]=R32(c->r[3]+0x00000644u); // 80213814
  cmps(c,0,(int32_t)c->r[0],5); // 80213818
  if (!crb(c,2)) { goto L_8021384C; } // 8021381C
  {uint32_t ea=c->r[2]+0xFFFFDCF0u; c->f[1]=c->ps1[1]=RF32(ea);} // 80213820
  c->r[3]=c->r[1]+0x00000020u; // 80213824
  {uint32_t ea=c->r[2]+0xFFFFDD5Cu; c->f[31]=c->ps1[31]=RF32(ea);} // 80213828
  c->f[3]=c->f[1]; // 8021382C
  {uint32_t ea=c->r[2]+0xFFFFDD60u; c->f[2]=c->ps1[2]=RF32(ea);} // 80213830
  c->lr=0x80213838u; f_8005A6D0(c); // 80213834
  {uint32_t ea=c->r[2]+0xFFFFDD64u; c->f[1]=c->ps1[1]=RF32(ea);} // 80213838
  c->r[3]=c->r[1]+0x00000014u; // 8021383C
  {uint32_t ea=c->r[2]+0xFFFFDD68u; c->f[2]=c->ps1[2]=RF32(ea);} // 80213840
  {uint32_t ea=c->r[2]+0xFFFFDD6Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 80213844
  c->lr=0x8021384Cu; f_8005A6D0(c); // 80213848
L_8021384C:;
  c->r[0]=R32(c->r[31]+0x00000614u); // 8021384C
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80213850
  c->r[3]=c->r[31]+c->r[0]; // 80213854
  c->r[0]=R32(c->r[3]+0x00000644u); // 80213858
  cmps(c,0,(int32_t)c->r[0],6); // 8021385C
  if (!crb(c,2)) { goto L_80213890; } // 80213860
  {uint32_t ea=c->r[2]+0xFFFFDCF0u; c->f[1]=c->ps1[1]=RF32(ea);} // 80213864
  c->r[3]=c->r[1]+0x00000020u; // 80213868
  {uint32_t ea=c->r[2]+0xFFFFDD70u; c->f[31]=c->ps1[31]=RF32(ea);} // 8021386C
  c->f[3]=c->f[1]; // 80213870
  {uint32_t ea=c->r[2]+0xFFFFDD0Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 80213874
  c->lr=0x8021387Cu; f_8005A6D0(c); // 80213878
  {uint32_t ea=c->r[2]+0xFFFFDD74u; c->f[1]=c->ps1[1]=RF32(ea);} // 8021387C
  c->r[3]=c->r[1]+0x00000014u; // 80213880
  {uint32_t ea=c->r[2]+0xFFFFDD78u; c->f[2]=c->ps1[2]=RF32(ea);} // 80213884
  {uint32_t ea=c->r[2]+0xFFFFDD7Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 80213888
  c->lr=0x80213890u; f_8005A6D0(c); // 8021388C
L_80213890:;
  c->r[0]=R32(c->r[31]+0x00000614u); // 80213890
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80213894
  c->r[3]=c->r[31]+c->r[0]; // 80213898
  c->r[0]=R32(c->r[3]+0x00000644u); // 8021389C
  cmps(c,0,(int32_t)c->r[0],7); // 802138A0
  if (!crb(c,2)) { goto L_802138D4; } // 802138A4
  {uint32_t ea=c->r[2]+0xFFFFDCF0u; c->f[1]=c->ps1[1]=RF32(ea);} // 802138A8
  c->r[3]=c->r[1]+0x00000020u; // 802138AC
  {uint32_t ea=c->r[2]+0xFFFFDD70u; c->f[31]=c->ps1[31]=RF32(ea);} // 802138B0
  c->f[3]=c->f[1]; // 802138B4
  {uint32_t ea=c->r[2]+0xFFFFDCF8u; c->f[2]=c->ps1[2]=RF32(ea);} // 802138B8
  c->lr=0x802138C0u; f_8005A6D0(c); // 802138BC
  {uint32_t ea=c->r[2]+0xFFFFDD80u; c->f[1]=c->ps1[1]=RF32(ea);} // 802138C0
  c->r[3]=c->r[1]+0x00000014u; // 802138C4
  {uint32_t ea=c->r[2]+0xFFFFDD84u; c->f[2]=c->ps1[2]=RF32(ea);} // 802138C8
  {uint32_t ea=c->r[2]+0xFFFFDD88u; c->f[3]=c->ps1[3]=RF32(ea);} // 802138CC
  c->lr=0x802138D4u; f_8005A6D0(c); // 802138D0
L_802138D4:;
  c->r[0]=R32(c->r[31]+0x00000614u); // 802138D4
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 802138D8
  c->r[3]=c->r[31]+c->r[0]; // 802138DC
  c->r[0]=R32(c->r[3]+0x00000644u); // 802138E0
  cmps(c,0,(int32_t)c->r[0],8); // 802138E4
  if (!crb(c,2)) { goto L_80213918; } // 802138E8
  {uint32_t ea=c->r[2]+0xFFFFDCF0u; c->f[1]=c->ps1[1]=RF32(ea);} // 802138EC
  c->r[3]=c->r[1]+0x00000020u; // 802138F0
  {uint32_t ea=c->r[2]+0xFFFFDCF4u; c->f[31]=c->ps1[31]=RF32(ea);} // 802138F4
  c->f[3]=c->f[1]; // 802138F8
  {uint32_t ea=c->r[2]+0xFFFFDCF8u; c->f[2]=c->ps1[2]=RF32(ea);} // 802138FC
  c->lr=0x80213904u; f_8005A6D0(c); // 80213900
  {uint32_t ea=c->r[2]+0xFFFFDD8Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 80213904
  c->r[3]=c->r[1]+0x00000014u; // 80213908
  {uint32_t ea=c->r[2]+0xFFFFDD90u; c->f[2]=c->ps1[2]=RF32(ea);} // 8021390C
  {uint32_t ea=c->r[2]+0xFFFFDD94u; c->f[3]=c->ps1[3]=RF32(ea);} // 80213910
  c->lr=0x80213918u; f_8005A6D0(c); // 80213914
L_80213918:;
  c->r[0]=R32(c->r[31]+0x00000614u); // 80213918
  cmps(c,0,(int32_t)c->r[0],1); // 8021391C
  if (!crb(c,2)) { goto L_80213AFC; } // 80213920
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80213924
  c->r[3]=c->r[31]+c->r[0]; // 80213928
  c->r[0]=R32(c->r[3]+0x00000644u); // 8021392C
  cmps(c,0,(int32_t)c->r[0],1); // 80213930
  if (!crb(c,2)) { goto L_80213964; } // 80213934
  {uint32_t ea=c->r[2]+0xFFFFDD10u; c->f[31]=c->ps1[31]=RF32(ea);} // 80213938
  c->r[3]=c->r[1]+0x00000020u; // 8021393C
  {uint32_t ea=c->r[2]+0xFFFFDD98u; c->f[1]=c->ps1[1]=RF32(ea);} // 80213940
  {uint32_t ea=c->r[2]+0xFFFFDD60u; c->f[2]=c->ps1[2]=RF32(ea);} // 80213944
  {uint32_t ea=c->r[2]+0xFFFFDCF0u; c->f[3]=c->ps1[3]=RF32(ea);} // 80213948
  c->lr=0x80213950u; f_8005A6D0(c); // 8021394C
  {uint32_t ea=c->r[2]+0xFFFFDD9Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 80213950
  c->r[3]=c->r[1]+0x00000014u; // 80213954
  {uint32_t ea=c->r[2]+0xFFFFDDA0u; c->f[2]=c->ps1[2]=RF32(ea);} // 80213958
  {uint32_t ea=c->r[2]+0xFFFFDDA4u; c->f[3]=c->ps1[3]=RF32(ea);} // 8021395C
  c->lr=0x80213964u; f_8005A6D0(c); // 80213960
L_80213964:;
  c->r[0]=R32(c->r[31]+0x00000614u); // 80213964
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80213968
  c->r[3]=c->r[31]+c->r[0]; // 8021396C
  c->r[0]=R32(c->r[3]+0x00000644u); // 80213970
  cmps(c,0,(int32_t)c->r[0],2); // 80213974
  if (!crb(c,2)) { goto L_802139A8; } // 80213978
  {uint32_t ea=c->r[2]+0xFFFFDCF0u; c->f[1]=c->ps1[1]=RF32(ea);} // 8021397C
  c->r[3]=c->r[1]+0x00000020u; // 80213980
  {uint32_t ea=c->r[2]+0xFFFFDD10u; c->f[31]=c->ps1[31]=RF32(ea);} // 80213984
  c->f[3]=c->f[1]; // 80213988
  {uint32_t ea=c->r[2]+0xFFFFDD60u; c->f[2]=c->ps1[2]=RF32(ea);} // 8021398C
  c->lr=0x80213994u; f_8005A6D0(c); // 80213990
  {uint32_t ea=c->r[2]+0xFFFFDDA8u; c->f[1]=c->ps1[1]=RF32(ea);} // 80213994
  c->r[3]=c->r[1]+0x00000014u; // 80213998
  {uint32_t ea=c->r[2]+0xFFFFDDACu; c->f[2]=c->ps1[2]=RF32(ea);} // 8021399C
  {uint32_t ea=c->r[2]+0xFFFFDDB0u; c->f[3]=c->ps1[3]=RF32(ea);} // 802139A0
  c->lr=0x802139A8u; f_8005A6D0(c); // 802139A4
L_802139A8:;
  c->r[0]=R32(c->r[31]+0x00000614u); // 802139A8
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 802139AC
  c->r[3]=c->r[31]+c->r[0]; // 802139B0
  c->r[0]=R32(c->r[3]+0x00000644u); // 802139B4
  cmps(c,0,(int32_t)c->r[0],3); // 802139B8
  if (!crb(c,2)) { goto L_802139EC; } // 802139BC
  {uint32_t ea=c->r[2]+0xFFFFDCF0u; c->f[1]=c->ps1[1]=RF32(ea);} // 802139C0
  c->r[3]=c->r[1]+0x00000020u; // 802139C4
  {uint32_t ea=c->r[2]+0xFFFFDDB4u; c->f[31]=c->ps1[31]=RF32(ea);} // 802139C8
  c->f[3]=c->f[1]; // 802139CC
  {uint32_t ea=c->r[2]+0xFFFFDDB8u; c->f[2]=c->ps1[2]=RF32(ea);} // 802139D0
  c->lr=0x802139D8u; f_8005A6D0(c); // 802139D4
  {uint32_t ea=c->r[2]+0xFFFFDDBCu; c->f[1]=c->ps1[1]=RF32(ea);} // 802139D8
  c->r[3]=c->r[1]+0x00000014u; // 802139DC
  {uint32_t ea=c->r[2]+0xFFFFDDC0u; c->f[2]=c->ps1[2]=RF32(ea);} // 802139E0
  {uint32_t ea=c->r[2]+0xFFFFDCF0u; c->f[3]=c->ps1[3]=RF32(ea);} // 802139E4
  c->lr=0x802139ECu; f_8005A6D0(c); // 802139E8
L_802139EC:;
  c->r[0]=R32(c->r[31]+0x00000614u); // 802139EC
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 802139F0
  c->r[3]=c->r[31]+c->r[0]; // 802139F4
  c->r[0]=R32(c->r[3]+0x00000644u); // 802139F8
  cmps(c,0,(int32_t)c->r[0],4); // 802139FC
  if (!crb(c,2)) { goto L_80213A30; } // 80213A00
  {uint32_t ea=c->r[2]+0xFFFFDCF0u; c->f[1]=c->ps1[1]=RF32(ea);} // 80213A04
  c->r[3]=c->r[1]+0x00000020u; // 80213A08
  {uint32_t ea=c->r[2]+0xFFFFDDC4u; c->f[31]=c->ps1[31]=RF32(ea);} // 80213A0C
  c->f[3]=c->f[1]; // 80213A10
  {uint32_t ea=c->r[2]+0xFFFFDDB8u; c->f[2]=c->ps1[2]=RF32(ea);} // 80213A14
  c->lr=0x80213A1Cu; f_8005A6D0(c); // 80213A18
  {uint32_t ea=c->r[2]+0xFFFFDDC8u; c->f[1]=c->ps1[1]=RF32(ea);} // 80213A1C
  c->r[3]=c->r[1]+0x00000014u; // 80213A20
  {uint32_t ea=c->r[2]+0xFFFFDDCCu; c->f[2]=c->ps1[2]=RF32(ea);} // 80213A24
  {uint32_t ea=c->r[2]+0xFFFFDDD0u; c->f[3]=c->ps1[3]=RF32(ea);} // 80213A28
  c->lr=0x80213A30u; f_8005A6D0(c); // 80213A2C
L_80213A30:;
  c->r[0]=R32(c->r[31]+0x00000614u); // 80213A30
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80213A34
  c->r[3]=c->r[31]+c->r[0]; // 80213A38
  c->r[0]=R32(c->r[3]+0x00000644u); // 80213A3C
  cmps(c,0,(int32_t)c->r[0],5); // 80213A40
  if (!crb(c,2)) { goto L_80213A74; } // 80213A44
  {uint32_t ea=c->r[2]+0xFFFFDCF0u; c->f[1]=c->ps1[1]=RF32(ea);} // 80213A48
  c->r[3]=c->r[1]+0x00000020u; // 80213A4C
  {uint32_t ea=c->r[2]+0xFFFFDDD4u; c->f[31]=c->ps1[31]=RF32(ea);} // 80213A50
  c->f[3]=c->f[1]; // 80213A54
  {uint32_t ea=c->r[2]+0xFFFFDDD8u; c->f[2]=c->ps1[2]=RF32(ea);} // 80213A58
  c->lr=0x80213A60u; f_8005A6D0(c); // 80213A5C
  {uint32_t ea=c->r[2]+0xFFFFDD60u; c->f[1]=c->ps1[1]=RF32(ea);} // 80213A60
  c->r[3]=c->r[1]+0x00000014u; // 80213A64
  {uint32_t ea=c->r[2]+0xFFFFDDDCu; c->f[2]=c->ps1[2]=RF32(ea);} // 80213A68
  {uint32_t ea=c->r[2]+0xFFFFDDE0u; c->f[3]=c->ps1[3]=RF32(ea);} // 80213A6C
  c->lr=0x80213A74u; f_8005A6D0(c); // 80213A70
L_80213A74:;
  c->r[0]=R32(c->r[31]+0x00000614u); // 80213A74
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80213A78
  c->r[3]=c->r[31]+c->r[0]; // 80213A7C
  c->r[0]=R32(c->r[3]+0x00000644u); // 80213A80
  cmps(c,0,(int32_t)c->r[0],6); // 80213A84
  if (!crb(c,2)) { goto L_80213AB8; } // 80213A88
  {uint32_t ea=c->r[2]+0xFFFFDCF0u; c->f[1]=c->ps1[1]=RF32(ea);} // 80213A8C
  c->r[3]=c->r[1]+0x00000020u; // 80213A90
  {uint32_t ea=c->r[2]+0xFFFFDDE4u; c->f[31]=c->ps1[31]=RF32(ea);} // 80213A94
  c->f[3]=c->f[1]; // 80213A98
  {uint32_t ea=c->r[2]+0xFFFFDD48u; c->f[2]=c->ps1[2]=RF32(ea);} // 80213A9C
  c->lr=0x80213AA4u; f_8005A6D0(c); // 80213AA0
  {uint32_t ea=c->r[2]+0xFFFFDDE8u; c->f[1]=c->ps1[1]=RF32(ea);} // 80213AA4
  c->r[3]=c->r[1]+0x00000014u; // 80213AA8
  {uint32_t ea=c->r[2]+0xFFFFDDECu; c->f[2]=c->ps1[2]=RF32(ea);} // 80213AAC
  {uint32_t ea=c->r[2]+0xFFFFDD88u; c->f[3]=c->ps1[3]=RF32(ea);} // 80213AB0
  c->lr=0x80213AB8u; f_8005A6D0(c); // 80213AB4
L_80213AB8:;
  c->r[0]=R32(c->r[31]+0x00000614u); // 80213AB8
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80213ABC
  c->r[3]=c->r[31]+c->r[0]; // 80213AC0
  c->r[0]=R32(c->r[3]+0x00000644u); // 80213AC4
  cmps(c,0,(int32_t)c->r[0],7); // 80213AC8
  if (!crb(c,2)) { goto L_80213AFC; } // 80213ACC
  {uint32_t ea=c->r[2]+0xFFFFDCF0u; c->f[1]=c->ps1[1]=RF32(ea);} // 80213AD0
  c->r[3]=c->r[1]+0x00000020u; // 80213AD4
  {uint32_t ea=c->r[2]+0xFFFFDDF0u; c->f[31]=c->ps1[31]=RF32(ea);} // 80213AD8
  c->f[2]=c->f[1]; // 80213ADC
  c->f[3]=c->f[1]; // 80213AE0
  c->lr=0x80213AE8u; f_8005A6D0(c); // 80213AE4
  {uint32_t ea=c->r[2]+0xFFFFDDF4u; c->f[1]=c->ps1[1]=RF32(ea);} // 80213AE8
  c->r[3]=c->r[1]+0x00000014u; // 80213AEC
  {uint32_t ea=c->r[2]+0xFFFFDDF8u; c->f[2]=c->ps1[2]=RF32(ea);} // 80213AF0
  {uint32_t ea=c->r[2]+0xFFFFDDFCu; c->f[3]=c->ps1[3]=RF32(ea);} // 80213AF4
  c->lr=0x80213AFCu; f_8005A6D0(c); // 80213AF8
L_80213AFC:;
  c->r[0]=R32(c->r[31]+0x00000614u); // 80213AFC
  cmps(c,0,(int32_t)c->r[0],2); // 80213B00
  if (!crb(c,2)) { goto L_80213C58; } // 80213B04
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80213B08
  c->r[3]=c->r[31]+c->r[0]; // 80213B0C
  c->r[0]=R32(c->r[3]+0x00000644u); // 80213B10
  cmps(c,0,(int32_t)c->r[0],1); // 80213B14
  if (!crb(c,2)) { goto L_80213B48; } // 80213B18
  {uint32_t ea=c->r[2]+0xFFFFDE00u; c->f[31]=c->ps1[31]=RF32(ea);} // 80213B1C
  c->r[3]=c->r[1]+0x00000020u; // 80213B20
  {uint32_t ea=c->r[2]+0xFFFFDE04u; c->f[1]=c->ps1[1]=RF32(ea);} // 80213B24
  {uint32_t ea=c->r[2]+0xFFFFDE08u; c->f[2]=c->ps1[2]=RF32(ea);} // 80213B28
  {uint32_t ea=c->r[2]+0xFFFFDCF0u; c->f[3]=c->ps1[3]=RF32(ea);} // 80213B2C
  c->lr=0x80213B34u; f_8005A6D0(c); // 80213B30
  {uint32_t ea=c->r[2]+0xFFFFDE0Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 80213B34
  c->r[3]=c->r[1]+0x00000014u; // 80213B38
  {uint32_t ea=c->r[2]+0xFFFFDE10u; c->f[2]=c->ps1[2]=RF32(ea);} // 80213B3C
  {uint32_t ea=c->r[2]+0xFFFFDE14u; c->f[3]=c->ps1[3]=RF32(ea);} // 80213B40
  c->lr=0x80213B48u; f_8005A6D0(c); // 80213B44
L_80213B48:;
  c->r[0]=R32(c->r[31]+0x00000614u); // 80213B48
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80213B4C
  c->r[3]=c->r[31]+c->r[0]; // 80213B50
  c->r[0]=R32(c->r[3]+0x00000644u); // 80213B54
  cmps(c,0,(int32_t)c->r[0],2); // 80213B58
  if (!crb(c,2)) { goto L_80213B8C; } // 80213B5C
  {uint32_t ea=c->r[2]+0xFFFFDCF0u; c->f[1]=c->ps1[1]=RF32(ea);} // 80213B60
  c->r[3]=c->r[1]+0x00000020u; // 80213B64
  {uint32_t ea=c->r[2]+0xFFFFDD3Cu; c->f[31]=c->ps1[31]=RF32(ea);} // 80213B68
  c->f[3]=c->f[1]; // 80213B6C
  {uint32_t ea=c->r[2]+0xFFFFDD60u; c->f[2]=c->ps1[2]=RF32(ea);} // 80213B70
  c->lr=0x80213B78u; f_8005A6D0(c); // 80213B74
  {uint32_t ea=c->r[2]+0xFFFFDE18u; c->f[1]=c->ps1[1]=RF32(ea);} // 80213B78
  c->r[3]=c->r[1]+0x00000014u; // 80213B7C
  {uint32_t ea=c->r[2]+0xFFFFDE1Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 80213B80
  {uint32_t ea=c->r[2]+0xFFFFDE20u; c->f[3]=c->ps1[3]=RF32(ea);} // 80213B84
  c->lr=0x80213B8Cu; f_8005A6D0(c); // 80213B88
L_80213B8C:;
  c->r[0]=R32(c->r[31]+0x00000614u); // 80213B8C
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80213B90
  c->r[3]=c->r[31]+c->r[0]; // 80213B94
  c->r[0]=R32(c->r[3]+0x00000644u); // 80213B98
  cmps(c,0,(int32_t)c->r[0],3); // 80213B9C
  if (!crb(c,2)) { goto L_80213BD0; } // 80213BA0
  {uint32_t ea=c->r[2]+0xFFFFDCF0u; c->f[1]=c->ps1[1]=RF32(ea);} // 80213BA4
  c->r[3]=c->r[1]+0x00000020u; // 80213BA8
  {uint32_t ea=c->r[2]+0xFFFFDDE4u; c->f[31]=c->ps1[31]=RF32(ea);} // 80213BAC
  c->f[3]=c->f[1]; // 80213BB0
  {uint32_t ea=c->r[2]+0xFFFFDE24u; c->f[2]=c->ps1[2]=RF32(ea);} // 80213BB4
  c->lr=0x80213BBCu; f_8005A6D0(c); // 80213BB8
  {uint32_t ea=c->r[2]+0xFFFFDE28u; c->f[1]=c->ps1[1]=RF32(ea);} // 80213BBC
  c->r[3]=c->r[1]+0x00000014u; // 80213BC0
  {uint32_t ea=c->r[2]+0xFFFFDE2Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 80213BC4
  {uint32_t ea=c->r[2]+0xFFFFDE30u; c->f[3]=c->ps1[3]=RF32(ea);} // 80213BC8
  c->lr=0x80213BD0u; f_8005A6D0(c); // 80213BCC
L_80213BD0:;
  c->r[0]=R32(c->r[31]+0x00000614u); // 80213BD0
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80213BD4
  c->r[3]=c->r[31]+c->r[0]; // 80213BD8
  c->r[0]=R32(c->r[3]+0x00000644u); // 80213BDC
  cmps(c,0,(int32_t)c->r[0],4); // 80213BE0
  if (!crb(c,2)) { goto L_80213C14; } // 80213BE4
  {uint32_t ea=c->r[2]+0xFFFFDCF0u; c->f[1]=c->ps1[1]=RF32(ea);} // 80213BE8
  c->r[3]=c->r[1]+0x00000020u; // 80213BEC
  {uint32_t ea=c->r[2]+0xFFFFDDE4u; c->f[31]=c->ps1[31]=RF32(ea);} // 80213BF0
  c->f[3]=c->f[1]; // 80213BF4
  {uint32_t ea=c->r[2]+0xFFFFDE24u; c->f[2]=c->ps1[2]=RF32(ea);} // 80213BF8
  c->lr=0x80213C00u; f_8005A6D0(c); // 80213BFC
  {uint32_t ea=c->r[2]+0xFFFFDE34u; c->f[1]=c->ps1[1]=RF32(ea);} // 80213C00
  c->r[3]=c->r[1]+0x00000014u; // 80213C04
  {uint32_t ea=c->r[2]+0xFFFFDE38u; c->f[2]=c->ps1[2]=RF32(ea);} // 80213C08
  {uint32_t ea=c->r[2]+0xFFFFDD20u; c->f[3]=c->ps1[3]=RF32(ea);} // 80213C0C
  c->lr=0x80213C14u; f_8005A6D0(c); // 80213C10
L_80213C14:;
  c->r[0]=R32(c->r[31]+0x00000614u); // 80213C14
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80213C18
  c->r[3]=c->r[31]+c->r[0]; // 80213C1C
  c->r[0]=R32(c->r[3]+0x00000644u); // 80213C20
  cmps(c,0,(int32_t)c->r[0],5); // 80213C24
  if (!crb(c,2)) { goto L_80213C58; } // 80213C28
  {uint32_t ea=c->r[2]+0xFFFFDCF0u; c->f[1]=c->ps1[1]=RF32(ea);} // 80213C2C
  c->r[3]=c->r[1]+0x00000020u; // 80213C30
  {uint32_t ea=c->r[2]+0xFFFFDDD4u; c->f[31]=c->ps1[31]=RF32(ea);} // 80213C34
  c->f[3]=c->f[1]; // 80213C38
  {uint32_t ea=c->r[2]+0xFFFFDE3Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 80213C3C
  c->lr=0x80213C44u; f_8005A6D0(c); // 80213C40
  {uint32_t ea=c->r[2]+0xFFFFDE40u; c->f[1]=c->ps1[1]=RF32(ea);} // 80213C44
  c->r[3]=c->r[1]+0x00000014u; // 80213C48
  {uint32_t ea=c->r[2]+0xFFFFDE44u; c->f[2]=c->ps1[2]=RF32(ea);} // 80213C4C
  {uint32_t ea=c->r[2]+0xFFFFDCF0u; c->f[3]=c->ps1[3]=RF32(ea);} // 80213C50
  c->lr=0x80213C58u; f_8005A6D0(c); // 80213C54
L_80213C58:;
  c->r[0]=R32(c->r[31]+0x00000614u); // 80213C58
  cmps(c,0,(int32_t)c->r[0],3); // 80213C5C
  if (!crb(c,2)) { goto L_80213CE8; } // 80213C60
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80213C64
  c->r[3]=c->r[31]+c->r[0]; // 80213C68
  c->r[0]=R32(c->r[3]+0x00000644u); // 80213C6C
  cmps(c,0,(int32_t)c->r[0],1); // 80213C70
  if (!crb(c,2)) { goto L_80213CA4; } // 80213C74
  {uint32_t ea=c->r[2]+0xFFFFDCF0u; c->f[1]=c->ps1[1]=RF32(ea);} // 80213C78
  c->r[3]=c->r[1]+0x00000020u; // 80213C7C
  {uint32_t ea=c->r[2]+0xFFFFDE48u; c->f[31]=c->ps1[31]=RF32(ea);} // 80213C80
  c->f[3]=c->f[1]; // 80213C84
  {uint32_t ea=c->r[2]+0xFFFFDE4Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 80213C88
  c->lr=0x80213C90u; f_8005A6D0(c); // 80213C8C
  {uint32_t ea=c->r[2]+0xFFFFDE50u; c->f[1]=c->ps1[1]=RF32(ea);} // 80213C90
  c->r[3]=c->r[1]+0x00000014u; // 80213C94
  {uint32_t ea=c->r[2]+0xFFFFDE54u; c->f[2]=c->ps1[2]=RF32(ea);} // 80213C98
  {uint32_t ea=c->r[2]+0xFFFFDE58u; c->f[3]=c->ps1[3]=RF32(ea);} // 80213C9C
  c->lr=0x80213CA4u; f_8005A6D0(c); // 80213CA0
L_80213CA4:;
  c->r[0]=R32(c->r[31]+0x00000614u); // 80213CA4
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80213CA8
  c->r[3]=c->r[31]+c->r[0]; // 80213CAC
  c->r[0]=R32(c->r[3]+0x00000644u); // 80213CB0
  cmps(c,0,(int32_t)c->r[0],2); // 80213CB4
  if (!crb(c,2)) { goto L_80213CE8; } // 80213CB8
  {uint32_t ea=c->r[2]+0xFFFFDCF0u; c->f[1]=c->ps1[1]=RF32(ea);} // 80213CBC
  c->r[3]=c->r[1]+0x00000020u; // 80213CC0
  {uint32_t ea=c->r[2]+0xFFFFDE48u; c->f[31]=c->ps1[31]=RF32(ea);} // 80213CC4
  c->f[3]=c->f[1]; // 80213CC8
  {uint32_t ea=c->r[2]+0xFFFFDE5Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 80213CCC
  c->lr=0x80213CD4u; f_8005A6D0(c); // 80213CD0
  {uint32_t ea=c->r[2]+0xFFFFDE60u; c->f[1]=c->ps1[1]=RF32(ea);} // 80213CD4
  c->r[3]=c->r[1]+0x00000014u; // 80213CD8
  {uint32_t ea=c->r[2]+0xFFFFDE64u; c->f[2]=c->ps1[2]=RF32(ea);} // 80213CDC
  {uint32_t ea=c->r[2]+0xFFFFDE68u; c->f[3]=c->ps1[3]=RF32(ea);} // 80213CE0
  c->lr=0x80213CE8u; f_8005A6D0(c); // 80213CE4
L_80213CE8:;
  {uint32_t ea=c->r[31]+0x0000063Cu; WF32(ea,c->f[31]);} // 80213CE8
  c->r[3]=c->r[31]+0x00000630u; // 80213CEC
  c->r[4]=c->r[1]+0x00000020u; // 80213CF0
  c->lr=0x80213CF8u; f_8005DC84(c); // 80213CF4
  c->r[3]=c->r[31]+0x00000624u; // 80213CF8
  c->r[4]=c->r[1]+0x00000014u; // 80213CFC
  c->lr=0x80213D04u; f_8005DC84(c); // 80213D00
  c->r[3]=c->r[1]+0x00000008u; // 80213D04
  c->r[4]=c->r[31]+0x00000624u; // 80213D08
  c->r[5]=c->r[31]+0x00000630u; // 80213D0C
  c->lr=0x80213D14u; f_80073ACC(c); // 80213D10
  c->lr=0x80213D18u; f_8033FE4C(c); // 80213D14
  c->lr=0x80213D1Cu; f_8007FF5C(c); // 80213D18
  c->f[2]=c->f[31]; // 80213D1C
  {uint32_t ea=c->r[2]+0xFFFFDCF0u; c->f[1]=c->ps1[1]=RF32(ea);} // 80213D20
  c->f[3]=c->f[30]; // 80213D24
  c->r[4]=c->r[1]+0x00000008u; // 80213D28
  c->r[5]=0u+0x00000007u; // 80213D2C
  c->lr=0x80213D34u; f_803676B8(c); // 80213D30
  c->r[0]=R32(c->r[1]+0x00000064u); // 80213D34
  {uint32_t ea=c->r[1]+0x00000058u; psq_load(c,31,ea,0,0);} // 80213D38
  {uint32_t ea=c->r[1]+0x00000050u; c->f[31]=RF64(ea);} // 80213D3C
  {uint32_t ea=c->r[1]+0x00000048u; psq_load(c,30,ea,0,0);} // 80213D40
  {uint32_t ea=c->r[1]+0x00000040u; c->f[30]=RF64(ea);} // 80213D44
  c->r[31]=R32(c->r[1]+0x0000003Cu); // 80213D48
  c->lr=c->r[0]; // 80213D4C
  c->r[1]=c->r[1]+0x00000060u; // 80213D50
  return; // 80213D54
}

// fn_80213D58
void f_80213D58(Ctx* __restrict c) {
  trace_call(0x80213D58u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80213D58
  c->r[0]=c->lr; // 80213D5C
  W32(c->r[1]+0x00000024u,c->r[0]); // 80213D60
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80213D64
  c->r[3]=R32(c->r[3]+0x00000004u); // 80213D68
  cmps(c,0,(int32_t)c->r[3],0); // 80213D6C
  if (crb(c,2)) { goto L_80213D7C; } // 80213D70
  c->r[0]=R32(c->r[3]+0x00000008u); // 80213D74
  goto L_80213D80; // 80213D78
L_80213D7C:;
  c->r[0]=0u+0x00000000u; // 80213D7C
L_80213D80:;
  cmps(c,0,(int32_t)c->r[0],0); // 80213D80
  if (!crb(c,2)) { goto L_80213DB8; } // 80213D84
  {uint32_t ea=c->r[2]+0xFFFFDCF0u; c->f[1]=c->ps1[1]=RF32(ea);} // 80213D88
  c->r[3]=c->r[1]+0x00000008u; // 80213D8C
  c->f[2]=c->f[1]; // 80213D90
  c->f[3]=c->f[1]; // 80213D94
  c->lr=0x80213D9Cu; f_8005FD70(c); // 80213D98
  c->r[31]=c->r[3]|c->r[3]; // 80213D9C
  c->lr=0x80213DA4u; f_8033FE4C(c); // 80213DA0
  c->lr=0x80213DA8u; f_8007FF5C(c); // 80213DA4
  {uint32_t ea=c->r[2]+0xFFFFDCF0u; c->f[1]=c->ps1[1]=RF32(ea);} // 80213DA8
  c->r[4]=c->r[31]|c->r[31]; // 80213DAC
  c->r[5]=0u+0x00000007u; // 80213DB0
  c->lr=0x80213DB8u; f_803676A8(c); // 80213DB4
L_80213DB8:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 80213DB8
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80213DBC
  c->lr=c->r[0]; // 80213DC0
  c->r[1]=c->r[1]+0x00000020u; // 80213DC4
  return; // 80213DC8
}

// fn_80213DCC
void f_80213DCC(Ctx* __restrict c) {
  trace_call(0x80213DCCu);
  {uint32_t ea=c->r[1]+0xFFFFFD50u; W32(ea,c->r[1]); c->r[1]=ea;} // 80213DCC
  c->r[0]=c->lr; // 80213DD0
  W32(c->r[1]+0x000002B4u,c->r[0]); // 80213DD4
  c->r[11]=c->r[1]+0x00000260u; // 80213DD8
  {uint32_t ea=c->r[1]+0x000002A0u; WF64(ea,c->f[31]);} // 80213DDC
  {uint32_t ea=c->r[1]+0x000002A8u; psq_store(c,31,ea,0,0);} // 80213DE0
  {uint32_t ea=c->r[1]+0x00000290u; WF64(ea,c->f[30]);} // 80213DE4
  {uint32_t ea=c->r[1]+0x00000298u; psq_store(c,30,ea,0,0);} // 80213DE8
  {uint32_t ea=c->r[1]+0x00000280u; WF64(ea,c->f[29]);} // 80213DEC
  {uint32_t ea=c->r[1]+0x00000288u; psq_store(c,29,ea,0,0);} // 80213DF0
  {uint32_t ea=c->r[1]+0x00000270u; WF64(ea,c->f[28]);} // 80213DF4
  {uint32_t ea=c->r[1]+0x00000278u; psq_store(c,28,ea,0,0);} // 80213DF8
  {uint32_t ea=c->r[1]+0x00000260u; WF64(ea,c->f[27]);} // 80213DFC
  {uint32_t ea=c->r[1]+0x00000268u; psq_store(c,27,ea,0,0);} // 80213E00
  c->lr=0x80213E08u; { W32(c->r[11]+0xFFFFFFD4u,c->r[21]); W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80213E04
  c->r[5]=R32(c->r[3]+0x00000004u); // 80213E08
  c->r[24]=c->r[3]|c->r[3]; // 80213E0C
  c->r[25]=c->r[4]|c->r[4]; // 80213E10
  cmps(c,0,(int32_t)c->r[5],0); // 80213E14
  if (crb(c,2)) { goto L_80213E24; } // 80213E18
  c->r[0]=R32(c->r[5]+0x00000008u); // 80213E1C
  goto L_80213E28; // 80213E20
L_80213E24:;
  c->r[0]=0u+0x00000000u; // 80213E24
L_80213E28:;
  cmps(c,0,(int32_t)c->r[0],0); // 80213E28
  if (!crb(c,2)) { goto L_80214090; } // 80213E2C
  {uint32_t ea=c->r[2]+0xFFFFDCF0u; c->f[2]=c->ps1[2]=RF32(ea);} // 80213E30
  c->r[27]=0u+0x806A0000u; // 80213E34
  c->r[27]=c->r[27]+0xFFFF8510u; // 80213E38
  {uint32_t ea=c->r[2]+0xFFFFDCE8u; c->f[1]=c->ps1[1]=RF32(ea);} // 80213E3C
  c->f[3]=c->f[2]; // 80213E40
  c->r[4]=c->r[27]+0x000002E6u; // 80213E44
  c->r[3]=c->r[3]+0x000003ECu; // 80213E48
  c->lr=0x80213E50u; f_800E24D0(c); // 80213E4C
  c->r[3]=c->r[24]+0x00000498u; // 80213E50
  c->lr=0x80213E58u; f_8007ECBC(c); // 80213E54
  c->r[4]=0u+0x00000000u; // 80213E58
  c->r[3]=c->r[3]+0x000000FCu; // 80213E5C
  c->lr=0x80213E64u; f_802E6678(c); // 80213E60
  c->r[0]=R32(c->r[24]+0x00000604u); // 80213E64
  c->r[3]=c->r[24]+0x00000548u; // 80213E68
  W32(c->r[24]+0x00000614u,c->r[0]); // 80213E6C
  c->r[0]=rotl(c->r[0],3)&0xFFFFFFF8u; // 80213E70
  c->r[4]=c->r[24]+c->r[0]; // 80213E74
  c->r[4]=c->r[4]+0x000004A0u; // 80213E78
  c->lr=0x80213E80u; f_80053568(c); // 80213E7C
  c->r[0]=R32(c->r[24]+0x00000608u); // 80213E80
  c->r[3]=c->r[24]+0x00000550u; // 80213E84
  W32(c->r[24]+0x00000618u,c->r[0]); // 80213E88
  c->r[0]=rotl(c->r[0],3)&0xFFFFFFF8u; // 80213E8C
  c->r[4]=c->r[24]+c->r[0]; // 80213E90
  c->r[4]=c->r[4]+0x000004C0u; // 80213E94
  c->lr=0x80213E9Cu; f_80053568(c); // 80213E98
  c->r[0]=R32(c->r[24]+0x0000060Cu); // 80213E9C
  c->r[3]=c->r[24]+0x00000558u; // 80213EA0
  W32(c->r[24]+0x0000061Cu,c->r[0]); // 80213EA4
  c->r[0]=rotl(c->r[0],3)&0xFFFFFFF8u; // 80213EA8
  c->r[4]=c->r[24]+c->r[0]; // 80213EAC
  c->r[4]=c->r[4]+0x00000508u; // 80213EB0
  c->lr=0x80213EB8u; f_80053568(c); // 80213EB4
  c->r[3]=R32(c->r[24]+0x000003E8u); // 80213EB8
  c->r[0]=R32(c->r[24]+0x00000614u); // 80213EBC
  W32(c->r[3]+0x00000124u,c->r[0]); // 80213EC0
  c->r[3]=R32(c->r[24]+0x000003E8u); // 80213EC4
  c->r[0]=R32(c->r[24]+0x00000618u); // 80213EC8
  W32(c->r[3]+0x00000128u,c->r[0]); // 80213ECC
  c->r[3]=R32(c->r[24]+0x000003E8u); // 80213ED0
  c->r[0]=R32(c->r[24]+0x0000061Cu); // 80213ED4
  W32(c->r[3]+0x0000012Cu,c->r[0]); // 80213ED8
  c->r[0]=R32(c->r[24]+0x00000600u); // 80213EDC
  cmps(c,0,(int32_t)c->r[0],2); // 80213EE0
  if (!crb(c,0)) { goto L_80213F44; } // 80213EE4
  c->r[3]=c->r[24]+0x00000490u; // 80213EE8
  c->lr=0x80213EF0u; f_8007ECBC(c); // 80213EEC
  {uint32_t ea=c->r[2]+0xFFFFDCE8u; c->f[1]=c->ps1[1]=RF32(ea);} // 80213EF0
  c->r[4]=c->r[27]+0x000002FBu; // 80213EF4
  {uint32_t ea=c->r[2]+0xFFFFDCF0u; c->f[2]=c->ps1[2]=RF32(ea);} // 80213EF8
  c->r[5]=0u+0x00000001u; // 80213EFC
  c->lr=0x80213F04u; f_8015DD64(c); // 80213F00
  c->r[3]=c->r[24]+0x00000490u; // 80213F04
  c->lr=0x80213F0Cu; f_8007ECBC(c); // 80213F08
  {uint32_t ea=c->r[2]+0xFFFFDD0Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 80213F0C
  c->lr=0x80213F14u; f_8015DF90(c); // 80213F10
  c->r[3]=c->r[24]+0x00000498u; // 80213F14
  c->lr=0x80213F1Cu; f_8007ECBC(c); // 80213F18
  {uint32_t ea=c->r[2]+0xFFFFDCE8u; c->f[1]=c->ps1[1]=RF32(ea);} // 80213F1C
  c->r[4]=c->r[27]+0x000002FEu; // 80213F20
  {uint32_t ea=c->r[2]+0xFFFFDCF0u; c->f[2]=c->ps1[2]=RF32(ea);} // 80213F24
  c->r[5]=0u+0x00000000u; // 80213F28
  c->lr=0x80213F30u; f_8015DD64(c); // 80213F2C
  c->r[3]=c->r[24]+0x00000498u; // 80213F30
  c->lr=0x80213F38u; f_8007ECBC(c); // 80213F34
  {uint32_t ea=c->r[2]+0xFFFFDD0Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 80213F38
  c->lr=0x80213F40u; f_8015DF90(c); // 80213F3C
  goto L_80214090; // 80213F40
L_80213F44:;
  if (!crb(c,2)) { goto L_80214028; } // 80213F44
  c->r[4]=R32(c->r[24]+0x000003E8u); // 80213F48
  c->r[5]=0u+0x00000000u; // 80213F4C
  c->r[0]=0u+0x00000001u; // 80213F50
  c->r[3]=c->r[24]+0x00000508u; // 80213F54
  W32(c->r[4]+0x00000130u,c->r[5]); // 80213F58
  c->r[4]=R32(c->r[24]+0x000003E8u); // 80213F5C
  W32(c->r[4]+0x00000134u,c->r[5]); // 80213F60
  c->r[4]=R32(c->r[24]+0x000003E8u); // 80213F64
  W32(c->r[4]+0x00000008u,c->r[5]); // 80213F68
  W32(c->r[4]+0x0000000Cu,c->r[0]); // 80213F6C
  c->lr=0x80213F74u; f_8007ECBC(c); // 80213F70
  c->r[21]=c->r[3]|c->r[3]; // 80213F74
  c->r[3]=R32(c->r[24]+0x00000614u); // 80213F78
  c->r[4]=R32(c->r[24]+0x00000618u); // 80213F7C
  c->r[5]=0u+0x00000000u; // 80213F80
  c->lr=0x80213F88u; f_8021097C(c); // 80213F84
  c->r[5]=c->r[3]|c->r[3]; // 80213F88
  c->r[3]=c->r[21]|c->r[21]; // 80213F8C
  c->r[4]=0u+0x00000000u; // 80213F90
  c->lr=0x80213F98u; f_8015E088(c); // 80213F94
  c->r[3]=c->r[24]+0x00000510u; // 80213F98
  c->lr=0x80213FA0u; f_8007ECBC(c); // 80213F9C
  c->r[21]=c->r[3]|c->r[3]; // 80213FA0
  c->r[3]=R32(c->r[24]+0x00000614u); // 80213FA4
  c->r[4]=R32(c->r[24]+0x00000618u); // 80213FA8
  c->r[5]=0u+0x00000000u; // 80213FAC
  c->lr=0x80213FB4u; f_80210BD0(c); // 80213FB0
  c->r[5]=c->r[3]|c->r[3]; // 80213FB4
  c->r[3]=c->r[21]|c->r[21]; // 80213FB8
  c->r[4]=0u+0x00000000u; // 80213FBC
  c->lr=0x80213FC4u; f_8015E088(c); // 80213FC0
  c->r[3]=c->r[24]+0x00000490u; // 80213FC4
  c->lr=0x80213FCCu; f_8007ECBC(c); // 80213FC8
  {uint32_t ea=c->r[2]+0xFFFFDCE8u; c->f[1]=c->ps1[1]=RF32(ea);} // 80213FCC
  c->r[4]=c->r[27]+0x00000304u; // 80213FD0
  {uint32_t ea=c->r[2]+0xFFFFDCF0u; c->f[2]=c->ps1[2]=RF32(ea);} // 80213FD4
  c->r[5]=0u+0x00000001u; // 80213FD8
  c->lr=0x80213FE0u; f_8015DD64(c); // 80213FDC
  c->r[3]=c->r[24]+0x00000490u; // 80213FE0
  c->lr=0x80213FE8u; f_8007ECBC(c); // 80213FE4
  {uint32_t ea=c->r[2]+0xFFFFDD0Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 80213FE8
  c->lr=0x80213FF0u; f_8015DF90(c); // 80213FEC
  c->r[3]=c->r[24]+0x00000500u; // 80213FF0
  c->lr=0x80213FF8u; f_8007ECBC(c); // 80213FF4
  {uint32_t ea=c->r[2]+0xFFFFDCE8u; c->f[1]=c->ps1[1]=RF32(ea);} // 80213FF8
  c->r[4]=c->r[27]+0x0000030Fu; // 80213FFC
  {uint32_t ea=c->r[2]+0xFFFFDCF0u; c->f[2]=c->ps1[2]=RF32(ea);} // 80214000
  c->r[5]=0u+0x00000001u; // 80214004
  c->lr=0x8021400Cu; f_8015DD64(c); // 80214008
  c->r[3]=c->r[24]+0x00000500u; // 8021400C
  c->lr=0x80214014u; f_8007ECBC(c); // 80214010
  {uint32_t ea=c->r[2]+0xFFFFDD0Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 80214014
  c->lr=0x8021401Cu; f_8015DF90(c); // 80214018
  c->r[0]=0u+0x00000009u; // 8021401C
  W32(c->r[25]+0x00000008u,c->r[0]); // 80214020
  goto L_80214768; // 80214024
L_80214028:;
  cmps(c,0,(int32_t)c->r[0],3); // 80214028
  if (!crb(c,2)) { goto L_80214090; } // 8021402C
  c->r[3]=c->r[24]+0x00000490u; // 80214030
  c->lr=0x80214038u; f_8007ECBC(c); // 80214034
  {uint32_t ea=c->r[2]+0xFFFFDCE8u; c->f[1]=c->ps1[1]=RF32(ea);} // 80214038
  c->r[4]=c->r[27]+0x00000304u; // 8021403C
  {uint32_t ea=c->r[2]+0xFFFFDCF0u; c->f[2]=c->ps1[2]=RF32(ea);} // 80214040
  c->r[5]=0u+0x00000001u; // 80214044
  c->lr=0x8021404Cu; f_8015DD64(c); // 80214048
  c->r[3]=c->r[24]+0x00000490u; // 8021404C
  c->lr=0x80214054u; f_8007ECBC(c); // 80214050
  {uint32_t ea=c->r[2]+0xFFFFDD0Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 80214054
  c->lr=0x8021405Cu; f_8015DF90(c); // 80214058
  c->r[0]=0u+0x00000002u; // 8021405C
  W32(c->r[24]+0x000005F8u,c->r[0]); // 80214060
  c->r[3]=c->r[24]|c->r[24]; // 80214064
  c->lr=0x8021406Cu; f_802148B8(c); // 80214068
  c->lr=0x80214070u; f_80323304(c); // 8021406C
  {uint32_t ea=c->r[2]+0xFFFFDCF0u; c->f[1]=c->ps1[1]=RF32(ea);} // 80214070
  c->r[4]=0u+0x00000001u; // 80214074
  {uint32_t ea=c->r[2]+0xFFFFDD48u; c->f[4]=c->ps1[4]=RF32(ea);} // 80214078
  c->r[5]=0u+0x00000001u; // 8021407C
  c->f[2]=c->f[1]; // 80214080
  c->r[3]=c->r[3]+0x00000628u; // 80214084
  c->f[3]=c->f[1]; // 80214088
  c->lr=0x80214090u; f_802A0888(c); // 8021408C
L_80214090:;
  c->r[3]=R32(c->r[24]+0x00000004u); // 80214090
  cmps(c,0,(int32_t)c->r[3],0); // 80214094
  if (crb(c,2)) { goto L_802140A4; } // 80214098
  c->r[0]=R32(c->r[3]+0x00000008u); // 8021409C
  goto L_802140A8; // 802140A0
L_802140A4:;
  c->r[0]=0u+0x00000000u; // 802140A4
L_802140A8:;
  cmps(c,0,(int32_t)c->r[0],1); // 802140A8
  if (!crb(c,2)) { goto L_802144A4; } // 802140AC
  c->r[3]=0u+0x806A0000u; // 802140B0
  c->r[25]=0u+0x00000000u; // 802140B4
  {uint32_t ea=c->r[2]+0xFFFFDE80u; c->f[28]=RF64(ea);} // 802140B8
  c->r[28]=c->r[25]|c->r[25]; // 802140BC
  {uint32_t ea=c->r[2]+0xFFFFDE78u; c->f[29]=c->ps1[29]=RF32(ea);} // 802140C0
  c->r[29]=c->r[3]+0xFFFF8510u; // 802140C4
  {uint32_t ea=c->r[2]+0xFFFFDE7Cu; c->f[30]=c->ps1[30]=RF32(ea);} // 802140C8
  c->r[23]=0u+0x00000000u; // 802140CC
  {uint32_t ea=c->r[2]+0xFFFFDD48u; c->f[31]=c->ps1[31]=RF32(ea);} // 802140D0
  c->r[22]=0u+0x00000000u; // 802140D4
  c->r[27]=0u+0x00000001u; // 802140D8
  c->r[30]=0u+0x00000005u; // 802140DC
  c->r[31]=0u+0x43300000u; // 802140E0
L_802140E4:;
  c->r[3]=c->r[24]+c->r[23]; // 802140E4
  c->r[26]=c->r[3]+0x000004A0u; // 802140E8
  c->r[3]=c->r[26]|c->r[26]; // 802140EC
  c->lr=0x802140F4u; f_8007ECBC(c); // 802140F0
  c->r[4]=0u+0x00000000u; // 802140F4
  c->r[3]=c->r[3]+0x000000FCu; // 802140F8
  c->lr=0x80214100u; f_802E6678(c); // 802140FC
  c->r[3]=c->r[26]|c->r[26]; // 80214100
  c->lr=0x80214108u; f_8007ECBC(c); // 80214104
  W8(c->r[3]+0x00000415u,c->r[27]); // 80214108
  c->r[3]=c->r[26]|c->r[26]; // 8021410C
  c->lr=0x80214114u; f_8007ECBC(c); // 80214110
  W8(c->r[3]+0x00000416u,c->r[28]); // 80214114
  c->r[3]=c->r[1]+0x00000120u; // 80214118
  c->r[4]=c->r[29]+0x0000031Au; // 8021411C
  c->r[5]=c->r[25]+0x00000001u; // 80214120
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80214124
  c->lr=0x8021412Cu; f_803B1FC8(c); // 80214128
  c->r[3]=c->r[24]+0x00000498u; // 8021412C
  c->lr=0x80214134u; f_8007ECBC(c); // 80214130
  c->r[3]=c->r[3]+0x000000FCu; // 80214134
  c->r[4]=c->r[1]+0x00000120u; // 80214138
  c->lr=0x80214140u; f_802E6F14(c); // 8021413C
  c->r[4]=c->r[1]+0x00000028u; // 80214140
  c->lr=0x80214148u; f_80382F2C(c); // 80214144
  c->r[3]=c->r[24]+0x00000498u; // 80214148
  c->lr=0x80214150u; f_8007ECBC(c); // 8021414C
  c->r[3]=c->r[3]+0x000000FCu; // 80214150
  c->r[4]=c->r[1]+0x00000120u; // 80214154
  c->lr=0x8021415Cu; f_802E6F14(c); // 80214158
  c->r[21]=c->r[3]|c->r[3]; // 8021415C
  c->r[3]=c->r[26]|c->r[26]; // 80214160
  c->lr=0x80214168u; f_8007ECBC(c); // 80214164
  c->r[12]=R32(c->r[3]+0x0000001Cu); // 80214168
  c->r[4]=c->r[21]|c->r[21]; // 8021416C
  c->r[12]=R32(c->r[12]+0x00000020u); // 80214170
  c->ctr=c->r[12]; // 80214174
  if (true) { c->lr=0x8021417Cu; dispatch(c,c->ctr); } // 80214178
  c->r[0]=divw((int32_t)c->r[25],(int32_t)c->r[30]); // 8021417C
  c->r[3]=c->r[1]+0x00000120u; // 80214180
  c->r[4]=c->r[29]+0x00000322u; // 80214184
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)c->r[30]); // 80214188
  c->r[5]=c->r[25]-c->r[0]; // 8021418C
  c->r[5]=c->r[5]+0x00000001u; // 80214190
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80214194
  c->lr=0x8021419Cu; f_803B1FC8(c); // 80214198
  c->lr=0x802141A0u; f_803B220C(c); // 8021419C
  c->r[0]=c->r[3]^0x80000000u; // 802141A0
  W32(c->r[1]+0x00000224u,c->r[0]); // 802141A4
  c->r[3]=c->r[26]|c->r[26]; // 802141A8
  W32(c->r[1]+0x00000220u,c->r[31]); // 802141AC
  {uint32_t ea=c->r[1]+0x00000220u; c->f[0]=RF64(ea);} // 802141B0
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[28]); // 802141B4
  c->f[0]=c->ps1[0]=S(c->f[0]/c->f[29]); // 802141B8
  c->f[27]=c->ps1[27]=S(std::fma(c->f[30],c->f[0],c->f[31])); // 802141BC
  c->lr=0x802141C4u; f_8007ECBC(c); // 802141C0
  c->f[1]=c->f[27]; // 802141C4
  {uint32_t ea=c->r[2]+0xFFFFDCF0u; c->f[2]=c->ps1[2]=RF32(ea);} // 802141C8
  c->r[4]=c->r[1]+0x00000120u; // 802141CC
  c->r[5]=0u+0x00000001u; // 802141D0
  c->lr=0x802141D8u; f_8015DD64(c); // 802141D4
  c->r[3]=c->r[26]|c->r[26]; // 802141D8
  c->lr=0x802141E0u; f_8007ECBC(c); // 802141DC
  c->r[4]=c->r[29]+0x000001A0u; // 802141E0
  c->r[5]=0u+0x00000000u; // 802141E4
  c->r[3]=c->r[3]+0x000000FCu; // 802141E8
  c->lr=0x802141F0u; f_802E6904(c); // 802141EC
  c->r[3]=c->r[26]|c->r[26]; // 802141F0
  c->lr=0x802141F8u; f_8007ECBC(c); // 802141F4
  c->r[4]=c->r[29]+0x0000032Du; // 802141F8
  c->r[5]=0u+0x00000000u; // 802141FC
  c->r[3]=c->r[3]+0x000000FCu; // 80214200
  c->lr=0x80214208u; f_802E6904(c); // 80214204
  c->r[3]=c->r[26]|c->r[26]; // 80214208
  c->lr=0x80214210u; f_8007ECBC(c); // 8021420C
  c->r[4]=c->r[29]+0x0000033Au; // 80214210
  c->r[5]=0u+0x00000000u; // 80214214
  c->r[3]=c->r[3]+0x000000FCu; // 80214218
  c->lr=0x80214220u; f_802E6904(c); // 8021421C
  c->r[3]=c->r[26]|c->r[26]; // 80214220
  c->lr=0x80214228u; f_8007ECBC(c); // 80214224
  c->r[4]=c->r[29]+0x00000347u; // 80214228
  c->r[5]=0u+0x00000000u; // 8021422C
  c->r[3]=c->r[3]+0x000000FCu; // 80214230
  c->lr=0x80214238u; f_802E6904(c); // 80214234
  c->r[3]=c->r[26]|c->r[26]; // 80214238
  c->lr=0x80214240u; f_8007ECBC(c); // 8021423C
  c->r[4]=c->r[29]+0x00000354u; // 80214240
  c->r[5]=0u+0x00000000u; // 80214244
  c->r[3]=c->r[3]+0x000000FCu; // 80214248
  c->lr=0x80214250u; f_802E6904(c); // 8021424C
  cmps(c,0,(int32_t)c->r[25],0); // 80214250
  if (!crb(c,2)) { goto L_80214294; } // 80214254
  c->r[3]=c->r[24]+c->r[22]; // 80214258
  c->r[0]=R32(c->r[3]+0x00000644u); // 8021425C
  cmps(c,0,(int32_t)c->r[0],0); // 80214260
  if (crb(c,2)) { goto L_80214294; } // 80214264
  c->r[3]=c->r[26]|c->r[26]; // 80214268
  c->lr=0x80214270u; f_8007ECBC(c); // 8021426C
  c->r[4]=0u+0x00000001u; // 80214270
  c->r[3]=c->r[3]+0x000000FCu; // 80214274
  c->lr=0x8021427Cu; f_802E6678(c); // 80214278
  c->r[3]=c->r[26]|c->r[26]; // 8021427C
  c->lr=0x80214284u; f_8007ECBC(c); // 80214280
  c->r[4]=c->r[29]+0x0000032Du; // 80214284
  c->r[5]=0u+0x00000001u; // 80214288
  c->r[3]=c->r[3]+0x000000FCu; // 8021428C
  c->lr=0x80214294u; f_802E6904(c); // 80214290
L_80214294:;
  cmps(c,0,(int32_t)c->r[25],1); // 80214294
  if (!crb(c,2)) { goto L_802142D8; } // 80214298
  c->r[3]=c->r[24]+c->r[22]; // 8021429C
  c->r[0]=R32(c->r[3]+0x00000644u); // 802142A0
  cmps(c,0,(int32_t)c->r[0],0); // 802142A4
  if (crb(c,2)) { goto L_802142D8; } // 802142A8
  c->r[3]=c->r[26]|c->r[26]; // 802142AC
  c->lr=0x802142B4u; f_8007ECBC(c); // 802142B0
  c->r[4]=0u+0x00000001u; // 802142B4
  c->r[3]=c->r[3]+0x000000FCu; // 802142B8
  c->lr=0x802142C0u; f_802E6678(c); // 802142BC
  c->r[3]=c->r[26]|c->r[26]; // 802142C0
  c->lr=0x802142C8u; f_8007ECBC(c); // 802142C4
  c->r[4]=c->r[29]+0x0000033Au; // 802142C8
  c->r[5]=0u+0x00000001u; // 802142CC
  c->r[3]=c->r[3]+0x000000FCu; // 802142D0
  c->lr=0x802142D8u; f_802E6904(c); // 802142D4
L_802142D8:;
  cmps(c,0,(int32_t)c->r[25],2); // 802142D8
  if (!crb(c,2)) { goto L_8021431C; } // 802142DC
  c->r[3]=c->r[24]+c->r[22]; // 802142E0
  c->r[0]=R32(c->r[3]+0x00000644u); // 802142E4
  cmps(c,0,(int32_t)c->r[0],0); // 802142E8
  if (crb(c,2)) { goto L_8021431C; } // 802142EC
  c->r[3]=c->r[26]|c->r[26]; // 802142F0
  c->lr=0x802142F8u; f_8007ECBC(c); // 802142F4
  c->r[4]=0u+0x00000001u; // 802142F8
  c->r[3]=c->r[3]+0x000000FCu; // 802142FC
  c->lr=0x80214304u; f_802E6678(c); // 80214300
  c->r[3]=c->r[26]|c->r[26]; // 80214304
  c->lr=0x8021430Cu; f_8007ECBC(c); // 80214308
  c->r[4]=c->r[29]+0x00000347u; // 8021430C
  c->r[5]=0u+0x00000001u; // 80214310
  c->r[3]=c->r[3]+0x000000FCu; // 80214314
  c->lr=0x8021431Cu; f_802E6904(c); // 80214318
L_8021431C:;
  cmps(c,0,(int32_t)c->r[25],4); // 8021431C
  if (!crb(c,2)) { goto L_80214360; } // 80214320
  c->r[3]=c->r[24]+c->r[22]; // 80214324
  c->r[0]=R32(c->r[3]+0x00000644u); // 80214328
  cmps(c,0,(int32_t)c->r[0],0); // 8021432C
  if (crb(c,2)) { goto L_80214360; } // 80214330
  c->r[3]=c->r[26]|c->r[26]; // 80214334
  c->lr=0x8021433Cu; f_8007ECBC(c); // 80214338
  c->r[4]=0u+0x00000001u; // 8021433C
  c->r[3]=c->r[3]+0x000000FCu; // 80214340
  c->lr=0x80214348u; f_802E6678(c); // 80214344
  c->r[3]=c->r[26]|c->r[26]; // 80214348
  c->lr=0x80214350u; f_8007ECBC(c); // 8021434C
  c->r[4]=c->r[29]+0x00000354u; // 80214350
  c->r[5]=0u+0x00000001u; // 80214354
  c->r[3]=c->r[3]+0x000000FCu; // 80214358
  c->lr=0x80214360u; f_802E6904(c); // 8021435C
L_80214360:;
  c->r[25]=c->r[25]+0x00000001u; // 80214360
  c->r[22]=c->r[22]+0x00000004u; // 80214364
  cmps(c,0,(int32_t)c->r[25],4); // 80214368
  c->r[23]=c->r[23]+0x00000008u; // 8021436C
  if (crb(c,0)) { IRQCHK(c); goto L_802140E4; } // 80214370
  c->r[22]=0u+0x806A0000u; // 80214374
  c->r[21]=0u+0x00000000u; // 80214378
  c->r[22]=c->r[22]+0xFFFF8510u; // 8021437C
  c->r[25]=0u+0x00000000u; // 80214380
L_80214384:;
  c->r[3]=c->r[1]+0x00000120u; // 80214384
  c->r[4]=c->r[22]+0x00000361u; // 80214388
  c->r[5]=c->r[21]+0x00000001u; // 8021438C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80214390
  c->lr=0x80214398u; f_803B1FC8(c); // 80214394
  c->r[3]=c->r[24]+0x000004A0u; // 80214398
  c->lr=0x802143A0u; f_8007ECBC(c); // 8021439C
  c->r[3]=c->r[3]+0x000000FCu; // 802143A0
  c->r[4]=c->r[1]+0x00000120u; // 802143A4
  c->lr=0x802143ACu; f_802E6E50(c); // 802143A8
  W32(c->r[1]+0x00000008u,c->r[3]); // 802143AC
  c->r[3]=c->r[1]+0x00000008u; // 802143B0
  c->lr=0x802143B8u; f_8005C9DC(c); // 802143B4
  c->r[21]=c->r[21]+0x00000001u; // 802143B8
  c->r[4]=c->r[24]+c->r[25]; // 802143BC
  cmps(c,0,(int32_t)c->r[21],8); // 802143C0
  W32(c->r[4]+0x00000560u,c->r[3]); // 802143C4
  c->r[25]=c->r[25]+0x00000004u; // 802143C8
  if (crb(c,0)) { IRQCHK(c); goto L_80214384; } // 802143CC
  c->r[0]=R32(c->r[24]+0x00000604u); // 802143D0
  W32(c->r[24]+0x00000614u,c->r[0]); // 802143D4
  c->r[0]=rotl(c->r[0],3)&0xFFFFFFF8u; // 802143D8
  c->r[3]=c->r[24]+c->r[0]; // 802143DC
  c->r[3]=c->r[3]+0x000004A0u; // 802143E0
  c->lr=0x802143E8u; f_8007ECBC(c); // 802143E4
  c->r[0]=0u+0x00000001u; // 802143E8
  W8(c->r[3]+0x00000416u,c->r[0]); // 802143EC
  c->r[0]=R32(c->r[24]+0x00000614u); // 802143F0
  c->r[0]=rotl(c->r[0],3)&0xFFFFFFF8u; // 802143F4
  c->r[3]=c->r[24]+c->r[0]; // 802143F8
  c->r[3]=c->r[3]+0x000004A0u; // 802143FC
  c->lr=0x80214404u; f_8007ECBC(c); // 80214400
  c->r[0]=0u+0x00000000u; // 80214404
  W8(c->r[3]+0x00000415u,c->r[0]); // 80214408
  c->r[3]=c->r[24]+0x00000548u; // 8021440C
  c->r[0]=R32(c->r[24]+0x00000614u); // 80214410
  c->r[0]=rotl(c->r[0],3)&0xFFFFFFF8u; // 80214414
  c->r[4]=c->r[24]+c->r[0]; // 80214418
  c->r[4]=c->r[4]+0x000004A0u; // 8021441C
  c->lr=0x80214424u; f_80053568(c); // 80214420
  c->r[3]=c->r[24]+0x00000548u; // 80214424
  c->lr=0x8021442Cu; f_8007ECBC(c); // 80214428
  c->r[22]=0u+0x806A0000u; // 8021442C
  c->r[5]=0u+0x00000000u; // 80214430
  c->r[22]=c->r[22]+0xFFFF8510u; // 80214434
  c->r[3]=c->r[3]+0x000000FCu; // 80214438
  c->r[4]=c->r[22]+0x0000032Du; // 8021443C
  c->lr=0x80214444u; f_802E6904(c); // 80214440
  c->r[3]=c->r[24]+0x00000548u; // 80214444
  c->lr=0x8021444Cu; f_8007ECBC(c); // 80214448
  c->r[4]=c->r[22]+0x0000033Au; // 8021444C
  c->r[5]=0u+0x00000000u; // 80214450
  c->r[3]=c->r[3]+0x000000FCu; // 80214454
  c->lr=0x8021445Cu; f_802E6904(c); // 80214458
  c->r[3]=c->r[24]+0x00000548u; // 8021445C
  c->lr=0x80214464u; f_8007ECBC(c); // 80214460
  c->r[4]=c->r[22]+0x00000347u; // 80214464
  c->r[5]=0u+0x00000000u; // 80214468
  c->r[3]=c->r[3]+0x000000FCu; // 8021446C
  c->lr=0x80214474u; f_802E6904(c); // 80214470
  c->r[3]=c->r[24]+0x00000548u; // 80214474
  c->lr=0x8021447Cu; f_8007ECBC(c); // 80214478
  c->r[4]=c->r[22]+0x00000354u; // 8021447C
  c->r[5]=0u+0x00000000u; // 80214480
  c->r[3]=c->r[3]+0x000000FCu; // 80214484
  c->lr=0x8021448Cu; f_802E6904(c); // 80214488
  c->r[3]=c->r[24]+0x00000548u; // 8021448C
  c->lr=0x80214494u; f_8007ECBC(c); // 80214490
  c->r[4]=c->r[22]+0x000001A0u; // 80214494
  c->r[5]=0u+0x00000001u; // 80214498
  c->r[3]=c->r[3]+0x000000FCu; // 8021449C
  c->lr=0x802144A4u; f_802E6904(c); // 802144A0
L_802144A4:;
  c->r[3]=R32(c->r[24]+0x00000004u); // 802144A4
  cmps(c,0,(int32_t)c->r[3],0); // 802144A8
  if (crb(c,2)) { goto L_802144B8; } // 802144AC
  c->r[0]=R32(c->r[3]+0x00000008u); // 802144B0
  goto L_802144BC; // 802144B4
L_802144B8:;
  c->r[0]=0u+0x00000000u; // 802144B8
L_802144BC:;
  cmps(c,0,(int32_t)c->r[0],2); // 802144BC
  if (!crb(c,2)) { goto L_80214720; } // 802144C0
  {uint32_t ea=c->r[2]+0xFFFFDCF0u; c->f[1]=c->ps1[1]=RF32(ea);} // 802144C4
  c->r[3]=c->r[24]|c->r[24]; // 802144C8
  c->lr=0x802144D0u; f_8021369C(c); // 802144CC
  c->r[3]=c->r[24]+0x00000548u; // 802144D0
  c->lr=0x802144D8u; f_8007ECBC(c); // 802144D4
  c->r[4]=0u+0x806A0000u; // 802144D8
  {uint32_t ea=c->r[2]+0xFFFFDCE8u; c->f[1]=c->ps1[1]=RF32(ea);} // 802144DC
  c->r[22]=c->r[4]+0xFFFF8510u; // 802144E0
  {uint32_t ea=c->r[2]+0xFFFFDCF0u; c->f[2]=c->ps1[2]=RF32(ea);} // 802144E4
  c->r[4]=c->r[22]+0x000002FEu; // 802144E8
  c->r[5]=0u+0x00000000u; // 802144EC
  c->lr=0x802144F4u; f_8015DD64(c); // 802144F0
  c->r[3]=c->r[24]+0x00000548u; // 802144F4
  c->lr=0x802144FCu; f_8007ECBC(c); // 802144F8
  {uint32_t ea=c->r[2]+0xFFFFDD0Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 802144FC
  c->lr=0x80214504u; f_8015DF90(c); // 80214500
  c->r[23]=0u+0x00000000u; // 80214504
  c->r[25]=0u+0x00000000u; // 80214508
L_8021450C:;
  c->r[3]=c->r[1]+0x00000120u; // 8021450C
  c->r[4]=c->r[22]+0x0000036Bu; // 80214510
  c->r[5]=c->r[23]+0x00000001u; // 80214514
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80214518
  c->lr=0x80214520u; f_803B1FC8(c); // 8021451C
  c->r[0]=R32(c->r[24]+0x00000614u); // 80214520
  cmps(c,0,(int32_t)c->r[23],(int32_t)c->r[0]); // 80214524
  if (crb(c,2)) { goto L_80214560; } // 80214528
  c->r[3]=c->r[24]+c->r[25]; // 8021452C
  c->r[21]=c->r[3]+0x000004A0u; // 80214530
  c->r[3]=c->r[21]|c->r[21]; // 80214534
  c->lr=0x8021453Cu; f_8007ECBC(c); // 80214538
  {uint32_t ea=c->r[2]+0xFFFFDCE8u; c->f[1]=c->ps1[1]=RF32(ea);} // 8021453C
  c->r[4]=c->r[1]+0x00000120u; // 80214540
  {uint32_t ea=c->r[2]+0xFFFFDCF0u; c->f[2]=c->ps1[2]=RF32(ea);} // 80214544
  c->r[5]=0u+0x00000001u; // 80214548
  c->lr=0x80214550u; f_8015DD64(c); // 8021454C
  c->r[3]=c->r[21]|c->r[21]; // 80214550
  c->lr=0x80214558u; f_8007ECBC(c); // 80214554
  {uint32_t ea=c->r[2]+0xFFFFDD0Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 80214558
  c->lr=0x80214560u; f_8015DF90(c); // 8021455C
L_80214560:;
  c->r[23]=c->r[23]+0x00000001u; // 80214560
  c->r[25]=c->r[25]+0x00000008u; // 80214564
  cmps(c,0,(int32_t)c->r[23],4); // 80214568
  if (crb(c,0)) { IRQCHK(c); goto L_8021450C; } // 8021456C
  c->r[21]=0u+0x00000000u; // 80214570
  c->r[25]=0u+0x00000000u; // 80214574
  c->r[26]=0u+0x00000000u; // 80214578
L_8021457C:;
  c->r[0]=R32(c->r[24]+0x00000614u); // 8021457C
  cmps(c,0,(int32_t)c->r[0],3); // 80214580
  if (!crb(c,2)) { goto L_802145E4; } // 80214584
  c->r[4]=R32(c->r[24]+0x00000540u); // 80214588
  cmps(c,0,(int32_t)c->r[4],0); // 8021458C
  if (crb(c,2)) { goto L_80214598; } // 80214590
  c->r[4]=c->r[4]+0x00000020u; // 80214594
L_80214598:;
  c->r[5]=R32(c->r[4]+0x00000000u); // 80214598
  c->r[3]=c->r[24]+0x000004C0u; // 8021459C
  c->r[0]=R32(c->r[4]+0x00000004u); // 802145A0
  c->r[4]=c->r[1]+0x00000020u; // 802145A4
  W32(c->r[1]+0x00000024u,c->r[0]); // 802145A8
  W32(c->r[1]+0x00000020u,c->r[5]); // 802145AC
  c->lr=0x802145B4u; f_80053568(c); // 802145B0
  c->r[4]=R32(c->r[24]+0x00000544u); // 802145B4
  cmps(c,0,(int32_t)c->r[4],0); // 802145B8
  if (crb(c,2)) { goto L_802145C4; } // 802145BC
  c->r[4]=c->r[4]+0x00000020u; // 802145C0
L_802145C4:;
  c->r[5]=R32(c->r[4]+0x00000000u); // 802145C4
  c->r[3]=c->r[24]+0x000004C8u; // 802145C8
  c->r[0]=R32(c->r[4]+0x00000004u); // 802145CC
  c->r[4]=c->r[1]+0x00000018u; // 802145D0
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 802145D4
  W32(c->r[1]+0x00000018u,c->r[5]); // 802145D8
  c->lr=0x802145E0u; f_80053568(c); // 802145DC
  goto L_80214618; // 802145E0
L_802145E4:;
  c->r[3]=c->r[24]+c->r[26]; // 802145E4
  c->r[4]=R32(c->r[3]+0x00000520u); // 802145E8
  cmps(c,0,(int32_t)c->r[4],0); // 802145EC
  if (crb(c,2)) { goto L_802145F8; } // 802145F0
  c->r[4]=c->r[4]+0x00000020u; // 802145F4
L_802145F8:;
  c->r[5]=R32(c->r[4]+0x00000000u); // 802145F8
  c->r[3]=c->r[24]+c->r[25]; // 802145FC
  c->r[0]=R32(c->r[4]+0x00000004u); // 80214600
  c->r[3]=c->r[3]+0x000004C0u; // 80214604
  W32(c->r[1]+0x00000014u,c->r[0]); // 80214608
  c->r[4]=c->r[1]+0x00000010u; // 8021460C
  W32(c->r[1]+0x00000010u,c->r[5]); // 80214610
  c->lr=0x80214618u; f_80053568(c); // 80214614
L_80214618:;
  c->r[21]=c->r[21]+0x00000001u; // 80214618
  c->r[26]=c->r[26]+0x00000004u; // 8021461C
  cmps(c,0,(int32_t)c->r[21],8); // 80214620
  c->r[25]=c->r[25]+0x00000008u; // 80214624
  if (crb(c,0)) { IRQCHK(c); goto L_8021457C; } // 80214628
  c->r[0]=R32(c->r[24]+0x00000614u); // 8021462C
  c->r[21]=0u+0x00000000u; // 80214630
  cmps(c,0,(int32_t)c->r[0],0); // 80214634
  if (!crb(c,2)) { goto L_80214640; } // 80214638
  c->r[21]=0u+0x00000008u; // 8021463C
L_80214640:;
  cmps(c,0,(int32_t)c->r[0],1); // 80214640
  if (!crb(c,2)) { goto L_8021464C; } // 80214644
  c->r[21]=0u+0x00000007u; // 80214648
L_8021464C:;
  cmps(c,0,(int32_t)c->r[0],2); // 8021464C
  if (!crb(c,2)) { goto L_80214658; } // 80214650
  c->r[21]=0u+0x00000005u; // 80214654
L_80214658:;
  cmps(c,0,(int32_t)c->r[0],3); // 80214658
  if (!crb(c,2)) { goto L_80214664; } // 8021465C
  c->r[21]=0u+0x00000002u; // 80214660
L_80214664:;
  c->r[22]=0u+0x806A0000u; // 80214664
  c->r[23]=0u+0x00000000u; // 80214668
  c->r[22]=c->r[22]+0xFFFF8510u; // 8021466C
  c->r[25]=0u+0x00000000u; // 80214670
  goto L_802146E0; // 80214674
L_80214678:;
  c->r[5]=R32(c->r[24]+0x00000614u); // 80214678
  c->r[3]=c->r[1]+0x000000BCu; // 8021467C
  c->r[4]=c->r[22]+0x00000371u; // 80214680
  c->r[6]=c->r[23]+0x00000001u; // 80214684
  c->r[5]=c->r[5]+0x00000001u; // 80214688
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8021468C
  c->lr=0x80214694u; f_803B1FC8(c); // 80214690
  c->r[3]=c->r[24]+c->r[25]; // 80214694
  c->r[3]=c->r[3]+0x000004C0u; // 80214698
  c->lr=0x802146A0u; f_8007ECBC(c); // 8021469C
  c->r[5]=c->r[1]+0x000000BCu; // 802146A0
  c->r[4]=0u+0x00000000u; // 802146A4
  c->lr=0x802146ACu; f_8015E4B8(c); // 802146A8
  c->r[3]=c->r[1]+0x00000058u; // 802146AC
  c->r[4]=c->r[22]+0x00000383u; // 802146B0
  c->r[5]=c->r[23]+0x00000001u; // 802146B4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 802146B8
  c->lr=0x802146C0u; f_803B1FC8(c); // 802146BC
  c->r[3]=c->r[24]+0x00000548u; // 802146C0
  c->lr=0x802146C8u; f_8007ECBC(c); // 802146C4
  c->r[5]=c->r[1]+0x00000058u; // 802146C8
  c->r[6]=c->r[1]+0x000000BCu; // 802146CC
  c->r[4]=0u+0x00000000u; // 802146D0
  c->lr=0x802146D8u; f_8015E698(c); // 802146D4
  c->r[23]=c->r[23]+0x00000001u; // 802146D8
  c->r[25]=c->r[25]+0x00000008u; // 802146DC
L_802146E0:;
  cmps(c,0,(int32_t)c->r[23],(int32_t)c->r[21]); // 802146E0
  if (crb(c,0)) { IRQCHK(c); goto L_80214678; } // 802146E4
  c->r[0]=0u+0x00000001u; // 802146E8
  W32(c->r[24]+0x000005F8u,c->r[0]); // 802146EC
  c->r[3]=c->r[24]|c->r[24]; // 802146F0
  c->lr=0x802146F8u; f_80214830(c); // 802146F4
  c->lr=0x802146FCu; f_80323304(c); // 802146F8
  {uint32_t ea=c->r[2]+0xFFFFDCF0u; c->f[1]=c->ps1[1]=RF32(ea);} // 802146FC
  c->r[4]=0u+0x00000001u; // 80214700
  {uint32_t ea=c->r[2]+0xFFFFDD48u; c->f[4]=c->ps1[4]=RF32(ea);} // 80214704
  c->r[5]=0u+0x00000001u; // 80214708
  c->f[2]=c->f[1]; // 8021470C
  c->r[3]=c->r[3]+0x00000628u; // 80214710
  c->f[3]=c->f[1]; // 80214714
  c->lr=0x8021471Cu; f_802A0888(c); // 80214718
  goto L_80214768; // 8021471C
L_80214720:;
  cmps(c,0,(int32_t)c->r[3],0); // 80214720
  if (crb(c,2)) { goto L_80214730; } // 80214724
  c->r[0]=R32(c->r[3]+0x00000008u); // 80214728
  goto L_80214734; // 8021472C
L_80214730:;
  c->r[0]=0u+0x00000000u; // 80214730
L_80214734:;
  cmps(c,0,(int32_t)c->r[0],10); // 80214734
  if (!crb(c,2)) { goto L_80214768; } // 80214738
  c->r[3]=c->r[24]|c->r[24]; // 8021473C
  c->lr=0x80214744u; f_802147A8(c); // 80214740
  c->lr=0x80214748u; f_80323304(c); // 80214744
  {uint32_t ea=c->r[2]+0xFFFFDCF0u; c->f[1]=c->ps1[1]=RF32(ea);} // 80214748
  c->r[4]=0u+0x00000001u; // 8021474C
  {uint32_t ea=c->r[2]+0xFFFFDD48u; c->f[4]=c->ps1[4]=RF32(ea);} // 80214750
  c->r[5]=0u+0x00000001u; // 80214754
  c->f[2]=c->f[1]; // 80214758
  c->r[3]=c->r[3]+0x00000628u; // 8021475C
  c->f[3]=c->f[1]; // 80214760
  c->lr=0x80214768u; f_802A0888(c); // 80214764
L_80214768:;
  c->r[11]=c->r[1]+0x00000260u; // 80214768
  {uint32_t ea=c->r[1]+0x000002A8u; psq_load(c,31,ea,0,0);} // 8021476C
  {uint32_t ea=c->r[1]+0x000002A0u; c->f[31]=RF64(ea);} // 80214770
  {uint32_t ea=c->r[1]+0x00000298u; psq_load(c,30,ea,0,0);} // 80214774
  {uint32_t ea=c->r[1]+0x00000290u; c->f[30]=RF64(ea);} // 80214778
  {uint32_t ea=c->r[1]+0x00000288u; psq_load(c,29,ea,0,0);} // 8021477C
  {uint32_t ea=c->r[1]+0x00000280u; c->f[29]=RF64(ea);} // 80214780
  {uint32_t ea=c->r[1]+0x00000278u; psq_load(c,28,ea,0,0);} // 80214784
  {uint32_t ea=c->r[1]+0x00000270u; c->f[28]=RF64(ea);} // 80214788
  {uint32_t ea=c->r[1]+0x00000268u; psq_load(c,27,ea,0,0);} // 8021478C
  {uint32_t ea=c->r[1]+0x00000260u; c->f[27]=RF64(ea);} // 80214790
  c->lr=0x80214798u; { c->r[21]=R32(c->r[11]+0xFFFFFFD4u); c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80214794
  c->r[0]=R32(c->r[1]+0x000002B4u); // 80214798
  c->lr=c->r[0]; // 8021479C
  c->r[1]=c->r[1]+0x000002B0u; // 802147A0
  return; // 802147A4
}

// fn_802147A8
void f_802147A8(Ctx* __restrict c) {
  trace_call(0x802147A8u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802147A8
  c->r[0]=c->lr; // 802147AC
  W32(c->r[1]+0x00000044u,c->r[0]); // 802147B0
  {uint32_t ea=c->r[1]+0x00000030u; for(int i=28;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 802147B4
  c->r[28]=c->r[3]|c->r[3]; // 802147B8
  c->r[31]=c->r[1]|c->r[1]; // 802147BC
  c->r[0]=R8(c->r[3]+0x00000010u); // 802147C0
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 802147C4
  c->r[3]=c->r[3]+c->r[0]; // 802147C8
  c->r[29]=R32(c->r[3]+0x00000014u); // 802147CC
  cmps(c,0,(int32_t)c->r[29],0); // 802147D0
  if (crb(c,2)) { goto L_802147FC; } // 802147D4
  c->r[30]=0u+0x00000000u; // 802147D8
  W32(c->r[31]+0x00000024u,c->r[1]); // 802147DC
  W8(c->r[31]+0x00000008u,c->r[30]); // 802147E0
  c->lr=0x802147E8u; f_801AAD6C(c); // 802147E4
  W32(c->r[29]+0x00000000u,c->r[3]); // 802147E8
  c->r[0]=c->r[13]+0xFFFF8DA4u; // 802147EC
  W32(c->r[29]+0x00000004u,c->r[0]); // 802147F0
  W32(c->r[29]+0x00000008u,c->r[30]); // 802147F4
  W32(c->r[29]+0x0000000Cu,c->r[30]); // 802147F8
L_802147FC:;
  W32(c->r[28]+0x00000008u,c->r[29]); // 802147FC
  c->r[0]=0u+0x00000000u; // 80214800
  c->r[10]=c->r[31]|c->r[31]; // 80214804
  c->r[3]=c->r[29]|c->r[29]; // 80214808
  W32(c->r[29]+0x00000008u,c->r[0]); // 8021480C
  c->r[0]=R32(c->r[28]+0x00000004u); // 80214810
  W32(c->r[28]+0x0000000Cu,c->r[0]); // 80214814
  {uint32_t ea=c->r[10]+0x00000030u; for(int i=28;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 80214818
  c->r[10]=R32(c->r[1]+0x00000000u); // 8021481C
  c->r[0]=R32(c->r[10]+0x00000004u); // 80214820
  c->r[1]=c->r[10]|c->r[10]; // 80214824
  c->lr=c->r[0]; // 80214828
  return; // 8021482C
}

// fn_80214830
void f_80214830(Ctx* __restrict c) {
  trace_call(0x80214830u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80214830
  c->r[0]=c->lr; // 80214834
  W32(c->r[1]+0x00000044u,c->r[0]); // 80214838
  {uint32_t ea=c->r[1]+0x00000030u; for(int i=28;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 8021483C
  c->r[28]=c->r[3]|c->r[3]; // 80214840
  c->r[31]=c->r[1]|c->r[1]; // 80214844
  c->r[0]=R8(c->r[3]+0x00000010u); // 80214848
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 8021484C
  c->r[3]=c->r[3]+c->r[0]; // 80214850
  c->r[29]=R32(c->r[3]+0x00000014u); // 80214854
  cmps(c,0,(int32_t)c->r[29],0); // 80214858
  if (crb(c,2)) { goto L_80214884; } // 8021485C
  c->r[30]=0u+0x00000000u; // 80214860
  W32(c->r[31]+0x00000024u,c->r[1]); // 80214864
  W8(c->r[31]+0x00000008u,c->r[30]); // 80214868
  c->lr=0x80214870u; f_801F8638(c); // 8021486C
  W32(c->r[29]+0x00000000u,c->r[3]); // 80214870
  c->r[0]=c->r[13]+0xFFFF9038u; // 80214874
  W32(c->r[29]+0x00000004u,c->r[0]); // 80214878
  W32(c->r[29]+0x00000008u,c->r[30]); // 8021487C
  W32(c->r[29]+0x0000000Cu,c->r[30]); // 80214880
L_80214884:;
  W32(c->r[28]+0x00000008u,c->r[29]); // 80214884
  c->r[0]=0u+0x00000000u; // 80214888
  c->r[10]=c->r[31]|c->r[31]; // 8021488C
  c->r[3]=c->r[29]|c->r[29]; // 80214890
  W32(c->r[29]+0x00000008u,c->r[0]); // 80214894
  c->r[0]=R32(c->r[28]+0x00000004u); // 80214898
  W32(c->r[28]+0x0000000Cu,c->r[0]); // 8021489C
  {uint32_t ea=c->r[10]+0x00000030u; for(int i=28;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 802148A0
  c->r[10]=R32(c->r[1]+0x00000000u); // 802148A4
  c->r[0]=R32(c->r[10]+0x00000004u); // 802148A8
  c->r[1]=c->r[10]|c->r[10]; // 802148AC
  c->lr=c->r[0]; // 802148B0
  return; // 802148B4
}

// fn_802148B8
void f_802148B8(Ctx* __restrict c) {
  trace_call(0x802148B8u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802148B8
  c->r[0]=c->lr; // 802148BC
  W32(c->r[1]+0x00000044u,c->r[0]); // 802148C0
  {uint32_t ea=c->r[1]+0x00000030u; for(int i=28;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 802148C4
  c->r[28]=c->r[3]|c->r[3]; // 802148C8
  c->r[31]=c->r[1]|c->r[1]; // 802148CC
  c->r[0]=R8(c->r[3]+0x00000010u); // 802148D0
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 802148D4
  c->r[3]=c->r[3]+c->r[0]; // 802148D8
  c->r[29]=R32(c->r[3]+0x00000014u); // 802148DC
  cmps(c,0,(int32_t)c->r[29],0); // 802148E0
  if (crb(c,2)) { goto L_8021490C; } // 802148E4
  c->r[30]=0u+0x00000000u; // 802148E8
  W32(c->r[31]+0x00000024u,c->r[1]); // 802148EC
  W8(c->r[31]+0x00000008u,c->r[30]); // 802148F0
  c->lr=0x802148F8u; f_801AAD38(c); // 802148F4
  W32(c->r[29]+0x00000000u,c->r[3]); // 802148F8
  c->r[0]=c->r[13]+0xFFFF8DA0u; // 802148FC
  W32(c->r[29]+0x00000004u,c->r[0]); // 80214900
  W32(c->r[29]+0x00000008u,c->r[30]); // 80214904
  W32(c->r[29]+0x0000000Cu,c->r[30]); // 80214908
L_8021490C:;
  W32(c->r[28]+0x00000008u,c->r[29]); // 8021490C
  c->r[0]=0u+0x00000000u; // 80214910
  c->r[10]=c->r[31]|c->r[31]; // 80214914
  c->r[3]=c->r[29]|c->r[29]; // 80214918
  W32(c->r[29]+0x00000008u,c->r[0]); // 8021491C
  c->r[0]=R32(c->r[28]+0x00000004u); // 80214920
  W32(c->r[28]+0x0000000Cu,c->r[0]); // 80214924
  {uint32_t ea=c->r[10]+0x00000030u; for(int i=28;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 80214928
  c->r[10]=R32(c->r[1]+0x00000000u); // 8021492C
  c->r[0]=R32(c->r[10]+0x00000004u); // 80214930
  c->r[1]=c->r[10]|c->r[10]; // 80214934
  c->lr=c->r[0]; // 80214938
  return; // 8021493C
}

// fn_80214940
void f_80214940(Ctx* __restrict c) {
  trace_call(0x80214940u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80214940
  c->r[0]=c->lr; // 80214944
  W32(c->r[1]+0x00000024u,c->r[0]); // 80214948
  c->r[11]=c->r[1]+0x00000020u; // 8021494C
  c->lr=0x80214954u; { W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80214950
  c->r[4]=R32(c->r[3]+0x00000004u); // 80214954
  c->r[29]=c->r[3]|c->r[3]; // 80214958
  cmps(c,0,(int32_t)c->r[4],0); // 8021495C
  if (crb(c,2)) { goto L_8021496C; } // 80214960
  c->r[0]=R32(c->r[4]+0x00000008u); // 80214964
  goto L_80214970; // 80214968
L_8021496C:;
  c->r[0]=0u+0x00000000u; // 8021496C
L_80214970:;
  cmps(c,0,(int32_t)c->r[0],0); // 80214970
  if (!crb(c,2)) { goto L_802149E0; } // 80214974
  c->r[3]=c->r[3]+0x00000498u; // 80214978
  c->lr=0x80214980u; f_8007ECBC(c); // 8021497C
  c->r[4]=0u+0x00000001u; // 80214980
  c->r[3]=c->r[3]+0x000000FCu; // 80214984
  c->lr=0x8021498Cu; f_802E6678(c); // 80214988
  c->r[30]=0u+0x00000000u; // 8021498C
  c->r[31]=0u+0x00000000u; // 80214990
L_80214994:;
  c->r[3]=c->r[29]+c->r[31]; // 80214994
  c->r[3]=c->r[3]+0x000004A0u; // 80214998
  c->lr=0x802149A0u; f_8007ECBC(c); // 8021499C
  c->r[4]=0u+0x00000000u; // 802149A0
  c->r[3]=c->r[3]+0x000000FCu; // 802149A4
  c->lr=0x802149ACu; f_802E6678(c); // 802149A8
  c->r[30]=c->r[30]+0x00000001u; // 802149AC
  c->r[31]=c->r[31]+0x00000008u; // 802149B0
  cmps(c,0,(int32_t)c->r[30],4); // 802149B4
  if (crb(c,0)) { IRQCHK(c); goto L_80214994; } // 802149B8
  c->r[3]=c->r[29]+0x00000490u; // 802149BC
  c->lr=0x802149C4u; f_8007ECBC(c); // 802149C0
  c->r[4]=0u+0x806A0000u; // 802149C4
  {uint32_t ea=c->r[2]+0xFFFFDCE8u; c->f[1]=c->ps1[1]=RF32(ea);} // 802149C8
  c->r[4]=c->r[4]+0xFFFF8510u; // 802149CC
  c->r[4]=c->r[4]+0x000002FBu; // 802149D0
  c->lr=0x802149D8u; f_8015DE64(c); // 802149D4
  c->r[0]=0u+0x00000001u; // 802149D8
  W8(c->r[29]+0x00000641u,c->r[0]); // 802149DC
L_802149E0:;
  c->r[11]=c->r[1]+0x00000020u; // 802149E0
  c->lr=0x802149E8u; { c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 802149E4
  c->r[0]=R32(c->r[1]+0x00000024u); // 802149E8
  c->lr=c->r[0]; // 802149EC
  c->r[1]=c->r[1]+0x00000020u; // 802149F0
  return; // 802149F4
}

// fn_802149F8
void f_802149F8(Ctx* __restrict c) {
  trace_call(0x802149F8u);
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802149F8
  c->r[0]=c->lr; // 802149FC
  W32(c->r[1]+0x00000064u,c->r[0]); // 80214A00
  c->r[11]=c->r[1]+0x00000060u; // 80214A04
  c->lr=0x80214A0Cu; { W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80214A08
  c->r[5]=R32(c->r[3]+0x00000004u); // 80214A0C
  c->r[29]=c->r[3]|c->r[3]; // 80214A10
  c->r[30]=c->r[4]|c->r[4]; // 80214A14
  cmps(c,0,(int32_t)c->r[5],0); // 80214A18
  if (crb(c,2)) { goto L_80214A28; } // 80214A1C
  c->r[0]=R32(c->r[5]+0x00000008u); // 80214A20
  goto L_80214A2C; // 80214A24
L_80214A28:;
  c->r[0]=0u+0x00000000u; // 80214A28
L_80214A2C:;
  cmps(c,0,(int32_t)c->r[0],0); // 80214A2C
  if (!crb(c,2)) { goto L_80214AC0; } // 80214A30
  c->r[3]=c->r[3]+0x00000490u; // 80214A34
  c->lr=0x80214A3Cu; f_8007ECBC(c); // 80214A38
  c->r[31]=0u+0x806A0000u; // 80214A3C
  {uint32_t ea=c->r[2]+0xFFFFDCE8u; c->f[1]=c->ps1[1]=RF32(ea);} // 80214A40
  c->r[31]=c->r[31]+0xFFFF8510u; // 80214A44
  {uint32_t ea=c->r[2]+0xFFFFDCF0u; c->f[2]=c->ps1[2]=RF32(ea);} // 80214A48
  c->r[4]=c->r[31]+0x000002FBu; // 80214A4C
  c->r[5]=0u+0x00000001u; // 80214A50
  c->lr=0x80214A58u; f_8015DD64(c); // 80214A54
  {uint32_t ea=c->r[2]+0xFFFFDCF0u; c->f[2]=c->ps1[2]=RF32(ea);} // 80214A58
  c->r[3]=c->r[29]+0x000003ECu; // 80214A5C
  {uint32_t ea=c->r[2]+0xFFFFDCE8u; c->f[1]=c->ps1[1]=RF32(ea);} // 80214A60
  c->r[4]=c->r[31]+0x00000396u; // 80214A64
  c->f[3]=c->f[2]; // 80214A68
  c->lr=0x80214A70u; f_800E24D0(c); // 80214A6C
  c->r[0]=0u+0x00000000u; // 80214A70
  W32(c->r[30]+0x0000000Cu,c->r[0]); // 80214A74
  c->r[0]=R32(c->r[29]+0x00000650u); // 80214A78
  cmps(c,0,(int32_t)c->r[0],0); // 80214A7C
  if (!crb(c,2)) { goto L_80214A9C; } // 80214A80
  c->r[3]=c->r[29]+0x00000498u; // 80214A84
  c->lr=0x80214A8Cu; f_8007ECBC(c); // 80214A88
  c->r[4]=c->r[31]+0x000003B1u; // 80214A8C
  c->r[5]=0u+0x00000000u; // 80214A90
  c->r[3]=c->r[3]+0x000000FCu; // 80214A94
  c->lr=0x80214A9Cu; f_802E6904(c); // 80214A98
L_80214A9C:;
  c->r[3]=c->r[29]+0x00000498u; // 80214A9C
  c->lr=0x80214AA4u; f_8007ECBC(c); // 80214AA0
  c->r[4]=0u+0x806A0000u; // 80214AA4
  {uint32_t ea=c->r[2]+0xFFFFDCE8u; c->f[1]=c->ps1[1]=RF32(ea);} // 80214AA8
  c->r[4]=c->r[4]+0xFFFF8510u; // 80214AAC
  {uint32_t ea=c->r[2]+0xFFFFDCF0u; c->f[2]=c->ps1[2]=RF32(ea);} // 80214AB0
  c->r[4]=c->r[4]+0x000003B8u; // 80214AB4
  c->r[5]=0u+0x00000001u; // 80214AB8
  c->lr=0x80214AC0u; f_8015DD64(c); // 80214ABC
L_80214AC0:;
  c->r[0]=R32(c->r[30]+0x0000000Cu); // 80214AC0
  cmps(c,0,(int32_t)c->r[0],0); // 80214AC4
  if (!crb(c,2)) { goto L_80214B80; } // 80214AC8
  c->r[3]=c->r[29]+0x00000498u; // 80214ACC
  c->lr=0x80214AD4u; f_8007ECBC(c); // 80214AD0
  c->lr=0x80214AD8u; f_800E71D4(c); // 80214AD4
  {uint32_t ea=c->r[2]+0xFFFFDE88u; c->f[1]=c->ps1[1]=RF32(ea);} // 80214AD8
  c->lr=0x80214AE0u; f_802EA5A4(c); // 80214ADC
  cmps(c,0,(int32_t)c->r[3],0); // 80214AE0
  if (crb(c,2)) { goto L_80214B4C; } // 80214AE4
  {uint32_t ea=c->r[2]+0xFFFFDCE8u; c->f[1]=c->ps1[1]=RF32(ea);} // 80214AE8
  c->r[31]=0u+0x806A0000u; // 80214AEC
  c->r[31]=c->r[31]+0xFFFF8510u; // 80214AF0
  c->r[3]=R32(c->r[13]+0xFFFFDA08u); // 80214AF4
  c->f[2]=c->f[1]; // 80214AF8
  c->r[4]=c->r[31]+0x000003BEu; // 80214AFC
  c->lr=0x80214B04u; f_802E3098(c); // 80214B00
  c->lr=0x80214B08u; f_8004DB5C(c); // 80214B04
  c->r[4]=c->r[3]|c->r[3]; // 80214B08
  c->r[3]=c->r[1]+0x00000008u; // 80214B0C
  c->r[5]=c->r[31]+0x000003C5u; // 80214B10
  c->r[6]=0u+0x00000001u; // 80214B14
  c->lr=0x80214B1Cu; f_80321B90(c); // 80214B18
  c->r[3]=c->r[29]+0x00000498u; // 80214B1C
  c->lr=0x80214B24u; f_8007ECBC(c); // 80214B20
  c->r[3]=c->r[3]+0x000000FCu; // 80214B24
  c->r[4]=c->r[31]+0x000003D8u; // 80214B28
  c->lr=0x80214B30u; f_802E6F14(c); // 80214B2C
  c->r[4]=c->r[1]+0x00000008u; // 80214B30
  c->lr=0x80214B38u; f_80382F2C(c); // 80214B34
  c->r[12]=R32(c->r[1]+0x00000040u); // 80214B38
  c->r[3]=c->r[1]+0x00000008u; // 80214B3C
  c->r[12]=R32(c->r[12]+0x00000008u); // 80214B40
  c->ctr=c->r[12]; // 80214B44
  if (true) { c->lr=0x80214B4Cu; dispatch(c,c->ctr); } // 80214B48
L_80214B4C:;
  c->r[3]=c->r[29]+0x00000498u; // 80214B4C
  c->lr=0x80214B54u; f_8007ECBC(c); // 80214B50
  c->lr=0x80214B58u; f_800E71D4(c); // 80214B54
  c->lr=0x80214B5Cu; f_802EA628(c); // 80214B58
  cmps(c,0,(int32_t)c->r[3],0); // 80214B5C
  if (crb(c,2)) { goto L_80214BA0; } // 80214B60
  c->r[3]=c->r[29]+0x00000498u; // 80214B64
  c->lr=0x80214B6Cu; f_8007ECBC(c); // 80214B68
  {uint32_t ea=c->r[2]+0xFFFFDCE8u; c->f[1]=c->ps1[1]=RF32(ea);} // 80214B6C
  c->lr=0x80214B74u; f_8015E8DC(c); // 80214B70
  c->r[3]=c->r[29]|c->r[29]; // 80214B74
  c->lr=0x80214B7Cu; f_80214BB8(c); // 80214B78
  goto L_80214BA0; // 80214B7C
L_80214B80:;
  c->r[3]=c->r[29]+0x00000490u; // 80214B80
  c->lr=0x80214B88u; f_8007ECBC(c); // 80214B84
  c->lr=0x80214B8Cu; f_800E71D4(c); // 80214B88
  c->lr=0x80214B90u; f_802EA628(c); // 80214B8C
  cmps(c,0,(int32_t)c->r[3],0); // 80214B90
  if (crb(c,2)) { goto L_80214BA0; } // 80214B94
  c->r[3]=c->r[29]|c->r[29]; // 80214B98
  c->lr=0x80214BA0u; f_80214BB8(c); // 80214B9C
L_80214BA0:;
  c->r[11]=c->r[1]+0x00000060u; // 80214BA0
  c->lr=0x80214BA8u; { c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80214BA4
  c->r[0]=R32(c->r[1]+0x00000064u); // 80214BA8
  c->lr=c->r[0]; // 80214BAC
  c->r[1]=c->r[1]+0x00000060u; // 80214BB0
  return; // 80214BB4
}

// fn_80214BB8
void f_80214BB8(Ctx* __restrict c) {
  trace_call(0x80214BB8u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80214BB8
  c->r[0]=c->lr; // 80214BBC
  W32(c->r[1]+0x00000044u,c->r[0]); // 80214BC0
  {uint32_t ea=c->r[1]+0x00000030u; for(int i=28;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 80214BC4
  c->r[28]=c->r[3]|c->r[3]; // 80214BC8
  c->r[31]=c->r[1]|c->r[1]; // 80214BCC
  c->r[0]=R8(c->r[3]+0x00000010u); // 80214BD0
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80214BD4
  c->r[3]=c->r[3]+c->r[0]; // 80214BD8
  c->r[29]=R32(c->r[3]+0x00000014u); // 80214BDC
  cmps(c,0,(int32_t)c->r[29],0); // 80214BE0
  if (crb(c,2)) { goto L_80214C0C; } // 80214BE4
  c->r[30]=0u+0x00000000u; // 80214BE8
  W32(c->r[31]+0x00000024u,c->r[1]); // 80214BEC
  W8(c->r[31]+0x00000008u,c->r[30]); // 80214BF0
  c->lr=0x80214BF8u; f_801AADD8(c); // 80214BF4
  W32(c->r[29]+0x00000000u,c->r[3]); // 80214BF8
  c->r[0]=c->r[13]+0xFFFF8DACu; // 80214BFC
  W32(c->r[29]+0x00000004u,c->r[0]); // 80214C00
  W32(c->r[29]+0x00000008u,c->r[30]); // 80214C04
  W32(c->r[29]+0x0000000Cu,c->r[30]); // 80214C08
L_80214C0C:;
  W32(c->r[28]+0x00000008u,c->r[29]); // 80214C0C
  c->r[0]=0u+0x00000000u; // 80214C10
  c->r[10]=c->r[31]|c->r[31]; // 80214C14
  c->r[3]=c->r[29]|c->r[29]; // 80214C18
  W32(c->r[29]+0x00000008u,c->r[0]); // 80214C1C
  c->r[0]=R32(c->r[28]+0x00000004u); // 80214C20
  W32(c->r[28]+0x0000000Cu,c->r[0]); // 80214C24
  {uint32_t ea=c->r[10]+0x00000030u; for(int i=28;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 80214C28
  c->r[10]=R32(c->r[1]+0x00000000u); // 80214C2C
  c->r[0]=R32(c->r[10]+0x00000004u); // 80214C30
  c->r[1]=c->r[10]|c->r[10]; // 80214C34
  c->lr=c->r[0]; // 80214C38
  return; // 80214C3C
}

// fn_80214C40
void f_80214C40(Ctx* __restrict c) {
  trace_call(0x80214C40u);
  {uint32_t ea=c->r[1]+0xFFFFFD30u; W32(ea,c->r[1]); c->r[1]=ea;} // 80214C40
  c->r[0]=c->lr; // 80214C44
  W32(c->r[1]+0x000002D4u,c->r[0]); // 80214C48
  c->r[11]=c->r[1]+0x000002C0u; // 80214C4C
  {uint32_t ea=c->r[1]+0x000002C0u; WF64(ea,c->f[31]);} // 80214C50
  {uint32_t ea=c->r[1]+0x000002C8u; psq_store(c,31,ea,0,0);} // 80214C54
  c->lr=0x80214C5Cu; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80214C58
  c->r[31]=c->r[1]|c->r[1]; // 80214C5C
  c->r[5]=R32(c->r[3]+0x00000004u); // 80214C60
  c->r[27]=c->r[3]|c->r[3]; // 80214C64
  c->r[28]=c->r[4]|c->r[4]; // 80214C68
  cmps(c,0,(int32_t)c->r[5],0); // 80214C6C
  if (crb(c,2)) { goto L_80214C7C; } // 80214C70
  c->r[0]=R32(c->r[5]+0x00000008u); // 80214C74
  goto L_80214C80; // 80214C78
L_80214C7C:;
  c->r[0]=0u+0x00000000u; // 80214C7C
L_80214C80:;
  cmps(c,0,(int32_t)c->r[0],0); // 80214C80
  if (!crb(c,2)) { goto L_802151F0; } // 80214C84
  {uint32_t ea=c->r[2]+0xFFFFDE6Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 80214C88
  c->r[3]=c->r[31]+0x00000030u; // 80214C8C
  {uint32_t ea=c->r[2]+0xFFFFDE70u; c->f[2]=c->ps1[2]=RF32(ea);} // 80214C90
  {uint32_t ea=c->r[2]+0xFFFFDE74u; c->f[3]=c->ps1[3]=RF32(ea);} // 80214C94
  c->lr=0x80214C9Cu; f_8005FD70(c); // 80214C98
  c->r[25]=c->r[3]|c->r[3]; // 80214C9C
  c->lr=0x80214CA4u; f_8033FE4C(c); // 80214CA0
  c->lr=0x80214CA8u; f_8007FF5C(c); // 80214CA4
  {uint32_t ea=c->r[2]+0xFFFFDCE8u; c->f[2]=c->ps1[2]=RF32(ea);} // 80214CA8
  c->r[4]=c->r[25]|c->r[25]; // 80214CAC
  {uint32_t ea=c->r[2]+0xFFFFDCF0u; c->f[1]=c->ps1[1]=RF32(ea);} // 80214CB0
  c->r[5]=0u+0x00000007u; // 80214CB4
  c->f[3]=c->f[2]; // 80214CB8
  c->lr=0x80214CC0u; f_803676B8(c); // 80214CBC
  c->r[3]=c->r[27]+0x00000498u; // 80214CC0
  c->lr=0x80214CC8u; f_8007ECBC(c); // 80214CC4
  c->r[4]=0u+0x00000000u; // 80214CC8
  c->r[3]=c->r[3]+0x000000FCu; // 80214CCC
  c->lr=0x80214CD4u; f_802E6678(c); // 80214CD0
  c->r[29]=0u+0x00000000u; // 80214CD4
  goto L_80214F50; // 80214CD8
L_80214CDC:;
  c->r[0]=rotl(c->r[29],3)&0xFFFFFFF8u; // 80214CDC
  c->r[3]=c->r[27]+c->r[0]; // 80214CE0
  c->r[30]=c->r[3]+0x000004A0u; // 80214CE4
  c->r[3]=c->r[30]|c->r[30]; // 80214CE8
  c->lr=0x80214CF0u; f_8007ECBC(c); // 80214CEC
  c->r[4]=0u+0x00000000u; // 80214CF0
  c->r[3]=c->r[3]+0x000000FCu; // 80214CF4
  c->lr=0x80214CFCu; f_802E6678(c); // 80214CF8
  c->r[3]=c->r[30]|c->r[30]; // 80214CFC
  c->lr=0x80214D04u; f_8007ECBC(c); // 80214D00
  c->r[0]=0u+0x00000001u; // 80214D04
  W8(c->r[3]+0x00000415u,c->r[0]); // 80214D08
  c->r[3]=c->r[30]|c->r[30]; // 80214D0C
  c->lr=0x80214D14u; f_8007ECBC(c); // 80214D10
  c->r[25]=0u+0x806A0000u; // 80214D14
  c->r[0]=0u+0x00000000u; // 80214D18
  W8(c->r[3]+0x00000416u,c->r[0]); // 80214D1C
  c->r[25]=c->r[25]+0xFFFF8510u; // 80214D20
  c->r[3]=c->r[31]+0x00000198u; // 80214D24
  c->r[5]=c->r[29]+0x00000001u; // 80214D28
  c->r[4]=c->r[25]+0x0000031Au; // 80214D2C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80214D30
  c->lr=0x80214D38u; f_803B1FC8(c); // 80214D34
  c->r[3]=c->r[27]+0x00000498u; // 80214D38
  c->lr=0x80214D40u; f_8007ECBC(c); // 80214D3C
  c->r[3]=c->r[3]+0x000000FCu; // 80214D40
  c->r[4]=c->r[31]+0x00000198u; // 80214D44
  c->lr=0x80214D4Cu; f_802E6F14(c); // 80214D48
  c->r[26]=c->r[3]|c->r[3]; // 80214D4C
  c->r[3]=c->r[30]|c->r[30]; // 80214D50
  c->lr=0x80214D58u; f_8007ECBC(c); // 80214D54
  c->r[12]=R32(c->r[3]+0x0000001Cu); // 80214D58
  c->r[4]=c->r[26]|c->r[26]; // 80214D5C
  c->r[12]=R32(c->r[12]+0x00000020u); // 80214D60
  c->ctr=c->r[12]; // 80214D64
  if (true) { c->lr=0x80214D6Cu; dispatch(c,c->ctr); } // 80214D68
  c->r[5]=0u+0x00000005u; // 80214D6C
  c->r[3]=c->r[31]+0x00000198u; // 80214D70
  c->r[0]=divw((int32_t)c->r[29],(int32_t)c->r[5]); // 80214D74
  c->r[4]=c->r[25]+0x00000322u; // 80214D78
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)c->r[5]); // 80214D7C
  c->r[5]=c->r[29]-c->r[0]; // 80214D80
  c->r[5]=c->r[5]+0x00000001u; // 80214D84
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80214D88
  c->lr=0x80214D90u; f_803B1FC8(c); // 80214D8C
  c->lr=0x80214D94u; f_803B220C(c); // 80214D90
  c->r[3]=c->r[3]^0x80000000u; // 80214D94
  c->r[0]=0u+0x43300000u; // 80214D98
  W32(c->r[31]+0x0000029Cu,c->r[3]); // 80214D9C
  c->r[3]=c->r[30]|c->r[30]; // 80214DA0
  {uint32_t ea=c->r[2]+0xFFFFDE80u; c->f[3]=RF64(ea);} // 80214DA4
  W32(c->r[31]+0x00000298u,c->r[0]); // 80214DA8
  {uint32_t ea=c->r[2]+0xFFFFDE78u; c->f[2]=c->ps1[2]=RF32(ea);} // 80214DAC
  {uint32_t ea=c->r[31]+0x00000298u; c->f[0]=RF64(ea);} // 80214DB0
  {uint32_t ea=c->r[2]+0xFFFFDE7Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 80214DB4
  c->f[3]=c->ps1[3]=S(c->f[0]-c->f[3]); // 80214DB8
  {uint32_t ea=c->r[2]+0xFFFFDD48u; c->f[0]=c->ps1[0]=RF32(ea);} // 80214DBC
  c->f[2]=c->ps1[2]=S(c->f[3]/c->f[2]); // 80214DC0
  c->f[31]=c->ps1[31]=S(std::fma(c->f[1],c->f[2],c->f[0])); // 80214DC4
  c->lr=0x80214DCCu; f_8007ECBC(c); // 80214DC8
  c->f[1]=c->f[31]; // 80214DCC
  {uint32_t ea=c->r[2]+0xFFFFDCF0u; c->f[2]=c->ps1[2]=RF32(ea);} // 80214DD0
  c->r[4]=c->r[31]+0x00000198u; // 80214DD4
  c->r[5]=0u+0x00000001u; // 80214DD8
  c->lr=0x80214DE0u; f_8015DD64(c); // 80214DDC
  c->r[3]=c->r[30]|c->r[30]; // 80214DE0
  c->lr=0x80214DE8u; f_8007ECBC(c); // 80214DE4
  c->r[4]=c->r[25]+0x000001A0u; // 80214DE8
  c->r[5]=0u+0x00000000u; // 80214DEC
  c->r[3]=c->r[3]+0x000000FCu; // 80214DF0
  c->lr=0x80214DF8u; f_802E6904(c); // 80214DF4
  c->r[3]=c->r[30]|c->r[30]; // 80214DF8
  c->lr=0x80214E00u; f_8007ECBC(c); // 80214DFC
  c->r[4]=c->r[25]+0x0000032Du; // 80214E00
  c->r[5]=0u+0x00000000u; // 80214E04
  c->r[3]=c->r[3]+0x000000FCu; // 80214E08
  c->lr=0x80214E10u; f_802E6904(c); // 80214E0C
  c->r[3]=c->r[30]|c->r[30]; // 80214E10
  c->lr=0x80214E18u; f_8007ECBC(c); // 80214E14
  c->r[4]=c->r[25]+0x0000033Au; // 80214E18
  c->r[5]=0u+0x00000000u; // 80214E1C
  c->r[3]=c->r[3]+0x000000FCu; // 80214E20
  c->lr=0x80214E28u; f_802E6904(c); // 80214E24
  c->r[3]=c->r[30]|c->r[30]; // 80214E28
  c->lr=0x80214E30u; f_8007ECBC(c); // 80214E2C
  c->r[4]=c->r[25]+0x00000347u; // 80214E30
  c->r[5]=0u+0x00000000u; // 80214E34
  c->r[3]=c->r[3]+0x000000FCu; // 80214E38
  c->lr=0x80214E40u; f_802E6904(c); // 80214E3C
  c->r[3]=c->r[30]|c->r[30]; // 80214E40
  c->lr=0x80214E48u; f_8007ECBC(c); // 80214E44
  c->r[4]=c->r[25]+0x00000354u; // 80214E48
  c->r[5]=0u+0x00000000u; // 80214E4C
  c->r[3]=c->r[3]+0x000000FCu; // 80214E50
  c->lr=0x80214E58u; f_802E6904(c); // 80214E54
  cmps(c,0,(int32_t)c->r[29],0); // 80214E58
  if (!crb(c,2)) { goto L_80214E8C; } // 80214E5C
  c->r[3]=c->r[30]|c->r[30]; // 80214E60
  c->lr=0x80214E68u; f_8007ECBC(c); // 80214E64
  c->r[4]=0u+0x00000001u; // 80214E68
  c->r[3]=c->r[3]+0x000000FCu; // 80214E6C
  c->lr=0x80214E74u; f_802E6678(c); // 80214E70
  c->r[3]=c->r[30]|c->r[30]; // 80214E74
  c->lr=0x80214E7Cu; f_8007ECBC(c); // 80214E78
  c->r[4]=c->r[25]+0x0000032Du; // 80214E7C
  c->r[5]=0u+0x00000001u; // 80214E80
  c->r[3]=c->r[3]+0x000000FCu; // 80214E84
  c->lr=0x80214E8Cu; f_802E6904(c); // 80214E88
L_80214E8C:;
  cmps(c,0,(int32_t)c->r[29],1); // 80214E8C
  if (!crb(c,2)) { goto L_80214EC8; } // 80214E90
  c->r[3]=c->r[30]|c->r[30]; // 80214E94
  c->lr=0x80214E9Cu; f_8007ECBC(c); // 80214E98
  c->r[4]=0u+0x00000001u; // 80214E9C
  c->r[3]=c->r[3]+0x000000FCu; // 80214EA0
  c->lr=0x80214EA8u; f_802E6678(c); // 80214EA4
  c->r[3]=c->r[30]|c->r[30]; // 80214EA8
  c->lr=0x80214EB0u; f_8007ECBC(c); // 80214EAC
  c->r[4]=0u+0x806A0000u; // 80214EB0
  c->r[5]=0u+0x00000001u; // 80214EB4
  c->r[4]=c->r[4]+0xFFFF8510u; // 80214EB8
  c->r[3]=c->r[3]+0x000000FCu; // 80214EBC
  c->r[4]=c->r[4]+0x0000033Au; // 80214EC0
  c->lr=0x80214EC8u; f_802E6904(c); // 80214EC4
L_80214EC8:;
  cmps(c,0,(int32_t)c->r[29],2); // 80214EC8
  if (!crb(c,2)) { goto L_80214F04; } // 80214ECC
  c->r[3]=c->r[30]|c->r[30]; // 80214ED0
  c->lr=0x80214ED8u; f_8007ECBC(c); // 80214ED4
  c->r[4]=0u+0x00000001u; // 80214ED8
  c->r[3]=c->r[3]+0x000000FCu; // 80214EDC
  c->lr=0x80214EE4u; f_802E6678(c); // 80214EE0
  c->r[3]=c->r[30]|c->r[30]; // 80214EE4
  c->lr=0x80214EECu; f_8007ECBC(c); // 80214EE8
  c->r[4]=0u+0x806A0000u; // 80214EEC
  c->r[5]=0u+0x00000001u; // 80214EF0
  c->r[4]=c->r[4]+0xFFFF8510u; // 80214EF4
  c->r[3]=c->r[3]+0x000000FCu; // 80214EF8
  c->r[4]=c->r[4]+0x00000347u; // 80214EFC
  c->lr=0x80214F04u; f_802E6904(c); // 80214F00
L_80214F04:;
  c->r[0]=R32(c->r[27]+0x00000650u); // 80214F04
  cmps(c,0,(int32_t)c->r[0],0); // 80214F08
  if (crb(c,2)) { goto L_80214F4C; } // 80214F0C
  cmps(c,0,(int32_t)c->r[29],3); // 80214F10
  if (!crb(c,2)) { goto L_80214F4C; } // 80214F14
  c->r[3]=c->r[30]|c->r[30]; // 80214F18
  c->lr=0x80214F20u; f_8007ECBC(c); // 80214F1C
  c->r[4]=0u+0x00000001u; // 80214F20
  c->r[3]=c->r[3]+0x000000FCu; // 80214F24
  c->lr=0x80214F2Cu; f_802E6678(c); // 80214F28
  c->r[3]=c->r[30]|c->r[30]; // 80214F2C
  c->lr=0x80214F34u; f_8007ECBC(c); // 80214F30
  c->r[4]=0u+0x806A0000u; // 80214F34
  c->r[5]=0u+0x00000001u; // 80214F38
  c->r[4]=c->r[4]+0xFFFF8510u; // 80214F3C
  c->r[3]=c->r[3]+0x000000FCu; // 80214F40
  c->r[4]=c->r[4]+0x00000354u; // 80214F44
  c->lr=0x80214F4Cu; f_802E6904(c); // 80214F48
L_80214F4C:;
  c->r[29]=c->r[29]+0x00000001u; // 80214F4C
L_80214F50:;
  cmps(c,0,(int32_t)c->r[29],4); // 80214F50
  if (crb(c,0)) { IRQCHK(c); goto L_80214CDC; } // 80214F54
  c->r[3]=R32(c->r[27]+0x0000000Cu); // 80214F58
  cmps(c,0,(int32_t)c->r[3],0); // 80214F5C
  if (crb(c,2)) { goto L_80214F7C; } // 80214F60
  c->r[25]=R32(c->r[3]+0x00000000u); // 80214F64
  c->lr=0x80214F6Cu; f_801F8638(c); // 80214F68
  cmps(c,0,(int32_t)c->r[25],(int32_t)c->r[3]); // 80214F6C
  if (!crb(c,2)) { goto L_80214F7C; } // 80214F70
  c->r[0]=R32(c->r[27]+0x0000000Cu); // 80214F74
  goto L_80214F80; // 80214F78
L_80214F7C:;
  c->r[0]=0u+0x00000000u; // 80214F7C
L_80214F80:;
  cmps(c,0,(int32_t)c->r[0],0); // 80214F80
  if (!crb(c,2)) { goto L_80215088; } // 80214F84
  c->r[29]=0u+0x00000000u; // 80214F88
  goto L_8021507C; // 80214F8C
L_80214F90:;
  c->r[4]=0u+0x806A0000u; // 80214F90
  c->r[3]=c->r[31]+0x00000198u; // 80214F94
  c->r[4]=c->r[4]+0xFFFF8510u; // 80214F98
  c->r[5]=c->r[29]+0x00000001u; // 80214F9C
  c->r[4]=c->r[4]+0x0000036Bu; // 80214FA0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80214FA4
  c->lr=0x80214FACu; f_803B1FC8(c); // 80214FA8
  c->r[0]=rotl(c->r[29],2)&0xFFFFFFFCu; // 80214FAC
  c->r[3]=c->r[27]+c->r[0]; // 80214FB0
  c->r[0]=R32(c->r[3]+0x00000644u); // 80214FB4
  cmps(c,0,(int32_t)c->r[0],0); // 80214FB8
  if (!crb(c,2)) { goto L_80215078; } // 80214FBC
  c->r[0]=rotl(c->r[29],3)&0xFFFFFFF8u; // 80214FC0
  c->r[3]=c->r[27]+c->r[0]; // 80214FC4
  c->r[25]=c->r[3]+0x000004A0u; // 80214FC8
  c->r[3]=c->r[25]|c->r[25]; // 80214FCC
  c->lr=0x80214FD4u; f_8007ECBC(c); // 80214FD0
  c->r[30]=0u+0x00000000u; // 80214FD4
  W8(c->r[3]+0x00000415u,c->r[30]); // 80214FD8
  c->r[3]=c->r[25]|c->r[25]; // 80214FDC
  c->lr=0x80214FE4u; f_8007ECBC(c); // 80214FE0
  {uint32_t ea=c->r[2]+0xFFFFDCE8u; c->f[1]=c->ps1[1]=RF32(ea);} // 80214FE4
  c->r[4]=c->r[31]+0x00000198u; // 80214FE8
  {uint32_t ea=c->r[2]+0xFFFFDCF0u; c->f[2]=c->ps1[2]=RF32(ea);} // 80214FEC
  c->r[5]=0u+0x00000001u; // 80214FF0
  c->lr=0x80214FF8u; f_8015DD64(c); // 80214FF4
  c->r[3]=c->r[25]|c->r[25]; // 80214FF8
  c->lr=0x80215000u; f_8007ECBC(c); // 80214FFC
  c->r[0]=R8(c->r[3]+0x00000010u); // 80215000
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80215004
  c->r[4]=c->r[3]+c->r[0]; // 80215008
  c->r[6]=R32(c->r[4]+0x00000014u); // 8021500C
  cmps(c,0,(int32_t)c->r[6],0); // 80215010
  if (crb(c,2)) { goto L_80215064; } // 80215014
  c->r[0]=R8(c->r[13]+0xFFFFC3C4u); // 80215018
  W32(c->r[31]+0x0000006Cu,c->r[1]); // 8021501C
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 80215020
  W8(c->r[31]+0x0000000Cu,c->r[30]); // 80215024
  if (!crb(c,2)) { goto L_80215048; } // 80215028
  c->r[5]=R32(c->r[13]+0xFFFFBCC8u); // 8021502C
  c->r[0]=0u+0x00000001u; // 80215030
  W32(c->r[13]+0xFFFFBDFCu,c->r[5]); // 80215034
  c->r[4]=c->r[5]+0x00000001u; // 80215038
  W32(c->r[13]+0xFFFFBCC8u,c->r[4]); // 8021503C
  W32(c->r[13]+0xFFFFC3C0u,c->r[5]); // 80215040
  W8(c->r[13]+0xFFFFC3C4u,c->r[0]); // 80215044
L_80215048:;
  c->r[0]=R32(c->r[13]+0xFFFFC3C0u); // 80215048
  c->r[4]=c->r[13]+0xFFFF84E4u; // 8021504C
  W32(c->r[6]+0x00000000u,c->r[0]); // 80215050
  c->r[0]=0u+0x00000000u; // 80215054
  W32(c->r[6]+0x00000004u,c->r[4]); // 80215058
  W32(c->r[6]+0x00000008u,c->r[0]); // 8021505C
  W32(c->r[6]+0x0000000Cu,c->r[0]); // 80215060
L_80215064:;
  W32(c->r[3]+0x00000008u,c->r[6]); // 80215064
  c->r[0]=0u+0x00000000u; // 80215068
  W32(c->r[6]+0x00000008u,c->r[0]); // 8021506C
  c->r[0]=R32(c->r[3]+0x00000004u); // 80215070
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 80215074
L_80215078:;
  c->r[29]=c->r[29]+0x00000001u; // 80215078
L_8021507C:;
  cmps(c,0,(int32_t)c->r[29],4); // 8021507C
  if (crb(c,0)) { IRQCHK(c); goto L_80214F90; } // 80215080
  goto L_802150FC; // 80215084
L_80215088:;
  c->r[26]=0u+0x00000000u; // 80215088
  goto L_802150F4; // 8021508C
L_80215090:;
  c->r[4]=0u+0x806A0000u; // 80215090
  c->r[3]=c->r[31]+0x00000198u; // 80215094
  c->r[4]=c->r[4]+0xFFFF8510u; // 80215098
  c->r[5]=c->r[26]+0x00000001u; // 8021509C
  c->r[4]=c->r[4]+0x0000036Bu; // 802150A0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 802150A4
  c->lr=0x802150ACu; f_803B1FC8(c); // 802150A8
  c->r[0]=rotl(c->r[26],2)&0xFFFFFFFCu; // 802150AC
  c->r[3]=c->r[27]+c->r[0]; // 802150B0
  c->r[0]=R32(c->r[3]+0x00000644u); // 802150B4
  cmps(c,0,(int32_t)c->r[0],0); // 802150B8
  if (!crb(c,2)) { goto L_802150F0; } // 802150BC
  c->r[0]=rotl(c->r[26],3)&0xFFFFFFF8u; // 802150C0
  c->r[3]=c->r[27]+c->r[0]; // 802150C4
  c->r[25]=c->r[3]+0x000004A0u; // 802150C8
  c->r[3]=c->r[25]|c->r[25]; // 802150CC
  c->lr=0x802150D4u; f_8007ECBC(c); // 802150D0
  c->r[4]=0u+0x00000000u; // 802150D4
  c->r[3]=c->r[3]+0x000000FCu; // 802150D8
  c->lr=0x802150E0u; f_802E6678(c); // 802150DC
  c->r[3]=c->r[25]|c->r[25]; // 802150E0
  c->lr=0x802150E8u; f_8007ECBC(c); // 802150E4
  c->r[0]=0u+0x00000000u; // 802150E8
  W8(c->r[3]+0x00000415u,c->r[0]); // 802150EC
L_802150F0:;
  c->r[26]=c->r[26]+0x00000001u; // 802150F0
L_802150F4:;
  cmps(c,0,(int32_t)c->r[26],4); // 802150F4
  if (crb(c,0)) { IRQCHK(c); goto L_80215090; } // 802150F8
L_802150FC:;
  c->r[25]=0u+0x00000000u; // 802150FC
  goto L_80215150; // 80215100
L_80215104:;
  c->r[4]=0u+0x806A0000u; // 80215104
  c->r[3]=c->r[31]+0x00000198u; // 80215108
  c->r[4]=c->r[4]+0xFFFF8510u; // 8021510C
  c->r[5]=c->r[25]+0x00000001u; // 80215110
  c->r[4]=c->r[4]+0x00000361u; // 80215114
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80215118
  c->lr=0x80215120u; f_803B1FC8(c); // 8021511C
  c->r[3]=c->r[27]+0x000004A0u; // 80215120
  c->lr=0x80215128u; f_8007ECBC(c); // 80215124
  c->r[3]=c->r[3]+0x000000FCu; // 80215128
  c->r[4]=c->r[31]+0x00000198u; // 8021512C
  c->lr=0x80215134u; f_802E6E50(c); // 80215130
  W32(c->r[31]+0x00000010u,c->r[3]); // 80215134
  c->r[3]=c->r[31]+0x00000010u; // 80215138
  c->lr=0x80215140u; f_8005C9DC(c); // 8021513C
  c->r[0]=rotl(c->r[25],2)&0xFFFFFFFCu; // 80215140
  c->r[25]=c->r[25]+0x00000001u; // 80215144
  c->r[4]=c->r[27]+c->r[0]; // 80215148
  W32(c->r[4]+0x00000560u,c->r[3]); // 8021514C
L_80215150:;
  cmps(c,0,(int32_t)c->r[25],8); // 80215150
  if (crb(c,0)) { IRQCHK(c); goto L_80215104; } // 80215154
  c->r[25]=0u+0x00000000u; // 80215158
  goto L_802151B0; // 8021515C
L_80215160:;
  c->r[0]=R32(c->r[27]+0x000003E8u); // 80215160
  c->r[4]=0u+0x00000000u; // 80215164
  c->r[26]=0u+0x00000000u; // 80215168
  c->r[3]=c->r[0]+c->r[25]; // 8021516C
  W8(c->r[3]+0x0000001Cu,c->r[4]); // 80215170
  goto L_802151A4; // 80215174
L_80215178:;
  c->r[3]=c->r[27]|c->r[27]; // 80215178
  c->r[4]=c->r[25]|c->r[25]; // 8021517C
  c->r[5]=c->r[26]|c->r[26]; // 80215180
  c->lr=0x80215188u; f_80213620(c); // 80215184
  c->r[0]=rotl(c->r[3],0)&0x00000002u; cr0(c,c->r[0]); // 80215188
  if (crb(c,2)) { goto L_802151A0; } // 8021518C
  c->r[0]=R32(c->r[27]+0x000003E8u); // 80215190
  c->r[4]=0u+0x00000001u; // 80215194
  c->r[3]=c->r[25]+c->r[0]; // 80215198
  W8(c->r[3]+0x0000001Cu,c->r[4]); // 8021519C
L_802151A0:;
  c->r[26]=c->r[26]+0x00000001u; // 802151A0
L_802151A4:;
  cmps(c,0,(int32_t)c->r[26],8); // 802151A4
  if (crb(c,0)) { IRQCHK(c); goto L_80215178; } // 802151A8
  c->r[25]=c->r[25]+0x00000001u; // 802151AC
L_802151B0:;
  cmps(c,0,(int32_t)c->r[25],4); // 802151B0
  if (crb(c,0)) { IRQCHK(c); goto L_80215160; } // 802151B4
  c->r[3]=c->r[27]+0x00000548u; // 802151B8
  c->lr=0x802151C0u; f_800B14B8(c); // 802151BC
  c->r[0]=0u+0xFFFFFFFFu; // 802151C0
  W32(c->r[27]+0x00000614u,c->r[0]); // 802151C4
  c->r[0]=0u+0x00000000u; // 802151C8
  c->r[3]=c->r[27]|c->r[27]; // 802151CC
  W32(c->r[28]+0x0000000Cu,c->r[0]); // 802151D0
  c->lr=0x802151D8u; f_80213220(c); // 802151D4
  c->r[3]=R32(c->r[27]+0x000003E8u); // 802151D8
  c->r[4]=0u+0x00000000u; // 802151DC
  c->r[12]=R32(c->r[3]+0x00000138u); // 802151E0
  c->r[12]=R32(c->r[12]+0x00000008u); // 802151E4
  c->ctr=c->r[12]; // 802151E8
  if (true) { c->lr=0x802151F0u; dispatch(c,c->ctr); } // 802151EC
L_802151F0:;
  c->r[3]=c->r[27]+0x00000548u; // 802151F0
  c->lr=0x802151F8u; f_800655F4(c); // 802151F4
  cmps(c,0,(int32_t)c->r[3],0); // 802151F8
  if (!crb(c,2)) { goto L_80215800; } // 802151FC
  c->r[0]=R32(c->r[27]+0x00000600u); // 80215200
  cmps(c,0,(int32_t)c->r[0],0); // 80215204
  if (!crb(c,2)) { goto L_802153C8; } // 80215208
  c->r[0]=0u+0x0000000Fu; // 8021520C
  c->r[3]=c->r[27]|c->r[27]; // 80215210
  c->r[4]=(uint32_t)(int32_t)(int16_t)c->r[0]; // 80215214
  c->lr=0x8021521Cu; f_80210E90(c); // 80215218
  cmps(c,0,(int32_t)c->r[3],0); // 8021521C
  if (crb(c,2)) { goto L_8021538C; } // 80215220
  c->r[4]=R32(c->r[27]+0x000003DCu); // 80215224
  c->r[3]=c->r[27]|c->r[27]; // 80215228
  c->lr=0x80215230u; f_80211128(c); // 8021522C
  c->r[3]=c->r[27]+0x00000498u; // 80215230
  c->lr=0x80215238u; f_8007ECBC(c); // 80215234
  c->r[4]=0u+0x00000001u; // 80215238
  c->r[3]=c->r[3]+0x000000FCu; // 8021523C
  c->lr=0x80215244u; f_802E6678(c); // 80215240
  c->r[3]=c->r[27]+0x00000498u; // 80215244
  c->lr=0x8021524Cu; f_8007ECBC(c); // 80215248
  c->r[28]=0u+0x806A0000u; // 8021524C
  {uint32_t ea=c->r[2]+0xFFFFDCE8u; c->f[1]=c->ps1[1]=RF32(ea);} // 80215250
  c->r[28]=c->r[28]+0xFFFF8510u; // 80215254
  c->r[4]=c->r[28]+0x000003B8u; // 80215258
  c->lr=0x80215260u; f_8015DE64(c); // 8021525C
  c->r[0]=R32(c->r[27]+0x00000644u); // 80215260
  cmps(c,0,(int32_t)c->r[0],0); // 80215264
  if (!crb(c,2)) { goto L_80215284; } // 80215268
  c->r[3]=c->r[27]+0x00000498u; // 8021526C
  c->lr=0x80215274u; f_8007ECBC(c); // 80215270
  c->r[4]=c->r[28]+0x000003DEu; // 80215274
  c->r[5]=0u+0x00000000u; // 80215278
  c->r[3]=c->r[3]+0x000000FCu; // 8021527C
  c->lr=0x80215284u; f_802E6904(c); // 80215280
L_80215284:;
  c->r[0]=R32(c->r[27]+0x00000648u); // 80215284
  cmps(c,0,(int32_t)c->r[0],0); // 80215288
  if (!crb(c,2)) { goto L_802152B0; } // 8021528C
  c->r[3]=c->r[27]+0x00000498u; // 80215290
  c->lr=0x80215298u; f_8007ECBC(c); // 80215294
  c->r[4]=0u+0x806A0000u; // 80215298
  c->r[5]=0u+0x00000000u; // 8021529C
  c->r[4]=c->r[4]+0xFFFF8510u; // 802152A0
  c->r[3]=c->r[3]+0x000000FCu; // 802152A4
  c->r[4]=c->r[4]+0x000003E5u; // 802152A8
  c->lr=0x802152B0u; f_802E6904(c); // 802152AC
L_802152B0:;
  c->r[0]=R32(c->r[27]+0x0000064Cu); // 802152B0
  cmps(c,0,(int32_t)c->r[0],0); // 802152B4
  if (!crb(c,2)) { goto L_802152DC; } // 802152B8
  c->r[3]=c->r[27]+0x00000498u; // 802152BC
  c->lr=0x802152C4u; f_8007ECBC(c); // 802152C0
  c->r[4]=0u+0x806A0000u; // 802152C4
  c->r[5]=0u+0x00000000u; // 802152C8
  c->r[4]=c->r[4]+0xFFFF8510u; // 802152CC
  c->r[3]=c->r[3]+0x000000FCu; // 802152D0
  c->r[4]=c->r[4]+0x000003ECu; // 802152D4
  c->lr=0x802152DCu; f_802E6904(c); // 802152D8
L_802152DC:;
  c->r[0]=R32(c->r[27]+0x00000650u); // 802152DC
  cmps(c,0,(int32_t)c->r[0],0); // 802152E0
  if (!crb(c,2)) { goto L_80215308; } // 802152E4
  c->r[3]=c->r[27]+0x00000498u; // 802152E8
  c->lr=0x802152F0u; f_8007ECBC(c); // 802152EC
  c->r[4]=0u+0x806A0000u; // 802152F0
  c->r[5]=0u+0x00000000u; // 802152F4
  c->r[4]=c->r[4]+0xFFFF8510u; // 802152F8
  c->r[3]=c->r[3]+0x000000FCu; // 802152FC
  c->r[4]=c->r[4]+0x000003B1u; // 80215300
  c->lr=0x80215308u; f_802E6904(c); // 80215304
L_80215308:;
  c->r[25]=0u+0x00000000u; // 80215308
  goto L_80215330; // 8021530C
L_80215310:;
  c->r[0]=rotl(c->r[25],3)&0xFFFFFFF8u; // 80215310
  c->r[3]=c->r[27]+c->r[0]; // 80215314
  c->r[3]=c->r[3]+0x000004A0u; // 80215318
  c->lr=0x80215320u; f_8007ECBC(c); // 8021531C
  c->r[4]=0u+0x00000000u; // 80215320
  c->r[3]=c->r[3]+0x000000FCu; // 80215324
  c->lr=0x8021532Cu; f_802E6678(c); // 80215328
  c->r[25]=c->r[25]+0x00000001u; // 8021532C
L_80215330:;
  cmps(c,0,(int32_t)c->r[25],4); // 80215330
  if (crb(c,0)) { IRQCHK(c); goto L_80215310; } // 80215334
  c->r[0]=R8(c->r[27]+0x00000010u); // 80215338
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 8021533C
  c->r[3]=c->r[27]+c->r[0]; // 80215340
  c->r[25]=R32(c->r[3]+0x00000014u); // 80215344
  cmps(c,0,(int32_t)c->r[25],0); // 80215348
  if (crb(c,2)) { goto L_80215374; } // 8021534C
  c->r[28]=0u+0x00000000u; // 80215350
  W32(c->r[31]+0x00000054u,c->r[1]); // 80215354
  W8(c->r[31]+0x00000008u,c->r[28]); // 80215358
  c->lr=0x80215360u; f_8007AE58(c); // 8021535C
  W32(c->r[25]+0x00000000u,c->r[3]); // 80215360
  c->r[0]=c->r[13]+0xFFFF8220u; // 80215364
  W32(c->r[25]+0x00000004u,c->r[0]); // 80215368
  W32(c->r[25]+0x00000008u,c->r[28]); // 8021536C
  W32(c->r[25]+0x0000000Cu,c->r[28]); // 80215370
L_80215374:;
  W32(c->r[27]+0x00000008u,c->r[25]); // 80215374
  c->r[0]=0u+0x00000000u; // 80215378
  W32(c->r[25]+0x00000008u,c->r[0]); // 8021537C
  c->r[0]=R32(c->r[27]+0x00000004u); // 80215380
  W32(c->r[27]+0x0000000Cu,c->r[0]); // 80215384
  goto L_80215810; // 80215388
L_8021538C:;
  c->r[25]=0u+0x00000000u; // 8021538C
  goto L_802153BC; // 80215390
L_80215394:;
  c->r[0]=rotl(c->r[25],3)&0xFFFFFFF8u; // 80215394
  c->r[3]=c->r[27]+c->r[0]; // 80215398
  c->r[3]=c->r[3]+0x000004A0u; // 8021539C
  c->lr=0x802153A4u; f_8007ECBC(c); // 802153A0
  c->r[0]=R8(c->r[3]+0x00000416u); // 802153A4
  cmps(c,0,(int32_t)c->r[0],0); // 802153A8
  if (crb(c,2)) { goto L_802153B8; } // 802153AC
  W32(c->r[27]+0x00000614u,c->r[25]); // 802153B0
  goto L_80215404; // 802153B4
L_802153B8:;
  c->r[25]=c->r[25]+0x00000001u; // 802153B8
L_802153BC:;
  cmps(c,0,(int32_t)c->r[25],4); // 802153BC
  if (crb(c,0)) { IRQCHK(c); goto L_80215394; } // 802153C0
  goto L_80215404; // 802153C4
L_802153C8:;
  c->r[0]=R32(c->r[27]+0x00000604u); // 802153C8
  W32(c->r[27]+0x00000614u,c->r[0]); // 802153CC
  c->r[0]=rotl(c->r[0],3)&0xFFFFFFF8u; // 802153D0
  c->r[3]=c->r[27]+c->r[0]; // 802153D4
  c->r[3]=c->r[3]+0x000004A0u; // 802153D8
  c->lr=0x802153E0u; f_8007ECBC(c); // 802153DC
  c->r[0]=0u+0x00000001u; // 802153E0
  W8(c->r[3]+0x00000416u,c->r[0]); // 802153E4
  c->r[0]=R32(c->r[27]+0x00000614u); // 802153E8
  c->r[0]=rotl(c->r[0],3)&0xFFFFFFF8u; // 802153EC
  c->r[3]=c->r[27]+c->r[0]; // 802153F0
  c->r[3]=c->r[3]+0x000004A0u; // 802153F4
  c->lr=0x802153FCu; f_8007ECBC(c); // 802153F8
  c->r[0]=0u+0x00000000u; // 802153FC
  W8(c->r[3]+0x00000415u,c->r[0]); // 80215400
L_80215404:;
  c->r[0]=R32(c->r[27]+0x00000614u); // 80215404
  cmps(c,0,(int32_t)c->r[0],-1); // 80215408
  if (crb(c,2)) { goto L_802157E4; } // 8021540C
  c->r[4]=R32(c->r[27]+0x000003DCu); // 80215410
  c->r[3]=c->r[27]|c->r[27]; // 80215414
  c->lr=0x8021541Cu; f_80211064(c); // 80215418
  c->r[0]=R32(c->r[27]+0x00000614u); // 8021541C
  c->r[3]=c->r[27]+0x00000548u; // 80215420
  c->r[0]=rotl(c->r[0],3)&0xFFFFFFF8u; // 80215424
  c->r[4]=c->r[27]+c->r[0]; // 80215428
  c->r[4]=c->r[4]+0x000004A0u; // 8021542C
  c->lr=0x80215434u; f_80053568(c); // 80215430
  c->r[25]=0u+0x00000000u; // 80215434
  goto L_80215458; // 80215438
L_8021543C:;
  c->r[0]=rotl(c->r[25],3)&0xFFFFFFF8u; // 8021543C
  c->r[3]=c->r[27]+c->r[0]; // 80215440
  c->r[3]=c->r[3]+0x000004A0u; // 80215444
  c->lr=0x8021544Cu; f_8007ECBC(c); // 80215448
  c->r[0]=0u+0x00000000u; // 8021544C
  W8(c->r[3]+0x00000416u,c->r[0]); // 80215450
  c->r[25]=c->r[25]+0x00000001u; // 80215454
L_80215458:;
  cmps(c,0,(int32_t)c->r[25],4); // 80215458
  if (crb(c,0)) { IRQCHK(c); goto L_8021543C; } // 8021545C
  c->r[3]=c->r[27]+0x00000548u; // 80215460
  c->lr=0x80215468u; f_8007ECBC(c); // 80215464
  c->r[28]=0u+0x806A0000u; // 80215468
  c->r[5]=0u+0x00000000u; // 8021546C
  c->r[28]=c->r[28]+0xFFFF8510u; // 80215470
  c->r[3]=c->r[3]+0x000000FCu; // 80215474
  c->r[4]=c->r[28]+0x0000032Du; // 80215478
  c->lr=0x80215480u; f_802E6904(c); // 8021547C
  c->r[3]=c->r[27]+0x00000548u; // 80215480
  c->lr=0x80215488u; f_8007ECBC(c); // 80215484
  c->r[4]=c->r[28]+0x0000033Au; // 80215488
  c->r[5]=0u+0x00000000u; // 8021548C
  c->r[3]=c->r[3]+0x000000FCu; // 80215490
  c->lr=0x80215498u; f_802E6904(c); // 80215494
  c->r[3]=c->r[27]+0x00000548u; // 80215498
  c->lr=0x802154A0u; f_8007ECBC(c); // 8021549C
  c->r[4]=c->r[28]+0x00000347u; // 802154A0
  c->r[5]=0u+0x00000000u; // 802154A4
  c->r[3]=c->r[3]+0x000000FCu; // 802154A8
  c->lr=0x802154B0u; f_802E6904(c); // 802154AC
  c->r[3]=c->r[27]+0x00000548u; // 802154B0
  c->lr=0x802154B8u; f_8007ECBC(c); // 802154B4
  c->r[4]=c->r[28]+0x00000354u; // 802154B8
  c->r[5]=0u+0x00000000u; // 802154BC
  c->r[3]=c->r[3]+0x000000FCu; // 802154C0
  c->lr=0x802154C8u; f_802E6904(c); // 802154C4
  c->r[3]=c->r[27]+0x00000548u; // 802154C8
  c->lr=0x802154D0u; f_8007ECBC(c); // 802154CC
  c->r[4]=c->r[28]+0x000001A0u; // 802154D0
  c->r[5]=0u+0x00000001u; // 802154D4
  c->r[3]=c->r[3]+0x000000FCu; // 802154D8
  c->lr=0x802154E0u; f_802E6904(c); // 802154DC
  {uint32_t ea=c->r[2]+0xFFFFDCE8u; c->f[1]=c->ps1[1]=RF32(ea);} // 802154E0
  c->r[3]=c->r[27]|c->r[27]; // 802154E4
  c->lr=0x802154ECu; f_8021369C(c); // 802154E8
  c->r[3]=c->r[27]+0x00000548u; // 802154EC
  c->lr=0x802154F4u; f_8007ECBC(c); // 802154F0
  {uint32_t ea=c->r[2]+0xFFFFDCE8u; c->f[1]=c->ps1[1]=RF32(ea);} // 802154F4
  c->r[4]=c->r[28]+0x000003F3u; // 802154F8
  {uint32_t ea=c->r[2]+0xFFFFDCF0u; c->f[2]=c->ps1[2]=RF32(ea);} // 802154FC
  c->r[5]=0u+0x00000001u; // 80215500
  c->lr=0x80215508u; f_8015DD64(c); // 80215504
  c->r[3]=c->r[27]+0x00000548u; // 80215508
  c->lr=0x80215510u; f_8007ECBC(c); // 8021550C
  c->r[0]=R32(c->r[27]+0x00000614u); // 80215510
  c->r[4]=c->r[28]+0x000002FEu; // 80215514
  c->r[6]=c->r[27]+0x00000560u; // 80215518
  c->r[5]=0u+0x00000000u; // 8021551C
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80215520
  c->r[7]=c->r[27]+c->r[0]; // 80215524
  c->r[7]=R32(c->r[7]+0x00000644u); // 80215528
  c->lr=0x80215530u; f_8015DF6C(c); // 8021552C
  c->r[3]=c->r[27]+0x00000548u; // 80215530
  c->lr=0x80215538u; f_8007ECBC(c); // 80215534
  c->r[4]=0u+0x00000000u; // 80215538
  c->lr=0x80215540u; f_8015E874(c); // 8021553C
  c->r[3]=c->r[27]+0x00000548u; // 80215540
  c->lr=0x80215548u; f_8007ECBC(c); // 80215544
  {uint32_t ea=c->r[2]+0xFFFFDCE8u; c->f[1]=c->ps1[1]=RF32(ea);} // 80215548
  c->lr=0x80215550u; f_8015E8DC(c); // 8021554C
  c->r[25]=0u+0x00000000u; // 80215550
  goto L_802155A8; // 80215554
L_80215558:;
  c->r[4]=0u+0x806A0000u; // 80215558
  c->r[3]=c->r[31]+0x00000070u; // 8021555C
  c->r[4]=c->r[4]+0xFFFF8510u; // 80215560
  c->r[5]=c->r[25]+0x00000001u; // 80215564
  c->r[4]=c->r[4]+0x0000036Bu; // 80215568
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8021556C
  c->lr=0x80215574u; f_803B1FC8(c); // 80215570
  c->r[0]=R32(c->r[27]+0x00000614u); // 80215574
  cmps(c,0,(int32_t)c->r[25],(int32_t)c->r[0]); // 80215578
  if (crb(c,2)) { goto L_802155A4; } // 8021557C
  c->r[0]=rotl(c->r[25],3)&0xFFFFFFF8u; // 80215580
  c->r[3]=c->r[27]+c->r[0]; // 80215584
  c->r[3]=c->r[3]+0x000004A0u; // 80215588
  c->lr=0x80215590u; f_8007ECBC(c); // 8021558C
  {uint32_t ea=c->r[2]+0xFFFFDCE8u; c->f[1]=c->ps1[1]=RF32(ea);} // 80215590
  c->r[4]=c->r[31]+0x00000070u; // 80215594
  {uint32_t ea=c->r[2]+0xFFFFDCF0u; c->f[2]=c->ps1[2]=RF32(ea);} // 80215598
  c->r[5]=0u+0x00000001u; // 8021559C
  c->lr=0x802155A4u; f_8015DD64(c); // 802155A0
L_802155A4:;
  c->r[25]=c->r[25]+0x00000001u; // 802155A4
L_802155A8:;
  cmps(c,0,(int32_t)c->r[25],4); // 802155A8
  if (crb(c,0)) { IRQCHK(c); goto L_80215558; } // 802155AC
  c->r[3]=c->r[27]+0x000004A8u; // 802155B0
  c->lr=0x802155B8u; f_8007ECBC(c); // 802155B4
  c->r[28]=0u+0x806A0000u; // 802155B8
  c->r[5]=0u+0x00000000u; // 802155BC
  c->r[28]=c->r[28]+0xFFFF8510u; // 802155C0
  c->r[3]=c->r[3]+0x000000FCu; // 802155C4
  c->r[4]=c->r[28]+0x000001ACu; // 802155C8
  c->lr=0x802155D0u; f_802E6904(c); // 802155CC
  c->r[3]=c->r[27]+0x000004B0u; // 802155D0
  c->lr=0x802155D8u; f_8007ECBC(c); // 802155D4
  c->r[4]=c->r[28]+0x000001B5u; // 802155D8
  c->r[5]=0u+0x00000000u; // 802155DC
  c->r[3]=c->r[3]+0x000000FCu; // 802155E0
  c->lr=0x802155E8u; f_802E6904(c); // 802155E4
  c->r[3]=c->r[27]+0x000004B0u; // 802155E8
  c->lr=0x802155F0u; f_8007ECBC(c); // 802155EC
  c->r[4]=c->r[28]+0x000001BEu; // 802155F0
  c->r[5]=0u+0x00000000u; // 802155F4
  c->r[3]=c->r[3]+0x000000FCu; // 802155F8
  c->lr=0x80215600u; f_802E6904(c); // 802155FC
  c->r[3]=c->r[27]+0x000004B0u; // 80215600
  c->lr=0x80215608u; f_8007ECBC(c); // 80215604
  c->r[4]=c->r[28]+0x000001ACu; // 80215608
  c->r[5]=0u+0x00000000u; // 8021560C
  c->r[3]=c->r[3]+0x000000FCu; // 80215610
  c->lr=0x80215618u; f_802E6904(c); // 80215614
  c->lr=0x8021561Cu; f_8004DB5C(c); // 80215618
  c->r[4]=c->r[3]|c->r[3]; // 8021561C
  c->r[3]=c->r[31]+0x00000090u; // 80215620
  c->r[5]=c->r[28]+0x000003C5u; // 80215624
  c->r[6]=0u+0x00000001u; // 80215628
  c->lr=0x80215630u; f_80321B90(c); // 8021562C
  c->r[3]=c->r[27]+0x00000548u; // 80215630
  c->lr=0x80215638u; f_8007ECBC(c); // 80215634
  c->r[3]=c->r[3]+0x000001B8u; // 80215638
  c->r[4]=c->r[31]+0x00000090u; // 8021563C
  c->lr=0x80215644u; f_80382F2C(c); // 80215640
  c->r[12]=R32(c->r[31]+0x000000C8u); // 80215644
  c->r[3]=c->r[31]+0x00000090u; // 80215648
  c->r[12]=R32(c->r[12]+0x00000008u); // 8021564C
  c->ctr=c->r[12]; // 80215650
  if (true) { c->lr=0x80215658u; dispatch(c,c->ctr); } // 80215654
  c->r[29]=0u+0x00000000u; // 80215658
  goto L_80215708; // 8021565C
L_80215660:;
  c->r[0]=R32(c->r[27]+0x00000614u); // 80215660
  cmps(c,0,(int32_t)c->r[0],3); // 80215664
  if (!crb(c,2)) { goto L_802156C8; } // 80215668
  c->r[4]=R32(c->r[27]+0x00000540u); // 8021566C
  cmps(c,0,(int32_t)c->r[4],0); // 80215670
  if (crb(c,2)) { goto L_8021567C; } // 80215674
  c->r[4]=c->r[4]+0x00000020u; // 80215678
L_8021567C:;
  c->r[5]=R32(c->r[4]+0x00000000u); // 8021567C
  c->r[3]=c->r[27]+0x000004C0u; // 80215680
  c->r[0]=R32(c->r[4]+0x00000004u); // 80215684
  c->r[4]=c->r[31]+0x00000028u; // 80215688
  W32(c->r[31]+0x0000002Cu,c->r[0]); // 8021568C
  W32(c->r[31]+0x00000028u,c->r[5]); // 80215690
  c->lr=0x80215698u; f_80053568(c); // 80215694
  c->r[4]=R32(c->r[27]+0x00000544u); // 80215698
  cmps(c,0,(int32_t)c->r[4],0); // 8021569C
  if (crb(c,2)) { goto L_802156A8; } // 802156A0
  c->r[4]=c->r[4]+0x00000020u; // 802156A4
L_802156A8:;
  c->r[5]=R32(c->r[4]+0x00000000u); // 802156A8
  c->r[3]=c->r[27]+0x000004C8u; // 802156AC
  c->r[0]=R32(c->r[4]+0x00000004u); // 802156B0
  c->r[4]=c->r[31]+0x00000020u; // 802156B4
  W32(c->r[31]+0x00000024u,c->r[0]); // 802156B8
  W32(c->r[31]+0x00000020u,c->r[5]); // 802156BC
  c->lr=0x802156C4u; f_80053568(c); // 802156C0
  goto L_80215704; // 802156C4
L_802156C8:;
  c->r[0]=rotl(c->r[29],2)&0xFFFFFFFCu; // 802156C8
  c->r[3]=c->r[27]+c->r[0]; // 802156CC
  c->r[3]=R32(c->r[3]+0x00000520u); // 802156D0
  cmps(c,0,(int32_t)c->r[3],0); // 802156D4
  if (crb(c,2)) { goto L_802156E0; } // 802156D8
  c->r[3]=c->r[3]+0x00000020u; // 802156DC
L_802156E0:;
  c->r[5]=R32(c->r[3]+0x00000000u); // 802156E0
  c->r[0]=rotl(c->r[29],3)&0xFFFFFFF8u; // 802156E4
  c->r[4]=R32(c->r[3]+0x00000004u); // 802156E8
  c->r[3]=c->r[27]+c->r[0]; // 802156EC
  W32(c->r[31]+0x0000001Cu,c->r[4]); // 802156F0
  c->r[3]=c->r[3]+0x000004C0u; // 802156F4
  c->r[4]=c->r[31]+0x00000018u; // 802156F8
  W32(c->r[31]+0x00000018u,c->r[5]); // 802156FC
  c->lr=0x80215704u; f_80053568(c); // 80215700
L_80215704:;
  c->r[29]=c->r[29]+0x00000001u; // 80215704
L_80215708:;
  cmps(c,0,(int32_t)c->r[29],8); // 80215708
  if (crb(c,0)) { IRQCHK(c); goto L_80215660; } // 8021570C
  c->r[0]=R32(c->r[27]+0x00000614u); // 80215710
  c->r[25]=0u+0x00000000u; // 80215714
  cmps(c,0,(int32_t)c->r[0],0); // 80215718
  if (!crb(c,2)) { goto L_80215724; } // 8021571C
  c->r[25]=0u+0x00000008u; // 80215720
L_80215724:;
  cmps(c,0,(int32_t)c->r[0],1); // 80215724
  if (!crb(c,2)) { goto L_80215730; } // 80215728
  c->r[25]=0u+0x00000007u; // 8021572C
L_80215730:;
  cmps(c,0,(int32_t)c->r[0],2); // 80215730
  if (!crb(c,2)) { goto L_8021573C; } // 80215734
  c->r[25]=0u+0x00000005u; // 80215738
L_8021573C:;
  cmps(c,0,(int32_t)c->r[0],3); // 8021573C
  if (!crb(c,2)) { goto L_80215748; } // 80215740
  c->r[25]=0u+0x00000002u; // 80215744
L_80215748:;
  c->r[26]=0u+0x00000000u; // 80215748
  goto L_802157C0; // 8021574C
L_80215750:;
  c->r[5]=R32(c->r[27]+0x00000614u); // 80215750
  c->r[28]=0u+0x806A0000u; // 80215754
  c->r[28]=c->r[28]+0xFFFF8510u; // 80215758
  c->r[3]=c->r[31]+0x00000130u; // 8021575C
  c->r[4]=c->r[28]+0x00000371u; // 80215760
  c->r[5]=c->r[5]+0x00000001u; // 80215764
  c->r[6]=c->r[26]+0x00000001u; // 80215768
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8021576C
  c->lr=0x80215774u; f_803B1FC8(c); // 80215770
  c->r[0]=rotl(c->r[26],3)&0xFFFFFFF8u; // 80215774
  c->r[3]=c->r[27]+c->r[0]; // 80215778
  c->r[3]=c->r[3]+0x000004C0u; // 8021577C
  c->lr=0x80215784u; f_8007ECBC(c); // 80215780
  c->r[5]=c->r[31]+0x00000130u; // 80215784
  c->r[4]=0u+0x00000000u; // 80215788
  c->lr=0x80215790u; f_8015E4B8(c); // 8021578C
  c->r[3]=c->r[31]+0x000000CCu; // 80215790
  c->r[4]=c->r[28]+0x00000383u; // 80215794
  c->r[5]=c->r[26]+0x00000001u; // 80215798
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8021579C
  c->lr=0x802157A4u; f_803B1FC8(c); // 802157A0
  c->r[3]=c->r[27]+0x00000548u; // 802157A4
  c->lr=0x802157ACu; f_8007ECBC(c); // 802157A8
  c->r[5]=c->r[31]+0x000000CCu; // 802157AC
  c->r[6]=c->r[31]+0x00000130u; // 802157B0
  c->r[4]=0u+0x00000000u; // 802157B4
  c->lr=0x802157BCu; f_8015E698(c); // 802157B8
  c->r[26]=c->r[26]+0x00000001u; // 802157BC
L_802157C0:;
  cmps(c,0,(int32_t)c->r[26],(int32_t)c->r[25]); // 802157C0
  if (crb(c,0)) { IRQCHK(c); goto L_80215750; } // 802157C4
  c->r[3]=R32(c->r[27]+0x000003E8u); // 802157C8
  c->r[4]=0u+0x00000002u; // 802157CC
  c->r[12]=R32(c->r[3]+0x00000138u); // 802157D0
  c->r[12]=R32(c->r[12]+0x00000008u); // 802157D4
  c->ctr=c->r[12]; // 802157D8
  if (true) { c->lr=0x802157E0u; dispatch(c,c->ctr); } // 802157DC
  goto L_80215810; // 802157E0
L_802157E4:;
  c->r[3]=R32(c->r[27]+0x000003E8u); // 802157E4
  c->r[4]=0u+0x00000001u; // 802157E8
  c->r[12]=R32(c->r[3]+0x00000138u); // 802157EC
  c->r[12]=R32(c->r[12]+0x00000008u); // 802157F0
  c->ctr=c->r[12]; // 802157F4
  if (true) { c->lr=0x802157FCu; dispatch(c,c->ctr); } // 802157F8
  goto L_80215810; // 802157FC
L_80215800:;
  c->r[3]=c->r[27]|c->r[27]; // 80215800
  c->lr=0x80215808u; f_80214830(c); // 80215804
  c->r[0]=0u+0x00000000u; // 80215808
  W32(c->r[27]+0x000005F8u,c->r[0]); // 8021580C
L_80215810:;
  c->r[10]=c->r[31]|c->r[31]; // 80215810
  c->r[11]=c->r[10]+0x000002C0u; // 80215814
  {uint32_t ea=c->r[10]+0x000002C8u; psq_load(c,31,ea,0,0);} // 80215818
  {uint32_t ea=c->r[31]+0x000002C0u; c->f[31]=RF64(ea);} // 8021581C
  c->lr=0x80215824u; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80215820
  c->r[10]=R32(c->r[1]+0x00000000u); // 80215824
  c->r[0]=R32(c->r[10]+0x00000004u); // 80215828
  c->r[1]=c->r[10]|c->r[10]; // 8021582C
  c->lr=c->r[0]; // 80215830
  return; // 80215834
}

// fn_80215838
void f_80215838(Ctx* __restrict c) {
  trace_call(0x80215838u);
  return; // 80215838
}

// fn_8021583C
void f_8021583C(Ctx* __restrict c) {
  trace_call(0x8021583Cu);
  {uint32_t ea=c->r[1]+0xFFFFFD10u; W32(ea,c->r[1]); c->r[1]=ea;} // 8021583C
  c->r[0]=c->lr; // 80215840
  W32(c->r[1]+0x000002F4u,c->r[0]); // 80215844
  c->r[11]=c->r[1]+0x000002E0u; // 80215848
  {uint32_t ea=c->r[1]+0x000002E0u; WF64(ea,c->f[31]);} // 8021584C
  {uint32_t ea=c->r[1]+0x000002E8u; psq_store(c,31,ea,0,0);} // 80215850
  c->lr=0x80215858u; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80215854
  c->r[31]=c->r[1]|c->r[1]; // 80215858
  c->r[0]=R32(c->r[4]+0x0000000Cu); // 8021585C
  c->r[28]=c->r[3]|c->r[3]; // 80215860
  c->r[29]=c->r[4]|c->r[4]; // 80215864
  cmps(c,0,(int32_t)c->r[0],0); // 80215868
  if (crb(c,2)) { goto L_80215924; } // 8021586C
  c->r[3]=c->r[3]+0x00000548u; // 80215870
  c->lr=0x80215878u; f_8007ECBC(c); // 80215874
  c->lr=0x8021587Cu; f_800E71D4(c); // 80215878
  c->lr=0x80215880u; f_802EA628(c); // 8021587C
  cmps(c,0,(int32_t)c->r[3],0); // 80215880
  if (crb(c,2)) { goto L_802163FC; } // 80215884
  c->r[3]=c->r[28]|c->r[28]; // 80215888
  c->lr=0x80215890u; f_80214BB8(c); // 8021588C
  c->r[25]=0u+0x00000000u; // 80215890
  goto L_802158B4; // 80215894
L_80215898:;
  c->r[0]=rotl(c->r[25],3)&0xFFFFFFF8u; // 80215898
  c->r[3]=c->r[28]+c->r[0]; // 8021589C
  c->r[3]=c->r[3]+0x000004A0u; // 802158A0
  c->lr=0x802158A8u; f_8007ECBC(c); // 802158A4
  c->r[0]=0u+0x00000001u; // 802158A8
  W8(c->r[3]+0x00000415u,c->r[0]); // 802158AC
  c->r[25]=c->r[25]+0x00000001u; // 802158B0
L_802158B4:;
  cmps(c,0,(int32_t)c->r[25],4); // 802158B4
  if (crb(c,0)) { IRQCHK(c); goto L_80215898; } // 802158B8
  {uint32_t ea=c->r[2]+0xFFFFDE6Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 802158BC
  c->r[3]=c->r[31]+0x00000034u; // 802158C0
  {uint32_t ea=c->r[2]+0xFFFFDE70u; c->f[2]=c->ps1[2]=RF32(ea);} // 802158C4
  {uint32_t ea=c->r[2]+0xFFFFDE74u; c->f[3]=c->ps1[3]=RF32(ea);} // 802158C8
  c->lr=0x802158D0u; f_8005FD70(c); // 802158CC
  c->r[26]=c->r[3]|c->r[3]; // 802158D0
  c->lr=0x802158D8u; f_8033FE4C(c); // 802158D4
  c->lr=0x802158DCu; f_8007FF5C(c); // 802158D8
  {uint32_t ea=c->r[2]+0xFFFFDCE8u; c->f[2]=c->ps1[2]=RF32(ea);} // 802158DC
  c->r[4]=c->r[26]|c->r[26]; // 802158E0
  {uint32_t ea=c->r[2]+0xFFFFDCF0u; c->f[1]=c->ps1[1]=RF32(ea);} // 802158E4
  c->r[5]=0u+0x00000007u; // 802158E8
  c->f[3]=c->f[2]; // 802158EC
  c->lr=0x802158F4u; f_803676B8(c); // 802158F0
  c->r[3]=c->r[28]+0x00000548u; // 802158F4
  c->lr=0x802158FCu; f_8007ECBC(c); // 802158F8
  c->r[26]=0u+0x806A0000u; // 802158FC
  c->r[26]=c->r[26]+0xFFFF8510u; // 80215900
  c->r[4]=c->r[26]+0x000003F3u; // 80215904
  c->lr=0x8021590Cu; f_8015DFE8(c); // 80215908
  c->r[3]=c->r[28]+0x00000548u; // 8021590C
  c->lr=0x80215914u; f_8007ECBC(c); // 80215910
  c->r[4]=c->r[26]+0x000002FEu; // 80215914
  c->lr=0x8021591Cu; f_8015DFE8(c); // 80215918
  goto L_802163FC; // 8021591C
  goto L_802163FC; // 80215920
L_80215924:;
  c->r[0]=R32(c->r[3]+0x00000600u); // 80215924
  cmps(c,0,(int32_t)c->r[0],1); // 80215928
  if (!crb(c,0)) { goto L_80215A70; } // 8021592C
  c->r[0]=0u+0x0000000Fu; // 80215930
  c->r[4]=(uint32_t)(int32_t)(int16_t)c->r[0]; // 80215934
  c->lr=0x8021593Cu; f_80210E90(c); // 80215938
  cmps(c,0,(int32_t)c->r[3],0); // 8021593C
  if (crb(c,2)) { goto L_80215AA4; } // 80215940
  c->r[4]=R32(c->r[28]+0x000003DCu); // 80215944
  c->r[3]=c->r[28]|c->r[28]; // 80215948
  c->lr=0x80215950u; f_80211128(c); // 8021594C
  c->r[0]=0u+0x00000003u; // 80215950
  W32(c->r[28]+0x000005F8u,c->r[0]); // 80215954
  c->r[3]=c->r[28]+0x00000548u; // 80215958
  c->lr=0x80215960u; f_8007ECBC(c); // 8021595C
  c->r[26]=0u+0x806A0000u; // 80215960
  c->r[26]=c->r[26]+0xFFFF8510u; // 80215964
  c->r[4]=c->r[26]+0x000003F3u; // 80215968
  c->lr=0x80215970u; f_8015DED4(c); // 8021596C
  c->r[3]=c->r[28]+0x00000548u; // 80215970
  c->lr=0x80215978u; f_8007ECBC(c); // 80215974
  c->r[4]=c->r[26]+0x000002FEu; // 80215978
  c->lr=0x80215980u; f_8015DED4(c); // 8021597C
  c->r[3]=c->r[28]+0x00000548u; // 80215980
  c->lr=0x80215988u; f_8007ECBC(c); // 80215984
  c->r[4]=0u+0x00000001u; // 80215988
  c->r[3]=c->r[3]+0x000000FCu; // 8021598C
  c->lr=0x80215994u; f_802E6678(c); // 80215990
  c->r[25]=0u+0x00000000u; // 80215994
  goto L_802159E0; // 80215998
L_8021599C:;
  c->r[0]=rotl(c->r[25],3)&0xFFFFFFF8u; // 8021599C
  c->r[3]=c->r[28]+c->r[0]; // 802159A0
  c->r[26]=c->r[3]+0x000004C0u; // 802159A4
  c->r[3]=c->r[26]|c->r[26]; // 802159A8
  c->lr=0x802159B0u; f_8007ECBC(c); // 802159AC
  c->r[4]=0u+0x00000000u; // 802159B0
  c->r[3]=c->r[3]+0x000000FCu; // 802159B4
  c->lr=0x802159BCu; f_802E6678(c); // 802159B8
  c->r[3]=c->r[26]|c->r[26]; // 802159BC
  c->lr=0x802159C4u; f_8007ECBC(c); // 802159C0
  c->r[0]=0u+0x00000000u; // 802159C4
  W8(c->r[3]+0x00000415u,c->r[0]); // 802159C8
  c->r[3]=c->r[26]|c->r[26]; // 802159CC
  c->lr=0x802159D4u; f_8007ECBC(c); // 802159D0
  c->r[4]=0u+0x00000000u; // 802159D4
  c->lr=0x802159DCu; f_8015DFE8(c); // 802159D8
  c->r[25]=c->r[25]+0x00000001u; // 802159DC
L_802159E0:;
  cmps(c,0,(int32_t)c->r[25],8); // 802159E0
  if (crb(c,0)) { IRQCHK(c); goto L_8021599C; } // 802159E4
  c->r[25]=0u+0x00000000u; // 802159E8
  goto L_80215A44; // 802159EC
L_802159F0:;
  c->r[0]=R32(c->r[28]+0x00000614u); // 802159F0
  cmps(c,0,(int32_t)c->r[25],(int32_t)c->r[0]); // 802159F4
  if (crb(c,2)) { goto L_80215A40; } // 802159F8
  c->r[0]=rotl(c->r[25],2)&0xFFFFFFFCu; // 802159FC
  c->r[3]=c->r[28]+c->r[0]; // 80215A00
  c->r[0]=R32(c->r[3]+0x00000644u); // 80215A04
  cmps(c,0,(int32_t)c->r[0],0); // 80215A08
  if (crb(c,2)) { goto L_80215A40; } // 80215A0C
  c->r[0]=rotl(c->r[25],3)&0xFFFFFFF8u; // 80215A10
  c->r[3]=c->r[28]+c->r[0]; // 80215A14
  c->r[26]=c->r[3]+0x000004A0u; // 80215A18
  c->r[3]=c->r[26]|c->r[26]; // 80215A1C
  c->lr=0x80215A24u; f_8007ECBC(c); // 80215A20
  c->r[4]=0u+0x00000001u; // 80215A24
  c->r[3]=c->r[3]+0x000000FCu; // 80215A28
  c->lr=0x80215A30u; f_802E6678(c); // 80215A2C
  c->r[3]=c->r[26]|c->r[26]; // 80215A30
  c->lr=0x80215A38u; f_8007ECBC(c); // 80215A34
  c->r[4]=0u+0x00000000u; // 80215A38
  c->lr=0x80215A40u; f_8015DED4(c); // 80215A3C
L_80215A40:;
  c->r[25]=c->r[25]+0x00000001u; // 80215A40
L_80215A44:;
  cmps(c,0,(int32_t)c->r[25],4); // 80215A44
  if (crb(c,0)) { IRQCHK(c); goto L_802159F0; } // 80215A48
  c->r[3]=R32(c->r[28]+0x000003E8u); // 80215A4C
  c->r[4]=0u+0x00000003u; // 80215A50
  c->r[12]=R32(c->r[3]+0x00000138u); // 80215A54
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 80215A58
  c->ctr=c->r[12]; // 80215A5C
  if (true) { c->lr=0x80215A64u; dispatch(c,c->ctr); } // 80215A60
  c->r[0]=0u+0x00000001u; // 80215A64
  W32(c->r[29]+0x0000000Cu,c->r[0]); // 80215A68
  goto L_802163FC; // 80215A6C
L_80215A70:;
  c->r[0]=0u+0x0000000Fu; // 80215A70
  c->r[4]=(uint32_t)(int32_t)(int16_t)c->r[0]; // 80215A74
  c->lr=0x80215A7Cu; f_80210E90(c); // 80215A78
  cmps(c,0,(int32_t)c->r[3],0); // 80215A7C
  if (crb(c,2)) { goto L_80215AA4; } // 80215A80
  c->r[0]=R8(c->r[28]+0x00000610u); // 80215A84
  cmps(c,0,(int32_t)c->r[0],0); // 80215A88
  if (!crb(c,2)) { goto L_80215AA4; } // 80215A8C
  c->r[4]=R32(c->r[28]+0x000003DCu); // 80215A90
  c->r[3]=c->r[28]|c->r[28]; // 80215A94
  c->lr=0x80215A9Cu; f_80211128(c); // 80215A98
  c->r[0]=0u+0x00000001u; // 80215A9C
  W8(c->r[28]+0x00000641u,c->r[0]); // 80215AA0
L_80215AA4:;
  c->r[0]=R32(c->r[28]+0x000005F8u); // 80215AA4
  cmps(c,0,(int32_t)c->r[0],0); // 80215AA8
  if (!crb(c,2)) { goto L_80215B88; } // 80215AAC
  c->r[30]=0u+0x00000000u; // 80215AB0
  goto L_80215B60; // 80215AB4
L_80215AB8:;
  c->r[0]=R32(c->r[28]+0x00000614u); // 80215AB8
  cmps(c,0,(int32_t)c->r[0],3); // 80215ABC
  if (!crb(c,2)) { goto L_80215B20; } // 80215AC0
  c->r[4]=R32(c->r[28]+0x00000540u); // 80215AC4
  cmps(c,0,(int32_t)c->r[4],0); // 80215AC8
  if (crb(c,2)) { goto L_80215AD4; } // 80215ACC
  c->r[4]=c->r[4]+0x00000020u; // 80215AD0
L_80215AD4:;
  c->r[5]=R32(c->r[4]+0x00000000u); // 80215AD4
  c->r[3]=c->r[28]+0x000004C0u; // 80215AD8
  c->r[0]=R32(c->r[4]+0x00000004u); // 80215ADC
  c->r[4]=c->r[31]+0x00000020u; // 80215AE0
  W32(c->r[31]+0x00000024u,c->r[0]); // 80215AE4
  W32(c->r[31]+0x00000020u,c->r[5]); // 80215AE8
  c->lr=0x80215AF0u; f_80053568(c); // 80215AEC
  c->r[4]=R32(c->r[28]+0x00000544u); // 80215AF0
  cmps(c,0,(int32_t)c->r[4],0); // 80215AF4
  if (crb(c,2)) { goto L_80215B00; } // 80215AF8
  c->r[4]=c->r[4]+0x00000020u; // 80215AFC
L_80215B00:;
  c->r[5]=R32(c->r[4]+0x00000000u); // 80215B00
  c->r[3]=c->r[28]+0x000004C8u; // 80215B04
  c->r[0]=R32(c->r[4]+0x00000004u); // 80215B08
  c->r[4]=c->r[31]+0x00000018u; // 80215B0C
  W32(c->r[31]+0x0000001Cu,c->r[0]); // 80215B10
  W32(c->r[31]+0x00000018u,c->r[5]); // 80215B14
  c->lr=0x80215B1Cu; f_80053568(c); // 80215B18
  goto L_80215B5C; // 80215B1C
L_80215B20:;
  c->r[0]=rotl(c->r[30],2)&0xFFFFFFFCu; // 80215B20
  c->r[3]=c->r[28]+c->r[0]; // 80215B24
  c->r[3]=R32(c->r[3]+0x00000520u); // 80215B28
  cmps(c,0,(int32_t)c->r[3],0); // 80215B2C
  if (crb(c,2)) { goto L_80215B38; } // 80215B30
  c->r[3]=c->r[3]+0x00000020u; // 80215B34
L_80215B38:;
  c->r[5]=R32(c->r[3]+0x00000000u); // 80215B38
  c->r[0]=rotl(c->r[30],3)&0xFFFFFFF8u; // 80215B3C
  c->r[4]=R32(c->r[3]+0x00000004u); // 80215B40
  c->r[3]=c->r[28]+c->r[0]; // 80215B44
  W32(c->r[31]+0x00000014u,c->r[4]); // 80215B48
  c->r[3]=c->r[3]+0x000004C0u; // 80215B4C
  c->r[4]=c->r[31]+0x00000010u; // 80215B50
  W32(c->r[31]+0x00000010u,c->r[5]); // 80215B54
  c->lr=0x80215B5Cu; f_80053568(c); // 80215B58
L_80215B5C:;
  c->r[30]=c->r[30]+0x00000001u; // 80215B5C
L_80215B60:;
  cmps(c,0,(int32_t)c->r[30],8); // 80215B60
  if (crb(c,0)) { IRQCHK(c); goto L_80215AB8; } // 80215B64
  c->r[3]=c->r[28]+0x00000548u; // 80215B68
  c->lr=0x80215B70u; f_8007ECBC(c); // 80215B6C
  c->lr=0x80215B74u; f_800E71D4(c); // 80215B70
  c->lr=0x80215B78u; f_802EA628(c); // 80215B74
  cmps(c,0,(int32_t)c->r[3],0); // 80215B78
  if (crb(c,2)) { goto L_80215B88; } // 80215B7C
  c->r[0]=0u+0x00000001u; // 80215B80
  W32(c->r[28]+0x000005F8u,c->r[0]); // 80215B84
L_80215B88:;
  c->r[0]=R32(c->r[28]+0x000005F8u); // 80215B88
  cmpu(c,0,c->r[0],0x00000001u); // 80215B8C
  if (!crb(c,2)) { goto L_80215EB8; } // 80215B90
  c->r[3]=c->r[28]+0x00000548u; // 80215B94
  c->lr=0x80215B9Cu; f_8007ECBC(c); // 80215B98
  c->r[4]=0u+0x00000000u; // 80215B9C
  c->r[3]=c->r[3]+0x000000FCu; // 80215BA0
  c->lr=0x80215BA8u; f_802E6678(c); // 80215BA4
  c->r[30]=0u+0x00000000u; // 80215BA8
  goto L_80215E24; // 80215BAC
L_80215BB0:;
  c->r[0]=R32(c->r[28]+0x00000614u); // 80215BB0
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80215BB4
  c->r[3]=c->r[28]+c->r[0]; // 80215BB8
  c->r[0]=R32(c->r[3]+0x00000644u); // 80215BBC
  cmps(c,0,(int32_t)c->r[30],(int32_t)c->r[0]); // 80215BC0
  if (!crb(c,0)) { goto L_80215DE4; } // 80215BC4
  c->r[26]=0u+0x806A0000u; // 80215BC8
  c->r[3]=c->r[31]+0x000001B0u; // 80215BCC
  c->r[26]=c->r[26]+0xFFFF8510u; // 80215BD0
  c->r[5]=c->r[30]+0x00000001u; // 80215BD4
  c->r[4]=c->r[26]+0x00000361u; // 80215BD8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80215BDC
  c->lr=0x80215BE4u; f_803B1FC8(c); // 80215BE0
  c->r[3]=c->r[28]+0x00000548u; // 80215BE4
  c->lr=0x80215BECu; f_8007ECBC(c); // 80215BE8
  c->r[3]=c->r[3]+0x000000FCu; // 80215BEC
  c->r[4]=c->r[31]+0x000001B0u; // 80215BF0
  c->lr=0x80215BF8u; f_802E6F14(c); // 80215BF4
  cmps(c,0,(int32_t)c->r[3],0); // 80215BF8
  if (crb(c,2)) { goto L_80215CE8; } // 80215BFC
  c->r[0]=rotl(c->r[30],3)&0xFFFFFFF8u; // 80215C00
  c->r[3]=c->r[28]+c->r[0]; // 80215C04
  c->r[25]=c->r[3]+0x000004C0u; // 80215C08
  c->r[3]=c->r[25]|c->r[25]; // 80215C0C
  c->lr=0x80215C14u; f_8007ECBC(c); // 80215C10
  c->r[4]=0u+0x00000001u; // 80215C14
  c->r[3]=c->r[3]+0x000000FCu; // 80215C18
  c->lr=0x80215C20u; f_802E6678(c); // 80215C1C
  c->r[3]=c->r[25]|c->r[25]; // 80215C20
  c->lr=0x80215C28u; f_8007ECBC(c); // 80215C24
  c->r[0]=0u+0x00000001u; // 80215C28
  W8(c->r[3]+0x00000415u,c->r[0]); // 80215C2C
  c->r[3]=c->r[25]|c->r[25]; // 80215C30
  c->lr=0x80215C38u; f_8007ECBC(c); // 80215C34
  c->r[0]=0u+0x00000000u; // 80215C38
  W8(c->r[3]+0x00000416u,c->r[0]); // 80215C3C
  c->r[3]=c->r[28]+0x00000548u; // 80215C40
  c->lr=0x80215C48u; f_8007ECBC(c); // 80215C44
  c->r[3]=c->r[3]+0x000000FCu; // 80215C48
  c->r[4]=c->r[31]+0x000001B0u; // 80215C4C
  c->lr=0x80215C54u; f_802E6F14(c); // 80215C50
  c->r[27]=c->r[3]|c->r[3]; // 80215C54
  c->r[3]=c->r[25]|c->r[25]; // 80215C58
  c->lr=0x80215C60u; f_8007ECBC(c); // 80215C5C
  c->r[12]=R32(c->r[3]+0x0000001Cu); // 80215C60
  c->r[4]=c->r[27]|c->r[27]; // 80215C64
  c->r[12]=R32(c->r[12]+0x00000020u); // 80215C68
  c->ctr=c->r[12]; // 80215C6C
  if (true) { c->lr=0x80215C74u; dispatch(c,c->ctr); } // 80215C70
  c->r[5]=0u+0x00000005u; // 80215C74
  c->r[3]=c->r[31]+0x000001B0u; // 80215C78
  c->r[0]=divw((int32_t)c->r[30],(int32_t)c->r[5]); // 80215C7C
  c->r[4]=c->r[26]+0x00000322u; // 80215C80
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)c->r[5]); // 80215C84
  c->r[5]=c->r[30]-c->r[0]; // 80215C88
  c->r[5]=c->r[5]+0x00000001u; // 80215C8C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80215C90
  c->lr=0x80215C98u; f_803B1FC8(c); // 80215C94
  c->lr=0x80215C9Cu; f_803B220C(c); // 80215C98
  c->r[3]=c->r[3]^0x80000000u; // 80215C9C
  c->r[0]=0u+0x43300000u; // 80215CA0
  W32(c->r[31]+0x000002B4u,c->r[3]); // 80215CA4
  c->r[3]=c->r[25]|c->r[25]; // 80215CA8
  {uint32_t ea=c->r[2]+0xFFFFDE80u; c->f[3]=RF64(ea);} // 80215CAC
  W32(c->r[31]+0x000002B0u,c->r[0]); // 80215CB0
  {uint32_t ea=c->r[2]+0xFFFFDE78u; c->f[2]=c->ps1[2]=RF32(ea);} // 80215CB4
  {uint32_t ea=c->r[31]+0x000002B0u; c->f[0]=RF64(ea);} // 80215CB8
  {uint32_t ea=c->r[2]+0xFFFFDE7Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 80215CBC
  c->f[3]=c->ps1[3]=S(c->f[0]-c->f[3]); // 80215CC0
  {uint32_t ea=c->r[2]+0xFFFFDD48u; c->f[0]=c->ps1[0]=RF32(ea);} // 80215CC4
  c->f[2]=c->ps1[2]=S(c->f[3]/c->f[2]); // 80215CC8
  c->f[31]=c->ps1[31]=S(std::fma(c->f[1],c->f[2],c->f[0])); // 80215CCC
  c->lr=0x80215CD4u; f_8007ECBC(c); // 80215CD0
  c->f[1]=c->f[31]; // 80215CD4
  {uint32_t ea=c->r[2]+0xFFFFDCF0u; c->f[2]=c->ps1[2]=RF32(ea);} // 80215CD8
  c->r[4]=c->r[31]+0x000001B0u; // 80215CDC
  c->r[5]=0u+0x00000001u; // 80215CE0
  c->lr=0x80215CE8u; f_8015DD64(c); // 80215CE4
L_80215CE8:;
  c->r[0]=R32(c->r[28]+0x00000614u); // 80215CE8
  cmps(c,0,(int32_t)c->r[0],3); // 80215CEC
  if (!crb(c,2)) { goto L_80215D6C; } // 80215CF0
  c->r[5]=R32(c->r[28]+0x00000618u); // 80215CF4
  c->r[27]=0u+0x806A0000u; // 80215CF8
  c->r[27]=c->r[27]+0xFFFF8510u; // 80215CFC
  c->r[3]=c->r[31]+0x000001B0u; // 80215D00
  c->r[4]=c->r[27]+0x00000203u; // 80215D04
  c->r[5]=c->r[5]+0x00000007u; // 80215D08
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80215D0C
  c->lr=0x80215D14u; f_803B1FC8(c); // 80215D10
  c->r[0]=rotl(c->r[30],3)&0xFFFFFFF8u; // 80215D14
  c->r[3]=c->r[28]+c->r[0]; // 80215D18
  c->r[25]=c->r[3]+0x000004C0u; // 80215D1C
  c->r[3]=c->r[25]|c->r[25]; // 80215D20
  c->lr=0x80215D28u; f_8007ECBC(c); // 80215D24
  c->r[4]=c->r[31]+0x000001B0u; // 80215D28
  c->r[5]=0u+0x00000000u; // 80215D2C
  c->r[3]=c->r[3]+0x000000FCu; // 80215D30
  c->lr=0x80215D38u; f_802E6904(c); // 80215D34
  c->r[5]=R32(c->r[28]+0x00000618u); // 80215D38
  c->r[3]=c->r[31]+0x000001B0u; // 80215D3C
  c->r[4]=c->r[27]+0x00000214u; // 80215D40
  c->r[5]=c->r[5]+0x00000007u; // 80215D44
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80215D48
  c->lr=0x80215D50u; f_803B1FC8(c); // 80215D4C
  c->r[3]=c->r[25]|c->r[25]; // 80215D50
  c->lr=0x80215D58u; f_8007ECBC(c); // 80215D54
  c->r[4]=c->r[31]+0x000001B0u; // 80215D58
  c->r[5]=0u+0x00000001u; // 80215D5C
  c->r[3]=c->r[3]+0x000000FCu; // 80215D60
  c->lr=0x80215D68u; f_802E6904(c); // 80215D64
  goto L_80215E20; // 80215D68
L_80215D6C:;
  c->r[5]=R32(c->r[28]+0x00000618u); // 80215D6C
  c->r[27]=0u+0x806A0000u; // 80215D70
  c->r[27]=c->r[27]+0xFFFF8510u; // 80215D74
  c->r[3]=c->r[31]+0x000001B0u; // 80215D78
  c->r[4]=c->r[27]+0x00000203u; // 80215D7C
  c->r[5]=c->r[5]+0x00000001u; // 80215D80
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80215D84
  c->lr=0x80215D8Cu; f_803B1FC8(c); // 80215D88
  c->r[0]=rotl(c->r[30],3)&0xFFFFFFF8u; // 80215D8C
  c->r[3]=c->r[28]+c->r[0]; // 80215D90
  c->r[25]=c->r[3]+0x000004C0u; // 80215D94
  c->r[3]=c->r[25]|c->r[25]; // 80215D98
  c->lr=0x80215DA0u; f_8007ECBC(c); // 80215D9C
  c->r[4]=c->r[31]+0x000001B0u; // 80215DA0
  c->r[5]=0u+0x00000000u; // 80215DA4
  c->r[3]=c->r[3]+0x000000FCu; // 80215DA8
  c->lr=0x80215DB0u; f_802E6904(c); // 80215DAC
  c->r[5]=R32(c->r[28]+0x00000618u); // 80215DB0
  c->r[3]=c->r[31]+0x000001B0u; // 80215DB4
  c->r[4]=c->r[27]+0x00000214u; // 80215DB8
  c->r[5]=c->r[5]+0x00000001u; // 80215DBC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80215DC0
  c->lr=0x80215DC8u; f_803B1FC8(c); // 80215DC4
  c->r[3]=c->r[25]|c->r[25]; // 80215DC8
  c->lr=0x80215DD0u; f_8007ECBC(c); // 80215DCC
  c->r[4]=c->r[31]+0x000001B0u; // 80215DD0
  c->r[5]=0u+0x00000001u; // 80215DD4
  c->r[3]=c->r[3]+0x000000FCu; // 80215DD8
  c->lr=0x80215DE0u; f_802E6904(c); // 80215DDC
  goto L_80215E20; // 80215DE0
L_80215DE4:;
  c->r[0]=rotl(c->r[30],3)&0xFFFFFFF8u; // 80215DE4
  c->r[3]=c->r[28]+c->r[0]; // 80215DE8
  c->r[25]=c->r[3]+0x000004C0u; // 80215DEC
  c->r[3]=c->r[25]|c->r[25]; // 80215DF0
  c->lr=0x80215DF8u; f_8007ECBC(c); // 80215DF4
  c->r[4]=0u+0x00000000u; // 80215DF8
  c->r[3]=c->r[3]+0x000000FCu; // 80215DFC
  c->lr=0x80215E04u; f_802E6678(c); // 80215E00
  c->r[3]=c->r[25]|c->r[25]; // 80215E04
  c->lr=0x80215E0Cu; f_8007ECBC(c); // 80215E08
  c->r[27]=0u+0x00000000u; // 80215E0C
  W8(c->r[3]+0x00000415u,c->r[27]); // 80215E10
  c->r[3]=c->r[25]|c->r[25]; // 80215E14
  c->lr=0x80215E1Cu; f_8007ECBC(c); // 80215E18
  W8(c->r[3]+0x00000416u,c->r[27]); // 80215E1C
L_80215E20:;
  c->r[30]=c->r[30]+0x00000001u; // 80215E20
L_80215E24:;
  cmps(c,0,(int32_t)c->r[30],8); // 80215E24
  if (crb(c,0)) { IRQCHK(c); goto L_80215BB0; } // 80215E28
  c->r[25]=0u+0x00000000u; // 80215E2C
  goto L_80215E70; // 80215E30
L_80215E34:;
  c->r[4]=R32(c->r[28]+0x00000614u); // 80215E34
  c->r[3]=c->r[28]|c->r[28]; // 80215E38
  c->r[5]=c->r[25]|c->r[25]; // 80215E3C
  c->lr=0x80215E44u; f_80213620(c); // 80215E40
  c->r[4]=R32(c->r[28]+0x000003E8u); // 80215E44
  c->r[0]=rotl(c->r[3],0)&0x00000002u; cr0(c,c->r[0]); // 80215E48
  c->r[0]=0u+0x00000000u; // 80215E4C
  c->r[3]=c->r[4]+c->r[25]; // 80215E50
  W8(c->r[3]+0x0000001Cu,c->r[0]); // 80215E54
  if (crb(c,2)) { goto L_80215E6C; } // 80215E58
  c->r[0]=R32(c->r[28]+0x000003E8u); // 80215E5C
  c->r[4]=0u+0x00000001u; // 80215E60
  c->r[3]=c->r[0]+c->r[25]; // 80215E64
  W8(c->r[3]+0x0000001Cu,c->r[4]); // 80215E68
L_80215E6C:;
  c->r[25]=c->r[25]+0x00000001u; // 80215E6C
L_80215E70:;
  cmps(c,0,(int32_t)c->r[25],8); // 80215E70
  if (crb(c,0)) { IRQCHK(c); goto L_80215E34; } // 80215E74
  c->r[3]=c->r[28]+0x00000550u; // 80215E78
  c->lr=0x80215E80u; f_800B14B8(c); // 80215E7C
  c->r[0]=0u+0xFFFFFFFFu; // 80215E80
  W32(c->r[28]+0x00000618u,c->r[0]); // 80215E84
  c->r[0]=0u+0x00000000u; // 80215E88
  c->r[3]=c->r[28]|c->r[28]; // 80215E8C
  W32(c->r[29]+0x0000000Cu,c->r[0]); // 80215E90
  c->lr=0x80215E98u; f_80213220(c); // 80215E94
  c->r[3]=R32(c->r[28]+0x000003E8u); // 80215E98
  c->r[4]=0u+0x00000000u; // 80215E9C
  c->r[12]=R32(c->r[3]+0x00000138u); // 80215EA0
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 80215EA4
  c->ctr=c->r[12]; // 80215EA8
  if (true) { c->lr=0x80215EB0u; dispatch(c,c->ctr); } // 80215EAC
  c->r[0]=0u+0x00000002u; // 80215EB0
  W32(c->r[28]+0x000005F8u,c->r[0]); // 80215EB4
L_80215EB8:;
  c->r[0]=R32(c->r[28]+0x000005F8u); // 80215EB8
  cmpu(c,0,c->r[0],0x00000002u); // 80215EBC
  if (!crb(c,2)) { goto L_8021638C; } // 80215EC0
  c->r[3]=c->r[28]+0x00000550u; // 80215EC4
  c->lr=0x80215ECCu; f_800655F4(c); // 80215EC8
  cmps(c,0,(int32_t)c->r[3],0); // 80215ECC
  if (!crb(c,2)) { goto L_80216214; } // 80215ED0
  c->r[0]=R32(c->r[28]+0x00000600u); // 80215ED4
  cmps(c,0,(int32_t)c->r[0],1); // 80215ED8
  if (crb(c,1)) { goto L_80215F1C; } // 80215EDC
  c->r[25]=0u+0x00000000u; // 80215EE0
  goto L_80215F10; // 80215EE4
L_80215EE8:;
  c->r[0]=rotl(c->r[25],3)&0xFFFFFFF8u; // 80215EE8
  c->r[3]=c->r[28]+c->r[0]; // 80215EEC
  c->r[3]=c->r[3]+0x000004C0u; // 80215EF0
  c->lr=0x80215EF8u; f_8007ECBC(c); // 80215EF4
  c->r[0]=R8(c->r[3]+0x00000416u); // 80215EF8
  cmps(c,0,(int32_t)c->r[0],0); // 80215EFC
  if (crb(c,2)) { goto L_80215F0C; } // 80215F00
  W32(c->r[28]+0x00000618u,c->r[25]); // 80215F04
  goto L_80215F58; // 80215F08
L_80215F0C:;
  c->r[25]=c->r[25]+0x00000001u; // 80215F0C
L_80215F10:;
  cmps(c,0,(int32_t)c->r[25],8); // 80215F10
  if (crb(c,0)) { IRQCHK(c); goto L_80215EE8; } // 80215F14
  goto L_80215F58; // 80215F18
L_80215F1C:;
  c->r[0]=R32(c->r[28]+0x00000608u); // 80215F1C
  W32(c->r[28]+0x00000618u,c->r[0]); // 80215F20
  c->r[0]=rotl(c->r[0],3)&0xFFFFFFF8u; // 80215F24
  c->r[3]=c->r[28]+c->r[0]; // 80215F28
  c->r[3]=c->r[3]+0x000004C0u; // 80215F2C
  c->lr=0x80215F34u; f_8007ECBC(c); // 80215F30
  c->r[0]=0u+0x00000001u; // 80215F34
  W8(c->r[3]+0x00000416u,c->r[0]); // 80215F38
  c->r[0]=R32(c->r[28]+0x00000618u); // 80215F3C
  c->r[0]=rotl(c->r[0],3)&0xFFFFFFF8u; // 80215F40
  c->r[3]=c->r[28]+c->r[0]; // 80215F44
  c->r[3]=c->r[3]+0x000004C0u; // 80215F48
  c->lr=0x80215F50u; f_8007ECBC(c); // 80215F4C
  c->r[0]=0u+0x00000000u; // 80215F50
  W8(c->r[3]+0x00000415u,c->r[0]); // 80215F54
L_80215F58:;
  c->r[0]=R32(c->r[28]+0x00000618u); // 80215F58
  cmps(c,0,(int32_t)c->r[0],-1); // 80215F5C
  if (crb(c,2)) { goto L_802161F8; } // 80215F60
  c->r[4]=R32(c->r[28]+0x000003DCu); // 80215F64
  c->r[3]=c->r[28]|c->r[28]; // 80215F68
  c->lr=0x80215F70u; f_80211064(c); // 80215F6C
  c->r[0]=R32(c->r[28]+0x00000618u); // 80215F70
  c->r[3]=c->r[28]+0x00000550u; // 80215F74
  c->r[0]=rotl(c->r[0],3)&0xFFFFFFF8u; // 80215F78
  c->r[4]=c->r[28]+c->r[0]; // 80215F7C
  c->r[4]=c->r[4]+0x000004C0u; // 80215F80
  c->lr=0x80215F88u; f_80053568(c); // 80215F84
  c->r[25]=0u+0x00000000u; // 80215F88
  goto L_80215FAC; // 80215F8C
L_80215F90:;
  c->r[0]=rotl(c->r[25],3)&0xFFFFFFF8u; // 80215F90
  c->r[3]=c->r[28]+c->r[0]; // 80215F94
  c->r[3]=c->r[3]+0x000004C0u; // 80215F98
  c->lr=0x80215FA0u; f_8007ECBC(c); // 80215F9C
  c->r[0]=0u+0x00000000u; // 80215FA0
  W8(c->r[3]+0x00000415u,c->r[0]); // 80215FA4
  c->r[25]=c->r[25]+0x00000001u; // 80215FA8
L_80215FAC:;
  cmps(c,0,(int32_t)c->r[25],8); // 80215FAC
  if (crb(c,0)) { IRQCHK(c); goto L_80215F90; } // 80215FB0
  c->r[0]=R32(c->r[28]+0x00000614u); // 80215FB4
  cmps(c,0,(int32_t)c->r[0],3); // 80215FB8
  if (!crb(c,2)) { goto L_8021602C; } // 80215FBC
  c->r[5]=R32(c->r[28]+0x00000618u); // 80215FC0
  c->r[29]=0u+0x806A0000u; // 80215FC4
  c->r[29]=c->r[29]+0xFFFF8510u; // 80215FC8
  c->r[3]=c->r[31]+0x000000B0u; // 80215FCC
  c->r[4]=c->r[29]+0x00000203u; // 80215FD0
  c->r[5]=c->r[5]+0x00000007u; // 80215FD4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80215FD8
  c->lr=0x80215FE0u; f_803B1FC8(c); // 80215FDC
  c->r[3]=c->r[28]+0x00000550u; // 80215FE0
  c->lr=0x80215FE8u; f_8007ECBC(c); // 80215FE4
  c->r[4]=c->r[31]+0x000000B0u; // 80215FE8
  c->r[5]=0u+0x00000001u; // 80215FEC
  c->r[3]=c->r[3]+0x000000FCu; // 80215FF0
  c->lr=0x80215FF8u; f_802E6904(c); // 80215FF4
  c->r[5]=R32(c->r[28]+0x00000618u); // 80215FF8
  c->r[3]=c->r[31]+0x000000B0u; // 80215FFC
  c->r[4]=c->r[29]+0x00000214u; // 80216000
  c->r[5]=c->r[5]+0x00000007u; // 80216004
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80216008
  c->lr=0x80216010u; f_803B1FC8(c); // 8021600C
  c->r[3]=c->r[28]+0x00000550u; // 80216010
  c->lr=0x80216018u; f_8007ECBC(c); // 80216014
  c->r[4]=c->r[31]+0x000000B0u; // 80216018
  c->r[5]=0u+0x00000000u; // 8021601C
  c->r[3]=c->r[3]+0x000000FCu; // 80216020
  c->lr=0x80216028u; f_802E6904(c); // 80216024
  goto L_80216094; // 80216028
L_8021602C:;
  c->r[5]=R32(c->r[28]+0x00000618u); // 8021602C
  c->r[29]=0u+0x806A0000u; // 80216030
  c->r[29]=c->r[29]+0xFFFF8510u; // 80216034
  c->r[3]=c->r[31]+0x000000B0u; // 80216038
  c->r[4]=c->r[29]+0x00000203u; // 8021603C
  c->r[5]=c->r[5]+0x00000001u; // 80216040
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80216044
  c->lr=0x8021604Cu; f_803B1FC8(c); // 80216048
  c->r[3]=c->r[28]+0x00000550u; // 8021604C
  c->lr=0x80216054u; f_8007ECBC(c); // 80216050
  c->r[4]=c->r[31]+0x000000B0u; // 80216054
  c->r[5]=0u+0x00000001u; // 80216058
  c->r[3]=c->r[3]+0x000000FCu; // 8021605C
  c->lr=0x80216064u; f_802E6904(c); // 80216060
  c->r[5]=R32(c->r[28]+0x00000618u); // 80216064
  c->r[3]=c->r[31]+0x000000B0u; // 80216068
  c->r[4]=c->r[29]+0x00000214u; // 8021606C
  c->r[5]=c->r[5]+0x00000001u; // 80216070
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80216074
  c->lr=0x8021607Cu; f_803B1FC8(c); // 80216078
  c->r[3]=c->r[28]+0x00000550u; // 8021607C
  c->lr=0x80216084u; f_8007ECBC(c); // 80216080
  c->r[4]=c->r[31]+0x000000B0u; // 80216084
  c->r[5]=0u+0x00000000u; // 80216088
  c->r[3]=c->r[3]+0x000000FCu; // 8021608C
  c->lr=0x80216094u; f_802E6904(c); // 80216090
L_80216094:;
  c->r[3]=c->r[28]+0x00000550u; // 80216094
  c->lr=0x8021609Cu; f_8007ECBC(c); // 80216098
  c->r[4]=0u+0x806A0000u; // 8021609C
  {uint32_t ea=c->r[2]+0xFFFFDCE8u; c->f[1]=c->ps1[1]=RF32(ea);} // 802160A0
  c->r[4]=c->r[4]+0xFFFF8510u; // 802160A4
  {uint32_t ea=c->r[2]+0xFFFFDCF0u; c->f[2]=c->ps1[2]=RF32(ea);} // 802160A8
  c->r[4]=c->r[4]+0x000002FEu; // 802160AC
  c->r[5]=0u+0x00000001u; // 802160B0
  c->lr=0x802160B8u; f_8015DD64(c); // 802160B4
  c->r[25]=0u+0x00000000u; // 802160B8
  goto L_80216120; // 802160BC
L_802160C0:;
  c->r[0]=R32(c->r[28]+0x00000618u); // 802160C0
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[25]); // 802160C4
  if (crb(c,2)) { goto L_8021611C; } // 802160C8
  c->r[5]=0u+0x00000003u; // 802160CC
  c->r[4]=0u+0x806A0000u; // 802160D0
  c->r[0]=divw((int32_t)c->r[25],(int32_t)c->r[5]); // 802160D4
  c->r[3]=c->r[31]+0x000000B0u; // 802160D8
  c->r[4]=c->r[4]+0xFFFF8510u; // 802160DC
  c->r[4]=c->r[4]+0x0000036Bu; // 802160E0
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)c->r[5]); // 802160E4
  c->r[5]=c->r[25]-c->r[0]; // 802160E8
  c->r[5]=c->r[5]+0x00000001u; // 802160EC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 802160F0
  c->lr=0x802160F8u; f_803B1FC8(c); // 802160F4
  c->r[0]=rotl(c->r[25],3)&0xFFFFFFF8u; // 802160F8
  c->r[3]=c->r[28]+c->r[0]; // 802160FC
  c->r[3]=c->r[3]+0x000004C0u; // 80216100
  c->lr=0x80216108u; f_8007ECBC(c); // 80216104
  {uint32_t ea=c->r[2]+0xFFFFDCE8u; c->f[1]=c->ps1[1]=RF32(ea);} // 80216108
  c->r[4]=c->r[31]+0x000000B0u; // 8021610C
  {uint32_t ea=c->r[2]+0xFFFFDCF0u; c->f[2]=c->ps1[2]=RF32(ea);} // 80216110
  c->r[5]=0u+0x00000001u; // 80216114
  c->lr=0x8021611Cu; f_8015DD64(c); // 80216118
L_8021611C:;
  c->r[25]=c->r[25]+0x00000001u; // 8021611C
L_80216120:;
  c->r[0]=R32(c->r[28]+0x00000614u); // 80216120
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80216124
  c->r[3]=c->r[28]+c->r[0]; // 80216128
  c->r[0]=R32(c->r[3]+0x00000644u); // 8021612C
  cmps(c,0,(int32_t)c->r[25],(int32_t)c->r[0]); // 80216130
  if (crb(c,0)) { IRQCHK(c); goto L_802160C0; } // 80216134
  {uint32_t ea=c->r[2]+0xFFFFDE6Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 80216138
  c->r[3]=c->r[31]+0x00000028u; // 8021613C
  {uint32_t ea=c->r[2]+0xFFFFDE70u; c->f[2]=c->ps1[2]=RF32(ea);} // 80216140
  {uint32_t ea=c->r[2]+0xFFFFDE74u; c->f[3]=c->ps1[3]=RF32(ea);} // 80216144
  c->lr=0x8021614Cu; f_8005FD70(c); // 80216148
  c->r[29]=c->r[3]|c->r[3]; // 8021614C
  c->lr=0x80216154u; f_8033FE4C(c); // 80216150
  c->lr=0x80216158u; f_8007FF5C(c); // 80216154
  {uint32_t ea=c->r[2]+0xFFFFDCE8u; c->f[2]=c->ps1[2]=RF32(ea);} // 80216158
  c->r[4]=c->r[29]|c->r[29]; // 8021615C
  {uint32_t ea=c->r[2]+0xFFFFDCF0u; c->f[1]=c->ps1[1]=RF32(ea);} // 80216160
  c->r[5]=0u+0x00000007u; // 80216164
  c->f[3]=c->f[2]; // 80216168
  c->lr=0x80216170u; f_803676B8(c); // 8021616C
  c->lr=0x80216174u; f_8004DB5C(c); // 80216170
  c->r[5]=0u+0x806A0000u; // 80216174
  c->r[4]=c->r[3]|c->r[3]; // 80216178
  c->r[5]=c->r[5]+0xFFFF8510u; // 8021617C
  c->r[3]=c->r[31]+0x00000070u; // 80216180
  c->r[5]=c->r[5]+0x000003FCu; // 80216184
  c->r[6]=0u+0x00000001u; // 80216188
  c->lr=0x80216190u; f_80321B90(c); // 8021618C
  c->r[3]=c->r[28]+0x00000550u; // 80216190
  c->lr=0x80216198u; f_8007ECBC(c); // 80216194
  c->r[3]=c->r[3]+0x000001B8u; // 80216198
  c->r[4]=c->r[31]+0x00000070u; // 8021619C
  c->lr=0x802161A4u; f_80382F2C(c); // 802161A0
  c->r[12]=R32(c->r[31]+0x000000A8u); // 802161A4
  c->r[3]=c->r[31]+0x00000070u; // 802161A8
  c->r[12]=R32(c->r[12]+0x00000008u); // 802161AC
  c->ctr=c->r[12]; // 802161B0
  if (true) { c->lr=0x802161B8u; dispatch(c,c->ctr); } // 802161B4
  c->r[3]=R32(c->r[28]+0x000003E8u); // 802161B8
  c->r[5]=0u+0x00000000u; // 802161BC
  c->r[0]=0u+0x00000001u; // 802161C0
  c->r[4]=0u+0x00000002u; // 802161C4
  W32(c->r[3]+0x00000130u,c->r[5]); // 802161C8
  c->r[3]=R32(c->r[28]+0x000003E8u); // 802161CC
  W32(c->r[3]+0x00000134u,c->r[5]); // 802161D0
  c->r[3]=R32(c->r[28]+0x000003E8u); // 802161D4
  W32(c->r[3]+0x00000008u,c->r[5]); // 802161D8
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 802161DC
  c->r[3]=R32(c->r[28]+0x000003E8u); // 802161E0
  c->r[12]=R32(c->r[3]+0x00000138u); // 802161E4
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 802161E8
  c->ctr=c->r[12]; // 802161EC
  if (true) { c->lr=0x802161F4u; dispatch(c,c->ctr); } // 802161F0
  goto L_8021638C; // 802161F4
L_802161F8:;
  c->r[3]=R32(c->r[28]+0x000003E8u); // 802161F8
  c->r[4]=0u+0x00000001u; // 802161FC
  c->r[12]=R32(c->r[3]+0x00000138u); // 80216200
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 80216204
  c->ctr=c->r[12]; // 80216208
  if (true) { c->lr=0x80216210u; dispatch(c,c->ctr); } // 8021620C
  goto L_8021638C; // 80216210
L_80216214:;
  c->r[3]=R32(c->r[28]+0x000003E8u); // 80216214
  c->r[0]=R8(c->r[3]+0x00000010u); // 80216218
  cmps(c,0,(int32_t)c->r[0],0); // 8021621C
  if (crb(c,2)) { goto L_8021623C; } // 80216220
  c->r[12]=R32(c->r[3]+0x00000138u); // 80216224
  c->r[4]=0u+0x00000005u; // 80216228
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 8021622C
  c->ctr=c->r[12]; // 80216230
  if (true) { c->lr=0x80216238u; dispatch(c,c->ctr); } // 80216234
  goto L_8021638C; // 80216238
L_8021623C:;
  c->r[0]=R8(c->r[3]+0x00000011u); // 8021623C
  cmps(c,0,(int32_t)c->r[0],0); // 80216240
  if (crb(c,2)) { goto L_802162AC; } // 80216244
  c->r[26]=0u+0x00000000u; // 80216248
  goto L_8021627C; // 8021624C
L_80216250:;
  c->r[0]=rotl(c->r[26],3)&0xFFFFFFF8u; // 80216250
  c->r[3]=c->r[28]+c->r[0]; // 80216254
  c->r[25]=c->r[3]+0x000004C0u; // 80216258
  c->r[3]=c->r[25]|c->r[25]; // 8021625C
  c->lr=0x80216264u; f_8007ECBC(c); // 80216260
  c->r[4]=0u+0x00000000u; // 80216264
  c->lr=0x8021626Cu; f_8015DED4(c); // 80216268
  c->r[4]=c->r[25]|c->r[25]; // 8021626C
  c->r[3]=c->r[28]+0x00000518u; // 80216270
  c->lr=0x80216278u; f_80053568(c); // 80216274
  c->r[26]=c->r[26]+0x00000001u; // 80216278
L_8021627C:;
  c->r[0]=R32(c->r[28]+0x00000614u); // 8021627C
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80216280
  c->r[3]=c->r[28]+c->r[0]; // 80216284
  c->r[0]=R32(c->r[3]+0x00000644u); // 80216288
  cmps(c,0,(int32_t)c->r[26],(int32_t)c->r[0]); // 8021628C
  if (crb(c,0)) { IRQCHK(c); goto L_80216250; } // 80216290
  {uint32_t ea=c->r[2]+0xFFFFDCE8u; c->f[1]=c->ps1[1]=RF32(ea);} // 80216294
  c->r[3]=c->r[28]|c->r[28]; // 80216298
  c->lr=0x802162A0u; f_8021369C(c); // 8021629C
  c->r[0]=0u+0x00000003u; // 802162A0
  W32(c->r[28]+0x000005F8u,c->r[0]); // 802162A4
  goto L_8021638C; // 802162A8
L_802162AC:;
  c->r[3]=c->r[28]+0x00000548u; // 802162AC
  c->lr=0x802162B4u; f_8007ECBC(c); // 802162B0
  c->lr=0x802162B8u; f_800E71D4(c); // 802162B4
  c->lr=0x802162BCu; f_802EA628(c); // 802162B8
  cmps(c,0,(int32_t)c->r[3],0); // 802162BC
  if (crb(c,2)) { goto L_8021638C; } // 802162C0
  c->r[3]=c->r[28]+0x00000548u; // 802162C4
  c->lr=0x802162CCu; f_8007ECBC(c); // 802162C8
  c->r[4]=0u+0x00000000u; // 802162CC
  c->r[3]=c->r[3]+0x000000FCu; // 802162D0
  c->lr=0x802162D8u; f_802E6678(c); // 802162D4
  c->r[3]=R32(c->r[28]+0x000003E8u); // 802162D8
  c->r[0]=R8(c->r[3]+0x00000004u); // 802162DC
  cmps(c,0,(int32_t)c->r[0],0); // 802162E0
  if (crb(c,2)) { goto L_8021633C; } // 802162E4
  c->r[0]=R8(c->r[28]+0x00000010u); // 802162E8
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 802162EC
  c->r[3]=c->r[28]+c->r[0]; // 802162F0
  c->r[26]=R32(c->r[3]+0x00000014u); // 802162F4
  cmps(c,0,(int32_t)c->r[26],0); // 802162F8
  if (crb(c,2)) { goto L_80216324; } // 802162FC
  c->r[29]=0u+0x00000000u; // 80216300
  W32(c->r[31]+0x0000006Cu,c->r[1]); // 80216304
  W8(c->r[31]+0x0000000Cu,c->r[29]); // 80216308
  c->lr=0x80216310u; f_801AADA0(c); // 8021630C
  W32(c->r[26]+0x00000000u,c->r[3]); // 80216310
  c->r[0]=c->r[13]+0xFFFF8DA8u; // 80216314
  W32(c->r[26]+0x00000004u,c->r[0]); // 80216318
  W32(c->r[26]+0x00000008u,c->r[29]); // 8021631C
  W32(c->r[26]+0x0000000Cu,c->r[29]); // 80216320
L_80216324:;
  W32(c->r[28]+0x00000008u,c->r[26]); // 80216324
  c->r[0]=0u+0x00000000u; // 80216328
  W32(c->r[26]+0x00000008u,c->r[0]); // 8021632C
  c->r[0]=R32(c->r[28]+0x00000004u); // 80216330
  W32(c->r[28]+0x0000000Cu,c->r[0]); // 80216334
  goto L_8021638C; // 80216338
L_8021633C:;
  c->r[0]=R8(c->r[28]+0x00000010u); // 8021633C
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80216340
  c->r[3]=c->r[28]+c->r[0]; // 80216344
  c->r[26]=R32(c->r[3]+0x00000014u); // 80216348
  cmps(c,0,(int32_t)c->r[26],0); // 8021634C
  if (crb(c,2)) { goto L_80216378; } // 80216350
  c->r[29]=0u+0x00000000u; // 80216354
  W32(c->r[31]+0x00000054u,c->r[1]); // 80216358
  W8(c->r[31]+0x00000008u,c->r[29]); // 8021635C
  c->lr=0x80216364u; f_8017CD68(c); // 80216360
  W32(c->r[26]+0x00000000u,c->r[3]); // 80216364
  c->r[0]=c->r[13]+0xFFFF8B1Cu; // 80216368
  W32(c->r[26]+0x00000004u,c->r[0]); // 8021636C
  W32(c->r[26]+0x00000008u,c->r[29]); // 80216370
  W32(c->r[26]+0x0000000Cu,c->r[29]); // 80216374
L_80216378:;
  W32(c->r[28]+0x00000008u,c->r[26]); // 80216378
  c->r[0]=0u+0x00000000u; // 8021637C
  W32(c->r[26]+0x00000008u,c->r[0]); // 80216380
  c->r[0]=R32(c->r[28]+0x00000004u); // 80216384
  W32(c->r[28]+0x0000000Cu,c->r[0]); // 80216388
L_8021638C:;
  c->r[0]=R32(c->r[28]+0x000005F8u); // 8021638C
  cmpu(c,0,c->r[0],0x00000003u); // 80216390
  if (!crb(c,2)) { goto L_802163FC; } // 80216394
  c->r[3]=c->r[28]+0x00000518u; // 80216398
  c->lr=0x802163A0u; f_8007ECBC(c); // 8021639C
  c->lr=0x802163A4u; f_800E71D4(c); // 802163A0
  c->lr=0x802163A8u; f_802EA628(c); // 802163A4
  cmps(c,0,(int32_t)c->r[3],0); // 802163A8
  if (crb(c,2)) { goto L_802163FC; } // 802163AC
  c->r[25]=0u+0x00000000u; // 802163B0
  goto L_802163D4; // 802163B4
L_802163B8:;
  c->r[0]=rotl(c->r[25],3)&0xFFFFFFF8u; // 802163B8
  c->r[3]=c->r[28]+c->r[0]; // 802163BC
  c->r[3]=c->r[3]+0x000004C0u; // 802163C0
  c->lr=0x802163C8u; f_8007ECBC(c); // 802163C4
  c->r[4]=0u+0x00000000u; // 802163C8
  c->lr=0x802163D0u; f_8015DFE8(c); // 802163CC
  c->r[25]=c->r[25]+0x00000001u; // 802163D0
L_802163D4:;
  c->r[0]=R32(c->r[28]+0x00000614u); // 802163D4
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 802163D8
  c->r[3]=c->r[28]+c->r[0]; // 802163DC
  c->r[0]=R32(c->r[3]+0x00000644u); // 802163E0
  cmps(c,0,(int32_t)c->r[25],(int32_t)c->r[0]); // 802163E4
  if (crb(c,0)) { IRQCHK(c); goto L_802163B8; } // 802163E8
  c->r[3]=c->r[28]|c->r[28]; // 802163EC
  c->lr=0x802163F4u; f_80214830(c); // 802163F0
  c->r[0]=0u+0x00000001u; // 802163F4
  W32(c->r[28]+0x000005F8u,c->r[0]); // 802163F8
L_802163FC:;
  c->r[10]=c->r[31]|c->r[31]; // 802163FC
  c->r[11]=c->r[10]+0x000002E0u; // 80216400
  {uint32_t ea=c->r[10]+0x000002E8u; psq_load(c,31,ea,0,0);} // 80216404
  {uint32_t ea=c->r[31]+0x000002E0u; c->f[31]=RF64(ea);} // 80216408
  c->lr=0x80216410u; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8021640C
  c->r[10]=R32(c->r[1]+0x00000000u); // 80216410
  c->r[0]=R32(c->r[10]+0x00000004u); // 80216414
  c->r[1]=c->r[10]|c->r[10]; // 80216418
  c->lr=c->r[0]; // 8021641C
  return; // 80216420
}

// fn_80216424
void f_80216424(Ctx* __restrict c) {
  trace_call(0x80216424u);
  return; // 80216424
}

// fn_80216428
void f_80216428(Ctx* __restrict c) {
  trace_call(0x80216428u);
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80216428
  c->r[0]=c->lr; // 8021642C
  W32(c->r[1]+0x00000064u,c->r[0]); // 80216430
  c->r[11]=c->r[1]+0x00000060u; // 80216434
  c->lr=0x8021643Cu; { W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80216438
  c->r[5]=R32(c->r[3]+0x00000004u); // 8021643C
  c->r[28]=c->r[3]|c->r[3]; // 80216440
  c->r[29]=c->r[4]|c->r[4]; // 80216444
  cmps(c,0,(int32_t)c->r[5],0); // 80216448
  if (crb(c,2)) { goto L_80216458; } // 8021644C
  c->r[0]=R32(c->r[5]+0x00000008u); // 80216450
  goto L_8021645C; // 80216454
L_80216458:;
  c->r[0]=0u+0x00000000u; // 80216458
L_8021645C:;
  cmps(c,0,(int32_t)c->r[0],0); // 8021645C
  if (!crb(c,2)) { goto L_80216598; } // 80216460
  c->r[3]=c->r[3]+0x00000508u; // 80216464
  c->lr=0x8021646Cu; f_8007ECBC(c); // 80216468
  c->r[31]=c->r[3]|c->r[3]; // 8021646C
  c->r[3]=R32(c->r[28]+0x00000614u); // 80216470
  c->r[4]=R32(c->r[28]+0x00000618u); // 80216474
  c->r[5]=0u+0x00000000u; // 80216478
  c->lr=0x80216480u; f_8021097C(c); // 8021647C
  c->r[5]=c->r[3]|c->r[3]; // 80216480
  c->r[3]=c->r[31]|c->r[31]; // 80216484
  c->r[4]=0u+0x00000000u; // 80216488
  c->lr=0x80216490u; f_8015E088(c); // 8021648C
  c->r[3]=c->r[28]+0x00000510u; // 80216490
  c->lr=0x80216498u; f_8007ECBC(c); // 80216494
  c->r[31]=c->r[3]|c->r[3]; // 80216498
  c->r[3]=R32(c->r[28]+0x00000614u); // 8021649C
  c->r[4]=R32(c->r[28]+0x00000618u); // 802164A0
  c->r[5]=0u+0x00000000u; // 802164A4
  c->lr=0x802164ACu; f_80210BD0(c); // 802164A8
  c->r[5]=c->r[3]|c->r[3]; // 802164AC
  c->r[3]=c->r[31]|c->r[31]; // 802164B0
  c->r[4]=0u+0x00000000u; // 802164B4
  c->lr=0x802164BCu; f_8015E088(c); // 802164B8
  c->r[3]=c->r[28]+0x00000490u; // 802164BC
  c->lr=0x802164C4u; f_8007ECBC(c); // 802164C0
  c->r[31]=0u+0x806A0000u; // 802164C4
  c->r[31]=c->r[31]+0xFFFF8510u; // 802164C8
  c->r[4]=c->r[31]+0x00000304u; // 802164CC
  c->lr=0x802164D4u; f_8015DFE8(c); // 802164D0
  c->r[3]=c->r[28]+0x00000490u; // 802164D4
  c->lr=0x802164DCu; f_8007ECBC(c); // 802164D8
  {uint32_t ea=c->r[2]+0xFFFFDCE8u; c->f[1]=c->ps1[1]=RF32(ea);} // 802164DC
  c->r[4]=c->r[31]+0x00000304u; // 802164E0
  {uint32_t ea=c->r[2]+0xFFFFDCF0u; c->f[2]=c->ps1[2]=RF32(ea);} // 802164E4
  c->r[5]=0u+0x00000001u; // 802164E8
  c->lr=0x802164F0u; f_8015DD64(c); // 802164EC
  c->r[3]=c->r[28]+0x00000500u; // 802164F0
  c->lr=0x802164F8u; f_8007ECBC(c); // 802164F4
  c->r[4]=0u+0x00000001u; // 802164F8
  c->r[3]=c->r[3]+0x000000FCu; // 802164FC
  c->lr=0x80216504u; f_802E6678(c); // 80216500
  c->r[3]=c->r[28]+0x00000500u; // 80216504
  c->lr=0x8021650Cu; f_8007ECBC(c); // 80216508
  {uint32_t ea=c->r[2]+0xFFFFDCE8u; c->f[1]=c->ps1[1]=RF32(ea);} // 8021650C
  c->r[4]=c->r[31]+0x0000030Fu; // 80216510
  {uint32_t ea=c->r[2]+0xFFFFDCF0u; c->f[2]=c->ps1[2]=RF32(ea);} // 80216514
  c->r[5]=0u+0x00000001u; // 80216518
  c->lr=0x80216520u; f_8015DD64(c); // 8021651C
  c->r[3]=c->r[28]+0x00000500u; // 80216520
  c->lr=0x80216528u; f_8007ECBC(c); // 80216524
  c->r[4]=0u+0x00000001u; // 80216528
  c->lr=0x80216530u; f_8015E874(c); // 8021652C
  c->r[3]=c->r[28]+0x00000500u; // 80216530
  c->lr=0x80216538u; f_8007ECBC(c); // 80216534
  c->r[30]=c->r[3]|c->r[3]; // 80216538
  c->r[3]=R32(c->r[28]+0x00000614u); // 8021653C
  c->r[4]=R32(c->r[28]+0x00000618u); // 80216540
  c->r[5]=0u+0x00000000u; // 80216544
  c->lr=0x8021654Cu; f_8021097C(c); // 80216548
  c->r[6]=c->r[3]|c->r[3]; // 8021654C
  c->r[3]=c->r[30]|c->r[30]; // 80216550
  c->r[5]=c->r[31]+0x0000040Fu; // 80216554
  c->r[4]=0u+0x00000000u; // 80216558
  c->lr=0x80216560u; f_8015E2DC(c); // 8021655C
  c->r[3]=c->r[28]+0x00000500u; // 80216560
  c->lr=0x80216568u; f_8007ECBC(c); // 80216564
  c->r[30]=c->r[3]|c->r[3]; // 80216568
  c->r[3]=R32(c->r[28]+0x00000614u); // 8021656C
  c->r[4]=R32(c->r[28]+0x00000618u); // 80216570
  c->r[5]=0u+0x00000000u; // 80216574
  c->lr=0x8021657Cu; f_80210BD0(c); // 80216578
  c->r[6]=c->r[3]|c->r[3]; // 8021657C
  c->r[3]=c->r[30]|c->r[30]; // 80216580
  c->r[5]=c->r[31]+0x00000421u; // 80216584
  c->r[4]=0u+0x00000000u; // 80216588
  c->lr=0x80216590u; f_8015E2DC(c); // 8021658C
  c->r[0]=0u+0x00000000u; // 80216590
  W32(c->r[29]+0x0000000Cu,c->r[0]); // 80216594
L_80216598:;
  c->r[0]=R32(c->r[29]+0x0000000Cu); // 80216598
  cmps(c,0,(int32_t)c->r[0],0); // 8021659C
  if (!crb(c,2)) { goto L_80216648; } // 802165A0
  c->r[3]=c->r[28]+0x00000500u; // 802165A4
  c->lr=0x802165ACu; f_8007ECBC(c); // 802165A8
  c->lr=0x802165B0u; f_800E71D4(c); // 802165AC
  {uint32_t ea=c->r[2]+0xFFFFDE88u; c->f[1]=c->ps1[1]=RF32(ea);} // 802165B0
  c->lr=0x802165B8u; f_802EA5A4(c); // 802165B4
  cmps(c,0,(int32_t)c->r[3],0); // 802165B8
  if (crb(c,2)) { goto L_80216624; } // 802165BC
  {uint32_t ea=c->r[2]+0xFFFFDCE8u; c->f[1]=c->ps1[1]=RF32(ea);} // 802165C0
  c->r[31]=0u+0x806A0000u; // 802165C4
  c->r[31]=c->r[31]+0xFFFF8510u; // 802165C8
  c->r[3]=R32(c->r[13]+0xFFFFDA08u); // 802165CC
  c->f[2]=c->f[1]; // 802165D0
  c->r[4]=c->r[31]+0x000003BEu; // 802165D4
  c->lr=0x802165DCu; f_802E3098(c); // 802165D8
  c->lr=0x802165E0u; f_8004DB5C(c); // 802165DC
  c->r[4]=c->r[3]|c->r[3]; // 802165E0
  c->r[3]=c->r[1]+0x00000008u; // 802165E4
  c->r[5]=c->r[31]+0x000003C5u; // 802165E8
  c->r[6]=0u+0x00000001u; // 802165EC
  c->lr=0x802165F4u; f_80321B90(c); // 802165F0
  c->r[3]=c->r[28]+0x00000500u; // 802165F4
  c->lr=0x802165FCu; f_8007ECBC(c); // 802165F8
  c->r[3]=c->r[3]+0x000000FCu; // 802165FC
  c->r[4]=c->r[31]+0x000003D8u; // 80216600
  c->lr=0x80216608u; f_802E6F14(c); // 80216604
  c->r[4]=c->r[1]+0x00000008u; // 80216608
  c->lr=0x80216610u; f_80382F2C(c); // 8021660C
  c->r[12]=R32(c->r[1]+0x00000040u); // 80216610
  c->r[3]=c->r[1]+0x00000008u; // 80216614
  c->r[12]=R32(c->r[12]+0x00000008u); // 80216618
  c->ctr=c->r[12]; // 8021661C
  if (true) { c->lr=0x80216624u; dispatch(c,c->ctr); } // 80216620
L_80216624:;
  c->r[3]=c->r[28]+0x00000500u; // 80216624
  c->lr=0x8021662Cu; f_8007ECBC(c); // 80216628
  c->lr=0x80216630u; f_800E71D4(c); // 8021662C
  c->lr=0x80216634u; f_802EA628(c); // 80216630
  cmps(c,0,(int32_t)c->r[3],0); // 80216634
  if (crb(c,2)) { goto L_80216668; } // 80216638
  c->r[3]=c->r[28]|c->r[28]; // 8021663C
  c->lr=0x80216644u; f_802147A8(c); // 80216640
  goto L_80216668; // 80216644
L_80216648:;
  c->r[3]=c->r[28]+0x00000500u; // 80216648
  c->lr=0x80216650u; f_8007ECBC(c); // 8021664C
  c->lr=0x80216654u; f_800E71D4(c); // 80216650
  c->lr=0x80216658u; f_802EA628(c); // 80216654
  cmps(c,0,(int32_t)c->r[3],0); // 80216658
  if (crb(c,2)) { goto L_80216668; } // 8021665C
  c->r[3]=c->r[28]|c->r[28]; // 80216660
  c->lr=0x80216668u; f_802147A8(c); // 80216664
L_80216668:;
  c->r[11]=c->r[1]+0x00000060u; // 80216668
  c->lr=0x80216670u; { c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8021666C
  c->r[0]=R32(c->r[1]+0x00000064u); // 80216670
  c->lr=c->r[0]; // 80216674
  c->r[1]=c->r[1]+0x00000060u; // 80216678
  return; // 8021667C
}

// fn_80216680
void f_80216680(Ctx* __restrict c) {
  trace_call(0x80216680u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80216680
  c->r[0]=c->lr; // 80216684
  W32(c->r[1]+0x00000024u,c->r[0]); // 80216688
  c->r[11]=c->r[1]+0x00000020u; // 8021668C
  c->lr=0x80216694u; { W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80216690
  c->r[5]=R32(c->r[3]+0x00000004u); // 80216694
  c->r[29]=c->r[3]|c->r[3]; // 80216698
  c->r[30]=c->r[4]|c->r[4]; // 8021669C
  cmps(c,0,(int32_t)c->r[5],0); // 802166A0
  if (crb(c,2)) { goto L_802166B0; } // 802166A4
  c->r[0]=R32(c->r[5]+0x00000008u); // 802166A8
  goto L_802166B4; // 802166AC
L_802166B0:;
  c->r[0]=0u+0x00000000u; // 802166B0
L_802166B4:;
  cmps(c,0,(int32_t)c->r[0],0); // 802166B4
  if (!crb(c,2)) { goto L_802166F8; } // 802166B8
  c->r[3]=c->r[3]+0x00000490u; // 802166BC
  c->lr=0x802166C4u; f_8007ECBC(c); // 802166C0
  c->r[31]=0u+0x806A0000u; // 802166C4
  c->r[31]=c->r[31]+0xFFFF8510u; // 802166C8
  c->r[4]=c->r[31]+0x00000304u; // 802166CC
  c->lr=0x802166D4u; f_8015DFE8(c); // 802166D0
  c->r[3]=c->r[29]+0x00000490u; // 802166D4
  c->lr=0x802166DCu; f_8007ECBC(c); // 802166D8
  {uint32_t ea=c->r[2]+0xFFFFDCE8u; c->f[1]=c->ps1[1]=RF32(ea);} // 802166DC
  c->r[4]=c->r[31]+0x00000304u; // 802166E0
  {uint32_t ea=c->r[2]+0xFFFFDCF0u; c->f[2]=c->ps1[2]=RF32(ea);} // 802166E4
  c->r[5]=0u+0x00000001u; // 802166E8
  c->lr=0x802166F0u; f_8015DD64(c); // 802166EC
  c->r[0]=0u+0x00000000u; // 802166F0
  W32(c->r[30]+0x0000000Cu,c->r[0]); // 802166F4
L_802166F8:;
  c->r[0]=R32(c->r[30]+0x0000000Cu); // 802166F8
  cmps(c,0,(int32_t)c->r[0],0); // 802166FC
  if (!crb(c,2)) { goto L_80216724; } // 80216700
  c->r[3]=c->r[29]+0x00000490u; // 80216704
  c->lr=0x8021670Cu; f_8007ECBC(c); // 80216708
  c->lr=0x80216710u; f_800E71D4(c); // 8021670C
  c->lr=0x80216714u; f_802EA628(c); // 80216710
  cmps(c,0,(int32_t)c->r[3],0); // 80216714
  if (crb(c,2)) { goto L_80216724; } // 80216718
  c->r[3]=c->r[29]|c->r[29]; // 8021671C
  c->lr=0x80216724u; f_802148B8(c); // 80216720
L_80216724:;
  c->r[11]=c->r[1]+0x00000020u; // 80216724
  c->lr=0x8021672Cu; { c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80216728
  c->r[0]=R32(c->r[1]+0x00000024u); // 8021672C
  c->lr=c->r[0]; // 80216730
  c->r[1]=c->r[1]+0x00000020u; // 80216734
  return; // 80216738
}

// fn_8021673C
void f_8021673C(Ctx* __restrict c) {
  trace_call(0x8021673Cu);
  {uint32_t ea=c->r[1]+0xFFFFFD10u; W32(ea,c->r[1]); c->r[1]=ea;} // 8021673C
  c->r[0]=c->lr; // 80216740
  W32(c->r[1]+0x000002F4u,c->r[0]); // 80216744
  c->r[11]=c->r[1]+0x000002A0u; // 80216748
  {uint32_t ea=c->r[1]+0x000002E0u; WF64(ea,c->f[31]);} // 8021674C
  {uint32_t ea=c->r[1]+0x000002E8u; psq_store(c,31,ea,0,0);} // 80216750
  {uint32_t ea=c->r[1]+0x000002D0u; WF64(ea,c->f[30]);} // 80216754
  {uint32_t ea=c->r[1]+0x000002D8u; psq_store(c,30,ea,0,0);} // 80216758
  {uint32_t ea=c->r[1]+0x000002C0u; WF64(ea,c->f[29]);} // 8021675C
  {uint32_t ea=c->r[1]+0x000002C8u; psq_store(c,29,ea,0,0);} // 80216760
  {uint32_t ea=c->r[1]+0x000002B0u; WF64(ea,c->f[28]);} // 80216764
  {uint32_t ea=c->r[1]+0x000002B8u; psq_store(c,28,ea,0,0);} // 80216768
  {uint32_t ea=c->r[1]+0x000002A0u; WF64(ea,c->f[27]);} // 8021676C
  {uint32_t ea=c->r[1]+0x000002A8u; psq_store(c,27,ea,0,0);} // 80216770
  c->lr=0x80216778u; { W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80216774
  c->r[5]=R32(c->r[3]+0x00000004u); // 80216778
  c->r[30]=c->r[3]|c->r[3]; // 8021677C
  c->r[31]=c->r[4]|c->r[4]; // 80216780
  cmps(c,0,(int32_t)c->r[5],0); // 80216784
  if (crb(c,2)) { goto L_80216794; } // 80216788
  c->r[0]=R32(c->r[5]+0x00000008u); // 8021678C
  goto L_80216798; // 80216790
L_80216794:;
  c->r[0]=0u+0x00000000u; // 80216794
L_80216798:;
  cmps(c,0,(int32_t)c->r[0],0); // 80216798
  if (!crb(c,2)) { goto L_80216990; } // 8021679C
  c->r[3]=c->r[3]+0x00000500u; // 802167A0
  c->lr=0x802167A8u; f_8007ECBC(c); // 802167A4
  c->r[4]=0u+0x00000000u; // 802167A8
  c->r[3]=c->r[3]+0x000000FCu; // 802167AC
  c->lr=0x802167B4u; f_802E6678(c); // 802167B0
  c->r[3]=0u+0x806A0000u; // 802167B4
  {uint32_t ea=c->r[2]+0xFFFFDE80u; c->f[28]=RF64(ea);} // 802167B8
  {uint32_t ea=c->r[2]+0xFFFFDE78u; c->f[29]=c->ps1[29]=RF32(ea);} // 802167BC
  c->r[26]=c->r[3]+0xFFFF8510u; // 802167C0
  {uint32_t ea=c->r[2]+0xFFFFDE7Cu; c->f[30]=c->ps1[30]=RF32(ea);} // 802167C4
  c->r[23]=0u+0x00000000u; // 802167C8
  {uint32_t ea=c->r[2]+0xFFFFDD48u; c->f[31]=c->ps1[31]=RF32(ea);} // 802167CC
  c->r[29]=0u+0x00000000u; // 802167D0
  c->r[25]=0u+0x00000001u; // 802167D4
  c->r[27]=0u+0x00000005u; // 802167D8
  c->r[28]=0u+0x43300000u; // 802167DC
L_802167E0:;
  c->r[3]=c->r[30]+c->r[29]; // 802167E0
  c->r[24]=c->r[3]+0x00000508u; // 802167E4
  c->r[3]=c->r[24]|c->r[24]; // 802167E8
  c->lr=0x802167F0u; f_8007ECBC(c); // 802167EC
  c->r[4]=0u+0x00000001u; // 802167F0
  c->r[3]=c->r[3]+0x000000FCu; // 802167F4
  c->lr=0x802167FCu; f_802E6678(c); // 802167F8
  c->r[3]=c->r[24]|c->r[24]; // 802167FC
  c->lr=0x80216804u; f_8007ECBC(c); // 80216800
  cmps(c,0,(int32_t)c->r[23],0); // 80216804
  W8(c->r[3]+0x00000415u,c->r[25]); // 80216808
  if (!crb(c,2)) { goto L_80216854; } // 8021680C
  c->r[3]=c->r[1]+0x00000168u; // 80216810
  c->r[4]=c->r[26]+0x00000433u; // 80216814
  c->r[5]=c->r[26]+0x0000043Fu; // 80216818
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8021681C
  c->lr=0x80216824u; f_803B1FC8(c); // 80216820
  c->r[3]=c->r[24]|c->r[24]; // 80216824
  c->lr=0x8021682Cu; f_8007ECBC(c); // 80216828
  c->r[4]=c->r[26]+0x00000441u; // 8021682C
  c->r[5]=0u+0x00000001u; // 80216830
  c->r[3]=c->r[3]+0x000000FCu; // 80216834
  c->lr=0x8021683Cu; f_802E6904(c); // 80216838
  c->r[3]=c->r[24]|c->r[24]; // 8021683C
  c->lr=0x80216844u; f_8007ECBC(c); // 80216840
  c->r[4]=c->r[26]+0x00000453u; // 80216844
  c->r[5]=0u+0x00000000u; // 80216848
  c->r[3]=c->r[3]+0x000000FCu; // 8021684C
  c->lr=0x80216854u; f_802E6904(c); // 80216850
L_80216854:;
  cmps(c,0,(int32_t)c->r[23],1); // 80216854
  if (!crb(c,2)) { goto L_802168A0; } // 80216858
  c->r[3]=c->r[1]+0x00000168u; // 8021685C
  c->r[4]=c->r[26]+0x00000433u; // 80216860
  c->r[5]=c->r[26]+0x00000465u; // 80216864
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80216868
  c->lr=0x80216870u; f_803B1FC8(c); // 8021686C
  c->r[3]=c->r[24]|c->r[24]; // 80216870
  c->lr=0x80216878u; f_8007ECBC(c); // 80216874
  c->r[4]=c->r[26]+0x00000467u; // 80216878
  c->r[5]=0u+0x00000001u; // 8021687C
  c->r[3]=c->r[3]+0x000000FCu; // 80216880
  c->lr=0x80216888u; f_802E6904(c); // 80216884
  c->r[3]=c->r[24]|c->r[24]; // 80216888
  c->lr=0x80216890u; f_8007ECBC(c); // 8021688C
  c->r[4]=c->r[26]+0x00000479u; // 80216890
  c->r[5]=0u+0x00000000u; // 80216894
  c->r[3]=c->r[3]+0x000000FCu; // 80216898
  c->lr=0x802168A0u; f_802E6904(c); // 8021689C
L_802168A0:;
  c->r[3]=c->r[30]+0x00000500u; // 802168A0
  c->lr=0x802168A8u; f_8007ECBC(c); // 802168A4
  c->r[3]=c->r[3]+0x000000FCu; // 802168A8
  c->r[4]=c->r[1]+0x00000168u; // 802168AC
  c->lr=0x802168B4u; f_802E6F14(c); // 802168B0
  c->r[4]=c->r[3]|c->r[3]; // 802168B4
  c->r[3]=c->r[1]+0x00000020u; // 802168B8
  c->lr=0x802168C0u; f_80060878(c); // 802168BC
  c->r[3]=c->r[24]|c->r[24]; // 802168C0
  c->lr=0x802168C8u; f_8007ECBC(c); // 802168C4
  c->r[0]=divw((int32_t)c->r[23],(int32_t)c->r[27]); // 802168C8
  {uint32_t ea=c->r[1]+0x00000020u; c->f[0]=c->ps1[0]=RF32(ea);} // 802168CC
  {uint32_t ea=c->r[3]+0x000001C4u; WF32(ea,c->f[0]);} // 802168D0
  c->r[4]=c->r[26]+0x00000322u; // 802168D4
  {uint32_t ea=c->r[1]+0x00000024u; c->f[0]=c->ps1[0]=RF32(ea);} // 802168D8
  {uint32_t ea=c->r[3]+0x000001D4u; WF32(ea,c->f[0]);} // 802168DC
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)c->r[27]); // 802168E0
  {uint32_t ea=c->r[1]+0x00000028u; c->f[0]=c->ps1[0]=RF32(ea);} // 802168E4
  {uint32_t ea=c->r[3]+0x000001E4u; WF32(ea,c->f[0]);} // 802168E8
  c->r[3]=c->r[1]+0x00000168u; // 802168EC
  c->r[5]=c->r[23]-c->r[0]; // 802168F0
  c->r[5]=c->r[5]+0x00000001u; // 802168F4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 802168F8
  c->lr=0x80216900u; f_803B1FC8(c); // 802168FC
  c->lr=0x80216904u; f_803B220C(c); // 80216900
  c->r[0]=c->r[3]^0x80000000u; // 80216904
  W32(c->r[1]+0x0000026Cu,c->r[0]); // 80216908
  c->r[3]=c->r[24]|c->r[24]; // 8021690C
  W32(c->r[1]+0x00000268u,c->r[28]); // 80216910
  {uint32_t ea=c->r[1]+0x00000268u; c->f[0]=RF64(ea);} // 80216914
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[28]); // 80216918
  c->f[0]=c->ps1[0]=S(c->f[0]/c->f[29]); // 8021691C
  c->f[27]=c->ps1[27]=S(std::fma(c->f[30],c->f[0],c->f[31])); // 80216920
  c->lr=0x80216928u; f_8007ECBC(c); // 80216924
  c->f[1]=c->f[27]; // 80216928
  {uint32_t ea=c->r[2]+0xFFFFDCF0u; c->f[2]=c->ps1[2]=RF32(ea);} // 8021692C
  c->r[4]=c->r[1]+0x00000168u; // 80216930
  c->r[5]=0u+0x00000001u; // 80216934
  c->lr=0x8021693Cu; f_8015DD64(c); // 80216938
  c->r[23]=c->r[23]+0x00000001u; // 8021693C
  c->r[29]=c->r[29]+0x00000008u; // 80216940
  cmps(c,0,(int32_t)c->r[23],2); // 80216944
  if (crb(c,0)) { IRQCHK(c); goto L_802167E0; } // 80216948
  c->r[3]=c->r[30]+0x00000558u; // 8021694C
  c->lr=0x80216954u; f_800B14B8(c); // 80216950
  c->r[0]=0u+0xFFFFFFFFu; // 80216954
  W32(c->r[30]+0x0000061Cu,c->r[0]); // 80216958
  c->r[3]=c->r[30]|c->r[30]; // 8021695C
  c->lr=0x80216964u; f_80213220(c); // 80216960
  c->r[3]=R32(c->r[30]+0x000003E8u); // 80216964
  c->r[4]=0u+0x00000000u; // 80216968
  c->r[12]=R32(c->r[3]+0x00000138u); // 8021696C
  c->r[12]=R32(c->r[12]+0x00000010u); // 80216970
  c->ctr=c->r[12]; // 80216974
  if (true) { c->lr=0x8021697Cu; dispatch(c,c->ctr); } // 80216978
  c->r[3]=0u+0x00000001u; // 8021697C
  c->r[0]=0u+0x00000000u; // 80216980
  W8(c->r[30]+0x000005FCu,c->r[3]); // 80216984
  W8(c->r[30]+0x000005FDu,c->r[3]); // 80216988
  W8(c->r[30]+0x00000620u,c->r[0]); // 8021698C
L_80216990:;
  c->r[3]=c->r[30]+0x00000508u; // 80216990
  c->lr=0x80216998u; f_8007ECBC(c); // 80216994
  c->r[5]=R32(c->r[30]+0x000003E8u); // 80216998
  c->r[25]=c->r[3]|c->r[3]; // 8021699C
  c->r[3]=R32(c->r[30]+0x00000614u); // 802169A0
  c->r[4]=R32(c->r[30]+0x00000618u); // 802169A4
  c->r[5]=R32(c->r[5]+0x00000130u); // 802169A8
  c->lr=0x802169B0u; f_8021097C(c); // 802169AC
  c->r[5]=c->r[3]|c->r[3]; // 802169B0
  c->r[3]=c->r[25]|c->r[25]; // 802169B4
  c->r[4]=0u+0x00000000u; // 802169B8
  c->lr=0x802169C0u; f_8015E088(c); // 802169BC
  c->r[3]=c->r[30]+0x00000510u; // 802169C0
  c->lr=0x802169C8u; f_8007ECBC(c); // 802169C4
  c->r[5]=R32(c->r[30]+0x000003E8u); // 802169C8
  c->r[25]=c->r[3]|c->r[3]; // 802169CC
  c->r[3]=R32(c->r[30]+0x00000614u); // 802169D0
  c->r[4]=R32(c->r[30]+0x00000618u); // 802169D4
  c->r[5]=R32(c->r[5]+0x00000134u); // 802169D8
  c->lr=0x802169E0u; f_80210BD0(c); // 802169DC
  c->r[5]=c->r[3]|c->r[3]; // 802169E0
  c->r[3]=c->r[25]|c->r[25]; // 802169E4
  c->r[4]=0u+0x00000000u; // 802169E8
  c->lr=0x802169F0u; f_8015E088(c); // 802169EC
  c->r[0]=R32(c->r[31]+0x0000000Cu); // 802169F0
  cmps(c,0,(int32_t)c->r[0],1); // 802169F4
  if (!crb(c,2)) { goto L_80216AAC; } // 802169F8
  c->r[3]=c->r[30]+0x00000558u; // 802169FC
  c->lr=0x80216A04u; f_800655F4(c); // 80216A00
  cmps(c,0,(int32_t)c->r[3],0); // 80216A04
  if (!crb(c,2)) { goto L_80216A70; } // 80216A08
  c->r[3]=c->r[30]+0x00000500u; // 80216A0C
  c->lr=0x80216A14u; f_8007ECBC(c); // 80216A10
  c->lr=0x80216A18u; f_800E71D4(c); // 80216A14
  c->lr=0x80216A1Cu; f_802EA628(c); // 80216A18
  cmps(c,0,(int32_t)c->r[3],0); // 80216A1C
  if (crb(c,2)) { goto L_8021726C; } // 80216A20
  c->r[3]=c->r[30]+0x00000500u; // 80216A24
  c->lr=0x80216A2Cu; f_8007ECBC(c); // 80216A28
  c->r[28]=0u+0x806A0000u; // 80216A2C
  c->r[28]=c->r[28]+0xFFFF8510u; // 80216A30
  c->r[4]=c->r[28]+0x0000048Bu; // 80216A34
  c->lr=0x80216A3Cu; f_8015DFE8(c); // 80216A38
  c->r[3]=c->r[30]+0x00000500u; // 80216A3C
  c->lr=0x80216A44u; f_8007ECBC(c); // 80216A40
  {uint32_t ea=c->r[2]+0xFFFFDCE8u; c->f[1]=c->ps1[1]=RF32(ea);} // 80216A44
  c->r[4]=c->r[28]+0x000003B8u; // 80216A48
  c->lr=0x80216A50u; f_8015DE64(c); // 80216A4C
  c->r[3]=c->r[30]+0x00000490u; // 80216A50
  c->lr=0x80216A58u; f_8007ECBC(c); // 80216A54
  {uint32_t ea=c->r[2]+0xFFFFDCE8u; c->f[1]=c->ps1[1]=RF32(ea);} // 80216A58
  c->r[4]=c->r[28]+0x00000304u; // 80216A5C
  c->lr=0x80216A64u; f_8015DE64(c); // 80216A60
  c->r[0]=0u+0x00000002u; // 80216A64
  W32(c->r[31]+0x0000000Cu,c->r[0]); // 80216A68
  goto L_8021726C; // 80216A6C
L_80216A70:;
  c->r[3]=c->r[30]+0x00000558u; // 80216A70
  c->lr=0x80216A78u; f_8007ECBC(c); // 80216A74
  c->lr=0x80216A7Cu; f_800E71D4(c); // 80216A78
  c->lr=0x80216A80u; f_802EA628(c); // 80216A7C
  cmps(c,0,(int32_t)c->r[3],0); // 80216A80
  if (crb(c,2)) { goto L_80216A90; } // 80216A84
  c->r[3]=c->r[30]|c->r[30]; // 80216A88
  c->lr=0x80216A90u; f_802147A8(c); // 80216A8C
L_80216A90:;
  c->r[3]=R32(c->r[30]+0x000003E8u); // 80216A90
  c->r[4]=0u+0x00000004u; // 80216A94
  c->r[12]=R32(c->r[3]+0x00000138u); // 80216A98
  c->r[12]=R32(c->r[12]+0x00000010u); // 80216A9C
  c->ctr=c->r[12]; // 80216AA0
  if (true) { c->lr=0x80216AA8u; dispatch(c,c->ctr); } // 80216AA4
  goto L_8021726C; // 80216AA8
L_80216AAC:;
  cmps(c,0,(int32_t)c->r[0],2); // 80216AAC
  if (!crb(c,2)) { goto L_80216B60; } // 80216AB0
  c->r[3]=c->r[30]+0x00000500u; // 80216AB4
  c->lr=0x80216ABCu; f_8007ECBC(c); // 80216AB8
  c->lr=0x80216AC0u; f_800E71D4(c); // 80216ABC
  c->lr=0x80216AC4u; f_802EA628(c); // 80216AC0
  cmps(c,0,(int32_t)c->r[3],0); // 80216AC4
  if (crb(c,2)) { goto L_8021726C; } // 80216AC8
  c->r[0]=0u+0x00000003u; // 80216ACC
  W32(c->r[31]+0x0000000Cu,c->r[0]); // 80216AD0
  c->r[3]=c->r[30]+0x00000500u; // 80216AD4
  c->lr=0x80216ADCu; f_8007ECBC(c); // 80216AD8
  c->r[4]=0u+0x00000000u; // 80216ADC
  c->r[3]=c->r[3]+0x000000FCu; // 80216AE0
  c->lr=0x80216AE8u; f_802E6678(c); // 80216AE4
  c->r[3]=c->r[30]+0x00000500u; // 80216AE8
  c->lr=0x80216AF0u; f_8007ECBC(c); // 80216AEC
  c->r[4]=0u+0x806A0000u; // 80216AF0
  c->r[4]=c->r[4]+0xFFFF8510u; // 80216AF4
  c->r[4]=c->r[4]+0x000003B8u; // 80216AF8
  c->lr=0x80216B00u; f_8015DFE8(c); // 80216AFC
  c->r[23]=0u+0x00000000u; // 80216B00
  c->r[29]=0u+0x00000000u; // 80216B04
  goto L_80216B38; // 80216B08
L_80216B0C:;
  c->r[3]=c->r[30]+c->r[29]; // 80216B0C
  c->r[25]=c->r[3]+0x000004C0u; // 80216B10
  c->r[3]=c->r[25]|c->r[25]; // 80216B14
  c->lr=0x80216B1Cu; f_8007ECBC(c); // 80216B18
  c->r[4]=0u+0x00000000u; // 80216B1C
  c->lr=0x80216B24u; f_8015DED4(c); // 80216B20
  c->r[4]=c->r[25]|c->r[25]; // 80216B24
  c->r[3]=c->r[30]+0x00000518u; // 80216B28
  c->lr=0x80216B30u; f_80053568(c); // 80216B2C
  c->r[23]=c->r[23]+0x00000001u; // 80216B30
  c->r[29]=c->r[29]+0x00000008u; // 80216B34
L_80216B38:;
  c->r[0]=R32(c->r[30]+0x00000614u); // 80216B38
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80216B3C
  c->r[3]=c->r[30]+c->r[0]; // 80216B40
  c->r[0]=R32(c->r[3]+0x00000644u); // 80216B44
  cmps(c,0,(int32_t)c->r[23],(int32_t)c->r[0]); // 80216B48
  if (crb(c,0)) { IRQCHK(c); goto L_80216B0C; } // 80216B4C
  {uint32_t ea=c->r[2]+0xFFFFDCE8u; c->f[1]=c->ps1[1]=RF32(ea);} // 80216B50
  c->r[3]=c->r[30]|c->r[30]; // 80216B54
  c->lr=0x80216B5Cu; f_8021369C(c); // 80216B58
  goto L_8021726C; // 80216B5C
L_80216B60:;
  cmps(c,0,(int32_t)c->r[0],3); // 80216B60
  if (!crb(c,2)) { goto L_80216C3C; } // 80216B64
  c->r[3]=c->r[30]+0x00000518u; // 80216B68
  c->lr=0x80216B70u; f_8007ECBC(c); // 80216B6C
  c->lr=0x80216B74u; f_800E71D4(c); // 80216B70
  c->lr=0x80216B78u; f_802EA628(c); // 80216B74
  cmps(c,0,(int32_t)c->r[3],0); // 80216B78
  if (crb(c,2)) { goto L_8021726C; } // 80216B7C
  c->r[23]=0u+0x00000000u; // 80216B80
  c->r[29]=0u+0x00000000u; // 80216B84
  goto L_80216BA8; // 80216B88
L_80216B8C:;
  c->r[3]=c->r[30]+c->r[29]; // 80216B8C
  c->r[3]=c->r[3]+0x000004C0u; // 80216B90
  c->lr=0x80216B98u; f_8007ECBC(c); // 80216B94
  c->r[4]=0u+0x00000000u; // 80216B98
  c->lr=0x80216BA0u; f_8015DFE8(c); // 80216B9C
  c->r[23]=c->r[23]+0x00000001u; // 80216BA0
  c->r[29]=c->r[29]+0x00000008u; // 80216BA4
L_80216BA8:;
  c->r[0]=R32(c->r[30]+0x00000614u); // 80216BA8
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80216BAC
  c->r[3]=c->r[30]+c->r[0]; // 80216BB0
  c->r[0]=R32(c->r[3]+0x00000644u); // 80216BB4
  cmps(c,0,(int32_t)c->r[23],(int32_t)c->r[0]); // 80216BB8
  if (crb(c,0)) { IRQCHK(c); goto L_80216B8C; } // 80216BBC
  c->r[5]=R32(c->r[30]+0x00000618u); // 80216BC0
  c->r[28]=0u+0x806A0000u; // 80216BC4
  c->r[28]=c->r[28]+0xFFFF8510u; // 80216BC8
  c->r[3]=c->r[1]+0x00000068u; // 80216BCC
  c->r[4]=c->r[28]+0x00000203u; // 80216BD0
  c->r[5]=c->r[5]+0x00000001u; // 80216BD4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80216BD8
  c->lr=0x80216BE0u; f_803B1FC8(c); // 80216BDC
  c->r[3]=c->r[30]+0x00000550u; // 80216BE0
  c->lr=0x80216BE8u; f_8007ECBC(c); // 80216BE4
  c->r[4]=c->r[1]+0x00000068u; // 80216BE8
  c->r[5]=0u+0x00000000u; // 80216BEC
  c->r[3]=c->r[3]+0x000000FCu; // 80216BF0
  c->lr=0x80216BF8u; f_802E6904(c); // 80216BF4
  c->r[5]=R32(c->r[30]+0x00000618u); // 80216BF8
  c->r[3]=c->r[1]+0x00000068u; // 80216BFC
  c->r[4]=c->r[28]+0x00000214u; // 80216C00
  c->r[5]=c->r[5]+0x00000001u; // 80216C04
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80216C08
  c->lr=0x80216C10u; f_803B1FC8(c); // 80216C0C
  c->r[3]=c->r[30]+0x00000550u; // 80216C10
  c->lr=0x80216C18u; f_8007ECBC(c); // 80216C14
  c->r[4]=c->r[1]+0x00000068u; // 80216C18
  c->r[5]=0u+0x00000001u; // 80216C1C
  c->r[3]=c->r[3]+0x000000FCu; // 80216C20
  c->lr=0x80216C28u; f_802E6904(c); // 80216C24
  c->r[3]=c->r[30]|c->r[30]; // 80216C28
  c->lr=0x80216C30u; f_80214830(c); // 80216C2C
  c->r[0]=0u+0x00000001u; // 80216C30
  W32(c->r[30]+0x000005F8u,c->r[0]); // 80216C34
  goto L_8021726C; // 80216C38
L_80216C3C:;
  c->r[0]=R32(c->r[30]+0x00000600u); // 80216C3C
  cmps(c,0,(int32_t)c->r[0],2); // 80216C40
  if (!crb(c,0)) { goto L_80216D90; } // 80216C44
  c->r[3]=c->r[30]|c->r[30]; // 80216C48
  c->r[4]=0u+0x0000000Fu; // 80216C4C
  c->lr=0x80216C54u; f_80210E90(c); // 80216C50
  cmps(c,0,(int32_t)c->r[3],0); // 80216C54
  if (crb(c,2)) { goto L_80216DC4; } // 80216C58
  c->r[4]=R32(c->r[30]+0x000003DCu); // 80216C5C
  c->r[3]=c->r[30]|c->r[30]; // 80216C60
  c->lr=0x80216C68u; f_80211128(c); // 80216C64
  c->r[3]=c->r[30]+0x00000558u; // 80216C68
  c->lr=0x80216C70u; f_800655F4(c); // 80216C6C
  cmps(c,0,(int32_t)c->r[3],0); // 80216C70
  if (!crb(c,2)) { goto L_80216D2C; } // 80216C74
  c->r[3]=c->r[30]+0x00000500u; // 80216C78
  c->lr=0x80216C80u; f_8007ECBC(c); // 80216C7C
  c->r[4]=0u+0x00000001u; // 80216C80
  c->r[3]=c->r[3]+0x000000FCu; // 80216C84
  c->lr=0x80216C8Cu; f_802E6678(c); // 80216C88
  c->r[3]=c->r[30]+0x00000500u; // 80216C8C
  c->lr=0x80216C94u; f_8007ECBC(c); // 80216C90
  c->r[4]=0u+0x806A0000u; // 80216C94
  {uint32_t ea=c->r[2]+0xFFFFDCE8u; c->f[1]=c->ps1[1]=RF32(ea);} // 80216C98
  c->r[4]=c->r[4]+0xFFFF8510u; // 80216C9C
  c->r[4]=c->r[4]+0x0000048Bu; // 80216CA0
  c->lr=0x80216CA8u; f_8015DE64(c); // 80216CA4
  c->r[23]=0u+0x00000000u; // 80216CA8
  c->r[29]=0u+0x00000000u; // 80216CAC
  c->r[28]=0u+0x00000000u; // 80216CB0
L_80216CB4:;
  c->r[3]=c->r[30]+c->r[29]; // 80216CB4
  c->r[25]=c->r[3]+0x00000508u; // 80216CB8
  c->r[3]=c->r[25]|c->r[25]; // 80216CBC
  c->lr=0x80216CC4u; f_8007ECBC(c); // 80216CC0
  c->r[4]=0u+0x00000000u; // 80216CC4
  c->r[3]=c->r[3]+0x000000FCu; // 80216CC8
  c->lr=0x80216CD0u; f_802E6678(c); // 80216CCC
  c->r[3]=c->r[25]|c->r[25]; // 80216CD0
  c->lr=0x80216CD8u; f_8007ECBC(c); // 80216CD4
  W8(c->r[3]+0x00000415u,c->r[28]); // 80216CD8
  c->r[3]=c->r[25]|c->r[25]; // 80216CDC
  c->lr=0x80216CE4u; f_8007ECBC(c); // 80216CE0
  c->r[23]=c->r[23]+0x00000001u; // 80216CE4
  W8(c->r[3]+0x00000416u,c->r[28]); // 80216CE8
  cmps(c,0,(int32_t)c->r[23],2); // 80216CEC
  c->r[29]=c->r[29]+0x00000008u; // 80216CF0
  if (crb(c,0)) { IRQCHK(c); goto L_80216CB4; } // 80216CF4
  c->r[28]=0u+0x00000001u; // 80216CF8
  W32(c->r[31]+0x0000000Cu,c->r[28]); // 80216CFC
  c->r[4]=0u+0x00000003u; // 80216D00
  c->r[3]=R32(c->r[30]+0x000003E8u); // 80216D04
  c->r[12]=R32(c->r[3]+0x00000138u); // 80216D08
  c->r[12]=R32(c->r[12]+0x00000010u); // 80216D0C
  c->ctr=c->r[12]; // 80216D10
  if (true) { c->lr=0x80216D18u; dispatch(c,c->ctr); } // 80216D14
  c->r[3]=c->r[30]+0x00000558u; // 80216D18
  c->lr=0x80216D20u; f_800B14B8(c); // 80216D1C
  W8(c->r[30]+0x000005FCu,c->r[28]); // 80216D20
  W8(c->r[30]+0x000005FDu,c->r[28]); // 80216D24
  goto L_8021726C; // 80216D28
L_80216D2C:;
  c->r[23]=0u+0x00000000u; // 80216D2C
  c->r[29]=0u+0x00000000u; // 80216D30
  c->r[28]=0u+0x00000000u; // 80216D34
L_80216D38:;
  c->r[3]=c->r[30]+c->r[29]; // 80216D38
  c->r[25]=c->r[3]+0x00000508u; // 80216D3C
  c->r[3]=c->r[25]|c->r[25]; // 80216D40
  c->lr=0x80216D48u; f_8007ECBC(c); // 80216D44
  W8(c->r[3]+0x00000415u,c->r[28]); // 80216D48
  c->r[3]=c->r[25]|c->r[25]; // 80216D4C
  c->lr=0x80216D54u; f_8007ECBC(c); // 80216D50
  c->r[23]=c->r[23]+0x00000001u; // 80216D54
  W8(c->r[3]+0x00000416u,c->r[28]); // 80216D58
  cmps(c,0,(int32_t)c->r[23],2); // 80216D5C
  c->r[29]=c->r[29]+0x00000008u; // 80216D60
  if (crb(c,0)) { IRQCHK(c); goto L_80216D38; } // 80216D64
  c->r[3]=c->r[30]+0x00000558u; // 80216D68
  c->lr=0x80216D70u; f_8007ECBC(c); // 80216D6C
  c->r[4]=0u+0x00000000u; // 80216D70
  c->lr=0x80216D78u; f_8015DED4(c); // 80216D74
  c->r[3]=0u+0x00000000u; // 80216D78
  W8(c->r[30]+0x000005FCu,c->r[3]); // 80216D7C
  c->r[0]=0u+0x00000001u; // 80216D80
  W8(c->r[30]+0x000005FDu,c->r[3]); // 80216D84
  W32(c->r[31]+0x0000000Cu,c->r[0]); // 80216D88
  goto L_80216DC4; // 80216D8C
L_80216D90:;
  c->r[3]=c->r[30]|c->r[30]; // 80216D90
  c->r[4]=0u+0x0000000Fu; // 80216D94
  c->lr=0x80216D9Cu; f_80210E90(c); // 80216D98
  cmps(c,0,(int32_t)c->r[3],0); // 80216D9C
  if (crb(c,2)) { goto L_80216DC4; } // 80216DA0
  c->r[0]=R8(c->r[30]+0x00000610u); // 80216DA4
  cmps(c,0,(int32_t)c->r[0],0); // 80216DA8
  if (!crb(c,2)) { goto L_80216DC4; } // 80216DAC
  c->r[4]=R32(c->r[30]+0x000003DCu); // 80216DB0
  c->r[3]=c->r[30]|c->r[30]; // 80216DB4
  c->lr=0x80216DBCu; f_80211128(c); // 80216DB8
  c->r[0]=0u+0x00000001u; // 80216DBC
  W8(c->r[30]+0x00000641u,c->r[0]); // 80216DC0
L_80216DC4:;
  c->r[3]=c->r[30]+0x00000558u; // 80216DC4
  c->lr=0x80216DCCu; f_800655F4(c); // 80216DC8
  cmps(c,0,(int32_t)c->r[3],0); // 80216DCC
  if (!crb(c,2)) { goto L_802170C8; } // 80216DD0
  c->r[0]=R32(c->r[30]+0x00000600u); // 80216DD4
  cmps(c,0,(int32_t)c->r[0],2); // 80216DD8
  if (crb(c,1)) { goto L_80216E1C; } // 80216DDC
  c->r[23]=0u+0x00000000u; // 80216DE0
  c->r[29]=0u+0x00000000u; // 80216DE4
L_80216DE8:;
  c->r[3]=c->r[30]+c->r[29]; // 80216DE8
  c->r[3]=c->r[3]+0x00000508u; // 80216DEC
  c->lr=0x80216DF4u; f_8007ECBC(c); // 80216DF0
  c->r[0]=R8(c->r[3]+0x00000416u); // 80216DF4
  cmps(c,0,(int32_t)c->r[0],0); // 80216DF8
  if (crb(c,2)) { goto L_80216E08; } // 80216DFC
  W32(c->r[30]+0x0000061Cu,c->r[23]); // 80216E00
  goto L_80216E58; // 80216E04
L_80216E08:;
  c->r[23]=c->r[23]+0x00000001u; // 80216E08
  c->r[29]=c->r[29]+0x00000008u; // 80216E0C
  cmps(c,0,(int32_t)c->r[23],2); // 80216E10
  if (crb(c,0)) { IRQCHK(c); goto L_80216DE8; } // 80216E14
  goto L_80216E58; // 80216E18
L_80216E1C:;
  c->r[0]=R32(c->r[30]+0x0000060Cu); // 80216E1C
  W32(c->r[30]+0x0000061Cu,c->r[0]); // 80216E20
  c->r[0]=rotl(c->r[0],3)&0xFFFFFFF8u; // 80216E24
  c->r[3]=c->r[30]+c->r[0]; // 80216E28
  c->r[3]=c->r[3]+0x00000508u; // 80216E2C
  c->lr=0x80216E34u; f_8007ECBC(c); // 80216E30
  c->r[0]=0u+0x00000001u; // 80216E34
  W8(c->r[3]+0x00000416u,c->r[0]); // 80216E38
  c->r[0]=R32(c->r[30]+0x0000061Cu); // 80216E3C
  c->r[0]=rotl(c->r[0],3)&0xFFFFFFF8u; // 80216E40
  c->r[3]=c->r[30]+c->r[0]; // 80216E44
  c->r[3]=c->r[3]+0x00000508u; // 80216E48
  c->lr=0x80216E50u; f_8007ECBC(c); // 80216E4C
  c->r[0]=0u+0x00000000u; // 80216E50
  W8(c->r[3]+0x00000415u,c->r[0]); // 80216E54
L_80216E58:;
  c->r[0]=R32(c->r[30]+0x0000061Cu); // 80216E58
  cmps(c,0,(int32_t)c->r[0],-1); // 80216E5C
  if (crb(c,2)) { goto L_802170AC; } // 80216E60
  c->r[4]=R32(c->r[30]+0x000003DCu); // 80216E64
  c->r[3]=c->r[30]|c->r[30]; // 80216E68
  c->lr=0x80216E70u; f_80211064(c); // 80216E6C
  c->r[0]=R32(c->r[30]+0x0000061Cu); // 80216E70
  c->r[3]=c->r[30]+0x00000558u; // 80216E74
  c->r[0]=rotl(c->r[0],3)&0xFFFFFFF8u; // 80216E78
  c->r[4]=c->r[30]+c->r[0]; // 80216E7C
  c->r[4]=c->r[4]+0x00000508u; // 80216E80
  c->lr=0x80216E88u; f_80053568(c); // 80216E84
  c->r[3]=c->r[30]+0x00000558u; // 80216E88
  c->lr=0x80216E90u; f_8007ECBC(c); // 80216E8C
  c->r[28]=0u+0x806A0000u; // 80216E90
  {uint32_t ea=c->r[2]+0xFFFFDCE8u; c->f[1]=c->ps1[1]=RF32(ea);} // 80216E94
  c->r[28]=c->r[28]+0xFFFF8510u; // 80216E98
  {uint32_t ea=c->r[2]+0xFFFFDCF0u; c->f[2]=c->ps1[2]=RF32(ea);} // 80216E9C
  c->r[4]=c->r[28]+0x000002FEu; // 80216EA0
  c->r[5]=0u+0x00000001u; // 80216EA4
  c->lr=0x80216EACu; f_8015DD64(c); // 80216EA8
  c->r[0]=R32(c->r[30]+0x0000061Cu); // 80216EAC
  cmps(c,0,(int32_t)c->r[0],0); // 80216EB0
  if (!crb(c,2)) { goto L_80216F38; } // 80216EB4
  c->r[3]=c->r[30]+0x00000558u; // 80216EB8
  c->lr=0x80216EC0u; f_8007ECBC(c); // 80216EBC
  c->r[4]=c->r[28]+0x00000441u; // 80216EC0
  c->r[5]=0u+0x00000000u; // 80216EC4
  c->r[3]=c->r[3]+0x000000FCu; // 80216EC8
  c->lr=0x80216ED0u; f_802E6904(c); // 80216ECC
  c->r[3]=c->r[30]+0x00000558u; // 80216ED0
  c->lr=0x80216ED8u; f_8007ECBC(c); // 80216ED4
  c->r[4]=c->r[28]+0x00000453u; // 80216ED8
  c->r[5]=0u+0x00000001u; // 80216EDC
  c->r[3]=c->r[3]+0x000000FCu; // 80216EE0
  c->lr=0x80216EE8u; f_802E6904(c); // 80216EE4
  c->r[3]=c->r[30]+0x00000518u; // 80216EE8
  c->r[4]=c->r[30]+0x00000510u; // 80216EEC
  c->lr=0x80216EF4u; f_80053568(c); // 80216EF0
  c->r[5]=R32(c->r[30]+0x000003E8u); // 80216EF4
  c->r[0]=0u+0x00000000u; // 80216EF8
  c->r[3]=c->r[1]+0x0000001Cu; // 80216EFC
  c->r[4]=R32(c->r[5]+0x00000008u); // 80216F00
  W32(c->r[5]+0x0000012Cu,c->r[4]); // 80216F04
  W8(c->r[1]+0x0000001Cu,c->r[0]); // 80216F08
  c->lr=0x80216F10u; f_80046D50(c); // 80216F0C
  c->lr=0x80216F14u; f_8008CD10(c); // 80216F10
  cmps(c,0,(int32_t)c->r[3],0); // 80216F14
  if (!crb(c,2)) { goto L_80216F38; } // 80216F18
  c->r[3]=c->r[30]+0x00000518u; // 80216F1C
  c->lr=0x80216F24u; f_8007ECBC(c); // 80216F20
  {uint32_t ea=c->r[2]+0xFFFFDCE8u; c->f[1]=c->ps1[1]=RF32(ea);} // 80216F24
  c->r[4]=c->r[28]+0x00000495u; // 80216F28
  {uint32_t ea=c->r[2]+0xFFFFDCF0u; c->f[2]=c->ps1[2]=RF32(ea);} // 80216F2C
  c->r[5]=0u+0x00000001u; // 80216F30
  c->lr=0x80216F38u; f_8015DD64(c); // 80216F34
L_80216F38:;
  c->r[0]=R32(c->r[30]+0x0000061Cu); // 80216F38
  cmps(c,0,(int32_t)c->r[0],1); // 80216F3C
  if (!crb(c,2)) { goto L_80216FCC; } // 80216F40
  c->r[3]=c->r[30]+0x00000558u; // 80216F44
  c->lr=0x80216F4Cu; f_8007ECBC(c); // 80216F48
  c->r[28]=0u+0x806A0000u; // 80216F4C
  c->r[5]=0u+0x00000000u; // 80216F50
  c->r[28]=c->r[28]+0xFFFF8510u; // 80216F54
  c->r[3]=c->r[3]+0x000000FCu; // 80216F58
  c->r[4]=c->r[28]+0x00000467u; // 80216F5C
  c->lr=0x80216F64u; f_802E6904(c); // 80216F60
  c->r[3]=c->r[30]+0x00000558u; // 80216F64
  c->lr=0x80216F6Cu; f_8007ECBC(c); // 80216F68
  c->r[4]=c->r[28]+0x00000479u; // 80216F6C
  c->r[5]=0u+0x00000001u; // 80216F70
  c->r[3]=c->r[3]+0x000000FCu; // 80216F74
  c->lr=0x80216F7Cu; f_802E6904(c); // 80216F78
  c->r[3]=c->r[30]+0x00000518u; // 80216F7C
  c->r[4]=c->r[30]+0x00000508u; // 80216F80
  c->lr=0x80216F88u; f_80053568(c); // 80216F84
  c->r[5]=R32(c->r[30]+0x000003E8u); // 80216F88
  c->r[0]=0u+0x00000000u; // 80216F8C
  c->r[3]=c->r[1]+0x00000018u; // 80216F90
  c->r[4]=R32(c->r[5]+0x0000000Cu); // 80216F94
  W32(c->r[5]+0x0000012Cu,c->r[4]); // 80216F98
  W8(c->r[1]+0x00000018u,c->r[0]); // 80216F9C
  c->lr=0x80216FA4u; f_80046D50(c); // 80216FA0
  c->lr=0x80216FA8u; f_8008CD10(c); // 80216FA4
  cmps(c,0,(int32_t)c->r[3],0); // 80216FA8
  if (!crb(c,2)) { goto L_80216FCC; } // 80216FAC
  c->r[3]=c->r[30]+0x00000518u; // 80216FB0
  c->lr=0x80216FB8u; f_8007ECBC(c); // 80216FB4
  {uint32_t ea=c->r[2]+0xFFFFDCE8u; c->f[1]=c->ps1[1]=RF32(ea);} // 80216FB8
  c->r[4]=c->r[28]+0x0000049Au; // 80216FBC
  {uint32_t ea=c->r[2]+0xFFFFDCF0u; c->f[2]=c->ps1[2]=RF32(ea);} // 80216FC0
  c->r[5]=0u+0x00000001u; // 80216FC4
  c->lr=0x80216FCCu; f_8015DD64(c); // 80216FC8
L_80216FCC:;
  c->lr=0x80216FD0u; f_8004DB5C(c); // 80216FCC
  c->r[5]=0u+0x806A0000u; // 80216FD0
  c->r[4]=c->r[3]|c->r[3]; // 80216FD4
  c->r[5]=c->r[5]+0xFFFF8510u; // 80216FD8
  c->r[3]=c->r[1]+0x0000002Cu; // 80216FDC
  c->r[5]=c->r[5]+0x0000049Fu; // 80216FE0
  c->r[6]=0u+0x00000001u; // 80216FE4
  c->lr=0x80216FECu; f_80321B90(c); // 80216FE8
  c->r[3]=c->r[30]+0x00000558u; // 80216FEC
  c->lr=0x80216FF4u; f_8007ECBC(c); // 80216FF0
  c->r[3]=c->r[3]+0x000001B8u; // 80216FF4
  c->r[4]=c->r[1]+0x0000002Cu; // 80216FF8
  c->lr=0x80217000u; f_80382F2C(c); // 80216FFC
  c->r[12]=R32(c->r[1]+0x00000064u); // 80217000
  c->r[3]=c->r[1]+0x0000002Cu; // 80217004
  c->r[12]=R32(c->r[12]+0x00000008u); // 80217008
  c->ctr=c->r[12]; // 8021700C
  if (true) { c->lr=0x80217014u; dispatch(c,c->ctr); } // 80217010
  c->r[3]=c->r[30]+0x00000558u; // 80217014
  c->lr=0x8021701Cu; f_8007ECBC(c); // 80217018
  c->r[28]=0u+0x00000000u; // 8021701C
  W8(c->r[1]+0x00000014u,c->r[28]); // 80217020
  c->r[29]=c->r[3]|c->r[3]; // 80217024
  c->r[3]=c->r[1]+0x00000014u; // 80217028
  c->lr=0x80217030u; f_80046D50(c); // 8021702C
  c->lr=0x80217034u; f_8008CD00(c); // 80217030
  c->r[0]=R32(c->r[29]+0x00000420u); // 80217034
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 80217038
  if (crb(c,2)) { goto L_80217058; } // 8021703C
  c->r[0]=R32(c->r[30]+0x0000061Cu); // 80217040
  W8(c->r[30]+0x000005FDu,c->r[28]); // 80217044
  c->r[0]=cntlz(c->r[0]); // 80217048
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 8021704C
  W32(c->r[30]+0x0000061Cu,c->r[0]); // 80217050
  goto L_8021705C; // 80217054
L_80217058:;
  W8(c->r[30]+0x000005FCu,c->r[28]); // 80217058
L_8021705C:;
  c->r[0]=0u+0x00000000u; // 8021705C
  W8(c->r[1]+0x00000010u,c->r[0]); // 80217060
  c->r[3]=c->r[1]+0x00000010u; // 80217064
  c->lr=0x8021706Cu; f_80046D50(c); // 80217068
  c->lr=0x80217070u; f_8008CD10(c); // 8021706C
  cmps(c,0,(int32_t)c->r[3],0); // 80217070
  if (!crb(c,2)) { goto L_80217090; } // 80217074
  c->r[3]=R32(c->r[30]+0x000003E8u); // 80217078
  c->r[4]=0u+0x00000002u; // 8021707C
  c->r[12]=R32(c->r[3]+0x00000138u); // 80217080
  c->r[12]=R32(c->r[12]+0x00000010u); // 80217084
  c->ctr=c->r[12]; // 80217088
  if (true) { c->lr=0x80217090u; dispatch(c,c->ctr); } // 8021708C
L_80217090:;
  c->r[0]=0u+0x00000000u; // 80217090
  W8(c->r[1]+0x0000000Cu,c->r[0]); // 80217094
  c->r[3]=c->r[1]+0x0000000Cu; // 80217098
  c->lr=0x802170A0u; f_80046D50(c); // 8021709C
  c->lr=0x802170A4u; f_8008CD10(c); // 802170A0
  W8(c->r[30]+0x00000620u,c->r[3]); // 802170A4
  goto L_8021726C; // 802170A8
L_802170AC:;
  c->r[3]=R32(c->r[30]+0x000003E8u); // 802170AC
  c->r[4]=0u+0x00000001u; // 802170B0
  c->r[12]=R32(c->r[3]+0x00000138u); // 802170B4
  c->r[12]=R32(c->r[12]+0x00000010u); // 802170B8
  c->ctr=c->r[12]; // 802170BC
  if (true) { c->lr=0x802170C4u; dispatch(c,c->ctr); } // 802170C0
  goto L_8021726C; // 802170C4
L_802170C8:;
  c->r[28]=0u+0x00000000u; // 802170C8
  W8(c->r[1]+0x00000008u,c->r[28]); // 802170CC
  c->r[3]=c->r[1]+0x00000008u; // 802170D0
  c->lr=0x802170D8u; f_80046D50(c); // 802170D4
  c->lr=0x802170DCu; f_8008CD10(c); // 802170D8
  cmps(c,0,(int32_t)c->r[3],0); // 802170DC
  if (crb(c,2)) { goto L_802171DC; } // 802170E0
  c->r[3]=R32(c->r[30]+0x000003E8u); // 802170E4
  c->r[4]=0u+0x00000001u; // 802170E8
  c->r[12]=R32(c->r[3]+0x00000138u); // 802170EC
  c->r[12]=R32(c->r[12]+0x00000010u); // 802170F0
  c->ctr=c->r[12]; // 802170F4
  if (true) { c->lr=0x802170FCu; dispatch(c,c->ctr); } // 802170F8
  c->r[3]=c->r[30]+0x00000508u; // 802170FC
  c->lr=0x80217104u; f_8007ECBC(c); // 80217100
  c->r[0]=R8(c->r[3]+0x00000416u); // 80217104
  cmps(c,0,(int32_t)c->r[0],0); // 80217108
  if (crb(c,2)) { goto L_8021726C; } // 8021710C
  c->r[3]=c->r[30]+0x00000510u; // 80217110
  c->lr=0x80217118u; f_8007ECBC(c); // 80217114
  c->r[0]=R8(c->r[3]+0x00000416u); // 80217118
  cmps(c,0,(int32_t)c->r[0],0); // 8021711C
  if (crb(c,2)) { goto L_8021726C; } // 80217120
  c->r[4]=R32(c->r[30]+0x000003DCu); // 80217124
  c->r[3]=c->r[30]|c->r[30]; // 80217128
  c->lr=0x80217130u; f_80211064(c); // 8021712C
  c->r[3]=c->r[30]+0x00000518u; // 80217130
  c->lr=0x80217138u; f_8007ECBC(c); // 80217134
  c->r[29]=0u+0x806A0000u; // 80217138
  c->r[5]=0u+0x00000000u; // 8021713C
  c->r[29]=c->r[29]+0xFFFF8510u; // 80217140
  c->r[3]=c->r[3]+0x000000FCu; // 80217144
  c->r[4]=c->r[29]+0x00000441u; // 80217148
  c->lr=0x80217150u; f_802E6904(c); // 8021714C
  c->r[3]=c->r[30]+0x00000518u; // 80217150
  c->lr=0x80217158u; f_8007ECBC(c); // 80217154
  c->r[4]=c->r[29]+0x00000453u; // 80217158
  c->r[5]=0u+0x00000001u; // 8021715C
  c->r[3]=c->r[3]+0x000000FCu; // 80217160
  c->lr=0x80217168u; f_802E6904(c); // 80217164
  c->r[3]=c->r[30]+0x00000518u; // 80217168
  c->lr=0x80217170u; f_8007ECBC(c); // 8021716C
  c->r[4]=c->r[29]+0x00000467u; // 80217170
  c->r[5]=0u+0x00000000u; // 80217174
  c->r[3]=c->r[3]+0x000000FCu; // 80217178
  c->lr=0x80217180u; f_802E6904(c); // 8021717C
  c->r[3]=c->r[30]+0x00000518u; // 80217180
  c->lr=0x80217188u; f_8007ECBC(c); // 80217184
  c->r[4]=c->r[29]+0x00000479u; // 80217188
  c->r[5]=0u+0x00000001u; // 8021718C
  c->r[3]=c->r[3]+0x000000FCu; // 80217190
  c->lr=0x80217198u; f_802E6904(c); // 80217194
  c->r[3]=c->r[30]+0x00000518u; // 80217198
  c->lr=0x802171A0u; f_8007ECBC(c); // 8021719C
  {uint32_t ea=c->r[2]+0xFFFFDCE8u; c->f[1]=c->ps1[1]=RF32(ea);} // 802171A0
  c->r[4]=c->r[29]+0x000002FEu; // 802171A4
  {uint32_t ea=c->r[2]+0xFFFFDCF0u; c->f[2]=c->ps1[2]=RF32(ea);} // 802171A8
  c->r[5]=0u+0x00000001u; // 802171AC
  c->lr=0x802171B4u; f_8015DD64(c); // 802171B0
  c->r[3]=R32(c->r[30]+0x000003E8u); // 802171B4
  c->r[4]=0u+0x00000002u; // 802171B8
  c->r[12]=R32(c->r[3]+0x00000138u); // 802171BC
  c->r[12]=R32(c->r[12]+0x00000010u); // 802171C0
  c->ctr=c->r[12]; // 802171C4
  if (true) { c->lr=0x802171CCu; dispatch(c,c->ctr); } // 802171C8
  W32(c->r[30]+0x000005F8u,c->r[28]); // 802171CC
  c->r[3]=c->r[30]|c->r[30]; // 802171D0
  c->lr=0x802171D8u; f_802148B8(c); // 802171D4
  goto L_8021726C; // 802171D8
L_802171DC:;
  c->r[0]=R8(c->r[30]+0x00000620u); // 802171DC
  cmps(c,0,(int32_t)c->r[0],0); // 802171E0
  if (crb(c,2)) { goto L_80217248; } // 802171E4
  c->r[23]=0u+0x00000000u; // 802171E8
  c->r[29]=0u+0x00000000u; // 802171EC
L_802171F0:;
  c->r[3]=c->r[30]+c->r[29]; // 802171F0
  c->r[25]=c->r[3]+0x00000508u; // 802171F4
  c->r[3]=c->r[25]|c->r[25]; // 802171F8
  c->lr=0x80217200u; f_8007ECBC(c); // 802171FC
  W8(c->r[3]+0x00000415u,c->r[28]); // 80217200
  c->r[3]=c->r[25]|c->r[25]; // 80217204
  c->lr=0x8021720Cu; f_8007ECBC(c); // 80217208
  c->r[23]=c->r[23]+0x00000001u; // 8021720C
  W8(c->r[3]+0x00000416u,c->r[28]); // 80217210
  cmps(c,0,(int32_t)c->r[23],2); // 80217214
  c->r[29]=c->r[29]+0x00000008u; // 80217218
  if (crb(c,0)) { IRQCHK(c); goto L_802171F0; } // 8021721C
  c->r[3]=c->r[30]+0x00000558u; // 80217220
  c->lr=0x80217228u; f_8007ECBC(c); // 80217224
  c->r[4]=0u+0x00000000u; // 80217228
  c->lr=0x80217230u; f_8015DED4(c); // 8021722C
  c->r[3]=0u+0x00000000u; // 80217230
  W8(c->r[30]+0x000005FCu,c->r[3]); // 80217234
  c->r[0]=0u+0x00000001u; // 80217238
  W8(c->r[30]+0x000005FDu,c->r[3]); // 8021723C
  W32(c->r[31]+0x0000000Cu,c->r[0]); // 80217240
  goto L_8021726C; // 80217244
L_80217248:;
  c->r[3]=R32(c->r[30]+0x000003E8u); // 80217248
  c->r[4]=0u+0x00000002u; // 8021724C
  c->r[12]=R32(c->r[3]+0x00000138u); // 80217250
  c->r[12]=R32(c->r[12]+0x00000010u); // 80217254
  c->ctr=c->r[12]; // 80217258
  if (true) { c->lr=0x80217260u; dispatch(c,c->ctr); } // 8021725C
  W32(c->r[30]+0x000005F8u,c->r[28]); // 80217260
  c->r[3]=c->r[30]|c->r[30]; // 80217264
  c->lr=0x8021726Cu; f_802148B8(c); // 80217268
L_8021726C:;
  c->r[11]=c->r[1]+0x000002A0u; // 8021726C
  {uint32_t ea=c->r[1]+0x000002E8u; psq_load(c,31,ea,0,0);} // 80217270
  {uint32_t ea=c->r[1]+0x000002E0u; c->f[31]=RF64(ea);} // 80217274
  {uint32_t ea=c->r[1]+0x000002D8u; psq_load(c,30,ea,0,0);} // 80217278
  {uint32_t ea=c->r[1]+0x000002D0u; c->f[30]=RF64(ea);} // 8021727C
  {uint32_t ea=c->r[1]+0x000002C8u; psq_load(c,29,ea,0,0);} // 80217280
  {uint32_t ea=c->r[1]+0x000002C0u; c->f[29]=RF64(ea);} // 80217284
  {uint32_t ea=c->r[1]+0x000002B8u; psq_load(c,28,ea,0,0);} // 80217288
  {uint32_t ea=c->r[1]+0x000002B0u; c->f[28]=RF64(ea);} // 8021728C
  {uint32_t ea=c->r[1]+0x000002A8u; psq_load(c,27,ea,0,0);} // 80217290
  {uint32_t ea=c->r[1]+0x000002A0u; c->f[27]=RF64(ea);} // 80217294
  c->lr=0x8021729Cu; { c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80217298
  c->r[0]=R32(c->r[1]+0x000002F4u); // 8021729C
  c->lr=c->r[0]; // 802172A0
  c->r[1]=c->r[1]+0x000002F0u; // 802172A4
  return; // 802172A8
}

// fn_802172AC
void f_802172AC(Ctx* __restrict c) {
  trace_call(0x802172ACu);
  return; // 802172AC
}

// fn_802172B0
void f_802172B0(Ctx* __restrict c) {
  trace_call(0x802172B0u);
  {uint32_t ea=c->r[1]+0xFFFFFEC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802172B0
  c->r[0]=c->lr; // 802172B4
  W32(c->r[1]+0x00000144u,c->r[0]); // 802172B8
  c->r[11]=c->r[1]+0x00000140u; // 802172BC
  c->lr=0x802172C4u; { W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 802172C0
  c->r[31]=c->r[1]|c->r[1]; // 802172C4
  c->r[28]=0u+0x00000001u; // 802172C8
  W8(c->r[3]+0x000005FCu,c->r[28]); // 802172CC
  c->r[29]=c->r[3]|c->r[3]; // 802172D0
  c->r[30]=c->r[4]|c->r[4]; // 802172D4
  W8(c->r[3]+0x000005FDu,c->r[28]); // 802172D8
  c->r[0]=R32(c->r[4]+0x0000000Cu); // 802172DC
  cmps(c,0,(int32_t)c->r[0],1); // 802172E0
  if (!crb(c,2)) { goto L_802173DC; } // 802172E4
  c->r[3]=c->r[3]+0x00000508u; // 802172E8
  c->lr=0x802172F0u; f_8007ECBC(c); // 802172EC
  c->r[4]=0u+0x00000001u; // 802172F0
  c->r[3]=c->r[3]+0x000000FCu; // 802172F4
  c->lr=0x802172FCu; f_802E6678(c); // 802172F8
  c->r[3]=c->r[29]+0x00000510u; // 802172FC
  c->lr=0x80217304u; f_8007ECBC(c); // 80217300
  c->r[4]=0u+0x00000001u; // 80217304
  c->r[3]=c->r[3]+0x000000FCu; // 80217308
  c->lr=0x80217310u; f_802E6678(c); // 8021730C
  c->r[3]=c->r[29]+0x00000558u; // 80217310
  c->lr=0x80217318u; f_8007ECBC(c); // 80217314
  c->lr=0x8021731Cu; f_800E71D4(c); // 80217318
  c->lr=0x80217320u; f_802EA628(c); // 8021731C
  cmps(c,0,(int32_t)c->r[3],0); // 80217320
  if (crb(c,2)) { goto L_80217774; } // 80217324
  c->r[3]=c->r[29]|c->r[29]; // 80217328
  c->lr=0x80217330u; f_802147A8(c); // 8021732C
  c->r[3]=c->r[29]+0x00000558u; // 80217330
  c->lr=0x80217338u; f_8007ECBC(c); // 80217334
  c->r[4]=0u+0x00000000u; // 80217338
  c->lr=0x80217340u; f_8015DFE8(c); // 8021733C
  c->r[3]=c->r[29]+0x00000518u; // 80217340
  c->lr=0x80217348u; f_8007ECBC(c); // 80217344
  c->r[4]=0u+0x00000000u; // 80217348
  c->lr=0x80217350u; f_8015DFE8(c); // 8021734C
  c->r[3]=c->r[29]+0x00000508u; // 80217350
  c->lr=0x80217358u; f_8007ECBC(c); // 80217354
  c->r[30]=0u+0x806A0000u; // 80217358
  c->r[5]=0u+0x00000001u; // 8021735C
  c->r[30]=c->r[30]+0xFFFF8510u; // 80217360
  c->r[3]=c->r[3]+0x000000FCu; // 80217364
  c->r[4]=c->r[30]+0x00000441u; // 80217368
  c->lr=0x80217370u; f_802E6904(c); // 8021736C
  c->r[3]=c->r[29]+0x00000508u; // 80217370
  c->lr=0x80217378u; f_8007ECBC(c); // 80217374
  c->r[4]=c->r[30]+0x00000453u; // 80217378
  c->r[5]=0u+0x00000000u; // 8021737C
  c->r[3]=c->r[3]+0x000000FCu; // 80217380
  c->lr=0x80217388u; f_802E6904(c); // 80217384
  c->r[3]=c->r[29]+0x00000510u; // 80217388
  c->lr=0x80217390u; f_8007ECBC(c); // 8021738C
  c->r[4]=c->r[30]+0x00000467u; // 80217390
  c->r[5]=0u+0x00000001u; // 80217394
  c->r[3]=c->r[3]+0x000000FCu; // 80217398
  c->lr=0x802173A0u; f_802E6904(c); // 8021739C
  c->r[3]=c->r[29]+0x00000510u; // 802173A0
  c->lr=0x802173A8u; f_8007ECBC(c); // 802173A4
  c->r[4]=c->r[30]+0x00000479u; // 802173A8
  c->r[5]=0u+0x00000000u; // 802173AC
  c->r[3]=c->r[3]+0x000000FCu; // 802173B0
  c->lr=0x802173B8u; f_802E6904(c); // 802173B4
  c->r[3]=c->r[29]+0x00000508u; // 802173B8
  c->lr=0x802173C0u; f_8007ECBC(c); // 802173BC
  c->r[30]=0u+0x00000000u; // 802173C0
  W8(c->r[3]+0x00000416u,c->r[30]); // 802173C4
  c->r[3]=c->r[29]+0x00000510u; // 802173C8
  c->lr=0x802173D0u; f_8007ECBC(c); // 802173CC
  W8(c->r[3]+0x00000416u,c->r[30]); // 802173D0
  goto L_80217774; // 802173D4
  goto L_80217774; // 802173D8
L_802173DC:;
  cmps(c,0,(int32_t)c->r[0],2); // 802173DC
  if (!crb(c,2)) { goto L_80217408; } // 802173E0
  c->r[3]=c->r[3]+0x00000490u; // 802173E4
  c->lr=0x802173ECu; f_8007ECBC(c); // 802173E8
  c->r[4]=0u+0x806A0000u; // 802173EC
  c->r[4]=c->r[4]+0xFFFF8510u; // 802173F0
  c->r[4]=c->r[4]+0x00000304u; // 802173F4
  c->lr=0x802173FCu; f_8015DED4(c); // 802173F8
  c->r[0]=0u+0x00000003u; // 802173FC
  W32(c->r[30]+0x0000000Cu,c->r[0]); // 80217400
  goto L_80217774; // 80217404
L_80217408:;
  cmps(c,0,(int32_t)c->r[0],3); // 80217408
  if (!crb(c,2)) { goto L_80217474; } // 8021740C
  c->r[0]=0u+0x00000004u; // 80217410
  W32(c->r[4]+0x0000000Cu,c->r[0]); // 80217414
  c->r[30]=0u+0x00000000u; // 80217418
  goto L_8021744C; // 8021741C
L_80217420:;
  c->r[0]=rotl(c->r[30],3)&0xFFFFFFF8u; // 80217420
  c->r[3]=c->r[29]+c->r[0]; // 80217424
  c->r[28]=c->r[3]+0x000004C0u; // 80217428
  c->r[3]=c->r[28]|c->r[28]; // 8021742C
  c->lr=0x80217434u; f_8007ECBC(c); // 80217430
  c->r[4]=0u+0x00000000u; // 80217434
  c->lr=0x8021743Cu; f_8015DED4(c); // 80217438
  c->r[4]=c->r[28]|c->r[28]; // 8021743C
  c->r[3]=c->r[29]+0x00000518u; // 80217440
  c->lr=0x80217448u; f_80053568(c); // 80217444
  c->r[30]=c->r[30]+0x00000001u; // 80217448
L_8021744C:;
  c->r[0]=R32(c->r[29]+0x00000614u); // 8021744C
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80217450
  c->r[3]=c->r[29]+c->r[0]; // 80217454
  c->r[0]=R32(c->r[3]+0x00000644u); // 80217458
  cmps(c,0,(int32_t)c->r[30],(int32_t)c->r[0]); // 8021745C
  if (crb(c,0)) { IRQCHK(c); goto L_80217420; } // 80217460
  {uint32_t ea=c->r[2]+0xFFFFDCE8u; c->f[1]=c->ps1[1]=RF32(ea);} // 80217464
  c->r[3]=c->r[29]|c->r[29]; // 80217468
  c->lr=0x80217470u; f_8021369C(c); // 8021746C
  goto L_80217774; // 80217470
L_80217474:;
  cmps(c,0,(int32_t)c->r[0],4); // 80217474
  if (!crb(c,2)) { goto L_8021754C; } // 80217478
  c->r[3]=c->r[3]+0x00000518u; // 8021747C
  c->lr=0x80217484u; f_8007ECBC(c); // 80217480
  c->lr=0x80217488u; f_800E71D4(c); // 80217484
  c->lr=0x8021748Cu; f_802EA628(c); // 80217488
  cmps(c,0,(int32_t)c->r[3],0); // 8021748C
  if (crb(c,2)) { goto L_80217774; } // 80217490
  c->r[28]=0u+0x00000000u; // 80217494
  goto L_802174B8; // 80217498
L_8021749C:;
  c->r[0]=rotl(c->r[28],3)&0xFFFFFFF8u; // 8021749C
  c->r[3]=c->r[29]+c->r[0]; // 802174A0
  c->r[3]=c->r[3]+0x000004C0u; // 802174A4
  c->lr=0x802174ACu; f_8007ECBC(c); // 802174A8
  c->r[4]=0u+0x00000000u; // 802174AC
  c->lr=0x802174B4u; f_8015DFE8(c); // 802174B0
  c->r[28]=c->r[28]+0x00000001u; // 802174B4
L_802174B8:;
  c->r[0]=R32(c->r[29]+0x00000614u); // 802174B8
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 802174BC
  c->r[3]=c->r[29]+c->r[0]; // 802174C0
  c->r[0]=R32(c->r[3]+0x00000644u); // 802174C4
  cmps(c,0,(int32_t)c->r[28],(int32_t)c->r[0]); // 802174C8
  if (crb(c,0)) { IRQCHK(c); goto L_8021749C; } // 802174CC
  c->r[5]=R32(c->r[29]+0x00000618u); // 802174D0
  c->r[30]=0u+0x806A0000u; // 802174D4
  c->r[30]=c->r[30]+0xFFFF8510u; // 802174D8
  c->r[3]=c->r[31]+0x00000028u; // 802174DC
  c->r[4]=c->r[30]+0x00000203u; // 802174E0
  c->r[5]=c->r[5]+0x00000001u; // 802174E4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 802174E8
  c->lr=0x802174F0u; f_803B1FC8(c); // 802174EC
  c->r[3]=c->r[29]+0x00000550u; // 802174F0
  c->lr=0x802174F8u; f_8007ECBC(c); // 802174F4
  c->r[4]=c->r[31]+0x00000028u; // 802174F8
  c->r[5]=0u+0x00000000u; // 802174FC
  c->r[3]=c->r[3]+0x000000FCu; // 80217500
  c->lr=0x80217508u; f_802E6904(c); // 80217504
  c->r[5]=R32(c->r[29]+0x00000618u); // 80217508
  c->r[3]=c->r[31]+0x00000028u; // 8021750C
  c->r[4]=c->r[30]+0x00000214u; // 80217510
  c->r[5]=c->r[5]+0x00000001u; // 80217514
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80217518
  c->lr=0x80217520u; f_803B1FC8(c); // 8021751C
  c->r[3]=c->r[29]+0x00000550u; // 80217520
  c->lr=0x80217528u; f_8007ECBC(c); // 80217524
  c->r[4]=c->r[31]+0x00000028u; // 80217528
  c->r[5]=0u+0x00000001u; // 8021752C
  c->r[3]=c->r[3]+0x000000FCu; // 80217530
  c->lr=0x80217538u; f_802E6904(c); // 80217534
  c->r[3]=c->r[29]|c->r[29]; // 80217538
  c->lr=0x80217540u; f_80214830(c); // 8021753C
  c->r[0]=0u+0x00000001u; // 80217540
  W32(c->r[29]+0x000005F8u,c->r[0]); // 80217544
  goto L_80217774; // 80217548
L_8021754C:;
  c->r[0]=R32(c->r[3]+0x000005F8u); // 8021754C
  cmps(c,0,(int32_t)c->r[0],0); // 80217550
  if (!crb(c,2)) { goto L_80217658; } // 80217554
  c->r[0]=0u+0x0000000Fu; // 80217558
  c->r[4]=(uint32_t)(int32_t)(int16_t)c->r[0]; // 8021755C
  c->lr=0x80217564u; f_80210E90(c); // 80217560
  cmps(c,0,(int32_t)c->r[3],0); // 80217564
  if (crb(c,2)) { goto L_802175D8; } // 80217568
  c->r[4]=R32(c->r[29]+0x000003DCu); // 8021756C
  c->r[3]=c->r[29]|c->r[29]; // 80217570
  c->lr=0x80217578u; f_80211128(c); // 80217574
  c->lr=0x8021757Cu; f_8033FE4C(c); // 80217578
  c->lr=0x80217580u; f_8007FF5C(c); // 8021757C
  c->r[12]=R32(c->r[3]+0x00000000u); // 80217580
  {uint32_t ea=c->r[2]+0xFFFFDCE8u; c->f[1]=c->ps1[1]=RF32(ea);} // 80217584
  c->r[12]=R32(c->r[12]+0x00000014u); // 80217588
  {uint32_t ea=c->r[2]+0xFFFFDD38u; c->f[2]=c->ps1[2]=RF32(ea);} // 8021758C
  c->ctr=c->r[12]; // 80217590
  if (true) { c->lr=0x80217598u; dispatch(c,c->ctr); } // 80217594
  c->r[3]=R32(c->r[29]+0x000003E8u); // 80217598
  c->r[0]=R8(c->r[3]+0x00000004u); // 8021759C
  cmps(c,0,(int32_t)c->r[0],0); // 802175A0
  if (crb(c,2)) { goto L_802175D0; } // 802175A4
  c->r[3]=c->r[29]+0x00000558u; // 802175A8
  c->lr=0x802175B0u; f_8007ECBC(c); // 802175AC
  c->r[4]=0u+0x00000000u; // 802175B0
  c->lr=0x802175B8u; f_8015DED4(c); // 802175B4
  c->r[3]=c->r[29]+0x00000518u; // 802175B8
  c->lr=0x802175C0u; f_8007ECBC(c); // 802175BC
  c->r[4]=0u+0x00000000u; // 802175C0
  c->lr=0x802175C8u; f_8015DED4(c); // 802175C4
  W32(c->r[30]+0x0000000Cu,c->r[28]); // 802175C8
  goto L_80217774; // 802175CC
L_802175D0:;
  W32(c->r[30]+0x0000000Cu,c->r[28]); // 802175D0
  goto L_80217774; // 802175D4
L_802175D8:;
  c->r[3]=c->r[29]+0x00000508u; // 802175D8
  c->lr=0x802175E0u; f_8007ECBC(c); // 802175DC
  c->lr=0x802175E4u; f_800E71D4(c); // 802175E0
  c->lr=0x802175E8u; f_802EA628(c); // 802175E4
  cmps(c,0,(int32_t)c->r[3],0); // 802175E8
  if (crb(c,2)) { goto L_80217658; } // 802175EC
  c->r[3]=c->r[29]+0x00000510u; // 802175F0
  c->lr=0x802175F8u; f_8007ECBC(c); // 802175F4
  c->lr=0x802175FCu; f_800E71D4(c); // 802175F8
  c->lr=0x80217600u; f_802EA628(c); // 802175FC
  cmps(c,0,(int32_t)c->r[3],0); // 80217600
  if (crb(c,2)) { goto L_80217658; } // 80217604
  c->r[3]=c->r[29]+0x00000508u; // 80217608
  c->lr=0x80217610u; f_8007ECBC(c); // 8021760C
  c->r[4]=0u+0x00000000u; // 80217610
  c->r[3]=c->r[3]+0x000000FCu; // 80217614
  c->lr=0x8021761Cu; f_802E6678(c); // 80217618
  c->r[3]=c->r[29]+0x00000510u; // 8021761C
  c->lr=0x80217624u; f_8007ECBC(c); // 80217620
  c->r[4]=0u+0x00000000u; // 80217624
  c->r[3]=c->r[3]+0x000000FCu; // 80217628
  c->lr=0x80217630u; f_802E6678(c); // 8021762C
  c->r[3]=R32(c->r[29]+0x000003E8u); // 80217630
  c->r[4]=0u+0x00000000u; // 80217634
  c->r[12]=R32(c->r[3]+0x00000138u); // 80217638
  c->r[12]=R32(c->r[12]+0x00000014u); // 8021763C
  c->ctr=c->r[12]; // 80217640
  if (true) { c->lr=0x80217648u; dispatch(c,c->ctr); } // 80217644
  c->r[0]=0u+0x00000000u; // 80217648
  W32(c->r[30]+0x0000000Cu,c->r[0]); // 8021764C
  c->r[0]=0u+0x00000002u; // 80217650
  W32(c->r[29]+0x000005F8u,c->r[0]); // 80217654
L_80217658:;
  c->r[0]=R32(c->r[29]+0x000005F8u); // 80217658
  cmpu(c,0,c->r[0],0x00000002u); // 8021765C
  if (!crb(c,2)) { goto L_80217774; } // 80217660
  c->r[3]=R32(c->r[29]+0x000003E8u); // 80217664
  c->r[4]=0u+0x00000001u; // 80217668
  c->r[12]=R32(c->r[3]+0x00000138u); // 8021766C
  c->r[12]=R32(c->r[12]+0x00000014u); // 80217670
  c->ctr=c->r[12]; // 80217674
  if (true) { c->lr=0x8021767Cu; dispatch(c,c->ctr); } // 80217678
  cmps(c,0,(int32_t)c->r[3],1); // 8021767C
  if (!crb(c,2)) { goto L_802176D8; } // 80217680
  c->r[0]=R8(c->r[29]+0x00000010u); // 80217684
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80217688
  c->r[3]=c->r[29]+c->r[0]; // 8021768C
  c->r[28]=R32(c->r[3]+0x00000014u); // 80217690
  cmps(c,0,(int32_t)c->r[28],0); // 80217694
  if (crb(c,2)) { goto L_802176C0; } // 80217698
  c->r[30]=0u+0x00000000u; // 8021769C
  W32(c->r[31]+0x00000024u,c->r[1]); // 802176A0
  W8(c->r[31]+0x00000008u,c->r[30]); // 802176A4
  c->lr=0x802176ACu; f_8005E1B0(c); // 802176A8
  W32(c->r[28]+0x00000000u,c->r[3]); // 802176AC
  c->r[0]=c->r[13]+0xFFFF80E0u; // 802176B0
  W32(c->r[28]+0x00000004u,c->r[0]); // 802176B4
  W32(c->r[28]+0x00000008u,c->r[30]); // 802176B8
  W32(c->r[28]+0x0000000Cu,c->r[30]); // 802176BC
L_802176C0:;
  W32(c->r[29]+0x00000008u,c->r[28]); // 802176C0
  c->r[0]=0u+0x00000000u; // 802176C4
  W32(c->r[28]+0x00000008u,c->r[0]); // 802176C8
  c->r[0]=R32(c->r[29]+0x00000004u); // 802176CC
  W32(c->r[29]+0x0000000Cu,c->r[0]); // 802176D0
  goto L_80217774; // 802176D4
L_802176D8:;
  c->r[3]=R32(c->r[29]+0x000003E8u); // 802176D8
  c->r[4]=0u+0x00000001u; // 802176DC
  c->r[12]=R32(c->r[3]+0x00000138u); // 802176E0
  c->r[12]=R32(c->r[12]+0x00000014u); // 802176E4
  c->ctr=c->r[12]; // 802176E8
  if (true) { c->lr=0x802176F0u; dispatch(c,c->ctr); } // 802176EC
  cmps(c,0,(int32_t)c->r[3],-1); // 802176F0
  if (!crb(c,2)) { goto L_80217710; } // 802176F4
  c->r[0]=R8(c->r[29]+0x00000610u); // 802176F8
  cmps(c,0,(int32_t)c->r[0],0); // 802176FC
  if (!crb(c,2)) { goto L_80217710; } // 80217700
  c->r[0]=0u+0x00000001u; // 80217704
  W8(c->r[29]+0x00000641u,c->r[0]); // 80217708
  goto L_80217774; // 8021770C
L_80217710:;
  c->r[3]=R32(c->r[29]+0x000003E8u); // 80217710
  c->r[4]=0u+0x00000001u; // 80217714
  c->r[12]=R32(c->r[3]+0x00000138u); // 80217718
  c->r[12]=R32(c->r[12]+0x00000014u); // 8021771C
  c->ctr=c->r[12]; // 80217720
  if (true) { c->lr=0x80217728u; dispatch(c,c->ctr); } // 80217724
  cmps(c,0,(int32_t)c->r[3],-2); // 80217728
  if (!crb(c,2)) { goto L_80217774; } // 8021772C
  c->r[3]=R32(c->r[29]+0x000003E8u); // 80217730
  c->r[0]=R8(c->r[3]+0x00000004u); // 80217734
  cmps(c,0,(int32_t)c->r[0],0); // 80217738
  if (crb(c,2)) { goto L_8021776C; } // 8021773C
  c->r[3]=c->r[29]+0x00000558u; // 80217740
  c->lr=0x80217748u; f_8007ECBC(c); // 80217744
  c->r[4]=0u+0x00000000u; // 80217748
  c->lr=0x80217750u; f_8015DED4(c); // 8021774C
  c->r[3]=c->r[29]+0x00000518u; // 80217750
  c->lr=0x80217758u; f_8007ECBC(c); // 80217754
  c->r[4]=0u+0x00000000u; // 80217758
  c->lr=0x80217760u; f_8015DED4(c); // 8021775C
  c->r[0]=0u+0x00000001u; // 80217760
  W32(c->r[30]+0x0000000Cu,c->r[0]); // 80217764
  goto L_80217774; // 80217768
L_8021776C:;
  c->r[0]=0u+0x00000002u; // 8021776C
  W32(c->r[30]+0x0000000Cu,c->r[0]); // 80217770
L_80217774:;
  c->r[10]=c->r[31]|c->r[31]; // 80217774
  c->r[11]=c->r[10]+0x00000140u; // 80217778
  c->lr=0x80217780u; { c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8021777C
  c->r[10]=R32(c->r[1]+0x00000000u); // 80217780
  c->r[0]=R32(c->r[10]+0x00000004u); // 80217784
  c->r[1]=c->r[10]|c->r[10]; // 80217788
  c->lr=c->r[0]; // 8021778C
  return; // 80217790
}

// fn_80217794
void f_80217794(Ctx* __restrict c) {
  trace_call(0x80217794u);
  c->r[3]=0u+0x00000000u; // 80217794
  return; // 80217798
}

// fn_8021779C
void f_8021779C(Ctx* __restrict c) {
  trace_call(0x8021779Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8021779C
  c->r[0]=c->lr; // 802177A0
  W32(c->r[1]+0x00000014u,c->r[0]); // 802177A4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 802177A8
  c->r[31]=c->r[3]|c->r[3]; // 802177AC
  c->r[4]=R32(c->r[3]+0x00000004u); // 802177B0
  cmps(c,0,(int32_t)c->r[4],0); // 802177B4
  if (crb(c,2)) { goto L_802177C4; } // 802177B8
  c->r[0]=R32(c->r[4]+0x00000008u); // 802177BC
  goto L_802177C8; // 802177C0
L_802177C4:;
  c->r[0]=0u+0x00000000u; // 802177C4
L_802177C8:;
  cmps(c,0,(int32_t)c->r[0],0); // 802177C8
  if (!crb(c,2)) { goto L_8021780C; } // 802177CC
  c->r[4]=0u+0x00000000u; // 802177D0
  c->r[3]=c->r[3]+0x00000580u; // 802177D4
  c->lr=0x802177DCu; f_80320C3C(c); // 802177D8
  c->r[3]=c->r[31]+0x000005BCu; // 802177DC
  c->r[4]=0u+0x00000000u; // 802177E0
  c->lr=0x802177E8u; f_80320C3C(c); // 802177E4
  c->r[3]=c->r[31]+0x00000490u; // 802177E8
  c->lr=0x802177F0u; f_8007ECBC(c); // 802177EC
  c->r[4]=0u+0x806A0000u; // 802177F0
  {uint32_t ea=c->r[2]+0xFFFFDCE8u; c->f[1]=c->ps1[1]=RF32(ea);} // 802177F4
  c->r[4]=c->r[4]+0xFFFF8510u; // 802177F8
  {uint32_t ea=c->r[2]+0xFFFFDD48u; c->f[2]=c->ps1[2]=RF32(ea);} // 802177FC
  c->r[4]=c->r[4]+0x000004B2u; // 80217800
  c->r[5]=0u+0x00000001u; // 80217804
  c->lr=0x8021780Cu; f_8015DD64(c); // 80217808
L_8021780C:;
  c->r[3]=c->r[31]+0x00000490u; // 8021780C
  c->lr=0x80217814u; f_8007ECBC(c); // 80217810
  c->lr=0x80217818u; f_800E71D4(c); // 80217814
  c->lr=0x8021781Cu; f_802EA628(c); // 80217818
  cmps(c,0,(int32_t)c->r[3],0); // 8021781C
  if (crb(c,2)) { goto L_8021782C; } // 80217820
  c->r[0]=0u+0x00000001u; // 80217824
  W8(c->r[31]+0x00000642u,c->r[0]); // 80217828
L_8021782C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8021782C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80217830
  c->lr=c->r[0]; // 80217834
  c->r[1]=c->r[1]+0x00000010u; // 80217838
  return; // 8021783C
}

// fn_80217840
void f_80217840(Ctx* __restrict c) {
  trace_call(0x80217840u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80217840
  c->r[0]=c->lr; // 80217844
  c->r[5]=0u+0x00000000u; // 80217848
  W32(c->r[1]+0x00000014u,c->r[0]); // 8021784C
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 80217850
  c->r[30]=0u+0x806A0000u; // 80217854
  c->r[30]=c->r[30]+0xFFFF8510u; // 80217858
  c->r[4]=c->r[30]+0x000004B6u; // 8021785C
  c->r[3]=R32(c->r[13]+0xFFFFBE10u); // 80217860
  c->lr=0x80217868u; f_80065F0C(c); // 80217864
  c->lr=0x8021786Cu; f_80050558(c); // 80217868
  c->r[31]=0u+0x80740000u; // 8021786C
  c->r[5]=c->r[30]+0x000004BCu; // 80217870
  c->r[4]=c->r[31]+0x00005180u; // 80217874
  c->r[6]=0u+0x00000000u; // 80217878
  c->lr=0x80217880u; f_803187FC(c); // 8021787C
  c->lr=0x80217884u; f_80050558(c); // 80217880
  c->r[4]=c->r[31]+0x00005180u; // 80217884
  c->r[5]=c->r[30]+0x000004D5u; // 80217888
  c->r[6]=0u+0x00000000u; // 8021788C
  c->lr=0x80217894u; f_803187FC(c); // 80217890
  c->lr=0x80217898u; f_80050558(c); // 80217894
  c->r[4]=c->r[31]+0x00005180u; // 80217898
  c->r[5]=c->r[30]+0x000004F0u; // 8021789C
  c->r[6]=0u+0x00000000u; // 802178A0
  c->lr=0x802178A8u; f_803187FC(c); // 802178A4
  c->lr=0x802178ACu; f_80050558(c); // 802178A8
  c->r[4]=c->r[31]+0x00005180u; // 802178AC
  c->r[5]=c->r[30]+0x0000050Bu; // 802178B0
  c->r[6]=0u+0x00000000u; // 802178B4
  c->lr=0x802178BCu; f_803187FC(c); // 802178B8
  c->lr=0x802178C0u; f_80050558(c); // 802178BC
  c->r[4]=c->r[31]+0x00005180u; // 802178C0
  c->r[5]=c->r[30]+0x00000526u; // 802178C4
  c->r[6]=0u+0x00000000u; // 802178C8
  c->lr=0x802178D0u; f_803187FC(c); // 802178CC
  c->lr=0x802178D4u; f_80050558(c); // 802178D0
  c->r[4]=c->r[31]+0x00005180u; // 802178D4
  c->r[5]=c->r[30]+0x00000541u; // 802178D8
  c->r[6]=0u+0x00000000u; // 802178DC
  c->lr=0x802178E4u; f_803187FC(c); // 802178E0
  c->lr=0x802178E8u; f_80050558(c); // 802178E4
  c->r[4]=c->r[31]+0x00005180u; // 802178E8
  c->r[5]=c->r[30]+0x0000055Cu; // 802178EC
  c->r[6]=0u+0x00000000u; // 802178F0
  c->lr=0x802178F8u; f_803187FC(c); // 802178F4
  c->lr=0x802178FCu; f_80050558(c); // 802178F8
  c->r[4]=c->r[31]+0x00005180u; // 802178FC
  c->r[5]=c->r[30]+0x00000577u; // 80217900
  c->r[6]=0u+0x00000000u; // 80217904
  c->lr=0x8021790Cu; f_803187FC(c); // 80217908
  c->lr=0x80217910u; f_80050558(c); // 8021790C
  c->r[4]=c->r[31]+0x00005180u; // 80217910
  c->r[5]=c->r[30]+0x00000592u; // 80217914
  c->r[6]=0u+0x00000000u; // 80217918
  c->lr=0x80217920u; f_803187FC(c); // 8021791C
  c->lr=0x80217924u; f_80050558(c); // 80217920
  c->r[4]=c->r[31]+0x00005180u; // 80217924
  c->r[5]=c->r[30]+0x000005ADu; // 80217928
  c->r[6]=0u+0x00000000u; // 8021792C
  c->lr=0x80217934u; f_803187FC(c); // 80217930
  c->lr=0x80217938u; f_80050558(c); // 80217934
  c->r[4]=c->r[31]+0x00005180u; // 80217938
  c->r[5]=c->r[30]+0x000005CDu; // 8021793C
  c->r[6]=0u+0x00000000u; // 80217940
  c->lr=0x80217948u; f_803187FC(c); // 80217944
  c->lr=0x8021794Cu; f_80050558(c); // 80217948
  c->r[4]=c->r[31]+0x00005180u; // 8021794C
  c->r[5]=c->r[30]+0x000005EAu; // 80217950
  c->r[6]=0u+0x00000000u; // 80217954
  c->lr=0x8021795Cu; f_803187FC(c); // 80217958
  c->lr=0x80217960u; f_80050558(c); // 8021795C
  c->r[4]=c->r[31]+0x00005180u; // 80217960
  c->r[5]=c->r[30]+0x00000607u; // 80217964
  c->r[6]=0u+0x00000000u; // 80217968
  c->lr=0x80217970u; f_803187FC(c); // 8021796C
  c->lr=0x80217974u; f_80050558(c); // 80217970
  c->r[4]=c->r[31]+0x00005180u; // 80217974
  c->r[5]=c->r[30]+0x00000623u; // 80217978
  c->r[6]=0u+0x00000000u; // 8021797C
  c->lr=0x80217984u; f_803187FC(c); // 80217980
  c->lr=0x80217988u; f_80050558(c); // 80217984
  c->r[4]=c->r[31]+0x00005180u; // 80217988
  c->r[5]=c->r[30]+0x0000063Bu; // 8021798C
  c->r[6]=0u+0x00000000u; // 80217990
  c->lr=0x80217998u; f_803187FC(c); // 80217994
  c->lr=0x8021799Cu; f_80050558(c); // 80217998
  c->r[4]=c->r[31]+0x00005180u; // 8021799C
  c->r[5]=c->r[30]+0x00000654u; // 802179A0
  c->r[6]=0u+0x00000000u; // 802179A4
  c->lr=0x802179ACu; f_803187FC(c); // 802179A8
  c->lr=0x802179B0u; f_80050558(c); // 802179AC
  c->r[4]=c->r[31]+0x00005180u; // 802179B0
  c->r[5]=c->r[30]+0x0000066Du; // 802179B4
  c->r[6]=0u+0x00000000u; // 802179B8
  c->lr=0x802179C0u; f_803187FC(c); // 802179BC
  c->lr=0x802179C4u; f_80050558(c); // 802179C0
  c->r[4]=c->r[31]+0x00005180u; // 802179C4
  c->r[5]=c->r[30]+0x00000689u; // 802179C8
  c->r[6]=0u+0x00000000u; // 802179CC
  c->lr=0x802179D4u; f_803187FC(c); // 802179D0
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 802179D4
  c->r[0]=R32(c->r[1]+0x00000014u); // 802179D8
  c->lr=c->r[0]; // 802179DC
  c->r[1]=c->r[1]+0x00000010u; // 802179E0
  return; // 802179E4
}

// fn_802179E8
void f_802179E8(Ctx* __restrict c) {
  trace_call(0x802179E8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802179E8
  c->r[0]=c->lr; // 802179EC
  W32(c->r[1]+0x00000014u,c->r[0]); // 802179F0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 802179F4
  c->lr=0x802179FCu; f_80050558(c); // 802179F8
  c->r[4]=0u+0x80740000u; // 802179FC
  c->r[5]=0u+0x00000000u; // 80217A00
  c->r[4]=c->r[4]+0x00005180u; // 80217A04
  c->r[6]=0u+0x00000000u; // 80217A08
  c->lr=0x80217A10u; f_803187FC(c); // 80217A0C
  c->r[31]=0u+0x00000000u; // 80217A10
  c->lr=0x80217A18u; f_80050558(c); // 80217A14
  c->r[4]=0u+0x00000000u; // 80217A18
  c->lr=0x80217A20u; f_8031894C(c); // 80217A1C
  cmps(c,0,(int32_t)c->r[3],0); // 80217A20
  if (!crb(c,2)) { goto L_80217A38; } // 80217A24
  c->r[3]=R32(c->r[13]+0xFFFFBE10u); // 80217A28
  c->lr=0x80217A30u; f_80065F00(c); // 80217A2C
  cmps(c,0,(int32_t)c->r[3],0); // 80217A30
  if (crb(c,2)) { goto L_80217A3C; } // 80217A34
L_80217A38:;
  c->r[31]=0u+0x00000001u; // 80217A38
L_80217A3C:;
  c->r[3]=c->r[31]|c->r[31]; // 80217A3C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80217A40
  c->r[0]=R32(c->r[1]+0x00000014u); // 80217A44
  c->lr=c->r[0]; // 80217A48
  c->r[1]=c->r[1]+0x00000010u; // 80217A4C
  return; // 80217A50
}

// fn_80217A54
void f_80217A54(Ctx* __restrict c) {
  trace_call(0x80217A54u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80217A54
  c->r[0]=c->lr; // 80217A58
  W32(c->r[1]+0x00000014u,c->r[0]); // 80217A5C
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 80217A60
  c->r[30]=c->r[3]|c->r[3]; // 80217A64
  c->lr=0x80217A6Cu; f_80050558(c); // 80217A68
  c->r[3]=0u+0x000006D4u; // 80217A6C
  c->lr=0x80217A74u; f_8006B5DC(c); // 80217A70
  cmps(c,0,(int32_t)c->r[3],0); // 80217A74
  c->r[31]=c->r[3]|c->r[3]; // 80217A78
  if (crb(c,2)) { goto L_80217A84; } // 80217A7C
  c->lr=0x80217A84u; f_802111BC(c); // 80217A80
L_80217A84:;
  c->r[12]=R32(c->r[31]+0x0000001Cu); // 80217A84
  c->r[3]=c->r[31]|c->r[31]; // 80217A88
  c->r[12]=R32(c->r[12]+0x00000014u); // 80217A8C
  c->ctr=c->r[12]; // 80217A90
  if (true) { c->lr=0x80217A98u; dispatch(c,c->ctr); } // 80217A94
  W32(c->r[31]+0x000003E8u,c->r[30]); // 80217A98
  c->r[3]=c->r[31]|c->r[31]; // 80217A9C
  W32(c->r[30]+0x00000000u,c->r[31]); // 80217AA0
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 80217AA4
  c->r[0]=R32(c->r[1]+0x00000014u); // 80217AA8
  c->lr=c->r[0]; // 80217AAC
  c->r[1]=c->r[1]+0x00000010u; // 80217AB0
  return; // 80217AB4
}

// fn_80217AB8
void f_80217AB8(Ctx* __restrict c) {
  trace_call(0x80217AB8u);
  {uint32_t ea=c->r[1]+0xFFFFFEF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80217AB8
  c->r[0]=c->lr; // 80217ABC
  W32(c->r[1]+0x00000114u,c->r[0]); // 80217AC0
  c->r[11]=c->r[1]+0x00000110u; // 80217AC4
  c->lr=0x80217ACCu; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80217AC8
  c->r[31]=c->r[1]|c->r[1]; // 80217ACC
  cmps(c,0,(int32_t)c->r[5],2); // 80217AD0
  c->r[8]=0u+0x00000000u; // 80217AD4
  W32(c->r[3]+0x00000600u,c->r[4]); // 80217AD8
  c->r[29]=c->r[3]|c->r[3]; // 80217ADC
  c->r[30]=c->r[4]|c->r[4]; // 80217AE0
  W32(c->r[3]+0x00000604u,c->r[5]); // 80217AE4
  W32(c->r[3]+0x00000608u,c->r[6]); // 80217AE8
  W32(c->r[3]+0x0000060Cu,c->r[7]); // 80217AEC
  W8(c->r[3]+0x00000610u,c->r[8]); // 80217AF0
  if (!crb(c,2)) { goto L_80217B28; } // 80217AF4
  cmps(c,0,(int32_t)c->r[6],5); // 80217AF8
  if (!crb(c,2)) { goto L_80217B0C; } // 80217AFC
  c->r[0]=0u+0x00000003u; // 80217B00
  W32(c->r[3]+0x00000604u,c->r[0]); // 80217B04
  W32(c->r[3]+0x00000608u,c->r[8]); // 80217B08
L_80217B0C:;
  c->r[0]=R32(c->r[3]+0x00000608u); // 80217B0C
  cmps(c,0,(int32_t)c->r[0],6); // 80217B10
  if (!crb(c,2)) { goto L_80217B28; } // 80217B14
  c->r[4]=0u+0x00000003u; // 80217B18
  c->r[0]=0u+0x00000001u; // 80217B1C
  W32(c->r[3]+0x00000604u,c->r[4]); // 80217B20
  W32(c->r[3]+0x00000608u,c->r[0]); // 80217B24
L_80217B28:;
  c->lr=0x80217B2Cu; f_8004DB5C(c); // 80217B28
  c->lr=0x80217B30u; f_80321390(c); // 80217B2C
  c->lr=0x80217B34u; f_802CD278(c); // 80217B30
  c->r[4]=0u+0x00000000u; // 80217B34
  c->lr=0x80217B3Cu; f_802CF328(c); // 80217B38
  c->r[28]=0u+0x806A0000u; // 80217B3C
  c->r[3]=0u+0x80740000u; // 80217B40
  c->r[28]=c->r[28]+0xFFFF8510u; // 80217B44
  c->r[3]=c->r[3]+0x00005408u; // 80217B48
  c->r[4]=c->r[28]+0x000006A5u; // 80217B4C
  c->lr=0x80217B54u; f_8005A748(c); // 80217B50
  c->r[27]=c->r[3]|c->r[3]; // 80217B54
  c->lr=0x80217B5Cu; f_8004DB5C(c); // 80217B58
  c->r[4]=c->r[27]|c->r[27]; // 80217B5C
  c->lr=0x80217B64u; f_803213CC(c); // 80217B60
  c->lr=0x80217B68u; f_8004DB5C(c); // 80217B64
  c->r[4]=c->r[3]|c->r[3]; // 80217B68
  c->r[3]=c->r[31]+0x000000B8u; // 80217B6C
  c->r[5]=c->r[28]+0x000006AFu; // 80217B70
  c->r[6]=0u+0x00000001u; // 80217B74
  c->lr=0x80217B7Cu; f_80321B90(c); // 80217B78
  c->lr=0x80217B80u; f_8004DB5C(c); // 80217B7C
  c->r[4]=c->r[3]|c->r[3]; // 80217B80
  c->r[3]=c->r[31]+0x0000007Cu; // 80217B84
  c->r[5]=c->r[28]+0x000006C3u; // 80217B88
  c->r[6]=0u+0x00000001u; // 80217B8C
  c->lr=0x80217B94u; f_80321B90(c); // 80217B90
  c->r[3]=c->r[29]+0x00000580u; // 80217B94
  c->r[4]=c->r[31]+0x0000007Cu; // 80217B98
  c->lr=0x80217BA0u; f_80066080(c); // 80217B9C
  c->lr=0x80217BA4u; f_8004DB5C(c); // 80217BA0
  c->r[4]=c->r[3]|c->r[3]; // 80217BA4
  c->r[3]=c->r[31]+0x00000040u; // 80217BA8
  c->r[5]=c->r[28]+0x000006D6u; // 80217BAC
  c->r[6]=0u+0x00000001u; // 80217BB0
  c->lr=0x80217BB8u; f_80321B90(c); // 80217BB4
  c->r[3]=c->r[29]+0x000005BCu; // 80217BB8
  c->r[4]=c->r[31]+0x00000040u; // 80217BBC
  c->lr=0x80217BC4u; f_80066080(c); // 80217BC0
  c->r[0]=R8(c->r[29]+0x00000010u); // 80217BC4
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80217BC8
  c->r[3]=c->r[29]+c->r[0]; // 80217BCC
  c->r[27]=R32(c->r[3]+0x00000014u); // 80217BD0
  cmps(c,0,(int32_t)c->r[27],0); // 80217BD4
  if (crb(c,2)) { goto L_80217C00; } // 80217BD8
  c->r[28]=0u+0x00000000u; // 80217BDC
  W32(c->r[31]+0x0000003Cu,c->r[1]); // 80217BE0
  W8(c->r[31]+0x0000000Cu,c->r[28]); // 80217BE4
  c->lr=0x80217BECu; f_801AAE0C(c); // 80217BE8
  W32(c->r[27]+0x00000000u,c->r[3]); // 80217BEC
  c->r[0]=c->r[13]+0xFFFF8DB0u; // 80217BF0
  W32(c->r[27]+0x00000004u,c->r[0]); // 80217BF4
  W32(c->r[27]+0x00000008u,c->r[28]); // 80217BF8
  W32(c->r[27]+0x0000000Cu,c->r[28]); // 80217BFC
L_80217C00:;
  W32(c->r[29]+0x00000008u,c->r[27]); // 80217C00
  c->r[0]=0u+0x00000000u; // 80217C04
  c->r[28]=0u+0x00000000u; // 80217C08
  W32(c->r[27]+0x00000008u,c->r[0]); // 80217C0C
  c->r[0]=R32(c->r[29]+0x00000004u); // 80217C10
  W32(c->r[29]+0x0000000Cu,c->r[0]); // 80217C14
  goto L_80217C64; // 80217C18
L_80217C1C:;
  c->r[3]=rotl(c->r[28],2)&0xFFFFFFFCu; // 80217C1C
  c->r[0]=0u+0x00000000u; // 80217C20
  c->r[27]=c->r[29]+c->r[3]; // 80217C24
  c->r[26]=0u+0x00000000u; // 80217C28
  W32(c->r[27]+0x00000644u,c->r[0]); // 80217C2C
  goto L_80217C58; // 80217C30
L_80217C34:;
  c->r[3]=c->r[29]|c->r[29]; // 80217C34
  c->r[4]=c->r[28]|c->r[28]; // 80217C38
  c->r[5]=c->r[26]|c->r[26]; // 80217C3C
  c->lr=0x80217C44u; f_80213620(c); // 80217C40
  c->r[0]=rotl(c->r[3],0)&0x00000001u; cr0(c,c->r[0]); // 80217C44
  if (crb(c,2)) { goto L_80217C54; } // 80217C48
  c->r[0]=c->r[26]+0x00000001u; // 80217C4C
  W32(c->r[27]+0x00000644u,c->r[0]); // 80217C50
L_80217C54:;
  c->r[26]=c->r[26]+0x00000001u; // 80217C54
L_80217C58:;
  cmps(c,0,(int32_t)c->r[26],8); // 80217C58
  if (crb(c,0)) { IRQCHK(c); goto L_80217C34; } // 80217C5C
  c->r[28]=c->r[28]+0x00000001u; // 80217C60
L_80217C64:;
  cmps(c,0,(int32_t)c->r[28],4); // 80217C64
  if (crb(c,0)) { IRQCHK(c); goto L_80217C1C; } // 80217C68
  cmps(c,0,(int32_t)c->r[30],0); // 80217C6C
  if (crb(c,2)) { goto L_80217CE8; } // 80217C70
  c->lr=0x80217C78u; f_80323304(c); // 80217C74
  {uint32_t ea=c->r[2]+0xFFFFDCF0u; c->f[1]=c->ps1[1]=RF32(ea);} // 80217C78
  c->r[4]=0u+0x00000000u; // 80217C7C
  c->r[5]=0u+0x00000001u; // 80217C80
  c->r[3]=c->r[3]+0x00000628u; // 80217C84
  c->f[2]=c->f[1]; // 80217C88
  c->f[3]=c->f[1]; // 80217C8C
  c->f[4]=c->f[1]; // 80217C90
  c->lr=0x80217C98u; f_802A0888(c); // 80217C94
  c->r[0]=R8(c->r[29]+0x00000010u); // 80217C98
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80217C9C
  c->r[3]=c->r[29]+c->r[0]; // 80217CA0
  c->r[27]=R32(c->r[3]+0x00000014u); // 80217CA4
  cmps(c,0,(int32_t)c->r[27],0); // 80217CA8
  if (crb(c,2)) { goto L_80217CD4; } // 80217CAC
  c->r[30]=0u+0x00000000u; // 80217CB0
  W32(c->r[31]+0x00000024u,c->r[1]); // 80217CB4
  W8(c->r[31]+0x00000008u,c->r[30]); // 80217CB8
  c->lr=0x80217CC0u; f_8007AD40(c); // 80217CBC
  W32(c->r[27]+0x00000000u,c->r[3]); // 80217CC0
  c->r[0]=c->r[13]+0xFFFF821Cu; // 80217CC4
  W32(c->r[27]+0x00000004u,c->r[0]); // 80217CC8
  W32(c->r[27]+0x00000008u,c->r[30]); // 80217CCC
  W32(c->r[27]+0x0000000Cu,c->r[30]); // 80217CD0
L_80217CD4:;
  W32(c->r[29]+0x00000008u,c->r[27]); // 80217CD4
  c->r[0]=0u+0x00000000u; // 80217CD8
  W32(c->r[27]+0x00000008u,c->r[0]); // 80217CDC
  c->r[0]=R32(c->r[29]+0x00000004u); // 80217CE0
  W32(c->r[29]+0x0000000Cu,c->r[0]); // 80217CE4
L_80217CE8:;
  c->r[10]=c->r[31]|c->r[31]; // 80217CE8
  c->r[11]=c->r[10]+0x00000110u; // 80217CEC
  c->lr=0x80217CF4u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80217CF0
  c->r[10]=R32(c->r[1]+0x00000000u); // 80217CF4
  c->r[0]=R32(c->r[10]+0x00000004u); // 80217CF8
  c->r[1]=c->r[10]|c->r[10]; // 80217CFC
  c->lr=c->r[0]; // 80217D00
  return; // 80217D04
}

// fn_80217D08
void f_80217D08(Ctx* __restrict c) {
  trace_call(0x80217D08u);
  W8(c->r[3]+0x00000610u,c->r[4]); // 80217D08
  return; // 80217D0C
}

// fn_80217D10
void f_80217D10(Ctx* __restrict c) {
  trace_call(0x80217D10u);
  W8(c->r[3]+0x000003E5u,c->r[4]); // 80217D10
  return; // 80217D14
}

// fn_80217D18
void f_80217D18(Ctx* __restrict c) {
  trace_call(0x80217D18u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80217D18
  c->r[0]=c->lr; // 80217D1C
  W32(c->r[1]+0x00000014u,c->r[0]); // 80217D20
  c->r[0]=rotl(c->r[4],3)&0xFFFFFFF8u; // 80217D24
  c->r[3]=c->r[3]+c->r[0]; // 80217D28
  c->r[3]=c->r[3]+0x00000508u; // 80217D2C
  c->lr=0x80217D34u; f_8007ECBC(c); // 80217D30
  c->r[0]=R32(c->r[1]+0x00000014u); // 80217D34
  c->r[3]=R8(c->r[3]+0x00000416u); // 80217D38
  c->lr=c->r[0]; // 80217D3C
  c->r[1]=c->r[1]+0x00000010u; // 80217D40
  return; // 80217D44
}

// fn_80217D48
void f_80217D48(Ctx* __restrict c) {
  trace_call(0x80217D48u);
  c->r[0]=R32(c->r[3]+0x00000614u); // 80217D48
  c->r[3]=0u+0x00000002u; // 80217D4C
  cmps(c,0,(int32_t)c->r[0],3); // 80217D50
  if (crb(c,2)) return; // 80217D54
  c->r[3]=c->r[0]|c->r[0]; // 80217D58
  return; // 80217D5C
}

// fn_80217D60
void f_80217D60(Ctx* __restrict c) {
  trace_call(0x80217D60u);
  c->r[0]=R32(c->r[3]+0x00000614u); // 80217D60
  cmps(c,0,(int32_t)c->r[0],3); // 80217D64
  if (!crb(c,2)) { goto L_80217D78; } // 80217D68
  c->r[3]=R32(c->r[3]+0x00000618u); // 80217D6C
  c->r[3]=c->r[3]+0x00000005u; // 80217D70
  return; // 80217D74
L_80217D78:;
  c->r[3]=R32(c->r[3]+0x00000618u); // 80217D78
  return; // 80217D7C
}

// fn_80217D80
void f_80217D80(Ctx* __restrict c) {
  trace_call(0x80217D80u);
  c->r[3]=R32(c->r[3]+0x0000061Cu); // 80217D80
  return; // 80217D84
}

// fn_80217D88
void f_80217D88(Ctx* __restrict c) {
  trace_call(0x80217D88u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80217D88
  c->r[0]=c->lr; // 80217D8C
  W32(c->r[1]+0x00000024u,c->r[0]); // 80217D90
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=26;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 80217D94
  c->r[26]=c->r[3]|c->r[3]; // 80217D98
  c->r[27]=c->r[4]|c->r[4]; // 80217D9C
  c->r[29]=0u+0xFFFFFFFFu; // 80217DA0
  c->r[28]=0u+0x00000000u; // 80217DA4
  c->r[31]=0u+0x00000000u; // 80217DA8
L_80217DAC:;
  c->r[3]=c->r[26]+c->r[31]; // 80217DAC
  c->r[30]=c->r[3]+0x00000508u; // 80217DB0
  c->r[3]=c->r[30]|c->r[30]; // 80217DB4
  c->lr=0x80217DBCu; f_800655F4(c); // 80217DB8
  cmps(c,0,(int32_t)c->r[3],0); // 80217DBC
  if (crb(c,2)) { goto L_80217E04; } // 80217DC0
  c->r[3]=c->r[30]|c->r[30]; // 80217DC4
  c->lr=0x80217DCCu; f_8007ECBC(c); // 80217DC8
  c->r[0]=R8(c->r[3]+0x00000414u); // 80217DCC
  cmps(c,0,(int32_t)c->r[0],0); // 80217DD0
  if (crb(c,2)) { goto L_80217E04; } // 80217DD4
  c->r[3]=c->r[30]|c->r[30]; // 80217DD8
  c->lr=0x80217DE0u; f_8007ECBC(c); // 80217DDC
  c->r[0]=R32(c->r[3]+0x00000418u); // 80217DE0
  cmps(c,0,(int32_t)c->r[27],(int32_t)c->r[0]); // 80217DE4
  if (!crb(c,2)) { goto L_80217E04; } // 80217DE8
  c->r[3]=c->r[30]|c->r[30]; // 80217DEC
  c->lr=0x80217DF4u; f_8007ECBC(c); // 80217DF0
  c->r[0]=R8(c->r[3]+0x00000415u); // 80217DF4
  cmps(c,0,(int32_t)c->r[0],0); // 80217DF8
  if (crb(c,2)) { goto L_80217E04; } // 80217DFC
  c->r[29]=c->r[28]|c->r[28]; // 80217E00
L_80217E04:;
  c->r[28]=c->r[28]+0x00000001u; // 80217E04
  c->r[31]=c->r[31]+0x00000008u; // 80217E08
  cmps(c,0,(int32_t)c->r[28],2); // 80217E0C
  if (crb(c,0)) { IRQCHK(c); goto L_80217DAC; } // 80217E10
  c->r[3]=c->r[29]|c->r[29]; // 80217E14
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=26;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 80217E18
  c->r[0]=R32(c->r[1]+0x00000024u); // 80217E1C
  c->lr=c->r[0]; // 80217E20
  c->r[1]=c->r[1]+0x00000020u; // 80217E24
  return; // 80217E28
}

// fn_80217E2C
void f_80217E2C(Ctx* __restrict c) {
  trace_call(0x80217E2Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80217E2C
  c->r[0]=c->lr; // 80217E30
  W32(c->r[1]+0x00000034u,c->r[0]); // 80217E34
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=25;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 80217E38
  c->r[25]=c->r[3]|c->r[3]; // 80217E3C
  c->r[26]=c->r[4]|c->r[4]; // 80217E40
  c->r[29]=0u+0xFFFFFFFFu; // 80217E44
  c->r[28]=0u+0x00000000u; // 80217E48
  c->r[27]=0u+0x00000000u; // 80217E4C
  c->r[31]=0u+0x00000000u; // 80217E50
L_80217E54:;
  c->r[3]=c->r[25]+c->r[31]; // 80217E54
  c->r[30]=c->r[3]+0x000004A0u; // 80217E58
  c->r[3]=c->r[30]|c->r[30]; // 80217E5C
  c->lr=0x80217E64u; f_800655F4(c); // 80217E60
  cmps(c,0,(int32_t)c->r[3],0); // 80217E64
  if (crb(c,2)) { goto L_80217EB8; } // 80217E68
  c->r[3]=c->r[30]|c->r[30]; // 80217E6C
  c->lr=0x80217E74u; f_8007ECBC(c); // 80217E70
  c->r[0]=R8(c->r[3]+0x00000414u); // 80217E74
  cmps(c,0,(int32_t)c->r[0],0); // 80217E78
  if (crb(c,2)) { goto L_80217EB8; } // 80217E7C
  cmps(c,0,(int32_t)c->r[28],0); // 80217E80
  if (!crb(c,2)) { goto L_80217E94; } // 80217E84
  c->r[3]=c->r[30]|c->r[30]; // 80217E88
  c->lr=0x80217E90u; f_8007ECBC(c); // 80217E8C
  c->r[28]=R32(c->r[3]+0x00000424u); // 80217E90
L_80217E94:;
  c->r[3]=c->r[30]|c->r[30]; // 80217E94
  c->lr=0x80217E9Cu; f_8007ECBC(c); // 80217E98
  c->r[0]=R32(c->r[3]+0x00000424u); // 80217E9C
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[28]); // 80217EA0
  if (crb(c,1)) { goto L_80217EB8; } // 80217EA4
  c->r[3]=c->r[30]|c->r[30]; // 80217EA8
  c->lr=0x80217EB0u; f_8007ECBC(c); // 80217EAC
  c->r[28]=R32(c->r[3]+0x00000424u); // 80217EB0
  c->r[29]=c->r[27]|c->r[27]; // 80217EB4
L_80217EB8:;
  c->r[27]=c->r[27]+0x00000001u; // 80217EB8
  c->r[31]=c->r[31]+0x00000008u; // 80217EBC
  cmps(c,0,(int32_t)c->r[27],4); // 80217EC0
  if (crb(c,0)) { IRQCHK(c); goto L_80217E54; } // 80217EC4
  cmps(c,0,(int32_t)c->r[26],0); // 80217EC8
  if (!crb(c,2)) { goto L_80217EE0; } // 80217ECC
  cmps(c,0,(int32_t)c->r[29],3); // 80217ED0
  if (!crb(c,2)) { goto L_80217EE0; } // 80217ED4
  c->r[3]=0u+0x00000002u; // 80217ED8
  goto L_80217EE4; // 80217EDC
L_80217EE0:;
  c->r[3]=c->r[29]|c->r[29]; // 80217EE0
L_80217EE4:;
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=25;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 80217EE4
  c->r[0]=R32(c->r[1]+0x00000034u); // 80217EE8
  c->lr=c->r[0]; // 80217EEC
  c->r[1]=c->r[1]+0x00000030u; // 80217EF0
  return; // 80217EF4
}

// fn_80217EF8
void f_80217EF8(Ctx* __restrict c) {
  trace_call(0x80217EF8u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80217EF8
  c->r[0]=c->lr; // 80217EFC
  W32(c->r[1]+0x00000024u,c->r[0]); // 80217F00
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=26;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 80217F04
  c->r[26]=c->r[3]|c->r[3]; // 80217F08
  c->r[29]=0u+0xFFFFFFFFu; // 80217F0C
  c->r[28]=0u+0x00000000u; // 80217F10
  c->r[27]=0u+0x00000000u; // 80217F14
  c->r[31]=0u+0x00000000u; // 80217F18
L_80217F1C:;
  c->r[3]=c->r[26]+c->r[31]; // 80217F1C
  c->r[30]=c->r[3]+0x000004C0u; // 80217F20
  c->r[3]=c->r[30]|c->r[30]; // 80217F24
  c->lr=0x80217F2Cu; f_800655F4(c); // 80217F28
  cmps(c,0,(int32_t)c->r[3],0); // 80217F2C
  if (crb(c,2)) { goto L_80217F80; } // 80217F30
  c->r[3]=c->r[30]|c->r[30]; // 80217F34
  c->lr=0x80217F3Cu; f_8007ECBC(c); // 80217F38
  c->r[0]=R8(c->r[3]+0x00000414u); // 80217F3C
  cmps(c,0,(int32_t)c->r[0],0); // 80217F40
  if (crb(c,2)) { goto L_80217F80; } // 80217F44
  cmps(c,0,(int32_t)c->r[28],0); // 80217F48
  if (!crb(c,2)) { goto L_80217F5C; } // 80217F4C
  c->r[3]=c->r[30]|c->r[30]; // 80217F50
  c->lr=0x80217F58u; f_8007ECBC(c); // 80217F54
  c->r[28]=R32(c->r[3]+0x00000424u); // 80217F58
L_80217F5C:;
  c->r[3]=c->r[30]|c->r[30]; // 80217F5C
  c->lr=0x80217F64u; f_8007ECBC(c); // 80217F60
  c->r[0]=R32(c->r[3]+0x00000424u); // 80217F64
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[28]); // 80217F68
  if (crb(c,1)) { goto L_80217F80; } // 80217F6C
  c->r[3]=c->r[30]|c->r[30]; // 80217F70
  c->lr=0x80217F78u; f_8007ECBC(c); // 80217F74
  c->r[28]=R32(c->r[3]+0x00000424u); // 80217F78
  c->r[29]=c->r[27]|c->r[27]; // 80217F7C
L_80217F80:;
  c->r[27]=c->r[27]+0x00000001u; // 80217F80
  c->r[31]=c->r[31]+0x00000008u; // 80217F84
  cmps(c,0,(int32_t)c->r[27],8); // 80217F88
  if (crb(c,0)) { IRQCHK(c); goto L_80217F1C; } // 80217F8C
  c->r[0]=R32(c->r[26]+0x00000614u); // 80217F90
  cmps(c,0,(int32_t)c->r[0],3); // 80217F94
  if (!crb(c,2)) { goto L_80217FA8; } // 80217F98
  cmps(c,0,(int32_t)c->r[29],-1); // 80217F9C
  if (crb(c,2)) { goto L_80217FA8; } // 80217FA0
  c->r[29]=c->r[29]+0x00000005u; // 80217FA4
L_80217FA8:;
  c->r[3]=c->r[29]|c->r[29]; // 80217FA8
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=26;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 80217FAC
  c->r[0]=R32(c->r[1]+0x00000024u); // 80217FB0
  c->lr=c->r[0]; // 80217FB4
  c->r[1]=c->r[1]+0x00000020u; // 80217FB8
  return; // 80217FBC
}

// fn_80217FC0
void f_80217FC0(Ctx* __restrict c) {
  trace_call(0x80217FC0u);
  c->r[6]=0u+0x806E0000u; // 80217FC0
  c->r[5]=0u+0x00000000u; // 80217FC4
  c->r[4]=0u+0xFFFFFFFFu; // 80217FC8
  c->r[0]=0u+0x00000001u; // 80217FCC
  c->r[6]=c->r[6]+0x00006B18u; // 80217FD0
  W32(c->r[3]+0x00000138u,c->r[6]); // 80217FD4
  W32(c->r[3]+0x00000000u,c->r[5]); // 80217FD8
  W32(c->r[3]+0x00000124u,c->r[4]); // 80217FDC
  W32(c->r[3]+0x00000128u,c->r[4]); // 80217FE0
  W32(c->r[3]+0x0000012Cu,c->r[4]); // 80217FE4
  W8(c->r[3]+0x00000004u,c->r[0]); // 80217FE8
  W32(c->r[3]+0x00000008u,c->r[5]); // 80217FEC
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 80217FF0
  W8(c->r[3]+0x00000010u,c->r[5]); // 80217FF4
  W8(c->r[3]+0x00000011u,c->r[5]); // 80217FF8
  return; // 80217FFC
}

// fn_80218000
void f_80218000(Ctx* __restrict c) {
  trace_call(0x80218000u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80218000
  c->r[0]=c->lr; // 80218004
  W32(c->r[1]+0x00000034u,c->r[0]); // 80218008
  {uint32_t ea=c->r[1]+0x00000020u; for(int i=28;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 8021800C
  c->r[5]=R32(c->r[3]+0x00000000u); // 80218010
  c->r[3]=0u+0x00000000u; // 80218014
  c->r[0]=R8(c->r[5]+0x000003E5u); // 80218018
  cmps(c,0,(int32_t)c->r[0],0); // 8021801C
  if (crb(c,2)) { goto L_80218034; } // 80218020
  c->r[0]=R8(c->r[5]+0x000003E4u); // 80218024
  cmps(c,0,(int32_t)c->r[0],0); // 80218028
  if (!crb(c,2)) { goto L_80218034; } // 8021802C
  c->r[3]=0u+0x00000001u; // 80218030
L_80218034:;
  cmps(c,0,(int32_t)c->r[3],0); // 80218034
  if (!crb(c,2)) { goto L_80218044; } // 80218038
  c->r[3]=0u+0x00000000u; // 8021803C
  goto L_80218138; // 80218040
L_80218044:;
  cmps(c,0,(int32_t)c->r[4],1); // 80218044
  if (crb(c,2)) { goto L_80218054; } // 80218048
  c->r[3]=0u+0x00000000u; // 8021804C
  goto L_80218138; // 80218050
L_80218054:;
  c->r[29]=0u+0x00000000u; // 80218054
  W8(c->r[1]+0x00000018u,c->r[29]); // 80218058
  c->r[3]=c->r[1]+0x00000018u; // 8021805C
  c->lr=0x80218064u; f_80046D50(c); // 80218060
  c->lr=0x80218068u; f_8008CD00(c); // 80218064
  c->r[0]=cntlz(c->r[3]); // 80218068
  c->r[30]=rotl(c->r[0],27)&0x07FFFFFFu; // 8021806C
  c->lr=0x80218074u; f_80210E3C(c); // 80218070
  c->r[0]=(uint32_t)((int32_t)c->r[30]*(int32_t)120); // 80218074
  c->r[30]=0u+0x80740000u; // 80218078
  c->r[31]=R32(c->r[3]+0x0000000Cu); // 8021807C
  c->r[4]=0u+0x0000000Cu; // 80218080
  c->r[30]=c->r[30]+0x00004C10u; // 80218084
  c->r[3]=c->r[30]+c->r[0]; // 80218088
  c->lr=0x80218090u; f_80052BC8(c); // 8021808C
  c->r[0]=c->r[31]&c->r[3]; cr0(c,c->r[0]); // 80218090
  if (crb(c,2)) { goto L_80218134; } // 80218094
  W8(c->r[1]+0x00000010u,c->r[29]); // 80218098
  c->r[3]=c->r[1]+0x00000010u; // 8021809C
  c->lr=0x802180A4u; f_80046D50(c); // 802180A0
  c->lr=0x802180A8u; f_8008CD00(c); // 802180A4
  c->r[0]=cntlz(c->r[3]); // 802180A8
  c->r[31]=rotl(c->r[0],27)&0x07FFFFFFu; // 802180AC
  c->lr=0x802180B4u; f_80210E3C(c); // 802180B0
  c->r[28]=R32(c->r[3]+0x00000008u); // 802180B4
  c->r[3]=c->r[1]+0x00000014u; // 802180B8
  W8(c->r[1]+0x00000014u,c->r[29]); // 802180BC
  c->lr=0x802180C4u; f_80046D50(c); // 802180C0
  c->lr=0x802180C8u; f_8008CD00(c); // 802180C4
  c->r[0]=(uint32_t)((int32_t)c->r[31]*(int32_t)120); // 802180C8
  c->r[3]=cntlz(c->r[3]); // 802180CC
  c->r[4]=0u+0x0000000Cu; // 802180D0
  c->r[31]=rotl(c->r[3],27)&0x07FFFFFFu; // 802180D4
  c->r[3]=c->r[30]+c->r[0]; // 802180D8
  c->lr=0x802180E0u; f_80052BC8(c); // 802180DC
  c->r[0]=(uint32_t)((int32_t)c->r[31]*(int32_t)120); // 802180E0
  c->r[31]=c->r[28]&c->r[3]; // 802180E4
  c->r[4]=0u+0x0000000Cu; // 802180E8
  c->r[3]=c->r[30]+c->r[0]; // 802180EC
  c->lr=0x802180F4u; f_80052BC8(c); // 802180F0
  cmpu(c,0,c->r[3],c->r[31]); // 802180F4
  if (!crb(c,2)) { goto L_80218134; } // 802180F8
  W8(c->r[1]+0x00000008u,c->r[29]); // 802180FC
  c->r[3]=c->r[1]+0x00000008u; // 80218100
  c->r[28]=c->r[1]+0x0000000Cu; // 80218104
  W8(c->r[1]+0x0000000Cu,c->r[29]); // 80218108
  c->lr=0x80218110u; f_80046D50(c); // 8021810C
  c->lr=0x80218114u; f_8008CD10(c); // 80218110
  c->r[0]=cntlz(c->r[3]); // 80218114
  c->r[3]=c->r[28]|c->r[28]; // 80218118
  c->r[31]=rotl(c->r[0],27)&0x07FFFFFFu; // 8021811C
  c->lr=0x80218124u; f_80046D50(c); // 80218120
  c->r[4]=c->r[31]|c->r[31]; // 80218124
  c->lr=0x8021812Cu; f_8008CD08(c); // 80218128
  c->r[3]=0u+0x00000001u; // 8021812C
  goto L_80218138; // 80218130
L_80218134:;
  c->r[3]=0u+0x00000000u; // 80218134
L_80218138:;
  {uint32_t ea=c->r[1]+0x00000020u; for(int i=28;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 80218138
  c->r[0]=R32(c->r[1]+0x00000034u); // 8021813C
  c->lr=c->r[0]; // 80218140
  c->r[1]=c->r[1]+0x00000030u; // 80218144
  return; // 80218148
}

// fn_8021814C
void f_8021814C(Ctx* __restrict c) {
  trace_call(0x8021814Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8021814C
  c->r[0]=c->lr; // 80218150
  W32(c->r[1]+0x00000054u,c->r[0]); // 80218154
  c->r[11]=c->r[1]+0x00000050u; // 80218158
  c->lr=0x80218160u; { W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8021815C
  c->r[25]=c->r[3]|c->r[3]; // 80218160
  c->r[30]=0u+0x806A0000u; // 80218164
  c->r[31]=c->r[25]|c->r[25]; // 80218168
  c->r[29]=c->r[25]|c->r[25]; // 8021816C
  c->r[26]=c->r[25]|c->r[25]; // 80218170
  c->r[28]=c->r[25]|c->r[25]; // 80218174
  c->r[30]=c->r[30]+0xFFFF8BF8u; // 80218178
  c->lr=0x80218180u; f_80218E84(c); // 8021817C
  c->r[4]=0u+0x806D0000u; // 80218180
  c->r[27]=addc(c,c->r[25],0x00000020u,0); cr0(c,c->r[27]); // 80218184
  c->r[0]=0u+0x00000000u; // 80218188
  W32(c->r[25]+0x00000000u,c->r[3]); // 8021818C
  c->r[4]=c->r[4]+0x000038C0u; // 80218190
  W32(c->r[25]+0x0000001Cu,c->r[4]); // 80218194
  W32(c->r[25]+0x00000004u,c->r[0]); // 80218198
  W32(c->r[25]+0x00000008u,c->r[0]); // 8021819C
  W32(c->r[25]+0x0000000Cu,c->r[0]); // 802181A0
  W8(c->r[25]+0x00000010u,c->r[0]); // 802181A4
  W32(c->r[25]+0x00000014u,c->r[0]); // 802181A8
  W32(c->r[25]+0x00000018u,c->r[0]); // 802181AC
  W32(c->r[25]+0x00000020u,c->r[0]); // 802181B0
  W32(c->r[25]+0x00000024u,c->r[0]); // 802181B4
  if (crb(c,2)) { goto L_802181C0; } // 802181B8
  c->r[27]=c->r[27]+0xFFFFFFE0u; // 802181BC
L_802181C0:;
  c->lr=0x802181C4u; f_800797AC(c); // 802181C0
  c->r[0]=R32(c->r[3]+0x00000000u); // 802181C4
  c->r[0]=addc(c,c->r[0],0x00000001u,0); cr0(c,c->r[0]); // 802181C8
  W32(c->r[3]+0x00000000u,c->r[0]); // 802181CC
  if (!crb(c,2)) { goto L_802181DC; } // 802181D0
  c->r[0]=0u+0x00000001u; // 802181D4
  W32(c->r[3]+0x00000000u,c->r[0]); // 802181D8
L_802181DC:;
  c->r[7]=R32(c->r[3]+0x00000004u); // 802181DC
  c->r[5]=0u+0x0000012Cu; // 802181E0
  c->r[4]=c->r[7]+0x00000001u; // 802181E4
  c->r[0]=divwu(c->r[4],c->r[5]); // 802181E8
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)c->r[5]); // 802181EC
  c->r[6]=c->r[4]-c->r[0]; // 802181F0
  goto L_80218240; // 802181F4
L_802181F8:;
  c->r[0]=rotl(c->r[6],3)&0xFFFFFFF8u; // 802181F8
  c->r[4]=c->r[3]+c->r[0]; // 802181FC
  c->r[0]=R32(c->r[4]+0x00000008u); // 80218200
  cmps(c,0,(int32_t)c->r[0],0); // 80218204
  if (!crb(c,2)) { goto L_80218230; } // 80218208
  W32(c->r[3]+0x00000004u,c->r[6]); // 8021820C
  c->r[0]=R32(c->r[3]+0x00000000u); // 80218210
  W32(c->r[4]+0x00000008u,c->r[0]); // 80218214
  W32(c->r[4]+0x0000000Cu,c->r[27]); // 80218218
  c->r[4]=R32(c->r[3]+0x00000000u); // 8021821C
  c->r[0]=R32(c->r[3]+0x00000004u); // 80218220
  W32(c->r[1]+0x00000010u,c->r[4]); // 80218224
  W32(c->r[1]+0x00000014u,c->r[0]); // 80218228
  goto L_8021825C; // 8021822C
L_80218230:;
  c->r[4]=c->r[6]+0x00000001u; // 80218230
  c->r[0]=divwu(c->r[4],c->r[5]); // 80218234
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)c->r[5]); // 80218238
  c->r[6]=c->r[4]-c->r[0]; // 8021823C
L_80218240:;
  cmpu(c,0,c->r[6],c->r[7]); // 80218240
  if (!crb(c,2)) { IRQCHK(c); goto L_802181F8; } // 80218244
  c->r[0]=0u+0x00000000u; // 80218248
  W32(c->r[1]+0x00000008u,c->r[0]); // 8021824C
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 80218250
  W32(c->r[1]+0x00000010u,c->r[0]); // 80218254
  W32(c->r[1]+0x00000014u,c->r[0]); // 80218258
L_8021825C:;
  c->r[4]=R32(c->r[1]+0x00000010u); // 8021825C
  c->r[23]=c->r[25]+0x00000028u; // 80218260
  c->r[0]=R32(c->r[1]+0x00000014u); // 80218264
  c->r[3]=c->r[23]|c->r[23]; // 80218268
  W32(c->r[1]+0x00000018u,c->r[4]); // 8021826C
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 80218270
  W32(c->r[25]+0x00000020u,c->r[4]); // 80218274
  W32(c->r[25]+0x00000024u,c->r[0]); // 80218278
  c->lr=0x80218280u; f_800506C0(c); // 8021827C
  cmps(c,0,(int32_t)c->r[23],0); // 80218280
  c->r[3]=c->r[23]|c->r[23]; // 80218284
  if (crb(c,2)) { goto L_80218290; } // 80218288
  c->r[3]=c->r[23]+0xFFFFFFD8u; // 8021828C
L_80218290:;
  c->r[27]=0u+0x00000001u; // 80218290
  W32(c->r[23]+0x00000008u,c->r[3]); // 80218294
  W8(c->r[23]+0x0000000Cu,c->r[27]); // 80218298
  c->r[0]=R8(c->r[13]+0xFFFFBE09u); // 8021829C
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 802182A0
  if (!crb(c,2)) { goto L_802182E4; } // 802182A4
  c->r[24]=0u+0x80740000u; // 802182A8
  c->r[3]=c->r[24]+0x000074BCu; // 802182AC
  c->lr=0x802182B4u; f_800506C0(c); // 802182B0
  c->r[6]=0u+0x806D0000u; // 802182B4
  c->r[4]=0u+0x80060000u; // 802182B8
  c->r[6]=c->r[6]+0xFFFFE3A0u; // 802182BC
  c->r[3]=c->r[24]+0x000074BCu; // 802182C0
  c->r[0]=c->r[6]+0x00000008u; // 802182C4
  c->r[5]=0u+0x80750000u; // 802182C8
  W32(c->r[3]+0x00000010u,c->r[6]); // 802182CC
  c->r[4]=c->r[4]+0x000057D4u; // 802182D0
  c->r[5]=c->r[5]+0x00005450u; // 802182D4
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 802182D8
  c->lr=0x802182E0u; f_803A92B8(c); // 802182DC
  W8(c->r[13]+0xFFFFBE09u,c->r[27]); // 802182E0
L_802182E4:;
  c->r[3]=0u+0x80740000u; // 802182E4
  c->r[5]=c->r[23]|c->r[23]; // 802182E8
  c->r[3]=c->r[3]+0x000074BCu; // 802182EC
  c->r[4]=c->r[3]|c->r[3]; // 802182F0
  c->lr=0x802182F8u; f_802DDCA8(c); // 802182F4
  c->r[24]=c->r[25]+0x00000038u; // 802182F8
  c->r[3]=c->r[24]|c->r[24]; // 802182FC
  c->lr=0x80218304u; f_800506C0(c); // 80218300
  cmps(c,0,(int32_t)c->r[24],0); // 80218304
  c->r[0]=c->r[24]|c->r[24]; // 80218308
  if (crb(c,2)) { goto L_80218314; } // 8021830C
  c->r[0]=c->r[24]+0xFFFFFFC8u; // 80218310
L_80218314:;
  c->r[27]=c->r[25]+0x00000044u; // 80218314
  W32(c->r[24]+0x00000008u,c->r[0]); // 80218318
  c->r[3]=c->r[27]|c->r[27]; // 8021831C
  c->lr=0x80218324u; f_800506C0(c); // 80218320
  cmps(c,0,(int32_t)c->r[27],0); // 80218324
  c->r[0]=c->r[27]|c->r[27]; // 80218328
  if (crb(c,2)) { goto L_80218334; } // 8021832C
  c->r[0]=c->r[27]+0xFFFFFFBCu; // 80218330
L_80218334:;
  c->r[3]=0u+0x806F0000u; // 80218334
  c->r[24]=0u+0x00000000u; // 80218338
  c->r[3]=c->r[3]+0x00000E80u; // 8021833C
  W32(c->r[27]+0x00000008u,c->r[0]); // 80218340
  W8(c->r[27]+0x0000000Cu,c->r[24]); // 80218344
  W32(c->r[25]+0x0000001Cu,c->r[3]); // 80218348
  W32(c->r[25]+0x00000058u,c->r[24]); // 8021834C
  W32(c->r[25]+0x00000064u,c->r[24]); // 80218350
  c->lr=0x80218358u; f_8007BDCC(c); // 80218354
  c->r[0]=c->r[13]+0xFFFF8114u; // 80218358
  W32(c->r[25]+0x0000009Cu,c->r[3]); // 8021835C
  W32(c->r[25]+0x000000A0u,c->r[0]); // 80218360
  W32(c->r[25]+0x000000A4u,c->r[24]); // 80218364
  c->r[0]=R8(c->r[13]+0xFFFFBE54u); // 80218368
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 8021836C
  if (!crb(c,2)) { goto L_80218390; } // 80218370
  c->r[4]=R32(c->r[13]+0xFFFFBCC4u); // 80218374
  c->r[0]=0u+0x00000001u; // 80218378
  W32(c->r[13]+0xFFFFBDF8u,c->r[4]); // 8021837C
  c->r[3]=c->r[4]+0x00000001u; // 80218380
  W32(c->r[13]+0xFFFFBCC4u,c->r[3]); // 80218384
  W32(c->r[13]+0xFFFFBE50u,c->r[4]); // 80218388
  W8(c->r[13]+0xFFFFBE54u,c->r[0]); // 8021838C
L_80218390:;
  c->r[4]=R32(c->r[13]+0xFFFFBE50u); // 80218390
  c->r[3]=c->r[13]+0xFFFF8110u; // 80218394
  c->r[0]=0u+0x00000000u; // 80218398
  W32(c->r[25]+0x000000A8u,c->r[4]); // 8021839C
  W32(c->r[25]+0x000000ACu,c->r[3]); // 802183A0
  W32(c->r[25]+0x000000B0u,c->r[0]); // 802183A4
  c->r[0]=R8(c->r[13]+0xFFFFBE5Cu); // 802183A8
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 802183AC
  if (!crb(c,2)) { goto L_802183D0; } // 802183B0
  c->r[4]=R32(c->r[13]+0xFFFFBCC4u); // 802183B4
  c->r[0]=0u+0x00000001u; // 802183B8
  W32(c->r[13]+0xFFFFBDF8u,c->r[4]); // 802183BC
  c->r[3]=c->r[4]+0x00000001u; // 802183C0
  W32(c->r[13]+0xFFFFBCC4u,c->r[3]); // 802183C4
  W32(c->r[13]+0xFFFFBE58u,c->r[4]); // 802183C8
  W8(c->r[13]+0xFFFFBE5Cu,c->r[0]); // 802183CC
L_802183D0:;
  c->r[4]=R32(c->r[13]+0xFFFFBE58u); // 802183D0
  c->r[3]=c->r[13]+0xFFFF810Cu; // 802183D4
  c->r[0]=0u+0x00000000u; // 802183D8
  W32(c->r[25]+0x000000B4u,c->r[4]); // 802183DC
  W32(c->r[25]+0x000000B8u,c->r[3]); // 802183E0
  W32(c->r[25]+0x000000BCu,c->r[0]); // 802183E4
  c->r[0]=R8(c->r[13]+0xFFFFBE64u); // 802183E8
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 802183EC
  if (!crb(c,2)) { goto L_80218410; } // 802183F0
  c->r[4]=R32(c->r[13]+0xFFFFBCC4u); // 802183F4
  c->r[0]=0u+0x00000001u; // 802183F8
  W32(c->r[13]+0xFFFFBDF8u,c->r[4]); // 802183FC
  c->r[3]=c->r[4]+0x00000001u; // 80218400
  W32(c->r[13]+0xFFFFBCC4u,c->r[3]); // 80218404
  W32(c->r[13]+0xFFFFBE60u,c->r[4]); // 80218408
  W8(c->r[13]+0xFFFFBE64u,c->r[0]); // 8021840C
L_80218410:;
  c->r[4]=R32(c->r[13]+0xFFFFBE60u); // 80218410
  c->r[3]=c->r[13]+0xFFFF8108u; // 80218414
  c->r[0]=0u+0x00000000u; // 80218418
  W32(c->r[25]+0x000000C0u,c->r[4]); // 8021841C
  W32(c->r[25]+0x000000C4u,c->r[3]); // 80218420
  W32(c->r[25]+0x000000C8u,c->r[0]); // 80218424
  c->r[0]=R8(c->r[13]+0xFFFFBE6Cu); // 80218428
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 8021842C
  if (!crb(c,2)) { goto L_80218450; } // 80218430
  c->r[4]=R32(c->r[13]+0xFFFFBCC4u); // 80218434
  c->r[0]=0u+0x00000001u; // 80218438
  W32(c->r[13]+0xFFFFBDF8u,c->r[4]); // 8021843C
  c->r[3]=c->r[4]+0x00000001u; // 80218440
  W32(c->r[13]+0xFFFFBCC4u,c->r[3]); // 80218444
  W32(c->r[13]+0xFFFFBE68u,c->r[4]); // 80218448
  W8(c->r[13]+0xFFFFBE6Cu,c->r[0]); // 8021844C
L_80218450:;
  c->r[3]=R32(c->r[13]+0xFFFFBE68u); // 80218450
  c->r[0]=c->r[13]+0xFFFF8104u; // 80218454
  c->r[24]=0u+0x00000000u; // 80218458
  W32(c->r[25]+0x000000CCu,c->r[3]); // 8021845C
  c->r[3]=c->r[25]+0x000000D8u; // 80218460
  W32(c->r[25]+0x000000D0u,c->r[0]); // 80218464
  W32(c->r[25]+0x000000D4u,c->r[24]); // 80218468
  c->lr=0x80218470u; f_800506C0(c); // 8021846C
  c->r[4]=0u+0x806F0000u; // 80218470
  c->r[3]=0u+0x00000006u; // 80218474
  c->r[4]=c->r[4]+0x000007A0u; // 80218478
  c->r[27]=c->r[25]+0x000000FCu; // 8021847C
  c->r[0]=c->r[4]+0x00000024u; // 80218480
  W32(c->r[25]+0x000000E8u,c->r[3]); // 80218484
  c->r[3]=c->r[27]+0x0000000Cu; // 80218488
  W32(c->r[25]+0x000000ECu,c->r[24]); // 8021848C
  W32(c->r[25]+0x000000F8u,c->r[24]); // 80218490
  W32(c->r[25]+0x000000FCu,c->r[4]); // 80218494
  W32(c->r[25]+0x00000100u,c->r[0]); // 80218498
  c->lr=0x802184A0u; f_800506C0(c); // 8021849C
  c->r[3]=c->r[27]+0x00000018u; // 802184A0
  c->lr=0x802184A8u; f_800506C0(c); // 802184A4
  W32(c->r[27]+0x00000024u,c->r[24]); // 802184A8
  c->r[3]=c->r[27]+0x000000B0u; // 802184AC
  c->lr=0x802184B4u; f_800506C0(c); // 802184B0
  c->r[12]=R32(c->r[27]+0x00000000u); // 802184B4
  c->r[3]=c->r[27]|c->r[27]; // 802184B8
  c->r[12]=R32(c->r[12]+0x0000003Cu); // 802184BC
  c->ctr=c->r[12]; // 802184C0
  if (true) { c->lr=0x802184C8u; dispatch(c,c->ctr); } // 802184C4
  c->r[0]=R8(c->r[13]+0xFFFFBE74u); // 802184C8
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 802184CC
  if (!crb(c,2)) { goto L_802184EC; } // 802184D0
  c->r[3]=R32(c->r[13]+0xFFFFBE78u); // 802184D4
  c->r[0]=0u+0x00000001u; // 802184D8
  W32(c->r[13]+0xFFFFBE70u,c->r[3]); // 802184DC
  c->r[3]=c->r[3]+0x00000001u; // 802184E0
  W32(c->r[13]+0xFFFFBE78u,c->r[3]); // 802184E4
  W8(c->r[13]+0xFFFFBE74u,c->r[0]); // 802184E8
L_802184EC:;
  c->r[3]=R32(c->r[13]+0xFFFFBE70u); // 802184EC
  c->r[5]=0u+0x806F0000u; // 802184F0
  c->r[5]=c->r[5]+0x000007F8u; // 802184F4
  c->r[0]=0u+0x00000032u; // 802184F8
  c->r[4]=c->r[5]+0x00000024u; // 802184FC
  W32(c->r[27]+0x00000008u,c->r[3]); // 80218500
  c->r[6]=0u+0x00000000u; // 80218504
  c->r[3]=0u+0x00000000u; // 80218508
  W32(c->r[27]+0x00000000u,c->r[5]); // 8021850C
  W32(c->r[27]+0x00000004u,c->r[4]); // 80218510
  c->ctr=c->r[0]; // 80218514
L_80218518:;
  c->r[4]=c->r[27]+c->r[3]; // 80218518
  c->r[3]=c->r[3]+0x00000004u; // 8021851C
  W32(c->r[4]+0x0000014Cu,c->r[6]); // 80218520
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80218518; } // 80218524
  c->r[3]=0u+0x806D0000u; // 80218528
  c->r[7]=0u+0x00000000u; // 8021852C
  c->r[3]=c->r[3]+0x00003868u; // 80218530
  c->r[0]=0u+0x0000000Au; // 80218534
  c->r[4]=c->r[3]+0x00000024u; // 80218538
  W32(c->r[27]+0x00000000u,c->r[3]); // 8021853C
  c->r[8]=0u+0x00000000u; // 80218540
  c->r[3]=0u+0x00000000u; // 80218544
  W32(c->r[27]+0x00000004u,c->r[4]); // 80218548
  c->r[6]=0u+0xFFFFFFFFu; // 8021854C
  W32(c->r[25]+0x00000314u,c->r[7]); // 80218550
  W8(c->r[25]+0x0000005Cu,c->r[7]); // 80218554
  W32(c->r[25]+0x00000054u,c->r[7]); // 80218558
  W32(c->r[25]+0x00000310u,c->r[25]); // 8021855C
  c->ctr=c->r[0]; // 80218560
L_80218564:;
  c->r[5]=c->r[25]+c->r[3]; // 80218564
  c->r[4]=c->r[25]+c->r[8]; // 80218568
  W32(c->r[5]+0x00000068u,c->r[6]); // 8021856C
  c->r[8]=c->r[8]+0x00000001u; // 80218570
  c->r[3]=c->r[3]+0x00000004u; // 80218574
  W8(c->r[4]+0x00000090u,c->r[7]); // 80218578
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80218564; } // 8021857C
  c->r[23]=c->r[25]+0x00000318u; // 80218580
  c->r[3]=c->r[23]|c->r[23]; // 80218584
  c->lr=0x8021858Cu; f_800506C0(c); // 80218588
  cmps(c,0,(int32_t)c->r[23],0); // 8021858C
  c->r[3]=c->r[23]|c->r[23]; // 80218590
  if (crb(c,2)) { goto L_8021859C; } // 80218594
  c->r[3]=c->r[23]+0xFFFFFCE8u; // 80218598
L_8021859C:;
  c->r[28]=0u+0x00000001u; // 8021859C
  W32(c->r[23]+0x00000008u,c->r[3]); // 802185A0
  W8(c->r[23]+0x0000000Cu,c->r[28]); // 802185A4
  c->r[0]=R8(c->r[13]+0xFFFFBE9Eu); // 802185A8
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 802185AC
  if (!crb(c,2)) { goto L_802185F0; } // 802185B0
  c->r[27]=0u+0x80750000u; // 802185B4
  c->r[3]=c->r[27]+0xFFFF816Cu; // 802185B8
  c->lr=0x802185C0u; f_800506C0(c); // 802185BC
  c->r[6]=0u+0x806D0000u; // 802185C0
  c->r[4]=0u+0x80080000u; // 802185C4
  c->r[6]=c->r[6]+0x000038D8u; // 802185C8
  c->r[3]=c->r[27]+0xFFFF816Cu; // 802185CC
  c->r[0]=c->r[6]+0x00000008u; // 802185D0
  c->r[5]=0u+0x80750000u; // 802185D4
  W32(c->r[3]+0x00000010u,c->r[6]); // 802185D8
  c->r[4]=c->r[4]+0xFFFF9844u; // 802185DC
  c->r[5]=c->r[5]+0x00005444u; // 802185E0
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 802185E4
  c->lr=0x802185ECu; f_803A92B8(c); // 802185E8
  W8(c->r[13]+0xFFFFBE9Eu,c->r[28]); // 802185EC
L_802185F0:;
  c->r[3]=0u+0x80750000u; // 802185F0
  c->r[5]=c->r[23]|c->r[23]; // 802185F4
  c->r[3]=c->r[3]+0xFFFF816Cu; // 802185F8
  c->r[4]=c->r[3]|c->r[3]; // 802185FC
  c->lr=0x80218604u; f_802DDCA8(c); // 80218600
  c->r[3]=0u+0x806D0000u; // 80218604
  c->r[0]=0u+0x00000000u; // 80218608
  c->r[3]=c->r[3]+0xFFFFD974u; // 8021860C
  c->r[5]=0u+0xFFFFFFFFu; // 80218610
  c->r[4]=0u+0x00000001u; // 80218614
  c->r[24]=c->r[25]+0x0000032Cu; // 80218618
  W32(c->r[25]+0x0000001Cu,c->r[3]); // 8021861C
  c->r[3]=c->r[24]|c->r[24]; // 80218620
  W32(c->r[25]+0x00000328u,c->r[5]); // 80218624
  W32(c->r[25]+0x000000ECu,c->r[4]); // 80218628
  W32(c->r[25]+0x00000054u,c->r[0]); // 8021862C
  W32(c->r[25]+0x00000314u,c->r[0]); // 80218630
  c->lr=0x80218638u; f_800506C0(c); // 80218634
  cmps(c,0,(int32_t)c->r[24],0); // 80218638
  c->r[3]=c->r[24]|c->r[24]; // 8021863C
  if (crb(c,2)) { goto L_80218648; } // 80218640
  c->r[3]=c->r[24]+0xFFFFFCD4u; // 80218644
L_80218648:;
  c->r[27]=0u+0x00000001u; // 80218648
  W32(c->r[24]+0x00000008u,c->r[3]); // 8021864C
  W8(c->r[24]+0x0000000Cu,c->r[27]); // 80218650
  c->r[0]=R8(c->r[13]+0xFFFFBBA9u); // 80218654
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 80218658
  if (!crb(c,2)) { goto L_8021869C; } // 8021865C
  c->r[26]=0u+0x80730000u; // 80218660
  c->r[3]=c->r[26]+0x000073A8u; // 80218664
  c->lr=0x8021866Cu; f_800506C0(c); // 80218668
  c->r[6]=0u+0x806D0000u; // 8021866C
  c->r[4]=0u+0x80050000u; // 80218670
  c->r[6]=c->r[6]+0xFFFFC8C8u; // 80218674
  c->r[3]=c->r[26]+0x000073A8u; // 80218678
  c->r[0]=c->r[6]+0x00000008u; // 8021867C
  c->r[5]=0u+0x80750000u; // 80218680
  W32(c->r[3]+0x00000010u,c->r[6]); // 80218684
  c->r[4]=c->r[4]+0xFFFFCF9Cu; // 80218688
  c->r[5]=c->r[5]+0x00005438u; // 8021868C
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 80218690
  c->lr=0x80218698u; f_803A92B8(c); // 80218694
  W8(c->r[13]+0xFFFFBBA9u,c->r[27]); // 80218698
L_8021869C:;
  c->r[3]=0u+0x80730000u; // 8021869C
  c->r[5]=c->r[24]|c->r[24]; // 802186A0
  c->r[3]=c->r[3]+0x000073A8u; // 802186A4
  c->r[4]=c->r[3]|c->r[3]; // 802186A8
  c->lr=0x802186B0u; f_802DDCA8(c); // 802186AC
  c->r[24]=c->r[25]+0x0000033Cu; // 802186B0
  c->r[3]=c->r[24]|c->r[24]; // 802186B4
  c->lr=0x802186BCu; f_800506C0(c); // 802186B8
  cmps(c,0,(int32_t)c->r[24],0); // 802186BC
  c->r[3]=c->r[24]|c->r[24]; // 802186C0
  if (crb(c,2)) { goto L_802186CC; } // 802186C4
  c->r[3]=c->r[24]+0xFFFFFCC4u; // 802186C8
L_802186CC:;
  c->r[27]=0u+0x00000001u; // 802186CC
  W32(c->r[24]+0x00000008u,c->r[3]); // 802186D0
  W8(c->r[24]+0x0000000Cu,c->r[27]); // 802186D4
  c->r[0]=R8(c->r[13]+0xFFFFBE9Du); // 802186D8
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 802186DC
  if (!crb(c,2)) { goto L_80218720; } // 802186E0
  c->r[26]=0u+0x80750000u; // 802186E4
  c->r[3]=c->r[26]+0xFFFF8158u; // 802186E8
  c->lr=0x802186F0u; f_800506C0(c); // 802186EC
  c->r[6]=0u+0x806D0000u; // 802186F0
  c->r[4]=0u+0x80080000u; // 802186F4
  c->r[6]=c->r[6]+0x000038F0u; // 802186F8
  c->r[3]=c->r[26]+0xFFFF8158u; // 802186FC
  c->r[0]=c->r[6]+0x00000008u; // 80218700
  c->r[5]=0u+0x80750000u; // 80218704
  W32(c->r[3]+0x00000010u,c->r[6]); // 80218708
  c->r[4]=c->r[4]+0xFFFF98C0u; // 8021870C
  c->r[5]=c->r[5]+0x0000542Cu; // 80218710
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 80218714
  c->lr=0x8021871Cu; f_803A92B8(c); // 80218718
  W8(c->r[13]+0xFFFFBE9Du,c->r[27]); // 8021871C
L_80218720:;
  c->r[3]=0u+0x80750000u; // 80218720
  c->r[5]=c->r[24]|c->r[24]; // 80218724
  c->r[3]=c->r[3]+0xFFFF8158u; // 80218728
  c->r[4]=c->r[3]|c->r[3]; // 8021872C
  c->lr=0x80218734u; f_802DDCA8(c); // 80218730
  c->r[3]=0u+0x806D0000u; // 80218734
  W32(c->r[25]+0x00000054u,c->r[30]); // 80218738
  c->r[3]=c->r[3]+0x00004AE8u; // 8021873C
  W32(c->r[25]+0x0000001Cu,c->r[3]); // 80218740
  c->r[0]=R8(c->r[13]+0xFFFFBC60u); // 80218744
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 80218748
  if (!crb(c,2)) { goto L_80218768; } // 8021874C
  c->r[3]=R32(c->r[13]+0xFFFFBC48u); // 80218750
  c->r[0]=0u+0x00000001u; // 80218754
  W32(c->r[13]+0xFFFFBC5Cu,c->r[3]); // 80218758
  c->r[3]=c->r[3]+0x00000001u; // 8021875C
  W32(c->r[13]+0xFFFFBC48u,c->r[3]); // 80218760
  W8(c->r[13]+0xFFFFBC60u,c->r[0]); // 80218764
L_80218768:;
  c->r[0]=R32(c->r[13]+0xFFFFBC5Cu); // 80218768
  W32(c->r[25]+0x00000328u,c->r[0]); // 8021876C
  c->r[0]=R8(c->r[13]+0xFFFFD46Cu); // 80218770
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 80218774
  if (!crb(c,2)) { goto L_80218794; } // 80218778
  c->r[3]=R32(c->r[13]+0xFFFFBDACu); // 8021877C
  c->r[0]=0u+0x00000001u; // 80218780
  W32(c->r[13]+0xFFFFD468u,c->r[3]); // 80218784
  c->r[3]=c->r[3]+0x00000001u; // 80218788
  W32(c->r[13]+0xFFFFBDACu,c->r[3]); // 8021878C
  W8(c->r[13]+0xFFFFD46Cu,c->r[0]); // 80218790
L_80218794:;
  c->r[0]=R32(c->r[13]+0xFFFFD468u); // 80218794
  W32(c->r[25]+0x0000034Cu,c->r[0]); // 80218798
  c->r[0]=R8(c->r[13]+0xFFFFCD04u); // 8021879C
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 802187A0
  if (!crb(c,2)) { goto L_802187C0; } // 802187A4
  c->r[3]=R32(c->r[13]+0xFFFFBF90u); // 802187A8
  c->r[0]=0u+0x00000001u; // 802187AC
  W32(c->r[13]+0xFFFFCD00u,c->r[3]); // 802187B0
  c->r[3]=c->r[3]+0x00000001u; // 802187B4
  W32(c->r[13]+0xFFFFBF90u,c->r[3]); // 802187B8
  W8(c->r[13]+0xFFFFCD04u,c->r[0]); // 802187BC
L_802187C0:;
  c->r[0]=R32(c->r[13]+0xFFFFCD00u); // 802187C0
  c->r[5]=0u+0x806D0000u; // 802187C4
  c->r[5]=c->r[5]+0xFFFFE468u; // 802187C8
  W32(c->r[25]+0x00000350u,c->r[0]); // 802187CC
  c->r[3]=c->r[25]+0x000003B0u; // 802187D0
  c->r[4]=0u+0x00000000u; // 802187D4
  W32(c->r[25]+0x00000400u,c->r[5]); // 802187D8
  c->r[5]=0u+0x00000050u; // 802187DC
  c->lr=0x802187E4u; f_800043EC(c); // 802187E0
  c->r[4]=0u+0x806D0000u; // 802187E4
  c->r[3]=c->r[25]+0x00000450u; // 802187E8
  c->r[4]=c->r[4]+0xFFFFE170u; // 802187EC
  W32(c->r[25]+0x0000001Cu,c->r[4]); // 802187F0
  c->r[0]=c->r[4]+0x00000044u; // 802187F4
  W32(c->r[25]+0x00000400u,c->r[0]); // 802187F8
  c->lr=0x80218800u; f_8007BDFC(c); // 802187FC
  c->r[3]=c->r[25]+0x000004C4u; // 80218800
  c->lr=0x80218808u; f_8007BDFC(c); // 80218804
  c->r[3]=c->r[25]+0x00000538u; // 80218808
  c->r[4]=0u+0x00000000u; // 8021880C
  c->r[5]=0u+0x00000008u; // 80218810
  c->lr=0x80218818u; f_800043EC(c); // 80218814
  c->r[23]=R32(c->r[13]+0xFFFFDBDCu); // 80218818
  cmps(c,0,(int32_t)c->r[23],0); // 8021881C
  if (crb(c,2)) { goto L_80218864; } // 80218820
  c->lr=0x80218828u; f_80218E84(c); // 80218824
  c->r[26]=c->r[3]|c->r[3]; // 80218828
  c->lr=0x80218830u; f_8007BDCC(c); // 8021882C
  c->r[4]=(uint32_t)((int32_t)c->r[26]*(int32_t)80); // 80218830
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 80218834
  c->r[5]=0u+0x80220000u; // 80218838
  c->r[3]=rotl(c->r[26],2)&0xFFFFFFFCu; // 8021883C
  c->r[4]=c->r[23]+c->r[4]; // 80218840
  c->r[5]=c->r[5]+0xFFFF8F18u; // 80218844
  c->r[4]=c->r[4]+c->r[0]; // 80218848
  W32(c->r[4]+0x000001CCu,c->r[5]); // 8021884C
  c->r[0]=R32(c->r[23]+c->r[3]); // 80218850
  cmpu(c,0,c->r[0],0x0000000Cu); // 80218854
  if (!crb(c,0)) { goto L_80218864; } // 80218858
  c->r[0]=0u+0x0000000Cu; // 8021885C
  W32(c->r[23]+c->r[3],c->r[0]); // 80218860
L_80218864:;
  c->r[26]=R32(c->r[13]+0xFFFFDBDCu); // 80218864
  cmps(c,0,(int32_t)c->r[26],0); // 80218868
  if (crb(c,2)) { goto L_802188D4; } // 8021886C
  c->lr=0x80218874u; f_80218E84(c); // 80218870
  c->r[0]=R8(c->r[13]+0xFFFFBEACu); // 80218874
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 80218878
  if (!crb(c,2)) { goto L_8021889C; } // 8021887C
  c->r[5]=R32(c->r[13]+0xFFFFBCC4u); // 80218880
  c->r[0]=0u+0x00000001u; // 80218884
  W32(c->r[13]+0xFFFFBDF8u,c->r[5]); // 80218888
  c->r[4]=c->r[5]+0x00000001u; // 8021888C
  W32(c->r[13]+0xFFFFBCC4u,c->r[4]); // 80218890
  W32(c->r[13]+0xFFFFBEA8u,c->r[5]); // 80218894
  W8(c->r[13]+0xFFFFBEACu,c->r[0]); // 80218898
L_8021889C:;
  c->r[4]=(uint32_t)((int32_t)c->r[3]*(int32_t)80); // 8021889C
  c->r[0]=R32(c->r[13]+0xFFFFBEA8u); // 802188A0
  c->r[5]=0u+0x80220000u; // 802188A4
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 802188A8
  c->r[4]=c->r[26]+c->r[4]; // 802188AC
  c->r[5]=c->r[5]+0xFFFF8F14u; // 802188B0
  c->r[4]=c->r[4]+c->r[0]; // 802188B4
  c->r[3]=rotl(c->r[3],2)&0xFFFFFFFCu; // 802188B8
  W32(c->r[4]+0x000001CCu,c->r[5]); // 802188BC
  c->r[0]=R32(c->r[26]+c->r[3]); // 802188C0
  cmpu(c,0,c->r[0],0x00000018u); // 802188C4
  if (!crb(c,0)) { goto L_802188D4; } // 802188C8
  c->r[0]=0u+0x00000018u; // 802188CC
  W32(c->r[26]+c->r[3],c->r[0]); // 802188D0
L_802188D4:;
  c->r[26]=R32(c->r[13]+0xFFFFDBDCu); // 802188D4
  cmps(c,0,(int32_t)c->r[26],0); // 802188D8
  if (crb(c,2)) { goto L_80218944; } // 802188DC
  c->lr=0x802188E4u; f_80218E84(c); // 802188E0
  c->r[0]=R8(c->r[13]+0xFFFFBCD0u); // 802188E4
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 802188E8
  if (!crb(c,2)) { goto L_8021890C; } // 802188EC
  c->r[5]=R32(c->r[13]+0xFFFFBCC4u); // 802188F0
  c->r[0]=0u+0x00000001u; // 802188F4
  W32(c->r[13]+0xFFFFBDF8u,c->r[5]); // 802188F8
  c->r[4]=c->r[5]+0x00000001u; // 802188FC
  W32(c->r[13]+0xFFFFBCC4u,c->r[4]); // 80218900
  W32(c->r[13]+0xFFFFBCCCu,c->r[5]); // 80218904
  W8(c->r[13]+0xFFFFBCD0u,c->r[0]); // 80218908
L_8021890C:;
  c->r[4]=(uint32_t)((int32_t)c->r[3]*(int32_t)80); // 8021890C
  c->r[0]=R32(c->r[13]+0xFFFFBCCCu); // 80218910
  c->r[5]=0u+0x80220000u; // 80218914
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80218918
  c->r[4]=c->r[26]+c->r[4]; // 8021891C
  c->r[5]=c->r[5]+0xFFFF8F10u; // 80218920
  c->r[4]=c->r[4]+c->r[0]; // 80218924
  c->r[3]=rotl(c->r[3],2)&0xFFFFFFFCu; // 80218928
  W32(c->r[4]+0x000001CCu,c->r[5]); // 8021892C
  c->r[0]=R32(c->r[26]+c->r[3]); // 80218930
  cmpu(c,0,c->r[0],0x0000006Cu); // 80218934
  if (!crb(c,0)) { goto L_80218944; } // 80218938
  c->r[0]=0u+0x0000006Cu; // 8021893C
  W32(c->r[26]+c->r[3],c->r[0]); // 80218940
L_80218944:;
  c->r[26]=R32(c->r[13]+0xFFFFDBDCu); // 80218944
  cmps(c,0,(int32_t)c->r[26],0); // 80218948
  if (crb(c,2)) { goto L_802189B4; } // 8021894C
  c->lr=0x80218954u; f_80218E84(c); // 80218950
  c->r[0]=R8(c->r[13]+0xFFFFBD38u); // 80218954
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 80218958
  if (!crb(c,2)) { goto L_8021897C; } // 8021895C
  c->r[5]=R32(c->r[13]+0xFFFFBCC4u); // 80218960
  c->r[0]=0u+0x00000001u; // 80218964
  W32(c->r[13]+0xFFFFBDF8u,c->r[5]); // 80218968
  c->r[4]=c->r[5]+0x00000001u; // 8021896C
  W32(c->r[13]+0xFFFFBCC4u,c->r[4]); // 80218970
  W32(c->r[13]+0xFFFFBD34u,c->r[5]); // 80218974
  W8(c->r[13]+0xFFFFBD38u,c->r[0]); // 80218978
L_8021897C:;
  c->r[4]=(uint32_t)((int32_t)c->r[3]*(int32_t)80); // 8021897C
  c->r[0]=R32(c->r[13]+0xFFFFBD34u); // 80218980
  c->r[5]=0u+0x80220000u; // 80218984
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80218988
  c->r[4]=c->r[26]+c->r[4]; // 8021898C
  c->r[5]=c->r[5]+0xFFFF8F0Cu; // 80218990
  c->r[4]=c->r[4]+c->r[0]; // 80218994
  c->r[3]=rotl(c->r[3],2)&0xFFFFFFFCu; // 80218998
  W32(c->r[4]+0x000001CCu,c->r[5]); // 8021899C
  c->r[0]=R32(c->r[26]+c->r[3]); // 802189A0
  cmpu(c,0,c->r[0],0x0000002Cu); // 802189A4
  if (!crb(c,0)) { goto L_802189B4; } // 802189A8
  c->r[0]=0u+0x0000002Cu; // 802189AC
  W32(c->r[26]+c->r[3],c->r[0]); // 802189B0
L_802189B4:;
  c->r[26]=R32(c->r[13]+0xFFFFDBDCu); // 802189B4
  cmps(c,0,(int32_t)c->r[26],0); // 802189B8
  if (crb(c,2)) { goto L_80218A24; } // 802189BC
  c->lr=0x802189C4u; f_80218E84(c); // 802189C0
  c->r[0]=R8(c->r[13]+0xFFFFBEB4u); // 802189C4
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 802189C8
  if (!crb(c,2)) { goto L_802189EC; } // 802189CC
  c->r[5]=R32(c->r[13]+0xFFFFBCC4u); // 802189D0
  c->r[0]=0u+0x00000001u; // 802189D4
  W32(c->r[13]+0xFFFFBDF8u,c->r[5]); // 802189D8
  c->r[4]=c->r[5]+0x00000001u; // 802189DC
  W32(c->r[13]+0xFFFFBCC4u,c->r[4]); // 802189E0
  W32(c->r[13]+0xFFFFBEB0u,c->r[5]); // 802189E4
  W8(c->r[13]+0xFFFFBEB4u,c->r[0]); // 802189E8
L_802189EC:;
  c->r[4]=(uint32_t)((int32_t)c->r[3]*(int32_t)80); // 802189EC
  c->r[0]=R32(c->r[13]+0xFFFFBEB0u); // 802189F0
  c->r[5]=0u+0x80220000u; // 802189F4
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 802189F8
  c->r[4]=c->r[26]+c->r[4]; // 802189FC
  c->r[5]=c->r[5]+0xFFFF8F08u; // 80218A00
  c->r[4]=c->r[4]+c->r[0]; // 80218A04
  c->r[3]=rotl(c->r[3],2)&0xFFFFFFFCu; // 80218A08
  W32(c->r[4]+0x000001CCu,c->r[5]); // 80218A0C
  c->r[0]=R32(c->r[26]+c->r[3]); // 80218A10
  cmpu(c,0,c->r[0],0x00000010u); // 80218A14
  if (!crb(c,0)) { goto L_80218A24; } // 80218A18
  c->r[0]=0u+0x00000010u; // 80218A1C
  W32(c->r[26]+c->r[3],c->r[0]); // 80218A20
L_80218A24:;
  c->r[26]=R32(c->r[13]+0xFFFFDBDCu); // 80218A24
  cmps(c,0,(int32_t)c->r[26],0); // 80218A28
  if (crb(c,2)) { goto L_80218A94; } // 80218A2C
  c->lr=0x80218A34u; f_80218E84(c); // 80218A30
  c->r[0]=R8(c->r[13]+0xFFFFBEBCu); // 80218A34
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 80218A38
  if (!crb(c,2)) { goto L_80218A5C; } // 80218A3C
  c->r[5]=R32(c->r[13]+0xFFFFBCC4u); // 80218A40
  c->r[0]=0u+0x00000001u; // 80218A44
  W32(c->r[13]+0xFFFFBDF8u,c->r[5]); // 80218A48
  c->r[4]=c->r[5]+0x00000001u; // 80218A4C
  W32(c->r[13]+0xFFFFBCC4u,c->r[4]); // 80218A50
  W32(c->r[13]+0xFFFFBEB8u,c->r[5]); // 80218A54
  W8(c->r[13]+0xFFFFBEBCu,c->r[0]); // 80218A58
L_80218A5C:;
  c->r[4]=(uint32_t)((int32_t)c->r[3]*(int32_t)80); // 80218A5C
  c->r[0]=R32(c->r[13]+0xFFFFBEB8u); // 80218A60
  c->r[5]=0u+0x80220000u; // 80218A64
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80218A68
  c->r[4]=c->r[26]+c->r[4]; // 80218A6C
  c->r[5]=c->r[5]+0xFFFF8F04u; // 80218A70
  c->r[4]=c->r[4]+c->r[0]; // 80218A74
  c->r[3]=rotl(c->r[3],2)&0xFFFFFFFCu; // 80218A78
  W32(c->r[4]+0x000001CCu,c->r[5]); // 80218A7C
  c->r[0]=R32(c->r[26]+c->r[3]); // 80218A80
  cmpu(c,0,c->r[0],0x0000005Cu); // 80218A84
  if (!crb(c,0)) { goto L_80218A94; } // 80218A88
  c->r[0]=0u+0x0000005Cu; // 80218A8C
  W32(c->r[26]+c->r[3],c->r[0]); // 80218A90
L_80218A94:;
  c->r[26]=R32(c->r[13]+0xFFFFDBDCu); // 80218A94
  cmps(c,0,(int32_t)c->r[26],0); // 80218A98
  if (crb(c,2)) { goto L_80218B04; } // 80218A9C
  c->lr=0x80218AA4u; f_80218E84(c); // 80218AA0
  c->r[0]=R8(c->r[13]+0xFFFFBEC4u); // 80218AA4
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 80218AA8
  if (!crb(c,2)) { goto L_80218ACC; } // 80218AAC
  c->r[5]=R32(c->r[13]+0xFFFFBCC4u); // 80218AB0
  c->r[0]=0u+0x00000001u; // 80218AB4
  W32(c->r[13]+0xFFFFBDF8u,c->r[5]); // 80218AB8
  c->r[4]=c->r[5]+0x00000001u; // 80218ABC
  W32(c->r[13]+0xFFFFBCC4u,c->r[4]); // 80218AC0
  W32(c->r[13]+0xFFFFBEC0u,c->r[5]); // 80218AC4
  W8(c->r[13]+0xFFFFBEC4u,c->r[0]); // 80218AC8
L_80218ACC:;
  c->r[4]=(uint32_t)((int32_t)c->r[3]*(int32_t)80); // 80218ACC
  c->r[0]=R32(c->r[13]+0xFFFFBEC0u); // 80218AD0
  c->r[5]=0u+0x80220000u; // 80218AD4
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80218AD8
  c->r[4]=c->r[26]+c->r[4]; // 80218ADC
  c->r[5]=c->r[5]+0xFFFF8F00u; // 80218AE0
  c->r[4]=c->r[4]+c->r[0]; // 80218AE4
  c->r[3]=rotl(c->r[3],2)&0xFFFFFFFCu; // 80218AE8
  W32(c->r[4]+0x000001CCu,c->r[5]); // 80218AEC
  c->r[0]=R32(c->r[26]+c->r[3]); // 80218AF0
  cmpu(c,0,c->r[0],0x0000005Cu); // 80218AF4
  if (!crb(c,0)) { goto L_80218B04; } // 80218AF8
  c->r[0]=0u+0x0000005Cu; // 80218AFC
  W32(c->r[26]+c->r[3],c->r[0]); // 80218B00
L_80218B04:;
  c->r[26]=R32(c->r[13]+0xFFFFDBDCu); // 80218B04
  cmps(c,0,(int32_t)c->r[26],0); // 80218B08
  if (crb(c,2)) { goto L_80218B74; } // 80218B0C
  c->lr=0x80218B14u; f_80218E84(c); // 80218B10
  c->r[0]=R8(c->r[13]+0xFFFFBECCu); // 80218B14
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 80218B18
  if (!crb(c,2)) { goto L_80218B3C; } // 80218B1C
  c->r[5]=R32(c->r[13]+0xFFFFBCC4u); // 80218B20
  c->r[0]=0u+0x00000001u; // 80218B24
  W32(c->r[13]+0xFFFFBDF8u,c->r[5]); // 80218B28
  c->r[4]=c->r[5]+0x00000001u; // 80218B2C
  W32(c->r[13]+0xFFFFBCC4u,c->r[4]); // 80218B30
  W32(c->r[13]+0xFFFFBEC8u,c->r[5]); // 80218B34
  W8(c->r[13]+0xFFFFBECCu,c->r[0]); // 80218B38
L_80218B3C:;
  c->r[4]=(uint32_t)((int32_t)c->r[3]*(int32_t)80); // 80218B3C
  c->r[0]=R32(c->r[13]+0xFFFFBEC8u); // 80218B40
  c->r[5]=0u+0x80220000u; // 80218B44
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80218B48
  c->r[4]=c->r[26]+c->r[4]; // 80218B4C
  c->r[5]=c->r[5]+0xFFFF8EFCu; // 80218B50
  c->r[4]=c->r[4]+c->r[0]; // 80218B54
  c->r[3]=rotl(c->r[3],2)&0xFFFFFFFCu; // 80218B58
  W32(c->r[4]+0x000001CCu,c->r[5]); // 80218B5C
  c->r[0]=R32(c->r[26]+c->r[3]); // 80218B60
  cmpu(c,0,c->r[0],0x0000005Cu); // 80218B64
  if (!crb(c,0)) { goto L_80218B74; } // 80218B68
  c->r[0]=0u+0x0000005Cu; // 80218B6C
  W32(c->r[26]+c->r[3],c->r[0]); // 80218B70
L_80218B74:;
  c->r[26]=R32(c->r[13]+0xFFFFDBDCu); // 80218B74
  cmps(c,0,(int32_t)c->r[26],0); // 80218B78
  if (crb(c,2)) { goto L_80218BE4; } // 80218B7C
  c->lr=0x80218B84u; f_80218E84(c); // 80218B80
  c->r[0]=R8(c->r[13]+0xFFFFBED4u); // 80218B84
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 80218B88
  if (!crb(c,2)) { goto L_80218BAC; } // 80218B8C
  c->r[5]=R32(c->r[13]+0xFFFFBCC4u); // 80218B90
  c->r[0]=0u+0x00000001u; // 80218B94
  W32(c->r[13]+0xFFFFBDF8u,c->r[5]); // 80218B98
  c->r[4]=c->r[5]+0x00000001u; // 80218B9C
  W32(c->r[13]+0xFFFFBCC4u,c->r[4]); // 80218BA0
  W32(c->r[13]+0xFFFFBED0u,c->r[5]); // 80218BA4
  W8(c->r[13]+0xFFFFBED4u,c->r[0]); // 80218BA8
L_80218BAC:;
  c->r[4]=(uint32_t)((int32_t)c->r[3]*(int32_t)80); // 80218BAC
  c->r[0]=R32(c->r[13]+0xFFFFBED0u); // 80218BB0
  c->r[5]=0u+0x80220000u; // 80218BB4
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80218BB8
  c->r[4]=c->r[26]+c->r[4]; // 80218BBC
  c->r[5]=c->r[5]+0xFFFF8EF8u; // 80218BC0
  c->r[4]=c->r[4]+c->r[0]; // 80218BC4
  c->r[3]=rotl(c->r[3],2)&0xFFFFFFFCu; // 80218BC8
  W32(c->r[4]+0x000001CCu,c->r[5]); // 80218BCC
  c->r[0]=R32(c->r[26]+c->r[3]); // 80218BD0
  cmpu(c,0,c->r[0],0x0000005Cu); // 80218BD4
  if (!crb(c,0)) { goto L_80218BE4; } // 80218BD8
  c->r[0]=0u+0x0000005Cu; // 80218BDC
  W32(c->r[26]+c->r[3],c->r[0]); // 80218BE0
L_80218BE4:;
  c->r[3]=c->r[25]|c->r[25]; // 80218BE4
  c->lr=0x80218BECu; f_8005BBF0(c); // 80218BE8
  c->r[24]=c->r[25]+0x000005C0u; // 80218BEC
  c->r[3]=c->r[24]|c->r[24]; // 80218BF0
  c->lr=0x80218BF8u; f_800506C0(c); // 80218BF4
  cmps(c,0,(int32_t)c->r[24],0); // 80218BF8
  c->r[3]=c->r[24]|c->r[24]; // 80218BFC
  if (crb(c,2)) { goto L_80218C08; } // 80218C00
  c->r[3]=c->r[24]+0xFFFFFA40u; // 80218C04
L_80218C08:;
  c->r[27]=0u+0x00000001u; // 80218C08
  W32(c->r[24]+0x00000008u,c->r[3]); // 80218C0C
  W8(c->r[24]+0x0000000Cu,c->r[27]); // 80218C10
  c->r[0]=R8(c->r[13]+0xFFFFCA3Du); // 80218C14
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 80218C18
  if (!crb(c,2)) { goto L_80218C5C; } // 80218C1C
  c->r[26]=0u+0x80750000u; // 80218C20
  c->r[3]=c->r[26]+0x00004844u; // 80218C24
  c->lr=0x80218C2Cu; f_800506C0(c); // 80218C28
  c->r[6]=0u+0x806E0000u; // 80218C2C
  c->r[4]=0u+0x80160000u; // 80218C30
  c->r[6]=c->r[6]+0xFFFFE970u; // 80218C34
  c->r[3]=c->r[26]+0x00004844u; // 80218C38
  c->r[0]=c->r[6]+0x00000008u; // 80218C3C
  c->r[5]=0u+0x80750000u; // 80218C40
  W32(c->r[3]+0x00000010u,c->r[6]); // 80218C44
  c->r[4]=c->r[4]+0x00002A4Cu; // 80218C48
  c->r[5]=c->r[5]+0x00005420u; // 80218C4C
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 80218C50
  c->lr=0x80218C58u; f_803A92B8(c); // 80218C54
  W8(c->r[13]+0xFFFFCA3Du,c->r[27]); // 80218C58
L_80218C5C:;
  c->r[3]=0u+0x80750000u; // 80218C5C
  c->r[5]=c->r[24]|c->r[24]; // 80218C60
  c->r[3]=c->r[3]+0x00004844u; // 80218C64
  c->r[4]=c->r[3]|c->r[3]; // 80218C68
  c->lr=0x80218C70u; f_802DDCA8(c); // 80218C6C
  c->r[3]=0u+0x806E0000u; // 80218C70
  c->r[0]=0u+0x00000000u; // 80218C74
  c->r[3]=c->r[3]+0x00006B30u; // 80218C78
  W32(c->r[25]+0x0000001Cu,c->r[3]); // 80218C7C
  c->r[4]=c->r[3]+0x00000044u; // 80218C80
  W32(c->r[25]+0x00000400u,c->r[4]); // 80218C84
  c->r[3]=c->r[25]+0x000005D8u; // 80218C88
  W32(c->r[25]+0x000005D0u,c->r[0]); // 80218C8C
  W32(c->r[25]+0x000005D4u,c->r[0]); // 80218C90
  c->lr=0x80218C98u; f_803209E8(c); // 80218C94
  c->r[3]=c->r[25]+0x00000614u; // 80218C98
  c->lr=0x80218CA0u; f_803209E8(c); // 80218C9C
  c->r[3]=c->r[25]+0x00000654u; // 80218CA0
  c->lr=0x80218CA8u; f_8024A7A0(c); // 80218CA4
  c->r[23]=R32(c->r[13]+0xFFFFDBD8u); // 80218CA8
  cmps(c,0,(int32_t)c->r[23],0); // 80218CAC
  if (crb(c,2)) { goto L_80218D18; } // 80218CB0
  c->lr=0x80218CB8u; f_80218E84(c); // 80218CB4
  c->r[0]=R8(c->r[13]+0xFFFFBEA4u); // 80218CB8
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 80218CBC
  if (!crb(c,2)) { goto L_80218CE0; } // 80218CC0
  c->r[5]=R32(c->r[13]+0xFFFFBCC8u); // 80218CC4
  c->r[0]=0u+0x00000001u; // 80218CC8
  W32(c->r[13]+0xFFFFBDFCu,c->r[5]); // 80218CCC
  c->r[4]=c->r[5]+0x00000001u; // 80218CD0
  W32(c->r[13]+0xFFFFBCC8u,c->r[4]); // 80218CD4
  W32(c->r[13]+0xFFFFBEA0u,c->r[5]); // 80218CD8
  W8(c->r[13]+0xFFFFBEA4u,c->r[0]); // 80218CDC
L_80218CE0:;
  c->r[4]=(uint32_t)((int32_t)c->r[3]*(int32_t)2600); // 80218CE0
  c->r[0]=R32(c->r[13]+0xFFFFBEA0u); // 80218CE4
  c->r[5]=0u+0x80220000u; // 80218CE8
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80218CEC
  c->r[4]=c->r[23]+c->r[4]; // 80218CF0
  c->r[5]=c->r[5]+0xFFFF8EC0u; // 80218CF4
  c->r[4]=c->r[4]+c->r[0]; // 80218CF8
  c->r[3]=rotl(c->r[3],2)&0xFFFFFFFCu; // 80218CFC
  W32(c->r[4]+0x000001CCu,c->r[5]); // 80218D00
  c->r[0]=R32(c->r[23]+c->r[3]); // 80218D04
  cmpu(c,0,c->r[0],0x00000010u); // 80218D08
  if (!crb(c,0)) { goto L_80218D18; } // 80218D0C
  c->r[0]=0u+0x00000010u; // 80218D10
  W32(c->r[23]+c->r[3],c->r[0]); // 80218D14
L_80218D18:;
  c->r[23]=R32(c->r[13]+0xFFFFDBD8u); // 80218D18
  cmps(c,0,(int32_t)c->r[23],0); // 80218D1C
  if (crb(c,2)) { goto L_80218D64; } // 80218D20
  c->lr=0x80218D28u; f_80218E84(c); // 80218D24
  c->r[26]=c->r[3]|c->r[3]; // 80218D28
  c->lr=0x80218D30u; f_8005E1B0(c); // 80218D2C
  c->r[4]=(uint32_t)((int32_t)c->r[26]*(int32_t)2600); // 80218D30
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 80218D34
  c->r[5]=0u+0x80220000u; // 80218D38
  c->r[3]=rotl(c->r[26],2)&0xFFFFFFFCu; // 80218D3C
  c->r[4]=c->r[23]+c->r[4]; // 80218D40
  c->r[5]=c->r[5]+0xFFFF8EBCu; // 80218D44
  c->r[4]=c->r[4]+c->r[0]; // 80218D48
  W32(c->r[4]+0x000001CCu,c->r[5]); // 80218D4C
  c->r[0]=R32(c->r[23]+c->r[3]); // 80218D50
  cmpu(c,0,c->r[0],0x00000010u); // 80218D54
  if (!crb(c,0)) { goto L_80218D64; } // 80218D58
  c->r[0]=0u+0x00000010u; // 80218D5C
  W32(c->r[23]+c->r[3],c->r[0]); // 80218D60
L_80218D64:;
  c->r[23]=R32(c->r[13]+0xFFFFDBD8u); // 80218D64
  cmps(c,0,(int32_t)c->r[23],0); // 80218D68
  if (crb(c,2)) { goto L_80218DB0; } // 80218D6C
  c->lr=0x80218D74u; f_80218E84(c); // 80218D70
  c->r[26]=c->r[3]|c->r[3]; // 80218D74
  c->lr=0x80218D7Cu; f_80062EBC(c); // 80218D78
  c->r[4]=(uint32_t)((int32_t)c->r[26]*(int32_t)2600); // 80218D7C
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 80218D80
  c->r[5]=0u+0x80220000u; // 80218D84
  c->r[3]=rotl(c->r[26],2)&0xFFFFFFFCu; // 80218D88
  c->r[4]=c->r[23]+c->r[4]; // 80218D8C
  c->r[5]=c->r[5]+0xFFFF8EB8u; // 80218D90
  c->r[4]=c->r[4]+c->r[0]; // 80218D94
  W32(c->r[4]+0x000001CCu,c->r[5]); // 80218D98
  c->r[0]=R32(c->r[23]+c->r[3]); // 80218D9C
  cmpu(c,0,c->r[0],0x00000010u); // 80218DA0
  if (!crb(c,0)) { goto L_80218DB0; } // 80218DA4
  c->r[0]=0u+0x00000010u; // 80218DA8
  W32(c->r[23]+c->r[3],c->r[0]); // 80218DAC
L_80218DB0:;
  c->r[23]=R32(c->r[13]+0xFFFFDBD8u); // 80218DB0
  cmps(c,0,(int32_t)c->r[23],0); // 80218DB4
  if (crb(c,2)) { goto L_80218DFC; } // 80218DB8
  c->lr=0x80218DC0u; f_80218E84(c); // 80218DBC
  c->r[26]=c->r[3]|c->r[3]; // 80218DC0
  c->lr=0x80218DC8u; f_80062F1C(c); // 80218DC4
  c->r[4]=(uint32_t)((int32_t)c->r[26]*(int32_t)2600); // 80218DC8
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 80218DCC
  c->r[5]=0u+0x80220000u; // 80218DD0
  c->r[3]=rotl(c->r[26],2)&0xFFFFFFFCu; // 80218DD4
  c->r[4]=c->r[23]+c->r[4]; // 80218DD8
  c->r[5]=c->r[5]+0xFFFF8EB4u; // 80218DDC
  c->r[4]=c->r[4]+c->r[0]; // 80218DE0
  W32(c->r[4]+0x000001CCu,c->r[5]); // 80218DE4
  c->r[0]=R32(c->r[23]+c->r[3]); // 80218DE8
  cmpu(c,0,c->r[0],0x00000010u); // 80218DEC
  if (!crb(c,0)) { goto L_80218DFC; } // 80218DF0
  c->r[0]=0u+0x00000010u; // 80218DF4
  W32(c->r[23]+c->r[3],c->r[0]); // 80218DF8
L_80218DFC:;
  c->r[23]=R32(c->r[13]+0xFFFFDBD8u); // 80218DFC
  cmps(c,0,(int32_t)c->r[23],0); // 80218E00
  if (crb(c,2)) { goto L_80218E48; } // 80218E04
  c->lr=0x80218E0Cu; f_80218E84(c); // 80218E08
  c->r[26]=c->r[3]|c->r[3]; // 80218E0C
  c->lr=0x80218E14u; f_80062DCC(c); // 80218E10
  c->r[4]=(uint32_t)((int32_t)c->r[26]*(int32_t)2600); // 80218E14
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 80218E18
  c->r[5]=0u+0x80220000u; // 80218E1C
  c->r[3]=rotl(c->r[26],2)&0xFFFFFFFCu; // 80218E20
  c->r[4]=c->r[23]+c->r[4]; // 80218E24
  c->r[5]=c->r[5]+0xFFFF8E80u; // 80218E28
  c->r[4]=c->r[4]+c->r[0]; // 80218E2C
  W32(c->r[4]+0x000001CCu,c->r[5]); // 80218E30
  c->r[0]=R32(c->r[23]+c->r[3]); // 80218E34
  cmpu(c,0,c->r[0],0x00000010u); // 80218E38
  if (!crb(c,0)) { goto L_80218E48; } // 80218E3C
  c->r[0]=0u+0x00000010u; // 80218E40
  W32(c->r[23]+c->r[3],c->r[0]); // 80218E44
L_80218E48:;
  {uint32_t ea=c->r[2]+0xFFFFDE94u; c->f[0]=c->ps1[0]=RF32(ea);} // 80218E48
  c->r[0]=0u+0x00000000u; // 80218E4C
  {uint32_t ea=c->r[2]+0xFFFFDE90u; c->f[1]=c->ps1[1]=RF32(ea);} // 80218E50
  c->r[11]=c->r[1]+0x00000050u; // 80218E54
  W8(c->r[25]+0x00000650u,c->r[0]); // 80218E58
  c->r[3]=c->r[25]|c->r[25]; // 80218E5C
  {uint32_t ea=c->r[25]+0x00000688u; WF32(ea,c->f[1]);} // 80218E60
  {uint32_t ea=c->r[25]+0x0000068Cu; WF32(ea,c->f[0]);} // 80218E64
  {uint32_t ea=c->r[25]+0x00000690u; WF32(ea,c->f[0]);} // 80218E68
  c->lr=0x80218E70u; { c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80218E6C
  c->r[0]=R32(c->r[1]+0x00000054u); // 80218E70
  c->lr=c->r[0]; // 80218E74
  c->r[1]=c->r[1]+0x00000050u; // 80218E78
  return; // 80218E7C
}

// fn_80218E80
void f_80218E80(Ctx* __restrict c) {
  trace_call(0x80218E80u);
  f_8021942C(c); return; // 80218E80
}

// fn_80218E84
void f_80218E84(Ctx* __restrict c) {
  trace_call(0x80218E84u);
  c->r[0]=R8(c->r[13]+0xFFFFD464u); // 80218E84
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 80218E88
  if (!crb(c,2)) { goto L_80218EAC; } // 80218E8C
  c->r[4]=R32(c->r[13]+0xFFFFBE94u); // 80218E90
  c->r[0]=0u+0x00000001u; // 80218E94
  W32(c->r[13]+0xFFFFBE98u,c->r[4]); // 80218E98
  c->r[3]=c->r[4]+0x00000001u; // 80218E9C
  W32(c->r[13]+0xFFFFBE94u,c->r[3]); // 80218EA0
  W32(c->r[13]+0xFFFFD460u,c->r[4]); // 80218EA4
  W8(c->r[13]+0xFFFFD464u,c->r[0]); // 80218EA8
L_80218EAC:;
  c->r[3]=R32(c->r[13]+0xFFFFD460u); // 80218EAC
  return; // 80218EB0
}

// fn_80218EB4
void f_80218EB4(Ctx* __restrict c) {
  trace_call(0x80218EB4u);
  f_802193A0(c); return; // 80218EB4
}

// fn_80218EB8
void f_80218EB8(Ctx* __restrict c) {
  trace_call(0x80218EB8u);
  f_802190D0(c); return; // 80218EB8
}

// fn_80218EBC
void f_80218EBC(Ctx* __restrict c) {
  trace_call(0x80218EBCu);
  return; // 80218EBC
}

// fn_80218EC0
void f_80218EC0(Ctx* __restrict c) {
  trace_call(0x80218EC0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80218EC0
  c->r[0]=c->lr; // 80218EC4
  W32(c->r[1]+0x00000014u,c->r[0]); // 80218EC8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80218ECC
  c->r[31]=c->r[3]|c->r[3]; // 80218ED0
  c->lr=0x80218ED8u; f_8005E0F8(c); // 80218ED4
  c->r[0]=R32(c->r[31]+0x000005BCu); // 80218ED8
  c->r[0]=c->r[0]|0x40000000u; // 80218EDC
  W32(c->r[31]+0x000005BCu,c->r[0]); // 80218EE0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80218EE4
  c->r[0]=R32(c->r[1]+0x00000014u); // 80218EE8
  c->lr=c->r[0]; // 80218EEC
  c->r[1]=c->r[1]+0x00000010u; // 80218EF0
  return; // 80218EF4
}

// fn_80218EF8
void f_80218EF8(Ctx* __restrict c) {
  trace_call(0x80218EF8u);
  f_8005E338(c); return; // 80218EF8
}

// fn_80218EFC
void f_80218EFC(Ctx* __restrict c) {
  trace_call(0x80218EFCu);
  f_8005E324(c); return; // 80218EFC
}

// fn_80218F00
void f_80218F00(Ctx* __restrict c) {
  trace_call(0x80218F00u);
  f_8005E310(c); return; // 80218F00
}

// fn_80218F04
void f_80218F04(Ctx* __restrict c) {
  trace_call(0x80218F04u);
  f_8005E2FC(c); return; // 80218F04
}

// fn_80218F08
void f_80218F08(Ctx* __restrict c) {
  trace_call(0x80218F08u);
  f_8005E34C(c); return; // 80218F08
}

// fn_80218F0C
void f_80218F0C(Ctx* __restrict c) {
  trace_call(0x80218F0Cu);
  f_8005E360(c); return; // 80218F0C
}

// fn_80218F10
void f_80218F10(Ctx* __restrict c) {
  trace_call(0x80218F10u);
  f_8005D47C(c); return; // 80218F10
}

// fn_80218F14
void f_80218F14(Ctx* __restrict c) {
  trace_call(0x80218F14u);
  f_8005D468(c); return; // 80218F14
}

// fn_80218F18
void f_80218F18(Ctx* __restrict c) {
  trace_call(0x80218F18u);
  f_8005BEDC(c); return; // 80218F18
}

// fn_80218F1C
void f_80218F1C(Ctx* __restrict c) {
  trace_call(0x80218F1Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80218F1C
  c->r[0]=c->lr; // 80218F20
  cmps(c,0,(int32_t)c->r[3],0); // 80218F24
  W32(c->r[1]+0x00000014u,c->r[0]); // 80218F28
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 80218F2C
  c->r[30]=c->r[3]|c->r[3]; // 80218F30
  c->r[31]=c->r[4]|c->r[4]; // 80218F34
  if (crb(c,2)) { goto L_80218F90; } // 80218F38
  c->r[0]=R8(c->r[3]+0x00000650u); // 80218F3C
  c->r[4]=0u+0x806E0000u; // 80218F40
  c->r[4]=c->r[4]+0x00006B30u; // 80218F44
  W32(c->r[3]+0x0000001Cu,c->r[4]); // 80218F48
  cmps(c,0,(int32_t)c->r[0],0); // 80218F4C
  c->r[0]=c->r[4]+0x00000044u; // 80218F50
  W32(c->r[3]+0x00000400u,c->r[0]); // 80218F54
  if (!crb(c,2)) { goto L_80218F74; } // 80218F58
  c->r[4]=0u+0x00000001u; // 80218F5C
  c->r[3]=c->r[3]+0x000005D8u; // 80218F60
  c->lr=0x80218F68u; f_80320C3C(c); // 80218F64
  c->r[3]=c->r[30]+0x00000614u; // 80218F68
  c->r[4]=0u+0x00000001u; // 80218F6C
  c->lr=0x80218F74u; f_80320C3C(c); // 80218F70
L_80218F74:;
  c->r[3]=c->r[30]|c->r[30]; // 80218F74
  c->r[4]=0u+0x00000000u; // 80218F78
  c->lr=0x80218F80u; f_8017F0DC(c); // 80218F7C
  cmps(c,0,(int32_t)c->r[31],0); // 80218F80
  if (!crb(c,1)) { goto L_80218F90; } // 80218F84
  c->r[3]=c->r[30]|c->r[30]; // 80218F88
  c->lr=0x80218F90u; f_8005328C(c); // 80218F8C
L_80218F90:;
  c->r[3]=c->r[30]|c->r[30]; // 80218F90
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 80218F94
  c->r[0]=R32(c->r[1]+0x00000014u); // 80218F98
  c->lr=c->r[0]; // 80218F9C
  c->r[1]=c->r[1]+0x00000010u; // 80218FA0
  return; // 80218FA4
}

// fn_80218FA8
void f_80218FA8(Ctx* __restrict c) {
  trace_call(0x80218FA8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80218FA8
  c->r[0]=c->lr; // 80218FAC
  {uint32_t ea=c->r[2]+0xFFFFDE94u; c->f[0]=c->ps1[0]=RF32(ea);} // 80218FB0
  c->r[4]=0u+0x00000000u; // 80218FB4
  W32(c->r[1]+0x00000014u,c->r[0]); // 80218FB8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80218FBC
  c->r[31]=c->r[3]|c->r[3]; // 80218FC0
  c->r[5]=R32(c->r[3]+0x00000444u); // 80218FC4
  {uint32_t ea=c->r[5]+0x00000000u; WF32(ea,c->f[0]);} // 80218FC8
  c->r[5]=R32(c->r[3]+0x0000044Cu); // 80218FCC
  {uint32_t ea=c->r[5]+0x00000000u; WF32(ea,c->f[0]);} // 80218FD0
  c->lr=0x80218FD8u; f_8005EE88(c); // 80218FD4
  c->r[3]=c->r[31]|c->r[31]; // 80218FD8
  c->r[4]=0u+0x00000000u; // 80218FDC
  c->lr=0x80218FE4u; f_8005E814(c); // 80218FE0
  c->r[3]=c->r[31]|c->r[31]; // 80218FE4
  c->r[4]=0u+0x0000000Bu; // 80218FE8
  c->r[5]=0u+0x00000001u; // 80218FEC
  c->lr=0x80218FF4u; f_800D5F20(c); // 80218FF0
  c->r[0]=R32(c->r[1]+0x00000014u); // 80218FF4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80218FF8
  c->lr=c->r[0]; // 80218FFC
  c->r[1]=c->r[1]+0x00000010u; // 80219000
  return; // 80219004
}

// fn_80219008
void f_80219008(Ctx* __restrict c) {
  trace_call(0x80219008u);
  f_80219544(c); return; // 80219008
}

// fn_8021900C
void f_8021900C(Ctx* __restrict c) {
  trace_call(0x8021900Cu);
  return; // 8021900C
}

// fn_80219010
void f_80219010(Ctx* __restrict c) {
  trace_call(0x80219010u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80219010
  c->r[0]=c->lr; // 80219014
  W32(c->r[1]+0x00000044u,c->r[0]); // 80219018
  {uint32_t ea=c->r[1]+0x00000030u; for(int i=28;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 8021901C
  c->r[31]=c->r[1]|c->r[1]; // 80219020
  c->r[28]=c->r[3]|c->r[3]; // 80219024
  c->lr=0x8021902Cu; f_800610FC(c); // 80219028
  cmps(c,0,(int32_t)c->r[3],0); // 8021902C
  if (crb(c,2)) { goto L_802190AC; } // 80219030
  c->lr=0x80219038u; f_80062DCC(c); // 80219034
  c->r[4]=c->r[3]|c->r[3]; // 80219038
  c->r[3]=c->r[28]|c->r[28]; // 8021903C
  c->lr=0x80219044u; f_80062F4C(c); // 80219040
  c->r[0]=R8(c->r[28]+0x00000010u); // 80219044
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80219048
  c->r[3]=c->r[28]+c->r[0]; // 8021904C
  c->r[29]=R32(c->r[3]+0x00000014u); // 80219050
  cmps(c,0,(int32_t)c->r[29],0); // 80219054
  if (crb(c,2)) { goto L_80219080; } // 80219058
  c->r[30]=0u+0x00000000u; // 8021905C
  W32(c->r[31]+0x00000024u,c->r[1]); // 80219060
  W8(c->r[31]+0x00000008u,c->r[30]); // 80219064
  c->lr=0x8021906Cu; f_80062DCC(c); // 80219068
  W32(c->r[29]+0x00000000u,c->r[3]); // 8021906C
  c->r[0]=c->r[13]+0xFFFF80C8u; // 80219070
  W32(c->r[29]+0x00000004u,c->r[0]); // 80219074
  W32(c->r[29]+0x00000008u,c->r[30]); // 80219078
  W32(c->r[29]+0x0000000Cu,c->r[30]); // 8021907C
L_80219080:;
  W32(c->r[28]+0x00000008u,c->r[29]); // 80219080
  c->r[0]=0u+0x00000000u; // 80219084
  c->r[3]=c->r[28]|c->r[28]; // 80219088
  c->r[4]=c->r[29]|c->r[29]; // 8021908C
  W32(c->r[29]+0x00000008u,c->r[0]); // 80219090
  c->r[0]=R32(c->r[28]+0x00000004u); // 80219094
  W32(c->r[28]+0x0000000Cu,c->r[0]); // 80219098
  c->lr=0x802190A0u; f_8006306C(c); // 8021909C
  c->r[0]=R32(c->r[28]+0x000005BCu); // 802190A0
  c->r[0]=c->r[0]|0x40000000u; // 802190A4
  W32(c->r[28]+0x000005BCu,c->r[0]); // 802190A8
L_802190AC:;
  c->r[10]=c->r[31]|c->r[31]; // 802190AC
  {uint32_t ea=c->r[10]+0x00000030u; for(int i=28;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 802190B0
  c->r[10]=R32(c->r[1]+0x00000000u); // 802190B4
  c->r[0]=R32(c->r[10]+0x00000004u); // 802190B8
  c->r[1]=c->r[10]|c->r[10]; // 802190BC
  c->lr=c->r[0]; // 802190C0
  return; // 802190C4
}

// fn_802190C8
void f_802190C8(Ctx* __restrict c) {
  trace_call(0x802190C8u);
  c->r[3]=0u+0x00000000u; // 802190C8
  return; // 802190CC
}

// fn_802190D0
void f_802190D0(Ctx* __restrict c) {
  trace_call(0x802190D0u);
  {uint32_t ea=c->r[1]+0xFFFFFEF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802190D0
  c->r[0]=c->lr; // 802190D4
  W32(c->r[1]+0x00000114u,c->r[0]); // 802190D8
  W32(c->r[1]+0x0000010Cu,c->r[31]); // 802190DC
  W32(c->r[1]+0x00000108u,c->r[30]); // 802190E0
  c->r[30]=c->r[3]|c->r[3]; // 802190E4
  c->r[4]=R32(c->r[3]+0x00000004u); // 802190E8
  cmps(c,0,(int32_t)c->r[4],0); // 802190EC
  if (crb(c,2)) { goto L_802190FC; } // 802190F0
  c->r[0]=R32(c->r[4]+0x00000008u); // 802190F4
  goto L_80219100; // 802190F8
L_802190FC:;
  c->r[0]=0u+0x00000000u; // 802190FC
L_80219100:;
  cmps(c,0,(int32_t)c->r[0],0); // 80219100
  if (!crb(c,2)) { goto L_802191D4; } // 80219104
  {uint32_t ea=c->r[2]+0xFFFFDE98u; c->f[0]=c->ps1[0]=RF32(ea);} // 80219108
  {uint32_t ea=c->r[3]+0x00000694u; WF32(ea,c->f[0]);} // 8021910C
  c->lr=0x80219114u; f_803B220C(c); // 80219110
  c->r[0]=c->r[3]^0x80000000u; // 80219114
  c->r[31]=0u+0x43300000u; // 80219118
  W32(c->r[1]+0x000000FCu,c->r[0]); // 8021911C
  {uint32_t ea=c->r[2]+0xFFFFDEB0u; c->f[3]=RF64(ea);} // 80219120
  W32(c->r[1]+0x000000F8u,c->r[31]); // 80219124
  {uint32_t ea=c->r[2]+0xFFFFDE9Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 80219128
  {uint32_t ea=c->r[1]+0x000000F8u; c->f[0]=RF64(ea);} // 8021912C
  {uint32_t ea=c->r[2]+0xFFFFDE94u; c->f[1]=c->ps1[1]=RF32(ea);} // 80219130
  c->f[3]=c->ps1[3]=S(c->f[0]-c->f[3]); // 80219134
  {uint32_t ea=c->r[2]+0xFFFFDEA0u; c->f[0]=c->ps1[0]=RF32(ea);} // 80219138
  c->f[2]=c->ps1[2]=S(c->f[3]/c->f[2]); // 8021913C
  c->f[0]=c->ps1[0]=S(std::fma(c->f[1],c->f[2],c->f[0])); // 80219140
  {uint32_t ea=c->r[30]+0x00000698u; WF32(ea,c->f[0]);} // 80219144
  c->lr=0x8021914Cu; f_803B220C(c); // 80219148
  c->r[0]=c->r[3]^0x80000000u; // 8021914C
  W32(c->r[1]+0x00000104u,c->r[0]); // 80219150
  {uint32_t ea=c->r[2]+0xFFFFDEB0u; c->f[3]=RF64(ea);} // 80219154
  c->r[4]=c->r[30]|c->r[30]; // 80219158
  W32(c->r[1]+0x00000100u,c->r[31]); // 8021915C
  c->r[3]=c->r[1]+0x0000005Cu; // 80219160
  {uint32_t ea=c->r[2]+0xFFFFDE9Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 80219164
  {uint32_t ea=c->r[1]+0x00000100u; c->f[0]=RF64(ea);} // 80219168
  {uint32_t ea=c->r[2]+0xFFFFDEA8u; c->f[1]=c->ps1[1]=RF32(ea);} // 8021916C
  c->f[3]=c->ps1[3]=S(c->f[0]-c->f[3]); // 80219170
  {uint32_t ea=c->r[2]+0xFFFFDEA4u; c->f[0]=c->ps1[0]=RF32(ea);} // 80219174
  c->f[2]=c->ps1[2]=S(c->f[3]/c->f[2]); // 80219178
  c->f[0]=c->ps1[0]=S(std::fma(c->f[1],c->f[2],c->f[0])); // 8021917C
  {uint32_t ea=c->r[30]+0x0000069Cu; WF32(ea,c->f[0]);} // 80219180
  c->lr=0x80219188u; f_80061A48(c); // 80219184
  {uint32_t ea=c->r[30]+0x00000694u; c->f[1]=c->ps1[1]=RF32(ea);} // 80219188
  c->r[3]=c->r[1]+0x00000068u; // 8021918C
  {uint32_t ea=c->r[30]+0x00000698u; c->f[2]=c->ps1[2]=RF32(ea);} // 80219190
  c->r[4]=0u+0x00000000u; // 80219194
  {uint32_t ea=c->r[30]+0x0000069Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 80219198
  c->lr=0x802191A0u; f_80064240(c); // 8021919C
  c->r[3]=c->r[1]+0x00000050u; // 802191A0
  c->r[4]=c->r[1]+0x00000068u; // 802191A4
  c->lr=0x802191ACu; f_80060878(c); // 802191A8
  c->r[3]=c->r[30]+0x00000654u; // 802191AC
  c->r[4]=c->r[30]+0x00000688u; // 802191B0
  c->r[5]=c->r[1]+0x0000005Cu; // 802191B4
  c->r[6]=c->r[1]+0x00000050u; // 802191B8
  c->lr=0x802191C0u; f_8024A7A4(c); // 802191BC
  {uint32_t ea=c->r[2]+0xFFFFDE94u; c->f[1]=c->ps1[1]=RF32(ea);} // 802191C0
  c->r[3]=c->r[30]|c->r[30]; // 802191C4
  {uint32_t ea=c->r[30]+0x0000068Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 802191C8
  c->f[1]=c->ps1[1]=S(c->f[1]+c->f[0]); // 802191CC
  c->lr=0x802191D4u; f_80219524(c); // 802191D0
L_802191D4:;
  c->r[3]=c->r[30]+0x000001B8u; // 802191D4
  c->r[4]=c->r[1]+0x000000C8u; // 802191D8
  c->lr=0x802191E0u; f_80382F2C(c); // 802191DC
  {uint32_t ea=c->r[30]+0x00000694u; c->f[1]=c->ps1[1]=RF32(ea);} // 802191E0
  c->r[3]=c->r[1]+0x00000098u; // 802191E4
  {uint32_t ea=c->r[30]+0x00000698u; c->f[2]=c->ps1[2]=RF32(ea);} // 802191E8
  c->r[4]=0u+0x00000000u; // 802191EC
  {uint32_t ea=c->r[30]+0x0000069Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 802191F0
  c->lr=0x802191F8u; f_80064240(c); // 802191F4
  c->r[3]=c->r[30]+0x00000654u; // 802191F8
  c->r[4]=c->r[1]+0x000000C8u; // 802191FC
  c->lr=0x80219204u; f_8024A910(c); // 80219200
  c->r[3]=c->r[1]+0x00000038u; // 80219204
  c->r[4]=c->r[30]+0x0000058Cu; // 80219208
  c->lr=0x80219210u; f_80060878(c); // 8021920C
  {uint32_t ea=c->r[1]+0x000000D4u; c->f[1]=c->ps1[1]=RF32(ea);} // 80219210
  c->r[3]=c->r[1]+0x0000002Cu; // 80219214
  {uint32_t ea=c->r[1]+0x000000E4u; c->f[2]=c->ps1[2]=RF32(ea);} // 80219218
  {uint32_t ea=c->r[1]+0x000000F4u; c->f[3]=c->ps1[3]=RF32(ea);} // 8021921C
  c->lr=0x80219224u; f_8005FD70(c); // 80219220
  {uint32_t ea=c->r[1]+0x000000A4u; c->f[1]=c->ps1[1]=RF32(ea);} // 80219224
  c->r[3]=c->r[1]+0x00000020u; // 80219228
  {uint32_t ea=c->r[1]+0x000000B4u; c->f[2]=c->ps1[2]=RF32(ea);} // 8021922C
  {uint32_t ea=c->r[1]+0x000000C4u; c->f[3]=c->ps1[3]=RF32(ea);} // 80219230
  c->lr=0x80219238u; f_8005FD70(c); // 80219234
  {uint32_t ea=c->r[1]+0x0000009Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 80219238
  c->r[3]=c->r[1]+0x00000014u; // 8021923C
  {uint32_t ea=c->r[1]+0x000000ACu; c->f[2]=c->ps1[2]=RF32(ea);} // 80219240
  {uint32_t ea=c->r[1]+0x000000BCu; c->f[3]=c->ps1[3]=RF32(ea);} // 80219244
  c->lr=0x8021924Cu; f_8005FD70(c); // 80219248
  {uint32_t ea=c->r[1]+0x00000098u; c->f[1]=c->ps1[1]=RF32(ea);} // 8021924C
  c->r[3]=c->r[1]+0x00000008u; // 80219250
  {uint32_t ea=c->r[1]+0x000000A8u; c->f[2]=c->ps1[2]=RF32(ea);} // 80219254
  {uint32_t ea=c->r[1]+0x000000B8u; c->f[3]=c->ps1[3]=RF32(ea);} // 80219258
  c->lr=0x80219260u; f_8005FD70(c); // 8021925C
  c->r[3]=c->r[1]+0x00000038u; // 80219260
  c->r[4]=c->r[1]+0x0000002Cu; // 80219264
  c->r[5]=c->r[1]+0x00000020u; // 80219268
  c->r[6]=c->r[1]+0x00000014u; // 8021926C
  c->r[7]=c->r[1]+0x00000008u; // 80219270
  c->r[8]=c->r[1]+0x00000044u; // 80219274
  c->lr=0x8021927Cu; f_800646CC(c); // 80219278
  cmps(c,0,(int32_t)c->r[3],0); // 8021927C
  if (crb(c,2)) { goto L_80219298; } // 80219280
  c->r[3]=c->r[30]+0x000005D0u; // 80219284
  c->lr=0x8021928Cu; f_800DBAA4(c); // 80219288
  c->lr=0x80219290u; f_8020ED04(c); // 8021928C
  c->r[3]=c->r[30]|c->r[30]; // 80219290
  c->lr=0x80219298u; f_802192F0(c); // 80219294
L_80219298:;
  c->r[3]=c->r[1]+0x000000C8u; // 80219298
  c->r[4]=c->r[30]+0x000005D8u; // 8021929C
  c->lr=0x802192A4u; f_80382F2C(c); // 802192A0
  c->r[12]=R32(c->r[30]+0x00000610u); // 802192A4
  c->r[3]=c->r[30]+0x000005D8u; // 802192A8
  c->r[12]=R32(c->r[12]+0x00000008u); // 802192AC
  c->ctr=c->r[12]; // 802192B0
  if (true) { c->lr=0x802192B8u; dispatch(c,c->ctr); } // 802192B4
  c->r[3]=c->r[30]+0x000000FCu; // 802192B8
  c->r[4]=c->r[1]+0x000000C8u; // 802192BC
  c->lr=0x802192C4u; f_80078164(c); // 802192C0
  c->r[0]=R8(c->r[30]+0x000006A9u); // 802192C4
  cmps(c,0,(int32_t)c->r[0],0); // 802192C8
  if (crb(c,2)) { goto L_802192D8; } // 802192CC
  c->r[3]=c->r[30]|c->r[30]; // 802192D0
  c->lr=0x802192D8u; f_802192F0(c); // 802192D4
L_802192D8:;
  c->r[0]=R32(c->r[1]+0x00000114u); // 802192D8
  c->r[31]=R32(c->r[1]+0x0000010Cu); // 802192DC
  c->r[30]=R32(c->r[1]+0x00000108u); // 802192E0
  c->lr=c->r[0]; // 802192E4
  c->r[1]=c->r[1]+0x00000110u; // 802192E8
  return; // 802192EC
}

// fn_802192F0
void f_802192F0(Ctx* __restrict c) {
  trace_call(0x802192F0u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802192F0
  c->r[0]=c->lr; // 802192F4
  W32(c->r[1]+0x00000044u,c->r[0]); // 802192F8
  {uint32_t ea=c->r[1]+0x00000030u; for(int i=28;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 802192FC
  c->r[31]=c->r[1]|c->r[1]; // 80219300
  c->r[28]=c->r[3]|c->r[3]; // 80219304
  c->lr=0x8021930Cu; f_80062F1C(c); // 80219308
  c->r[4]=c->r[3]|c->r[3]; // 8021930C
  c->r[3]=c->r[28]|c->r[28]; // 80219310
  c->lr=0x80219318u; f_80062F4C(c); // 80219314
  c->r[0]=R8(c->r[28]+0x00000010u); // 80219318
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 8021931C
  c->r[3]=c->r[28]+c->r[0]; // 80219320
  c->r[29]=R32(c->r[3]+0x00000014u); // 80219324
  cmps(c,0,(int32_t)c->r[29],0); // 80219328
  if (crb(c,2)) { goto L_80219354; } // 8021932C
  c->r[30]=0u+0x00000000u; // 80219330
  W32(c->r[31]+0x00000024u,c->r[1]); // 80219334
  W8(c->r[31]+0x00000008u,c->r[30]); // 80219338
  c->lr=0x80219340u; f_80062F1C(c); // 8021933C
  W32(c->r[29]+0x00000000u,c->r[3]); // 80219340
  c->r[0]=c->r[13]+0xFFFF80E4u; // 80219344
  W32(c->r[29]+0x00000004u,c->r[0]); // 80219348
  W32(c->r[29]+0x00000008u,c->r[30]); // 8021934C
  W32(c->r[29]+0x0000000Cu,c->r[30]); // 80219350
L_80219354:;
  W32(c->r[28]+0x00000008u,c->r[29]); // 80219354
  c->r[0]=0u+0x00000000u; // 80219358
  c->r[3]=c->r[28]|c->r[28]; // 8021935C
  c->r[4]=c->r[29]|c->r[29]; // 80219360
  W32(c->r[29]+0x00000008u,c->r[0]); // 80219364
  c->r[0]=R32(c->r[28]+0x00000004u); // 80219368
  W32(c->r[28]+0x0000000Cu,c->r[0]); // 8021936C
  c->lr=0x80219374u; f_8006306C(c); // 80219370
  c->r[0]=R32(c->r[28]+0x000005BCu); // 80219374
  c->r[10]=c->r[31]|c->r[31]; // 80219378
  c->r[3]=c->r[29]|c->r[29]; // 8021937C
  c->r[0]=c->r[0]|0x40000000u; // 80219380
  W32(c->r[28]+0x000005BCu,c->r[0]); // 80219384
  {uint32_t ea=c->r[10]+0x00000030u; for(int i=28;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 80219388
  c->r[10]=R32(c->r[1]+0x00000000u); // 8021938C
  c->r[0]=R32(c->r[10]+0x00000004u); // 80219390
  c->r[1]=c->r[10]|c->r[10]; // 80219394
  c->lr=c->r[0]; // 80219398
  return; // 8021939C
}

// fn_802193A0
void f_802193A0(Ctx* __restrict c) {
  trace_call(0x802193A0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802193A0
  c->r[0]=c->lr; // 802193A4
  W32(c->r[1]+0x00000014u,c->r[0]); // 802193A8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 802193AC
  c->r[31]=c->r[3]|c->r[3]; // 802193B0
  c->r[4]=R32(c->r[3]+0x00000004u); // 802193B4
  cmps(c,0,(int32_t)c->r[4],0); // 802193B8
  if (crb(c,2)) { goto L_802193C8; } // 802193BC
  c->r[0]=R32(c->r[4]+0x00000008u); // 802193C0
  goto L_802193CC; // 802193C4
L_802193C8:;
  c->r[0]=0u+0x00000000u; // 802193C8
L_802193CC:;
  cmps(c,0,(int32_t)c->r[0],0); // 802193CC
  if (!crb(c,2)) { goto L_80219418; } // 802193D0
  c->r[3]=c->r[31]|c->r[31]; // 802193D4
  c->r[4]=0u+0x00000016u; // 802193D8
  c->r[5]=0u+0x00000001u; // 802193DC
  c->lr=0x802193E4u; f_800D5F20(c); // 802193E0
  c->r[3]=c->r[31]+0x000005D8u; // 802193E4
  c->r[4]=0u+0x00000000u; // 802193E8
  c->lr=0x802193F0u; f_80320C3C(c); // 802193EC
  c->r[3]=c->r[31]+0x00000614u; // 802193F0
  c->r[4]=0u+0x00000000u; // 802193F4
  c->lr=0x802193FCu; f_80320C3C(c); // 802193F8
  c->r[0]=0u+0x00000001u; // 802193FC
  W8(c->r[31]+0x00000650u,c->r[0]); // 80219400
  c->r[3]=c->r[31]+0x000005D0u; // 80219404
  c->lr=0x8021940Cu; f_800DBAA4(c); // 80219408
  c->lr=0x80219410u; f_8020ED10(c); // 8021940C
  c->r[3]=c->r[31]|c->r[31]; // 80219410
  c->lr=0x80219418u; f_8031749C(c); // 80219414
L_80219418:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80219418
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8021941C
  c->lr=c->r[0]; // 80219420
  c->r[1]=c->r[1]+0x00000010u; // 80219424
  return; // 80219428
}

// fn_8021942C
void f_8021942C(Ctx* __restrict c) {
  trace_call(0x8021942Cu);
  {uint32_t ea=c->r[1]+0xFFFFFF80u; W32(ea,c->r[1]); c->r[1]=ea;} // 8021942C
  c->r[0]=c->lr; // 80219430
  W32(c->r[1]+0x00000084u,c->r[0]); // 80219434
  W32(c->r[1]+0x0000007Cu,c->r[31]); // 80219438
  c->r[31]=c->r[3]|c->r[3]; // 8021943C
  c->r[4]=R32(c->r[3]+0x00000004u); // 80219440
  cmps(c,0,(int32_t)c->r[4],0); // 80219444
  if (crb(c,2)) { goto L_80219454; } // 80219448
  c->r[0]=R32(c->r[4]+0x00000008u); // 8021944C
  goto L_80219458; // 80219450
L_80219454:;
  c->r[0]=0u+0x00000000u; // 80219454
L_80219458:;
  cmps(c,0,(int32_t)c->r[0],0); // 80219458
  if (!crb(c,2)) { goto L_80219510; } // 8021945C
  c->r[3]=c->r[3]+0x000001B8u; // 80219460
  c->r[4]=c->r[1]+0x00000048u; // 80219464
  c->lr=0x8021946Cu; f_80382F2C(c); // 80219468
  c->r[3]=c->r[31]|c->r[31]; // 8021946C
  c->r[4]=0u+0x00000016u; // 80219470
  c->r[5]=0u+0x00000001u; // 80219474
  c->lr=0x8021947Cu; f_800D5F20(c); // 80219478
  c->r[3]=c->r[31]+0x000005D8u; // 8021947C
  c->r[4]=0u+0x00000000u; // 80219480
  c->lr=0x80219488u; f_80320C3C(c); // 80219484
  c->r[3]=c->r[1]+0x00000048u; // 80219488
  c->r[4]=c->r[31]+0x000005D8u; // 8021948C
  c->lr=0x80219494u; f_80382F2C(c); // 80219490
  c->r[12]=R32(c->r[31]+0x00000610u); // 80219494
  c->r[3]=c->r[31]+0x000005D8u; // 80219498
  c->r[12]=R32(c->r[12]+0x00000008u); // 8021949C
  c->ctr=c->r[12]; // 802194A0
  if (true) { c->lr=0x802194A8u; dispatch(c,c->ctr); } // 802194A4
  c->lr=0x802194ACu; f_8004DB5C(c); // 802194A8
  c->r[5]=0u+0x806A0000u; // 802194AC
  c->r[4]=c->r[3]|c->r[3]; // 802194B0
  c->r[5]=c->r[5]+0xFFFF8BF8u; // 802194B4
  c->r[3]=c->r[1]+0x00000008u; // 802194B8
  c->r[5]=c->r[5]+0x00000001u; // 802194BC
  c->r[6]=0u+0x00000001u; // 802194C0
  c->lr=0x802194C8u; f_80321B90(c); // 802194C4
  c->r[3]=c->r[31]+0x00000614u; // 802194C8
  c->r[4]=c->r[1]+0x00000008u; // 802194CC
  c->lr=0x802194D4u; f_80066080(c); // 802194D0
  c->r[3]=c->r[1]+0x00000048u; // 802194D4
  c->r[4]=c->r[31]+0x00000614u; // 802194D8
  c->lr=0x802194E0u; f_80382F2C(c); // 802194DC
  c->r[12]=R32(c->r[31]+0x0000064Cu); // 802194E0
  c->r[3]=c->r[31]+0x00000614u; // 802194E4
  c->r[12]=R32(c->r[12]+0x00000008u); // 802194E8
  c->ctr=c->r[12]; // 802194EC
  if (true) { c->lr=0x802194F4u; dispatch(c,c->ctr); } // 802194F0
  c->r[0]=0u+0x00000001u; // 802194F4
  W8(c->r[31]+0x00000650u,c->r[0]); // 802194F8
  c->r[3]=c->r[31]+0x000005D0u; // 802194FC
  c->lr=0x80219504u; f_800DBAA4(c); // 80219500
  c->lr=0x80219508u; f_8020ED10(c); // 80219504
  c->r[3]=c->r[31]|c->r[31]; // 80219508
  c->lr=0x80219510u; f_8031749C(c); // 8021950C
L_80219510:;
  c->r[0]=R32(c->r[1]+0x00000084u); // 80219510
  c->r[31]=R32(c->r[1]+0x0000007Cu); // 80219514
  c->lr=c->r[0]; // 80219518
  c->r[1]=c->r[1]+0x00000080u; // 8021951C
  return; // 80219520
}

// fn_80219524
void f_80219524(Ctx* __restrict c) {
  trace_call(0x80219524u);
  {uint32_t ea=c->r[2]+0xFFFFDEB8u; c->f[0]=c->ps1[0]=RF32(ea);} // 80219524
  c->r[4]=0u+0x00000001u; // 80219528
  c->r[0]=0u+0x00000000u; // 8021952C
  {uint32_t ea=c->r[3]+0x000006A0u; WF32(ea,c->f[0]);} // 80219530
  {uint32_t ea=c->r[3]+0x000006A4u; WF32(ea,c->f[1]);} // 80219534
  W8(c->r[3]+0x000006A8u,c->r[4]); // 80219538
  W8(c->r[3]+0x000006A9u,c->r[0]); // 8021953C
  return; // 80219540
}

// fn_80219544
void f_80219544(Ctx* __restrict c) {
  trace_call(0x80219544u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80219544
  c->r[0]=c->lr; // 80219548
  W32(c->r[1]+0x00000014u,c->r[0]); // 8021954C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80219550
  W32(c->r[1]+0x00000008u,c->r[30]); // 80219554
  c->r[30]=c->r[3]|c->r[3]; // 80219558
  c->r[0]=R8(c->r[3]+0x000006A8u); // 8021955C
  cmps(c,0,(int32_t)c->r[0],0); // 80219560
  if (crb(c,2)) { goto L_802195E4; } // 80219564
  c->r[0]=R8(c->r[13]+0xFFFFBB9Bu); // 80219568
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 8021956C
  if (!crb(c,2)) { goto L_802195AC; } // 80219570
  c->r[31]=0u+0x80730000u; // 80219574
  c->r[3]=c->r[31]+0x00006D10u; // 80219578
  c->lr=0x80219580u; f_802D8298(c); // 8021957C
  c->r[3]=0u+0x806D0000u; // 80219580
  c->r[4]=0u+0x80050000u; // 80219584
  c->r[3]=c->r[3]+0xFFFFC220u; // 80219588
  c->r[5]=0u+0x80750000u; // 8021958C
  W32(c->r[31]+0x00006D10u,c->r[3]); // 80219590
  c->r[3]=c->r[31]+0x00006D10u; // 80219594
  c->r[4]=c->r[4]+0xFFFF9D40u; // 80219598
  c->r[5]=c->r[5]+0x0000545Cu; // 8021959C
  c->lr=0x802195A4u; f_803A92B8(c); // 802195A0
  c->r[0]=0u+0x00000001u; // 802195A4
  W8(c->r[13]+0xFFFFBB9Bu,c->r[0]); // 802195A8
L_802195AC:;
  c->r[3]=0u+0x80730000u; // 802195AC
  {uint32_t ea=c->r[30]+0x000006A0u; c->f[1]=c->ps1[1]=RF32(ea);} // 802195B0
  c->r[3]=c->r[3]+0x00006D10u; // 802195B4
  {uint32_t ea=c->r[30]+0x000006A4u; c->f[0]=c->ps1[0]=RF32(ea);} // 802195B8
  {uint32_t ea=c->r[3]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 802195BC
  c->f[1]=c->ps1[1]=S(c->f[1]+c->f[2]); // 802195C0
  {uint32_t ea=c->r[30]+0x000006A0u; WF32(ea,c->f[1]);} // 802195C4
  fcmp(c,0,c->f[0],c->f[1]); // 802195C8
  setcrb(c,2,crb(c,0)|crb(c,2)); // 802195CC
  if (!crb(c,2)) { goto L_802195E4; } // 802195D0
  c->r[3]=0u+0x00000000u; // 802195D4
  c->r[0]=0u+0x00000001u; // 802195D8
  W8(c->r[30]+0x000006A8u,c->r[3]); // 802195DC
  W8(c->r[30]+0x000006A9u,c->r[0]); // 802195E0
L_802195E4:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 802195E4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 802195E8
  c->r[30]=R32(c->r[1]+0x00000008u); // 802195EC
  c->lr=c->r[0]; // 802195F0
  c->r[1]=c->r[1]+0x00000010u; // 802195F4
  return; // 802195F8
}

// fn_802195FC
void f_802195FC(Ctx* __restrict c) {
  trace_call(0x802195FCu);
  {uint32_t ea=c->r[1]+0xFFFFFF80u; W32(ea,c->r[1]); c->r[1]=ea;} // 802195FC
  c->r[0]=c->lr; // 80219600
  W32(c->r[1]+0x00000084u,c->r[0]); // 80219604
  c->r[11]=c->r[1]+0x00000080u; // 80219608
  c->lr=0x80219610u; { W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8021960C
  c->r[31]=c->r[1]|c->r[1]; // 80219610
  c->r[0]=R32(c->r[4]+0x00000000u); // 80219614
  cmps(c,0,(int32_t)c->r[5],0); // 80219618
  W32(c->r[3]+0x000005D0u,c->r[0]); // 8021961C
  c->r[30]=c->r[3]|c->r[3]; // 80219620
  {uint32_t ea=c->r[2]+0xFFFFDE94u; c->f[0]=c->ps1[0]=RF32(ea);} // 80219624
  c->r[0]=R32(c->r[4]+0x00000004u); // 80219628
  W32(c->r[3]+0x000005D4u,c->r[0]); // 8021962C
  {uint32_t ea=c->r[3]+0x00000688u; WF32(ea,c->f[1]);} // 80219630
  {uint32_t ea=c->r[3]+0x0000068Cu; WF32(ea,c->f[2]);} // 80219634
  {uint32_t ea=c->r[3]+0x00000690u; WF32(ea,c->f[0]);} // 80219638
  if (crb(c,2)) { goto L_8021965C; } // 8021963C
  cmps(c,0,(int32_t)c->r[5],1); // 80219640
  if (crb(c,2)) { goto L_8021968C; } // 80219644
  cmps(c,0,(int32_t)c->r[5],2); // 80219648
  if (crb(c,2)) { goto L_802196BC; } // 8021964C
  cmps(c,0,(int32_t)c->r[5],3); // 80219650
  if (crb(c,2)) { goto L_802196EC; } // 80219654
  goto L_80219718; // 80219658
L_8021965C:;
  c->r[4]=0u+0x806A0000u; // 8021965C
  c->r[3]=c->r[3]+0x000005D0u; // 80219660
  c->r[4]=c->r[4]+0xFFFF8BF8u; // 80219664
  c->r[29]=c->r[4]+0x00000012u; // 80219668
  c->lr=0x80219670u; f_800DBAA4(c); // 8021966C
  c->r[4]=c->r[29]|c->r[29]; // 80219670
  c->r[3]=c->r[3]+0x000000FCu; // 80219674
  c->lr=0x8021967Cu; f_802E6F14(c); // 80219678
  c->r[4]=c->r[3]|c->r[3]; // 8021967C
  c->r[3]=c->r[30]|c->r[30]; // 80219680
  c->lr=0x80219688u; f_8005CE00(c); // 80219684
  goto L_80219718; // 80219688
L_8021968C:;
  c->r[4]=0u+0x806A0000u; // 8021968C
  c->r[3]=c->r[3]+0x000005D0u; // 80219690
  c->r[4]=c->r[4]+0xFFFF8BF8u; // 80219694
  c->r[29]=c->r[4]+0x0000001Fu; // 80219698
  c->lr=0x802196A0u; f_800DBAA4(c); // 8021969C
  c->r[4]=c->r[29]|c->r[29]; // 802196A0
  c->r[3]=c->r[3]+0x000000FCu; // 802196A4
  c->lr=0x802196ACu; f_802E6F14(c); // 802196A8
  c->r[4]=c->r[3]|c->r[3]; // 802196AC
  c->r[3]=c->r[30]|c->r[30]; // 802196B0
  c->lr=0x802196B8u; f_8005CE00(c); // 802196B4
  goto L_80219718; // 802196B8
L_802196BC:;
  c->r[4]=0u+0x806A0000u; // 802196BC
  c->r[3]=c->r[3]+0x000005D0u; // 802196C0
  c->r[4]=c->r[4]+0xFFFF8BF8u; // 802196C4
  c->r[29]=c->r[4]+0x0000002Cu; // 802196C8
  c->lr=0x802196D0u; f_800DBAA4(c); // 802196CC
  c->r[4]=c->r[29]|c->r[29]; // 802196D0
  c->r[3]=c->r[3]+0x000000FCu; // 802196D4
  c->lr=0x802196DCu; f_802E6F14(c); // 802196D8
  c->r[4]=c->r[3]|c->r[3]; // 802196DC
  c->r[3]=c->r[30]|c->r[30]; // 802196E0
  c->lr=0x802196E8u; f_8005CE00(c); // 802196E4
  goto L_80219718; // 802196E8
L_802196EC:;
  c->r[4]=0u+0x806A0000u; // 802196EC
  c->r[3]=c->r[3]+0x000005D0u; // 802196F0
  c->r[4]=c->r[4]+0xFFFF8BF8u; // 802196F4
  c->r[29]=c->r[4]+0x00000039u; // 802196F8
  c->lr=0x80219700u; f_800DBAA4(c); // 802196FC
  c->r[4]=c->r[29]|c->r[29]; // 80219700
  c->r[3]=c->r[3]+0x000000FCu; // 80219704
  c->lr=0x8021970Cu; f_802E6F14(c); // 80219708
  c->r[4]=c->r[3]|c->r[3]; // 8021970C
  c->r[3]=c->r[30]|c->r[30]; // 80219710
  c->lr=0x80219718u; f_8005CE00(c); // 80219714
L_80219718:;
  c->lr=0x8021971Cu; f_8004DB5C(c); // 80219718
  c->r[5]=0u+0x806A0000u; // 8021971C
  c->r[4]=c->r[3]|c->r[3]; // 80219720
  c->r[5]=c->r[5]+0xFFFF8BF8u; // 80219724
  c->r[3]=c->r[31]+0x00000028u; // 80219728
  c->r[5]=c->r[5]+0x00000046u; // 8021972C
  c->r[6]=0u+0x00000001u; // 80219730
  c->lr=0x80219738u; f_80321B90(c); // 80219734
  c->r[3]=c->r[30]+0x000005D8u; // 80219738
  c->r[4]=c->r[31]+0x00000028u; // 8021973C
  c->lr=0x80219744u; f_80066080(c); // 80219740
  c->r[3]=c->r[30]+0x000001B8u; // 80219744
  c->r[4]=c->r[30]+0x000005D8u; // 80219748
  c->lr=0x80219750u; f_80382F2C(c); // 8021974C
  c->r[12]=R32(c->r[30]+0x00000610u); // 80219750
  c->r[3]=c->r[30]+0x000005D8u; // 80219754
  c->r[12]=R32(c->r[12]+0x00000008u); // 80219758
  c->ctr=c->r[12]; // 8021975C
  if (true) { c->lr=0x80219764u; dispatch(c,c->ctr); } // 80219760
  c->lr=0x80219768u; f_80062EBC(c); // 80219764
  c->r[4]=c->r[3]|c->r[3]; // 80219768
  c->r[3]=c->r[30]|c->r[30]; // 8021976C
  c->lr=0x80219774u; f_80062F4C(c); // 80219770
  c->r[0]=R8(c->r[30]+0x00000010u); // 80219774
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80219778
  c->r[3]=c->r[30]+c->r[0]; // 8021977C
  c->r[28]=R32(c->r[3]+0x00000014u); // 80219780
  cmps(c,0,(int32_t)c->r[28],0); // 80219784
  if (crb(c,2)) { goto L_802197B0; } // 80219788
  c->r[29]=0u+0x00000000u; // 8021978C
  W32(c->r[31]+0x00000024u,c->r[1]); // 80219790
  W8(c->r[31]+0x00000008u,c->r[29]); // 80219794
  c->lr=0x8021979Cu; f_80062EBC(c); // 80219798
  W32(c->r[28]+0x00000000u,c->r[3]); // 8021979C
  c->r[0]=c->r[13]+0xFFFF80D8u; // 802197A0
  W32(c->r[28]+0x00000004u,c->r[0]); // 802197A4
  W32(c->r[28]+0x00000008u,c->r[29]); // 802197A8
  W32(c->r[28]+0x0000000Cu,c->r[29]); // 802197AC
L_802197B0:;
  W32(c->r[30]+0x00000008u,c->r[28]); // 802197B0
  c->r[0]=0u+0x00000000u; // 802197B4
  c->r[3]=c->r[30]|c->r[30]; // 802197B8
  c->r[4]=c->r[28]|c->r[28]; // 802197BC
  W32(c->r[28]+0x00000008u,c->r[0]); // 802197C0
  c->r[0]=R32(c->r[30]+0x00000004u); // 802197C4
  W32(c->r[30]+0x0000000Cu,c->r[0]); // 802197C8
  c->lr=0x802197D0u; f_8006306C(c); // 802197CC
  c->r[0]=R32(c->r[30]+0x000005BCu); // 802197D0
  c->r[10]=c->r[31]|c->r[31]; // 802197D4
  c->r[11]=c->r[10]+0x00000080u; // 802197D8
  c->r[0]=c->r[0]|0x40000000u; // 802197DC
  W32(c->r[30]+0x000005BCu,c->r[0]); // 802197E0
  c->lr=0x802197E8u; { c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 802197E4
  c->r[10]=R32(c->r[1]+0x00000000u); // 802197E8
  c->r[0]=R32(c->r[10]+0x00000004u); // 802197EC
  c->r[1]=c->r[10]|c->r[10]; // 802197F0
  c->lr=c->r[0]; // 802197F4
  return; // 802197F8
}

// fn_802197FC
void f_802197FC(Ctx* __restrict c) {
  trace_call(0x802197FCu);
  return; // 802197FC
}

// fn_80219800
void f_80219800(Ctx* __restrict c) {
  trace_call(0x80219800u);
  c->r[3]=c->r[3]+0xFFFFFCACu; // 80219800
  f_80218F1C(c); return; // 80219804
}

// fn_80219808
void f_80219808(Ctx* __restrict c) {
  trace_call(0x80219808u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80219808
  c->r[0]=c->lr; // 8021980C
  W32(c->r[1]+0x00000014u,c->r[0]); // 80219810
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80219814
  c->r[31]=c->r[3]|c->r[3]; // 80219818
  c->lr=0x80219820u; f_8021EDC0(c); // 8021981C
  c->r[4]=0u+0x806E0000u; // 80219820
  c->r[3]=c->r[31]|c->r[31]; // 80219824
  c->r[4]=c->r[4]+0x00006FD0u; // 80219828
  W32(c->r[31]+0x0000002Cu,c->r[4]); // 8021982C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80219830
  c->r[0]=R32(c->r[1]+0x00000014u); // 80219834
  c->lr=c->r[0]; // 80219838
  c->r[1]=c->r[1]+0x00000010u; // 8021983C
  return; // 80219840
}

// dtor_80219844
void f_80219844(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80219844
  c->r[0]=c->lr; // 80219848
  cmps(c,0,(int32_t)c->r[3],0); // 8021984C
  W32(c->r[1]+0x00000014u,c->r[0]); // 80219850
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80219854
  c->r[31]=c->r[3]|c->r[3]; // 80219858
  if (crb(c,2)) { goto L_80219868; } // 8021985C
  c->r[4]=0u+0x00000000u; // 80219860
  c->lr=0x80219868u; f_8021EE18(c); // 80219864
L_80219868:;
  c->r[3]=c->r[31]|c->r[31]; // 80219868
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8021986C
  c->r[0]=R32(c->r[1]+0x00000014u); // 80219870
  c->lr=c->r[0]; // 80219874
  c->r[1]=c->r[1]+0x00000010u; // 80219878
  return; // 8021987C
}

// fn_80219880
void f_80219880(Ctx* __restrict c) {
  trace_call(0x80219880u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80219880
  c->r[0]=c->lr; // 80219884
  W32(c->r[1]+0x00000044u,c->r[0]); // 80219888
  c->r[11]=c->r[1]+0x00000040u; // 8021988C
  c->lr=0x80219894u; { W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80219890
  c->r[26]=c->r[3]|c->r[3]; // 80219894
  c->r[31]=0u+0x806A0000u; // 80219898
  c->r[30]=c->r[26]|c->r[26]; // 8021989C
  c->r[27]=c->r[26]|c->r[26]; // 802198A0
  c->r[29]=c->r[26]|c->r[26]; // 802198A4
  c->r[31]=c->r[31]+0xFFFF8DB0u; // 802198A8
  c->lr=0x802198B0u; f_8021A630(c); // 802198AC
  c->r[4]=0u+0x806D0000u; // 802198B0
  c->r[28]=addc(c,c->r[26],0x00000020u,0); cr0(c,c->r[28]); // 802198B4
  c->r[0]=0u+0x00000000u; // 802198B8
  W32(c->r[26]+0x00000000u,c->r[3]); // 802198BC
  c->r[4]=c->r[4]+0x000038C0u; // 802198C0
  W32(c->r[26]+0x0000001Cu,c->r[4]); // 802198C4
  W32(c->r[26]+0x00000004u,c->r[0]); // 802198C8
  W32(c->r[26]+0x00000008u,c->r[0]); // 802198CC
  W32(c->r[26]+0x0000000Cu,c->r[0]); // 802198D0
  W8(c->r[26]+0x00000010u,c->r[0]); // 802198D4
  W32(c->r[26]+0x00000014u,c->r[0]); // 802198D8
  W32(c->r[26]+0x00000018u,c->r[0]); // 802198DC
  W32(c->r[26]+0x00000020u,c->r[0]); // 802198E0
  W32(c->r[26]+0x00000024u,c->r[0]); // 802198E4
  if (crb(c,2)) { goto L_802198F0; } // 802198E8
  c->r[28]=c->r[28]+0xFFFFFFE0u; // 802198EC
L_802198F0:;
  c->lr=0x802198F4u; f_800797AC(c); // 802198F0
  c->r[0]=R32(c->r[3]+0x00000000u); // 802198F4
  c->r[0]=addc(c,c->r[0],0x00000001u,0); cr0(c,c->r[0]); // 802198F8
  W32(c->r[3]+0x00000000u,c->r[0]); // 802198FC
  if (!crb(c,2)) { goto L_8021990C; } // 80219900
  c->r[0]=0u+0x00000001u; // 80219904
  W32(c->r[3]+0x00000000u,c->r[0]); // 80219908
L_8021990C:;
  c->r[7]=R32(c->r[3]+0x00000004u); // 8021990C
  c->r[5]=0u+0x0000012Cu; // 80219910
  c->r[4]=c->r[7]+0x00000001u; // 80219914
  c->r[0]=divwu(c->r[4],c->r[5]); // 80219918
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)c->r[5]); // 8021991C
  c->r[6]=c->r[4]-c->r[0]; // 80219920
  goto L_80219970; // 80219924
L_80219928:;
  c->r[0]=rotl(c->r[6],3)&0xFFFFFFF8u; // 80219928
  c->r[4]=c->r[3]+c->r[0]; // 8021992C
  c->r[0]=R32(c->r[4]+0x00000008u); // 80219930
  cmps(c,0,(int32_t)c->r[0],0); // 80219934
  if (!crb(c,2)) { goto L_80219960; } // 80219938
  W32(c->r[3]+0x00000004u,c->r[6]); // 8021993C
  c->r[0]=R32(c->r[3]+0x00000000u); // 80219940
  W32(c->r[4]+0x00000008u,c->r[0]); // 80219944
  W32(c->r[4]+0x0000000Cu,c->r[28]); // 80219948
  c->r[4]=R32(c->r[3]+0x00000000u); // 8021994C
  c->r[0]=R32(c->r[3]+0x00000004u); // 80219950
  W32(c->r[1]+0x00000010u,c->r[4]); // 80219954
  W32(c->r[1]+0x00000014u,c->r[0]); // 80219958
  goto L_8021998C; // 8021995C
L_80219960:;
  c->r[4]=c->r[6]+0x00000001u; // 80219960
  c->r[0]=divwu(c->r[4],c->r[5]); // 80219964
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)c->r[5]); // 80219968
  c->r[6]=c->r[4]-c->r[0]; // 8021996C
L_80219970:;
  cmpu(c,0,c->r[6],c->r[7]); // 80219970
  if (!crb(c,2)) { IRQCHK(c); goto L_80219928; } // 80219974
  c->r[0]=0u+0x00000000u; // 80219978
  W32(c->r[1]+0x00000008u,c->r[0]); // 8021997C
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 80219980
  W32(c->r[1]+0x00000010u,c->r[0]); // 80219984
  W32(c->r[1]+0x00000014u,c->r[0]); // 80219988
L_8021998C:;
  c->r[4]=R32(c->r[1]+0x00000010u); // 8021998C
  c->r[24]=c->r[26]+0x00000028u; // 80219990
  c->r[0]=R32(c->r[1]+0x00000014u); // 80219994
  c->r[3]=c->r[24]|c->r[24]; // 80219998
  W32(c->r[1]+0x00000018u,c->r[4]); // 8021999C
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 802199A0
  W32(c->r[26]+0x00000020u,c->r[4]); // 802199A4
  W32(c->r[26]+0x00000024u,c->r[0]); // 802199A8
  c->lr=0x802199B0u; f_800506C0(c); // 802199AC
  cmps(c,0,(int32_t)c->r[24],0); // 802199B0
  c->r[3]=c->r[24]|c->r[24]; // 802199B4
  if (crb(c,2)) { goto L_802199C0; } // 802199B8
  c->r[3]=c->r[24]+0xFFFFFFD8u; // 802199BC
L_802199C0:;
  c->r[28]=0u+0x00000001u; // 802199C0
  W32(c->r[24]+0x00000008u,c->r[3]); // 802199C4
  W8(c->r[24]+0x0000000Cu,c->r[28]); // 802199C8
  c->r[0]=R8(c->r[13]+0xFFFFBE09u); // 802199CC
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 802199D0
  if (!crb(c,2)) { goto L_80219A14; } // 802199D4
  c->r[25]=0u+0x80740000u; // 802199D8
  c->r[3]=c->r[25]+0x000074BCu; // 802199DC
  c->lr=0x802199E4u; f_800506C0(c); // 802199E0
  c->r[6]=0u+0x806D0000u; // 802199E4
  c->r[4]=0u+0x80060000u; // 802199E8
  c->r[6]=c->r[6]+0xFFFFE3A0u; // 802199EC
  c->r[3]=c->r[25]+0x000074BCu; // 802199F0
  c->r[0]=c->r[6]+0x00000008u; // 802199F4
  c->r[5]=0u+0x80750000u; // 802199F8
  W32(c->r[3]+0x00000010u,c->r[6]); // 802199FC
  c->r[4]=c->r[4]+0x000057D4u; // 80219A00
  c->r[5]=c->r[5]+0x000054A4u; // 80219A04
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 80219A08
  c->lr=0x80219A10u; f_803A92B8(c); // 80219A0C
  W8(c->r[13]+0xFFFFBE09u,c->r[28]); // 80219A10
L_80219A14:;
  c->r[3]=0u+0x80740000u; // 80219A14
  c->r[5]=c->r[24]|c->r[24]; // 80219A18
  c->r[3]=c->r[3]+0x000074BCu; // 80219A1C
  c->r[4]=c->r[3]|c->r[3]; // 80219A20
  c->lr=0x80219A28u; f_802DDCA8(c); // 80219A24
  c->r[25]=c->r[26]+0x00000038u; // 80219A28
  c->r[3]=c->r[25]|c->r[25]; // 80219A2C
  c->lr=0x80219A34u; f_800506C0(c); // 80219A30
  cmps(c,0,(int32_t)c->r[25],0); // 80219A34
  c->r[0]=c->r[25]|c->r[25]; // 80219A38
  if (crb(c,2)) { goto L_80219A44; } // 80219A3C
  c->r[0]=c->r[25]+0xFFFFFFC8u; // 80219A40
L_80219A44:;
  c->r[28]=c->r[26]+0x00000044u; // 80219A44
  W32(c->r[25]+0x00000008u,c->r[0]); // 80219A48
  c->r[3]=c->r[28]|c->r[28]; // 80219A4C
  c->lr=0x80219A54u; f_800506C0(c); // 80219A50
  cmps(c,0,(int32_t)c->r[28],0); // 80219A54
  c->r[0]=c->r[28]|c->r[28]; // 80219A58
  if (crb(c,2)) { goto L_80219A64; } // 80219A5C
  c->r[0]=c->r[28]+0xFFFFFFBCu; // 80219A60
L_80219A64:;
  c->r[3]=0u+0x806F0000u; // 80219A64
  c->r[25]=0u+0x00000000u; // 80219A68
  c->r[3]=c->r[3]+0x00000E80u; // 80219A6C
  W32(c->r[28]+0x00000008u,c->r[0]); // 80219A70
  W8(c->r[28]+0x0000000Cu,c->r[25]); // 80219A74
  W32(c->r[26]+0x0000001Cu,c->r[3]); // 80219A78
  W32(c->r[26]+0x00000058u,c->r[25]); // 80219A7C
  W32(c->r[26]+0x00000064u,c->r[25]); // 80219A80
  c->lr=0x80219A88u; f_8007BDCC(c); // 80219A84
  c->r[0]=c->r[13]+0xFFFF8114u; // 80219A88
  W32(c->r[26]+0x0000009Cu,c->r[3]); // 80219A8C
  W32(c->r[26]+0x000000A0u,c->r[0]); // 80219A90
  W32(c->r[26]+0x000000A4u,c->r[25]); // 80219A94
  c->r[0]=R8(c->r[13]+0xFFFFBE54u); // 80219A98
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 80219A9C
  if (!crb(c,2)) { goto L_80219AC0; } // 80219AA0
  c->r[4]=R32(c->r[13]+0xFFFFBCC4u); // 80219AA4
  c->r[0]=0u+0x00000001u; // 80219AA8
  W32(c->r[13]+0xFFFFBDF8u,c->r[4]); // 80219AAC
  c->r[3]=c->r[4]+0x00000001u; // 80219AB0
  W32(c->r[13]+0xFFFFBCC4u,c->r[3]); // 80219AB4
  W32(c->r[13]+0xFFFFBE50u,c->r[4]); // 80219AB8
  W8(c->r[13]+0xFFFFBE54u,c->r[0]); // 80219ABC
L_80219AC0:;
  c->r[4]=R32(c->r[13]+0xFFFFBE50u); // 80219AC0
  c->r[3]=c->r[13]+0xFFFF8110u; // 80219AC4
  c->r[0]=0u+0x00000000u; // 80219AC8
  W32(c->r[26]+0x000000A8u,c->r[4]); // 80219ACC
  W32(c->r[26]+0x000000ACu,c->r[3]); // 80219AD0
  W32(c->r[26]+0x000000B0u,c->r[0]); // 80219AD4
  c->r[0]=R8(c->r[13]+0xFFFFBE5Cu); // 80219AD8
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 80219ADC
  if (!crb(c,2)) { goto L_80219B00; } // 80219AE0
  c->r[4]=R32(c->r[13]+0xFFFFBCC4u); // 80219AE4
  c->r[0]=0u+0x00000001u; // 80219AE8
  W32(c->r[13]+0xFFFFBDF8u,c->r[4]); // 80219AEC
  c->r[3]=c->r[4]+0x00000001u; // 80219AF0
  W32(c->r[13]+0xFFFFBCC4u,c->r[3]); // 80219AF4
  W32(c->r[13]+0xFFFFBE58u,c->r[4]); // 80219AF8
  W8(c->r[13]+0xFFFFBE5Cu,c->r[0]); // 80219AFC
L_80219B00:;
  c->r[4]=R32(c->r[13]+0xFFFFBE58u); // 80219B00
  c->r[3]=c->r[13]+0xFFFF810Cu; // 80219B04
  c->r[0]=0u+0x00000000u; // 80219B08
  W32(c->r[26]+0x000000B4u,c->r[4]); // 80219B0C
  W32(c->r[26]+0x000000B8u,c->r[3]); // 80219B10
  W32(c->r[26]+0x000000BCu,c->r[0]); // 80219B14
  c->r[0]=R8(c->r[13]+0xFFFFBE64u); // 80219B18
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 80219B1C
  if (!crb(c,2)) { goto L_80219B40; } // 80219B20
  c->r[4]=R32(c->r[13]+0xFFFFBCC4u); // 80219B24
  c->r[0]=0u+0x00000001u; // 80219B28
  W32(c->r[13]+0xFFFFBDF8u,c->r[4]); // 80219B2C
  c->r[3]=c->r[4]+0x00000001u; // 80219B30
  W32(c->r[13]+0xFFFFBCC4u,c->r[3]); // 80219B34
  W32(c->r[13]+0xFFFFBE60u,c->r[4]); // 80219B38
  W8(c->r[13]+0xFFFFBE64u,c->r[0]); // 80219B3C
L_80219B40:;
  c->r[4]=R32(c->r[13]+0xFFFFBE60u); // 80219B40
  c->r[3]=c->r[13]+0xFFFF8108u; // 80219B44
  c->r[0]=0u+0x00000000u; // 80219B48
  W32(c->r[26]+0x000000C0u,c->r[4]); // 80219B4C
  W32(c->r[26]+0x000000C4u,c->r[3]); // 80219B50
  W32(c->r[26]+0x000000C8u,c->r[0]); // 80219B54
  c->r[0]=R8(c->r[13]+0xFFFFBE6Cu); // 80219B58
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 80219B5C
  if (!crb(c,2)) { goto L_80219B80; } // 80219B60
  c->r[4]=R32(c->r[13]+0xFFFFBCC4u); // 80219B64
  c->r[0]=0u+0x00000001u; // 80219B68
  W32(c->r[13]+0xFFFFBDF8u,c->r[4]); // 80219B6C
  c->r[3]=c->r[4]+0x00000001u; // 80219B70
  W32(c->r[13]+0xFFFFBCC4u,c->r[3]); // 80219B74
  W32(c->r[13]+0xFFFFBE68u,c->r[4]); // 80219B78
  W8(c->r[13]+0xFFFFBE6Cu,c->r[0]); // 80219B7C
L_80219B80:;
  c->r[3]=R32(c->r[13]+0xFFFFBE68u); // 80219B80
  c->r[0]=c->r[13]+0xFFFF8104u; // 80219B84
  c->r[25]=0u+0x00000000u; // 80219B88
  W32(c->r[26]+0x000000CCu,c->r[3]); // 80219B8C
  c->r[3]=c->r[26]+0x000000D8u; // 80219B90
  W32(c->r[26]+0x000000D0u,c->r[0]); // 80219B94
  W32(c->r[26]+0x000000D4u,c->r[25]); // 80219B98
  c->lr=0x80219BA0u; f_800506C0(c); // 80219B9C
  c->r[4]=0u+0x806F0000u; // 80219BA0
  c->r[3]=0u+0x00000006u; // 80219BA4
  c->r[4]=c->r[4]+0x000007A0u; // 80219BA8
  c->r[28]=c->r[26]+0x000000FCu; // 80219BAC
  c->r[0]=c->r[4]+0x00000024u; // 80219BB0
  W32(c->r[26]+0x000000E8u,c->r[3]); // 80219BB4
  c->r[3]=c->r[28]+0x0000000Cu; // 80219BB8
  W32(c->r[26]+0x000000ECu,c->r[25]); // 80219BBC
  W32(c->r[26]+0x000000F8u,c->r[25]); // 80219BC0
  W32(c->r[26]+0x000000FCu,c->r[4]); // 80219BC4
  W32(c->r[26]+0x00000100u,c->r[0]); // 80219BC8
  c->lr=0x80219BD0u; f_800506C0(c); // 80219BCC
  c->r[3]=c->r[28]+0x00000018u; // 80219BD0
  c->lr=0x80219BD8u; f_800506C0(c); // 80219BD4
  W32(c->r[28]+0x00000024u,c->r[25]); // 80219BD8
  c->r[3]=c->r[28]+0x000000B0u; // 80219BDC
  c->lr=0x80219BE4u; f_800506C0(c); // 80219BE0
  c->r[12]=R32(c->r[28]+0x00000000u); // 80219BE4
  c->r[3]=c->r[28]|c->r[28]; // 80219BE8
  c->r[12]=R32(c->r[12]+0x0000003Cu); // 80219BEC
  c->ctr=c->r[12]; // 80219BF0
  if (true) { c->lr=0x80219BF8u; dispatch(c,c->ctr); } // 80219BF4
  c->r[0]=R8(c->r[13]+0xFFFFBE74u); // 80219BF8
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 80219BFC
  if (!crb(c,2)) { goto L_80219C1C; } // 80219C00
  c->r[3]=R32(c->r[13]+0xFFFFBE78u); // 80219C04
  c->r[0]=0u+0x00000001u; // 80219C08
  W32(c->r[13]+0xFFFFBE70u,c->r[3]); // 80219C0C
  c->r[3]=c->r[3]+0x00000001u; // 80219C10
  W32(c->r[13]+0xFFFFBE78u,c->r[3]); // 80219C14
  W8(c->r[13]+0xFFFFBE74u,c->r[0]); // 80219C18
L_80219C1C:;
  c->r[3]=R32(c->r[13]+0xFFFFBE70u); // 80219C1C
  c->r[5]=0u+0x806F0000u; // 80219C20
  c->r[5]=c->r[5]+0x000007F8u; // 80219C24
  c->r[0]=0u+0x00000032u; // 80219C28
  c->r[4]=c->r[5]+0x00000024u; // 80219C2C
  W32(c->r[28]+0x00000008u,c->r[3]); // 80219C30
  c->r[6]=0u+0x00000000u; // 80219C34
  c->r[3]=0u+0x00000000u; // 80219C38
  W32(c->r[28]+0x00000000u,c->r[5]); // 80219C3C
  W32(c->r[28]+0x00000004u,c->r[4]); // 80219C40
  c->ctr=c->r[0]; // 80219C44
L_80219C48:;
  c->r[4]=c->r[28]+c->r[3]; // 80219C48
  c->r[3]=c->r[3]+0x00000004u; // 80219C4C
  W32(c->r[4]+0x0000014Cu,c->r[6]); // 80219C50
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80219C48; } // 80219C54
  c->r[3]=0u+0x806D0000u; // 80219C58
  c->r[7]=0u+0x00000000u; // 80219C5C
  c->r[3]=c->r[3]+0x00003868u; // 80219C60
  c->r[0]=0u+0x0000000Au; // 80219C64
  c->r[4]=c->r[3]+0x00000024u; // 80219C68
  W32(c->r[28]+0x00000000u,c->r[3]); // 80219C6C
  c->r[8]=0u+0x00000000u; // 80219C70
  c->r[3]=0u+0x00000000u; // 80219C74
  W32(c->r[28]+0x00000004u,c->r[4]); // 80219C78
  c->r[6]=0u+0xFFFFFFFFu; // 80219C7C
  W32(c->r[26]+0x00000314u,c->r[7]); // 80219C80
  W8(c->r[26]+0x0000005Cu,c->r[7]); // 80219C84
  W32(c->r[26]+0x00000054u,c->r[7]); // 80219C88
  W32(c->r[26]+0x00000310u,c->r[26]); // 80219C8C
  c->ctr=c->r[0]; // 80219C90
L_80219C94:;
  c->r[5]=c->r[26]+c->r[3]; // 80219C94
  c->r[4]=c->r[26]+c->r[8]; // 80219C98
  W32(c->r[5]+0x00000068u,c->r[6]); // 80219C9C
  c->r[8]=c->r[8]+0x00000001u; // 80219CA0
  c->r[3]=c->r[3]+0x00000004u; // 80219CA4
  W8(c->r[4]+0x00000090u,c->r[7]); // 80219CA8
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80219C94; } // 80219CAC
  c->r[24]=c->r[26]+0x00000318u; // 80219CB0
  c->r[3]=c->r[24]|c->r[24]; // 80219CB4
  c->lr=0x80219CBCu; f_800506C0(c); // 80219CB8
  cmps(c,0,(int32_t)c->r[24],0); // 80219CBC
  c->r[3]=c->r[24]|c->r[24]; // 80219CC0
  if (crb(c,2)) { goto L_80219CCC; } // 80219CC4
  c->r[3]=c->r[24]+0xFFFFFCE8u; // 80219CC8
L_80219CCC:;
  c->r[29]=0u+0x00000001u; // 80219CCC
  W32(c->r[24]+0x00000008u,c->r[3]); // 80219CD0
  W8(c->r[24]+0x0000000Cu,c->r[29]); // 80219CD4
  c->r[0]=R8(c->r[13]+0xFFFFBE9Eu); // 80219CD8
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 80219CDC
  if (!crb(c,2)) { goto L_80219D20; } // 80219CE0
  c->r[28]=0u+0x80750000u; // 80219CE4
  c->r[3]=c->r[28]+0xFFFF816Cu; // 80219CE8
  c->lr=0x80219CF0u; f_800506C0(c); // 80219CEC
  c->r[6]=0u+0x806D0000u; // 80219CF0
  c->r[4]=0u+0x80080000u; // 80219CF4
  c->r[6]=c->r[6]+0x000038D8u; // 80219CF8
  c->r[3]=c->r[28]+0xFFFF816Cu; // 80219CFC
  c->r[0]=c->r[6]+0x00000008u; // 80219D00
  c->r[5]=0u+0x80750000u; // 80219D04
  W32(c->r[3]+0x00000010u,c->r[6]); // 80219D08
  c->r[4]=c->r[4]+0xFFFF9844u; // 80219D0C
  c->r[5]=c->r[5]+0x00005498u; // 80219D10
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 80219D14
  c->lr=0x80219D1Cu; f_803A92B8(c); // 80219D18
  W8(c->r[13]+0xFFFFBE9Eu,c->r[29]); // 80219D1C
L_80219D20:;
  c->r[3]=0u+0x80750000u; // 80219D20
  c->r[5]=c->r[24]|c->r[24]; // 80219D24
  c->r[3]=c->r[3]+0xFFFF816Cu; // 80219D28
  c->r[4]=c->r[3]|c->r[3]; // 80219D2C
  c->lr=0x80219D34u; f_802DDCA8(c); // 80219D30
  c->r[3]=0u+0x806D0000u; // 80219D34
  c->r[0]=0u+0x00000000u; // 80219D38
  c->r[3]=c->r[3]+0xFFFFD974u; // 80219D3C
  c->r[5]=0u+0xFFFFFFFFu; // 80219D40
  c->r[4]=0u+0x00000001u; // 80219D44
  c->r[25]=c->r[26]+0x0000032Cu; // 80219D48
  W32(c->r[26]+0x0000001Cu,c->r[3]); // 80219D4C
  c->r[3]=c->r[25]|c->r[25]; // 80219D50
  W32(c->r[26]+0x00000328u,c->r[5]); // 80219D54
  W32(c->r[26]+0x000000ECu,c->r[4]); // 80219D58
  W32(c->r[26]+0x00000054u,c->r[0]); // 80219D5C
  W32(c->r[26]+0x00000314u,c->r[0]); // 80219D60
  c->lr=0x80219D68u; f_800506C0(c); // 80219D64
  cmps(c,0,(int32_t)c->r[25],0); // 80219D68
  c->r[3]=c->r[25]|c->r[25]; // 80219D6C
  if (crb(c,2)) { goto L_80219D78; } // 80219D70
  c->r[3]=c->r[25]+0xFFFFFCD4u; // 80219D74
L_80219D78:;
  c->r[28]=0u+0x00000001u; // 80219D78
  W32(c->r[25]+0x00000008u,c->r[3]); // 80219D7C
  W8(c->r[25]+0x0000000Cu,c->r[28]); // 80219D80
  c->r[0]=R8(c->r[13]+0xFFFFBBA9u); // 80219D84
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 80219D88
  if (!crb(c,2)) { goto L_80219DCC; } // 80219D8C
  c->r[27]=0u+0x80730000u; // 80219D90
  c->r[3]=c->r[27]+0x000073A8u; // 80219D94
  c->lr=0x80219D9Cu; f_800506C0(c); // 80219D98
  c->r[6]=0u+0x806D0000u; // 80219D9C
  c->r[4]=0u+0x80050000u; // 80219DA0
  c->r[6]=c->r[6]+0xFFFFC8C8u; // 80219DA4
  c->r[3]=c->r[27]+0x000073A8u; // 80219DA8
  c->r[0]=c->r[6]+0x00000008u; // 80219DAC
  c->r[5]=0u+0x80750000u; // 80219DB0
  W32(c->r[3]+0x00000010u,c->r[6]); // 80219DB4
  c->r[4]=c->r[4]+0xFFFFCF9Cu; // 80219DB8
  c->r[5]=c->r[5]+0x0000548Cu; // 80219DBC
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 80219DC0
  c->lr=0x80219DC8u; f_803A92B8(c); // 80219DC4
  W8(c->r[13]+0xFFFFBBA9u,c->r[28]); // 80219DC8
L_80219DCC:;
  c->r[3]=0u+0x80730000u; // 80219DCC
  c->r[5]=c->r[25]|c->r[25]; // 80219DD0
  c->r[3]=c->r[3]+0x000073A8u; // 80219DD4
  c->r[4]=c->r[3]|c->r[3]; // 80219DD8
  c->lr=0x80219DE0u; f_802DDCA8(c); // 80219DDC
  c->r[25]=c->r[26]+0x0000033Cu; // 80219DE0
  c->r[3]=c->r[25]|c->r[25]; // 80219DE4
  c->lr=0x80219DECu; f_800506C0(c); // 80219DE8
  cmps(c,0,(int32_t)c->r[25],0); // 80219DEC
  c->r[3]=c->r[25]|c->r[25]; // 80219DF0
  if (crb(c,2)) { goto L_80219DFC; } // 80219DF4
  c->r[3]=c->r[25]+0xFFFFFCC4u; // 80219DF8
L_80219DFC:;
  c->r[28]=0u+0x00000001u; // 80219DFC
  W32(c->r[25]+0x00000008u,c->r[3]); // 80219E00
  W8(c->r[25]+0x0000000Cu,c->r[28]); // 80219E04
  c->r[0]=R8(c->r[13]+0xFFFFBE9Du); // 80219E08
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 80219E0C
  if (!crb(c,2)) { goto L_80219E50; } // 80219E10
  c->r[27]=0u+0x80750000u; // 80219E14
  c->r[3]=c->r[27]+0xFFFF8158u; // 80219E18
  c->lr=0x80219E20u; f_800506C0(c); // 80219E1C
  c->r[6]=0u+0x806D0000u; // 80219E20
  c->r[4]=0u+0x80080000u; // 80219E24
  c->r[6]=c->r[6]+0x000038F0u; // 80219E28
  c->r[3]=c->r[27]+0xFFFF8158u; // 80219E2C
  c->r[0]=c->r[6]+0x00000008u; // 80219E30
  c->r[5]=0u+0x80750000u; // 80219E34
  W32(c->r[3]+0x00000010u,c->r[6]); // 80219E38
  c->r[4]=c->r[4]+0xFFFF98C0u; // 80219E3C
  c->r[5]=c->r[5]+0x00005480u; // 80219E40
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 80219E44
  c->lr=0x80219E4Cu; f_803A92B8(c); // 80219E48
  W8(c->r[13]+0xFFFFBE9Du,c->r[28]); // 80219E4C
L_80219E50:;
  c->r[3]=0u+0x80750000u; // 80219E50
  c->r[5]=c->r[25]|c->r[25]; // 80219E54
  c->r[3]=c->r[3]+0xFFFF8158u; // 80219E58
  c->r[4]=c->r[3]|c->r[3]; // 80219E5C
  c->lr=0x80219E64u; f_802DDCA8(c); // 80219E60
  c->r[3]=0u+0x806D0000u; // 80219E64
  W32(c->r[26]+0x00000054u,c->r[31]); // 80219E68
  c->r[3]=c->r[3]+0x00004AE8u; // 80219E6C
  W32(c->r[26]+0x0000001Cu,c->r[3]); // 80219E70
  c->r[0]=R8(c->r[13]+0xFFFFBC60u); // 80219E74
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 80219E78
  if (!crb(c,2)) { goto L_80219E98; } // 80219E7C
  c->r[3]=R32(c->r[13]+0xFFFFBC48u); // 80219E80
  c->r[0]=0u+0x00000001u; // 80219E84
  W32(c->r[13]+0xFFFFBC5Cu,c->r[3]); // 80219E88
  c->r[3]=c->r[3]+0x00000001u; // 80219E8C
  W32(c->r[13]+0xFFFFBC48u,c->r[3]); // 80219E90
  W8(c->r[13]+0xFFFFBC60u,c->r[0]); // 80219E94
L_80219E98:;
  c->r[0]=R32(c->r[13]+0xFFFFBC5Cu); // 80219E98
  W32(c->r[26]+0x00000328u,c->r[0]); // 80219E9C
  c->r[0]=R8(c->r[13]+0xFFFFD484u); // 80219EA0
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 80219EA4
  if (!crb(c,2)) { goto L_80219EC4; } // 80219EA8
  c->r[3]=R32(c->r[13]+0xFFFFBDACu); // 80219EAC
  c->r[0]=0u+0x00000001u; // 80219EB0
  W32(c->r[13]+0xFFFFD480u,c->r[3]); // 80219EB4
  c->r[3]=c->r[3]+0x00000001u; // 80219EB8
  W32(c->r[13]+0xFFFFBDACu,c->r[3]); // 80219EBC
  W8(c->r[13]+0xFFFFD484u,c->r[0]); // 80219EC0
L_80219EC4:;
  c->r[0]=R32(c->r[13]+0xFFFFD480u); // 80219EC4
  W32(c->r[26]+0x0000034Cu,c->r[0]); // 80219EC8
  c->r[0]=R8(c->r[13]+0xFFFFC864u); // 80219ECC
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 80219ED0
  if (!crb(c,2)) { goto L_80219EF0; } // 80219ED4
  c->r[3]=R32(c->r[13]+0xFFFFBF90u); // 80219ED8
  c->r[0]=0u+0x00000001u; // 80219EDC
  W32(c->r[13]+0xFFFFC860u,c->r[3]); // 80219EE0
  c->r[3]=c->r[3]+0x00000001u; // 80219EE4
  W32(c->r[13]+0xFFFFBF90u,c->r[3]); // 80219EE8
  W8(c->r[13]+0xFFFFC864u,c->r[0]); // 80219EEC
L_80219EF0:;
  c->r[0]=R32(c->r[13]+0xFFFFC860u); // 80219EF0
  c->r[5]=0u+0x806D0000u; // 80219EF4
  c->r[5]=c->r[5]+0xFFFFE468u; // 80219EF8
  W32(c->r[26]+0x00000350u,c->r[0]); // 80219EFC
  c->r[3]=c->r[26]+0x000003B0u; // 80219F00
  c->r[4]=0u+0x00000000u; // 80219F04
  W32(c->r[26]+0x00000400u,c->r[5]); // 80219F08
  c->r[5]=0u+0x00000050u; // 80219F0C
  c->lr=0x80219F14u; f_800043EC(c); // 80219F10
  c->r[4]=0u+0x806D0000u; // 80219F14
  c->r[3]=c->r[26]+0x00000450u; // 80219F18
  c->r[4]=c->r[4]+0xFFFFE170u; // 80219F1C
  W32(c->r[26]+0x0000001Cu,c->r[4]); // 80219F20
  c->r[0]=c->r[4]+0x00000044u; // 80219F24
  W32(c->r[26]+0x00000400u,c->r[0]); // 80219F28
  c->lr=0x80219F30u; f_8007BDFC(c); // 80219F2C
  c->r[3]=c->r[26]+0x000004C4u; // 80219F30
  c->lr=0x80219F38u; f_8007BDFC(c); // 80219F34
  c->r[3]=c->r[26]+0x00000538u; // 80219F38
  c->r[4]=0u+0x00000000u; // 80219F3C
  c->r[5]=0u+0x00000008u; // 80219F40
  c->lr=0x80219F48u; f_800043EC(c); // 80219F44
  c->r[24]=R32(c->r[13]+0xFFFFDBDCu); // 80219F48
  cmps(c,0,(int32_t)c->r[24],0); // 80219F4C
  if (crb(c,2)) { goto L_80219F94; } // 80219F50
  c->lr=0x80219F58u; f_8021A630(c); // 80219F54
  c->r[27]=c->r[3]|c->r[3]; // 80219F58
  c->lr=0x80219F60u; f_8007BDCC(c); // 80219F5C
  c->r[4]=(uint32_t)((int32_t)c->r[27]*(int32_t)80); // 80219F60
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 80219F64
  c->r[5]=0u+0x80220000u; // 80219F68
  c->r[3]=rotl(c->r[27],2)&0xFFFFFFFCu; // 80219F6C
  c->r[4]=c->r[24]+c->r[4]; // 80219F70
  c->r[5]=c->r[5]+0xFFFFA6C8u; // 80219F74
  c->r[4]=c->r[4]+c->r[0]; // 80219F78
  W32(c->r[4]+0x000001CCu,c->r[5]); // 80219F7C
  c->r[0]=R32(c->r[24]+c->r[3]); // 80219F80
  cmpu(c,0,c->r[0],0x0000000Cu); // 80219F84
  if (!crb(c,0)) { goto L_80219F94; } // 80219F88
  c->r[0]=0u+0x0000000Cu; // 80219F8C
  W32(c->r[24]+c->r[3],c->r[0]); // 80219F90
L_80219F94:;
  c->r[24]=R32(c->r[13]+0xFFFFDBDCu); // 80219F94
  cmps(c,0,(int32_t)c->r[24],0); // 80219F98
  if (crb(c,2)) { goto L_8021A004; } // 80219F9C
  c->lr=0x80219FA4u; f_8021A630(c); // 80219FA0
  c->r[0]=R8(c->r[13]+0xFFFFBEACu); // 80219FA4
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 80219FA8
  if (!crb(c,2)) { goto L_80219FCC; } // 80219FAC
  c->r[5]=R32(c->r[13]+0xFFFFBCC4u); // 80219FB0
  c->r[0]=0u+0x00000001u; // 80219FB4
  W32(c->r[13]+0xFFFFBDF8u,c->r[5]); // 80219FB8
  c->r[4]=c->r[5]+0x00000001u; // 80219FBC
  W32(c->r[13]+0xFFFFBCC4u,c->r[4]); // 80219FC0
  W32(c->r[13]+0xFFFFBEA8u,c->r[5]); // 80219FC4
  W8(c->r[13]+0xFFFFBEACu,c->r[0]); // 80219FC8
L_80219FCC:;
  c->r[4]=(uint32_t)((int32_t)c->r[3]*(int32_t)80); // 80219FCC
  c->r[0]=R32(c->r[13]+0xFFFFBEA8u); // 80219FD0
  c->r[5]=0u+0x80220000u; // 80219FD4
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80219FD8
  c->r[4]=c->r[24]+c->r[4]; // 80219FDC
  c->r[5]=c->r[5]+0xFFFFA6C4u; // 80219FE0
  c->r[4]=c->r[4]+c->r[0]; // 80219FE4
  c->r[3]=rotl(c->r[3],2)&0xFFFFFFFCu; // 80219FE8
  W32(c->r[4]+0x000001CCu,c->r[5]); // 80219FEC
  c->r[0]=R32(c->r[24]+c->r[3]); // 80219FF0
  cmpu(c,0,c->r[0],0x00000018u); // 80219FF4
  if (!crb(c,0)) { goto L_8021A004; } // 80219FF8
  c->r[0]=0u+0x00000018u; // 80219FFC
  W32(c->r[24]+c->r[3],c->r[0]); // 8021A000
L_8021A004:;
  c->r[24]=R32(c->r[13]+0xFFFFDBDCu); // 8021A004
  cmps(c,0,(int32_t)c->r[24],0); // 8021A008
  if (crb(c,2)) { goto L_8021A074; } // 8021A00C
  c->lr=0x8021A014u; f_8021A630(c); // 8021A010
  c->r[0]=R8(c->r[13]+0xFFFFBCD0u); // 8021A014
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 8021A018
  if (!crb(c,2)) { goto L_8021A03C; } // 8021A01C
  c->r[5]=R32(c->r[13]+0xFFFFBCC4u); // 8021A020
  c->r[0]=0u+0x00000001u; // 8021A024
  W32(c->r[13]+0xFFFFBDF8u,c->r[5]); // 8021A028
  c->r[4]=c->r[5]+0x00000001u; // 8021A02C
  W32(c->r[13]+0xFFFFBCC4u,c->r[4]); // 8021A030
  W32(c->r[13]+0xFFFFBCCCu,c->r[5]); // 8021A034
  W8(c->r[13]+0xFFFFBCD0u,c->r[0]); // 8021A038
L_8021A03C:;
  c->r[4]=(uint32_t)((int32_t)c->r[3]*(int32_t)80); // 8021A03C
  c->r[0]=R32(c->r[13]+0xFFFFBCCCu); // 8021A040
  c->r[5]=0u+0x80220000u; // 8021A044
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 8021A048
  c->r[4]=c->r[24]+c->r[4]; // 8021A04C
  c->r[5]=c->r[5]+0xFFFFA6C0u; // 8021A050
  c->r[4]=c->r[4]+c->r[0]; // 8021A054
  c->r[3]=rotl(c->r[3],2)&0xFFFFFFFCu; // 8021A058
  W32(c->r[4]+0x000001CCu,c->r[5]); // 8021A05C
  c->r[0]=R32(c->r[24]+c->r[3]); // 8021A060
  cmpu(c,0,c->r[0],0x0000006Cu); // 8021A064
  if (!crb(c,0)) { goto L_8021A074; } // 8021A068
  c->r[0]=0u+0x0000006Cu; // 8021A06C
  W32(c->r[24]+c->r[3],c->r[0]); // 8021A070
L_8021A074:;
  c->r[24]=R32(c->r[13]+0xFFFFDBDCu); // 8021A074
  cmps(c,0,(int32_t)c->r[24],0); // 8021A078
  if (crb(c,2)) { goto L_8021A0E4; } // 8021A07C
  c->lr=0x8021A084u; f_8021A630(c); // 8021A080
  c->r[0]=R8(c->r[13]+0xFFFFBD38u); // 8021A084
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 8021A088
  if (!crb(c,2)) { goto L_8021A0AC; } // 8021A08C
  c->r[5]=R32(c->r[13]+0xFFFFBCC4u); // 8021A090
  c->r[0]=0u+0x00000001u; // 8021A094
  W32(c->r[13]+0xFFFFBDF8u,c->r[5]); // 8021A098
  c->r[4]=c->r[5]+0x00000001u; // 8021A09C
  W32(c->r[13]+0xFFFFBCC4u,c->r[4]); // 8021A0A0
  W32(c->r[13]+0xFFFFBD34u,c->r[5]); // 8021A0A4
  W8(c->r[13]+0xFFFFBD38u,c->r[0]); // 8021A0A8
L_8021A0AC:;
  c->r[4]=(uint32_t)((int32_t)c->r[3]*(int32_t)80); // 8021A0AC
  c->r[0]=R32(c->r[13]+0xFFFFBD34u); // 8021A0B0
  c->r[5]=0u+0x80220000u; // 8021A0B4
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 8021A0B8
  c->r[4]=c->r[24]+c->r[4]; // 8021A0BC
  c->r[5]=c->r[5]+0xFFFFA6BCu; // 8021A0C0
  c->r[4]=c->r[4]+c->r[0]; // 8021A0C4
  c->r[3]=rotl(c->r[3],2)&0xFFFFFFFCu; // 8021A0C8
  W32(c->r[4]+0x000001CCu,c->r[5]); // 8021A0CC
  c->r[0]=R32(c->r[24]+c->r[3]); // 8021A0D0
  cmpu(c,0,c->r[0],0x0000002Cu); // 8021A0D4
  if (!crb(c,0)) { goto L_8021A0E4; } // 8021A0D8
  c->r[0]=0u+0x0000002Cu; // 8021A0DC
  W32(c->r[24]+c->r[3],c->r[0]); // 8021A0E0
L_8021A0E4:;
  c->r[24]=R32(c->r[13]+0xFFFFDBDCu); // 8021A0E4
  cmps(c,0,(int32_t)c->r[24],0); // 8021A0E8
  if (crb(c,2)) { goto L_8021A154; } // 8021A0EC
  c->lr=0x8021A0F4u; f_8021A630(c); // 8021A0F0
  c->r[0]=R8(c->r[13]+0xFFFFBEB4u); // 8021A0F4
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 8021A0F8
  if (!crb(c,2)) { goto L_8021A11C; } // 8021A0FC
  c->r[5]=R32(c->r[13]+0xFFFFBCC4u); // 8021A100
  c->r[0]=0u+0x00000001u; // 8021A104
  W32(c->r[13]+0xFFFFBDF8u,c->r[5]); // 8021A108
  c->r[4]=c->r[5]+0x00000001u; // 8021A10C
  W32(c->r[13]+0xFFFFBCC4u,c->r[4]); // 8021A110
  W32(c->r[13]+0xFFFFBEB0u,c->r[5]); // 8021A114
  W8(c->r[13]+0xFFFFBEB4u,c->r[0]); // 8021A118
L_8021A11C:;
  c->r[4]=(uint32_t)((int32_t)c->r[3]*(int32_t)80); // 8021A11C
  c->r[0]=R32(c->r[13]+0xFFFFBEB0u); // 8021A120
  c->r[5]=0u+0x80220000u; // 8021A124
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 8021A128
  c->r[4]=c->r[24]+c->r[4]; // 8021A12C
  c->r[5]=c->r[5]+0xFFFFA6B8u; // 8021A130
  c->r[4]=c->r[4]+c->r[0]; // 8021A134
  c->r[3]=rotl(c->r[3],2)&0xFFFFFFFCu; // 8021A138
  W32(c->r[4]+0x000001CCu,c->r[5]); // 8021A13C
  c->r[0]=R32(c->r[24]+c->r[3]); // 8021A140
  cmpu(c,0,c->r[0],0x00000010u); // 8021A144
  if (!crb(c,0)) { goto L_8021A154; } // 8021A148
  c->r[0]=0u+0x00000010u; // 8021A14C
  W32(c->r[24]+c->r[3],c->r[0]); // 8021A150
L_8021A154:;
  c->r[24]=R32(c->r[13]+0xFFFFDBDCu); // 8021A154
  cmps(c,0,(int32_t)c->r[24],0); // 8021A158
  if (crb(c,2)) { goto L_8021A1C4; } // 8021A15C
  c->lr=0x8021A164u; f_8021A630(c); // 8021A160
  c->r[0]=R8(c->r[13]+0xFFFFBEBCu); // 8021A164
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 8021A168
  if (!crb(c,2)) { goto L_8021A18C; } // 8021A16C
  c->r[5]=R32(c->r[13]+0xFFFFBCC4u); // 8021A170
  c->r[0]=0u+0x00000001u; // 8021A174
  W32(c->r[13]+0xFFFFBDF8u,c->r[5]); // 8021A178
  c->r[4]=c->r[5]+0x00000001u; // 8021A17C
  W32(c->r[13]+0xFFFFBCC4u,c->r[4]); // 8021A180
  W32(c->r[13]+0xFFFFBEB8u,c->r[5]); // 8021A184
  W8(c->r[13]+0xFFFFBEBCu,c->r[0]); // 8021A188
L_8021A18C:;
  c->r[4]=(uint32_t)((int32_t)c->r[3]*(int32_t)80); // 8021A18C
  c->r[0]=R32(c->r[13]+0xFFFFBEB8u); // 8021A190
  c->r[5]=0u+0x80220000u; // 8021A194
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 8021A198
  c->r[4]=c->r[24]+c->r[4]; // 8021A19C
  c->r[5]=c->r[5]+0xFFFFA6B4u; // 8021A1A0
  c->r[4]=c->r[4]+c->r[0]; // 8021A1A4
  c->r[3]=rotl(c->r[3],2)&0xFFFFFFFCu; // 8021A1A8
  W32(c->r[4]+0x000001CCu,c->r[5]); // 8021A1AC
  c->r[0]=R32(c->r[24]+c->r[3]); // 8021A1B0
  cmpu(c,0,c->r[0],0x0000005Cu); // 8021A1B4
  if (!crb(c,0)) { goto L_8021A1C4; } // 8021A1B8
  c->r[0]=0u+0x0000005Cu; // 8021A1BC
  W32(c->r[24]+c->r[3],c->r[0]); // 8021A1C0
L_8021A1C4:;
  c->r[24]=R32(c->r[13]+0xFFFFDBDCu); // 8021A1C4
  cmps(c,0,(int32_t)c->r[24],0); // 8021A1C8
  if (crb(c,2)) { goto L_8021A234; } // 8021A1CC
  c->lr=0x8021A1D4u; f_8021A630(c); // 8021A1D0
  c->r[0]=R8(c->r[13]+0xFFFFBEC4u); // 8021A1D4
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 8021A1D8
  if (!crb(c,2)) { goto L_8021A1FC; } // 8021A1DC
  c->r[5]=R32(c->r[13]+0xFFFFBCC4u); // 8021A1E0
  c->r[0]=0u+0x00000001u; // 8021A1E4
  W32(c->r[13]+0xFFFFBDF8u,c->r[5]); // 8021A1E8
  c->r[4]=c->r[5]+0x00000001u; // 8021A1EC
  W32(c->r[13]+0xFFFFBCC4u,c->r[4]); // 8021A1F0
  W32(c->r[13]+0xFFFFBEC0u,c->r[5]); // 8021A1F4
  W8(c->r[13]+0xFFFFBEC4u,c->r[0]); // 8021A1F8
L_8021A1FC:;
  c->r[4]=(uint32_t)((int32_t)c->r[3]*(int32_t)80); // 8021A1FC
  c->r[0]=R32(c->r[13]+0xFFFFBEC0u); // 8021A200
  c->r[5]=0u+0x80220000u; // 8021A204
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 8021A208
  c->r[4]=c->r[24]+c->r[4]; // 8021A20C
  c->r[5]=c->r[5]+0xFFFFA6B0u; // 8021A210
  c->r[4]=c->r[4]+c->r[0]; // 8021A214
  c->r[3]=rotl(c->r[3],2)&0xFFFFFFFCu; // 8021A218
  W32(c->r[4]+0x000001CCu,c->r[5]); // 8021A21C
  c->r[0]=R32(c->r[24]+c->r[3]); // 8021A220
  cmpu(c,0,c->r[0],0x0000005Cu); // 8021A224
  if (!crb(c,0)) { goto L_8021A234; } // 8021A228
  c->r[0]=0u+0x0000005Cu; // 8021A22C
  W32(c->r[24]+c->r[3],c->r[0]); // 8021A230
L_8021A234:;
  c->r[24]=R32(c->r[13]+0xFFFFDBDCu); // 8021A234
  cmps(c,0,(int32_t)c->r[24],0); // 8021A238
  if (crb(c,2)) { goto L_8021A2A4; } // 8021A23C
  c->lr=0x8021A244u; f_8021A630(c); // 8021A240
  c->r[0]=R8(c->r[13]+0xFFFFBECCu); // 8021A244
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 8021A248
  if (!crb(c,2)) { goto L_8021A26C; } // 8021A24C
  c->r[5]=R32(c->r[13]+0xFFFFBCC4u); // 8021A250
  c->r[0]=0u+0x00000001u; // 8021A254
  W32(c->r[13]+0xFFFFBDF8u,c->r[5]); // 8021A258
  c->r[4]=c->r[5]+0x00000001u; // 8021A25C
  W32(c->r[13]+0xFFFFBCC4u,c->r[4]); // 8021A260
  W32(c->r[13]+0xFFFFBEC8u,c->r[5]); // 8021A264
  W8(c->r[13]+0xFFFFBECCu,c->r[0]); // 8021A268
L_8021A26C:;
  c->r[4]=(uint32_t)((int32_t)c->r[3]*(int32_t)80); // 8021A26C
  c->r[0]=R32(c->r[13]+0xFFFFBEC8u); // 8021A270
  c->r[5]=0u+0x80220000u; // 8021A274
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 8021A278
  c->r[4]=c->r[24]+c->r[4]; // 8021A27C
  c->r[5]=c->r[5]+0xFFFFA6ACu; // 8021A280
  c->r[4]=c->r[4]+c->r[0]; // 8021A284
  c->r[3]=rotl(c->r[3],2)&0xFFFFFFFCu; // 8021A288
  W32(c->r[4]+0x000001CCu,c->r[5]); // 8021A28C
  c->r[0]=R32(c->r[24]+c->r[3]); // 8021A290
  cmpu(c,0,c->r[0],0x0000005Cu); // 8021A294
  if (!crb(c,0)) { goto L_8021A2A4; } // 8021A298
  c->r[0]=0u+0x0000005Cu; // 8021A29C
  W32(c->r[24]+c->r[3],c->r[0]); // 8021A2A0
L_8021A2A4:;
  c->r[24]=R32(c->r[13]+0xFFFFDBDCu); // 8021A2A4
  cmps(c,0,(int32_t)c->r[24],0); // 8021A2A8
  if (crb(c,2)) { goto L_8021A314; } // 8021A2AC
  c->lr=0x8021A2B4u; f_8021A630(c); // 8021A2B0
  c->r[0]=R8(c->r[13]+0xFFFFBED4u); // 8021A2B4
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 8021A2B8
  if (!crb(c,2)) { goto L_8021A2DC; } // 8021A2BC
  c->r[5]=R32(c->r[13]+0xFFFFBCC4u); // 8021A2C0
  c->r[0]=0u+0x00000001u; // 8021A2C4
  W32(c->r[13]+0xFFFFBDF8u,c->r[5]); // 8021A2C8
  c->r[4]=c->r[5]+0x00000001u; // 8021A2CC
  W32(c->r[13]+0xFFFFBCC4u,c->r[4]); // 8021A2D0
  W32(c->r[13]+0xFFFFBED0u,c->r[5]); // 8021A2D4
  W8(c->r[13]+0xFFFFBED4u,c->r[0]); // 8021A2D8
L_8021A2DC:;
  c->r[4]=(uint32_t)((int32_t)c->r[3]*(int32_t)80); // 8021A2DC
  c->r[0]=R32(c->r[13]+0xFFFFBED0u); // 8021A2E0
  c->r[5]=0u+0x80220000u; // 8021A2E4
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 8021A2E8
  c->r[4]=c->r[24]+c->r[4]; // 8021A2EC
  c->r[5]=c->r[5]+0xFFFFA6A8u; // 8021A2F0
  c->r[4]=c->r[4]+c->r[0]; // 8021A2F4
  c->r[3]=rotl(c->r[3],2)&0xFFFFFFFCu; // 8021A2F8
  W32(c->r[4]+0x000001CCu,c->r[5]); // 8021A2FC
  c->r[0]=R32(c->r[24]+c->r[3]); // 8021A300
  cmpu(c,0,c->r[0],0x0000005Cu); // 8021A304
  if (!crb(c,0)) { goto L_8021A314; } // 8021A308
  c->r[0]=0u+0x0000005Cu; // 8021A30C
  W32(c->r[24]+c->r[3],c->r[0]); // 8021A310
L_8021A314:;
  c->r[3]=c->r[26]|c->r[26]; // 8021A314
  c->lr=0x8021A31Cu; f_8005BBF0(c); // 8021A318
  c->r[5]=0u+0x806E0000u; // 8021A31C
  c->r[3]=c->r[26]+0x000005C4u; // 8021A320
  c->r[5]=c->r[5]+0x00006DC8u; // 8021A324
  W32(c->r[26]+0x0000001Cu,c->r[5]); // 8021A328
  c->r[4]=c->r[5]+0x00000044u; // 8021A32C
  c->r[0]=c->r[5]+0x000001F0u; // 8021A330
  W32(c->r[26]+0x00000400u,c->r[4]); // 8021A334
  W32(c->r[26]+0x000005C0u,c->r[0]); // 8021A338
  c->lr=0x8021A340u; f_800E1E14(c); // 8021A33C
  {uint32_t ea=c->r[2]+0xFFFFDEF0u; c->f[0]=c->ps1[0]=RF32(ea);} // 8021A340
  c->r[4]=0u+0x80220000u; // 8021A344
  c->r[5]=0u+0x80220000u; // 8021A348
  {uint32_t ea=c->r[26]+0x00000668u; WF32(ea,c->f[0]);} // 8021A34C
  c->r[3]=c->r[26]+0x0000066Cu; // 8021A350
  c->r[4]=c->r[4]+0xFFFF9808u; // 8021A354
  c->r[5]=c->r[5]+0xFFFF9844u; // 8021A358
  c->r[6]=0u+0x00000030u; // 8021A35C
  c->r[7]=0u+0x00000004u; // 8021A360
  c->lr=0x8021A368u; f_803A9830(c); // 8021A364
  c->r[3]=c->r[26]+0x0000072Cu; // 8021A368
  c->lr=0x8021A370u; f_8021EDC0(c); // 8021A36C
  c->r[3]=c->r[26]+0x0000075Cu; // 8021A370
  c->lr=0x8021A378u; f_8022009C(c); // 8021A374
  c->r[3]=c->r[26]+0x00000784u; // 8021A378
  c->lr=0x8021A380u; f_800A7DA4(c); // 8021A37C
  c->r[3]=c->r[26]+0x0000088Cu; // 8021A380
  c->lr=0x8021A388u; f_800A7E4C(c); // 8021A384
  c->r[3]=c->r[26]+0x000008B4u; // 8021A388
  c->lr=0x8021A390u; f_800A80B4(c); // 8021A38C
  c->r[3]=c->r[26]+0x000008CCu; // 8021A390
  c->lr=0x8021A398u; f_800A7E4C(c); // 8021A394
  c->r[4]=c->r[26]+0x000008FCu; // 8021A398
  c->r[0]=c->r[26]+0x0000091Cu; // 8021A39C
  c->r[3]=0u+0x00000000u; // 8021A3A0
L_8021A3A4:;
  W32(c->r[4]+0x00000000u,c->r[3]); // 8021A3A4
  W32(c->r[4]+0x00000004u,c->r[3]); // 8021A3A8
  c->r[4]=c->r[4]+0x00000008u; // 8021A3AC
  cmpu(c,0,c->r[4],c->r[0]); // 8021A3B0
  if (crb(c,0)) { IRQCHK(c); goto L_8021A3A4; } // 8021A3B4
  {uint32_t ea=c->r[2]+0xFFFFDEF0u; c->f[0]=c->ps1[0]=RF32(ea);} // 8021A3B8
  c->r[3]=c->r[26]+0x00000928u; // 8021A3BC
  {uint32_t ea=c->r[26]+0x00000924u; WF32(ea,c->f[0]);} // 8021A3C0
  c->lr=0x8021A3C8u; f_80258690(c); // 8021A3C4
  c->r[24]=R32(c->r[13]+0xFFFFDBD8u); // 8021A3C8
  cmps(c,0,(int32_t)c->r[24],0); // 8021A3CC
  if (crb(c,2)) { goto L_8021A438; } // 8021A3D0
  c->lr=0x8021A3D8u; f_8021A630(c); // 8021A3D4
  c->r[0]=R8(c->r[13]+0xFFFFBEA4u); // 8021A3D8
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 8021A3DC
  if (!crb(c,2)) { goto L_8021A400; } // 8021A3E0
  c->r[5]=R32(c->r[13]+0xFFFFBCC8u); // 8021A3E4
  c->r[0]=0u+0x00000001u; // 8021A3E8
  W32(c->r[13]+0xFFFFBDFCu,c->r[5]); // 8021A3EC
  c->r[4]=c->r[5]+0x00000001u; // 8021A3F0
  W32(c->r[13]+0xFFFFBCC8u,c->r[4]); // 8021A3F4
  W32(c->r[13]+0xFFFFBEA0u,c->r[5]); // 8021A3F8
  W8(c->r[13]+0xFFFFBEA4u,c->r[0]); // 8021A3FC
L_8021A400:;
  c->r[4]=(uint32_t)((int32_t)c->r[3]*(int32_t)2600); // 8021A400
  c->r[0]=R32(c->r[13]+0xFFFFBEA0u); // 8021A404
  c->r[5]=0u+0x80220000u; // 8021A408
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 8021A40C
  c->r[4]=c->r[24]+c->r[4]; // 8021A410
  c->r[5]=c->r[5]+0xFFFFA6A4u; // 8021A414
  c->r[4]=c->r[4]+c->r[0]; // 8021A418
  c->r[3]=rotl(c->r[3],2)&0xFFFFFFFCu; // 8021A41C
  W32(c->r[4]+0x000001CCu,c->r[5]); // 8021A420
  c->r[0]=R32(c->r[24]+c->r[3]); // 8021A424
  cmpu(c,0,c->r[0],0x00000010u); // 8021A428
  if (!crb(c,0)) { goto L_8021A438; } // 8021A42C
  c->r[0]=0u+0x00000010u; // 8021A430
  W32(c->r[24]+c->r[3],c->r[0]); // 8021A434
L_8021A438:;
  c->r[24]=R32(c->r[13]+0xFFFFDBD8u); // 8021A438
  cmps(c,0,(int32_t)c->r[24],0); // 8021A43C
  if (crb(c,2)) { goto L_8021A484; } // 8021A440
  c->lr=0x8021A448u; f_8021A630(c); // 8021A444
  c->r[27]=c->r[3]|c->r[3]; // 8021A448
  c->lr=0x8021A450u; f_8021A674(c); // 8021A44C
  c->r[4]=(uint32_t)((int32_t)c->r[27]*(int32_t)2600); // 8021A450
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 8021A454
  c->r[5]=0u+0x80220000u; // 8021A458
  c->r[3]=rotl(c->r[27],2)&0xFFFFFFFCu; // 8021A45C
  c->r[4]=c->r[24]+c->r[4]; // 8021A460
  c->r[5]=c->r[5]+0xFFFFA670u; // 8021A464
  c->r[4]=c->r[4]+c->r[0]; // 8021A468
  W32(c->r[4]+0x000001CCu,c->r[5]); // 8021A46C
  c->r[0]=R32(c->r[24]+c->r[3]); // 8021A470
  cmpu(c,0,c->r[0],0x00000010u); // 8021A474
  if (!crb(c,0)) { goto L_8021A484; } // 8021A478
  c->r[0]=0u+0x00000010u; // 8021A47C
  W32(c->r[24]+c->r[3],c->r[0]); // 8021A480
L_8021A484:;
  c->r[24]=R32(c->r[13]+0xFFFFDBD8u); // 8021A484
  cmps(c,0,(int32_t)c->r[24],0); // 8021A488
  if (crb(c,2)) { goto L_8021A4D0; } // 8021A48C
  c->lr=0x8021A494u; f_8021A630(c); // 8021A490
  c->r[27]=c->r[3]|c->r[3]; // 8021A494
  c->lr=0x8021A49Cu; f_80062DCC(c); // 8021A498
  c->r[4]=(uint32_t)((int32_t)c->r[27]*(int32_t)2600); // 8021A49C
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 8021A4A0
  c->r[5]=0u+0x80220000u; // 8021A4A4
  c->r[3]=rotl(c->r[27],2)&0xFFFFFFFCu; // 8021A4A8
  c->r[4]=c->r[24]+c->r[4]; // 8021A4AC
  c->r[5]=c->r[5]+0xFFFFA66Cu; // 8021A4B0
  c->r[4]=c->r[4]+c->r[0]; // 8021A4B4
  W32(c->r[4]+0x000001CCu,c->r[5]); // 8021A4B8
  c->r[0]=R32(c->r[24]+c->r[3]); // 8021A4BC
  cmpu(c,0,c->r[0],0x00000010u); // 8021A4C0
  if (!crb(c,0)) { goto L_8021A4D0; } // 8021A4C4
  c->r[0]=0u+0x00000010u; // 8021A4C8
  W32(c->r[24]+c->r[3],c->r[0]); // 8021A4CC
L_8021A4D0:;
  c->r[24]=R32(c->r[13]+0xFFFFDBD8u); // 8021A4D0
  cmps(c,0,(int32_t)c->r[24],0); // 8021A4D4
  if (crb(c,2)) { goto L_8021A51C; } // 8021A4D8
  c->lr=0x8021A4E0u; f_8021A630(c); // 8021A4DC
  c->r[27]=c->r[3]|c->r[3]; // 8021A4E0
  c->lr=0x8021A4E8u; f_8005E1B0(c); // 8021A4E4
  c->r[4]=(uint32_t)((int32_t)c->r[27]*(int32_t)2600); // 8021A4E8
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 8021A4EC
  c->r[5]=0u+0x80220000u; // 8021A4F0
  c->r[3]=rotl(c->r[27],2)&0xFFFFFFFCu; // 8021A4F4
  c->r[4]=c->r[24]+c->r[4]; // 8021A4F8
  c->r[5]=c->r[5]+0xFFFFA668u; // 8021A4FC
  c->r[4]=c->r[4]+c->r[0]; // 8021A500
  W32(c->r[4]+0x000001CCu,c->r[5]); // 8021A504
  c->r[0]=R32(c->r[24]+c->r[3]); // 8021A508
  cmpu(c,0,c->r[0],0x00000010u); // 8021A50C
  if (!crb(c,0)) { goto L_8021A51C; } // 8021A510
  c->r[0]=0u+0x00000010u; // 8021A514
  W32(c->r[24]+c->r[3],c->r[0]); // 8021A518
L_8021A51C:;
  c->r[24]=R32(c->r[13]+0xFFFFDBD8u); // 8021A51C
  cmps(c,0,(int32_t)c->r[24],0); // 8021A520
  if (crb(c,2)) { goto L_8021A568; } // 8021A524
  c->lr=0x8021A52Cu; f_8021A630(c); // 8021A528
  c->r[27]=c->r[3]|c->r[3]; // 8021A52C
  c->lr=0x8021A534u; f_80062EBC(c); // 8021A530
  c->r[4]=(uint32_t)((int32_t)c->r[27]*(int32_t)2600); // 8021A534
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 8021A538
  c->r[5]=0u+0x80220000u; // 8021A53C
  c->r[3]=rotl(c->r[27],2)&0xFFFFFFFCu; // 8021A540
  c->r[4]=c->r[24]+c->r[4]; // 8021A544
  c->r[5]=c->r[5]+0xFFFFA664u; // 8021A548
  c->r[4]=c->r[4]+c->r[0]; // 8021A54C
  W32(c->r[4]+0x000001CCu,c->r[5]); // 8021A550
  c->r[0]=R32(c->r[24]+c->r[3]); // 8021A554
  cmpu(c,0,c->r[0],0x00000010u); // 8021A558
  if (!crb(c,0)) { goto L_8021A568; } // 8021A55C
  c->r[0]=0u+0x00000010u; // 8021A560
  W32(c->r[24]+c->r[3],c->r[0]); // 8021A564
L_8021A568:;
  c->r[24]=R32(c->r[13]+0xFFFFDBD8u); // 8021A568
  cmps(c,0,(int32_t)c->r[24],0); // 8021A56C
  if (crb(c,2)) { goto L_8021A5B4; } // 8021A570
  c->lr=0x8021A578u; f_8021A630(c); // 8021A574
  c->r[27]=c->r[3]|c->r[3]; // 8021A578
  c->lr=0x8021A580u; f_80061044(c); // 8021A57C
  c->r[4]=(uint32_t)((int32_t)c->r[27]*(int32_t)2600); // 8021A580
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 8021A584
  c->r[5]=0u+0x80220000u; // 8021A588
  c->r[3]=rotl(c->r[27],2)&0xFFFFFFFCu; // 8021A58C
  c->r[4]=c->r[24]+c->r[4]; // 8021A590
  c->r[5]=c->r[5]+0xFFFFA660u; // 8021A594
  c->r[4]=c->r[4]+c->r[0]; // 8021A598
  W32(c->r[4]+0x000001CCu,c->r[5]); // 8021A59C
  c->r[0]=R32(c->r[24]+c->r[3]); // 8021A5A0
  cmpu(c,0,c->r[0],0x00000020u); // 8021A5A4
  if (!crb(c,0)) { goto L_8021A5B4; } // 8021A5A8
  c->r[0]=0u+0x00000020u; // 8021A5AC
  W32(c->r[24]+c->r[3],c->r[0]); // 8021A5B0
L_8021A5B4:;
  c->r[24]=R32(c->r[13]+0xFFFFDBD8u); // 8021A5B4
  cmps(c,0,(int32_t)c->r[24],0); // 8021A5B8
  if (crb(c,2)) { goto L_8021A600; } // 8021A5BC
  c->lr=0x8021A5C4u; f_8021A630(c); // 8021A5C0
  c->r[27]=c->r[3]|c->r[3]; // 8021A5C4
  c->lr=0x8021A5CCu; f_80062E5C(c); // 8021A5C8
  c->r[4]=(uint32_t)((int32_t)c->r[27]*(int32_t)2600); // 8021A5CC
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 8021A5D0
  c->r[5]=0u+0x80220000u; // 8021A5D4
  c->r[3]=rotl(c->r[27],2)&0xFFFFFFFCu; // 8021A5D8
  c->r[4]=c->r[24]+c->r[4]; // 8021A5DC
  c->r[5]=c->r[5]+0xFFFFA61Cu; // 8021A5E0
  c->r[4]=c->r[4]+c->r[0]; // 8021A5E4
  W32(c->r[4]+0x000001CCu,c->r[5]); // 8021A5E8
  c->r[0]=R32(c->r[24]+c->r[3]); // 8021A5EC
  cmpu(c,0,c->r[0],0x00000010u); // 8021A5F0
  if (!crb(c,0)) { goto L_8021A600; } // 8021A5F4
  c->r[0]=0u+0x00000010u; // 8021A5F8
  W32(c->r[24]+c->r[3],c->r[0]); // 8021A5FC
L_8021A600:;
  c->r[11]=c->r[1]+0x00000040u; // 8021A600
  c->r[3]=c->r[26]|c->r[26]; // 8021A604
  c->lr=0x8021A60Cu; { c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8021A608
  c->r[0]=R32(c->r[1]+0x00000044u); // 8021A60C
  c->lr=c->r[0]; // 8021A610
  c->r[1]=c->r[1]+0x00000040u; // 8021A614
  return; // 8021A618
}

// fn_8021A61C
void f_8021A61C(Ctx* __restrict c) {
  trace_call(0x8021A61Cu);
  c->r[0]=R32(c->r[3]+0x000008F4u); // 8021A61C
  cmps(c,0,(int32_t)c->r[0],3); // 8021A620
  if (!crb(c,2)) { goto L_8021A62C; } // 8021A624
  f_8021B548(c); return; // 8021A628
L_8021A62C:;
  f_8021B40C(c); return; // 8021A62C
}

// fn_8021A630
void f_8021A630(Ctx* __restrict c) {
  trace_call(0x8021A630u);
  c->r[0]=R8(c->r[13]+0xFFFFD47Cu); // 8021A630
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 8021A634
  if (!crb(c,2)) { goto L_8021A658; } // 8021A638
  c->r[4]=R32(c->r[13]+0xFFFFBE94u); // 8021A63C
  c->r[0]=0u+0x00000001u; // 8021A640
  W32(c->r[13]+0xFFFFBE98u,c->r[4]); // 8021A644
  c->r[3]=c->r[4]+0x00000001u; // 8021A648
  W32(c->r[13]+0xFFFFBE94u,c->r[3]); // 8021A64C
  W32(c->r[13]+0xFFFFD478u,c->r[4]); // 8021A650
  W8(c->r[13]+0xFFFFD47Cu,c->r[0]); // 8021A654
L_8021A658:;
  c->r[3]=R32(c->r[13]+0xFFFFD478u); // 8021A658
  return; // 8021A65C
}

// fn_8021A660
void f_8021A660(Ctx* __restrict c) {
  trace_call(0x8021A660u);
  f_8021BC58(c); return; // 8021A660
}

// fn_8021A664
void f_8021A664(Ctx* __restrict c) {
  trace_call(0x8021A664u);
  f_8021BB28(c); return; // 8021A664
}

// fn_8021A668
void f_8021A668(Ctx* __restrict c) {
  trace_call(0x8021A668u);
  f_8021B96C(c); return; // 8021A668
}

// fn_8021A66C
void f_8021A66C(Ctx* __restrict c) {
  trace_call(0x8021A66Cu);
  f_8021B718(c); return; // 8021A66C
}

// fn_8021A670
void f_8021A670(Ctx* __restrict c) {
  trace_call(0x8021A670u);
  f_8021B83C(c); return; // 8021A670
}

// fn_8021A674
void f_8021A674(Ctx* __restrict c) {
  trace_call(0x8021A674u);
  c->r[0]=R8(c->r[13]+0xFFFFD474u); // 8021A674
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 8021A678
  if (!crb(c,2)) { goto L_8021A69C; } // 8021A67C
  c->r[4]=R32(c->r[13]+0xFFFFBCC8u); // 8021A680
  c->r[0]=0u+0x00000001u; // 8021A684
  W32(c->r[13]+0xFFFFBDFCu,c->r[4]); // 8021A688
  c->r[3]=c->r[4]+0x00000001u; // 8021A68C
  W32(c->r[13]+0xFFFFBCC8u,c->r[3]); // 8021A690
  W32(c->r[13]+0xFFFFD470u,c->r[4]); // 8021A694
  W8(c->r[13]+0xFFFFD474u,c->r[0]); // 8021A698
L_8021A69C:;
  c->r[3]=R32(c->r[13]+0xFFFFD470u); // 8021A69C
  return; // 8021A6A0
}

// fn_8021A6A4
void f_8021A6A4(Ctx* __restrict c) {
  trace_call(0x8021A6A4u);
  f_8021AB2C(c); return; // 8021A6A4
}

// fn_8021A6A8
void f_8021A6A8(Ctx* __restrict c) {
  trace_call(0x8021A6A8u);
  f_8005E338(c); return; // 8021A6A8
}

// fn_8021A6AC
void f_8021A6AC(Ctx* __restrict c) {
  trace_call(0x8021A6ACu);
  f_8005E324(c); return; // 8021A6AC
}

// fn_8021A6B0
void f_8021A6B0(Ctx* __restrict c) {
  trace_call(0x8021A6B0u);
  f_8005E310(c); return; // 8021A6B0
}

// fn_8021A6B4
void f_8021A6B4(Ctx* __restrict c) {
  trace_call(0x8021A6B4u);
  f_8005E2FC(c); return; // 8021A6B4
}

// fn_8021A6B8
void f_8021A6B8(Ctx* __restrict c) {
  trace_call(0x8021A6B8u);
  f_8005E34C(c); return; // 8021A6B8
}

// fn_8021A6BC
void f_8021A6BC(Ctx* __restrict c) {
  trace_call(0x8021A6BCu);
  f_8005E360(c); return; // 8021A6BC
}

// fn_8021A6C0
void f_8021A6C0(Ctx* __restrict c) {
  trace_call(0x8021A6C0u);
  f_8005D47C(c); return; // 8021A6C0
}

// fn_8021A6C4
void f_8021A6C4(Ctx* __restrict c) {
  trace_call(0x8021A6C4u);
  f_8005D468(c); return; // 8021A6C4
}

// fn_8021A6C8
void f_8021A6C8(Ctx* __restrict c) {
  trace_call(0x8021A6C8u);
  f_8005BEDC(c); return; // 8021A6C8
}

// fn_8021A6CC
void f_8021A6CC(Ctx* __restrict c) {
  trace_call(0x8021A6CCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8021A6CC
  c->r[0]=c->lr; // 8021A6D0
  cmps(c,0,(int32_t)c->r[3],0); // 8021A6D4
  W32(c->r[1]+0x00000014u,c->r[0]); // 8021A6D8
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 8021A6DC
  c->r[30]=c->r[3]|c->r[3]; // 8021A6E0
  c->r[31]=c->r[4]|c->r[4]; // 8021A6E4
  if (crb(c,2)) { goto L_8021A780; } // 8021A6E8
  c->r[6]=0u+0x806E0000u; // 8021A6EC
  c->r[4]=0u+0x00000000u; // 8021A6F0
  c->r[6]=c->r[6]+0x00006DC8u; // 8021A6F4
  W32(c->r[3]+0x0000001Cu,c->r[6]); // 8021A6F8
  c->r[5]=c->r[6]+0x00000044u; // 8021A6FC
  c->r[0]=c->r[6]+0x000001F0u; // 8021A700
  W32(c->r[3]+0x00000400u,c->r[5]); // 8021A704
  W32(c->r[3]+0x000005C0u,c->r[0]); // 8021A708
  c->r[3]=c->r[3]+0x000005C4u; // 8021A70C
  c->lr=0x8021A714u; f_800E2960(c); // 8021A710
  c->r[3]=c->r[30]+0x00000928u; // 8021A714
  c->r[4]=0u+0xFFFFFFFFu; // 8021A718
  c->lr=0x8021A720u; f_80132EC0(c); // 8021A71C
  c->r[3]=c->r[30]+0x0000075Cu; // 8021A720
  c->r[4]=0u+0xFFFFFFFFu; // 8021A724
  c->lr=0x8021A72Cu; f_802200B4(c); // 8021A728
  c->r[3]=c->r[30]+0x0000072Cu; // 8021A72C
  c->r[4]=0u+0xFFFFFFFFu; // 8021A730
  c->lr=0x8021A738u; f_8021EE18(c); // 8021A734
  c->r[4]=0u+0x80220000u; // 8021A738
  c->r[3]=c->r[30]+0x0000066Cu; // 8021A73C
  c->r[4]=c->r[4]+0xFFFF9844u; // 8021A740
  c->r[5]=0u+0x00000030u; // 8021A744
  c->r[6]=0u+0x00000004u; // 8021A748
  c->lr=0x8021A750u; f_803A9928(c); // 8021A74C
  c->r[3]=c->r[30]+0x000005C4u; // 8021A750
  c->r[4]=0u+0xFFFFFFFFu; // 8021A754
  c->lr=0x8021A75Cu; f_800E1E78(c); // 8021A758
  cmps(c,0,(int32_t)c->r[30],0); // 8021A75C
  if (crb(c,2)) { goto L_8021A770; } // 8021A760
  c->r[3]=c->r[30]|c->r[30]; // 8021A764
  c->r[4]=0u+0x00000000u; // 8021A768
  c->lr=0x8021A770u; f_8005BD00(c); // 8021A76C
L_8021A770:;
  cmps(c,0,(int32_t)c->r[31],0); // 8021A770
  if (!crb(c,1)) { goto L_8021A780; } // 8021A774
  c->r[3]=c->r[30]|c->r[30]; // 8021A778
  c->lr=0x8021A780u; f_8005328C(c); // 8021A77C
L_8021A780:;
  c->r[3]=c->r[30]|c->r[30]; // 8021A780
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 8021A784
  c->r[0]=R32(c->r[1]+0x00000014u); // 8021A788
  c->lr=c->r[0]; // 8021A78C
  c->r[1]=c->r[1]+0x00000010u; // 8021A790
  return; // 8021A794
}

// fn_8021A798
void f_8021A798(Ctx* __restrict c) {
  trace_call(0x8021A798u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8021A798
  c->r[0]=c->lr; // 8021A79C
  W32(c->r[1]+0x00000044u,c->r[0]); // 8021A7A0
  c->r[11]=c->r[1]+0x00000040u; // 8021A7A4
  c->lr=0x8021A7ACu; { W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8021A7A8
  c->r[31]=c->r[3]|c->r[3]; // 8021A7AC
  c->r[4]=0u+0x00000000u; // 8021A7B0
  c->r[5]=0u+0x00000004u; // 8021A7B4
  c->r[3]=c->r[3]+0x000008F8u; // 8021A7B8
  c->lr=0x8021A7C0u; f_800043EC(c); // 8021A7BC
  c->r[3]=c->r[31]|c->r[31]; // 8021A7C0
  c->r[4]=0u+0x00000000u; // 8021A7C4
  c->lr=0x8021A7CCu; f_8005E814(c); // 8021A7C8
  c->r[3]=c->r[31]|c->r[31]; // 8021A7CC
  c->r[4]=0u+0x00000000u; // 8021A7D0
  c->lr=0x8021A7D8u; f_8005EE88(c); // 8021A7D4
  c->r[3]=R32(c->r[31]+0x00000410u); // 8021A7D8
  c->r[25]=0u+0x806A0000u; // 8021A7DC
  c->r[25]=c->r[25]+0xFFFF8DB0u; // 8021A7E0
  c->r[12]=R32(c->r[3]+0x00000000u); // 8021A7E4
  c->r[4]=c->r[25]+0x00000001u; // 8021A7E8
  c->r[12]=R32(c->r[12]+0x00000060u); // 8021A7EC
  c->ctr=c->r[12]; // 8021A7F0
  if (true) { c->lr=0x8021A7F8u; dispatch(c,c->ctr); } // 8021A7F4
  c->r[3]=R32(c->r[31]+0x00000414u); // 8021A7F8
  c->r[4]=c->r[25]+0x00000001u; // 8021A7FC
  c->lr=0x8021A804u; f_8034F3E0(c); // 8021A800
  c->r[3]=c->r[31]+0x000005C4u; // 8021A804
  c->r[4]=c->r[31]+0x000000FCu; // 8021A808
  c->lr=0x8021A810u; f_800E2088(c); // 8021A80C
  {uint32_t ea=c->r[2]+0xFFFFDEF0u; c->f[1]=c->ps1[1]=RF32(ea);} // 8021A810
  c->r[3]=c->r[31]+0x000005C4u; // 8021A814
  c->lr=0x8021A81Cu; f_800E21B4(c); // 8021A818
  {uint32_t ea=c->r[2]+0xFFFFDEF4u; c->f[1]=c->ps1[1]=RF32(ea);} // 8021A81C
  c->r[3]=c->r[31]+0x000005C4u; // 8021A820
  c->r[4]=0u+0x00000001u; // 8021A824
  c->lr=0x8021A82Cu; f_800E21E8(c); // 8021A828
  c->r[4]=0u+0x00010000u; // 8021A82C
  c->r[3]=c->r[31]|c->r[31]; // 8021A830
  c->r[4]=c->r[4]+0x000005B8u; // 8021A834
  c->r[5]=0u+0x00000001u; // 8021A838
  c->lr=0x8021A840u; f_80064744(c); // 8021A83C
  c->r[0]=0u+0x00000000u; // 8021A840
  c->r[25]=0u+0x806E0000u; // 8021A844
  W32(c->r[1]+0x00000014u,c->r[0]); // 8021A848
  c->r[25]=c->r[25]+0x00006D40u; // 8021A84C
  c->r[24]=0u+0x00000000u; // 8021A850
  c->r[30]=0u+0x00000000u; // 8021A854
  c->r[29]=0u+0x00000000u; // 8021A858
  c->r[27]=0u+0x806D0000u; // 8021A85C
  c->r[28]=0u+0x806D0000u; // 8021A860
L_8021A864:;
  c->r[5]=R32(c->r[31]+0x00000138u); // 8021A864
  c->r[3]=c->r[1]+0x00000010u; // 8021A868
  c->r[4]=R32(c->r[25]+c->r[29]); // 8021A86C
  c->r[0]=R32(c->r[5]+0x000000E8u); // 8021A870
  W32(c->r[1]+0x00000010u,c->r[0]); // 8021A874
  c->lr=0x8021A87Cu; f_804AC3C4(c); // 8021A878
  cmps(c,0,(int32_t)c->r[3],0); // 8021A87C
  c->r[26]=c->r[3]|c->r[3]; // 8021A880
  if (crb(c,2)) { goto L_8021A8B8; } // 8021A884
  if (!crb(c,2)) { goto L_8021A8A0; } // 8021A888
  c->r[3]=c->r[27]+0xFFFFE3D8u; // 8021A88C
  c->r[5]=c->r[28]+0xFFFFE3B8u; // 8021A890
  c->r[4]=0u+0x00000038u; // 8021A894
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8021A898
  c->lr=0x8021A8A0u; f_80484674(c); // 8021A89C
L_8021A8A0:;
  cmps(c,0,(int32_t)c->r[26],0); // 8021A8A0
  if (crb(c,2)) { goto L_8021A8B0; } // 8021A8A4
  c->r[6]=R32(c->r[26]+0x0000000Cu); // 8021A8A8
  goto L_8021A8BC; // 8021A8AC
L_8021A8B0:;
  c->r[6]=0u+0x00000000u; // 8021A8B0
  goto L_8021A8BC; // 8021A8B4
L_8021A8B8:;
  c->r[6]=0u+0xFFFFFFFFu; // 8021A8B8
L_8021A8BC:;
  c->r[7]=R32(c->r[1]+0x00000014u); // 8021A8BC
  c->r[3]=c->r[31]+c->r[30]; // 8021A8C0
  c->r[4]=c->r[31]+0x000000FCu; // 8021A8C4
  c->r[5]=0u+0x00000002u; // 8021A8C8
  c->r[8]=c->r[7]+0x00000001u; // 8021A8CC
  c->r[3]=c->r[3]+0x0000066Cu; // 8021A8D0
  c->r[0]=c->r[8]+0x00000001u; // 8021A8D4
  W32(c->r[1]+0x00000014u,c->r[0]); // 8021A8D8
  c->lr=0x8021A8E0u; f_8021EE1C(c); // 8021A8DC
  c->r[24]=c->r[24]+0x00000001u; // 8021A8E0
  c->r[29]=c->r[29]+0x00000004u; // 8021A8E4
  cmps(c,0,(int32_t)c->r[24],4); // 8021A8E8
  c->r[30]=c->r[30]+0x00000030u; // 8021A8EC
  if (crb(c,0)) { IRQCHK(c); goto L_8021A864; } // 8021A8F0
  c->r[28]=0u+0x00010000u; // 8021A8F4
  {uint32_t ea=c->r[2]+0xFFFFDEF8u; c->f[1]=c->ps1[1]=RF32(ea);} // 8021A8F8
  c->r[3]=c->r[31]+0x0000066Cu; // 8021A8FC
  c->r[5]=0u+0x00000001u; // 8021A900
  c->r[4]=c->r[28]+0x000005C2u; // 8021A904
  c->lr=0x8021A90Cu; f_8021F138(c); // 8021A908
  {uint32_t ea=c->r[2]+0xFFFFDEF8u; c->f[1]=c->ps1[1]=RF32(ea);} // 8021A90C
  c->r[3]=c->r[31]+0x0000069Cu; // 8021A910
  c->r[4]=c->r[28]+0x000005C7u; // 8021A914
  c->r[5]=0u+0x00000001u; // 8021A918
  c->lr=0x8021A920u; f_8021F138(c); // 8021A91C
  {uint32_t ea=c->r[2]+0xFFFFDEF8u; c->f[1]=c->ps1[1]=RF32(ea);} // 8021A920
  c->r[3]=c->r[31]+0x000006CCu; // 8021A924
  c->r[4]=c->r[28]+0x000005CCu; // 8021A928
  c->r[5]=0u+0x00000001u; // 8021A92C
  c->lr=0x8021A934u; f_8021F138(c); // 8021A930
  {uint32_t ea=c->r[2]+0xFFFFDEF8u; c->f[1]=c->ps1[1]=RF32(ea);} // 8021A934
  c->r[3]=c->r[31]+0x000006FCu; // 8021A938
  c->r[4]=c->r[28]+0x000005D1u; // 8021A93C
  c->r[5]=0u+0x00000001u; // 8021A940
  c->lr=0x8021A948u; f_8021F138(c); // 8021A944
  c->r[7]=R32(c->r[1]+0x00000014u); // 8021A948
  c->r[3]=c->r[31]+0x0000072Cu; // 8021A94C
  c->r[4]=c->r[31]+0x000000FCu; // 8021A950
  c->r[5]=0u+0x00000002u; // 8021A954
  c->r[0]=c->r[7]+0x00000001u; // 8021A958
  W32(c->r[1]+0x00000014u,c->r[0]); // 8021A95C
  c->r[6]=0u+0xFFFFFFFFu; // 8021A960
  c->r[8]=0u+0xFFFFFFFFu; // 8021A964
  c->lr=0x8021A96Cu; f_8021EE1C(c); // 8021A968
  {uint32_t ea=c->r[2]+0xFFFFDEF8u; c->f[1]=c->ps1[1]=RF32(ea);} // 8021A96C
  c->r[3]=c->r[31]+0x0000072Cu; // 8021A970
  c->r[4]=c->r[28]+0x000005D6u; // 8021A974
  c->r[5]=0u+0x00000001u; // 8021A978
  c->lr=0x8021A980u; f_8021F138(c); // 8021A97C
  c->r[28]=0u+0x00000001u; // 8021A980
  W32(c->r[31]+0x00000888u,c->r[28]); // 8021A984
  c->r[3]=c->r[31]|c->r[31]; // 8021A988
  c->r[4]=0u+0x00000000u; // 8021A98C
  W32(c->r[31]+0x000008B0u,c->r[28]); // 8021A990
  c->lr=0x8021A998u; f_8021AE14(c); // 8021A994
  c->r[30]=0u+0x00000000u; // 8021A998
  c->r[0]=0u+0x00000003u; // 8021A99C
  W32(c->r[31]+0x00000778u,c->r[30]); // 8021A9A0
  W32(c->r[31]+0x0000077Cu,c->r[0]); // 8021A9A4
  c->r[0]=R8(c->r[13]+0xFFFFBC32u); // 8021A9A8
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 8021A9AC
  if (!crb(c,2)) { goto L_8021A9F0; } // 8021A9B0
  c->r[29]=0u+0x80740000u; // 8021A9B4
  c->r[3]=c->r[29]+0x00004DA0u; // 8021A9B8
  c->lr=0x8021A9C0u; f_800506C0(c); // 8021A9BC
  c->r[3]=c->r[29]+0x00004DA0u; // 8021A9C0
  c->r[4]=0u+0x80040000u; // 8021A9C4
  c->r[5]=0u+0x80750000u; // 8021A9C8
  W32(c->r[3]+0x00000008u,c->r[3]); // 8021A9CC
  c->r[4]=c->r[4]+0x000055F4u; // 8021A9D0
  W8(c->r[3]+0x0000000Cu,c->r[30]); // 8021A9D4
  c->r[5]=c->r[5]+0x00005468u; // 8021A9D8
  W32(c->r[3]+0x00000014u,c->r[30]); // 8021A9DC
  W32(c->r[3]+0x00000010u,c->r[30]); // 8021A9E0
  W32(c->r[3]+0x00000028u,c->r[30]); // 8021A9E4
  c->lr=0x8021A9ECu; f_803A92B8(c); // 8021A9E8
  W8(c->r[13]+0xFFFFBC32u,c->r[28]); // 8021A9EC
L_8021A9F0:;
  c->r[4]=0u+0x80740000u; // 8021A9F0
  c->r[4]=c->r[4]+0x00004DA0u; // 8021A9F4
  c->r[3]=R32(c->r[4]+0x00000028u); // 8021A9F8
  cmps(c,0,(int32_t)c->r[3],0); // 8021A9FC
  if (crb(c,2)) { goto L_8021AA18; } // 8021AA00
  c->r[12]=R32(c->r[3]+0x00000000u); // 8021AA04
  c->r[12]=R32(c->r[12]+0x00000010u); // 8021AA08
  c->ctr=c->r[12]; // 8021AA0C
  if (true) { c->lr=0x8021AA14u; dispatch(c,c->ctr); } // 8021AA10
  goto L_8021AA1C; // 8021AA14
L_8021AA18:;
  c->r[3]=c->r[4]+0x00000018u; // 8021AA18
L_8021AA1C:;
  c->r[0]=0u+0x00000004u; // 8021AA1C
  W32(c->r[1]+0x00000008u,c->r[0]); // 8021AA20
  c->r[8]=0u+0x806E0000u; // 8021AA24
  c->r[10]=0u+0x806E0000u; // 8021AA28
  c->r[7]=R32(c->r[13]+0xFFFF9108u); // 8021AA2C
  c->r[4]=c->r[3]|c->r[3]; // 8021AA30
  c->r[3]=c->r[31]+0x0000075Cu; // 8021AA34
  c->r[5]=c->r[31]+0x000000FCu; // 8021AA38
  c->r[6]=c->r[1]+0x00000014u; // 8021AA3C
  c->r[8]=c->r[8]+0x00006D20u; // 8021AA40
  c->r[10]=c->r[10]+0x00006D30u; // 8021AA44
  c->r[9]=0u+0x00000003u; // 8021AA48
  c->lr=0x8021AA50u; f_80220118(c); // 8021AA4C
  c->r[3]=c->r[31]|c->r[31]; // 8021AA50
  c->lr=0x8021AA58u; f_8006481C(c); // 8021AA54
  c->r[29]=c->r[3]|c->r[3]; // 8021AA58
  c->r[3]=c->r[31]|c->r[31]; // 8021AA5C
  c->lr=0x8021AA64u; f_80064AFC(c); // 8021AA60
  c->r[4]=c->r[3]|c->r[3]; // 8021AA64
  c->r[5]=c->r[29]|c->r[29]; // 8021AA68
  c->r[3]=c->r[31]+0x00000928u; // 8021AA6C
  c->r[6]=c->r[31]+0x000005C0u; // 8021AA70
  c->lr=0x8021AA78u; f_80258718(c); // 8021AA74
  c->lr=0x8021AA7Cu; f_80220404(c); // 8021AA78
  cmps(c,0,(int32_t)c->r[3],0); // 8021AA7C
  if (crb(c,2)) { goto L_8021AA94; } // 8021AA80
  c->r[3]=c->r[31]+0x000008F8u; // 8021AA84
  c->r[4]=0u+0x00000003u; // 8021AA88
  c->r[5]=0u+0x00000001u; // 8021AA8C
  c->lr=0x8021AA94u; f_8005DCA0(c); // 8021AA90
L_8021AA94:;
  c->r[11]=c->r[1]+0x00000040u; // 8021AA94
  c->lr=0x8021AA9Cu; { c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8021AA98
  c->r[0]=R32(c->r[1]+0x00000044u); // 8021AA9C
  c->lr=c->r[0]; // 8021AAA0
  c->r[1]=c->r[1]+0x00000040u; // 8021AAA4
  return; // 8021AAA8
}

// fn_8021AAAC
void f_8021AAAC(Ctx* __restrict c) {
  trace_call(0x8021AAACu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8021AAAC
  c->r[0]=c->lr; // 8021AAB0
  c->r[4]=0u+0x00000000u; // 8021AAB4
  W32(c->r[1]+0x00000014u,c->r[0]); // 8021AAB8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8021AABC
  c->r[31]=c->r[3]|c->r[3]; // 8021AAC0
  c->r[5]=R32(c->r[3]+0x00000434u); // 8021AAC4
  c->r[3]=c->r[5]+0x00000030u; // 8021AAC8
  c->lr=0x8021AAD0u; f_802D94E8(c); // 8021AACC
  c->r[3]=c->r[31]|c->r[31]; // 8021AAD0
  c->r[4]=0u+0x00000001u; // 8021AAD4
  c->r[5]=0u+0x00000000u; // 8021AAD8
  c->lr=0x8021AAE0u; f_8005EF48(c); // 8021AADC
  c->r[3]=c->r[31]|c->r[31]; // 8021AAE0
  c->lr=0x8021AAE8u; f_8021CF74(c); // 8021AAE4
  c->r[3]=c->r[31]|c->r[31]; // 8021AAE8
  c->lr=0x8021AAF0u; f_8021D048(c); // 8021AAEC
  c->r[4]=0u+0x806A0000u; // 8021AAF0
  c->r[5]=0u+0x80760000u; // 8021AAF4
  c->r[4]=c->r[4]+0xFFFF8DB0u; // 8021AAF8
  c->r[6]=0u+0x80760000u; // 8021AAFC
  {uint32_t ea=c->r[2]+0xFFFFDEF0u; c->f[1]=c->ps1[1]=RF32(ea);} // 8021AB00
  c->r[3]=c->r[31]|c->r[31]; // 8021AB04
  c->r[4]=c->r[4]+0x00000007u; // 8021AB08
  c->r[5]=c->r[5]+0xFFFF9C78u; // 8021AB0C
  c->r[6]=c->r[6]+0xFFFF9CA8u; // 8021AB10
  c->lr=0x8021AB18u; f_8005FA84(c); // 8021AB14
  c->r[0]=R32(c->r[1]+0x00000014u); // 8021AB18
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8021AB1C
  c->lr=c->r[0]; // 8021AB20
  c->r[1]=c->r[1]+0x00000010u; // 8021AB24
  return; // 8021AB28
}

// fn_8021AB2C
void f_8021AB2C(Ctx* __restrict c) {
  trace_call(0x8021AB2Cu);
  {uint32_t ea=c->r[1]+0xFFFFFF90u; W32(ea,c->r[1]); c->r[1]=ea;} // 8021AB2C
  c->r[0]=c->lr; // 8021AB30
  W32(c->r[1]+0x00000074u,c->r[0]); // 8021AB34
  c->r[11]=c->r[1]+0x00000070u; // 8021AB38
  c->lr=0x8021AB40u; { W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8021AB3C
  c->r[31]=c->r[1]|c->r[1]; // 8021AB40
  c->r[4]=R32(c->r[3]+0x00000004u); // 8021AB44
  c->r[28]=c->r[3]|c->r[3]; // 8021AB48
  cmps(c,0,(int32_t)c->r[4],0); // 8021AB4C
  if (crb(c,2)) { goto L_8021AB5C; } // 8021AB50
  c->r[0]=R32(c->r[4]+0x00000008u); // 8021AB54
  goto L_8021AB60; // 8021AB58
L_8021AB5C:;
  c->r[0]=0u+0x00000000u; // 8021AB5C
L_8021AB60:;
  cmps(c,0,(int32_t)c->r[0],0); // 8021AB60
  if (!crb(c,2)) { goto L_8021AC30; } // 8021AB64
  {uint32_t ea=c->r[2]+0xFFFFDEF0u; c->f[2]=c->ps1[2]=RF32(ea);} // 8021AB68
  c->r[3]=c->r[31]+0x00000030u; // 8021AB6C
  {uint32_t ea=c->r[2]+0xFFFFDEFCu; c->f[1]=c->ps1[1]=RF32(ea);} // 8021AB70
  c->f[3]=c->f[2]; // 8021AB74
  c->lr=0x8021AB7Cu; f_8032B9D0(c); // 8021AB78
  {uint32_t ea=c->r[2]+0xFFFFDF00u; c->f[0]=c->ps1[0]=RF32(ea);} // 8021AB7C
  c->r[3]=c->r[28]|c->r[28]; // 8021AB80
  {uint32_t ea=c->r[2]+0xFFFFDF04u; c->f[4]=c->ps1[4]=RF32(ea);} // 8021AB84
  c->r[4]=c->r[31]+0x00000030u; // 8021AB88
  {uint32_t ea=c->r[2]+0xFFFFDF08u; c->f[3]=c->ps1[3]=RF32(ea);} // 8021AB8C
  c->f[2]=c->ps1[2]=S(c->f[0]); // 8021AB90
  c->f[1]=c->ps1[1]=S(c->f[4]); // 8021AB94
  {uint32_t ea=c->r[31]+0x0000000Cu; WF32(ea,c->f[0]);} // 8021AB98
  c->f[0]=c->ps1[0]=S(c->f[3]); // 8021AB9C
  {uint32_t ea=c->r[31]+0x0000003Cu; WF32(ea,c->f[2]);} // 8021ABA0
  {uint32_t ea=c->r[31]+0x0000004Cu; WF32(ea,c->f[1]);} // 8021ABA4
  {uint32_t ea=c->r[31]+0x0000005Cu; WF32(ea,c->f[0]);} // 8021ABA8
  c->r[12]=R32(c->r[28]+0x0000001Cu); // 8021ABAC
  {uint32_t ea=c->r[31]+0x00000010u; WF32(ea,c->f[4]);} // 8021ABB0
  c->r[12]=R32(c->r[12]+0x000000F0u); // 8021ABB4
  {uint32_t ea=c->r[31]+0x00000014u; WF32(ea,c->f[3]);} // 8021ABB8
  c->ctr=c->r[12]; // 8021ABBC
  if (true) { c->lr=0x8021ABC4u; dispatch(c,c->ctr); } // 8021ABC0
  c->lr=0x8021ABC8u; f_8021A674(c); // 8021ABC4
  c->r[4]=c->r[3]|c->r[3]; // 8021ABC8
  c->r[3]=c->r[28]|c->r[28]; // 8021ABCC
  c->lr=0x8021ABD4u; f_80062F4C(c); // 8021ABD0
  c->r[0]=R8(c->r[28]+0x00000010u); // 8021ABD4
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 8021ABD8
  c->r[3]=c->r[28]+c->r[0]; // 8021ABDC
  c->r[29]=R32(c->r[3]+0x00000014u); // 8021ABE0
  cmps(c,0,(int32_t)c->r[29],0); // 8021ABE4
  if (crb(c,2)) { goto L_8021AC10; } // 8021ABE8
  c->r[30]=0u+0x00000000u; // 8021ABEC
  W32(c->r[31]+0x0000002Cu,c->r[1]); // 8021ABF0
  W8(c->r[31]+0x00000008u,c->r[30]); // 8021ABF4
  c->lr=0x8021ABFCu; f_8021A674(c); // 8021ABF8
  W32(c->r[29]+0x00000000u,c->r[3]); // 8021ABFC
  c->r[0]=c->r[13]+0xFFFF9120u; // 8021AC00
  W32(c->r[29]+0x00000004u,c->r[0]); // 8021AC04
  W32(c->r[29]+0x00000008u,c->r[30]); // 8021AC08
  W32(c->r[29]+0x0000000Cu,c->r[30]); // 8021AC0C
L_8021AC10:;
  W32(c->r[28]+0x00000008u,c->r[29]); // 8021AC10
  c->r[0]=0u+0x00000000u; // 8021AC14
  c->r[3]=c->r[28]|c->r[28]; // 8021AC18
  c->r[4]=c->r[29]|c->r[29]; // 8021AC1C
  W32(c->r[29]+0x00000008u,c->r[0]); // 8021AC20
  c->r[0]=R32(c->r[28]+0x00000004u); // 8021AC24
  W32(c->r[28]+0x0000000Cu,c->r[0]); // 8021AC28
  c->lr=0x8021AC30u; f_8006306C(c); // 8021AC2C
L_8021AC30:;
  c->r[10]=c->r[31]|c->r[31]; // 8021AC30
  c->r[11]=c->r[10]+0x00000070u; // 8021AC34
  c->lr=0x8021AC3Cu; { c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8021AC38
  c->r[10]=R32(c->r[1]+0x00000000u); // 8021AC3C
  c->r[0]=R32(c->r[10]+0x00000004u); // 8021AC40
  c->r[1]=c->r[10]|c->r[10]; // 8021AC44
  c->lr=c->r[0]; // 8021AC48
  return; // 8021AC4C
}

// fn_8021AC50
void f_8021AC50(Ctx* __restrict c) {
  trace_call(0x8021AC50u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8021AC50
  c->r[0]=c->lr; // 8021AC54
  W32(c->r[1]+0x00000014u,c->r[0]); // 8021AC58
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8021AC5C
  c->r[31]=c->r[3]|c->r[3]; // 8021AC60
  c->lr=0x8021AC68u; f_8021CF74(c); // 8021AC64
  c->r[3]=c->r[31]|c->r[31]; // 8021AC68
  c->lr=0x8021AC70u; f_8021B2B4(c); // 8021AC6C
  c->r[3]=c->r[31]+0x000005C4u; // 8021AC70
  c->lr=0x8021AC78u; f_800E1F38(c); // 8021AC74
  {uint32_t ea=c->r[2]+0xFFFFDEF0u; c->f[1]=c->ps1[1]=RF32(ea);} // 8021AC78
  c->r[3]=c->r[31]+0x000008CCu; // 8021AC7C
  c->lr=0x8021AC84u; f_800A804C(c); // 8021AC80
  c->r[0]=R32(c->r[1]+0x00000014u); // 8021AC84
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8021AC88
  c->lr=c->r[0]; // 8021AC8C
  c->r[1]=c->r[1]+0x00000010u; // 8021AC90
  return; // 8021AC94
}

// fn_8021AC98
void f_8021AC98(Ctx* __restrict c) {
  trace_call(0x8021AC98u);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8021AC98
  c->r[0]=c->lr; // 8021AC9C
  W32(c->r[1]+0x00000054u,c->r[0]); // 8021ACA0
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[31]);} // 8021ACA4
  {uint32_t ea=c->r[1]+0x00000048u; psq_store(c,31,ea,0,0);} // 8021ACA8
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[30]);} // 8021ACAC
  {uint32_t ea=c->r[1]+0x00000038u; psq_store(c,30,ea,0,0);} // 8021ACB0
  c->r[5]=R32(c->r[3]+0x00000444u); // 8021ACB4
  c->r[0]=0u+0x00000000u; // 8021ACB8
  c->r[4]=R32(c->r[3]+0x0000044Cu); // 8021ACBC
  c->r[3]=c->r[1]+0x00000008u; // 8021ACC0
  {uint32_t ea=c->r[5]+0x00000000u; c->f[31]=c->ps1[31]=RF32(ea);} // 8021ACC4
  {uint32_t ea=c->r[4]+0x00000000u; c->f[30]=c->ps1[30]=RF32(ea);} // 8021ACC8
  W8(c->r[1]+0x00000008u,c->r[0]); // 8021ACCC
  c->lr=0x8021ACD4u; f_800462D8(c); // 8021ACD0
  c->f[1]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[30],true)); // 8021ACD4
  c->r[4]=0u+0x43300000u; // 8021ACD8
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[31],true)); // 8021ACDC
  W32(c->r[1]+0x00000018u,c->r[4]); // 8021ACE0
  {uint32_t ea=c->r[2]+0xFFFFDF10u; c->f[2]=RF64(ea);} // 8021ACE4
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[1]);} // 8021ACE8
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[0]);} // 8021ACEC
  c->r[5]=R32(c->r[1]+0x00000014u); // 8021ACF0
  c->r[0]=R32(c->r[1]+0x00000024u); // 8021ACF4
  c->r[5]=c->r[5]^0x80000000u; // 8021ACF8
  W32(c->r[1]+0x0000001Cu,c->r[5]); // 8021ACFC
  c->r[0]=c->r[0]^0x80000000u; // 8021AD00
  {uint32_t ea=c->r[1]+0x00000018u; c->f[0]=RF64(ea);} // 8021AD04
  W32(c->r[1]+0x0000002Cu,c->r[0]); // 8021AD08
  c->f[1]=c->ps1[1]=S(c->f[0]-c->f[2]); // 8021AD0C
  W32(c->r[1]+0x00000028u,c->r[4]); // 8021AD10
  {uint32_t ea=c->r[1]+0x00000028u; c->f[0]=RF64(ea);} // 8021AD14
  c->f[2]=c->ps1[2]=S(c->f[0]-c->f[2]); // 8021AD18
  c->lr=0x8021AD20u; f_800EA1BC(c); // 8021AD1C
  c->r[0]=R32(c->r[1]+0x00000054u); // 8021AD20
  {uint32_t ea=c->r[1]+0x00000048u; psq_load(c,31,ea,0,0);} // 8021AD24
  {uint32_t ea=c->r[1]+0x00000040u; c->f[31]=RF64(ea);} // 8021AD28
  {uint32_t ea=c->r[1]+0x00000038u; psq_load(c,30,ea,0,0);} // 8021AD2C
  {uint32_t ea=c->r[1]+0x00000030u; c->f[30]=RF64(ea);} // 8021AD30
  c->lr=c->r[0]; // 8021AD34
  c->r[1]=c->r[1]+0x00000050u; // 8021AD38
  return; // 8021AD3C
}

// fn_8021AD40
void f_8021AD40(Ctx* __restrict c) {
  trace_call(0x8021AD40u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8021AD40
  c->r[0]=c->lr; // 8021AD44
  W32(c->r[1]+0x00000034u,c->r[0]); // 8021AD48
  {uint32_t ea=c->r[1]+0x00000028u; WF64(ea,c->f[31]);} // 8021AD4C
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[30]);} // 8021AD50
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 8021AD54
  c->r[29]=c->r[3]|c->r[3]; // 8021AD58
  c->r[30]=0u+0x00000000u; // 8021AD5C
  c->r[31]=0u+0x00000000u; // 8021AD60
L_8021AD64:;
  c->r[3]=c->r[29]+c->r[31]; // 8021AD64
  c->r[3]=c->r[3]+0x0000066Cu; // 8021AD68
  c->lr=0x8021AD70u; f_8021EE38(c); // 8021AD6C
  c->r[30]=c->r[30]+0x00000001u; // 8021AD70
  c->r[31]=c->r[31]+0x00000030u; // 8021AD74
  cmps(c,0,(int32_t)c->r[30],4); // 8021AD78
  if (crb(c,0)) { IRQCHK(c); goto L_8021AD64; } // 8021AD7C
  c->r[3]=c->r[29]+0x0000072Cu; // 8021AD80
  c->lr=0x8021AD88u; f_8021EE38(c); // 8021AD84
  c->r[3]=c->r[29]+0x00000668u; // 8021AD88
  c->lr=0x8021AD90u; f_800A7D5C(c); // 8021AD8C
  c->r[3]=c->r[29]+0x00000924u; // 8021AD90
  c->lr=0x8021AD98u; f_800A7D5C(c); // 8021AD94
  c->r[3]=R32(c->r[29]+0x00000354u); // 8021AD98
  cmps(c,0,(int32_t)c->r[3],0); // 8021AD9C
  if (!crb(c,2)) { goto L_8021ADAC; } // 8021ADA0
  c->r[31]=0u+0x00000000u; // 8021ADA4
  goto L_8021ADB8; // 8021ADA8
L_8021ADAC:;
  c->r[3]=R32(c->r[3]+0x00000004u); // 8021ADAC
  c->r[0]=sraw(c,c->r[3],31); // 8021ADB0
  c->r[31]=c->r[3]&~c->r[0]; // 8021ADB4
L_8021ADB8:;
  c->r[3]=R32(c->r[29]+0x00000404u); // 8021ADB8
  c->lr=0x8021ADC0u; f_802EA4B0(c); // 8021ADBC
  c->f[30]=c->f[1]; // 8021ADC0
  c->r[3]=c->r[29]+0x000005C4u; // 8021ADC4
  c->lr=0x8021ADCCu; f_800E2A98(c); // 8021ADC8
  c->f[31]=c->f[1]; // 8021ADCC
  c->r[3]=c->r[29]+0x000005C4u; // 8021ADD0
  c->lr=0x8021ADD8u; f_800E2090(c); // 8021ADD4
  c->f[1]=c->f[30]; // 8021ADD8
  c->r[5]=c->r[3]|c->r[3]; // 8021ADDC
  c->f[2]=c->f[31]; // 8021ADE0
  c->r[4]=c->r[31]|c->r[31]; // 8021ADE4
  c->r[3]=c->r[29]+0x00000928u; // 8021ADE8
  c->lr=0x8021ADF0u; f_802588C4(c); // 8021ADEC
  {uint32_t ea=c->r[1]+0x00000028u; c->f[31]=RF64(ea);} // 8021ADF0
  {uint32_t ea=c->r[1]+0x00000020u; c->f[30]=RF64(ea);} // 8021ADF4
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 8021ADF8
  c->r[0]=R32(c->r[1]+0x00000034u); // 8021ADFC
  c->lr=c->r[0]; // 8021AE00
  c->r[1]=c->r[1]+0x00000030u; // 8021AE04
  return; // 8021AE08
}

// fn_8021AE0C
void f_8021AE0C(Ctx* __restrict c) {
  trace_call(0x8021AE0Cu);
  return; // 8021AE0C
}

// fn_8021AE10
void f_8021AE10(Ctx* __restrict c) {
  trace_call(0x8021AE10u);
  return; // 8021AE10
}

// fn_8021AE14
void f_8021AE14(Ctx* __restrict c) {
  trace_call(0x8021AE14u);
  {uint32_t ea=c->r[2]+0xFFFFDEF0u; c->f[0]=c->ps1[0]=RF32(ea);} // 8021AE14
  c->r[0]=0u+0x00000000u; // 8021AE18
  W32(c->r[3]+0x0000091Cu,c->r[4]); // 8021AE1C
  W32(c->r[3]+0x00000920u,c->r[0]); // 8021AE20
  {uint32_t ea=c->r[3]+0x00000924u; WF32(ea,c->f[0]);} // 8021AE24
  return; // 8021AE28
}

// fn_8021AE2C
void f_8021AE2C(Ctx* __restrict c) {
  trace_call(0x8021AE2Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8021AE2C
  c->r[0]=c->lr; // 8021AE30
  c->r[5]=0u+0x806A0000u; // 8021AE34
  W32(c->r[1]+0x00000014u,c->r[0]); // 8021AE38
  c->r[5]=c->r[5]+0xFFFF8DB0u; // 8021AE3C
  c->r[4]=c->r[5]+0x0000001Bu; // 8021AE40
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8021AE44
  c->r[31]=c->r[3]|c->r[3]; // 8021AE48
  c->r[0]=R32(c->r[3]+0x00000780u); // 8021AE4C
  c->r[3]=R32(c->r[3]+0x00000434u); // 8021AE50
  cmps(c,0,(int32_t)c->r[0],0); // 8021AE54
  if (!crb(c,2)) { goto L_8021AE60; } // 8021AE58
  c->r[4]=c->r[5]+0x00000016u; // 8021AE5C
L_8021AE60:;
  c->lr=0x8021AE64u; f_800FE0C8(c); // 8021AE60
  c->r[3]=c->r[31]|c->r[31]; // 8021AE64
  c->lr=0x8021AE6Cu; f_8021AFF0(c); // 8021AE68
  cmps(c,0,(int32_t)c->r[3],0); // 8021AE6C
  if (crb(c,2)) { goto L_8021AE78; } // 8021AE70
  goto L_8021AE8C; // 8021AE74
L_8021AE78:;
  c->r[3]=c->r[31]|c->r[31]; // 8021AE78
  c->r[4]=0u+0x00000001u; // 8021AE7C
  c->lr=0x8021AE84u; f_8021AE14(c); // 8021AE80
  c->r[3]=c->r[31]|c->r[31]; // 8021AE84
  c->lr=0x8021AE8Cu; f_8007D4D4(c); // 8021AE88
L_8021AE8C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8021AE8C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8021AE90
  c->lr=c->r[0]; // 8021AE94
  c->r[1]=c->r[1]+0x00000010u; // 8021AE98
  return; // 8021AE9C
}

// fn_8021AEA0
void f_8021AEA0(Ctx* __restrict c) {
  trace_call(0x8021AEA0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8021AEA0
  c->r[0]=c->lr; // 8021AEA4
  W32(c->r[1]+0x00000014u,c->r[0]); // 8021AEA8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8021AEAC
  c->r[31]=c->r[3]|c->r[3]; // 8021AEB0
  c->r[0]=R32(c->r[3]+0x00000780u); // 8021AEB4
  cmps(c,0,(int32_t)c->r[0],0); // 8021AEB8
  if (!crb(c,2)) { goto L_8021AED8; } // 8021AEBC
  c->r[4]=0u+0x806A0000u; // 8021AEC0
  c->r[3]=R32(c->r[3]+0x00000434u); // 8021AEC4
  c->r[4]=c->r[4]+0xFFFF8DB0u; // 8021AEC8
  c->r[4]=c->r[4]+0x00000020u; // 8021AECC
  c->lr=0x8021AED4u; f_800FE0C8(c); // 8021AED0
  goto L_8021AF24; // 8021AED4
L_8021AED8:;
  c->r[4]=0u+0x00000001u; // 8021AED8
  c->lr=0x8021AEE0u; f_8021AF60(c); // 8021AEDC
  cmps(c,0,(int32_t)c->r[3],0); // 8021AEE0
  if (!crb(c,2)) { goto L_8021AF00; } // 8021AEE4
  c->r[4]=0u+0x806A0000u; // 8021AEE8
  c->r[3]=R32(c->r[31]+0x00000434u); // 8021AEEC
  c->r[4]=c->r[4]+0xFFFF8DB0u; // 8021AEF0
  c->r[4]=c->r[4]+0x00000025u; // 8021AEF4
  c->lr=0x8021AEFCu; f_800FE0C8(c); // 8021AEF8
  goto L_8021AF14; // 8021AEFC
L_8021AF00:;
  c->r[4]=0u+0x806A0000u; // 8021AF00
  c->r[3]=R32(c->r[31]+0x00000434u); // 8021AF04
  c->r[4]=c->r[4]+0xFFFF8DB0u; // 8021AF08
  c->r[4]=c->r[4]+0x0000002Fu; // 8021AF0C
  c->lr=0x8021AF14u; f_800FE0C8(c); // 8021AF10
L_8021AF14:;
  c->r[3]=c->r[31]+0x000008F8u; // 8021AF14
  c->r[4]=0u+0x00000001u; // 8021AF18
  c->r[5]=0u+0x00000001u; // 8021AF1C
  c->lr=0x8021AF24u; f_8005DCA0(c); // 8021AF20
L_8021AF24:;
  c->r[3]=c->r[31]|c->r[31]; // 8021AF24
  c->lr=0x8021AF2Cu; f_8021AFF0(c); // 8021AF28
  cmps(c,0,(int32_t)c->r[3],0); // 8021AF2C
  if (crb(c,2)) { goto L_8021AF38; } // 8021AF30
  goto L_8021AF4C; // 8021AF34
L_8021AF38:;
  c->r[3]=c->r[31]|c->r[31]; // 8021AF38
  c->r[4]=0u+0x00000000u; // 8021AF3C
  c->lr=0x8021AF44u; f_8021AE14(c); // 8021AF40
  c->r[3]=c->r[31]|c->r[31]; // 8021AF44
  c->lr=0x8021AF4Cu; f_8007D4D4(c); // 8021AF48
L_8021AF4C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8021AF4C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8021AF50
  c->lr=c->r[0]; // 8021AF54
  c->r[1]=c->r[1]+0x00000010u; // 8021AF58
  return; // 8021AF5C
}

// fn_8021AF60
void f_8021AF60(Ctx* __restrict c) {
  trace_call(0x8021AF60u);
  c->r[5]=rotl(c->r[4],29)&0x1FFFFFFCu; // 8021AF60
  c->r[0]=rotl(c->r[4],0)&0x0000001Fu; // 8021AF64
  c->r[3]=c->r[3]+c->r[5]; // 8021AF68
  c->r[3]=R32(c->r[3]+0x000008F8u); // 8021AF6C
  c->r[0]=((c->r[0])&0x20)?0u:(c->r[3]>>((c->r[0])&31)); // 8021AF70
  c->r[3]=rotl(c->r[0],0)&0x00000001u; // 8021AF74
  return; // 8021AF78
}

// fn_8021AF7C
void f_8021AF7C(Ctx* __restrict c) {
  trace_call(0x8021AF7Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8021AF7C
  c->r[0]=c->lr; // 8021AF80
  c->r[4]=0u+0x00000000u; // 8021AF84
  W32(c->r[1]+0x00000014u,c->r[0]); // 8021AF88
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8021AF8C
  c->r[31]=c->r[3]|c->r[3]; // 8021AF90
  c->r[0]=R32(c->r[3]+0x0000091Cu); // 8021AF94
  cmps(c,0,(int32_t)c->r[0],0); // 8021AF98
  if (crb(c,2)) { goto L_8021AFAC; } // 8021AF9C
  cmps(c,0,(int32_t)c->r[0],1); // 8021AFA0
  if (crb(c,2)) { goto L_8021AFB8; } // 8021AFA4
  goto L_8021AFC0; // 8021AFA8
L_8021AFAC:;
  c->lr=0x8021AFB0u; f_8021AE2C(c); // 8021AFAC
  c->r[4]=c->r[3]|c->r[3]; // 8021AFB0
  goto L_8021AFC0; // 8021AFB4
L_8021AFB8:;
  c->lr=0x8021AFBCu; f_8021AEA0(c); // 8021AFB8
  c->r[4]=c->r[3]|c->r[3]; // 8021AFBC
L_8021AFC0:;
  cmps(c,0,(int32_t)c->r[4],0); // 8021AFC0
  if (crb(c,2)) { goto L_8021AFCC; } // 8021AFC4
  goto L_8021AFD8; // 8021AFC8
L_8021AFCC:;
  c->r[3]=c->r[31]|c->r[31]; // 8021AFCC
  c->lr=0x8021AFD4u; f_8005E0F8(c); // 8021AFD0
  c->r[4]=c->r[3]|c->r[3]; // 8021AFD4
L_8021AFD8:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8021AFD8
  c->r[3]=c->r[4]|c->r[4]; // 8021AFDC
  c->r[0]=R32(c->r[1]+0x00000014u); // 8021AFE0
  c->lr=c->r[0]; // 8021AFE4
  c->r[1]=c->r[1]+0x00000010u; // 8021AFE8
  return; // 8021AFEC
}

// fn_8021AFF0
void f_8021AFF0(Ctx* __restrict c) {
  trace_call(0x8021AFF0u);
  {uint32_t ea=c->r[1]+0xFFFFFF80u; W32(ea,c->r[1]); c->r[1]=ea;} // 8021AFF0
  c->r[0]=c->lr; // 8021AFF4
  W32(c->r[1]+0x00000084u,c->r[0]); // 8021AFF8
  {uint32_t ea=c->r[1]+0x00000070u; WF64(ea,c->f[31]);} // 8021AFFC
  {uint32_t ea=c->r[1]+0x00000078u; psq_store(c,31,ea,0,0);} // 8021B000
  {uint32_t ea=c->r[1]+0x00000060u; WF64(ea,c->f[30]);} // 8021B004
  {uint32_t ea=c->r[1]+0x00000068u; psq_store(c,30,ea,0,0);} // 8021B008
  {uint32_t ea=c->r[1]+0x00000050u; WF64(ea,c->f[29]);} // 8021B00C
  {uint32_t ea=c->r[1]+0x00000058u; psq_store(c,29,ea,0,0);} // 8021B010
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[28]);} // 8021B014
  {uint32_t ea=c->r[1]+0x00000048u; psq_store(c,28,ea,0,0);} // 8021B018
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[27]);} // 8021B01C
  {uint32_t ea=c->r[1]+0x00000038u; psq_store(c,27,ea,0,0);} // 8021B020
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 8021B024
  W32(c->r[1]+0x00000028u,c->r[30]); // 8021B028
  c->r[30]=c->r[3]|c->r[3]; // 8021B02C
  c->r[3]=R32(c->r[3]+0x00000434u); // 8021B030
  c->lr=0x8021B038u; f_800FE6EC(c); // 8021B034
  c->r[0]=R32(c->r[30]+0x00000920u); // 8021B038
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[3]); // 8021B03C
  if (crb(c,0)) { goto L_8021B04C; } // 8021B040
  c->r[3]=0u+0x00000000u; // 8021B044
  goto L_8021B194; // 8021B048
L_8021B04C:;
  {uint32_t ea=c->r[2]+0xFFFFDF10u; c->f[28]=RF64(ea);} // 8021B04C
  c->r[31]=0u+0x43300000u; // 8021B050
  {uint32_t ea=c->r[2]+0xFFFFDF18u; c->f[29]=c->ps1[29]=RF32(ea);} // 8021B054
  {uint32_t ea=c->r[2]+0xFFFFDF1Cu; c->f[30]=c->ps1[30]=RF32(ea);} // 8021B058
  {uint32_t ea=c->r[2]+0xFFFFDEF4u; c->f[31]=c->ps1[31]=RF32(ea);} // 8021B05C
L_8021B060:;
  c->r[4]=R32(c->r[30]+0x00000434u); // 8021B060
  c->r[3]=c->r[1]+0x00000008u; // 8021B064
  c->r[5]=R32(c->r[30]+0x00000920u); // 8021B068
  c->lr=0x8021B070u; f_800FE734(c); // 8021B06C
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 8021B070
  cmps(c,0,(int32_t)c->r[0],0); // 8021B074
  if (!crb(c,2)) { goto L_8021B084; } // 8021B078
  c->r[3]=0u+0x00000000u; // 8021B07C
  goto L_8021B194; // 8021B080
L_8021B084:;
  c->r[3]=R32(c->r[30]+0x00000920u); // 8021B084
  c->r[0]=c->r[3]+0x00000001u; // 8021B088
  W32(c->r[30]+0x00000920u,c->r[0]); // 8021B08C
  {uint32_t ea=c->r[1]+0x00000010u; c->f[27]=c->ps1[27]=RF32(ea);} // 8021B090
  c->lr=0x8021B098u; f_803B220C(c); // 8021B094
  c->r[0]=c->r[3]^0x80000000u; // 8021B098
  W32(c->r[1]+0x00000024u,c->r[0]); // 8021B09C
  W32(c->r[1]+0x00000020u,c->r[31]); // 8021B0A0
  {uint32_t ea=c->r[1]+0x00000020u; c->f[0]=RF64(ea);} // 8021B0A4
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[28]); // 8021B0A8
  c->f[0]=c->ps1[0]=S(c->f[0]/c->f[29]); // 8021B0AC
  c->f[0]=c->ps1[0]=S(std::fma(c->f[30],c->f[0],c->f[31])); // 8021B0B0
  fcmp(c,0,c->f[27],c->f[0]); // 8021B0B4
  setcrb(c,2,crb(c,1)|crb(c,2)); // 8021B0B8
  c->r[0]=c->cr; // 8021B0BC
  c->r[0]=rotl(c->r[0],3)&0x00000001u; cr0(c,c->r[0]); // 8021B0C0
  if (crb(c,2)) { IRQCHK(c); goto L_8021B060; } // 8021B0C4
  c->r[0]=R32(c->r[1]+0x00000008u); // 8021B0C8
  cmps(c,0,(int32_t)c->r[0],0); // 8021B0CC
  if (!crb(c,0)) { goto L_8021B0DC; } // 8021B0D0
  c->r[3]=0u+0x00000000u; // 8021B0D4
  goto L_8021B194; // 8021B0D8
L_8021B0DC:;
  cmpu(c,0,c->r[0],0x00000009u); // 8021B0DC
  if (crb(c,1)) { goto L_8021B190; } // 8021B0E0
  c->r[3]=0u+0x806E0000u; // 8021B0E4
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 8021B0E8
  c->r[3]=c->r[3]+0x00006D50u; // 8021B0EC
  c->r[3]=R32(c->r[3]+c->r[0]); // 8021B0F0
  c->ctr=c->r[3]; // 8021B0F4
  if (true) { switch (c->ctr) { case 0x8021B0FCu: goto L_8021B0FC; case 0x8021B104u: goto L_8021B104; case 0x8021B110u: goto L_8021B110; case 0x8021B120u: goto L_8021B120; case 0x8021B130u: goto L_8021B130; case 0x8021B140u: goto L_8021B140; case 0x8021B150u: goto L_8021B150; case 0x8021B160u: goto L_8021B160; case 0x8021B170u: goto L_8021B170; case 0x8021B180u: goto L_8021B180; default: break; } dispatch(c,c->ctr); return; } // 8021B0F8
L_8021B0FC:;
  c->r[3]=0u+0x00000000u; // 8021B0FC
  goto L_8021B194; // 8021B100
L_8021B104:;
  c->r[3]=c->r[30]|c->r[30]; // 8021B104
  c->lr=0x8021B10Cu; f_8005E0F8(c); // 8021B108
  goto L_8021B194; // 8021B10C
L_8021B110:;
  c->r[3]=c->r[30]|c->r[30]; // 8021B110
  c->r[4]=0u+0x00000000u; // 8021B114
  c->lr=0x8021B11Cu; f_8021B1D4(c); // 8021B118
  goto L_8021B194; // 8021B11C
L_8021B120:;
  c->r[3]=c->r[30]|c->r[30]; // 8021B120
  c->r[4]=0u+0x00000001u; // 8021B124
  c->lr=0x8021B12Cu; f_8021B1D4(c); // 8021B128
  goto L_8021B194; // 8021B12C
L_8021B130:;
  c->r[3]=c->r[30]|c->r[30]; // 8021B130
  c->r[4]=0u+0x00000002u; // 8021B134
  c->lr=0x8021B13Cu; f_8021B1D4(c); // 8021B138
  goto L_8021B194; // 8021B13C
L_8021B140:;
  c->r[3]=c->r[30]|c->r[30]; // 8021B140
  c->r[4]=0u+0x00000003u; // 8021B144
  c->lr=0x8021B14Cu; f_8021B1D4(c); // 8021B148
  goto L_8021B194; // 8021B14C
L_8021B150:;
  c->r[3]=c->r[30]|c->r[30]; // 8021B150
  c->r[4]=0u+0x00000004u; // 8021B154
  c->lr=0x8021B15Cu; f_8021B1D4(c); // 8021B158
  goto L_8021B194; // 8021B15C
L_8021B160:;
  c->r[3]=c->r[30]|c->r[30]; // 8021B160
  c->r[4]=0u+0x00000005u; // 8021B164
  c->lr=0x8021B16Cu; f_8021B1D4(c); // 8021B168
  goto L_8021B194; // 8021B16C
L_8021B170:;
  c->r[3]=c->r[30]|c->r[30]; // 8021B170
  c->r[4]=0u+0x00000006u; // 8021B174
  c->lr=0x8021B17Cu; f_8021B1D4(c); // 8021B178
  goto L_8021B194; // 8021B17C
L_8021B180:;
  c->r[3]=c->r[30]|c->r[30]; // 8021B180
  c->r[4]=0u+0x00000007u; // 8021B184
  c->lr=0x8021B18Cu; f_8021B1D4(c); // 8021B188
  goto L_8021B194; // 8021B18C
L_8021B190:;
  c->r[3]=0u+0x00000000u; // 8021B190
L_8021B194:;
  c->r[0]=R32(c->r[1]+0x00000084u); // 8021B194
  {uint32_t ea=c->r[1]+0x00000078u; psq_load(c,31,ea,0,0);} // 8021B198
  {uint32_t ea=c->r[1]+0x00000070u; c->f[31]=RF64(ea);} // 8021B19C
  {uint32_t ea=c->r[1]+0x00000068u; psq_load(c,30,ea,0,0);} // 8021B1A0
  {uint32_t ea=c->r[1]+0x00000060u; c->f[30]=RF64(ea);} // 8021B1A4
  {uint32_t ea=c->r[1]+0x00000058u; psq_load(c,29,ea,0,0);} // 8021B1A8
  {uint32_t ea=c->r[1]+0x00000050u; c->f[29]=RF64(ea);} // 8021B1AC
  {uint32_t ea=c->r[1]+0x00000048u; psq_load(c,28,ea,0,0);} // 8021B1B0
  {uint32_t ea=c->r[1]+0x00000040u; c->f[28]=RF64(ea);} // 8021B1B4
  {uint32_t ea=c->r[1]+0x00000038u; psq_load(c,27,ea,0,0);} // 8021B1B8
  {uint32_t ea=c->r[1]+0x00000030u; c->f[27]=RF64(ea);} // 8021B1BC
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 8021B1C0
  c->r[30]=R32(c->r[1]+0x00000028u); // 8021B1C4
  c->lr=c->r[0]; // 8021B1C8
  c->r[1]=c->r[1]+0x00000080u; // 8021B1CC
  return; // 8021B1D0
}

// fn_8021B1D4
void f_8021B1D4(Ctx* __restrict c) {
  trace_call(0x8021B1D4u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8021B1D4
  c->r[0]=c->lr; // 8021B1D8
  W32(c->r[1]+0x00000044u,c->r[0]); // 8021B1DC
  {uint32_t ea=c->r[1]+0x00000030u; for(int i=28;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 8021B1E0
  c->r[31]=c->r[1]|c->r[1]; // 8021B1E4
  c->r[28]=c->r[3]|c->r[3]; // 8021B1E8
  W32(c->r[3]+0x000008F0u,c->r[4]); // 8021B1EC
  c->lr=0x8021B1F4u; f_80061044(c); // 8021B1F0
  c->r[4]=c->r[3]|c->r[3]; // 8021B1F4
  c->r[3]=c->r[28]|c->r[28]; // 8021B1F8
  c->lr=0x8021B200u; f_80062F4C(c); // 8021B1FC
  c->r[0]=R8(c->r[28]+0x00000010u); // 8021B200
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 8021B204
  c->r[3]=c->r[28]+c->r[0]; // 8021B208
  c->r[29]=R32(c->r[3]+0x00000014u); // 8021B20C
  cmps(c,0,(int32_t)c->r[29],0); // 8021B210
  if (crb(c,2)) { goto L_8021B24C; } // 8021B214
  c->r[30]=0u+0x00000000u; // 8021B218
  W32(c->r[31]+0x00000024u,c->r[1]); // 8021B21C
  W8(c->r[31]+0x00000008u,c->r[30]); // 8021B220
  c->lr=0x8021B228u; f_80061044(c); // 8021B224
  W32(c->r[29]+0x00000000u,c->r[3]); // 8021B228
  c->r[0]=c->r[13]+0xFFFF80D0u; // 8021B22C
  c->r[3]=c->r[29]+0x00000010u; // 8021B230
  c->r[4]=0u+0x00000000u; // 8021B234
  W32(c->r[29]+0x00000004u,c->r[0]); // 8021B238
  c->r[5]=0u+0x00000010u; // 8021B23C
  W32(c->r[29]+0x00000008u,c->r[30]); // 8021B240
  W32(c->r[29]+0x0000000Cu,c->r[30]); // 8021B244
  c->lr=0x8021B24Cu; f_800043EC(c); // 8021B248
L_8021B24C:;
  W32(c->r[28]+0x00000008u,c->r[29]); // 8021B24C
  c->r[0]=0u+0x00000000u; // 8021B250
  c->r[3]=c->r[28]|c->r[28]; // 8021B254
  c->r[4]=c->r[29]|c->r[29]; // 8021B258
  W32(c->r[29]+0x00000008u,c->r[0]); // 8021B25C
  c->r[0]=R32(c->r[28]+0x00000004u); // 8021B260
  W32(c->r[28]+0x0000000Cu,c->r[0]); // 8021B264
  c->lr=0x8021B26Cu; f_8006306C(c); // 8021B268
  c->r[10]=c->r[31]|c->r[31]; // 8021B26C
  c->r[3]=c->r[29]|c->r[29]; // 8021B270
  {uint32_t ea=c->r[10]+0x00000030u; for(int i=28;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 8021B274
  c->r[10]=R32(c->r[1]+0x00000000u); // 8021B278
  c->r[0]=R32(c->r[10]+0x00000004u); // 8021B27C
  c->r[1]=c->r[10]|c->r[10]; // 8021B280
  c->lr=c->r[0]; // 8021B284
  return; // 8021B288
}

// fn_8021B28C
void f_8021B28C(Ctx* __restrict c) {
  trace_call(0x8021B28Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8021B28C
  c->r[0]=c->lr; // 8021B290
  W32(c->r[1]+0x00000014u,c->r[0]); // 8021B294
  c->lr=0x8021B29Cu; f_801FD098(c); // 8021B298
  c->r[0]=cntlz(c->r[3]); // 8021B29C
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 8021B2A0
  c->r[0]=R32(c->r[1]+0x00000014u); // 8021B2A4
  c->lr=c->r[0]; // 8021B2A8
  c->r[1]=c->r[1]+0x00000010u; // 8021B2AC
  return; // 8021B2B0
}

// fn_8021B2B4
void f_8021B2B4(Ctx* __restrict c) {
  trace_call(0x8021B2B4u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8021B2B4
  c->r[0]=c->lr; // 8021B2B8
  W32(c->r[1]+0x00000044u,c->r[0]); // 8021B2BC
  {uint32_t ea=c->r[1]+0x00000030u; for(int i=28;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 8021B2C0
  c->r[31]=c->r[1]|c->r[1]; // 8021B2C4
  c->r[28]=c->r[3]|c->r[3]; // 8021B2C8
  c->r[0]=R8(c->r[3]+0x000004C0u); // 8021B2CC
  cmps(c,0,(int32_t)c->r[0],0); // 8021B2D0
  if (crb(c,2)) { goto L_8021B3F0; } // 8021B2D4
  c->r[12]=R32(c->r[3]+0x0000001Cu); // 8021B2D8
  c->r[12]=R32(c->r[12]+0x00000110u); // 8021B2DC
  c->ctr=c->r[12]; // 8021B2E0
  if (true) { c->lr=0x8021B2E8u; dispatch(c,c->ctr); } // 8021B2E4
  cmps(c,0,(int32_t)c->r[3],0); // 8021B2E8
  if (crb(c,2)) { goto L_8021B3F0; } // 8021B2EC
  c->r[3]=c->r[28]|c->r[28]; // 8021B2F0
  c->r[4]=0u+0x00000002u; // 8021B2F4
  c->lr=0x8021B2FCu; f_8021AF60(c); // 8021B2F8
  cmps(c,0,(int32_t)c->r[3],0); // 8021B2FC
  if (!crb(c,2)) { goto L_8021B3F0; } // 8021B300
  c->r[3]=c->r[28]|c->r[28]; // 8021B304
  c->lr=0x8021B30Cu; f_80060974(c); // 8021B308
  c->r[12]=R32(c->r[28]+0x0000001Cu); // 8021B30C
  c->r[3]=c->r[28]|c->r[28]; // 8021B310
  c->r[29]=0u+0x00000001u; // 8021B314
  c->r[12]=R32(c->r[12]+0x00000100u); // 8021B318
  c->ctr=c->r[12]; // 8021B31C
  if (true) { c->lr=0x8021B324u; dispatch(c,c->ctr); } // 8021B320
  c->r[0]=cntlz(c->r[3]); // 8021B324
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; cr0(c,c->r[0]); // 8021B328
  if (crb(c,2)) { goto L_8021B354; } // 8021B32C
  c->r[3]=c->r[28]|c->r[28]; // 8021B330
  c->lr=0x8021B338u; f_8021B28C(c); // 8021B334
  cmps(c,0,(int32_t)c->r[3],0); // 8021B338
  if (crb(c,2)) { goto L_8021B354; } // 8021B33C
  c->r[3]=c->r[28]+0x000008F8u; // 8021B340
  c->r[29]=0u+0x00000003u; // 8021B344
  c->r[4]=0u+0x00000002u; // 8021B348
  c->r[5]=0u+0x00000001u; // 8021B34C
  c->lr=0x8021B354u; f_8005DCA0(c); // 8021B350
L_8021B354:;
  cmps(c,0,(int32_t)c->r[29],1); // 8021B354
  if (!crb(c,2)) { goto L_8021B370; } // 8021B358
  c->r[3]=c->r[28]|c->r[28]; // 8021B35C
  c->lr=0x8021B364u; f_8021D0F4(c); // 8021B360
  cmps(c,0,(int32_t)c->r[3],0); // 8021B364
  if (crb(c,2)) { goto L_8021B370; } // 8021B368
  c->r[29]=0u+0x00000002u; // 8021B36C
L_8021B370:;
  cmps(c,0,(int32_t)c->r[29],1); // 8021B370
  if (crb(c,2)) { goto L_8021B3F0; } // 8021B374
  c->r[3]=c->r[28]|c->r[28]; // 8021B378
  c->lr=0x8021B380u; f_8021D048(c); // 8021B37C
  W32(c->r[28]+0x000008F4u,c->r[29]); // 8021B380
  c->lr=0x8021B388u; f_80062E5C(c); // 8021B384
  c->r[4]=c->r[3]|c->r[3]; // 8021B388
  c->r[3]=c->r[28]|c->r[28]; // 8021B38C
  c->lr=0x8021B394u; f_80062F4C(c); // 8021B390
  c->r[0]=R8(c->r[28]+0x00000010u); // 8021B394
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 8021B398
  c->r[3]=c->r[28]+c->r[0]; // 8021B39C
  c->r[29]=R32(c->r[3]+0x00000014u); // 8021B3A0
  cmps(c,0,(int32_t)c->r[29],0); // 8021B3A4
  if (crb(c,2)) { goto L_8021B3D0; } // 8021B3A8
  c->r[30]=0u+0x00000000u; // 8021B3AC
  W32(c->r[31]+0x00000024u,c->r[1]); // 8021B3B0
  W8(c->r[31]+0x00000008u,c->r[30]); // 8021B3B4
  c->lr=0x8021B3BCu; f_80062E5C(c); // 8021B3B8
  W32(c->r[29]+0x00000000u,c->r[3]); // 8021B3BC
  c->r[0]=c->r[13]+0xFFFF80CCu; // 8021B3C0
  W32(c->r[29]+0x00000004u,c->r[0]); // 8021B3C4
  W32(c->r[29]+0x00000008u,c->r[30]); // 8021B3C8
  W32(c->r[29]+0x0000000Cu,c->r[30]); // 8021B3CC
L_8021B3D0:;
  W32(c->r[28]+0x00000008u,c->r[29]); // 8021B3D0
  c->r[0]=0u+0x00000000u; // 8021B3D4
  c->r[3]=c->r[28]|c->r[28]; // 8021B3D8
  c->r[4]=c->r[29]|c->r[29]; // 8021B3DC
  W32(c->r[29]+0x00000008u,c->r[0]); // 8021B3E0
  c->r[0]=R32(c->r[28]+0x00000004u); // 8021B3E4
  W32(c->r[28]+0x0000000Cu,c->r[0]); // 8021B3E8
  c->lr=0x8021B3F0u; f_8006306C(c); // 8021B3EC
L_8021B3F0:;
  c->r[10]=c->r[31]|c->r[31]; // 8021B3F0
  {uint32_t ea=c->r[10]+0x00000030u; for(int i=28;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 8021B3F4
  c->r[10]=R32(c->r[1]+0x00000000u); // 8021B3F8
  c->r[0]=R32(c->r[10]+0x00000004u); // 8021B3FC
  c->r[1]=c->r[10]|c->r[10]; // 8021B400
  c->lr=c->r[0]; // 8021B404
  return; // 8021B408
}

// fn_8021B40C
void f_8021B40C(Ctx* __restrict c) {
  trace_call(0x8021B40Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8021B40C
  c->r[0]=c->lr; // 8021B410
  W32(c->r[1]+0x00000014u,c->r[0]); // 8021B414
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8021B418
  W32(c->r[1]+0x00000008u,c->r[30]); // 8021B41C
  c->r[30]=c->r[3]|c->r[3]; // 8021B420
  c->r[4]=R32(c->r[3]+0x00000004u); // 8021B424
  cmps(c,0,(int32_t)c->r[4],0); // 8021B428
  if (crb(c,2)) { goto L_8021B438; } // 8021B42C
  c->r[0]=R32(c->r[4]+0x00000008u); // 8021B430
  goto L_8021B43C; // 8021B434
L_8021B438:;
  c->r[0]=0u+0x00000000u; // 8021B438
L_8021B43C:;
  cmps(c,0,(int32_t)c->r[0],0); // 8021B43C
  if (!crb(c,2)) { goto L_8021B4D8; } // 8021B440
  c->r[31]=0u+0x00010000u; // 8021B444
  c->r[3]=c->r[30]|c->r[30]; // 8021B448
  c->r[4]=c->r[31]+0x000005BDu; // 8021B44C
  c->r[5]=0u+0x00000001u; // 8021B450
  c->lr=0x8021B458u; f_80064744(c); // 8021B454
  c->r[3]=c->r[30]+0x0000066Cu; // 8021B458
  c->r[4]=c->r[31]+0x000005C2u; // 8021B45C
  c->r[5]=0u+0x00000000u; // 8021B460
  c->lr=0x8021B468u; f_8021F1C4(c); // 8021B464
  c->r[3]=c->r[30]+0x0000069Cu; // 8021B468
  c->r[4]=c->r[31]+0x000005C7u; // 8021B46C
  c->r[5]=0u+0x00000000u; // 8021B470
  c->lr=0x8021B478u; f_8021F1C4(c); // 8021B474
  c->r[3]=c->r[30]+0x000006CCu; // 8021B478
  c->r[4]=c->r[31]+0x000005CCu; // 8021B47C
  c->r[5]=0u+0x00000000u; // 8021B480
  c->lr=0x8021B488u; f_8021F1C4(c); // 8021B484
  c->r[3]=c->r[30]+0x000006FCu; // 8021B488
  c->r[4]=c->r[31]+0x000005D1u; // 8021B48C
  c->r[5]=0u+0x00000000u; // 8021B490
  c->lr=0x8021B498u; f_8021F1C4(c); // 8021B494
  c->r[3]=c->r[30]+0x0000072Cu; // 8021B498
  c->r[4]=c->r[31]+0x000005D6u; // 8021B49C
  c->r[5]=0u+0x00000000u; // 8021B4A0
  c->lr=0x8021B4A8u; f_8021F1C4(c); // 8021B4A4
  c->r[0]=R32(c->r[30]+0x00000778u); // 8021B4A8
  c->r[5]=0u+0x806A0000u; // 8021B4AC
  c->r[5]=c->r[5]+0xFFFF8DB0u; // 8021B4B0
  c->r[3]=c->r[30]+0x000005C4u; // 8021B4B4
  cmps(c,0,(int32_t)c->r[0],1); // 8021B4B8
  c->r[4]=c->r[5]+0x00000046u; // 8021B4BC
  if (!crb(c,2)) { goto L_8021B4C8; } // 8021B4C0
  c->r[4]=c->r[5]+0x00000034u; // 8021B4C4
L_8021B4C8:;
  {uint32_t ea=c->r[2]+0xFFFFDEF4u; c->f[1]=c->ps1[1]=RF32(ea);} // 8021B4C8
  {uint32_t ea=c->r[2]+0xFFFFDEF0u; c->f[2]=c->ps1[2]=RF32(ea);} // 8021B4CC
  {uint32_t ea=c->r[2]+0xFFFFDF20u; c->f[3]=c->ps1[3]=RF32(ea);} // 8021B4D0
  c->lr=0x8021B4D8u; f_800E24D0(c); // 8021B4D4
L_8021B4D8:;
  c->r[3]=R32(c->r[30]+0x00000004u); // 8021B4D8
  cmps(c,0,(int32_t)c->r[3],0); // 8021B4DC
  if (crb(c,2)) { goto L_8021B4EC; } // 8021B4E0
  c->r[0]=R32(c->r[3]+0x00000008u); // 8021B4E4
  goto L_8021B4F0; // 8021B4E8
L_8021B4EC:;
  c->r[0]=0u+0x00000000u; // 8021B4EC
L_8021B4F0:;
  cmps(c,0,(int32_t)c->r[0],1); // 8021B4F0
  if (!crb(c,2)) { goto L_8021B50C; } // 8021B4F4
  c->lr=0x8021B4FCu; f_8033FE4C(c); // 8021B4F8
  c->lr=0x8021B500u; f_8009BA1C(c); // 8021B4FC
  c->r[0]=R32(c->r[3]+0x00000150u); // 8021B500
  c->r[0]=c->r[0]|0x40000000u; // 8021B504
  W32(c->r[3]+0x00000150u,c->r[0]); // 8021B508
L_8021B50C:;
  c->r[3]=c->r[30]+0x00000354u; // 8021B50C
  c->lr=0x8021B514u; f_800667AC(c); // 8021B510
  cmps(c,0,(int32_t)c->r[3],0); // 8021B514
  if (crb(c,2)) { goto L_8021B530; } // 8021B518
  c->r[12]=R32(c->r[30]+0x0000001Cu); // 8021B51C
  c->r[3]=c->r[30]|c->r[30]; // 8021B520
  c->r[12]=R32(c->r[12]+0x000001B0u); // 8021B524
  c->ctr=c->r[12]; // 8021B528
  if (true) { c->lr=0x8021B530u; dispatch(c,c->ctr); } // 8021B52C
L_8021B530:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8021B530
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8021B534
  c->r[30]=R32(c->r[1]+0x00000008u); // 8021B538
  c->lr=c->r[0]; // 8021B53C
  c->r[1]=c->r[1]+0x00000010u; // 8021B540
  return; // 8021B544
}

// fn_8021B548
void f_8021B548(Ctx* __restrict c) {
  trace_call(0x8021B548u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8021B548
  c->r[0]=c->lr; // 8021B54C
  W32(c->r[1]+0x00000044u,c->r[0]); // 8021B550
  c->r[11]=c->r[1]+0x00000040u; // 8021B554
  c->lr=0x8021B55Cu; { W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8021B558
  c->r[31]=c->r[1]|c->r[1]; // 8021B55C
  c->r[0]=R32(c->r[3]+0x0000055Cu); // 8021B560
  c->r[28]=c->r[3]|c->r[3]; // 8021B564
  cmps(c,0,(int32_t)c->r[0],0); // 8021B568
  if (crb(c,2)) { goto L_8021B57C; } // 8021B56C
  cmps(c,0,(int32_t)c->r[0],16); // 8021B570
  if (crb(c,2)) { goto L_8021B67C; } // 8021B574
  goto L_8021B6F8; // 8021B578
L_8021B57C:;
  c->r[4]=0u+0x00000002u; // 8021B57C
  c->r[5]=0u+0x00000000u; // 8021B580
  c->r[3]=c->r[3]+0x0000075Cu; // 8021B584
  c->lr=0x8021B58Cu; f_80220378(c); // 8021B588
  c->r[4]=R32(c->r[3]+0x00000044u); // 8021B58C
  c->r[3]=c->r[28]+0x0000066Cu; // 8021B590
  {uint32_t ea=c->r[13]+0xFFFF910Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8021B594
  c->r[5]=0u+0x00000001u; // 8021B598
  c->lr=0x8021B5A0u; f_8021EEB0(c); // 8021B59C
  c->r[3]=c->r[28]+0x0000075Cu; // 8021B5A0
  c->r[4]=0u+0x00000002u; // 8021B5A4
  c->r[5]=0u+0x00000001u; // 8021B5A8
  c->lr=0x8021B5B0u; f_80220378(c); // 8021B5AC
  c->r[4]=R32(c->r[3]+0x00000044u); // 8021B5B0
  c->r[3]=c->r[28]+0x0000069Cu; // 8021B5B4
  {uint32_t ea=c->r[13]+0xFFFF910Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8021B5B8
  c->r[5]=0u+0x00000001u; // 8021B5BC
  c->lr=0x8021B5C4u; f_8021EEB0(c); // 8021B5C0
  c->r[3]=c->r[28]+0x0000075Cu; // 8021B5C4
  c->r[4]=0u+0x00000002u; // 8021B5C8
  c->r[5]=0u+0x00000002u; // 8021B5CC
  c->lr=0x8021B5D4u; f_80220378(c); // 8021B5D0
  c->r[4]=R32(c->r[3]+0x00000044u); // 8021B5D4
  c->r[3]=c->r[28]+0x000006CCu; // 8021B5D8
  {uint32_t ea=c->r[13]+0xFFFF910Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8021B5DC
  c->r[5]=0u+0x00000001u; // 8021B5E0
  c->lr=0x8021B5E8u; f_8021EEB0(c); // 8021B5E4
  c->r[3]=c->r[28]+0x0000075Cu; // 8021B5E8
  c->r[4]=0u+0x00000002u; // 8021B5EC
  c->r[5]=0u+0x00000003u; // 8021B5F0
  c->lr=0x8021B5F8u; f_80220378(c); // 8021B5F4
  c->r[4]=R32(c->r[3]+0x00000044u); // 8021B5F8
  c->r[3]=c->r[28]+0x000006FCu; // 8021B5FC
  {uint32_t ea=c->r[13]+0xFFFF910Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8021B600
  c->r[5]=0u+0x00000001u; // 8021B604
  c->lr=0x8021B60Cu; f_8021EEB0(c); // 8021B608
  {uint32_t ea=c->r[2]+0xFFFFDEF0u; c->f[1]=c->ps1[1]=RF32(ea);} // 8021B60C
  c->r[3]=c->r[28]+0x0000072Cu; // 8021B610
  c->lr=0x8021B618u; f_8021F228(c); // 8021B614
  c->r[4]=0u+0x00010000u; // 8021B618
  c->r[3]=c->r[28]|c->r[28]; // 8021B61C
  c->r[4]=c->r[4]+0x0000069Eu; // 8021B620
  c->r[5]=0u+0x00000001u; // 8021B624
  c->lr=0x8021B62Cu; f_80064744(c); // 8021B628
  c->r[0]=R32(c->r[28]+0x00000778u); // 8021B62C
  c->r[5]=0u+0x806A0000u; // 8021B630
  c->r[5]=c->r[5]+0xFFFF8DB0u; // 8021B634
  c->r[3]=c->r[28]+0x000005C4u; // 8021B638
  cmps(c,0,(int32_t)c->r[0],0); // 8021B63C
  c->r[4]=c->r[5]+0x00000065u; // 8021B640
  if (!crb(c,2)) { goto L_8021B64C; } // 8021B644
  c->r[4]=c->r[5]+0x00000058u; // 8021B648
L_8021B64C:;
  {uint32_t ea=c->r[2]+0xFFFFDEF4u; c->f[1]=c->ps1[1]=RF32(ea);} // 8021B64C
  {uint32_t ea=c->r[2]+0xFFFFDEF0u; c->f[2]=c->ps1[2]=RF32(ea);} // 8021B650
  {uint32_t ea=c->r[2]+0xFFFFDF20u; c->f[3]=c->ps1[3]=RF32(ea);} // 8021B654
  c->lr=0x8021B65Cu; f_800E24D0(c); // 8021B658
  c->r[0]=0u+0x00000000u; // 8021B65C
  W8(c->r[31]+0x0000000Cu,c->r[0]); // 8021B660
  c->r[3]=c->r[31]+0x0000000Cu; // 8021B664
  c->lr=0x8021B66Cu; f_800462D8(c); // 8021B668
  c->r[4]=0u+0x00000000u; // 8021B66C
  c->lr=0x8021B674u; f_800EA1A0(c); // 8021B670
  c->r[0]=0u+0x00000010u; // 8021B674
  W32(c->r[28]+0x0000055Cu,c->r[0]); // 8021B678
L_8021B67C:;
  c->r[3]=c->r[28]+0x000005C4u; // 8021B67C
  c->lr=0x8021B684u; f_800E2B1C(c); // 8021B680
  cmps(c,0,(int32_t)c->r[3],0); // 8021B684
  if (crb(c,2)) { goto L_8021B6F8; } // 8021B688
  c->lr=0x8021B690u; f_80062DCC(c); // 8021B68C
  c->r[4]=c->r[3]|c->r[3]; // 8021B690
  c->r[3]=c->r[28]|c->r[28]; // 8021B694
  c->lr=0x8021B69Cu; f_80062F4C(c); // 8021B698
  c->r[0]=R8(c->r[28]+0x00000010u); // 8021B69C
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 8021B6A0
  c->r[3]=c->r[28]+c->r[0]; // 8021B6A4
  c->r[29]=R32(c->r[3]+0x00000014u); // 8021B6A8
  cmps(c,0,(int32_t)c->r[29],0); // 8021B6AC
  if (crb(c,2)) { goto L_8021B6D8; } // 8021B6B0
  c->r[30]=0u+0x00000000u; // 8021B6B4
  W32(c->r[31]+0x00000024u,c->r[1]); // 8021B6B8
  W8(c->r[31]+0x00000008u,c->r[30]); // 8021B6BC
  c->lr=0x8021B6C4u; f_80062DCC(c); // 8021B6C0
  W32(c->r[29]+0x00000000u,c->r[3]); // 8021B6C4
  c->r[0]=c->r[13]+0xFFFF80C8u; // 8021B6C8
  W32(c->r[29]+0x00000004u,c->r[0]); // 8021B6CC
  W32(c->r[29]+0x00000008u,c->r[30]); // 8021B6D0
  W32(c->r[29]+0x0000000Cu,c->r[30]); // 8021B6D4
L_8021B6D8:;
  W32(c->r[28]+0x00000008u,c->r[29]); // 8021B6D8
  c->r[0]=0u+0x00000000u; // 8021B6DC
  c->r[3]=c->r[28]|c->r[28]; // 8021B6E0
  c->r[4]=c->r[29]|c->r[29]; // 8021B6E4
  W32(c->r[29]+0x00000008u,c->r[0]); // 8021B6E8
  c->r[0]=R32(c->r[28]+0x00000004u); // 8021B6EC
  W32(c->r[28]+0x0000000Cu,c->r[0]); // 8021B6F0
  c->lr=0x8021B6F8u; f_8006306C(c); // 8021B6F4
L_8021B6F8:;
  c->r[10]=c->r[31]|c->r[31]; // 8021B6F8
  c->r[11]=c->r[10]+0x00000040u; // 8021B6FC
  c->lr=0x8021B704u; { c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8021B700
  c->r[10]=R32(c->r[1]+0x00000000u); // 8021B704
  c->r[0]=R32(c->r[10]+0x00000004u); // 8021B708
  c->r[1]=c->r[10]|c->r[10]; // 8021B70C
  c->lr=c->r[0]; // 8021B710
  return; // 8021B714
}

// fn_8021B718
void f_8021B718(Ctx* __restrict c) {
  trace_call(0x8021B718u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8021B718
  c->r[0]=c->lr; // 8021B71C
  W32(c->r[1]+0x00000024u,c->r[0]); // 8021B720
  c->r[11]=c->r[1]+0x00000020u; // 8021B724
  c->lr=0x8021B72Cu; { W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8021B728
  c->r[4]=R32(c->r[3]+0x00000004u); // 8021B72C
  c->r[29]=c->r[3]|c->r[3]; // 8021B730
  cmps(c,0,(int32_t)c->r[4],0); // 8021B734
  if (crb(c,2)) { goto L_8021B744; } // 8021B738
  c->r[0]=R32(c->r[4]+0x00000008u); // 8021B73C
  goto L_8021B748; // 8021B740
L_8021B744:;
  c->r[0]=0u+0x00000000u; // 8021B744
L_8021B748:;
  cmps(c,0,(int32_t)c->r[0],0); // 8021B748
  if (!crb(c,2)) { goto L_8021B824; } // 8021B74C
  c->r[0]=0u+0x00000000u; // 8021B750
  W8(c->r[1]+0x00000008u,c->r[0]); // 8021B754
  c->r[3]=c->r[1]+0x00000008u; // 8021B758
  c->r[30]=c->r[1]+0x0000000Cu; // 8021B75C
  W8(c->r[1]+0x0000000Cu,c->r[0]); // 8021B760
  c->lr=0x8021B768u; f_8004DBC0(c); // 8021B764
  c->lr=0x8021B76Cu; f_80099108(c); // 8021B768
  c->r[31]=c->r[3]|c->r[3]; // 8021B76C
  c->r[3]=c->r[30]|c->r[30]; // 8021B770
  c->lr=0x8021B778u; f_8004DBC0(c); // 8021B774
  c->r[4]=c->r[31]|c->r[31]; // 8021B778
  c->lr=0x8021B780u; f_80099344(c); // 8021B77C
  c->r[0]=R8(c->r[13]+0xFFFFBBCBu); // 8021B780
  c->r[30]=c->r[3]|c->r[3]; // 8021B784
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 8021B788
  if (!crb(c,2)) { goto L_8021B7D0; } // 8021B78C
  c->r[31]=0u+0x80740000u; // 8021B790
  c->r[3]=c->r[31]+0xFFFFC448u; // 8021B794
  c->lr=0x8021B79Cu; f_800758AC(c); // 8021B798
  c->r[6]=0u+0x806D0000u; // 8021B79C
  c->r[4]=0u+0x80050000u; // 8021B7A0
  c->r[6]=c->r[6]+0xFFFFD470u; // 8021B7A4
  c->r[3]=c->r[31]+0xFFFFC448u; // 8021B7A8
  c->r[0]=c->r[6]+0x0000000Cu; // 8021B7AC
  c->r[5]=0u+0x80750000u; // 8021B7B0
  W32(c->r[31]+0xFFFFC448u,c->r[6]); // 8021B7B4
  c->r[4]=c->r[4]+0x00001BF4u; // 8021B7B8
  c->r[5]=c->r[5]+0x00005474u; // 8021B7BC
  W32(c->r[3]+0x000000A8u,c->r[0]); // 8021B7C0
  c->lr=0x8021B7C8u; f_803A92B8(c); // 8021B7C4
  c->r[0]=0u+0x00000001u; // 8021B7C8
  W8(c->r[13]+0xFFFFBBCBu,c->r[0]); // 8021B7CC
L_8021B7D0:;
  c->r[5]=0u+0x806A0000u; // 8021B7D0
  c->r[3]=0u+0x80740000u; // 8021B7D4
  c->r[5]=c->r[5]+0xFFFF8DB0u; // 8021B7D8
  c->r[4]=c->r[30]|c->r[30]; // 8021B7DC
  c->r[3]=c->r[3]+0xFFFFC448u; // 8021B7E0
  c->r[5]=c->r[5]+0x00000072u; // 8021B7E4
  c->lr=0x8021B7ECu; f_80075FE0(c); // 8021B7E8
  {uint32_t ea=c->r[2]+0xFFFFDEF0u; c->f[1]=c->ps1[1]=RF32(ea);} // 8021B7EC
  c->r[3]=c->r[29]+0x000005C4u; // 8021B7F0
  {uint32_t ea=c->r[2]+0xFFFFDF24u; c->f[2]=c->ps1[2]=RF32(ea);} // 8021B7F4
  c->r[4]=0u+0x00000000u; // 8021B7F8
  c->lr=0x8021B800u; f_800E2A2C(c); // 8021B7FC
  {uint32_t ea=c->r[2]+0xFFFFDEF4u; c->f[1]=c->ps1[1]=RF32(ea);} // 8021B800
  c->r[3]=c->r[29]+0x000005C4u; // 8021B804
  c->r[4]=0u+0x00000000u; // 8021B808
  c->lr=0x8021B810u; f_800E21E8(c); // 8021B80C
  c->r[3]=R32(c->r[29]+0x0000044Cu); // 8021B810
  c->r[4]=0u+0x00000016u; // 8021B814
  c->r[5]=0u+0x00000001u; // 8021B818
  c->r[3]=c->r[3]+0x000000C4u; // 8021B81C
  c->lr=0x8021B824u; f_8005DCA0(c); // 8021B820
L_8021B824:;
  c->r[11]=c->r[1]+0x00000020u; // 8021B824
  c->lr=0x8021B82Cu; { c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8021B828
  c->r[0]=R32(c->r[1]+0x00000024u); // 8021B82C
  c->lr=c->r[0]; // 8021B830
  c->r[1]=c->r[1]+0x00000020u; // 8021B834
  return; // 8021B838
}

// fn_8021B83C
void f_8021B83C(Ctx* __restrict c) {
  trace_call(0x8021B83Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8021B83C
  c->r[0]=c->lr; // 8021B840
  W32(c->r[1]+0x00000024u,c->r[0]); // 8021B844
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8021B848
  c->r[31]=c->r[3]|c->r[3]; // 8021B84C
  c->r[0]=R32(c->r[3]+0x0000055Cu); // 8021B850
  cmps(c,0,(int32_t)c->r[0],0); // 8021B854
  if (crb(c,2)) { goto L_8021B878; } // 8021B858
  cmps(c,0,(int32_t)c->r[0],256); // 8021B85C
  if (crb(c,2)) { goto L_8021B8B0; } // 8021B860
  cmps(c,0,(int32_t)c->r[0],257); // 8021B864
  if (crb(c,2)) { goto L_8021B8F4; } // 8021B868
  cmps(c,0,(int32_t)c->r[0],258); // 8021B86C
  if (crb(c,2)) { goto L_8021B934; } // 8021B870
  goto L_8021B958; // 8021B874
L_8021B878:;
  c->r[4]=0u+0x00010000u; // 8021B878
  c->r[5]=0u+0x00000000u; // 8021B87C
  c->r[4]=c->r[4]+0x000005B8u; // 8021B880
  c->lr=0x8021B888u; f_80064744(c); // 8021B884
  c->r[4]=0u+0x806A0000u; // 8021B888
  {uint32_t ea=c->r[2]+0xFFFFDEF4u; c->f[1]=c->ps1[1]=RF32(ea);} // 8021B88C
  c->r[4]=c->r[4]+0xFFFF8DB0u; // 8021B890
  {uint32_t ea=c->r[2]+0xFFFFDEF0u; c->f[2]=c->ps1[2]=RF32(ea);} // 8021B894
  {uint32_t ea=c->r[2]+0xFFFFDF20u; c->f[3]=c->ps1[3]=RF32(ea);} // 8021B898
  c->r[3]=c->r[31]+0x000005C4u; // 8021B89C
  c->r[4]=c->r[4]+0x00000080u; // 8021B8A0
  c->lr=0x8021B8A8u; f_800E24D0(c); // 8021B8A4
  c->r[0]=0u+0x00000100u; // 8021B8A8
  W32(c->r[31]+0x0000055Cu,c->r[0]); // 8021B8AC
L_8021B8B0:;
  c->r[3]=c->r[31]+0x000005C4u; // 8021B8B0
  c->lr=0x8021B8B8u; f_800E2A98(c); // 8021B8B4
  {uint32_t ea=c->r[2]+0xFFFFDF00u; c->f[0]=c->ps1[0]=RF32(ea);} // 8021B8B8
  fcmp(c,0,c->f[1],c->f[0]); // 8021B8BC
  setcrb(c,2,crb(c,1)|crb(c,2)); // 8021B8C0
  if (!crb(c,2)) { goto L_8021B958; } // 8021B8C4
  c->r[4]=0u+0x806A0000u; // 8021B8C8
  {uint32_t ea=c->r[2]+0xFFFFDEF4u; c->f[1]=c->ps1[1]=RF32(ea);} // 8021B8CC
  c->r[4]=c->r[4]+0xFFFF8DB0u; // 8021B8D0
  c->r[3]=c->r[31]+0x000005C4u; // 8021B8D4
  c->r[4]=c->r[4]+0x0000008Bu; // 8021B8D8
  c->r[5]=0u+0x00000000u; // 8021B8DC
  c->lr=0x8021B8E4u; f_800E277C(c); // 8021B8E0
  c->r[3]=R32(c->r[31]+0x0000055Cu); // 8021B8E4
  c->r[0]=c->r[3]+0x00000001u; // 8021B8E8
  W32(c->r[31]+0x0000055Cu,c->r[0]); // 8021B8EC
  goto L_8021B958; // 8021B8F0
L_8021B8F4:;
  c->r[3]=c->r[3]+0x000005C4u; // 8021B8F4
  c->lr=0x8021B8FCu; f_800E2A98(c); // 8021B8F8
  {uint32_t ea=c->r[2]+0xFFFFDF28u; c->f[0]=c->ps1[0]=RF32(ea);} // 8021B8FC
  fcmp(c,0,c->f[1],c->f[0]); // 8021B900
  setcrb(c,2,crb(c,1)|crb(c,2)); // 8021B904
  if (!crb(c,2)) { goto L_8021B958; } // 8021B908
  c->r[0]=0u+0x00000000u; // 8021B90C
  W8(c->r[1]+0x00000008u,c->r[0]); // 8021B910
  c->r[3]=c->r[1]+0x00000008u; // 8021B914
  c->lr=0x8021B91Cu; f_800462D8(c); // 8021B918
  c->r[4]=0u+0x00000001u; // 8021B91C
  c->lr=0x8021B924u; f_800EA1A0(c); // 8021B920
  c->r[3]=R32(c->r[31]+0x0000055Cu); // 8021B924
  c->r[0]=c->r[3]+0x00000001u; // 8021B928
  W32(c->r[31]+0x0000055Cu,c->r[0]); // 8021B92C
  goto L_8021B958; // 8021B930
L_8021B934:;
  c->r[3]=c->r[3]+0x000005C4u; // 8021B934
  c->lr=0x8021B93Cu; f_800E2B1C(c); // 8021B938
  cmps(c,0,(int32_t)c->r[3],0); // 8021B93C
  if (crb(c,2)) { goto L_8021B958; } // 8021B940
  c->r[12]=R32(c->r[31]+0x0000001Cu); // 8021B944
  c->r[3]=c->r[31]|c->r[31]; // 8021B948
  c->r[12]=R32(c->r[12]+0x000001B0u); // 8021B94C
  c->ctr=c->r[12]; // 8021B950
  if (true) { c->lr=0x8021B958u; dispatch(c,c->ctr); } // 8021B954
L_8021B958:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 8021B958
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8021B95C
  c->lr=c->r[0]; // 8021B960
  c->r[1]=c->r[1]+0x00000020u; // 8021B964
  return; // 8021B968
}

// fn_8021B96C
void f_8021B96C(Ctx* __restrict c) {
  trace_call(0x8021B96Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8021B96C
  c->r[0]=c->lr; // 8021B970
  W32(c->r[1]+0x00000044u,c->r[0]); // 8021B974
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[31]);} // 8021B978
  {uint32_t ea=c->r[1]+0x00000038u; psq_store(c,31,ea,0,0);} // 8021B97C
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[30]);} // 8021B980
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,30,ea,0,0);} // 8021B984
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8021B988
  W32(c->r[1]+0x00000018u,c->r[30]); // 8021B98C
  c->r[30]=c->r[3]|c->r[3]; // 8021B990
  c->r[4]=R32(c->r[3]+0x00000004u); // 8021B994
  cmps(c,0,(int32_t)c->r[4],0); // 8021B998
  if (crb(c,2)) { goto L_8021B9A8; } // 8021B99C
  c->r[0]=R32(c->r[4]+0x00000008u); // 8021B9A0
  goto L_8021B9AC; // 8021B9A4
L_8021B9A8:;
  c->r[0]=0u+0x00000000u; // 8021B9A8
L_8021B9AC:;
  cmps(c,0,(int32_t)c->r[0],0); // 8021B9AC
  if (!crb(c,2)) { goto L_8021BAA4; } // 8021B9B0
  c->r[31]=0u+0x00010000u; // 8021B9B4
  c->r[3]=c->r[30]|c->r[30]; // 8021B9B8
  c->r[4]=c->r[31]+0x000005B8u; // 8021B9BC
  c->r[5]=0u+0x00000000u; // 8021B9C0
  c->lr=0x8021B9C8u; f_80064744(c); // 8021B9C4
  c->r[3]=c->r[30]+0x0000066Cu; // 8021B9C8
  c->r[4]=c->r[31]+0x000005C2u; // 8021B9CC
  c->r[5]=0u+0x00000000u; // 8021B9D0
  c->lr=0x8021B9D8u; f_8021F1C4(c); // 8021B9D4
  c->r[3]=c->r[30]+0x0000069Cu; // 8021B9D8
  c->r[4]=c->r[31]+0x000005C7u; // 8021B9DC
  c->r[5]=0u+0x00000000u; // 8021B9E0
  c->lr=0x8021B9E8u; f_8021F1C4(c); // 8021B9E4
  c->r[3]=c->r[30]+0x000006CCu; // 8021B9E8
  c->r[4]=c->r[31]+0x000005CCu; // 8021B9EC
  c->r[5]=0u+0x00000000u; // 8021B9F0
  c->lr=0x8021B9F8u; f_8021F1C4(c); // 8021B9F4
  c->r[3]=c->r[30]+0x000006FCu; // 8021B9F8
  c->r[4]=c->r[31]+0x000005D1u; // 8021B9FC
  c->r[5]=0u+0x00000000u; // 8021BA00
  c->lr=0x8021BA08u; f_8021F1C4(c); // 8021BA04
  c->r[3]=c->r[30]+0x0000072Cu; // 8021BA08
  c->r[4]=c->r[31]+0x000005D6u; // 8021BA0C
  c->r[5]=0u+0x00000000u; // 8021BA10
  c->lr=0x8021BA18u; f_8021F1C4(c); // 8021BA14
  c->r[3]=R32(c->r[30]+0x00000434u); // 8021BA18
  c->r[4]=0u+0x00000002u; // 8021BA1C
  c->r[3]=c->r[3]+0x00000030u; // 8021BA20
  c->lr=0x8021BA28u; f_802D94E8(c); // 8021BA24
  c->r[3]=R32(c->r[30]+0x00000434u); // 8021BA28
  c->f[30]=c->f[1]; // 8021BA2C
  c->r[4]=0u+0x00000003u; // 8021BA30
  c->r[3]=c->r[3]+0x00000030u; // 8021BA34
  c->lr=0x8021BA3Cu; f_802D94E8(c); // 8021BA38
  c->f[31]=c->f[1]; // 8021BA3C
  c->lr=0x8021BA44u; f_803B220C(c); // 8021BA40
  c->r[3]=c->r[3]^0x80000000u; // 8021BA44
  c->r[0]=0u+0x43300000u; // 8021BA48
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 8021BA4C
  c->r[5]=0u+0x806A0000u; // 8021BA50
  {uint32_t ea=c->r[2]+0xFFFFDF10u; c->f[3]=RF64(ea);} // 8021BA54
  c->r[5]=c->r[5]+0xFFFF8DB0u; // 8021BA58
  W32(c->r[1]+0x00000008u,c->r[0]); // 8021BA5C
  c->f[0]=c->ps1[0]=S(c->f[31]-c->f[30]); // 8021BA60
  c->r[0]=R32(c->r[30]+0x00000778u); // 8021BA64
  c->r[3]=c->r[30]+0x000005C4u; // 8021BA68
  {uint32_t ea=c->r[1]+0x00000008u; c->f[2]=RF64(ea);} // 8021BA6C
  c->r[4]=c->r[5]+0x00000046u; // 8021BA70
  {uint32_t ea=c->r[2]+0xFFFFDF18u; c->f[1]=c->ps1[1]=RF32(ea);} // 8021BA74
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[3]); // 8021BA78
  cmps(c,0,(int32_t)c->r[0],1); // 8021BA7C
  c->f[1]=c->ps1[1]=S(c->f[2]/c->f[1]); // 8021BA80
  c->f[0]=c->ps1[0]=S(std::fma(c->f[0],c->f[1],c->f[30])); // 8021BA84
  {uint32_t ea=c->r[30]+0x00000560u; WF32(ea,c->f[0]);} // 8021BA88
  if (!crb(c,2)) { goto L_8021BA94; } // 8021BA8C
  c->r[4]=c->r[5]+0x00000034u; // 8021BA90
L_8021BA94:;
  {uint32_t ea=c->r[2]+0xFFFFDEF4u; c->f[1]=c->ps1[1]=RF32(ea);} // 8021BA94
  {uint32_t ea=c->r[2]+0xFFFFDEF0u; c->f[2]=c->ps1[2]=RF32(ea);} // 8021BA98
  {uint32_t ea=c->r[2]+0xFFFFDF20u; c->f[3]=c->ps1[3]=RF32(ea);} // 8021BA9C
  c->lr=0x8021BAA4u; f_800E24D0(c); // 8021BAA0
L_8021BAA4:;
  c->r[3]=R32(c->r[30]+0x00000004u); // 8021BAA4
  cmps(c,0,(int32_t)c->r[3],0); // 8021BAA8
  if (crb(c,2)) { goto L_8021BAB8; } // 8021BAAC
  c->r[0]=R32(c->r[3]+0x00000008u); // 8021BAB0
  goto L_8021BABC; // 8021BAB4
L_8021BAB8:;
  c->r[0]=0u+0x00000000u; // 8021BAB8
L_8021BABC:;
  cmps(c,0,(int32_t)c->r[0],1); // 8021BABC
  if (!crb(c,2)) { goto L_8021BAD8; } // 8021BAC0
  c->lr=0x8021BAC8u; f_8033FE4C(c); // 8021BAC4
  c->lr=0x8021BACCu; f_8009BA1C(c); // 8021BAC8
  c->r[0]=R32(c->r[3]+0x00000150u); // 8021BACC
  c->r[0]=c->r[0]|0x40000000u; // 8021BAD0
  W32(c->r[3]+0x00000150u,c->r[0]); // 8021BAD4
L_8021BAD8:;
  {uint32_t ea=c->r[30]+0x00000560u; c->f[0]=c->ps1[0]=RF32(ea);} // 8021BAD8
  {uint32_t ea=c->r[30]+0x00000558u; c->f[1]=c->ps1[1]=RF32(ea);} // 8021BADC
  fcmp(c,0,c->f[1],c->f[0]); // 8021BAE0
  setcrb(c,2,crb(c,1)|crb(c,2)); // 8021BAE4
  if (!crb(c,2)) { goto L_8021BB00; } // 8021BAE8
  c->r[12]=R32(c->r[30]+0x0000001Cu); // 8021BAEC
  c->r[3]=c->r[30]|c->r[30]; // 8021BAF0
  c->r[12]=R32(c->r[12]+0x000001B0u); // 8021BAF4
  c->ctr=c->r[12]; // 8021BAF8
  if (true) { c->lr=0x8021BB00u; dispatch(c,c->ctr); } // 8021BAFC
L_8021BB00:;
  c->r[0]=R32(c->r[1]+0x00000044u); // 8021BB00
  {uint32_t ea=c->r[1]+0x00000038u; psq_load(c,31,ea,0,0);} // 8021BB04
  {uint32_t ea=c->r[1]+0x00000030u; c->f[31]=RF64(ea);} // 8021BB08
  {uint32_t ea=c->r[1]+0x00000028u; psq_load(c,30,ea,0,0);} // 8021BB0C
  {uint32_t ea=c->r[1]+0x00000020u; c->f[30]=RF64(ea);} // 8021BB10
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8021BB14
  c->r[30]=R32(c->r[1]+0x00000018u); // 8021BB18
  c->lr=c->r[0]; // 8021BB1C
  c->r[1]=c->r[1]+0x00000040u; // 8021BB20
  return; // 8021BB24
}

// fn_8021BB28
void f_8021BB28(Ctx* __restrict c) {
  trace_call(0x8021BB28u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8021BB28
  c->r[0]=c->lr; // 8021BB2C
  W32(c->r[1]+0x00000024u,c->r[0]); // 8021BB30
  c->r[11]=c->r[1]+0x00000020u; // 8021BB34
  c->lr=0x8021BB3Cu; { W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8021BB38
  c->r[5]=R32(c->r[3]+0x0000055Cu); // 8021BB3C
  c->r[4]=0u+0x806A0000u; // 8021BB40
  c->r[0]=R32(c->r[3]+0x00000778u); // 8021BB44
  c->r[4]=c->r[4]+0xFFFF8CC0u; // 8021BB48
  cmps(c,0,(int32_t)c->r[5],0); // 8021BB4C
  c->r[29]=c->r[3]|c->r[3]; // 8021BB50
  c->r[0]=rotl(c->r[0],3)&0xFFFFFFF8u; // 8021BB54
  c->r[30]=c->r[4]+c->r[0]; // 8021BB58
  if (crb(c,2)) { goto L_8021BB78; } // 8021BB5C
  cmps(c,0,(int32_t)c->r[5],256); // 8021BB60
  if (crb(c,2)) { goto L_8021BBF8; } // 8021BB64
  c->r[0]=c->r[5]+0x00000000u; // 8021BB68
  cmpu(c,0,c->r[0],0x00009000u); // 8021BB6C
  if (crb(c,2)) { goto L_8021BC14; } // 8021BB70
  goto L_8021BC40; // 8021BB74
L_8021BB78:;
  c->r[31]=0u+0x00010000u; // 8021BB78
  c->r[5]=0u+0x00000000u; // 8021BB7C
  c->r[4]=c->r[31]+0x000005B8u; // 8021BB80
  c->lr=0x8021BB88u; f_80064744(c); // 8021BB84
  c->r[3]=c->r[29]+0x0000066Cu; // 8021BB88
  c->r[4]=c->r[31]+0x000005C2u; // 8021BB8C
  c->r[5]=0u+0x00000000u; // 8021BB90
  c->lr=0x8021BB98u; f_8021F1C4(c); // 8021BB94
  c->r[3]=c->r[29]+0x0000069Cu; // 8021BB98
  c->r[4]=c->r[31]+0x000005C7u; // 8021BB9C
  c->r[5]=0u+0x00000000u; // 8021BBA0
  c->lr=0x8021BBA8u; f_8021F1C4(c); // 8021BBA4
  c->r[3]=c->r[29]+0x000006CCu; // 8021BBA8
  c->r[4]=c->r[31]+0x000005CCu; // 8021BBAC
  c->r[5]=0u+0x00000000u; // 8021BBB0
  c->lr=0x8021BBB8u; f_8021F1C4(c); // 8021BBB4
  c->r[3]=c->r[29]+0x000006FCu; // 8021BBB8
  c->r[4]=c->r[31]+0x000005D1u; // 8021BBBC
  c->r[5]=0u+0x00000000u; // 8021BBC0
  c->lr=0x8021BBC8u; f_8021F1C4(c); // 8021BBC4
  c->r[3]=c->r[29]+0x0000072Cu; // 8021BBC8
  c->r[4]=c->r[31]+0x000005D6u; // 8021BBCC
  c->r[5]=0u+0x00000000u; // 8021BBD0
  c->lr=0x8021BBD8u; f_8021F1C4(c); // 8021BBD4
  c->r[4]=R32(c->r[30]+0x00000000u); // 8021BBD8
  c->r[3]=c->r[29]+0x000005C4u; // 8021BBDC
  {uint32_t ea=c->r[2]+0xFFFFDEF4u; c->f[1]=c->ps1[1]=RF32(ea);} // 8021BBE0
  {uint32_t ea=c->r[2]+0xFFFFDEF0u; c->f[2]=c->ps1[2]=RF32(ea);} // 8021BBE4
  {uint32_t ea=c->r[2]+0xFFFFDF20u; c->f[3]=c->ps1[3]=RF32(ea);} // 8021BBE8
  c->lr=0x8021BBF0u; f_800E24D0(c); // 8021BBEC
  c->r[0]=0u+0x00000100u; // 8021BBF0
  W32(c->r[29]+0x0000055Cu,c->r[0]); // 8021BBF4
L_8021BBF8:;
  c->r[3]=c->r[29]+0x000005C4u; // 8021BBF8
  c->lr=0x8021BC00u; f_800E2B1C(c); // 8021BBFC
  cmps(c,0,(int32_t)c->r[3],0); // 8021BC00
  if (crb(c,2)) { goto L_8021BC40; } // 8021BC04
  c->r[3]=0u+0x00010000u; // 8021BC08
  c->r[0]=c->r[3]+0xFFFF9000u; // 8021BC0C
  W32(c->r[29]+0x0000055Cu,c->r[0]); // 8021BC10
L_8021BC14:;
  c->r[3]=c->r[29]+0x00000784u; // 8021BC14
  c->lr=0x8021BC1Cu; f_800A7DDC(c); // 8021BC18
  c->r[3]=R32(c->r[30]+0x00000004u); // 8021BC1C
  c->r[0]=0u+0x00000003u; // 8021BC20
  W32(c->r[29]+0x00000778u,c->r[3]); // 8021BC24
  c->r[3]=c->r[29]|c->r[29]; // 8021BC28
  W32(c->r[29]+0x0000077Cu,c->r[0]); // 8021BC2C
  c->r[12]=R32(c->r[29]+0x0000001Cu); // 8021BC30
  c->r[12]=R32(c->r[12]+0x000001B0u); // 8021BC34
  c->ctr=c->r[12]; // 8021BC38
  if (true) { c->lr=0x8021BC40u; dispatch(c,c->ctr); } // 8021BC3C
L_8021BC40:;
  c->r[11]=c->r[1]+0x00000020u; // 8021BC40
  c->lr=0x8021BC48u; { c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8021BC44
  c->r[0]=R32(c->r[1]+0x00000024u); // 8021BC48
  c->lr=c->r[0]; // 8021BC4C
  c->r[1]=c->r[1]+0x00000020u; // 8021BC50
  return; // 8021BC54
}

// fn_8021BC58
void f_8021BC58(Ctx* __restrict c) {
  trace_call(0x8021BC58u);
  c->r[0]=R32(c->r[3]+0x000008F0u); // 8021BC58
  cmps(c,0,(int32_t)c->r[0],4); // 8021BC5C
  if (crb(c,0)) { goto L_8021BC6C; } // 8021BC60
  cmps(c,0,(int32_t)c->r[0],5); // 8021BC64
  if (!crb(c,1)) { goto L_8021BCA8; } // 8021BC68
L_8021BC6C:;
  cmps(c,0,(int32_t)c->r[0],0); // 8021BC6C
  if (crb(c,2)) { goto L_8021BC98; } // 8021BC70
  cmps(c,0,(int32_t)c->r[0],1); // 8021BC74
  if (crb(c,2)) { goto L_8021BC9C; } // 8021BC78
  cmps(c,0,(int32_t)c->r[0],3); // 8021BC7C
  if (crb(c,2)) { goto L_8021BCA0; } // 8021BC80
  cmps(c,0,(int32_t)c->r[0],2); // 8021BC84
  if (crb(c,2)) { goto L_8021BCA4; } // 8021BC88
  cmps(c,0,(int32_t)c->r[0],6); // 8021BC8C
  if (crb(c,2)) { goto L_8021BCAC; } // 8021BC90
  return; // 8021BC94
L_8021BC98:;
  f_8021BCB4(c); return; // 8021BC98
L_8021BC9C:;
  f_8021BEEC(c); return; // 8021BC9C
L_8021BCA0:;
  f_8021C224(c); return; // 8021BCA0
L_8021BCA4:;
  f_8021C3E4(c); return; // 8021BCA4
L_8021BCA8:;
  f_8021C618(c); return; // 8021BCA8
L_8021BCAC:;
  f_8021CB64(c); return; // 8021BCAC
  return; // 8021BCB0
}

// fn_8021BCB4
void f_8021BCB4(Ctx* __restrict c) {
  trace_call(0x8021BCB4u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8021BCB4
  c->r[0]=c->lr; // 8021BCB8
  W32(c->r[1]+0x00000024u,c->r[0]); // 8021BCBC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8021BCC0
  W32(c->r[1]+0x00000018u,c->r[30]); // 8021BCC4
  c->r[30]=c->r[3]|c->r[3]; // 8021BCC8
  c->r[0]=R32(c->r[3]+0x0000055Cu); // 8021BCCC
  cmps(c,0,(int32_t)c->r[0],0); // 8021BCD0
  if (crb(c,2)) { goto L_8021BCFC; } // 8021BCD4
  cmps(c,0,(int32_t)c->r[0],1); // 8021BCD8
  if (crb(c,2)) { goto L_8021BDD8; } // 8021BCDC
  cmps(c,0,(int32_t)c->r[0],2); // 8021BCE0
  if (crb(c,2)) { goto L_8021BE0C; } // 8021BCE4
  cmps(c,0,(int32_t)c->r[0],4096); // 8021BCE8
  if (crb(c,2)) { goto L_8021BE34; } // 8021BCEC
  cmps(c,0,(int32_t)c->r[0],4097); // 8021BCF0
  if (crb(c,2)) { goto L_8021BE84; } // 8021BCF4
  goto L_8021BEAC; // 8021BCF8
L_8021BCFC:;
  c->r[31]=0u+0x00010000u; // 8021BCFC
  c->r[5]=0u+0x00000000u; // 8021BD00
  c->r[4]=c->r[31]+0x000005B8u; // 8021BD04
  c->lr=0x8021BD0Cu; f_80064744(c); // 8021BD08
  c->r[3]=c->r[30]+0x0000066Cu; // 8021BD0C
  c->r[4]=c->r[31]+0x000005C2u; // 8021BD10
  c->r[5]=0u+0x00000000u; // 8021BD14
  c->lr=0x8021BD1Cu; f_8021F1C4(c); // 8021BD18
  c->r[3]=c->r[30]+0x0000069Cu; // 8021BD1C
  c->r[4]=c->r[31]+0x000005C7u; // 8021BD20
  c->r[5]=0u+0x00000000u; // 8021BD24
  c->lr=0x8021BD2Cu; f_8021F1C4(c); // 8021BD28
  c->r[3]=c->r[30]+0x000006CCu; // 8021BD2C
  c->r[4]=c->r[31]+0x000005CCu; // 8021BD30
  c->r[5]=0u+0x00000000u; // 8021BD34
  c->lr=0x8021BD3Cu; f_8021F1C4(c); // 8021BD38
  {uint32_t ea=c->r[2]+0xFFFFDEF8u; c->f[1]=c->ps1[1]=RF32(ea);} // 8021BD3C
  c->r[3]=c->r[30]+0x000006FCu; // 8021BD40
  c->r[4]=c->r[31]+0x0000061Cu; // 8021BD44
  c->r[5]=0u+0x00000001u; // 8021BD48
  c->lr=0x8021BD50u; f_8021F138(c); // 8021BD4C
  c->r[3]=c->r[30]+0x0000072Cu; // 8021BD50
  c->r[4]=c->r[31]+0x000005D6u; // 8021BD54
  c->r[5]=0u+0x00000000u; // 8021BD58
  c->lr=0x8021BD60u; f_8021F1C4(c); // 8021BD5C
  c->r[4]=0u+0x806A0000u; // 8021BD60
  {uint32_t ea=c->r[2]+0xFFFFDEF4u; c->f[1]=c->ps1[1]=RF32(ea);} // 8021BD64
  c->r[4]=c->r[4]+0xFFFF8DB0u; // 8021BD68
  {uint32_t ea=c->r[2]+0xFFFFDEF0u; c->f[2]=c->ps1[2]=RF32(ea);} // 8021BD6C
  {uint32_t ea=c->r[2]+0xFFFFDF20u; c->f[3]=c->ps1[3]=RF32(ea);} // 8021BD70
  c->r[3]=c->r[30]+0x000005C4u; // 8021BD74
  c->r[4]=c->r[4]+0x000000A2u; // 8021BD78
  c->lr=0x8021BD80u; f_800E24D0(c); // 8021BD7C
  c->r[3]=c->r[1]+0x00000008u; // 8021BD80
  c->r[4]=0u+0x00000000u; // 8021BD84
  c->r[5]=0u+0x00000008u; // 8021BD88
  c->lr=0x8021BD90u; f_800043EC(c); // 8021BD8C
  c->r[3]=R32(c->r[1]+0x00000008u); // 8021BD90
  c->r[4]=0u+0x00000004u; // 8021BD94
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 8021BD98
  W32(c->r[1]+0x00000010u,c->r[3]); // 8021BD9C
  W32(c->r[1]+0x00000014u,c->r[0]); // 8021BDA0
  c->r[3]=R32(c->r[30]+0x00000434u); // 8021BDA4
  c->r[3]=c->r[3]+0x00000030u; // 8021BDA8
  c->lr=0x8021BDB0u; f_802D94E8(c); // 8021BDAC
  c->f[4]=c->f[1]; // 8021BDB0
  {uint32_t ea=c->r[2]+0xFFFFDF2Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8021BDB4
  {uint32_t ea=c->r[2]+0xFFFFDF30u; c->f[2]=c->ps1[2]=RF32(ea);} // 8021BDB8
  c->r[3]=c->r[30]+0x0000088Cu; // 8021BDBC
  {uint32_t ea=c->r[2]+0xFFFFDF34u; c->f[3]=c->ps1[3]=RF32(ea);} // 8021BDC0
  c->r[4]=c->r[1]+0x00000010u; // 8021BDC4
  c->lr=0x8021BDCCu; f_800A7EEC(c); // 8021BDC8
  c->r[3]=R32(c->r[30]+0x0000055Cu); // 8021BDCC
  c->r[0]=c->r[3]+0x00000001u; // 8021BDD0
  W32(c->r[30]+0x0000055Cu,c->r[0]); // 8021BDD4
L_8021BDD8:;
  {uint32_t ea=c->r[2]+0xFFFFDF38u; c->f[1]=c->ps1[1]=RF32(ea);} // 8021BDD8
  c->r[3]=c->r[30]+0x000005C4u; // 8021BDDC
  c->lr=0x8021BDE4u; f_800E2B50(c); // 8021BDE0
  cmps(c,0,(int32_t)c->r[3],0); // 8021BDE4
  if (crb(c,2)) { goto L_8021BEAC; } // 8021BDE8
  c->r[3]=c->r[30]|c->r[30]; // 8021BDEC
  c->r[4]=0u+0x00000001u; // 8021BDF0
  c->r[5]=0u+0x00000001u; // 8021BDF4
  c->lr=0x8021BDFCu; f_80062748(c); // 8021BDF8
  c->r[3]=R32(c->r[30]+0x0000055Cu); // 8021BDFC
  c->r[0]=c->r[3]+0x00000001u; // 8021BE00
  W32(c->r[30]+0x0000055Cu,c->r[0]); // 8021BE04
  goto L_8021BEAC; // 8021BE08
L_8021BE0C:;
  c->r[3]=c->r[3]+0x000005C4u; // 8021BE0C
  c->lr=0x8021BE14u; f_800E2B1C(c); // 8021BE10
  cmps(c,0,(int32_t)c->r[3],0); // 8021BE14
  if (crb(c,2)) { goto L_8021BEAC; } // 8021BE18
  c->r[12]=R32(c->r[30]+0x0000001Cu); // 8021BE1C
  c->r[3]=c->r[30]|c->r[30]; // 8021BE20
  c->r[12]=R32(c->r[12]+0x000001B0u); // 8021BE24
  c->ctr=c->r[12]; // 8021BE28
  if (true) { c->lr=0x8021BE30u; dispatch(c,c->ctr); } // 8021BE2C
  goto L_8021BED4; // 8021BE30
L_8021BE34:;
  c->r[3]=c->r[30]+0x0000088Cu; // 8021BE34
  c->lr=0x8021BE3Cu; f_800A7EA8(c); // 8021BE38
  c->r[4]=0u+0x00010000u; // 8021BE3C
  {uint32_t ea=c->r[2]+0xFFFFDEF8u; c->f[1]=c->ps1[1]=RF32(ea);} // 8021BE40
  c->r[3]=c->r[30]+0x000006FCu; // 8021BE44
  c->r[5]=0u+0x00000001u; // 8021BE48
  c->r[4]=c->r[4]+0x00000621u; // 8021BE4C
  c->lr=0x8021BE54u; f_8021F138(c); // 8021BE50
  c->r[4]=0u+0x806A0000u; // 8021BE54
  {uint32_t ea=c->r[2]+0xFFFFDEF4u; c->f[1]=c->ps1[1]=RF32(ea);} // 8021BE58
  c->r[4]=c->r[4]+0xFFFF8DB0u; // 8021BE5C
  {uint32_t ea=c->r[2]+0xFFFFDEF0u; c->f[2]=c->ps1[2]=RF32(ea);} // 8021BE60
  {uint32_t ea=c->r[2]+0xFFFFDF20u; c->f[3]=c->ps1[3]=RF32(ea);} // 8021BE64
  c->r[3]=c->r[30]+0x000005C4u; // 8021BE68
  c->r[4]=c->r[4]+0x000000B4u; // 8021BE6C
  c->lr=0x8021BE74u; f_800E24D0(c); // 8021BE70
  c->r[3]=R32(c->r[30]+0x0000055Cu); // 8021BE74
  c->r[0]=c->r[3]+0x00000001u; // 8021BE78
  W32(c->r[30]+0x0000055Cu,c->r[0]); // 8021BE7C
  goto L_8021BEAC; // 8021BE80
L_8021BE84:;
  c->r[3]=c->r[3]+0x000005C4u; // 8021BE84
  c->lr=0x8021BE8Cu; f_800E2B1C(c); // 8021BE88
  cmps(c,0,(int32_t)c->r[3],0); // 8021BE8C
  if (crb(c,2)) { goto L_8021BEAC; } // 8021BE90
  c->r[12]=R32(c->r[30]+0x0000001Cu); // 8021BE94
  c->r[3]=c->r[30]|c->r[30]; // 8021BE98
  c->r[12]=R32(c->r[12]+0x000001B0u); // 8021BE9C
  c->ctr=c->r[12]; // 8021BEA0
  if (true) { c->lr=0x8021BEA8u; dispatch(c,c->ctr); } // 8021BEA4
  goto L_8021BED4; // 8021BEA8
L_8021BEAC:;
  c->r[3]=c->r[30]|c->r[30]; // 8021BEAC
  c->lr=0x8021BEB4u; f_8021CFF0(c); // 8021BEB0
  c->r[3]=c->r[30]+0x0000088Cu; // 8021BEB4
  c->lr=0x8021BEBCu; f_800A804C(c); // 8021BEB8
  c->r[0]=R8(c->r[30]+0x000008A0u); // 8021BEBC
  cmps(c,0,(int32_t)c->r[0],0); // 8021BEC0
  if (crb(c,2)) { goto L_8021BED4; } // 8021BEC4
  c->r[0]=0u+0x00001000u; // 8021BEC8
  W32(c->r[30]+0x0000055Cu,c->r[0]); // 8021BECC
  IRQCHK(c); goto L_8021BE34; // 8021BED0
L_8021BED4:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 8021BED4
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8021BED8
  c->r[30]=R32(c->r[1]+0x00000018u); // 8021BEDC
  c->lr=c->r[0]; // 8021BEE0
  c->r[1]=c->r[1]+0x00000020u; // 8021BEE4
  return; // 8021BEE8
}

// fn_8021BEEC
void f_8021BEEC(Ctx* __restrict c) {
  trace_call(0x8021BEECu);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8021BEEC
  c->r[0]=c->lr; // 8021BEF0
  W32(c->r[1]+0x00000034u,c->r[0]); // 8021BEF4
  c->r[11]=c->r[1]+0x00000030u; // 8021BEF8
  c->lr=0x8021BF00u; { W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8021BEFC
  c->r[0]=R32(c->r[3]+0x0000055Cu); // 8021BF00
  c->r[30]=c->r[3]|c->r[3]; // 8021BF04
  c->r[29]=0u+0x00000000u; // 8021BF08
  c->r[28]=0u+0x00000000u; // 8021BF0C
  cmps(c,0,(int32_t)c->r[0],512); // 8021BF10
  c->r[31]=0u+0x00000000u; // 8021BF14
  if (crb(c,2)) { goto L_8021C0C4; } // 8021BF18
  if (!crb(c,0)) { goto L_8021BF48; } // 8021BF1C
  cmps(c,0,(int32_t)c->r[0],256); // 8021BF20
  if (crb(c,2)) { goto L_8021C00C; } // 8021BF24
  if (!crb(c,0)) { goto L_8021BF38; } // 8021BF28
  cmps(c,0,(int32_t)c->r[0],0); // 8021BF2C
  if (crb(c,2)) { goto L_8021BF64; } // 8021BF30
  goto L_8021C1A0; // 8021BF34
L_8021BF38:;
  cmps(c,0,(int32_t)c->r[0],258); // 8021BF38
  if (crb(c,2)) { goto L_8021C0A4; } // 8021BF3C
  if (!crb(c,0)) { goto L_8021C1A0; } // 8021BF40
  goto L_8021C06C; // 8021BF44
L_8021BF48:;
  cmps(c,0,(int32_t)c->r[0],4096); // 8021BF48
  if (crb(c,2)) { goto L_8021C178; } // 8021BF4C
  if (!crb(c,0)) { goto L_8021C1A0; } // 8021BF50
  cmps(c,0,(int32_t)c->r[0],514); // 8021BF54
  if (crb(c,2)) { goto L_8021C158; } // 8021BF58
  if (!crb(c,0)) { goto L_8021C1A0; } // 8021BF5C
  goto L_8021C124; // 8021BF60
L_8021BF64:;
  c->r[31]=0u+0x00010000u; // 8021BF64
  c->r[5]=0u+0x00000000u; // 8021BF68
  c->r[4]=c->r[31]+0x000005B8u; // 8021BF6C
  c->lr=0x8021BF74u; f_80064744(c); // 8021BF70
  {uint32_t ea=c->r[2]+0xFFFFDEF8u; c->f[1]=c->ps1[1]=RF32(ea);} // 8021BF74
  c->r[3]=c->r[30]+0x0000066Cu; // 8021BF78
  c->r[4]=c->r[31]+0x0000063Au; // 8021BF7C
  c->r[5]=0u+0x00000001u; // 8021BF80
  c->lr=0x8021BF88u; f_8021F138(c); // 8021BF84
  c->r[3]=c->r[30]+0x0000069Cu; // 8021BF88
  c->r[4]=c->r[31]+0x000005C7u; // 8021BF8C
  c->r[5]=0u+0x00000000u; // 8021BF90
  c->lr=0x8021BF98u; f_8021F1C4(c); // 8021BF94
  c->r[3]=c->r[30]+0x000006CCu; // 8021BF98
  c->r[4]=c->r[31]+0x000005CCu; // 8021BF9C
  c->r[5]=0u+0x00000000u; // 8021BFA0
  c->lr=0x8021BFA8u; f_8021F1C4(c); // 8021BFA4
  c->r[29]=c->r[30]+0x000006FCu; // 8021BFA8
  {uint32_t ea=c->r[2]+0xFFFFDEF8u; c->f[1]=c->ps1[1]=RF32(ea);} // 8021BFAC
  c->r[3]=c->r[29]|c->r[29]; // 8021BFB0
  c->r[4]=c->r[31]+0x00000630u; // 8021BFB4
  c->r[5]=0u+0x00000001u; // 8021BFB8
  c->lr=0x8021BFC0u; f_8021F138(c); // 8021BFBC
  {uint32_t ea=c->r[2]+0xFFFFDEF8u; c->f[1]=c->ps1[1]=RF32(ea);} // 8021BFC0
  c->r[3]=c->r[29]|c->r[29]; // 8021BFC4
  c->r[4]=c->r[31]+0x000005D1u; // 8021BFC8
  c->r[5]=0u+0x00000001u; // 8021BFCC
  c->lr=0x8021BFD4u; f_8021F2C4(c); // 8021BFD0
  c->r[3]=c->r[30]+0x0000072Cu; // 8021BFD4
  c->r[4]=c->r[31]+0x000005D6u; // 8021BFD8
  c->r[5]=0u+0x00000000u; // 8021BFDC
  c->lr=0x8021BFE4u; f_8021F1C4(c); // 8021BFE0
  c->r[4]=0u+0x806A0000u; // 8021BFE4
  {uint32_t ea=c->r[2]+0xFFFFDEF4u; c->f[1]=c->ps1[1]=RF32(ea);} // 8021BFE8
  c->r[4]=c->r[4]+0xFFFF8DB0u; // 8021BFEC
  {uint32_t ea=c->r[2]+0xFFFFDEF0u; c->f[2]=c->ps1[2]=RF32(ea);} // 8021BFF0
  {uint32_t ea=c->r[2]+0xFFFFDF20u; c->f[3]=c->ps1[3]=RF32(ea);} // 8021BFF4
  c->r[3]=c->r[30]+0x000005C4u; // 8021BFF8
  c->r[4]=c->r[4]+0x000000C6u; // 8021BFFC
  c->lr=0x8021C004u; f_800E24D0(c); // 8021C000
  c->r[0]=0u+0x00000100u; // 8021C004
  W32(c->r[30]+0x0000055Cu,c->r[0]); // 8021C008
L_8021C00C:;
  c->r[0]=0u+0x00000000u; // 8021C00C
  W32(c->r[30]+0x00000560u,c->r[0]); // 8021C010
  c->r[3]=c->r[1]+0x00000010u; // 8021C014
  c->r[4]=0u+0x00000000u; // 8021C018
  c->r[5]=0u+0x00000008u; // 8021C01C
  c->lr=0x8021C024u; f_800043EC(c); // 8021C020
  c->r[3]=R32(c->r[1]+0x00000010u); // 8021C024
  c->r[4]=0u+0x00000004u; // 8021C028
  c->r[0]=R32(c->r[1]+0x00000014u); // 8021C02C
  W32(c->r[1]+0x00000018u,c->r[3]); // 8021C030
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 8021C034
  c->r[3]=R32(c->r[30]+0x00000434u); // 8021C038
  c->r[3]=c->r[3]+0x00000030u; // 8021C03C
  c->lr=0x8021C044u; f_802D94E8(c); // 8021C040
  c->f[4]=c->f[1]; // 8021C044
  {uint32_t ea=c->r[2]+0xFFFFDF2Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8021C048
  {uint32_t ea=c->r[2]+0xFFFFDF30u; c->f[2]=c->ps1[2]=RF32(ea);} // 8021C04C
  c->r[3]=c->r[30]+0x0000088Cu; // 8021C050
  {uint32_t ea=c->r[2]+0xFFFFDF34u; c->f[3]=c->ps1[3]=RF32(ea);} // 8021C054
  c->r[4]=c->r[1]+0x00000018u; // 8021C058
  c->lr=0x8021C060u; f_800A7EEC(c); // 8021C05C
  c->r[3]=R32(c->r[30]+0x0000055Cu); // 8021C060
  c->r[0]=c->r[3]+0x00000001u; // 8021C064
  W32(c->r[30]+0x0000055Cu,c->r[0]); // 8021C068
L_8021C06C:;
  c->r[4]=0u+0x806A0000u; // 8021C06C
  {uint32_t ea=c->r[2]+0xFFFFDF38u; c->f[1]=c->ps1[1]=RF32(ea);} // 8021C070
  c->r[4]=c->r[4]+0xFFFF8DB0u; // 8021C074
  c->r[3]=c->r[30]+0x000005C4u; // 8021C078
  c->r[28]=c->r[4]+0x000000D8u; // 8021C07C
  c->r[29]=0u+0x00000003u; // 8021C080
  c->r[31]=c->r[4]+0x000000F1u; // 8021C084
  c->lr=0x8021C08Cu; f_800E2B50(c); // 8021C088
  cmps(c,0,(int32_t)c->r[3],0); // 8021C08C
  if (crb(c,2)) { goto L_8021C1A0; } // 8021C090
  c->r[3]=R32(c->r[30]+0x0000055Cu); // 8021C094
  c->r[0]=c->r[3]+0x00000001u; // 8021C098
  W32(c->r[30]+0x0000055Cu,c->r[0]); // 8021C09C
  goto L_8021C1A0; // 8021C0A0
L_8021C0A4:;
  c->r[0]=R32(c->r[3]+0x00000560u); // 8021C0A4
  cmps(c,0,(int32_t)c->r[0],0); // 8021C0A8
  if (!crb(c,2)) { goto L_8021C0BC; } // 8021C0AC
  c->r[4]=0u+0x00000001u; // 8021C0B0
  c->r[5]=0u+0x00000001u; // 8021C0B4
  c->lr=0x8021C0BCu; f_80062748(c); // 8021C0B8
L_8021C0BC:;
  c->r[0]=0u+0x00000200u; // 8021C0BC
  W32(c->r[30]+0x0000055Cu,c->r[0]); // 8021C0C0
L_8021C0C4:;
  c->r[0]=0u+0x00000000u; // 8021C0C4
  W32(c->r[30]+0x00000560u,c->r[0]); // 8021C0C8
  c->r[3]=c->r[1]+0x00000008u; // 8021C0CC
  c->r[4]=0u+0x00000000u; // 8021C0D0
  c->r[5]=0u+0x00000008u; // 8021C0D4
  c->lr=0x8021C0DCu; f_800043EC(c); // 8021C0D8
  c->r[3]=R32(c->r[1]+0x00000008u); // 8021C0DC
  c->r[4]=0u+0x00000004u; // 8021C0E0
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 8021C0E4
  W32(c->r[1]+0x00000018u,c->r[3]); // 8021C0E8
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 8021C0EC
  c->r[3]=R32(c->r[30]+0x00000434u); // 8021C0F0
  c->r[3]=c->r[3]+0x00000030u; // 8021C0F4
  c->lr=0x8021C0FCu; f_802D94E8(c); // 8021C0F8
  c->f[4]=c->f[1]; // 8021C0FC
  {uint32_t ea=c->r[2]+0xFFFFDF3Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8021C100
  {uint32_t ea=c->r[2]+0xFFFFDF40u; c->f[2]=c->ps1[2]=RF32(ea);} // 8021C104
  c->r[3]=c->r[30]+0x0000088Cu; // 8021C108
  {uint32_t ea=c->r[2]+0xFFFFDF44u; c->f[3]=c->ps1[3]=RF32(ea);} // 8021C10C
  c->r[4]=c->r[1]+0x00000018u; // 8021C110
  c->lr=0x8021C118u; f_800A7EEC(c); // 8021C114
  c->r[3]=R32(c->r[30]+0x0000055Cu); // 8021C118
  c->r[0]=c->r[3]+0x00000001u; // 8021C11C
  W32(c->r[30]+0x0000055Cu,c->r[0]); // 8021C120
L_8021C124:;
  c->r[4]=0u+0x806A0000u; // 8021C124
  {uint32_t ea=c->r[2]+0xFFFFDF48u; c->f[1]=c->ps1[1]=RF32(ea);} // 8021C128
  c->r[4]=c->r[4]+0xFFFF8DB0u; // 8021C12C
  c->r[3]=c->r[30]+0x000005C4u; // 8021C130
  c->r[28]=c->r[4]+0x00000100u; // 8021C134
  c->r[29]=0u+0x00000000u; // 8021C138
  c->lr=0x8021C140u; f_800E2B50(c); // 8021C13C
  cmps(c,0,(int32_t)c->r[3],0); // 8021C140
  if (crb(c,2)) { goto L_8021C1A0; } // 8021C144
  c->r[3]=R32(c->r[30]+0x0000055Cu); // 8021C148
  c->r[0]=c->r[3]+0x00000001u; // 8021C14C
  W32(c->r[30]+0x0000055Cu,c->r[0]); // 8021C150
  goto L_8021C1A0; // 8021C154
L_8021C158:;
  c->r[0]=R32(c->r[3]+0x00000560u); // 8021C158
  cmps(c,0,(int32_t)c->r[0],0); // 8021C15C
  if (!crb(c,2)) { goto L_8021C170; } // 8021C160
  c->r[4]=0u+0x00000001u; // 8021C164
  c->r[5]=0u+0x00000001u; // 8021C168
  c->lr=0x8021C170u; f_80062748(c); // 8021C16C
L_8021C170:;
  c->r[0]=0u+0x00001000u; // 8021C170
  W32(c->r[30]+0x0000055Cu,c->r[0]); // 8021C174
L_8021C178:;
  c->r[3]=c->r[30]+0x000005C4u; // 8021C178
  c->lr=0x8021C180u; f_800E2B1C(c); // 8021C17C
  cmps(c,0,(int32_t)c->r[3],0); // 8021C180
  if (crb(c,2)) { goto L_8021C1A0; } // 8021C184
  c->r[12]=R32(c->r[30]+0x0000001Cu); // 8021C188
  c->r[3]=c->r[30]|c->r[30]; // 8021C18C
  c->r[12]=R32(c->r[12]+0x000001B0u); // 8021C190
  c->ctr=c->r[12]; // 8021C194
  if (true) { c->lr=0x8021C19Cu; dispatch(c,c->ctr); } // 8021C198
  goto L_8021C20C; // 8021C19C
L_8021C1A0:;
  c->r[3]=c->r[30]|c->r[30]; // 8021C1A0
  c->lr=0x8021C1A8u; f_8021CFF0(c); // 8021C1A4
  c->r[3]=c->r[30]+0x0000088Cu; // 8021C1A8
  c->lr=0x8021C1B0u; f_800A804C(c); // 8021C1AC
  c->r[0]=R8(c->r[30]+0x000008A0u); // 8021C1B0
  cmps(c,0,(int32_t)c->r[0],0); // 8021C1B4
  if (crb(c,2)) { goto L_8021C20C; } // 8021C1B8
  c->r[0]=R32(c->r[30]+0x00000560u); // 8021C1BC
  cmps(c,0,(int32_t)c->r[0],0); // 8021C1C0
  if (!crb(c,2)) { goto L_8021C20C; } // 8021C1C4
  c->r[0]=(uint32_t)((int32_t)c->r[29]*(int32_t)48); // 8021C1C8
  c->r[3]=0u+0x00000001u; // 8021C1CC
  W32(c->r[30]+0x00000560u,c->r[3]); // 8021C1D0
  c->r[4]=c->r[28]|c->r[28]; // 8021C1D4
  c->r[5]=0u+0x00000001u; // 8021C1D8
  c->r[3]=c->r[30]+c->r[0]; // 8021C1DC
  c->r[29]=c->r[3]+0x0000066Cu; // 8021C1E0
  {uint32_t ea=c->r[13]+0xFFFF910Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8021C1E4
  c->r[3]=c->r[29]|c->r[29]; // 8021C1E8
  c->lr=0x8021C1F0u; f_8021F0B4(c); // 8021C1EC
  cmps(c,0,(int32_t)c->r[31],0); // 8021C1F0
  if (crb(c,2)) { goto L_8021C20C; } // 8021C1F4
  {uint32_t ea=c->r[2]+0xFFFFDFE0u; c->f[1]=c->ps1[1]=RF32(ea);} // 8021C1F8
  c->r[3]=c->r[29]|c->r[29]; // 8021C1FC
  c->r[4]=c->r[31]|c->r[31]; // 8021C200
  c->r[5]=0u+0x00000001u; // 8021C204
  c->lr=0x8021C20Cu; f_8021F258(c); // 8021C208
L_8021C20C:;
  c->r[11]=c->r[1]+0x00000030u; // 8021C20C
  c->lr=0x8021C214u; { c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8021C210
  c->r[0]=R32(c->r[1]+0x00000034u); // 8021C214
  c->lr=c->r[0]; // 8021C218
  c->r[1]=c->r[1]+0x00000030u; // 8021C21C
  return; // 8021C220
}

// fn_8021C224
void f_8021C224(Ctx* __restrict c) {
  trace_call(0x8021C224u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8021C224
  c->r[0]=c->lr; // 8021C228
  W32(c->r[1]+0x00000014u,c->r[0]); // 8021C22C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8021C230
  W32(c->r[1]+0x00000008u,c->r[30]); // 8021C234
  c->r[30]=c->r[3]|c->r[3]; // 8021C238
  c->r[4]=R32(c->r[3]+0x0000055Cu); // 8021C23C
  cmps(c,0,(int32_t)c->r[4],0); // 8021C240
  if (crb(c,2)) { goto L_8021C268; } // 8021C244
  cmps(c,0,(int32_t)c->r[4],1); // 8021C248
  if (crb(c,2)) { goto L_8021C30C; } // 8021C24C
  cmps(c,0,(int32_t)c->r[4],4096); // 8021C250
  if (crb(c,2)) { goto L_8021C364; } // 8021C254
  c->r[0]=c->r[4]+0x00000000u; // 8021C258
  cmpu(c,0,c->r[0],0x00008000u); // 8021C25C
  if (crb(c,2)) { goto L_8021C394; } // 8021C260
  goto L_8021C3BC; // 8021C264
L_8021C268:;
  c->r[31]=0u+0x00010000u; // 8021C268
  c->r[5]=0u+0x00000000u; // 8021C26C
  c->r[4]=c->r[31]+0x000005B8u; // 8021C270
  c->lr=0x8021C278u; f_80064744(c); // 8021C274
  c->r[3]=c->r[30]+0x0000066Cu; // 8021C278
  c->r[4]=c->r[31]+0x000005C2u; // 8021C27C
  c->r[5]=0u+0x00000000u; // 8021C280
  c->lr=0x8021C288u; f_8021F1C4(c); // 8021C284
  c->r[3]=c->r[30]+0x0000069Cu; // 8021C288
  c->r[4]=c->r[31]+0x000005C7u; // 8021C28C
  c->r[5]=0u+0x00000000u; // 8021C290
  c->lr=0x8021C298u; f_8021F1C4(c); // 8021C294
  c->r[3]=c->r[30]+0x000006CCu; // 8021C298
  c->r[4]=c->r[31]+0x000005CCu; // 8021C29C
  c->r[5]=0u+0x00000000u; // 8021C2A0
  c->lr=0x8021C2A8u; f_8021F1C4(c); // 8021C2A4
  {uint32_t ea=c->r[2]+0xFFFFDEF8u; c->f[1]=c->ps1[1]=RF32(ea);} // 8021C2A8
  c->r[3]=c->r[30]+0x000006FCu; // 8021C2AC
  c->r[4]=c->r[31]+0x00000644u; // 8021C2B0
  c->r[5]=0u+0x00000001u; // 8021C2B4
  c->lr=0x8021C2BCu; f_8021F138(c); // 8021C2B8
  c->r[3]=c->r[30]+0x0000072Cu; // 8021C2BC
  c->r[4]=c->r[31]+0x000005D6u; // 8021C2C0
  c->r[5]=0u+0x00000000u; // 8021C2C4
  c->lr=0x8021C2CCu; f_8021F1C4(c); // 8021C2C8
  c->r[4]=0u+0x806A0000u; // 8021C2CC
  {uint32_t ea=c->r[2]+0xFFFFDEF4u; c->f[1]=c->ps1[1]=RF32(ea);} // 8021C2D0
  c->r[4]=c->r[4]+0xFFFF8DB0u; // 8021C2D4
  {uint32_t ea=c->r[2]+0xFFFFDEF0u; c->f[2]=c->ps1[2]=RF32(ea);} // 8021C2D8
  {uint32_t ea=c->r[2]+0xFFFFDF20u; c->f[3]=c->ps1[3]=RF32(ea);} // 8021C2DC
  c->r[3]=c->r[30]+0x000005C4u; // 8021C2E0
  c->r[4]=c->r[4]+0x00000119u; // 8021C2E4
  c->lr=0x8021C2ECu; f_800E24D0(c); // 8021C2E8
  {uint32_t ea=c->r[2]+0xFFFFDF2Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8021C2EC
  c->r[3]=c->r[30]+0x000008B4u; // 8021C2F0
  {uint32_t ea=c->r[2]+0xFFFFDF30u; c->f[2]=c->ps1[2]=RF32(ea);} // 8021C2F4
  {uint32_t ea=c->r[2]+0xFFFFDF34u; c->f[3]=c->ps1[3]=RF32(ea);} // 8021C2F8
  c->lr=0x8021C300u; f_800A80F8(c); // 8021C2FC
  c->r[3]=R32(c->r[30]+0x0000055Cu); // 8021C300
  c->r[0]=c->r[3]+0x00000001u; // 8021C304
  W32(c->r[30]+0x0000055Cu,c->r[0]); // 8021C308
L_8021C30C:;
  c->r[3]=c->r[30]+0x000008B4u; // 8021C30C
  c->lr=0x8021C314u; f_800A8324(c); // 8021C310
  cmps(c,0,(int32_t)c->r[3],0); // 8021C314
  if (crb(c,2)) { goto L_8021C34C; } // 8021C318
  c->r[4]=0u+0x806A0000u; // 8021C31C
  {uint32_t ea=c->r[2]+0xFFFFDEF4u; c->f[1]=c->ps1[1]=RF32(ea);} // 8021C320
  c->r[4]=c->r[4]+0xFFFF8DB0u; // 8021C324
  {uint32_t ea=c->r[2]+0xFFFFDEF0u; c->f[2]=c->ps1[2]=RF32(ea);} // 8021C328
  {uint32_t ea=c->r[2]+0xFFFFDF20u; c->f[3]=c->ps1[3]=RF32(ea);} // 8021C32C
  c->r[3]=c->r[30]+0x000005C4u; // 8021C330
  c->r[4]=c->r[4]+0x0000012Bu; // 8021C334
  c->lr=0x8021C33Cu; f_800E24D0(c); // 8021C338
  c->r[3]=0u+0x00010000u; // 8021C33C
  c->r[0]=c->r[3]+0xFFFF8000u; // 8021C340
  W32(c->r[30]+0x0000055Cu,c->r[0]); // 8021C344
  goto L_8021C394; // 8021C348
L_8021C34C:;
  c->r[3]=c->r[30]+0x000008B4u; // 8021C34C
  c->lr=0x8021C354u; f_800A832C(c); // 8021C350
  cmps(c,0,(int32_t)c->r[3],0); // 8021C354
  if (crb(c,2)) { goto L_8021C3BC; } // 8021C358
  c->r[0]=0u+0x00001000u; // 8021C35C
  W32(c->r[30]+0x0000055Cu,c->r[0]); // 8021C360
L_8021C364:;
  {uint32_t ea=c->r[2]+0xFFFFDF4Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8021C364
  c->r[3]=c->r[30]+0x000005C4u; // 8021C368
  c->lr=0x8021C370u; f_800E2B50(c); // 8021C36C
  cmps(c,0,(int32_t)c->r[3],0); // 8021C370
  if (crb(c,2)) { goto L_8021C3BC; } // 8021C374
  c->r[3]=c->r[30]|c->r[30]; // 8021C378
  c->r[4]=0u+0x00000004u; // 8021C37C
  c->r[5]=0u+0x00000001u; // 8021C380
  c->lr=0x8021C388u; f_80062748(c); // 8021C384
  c->r[3]=0u+0x00010000u; // 8021C388
  c->r[0]=c->r[3]+0xFFFF8000u; // 8021C38C
  W32(c->r[30]+0x0000055Cu,c->r[0]); // 8021C390
L_8021C394:;
  c->r[3]=c->r[30]+0x000005C4u; // 8021C394
  c->lr=0x8021C39Cu; f_800E2B1C(c); // 8021C398
  cmps(c,0,(int32_t)c->r[3],0); // 8021C39C
  if (crb(c,2)) { goto L_8021C3BC; } // 8021C3A0
  c->r[12]=R32(c->r[30]+0x0000001Cu); // 8021C3A4
  c->r[3]=c->r[30]|c->r[30]; // 8021C3A8
  c->r[12]=R32(c->r[12]+0x000001B0u); // 8021C3AC
  c->ctr=c->r[12]; // 8021C3B0
  if (true) { c->lr=0x8021C3B8u; dispatch(c,c->ctr); } // 8021C3B4
  goto L_8021C3CC; // 8021C3B8
L_8021C3BC:;
  c->r[3]=c->r[30]|c->r[30]; // 8021C3BC
  c->lr=0x8021C3C4u; f_8021D01C(c); // 8021C3C0
  c->r[3]=c->r[30]+0x000008B4u; // 8021C3C4
  c->lr=0x8021C3CCu; f_800A8160(c); // 8021C3C8
L_8021C3CC:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8021C3CC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8021C3D0
  c->r[30]=R32(c->r[1]+0x00000008u); // 8021C3D4
  c->lr=c->r[0]; // 8021C3D8
  c->r[1]=c->r[1]+0x00000010u; // 8021C3DC
  return; // 8021C3E0
}

// fn_8021C3E4
void f_8021C3E4(Ctx* __restrict c) {
  trace_call(0x8021C3E4u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8021C3E4
  c->r[0]=c->lr; // 8021C3E8
  W32(c->r[1]+0x00000034u,c->r[0]); // 8021C3EC
  c->r[11]=c->r[1]+0x00000030u; // 8021C3F0
  c->lr=0x8021C3F8u; { W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8021C3F4
  c->r[0]=R32(c->r[3]+0x0000055Cu); // 8021C3F8
  c->r[29]=c->r[3]|c->r[3]; // 8021C3FC
  cmps(c,0,(int32_t)c->r[0],0); // 8021C400
  if (crb(c,2)) { goto L_8021C42C; } // 8021C404
  cmps(c,0,(int32_t)c->r[0],1); // 8021C408
  if (crb(c,2)) { goto L_8021C508; } // 8021C40C
  cmps(c,0,(int32_t)c->r[0],2); // 8021C410
  if (crb(c,2)) { goto L_8021C53C; } // 8021C414
  cmps(c,0,(int32_t)c->r[0],4096); // 8021C418
  if (crb(c,2)) { goto L_8021C564; } // 8021C41C
  cmps(c,0,(int32_t)c->r[0],4097); // 8021C420
  if (crb(c,2)) { goto L_8021C5B0; } // 8021C424
  goto L_8021C5D8; // 8021C428
L_8021C42C:;
  c->r[30]=0u+0x00010000u; // 8021C42C
  c->r[5]=0u+0x00000000u; // 8021C430
  c->r[4]=c->r[30]+0x000005B8u; // 8021C434
  c->lr=0x8021C43Cu; f_80064744(c); // 8021C438
  c->r[3]=c->r[29]+0x0000066Cu; // 8021C43C
  c->r[4]=c->r[30]+0x000005C2u; // 8021C440
  c->r[5]=0u+0x00000000u; // 8021C444
  c->lr=0x8021C44Cu; f_8021F1C4(c); // 8021C448
  c->r[3]=c->r[29]+0x0000069Cu; // 8021C44C
  c->r[4]=c->r[30]+0x000005C7u; // 8021C450
  c->r[5]=0u+0x00000000u; // 8021C454
  c->lr=0x8021C45Cu; f_8021F1C4(c); // 8021C458
  c->r[31]=0u+0x806A0000u; // 8021C45C
  {uint32_t ea=c->r[2]+0xFFFFDFE0u; c->f[1]=c->ps1[1]=RF32(ea);} // 8021C460
  c->r[31]=c->r[31]+0xFFFF8DB0u; // 8021C464
  c->r[3]=c->r[29]+0x000006CCu; // 8021C468
  c->r[4]=c->r[31]+0x0000013Du; // 8021C46C
  c->r[5]=0u+0x00000001u; // 8021C470
  c->lr=0x8021C478u; f_8021F0B4(c); // 8021C474
  c->r[3]=c->r[29]+0x000006FCu; // 8021C478
  c->r[4]=c->r[30]+0x000005D1u; // 8021C47C
  c->r[5]=0u+0x00000000u; // 8021C480
  c->lr=0x8021C488u; f_8021F1C4(c); // 8021C484
  c->r[3]=c->r[29]+0x0000072Cu; // 8021C488
  c->r[4]=c->r[30]+0x000005D6u; // 8021C48C
  c->r[5]=0u+0x00000000u; // 8021C490
  c->lr=0x8021C498u; f_8021F1C4(c); // 8021C494
  {uint32_t ea=c->r[2]+0xFFFFDEF4u; c->f[1]=c->ps1[1]=RF32(ea);} // 8021C498
  c->r[3]=c->r[29]+0x000005C4u; // 8021C49C
  {uint32_t ea=c->r[2]+0xFFFFDEF0u; c->f[2]=c->ps1[2]=RF32(ea);} // 8021C4A0
  c->r[4]=c->r[31]+0x00000151u; // 8021C4A4
  {uint32_t ea=c->r[2]+0xFFFFDF20u; c->f[3]=c->ps1[3]=RF32(ea);} // 8021C4A8
  c->lr=0x8021C4B0u; f_800E24D0(c); // 8021C4AC
  c->r[3]=c->r[1]+0x00000008u; // 8021C4B0
  c->r[4]=0u+0x00000000u; // 8021C4B4
  c->r[5]=0u+0x00000008u; // 8021C4B8
  c->lr=0x8021C4C0u; f_800043EC(c); // 8021C4BC
  c->r[3]=R32(c->r[1]+0x00000008u); // 8021C4C0
  c->r[4]=0u+0x00000005u; // 8021C4C4
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 8021C4C8
  W32(c->r[1]+0x00000010u,c->r[3]); // 8021C4CC
  W32(c->r[1]+0x00000014u,c->r[0]); // 8021C4D0
  c->r[3]=R32(c->r[29]+0x00000434u); // 8021C4D4
  c->r[3]=c->r[3]+0x00000030u; // 8021C4D8
  c->lr=0x8021C4E0u; f_802D94E8(c); // 8021C4DC
  c->f[4]=c->f[1]; // 8021C4E0
  {uint32_t ea=c->r[2]+0xFFFFDF50u; c->f[1]=c->ps1[1]=RF32(ea);} // 8021C4E4
  {uint32_t ea=c->r[2]+0xFFFFDF54u; c->f[2]=c->ps1[2]=RF32(ea);} // 8021C4E8
  c->r[3]=c->r[29]+0x0000088Cu; // 8021C4EC
  {uint32_t ea=c->r[2]+0xFFFFDF00u; c->f[3]=c->ps1[3]=RF32(ea);} // 8021C4F0
  c->r[4]=c->r[1]+0x00000010u; // 8021C4F4
  c->lr=0x8021C4FCu; f_800A7EEC(c); // 8021C4F8
  c->r[3]=R32(c->r[29]+0x0000055Cu); // 8021C4FC
  c->r[0]=c->r[3]+0x00000001u; // 8021C500
  W32(c->r[29]+0x0000055Cu,c->r[0]); // 8021C504
L_8021C508:;
  {uint32_t ea=c->r[2]+0xFFFFDF58u; c->f[1]=c->ps1[1]=RF32(ea);} // 8021C508
  c->r[3]=c->r[29]+0x000005C4u; // 8021C50C
  c->lr=0x8021C514u; f_800E2B50(c); // 8021C510
  cmps(c,0,(int32_t)c->r[3],0); // 8021C514
  if (crb(c,2)) { goto L_8021C5D8; } // 8021C518
  c->r[3]=c->r[29]|c->r[29]; // 8021C51C
  c->r[4]=0u+0x00000003u; // 8021C520
  c->r[5]=0u+0x00000001u; // 8021C524
  c->lr=0x8021C52Cu; f_80062748(c); // 8021C528
  c->r[3]=R32(c->r[29]+0x0000055Cu); // 8021C52C
  c->r[0]=c->r[3]+0x00000001u; // 8021C530
  W32(c->r[29]+0x0000055Cu,c->r[0]); // 8021C534
  goto L_8021C5D8; // 8021C538
L_8021C53C:;
  c->r[3]=c->r[3]+0x000005C4u; // 8021C53C
  c->lr=0x8021C544u; f_800E2B1C(c); // 8021C540
  cmps(c,0,(int32_t)c->r[3],0); // 8021C544
  if (crb(c,2)) { goto L_8021C5D8; } // 8021C548
  c->r[12]=R32(c->r[29]+0x0000001Cu); // 8021C54C
  c->r[3]=c->r[29]|c->r[29]; // 8021C550
  c->r[12]=R32(c->r[12]+0x000001B0u); // 8021C554
  c->ctr=c->r[12]; // 8021C558
  if (true) { c->lr=0x8021C560u; dispatch(c,c->ctr); } // 8021C55C
  goto L_8021C600; // 8021C560
L_8021C564:;
  c->r[3]=c->r[29]+0x0000088Cu; // 8021C564
  c->lr=0x8021C56Cu; f_800A7EA8(c); // 8021C568
  c->r[31]=0u+0x806A0000u; // 8021C56C
  {uint32_t ea=c->r[13]+0xFFFF910Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8021C570
  c->r[31]=c->r[31]+0xFFFF8DB0u; // 8021C574
  c->r[3]=c->r[29]+0x000006CCu; // 8021C578
  c->r[4]=c->r[31]+0x00000163u; // 8021C57C
  c->r[5]=0u+0x00000001u; // 8021C580
  c->lr=0x8021C588u; f_8021F0B4(c); // 8021C584
  {uint32_t ea=c->r[2]+0xFFFFDEF4u; c->f[1]=c->ps1[1]=RF32(ea);} // 8021C588
  c->r[3]=c->r[29]+0x000005C4u; // 8021C58C
  {uint32_t ea=c->r[2]+0xFFFFDEF0u; c->f[2]=c->ps1[2]=RF32(ea);} // 8021C590
  c->r[4]=c->r[31]+0x0000017Au; // 8021C594
  {uint32_t ea=c->r[2]+0xFFFFDF20u; c->f[3]=c->ps1[3]=RF32(ea);} // 8021C598
  c->lr=0x8021C5A0u; f_800E24D0(c); // 8021C59C
  c->r[3]=R32(c->r[29]+0x0000055Cu); // 8021C5A0
  c->r[0]=c->r[3]+0x00000001u; // 8021C5A4
  W32(c->r[29]+0x0000055Cu,c->r[0]); // 8021C5A8
  goto L_8021C5D8; // 8021C5AC
L_8021C5B0:;
  c->r[3]=c->r[3]+0x000005C4u; // 8021C5B0
  c->lr=0x8021C5B8u; f_800E2B1C(c); // 8021C5B4
  cmps(c,0,(int32_t)c->r[3],0); // 8021C5B8
  if (crb(c,2)) { goto L_8021C5D8; } // 8021C5BC
  c->r[12]=R32(c->r[29]+0x0000001Cu); // 8021C5C0
  c->r[3]=c->r[29]|c->r[29]; // 8021C5C4
  c->r[12]=R32(c->r[12]+0x000001B0u); // 8021C5C8
  c->ctr=c->r[12]; // 8021C5CC
  if (true) { c->lr=0x8021C5D4u; dispatch(c,c->ctr); } // 8021C5D0
  goto L_8021C600; // 8021C5D4
L_8021C5D8:;
  c->r[3]=c->r[29]|c->r[29]; // 8021C5D8
  c->lr=0x8021C5E0u; f_8021CFF0(c); // 8021C5DC
  c->r[3]=c->r[29]+0x0000088Cu; // 8021C5E0
  c->lr=0x8021C5E8u; f_800A804C(c); // 8021C5E4
  c->r[0]=R8(c->r[29]+0x000008A0u); // 8021C5E8
  cmps(c,0,(int32_t)c->r[0],0); // 8021C5EC
  if (crb(c,2)) { goto L_8021C600; } // 8021C5F0
  c->r[0]=0u+0x00001000u; // 8021C5F4
  W32(c->r[29]+0x0000055Cu,c->r[0]); // 8021C5F8
  IRQCHK(c); goto L_8021C564; // 8021C5FC
L_8021C600:;
  c->r[11]=c->r[1]+0x00000030u; // 8021C600
  c->lr=0x8021C608u; { c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8021C604
  c->r[0]=R32(c->r[1]+0x00000034u); // 8021C608
  c->lr=c->r[0]; // 8021C60C
  c->r[1]=c->r[1]+0x00000030u; // 8021C610
  return; // 8021C614
}

// fn_8021C618
void f_8021C618(Ctx* __restrict c) {
  trace_call(0x8021C618u);
  {uint32_t ea=c->r[1]+0xFFFFFF90u; W32(ea,c->r[1]); c->r[1]=ea;} // 8021C618
  c->r[0]=c->lr; // 8021C61C
  W32(c->r[1]+0x00000074u,c->r[0]); // 8021C620
  c->r[11]=c->r[1]+0x00000070u; // 8021C624
  c->lr=0x8021C62Cu; { W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8021C628
  c->r[5]=R32(c->r[3]+0x0000055Cu); // 8021C62C
  c->r[30]=c->r[3]|c->r[3]; // 8021C630
  c->r[31]=0u+0x00000000u; // 8021C634
  cmps(c,0,(int32_t)c->r[5],512); // 8021C638
  if (crb(c,2)) { goto L_8021C8C0; } // 8021C63C
  if (!crb(c,0)) { goto L_8021C68C; } // 8021C640
  cmps(c,0,(int32_t)c->r[5],257); // 8021C644
  if (crb(c,2)) { goto L_8021C828; } // 8021C648
  if (!crb(c,0)) { goto L_8021C674; } // 8021C64C
  cmps(c,0,(int32_t)c->r[5],1); // 8021C650
  if (crb(c,2)) { goto L_8021C7E4; } // 8021C654
  if (!crb(c,0)) { goto L_8021C668; } // 8021C658
  cmps(c,0,(int32_t)c->r[5],0); // 8021C65C
  if (!crb(c,0)) { goto L_8021C6DC; } // 8021C660
  goto L_8021CA6C; // 8021C664
L_8021C668:;
  cmps(c,0,(int32_t)c->r[5],256); // 8021C668
  if (!crb(c,0)) { goto L_8021C804; } // 8021C66C
  goto L_8021CA6C; // 8021C670
L_8021C674:;
  cmps(c,0,(int32_t)c->r[5],384); // 8021C674
  if (crb(c,2)) { goto L_8021C8A8; } // 8021C678
  if (!crb(c,0)) { goto L_8021CA6C; } // 8021C67C
  cmps(c,0,(int32_t)c->r[5],336); // 8021C680
  if (crb(c,2)) { goto L_8021C87C; } // 8021C684
  goto L_8021CA6C; // 8021C688
L_8021C68C:;
  cmps(c,0,(int32_t)c->r[5],4096); // 8021C68C
  if (crb(c,2)) { goto L_8021C998; } // 8021C690
  if (!crb(c,0)) { goto L_8021C6BC; } // 8021C694
  cmps(c,0,(int32_t)c->r[5],593); // 8021C698
  if (crb(c,2)) { goto L_8021C94C; } // 8021C69C
  if (!crb(c,0)) { goto L_8021C6B0; } // 8021C6A0
  cmps(c,0,(int32_t)c->r[5],592); // 8021C6A4
  if (!crb(c,0)) { goto L_8021C910; } // 8021C6A8
  goto L_8021CA6C; // 8021C6AC
L_8021C6B0:;
  cmps(c,0,(int32_t)c->r[5],595); // 8021C6B0
  if (!crb(c,0)) { goto L_8021CA6C; } // 8021C6B4
  goto L_8021C978; // 8021C6B8
L_8021C6BC:;
  c->r[29]=0u+0x00010000u; // 8021C6BC
  c->r[0]=c->r[29]+0xFFFF9000u; // 8021C6C0
  cmps(c,0,(int32_t)c->r[5],(int32_t)c->r[0]); // 8021C6C4
  if (crb(c,2)) { goto L_8021CA40; } // 8021C6C8
  if (!crb(c,0)) { goto L_8021CA6C; } // 8021C6CC
  cmps(c,0,(int32_t)c->r[5],4098); // 8021C6D0
  if (!crb(c,0)) { goto L_8021CA6C; } // 8021C6D4
  goto L_8021CA08; // 8021C6D8
L_8021C6DC:;
  c->r[29]=0u+0x00010000u; // 8021C6DC
  c->r[5]=0u+0x00000000u; // 8021C6E0
  c->r[4]=c->r[29]+0x000005C2u; // 8021C6E4
  c->r[3]=c->r[3]+0x0000066Cu; // 8021C6E8
  c->lr=0x8021C6F0u; f_8021F1C4(c); // 8021C6EC
  c->r[3]=c->r[30]+0x0000069Cu; // 8021C6F0
  c->r[4]=c->r[29]+0x000005C7u; // 8021C6F4
  c->r[5]=0u+0x00000000u; // 8021C6F8
  c->lr=0x8021C700u; f_8021F1C4(c); // 8021C6FC
  c->r[3]=c->r[30]+0x000006CCu; // 8021C700
  c->r[4]=c->r[29]+0x000005CCu; // 8021C704
  c->r[5]=0u+0x00000000u; // 8021C708
  c->lr=0x8021C710u; f_8021F1C4(c); // 8021C70C
  c->r[3]=c->r[30]+0x0000075Cu; // 8021C710
  c->r[4]=0u+0x00000000u; // 8021C714
  c->r[5]=0u+0x00000003u; // 8021C718
  c->lr=0x8021C720u; f_80220378(c); // 8021C71C
  c->r[4]=R32(c->r[3]+0x00000044u); // 8021C720
  c->r[3]=c->r[30]+0x000006FCu; // 8021C724
  {uint32_t ea=c->r[2]+0xFFFFDFE0u; c->f[1]=c->ps1[1]=RF32(ea);} // 8021C728
  c->r[5]=0u+0x00000001u; // 8021C72C
  c->lr=0x8021C734u; f_8021EEB0(c); // 8021C730
  c->r[3]=c->r[30]+0x0000072Cu; // 8021C734
  c->r[4]=c->r[29]+0x000005D6u; // 8021C738
  c->r[5]=0u+0x00000000u; // 8021C73C
  c->lr=0x8021C744u; f_8021F1C4(c); // 8021C740
  c->r[4]=0u+0x806A0000u; // 8021C744
  {uint32_t ea=c->r[2]+0xFFFFDEF4u; c->f[1]=c->ps1[1]=RF32(ea);} // 8021C748
  c->r[4]=c->r[4]+0xFFFF8DB0u; // 8021C74C
  {uint32_t ea=c->r[2]+0xFFFFDEF0u; c->f[2]=c->ps1[2]=RF32(ea);} // 8021C750
  {uint32_t ea=c->r[2]+0xFFFFDF20u; c->f[3]=c->ps1[3]=RF32(ea);} // 8021C754
  c->r[3]=c->r[30]+0x000005C4u; // 8021C758
  c->r[4]=c->r[4]+0x0000018Cu; // 8021C75C
  c->lr=0x8021C764u; f_800E24D0(c); // 8021C760
  c->r[3]=c->r[30]|c->r[30]; // 8021C764
  c->r[4]=c->r[29]+0x00000694u; // 8021C768
  c->r[5]=0u+0x00000001u; // 8021C76C
  c->lr=0x8021C774u; f_80064744(c); // 8021C770
  c->r[0]=R32(c->r[30]+0x000008F0u); // 8021C774
  cmps(c,0,(int32_t)c->r[0],5); // 8021C778
  if (!crb(c,2)) { goto L_8021C78C; } // 8021C77C
  c->r[3]=c->r[30]+0x0000088Cu; // 8021C780
  c->lr=0x8021C788u; f_800A7EA8(c); // 8021C784
  goto L_8021C7D8; // 8021C788
L_8021C78C:;
  c->r[3]=c->r[1]+0x00000008u; // 8021C78C
  c->r[4]=0u+0x00000000u; // 8021C790
  c->r[5]=0u+0x00000008u; // 8021C794
  c->lr=0x8021C79Cu; f_800043EC(c); // 8021C798
  c->r[3]=R32(c->r[1]+0x00000008u); // 8021C79C
  c->r[4]=0u+0x00000006u; // 8021C7A0
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 8021C7A4
  W32(c->r[1]+0x00000010u,c->r[3]); // 8021C7A8
  W32(c->r[1]+0x00000014u,c->r[0]); // 8021C7AC
  c->r[3]=R32(c->r[30]+0x00000434u); // 8021C7B0
  c->r[3]=c->r[3]+0x00000030u; // 8021C7B4
  c->lr=0x8021C7BCu; f_802D94E8(c); // 8021C7B8
  c->f[4]=c->f[1]; // 8021C7BC
  {uint32_t ea=c->r[2]+0xFFFFDF5Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8021C7C0
  {uint32_t ea=c->r[2]+0xFFFFDF60u; c->f[2]=c->ps1[2]=RF32(ea);} // 8021C7C4
  c->r[3]=c->r[30]+0x0000088Cu; // 8021C7C8
  {uint32_t ea=c->r[2]+0xFFFFDF64u; c->f[3]=c->ps1[3]=RF32(ea);} // 8021C7CC
  c->r[4]=c->r[1]+0x00000010u; // 8021C7D0
  c->lr=0x8021C7D8u; f_800A7EEC(c); // 8021C7D4
L_8021C7D8:;
  c->r[3]=R32(c->r[30]+0x0000055Cu); // 8021C7D8
  c->r[0]=c->r[3]+0x00000001u; // 8021C7DC
  W32(c->r[30]+0x0000055Cu,c->r[0]); // 8021C7E0
L_8021C7E4:;
  c->r[3]=c->r[30]|c->r[30]; // 8021C7E4
  c->lr=0x8021C7ECu; f_8021CFF0(c); // 8021C7E8
  {uint32_t ea=c->r[30]+0x00000890u; c->f[0]=c->ps1[0]=RF32(ea);} // 8021C7EC
  fcmp(c,0,c->f[1],c->f[0]); // 8021C7F0
  if (!crb(c,1)) { goto L_8021CA6C; } // 8021C7F4
  c->r[0]=0u+0x00000100u; // 8021C7F8
  W32(c->r[30]+0x0000055Cu,c->r[0]); // 8021C7FC
  goto L_8021CA6C; // 8021C800
L_8021C804:;
  {uint32_t ea=c->r[2]+0xFFFFDF68u; c->f[1]=c->ps1[1]=RF32(ea);} // 8021C804
  c->r[3]=c->r[3]+0x000008B4u; // 8021C808
  {uint32_t ea=c->r[2]+0xFFFFDF6Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 8021C80C
  {uint32_t ea=c->r[2]+0xFFFFDF70u; c->f[3]=c->ps1[3]=RF32(ea);} // 8021C810
  c->lr=0x8021C818u; f_800A80F8(c); // 8021C814
  c->r[3]=R32(c->r[30]+0x0000055Cu); // 8021C818
  c->r[0]=c->r[3]+0x00000001u; // 8021C81C
  W32(c->r[30]+0x0000055Cu,c->r[0]); // 8021C820
  goto L_8021CA6C; // 8021C824
L_8021C828:;
  c->r[3]=c->r[3]+0x000008B4u; // 8021C828
  c->lr=0x8021C830u; f_800A8324(c); // 8021C82C
  cmps(c,0,(int32_t)c->r[3],0); // 8021C830
  if (crb(c,2)) { goto L_8021C864; } // 8021C834
  c->r[4]=0u+0x806A0000u; // 8021C838
  {uint32_t ea=c->r[2]+0xFFFFDEF4u; c->f[1]=c->ps1[1]=RF32(ea);} // 8021C83C
  c->r[4]=c->r[4]+0xFFFF8DB0u; // 8021C840
  {uint32_t ea=c->r[2]+0xFFFFDEF0u; c->f[2]=c->ps1[2]=RF32(ea);} // 8021C844
  {uint32_t ea=c->r[2]+0xFFFFDF20u; c->f[3]=c->ps1[3]=RF32(ea);} // 8021C848
  c->r[3]=c->r[30]+0x000005C4u; // 8021C84C
  c->r[4]=c->r[4]+0x0000019Eu; // 8021C850
  c->lr=0x8021C858u; f_800E24D0(c); // 8021C854
  c->r[0]=0u+0x00000180u; // 8021C858
  W32(c->r[30]+0x0000055Cu,c->r[0]); // 8021C85C
  goto L_8021C8A8; // 8021C860
L_8021C864:;
  c->r[3]=c->r[30]+0x000008B4u; // 8021C864
  c->lr=0x8021C86Cu; f_800A832C(c); // 8021C868
  cmps(c,0,(int32_t)c->r[3],0); // 8021C86C
  if (crb(c,2)) { goto L_8021CA6C; } // 8021C870
  c->r[0]=0u+0x00000150u; // 8021C874
  W32(c->r[30]+0x0000055Cu,c->r[0]); // 8021C878
L_8021C87C:;
  {uint32_t ea=c->r[2]+0xFFFFDF74u; c->f[1]=c->ps1[1]=RF32(ea);} // 8021C87C
  c->r[3]=c->r[30]+0x000005C4u; // 8021C880
  c->lr=0x8021C888u; f_800E2B50(c); // 8021C884
  cmps(c,0,(int32_t)c->r[3],0); // 8021C888
  if (crb(c,2)) { goto L_8021CA6C; } // 8021C88C
  c->r[3]=c->r[30]|c->r[30]; // 8021C890
  c->r[4]=0u+0x00000005u; // 8021C894
  c->r[5]=0u+0x00000001u; // 8021C898
  c->lr=0x8021C8A0u; f_80062748(c); // 8021C89C
  c->r[0]=0u+0x00000180u; // 8021C8A0
  W32(c->r[30]+0x0000055Cu,c->r[0]); // 8021C8A4
L_8021C8A8:;
  c->r[3]=c->r[30]+0x000005C4u; // 8021C8A8
  c->lr=0x8021C8B0u; f_800E2B1C(c); // 8021C8AC
  cmps(c,0,(int32_t)c->r[3],0); // 8021C8B0
  if (crb(c,2)) { goto L_8021CA6C; } // 8021C8B4
  c->r[0]=0u+0x00000200u; // 8021C8B8
  W32(c->r[30]+0x0000055Cu,c->r[0]); // 8021C8BC
L_8021C8C0:;
  c->r[4]=0u+0x00010000u; // 8021C8C0
  c->r[3]=c->r[30]|c->r[30]; // 8021C8C4
  c->r[4]=c->r[4]+0x000005B8u; // 8021C8C8
  c->r[5]=0u+0x00000001u; // 8021C8CC
  c->lr=0x8021C8D4u; f_80064744(c); // 8021C8D0
  c->r[29]=0u+0x806A0000u; // 8021C8D4
  {uint32_t ea=c->r[2]+0xFFFFDFE0u; c->f[1]=c->ps1[1]=RF32(ea);} // 8021C8D8
  c->r[29]=c->r[29]+0xFFFF8DB0u; // 8021C8DC
  c->r[3]=c->r[30]+0x000006FCu; // 8021C8E0
  c->r[4]=c->r[29]+0x000001B0u; // 8021C8E4
  c->r[5]=0u+0x00000001u; // 8021C8E8
  c->lr=0x8021C8F0u; f_8021F0B4(c); // 8021C8EC
  {uint32_t ea=c->r[2]+0xFFFFDEF4u; c->f[1]=c->ps1[1]=RF32(ea);} // 8021C8F0
  c->r[3]=c->r[30]+0x000005C4u; // 8021C8F4
  {uint32_t ea=c->r[2]+0xFFFFDEF0u; c->f[2]=c->ps1[2]=RF32(ea);} // 8021C8F8
  c->r[4]=c->r[29]+0x000001C8u; // 8021C8FC
  {uint32_t ea=c->r[2]+0xFFFFDF20u; c->f[3]=c->ps1[3]=RF32(ea);} // 8021C900
  c->lr=0x8021C908u; f_800E24D0(c); // 8021C904
  c->r[0]=0u+0x00000250u; // 8021C908
  W32(c->r[30]+0x0000055Cu,c->r[0]); // 8021C90C
L_8021C910:;
  c->r[29]=R32(c->r[30]+0x00000560u); // 8021C910
  c->r[3]=c->r[30]+0x000005C4u; // 8021C914
  c->lr=0x8021C91Cu; f_800E2A98(c); // 8021C918
  c->r[3]=0u+0x806A0000u; // 8021C91C
  c->r[0]=rotl(c->r[29],2)&0xFFFFFFFCu; // 8021C920
  c->r[3]=c->r[3]+0xFFFF8CD0u; // 8021C924
  {uint32_t ea=c->r[3]+c->r[0]; c->f[0]=c->ps1[0]=RF32(ea);} // 8021C928
  fcmp(c,0,c->f[1],c->f[0]); // 8021C92C
  setcrb(c,2,crb(c,1)|crb(c,2)); // 8021C930
  if (!crb(c,2)) { goto L_8021CA6C; } // 8021C934
  c->r[3]=R32(c->r[30]+0x0000055Cu); // 8021C938
  c->r[31]=0u+0x00000001u; // 8021C93C
  c->r[0]=c->r[3]+0x00000001u; // 8021C940
  W32(c->r[30]+0x0000055Cu,c->r[0]); // 8021C944
  goto L_8021CA6C; // 8021C948
L_8021C94C:;
  c->r[4]=R32(c->r[3]+0x00000560u); // 8021C94C
  c->r[0]=c->r[4]+0x00000001u; // 8021C950
  W32(c->r[3]+0x00000560u,c->r[0]); // 8021C954
  cmps(c,0,(int32_t)c->r[0],3); // 8021C958
  if (crb(c,0)) { goto L_8021C96C; } // 8021C95C
  c->r[0]=c->r[5]+0x00000001u; // 8021C960
  W32(c->r[3]+0x0000055Cu,c->r[0]); // 8021C964
  goto L_8021CA6C; // 8021C968
L_8021C96C:;
  c->r[0]=0u+0x00000250u; // 8021C96C
  W32(c->r[3]+0x0000055Cu,c->r[0]); // 8021C970
  IRQCHK(c); goto L_8021C910; // 8021C974
L_8021C978:;
  c->r[3]=c->r[3]+0x000005C4u; // 8021C978
  c->lr=0x8021C980u; f_800E2B1C(c); // 8021C97C
  cmps(c,0,(int32_t)c->r[3],0); // 8021C980
  if (crb(c,2)) { goto L_8021CA6C; } // 8021C984
  c->r[3]=0u+0x00010000u; // 8021C988
  c->r[0]=c->r[3]+0xFFFF9000u; // 8021C98C
  W32(c->r[30]+0x0000055Cu,c->r[0]); // 8021C990
  goto L_8021CA40; // 8021C994
L_8021C998:;
  c->r[3]=c->r[30]+0x0000088Cu; // 8021C998
  c->lr=0x8021C9A0u; f_800A7EA8(c); // 8021C99C
  c->r[4]=0u+0x00010000u; // 8021C9A0
  c->r[3]=c->r[30]|c->r[30]; // 8021C9A4
  c->r[4]=c->r[4]+0x00000699u; // 8021C9A8
  c->r[5]=0u+0x00000001u; // 8021C9AC
  c->lr=0x8021C9B4u; f_80064744(c); // 8021C9B0
  c->r[3]=c->r[30]+0x0000075Cu; // 8021C9B4
  c->r[4]=0u+0x00000001u; // 8021C9B8
  c->r[5]=0u+0x00000003u; // 8021C9BC
  c->lr=0x8021C9C4u; f_80220378(c); // 8021C9C0
  c->r[4]=R32(c->r[3]+0x00000044u); // 8021C9C4
  c->r[3]=c->r[30]+0x000006FCu; // 8021C9C8
  {uint32_t ea=c->r[13]+0xFFFF910Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8021C9CC
  c->r[5]=0u+0x00000001u; // 8021C9D0
  c->lr=0x8021C9D8u; f_8021EEB0(c); // 8021C9D4
  c->r[4]=0u+0x806A0000u; // 8021C9D8
  {uint32_t ea=c->r[2]+0xFFFFDEF4u; c->f[1]=c->ps1[1]=RF32(ea);} // 8021C9DC
  c->r[4]=c->r[4]+0xFFFF8DB0u; // 8021C9E0
  {uint32_t ea=c->r[2]+0xFFFFDEF0u; c->f[2]=c->ps1[2]=RF32(ea);} // 8021C9E4
  {uint32_t ea=c->r[2]+0xFFFFDF20u; c->f[3]=c->ps1[3]=RF32(ea);} // 8021C9E8
  c->r[3]=c->r[30]+0x000005C4u; // 8021C9EC
  c->r[4]=c->r[4]+0x000001DAu; // 8021C9F0
  c->lr=0x8021C9F8u; f_800E24D0(c); // 8021C9F4
  c->r[3]=R32(c->r[30]+0x0000055Cu); // 8021C9F8
  c->r[0]=c->r[3]+0x00000001u; // 8021C9FC
  W32(c->r[30]+0x0000055Cu,c->r[0]); // 8021CA00
  goto L_8021CA6C; // 8021CA04
L_8021CA08:;
  c->r[3]=c->r[3]+0x000005C4u; // 8021CA08
  c->lr=0x8021CA10u; f_800E2B1C(c); // 8021CA0C
  cmps(c,0,(int32_t)c->r[3],0); // 8021CA10
  if (crb(c,2)) { goto L_8021CA6C; } // 8021CA14
  c->r[3]=c->r[30]|c->r[30]; // 8021CA18
  c->r[4]=c->r[29]+0x000005B8u; // 8021CA1C
  c->r[5]=0u+0x00000000u; // 8021CA20
  c->lr=0x8021CA28u; f_80064744(c); // 8021CA24
  c->r[12]=R32(c->r[30]+0x0000001Cu); // 8021CA28
  c->r[3]=c->r[30]|c->r[30]; // 8021CA2C
  c->r[12]=R32(c->r[12]+0x000001B0u); // 8021CA30
  c->ctr=c->r[12]; // 8021CA34
  if (true) { c->lr=0x8021CA3Cu; dispatch(c,c->ctr); } // 8021CA38
  goto L_8021CB4C; // 8021CA3C
L_8021CA40:;
  c->r[0]=0u+0x00000000u; // 8021CA40
  W32(c->r[30]+0x00000778u,c->r[0]); // 8021CA44
  c->r[3]=c->r[30]|c->r[30]; // 8021CA48
  c->r[4]=0u+0x00000000u; // 8021CA4C
  c->lr=0x8021CA54u; f_8021AE14(c); // 8021CA50
  c->r[12]=R32(c->r[30]+0x0000001Cu); // 8021CA54
  c->r[3]=c->r[30]|c->r[30]; // 8021CA58
  c->r[12]=R32(c->r[12]+0x000001B0u); // 8021CA5C
  c->ctr=c->r[12]; // 8021CA60
  if (true) { c->lr=0x8021CA68u; dispatch(c,c->ctr); } // 8021CA64
  goto L_8021CB4C; // 8021CA68
L_8021CA6C:;
  cmps(c,0,(int32_t)c->r[31],0); // 8021CA6C
  if (crb(c,2)) { goto L_8021CB14; } // 8021CA70
  c->r[31]=0u+0x00000000u; // 8021CA74
  c->lr=0x8021CA7Cu; f_80067D60(c); // 8021CA78
  c->r[29]=0u+0x806A0000u; // 8021CA7C
  c->r[3]=R32(c->r[3]+0x00000004u); // 8021CA80
  c->r[29]=c->r[29]+0xFFFF8DB0u; // 8021CA84
  c->r[5]=0u+0x00000000u; // 8021CA88
  c->r[4]=c->r[29]+0x000001ECu; // 8021CA8C
  c->lr=0x8021CA94u; f_8006951C(c); // 8021CA90
  c->r[28]=c->r[3]|c->r[3]; // 8021CA94
  c->r[4]=c->r[29]+0x000001F3u; // 8021CA98
  c->r[3]=c->r[30]+0x000000FCu; // 8021CA9C
  c->lr=0x8021CAA4u; f_802E6F14(c); // 8021CAA0
  c->r[4]=c->r[1]+0x00000030u; // 8021CAA4
  c->lr=0x8021CAACu; f_80382F2C(c); // 8021CAA8
  c->lr=0x8021CAB0u; f_8033FE4C(c); // 8021CAAC
  c->r[4]=c->r[3]|c->r[3]; // 8021CAB0
  c->r[3]=c->r[1]+0x00000018u; // 8021CAB4
  c->lr=0x8021CABCu; f_800678FC(c); // 8021CAB8
  {uint32_t ea=c->r[13]+0xFFFF9118u; c->f[1]=c->ps1[1]=RF32(ea);} // 8021CABC
  c->r[3]=c->r[1]+0x00000024u; // 8021CAC0
  c->r[4]=c->r[1]+0x00000018u; // 8021CAC4
  c->lr=0x8021CACCu; f_8005ED34(c); // 8021CAC8
  c->r[3]=c->r[1]+0x00000030u; // 8021CACC
  {uint32_t ea=c->r[1]+0x00000024u; c->f[1]=c->ps1[1]=RF32(ea);} // 8021CAD0
  {uint32_t ea=c->r[1]+0x00000028u; c->f[2]=c->ps1[2]=RF32(ea);} // 8021CAD4
  c->r[4]=c->r[3]|c->r[3]; // 8021CAD8
  {uint32_t ea=c->r[1]+0x0000002Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 8021CADC
  c->lr=0x8021CAE4u; f_80383598(c); // 8021CAE0
  c->r[12]=R32(c->r[28]+0x0000001Cu); // 8021CAE4
  c->r[3]=c->r[28]|c->r[28]; // 8021CAE8
  c->r[4]=c->r[1]+0x00000030u; // 8021CAEC
  c->r[12]=R32(c->r[12]+0x000000ECu); // 8021CAF0
  c->ctr=c->r[12]; // 8021CAF4
  if (true) { c->lr=0x8021CAFCu; dispatch(c,c->ctr); } // 8021CAF8
  c->r[6]=R32(c->r[13]+0xFFFF9110u); // 8021CAFC
  c->r[3]=c->r[28]|c->r[28]; // 8021CB00
  c->r[7]=R32(c->r[13]+0xFFFF9114u); // 8021CB04
  c->r[4]=c->r[30]|c->r[30]; // 8021CB08
  c->r[5]=0u+0x00000007u; // 8021CB0C
  c->lr=0x8021CB14u; f_8017F808(c); // 8021CB10
L_8021CB14:;
  c->r[3]=c->r[30]|c->r[30]; // 8021CB14
  c->lr=0x8021CB1Cu; f_8021CFF0(c); // 8021CB18
  c->r[3]=c->r[30]+0x0000088Cu; // 8021CB1C
  c->lr=0x8021CB24u; f_800A804C(c); // 8021CB20
  c->r[0]=R8(c->r[30]+0x000008A0u); // 8021CB24
  cmps(c,0,(int32_t)c->r[0],0); // 8021CB28
  if (crb(c,2)) { goto L_8021CB3C; } // 8021CB2C
  c->r[0]=0u+0x00001000u; // 8021CB30
  W32(c->r[30]+0x0000055Cu,c->r[0]); // 8021CB34
  IRQCHK(c); goto L_8021C998; // 8021CB38
L_8021CB3C:;
  c->r[3]=c->r[30]|c->r[30]; // 8021CB3C
  c->lr=0x8021CB44u; f_8021D01C(c); // 8021CB40
  c->r[3]=c->r[30]+0x000008B4u; // 8021CB44
  c->lr=0x8021CB4Cu; f_800A8160(c); // 8021CB48
L_8021CB4C:;
  c->r[11]=c->r[1]+0x00000070u; // 8021CB4C
  c->lr=0x8021CB54u; { c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8021CB50
  c->r[0]=R32(c->r[1]+0x00000074u); // 8021CB54
  c->lr=c->r[0]; // 8021CB58
  c->r[1]=c->r[1]+0x00000070u; // 8021CB5C
  return; // 8021CB60
}

// fn_8021CB64
void f_8021CB64(Ctx* __restrict c) {
  trace_call(0x8021CB64u);
  {uint32_t ea=c->r[1]+0xFFFFFF90u; W32(ea,c->r[1]); c->r[1]=ea;} // 8021CB64
  c->r[0]=c->lr; // 8021CB68
  W32(c->r[1]+0x00000074u,c->r[0]); // 8021CB6C
  c->r[11]=c->r[1]+0x00000070u; // 8021CB70
  c->lr=0x8021CB78u; { W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8021CB74
  c->r[5]=0u+0x806E0000u; // 8021CB78
  c->r[0]=0u+0x00000002u; // 8021CB7C
  c->r[29]=c->r[3]|c->r[3]; // 8021CB80
  c->r[31]=0u+0x00000000u; // 8021CB84
  c->r[5]=c->r[5]+0x00006D78u; // 8021CB88
  c->r[4]=0u+0x00000000u; // 8021CB8C
  c->ctr=c->r[0]; // 8021CB90
L_8021CB94:;
  c->r[6]=R32(c->r[3]+0x00000778u); // 8021CB94
  c->r[0]=R32(c->r[5]+c->r[4]); // 8021CB98
  cmps(c,0,(int32_t)c->r[6],(int32_t)c->r[0]); // 8021CB9C
  if (!crb(c,2)) { goto L_8021CBAC; } // 8021CBA0
  c->r[31]=c->r[5]+c->r[4]; // 8021CBA4
  goto L_8021CBB4; // 8021CBA8
L_8021CBAC:;
  c->r[4]=c->r[4]+0x00000028u; // 8021CBAC
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8021CB94; } // 8021CBB0
L_8021CBB4:;
  c->r[0]=R32(c->r[3]+0x0000055Cu); // 8021CBB4
  c->r[30]=0u+0x00000000u; // 8021CBB8
  cmps(c,0,(int32_t)c->r[0],0); // 8021CBBC
  if (crb(c,2)) { goto L_8021CBE8; } // 8021CBC0
  cmps(c,0,(int32_t)c->r[0],1); // 8021CBC4
  if (crb(c,2)) { goto L_8021CD10; } // 8021CBC8
  cmps(c,0,(int32_t)c->r[0],2); // 8021CBCC
  if (crb(c,2)) { goto L_8021CD38; } // 8021CBD0
  cmps(c,0,(int32_t)c->r[0],4096); // 8021CBD4
  if (crb(c,2)) { goto L_8021CD60; } // 8021CBD8
  cmps(c,0,(int32_t)c->r[0],4097); // 8021CBDC
  if (crb(c,2)) { goto L_8021CDB0; } // 8021CBE0
  goto L_8021CDD8; // 8021CBE4
L_8021CBE8:;
  c->r[28]=0u+0x00010000u; // 8021CBE8
  c->r[3]=c->r[29]|c->r[29]; // 8021CBEC
  c->r[4]=c->r[28]+0x000005B8u; // 8021CBF0
  c->r[5]=0u+0x00000000u; // 8021CBF4
  c->lr=0x8021CBFCu; f_80064744(c); // 8021CBF8
  c->r[0]=R32(c->r[31]+0x00000008u); // 8021CBFC
  cmps(c,0,(int32_t)c->r[0],0); // 8021CC00
  if (!crb(c,2)) { goto L_8021CC20; } // 8021CC04
  c->r[4]=R32(c->r[31]+0x0000000Cu); // 8021CC08
  c->r[3]=c->r[29]+0x0000066Cu; // 8021CC0C
  {uint32_t ea=c->r[2]+0xFFFFDFE0u; c->f[1]=c->ps1[1]=RF32(ea);} // 8021CC10
  c->r[5]=0u+0x00000001u; // 8021CC14
  c->lr=0x8021CC1Cu; f_8021F0B4(c); // 8021CC18
  goto L_8021CC30; // 8021CC1C
L_8021CC20:;
  c->r[3]=c->r[29]+0x0000066Cu; // 8021CC20
  c->r[4]=c->r[28]+0x000005C2u; // 8021CC24
  c->r[5]=0u+0x00000000u; // 8021CC28
  c->lr=0x8021CC30u; f_8021F1C4(c); // 8021CC2C
L_8021CC30:;
  c->r[28]=0u+0x00010000u; // 8021CC30
  c->r[3]=c->r[29]+0x0000069Cu; // 8021CC34
  c->r[4]=c->r[28]+0x000005C7u; // 8021CC38
  c->r[5]=0u+0x00000000u; // 8021CC3C
  c->lr=0x8021CC44u; f_8021F1C4(c); // 8021CC40
  c->r[3]=c->r[29]+0x000006CCu; // 8021CC44
  c->r[4]=c->r[28]+0x000005CCu; // 8021CC48
  c->r[5]=0u+0x00000000u; // 8021CC4C
  c->lr=0x8021CC54u; f_8021F1C4(c); // 8021CC50
  c->r[0]=R32(c->r[31]+0x00000008u); // 8021CC54
  cmps(c,0,(int32_t)c->r[0],3); // 8021CC58
  if (!crb(c,2)) { goto L_8021CC78; } // 8021CC5C
  c->r[4]=R32(c->r[31]+0x0000000Cu); // 8021CC60
  c->r[3]=c->r[29]+0x000006FCu; // 8021CC64
  {uint32_t ea=c->r[2]+0xFFFFDFE0u; c->f[1]=c->ps1[1]=RF32(ea);} // 8021CC68
  c->r[5]=0u+0x00000001u; // 8021CC6C
  c->lr=0x8021CC74u; f_8021F0B4(c); // 8021CC70
  goto L_8021CC88; // 8021CC74
L_8021CC78:;
  c->r[3]=c->r[29]+0x000006FCu; // 8021CC78
  c->r[4]=c->r[28]+0x000005D1u; // 8021CC7C
  c->r[5]=0u+0x00000000u; // 8021CC80
  c->lr=0x8021CC88u; f_8021F1C4(c); // 8021CC84
L_8021CC88:;
  c->r[4]=0u+0x00010000u; // 8021CC88
  c->r[3]=c->r[29]+0x0000072Cu; // 8021CC8C
  c->r[4]=c->r[4]+0x000005D6u; // 8021CC90
  c->r[5]=0u+0x00000000u; // 8021CC94
  c->lr=0x8021CC9Cu; f_8021F1C4(c); // 8021CC98
  c->r[4]=R32(c->r[31]+0x00000004u); // 8021CC9C
  c->r[3]=c->r[29]+0x000005C4u; // 8021CCA0
  {uint32_t ea=c->r[2]+0xFFFFDEF4u; c->f[1]=c->ps1[1]=RF32(ea);} // 8021CCA4
  {uint32_t ea=c->r[2]+0xFFFFDEF0u; c->f[2]=c->ps1[2]=RF32(ea);} // 8021CCA8
  {uint32_t ea=c->r[2]+0xFFFFDF20u; c->f[3]=c->ps1[3]=RF32(ea);} // 8021CCAC
  c->lr=0x8021CCB4u; f_800E24D0(c); // 8021CCB0
  c->r[3]=c->r[1]+0x00000008u; // 8021CCB4
  c->r[4]=0u+0x00000000u; // 8021CCB8
  c->r[5]=0u+0x00000008u; // 8021CCBC
  c->lr=0x8021CCC4u; f_800043EC(c); // 8021CCC0
  c->r[3]=R32(c->r[1]+0x00000008u); // 8021CCC4
  c->r[4]=0u+0x00000007u; // 8021CCC8
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 8021CCCC
  W32(c->r[1]+0x00000010u,c->r[3]); // 8021CCD0
  W32(c->r[1]+0x00000014u,c->r[0]); // 8021CCD4
  c->r[3]=R32(c->r[29]+0x00000434u); // 8021CCD8
  c->r[3]=c->r[3]+0x00000030u; // 8021CCDC
  c->lr=0x8021CCE4u; f_802D94E8(c); // 8021CCE0
  {uint32_t ea=c->r[31]+0x00000014u; c->f[2]=c->ps1[2]=RF32(ea);} // 8021CCE4
  c->f[4]=c->f[1]; // 8021CCE8
  {uint32_t ea=c->r[2]+0xFFFFDEF4u; c->f[0]=c->ps1[0]=RF32(ea);} // 8021CCEC
  c->r[3]=c->r[29]+0x0000088Cu; // 8021CCF0
  {uint32_t ea=c->r[31]+0x00000010u; c->f[1]=c->ps1[1]=RF32(ea);} // 8021CCF4
  c->r[4]=c->r[1]+0x00000010u; // 8021CCF8
  c->f[3]=c->ps1[3]=S(c->f[0]+c->f[2]); // 8021CCFC
  c->lr=0x8021CD04u; f_800A7EEC(c); // 8021CD00
  c->r[3]=R32(c->r[29]+0x0000055Cu); // 8021CD04
  c->r[0]=c->r[3]+0x00000001u; // 8021CD08
  W32(c->r[29]+0x0000055Cu,c->r[0]); // 8021CD0C
L_8021CD10:;
  {uint32_t ea=c->r[31]+0x00000018u; c->f[1]=c->ps1[1]=RF32(ea);} // 8021CD10
  c->r[3]=c->r[29]+0x000005C4u; // 8021CD14
  c->lr=0x8021CD1Cu; f_800E2B50(c); // 8021CD18
  cmps(c,0,(int32_t)c->r[3],0); // 8021CD1C
  if (crb(c,2)) { goto L_8021CDD8; } // 8021CD20
  c->r[3]=R32(c->r[29]+0x0000055Cu); // 8021CD24
  c->r[30]=0u+0x00000001u; // 8021CD28
  c->r[0]=c->r[3]+0x00000001u; // 8021CD2C
  W32(c->r[29]+0x0000055Cu,c->r[0]); // 8021CD30
  goto L_8021CDD8; // 8021CD34
L_8021CD38:;
  c->r[3]=c->r[3]+0x000005C4u; // 8021CD38
  c->lr=0x8021CD40u; f_800E2B1C(c); // 8021CD3C
  cmps(c,0,(int32_t)c->r[3],0); // 8021CD40
  if (crb(c,2)) { goto L_8021CDD8; } // 8021CD44
  c->r[12]=R32(c->r[29]+0x0000001Cu); // 8021CD48
  c->r[3]=c->r[29]|c->r[29]; // 8021CD4C
  c->r[12]=R32(c->r[12]+0x000001B0u); // 8021CD50
  c->ctr=c->r[12]; // 8021CD54
  if (true) { c->lr=0x8021CD5Cu; dispatch(c,c->ctr); } // 8021CD58
  goto L_8021CEA8; // 8021CD5C
L_8021CD60:;
  c->r[3]=c->r[29]+0x0000088Cu; // 8021CD60
  c->lr=0x8021CD68u; f_800A7EA8(c); // 8021CD64
  c->r[0]=R32(c->r[31]+0x00000008u); // 8021CD68
  c->r[5]=0u+0x00000001u; // 8021CD6C
  c->r[4]=R32(c->r[31]+0x00000024u); // 8021CD70
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)48); // 8021CD74
  {uint32_t ea=c->r[13]+0xFFFF910Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8021CD78
  c->r[3]=c->r[29]+c->r[0]; // 8021CD7C
  c->r[3]=c->r[3]+0x0000066Cu; // 8021CD80
  c->lr=0x8021CD88u; f_8021F0B4(c); // 8021CD84
  c->r[4]=R32(c->r[31]+0x00000020u); // 8021CD88
  c->r[3]=c->r[29]+0x000005C4u; // 8021CD8C
  {uint32_t ea=c->r[2]+0xFFFFDEF4u; c->f[1]=c->ps1[1]=RF32(ea);} // 8021CD90
  {uint32_t ea=c->r[2]+0xFFFFDEF0u; c->f[2]=c->ps1[2]=RF32(ea);} // 8021CD94
  {uint32_t ea=c->r[2]+0xFFFFDF20u; c->f[3]=c->ps1[3]=RF32(ea);} // 8021CD98
  c->lr=0x8021CDA0u; f_800E24D0(c); // 8021CD9C
  c->r[3]=R32(c->r[29]+0x0000055Cu); // 8021CDA0
  c->r[0]=c->r[3]+0x00000001u; // 8021CDA4
  W32(c->r[29]+0x0000055Cu,c->r[0]); // 8021CDA8
  goto L_8021CDD8; // 8021CDAC
L_8021CDB0:;
  c->r[3]=c->r[3]+0x000005C4u; // 8021CDB0
  c->lr=0x8021CDB8u; f_800E2B1C(c); // 8021CDB4
  cmps(c,0,(int32_t)c->r[3],0); // 8021CDB8
  if (crb(c,2)) { goto L_8021CDD8; } // 8021CDBC
  c->r[12]=R32(c->r[29]+0x0000001Cu); // 8021CDC0
  c->r[3]=c->r[29]|c->r[29]; // 8021CDC4
  c->r[12]=R32(c->r[12]+0x000001B0u); // 8021CDC8
  c->ctr=c->r[12]; // 8021CDCC
  if (true) { c->lr=0x8021CDD4u; dispatch(c,c->ctr); } // 8021CDD0
  goto L_8021CEA8; // 8021CDD4
L_8021CDD8:;
  cmps(c,0,(int32_t)c->r[30],0); // 8021CDD8
  if (crb(c,2)) { goto L_8021CE80; } // 8021CDDC
  c->r[30]=0u+0x00000000u; // 8021CDE0
  c->lr=0x8021CDE8u; f_80067D60(c); // 8021CDE4
  c->r[4]=0u+0x806A0000u; // 8021CDE8
  c->r[3]=R32(c->r[3]+0x00000004u); // 8021CDEC
  c->r[4]=c->r[4]+0xFFFF8DB0u; // 8021CDF0
  c->r[5]=0u+0x00000000u; // 8021CDF4
  c->r[4]=c->r[4]+0x000001ECu; // 8021CDF8
  c->lr=0x8021CE00u; f_8006951C(c); // 8021CDFC
  c->r[4]=R32(c->r[31]+0x0000001Cu); // 8021CE00
  c->r[28]=c->r[3]|c->r[3]; // 8021CE04
  c->r[3]=c->r[29]+0x000000FCu; // 8021CE08
  c->lr=0x8021CE10u; f_802E6F14(c); // 8021CE0C
  c->r[4]=c->r[1]+0x00000030u; // 8021CE10
  c->lr=0x8021CE18u; f_80382F2C(c); // 8021CE14
  c->lr=0x8021CE1Cu; f_8033FE4C(c); // 8021CE18
  c->r[4]=c->r[3]|c->r[3]; // 8021CE1C
  c->r[3]=c->r[1]+0x00000018u; // 8021CE20
  c->lr=0x8021CE28u; f_800678FC(c); // 8021CE24
  {uint32_t ea=c->r[13]+0xFFFF911Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8021CE28
  c->r[3]=c->r[1]+0x00000024u; // 8021CE2C
  c->r[4]=c->r[1]+0x00000018u; // 8021CE30
  c->lr=0x8021CE38u; f_8005ED34(c); // 8021CE34
  c->r[3]=c->r[1]+0x00000030u; // 8021CE38
  {uint32_t ea=c->r[1]+0x00000024u; c->f[1]=c->ps1[1]=RF32(ea);} // 8021CE3C
  {uint32_t ea=c->r[1]+0x00000028u; c->f[2]=c->ps1[2]=RF32(ea);} // 8021CE40
  c->r[4]=c->r[3]|c->r[3]; // 8021CE44
  {uint32_t ea=c->r[1]+0x0000002Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 8021CE48
  c->lr=0x8021CE50u; f_80383598(c); // 8021CE4C
  c->r[12]=R32(c->r[28]+0x0000001Cu); // 8021CE50
  c->r[3]=c->r[28]|c->r[28]; // 8021CE54
  c->r[4]=c->r[1]+0x00000030u; // 8021CE58
  c->r[12]=R32(c->r[12]+0x000000ECu); // 8021CE5C
  c->ctr=c->r[12]; // 8021CE60
  if (true) { c->lr=0x8021CE68u; dispatch(c,c->ctr); } // 8021CE64
  c->r[6]=R32(c->r[13]+0xFFFF9110u); // 8021CE68
  c->r[3]=c->r[28]|c->r[28]; // 8021CE6C
  c->r[7]=R32(c->r[13]+0xFFFF9114u); // 8021CE70
  c->r[4]=c->r[29]|c->r[29]; // 8021CE74
  c->r[5]=0u+0x00000006u; // 8021CE78
  c->lr=0x8021CE80u; f_8017F808(c); // 8021CE7C
L_8021CE80:;
  c->r[3]=c->r[29]|c->r[29]; // 8021CE80
  c->lr=0x8021CE88u; f_8021CFF0(c); // 8021CE84
  c->r[3]=c->r[29]+0x0000088Cu; // 8021CE88
  c->lr=0x8021CE90u; f_800A804C(c); // 8021CE8C
  c->r[0]=R8(c->r[29]+0x000008A0u); // 8021CE90
  cmps(c,0,(int32_t)c->r[0],0); // 8021CE94
  if (crb(c,2)) { goto L_8021CEA8; } // 8021CE98
  c->r[0]=0u+0x00001000u; // 8021CE9C
  W32(c->r[29]+0x0000055Cu,c->r[0]); // 8021CEA0
  IRQCHK(c); goto L_8021CD60; // 8021CEA4
L_8021CEA8:;
  c->r[11]=c->r[1]+0x00000070u; // 8021CEA8
  c->lr=0x8021CEB0u; { c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8021CEAC
  c->r[0]=R32(c->r[1]+0x00000074u); // 8021CEB0
  c->lr=c->r[0]; // 8021CEB4
  c->r[1]=c->r[1]+0x00000070u; // 8021CEB8
  return; // 8021CEBC
}

// fn_8021CEC0
void f_8021CEC0(Ctx* __restrict c) {
  trace_call(0x8021CEC0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8021CEC0
  c->r[0]=c->lr; // 8021CEC4
  W32(c->r[1]+0x00000024u,c->r[0]); // 8021CEC8
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[31]);} // 8021CECC
  {uint32_t ea=c->r[1]+0x00000018u; psq_store(c,31,ea,0,0);} // 8021CED0
  c->f[31]=c->f[1]; // 8021CED4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8021CED8
  c->r[31]=c->r[4]|c->r[4]; // 8021CEDC
  W32(c->r[1]+0x00000008u,c->r[30]); // 8021CEE0
  c->r[30]=c->r[3]|c->r[3]; // 8021CEE4
  c->lr=0x8021CEECu; f_8021CFF0(c); // 8021CEE8
  c->f[2]=c->f[31]; // 8021CEEC
  c->r[4]=R32(c->r[31]+0x00000030u); // 8021CEF0
  c->r[3]=c->r[30]+0x0000088Cu; // 8021CEF4
  c->lr=0x8021CEFCu; f_800A7F7C(c); // 8021CEF8
  c->r[3]=c->r[30]|c->r[30]; // 8021CEFC
  c->lr=0x8021CF04u; f_8021D0CC(c); // 8021CF00
  cmps(c,0,(int32_t)c->r[3],0); // 8021CF04
  if (crb(c,2)) { goto L_8021CF20; } // 8021CF08
  c->f[2]=c->f[31]; // 8021CF0C
  {uint32_t ea=c->r[2]+0xFFFFDEF0u; c->f[1]=c->ps1[1]=RF32(ea);} // 8021CF10
  c->r[4]=R32(c->r[31]+0x00000030u); // 8021CF14
  c->r[3]=c->r[30]+0x000008CCu; // 8021CF18
  c->lr=0x8021CF20u; f_800A7F7C(c); // 8021CF1C
L_8021CF20:;
  c->f[1]=c->f[31]; // 8021CF20
  {uint32_t ea=c->r[1]+0x00000018u; psq_load(c,31,ea,0,0);} // 8021CF24
  {uint32_t ea=c->r[1]+0x00000010u; c->f[31]=RF64(ea);} // 8021CF28
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8021CF2C
  c->r[30]=R32(c->r[1]+0x00000008u); // 8021CF30
  c->r[0]=R32(c->r[1]+0x00000024u); // 8021CF34
  c->lr=c->r[0]; // 8021CF38
  c->r[1]=c->r[1]+0x00000020u; // 8021CF3C
  return; // 8021CF40
}

// fn_8021CF44
void f_8021CF44(Ctx* __restrict c) {
  trace_call(0x8021CF44u);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8021CF44
  c->r[0]=c->lr; // 8021CF48
  c->r[5]=0u+0x00000000u; // 8021CF4C
  c->r[6]=0u+0x00000000u; // 8021CF50
  W32(c->r[1]+0x00000054u,c->r[0]); // 8021CF54
  c->r[3]=c->r[1]+0x00000008u; // 8021CF58
  c->r[7]=0u+0x00000000u; // 8021CF5C
  c->lr=0x8021CF64u; f_800A7BF4(c); // 8021CF60
  c->r[0]=R32(c->r[1]+0x00000054u); // 8021CF64
  c->lr=c->r[0]; // 8021CF68
  c->r[1]=c->r[1]+0x00000050u; // 8021CF6C
  return; // 8021CF70
}

// fn_8021CF74
void f_8021CF74(Ctx* __restrict c) {
  trace_call(0x8021CF74u);
  c->r[4]=R32(c->r[3]+0x0000044Cu); // 8021CF74
  c->r[5]=R32(c->r[3]+0x00000444u); // 8021CF78
  {uint32_t ea=c->r[4]+0x00000000u; c->f[3]=c->ps1[3]=RF32(ea);} // 8021CF7C
  {uint32_t ea=c->r[2]+0xFFFFDEF0u; c->f[0]=c->ps1[0]=RF32(ea);} // 8021CF80
  {uint32_t ea=c->r[5]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 8021CF84
  fcmp(c,0,c->f[3],c->f[0]); // 8021CF88
  if (!crb(c,0)) { goto L_8021CF98; } // 8021CF8C
  c->f[3]=c->f[0]; // 8021CF90
  goto L_8021CFA4; // 8021CF94
L_8021CF98:;
  fcmp(c,0,c->f[3],c->f[1]); // 8021CF98
  if (!crb(c,1)) { goto L_8021CFA4; } // 8021CF9C
  c->f[3]=c->f[1]; // 8021CFA0
L_8021CFA4:;
  {uint32_t ea=c->r[2]+0xFFFFDEF0u; c->f[0]=c->ps1[0]=RF32(ea);} // 8021CFA4
  {uint32_t ea=c->r[2]+0xFFFFDEF4u; c->f[2]=c->ps1[2]=RF32(ea);} // 8021CFA8
  c->f[4]=c->ps1[4]=S(c->f[1]-c->f[0]); // 8021CFAC
  {uint32_t ea=c->r[2]+0xFFFFDF78u; c->f[1]=c->ps1[1]=RF32(ea);} // 8021CFB0
  c->f[3]=c->ps1[3]=S(c->f[3]-c->f[0]); // 8021CFB4
  {uint32_t ea=c->r[2]+0xFFFFDF7Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8021CFB8
  c->f[3]=c->ps1[3]=S(c->f[4]-c->f[3]); // 8021CFBC
  c->f[3]=c->ps1[3]=S(c->f[3]/c->f[4]); // 8021CFC0
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[3]); // 8021CFC4
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[2]); // 8021CFC8
  fcmp(c,0,c->f[1],c->f[0]); // 8021CFCC
  setcrb(c,2,crb(c,1)|crb(c,2)); // 8021CFD0
  if (!crb(c,2)) { goto L_8021CFE4; } // 8021CFD4
  c->r[0]=0u+0x00000000u; // 8021CFD8
  W32(c->r[3]+0x00000780u,c->r[0]); // 8021CFDC
  return; // 8021CFE0
L_8021CFE4:;
  c->r[0]=0u+0x00000001u; // 8021CFE4
  W32(c->r[3]+0x00000780u,c->r[0]); // 8021CFE8
  return; // 8021CFEC
}

// fn_8021CFF0
void f_8021CFF0(Ctx* __restrict c) {
  trace_call(0x8021CFF0u);
  c->r[0]=R32(c->r[3]+0x00000888u); // 8021CFF0
  cmps(c,0,(int32_t)c->r[0],0); // 8021CFF4
  if (!crb(c,2)) { goto L_8021D004; } // 8021CFF8
  c->r[3]=R32(c->r[3]+0x00000404u); // 8021CFFC
  f_802EA4B0(c); return; // 8021D000
L_8021D004:;
  cmps(c,0,(int32_t)c->r[0],1); // 8021D004
  if (!crb(c,2)) { goto L_8021D014; } // 8021D008
  c->r[3]=c->r[3]+0x000005C4u; // 8021D00C
  f_800E2A98(c); return; // 8021D010
L_8021D014:;
  {uint32_t ea=c->r[2]+0xFFFFDEF0u; c->f[1]=c->ps1[1]=RF32(ea);} // 8021D014
  return; // 8021D018
}

// fn_8021D01C
void f_8021D01C(Ctx* __restrict c) {
  trace_call(0x8021D01Cu);
  c->r[0]=R32(c->r[3]+0x000008B0u); // 8021D01C
  cmps(c,0,(int32_t)c->r[0],0); // 8021D020
  if (!crb(c,2)) { goto L_8021D030; } // 8021D024
  c->r[3]=R32(c->r[3]+0x00000404u); // 8021D028
  f_802EA4B0(c); return; // 8021D02C
L_8021D030:;
  cmps(c,0,(int32_t)c->r[0],1); // 8021D030
  if (!crb(c,2)) { goto L_8021D040; } // 8021D034
  c->r[3]=c->r[3]+0x000005C4u; // 8021D038
  f_800E2A98(c); return; // 8021D03C
L_8021D040:;
  {uint32_t ea=c->r[2]+0xFFFFDEF0u; c->f[1]=c->ps1[1]=RF32(ea);} // 8021D040
  return; // 8021D044
}

// fn_8021D048
void f_8021D048(Ctx* __restrict c) {
  trace_call(0x8021D048u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8021D048
  c->r[0]=c->lr; // 8021D04C
  c->r[4]=0u+0x00000000u; // 8021D050
  c->r[5]=0u+0x00000008u; // 8021D054
  W32(c->r[1]+0x00000024u,c->r[0]); // 8021D058
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8021D05C
  c->r[31]=c->r[3]|c->r[3]; // 8021D060
  c->r[3]=c->r[1]+0x00000008u; // 8021D064
  c->lr=0x8021D06Cu; f_800043EC(c); // 8021D068
  c->r[3]=c->r[1]+0x00000008u; // 8021D06C
  c->r[4]=0u+0x00000011u; // 8021D070
  c->r[5]=0u+0x00000001u; // 8021D074
  c->lr=0x8021D07Cu; f_8005DCA0(c); // 8021D078
  c->r[3]=R32(c->r[1]+0x00000008u); // 8021D07C
  c->r[4]=0u+0x00000001u; // 8021D080
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 8021D084
  W32(c->r[1]+0x00000010u,c->r[3]); // 8021D088
  W32(c->r[1]+0x00000014u,c->r[0]); // 8021D08C
  c->r[3]=R32(c->r[31]+0x00000434u); // 8021D090
  c->r[3]=c->r[3]+0x00000030u; // 8021D094
  c->lr=0x8021D09Cu; f_802D94E8(c); // 8021D098
  c->f[4]=c->f[1]; // 8021D09C
  {uint32_t ea=c->r[2]+0xFFFFDF80u; c->f[1]=c->ps1[1]=RF32(ea);} // 8021D0A0
  {uint32_t ea=c->r[2]+0xFFFFDF84u; c->f[2]=c->ps1[2]=RF32(ea);} // 8021D0A4
  c->r[3]=c->r[31]+0x000008CCu; // 8021D0A8
  {uint32_t ea=c->r[2]+0xFFFFDEF8u; c->f[3]=c->ps1[3]=RF32(ea);} // 8021D0AC
  c->r[4]=c->r[1]+0x00000010u; // 8021D0B0
  c->lr=0x8021D0B8u; f_800A7EEC(c); // 8021D0B4
  c->r[0]=R32(c->r[1]+0x00000024u); // 8021D0B8
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8021D0BC
  c->lr=c->r[0]; // 8021D0C0
  c->r[1]=c->r[1]+0x00000020u; // 8021D0C4
  return; // 8021D0C8
}

// fn_8021D0CC
void f_8021D0CC(Ctx* __restrict c) {
  trace_call(0x8021D0CCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8021D0CC
  c->r[0]=c->lr; // 8021D0D0
  W32(c->r[1]+0x00000014u,c->r[0]); // 8021D0D4
  c->lr=0x8021D0DCu; f_801FD098(c); // 8021D0D8
  c->r[0]=cntlz(c->r[3]); // 8021D0DC
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 8021D0E0
  c->r[0]=R32(c->r[1]+0x00000014u); // 8021D0E4
  c->lr=c->r[0]; // 8021D0E8
  c->r[1]=c->r[1]+0x00000010u; // 8021D0EC
  return; // 8021D0F0
}

// fn_8021D0F4
void f_8021D0F4(Ctx* __restrict c) {
  trace_call(0x8021D0F4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8021D0F4
  c->r[0]=c->lr; // 8021D0F8
  W32(c->r[1]+0x00000014u,c->r[0]); // 8021D0FC
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 8021D100
  c->r[30]=c->r[3]|c->r[3]; // 8021D104
  c->r[0]=R8(c->r[3]+0x000008E0u); // 8021D108
  cmps(c,0,(int32_t)c->r[0],0); // 8021D10C
  if (!crb(c,2)) { goto L_8021D11C; } // 8021D110
  c->r[3]=0u+0x00000000u; // 8021D114
  goto L_8021D17C; // 8021D118
L_8021D11C:;
  c->r[12]=R32(c->r[3]+0x0000001Cu); // 8021D11C
  c->r[12]=R32(c->r[12]+0x00000110u); // 8021D120
  c->ctr=c->r[12]; // 8021D124
  if (true) { c->lr=0x8021D12Cu; dispatch(c,c->ctr); } // 8021D128
  cmps(c,0,(int32_t)c->r[3],0); // 8021D12C
  if (!crb(c,2)) { goto L_8021D13C; } // 8021D130
  c->r[3]=0u+0x00000000u; // 8021D134
  goto L_8021D17C; // 8021D138
L_8021D13C:;
  c->r[3]=c->r[30]|c->r[30]; // 8021D13C
  c->lr=0x8021D144u; f_8021D0CC(c); // 8021D140
  cmps(c,0,(int32_t)c->r[3],0); // 8021D144
  if (!crb(c,2)) { goto L_8021D154; } // 8021D148
  c->r[3]=0u+0x00000000u; // 8021D14C
  goto L_8021D17C; // 8021D150
L_8021D154:;
  c->r[3]=R32(c->r[30]+0x00000004u); // 8021D154
  c->r[31]=0u+0x00000000u; // 8021D158
  cmps(c,0,(int32_t)c->r[3],0); // 8021D15C
  if (crb(c,2)) { goto L_8021D178; } // 8021D160
  c->r[30]=R32(c->r[3]+0x00000000u); // 8021D164
  c->lr=0x8021D16Cu; f_8005E1B0(c); // 8021D168
  cmps(c,0,(int32_t)c->r[30],(int32_t)c->r[3]); // 8021D16C
  if (!crb(c,2)) { goto L_8021D178; } // 8021D170
  c->r[31]=0u+0x00000001u; // 8021D174
L_8021D178:;
  c->r[3]=c->r[31]|c->r[31]; // 8021D178
L_8021D17C:;
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 8021D17C
  c->r[0]=R32(c->r[1]+0x00000014u); // 8021D180
  c->lr=c->r[0]; // 8021D184
  c->r[1]=c->r[1]+0x00000010u; // 8021D188
  return; // 8021D18C
}

// fn_8021D190
void f_8021D190(Ctx* __restrict c) {
  trace_call(0x8021D190u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8021D190
  c->r[0]=c->lr; // 8021D194
  W32(c->r[1]+0x00000024u,c->r[0]); // 8021D198
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 8021D19C
  c->r[31]=0u+0x806A0000u; // 8021D1A0
  c->r[30]=c->r[4]|c->r[4]; // 8021D1A4
  c->r[29]=c->r[3]|c->r[3]; // 8021D1A8
  c->r[31]=c->r[31]+0xFFFF8DB0u; // 8021D1AC
  c->r[3]=c->r[30]|c->r[30]; // 8021D1B0
  c->r[4]=c->r[31]+0x000001FCu; // 8021D1B4
  c->lr=0x8021D1BCu; f_8007CA34(c); // 8021D1B8
  cmps(c,0,(int32_t)c->r[3],0); // 8021D1BC
  if (crb(c,2)) { goto L_8021D1E0; } // 8021D1C0
  c->r[3]=c->r[29]|c->r[29]; // 8021D1C4
  c->r[4]=0u+0x00000003u; // 8021D1C8
  c->lr=0x8021D1D0u; f_8021AF60(c); // 8021D1CC
  cmps(c,0,(int32_t)c->r[3],0); // 8021D1D0
  if (!crb(c,2)) { goto L_8021D210; } // 8021D1D4
  c->r[3]=0u+0x00000000u; // 8021D1D8
  goto L_8021D214; // 8021D1DC
L_8021D1E0:;
  c->r[3]=c->r[30]|c->r[30]; // 8021D1E0
  c->r[4]=c->r[31]+0x00000202u; // 8021D1E4
  c->lr=0x8021D1ECu; f_8007CA34(c); // 8021D1E8
  cmps(c,0,(int32_t)c->r[3],0); // 8021D1EC
  if (crb(c,2)) { goto L_8021D210; } // 8021D1F0
  c->r[3]=c->r[29]|c->r[29]; // 8021D1F4
  c->r[4]=0u+0x00000003u; // 8021D1F8
  c->lr=0x8021D200u; f_8021AF60(c); // 8021D1FC
  cmps(c,0,(int32_t)c->r[3],0); // 8021D200
  if (crb(c,2)) { goto L_8021D210; } // 8021D204
  c->r[3]=0u+0x00000000u; // 8021D208
  goto L_8021D214; // 8021D20C
L_8021D210:;
  c->r[3]=0u+0x00000001u; // 8021D210
L_8021D214:;
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 8021D214
  c->r[0]=R32(c->r[1]+0x00000024u); // 8021D218
  c->lr=c->r[0]; // 8021D21C
  c->r[1]=c->r[1]+0x00000020u; // 8021D220
  return; // 8021D224
}

// fn_8021D228
void f_8021D228(Ctx* __restrict c) {
  trace_call(0x8021D228u);
  c->r[3]=0u+0x00000001u; // 8021D228
  return; // 8021D22C
}

// fn_8021D230
void f_8021D230(Ctx* __restrict c) {
  trace_call(0x8021D230u);
  return; // 8021D230
}

// fn_8021D234
void f_8021D234(Ctx* __restrict c) {
  trace_call(0x8021D234u);
  c->r[3]=0u+0x0000000Eu; // 8021D234
  return; // 8021D238
}

// fn_8021D23C
void f_8021D23C(Ctx* __restrict c) {
  trace_call(0x8021D23Cu);
  c->r[3]=c->r[3]+0xFFFFFCACu; // 8021D23C
  f_8021A6CC(c); return; // 8021D240
}

// fn_8021D244
void f_8021D244(Ctx* __restrict c) {
  trace_call(0x8021D244u);
  c->r[3]=c->r[3]+0xFFFFFA40u; // 8021D244
  f_8021D228(c); return; // 8021D248
}

// fn_8021D24C
void f_8021D24C(Ctx* __restrict c) {
  trace_call(0x8021D24Cu);
  c->r[3]=c->r[3]+0xFFFFFA40u; // 8021D24C
  f_8021D190(c); return; // 8021D250
}

// fn_8021D254
void f_8021D254(Ctx* __restrict c) {
  trace_call(0x8021D254u);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8021D254
  c->r[0]=c->lr; // 8021D258
  W32(c->r[1]+0x00000054u,c->r[0]); // 8021D25C
  c->r[11]=c->r[1]+0x00000050u; // 8021D260
  c->lr=0x8021D268u; { W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8021D264
  c->r[25]=c->r[3]|c->r[3]; // 8021D268
  c->r[30]=0u+0x806A0000u; // 8021D26C
  c->r[31]=c->r[25]|c->r[25]; // 8021D270
  c->r[29]=c->r[25]|c->r[25]; // 8021D274
  c->r[26]=c->r[25]|c->r[25]; // 8021D278
  c->r[28]=c->r[25]|c->r[25]; // 8021D27C
  c->r[30]=c->r[30]+0xFFFF8FD0u; // 8021D280
  c->lr=0x8021D288u; f_8021E02C(c); // 8021D284
  c->r[4]=0u+0x806D0000u; // 8021D288
  c->r[27]=addc(c,c->r[25],0x00000020u,0); cr0(c,c->r[27]); // 8021D28C
  c->r[0]=0u+0x00000000u; // 8021D290
  W32(c->r[25]+0x00000000u,c->r[3]); // 8021D294
  c->r[4]=c->r[4]+0x000038C0u; // 8021D298
  W32(c->r[25]+0x0000001Cu,c->r[4]); // 8021D29C
  W32(c->r[25]+0x00000004u,c->r[0]); // 8021D2A0
  W32(c->r[25]+0x00000008u,c->r[0]); // 8021D2A4
  W32(c->r[25]+0x0000000Cu,c->r[0]); // 8021D2A8
  W8(c->r[25]+0x00000010u,c->r[0]); // 8021D2AC
  W32(c->r[25]+0x00000014u,c->r[0]); // 8021D2B0
  W32(c->r[25]+0x00000018u,c->r[0]); // 8021D2B4
  W32(c->r[25]+0x00000020u,c->r[0]); // 8021D2B8
  W32(c->r[25]+0x00000024u,c->r[0]); // 8021D2BC
  if (crb(c,2)) { goto L_8021D2C8; } // 8021D2C0
  c->r[27]=c->r[27]+0xFFFFFFE0u; // 8021D2C4
L_8021D2C8:;
  c->lr=0x8021D2CCu; f_800797AC(c); // 8021D2C8
  c->r[0]=R32(c->r[3]+0x00000000u); // 8021D2CC
  c->r[0]=addc(c,c->r[0],0x00000001u,0); cr0(c,c->r[0]); // 8021D2D0
  W32(c->r[3]+0x00000000u,c->r[0]); // 8021D2D4
  if (!crb(c,2)) { goto L_8021D2E4; } // 8021D2D8
  c->r[0]=0u+0x00000001u; // 8021D2DC
  W32(c->r[3]+0x00000000u,c->r[0]); // 8021D2E0
L_8021D2E4:;
  c->r[7]=R32(c->r[3]+0x00000004u); // 8021D2E4
  c->r[5]=0u+0x0000012Cu; // 8021D2E8
  c->r[4]=c->r[7]+0x00000001u; // 8021D2EC
  c->r[0]=divwu(c->r[4],c->r[5]); // 8021D2F0
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)c->r[5]); // 8021D2F4
  c->r[6]=c->r[4]-c->r[0]; // 8021D2F8
  goto L_8021D348; // 8021D2FC
L_8021D300:;
  c->r[0]=rotl(c->r[6],3)&0xFFFFFFF8u; // 8021D300
  c->r[4]=c->r[3]+c->r[0]; // 8021D304
  c->r[0]=R32(c->r[4]+0x00000008u); // 8021D308
  cmps(c,0,(int32_t)c->r[0],0); // 8021D30C
  if (!crb(c,2)) { goto L_8021D338; } // 8021D310
  W32(c->r[3]+0x00000004u,c->r[6]); // 8021D314
  c->r[0]=R32(c->r[3]+0x00000000u); // 8021D318
  W32(c->r[4]+0x00000008u,c->r[0]); // 8021D31C
  W32(c->r[4]+0x0000000Cu,c->r[27]); // 8021D320
  c->r[4]=R32(c->r[3]+0x00000000u); // 8021D324
  c->r[0]=R32(c->r[3]+0x00000004u); // 8021D328
  W32(c->r[1]+0x00000010u,c->r[4]); // 8021D32C
  W32(c->r[1]+0x00000014u,c->r[0]); // 8021D330
  goto L_8021D364; // 8021D334
L_8021D338:;
  c->r[4]=c->r[6]+0x00000001u; // 8021D338
  c->r[0]=divwu(c->r[4],c->r[5]); // 8021D33C
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)c->r[5]); // 8021D340
  c->r[6]=c->r[4]-c->r[0]; // 8021D344
L_8021D348:;
  cmpu(c,0,c->r[6],c->r[7]); // 8021D348
  if (!crb(c,2)) { IRQCHK(c); goto L_8021D300; } // 8021D34C
  c->r[0]=0u+0x00000000u; // 8021D350
  W32(c->r[1]+0x00000008u,c->r[0]); // 8021D354
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 8021D358
  W32(c->r[1]+0x00000010u,c->r[0]); // 8021D35C
  W32(c->r[1]+0x00000014u,c->r[0]); // 8021D360
L_8021D364:;
  c->r[4]=R32(c->r[1]+0x00000010u); // 8021D364
  c->r[23]=c->r[25]+0x00000028u; // 8021D368
  c->r[0]=R32(c->r[1]+0x00000014u); // 8021D36C
  c->r[3]=c->r[23]|c->r[23]; // 8021D370
  W32(c->r[1]+0x00000018u,c->r[4]); // 8021D374
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 8021D378
  W32(c->r[25]+0x00000020u,c->r[4]); // 8021D37C
  W32(c->r[25]+0x00000024u,c->r[0]); // 8021D380
  c->lr=0x8021D388u; f_800506C0(c); // 8021D384
  cmps(c,0,(int32_t)c->r[23],0); // 8021D388
  c->r[3]=c->r[23]|c->r[23]; // 8021D38C
  if (crb(c,2)) { goto L_8021D398; } // 8021D390
  c->r[3]=c->r[23]+0xFFFFFFD8u; // 8021D394
L_8021D398:;
  c->r[27]=0u+0x00000001u; // 8021D398
  W32(c->r[23]+0x00000008u,c->r[3]); // 8021D39C
  W8(c->r[23]+0x0000000Cu,c->r[27]); // 8021D3A0
  c->r[0]=R8(c->r[13]+0xFFFFBE09u); // 8021D3A4
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 8021D3A8
  if (!crb(c,2)) { goto L_8021D3EC; } // 8021D3AC
  c->r[24]=0u+0x80740000u; // 8021D3B0
  c->r[3]=c->r[24]+0x000074BCu; // 8021D3B4
  c->lr=0x8021D3BCu; f_800506C0(c); // 8021D3B8
  c->r[6]=0u+0x806D0000u; // 8021D3BC
  c->r[4]=0u+0x80060000u; // 8021D3C0
  c->r[6]=c->r[6]+0xFFFFE3A0u; // 8021D3C4
  c->r[3]=c->r[24]+0x000074BCu; // 8021D3C8
  c->r[0]=c->r[6]+0x00000008u; // 8021D3CC
  c->r[5]=0u+0x80750000u; // 8021D3D0
  W32(c->r[3]+0x00000010u,c->r[6]); // 8021D3D4
  c->r[4]=c->r[4]+0x000057D4u; // 8021D3D8
  c->r[5]=c->r[5]+0x000054E0u; // 8021D3DC
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 8021D3E0
  c->lr=0x8021D3E8u; f_803A92B8(c); // 8021D3E4
  W8(c->r[13]+0xFFFFBE09u,c->r[27]); // 8021D3E8
L_8021D3EC:;
  c->r[3]=0u+0x80740000u; // 8021D3EC
  c->r[5]=c->r[23]|c->r[23]; // 8021D3F0
  c->r[3]=c->r[3]+0x000074BCu; // 8021D3F4
  c->r[4]=c->r[3]|c->r[3]; // 8021D3F8
  c->lr=0x8021D400u; f_802DDCA8(c); // 8021D3FC
  c->r[24]=c->r[25]+0x00000038u; // 8021D400
  c->r[3]=c->r[24]|c->r[24]; // 8021D404
  c->lr=0x8021D40Cu; f_800506C0(c); // 8021D408
  cmps(c,0,(int32_t)c->r[24],0); // 8021D40C
  c->r[0]=c->r[24]|c->r[24]; // 8021D410
  if (crb(c,2)) { goto L_8021D41C; } // 8021D414
  c->r[0]=c->r[24]+0xFFFFFFC8u; // 8021D418
L_8021D41C:;
  c->r[27]=c->r[25]+0x00000044u; // 8021D41C
  W32(c->r[24]+0x00000008u,c->r[0]); // 8021D420
  c->r[3]=c->r[27]|c->r[27]; // 8021D424
  c->lr=0x8021D42Cu; f_800506C0(c); // 8021D428
  cmps(c,0,(int32_t)c->r[27],0); // 8021D42C
  c->r[0]=c->r[27]|c->r[27]; // 8021D430
  if (crb(c,2)) { goto L_8021D43C; } // 8021D434
  c->r[0]=c->r[27]+0xFFFFFFBCu; // 8021D438
L_8021D43C:;
  c->r[3]=0u+0x806F0000u; // 8021D43C
  c->r[24]=0u+0x00000000u; // 8021D440
  c->r[3]=c->r[3]+0x00000E80u; // 8021D444
  W32(c->r[27]+0x00000008u,c->r[0]); // 8021D448
  W8(c->r[27]+0x0000000Cu,c->r[24]); // 8021D44C
  W32(c->r[25]+0x0000001Cu,c->r[3]); // 8021D450
  W32(c->r[25]+0x00000058u,c->r[24]); // 8021D454
  W32(c->r[25]+0x00000064u,c->r[24]); // 8021D458
  c->lr=0x8021D460u; f_8007BDCC(c); // 8021D45C
  c->r[0]=c->r[13]+0xFFFF8114u; // 8021D460
  W32(c->r[25]+0x0000009Cu,c->r[3]); // 8021D464
  W32(c->r[25]+0x000000A0u,c->r[0]); // 8021D468
  W32(c->r[25]+0x000000A4u,c->r[24]); // 8021D46C
  c->r[0]=R8(c->r[13]+0xFFFFBE54u); // 8021D470
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 8021D474
  if (!crb(c,2)) { goto L_8021D498; } // 8021D478
  c->r[4]=R32(c->r[13]+0xFFFFBCC4u); // 8021D47C
  c->r[0]=0u+0x00000001u; // 8021D480
  W32(c->r[13]+0xFFFFBDF8u,c->r[4]); // 8021D484
  c->r[3]=c->r[4]+0x00000001u; // 8021D488
  W32(c->r[13]+0xFFFFBCC4u,c->r[3]); // 8021D48C
  W32(c->r[13]+0xFFFFBE50u,c->r[4]); // 8021D490
  W8(c->r[13]+0xFFFFBE54u,c->r[0]); // 8021D494
L_8021D498:;
  c->r[4]=R32(c->r[13]+0xFFFFBE50u); // 8021D498
  c->r[3]=c->r[13]+0xFFFF8110u; // 8021D49C
  c->r[0]=0u+0x00000000u; // 8021D4A0
  W32(c->r[25]+0x000000A8u,c->r[4]); // 8021D4A4
  W32(c->r[25]+0x000000ACu,c->r[3]); // 8021D4A8
  W32(c->r[25]+0x000000B0u,c->r[0]); // 8021D4AC
  c->r[0]=R8(c->r[13]+0xFFFFBE5Cu); // 8021D4B0
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 8021D4B4
  if (!crb(c,2)) { goto L_8021D4D8; } // 8021D4B8
  c->r[4]=R32(c->r[13]+0xFFFFBCC4u); // 8021D4BC
  c->r[0]=0u+0x00000001u; // 8021D4C0
  W32(c->r[13]+0xFFFFBDF8u,c->r[4]); // 8021D4C4
  c->r[3]=c->r[4]+0x00000001u; // 8021D4C8
  W32(c->r[13]+0xFFFFBCC4u,c->r[3]); // 8021D4CC
  W32(c->r[13]+0xFFFFBE58u,c->r[4]); // 8021D4D0
  W8(c->r[13]+0xFFFFBE5Cu,c->r[0]); // 8021D4D4
L_8021D4D8:;
  c->r[4]=R32(c->r[13]+0xFFFFBE58u); // 8021D4D8
  c->r[3]=c->r[13]+0xFFFF810Cu; // 8021D4DC
  c->r[0]=0u+0x00000000u; // 8021D4E0
  W32(c->r[25]+0x000000B4u,c->r[4]); // 8021D4E4
  W32(c->r[25]+0x000000B8u,c->r[3]); // 8021D4E8
  W32(c->r[25]+0x000000BCu,c->r[0]); // 8021D4EC
  c->r[0]=R8(c->r[13]+0xFFFFBE64u); // 8021D4F0
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 8021D4F4
  if (!crb(c,2)) { goto L_8021D518; } // 8021D4F8
  c->r[4]=R32(c->r[13]+0xFFFFBCC4u); // 8021D4FC
  c->r[0]=0u+0x00000001u; // 8021D500
  W32(c->r[13]+0xFFFFBDF8u,c->r[4]); // 8021D504
  c->r[3]=c->r[4]+0x00000001u; // 8021D508
  W32(c->r[13]+0xFFFFBCC4u,c->r[3]); // 8021D50C
  W32(c->r[13]+0xFFFFBE60u,c->r[4]); // 8021D510
  W8(c->r[13]+0xFFFFBE64u,c->r[0]); // 8021D514
L_8021D518:;
  c->r[4]=R32(c->r[13]+0xFFFFBE60u); // 8021D518
  c->r[3]=c->r[13]+0xFFFF8108u; // 8021D51C
  c->r[0]=0u+0x00000000u; // 8021D520
  W32(c->r[25]+0x000000C0u,c->r[4]); // 8021D524
  W32(c->r[25]+0x000000C4u,c->r[3]); // 8021D528
  W32(c->r[25]+0x000000C8u,c->r[0]); // 8021D52C
  c->r[0]=R8(c->r[13]+0xFFFFBE6Cu); // 8021D530
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 8021D534
  if (!crb(c,2)) { goto L_8021D558; } // 8021D538
  c->r[4]=R32(c->r[13]+0xFFFFBCC4u); // 8021D53C
  c->r[0]=0u+0x00000001u; // 8021D540
  W32(c->r[13]+0xFFFFBDF8u,c->r[4]); // 8021D544
  c->r[3]=c->r[4]+0x00000001u; // 8021D548
  W32(c->r[13]+0xFFFFBCC4u,c->r[3]); // 8021D54C
  W32(c->r[13]+0xFFFFBE68u,c->r[4]); // 8021D550
  W8(c->r[13]+0xFFFFBE6Cu,c->r[0]); // 8021D554
L_8021D558:;
  c->r[3]=R32(c->r[13]+0xFFFFBE68u); // 8021D558
  c->r[0]=c->r[13]+0xFFFF8104u; // 8021D55C
  c->r[24]=0u+0x00000000u; // 8021D560
  W32(c->r[25]+0x000000CCu,c->r[3]); // 8021D564
  c->r[3]=c->r[25]+0x000000D8u; // 8021D568
  W32(c->r[25]+0x000000D0u,c->r[0]); // 8021D56C
  W32(c->r[25]+0x000000D4u,c->r[24]); // 8021D570
  c->lr=0x8021D578u; f_800506C0(c); // 8021D574
  c->r[4]=0u+0x806F0000u; // 8021D578
  c->r[3]=0u+0x00000006u; // 8021D57C
  c->r[4]=c->r[4]+0x000007A0u; // 8021D580
  c->r[27]=c->r[25]+0x000000FCu; // 8021D584
  c->r[0]=c->r[4]+0x00000024u; // 8021D588
  W32(c->r[25]+0x000000E8u,c->r[3]); // 8021D58C
  c->r[3]=c->r[27]+0x0000000Cu; // 8021D590
  W32(c->r[25]+0x000000ECu,c->r[24]); // 8021D594
  W32(c->r[25]+0x000000F8u,c->r[24]); // 8021D598
  W32(c->r[25]+0x000000FCu,c->r[4]); // 8021D59C
  W32(c->r[25]+0x00000100u,c->r[0]); // 8021D5A0
  c->lr=0x8021D5A8u; f_800506C0(c); // 8021D5A4
  c->r[3]=c->r[27]+0x00000018u; // 8021D5A8
  c->lr=0x8021D5B0u; f_800506C0(c); // 8021D5AC
  W32(c->r[27]+0x00000024u,c->r[24]); // 8021D5B0
  c->r[3]=c->r[27]+0x000000B0u; // 8021D5B4
  c->lr=0x8021D5BCu; f_800506C0(c); // 8021D5B8
  c->r[12]=R32(c->r[27]+0x00000000u); // 8021D5BC
  c->r[3]=c->r[27]|c->r[27]; // 8021D5C0
  c->r[12]=R32(c->r[12]+0x0000003Cu); // 8021D5C4
  c->ctr=c->r[12]; // 8021D5C8
  if (true) { c->lr=0x8021D5D0u; dispatch(c,c->ctr); } // 8021D5CC
  c->r[0]=R8(c->r[13]+0xFFFFBE74u); // 8021D5D0
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 8021D5D4
  if (!crb(c,2)) { goto L_8021D5F4; } // 8021D5D8
  c->r[3]=R32(c->r[13]+0xFFFFBE78u); // 8021D5DC
  c->r[0]=0u+0x00000001u; // 8021D5E0
  W32(c->r[13]+0xFFFFBE70u,c->r[3]); // 8021D5E4
  c->r[3]=c->r[3]+0x00000001u; // 8021D5E8
  W32(c->r[13]+0xFFFFBE78u,c->r[3]); // 8021D5EC
  W8(c->r[13]+0xFFFFBE74u,c->r[0]); // 8021D5F0
L_8021D5F4:;
  c->r[3]=R32(c->r[13]+0xFFFFBE70u); // 8021D5F4
  c->r[5]=0u+0x806F0000u; // 8021D5F8
  c->r[5]=c->r[5]+0x000007F8u; // 8021D5FC
  c->r[0]=0u+0x00000032u; // 8021D600
  c->r[4]=c->r[5]+0x00000024u; // 8021D604
  W32(c->r[27]+0x00000008u,c->r[3]); // 8021D608
  c->r[6]=0u+0x00000000u; // 8021D60C
  c->r[3]=0u+0x00000000u; // 8021D610
  W32(c->r[27]+0x00000000u,c->r[5]); // 8021D614
  W32(c->r[27]+0x00000004u,c->r[4]); // 8021D618
  c->ctr=c->r[0]; // 8021D61C
L_8021D620:;
  c->r[4]=c->r[27]+c->r[3]; // 8021D620
  c->r[3]=c->r[3]+0x00000004u; // 8021D624
  W32(c->r[4]+0x0000014Cu,c->r[6]); // 8021D628
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8021D620; } // 8021D62C
  c->r[3]=0u+0x806D0000u; // 8021D630
  c->r[7]=0u+0x00000000u; // 8021D634
  c->r[3]=c->r[3]+0x00003868u; // 8021D638
  c->r[0]=0u+0x0000000Au; // 8021D63C
  c->r[4]=c->r[3]+0x00000024u; // 8021D640
  W32(c->r[27]+0x00000000u,c->r[3]); // 8021D644
  c->r[8]=0u+0x00000000u; // 8021D648
  c->r[3]=0u+0x00000000u; // 8021D64C
  W32(c->r[27]+0x00000004u,c->r[4]); // 8021D650
  c->r[6]=0u+0xFFFFFFFFu; // 8021D654
  W32(c->r[25]+0x00000314u,c->r[7]); // 8021D658
  W8(c->r[25]+0x0000005Cu,c->r[7]); // 8021D65C
  W32(c->r[25]+0x00000054u,c->r[7]); // 8021D660
  W32(c->r[25]+0x00000310u,c->r[25]); // 8021D664
  c->ctr=c->r[0]; // 8021D668
L_8021D66C:;
  c->r[5]=c->r[25]+c->r[3]; // 8021D66C
  c->r[4]=c->r[25]+c->r[8]; // 8021D670
  W32(c->r[5]+0x00000068u,c->r[6]); // 8021D674
  c->r[8]=c->r[8]+0x00000001u; // 8021D678
  c->r[3]=c->r[3]+0x00000004u; // 8021D67C
  W8(c->r[4]+0x00000090u,c->r[7]); // 8021D680
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8021D66C; } // 8021D684
  c->r[23]=c->r[25]+0x00000318u; // 8021D688
  c->r[3]=c->r[23]|c->r[23]; // 8021D68C
  c->lr=0x8021D694u; f_800506C0(c); // 8021D690
  cmps(c,0,(int32_t)c->r[23],0); // 8021D694
  c->r[3]=c->r[23]|c->r[23]; // 8021D698
  if (crb(c,2)) { goto L_8021D6A4; } // 8021D69C
  c->r[3]=c->r[23]+0xFFFFFCE8u; // 8021D6A0
L_8021D6A4:;
  c->r[28]=0u+0x00000001u; // 8021D6A4
  W32(c->r[23]+0x00000008u,c->r[3]); // 8021D6A8
  W8(c->r[23]+0x0000000Cu,c->r[28]); // 8021D6AC
  c->r[0]=R8(c->r[13]+0xFFFFBE9Eu); // 8021D6B0
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 8021D6B4
  if (!crb(c,2)) { goto L_8021D6F8; } // 8021D6B8
  c->r[27]=0u+0x80750000u; // 8021D6BC
  c->r[3]=c->r[27]+0xFFFF816Cu; // 8021D6C0
  c->lr=0x8021D6C8u; f_800506C0(c); // 8021D6C4
  c->r[6]=0u+0x806D0000u; // 8021D6C8
  c->r[4]=0u+0x80080000u; // 8021D6CC
  c->r[6]=c->r[6]+0x000038D8u; // 8021D6D0
  c->r[3]=c->r[27]+0xFFFF816Cu; // 8021D6D4
  c->r[0]=c->r[6]+0x00000008u; // 8021D6D8
  c->r[5]=0u+0x80750000u; // 8021D6DC
  W32(c->r[3]+0x00000010u,c->r[6]); // 8021D6E0
  c->r[4]=c->r[4]+0xFFFF9844u; // 8021D6E4
  c->r[5]=c->r[5]+0x000054D4u; // 8021D6E8
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 8021D6EC
  c->lr=0x8021D6F4u; f_803A92B8(c); // 8021D6F0
  W8(c->r[13]+0xFFFFBE9Eu,c->r[28]); // 8021D6F4
L_8021D6F8:;
  c->r[3]=0u+0x80750000u; // 8021D6F8
  c->r[5]=c->r[23]|c->r[23]; // 8021D6FC
  c->r[3]=c->r[3]+0xFFFF816Cu; // 8021D700
  c->r[4]=c->r[3]|c->r[3]; // 8021D704
  c->lr=0x8021D70Cu; f_802DDCA8(c); // 8021D708
  c->r[3]=0u+0x806D0000u; // 8021D70C
  c->r[0]=0u+0x00000000u; // 8021D710
  c->r[3]=c->r[3]+0xFFFFD974u; // 8021D714
  c->r[5]=0u+0xFFFFFFFFu; // 8021D718
  c->r[4]=0u+0x00000001u; // 8021D71C
  c->r[24]=c->r[25]+0x0000032Cu; // 8021D720
  W32(c->r[25]+0x0000001Cu,c->r[3]); // 8021D724
  c->r[3]=c->r[24]|c->r[24]; // 8021D728
  W32(c->r[25]+0x00000328u,c->r[5]); // 8021D72C
  W32(c->r[25]+0x000000ECu,c->r[4]); // 8021D730
  W32(c->r[25]+0x00000054u,c->r[0]); // 8021D734
  W32(c->r[25]+0x00000314u,c->r[0]); // 8021D738
  c->lr=0x8021D740u; f_800506C0(c); // 8021D73C
  cmps(c,0,(int32_t)c->r[24],0); // 8021D740
  c->r[3]=c->r[24]|c->r[24]; // 8021D744
  if (crb(c,2)) { goto L_8021D750; } // 8021D748
  c->r[3]=c->r[24]+0xFFFFFCD4u; // 8021D74C
L_8021D750:;
  c->r[27]=0u+0x00000001u; // 8021D750
  W32(c->r[24]+0x00000008u,c->r[3]); // 8021D754
  W8(c->r[24]+0x0000000Cu,c->r[27]); // 8021D758
  c->r[0]=R8(c->r[13]+0xFFFFBBA9u); // 8021D75C
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 8021D760
  if (!crb(c,2)) { goto L_8021D7A4; } // 8021D764
  c->r[26]=0u+0x80730000u; // 8021D768
  c->r[3]=c->r[26]+0x000073A8u; // 8021D76C
  c->lr=0x8021D774u; f_800506C0(c); // 8021D770
  c->r[6]=0u+0x806D0000u; // 8021D774
  c->r[4]=0u+0x80050000u; // 8021D778
  c->r[6]=c->r[6]+0xFFFFC8C8u; // 8021D77C
  c->r[3]=c->r[26]+0x000073A8u; // 8021D780
  c->r[0]=c->r[6]+0x00000008u; // 8021D784
  c->r[5]=0u+0x80750000u; // 8021D788
  W32(c->r[3]+0x00000010u,c->r[6]); // 8021D78C
  c->r[4]=c->r[4]+0xFFFFCF9Cu; // 8021D790
  c->r[5]=c->r[5]+0x000054C8u; // 8021D794
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 8021D798
  c->lr=0x8021D7A0u; f_803A92B8(c); // 8021D79C
  W8(c->r[13]+0xFFFFBBA9u,c->r[27]); // 8021D7A0
L_8021D7A4:;
  c->r[3]=0u+0x80730000u; // 8021D7A4
  c->r[5]=c->r[24]|c->r[24]; // 8021D7A8
  c->r[3]=c->r[3]+0x000073A8u; // 8021D7AC
  c->r[4]=c->r[3]|c->r[3]; // 8021D7B0
  c->lr=0x8021D7B8u; f_802DDCA8(c); // 8021D7B4
  c->r[24]=c->r[25]+0x0000033Cu; // 8021D7B8
  c->r[3]=c->r[24]|c->r[24]; // 8021D7BC
  c->lr=0x8021D7C4u; f_800506C0(c); // 8021D7C0
  cmps(c,0,(int32_t)c->r[24],0); // 8021D7C4
  c->r[3]=c->r[24]|c->r[24]; // 8021D7C8
  if (crb(c,2)) { goto L_8021D7D4; } // 8021D7CC
  c->r[3]=c->r[24]+0xFFFFFCC4u; // 8021D7D0
L_8021D7D4:;
  c->r[27]=0u+0x00000001u; // 8021D7D4
  W32(c->r[24]+0x00000008u,c->r[3]); // 8021D7D8
  W8(c->r[24]+0x0000000Cu,c->r[27]); // 8021D7DC
  c->r[0]=R8(c->r[13]+0xFFFFBE9Du); // 8021D7E0
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 8021D7E4
  if (!crb(c,2)) { goto L_8021D828; } // 8021D7E8
  c->r[26]=0u+0x80750000u; // 8021D7EC
  c->r[3]=c->r[26]+0xFFFF8158u; // 8021D7F0
  c->lr=0x8021D7F8u; f_800506C0(c); // 8021D7F4
  c->r[6]=0u+0x806D0000u; // 8021D7F8
  c->r[4]=0u+0x80080000u; // 8021D7FC
  c->r[6]=c->r[6]+0x000038F0u; // 8021D800
  c->r[3]=c->r[26]+0xFFFF8158u; // 8021D804
  c->r[0]=c->r[6]+0x00000008u; // 8021D808
  c->r[5]=0u+0x80750000u; // 8021D80C
  W32(c->r[3]+0x00000010u,c->r[6]); // 8021D810
  c->r[4]=c->r[4]+0xFFFF98C0u; // 8021D814
  c->r[5]=c->r[5]+0x000054BCu; // 8021D818
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 8021D81C
  c->lr=0x8021D824u; f_803A92B8(c); // 8021D820
  W8(c->r[13]+0xFFFFBE9Du,c->r[27]); // 8021D824
L_8021D828:;
  c->r[3]=0u+0x80750000u; // 8021D828
  c->r[5]=c->r[24]|c->r[24]; // 8021D82C
  c->r[3]=c->r[3]+0xFFFF8158u; // 8021D830
  c->r[4]=c->r[3]|c->r[3]; // 8021D834
  c->lr=0x8021D83Cu; f_802DDCA8(c); // 8021D838
  c->r[3]=0u+0x806D0000u; // 8021D83C
  W32(c->r[25]+0x00000054u,c->r[30]); // 8021D840
  c->r[3]=c->r[3]+0x00004AE8u; // 8021D844
  W32(c->r[25]+0x0000001Cu,c->r[3]); // 8021D848
  c->r[0]=R8(c->r[13]+0xFFFFBC60u); // 8021D84C
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 8021D850
  if (!crb(c,2)) { goto L_8021D870; } // 8021D854
  c->r[3]=R32(c->r[13]+0xFFFFBC48u); // 8021D858
  c->r[0]=0u+0x00000001u; // 8021D85C
  W32(c->r[13]+0xFFFFBC5Cu,c->r[3]); // 8021D860
  c->r[3]=c->r[3]+0x00000001u; // 8021D864
  W32(c->r[13]+0xFFFFBC48u,c->r[3]); // 8021D868
  W8(c->r[13]+0xFFFFBC60u,c->r[0]); // 8021D86C
L_8021D870:;
  c->r[0]=R32(c->r[13]+0xFFFFBC5Cu); // 8021D870
  W32(c->r[25]+0x00000328u,c->r[0]); // 8021D874
  c->r[0]=R8(c->r[13]+0xFFFFD494u); // 8021D878
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 8021D87C
  if (!crb(c,2)) { goto L_8021D89C; } // 8021D880
  c->r[3]=R32(c->r[13]+0xFFFFBDACu); // 8021D884
  c->r[0]=0u+0x00000001u; // 8021D888
  W32(c->r[13]+0xFFFFD490u,c->r[3]); // 8021D88C
  c->r[3]=c->r[3]+0x00000001u; // 8021D890
  W32(c->r[13]+0xFFFFBDACu,c->r[3]); // 8021D894
  W8(c->r[13]+0xFFFFD494u,c->r[0]); // 8021D898
L_8021D89C:;
  c->r[0]=R32(c->r[13]+0xFFFFD490u); // 8021D89C
  W32(c->r[25]+0x0000034Cu,c->r[0]); // 8021D8A0
  c->r[0]=R8(c->r[13]+0xFFFFCD04u); // 8021D8A4
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 8021D8A8
  if (!crb(c,2)) { goto L_8021D8C8; } // 8021D8AC
  c->r[3]=R32(c->r[13]+0xFFFFBF90u); // 8021D8B0
  c->r[0]=0u+0x00000001u; // 8021D8B4
  W32(c->r[13]+0xFFFFCD00u,c->r[3]); // 8021D8B8
  c->r[3]=c->r[3]+0x00000001u; // 8021D8BC
  W32(c->r[13]+0xFFFFBF90u,c->r[3]); // 8021D8C0
  W8(c->r[13]+0xFFFFCD04u,c->r[0]); // 8021D8C4
L_8021D8C8:;
  c->r[0]=R32(c->r[13]+0xFFFFCD00u); // 8021D8C8
  c->r[5]=0u+0x806D0000u; // 8021D8CC
  c->r[5]=c->r[5]+0xFFFFE468u; // 8021D8D0
  W32(c->r[25]+0x00000350u,c->r[0]); // 8021D8D4
  c->r[3]=c->r[25]+0x000003B0u; // 8021D8D8
  c->r[4]=0u+0x00000000u; // 8021D8DC
  W32(c->r[25]+0x00000400u,c->r[5]); // 8021D8E0
  c->r[5]=0u+0x00000050u; // 8021D8E4
  c->lr=0x8021D8ECu; f_800043EC(c); // 8021D8E8
  c->r[4]=0u+0x806D0000u; // 8021D8EC
  c->r[3]=c->r[25]+0x00000450u; // 8021D8F0
  c->r[4]=c->r[4]+0xFFFFE170u; // 8021D8F4
  W32(c->r[25]+0x0000001Cu,c->r[4]); // 8021D8F8
  c->r[0]=c->r[4]+0x00000044u; // 8021D8FC
  W32(c->r[25]+0x00000400u,c->r[0]); // 8021D900
  c->lr=0x8021D908u; f_8007BDFC(c); // 8021D904
  c->r[3]=c->r[25]+0x000004C4u; // 8021D908
  c->lr=0x8021D910u; f_8007BDFC(c); // 8021D90C
  c->r[3]=c->r[25]+0x00000538u; // 8021D910
  c->r[4]=0u+0x00000000u; // 8021D914
  c->r[5]=0u+0x00000008u; // 8021D918
  c->lr=0x8021D920u; f_800043EC(c); // 8021D91C
  c->r[23]=R32(c->r[13]+0xFFFFDBDCu); // 8021D920
  cmps(c,0,(int32_t)c->r[23],0); // 8021D924
  if (crb(c,2)) { goto L_8021D96C; } // 8021D928
  c->lr=0x8021D930u; f_8021E02C(c); // 8021D92C
  c->r[26]=c->r[3]|c->r[3]; // 8021D930
  c->lr=0x8021D938u; f_8007BDCC(c); // 8021D934
  c->r[4]=(uint32_t)((int32_t)c->r[26]*(int32_t)80); // 8021D938
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 8021D93C
  c->r[5]=0u+0x80220000u; // 8021D940
  c->r[3]=rotl(c->r[26],2)&0xFFFFFFFCu; // 8021D944
  c->r[4]=c->r[23]+c->r[4]; // 8021D948
  c->r[5]=c->r[5]+0xFFFFE0C4u; // 8021D94C
  c->r[4]=c->r[4]+c->r[0]; // 8021D950
  W32(c->r[4]+0x000001CCu,c->r[5]); // 8021D954
  c->r[0]=R32(c->r[23]+c->r[3]); // 8021D958
  cmpu(c,0,c->r[0],0x0000000Cu); // 8021D95C
  if (!crb(c,0)) { goto L_8021D96C; } // 8021D960
  c->r[0]=0u+0x0000000Cu; // 8021D964
  W32(c->r[23]+c->r[3],c->r[0]); // 8021D968
L_8021D96C:;
  c->r[26]=R32(c->r[13]+0xFFFFDBDCu); // 8021D96C
  cmps(c,0,(int32_t)c->r[26],0); // 8021D970
  if (crb(c,2)) { goto L_8021D9DC; } // 8021D974
  c->lr=0x8021D97Cu; f_8021E02C(c); // 8021D978
  c->r[0]=R8(c->r[13]+0xFFFFBEACu); // 8021D97C
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 8021D980
  if (!crb(c,2)) { goto L_8021D9A4; } // 8021D984
  c->r[5]=R32(c->r[13]+0xFFFFBCC4u); // 8021D988
  c->r[0]=0u+0x00000001u; // 8021D98C
  W32(c->r[13]+0xFFFFBDF8u,c->r[5]); // 8021D990
  c->r[4]=c->r[5]+0x00000001u; // 8021D994
  W32(c->r[13]+0xFFFFBCC4u,c->r[4]); // 8021D998
  W32(c->r[13]+0xFFFFBEA8u,c->r[5]); // 8021D99C
  W8(c->r[13]+0xFFFFBEACu,c->r[0]); // 8021D9A0
L_8021D9A4:;
  c->r[4]=(uint32_t)((int32_t)c->r[3]*(int32_t)80); // 8021D9A4
  c->r[0]=R32(c->r[13]+0xFFFFBEA8u); // 8021D9A8
  c->r[5]=0u+0x80220000u; // 8021D9AC
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 8021D9B0
  c->r[4]=c->r[26]+c->r[4]; // 8021D9B4
  c->r[5]=c->r[5]+0xFFFFE0C0u; // 8021D9B8
  c->r[4]=c->r[4]+c->r[0]; // 8021D9BC
  c->r[3]=rotl(c->r[3],2)&0xFFFFFFFCu; // 8021D9C0
  W32(c->r[4]+0x000001CCu,c->r[5]); // 8021D9C4
  c->r[0]=R32(c->r[26]+c->r[3]); // 8021D9C8
  cmpu(c,0,c->r[0],0x00000018u); // 8021D9CC
  if (!crb(c,0)) { goto L_8021D9DC; } // 8021D9D0
  c->r[0]=0u+0x00000018u; // 8021D9D4
  W32(c->r[26]+c->r[3],c->r[0]); // 8021D9D8
L_8021D9DC:;
  c->r[26]=R32(c->r[13]+0xFFFFDBDCu); // 8021D9DC
  cmps(c,0,(int32_t)c->r[26],0); // 8021D9E0
  if (crb(c,2)) { goto L_8021DA4C; } // 8021D9E4
  c->lr=0x8021D9ECu; f_8021E02C(c); // 8021D9E8
  c->r[0]=R8(c->r[13]+0xFFFFBCD0u); // 8021D9EC
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 8021D9F0
  if (!crb(c,2)) { goto L_8021DA14; } // 8021D9F4
  c->r[5]=R32(c->r[13]+0xFFFFBCC4u); // 8021D9F8
  c->r[0]=0u+0x00000001u; // 8021D9FC
  W32(c->r[13]+0xFFFFBDF8u,c->r[5]); // 8021DA00
  c->r[4]=c->r[5]+0x00000001u; // 8021DA04
  W32(c->r[13]+0xFFFFBCC4u,c->r[4]); // 8021DA08
  W32(c->r[13]+0xFFFFBCCCu,c->r[5]); // 8021DA0C
  W8(c->r[13]+0xFFFFBCD0u,c->r[0]); // 8021DA10
L_8021DA14:;
  c->r[4]=(uint32_t)((int32_t)c->r[3]*(int32_t)80); // 8021DA14
  c->r[0]=R32(c->r[13]+0xFFFFBCCCu); // 8021DA18
  c->r[5]=0u+0x80220000u; // 8021DA1C
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 8021DA20
  c->r[4]=c->r[26]+c->r[4]; // 8021DA24
  c->r[5]=c->r[5]+0xFFFFE0BCu; // 8021DA28
  c->r[4]=c->r[4]+c->r[0]; // 8021DA2C
  c->r[3]=rotl(c->r[3],2)&0xFFFFFFFCu; // 8021DA30
  W32(c->r[4]+0x000001CCu,c->r[5]); // 8021DA34
  c->r[0]=R32(c->r[26]+c->r[3]); // 8021DA38
  cmpu(c,0,c->r[0],0x0000006Cu); // 8021DA3C
  if (!crb(c,0)) { goto L_8021DA4C; } // 8021DA40
  c->r[0]=0u+0x0000006Cu; // 8021DA44
  W32(c->r[26]+c->r[3],c->r[0]); // 8021DA48
L_8021DA4C:;
  c->r[26]=R32(c->r[13]+0xFFFFDBDCu); // 8021DA4C
  cmps(c,0,(int32_t)c->r[26],0); // 8021DA50
  if (crb(c,2)) { goto L_8021DABC; } // 8021DA54
  c->lr=0x8021DA5Cu; f_8021E02C(c); // 8021DA58
  c->r[0]=R8(c->r[13]+0xFFFFBD38u); // 8021DA5C
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 8021DA60
  if (!crb(c,2)) { goto L_8021DA84; } // 8021DA64
  c->r[5]=R32(c->r[13]+0xFFFFBCC4u); // 8021DA68
  c->r[0]=0u+0x00000001u; // 8021DA6C
  W32(c->r[13]+0xFFFFBDF8u,c->r[5]); // 8021DA70
  c->r[4]=c->r[5]+0x00000001u; // 8021DA74
  W32(c->r[13]+0xFFFFBCC4u,c->r[4]); // 8021DA78
  W32(c->r[13]+0xFFFFBD34u,c->r[5]); // 8021DA7C
  W8(c->r[13]+0xFFFFBD38u,c->r[0]); // 8021DA80
L_8021DA84:;
  c->r[4]=(uint32_t)((int32_t)c->r[3]*(int32_t)80); // 8021DA84
  c->r[0]=R32(c->r[13]+0xFFFFBD34u); // 8021DA88
  c->r[5]=0u+0x80220000u; // 8021DA8C
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 8021DA90
  c->r[4]=c->r[26]+c->r[4]; // 8021DA94
  c->r[5]=c->r[5]+0xFFFFE0B8u; // 8021DA98
  c->r[4]=c->r[4]+c->r[0]; // 8021DA9C
  c->r[3]=rotl(c->r[3],2)&0xFFFFFFFCu; // 8021DAA0
  W32(c->r[4]+0x000001CCu,c->r[5]); // 8021DAA4
  c->r[0]=R32(c->r[26]+c->r[3]); // 8021DAA8
  cmpu(c,0,c->r[0],0x0000002Cu); // 8021DAAC
  if (!crb(c,0)) { goto L_8021DABC; } // 8021DAB0
  c->r[0]=0u+0x0000002Cu; // 8021DAB4
  W32(c->r[26]+c->r[3],c->r[0]); // 8021DAB8
L_8021DABC:;
  c->r[26]=R32(c->r[13]+0xFFFFDBDCu); // 8021DABC
  cmps(c,0,(int32_t)c->r[26],0); // 8021DAC0
  if (crb(c,2)) { goto L_8021DB2C; } // 8021DAC4
  c->lr=0x8021DACCu; f_8021E02C(c); // 8021DAC8
  c->r[0]=R8(c->r[13]+0xFFFFBEB4u); // 8021DACC
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 8021DAD0
  if (!crb(c,2)) { goto L_8021DAF4; } // 8021DAD4
  c->r[5]=R32(c->r[13]+0xFFFFBCC4u); // 8021DAD8
  c->r[0]=0u+0x00000001u; // 8021DADC
  W32(c->r[13]+0xFFFFBDF8u,c->r[5]); // 8021DAE0
  c->r[4]=c->r[5]+0x00000001u; // 8021DAE4
  W32(c->r[13]+0xFFFFBCC4u,c->r[4]); // 8021DAE8
  W32(c->r[13]+0xFFFFBEB0u,c->r[5]); // 8021DAEC
  W8(c->r[13]+0xFFFFBEB4u,c->r[0]); // 8021DAF0
L_8021DAF4:;
  c->r[4]=(uint32_t)((int32_t)c->r[3]*(int32_t)80); // 8021DAF4
  c->r[0]=R32(c->r[13]+0xFFFFBEB0u); // 8021DAF8
  c->r[5]=0u+0x80220000u; // 8021DAFC
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 8021DB00
  c->r[4]=c->r[26]+c->r[4]; // 8021DB04
  c->r[5]=c->r[5]+0xFFFFE0B4u; // 8021DB08
  c->r[4]=c->r[4]+c->r[0]; // 8021DB0C
  c->r[3]=rotl(c->r[3],2)&0xFFFFFFFCu; // 8021DB10
  W32(c->r[4]+0x000001CCu,c->r[5]); // 8021DB14
  c->r[0]=R32(c->r[26]+c->r[3]); // 8021DB18
  cmpu(c,0,c->r[0],0x00000010u); // 8021DB1C
  if (!crb(c,0)) { goto L_8021DB2C; } // 8021DB20
  c->r[0]=0u+0x00000010u; // 8021DB24
  W32(c->r[26]+c->r[3],c->r[0]); // 8021DB28
L_8021DB2C:;
  c->r[26]=R32(c->r[13]+0xFFFFDBDCu); // 8021DB2C
  cmps(c,0,(int32_t)c->r[26],0); // 8021DB30
  if (crb(c,2)) { goto L_8021DB9C; } // 8021DB34
  c->lr=0x8021DB3Cu; f_8021E02C(c); // 8021DB38
  c->r[0]=R8(c->r[13]+0xFFFFBEBCu); // 8021DB3C
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 8021DB40
  if (!crb(c,2)) { goto L_8021DB64; } // 8021DB44
  c->r[5]=R32(c->r[13]+0xFFFFBCC4u); // 8021DB48
  c->r[0]=0u+0x00000001u; // 8021DB4C
  W32(c->r[13]+0xFFFFBDF8u,c->r[5]); // 8021DB50
  c->r[4]=c->r[5]+0x00000001u; // 8021DB54
  W32(c->r[13]+0xFFFFBCC4u,c->r[4]); // 8021DB58
  W32(c->r[13]+0xFFFFBEB8u,c->r[5]); // 8021DB5C
  W8(c->r[13]+0xFFFFBEBCu,c->r[0]); // 8021DB60
L_8021DB64:;
  c->r[4]=(uint32_t)((int32_t)c->r[3]*(int32_t)80); // 8021DB64
  c->r[0]=R32(c->r[13]+0xFFFFBEB8u); // 8021DB68
  c->r[5]=0u+0x80220000u; // 8021DB6C
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 8021DB70
  c->r[4]=c->r[26]+c->r[4]; // 8021DB74
  c->r[5]=c->r[5]+0xFFFFE0B0u; // 8021DB78
  c->r[4]=c->r[4]+c->r[0]; // 8021DB7C
  c->r[3]=rotl(c->r[3],2)&0xFFFFFFFCu; // 8021DB80
  W32(c->r[4]+0x000001CCu,c->r[5]); // 8021DB84
  c->r[0]=R32(c->r[26]+c->r[3]); // 8021DB88
  cmpu(c,0,c->r[0],0x0000005Cu); // 8021DB8C
  if (!crb(c,0)) { goto L_8021DB9C; } // 8021DB90
  c->r[0]=0u+0x0000005Cu; // 8021DB94
  W32(c->r[26]+c->r[3],c->r[0]); // 8021DB98
L_8021DB9C:;
  c->r[26]=R32(c->r[13]+0xFFFFDBDCu); // 8021DB9C
  cmps(c,0,(int32_t)c->r[26],0); // 8021DBA0
  if (crb(c,2)) { goto L_8021DC0C; } // 8021DBA4
  c->lr=0x8021DBACu; f_8021E02C(c); // 8021DBA8
  c->r[0]=R8(c->r[13]+0xFFFFBEC4u); // 8021DBAC
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 8021DBB0
  if (!crb(c,2)) { goto L_8021DBD4; } // 8021DBB4
  c->r[5]=R32(c->r[13]+0xFFFFBCC4u); // 8021DBB8
  c->r[0]=0u+0x00000001u; // 8021DBBC
  W32(c->r[13]+0xFFFFBDF8u,c->r[5]); // 8021DBC0
  c->r[4]=c->r[5]+0x00000001u; // 8021DBC4
  W32(c->r[13]+0xFFFFBCC4u,c->r[4]); // 8021DBC8
  W32(c->r[13]+0xFFFFBEC0u,c->r[5]); // 8021DBCC
  W8(c->r[13]+0xFFFFBEC4u,c->r[0]); // 8021DBD0
L_8021DBD4:;
  c->r[4]=(uint32_t)((int32_t)c->r[3]*(int32_t)80); // 8021DBD4
  c->r[0]=R32(c->r[13]+0xFFFFBEC0u); // 8021DBD8
  c->r[5]=0u+0x80220000u; // 8021DBDC
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 8021DBE0
  c->r[4]=c->r[26]+c->r[4]; // 8021DBE4
  c->r[5]=c->r[5]+0xFFFFE0ACu; // 8021DBE8
  c->r[4]=c->r[4]+c->r[0]; // 8021DBEC
  c->r[3]=rotl(c->r[3],2)&0xFFFFFFFCu; // 8021DBF0
  W32(c->r[4]+0x000001CCu,c->r[5]); // 8021DBF4
  c->r[0]=R32(c->r[26]+c->r[3]); // 8021DBF8
  cmpu(c,0,c->r[0],0x0000005Cu); // 8021DBFC
  if (!crb(c,0)) { goto L_8021DC0C; } // 8021DC00
  c->r[0]=0u+0x0000005Cu; // 8021DC04
  W32(c->r[26]+c->r[3],c->r[0]); // 8021DC08
L_8021DC0C:;
  c->r[26]=R32(c->r[13]+0xFFFFDBDCu); // 8021DC0C
  cmps(c,0,(int32_t)c->r[26],0); // 8021DC10
  if (crb(c,2)) { goto L_8021DC7C; } // 8021DC14
  c->lr=0x8021DC1Cu; f_8021E02C(c); // 8021DC18
  c->r[0]=R8(c->r[13]+0xFFFFBECCu); // 8021DC1C
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 8021DC20
  if (!crb(c,2)) { goto L_8021DC44; } // 8021DC24
  c->r[5]=R32(c->r[13]+0xFFFFBCC4u); // 8021DC28
  c->r[0]=0u+0x00000001u; // 8021DC2C
  W32(c->r[13]+0xFFFFBDF8u,c->r[5]); // 8021DC30
  c->r[4]=c->r[5]+0x00000001u; // 8021DC34
  W32(c->r[13]+0xFFFFBCC4u,c->r[4]); // 8021DC38
  W32(c->r[13]+0xFFFFBEC8u,c->r[5]); // 8021DC3C
  W8(c->r[13]+0xFFFFBECCu,c->r[0]); // 8021DC40
L_8021DC44:;
  c->r[4]=(uint32_t)((int32_t)c->r[3]*(int32_t)80); // 8021DC44
  c->r[0]=R32(c->r[13]+0xFFFFBEC8u); // 8021DC48
  c->r[5]=0u+0x80220000u; // 8021DC4C
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 8021DC50
  c->r[4]=c->r[26]+c->r[4]; // 8021DC54
  c->r[5]=c->r[5]+0xFFFFE0A8u; // 8021DC58
  c->r[4]=c->r[4]+c->r[0]; // 8021DC5C
  c->r[3]=rotl(c->r[3],2)&0xFFFFFFFCu; // 8021DC60
  W32(c->r[4]+0x000001CCu,c->r[5]); // 8021DC64
  c->r[0]=R32(c->r[26]+c->r[3]); // 8021DC68
  cmpu(c,0,c->r[0],0x0000005Cu); // 8021DC6C
  if (!crb(c,0)) { goto L_8021DC7C; } // 8021DC70
  c->r[0]=0u+0x0000005Cu; // 8021DC74
  W32(c->r[26]+c->r[3],c->r[0]); // 8021DC78
L_8021DC7C:;
  c->r[26]=R32(c->r[13]+0xFFFFDBDCu); // 8021DC7C
  cmps(c,0,(int32_t)c->r[26],0); // 8021DC80
  if (crb(c,2)) { goto L_8021DCEC; } // 8021DC84
  c->lr=0x8021DC8Cu; f_8021E02C(c); // 8021DC88
  c->r[0]=R8(c->r[13]+0xFFFFBED4u); // 8021DC8C
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 8021DC90
  if (!crb(c,2)) { goto L_8021DCB4; } // 8021DC94
  c->r[5]=R32(c->r[13]+0xFFFFBCC4u); // 8021DC98
  c->r[0]=0u+0x00000001u; // 8021DC9C
  W32(c->r[13]+0xFFFFBDF8u,c->r[5]); // 8021DCA0
  c->r[4]=c->r[5]+0x00000001u; // 8021DCA4
  W32(c->r[13]+0xFFFFBCC4u,c->r[4]); // 8021DCA8
  W32(c->r[13]+0xFFFFBED0u,c->r[5]); // 8021DCAC
  W8(c->r[13]+0xFFFFBED4u,c->r[0]); // 8021DCB0
L_8021DCB4:;
  c->r[4]=(uint32_t)((int32_t)c->r[3]*(int32_t)80); // 8021DCB4
  c->r[0]=R32(c->r[13]+0xFFFFBED0u); // 8021DCB8
  c->r[5]=0u+0x80220000u; // 8021DCBC
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 8021DCC0
  c->r[4]=c->r[26]+c->r[4]; // 8021DCC4
  c->r[5]=c->r[5]+0xFFFFE0A4u; // 8021DCC8
  c->r[4]=c->r[4]+c->r[0]; // 8021DCCC
  c->r[3]=rotl(c->r[3],2)&0xFFFFFFFCu; // 8021DCD0
  W32(c->r[4]+0x000001CCu,c->r[5]); // 8021DCD4
  c->r[0]=R32(c->r[26]+c->r[3]); // 8021DCD8
  cmpu(c,0,c->r[0],0x0000005Cu); // 8021DCDC
  if (!crb(c,0)) { goto L_8021DCEC; } // 8021DCE0
  c->r[0]=0u+0x0000005Cu; // 8021DCE4
  W32(c->r[26]+c->r[3],c->r[0]); // 8021DCE8
L_8021DCEC:;
  c->r[3]=c->r[25]|c->r[25]; // 8021DCEC
  c->lr=0x8021DCF4u; f_8005BBF0(c); // 8021DCF0
  c->r[24]=c->r[25]+0x000005C0u; // 8021DCF4
  c->r[3]=c->r[24]|c->r[24]; // 8021DCF8
  c->lr=0x8021DD00u; f_800506C0(c); // 8021DCFC
  cmps(c,0,(int32_t)c->r[24],0); // 8021DD00
  c->r[3]=c->r[24]|c->r[24]; // 8021DD04
  if (crb(c,2)) { goto L_8021DD10; } // 8021DD08
  c->r[3]=c->r[24]+0xFFFFFA40u; // 8021DD0C
L_8021DD10:;
  c->r[27]=0u+0x00000001u; // 8021DD10
  W32(c->r[24]+0x00000008u,c->r[3]); // 8021DD14
  W8(c->r[24]+0x0000000Cu,c->r[27]); // 8021DD18
  c->r[0]=R8(c->r[13]+0xFFFFCA3Du); // 8021DD1C
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 8021DD20
  if (!crb(c,2)) { goto L_8021DD64; } // 8021DD24
  c->r[26]=0u+0x80750000u; // 8021DD28
  c->r[3]=c->r[26]+0x00004844u; // 8021DD2C
  c->lr=0x8021DD34u; f_800506C0(c); // 8021DD30
  c->r[6]=0u+0x806E0000u; // 8021DD34
  c->r[4]=0u+0x80160000u; // 8021DD38
  c->r[6]=c->r[6]+0xFFFFE970u; // 8021DD3C
  c->r[3]=c->r[26]+0x00004844u; // 8021DD40
  c->r[0]=c->r[6]+0x00000008u; // 8021DD44
  c->r[5]=0u+0x80750000u; // 8021DD48
  W32(c->r[3]+0x00000010u,c->r[6]); // 8021DD4C
  c->r[4]=c->r[4]+0x00002A4Cu; // 8021DD50
  c->r[5]=c->r[5]+0x000054B0u; // 8021DD54
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 8021DD58
  c->lr=0x8021DD60u; f_803A92B8(c); // 8021DD5C
  W8(c->r[13]+0xFFFFCA3Du,c->r[27]); // 8021DD60
L_8021DD64:;
  c->r[3]=0u+0x80750000u; // 8021DD64
  c->r[5]=c->r[24]|c->r[24]; // 8021DD68
  c->r[3]=c->r[3]+0x00004844u; // 8021DD6C
  c->r[4]=c->r[3]|c->r[3]; // 8021DD70
  c->lr=0x8021DD78u; f_802DDCA8(c); // 8021DD74
  c->r[3]=0u+0x806E0000u; // 8021DD78
  c->r[0]=0u+0x00000000u; // 8021DD7C
  c->r[3]=c->r[3]+0x00006FE0u; // 8021DD80
  W32(c->r[25]+0x0000001Cu,c->r[3]); // 8021DD84
  c->r[3]=c->r[3]+0x00000044u; // 8021DD88
  W32(c->r[25]+0x00000400u,c->r[3]); // 8021DD8C
  W32(c->r[25]+0x000005D0u,c->r[0]); // 8021DD90
  W32(c->r[25]+0x000005D4u,c->r[0]); // 8021DD94
  c->r[23]=R32(c->r[13]+0xFFFFDBD8u); // 8021DD98
  cmps(c,0,(int32_t)c->r[23],0); // 8021DD9C
  if (crb(c,2)) { goto L_8021DE08; } // 8021DDA0
  c->lr=0x8021DDA8u; f_8021E02C(c); // 8021DDA4
  c->r[0]=R8(c->r[13]+0xFFFFBEA4u); // 8021DDA8
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 8021DDAC
  if (!crb(c,2)) { goto L_8021DDD0; } // 8021DDB0
  c->r[5]=R32(c->r[13]+0xFFFFBCC8u); // 8021DDB4
  c->r[0]=0u+0x00000001u; // 8021DDB8
  W32(c->r[13]+0xFFFFBDFCu,c->r[5]); // 8021DDBC
  c->r[4]=c->r[5]+0x00000001u; // 8021DDC0
  W32(c->r[13]+0xFFFFBCC8u,c->r[4]); // 8021DDC4
  W32(c->r[13]+0xFFFFBEA0u,c->r[5]); // 8021DDC8
  W8(c->r[13]+0xFFFFBEA4u,c->r[0]); // 8021DDCC
L_8021DDD0:;
  c->r[4]=(uint32_t)((int32_t)c->r[3]*(int32_t)2600); // 8021DDD0
  c->r[0]=R32(c->r[13]+0xFFFFBEA0u); // 8021DDD4
  c->r[5]=0u+0x80220000u; // 8021DDD8
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 8021DDDC
  c->r[4]=c->r[23]+c->r[4]; // 8021DDE0
  c->r[5]=c->r[5]+0xFFFFE06Cu; // 8021DDE4
  c->r[4]=c->r[4]+c->r[0]; // 8021DDE8
  c->r[3]=rotl(c->r[3],2)&0xFFFFFFFCu; // 8021DDEC
  W32(c->r[4]+0x000001CCu,c->r[5]); // 8021DDF0
  c->r[0]=R32(c->r[23]+c->r[3]); // 8021DDF4
  cmpu(c,0,c->r[0],0x00000010u); // 8021DDF8
  if (!crb(c,0)) { goto L_8021DE08; } // 8021DDFC
  c->r[0]=0u+0x00000010u; // 8021DE00
  W32(c->r[23]+c->r[3],c->r[0]); // 8021DE04
L_8021DE08:;
  c->r[23]=R32(c->r[13]+0xFFFFDBD8u); // 8021DE08
  cmps(c,0,(int32_t)c->r[23],0); // 8021DE0C
  if (crb(c,2)) { goto L_8021DE54; } // 8021DE10
  c->lr=0x8021DE18u; f_8021E02C(c); // 8021DE14
  c->r[26]=c->r[3]|c->r[3]; // 8021DE18
  c->lr=0x8021DE20u; f_8005E1B0(c); // 8021DE1C
  c->r[4]=(uint32_t)((int32_t)c->r[26]*(int32_t)2600); // 8021DE20
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 8021DE24
  c->r[5]=0u+0x80220000u; // 8021DE28
  c->r[3]=rotl(c->r[26],2)&0xFFFFFFFCu; // 8021DE2C
  c->r[4]=c->r[23]+c->r[4]; // 8021DE30
  c->r[5]=c->r[5]+0xFFFFE068u; // 8021DE34
  c->r[4]=c->r[4]+c->r[0]; // 8021DE38
  W32(c->r[4]+0x000001CCu,c->r[5]); // 8021DE3C
  c->r[0]=R32(c->r[23]+c->r[3]); // 8021DE40
  cmpu(c,0,c->r[0],0x00000010u); // 8021DE44
  if (!crb(c,0)) { goto L_8021DE54; } // 8021DE48
  c->r[0]=0u+0x00000010u; // 8021DE4C
  W32(c->r[23]+c->r[3],c->r[0]); // 8021DE50
L_8021DE54:;
  c->r[23]=R32(c->r[13]+0xFFFFDBD8u); // 8021DE54
  cmps(c,0,(int32_t)c->r[23],0); // 8021DE58
  if (crb(c,2)) { goto L_8021DEA0; } // 8021DE5C
  c->lr=0x8021DE64u; f_8021E02C(c); // 8021DE60
  c->r[26]=c->r[3]|c->r[3]; // 8021DE64
  c->lr=0x8021DE6Cu; f_80062EBC(c); // 8021DE68
  c->r[4]=(uint32_t)((int32_t)c->r[26]*(int32_t)2600); // 8021DE6C
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 8021DE70
  c->r[5]=0u+0x80220000u; // 8021DE74
  c->r[3]=rotl(c->r[26],2)&0xFFFFFFFCu; // 8021DE78
  c->r[4]=c->r[23]+c->r[4]; // 8021DE7C
  c->r[5]=c->r[5]+0xFFFFE064u; // 8021DE80
  c->r[4]=c->r[4]+c->r[0]; // 8021DE84
  W32(c->r[4]+0x000001CCu,c->r[5]); // 8021DE88
  c->r[0]=R32(c->r[23]+c->r[3]); // 8021DE8C
  cmpu(c,0,c->r[0],0x00000010u); // 8021DE90
  if (!crb(c,0)) { goto L_8021DEA0; } // 8021DE94
  c->r[0]=0u+0x00000010u; // 8021DE98
  W32(c->r[23]+c->r[3],c->r[0]); // 8021DE9C
L_8021DEA0:;
  c->r[23]=R32(c->r[13]+0xFFFFDBD8u); // 8021DEA0
  cmps(c,0,(int32_t)c->r[23],0); // 8021DEA4
  if (crb(c,2)) { goto L_8021DEEC; } // 8021DEA8
  c->lr=0x8021DEB0u; f_8021E02C(c); // 8021DEAC
  c->r[26]=c->r[3]|c->r[3]; // 8021DEB0
  c->lr=0x8021DEB8u; f_80061044(c); // 8021DEB4
  c->r[4]=(uint32_t)((int32_t)c->r[26]*(int32_t)2600); // 8021DEB8
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 8021DEBC
  c->r[5]=0u+0x80220000u; // 8021DEC0
  c->r[3]=rotl(c->r[26],2)&0xFFFFFFFCu; // 8021DEC4
  c->r[4]=c->r[23]+c->r[4]; // 8021DEC8
  c->r[5]=c->r[5]+0xFFFFE060u; // 8021DECC
  c->r[4]=c->r[4]+c->r[0]; // 8021DED0
  W32(c->r[4]+0x000001CCu,c->r[5]); // 8021DED4
  c->r[0]=R32(c->r[23]+c->r[3]); // 8021DED8
  cmpu(c,0,c->r[0],0x00000020u); // 8021DEDC
  if (!crb(c,0)) { goto L_8021DEEC; } // 8021DEE0
  c->r[0]=0u+0x00000020u; // 8021DEE4
  W32(c->r[23]+c->r[3],c->r[0]); // 8021DEE8
L_8021DEEC:;
  c->r[23]=R32(c->r[13]+0xFFFFDBD8u); // 8021DEEC
  cmps(c,0,(int32_t)c->r[23],0); // 8021DEF0
  if (crb(c,2)) { goto L_8021DF38; } // 8021DEF4
  c->lr=0x8021DEFCu; f_8021E02C(c); // 8021DEF8
  c->r[26]=c->r[3]|c->r[3]; // 8021DEFC
  c->lr=0x8021DF04u; f_80062DCC(c); // 8021DF00
  c->r[4]=(uint32_t)((int32_t)c->r[26]*(int32_t)2600); // 8021DF04
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 8021DF08
  c->r[5]=0u+0x80220000u; // 8021DF0C
  c->r[3]=rotl(c->r[26],2)&0xFFFFFFFCu; // 8021DF10
  c->r[4]=c->r[23]+c->r[4]; // 8021DF14
  c->r[5]=c->r[5]+0xFFFFE05Cu; // 8021DF18
  c->r[4]=c->r[4]+c->r[0]; // 8021DF1C
  W32(c->r[4]+0x000001CCu,c->r[5]); // 8021DF20
  c->r[0]=R32(c->r[23]+c->r[3]); // 8021DF24
  cmpu(c,0,c->r[0],0x00000010u); // 8021DF28
  if (!crb(c,0)) { goto L_8021DF38; } // 8021DF2C
  c->r[0]=0u+0x00000010u; // 8021DF30
  W32(c->r[23]+c->r[3],c->r[0]); // 8021DF34
L_8021DF38:;
  c->r[23]=R32(c->r[13]+0xFFFFDBD8u); // 8021DF38
  cmps(c,0,(int32_t)c->r[23],0); // 8021DF3C
  if (crb(c,2)) { goto L_8021DF84; } // 8021DF40
  c->lr=0x8021DF48u; f_8021E02C(c); // 8021DF44
  c->r[26]=c->r[3]|c->r[3]; // 8021DF48
  c->lr=0x8021DF50u; f_80062F1C(c); // 8021DF4C
  c->r[4]=(uint32_t)((int32_t)c->r[26]*(int32_t)2600); // 8021DF50
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 8021DF54
  c->r[5]=0u+0x80220000u; // 8021DF58
  c->r[3]=rotl(c->r[26],2)&0xFFFFFFFCu; // 8021DF5C
  c->r[4]=c->r[23]+c->r[4]; // 8021DF60
  c->r[5]=c->r[5]+0xFFFFE028u; // 8021DF64
  c->r[4]=c->r[4]+c->r[0]; // 8021DF68
  W32(c->r[4]+0x000001CCu,c->r[5]); // 8021DF6C
  c->r[0]=R32(c->r[23]+c->r[3]); // 8021DF70
  cmpu(c,0,c->r[0],0x00000010u); // 8021DF74
  if (!crb(c,0)) { goto L_8021DF84; } // 8021DF78
  c->r[0]=0u+0x00000010u; // 8021DF7C
  W32(c->r[23]+c->r[3],c->r[0]); // 8021DF80
L_8021DF84:;
  c->r[3]=0u+0x806A0000u; // 8021DF84
  {uint32_t ea=c->r[2]+0xFFFFDF8Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8021DF88
  c->r[4]=c->r[3]+0xFFFF8FB8u; // 8021DF8C
  {uint32_t ea=c->r[3]+0xFFFF8FB8u; c->f[7]=c->ps1[7]=RF32(ea);} // 8021DF90
  {uint32_t ea=c->r[4]+0x00000004u; c->f[6]=c->ps1[6]=RF32(ea);} // 8021DF94
  c->r[5]=0u+0x00000000u; // 8021DF98
  {uint32_t ea=c->r[4]+0x00000008u; c->f[5]=c->ps1[5]=RF32(ea);} // 8021DF9C
  c->r[0]=0u+0x00000004u; // 8021DFA0
  {uint32_t ea=c->r[4]+0x0000000Cu; c->f[4]=c->ps1[4]=RF32(ea);} // 8021DFA4
  c->r[26]=0u+0x80760000u; // 8021DFA8
  {uint32_t ea=c->r[4]+0x00000010u; c->f[3]=c->ps1[3]=RF32(ea);} // 8021DFAC
  c->r[3]=c->r[25]+0x00000644u; // 8021DFB0
  {uint32_t ea=c->r[4]+0x00000014u; c->f[2]=c->ps1[2]=RF32(ea);} // 8021DFB4
  c->r[4]=c->r[26]+0xFFFF9C78u; // 8021DFB8
  {uint32_t ea=c->r[2]+0xFFFFDF88u; c->f[1]=c->ps1[1]=RF32(ea);} // 8021DFBC
  W8(c->r[25]+0x00000608u,c->r[5]); // 8021DFC0
  {uint32_t ea=c->r[25]+0x0000060Cu; WF32(ea,c->f[7]);} // 8021DFC4
  {uint32_t ea=c->r[25]+0x00000610u; WF32(ea,c->f[6]);} // 8021DFC8
  {uint32_t ea=c->r[25]+0x00000614u; WF32(ea,c->f[5]);} // 8021DFCC
  {uint32_t ea=c->r[25]+0x00000618u; WF32(ea,c->f[4]);} // 8021DFD0
  {uint32_t ea=c->r[25]+0x0000061Cu; WF32(ea,c->f[3]);} // 8021DFD4
  {uint32_t ea=c->r[25]+0x00000620u; WF32(ea,c->f[2]);} // 8021DFD8
  {uint32_t ea=c->r[25]+0x00000624u; WF32(ea,c->f[1]);} // 8021DFDC
  W32(c->r[25]+0x00000628u,c->r[0]); // 8021DFE0
  {uint32_t ea=c->r[25]+0x0000062Cu; WF32(ea,c->f[0]);} // 8021DFE4
  {uint32_t ea=c->r[25]+0x00000630u; WF32(ea,c->f[0]);} // 8021DFE8
  {uint32_t ea=c->r[25]+0x00000634u; WF32(ea,c->f[0]);} // 8021DFEC
  c->lr=0x8021DFF4u; f_8005DC84(c); // 8021DFF0
  c->r[3]=c->r[25]+0x00000638u; // 8021DFF4
  c->r[4]=c->r[26]+0xFFFF9C78u; // 8021DFF8
  c->lr=0x8021E000u; f_8005DC84(c); // 8021DFFC
  c->r[3]=c->r[25]+0x00000650u; // 8021E000
  c->r[4]=c->r[26]+0xFFFF9C78u; // 8021E004
  c->lr=0x8021E00Cu; f_8005DC84(c); // 8021E008
  c->r[11]=c->r[1]+0x00000050u; // 8021E00C
  c->r[3]=c->r[25]|c->r[25]; // 8021E010
  c->lr=0x8021E018u; { c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8021E014
  c->r[0]=R32(c->r[1]+0x00000054u); // 8021E018
  c->lr=c->r[0]; // 8021E01C
  c->r[1]=c->r[1]+0x00000050u; // 8021E020
  return; // 8021E024
}

// fn_8021E028
void f_8021E028(Ctx* __restrict c) {
  trace_call(0x8021E028u);
  f_8031749C(c); return; // 8021E028
}

// fn_8021E02C
void f_8021E02C(Ctx* __restrict c) {
  trace_call(0x8021E02Cu);
  c->r[0]=R8(c->r[13]+0xFFFFD48Cu); // 8021E02C
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 8021E030
  if (!crb(c,2)) { goto L_8021E054; } // 8021E034
  c->r[4]=R32(c->r[13]+0xFFFFBE94u); // 8021E038
  c->r[0]=0u+0x00000001u; // 8021E03C
  W32(c->r[13]+0xFFFFBE98u,c->r[4]); // 8021E040
  c->r[3]=c->r[4]+0x00000001u; // 8021E044
  W32(c->r[13]+0xFFFFBE94u,c->r[3]); // 8021E048
  W32(c->r[13]+0xFFFFD488u,c->r[4]); // 8021E04C
  W8(c->r[13]+0xFFFFD48Cu,c->r[0]); // 8021E050
L_8021E054:;
  c->r[3]=R32(c->r[13]+0xFFFFD488u); // 8021E054
  return; // 8021E058
}

// fn_8021E05C
void f_8021E05C(Ctx* __restrict c) {
  trace_call(0x8021E05Cu);
  f_8021E6F4(c); return; // 8021E05C
}

// fn_8021E060
void f_8021E060(Ctx* __restrict c) {
  trace_call(0x8021E060u);
  f_8021E570(c); return; // 8021E060
}

// fn_8021E064
void f_8021E064(Ctx* __restrict c) {
  trace_call(0x8021E064u);
  f_8021E218(c); return; // 8021E064
}

// fn_8021E068
void f_8021E068(Ctx* __restrict c) {
  trace_call(0x8021E068u);
  return; // 8021E068
}

// fn_8021E06C
void f_8021E06C(Ctx* __restrict c) {
  trace_call(0x8021E06Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8021E06C
  c->r[0]=c->lr; // 8021E070
  W32(c->r[1]+0x00000014u,c->r[0]); // 8021E074
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8021E078
  c->r[31]=c->r[3]|c->r[3]; // 8021E07C
  c->lr=0x8021E084u; f_8005E0F8(c); // 8021E080
  c->r[0]=R32(c->r[31]+0x000005BCu); // 8021E084
  c->r[0]=c->r[0]|0x40000000u; // 8021E088
  W32(c->r[31]+0x000005BCu,c->r[0]); // 8021E08C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8021E090
  c->r[0]=R32(c->r[1]+0x00000014u); // 8021E094
  c->lr=c->r[0]; // 8021E098
  c->r[1]=c->r[1]+0x00000010u; // 8021E09C
  return; // 8021E0A0
}

// fn_8021E0A4
void f_8021E0A4(Ctx* __restrict c) {
  trace_call(0x8021E0A4u);
  f_8005E338(c); return; // 8021E0A4
}

// fn_8021E0A8
void f_8021E0A8(Ctx* __restrict c) {
  trace_call(0x8021E0A8u);
  f_8005E324(c); return; // 8021E0A8
}

// fn_8021E0AC
void f_8021E0AC(Ctx* __restrict c) {
  trace_call(0x8021E0ACu);
  f_8005E310(c); return; // 8021E0AC
}

// fn_8021E0B0
void f_8021E0B0(Ctx* __restrict c) {
  trace_call(0x8021E0B0u);
  f_8005E2FC(c); return; // 8021E0B0
}

// fn_8021E0B4
void f_8021E0B4(Ctx* __restrict c) {
  trace_call(0x8021E0B4u);
  f_8005E34C(c); return; // 8021E0B4
}

// fn_8021E0B8
void f_8021E0B8(Ctx* __restrict c) {
  trace_call(0x8021E0B8u);
  f_8005E360(c); return; // 8021E0B8
}

// fn_8021E0BC
void f_8021E0BC(Ctx* __restrict c) {
  trace_call(0x8021E0BCu);
  f_8005D47C(c); return; // 8021E0BC
}

// fn_8021E0C0
void f_8021E0C0(Ctx* __restrict c) {
  trace_call(0x8021E0C0u);
  f_8005D468(c); return; // 8021E0C0
}

// fn_8021E0C4
void f_8021E0C4(Ctx* __restrict c) {
  trace_call(0x8021E0C4u);
  f_8005BEDC(c); return; // 8021E0C4
}

// fn_8021E0C8
void f_8021E0C8(Ctx* __restrict c) {
  trace_call(0x8021E0C8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8021E0C8
  c->r[0]=c->lr; // 8021E0CC
  cmps(c,0,(int32_t)c->r[3],0); // 8021E0D0
  W32(c->r[1]+0x00000014u,c->r[0]); // 8021E0D4
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 8021E0D8
  c->r[30]=c->r[3]|c->r[3]; // 8021E0DC
  c->r[31]=c->r[4]|c->r[4]; // 8021E0E0
  if (crb(c,2)) { goto L_8021E100; } // 8021E0E4
  c->r[4]=0u+0x00000000u; // 8021E0E8
  c->lr=0x8021E0F0u; f_8017F0DC(c); // 8021E0EC
  cmps(c,0,(int32_t)c->r[31],0); // 8021E0F0
  if (!crb(c,1)) { goto L_8021E100; } // 8021E0F4
  c->r[3]=c->r[30]|c->r[30]; // 8021E0F8
  c->lr=0x8021E100u; f_8005328C(c); // 8021E0FC
L_8021E100:;
  c->r[3]=c->r[30]|c->r[30]; // 8021E100
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 8021E104
  c->r[0]=R32(c->r[1]+0x00000014u); // 8021E108
  c->lr=c->r[0]; // 8021E10C
  c->r[1]=c->r[1]+0x00000010u; // 8021E110
  return; // 8021E114
}

// fn_8021E118
void f_8021E118(Ctx* __restrict c) {
  trace_call(0x8021E118u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8021E118
  c->r[0]=c->lr; // 8021E11C
  {uint32_t ea=c->r[2]+0xFFFFDF90u; c->f[0]=c->ps1[0]=RF32(ea);} // 8021E120
  c->r[4]=0u+0x00000000u; // 8021E124
  W32(c->r[1]+0x00000014u,c->r[0]); // 8021E128
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8021E12C
  c->r[31]=c->r[3]|c->r[3]; // 8021E130
  c->r[5]=R32(c->r[3]+0x00000444u); // 8021E134
  {uint32_t ea=c->r[5]+0x00000000u; WF32(ea,c->f[0]);} // 8021E138
  c->r[6]=R32(c->r[3]+0x00000444u); // 8021E13C
  c->r[5]=R32(c->r[3]+0x0000044Cu); // 8021E140
  {uint32_t ea=c->r[6]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 8021E144
  {uint32_t ea=c->r[5]+0x00000000u; WF32(ea,c->f[0]);} // 8021E148
  c->lr=0x8021E150u; f_8005EE88(c); // 8021E14C
  c->r[3]=c->r[31]|c->r[31]; // 8021E150
  c->r[4]=0u+0x00000000u; // 8021E154
  c->lr=0x8021E15Cu; f_8005E814(c); // 8021E158
  c->r[0]=R32(c->r[1]+0x00000014u); // 8021E15C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8021E160
  c->lr=c->r[0]; // 8021E164
  c->r[1]=c->r[1]+0x00000010u; // 8021E168
  return; // 8021E16C
}

// fn_8021E170
void f_8021E170(Ctx* __restrict c) {
  trace_call(0x8021E170u);
  f_8021E7CC(c); return; // 8021E170
}

// fn_8021E174
void f_8021E174(Ctx* __restrict c) {
  trace_call(0x8021E174u);
  return; // 8021E174
}

// fn_8021E178
void f_8021E178(Ctx* __restrict c) {
  trace_call(0x8021E178u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8021E178
  c->r[0]=c->lr; // 8021E17C
  W32(c->r[1]+0x00000014u,c->r[0]); // 8021E180
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8021E184
  W32(c->r[1]+0x00000008u,c->r[30]); // 8021E188
  c->r[30]=c->r[3]|c->r[3]; // 8021E18C
  c->lr=0x8021E194u; f_800610FC(c); // 8021E190
  cmps(c,0,(int32_t)c->r[3],0); // 8021E194
  if (crb(c,2)) { goto L_8021E200; } // 8021E198
  c->r[3]=R32(c->r[30]+0x00000004u); // 8021E19C
  cmps(c,0,(int32_t)c->r[3],0); // 8021E1A0
  if (crb(c,2)) { goto L_8021E1B0; } // 8021E1A4
  c->r[31]=R32(c->r[3]+0x00000000u); // 8021E1A8
  goto L_8021E1B4; // 8021E1AC
L_8021E1B0:;
  c->r[31]=0u+0xFFFFFFFFu; // 8021E1B0
L_8021E1B4:;
  c->r[3]=R32(c->r[30]+0x0000044Cu); // 8021E1B4
  c->r[0]=R32(c->r[3]+0x0000008Cu); // 8021E1B8
  cmps(c,0,(int32_t)c->r[0],4); // 8021E1BC
  if (!crb(c,2)) { goto L_8021E1DC; } // 8021E1C0
  c->lr=0x8021E1C8u; f_80062DCC(c); // 8021E1C4
  cmps(c,0,(int32_t)c->r[31],(int32_t)c->r[3]); // 8021E1C8
  if (crb(c,2)) { goto L_8021E200; } // 8021E1CC
  c->r[3]=c->r[30]|c->r[30]; // 8021E1D0
  c->lr=0x8021E1D8u; f_8007D624(c); // 8021E1D4
  goto L_8021E200; // 8021E1D8
L_8021E1DC:;
  {uint32_t ea=c->r[3]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 8021E1DC
  {uint32_t ea=c->r[2]+0xFFFFDF8Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8021E1E0
  fcmp(c,0,c->f[1],c->f[0]); // 8021E1E4
  if (crb(c,1)) { goto L_8021E200; } // 8021E1E8
  c->lr=0x8021E1F0u; f_80062DCC(c); // 8021E1EC
  cmps(c,0,(int32_t)c->r[31],(int32_t)c->r[3]); // 8021E1F0
  if (crb(c,2)) { goto L_8021E200; } // 8021E1F4
  c->r[3]=c->r[30]|c->r[30]; // 8021E1F8
  c->lr=0x8021E200u; f_8007D624(c); // 8021E1FC
L_8021E200:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8021E200
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8021E204
  c->r[30]=R32(c->r[1]+0x00000008u); // 8021E208
  c->lr=c->r[0]; // 8021E20C
  c->r[1]=c->r[1]+0x00000010u; // 8021E210
  return; // 8021E214
}

// fn_8021E218
void f_8021E218(Ctx* __restrict c) {
  trace_call(0x8021E218u);
  {uint32_t ea=c->r[1]+0xFFFFFEC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8021E218
  c->r[0]=c->lr; // 8021E21C
  W32(c->r[1]+0x00000144u,c->r[0]); // 8021E220
  c->r[11]=c->r[1]+0x00000140u; // 8021E224
  c->lr=0x8021E22Cu; { W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8021E228
  c->r[31]=c->r[1]|c->r[1]; // 8021E22C
  c->r[4]=R32(c->r[3]+0x00000004u); // 8021E230
  c->r[30]=c->r[3]|c->r[3]; // 8021E234
  cmps(c,0,(int32_t)c->r[4],0); // 8021E238
  if (crb(c,2)) { goto L_8021E248; } // 8021E23C
  c->r[0]=R32(c->r[4]+0x00000008u); // 8021E240
  goto L_8021E24C; // 8021E244
L_8021E248:;
  c->r[0]=0u+0x00000000u; // 8021E248
L_8021E24C:;
  cmps(c,0,(int32_t)c->r[0],0); // 8021E24C
  if (!crb(c,2)) { goto L_8021E340; } // 8021E250
  c->r[3]=c->r[30]|c->r[30]; // 8021E254
  c->r[4]=0u+0x00004A47u; // 8021E258
  c->r[5]=0u+0x00000001u; // 8021E25C
  c->lr=0x8021E264u; f_80064744(c); // 8021E260
  {uint32_t ea=c->r[30]+0x00000618u; c->f[2]=c->ps1[2]=RF32(ea);} // 8021E264
  {uint32_t ea=c->r[30]+0x0000060Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8021E268
  c->f[1]=-c->f[2]; // 8021E26C
  {uint32_t ea=c->r[30]+0x0000062Cu; WF32(ea,c->f[0]);} // 8021E270
  c->lr=0x8021E278u; f_8007C9C0(c); // 8021E274
  {uint32_t ea=c->r[30]+0x00000610u; c->f[0]=c->ps1[0]=RF32(ea);} // 8021E278
  {uint32_t ea=c->r[30]+0x0000061Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 8021E27C
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[1]); // 8021E280
  c->f[1]=-c->f[2]; // 8021E284
  {uint32_t ea=c->r[30]+0x00000630u; WF32(ea,c->f[0]);} // 8021E288
  c->lr=0x8021E290u; f_8007C9C0(c); // 8021E28C
  {uint32_t ea=c->r[30]+0x00000614u; c->f[0]=c->ps1[0]=RF32(ea);} // 8021E290
  c->r[4]=c->r[30]|c->r[30]; // 8021E294
  {uint32_t ea=c->r[30]+0x00000630u; c->f[2]=c->ps1[2]=RF32(ea);} // 8021E298
  c->r[3]=c->r[31]+0x00000100u; // 8021E29C
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[1]); // 8021E2A0
  {uint32_t ea=c->r[30]+0x0000062Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8021E2A4
  c->r[5]=0u+0x00000001u; // 8021E2A8
  {uint32_t ea=c->r[30]+0x00000634u; WF32(ea,c->f[0]);} // 8021E2AC
  c->f[3]=c->ps1[3]=S(c->f[0]); // 8021E2B0
  c->lr=0x8021E2B8u; f_8021E8F0(c); // 8021E2B4
  c->r[4]=c->r[30]|c->r[30]; // 8021E2B8
  c->r[3]=c->r[31]+0x00000064u; // 8021E2BC
  c->lr=0x8021E2C4u; f_80061A48(c); // 8021E2C0
  {uint32_t ea=c->r[31]+0x0000010Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8021E2C4
  c->r[3]=c->r[31]+0x00000058u; // 8021E2C8
  {uint32_t ea=c->r[31]+0x0000011Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 8021E2CC
  {uint32_t ea=c->r[31]+0x0000012Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 8021E2D0
  c->lr=0x8021E2D8u; f_8005FD70(c); // 8021E2D4
  c->r[3]=c->r[30]+0x00000624u; // 8021E2D8
  c->r[4]=c->r[31]+0x00000064u; // 8021E2DC
  c->r[5]=c->r[31]+0x00000058u; // 8021E2E0
  c->r[6]=c->r[30]+0x00000638u; // 8021E2E4
  c->r[7]=c->r[30]+0x00000644u; // 8021E2E8
  c->lr=0x8021E2F0u; f_80110F48(c); // 8021E2EC
  {uint32_t ea=c->r[2]+0xFFFFDF94u; c->f[1]=c->ps1[1]=RF32(ea);} // 8021E2F0
  {uint32_t ea=c->r[30]+0x00000624u; c->f[0]=c->ps1[0]=RF32(ea);} // 8021E2F4
  {uint32_t ea=c->r[30]+0x00000620u; c->f[2]=c->ps1[2]=RF32(ea);} // 8021E2F8
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 8021E2FC
  c->f[1]=-c->f[2]; // 8021E300
  {uint32_t ea=c->r[30]+0x0000065Cu; WF32(ea,c->f[0]);} // 8021E304
  c->lr=0x8021E30Cu; f_8007C9C0(c); // 8021E308
  c->r[0]=0u+0x00000000u; // 8021E30C
  {uint32_t ea=c->r[30]+0x00000660u; WF32(ea,c->f[1]);} // 8021E310
  c->r[3]=c->r[30]+0x0000065Cu; // 8021E314
  c->r[4]=c->r[30]+0x000001B8u; // 8021E318
  W8(c->r[30]+0x00000664u,c->r[0]); // 8021E31C
  c->r[5]=c->r[30]+0x00000668u; // 8021E320
  c->r[6]=c->r[30]+0x00000698u; // 8021E324
  c->lr=0x8021E32Cu; f_8011D690(c); // 8021E328
  {uint32_t ea=c->r[2]+0xFFFFDF88u; c->f[1]=c->ps1[1]=RF32(ea);} // 8021E32C
  c->r[3]=c->r[30]|c->r[30]; // 8021E330
  {uint32_t ea=c->r[30]+0x00000624u; c->f[0]=c->ps1[0]=RF32(ea);} // 8021E334
  c->f[1]=c->ps1[1]=S(c->f[1]+c->f[0]); // 8021E338
  c->lr=0x8021E340u; f_8021E7AC(c); // 8021E33C
L_8021E340:;
  c->r[3]=c->r[30]+0x000001B8u; // 8021E340
  c->r[4]=c->r[31]+0x000000D0u; // 8021E344
  c->lr=0x8021E34Cu; f_80382F2C(c); // 8021E348
  {uint32_t ea=c->r[30]+0x0000062Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8021E34C
  c->r[4]=c->r[30]|c->r[30]; // 8021E350
  {uint32_t ea=c->r[30]+0x00000630u; c->f[2]=c->ps1[2]=RF32(ea);} // 8021E354
  c->r[3]=c->r[31]+0x000000A0u; // 8021E358
  {uint32_t ea=c->r[30]+0x00000634u; c->f[3]=c->ps1[3]=RF32(ea);} // 8021E35C
  c->r[5]=0u+0x00000001u; // 8021E360
  c->lr=0x8021E368u; f_8021E8F0(c); // 8021E364
  c->r[3]=c->r[30]+0x00000624u; // 8021E368
  c->r[4]=c->r[31]+0x000000D0u; // 8021E36C
  c->r[5]=c->r[30]+0x00000638u; // 8021E370
  c->r[6]=c->r[30]+0x00000644u; // 8021E374
  c->lr=0x8021E37Cu; f_80111024(c); // 8021E378
  c->r[3]=c->r[30]+0x0000065Cu; // 8021E37C
  c->r[4]=c->r[31]+0x000000A0u; // 8021E380
  c->r[5]=c->r[31]+0x000000D0u; // 8021E384
  c->r[6]=c->r[30]+0x00000668u; // 8021E388
  c->r[7]=c->r[30]+0x00000698u; // 8021E38C
  c->lr=0x8021E394u; f_8011D71C(c); // 8021E390
  {uint32_t ea=c->r[30]+0x000006A0u; c->f[2]=c->ps1[2]=RF32(ea);} // 8021E394
  {uint32_t ea=c->r[2]+0xFFFFDF98u; c->f[1]=c->ps1[1]=RF32(ea);} // 8021E398
  {uint32_t ea=c->r[30]+0x0000069Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8021E39C
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[1]); // 8021E3A0
  fcmp(c,0,c->f[1],c->f[0]); // 8021E3A4
  setcrb(c,2,crb(c,0)|crb(c,2)); // 8021E3A8
  if (!crb(c,2)) { goto L_8021E4C0; } // 8021E3AC
  {uint32_t ea=c->r[30]+0x00000598u; c->f[1]=c->ps1[1]=RF32(ea);} // 8021E3B0
  c->r[3]=c->r[31]+0x00000040u; // 8021E3B4
  {uint32_t ea=c->r[30]+0x000005A8u; c->f[2]=c->ps1[2]=RF32(ea);} // 8021E3B8
  {uint32_t ea=c->r[30]+0x000005B8u; c->f[3]=c->ps1[3]=RF32(ea);} // 8021E3BC
  c->lr=0x8021E3C4u; f_8005FD70(c); // 8021E3C0
  {uint32_t ea=c->r[31]+0x000000DCu; c->f[1]=c->ps1[1]=RF32(ea);} // 8021E3C4
  c->r[3]=c->r[31]+0x00000034u; // 8021E3C8
  {uint32_t ea=c->r[31]+0x000000ECu; c->f[2]=c->ps1[2]=RF32(ea);} // 8021E3CC
  {uint32_t ea=c->r[31]+0x000000FCu; c->f[3]=c->ps1[3]=RF32(ea);} // 8021E3D0
  c->lr=0x8021E3D8u; f_8005FD70(c); // 8021E3D4
  {uint32_t ea=c->r[31]+0x000000ACu; c->f[1]=c->ps1[1]=RF32(ea);} // 8021E3D8
  c->r[3]=c->r[31]+0x00000028u; // 8021E3DC
  {uint32_t ea=c->r[31]+0x000000BCu; c->f[2]=c->ps1[2]=RF32(ea);} // 8021E3E0
  {uint32_t ea=c->r[31]+0x000000CCu; c->f[3]=c->ps1[3]=RF32(ea);} // 8021E3E4
  c->lr=0x8021E3ECu; f_8005FD70(c); // 8021E3E8
  {uint32_t ea=c->r[31]+0x000000A4u; c->f[1]=c->ps1[1]=RF32(ea);} // 8021E3EC
  c->r[3]=c->r[31]+0x0000001Cu; // 8021E3F0
  {uint32_t ea=c->r[31]+0x000000B4u; c->f[2]=c->ps1[2]=RF32(ea);} // 8021E3F4
  {uint32_t ea=c->r[31]+0x000000C4u; c->f[3]=c->ps1[3]=RF32(ea);} // 8021E3F8
  c->lr=0x8021E400u; f_8005FD70(c); // 8021E3FC
  {uint32_t ea=c->r[31]+0x000000A0u; c->f[1]=c->ps1[1]=RF32(ea);} // 8021E400
  c->r[3]=c->r[31]+0x00000010u; // 8021E404
  {uint32_t ea=c->r[31]+0x000000B0u; c->f[2]=c->ps1[2]=RF32(ea);} // 8021E408
  {uint32_t ea=c->r[31]+0x000000C0u; c->f[3]=c->ps1[3]=RF32(ea);} // 8021E40C
  c->lr=0x8021E414u; f_8005FD70(c); // 8021E410
  c->r[3]=c->r[31]+0x00000040u; // 8021E414
  c->r[4]=c->r[31]+0x00000034u; // 8021E418
  c->r[5]=c->r[31]+0x00000028u; // 8021E41C
  c->r[6]=c->r[31]+0x0000001Cu; // 8021E420
  c->r[7]=c->r[31]+0x00000010u; // 8021E424
  c->r[8]=c->r[31]+0x0000004Cu; // 8021E428
  c->lr=0x8021E430u; f_800646CC(c); // 8021E42C
  cmps(c,0,(int32_t)c->r[3],0); // 8021E430
  if (crb(c,2)) { goto L_8021E4C0; } // 8021E434
  c->r[3]=c->r[31]+0x000000D0u; // 8021E438
  c->r[4]=c->r[31]+0x0000004Cu; // 8021E43C
  c->lr=0x8021E444u; f_8005CDC8(c); // 8021E440
  c->lr=0x8021E448u; f_80061044(c); // 8021E444
  c->r[4]=c->r[3]|c->r[3]; // 8021E448
  c->r[3]=c->r[30]|c->r[30]; // 8021E44C
  c->lr=0x8021E454u; f_80062F4C(c); // 8021E450
  c->r[0]=R8(c->r[30]+0x00000010u); // 8021E454
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 8021E458
  c->r[3]=c->r[30]+c->r[0]; // 8021E45C
  c->r[28]=R32(c->r[3]+0x00000014u); // 8021E460
  cmps(c,0,(int32_t)c->r[28],0); // 8021E464
  if (crb(c,2)) { goto L_8021E4A0; } // 8021E468
  c->r[29]=0u+0x00000000u; // 8021E46C
  W32(c->r[31]+0x0000009Cu,c->r[1]); // 8021E470
  W8(c->r[31]+0x0000000Cu,c->r[29]); // 8021E474
  c->lr=0x8021E47Cu; f_80061044(c); // 8021E478
  W32(c->r[28]+0x00000000u,c->r[3]); // 8021E47C
  c->r[0]=c->r[13]+0xFFFF80D0u; // 8021E480
  c->r[3]=c->r[28]+0x00000010u; // 8021E484
  c->r[4]=0u+0x00000000u; // 8021E488
  W32(c->r[28]+0x00000004u,c->r[0]); // 8021E48C
  c->r[5]=0u+0x00000010u; // 8021E490
  W32(c->r[28]+0x00000008u,c->r[29]); // 8021E494
  W32(c->r[28]+0x0000000Cu,c->r[29]); // 8021E498
  c->lr=0x8021E4A0u; f_800043EC(c); // 8021E49C
L_8021E4A0:;
  W32(c->r[30]+0x00000008u,c->r[28]); // 8021E4A0
  c->r[0]=0u+0x00000000u; // 8021E4A4
  c->r[3]=c->r[30]|c->r[30]; // 8021E4A8
  c->r[4]=c->r[28]|c->r[28]; // 8021E4AC
  W32(c->r[28]+0x00000008u,c->r[0]); // 8021E4B0
  c->r[0]=R32(c->r[30]+0x00000004u); // 8021E4B4
  W32(c->r[30]+0x0000000Cu,c->r[0]); // 8021E4B8
  c->lr=0x8021E4C0u; f_8006306C(c); // 8021E4BC
L_8021E4C0:;
  c->r[3]=c->r[30]+0x000000FCu; // 8021E4C0
  c->r[4]=c->r[31]+0x000000D0u; // 8021E4C4
  c->lr=0x8021E4CCu; f_80078164(c); // 8021E4C8
  c->r[0]=R8(c->r[30]+0x000006A5u); // 8021E4CC
  cmps(c,0,(int32_t)c->r[0],0); // 8021E4D0
  if (crb(c,2)) { goto L_8021E550; } // 8021E4D4
  c->lr=0x8021E4DCu; f_80062F1C(c); // 8021E4D8
  c->r[4]=c->r[3]|c->r[3]; // 8021E4DC
  c->r[3]=c->r[30]|c->r[30]; // 8021E4E0
  c->lr=0x8021E4E8u; f_80062F4C(c); // 8021E4E4
  c->r[0]=R8(c->r[30]+0x00000010u); // 8021E4E8
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 8021E4EC
  c->r[3]=c->r[30]+c->r[0]; // 8021E4F0
  c->r[28]=R32(c->r[3]+0x00000014u); // 8021E4F4
  cmps(c,0,(int32_t)c->r[28],0); // 8021E4F8
  if (crb(c,2)) { goto L_8021E524; } // 8021E4FC
  c->r[29]=0u+0x00000000u; // 8021E500
  W32(c->r[31]+0x00000084u,c->r[1]); // 8021E504
  W8(c->r[31]+0x00000008u,c->r[29]); // 8021E508
  c->lr=0x8021E510u; f_80062F1C(c); // 8021E50C
  W32(c->r[28]+0x00000000u,c->r[3]); // 8021E510
  c->r[0]=c->r[13]+0xFFFF80E4u; // 8021E514
  W32(c->r[28]+0x00000004u,c->r[0]); // 8021E518
  W32(c->r[28]+0x00000008u,c->r[29]); // 8021E51C
  W32(c->r[28]+0x0000000Cu,c->r[29]); // 8021E520
L_8021E524:;
  W32(c->r[30]+0x00000008u,c->r[28]); // 8021E524
  c->r[0]=0u+0x00000000u; // 8021E528
  c->r[3]=c->r[30]|c->r[30]; // 8021E52C
  c->r[4]=c->r[28]|c->r[28]; // 8021E530
  W32(c->r[28]+0x00000008u,c->r[0]); // 8021E534
  c->r[0]=R32(c->r[30]+0x00000004u); // 8021E538
  W32(c->r[30]+0x0000000Cu,c->r[0]); // 8021E53C
  c->lr=0x8021E544u; f_8006306C(c); // 8021E540
  c->r[0]=R32(c->r[30]+0x000005BCu); // 8021E544
  c->r[0]=c->r[0]|0x40000000u; // 8021E548
  W32(c->r[30]+0x000005BCu,c->r[0]); // 8021E54C
L_8021E550:;
  c->r[10]=c->r[31]|c->r[31]; // 8021E550
  c->r[11]=c->r[10]+0x00000140u; // 8021E554
  c->lr=0x8021E55Cu; { c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8021E558
  c->r[10]=R32(c->r[1]+0x00000000u); // 8021E55C
  c->r[0]=R32(c->r[10]+0x00000004u); // 8021E560
  c->r[1]=c->r[10]|c->r[10]; // 8021E564
  c->lr=c->r[0]; // 8021E568
  return; // 8021E56C
}

// fn_8021E570
void f_8021E570(Ctx* __restrict c) {
  trace_call(0x8021E570u);
  {uint32_t ea=c->r[1]+0xFFFFFF50u; W32(ea,c->r[1]); c->r[1]=ea;} // 8021E570
  c->r[0]=c->lr; // 8021E574
  W32(c->r[1]+0x000000B4u,c->r[0]); // 8021E578
  W32(c->r[1]+0x000000ACu,c->r[31]); // 8021E57C
  W32(c->r[1]+0x000000A8u,c->r[30]); // 8021E580
  c->r[30]=c->r[3]|c->r[3]; // 8021E584
  c->r[4]=R32(c->r[3]+0x00000004u); // 8021E588
  cmps(c,0,(int32_t)c->r[4],0); // 8021E58C
  if (crb(c,2)) { goto L_8021E59C; } // 8021E590
  c->r[0]=R32(c->r[4]+0x00000008u); // 8021E594
  goto L_8021E5A0; // 8021E598
L_8021E59C:;
  c->r[0]=0u+0x00000000u; // 8021E59C
L_8021E5A0:;
  cmps(c,0,(int32_t)c->r[0],0); // 8021E5A0
  if (!crb(c,2)) { goto L_8021E5CC; } // 8021E5A4
  c->r[3]=c->r[30]|c->r[30]; // 8021E5A8
  c->lr=0x8021E5B0u; f_8021EB40(c); // 8021E5AC
  c->r[4]=c->r[3]|c->r[3]; // 8021E5B0
  c->r[3]=c->r[30]|c->r[30]; // 8021E5B4
  c->r[5]=0u+0x00000001u; // 8021E5B8
  c->lr=0x8021E5C0u; f_80064744(c); // 8021E5BC
  {uint32_t ea=c->r[2]+0xFFFFDF9Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8021E5C0
  c->r[3]=c->r[30]|c->r[30]; // 8021E5C4
  c->lr=0x8021E5CCu; f_8021E7AC(c); // 8021E5C8
L_8021E5CC:;
  c->r[3]=R32(c->r[30]+0x00000354u); // 8021E5CC
  cmps(c,0,(int32_t)c->r[3],0); // 8021E5D0
  if (!crb(c,2)) { goto L_8021E5E0; } // 8021E5D4
  c->r[31]=0u+0x00000000u; // 8021E5D8
  goto L_8021E5EC; // 8021E5DC
L_8021E5E0:;
  c->r[3]=R32(c->r[3]+0x00000004u); // 8021E5E0
  c->r[0]=sraw(c,c->r[3],31); // 8021E5E4
  c->r[31]=c->r[3]&~c->r[0]; // 8021E5E8
L_8021E5EC:;
  c->r[0]=c->r[31]+0xFFFFB5C7u; // 8021E5EC
  cmpu(c,0,c->r[0],0x00000001u); // 8021E5F0
  if (!crb(c,1)) { goto L_8021E604; } // 8021E5F4
  cmps(c,0,(int32_t)c->r[31],19030); // 8021E5F8
  if (crb(c,2)) { goto L_8021E624; } // 8021E5FC
  goto L_8021E644; // 8021E600
L_8021E604:;
  c->r[0]=R8(c->r[30]+0x000006A5u); // 8021E604
  cmps(c,0,(int32_t)c->r[0],0); // 8021E608
  if (crb(c,2)) { goto L_8021E644; } // 8021E60C
  c->r[3]=c->r[30]|c->r[30]; // 8021E610
  c->r[4]=0u+0x00004A56u; // 8021E614
  c->r[5]=0u+0x00000001u; // 8021E618
  c->lr=0x8021E620u; f_80064744(c); // 8021E61C
  goto L_8021E644; // 8021E620
L_8021E624:;
  {uint32_t ea=c->r[2]+0xFFFFDFA0u; c->f[1]=c->ps1[1]=RF32(ea);} // 8021E624
  c->r[3]=c->r[30]|c->r[30]; // 8021E628
  c->lr=0x8021E630u; f_80064A68(c); // 8021E62C
  cmps(c,0,(int32_t)c->r[3],0); // 8021E630
  if (crb(c,2)) { goto L_8021E644; } // 8021E634
  c->r[3]=c->r[30]+0x000005D0u; // 8021E638
  c->lr=0x8021E640u; f_800DBAA4(c); // 8021E63C
  c->lr=0x8021E644u; f_8020EC08(c); // 8021E640
L_8021E644:;
  c->r[3]=c->r[30]+0x000001B8u; // 8021E644
  c->r[4]=c->r[1]+0x00000078u; // 8021E648
  c->lr=0x8021E650u; f_80382F2C(c); // 8021E64C
  {uint32_t ea=c->r[30]+0x0000062Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8021E650
  c->r[3]=c->r[1]+0x00000048u; // 8021E654
  {uint32_t ea=c->r[30]+0x00000630u; c->f[2]=c->ps1[2]=RF32(ea);} // 8021E658
  c->r[4]=0u+0x00000001u; // 8021E65C
  {uint32_t ea=c->r[30]+0x00000634u; c->f[3]=c->ps1[3]=RF32(ea);} // 8021E660
  c->lr=0x8021E668u; f_800643C8(c); // 8021E664
  c->r[3]=c->r[1]+0x00000078u; // 8021E668
  c->r[4]=c->r[1]+0x00000018u; // 8021E66C
  c->lr=0x8021E674u; f_80382F2C(c); // 8021E670
  {uint32_t ea=c->r[1]+0x00000054u; c->f[1]=c->ps1[1]=RF32(ea);} // 8021E674
  c->r[3]=c->r[1]+0x00000008u; // 8021E678
  {uint32_t ea=c->r[1]+0x00000064u; c->f[2]=c->ps1[2]=RF32(ea);} // 8021E67C
  {uint32_t ea=c->r[1]+0x00000074u; c->f[3]=c->ps1[3]=RF32(ea);} // 8021E680
  c->lr=0x8021E688u; f_8005FD70(c); // 8021E684
  c->r[3]=c->r[1]+0x00000018u; // 8021E688
  c->r[4]=c->r[1]+0x00000008u; // 8021E68C
  c->lr=0x8021E694u; f_8005CDC8(c); // 8021E690
  c->r[3]=c->r[30]+0x000000FCu; // 8021E694
  c->r[4]=c->r[1]+0x00000018u; // 8021E698
  c->lr=0x8021E6A0u; f_80078164(c); // 8021E69C
  c->r[3]=c->r[30]+0x00000354u; // 8021E6A0
  c->lr=0x8021E6A8u; f_800667AC(c); // 8021E6A4
  cmps(c,0,(int32_t)c->r[3],0); // 8021E6A8
  if (crb(c,2)) { goto L_8021E6DC; } // 8021E6AC
  cmps(c,0,(int32_t)c->r[31],19030); // 8021E6B0
  if (!crb(c,2)) { goto L_8021E6DC; } // 8021E6B4
  c->r[3]=c->r[30]|c->r[30]; // 8021E6B8
  c->lr=0x8021E6C0u; f_8021EB40(c); // 8021E6BC
  c->r[4]=c->r[3]|c->r[3]; // 8021E6C0
  c->r[3]=c->r[30]|c->r[30]; // 8021E6C4
  c->r[5]=0u+0x00000001u; // 8021E6C8
  c->lr=0x8021E6D0u; f_80064744(c); // 8021E6CC
  {uint32_t ea=c->r[2]+0xFFFFDF9Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8021E6D0
  c->r[3]=c->r[30]|c->r[30]; // 8021E6D4
  c->lr=0x8021E6DCu; f_8021E7AC(c); // 8021E6D8
L_8021E6DC:;
  c->r[0]=R32(c->r[1]+0x000000B4u); // 8021E6DC
  c->r[31]=R32(c->r[1]+0x000000ACu); // 8021E6E0
  c->r[30]=R32(c->r[1]+0x000000A8u); // 8021E6E4
  c->lr=c->r[0]; // 8021E6E8
  c->r[1]=c->r[1]+0x000000B0u; // 8021E6EC
  return; // 8021E6F0
}

// fn_8021E6F4
void f_8021E6F4(Ctx* __restrict c) {
  trace_call(0x8021E6F4u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8021E6F4
  c->r[0]=c->lr; // 8021E6F8
  W32(c->r[1]+0x00000044u,c->r[0]); // 8021E6FC
  W32(c->r[1]+0x0000003Cu,c->r[31]); // 8021E700
  c->r[31]=c->r[3]|c->r[3]; // 8021E704
  c->r[4]=R32(c->r[3]+0x00000004u); // 8021E708
  cmps(c,0,(int32_t)c->r[4],0); // 8021E70C
  if (crb(c,2)) { goto L_8021E71C; } // 8021E710
  c->r[0]=R32(c->r[4]+0x00000008u); // 8021E714
  goto L_8021E720; // 8021E718
L_8021E71C:;
  c->r[0]=0u+0x00000000u; // 8021E71C
L_8021E720:;
  cmps(c,0,(int32_t)c->r[0],0); // 8021E720
  if (!crb(c,2)) { goto L_8021E75C; } // 8021E724
  c->r[3]=c->r[31]|c->r[31]; // 8021E728
  c->r[4]=0u+0x00004A52u; // 8021E72C
  c->r[5]=0u+0x00000001u; // 8021E730
  c->lr=0x8021E738u; f_80064744(c); // 8021E734
  c->r[3]=c->r[31]|c->r[31]; // 8021E738
  c->lr=0x8021E740u; f_8021E884(c); // 8021E73C
  c->lr=0x8021E744u; f_8011D684(c); // 8021E740
  c->r[4]=c->r[31]+0x00000644u; // 8021E744
  c->r[5]=c->r[31]+0x00000650u; // 8021E748
  c->lr=0x8021E750u; f_8011D248(c); // 8021E74C
  {uint32_t ea=c->r[2]+0xFFFFDFA4u; c->f[1]=c->ps1[1]=RF32(ea);} // 8021E750
  c->r[3]=c->r[31]|c->r[31]; // 8021E754
  c->lr=0x8021E75Cu; f_8021E7AC(c); // 8021E758
L_8021E75C:;
  c->r[3]=c->r[31]+0x000001B8u; // 8021E75C
  c->r[4]=c->r[1]+0x00000008u; // 8021E760
  c->lr=0x8021E768u; f_80382F2C(c); // 8021E764
  c->r[3]=c->r[1]+0x00000008u; // 8021E768
  c->r[4]=c->r[31]+0x00000644u; // 8021E76C
  c->r[5]=c->r[31]+0x00000650u; // 8021E770
  c->lr=0x8021E778u; f_8011D46C(c); // 8021E774
  c->r[3]=c->r[31]+0x000000FCu; // 8021E778
  c->r[4]=c->r[1]+0x00000008u; // 8021E77C
  c->lr=0x8021E784u; f_80078164(c); // 8021E780
  c->r[0]=R8(c->r[31]+0x000006A5u); // 8021E784
  cmps(c,0,(int32_t)c->r[0],0); // 8021E788
  if (crb(c,2)) { goto L_8021E798; } // 8021E78C
  c->r[3]=c->r[31]|c->r[31]; // 8021E790
  c->lr=0x8021E798u; f_8031749C(c); // 8021E794
L_8021E798:;
  c->r[0]=R32(c->r[1]+0x00000044u); // 8021E798
  c->r[31]=R32(c->r[1]+0x0000003Cu); // 8021E79C
  c->lr=c->r[0]; // 8021E7A0
  c->r[1]=c->r[1]+0x00000040u; // 8021E7A4
  return; // 8021E7A8
}

// fn_8021E7AC
void f_8021E7AC(Ctx* __restrict c) {
  trace_call(0x8021E7ACu);
  {uint32_t ea=c->r[2]+0xFFFFDF8Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8021E7AC
  c->r[4]=0u+0x00000001u; // 8021E7B0
  c->r[0]=0u+0x00000000u; // 8021E7B4
  {uint32_t ea=c->r[3]+0x0000069Cu; WF32(ea,c->f[0]);} // 8021E7B8
  {uint32_t ea=c->r[3]+0x000006A0u; WF32(ea,c->f[1]);} // 8021E7BC
  W8(c->r[3]+0x000006A4u,c->r[4]); // 8021E7C0
  W8(c->r[3]+0x000006A5u,c->r[0]); // 8021E7C4
  return; // 8021E7C8
}

// fn_8021E7CC
void f_8021E7CC(Ctx* __restrict c) {
  trace_call(0x8021E7CCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8021E7CC
  c->r[0]=c->lr; // 8021E7D0
  W32(c->r[1]+0x00000014u,c->r[0]); // 8021E7D4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8021E7D8
  W32(c->r[1]+0x00000008u,c->r[30]); // 8021E7DC
  c->r[30]=c->r[3]|c->r[3]; // 8021E7E0
  c->r[0]=R8(c->r[3]+0x000006A4u); // 8021E7E4
  cmps(c,0,(int32_t)c->r[0],0); // 8021E7E8
  if (crb(c,2)) { goto L_8021E86C; } // 8021E7EC
  c->r[0]=R8(c->r[13]+0xFFFFBB9Bu); // 8021E7F0
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 8021E7F4
  if (!crb(c,2)) { goto L_8021E834; } // 8021E7F8
  c->r[31]=0u+0x80730000u; // 8021E7FC
  c->r[3]=c->r[31]+0x00006D10u; // 8021E800
  c->lr=0x8021E808u; f_802D8298(c); // 8021E804
  c->r[3]=0u+0x806D0000u; // 8021E808
  c->r[4]=0u+0x80050000u; // 8021E80C
  c->r[3]=c->r[3]+0xFFFFC220u; // 8021E810
  c->r[5]=0u+0x80750000u; // 8021E814
  W32(c->r[31]+0x00006D10u,c->r[3]); // 8021E818
  c->r[3]=c->r[31]+0x00006D10u; // 8021E81C
  c->r[4]=c->r[4]+0xFFFF9D40u; // 8021E820
  c->r[5]=c->r[5]+0x000054ECu; // 8021E824
  c->lr=0x8021E82Cu; f_803A92B8(c); // 8021E828
  c->r[0]=0u+0x00000001u; // 8021E82C
  W8(c->r[13]+0xFFFFBB9Bu,c->r[0]); // 8021E830
L_8021E834:;
  c->r[3]=0u+0x80730000u; // 8021E834
  {uint32_t ea=c->r[30]+0x0000069Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8021E838
  c->r[3]=c->r[3]+0x00006D10u; // 8021E83C
  {uint32_t ea=c->r[30]+0x000006A0u; c->f[0]=c->ps1[0]=RF32(ea);} // 8021E840
  {uint32_t ea=c->r[3]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 8021E844
  c->f[1]=c->ps1[1]=S(c->f[1]+c->f[2]); // 8021E848
  {uint32_t ea=c->r[30]+0x0000069Cu; WF32(ea,c->f[1]);} // 8021E84C
  fcmp(c,0,c->f[0],c->f[1]); // 8021E850
  setcrb(c,2,crb(c,0)|crb(c,2)); // 8021E854
  if (!crb(c,2)) { goto L_8021E86C; } // 8021E858
  c->r[3]=0u+0x00000000u; // 8021E85C
  c->r[0]=0u+0x00000001u; // 8021E860
  W8(c->r[30]+0x000006A4u,c->r[3]); // 8021E864
  W8(c->r[30]+0x000006A5u,c->r[0]); // 8021E868
L_8021E86C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8021E86C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8021E870
  c->r[30]=R32(c->r[1]+0x00000008u); // 8021E874
  c->lr=c->r[0]; // 8021E878
  c->r[1]=c->r[1]+0x00000010u; // 8021E87C
  return; // 8021E880
}

// fn_8021E884
void f_8021E884(Ctx* __restrict c) {
  trace_call(0x8021E884u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8021E884
  c->r[0]=c->lr; // 8021E888
  W32(c->r[1]+0x00000014u,c->r[0]); // 8021E88C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8021E890
  c->r[31]=c->r[3]|c->r[3]; // 8021E894
  c->r[4]=R32(c->r[3]+0x0000044Cu); // 8021E898
  c->r[0]=R32(c->r[4]+0x000000C4u); // 8021E89C
  c->r[0]=rotl(c->r[0],10)&0x00000001u; cr0(c,c->r[0]); // 8021E8A0
  if (!crb(c,2)) { goto L_8021E8DC; } // 8021E8A4
  {uint32_t ea=c->r[4]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 8021E8A8
  {uint32_t ea=c->r[2]+0xFFFFDF8Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8021E8AC
  fcmp(c,0,c->f[1],c->f[0]); // 8021E8B0
  if (!crb(c,1)) { goto L_8021E8C0; } // 8021E8B4
  c->lr=0x8021E8BCu; f_8005E00C(c); // 8021E8B8
  goto L_8021E8D0; // 8021E8BC
L_8021E8C0:;
  c->r[0]=R32(c->r[4]+0x000000C4u); // 8021E8C0
  c->r[3]=rotl(c->r[0],0)&0xFFBFFFFFu; // 8021E8C4
  c->r[0]=c->r[3]+0x00400000u; // 8021E8C8
  W32(c->r[4]+0x000000C4u,c->r[0]); // 8021E8CC
L_8021E8D0:;
  c->r[3]=c->r[31]+0x000005D0u; // 8021E8D0
  c->lr=0x8021E8D8u; f_800DBAA4(c); // 8021E8D4
  c->lr=0x8021E8DCu; f_8020EC14(c); // 8021E8D8
L_8021E8DC:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8021E8DC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8021E8E0
  c->lr=c->r[0]; // 8021E8E4
  c->r[1]=c->r[1]+0x00000010u; // 8021E8E8
  return; // 8021E8EC
}

// fn_8021E8F0
void f_8021E8F0(Ctx* __restrict c) {
  trace_call(0x8021E8F0u);
  {uint32_t ea=c->r[1]+0xFFFFFEF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8021E8F0
  c->r[0]=c->lr; // 8021E8F4
  W32(c->r[1]+0x00000114u,c->r[0]); // 8021E8F8
  {uint32_t ea=c->r[1]+0x00000100u; WF64(ea,c->f[31]);} // 8021E8FC
  {uint32_t ea=c->r[1]+0x00000108u; psq_store(c,31,ea,0,0);} // 8021E900
  c->f[31]=c->f[3]; // 8021E904
  {uint32_t ea=c->r[1]+0x000000F0u; WF64(ea,c->f[30]);} // 8021E908
  {uint32_t ea=c->r[1]+0x000000F8u; psq_store(c,30,ea,0,0);} // 8021E90C
  c->f[30]=c->f[2]; // 8021E910
  {uint32_t ea=c->r[1]+0x000000E0u; WF64(ea,c->f[29]);} // 8021E914
  {uint32_t ea=c->r[1]+0x000000E8u; psq_store(c,29,ea,0,0);} // 8021E918
  c->f[29]=c->f[1]; // 8021E91C
  W32(c->r[1]+0x000000DCu,c->r[31]); // 8021E920
  c->r[31]=c->r[5]|c->r[5]; // 8021E924
  W32(c->r[1]+0x000000D8u,c->r[30]); // 8021E928
  c->r[30]=c->r[3]|c->r[3]; // 8021E92C
  c->r[0]=R8(c->r[4]+0x00000608u); // 8021E930
  cmps(c,0,(int32_t)c->r[0],0); // 8021E934
  if (!crb(c,2)) { goto L_8021E958; } // 8021E938
  c->r[4]=c->r[31]|c->r[31]; // 8021E93C
  c->r[3]=c->r[1]+0x000000A8u; // 8021E940
  c->lr=0x8021E948u; f_80064240(c); // 8021E944
  c->r[4]=c->r[30]|c->r[30]; // 8021E948
  c->r[3]=c->r[1]+0x000000A8u; // 8021E94C
  c->lr=0x8021E954u; f_80382F2C(c); // 8021E950
  goto L_8021EAEC; // 8021E954
L_8021E958:;
  c->r[3]=c->r[4]+0x000005D8u; // 8021E958
  c->r[4]=c->r[30]|c->r[30]; // 8021E95C
  c->lr=0x8021E964u; f_80382F2C(c); // 8021E960
  {uint32_t ea=c->r[30]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8021E964
  c->r[3]=c->r[1]+0x0000008Cu; // 8021E968
  {uint32_t ea=c->r[30]+0x0000001Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 8021E96C
  {uint32_t ea=c->r[30]+0x0000002Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 8021E970
  c->lr=0x8021E978u; f_8005FD70(c); // 8021E974
  c->r[3]=c->r[1]+0x00000098u; // 8021E978
  c->r[4]=c->r[1]+0x0000008Cu; // 8021E97C
  c->lr=0x8021E984u; f_8005DC84(c); // 8021E980
  {uint32_t ea=c->r[30]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 8021E984
  c->r[3]=c->r[1]+0x00000074u; // 8021E988
  {uint32_t ea=c->r[30]+0x00000018u; c->f[2]=c->ps1[2]=RF32(ea);} // 8021E98C
  {uint32_t ea=c->r[30]+0x00000028u; c->f[3]=c->ps1[3]=RF32(ea);} // 8021E990
  c->lr=0x8021E998u; f_8005FD70(c); // 8021E994
  c->f[1]=c->f[29]; // 8021E998
  c->r[3]=c->r[1]+0x00000080u; // 8021E99C
  c->r[4]=c->r[1]+0x00000074u; // 8021E9A0
  c->lr=0x8021E9A8u; f_8005ED34(c); // 8021E9A4
  c->r[3]=c->r[1]+0x00000098u; // 8021E9A8
  c->r[4]=c->r[1]+0x00000080u; // 8021E9AC
  c->lr=0x8021E9B4u; f_8021EB1C(c); // 8021E9B0
  {uint32_t ea=c->r[30]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 8021E9B4
  c->r[3]=c->r[1]+0x0000005Cu; // 8021E9B8
  {uint32_t ea=c->r[30]+0x00000014u; c->f[2]=c->ps1[2]=RF32(ea);} // 8021E9BC
  {uint32_t ea=c->r[30]+0x00000024u; c->f[3]=c->ps1[3]=RF32(ea);} // 8021E9C0
  c->lr=0x8021E9C8u; f_8005FD70(c); // 8021E9C4
  c->f[1]=c->f[30]; // 8021E9C8
  c->r[3]=c->r[1]+0x00000068u; // 8021E9CC
  c->r[4]=c->r[1]+0x0000005Cu; // 8021E9D0
  c->lr=0x8021E9D8u; f_8005ED34(c); // 8021E9D4
  c->r[3]=c->r[1]+0x00000098u; // 8021E9D8
  c->r[4]=c->r[1]+0x00000068u; // 8021E9DC
  c->lr=0x8021E9E4u; f_8021EB1C(c); // 8021E9E0
  {uint32_t ea=c->r[30]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 8021E9E4
  c->r[3]=c->r[1]+0x00000044u; // 8021E9E8
  {uint32_t ea=c->r[30]+0x00000010u; c->f[2]=c->ps1[2]=RF32(ea);} // 8021E9EC
  {uint32_t ea=c->r[30]+0x00000020u; c->f[3]=c->ps1[3]=RF32(ea);} // 8021E9F0
  c->lr=0x8021E9F8u; f_8005FD70(c); // 8021E9F4
  c->f[1]=c->f[31]; // 8021E9F8
  c->r[3]=c->r[1]+0x00000050u; // 8021E9FC
  c->r[4]=c->r[1]+0x00000044u; // 8021EA00
  c->lr=0x8021EA08u; f_8005ED34(c); // 8021EA04
  c->r[3]=c->r[1]+0x00000098u; // 8021EA08
  c->r[4]=c->r[1]+0x00000050u; // 8021EA0C
  c->lr=0x8021EA14u; f_8021EB1C(c); // 8021EA10
  cmps(c,0,(int32_t)c->r[31],0); // 8021EA14
  if (crb(c,2)) { goto L_8021EAE0; } // 8021EA18
  {uint32_t ea=c->r[30]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 8021EA1C
  c->r[3]=c->r[1]+0x0000002Cu; // 8021EA20
  {uint32_t ea=c->r[30]+0x00000018u; c->f[2]=c->ps1[2]=RF32(ea);} // 8021EA24
  {uint32_t ea=c->r[30]+0x00000028u; c->f[3]=c->ps1[3]=RF32(ea);} // 8021EA28
  c->lr=0x8021EA30u; f_8005FD70(c); // 8021EA2C
  {uint32_t ea=c->r[30]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 8021EA30
  c->r[3]=c->r[1]+0x00000038u; // 8021EA34
  {uint32_t ea=c->r[30]+0x00000014u; c->f[2]=c->ps1[2]=RF32(ea);} // 8021EA38
  {uint32_t ea=c->r[30]+0x00000024u; c->f[3]=c->ps1[3]=RF32(ea);} // 8021EA3C
  c->lr=0x8021EA44u; f_8005FD70(c); // 8021EA40
  c->r[31]=0u+0x806A0000u; // 8021EA44
  c->r[3]=c->r[1]+0x00000020u; // 8021EA48
  c->r[4]=c->r[1]+0x00000038u; // 8021EA4C
  c->r[5]=c->r[31]+0x00000AA8u; // 8021EA50
  c->lr=0x8021EA58u; f_8030E0BC(c); // 8021EA54
  c->r[3]=c->r[1]+0x0000002Cu; // 8021EA58
  c->r[4]=c->r[1]+0x00000014u; // 8021EA5C
  c->r[5]=c->r[1]+0x00000020u; // 8021EA60
  c->lr=0x8021EA68u; f_8005FE58(c); // 8021EA64
  c->r[3]=c->r[1]+0x00000014u; // 8021EA68
  c->r[5]=c->r[31]+0x00000AA8u; // 8021EA6C
  c->r[4]=c->r[3]|c->r[3]; // 8021EA70
  c->lr=0x8021EA78u; f_8030E0BC(c); // 8021EA74
  c->r[3]=c->r[1]+0x00000020u; // 8021EA78
  c->r[4]=c->r[1]+0x00000008u; // 8021EA7C
  c->r[5]=c->r[1]+0x00000014u; // 8021EA80
  c->lr=0x8021EA88u; f_8005FE58(c); // 8021EA84
  {uint32_t ea=c->r[1]+0x00000014u; c->f[0]=c->ps1[0]=RF32(ea);} // 8021EA88
  {uint32_t ea=c->r[30]+0x00000000u; WF32(ea,c->f[0]);} // 8021EA8C
  {uint32_t ea=c->r[2]+0xFFFFDF8Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8021EA90
  {uint32_t ea=c->r[1]+0x00000018u; c->f[1]=c->ps1[1]=RF32(ea);} // 8021EA94
  {uint32_t ea=c->r[30]+0x00000010u; WF32(ea,c->f[1]);} // 8021EA98
  {uint32_t ea=c->r[1]+0x0000001Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8021EA9C
  {uint32_t ea=c->r[30]+0x00000020u; WF32(ea,c->f[1]);} // 8021EAA0
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 8021EAA4
  {uint32_t ea=c->r[30]+0x00000004u; WF32(ea,c->f[1]);} // 8021EAA8
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8021EAAC
  {uint32_t ea=c->r[30]+0x00000014u; WF32(ea,c->f[1]);} // 8021EAB0
  {uint32_t ea=c->r[1]+0x00000010u; c->f[1]=c->ps1[1]=RF32(ea);} // 8021EAB4
  {uint32_t ea=c->r[30]+0x00000024u; WF32(ea,c->f[1]);} // 8021EAB8
  {uint32_t ea=c->r[1]+0x00000020u; c->f[1]=c->ps1[1]=RF32(ea);} // 8021EABC
  {uint32_t ea=c->r[30]+0x00000008u; WF32(ea,c->f[1]);} // 8021EAC0
  {uint32_t ea=c->r[1]+0x00000024u; c->f[1]=c->ps1[1]=RF32(ea);} // 8021EAC4
  {uint32_t ea=c->r[30]+0x00000018u; WF32(ea,c->f[1]);} // 8021EAC8
  {uint32_t ea=c->r[1]+0x00000028u; c->f[1]=c->ps1[1]=RF32(ea);} // 8021EACC
  {uint32_t ea=c->r[30]+0x00000028u; WF32(ea,c->f[1]);} // 8021EAD0
  {uint32_t ea=c->r[30]+0x0000000Cu; WF32(ea,c->f[0]);} // 8021EAD4
  {uint32_t ea=c->r[30]+0x0000001Cu; WF32(ea,c->f[0]);} // 8021EAD8
  {uint32_t ea=c->r[30]+0x0000002Cu; WF32(ea,c->f[0]);} // 8021EADC
L_8021EAE0:;
  c->r[3]=c->r[30]|c->r[30]; // 8021EAE0
  c->r[4]=c->r[1]+0x00000098u; // 8021EAE4
  c->lr=0x8021EAECu; f_8005CDC8(c); // 8021EAE8
L_8021EAEC:;
  c->r[0]=R32(c->r[1]+0x00000114u); // 8021EAEC
  {uint32_t ea=c->r[1]+0x00000108u; psq_load(c,31,ea,0,0);} // 8021EAF0
  {uint32_t ea=c->r[1]+0x00000100u; c->f[31]=RF64(ea);} // 8021EAF4
  {uint32_t ea=c->r[1]+0x000000F8u; psq_load(c,30,ea,0,0);} // 8021EAF8
  {uint32_t ea=c->r[1]+0x000000F0u; c->f[30]=RF64(ea);} // 8021EAFC
  {uint32_t ea=c->r[1]+0x000000E8u; psq_load(c,29,ea,0,0);} // 8021EB00
  {uint32_t ea=c->r[1]+0x000000E0u; c->f[29]=RF64(ea);} // 8021EB04
  c->r[31]=R32(c->r[1]+0x000000DCu); // 8021EB08
  c->r[30]=R32(c->r[1]+0x000000D8u); // 8021EB0C
  c->lr=c->r[0]; // 8021EB10
  c->r[1]=c->r[1]+0x00000110u; // 8021EB14
  return; // 8021EB18
}

// fn_8021EB1C
void f_8021EB1C(Ctx* __restrict c) {
  trace_call(0x8021EB1Cu);
  {uint32_t ea=c->r[3]+0x00000000u; psq_load(c,0,ea,0,0);} // 8021EB1C
  {uint32_t ea=c->r[4]+0x00000000u; psq_load(c,1,ea,0,0);} // 8021EB20
  {double t0=S(c->f[0]+c->f[1]), t1=S(c->ps1[0]+c->ps1[1]); c->f[0]=t0; c->ps1[0]=t1;} // 8021EB24
  {uint32_t ea=c->r[3]+0x00000000u; psq_store(c,0,ea,0,0);} // 8021EB28
  {uint32_t ea=c->r[3]+0x00000008u; psq_load(c,0,ea,1,0);} // 8021EB2C
  {uint32_t ea=c->r[4]+0x00000008u; psq_load(c,1,ea,1,0);} // 8021EB30
  {double t0=S(c->f[0]+c->f[1]), t1=S(c->ps1[0]+c->ps1[1]); c->f[0]=t0; c->ps1[0]=t1;} // 8021EB34
  {uint32_t ea=c->r[3]+0x00000008u; psq_store(c,0,ea,1,0);} // 8021EB38
  return; // 8021EB3C
}

// fn_8021EB40
void f_8021EB40(Ctx* __restrict c) {
  trace_call(0x8021EB40u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8021EB40
  c->r[0]=c->lr; // 8021EB44
  c->r[3]=R32(c->r[2]+0xFFFFDFA8u); // 8021EB48
  W32(c->r[1]+0x00000014u,c->r[0]); // 8021EB4C
  c->r[0]=R32(c->r[2]+0xFFFFDFACu); // 8021EB50
  W32(c->r[1]+0x00000008u,c->r[3]); // 8021EB54
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 8021EB58
  c->lr=0x8021EB60u; f_803B220C(c); // 8021EB5C
  c->r[4]=rotl(c->r[3],1)&0x00000001u; // 8021EB60
  c->r[0]=rotl(c->r[3],0)&0x00000001u; // 8021EB64
  c->r[0]=c->r[0]^c->r[4]; // 8021EB68
  c->r[3]=c->r[1]+0x00000008u; // 8021EB6C
  c->r[0]=c->r[0]-c->r[4]; // 8021EB70
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 8021EB74
  c->r[3]=R32(c->r[3]+c->r[0]); // 8021EB78
  c->r[0]=R32(c->r[1]+0x00000014u); // 8021EB7C
  c->lr=c->r[0]; // 8021EB80
  c->r[1]=c->r[1]+0x00000010u; // 8021EB84
  return; // 8021EB88
}

// fn_8021EB8C
void f_8021EB8C(Ctx* __restrict c) {
  trace_call(0x8021EB8Cu);
  {uint32_t ea=c->r[1]+0xFFFFFF90u; W32(ea,c->r[1]); c->r[1]=ea;} // 8021EB8C
  c->r[0]=c->lr; // 8021EB90
  W32(c->r[1]+0x00000074u,c->r[0]); // 8021EB94
  c->r[11]=c->r[1]+0x00000070u; // 8021EB98
  c->lr=0x8021EBA0u; { W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8021EB9C
  c->r[31]=c->r[1]|c->r[1]; // 8021EBA0
  c->r[0]=R32(c->r[4]+0x00000000u); // 8021EBA4
  cmps(c,0,(int32_t)c->r[5],0); // 8021EBA8
  W32(c->r[3]+0x000005D0u,c->r[0]); // 8021EBAC
  c->r[30]=c->r[3]|c->r[3]; // 8021EBB0
  c->r[28]=c->r[6]|c->r[6]; // 8021EBB4
  c->r[0]=R32(c->r[4]+0x00000004u); // 8021EBB8
  W32(c->r[3]+0x000005D4u,c->r[0]); // 8021EBBC
  {uint32_t ea=c->r[3]+0x00000624u; WF32(ea,c->f[1]);} // 8021EBC0
  if (crb(c,2)) { goto L_8021EBE4; } // 8021EBC4
  cmps(c,0,(int32_t)c->r[5],1); // 8021EBC8
  if (crb(c,2)) { goto L_8021EC14; } // 8021EBCC
  cmps(c,0,(int32_t)c->r[5],2); // 8021EBD0
  if (crb(c,2)) { goto L_8021EC44; } // 8021EBD4
  cmps(c,0,(int32_t)c->r[5],3); // 8021EBD8
  if (crb(c,2)) { goto L_8021EC74; } // 8021EBDC
  goto L_8021ECA0; // 8021EBE0
L_8021EBE4:;
  c->r[4]=0u+0x806A0000u; // 8021EBE4
  c->r[3]=c->r[3]+0x000005D0u; // 8021EBE8
  c->r[4]=c->r[4]+0xFFFF8FD0u; // 8021EBEC
  c->r[29]=c->r[4]+0x00000001u; // 8021EBF0
  c->lr=0x8021EBF8u; f_800DBAA4(c); // 8021EBF4
  c->r[4]=c->r[29]|c->r[29]; // 8021EBF8
  c->r[3]=c->r[3]+0x000000FCu; // 8021EBFC
  c->lr=0x8021EC04u; f_802E6F14(c); // 8021EC00
  c->r[4]=c->r[3]|c->r[3]; // 8021EC04
  c->r[3]=c->r[30]|c->r[30]; // 8021EC08
  c->lr=0x8021EC10u; f_8005CE00(c); // 8021EC0C
  goto L_8021ECA0; // 8021EC10
L_8021EC14:;
  c->r[4]=0u+0x806A0000u; // 8021EC14
  c->r[3]=c->r[3]+0x000005D0u; // 8021EC18
  c->r[4]=c->r[4]+0xFFFF8FD0u; // 8021EC1C
  c->r[29]=c->r[4]+0x0000000Eu; // 8021EC20
  c->lr=0x8021EC28u; f_800DBAA4(c); // 8021EC24
  c->r[4]=c->r[29]|c->r[29]; // 8021EC28
  c->r[3]=c->r[3]+0x000000FCu; // 8021EC2C
  c->lr=0x8021EC34u; f_802E6F14(c); // 8021EC30
  c->r[4]=c->r[3]|c->r[3]; // 8021EC34
  c->r[3]=c->r[30]|c->r[30]; // 8021EC38
  c->lr=0x8021EC40u; f_8005CE00(c); // 8021EC3C
  goto L_8021ECA0; // 8021EC40
L_8021EC44:;
  c->r[4]=0u+0x806A0000u; // 8021EC44
  c->r[3]=c->r[3]+0x000005D0u; // 8021EC48
  c->r[4]=c->r[4]+0xFFFF8FD0u; // 8021EC4C
  c->r[29]=c->r[4]+0x0000001Bu; // 8021EC50
  c->lr=0x8021EC58u; f_800DBAA4(c); // 8021EC54
  c->r[4]=c->r[29]|c->r[29]; // 8021EC58
  c->r[3]=c->r[3]+0x000000FCu; // 8021EC5C
  c->lr=0x8021EC64u; f_802E6F14(c); // 8021EC60
  c->r[4]=c->r[3]|c->r[3]; // 8021EC64
  c->r[3]=c->r[30]|c->r[30]; // 8021EC68
  c->lr=0x8021EC70u; f_8005CE00(c); // 8021EC6C
  goto L_8021ECA0; // 8021EC70
L_8021EC74:;
  c->r[4]=0u+0x806A0000u; // 8021EC74
  c->r[3]=c->r[3]+0x000005D0u; // 8021EC78
  c->r[4]=c->r[4]+0xFFFF8FD0u; // 8021EC7C
  c->r[29]=c->r[4]+0x00000028u; // 8021EC80
  c->lr=0x8021EC88u; f_800DBAA4(c); // 8021EC84
  c->r[4]=c->r[29]|c->r[29]; // 8021EC88
  c->r[3]=c->r[3]+0x000000FCu; // 8021EC8C
  c->lr=0x8021EC94u; f_802E6F14(c); // 8021EC90
  c->r[4]=c->r[3]|c->r[3]; // 8021EC94
  c->r[3]=c->r[30]|c->r[30]; // 8021EC98
  c->lr=0x8021ECA0u; f_8005CE00(c); // 8021EC9C
L_8021ECA0:;
  cmps(c,0,(int32_t)c->r[28],5); // 8021ECA0
  if (!crb(c,2)) { goto L_8021ED1C; } // 8021ECA4
  {uint32_t ea=c->r[2]+0xFFFFDFB0u; c->f[11]=c->ps1[11]=RF32(ea);} // 8021ECA8
  c->r[3]=c->r[31]+0x00000028u; // 8021ECAC
  {uint32_t ea=c->r[2]+0xFFFFDFB4u; c->f[10]=c->ps1[10]=RF32(ea);} // 8021ECB0
  c->r[4]=c->r[30]+0x000005D8u; // 8021ECB4
  {uint32_t ea=c->r[2]+0xFFFFDFB8u; c->f[9]=c->ps1[9]=RF32(ea);} // 8021ECB8
  {uint32_t ea=c->r[2]+0xFFFFDFBCu; c->f[8]=c->ps1[8]=RF32(ea);} // 8021ECBC
  {uint32_t ea=c->r[2]+0xFFFFDFC0u; c->f[7]=c->ps1[7]=RF32(ea);} // 8021ECC0
  {uint32_t ea=c->r[2]+0xFFFFDFC4u; c->f[6]=c->ps1[6]=RF32(ea);} // 8021ECC4
  {uint32_t ea=c->r[2]+0xFFFFDFC8u; c->f[5]=c->ps1[5]=RF32(ea);} // 8021ECC8
  {uint32_t ea=c->r[2]+0xFFFFDFCCu; c->f[4]=c->ps1[4]=RF32(ea);} // 8021ECCC
  {uint32_t ea=c->r[2]+0xFFFFDFD0u; c->f[3]=c->ps1[3]=RF32(ea);} // 8021ECD0
  {uint32_t ea=c->r[2]+0xFFFFDFD4u; c->f[2]=c->ps1[2]=RF32(ea);} // 8021ECD4
  {uint32_t ea=c->r[2]+0xFFFFDFD8u; c->f[1]=c->ps1[1]=RF32(ea);} // 8021ECD8
  {uint32_t ea=c->r[2]+0xFFFFDFDCu; c->f[0]=c->ps1[0]=RF32(ea);} // 8021ECDC
  {uint32_t ea=c->r[31]+0x00000028u; WF32(ea,c->f[11]);} // 8021ECE0
  {uint32_t ea=c->r[31]+0x0000002Cu; WF32(ea,c->f[10]);} // 8021ECE4
  {uint32_t ea=c->r[31]+0x00000030u; WF32(ea,c->f[9]);} // 8021ECE8
  {uint32_t ea=c->r[31]+0x00000034u; WF32(ea,c->f[8]);} // 8021ECEC
  {uint32_t ea=c->r[31]+0x00000038u; WF32(ea,c->f[7]);} // 8021ECF0
  {uint32_t ea=c->r[31]+0x0000003Cu; WF32(ea,c->f[6]);} // 8021ECF4
  {uint32_t ea=c->r[31]+0x00000040u; WF32(ea,c->f[5]);} // 8021ECF8
  {uint32_t ea=c->r[31]+0x00000044u; WF32(ea,c->f[4]);} // 8021ECFC
  {uint32_t ea=c->r[31]+0x00000048u; WF32(ea,c->f[3]);} // 8021ED00
  {uint32_t ea=c->r[31]+0x0000004Cu; WF32(ea,c->f[2]);} // 8021ED04
  {uint32_t ea=c->r[31]+0x00000050u; WF32(ea,c->f[1]);} // 8021ED08
  {uint32_t ea=c->r[31]+0x00000054u; WF32(ea,c->f[0]);} // 8021ED0C
  c->lr=0x8021ED14u; f_80382F2C(c); // 8021ED10
  c->r[0]=0u+0x00000001u; // 8021ED14
  W8(c->r[30]+0x00000608u,c->r[0]); // 8021ED18
L_8021ED1C:;
  c->lr=0x8021ED20u; f_80062EBC(c); // 8021ED1C
  c->r[4]=c->r[3]|c->r[3]; // 8021ED20
  c->r[3]=c->r[30]|c->r[30]; // 8021ED24
  c->lr=0x8021ED2Cu; f_80062F4C(c); // 8021ED28
  c->r[0]=R8(c->r[30]+0x00000010u); // 8021ED2C
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 8021ED30
  c->r[3]=c->r[30]+c->r[0]; // 8021ED34
  c->r[28]=R32(c->r[3]+0x00000014u); // 8021ED38
  cmps(c,0,(int32_t)c->r[28],0); // 8021ED3C
  if (crb(c,2)) { goto L_8021ED68; } // 8021ED40
  c->r[29]=0u+0x00000000u; // 8021ED44
  W32(c->r[31]+0x00000024u,c->r[1]); // 8021ED48
  W8(c->r[31]+0x00000008u,c->r[29]); // 8021ED4C
  c->lr=0x8021ED54u; f_80062EBC(c); // 8021ED50
  W32(c->r[28]+0x00000000u,c->r[3]); // 8021ED54
  c->r[0]=c->r[13]+0xFFFF80D8u; // 8021ED58
  W32(c->r[28]+0x00000004u,c->r[0]); // 8021ED5C
  W32(c->r[28]+0x00000008u,c->r[29]); // 8021ED60
  W32(c->r[28]+0x0000000Cu,c->r[29]); // 8021ED64
L_8021ED68:;
  W32(c->r[30]+0x00000008u,c->r[28]); // 8021ED68
  c->r[0]=0u+0x00000000u; // 8021ED6C
  c->r[3]=c->r[30]|c->r[30]; // 8021ED70
  c->r[4]=c->r[28]|c->r[28]; // 8021ED74
  W32(c->r[28]+0x00000008u,c->r[0]); // 8021ED78
  c->r[0]=R32(c->r[30]+0x00000004u); // 8021ED7C
  W32(c->r[30]+0x0000000Cu,c->r[0]); // 8021ED80
  c->lr=0x8021ED88u; f_8006306C(c); // 8021ED84
  c->r[0]=R32(c->r[30]+0x000005BCu); // 8021ED88
  c->r[10]=c->r[31]|c->r[31]; // 8021ED8C
  c->r[11]=c->r[10]+0x00000070u; // 8021ED90
  c->r[0]=c->r[0]|0x40000000u; // 8021ED94
  W32(c->r[30]+0x000005BCu,c->r[0]); // 8021ED98
  c->lr=0x8021EDA0u; { c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8021ED9C
  c->r[10]=R32(c->r[1]+0x00000000u); // 8021EDA0
  c->r[0]=R32(c->r[10]+0x00000004u); // 8021EDA4
  c->r[1]=c->r[10]|c->r[10]; // 8021EDA8
  c->lr=c->r[0]; // 8021EDAC
  return; // 8021EDB0
}

// fn_8021EDB4
void f_8021EDB4(Ctx* __restrict c) {
  trace_call(0x8021EDB4u);
  return; // 8021EDB4
}

// fn_8021EDB8
void f_8021EDB8(Ctx* __restrict c) {
  trace_call(0x8021EDB8u);
  c->r[3]=c->r[3]+0xFFFFFCACu; // 8021EDB8
  f_8021E0C8(c); return; // 8021EDBC
}

// fn_8021EDC0
void f_8021EDC0(Ctx* __restrict c) {
  trace_call(0x8021EDC0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8021EDC0
  c->r[0]=c->lr; // 8021EDC4
  c->r[4]=0u+0x806E0000u; // 8021EDC8
  c->r[5]=0u+0x00000030u; // 8021EDCC
  W32(c->r[1]+0x00000014u,c->r[0]); // 8021EDD0
  c->r[4]=c->r[4]+0x000071D0u; // 8021EDD4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8021EDD8
  c->r[31]=c->r[3]|c->r[3]; // 8021EDDC
  W32(c->r[3]+0x0000002Cu,c->r[4]); // 8021EDE0
  c->r[4]=0u+0x00000000u; // 8021EDE4
  c->lr=0x8021EDECu; f_800043EC(c); // 8021EDE8
  c->r[0]=0u+0xFFFFFFFFu; // 8021EDEC
  W32(c->r[31]+0x0000000Cu,c->r[0]); // 8021EDF0
  c->r[3]=c->r[31]|c->r[31]; // 8021EDF4
  W32(c->r[31]+0x00000014u,c->r[0]); // 8021EDF8
  W32(c->r[31]+0x00000020u,c->r[0]); // 8021EDFC
  W32(c->r[31]+0x0000001Cu,c->r[0]); // 8021EE00
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8021EE04
  c->r[0]=R32(c->r[1]+0x00000014u); // 8021EE08
  c->lr=c->r[0]; // 8021EE0C
  c->r[1]=c->r[1]+0x00000010u; // 8021EE10
  return; // 8021EE14
}

// dtor_8021EE18
void f_8021EE18(Ctx* __restrict c) {
  return; // 8021EE18
}

// fn_8021EE1C
void f_8021EE1C(Ctx* __restrict c) {
  trace_call(0x8021EE1Cu);
  W32(c->r[3]+0x00000000u,c->r[4]); // 8021EE1C
  W32(c->r[3]+0x00000004u,c->r[5]); // 8021EE20
  W32(c->r[3]+0x00000008u,c->r[7]); // 8021EE24
  W32(c->r[3]+0x00000010u,c->r[8]); // 8021EE28
  W32(c->r[3]+0x0000001Cu,c->r[6]); // 8021EE2C
  c->r[3]=0u+0x00000001u; // 8021EE30
  return; // 8021EE34
}

// fn_8021EE38
void f_8021EE38(Ctx* __restrict c) {
  trace_call(0x8021EE38u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8021EE38
  c->r[0]=c->lr; // 8021EE3C
  W32(c->r[1]+0x00000014u,c->r[0]); // 8021EE40
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8021EE44
  c->r[31]=c->r[3]|c->r[3]; // 8021EE48
  c->r[0]=R32(c->r[3]+0x00000020u); // 8021EE4C
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 8021EE50
  if (!crb(c,2)) { goto L_8021EE9C; } // 8021EE54
  c->lr=0x8021EE5Cu; f_8021F400(c); // 8021EE58
  cmps(c,0,(int32_t)c->r[3],0); // 8021EE5C
  if (crb(c,2)) { goto L_8021EE78; } // 8021EE60
  c->r[3]=c->r[31]|c->r[31]; // 8021EE64
  c->lr=0x8021EE6Cu; f_8021F400(c); // 8021EE68
  c->lr=0x8021EE70u; f_802ECDA0(c); // 8021EE6C
  cmps(c,0,(int32_t)c->r[3],0); // 8021EE70
  if (crb(c,2)) { goto L_8021EE9C; } // 8021EE74
L_8021EE78:;
  c->r[3]=c->r[31]|c->r[31]; // 8021EE78
  c->lr=0x8021EE80u; f_8021F3C4(c); // 8021EE7C
  c->r[4]=R32(c->r[31]+0x00000020u); // 8021EE80
  c->lr=0x8021EE88u; f_802E9E68(c); // 8021EE84
  {uint32_t ea=c->r[31]+0x00000024u; c->f[1]=c->ps1[1]=RF32(ea);} // 8021EE88
  c->r[4]=c->r[3]|c->r[3]; // 8021EE8C
  c->r[5]=R8(c->r[31]+0x00000028u); // 8021EE90
  c->r[3]=c->r[31]|c->r[31]; // 8021EE94
  c->lr=0x8021EE9Cu; f_8021F0B4(c); // 8021EE98
L_8021EE9C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8021EE9C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8021EEA0
  c->lr=c->r[0]; // 8021EEA4
  c->r[1]=c->r[1]+0x00000010u; // 8021EEA8
  return; // 8021EEAC
}

// fn_8021EEB0
void f_8021EEB0(Ctx* __restrict c) {
  trace_call(0x8021EEB0u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8021EEB0
  c->r[0]=c->lr; // 8021EEB4
  W32(c->r[1]+0x00000034u,c->r[0]); // 8021EEB8
  c->r[11]=c->r[1]+0x00000020u; // 8021EEBC
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[31]);} // 8021EEC0
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,31,ea,0,0);} // 8021EEC4
  c->lr=0x8021EECCu; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8021EEC8
  c->f[31]=c->f[1]; // 8021EECC
  c->r[31]=c->r[3]|c->r[3]; // 8021EED0
  c->r[27]=c->r[4]|c->r[4]; // 8021EED4
  c->r[30]=c->r[5]|c->r[5]; // 8021EED8
  c->lr=0x8021EEE0u; f_8021F3C4(c); // 8021EEDC
  c->r[28]=c->r[3]|c->r[3]; // 8021EEE0
  c->r[3]=c->r[31]|c->r[31]; // 8021EEE4
  c->lr=0x8021EEECu; f_8021F340(c); // 8021EEE8
  cmps(c,0,(int32_t)c->r[27],0); // 8021EEEC
  if (crb(c,0)) { goto L_8021EF0C; } // 8021EEF0
  c->r[3]=c->r[28]|c->r[28]; // 8021EEF4
  c->r[4]=c->r[27]|c->r[27]; // 8021EEF8
  c->lr=0x8021EF00u; f_802E9CCC(c); // 8021EEFC
  c->lr=0x8021EF04u; f_800E736C(c); // 8021EF00
  c->r[29]=c->r[3]|c->r[3]; // 8021EF04
  goto L_8021EF10; // 8021EF08
L_8021EF0C:;
  c->r[29]=0u+0x00000000u; // 8021EF0C
L_8021EF10:;
  cmps(c,0,(int32_t)c->r[29],0); // 8021EF10
  if (!crb(c,2)) { goto L_8021EF94; } // 8021EF14
  c->r[3]=c->r[31]|c->r[31]; // 8021EF18
  c->lr=0x8021EF20u; f_8021F400(c); // 8021EF1C
  cmps(c,0,(int32_t)c->r[3],0); // 8021EF20
  if (crb(c,2)) { goto L_8021EF50; } // 8021EF24
  c->r[3]=c->r[31]|c->r[31]; // 8021EF28
  c->lr=0x8021EF30u; f_8021F3C4(c); // 8021EF2C
  c->r[0]=R8(c->r[31]+0x00000018u); // 8021EF30
  c->f[2]=c->f[31]; // 8021EF34
  {uint32_t ea=c->r[2]+0xFFFFDFE4u; c->f[1]=c->ps1[1]=RF32(ea);} // 8021EF38
  c->r[5]=0u+0x00000000u; // 8021EF3C
  c->r[0]=rotl(c->r[0],3)&0xFFFFFFF8u; // 8021EF40
  c->r[4]=c->r[31]+c->r[0]; // 8021EF44
  c->r[4]=R32(c->r[4]+0x0000000Cu); // 8021EF48
  c->lr=0x8021EF50u; f_802E9170(c); // 8021EF4C
L_8021EF50:;
  c->r[3]=c->r[31]|c->r[31]; // 8021EF50
  c->lr=0x8021EF58u; f_8021F440(c); // 8021EF54
  cmps(c,0,(int32_t)c->r[3],0); // 8021EF58
  if (crb(c,2)) { goto L_8021EF8C; } // 8021EF5C
  c->r[3]=c->r[31]|c->r[31]; // 8021EF60
  c->lr=0x8021EF68u; f_8021F3C4(c); // 8021EF64
  c->r[0]=R8(c->r[31]+0x00000018u); // 8021EF68
  c->f[2]=c->f[31]; // 8021EF6C
  {uint32_t ea=c->r[2]+0xFFFFDFE4u; c->f[1]=c->ps1[1]=RF32(ea);} // 8021EF70
  c->r[5]=0u+0x00000000u; // 8021EF74
  c->r[0]=cntlz(c->r[0]); // 8021EF78
  c->r[0]=rotl(c->r[0],30)&0x3FFFFFF8u; // 8021EF7C
  c->r[4]=c->r[31]+c->r[0]; // 8021EF80
  c->r[4]=R32(c->r[4]+0x0000000Cu); // 8021EF84
  c->lr=0x8021EF8Cu; f_802E9170(c); // 8021EF88
L_8021EF8C:;
  c->r[3]=0u+0x00000001u; // 8021EF8C
  goto L_8021F094; // 8021EF90
L_8021EF94:;
  cmps(c,0,(int32_t)c->r[30],0); // 8021EF94
  if (!crb(c,2)) { goto L_8021EFBC; } // 8021EF98
  c->r[3]=c->r[31]|c->r[31]; // 8021EF9C
  c->lr=0x8021EFA4u; f_8021F35C(c); // 8021EFA0
  c->r[4]=c->r[29]|c->r[29]; // 8021EFA4
  c->lr=0x8021EFACu; f_803B393C(c); // 8021EFA8
  cmps(c,0,(int32_t)c->r[3],0); // 8021EFAC
  if (!crb(c,2)) { goto L_8021EFBC; } // 8021EFB0
  c->r[3]=0u+0x00000001u; // 8021EFB4
  goto L_8021F094; // 8021EFB8
L_8021EFBC:;
  c->r[4]=R8(c->r[31]+0x00000018u); // 8021EFBC
  c->r[3]=c->r[31]|c->r[31]; // 8021EFC0
  c->r[0]=cntlz(c->r[4]); // 8021EFC4
  c->r[4]=rotl(c->r[4],3)&0xFFFFFFF8u; // 8021EFC8
  c->r[0]=rotl(c->r[0],30)&0x3FFFFFF8u; // 8021EFCC
  c->r[29]=c->r[31]+c->r[4]; // 8021EFD0
  c->r[30]=c->r[31]+c->r[0]; // 8021EFD4
  c->lr=0x8021EFDCu; f_8021F3B4(c); // 8021EFD8
  cmps(c,0,(int32_t)c->r[3],0); // 8021EFDC
  if (crb(c,2)) { goto L_8021F074; } // 8021EFE0
  c->r[4]=R32(c->r[29]+0x0000000Cu); // 8021EFE4
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[27]); // 8021EFE8
  c->r[0]=rotl(c->r[4],1)&0x00000001u; // 8021EFEC
  c->r[29]=c->r[0]^0x00000001u; // 8021EFF0
  if (!crb(c,2)) { goto L_8021EFFC; } // 8021EFF4
  c->r[29]=0u+0x00000000u; // 8021EFF8
L_8021EFFC:;
  cmps(c,0,(int32_t)c->r[29],0); // 8021EFFC
  if (crb(c,2)) { goto L_8021F018; } // 8021F000
  c->f[2]=c->f[31]; // 8021F004
  {uint32_t ea=c->r[2]+0xFFFFDFE4u; c->f[1]=c->ps1[1]=RF32(ea);} // 8021F008
  c->r[3]=c->r[28]|c->r[28]; // 8021F00C
  c->r[5]=0u+0x00000000u; // 8021F010
  c->lr=0x8021F018u; f_802E9170(c); // 8021F014
L_8021F018:;
  cmps(c,0,(int32_t)c->r[29],0); // 8021F018
  {uint32_t ea=c->r[2]+0xFFFFDFE8u; c->f[2]=c->ps1[2]=RF32(ea);} // 8021F01C
  if (crb(c,2)) { goto L_8021F028; } // 8021F020
  {uint32_t ea=c->r[2]+0xFFFFDFE4u; c->f[2]=c->ps1[2]=RF32(ea);} // 8021F024
L_8021F028:;
  c->r[5]=R32(c->r[30]+0x00000008u); // 8021F028
  c->r[3]=c->r[31]|c->r[31]; // 8021F02C
  {uint32_t ea=c->r[2]+0xFFFFDFE4u; c->f[1]=c->ps1[1]=RF32(ea);} // 8021F030
  c->r[4]=c->r[27]|c->r[27]; // 8021F034
  c->lr=0x8021F03Cu; f_8021F484(c); // 8021F038
  cmps(c,0,(int32_t)c->r[29],0); // 8021F03C
  if (crb(c,2)) { goto L_8021F05C; } // 8021F040
  c->f[2]=c->f[31]; // 8021F044
  {uint32_t ea=c->r[2]+0xFFFFDFE8u; c->f[1]=c->ps1[1]=RF32(ea);} // 8021F048
  c->r[3]=c->r[28]|c->r[28]; // 8021F04C
  c->r[4]=c->r[27]|c->r[27]; // 8021F050
  c->r[5]=0u+0x00000000u; // 8021F054
  c->lr=0x8021F05Cu; f_802E9170(c); // 8021F058
L_8021F05C:;
  W32(c->r[30]+0x0000000Cu,c->r[27]); // 8021F05C
  c->r[0]=R8(c->r[31]+0x00000018u); // 8021F060
  c->r[0]=cntlz(c->r[0]); // 8021F064
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 8021F068
  W8(c->r[31]+0x00000018u,c->r[0]); // 8021F06C
  goto L_8021F090; // 8021F070
L_8021F074:;
  c->r[5]=R32(c->r[29]+0x00000008u); // 8021F074
  c->r[3]=c->r[31]|c->r[31]; // 8021F078
  {uint32_t ea=c->r[2]+0xFFFFDFE4u; c->f[1]=c->ps1[1]=RF32(ea);} // 8021F07C
  c->r[4]=c->r[27]|c->r[27]; // 8021F080
  {uint32_t ea=c->r[2]+0xFFFFDFE8u; c->f[2]=c->ps1[2]=RF32(ea);} // 8021F084
  c->lr=0x8021F08Cu; f_8021F484(c); // 8021F088
  W32(c->r[29]+0x0000000Cu,c->r[27]); // 8021F08C
L_8021F090:;
  c->r[3]=0u+0x00000001u; // 8021F090
L_8021F094:;
  c->r[11]=c->r[1]+0x00000020u; // 8021F094
  {uint32_t ea=c->r[1]+0x00000028u; psq_load(c,31,ea,0,0);} // 8021F098
  {uint32_t ea=c->r[1]+0x00000020u; c->f[31]=RF64(ea);} // 8021F09C
  c->lr=0x8021F0A4u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8021F0A0
  c->r[0]=R32(c->r[1]+0x00000034u); // 8021F0A4
  c->lr=c->r[0]; // 8021F0A8
  c->r[1]=c->r[1]+0x00000030u; // 8021F0AC
  return; // 8021F0B0
}

// fn_8021F0B4
void f_8021F0B4(Ctx* __restrict c) {
  trace_call(0x8021F0B4u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8021F0B4
  c->r[0]=c->lr; // 8021F0B8
  cmps(c,0,(int32_t)c->r[4],0); // 8021F0BC
  W32(c->r[1]+0x00000024u,c->r[0]); // 8021F0C0
  {uint32_t ea=c->r[1]+0x00000018u; WF64(ea,c->f[31]);} // 8021F0C4
  c->f[31]=c->f[1]; // 8021F0C8
  {uint32_t ea=c->r[1]+0x0000000Cu; for(int i=29;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 8021F0CC
  c->r[29]=c->r[3]|c->r[3]; // 8021F0D0
  c->r[30]=c->r[4]|c->r[4]; // 8021F0D4
  c->r[31]=c->r[5]|c->r[5]; // 8021F0D8
  if (crb(c,2)) { goto L_8021F0EC; } // 8021F0DC
  c->lr=0x8021F0E4u; f_8021F3C4(c); // 8021F0E0
  c->r[4]=c->r[30]|c->r[30]; // 8021F0E4
  c->lr=0x8021F0ECu; f_802E9DB4(c); // 8021F0E8
L_8021F0EC:;
  cmps(c,0,(int32_t)c->r[30],0); // 8021F0EC
  if (crb(c,2)) { goto L_8021F108; } // 8021F0F0
  c->r[3]=c->r[29]|c->r[29]; // 8021F0F4
  c->lr=0x8021F0FCu; f_8021F3C4(c); // 8021F0F8
  c->r[4]=c->r[30]|c->r[30]; // 8021F0FC
  c->lr=0x8021F104u; f_802E9DB4(c); // 8021F100
  goto L_8021F10C; // 8021F104
L_8021F108:;
  c->r[3]=0u+0xFFFFFFFFu; // 8021F108
L_8021F10C:;
  c->f[1]=c->f[31]; // 8021F10C
  c->r[4]=c->r[3]|c->r[3]; // 8021F110
  c->r[3]=c->r[29]|c->r[29]; // 8021F114
  c->r[5]=c->r[31]|c->r[31]; // 8021F118
  c->lr=0x8021F120u; f_8021EEB0(c); // 8021F11C
  {uint32_t ea=c->r[1]+0x00000018u; c->f[31]=RF64(ea);} // 8021F120
  {uint32_t ea=c->r[1]+0x0000000Cu; for(int i=29;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 8021F124
  c->r[0]=R32(c->r[1]+0x00000024u); // 8021F128
  c->lr=c->r[0]; // 8021F12C
  c->r[1]=c->r[1]+0x00000020u; // 8021F130
  return; // 8021F134
}

// fn_8021F138
void f_8021F138(Ctx* __restrict c) {
  trace_call(0x8021F138u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8021F138
  c->r[0]=c->lr; // 8021F13C
  W32(c->r[1]+0x00000034u,c->r[0]); // 8021F140
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[31]);} // 8021F144
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,31,ea,0,0);} // 8021F148
  c->f[31]=c->f[1]; // 8021F14C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8021F150
  c->r[31]=c->r[5]|c->r[5]; // 8021F154
  W32(c->r[1]+0x00000018u,c->r[30]); // 8021F158
  c->r[30]=c->r[3]|c->r[3]; // 8021F15C
  c->r[3]=c->r[4]|c->r[4]; // 8021F160
  c->r[4]=c->r[1]+0x00000008u; // 8021F164
  c->lr=0x8021F16Cu; f_80067C80(c); // 8021F168
  cmps(c,0,(int32_t)c->r[3],0); // 8021F16C
  c->r[4]=c->r[3]|c->r[3]; // 8021F170
  if (!crb(c,2)) { goto L_8021F180; } // 8021F174
  c->r[3]=0u+0x00000000u; // 8021F178
  goto L_8021F1A4; // 8021F17C
L_8021F180:;
  {uint32_t ea=c->r[2]+0xFFFFDFE4u; c->f[0]=c->ps1[0]=RF32(ea);} // 8021F180
  c->r[3]=c->r[30]|c->r[30]; // 8021F184
  fcmp(c,0,c->f[31],c->f[0]); // 8021F188
  if (!crb(c,0)) { goto L_8021F198; } // 8021F18C
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 8021F190
  goto L_8021F19C; // 8021F194
L_8021F198:;
  c->f[1]=c->f[31]; // 8021F198
L_8021F19C:;
  c->r[5]=c->r[31]|c->r[31]; // 8021F19C
  c->lr=0x8021F1A4u; f_8021F0B4(c); // 8021F1A0
L_8021F1A4:;
  c->r[0]=R32(c->r[1]+0x00000034u); // 8021F1A4
  {uint32_t ea=c->r[1]+0x00000028u; psq_load(c,31,ea,0,0);} // 8021F1A8
  {uint32_t ea=c->r[1]+0x00000020u; c->f[31]=RF64(ea);} // 8021F1AC
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8021F1B0
  c->r[30]=R32(c->r[1]+0x00000018u); // 8021F1B4
  c->lr=c->r[0]; // 8021F1B8
  c->r[1]=c->r[1]+0x00000030u; // 8021F1BC
  return; // 8021F1C0
}

// fn_8021F1C4
void f_8021F1C4(Ctx* __restrict c) {
  trace_call(0x8021F1C4u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8021F1C4
  c->r[0]=c->lr; // 8021F1C8
  W32(c->r[1]+0x00000024u,c->r[0]); // 8021F1CC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8021F1D0
  c->r[31]=c->r[5]|c->r[5]; // 8021F1D4
  W32(c->r[1]+0x00000018u,c->r[30]); // 8021F1D8
  c->r[30]=c->r[3]|c->r[3]; // 8021F1DC
  c->r[3]=c->r[4]|c->r[4]; // 8021F1E0
  c->r[4]=c->r[1]+0x00000008u; // 8021F1E4
  c->lr=0x8021F1ECu; f_80067C80(c); // 8021F1E8
  cmps(c,0,(int32_t)c->r[3],0); // 8021F1EC
  c->r[4]=c->r[3]|c->r[3]; // 8021F1F0
  if (crb(c,2)) { goto L_8021F20C; } // 8021F1F4
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 8021F1F8
  c->r[3]=c->r[30]|c->r[30]; // 8021F1FC
  c->r[5]=c->r[31]|c->r[31]; // 8021F200
  c->lr=0x8021F208u; f_8021F0B4(c); // 8021F204
  goto L_8021F210; // 8021F208
L_8021F20C:;
  c->r[3]=0u+0x00000000u; // 8021F20C
L_8021F210:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 8021F210
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8021F214
  c->r[30]=R32(c->r[1]+0x00000018u); // 8021F218
  c->lr=c->r[0]; // 8021F21C
  c->r[1]=c->r[1]+0x00000020u; // 8021F220
  return; // 8021F224
}

// fn_8021F228
void f_8021F228(Ctx* __restrict c) {
  trace_call(0x8021F228u);
  c->r[4]=0u+0x00000000u; // 8021F228
  c->r[5]=0u+0x00000001u; // 8021F22C
  f_8021F0B4(c); return; // 8021F230
}

// fn_8021F234
void f_8021F234(Ctx* __restrict c) {
  trace_call(0x8021F234u);
  cmps(c,0,(int32_t)c->r[4],0); // 8021F234
  if (!crb(c,0)) { goto L_8021F244; } // 8021F238
  c->r[3]=0u+0x00000000u; // 8021F23C
  return; // 8021F240
L_8021F244:;
  W32(c->r[3]+0x00000020u,c->r[4]); // 8021F244
  {uint32_t ea=c->r[3]+0x00000024u; WF32(ea,c->f[1]);} // 8021F248
  W8(c->r[3]+0x00000028u,c->r[5]); // 8021F24C
  c->r[3]=0u+0x00000001u; // 8021F250
  return; // 8021F254
}

// fn_8021F258
void f_8021F258(Ctx* __restrict c) {
  trace_call(0x8021F258u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8021F258
  c->r[0]=c->lr; // 8021F25C
  cmps(c,0,(int32_t)c->r[4],0); // 8021F260
  W32(c->r[1]+0x00000024u,c->r[0]); // 8021F264
  {uint32_t ea=c->r[1]+0x00000018u; WF64(ea,c->f[31]);} // 8021F268
  c->f[31]=c->f[1]; // 8021F26C
  {uint32_t ea=c->r[1]+0x0000000Cu; for(int i=29;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 8021F270
  c->r[29]=c->r[3]|c->r[3]; // 8021F274
  c->r[30]=c->r[4]|c->r[4]; // 8021F278
  c->r[31]=c->r[5]|c->r[5]; // 8021F27C
  if (!crb(c,2)) { goto L_8021F28C; } // 8021F280
  c->r[3]=0u+0x00000000u; // 8021F284
  goto L_8021F2AC; // 8021F288
L_8021F28C:;
  c->lr=0x8021F290u; f_8021F3C4(c); // 8021F28C
  c->r[4]=c->r[30]|c->r[30]; // 8021F290
  c->lr=0x8021F298u; f_802E9DB4(c); // 8021F294
  c->f[1]=c->f[31]; // 8021F298
  c->r[4]=c->r[3]|c->r[3]; // 8021F29C
  c->r[3]=c->r[29]|c->r[29]; // 8021F2A0
  c->r[5]=c->r[31]|c->r[31]; // 8021F2A4
  c->lr=0x8021F2ACu; f_8021F234(c); // 8021F2A8
L_8021F2AC:;
  {uint32_t ea=c->r[1]+0x00000018u; c->f[31]=RF64(ea);} // 8021F2AC
  {uint32_t ea=c->r[1]+0x0000000Cu; for(int i=29;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 8021F2B0
  c->r[0]=R32(c->r[1]+0x00000024u); // 8021F2B4
  c->lr=c->r[0]; // 8021F2B8
  c->r[1]=c->r[1]+0x00000020u; // 8021F2BC
  return; // 8021F2C0
}

// fn_8021F2C4
void f_8021F2C4(Ctx* __restrict c) {
  trace_call(0x8021F2C4u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8021F2C4
  c->r[0]=c->lr; // 8021F2C8
  W32(c->r[1]+0x00000034u,c->r[0]); // 8021F2CC
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[31]);} // 8021F2D0
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,31,ea,0,0);} // 8021F2D4
  c->f[31]=c->f[1]; // 8021F2D8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8021F2DC
  c->r[31]=c->r[5]|c->r[5]; // 8021F2E0
  W32(c->r[1]+0x00000018u,c->r[30]); // 8021F2E4
  c->r[30]=c->r[3]|c->r[3]; // 8021F2E8
  c->r[3]=c->r[4]|c->r[4]; // 8021F2EC
  c->r[4]=c->r[1]+0x00000008u; // 8021F2F0
  c->lr=0x8021F2F8u; f_80067C80(c); // 8021F2F4
  {uint32_t ea=c->r[2]+0xFFFFDFE4u; c->f[0]=c->ps1[0]=RF32(ea);} // 8021F2F8
  c->r[4]=c->r[3]|c->r[3]; // 8021F2FC
  c->r[3]=c->r[30]|c->r[30]; // 8021F300
  fcmp(c,0,c->f[31],c->f[0]); // 8021F304
  if (!crb(c,0)) { goto L_8021F314; } // 8021F308
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 8021F30C
  goto L_8021F318; // 8021F310
L_8021F314:;
  c->f[1]=c->f[31]; // 8021F314
L_8021F318:;
  c->r[5]=c->r[31]|c->r[31]; // 8021F318
  c->lr=0x8021F320u; f_8021F258(c); // 8021F31C
  c->r[0]=R32(c->r[1]+0x00000034u); // 8021F320
  {uint32_t ea=c->r[1]+0x00000028u; psq_load(c,31,ea,0,0);} // 8021F324
  {uint32_t ea=c->r[1]+0x00000020u; c->f[31]=RF64(ea);} // 8021F328
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8021F32C
  c->r[30]=R32(c->r[1]+0x00000018u); // 8021F330
  c->lr=c->r[0]; // 8021F334
  c->r[1]=c->r[1]+0x00000030u; // 8021F338
  return; // 8021F33C
}

// fn_8021F340
void f_8021F340(Ctx* __restrict c) {
  trace_call(0x8021F340u);
  {uint32_t ea=c->r[2]+0xFFFFDFE4u; c->f[0]=c->ps1[0]=RF32(ea);} // 8021F340
  c->r[4]=0u+0xFFFFFFFFu; // 8021F344
  c->r[0]=0u+0x00000000u; // 8021F348
  W32(c->r[3]+0x00000020u,c->r[4]); // 8021F34C
  {uint32_t ea=c->r[3]+0x00000024u; WF32(ea,c->f[0]);} // 8021F350
  W8(c->r[3]+0x00000028u,c->r[0]); // 8021F354
  return; // 8021F358
}

// fn_8021F35C
void f_8021F35C(Ctx* __restrict c) {
  trace_call(0x8021F35Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8021F35C
  c->r[0]=c->lr; // 8021F360
  W32(c->r[1]+0x00000014u,c->r[0]); // 8021F364
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8021F368
  c->r[0]=R8(c->r[3]+0x00000018u); // 8021F36C
  c->r[0]=rotl(c->r[0],3)&0xFFFFFFF8u; // 8021F370
  c->r[4]=c->r[3]+c->r[0]; // 8021F374
  c->r[31]=R32(c->r[4]+0x0000000Cu); // 8021F378
  cmps(c,0,(int32_t)c->r[31],0); // 8021F37C
  if (!crb(c,0)) { goto L_8021F390; } // 8021F380
  c->r[3]=0u+0x806A0000u; // 8021F384
  c->r[3]=c->r[3]+0xFFFF9008u; // 8021F388
  goto L_8021F3A0; // 8021F38C
L_8021F390:;
  c->lr=0x8021F394u; f_8021F3C4(c); // 8021F390
  c->r[4]=c->r[31]|c->r[31]; // 8021F394
  c->lr=0x8021F39Cu; f_802E9CCC(c); // 8021F398
  c->lr=0x8021F3A0u; f_800E736C(c); // 8021F39C
L_8021F3A0:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8021F3A0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8021F3A4
  c->lr=c->r[0]; // 8021F3A8
  c->r[1]=c->r[1]+0x00000010u; // 8021F3AC
  return; // 8021F3B0
}

// fn_8021F3B4
void f_8021F3B4(Ctx* __restrict c) {
  trace_call(0x8021F3B4u);
  c->r[0]=R32(c->r[3]+0x00000010u); // 8021F3B4
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 8021F3B8
  c->r[3]=c->r[0]^0x00000001u; // 8021F3BC
  return; // 8021F3C0
}

// fn_8021F3C4
void f_8021F3C4(Ctx* __restrict c) {
  trace_call(0x8021F3C4u);
  c->r[0]=R8(c->r[13]+0xFFFFBD68u); // 8021F3C4
  c->r[3]=R32(c->r[3]+0x00000000u); // 8021F3C8
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 8021F3CC
  if (!crb(c,2)) { goto L_8021F3EC; } // 8021F3D0
  c->r[4]=R32(c->r[13]+0xFFFFBCB0u); // 8021F3D4
  c->r[0]=0u+0x00000001u; // 8021F3D8
  W32(c->r[13]+0xFFFFBD64u,c->r[4]); // 8021F3DC
  c->r[4]=c->r[4]+0x00000001u; // 8021F3E0
  W32(c->r[13]+0xFFFFBCB0u,c->r[4]); // 8021F3E4
  W8(c->r[13]+0xFFFFBD68u,c->r[0]); // 8021F3E8
L_8021F3EC:;
  c->r[12]=R32(c->r[3]+0x00000000u); // 8021F3EC
  c->r[4]=R32(c->r[13]+0xFFFFBD64u); // 8021F3F0
  c->r[12]=R32(c->r[12]+0x00000048u); // 8021F3F4
  c->ctr=c->r[12]; // 8021F3F8
  if (true) { dispatch(c,c->ctr); return; } // 8021F3FC
}

// fn_8021F400
void f_8021F400(Ctx* __restrict c) {
  trace_call(0x8021F400u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8021F400
  c->r[0]=c->lr; // 8021F404
  W32(c->r[1]+0x00000014u,c->r[0]); // 8021F408
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8021F40C
  c->r[31]=c->r[3]|c->r[3]; // 8021F410
  c->lr=0x8021F418u; f_8021F3C4(c); // 8021F414
  c->r[0]=R8(c->r[31]+0x00000018u); // 8021F418
  c->r[0]=rotl(c->r[0],3)&0xFFFFFFF8u; // 8021F41C
  c->r[4]=c->r[31]+c->r[0]; // 8021F420
  c->r[4]=R32(c->r[4]+0x0000000Cu); // 8021F424
  c->lr=0x8021F42Cu; f_802E9CCC(c); // 8021F428
  c->r[0]=R32(c->r[1]+0x00000014u); // 8021F42C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8021F430
  c->lr=c->r[0]; // 8021F434
  c->r[1]=c->r[1]+0x00000010u; // 8021F438
  return; // 8021F43C
}

// fn_8021F440
void f_8021F440(Ctx* __restrict c) {
  trace_call(0x8021F440u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8021F440
  c->r[0]=c->lr; // 8021F444
  W32(c->r[1]+0x00000014u,c->r[0]); // 8021F448
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8021F44C
  c->r[31]=c->r[3]|c->r[3]; // 8021F450
  c->lr=0x8021F458u; f_8021F3C4(c); // 8021F454
  c->r[0]=R8(c->r[31]+0x00000018u); // 8021F458
  c->r[0]=cntlz(c->r[0]); // 8021F45C
  c->r[0]=rotl(c->r[0],30)&0x3FFFFFF8u; // 8021F460
  c->r[4]=c->r[31]+c->r[0]; // 8021F464
  c->r[4]=R32(c->r[4]+0x0000000Cu); // 8021F468
  c->lr=0x8021F470u; f_802E9CCC(c); // 8021F46C
  c->r[0]=R32(c->r[1]+0x00000014u); // 8021F470
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8021F474
  c->lr=c->r[0]; // 8021F478
  c->r[1]=c->r[1]+0x00000010u; // 8021F47C
  return; // 8021F480
}

// fn_8021F484
void f_8021F484(Ctx* __restrict c) {
  trace_call(0x8021F484u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8021F484
  c->r[0]=c->lr; // 8021F488
  W32(c->r[1]+0x00000034u,c->r[0]); // 8021F48C
  {uint32_t ea=c->r[1]+0x00000028u; WF64(ea,c->f[31]);} // 8021F490
  c->f[31]=c->f[2]; // 8021F494
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[30]);} // 8021F498
  c->f[30]=c->f[1]; // 8021F49C
  {uint32_t ea=c->r[1]+0x00000010u; for(int i=28;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 8021F4A0
  c->r[28]=c->r[3]|c->r[3]; // 8021F4A4
  c->r[29]=c->r[4]|c->r[4]; // 8021F4A8
  c->r[30]=c->r[5]|c->r[5]; // 8021F4AC
  c->r[31]=R32(c->r[3]+0x0000001Cu); // 8021F4B0
  cmps(c,0,(int32_t)c->r[31],0); // 8021F4B4
  if (crb(c,0)) { goto L_8021F4E0; } // 8021F4B8
  c->lr=0x8021F4C0u; f_8021F3C4(c); // 8021F4BC
  c->f[1]=c->f[30]; // 8021F4C0
  c->r[4]=R32(c->r[28]+0x00000004u); // 8021F4C4
  c->f[2]=c->f[31]; // 8021F4C8
  c->r[5]=c->r[30]|c->r[30]; // 8021F4CC
  c->r[6]=c->r[29]|c->r[29]; // 8021F4D0
  c->r[7]=c->r[31]|c->r[31]; // 8021F4D4
  c->lr=0x8021F4DCu; f_802E9760(c); // 8021F4D8
  goto L_8021F4FC; // 8021F4DC
L_8021F4E0:;
  c->lr=0x8021F4E4u; f_8021F3C4(c); // 8021F4E0
  c->f[1]=c->f[30]; // 8021F4E4
  c->r[4]=R32(c->r[28]+0x00000004u); // 8021F4E8
  c->f[2]=c->f[31]; // 8021F4EC
  c->r[5]=c->r[30]|c->r[30]; // 8021F4F0
  c->r[6]=c->r[29]|c->r[29]; // 8021F4F4
  c->lr=0x8021F4FCu; f_802E93CC(c); // 8021F4F8
L_8021F4FC:;
  {uint32_t ea=c->r[1]+0x00000028u; c->f[31]=RF64(ea);} // 8021F4FC
  {uint32_t ea=c->r[1]+0x00000020u; c->f[30]=RF64(ea);} // 8021F500
  {uint32_t ea=c->r[1]+0x00000010u; for(int i=28;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 8021F504
  c->r[0]=R32(c->r[1]+0x00000034u); // 8021F508
  c->lr=c->r[0]; // 8021F50C
  c->r[1]=c->r[1]+0x00000030u; // 8021F510
  return; // 8021F514
}

// fn_8021F518
void f_8021F518(Ctx* __restrict c) {
  trace_call(0x8021F518u);
  return; // 8021F518
}

// fn_8021F51C
void f_8021F51C(Ctx* __restrict c) {
  trace_call(0x8021F51Cu);
  return; // 8021F51C
}

// fn_8021F520
void f_8021F520(Ctx* __restrict c) {
  trace_call(0x8021F520u);
  c->r[3]=0u+0x0000003Du; // 8021F520
  return; // 8021F524
}

// fn_8021F528
void f_8021F528(Ctx* __restrict c) {
  trace_call(0x8021F528u);
  c->r[3]=0u+0x80220000u; // 8021F528
  c->r[3]=c->r[3]+0xFFFFF534u; // 8021F52C
  return; // 8021F530
}

// fn_8021F534
void f_8021F534(Ctx* __restrict c) {
  trace_call(0x8021F534u);
  {uint32_t ea=c->r[1]+0xFFFFFD60u; W32(ea,c->r[1]); c->r[1]=ea;} // 8021F534
  c->r[0]=c->lr; // 8021F538
  W32(c->r[1]+0x000002A4u,c->r[0]); // 8021F53C
  c->r[11]=c->r[1]+0x00000260u; // 8021F540
  {uint32_t ea=c->r[1]+0x00000290u; WF64(ea,c->f[31]);} // 8021F544
  {uint32_t ea=c->r[1]+0x00000298u; psq_store(c,31,ea,0,0);} // 8021F548
  {uint32_t ea=c->r[1]+0x00000280u; WF64(ea,c->f[30]);} // 8021F54C
  {uint32_t ea=c->r[1]+0x00000288u; psq_store(c,30,ea,0,0);} // 8021F550
  {uint32_t ea=c->r[1]+0x00000270u; WF64(ea,c->f[29]);} // 8021F554
  {uint32_t ea=c->r[1]+0x00000278u; psq_store(c,29,ea,0,0);} // 8021F558
  {uint32_t ea=c->r[1]+0x00000260u; WF64(ea,c->f[28]);} // 8021F55C
  {uint32_t ea=c->r[1]+0x00000268u; psq_store(c,28,ea,0,0);} // 8021F560
  c->lr=0x8021F568u; { W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8021F564
  c->r[5]=R32(c->r[4]+0x00000000u); // 8021F568
  c->r[30]=c->r[4]|c->r[4]; // 8021F56C
  c->r[0]=c->r[5]+0xBAA80000u; // 8021F570
  cmpu(c,0,c->r[0],0x0000434Cu); // 8021F574
  if (crb(c,2)) { goto L_8021F584; } // 8021F578
  c->r[3]=0u+0x00000001u; // 8021F57C
  goto L_8021F970; // 8021F580
L_8021F584:;
  c->r[0]=R32(c->r[4]+0x00000004u); // 8021F584
  cmps(c,0,(int32_t)c->r[0],0); // 8021F588
  if (crb(c,2)) { goto L_8021F598; } // 8021F58C
  c->r[3]=0u+0x00000001u; // 8021F590
  goto L_8021F970; // 8021F594
L_8021F598:;
  c->r[0]=R32(c->r[4]+0x00000008u); // 8021F598
  c->r[27]=0u+0x00000000u; // 8021F59C
  c->r[6]=0u+0x806A0000u; // 8021F5A0
  c->r[5]=c->r[1]+0x00000010u; // 8021F5A4
  W32(c->r[1]+0x00000010u,c->r[27]); // 8021F5A8
  c->r[31]=c->r[4]+c->r[0]; // 8021F5AC
  c->r[4]=c->r[6]+0xFFFF9010u; // 8021F5B0
  c->r[6]=c->r[1]+0x00000014u; // 8021F5B4
  c->lr=0x8021F5BCu; f_802D24C8(c); // 8021F5B8
  c->r[0]=R32(c->r[31]+0x00000000u); // 8021F5BC
  c->r[26]=R32(c->r[1]+0x00000010u); // 8021F5C0
  cmps(c,0,(int32_t)c->r[0],0); // 8021F5C4
  if (crb(c,2)) { goto L_8021F5D8; } // 8021F5C8
  cmps(c,0,(int32_t)c->r[0],1); // 8021F5CC
  if (crb(c,2)) { goto L_8021F910; } // 8021F5D0
  goto L_8021F96C; // 8021F5D4
L_8021F5D8:;
  {uint32_t ea=c->r[2]+0xFFFFDFF0u; c->f[30]=c->ps1[30]=RF32(ea);} // 8021F5D8
  c->r[29]=c->r[27]|c->r[27]; // 8021F5DC
  {uint32_t ea=c->r[2]+0xFFFFDFF8u; c->f[31]=c->ps1[31]=RF32(ea);} // 8021F5E0
  c->r[25]=0u+0x00000000u; // 8021F5E4
  goto L_8021F900; // 8021F5E8
L_8021F5EC:;
  c->r[0]=R32(c->r[30]+0x0000000Cu); // 8021F5EC
  c->r[3]=c->r[26]|c->r[26]; // 8021F5F0
  c->r[0]=c->r[31]+c->r[0]; // 8021F5F4
  c->r[4]=R32(c->r[29]+c->r[0]); // 8021F5F8
  c->lr=0x8021F600u; f_8021F9A8(c); // 8021F5FC
  c->r[0]=R32(c->r[3]+0x0000002Cu); // 8021F600
  c->r[28]=c->r[3]|c->r[3]; // 8021F604
  cmps(c,0,(int32_t)c->r[0],0); // 8021F608
  if (!crb(c,2)) { goto L_8021F8F8; } // 8021F60C
  c->r[3]=c->r[1]+0x00000168u; // 8021F610
  c->r[4]=c->r[28]+0x00000018u; // 8021F614
  c->lr=0x8021F61Cu; f_8005CD7C(c); // 8021F618
  {uint32_t ea=c->r[1]+0x00000170u; c->f[0]=c->ps1[0]=RF32(ea);} // 8021F61C
  c->r[3]=c->r[1]+0x00000208u; // 8021F620
  {uint32_t ea=c->r[1]+0x0000016Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 8021F624
  c->f[3]=c->ps1[3]=S(c->f[30]*c->f[0]); // 8021F628
  {uint32_t ea=c->r[1]+0x00000168u; c->f[0]=c->ps1[0]=RF32(ea);} // 8021F62C
  {uint32_t ea=c->r[2]+0xFFFFDFF4u; c->f[1]=c->ps1[1]=RF32(ea);} // 8021F630
  c->f[28]=c->ps1[28]=S(c->f[30]*c->f[2]); // 8021F634
  c->f[29]=c->ps1[29]=S(c->f[30]*c->f[0]); // 8021F638
  c->f[2]=c->f[1]; // 8021F63C
  c->f[3]=c->ps1[3]=S(c->f[31]*c->f[3]); // 8021F640
  c->lr=0x8021F648u; f_804E18A0(c); // 8021F644
  {uint32_t ea=c->r[2]+0xFFFFDFF4u; c->f[2]=c->ps1[2]=RF32(ea);} // 8021F648
  c->f[1]=c->ps1[1]=S(c->f[31]*c->f[29]); // 8021F64C
  c->r[3]=c->r[1]+0x00000178u; // 8021F650
  c->f[3]=c->f[2]; // 8021F654
  c->lr=0x8021F65Cu; f_804E18A0(c); // 8021F658
  c->r[3]=c->r[1]+0x00000208u; // 8021F65C
  c->r[4]=c->r[1]+0x00000178u; // 8021F660
  c->r[5]=c->r[3]|c->r[3]; // 8021F664
  c->lr=0x8021F66Cu; f_8030DA28(c); // 8021F668
  {uint32_t ea=c->r[2]+0xFFFFDFF4u; c->f[1]=c->ps1[1]=RF32(ea);} // 8021F66C
  c->f[2]=c->ps1[2]=S(c->f[31]*c->f[28]); // 8021F670
  c->r[3]=c->r[1]+0x000001A8u; // 8021F674
  c->f[3]=c->f[1]; // 8021F678
  c->lr=0x8021F680u; f_804E18A0(c); // 8021F67C
  c->r[3]=c->r[1]+0x00000208u; // 8021F680
  c->r[4]=c->r[1]+0x000001A8u; // 8021F684
  c->r[5]=c->r[3]|c->r[3]; // 8021F688
  c->lr=0x8021F690u; f_8030DA28(c); // 8021F68C
  {uint32_t ea=c->r[28]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8021F690
  {uint32_t ea=c->r[1]+0x00000214u; WF32(ea,c->f[0]);} // 8021F694
  {uint32_t ea=c->r[28]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 8021F698
  {uint32_t ea=c->r[1]+0x00000224u; WF32(ea,c->f[0]);} // 8021F69C
  {uint32_t ea=c->r[28]+0x00000014u; c->f[0]=c->ps1[0]=RF32(ea);} // 8021F6A0
  {uint32_t ea=c->r[1]+0x00000234u; WF32(ea,c->f[0]);} // 8021F6A4
  c->r[3]=R32(c->r[28]+0x00000004u); // 8021F6A8
  c->lr=0x8021F6B0u; f_8021F9F4(c); // 8021F6AC
  c->r[23]=R32(c->r[28]+0x00000008u); // 8021F6B0
  c->r[24]=c->r[3]|c->r[3]; // 8021F6B4
  {uint32_t ea=c->r[1]+0x0000020Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8021F6B8
  c->r[3]=c->r[1]+0x00000114u; // 8021F6BC
  {uint32_t ea=c->r[1]+0x0000021Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 8021F6C0
  {uint32_t ea=c->r[1]+0x0000022Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 8021F6C4
  c->lr=0x8021F6CCu; f_8005FD70(c); // 8021F6C8
  {uint32_t ea=c->r[1]+0x00000208u; c->f[1]=c->ps1[1]=RF32(ea);} // 8021F6CC
  c->r[3]=c->r[1]+0x0000012Cu; // 8021F6D0
  {uint32_t ea=c->r[1]+0x00000218u; c->f[2]=c->ps1[2]=RF32(ea);} // 8021F6D4
  {uint32_t ea=c->r[1]+0x00000228u; c->f[3]=c->ps1[3]=RF32(ea);} // 8021F6D8
  c->lr=0x8021F6E0u; f_8005FD70(c); // 8021F6DC
  {uint32_t ea=c->r[1]+0x00000214u; c->f[1]=c->ps1[1]=RF32(ea);} // 8021F6E0
  c->r[3]=c->r[1]+0x00000144u; // 8021F6E4
  {uint32_t ea=c->r[1]+0x00000224u; c->f[2]=c->ps1[2]=RF32(ea);} // 8021F6E8
  {uint32_t ea=c->r[1]+0x00000234u; c->f[3]=c->ps1[3]=RF32(ea);} // 8021F6EC
  c->lr=0x8021F6F4u; f_8005FD70(c); // 8021F6F0
  {uint32_t ea=c->r[28]+0x00000028u; c->f[1]=c->ps1[1]=RF32(ea);} // 8021F6F4
  c->r[3]=c->r[1]+0x00000120u; // 8021F6F8
  c->r[4]=c->r[1]+0x00000114u; // 8021F6FC
  c->lr=0x8021F704u; f_8005ED34(c); // 8021F700
  {uint32_t ea=c->r[28]+0x00000024u; c->f[1]=c->ps1[1]=RF32(ea);} // 8021F704
  c->r[3]=c->r[1]+0x00000138u; // 8021F708
  c->r[4]=c->r[1]+0x0000012Cu; // 8021F70C
  c->lr=0x8021F714u; f_8005ED34(c); // 8021F710
  c->r[3]=c->r[1]+0x00000150u; // 8021F714
  c->r[4]=c->r[1]+0x00000144u; // 8021F718
  c->r[5]=c->r[1]+0x00000138u; // 8021F71C
  c->lr=0x8021F724u; f_80073ACC(c); // 8021F720
  c->r[3]=c->r[1]+0x0000015Cu; // 8021F724
  c->r[4]=c->r[1]+0x00000150u; // 8021F728
  c->r[5]=c->r[1]+0x00000120u; // 8021F72C
  c->lr=0x8021F734u; f_80073ACC(c); // 8021F730
  c->r[3]=c->r[1]+0x000001D8u; // 8021F734
  c->r[4]=c->r[1]+0x0000015Cu; // 8021F738
  c->lr=0x8021F740u; f_8005DC84(c); // 8021F73C
  {uint32_t ea=c->r[1]+0x0000020Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8021F740
  c->r[3]=c->r[1]+0x000000C0u; // 8021F744
  {uint32_t ea=c->r[1]+0x0000021Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 8021F748
  {uint32_t ea=c->r[1]+0x0000022Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 8021F74C
  c->lr=0x8021F754u; f_8005FD70(c); // 8021F750
  {uint32_t ea=c->r[1]+0x00000208u; c->f[1]=c->ps1[1]=RF32(ea);} // 8021F754
  c->r[3]=c->r[1]+0x000000D8u; // 8021F758
  {uint32_t ea=c->r[1]+0x00000218u; c->f[2]=c->ps1[2]=RF32(ea);} // 8021F75C
  {uint32_t ea=c->r[1]+0x00000228u; c->f[3]=c->ps1[3]=RF32(ea);} // 8021F760
  c->lr=0x8021F768u; f_8005FD70(c); // 8021F764
  {uint32_t ea=c->r[1]+0x00000214u; c->f[1]=c->ps1[1]=RF32(ea);} // 8021F768
  c->r[3]=c->r[1]+0x000000F0u; // 8021F76C
  {uint32_t ea=c->r[1]+0x00000224u; c->f[2]=c->ps1[2]=RF32(ea);} // 8021F770
  {uint32_t ea=c->r[1]+0x00000234u; c->f[3]=c->ps1[3]=RF32(ea);} // 8021F774
  c->lr=0x8021F77Cu; f_8005FD70(c); // 8021F778
  {uint32_t ea=c->r[28]+0x00000028u; c->f[1]=c->ps1[1]=RF32(ea);} // 8021F77C
  c->r[3]=c->r[1]+0x000000CCu; // 8021F780
  c->r[4]=c->r[1]+0x000000C0u; // 8021F784
  c->lr=0x8021F78Cu; f_8005ED34(c); // 8021F788
  {uint32_t ea=c->r[28]+0x00000024u; c->f[1]=c->ps1[1]=RF32(ea);} // 8021F78C
  c->r[3]=c->r[1]+0x000000E4u; // 8021F790
  c->r[4]=c->r[1]+0x000000D8u; // 8021F794
  c->lr=0x8021F79Cu; f_8005ED34(c); // 8021F798
  c->r[3]=c->r[1]+0x000000FCu; // 8021F79C
  c->r[4]=c->r[1]+0x000000F0u; // 8021F7A0
  c->r[5]=c->r[1]+0x000000E4u; // 8021F7A4
  c->lr=0x8021F7ACu; f_8005FC60(c); // 8021F7A8
  c->r[3]=c->r[1]+0x00000108u; // 8021F7AC
  c->r[4]=c->r[1]+0x000000FCu; // 8021F7B0
  c->r[5]=c->r[1]+0x000000CCu; // 8021F7B4
  c->lr=0x8021F7BCu; f_80073ACC(c); // 8021F7B8
  c->r[3]=c->r[1]+0x000001E4u; // 8021F7BC
  c->r[4]=c->r[1]+0x00000108u; // 8021F7C0
  c->lr=0x8021F7C8u; f_8005DC84(c); // 8021F7C4
  {uint32_t ea=c->r[1]+0x0000020Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8021F7C8
  c->r[3]=c->r[1]+0x0000006Cu; // 8021F7CC
  {uint32_t ea=c->r[1]+0x0000021Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 8021F7D0
  {uint32_t ea=c->r[1]+0x0000022Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 8021F7D4
  c->lr=0x8021F7DCu; f_8005FD70(c); // 8021F7D8
  {uint32_t ea=c->r[1]+0x00000208u; c->f[1]=c->ps1[1]=RF32(ea);} // 8021F7DC
  c->r[3]=c->r[1]+0x00000084u; // 8021F7E0
  {uint32_t ea=c->r[1]+0x00000218u; c->f[2]=c->ps1[2]=RF32(ea);} // 8021F7E4
  {uint32_t ea=c->r[1]+0x00000228u; c->f[3]=c->ps1[3]=RF32(ea);} // 8021F7E8
  c->lr=0x8021F7F0u; f_8005FD70(c); // 8021F7EC
  {uint32_t ea=c->r[1]+0x00000214u; c->f[1]=c->ps1[1]=RF32(ea);} // 8021F7F0
  c->r[3]=c->r[1]+0x0000009Cu; // 8021F7F4
  {uint32_t ea=c->r[1]+0x00000224u; c->f[2]=c->ps1[2]=RF32(ea);} // 8021F7F8
  {uint32_t ea=c->r[1]+0x00000234u; c->f[3]=c->ps1[3]=RF32(ea);} // 8021F7FC
  c->lr=0x8021F804u; f_8005FD70(c); // 8021F800
  {uint32_t ea=c->r[28]+0x00000028u; c->f[1]=c->ps1[1]=RF32(ea);} // 8021F804
  c->r[3]=c->r[1]+0x00000078u; // 8021F808
  c->r[4]=c->r[1]+0x0000006Cu; // 8021F80C
  c->lr=0x8021F814u; f_8005ED34(c); // 8021F810
  {uint32_t ea=c->r[28]+0x00000024u; c->f[1]=c->ps1[1]=RF32(ea);} // 8021F814
  c->r[3]=c->r[1]+0x00000090u; // 8021F818
  c->r[4]=c->r[1]+0x00000084u; // 8021F81C
  c->lr=0x8021F824u; f_8005ED34(c); // 8021F820
  c->r[3]=c->r[1]+0x000000A8u; // 8021F824
  c->r[4]=c->r[1]+0x0000009Cu; // 8021F828
  c->r[5]=c->r[1]+0x00000090u; // 8021F82C
  c->lr=0x8021F834u; f_8005FC60(c); // 8021F830
  c->r[3]=c->r[1]+0x000000B4u; // 8021F834
  c->r[4]=c->r[1]+0x000000A8u; // 8021F838
  c->r[5]=c->r[1]+0x00000078u; // 8021F83C
  c->lr=0x8021F844u; f_8005FC60(c); // 8021F840
  c->r[3]=c->r[1]+0x000001F0u; // 8021F844
  c->r[4]=c->r[1]+0x000000B4u; // 8021F848
  c->lr=0x8021F850u; f_8005DC84(c); // 8021F84C
  {uint32_t ea=c->r[1]+0x0000020Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8021F850
  c->r[3]=c->r[1]+0x00000018u; // 8021F854
  {uint32_t ea=c->r[1]+0x0000021Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 8021F858
  {uint32_t ea=c->r[1]+0x0000022Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 8021F85C
  c->lr=0x8021F864u; f_8005FD70(c); // 8021F860
  {uint32_t ea=c->r[1]+0x00000208u; c->f[1]=c->ps1[1]=RF32(ea);} // 8021F864
  c->r[3]=c->r[1]+0x00000030u; // 8021F868
  {uint32_t ea=c->r[1]+0x00000218u; c->f[2]=c->ps1[2]=RF32(ea);} // 8021F86C
  {uint32_t ea=c->r[1]+0x00000228u; c->f[3]=c->ps1[3]=RF32(ea);} // 8021F870
  c->lr=0x8021F878u; f_8005FD70(c); // 8021F874
  {uint32_t ea=c->r[1]+0x00000214u; c->f[1]=c->ps1[1]=RF32(ea);} // 8021F878
  c->r[3]=c->r[1]+0x00000048u; // 8021F87C
  {uint32_t ea=c->r[1]+0x00000224u; c->f[2]=c->ps1[2]=RF32(ea);} // 8021F880
  {uint32_t ea=c->r[1]+0x00000234u; c->f[3]=c->ps1[3]=RF32(ea);} // 8021F884
  c->lr=0x8021F88Cu; f_8005FD70(c); // 8021F888
  {uint32_t ea=c->r[28]+0x00000028u; c->f[1]=c->ps1[1]=RF32(ea);} // 8021F88C
  c->r[3]=c->r[1]+0x00000024u; // 8021F890
  c->r[4]=c->r[1]+0x00000018u; // 8021F894
  c->lr=0x8021F89Cu; f_8005ED34(c); // 8021F898
  {uint32_t ea=c->r[28]+0x00000024u; c->f[1]=c->ps1[1]=RF32(ea);} // 8021F89C
  c->r[3]=c->r[1]+0x0000003Cu; // 8021F8A0
  c->r[4]=c->r[1]+0x00000030u; // 8021F8A4
  c->lr=0x8021F8ACu; f_8005ED34(c); // 8021F8A8
  c->r[3]=c->r[1]+0x00000054u; // 8021F8AC
  c->r[4]=c->r[1]+0x00000048u; // 8021F8B0
  c->r[5]=c->r[1]+0x0000003Cu; // 8021F8B4
  c->lr=0x8021F8BCu; f_80073ACC(c); // 8021F8B8
  c->r[3]=c->r[1]+0x00000060u; // 8021F8BC
  c->r[4]=c->r[1]+0x00000054u; // 8021F8C0
  c->r[5]=c->r[1]+0x00000024u; // 8021F8C4
  c->lr=0x8021F8CCu; f_8005FC60(c); // 8021F8C8
  c->r[3]=c->r[1]+0x000001FCu; // 8021F8CC
  c->r[4]=c->r[1]+0x00000060u; // 8021F8D0
  c->lr=0x8021F8D8u; f_8005DC84(c); // 8021F8D4
  W8(c->r[1]+0x0000000Cu,c->r[27]); // 8021F8D8
  c->r[3]=c->r[1]+0x0000000Cu; // 8021F8DC
  c->lr=0x8021F8E4u; f_8004FA38(c); // 8021F8E0
  c->r[5]=c->r[24]|c->r[24]; // 8021F8E4
  c->r[6]=c->r[23]|c->r[23]; // 8021F8E8
  c->r[4]=c->r[1]+0x000001D8u; // 8021F8EC
  c->lr=0x8021F8F4u; f_802F18AC(c); // 8021F8F0
  W32(c->r[28]+0x0000002Cu,c->r[3]); // 8021F8F4
L_8021F8F8:;
  c->r[25]=c->r[25]+0x00000001u; // 8021F8F8
  c->r[29]=c->r[29]+0x00000004u; // 8021F8FC
L_8021F900:;
  c->r[0]=R32(c->r[31]+0x00000004u); // 8021F900
  cmps(c,0,(int32_t)c->r[25],(int32_t)c->r[0]); // 8021F904
  if (crb(c,0)) { IRQCHK(c); goto L_8021F5EC; } // 8021F908
  goto L_8021F96C; // 8021F90C
L_8021F910:;
  c->r[23]=0u+0x00000000u; // 8021F910
  c->r[29]=0u+0x00000000u; // 8021F914
  goto L_8021F960; // 8021F918
L_8021F91C:;
  c->r[0]=R32(c->r[30]+0x0000000Cu); // 8021F91C
  c->r[3]=c->r[26]|c->r[26]; // 8021F920
  c->r[0]=c->r[31]+c->r[0]; // 8021F924
  c->r[4]=R32(c->r[29]+c->r[0]); // 8021F928
  c->lr=0x8021F930u; f_8021F9A8(c); // 8021F92C
  c->r[0]=R32(c->r[3]+0x0000002Cu); // 8021F930
  c->r[28]=c->r[3]|c->r[3]; // 8021F934
  cmps(c,0,(int32_t)c->r[0],0); // 8021F938
  if (crb(c,2)) { goto L_8021F958; } // 8021F93C
  W8(c->r[1]+0x00000008u,c->r[27]); // 8021F940
  c->r[3]=c->r[1]+0x00000008u; // 8021F944
  c->lr=0x8021F94Cu; f_8004FA38(c); // 8021F948
  c->r[4]=R32(c->r[28]+0x0000002Cu); // 8021F94C
  c->lr=0x8021F954u; f_802F1A04(c); // 8021F950
  W32(c->r[28]+0x0000002Cu,c->r[27]); // 8021F954
L_8021F958:;
  c->r[23]=c->r[23]+0x00000001u; // 8021F958
  c->r[29]=c->r[29]+0x00000004u; // 8021F95C
L_8021F960:;
  c->r[0]=R32(c->r[31]+0x00000004u); // 8021F960
  cmps(c,0,(int32_t)c->r[23],(int32_t)c->r[0]); // 8021F964
  if (crb(c,0)) { IRQCHK(c); goto L_8021F91C; } // 8021F968
L_8021F96C:;
  c->r[3]=0u+0x00000001u; // 8021F96C
L_8021F970:;
  c->r[11]=c->r[1]+0x00000260u; // 8021F970
  {uint32_t ea=c->r[1]+0x00000298u; psq_load(c,31,ea,0,0);} // 8021F974
  {uint32_t ea=c->r[1]+0x00000290u; c->f[31]=RF64(ea);} // 8021F978
  {uint32_t ea=c->r[1]+0x00000288u; psq_load(c,30,ea,0,0);} // 8021F97C
  {uint32_t ea=c->r[1]+0x00000280u; c->f[30]=RF64(ea);} // 8021F980
  {uint32_t ea=c->r[1]+0x00000278u; psq_load(c,29,ea,0,0);} // 8021F984
  {uint32_t ea=c->r[1]+0x00000270u; c->f[29]=RF64(ea);} // 8021F988
  {uint32_t ea=c->r[1]+0x00000268u; psq_load(c,28,ea,0,0);} // 8021F98C
  {uint32_t ea=c->r[1]+0x00000260u; c->f[28]=RF64(ea);} // 8021F990
  c->lr=0x8021F998u; { c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8021F994
  c->r[0]=R32(c->r[1]+0x000002A4u); // 8021F998
  c->lr=c->r[0]; // 8021F99C
  c->r[1]=c->r[1]+0x000002A0u; // 8021F9A0
  return; // 8021F9A4
}

// fn_8021F9A8
void f_8021F9A8(Ctx* __restrict c) {
  trace_call(0x8021F9A8u);
  c->r[0]=R32(c->r[3]+0x00000010u); // 8021F9A8
  c->r[7]=0u+0x00000000u; // 8021F9AC
  c->r[8]=0u+0x00000000u; // 8021F9B0
  c->ctr=c->r[0]; // 8021F9B4
  cmps(c,0,(int32_t)c->r[0],0); // 8021F9B8
  if (!crb(c,1)) { goto L_8021F9EC; } // 8021F9BC
L_8021F9C0:;
  c->r[0]=R32(c->r[3]+0x0000000Cu); // 8021F9C0
  c->r[6]=R32(c->r[3]+0x00000008u); // 8021F9C4
  c->r[5]=(uint32_t)((int32_t)c->r[0]*(int32_t)c->r[8]); // 8021F9C8
  c->r[0]=c->r[3]+c->r[6]; // 8021F9CC
  {uint32_t ea=c->r[5]+c->r[0]; c->r[0]=R32(ea); c->r[5]=ea;} // 8021F9D0
  cmpu(c,0,c->r[0],c->r[4]); // 8021F9D4
  if (!crb(c,2)) { goto L_8021F9E4; } // 8021F9D8
  c->r[7]=c->r[5]|c->r[5]; // 8021F9DC
  goto L_8021F9EC; // 8021F9E0
L_8021F9E4:;
  c->r[8]=c->r[8]+0x00000001u; // 8021F9E4
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8021F9C0; } // 8021F9E8
L_8021F9EC:;
  c->r[3]=c->r[7]|c->r[7]; // 8021F9EC
  return; // 8021F9F0
}

// fn_8021F9F4
void f_8021F9F4(Ctx* __restrict c) {
  trace_call(0x8021F9F4u);
  c->r[0]=rotl(c->r[3],0)&0x00000001u; cr0(c,c->r[0]); // 8021F9F4
  c->r[4]=0u+0x00000000u; // 8021F9F8
  if (crb(c,2)) { goto L_8021FA08; } // 8021F9FC
  c->r[4]=c->r[4]|0x00010000u; // 8021FA00
  c->r[4]=c->r[4]|0x00000004u; // 8021FA04
L_8021FA08:;
  c->r[0]=rotl(c->r[3],0)&0x00000002u; cr0(c,c->r[0]); // 8021FA08
  if (crb(c,2)) { goto L_8021FA14; } // 8021FA0C
  c->r[4]=c->r[4]|0x02000000u; // 8021FA10
L_8021FA14:;
  c->r[0]=rotl(c->r[3],0)&0x00000004u; cr0(c,c->r[0]); // 8021FA14
  c->r[3]=c->r[4]|0x00200000u; // 8021FA18
  if (crb(c,2)) return; // 8021FA1C
  c->r[3]=c->r[4]|0x00100000u; // 8021FA20
  return; // 8021FA24
}

// fn_8021FA28
void f_8021FA28(Ctx* __restrict c) {
  trace_call(0x8021FA28u);
  cmpu(c,0,c->r[4],0x0000000Au); // 8021FA28
  if (!crb(c,1)) { goto L_8021FA34; } // 8021FA2C
  c->r[4]=0u+0x00000000u; // 8021FA30
L_8021FA34:;
  cmpu(c,0,c->r[5],0x00000005u); // 8021FA34
  if (!crb(c,1)) { goto L_8021FA40; } // 8021FA38
  c->r[5]=0u+0x00000000u; // 8021FA3C
L_8021FA40:;
  c->r[0]=(uint32_t)((int32_t)c->r[4]*(int32_t)24); // 8021FA40
  c->r[4]=rotl(c->r[5],2)&0xFFFFFFFCu; // 8021FA44
  c->r[0]=c->r[3]+c->r[0]; // 8021FA48
  c->r[3]=R32(c->r[4]+c->r[0]); // 8021FA4C
  return; // 8021FA50
}

// fn_8021FA54
void f_8021FA54(Ctx* __restrict c) {
  trace_call(0x8021FA54u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8021FA54
  c->r[0]=c->lr; // 8021FA58
  W32(c->r[1]+0x00000044u,c->r[0]); // 8021FA5C
  c->r[11]=c->r[1]+0x00000030u; // 8021FA60
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[31]);} // 8021FA64
  {uint32_t ea=c->r[1]+0x00000038u; psq_store(c,31,ea,0,0);} // 8021FA68
  c->lr=0x8021FA70u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8021FA6C
  cmpu(c,0,c->r[4],0x0000000Au); // 8021FA70
  c->r[28]=c->r[4]|c->r[4]; // 8021FA74
  c->r[29]=c->r[5]|c->r[5]; // 8021FA78
  if (!crb(c,1)) { goto L_8021FA84; } // 8021FA7C
  c->r[28]=0u+0x00000000u; // 8021FA80
L_8021FA84:;
  cmpu(c,0,c->r[5],0x00000005u); // 8021FA84
  if (!crb(c,1)) { goto L_8021FA90; } // 8021FA88
  c->r[29]=0u+0x00000000u; // 8021FA8C
L_8021FA90:;
  c->r[0]=(uint32_t)((int32_t)c->r[28]*(int32_t)24); // 8021FA90
  c->r[5]=rotl(c->r[29],2)&0xFFFFFFFCu; // 8021FA94
  {uint32_t ea=c->r[2]+0xFFFFE000u; c->f[31]=c->ps1[31]=RF32(ea);} // 8021FA98
  c->r[4]=c->r[29]|c->r[29]; // 8021FA9C
  c->r[30]=0u+0x00000000u; // 8021FAA0
  c->r[0]=c->r[3]+c->r[0]; // 8021FAA4
  c->r[31]=R32(c->r[5]+c->r[0]); // 8021FAA8
  c->r[3]=c->r[28]|c->r[28]; // 8021FAAC
  c->r[6]=0u+0x00000001u; // 8021FAB0
  c->r[5]=c->r[31]|c->r[31]; // 8021FAB4
  c->lr=0x8021FABCu; f_8021FC8C(c); // 8021FAB8
  {uint32_t ea=c->r[2]+0xFFFFE000u; c->f[0]=c->ps1[0]=RF32(ea);} // 8021FABC
  fcmp(c,0,c->f[1],c->f[0]); // 8021FAC0
  if (!crb(c,0)) { goto L_8021FACC; } // 8021FAC4
  c->r[30]=0u+0x00000001u; // 8021FAC8
L_8021FACC:;
  c->r[0]=R8(c->r[13]+0xFFFFBB7Au); // 8021FACC
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 8021FAD0
  if (!crb(c,2)) { goto L_8021FB04; } // 8021FAD4
  c->r[27]=0u+0x80730000u; // 8021FAD8
  c->r[3]=c->r[27]+0x00003B68u; // 8021FADC
  c->lr=0x8021FAE4u; f_80045E54(c); // 8021FAE0
  c->r[5]=0u+0x806D0000u; // 8021FAE4
  c->r[0]=0u+0x00000001u; // 8021FAE8
  c->r[5]=c->r[5]+0xFFFFC6A8u; // 8021FAEC
  c->r[4]=c->r[27]+0x00003B68u; // 8021FAF0
  c->r[3]=c->r[5]+0x0000003Cu; // 8021FAF4
  W32(c->r[4]+0x000000A4u,c->r[5]); // 8021FAF8
  W32(c->r[4]+0x000000B0u,c->r[3]); // 8021FAFC
  W8(c->r[13]+0xFFFFBB7Au,c->r[0]); // 8021FB00
L_8021FB04:;
  c->r[3]=0u+0x80730000u; // 8021FB04
  c->r[3]=c->r[3]+0x00003B68u; // 8021FB08
  c->r[0]=R32(c->r[3]+0x00000004u); // 8021FB0C
  cmps(c,0,(int32_t)c->r[0],0); // 8021FB10
  if (!crb(c,2)) { goto L_8021FB80; } // 8021FB14
  c->r[0]=R8(c->r[13]+0xFFFFBB87u); // 8021FB18
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 8021FB1C
  if (!crb(c,2)) { goto L_8021FB64; } // 8021FB20
  c->r[27]=0u+0x80730000u; // 8021FB24
  c->r[3]=c->r[27]+0x00006160u; // 8021FB28
  c->lr=0x8021FB30u; f_8008C1BC(c); // 8021FB2C
  c->r[6]=0u+0x806D0000u; // 8021FB30
  c->r[4]=0u+0x80050000u; // 8021FB34
  c->r[6]=c->r[6]+0xFFFFC37Cu; // 8021FB38
  c->r[3]=c->r[27]+0x00006160u; // 8021FB3C
  c->r[0]=c->r[6]+0x00000028u; // 8021FB40
  c->r[5]=0u+0x80750000u; // 8021FB44
  W32(c->r[3]+0x000000A4u,c->r[6]); // 8021FB48
  c->r[4]=c->r[4]+0xFFFF9F5Cu; // 8021FB4C
  c->r[5]=c->r[5]+0x000054F8u; // 8021FB50
  W32(c->r[3]+0x000000A8u,c->r[0]); // 8021FB54
  c->lr=0x8021FB5Cu; f_803A92B8(c); // 8021FB58
  c->r[0]=0u+0x00000001u; // 8021FB5C
  W8(c->r[13]+0xFFFFBB87u,c->r[0]); // 8021FB60
L_8021FB64:;
  c->r[3]=0u+0x80730000u; // 8021FB64
  c->r[4]=0u+0x00000000u; // 8021FB68
  c->r[3]=c->r[3]+0x00006160u; // 8021FB6C
  c->lr=0x8021FB74u; f_8008CA58(c); // 8021FB70
  cmps(c,0,(int32_t)c->r[3],0); // 8021FB74
  if (!crb(c,2)) { goto L_8021FB80; } // 8021FB78
  c->r[30]=0u+0x00000001u; // 8021FB7C
L_8021FB80:;
  cmps(c,0,(int32_t)c->r[30],0); // 8021FB80
  if (crb(c,2)) { goto L_8021FC50; } // 8021FB84
  cmps(c,0,(int32_t)c->r[29],0); // 8021FB88
  if (crb(c,2)) { goto L_8021FBBC; } // 8021FB8C
  cmps(c,0,(int32_t)c->r[29],1); // 8021FB90
  if (crb(c,2)) { goto L_8021FBE4; } // 8021FB94
  cmps(c,0,(int32_t)c->r[29],2); // 8021FB98
  if (crb(c,2)) { goto L_8021FBF4; } // 8021FB9C
  cmps(c,0,(int32_t)c->r[29],3); // 8021FBA0
  if (crb(c,2)) { goto L_8021FC20; } // 8021FBA4
  cmps(c,0,(int32_t)c->r[29],4); // 8021FBA8
  if (crb(c,2)) { goto L_8021FC30; } // 8021FBAC
  cmps(c,0,(int32_t)c->r[29],5); // 8021FBB0
  if (crb(c,2)) { goto L_8021FC40; } // 8021FBB4
  goto L_8021FC68; // 8021FBB8
L_8021FBBC:;
  cmps(c,0,(int32_t)c->r[28],2); // 8021FBBC
  if (crb(c,2)) { goto L_8021FBD4; } // 8021FBC0
  c->r[3]=c->r[28]|c->r[28]; // 8021FBC4
  c->lr=0x8021FBCCu; f_800B0548(c); // 8021FBC8
  {uint32_t ea=c->r[3]+0x00000018u; c->f[31]=c->ps1[31]=RF32(ea);} // 8021FBCC
  goto L_8021FC68; // 8021FBD0
L_8021FBD4:;
  c->r[3]=c->r[28]|c->r[28]; // 8021FBD4
  c->lr=0x8021FBDCu; f_800B0548(c); // 8021FBD8
  {uint32_t ea=c->r[3]+0x00000008u; c->f[31]=c->ps1[31]=RF32(ea);} // 8021FBDC
  goto L_8021FC68; // 8021FBE0
L_8021FBE4:;
  c->r[3]=c->r[28]|c->r[28]; // 8021FBE4
  c->lr=0x8021FBECu; f_800B0548(c); // 8021FBE8
  {uint32_t ea=c->r[3]+0x00000020u; c->f[31]=c->ps1[31]=RF32(ea);} // 8021FBEC
  goto L_8021FC68; // 8021FBF0
L_8021FBF4:;
  c->r[3]=c->r[28]|c->r[28]; // 8021FBF4
  c->lr=0x8021FBFCu; f_800B0548(c); // 8021FBF8
  c->r[3]=R32(c->r[3]+0x0000002Cu); // 8021FBFC
  c->r[0]=0u+0x43300000u; // 8021FC00
  W32(c->r[1]+0x00000008u,c->r[0]); // 8021FC04
  c->r[0]=c->r[3]^0x80000000u; // 8021FC08
  {uint32_t ea=c->r[2]+0xFFFFE008u; c->f[1]=RF64(ea);} // 8021FC0C
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 8021FC10
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=RF64(ea);} // 8021FC14
  c->f[31]=c->ps1[31]=S(c->f[0]-c->f[1]); // 8021FC18
  goto L_8021FC68; // 8021FC1C
L_8021FC20:;
  c->r[3]=c->r[28]|c->r[28]; // 8021FC20
  c->lr=0x8021FC28u; f_800B0548(c); // 8021FC24
  {uint32_t ea=c->r[3]+0x00000030u; c->f[31]=c->ps1[31]=RF32(ea);} // 8021FC28
  goto L_8021FC68; // 8021FC2C
L_8021FC30:;
  c->r[3]=c->r[28]|c->r[28]; // 8021FC30
  c->lr=0x8021FC38u; f_800B0548(c); // 8021FC34
  {uint32_t ea=c->r[3]+0x00000034u; c->f[31]=c->ps1[31]=RF32(ea);} // 8021FC38
  goto L_8021FC68; // 8021FC3C
L_8021FC40:;
  c->r[3]=c->r[28]|c->r[28]; // 8021FC40
  c->lr=0x8021FC48u; f_800B0548(c); // 8021FC44
  {uint32_t ea=c->r[3]+0x0000004Cu; c->f[31]=c->ps1[31]=RF32(ea);} // 8021FC48
  goto L_8021FC68; // 8021FC4C
L_8021FC50:;
  c->r[3]=c->r[28]|c->r[28]; // 8021FC50
  c->r[4]=c->r[29]|c->r[29]; // 8021FC54
  c->r[5]=c->r[31]|c->r[31]; // 8021FC58
  c->r[6]=0u+0x00000000u; // 8021FC5C
  c->lr=0x8021FC64u; f_8021FC8C(c); // 8021FC60
  c->f[31]=c->f[1]; // 8021FC64
L_8021FC68:;
  c->f[1]=c->f[31]; // 8021FC68
  {uint32_t ea=c->r[1]+0x00000038u; psq_load(c,31,ea,0,0);} // 8021FC6C
  {uint32_t ea=c->r[1]+0x00000030u; c->f[31]=RF64(ea);} // 8021FC70
  c->r[11]=c->r[1]+0x00000030u; // 8021FC74
  c->lr=0x8021FC7Cu; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8021FC78
  c->r[0]=R32(c->r[1]+0x00000044u); // 8021FC7C
  c->lr=c->r[0]; // 8021FC80
  c->r[1]=c->r[1]+0x00000040u; // 8021FC84
  return; // 8021FC88
}

// fn_8021FC8C
void f_8021FC8C(Ctx* __restrict c) {
  trace_call(0x8021FC8Cu);
  cmpu(c,0,c->r[3],0x0000000Au); // 8021FC8C
  if (!crb(c,1)) { goto L_8021FC98; } // 8021FC90
  c->r[3]=0u+0x00000000u; // 8021FC94
L_8021FC98:;
  cmpu(c,0,c->r[4],0x00000005u); // 8021FC98
  if (!crb(c,1)) { goto L_8021FCA4; } // 8021FC9C
  c->r[4]=0u+0x00000000u; // 8021FCA0
L_8021FCA4:;
  cmpu(c,0,c->r[5],0x00000009u); // 8021FCA4
  if (!crb(c,1)) { goto L_8021FCB0; } // 8021FCA8
  c->r[5]=0u+0x00000000u; // 8021FCAC
L_8021FCB0:;
  cmpu(c,0,c->r[6],0x00000001u); // 8021FCB0
  if (!crb(c,1)) { goto L_8021FCBC; } // 8021FCB4
  c->r[6]=0u+0x00000000u; // 8021FCB8
L_8021FCBC:;
  c->r[0]=(uint32_t)((int32_t)c->r[3]*(int32_t)480); // 8021FCBC
  c->r[7]=0u+0x80750000u; // 8021FCC0
  c->r[5]=rotl(c->r[5],3)&0xFFFFFFF8u; // 8021FCC4
  c->r[7]=c->r[7]+0x00001770u; // 8021FCC8
  c->r[4]=(uint32_t)((int32_t)c->r[4]*(int32_t)80); // 8021FCCC
  c->r[3]=rotl(c->r[6],2)&0xFFFFFFFCu; // 8021FCD0
  c->r[0]=c->r[7]+c->r[0]; // 8021FCD4
  c->r[0]=c->r[4]+c->r[0]; // 8021FCD8
  c->r[0]=c->r[5]+c->r[0]; // 8021FCDC
  {uint32_t ea=c->r[3]+c->r[0]; c->f[1]=c->ps1[1]=RF32(ea);} // 8021FCE0
  return; // 8021FCE4
}

// fn_8021FCE8
void f_8021FCE8(Ctx* __restrict c) {
  trace_call(0x8021FCE8u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8021FCE8
  c->r[0]=c->lr; // 8021FCEC
  W32(c->r[1]+0x00000034u,c->r[0]); // 8021FCF0
  c->r[11]=c->r[1]+0x00000020u; // 8021FCF4
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[31]);} // 8021FCF8
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,31,ea,0,0);} // 8021FCFC
  c->lr=0x8021FD04u; { W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8021FD00
  cmpu(c,0,c->r[4],0x0000000Au); // 8021FD04
  c->r[28]=c->r[4]|c->r[4]; // 8021FD08
  c->r[29]=c->r[5]|c->r[5]; // 8021FD0C
  if (!crb(c,1)) { goto L_8021FD18; } // 8021FD10
  c->r[28]=0u+0x00000000u; // 8021FD14
L_8021FD18:;
  cmpu(c,0,c->r[5],0x00000005u); // 8021FD18
  if (!crb(c,1)) { goto L_8021FD24; } // 8021FD1C
  c->r[29]=0u+0x00000000u; // 8021FD20
L_8021FD24:;
  c->r[0]=(uint32_t)((int32_t)c->r[28]*(int32_t)24); // 8021FD24
  c->r[4]=rotl(c->r[29],2)&0xFFFFFFFCu; // 8021FD28
  {uint32_t ea=c->r[2]+0xFFFFE000u; c->f[31]=c->ps1[31]=RF32(ea);} // 8021FD2C
  c->r[31]=0u+0xFFFFFFFFu; // 8021FD30
  c->r[0]=c->r[3]+c->r[0]; // 8021FD34
  c->r[3]=R32(c->r[4]+c->r[0]); // 8021FD38
  c->r[30]=c->r[3]+0x00000001u; // 8021FD3C
  goto L_8021FD6C; // 8021FD40
L_8021FD44:;
  c->r[3]=c->r[28]|c->r[28]; // 8021FD44
  c->r[4]=c->r[29]|c->r[29]; // 8021FD48
  c->r[5]=c->r[30]|c->r[30]; // 8021FD4C
  c->r[6]=0u+0x00000001u; // 8021FD50
  c->lr=0x8021FD58u; f_8021FC8C(c); // 8021FD54
  fcmp(c,0,c->f[1],c->f[31]); // 8021FD58
  if (!crb(c,1)) { goto L_8021FD68; } // 8021FD5C
  c->r[31]=c->r[30]|c->r[30]; // 8021FD60
  goto L_8021FD74; // 8021FD64
L_8021FD68:;
  c->r[30]=c->r[30]+0x00000001u; // 8021FD68
L_8021FD6C:;
  cmps(c,0,(int32_t)c->r[30],10); // 8021FD6C
  if (crb(c,0)) { IRQCHK(c); goto L_8021FD44; } // 8021FD70
L_8021FD74:;
  {uint32_t ea=c->r[1]+0x00000028u; psq_load(c,31,ea,0,0);} // 8021FD74
  c->r[3]=c->r[31]|c->r[31]; // 8021FD78
  {uint32_t ea=c->r[1]+0x00000020u; c->f[31]=RF64(ea);} // 8021FD7C
  c->r[11]=c->r[1]+0x00000020u; // 8021FD80
  c->lr=0x8021FD88u; { c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8021FD84
  c->r[0]=R32(c->r[1]+0x00000034u); // 8021FD88
  c->lr=c->r[0]; // 8021FD8C
  c->r[1]=c->r[1]+0x00000030u; // 8021FD90
  return; // 8021FD94
}

// fn_8021FD98
void f_8021FD98(Ctx* __restrict c) {
  trace_call(0x8021FD98u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8021FD98
  c->r[0]=c->lr; // 8021FD9C
  cmpu(c,0,c->r[4],0x0000000Au); // 8021FDA0
  W32(c->r[1]+0x00000024u,c->r[0]); // 8021FDA4
  {uint32_t ea=c->r[1]+0x00000010u; for(int i=28;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 8021FDA8
  c->r[28]=c->r[4]|c->r[4]; // 8021FDAC
  c->r[29]=c->r[5]|c->r[5]; // 8021FDB0
  if (!crb(c,1)) { goto L_8021FDBC; } // 8021FDB4
  c->r[28]=0u+0x00000000u; // 8021FDB8
L_8021FDBC:;
  cmpu(c,0,c->r[5],0x00000005u); // 8021FDBC
  if (!crb(c,1)) { goto L_8021FDC8; } // 8021FDC0
  c->r[29]=0u+0x00000000u; // 8021FDC4
L_8021FDC8:;
  c->r[0]=(uint32_t)((int32_t)c->r[28]*(int32_t)24); // 8021FDC8
  c->r[4]=rotl(c->r[29],2)&0xFFFFFFFCu; // 8021FDCC
  c->r[31]=0u+0xFFFFFFFFu; // 8021FDD0
  c->r[0]=c->r[3]+c->r[0]; // 8021FDD4
  c->r[3]=R32(c->r[4]+c->r[0]); // 8021FDD8
  c->r[30]=c->r[3]+0x00000001u; // 8021FDDC
  goto L_8021FE18; // 8021FDE0
L_8021FDE4:;
  c->r[3]=c->r[28]|c->r[28]; // 8021FDE4
  c->r[4]=c->r[29]|c->r[29]; // 8021FDE8
  c->r[5]=c->r[30]|c->r[30]; // 8021FDEC
  c->r[6]=0u+0x00000001u; // 8021FDF0
  c->lr=0x8021FDF8u; f_8021FC8C(c); // 8021FDF4
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[1],true)); // 8021FDF8
  {uint32_t ea=c->r[1]+0x00000008u; WF64(ea,c->f[0]);} // 8021FDFC
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 8021FE00
  cmps(c,0,(int32_t)c->r[0],0); // 8021FE04
  if (!crb(c,1)) { goto L_8021FE14; } // 8021FE08
  c->r[31]=c->r[0]|c->r[0]; // 8021FE0C
  goto L_8021FE20; // 8021FE10
L_8021FE14:;
  c->r[30]=c->r[30]+0x00000001u; // 8021FE14
L_8021FE18:;
  cmps(c,0,(int32_t)c->r[30],10); // 8021FE18
  if (crb(c,0)) { IRQCHK(c); goto L_8021FDE4; } // 8021FE1C
L_8021FE20:;
  c->r[3]=c->r[31]|c->r[31]; // 8021FE20
  {uint32_t ea=c->r[1]+0x00000010u; for(int i=28;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 8021FE24
  c->r[0]=R32(c->r[1]+0x00000024u); // 8021FE28
  c->lr=c->r[0]; // 8021FE2C
  c->r[1]=c->r[1]+0x00000020u; // 8021FE30
  return; // 8021FE34
}

// fn_8021FE38
void f_8021FE38(Ctx* __restrict c) {
  trace_call(0x8021FE38u);
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8021FE38
  c->r[0]=c->lr; // 8021FE3C
  c->r[6]=0u+0x806A0000u; // 8021FE40
  W32(c->r[1]+0x00000064u,c->r[0]); // 8021FE44
  c->r[6]=c->r[6]+0xFFFF9020u; // 8021FE48
  c->r[0]=0u+0x00000004u; // 8021FE4C
  c->r[7]=c->r[1]+0x00000004u; // 8021FE50
  {uint32_t ea=c->r[1]+0x00000038u; for(int i=22;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 8021FE54
  c->r[31]=c->r[3]|c->r[3]; // 8021FE58
  c->r[24]=c->r[4]|c->r[4]; // 8021FE5C
  c->r[22]=c->r[5]|c->r[5]; // 8021FE60
  c->r[6]=c->r[6]+0xFFFFFFFCu; // 8021FE64
  c->ctr=c->r[0]; // 8021FE68
L_8021FE6C:;
  c->r[3]=R32(c->r[6]+0x00000004u); // 8021FE6C
  {uint32_t ea=c->r[6]+0x00000008u; c->r[0]=R32(ea); c->r[6]=ea;} // 8021FE70
  W32(c->r[7]+0x00000004u,c->r[3]); // 8021FE74
  {uint32_t ea=c->r[7]+0x00000008u; W32(ea,c->r[0]); c->r[7]=ea;} // 8021FE78
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8021FE6C; } // 8021FE7C
  c->r[0]=R32(c->r[6]+0x00000004u); // 8021FE80
  cmpu(c,0,c->r[4],0x0000000Au); // 8021FE84
  W32(c->r[7]+0x00000004u,c->r[0]); // 8021FE88
  if (!crb(c,1)) { goto L_8021FE94; } // 8021FE8C
  c->r[24]=0u+0x00000000u; // 8021FE90
L_8021FE94:;
  cmpu(c,0,c->r[5],0x00000005u); // 8021FE94
  if (!crb(c,1)) { goto L_8021FEA0; } // 8021FE98
  c->r[22]=0u+0x00000000u; // 8021FE9C
L_8021FEA0:;
  c->r[3]=c->r[31]|c->r[31]; // 8021FEA0
  c->r[4]=c->r[24]|c->r[24]; // 8021FEA4
  c->r[5]=c->r[22]|c->r[22]; // 8021FEA8
  c->lr=0x8021FEB0u; f_8021FD98(c); // 8021FEAC
  cmps(c,0,(int32_t)c->r[3],0); // 8021FEB0
  c->r[23]=c->r[3]|c->r[3]; // 8021FEB4
  if (crb(c,0)) { goto L_8021FED8; } // 8021FEB8
  c->r[3]=R32(c->r[13]+0xFFFFC218u); // 8021FEBC
  c->r[4]=0u+0x00000000u; // 8021FEC0
  c->lr=0x8021FEC8u; f_800CEC8C(c); // 8021FEC4
  c->r[4]=0u+0x00000005u; // 8021FEC8
  c->lr=0x8021FED0u; f_800CDF14(c); // 8021FECC
  cmps(c,0,(int32_t)c->r[23],(int32_t)c->r[3]); // 8021FED0
  if (!crb(c,1)) { goto L_8021FEE0; } // 8021FED4
L_8021FED8:;
  c->r[3]=0u+0x00000000u; // 8021FED8
  goto L_80220018; // 8021FEDC
L_8021FEE0:;
  c->r[3]=R32(c->r[13]+0xFFFFC218u); // 8021FEE0
  c->r[4]=0u+0x00000000u; // 8021FEE4
  c->lr=0x8021FEECu; f_800CEC8C(c); // 8021FEE8
  c->r[5]=c->r[23]|c->r[23]; // 8021FEEC
  c->r[4]=0u+0x00000005u; // 8021FEF0
  c->lr=0x8021FEF8u; f_800CDD44(c); // 8021FEF4
  c->r[3]=c->r[31]|c->r[31]; // 8021FEF8
  c->r[4]=c->r[24]|c->r[24]; // 8021FEFC
  c->r[5]=c->r[22]|c->r[22]; // 8021FF00
  c->lr=0x8021FF08u; f_8021FCE8(c); // 8021FF04
  c->r[0]=(uint32_t)((int32_t)c->r[24]*(int32_t)24); // 8021FF08
  c->r[23]=0u+0x80730000u; // 8021FF0C
  c->r[24]=0u+0x806D0000u; // 8021FF10
  c->r[4]=rotl(c->r[22],2)&0xFFFFFFFCu; // 8021FF14
  c->r[0]=c->r[31]+c->r[0]; // 8021FF18
  c->r[24]=c->r[24]+0xFFFFC740u; // 8021FF1C
  W32(c->r[4]+c->r[0],c->r[3]); // 8021FF20
  c->r[25]=c->r[23]+0x00003694u; // 8021FF24
  c->r[29]=c->r[1]+0x00000008u; // 8021FF28
  c->r[30]=0u+0x00000000u; // 8021FF2C
  c->r[26]=0u+0x80050000u; // 8021FF30
  c->r[27]=0u+0x80750000u; // 8021FF34
  c->r[28]=0u+0x00000001u; // 8021FF38
  goto L_8021FFF8; // 8021FF3C
L_8021FF40:;
  c->r[22]=0u+0x00000000u; // 8021FF40
L_8021FF44:;
  c->r[0]=R32(c->r[29]+c->r[30]); // 8021FF44
  cmps(c,0,(int32_t)c->r[0],13); // 8021FF48
  if (crb(c,2)) { goto L_8021FF5C; } // 8021FF4C
  cmps(c,0,(int32_t)c->r[22],5); // 8021FF50
  if (crb(c,2)) { goto L_8021FFBC; } // 8021FF54
  goto L_8021FF64; // 8021FF58
L_8021FF5C:;
  cmps(c,0,(int32_t)c->r[22],1); // 8021FF5C
  if (crb(c,2)) { goto L_8021FFBC; } // 8021FF60
L_8021FF64:;
  c->r[0]=R8(c->r[13]+0xFFFFBB77u); // 8021FF64
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 8021FF68
  if (!crb(c,2)) { goto L_8021FF98; } // 8021FF6C
  c->r[3]=c->r[23]+0x00003694u; // 8021FF70
  c->lr=0x8021FF78u; f_800BD290(c); // 8021FF74
  c->r[0]=c->r[24]+0x00000028u; // 8021FF78
  W32(c->r[25]+0x000000A4u,c->r[24]); // 8021FF7C
  c->r[3]=c->r[25]|c->r[25]; // 8021FF80
  c->r[4]=c->r[26]+0xFFFFA2E4u; // 8021FF84
  W32(c->r[25]+0x000000A8u,c->r[0]); // 8021FF88
  c->r[5]=c->r[27]+0x00005504u; // 8021FF8C
  c->lr=0x8021FF94u; f_803A92B8(c); // 8021FF90
  W8(c->r[13]+0xFFFFBB77u,c->r[28]); // 8021FF94
L_8021FF98:;
  c->r[4]=R32(c->r[29]+c->r[30]); // 8021FF98
  c->r[3]=c->r[23]+0x00003694u; // 8021FF9C
  c->lr=0x8021FFA4u; f_800BFC10(c); // 8021FFA0
  c->r[4]=c->r[3]|c->r[3]; // 8021FFA4
  c->r[3]=c->r[31]|c->r[31]; // 8021FFA8
  c->r[5]=c->r[22]|c->r[22]; // 8021FFAC
  c->lr=0x8021FFB4u; f_8021FD98(c); // 8021FFB0
  cmps(c,0,(int32_t)c->r[3],0); // 8021FFB4
  if (!crb(c,0)) { goto L_8021FFC8; } // 8021FFB8
L_8021FFBC:;
  c->r[22]=c->r[22]+0x00000001u; // 8021FFBC
  cmps(c,0,(int32_t)c->r[22],6); // 8021FFC0
  if (crb(c,0)) { IRQCHK(c); goto L_8021FF44; } // 8021FFC4
L_8021FFC8:;
  cmps(c,0,(int32_t)c->r[22],6); // 8021FFC8
  if (crb(c,0)) { goto L_80220014; } // 8021FFCC
  c->r[30]=c->r[30]+0x00000004u; // 8021FFD0
  c->r[0]=R32(c->r[29]+c->r[30]); // 8021FFD4
  cmps(c,0,(int32_t)c->r[0],0); // 8021FFD8
  if (!crb(c,0)) { goto L_8021FFF8; } // 8021FFDC
  c->r[3]=R32(c->r[13]+0xFFFFC218u); // 8021FFE0
  c->r[4]=0u+0x00000000u; // 8021FFE4
  c->lr=0x8021FFECu; f_800CECA4(c); // 8021FFE8
  c->r[4]=0u+0x0000001Au; // 8021FFEC
  c->lr=0x8021FFF4u; f_800CE7A4(c); // 8021FFF0
  goto L_80220014; // 8021FFF4
L_8021FFF8:;
  c->r[3]=R32(c->r[13]+0xFFFFC218u); // 8021FFF8
  c->r[4]=0u+0x00000000u; // 8021FFFC
  c->lr=0x80220004u; f_800CEC8C(c); // 80220000
  c->r[4]=R32(c->r[29]+c->r[30]); // 80220004
  c->lr=0x8022000Cu; f_800CDDE0(c); // 80220008
  cmps(c,0,(int32_t)c->r[3],0); // 8022000C
  if (!crb(c,2)) { IRQCHK(c); goto L_8021FF40; } // 80220010
L_80220014:;
  c->r[3]=0u+0x00000001u; // 80220014
L_80220018:;
  {uint32_t ea=c->r[1]+0x00000038u; for(int i=22;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 80220018
  c->r[0]=R32(c->r[1]+0x00000064u); // 8022001C
  c->lr=c->r[0]; // 80220020
  c->r[1]=c->r[1]+0x00000060u; // 80220024
  return; // 80220028
}

// fn_8022002C
void f_8022002C(Ctx* __restrict c) {
  trace_call(0x8022002Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8022002C
  c->r[0]=c->lr; // 80220030
  W32(c->r[1]+0x00000024u,c->r[0]); // 80220034
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=26;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 80220038
  c->r[26]=c->r[3]|c->r[3]; // 8022003C
  c->r[28]=0u+0x00000000u; // 80220040
  c->r[31]=0u+0x00000000u; // 80220044
L_80220048:;
  c->r[29]=c->r[26]+c->r[31]; // 80220048
  c->r[27]=0u+0x00000000u; // 8022004C
  c->r[30]=0u+0x00000000u; // 80220050
L_80220054:;
  c->r[3]=c->r[28]|c->r[28]; // 80220054
  c->lr=0x8022005Cu; f_800B0548(c); // 80220058
  c->r[3]=c->r[3]+c->r[30]; // 8022005C
  c->r[27]=c->r[27]+0x00000001u; // 80220060
  c->r[0]=R32(c->r[3]+0x00000050u); // 80220064
  cmps(c,0,(int32_t)c->r[27],6); // 80220068
  W32(c->r[29]+c->r[30],c->r[0]); // 8022006C
  c->r[30]=c->r[30]+0x00000004u; // 80220070
  if (crb(c,0)) { IRQCHK(c); goto L_80220054; } // 80220074
  c->r[28]=c->r[28]+0x00000001u; // 80220078
  c->r[31]=c->r[31]+0x00000018u; // 8022007C
  cmps(c,0,(int32_t)c->r[28],11); // 80220080
  if (crb(c,0)) { IRQCHK(c); goto L_80220048; } // 80220084
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=26;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 80220088
  c->r[0]=R32(c->r[1]+0x00000024u); // 8022008C
  c->lr=c->r[0]; // 80220090
  c->r[1]=c->r[1]+0x00000020u; // 80220094
  return; // 80220098
}

// fn_8022009C
void f_8022009C(Ctx* __restrict c) {
  trace_call(0x8022009Cu);
  c->r[0]=0u+0x00000000u; // 8022009C
  W32(c->r[3]+0x00000000u,c->r[0]); // 802200A0
  W32(c->r[3]+0x00000008u,c->r[0]); // 802200A4
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 802200A8
  W32(c->r[3]+0x00000014u,c->r[0]); // 802200AC
  return; // 802200B0
}

// dtor_802200B4
void f_802200B4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802200B4
  c->r[0]=c->lr; // 802200B8
  cmps(c,0,(int32_t)c->r[3],0); // 802200BC
  W32(c->r[1]+0x00000014u,c->r[0]); // 802200C0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 802200C4
  c->r[31]=c->r[3]|c->r[3]; // 802200C8
  if (crb(c,2)) { goto L_80220100; } // 802200CC
  c->r[0]=R32(c->r[3]+0x00000000u); // 802200D0
  cmps(c,0,(int32_t)c->r[0],0); // 802200D4
  if (crb(c,2)) { goto L_80220100; } // 802200D8
  c->r[4]=R32(c->r[3]+0x00000004u); // 802200DC
  cmps(c,0,(int32_t)c->r[4],0); // 802200E0
  if (crb(c,2)) { goto L_802200F8; } // 802200E4
  c->r[3]=c->r[0]|c->r[0]; // 802200E8
  c->lr=0x802200F0u; f_803C4D18(c); // 802200EC
  c->r[0]=0u+0x00000000u; // 802200F0
  W32(c->r[31]+0x00000004u,c->r[0]); // 802200F4
L_802200F8:;
  c->r[0]=0u+0x00000000u; // 802200F8
  W32(c->r[31]+0x00000000u,c->r[0]); // 802200FC
L_80220100:;
  c->r[3]=c->r[31]|c->r[31]; // 80220100
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80220104
  c->r[0]=R32(c->r[1]+0x00000014u); // 80220108
  c->lr=c->r[0]; // 8022010C
  c->r[1]=c->r[1]+0x00000010u; // 80220110
  return; // 80220114
}

// fn_80220118
void f_80220118(Ctx* __restrict c) {
  trace_call(0x80220118u);
  {uint32_t ea=c->r[1]+0xFFFFFF90u; W32(ea,c->r[1]); c->r[1]=ea;} // 80220118
  c->r[0]=c->lr; // 8022011C
  W32(c->r[1]+0x00000074u,c->r[0]); // 80220120
  c->r[11]=c->r[1]+0x00000070u; // 80220124
  c->lr=0x8022012Cu; { W32(c->r[11]+0xFFFFFFC0u,c->r[16]); W32(c->r[11]+0xFFFFFFC4u,c->r[17]); W32(c->r[11]+0xFFFFFFC8u,c->r[18]); W32(c->r[11]+0xFFFFFFCCu,c->r[19]); W32(c->r[11]+0xFFFFFFD0u,c->r[20]); W32(c->r[11]+0xFFFFFFD4u,c->r[21]); W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80220128
  c->r[19]=R32(c->r[1]+0x00000078u); // 8022012C
  c->r[29]=c->r[4]|c->r[4]; // 80220130
  W32(c->r[3]+0x00000000u,c->r[4]); // 80220134
  c->r[28]=c->r[3]|c->r[3]; // 80220138
  c->r[21]=rotl(c->r[19],2)&0xFFFFFFFCu; // 8022013C
  c->r[30]=c->r[5]|c->r[5]; // 80220140
  c->r[23]=(uint32_t)((int32_t)c->r[9]*(int32_t)c->r[21]); // 80220144
  c->r[31]=c->r[6]|c->r[6]; // 80220148
  c->r[20]=c->r[7]|c->r[7]; // 8022014C
  c->r[16]=c->r[8]|c->r[8]; // 80220150
  c->r[17]=c->r[9]|c->r[9]; // 80220154
  c->r[18]=c->r[10]|c->r[10]; // 80220158
  c->r[24]=c->r[21]+c->r[23]; // 8022015C
  c->r[3]=c->r[29]|c->r[29]; // 80220160
  c->r[4]=c->r[24]|c->r[24]; // 80220164
  c->lr=0x8022016Cu; f_803C4D08(c); // 80220168
  c->r[22]=c->r[3]|c->r[3]; // 8022016C
  c->r[5]=c->r[24]|c->r[24]; // 80220170
  c->r[4]=c->r[22]|c->r[22]; // 80220174
  c->r[3]=c->r[1]+0x00000014u; // 80220178
  c->r[6]=0u+0x00000004u; // 8022017C
  c->lr=0x80220184u; f_8032CF1C(c); // 80220180
  c->r[4]=c->r[21]|c->r[21]; // 80220184
  c->r[3]=c->r[1]+0x00000014u; // 80220188
  c->lr=0x80220190u; f_8032CF70(c); // 8022018C
  W32(c->r[28]+0x0000000Cu,c->r[3]); // 80220190
  c->r[4]=c->r[23]|c->r[23]; // 80220194
  c->r[3]=c->r[1]+0x00000014u; // 80220198
  c->lr=0x802201A0u; f_8032CF70(c); // 8022019C
  W32(c->r[28]+0x00000014u,c->r[3]); // 802201A0
  c->r[0]=R8(c->r[13]+0xFFFFBD68u); // 802201A4
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 802201A8
  if (!crb(c,2)) { goto L_802201C8; } // 802201AC
  c->r[3]=R32(c->r[13]+0xFFFFBCB0u); // 802201B0
  c->r[0]=0u+0x00000001u; // 802201B4
  W32(c->r[13]+0xFFFFBD64u,c->r[3]); // 802201B8
  c->r[3]=c->r[3]+0x00000001u; // 802201BC
  W32(c->r[13]+0xFFFFBCB0u,c->r[3]); // 802201C0
  W8(c->r[13]+0xFFFFBD68u,c->r[0]); // 802201C4
L_802201C8:;
  c->r[12]=R32(c->r[30]+0x00000000u); // 802201C8
  c->r[3]=c->r[30]|c->r[30]; // 802201CC
  c->r[4]=R32(c->r[13]+0xFFFFBD64u); // 802201D0
  c->r[12]=R32(c->r[12]+0x00000048u); // 802201D4
  c->ctr=c->r[12]; // 802201D8
  if (true) { c->lr=0x802201E0u; dispatch(c,c->ctr); } // 802201DC
  c->r[26]=c->r[3]|c->r[3]; // 802201E0
  c->r[4]=c->r[20]|c->r[20]; // 802201E4
  c->lr=0x802201ECu; f_802E9D04(c); // 802201E8
  c->r[20]=c->r[3]|c->r[3]; // 802201EC
  c->r[23]=0u+0x00000000u; // 802201F0
  c->r[21]=0u+0x00000000u; // 802201F4
  goto L_80220220; // 802201F8
L_802201FC:;
  c->r[0]=R32(c->r[20]+0x0000002Cu); // 802201FC
  c->r[3]=c->r[26]|c->r[26]; // 80220200
  W32(c->r[1]+0x00000010u,c->r[0]); // 80220204
  c->r[4]=c->r[1]+0x00000010u; // 80220208
  c->lr=0x80220210u; f_802E857C(c); // 8022020C
  c->r[4]=R32(c->r[28]+0x0000000Cu); // 80220210
  c->r[23]=c->r[23]+0x00000001u; // 80220214
  W32(c->r[4]+c->r[21],c->r[3]); // 80220218
  c->r[21]=c->r[21]+0x00000004u; // 8022021C
L_80220220:;
  cmps(c,0,(int32_t)c->r[23],(int32_t)c->r[19]); // 80220220
  if (crb(c,0)) { IRQCHK(c); goto L_802201FC; } // 80220224
  c->r[21]=0u+0x00000000u; // 80220228
  c->r[25]=0u+0x00000000u; // 8022022C
  goto L_80220290; // 80220230
L_80220234:;
  c->r[4]=R32(c->r[16]+0x00000000u); // 80220234
  c->r[3]=c->r[26]|c->r[26]; // 80220238
  c->lr=0x80220240u; f_802E9D04(c); // 8022023C
  c->r[27]=c->r[3]|c->r[3]; // 80220240
  c->r[23]=rotl(c->r[25],2)&0xFFFFFFFCu; // 80220244
  c->r[20]=0u+0x00000000u; // 80220248
  c->r[24]=0u+0x00000000u; // 8022024C
  goto L_8022027C; // 80220250
L_80220254:;
  c->r[0]=R32(c->r[27]+0x0000002Cu); // 80220254
  c->r[3]=c->r[26]|c->r[26]; // 80220258
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 8022025C
  c->r[4]=c->r[1]+0x0000000Cu; // 80220260
  c->lr=0x80220268u; f_802E857C(c); // 80220264
  c->r[4]=R32(c->r[28]+0x00000014u); // 80220268
  c->r[0]=c->r[24]+c->r[23]; // 8022026C
  c->r[24]=c->r[24]+0x00000004u; // 80220270
  c->r[20]=c->r[20]+0x00000001u; // 80220274
  W32(c->r[4]+c->r[0],c->r[3]); // 80220278
L_8022027C:;
  cmps(c,0,(int32_t)c->r[20],(int32_t)c->r[19]); // 8022027C
  if (crb(c,0)) { IRQCHK(c); goto L_80220254; } // 80220280
  c->r[25]=c->r[25]+c->r[19]; // 80220284
  c->r[21]=c->r[21]+0x00000001u; // 80220288
  c->r[16]=c->r[16]+0x00000004u; // 8022028C
L_80220290:;
  cmps(c,0,(int32_t)c->r[21],(int32_t)c->r[17]); // 80220290
  if (crb(c,0)) { IRQCHK(c); goto L_80220234; } // 80220294
  cmps(c,0,(int32_t)c->r[31],0); // 80220298
  if (crb(c,2)) { goto L_80220348; } // 8022029C
  c->r[20]=0u+0x00000000u; // 802202A0
  c->r[27]=0u+0x00000000u; // 802202A4
  c->r[21]=0u+0x806D0000u; // 802202A8
  c->r[16]=0u+0x806D0000u; // 802202AC
  goto L_80220340; // 802202B0
L_802202B4:;
  c->r[5]=R32(c->r[30]+0x0000003Cu); // 802202B4
  c->r[3]=c->r[1]+0x00000008u; // 802202B8
  c->r[4]=R32(c->r[18]+0x00000000u); // 802202BC
  c->r[0]=R32(c->r[5]+0x000000E8u); // 802202C0
  W32(c->r[1]+0x00000008u,c->r[0]); // 802202C4
  c->lr=0x802202CCu; f_804AC3C4(c); // 802202C8
  cmps(c,0,(int32_t)c->r[3],0); // 802202CC
  c->r[23]=c->r[3]|c->r[3]; // 802202D0
  if (crb(c,2)) { goto L_80220308; } // 802202D4
  if (!crb(c,2)) { goto L_802202F0; } // 802202D8
  c->r[3]=c->r[21]+0xFFFFE3D8u; // 802202DC
  c->r[5]=c->r[16]+0xFFFFE3B8u; // 802202E0
  c->r[4]=0u+0x00000038u; // 802202E4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 802202E8
  c->lr=0x802202F0u; f_80484674(c); // 802202EC
L_802202F0:;
  cmps(c,0,(int32_t)c->r[23],0); // 802202F0
  if (crb(c,2)) { goto L_80220300; } // 802202F4
  c->r[7]=R32(c->r[23]+0x0000000Cu); // 802202F8
  goto L_8022030C; // 802202FC
L_80220300:;
  c->r[7]=0u+0x00000000u; // 80220300
  goto L_8022030C; // 80220304
L_80220308:;
  c->r[7]=0u+0xFFFFFFFFu; // 80220308
L_8022030C:;
  c->r[5]=R32(c->r[31]+0x00000000u); // 8022030C
  c->r[3]=c->r[26]|c->r[26]; // 80220310
  {uint32_t ea=c->r[2]+0xFFFFE010u; c->f[1]=c->ps1[1]=RF32(ea);} // 80220314
  c->r[4]=0u+0x00000000u; // 80220318
  c->r[0]=c->r[5]+0x00000001u; // 8022031C
  W32(c->r[31]+0x00000000u,c->r[0]); // 80220320
  {uint32_t ea=c->r[2]+0xFFFFE014u; c->f[2]=c->ps1[2]=RF32(ea);} // 80220324
  c->r[6]=R32(c->r[28]+0x0000000Cu); // 80220328
  c->r[6]=R32(c->r[6]+c->r[27]); // 8022032C
  c->lr=0x80220334u; f_802E98D8(c); // 80220330
  c->r[18]=c->r[18]+0x00000004u; // 80220334
  c->r[27]=c->r[27]+0x00000004u; // 80220338
  c->r[20]=c->r[20]+0x00000001u; // 8022033C
L_80220340:;
  cmps(c,0,(int32_t)c->r[20],(int32_t)c->r[19]); // 80220340
  if (crb(c,0)) { IRQCHK(c); goto L_802202B4; } // 80220344
L_80220348:;
  c->r[0]=(uint32_t)((int32_t)c->r[17]*(int32_t)c->r[19]); // 80220348
  W32(c->r[28]+0x00000000u,c->r[29]); // 8022034C
  c->r[11]=c->r[1]+0x00000070u; // 80220350
  W32(c->r[28]+0x00000004u,c->r[22]); // 80220354
  c->r[3]=0u+0x00000001u; // 80220358
  W32(c->r[28]+0x00000010u,c->r[19]); // 8022035C
  W32(c->r[28]+0x00000018u,c->r[0]); // 80220360
  c->lr=0x80220368u; { c->r[16]=R32(c->r[11]+0xFFFFFFC0u); c->r[17]=R32(c->r[11]+0xFFFFFFC4u); c->r[18]=R32(c->r[11]+0xFFFFFFC8u); c->r[19]=R32(c->r[11]+0xFFFFFFCCu); c->r[20]=R32(c->r[11]+0xFFFFFFD0u); c->r[21]=R32(c->r[11]+0xFFFFFFD4u); c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80220364
  c->r[0]=R32(c->r[1]+0x00000074u); // 80220368
  c->lr=c->r[0]; // 8022036C
  c->r[1]=c->r[1]+0x00000070u; // 80220370
  return; // 80220374
}

// fn_80220378
void f_80220378(Ctx* __restrict c) {
  trace_call(0x80220378u);
  c->r[0]=R32(c->r[3]+0x00000010u); // 80220378
  c->r[3]=R32(c->r[3]+0x00000014u); // 8022037C
  c->r[0]=(uint32_t)((int32_t)c->r[4]*(int32_t)c->r[0]); // 80220380
  c->r[0]=c->r[5]+c->r[0]; // 80220384
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80220388
  c->r[3]=R32(c->r[3]+c->r[0]); // 8022038C
  return; // 80220390
}

// fn_80220394
void f_80220394(Ctx* __restrict c) {
  trace_call(0x80220394u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80220394
  c->r[0]=c->lr; // 80220398
  c->r[5]=0u+0x806E0000u; // 8022039C
  {uint32_t ea=c->r[2]+0xFFFFE040u; c->f[2]=c->ps1[2]=RF32(ea);} // 802203A0
  W32(c->r[1]+0x00000014u,c->r[0]); // 802203A4
  c->r[0]=rotl(c->r[4],4)&0xFFFFFFF0u; // 802203A8
  c->r[5]=c->r[5]+0x000071E0u; // 802203AC
  {uint32_t ea=c->r[2]+0xFFFFE03Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 802203B0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 802203B4
  c->f[3]=c->f[2]; // 802203B8
  c->r[31]=c->r[5]+c->r[0]; // 802203BC
  W32(c->r[1]+0x00000008u,c->r[30]); // 802203C0
  c->r[30]=c->r[3]|c->r[3]; // 802203C4
  {uint32_t ea=c->r[5]+c->r[0]; c->f[1]=c->ps1[1]=RF32(ea);} // 802203C8
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[1]); // 802203CC
  c->lr=0x802203D4u; f_8032B9D0(c); // 802203D0
  {uint32_t ea=c->r[31]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 802203D4
  {uint32_t ea=c->r[30]+0x0000000Cu; WF32(ea,c->f[0]);} // 802203D8
  {uint32_t ea=c->r[31]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 802203DC
  {uint32_t ea=c->r[30]+0x0000001Cu; WF32(ea,c->f[0]);} // 802203E0
  {uint32_t ea=c->r[31]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 802203E4
  {uint32_t ea=c->r[30]+0x0000002Cu; WF32(ea,c->f[0]);} // 802203E8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 802203EC
  c->r[30]=R32(c->r[1]+0x00000008u); // 802203F0
  c->r[0]=R32(c->r[1]+0x00000014u); // 802203F4
  c->lr=c->r[0]; // 802203F8
  c->r[1]=c->r[1]+0x00000010u; // 802203FC
  return; // 80220400
}

// fn_80220404
void f_80220404(Ctx* __restrict c) {
  trace_call(0x80220404u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80220404
  c->r[0]=c->lr; // 80220408
  W32(c->r[1]+0x00000024u,c->r[0]); // 8022040C
  c->r[0]=0u+0x00000000u; // 80220410
  c->r[3]=c->r[1]+0x00000008u; // 80220414
  {uint32_t ea=c->r[1]+0x00000018u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 80220418
  W8(c->r[1]+0x00000008u,c->r[0]); // 8022041C
  c->lr=0x80220424u; f_80046D50(c); // 80220420
  c->lr=0x80220428u; f_8008CA40(c); // 80220424
  c->r[31]=0u+0x806A0000u; // 80220428
  c->r[30]=c->r[3]|c->r[3]; // 8022042C
  c->r[4]=c->r[31]+0xFFFF98D8u; // 80220430
  c->lr=0x80220438u; f_8007CA34(c); // 80220434
  cmps(c,0,(int32_t)c->r[3],0); // 80220438
  if (!crb(c,2)) { goto L_80220458; } // 8022043C
  c->r[4]=c->r[31]+0xFFFF98D8u; // 80220440
  c->r[3]=c->r[30]|c->r[30]; // 80220444
  c->r[4]=c->r[4]+0x00000006u; // 80220448
  c->lr=0x80220450u; f_8007CA34(c); // 8022044C
  cmps(c,0,(int32_t)c->r[3],0); // 80220450
  if (crb(c,2)) { goto L_80220460; } // 80220454
L_80220458:;
  c->r[3]=0u+0x00000001u; // 80220458
  goto L_80220464; // 8022045C
L_80220460:;
  c->r[3]=0u+0x00000000u; // 80220460
L_80220464:;
  {uint32_t ea=c->r[1]+0x00000018u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 80220464
  c->r[0]=R32(c->r[1]+0x00000024u); // 80220468
  c->lr=c->r[0]; // 8022046C
  c->r[1]=c->r[1]+0x00000020u; // 80220470
  return; // 80220474
}

// fn_80220478
void f_80220478(Ctx* __restrict c) {
  trace_call(0x80220478u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80220478
  c->r[0]=c->lr; // 8022047C
  c->r[5]=0u+0x806A0000u; // 80220480
  W32(c->r[1]+0x00000024u,c->r[0]); // 80220484
  c->r[5]=c->r[5]+0xFFFF98D8u; // 80220488
  c->r[4]=c->r[1]+0x00000008u; // 8022048C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80220490
  c->r[31]=0u+0x00000000u; // 80220494
  c->r[5]=c->r[5]+0x0000000Cu; // 80220498
  W32(c->r[1]+0x00000018u,c->r[30]); // 8022049C
  c->r[30]=c->r[3]|c->r[3]; // 802204A0
  W8(c->r[1]+0x00000008u,c->r[31]); // 802204A4
  c->lr=0x802204ACu; f_80220F68(c); // 802204A8
  c->r[3]=c->r[30]+0x000005C0u; // 802204AC
  c->lr=0x802204B4u; f_80134210(c); // 802204B0
  c->r[5]=0u+0x806E0000u; // 802204B4
  c->r[3]=c->r[30]+0x000005C4u; // 802204B8
  c->r[5]=c->r[5]+0x00007798u; // 802204BC
  W32(c->r[30]+0x0000001Cu,c->r[5]); // 802204C0
  c->r[4]=c->r[5]+0x00000044u; // 802204C4
  c->r[0]=c->r[5]+0x000001F0u; // 802204C8
  W32(c->r[30]+0x00000400u,c->r[4]); // 802204CC
  W32(c->r[30]+0x000005C0u,c->r[0]); // 802204D0
  c->lr=0x802204D8u; f_800E1E14(c); // 802204D4
  c->r[3]=c->r[30]+0x00000668u; // 802204D8
  c->lr=0x802204E0u; f_8022060C(c); // 802204DC
  c->r[3]=c->r[30]+0x00000678u; // 802204E0
  c->lr=0x802204E8u; f_8022060C(c); // 802204E4
  c->r[4]=0u+0x80220000u; // 802204E8
  c->r[5]=0u+0x80220000u; // 802204EC
  c->r[3]=c->r[30]+0x0000067Cu; // 802204F0
  c->r[6]=0u+0x00000030u; // 802204F4
  c->r[4]=c->r[4]+0xFFFFEDC0u; // 802204F8
  c->r[5]=c->r[5]+0xFFFFEE18u; // 802204FC
  c->r[7]=0u+0x00000005u; // 80220500
  c->lr=0x80220508u; f_803A9830(c); // 80220504
  c->r[3]=c->r[30]+0x00000780u; // 80220508
  c->lr=0x80220510u; f_800A7E4C(c); // 8022050C
  c->r[3]=c->r[30]+0x000007A8u; // 80220510
  c->lr=0x80220518u; f_800A80B4(c); // 80220514
  c->r[4]=0u+0x80220000u; // 80220518
  c->r[5]=0u+0x80220000u; // 8022051C
  c->r[3]=c->r[30]+0x000007CCu; // 80220520
  c->r[6]=0u+0x00000028u; // 80220524
  c->r[4]=c->r[4]+0x00000618u; // 80220528
  c->r[5]=c->r[5]+0x00000654u; // 8022052C
  c->r[7]=0u+0x00000001u; // 80220530
  c->lr=0x80220538u; f_803A9830(c); // 80220534
  c->r[3]=c->r[30]+0x0000080Cu; // 80220538
  c->lr=0x80220540u; f_8022060C(c); // 8022053C
  c->r[3]=c->r[30]+0x00000814u; // 80220540
  c->lr=0x80220548u; f_800C3A64(c); // 80220544
  c->r[3]=c->r[30]+0x0000081Cu; // 80220548
  c->lr=0x80220550u; f_800C3A64(c); // 8022054C
  c->r[3]=c->r[30]+0x00000824u; // 80220550
  c->lr=0x80220558u; f_8022060C(c); // 80220554
  c->r[3]=c->r[30]+0x00000830u; // 80220558
  c->lr=0x80220560u; f_800C3A64(c); // 8022055C
  c->r[3]=c->r[30]+0x00000838u; // 80220560
  c->lr=0x80220568u; f_800C3A64(c); // 80220564
  c->r[3]=c->r[30]+0x00000840u; // 80220568
  c->lr=0x80220570u; f_800C3A64(c); // 8022056C
  c->r[3]=c->r[30]+0x00000848u; // 80220570
  c->lr=0x80220578u; f_80258690(c); // 80220574
  c->r[3]=c->r[30]+0x0000094Cu; // 80220578
  c->lr=0x80220580u; f_80227738(c); // 8022057C
  c->lr=0x80220584u; f_80220ED0(c); // 80220580
  c->lr=0x80220588u; f_80220E38(c); // 80220584
  c->lr=0x8022058Cu; f_80220DC4(c); // 80220588
  c->lr=0x80220590u; f_80220D50(c); // 8022058C
  c->lr=0x80220594u; f_80220CDC(c); // 80220590
  c->lr=0x80220598u; f_80220C4C(c); // 80220594
  c->lr=0x8022059Cu; f_80220BA8(c); // 80220598
  c->lr=0x802205A0u; f_80220B04(c); // 8022059C
  c->lr=0x802205A4u; f_80220A60(c); // 802205A0
  c->lr=0x802205A8u; f_802209BC(c); // 802205A4
  c->lr=0x802205ACu; f_80220918(c); // 802205A8
  c->lr=0x802205B0u; f_80220874(c); // 802205AC
  c->lr=0x802205B4u; f_802207D0(c); // 802205B0
  c->lr=0x802205B8u; f_8022072C(c); // 802205B4
  c->lr=0x802205BCu; f_80220658(c); // 802205B8
  {uint32_t ea=c->r[2]+0xFFFFE040u; c->f[0]=c->ps1[0]=RF32(ea);} // 802205BC
  c->r[3]=0u+0x0000000Au; // 802205C0
  c->r[0]=0u+0xFFFFFFFFu; // 802205C4
  W32(c->r[30]+0x00000674u,c->r[3]); // 802205C8
  c->r[3]=c->r[30]|c->r[30]; // 802205CC
  W32(c->r[30]+0x00000800u,c->r[31]); // 802205D0
  W32(c->r[30]+0x00000804u,c->r[31]); // 802205D4
  W8(c->r[30]+0x00000808u,c->r[31]); // 802205D8
  W32(c->r[30]+0x00000810u,c->r[31]); // 802205DC
  {uint32_t ea=c->r[30]+0x00000828u; WF32(ea,c->f[0]);} // 802205E0
  W16(c->r[30]+0x0000082Cu,c->r[31]); // 802205E4
  W16(c->r[30]+0x0000082Eu,c->r[31]); // 802205E8
  W32(c->r[30]+0x00000954u,c->r[31]); // 802205EC
  W32(c->r[30]+0x00000958u,c->r[0]); // 802205F0
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 802205F4
  c->r[30]=R32(c->r[1]+0x00000018u); // 802205F8
  c->r[0]=R32(c->r[1]+0x00000024u); // 802205FC
  c->lr=c->r[0]; // 80220600
  c->r[1]=c->r[1]+0x00000020u; // 80220604
  return; // 80220608
}

// fn_8022060C
void f_8022060C(Ctx* __restrict c) {
  trace_call(0x8022060Cu);
  {uint32_t ea=c->r[2]+0xFFFFE040u; c->f[0]=c->ps1[0]=RF32(ea);} // 8022060C
  {uint32_t ea=c->r[3]+0x00000000u; WF32(ea,c->f[0]);} // 80220610
  return; // 80220614
}

// fn_80220618
void f_80220618(Ctx* __restrict c) {
  trace_call(0x80220618u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80220618
  c->r[0]=c->lr; // 8022061C
  W32(c->r[1]+0x00000014u,c->r[0]); // 80220620
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80220624
  c->r[31]=c->r[3]|c->r[3]; // 80220628
  c->lr=0x80220630u; f_800A7E4C(c); // 8022062C
  c->r[4]=0u+0x806E0000u; // 80220630
  c->r[3]=c->r[31]|c->r[31]; // 80220634
  c->r[4]=c->r[4]+0x000079A0u; // 80220638
  W32(c->r[31]+0x00000024u,c->r[4]); // 8022063C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80220640
  c->r[0]=R32(c->r[1]+0x00000014u); // 80220644
  c->lr=c->r[0]; // 80220648
  c->r[1]=c->r[1]+0x00000010u; // 8022064C
  return; // 80220650
}

// dtor_80220654
void f_80220654(Ctx* __restrict c) {
  return; // 80220654
}

// fn_80220658
void f_80220658(Ctx* __restrict c) {
  trace_call(0x80220658u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80220658
  c->r[0]=c->lr; // 8022065C
  W32(c->r[1]+0x00000014u,c->r[0]); // 80220660
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 80220664
  c->r[30]=R32(c->r[13]+0xFFFFDBD8u); // 80220668
  cmps(c,0,(int32_t)c->r[30],0); // 8022066C
  if (crb(c,2)) { goto L_802206B4; } // 80220670
  c->lr=0x80220678u; f_802206FC(c); // 80220674
  c->r[31]=c->r[3]|c->r[3]; // 80220678
  c->lr=0x80220680u; f_802206CC(c); // 8022067C
  c->r[4]=(uint32_t)((int32_t)c->r[31]*(int32_t)2600); // 80220680
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 80220684
  c->r[5]=0u+0x80220000u; // 80220688
  c->r[3]=rotl(c->r[31],2)&0xFFFFFFFCu; // 8022068C
  c->r[4]=c->r[30]+c->r[4]; // 80220690
  c->r[5]=c->r[5]+0x000006C8u; // 80220694
  c->r[4]=c->r[4]+c->r[0]; // 80220698
  W32(c->r[4]+0x000001CCu,c->r[5]); // 8022069C
  c->r[0]=R32(c->r[30]+c->r[3]); // 802206A0
  cmpu(c,0,c->r[0],0x00000010u); // 802206A4
  if (!crb(c,0)) { goto L_802206B4; } // 802206A8
  c->r[0]=0u+0x00000010u; // 802206AC
  W32(c->r[30]+c->r[3],c->r[0]); // 802206B0
L_802206B4:;
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 802206B4
  c->r[0]=R32(c->r[1]+0x00000014u); // 802206B8
  c->lr=c->r[0]; // 802206BC
  c->r[1]=c->r[1]+0x00000010u; // 802206C0
  return; // 802206C4
}

// fn_802206C8
void f_802206C8(Ctx* __restrict c) {
  trace_call(0x802206C8u);
  f_802263BC(c); return; // 802206C8
}

// fn_802206CC
void f_802206CC(Ctx* __restrict c) {
  trace_call(0x802206CCu);
  c->r[0]=R8(c->r[13]+0xFFFFD4DCu); // 802206CC
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 802206D0
  if (!crb(c,2)) { goto L_802206F4; } // 802206D4
  c->r[4]=R32(c->r[13]+0xFFFFBCC8u); // 802206D8
  c->r[0]=0u+0x00000001u; // 802206DC
  W32(c->r[13]+0xFFFFBDFCu,c->r[4]); // 802206E0
  c->r[3]=c->r[4]+0x00000001u; // 802206E4
  W32(c->r[13]+0xFFFFBCC8u,c->r[3]); // 802206E8
  W32(c->r[13]+0xFFFFD4D8u,c->r[4]); // 802206EC
  W8(c->r[13]+0xFFFFD4DCu,c->r[0]); // 802206F0
L_802206F4:;
  c->r[3]=R32(c->r[13]+0xFFFFD4D8u); // 802206F4
  return; // 802206F8
}

// fn_802206FC
void f_802206FC(Ctx* __restrict c) {
  trace_call(0x802206FCu);
  c->r[0]=R8(c->r[13]+0xFFFFD4E4u); // 802206FC
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 80220700
  if (!crb(c,2)) { goto L_80220724; } // 80220704
  c->r[4]=R32(c->r[13]+0xFFFFBE94u); // 80220708
  c->r[0]=0u+0x00000001u; // 8022070C
  W32(c->r[13]+0xFFFFBE98u,c->r[4]); // 80220710
  c->r[3]=c->r[4]+0x00000001u; // 80220714
  W32(c->r[13]+0xFFFFBE94u,c->r[3]); // 80220718
  W32(c->r[13]+0xFFFFD4E0u,c->r[4]); // 8022071C
  W8(c->r[13]+0xFFFFD4E4u,c->r[0]); // 80220720
L_80220724:;
  c->r[3]=R32(c->r[13]+0xFFFFD4E0u); // 80220724
  return; // 80220728
}

// fn_8022072C
void f_8022072C(Ctx* __restrict c) {
  trace_call(0x8022072Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8022072C
  c->r[0]=c->lr; // 80220730
  W32(c->r[1]+0x00000014u,c->r[0]); // 80220734
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 80220738
  c->r[30]=R32(c->r[13]+0xFFFFDBD8u); // 8022073C
  cmps(c,0,(int32_t)c->r[30],0); // 80220740
  if (crb(c,2)) { goto L_80220788; } // 80220744
  c->lr=0x8022074Cu; f_802206FC(c); // 80220748
  c->r[31]=c->r[3]|c->r[3]; // 8022074C
  c->lr=0x80220754u; f_802207A0(c); // 80220750
  c->r[4]=(uint32_t)((int32_t)c->r[31]*(int32_t)2600); // 80220754
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 80220758
  c->r[5]=0u+0x80220000u; // 8022075C
  c->r[3]=rotl(c->r[31],2)&0xFFFFFFFCu; // 80220760
  c->r[4]=c->r[30]+c->r[4]; // 80220764
  c->r[5]=c->r[5]+0x0000079Cu; // 80220768
  c->r[4]=c->r[4]+c->r[0]; // 8022076C
  W32(c->r[4]+0x000001CCu,c->r[5]); // 80220770
  c->r[0]=R32(c->r[30]+c->r[3]); // 80220774
  cmpu(c,0,c->r[0],0x00000010u); // 80220778
  if (!crb(c,0)) { goto L_80220788; } // 8022077C
  c->r[0]=0u+0x00000010u; // 80220780
  W32(c->r[30]+c->r[3],c->r[0]); // 80220784
L_80220788:;
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 80220788
  c->r[0]=R32(c->r[1]+0x00000014u); // 8022078C
  c->lr=c->r[0]; // 80220790
  c->r[1]=c->r[1]+0x00000010u; // 80220794
  return; // 80220798
}

// fn_8022079C
void f_8022079C(Ctx* __restrict c) {
  trace_call(0x8022079Cu);
  f_80226174(c); return; // 8022079C
}

// fn_802207A0
void f_802207A0(Ctx* __restrict c) {
  trace_call(0x802207A0u);
  c->r[0]=R8(c->r[13]+0xFFFFD4D4u); // 802207A0
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 802207A4
  if (!crb(c,2)) { goto L_802207C8; } // 802207A8
  c->r[4]=R32(c->r[13]+0xFFFFBCC8u); // 802207AC
  c->r[0]=0u+0x00000001u; // 802207B0
  W32(c->r[13]+0xFFFFBDFCu,c->r[4]); // 802207B4
  c->r[3]=c->r[4]+0x00000001u; // 802207B8
  W32(c->r[13]+0xFFFFBCC8u,c->r[3]); // 802207BC
  W32(c->r[13]+0xFFFFD4D0u,c->r[4]); // 802207C0
  W8(c->r[13]+0xFFFFD4D4u,c->r[0]); // 802207C4
L_802207C8:;
  c->r[3]=R32(c->r[13]+0xFFFFD4D0u); // 802207C8
  return; // 802207CC
}

// fn_802207D0
void f_802207D0(Ctx* __restrict c) {
  trace_call(0x802207D0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802207D0
  c->r[0]=c->lr; // 802207D4
  W32(c->r[1]+0x00000014u,c->r[0]); // 802207D8
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 802207DC
  c->r[30]=R32(c->r[13]+0xFFFFDBD8u); // 802207E0
  cmps(c,0,(int32_t)c->r[30],0); // 802207E4
  if (crb(c,2)) { goto L_8022082C; } // 802207E8
  c->lr=0x802207F0u; f_802206FC(c); // 802207EC
  c->r[31]=c->r[3]|c->r[3]; // 802207F0
  c->lr=0x802207F8u; f_80220844(c); // 802207F4
  c->r[4]=(uint32_t)((int32_t)c->r[31]*(int32_t)2600); // 802207F8
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 802207FC
  c->r[5]=0u+0x80220000u; // 80220800
  c->r[3]=rotl(c->r[31],2)&0xFFFFFFFCu; // 80220804
  c->r[4]=c->r[30]+c->r[4]; // 80220808
  c->r[5]=c->r[5]+0x00000840u; // 8022080C
  c->r[4]=c->r[4]+c->r[0]; // 80220810
  W32(c->r[4]+0x000001CCu,c->r[5]); // 80220814
  c->r[0]=R32(c->r[30]+c->r[3]); // 80220818
  cmpu(c,0,c->r[0],0x00000010u); // 8022081C
  if (!crb(c,0)) { goto L_8022082C; } // 80220820
  c->r[0]=0u+0x00000010u; // 80220824
  W32(c->r[30]+c->r[3],c->r[0]); // 80220828
L_8022082C:;
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 8022082C
  c->r[0]=R32(c->r[1]+0x00000014u); // 80220830
  c->lr=c->r[0]; // 80220834
  c->r[1]=c->r[1]+0x00000010u; // 80220838
  return; // 8022083C
}

// fn_80220840
void f_80220840(Ctx* __restrict c) {
  trace_call(0x80220840u);
  f_80225E54(c); return; // 80220840
}

// fn_80220844
void f_80220844(Ctx* __restrict c) {
  trace_call(0x80220844u);
  c->r[0]=R8(c->r[13]+0xFFFFD4CCu); // 80220844
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 80220848
  if (!crb(c,2)) { goto L_8022086C; } // 8022084C
  c->r[4]=R32(c->r[13]+0xFFFFBCC8u); // 80220850
  c->r[0]=0u+0x00000001u; // 80220854
  W32(c->r[13]+0xFFFFBDFCu,c->r[4]); // 80220858
  c->r[3]=c->r[4]+0x00000001u; // 8022085C
  W32(c->r[13]+0xFFFFBCC8u,c->r[3]); // 80220860
  W32(c->r[13]+0xFFFFD4C8u,c->r[4]); // 80220864
  W8(c->r[13]+0xFFFFD4CCu,c->r[0]); // 80220868
L_8022086C:;
  c->r[3]=R32(c->r[13]+0xFFFFD4C8u); // 8022086C
  return; // 80220870
}

// fn_80220874
void f_80220874(Ctx* __restrict c) {
  trace_call(0x80220874u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80220874
  c->r[0]=c->lr; // 80220878
  W32(c->r[1]+0x00000014u,c->r[0]); // 8022087C
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 80220880
  c->r[30]=R32(c->r[13]+0xFFFFDBD8u); // 80220884
  cmps(c,0,(int32_t)c->r[30],0); // 80220888
  if (crb(c,2)) { goto L_802208D0; } // 8022088C
  c->lr=0x80220894u; f_802206FC(c); // 80220890
  c->r[31]=c->r[3]|c->r[3]; // 80220894
  c->lr=0x8022089Cu; f_802208E8(c); // 80220898
  c->r[4]=(uint32_t)((int32_t)c->r[31]*(int32_t)2600); // 8022089C
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 802208A0
  c->r[5]=0u+0x80220000u; // 802208A4
  c->r[3]=rotl(c->r[31],2)&0xFFFFFFFCu; // 802208A8
  c->r[4]=c->r[30]+c->r[4]; // 802208AC
  c->r[5]=c->r[5]+0x000008E4u; // 802208B0
  c->r[4]=c->r[4]+c->r[0]; // 802208B4
  W32(c->r[4]+0x000001CCu,c->r[5]); // 802208B8
  c->r[0]=R32(c->r[30]+c->r[3]); // 802208BC
  cmpu(c,0,c->r[0],0x00000010u); // 802208C0
  if (!crb(c,0)) { goto L_802208D0; } // 802208C4
  c->r[0]=0u+0x00000010u; // 802208C8
  W32(c->r[30]+c->r[3],c->r[0]); // 802208CC
L_802208D0:;
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 802208D0
  c->r[0]=R32(c->r[1]+0x00000014u); // 802208D4
  c->lr=c->r[0]; // 802208D8
  c->r[1]=c->r[1]+0x00000010u; // 802208DC
  return; // 802208E0
}

// fn_802208E4
void f_802208E4(Ctx* __restrict c) {
  trace_call(0x802208E4u);
  f_80225D60(c); return; // 802208E4
}

// fn_802208E8
void f_802208E8(Ctx* __restrict c) {
  trace_call(0x802208E8u);
  c->r[0]=R8(c->r[13]+0xFFFFD4C4u); // 802208E8
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 802208EC
  if (!crb(c,2)) { goto L_80220910; } // 802208F0
  c->r[4]=R32(c->r[13]+0xFFFFBCC8u); // 802208F4
  c->r[0]=0u+0x00000001u; // 802208F8
  W32(c->r[13]+0xFFFFBDFCu,c->r[4]); // 802208FC
  c->r[3]=c->r[4]+0x00000001u; // 80220900
  W32(c->r[13]+0xFFFFBCC8u,c->r[3]); // 80220904
  W32(c->r[13]+0xFFFFD4C0u,c->r[4]); // 80220908
  W8(c->r[13]+0xFFFFD4C4u,c->r[0]); // 8022090C
L_80220910:;
  c->r[3]=R32(c->r[13]+0xFFFFD4C0u); // 80220910
  return; // 80220914
}

// fn_80220918
void f_80220918(Ctx* __restrict c) {
  trace_call(0x80220918u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80220918
  c->r[0]=c->lr; // 8022091C
  W32(c->r[1]+0x00000014u,c->r[0]); // 80220920
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 80220924
  c->r[30]=R32(c->r[13]+0xFFFFDBD8u); // 80220928
  cmps(c,0,(int32_t)c->r[30],0); // 8022092C
  if (crb(c,2)) { goto L_80220974; } // 80220930
  c->lr=0x80220938u; f_802206FC(c); // 80220934
  c->r[31]=c->r[3]|c->r[3]; // 80220938
  c->lr=0x80220940u; f_8022098C(c); // 8022093C
  c->r[4]=(uint32_t)((int32_t)c->r[31]*(int32_t)2600); // 80220940
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 80220944
  c->r[5]=0u+0x80220000u; // 80220948
  c->r[3]=rotl(c->r[31],2)&0xFFFFFFFCu; // 8022094C
  c->r[4]=c->r[30]+c->r[4]; // 80220950
  c->r[5]=c->r[5]+0x00000988u; // 80220954
  c->r[4]=c->r[4]+c->r[0]; // 80220958
  W32(c->r[4]+0x000001CCu,c->r[5]); // 8022095C
  c->r[0]=R32(c->r[30]+c->r[3]); // 80220960
  cmpu(c,0,c->r[0],0x00000010u); // 80220964
  if (!crb(c,0)) { goto L_80220974; } // 80220968
  c->r[0]=0u+0x00000010u; // 8022096C
  W32(c->r[30]+c->r[3],c->r[0]); // 80220970
L_80220974:;
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 80220974
  c->r[0]=R32(c->r[1]+0x00000014u); // 80220978
  c->lr=c->r[0]; // 8022097C
  c->r[1]=c->r[1]+0x00000010u; // 80220980
  return; // 80220984
}

// fn_80220988
void f_80220988(Ctx* __restrict c) {
  trace_call(0x80220988u);
  f_80225CF8(c); return; // 80220988
}

// fn_8022098C
void f_8022098C(Ctx* __restrict c) {
  trace_call(0x8022098Cu);
  c->r[0]=R8(c->r[13]+0xFFFFD4BCu); // 8022098C
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 80220990
  if (!crb(c,2)) { goto L_802209B4; } // 80220994
  c->r[4]=R32(c->r[13]+0xFFFFBCC8u); // 80220998
  c->r[0]=0u+0x00000001u; // 8022099C
  W32(c->r[13]+0xFFFFBDFCu,c->r[4]); // 802209A0
  c->r[3]=c->r[4]+0x00000001u; // 802209A4
  W32(c->r[13]+0xFFFFBCC8u,c->r[3]); // 802209A8
  W32(c->r[13]+0xFFFFD4B8u,c->r[4]); // 802209AC
  W8(c->r[13]+0xFFFFD4BCu,c->r[0]); // 802209B0
L_802209B4:;
  c->r[3]=R32(c->r[13]+0xFFFFD4B8u); // 802209B4
  return; // 802209B8
}

// fn_802209BC
void f_802209BC(Ctx* __restrict c) {
  trace_call(0x802209BCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802209BC
  c->r[0]=c->lr; // 802209C0
  W32(c->r[1]+0x00000014u,c->r[0]); // 802209C4
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 802209C8
  c->r[30]=R32(c->r[13]+0xFFFFDBD8u); // 802209CC
  cmps(c,0,(int32_t)c->r[30],0); // 802209D0
  if (crb(c,2)) { goto L_80220A18; } // 802209D4
  c->lr=0x802209DCu; f_802206FC(c); // 802209D8
  c->r[31]=c->r[3]|c->r[3]; // 802209DC
  c->lr=0x802209E4u; f_80220A30(c); // 802209E0
  c->r[4]=(uint32_t)((int32_t)c->r[31]*(int32_t)2600); // 802209E4
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 802209E8
  c->r[5]=0u+0x80220000u; // 802209EC
  c->r[3]=rotl(c->r[31],2)&0xFFFFFFFCu; // 802209F0
  c->r[4]=c->r[30]+c->r[4]; // 802209F4
  c->r[5]=c->r[5]+0x00000A2Cu; // 802209F8
  c->r[4]=c->r[4]+c->r[0]; // 802209FC
  W32(c->r[4]+0x000001CCu,c->r[5]); // 80220A00
  c->r[0]=R32(c->r[30]+c->r[3]); // 80220A04
  cmpu(c,0,c->r[0],0x00000010u); // 80220A08
  if (!crb(c,0)) { goto L_80220A18; } // 80220A0C
  c->r[0]=0u+0x00000010u; // 80220A10
  W32(c->r[30]+c->r[3],c->r[0]); // 80220A14
L_80220A18:;
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 80220A18
  c->r[0]=R32(c->r[1]+0x00000014u); // 80220A1C
  c->lr=c->r[0]; // 80220A20
  c->r[1]=c->r[1]+0x00000010u; // 80220A24
  return; // 80220A28
}

// fn_80220A2C
void f_80220A2C(Ctx* __restrict c) {
  trace_call(0x80220A2Cu);
  f_802259D8(c); return; // 80220A2C
}

// fn_80220A30
void f_80220A30(Ctx* __restrict c) {
  trace_call(0x80220A30u);
  c->r[0]=R8(c->r[13]+0xFFFFD4B4u); // 80220A30
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 80220A34
  if (!crb(c,2)) { goto L_80220A58; } // 80220A38
  c->r[4]=R32(c->r[13]+0xFFFFBCC8u); // 80220A3C
  c->r[0]=0u+0x00000001u; // 80220A40
  W32(c->r[13]+0xFFFFBDFCu,c->r[4]); // 80220A44
  c->r[3]=c->r[4]+0x00000001u; // 80220A48
  W32(c->r[13]+0xFFFFBCC8u,c->r[3]); // 80220A4C
  W32(c->r[13]+0xFFFFD4B0u,c->r[4]); // 80220A50
  W8(c->r[13]+0xFFFFD4B4u,c->r[0]); // 80220A54
L_80220A58:;
  c->r[3]=R32(c->r[13]+0xFFFFD4B0u); // 80220A58
  return; // 80220A5C
}

// fn_80220A60
void f_80220A60(Ctx* __restrict c) {
  trace_call(0x80220A60u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80220A60
  c->r[0]=c->lr; // 80220A64
  W32(c->r[1]+0x00000014u,c->r[0]); // 80220A68
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 80220A6C
  c->r[30]=R32(c->r[13]+0xFFFFDBD8u); // 80220A70
  cmps(c,0,(int32_t)c->r[30],0); // 80220A74
  if (crb(c,2)) { goto L_80220ABC; } // 80220A78
  c->lr=0x80220A80u; f_802206FC(c); // 80220A7C
  c->r[31]=c->r[3]|c->r[3]; // 80220A80
  c->lr=0x80220A88u; f_80220AD4(c); // 80220A84
  c->r[4]=(uint32_t)((int32_t)c->r[31]*(int32_t)2600); // 80220A88
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 80220A8C
  c->r[5]=0u+0x80220000u; // 80220A90
  c->r[3]=rotl(c->r[31],2)&0xFFFFFFFCu; // 80220A94
  c->r[4]=c->r[30]+c->r[4]; // 80220A98
  c->r[5]=c->r[5]+0x00000AD0u; // 80220A9C
  c->r[4]=c->r[4]+c->r[0]; // 80220AA0
  W32(c->r[4]+0x000001CCu,c->r[5]); // 80220AA4
  c->r[0]=R32(c->r[30]+c->r[3]); // 80220AA8
  cmpu(c,0,c->r[0],0x00000010u); // 80220AAC
  if (!crb(c,0)) { goto L_80220ABC; } // 80220AB0
  c->r[0]=0u+0x00000010u; // 80220AB4
  W32(c->r[30]+c->r[3],c->r[0]); // 80220AB8
L_80220ABC:;
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 80220ABC
  c->r[0]=R32(c->r[1]+0x00000014u); // 80220AC0
  c->lr=c->r[0]; // 80220AC4
  c->r[1]=c->r[1]+0x00000010u; // 80220AC8
  return; // 80220ACC
}

// fn_80220AD0
void f_80220AD0(Ctx* __restrict c) {
  trace_call(0x80220AD0u);
  f_802257D0(c); return; // 80220AD0
}

// fn_80220AD4
void f_80220AD4(Ctx* __restrict c) {
  trace_call(0x80220AD4u);
  c->r[0]=R8(c->r[13]+0xFFFFD4ACu); // 80220AD4
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 80220AD8
  if (!crb(c,2)) { goto L_80220AFC; } // 80220ADC
  c->r[4]=R32(c->r[13]+0xFFFFBCC8u); // 80220AE0
  c->r[0]=0u+0x00000001u; // 80220AE4
  W32(c->r[13]+0xFFFFBDFCu,c->r[4]); // 80220AE8
  c->r[3]=c->r[4]+0x00000001u; // 80220AEC
  W32(c->r[13]+0xFFFFBCC8u,c->r[3]); // 80220AF0
  W32(c->r[13]+0xFFFFD4A8u,c->r[4]); // 80220AF4
  W8(c->r[13]+0xFFFFD4ACu,c->r[0]); // 80220AF8
L_80220AFC:;
  c->r[3]=R32(c->r[13]+0xFFFFD4A8u); // 80220AFC
  return; // 80220B00
}

// fn_80220B04
void f_80220B04(Ctx* __restrict c) {
  trace_call(0x80220B04u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80220B04
  c->r[0]=c->lr; // 80220B08
  W32(c->r[1]+0x00000014u,c->r[0]); // 80220B0C
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 80220B10
  c->r[30]=R32(c->r[13]+0xFFFFDBD8u); // 80220B14
  cmps(c,0,(int32_t)c->r[30],0); // 80220B18
  if (crb(c,2)) { goto L_80220B60; } // 80220B1C
  c->lr=0x80220B24u; f_802206FC(c); // 80220B20
  c->r[31]=c->r[3]|c->r[3]; // 80220B24
  c->lr=0x80220B2Cu; f_80220B78(c); // 80220B28
  c->r[4]=(uint32_t)((int32_t)c->r[31]*(int32_t)2600); // 80220B2C
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 80220B30
  c->r[5]=0u+0x80220000u; // 80220B34
  c->r[3]=rotl(c->r[31],2)&0xFFFFFFFCu; // 80220B38
  c->r[4]=c->r[30]+c->r[4]; // 80220B3C
  c->r[5]=c->r[5]+0x00000B74u; // 80220B40
  c->r[4]=c->r[4]+c->r[0]; // 80220B44
  W32(c->r[4]+0x000001CCu,c->r[5]); // 80220B48
  c->r[0]=R32(c->r[30]+c->r[3]); // 80220B4C
  cmpu(c,0,c->r[0],0x00000010u); // 80220B50
  if (!crb(c,0)) { goto L_80220B60; } // 80220B54
  c->r[0]=0u+0x00000010u; // 80220B58
  W32(c->r[30]+c->r[3],c->r[0]); // 80220B5C
L_80220B60:;
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 80220B60
  c->r[0]=R32(c->r[1]+0x00000014u); // 80220B64
  c->lr=c->r[0]; // 80220B68
  c->r[1]=c->r[1]+0x00000010u; // 80220B6C
  return; // 80220B70
}

// fn_80220B74
void f_80220B74(Ctx* __restrict c) {
  trace_call(0x80220B74u);
  f_802255DC(c); return; // 80220B74
}

// fn_80220B78
void f_80220B78(Ctx* __restrict c) {
  trace_call(0x80220B78u);
  c->r[0]=R8(c->r[13]+0xFFFFD4A4u); // 80220B78
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 80220B7C
  if (!crb(c,2)) { goto L_80220BA0; } // 80220B80
  c->r[4]=R32(c->r[13]+0xFFFFBCC8u); // 80220B84
  c->r[0]=0u+0x00000001u; // 80220B88
  W32(c->r[13]+0xFFFFBDFCu,c->r[4]); // 80220B8C
  c->r[3]=c->r[4]+0x00000001u; // 80220B90
  W32(c->r[13]+0xFFFFBCC8u,c->r[3]); // 80220B94
  W32(c->r[13]+0xFFFFD4A0u,c->r[4]); // 80220B98
  W8(c->r[13]+0xFFFFD4A4u,c->r[0]); // 80220B9C
L_80220BA0:;
  c->r[3]=R32(c->r[13]+0xFFFFD4A0u); // 80220BA0
  return; // 80220BA4
}

// fn_80220BA8
void f_80220BA8(Ctx* __restrict c) {
  trace_call(0x80220BA8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80220BA8
  c->r[0]=c->lr; // 80220BAC
  W32(c->r[1]+0x00000014u,c->r[0]); // 80220BB0
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 80220BB4
  c->r[30]=R32(c->r[13]+0xFFFFDBD8u); // 80220BB8
  cmps(c,0,(int32_t)c->r[30],0); // 80220BBC
  if (crb(c,2)) { goto L_80220C04; } // 80220BC0
  c->lr=0x80220BC8u; f_802206FC(c); // 80220BC4
  c->r[31]=c->r[3]|c->r[3]; // 80220BC8
  c->lr=0x80220BD0u; f_80220C1C(c); // 80220BCC
  c->r[4]=(uint32_t)((int32_t)c->r[31]*(int32_t)2600); // 80220BD0
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 80220BD4
  c->r[5]=0u+0x80220000u; // 80220BD8
  c->r[3]=rotl(c->r[31],2)&0xFFFFFFFCu; // 80220BDC
  c->r[4]=c->r[30]+c->r[4]; // 80220BE0
  c->r[5]=c->r[5]+0x00000C18u; // 80220BE4
  c->r[4]=c->r[4]+c->r[0]; // 80220BE8
  W32(c->r[4]+0x000001CCu,c->r[5]); // 80220BEC
  c->r[0]=R32(c->r[30]+c->r[3]); // 80220BF0
  cmpu(c,0,c->r[0],0x00000010u); // 80220BF4
  if (!crb(c,0)) { goto L_80220C04; } // 80220BF8
  c->r[0]=0u+0x00000010u; // 80220BFC
  W32(c->r[30]+c->r[3],c->r[0]); // 80220C00
L_80220C04:;
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 80220C04
  c->r[0]=R32(c->r[1]+0x00000014u); // 80220C08
  c->lr=c->r[0]; // 80220C0C
  c->r[1]=c->r[1]+0x00000010u; // 80220C10
  return; // 80220C14
}

// fn_80220C18
void f_80220C18(Ctx* __restrict c) {
  trace_call(0x80220C18u);
  f_802254E4(c); return; // 80220C18
}

// fn_80220C1C
void f_80220C1C(Ctx* __restrict c) {
  trace_call(0x80220C1Cu);
  c->r[0]=R8(c->r[13]+0xFFFFD49Cu); // 80220C1C
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 80220C20
  if (!crb(c,2)) { goto L_80220C44; } // 80220C24
  c->r[4]=R32(c->r[13]+0xFFFFBCC8u); // 80220C28
  c->r[0]=0u+0x00000001u; // 80220C2C
  W32(c->r[13]+0xFFFFBDFCu,c->r[4]); // 80220C30
  c->r[3]=c->r[4]+0x00000001u; // 80220C34
  W32(c->r[13]+0xFFFFBCC8u,c->r[3]); // 80220C38
  W32(c->r[13]+0xFFFFD498u,c->r[4]); // 80220C3C
  W8(c->r[13]+0xFFFFD49Cu,c->r[0]); // 80220C40
L_80220C44:;
  c->r[3]=R32(c->r[13]+0xFFFFD498u); // 80220C44
  return; // 80220C48
}

// fn_80220C4C
void f_80220C4C(Ctx* __restrict c) {
  trace_call(0x80220C4Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80220C4C
  c->r[0]=c->lr; // 80220C50
  W32(c->r[1]+0x00000014u,c->r[0]); // 80220C54
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 80220C58
  c->r[30]=R32(c->r[13]+0xFFFFDBD8u); // 80220C5C
  cmps(c,0,(int32_t)c->r[30],0); // 80220C60
  if (crb(c,2)) { goto L_80220CA8; } // 80220C64
  c->lr=0x80220C6Cu; f_802206FC(c); // 80220C68
  c->r[31]=c->r[3]|c->r[3]; // 80220C6C
  c->lr=0x80220C74u; f_80062E5C(c); // 80220C70
  c->r[4]=(uint32_t)((int32_t)c->r[31]*(int32_t)2600); // 80220C74
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 80220C78
  c->r[5]=0u+0x80220000u; // 80220C7C
  c->r[3]=rotl(c->r[31],2)&0xFFFFFFFCu; // 80220C80
  c->r[4]=c->r[30]+c->r[4]; // 80220C84
  c->r[5]=c->r[5]+0x00000CBCu; // 80220C88
  c->r[4]=c->r[4]+c->r[0]; // 80220C8C
  W32(c->r[4]+0x000001CCu,c->r[5]); // 80220C90
  c->r[0]=R32(c->r[30]+c->r[3]); // 80220C94
  cmpu(c,0,c->r[0],0x00000010u); // 80220C98
  if (!crb(c,0)) { goto L_80220CA8; } // 80220C9C
  c->r[0]=0u+0x00000010u; // 80220CA0
  W32(c->r[30]+c->r[3],c->r[0]); // 80220CA4
L_80220CA8:;
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 80220CA8
  c->r[0]=R32(c->r[1]+0x00000014u); // 80220CAC
  c->lr=c->r[0]; // 80220CB0
  c->r[1]=c->r[1]+0x00000010u; // 80220CB4
  return; // 80220CB8
}

// fn_80220CBC
void f_80220CBC(Ctx* __restrict c) {
  trace_call(0x80220CBCu);
  c->r[0]=R32(c->r[3]+0x000007F8u); // 80220CBC
  cmps(c,0,(int32_t)c->r[0],2); // 80220CC0
  if (!crb(c,2)) { goto L_80220CCC; } // 80220CC4
  f_80223334(c); return; // 80220CC8
L_80220CCC:;
  c->r[12]=R32(c->r[3]+0x0000001Cu); // 80220CCC
  c->r[12]=R32(c->r[12]+0x000001B0u); // 80220CD0
  c->ctr=c->r[12]; // 80220CD4
  if (true) { dispatch(c,c->ctr); return; } // 80220CD8
}

// fn_80220CDC
void f_80220CDC(Ctx* __restrict c) {
  trace_call(0x80220CDCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80220CDC
  c->r[0]=c->lr; // 80220CE0
  W32(c->r[1]+0x00000014u,c->r[0]); // 80220CE4
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 80220CE8
  c->r[30]=R32(c->r[13]+0xFFFFDBD8u); // 80220CEC
  cmps(c,0,(int32_t)c->r[30],0); // 80220CF0
  if (crb(c,2)) { goto L_80220D38; } // 80220CF4
  c->lr=0x80220CFCu; f_802206FC(c); // 80220CF8
  c->r[31]=c->r[3]|c->r[3]; // 80220CFC
  c->lr=0x80220D04u; f_80061044(c); // 80220D00
  c->r[4]=(uint32_t)((int32_t)c->r[31]*(int32_t)2600); // 80220D04
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 80220D08
  c->r[5]=0u+0x80220000u; // 80220D0C
  c->r[3]=rotl(c->r[31],2)&0xFFFFFFFCu; // 80220D10
  c->r[4]=c->r[30]+c->r[4]; // 80220D14
  c->r[5]=c->r[5]+0x00000D4Cu; // 80220D18
  c->r[4]=c->r[4]+c->r[0]; // 80220D1C
  W32(c->r[4]+0x000001CCu,c->r[5]); // 80220D20
  c->r[0]=R32(c->r[30]+c->r[3]); // 80220D24
  cmpu(c,0,c->r[0],0x00000020u); // 80220D28
  if (!crb(c,0)) { goto L_80220D38; } // 80220D2C
  c->r[0]=0u+0x00000020u; // 80220D30
  W32(c->r[30]+c->r[3],c->r[0]); // 80220D34
L_80220D38:;
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 80220D38
  c->r[0]=R32(c->r[1]+0x00000014u); // 80220D3C
  c->lr=c->r[0]; // 80220D40
  c->r[1]=c->r[1]+0x00000010u; // 80220D44
  return; // 80220D48
}

// fn_80220D4C
void f_80220D4C(Ctx* __restrict c) {
  trace_call(0x80220D4Cu);
  f_80223C38(c); return; // 80220D4C
}

// fn_80220D50
void f_80220D50(Ctx* __restrict c) {
  trace_call(0x80220D50u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80220D50
  c->r[0]=c->lr; // 80220D54
  W32(c->r[1]+0x00000014u,c->r[0]); // 80220D58
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 80220D5C
  c->r[30]=R32(c->r[13]+0xFFFFDBD8u); // 80220D60
  cmps(c,0,(int32_t)c->r[30],0); // 80220D64
  if (crb(c,2)) { goto L_80220DAC; } // 80220D68
  c->lr=0x80220D70u; f_802206FC(c); // 80220D6C
  c->r[31]=c->r[3]|c->r[3]; // 80220D70
  c->lr=0x80220D78u; f_80062EBC(c); // 80220D74
  c->r[4]=(uint32_t)((int32_t)c->r[31]*(int32_t)2600); // 80220D78
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 80220D7C
  c->r[5]=0u+0x80220000u; // 80220D80
  c->r[3]=rotl(c->r[31],2)&0xFFFFFFFCu; // 80220D84
  c->r[4]=c->r[30]+c->r[4]; // 80220D88
  c->r[5]=c->r[5]+0x00000DC0u; // 80220D8C
  c->r[4]=c->r[4]+c->r[0]; // 80220D90
  W32(c->r[4]+0x000001CCu,c->r[5]); // 80220D94
  c->r[0]=R32(c->r[30]+c->r[3]); // 80220D98
  cmpu(c,0,c->r[0],0x00000010u); // 80220D9C
  if (!crb(c,0)) { goto L_80220DAC; } // 80220DA0
  c->r[0]=0u+0x00000010u; // 80220DA4
  W32(c->r[30]+c->r[3],c->r[0]); // 80220DA8
L_80220DAC:;
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 80220DAC
  c->r[0]=R32(c->r[1]+0x00000014u); // 80220DB0
  c->lr=c->r[0]; // 80220DB4
  c->r[1]=c->r[1]+0x00000010u; // 80220DB8
  return; // 80220DBC
}

// fn_80220DC0
void f_80220DC0(Ctx* __restrict c) {
  trace_call(0x80220DC0u);
  f_8022398C(c); return; // 80220DC0
}

// fn_80220DC4
void f_80220DC4(Ctx* __restrict c) {
  trace_call(0x80220DC4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80220DC4
  c->r[0]=c->lr; // 80220DC8
  W32(c->r[1]+0x00000014u,c->r[0]); // 80220DCC
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 80220DD0
  c->r[30]=R32(c->r[13]+0xFFFFDBD8u); // 80220DD4
  cmps(c,0,(int32_t)c->r[30],0); // 80220DD8
  if (crb(c,2)) { goto L_80220E20; } // 80220DDC
  c->lr=0x80220DE4u; f_802206FC(c); // 80220DE0
  c->r[31]=c->r[3]|c->r[3]; // 80220DE4
  c->lr=0x80220DECu; f_8005E1B0(c); // 80220DE8
  c->r[4]=(uint32_t)((int32_t)c->r[31]*(int32_t)2600); // 80220DEC
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 80220DF0
  c->r[5]=0u+0x80220000u; // 80220DF4
  c->r[3]=rotl(c->r[31],2)&0xFFFFFFFCu; // 80220DF8
  c->r[4]=c->r[30]+c->r[4]; // 80220DFC
  c->r[5]=c->r[5]+0x00000E34u; // 80220E00
  c->r[4]=c->r[4]+c->r[0]; // 80220E04
  W32(c->r[4]+0x000001CCu,c->r[5]); // 80220E08
  c->r[0]=R32(c->r[30]+c->r[3]); // 80220E0C
  cmpu(c,0,c->r[0],0x00000010u); // 80220E10
  if (!crb(c,0)) { goto L_80220E20; } // 80220E14
  c->r[0]=0u+0x00000010u; // 80220E18
  W32(c->r[30]+c->r[3],c->r[0]); // 80220E1C
L_80220E20:;
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 80220E20
  c->r[0]=R32(c->r[1]+0x00000014u); // 80220E24
  c->lr=c->r[0]; // 80220E28
  c->r[1]=c->r[1]+0x00000010u; // 80220E2C
  return; // 80220E30
}

// fn_80220E34
void f_80220E34(Ctx* __restrict c) {
  trace_call(0x80220E34u);
  f_802235C0(c); return; // 80220E34
}

// fn_80220E38
void f_80220E38(Ctx* __restrict c) {
  trace_call(0x80220E38u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80220E38
  c->r[0]=c->lr; // 80220E3C
  W32(c->r[1]+0x00000014u,c->r[0]); // 80220E40
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80220E44
  c->r[31]=R32(c->r[13]+0xFFFFDBD8u); // 80220E48
  cmps(c,0,(int32_t)c->r[31],0); // 80220E4C
  if (crb(c,2)) { goto L_80220EB8; } // 80220E50
  c->lr=0x80220E58u; f_802206FC(c); // 80220E54
  c->r[0]=R8(c->r[13]+0xFFFFBD18u); // 80220E58
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 80220E5C
  if (!crb(c,2)) { goto L_80220E80; } // 80220E60
  c->r[5]=R32(c->r[13]+0xFFFFBCC8u); // 80220E64
  c->r[0]=0u+0x00000001u; // 80220E68
  W32(c->r[13]+0xFFFFBDFCu,c->r[5]); // 80220E6C
  c->r[4]=c->r[5]+0x00000001u; // 80220E70
  W32(c->r[13]+0xFFFFBCC8u,c->r[4]); // 80220E74
  W32(c->r[13]+0xFFFFBD14u,c->r[5]); // 80220E78
  W8(c->r[13]+0xFFFFBD18u,c->r[0]); // 80220E7C
L_80220E80:;
  c->r[4]=(uint32_t)((int32_t)c->r[3]*(int32_t)2600); // 80220E80
  c->r[0]=R32(c->r[13]+0xFFFFBD14u); // 80220E84
  c->r[5]=0u+0x80220000u; // 80220E88
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80220E8C
  c->r[4]=c->r[31]+c->r[4]; // 80220E90
  c->r[5]=c->r[5]+0x00000ECCu; // 80220E94
  c->r[4]=c->r[4]+c->r[0]; // 80220E98
  c->r[3]=rotl(c->r[3],2)&0xFFFFFFFCu; // 80220E9C
  W32(c->r[4]+0x000001CCu,c->r[5]); // 80220EA0
  c->r[0]=R32(c->r[31]+c->r[3]); // 80220EA4
  cmpu(c,0,c->r[0],0x00000010u); // 80220EA8
  if (!crb(c,0)) { goto L_80220EB8; } // 80220EAC
  c->r[0]=0u+0x00000010u; // 80220EB0
  W32(c->r[31]+c->r[3],c->r[0]); // 80220EB4
L_80220EB8:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80220EB8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80220EBC
  c->lr=c->r[0]; // 80220EC0
  c->r[1]=c->r[1]+0x00000010u; // 80220EC4
  return; // 80220EC8
}

// fn_80220ECC
void f_80220ECC(Ctx* __restrict c) {
  trace_call(0x80220ECCu);
  f_80223588(c); return; // 80220ECC
}

// fn_80220ED0
void f_80220ED0(Ctx* __restrict c) {
  trace_call(0x80220ED0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80220ED0
  c->r[0]=c->lr; // 80220ED4
  W32(c->r[1]+0x00000014u,c->r[0]); // 80220ED8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80220EDC
  c->r[31]=R32(c->r[13]+0xFFFFDBD8u); // 80220EE0
  cmps(c,0,(int32_t)c->r[31],0); // 80220EE4
  if (crb(c,2)) { goto L_80220F50; } // 80220EE8
  c->lr=0x80220EF0u; f_802206FC(c); // 80220EEC
  c->r[0]=R8(c->r[13]+0xFFFFBEA4u); // 80220EF0
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 80220EF4
  if (!crb(c,2)) { goto L_80220F18; } // 80220EF8
  c->r[5]=R32(c->r[13]+0xFFFFBCC8u); // 80220EFC
  c->r[0]=0u+0x00000001u; // 80220F00
  W32(c->r[13]+0xFFFFBDFCu,c->r[5]); // 80220F04
  c->r[4]=c->r[5]+0x00000001u; // 80220F08
  W32(c->r[13]+0xFFFFBCC8u,c->r[4]); // 80220F0C
  W32(c->r[13]+0xFFFFBEA0u,c->r[5]); // 80220F10
  W8(c->r[13]+0xFFFFBEA4u,c->r[0]); // 80220F14
L_80220F18:;
  c->r[4]=(uint32_t)((int32_t)c->r[3]*(int32_t)2600); // 80220F18
  c->r[0]=R32(c->r[13]+0xFFFFBEA0u); // 80220F1C
  c->r[5]=0u+0x80220000u; // 80220F20
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80220F24
  c->r[4]=c->r[31]+c->r[4]; // 80220F28
  c->r[5]=c->r[5]+0x00000F64u; // 80220F2C
  c->r[4]=c->r[4]+c->r[0]; // 80220F30
  c->r[3]=rotl(c->r[3],2)&0xFFFFFFFCu; // 80220F34
  W32(c->r[4]+0x000001CCu,c->r[5]); // 80220F38
  c->r[0]=R32(c->r[31]+c->r[3]); // 80220F3C
  cmpu(c,0,c->r[0],0x00000010u); // 80220F40
  if (!crb(c,0)) { goto L_80220F50; } // 80220F44
  c->r[0]=0u+0x00000010u; // 80220F48
  W32(c->r[31]+c->r[3],c->r[0]); // 80220F4C
L_80220F50:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80220F50
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80220F54
  c->lr=c->r[0]; // 80220F58
  c->r[1]=c->r[1]+0x00000010u; // 80220F5C
  return; // 80220F60
}

// fn_80220F64
void f_80220F64(Ctx* __restrict c) {
  trace_call(0x80220F64u);
  f_80221F04(c); return; // 80220F64
}

// fn_80220F68
void f_80220F68(Ctx* __restrict c) {
  trace_call(0x80220F68u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80220F68
  c->r[0]=c->lr; // 80220F6C
  W32(c->r[1]+0x00000044u,c->r[0]); // 80220F70
  {uint32_t ea=c->r[1]+0x00000020u; for(int i=24;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 80220F74
  c->r[27]=c->r[3]|c->r[3]; // 80220F78
  c->r[26]=c->r[5]|c->r[5]; // 80220F7C
  c->r[31]=c->r[27]|c->r[27]; // 80220F80
  c->r[30]=c->r[27]|c->r[27]; // 80220F84
  c->r[28]=c->r[27]|c->r[27]; // 80220F88
  c->lr=0x80220F90u; f_802206FC(c); // 80220F8C
  c->r[4]=0u+0x806D0000u; // 80220F90
  c->r[29]=addc(c,c->r[27],0x00000020u,0); cr0(c,c->r[29]); // 80220F94
  c->r[0]=0u+0x00000000u; // 80220F98
  W32(c->r[27]+0x00000000u,c->r[3]); // 80220F9C
  c->r[4]=c->r[4]+0x000038C0u; // 80220FA0
  W32(c->r[27]+0x0000001Cu,c->r[4]); // 80220FA4
  W32(c->r[27]+0x00000004u,c->r[0]); // 80220FA8
  W32(c->r[27]+0x00000008u,c->r[0]); // 80220FAC
  W32(c->r[27]+0x0000000Cu,c->r[0]); // 80220FB0
  W8(c->r[27]+0x00000010u,c->r[0]); // 80220FB4
  W32(c->r[27]+0x00000014u,c->r[0]); // 80220FB8
  W32(c->r[27]+0x00000018u,c->r[0]); // 80220FBC
  W32(c->r[27]+0x00000020u,c->r[0]); // 80220FC0
  W32(c->r[27]+0x00000024u,c->r[0]); // 80220FC4
  if (crb(c,2)) { goto L_80220FD0; } // 80220FC8
  c->r[29]=c->r[29]+0xFFFFFFE0u; // 80220FCC
L_80220FD0:;
  c->lr=0x80220FD4u; f_800797AC(c); // 80220FD0
  c->r[0]=R32(c->r[3]+0x00000000u); // 80220FD4
  c->r[0]=addc(c,c->r[0],0x00000001u,0); cr0(c,c->r[0]); // 80220FD8
  W32(c->r[3]+0x00000000u,c->r[0]); // 80220FDC
  if (!crb(c,2)) { goto L_80220FEC; } // 80220FE0
  c->r[0]=0u+0x00000001u; // 80220FE4
  W32(c->r[3]+0x00000000u,c->r[0]); // 80220FE8
L_80220FEC:;
  c->r[6]=R32(c->r[3]+0x00000004u); // 80220FEC
  c->r[5]=0u+0x0000012Cu; // 80220FF0
  c->r[4]=c->r[6]+0x00000001u; // 80220FF4
  c->r[0]=divwu(c->r[4],c->r[5]); // 80220FF8
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)c->r[5]); // 80220FFC
  c->r[7]=c->r[4]-c->r[0]; // 80221000
  goto L_80221050; // 80221004
L_80221008:;
  c->r[0]=rotl(c->r[7],3)&0xFFFFFFF8u; // 80221008
  c->r[4]=c->r[3]+c->r[0]; // 8022100C
  c->r[0]=R32(c->r[4]+0x00000008u); // 80221010
  cmps(c,0,(int32_t)c->r[0],0); // 80221014
  if (!crb(c,2)) { goto L_80221040; } // 80221018
  W32(c->r[3]+0x00000004u,c->r[7]); // 8022101C
  c->r[0]=R32(c->r[3]+0x00000000u); // 80221020
  W32(c->r[4]+0x00000008u,c->r[0]); // 80221024
  W32(c->r[4]+0x0000000Cu,c->r[29]); // 80221028
  c->r[4]=R32(c->r[3]+0x00000000u); // 8022102C
  c->r[0]=R32(c->r[3]+0x00000004u); // 80221030
  W32(c->r[1]+0x00000010u,c->r[4]); // 80221034
  W32(c->r[1]+0x00000014u,c->r[0]); // 80221038
  goto L_8022106C; // 8022103C
L_80221040:;
  c->r[4]=c->r[7]+0x00000001u; // 80221040
  c->r[0]=divwu(c->r[4],c->r[5]); // 80221044
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)c->r[5]); // 80221048
  c->r[7]=c->r[4]-c->r[0]; // 8022104C
L_80221050:;
  cmpu(c,0,c->r[7],c->r[6]); // 80221050
  if (!crb(c,2)) { IRQCHK(c); goto L_80221008; } // 80221054
  c->r[0]=0u+0x00000000u; // 80221058
  W32(c->r[1]+0x00000018u,c->r[0]); // 8022105C
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 80221060
  W32(c->r[1]+0x00000010u,c->r[0]); // 80221064
  W32(c->r[1]+0x00000014u,c->r[0]); // 80221068
L_8022106C:;
  c->r[4]=R32(c->r[1]+0x00000010u); // 8022106C
  c->r[24]=c->r[27]+0x00000028u; // 80221070
  c->r[0]=R32(c->r[1]+0x00000014u); // 80221074
  c->r[3]=c->r[24]|c->r[24]; // 80221078
  W32(c->r[1]+0x00000008u,c->r[4]); // 8022107C
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 80221080
  W32(c->r[27]+0x00000020u,c->r[4]); // 80221084
  W32(c->r[27]+0x00000024u,c->r[0]); // 80221088
  c->lr=0x80221090u; f_800506C0(c); // 8022108C
  cmps(c,0,(int32_t)c->r[24],0); // 80221090
  c->r[3]=c->r[24]|c->r[24]; // 80221094
  if (crb(c,2)) { goto L_802210A0; } // 80221098
  c->r[3]=c->r[24]+0xFFFFFFD8u; // 8022109C
L_802210A0:;
  c->r[29]=0u+0x00000001u; // 802210A0
  W32(c->r[24]+0x00000008u,c->r[3]); // 802210A4
  W8(c->r[24]+0x0000000Cu,c->r[29]); // 802210A8
  c->r[0]=R8(c->r[13]+0xFFFFBE09u); // 802210AC
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 802210B0
  if (!crb(c,2)) { goto L_802210F4; } // 802210B4
  c->r[25]=0u+0x80740000u; // 802210B8
  c->r[3]=c->r[25]+0x000074BCu; // 802210BC
  c->lr=0x802210C4u; f_800506C0(c); // 802210C0
  c->r[6]=0u+0x806D0000u; // 802210C4
  c->r[4]=0u+0x80060000u; // 802210C8
  c->r[6]=c->r[6]+0xFFFFE3A0u; // 802210CC
  c->r[3]=c->r[25]+0x000074BCu; // 802210D0
  c->r[0]=c->r[6]+0x00000008u; // 802210D4
  c->r[5]=0u+0x80750000u; // 802210D8
  W32(c->r[3]+0x00000010u,c->r[6]); // 802210DC
  c->r[4]=c->r[4]+0x000057D4u; // 802210E0
  c->r[5]=c->r[5]+0x00005534u; // 802210E4
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 802210E8
  c->lr=0x802210F0u; f_803A92B8(c); // 802210EC
  W8(c->r[13]+0xFFFFBE09u,c->r[29]); // 802210F0
L_802210F4:;
  c->r[3]=0u+0x80740000u; // 802210F4
  c->r[5]=c->r[24]|c->r[24]; // 802210F8
  c->r[3]=c->r[3]+0x000074BCu; // 802210FC
  c->r[4]=c->r[3]|c->r[3]; // 80221100
  c->lr=0x80221108u; f_802DDCA8(c); // 80221104
  c->r[24]=c->r[27]+0x00000038u; // 80221108
  c->r[3]=c->r[24]|c->r[24]; // 8022110C
  c->lr=0x80221114u; f_800506C0(c); // 80221110
  cmps(c,0,(int32_t)c->r[24],0); // 80221114
  c->r[0]=c->r[24]|c->r[24]; // 80221118
  if (crb(c,2)) { goto L_80221124; } // 8022111C
  c->r[0]=c->r[24]+0xFFFFFFC8u; // 80221120
L_80221124:;
  c->r[29]=c->r[27]+0x00000044u; // 80221124
  W32(c->r[24]+0x00000008u,c->r[0]); // 80221128
  c->r[3]=c->r[29]|c->r[29]; // 8022112C
  c->lr=0x80221134u; f_800506C0(c); // 80221130
  cmps(c,0,(int32_t)c->r[29],0); // 80221134
  c->r[0]=c->r[29]|c->r[29]; // 80221138
  if (crb(c,2)) { goto L_80221144; } // 8022113C
  c->r[0]=c->r[29]+0xFFFFFFBCu; // 80221140
L_80221144:;
  c->r[3]=0u+0x806F0000u; // 80221144
  c->r[25]=0u+0x00000000u; // 80221148
  c->r[3]=c->r[3]+0x00000E80u; // 8022114C
  W32(c->r[29]+0x00000008u,c->r[0]); // 80221150
  W8(c->r[29]+0x0000000Cu,c->r[25]); // 80221154
  W32(c->r[27]+0x0000001Cu,c->r[3]); // 80221158
  W32(c->r[27]+0x00000058u,c->r[25]); // 8022115C
  W32(c->r[27]+0x00000064u,c->r[25]); // 80221160
  c->lr=0x80221168u; f_8007BDCC(c); // 80221164
  c->r[0]=c->r[13]+0xFFFF8114u; // 80221168
  W32(c->r[27]+0x0000009Cu,c->r[3]); // 8022116C
  W32(c->r[27]+0x000000A0u,c->r[0]); // 80221170
  W32(c->r[27]+0x000000A4u,c->r[25]); // 80221174
  c->r[0]=R8(c->r[13]+0xFFFFBE54u); // 80221178
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 8022117C
  if (!crb(c,2)) { goto L_802211A0; } // 80221180
  c->r[4]=R32(c->r[13]+0xFFFFBCC4u); // 80221184
  c->r[0]=0u+0x00000001u; // 80221188
  W32(c->r[13]+0xFFFFBDF8u,c->r[4]); // 8022118C
  c->r[3]=c->r[4]+0x00000001u; // 80221190
  W32(c->r[13]+0xFFFFBCC4u,c->r[3]); // 80221194
  W32(c->r[13]+0xFFFFBE50u,c->r[4]); // 80221198
  W8(c->r[13]+0xFFFFBE54u,c->r[0]); // 8022119C
L_802211A0:;
  c->r[4]=R32(c->r[13]+0xFFFFBE50u); // 802211A0
  c->r[3]=c->r[13]+0xFFFF8110u; // 802211A4
  c->r[0]=0u+0x00000000u; // 802211A8
  W32(c->r[27]+0x000000A8u,c->r[4]); // 802211AC
  W32(c->r[27]+0x000000ACu,c->r[3]); // 802211B0
  W32(c->r[27]+0x000000B0u,c->r[0]); // 802211B4
  c->r[0]=R8(c->r[13]+0xFFFFBE5Cu); // 802211B8
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 802211BC
  if (!crb(c,2)) { goto L_802211E0; } // 802211C0
  c->r[4]=R32(c->r[13]+0xFFFFBCC4u); // 802211C4
  c->r[0]=0u+0x00000001u; // 802211C8
  W32(c->r[13]+0xFFFFBDF8u,c->r[4]); // 802211CC
  c->r[3]=c->r[4]+0x00000001u; // 802211D0
  W32(c->r[13]+0xFFFFBCC4u,c->r[3]); // 802211D4
  W32(c->r[13]+0xFFFFBE58u,c->r[4]); // 802211D8
  W8(c->r[13]+0xFFFFBE5Cu,c->r[0]); // 802211DC
L_802211E0:;
  c->r[4]=R32(c->r[13]+0xFFFFBE58u); // 802211E0
  c->r[3]=c->r[13]+0xFFFF810Cu; // 802211E4
  c->r[0]=0u+0x00000000u; // 802211E8
  W32(c->r[27]+0x000000B4u,c->r[4]); // 802211EC
  W32(c->r[27]+0x000000B8u,c->r[3]); // 802211F0
  W32(c->r[27]+0x000000BCu,c->r[0]); // 802211F4
  c->r[0]=R8(c->r[13]+0xFFFFBE64u); // 802211F8
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 802211FC
  if (!crb(c,2)) { goto L_80221220; } // 80221200
  c->r[4]=R32(c->r[13]+0xFFFFBCC4u); // 80221204
  c->r[0]=0u+0x00000001u; // 80221208
  W32(c->r[13]+0xFFFFBDF8u,c->r[4]); // 8022120C
  c->r[3]=c->r[4]+0x00000001u; // 80221210
  W32(c->r[13]+0xFFFFBCC4u,c->r[3]); // 80221214
  W32(c->r[13]+0xFFFFBE60u,c->r[4]); // 80221218
  W8(c->r[13]+0xFFFFBE64u,c->r[0]); // 8022121C
L_80221220:;
  c->r[4]=R32(c->r[13]+0xFFFFBE60u); // 80221220
  c->r[3]=c->r[13]+0xFFFF8108u; // 80221224
  c->r[0]=0u+0x00000000u; // 80221228
  W32(c->r[27]+0x000000C0u,c->r[4]); // 8022122C
  W32(c->r[27]+0x000000C4u,c->r[3]); // 80221230
  W32(c->r[27]+0x000000C8u,c->r[0]); // 80221234
  c->r[0]=R8(c->r[13]+0xFFFFBE6Cu); // 80221238
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 8022123C
  if (!crb(c,2)) { goto L_80221260; } // 80221240
  c->r[4]=R32(c->r[13]+0xFFFFBCC4u); // 80221244
  c->r[0]=0u+0x00000001u; // 80221248
  W32(c->r[13]+0xFFFFBDF8u,c->r[4]); // 8022124C
  c->r[3]=c->r[4]+0x00000001u; // 80221250
  W32(c->r[13]+0xFFFFBCC4u,c->r[3]); // 80221254
  W32(c->r[13]+0xFFFFBE68u,c->r[4]); // 80221258
  W8(c->r[13]+0xFFFFBE6Cu,c->r[0]); // 8022125C
L_80221260:;
  c->r[3]=R32(c->r[13]+0xFFFFBE68u); // 80221260
  c->r[0]=c->r[13]+0xFFFF8104u; // 80221264
  c->r[25]=0u+0x00000000u; // 80221268
  W32(c->r[27]+0x000000CCu,c->r[3]); // 8022126C
  c->r[3]=c->r[27]+0x000000D8u; // 80221270
  W32(c->r[27]+0x000000D0u,c->r[0]); // 80221274
  W32(c->r[27]+0x000000D4u,c->r[25]); // 80221278
  c->lr=0x80221280u; f_800506C0(c); // 8022127C
  c->r[4]=0u+0x806F0000u; // 80221280
  c->r[3]=0u+0x00000006u; // 80221284
  c->r[4]=c->r[4]+0x000007A0u; // 80221288
  c->r[29]=c->r[27]+0x000000FCu; // 8022128C
  c->r[0]=c->r[4]+0x00000024u; // 80221290
  W32(c->r[27]+0x000000E8u,c->r[3]); // 80221294
  c->r[3]=c->r[29]+0x0000000Cu; // 80221298
  W32(c->r[27]+0x000000ECu,c->r[25]); // 8022129C
  W32(c->r[27]+0x000000F8u,c->r[25]); // 802212A0
  W32(c->r[27]+0x000000FCu,c->r[4]); // 802212A4
  W32(c->r[27]+0x00000100u,c->r[0]); // 802212A8
  c->lr=0x802212B0u; f_800506C0(c); // 802212AC
  c->r[3]=c->r[29]+0x00000018u; // 802212B0
  c->lr=0x802212B8u; f_800506C0(c); // 802212B4
  W32(c->r[29]+0x00000024u,c->r[25]); // 802212B8
  c->r[3]=c->r[29]+0x000000B0u; // 802212BC
  c->lr=0x802212C4u; f_800506C0(c); // 802212C0
  c->r[12]=R32(c->r[29]+0x00000000u); // 802212C4
  c->r[3]=c->r[29]|c->r[29]; // 802212C8
  c->r[12]=R32(c->r[12]+0x0000003Cu); // 802212CC
  c->ctr=c->r[12]; // 802212D0
  if (true) { c->lr=0x802212D8u; dispatch(c,c->ctr); } // 802212D4
  c->r[0]=R8(c->r[13]+0xFFFFBE74u); // 802212D8
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 802212DC
  if (!crb(c,2)) { goto L_802212FC; } // 802212E0
  c->r[3]=R32(c->r[13]+0xFFFFBE78u); // 802212E4
  c->r[0]=0u+0x00000001u; // 802212E8
  W32(c->r[13]+0xFFFFBE70u,c->r[3]); // 802212EC
  c->r[3]=c->r[3]+0x00000001u; // 802212F0
  W32(c->r[13]+0xFFFFBE78u,c->r[3]); // 802212F4
  W8(c->r[13]+0xFFFFBE74u,c->r[0]); // 802212F8
L_802212FC:;
  c->r[3]=R32(c->r[13]+0xFFFFBE70u); // 802212FC
  c->r[5]=0u+0x806F0000u; // 80221300
  c->r[5]=c->r[5]+0x000007F8u; // 80221304
  c->r[0]=0u+0x00000032u; // 80221308
  c->r[4]=c->r[5]+0x00000024u; // 8022130C
  W32(c->r[29]+0x00000008u,c->r[3]); // 80221310
  c->r[6]=0u+0x00000000u; // 80221314
  c->r[3]=0u+0x00000000u; // 80221318
  W32(c->r[29]+0x00000000u,c->r[5]); // 8022131C
  W32(c->r[29]+0x00000004u,c->r[4]); // 80221320
  c->ctr=c->r[0]; // 80221324
L_80221328:;
  c->r[4]=c->r[29]+c->r[3]; // 80221328
  c->r[3]=c->r[3]+0x00000004u; // 8022132C
  W32(c->r[4]+0x0000014Cu,c->r[6]); // 80221330
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80221328; } // 80221334
  c->r[3]=0u+0x806D0000u; // 80221338
  c->r[7]=0u+0x00000000u; // 8022133C
  c->r[3]=c->r[3]+0x00003868u; // 80221340
  c->r[0]=0u+0x0000000Au; // 80221344
  c->r[4]=c->r[3]+0x00000024u; // 80221348
  W32(c->r[29]+0x00000000u,c->r[3]); // 8022134C
  c->r[8]=0u+0x00000000u; // 80221350
  c->r[3]=0u+0x00000000u; // 80221354
  W32(c->r[29]+0x00000004u,c->r[4]); // 80221358
  c->r[6]=0u+0xFFFFFFFFu; // 8022135C
  W32(c->r[27]+0x00000314u,c->r[7]); // 80221360
  W8(c->r[27]+0x0000005Cu,c->r[7]); // 80221364
  W32(c->r[27]+0x00000054u,c->r[7]); // 80221368
  W32(c->r[27]+0x00000310u,c->r[27]); // 8022136C
  c->ctr=c->r[0]; // 80221370
L_80221374:;
  c->r[5]=c->r[27]+c->r[3]; // 80221374
  c->r[4]=c->r[27]+c->r[8]; // 80221378
  W32(c->r[5]+0x00000068u,c->r[6]); // 8022137C
  c->r[8]=c->r[8]+0x00000001u; // 80221380
  c->r[3]=c->r[3]+0x00000004u; // 80221384
  W8(c->r[4]+0x00000090u,c->r[7]); // 80221388
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80221374; } // 8022138C
  c->r[25]=c->r[27]+0x00000318u; // 80221390
  c->r[3]=c->r[25]|c->r[25]; // 80221394
  c->lr=0x8022139Cu; f_800506C0(c); // 80221398
  cmps(c,0,(int32_t)c->r[25],0); // 8022139C
  c->r[3]=c->r[25]|c->r[25]; // 802213A0
  if (crb(c,2)) { goto L_802213AC; } // 802213A4
  c->r[3]=c->r[25]+0xFFFFFCE8u; // 802213A8
L_802213AC:;
  c->r[29]=0u+0x00000001u; // 802213AC
  W32(c->r[25]+0x00000008u,c->r[3]); // 802213B0
  W8(c->r[25]+0x0000000Cu,c->r[29]); // 802213B4
  c->r[0]=R8(c->r[13]+0xFFFFBE9Eu); // 802213B8
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 802213BC
  if (!crb(c,2)) { goto L_80221400; } // 802213C0
  c->r[28]=0u+0x80750000u; // 802213C4
  c->r[3]=c->r[28]+0xFFFF816Cu; // 802213C8
  c->lr=0x802213D0u; f_800506C0(c); // 802213CC
  c->r[6]=0u+0x806D0000u; // 802213D0
  c->r[4]=0u+0x80080000u; // 802213D4
  c->r[6]=c->r[6]+0x000038D8u; // 802213D8
  c->r[3]=c->r[28]+0xFFFF816Cu; // 802213DC
  c->r[0]=c->r[6]+0x00000008u; // 802213E0
  c->r[5]=0u+0x80750000u; // 802213E4
  W32(c->r[3]+0x00000010u,c->r[6]); // 802213E8
  c->r[4]=c->r[4]+0xFFFF9844u; // 802213EC
  c->r[5]=c->r[5]+0x00005528u; // 802213F0
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 802213F4
  c->lr=0x802213FCu; f_803A92B8(c); // 802213F8
  W8(c->r[13]+0xFFFFBE9Eu,c->r[29]); // 802213FC
L_80221400:;
  c->r[3]=0u+0x80750000u; // 80221400
  c->r[5]=c->r[25]|c->r[25]; // 80221404
  c->r[3]=c->r[3]+0xFFFF816Cu; // 80221408
  c->r[4]=c->r[3]|c->r[3]; // 8022140C
  c->lr=0x80221414u; f_802DDCA8(c); // 80221410
  c->r[3]=0u+0x806D0000u; // 80221414
  c->r[0]=0u+0x00000000u; // 80221418
  c->r[3]=c->r[3]+0xFFFFD974u; // 8022141C
  c->r[5]=0u+0xFFFFFFFFu; // 80221420
  c->r[4]=0u+0x00000001u; // 80221424
  c->r[24]=c->r[27]+0x0000032Cu; // 80221428
  W32(c->r[27]+0x0000001Cu,c->r[3]); // 8022142C
  c->r[3]=c->r[24]|c->r[24]; // 80221430
  W32(c->r[27]+0x00000328u,c->r[5]); // 80221434
  W32(c->r[27]+0x000000ECu,c->r[4]); // 80221438
  W32(c->r[27]+0x00000054u,c->r[0]); // 8022143C
  W32(c->r[27]+0x00000314u,c->r[0]); // 80221440
  c->lr=0x80221448u; f_800506C0(c); // 80221444
  cmps(c,0,(int32_t)c->r[24],0); // 80221448
  c->r[3]=c->r[24]|c->r[24]; // 8022144C
  if (crb(c,2)) { goto L_80221458; } // 80221450
  c->r[3]=c->r[24]+0xFFFFFCD4u; // 80221454
L_80221458:;
  c->r[29]=0u+0x00000001u; // 80221458
  W32(c->r[24]+0x00000008u,c->r[3]); // 8022145C
  W8(c->r[24]+0x0000000Cu,c->r[29]); // 80221460
  c->r[0]=R8(c->r[13]+0xFFFFBBA9u); // 80221464
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 80221468
  if (!crb(c,2)) { goto L_802214AC; } // 8022146C
  c->r[28]=0u+0x80730000u; // 80221470
  c->r[3]=c->r[28]+0x000073A8u; // 80221474
  c->lr=0x8022147Cu; f_800506C0(c); // 80221478
  c->r[6]=0u+0x806D0000u; // 8022147C
  c->r[4]=0u+0x80050000u; // 80221480
  c->r[6]=c->r[6]+0xFFFFC8C8u; // 80221484
  c->r[3]=c->r[28]+0x000073A8u; // 80221488
  c->r[0]=c->r[6]+0x00000008u; // 8022148C
  c->r[5]=0u+0x80750000u; // 80221490
  W32(c->r[3]+0x00000010u,c->r[6]); // 80221494
  c->r[4]=c->r[4]+0xFFFFCF9Cu; // 80221498
  c->r[5]=c->r[5]+0x0000551Cu; // 8022149C
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 802214A0
  c->lr=0x802214A8u; f_803A92B8(c); // 802214A4
  W8(c->r[13]+0xFFFFBBA9u,c->r[29]); // 802214A8
L_802214AC:;
  c->r[3]=0u+0x80730000u; // 802214AC
  c->r[5]=c->r[24]|c->r[24]; // 802214B0
  c->r[3]=c->r[3]+0x000073A8u; // 802214B4
  c->r[4]=c->r[3]|c->r[3]; // 802214B8
  c->lr=0x802214C0u; f_802DDCA8(c); // 802214BC
  c->r[24]=c->r[27]+0x0000033Cu; // 802214C0
  c->r[3]=c->r[24]|c->r[24]; // 802214C4
  c->lr=0x802214CCu; f_800506C0(c); // 802214C8
  cmps(c,0,(int32_t)c->r[24],0); // 802214CC
  c->r[3]=c->r[24]|c->r[24]; // 802214D0
  if (crb(c,2)) { goto L_802214DC; } // 802214D4
  c->r[3]=c->r[24]+0xFFFFFCC4u; // 802214D8
L_802214DC:;
  c->r[29]=0u+0x00000001u; // 802214DC
  W32(c->r[24]+0x00000008u,c->r[3]); // 802214E0
  W8(c->r[24]+0x0000000Cu,c->r[29]); // 802214E4
  c->r[0]=R8(c->r[13]+0xFFFFBE9Du); // 802214E8
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 802214EC
  if (!crb(c,2)) { goto L_80221530; } // 802214F0
  c->r[28]=0u+0x80750000u; // 802214F4
  c->r[3]=c->r[28]+0xFFFF8158u; // 802214F8
  c->lr=0x80221500u; f_800506C0(c); // 802214FC
  c->r[6]=0u+0x806D0000u; // 80221500
  c->r[4]=0u+0x80080000u; // 80221504
  c->r[6]=c->r[6]+0x000038F0u; // 80221508
  c->r[3]=c->r[28]+0xFFFF8158u; // 8022150C
  c->r[0]=c->r[6]+0x00000008u; // 80221510
  c->r[5]=0u+0x80750000u; // 80221514
  W32(c->r[3]+0x00000010u,c->r[6]); // 80221518
  c->r[4]=c->r[4]+0xFFFF98C0u; // 8022151C
  c->r[5]=c->r[5]+0x00005510u; // 80221520
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 80221524
  c->lr=0x8022152Cu; f_803A92B8(c); // 80221528
  W8(c->r[13]+0xFFFFBE9Du,c->r[29]); // 8022152C
L_80221530:;
  c->r[3]=0u+0x80750000u; // 80221530
  c->r[5]=c->r[24]|c->r[24]; // 80221534
  c->r[3]=c->r[3]+0xFFFF8158u; // 80221538
  c->r[4]=c->r[3]|c->r[3]; // 8022153C
  c->lr=0x80221544u; f_802DDCA8(c); // 80221540
  c->r[3]=0u+0x806D0000u; // 80221544
  W32(c->r[27]+0x00000054u,c->r[26]); // 80221548
  c->r[3]=c->r[3]+0x00004AE8u; // 8022154C
  W32(c->r[27]+0x0000001Cu,c->r[3]); // 80221550
  c->r[0]=R8(c->r[13]+0xFFFFBC60u); // 80221554
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 80221558
  if (!crb(c,2)) { goto L_80221578; } // 8022155C
  c->r[3]=R32(c->r[13]+0xFFFFBC48u); // 80221560
  c->r[0]=0u+0x00000001u; // 80221564
  W32(c->r[13]+0xFFFFBC5Cu,c->r[3]); // 80221568
  c->r[3]=c->r[3]+0x00000001u; // 8022156C
  W32(c->r[13]+0xFFFFBC48u,c->r[3]); // 80221570
  W8(c->r[13]+0xFFFFBC60u,c->r[0]); // 80221574
L_80221578:;
  c->r[0]=R32(c->r[13]+0xFFFFBC5Cu); // 80221578
  W32(c->r[27]+0x00000328u,c->r[0]); // 8022157C
  c->r[0]=R8(c->r[13]+0xFFFFD4ECu); // 80221580
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 80221584
  if (!crb(c,2)) { goto L_802215A4; } // 80221588
  c->r[3]=R32(c->r[13]+0xFFFFBDACu); // 8022158C
  c->r[0]=0u+0x00000001u; // 80221590
  W32(c->r[13]+0xFFFFD4E8u,c->r[3]); // 80221594
  c->r[3]=c->r[3]+0x00000001u; // 80221598
  W32(c->r[13]+0xFFFFBDACu,c->r[3]); // 8022159C
  W8(c->r[13]+0xFFFFD4ECu,c->r[0]); // 802215A0
L_802215A4:;
  c->r[0]=R32(c->r[13]+0xFFFFD4E8u); // 802215A4
  W32(c->r[27]+0x0000034Cu,c->r[0]); // 802215A8
  c->r[0]=R8(c->r[13]+0xFFFFC864u); // 802215AC
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 802215B0
  if (!crb(c,2)) { goto L_802215D0; } // 802215B4
  c->r[3]=R32(c->r[13]+0xFFFFBF90u); // 802215B8
  c->r[0]=0u+0x00000001u; // 802215BC
  W32(c->r[13]+0xFFFFC860u,c->r[3]); // 802215C0
  c->r[3]=c->r[3]+0x00000001u; // 802215C4
  W32(c->r[13]+0xFFFFBF90u,c->r[3]); // 802215C8
  W8(c->r[13]+0xFFFFC864u,c->r[0]); // 802215CC
L_802215D0:;
  c->r[0]=R32(c->r[13]+0xFFFFC860u); // 802215D0
  c->r[5]=0u+0x806D0000u; // 802215D4
  c->r[5]=c->r[5]+0xFFFFE468u; // 802215D8
  W32(c->r[27]+0x00000350u,c->r[0]); // 802215DC
  c->r[3]=c->r[27]+0x000003B0u; // 802215E0
  c->r[4]=0u+0x00000000u; // 802215E4
  W32(c->r[27]+0x00000400u,c->r[5]); // 802215E8
  c->r[5]=0u+0x00000050u; // 802215EC
  c->lr=0x802215F4u; f_800043EC(c); // 802215F0
  c->r[4]=0u+0x806D0000u; // 802215F4
  c->r[3]=c->r[27]+0x00000450u; // 802215F8
  c->r[4]=c->r[4]+0xFFFFE170u; // 802215FC
  W32(c->r[27]+0x0000001Cu,c->r[4]); // 80221600
  c->r[0]=c->r[4]+0x00000044u; // 80221604
  W32(c->r[27]+0x00000400u,c->r[0]); // 80221608
  c->lr=0x80221610u; f_8007BDFC(c); // 8022160C
  c->r[3]=c->r[27]+0x000004C4u; // 80221610
  c->lr=0x80221618u; f_8007BDFC(c); // 80221614
  c->r[3]=c->r[27]+0x00000538u; // 80221618
  c->r[4]=0u+0x00000000u; // 8022161C
  c->r[5]=0u+0x00000008u; // 80221620
  c->lr=0x80221628u; f_800043EC(c); // 80221624
  c->r[24]=R32(c->r[13]+0xFFFFDBDCu); // 80221628
  cmps(c,0,(int32_t)c->r[24],0); // 8022162C
  if (crb(c,2)) { goto L_80221674; } // 80221630
  c->lr=0x80221638u; f_802206FC(c); // 80221634
  c->r[26]=c->r[3]|c->r[3]; // 80221638
  c->lr=0x80221640u; f_8007BDCC(c); // 8022163C
  c->r[4]=(uint32_t)((int32_t)c->r[26]*(int32_t)80); // 80221640
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 80221644
  c->r[5]=0u+0x80220000u; // 80221648
  c->r[3]=rotl(c->r[26],2)&0xFFFFFFFCu; // 8022164C
  c->r[4]=c->r[24]+c->r[4]; // 80221650
  c->r[5]=c->r[5]+0x00001A48u; // 80221654
  c->r[4]=c->r[4]+c->r[0]; // 80221658
  W32(c->r[4]+0x000001CCu,c->r[5]); // 8022165C
  c->r[0]=R32(c->r[24]+c->r[3]); // 80221660
  cmpu(c,0,c->r[0],0x0000000Cu); // 80221664
  if (!crb(c,0)) { goto L_80221674; } // 80221668
  c->r[0]=0u+0x0000000Cu; // 8022166C
  W32(c->r[24]+c->r[3],c->r[0]); // 80221670
L_80221674:;
  c->r[24]=R32(c->r[13]+0xFFFFDBDCu); // 80221674
  cmps(c,0,(int32_t)c->r[24],0); // 80221678
  if (crb(c,2)) { goto L_802216E4; } // 8022167C
  c->lr=0x80221684u; f_802206FC(c); // 80221680
  c->r[0]=R8(c->r[13]+0xFFFFBEACu); // 80221684
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 80221688
  if (!crb(c,2)) { goto L_802216AC; } // 8022168C
  c->r[5]=R32(c->r[13]+0xFFFFBCC4u); // 80221690
  c->r[0]=0u+0x00000001u; // 80221694
  W32(c->r[13]+0xFFFFBDF8u,c->r[5]); // 80221698
  c->r[4]=c->r[5]+0x00000001u; // 8022169C
  W32(c->r[13]+0xFFFFBCC4u,c->r[4]); // 802216A0
  W32(c->r[13]+0xFFFFBEA8u,c->r[5]); // 802216A4
  W8(c->r[13]+0xFFFFBEACu,c->r[0]); // 802216A8
L_802216AC:;
  c->r[4]=(uint32_t)((int32_t)c->r[3]*(int32_t)80); // 802216AC
  c->r[0]=R32(c->r[13]+0xFFFFBEA8u); // 802216B0
  c->r[5]=0u+0x80220000u; // 802216B4
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 802216B8
  c->r[4]=c->r[24]+c->r[4]; // 802216BC
  c->r[5]=c->r[5]+0x00001A44u; // 802216C0
  c->r[4]=c->r[4]+c->r[0]; // 802216C4
  c->r[3]=rotl(c->r[3],2)&0xFFFFFFFCu; // 802216C8
  W32(c->r[4]+0x000001CCu,c->r[5]); // 802216CC
  c->r[0]=R32(c->r[24]+c->r[3]); // 802216D0
  cmpu(c,0,c->r[0],0x00000018u); // 802216D4
  if (!crb(c,0)) { goto L_802216E4; } // 802216D8
  c->r[0]=0u+0x00000018u; // 802216DC
  W32(c->r[24]+c->r[3],c->r[0]); // 802216E0
L_802216E4:;
  c->r[24]=R32(c->r[13]+0xFFFFDBDCu); // 802216E4
  cmps(c,0,(int32_t)c->r[24],0); // 802216E8
  if (crb(c,2)) { goto L_80221754; } // 802216EC
  c->lr=0x802216F4u; f_802206FC(c); // 802216F0
  c->r[0]=R8(c->r[13]+0xFFFFBCD0u); // 802216F4
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 802216F8
  if (!crb(c,2)) { goto L_8022171C; } // 802216FC
  c->r[5]=R32(c->r[13]+0xFFFFBCC4u); // 80221700
  c->r[0]=0u+0x00000001u; // 80221704
  W32(c->r[13]+0xFFFFBDF8u,c->r[5]); // 80221708
  c->r[4]=c->r[5]+0x00000001u; // 8022170C
  W32(c->r[13]+0xFFFFBCC4u,c->r[4]); // 80221710
  W32(c->r[13]+0xFFFFBCCCu,c->r[5]); // 80221714
  W8(c->r[13]+0xFFFFBCD0u,c->r[0]); // 80221718
L_8022171C:;
  c->r[4]=(uint32_t)((int32_t)c->r[3]*(int32_t)80); // 8022171C
  c->r[0]=R32(c->r[13]+0xFFFFBCCCu); // 80221720
  c->r[5]=0u+0x80220000u; // 80221724
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80221728
  c->r[4]=c->r[24]+c->r[4]; // 8022172C
  c->r[5]=c->r[5]+0x00001A40u; // 80221730
  c->r[4]=c->r[4]+c->r[0]; // 80221734
  c->r[3]=rotl(c->r[3],2)&0xFFFFFFFCu; // 80221738
  W32(c->r[4]+0x000001CCu,c->r[5]); // 8022173C
  c->r[0]=R32(c->r[24]+c->r[3]); // 80221740
  cmpu(c,0,c->r[0],0x0000006Cu); // 80221744
  if (!crb(c,0)) { goto L_80221754; } // 80221748
  c->r[0]=0u+0x0000006Cu; // 8022174C
  W32(c->r[24]+c->r[3],c->r[0]); // 80221750
L_80221754:;
  c->r[24]=R32(c->r[13]+0xFFFFDBDCu); // 80221754
  cmps(c,0,(int32_t)c->r[24],0); // 80221758
  if (crb(c,2)) { goto L_802217C4; } // 8022175C
  c->lr=0x80221764u; f_802206FC(c); // 80221760
  c->r[0]=R8(c->r[13]+0xFFFFBD38u); // 80221764
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 80221768
  if (!crb(c,2)) { goto L_8022178C; } // 8022176C
  c->r[5]=R32(c->r[13]+0xFFFFBCC4u); // 80221770
  c->r[0]=0u+0x00000001u; // 80221774
  W32(c->r[13]+0xFFFFBDF8u,c->r[5]); // 80221778
  c->r[4]=c->r[5]+0x00000001u; // 8022177C
  W32(c->r[13]+0xFFFFBCC4u,c->r[4]); // 80221780
  W32(c->r[13]+0xFFFFBD34u,c->r[5]); // 80221784
  W8(c->r[13]+0xFFFFBD38u,c->r[0]); // 80221788
L_8022178C:;
  c->r[4]=(uint32_t)((int32_t)c->r[3]*(int32_t)80); // 8022178C
  c->r[0]=R32(c->r[13]+0xFFFFBD34u); // 80221790
  c->r[5]=0u+0x80220000u; // 80221794
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80221798
  c->r[4]=c->r[24]+c->r[4]; // 8022179C
  c->r[5]=c->r[5]+0x00001A3Cu; // 802217A0
  c->r[4]=c->r[4]+c->r[0]; // 802217A4
  c->r[3]=rotl(c->r[3],2)&0xFFFFFFFCu; // 802217A8
  W32(c->r[4]+0x000001CCu,c->r[5]); // 802217AC
  c->r[0]=R32(c->r[24]+c->r[3]); // 802217B0
  cmpu(c,0,c->r[0],0x0000002Cu); // 802217B4
  if (!crb(c,0)) { goto L_802217C4; } // 802217B8
  c->r[0]=0u+0x0000002Cu; // 802217BC
  W32(c->r[24]+c->r[3],c->r[0]); // 802217C0
L_802217C4:;
  c->r[24]=R32(c->r[13]+0xFFFFDBDCu); // 802217C4
  cmps(c,0,(int32_t)c->r[24],0); // 802217C8
  if (crb(c,2)) { goto L_80221834; } // 802217CC
  c->lr=0x802217D4u; f_802206FC(c); // 802217D0
  c->r[0]=R8(c->r[13]+0xFFFFBEB4u); // 802217D4
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 802217D8
  if (!crb(c,2)) { goto L_802217FC; } // 802217DC
  c->r[5]=R32(c->r[13]+0xFFFFBCC4u); // 802217E0
  c->r[0]=0u+0x00000001u; // 802217E4
  W32(c->r[13]+0xFFFFBDF8u,c->r[5]); // 802217E8
  c->r[4]=c->r[5]+0x00000001u; // 802217EC
  W32(c->r[13]+0xFFFFBCC4u,c->r[4]); // 802217F0
  W32(c->r[13]+0xFFFFBEB0u,c->r[5]); // 802217F4
  W8(c->r[13]+0xFFFFBEB4u,c->r[0]); // 802217F8
L_802217FC:;
  c->r[4]=(uint32_t)((int32_t)c->r[3]*(int32_t)80); // 802217FC
  c->r[0]=R32(c->r[13]+0xFFFFBEB0u); // 80221800
  c->r[5]=0u+0x80220000u; // 80221804
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80221808
  c->r[4]=c->r[24]+c->r[4]; // 8022180C
  c->r[5]=c->r[5]+0x00001A38u; // 80221810
  c->r[4]=c->r[4]+c->r[0]; // 80221814
  c->r[3]=rotl(c->r[3],2)&0xFFFFFFFCu; // 80221818
  W32(c->r[4]+0x000001CCu,c->r[5]); // 8022181C
  c->r[0]=R32(c->r[24]+c->r[3]); // 80221820
  cmpu(c,0,c->r[0],0x00000010u); // 80221824
  if (!crb(c,0)) { goto L_80221834; } // 80221828
  c->r[0]=0u+0x00000010u; // 8022182C
  W32(c->r[24]+c->r[3],c->r[0]); // 80221830
L_80221834:;
  c->r[24]=R32(c->r[13]+0xFFFFDBDCu); // 80221834
  cmps(c,0,(int32_t)c->r[24],0); // 80221838
  if (crb(c,2)) { goto L_802218A4; } // 8022183C
  c->lr=0x80221844u; f_802206FC(c); // 80221840
  c->r[0]=R8(c->r[13]+0xFFFFBEBCu); // 80221844
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 80221848
  if (!crb(c,2)) { goto L_8022186C; } // 8022184C
  c->r[5]=R32(c->r[13]+0xFFFFBCC4u); // 80221850
  c->r[0]=0u+0x00000001u; // 80221854
  W32(c->r[13]+0xFFFFBDF8u,c->r[5]); // 80221858
  c->r[4]=c->r[5]+0x00000001u; // 8022185C
  W32(c->r[13]+0xFFFFBCC4u,c->r[4]); // 80221860
  W32(c->r[13]+0xFFFFBEB8u,c->r[5]); // 80221864
  W8(c->r[13]+0xFFFFBEBCu,c->r[0]); // 80221868
L_8022186C:;
  c->r[4]=(uint32_t)((int32_t)c->r[3]*(int32_t)80); // 8022186C
  c->r[0]=R32(c->r[13]+0xFFFFBEB8u); // 80221870
  c->r[5]=0u+0x80220000u; // 80221874
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80221878
  c->r[4]=c->r[24]+c->r[4]; // 8022187C
  c->r[5]=c->r[5]+0x00001A34u; // 80221880
  c->r[4]=c->r[4]+c->r[0]; // 80221884
  c->r[3]=rotl(c->r[3],2)&0xFFFFFFFCu; // 80221888
  W32(c->r[4]+0x000001CCu,c->r[5]); // 8022188C
  c->r[0]=R32(c->r[24]+c->r[3]); // 80221890
  cmpu(c,0,c->r[0],0x0000005Cu); // 80221894
  if (!crb(c,0)) { goto L_802218A4; } // 80221898
  c->r[0]=0u+0x0000005Cu; // 8022189C
  W32(c->r[24]+c->r[3],c->r[0]); // 802218A0
L_802218A4:;
  c->r[24]=R32(c->r[13]+0xFFFFDBDCu); // 802218A4
  cmps(c,0,(int32_t)c->r[24],0); // 802218A8
  if (crb(c,2)) { goto L_80221914; } // 802218AC
  c->lr=0x802218B4u; f_802206FC(c); // 802218B0
  c->r[0]=R8(c->r[13]+0xFFFFBEC4u); // 802218B4
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 802218B8
  if (!crb(c,2)) { goto L_802218DC; } // 802218BC
  c->r[5]=R32(c->r[13]+0xFFFFBCC4u); // 802218C0
  c->r[0]=0u+0x00000001u; // 802218C4
  W32(c->r[13]+0xFFFFBDF8u,c->r[5]); // 802218C8
  c->r[4]=c->r[5]+0x00000001u; // 802218CC
  W32(c->r[13]+0xFFFFBCC4u,c->r[4]); // 802218D0
  W32(c->r[13]+0xFFFFBEC0u,c->r[5]); // 802218D4
  W8(c->r[13]+0xFFFFBEC4u,c->r[0]); // 802218D8
L_802218DC:;
  c->r[4]=(uint32_t)((int32_t)c->r[3]*(int32_t)80); // 802218DC
  c->r[0]=R32(c->r[13]+0xFFFFBEC0u); // 802218E0
  c->r[5]=0u+0x80220000u; // 802218E4
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 802218E8
  c->r[4]=c->r[24]+c->r[4]; // 802218EC
  c->r[5]=c->r[5]+0x00001A30u; // 802218F0
  c->r[4]=c->r[4]+c->r[0]; // 802218F4
  c->r[3]=rotl(c->r[3],2)&0xFFFFFFFCu; // 802218F8
  W32(c->r[4]+0x000001CCu,c->r[5]); // 802218FC
  c->r[0]=R32(c->r[24]+c->r[3]); // 80221900
  cmpu(c,0,c->r[0],0x0000005Cu); // 80221904
  if (!crb(c,0)) { goto L_80221914; } // 80221908
  c->r[0]=0u+0x0000005Cu; // 8022190C
  W32(c->r[24]+c->r[3],c->r[0]); // 80221910
L_80221914:;
  c->r[24]=R32(c->r[13]+0xFFFFDBDCu); // 80221914
  cmps(c,0,(int32_t)c->r[24],0); // 80221918
  if (crb(c,2)) { goto L_80221984; } // 8022191C
  c->lr=0x80221924u; f_802206FC(c); // 80221920
  c->r[0]=R8(c->r[13]+0xFFFFBECCu); // 80221924
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 80221928
  if (!crb(c,2)) { goto L_8022194C; } // 8022192C
  c->r[5]=R32(c->r[13]+0xFFFFBCC4u); // 80221930
  c->r[0]=0u+0x00000001u; // 80221934
  W32(c->r[13]+0xFFFFBDF8u,c->r[5]); // 80221938
  c->r[4]=c->r[5]+0x00000001u; // 8022193C
  W32(c->r[13]+0xFFFFBCC4u,c->r[4]); // 80221940
  W32(c->r[13]+0xFFFFBEC8u,c->r[5]); // 80221944
  W8(c->r[13]+0xFFFFBECCu,c->r[0]); // 80221948
L_8022194C:;
  c->r[4]=(uint32_t)((int32_t)c->r[3]*(int32_t)80); // 8022194C
  c->r[0]=R32(c->r[13]+0xFFFFBEC8u); // 80221950
  c->r[5]=0u+0x80220000u; // 80221954
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80221958
  c->r[4]=c->r[24]+c->r[4]; // 8022195C
  c->r[5]=c->r[5]+0x00001A2Cu; // 80221960
  c->r[4]=c->r[4]+c->r[0]; // 80221964
  c->r[3]=rotl(c->r[3],2)&0xFFFFFFFCu; // 80221968
  W32(c->r[4]+0x000001CCu,c->r[5]); // 8022196C
  c->r[0]=R32(c->r[24]+c->r[3]); // 80221970
  cmpu(c,0,c->r[0],0x0000005Cu); // 80221974
  if (!crb(c,0)) { goto L_80221984; } // 80221978
  c->r[0]=0u+0x0000005Cu; // 8022197C
  W32(c->r[24]+c->r[3],c->r[0]); // 80221980
L_80221984:;
  c->r[24]=R32(c->r[13]+0xFFFFDBDCu); // 80221984
  cmps(c,0,(int32_t)c->r[24],0); // 80221988
  if (crb(c,2)) { goto L_802219F4; } // 8022198C
  c->lr=0x80221994u; f_802206FC(c); // 80221990
  c->r[0]=R8(c->r[13]+0xFFFFBED4u); // 80221994
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 80221998
  if (!crb(c,2)) { goto L_802219BC; } // 8022199C
  c->r[5]=R32(c->r[13]+0xFFFFBCC4u); // 802219A0
  c->r[0]=0u+0x00000001u; // 802219A4
  W32(c->r[13]+0xFFFFBDF8u,c->r[5]); // 802219A8
  c->r[4]=c->r[5]+0x00000001u; // 802219AC
  W32(c->r[13]+0xFFFFBCC4u,c->r[4]); // 802219B0
  W32(c->r[13]+0xFFFFBED0u,c->r[5]); // 802219B4
  W8(c->r[13]+0xFFFFBED4u,c->r[0]); // 802219B8
L_802219BC:;
  c->r[4]=(uint32_t)((int32_t)c->r[3]*(int32_t)80); // 802219BC
  c->r[0]=R32(c->r[13]+0xFFFFBED0u); // 802219C0
  c->r[5]=0u+0x80220000u; // 802219C4
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 802219C8
  c->r[4]=c->r[24]+c->r[4]; // 802219CC
  c->r[5]=c->r[5]+0x00001A28u; // 802219D0
  c->r[4]=c->r[4]+c->r[0]; // 802219D4
  c->r[3]=rotl(c->r[3],2)&0xFFFFFFFCu; // 802219D8
  W32(c->r[4]+0x000001CCu,c->r[5]); // 802219DC
  c->r[0]=R32(c->r[24]+c->r[3]); // 802219E0
  cmpu(c,0,c->r[0],0x0000005Cu); // 802219E4
  if (!crb(c,0)) { goto L_802219F4; } // 802219E8
  c->r[0]=0u+0x0000005Cu; // 802219EC
  W32(c->r[24]+c->r[3],c->r[0]); // 802219F0
L_802219F4:;
  c->r[3]=c->r[27]|c->r[27]; // 802219F4
  c->lr=0x802219FCu; f_8005BBF0(c); // 802219F8
  c->r[4]=0u+0x806E0000u; // 802219FC
  c->r[3]=c->r[27]|c->r[27]; // 80221A00
  c->r[4]=c->r[4]+0xFFFFC028u; // 80221A04
  W32(c->r[27]+0x0000001Cu,c->r[4]); // 80221A08
  c->r[0]=c->r[4]+0x00000044u; // 80221A0C
  W32(c->r[27]+0x00000400u,c->r[0]); // 80221A10
  {uint32_t ea=c->r[1]+0x00000020u; for(int i=24;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 80221A14
  c->r[0]=R32(c->r[1]+0x00000044u); // 80221A18
  c->lr=c->r[0]; // 80221A1C
  c->r[1]=c->r[1]+0x00000040u; // 80221A20
  return; // 80221A24
}

// fn_80221A28
void f_80221A28(Ctx* __restrict c) {
  trace_call(0x80221A28u);
  f_8005E338(c); return; // 80221A28
}

// fn_80221A2C
void f_80221A2C(Ctx* __restrict c) {
  trace_call(0x80221A2Cu);
  f_8005E324(c); return; // 80221A2C
}

// fn_80221A30
void f_80221A30(Ctx* __restrict c) {
  trace_call(0x80221A30u);
  f_8005E310(c); return; // 80221A30
}

// fn_80221A34
void f_80221A34(Ctx* __restrict c) {
  trace_call(0x80221A34u);
  f_8005E2FC(c); return; // 80221A34
}

// fn_80221A38
void f_80221A38(Ctx* __restrict c) {
  trace_call(0x80221A38u);
  f_8005E34C(c); return; // 80221A38
}

// fn_80221A3C
void f_80221A3C(Ctx* __restrict c) {
  trace_call(0x80221A3Cu);
  f_8005E360(c); return; // 80221A3C
}

// fn_80221A40
void f_80221A40(Ctx* __restrict c) {
  trace_call(0x80221A40u);
  f_8005D47C(c); return; // 80221A40
}

// fn_80221A44
void f_80221A44(Ctx* __restrict c) {
  trace_call(0x80221A44u);
  f_8005D468(c); return; // 80221A44
}

// fn_80221A48
void f_80221A48(Ctx* __restrict c) {
  trace_call(0x80221A48u);
  f_8005BEDC(c); return; // 80221A48
}

// fn_80221A4C
void f_80221A4C(Ctx* __restrict c) {
  trace_call(0x80221A4Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80221A4C
  c->r[0]=c->lr; // 80221A50
  cmps(c,0,(int32_t)c->r[3],0); // 80221A54
  W32(c->r[1]+0x00000014u,c->r[0]); // 80221A58
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 80221A5C
  c->r[30]=c->r[3]|c->r[3]; // 80221A60
  c->r[31]=c->r[4]|c->r[4]; // 80221A64
  if (crb(c,2)) { goto L_80221B18; } // 80221A68
  c->r[5]=0u+0x806E0000u; // 80221A6C
  c->r[5]=c->r[5]+0x00007798u; // 80221A70
  W32(c->r[3]+0x0000001Cu,c->r[5]); // 80221A74
  c->r[4]=c->r[5]+0x00000044u; // 80221A78
  c->r[0]=c->r[5]+0x000001F0u; // 80221A7C
  W32(c->r[3]+0x00000400u,c->r[4]); // 80221A80
  W32(c->r[3]+0x000005C0u,c->r[0]); // 80221A84
  c->lr=0x80221A8Cu; f_80226A54(c); // 80221A88
  c->r[3]=c->r[30]|c->r[30]; // 80221A8C
  c->lr=0x80221A94u; f_80226B7C(c); // 80221A90
  c->r[3]=c->r[30]|c->r[30]; // 80221A94
  c->lr=0x80221A9Cu; f_80226C8C(c); // 80221A98
  c->r[3]=c->r[30]|c->r[30]; // 80221A9C
  c->lr=0x80221AA4u; f_80226D88(c); // 80221AA0
  c->r[3]=c->r[30]|c->r[30]; // 80221AA4
  c->lr=0x80221AACu; f_80226E80(c); // 80221AA8
  c->r[3]=c->r[30]+0x00000848u; // 80221AAC
  c->r[4]=0u+0xFFFFFFFFu; // 80221AB0
  c->lr=0x80221AB8u; f_80132EC0(c); // 80221AB4
  c->r[4]=0u+0x80220000u; // 80221AB8
  c->r[3]=c->r[30]+0x000007CCu; // 80221ABC
  c->r[4]=c->r[4]+0x00000654u; // 80221AC0
  c->r[5]=0u+0x00000028u; // 80221AC4
  c->r[6]=0u+0x00000001u; // 80221AC8
  c->lr=0x80221AD0u; f_803A9928(c); // 80221ACC
  c->r[4]=0u+0x80220000u; // 80221AD0
  c->r[3]=c->r[30]+0x0000067Cu; // 80221AD4
  c->r[4]=c->r[4]+0xFFFFEE18u; // 80221AD8
  c->r[5]=0u+0x00000030u; // 80221ADC
  c->r[6]=0u+0x00000005u; // 80221AE0
  c->lr=0x80221AE8u; f_803A9928(c); // 80221AE4
  c->r[3]=c->r[30]+0x000005C4u; // 80221AE8
  c->r[4]=0u+0xFFFFFFFFu; // 80221AEC
  c->lr=0x80221AF4u; f_800E1E78(c); // 80221AF0
  cmps(c,0,(int32_t)c->r[30],0); // 80221AF4
  if (crb(c,2)) { goto L_80221B08; } // 80221AF8
  c->r[3]=c->r[30]|c->r[30]; // 80221AFC
  c->r[4]=0u+0x00000000u; // 80221B00
  c->lr=0x80221B08u; f_8005BD00(c); // 80221B04
L_80221B08:;
  cmps(c,0,(int32_t)c->r[31],0); // 80221B08
  if (!crb(c,1)) { goto L_80221B18; } // 80221B0C
  c->r[3]=c->r[30]|c->r[30]; // 80221B10
  c->lr=0x80221B18u; f_8005328C(c); // 80221B14
L_80221B18:;
  c->r[3]=c->r[30]|c->r[30]; // 80221B18
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 80221B1C
  c->r[0]=R32(c->r[1]+0x00000014u); // 80221B20
  c->lr=c->r[0]; // 80221B24
  c->r[1]=c->r[1]+0x00000010u; // 80221B28
  return; // 80221B2C
}

// fn_80221B30
void f_80221B30(Ctx* __restrict c) {
  trace_call(0x80221B30u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80221B30
  c->r[0]=c->lr; // 80221B34
  W32(c->r[1]+0x00000034u,c->r[0]); // 80221B38
  c->r[11]=c->r[1]+0x00000030u; // 80221B3C
  c->lr=0x80221B44u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80221B40
  c->r[31]=c->r[3]|c->r[3]; // 80221B44
  c->lr=0x80221B4Cu; f_80061A10(c); // 80221B48
  c->r[30]=0u+0x806A0000u; // 80221B4C
  c->r[30]=c->r[30]+0xFFFF98D8u; // 80221B50
  c->r[4]=c->r[30]+0x00000014u; // 80221B54
  c->lr=0x80221B5Cu; f_8007CA34(c); // 80221B58
  cmps(c,0,(int32_t)c->r[3],0); // 80221B5C
  if (!crb(c,2)) { goto L_80221B74; } // 80221B60
  c->r[3]=c->r[31]|c->r[31]; // 80221B64
  c->lr=0x80221B6Cu; f_80061A10(c); // 80221B68
  c->r[4]=c->r[30]+0x0000000Du; // 80221B6C
  c->lr=0x80221B74u; f_8007CA34(c); // 80221B70
L_80221B74:;
  cmps(c,0,(int32_t)c->r[3],0); // 80221B74
  if (!crb(c,2)) { goto L_80221B94; } // 80221B78
  c->r[3]=c->r[31]|c->r[31]; // 80221B7C
  c->lr=0x80221B84u; f_80061A10(c); // 80221B80
  c->r[4]=0u+0x806A0000u; // 80221B84
  c->r[4]=c->r[4]+0xFFFF98D8u; // 80221B88
  c->r[4]=c->r[4]+0x00000018u; // 80221B8C
  c->lr=0x80221B94u; f_8007CA34(c); // 80221B90
L_80221B94:;
  c->r[0]=cntlz(c->r[3]); // 80221B94
  c->r[3]=c->r[31]|c->r[31]; // 80221B98
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 80221B9C
  W32(c->r[31]+0x0000066Cu,c->r[0]); // 80221BA0
  c->lr=0x80221BA8u; f_80061A10(c); // 80221BA4
  c->r[30]=0u+0x806A0000u; // 80221BA8
  c->r[30]=c->r[30]+0xFFFF98D8u; // 80221BAC
  c->r[4]=c->r[30]+0x0000000Du; // 80221BB0
  c->lr=0x80221BB8u; f_8007CA34(c); // 80221BB4
  cmps(c,0,(int32_t)c->r[3],0); // 80221BB8
  if (crb(c,2)) { goto L_80221BCC; } // 80221BBC
  c->r[0]=0u+0x00000000u; // 80221BC0
  W32(c->r[31]+0x00000670u,c->r[0]); // 80221BC4
  goto L_80221BF8; // 80221BC8
L_80221BCC:;
  c->r[3]=c->r[31]|c->r[31]; // 80221BCC
  c->lr=0x80221BD4u; f_80061A10(c); // 80221BD0
  c->r[4]=c->r[30]+0x00000018u; // 80221BD4
  c->lr=0x80221BDCu; f_8007CA34(c); // 80221BD8
  cmps(c,0,(int32_t)c->r[3],0); // 80221BDC
  if (crb(c,2)) { goto L_80221BF0; } // 80221BE0
  c->r[0]=0u+0x00000001u; // 80221BE4
  W32(c->r[31]+0x00000670u,c->r[0]); // 80221BE8
  goto L_80221BF8; // 80221BEC
L_80221BF0:;
  c->r[0]=0u+0x00000002u; // 80221BF0
  W32(c->r[31]+0x00000670u,c->r[0]); // 80221BF4
L_80221BF8:;
  c->r[3]=c->r[31]+0x000007FCu; // 80221BF8
  c->r[4]=0u+0x00000000u; // 80221BFC
  c->r[5]=0u+0x00000004u; // 80221C00
  c->lr=0x80221C08u; f_800043EC(c); // 80221C04
  c->r[3]=c->r[31]|c->r[31]; // 80221C08
  c->r[4]=0u+0x00000000u; // 80221C0C
  c->lr=0x80221C14u; f_8005E814(c); // 80221C10
  c->r[3]=c->r[31]|c->r[31]; // 80221C14
  c->r[4]=0u+0x00000000u; // 80221C18
  c->lr=0x80221C20u; f_8005EE88(c); // 80221C1C
  c->r[3]=R32(c->r[31]+0x00000410u); // 80221C20
  c->r[4]=R32(c->r[13]+0xFFFF9130u); // 80221C24
  c->r[12]=R32(c->r[3]+0x00000000u); // 80221C28
  c->r[12]=R32(c->r[12]+0x00000060u); // 80221C2C
  c->ctr=c->r[12]; // 80221C30
  if (true) { c->lr=0x80221C38u; dispatch(c,c->ctr); } // 80221C34
  c->r[3]=R32(c->r[31]+0x00000414u); // 80221C38
  c->r[4]=R32(c->r[13]+0xFFFF9130u); // 80221C3C
  c->lr=0x80221C44u; f_8034F3E0(c); // 80221C40
  c->r[3]=c->r[31]+0x000005C4u; // 80221C44
  c->r[4]=c->r[31]+0x000000FCu; // 80221C48
  c->lr=0x80221C50u; f_800E2088(c); // 80221C4C
  {uint32_t ea=c->r[2]+0xFFFFE040u; c->f[1]=c->ps1[1]=RF32(ea);} // 80221C50
  c->r[3]=c->r[31]+0x000005C4u; // 80221C54
  c->lr=0x80221C5Cu; f_800E21B4(c); // 80221C58
  {uint32_t ea=c->r[2]+0xFFFFE044u; c->f[1]=c->ps1[1]=RF32(ea);} // 80221C5C
  c->r[3]=c->r[31]+0x000005C4u; // 80221C60
  c->r[4]=0u+0x00000001u; // 80221C64
  c->lr=0x80221C6Cu; f_800E21E8(c); // 80221C68
  c->r[30]=R32(c->r[31]+0x00000670u); // 80221C6C
  c->lr=0x80221C74u; f_80067D60(c); // 80221C70
  c->r[4]=0u+0x806A0000u; // 80221C74
  c->r[0]=rotl(c->r[30],2)&0xFFFFFFFCu; // 80221C78
  c->r[4]=c->r[4]+0xFFFF9090u; // 80221C7C
  c->r[3]=R32(c->r[3]+0x00000004u); // 80221C80
  c->r[4]=R32(c->r[4]+c->r[0]); // 80221C84
  c->r[5]=0u+0x00000000u; // 80221C88
  c->lr=0x80221C90u; f_8006951C(c); // 80221C8C
  c->r[5]=R32(c->r[3]+0x00000020u); // 80221C90
  c->r[4]=c->r[1]+0x00000008u; // 80221C94
  c->r[0]=R32(c->r[3]+0x00000024u); // 80221C98
  c->r[3]=c->r[31]+0x00000814u; // 80221C9C
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 80221CA0
  W32(c->r[1]+0x00000008u,c->r[5]); // 80221CA4
  c->lr=0x80221CACu; f_80053568(c); // 80221CA8
  c->r[3]=c->r[31]|c->r[31]; // 80221CAC
  c->lr=0x80221CB4u; f_80226AA0(c); // 80221CB0
  c->r[4]=c->r[31]|c->r[31]; // 80221CB4
  c->r[5]=c->r[31]+0x000001B8u; // 80221CB8
  c->lr=0x80221CC0u; f_8023315C(c); // 80221CBC
  c->r[3]=c->r[31]+0x0000067Cu; // 80221CC0
  c->r[4]=c->r[31]+0x000000FCu; // 80221CC4
  c->r[5]=0u+0x00000002u; // 80221CC8
  c->r[6]=0u+0xFFFFFFFFu; // 80221CCC
  c->r[7]=0u+0x00000000u; // 80221CD0
  c->r[8]=0u+0x00000001u; // 80221CD4
  c->lr=0x80221CDCu; f_8021EE1C(c); // 80221CD8
  c->r[29]=c->r[31]+0x000006ACu; // 80221CDC
  c->r[4]=c->r[31]+0x000000FCu; // 80221CE0
  c->r[3]=c->r[29]|c->r[29]; // 80221CE4
  c->r[5]=0u+0x00000002u; // 80221CE8
  c->r[6]=0u+0xFFFFFFFFu; // 80221CEC
  c->r[7]=0u+0x00000002u; // 80221CF0
  c->r[8]=0u+0x00000003u; // 80221CF4
  c->lr=0x80221CFCu; f_8021EE1C(c); // 80221CF8
  c->r[3]=c->r[31]|c->r[31]; // 80221CFC
  c->lr=0x80221D04u; f_80226AA0(c); // 80221D00
  c->r[4]=c->r[3]|c->r[3]; // 80221D04
  c->r[28]=c->r[31]+0x000006DCu; // 80221D08
  c->r[3]=c->r[28]|c->r[28]; // 80221D0C
  c->r[5]=0u+0x00000002u; // 80221D10
  c->r[4]=c->r[4]+0x000000FCu; // 80221D14
  c->r[6]=0u+0xFFFFFFFFu; // 80221D18
  c->r[7]=0u+0x00000004u; // 80221D1C
  c->r[8]=0u+0x00000005u; // 80221D20
  c->lr=0x80221D28u; f_8021EE1C(c); // 80221D24
  c->r[3]=c->r[31]|c->r[31]; // 80221D28
  c->lr=0x80221D30u; f_80226AA0(c); // 80221D2C
  c->r[4]=c->r[3]|c->r[3]; // 80221D30
  c->r[26]=c->r[31]+0x0000070Cu; // 80221D34
  c->r[3]=c->r[26]|c->r[26]; // 80221D38
  c->r[5]=0u+0x00000002u; // 80221D3C
  c->r[4]=c->r[4]+0x000000FCu; // 80221D40
  c->r[6]=0u+0xFFFFFFFFu; // 80221D44
  c->r[7]=0u+0x00000006u; // 80221D48
  c->r[8]=0u+0x00000007u; // 80221D4C
  c->lr=0x80221D54u; f_8021EE1C(c); // 80221D50
  c->r[27]=c->r[31]+0x0000073Cu; // 80221D54
  c->r[4]=c->r[31]+0x000000FCu; // 80221D58
  c->r[3]=c->r[27]|c->r[27]; // 80221D5C
  c->r[5]=0u+0x00000002u; // 80221D60
  c->r[6]=0u+0xFFFFFFFFu; // 80221D64
  c->r[7]=0u+0x00000008u; // 80221D68
  c->r[8]=0u+0x00000009u; // 80221D6C
  c->lr=0x80221D74u; f_8021EE1C(c); // 80221D70
  c->r[30]=0u+0x806A0000u; // 80221D74
  {uint32_t ea=c->r[2]+0xFFFFDFE0u; c->f[1]=c->ps1[1]=RF32(ea);} // 80221D78
  c->r[30]=c->r[30]+0xFFFF98D8u; // 80221D7C
  c->r[3]=c->r[31]+0x0000067Cu; // 80221D80
  c->r[4]=c->r[30]+0x0000001Fu; // 80221D84
  c->r[5]=0u+0x00000001u; // 80221D88
  c->lr=0x80221D90u; f_8021F0B4(c); // 80221D8C
  {uint32_t ea=c->r[2]+0xFFFFDFE0u; c->f[1]=c->ps1[1]=RF32(ea);} // 80221D90
  c->r[3]=c->r[29]|c->r[29]; // 80221D94
  c->r[4]=c->r[30]+0x0000002Bu; // 80221D98
  c->r[5]=0u+0x00000001u; // 80221D9C
  c->lr=0x80221DA4u; f_8021F0B4(c); // 80221DA0
  c->r[0]=R32(c->r[31]+0x0000066Cu); // 80221DA4
  c->r[4]=c->r[2]+0xFFFFE020u; // 80221DA8
  {uint32_t ea=c->r[2]+0xFFFFDFE0u; c->f[1]=c->ps1[1]=RF32(ea);} // 80221DAC
  c->r[3]=c->r[28]|c->r[28]; // 80221DB0
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80221DB4
  c->r[5]=0u+0x00000001u; // 80221DB8
  c->r[4]=R32(c->r[4]+c->r[0]); // 80221DBC
  c->lr=0x80221DC4u; f_8021F0B4(c); // 80221DC0
  {uint32_t ea=c->r[2]+0xFFFFDFE0u; c->f[1]=c->ps1[1]=RF32(ea);} // 80221DC4
  c->r[3]=c->r[27]|c->r[27]; // 80221DC8
  c->r[4]=c->r[30]+0x0000003Au; // 80221DCC
  c->r[5]=0u+0x00000001u; // 80221DD0
  c->lr=0x80221DD8u; f_8021F0B4(c); // 80221DD4
  c->r[0]=R32(c->r[31]+0x0000066Cu); // 80221DD8
  cmps(c,0,(int32_t)c->r[0],1); // 80221DDC
  if (!crb(c,2)) { goto L_80221DF8; } // 80221DE0
  {uint32_t ea=c->r[2]+0xFFFFDFE0u; c->f[1]=c->ps1[1]=RF32(ea);} // 80221DE4
  c->r[3]=c->r[26]|c->r[26]; // 80221DE8
  c->r[4]=c->r[30]+0x0000004Fu; // 80221DEC
  c->r[5]=0u+0x00000001u; // 80221DF0
  c->lr=0x80221DF8u; f_8021F0B4(c); // 80221DF4
L_80221DF8:;
  c->r[0]=0u+0x00000001u; // 80221DF8
  W32(c->r[31]+0x000007C0u,c->r[31]); // 80221DFC
  c->r[3]=c->r[31]|c->r[31]; // 80221E00
  W32(c->r[31]+0x0000077Cu,c->r[0]); // 80221E04
  W32(c->r[31]+0x000007A4u,c->r[0]); // 80221E08
  c->lr=0x80221E10u; f_80226A18(c); // 80221E0C
  c->r[3]=c->r[31]|c->r[31]; // 80221E10
  c->lr=0x80221E18u; f_8006481C(c); // 80221E14
  c->r[30]=c->r[3]|c->r[3]; // 80221E18
  c->r[3]=c->r[31]|c->r[31]; // 80221E1C
  c->lr=0x80221E24u; f_80064AFC(c); // 80221E20
  c->r[4]=c->r[3]|c->r[3]; // 80221E24
  c->r[5]=c->r[30]|c->r[30]; // 80221E28
  c->r[3]=c->r[31]+0x00000848u; // 80221E2C
  c->r[6]=c->r[31]+0x000005C0u; // 80221E30
  c->lr=0x80221E38u; f_80258718(c); // 80221E34
  c->r[0]=R32(c->r[31]+0x00000670u); // 80221E38
  c->r[3]=R32(c->r[31]+0x0000094Cu); // 80221E3C
  cmps(c,0,(int32_t)c->r[0],2); // 80221E40
  c->r[3]=rotl(c->r[3],0)&0x7FFFFFFFu; // 80221E44
  W32(c->r[31]+0x0000094Cu,c->r[3]); // 80221E48
  if (!crb(c,2)) { goto L_80221E60; } // 80221E4C
  c->r[3]=c->r[31]|c->r[31]; // 80221E50
  c->r[4]=0u+0x00000001u; // 80221E54
  c->lr=0x80221E5Cu; f_80227378(c); // 80221E58
  goto L_80221E6C; // 80221E5C
L_80221E60:;
  c->r[3]=c->r[31]|c->r[31]; // 80221E60
  c->r[4]=0u+0x00000000u; // 80221E64
  c->lr=0x80221E6Cu; f_80227378(c); // 80221E68
L_80221E6C:;
  c->r[3]=c->r[31]|c->r[31]; // 80221E6C
  c->lr=0x80221E74u; f_802273D4(c); // 80221E70
  c->lr=0x80221E78u; f_80220404(c); // 80221E74
  cmps(c,0,(int32_t)c->r[3],0); // 80221E78
  if (crb(c,2)) { goto L_80221E90; } // 80221E7C
  c->r[3]=c->r[31]+0x000007FCu; // 80221E80
  c->r[4]=0u+0x00000003u; // 80221E84
  c->r[5]=0u+0x00000001u; // 80221E88
  c->lr=0x80221E90u; f_8005DCA0(c); // 80221E8C
L_80221E90:;
  c->r[11]=c->r[1]+0x00000030u; // 80221E90
  c->lr=0x80221E98u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80221E94
  c->r[0]=R32(c->r[1]+0x00000034u); // 80221E98
  c->lr=c->r[0]; // 80221E9C
  c->r[1]=c->r[1]+0x00000030u; // 80221EA0
  return; // 80221EA4
}

// fn_80221EA8
void f_80221EA8(Ctx* __restrict c) {
  trace_call(0x80221EA8u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80221EA8
  c->r[0]=c->lr; // 80221EAC
  W32(c->r[1]+0x00000024u,c->r[0]); // 80221EB0
  c->r[0]=0u+0x00000000u; // 80221EB4
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80221EB8
  c->r[31]=c->r[3]|c->r[3]; // 80221EBC
  c->r[3]=c->r[1]+0x00000008u; // 80221EC0
  W8(c->r[1]+0x00000008u,c->r[0]); // 80221EC4
  c->lr=0x80221ECCu; f_800462D8(c); // 80221EC8
  c->r[4]=0u+0x00000001u; // 80221ECC
  c->lr=0x80221ED4u; f_800EA1A0(c); // 80221ED0
  {uint32_t ea=c->r[2]+0xFFFFE044u; c->f[1]=c->ps1[1]=RF32(ea);} // 80221ED4
  c->r[3]=c->r[31]|c->r[31]; // 80221ED8
  c->r[4]=0u+0x00000001u; // 80221EDC
  c->r[5]=0u+0x00000000u; // 80221EE0
  c->lr=0x80221EE8u; f_8005EF48(c); // 80221EE4
  c->r[3]=c->r[31]|c->r[31]; // 80221EE8
  c->lr=0x80221EF0u; f_80226954(c); // 80221EEC
  c->r[0]=R32(c->r[1]+0x00000024u); // 80221EF0
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80221EF4
  c->lr=c->r[0]; // 80221EF8
  c->r[1]=c->r[1]+0x00000020u; // 80221EFC
  return; // 80221F00
}

// fn_80221F04
void f_80221F04(Ctx* __restrict c) {
  trace_call(0x80221F04u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80221F04
  c->r[0]=c->lr; // 80221F08
  W32(c->r[1]+0x00000044u,c->r[0]); // 80221F0C
  {uint32_t ea=c->r[1]+0x00000030u; for(int i=28;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 80221F10
  c->r[31]=c->r[1]|c->r[1]; // 80221F14
  c->r[28]=c->r[3]|c->r[3]; // 80221F18
  c->r[4]=R32(c->r[3]+0x00000004u); // 80221F1C
  cmps(c,0,(int32_t)c->r[4],0); // 80221F20
  if (crb(c,2)) { goto L_80221F30; } // 80221F24
  c->r[0]=R32(c->r[4]+0x00000008u); // 80221F28
  goto L_80221F34; // 80221F2C
L_80221F30:;
  c->r[0]=0u+0x00000000u; // 80221F30
L_80221F34:;
  cmps(c,0,(int32_t)c->r[0],0); // 80221F34
  if (!crb(c,2)) { goto L_802220C8; } // 80221F38
  c->r[12]=R32(c->r[28]+0x0000001Cu); // 80221F3C
  c->r[4]=0u+0x80760000u; // 80221F40
  c->r[3]=c->r[28]|c->r[28]; // 80221F44
  c->r[12]=R32(c->r[12]+0x000000F0u); // 80221F48
  c->r[4]=c->r[4]+0xFFFF9D48u; // 80221F4C
  c->ctr=c->r[12]; // 80221F50
  if (true) { c->lr=0x80221F58u; dispatch(c,c->ctr); } // 80221F54
  c->r[3]=c->r[28]|c->r[28]; // 80221F58
  c->lr=0x80221F60u; f_80061A10(c); // 80221F5C
  c->r[30]=0u+0x806A0000u; // 80221F60
  c->r[30]=c->r[30]+0xFFFF98D8u; // 80221F64
  c->r[4]=c->r[30]+0x0000000Du; // 80221F68
  c->lr=0x80221F70u; f_8007CA34(c); // 80221F6C
  cmps(c,0,(int32_t)c->r[3],0); // 80221F70
  if (crb(c,2)) { goto L_8022200C; } // 80221F74
  c->r[3]=c->r[28]|c->r[28]; // 80221F78
  c->r[4]=0u+0x00000000u; // 80221F7C
  c->lr=0x80221F84u; f_80226A2C(c); // 80221F80
  c->r[3]=c->r[28]|c->r[28]; // 80221F84
  c->r[4]=0u+0x00000000u; // 80221F88
  c->lr=0x80221F90u; f_802220E4(c); // 80221F8C
  c->r[3]=c->r[28]|c->r[28]; // 80221F90
  c->r[4]=0u+0x00000000u; // 80221F94
  c->lr=0x80221F9Cu; f_8022247C(c); // 80221F98
  c->lr=0x80221FA0u; f_80220C1C(c); // 80221F9C
  c->r[4]=c->r[3]|c->r[3]; // 80221FA0
  c->r[3]=c->r[28]|c->r[28]; // 80221FA4
  c->lr=0x80221FACu; f_80062F4C(c); // 80221FA8
  c->r[0]=R8(c->r[28]+0x00000010u); // 80221FAC
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80221FB0
  c->r[3]=c->r[28]+c->r[0]; // 80221FB4
  c->r[29]=R32(c->r[3]+0x00000014u); // 80221FB8
  cmps(c,0,(int32_t)c->r[29],0); // 80221FBC
  if (crb(c,2)) { goto L_80221FE8; } // 80221FC0
  c->r[30]=0u+0x00000000u; // 80221FC4
  W32(c->r[31]+0x00000024u,c->r[1]); // 80221FC8
  W8(c->r[31]+0x00000008u,c->r[30]); // 80221FCC
  c->lr=0x80221FD4u; f_80220C1C(c); // 80221FD0
  W32(c->r[29]+0x00000000u,c->r[3]); // 80221FD4
  c->r[0]=c->r[13]+0xFFFF915Cu; // 80221FD8
  W32(c->r[29]+0x00000004u,c->r[0]); // 80221FDC
  W32(c->r[29]+0x00000008u,c->r[30]); // 80221FE0
  W32(c->r[29]+0x0000000Cu,c->r[30]); // 80221FE4
L_80221FE8:;
  W32(c->r[28]+0x00000008u,c->r[29]); // 80221FE8
  c->r[0]=0u+0x00000000u; // 80221FEC
  c->r[3]=c->r[28]|c->r[28]; // 80221FF0
  c->r[4]=c->r[29]|c->r[29]; // 80221FF4
  W32(c->r[29]+0x00000008u,c->r[0]); // 80221FF8
  c->r[0]=R32(c->r[28]+0x00000004u); // 80221FFC
  W32(c->r[28]+0x0000000Cu,c->r[0]); // 80222000
  c->lr=0x80222008u; f_8006306C(c); // 80222004
  goto L_802220C8; // 80222008
L_8022200C:;
  c->r[3]=c->r[28]|c->r[28]; // 8022200C
  c->lr=0x80222014u; f_80061A10(c); // 80222010
  c->r[4]=c->r[30]+0x00000018u; // 80222014
  c->lr=0x8022201Cu; f_8007CA34(c); // 80222018
  cmps(c,0,(int32_t)c->r[3],0); // 8022201C
  if (crb(c,2)) { goto L_80222054; } // 80222020
  c->r[3]=c->r[28]|c->r[28]; // 80222024
  c->r[4]=0u+0x00000001u; // 80222028
  c->lr=0x80222030u; f_80226A2C(c); // 8022202C
  c->r[3]=c->r[28]|c->r[28]; // 80222030
  c->r[4]=0u+0x00000002u; // 80222034
  c->lr=0x8022203Cu; f_802220E4(c); // 80222038
  c->r[12]=R32(c->r[28]+0x0000001Cu); // 8022203C
  c->r[3]=c->r[28]|c->r[28]; // 80222040
  c->r[12]=R32(c->r[12]+0x000001B0u); // 80222044
  c->ctr=c->r[12]; // 80222048
  if (true) { c->lr=0x80222050u; dispatch(c,c->ctr); } // 8022204C
  goto L_802220C8; // 80222050
L_80222054:;
  c->r[3]=c->r[28]|c->r[28]; // 80222054
  c->lr=0x8022205Cu; f_80061A10(c); // 80222058
  c->r[4]=c->r[30]+0x00000063u; // 8022205C
  c->lr=0x80222064u; f_8007CA34(c); // 80222060
  cmps(c,0,(int32_t)c->r[3],0); // 80222064
  if (crb(c,2)) { goto L_8022209C; } // 80222068
  c->r[3]=c->r[28]|c->r[28]; // 8022206C
  c->r[4]=0u+0x00000007u; // 80222070
  c->lr=0x80222078u; f_80226A2C(c); // 80222074
  c->r[3]=c->r[28]|c->r[28]; // 80222078
  c->r[4]=0u+0x00000007u; // 8022207C
  c->lr=0x80222084u; f_802220E4(c); // 80222080
  c->r[12]=R32(c->r[28]+0x0000001Cu); // 80222084
  c->r[3]=c->r[28]|c->r[28]; // 80222088
  c->r[12]=R32(c->r[12]+0x000001B0u); // 8022208C
  c->ctr=c->r[12]; // 80222090
  if (true) { c->lr=0x80222098u; dispatch(c,c->ctr); } // 80222094
  goto L_802220C8; // 80222098
L_8022209C:;
  c->r[3]=c->r[28]|c->r[28]; // 8022209C
  c->r[4]=0u+0x00000000u; // 802220A0
  c->lr=0x802220A8u; f_80226A2C(c); // 802220A4
  c->r[3]=c->r[28]|c->r[28]; // 802220A8
  c->r[4]=0u+0x00000000u; // 802220AC
  c->lr=0x802220B4u; f_802220E4(c); // 802220B0
  c->r[3]=c->r[28]|c->r[28]; // 802220B4
  c->r[4]=0u+0x00000000u; // 802220B8
  c->lr=0x802220C0u; f_8022247C(c); // 802220BC
  c->r[3]=c->r[28]|c->r[28]; // 802220C0
  c->lr=0x802220C8u; f_8005E0F8(c); // 802220C4
L_802220C8:;
  c->r[10]=c->r[31]|c->r[31]; // 802220C8
  {uint32_t ea=c->r[10]+0x00000030u; for(int i=28;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 802220CC
  c->r[10]=R32(c->r[1]+0x00000000u); // 802220D0
  c->r[0]=R32(c->r[10]+0x00000004u); // 802220D4
  c->r[1]=c->r[10]|c->r[10]; // 802220D8
  c->lr=c->r[0]; // 802220DC
  return; // 802220E0
}

// fn_802220E4
void f_802220E4(Ctx* __restrict c) {
  trace_call(0x802220E4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802220E4
  c->r[0]=c->lr; // 802220E8
  W32(c->r[1]+0x00000014u,c->r[0]); // 802220EC
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 802220F0
  c->r[30]=c->r[3]|c->r[3]; // 802220F4
  c->r[31]=c->r[4]|c->r[4]; // 802220F8
  c->r[0]=R32(c->r[3]+0x00000674u); // 802220FC
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[4]); // 80222100
  if (crb(c,2)) { goto L_80222148; } // 80222104
  cmps(c,0,(int32_t)c->r[4],0); // 80222108
  W32(c->r[3]+0x00000674u,c->r[4]); // 8022210C
  if (!crb(c,2)) { goto L_80222118; } // 80222110
  c->lr=0x80222118u; f_80226ED4(c); // 80222114
L_80222118:;
  cmps(c,0,(int32_t)c->r[31],4); // 80222118
  if (!crb(c,2)) { goto L_80222128; } // 8022211C
  c->r[3]=c->r[30]|c->r[30]; // 80222120
  c->lr=0x80222128u; f_80226F98(c); // 80222124
L_80222128:;
  cmps(c,0,(int32_t)c->r[31],5); // 80222128
  if (!crb(c,2)) { goto L_80222138; } // 8022212C
  c->r[3]=c->r[30]|c->r[30]; // 80222130
  c->lr=0x80222138u; f_802270D0(c); // 80222134
L_80222138:;
  cmps(c,0,(int32_t)c->r[31],8); // 80222138
  if (!crb(c,2)) { goto L_80222148; } // 8022213C
  c->r[3]=c->r[30]|c->r[30]; // 80222140
  c->lr=0x80222148u; f_802271A4(c); // 80222144
L_80222148:;
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 80222148
  c->r[0]=R32(c->r[1]+0x00000014u); // 8022214C
  c->lr=c->r[0]; // 80222150
  c->r[1]=c->r[1]+0x00000010u; // 80222154
  return; // 80222158
}

// fn_8022215C
void f_8022215C(Ctx* __restrict c) {
  trace_call(0x8022215Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8022215C
  c->r[0]=c->lr; // 80222160
  W32(c->r[1]+0x00000014u,c->r[0]); // 80222164
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80222168
  c->r[31]=c->r[3]|c->r[3]; // 8022216C
  c->lr=0x80222174u; f_80226954(c); // 80222170
  {uint32_t ea=c->r[2]+0xFFFFE040u; c->f[1]=c->ps1[1]=RF32(ea);} // 80222174
  c->r[3]=c->r[31]+0x000007CCu; // 80222178
  c->lr=0x80222180u; f_800A804C(c); // 8022217C
  c->r[3]=c->r[31]|c->r[31]; // 80222180
  c->lr=0x80222188u; f_8022318C(c); // 80222184
  c->r[3]=c->r[31]+0x000005C4u; // 80222188
  c->lr=0x80222190u; f_800E1F38(c); // 8022218C
  c->r[0]=R32(c->r[1]+0x00000014u); // 80222190
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80222194
  c->lr=c->r[0]; // 80222198
  c->r[1]=c->r[1]+0x00000010u; // 8022219C
  return; // 802221A0
}

// fn_802221A4
void f_802221A4(Ctx* __restrict c) {
  trace_call(0x802221A4u);
  return; // 802221A4
}

// fn_802221A8
void f_802221A8(Ctx* __restrict c) {
  trace_call(0x802221A8u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802221A8
  c->r[0]=c->lr; // 802221AC
  W32(c->r[1]+0x00000044u,c->r[0]); // 802221B0
  c->r[11]=c->r[1]+0x00000020u; // 802221B4
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[31]);} // 802221B8
  {uint32_t ea=c->r[1]+0x00000038u; psq_store(c,31,ea,0,0);} // 802221BC
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[30]);} // 802221C0
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,30,ea,0,0);} // 802221C4
  c->lr=0x802221CCu; { W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 802221C8
  c->r[29]=c->r[3]|c->r[3]; // 802221CC
  c->r[30]=0u+0x00000000u; // 802221D0
  c->r[31]=0u+0x00000000u; // 802221D4
L_802221D8:;
  c->r[3]=c->r[29]+c->r[31]; // 802221D8
  c->r[3]=c->r[3]+0x0000067Cu; // 802221DC
  c->lr=0x802221E4u; f_8021EE38(c); // 802221E0
  c->r[30]=c->r[30]+0x00000001u; // 802221E4
  c->r[31]=c->r[31]+0x00000030u; // 802221E8
  cmps(c,0,(int32_t)c->r[30],5); // 802221EC
  if (crb(c,0)) { IRQCHK(c); goto L_802221D8; } // 802221F0
  c->r[3]=c->r[29]+0x00000668u; // 802221F4
  c->lr=0x802221FCu; f_800A7D5C(c); // 802221F8
  c->r[3]=c->r[29]+0x00000678u; // 802221FC
  c->lr=0x80222204u; f_800A7D5C(c); // 80222200
  c->r[3]=c->r[29]+0x0000080Cu; // 80222204
  c->lr=0x8022220Cu; f_800A7D5C(c); // 80222208
  c->r[3]=c->r[29]+0x00000824u; // 8022220C
  c->lr=0x80222214u; f_800A7D5C(c); // 80222210
  c->r[3]=R32(c->r[29]+0x00000354u); // 80222214
  cmps(c,0,(int32_t)c->r[3],0); // 80222218
  if (!crb(c,2)) { goto L_80222228; } // 8022221C
  c->r[31]=0u+0x00000000u; // 80222220
  goto L_80222234; // 80222224
L_80222228:;
  c->r[3]=R32(c->r[3]+0x00000004u); // 80222228
  c->r[0]=sraw(c,c->r[3],31); // 8022222C
  c->r[31]=c->r[3]&~c->r[0]; // 80222230
L_80222234:;
  c->r[3]=R32(c->r[29]+0x00000404u); // 80222234
  c->lr=0x8022223Cu; f_802EA4B0(c); // 80222238
  c->f[30]=c->f[1]; // 8022223C
  c->r[3]=c->r[29]+0x000005C4u; // 80222240
  c->lr=0x80222248u; f_800E2A98(c); // 80222244
  c->f[31]=c->f[1]; // 80222248
  c->r[3]=c->r[29]+0x000005C4u; // 8022224C
  c->lr=0x80222254u; f_800E2090(c); // 80222250
  c->f[1]=c->f[30]; // 80222254
  c->r[5]=c->r[3]|c->r[3]; // 80222258
  c->f[2]=c->f[31]; // 8022225C
  c->r[4]=c->r[31]|c->r[31]; // 80222260
  c->r[3]=c->r[29]+0x00000848u; // 80222264
  c->lr=0x8022226Cu; f_802588C4(c); // 80222268
  {uint32_t ea=c->r[29]+0x000007D8u; c->f[2]=c->ps1[2]=RF32(ea);} // 8022226C
  c->r[3]=c->r[29]+0x0000094Cu; // 80222270
  {uint32_t ea=c->r[29]+0x000007DCu; c->f[0]=c->ps1[0]=RF32(ea);} // 80222274
  c->f[1]=c->ps1[1]=S(c->f[2]-c->f[0]); // 80222278
  c->lr=0x80222280u; f_80227750(c); // 8022227C
  c->r[11]=c->r[1]+0x00000020u; // 80222280
  {uint32_t ea=c->r[1]+0x00000038u; psq_load(c,31,ea,0,0);} // 80222284
  {uint32_t ea=c->r[1]+0x00000030u; c->f[31]=RF64(ea);} // 80222288
  {uint32_t ea=c->r[1]+0x00000028u; psq_load(c,30,ea,0,0);} // 8022228C
  {uint32_t ea=c->r[1]+0x00000020u; c->f[30]=RF64(ea);} // 80222290
  c->lr=0x80222298u; { c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80222294
  c->r[0]=R32(c->r[1]+0x00000044u); // 80222298
  c->lr=c->r[0]; // 8022229C
  c->r[1]=c->r[1]+0x00000040u; // 802222A0
  return; // 802222A4
}

// fn_802222A8
void f_802222A8(Ctx* __restrict c) {
  trace_call(0x802222A8u);
  return; // 802222A8
}

// fn_802222AC
void f_802222AC(Ctx* __restrict c) {
  trace_call(0x802222ACu);
  return; // 802222AC
}

// fn_802222B0
void f_802222B0(Ctx* __restrict c) {
  trace_call(0x802222B0u);
  c->r[4]=R32(c->r[3]+0x00000810u); // 802222B0
  c->r[0]=c->r[4]+0x00000001u; // 802222B4
  W32(c->r[3]+0x00000810u,c->r[0]); // 802222B8
  return; // 802222BC
}

// fn_802222C0
void f_802222C0(Ctx* __restrict c) {
  trace_call(0x802222C0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802222C0
  c->r[0]=c->lr; // 802222C4
  W32(c->r[1]+0x00000024u,c->r[0]); // 802222C8
  {uint32_t ea=c->r[1]+0x00000018u; WF64(ea,c->f[31]);} // 802222CC
  c->f[31]=c->f[1]; // 802222D0
  {uint32_t ea=c->r[1]+0x00000010u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 802222D4
  c->r[30]=c->r[3]|c->r[3]; // 802222D8
  c->r[31]=c->r[4]|c->r[4]; // 802222DC
  c->lr=0x802222E4u; f_802269C0(c); // 802222E0
  c->f[2]=c->f[31]; // 802222E4
  c->r[4]=R32(c->r[31]+0x00000030u); // 802222E8
  c->r[3]=c->r[30]+0x00000780u; // 802222EC
  c->lr=0x802222F4u; f_800A7F7C(c); // 802222F0
  {uint32_t ea=c->r[1]+0x00000018u; c->f[31]=RF64(ea);} // 802222F4
  {uint32_t ea=c->r[1]+0x00000010u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 802222F8
  c->r[0]=R32(c->r[1]+0x00000024u); // 802222FC
  c->lr=c->r[0]; // 80222300
  c->r[1]=c->r[1]+0x00000020u; // 80222304
  return; // 80222308
}

// fn_8022230C
void f_8022230C(Ctx* __restrict c) {
  trace_call(0x8022230Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8022230C
  c->r[0]=c->lr; // 80222310
  W32(c->r[1]+0x00000044u,c->r[0]); // 80222314
  c->r[11]=c->r[1]+0x00000040u; // 80222318
  c->lr=0x80222320u; { W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8022231C
  c->f[2]=c->f[1]; // 80222320
  c->r[30]=R32(c->r[4]+0x00000030u); // 80222324
  {uint32_t ea=c->r[2]+0xFFFFE040u; c->f[1]=c->ps1[1]=RF32(ea);} // 80222328
  c->r[29]=c->r[3]|c->r[3]; // 8022232C
  c->r[4]=c->r[30]|c->r[30]; // 80222330
  c->r[3]=c->r[3]+0x000007CCu; // 80222334
  c->lr=0x8022233Cu; f_800A7F7C(c); // 80222338
  cmps(c,0,(int32_t)c->r[30],18); // 8022233C
  if (!crb(c,2)) { goto L_80222458; } // 80222340
  c->r[3]=c->r[29]+0x000007FCu; // 80222344
  c->r[4]=0u+0x00000004u; // 80222348
  c->lr=0x80222350u; f_8005CDE8(c); // 8022234C
  cmps(c,0,(int32_t)c->r[3],0); // 80222350
  if (crb(c,2)) { goto L_80222458; } // 80222354
  c->r[3]=c->r[29]+0x000007FCu; // 80222358
  c->r[4]=0u+0x00000002u; // 8022235C
  c->lr=0x80222364u; f_8005CDE8(c); // 80222360
  cmps(c,0,(int32_t)c->r[3],0); // 80222364
  if (!crb(c,2)) { goto L_80222458; } // 80222368
  c->r[3]=c->r[29]+0x000007FCu; // 8022236C
  c->r[4]=0u+0x00000002u; // 80222370
  c->r[5]=0u+0x00000001u; // 80222374
  c->lr=0x8022237Cu; f_8005DCA0(c); // 80222378
  c->r[3]=c->r[29]|c->r[29]; // 8022237C
  c->lr=0x80222384u; f_80226AA0(c); // 80222380
  c->r[5]=R32(c->r[3]+0x00000504u); // 80222384
  c->r[4]=c->r[1]+0x00000020u; // 80222388
  c->r[0]=R32(c->r[3]+0x00000508u); // 8022238C
  c->r[3]=c->r[29]+0x00000504u; // 80222390
  W32(c->r[1]+0x00000024u,c->r[0]); // 80222394
  W32(c->r[1]+0x00000020u,c->r[5]); // 80222398
  c->lr=0x802223A0u; f_80053568(c); // 8022239C
  c->r[0]=0u+0x00000021u; // 802223A0
  W32(c->r[29]+0x000004F4u,c->r[0]); // 802223A4
  c->r[3]=c->r[29]|c->r[29]; // 802223A8
  c->lr=0x802223B0u; f_8005E00C(c); // 802223AC
  c->r[30]=0u+0x00000000u; // 802223B0
  W8(c->r[1]+0x0000001Cu,c->r[30]); // 802223B4
  c->r[3]=c->r[1]+0x0000001Cu; // 802223B8
  c->lr=0x802223C0u; f_8004F3FC(c); // 802223BC
  c->r[4]=0u+0x806A0000u; // 802223C0
  c->r[4]=c->r[4]+0xFFFF98D8u; // 802223C4
  c->r[4]=c->r[4]+0x0000006Cu; // 802223C8
  c->lr=0x802223D0u; f_801752E4(c); // 802223CC
  c->r[3]=R32(c->r[29]+0x00000434u); // 802223D0
  c->r[4]=0u+0x0000001Au; // 802223D4
  c->r[3]=c->r[3]+0x00000030u; // 802223D8
  c->lr=0x802223E0u; f_802D944C(c); // 802223DC
  W8(c->r[1]+0x00000018u,c->r[30]); // 802223E0
  c->r[31]=c->r[3]|c->r[3]; // 802223E4
  c->r[3]=c->r[1]+0x00000018u; // 802223E8
  c->lr=0x802223F0u; f_8004816C(c); // 802223EC
  c->lr=0x802223F4u; f_80047780(c); // 802223F0
  c->r[0]=R32(c->r[3]+0x00000008u); // 802223F4
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[31]); // 802223F8
  if (crb(c,1)) { goto L_80222430; } // 802223FC
  W8(c->r[1]+0x00000014u,c->r[30]); // 80222400
  c->r[3]=c->r[1]+0x00000014u; // 80222404
  c->lr=0x8022240Cu; f_8004F3FC(c); // 80222408
  c->r[4]=R32(c->r[13]+0xFFFF912Cu); // 8022240C
  c->lr=0x80222414u; f_801752E4(c); // 80222410
  W8(c->r[1]+0x00000010u,c->r[30]); // 80222414
  c->r[3]=c->r[1]+0x00000010u; // 80222418
  c->r[31]=0u+0x00000001u; // 8022241C
  c->lr=0x80222424u; f_8004816C(c); // 80222420
  c->lr=0x80222428u; f_80047780(c); // 80222424
  W8(c->r[3]+0x0000000Cu,c->r[31]); // 80222428
  goto L_80222458; // 8022242C
L_80222430:;
  W8(c->r[1]+0x0000000Cu,c->r[30]); // 80222430
  c->r[3]=c->r[1]+0x0000000Cu; // 80222434
  c->lr=0x8022243Cu; f_8004F3FC(c); // 80222438
  c->r[4]=R32(c->r[13]+0xFFFF9128u); // 8022243C
  c->lr=0x80222444u; f_801752E4(c); // 80222440
  W8(c->r[1]+0x00000008u,c->r[30]); // 80222444
  c->r[3]=c->r[1]+0x00000008u; // 80222448
  c->lr=0x80222450u; f_8004816C(c); // 8022244C
  c->lr=0x80222454u; f_80047780(c); // 80222450
  W8(c->r[3]+0x0000000Cu,c->r[30]); // 80222454
L_80222458:;
  {uint32_t ea=c->r[2]+0xFFFFE048u; c->f[1]=c->ps1[1]=RF32(ea);} // 80222458
  c->r[3]=c->r[29]|c->r[29]; // 8022245C
  c->lr=0x80222464u; f_8005EF3C(c); // 80222460
  c->r[11]=c->r[1]+0x00000040u; // 80222464
  c->lr=0x8022246Cu; { c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80222468
  c->r[0]=R32(c->r[1]+0x00000044u); // 8022246C
  c->lr=c->r[0]; // 80222470
  c->r[1]=c->r[1]+0x00000040u; // 80222474
  return; // 80222478
}

// fn_8022247C
void f_8022247C(Ctx* __restrict c) {
  trace_call(0x8022247Cu);
  {uint32_t ea=c->r[2]+0xFFFFE040u; c->f[0]=c->ps1[0]=RF32(ea);} // 8022247C
  c->r[0]=0u+0x00000000u; // 80222480
  W32(c->r[3]+0x00000800u,c->r[4]); // 80222484
  W32(c->r[3]+0x00000804u,c->r[0]); // 80222488
  W8(c->r[3]+0x00000808u,c->r[0]); // 8022248C
  W32(c->r[3]+0x00000810u,c->r[0]); // 80222490
  {uint32_t ea=c->r[3]+0x0000080Cu; WF32(ea,c->f[0]);} // 80222494
  return; // 80222498
}

// fn_8022249C
void f_8022249C(Ctx* __restrict c) {
  trace_call(0x8022249Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8022249C
  c->r[0]=c->lr; // 802224A0
  c->r[6]=0u+0x806A0000u; // 802224A4
  c->r[7]=0u+0x00000000u; // 802224A8
  W32(c->r[1]+0x00000014u,c->r[0]); // 802224AC
  c->r[0]=0u+0x00000003u; // 802224B0
  c->r[6]=c->r[6]+0xFFFF90A0u; // 802224B4
  c->r[4]=0u+0x00000000u; // 802224B8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 802224BC
  c->r[31]=c->r[3]|c->r[3]; // 802224C0
  c->ctr=c->r[0]; // 802224C4
L_802224C8:;
  c->r[5]=R32(c->r[6]+c->r[4]); // 802224C8
  c->r[0]=R32(c->r[3]+0x00000674u); // 802224CC
  cmps(c,0,(int32_t)c->r[5],(int32_t)c->r[0]); // 802224D0
  if (!crb(c,2)) { goto L_802224E0; } // 802224D4
  c->r[7]=c->r[6]+c->r[4]; // 802224D8
  goto L_802224E8; // 802224DC
L_802224E0:;
  c->r[4]=c->r[4]+0x00000008u; // 802224E0
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_802224C8; } // 802224E4
L_802224E8:;
  cmps(c,0,(int32_t)c->r[7],0); // 802224E8
  if (!crb(c,2)) { goto L_802224F8; } // 802224EC
  c->r[3]=0u+0x00000000u; // 802224F0
  goto L_8022251C; // 802224F4
L_802224F8:;
  c->r[3]=R32(c->r[3]+0x00000434u); // 802224F8
  c->r[4]=R32(c->r[7]+0x00000004u); // 802224FC
  c->r[3]=c->r[3]+0x00000030u; // 80222500
  c->lr=0x80222508u; f_802D944C(c); // 80222504
  c->r[0]=R32(c->r[31]+0x00000810u); // 80222508
  c->r[4]=rotl(c->r[3],1)&0x00000001u; // 8022250C
  c->r[5]=sraw(c,c->r[0],31); // 80222510
  c->r[0]=addc(c,~c->r[3],c->r[0],1); // 80222514
  c->r[3]=addc(c,c->r[5],c->r[4],c->xer_ca); // 80222518
L_8022251C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8022251C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80222520
  c->lr=c->r[0]; // 80222524
  c->r[1]=c->r[1]+0x00000010u; // 80222528
  return; // 8022252C
}

// fn_80222530
void f_80222530(Ctx* __restrict c) {
  trace_call(0x80222530u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80222530
  c->r[0]=c->lr; // 80222534
  W32(c->r[1]+0x00000044u,c->r[0]); // 80222538
  c->r[11]=c->r[1]+0x00000040u; // 8022253C
  c->lr=0x80222544u; { W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80222540
  c->r[31]=c->r[1]|c->r[1]; // 80222544
  c->r[0]=R8(c->r[3]+0x000007E0u); // 80222548
  c->r[28]=c->r[3]|c->r[3]; // 8022254C
  c->r[4]=0u+0x00000000u; // 80222550
  cmps(c,0,(int32_t)c->r[0],0); // 80222554
  if (crb(c,2)) { goto L_80222560; } // 80222558
  c->r[4]=0u+0x00000001u; // 8022255C
L_80222560:;
  {uint32_t ea=c->r[3]+0x0000080Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 80222560
  {uint32_t ea=c->r[13]+0xFFFF9134u; c->f[0]=c->ps1[0]=RF32(ea);} // 80222564
  fcmp(c,0,c->f[1],c->f[0]); // 80222568
  setcrb(c,2,crb(c,1)|crb(c,2)); // 8022256C
  if (!crb(c,2)) { goto L_80222578; } // 80222570
  c->r[4]=0u+0x00000001u; // 80222574
L_80222578:;
  cmps(c,0,(int32_t)c->r[4],0); // 80222578
  if (!crb(c,2)) { goto L_802225B0; } // 8022257C
  c->r[4]=0u+0x806A0000u; // 80222580
  c->r[0]=0u+0x00000001u; // 80222584
  W8(c->r[3]+0x00000808u,c->r[0]); // 80222588
  c->r[4]=c->r[4]+0xFFFF98D8u; // 8022258C
  c->r[3]=R32(c->r[3]+0x00000434u); // 80222590
  c->r[4]=c->r[4]+0x0000007Au; // 80222594
  c->lr=0x8022259Cu; f_800FE0C8(c); // 80222598
  c->r[3]=c->r[28]|c->r[28]; // 8022259C
  c->lr=0x802225A4u; f_80222DDC(c); // 802225A0
  cmps(c,0,(int32_t)c->r[3],0); // 802225A4
  if (crb(c,2)) { goto L_802225B0; } // 802225A8
  goto L_8022262C; // 802225AC
L_802225B0:;
  c->r[3]=c->r[28]|c->r[28]; // 802225B0
  c->r[4]=0u+0x00000001u; // 802225B4
  c->lr=0x802225BCu; f_802220E4(c); // 802225B8
  c->lr=0x802225C0u; f_80220B78(c); // 802225BC
  c->r[4]=c->r[3]|c->r[3]; // 802225C0
  c->r[3]=c->r[28]|c->r[28]; // 802225C4
  c->lr=0x802225CCu; f_80062F4C(c); // 802225C8
  c->r[0]=R8(c->r[28]+0x00000010u); // 802225CC
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 802225D0
  c->r[3]=c->r[28]+c->r[0]; // 802225D4
  c->r[29]=R32(c->r[3]+0x00000014u); // 802225D8
  cmps(c,0,(int32_t)c->r[29],0); // 802225DC
  if (crb(c,2)) { goto L_80222608; } // 802225E0
  c->r[30]=0u+0x00000000u; // 802225E4
  W32(c->r[31]+0x00000024u,c->r[1]); // 802225E8
  W8(c->r[31]+0x00000008u,c->r[30]); // 802225EC
  c->lr=0x802225F4u; f_80220B78(c); // 802225F0
  W32(c->r[29]+0x00000000u,c->r[3]); // 802225F4
  c->r[0]=c->r[13]+0xFFFF9158u; // 802225F8
  W32(c->r[29]+0x00000004u,c->r[0]); // 802225FC
  W32(c->r[29]+0x00000008u,c->r[30]); // 80222600
  W32(c->r[29]+0x0000000Cu,c->r[30]); // 80222604
L_80222608:;
  W32(c->r[28]+0x00000008u,c->r[29]); // 80222608
  c->r[0]=0u+0x00000000u; // 8022260C
  c->r[3]=c->r[28]|c->r[28]; // 80222610
  c->r[4]=c->r[29]|c->r[29]; // 80222614
  W32(c->r[29]+0x00000008u,c->r[0]); // 80222618
  c->r[0]=R32(c->r[28]+0x00000004u); // 8022261C
  W32(c->r[28]+0x0000000Cu,c->r[0]); // 80222620
  c->lr=0x80222628u; f_8006306C(c); // 80222624
  c->r[3]=c->r[29]|c->r[29]; // 80222628
L_8022262C:;
  c->r[10]=c->r[31]|c->r[31]; // 8022262C
  c->r[11]=c->r[10]+0x00000040u; // 80222630
  c->lr=0x80222638u; { c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80222634
  c->r[10]=R32(c->r[1]+0x00000000u); // 80222638
  c->r[0]=R32(c->r[10]+0x00000004u); // 8022263C
  c->r[1]=c->r[10]|c->r[10]; // 80222640
  c->lr=c->r[0]; // 80222644
  return; // 80222648
}

// fn_8022264C
void f_8022264C(Ctx* __restrict c) {
  trace_call(0x8022264Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8022264C
  c->r[0]=c->lr; // 80222650
  W32(c->r[1]+0x00000014u,c->r[0]); // 80222654
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80222658
  c->r[31]=0u+0x00000000u; // 8022265C
  W32(c->r[1]+0x00000008u,c->r[30]); // 80222660
  c->r[30]=c->r[3]|c->r[3]; // 80222664
  {uint32_t ea=c->r[3]+0x00000828u; c->f[0]=c->ps1[0]=RF32(ea);} // 80222668
  {uint32_t ea=c->r[3]+0x00000824u; c->f[1]=c->ps1[1]=RF32(ea);} // 8022266C
  fcmp(c,0,c->f[1],c->f[0]); // 80222670
  setcrb(c,2,crb(c,1)|crb(c,2)); // 80222674
  if (!crb(c,2)) { goto L_80222684; } // 80222678
  c->lr=0x80222680u; f_8022278C(c); // 8022267C
  goto L_80222774; // 80222680
L_80222684:;
  c->lr=0x80222688u; f_8022249C(c); // 80222684
  cmps(c,0,(int32_t)c->r[3],0); // 80222688
  if (crb(c,2)) { goto L_80222694; } // 8022268C
  c->r[31]=0u+0x00000001u; // 80222690
L_80222694:;
  cmps(c,0,(int32_t)c->r[31],0); // 80222694
  if (!crb(c,2)) { goto L_80222710; } // 80222698
  c->r[0]=R32(c->r[30]+0x00000770u); // 8022269C
  c->r[4]=0u+0x00000000u; // 802226A0
  cmps(c,0,(int32_t)c->r[0],2); // 802226A4
  if (!crb(c,2)) { goto L_802226B8; } // 802226A8
  c->r[3]=0u+0x806A0000u; // 802226AC
  c->r[3]=c->r[3]+0xFFFF98D8u; // 802226B0
  c->r[4]=c->r[3]+0x00000080u; // 802226B4
L_802226B8:;
  cmps(c,0,(int32_t)c->r[0],3); // 802226B8
  if (!crb(c,2)) { goto L_802226CC; } // 802226BC
  c->r[3]=0u+0x806A0000u; // 802226C0
  c->r[3]=c->r[3]+0xFFFF98D8u; // 802226C4
  c->r[4]=c->r[3]+0x00000088u; // 802226C8
L_802226CC:;
  cmps(c,0,(int32_t)c->r[0],4); // 802226CC
  if (!crb(c,2)) { goto L_802226E0; } // 802226D0
  c->r[3]=0u+0x806A0000u; // 802226D4
  c->r[3]=c->r[3]+0xFFFF98D8u; // 802226D8
  c->r[4]=c->r[3]+0x00000090u; // 802226DC
L_802226E0:;
  cmps(c,0,(int32_t)c->r[0],5); // 802226E0
  if (!crb(c,2)) { goto L_802226F4; } // 802226E4
  c->r[3]=0u+0x806A0000u; // 802226E8
  c->r[3]=c->r[3]+0xFFFF98D8u; // 802226EC
  c->r[4]=c->r[3]+0x00000098u; // 802226F0
L_802226F4:;
  c->r[3]=R32(c->r[30]+0x00000434u); // 802226F4
  c->lr=0x802226FCu; f_800FE0C8(c); // 802226F8
  c->r[3]=c->r[30]|c->r[30]; // 802226FC
  c->lr=0x80222704u; f_80222DDC(c); // 80222700
  cmps(c,0,(int32_t)c->r[3],0); // 80222704
  if (crb(c,2)) { goto L_80222710; } // 80222708
  goto L_80222774; // 8022270C
L_80222710:;
  c->r[0]=R32(c->r[30]+0x00000770u); // 80222710
  cmps(c,0,(int32_t)c->r[0],2); // 80222714
  if (!crb(c,2)) { goto L_80222724; } // 80222718
  c->r[0]=0u+0x00000003u; // 8022271C
  W32(c->r[30]+0x00000774u,c->r[0]); // 80222720
L_80222724:;
  c->r[0]=R32(c->r[30]+0x00000770u); // 80222724
  cmps(c,0,(int32_t)c->r[0],3); // 80222728
  if (!crb(c,2)) { goto L_80222738; } // 8022272C
  c->r[0]=0u+0x00000002u; // 80222730
  W32(c->r[30]+0x00000774u,c->r[0]); // 80222734
L_80222738:;
  c->r[0]=R32(c->r[30]+0x00000770u); // 80222738
  cmps(c,0,(int32_t)c->r[0],4); // 8022273C
  if (!crb(c,2)) { goto L_8022274C; } // 80222740
  c->r[0]=0u+0x00000005u; // 80222744
  W32(c->r[30]+0x00000774u,c->r[0]); // 80222748
L_8022274C:;
  c->r[0]=R32(c->r[30]+0x00000770u); // 8022274C
  cmps(c,0,(int32_t)c->r[0],5); // 80222750
  if (!crb(c,2)) { goto L_80222760; } // 80222754
  c->r[0]=0u+0x00000004u; // 80222758
  W32(c->r[30]+0x00000774u,c->r[0]); // 8022275C
L_80222760:;
  c->r[12]=R32(c->r[30]+0x0000001Cu); // 80222760
  c->r[3]=c->r[30]|c->r[30]; // 80222764
  c->r[12]=R32(c->r[12]+0x000001B0u); // 80222768
  c->ctr=c->r[12]; // 8022276C
  if (true) { c->lr=0x80222774u; dispatch(c,c->ctr); } // 80222770
L_80222774:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80222774
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80222778
  c->r[30]=R32(c->r[1]+0x00000008u); // 8022277C
  c->lr=c->r[0]; // 80222780
  c->r[1]=c->r[1]+0x00000010u; // 80222784
  return; // 80222788
}

// fn_8022278C
void f_8022278C(Ctx* __restrict c) {
  trace_call(0x8022278Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8022278C
  c->r[0]=c->lr; // 80222790
  W32(c->r[1]+0x00000044u,c->r[0]); // 80222794
  {uint32_t ea=c->r[1]+0x00000030u; for(int i=28;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 80222798
  c->r[31]=c->r[1]|c->r[1]; // 8022279C
  c->r[28]=c->r[3]|c->r[3]; // 802227A0
  c->lr=0x802227A8u; f_802206CC(c); // 802227A4
  c->r[4]=c->r[3]|c->r[3]; // 802227A8
  c->r[3]=c->r[28]|c->r[28]; // 802227AC
  c->lr=0x802227B4u; f_80062F4C(c); // 802227B0
  c->r[0]=R8(c->r[28]+0x00000010u); // 802227B4
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 802227B8
  c->r[3]=c->r[28]+c->r[0]; // 802227BC
  c->r[29]=R32(c->r[3]+0x00000014u); // 802227C0
  cmps(c,0,(int32_t)c->r[29],0); // 802227C4
  if (crb(c,2)) { goto L_802227F0; } // 802227C8
  c->r[30]=0u+0x00000000u; // 802227CC
  W32(c->r[31]+0x00000024u,c->r[1]); // 802227D0
  W8(c->r[31]+0x00000008u,c->r[30]); // 802227D4
  c->lr=0x802227DCu; f_802206CC(c); // 802227D8
  W32(c->r[29]+0x00000000u,c->r[3]); // 802227DC
  c->r[0]=c->r[13]+0xFFFF913Cu; // 802227E0
  W32(c->r[29]+0x00000004u,c->r[0]); // 802227E4
  W32(c->r[29]+0x00000008u,c->r[30]); // 802227E8
  W32(c->r[29]+0x0000000Cu,c->r[30]); // 802227EC
L_802227F0:;
  W32(c->r[28]+0x00000008u,c->r[29]); // 802227F0
  c->r[0]=0u+0x00000000u; // 802227F4
  c->r[3]=c->r[28]|c->r[28]; // 802227F8
  c->r[4]=c->r[29]|c->r[29]; // 802227FC
  W32(c->r[29]+0x00000008u,c->r[0]); // 80222800
  c->r[0]=R32(c->r[28]+0x00000004u); // 80222804
  W32(c->r[28]+0x0000000Cu,c->r[0]); // 80222808
  c->lr=0x80222810u; f_8006306C(c); // 8022280C
  c->r[10]=c->r[31]|c->r[31]; // 80222810
  c->r[3]=c->r[29]|c->r[29]; // 80222814
  {uint32_t ea=c->r[10]+0x00000030u; for(int i=28;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 80222818
  c->r[10]=R32(c->r[1]+0x00000000u); // 8022281C
  c->r[0]=R32(c->r[10]+0x00000004u); // 80222820
  c->r[1]=c->r[10]|c->r[10]; // 80222824
  c->lr=c->r[0]; // 80222828
  return; // 8022282C
}

// fn_80222830
void f_80222830(Ctx* __restrict c) {
  trace_call(0x80222830u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80222830
  c->r[0]=c->lr; // 80222834
  W32(c->r[1]+0x00000044u,c->r[0]); // 80222838
  c->r[11]=c->r[1]+0x00000040u; // 8022283C
  c->lr=0x80222844u; { W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80222840
  c->r[31]=c->r[1]|c->r[1]; // 80222844
  c->r[30]=c->r[3]|c->r[3]; // 80222848
  c->r[28]=0u+0x00000000u; // 8022284C
  c->r[4]=0u+0x00000001u; // 80222850
  c->r[3]=c->r[3]+0x000007FCu; // 80222854
  c->lr=0x8022285Cu; f_8005CDE8(c); // 80222858
  cmps(c,0,(int32_t)c->r[3],0); // 8022285C
  if (!crb(c,2)) { goto L_8022291C; } // 80222860
  c->r[3]=c->r[30]+0x000007CCu; // 80222864
  c->lr=0x8022286Cu; f_80222A38(c); // 80222868
  {uint32_t ea=c->r[2]+0xFFFFE04Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8022286C
  fcmp(c,0,c->f[1],c->f[0]); // 80222870
  setcrb(c,2,crb(c,0)|crb(c,2)); // 80222874
  if (!crb(c,2)) { goto L_8022291C; } // 80222878
  c->r[0]=R32(c->r[30]+0x00000770u); // 8022287C
  cmps(c,0,(int32_t)c->r[0],7); // 80222880
  if (crb(c,2)) { goto L_802228A8; } // 80222884
  c->r[0]=0u+0x00000007u; // 80222888
  W32(c->r[30]+0x00000774u,c->r[0]); // 8022288C
  c->r[3]=c->r[30]|c->r[30]; // 80222890
  c->r[12]=R32(c->r[30]+0x0000001Cu); // 80222894
  c->r[12]=R32(c->r[12]+0x000001B0u); // 80222898
  c->ctr=c->r[12]; // 8022289C
  if (true) { c->lr=0x802228A4u; dispatch(c,c->ctr); } // 802228A0
  goto L_80222A18; // 802228A4
L_802228A8:;
  c->lr=0x802228ACu; f_80220844(c); // 802228A8
  c->r[4]=c->r[3]|c->r[3]; // 802228AC
  c->r[3]=c->r[30]|c->r[30]; // 802228B0
  c->lr=0x802228B8u; f_80062F4C(c); // 802228B4
  c->r[0]=R8(c->r[30]+0x00000010u); // 802228B8
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 802228BC
  c->r[3]=c->r[30]+c->r[0]; // 802228C0
  c->r[28]=R32(c->r[3]+0x00000014u); // 802228C4
  cmps(c,0,(int32_t)c->r[28],0); // 802228C8
  if (crb(c,2)) { goto L_802228F4; } // 802228CC
  c->r[29]=0u+0x00000000u; // 802228D0
  W32(c->r[31]+0x00000024u,c->r[1]); // 802228D4
  W8(c->r[31]+0x00000008u,c->r[29]); // 802228D8
  c->lr=0x802228E0u; f_80220844(c); // 802228DC
  W32(c->r[28]+0x00000000u,c->r[3]); // 802228E0
  c->r[0]=c->r[13]+0xFFFF9144u; // 802228E4
  W32(c->r[28]+0x00000004u,c->r[0]); // 802228E8
  W32(c->r[28]+0x00000008u,c->r[29]); // 802228EC
  W32(c->r[28]+0x0000000Cu,c->r[29]); // 802228F0
L_802228F4:;
  W32(c->r[30]+0x00000008u,c->r[28]); // 802228F4
  c->r[0]=0u+0x00000000u; // 802228F8
  c->r[3]=c->r[30]|c->r[30]; // 802228FC
  c->r[4]=c->r[28]|c->r[28]; // 80222900
  W32(c->r[28]+0x00000008u,c->r[0]); // 80222904
  c->r[0]=R32(c->r[30]+0x00000004u); // 80222908
  W32(c->r[30]+0x0000000Cu,c->r[0]); // 8022290C
  c->lr=0x80222914u; f_8006306C(c); // 80222910
  c->r[3]=c->r[28]|c->r[28]; // 80222914
  goto L_80222A18; // 80222918
L_8022291C:;
  {uint32_t ea=c->r[30]+0x00000828u; c->f[0]=c->ps1[0]=RF32(ea);} // 8022291C
  {uint32_t ea=c->r[30]+0x00000824u; c->f[1]=c->ps1[1]=RF32(ea);} // 80222920
  fcmp(c,0,c->f[1],c->f[0]); // 80222924
  setcrb(c,2,crb(c,1)|crb(c,2)); // 80222928
  if (!crb(c,2)) { goto L_8022293C; } // 8022292C
  c->r[3]=c->r[30]|c->r[30]; // 80222930
  c->lr=0x80222938u; f_8022278C(c); // 80222934
  goto L_80222A18; // 80222938
L_8022293C:;
  c->r[3]=c->r[30]|c->r[30]; // 8022293C
  c->lr=0x80222944u; f_8022249C(c); // 80222940
  cmps(c,0,(int32_t)c->r[3],0); // 80222944
  if (crb(c,2)) { goto L_80222950; } // 80222948
  c->r[28]=0u+0x00000001u; // 8022294C
L_80222950:;
  cmps(c,0,(int32_t)c->r[28],0); // 80222950
  if (!crb(c,2)) { goto L_802229B8; } // 80222954
  c->r[0]=R32(c->r[30]+0x00000770u); // 80222958
  c->r[4]=0u+0x00000000u; // 8022295C
  cmps(c,0,(int32_t)c->r[0],6); // 80222960
  if (!crb(c,2)) { goto L_80222974; } // 80222964
  c->r[3]=0u+0x806A0000u; // 80222968
  c->r[3]=c->r[3]+0xFFFF98D8u; // 8022296C
  c->r[4]=c->r[3]+0x000000A0u; // 80222970
L_80222974:;
  cmps(c,0,(int32_t)c->r[0],7); // 80222974
  if (!crb(c,2)) { goto L_80222988; } // 80222978
  c->r[3]=0u+0x806A0000u; // 8022297C
  c->r[3]=c->r[3]+0xFFFF98D8u; // 80222980
  c->r[4]=c->r[3]+0x000000A8u; // 80222984
L_80222988:;
  cmps(c,0,(int32_t)c->r[0],0); // 80222988
  if (!crb(c,2)) { goto L_8022299C; } // 8022298C
  c->r[3]=0u+0x806A0000u; // 80222990
  c->r[3]=c->r[3]+0xFFFF98D8u; // 80222994
  c->r[4]=c->r[3]+0x000000B0u; // 80222998
L_8022299C:;
  c->r[3]=R32(c->r[30]+0x00000434u); // 8022299C
  c->lr=0x802229A4u; f_800FE0C8(c); // 802229A0
  c->r[3]=c->r[30]|c->r[30]; // 802229A4
  c->lr=0x802229ACu; f_80222DDC(c); // 802229A8
  cmps(c,0,(int32_t)c->r[3],0); // 802229AC
  if (crb(c,2)) { goto L_802229B8; } // 802229B0
  goto L_80222A18; // 802229B4
L_802229B8:;
  c->r[0]=R32(c->r[30]+0x00000770u); // 802229B8
  cmps(c,0,(int32_t)c->r[0],6); // 802229BC
  if (!crb(c,2)) { goto L_802229CC; } // 802229C0
  c->r[0]=0u+0x00000007u; // 802229C4
  W32(c->r[30]+0x00000774u,c->r[0]); // 802229C8
L_802229CC:;
  c->r[0]=R32(c->r[30]+0x00000770u); // 802229CC
  cmps(c,0,(int32_t)c->r[0],7); // 802229D0
  if (!crb(c,2)) { goto L_802229F0; } // 802229D4
  c->r[0]=R32(c->r[30]+0x0000076Cu); // 802229D8
  c->r[3]=0u+0x00000000u; // 802229DC
  cmps(c,0,(int32_t)c->r[0],0); // 802229E0
  if (!crb(c,2)) { goto L_802229EC; } // 802229E4
  c->r[3]=0u+0x00000006u; // 802229E8
L_802229EC:;
  W32(c->r[30]+0x00000774u,c->r[3]); // 802229EC
L_802229F0:;
  c->r[0]=R32(c->r[30]+0x00000770u); // 802229F0
  cmps(c,0,(int32_t)c->r[0],0); // 802229F4
  if (!crb(c,2)) { goto L_80222A04; } // 802229F8
  c->r[0]=0u+0x00000007u; // 802229FC
  W32(c->r[30]+0x00000774u,c->r[0]); // 80222A00
L_80222A04:;
  c->r[12]=R32(c->r[30]+0x0000001Cu); // 80222A04
  c->r[3]=c->r[30]|c->r[30]; // 80222A08
  c->r[12]=R32(c->r[12]+0x000001B0u); // 80222A0C
  c->ctr=c->r[12]; // 80222A10
  if (true) { c->lr=0x80222A18u; dispatch(c,c->ctr); } // 80222A14
L_80222A18:;
  c->r[10]=c->r[31]|c->r[31]; // 80222A18
  c->r[11]=c->r[10]+0x00000040u; // 80222A1C
  c->lr=0x80222A24u; { c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80222A20
  c->r[10]=R32(c->r[1]+0x00000000u); // 80222A24
  c->r[0]=R32(c->r[10]+0x00000004u); // 80222A28
  c->r[1]=c->r[10]|c->r[10]; // 80222A2C
  c->lr=c->r[0]; // 80222A30
  return; // 80222A34
}

// fn_80222A38
void f_80222A38(Ctx* __restrict c) {
  trace_call(0x80222A38u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80222A38
  c->r[0]=c->lr; // 80222A3C
  {uint32_t ea=c->r[3]+0x0000000Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 80222A40
  {uint32_t ea=c->r[3]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 80222A44
  W32(c->r[1]+0x00000014u,c->r[0]); // 80222A48
  c->f[1]=c->ps1[1]=S(c->f[3]-c->f[0]); // 80222A4C
  {uint32_t ea=c->r[2]+0xFFFFE040u; c->f[2]=c->ps1[2]=RF32(ea);} // 80222A50
  c->lr=0x80222A58u; f_80073B4C(c); // 80222A54
  {uint32_t ea=c->r[2]+0xFFFFE050u; c->f[0]=c->ps1[0]=RF32(ea);} // 80222A58
  c->r[0]=R32(c->r[1]+0x00000014u); // 80222A5C
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[1]); // 80222A60
  c->lr=c->r[0]; // 80222A64
  c->r[1]=c->r[1]+0x00000010u; // 80222A68
  return; // 80222A6C
}

// fn_80222A70
void f_80222A70(Ctx* __restrict c) {
  trace_call(0x80222A70u);
  {uint32_t ea=c->r[1]+0xFFFFFF50u; W32(ea,c->r[1]); c->r[1]=ea;} // 80222A70
  c->r[0]=c->lr; // 80222A74
  W32(c->r[1]+0x000000B4u,c->r[0]); // 80222A78
  c->r[11]=c->r[1]+0x000000B0u; // 80222A7C
  c->lr=0x80222A84u; { W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80222A80
  c->r[31]=c->r[1]|c->r[1]; // 80222A84
  c->r[0]=R32(c->r[3]+0x00000774u); // 80222A88
  c->r[30]=c->r[3]|c->r[3]; // 80222A8C
  c->r[28]=0u+0x00000000u; // 80222A90
  cmps(c,0,(int32_t)c->r[0],10); // 80222A94
  if (crb(c,2)) { goto L_80222B10; } // 80222A98
  c->lr=0x80222AA0u; f_80062EBC(c); // 80222A9C
  c->r[4]=c->r[3]|c->r[3]; // 80222AA0
  c->r[3]=c->r[30]|c->r[30]; // 80222AA4
  c->lr=0x80222AACu; f_80062F4C(c); // 80222AA8
  c->r[0]=R8(c->r[30]+0x00000010u); // 80222AAC
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80222AB0
  c->r[3]=c->r[30]+c->r[0]; // 80222AB4
  c->r[28]=R32(c->r[3]+0x00000014u); // 80222AB8
  cmps(c,0,(int32_t)c->r[28],0); // 80222ABC
  if (crb(c,2)) { goto L_80222AE8; } // 80222AC0
  c->r[29]=0u+0x00000000u; // 80222AC4
  W32(c->r[31]+0x00000094u,c->r[1]); // 80222AC8
  W8(c->r[31]+0x00000018u,c->r[29]); // 80222ACC
  c->lr=0x80222AD4u; f_80062EBC(c); // 80222AD0
  W32(c->r[28]+0x00000000u,c->r[3]); // 80222AD4
  c->r[0]=c->r[13]+0xFFFF80D8u; // 80222AD8
  W32(c->r[28]+0x00000004u,c->r[0]); // 80222ADC
  W32(c->r[28]+0x00000008u,c->r[29]); // 80222AE0
  W32(c->r[28]+0x0000000Cu,c->r[29]); // 80222AE4
L_80222AE8:;
  W32(c->r[30]+0x00000008u,c->r[28]); // 80222AE8
  c->r[0]=0u+0x00000000u; // 80222AEC
  c->r[3]=c->r[30]|c->r[30]; // 80222AF0
  c->r[4]=c->r[28]|c->r[28]; // 80222AF4
  W32(c->r[28]+0x00000008u,c->r[0]); // 80222AF8
  c->r[0]=R32(c->r[30]+0x00000004u); // 80222AFC
  W32(c->r[30]+0x0000000Cu,c->r[0]); // 80222B00
  c->lr=0x80222B08u; f_8006306C(c); // 80222B04
  c->r[3]=c->r[28]|c->r[28]; // 80222B08
  goto L_80222DBC; // 80222B0C
L_80222B10:;
  c->r[0]=R32(c->r[3]+0x00000674u); // 80222B10
  cmps(c,0,(int32_t)c->r[0],2); // 80222B14
  if (crb(c,2)) { goto L_80222B38; } // 80222B18
  cmps(c,0,(int32_t)c->r[0],3); // 80222B1C
  if (crb(c,2)) { goto L_80222BAC; } // 80222B20
  cmps(c,0,(int32_t)c->r[0],6); // 80222B24
  if (crb(c,2)) { goto L_80222C20; } // 80222B28
  cmps(c,0,(int32_t)c->r[0],7); // 80222B2C
  if (crb(c,2)) { goto L_80222C94; } // 80222B30
  goto L_80222D08; // 80222B34
L_80222B38:;
  c->lr=0x80222B3Cu; f_80220AD4(c); // 80222B38
  c->r[4]=c->r[3]|c->r[3]; // 80222B3C
  c->r[3]=c->r[30]|c->r[30]; // 80222B40
  c->lr=0x80222B48u; f_80062F4C(c); // 80222B44
  c->r[0]=R8(c->r[30]+0x00000010u); // 80222B48
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80222B4C
  c->r[3]=c->r[30]+c->r[0]; // 80222B50
  c->r[28]=R32(c->r[3]+0x00000014u); // 80222B54
  cmps(c,0,(int32_t)c->r[28],0); // 80222B58
  if (crb(c,2)) { goto L_80222B84; } // 80222B5C
  c->r[29]=0u+0x00000000u; // 80222B60
  W32(c->r[31]+0x0000007Cu,c->r[1]); // 80222B64
  W8(c->r[31]+0x00000014u,c->r[29]); // 80222B68
  c->lr=0x80222B70u; f_80220AD4(c); // 80222B6C
  W32(c->r[28]+0x00000000u,c->r[3]); // 80222B70
  c->r[0]=c->r[13]+0xFFFF9154u; // 80222B74
  W32(c->r[28]+0x00000004u,c->r[0]); // 80222B78
  W32(c->r[28]+0x00000008u,c->r[29]); // 80222B7C
  W32(c->r[28]+0x0000000Cu,c->r[29]); // 80222B80
L_80222B84:;
  W32(c->r[30]+0x00000008u,c->r[28]); // 80222B84
  c->r[0]=0u+0x00000000u; // 80222B88
  c->r[3]=c->r[30]|c->r[30]; // 80222B8C
  c->r[4]=c->r[28]|c->r[28]; // 80222B90
  W32(c->r[28]+0x00000008u,c->r[0]); // 80222B94
  c->r[0]=R32(c->r[30]+0x00000004u); // 80222B98
  W32(c->r[30]+0x0000000Cu,c->r[0]); // 80222B9C
  c->lr=0x80222BA4u; f_8006306C(c); // 80222BA0
  c->r[3]=c->r[28]|c->r[28]; // 80222BA4
  goto L_80222DBC; // 80222BA8
L_80222BAC:;
  c->lr=0x80222BB0u; f_80220A30(c); // 80222BAC
  c->r[4]=c->r[3]|c->r[3]; // 80222BB0
  c->r[3]=c->r[30]|c->r[30]; // 80222BB4
  c->lr=0x80222BBCu; f_80062F4C(c); // 80222BB8
  c->r[0]=R8(c->r[30]+0x00000010u); // 80222BBC
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80222BC0
  c->r[3]=c->r[30]+c->r[0]; // 80222BC4
  c->r[28]=R32(c->r[3]+0x00000014u); // 80222BC8
  cmps(c,0,(int32_t)c->r[28],0); // 80222BCC
  if (crb(c,2)) { goto L_80222BF8; } // 80222BD0
  c->r[29]=0u+0x00000000u; // 80222BD4
  W32(c->r[31]+0x00000064u,c->r[1]); // 80222BD8
  W8(c->r[31]+0x00000010u,c->r[29]); // 80222BDC
  c->lr=0x80222BE4u; f_80220A30(c); // 80222BE0
  W32(c->r[28]+0x00000000u,c->r[3]); // 80222BE4
  c->r[0]=c->r[13]+0xFFFF9150u; // 80222BE8
  W32(c->r[28]+0x00000004u,c->r[0]); // 80222BEC
  W32(c->r[28]+0x00000008u,c->r[29]); // 80222BF0
  W32(c->r[28]+0x0000000Cu,c->r[29]); // 80222BF4
L_80222BF8:;
  W32(c->r[30]+0x00000008u,c->r[28]); // 80222BF8
  c->r[0]=0u+0x00000000u; // 80222BFC
  c->r[3]=c->r[30]|c->r[30]; // 80222C00
  c->r[4]=c->r[28]|c->r[28]; // 80222C04
  W32(c->r[28]+0x00000008u,c->r[0]); // 80222C08
  c->r[0]=R32(c->r[30]+0x00000004u); // 80222C0C
  W32(c->r[30]+0x0000000Cu,c->r[0]); // 80222C10
  c->lr=0x80222C18u; f_8006306C(c); // 80222C14
  c->r[3]=c->r[28]|c->r[28]; // 80222C18
  goto L_80222DBC; // 80222C1C
L_80222C20:;
  c->lr=0x80222C24u; f_8022098C(c); // 80222C20
  c->r[4]=c->r[3]|c->r[3]; // 80222C24
  c->r[3]=c->r[30]|c->r[30]; // 80222C28
  c->lr=0x80222C30u; f_80062F4C(c); // 80222C2C
  c->r[0]=R8(c->r[30]+0x00000010u); // 80222C30
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80222C34
  c->r[3]=c->r[30]+c->r[0]; // 80222C38
  c->r[28]=R32(c->r[3]+0x00000014u); // 80222C3C
  cmps(c,0,(int32_t)c->r[28],0); // 80222C40
  if (crb(c,2)) { goto L_80222C6C; } // 80222C44
  c->r[29]=0u+0x00000000u; // 80222C48
  W32(c->r[31]+0x0000004Cu,c->r[1]); // 80222C4C
  W8(c->r[31]+0x0000000Cu,c->r[29]); // 80222C50
  c->lr=0x80222C58u; f_8022098C(c); // 80222C54
  W32(c->r[28]+0x00000000u,c->r[3]); // 80222C58
  c->r[0]=c->r[13]+0xFFFF914Cu; // 80222C5C
  W32(c->r[28]+0x00000004u,c->r[0]); // 80222C60
  W32(c->r[28]+0x00000008u,c->r[29]); // 80222C64
  W32(c->r[28]+0x0000000Cu,c->r[29]); // 80222C68
L_80222C6C:;
  W32(c->r[30]+0x00000008u,c->r[28]); // 80222C6C
  c->r[0]=0u+0x00000000u; // 80222C70
  c->r[3]=c->r[30]|c->r[30]; // 80222C74
  c->r[4]=c->r[28]|c->r[28]; // 80222C78
  W32(c->r[28]+0x00000008u,c->r[0]); // 80222C7C
  c->r[0]=R32(c->r[30]+0x00000004u); // 80222C80
  W32(c->r[30]+0x0000000Cu,c->r[0]); // 80222C84
  c->lr=0x80222C8Cu; f_8006306C(c); // 80222C88
  c->r[3]=c->r[28]|c->r[28]; // 80222C8C
  goto L_80222DBC; // 80222C90
L_80222C94:;
  c->lr=0x80222C98u; f_802208E8(c); // 80222C94
  c->r[4]=c->r[3]|c->r[3]; // 80222C98
  c->r[3]=c->r[30]|c->r[30]; // 80222C9C
  c->lr=0x80222CA4u; f_80062F4C(c); // 80222CA0
  c->r[0]=R8(c->r[30]+0x00000010u); // 80222CA4
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80222CA8
  c->r[3]=c->r[30]+c->r[0]; // 80222CAC
  c->r[28]=R32(c->r[3]+0x00000014u); // 80222CB0
  cmps(c,0,(int32_t)c->r[28],0); // 80222CB4
  if (crb(c,2)) { goto L_80222CE0; } // 80222CB8
  c->r[29]=0u+0x00000000u; // 80222CBC
  W32(c->r[31]+0x00000034u,c->r[1]); // 80222CC0
  W8(c->r[31]+0x00000008u,c->r[29]); // 80222CC4
  c->lr=0x80222CCCu; f_802208E8(c); // 80222CC8
  W32(c->r[28]+0x00000000u,c->r[3]); // 80222CCC
  c->r[0]=c->r[13]+0xFFFF9148u; // 80222CD0
  W32(c->r[28]+0x00000004u,c->r[0]); // 80222CD4
  W32(c->r[28]+0x00000008u,c->r[29]); // 80222CD8
  W32(c->r[28]+0x0000000Cu,c->r[29]); // 80222CDC
L_80222CE0:;
  W32(c->r[30]+0x00000008u,c->r[28]); // 80222CE0
  c->r[0]=0u+0x00000000u; // 80222CE4
  c->r[3]=c->r[30]|c->r[30]; // 80222CE8
  c->r[4]=c->r[28]|c->r[28]; // 80222CEC
  W32(c->r[28]+0x00000008u,c->r[0]); // 80222CF0
  c->r[0]=R32(c->r[30]+0x00000004u); // 80222CF4
  W32(c->r[30]+0x0000000Cu,c->r[0]); // 80222CF8
  c->lr=0x80222D00u; f_8006306C(c); // 80222CFC
  c->r[3]=c->r[28]|c->r[28]; // 80222D00
  goto L_80222DBC; // 80222D04
L_80222D08:;
  c->r[0]=R32(c->r[3]+0x00000800u); // 80222D08
  cmps(c,0,(int32_t)c->r[0],0); // 80222D0C
  if (crb(c,2)) { goto L_80222D28; } // 80222D10
  cmps(c,0,(int32_t)c->r[0],1); // 80222D14
  if (crb(c,2)) { goto L_80222D34; } // 80222D18
  cmps(c,0,(int32_t)c->r[0],2); // 80222D1C
  if (crb(c,2)) { goto L_80222D40; } // 80222D20
  goto L_80222D48; // 80222D24
L_80222D28:;
  c->lr=0x80222D2Cu; f_80222530(c); // 80222D28
  c->r[28]=c->r[3]|c->r[3]; // 80222D2C
  goto L_80222D48; // 80222D30
L_80222D34:;
  c->lr=0x80222D38u; f_8022264C(c); // 80222D34
  c->r[28]=c->r[3]|c->r[3]; // 80222D38
  goto L_80222D48; // 80222D3C
L_80222D40:;
  c->lr=0x80222D44u; f_80222830(c); // 80222D40
  c->r[28]=c->r[3]|c->r[3]; // 80222D44
L_80222D48:;
  c->r[0]=R32(c->r[30]+0x00000800u); // 80222D48
  cmps(c,0,(int32_t)c->r[0],1); // 80222D4C
  if (!crb(c,2)) { goto L_80222DA0; } // 80222D50
  c->r[0]=R16(c->r[30]+0x0000082Eu); // 80222D54
  cmpu(c,0,c->r[0],0x00000003u); // 80222D58
  if (!crb(c,2)) { goto L_80222D8C; } // 80222D5C
  c->r[3]=c->r[30]+0x000007CCu; // 80222D60
  c->lr=0x80222D68u; f_80222A38(c); // 80222D64
  {uint32_t ea=c->r[2]+0xFFFFE054u; c->f[0]=c->ps1[0]=RF32(ea);} // 80222D68
  fcmp(c,0,c->f[1],c->f[0]); // 80222D6C
  setcrb(c,2,crb(c,1)|crb(c,2)); // 80222D70
  if (!crb(c,2)) { goto L_80222D8C; } // 80222D74
  c->r[4]=0u+0x806A0000u; // 80222D78
  c->r[3]=c->r[30]+0x00000848u; // 80222D7C
  c->r[4]=c->r[4]+0xFFFF98D8u; // 80222D80
  c->r[4]=c->r[4]+0x000000B8u; // 80222D84
  c->lr=0x80222D8Cu; f_80258A74(c); // 80222D88
L_80222D8C:;
  c->r[3]=R16(c->r[30]+0x0000082Eu); // 80222D8C
  cmpu(c,0,c->r[3],0x000000FFu); // 80222D90
  if (!crb(c,0)) { goto L_80222DA0; } // 80222D94
  c->r[0]=c->r[3]+0x00000001u; // 80222D98
  W16(c->r[30]+0x0000082Eu,c->r[0]); // 80222D9C
L_80222DA0:;
  cmps(c,0,(int32_t)c->r[28],0); // 80222DA0
  if (crb(c,2)) { goto L_80222DAC; } // 80222DA4
  goto L_80222DB8; // 80222DA8
L_80222DAC:;
  c->r[3]=c->r[30]|c->r[30]; // 80222DAC
  c->lr=0x80222DB4u; f_8005E0F8(c); // 80222DB0
  c->r[28]=c->r[3]|c->r[3]; // 80222DB4
L_80222DB8:;
  c->r[3]=c->r[28]|c->r[28]; // 80222DB8
L_80222DBC:;
  c->r[10]=c->r[31]|c->r[31]; // 80222DBC
  c->r[11]=c->r[10]+0x000000B0u; // 80222DC0
  c->lr=0x80222DC8u; { c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80222DC4
  c->r[10]=R32(c->r[1]+0x00000000u); // 80222DC8
  c->r[0]=R32(c->r[10]+0x00000004u); // 80222DCC
  c->r[1]=c->r[10]|c->r[10]; // 80222DD0
  c->lr=c->r[0]; // 80222DD4
  return; // 80222DD8
}

// fn_80222DDC
void f_80222DDC(Ctx* __restrict c) {
  trace_call(0x80222DDCu);
  {uint32_t ea=c->r[1]+0xFFFFFF80u; W32(ea,c->r[1]); c->r[1]=ea;} // 80222DDC
  c->r[0]=c->lr; // 80222DE0
  W32(c->r[1]+0x00000084u,c->r[0]); // 80222DE4
  {uint32_t ea=c->r[1]+0x00000070u; WF64(ea,c->f[31]);} // 80222DE8
  {uint32_t ea=c->r[1]+0x00000078u; psq_store(c,31,ea,0,0);} // 80222DEC
  {uint32_t ea=c->r[1]+0x00000060u; WF64(ea,c->f[30]);} // 80222DF0
  {uint32_t ea=c->r[1]+0x00000068u; psq_store(c,30,ea,0,0);} // 80222DF4
  {uint32_t ea=c->r[1]+0x00000050u; WF64(ea,c->f[29]);} // 80222DF8
  {uint32_t ea=c->r[1]+0x00000058u; psq_store(c,29,ea,0,0);} // 80222DFC
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[28]);} // 80222E00
  {uint32_t ea=c->r[1]+0x00000048u; psq_store(c,28,ea,0,0);} // 80222E04
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[27]);} // 80222E08
  {uint32_t ea=c->r[1]+0x00000038u; psq_store(c,27,ea,0,0);} // 80222E0C
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 80222E10
  W32(c->r[1]+0x00000028u,c->r[30]); // 80222E14
  c->r[30]=c->r[3]|c->r[3]; // 80222E18
  c->r[3]=R32(c->r[3]+0x00000434u); // 80222E1C
  c->lr=0x80222E24u; f_800FE6EC(c); // 80222E20
  c->r[0]=R32(c->r[30]+0x00000804u); // 80222E24
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[3]); // 80222E28
  if (crb(c,0)) { goto L_80222E50; } // 80222E2C
  c->r[0]=R8(c->r[30]+0x00000808u); // 80222E30
  cmps(c,0,(int32_t)c->r[0],0); // 80222E34
  if (crb(c,2)) { goto L_80222E48; } // 80222E38
  c->r[0]=0u+0x00000000u; // 80222E3C
  W32(c->r[30]+0x00000804u,c->r[0]); // 80222E40
  goto L_80222E50; // 80222E44
L_80222E48:;
  c->r[3]=0u+0x00000000u; // 80222E48
  goto L_80223018; // 80222E4C
L_80222E50:;
  {uint32_t ea=c->r[2]+0xFFFFE060u; c->f[28]=RF64(ea);} // 80222E50
  c->r[31]=0u+0x43300000u; // 80222E54
  {uint32_t ea=c->r[2]+0xFFFFE058u; c->f[29]=c->ps1[29]=RF32(ea);} // 80222E58
  {uint32_t ea=c->r[2]+0xFFFFE05Cu; c->f[30]=c->ps1[30]=RF32(ea);} // 80222E5C
  {uint32_t ea=c->r[2]+0xFFFFE044u; c->f[31]=c->ps1[31]=RF32(ea);} // 80222E60
L_80222E64:;
  c->r[4]=R32(c->r[30]+0x00000434u); // 80222E64
  c->r[3]=c->r[1]+0x00000008u; // 80222E68
  c->r[5]=R32(c->r[30]+0x00000804u); // 80222E6C
  c->lr=0x80222E74u; f_800FE734(c); // 80222E70
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 80222E74
  cmps(c,0,(int32_t)c->r[0],0); // 80222E78
  if (!crb(c,2)) { goto L_80222E88; } // 80222E7C
  c->r[3]=0u+0x00000000u; // 80222E80
  goto L_80223018; // 80222E84
L_80222E88:;
  c->r[3]=R32(c->r[30]+0x00000804u); // 80222E88
  c->r[0]=c->r[3]+0x00000001u; // 80222E8C
  W32(c->r[30]+0x00000804u,c->r[0]); // 80222E90
  {uint32_t ea=c->r[1]+0x00000010u; c->f[27]=c->ps1[27]=RF32(ea);} // 80222E94
  c->lr=0x80222E9Cu; f_803B220C(c); // 80222E98
  c->r[0]=c->r[3]^0x80000000u; // 80222E9C
  W32(c->r[1]+0x00000024u,c->r[0]); // 80222EA0
  W32(c->r[1]+0x00000020u,c->r[31]); // 80222EA4
  {uint32_t ea=c->r[1]+0x00000020u; c->f[0]=RF64(ea);} // 80222EA8
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[28]); // 80222EAC
  c->f[0]=c->ps1[0]=S(c->f[0]/c->f[29]); // 80222EB0
  c->f[0]=c->ps1[0]=S(std::fma(c->f[30],c->f[0],c->f[31])); // 80222EB4
  fcmp(c,0,c->f[27],c->f[0]); // 80222EB8
  setcrb(c,2,crb(c,1)|crb(c,2)); // 80222EBC
  c->r[0]=c->cr; // 80222EC0
  c->r[0]=rotl(c->r[0],3)&0x00000001u; cr0(c,c->r[0]); // 80222EC4
  if (crb(c,2)) { IRQCHK(c); goto L_80222E64; } // 80222EC8
  c->r[0]=R32(c->r[1]+0x00000008u); // 80222ECC
  cmps(c,0,(int32_t)c->r[0],0); // 80222ED0
  if (!crb(c,0)) { goto L_80222EE0; } // 80222ED4
  c->r[3]=0u+0x00000000u; // 80222ED8
  goto L_80223018; // 80222EDC
L_80222EE0:;
  cmpu(c,0,c->r[0],0x00000011u); // 80222EE0
  if (crb(c,1)) { goto L_80223014; } // 80222EE4
  c->r[3]=0u+0x806E0000u; // 80222EE8
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80222EEC
  c->r[3]=c->r[3]+0x000072A0u; // 80222EF0
  c->r[3]=R32(c->r[3]+c->r[0]); // 80222EF4
  c->ctr=c->r[3]; // 80222EF8
  if (true) { switch (c->ctr) { case 0x80222F00u: goto L_80222F00; case 0x80222F08u: goto L_80222F08; case 0x80222F14u: goto L_80222F14; case 0x80222F24u: goto L_80222F24; case 0x80222F34u: goto L_80222F34; case 0x80222F44u: goto L_80222F44; case 0x80222F54u: goto L_80222F54; case 0x80222F64u: goto L_80222F64; case 0x80222F74u: goto L_80222F74; case 0x80222F84u: goto L_80222F84; case 0x80222F94u: goto L_80222F94; case 0x80222FA4u: goto L_80222FA4; case 0x80222FB4u: goto L_80222FB4; case 0x80222FC4u: goto L_80222FC4; case 0x80222FD4u: goto L_80222FD4; case 0x80222FE4u: goto L_80222FE4; case 0x80222FF4u: goto L_80222FF4; case 0x80223004u: goto L_80223004; default: break; } dispatch(c,c->ctr); return; } // 80222EFC
L_80222F00:;
  c->r[3]=0u+0x00000000u; // 80222F00
  goto L_80223018; // 80222F04
L_80222F08:;
  c->r[3]=c->r[30]|c->r[30]; // 80222F08
  c->lr=0x80222F10u; f_8005E0F8(c); // 80222F0C
  goto L_80223018; // 80222F10
L_80222F14:;
  c->r[3]=c->r[30]|c->r[30]; // 80222F14
  c->r[4]=0u+0x00000000u; // 80222F18
  c->lr=0x80222F20u; f_80223058(c); // 80222F1C
  goto L_80223018; // 80222F20
L_80222F24:;
  c->r[3]=c->r[30]|c->r[30]; // 80222F24
  c->r[4]=0u+0x00000001u; // 80222F28
  c->lr=0x80222F30u; f_80223058(c); // 80222F2C
  goto L_80223018; // 80222F30
L_80222F34:;
  c->r[3]=c->r[30]|c->r[30]; // 80222F34
  c->r[4]=0u+0x00000002u; // 80222F38
  c->lr=0x80222F40u; f_80223058(c); // 80222F3C
  goto L_80223018; // 80222F40
L_80222F44:;
  c->r[3]=c->r[30]|c->r[30]; // 80222F44
  c->r[4]=0u+0x00000003u; // 80222F48
  c->lr=0x80222F50u; f_80223058(c); // 80222F4C
  goto L_80223018; // 80222F50
L_80222F54:;
  c->r[3]=c->r[30]|c->r[30]; // 80222F54
  c->r[4]=0u+0x00000004u; // 80222F58
  c->lr=0x80222F60u; f_80223058(c); // 80222F5C
  goto L_80223018; // 80222F60
L_80222F64:;
  c->r[3]=c->r[30]|c->r[30]; // 80222F64
  c->r[4]=0u+0x00000005u; // 80222F68
  c->lr=0x80222F70u; f_80223058(c); // 80222F6C
  goto L_80223018; // 80222F70
L_80222F74:;
  c->r[3]=c->r[30]|c->r[30]; // 80222F74
  c->r[4]=0u+0x00000006u; // 80222F78
  c->lr=0x80222F80u; f_80223058(c); // 80222F7C
  goto L_80223018; // 80222F80
L_80222F84:;
  c->r[3]=c->r[30]|c->r[30]; // 80222F84
  c->r[4]=0u+0x00000007u; // 80222F88
  c->lr=0x80222F90u; f_80223058(c); // 80222F8C
  goto L_80223018; // 80222F90
L_80222F94:;
  c->r[3]=c->r[30]|c->r[30]; // 80222F94
  c->r[4]=0u+0x00000008u; // 80222F98
  c->lr=0x80222FA0u; f_80223058(c); // 80222F9C
  goto L_80223018; // 80222FA0
L_80222FA4:;
  c->r[3]=c->r[30]|c->r[30]; // 80222FA4
  c->r[4]=0u+0x00000009u; // 80222FA8
  c->lr=0x80222FB0u; f_80223058(c); // 80222FAC
  goto L_80223018; // 80222FB0
L_80222FB4:;
  c->r[3]=c->r[30]|c->r[30]; // 80222FB4
  c->r[4]=0u+0x0000000Au; // 80222FB8
  c->lr=0x80222FC0u; f_80223058(c); // 80222FBC
  goto L_80223018; // 80222FC0
L_80222FC4:;
  c->r[3]=c->r[30]|c->r[30]; // 80222FC4
  c->r[4]=0u+0x0000000Bu; // 80222FC8
  c->lr=0x80222FD0u; f_80223058(c); // 80222FCC
  goto L_80223018; // 80222FD0
L_80222FD4:;
  c->r[3]=c->r[30]|c->r[30]; // 80222FD4
  c->r[4]=0u+0x0000000Cu; // 80222FD8
  c->lr=0x80222FE0u; f_80223058(c); // 80222FDC
  goto L_80223018; // 80222FE0
L_80222FE4:;
  c->r[3]=c->r[30]|c->r[30]; // 80222FE4
  c->r[4]=0u+0x0000000Du; // 80222FE8
  c->lr=0x80222FF0u; f_80223058(c); // 80222FEC
  goto L_80223018; // 80222FF0
L_80222FF4:;
  c->r[3]=c->r[30]|c->r[30]; // 80222FF4
  c->r[4]=0u+0x0000000Eu; // 80222FF8
  c->lr=0x80223000u; f_80223058(c); // 80222FFC
  goto L_80223018; // 80223000
L_80223004:;
  c->r[3]=c->r[30]|c->r[30]; // 80223004
  c->r[4]=0u+0x0000000Fu; // 80223008
  c->lr=0x80223010u; f_80223058(c); // 8022300C
  goto L_80223018; // 80223010
L_80223014:;
  c->r[3]=0u+0x00000000u; // 80223014
L_80223018:;
  c->r[0]=R32(c->r[1]+0x00000084u); // 80223018
  {uint32_t ea=c->r[1]+0x00000078u; psq_load(c,31,ea,0,0);} // 8022301C
  {uint32_t ea=c->r[1]+0x00000070u; c->f[31]=RF64(ea);} // 80223020
  {uint32_t ea=c->r[1]+0x00000068u; psq_load(c,30,ea,0,0);} // 80223024
  {uint32_t ea=c->r[1]+0x00000060u; c->f[30]=RF64(ea);} // 80223028
  {uint32_t ea=c->r[1]+0x00000058u; psq_load(c,29,ea,0,0);} // 8022302C
  {uint32_t ea=c->r[1]+0x00000050u; c->f[29]=RF64(ea);} // 80223030
  {uint32_t ea=c->r[1]+0x00000048u; psq_load(c,28,ea,0,0);} // 80223034
  {uint32_t ea=c->r[1]+0x00000040u; c->f[28]=RF64(ea);} // 80223038
  {uint32_t ea=c->r[1]+0x00000038u; psq_load(c,27,ea,0,0);} // 8022303C
  {uint32_t ea=c->r[1]+0x00000030u; c->f[27]=RF64(ea);} // 80223040
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 80223044
  c->r[30]=R32(c->r[1]+0x00000028u); // 80223048
  c->lr=c->r[0]; // 8022304C
  c->r[1]=c->r[1]+0x00000080u; // 80223050
  return; // 80223054
}

// fn_80223058
void f_80223058(Ctx* __restrict c) {
  trace_call(0x80223058u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80223058
  c->r[0]=c->lr; // 8022305C
  W32(c->r[1]+0x00000044u,c->r[0]); // 80223060
  {uint32_t ea=c->r[1]+0x00000030u; for(int i=28;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 80223064
  c->r[31]=c->r[1]|c->r[1]; // 80223068
  c->r[28]=c->r[3]|c->r[3]; // 8022306C
  W32(c->r[3]+0x000007F4u,c->r[4]); // 80223070
  c->lr=0x80223078u; f_80061044(c); // 80223074
  c->r[4]=c->r[3]|c->r[3]; // 80223078
  c->r[3]=c->r[28]|c->r[28]; // 8022307C
  c->lr=0x80223084u; f_80062F4C(c); // 80223080
  c->r[0]=R8(c->r[28]+0x00000010u); // 80223084
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80223088
  c->r[3]=c->r[28]+c->r[0]; // 8022308C
  c->r[29]=R32(c->r[3]+0x00000014u); // 80223090
  cmps(c,0,(int32_t)c->r[29],0); // 80223094
  if (crb(c,2)) { goto L_802230D0; } // 80223098
  c->r[30]=0u+0x00000000u; // 8022309C
  W32(c->r[31]+0x00000024u,c->r[1]); // 802230A0
  W8(c->r[31]+0x00000008u,c->r[30]); // 802230A4
  c->lr=0x802230ACu; f_80061044(c); // 802230A8
  W32(c->r[29]+0x00000000u,c->r[3]); // 802230AC
  c->r[0]=c->r[13]+0xFFFF80D0u; // 802230B0
  c->r[3]=c->r[29]+0x00000010u; // 802230B4
  c->r[4]=0u+0x00000000u; // 802230B8
  W32(c->r[29]+0x00000004u,c->r[0]); // 802230BC
  c->r[5]=0u+0x00000010u; // 802230C0
  W32(c->r[29]+0x00000008u,c->r[30]); // 802230C4
  W32(c->r[29]+0x0000000Cu,c->r[30]); // 802230C8
  c->lr=0x802230D0u; f_800043EC(c); // 802230CC
L_802230D0:;
  W32(c->r[28]+0x00000008u,c->r[29]); // 802230D0
  c->r[0]=0u+0x00000000u; // 802230D4
  c->r[3]=c->r[28]|c->r[28]; // 802230D8
  c->r[4]=c->r[29]|c->r[29]; // 802230DC
  W32(c->r[29]+0x00000008u,c->r[0]); // 802230E0
  c->r[0]=R32(c->r[28]+0x00000004u); // 802230E4
  W32(c->r[28]+0x0000000Cu,c->r[0]); // 802230E8
  c->lr=0x802230F0u; f_8006306C(c); // 802230EC
  c->r[10]=c->r[31]|c->r[31]; // 802230F0
  c->r[3]=c->r[29]|c->r[29]; // 802230F4
  {uint32_t ea=c->r[10]+0x00000030u; for(int i=28;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 802230F8
  c->r[10]=R32(c->r[1]+0x00000000u); // 802230FC
  c->r[0]=R32(c->r[10]+0x00000004u); // 80223100
  c->r[1]=c->r[10]|c->r[10]; // 80223104
  c->lr=c->r[0]; // 80223108
  return; // 8022310C
}

// fn_80223110
void f_80223110(Ctx* __restrict c) {
  trace_call(0x80223110u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80223110
  c->r[0]=c->lr; // 80223114
  W32(c->r[1]+0x00000014u,c->r[0]); // 80223118
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8022311C
  c->r[31]=c->r[3]|c->r[3]; // 80223120
  c->r[12]=R32(c->r[3]+0x0000001Cu); // 80223124
  c->r[12]=R32(c->r[12]+0x0000011Cu); // 80223128
  c->ctr=c->r[12]; // 8022312C
  if (true) { c->lr=0x80223134u; dispatch(c,c->ctr); } // 80223130
  cmps(c,0,(int32_t)c->r[3],0); // 80223134
  if (!crb(c,2)) { goto L_80223144; } // 80223138
  c->r[3]=0u+0x00000000u; // 8022313C
  goto L_80223178; // 80223140
L_80223144:;
  c->r[3]=R32(c->r[31]+0x0000044Cu); // 80223144
  c->r[4]=0u+0x00000016u; // 80223148
  c->r[3]=c->r[3]+0x000000C4u; // 8022314C
  c->lr=0x80223154u; f_8005CDE8(c); // 80223150
  cmps(c,0,(int32_t)c->r[3],0); // 80223154
  if (crb(c,2)) { goto L_80223164; } // 80223158
  c->r[3]=0u+0x00000000u; // 8022315C
  goto L_80223178; // 80223160
L_80223164:;
  c->r[3]=c->r[31]+0x000007FCu; // 80223164
  c->r[4]=0u+0x00000002u; // 80223168
  c->lr=0x80223170u; f_8005CDE8(c); // 8022316C
  c->r[0]=cntlz(c->r[3]); // 80223170
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 80223174
L_80223178:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80223178
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8022317C
  c->lr=c->r[0]; // 80223180
  c->r[1]=c->r[1]+0x00000010u; // 80223184
  return; // 80223188
}

// fn_8022318C
void f_8022318C(Ctx* __restrict c) {
  trace_call(0x8022318Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8022318C
  c->r[0]=c->lr; // 80223190
  W32(c->r[1]+0x00000054u,c->r[0]); // 80223194
  {uint32_t ea=c->r[1]+0x00000040u; for(int i=28;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 80223198
  c->r[31]=c->r[1]|c->r[1]; // 8022319C
  c->r[30]=c->r[3]|c->r[3]; // 802231A0
  c->r[0]=R8(c->r[3]+0x000004C0u); // 802231A4
  cmps(c,0,(int32_t)c->r[0],0); // 802231A8
  if (crb(c,2)) { goto L_80223318; } // 802231AC
  c->r[12]=R32(c->r[3]+0x0000001Cu); // 802231B0
  c->r[12]=R32(c->r[12]+0x00000110u); // 802231B4
  c->ctr=c->r[12]; // 802231B8
  if (true) { c->lr=0x802231C0u; dispatch(c,c->ctr); } // 802231BC
  cmps(c,0,(int32_t)c->r[3],0); // 802231C0
  if (crb(c,2)) { goto L_80223318; } // 802231C4
  c->r[0]=R32(c->r[30]+0x00000674u); // 802231C8
  c->r[28]=0u+0x00000001u; // 802231CC
  cmps(c,0,(int32_t)c->r[0],4); // 802231D0
  if (!crb(c,2)) { goto L_802231EC; } // 802231D4
  c->r[0]=R8(c->r[30]+0x000007E0u); // 802231D8
  cmps(c,0,(int32_t)c->r[0],0); // 802231DC
  if (crb(c,2)) { goto L_802232A0; } // 802231E0
  c->r[28]=0u+0x00000002u; // 802231E4
  goto L_802232A0; // 802231E8
L_802231EC:;
  cmps(c,0,(int32_t)c->r[0],5); // 802231EC
  if (!crb(c,2)) { goto L_80223208; } // 802231F0
  c->r[0]=R8(c->r[30]+0x000007E0u); // 802231F4
  cmps(c,0,(int32_t)c->r[0],0); // 802231F8
  if (crb(c,2)) { goto L_802232A0; } // 802231FC
  c->r[28]=0u+0x00000002u; // 80223200
  goto L_802232A0; // 80223204
L_80223208:;
  cmps(c,0,(int32_t)c->r[0],8); // 80223208
  if (!crb(c,2)) { goto L_802232A0; } // 8022320C
  c->r[3]=c->r[30]+0x000007FCu; // 80223210
  c->r[4]=0u+0x00000001u; // 80223214
  c->lr=0x8022321Cu; f_8005CDE8(c); // 80223218
  cmps(c,0,(int32_t)c->r[3],0); // 8022321C
  if (crb(c,2)) { goto L_802232A0; } // 80223220
  c->r[0]=R8(c->r[30]+0x000007E0u); // 80223224
  cmps(c,0,(int32_t)c->r[0],0); // 80223228
  if (crb(c,2)) { goto L_802232A0; } // 8022322C
  c->lr=0x80223234u; f_802207A0(c); // 80223230
  c->r[4]=c->r[3]|c->r[3]; // 80223234
  c->r[3]=c->r[30]|c->r[30]; // 80223238
  c->lr=0x80223240u; f_80062F4C(c); // 8022323C
  c->r[0]=R8(c->r[30]+0x00000010u); // 80223240
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80223244
  c->r[3]=c->r[30]+c->r[0]; // 80223248
  c->r[28]=R32(c->r[3]+0x00000014u); // 8022324C
  cmps(c,0,(int32_t)c->r[28],0); // 80223250
  if (crb(c,2)) { goto L_8022327C; } // 80223254
  c->r[29]=0u+0x00000000u; // 80223258
  W32(c->r[31]+0x0000003Cu,c->r[1]); // 8022325C
  W8(c->r[31]+0x0000000Cu,c->r[29]); // 80223260
  c->lr=0x80223268u; f_802207A0(c); // 80223264
  W32(c->r[28]+0x00000000u,c->r[3]); // 80223268
  c->r[0]=c->r[13]+0xFFFF9140u; // 8022326C
  W32(c->r[28]+0x00000004u,c->r[0]); // 80223270
  W32(c->r[28]+0x00000008u,c->r[29]); // 80223274
  W32(c->r[28]+0x0000000Cu,c->r[29]); // 80223278
L_8022327C:;
  W32(c->r[30]+0x00000008u,c->r[28]); // 8022327C
  c->r[0]=0u+0x00000000u; // 80223280
  c->r[3]=c->r[30]|c->r[30]; // 80223284
  c->r[4]=c->r[28]|c->r[28]; // 80223288
  W32(c->r[28]+0x00000008u,c->r[0]); // 8022328C
  c->r[0]=R32(c->r[30]+0x00000004u); // 80223290
  W32(c->r[30]+0x0000000Cu,c->r[0]); // 80223294
  c->lr=0x8022329Cu; f_8006306C(c); // 80223298
  goto L_80223318; // 8022329C
L_802232A0:;
  cmps(c,0,(int32_t)c->r[28],1); // 802232A0
  if (crb(c,2)) { goto L_80223318; } // 802232A4
  W32(c->r[30]+0x000007F8u,c->r[28]); // 802232A8
  c->lr=0x802232B0u; f_80062E5C(c); // 802232AC
  c->r[4]=c->r[3]|c->r[3]; // 802232B0
  c->r[3]=c->r[30]|c->r[30]; // 802232B4
  c->lr=0x802232BCu; f_80062F4C(c); // 802232B8
  c->r[0]=R8(c->r[30]+0x00000010u); // 802232BC
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 802232C0
  c->r[3]=c->r[30]+c->r[0]; // 802232C4
  c->r[28]=R32(c->r[3]+0x00000014u); // 802232C8
  cmps(c,0,(int32_t)c->r[28],0); // 802232CC
  if (crb(c,2)) { goto L_802232F8; } // 802232D0
  c->r[29]=0u+0x00000000u; // 802232D4
  W32(c->r[31]+0x00000024u,c->r[1]); // 802232D8
  W8(c->r[31]+0x00000008u,c->r[29]); // 802232DC
  c->lr=0x802232E4u; f_80062E5C(c); // 802232E0
  W32(c->r[28]+0x00000000u,c->r[3]); // 802232E4
  c->r[0]=c->r[13]+0xFFFF80CCu; // 802232E8
  W32(c->r[28]+0x00000004u,c->r[0]); // 802232EC
  W32(c->r[28]+0x00000008u,c->r[29]); // 802232F0
  W32(c->r[28]+0x0000000Cu,c->r[29]); // 802232F4
L_802232F8:;
  W32(c->r[30]+0x00000008u,c->r[28]); // 802232F8
  c->r[0]=0u+0x00000000u; // 802232FC
  c->r[3]=c->r[30]|c->r[30]; // 80223300
  c->r[4]=c->r[28]|c->r[28]; // 80223304
  W32(c->r[28]+0x00000008u,c->r[0]); // 80223308
  c->r[0]=R32(c->r[30]+0x00000004u); // 8022330C
  W32(c->r[30]+0x0000000Cu,c->r[0]); // 80223310
  c->lr=0x80223318u; f_8006306C(c); // 80223314
L_80223318:;
  c->r[10]=c->r[31]|c->r[31]; // 80223318
  {uint32_t ea=c->r[10]+0x00000040u; for(int i=28;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 8022331C
  c->r[10]=R32(c->r[1]+0x00000000u); // 80223320
  c->r[0]=R32(c->r[10]+0x00000004u); // 80223324
  c->r[1]=c->r[10]|c->r[10]; // 80223328
  c->lr=c->r[0]; // 8022332C
  return; // 80223330
}

// fn_80223334
void f_80223334(Ctx* __restrict c) {
  trace_call(0x80223334u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80223334
  c->r[0]=c->lr; // 80223338
  c->r[5]=0u+0x806A0000u; // 8022333C
  c->r[4]=0u+0x00000000u; // 80223340
  W32(c->r[1]+0x00000024u,c->r[0]); // 80223344
  c->r[0]=0u+0x00000004u; // 80223348
  c->r[5]=c->r[5]+0xFFFF9178u; // 8022334C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80223350
  c->r[31]=0u+0x00000000u; // 80223354
  W32(c->r[1]+0x00000018u,c->r[30]); // 80223358
  c->r[30]=c->r[3]|c->r[3]; // 8022335C
  c->ctr=c->r[0]; // 80223360
L_80223364:;
  c->r[6]=R32(c->r[3]+0x00000770u); // 80223364
  c->r[0]=R32(c->r[5]+c->r[4]); // 80223368
  cmps(c,0,(int32_t)c->r[6],(int32_t)c->r[0]); // 8022336C
  if (!crb(c,2)) { goto L_8022337C; } // 80223370
  c->r[31]=c->r[5]+c->r[4]; // 80223374
  goto L_80223384; // 80223378
L_8022337C:;
  c->r[4]=c->r[4]+0x0000002Cu; // 8022337C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80223364; } // 80223380
L_80223384:;
  cmps(c,0,(int32_t)c->r[31],0); // 80223384
  if (!crb(c,2)) { goto L_802233A4; } // 80223388
  c->r[12]=R32(c->r[30]+0x0000001Cu); // 8022338C
  c->r[3]=c->r[30]|c->r[30]; // 80223390
  c->r[12]=R32(c->r[12]+0x000001B0u); // 80223394
  c->ctr=c->r[12]; // 80223398
  if (true) { c->lr=0x802233A0u; dispatch(c,c->ctr); } // 8022339C
  goto L_80223570; // 802233A0
L_802233A4:;
  c->r[3]=R32(c->r[3]+0x0000055Cu); // 802233A4
  cmps(c,0,(int32_t)c->r[3],0); // 802233A8
  if (crb(c,2)) { goto L_802233D8; } // 802233AC
  cmps(c,0,(int32_t)c->r[3],256); // 802233B0
  if (crb(c,2)) { goto L_80223440; } // 802233B4
  cmps(c,0,(int32_t)c->r[3],257); // 802233B8
  if (crb(c,2)) { goto L_80223464; } // 802233BC
  cmps(c,0,(int32_t)c->r[3],258); // 802233C0
  if (crb(c,2)) { goto L_802234A4; } // 802233C4
  c->r[0]=c->r[3]+0x00000000u; // 802233C8
  cmpu(c,0,c->r[0],0x00009000u); // 802233CC
  if (crb(c,2)) { goto L_802234C0; } // 802233D0
  goto L_80223514; // 802233D4
L_802233D8:;
  c->r[4]=R32(c->r[31]+0x00000010u); // 802233D8
  c->r[3]=c->r[30]|c->r[30]; // 802233DC
  c->r[5]=0u+0x00000000u; // 802233E0
  c->lr=0x802233E8u; f_80064744(c); // 802233E4
  c->r[4]=R32(c->r[31]+0x0000001Cu); // 802233E8
  c->r[3]=c->r[30]+0x000005C4u; // 802233EC
  {uint32_t ea=c->r[2]+0xFFFFE044u; c->f[1]=c->ps1[1]=RF32(ea);} // 802233F0
  {uint32_t ea=c->r[2]+0xFFFFE040u; c->f[2]=c->ps1[2]=RF32(ea);} // 802233F4
  {uint32_t ea=c->r[2]+0xFFFFE068u; c->f[3]=c->ps1[3]=RF32(ea);} // 802233F8
  c->lr=0x80223400u; f_800E24D0(c); // 802233FC
  c->r[4]=R32(c->r[31]+0x00000028u); // 80223400
  c->r[3]=c->r[30]+0x000000FCu; // 80223404
  c->r[5]=0u+0x00000000u; // 80223408
  c->lr=0x80223410u; f_802E6904(c); // 8022340C
  c->r[3]=R32(c->r[30]+0x0000044Cu); // 80223410
  c->r[4]=0u+0x00000003u; // 80223414
  c->r[5]=0u+0x00000001u; // 80223418
  c->r[3]=c->r[3]+0x000000C4u; // 8022341C
  c->lr=0x80223424u; f_8005DCA0(c); // 80223420
  c->r[3]=c->r[30]|c->r[30]; // 80223424
  c->lr=0x8022342Cu; f_802273D4(c); // 80223428
  c->r[3]=R32(c->r[30]+0x0000094Cu); // 8022342C
  c->r[0]=0u+0x00000100u; // 80223430
  W32(c->r[30]+0x0000055Cu,c->r[0]); // 80223434
  c->r[3]=rotl(c->r[3],0)&0x7FFFFFFFu; // 80223438
  W32(c->r[30]+0x0000094Cu,c->r[3]); // 8022343C
L_80223440:;
  c->r[3]=c->r[30]+0x000005C4u; // 80223440
  c->lr=0x80223448u; f_800E2B1C(c); // 80223444
  cmps(c,0,(int32_t)c->r[3],0); // 80223448
  if (crb(c,2)) { goto L_80223514; } // 8022344C
  c->r[3]=R32(c->r[30]+0x0000055Cu); // 80223450
  {uint32_t ea=c->r[2]+0xFFFFE040u; c->f[0]=c->ps1[0]=RF32(ea);} // 80223454
  c->r[0]=c->r[3]+0x00000001u; // 80223458
  {uint32_t ea=c->r[30]+0x00000668u; WF32(ea,c->f[0]);} // 8022345C
  W32(c->r[30]+0x0000055Cu,c->r[0]); // 80223460
L_80223464:;
  {uint32_t ea=c->r[30]+0x00000668u; c->f[1]=c->ps1[1]=RF32(ea);} // 80223464
  {uint32_t ea=c->r[31]+0x00000020u; c->f[0]=c->ps1[0]=RF32(ea);} // 80223468
  fcmp(c,0,c->f[1],c->f[0]); // 8022346C
  setcrb(c,2,crb(c,1)|crb(c,2)); // 80223470
  if (!crb(c,2)) { goto L_80223514; } // 80223474
  c->r[4]=R32(c->r[31]+0x00000024u); // 80223478
  cmps(c,0,(int32_t)c->r[4],0); // 8022347C
  if (crb(c,2)) { goto L_80223498; } // 80223480
  {uint32_t ea=c->r[2]+0xFFFFE044u; c->f[1]=c->ps1[1]=RF32(ea);} // 80223484
  c->r[3]=c->r[30]+0x000005C4u; // 80223488
  {uint32_t ea=c->r[2]+0xFFFFE040u; c->f[2]=c->ps1[2]=RF32(ea);} // 8022348C
  {uint32_t ea=c->r[2]+0xFFFFE068u; c->f[3]=c->ps1[3]=RF32(ea);} // 80223490
  c->lr=0x80223498u; f_800E24D0(c); // 80223494
L_80223498:;
  c->r[3]=R32(c->r[30]+0x0000055Cu); // 80223498
  c->r[0]=c->r[3]+0x00000001u; // 8022349C
  W32(c->r[30]+0x0000055Cu,c->r[0]); // 802234A0
L_802234A4:;
  c->r[3]=c->r[30]+0x000005C4u; // 802234A4
  c->lr=0x802234ACu; f_800E2B1C(c); // 802234A8
  cmps(c,0,(int32_t)c->r[3],0); // 802234AC
  if (crb(c,2)) { goto L_80223514; } // 802234B0
  c->r[3]=0u+0x00010000u; // 802234B4
  c->r[0]=c->r[3]+0xFFFF9000u; // 802234B8
  W32(c->r[30]+0x0000055Cu,c->r[0]); // 802234BC
L_802234C0:;
  c->r[4]=R32(c->r[31]+0x00000004u); // 802234C0
  c->r[3]=c->r[30]|c->r[30]; // 802234C4
  c->lr=0x802234CCu; f_80226A2C(c); // 802234C8
  c->r[0]=0u+0x0000000Au; // 802234CC
  W32(c->r[30]+0x00000774u,c->r[0]); // 802234D0
  c->r[4]=R32(c->r[31]+0x00000008u); // 802234D4
  cmps(c,0,(int32_t)c->r[4],4); // 802234D8
  if (crb(c,2)) { goto L_802234E8; } // 802234DC
  c->r[3]=c->r[30]|c->r[30]; // 802234E0
  c->lr=0x802234E8u; f_8022247C(c); // 802234E4
L_802234E8:;
  c->r[4]=R32(c->r[31]+0x0000000Cu); // 802234E8
  cmps(c,0,(int32_t)c->r[4],10); // 802234EC
  if (crb(c,2)) { goto L_802234FC; } // 802234F0
  c->r[3]=c->r[30]|c->r[30]; // 802234F4
  c->lr=0x802234FCu; f_802220E4(c); // 802234F8
L_802234FC:;
  c->r[12]=R32(c->r[30]+0x0000001Cu); // 802234FC
  c->r[3]=c->r[30]|c->r[30]; // 80223500
  c->r[12]=R32(c->r[12]+0x000001B0u); // 80223504
  c->ctr=c->r[12]; // 80223508
  if (true) { c->lr=0x80223510u; dispatch(c,c->ctr); } // 8022350C
  goto L_80223570; // 80223510
L_80223514:;
  c->r[0]=R32(c->r[30]+0x00000560u); // 80223514
  cmps(c,0,(int32_t)c->r[0],0); // 80223518
  if (!crb(c,2)) { goto L_80223570; } // 8022351C
  c->r[0]=R16(c->r[31]+0x00000014u); // 80223520
  cmps(c,0,(int32_t)c->r[0],0); // 80223524
  if (crb(c,2)) { goto L_80223570; } // 80223528
  c->r[3]=R32(c->r[30]+0x00000404u); // 8022352C
  c->lr=0x80223534u; f_802EA4B0(c); // 80223530
  c->r[3]=R16(c->r[31]+0x00000014u); // 80223534
  c->r[0]=0u+0x43300000u; // 80223538
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 8022353C
  {uint32_t ea=c->r[2]+0xFFFFE070u; c->f[2]=RF64(ea);} // 80223540
  W32(c->r[1]+0x00000008u,c->r[0]); // 80223544
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=RF64(ea);} // 80223548
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[2]); // 8022354C
  fcmp(c,0,c->f[1],c->f[0]); // 80223550
  setcrb(c,2,crb(c,1)|crb(c,2)); // 80223554
  if (!crb(c,2)) { goto L_80223570; } // 80223558
  c->r[3]=c->r[30]|c->r[30]; // 8022355C
  c->r[4]=0u+0x00000001u; // 80223560
  c->lr=0x80223568u; f_80227378(c); // 80223564
  c->r[0]=0u+0x00000001u; // 80223568
  W32(c->r[30]+0x00000560u,c->r[0]); // 8022356C
L_80223570:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 80223570
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80223574
  c->r[30]=R32(c->r[1]+0x00000018u); // 80223578
  c->lr=c->r[0]; // 8022357C
  c->r[1]=c->r[1]+0x00000020u; // 80223580
  return; // 80223584
}

// fn_80223588
void f_80223588(Ctx* __restrict c) {
  trace_call(0x80223588u);
  c->r[4]=R32(c->r[3]+0x00000004u); // 80223588
  cmps(c,0,(int32_t)c->r[4],0); // 8022358C
  if (crb(c,2)) { goto L_8022359C; } // 80223590
  c->r[0]=R32(c->r[4]+0x00000008u); // 80223594
  goto L_802235A0; // 80223598
L_8022359C:;
  c->r[0]=0u+0x00000000u; // 8022359C
L_802235A0:;
  cmps(c,0,(int32_t)c->r[0],0); // 802235A0
  if (!crb(c,2)) return; // 802235A4
  c->r[3]=R32(c->r[3]+0x0000044Cu); // 802235A8
  c->r[4]=0u+0x00000016u; // 802235AC
  c->r[5]=0u+0x00000001u; // 802235B0
  c->r[3]=c->r[3]+0x000000C4u; // 802235B4
  f_8005DCA0(c); return; // 802235B8
  return; // 802235BC
}

// fn_802235C0
void f_802235C0(Ctx* __restrict c) {
  trace_call(0x802235C0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802235C0
  c->r[0]=c->lr; // 802235C4
  W32(c->r[1]+0x00000024u,c->r[0]); // 802235C8
  c->r[11]=c->r[1]+0x00000020u; // 802235CC
  c->lr=0x802235D4u; { W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 802235D0
  c->r[4]=R32(c->r[3]+0x00000004u); // 802235D4
  c->r[29]=c->r[3]|c->r[3]; // 802235D8
  cmps(c,0,(int32_t)c->r[4],0); // 802235DC
  if (crb(c,2)) { goto L_802235EC; } // 802235E0
  c->r[0]=R32(c->r[4]+0x00000008u); // 802235E4
  goto L_802235F0; // 802235E8
L_802235EC:;
  c->r[0]=0u+0x00000000u; // 802235EC
L_802235F0:;
  cmps(c,0,(int32_t)c->r[0],0); // 802235F0
  if (!crb(c,2)) { goto L_80223688; } // 802235F4
  c->r[3]=c->r[29]|c->r[29]; // 802235F8
  c->lr=0x80223600u; f_802236C8(c); // 802235FC
  c->r[31]=c->r[3]|c->r[3]; // 80223600
  c->r[3]=c->r[29]|c->r[29]; // 80223604
  c->lr=0x8022360Cu; f_8022379C(c); // 80223608
  cmps(c,0,(int32_t)c->r[31],0); // 8022360C
  c->r[30]=c->r[3]|c->r[3]; // 80223610
  if (crb(c,2)) { goto L_80223628; } // 80223614
  c->r[3]=c->r[29]|c->r[29]; // 80223618
  c->r[4]=c->r[31]|c->r[31]; // 8022361C
  c->r[5]=0u+0x00000000u; // 80223620
  c->lr=0x80223628u; f_80064744(c); // 80223624
L_80223628:;
  cmps(c,0,(int32_t)c->r[30],0); // 80223628
  if (crb(c,2)) { goto L_80223648; } // 8022362C
  {uint32_t ea=c->r[2]+0xFFFFE044u; c->f[1]=c->ps1[1]=RF32(ea);} // 80223630
  c->r[4]=c->r[30]|c->r[30]; // 80223634
  {uint32_t ea=c->r[2]+0xFFFFE040u; c->f[2]=c->ps1[2]=RF32(ea);} // 80223638
  c->r[3]=c->r[29]+0x000005C4u; // 8022363C
  {uint32_t ea=c->r[2]+0xFFFFE068u; c->f[3]=c->ps1[3]=RF32(ea);} // 80223640
  c->lr=0x80223648u; f_800E24D0(c); // 80223644
L_80223648:;
  c->r[3]=c->r[29]|c->r[29]; // 80223648
  c->lr=0x80223650u; f_8022373C(c); // 8022364C
  c->lr=0x80223654u; f_803B220C(c); // 80223650
  c->r[3]=c->r[3]^0x80000000u; // 80223654
  c->r[0]=0u+0x43300000u; // 80223658
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 8022365C
  {uint32_t ea=c->r[2]+0xFFFFE060u; c->f[3]=RF64(ea);} // 80223660
  W32(c->r[1]+0x00000008u,c->r[0]); // 80223664
  {uint32_t ea=c->r[2]+0xFFFFE058u; c->f[2]=c->ps1[2]=RF32(ea);} // 80223668
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=RF64(ea);} // 8022366C
  {uint32_t ea=c->r[2]+0xFFFFE07Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 80223670
  c->f[3]=c->ps1[3]=S(c->f[0]-c->f[3]); // 80223674
  {uint32_t ea=c->r[2]+0xFFFFE078u; c->f[0]=c->ps1[0]=RF32(ea);} // 80223678
  c->f[2]=c->ps1[2]=S(c->f[3]/c->f[2]); // 8022367C
  c->f[0]=c->ps1[0]=S(std::fma(c->f[1],c->f[2],c->f[0])); // 80223680
  {uint32_t ea=c->r[29]+0x00000560u; WF32(ea,c->f[0]);} // 80223684
L_80223688:;
  {uint32_t ea=c->r[29]+0x00000560u; c->f[0]=c->ps1[0]=RF32(ea);} // 80223688
  {uint32_t ea=c->r[29]+0x00000558u; c->f[1]=c->ps1[1]=RF32(ea);} // 8022368C
  fcmp(c,0,c->f[1],c->f[0]); // 80223690
  setcrb(c,2,crb(c,1)|crb(c,2)); // 80223694
  if (!crb(c,2)) { goto L_802236B0; } // 80223698
  c->r[12]=R32(c->r[29]+0x0000001Cu); // 8022369C
  c->r[3]=c->r[29]|c->r[29]; // 802236A0
  c->r[12]=R32(c->r[12]+0x000001B0u); // 802236A4
  c->ctr=c->r[12]; // 802236A8
  if (true) { c->lr=0x802236B0u; dispatch(c,c->ctr); } // 802236AC
L_802236B0:;
  c->r[11]=c->r[1]+0x00000020u; // 802236B0
  c->lr=0x802236B8u; { c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 802236B4
  c->r[0]=R32(c->r[1]+0x00000024u); // 802236B8
  c->lr=c->r[0]; // 802236BC
  c->r[1]=c->r[1]+0x00000020u; // 802236C0
  return; // 802236C4
}

// fn_802236C8
void f_802236C8(Ctx* __restrict c) {
  trace_call(0x802236C8u);
  c->r[0]=R32(c->r[3]+0x00000674u); // 802236C8
  cmps(c,0,(int32_t)c->r[0],4); // 802236CC
  if (!crb(c,2)) { goto L_802236E0; } // 802236D0
  c->r[3]=0u+0x00010000u; // 802236D4
  c->r[3]=c->r[3]+0x00000DECu; // 802236D8
  return; // 802236DC
L_802236E0:;
  cmps(c,0,(int32_t)c->r[0],5); // 802236E0
  if (!crb(c,2)) { goto L_802236F4; } // 802236E4
  c->r[3]=0u+0x00010000u; // 802236E8
  c->r[3]=c->r[3]+0x00000E50u; // 802236EC
  return; // 802236F0
L_802236F4:;
  cmps(c,0,(int32_t)c->r[0],8); // 802236F4
  c->r[4]=0u+0x00010000u; // 802236F8
  c->r[3]=c->r[4]+0x00000D88u; // 802236FC
  if (!crb(c,2)) return; // 80223700
  c->r[3]=c->r[4]+0x00000EB9u; // 80223704
  return; // 80223708
}

// fn_8022370C
void f_8022370C(Ctx* __restrict c) {
  trace_call(0x8022370Cu);
  c->r[0]=R32(c->r[3]+0x00000800u); // 8022370C
  cmps(c,0,(int32_t)c->r[0],2); // 80223710
  if (!crb(c,2)) { goto L_80223734; } // 80223714
  c->r[0]=0u+0x00000003u; // 80223718
  W32(c->r[4]+0x00000000u,c->r[0]); // 8022371C
  c->r[4]=0u+0x00010000u; // 80223720
  c->r[3]=0u+0x00000001u; // 80223724
  c->r[0]=c->r[4]+0x00000EBAu; // 80223728
  W32(c->r[5]+0x00000000u,c->r[0]); // 8022372C
  return; // 80223730
L_80223734:;
  c->r[3]=0u+0x00000000u; // 80223734
  return; // 80223738
}

// fn_8022373C
void f_8022373C(Ctx* __restrict c) {
  trace_call(0x8022373Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8022373C
  c->r[0]=c->lr; // 80223740
  W32(c->r[1]+0x00000024u,c->r[0]); // 80223744
  c->r[4]=c->r[1]+0x00000010u; // 80223748
  c->r[5]=c->r[1]+0x0000000Cu; // 8022374C
  c->r[6]=c->r[1]+0x00000008u; // 80223750
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80223754
  c->r[31]=c->r[3]|c->r[3]; // 80223758
  c->lr=0x80223760u; f_8022370C(c); // 8022375C
  cmps(c,0,(int32_t)c->r[3],0); // 80223760
  if (crb(c,2)) { goto L_80223788; } // 80223764
  c->r[0]=R32(c->r[1]+0x00000010u); // 80223768
  c->r[5]=0u+0x00000000u; // 8022376C
  c->r[4]=R32(c->r[1]+0x0000000Cu); // 80223770
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)48); // 80223774
  {uint32_t ea=c->r[2]+0xFFFFE080u; c->f[1]=c->ps1[1]=RF32(ea);} // 80223778
  c->r[3]=c->r[31]+c->r[0]; // 8022377C
  c->r[3]=c->r[3]+0x0000067Cu; // 80223780
  c->lr=0x80223788u; f_8021F138(c); // 80223784
L_80223788:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 80223788
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8022378C
  c->lr=c->r[0]; // 80223790
  c->r[1]=c->r[1]+0x00000020u; // 80223794
  return; // 80223798
}

// fn_8022379C
void f_8022379C(Ctx* __restrict c) {
  trace_call(0x8022379Cu);
  c->r[0]=R32(c->r[3]+0x00000674u); // 8022379C
  cmps(c,0,(int32_t)c->r[0],4); // 802237A0
  if (crb(c,2)) { goto L_802237B0; } // 802237A4
  cmps(c,0,(int32_t)c->r[0],5); // 802237A8
  if (!crb(c,2)) { goto L_80223814; } // 802237AC
L_802237B0:;
  c->r[0]=R32(c->r[3]+0x00000770u); // 802237B0
  cmps(c,0,(int32_t)c->r[0],2); // 802237B4
  if (!crb(c,2)) { goto L_802237CC; } // 802237B8
  c->r[3]=0u+0x806A0000u; // 802237BC
  c->r[3]=c->r[3]+0xFFFF98D8u; // 802237C0
  c->r[3]=c->r[3]+0x000000C1u; // 802237C4
  return; // 802237C8
L_802237CC:;
  cmps(c,0,(int32_t)c->r[0],3); // 802237CC
  if (!crb(c,2)) { goto L_802237E4; } // 802237D0
  c->r[3]=0u+0x806A0000u; // 802237D4
  c->r[3]=c->r[3]+0xFFFF98D8u; // 802237D8
  c->r[3]=c->r[3]+0x000000CDu; // 802237DC
  return; // 802237E0
L_802237E4:;
  cmps(c,0,(int32_t)c->r[0],4); // 802237E4
  if (!crb(c,2)) { goto L_802237FC; } // 802237E8
  c->r[3]=0u+0x806A0000u; // 802237EC
  c->r[3]=c->r[3]+0xFFFF98D8u; // 802237F0
  c->r[3]=c->r[3]+0x000000D9u; // 802237F4
  return; // 802237F8
L_802237FC:;
  cmps(c,0,(int32_t)c->r[0],5); // 802237FC
  if (!crb(c,2)) { goto L_80223880; } // 80223800
  c->r[3]=0u+0x806A0000u; // 80223804
  c->r[3]=c->r[3]+0xFFFF98D8u; // 80223808
  c->r[3]=c->r[3]+0x000000E5u; // 8022380C
  return; // 80223810
L_80223814:;
  cmps(c,0,(int32_t)c->r[0],8); // 80223814
  if (!crb(c,2)) { goto L_80223880; } // 80223818
  c->r[0]=R32(c->r[3]+0x00000770u); // 8022381C
  cmps(c,0,(int32_t)c->r[0],6); // 80223820
  if (!crb(c,2)) { goto L_80223838; } // 80223824
  c->r[3]=0u+0x806A0000u; // 80223828
  c->r[3]=c->r[3]+0xFFFF98D8u; // 8022382C
  c->r[3]=c->r[3]+0x000000F1u; // 80223830
  return; // 80223834
L_80223838:;
  cmps(c,0,(int32_t)c->r[0],7); // 80223838
  if (!crb(c,2)) { goto L_80223850; } // 8022383C
  c->r[3]=0u+0x806A0000u; // 80223840
  c->r[3]=c->r[3]+0xFFFF98D8u; // 80223844
  c->r[3]=c->r[3]+0x000000FDu; // 80223848
  return; // 8022384C
L_80223850:;
  cmps(c,0,(int32_t)c->r[0],0); // 80223850
  if (!crb(c,2)) { goto L_80223868; } // 80223854
  c->r[3]=0u+0x806A0000u; // 80223858
  c->r[3]=c->r[3]+0xFFFF98D8u; // 8022385C
  c->r[3]=c->r[3]+0x00000109u; // 80223860
  return; // 80223864
L_80223868:;
  cmps(c,0,(int32_t)c->r[0],8); // 80223868
  if (!crb(c,2)) { goto L_80223880; } // 8022386C
  c->r[3]=0u+0x806A0000u; // 80223870
  c->r[3]=c->r[3]+0xFFFF98D8u; // 80223874
  c->r[3]=c->r[3]+0x00000115u; // 80223878
  return; // 8022387C
L_80223880:;
  c->r[3]=0u+0x806A0000u; // 80223880
  c->r[3]=c->r[3]+0xFFFF98D8u; // 80223884
  c->r[3]=c->r[3]+0x00000121u; // 80223888
  return; // 8022388C
}

// fn_80223890
void f_80223890(Ctx* __restrict c) {
  trace_call(0x80223890u);
  c->r[0]=R32(c->r[3]+0x00000800u); // 80223890
  cmps(c,0,(int32_t)c->r[0],1); // 80223894
  if (!crb(c,2)) { goto L_802238B8; } // 80223898
  c->r[0]=R32(c->r[3]+0x00000674u); // 8022389C
  c->r[4]=0u+0x00010000u; // 802238A0
  c->r[3]=c->r[4]+0x00000E55u; // 802238A4
  cmps(c,0,(int32_t)c->r[0],4); // 802238A8
  if (!crb(c,2)) return; // 802238AC
  c->r[3]=c->r[4]+0x00000DF1u; // 802238B0
  return; // 802238B4
L_802238B8:;
  c->r[3]=0u+0x00010000u; // 802238B8
  c->r[3]=c->r[3]+0x00000EECu; // 802238BC
  return; // 802238C0
}

// fn_802238C4
void f_802238C4(Ctx* __restrict c) {
  trace_call(0x802238C4u);
  c->r[0]=R32(c->r[3]+0x00000800u); // 802238C4
  cmps(c,0,(int32_t)c->r[0],2); // 802238C8
  if (!crb(c,2)) { goto L_802238FC; } // 802238CC
  c->r[0]=0u+0x00000003u; // 802238D0
  W32(c->r[4]+0x00000000u,c->r[0]); // 802238D4
  c->r[3]=0u+0x00010000u; // 802238D8
  cmps(c,0,(int32_t)c->r[6],0); // 802238DC
  c->r[0]=c->r[3]+0x00000EEEu; // 802238E0
  W32(c->r[5]+0x00000000u,c->r[0]); // 802238E4
  if (crb(c,2)) { goto L_802238F4; } // 802238E8
  c->r[0]=c->r[3]+0x000010B7u; // 802238EC
  W32(c->r[6]+0x00000000u,c->r[0]); // 802238F0
L_802238F4:;
  c->r[3]=0u+0x00000001u; // 802238F4
  return; // 802238F8
L_802238FC:;
  c->r[3]=0u+0x00000000u; // 802238FC
  return; // 80223900
}

// fn_80223904
void f_80223904(Ctx* __restrict c) {
  trace_call(0x80223904u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80223904
  c->r[0]=c->lr; // 80223908
  W32(c->r[1]+0x00000024u,c->r[0]); // 8022390C
  c->r[4]=c->r[1]+0x00000010u; // 80223910
  c->r[5]=c->r[1]+0x0000000Cu; // 80223914
  c->r[6]=c->r[1]+0x00000008u; // 80223918
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8022391C
  c->r[31]=c->r[3]|c->r[3]; // 80223920
  c->lr=0x80223928u; f_802238C4(c); // 80223924
  cmps(c,0,(int32_t)c->r[3],0); // 80223928
  if (crb(c,2)) { goto L_80223978; } // 8022392C
  c->r[0]=R32(c->r[1]+0x00000010u); // 80223930
  c->r[5]=0u+0x00000001u; // 80223934
  c->r[4]=R32(c->r[1]+0x0000000Cu); // 80223938
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)48); // 8022393C
  {uint32_t ea=c->r[2]+0xFFFFE080u; c->f[1]=c->ps1[1]=RF32(ea);} // 80223940
  c->r[3]=c->r[31]+c->r[0]; // 80223944
  c->r[3]=c->r[3]+0x0000067Cu; // 80223948
  c->lr=0x80223950u; f_8021F138(c); // 8022394C
  c->r[4]=R32(c->r[1]+0x00000008u); // 80223950
  cmps(c,0,(int32_t)c->r[4],0); // 80223954
  if (crb(c,2)) { goto L_80223978; } // 80223958
  c->r[0]=R32(c->r[1]+0x00000010u); // 8022395C
  c->r[5]=0u+0x00000000u; // 80223960
  {uint32_t ea=c->r[2]+0xFFFFE080u; c->f[1]=c->ps1[1]=RF32(ea);} // 80223964
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)48); // 80223968
  c->r[3]=c->r[31]+c->r[0]; // 8022396C
  c->r[3]=c->r[3]+0x0000067Cu; // 80223970
  c->lr=0x80223978u; f_8021F2C4(c); // 80223974
L_80223978:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 80223978
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8022397C
  c->lr=c->r[0]; // 80223980
  c->r[1]=c->r[1]+0x00000020u; // 80223984
  return; // 80223988
}

// fn_8022398C
void f_8022398C(Ctx* __restrict c) {
  trace_call(0x8022398Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8022398C
  c->r[0]=c->lr; // 80223990
  c->r[6]=0u+0x806A0000u; // 80223994
  W32(c->r[1]+0x00000034u,c->r[0]); // 80223998
  c->r[6]=c->r[6]+0xFFFF9278u; // 8022399C
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[31]);} // 802239A0
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,31,ea,0,0);} // 802239A4
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 802239A8
  W32(c->r[1]+0x00000018u,c->r[30]); // 802239AC
  c->r[30]=c->r[3]|c->r[3]; // 802239B0
  c->r[0]=R32(c->r[3]+0x00000674u); // 802239B4
  cmps(c,0,(int32_t)c->r[0],8); // 802239B8
  if (crb(c,0)) { goto L_802239C8; } // 802239BC
  c->r[6]=0u+0x806A0000u; // 802239C0
  c->r[6]=c->r[6]+0xFFFF9338u; // 802239C4
L_802239C8:;
  c->r[0]=R32(c->r[3]+0x0000055Cu); // 802239C8
  cmps(c,0,(int32_t)c->r[0],0); // 802239CC
  if (!crb(c,2)) { goto L_802239E4; } // 802239D0
  c->r[4]=R32(c->r[3]+0x00000770u); // 802239D4
  c->r[0]=R32(c->r[3]+0x00000774u); // 802239D8
  W32(c->r[3]+0x00000560u,c->r[4]); // 802239DC
  W32(c->r[3]+0x00000564u,c->r[0]); // 802239E0
L_802239E4:;
  c->r[0]=0u+0x00000004u; // 802239E4
  c->r[31]=0u+0x00000000u; // 802239E8
  c->r[4]=0u+0x00000000u; // 802239EC
  c->ctr=c->r[0]; // 802239F0
L_802239F4:;
  c->r[0]=R32(c->r[3]+0x00000560u); // 802239F4
  c->r[7]=c->r[6]+c->r[4]; // 802239F8
  c->r[5]=R32(c->r[6]+c->r[4]); // 802239FC
  cmps(c,0,(int32_t)c->r[5],(int32_t)c->r[0]); // 80223A00
  if (!crb(c,2)) { goto L_80223A20; } // 80223A04
  c->r[5]=R32(c->r[7]+0x00000004u); // 80223A08
  c->r[0]=R32(c->r[3]+0x00000564u); // 80223A0C
  cmps(c,0,(int32_t)c->r[5],(int32_t)c->r[0]); // 80223A10
  if (!crb(c,2)) { goto L_80223A20; } // 80223A14
  c->r[31]=c->r[7]|c->r[7]; // 80223A18
  goto L_80223A28; // 80223A1C
L_80223A20:;
  c->r[4]=c->r[4]+0x0000001Cu; // 80223A20
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_802239F4; } // 80223A24
L_80223A28:;
  cmps(c,0,(int32_t)c->r[31],0); // 80223A28
  if (!crb(c,2)) { goto L_80223A48; } // 80223A2C
  c->r[12]=R32(c->r[30]+0x0000001Cu); // 80223A30
  c->r[3]=c->r[30]|c->r[30]; // 80223A34
  c->r[12]=R32(c->r[12]+0x000001B0u); // 80223A38
  c->ctr=c->r[12]; // 80223A3C
  if (true) { c->lr=0x80223A44u; dispatch(c,c->ctr); } // 80223A40
  goto L_80223BC8; // 80223A44
L_80223A48:;
  c->r[4]=R32(c->r[3]+0x0000055Cu); // 80223A48
  cmps(c,0,(int32_t)c->r[4],0); // 80223A4C
  if (crb(c,2)) { goto L_80223A74; } // 80223A50
  cmps(c,0,(int32_t)c->r[4],256); // 80223A54
  if (crb(c,2)) { goto L_80223B00; } // 80223A58
  cmps(c,0,(int32_t)c->r[4],257); // 80223A5C
  if (crb(c,2)) { goto L_80223B4C; } // 80223A60
  c->r[0]=c->r[4]+0x00000000u; // 80223A64
  cmpu(c,0,c->r[0],0x00009000u); // 80223A68
  if (crb(c,2)) { goto L_80223B68; } // 80223A6C
  goto L_80223BA8; // 80223A70
L_80223A74:;
  c->r[4]=R32(c->r[31]+0x00000008u); // 80223A74
  c->r[3]=c->r[30]|c->r[30]; // 80223A78
  c->r[5]=0u+0x00000000u; // 80223A7C
  c->lr=0x80223A84u; f_80064744(c); // 80223A80
  c->r[4]=R32(c->r[31]+0x0000000Cu); // 80223A84
  cmps(c,0,(int32_t)c->r[4],0); // 80223A88
  if (crb(c,2)) { goto L_80223AA0; } // 80223A8C
  {uint32_t ea=c->r[2]+0xFFFFE080u; c->f[1]=c->ps1[1]=RF32(ea);} // 80223A90
  c->r[3]=c->r[30]+0x0000070Cu; // 80223A94
  c->r[5]=0u+0x00000000u; // 80223A98
  c->lr=0x80223AA0u; f_8021F138(c); // 80223A9C
L_80223AA0:;
  c->r[4]=R32(c->r[31]+0x00000010u); // 80223AA0
  c->r[3]=c->r[30]+0x000005C4u; // 80223AA4
  {uint32_t ea=c->r[2]+0xFFFFE044u; c->f[1]=c->ps1[1]=RF32(ea);} // 80223AA8
  {uint32_t ea=c->r[2]+0xFFFFE040u; c->f[2]=c->ps1[2]=RF32(ea);} // 80223AAC
  {uint32_t ea=c->r[2]+0xFFFFE068u; c->f[3]=c->ps1[3]=RF32(ea);} // 80223AB0
  c->lr=0x80223AB8u; f_800E24D0(c); // 80223AB4
  c->r[5]=(uint32_t)(int32_t)(int16_t)R16(c->r[31]+0x00000014u); // 80223AB8
  c->r[4]=0u+0x43300000u; // 80223ABC
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[31]+0x00000016u); // 80223AC0
  c->r[3]=c->r[30]+0x000007C0u; // 80223AC4
  c->r[5]=c->r[5]^0x80000000u; // 80223AC8
  W32(c->r[1]+0x0000000Cu,c->r[5]); // 80223ACC
  c->r[0]=c->r[0]^0x80000000u; // 80223AD0
  {uint32_t ea=c->r[2]+0xFFFFE060u; c->f[2]=RF64(ea);} // 80223AD4
  W32(c->r[1]+0x00000008u,c->r[4]); // 80223AD8
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=RF64(ea);} // 80223ADC
  W32(c->r[1]+0x00000014u,c->r[0]); // 80223AE0
  c->f[1]=c->ps1[1]=S(c->f[0]-c->f[2]); // 80223AE4
  W32(c->r[1]+0x00000010u,c->r[4]); // 80223AE8
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=RF64(ea);} // 80223AEC
  c->f[2]=c->ps1[2]=S(c->f[0]-c->f[2]); // 80223AF0
  c->lr=0x80223AF8u; f_80223BE8(c); // 80223AF4
  c->r[0]=0u+0x00000100u; // 80223AF8
  W32(c->r[30]+0x0000055Cu,c->r[0]); // 80223AFC
L_80223B00:;
  c->r[3]=c->r[30]+0x000005C4u; // 80223B00
  c->lr=0x80223B08u; f_800E2A98(c); // 80223B04
  c->r[3]=(uint32_t)(int32_t)(int16_t)R16(c->r[31]+0x00000014u); // 80223B08
  c->r[0]=0u+0x43300000u; // 80223B0C
  W32(c->r[1]+0x00000010u,c->r[0]); // 80223B10
  c->r[0]=c->r[3]^0x80000000u; // 80223B14
  {uint32_t ea=c->r[2]+0xFFFFE060u; c->f[2]=RF64(ea);} // 80223B18
  W32(c->r[1]+0x00000014u,c->r[0]); // 80223B1C
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=RF64(ea);} // 80223B20
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[2]); // 80223B24
  fcmp(c,0,c->f[1],c->f[0]); // 80223B28
  if (!crb(c,1)) { goto L_80223BA8; } // 80223B2C
  c->r[4]=R32(c->r[30]+0x00000774u); // 80223B30
  c->r[3]=c->r[30]|c->r[30]; // 80223B34
  c->lr=0x80223B3Cu; f_80226A2C(c); // 80223B38
  c->r[3]=R32(c->r[30]+0x0000055Cu); // 80223B3C
  c->r[0]=c->r[3]+0x00000001u; // 80223B40
  W32(c->r[30]+0x0000055Cu,c->r[0]); // 80223B44
  goto L_80223BA8; // 80223B48
L_80223B4C:;
  c->r[3]=c->r[3]+0x000005C4u; // 80223B4C
  c->lr=0x80223B54u; f_800E2B1C(c); // 80223B50
  cmps(c,0,(int32_t)c->r[3],0); // 80223B54
  if (crb(c,2)) { goto L_80223BA8; } // 80223B58
  c->r[3]=0u+0x00010000u; // 80223B5C
  c->r[0]=c->r[3]+0xFFFF9000u; // 80223B60
  W32(c->r[30]+0x0000055Cu,c->r[0]); // 80223B64
L_80223B68:;
  c->r[4]=R32(c->r[30]+0x00000774u); // 80223B68
  c->r[3]=c->r[30]|c->r[30]; // 80223B6C
  c->lr=0x80223B74u; f_80226A2C(c); // 80223B70
  c->r[0]=0u+0x0000000Au; // 80223B74
  W32(c->r[30]+0x00000774u,c->r[0]); // 80223B78
  c->r[4]=R32(c->r[31]+0x00000018u); // 80223B7C
  cmps(c,0,(int32_t)c->r[4],4); // 80223B80
  if (crb(c,2)) { goto L_80223B90; } // 80223B84
  c->r[3]=c->r[30]|c->r[30]; // 80223B88
  c->lr=0x80223B90u; f_8022247C(c); // 80223B8C
L_80223B90:;
  c->r[12]=R32(c->r[30]+0x0000001Cu); // 80223B90
  c->r[3]=c->r[30]|c->r[30]; // 80223B94
  c->r[12]=R32(c->r[12]+0x000001B0u); // 80223B98
  c->ctr=c->r[12]; // 80223B9C
  if (true) { c->lr=0x80223BA4u; dispatch(c,c->ctr); } // 80223BA0
  goto L_80223BC8; // 80223BA4
L_80223BA8:;
  c->r[3]=c->r[30]+0x000005C4u; // 80223BA8
  c->lr=0x80223BB0u; f_800E2AA0(c); // 80223BAC
  c->f[31]=c->f[1]; // 80223BB0
  c->r[3]=c->r[30]+0x000005C4u; // 80223BB4
  c->lr=0x80223BBCu; f_800E2A98(c); // 80223BB8
  c->f[2]=c->f[31]; // 80223BBC
  c->r[3]=c->r[30]+0x000007C0u; // 80223BC0
  c->lr=0x80223BC8u; f_80223BF4(c); // 80223BC4
L_80223BC8:;
  c->r[0]=R32(c->r[1]+0x00000034u); // 80223BC8
  {uint32_t ea=c->r[1]+0x00000028u; psq_load(c,31,ea,0,0);} // 80223BCC
  {uint32_t ea=c->r[1]+0x00000020u; c->f[31]=RF64(ea);} // 80223BD0
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80223BD4
  c->r[30]=R32(c->r[1]+0x00000018u); // 80223BD8
  c->lr=c->r[0]; // 80223BDC
  c->r[1]=c->r[1]+0x00000030u; // 80223BE0
  return; // 80223BE4
}

// fn_80223BE8
void f_80223BE8(Ctx* __restrict c) {
  trace_call(0x80223BE8u);
  {uint32_t ea=c->r[3]+0x00000004u; WF32(ea,c->f[1]);} // 80223BE8
  {uint32_t ea=c->r[3]+0x00000008u; WF32(ea,c->f[2]);} // 80223BEC
  return; // 80223BF0
}

// fn_80223BF4
void f_80223BF4(Ctx* __restrict c) {
  trace_call(0x80223BF4u);
  {uint32_t ea=c->r[3]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 80223BF4
  {uint32_t ea=c->r[3]+0x00000004u; c->f[3]=c->ps1[3]=RF32(ea);} // 80223BF8
  c->f[0]=c->ps1[0]=S(c->f[2]+c->f[0]); // 80223BFC
  fcmp(c,0,c->f[1],c->f[3]); // 80223C00
  if (!crb(c,0)) { goto L_80223C10; } // 80223C04
  c->r[5]=0u+0x00000000u; // 80223C08
  goto L_80223C24; // 80223C0C
L_80223C10:;
  fcmp(c,0,c->f[1],c->f[0]); // 80223C10
  c->r[0]=c->cr; // 80223C14
  c->r[0]=rotl(c->r[0],2)&0x00000001u; // 80223C18
  c->r[0]=cntlz(c->r[0]); // 80223C1C
  c->r[5]=rotl(c->r[0],27)&0x07FFFFFFu; // 80223C20
L_80223C24:;
  c->r[3]=R32(c->r[3]+0x00000000u); // 80223C24
  c->r[4]=0u+0x0000000Au; // 80223C28
  c->r[3]=R32(c->r[3]+0x0000044Cu); // 80223C2C
  c->r[3]=c->r[3]+0x000000C4u; // 80223C30
  f_8005DCA0(c); return; // 80223C34
}

// fn_80223C38
void f_80223C38(Ctx* __restrict c) {
  trace_call(0x80223C38u);
  c->r[0]=R32(c->r[3]+0x000007F4u); // 80223C38
  cmpu(c,0,c->r[0],0x0000000Fu); // 80223C3C
  if (crb(c,1)) return; // 80223C40
  c->r[4]=0u+0x806E0000u; // 80223C44
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80223C48
  c->r[4]=c->r[4]+0x000072E8u; // 80223C4C
  c->r[4]=R32(c->r[4]+c->r[0]); // 80223C50
  c->ctr=c->r[4]; // 80223C54
  if (true) { switch (c->ctr) { case 0x80223C5Cu: goto L_80223C5C; case 0x80223C60u: goto L_80223C60; case 0x80223C64u: goto L_80223C64; case 0x80223C68u: goto L_80223C68; case 0x80223C6Cu: goto L_80223C6C; case 0x80223C70u: goto L_80223C70; case 0x80223C74u: goto L_80223C74; case 0x80223C78u: goto L_80223C78; case 0x80223C7Cu: goto L_80223C7C; case 0x80223C80u: goto L_80223C80; case 0x80223C84u: goto L_80223C84; case 0x80223C88u: goto L_80223C88; case 0x80223C8Cu: goto L_80223C8C; case 0x80223C90u: goto L_80223C90; case 0x80223C94u: goto L_80223C94; case 0x80223C98u: goto L_80223C98; default: break; } dispatch(c,c->ctr); return; } // 80223C58
L_80223C5C:;
  f_80223CA0(c); return; // 80223C5C
L_80223C60:;
  f_8022460C(c); return; // 80223C60
L_80223C64:;
  f_8022460C(c); return; // 80223C64
L_80223C68:;
  f_80224938(c); return; // 80223C68
L_80223C6C:;
  f_80224C58(c); return; // 80223C6C
L_80223C70:;
  f_802240D0(c); return; // 80223C70
L_80223C74:;
  f_8022460C(c); return; // 80223C74
L_80223C78:;
  f_80223CA0(c); return; // 80223C78
L_80223C7C:;
  f_8022460C(c); return; // 80223C7C
L_80223C80:;
  f_802240D0(c); return; // 80223C80
L_80223C84:;
  f_80223CA0(c); return; // 80223C84
L_80223C88:;
  f_8022460C(c); return; // 80223C88
L_80223C8C:;
  f_80224C58(c); return; // 80223C8C
L_80223C90:;
  f_80223CA0(c); return; // 80223C90
L_80223C94:;
  f_80223CA0(c); return; // 80223C94
L_80223C98:;
  f_802240D0(c); return; // 80223C98
  return; // 80223C9C
}

