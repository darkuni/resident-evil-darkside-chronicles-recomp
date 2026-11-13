#include "funcs.h"
#pragma GCC diagnostic ignored "-Wunused-label"

// fn_800B35C0
void f_800B35C0(Ctx* __restrict c) {
  trace_call(0x800B35C0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B35C0
  c->r[0]=c->lr; // 800B35C4
  cmps(c,0,(int32_t)c->r[3],0); // 800B35C8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B35CC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800B35D0
  c->r[31]=c->r[3]|c->r[3]; // 800B35D4
  if (crb(c,2)) { goto L_800B35E8; } // 800B35D8
  c->r[4]=0u+0xFFFFFFFFu; // 800B35DC
  c->r[3]=c->r[3]+0x000000BCu; // 800B35E0
  c->lr=0x800B35E8u; f_800ADFEC(c); // 800B35E4
L_800B35E8:;
  c->r[3]=c->r[31]|c->r[31]; // 800B35E8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800B35EC
  c->r[0]=R32(c->r[1]+0x00000014u); // 800B35F0
  c->lr=c->r[0]; // 800B35F4
  c->r[1]=c->r[1]+0x00000010u; // 800B35F8
  return; // 800B35FC
}

// fn_800B3600
void f_800B3600(Ctx* __restrict c) {
  trace_call(0x800B3600u);
  {uint32_t ea=c->r[1]+0xFFFFFF40u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B3600
  c->r[0]=c->lr; // 800B3604
  W32(c->r[1]+0x000000C4u,c->r[0]); // 800B3608
  c->r[11]=c->r[1]+0x000000C0u; // 800B360C
  c->lr=0x800B3614u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800B3610
  c->r[31]=c->r[1]|c->r[1]; // 800B3614
  c->r[30]=c->r[3]|c->r[3]; // 800B3618
  c->r[3]=c->r[31]+0x00000064u; // 800B361C
  c->r[4]=0u+0x00000000u; // 800B3620
  c->lr=0x800B3628u; f_8007524C(c); // 800B3624
  c->r[3]=c->r[30]|c->r[30]; // 800B3628
  c->lr=0x800B3630u; f_800B4148(c); // 800B362C
  c->r[29]=0u+0x00000000u; // 800B3630
  W8(c->r[31]+0x00000034u,c->r[29]); // 800B3634
  c->r[3]=c->r[31]+0x00000034u; // 800B3638
  c->lr=0x800B3640u; f_80045AE4(c); // 800B363C
  c->r[4]=0u+0x00000000u; // 800B3640
  c->r[5]=0u+0x800B0000u; // 800B3644
  c->r[7]=c->r[4]|c->r[4]; // 800B3648
  c->r[6]=0u+0x00000001u; // 800B364C
  c->r[5]=c->r[5]+0x000044C8u; // 800B3650
  c->r[8]=0u+0x00000000u; // 800B3654
  c->r[3]=c->r[3]+0x00000034u; // 800B3658
  c->lr=0x800B3660u; f_804D2E8C(c); // 800B365C
  W32(c->r[30]+0x000000ACu,c->r[3]); // 800B3660
  c->r[4]=0u+0x00000082u; // 800B3664
  c->lr=0x800B366Cu; f_804CB368(c); // 800B3668
  c->r[3]=R32(c->r[30]+0x000000ACu); // 800B366C
  c->r[4]=0u+0x00000082u; // 800B3670
  c->lr=0x800B3678u; f_804CB38C(c); // 800B3674
  W8(c->r[31]+0x00000030u,c->r[29]); // 800B3678
  c->r[3]=c->r[31]+0x00000030u; // 800B367C
  c->lr=0x800B3684u; f_80045AE4(c); // 800B3680
  c->r[4]=0u+0x00000000u; // 800B3684
  c->r[5]=0u+0x800B0000u; // 800B3688
  c->r[7]=c->r[4]|c->r[4]; // 800B368C
  c->r[6]=0u+0x00000001u; // 800B3690
  c->r[5]=c->r[5]+0x0000491Cu; // 800B3694
  c->r[8]=0u+0x00000000u; // 800B3698
  c->r[3]=c->r[3]+0x00000034u; // 800B369C
  c->lr=0x800B36A4u; f_804D2E8C(c); // 800B36A0
  W32(c->r[30]+0x000000B0u,c->r[3]); // 800B36A4
  c->r[4]=0u+0x000000E4u; // 800B36A8
  c->lr=0x800B36B0u; f_804CB368(c); // 800B36AC
  c->r[3]=R32(c->r[30]+0x000000B0u); // 800B36B0
  c->r[4]=0u+0x000000E4u; // 800B36B4
  c->lr=0x800B36BCu; f_804CB38C(c); // 800B36B8
  c->r[28]=R32(c->r[30]+0x000000ACu); // 800B36BC
  c->r[3]=c->r[31]+0x0000002Cu; // 800B36C0
  W8(c->r[31]+0x0000002Cu,c->r[29]); // 800B36C4
  c->lr=0x800B36CCu; f_80047A80(c); // 800B36C8
  c->r[3]=R32(c->r[3]+0x00000004u); // 800B36CC
  c->r[5]=c->r[28]|c->r[28]; // 800B36D0
  c->r[12]=R32(c->r[3]+0x00000000u); // 800B36D4
  c->r[4]=R32(c->r[3]+0x000000E4u); // 800B36D8
  c->r[12]=R32(c->r[12]+0x00000034u); // 800B36DC
  c->ctr=c->r[12]; // 800B36E0
  if (true) { c->lr=0x800B36E8u; dispatch(c,c->ctr); } // 800B36E4
  c->r[28]=R32(c->r[30]+0x000000B0u); // 800B36E8
  c->r[3]=c->r[31]+0x00000028u; // 800B36EC
  W8(c->r[31]+0x00000028u,c->r[29]); // 800B36F0
  c->lr=0x800B36F8u; f_80047A80(c); // 800B36F4
  c->r[3]=R32(c->r[3]+0x00000004u); // 800B36F8
  c->r[5]=c->r[28]|c->r[28]; // 800B36FC
  c->r[12]=R32(c->r[3]+0x00000000u); // 800B3700
  c->r[4]=R32(c->r[3]+0x000000E4u); // 800B3704
  c->r[12]=R32(c->r[12]+0x00000034u); // 800B3708
  c->ctr=c->r[12]; // 800B370C
  if (true) { c->lr=0x800B3714u; dispatch(c,c->ctr); } // 800B3710
  W8(c->r[31]+0x00000024u,c->r[29]); // 800B3714
  c->r[3]=c->r[31]+0x00000024u; // 800B3718
  c->lr=0x800B3720u; f_80045BC8(c); // 800B371C
  c->r[4]=0u+0x00000000u; // 800B3720
  c->lr=0x800B3728u; f_802995C4(c); // 800B3724
  c->r[5]=0u+0x80690000u; // 800B3728
  W32(c->r[30]+0x00000100u,c->r[3]); // 800B372C
  c->r[5]=c->r[5]+0xFFFFE060u; // 800B3730
  c->r[3]=0u+0x80740000u; // 800B3734
  c->r[4]=c->r[5]+0x00000012u; // 800B3738
  c->r[6]=0u+0x00000000u; // 800B373C
  c->r[3]=c->r[3]+0x00004FD0u; // 800B3740
  c->r[5]=c->r[5]+0x0000001Fu; // 800B3744
  c->lr=0x800B374Cu; f_8005A7B0(c); // 800B3748
  c->r[4]=c->r[3]|c->r[3]; // 800B374C
  c->r[3]=c->r[31]+0x0000005Cu; // 800B3750
  c->lr=0x800B3758u; f_8007524C(c); // 800B3754
  c->r[3]=0u+0x806D0000u; // 800B3758
  c->r[0]=R32(c->r[31]+0x0000005Cu); // 800B375C
  c->r[3]=c->r[3]+0x00006820u; // 800B3760
  W32(c->r[31]+0x00000064u,c->r[0]); // 800B3764
  c->r[4]=R32(c->r[3]+0x00000008u); // 800B3768
  c->r[3]=c->r[31]+0x00000064u; // 800B376C
  c->lr=0x800B3774u; f_804AA454(c); // 800B3770
  W32(c->r[31]+0x00000058u,c->r[3]); // 800B3774
  c->r[3]=c->r[31]+0x00000020u; // 800B3778
  W8(c->r[31]+0x00000020u,c->r[29]); // 800B377C
  c->lr=0x800B3784u; f_8004FC20(c); // 800B3780
  c->r[4]=c->r[31]+0x00000058u; // 800B3784
  c->lr=0x800B378Cu; f_8033D9C4(c); // 800B3788
  cmps(c,0,(int32_t)c->r[3],0); // 800B378C
  if (!crb(c,2)) { goto L_800B37B0; } // 800B3790
  c->r[3]=c->r[31]+0x00000064u; // 800B3794
  c->lr=0x800B379Cu; f_804AB770(c); // 800B3798
  c->r[0]=R32(c->r[31]+0x00000064u); // 800B379C
  c->r[3]=c->r[31]+0x00000064u; // 800B37A0
  W32(c->r[31]+0x00000038u,c->r[0]); // 800B37A4
  c->r[4]=c->r[31]+0x00000038u; // 800B37A8
  c->lr=0x800B37B0u; f_804AB53C(c); // 800B37AC
L_800B37B0:;
  c->r[3]=c->r[30]+0x000000BCu; // 800B37B0
  c->lr=0x800B37B8u; f_800AF34C(c); // 800B37B4
  c->r[0]=R32(c->r[31]+0x00000064u); // 800B37B8
  c->r[3]=c->r[30]+0x000000BCu; // 800B37BC
  W32(c->r[31]+0x00000054u,c->r[0]); // 800B37C0
  c->r[4]=c->r[31]+0x00000054u; // 800B37C4
  c->r[5]=0u+0x00000020u; // 800B37C8
  c->r[6]=0u+0x00000003u; // 800B37CC
  c->r[7]=0u+0x00000020u; // 800B37D0
  c->r[8]=0u+0x00000002u; // 800B37D4
  c->r[9]=0u+0x00000001u; // 800B37D8
  c->lr=0x800B37E0u; f_800ADFF0(c); // 800B37DC
  c->r[0]=0u+0x00000000u; // 800B37E0
  W8(c->r[31]+0x0000001Cu,c->r[0]); // 800B37E4
  c->r[3]=c->r[31]+0x0000001Cu; // 800B37E8
  c->lr=0x800B37F0u; f_80045AE4(c); // 800B37EC
  c->r[4]=0u+0x00000210u; // 800B37F0
  c->r[3]=c->r[3]+0x00000034u; // 800B37F4
  c->lr=0x800B37FCu; f_803C4D08(c); // 800B37F8
  cmps(c,0,(int32_t)c->r[3],0); // 800B37FC
  c->r[29]=c->r[3]|c->r[3]; // 800B3800
  if (crb(c,2)) { goto L_800B383C; } // 800B3804
  c->r[4]=0u+0x800B0000u; // 800B3808
  W32(c->r[31]+0x000000A4u,c->r[1]); // 800B380C
  c->r[4]=c->r[4]+0x00003A28u; // 800B3810
  c->r[5]=0u+0x00000000u; // 800B3814
  c->r[6]=0u+0x00000010u; // 800B3818
  c->r[7]=0u+0x00000020u; // 800B381C
  c->lr=0x800B3824u; f_803A9670(c); // 800B3820
  c->r[29]=c->r[3]|c->r[3]; // 800B3824
  goto L_800B383C; // 800B3828
  c->r[3]=0u+0x00000000u; // 800B382C
  c->r[4]=0u+0x00000000u; // 800B3830
  c->r[5]=0u+0x00000000u; // 800B3834
  c->lr=0x800B383Cu; f_803ABBF0(c); // 800B3838
L_800B383C:;
  W32(c->r[30]+0x000000B4u,c->r[29]); // 800B383C
  c->r[6]=0u+0x00000000u; // 800B3840
  goto L_800B3878; // 800B3844
L_800B3848:;
  c->r[0]=R32(c->r[30]+0x000000B4u); // 800B3848
  c->r[5]=rotl(c->r[6],4)&0xFFFFFFF0u; // 800B384C
  {uint32_t ea=c->r[2]+0xFFFF9D18u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B3850
  c->r[4]=0u+0xFFFFFFFFu; // 800B3854
  c->r[3]=c->r[0]+c->r[5]; // 800B3858
  {uint32_t ea=c->r[5]+c->r[0]; WF32(ea,c->f[0]);} // 800B385C
  c->r[6]=c->r[6]+0x00000001u; // 800B3860
  {uint32_t ea=c->r[3]+0x00000004u; WF32(ea,c->f[0]);} // 800B3864
  {uint32_t ea=c->r[3]+0x00000008u; WF32(ea,c->f[0]);} // 800B3868
  c->r[0]=R32(c->r[30]+0x000000B4u); // 800B386C
  c->r[3]=c->r[0]+c->r[5]; // 800B3870
  W32(c->r[3]+0x0000000Cu,c->r[4]); // 800B3874
L_800B3878:;
  cmps(c,0,(int32_t)c->r[6],32); // 800B3878
  if (crb(c,0)) { IRQCHK(c); goto L_800B3848; } // 800B387C
  c->r[0]=0u+0x00000000u; // 800B3880
  W8(c->r[31]+0x00000018u,c->r[0]); // 800B3884
  c->r[3]=c->r[31]+0x00000018u; // 800B3888
  c->lr=0x800B3890u; f_80045AE4(c); // 800B388C
  c->r[4]=0u+0x00000020u; // 800B3890
  c->r[3]=c->r[3]+0x00000034u; // 800B3894
  c->lr=0x800B389Cu; f_803C4D08(c); // 800B3898
  cmps(c,0,(int32_t)c->r[3],0); // 800B389C
  c->r[29]=c->r[3]|c->r[3]; // 800B38A0
  if (crb(c,2)) { goto L_800B38DC; } // 800B38A4
  c->r[4]=0u+0x800B0000u; // 800B38A8
  W32(c->r[31]+0x0000008Cu,c->r[1]); // 800B38AC
  c->r[4]=c->r[4]+0x00003A2Cu; // 800B38B0
  c->r[5]=0u+0x00000000u; // 800B38B4
  c->r[6]=0u+0x00000010u; // 800B38B8
  c->r[7]=0u+0x00000001u; // 800B38BC
  c->lr=0x800B38C4u; f_803A9670(c); // 800B38C0
  c->r[29]=c->r[3]|c->r[3]; // 800B38C4
  goto L_800B38DC; // 800B38C8
  c->r[3]=0u+0x00000000u; // 800B38CC
  c->r[4]=0u+0x00000000u; // 800B38D0
  c->r[5]=0u+0x00000000u; // 800B38D4
  c->lr=0x800B38DCu; f_803ABBF0(c); // 800B38D8
L_800B38DC:;
  {uint32_t ea=c->r[2]+0xFFFF9D18u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B38DC
  c->r[27]=0u+0x00000000u; // 800B38E0
  W32(c->r[30]+0x000000B8u,c->r[29]); // 800B38E4
  {uint32_t ea=c->r[30]+0x00000104u; WF32(ea,c->f[0]);} // 800B38E8
  goto L_800B3A00; // 800B38EC
L_800B38F0:;
  c->r[0]=(uint32_t)((int32_t)c->r[27]*(int32_t)12); // 800B38F0
  c->r[3]=0u+0x806D0000u; // 800B38F4
  c->r[28]=rotl(c->r[27],4)&0xFFFFFFF0u; // 800B38F8
  c->r[3]=c->r[3]+0x00006820u; // 800B38FC
  c->r[29]=c->r[3]+c->r[0]; // 800B3900
  c->r[4]=c->r[30]+0x000000BCu; // 800B3904
  c->r[5]=R32(c->r[29]+0x00000008u); // 800B3908
  c->r[3]=c->r[31]+0x00000068u; // 800B390C
  c->lr=0x800B3914u; f_800AEE7C(c); // 800B3910
  c->r[0]=R32(c->r[30]+0x000000B8u); // 800B3914
  c->r[4]=c->r[31]+0x00000068u; // 800B3918
  c->r[3]=c->r[0]+c->r[28]; // 800B391C
  c->lr=0x800B3924u; f_8005DC84(c); // 800B3920
  c->r[4]=R32(c->r[29]+0x00000008u); // 800B3924
  c->r[3]=c->r[30]+0x000000BCu; // 800B3928
  c->lr=0x800B3930u; f_800AEFE4(c); // 800B392C
  c->r[0]=R32(c->r[30]+0x000000B8u); // 800B3930
  c->r[3]=c->r[0]+c->r[28]; // 800B3934
  {uint32_t ea=c->r[3]+0x0000000Cu; WF32(ea,c->f[1]);} // 800B3938
  c->r[0]=R32(c->r[30]+0x000000B8u); // 800B393C
  {uint32_t ea=c->r[30]+0x00000104u; c->f[1]=c->ps1[1]=RF32(ea);} // 800B3940
  c->r[3]=c->r[0]+c->r[28]; // 800B3944
  {uint32_t ea=c->r[3]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800B3948
  fcmp(c,0,c->f[1],c->f[0]); // 800B394C
  if (!crb(c,0)) { goto L_800B3958; } // 800B3950
  {uint32_t ea=c->r[30]+0x00000104u; WF32(ea,c->f[0]);} // 800B3954
L_800B3958:;
  c->r[4]=R32(c->r[29]+0x00000008u); // 800B3958
  c->r[3]=c->r[31]+0x00000064u; // 800B395C
  c->lr=0x800B3964u; f_804AA454(c); // 800B3960
  W32(c->r[31]+0x00000050u,c->r[3]); // 800B3964
  c->r[4]=R32(c->r[29]+0x00000004u); // 800B3968
  W32(c->r[31]+0x00000060u,c->r[3]); // 800B396C
  W32(c->r[31]+0x00000044u,c->r[3]); // 800B3970
  c->r[3]=c->r[31]+0x00000064u; // 800B3974
  c->lr=0x800B397Cu; f_804AA454(c); // 800B3978
  W32(c->r[31]+0x00000048u,c->r[3]); // 800B397C
  c->r[3]=c->r[31]+0x00000064u; // 800B3980
  c->r[4]=R32(c->r[29]+0x00000000u); // 800B3984
  c->lr=0x800B398Cu; f_804AA454(c); // 800B3988
  W32(c->r[31]+0x0000004Cu,c->r[3]); // 800B398C
  c->r[3]=c->r[30]|c->r[30]; // 800B3990
  c->r[4]=c->r[31]+0x0000004Cu; // 800B3994
  c->r[5]=c->r[31]+0x00000048u; // 800B3998
  c->r[6]=c->r[31]+0x00000044u; // 800B399C
  c->lr=0x800B39A4u; f_800B4274(c); // 800B39A0
  c->r[0]=R32(c->r[31]+0x00000060u); // 800B39A4
  c->r[29]=0u+0x00000000u; // 800B39A8
  W32(c->r[31]+0x00000040u,c->r[0]); // 800B39AC
  c->r[3]=c->r[31]+0x00000014u; // 800B39B0
  W8(c->r[31]+0x00000014u,c->r[29]); // 800B39B4
  c->lr=0x800B39BCu; f_8004FC20(c); // 800B39B8
  W32(c->r[1]+0x00000008u,c->r[29]); // 800B39BC
  c->r[9]=c->r[29]|c->r[29]; // 800B39C0
  c->r[10]=c->r[29]|c->r[29]; // 800B39C4
  c->r[4]=c->r[31]+0x00000040u; // 800B39C8
  c->r[5]=0u+0x00000001u; // 800B39CC
  c->r[6]=0u+0x00000080u; // 800B39D0
  c->r[7]=0u+0x00000000u; // 800B39D4
  c->r[8]=0u+0x00000000u; // 800B39D8
  c->lr=0x800B39E0u; f_8033D5C0(c); // 800B39DC
  c->r[0]=R32(c->r[31]+0x00000060u); // 800B39E0
  c->r[3]=c->r[31]+0x00000010u; // 800B39E4
  W32(c->r[31]+0x0000003Cu,c->r[0]); // 800B39E8
  W8(c->r[31]+0x00000010u,c->r[29]); // 800B39EC
  c->lr=0x800B39F4u; f_8004FC20(c); // 800B39F0
  c->r[4]=c->r[31]+0x0000003Cu; // 800B39F4
  c->lr=0x800B39FCu; f_8033D92C(c); // 800B39F8
  c->r[27]=c->r[27]+0x00000001u; // 800B39FC
L_800B3A00:;
  cmps(c,0,(int32_t)c->r[27],1); // 800B3A00
  if (crb(c,0)) { IRQCHK(c); goto L_800B38F0; } // 800B3A04
  c->r[10]=c->r[31]|c->r[31]; // 800B3A08
  c->r[11]=c->r[10]+0x000000C0u; // 800B3A0C
  c->lr=0x800B3A14u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800B3A10
  c->r[10]=R32(c->r[1]+0x00000000u); // 800B3A14
  c->r[0]=R32(c->r[10]+0x00000004u); // 800B3A18
  c->r[1]=c->r[10]|c->r[10]; // 800B3A1C
  c->lr=c->r[0]; // 800B3A20
  return; // 800B3A24
}

// fn_800B3A28
void f_800B3A28(Ctx* __restrict c) {
  trace_call(0x800B3A28u);
  return; // 800B3A28
}

// fn_800B3A2C
void f_800B3A2C(Ctx* __restrict c) {
  trace_call(0x800B3A2Cu);
  return; // 800B3A2C
}

// fn_800B3A30
void f_800B3A30(Ctx* __restrict c) {
  trace_call(0x800B3A30u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B3A30
  c->r[0]=c->lr; // 800B3A34
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B3A38
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800B3A3C
  c->r[31]=c->r[3]|c->r[3]; // 800B3A40
  c->lr=0x800B3A48u; f_800B40E0(c); // 800B3A44
  c->r[3]=c->r[31]+0x000000BCu; // 800B3A48
  c->r[4]=0u+0x00000000u; // 800B3A4C
  c->lr=0x800B3A54u; f_800AE63C(c); // 800B3A50
  c->r[0]=R32(c->r[1]+0x00000014u); // 800B3A54
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800B3A58
  c->lr=c->r[0]; // 800B3A5C
  c->r[1]=c->r[1]+0x00000010u; // 800B3A60
  return; // 800B3A64
}

// fn_800B3A68
void f_800B3A68(Ctx* __restrict c) {
  trace_call(0x800B3A68u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B3A68
  c->r[0]=c->lr; // 800B3A6C
  c->r[4]=0u+0x00000000u; // 800B3A70
  c->r[3]=c->r[3]+0x000000BCu; // 800B3A74
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B3A78
  c->lr=0x800B3A80u; f_800AE63C(c); // 800B3A7C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800B3A80
  c->r[3]=0u+0x00000001u; // 800B3A84
  c->lr=c->r[0]; // 800B3A88
  c->r[1]=c->r[1]+0x00000010u; // 800B3A8C
  return; // 800B3A90
}

// fn_800B3A94
void f_800B3A94(Ctx* __restrict c) {
  trace_call(0x800B3A94u);
  {uint32_t ea=c->r[1]+0xFFFFFF40u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B3A94
  c->r[0]=c->lr; // 800B3A98
  W32(c->r[1]+0x000000C4u,c->r[0]); // 800B3A9C
  c->r[11]=c->r[1]+0x000000B0u; // 800B3AA0
  {uint32_t ea=c->r[1]+0x000000B0u; WF64(ea,c->f[31]);} // 800B3AA4
  {uint32_t ea=c->r[1]+0x000000B8u; psq_store(c,31,ea,0,0);} // 800B3AA8
  c->lr=0x800B3AB0u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800B3AAC
  {uint32_t ea=c->r[2]+0xFFFF9D18u; c->f[1]=c->ps1[1]=RF32(ea);} // 800B3AB0
  c->r[27]=c->r[3]|c->r[3]; // 800B3AB4
  {uint32_t ea=c->r[6]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B3AB8
  c->r[28]=c->r[4]|c->r[4]; // 800B3ABC
  c->r[29]=c->r[5]|c->r[5]; // 800B3AC0
  c->r[30]=c->r[6]|c->r[6]; // 800B3AC4
  fcmp(c,0,c->f[1],c->f[0]); // 800B3AC8
  c->r[31]=c->r[7]|c->r[7]; // 800B3ACC
  if (!crb(c,2)) { goto L_800B3AEC; } // 800B3AD0
  {uint32_t ea=c->r[6]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B3AD4
  fcmp(c,0,c->f[1],c->f[0]); // 800B3AD8
  if (!crb(c,2)) { goto L_800B3AEC; } // 800B3ADC
  {uint32_t ea=c->r[6]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B3AE0
  fcmp(c,0,c->f[1],c->f[0]); // 800B3AE4
  if (crb(c,2)) { goto L_800B3C64; } // 800B3AE8
L_800B3AEC:;
  c->r[3]=c->r[1]+0x00000060u; // 800B3AEC
  c->lr=0x800B3AF4u; f_80382F00(c); // 800B3AF0
  {uint32_t ea=c->r[1]+0x00000060u; c->f[5]=c->ps1[5]=RF32(ea);} // 800B3AF4
  c->r[3]=c->r[30]|c->r[30]; // 800B3AF8
  {uint32_t ea=c->r[1]+0x00000070u; c->f[4]=c->ps1[4]=RF32(ea);} // 800B3AFC
  c->r[4]=c->r[1]+0x00000014u; // 800B3B00
  {uint32_t ea=c->r[1]+0x00000080u; c->f[3]=c->ps1[3]=RF32(ea);} // 800B3B04
  {uint32_t ea=c->r[1]+0x00000068u; c->f[2]=c->ps1[2]=RF32(ea);} // 800B3B08
  {uint32_t ea=c->r[1]+0x00000078u; c->f[1]=c->ps1[1]=RF32(ea);} // 800B3B0C
  {uint32_t ea=c->r[1]+0x00000088u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B3B10
  {uint32_t ea=c->r[1]+0x00000020u; WF32(ea,c->f[5]);} // 800B3B14
  {uint32_t ea=c->r[1]+0x00000024u; WF32(ea,c->f[4]);} // 800B3B18
  {uint32_t ea=c->r[1]+0x00000028u; WF32(ea,c->f[3]);} // 800B3B1C
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[2]);} // 800B3B20
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[1]);} // 800B3B24
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[0]);} // 800B3B28
  c->lr=0x800B3B30u; f_80383D38(c); // 800B3B2C
  c->r[3]=c->r[1]+0x00000020u; // 800B3B30
  c->r[4]=c->r[1]+0x00000014u; // 800B3B34
  c->lr=0x800B3B3Cu; f_800B3C8C(c); // 800B3B38
  c->lr=0x800B3B40u; f_800B3C84(c); // 800B3B3C
  c->f[31]=c->f[1]; // 800B3B40
  c->r[3]=c->r[1]+0x00000008u; // 800B3B44
  c->r[4]=c->r[1]+0x00000014u; // 800B3B48
  c->lr=0x800B3B50u; f_800B3C8C(c); // 800B3B4C
  c->lr=0x800B3B54u; f_800B3C84(c); // 800B3B50
  fcmp(c,0,c->f[31],c->f[1]); // 800B3B54
  if (!crb(c,0)) { goto L_800B3B80; } // 800B3B58
  c->r[3]=c->r[1]+0x00000020u; // 800B3B5C
  c->r[4]=c->r[1]+0x00000014u; // 800B3B60
  c->r[5]=c->r[1]+0x00000008u; // 800B3B64
  c->lr=0x800B3B6Cu; f_80383DE0(c); // 800B3B68
  c->r[3]=c->r[1]+0x00000014u; // 800B3B6C
  c->r[4]=c->r[1]+0x00000008u; // 800B3B70
  c->r[5]=c->r[1]+0x00000020u; // 800B3B74
  c->lr=0x800B3B7Cu; f_80383DE0(c); // 800B3B78
  goto L_800B3BA0; // 800B3B7C
L_800B3B80:;
  c->r[3]=c->r[1]+0x00000014u; // 800B3B80
  c->r[4]=c->r[1]+0x00000008u; // 800B3B84
  c->r[5]=c->r[1]+0x00000020u; // 800B3B88
  c->lr=0x800B3B90u; f_80383DE0(c); // 800B3B8C
  c->r[3]=c->r[1]+0x00000020u; // 800B3B90
  c->r[4]=c->r[1]+0x00000014u; // 800B3B94
  c->r[5]=c->r[1]+0x00000008u; // 800B3B98
  c->lr=0x800B3BA0u; f_80383DE0(c); // 800B3B9C
L_800B3BA0:;
  {uint32_t ea=c->r[1]+0x00000020u; c->f[8]=c->ps1[8]=RF32(ea);} // 800B3BA0
  {uint32_t ea=c->r[1]+0x00000024u; c->f[7]=c->ps1[7]=RF32(ea);} // 800B3BA4
  {uint32_t ea=c->r[1]+0x00000028u; c->f[6]=c->ps1[6]=RF32(ea);} // 800B3BA8
  {uint32_t ea=c->r[1]+0x00000014u; c->f[5]=c->ps1[5]=RF32(ea);} // 800B3BAC
  {uint32_t ea=c->r[1]+0x00000018u; c->f[4]=c->ps1[4]=RF32(ea);} // 800B3BB0
  {uint32_t ea=c->r[1]+0x0000001Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 800B3BB4
  {uint32_t ea=c->r[1]+0x00000008u; c->f[2]=c->ps1[2]=RF32(ea);} // 800B3BB8
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800B3BBC
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B3BC0
  {uint32_t ea=c->r[1]+0x00000060u; WF32(ea,c->f[8]);} // 800B3BC4
  {uint32_t ea=c->r[1]+0x00000070u; WF32(ea,c->f[7]);} // 800B3BC8
  {uint32_t ea=c->r[1]+0x00000080u; WF32(ea,c->f[6]);} // 800B3BCC
  {uint32_t ea=c->r[1]+0x00000064u; WF32(ea,c->f[5]);} // 800B3BD0
  {uint32_t ea=c->r[1]+0x00000074u; WF32(ea,c->f[4]);} // 800B3BD4
  {uint32_t ea=c->r[1]+0x00000084u; WF32(ea,c->f[3]);} // 800B3BD8
  {uint32_t ea=c->r[1]+0x00000068u; WF32(ea,c->f[2]);} // 800B3BDC
  {uint32_t ea=c->r[1]+0x00000078u; WF32(ea,c->f[1]);} // 800B3BE0
  {uint32_t ea=c->r[1]+0x00000088u; WF32(ea,c->f[0]);} // 800B3BE4
  c->lr=0x800B3BECu; f_803B220C(c); // 800B3BE8
  c->r[3]=c->r[3]^0x80000000u; // 800B3BEC
  c->r[0]=0u+0x43300000u; // 800B3BF0
  W32(c->r[1]+0x00000094u,c->r[3]); // 800B3BF4
  c->r[3]=c->r[1]+0x00000030u; // 800B3BF8
  {uint32_t ea=c->r[2]+0xFFFF9D28u; c->f[4]=RF64(ea);} // 800B3BFC
  W32(c->r[1]+0x00000090u,c->r[0]); // 800B3C00
  {uint32_t ea=c->r[2]+0xFFFF9D18u; c->f[1]=c->ps1[1]=RF32(ea);} // 800B3C04
  {uint32_t ea=c->r[1]+0x00000090u; c->f[0]=RF64(ea);} // 800B3C08
  {uint32_t ea=c->r[2]+0xFFFF9D1Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 800B3C0C
  c->f[3]=c->f[1]; // 800B3C10
  c->f[4]=c->ps1[4]=S(c->f[0]-c->f[4]); // 800B3C14
  {uint32_t ea=c->r[2]+0xFFFF9D20u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B3C18
  c->f[2]=c->ps1[2]=S(c->f[2]*c->f[4]); // 800B3C1C
  c->f[2]=c->ps1[2]=S(c->f[0]*c->f[2]); // 800B3C20
  c->lr=0x800B3C28u; f_804E18A0(c); // 800B3C24
  c->r[3]=c->r[1]+0x00000060u; // 800B3C28
  c->r[4]=c->r[1]+0x00000030u; // 800B3C2C
  c->r[5]=c->r[3]|c->r[3]; // 800B3C30
  c->lr=0x800B3C38u; f_80382F60(c); // 800B3C34
  {uint32_t ea=c->r[29]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B3C38
  c->r[3]=c->r[27]|c->r[27]; // 800B3C3C
  {uint32_t ea=c->r[1]+0x0000006Cu; WF32(ea,c->f[0]);} // 800B3C40
  c->r[4]=c->r[28]|c->r[28]; // 800B3C44
  c->r[6]=c->r[31]|c->r[31]; // 800B3C48
  c->r[5]=c->r[1]+0x00000060u; // 800B3C4C
  {uint32_t ea=c->r[29]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B3C50
  {uint32_t ea=c->r[1]+0x0000007Cu; WF32(ea,c->f[0]);} // 800B3C54
  {uint32_t ea=c->r[29]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B3C58
  {uint32_t ea=c->r[1]+0x0000008Cu; WF32(ea,c->f[0]);} // 800B3C5C
  c->lr=0x800B3C64u; f_800B3CAC(c); // 800B3C60
L_800B3C64:;
  c->r[11]=c->r[1]+0x000000B0u; // 800B3C64
  {uint32_t ea=c->r[1]+0x000000B8u; psq_load(c,31,ea,0,0);} // 800B3C68
  {uint32_t ea=c->r[1]+0x000000B0u; c->f[31]=RF64(ea);} // 800B3C6C
  c->lr=0x800B3C74u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800B3C70
  c->r[0]=R32(c->r[1]+0x000000C4u); // 800B3C74
  c->lr=c->r[0]; // 800B3C78
  c->r[1]=c->r[1]+0x000000C0u; // 800B3C7C
  return; // 800B3C80
}

// fn_800B3C84
void f_800B3C84(Ctx* __restrict c) {
  trace_call(0x800B3C84u);
  c->f[1]=std::fabs(c->f[1]); // 800B3C84
  return; // 800B3C88
}

// fn_800B3C8C
void f_800B3C8C(Ctx* __restrict c) {
  trace_call(0x800B3C8Cu);
  {uint32_t ea=c->r[3]+0x00000004u; psq_load(c,0,ea,0,0);} // 800B3C8C
  {uint32_t ea=c->r[4]+0x00000004u; psq_load(c,1,ea,0,0);} // 800B3C90
  {double t0=S(c->f[0]*c->f[1]), t1=S(c->ps1[0]*c->ps1[1]); c->f[0]=t0; c->ps1[0]=t1;} // 800B3C94
  {uint32_t ea=c->r[3]+0x00000000u; psq_load(c,2,ea,1,0);} // 800B3C98
  {uint32_t ea=c->r[4]+0x00000000u; psq_load(c,1,ea,1,0);} // 800B3C9C
  {double t0=S(std::fma(c->f[2],c->f[1],c->f[0])), t1=S(std::fma(c->ps1[2],c->ps1[1],c->ps1[0])); c->f[1]=t0; c->ps1[1]=t1;} // 800B3CA0
  {double t0=S(c->f[1]+c->ps1[0]), t1=S(c->ps1[0]); c->f[1]=t0; c->ps1[1]=t1;} // 800B3CA4
  return; // 800B3CA8
}

// fn_800B3CAC
void f_800B3CAC(Ctx* __restrict c) {
  trace_call(0x800B3CACu);
  {uint32_t ea=c->r[1]+0xFFFFFF10u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B3CAC
  c->r[0]=c->lr; // 800B3CB0
  W32(c->r[1]+0x000000F4u,c->r[0]); // 800B3CB4
  c->r[11]=c->r[1]+0x000000B0u; // 800B3CB8
  {uint32_t ea=c->r[1]+0x000000E0u; WF64(ea,c->f[31]);} // 800B3CBC
  {uint32_t ea=c->r[1]+0x000000E8u; psq_store(c,31,ea,0,0);} // 800B3CC0
  {uint32_t ea=c->r[1]+0x000000D0u; WF64(ea,c->f[30]);} // 800B3CC4
  {uint32_t ea=c->r[1]+0x000000D8u; psq_store(c,30,ea,0,0);} // 800B3CC8
  {uint32_t ea=c->r[1]+0x000000C0u; WF64(ea,c->f[29]);} // 800B3CCC
  {uint32_t ea=c->r[1]+0x000000C8u; psq_store(c,29,ea,0,0);} // 800B3CD0
  {uint32_t ea=c->r[1]+0x000000B0u; WF64(ea,c->f[28]);} // 800B3CD4
  {uint32_t ea=c->r[1]+0x000000B8u; psq_store(c,28,ea,0,0);} // 800B3CD8
  c->lr=0x800B3CE0u; { W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800B3CDC
  cmps(c,0,(int32_t)c->r[4],0); // 800B3CE0
  c->r[23]=c->r[3]|c->r[3]; // 800B3CE4
  c->r[24]=c->r[4]|c->r[4]; // 800B3CE8
  c->r[25]=c->r[5]|c->r[5]; // 800B3CEC
  c->r[26]=c->r[6]|c->r[6]; // 800B3CF0
  if (crb(c,2)) { goto L_800B3CFC; } // 800B3CF4
  c->r[24]=0u+0x00000000u; // 800B3CF8
L_800B3CFC:;
  c->r[31]=0u+0x00000000u; // 800B3CFC
  W8(c->r[1]+0x0000000Cu,c->r[31]); // 800B3D00
  c->r[3]=c->r[1]+0x0000000Cu; // 800B3D04
  c->lr=0x800B3D0Cu; f_80047A80(c); // 800B3D08
  c->r[3]=R32(c->r[3]+0x00000004u); // 800B3D0C
  c->lr=0x800B3D14u; f_804CC8D4(c); // 800B3D10
  W32(c->r[1]+0x00000014u,c->r[3]); // 800B3D14
  c->r[3]=c->r[1]+0x00000014u; // 800B3D18
  c->r[4]=c->r[1]+0x00000030u; // 800B3D1C
  c->lr=0x800B3D24u; f_804C7AC0(c); // 800B3D20
  W8(c->r[1]+0x00000008u,c->r[31]); // 800B3D24
  c->r[3]=c->r[1]+0x00000008u; // 800B3D28
  c->lr=0x800B3D30u; f_80047A80(c); // 800B3D2C
  c->r[3]=R32(c->r[3]+0x00000004u); // 800B3D30
  c->lr=0x800B3D38u; f_804CC8D4(c); // 800B3D34
  W32(c->r[1]+0x00000010u,c->r[3]); // 800B3D38
  c->r[3]=c->r[1]+0x00000010u; // 800B3D3C
  c->r[4]=c->r[1]+0x00000054u; // 800B3D40
  c->lr=0x800B3D48u; f_804C7D10(c); // 800B3D44
  {uint32_t ea=c->r[1]+0x00000064u; c->f[2]=c->ps1[2]=RF32(ea);} // 800B3D48
  c->r[3]=c->r[1]+0x00000048u; // 800B3D4C
  {uint32_t ea=c->r[1]+0x00000068u; c->f[1]=c->ps1[1]=RF32(ea);} // 800B3D50
  c->r[4]=c->r[3]|c->r[3]; // 800B3D54
  {uint32_t ea=c->r[1]+0x0000006Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800B3D58
  c->r[5]=c->r[1]+0x00000030u; // 800B3D5C
  {uint32_t ea=c->r[1]+0x00000048u; WF32(ea,c->f[2]);} // 800B3D60
  {uint32_t ea=c->r[1]+0x0000004Cu; WF32(ea,c->f[1]);} // 800B3D64
  {uint32_t ea=c->r[1]+0x00000050u; WF32(ea,c->f[0]);} // 800B3D68
  c->lr=0x800B3D70u; f_800772A0(c); // 800B3D6C
  {uint32_t ea=c->r[25]+0x0000002Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 800B3D70
  c->r[3]=c->r[1]+0x00000030u; // 800B3D74
  {uint32_t ea=c->r[25]+0x0000001Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800B3D78
  c->r[4]=c->r[1]+0x0000003Cu; // 800B3D7C
  {uint32_t ea=c->r[25]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800B3D80
  {uint32_t ea=c->r[1]+0x0000003Cu; WF32(ea,c->f[0]);} // 800B3D84
  {uint32_t ea=c->r[1]+0x00000040u; WF32(ea,c->f[1]);} // 800B3D88
  {uint32_t ea=c->r[1]+0x00000044u; WF32(ea,c->f[2]);} // 800B3D8C
  c->lr=0x800B3D94u; f_800B3EFC(c); // 800B3D90
  c->f[30]=c->f[1]; // 800B3D94
  {uint32_t ea=c->r[2]+0xFFFF9D30u; c->f[29]=c->ps1[29]=RF32(ea);} // 800B3D98
  {uint32_t ea=c->r[2]+0xFFFF9D18u; c->f[31]=c->ps1[31]=RF32(ea);} // 800B3D9C
  c->r[29]=0u+0xFFFFFFFFu; // 800B3DA0
  c->r[28]=0u+0xFFFFFFFFu; // 800B3DA4
  c->r[27]=0u+0x00000000u; // 800B3DA8
L_800B3DAC:;
  c->r[0]=R32(c->r[23]+0x000000B4u); // 800B3DAC
  c->r[30]=c->r[0]+c->r[31]; // 800B3DB0
  c->r[0]=R32(c->r[30]+0x0000000Cu); // 800B3DB4
  cmps(c,0,(int32_t)c->r[0],0); // 800B3DB8
  if (!crb(c,0)) { goto L_800B3DDC; } // 800B3DBC
  c->r[3]=c->r[23]|c->r[23]; // 800B3DC0
  c->r[4]=c->r[24]|c->r[24]; // 800B3DC4
  c->r[5]=c->r[25]|c->r[25]; // 800B3DC8
  c->r[6]=c->r[27]|c->r[27]; // 800B3DCC
  c->r[7]=c->r[26]|c->r[26]; // 800B3DD0
  c->lr=0x800B3DD8u; f_800B416C(c); // 800B3DD4
  goto L_800B3E9C; // 800B3DD8
L_800B3DDC:;
  c->r[4]=c->r[30]|c->r[30]; // 800B3DDC
  c->r[3]=c->r[1]+0x00000030u; // 800B3DE0
  c->lr=0x800B3DE8u; f_800B3EFC(c); // 800B3DE4
  c->f[28]=c->f[1]; // 800B3DE8
  cmps(c,0,(int32_t)c->r[28],0); // 800B3DEC
  if (!crb(c,0)) { goto L_800B3E4C; } // 800B3DF0
  fcmp(c,0,c->f[1],c->f[29]); // 800B3DF4
  if (!crb(c,1)) { goto L_800B3E0C; } // 800B3DF8
  fcmp(c,0,c->f[1],c->f[30]); // 800B3DFC
  if (!crb(c,1)) { goto L_800B3E0C; } // 800B3E00
  c->f[29]=c->f[28]; // 800B3E04
  c->r[29]=c->r[27]|c->r[27]; // 800B3E08
L_800B3E0C:;
  c->r[4]=c->r[30]|c->r[30]; // 800B3E0C
  c->r[3]=c->r[1]+0x00000024u; // 800B3E10
  c->r[5]=c->r[1]+0x00000030u; // 800B3E14
  c->lr=0x800B3E1Cu; f_800772A0(c); // 800B3E18
  c->r[3]=c->r[1]+0x0000003Cu; // 800B3E1C
  c->r[4]=c->r[1]+0x00000024u; // 800B3E20
  c->lr=0x800B3E28u; f_8005DC84(c); // 800B3E24
  c->r[3]=c->r[1]+0x00000048u; // 800B3E28
  c->r[4]=c->r[1]+0x0000003Cu; // 800B3E2C
  c->lr=0x800B3E34u; f_800B3F44(c); // 800B3E30
  fcmp(c,0,c->f[1],c->f[31]); // 800B3E34
  if (!crb(c,0)) { goto L_800B3E8C; } // 800B3E38
  c->f[29]=c->f[28]; // 800B3E3C
  c->r[29]=c->r[27]|c->r[27]; // 800B3E40
  c->r[28]=0u+0x00000001u; // 800B3E44
  goto L_800B3E8C; // 800B3E48
L_800B3E4C:;
  c->r[4]=c->r[30]|c->r[30]; // 800B3E4C
  c->r[3]=c->r[1]+0x00000018u; // 800B3E50
  c->r[5]=c->r[1]+0x00000030u; // 800B3E54
  c->lr=0x800B3E5Cu; f_800772A0(c); // 800B3E58
  c->r[3]=c->r[1]+0x0000003Cu; // 800B3E5C
  c->r[4]=c->r[1]+0x00000018u; // 800B3E60
  c->lr=0x800B3E68u; f_8005DC84(c); // 800B3E64
  c->r[3]=c->r[1]+0x00000048u; // 800B3E68
  c->r[4]=c->r[1]+0x0000003Cu; // 800B3E6C
  c->lr=0x800B3E74u; f_800B3F44(c); // 800B3E70
  fcmp(c,0,c->f[1],c->f[31]); // 800B3E74
  if (!crb(c,0)) { goto L_800B3E8C; } // 800B3E78
  fcmp(c,0,c->f[28],c->f[29]); // 800B3E7C
  if (!crb(c,1)) { goto L_800B3E8C; } // 800B3E80
  c->f[29]=c->f[28]; // 800B3E84
  c->r[29]=c->r[27]|c->r[27]; // 800B3E88
L_800B3E8C:;
  c->r[27]=c->r[27]+0x00000001u; // 800B3E8C
  c->r[31]=c->r[31]+0x00000010u; // 800B3E90
  cmps(c,0,(int32_t)c->r[27],32); // 800B3E94
  if (crb(c,0)) { IRQCHK(c); goto L_800B3DAC; } // 800B3E98
L_800B3E9C:;
  cmps(c,0,(int32_t)c->r[27],32); // 800B3E9C
  if (crb(c,0)) { goto L_800B3EC4; } // 800B3EA0
  cmps(c,0,(int32_t)c->r[29],0); // 800B3EA4
  if (crb(c,0)) { goto L_800B3EC4; } // 800B3EA8
  c->r[3]=c->r[23]|c->r[23]; // 800B3EAC
  c->r[4]=c->r[24]|c->r[24]; // 800B3EB0
  c->r[5]=c->r[25]|c->r[25]; // 800B3EB4
  c->r[6]=c->r[29]|c->r[29]; // 800B3EB8
  c->r[7]=c->r[26]|c->r[26]; // 800B3EBC
  c->lr=0x800B3EC4u; f_800B416C(c); // 800B3EC0
L_800B3EC4:;
  c->r[11]=c->r[1]+0x000000B0u; // 800B3EC4
  {uint32_t ea=c->r[1]+0x000000E8u; psq_load(c,31,ea,0,0);} // 800B3EC8
  {uint32_t ea=c->r[1]+0x000000E0u; c->f[31]=RF64(ea);} // 800B3ECC
  {uint32_t ea=c->r[1]+0x000000D8u; psq_load(c,30,ea,0,0);} // 800B3ED0
  {uint32_t ea=c->r[1]+0x000000D0u; c->f[30]=RF64(ea);} // 800B3ED4
  {uint32_t ea=c->r[1]+0x000000C8u; psq_load(c,29,ea,0,0);} // 800B3ED8
  {uint32_t ea=c->r[1]+0x000000C0u; c->f[29]=RF64(ea);} // 800B3EDC
  {uint32_t ea=c->r[1]+0x000000B8u; psq_load(c,28,ea,0,0);} // 800B3EE0
  {uint32_t ea=c->r[1]+0x000000B0u; c->f[28]=RF64(ea);} // 800B3EE4
  c->lr=0x800B3EECu; { c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800B3EE8
  c->r[0]=R32(c->r[1]+0x000000F4u); // 800B3EEC
  c->lr=c->r[0]; // 800B3EF0
  c->r[1]=c->r[1]+0x000000F0u; // 800B3EF4
  return; // 800B3EF8
}

// fn_800B3EFC
void f_800B3EFC(Ctx* __restrict c) {
  trace_call(0x800B3EFCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B3EFC
  c->r[0]=c->lr; // 800B3F00
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B3F04
  c->lr=0x800B3F0Cu; f_80383EF4(c); // 800B3F08
  c->r[3]=0u+0x806A0000u; // 800B3F0C
  c->r[3]=c->r[3]+0x00000AA8u; // 800B3F10
  {uint32_t ea=c->r[3]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 800B3F14
  c->f[4]=frsqrte(c->f[1]); // 800B3F18
  {uint32_t ea=c->r[3]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B3F1C
  c->f[3]=c->ps1[3]=S(c->f[4]*c->f[4]); // 800B3F20
  c->f[2]=c->ps1[2]=S(c->f[4]*c->f[2]); // 800B3F24
  c->f[3]=c->ps1[3]=S(-std::fma(c->f[3],c->f[1],-c->f[0])); // 800B3F28
  c->f[4]=c->ps1[4]=S(c->f[3]*c->f[2]); // 800B3F2C
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[4]); // 800B3F30
  c->r[0]=R32(c->r[1]+0x00000014u); // 800B3F34
  c->lr=c->r[0]; // 800B3F38
  c->r[1]=c->r[1]+0x00000010u; // 800B3F3C
  return; // 800B3F40
}

// fn_800B3F44
void f_800B3F44(Ctx* __restrict c) {
  trace_call(0x800B3F44u);
  {uint32_t ea=c->r[3]+0x00000004u; psq_load(c,1,ea,0,0);} // 800B3F44
  {uint32_t ea=c->r[4]+0x00000004u; psq_load(c,0,ea,0,0);} // 800B3F48
  {double t0=S(c->f[1]*c->f[0]), t1=S(c->ps1[1]*c->ps1[0]); c->f[0]=t0; c->ps1[0]=t1;} // 800B3F4C
  {uint32_t ea=c->r[3]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 800B3F50
  {double t0=S(c->f[0]+c->ps1[0]), t1=S(c->ps1[1]); c->f[0]=t0; c->ps1[0]=t1;} // 800B3F54
  {uint32_t ea=c->r[4]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 800B3F58
  {double t0=S(std::fma(c->f[1],c->ps1[0],c->f[0])), t1=S(std::fma(c->ps1[1],c->ps1[0],c->ps1[0])); c->f[1]=t0; c->ps1[1]=t1;} // 800B3F5C
  return; // 800B3F60
}

// fn_800B3F64
void f_800B3F64(Ctx* __restrict c) {
  trace_call(0x800B3F64u);
  cmps(c,0,(int32_t)c->r[4],1); // 800B3F64
  if (crb(c,0)) { goto L_800B3F70; } // 800B3F68
  c->r[4]=0u+0xFFFFFFFFu; // 800B3F6C
L_800B3F70:;
  cmps(c,0,(int32_t)c->r[4],0); // 800B3F70
  if (!crb(c,0)) { goto L_800B3F80; } // 800B3F74
  {uint32_t ea=c->r[3]+0x00000104u; c->f[1]=c->ps1[1]=RF32(ea);} // 800B3F78
  return; // 800B3F7C
L_800B3F80:;
  c->r[3]=R32(c->r[3]+0x000000B8u); // 800B3F80
  c->r[0]=rotl(c->r[4],4)&0xFFFFFFF0u; // 800B3F84
  c->r[3]=c->r[3]+c->r[0]; // 800B3F88
  {uint32_t ea=c->r[3]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800B3F8C
  return; // 800B3F90
}

// fn_800B3F94
void f_800B3F94(Ctx* __restrict c) {
  trace_call(0x800B3F94u);
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B3F94
  c->r[0]=c->lr; // 800B3F98
  W32(c->r[1]+0x00000064u,c->r[0]); // 800B3F9C
  c->r[11]=c->r[1]+0x00000040u; // 800B3FA0
  {uint32_t ea=c->r[1]+0x00000050u; WF64(ea,c->f[31]);} // 800B3FA4
  {uint32_t ea=c->r[1]+0x00000058u; psq_store(c,31,ea,0,0);} // 800B3FA8
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[30]);} // 800B3FAC
  {uint32_t ea=c->r[1]+0x00000048u; psq_store(c,30,ea,0,0);} // 800B3FB0
  c->lr=0x800B3FB8u; { W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800B3FB4
  c->r[29]=0u+0x806A0000u; // 800B3FB8
  {uint32_t ea=c->r[2]+0xFFFF9D34u; c->f[31]=c->ps1[31]=RF32(ea);} // 800B3FBC
  c->r[24]=c->r[3]|c->r[3]; // 800B3FC0
  c->r[25]=c->r[4]|c->r[4]; // 800B3FC4
  c->r[30]=c->r[1]+0x00000014u; // 800B3FC8
  c->r[29]=c->r[29]+0x00000AA8u; // 800B3FCC
  c->r[26]=0u+0x00000000u; // 800B3FD0
  c->r[27]=0u+0x00000000u; // 800B3FD4
  c->r[31]=0u+0x00000000u; // 800B3FD8
L_800B3FDC:;
  c->r[0]=R32(c->r[24]+0x000000B4u); // 800B3FDC
  c->r[28]=c->r[0]+c->r[31]; // 800B3FE0
  c->r[0]=R32(c->r[28]+0x0000000Cu); // 800B3FE4
  cmps(c,1,(int32_t)c->r[0],0); // 800B3FE8
  if (crb(c,4)) { goto L_800B40A4; } // 800B3FEC
  c->r[4]=c->r[25]|c->r[25]; // 800B3FF0
  c->r[5]=c->r[28]|c->r[28]; // 800B3FF4
  c->r[3]=c->r[1]+0x00000008u; // 800B3FF8
  c->lr=0x800B4000u; f_800772A0(c); // 800B3FFC
  c->r[3]=c->r[1]+0x00000014u; // 800B4000
  c->r[4]=c->r[1]+0x00000008u; // 800B4004
  c->lr=0x800B400Cu; f_8005DC84(c); // 800B4008
  {uint32_t ea=c->r[30]+0x00000004u; psq_load(c,1,ea,0,0);} // 800B400C
  {double t0=S(c->f[1]*c->f[1]), t1=S(c->ps1[1]*c->ps1[1]); c->f[0]=t0; c->ps1[0]=t1;} // 800B4010
  {uint32_t ea=c->r[1]+0x00000014u; c->f[1]=c->ps1[1]=RF32(ea);} // 800B4014
  {double t0=S(c->f[0]+c->ps1[0]), t1=S(c->ps1[1]); c->f[0]=t0; c->ps1[0]=t1;} // 800B4018
  {double t0=S(std::fma(c->f[1],c->ps1[0],c->f[0])), t1=S(std::fma(c->ps1[1],c->ps1[0],c->ps1[0])); c->f[1]=t0; c->ps1[1]=t1;} // 800B401C
  fcmp(c,1,c->f[1],c->f[31]); // 800B4020
  c->r[0]=c->cr; // 800B4024
  c->r[0]=rotl(c->r[0],5)&0x00000001u; // 800B4028
  cmps(c,1,(int32_t)c->r[0],0); // 800B402C
  if (!crb(c,6)) { goto L_800B409C; } // 800B4030
  {uint32_t ea=c->r[30]+0x00000004u; psq_load(c,30,ea,0,0);} // 800B4034
  {double t0=S(c->f[30]*c->f[30]), t1=S(c->ps1[30]*c->ps1[30]); c->f[3]=t0; c->ps1[3]=t1;} // 800B4038
  {uint32_t ea=c->r[1]+0x00000014u; c->f[30]=c->ps1[30]=RF32(ea);} // 800B403C
  {double t0=S(c->f[3]+c->ps1[3]), t1=S(c->ps1[30]); c->f[3]=t0; c->ps1[3]=t1;} // 800B4040
  {uint32_t ea=c->r[29]+0x00000000u; c->f[2]=c->ps1[2]=RF32(ea);} // 800B4044
  {double t0=S(std::fma(c->f[30],c->ps1[3],c->f[3])), t1=S(std::fma(c->ps1[30],c->ps1[3],c->ps1[3])); c->f[30]=t0; c->ps1[30]=t1;} // 800B4048
  fcmp(c,0,c->f[2],c->f[30]); // 800B404C
  if (crb(c,0)) { goto L_800B405C; } // 800B4050
  c->f[30]=c->f[2]; // 800B4054
  goto L_800B407C; // 800B4058
L_800B405C:;
  {uint32_t ea=c->r[29]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 800B405C
  c->f[3]=frsqrte(c->f[30]); // 800B4060
  {uint32_t ea=c->r[29]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B4064
  c->f[2]=c->ps1[2]=S(c->f[3]*c->f[3]); // 800B4068
  c->f[1]=c->ps1[1]=S(c->f[3]*c->f[1]); // 800B406C
  c->f[2]=c->ps1[2]=S(-std::fma(c->f[2],c->f[30],-c->f[0])); // 800B4070
  c->f[3]=c->ps1[3]=S(c->f[2]*c->f[1]); // 800B4074
  c->f[30]=c->ps1[30]=S(c->f[30]*c->f[3]); // 800B4078
L_800B407C:;
  c->r[4]=R32(c->r[28]+0x0000000Cu); // 800B407C
  c->r[3]=c->r[24]|c->r[24]; // 800B4080
  c->lr=0x800B4088u; f_800B3F64(c); // 800B4084
  fcmp(c,1,c->f[30],c->f[1]); // 800B4088
  setcrb(c,6,crb(c,4)|crb(c,6)); // 800B408C
  if (!crb(c,6)) { goto L_800B40A4; } // 800B4090
  c->r[26]=0u+0x00000001u; // 800B4094
  goto L_800B40B4; // 800B4098
L_800B409C:;
  c->r[26]=0u+0x00000001u; // 800B409C
  goto L_800B40B4; // 800B40A0
L_800B40A4:;
  c->r[27]=c->r[27]+0x00000001u; // 800B40A4
  c->r[31]=c->r[31]+0x00000010u; // 800B40A8
  cmps(c,1,(int32_t)c->r[27],32); // 800B40AC
  if (crb(c,4)) { IRQCHK(c); goto L_800B3FDC; } // 800B40B0
L_800B40B4:;
  {uint32_t ea=c->r[1]+0x00000058u; psq_load(c,31,ea,0,0);} // 800B40B4
  c->r[3]=c->r[26]|c->r[26]; // 800B40B8
  {uint32_t ea=c->r[1]+0x00000050u; c->f[31]=RF64(ea);} // 800B40BC
  {uint32_t ea=c->r[1]+0x00000048u; psq_load(c,30,ea,0,0);} // 800B40C0
  {uint32_t ea=c->r[1]+0x00000040u; c->f[30]=RF64(ea);} // 800B40C4
  c->r[11]=c->r[1]+0x00000040u; // 800B40C8
  c->lr=0x800B40D0u; { c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800B40CC
  c->r[0]=R32(c->r[1]+0x00000064u); // 800B40D0
  c->lr=c->r[0]; // 800B40D4
  c->r[1]=c->r[1]+0x00000060u; // 800B40D8
  return; // 800B40DC
}

// fn_800B40E0
void f_800B40E0(Ctx* __restrict c) {
  trace_call(0x800B40E0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B40E0
  c->r[0]=c->lr; // 800B40E4
  W32(c->r[1]+0x00000024u,c->r[0]); // 800B40E8
  {uint32_t ea=c->r[1]+0x00000010u; for(int i=28;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800B40EC
  c->r[28]=c->r[3]|c->r[3]; // 800B40F0
  c->r[29]=0u+0x00000000u; // 800B40F4
  c->r[31]=0u+0x00000000u; // 800B40F8
  c->r[30]=0u+0xFFFFFFFFu; // 800B40FC
L_800B4100:;
  c->r[0]=R32(c->r[28]+0x000000B4u); // 800B4100
  c->r[3]=c->r[0]+c->r[31]; // 800B4104
  c->r[0]=R32(c->r[3]+0x0000000Cu); // 800B4108
  cmps(c,0,(int32_t)c->r[0],0); // 800B410C
  if (crb(c,0)) { goto L_800B4124; } // 800B4110
  W32(c->r[3]+0x0000000Cu,c->r[30]); // 800B4114
  c->r[4]=c->r[29]|c->r[29]; // 800B4118
  c->r[3]=c->r[28]+0x000000BCu; // 800B411C
  c->lr=0x800B4124u; f_800AE518(c); // 800B4120
L_800B4124:;
  c->r[29]=c->r[29]+0x00000001u; // 800B4124
  c->r[31]=c->r[31]+0x00000010u; // 800B4128
  cmps(c,0,(int32_t)c->r[29],32); // 800B412C
  if (crb(c,0)) { IRQCHK(c); goto L_800B4100; } // 800B4130
  {uint32_t ea=c->r[1]+0x00000010u; for(int i=28;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800B4134
  c->r[0]=R32(c->r[1]+0x00000024u); // 800B4138
  c->lr=c->r[0]; // 800B413C
  c->r[1]=c->r[1]+0x00000020u; // 800B4140
  return; // 800B4144
}

// fn_800B4148
void f_800B4148(Ctx* __restrict c) {
  trace_call(0x800B4148u);
  {uint32_t ea=c->r[2]+0xFFFF9D18u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B4148
  c->r[0]=0u+0x00000000u; // 800B414C
  W32(c->r[3]+0x000000ACu,c->r[0]); // 800B4150
  W32(c->r[3]+0x000000B0u,c->r[0]); // 800B4154
  W32(c->r[3]+0x000000B4u,c->r[0]); // 800B4158
  W32(c->r[3]+0x000000B8u,c->r[0]); // 800B415C
  W32(c->r[3]+0x00000100u,c->r[0]); // 800B4160
  {uint32_t ea=c->r[3]+0x00000104u; WF32(ea,c->f[0]);} // 800B4164
  return; // 800B4168
}

// fn_800B416C
void f_800B416C(Ctx* __restrict c) {
  trace_call(0x800B416Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B416C
  c->r[0]=c->lr; // 800B4170
  W32(c->r[1]+0x00000054u,c->r[0]); // 800B4174
  c->r[0]=rotl(c->r[4],4)&0xFFFFFFF0u; // 800B4178
  {uint32_t ea=c->r[1]+0x00000038u; for(int i=26;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800B417C
  c->r[28]=c->r[3]|c->r[3]; // 800B4180
  c->r[29]=c->r[5]|c->r[5]; // 800B4184
  c->r[26]=c->r[4]|c->r[4]; // 800B4188
  c->r[30]=c->r[6]|c->r[6]; // 800B418C
  c->r[31]=c->r[7]|c->r[7]; // 800B4190
  c->r[9]=R32(c->r[3]+0x000000B4u); // 800B4194
  c->r[3]=rotl(c->r[6],4)&0xFFFFFFF0u; // 800B4198
  c->r[8]=R32(c->r[28]+0x000000B8u); // 800B419C
  c->r[27]=c->r[9]+c->r[3]; // 800B41A0
  c->r[3]=c->r[29]|c->r[29]; // 800B41A4
  c->r[5]=c->r[27]|c->r[27]; // 800B41A8
  c->r[4]=c->r[8]+c->r[0]; // 800B41AC
  c->lr=0x800B41B4u; f_80383AA0(c); // 800B41B0
  c->r[5]=(uint32_t)((int32_t)c->r[30]*(int32_t)3); // 800B41B4
  c->r[3]=0u+0x806D0000u; // 800B41B8
  c->r[0]=0u+0x00000003u; // 800B41BC
  W32(c->r[27]+0x0000000Cu,c->r[26]); // 800B41C0
  c->r[3]=c->r[3]+0x00006820u; // 800B41C4
  c->r[4]=(uint32_t)((int32_t)c->r[26]*(int32_t)12); // 800B41C8
  c->r[8]=c->r[5]+0x00000083u; // 800B41CC
  c->r[9]=0u+0x00000000u; // 800B41D0
  c->r[5]=c->r[3]+c->r[4]; // 800B41D4
  c->r[3]=0u+0x00000000u; // 800B41D8
  c->r[4]=0u+0x00000000u; // 800B41DC
  c->ctr=c->r[0]; // 800B41E0
L_800B41E4:;
  c->r[6]=c->r[8]+c->r[9]; // 800B41E4
  c->r[7]=c->r[1]+0x00000008u; // 800B41E8
  {uint32_t ea=c->r[7]+c->r[3]; W32(ea,c->r[6]); c->r[7]=ea;} // 800B41EC
  c->r[9]=c->r[9]+0x00000001u; // 800B41F0
  c->r[0]=R32(c->r[5]+c->r[4]); // 800B41F4
  c->r[3]=c->r[3]+0x0000000Cu; // 800B41F8
  W32(c->r[7]+0x00000004u,c->r[6]); // 800B41FC
  c->r[4]=c->r[4]+0x00000004u; // 800B4200
  W32(c->r[7]+0x00000008u,c->r[0]); // 800B4204
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800B41E4; } // 800B4208
  c->r[4]=c->r[30]|c->r[30]; // 800B420C
  c->r[3]=c->r[28]+0x000000BCu; // 800B4210
  c->lr=0x800B4218u; f_800AE518(c); // 800B4214
  c->r[5]=c->r[29]|c->r[29]; // 800B4218
  c->r[6]=c->r[30]|c->r[30]; // 800B421C
  c->r[8]=c->r[31]|c->r[31]; // 800B4220
  c->r[3]=c->r[28]+0x000000BCu; // 800B4224
  c->r[4]=c->r[1]+0x00000008u; // 800B4228
  c->r[7]=0u+0x00000000u; // 800B422C
  c->lr=0x800B4234u; f_800AE348(c); // 800B4230
  c->r[4]=c->r[30]|c->r[30]; // 800B4234
  c->r[3]=c->r[28]+0x000000BCu; // 800B4238
  c->r[5]=0u+0x00000000u; // 800B423C
  c->lr=0x800B4244u; f_800AEE38(c); // 800B4240
  {uint32_t ea=c->r[1]+0x00000038u; for(int i=26;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800B4244
  c->r[0]=R32(c->r[1]+0x00000054u); // 800B4248
  c->lr=c->r[0]; // 800B424C
  c->r[1]=c->r[1]+0x00000050u; // 800B4250
  return; // 800B4254
}

// fn_800B4258
void f_800B4258(Ctx* __restrict c) {
  trace_call(0x800B4258u);
  cmpu(c,0,c->r[4],0x0000001Fu); // 800B4258
  if (!crb(c,1)) { goto L_800B4264; } // 800B425C
  c->r[4]=0u+0x00000000u; // 800B4260
L_800B4264:;
  c->r[3]=R32(c->r[3]+0x000000B4u); // 800B4264
  c->r[0]=rotl(c->r[4],4)&0xFFFFFFF0u; // 800B4268
  c->r[3]=c->r[3]+c->r[0]; // 800B426C
  return; // 800B4270
}

// fn_800B4274
void f_800B4274(Ctx* __restrict c) {
  trace_call(0x800B4274u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B4274
  c->r[0]=c->lr; // 800B4278
  W32(c->r[1]+0x00000034u,c->r[0]); // 800B427C
  c->r[0]=0u+0x00000000u; // 800B4280
  {uint32_t ea=c->r[1]+0x00000020u; for(int i=28;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800B4284
  c->r[28]=c->r[4]|c->r[4]; // 800B4288
  c->r[29]=c->r[5]|c->r[5]; // 800B428C
  c->r[30]=c->r[6]|c->r[6]; // 800B4290
  c->r[31]=0u+0x00000000u; // 800B4294
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B4298
  goto L_800B4308; // 800B429C
L_800B42A0:;
  c->r[3]=c->r[28]|c->r[28]; // 800B42A0
  c->r[4]=c->r[31]|c->r[31]; // 800B42A4
  c->lr=0x800B42ACu; f_804ACA48(c); // 800B42A8
  W32(c->r[1]+0x00000010u,c->r[3]); // 800B42AC
  c->r[3]=c->r[1]+0x00000010u; // 800B42B0
  c->lr=0x800B42B8u; f_800B442C(c); // 800B42B4
  W32(c->r[1]+0x00000014u,c->r[3]); // 800B42B8
  c->r[3]=c->r[1]+0x00000014u; // 800B42BC
  c->r[4]=0u+0x00000001u; // 800B42C0
  c->r[5]=0u+0x000000FFu; // 800B42C4
  c->lr=0x800B42CCu; f_804AF010(c); // 800B42C8
  c->r[3]=c->r[1]+0x00000014u; // 800B42CC
  c->r[4]=0u+0x00000001u; // 800B42D0
  c->r[5]=0u+0x00000000u; // 800B42D4
  c->r[6]=0u+0x00000001u; // 800B42D8
  c->r[7]=0u+0x00000000u; // 800B42DC
  c->lr=0x800B42E4u; f_804AEEEC(c); // 800B42E0
  c->r[3]=c->r[1]+0x00000014u; // 800B42E4
  c->r[4]=0u+0x00000001u; // 800B42E8
  c->r[5]=0u+0x00000003u; // 800B42EC
  c->r[6]=0u+0x00000000u; // 800B42F0
  c->lr=0x800B42F8u; f_804AEECC(c); // 800B42F4
  c->r[3]=c->r[1]+0x00000014u; // 800B42F8
  c->r[4]=0u+0x00000000u; // 800B42FC
  c->lr=0x800B4304u; f_804AE618(c); // 800B4300
  c->r[31]=c->r[31]+0x00000001u; // 800B4304
L_800B4308:;
  c->r[3]=c->r[28]|c->r[28]; // 800B4308
  c->lr=0x800B4310u; f_804ACA9C(c); // 800B430C
  cmpu(c,0,c->r[31],c->r[3]); // 800B4310
  if (crb(c,0)) { IRQCHK(c); goto L_800B42A0; } // 800B4314
  c->r[31]=0u+0x00000000u; // 800B4318
  goto L_800B4388; // 800B431C
L_800B4320:;
  c->r[3]=c->r[29]|c->r[29]; // 800B4320
  c->r[4]=c->r[31]|c->r[31]; // 800B4324
  c->lr=0x800B432Cu; f_804ACA48(c); // 800B4328
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 800B432C
  c->r[3]=c->r[1]+0x0000000Cu; // 800B4330
  c->lr=0x800B4338u; f_800B442C(c); // 800B4334
  W32(c->r[1]+0x00000014u,c->r[3]); // 800B4338
  c->r[3]=c->r[1]+0x00000014u; // 800B433C
  c->r[4]=0u+0x00000001u; // 800B4340
  c->r[5]=0u+0x00000000u; // 800B4344
  c->lr=0x800B434Cu; f_804AF010(c); // 800B4348
  c->r[3]=c->r[1]+0x00000014u; // 800B434C
  c->r[4]=0u+0x00000001u; // 800B4350
  c->r[5]=0u+0x00000000u; // 800B4354
  c->r[6]=0u+0x00000001u; // 800B4358
  c->r[7]=0u+0x00000000u; // 800B435C
  c->lr=0x800B4364u; f_804AEEEC(c); // 800B4360
  c->r[3]=c->r[1]+0x00000014u; // 800B4364
  c->r[4]=0u+0x00000001u; // 800B4368
  c->r[5]=0u+0x00000003u; // 800B436C
  c->r[6]=0u+0x00000000u; // 800B4370
  c->lr=0x800B4378u; f_804AEECC(c); // 800B4374
  c->r[3]=c->r[1]+0x00000014u; // 800B4378
  c->r[4]=0u+0x00000000u; // 800B437C
  c->lr=0x800B4384u; f_804AE618(c); // 800B4380
  c->r[31]=c->r[31]+0x00000001u; // 800B4384
L_800B4388:;
  c->r[3]=c->r[29]|c->r[29]; // 800B4388
  c->lr=0x800B4390u; f_804ACA9C(c); // 800B438C
  cmpu(c,0,c->r[31],c->r[3]); // 800B4390
  if (crb(c,0)) { IRQCHK(c); goto L_800B4320; } // 800B4394
  c->r[31]=0u+0x00000000u; // 800B4398
  goto L_800B4408; // 800B439C
L_800B43A0:;
  c->r[3]=c->r[30]|c->r[30]; // 800B43A0
  c->r[4]=c->r[31]|c->r[31]; // 800B43A4
  c->lr=0x800B43ACu; f_804ACA48(c); // 800B43A8
  W32(c->r[1]+0x00000008u,c->r[3]); // 800B43AC
  c->r[3]=c->r[1]+0x00000008u; // 800B43B0
  c->lr=0x800B43B8u; f_800B442C(c); // 800B43B4
  W32(c->r[1]+0x00000014u,c->r[3]); // 800B43B8
  c->r[3]=c->r[1]+0x00000014u; // 800B43BC
  c->r[4]=0u+0x00000001u; // 800B43C0
  c->r[5]=0u+0x00000000u; // 800B43C4
  c->lr=0x800B43CCu; f_804AF010(c); // 800B43C8
  c->r[3]=c->r[1]+0x00000014u; // 800B43CC
  c->r[4]=0u+0x00000001u; // 800B43D0
  c->r[5]=0u+0x00000006u; // 800B43D4
  c->r[6]=0u+0x00000007u; // 800B43D8
  c->r[7]=0u+0x00000000u; // 800B43DC
  c->lr=0x800B43E4u; f_804AEEEC(c); // 800B43E0
  c->r[3]=c->r[1]+0x00000014u; // 800B43E4
  c->r[4]=0u+0x00000000u; // 800B43E8
  c->r[5]=0u+0x00000006u; // 800B43EC
  c->r[6]=0u+0x00000000u; // 800B43F0
  c->lr=0x800B43F8u; f_804AEECC(c); // 800B43F4
  c->r[3]=c->r[1]+0x00000014u; // 800B43F8
  c->r[4]=0u+0x00000000u; // 800B43FC
  c->lr=0x800B4404u; f_804AE618(c); // 800B4400
  c->r[31]=c->r[31]+0x00000001u; // 800B4404
L_800B4408:;
  c->r[3]=c->r[30]|c->r[30]; // 800B4408
  c->lr=0x800B4410u; f_804ACA9C(c); // 800B440C
  cmpu(c,0,c->r[31],c->r[3]); // 800B4410
  if (crb(c,0)) { IRQCHK(c); goto L_800B43A0; } // 800B4414
  {uint32_t ea=c->r[1]+0x00000020u; for(int i=28;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800B4418
  c->r[0]=R32(c->r[1]+0x00000034u); // 800B441C
  c->lr=c->r[0]; // 800B4420
  c->r[1]=c->r[1]+0x00000030u; // 800B4424
  return; // 800B4428
}

// fn_800B442C
void f_800B442C(Ctx* __restrict c) {
  trace_call(0x800B442Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B442C
  c->r[0]=c->lr; // 800B4430
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B4434
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800B4438
  c->r[31]=c->r[3]|c->r[3]; // 800B443C
  c->r[0]=R32(c->r[3]+0x00000000u); // 800B4440
  cmps(c,0,(int32_t)c->r[0],0); // 800B4444
  if (!crb(c,2)) { goto L_800B4470; } // 800B4448
  c->r[3]=0u+0x806D0000u; // 800B444C
  c->r[5]=0u+0x806D0000u; // 800B4450
  c->r[3]=c->r[3]+0xFFFFDA88u; // 800B4454
  c->r[4]=0u+0x0000026Du; // 800B4458
  c->r[5]=c->r[5]+0xFFFFDA68u; // 800B445C
  c->r[6]=c->r[13]+0xFFFF805Cu; // 800B4460
  c->r[7]=c->r[13]+0xFFFF8398u; // 800B4464
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800B4468
  c->lr=0x800B4470u; f_80484674(c); // 800B446C
L_800B4470:;
  c->r[3]=R32(c->r[31]+0x00000000u); // 800B4470
  c->r[0]=R32(c->r[3]+0x0000003Cu); // 800B4474
  cmps(c,0,(int32_t)c->r[0],0); // 800B4478
  if (crb(c,2)) { goto L_800B4488; } // 800B447C
  c->r[31]=c->r[3]+c->r[0]; // 800B4480
  goto L_800B448C; // 800B4484
L_800B4488:;
  c->r[31]=0u+0x00000000u; // 800B4488
L_800B448C:;
  c->r[0]=rotl(c->r[31],0)&0x0000001Fu; cr0(c,c->r[0]); // 800B448C
  if (crb(c,2)) { goto L_800B44B0; } // 800B4490
  c->r[3]=0u+0x806D0000u; // 800B4494
  c->r[5]=0u+0x806D0000u; // 800B4498
  c->r[3]=c->r[3]+0xFFFFDBA0u; // 800B449C
  c->r[4]=0u+0x00000154u; // 800B44A0
  c->r[5]=c->r[5]+0xFFFFDB78u; // 800B44A4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800B44A8
  c->lr=0x800B44B0u; f_80484674(c); // 800B44AC
L_800B44B0:;
  c->r[3]=c->r[31]|c->r[31]; // 800B44B0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800B44B4
  c->r[0]=R32(c->r[1]+0x00000014u); // 800B44B8
  c->lr=c->r[0]; // 800B44BC
  c->r[1]=c->r[1]+0x00000010u; // 800B44C0
  return; // 800B44C4
}

// fn_800B44C8
void f_800B44C8(Ctx* __restrict c) {
  trace_call(0x800B44C8u);
  {uint32_t ea=c->r[1]+0xFFFFFF00u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B44C8
  c->r[0]=c->lr; // 800B44CC
  W32(c->r[1]+0x00000104u,c->r[0]); // 800B44D0
  c->r[11]=c->r[1]+0x00000100u; // 800B44D4
  c->lr=0x800B44DCu; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800B44D8
  cmps(c,0,(int32_t)c->r[4],0); // 800B44DC
  c->r[0]=0u+0x43300000u; // 800B44E0
  W32(c->r[1]+0x000000D0u,c->r[0]); // 800B44E4
  W32(c->r[1]+0x000000D8u,c->r[0]); // 800B44E8
  if (crb(c,2)) { goto L_800B48F4; } // 800B44EC
  c->r[26]=0u+0x00000000u; // 800B44F0
  c->r[27]=0u+0x00000000u; // 800B44F4
L_800B44F8:;
  W8(c->r[1]+0x00000054u,c->r[27]); // 800B44F8
  c->r[3]=c->r[1]+0x00000054u; // 800B44FC
  c->lr=0x800B4504u; f_8004E348(c); // 800B4500
  c->r[4]=c->r[26]|c->r[26]; // 800B4504
  c->lr=0x800B450Cu; f_800B4258(c); // 800B4508
  c->r[0]=R32(c->r[3]+0x0000000Cu); // 800B450C
  cmps(c,0,(int32_t)c->r[0],0); // 800B4510
  if (!crb(c,0)) { goto L_800B4524; } // 800B4514
  c->r[26]=c->r[26]+0x00000001u; // 800B4518
  cmps(c,0,(int32_t)c->r[26],32); // 800B451C
  if (crb(c,0)) { IRQCHK(c); goto L_800B44F8; } // 800B4520
L_800B4524:;
  cmps(c,0,(int32_t)c->r[26],32); // 800B4524
  if (!crb(c,0)) { goto L_800B48F4; } // 800B4528
  c->r[3]=0u+0x00000000u; // 800B452C
  c->r[4]=0u+0x00000000u; // 800B4530
  c->r[5]=0u+0x00000000u; // 800B4534
  c->r[6]=0u+0x00000000u; // 800B4538
  c->lr=0x800B4540u; f_803A52DC(c); // 800B453C
  c->r[27]=0u+0x00000000u; // 800B4540
  W8(c->r[1]+0x00000040u,c->r[27]); // 800B4544
  c->r[3]=c->r[1]+0x00000040u; // 800B4548
  c->lr=0x800B4550u; f_80047A80(c); // 800B454C
  W8(c->r[1]+0x00000044u,c->r[27]); // 800B4550
  c->r[28]=c->r[3]|c->r[3]; // 800B4554
  c->r[3]=c->r[1]+0x00000044u; // 800B4558
  c->lr=0x800B4560u; f_80047A80(c); // 800B455C
  W8(c->r[1]+0x00000048u,c->r[27]); // 800B4560
  c->r[31]=c->r[3]|c->r[3]; // 800B4564
  c->r[3]=c->r[1]+0x00000048u; // 800B4568
  c->r[29]=c->r[1]+0x0000004Cu; // 800B456C
  W8(c->r[1]+0x0000004Cu,c->r[27]); // 800B4570
  c->r[26]=c->r[1]+0x00000050u; // 800B4574
  W8(c->r[1]+0x00000050u,c->r[27]); // 800B4578
  c->lr=0x800B4580u; f_8004E348(c); // 800B457C
  c->r[30]=c->r[3]|c->r[3]; // 800B4580
  c->r[3]=c->r[29]|c->r[29]; // 800B4584
  c->lr=0x800B458Cu; f_8004E348(c); // 800B4588
  c->r[29]=c->r[3]|c->r[3]; // 800B458C
  c->r[3]=c->r[26]|c->r[26]; // 800B4590
  c->lr=0x800B4598u; f_80045BC8(c); // 800B4594
  c->r[0]=R16(c->r[28]+0x00000012u); // 800B4598
  c->r[4]=c->r[29]+0x000000E0u; // 800B459C
  W32(c->r[1]+0x00000008u,c->r[0]); // 800B45A0
  c->r[6]=0u+0x00000001u; // 800B45A4
  c->r[7]=0u+0x00000027u; // 800B45A8
  c->r[8]=0u+0x00000000u; // 800B45AC
  W32(c->r[1]+0x0000000Cu,c->r[27]); // 800B45B0
  c->r[9]=0u+0x00000000u; // 800B45B4
  W32(c->r[1]+0x00000010u,c->r[27]); // 800B45B8
  W32(c->r[1]+0x00000014u,c->r[27]); // 800B45BC
  c->r[5]=R32(c->r[30]+0x00000100u); // 800B45C0
  c->r[10]=R16(c->r[31]+0x00000010u); // 800B45C4
  c->lr=0x800B45CCu; f_80297FFC(c); // 800B45C8
  W8(c->r[1]+0x0000003Cu,c->r[27]); // 800B45CC
  c->r[3]=c->r[1]+0x0000003Cu; // 800B45D0
  c->lr=0x800B45D8u; f_80047A80(c); // 800B45D4
  c->lr=0x800B45DCu; f_8029ABE8(c); // 800B45D8
  W8(c->r[1]+0x00000034u,c->r[27]); // 800B45DC
  c->r[3]=c->r[1]+0x00000034u; // 800B45E0
  c->lr=0x800B45E8u; f_80047A80(c); // 800B45E4
  W8(c->r[1]+0x00000038u,c->r[27]); // 800B45E8
  c->r[29]=c->r[3]|c->r[3]; // 800B45EC
  c->r[3]=c->r[1]+0x00000038u; // 800B45F0
  c->lr=0x800B45F8u; f_80047A80(c); // 800B45F4
  c->r[4]=R16(c->r[3]+0x00000012u); // 800B45F8
  c->r[3]=c->r[1]+0x00000090u; // 800B45FC
  c->r[0]=R16(c->r[29]+0x00000010u); // 800B4600
  W32(c->r[1]+0x000000D4u,c->r[4]); // 800B4604
  {uint32_t ea=c->r[2]+0xFFFF9D18u; c->f[1]=c->ps1[1]=RF32(ea);} // 800B4608
  W32(c->r[1]+0x000000DCu,c->r[0]); // 800B460C
  {uint32_t ea=c->r[2]+0xFFFF9D40u; c->f[4]=RF64(ea);} // 800B4610
  c->f[3]=c->f[1]; // 800B4614
  {uint32_t ea=c->r[1]+0x000000D0u; c->f[2]=RF64(ea);} // 800B4618
  {uint32_t ea=c->r[1]+0x000000D8u; c->f[0]=RF64(ea);} // 800B461C
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[4]); // 800B4620
  {uint32_t ea=c->r[2]+0xFFFF9D38u; c->f[5]=c->ps1[5]=RF32(ea);} // 800B4624
  c->f[4]=c->ps1[4]=S(c->f[0]-c->f[4]); // 800B4628
  {uint32_t ea=c->r[2]+0xFFFF9D3Cu; c->f[6]=c->ps1[6]=RF32(ea);} // 800B462C
  c->lr=0x800B4634u; f_80383C7C(c); // 800B4630
  c->r[3]=c->r[1]+0x00000090u; // 800B4634
  c->r[4]=0u+0x00000001u; // 800B4638
  c->lr=0x800B4640u; f_803A8450(c); // 800B463C
  c->r[3]=c->r[1]+0x00000060u; // 800B4640
  c->lr=0x800B4648u; f_80382F00(c); // 800B4644
  c->r[3]=c->r[1]+0x00000060u; // 800B4648
  c->r[4]=0u+0x00000000u; // 800B464C
  c->lr=0x800B4654u; f_803A8540(c); // 800B4650
  c->r[3]=0u+0x00000000u; // 800B4654
  c->lr=0x800B465Cu; f_803A8648(c); // 800B4658
  c->r[3]=0u+0x00000001u; // 800B465C
  c->lr=0x800B4664u; f_803A5E10(c); // 800B4660
  c->r[3]=0u+0x00000000u; // 800B4664
  c->lr=0x800B466Cu; f_803A3E7C(c); // 800B4668
  c->r[3]=0u+0x00000000u; // 800B466C
  c->r[4]=0u+0x000000FFu; // 800B4670
  c->r[5]=0u+0x000000FFu; // 800B4674
  c->r[6]=0u+0x00000004u; // 800B4678
  c->lr=0x800B4680u; f_803A7950(c); // 800B467C
  c->r[3]=0u+0x00000000u; // 800B4680
  c->r[4]=0u+0x00000004u; // 800B4684
  c->lr=0x800B468Cu; f_803A7450(c); // 800B4688
  c->r[3]=0u+0x00000001u; // 800B468C
  c->lr=0x800B4694u; f_803A7AAC(c); // 800B4690
  c->r[3]=0u+0x00000001u; // 800B4694
  c->r[4]=0u+0x00000000u; // 800B4698
  c->r[5]=0u+0x00000001u; // 800B469C
  c->r[6]=0u+0x00000005u; // 800B46A0
  c->lr=0x800B46A8u; f_803A7F80(c); // 800B46A4
  c->r[3]=0u+0x00000000u; // 800B46A8
  c->r[4]=0u+0x00000001u; // 800B46AC
  c->r[5]=0u+0x00000004u; // 800B46B0
  c->r[6]=0u+0x0000003Cu; // 800B46B4
  c->r[7]=0u+0x00000000u; // 800B46B8
  c->r[8]=0u+0x0000007Du; // 800B46BC
  c->lr=0x800B46C4u; f_803A3C54(c); // 800B46C0
  c->r[3]=0u+0x00000000u; // 800B46C4
  c->r[4]=0u+0x00000000u; // 800B46C8
  c->r[5]=0u+0x00000001u; // 800B46CC
  c->r[6]=0u+0x00000002u; // 800B46D0
  c->r[7]=0u+0x00000003u; // 800B46D4
  c->lr=0x800B46DCu; f_803A7810(c); // 800B46D8
  c->r[3]=0u+0x00000000u; // 800B46DC
  c->r[4]=0u+0x00000000u; // 800B46E0
  c->r[5]=0u+0x00000000u; // 800B46E4
  c->lr=0x800B46ECu; f_803A77D4(c); // 800B46E8
  c->r[3]=0u+0x00000000u; // 800B46EC
  c->lr=0x800B46F4u; f_803A73B0(c); // 800B46F0
  c->r[3]=0u+0x00000000u; // 800B46F4
  c->r[4]=0u+0x00000000u; // 800B46F8
  c->r[5]=0u+0x00000001u; // 800B46FC
  c->r[6]=0u+0x00000001u; // 800B4700
  c->r[7]=0u+0x00000000u; // 800B4704
  c->r[8]=0u+0x00000000u; // 800B4708
  c->r[9]=0u+0x00000002u; // 800B470C
  c->lr=0x800B4714u; f_803A5E34(c); // 800B4710
  c->r[3]=0u+0x00000002u; // 800B4714
  c->r[4]=0u+0x00000000u; // 800B4718
  c->r[5]=0u+0x00000001u; // 800B471C
  c->r[6]=0u+0x00000001u; // 800B4720
  c->r[7]=0u+0x00000000u; // 800B4724
  c->r[8]=0u+0x00000000u; // 800B4728
  c->r[9]=0u+0x00000002u; // 800B472C
  c->lr=0x800B4734u; f_803A5E34(c); // 800B4730
  c->r[3]=0u+0x00000000u; // 800B4734
  c->lr=0x800B473Cu; f_803A4CD8(c); // 800B4738
  c->r[3]=0u+0x00000000u; // 800B473C
  c->r[4]=0u+0x00000007u; // 800B4740
  c->r[5]=0u+0x00000000u; // 800B4744
  c->lr=0x800B474Cu; f_803A8028(c); // 800B4748
  c->r[3]=0u+0x00000007u; // 800B474C
  c->r[4]=0u+0x00000000u; // 800B4750
  c->r[5]=0u+0x00000000u; // 800B4754
  c->r[6]=0u+0x00000007u; // 800B4758
  c->r[7]=0u+0x00000000u; // 800B475C
  c->lr=0x800B4764u; f_803A788C(c); // 800B4760
  c->lr=0x800B4768u; f_803A3580(c); // 800B4764
  c->r[3]=0u+0x00000009u; // 800B4768
  c->r[4]=0u+0x00000001u; // 800B476C
  c->lr=0x800B4774u; f_803A2F8C(c); // 800B4770
  c->r[3]=0u+0x0000000Bu; // 800B4774
  c->r[4]=0u+0x00000001u; // 800B4778
  c->lr=0x800B4780u; f_803A2F8C(c); // 800B477C
  c->r[3]=0u+0x00000000u; // 800B4780
  c->r[4]=0u+0x00000009u; // 800B4784
  c->r[5]=0u+0x00000000u; // 800B4788
  c->r[6]=0u+0x00000004u; // 800B478C
  c->r[7]=0u+0x00000004u; // 800B4790
  c->lr=0x800B4798u; f_803A35B4(c); // 800B4794
  c->r[3]=0u+0x00000000u; // 800B4798
  c->r[4]=0u+0x0000000Bu; // 800B479C
  c->r[5]=0u+0x00000001u; // 800B47A0
  c->r[6]=0u+0x00000005u; // 800B47A4
  c->r[7]=0u+0x00000004u; // 800B47A8
  c->lr=0x800B47B0u; f_803A35B4(c); // 800B47AC
  c->r[3]=0u+0x00000001u; // 800B47B0
  c->r[4]=0u+0x00000000u; // 800B47B4
  c->lr=0x800B47BCu; f_803A8160(c); // 800B47B8
  c->r[3]=0u+0x00000098u; // 800B47BC
  c->r[4]=0u+0x00000000u; // 800B47C0
  c->r[5]=0u+0x00000004u; // 800B47C4
  c->lr=0x800B47CCu; f_803A4A10(c); // 800B47C8
  c->r[29]=0u+0xCC010000u; // 800B47CC
  {uint32_t ea=c->r[2]+0xFFFF9D18u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B47D0
  {uint32_t ea=c->r[29]+0xFFFF8000u; WF32(ea,c->f[0]);} // 800B47D4
  c->r[30]=0u+0x000000FFu; // 800B47D8
  {uint32_t ea=c->r[2]+0xFFFF9D18u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B47DC
  c->r[3]=c->r[1]+0x00000030u; // 800B47E0
  {uint32_t ea=c->r[29]+0xFFFF8000u; WF32(ea,c->f[0]);} // 800B47E4
  W32(c->r[29]+0xFFFF8000u,c->r[30]); // 800B47E8
  W8(c->r[1]+0x00000030u,c->r[27]); // 800B47EC
  c->lr=0x800B47F4u; f_80047A80(c); // 800B47F0
  c->r[0]=R16(c->r[3]+0x00000010u); // 800B47F4
  c->r[3]=c->r[1]+0x0000002Cu; // 800B47F8
  W32(c->r[1]+0x000000D4u,c->r[0]); // 800B47FC
  {uint32_t ea=c->r[2]+0xFFFF9D40u; c->f[1]=RF64(ea);} // 800B4800
  {uint32_t ea=c->r[1]+0x000000D0u; c->f[0]=RF64(ea);} // 800B4804
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 800B4808
  {uint32_t ea=c->r[29]+0xFFFF8000u; WF32(ea,c->f[0]);} // 800B480C
  {uint32_t ea=c->r[2]+0xFFFF9D18u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B4810
  {uint32_t ea=c->r[29]+0xFFFF8000u; WF32(ea,c->f[0]);} // 800B4814
  W32(c->r[29]+0xFFFF8000u,c->r[30]); // 800B4818
  W8(c->r[1]+0x0000002Cu,c->r[27]); // 800B481C
  c->lr=0x800B4824u; f_80047A80(c); // 800B4820
  c->r[0]=R16(c->r[3]+0x00000012u); // 800B4824
  c->r[3]=c->r[1]+0x00000024u; // 800B4828
  W32(c->r[1]+0x000000DCu,c->r[0]); // 800B482C
  {uint32_t ea=c->r[2]+0xFFFF9D18u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B4830
  {uint32_t ea=c->r[2]+0xFFFF9D40u; c->f[2]=RF64(ea);} // 800B4834
  {uint32_t ea=c->r[1]+0x000000D8u; c->f[1]=RF64(ea);} // 800B4838
  {uint32_t ea=c->r[29]+0xFFFF8000u; WF32(ea,c->f[0]);} // 800B483C
  c->f[0]=c->ps1[0]=S(c->f[1]-c->f[2]); // 800B4840
  {uint32_t ea=c->r[29]+0xFFFF8000u; WF32(ea,c->f[0]);} // 800B4844
  W32(c->r[29]+0xFFFF8000u,c->r[30]); // 800B4848
  W8(c->r[1]+0x00000024u,c->r[27]); // 800B484C
  c->lr=0x800B4854u; f_80047A80(c); // 800B4850
  W8(c->r[1]+0x00000028u,c->r[27]); // 800B4854
  c->r[31]=c->r[3]|c->r[3]; // 800B4858
  c->r[3]=c->r[1]+0x00000028u; // 800B485C
  c->lr=0x800B4864u; f_80047A80(c); // 800B4860
  c->r[3]=R16(c->r[3]+0x00000010u); // 800B4864
  c->r[0]=R16(c->r[31]+0x00000012u); // 800B4868
  W32(c->r[1]+0x000000D4u,c->r[3]); // 800B486C
  {uint32_t ea=c->r[2]+0xFFFF9D40u; c->f[2]=RF64(ea);} // 800B4870
  W32(c->r[1]+0x000000DCu,c->r[0]); // 800B4874
  {uint32_t ea=c->r[1]+0x000000D0u; c->f[1]=RF64(ea);} // 800B4878
  {uint32_t ea=c->r[1]+0x000000D8u; c->f[0]=RF64(ea);} // 800B487C
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 800B4880
  c->f[2]=c->ps1[2]=S(c->f[0]-c->f[2]); // 800B4884
  c->lr=0x800B488Cu; f_800B490C(c); // 800B4888
  W32(c->r[29]+0xFFFF8000u,c->r[30]); // 800B488C
  c->r[3]=c->r[1]+0x00000020u; // 800B4890
  W8(c->r[1]+0x00000020u,c->r[27]); // 800B4894
  c->lr=0x800B489Cu; f_80047A80(c); // 800B4898
  c->r[3]=R32(c->r[3]+0x00000004u); // 800B489C
  c->lr=0x800B48A4u; f_804CC8D4(c); // 800B48A0
  W32(c->r[1]+0x00000058u,c->r[3]); // 800B48A4
  c->r[3]=c->r[1]+0x00000058u; // 800B48A8
  c->r[4]=c->r[1]+0x00000090u; // 800B48AC
  c->lr=0x800B48B4u; f_804C8038(c); // 800B48B0
  c->r[3]=c->r[1]+0x00000090u; // 800B48B4
  c->r[4]=0u+0x00000000u; // 800B48B8
  c->lr=0x800B48C0u; f_803A8450(c); // 800B48BC
  c->r[3]=0u+0x00000001u; // 800B48C0
  c->r[4]=0u+0x00000003u; // 800B48C4
  c->r[5]=0u+0x00000001u; // 800B48C8
  c->lr=0x800B48D0u; f_803A8028(c); // 800B48CC
  W8(c->r[1]+0x00000018u,c->r[27]); // 800B48D0
  c->r[3]=c->r[1]+0x00000018u; // 800B48D4
  c->lr=0x800B48DCu; f_80047A80(c); // 800B48D8
  c->r[26]=R32(c->r[3]+0x0000026Cu); // 800B48DC
  c->r[3]=c->r[1]+0x0000001Cu; // 800B48E0
  W8(c->r[1]+0x0000001Cu,c->r[27]); // 800B48E4
  c->lr=0x800B48ECu; f_80047A80(c); // 800B48E8
  c->r[4]=c->r[26]|c->r[26]; // 800B48EC
  c->lr=0x800B48F4u; f_8029AD74(c); // 800B48F0
L_800B48F4:;
  c->r[11]=c->r[1]+0x00000100u; // 800B48F4
  c->lr=0x800B48FCu; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800B48F8
  c->r[0]=R32(c->r[1]+0x00000104u); // 800B48FC
  c->lr=c->r[0]; // 800B4900
  c->r[1]=c->r[1]+0x00000100u; // 800B4904
  return; // 800B4908
}

// fn_800B490C
void f_800B490C(Ctx* __restrict c) {
  trace_call(0x800B490Cu);
  c->r[3]=0u+0xCC010000u; // 800B490C
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[1]);} // 800B4910
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[2]);} // 800B4914
  return; // 800B4918
}

// fn_800B491C
void f_800B491C(Ctx* __restrict c) {
  trace_call(0x800B491Cu);
  {uint32_t ea=c->r[1]+0xFFFFFF20u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B491C
  c->r[0]=c->lr; // 800B4920
  W32(c->r[1]+0x000000E4u,c->r[0]); // 800B4924
  c->r[11]=c->r[1]+0x000000E0u; // 800B4928
  c->lr=0x800B4930u; { W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800B492C
  cmps(c,0,(int32_t)c->r[4],0); // 800B4930
  c->r[0]=0u+0x43300000u; // 800B4934
  W32(c->r[1]+0x000000B8u,c->r[0]); // 800B4938
  W32(c->r[1]+0x000000C0u,c->r[0]); // 800B493C
  if (crb(c,2)) { goto L_800B4D28; } // 800B4940
  c->r[30]=0u+0x00000000u; // 800B4944
  c->r[29]=0u+0x00000000u; // 800B4948
L_800B494C:;
  W8(c->r[1]+0x00000040u,c->r[29]); // 800B494C
  c->r[3]=c->r[1]+0x00000040u; // 800B4950
  c->lr=0x800B4958u; f_8004E348(c); // 800B4954
  c->r[4]=c->r[30]|c->r[30]; // 800B4958
  c->lr=0x800B4960u; f_800B4258(c); // 800B495C
  c->r[0]=R32(c->r[3]+0x0000000Cu); // 800B4960
  cmps(c,0,(int32_t)c->r[0],0); // 800B4964
  if (!crb(c,0)) { goto L_800B4978; } // 800B4968
  c->r[30]=c->r[30]+0x00000001u; // 800B496C
  cmps(c,0,(int32_t)c->r[30],32); // 800B4970
  if (crb(c,0)) { IRQCHK(c); goto L_800B494C; } // 800B4974
L_800B4978:;
  cmps(c,0,(int32_t)c->r[30],32); // 800B4978
  if (!crb(c,0)) { goto L_800B4D28; } // 800B497C
  c->r[29]=0u+0x00000000u; // 800B4980
  W8(c->r[1]+0x0000003Cu,c->r[29]); // 800B4984
  c->r[3]=c->r[1]+0x0000003Cu; // 800B4988
  c->lr=0x800B4990u; f_80047A80(c); // 800B498C
  c->lr=0x800B4994u; f_8029ABE8(c); // 800B4990
  W8(c->r[1]+0x00000034u,c->r[29]); // 800B4994
  c->r[3]=c->r[1]+0x00000034u; // 800B4998
  c->lr=0x800B49A0u; f_80047A80(c); // 800B499C
  W8(c->r[1]+0x00000038u,c->r[29]); // 800B49A0
  c->r[30]=c->r[3]|c->r[3]; // 800B49A4
  c->r[3]=c->r[1]+0x00000038u; // 800B49A8
  c->lr=0x800B49B0u; f_80047A80(c); // 800B49AC
  c->r[4]=R16(c->r[3]+0x00000012u); // 800B49B0
  c->r[3]=c->r[1]+0x00000078u; // 800B49B4
  c->r[0]=R16(c->r[30]+0x00000010u); // 800B49B8
  W32(c->r[1]+0x000000BCu,c->r[4]); // 800B49BC
  {uint32_t ea=c->r[2]+0xFFFF9D18u; c->f[1]=c->ps1[1]=RF32(ea);} // 800B49C0
  W32(c->r[1]+0x000000C4u,c->r[0]); // 800B49C4
  {uint32_t ea=c->r[2]+0xFFFF9D40u; c->f[4]=RF64(ea);} // 800B49C8
  c->f[3]=c->f[1]; // 800B49CC
  {uint32_t ea=c->r[1]+0x000000B8u; c->f[2]=RF64(ea);} // 800B49D0
  {uint32_t ea=c->r[1]+0x000000C0u; c->f[0]=RF64(ea);} // 800B49D4
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[4]); // 800B49D8
  {uint32_t ea=c->r[2]+0xFFFF9D38u; c->f[5]=c->ps1[5]=RF32(ea);} // 800B49DC
  c->f[4]=c->ps1[4]=S(c->f[0]-c->f[4]); // 800B49E0
  {uint32_t ea=c->r[2]+0xFFFF9D3Cu; c->f[6]=c->ps1[6]=RF32(ea);} // 800B49E4
  c->lr=0x800B49ECu; f_80383C7C(c); // 800B49E8
  c->r[3]=c->r[1]+0x00000078u; // 800B49EC
  c->r[4]=0u+0x00000001u; // 800B49F0
  c->lr=0x800B49F8u; f_803A8450(c); // 800B49F4
  c->r[3]=c->r[1]+0x00000048u; // 800B49F8
  c->lr=0x800B4A00u; f_80382F00(c); // 800B49FC
  c->r[3]=c->r[1]+0x00000048u; // 800B4A00
  c->r[4]=0u+0x00000000u; // 800B4A04
  c->lr=0x800B4A0Cu; f_803A8540(c); // 800B4A08
  c->r[3]=0u+0x00000000u; // 800B4A0C
  c->lr=0x800B4A14u; f_803A8648(c); // 800B4A10
  c->r[3]=0u+0x00000000u; // 800B4A14
  c->lr=0x800B4A1Cu; f_803A5E10(c); // 800B4A18
  c->r[3]=0u+0x00000001u; // 800B4A1C
  c->lr=0x800B4A24u; f_803A3E7C(c); // 800B4A20
  c->r[3]=0u+0x00000000u; // 800B4A24
  c->r[4]=0u+0x00000000u; // 800B4A28
  c->r[5]=0u+0x00000000u; // 800B4A2C
  c->r[6]=0u+0x000000FFu; // 800B4A30
  c->lr=0x800B4A38u; f_803A7950(c); // 800B4A34
  c->r[3]=0u+0x00000000u; // 800B4A38
  c->r[4]=0u+0x00000003u; // 800B4A3C
  c->lr=0x800B4A44u; f_803A7450(c); // 800B4A40
  c->r[3]=0u+0x00000000u; // 800B4A44
  c->lr=0x800B4A4Cu; f_803A4CD8(c); // 800B4A48
  c->r[3]=0u+0x00000000u; // 800B4A4C
  c->lr=0x800B4A54u; f_803A805C(c); // 800B4A50
  c->lr=0x800B4A58u; f_803A3580(c); // 800B4A54
  c->r[3]=0u+0x00000009u; // 800B4A58
  c->r[4]=0u+0x00000001u; // 800B4A5C
  c->lr=0x800B4A64u; f_803A2F8C(c); // 800B4A60
  c->r[3]=0u+0x0000000Du; // 800B4A64
  c->r[4]=0u+0x00000001u; // 800B4A68
  c->lr=0x800B4A70u; f_803A2F8C(c); // 800B4A6C
  c->r[3]=0u+0x00000000u; // 800B4A70
  c->r[4]=0u+0x00000009u; // 800B4A74
  c->r[5]=0u+0x00000000u; // 800B4A78
  c->r[6]=0u+0x00000004u; // 800B4A7C
  c->r[7]=0u+0x00000004u; // 800B4A80
  c->lr=0x800B4A88u; f_803A35B4(c); // 800B4A84
  c->r[3]=0u+0x00000000u; // 800B4A88
  c->r[4]=0u+0x0000000Du; // 800B4A8C
  c->r[5]=0u+0x00000001u; // 800B4A90
  c->r[6]=0u+0x00000004u; // 800B4A94
  c->r[7]=0u+0x00000004u; // 800B4A98
  c->lr=0x800B4AA0u; f_803A35B4(c); // 800B4A9C
  c->r[3]=0u+0x00000000u; // 800B4AA0
  c->lr=0x800B4AA8u; f_803A7FD0(c); // 800B4AA4
  c->r[3]=0u+0x00000000u; // 800B4AA8
  c->r[4]=0u+0x00000000u; // 800B4AAC
  c->r[5]=0u+0x00000001u; // 800B4AB0
  c->r[6]=0u+0x00000002u; // 800B4AB4
  c->r[7]=0u+0x00000003u; // 800B4AB8
  c->lr=0x800B4AC0u; f_803A7810(c); // 800B4ABC
  c->r[3]=0u+0x00000000u; // 800B4AC0
  c->r[4]=0u+0x00000000u; // 800B4AC4
  c->r[5]=0u+0x00000000u; // 800B4AC8
  c->lr=0x800B4AD0u; f_803A77D4(c); // 800B4ACC
  c->r[3]=0u+0x00000001u; // 800B4AD0
  c->r[4]=0u+0x00000000u; // 800B4AD4
  c->r[5]=0u+0x00000000u; // 800B4AD8
  c->lr=0x800B4AE0u; f_803A77D4(c); // 800B4ADC
  c->r[3]=0u+0x00000000u; // 800B4AE0
  c->lr=0x800B4AE8u; f_803A73B0(c); // 800B4AE4
  c->r[3]=0u+0x00000001u; // 800B4AE8
  c->lr=0x800B4AF0u; f_803A73B0(c); // 800B4AEC
  c->lr=0x800B4AF4u; f_803A4490(c); // 800B4AF0
  W8(c->r[1]+0x00000028u,c->r[29]); // 800B4AF4
  c->r[3]=c->r[1]+0x00000028u; // 800B4AF8
  c->lr=0x800B4B00u; f_80047A80(c); // 800B4AFC
  W8(c->r[1]+0x0000002Cu,c->r[29]); // 800B4B00
  c->r[3]=c->r[1]+0x0000002Cu; // 800B4B04
  c->lr=0x800B4B0Cu; f_80047A80(c); // 800B4B08
  W8(c->r[1]+0x00000030u,c->r[29]); // 800B4B0C
  c->r[30]=c->r[3]|c->r[3]; // 800B4B10
  c->r[3]=c->r[1]+0x00000030u; // 800B4B14
  c->lr=0x800B4B1Cu; f_80047A80(c); // 800B4B18
  c->r[3]=R8(c->r[3]+0x00000025u); // 800B4B1C
  c->r[4]=c->r[30]+0x00000026u; // 800B4B20
  c->r[5]=0u+0x00000001u; // 800B4B24
  c->r[6]=c->r[13]+0xFFFF9A88u; // 800B4B28
  c->lr=0x800B4B30u; f_803A52DC(c); // 800B4B2C
  c->r[3]=0u+0x00000001u; // 800B4B30
  c->lr=0x800B4B38u; f_803A7AAC(c); // 800B4B34
  c->r[3]=0u+0x00000000u; // 800B4B38
  c->r[4]=0u+0x00000007u; // 800B4B3C
  c->r[5]=0u+0x00000000u; // 800B4B40
  c->lr=0x800B4B48u; f_803A8028(c); // 800B4B44
  c->r[3]=0u+0x00000007u; // 800B4B48
  c->r[4]=0u+0x00000000u; // 800B4B4C
  c->r[5]=0u+0x00000000u; // 800B4B50
  c->r[6]=0u+0x00000007u; // 800B4B54
  c->r[7]=0u+0x00000000u; // 800B4B58
  c->lr=0x800B4B60u; f_803A788C(c); // 800B4B5C
  c->r[3]=0u+0x00000000u; // 800B4B60
  c->r[4]=0u+0x00000000u; // 800B4B64
  c->lr=0x800B4B6Cu; f_803A8160(c); // 800B4B68
  c->r[3]=0u+0x00000001u; // 800B4B6C
  c->r[4]=0u+0x00000001u; // 800B4B70
  c->r[5]=0u+0x00000000u; // 800B4B74
  c->r[6]=0u+0x00000005u; // 800B4B78
  c->lr=0x800B4B80u; f_803A7F80(c); // 800B4B7C
  c->r[3]=0u+0x00000000u; // 800B4B80
  c->r[4]=0u+0x00000001u; // 800B4B84
  c->r[5]=0u+0x00000004u; // 800B4B88
  c->r[6]=0u+0x0000003Cu; // 800B4B8C
  c->r[7]=0u+0x00000000u; // 800B4B90
  c->r[8]=0u+0x0000007Du; // 800B4B94
  c->lr=0x800B4B9Cu; f_803A3C54(c); // 800B4B98
  W8(c->r[1]+0x00000024u,c->r[29]); // 800B4B9C
  c->r[3]=c->r[1]+0x00000024u; // 800B4BA0
  c->lr=0x800B4BA8u; f_8004E348(c); // 800B4BA4
  c->r[4]=0u+0x00000000u; // 800B4BA8
  c->r[3]=c->r[3]+0x000000E0u; // 800B4BAC
  c->lr=0x800B4BB4u; f_803A6784(c); // 800B4BB0
  c->r[3]=0u+0x00000098u; // 800B4BB4
  c->r[4]=0u+0x00000000u; // 800B4BB8
  c->r[5]=0u+0x00000004u; // 800B4BBC
  c->lr=0x800B4BC4u; f_803A4A10(c); // 800B4BC0
  c->r[30]=0u+0xCC010000u; // 800B4BC4
  {uint32_t ea=c->r[2]+0xFFFF9D18u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B4BC8
  {uint32_t ea=c->r[30]+0xFFFF8000u; WF32(ea,c->f[0]);} // 800B4BCC
  c->r[3]=c->r[1]+0x00000020u; // 800B4BD0
  {uint32_t ea=c->r[2]+0xFFFF9D18u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B4BD4
  {uint32_t ea=c->r[30]+0xFFFF8000u; WF32(ea,c->f[0]);} // 800B4BD8
  {uint32_t ea=c->r[2]+0xFFFF9D18u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B4BDC
  {uint32_t ea=c->r[30]+0xFFFF8000u; WF32(ea,c->f[0]);} // 800B4BE0
  {uint32_t ea=c->r[2]+0xFFFF9D18u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B4BE4
  {uint32_t ea=c->r[30]+0xFFFF8000u; WF32(ea,c->f[0]);} // 800B4BE8
  W8(c->r[1]+0x00000020u,c->r[29]); // 800B4BEC
  c->lr=0x800B4BF4u; f_80047A80(c); // 800B4BF0
  c->r[0]=R16(c->r[3]+0x00000010u); // 800B4BF4
  c->r[3]=c->r[1]+0x0000001Cu; // 800B4BF8
  W32(c->r[1]+0x000000BCu,c->r[0]); // 800B4BFC
  {uint32_t ea=c->r[2]+0xFFFF9D40u; c->f[1]=RF64(ea);} // 800B4C00
  {uint32_t ea=c->r[1]+0x000000B8u; c->f[0]=RF64(ea);} // 800B4C04
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 800B4C08
  {uint32_t ea=c->r[30]+0xFFFF8000u; WF32(ea,c->f[0]);} // 800B4C0C
  {uint32_t ea=c->r[2]+0xFFFF9D18u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B4C10
  {uint32_t ea=c->r[30]+0xFFFF8000u; WF32(ea,c->f[0]);} // 800B4C14
  {uint32_t ea=c->r[2]+0xFFFF9D48u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B4C18
  {uint32_t ea=c->r[30]+0xFFFF8000u; WF32(ea,c->f[0]);} // 800B4C1C
  {uint32_t ea=c->r[2]+0xFFFF9D18u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B4C20
  {uint32_t ea=c->r[30]+0xFFFF8000u; WF32(ea,c->f[0]);} // 800B4C24
  W8(c->r[1]+0x0000001Cu,c->r[29]); // 800B4C28
  c->lr=0x800B4C30u; f_80047A80(c); // 800B4C2C
  c->r[0]=R16(c->r[3]+0x00000012u); // 800B4C30
  c->r[3]=c->r[1]+0x00000014u; // 800B4C34
  W32(c->r[1]+0x000000C4u,c->r[0]); // 800B4C38
  {uint32_t ea=c->r[2]+0xFFFF9D18u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B4C3C
  {uint32_t ea=c->r[2]+0xFFFF9D40u; c->f[2]=RF64(ea);} // 800B4C40
  {uint32_t ea=c->r[1]+0x000000C0u; c->f[1]=RF64(ea);} // 800B4C44
  {uint32_t ea=c->r[30]+0xFFFF8000u; WF32(ea,c->f[0]);} // 800B4C48
  c->f[0]=c->ps1[0]=S(c->f[1]-c->f[2]); // 800B4C4C
  {uint32_t ea=c->r[30]+0xFFFF8000u; WF32(ea,c->f[0]);} // 800B4C50
  {uint32_t ea=c->r[2]+0xFFFF9D18u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B4C54
  {uint32_t ea=c->r[30]+0xFFFF8000u; WF32(ea,c->f[0]);} // 800B4C58
  {uint32_t ea=c->r[2]+0xFFFF9D48u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B4C5C
  {uint32_t ea=c->r[30]+0xFFFF8000u; WF32(ea,c->f[0]);} // 800B4C60
  W8(c->r[1]+0x00000014u,c->r[29]); // 800B4C64
  c->lr=0x800B4C6Cu; f_80047A80(c); // 800B4C68
  W8(c->r[1]+0x00000018u,c->r[29]); // 800B4C6C
  c->r[31]=c->r[3]|c->r[3]; // 800B4C70
  c->r[3]=c->r[1]+0x00000018u; // 800B4C74
  c->lr=0x800B4C7Cu; f_80047A80(c); // 800B4C78
  c->r[3]=R16(c->r[3]+0x00000010u); // 800B4C7C
  c->r[0]=R16(c->r[31]+0x00000012u); // 800B4C80
  W32(c->r[1]+0x000000BCu,c->r[3]); // 800B4C84
  {uint32_t ea=c->r[2]+0xFFFF9D40u; c->f[2]=RF64(ea);} // 800B4C88
  W32(c->r[1]+0x000000C4u,c->r[0]); // 800B4C8C
  {uint32_t ea=c->r[1]+0x000000B8u; c->f[1]=RF64(ea);} // 800B4C90
  {uint32_t ea=c->r[1]+0x000000C0u; c->f[0]=RF64(ea);} // 800B4C94
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 800B4C98
  c->f[2]=c->ps1[2]=S(c->f[0]-c->f[2]); // 800B4C9C
  c->lr=0x800B4CA4u; f_800B490C(c); // 800B4CA0
  {uint32_t ea=c->r[2]+0xFFFF9D48u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B4CA4
  c->r[3]=c->r[1]+0x00000010u; // 800B4CA8
  {uint32_t ea=c->r[30]+0xFFFF8000u; WF32(ea,c->f[0]);} // 800B4CAC
  {uint32_t ea=c->r[2]+0xFFFF9D48u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B4CB0
  {uint32_t ea=c->r[30]+0xFFFF8000u; WF32(ea,c->f[0]);} // 800B4CB4
  W8(c->r[1]+0x00000010u,c->r[29]); // 800B4CB8
  c->lr=0x800B4CC0u; f_80047A80(c); // 800B4CBC
  c->r[3]=R32(c->r[3]+0x00000004u); // 800B4CC0
  c->lr=0x800B4CC8u; f_804CC8D4(c); // 800B4CC4
  W32(c->r[1]+0x00000044u,c->r[3]); // 800B4CC8
  c->r[3]=c->r[1]+0x00000044u; // 800B4CCC
  c->r[4]=c->r[1]+0x00000078u; // 800B4CD0
  c->lr=0x800B4CD8u; f_804C8038(c); // 800B4CD4
  c->r[3]=c->r[1]+0x00000078u; // 800B4CD8
  c->r[4]=0u+0x00000000u; // 800B4CDC
  c->lr=0x800B4CE4u; f_803A8450(c); // 800B4CE0
  c->r[3]=0u+0x00000001u; // 800B4CE4
  c->r[4]=0u+0x00000003u; // 800B4CE8
  c->r[5]=0u+0x00000001u; // 800B4CEC
  c->lr=0x800B4CF4u; f_803A8028(c); // 800B4CF0
  c->r[3]=0u+0x00000001u; // 800B4CF4
  c->lr=0x800B4CFCu; f_803A805C(c); // 800B4CF8
  c->r[3]=0u+0x00000001u; // 800B4CFC
  c->lr=0x800B4D04u; f_803A7FD0(c); // 800B4D00
  W8(c->r[1]+0x00000008u,c->r[29]); // 800B4D04
  c->r[3]=c->r[1]+0x00000008u; // 800B4D08
  c->lr=0x800B4D10u; f_80047A80(c); // 800B4D0C
  c->r[30]=R32(c->r[3]+0x0000026Cu); // 800B4D10
  c->r[3]=c->r[1]+0x0000000Cu; // 800B4D14
  W8(c->r[1]+0x0000000Cu,c->r[29]); // 800B4D18
  c->lr=0x800B4D20u; f_80047A80(c); // 800B4D1C
  c->r[4]=c->r[30]|c->r[30]; // 800B4D20
  c->lr=0x800B4D28u; f_8029AD74(c); // 800B4D24
L_800B4D28:;
  c->r[11]=c->r[1]+0x000000E0u; // 800B4D28
  c->lr=0x800B4D30u; { c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800B4D2C
  c->r[0]=R32(c->r[1]+0x000000E4u); // 800B4D30
  c->lr=c->r[0]; // 800B4D34
  c->r[1]=c->r[1]+0x000000E0u; // 800B4D38
  return; // 800B4D3C
}

// fn_800B4D40
void f_800B4D40(Ctx* __restrict c) {
  trace_call(0x800B4D40u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B4D40
  c->r[0]=c->lr; // 800B4D44
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B4D48
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800B4D4C
  c->r[31]=c->r[3]+0x00000004u; // 800B4D50
  c->r[30]=c->r[3]|c->r[3]; // 800B4D54
  c->r[3]=c->r[31]|c->r[31]; // 800B4D58
  c->lr=0x800B4D60u; f_800506C0(c); // 800B4D5C
  cmps(c,0,(int32_t)c->r[31],0); // 800B4D60
  c->r[0]=c->r[31]|c->r[31]; // 800B4D64
  if (crb(c,2)) { goto L_800B4D70; } // 800B4D68
  c->r[0]=c->r[31]+0xFFFFFFFCu; // 800B4D6C
L_800B4D70:;
  c->r[4]=0u+0x806D0000u; // 800B4D70
  W32(c->r[31]+0x00000008u,c->r[0]); // 800B4D74
  c->r[4]=c->r[4]+0x00006868u; // 800B4D78
  c->r[3]=c->r[30]+0x00000060u; // 800B4D7C
  W32(c->r[30]+0x00000010u,c->r[4]); // 800B4D80
  c->lr=0x800B4D88u; f_803209E8(c); // 800B4D84
  c->r[3]=c->r[30]+0x0000009Cu; // 800B4D88
  c->lr=0x800B4D90u; f_803209E8(c); // 800B4D8C
  c->r[3]=c->r[30]|c->r[30]; // 800B4D90
  c->lr=0x800B4D98u; f_800B6648(c); // 800B4D94
  c->r[3]=c->r[30]|c->r[30]; // 800B4D98
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800B4D9C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800B4DA0
  c->lr=c->r[0]; // 800B4DA4
  c->r[1]=c->r[1]+0x00000010u; // 800B4DA8
  return; // 800B4DAC
}

// dtor_800B4DB0
void f_800B4DB0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B4DB0
  c->r[0]=c->lr; // 800B4DB4
  cmps(c,0,(int32_t)c->r[3],0); // 800B4DB8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B4DBC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800B4DC0
  c->r[31]=c->r[3]|c->r[3]; // 800B4DC4
  if (crb(c,2)) { goto L_800B4DD4; } // 800B4DC8
  c->r[4]=0u+0x00000000u; // 800B4DCC
  c->lr=0x800B4DD4u; f_800455D8(c); // 800B4DD0
L_800B4DD4:;
  c->r[3]=c->r[31]|c->r[31]; // 800B4DD4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800B4DD8
  c->r[0]=R32(c->r[1]+0x00000014u); // 800B4DDC
  c->lr=c->r[0]; // 800B4DE0
  c->r[1]=c->r[1]+0x00000010u; // 800B4DE4
  return; // 800B4DE8
}

// fn_800B4DEC
void f_800B4DEC(Ctx* __restrict c) {
  trace_call(0x800B4DECu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B4DEC
  c->r[0]=c->lr; // 800B4DF0
  cmps(c,0,(int32_t)c->r[3],0); // 800B4DF4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B4DF8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800B4DFC
  c->r[31]=c->r[3]|c->r[3]; // 800B4E00
  if (crb(c,2)) { goto L_800B4E18; } // 800B4E04
  c->r[3]=addc(c,c->r[3],0x00000004u,0); cr0(c,c->r[3]); // 800B4E08
  if (crb(c,2)) { goto L_800B4E18; } // 800B4E0C
  c->r[4]=0u+0x00000000u; // 800B4E10
  c->lr=0x800B4E18u; f_800455D8(c); // 800B4E14
L_800B4E18:;
  c->r[3]=c->r[31]|c->r[31]; // 800B4E18
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800B4E1C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800B4E20
  c->lr=c->r[0]; // 800B4E24
  c->r[1]=c->r[1]+0x00000010u; // 800B4E28
  return; // 800B4E2C
}

// fn_800B4E30
void f_800B4E30(Ctx* __restrict c) {
  trace_call(0x800B4E30u);
  {uint32_t ea=c->r[1]+0xFFFFFF30u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B4E30
  c->r[0]=c->lr; // 800B4E34
  W32(c->r[1]+0x000000D4u,c->r[0]); // 800B4E38
  c->r[11]=c->r[1]+0x000000D0u; // 800B4E3C
  c->lr=0x800B4E44u; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800B4E40
  c->r[0]=0u+0x43300000u; // 800B4E44
  c->r[31]=0u+0x00000000u; // 800B4E48
  c->r[28]=c->r[6]|c->r[6]; // 800B4E4C
  W32(c->r[1]+0x000000A0u,c->r[0]); // 800B4E50
  c->r[25]=c->r[3]|c->r[3]; // 800B4E54
  c->r[26]=c->r[4]|c->r[4]; // 800B4E58
  W32(c->r[3]+0x00000000u,c->r[31]); // 800B4E5C
  c->r[27]=c->r[5]|c->r[5]; // 800B4E60
  c->r[29]=c->r[7]|c->r[7]; // 800B4E64
  c->r[30]=c->r[8]|c->r[8]; // 800B4E68
  W32(c->r[1]+0x000000A8u,c->r[0]); // 800B4E6C
  c->r[3]=c->r[28]|c->r[28]; // 800B4E70
  c->lr=0x800B4E78u; f_800B5150(c); // 800B4E74
  c->r[3]=R32(c->r[3]+0x0000008Cu); // 800B4E78
  cmps(c,0,(int32_t)c->r[26],0); // 800B4E7C
  c->r[0]=R32(c->r[25]+0x00000000u); // 800B4E80
  c->r[0]=c->r[0]|c->r[3]; // 800B4E84
  W32(c->r[25]+0x00000000u,c->r[0]); // 800B4E88
  if (crb(c,2)) { goto L_800B4EA0; } // 800B4E8C
  c->r[4]=c->r[26]|c->r[26]; // 800B4E90
  c->r[3]=c->r[25]+0x000000D8u; // 800B4E94
  c->lr=0x800B4E9Cu; f_8005DC84(c); // 800B4E98
  goto L_800B4EC4; // 800B4E9C
L_800B4EA0:;
  W8(c->r[1]+0x0000000Cu,c->r[31]); // 800B4EA0
  c->r[3]=c->r[1]+0x0000000Cu; // 800B4EA4
  c->lr=0x800B4EACu; f_80047A80(c); // 800B4EA8
  c->r[3]=R32(c->r[3]+0x00000004u); // 800B4EAC
  c->lr=0x800B4EB4u; f_804CC8D4(c); // 800B4EB0
  W32(c->r[1]+0x00000014u,c->r[3]); // 800B4EB4
  c->r[3]=c->r[1]+0x00000014u; // 800B4EB8
  c->r[4]=c->r[25]+0x000000D8u; // 800B4EBC
  c->lr=0x800B4EC4u; f_804C7AC0(c); // 800B4EC0
L_800B4EC4:;
  c->r[4]=c->r[27]|c->r[27]; // 800B4EC4
  c->r[3]=c->r[25]+0x000000E4u; // 800B4EC8
  c->lr=0x800B4ED0u; f_8005DC84(c); // 800B4ECC
  c->r[3]=c->r[25]+0x000000E4u; // 800B4ED0
  c->lr=0x800B4ED8u; f_80061BF0(c); // 800B4ED4
  cmps(c,0,(int32_t)c->r[3],0); // 800B4ED8
  if (!crb(c,2)) { goto L_800B4EF4; } // 800B4EDC
  c->r[3]=c->r[25]+0x000000E4u; // 800B4EE0
  c->r[5]=0u+0x806A0000u; // 800B4EE4
  c->r[4]=c->r[3]|c->r[3]; // 800B4EE8
  c->r[5]=c->r[5]+0x00000AA8u; // 800B4EEC
  c->lr=0x800B4EF4u; f_8030E0BC(c); // 800B4EF0
L_800B4EF4:;
  cmps(c,0,(int32_t)c->r[26],0); // 800B4EF4
  if (crb(c,2)) { goto L_800B4F10; } // 800B4EF8
  {uint32_t ea=c->r[2]+0xFFFF9D50u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B4EFC
  {uint32_t ea=c->r[25]+0x000000F0u; WF32(ea,c->f[0]);} // 800B4F00
  {uint32_t ea=c->r[25]+0x000000F4u; WF32(ea,c->f[0]);} // 800B4F04
  {uint32_t ea=c->r[25]+0x000000F8u; WF32(ea,c->f[0]);} // 800B4F08
  goto L_800B501C; // 800B4F0C
L_800B4F10:;
  c->r[0]=c->r[29]^0x80000000u; // 800B4F10
  W32(c->r[1]+0x000000A4u,c->r[0]); // 800B4F14
  {uint32_t ea=c->r[2]+0xFFFF9D60u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B4F18
  c->r[0]=0u+0x00000000u; // 800B4F1C
  {uint32_t ea=c->r[2]+0xFFFF9D70u; c->f[3]=RF64(ea);} // 800B4F20
  c->r[3]=c->r[1]+0x00000008u; // 800B4F24
  {uint32_t ea=c->r[1]+0x000000A0u; c->f[2]=RF64(ea);} // 800B4F28
  {uint32_t ea=c->r[2]+0xFFFF9D50u; c->f[1]=c->ps1[1]=RF32(ea);} // 800B4F2C
  c->f[5]=c->ps1[5]=S(c->f[2]-c->f[3]); // 800B4F30
  {uint32_t ea=c->r[2]+0xFFFF9D5Cu; c->f[4]=c->ps1[4]=RF32(ea);} // 800B4F34
  {uint32_t ea=c->r[2]+0xFFFF9D58u; c->f[3]=c->ps1[3]=RF32(ea);} // 800B4F38
  {uint32_t ea=c->r[2]+0xFFFF9D54u; c->f[2]=c->ps1[2]=RF32(ea);} // 800B4F3C
  c->f[4]=c->ps1[4]=S(c->f[4]*c->f[5]); // 800B4F40
  {uint32_t ea=c->r[25]+0x000000F8u; WF32(ea,c->f[0]);} // 800B4F44
  {uint32_t ea=c->r[25]+0x000000F4u; WF32(ea,c->f[1]);} // 800B4F48
  c->f[0]=c->ps1[0]=S(std::fma(c->f[3],c->f[4],c->f[2])); // 800B4F4C
  {uint32_t ea=c->r[25]+0x000000F0u; WF32(ea,c->f[0]);} // 800B4F50
  W8(c->r[1]+0x00000008u,c->r[0]); // 800B4F54
  c->lr=0x800B4F5Cu; f_80047A80(c); // 800B4F58
  c->r[3]=R32(c->r[3]+0x00000004u); // 800B4F5C
  c->lr=0x800B4F64u; f_804CC8D4(c); // 800B4F60
  W32(c->r[1]+0x00000010u,c->r[3]); // 800B4F64
  c->r[3]=c->r[1]+0x00000010u; // 800B4F68
  c->r[4]=c->r[1]+0x00000070u; // 800B4F6C
  c->lr=0x800B4F74u; f_804C7FD8(c); // 800B4F70
  {uint32_t ea=c->r[1]+0x00000080u; c->f[1]=c->ps1[1]=RF32(ea);} // 800B4F74
  c->r[3]=c->r[1]+0x00000054u; // 800B4F78
  {uint32_t ea=c->r[1]+0x00000084u; c->f[2]=c->ps1[2]=RF32(ea);} // 800B4F7C
  {uint32_t ea=c->r[1]+0x00000088u; c->f[3]=c->ps1[3]=RF32(ea);} // 800B4F80
  c->lr=0x800B4F88u; f_8005A6D0(c); // 800B4F84
  c->r[3]=c->r[1]+0x00000054u; // 800B4F88
  c->lr=0x800B4F90u; f_80061BF0(c); // 800B4F8C
  cmps(c,0,(int32_t)c->r[3],0); // 800B4F90
  if (!crb(c,2)) { goto L_800B4FAC; } // 800B4F94
  c->r[3]=c->r[1]+0x00000054u; // 800B4F98
  c->r[5]=0u+0x806A0000u; // 800B4F9C
  c->r[4]=c->r[3]|c->r[3]; // 800B4FA0
  c->r[5]=c->r[5]+0x00000AA8u; // 800B4FA4
  c->lr=0x800B4FACu; f_8030E0BC(c); // 800B4FA8
L_800B4FAC:;
  c->r[3]=c->r[1]+0x00000054u; // 800B4FAC
  c->r[4]=c->r[25]+0x000000E4u; // 800B4FB0
  c->r[5]=c->r[1]+0x00000060u; // 800B4FB4
  c->lr=0x800B4FBCu; f_80383DE0(c); // 800B4FB8
  {uint32_t ea=c->r[25]+0x000000F0u; c->f[1]=c->ps1[1]=RF32(ea);} // 800B4FBC
  c->r[3]=c->r[1]+0x00000060u; // 800B4FC0
  c->lr=0x800B4FC8u; f_800774A8(c); // 800B4FC4
  {uint32_t ea=c->r[25]+0x000000F4u; c->f[1]=c->ps1[1]=RF32(ea);} // 800B4FC8
  c->r[3]=c->r[1]+0x00000054u; // 800B4FCC
  c->lr=0x800B4FD4u; f_800774A8(c); // 800B4FD0
  {uint32_t ea=c->r[25]+0x000000F8u; c->f[1]=c->ps1[1]=RF32(ea);} // 800B4FD4
  c->r[3]=c->r[1]+0x0000003Cu; // 800B4FD8
  c->r[4]=c->r[25]+0x000000E4u; // 800B4FDC
  c->lr=0x800B4FE4u; f_8005ED34(c); // 800B4FE0
  c->r[3]=c->r[1]+0x00000048u; // 800B4FE4
  c->r[4]=c->r[1]+0x0000003Cu; // 800B4FE8
  c->lr=0x800B4FF0u; f_8005DC84(c); // 800B4FEC
  c->r[3]=c->r[1]+0x00000024u; // 800B4FF0
  c->r[4]=c->r[1]+0x00000060u; // 800B4FF4
  c->r[5]=c->r[1]+0x00000054u; // 800B4FF8
  c->lr=0x800B5000u; f_80073ACC(c); // 800B4FFC
  c->r[3]=c->r[1]+0x00000030u; // 800B5000
  c->r[4]=c->r[1]+0x00000024u; // 800B5004
  c->r[5]=c->r[1]+0x00000048u; // 800B5008
  c->lr=0x800B5010u; f_80073ACC(c); // 800B500C
  c->r[3]=c->r[25]+0x000000F0u; // 800B5010
  c->r[4]=c->r[1]+0x00000030u; // 800B5014
  c->lr=0x800B501Cu; f_8005DC84(c); // 800B5018
L_800B501C:;
  c->r[3]=c->r[25]+0x00000014u; // 800B501C
  c->lr=0x800B5024u; f_80382F00(c); // 800B5020
  c->lr=0x800B5028u; f_803B220C(c); // 800B5024
  c->r[0]=c->r[3]^0x80000000u; // 800B5028
  W32(c->r[1]+0x000000ACu,c->r[0]); // 800B502C
  {uint32_t ea=c->r[2]+0xFFFF9D70u; c->f[2]=RF64(ea);} // 800B5030
  {uint32_t ea=c->r[1]+0x000000A8u; c->f[0]=RF64(ea);} // 800B5034
  {uint32_t ea=c->r[2]+0xFFFF9D64u; c->f[1]=c->ps1[1]=RF32(ea);} // 800B5038
  c->f[2]=c->ps1[2]=S(c->f[0]-c->f[2]); // 800B503C
  {uint32_t ea=c->r[2]+0xFFFF9D68u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B5040
  c->f[0]=c->ps1[0]=S(std::fma(c->f[1],c->f[2],-c->f[0])); // 800B5044
  {uint32_t ea=c->r[25]+0x00000044u; WF32(ea,c->f[0]);} // 800B5048
  c->lr=0x800B5050u; f_803B220C(c); // 800B504C
  c->r[0]=c->r[3]^0x80000000u; // 800B5050
  W32(c->r[1]+0x000000A4u,c->r[0]); // 800B5054
  {uint32_t ea=c->r[2]+0xFFFF9D70u; c->f[2]=RF64(ea);} // 800B5058
  {uint32_t ea=c->r[1]+0x000000A0u; c->f[0]=RF64(ea);} // 800B505C
  {uint32_t ea=c->r[2]+0xFFFF9D64u; c->f[1]=c->ps1[1]=RF32(ea);} // 800B5060
  c->f[2]=c->ps1[2]=S(c->f[0]-c->f[2]); // 800B5064
  {uint32_t ea=c->r[2]+0xFFFF9D68u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B5068
  c->f[0]=c->ps1[0]=S(std::fma(c->f[1],c->f[2],-c->f[0])); // 800B506C
  {uint32_t ea=c->r[25]+0x00000048u; WF32(ea,c->f[0]);} // 800B5070
  c->lr=0x800B5078u; f_803B220C(c); // 800B5074
  c->r[0]=c->r[3]^0x80000000u; // 800B5078
  W32(c->r[1]+0x000000ACu,c->r[0]); // 800B507C
  {uint32_t ea=c->r[2]+0xFFFF9D70u; c->f[2]=RF64(ea);} // 800B5080
  c->r[3]=c->r[25]+0x00000044u; // 800B5084
  {uint32_t ea=c->r[1]+0x000000A8u; c->f[0]=RF64(ea);} // 800B5088
  {uint32_t ea=c->r[2]+0xFFFF9D64u; c->f[1]=c->ps1[1]=RF32(ea);} // 800B508C
  c->f[2]=c->ps1[2]=S(c->f[0]-c->f[2]); // 800B5090
  {uint32_t ea=c->r[2]+0xFFFF9D68u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B5094
  c->f[0]=c->ps1[0]=S(std::fma(c->f[1],c->f[2],-c->f[0])); // 800B5098
  {uint32_t ea=c->r[25]+0x0000004Cu; WF32(ea,c->f[0]);} // 800B509C
  c->lr=0x800B50A4u; f_80061BF0(c); // 800B50A0
  cmps(c,0,(int32_t)c->r[3],0); // 800B50A4
  if (!crb(c,2)) { goto L_800B50C4; } // 800B50A8
  c->r[3]=c->r[25]+0x00000044u; // 800B50AC
  c->r[5]=0u+0x806A0000u; // 800B50B0
  c->r[4]=c->r[3]|c->r[3]; // 800B50B4
  c->r[5]=c->r[5]+0x00000AA8u; // 800B50B8
  c->lr=0x800B50C0u; f_8030E0BC(c); // 800B50BC
  goto L_800B50D8; // 800B50C0
L_800B50C4:;
  {uint32_t ea=c->r[2]+0xFFFF9D50u; c->f[1]=c->ps1[1]=RF32(ea);} // 800B50C4
  {uint32_t ea=c->r[2]+0xFFFF9D68u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B50C8
  {uint32_t ea=c->r[25]+0x00000044u; WF32(ea,c->f[1]);} // 800B50CC
  {uint32_t ea=c->r[25]+0x00000048u; WF32(ea,c->f[1]);} // 800B50D0
  {uint32_t ea=c->r[25]+0x0000004Cu; WF32(ea,c->f[0]);} // 800B50D4
L_800B50D8:;
  {uint32_t ea=c->r[2]+0xFFFF9D6Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800B50D8
  c->r[3]=c->r[1]+0x00000018u; // 800B50DC
  {uint32_t ea=c->r[25]+0x00000050u; WF32(ea,c->f[0]);} // 800B50E0
  c->r[4]=c->r[25]+0x000000D8u; // 800B50E4
  c->r[5]=c->r[25]+0x000000F0u; // 800B50E8
  c->lr=0x800B50F0u; f_80073ACC(c); // 800B50EC
  c->r[3]=c->r[25]+0x00000054u; // 800B50F0
  c->r[4]=c->r[1]+0x00000018u; // 800B50F4
  c->lr=0x800B50FCu; f_8005DC84(c); // 800B50F8
  c->r[3]=c->r[25]+0x00000060u; // 800B50FC
  c->r[4]=0u+0x00000001u; // 800B5100
  c->lr=0x800B5108u; f_80320C3C(c); // 800B5104
  c->r[3]=c->r[25]+0x0000009Cu; // 800B5108
  c->r[4]=0u+0x00000001u; // 800B510C
  c->lr=0x800B5114u; f_80320C3C(c); // 800B5110
  {uint32_t ea=c->r[2]+0xFFFF9D50u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B5114
  c->r[11]=c->r[1]+0x000000D0u; // 800B5118
  {uint32_t ea=c->r[25]+0x000000FCu; WF32(ea,c->f[0]);} // 800B511C
  {uint32_t ea=c->r[25]+0x00000100u; WF32(ea,c->f[0]);} // 800B5120
  {uint32_t ea=c->r[25]+0x00000104u; WF32(ea,c->f[0]);} // 800B5124
  {uint32_t ea=c->r[25]+0x00000108u; WF32(ea,c->f[0]);} // 800B5128
  {uint32_t ea=c->r[25]+0x0000010Cu; WF32(ea,c->f[0]);} // 800B512C
  W32(c->r[25]+0x00000110u,c->r[28]); // 800B5130
  W32(c->r[25]+0x00000114u,c->r[29]); // 800B5134
  W32(c->r[25]+0x00000118u,c->r[30]); // 800B5138
  c->lr=0x800B5140u; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800B513C
  c->r[0]=R32(c->r[1]+0x000000D4u); // 800B5140
  c->lr=c->r[0]; // 800B5144
  c->r[1]=c->r[1]+0x000000D0u; // 800B5148
  return; // 800B514C
}

// fn_800B5150
void f_800B5150(Ctx* __restrict c) {
  trace_call(0x800B5150u);
  cmpu(c,0,c->r[3],0x0000000Au); // 800B5150
  if (!crb(c,1)) { goto L_800B515C; } // 800B5154
  c->r[3]=0u+0x00000000u; // 800B5158
L_800B515C:;
  c->r[0]=(uint32_t)((int32_t)c->r[3]*(int32_t)148); // 800B515C
  c->r[3]=0u+0x806D0000u; // 800B5160
  c->r[3]=c->r[3]+0x000068A8u; // 800B5164
  c->r[3]=c->r[3]+c->r[0]; // 800B5168
  return; // 800B516C
}

// fn_800B5170
void f_800B5170(Ctx* __restrict c) {
  trace_call(0x800B5170u);
  {uint32_t ea=c->r[1]+0xFFFFFB80u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B5170
  c->r[0]=c->lr; // 800B5174
  W32(c->r[1]+0x00000484u,c->r[0]); // 800B5178
  c->r[11]=c->r[1]+0x00000460u; // 800B517C
  {uint32_t ea=c->r[1]+0x00000470u; WF64(ea,c->f[31]);} // 800B5180
  {uint32_t ea=c->r[1]+0x00000478u; psq_store(c,31,ea,0,0);} // 800B5184
  {uint32_t ea=c->r[1]+0x00000460u; WF64(ea,c->f[30]);} // 800B5188
  {uint32_t ea=c->r[1]+0x00000468u; psq_store(c,30,ea,0,0);} // 800B518C
  c->lr=0x800B5194u; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800B5190
  c->r[0]=R8(c->r[13]+0xFFFFC130u); // 800B5194
  c->r[7]=0u+0x00000000u; // 800B5198
  W32(c->r[1]+0x00000430u,c->r[7]); // 800B519C
  c->r[26]=c->r[3]|c->r[3]; // 800B51A0
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800B51A4
  c->r[27]=c->r[4]|c->r[4]; // 800B51A8
  if (!crb(c,2)) { goto L_800B51DC; } // 800B51AC
  c->r[6]=0u+0x80750000u; // 800B51B0
  c->r[4]=0u+0x806D0000u; // 800B51B4
  c->r[5]=c->r[6]+0x00001004u; // 800B51B8
  c->r[0]=0u+0x00000001u; // 800B51BC
  c->r[4]=c->r[4]+0x00006878u; // 800B51C0
  W32(c->r[5]+0x00000004u,c->r[7]); // 800B51C4
  W32(c->r[5]+0x00000008u,c->r[7]); // 800B51C8
  W32(c->r[5]+0x00000044u,c->r[7]); // 800B51CC
  W32(c->r[5]+0x00000048u,c->r[7]); // 800B51D0
  W32(c->r[6]+0x00001004u,c->r[4]); // 800B51D4
  W8(c->r[13]+0xFFFFC130u,c->r[0]); // 800B51D8
L_800B51DC:;
  c->r[4]=R32(c->r[3]+0x00000118u); // 800B51DC
  cmps(c,0,(int32_t)c->r[4],0); // 800B51E0
  if (!crb(c,1)) { goto L_800B5200; } // 800B51E4
  c->r[0]=c->r[4]+0xFFFFFFFFu; // 800B51E8
  W32(c->r[3]+0x00000118u,c->r[0]); // 800B51EC
  c->r[0]=0u+0x00000000u; // 800B51F0
  c->r[3]=0u+0x00000000u; // 800B51F4
  W32(c->r[1]+0x00000430u,c->r[0]); // 800B51F8
  goto L_800B5864; // 800B51FC
L_800B5200:;
  c->r[28]=0u+0x00000000u; // 800B5200
  W8(c->r[1]+0x00000044u,c->r[28]); // 800B5204
  c->r[3]=c->r[1]+0x00000044u; // 800B5208
  c->lr=0x800B5210u; f_8004714C(c); // 800B520C
  {uint32_t ea=c->r[3]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 800B5210
  c->r[3]=c->r[1]+0x0000003Cu; // 800B5214
  {uint32_t ea=c->r[26]+0x0000010Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800B5218
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[1]); // 800B521C
  {uint32_t ea=c->r[26]+0x0000010Cu; WF32(ea,c->f[0]);} // 800B5220
  W8(c->r[1]+0x0000003Cu,c->r[28]); // 800B5224
  c->lr=0x800B522Cu; f_8004714C(c); // 800B5228
  {uint32_t ea=c->r[3]+0x0000002Cu; c->f[31]=c->ps1[31]=RF32(ea);} // 800B522C
  c->r[3]=c->r[1]+0x00000040u; // 800B5230
  W8(c->r[1]+0x00000040u,c->r[28]); // 800B5234
  c->lr=0x800B523Cu; f_8004714C(c); // 800B5238
  {uint32_t ea=c->r[3]+0x00000004u; c->f[30]=c->ps1[30]=RF32(ea);} // 800B523C
  c->r[3]=R32(c->r[26]+0x00000110u); // 800B5240
  c->lr=0x800B5248u; f_800B0548(c); // 800B5244
  c->f[2]=c->ps1[2]=S(c->f[30]*c->f[31]); // 800B5248
  {uint32_t ea=c->r[3]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 800B524C
  {uint32_t ea=c->r[2]+0xFFFF9D50u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B5250
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[2]); // 800B5254
  fcmp(c,0,c->f[1],c->f[0]); // 800B5258
  if (!crb(c,0)) { goto L_800B5264; } // 800B525C
  {uint32_t ea=c->r[2]+0xFFFF9D78u; c->f[1]=c->ps1[1]=RF32(ea);} // 800B5260
L_800B5264:;
  c->r[3]=c->r[1]+0x00000088u; // 800B5264
  c->r[4]=c->r[26]+0x000000E4u; // 800B5268
  c->lr=0x800B5270u; f_8005ED34(c); // 800B526C
  c->r[3]=c->r[1]+0x00000094u; // 800B5270
  c->r[4]=c->r[1]+0x00000088u; // 800B5274
  c->r[5]=c->r[26]+0x000000D8u; // 800B5278
  c->lr=0x800B5280u; f_80073ACC(c); // 800B527C
  c->r[3]=c->r[1]+0x000000ACu; // 800B5280
  c->r[4]=c->r[1]+0x00000094u; // 800B5284
  c->lr=0x800B528Cu; f_8005DC84(c); // 800B5288
  c->r[3]=R32(c->r[26]+0x00000110u); // 800B528C
  c->lr=0x800B5294u; f_800B0548(c); // 800B5290
  {uint32_t ea=c->r[3]+0x00000004u; c->f[30]=c->ps1[30]=RF32(ea);} // 800B5294
  c->r[30]=0u+0x00000000u; // 800B5298
  c->r[3]=R32(c->r[26]+0x00000110u); // 800B529C
  c->lr=0x800B52A4u; f_800B5150(c); // 800B52A0
  c->r[29]=R32(c->r[3]+0x00000088u); // 800B52A4
  c->r[3]=0u+0x00000000u; // 800B52A8
  c->r[0]=rotl(c->r[29],0)&0x00000004u; cr0(c,c->r[0]); // 800B52AC
  W32(c->r[1]+0x00000048u,c->r[3]); // 800B52B0
  if (crb(c,2)) { goto L_800B52CC; } // 800B52B4
  c->r[31]=0u+0x80750000u; // 800B52B8
  c->r[0]=0u+0x00000001u; // 800B52BC
  W32(c->r[1]+0x00000048u,c->r[0]); // 800B52C0
  c->r[31]=c->r[31]+0x00001004u; // 800B52C4
  goto L_800B52EC; // 800B52C8
L_800B52CC:;
  W8(c->r[1]+0x00000038u,c->r[3]); // 800B52CC
  c->r[3]=c->r[1]+0x00000038u; // 800B52D0
  c->lr=0x800B52D8u; f_80046EFC(c); // 800B52D4
  c->r[3]=R32(c->r[3]+0x000000BCu); // 800B52D8
  c->lr=0x800B52E0u; f_800B727C(c); // 800B52DC
  c->r[0]=0u+0x00000100u; // 800B52E0
  W32(c->r[1]+0x00000048u,c->r[0]); // 800B52E4
  c->r[31]=c->r[3]|c->r[3]; // 800B52E8
L_800B52EC:;
  c->r[3]=c->r[26]+0x000000E4u; // 800B52EC
  c->lr=0x800B52F4u; f_80061BF0(c); // 800B52F0
  cmps(c,0,(int32_t)c->r[3],0); // 800B52F4
  if (!crb(c,2)) { goto L_800B5354; } // 800B52F8
  c->r[28]=0u+0x00000000u; // 800B52FC
  W8(c->r[1]+0x00000034u,c->r[28]); // 800B5300
  c->r[3]=c->r[1]+0x00000034u; // 800B5304
  c->lr=0x800B530Cu; f_80046EFC(c); // 800B5308
  c->r[0]=c->r[1]+0x00000048u; // 800B530C
  W32(c->r[1]+0x00000008u,c->r[0]); // 800B5310
  c->r[0]=0u+0x00000009u; // 800B5314
  c->f[1]=c->f[30]; // 800B5318
  W32(c->r[1]+0x0000000Cu,c->r[28]); // 800B531C
  c->r[7]=c->r[29]|c->r[29]; // 800B5320
  c->r[10]=c->r[31]|c->r[31]; // 800B5324
  c->r[5]=c->r[26]+0x000000D8u; // 800B5328
  W32(c->r[1]+0x00000010u,c->r[0]); // 800B532C
  c->r[6]=c->r[1]+0x000000ACu; // 800B5330
  c->r[9]=c->r[1]+0x000000E8u; // 800B5334
  c->r[4]=R32(c->r[26]+0x00000114u); // 800B5338
  c->r[8]=0u+0x00000000u; // 800B533C
  c->lr=0x800B5344u; f_800B1EB0(c); // 800B5340
  c->r[0]=rotl(c->r[3],0)&0x00000004u; cr0(c,c->r[0]); // 800B5344
  c->r[30]=c->r[3]|c->r[3]; // 800B5348
  if (crb(c,2)) { goto L_800B5354; } // 800B534C
  c->r[30]=rotl(c->r[3],0)&0xFFFFFFFCu; // 800B5350
L_800B5354:;
  c->r[0]=R32(c->r[26]+0x00000000u); // 800B5354
  c->r[0]=rotl(c->r[0],0)&0x00000004u; cr0(c,c->r[0]); // 800B5358
  if (crb(c,2)) { goto L_800B53D8; } // 800B535C
  c->r[28]=0u+0x00000000u; // 800B5360
  W8(c->r[1]+0x0000002Cu,c->r[28]); // 800B5364
  c->r[3]=c->r[1]+0x0000002Cu; // 800B5368
  c->lr=0x800B5370u; f_8004714C(c); // 800B536C
  c->r[25]=R32(c->r[3]+0x00000034u); // 800B5370
  c->r[3]=c->r[1]+0x00000030u; // 800B5374
  W8(c->r[1]+0x00000030u,c->r[28]); // 800B5378
  c->lr=0x800B5380u; f_8004714C(c); // 800B537C
  c->r[4]=c->r[25]^0x80000000u; // 800B5380
  c->r[0]=0u+0x43300000u; // 800B5384
  W32(c->r[1]+0x0000043Cu,c->r[4]); // 800B5388
  c->r[4]=c->r[26]+0x00000044u; // 800B538C
  {uint32_t ea=c->r[2]+0xFFFF9D70u; c->f[1]=RF64(ea);} // 800B5390
  W32(c->r[1]+0x00000438u,c->r[0]); // 800B5394
  {uint32_t ea=c->r[3]+0x00000004u; c->f[4]=c->ps1[4]=RF32(ea);} // 800B5398
  c->r[3]=c->r[1]+0x000000B8u; // 800B539C
  {uint32_t ea=c->r[1]+0x00000438u; c->f[0]=RF64(ea);} // 800B53A0
  {uint32_t ea=c->r[2]+0xFFFF9D7Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 800B53A4
  c->f[3]=c->ps1[3]=S(c->f[0]-c->f[1]); // 800B53A8
  {uint32_t ea=c->r[26]+0x00000050u; c->f[1]=c->ps1[1]=RF32(ea);} // 800B53AC
  {uint32_t ea=c->r[2]+0xFFFF9D80u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B53B0
  c->f[2]=c->ps1[2]=S(c->f[2]/c->f[3]); // 800B53B4
  c->f[2]=c->ps1[2]=S(c->f[4]*c->f[2]); // 800B53B8
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[2]); // 800B53BC
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[1]); // 800B53C0
  c->lr=0x800B53C8u; f_804E1868(c); // 800B53C4
  c->r[4]=c->r[26]+0x00000014u; // 800B53C8
  c->r[3]=c->r[1]+0x000000B8u; // 800B53CC
  c->r[5]=c->r[4]|c->r[4]; // 800B53D0
  c->lr=0x800B53D8u; f_80382F60(c); // 800B53D4
L_800B53D8:;
  c->r[0]=R8(c->r[13]+0xFFFFBB77u); // 800B53D8
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800B53DC
  if (!crb(c,2)) { goto L_800B5424; } // 800B53E0
  c->r[28]=0u+0x80730000u; // 800B53E4
  c->r[3]=c->r[28]+0x00003694u; // 800B53E8
  c->lr=0x800B53F0u; f_800BD290(c); // 800B53EC
  c->r[6]=0u+0x806D0000u; // 800B53F0
  c->r[4]=0u+0x80050000u; // 800B53F4
  c->r[6]=c->r[6]+0xFFFFC740u; // 800B53F8
  c->r[3]=c->r[28]+0x00003694u; // 800B53FC
  c->r[0]=c->r[6]+0x00000028u; // 800B5400
  c->r[5]=0u+0x80750000u; // 800B5404
  W32(c->r[3]+0x000000A4u,c->r[6]); // 800B5408
  c->r[4]=c->r[4]+0xFFFFA2E4u; // 800B540C
  c->r[5]=c->r[5]+0x00000FF8u; // 800B5410
  W32(c->r[3]+0x000000A8u,c->r[0]); // 800B5414
  c->lr=0x800B541Cu; f_803A92B8(c); // 800B5418
  c->r[0]=0u+0x00000001u; // 800B541C
  W8(c->r[13]+0xFFFFBB77u,c->r[0]); // 800B5420
L_800B5424:;
  c->f[1]=c->f[30]; // 800B5424
  c->r[3]=0u+0x80730000u; // 800B5428
  c->r[4]=R32(c->r[26]+0x00000114u); // 800B542C
  c->r[3]=c->r[3]+0x00003694u; // 800B5430
  c->r[5]=c->r[26]+0x000000D8u; // 800B5434
  c->r[6]=c->r[1]+0x000000ACu; // 800B5438
  c->r[7]=rotl(c->r[29],29)&0x00000001u; // 800B543C
  c->lr=0x800B5444u; f_800BF8B8(c); // 800B5440
  c->r[0]=rotl(c->r[30],0)&0x0000000Fu; cr0(c,c->r[0]); // 800B5444
  c->r[28]=0u+0x00000001u; // 800B5448
  if (crb(c,2)) { goto L_800B56A4; } // 800B544C
  c->r[0]=R32(c->r[26]+0x00000000u); // 800B5450
  c->r[0]=rotl(c->r[0],0)&0x00000004u; cr0(c,c->r[0]); // 800B5454
  if (crb(c,2)) { goto L_800B562C; } // 800B5458
  c->r[0]=rotl(c->r[30],0)&0x00000003u; cr0(c,c->r[0]); // 800B545C
  if (crb(c,2)) { goto L_800B54B0; } // 800B5460
  c->r[0]=R32(c->r[1]+0x00000100u); // 800B5464
  c->r[0]=rotl(c->r[0],0)&0x000000FFu; // 800B5468
  cmpu(c,0,c->r[0],0x00000005u); // 800B546C
  if (crb(c,2)) { goto L_800B549C; } // 800B5470
  {uint32_t ea=c->r[2]+0xFFFF9D84u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B5474
  c->r[3]=c->r[26]|c->r[26]; // 800B5478
  {uint32_t ea=c->r[2]+0xFFFF9D88u; c->f[2]=c->ps1[2]=RF32(ea);} // 800B547C
  c->r[4]=c->r[1]+0x000000E8u; // 800B5480
  c->f[1]=c->ps1[1]=S(c->f[0]+c->f[30]); // 800B5484
  c->r[5]=c->r[1]+0x00000110u; // 800B5488
  c->r[6]=c->r[1]+0x0000011Cu; // 800B548C
  c->r[7]=c->r[1]+0x000000ACu; // 800B5490
  c->lr=0x800B5498u; f_800B5E70(c); // 800B5494
  goto L_800B54B0; // 800B5498
L_800B549C:;
  c->r[3]=c->r[26]|c->r[26]; // 800B549C
  c->r[4]=c->r[1]+0x00000110u; // 800B54A0
  c->r[5]=c->r[1]+0x0000011Cu; // 800B54A4
  c->r[6]=c->r[1]+0x000000ACu; // 800B54A8
  c->lr=0x800B54B0u; f_800B6180(c); // 800B54AC
L_800B54B0:;
  c->r[0]=rotl(c->r[30],0)&0x0000000Cu; cr0(c,c->r[0]); // 800B54B0
  if (crb(c,2)) { goto L_800B54F0; } // 800B54B4
  c->r[3]=c->r[26]+0x000000E4u; // 800B54B8
  c->r[4]=c->r[31]+0x00000058u; // 800B54BC
  c->lr=0x800B54C4u; f_800B3F44(c); // 800B54C0
  {uint32_t ea=c->r[2]+0xFFFF9D50u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B54C4
  fcmp(c,0,c->f[1],c->f[0]); // 800B54C8
  if (!crb(c,0)) { goto L_800B54F0; } // 800B54CC
  {uint32_t ea=c->r[2]+0xFFFF9D8Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 800B54D0
  c->r[3]=c->r[26]|c->r[26]; // 800B54D4
  c->r[5]=c->r[31]+0x0000004Cu; // 800B54D8
  c->r[6]=c->r[31]+0x00000058u; // 800B54DC
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[30]); // 800B54E0
  c->r[7]=c->r[1]+0x000000ACu; // 800B54E4
  c->r[4]=0u+0x00000000u; // 800B54E8
  c->lr=0x800B54F0u; f_800B5E70(c); // 800B54EC
L_800B54F0:;
  c->r[0]=R32(c->r[26]+0x00000000u); // 800B54F0
  c->r[0]=rotl(c->r[0],0)&0x80000000u; cr0(c,c->r[0]); // 800B54F4
  if (!crb(c,2)) { goto L_800B56A4; } // 800B54F8
  c->r[0]=rotl(c->r[29],0)&0x00000002u; cr0(c,c->r[0]); // 800B54FC
  if (crb(c,2)) { goto L_800B554C; } // 800B5500
  c->r[29]=0u+0x00000000u; // 800B5504
  W8(c->r[1]+0x00000028u,c->r[29]); // 800B5508
  c->r[3]=c->r[1]+0x00000028u; // 800B550C
  c->lr=0x800B5514u; f_80046EFC(c); // 800B5510
  W32(c->r[1]+0x00000008u,c->r[29]); // 800B5514
  c->r[0]=0u+0x00000019u; // 800B5518
  c->f[1]=c->f[30]; // 800B551C
  c->r[5]=c->r[26]+0x000000D8u; // 800B5520
  W32(c->r[1]+0x0000000Cu,c->r[29]); // 800B5524
  c->r[6]=c->r[1]+0x000000ACu; // 800B5528
  c->r[9]=c->r[1]+0x000000E8u; // 800B552C
  c->r[7]=0u+0x00000002u; // 800B5530
  W32(c->r[1]+0x00000010u,c->r[0]); // 800B5534
  c->r[8]=0u+0x00000000u; // 800B5538
  c->r[10]=0u+0x00000000u; // 800B553C
  c->r[4]=R32(c->r[26]+0x00000114u); // 800B5540
  c->lr=0x800B5548u; f_800B1EB0(c); // 800B5544
  goto L_800B5590; // 800B5548
L_800B554C:;
  c->r[29]=0u+0x00000000u; // 800B554C
  W8(c->r[1]+0x00000024u,c->r[29]); // 800B5550
  c->r[3]=c->r[1]+0x00000024u; // 800B5554
  c->lr=0x800B555Cu; f_80046EFC(c); // 800B5558
  W32(c->r[1]+0x00000008u,c->r[29]); // 800B555C
  c->r[0]=0u+0x00000019u; // 800B5560
  {uint32_t ea=c->r[2]+0xFFFF9D50u; c->f[1]=c->ps1[1]=RF32(ea);} // 800B5564
  c->r[5]=c->r[26]+0x000000D8u; // 800B5568
  W32(c->r[1]+0x0000000Cu,c->r[29]); // 800B556C
  c->r[6]=c->r[1]+0x000000ACu; // 800B5570
  c->r[9]=c->r[1]+0x000000E8u; // 800B5574
  c->r[7]=0u+0x00000001u; // 800B5578
  W32(c->r[1]+0x00000010u,c->r[0]); // 800B557C
  c->r[8]=0u+0x00000000u; // 800B5580
  c->r[10]=0u+0x00000000u; // 800B5584
  c->r[4]=R32(c->r[26]+0x00000114u); // 800B5588
  c->lr=0x800B5590u; f_800B1EB0(c); // 800B558C
L_800B5590:;
  c->r[0]=rotl(c->r[3],0)&0x00000002u; cr0(c,c->r[0]); // 800B5590
  if (crb(c,2)) { goto L_800B55E0; } // 800B5594
  c->r[0]=R32(c->r[1]+0x00000100u); // 800B5598
  c->r[0]=rotl(c->r[0],0)&0x000000FFu; // 800B559C
  cmpu(c,0,c->r[0],0x00000005u); // 800B55A0
  if (crb(c,2)) { goto L_800B56A4; } // 800B55A4
  {uint32_t ea=c->r[2]+0xFFFF9D84u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B55A8
  c->r[3]=c->r[1]+0x00000070u; // 800B55AC
  c->r[4]=c->r[1]+0x0000011Cu; // 800B55B0
  c->f[1]=c->ps1[1]=S(c->f[0]+c->f[30]); // 800B55B4
  c->lr=0x800B55BCu; f_8005ED34(c); // 800B55B8
  c->r[3]=c->r[1]+0x0000007Cu; // 800B55BC
  c->r[4]=c->r[1]+0x00000110u; // 800B55C0
  c->r[5]=c->r[1]+0x00000070u; // 800B55C4
  c->lr=0x800B55CCu; f_80073ACC(c); // 800B55C8
  c->r[3]=c->r[1]+0x000000ACu; // 800B55CC
  c->r[4]=c->r[1]+0x0000007Cu; // 800B55D0
  c->lr=0x800B55D8u; f_8005DC84(c); // 800B55D4
  c->r[28]=0u+0x00000000u; // 800B55D8
  goto L_800B56A4; // 800B55DC
L_800B55E0:;
  c->r[0]=rotl(c->r[3],0)&0x00000001u; cr0(c,c->r[0]); // 800B55E0
  if (crb(c,2)) { goto L_800B56A4; } // 800B55E4
  c->r[0]=R32(c->r[1]+0x00000100u); // 800B55E8
  c->r[0]=rotl(c->r[0],0)&0x000000FFu; // 800B55EC
  cmpu(c,0,c->r[0],0x00000005u); // 800B55F0
  if (crb(c,2)) { goto L_800B56A4; } // 800B55F4
  {uint32_t ea=c->r[2]+0xFFFF9D84u; c->f[1]=c->ps1[1]=RF32(ea);} // 800B55F8
  c->r[3]=c->r[1]+0x00000058u; // 800B55FC
  c->r[4]=c->r[1]+0x0000011Cu; // 800B5600
  c->lr=0x800B5608u; f_8005ED34(c); // 800B5604
  c->r[3]=c->r[1]+0x00000064u; // 800B5608
  c->r[4]=c->r[1]+0x00000110u; // 800B560C
  c->r[5]=c->r[1]+0x00000058u; // 800B5610
  c->lr=0x800B5618u; f_80073ACC(c); // 800B5614
  c->r[3]=c->r[1]+0x000000ACu; // 800B5618
  c->r[4]=c->r[1]+0x00000064u; // 800B561C
  c->lr=0x800B5624u; f_8005DC84(c); // 800B5620
  c->r[28]=0u+0x00000000u; // 800B5624
  goto L_800B56A4; // 800B5628
L_800B562C:;
  c->r[0]=rotl(c->r[30],0)&0x00000003u; cr0(c,c->r[0]); // 800B562C
  c->r[3]=0u+0x00000001u; // 800B5630
  if (crb(c,2)) { goto L_800B5644; } // 800B5634
  c->r[3]=c->r[26]|c->r[26]; // 800B5638
  c->r[4]=c->r[1]+0x000000E8u; // 800B563C
  c->lr=0x800B5644u; f_800B589C(c); // 800B5640
L_800B5644:;
  c->r[0]=rotl(c->r[30],0)&0x00000004u; cr0(c,c->r[0]); // 800B5644
  if (crb(c,2)) { goto L_800B565C; } // 800B5648
  c->r[3]=c->r[26]|c->r[26]; // 800B564C
  c->r[4]=c->r[31]|c->r[31]; // 800B5650
  c->r[5]=0u+0x00000001u; // 800B5654
  c->lr=0x800B565Cu; f_800B5A28(c); // 800B5658
L_800B565C:;
  c->r[0]=rotl(c->r[30],0)&0x00000008u; cr0(c,c->r[0]); // 800B565C
  if (crb(c,2)) { goto L_800B5674; } // 800B5660
  c->r[5]=R32(c->r[1]+0x00000048u); // 800B5664
  c->r[3]=c->r[26]|c->r[26]; // 800B5668
  c->r[4]=c->r[31]|c->r[31]; // 800B566C
  c->lr=0x800B5674u; f_800B5A28(c); // 800B5670
L_800B5674:;
  cmps(c,0,(int32_t)c->r[3],0); // 800B5674
  if (crb(c,2)) { goto L_800B56A4; } // 800B5678
  c->r[3]=c->r[26]+0x00000060u; // 800B567C
  c->r[4]=0u+0x00000000u; // 800B5680
  c->lr=0x800B5688u; f_80320C3C(c); // 800B5684
  c->r[3]=c->r[26]+0x0000009Cu; // 800B5688
  c->r[4]=0u+0x00000001u; // 800B568C
  c->lr=0x800B5694u; f_80320C3C(c); // 800B5690
  c->r[0]=0u+0x00000000u; // 800B5694
  W32(c->r[1]+0x00000430u,c->r[0]); // 800B5698
  c->r[3]=0u+0x00000001u; // 800B569C
  goto L_800B5864; // 800B56A0
L_800B56A4:;
  c->r[3]=R32(c->r[26]+0x00000110u); // 800B56A4
  c->lr=0x800B56ACu; f_800B0548(c); // 800B56A8
  c->r[4]=R32(c->r[26]+0x00000000u); // 800B56AC
  {uint32_t ea=c->r[3]+0x00000038u; c->f[1]=c->ps1[1]=RF32(ea);} // 800B56B0
  c->r[0]=rotl(c->r[4],0)&0x00000001u; cr0(c,c->r[0]); // 800B56B4
  if (crb(c,2)) { goto L_800B5708; } // 800B56B8
  {uint32_t ea=c->r[2]+0xFFFF9D50u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B56BC
  fcmp(c,0,c->f[1],c->f[0]); // 800B56C0
  if (!crb(c,1)) { goto L_800B5708; } // 800B56C4
  {uint32_t ea=c->r[26]+0x0000010Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800B56C8
  fcmp(c,0,c->f[0],c->f[1]); // 800B56CC
  if (!crb(c,1)) { goto L_800B5708; } // 800B56D0
  c->r[3]=c->r[26]|c->r[26]; // 800B56D4
  c->r[4]=c->r[1]+0x000000ACu; // 800B56D8
  c->lr=0x800B56E0u; f_800B5CD8(c); // 800B56DC
  c->r[3]=c->r[26]+0x00000060u; // 800B56E0
  c->r[4]=0u+0x00000000u; // 800B56E4
  c->lr=0x800B56ECu; f_80320C3C(c); // 800B56E8
  c->r[3]=c->r[26]+0x0000009Cu; // 800B56EC
  c->r[4]=0u+0x00000001u; // 800B56F0
  c->lr=0x800B56F8u; f_80320C3C(c); // 800B56F4
  c->r[0]=0u+0x00000000u; // 800B56F8
  W32(c->r[1]+0x00000430u,c->r[0]); // 800B56FC
  c->r[3]=0u+0x00000001u; // 800B5700
  goto L_800B5864; // 800B5704
L_800B5708:;
  c->r[0]=rotl(c->r[4],0)&0x00000002u; cr0(c,c->r[0]); // 800B5708
  if (crb(c,2)) { goto L_800B5744; } // 800B570C
  cmps(c,0,(int32_t)c->r[28],0); // 800B5710
  if (crb(c,2)) { goto L_800B5744; } // 800B5714
  c->r[0]=0u+0x00000000u; // 800B5718
  W8(c->r[1]+0x00000020u,c->r[0]); // 800B571C
  c->r[3]=c->r[1]+0x00000020u; // 800B5720
  c->lr=0x800B5728u; f_8004714C(c); // 800B5724
  {uint32_t ea=c->r[3]+0x00000004u; c->f[30]=c->ps1[30]=RF32(ea);} // 800B5728
  c->r[3]=R32(c->r[26]+0x00000110u); // 800B572C
  c->lr=0x800B5734u; f_800B5150(c); // 800B5730
  {uint32_t ea=c->r[3]+0x00000084u; c->f[1]=c->ps1[1]=RF32(ea);} // 800B5734
  {uint32_t ea=c->r[26]+0x000000E8u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B5738
  c->f[0]=c->ps1[0]=S(-std::fma(c->f[30],c->f[1],-c->f[0])); // 800B573C
  {uint32_t ea=c->r[26]+0x000000E8u; WF32(ea,c->f[0]);} // 800B5740
L_800B5744:;
  c->r[28]=0u+0x00000000u; // 800B5744
  W8(c->r[1]+0x00000018u,c->r[28]); // 800B5748
  c->r[3]=c->r[1]+0x00000018u; // 800B574C
  c->lr=0x800B5754u; f_8004714C(c); // 800B5750
  c->r[25]=R32(c->r[3]+0x00000034u); // 800B5754
  c->r[3]=c->r[1]+0x0000001Cu; // 800B5758
  W8(c->r[1]+0x0000001Cu,c->r[28]); // 800B575C
  c->lr=0x800B5764u; f_8004714C(c); // 800B5760
  c->r[4]=c->r[25]^0x80000000u; // 800B5764
  c->r[0]=0u+0x43300000u; // 800B5768
  W32(c->r[1]+0x0000043Cu,c->r[4]); // 800B576C
  {uint32_t ea=c->r[2]+0xFFFF9D70u; c->f[1]=RF64(ea);} // 800B5770
  W32(c->r[1]+0x00000438u,c->r[0]); // 800B5774
  {uint32_t ea=c->r[3]+0x00000004u; c->f[4]=c->ps1[4]=RF32(ea);} // 800B5778
  c->r[3]=c->r[26]+0x000000F0u; // 800B577C
  {uint32_t ea=c->r[1]+0x00000438u; c->f[0]=RF64(ea);} // 800B5780
  {uint32_t ea=c->r[2]+0xFFFF9D7Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 800B5784
  c->f[3]=c->ps1[3]=S(c->f[0]-c->f[1]); // 800B5788
  {uint32_t ea=c->r[2]+0xFFFF9D90u; c->f[1]=c->ps1[1]=RF32(ea);} // 800B578C
  {uint32_t ea=c->r[2]+0xFFFF9D68u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B5790
  c->f[2]=c->ps1[2]=S(c->f[2]/c->f[3]); // 800B5794
  c->f[2]=c->ps1[2]=S(c->f[4]*c->f[2]); // 800B5798
  c->f[1]=c->ps1[1]=S(-std::fma(c->f[1],c->f[2],-c->f[0])); // 800B579C
  c->lr=0x800B57A4u; f_800774A8(c); // 800B57A0
  c->r[3]=c->r[1]+0x0000004Cu; // 800B57A4
  c->r[4]=c->r[1]+0x000000ACu; // 800B57A8
  c->r[5]=c->r[26]+0x000000D8u; // 800B57AC
  c->lr=0x800B57B4u; f_800772A0(c); // 800B57B0
  c->r[3]=c->r[1]+0x000000A0u; // 800B57B4
  c->r[4]=c->r[1]+0x0000004Cu; // 800B57B8
  c->lr=0x800B57C0u; f_8005DC84(c); // 800B57BC
  c->r[3]=c->r[1]+0x000000A0u; // 800B57C0
  c->lr=0x800B57C8u; f_80061BF0(c); // 800B57C4
  cmps(c,0,(int32_t)c->r[3],0); // 800B57C8
  if (!crb(c,2)) { goto L_800B57E4; } // 800B57CC
  c->r[3]=c->r[1]+0x000000A0u; // 800B57D0
  c->lr=0x800B57D8u; f_80084FAC(c); // 800B57D4
  {uint32_t ea=c->r[26]+0x00000108u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B57D8
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[1]); // 800B57DC
  {uint32_t ea=c->r[26]+0x00000108u; WF32(ea,c->f[0]);} // 800B57E0
L_800B57E4:;
  c->r[3]=c->r[26]+0x000000D8u; // 800B57E4
  c->r[4]=c->r[1]+0x000000ACu; // 800B57E8
  c->lr=0x800B57F0u; f_8005DC84(c); // 800B57EC
  {uint32_t ea=c->r[26]+0x00000108u; c->f[1]=c->ps1[1]=RF32(ea);} // 800B57F0
  {uint32_t ea=c->r[2]+0xFFFF9D78u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B57F4
  fcmp(c,0,c->f[1],c->f[0]); // 800B57F8
  if (crb(c,1)) { goto L_800B5818; } // 800B57FC
  c->r[3]=R32(c->r[26]+0x00000110u); // 800B5800
  c->lr=0x800B5808u; f_800B0548(c); // 800B5804
  {uint32_t ea=c->r[3]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 800B5808
  {uint32_t ea=c->r[2]+0xFFFF9D50u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B580C
  fcmp(c,0,c->f[1],c->f[0]); // 800B5810
  if (!crb(c,0)) { goto L_800B5840; } // 800B5814
L_800B5818:;
  c->r[3]=c->r[26]+0x00000060u; // 800B5818
  c->r[4]=0u+0x00000000u; // 800B581C
  c->lr=0x800B5824u; f_80320C3C(c); // 800B5820
  c->r[3]=c->r[26]+0x0000009Cu; // 800B5824
  c->r[4]=0u+0x00000001u; // 800B5828
  c->lr=0x800B5830u; f_80320C3C(c); // 800B582C
  c->r[0]=0u+0x00000000u; // 800B5830
  W32(c->r[1]+0x00000430u,c->r[0]); // 800B5834
  c->r[3]=0u+0x00000001u; // 800B5838
  goto L_800B5864; // 800B583C
L_800B5840:;
  c->r[3]=c->r[26]|c->r[26]; // 800B5840
  c->r[4]=c->r[27]|c->r[27]; // 800B5844
  c->lr=0x800B584Cu; f_800B62D0(c); // 800B5848
  c->r[3]=c->r[26]|c->r[26]; // 800B584C
  c->r[4]=c->r[27]|c->r[27]; // 800B5850
  c->lr=0x800B5858u; f_800B64C8(c); // 800B5854
  c->r[0]=0u+0x00000000u; // 800B5858
  W32(c->r[1]+0x00000430u,c->r[0]); // 800B585C
  c->r[3]=0u+0x00000000u; // 800B5860
L_800B5864:;
  c->r[11]=c->r[1]+0x00000460u; // 800B5864
  {uint32_t ea=c->r[1]+0x00000478u; psq_load(c,31,ea,0,0);} // 800B5868
  {uint32_t ea=c->r[1]+0x00000470u; c->f[31]=RF64(ea);} // 800B586C
  {uint32_t ea=c->r[1]+0x00000468u; psq_load(c,30,ea,0,0);} // 800B5870
  {uint32_t ea=c->r[1]+0x00000460u; c->f[30]=RF64(ea);} // 800B5874
  c->lr=0x800B587Cu; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800B5878
  c->r[0]=R32(c->r[1]+0x00000484u); // 800B587C
  c->lr=c->r[0]; // 800B5880
  c->r[1]=c->r[1]+0x00000480u; // 800B5884
  return; // 800B5888
}

// fn_800B588C
void f_800B588C(Ctx* __restrict c) {
  trace_call(0x800B588Cu);
  W32(c->r[3]+0x0000011Cu,c->r[4]); // 800B588C
  return; // 800B5890
}

// fn_800B5894
void f_800B5894(Ctx* __restrict c) {
  trace_call(0x800B5894u);
  c->r[3]=R32(c->r[3]+0x0000011Cu); // 800B5894
  return; // 800B5898
}

// fn_800B589C
void f_800B589C(Ctx* __restrict c) {
  trace_call(0x800B589Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B589C
  c->r[0]=c->lr; // 800B58A0
  W32(c->r[1]+0x00000034u,c->r[0]); // 800B58A4
  c->r[11]=c->r[1]+0x00000030u; // 800B58A8
  c->lr=0x800B58B0u; { W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800B58AC
  c->r[5]=R32(c->r[3]+0x00000000u); // 800B58B0
  c->r[30]=c->r[3]|c->r[3]; // 800B58B4
  c->r[31]=c->r[4]|c->r[4]; // 800B58B8
  c->r[0]=rotl(c->r[5],0)&0x00000001u; cr0(c,c->r[0]); // 800B58BC
  if (crb(c,2)) { goto L_800B58D4; } // 800B58C0
  c->r[4]=c->r[4]+0x00000028u; // 800B58C4
  c->lr=0x800B58CCu; f_800B5CD8(c); // 800B58C8
  c->r[3]=0u+0x00000001u; // 800B58CC
  goto L_800B5A10; // 800B58D0
L_800B58D4:;
  c->r[0]=rotl(c->r[5],0)&0x80000000u; cr0(c,c->r[0]); // 800B58D4
  if (!crb(c,2)) { goto L_800B5960; } // 800B58D8
  c->r[29]=R32(c->r[4]+0x00000018u); // 800B58DC
  c->r[0]=0u+0x00000000u; // 800B58E0
  c->r[3]=c->r[1]+0x00000018u; // 800B58E4
  W8(c->r[1]+0x00000018u,c->r[0]); // 800B58E8
  c->lr=0x800B58F0u; f_8004E2A0(c); // 800B58EC
  {uint32_t ea=c->r[2]+0xFFFF9D68u; c->f[1]=c->ps1[1]=RF32(ea);} // 800B58F0
  c->r[4]=rotl(c->r[29],0)&0x000000FFu; // 800B58F4
  c->r[6]=c->r[31]+0x00000028u; // 800B58F8
  c->r[5]=0u+0x00000001u; // 800B58FC
  c->lr=0x800B5904u; f_800ADAE4(c); // 800B5900
  c->r[3]=R32(c->r[30]+0x00000110u); // 800B5904
  c->lr=0x800B590Cu; f_800B0548(c); // 800B5908
  c->r[0]=R32(c->r[3]+0x00000048u); // 800B590C
  cmps(c,0,(int32_t)c->r[0],0); // 800B5910
  if (crb(c,2)) { goto L_800B5924; } // 800B5914
  cmps(c,0,(int32_t)c->r[0],1); // 800B5918
  if (crb(c,2)) { goto L_800B592C; } // 800B591C
  goto L_800B5934; // 800B5920
L_800B5924:;
  c->r[28]=0u+0x00000000u; // 800B5924
  goto L_800B5938; // 800B5928
L_800B592C:;
  c->r[28]=0u+0x0000001Bu; // 800B592C
  goto L_800B5938; // 800B5930
L_800B5934:;
  c->r[28]=0u+0x0000001Cu; // 800B5934
L_800B5938:;
  c->r[29]=R32(c->r[31]+0x00000018u); // 800B5938
  c->r[0]=0u+0x00000000u; // 800B593C
  c->r[3]=c->r[1]+0x00000014u; // 800B5940
  W8(c->r[1]+0x00000014u,c->r[0]); // 800B5944
  c->lr=0x800B594Cu; f_8004E2A0(c); // 800B5948
  c->r[5]=c->r[28]|c->r[28]; // 800B594C
  c->r[4]=rotl(c->r[29],0)&0x000000FFu; // 800B5950
  c->r[6]=c->r[31]+0x00000028u; // 800B5954
  c->r[7]=c->r[31]+0x00000034u; // 800B5958
  c->lr=0x800B5960u; f_800ADC44(c); // 800B595C
L_800B5960:;
  c->r[3]=R32(c->r[30]+0x00000000u); // 800B5960
  c->r[0]=rotl(c->r[3],0)&0x00000010u; cr0(c,c->r[0]); // 800B5964
  if (crb(c,2)) { goto L_800B59E0; } // 800B5968
  c->r[0]=R32(c->r[31]+0x00000018u); // 800B596C
  c->r[0]=rotl(c->r[0],0)&0x000000FFu; // 800B5970
  cmpu(c,0,c->r[0],0x00000005u); // 800B5974
  if (!crb(c,2)) { goto L_800B5998; } // 800B5978
  c->r[0]=c->r[3]|0x80000000u; // 800B597C
  W32(c->r[30]+0x00000000u,c->r[0]); // 800B5980
  {uint32_t ea=c->r[2]+0xFFFF9D90u; c->f[1]=c->ps1[1]=RF32(ea);} // 800B5984
  c->r[3]=c->r[30]+0x000000E4u; // 800B5988
  c->lr=0x800B5990u; f_800774A8(c); // 800B598C
  c->r[3]=0u+0x00000000u; // 800B5990
  goto L_800B5A10; // 800B5994
L_800B5998:;
  c->r[29]=0u+0x00000000u; // 800B5998
  W8(c->r[1]+0x0000000Cu,c->r[29]); // 800B599C
  c->r[3]=c->r[1]+0x0000000Cu; // 800B59A0
  c->lr=0x800B59A8u; f_80046EFC(c); // 800B59A4
  c->r[3]=R32(c->r[3]+0x000000BCu); // 800B59A8
  c->r[28]=c->r[1]+0x00000010u; // 800B59AC
  W8(c->r[1]+0x00000010u,c->r[29]); // 800B59B0
  c->r[4]=R32(c->r[30]+0x0000011Cu); // 800B59B4
  c->lr=0x800B59BCu; f_800B7320(c); // 800B59B8
  c->r[29]=c->r[3]|c->r[3]; // 800B59BC
  c->r[3]=c->r[28]|c->r[28]; // 800B59C0
  c->lr=0x800B59C8u; f_8004E2D0(c); // 800B59C4
  c->r[4]=R32(c->r[30]+0x00000110u); // 800B59C8
  c->r[8]=c->r[29]|c->r[29]; // 800B59CC
  c->r[5]=c->r[31]+0x00000028u; // 800B59D0
  c->r[6]=c->r[30]+0x000000E4u; // 800B59D4
  c->r[7]=0u+0x00000000u; // 800B59D8
  c->lr=0x800B59E0u; f_800C6D34(c); // 800B59DC
L_800B59E0:;
  c->r[28]=R32(c->r[31]+0x00000018u); // 800B59E0
  c->r[0]=rotl(c->r[28],24)&0x00000002u; cr0(c,c->r[0]); // 800B59E4
  if (!crb(c,2)) { goto L_800B5A0C; } // 800B59E8
  c->r[0]=0u+0x00000000u; // 800B59EC
  W8(c->r[1]+0x00000008u,c->r[0]); // 800B59F0
  c->r[3]=c->r[1]+0x00000008u; // 800B59F4
  c->lr=0x800B59FCu; f_8004E2A0(c); // 800B59F8
  c->r[4]=rotl(c->r[28],0)&0x000000FFu; // 800B59FC
  c->r[5]=c->r[31]+0x00000028u; // 800B5A00
  c->r[6]=c->r[31]+0x00000034u; // 800B5A04
  c->lr=0x800B5A0Cu; f_800ADD64(c); // 800B5A08
L_800B5A0C:;
  c->r[3]=0u+0x00000001u; // 800B5A0C
L_800B5A10:;
  c->r[11]=c->r[1]+0x00000030u; // 800B5A10
  c->lr=0x800B5A18u; { c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800B5A14
  c->r[0]=R32(c->r[1]+0x00000034u); // 800B5A18
  c->lr=c->r[0]; // 800B5A1C
  c->r[1]=c->r[1]+0x00000030u; // 800B5A20
  return; // 800B5A24
}

// fn_800B5A28
void f_800B5A28(Ctx* __restrict c) {
  trace_call(0x800B5A28u);
  {uint32_t ea=c->r[1]+0xFFFFFF40u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B5A28
  c->r[0]=c->lr; // 800B5A2C
  W32(c->r[1]+0x000000C4u,c->r[0]); // 800B5A30
  c->r[11]=c->r[1]+0x000000C0u; // 800B5A34
  c->lr=0x800B5A3Cu; { W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800B5A38
  c->r[6]=R32(c->r[3]+0x00000000u); // 800B5A3C
  c->r[28]=c->r[3]|c->r[3]; // 800B5A40
  c->r[29]=c->r[4]|c->r[4]; // 800B5A44
  c->r[30]=c->r[5]|c->r[5]; // 800B5A48
  c->r[0]=rotl(c->r[6],0)&0x00000001u; cr0(c,c->r[0]); // 800B5A4C
  if (crb(c,2)) { goto L_800B5AF8; } // 800B5A50
  cmps(c,0,(int32_t)c->r[5],1); // 800B5A54
  if (!crb(c,2)) { goto L_800B5AF8; } // 800B5A58
  c->r[5]=R32(c->r[4]+0x00000044u); // 800B5A5C
  c->r[3]=c->r[1]+0x00000048u; // 800B5A60
  c->r[0]=R32(c->r[4]+0x00000048u); // 800B5A64
  W32(c->r[1]+0x0000004Cu,c->r[0]); // 800B5A68
  W32(c->r[1]+0x00000048u,c->r[5]); // 800B5A6C
  c->lr=0x800B5A74u; f_80046E94(c); // 800B5A70
  c->r[3]=R32(c->r[3]+0x00000004u); // 800B5A74
  c->r[4]=c->r[29]+0x00000004u; // 800B5A78
  c->r[5]=R32(c->r[28]+0x00000110u); // 800B5A7C
  c->r[12]=R32(c->r[3]+0x0000001Cu); // 800B5A80
  c->r[12]=R32(c->r[12]+0x00000040u); // 800B5A84
  c->ctr=c->r[12]; // 800B5A88
  if (true) { c->lr=0x800B5A90u; dispatch(c,c->ctr); } // 800B5A8C
  cmps(c,0,(int32_t)c->r[3],0); // 800B5A90
  if (crb(c,2)) { goto L_800B5AAC; } // 800B5A94
  cmps(c,0,(int32_t)c->r[3],1); // 800B5A98
  if (crb(c,2)) { goto L_800B5AC0; } // 800B5A9C
  cmps(c,0,(int32_t)c->r[3],2); // 800B5AA0
  if (crb(c,2)) { goto L_800B5ADC; } // 800B5AA4
  goto L_800B5CB8; // 800B5AA8
L_800B5AAC:;
  c->r[3]=c->r[28]|c->r[28]; // 800B5AAC
  c->r[4]=c->r[29]+0x0000004Cu; // 800B5AB0
  c->lr=0x800B5AB8u; f_800B5CD8(c); // 800B5AB4
  c->r[3]=0u+0x00000001u; // 800B5AB8
  goto L_800B5CB8; // 800B5ABC
L_800B5AC0:;
  c->r[0]=0u+0x00000000u; // 800B5AC0
  W8(c->r[1]+0x00000018u,c->r[0]); // 800B5AC4
  c->r[3]=c->r[1]+0x00000018u; // 800B5AC8
  c->lr=0x800B5AD0u; f_80046EFC(c); // 800B5ACC
  c->lr=0x800B5AD4u; f_800B2824(c); // 800B5AD0
  c->r[3]=0u+0x00000001u; // 800B5AD4
  goto L_800B5CB8; // 800B5AD8
L_800B5ADC:;
  c->r[0]=0u+0x00000000u; // 800B5ADC
  W8(c->r[1]+0x00000014u,c->r[0]); // 800B5AE0
  c->r[3]=c->r[1]+0x00000014u; // 800B5AE4
  c->lr=0x800B5AECu; f_80046EFC(c); // 800B5AE8
  c->lr=0x800B5AF0u; f_800B2824(c); // 800B5AEC
  c->r[3]=0u+0x00000000u; // 800B5AF0
  goto L_800B5CB8; // 800B5AF4
L_800B5AF8:;
  c->r[0]=rotl(c->r[6],0)&0x00000010u; cr0(c,c->r[0]); // 800B5AF8
  if (crb(c,2)) { goto L_800B5BD4; } // 800B5AFC
  c->r[12]=R32(c->r[29]+0x00000000u); // 800B5B00
  c->r[3]=c->r[29]|c->r[29]; // 800B5B04
  c->r[12]=R32(c->r[12]+0x00000008u); // 800B5B08
  c->ctr=c->r[12]; // 800B5B0C
  if (true) { c->lr=0x800B5B14u; dispatch(c,c->ctr); } // 800B5B10
  cmps(c,0,(int32_t)c->r[3],0); // 800B5B14
  if (crb(c,2)) { goto L_800B5BD4; } // 800B5B18
  c->r[4]=R32(c->r[29]+0x00000044u); // 800B5B1C
  c->r[3]=c->r[1]+0x00000040u; // 800B5B20
  c->r[0]=R32(c->r[29]+0x00000048u); // 800B5B24
  W32(c->r[1]+0x00000044u,c->r[0]); // 800B5B28
  W32(c->r[1]+0x00000040u,c->r[4]); // 800B5B2C
  c->lr=0x800B5B34u; f_80046E94(c); // 800B5B30
  c->r[12]=R32(c->r[29]+0x00000000u); // 800B5B34
  c->r[24]=R32(c->r[3]+0x00000004u); // 800B5B38
  c->r[3]=c->r[29]|c->r[29]; // 800B5B3C
  c->r[12]=R32(c->r[12]+0x00000008u); // 800B5B40
  c->ctr=c->r[12]; // 800B5B44
  if (true) { c->lr=0x800B5B4Cu; dispatch(c,c->ctr); } // 800B5B48
  c->r[5]=c->r[3]|c->r[3]; // 800B5B4C
  c->r[4]=c->r[24]|c->r[24]; // 800B5B50
  c->r[3]=c->r[1]+0x00000068u; // 800B5B54
  c->r[6]=0u+0x00000000u; // 800B5B58
  c->lr=0x800B5B60u; f_80317268(c); // 800B5B5C
  {uint32_t ea=c->r[1]+0x00000070u; c->f[1]=c->ps1[1]=RF32(ea);} // 800B5B60
  c->r[3]=c->r[1]+0x00000050u; // 800B5B64
  {uint32_t ea=c->r[1]+0x00000080u; c->f[2]=c->ps1[2]=RF32(ea);} // 800B5B68
  {uint32_t ea=c->r[1]+0x00000090u; c->f[3]=c->ps1[3]=RF32(ea);} // 800B5B6C
  c->lr=0x800B5B74u; f_8005FD70(c); // 800B5B70
  c->r[3]=c->r[1]+0x0000005Cu; // 800B5B74
  c->r[4]=c->r[1]+0x00000050u; // 800B5B78
  c->lr=0x800B5B80u; f_8005DC84(c); // 800B5B7C
  {uint32_t ea=c->r[2]+0xFFFF9D94u; c->f[1]=c->ps1[1]=RF32(ea);} // 800B5B80
  c->r[3]=c->r[1]+0x0000005Cu; // 800B5B84
  c->lr=0x800B5B8Cu; f_800774A8(c); // 800B5B88
  c->r[26]=0u+0x00000000u; // 800B5B8C
  W8(c->r[1]+0x0000000Cu,c->r[26]); // 800B5B90
  c->r[3]=c->r[1]+0x0000000Cu; // 800B5B94
  c->lr=0x800B5B9Cu; f_80046EFC(c); // 800B5B98
  c->r[3]=R32(c->r[3]+0x000000BCu); // 800B5B9C
  c->r[24]=c->r[1]+0x00000010u; // 800B5BA0
  W8(c->r[1]+0x00000010u,c->r[26]); // 800B5BA4
  c->r[4]=R32(c->r[28]+0x0000011Cu); // 800B5BA8
  c->lr=0x800B5BB0u; f_800B7320(c); // 800B5BAC
  c->r[26]=c->r[3]|c->r[3]; // 800B5BB0
  c->r[3]=c->r[24]|c->r[24]; // 800B5BB4
  c->lr=0x800B5BBCu; f_8004E2D0(c); // 800B5BB8
  c->r[4]=R32(c->r[28]+0x00000110u); // 800B5BBC
  c->r[7]=c->r[29]|c->r[29]; // 800B5BC0
  c->r[8]=c->r[26]|c->r[26]; // 800B5BC4
  c->r[5]=c->r[29]+0x0000004Cu; // 800B5BC8
  c->r[6]=c->r[1]+0x0000005Cu; // 800B5BCC
  c->lr=0x800B5BD4u; f_800C6D34(c); // 800B5BD0
L_800B5BD4:;
  c->r[31]=0u+0x00000000u; // 800B5BD4
  c->r[27]=0u+0x00000000u; // 800B5BD8
  c->r[26]=c->r[31]|c->r[31]; // 800B5BDC
  goto L_800B5CAC; // 800B5BE0
L_800B5BE4:;
  c->r[24]=R32(c->r[28]+0x00000114u); // 800B5BE4
  c->r[3]=c->r[1]+0x00000008u; // 800B5BE8
  W8(c->r[1]+0x00000008u,c->r[26]); // 800B5BEC
  c->lr=0x800B5BF4u; f_80046EFC(c); // 800B5BF0
  c->r[25]=c->r[3]|c->r[3]; // 800B5BF4
  c->r[4]=c->r[24]|c->r[24]; // 800B5BF8
  c->lr=0x800B5C00u; f_80046E74(c); // 800B5BFC
  c->r[0]=cntlz(c->r[3]); // 800B5C00
  W32(c->r[1]+0x00000024u,c->r[4]); // 800B5C04
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; cr0(c,c->r[0]); // 800B5C08
  W32(c->r[1]+0x00000020u,c->r[3]); // 800B5C0C
  if (!crb(c,2)) { goto L_800B5C4C; } // 800B5C10
  c->r[3]=c->r[25]|c->r[25]; // 800B5C14
  c->r[4]=c->r[24]|c->r[24]; // 800B5C18
  c->lr=0x800B5C20u; f_80046E74(c); // 800B5C1C
  W32(c->r[1]+0x00000028u,c->r[3]); // 800B5C20
  c->r[3]=c->r[1]+0x00000028u; // 800B5C24
  W32(c->r[1]+0x0000002Cu,c->r[4]); // 800B5C28
  c->lr=0x800B5C30u; f_80046E94(c); // 800B5C2C
  c->r[3]=R32(c->r[3]+0x00000000u); // 800B5C30
  c->r[0]=R32(c->r[1]+0x00000028u); // 800B5C34
  c->r[3]=c->r[3]-c->r[0]; // 800B5C38
  c->r[0]=addc(c,c->r[3],0xFFFFFFFFu,0); // 800B5C3C
  c->r[3]=addc(c,~c->r[0],c->r[3],c->xer_ca); // 800B5C40
  c->r[0]=addc(c,c->r[3],0xFFFFFFFFu,0); // 800B5C44
  c->r[0]=addc(c,~c->r[0],c->r[3],c->xer_ca); // 800B5C48
L_800B5C4C:;
  cmps(c,0,(int32_t)c->r[0],0); // 800B5C4C
  if (crb(c,2)) { goto L_800B5C5C; } // 800B5C50
  c->r[3]=0u+0x00000000u; // 800B5C54
  goto L_800B5C7C; // 800B5C58
L_800B5C5C:;
  c->r[3]=c->r[25]|c->r[25]; // 800B5C5C
  c->r[4]=c->r[24]|c->r[24]; // 800B5C60
  c->lr=0x800B5C68u; f_80046E74(c); // 800B5C64
  W32(c->r[1]+0x00000030u,c->r[3]); // 800B5C68
  c->r[3]=c->r[1]+0x00000030u; // 800B5C6C
  W32(c->r[1]+0x00000034u,c->r[4]); // 800B5C70
  c->lr=0x800B5C78u; f_80046E94(c); // 800B5C74
  c->r[3]=R32(c->r[3]+0x00000004u); // 800B5C78
L_800B5C7C:;
  c->r[5]=c->r[29]+c->r[27]; // 800B5C7C
  {uint32_t ea=c->r[2]+0xFFFF9D68u; c->f[1]=c->ps1[1]=RF32(ea);} // 800B5C80
  c->r[6]=R32(c->r[5]+0x00000044u); // 800B5C84
  c->r[4]=c->r[1]+0x00000038u; // 800B5C88
  c->r[0]=R32(c->r[5]+0x00000048u); // 800B5C8C
  c->r[5]=c->r[5]+0x00000004u; // 800B5C90
  W32(c->r[1]+0x0000003Cu,c->r[0]); // 800B5C94
  W32(c->r[1]+0x00000038u,c->r[6]); // 800B5C98
  c->r[6]=R32(c->r[28]+0x00000110u); // 800B5C9C
  c->lr=0x800B5CA4u; f_800AD2A0(c); // 800B5CA0
  c->r[31]=c->r[31]+0x00000001u; // 800B5CA4
  c->r[27]=c->r[27]+0x00000064u; // 800B5CA8
L_800B5CAC:;
  cmps(c,0,(int32_t)c->r[31],(int32_t)c->r[30]); // 800B5CAC
  if (crb(c,0)) { IRQCHK(c); goto L_800B5BE4; } // 800B5CB0
  c->r[3]=0u+0x00000001u; // 800B5CB4
L_800B5CB8:;
  c->r[11]=c->r[1]+0x000000C0u; // 800B5CB8
  c->lr=0x800B5CC0u; { c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800B5CBC
  c->r[0]=R32(c->r[1]+0x000000C4u); // 800B5CC0
  c->lr=c->r[0]; // 800B5CC4
  c->r[1]=c->r[1]+0x000000C0u; // 800B5CC8
  return; // 800B5CCC
}

// fn_800B5CD0
void f_800B5CD0(Ctx* __restrict c) {
  trace_call(0x800B5CD0u);
  c->r[3]=c->r[3]+0x00000064u; // 800B5CD0
  return; // 800B5CD4
}

// fn_800B5CD8
void f_800B5CD8(Ctx* __restrict c) {
  trace_call(0x800B5CD8u);
  {uint32_t ea=c->r[1]+0xFFFFFF10u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B5CD8
  c->r[0]=c->lr; // 800B5CDC
  W32(c->r[1]+0x000000F4u,c->r[0]); // 800B5CE0
  c->r[11]=c->r[1]+0x000000F0u; // 800B5CE4
  c->lr=0x800B5CECu; { W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800B5CE8
  c->r[29]=c->r[4]|c->r[4]; // 800B5CEC
  c->r[4]=R32(c->r[3]+0x00000114u); // 800B5CF0
  c->r[6]=R32(c->r[3]+0x00000110u); // 800B5CF4
  c->r[28]=c->r[3]|c->r[3]; // 800B5CF8
  c->r[5]=c->r[29]|c->r[29]; // 800B5CFC
  c->r[3]=c->r[1]+0x0000009Cu; // 800B5D00
  c->lr=0x800B5D08u; f_801B7E58(c); // 800B5D04
  c->r[12]=R32(c->r[1]+0x000000CCu); // 800B5D08
  c->r[3]=c->r[1]+0x0000009Cu; // 800B5D0C
  c->r[12]=R32(c->r[12]+0x00000008u); // 800B5D10
  c->ctr=c->r[12]; // 800B5D14
  if (true) { c->lr=0x800B5D1Cu; dispatch(c,c->ctr); } // 800B5D18
  c->r[31]=0u+0x00000000u; // 800B5D1C
  W8(c->r[1]+0x0000000Cu,c->r[31]); // 800B5D20
  c->r[3]=c->r[1]+0x0000000Cu; // 800B5D24
  c->lr=0x800B5D2Cu; f_80046EFC(c); // 800B5D28
  c->r[3]=R32(c->r[3]+0x000000BCu); // 800B5D2C
  c->r[30]=c->r[1]+0x00000010u; // 800B5D30
  W8(c->r[1]+0x00000010u,c->r[31]); // 800B5D34
  c->r[4]=R32(c->r[28]+0x0000011Cu); // 800B5D38
  c->lr=0x800B5D40u; f_800B7320(c); // 800B5D3C
  c->r[31]=c->r[3]|c->r[3]; // 800B5D40
  c->r[3]=c->r[30]|c->r[30]; // 800B5D44
  c->lr=0x800B5D4Cu; f_8004E2A0(c); // 800B5D48
  c->r[4]=c->r[29]|c->r[29]; // 800B5D4C
  c->r[5]=c->r[31]|c->r[31]; // 800B5D50
  c->lr=0x800B5D58u; f_800ADE50(c); // 800B5D54
  c->r[0]=R32(c->r[28]+0x00000000u); // 800B5D58
  c->r[0]=rotl(c->r[0],0)&0x80000000u; cr0(c,c->r[0]); // 800B5D5C
  if (crb(c,2)) { goto L_800B5D7C; } // 800B5D60
  c->r[3]=R32(c->r[28]+0x00000110u); // 800B5D64
  c->r[6]=c->r[29]|c->r[29]; // 800B5D68
  c->r[4]=0u+0x00000004u; // 800B5D6C
  c->r[5]=0u+0xFFFFFFFFu; // 800B5D70
  c->lr=0x800B5D78u; f_800B87A0(c); // 800B5D74
  goto L_800B5D90; // 800B5D78
L_800B5D7C:;
  c->r[3]=R32(c->r[28]+0x00000110u); // 800B5D7C
  c->r[6]=c->r[29]|c->r[29]; // 800B5D80
  c->r[4]=0u+0x00000003u; // 800B5D84
  c->r[5]=0u+0xFFFFFFFFu; // 800B5D88
  c->lr=0x800B5D90u; f_800B87A0(c); // 800B5D8C
L_800B5D90:;
  c->r[0]=R32(c->r[28]+0x00000000u); // 800B5D90
  c->r[0]=rotl(c->r[0],0)&0x80000000u; cr0(c,c->r[0]); // 800B5D94
  if (crb(c,2)) { goto L_800B5DBC; } // 800B5D98
  c->r[4]=R32(c->r[28]+0x00000110u); // 800B5D9C
  c->r[3]=c->r[1]+0x00000060u; // 800B5DA0
  c->r[6]=c->r[28]+0x000000FCu; // 800B5DA4
  c->r[5]=0u+0x00000001u; // 800B5DA8
  c->r[7]=0u+0x00000000u; // 800B5DAC
  c->r[8]=0u+0x00000001u; // 800B5DB0
  c->lr=0x800B5DB8u; f_800B8914(c); // 800B5DB4
  goto L_800B5DD8; // 800B5DB8
L_800B5DBC:;
  c->r[4]=R32(c->r[28]+0x00000110u); // 800B5DBC
  c->r[6]=c->r[29]|c->r[29]; // 800B5DC0
  c->r[3]=c->r[1]+0x00000024u; // 800B5DC4
  c->r[5]=0u+0x00000000u; // 800B5DC8
  c->r[7]=0u+0x00000000u; // 800B5DCC
  c->r[8]=0u+0x00000001u; // 800B5DD0
  c->lr=0x800B5DD8u; f_800B8914(c); // 800B5DD4
L_800B5DD8:;
  c->r[0]=0u+0x00000000u; // 800B5DD8
  W8(c->r[1]+0x00000008u,c->r[0]); // 800B5DDC
  c->r[3]=c->r[1]+0x00000008u; // 800B5DE0
  c->lr=0x800B5DE8u; f_80047A80(c); // 800B5DE4
  c->r[3]=R32(c->r[3]+0x00000004u); // 800B5DE8
  c->lr=0x800B5DF0u; f_804CC8D4(c); // 800B5DEC
  W32(c->r[1]+0x00000014u,c->r[3]); // 800B5DF0
  c->r[3]=c->r[1]+0x00000014u; // 800B5DF4
  c->r[4]=c->r[1]+0x00000018u; // 800B5DF8
  c->lr=0x800B5E00u; f_804C7AC0(c); // 800B5DFC
  c->r[3]=c->r[1]+0x00000018u; // 800B5E00
  c->r[5]=c->r[29]|c->r[29]; // 800B5E04
  c->r[4]=c->r[3]|c->r[3]; // 800B5E08
  c->lr=0x800B5E10u; f_800772A0(c); // 800B5E0C
  c->r[3]=c->r[1]+0x00000018u; // 800B5E10
  c->lr=0x800B5E18u; f_80061BF0(c); // 800B5E14
  cmps(c,0,(int32_t)c->r[3],0); // 800B5E18
  if (!crb(c,2)) { goto L_800B5E38; } // 800B5E1C
  c->r[3]=c->r[1]+0x00000018u; // 800B5E20
  c->lr=0x800B5E28u; f_80084FAC(c); // 800B5E24
  {uint32_t ea=c->r[2]+0xFFFF9D98u; c->f[2]=c->ps1[2]=RF32(ea);} // 800B5E28
  c->f[0]=c->ps1[0]=S(c->f[2]-c->f[1]); // 800B5E2C
  c->f[1]=c->ps1[1]=S(c->f[0]/c->f[2]); // 800B5E30
  goto L_800B5E3C; // 800B5E34
L_800B5E38:;
  {uint32_t ea=c->r[2]+0xFFFF9D68u; c->f[1]=c->ps1[1]=RF32(ea);} // 800B5E38
L_800B5E3C:;
  c->r[3]=R32(c->r[28]+0x00000110u); // 800B5E3C
  c->r[4]=0u+0x00000001u; // 800B5E40
  c->lr=0x800B5E48u; f_800B8A18(c); // 800B5E44
  c->r[3]=R32(c->r[28]+0x00000110u); // 800B5E48
  c->r[4]=0u+0x00000001u; // 800B5E4C
  c->r[5]=R32(c->r[28]+0x00000114u); // 800B5E50
  c->lr=0x800B5E58u; f_800B8B18(c); // 800B5E54
  c->r[11]=c->r[1]+0x000000F0u; // 800B5E58
  c->lr=0x800B5E60u; { c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800B5E5C
  c->r[0]=R32(c->r[1]+0x000000F4u); // 800B5E60
  c->lr=c->r[0]; // 800B5E64
  c->r[1]=c->r[1]+0x000000F0u; // 800B5E68
  return; // 800B5E6C
}

// fn_800B5E70
void f_800B5E70(Ctx* __restrict c) {
  trace_call(0x800B5E70u);
  {uint32_t ea=c->r[1]+0xFFFFFF10u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B5E70
  c->r[0]=c->lr; // 800B5E74
  W32(c->r[1]+0x000000F4u,c->r[0]); // 800B5E78
  c->r[11]=c->r[1]+0x000000C0u; // 800B5E7C
  {uint32_t ea=c->r[1]+0x000000E0u; WF64(ea,c->f[31]);} // 800B5E80
  {uint32_t ea=c->r[1]+0x000000E8u; psq_store(c,31,ea,0,0);} // 800B5E84
  {uint32_t ea=c->r[1]+0x000000D0u; WF64(ea,c->f[30]);} // 800B5E88
  {uint32_t ea=c->r[1]+0x000000D8u; psq_store(c,30,ea,0,0);} // 800B5E8C
  {uint32_t ea=c->r[1]+0x000000C0u; WF64(ea,c->f[29]);} // 800B5E90
  {uint32_t ea=c->r[1]+0x000000C8u; psq_store(c,29,ea,0,0);} // 800B5E94
  c->lr=0x800B5E9Cu; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800B5E98
  c->r[0]=R32(c->r[3]+0x00000000u); // 800B5E9C
  c->f[29]=c->f[1]; // 800B5EA0
  c->f[30]=c->f[2]; // 800B5EA4
  c->r[27]=c->r[3]|c->r[3]; // 800B5EA8
  c->r[0]=rotl(c->r[0],0)&0x80000000u; cr0(c,c->r[0]); // 800B5EAC
  c->r[31]=c->r[4]|c->r[4]; // 800B5EB0
  c->r[28]=c->r[5]|c->r[5]; // 800B5EB4
  c->r[29]=c->r[6]|c->r[6]; // 800B5EB8
  c->r[30]=c->r[7]|c->r[7]; // 800B5EBC
  if (crb(c,2)) { goto L_800B5EDC; } // 800B5EC0
  {uint32_t ea=c->r[2]+0xFFFF9D50u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B5EC4
  {uint32_t ea=c->r[3]+0x000000E4u; WF32(ea,c->f[0]);} // 800B5EC8
  {uint32_t ea=c->r[3]+0x000000E8u; WF32(ea,c->f[0]);} // 800B5ECC
  {uint32_t ea=c->r[3]+0x000000ECu; WF32(ea,c->f[0]);} // 800B5ED0
  {uint32_t ea=c->r[3]+0x00000050u; WF32(ea,c->f[0]);} // 800B5ED4
  goto L_800B6150; // 800B5ED8
L_800B5EDC:;
  {uint32_t ea=c->r[2]+0xFFFF9D50u; c->f[31]=c->ps1[31]=RF32(ea);} // 800B5EDC
  c->r[3]=c->r[3]+0x000000E4u; // 800B5EE0
  c->lr=0x800B5EE8u; f_80061BF0(c); // 800B5EE4
  cmps(c,0,(int32_t)c->r[3],0); // 800B5EE8
  if (!crb(c,2)) { goto L_800B5F38; } // 800B5EEC
  c->r[3]=c->r[27]+0x000000E4u; // 800B5EF0
  c->lr=0x800B5EF8u; f_80084FAC(c); // 800B5EF4
  {uint32_t ea=c->r[2]+0xFFFF9D9Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800B5EF8
  c->f[31]=c->f[1]; // 800B5EFC
  fcmp(c,0,c->f[1],c->f[0]); // 800B5F00
  if (!crb(c,1)) { goto L_800B5F38; } // 800B5F04
  cmps(c,0,(int32_t)c->r[31],0); // 800B5F08
  if (crb(c,2)) { goto L_800B5F38; } // 800B5F0C
  c->r[31]=R32(c->r[31]+0x00000018u); // 800B5F10
  c->r[0]=0u+0x00000000u; // 800B5F14
  c->r[3]=c->r[1]+0x00000008u; // 800B5F18
  W8(c->r[1]+0x00000008u,c->r[0]); // 800B5F1C
  c->lr=0x800B5F24u; f_8004E2A0(c); // 800B5F20
  {uint32_t ea=c->r[2]+0xFFFF9D68u; c->f[1]=c->ps1[1]=RF32(ea);} // 800B5F24
  c->r[6]=c->r[28]|c->r[28]; // 800B5F28
  c->r[4]=rotl(c->r[31],0)&0x000000FFu; // 800B5F2C
  c->r[5]=0u+0x00000002u; // 800B5F30
  c->lr=0x800B5F38u; f_800ADAE4(c); // 800B5F34
L_800B5F38:;
  c->f[1]=c->f[29]; // 800B5F38
  c->r[4]=c->r[29]|c->r[29]; // 800B5F3C
  c->r[3]=c->r[1]+0x00000054u; // 800B5F40
  c->lr=0x800B5F48u; f_8005ED34(c); // 800B5F44
  c->r[4]=c->r[28]|c->r[28]; // 800B5F48
  c->r[3]=c->r[1]+0x00000060u; // 800B5F4C
  c->r[5]=c->r[1]+0x00000054u; // 800B5F50
  c->lr=0x800B5F58u; f_80073ACC(c); // 800B5F54
  c->r[3]=c->r[30]|c->r[30]; // 800B5F58
  c->r[4]=c->r[1]+0x00000060u; // 800B5F5C
  c->lr=0x800B5F64u; f_8005DC84(c); // 800B5F60
  c->r[4]=c->r[1]+0x0000000Cu; // 800B5F64
  {uint32_t ea=c->r[27]+0x000000E4u; psq_load(c,0,ea,0,0);} // 800B5F68
  {double t0=-c->f[0], t1=-c->ps1[0]; c->f[0]=t0; c->ps1[0]=t1;} // 800B5F6C
  {uint32_t ea=c->r[4]+0x00000000u; psq_store(c,0,ea,0,0);} // 800B5F70
  {uint32_t ea=c->r[27]+0x000000ECu; psq_load(c,0,ea,1,0);} // 800B5F74
  {double t0=-c->f[0], t1=-c->ps1[0]; c->f[0]=t0; c->ps1[0]=t1;} // 800B5F78
  {uint32_t ea=c->r[4]+0x00000008u; psq_store(c,0,ea,1,0);} // 800B5F7C
  c->r[3]=c->r[1]+0x00000048u; // 800B5F80
  c->lr=0x800B5F88u; f_8005CD7C(c); // 800B5F84
  c->r[3]=c->r[1]+0x00000078u; // 800B5F88
  c->r[4]=c->r[1]+0x00000048u; // 800B5F8C
  c->lr=0x800B5F94u; f_8005DC84(c); // 800B5F90
  c->r[3]=c->r[1]+0x00000078u; // 800B5F94
  c->lr=0x800B5F9Cu; f_80061BF0(c); // 800B5F98
  cmps(c,0,(int32_t)c->r[3],0); // 800B5F9C
  if (!crb(c,2)) { goto L_800B5FB8; } // 800B5FA0
  c->r[3]=c->r[1]+0x00000078u; // 800B5FA4
  c->r[5]=0u+0x806A0000u; // 800B5FA8
  c->r[4]=c->r[3]|c->r[3]; // 800B5FAC
  c->r[5]=c->r[5]+0x00000AA8u; // 800B5FB0
  c->lr=0x800B5FB8u; f_8030E0BC(c); // 800B5FB4
L_800B5FB8:;
  c->r[4]=c->r[29]|c->r[29]; // 800B5FB8
  c->r[3]=c->r[1]+0x0000006Cu; // 800B5FBC
  c->lr=0x800B5FC4u; f_8005DC84(c); // 800B5FC0
  c->r[3]=c->r[1]+0x0000006Cu; // 800B5FC4
  c->lr=0x800B5FCCu; f_80061BF0(c); // 800B5FC8
  cmps(c,0,(int32_t)c->r[3],0); // 800B5FCC
  if (!crb(c,2)) { goto L_800B5FE8; } // 800B5FD0
  c->r[3]=c->r[1]+0x0000006Cu; // 800B5FD4
  c->r[5]=0u+0x806A0000u; // 800B5FD8
  c->r[4]=c->r[3]|c->r[3]; // 800B5FDC
  c->r[5]=c->r[5]+0x00000AA8u; // 800B5FE0
  c->lr=0x800B5FE8u; f_8030E0BC(c); // 800B5FE4
L_800B5FE8:;
  c->r[3]=c->r[1]+0x00000078u; // 800B5FE8
  c->r[4]=c->r[1]+0x0000006Cu; // 800B5FEC
  c->lr=0x800B5FF4u; f_800B3F44(c); // 800B5FF0
  {uint32_t ea=c->r[2]+0xFFFF9D58u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B5FF4
  c->r[3]=c->r[1]+0x00000018u; // 800B5FF8
  c->r[4]=c->r[1]+0x0000006Cu; // 800B5FFC
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[1]); // 800B6000
  c->lr=0x800B6008u; f_8005ED34(c); // 800B6004
  c->r[3]=c->r[1]+0x00000024u; // 800B6008
  c->r[4]=c->r[1]+0x00000018u; // 800B600C
  c->r[5]=c->r[1]+0x00000078u; // 800B6010
  c->lr=0x800B6018u; f_800772A0(c); // 800B6014
  c->f[1]=c->f[31]; // 800B6018
  c->r[3]=c->r[1]+0x00000030u; // 800B601C
  c->r[4]=c->r[1]+0x00000024u; // 800B6020
  c->lr=0x800B6028u; f_8005ED34(c); // 800B6024
  c->f[1]=c->f[30]; // 800B6028
  c->r[3]=c->r[1]+0x0000003Cu; // 800B602C
  c->r[4]=c->r[1]+0x00000030u; // 800B6030
  c->lr=0x800B6038u; f_8005ED34(c); // 800B6034
  c->r[3]=c->r[27]+0x000000E4u; // 800B6038
  c->r[4]=c->r[1]+0x0000003Cu; // 800B603C
  c->lr=0x800B6044u; f_8005DC84(c); // 800B6040
  {uint32_t ea=c->r[2]+0xFFFF9D9Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800B6044
  fcmp(c,0,c->f[31],c->f[0]); // 800B6048
  if (!crb(c,1)) { goto L_800B6148; } // 800B604C
  c->lr=0x800B6054u; f_803B220C(c); // 800B6050
  c->r[0]=c->r[3]^0x80000000u; // 800B6054
  c->r[31]=0u+0x43300000u; // 800B6058
  W32(c->r[1]+0x0000008Cu,c->r[0]); // 800B605C
  {uint32_t ea=c->r[2]+0xFFFF9D70u; c->f[3]=RF64(ea);} // 800B6060
  W32(c->r[1]+0x00000088u,c->r[31]); // 800B6064
  {uint32_t ea=c->r[2]+0xFFFF9D64u; c->f[1]=c->ps1[1]=RF32(ea);} // 800B6068
  {uint32_t ea=c->r[1]+0x00000088u; c->f[2]=RF64(ea);} // 800B606C
  {uint32_t ea=c->r[2]+0xFFFF9D68u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B6070
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[3]); // 800B6074
  c->f[0]=c->ps1[0]=S(std::fma(c->f[1],c->f[2],-c->f[0])); // 800B6078
  {uint32_t ea=c->r[27]+0x00000044u; WF32(ea,c->f[0]);} // 800B607C
  c->lr=0x800B6084u; f_803B220C(c); // 800B6080
  c->r[0]=c->r[3]^0x80000000u; // 800B6084
  W32(c->r[1]+0x00000094u,c->r[0]); // 800B6088
  {uint32_t ea=c->r[2]+0xFFFF9D70u; c->f[3]=RF64(ea);} // 800B608C
  W32(c->r[1]+0x00000090u,c->r[31]); // 800B6090
  {uint32_t ea=c->r[2]+0xFFFF9D64u; c->f[1]=c->ps1[1]=RF32(ea);} // 800B6094
  {uint32_t ea=c->r[1]+0x00000090u; c->f[2]=RF64(ea);} // 800B6098
  {uint32_t ea=c->r[2]+0xFFFF9D68u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B609C
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[3]); // 800B60A0
  c->f[0]=c->ps1[0]=S(std::fma(c->f[1],c->f[2],-c->f[0])); // 800B60A4
  {uint32_t ea=c->r[27]+0x00000048u; WF32(ea,c->f[0]);} // 800B60A8
  c->lr=0x800B60B0u; f_803B220C(c); // 800B60AC
  c->r[0]=c->r[3]^0x80000000u; // 800B60B0
  W32(c->r[1]+0x0000009Cu,c->r[0]); // 800B60B4
  {uint32_t ea=c->r[2]+0xFFFF9D70u; c->f[3]=RF64(ea);} // 800B60B8
  c->r[3]=c->r[27]+0x00000044u; // 800B60BC
  W32(c->r[1]+0x00000098u,c->r[31]); // 800B60C0
  {uint32_t ea=c->r[2]+0xFFFF9D64u; c->f[1]=c->ps1[1]=RF32(ea);} // 800B60C4
  {uint32_t ea=c->r[1]+0x00000098u; c->f[2]=RF64(ea);} // 800B60C8
  {uint32_t ea=c->r[2]+0xFFFF9D68u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B60CC
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[3]); // 800B60D0
  c->f[0]=c->ps1[0]=S(std::fma(c->f[1],c->f[2],-c->f[0])); // 800B60D4
  {uint32_t ea=c->r[27]+0x0000004Cu; WF32(ea,c->f[0]);} // 800B60D8
  c->lr=0x800B60E0u; f_80061BF0(c); // 800B60DC
  cmps(c,0,(int32_t)c->r[3],0); // 800B60E0
  if (!crb(c,2)) { goto L_800B6100; } // 800B60E4
  c->r[3]=c->r[27]+0x00000044u; // 800B60E8
  c->r[5]=0u+0x806A0000u; // 800B60EC
  c->r[4]=c->r[3]|c->r[3]; // 800B60F0
  c->r[5]=c->r[5]+0x00000AA8u; // 800B60F4
  c->lr=0x800B60FCu; f_8030E0BC(c); // 800B60F8
  goto L_800B6114; // 800B60FC
L_800B6100:;
  {uint32_t ea=c->r[2]+0xFFFF9D50u; c->f[1]=c->ps1[1]=RF32(ea);} // 800B6100
  {uint32_t ea=c->r[2]+0xFFFF9D68u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B6104
  {uint32_t ea=c->r[27]+0x00000044u; WF32(ea,c->f[1]);} // 800B6108
  {uint32_t ea=c->r[27]+0x00000048u; WF32(ea,c->f[1]);} // 800B610C
  {uint32_t ea=c->r[27]+0x0000004Cu; WF32(ea,c->f[0]);} // 800B6110
L_800B6114:;
  c->r[3]=c->r[27]+0x000000E4u; // 800B6114
  c->lr=0x800B611Cu; f_80061BF0(c); // 800B6118
  cmps(c,0,(int32_t)c->r[3],0); // 800B611C
  if (!crb(c,2)) { goto L_800B613C; } // 800B6120
  c->r[3]=c->r[27]+0x000000E4u; // 800B6124
  c->lr=0x800B612Cu; f_80084FAC(c); // 800B6128
  {uint32_t ea=c->r[2]+0xFFFF9DA0u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B612C
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[1]); // 800B6130
  {uint32_t ea=c->r[27]+0x00000050u; WF32(ea,c->f[0]);} // 800B6134
  goto L_800B6150; // 800B6138
L_800B613C:;
  {uint32_t ea=c->r[2]+0xFFFF9D50u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B613C
  {uint32_t ea=c->r[27]+0x00000050u; WF32(ea,c->f[0]);} // 800B6140
  goto L_800B6150; // 800B6144
L_800B6148:;
  {uint32_t ea=c->r[2]+0xFFFF9D50u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B6148
  {uint32_t ea=c->r[27]+0x00000050u; WF32(ea,c->f[0]);} // 800B614C
L_800B6150:;
  c->r[11]=c->r[1]+0x000000C0u; // 800B6150
  {uint32_t ea=c->r[1]+0x000000E8u; psq_load(c,31,ea,0,0);} // 800B6154
  {uint32_t ea=c->r[1]+0x000000E0u; c->f[31]=RF64(ea);} // 800B6158
  {uint32_t ea=c->r[1]+0x000000D8u; psq_load(c,30,ea,0,0);} // 800B615C
  {uint32_t ea=c->r[1]+0x000000D0u; c->f[30]=RF64(ea);} // 800B6160
  {uint32_t ea=c->r[1]+0x000000C8u; psq_load(c,29,ea,0,0);} // 800B6164
  {uint32_t ea=c->r[1]+0x000000C0u; c->f[29]=RF64(ea);} // 800B6168
  c->lr=0x800B6170u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800B616C
  c->r[0]=R32(c->r[1]+0x000000F4u); // 800B6170
  c->lr=c->r[0]; // 800B6174
  c->r[1]=c->r[1]+0x000000F0u; // 800B6178
  return; // 800B617C
}

// fn_800B6180
void f_800B6180(Ctx* __restrict c) {
  trace_call(0x800B6180u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B6180
  c->r[0]=c->lr; // 800B6184
  W32(c->r[1]+0x00000044u,c->r[0]); // 800B6188
  c->r[11]=c->r[1]+0x00000040u; // 800B618C
  c->lr=0x800B6194u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800B6190
  c->r[0]=R32(c->r[3]+0x00000000u); // 800B6194
  c->r[27]=c->r[3]|c->r[3]; // 800B6198
  c->r[28]=c->r[4]|c->r[4]; // 800B619C
  c->r[29]=c->r[5]|c->r[5]; // 800B61A0
  c->r[0]=rotl(c->r[0],0)&0x80000000u; cr0(c,c->r[0]); // 800B61A4
  c->r[30]=c->r[6]|c->r[6]; // 800B61A8
  if (!crb(c,2)) { goto L_800B62B8; } // 800B61AC
  c->r[0]=0u+0x00000000u; // 800B61B0
  W8(c->r[1]+0x0000000Cu,c->r[0]); // 800B61B4
  c->r[3]=c->r[1]+0x0000000Cu; // 800B61B8
  c->lr=0x800B61C0u; f_8004E2A0(c); // 800B61BC
  {uint32_t ea=c->r[2]+0xFFFF9D68u; c->f[1]=c->ps1[1]=RF32(ea);} // 800B61C0
  c->r[6]=c->r[28]|c->r[28]; // 800B61C4
  c->r[4]=0u+0x00000005u; // 800B61C8
  c->r[5]=0u+0x00000001u; // 800B61CC
  c->lr=0x800B61D4u; f_800ADAE4(c); // 800B61D0
  c->r[3]=R32(c->r[27]+0x00000110u); // 800B61D4
  c->lr=0x800B61DCu; f_800B0548(c); // 800B61D8
  c->r[0]=R32(c->r[3]+0x00000048u); // 800B61DC
  cmps(c,0,(int32_t)c->r[0],0); // 800B61E0
  if (crb(c,2)) { goto L_800B61F4; } // 800B61E4
  cmps(c,0,(int32_t)c->r[0],1); // 800B61E8
  if (crb(c,2)) { goto L_800B61FC; } // 800B61EC
  goto L_800B6204; // 800B61F0
L_800B61F4:;
  c->r[31]=0u+0x00000000u; // 800B61F4
  goto L_800B6208; // 800B61F8
L_800B61FC:;
  c->r[31]=0u+0x0000001Bu; // 800B61FC
  goto L_800B6208; // 800B6200
L_800B6204:;
  c->r[31]=0u+0x0000001Cu; // 800B6204
L_800B6208:;
  c->r[0]=0u+0x00000000u; // 800B6208
  W8(c->r[1]+0x00000008u,c->r[0]); // 800B620C
  c->r[3]=c->r[1]+0x00000008u; // 800B6210
  c->lr=0x800B6218u; f_8004E2A0(c); // 800B6214
  c->r[5]=c->r[31]|c->r[31]; // 800B6218
  c->r[6]=c->r[28]|c->r[28]; // 800B621C
  c->r[7]=c->r[29]|c->r[29]; // 800B6220
  c->r[4]=0u+0x00000005u; // 800B6224
  c->lr=0x800B622Cu; f_800ADC44(c); // 800B6228
  {uint32_t ea=c->r[2]+0xFFFF9D50u; c->f[1]=c->ps1[1]=RF32(ea);} // 800B622C
  c->r[3]=c->r[1]+0x00000010u; // 800B6230
  {uint32_t ea=c->r[2]+0xFFFF9D68u; c->f[2]=c->ps1[2]=RF32(ea);} // 800B6234
  c->f[3]=c->f[1]; // 800B6238
  c->lr=0x800B6240u; f_8005FD70(c); // 800B623C
  c->r[4]=c->r[3]|c->r[3]; // 800B6240
  c->r[3]=c->r[29]|c->r[29]; // 800B6244
  c->lr=0x800B624Cu; f_800B3F44(c); // 800B6248
  {uint32_t ea=c->r[2]+0xFFFF9DA4u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B624C
  fcmp(c,0,c->f[1],c->f[0]); // 800B6250
  if (crb(c,0)) { goto L_800B62B8; } // 800B6254
  c->r[3]=c->r[30]|c->r[30]; // 800B6258
  c->r[4]=c->r[28]|c->r[28]; // 800B625C
  c->lr=0x800B6264u; f_8005DC84(c); // 800B6260
  {uint32_t ea=c->r[30]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 800B6264
  c->r[4]=c->r[28]|c->r[28]; // 800B6268
  {uint32_t ea=c->r[2]+0xFFFF9D8Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800B626C
  c->r[3]=c->r[27]+0x000000FCu; // 800B6270
  {uint32_t ea=c->r[2]+0xFFFF9D50u; c->f[1]=c->ps1[1]=RF32(ea);} // 800B6274
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[0]); // 800B6278
  {uint32_t ea=c->r[2]+0xFFFF9DA8u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B627C
  {uint32_t ea=c->r[30]+0x00000004u; WF32(ea,c->f[2]);} // 800B6280
  {uint32_t ea=c->r[27]+0x000000E4u; WF32(ea,c->f[1]);} // 800B6284
  {uint32_t ea=c->r[27]+0x000000E8u; WF32(ea,c->f[0]);} // 800B6288
  {uint32_t ea=c->r[27]+0x000000ECu; WF32(ea,c->f[1]);} // 800B628C
  {uint32_t ea=c->r[27]+0x000000F0u; WF32(ea,c->f[1]);} // 800B6290
  {uint32_t ea=c->r[27]+0x000000F4u; WF32(ea,c->f[1]);} // 800B6294
  {uint32_t ea=c->r[27]+0x000000F8u; WF32(ea,c->f[1]);} // 800B6298
  c->lr=0x800B62A0u; f_8005DC84(c); // 800B629C
  c->r[0]=R32(c->r[27]+0x00000000u); // 800B62A0
  {uint32_t ea=c->r[2]+0xFFFF9D58u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B62A4
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFDu; // 800B62A8
  {uint32_t ea=c->r[27]+0x00000050u; WF32(ea,c->f[0]);} // 800B62AC
  c->r[0]=c->r[0]|0x80000000u; // 800B62B0
  W32(c->r[27]+0x00000000u,c->r[0]); // 800B62B4
L_800B62B8:;
  c->r[11]=c->r[1]+0x00000040u; // 800B62B8
  c->lr=0x800B62C0u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800B62BC
  c->r[0]=R32(c->r[1]+0x00000044u); // 800B62C0
  c->lr=c->r[0]; // 800B62C4
  c->r[1]=c->r[1]+0x00000040u; // 800B62C8
  return; // 800B62CC
}

// fn_800B62D0
void f_800B62D0(Ctx* __restrict c) {
  trace_call(0x800B62D0u);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B62D0
  c->r[0]=c->lr; // 800B62D4
  cmps(c,0,(int32_t)c->r[4],0); // 800B62D8
  W32(c->r[1]+0x00000054u,c->r[0]); // 800B62DC
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[31]);} // 800B62E0
  {uint32_t ea=c->r[1]+0x00000048u; psq_store(c,31,ea,0,0);} // 800B62E4
  W32(c->r[1]+0x0000003Cu,c->r[31]); // 800B62E8
  c->r[31]=c->r[4]|c->r[4]; // 800B62EC
  W32(c->r[1]+0x00000038u,c->r[30]); // 800B62F0
  c->r[30]=c->r[3]|c->r[3]; // 800B62F4
  if (crb(c,2)) { goto L_800B64A8; } // 800B62F8
  c->r[0]=R32(c->r[3]+0x00000000u); // 800B62FC
  c->r[0]=rotl(c->r[0],0)&0x00000004u; cr0(c,c->r[0]); // 800B6300
  if (crb(c,2)) { goto L_800B6354; } // 800B6304
  {uint32_t ea=c->r[3]+0x00000014u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B6308
  {uint32_t ea=c->r[4]+0x00000000u; WF32(ea,c->f[0]);} // 800B630C
  {uint32_t ea=c->r[3]+0x00000024u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B6310
  {uint32_t ea=c->r[4]+0x00000010u; WF32(ea,c->f[0]);} // 800B6314
  {uint32_t ea=c->r[3]+0x00000034u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B6318
  {uint32_t ea=c->r[4]+0x00000020u; WF32(ea,c->f[0]);} // 800B631C
  {uint32_t ea=c->r[3]+0x00000018u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B6320
  {uint32_t ea=c->r[4]+0x00000004u; WF32(ea,c->f[0]);} // 800B6324
  {uint32_t ea=c->r[3]+0x00000028u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B6328
  {uint32_t ea=c->r[4]+0x00000014u; WF32(ea,c->f[0]);} // 800B632C
  {uint32_t ea=c->r[3]+0x00000038u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B6330
  {uint32_t ea=c->r[4]+0x00000024u; WF32(ea,c->f[0]);} // 800B6334
  {uint32_t ea=c->r[3]+0x0000001Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800B6338
  {uint32_t ea=c->r[4]+0x00000008u; WF32(ea,c->f[0]);} // 800B633C
  {uint32_t ea=c->r[3]+0x0000002Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800B6340
  {uint32_t ea=c->r[4]+0x00000018u; WF32(ea,c->f[0]);} // 800B6344
  {uint32_t ea=c->r[3]+0x0000003Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800B6348
  {uint32_t ea=c->r[4]+0x00000028u; WF32(ea,c->f[0]);} // 800B634C
  goto L_800B6478; // 800B6350
L_800B6354:;
  c->r[3]=c->r[31]|c->r[31]; // 800B6354
  c->lr=0x800B635Cu; f_80382F00(c); // 800B6358
  {uint32_t ea=c->r[31]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B635C
  c->r[3]=c->r[30]+0x000000E4u; // 800B6360
  {uint32_t ea=c->r[1]+0x00000020u; WF32(ea,c->f[0]);} // 800B6364
  {uint32_t ea=c->r[31]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B6368
  {uint32_t ea=c->r[1]+0x00000024u; WF32(ea,c->f[0]);} // 800B636C
  {uint32_t ea=c->r[31]+0x00000020u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B6370
  {uint32_t ea=c->r[1]+0x00000028u; WF32(ea,c->f[0]);} // 800B6374
  {uint32_t ea=c->r[31]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B6378
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[0]);} // 800B637C
  {uint32_t ea=c->r[31]+0x00000018u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B6380
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[0]);} // 800B6384
  {uint32_t ea=c->r[31]+0x00000028u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B6388
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[0]);} // 800B638C
  c->lr=0x800B6394u; f_80061BF0(c); // 800B6390
  cmps(c,0,(int32_t)c->r[3],0); // 800B6394
  if (!crb(c,2)) { goto L_800B63AC; } // 800B6398
  c->r[3]=c->r[30]+0x000000E4u; // 800B639C
  c->r[4]=c->r[1]+0x00000014u; // 800B63A0
  c->lr=0x800B63A8u; f_80383D38(c); // 800B63A4
  goto L_800B63C0; // 800B63A8
L_800B63AC:;
  {uint32_t ea=c->r[2]+0xFFFF9D50u; c->f[1]=c->ps1[1]=RF32(ea);} // 800B63AC
  c->r[3]=c->r[1]+0x00000014u; // 800B63B0
  {uint32_t ea=c->r[2]+0xFFFF9D68u; c->f[2]=c->ps1[2]=RF32(ea);} // 800B63B4
  c->f[3]=c->f[1]; // 800B63B8
  c->lr=0x800B63C0u; f_8005A6D0(c); // 800B63BC
L_800B63C0:;
  c->r[3]=c->r[1]+0x00000020u; // 800B63C0
  c->r[4]=c->r[1]+0x00000014u; // 800B63C4
  c->lr=0x800B63CCu; f_800B3C8C(c); // 800B63C8
  c->lr=0x800B63D0u; f_800B3C84(c); // 800B63CC
  c->f[31]=c->f[1]; // 800B63D0
  c->r[3]=c->r[1]+0x00000008u; // 800B63D4
  c->r[4]=c->r[1]+0x00000014u; // 800B63D8
  c->lr=0x800B63E0u; f_800B3C8C(c); // 800B63DC
  c->lr=0x800B63E4u; f_800B3C84(c); // 800B63E0
  fcmp(c,0,c->f[31],c->f[1]); // 800B63E4
  if (!crb(c,0)) { goto L_800B6410; } // 800B63E8
  c->r[3]=c->r[1]+0x00000020u; // 800B63EC
  c->r[4]=c->r[1]+0x00000014u; // 800B63F0
  c->r[5]=c->r[1]+0x00000008u; // 800B63F4
  c->lr=0x800B63FCu; f_80383DE0(c); // 800B63F8
  c->r[3]=c->r[1]+0x00000014u; // 800B63FC
  c->r[4]=c->r[1]+0x00000008u; // 800B6400
  c->r[5]=c->r[1]+0x00000020u; // 800B6404
  c->lr=0x800B640Cu; f_80383DE0(c); // 800B6408
  goto L_800B6430; // 800B640C
L_800B6410:;
  c->r[3]=c->r[1]+0x00000014u; // 800B6410
  c->r[4]=c->r[1]+0x00000008u; // 800B6414
  c->r[5]=c->r[1]+0x00000020u; // 800B6418
  c->lr=0x800B6420u; f_80383DE0(c); // 800B641C
  c->r[3]=c->r[1]+0x00000020u; // 800B6420
  c->r[4]=c->r[1]+0x00000014u; // 800B6424
  c->r[5]=c->r[1]+0x00000008u; // 800B6428
  c->lr=0x800B6430u; f_80383DE0(c); // 800B642C
L_800B6430:;
  {uint32_t ea=c->r[1]+0x00000020u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B6430
  {uint32_t ea=c->r[31]+0x00000000u; WF32(ea,c->f[0]);} // 800B6434
  {uint32_t ea=c->r[1]+0x00000024u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B6438
  {uint32_t ea=c->r[31]+0x00000010u; WF32(ea,c->f[0]);} // 800B643C
  {uint32_t ea=c->r[1]+0x00000028u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B6440
  {uint32_t ea=c->r[31]+0x00000020u; WF32(ea,c->f[0]);} // 800B6444
  {uint32_t ea=c->r[1]+0x00000014u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B6448
  {uint32_t ea=c->r[31]+0x00000004u; WF32(ea,c->f[0]);} // 800B644C
  {uint32_t ea=c->r[1]+0x00000018u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B6450
  {uint32_t ea=c->r[31]+0x00000014u; WF32(ea,c->f[0]);} // 800B6454
  {uint32_t ea=c->r[1]+0x0000001Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800B6458
  {uint32_t ea=c->r[31]+0x00000024u; WF32(ea,c->f[0]);} // 800B645C
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B6460
  {uint32_t ea=c->r[31]+0x00000008u; WF32(ea,c->f[0]);} // 800B6464
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800B6468
  {uint32_t ea=c->r[31]+0x00000018u; WF32(ea,c->f[0]);} // 800B646C
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B6470
  {uint32_t ea=c->r[31]+0x00000028u; WF32(ea,c->f[0]);} // 800B6474
L_800B6478:;
  {uint32_t ea=c->r[30]+0x000000D8u; c->f[1]=c->ps1[1]=RF32(ea);} // 800B6478
  {uint32_t ea=c->r[30]+0x000000F0u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B647C
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 800B6480
  {uint32_t ea=c->r[31]+0x0000000Cu; WF32(ea,c->f[0]);} // 800B6484
  {uint32_t ea=c->r[30]+0x000000DCu; c->f[1]=c->ps1[1]=RF32(ea);} // 800B6488
  {uint32_t ea=c->r[30]+0x000000F4u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B648C
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 800B6490
  {uint32_t ea=c->r[31]+0x0000001Cu; WF32(ea,c->f[0]);} // 800B6494
  {uint32_t ea=c->r[30]+0x000000E0u; c->f[1]=c->ps1[1]=RF32(ea);} // 800B6498
  {uint32_t ea=c->r[30]+0x000000F8u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B649C
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 800B64A0
  {uint32_t ea=c->r[31]+0x0000002Cu; WF32(ea,c->f[0]);} // 800B64A4
L_800B64A8:;
  c->r[0]=R32(c->r[1]+0x00000054u); // 800B64A8
  {uint32_t ea=c->r[1]+0x00000048u; psq_load(c,31,ea,0,0);} // 800B64AC
  {uint32_t ea=c->r[1]+0x00000040u; c->f[31]=RF64(ea);} // 800B64B0
  c->r[31]=R32(c->r[1]+0x0000003Cu); // 800B64B4
  c->r[30]=R32(c->r[1]+0x00000038u); // 800B64B8
  c->lr=c->r[0]; // 800B64BC
  c->r[1]=c->r[1]+0x00000050u; // 800B64C0
  return; // 800B64C4
}

// fn_800B64C8
void f_800B64C8(Ctx* __restrict c) {
  trace_call(0x800B64C8u);
  {uint32_t ea=c->r[1]+0xFFFFFF40u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B64C8
  c->r[0]=c->lr; // 800B64CC
  W32(c->r[1]+0x000000C4u,c->r[0]); // 800B64D0
  {uint32_t ea=c->r[1]+0x000000B8u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800B64D4
  c->r[30]=c->r[3]|c->r[3]; // 800B64D8
  c->r[31]=c->r[4]|c->r[4]; // 800B64DC
  c->r[0]=R32(c->r[3]+0x00000000u); // 800B64E0
  c->r[0]=rotl(c->r[0],0)&0x80000000u; cr0(c,c->r[0]); // 800B64E4
  if (crb(c,2)) { goto L_800B6508; } // 800B64E8
  c->r[4]=0u+0x00000000u; // 800B64EC
  c->r[3]=c->r[3]+0x00000060u; // 800B64F0
  c->lr=0x800B64F8u; f_80320C3C(c); // 800B64F4
  c->r[3]=c->r[30]+0x0000009Cu; // 800B64F8
  c->r[4]=0u+0x00000001u; // 800B64FC
  c->lr=0x800B6504u; f_80320C3C(c); // 800B6500
  goto L_800B6634; // 800B6504
L_800B6508:;
  c->r[3]=c->r[1]+0x00000014u; // 800B6508
  c->r[4]=c->r[30]+0x000000D8u; // 800B650C
  c->r[5]=c->r[30]+0x000000F0u; // 800B6510
  c->lr=0x800B6518u; f_80073ACC(c); // 800B6514
  c->r[3]=c->r[1]+0x0000002Cu; // 800B6518
  c->r[4]=c->r[1]+0x00000014u; // 800B651C
  c->lr=0x800B6524u; f_8005DC84(c); // 800B6520
  c->r[3]=c->r[1]+0x00000008u; // 800B6524
  c->r[4]=c->r[1]+0x0000002Cu; // 800B6528
  c->r[5]=c->r[30]+0x00000054u; // 800B652C
  c->lr=0x800B6534u; f_800772A0(c); // 800B6530
  c->r[3]=c->r[1]+0x00000020u; // 800B6534
  c->r[4]=c->r[1]+0x00000008u; // 800B6538
  c->lr=0x800B6540u; f_8005DC84(c); // 800B653C
  c->r[3]=c->r[1]+0x00000020u; // 800B6540
  c->lr=0x800B6548u; f_80061BF0(c); // 800B6544
  cmps(c,0,(int32_t)c->r[3],0); // 800B6548
  if (!crb(c,2)) { goto L_800B6634; } // 800B654C
  cmps(c,0,(int32_t)c->r[31],0); // 800B6550
  if (crb(c,2)) { goto L_800B6628; } // 800B6554
  c->r[3]=c->r[30]+0x00000060u; // 800B6558
  c->lr=0x800B6560u; f_80320BEC(c); // 800B655C
  cmps(c,0,(int32_t)c->r[3],0); // 800B6560
  if (!crb(c,2)) { goto L_800B6590; } // 800B6564
  c->r[4]=R32(c->r[30]+0x00000110u); // 800B6568
  c->r[3]=c->r[1]+0x00000074u; // 800B656C
  c->r[5]=0u+0x00000002u; // 800B6570
  c->r[6]=0u+0x00000000u; // 800B6574
  c->r[7]=0u+0x00000000u; // 800B6578
  c->r[8]=0u+0x00000000u; // 800B657C
  c->lr=0x800B6584u; f_800B8914(c); // 800B6580
  c->r[3]=c->r[30]+0x00000060u; // 800B6584
  c->r[4]=c->r[1]+0x00000074u; // 800B6588
  c->lr=0x800B6590u; f_80066080(c); // 800B658C
L_800B6590:;
  c->r[3]=c->r[30]+0x0000009Cu; // 800B6590
  c->lr=0x800B6598u; f_80320BEC(c); // 800B6594
  cmps(c,0,(int32_t)c->r[3],0); // 800B6598
  if (!crb(c,2)) { goto L_800B65C8; } // 800B659C
  c->r[4]=R32(c->r[30]+0x00000110u); // 800B65A0
  c->r[3]=c->r[1]+0x00000038u; // 800B65A4
  c->r[5]=0u+0x00000003u; // 800B65A8
  c->r[6]=0u+0x00000000u; // 800B65AC
  c->r[7]=0u+0x00000000u; // 800B65B0
  c->r[8]=0u+0x00000000u; // 800B65B4
  c->lr=0x800B65BCu; f_800B8914(c); // 800B65B8
  c->r[3]=c->r[30]+0x0000009Cu; // 800B65BC
  c->r[4]=c->r[1]+0x00000038u; // 800B65C0
  c->lr=0x800B65C8u; f_80066080(c); // 800B65C4
L_800B65C8:;
  c->r[0]=R32(c->r[30]+0x00000000u); // 800B65C8
  c->r[0]=rotl(c->r[0],0)&0x00000008u; cr0(c,c->r[0]); // 800B65CC
  if (crb(c,2)) { goto L_800B6600; } // 800B65D0
  c->r[3]=R32(c->r[13]+0xFFFFBE10u); // 800B65D4
  c->r[4]=c->r[30]+0x00000060u; // 800B65D8
  c->r[5]=c->r[1]+0x0000002Cu; // 800B65DC
  c->r[6]=0u+0x00000000u; // 800B65E0
  c->lr=0x800B65E8u; f_800660C8(c); // 800B65E4
  c->r[3]=R32(c->r[13]+0xFFFFBE10u); // 800B65E8
  c->r[4]=c->r[30]+0x0000009Cu; // 800B65EC
  c->r[5]=c->r[1]+0x0000002Cu; // 800B65F0
  c->r[6]=0u+0x00000000u; // 800B65F4
  c->lr=0x800B65FCu; f_800660C8(c); // 800B65F8
  goto L_800B6628; // 800B65FC
L_800B6600:;
  c->r[3]=R32(c->r[13]+0xFFFFBE10u); // 800B6600
  c->r[4]=c->r[30]+0x00000060u; // 800B6604
  c->r[5]=c->r[1]+0x0000002Cu; // 800B6608
  c->r[6]=c->r[1]+0x00000020u; // 800B660C
  c->lr=0x800B6614u; f_800660C8(c); // 800B6610
  c->r[3]=R32(c->r[13]+0xFFFFBE10u); // 800B6614
  c->r[4]=c->r[30]+0x0000009Cu; // 800B6618
  c->r[5]=c->r[1]+0x0000002Cu; // 800B661C
  c->r[6]=c->r[1]+0x00000020u; // 800B6620
  c->lr=0x800B6628u; f_800660C8(c); // 800B6624
L_800B6628:;
  c->r[3]=c->r[30]+0x00000054u; // 800B6628
  c->r[4]=c->r[1]+0x0000002Cu; // 800B662C
  c->lr=0x800B6634u; f_8005DC84(c); // 800B6630
L_800B6634:;
  {uint32_t ea=c->r[1]+0x000000B8u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800B6634
  c->r[0]=R32(c->r[1]+0x000000C4u); // 800B6638
  c->lr=c->r[0]; // 800B663C
  c->r[1]=c->r[1]+0x000000C0u; // 800B6640
  return; // 800B6644
}

// fn_800B6648
void f_800B6648(Ctx* __restrict c) {
  trace_call(0x800B6648u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B6648
  c->r[0]=c->lr; // 800B664C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B6650
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800B6654
  c->r[31]=c->r[3]|c->r[3]; // 800B6658
  c->r[3]=c->r[3]+0x00000014u; // 800B665C
  c->lr=0x800B6664u; f_80382F00(c); // 800B6660
  {uint32_t ea=c->r[2]+0xFFFF9D50u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B6664
  c->r[3]=c->r[31]+0x00000060u; // 800B6668
  {uint32_t ea=c->r[2]+0xFFFF9D68u; c->f[1]=c->ps1[1]=RF32(ea);} // 800B666C
  c->r[4]=0u+0x00000001u; // 800B6670
  {uint32_t ea=c->r[31]+0x00000044u; WF32(ea,c->f[1]);} // 800B6674
  {uint32_t ea=c->r[31]+0x00000048u; WF32(ea,c->f[0]);} // 800B6678
  {uint32_t ea=c->r[31]+0x0000004Cu; WF32(ea,c->f[0]);} // 800B667C
  {uint32_t ea=c->r[31]+0x00000050u; WF32(ea,c->f[0]);} // 800B6680
  {uint32_t ea=c->r[31]+0x00000054u; WF32(ea,c->f[0]);} // 800B6684
  {uint32_t ea=c->r[31]+0x00000058u; WF32(ea,c->f[0]);} // 800B6688
  {uint32_t ea=c->r[31]+0x0000005Cu; WF32(ea,c->f[0]);} // 800B668C
  c->lr=0x800B6694u; f_80320C3C(c); // 800B6690
  c->r[3]=c->r[31]+0x0000009Cu; // 800B6694
  c->r[4]=0u+0x00000001u; // 800B6698
  c->lr=0x800B66A0u; f_80320C3C(c); // 800B669C
  {uint32_t ea=c->r[2]+0xFFFF9D50u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B66A0
  c->r[3]=0u+0xFFFFFFFFu; // 800B66A4
  c->r[0]=0u+0x00000000u; // 800B66A8
  {uint32_t ea=c->r[31]+0x000000D8u; WF32(ea,c->f[0]);} // 800B66AC
  {uint32_t ea=c->r[31]+0x000000DCu; WF32(ea,c->f[0]);} // 800B66B0
  {uint32_t ea=c->r[31]+0x000000E0u; WF32(ea,c->f[0]);} // 800B66B4
  {uint32_t ea=c->r[31]+0x000000E4u; WF32(ea,c->f[0]);} // 800B66B8
  {uint32_t ea=c->r[31]+0x000000E8u; WF32(ea,c->f[0]);} // 800B66BC
  {uint32_t ea=c->r[31]+0x000000ECu; WF32(ea,c->f[0]);} // 800B66C0
  {uint32_t ea=c->r[31]+0x000000F0u; WF32(ea,c->f[0]);} // 800B66C4
  {uint32_t ea=c->r[31]+0x000000F4u; WF32(ea,c->f[0]);} // 800B66C8
  {uint32_t ea=c->r[31]+0x000000F8u; WF32(ea,c->f[0]);} // 800B66CC
  {uint32_t ea=c->r[31]+0x000000FCu; WF32(ea,c->f[0]);} // 800B66D0
  {uint32_t ea=c->r[31]+0x00000100u; WF32(ea,c->f[0]);} // 800B66D4
  {uint32_t ea=c->r[31]+0x00000104u; WF32(ea,c->f[0]);} // 800B66D8
  {uint32_t ea=c->r[31]+0x00000108u; WF32(ea,c->f[0]);} // 800B66DC
  {uint32_t ea=c->r[31]+0x0000010Cu; WF32(ea,c->f[0]);} // 800B66E0
  W32(c->r[31]+0x00000110u,c->r[3]); // 800B66E4
  W32(c->r[31]+0x00000114u,c->r[3]); // 800B66E8
  W32(c->r[31]+0x00000118u,c->r[0]); // 800B66EC
  W32(c->r[31]+0x0000011Cu,c->r[3]); // 800B66F0
  W32(c->r[31]+0x00000000u,c->r[0]); // 800B66F4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800B66F8
  c->r[0]=R32(c->r[1]+0x00000014u); // 800B66FC
  c->lr=c->r[0]; // 800B6700
  c->r[1]=c->r[1]+0x00000010u; // 800B6704
  return; // 800B6708
}

// fn_800B670C
void f_800B670C(Ctx* __restrict c) {
  trace_call(0x800B670Cu);
  {uint32_t ea=c->r[1]+0xFFFFFF80u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B670C
  c->r[0]=c->lr; // 800B6710
  W32(c->r[1]+0x00000084u,c->r[0]); // 800B6714
  {uint32_t ea=c->r[1]+0x00000074u; for(int i=29;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800B6718
  c->r[29]=c->r[3]|c->r[3]; // 800B671C
  c->r[30]=c->r[4]|c->r[4]; // 800B6720
  c->r[31]=c->r[5]|c->r[5]; // 800B6724
  c->r[6]=R32(c->r[4]+0x00000000u); // 800B6728
  c->r[0]=R32(c->r[4]+0x00000004u); // 800B672C
  c->r[4]=c->r[1]+0x00000008u; // 800B6730
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 800B6734
  W32(c->r[1]+0x00000008u,c->r[6]); // 800B6738
  c->lr=0x800B6740u; f_80065AEC(c); // 800B673C
  c->r[3]=c->r[30]|c->r[30]; // 800B6740
  c->lr=0x800B6748u; f_80046E94(c); // 800B6744
  c->r[4]=R32(c->r[3]+0x00000004u); // 800B6748
  c->r[5]=c->r[31]|c->r[31]; // 800B674C
  c->r[3]=c->r[1]+0x00000010u; // 800B6750
  c->lr=0x800B6758u; f_80316FA0(c); // 800B6754
  c->r[0]=R8(c->r[1]+0x00000010u); // 800B6758
  c->r[3]=c->r[1]+0x00000020u; // 800B675C
  W8(c->r[29]+0x00000064u,c->r[0]); // 800B6760
  c->r[4]=c->r[29]+0x00000074u; // 800B6764
  c->r[0]=R32(c->r[1]+0x00000014u); // 800B6768
  W32(c->r[29]+0x00000068u,c->r[0]); // 800B676C
  c->r[0]=R32(c->r[1]+0x00000018u); // 800B6770
  W32(c->r[29]+0x0000006Cu,c->r[0]); // 800B6774
  c->r[0]=R32(c->r[1]+0x0000001Cu); // 800B6778
  W32(c->r[29]+0x00000070u,c->r[0]); // 800B677C
  c->lr=0x800B6784u; f_80382F2C(c); // 800B6780
  c->r[3]=c->r[29]+0x000000A4u; // 800B6784
  c->r[4]=c->r[1]+0x00000050u; // 800B6788
  c->lr=0x800B6790u; f_8005DC84(c); // 800B678C
  c->r[3]=c->r[29]+0x000000B0u; // 800B6790
  c->r[4]=c->r[1]+0x0000005Cu; // 800B6794
  c->lr=0x800B679Cu; f_8005DC84(c); // 800B6798
  {uint32_t ea=c->r[1]+0x00000074u; for(int i=29;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800B679C
  c->r[0]=R32(c->r[1]+0x00000084u); // 800B67A0
  c->lr=c->r[0]; // 800B67A4
  c->r[1]=c->r[1]+0x00000080u; // 800B67A8
  return; // 800B67AC
}

// fn_800B67B0
void f_800B67B0(Ctx* __restrict c) {
  trace_call(0x800B67B0u);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B67B0
  c->r[0]=c->lr; // 800B67B4
  c->r[4]=0u+0x806D0000u; // 800B67B8
  W32(c->r[1]+0x00000054u,c->r[0]); // 800B67BC
  c->r[4]=c->r[4]+0x00006888u; // 800B67C0
  {uint32_t ea=c->r[1]+0x00000040u; for(int i=28;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800B67C4
  c->r[31]=c->r[1]|c->r[1]; // 800B67C8
  c->r[30]=c->r[3]|c->r[3]; // 800B67CC
  W32(c->r[3]+0x00000000u,c->r[4]); // 800B67D0
  c->r[3]=c->r[3]+0x00000004u; // 800B67D4
  c->lr=0x800B67DCu; f_800B69F8(c); // 800B67D8
  c->r[3]=c->r[30]+0x00000010u; // 800B67DC
  c->lr=0x800B67E4u; f_800B69F8(c); // 800B67E0
  c->r[3]=c->r[30]+0x00000020u; // 800B67E4
  c->lr=0x800B67ECu; f_800ADFA0(c); // 800B67E8
  c->r[4]=c->r[30]+0x00000044u; // 800B67EC
L_800B67F0:;
  c->r[3]=0u+0x806D0000u; // 800B67F0
  c->r[0]=0u+0x00000000u; // 800B67F4
  c->r[3]=c->r[3]+0x00006810u; // 800B67F8
  W32(c->r[4]+0x00000000u,c->r[3]); // 800B67FC
  c->r[28]=c->r[30]+0x00006444u; // 800B6800
  W32(c->r[4]+0x00000004u,c->r[0]); // 800B6804
  W32(c->r[4]+0x00000008u,c->r[0]); // 800B6808
  W32(c->r[4]+0x00000044u,c->r[0]); // 800B680C
  W32(c->r[4]+0x00000048u,c->r[0]); // 800B6810
  c->r[4]=c->r[4]+0x00000064u; // 800B6814
  cmpu(c,0,c->r[4],c->r[28]); // 800B6818
  if (crb(c,0)) { IRQCHK(c); goto L_800B67F0; } // 800B681C
L_800B6820:;
  c->r[3]=c->r[28]|c->r[28]; // 800B6820
  c->lr=0x800B6828u; f_803209E8(c); // 800B6824
  c->r[3]=c->r[30]+0x00010000u; // 800B6828
  c->r[28]=c->r[28]+0x0000003Cu; // 800B682C
  c->r[0]=c->r[3]+0xFFFF8244u; // 800B6830
  cmpu(c,0,c->r[28],c->r[0]); // 800B6834
  if (crb(c,0)) { IRQCHK(c); goto L_800B6820; } // 800B6838
  c->r[3]=c->r[3]+0xFFFF8248u; // 800B683C
  c->lr=0x800B6844u; f_80337684(c); // 800B6840
  c->r[3]=c->r[31]+0x00000020u; // 800B6844
  c->r[4]=0u+0x00000000u; // 800B6848
  c->lr=0x800B6850u; f_8007524C(c); // 800B684C
  c->r[3]=c->r[30]|c->r[30]; // 800B6850
  c->lr=0x800B6858u; f_800B7334(c); // 800B6854
  c->r[0]=0u+0x00000000u; // 800B6858
  W8(c->r[31]+0x0000000Cu,c->r[0]); // 800B685C
  c->r[3]=c->r[31]+0x0000000Cu; // 800B6860
  c->lr=0x800B6868u; f_80045AE4(c); // 800B6864
  c->r[4]=0u+0x00004810u; // 800B6868
  c->r[3]=c->r[3]+0x00000034u; // 800B686C
  c->lr=0x800B6874u; f_803C4D08(c); // 800B6870
  cmps(c,0,(int32_t)c->r[3],0); // 800B6874
  c->r[28]=c->r[3]|c->r[3]; // 800B6878
  if (crb(c,2)) { goto L_800B68B8; } // 800B687C
  c->r[4]=0u+0x800B0000u; // 800B6880
  c->r[5]=0u+0x800B0000u; // 800B6884
  W32(c->r[31]+0x0000003Cu,c->r[1]); // 800B6888
  c->r[4]=c->r[4]+0x00004D40u; // 800B688C
  c->r[5]=c->r[5]+0x00004DECu; // 800B6890
  c->r[6]=0u+0x00000120u; // 800B6894
  c->r[7]=0u+0x00000040u; // 800B6898
  c->lr=0x800B68A0u; f_803A9670(c); // 800B689C
  c->r[28]=c->r[3]|c->r[3]; // 800B68A0
  goto L_800B68B8; // 800B68A4
  c->r[3]=0u+0x00000000u; // 800B68A8
  c->r[4]=0u+0x00000000u; // 800B68AC
  c->r[5]=0u+0x00000000u; // 800B68B0
  c->lr=0x800B68B8u; f_803ABBF0(c); // 800B68B4
L_800B68B8:;
  W32(c->r[30]+0x0000001Cu,c->r[28]); // 800B68B8
  c->r[29]=0u+0x00000000u; // 800B68BC
  goto L_800B68F8; // 800B68C0
L_800B68C4:;
  c->r[28]=(uint32_t)((int32_t)c->r[29]*(int32_t)288); // 800B68C4
  c->r[0]=R32(c->r[30]+0x0000001Cu); // 800B68C8
  c->r[4]=c->r[29]|c->r[29]; // 800B68CC
  c->r[3]=c->r[0]+c->r[28]; // 800B68D0
  c->lr=0x800B68D8u; f_800B588C(c); // 800B68D4
  c->r[0]=R32(c->r[30]+0x0000001Cu); // 800B68D8
  c->r[5]=c->r[0]+c->r[28]; cr0(c,c->r[5]); // 800B68DC
  if (crb(c,2)) { goto L_800B68E8; } // 800B68E0
  c->r[5]=c->r[5]+0x00000004u; // 800B68E4
L_800B68E8:;
  c->r[3]=c->r[30]+0x00000010u; // 800B68E8
  c->r[4]=c->r[3]|c->r[3]; // 800B68EC
  c->lr=0x800B68F4u; f_802DDCA8(c); // 800B68F0
  c->r[29]=c->r[29]+0x00000001u; // 800B68F4
L_800B68F8:;
  cmps(c,0,(int32_t)c->r[29],64); // 800B68F8
  if (crb(c,0)) { IRQCHK(c); goto L_800B68C4; } // 800B68FC
  c->r[29]=0u+0x80690000u; // 800B6900
  c->r[28]=0u+0x80740000u; // 800B6904
  c->r[4]=c->r[29]+0xFFFFE098u; // 800B6908
  c->r[6]=0u+0x00000000u; // 800B690C
  c->r[3]=c->r[28]+0x00004FD0u; // 800B6910
  c->r[5]=c->r[4]+0x00000011u; // 800B6914
  c->lr=0x800B691Cu; f_8005A7B0(c); // 800B6918
  c->r[4]=c->r[3]|c->r[3]; // 800B691C
  c->r[3]=c->r[31]+0x00000018u; // 800B6920
  c->lr=0x800B6928u; f_8007524C(c); // 800B6924
  c->r[0]=R32(c->r[31]+0x00000018u); // 800B6928
  c->r[3]=c->r[31]+0x00000020u; // 800B692C
  W32(c->r[31]+0x00000020u,c->r[0]); // 800B6930
  c->lr=0x800B6938u; f_804AB770(c); // 800B6934
  c->r[0]=R32(c->r[31]+0x00000020u); // 800B6938
  c->r[3]=c->r[31]+0x00000020u; // 800B693C
  W32(c->r[31]+0x00000010u,c->r[0]); // 800B6940
  c->r[4]=c->r[31]+0x00000010u; // 800B6944
  c->lr=0x800B694Cu; f_804AB53C(c); // 800B6948
  c->r[3]=c->r[30]+0x00000020u; // 800B694C
  c->lr=0x800B6954u; f_800AF34C(c); // 800B6950
  c->r[0]=R32(c->r[31]+0x00000020u); // 800B6954
  c->r[8]=0u+0x00000000u; // 800B6958
  W32(c->r[31]+0x00000014u,c->r[0]); // 800B695C
  c->r[9]=c->r[8]|c->r[8]; // 800B6960
  c->r[3]=c->r[30]+0x00000020u; // 800B6964
  c->r[4]=c->r[31]+0x00000014u; // 800B6968
  c->r[5]=0u+0x00000008u; // 800B696C
  c->r[6]=0u+0x00000001u; // 800B6970
  c->r[7]=0u+0x00000040u; // 800B6974
  c->lr=0x800B697Cu; f_800ADFF0(c); // 800B6978
  c->r[3]=0u+0xFFFFFFFFu; // 800B697C
  c->r[0]=0u+0x00000000u; // 800B6980
  W32(c->r[31]+0x0000001Cu,c->r[3]); // 800B6984
  c->r[3]=c->r[31]+0x00000008u; // 800B6988
  W8(c->r[31]+0x00000008u,c->r[0]); // 800B698C
  c->lr=0x800B6994u; f_80045AE4(c); // 800B6990
  c->r[5]=c->r[29]+0xFFFFE098u; // 800B6994
  c->r[29]=c->r[3]|c->r[3]; // 800B6998
  c->r[4]=c->r[5]+0x00000024u; // 800B699C
  c->r[3]=c->r[28]+0x00004FD0u; // 800B69A0
  c->r[6]=0u+0x00000000u; // 800B69A4
  c->r[5]=c->r[5]+0x00000031u; // 800B69A8
  c->lr=0x800B69B0u; f_8005A7B0(c); // 800B69AC
  c->r[4]=c->r[3]|c->r[3]; // 800B69B0
  c->r[3]=c->r[30]+0x00010000u; // 800B69B4
  c->r[5]=c->r[29]+0x00000034u; // 800B69B8
  c->r[9]=c->r[31]+0x0000001Cu; // 800B69BC
  c->r[6]=0u+0x00000005u; // 800B69C0
  c->r[7]=0u+0x00000000u; // 800B69C4
  c->r[8]=0u+0x00000001u; // 800B69C8
  c->r[10]=0u+0x00000004u; // 800B69CC
  c->r[3]=c->r[3]+0xFFFF8248u; // 800B69D0
  c->lr=0x800B69D8u; f_80337820(c); // 800B69D4
  c->r[10]=c->r[31]|c->r[31]; // 800B69D8
  c->r[3]=c->r[30]|c->r[30]; // 800B69DC
  {uint32_t ea=c->r[10]+0x00000040u; for(int i=28;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800B69E0
  c->r[10]=R32(c->r[1]+0x00000000u); // 800B69E4
  c->r[0]=R32(c->r[10]+0x00000004u); // 800B69E8
  c->r[1]=c->r[10]|c->r[10]; // 800B69EC
  c->lr=c->r[0]; // 800B69F0
  return; // 800B69F4
}

// fn_800B69F8
void f_800B69F8(Ctx* __restrict c) {
  trace_call(0x800B69F8u);
  W32(c->r[3]+0x00000000u,c->r[3]); // 800B69F8
  W32(c->r[3]+0x00000004u,c->r[3]); // 800B69FC
  W32(c->r[3]+0x00000008u,c->r[3]); // 800B6A00
  return; // 800B6A04
}

// dtor_800B6A08
void f_800B6A08(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B6A08
  c->r[0]=c->lr; // 800B6A0C
  cmps(c,0,(int32_t)c->r[3],0); // 800B6A10
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B6A14
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800B6A18
  c->r[31]=c->r[3]|c->r[3]; // 800B6A1C
  if (crb(c,2)) { goto L_800B6A2C; } // 800B6A20
  c->r[4]=0u+0x00000000u; // 800B6A24
  c->lr=0x800B6A2Cu; f_80045C7C(c); // 800B6A28
L_800B6A2C:;
  c->r[3]=c->r[31]|c->r[31]; // 800B6A2C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800B6A30
  c->r[0]=R32(c->r[1]+0x00000014u); // 800B6A34
  c->lr=c->r[0]; // 800B6A38
  c->r[1]=c->r[1]+0x00000010u; // 800B6A3C
  return; // 800B6A40
}

// fn_800B6A44
void f_800B6A44(Ctx* __restrict c) {
  trace_call(0x800B6A44u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B6A44
  c->r[0]=c->lr; // 800B6A48
  cmps(c,0,(int32_t)c->r[3],0); // 800B6A4C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B6A50
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800B6A54
  c->r[31]=c->r[3]|c->r[3]; // 800B6A58
  if (crb(c,2)) { goto L_800B6ACC; } // 800B6A5C
  c->r[5]=0u+0x806D0000u; // 800B6A60
  c->r[4]=0u+0xFFFFFFFFu; // 800B6A64
  c->r[5]=c->r[5]+0x00006888u; // 800B6A68
  W32(c->r[3]+0x00000000u,c->r[5]); // 800B6A6C
  c->r[3]=c->r[3]+0x00000020u; // 800B6A70
  c->lr=0x800B6A78u; f_800AE518(c); // 800B6A74
  c->r[3]=c->r[31]+0x00000020u; // 800B6A78
  c->r[4]=0u+0x00000000u; // 800B6A7C
  c->lr=0x800B6A84u; f_800AE63C(c); // 800B6A80
  c->r[3]=c->r[31]+0x00010000u; // 800B6A84
  c->r[3]=c->r[3]+0xFFFF8248u; // 800B6A88
  c->lr=0x800B6A90u; f_80337C14(c); // 800B6A8C
  c->r[3]=c->r[31]+0x00010000u; // 800B6A90
  c->r[4]=0u+0xFFFFFFFFu; // 800B6A94
  c->r[3]=c->r[3]+0xFFFF8248u; // 800B6A98
  c->lr=0x800B6AA0u; f_803376EC(c); // 800B6A9C
  c->r[3]=c->r[31]+0x00000020u; // 800B6AA0
  c->r[4]=0u+0xFFFFFFFFu; // 800B6AA4
  c->lr=0x800B6AACu; f_800ADFEC(c); // 800B6AA8
  c->r[3]=addc(c,c->r[31],0x00000010u,0); cr0(c,c->r[3]); // 800B6AAC
  if (crb(c,2)) { goto L_800B6ABC; } // 800B6AB0
  c->r[4]=0u+0x00000000u; // 800B6AB4
  c->lr=0x800B6ABCu; f_80045C7C(c); // 800B6AB8
L_800B6ABC:;
  c->r[3]=addc(c,c->r[31],0x00000004u,0); cr0(c,c->r[3]); // 800B6ABC
  if (crb(c,2)) { goto L_800B6ACC; } // 800B6AC0
  c->r[4]=0u+0x00000000u; // 800B6AC4
  c->lr=0x800B6ACCu; f_80045C7C(c); // 800B6AC8
L_800B6ACC:;
  c->r[3]=c->r[31]|c->r[31]; // 800B6ACC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800B6AD0
  c->r[0]=R32(c->r[1]+0x00000014u); // 800B6AD4
  c->lr=c->r[0]; // 800B6AD8
  c->r[1]=c->r[1]+0x00000010u; // 800B6ADC
  return; // 800B6AE0
}

// fn_800B6AE4
void f_800B6AE4(Ctx* __restrict c) {
  trace_call(0x800B6AE4u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B6AE4
  c->r[0]=c->lr; // 800B6AE8
  W32(c->r[1]+0x00000044u,c->r[0]); // 800B6AEC
  {uint32_t ea=c->r[1]+0x00000024u; for(int i=25;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800B6AF0
  c->r[25]=c->r[3]|c->r[3]; // 800B6AF4
  c->r[26]=c->r[4]|c->r[4]; // 800B6AF8
  c->r[27]=c->r[5]|c->r[5]; // 800B6AFC
  c->r[28]=c->r[6]|c->r[6]; // 800B6B00
  c->r[29]=c->r[7]|c->r[7]; // 800B6B04
  c->r[30]=c->r[8]|c->r[8]; // 800B6B08
  c->r[31]=0u+0x00000000u; // 800B6B0C
  c->r[0]=R32(c->r[3]+0x0000001Cu); // 800B6B10
  cmps(c,0,(int32_t)c->r[0],0); // 800B6B14
  if (crb(c,2)) { goto L_800B6BF0; } // 800B6B18
  c->r[4]=R32(c->r[3]+0x00000010u); // 800B6B1C
  c->r[0]=R32(c->r[3]+0x00000018u); // 800B6B20
  c->r[31]=R32(c->r[4]+0x00000008u); // 800B6B24
  cmpu(c,0,c->r[31],c->r[0]); // 800B6B28
  if (!crb(c,2)) { goto L_800B6B34; } // 800B6B2C
  c->r[31]=0u+0x00000000u; // 800B6B30
L_800B6B34:;
  cmps(c,0,(int32_t)c->r[31],0); // 800B6B34
  if (crb(c,2)) { goto L_800B6BF0; } // 800B6B38
  c->r[4]=c->r[31]|c->r[31]; // 800B6B3C
  if (crb(c,2)) { goto L_800B6B48; } // 800B6B40
  c->r[4]=c->r[31]+0x00000004u; // 800B6B44
L_800B6B48:;
  c->r[3]=c->r[3]+0x00000010u; // 800B6B48
  c->lr=0x800B6B50u; f_802DDD08(c); // 800B6B4C
  cmps(c,0,(int32_t)c->r[31],0); // 800B6B50
  c->r[5]=c->r[31]|c->r[31]; // 800B6B54
  if (crb(c,2)) { goto L_800B6B60; } // 800B6B58
  c->r[5]=c->r[31]+0x00000004u; // 800B6B5C
L_800B6B60:;
  c->r[3]=c->r[25]+0x00000004u; // 800B6B60
  c->r[4]=c->r[3]|c->r[3]; // 800B6B64
  c->lr=0x800B6B6Cu; f_802DDCA8(c); // 800B6B68
  c->r[3]=c->r[31]|c->r[31]; // 800B6B6C
  c->r[4]=c->r[26]|c->r[26]; // 800B6B70
  c->r[5]=c->r[27]|c->r[27]; // 800B6B74
  c->r[6]=c->r[28]|c->r[28]; // 800B6B78
  c->r[7]=c->r[29]|c->r[29]; // 800B6B7C
  c->r[8]=c->r[30]|c->r[30]; // 800B6B80
  c->lr=0x800B6B88u; f_800B4E30(c); // 800B6B84
  c->r[3]=c->r[28]|c->r[28]; // 800B6B88
  c->lr=0x800B6B90u; f_800B5150(c); // 800B6B8C
  c->r[4]=R32(c->r[3]+0x00000070u); // 800B6B90
  cmps(c,0,(int32_t)c->r[4],0); // 800B6B94
  if (crb(c,2)) { goto L_800B6BE4; } // 800B6B98
  c->r[0]=0u+0x000000E6u; // 800B6B9C
  W32(c->r[1]+0x00000008u,c->r[0]); // 800B6BA0
  c->r[3]=c->r[31]|c->r[31]; // 800B6BA4
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 800B6BA8
  W32(c->r[1]+0x00000010u,c->r[4]); // 800B6BAC
  c->lr=0x800B6BB4u; f_800B5894(c); // 800B6BB0
  c->r[4]=c->r[3]|c->r[3]; // 800B6BB4
  c->r[3]=c->r[25]+0x00000020u; // 800B6BB8
  c->lr=0x800B6BC0u; f_800AE518(c); // 800B6BBC
  c->r[3]=c->r[31]|c->r[31]; // 800B6BC0
  c->lr=0x800B6BC8u; f_800B5894(c); // 800B6BC4
  c->r[6]=c->r[3]|c->r[3]; // 800B6BC8
  c->r[3]=c->r[25]+0x00000020u; // 800B6BCC
  c->r[4]=c->r[1]+0x00000008u; // 800B6BD0
  c->r[5]=0u+0x00000000u; // 800B6BD4
  c->r[7]=0u+0x00000000u; // 800B6BD8
  c->r[8]=0u+0x00000000u; // 800B6BDC
  c->lr=0x800B6BE4u; f_800AE348(c); // 800B6BE0
L_800B6BE4:;
  c->r[3]=c->r[25]|c->r[25]; // 800B6BE4
  c->r[4]=c->r[28]|c->r[28]; // 800B6BE8
  c->lr=0x800B6BF0u; f_800B6C08(c); // 800B6BEC
L_800B6BF0:;
  c->r[3]=c->r[31]|c->r[31]; // 800B6BF0
  {uint32_t ea=c->r[1]+0x00000024u; for(int i=25;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800B6BF4
  c->r[0]=R32(c->r[1]+0x00000044u); // 800B6BF8
  c->lr=c->r[0]; // 800B6BFC
  c->r[1]=c->r[1]+0x00000040u; // 800B6C00
  return; // 800B6C04
}

// fn_800B6C08
void f_800B6C08(Ctx* __restrict c) {
  trace_call(0x800B6C08u);
  {uint32_t ea=c->r[1]+0xFFFFFF60u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B6C08
  c->r[0]=c->lr; // 800B6C0C
  W32(c->r[1]+0x000000A4u,c->r[0]); // 800B6C10
  W32(c->r[1]+0x0000009Cu,c->r[31]); // 800B6C14
  W32(c->r[1]+0x00000098u,c->r[30]); // 800B6C18
  c->r[30]=c->r[3]|c->r[3]; // 800B6C1C
  c->r[3]=c->r[4]|c->r[4]; // 800B6C20
  c->lr=0x800B6C28u; f_800B5150(c); // 800B6C24
  c->r[0]=R32(c->r[3]+0x0000008Cu); // 800B6C28
  c->r[0]=rotl(c->r[0],0)&0x00000020u; cr0(c,c->r[0]); // 800B6C2C
  if (crb(c,2)) { goto L_800B6DD0; } // 800B6C30
  c->r[3]=c->r[30]+0x00010000u; // 800B6C34
  c->r[3]=c->r[3]+0xFFFF8248u; // 800B6C38
  c->lr=0x800B6C40u; f_803387C8(c); // 800B6C3C
  cmps(c,0,(int32_t)c->r[3],0); // 800B6C40
  if (!crb(c,2)) { goto L_800B6C5C; } // 800B6C44
  c->r[3]=c->r[30]+0x00010000u; // 800B6C48
  c->r[4]=0u+0x00000000u; // 800B6C4C
  c->r[3]=c->r[3]+0xFFFF8248u; // 800B6C50
  c->lr=0x800B6C58u; f_80338678(c); // 800B6C54
  goto L_800B6C88; // 800B6C58
L_800B6C5C:;
  c->r[3]=c->r[30]+0x00010000u; // 800B6C5C
  c->r[0]=R32(c->r[3]+0xFFFF8284u); // 800B6C60
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 800B6C64
  if (crb(c,2)) { goto L_800B6C7C; } // 800B6C68
  {uint32_t ea=c->r[2]+0xFFFF9DB0u; c->f[1]=c->ps1[1]=RF32(ea);} // 800B6C6C
  c->r[3]=c->r[3]+0xFFFF8248u; // 800B6C70
  c->lr=0x800B6C78u; f_80338858(c); // 800B6C74
  goto L_800B6C88; // 800B6C78
L_800B6C7C:;
  {uint32_t ea=c->r[2]+0xFFFF9DB4u; c->f[1]=c->ps1[1]=RF32(ea);} // 800B6C7C
  c->r[3]=c->r[3]+0xFFFF8248u; // 800B6C80
  c->lr=0x800B6C88u; f_80338858(c); // 800B6C84
L_800B6C88:;
  c->r[31]=0u+0x00000000u; // 800B6C88
  W8(c->r[1]+0x00000014u,c->r[31]); // 800B6C8C
  c->r[3]=c->r[1]+0x00000014u; // 800B6C90
  c->lr=0x800B6C98u; f_80047A80(c); // 800B6C94
  c->r[3]=R32(c->r[3]+0x00000004u); // 800B6C98
  c->lr=0x800B6CA0u; f_804CC8D4(c); // 800B6C9C
  W32(c->r[1]+0x0000001Cu,c->r[3]); // 800B6CA0
  c->r[3]=c->r[1]+0x0000001Cu; // 800B6CA4
  c->r[4]=c->r[1]+0x0000005Cu; // 800B6CA8
  c->lr=0x800B6CB0u; f_804C7AC0(c); // 800B6CAC
  W8(c->r[1]+0x00000010u,c->r[31]); // 800B6CB0
  c->r[3]=c->r[1]+0x00000010u; // 800B6CB4
  c->lr=0x800B6CBCu; f_80047A80(c); // 800B6CB8
  c->r[3]=R32(c->r[3]+0x00000004u); // 800B6CBC
  c->lr=0x800B6CC4u; f_804CC8D4(c); // 800B6CC0
  W32(c->r[1]+0x00000018u,c->r[3]); // 800B6CC4
  c->r[3]=c->r[1]+0x00000018u; // 800B6CC8
  c->r[4]=c->r[1]+0x00000068u; // 800B6CCC
  c->lr=0x800B6CD4u; f_804C7D10(c); // 800B6CD0
  c->r[3]=c->r[1]+0x00000050u; // 800B6CD4
  c->r[4]=c->r[1]+0x00000078u; // 800B6CD8
  c->lr=0x800B6CE0u; f_800B6DE8(c); // 800B6CDC
  c->r[3]=c->r[1]+0x00000050u; // 800B6CE0
  c->r[4]=c->r[1]+0x0000005Cu; // 800B6CE4
  c->lr=0x800B6CECu; f_800B6E04(c); // 800B6CE8
  W8(c->r[1]+0x0000000Cu,c->r[31]); // 800B6CEC
  c->r[3]=c->r[1]+0x0000000Cu; // 800B6CF0
  c->lr=0x800B6CF8u; f_8004FC20(c); // 800B6CF4
  c->r[4]=c->r[3]|c->r[3]; // 800B6CF8
  c->r[3]=c->r[1]+0x00000020u; // 800B6CFC
  c->lr=0x800B6D04u; f_8033AF4C(c); // 800B6D00
  c->r[3]=c->r[1]+0x00000044u; // 800B6D04
  c->r[4]=c->r[1]+0x00000020u; // 800B6D08
  c->lr=0x800B6D10u; f_8005DC84(c); // 800B6D0C
  {uint32_t ea=c->r[1]+0x00000050u; c->f[1]=c->ps1[1]=RF32(ea);} // 800B6D10
  c->r[3]=c->r[1]+0x00000038u; // 800B6D14
  {uint32_t ea=c->r[2]+0xFFFF9DB0u; c->f[2]=c->ps1[2]=RF32(ea);} // 800B6D18
  {uint32_t ea=c->r[1]+0x00000058u; c->f[3]=c->ps1[3]=RF32(ea);} // 800B6D1C
  c->lr=0x800B6D24u; f_8005A6D0(c); // 800B6D20
  c->r[3]=c->r[1]+0x00000038u; // 800B6D24
  c->lr=0x800B6D2Cu; f_80061BF0(c); // 800B6D28
  cmps(c,0,(int32_t)c->r[3],0); // 800B6D2C
  if (!crb(c,2)) { goto L_800B6D48; } // 800B6D30
  c->r[3]=c->r[1]+0x00000038u; // 800B6D34
  c->r[5]=0u+0x806A0000u; // 800B6D38
  c->r[4]=c->r[3]|c->r[3]; // 800B6D3C
  c->r[5]=c->r[5]+0x00000AA8u; // 800B6D40
  c->lr=0x800B6D48u; f_8030E0BC(c); // 800B6D44
L_800B6D48:;
  {uint32_t ea=c->r[1]+0x00000044u; c->f[1]=c->ps1[1]=RF32(ea);} // 800B6D48
  c->r[3]=c->r[1]+0x0000002Cu; // 800B6D4C
  {uint32_t ea=c->r[2]+0xFFFF9DB0u; c->f[2]=c->ps1[2]=RF32(ea);} // 800B6D50
  {uint32_t ea=c->r[1]+0x0000004Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 800B6D54
  c->lr=0x800B6D5Cu; f_8005A6D0(c); // 800B6D58
  c->r[3]=c->r[1]+0x0000002Cu; // 800B6D5C
  c->lr=0x800B6D64u; f_80061BF0(c); // 800B6D60
  cmps(c,0,(int32_t)c->r[3],0); // 800B6D64
  if (!crb(c,2)) { goto L_800B6D80; } // 800B6D68
  c->r[3]=c->r[1]+0x0000002Cu; // 800B6D6C
  c->r[5]=0u+0x806A0000u; // 800B6D70
  c->r[4]=c->r[3]|c->r[3]; // 800B6D74
  c->r[5]=c->r[5]+0x00000AA8u; // 800B6D78
  c->lr=0x800B6D80u; f_8030E0BC(c); // 800B6D7C
L_800B6D80:;
  c->r[3]=c->r[30]+0x00010000u; // 800B6D80
  c->r[0]=0u+0x00000001u; // 800B6D84
  W32(c->r[3]+0xFFFF828Cu,c->r[0]); // 800B6D88
  c->r[3]=c->r[1]+0x00000038u; // 800B6D8C
  c->r[4]=c->r[1]+0x0000002Cu; // 800B6D90
  c->lr=0x800B6D98u; f_800B3F44(c); // 800B6D94
  {uint32_t ea=c->r[2]+0xFFFF9DBCu; c->f[0]=c->ps1[0]=RF32(ea);} // 800B6D98
  c->r[4]=c->r[30]+0x00010000u; // 800B6D9C
  {uint32_t ea=c->r[2]+0xFFFF9DB8u; c->f[2]=c->ps1[2]=RF32(ea);} // 800B6DA0
  c->r[0]=0u+0x00000000u; // 800B6DA4
  c->f[1]=c->ps1[1]=S(c->f[0]+c->f[1]); // 800B6DA8
  {uint32_t ea=c->r[2]+0xFFFF9DB4u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B6DAC
  c->r[3]=c->r[1]+0x00000008u; // 800B6DB0
  c->f[0]=c->ps1[0]=S(std::fma(c->f[2],c->f[1],c->f[0])); // 800B6DB4
  {uint32_t ea=c->r[4]+0xFFFF8288u; WF32(ea,c->f[0]);} // 800B6DB8
  W8(c->r[1]+0x00000008u,c->r[0]); // 800B6DBC
  c->lr=0x800B6DC4u; f_8004FC20(c); // 800B6DC0
  c->r[4]=c->r[30]+0x00010000u; // 800B6DC4
  {uint32_t ea=c->r[4]+0xFFFF8288u; c->f[1]=c->ps1[1]=RF32(ea);} // 800B6DC8
  c->lr=0x800B6DD0u; f_8033AC64(c); // 800B6DCC
L_800B6DD0:;
  c->r[0]=R32(c->r[1]+0x000000A4u); // 800B6DD0
  c->r[31]=R32(c->r[1]+0x0000009Cu); // 800B6DD4
  c->r[30]=R32(c->r[1]+0x00000098u); // 800B6DD8
  c->lr=c->r[0]; // 800B6DDC
  c->r[1]=c->r[1]+0x000000A0u; // 800B6DE0
  return; // 800B6DE4
}

// fn_800B6DE8
void f_800B6DE8(Ctx* __restrict c) {
  trace_call(0x800B6DE8u);
  {uint32_t ea=c->r[4]+0x00000000u; c->f[2]=c->ps1[2]=RF32(ea);} // 800B6DE8
  {uint32_t ea=c->r[4]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 800B6DEC
  {uint32_t ea=c->r[4]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B6DF0
  {uint32_t ea=c->r[3]+0x00000000u; WF32(ea,c->f[2]);} // 800B6DF4
  {uint32_t ea=c->r[3]+0x00000004u; WF32(ea,c->f[1]);} // 800B6DF8
  {uint32_t ea=c->r[3]+0x00000008u; WF32(ea,c->f[0]);} // 800B6DFC
  return; // 800B6E00
}

// fn_800B6E04
void f_800B6E04(Ctx* __restrict c) {
  trace_call(0x800B6E04u);
  {uint32_t ea=c->r[3]+0x00000000u; psq_load(c,0,ea,0,0);} // 800B6E04
  {uint32_t ea=c->r[4]+0x00000000u; psq_load(c,1,ea,0,0);} // 800B6E08
  {double t0=S(c->f[0]-c->f[1]), t1=S(c->ps1[0]-c->ps1[1]); c->f[0]=t0; c->ps1[0]=t1;} // 800B6E0C
  {uint32_t ea=c->r[3]+0x00000000u; psq_store(c,0,ea,0,0);} // 800B6E10
  {uint32_t ea=c->r[3]+0x00000008u; psq_load(c,0,ea,1,0);} // 800B6E14
  {uint32_t ea=c->r[4]+0x00000008u; psq_load(c,1,ea,1,0);} // 800B6E18
  {double t0=S(c->f[0]-c->f[1]), t1=S(c->ps1[0]-c->ps1[1]); c->f[0]=t0; c->ps1[0]=t1;} // 800B6E1C
  {uint32_t ea=c->r[3]+0x00000008u; psq_store(c,0,ea,1,0);} // 800B6E20
  return; // 800B6E24
}

// fn_800B6E28
void f_800B6E28(Ctx* __restrict c) {
  trace_call(0x800B6E28u);
  {uint32_t ea=c->r[1]+0xFFFFFF40u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B6E28
  c->r[0]=c->lr; // 800B6E2C
  W32(c->r[1]+0x000000C4u,c->r[0]); // 800B6E30
  c->r[11]=c->r[1]+0x000000B0u; // 800B6E34
  {uint32_t ea=c->r[1]+0x000000B0u; WF64(ea,c->f[31]);} // 800B6E38
  {uint32_t ea=c->r[1]+0x000000B8u; psq_store(c,31,ea,0,0);} // 800B6E3C
  c->lr=0x800B6E44u; { W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800B6E40
  c->r[29]=0u+0x00000000u; // 800B6E44
  W8(c->r[1]+0x00000010u,c->r[29]); // 800B6E48
  c->r[31]=c->r[3]|c->r[3]; // 800B6E4C
  c->r[3]=c->r[1]+0x00000010u; // 800B6E50
  c->lr=0x800B6E58u; f_80047A80(c); // 800B6E54
  c->r[3]=R32(c->r[3]+0x00000004u); // 800B6E58
  c->lr=0x800B6E60u; f_804CC8D4(c); // 800B6E5C
  W32(c->r[1]+0x00000018u,c->r[3]); // 800B6E60
  c->r[3]=c->r[1]+0x00000018u; // 800B6E64
  c->r[4]=c->r[1]+0x00000034u; // 800B6E68
  c->lr=0x800B6E70u; f_804C7AC0(c); // 800B6E6C
  c->r[0]=R32(c->r[31]+0x0000001Cu); // 800B6E70
  cmps(c,0,(int32_t)c->r[0],0); // 800B6E74
  if (crb(c,2)) { goto L_800B705C; } // 800B6E78
  W8(c->r[1]+0x0000000Cu,c->r[29]); // 800B6E7C
  c->r[3]=c->r[1]+0x0000000Cu; // 800B6E80
  c->lr=0x800B6E88u; f_80047A80(c); // 800B6E84
  c->r[3]=R32(c->r[3]+0x00000004u); // 800B6E88
  c->lr=0x800B6E90u; f_804CC8D4(c); // 800B6E8C
  W32(c->r[1]+0x00000014u,c->r[3]); // 800B6E90
  c->r[3]=c->r[1]+0x00000014u; // 800B6E94
  c->r[4]=c->r[1]+0x00000040u; // 800B6E98
  c->lr=0x800B6EA0u; f_804C7D10(c); // 800B6E9C
  c->r[3]=c->r[1]+0x0000001Cu; // 800B6EA0
  c->r[4]=c->r[1]+0x00000050u; // 800B6EA4
  c->lr=0x800B6EACu; f_800B6DE8(c); // 800B6EA8
  c->r[3]=c->r[1]+0x0000001Cu; // 800B6EAC
  c->r[4]=c->r[1]+0x00000034u; // 800B6EB0
  c->lr=0x800B6EB8u; f_800B6E04(c); // 800B6EB4
  c->r[4]=0u+0x80750000u; // 800B6EB8
  c->r[3]=0u+0x80750000u; // 800B6EBC
  c->r[0]=0u+0x00000040u; // 800B6EC0
  {uint32_t ea=c->r[2]+0xFFFF9DC0u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B6EC4
  c->r[4]=c->r[4]+0x000010D0u; // 800B6EC8
  c->r[3]=c->r[3]+0x000011D0u; // 800B6ECC
  c->r[5]=0u+0x00000000u; // 800B6ED0
  c->ctr=c->r[0]; // 800B6ED4
L_800B6ED8:;
  W32(c->r[3]+c->r[29],c->r[5]); // 800B6ED8
  c->r[5]=c->r[5]+0x00000001u; // 800B6EDC
  {uint32_t ea=c->r[4]+c->r[29]; WF32(ea,c->f[0]);} // 800B6EE0
  c->r[29]=c->r[29]+0x00000004u; // 800B6EE4
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800B6ED8; } // 800B6EE8
  c->r[29]=0u+0x80750000u; // 800B6EEC
  c->r[28]=R32(c->r[31]+0x00000004u); // 800B6EF0
  {uint32_t ea=c->r[2]+0xFFFF9DB0u; c->f[31]=c->ps1[31]=RF32(ea);} // 800B6EF4
  c->r[29]=c->r[29]+0x000010D0u; // 800B6EF8
  goto L_800B6FDC; // 800B6EFC
L_800B6F00:;
  c->r[4]=c->r[1]+0x00000070u; // 800B6F00
  c->lr=0x800B6F08u; f_800B5170(c); // 800B6F04
  cmps(c,0,(int32_t)c->r[3],0); // 800B6F08
  if (crb(c,2)) { goto L_800B6F1C; } // 800B6F0C
  cmps(c,0,(int32_t)c->r[3],1); // 800B6F10
  if (crb(c,2)) { goto L_800B6F8C; } // 800B6F14
  goto L_800B6FDC; // 800B6F18
L_800B6F1C:;
  c->r[3]=R32(c->r[28]+0x00000008u); // 800B6F1C
  c->lr=0x800B6F24u; f_800B5894(c); // 800B6F20
  c->r[30]=c->r[3]|c->r[3]; // 800B6F24
  c->r[3]=c->r[31]+0x00000020u; // 800B6F28
  c->r[4]=c->r[30]|c->r[30]; // 800B6F2C
  c->r[5]=c->r[1]+0x00000070u; // 800B6F30
  c->lr=0x800B6F38u; f_800AECAC(c); // 800B6F34
  {uint32_t ea=c->r[1]+0x0000007Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800B6F38
  c->r[3]=c->r[1]+0x00000028u; // 800B6F3C
  {uint32_t ea=c->r[1]+0x0000008Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 800B6F40
  {uint32_t ea=c->r[1]+0x0000009Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 800B6F44
  c->lr=0x800B6F4Cu; f_8005A6D0(c); // 800B6F48
  c->r[3]=c->r[1]+0x00000028u; // 800B6F4C
  c->r[4]=c->r[1]+0x00000034u; // 800B6F50
  c->lr=0x800B6F58u; f_800B6E04(c); // 800B6F54
  c->r[3]=c->r[1]+0x0000001Cu; // 800B6F58
  c->r[4]=c->r[1]+0x00000028u; // 800B6F5C
  c->lr=0x800B6F64u; f_800B3F44(c); // 800B6F60
  fcmp(c,0,c->f[1],c->f[31]); // 800B6F64
  setcrb(c,2,crb(c,1)|crb(c,2)); // 800B6F68
  if (!crb(c,2)) { goto L_800B6F84; } // 800B6F6C
  c->r[3]=c->r[1]+0x00000028u; // 800B6F70
  c->r[4]=c->r[3]|c->r[3]; // 800B6F74
  c->lr=0x800B6F7Cu; f_800B3F44(c); // 800B6F78
  c->r[0]=rotl(c->r[30],2)&0xFFFFFFFCu; // 800B6F7C
  {uint32_t ea=c->r[29]+c->r[0]; WF32(ea,c->f[1]);} // 800B6F80
L_800B6F84:;
  c->r[28]=R32(c->r[28]+0x00000000u); // 800B6F84
  goto L_800B6FDC; // 800B6F88
L_800B6F8C:;
  c->r[30]=c->r[28]|c->r[28]; // 800B6F8C
  c->r[28]=R32(c->r[28]+0x00000000u); // 800B6F90
  c->r[4]=R32(c->r[30]+0x00000008u); // 800B6F94
  cmps(c,0,(int32_t)c->r[4],0); // 800B6F98
  if (crb(c,2)) { goto L_800B6FA4; } // 800B6F9C
  c->r[4]=c->r[4]+0x00000004u; // 800B6FA0
L_800B6FA4:;
  c->r[3]=c->r[31]+0x00000004u; // 800B6FA4
  c->lr=0x800B6FACu; f_802DDD08(c); // 800B6FA8
  c->r[5]=R32(c->r[30]+0x00000008u); // 800B6FAC
  cmps(c,0,(int32_t)c->r[5],0); // 800B6FB0
  if (crb(c,2)) { goto L_800B6FBC; } // 800B6FB4
  c->r[5]=c->r[5]+0x00000004u; // 800B6FB8
L_800B6FBC:;
  c->r[3]=c->r[31]+0x00000010u; // 800B6FBC
  c->r[4]=c->r[3]|c->r[3]; // 800B6FC0
  c->lr=0x800B6FC8u; f_802DDCA8(c); // 800B6FC4
  c->r[3]=R32(c->r[30]+0x00000008u); // 800B6FC8
  c->lr=0x800B6FD0u; f_800B5894(c); // 800B6FCC
  c->r[4]=c->r[3]|c->r[3]; // 800B6FD0
  c->r[3]=c->r[31]+0x00000020u; // 800B6FD4
  c->lr=0x800B6FDCu; f_800AE518(c); // 800B6FD8
L_800B6FDC:;
  c->r[3]=R32(c->r[28]+0x00000008u); // 800B6FDC
  c->r[0]=R32(c->r[31]+0x0000000Cu); // 800B6FE0
  cmpu(c,0,c->r[3],c->r[0]); // 800B6FE4
  if (!crb(c,2)) { IRQCHK(c); goto L_800B6F00; } // 800B6FE8
  c->r[5]=0u+0x80750000u; // 800B6FEC
  c->r[29]=0u+0x80750000u; // 800B6FF0
  c->r[5]=c->r[5]+0x000010D0u; // 800B6FF4
  c->r[3]=0u+0x00000000u; // 800B6FF8
  c->r[6]=c->r[29]+0x000011D0u; // 800B6FFC
  c->r[4]=0u+0x0000003Fu; // 800B7000
  c->lr=0x800B7008u; f_800B7164(c); // 800B7004
  c->r[29]=c->r[29]+0x000011D0u; // 800B7008
  c->r[28]=0u+0x00000000u; // 800B700C
  c->r[30]=0u+0x00000000u; // 800B7010
L_800B7014:;
  c->r[4]=R32(c->r[29]+c->r[30]); // 800B7014
  c->r[3]=c->r[31]+0x00000020u; // 800B7018
  c->lr=0x800B7020u; f_800AEBEC(c); // 800B701C
  c->r[28]=c->r[28]+0x00000001u; // 800B7020
  c->r[30]=c->r[30]+0x00000004u; // 800B7024
  cmps(c,0,(int32_t)c->r[28],8); // 800B7028
  if (crb(c,0)) { IRQCHK(c); goto L_800B7014; } // 800B702C
  c->r[29]=0u+0x80750000u; // 800B7030
  c->r[28]=0u+0x00000008u; // 800B7034
  c->r[29]=c->r[29]+0x000011D0u; // 800B7038
  c->r[30]=0u+0x00000020u; // 800B703C
L_800B7040:;
  c->r[4]=R32(c->r[29]+c->r[30]); // 800B7040
  c->r[3]=c->r[31]+0x00000020u; // 800B7044
  c->lr=0x800B704Cu; f_800AEB64(c); // 800B7048
  c->r[28]=c->r[28]+0x00000001u; // 800B704C
  c->r[30]=c->r[30]+0x00000004u; // 800B7050
  cmps(c,0,(int32_t)c->r[28],64); // 800B7054
  if (crb(c,0)) { IRQCHK(c); goto L_800B7040; } // 800B7058
L_800B705C:;
  c->r[3]=c->r[31]+0x00000020u; // 800B705C
  c->r[4]=0u+0x00000000u; // 800B7060
  c->lr=0x800B7068u; f_800AE63C(c); // 800B7064
  c->r[3]=c->r[31]+0x00010000u; // 800B7068
  c->r[0]=R32(c->r[3]+0xFFFF8250u); // 800B706C
  cmps(c,0,(int32_t)c->r[0],0); // 800B7070
  if (crb(c,2)) { goto L_800B7134; } // 800B7074
  c->r[5]=c->r[1]+0x00000034u; // 800B7078
  c->r[4]=0u+0x00000000u; // 800B707C
  c->r[3]=c->r[3]+0xFFFF8248u; // 800B7080
  c->lr=0x800B7088u; f_80338944(c); // 800B7084
  c->r[3]=c->r[31]+0x00010000u; // 800B7088
  c->r[0]=R32(c->r[3]+0xFFFF828Cu); // 800B708C
  cmps(c,0,(int32_t)c->r[0],1); // 800B7090
  if (!crb(c,2)) { goto L_800B7134; } // 800B7094
  c->r[0]=R8(c->r[13]+0xFFFFBB9Bu); // 800B7098
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800B709C
  if (!crb(c,2)) { goto L_800B70DC; } // 800B70A0
  c->r[30]=0u+0x80730000u; // 800B70A4
  c->r[3]=c->r[30]+0x00006D10u; // 800B70A8
  c->lr=0x800B70B0u; f_802D8298(c); // 800B70AC
  c->r[3]=0u+0x806D0000u; // 800B70B0
  c->r[4]=0u+0x80050000u; // 800B70B4
  c->r[3]=c->r[3]+0xFFFFC220u; // 800B70B8
  c->r[5]=0u+0x80750000u; // 800B70BC
  W32(c->r[30]+0x00006D10u,c->r[3]); // 800B70C0
  c->r[3]=c->r[30]+0x00006D10u; // 800B70C4
  c->r[4]=c->r[4]+0xFFFF9D40u; // 800B70C8
  c->r[5]=c->r[5]+0x000010C0u; // 800B70CC
  c->lr=0x800B70D4u; f_803A92B8(c); // 800B70D0
  c->r[0]=0u+0x00000001u; // 800B70D4
  W8(c->r[13]+0xFFFFBB9Bu,c->r[0]); // 800B70D8
L_800B70DC:;
  c->r[4]=0u+0x80730000u; // 800B70DC
  c->r[3]=c->r[31]+0x00010000u; // 800B70E0
  c->r[4]=c->r[4]+0x00006D10u; // 800B70E4
  {uint32_t ea=c->r[2]+0xFFFF9DC4u; c->f[2]=c->ps1[2]=RF32(ea);} // 800B70E8
  {uint32_t ea=c->r[4]+0x00000004u; c->f[3]=c->ps1[3]=RF32(ea);} // 800B70EC
  {uint32_t ea=c->r[3]+0xFFFF8288u; c->f[1]=c->ps1[1]=RF32(ea);} // 800B70F0
  {uint32_t ea=c->r[2]+0xFFFF9DBCu; c->f[0]=c->ps1[0]=RF32(ea);} // 800B70F4
  c->f[1]=c->ps1[1]=S(std::fma(c->f[2],c->f[3],c->f[1])); // 800B70F8
  {uint32_t ea=c->r[3]+0xFFFF8288u; WF32(ea,c->f[1]);} // 800B70FC
  fcmp(c,0,c->f[1],c->f[0]); // 800B7100
  setcrb(c,2,crb(c,1)|crb(c,2)); // 800B7104
  if (!crb(c,2)) { goto L_800B7118; } // 800B7108
  c->r[0]=0u+0x00000000u; // 800B710C
  {uint32_t ea=c->r[3]+0xFFFF8288u; WF32(ea,c->f[0]);} // 800B7110
  W32(c->r[3]+0xFFFF828Cu,c->r[0]); // 800B7114
L_800B7118:;
  c->r[0]=0u+0x00000000u; // 800B7118
  W8(c->r[1]+0x00000008u,c->r[0]); // 800B711C
  c->r[3]=c->r[1]+0x00000008u; // 800B7120
  c->lr=0x800B7128u; f_8004FC20(c); // 800B7124
  c->r[4]=c->r[31]+0x00010000u; // 800B7128
  {uint32_t ea=c->r[4]+0xFFFF8288u; c->f[1]=c->ps1[1]=RF32(ea);} // 800B712C
  c->lr=0x800B7134u; f_8033AC64(c); // 800B7130
L_800B7134:;
  c->r[4]=c->r[31]+0x00010000u; // 800B7134
  c->r[3]=R32(c->r[4]+0xFFFF8284u); // 800B7138
  c->r[0]=c->r[3]+0x00000001u; // 800B713C
  W32(c->r[4]+0xFFFF8284u,c->r[0]); // 800B7140
  {uint32_t ea=c->r[1]+0x000000B8u; psq_load(c,31,ea,0,0);} // 800B7144
  {uint32_t ea=c->r[1]+0x000000B0u; c->f[31]=RF64(ea);} // 800B7148
  c->r[11]=c->r[1]+0x000000B0u; // 800B714C
  c->lr=0x800B7154u; { c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800B7150
  c->r[0]=R32(c->r[1]+0x000000C4u); // 800B7154
  c->lr=c->r[0]; // 800B7158
  c->r[1]=c->r[1]+0x000000C0u; // 800B715C
  return; // 800B7160
}

// fn_800B7164
void f_800B7164(Ctx* __restrict c) {
  trace_call(0x800B7164u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B7164
  c->r[0]=c->lr; // 800B7168
  W32(c->r[1]+0x00000024u,c->r[0]); // 800B716C
  c->r[11]=c->r[1]+0x00000020u; // 800B7170
  c->lr=0x800B7178u; { W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800B7174
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[4]); // 800B7178
  c->r[28]=c->r[4]|c->r[4]; // 800B717C
  c->r[29]=c->r[5]|c->r[5]; // 800B7180
  c->r[30]=c->r[6]|c->r[6]; // 800B7184
  if (crb(c,1)) { goto L_800B7264; } // 800B7188
  c->r[0]=c->r[3]+c->r[4]; // 800B718C
  c->r[11]=c->r[3]|c->r[3]; // 800B7190
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFCu; // 800B7194
  c->r[31]=c->r[28]|c->r[28]; // 800B7198
  c->r[0]=R32(c->r[6]+c->r[0]); // 800B719C
  c->r[7]=rotl(c->r[3],2)&0xFFFFFFFCu; // 800B71A0
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800B71A4
  {uint32_t ea=c->r[5]+c->r[0]; c->f[1]=c->ps1[1]=RF32(ea);} // 800B71A8
  goto L_800B71B8; // 800B71AC
L_800B71B0:;
  c->r[11]=c->r[11]+0x00000001u; // 800B71B0
  c->r[7]=c->r[7]+0x00000004u; // 800B71B4
L_800B71B8:;
  c->r[9]=R32(c->r[6]+c->r[7]); // 800B71B8
  c->r[0]=rotl(c->r[9],2)&0xFFFFFFFCu; // 800B71BC
  {uint32_t ea=c->r[5]+c->r[0]; c->f[0]=c->ps1[0]=RF32(ea);} // 800B71C0
  fcmp(c,0,c->f[0],c->f[1]); // 800B71C4
  c->r[0]=c->cr; // 800B71C8
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 800B71CC
  if (crb(c,2)) { goto L_800B71DC; } // 800B71D0
  cmps(c,0,(int32_t)c->r[11],(int32_t)c->r[4]); // 800B71D4
  if (!crb(c,1)) { IRQCHK(c); goto L_800B71B0; } // 800B71D8
L_800B71DC:;
  c->r[8]=rotl(c->r[31],2)&0xFFFFFFFCu; // 800B71DC
  goto L_800B71EC; // 800B71E0
L_800B71E4:;
  c->r[31]=c->r[31]+0xFFFFFFFFu; // 800B71E4
  c->r[8]=c->r[8]+0xFFFFFFFCu; // 800B71E8
L_800B71EC:;
  c->r[10]=R32(c->r[6]+c->r[8]); // 800B71EC
  c->r[0]=rotl(c->r[10],2)&0xFFFFFFFCu; // 800B71F0
  {uint32_t ea=c->r[5]+c->r[0]; c->f[0]=c->ps1[0]=RF32(ea);} // 800B71F4
  fcmp(c,0,c->f[0],c->f[1]); // 800B71F8
  c->r[0]=c->cr; // 800B71FC
  c->r[0]=rotl(c->r[0],2)&0x00000001u; cr0(c,c->r[0]); // 800B7200
  if (crb(c,2)) { goto L_800B7210; } // 800B7204
  cmps(c,0,(int32_t)c->r[31],(int32_t)c->r[3]); // 800B7208
  if (!crb(c,0)) { IRQCHK(c); goto L_800B71E4; } // 800B720C
L_800B7210:;
  cmps(c,0,(int32_t)c->r[11],(int32_t)c->r[31]); // 800B7210
  if (!crb(c,0)) { goto L_800B7230; } // 800B7214
  W32(c->r[6]+c->r[7],c->r[10]); // 800B7218
  c->r[11]=c->r[11]+0x00000001u; // 800B721C
  c->r[7]=c->r[7]+0x00000004u; // 800B7220
  c->r[31]=c->r[31]+0xFFFFFFFFu; // 800B7224
  W32(c->r[6]+c->r[8],c->r[9]); // 800B7228
  IRQCHK(c); goto L_800B71B8; // 800B722C
L_800B7230:;
  c->r[4]=c->r[11]+0xFFFFFFFFu; // 800B7230
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[4]); // 800B7234
  if (!crb(c,0)) { goto L_800B7248; } // 800B7238
  c->r[5]=c->r[29]|c->r[29]; // 800B723C
  c->r[6]=c->r[30]|c->r[30]; // 800B7240
  c->lr=0x800B7248u; f_800B7164(c); // 800B7244
L_800B7248:;
  c->r[3]=c->r[31]+0x00000001u; // 800B7248
  cmps(c,0,(int32_t)c->r[28],(int32_t)c->r[3]); // 800B724C
  if (!crb(c,1)) { goto L_800B7264; } // 800B7250
  c->r[4]=c->r[28]|c->r[28]; // 800B7254
  c->r[5]=c->r[29]|c->r[29]; // 800B7258
  c->r[6]=c->r[30]|c->r[30]; // 800B725C
  c->lr=0x800B7264u; f_800B7164(c); // 800B7260
L_800B7264:;
  c->r[11]=c->r[1]+0x00000020u; // 800B7264
  c->lr=0x800B726Cu; { c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800B7268
  c->r[0]=R32(c->r[1]+0x00000024u); // 800B726C
  c->lr=c->r[0]; // 800B7270
  c->r[1]=c->r[1]+0x00000020u; // 800B7274
  return; // 800B7278
}

// fn_800B727C
void f_800B727C(Ctx* __restrict c) {
  trace_call(0x800B727Cu);
  c->r[3]=c->r[3]+0x00000044u; // 800B727C
  return; // 800B7280
}

// fn_800B7284
void f_800B7284(Ctx* __restrict c) {
  trace_call(0x800B7284u);
  c->r[5]=c->r[3]+0x00010000u; // 800B7284
  c->r[4]=0u+0x00000001u; // 800B7288
  c->r[0]=R32(c->r[5]+0xFFFF8244u); // 800B728C
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)60); // 800B7290
  c->r[3]=c->r[3]+c->r[0]; // 800B7294
  c->r[3]=c->r[3]+0x00006444u; // 800B7298
  f_80320C3C(c); return; // 800B729C
}

// fn_800B72A0
void f_800B72A0(Ctx* __restrict c) {
  trace_call(0x800B72A0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B72A0
  c->r[0]=c->lr; // 800B72A4
  cmps(c,0,(int32_t)c->r[4],0); // 800B72A8
  W32(c->r[1]+0x00000024u,c->r[0]); // 800B72AC
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800B72B0
  c->r[29]=c->r[3]|c->r[3]; // 800B72B4
  c->r[30]=c->r[4]|c->r[4]; // 800B72B8
  if (crb(c,2)) { goto L_800B730C; } // 800B72BC
  c->r[4]=c->r[3]+0x00010000u; // 800B72C0
  c->r[0]=R32(c->r[4]+0xFFFF8244u); // 800B72C4
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)60); // 800B72C8
  c->r[4]=c->r[3]+c->r[0]; // 800B72CC
  c->r[3]=c->r[30]|c->r[30]; // 800B72D0
  c->r[31]=c->r[4]+0x00006444u; // 800B72D4
  c->r[4]=c->r[31]|c->r[31]; // 800B72D8
  c->lr=0x800B72E0u; f_80382F2C(c); // 800B72DC
  c->r[3]=c->r[31]+0x00000030u; // 800B72E0
  c->r[4]=c->r[30]+0x00000030u; // 800B72E4
  c->lr=0x800B72ECu; f_80495690(c); // 800B72E8
  c->r[4]=c->r[29]+0x00010000u; // 800B72EC
  c->r[3]=R32(c->r[4]+0xFFFF8244u); // 800B72F0
  c->r[0]=c->r[3]+0x00000001u; // 800B72F4
  W32(c->r[4]+0xFFFF8244u,c->r[0]); // 800B72F8
  cmps(c,0,(int32_t)c->r[0],128); // 800B72FC
  if (crb(c,0)) { goto L_800B730C; } // 800B7300
  c->r[0]=0u+0x00000000u; // 800B7304
  W32(c->r[4]+0xFFFF8244u,c->r[0]); // 800B7308
L_800B730C:;
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800B730C
  c->r[0]=R32(c->r[1]+0x00000024u); // 800B7310
  c->lr=c->r[0]; // 800B7314
  c->r[1]=c->r[1]+0x00000020u; // 800B7318
  return; // 800B731C
}

// fn_800B7320
void f_800B7320(Ctx* __restrict c) {
  trace_call(0x800B7320u);
  cmpu(c,0,c->r[4],0x0000003Fu); // 800B7320
  if (!crb(c,1)) { goto L_800B732C; } // 800B7324
  c->r[4]=0u+0x00000000u; // 800B7328
L_800B732C:;
  c->r[3]=c->r[3]+0x00000020u; // 800B732C
  f_800AEDF0(c); return; // 800B7330
}

// fn_800B7334
void f_800B7334(Ctx* __restrict c) {
  trace_call(0x800B7334u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B7334
  c->r[0]=c->lr; // 800B7338
  W32(c->r[1]+0x00000024u,c->r[0]); // 800B733C
  c->r[11]=c->r[1]+0x00000020u; // 800B7340
  c->lr=0x800B7348u; { W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800B7344
  c->r[4]=c->r[3]+0x00010000u; // 800B7348
  c->r[31]=0u+0x00000000u; // 800B734C
  W32(c->r[3]+0x0000001Cu,c->r[31]); // 800B7350
  c->r[29]=c->r[3]|c->r[3]; // 800B7354
  c->r[30]=0u+0x00000000u; // 800B7358
  W32(c->r[4]+0xFFFF8244u,c->r[31]); // 800B735C
L_800B7360:;
  c->r[3]=c->r[29]+c->r[31]; // 800B7360
  c->r[4]=0u+0x00000001u; // 800B7364
  c->r[3]=c->r[3]+0x00006444u; // 800B7368
  c->lr=0x800B7370u; f_80320C3C(c); // 800B736C
  c->r[30]=c->r[30]+0x00000001u; // 800B7370
  c->r[31]=c->r[31]+0x0000003Cu; // 800B7374
  cmps(c,0,(int32_t)c->r[30],128); // 800B7378
  if (crb(c,0)) { IRQCHK(c); goto L_800B7360; } // 800B737C
  c->r[3]=c->r[29]+0x00010000u; // 800B7380
  {uint32_t ea=c->r[2]+0xFFFF9DB0u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B7384
  c->r[0]=0u+0x00000000u; // 800B7388
  W32(c->r[3]+0xFFFF8284u,c->r[0]); // 800B738C
  c->r[11]=c->r[1]+0x00000020u; // 800B7390
  {uint32_t ea=c->r[3]+0xFFFF8288u; WF32(ea,c->f[0]);} // 800B7394
  W32(c->r[3]+0xFFFF828Cu,c->r[0]); // 800B7398
  c->lr=0x800B73A0u; { c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800B739C
  c->r[0]=R32(c->r[1]+0x00000024u); // 800B73A0
  c->lr=c->r[0]; // 800B73A4
  c->r[1]=c->r[1]+0x00000020u; // 800B73A8
  return; // 800B73AC
}

// fn_800B73B0
void f_800B73B0(Ctx* __restrict c) {
  trace_call(0x800B73B0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B73B0
  c->r[0]=c->lr; // 800B73B4
  c->r[4]=0u+0x806D0000u; // 800B73B8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B73BC
  c->r[4]=c->r[4]+0x00006898u; // 800B73C0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800B73C4
  c->r[31]=c->r[3]|c->r[3]; // 800B73C8
  W32(c->r[3]+0x00000000u,c->r[4]); // 800B73CC
  c->lr=0x800B73D4u; f_800B77BC(c); // 800B73D0
  c->r[3]=c->r[31]|c->r[31]; // 800B73D4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800B73D8
  c->r[0]=R32(c->r[1]+0x00000014u); // 800B73DC
  c->lr=c->r[0]; // 800B73E0
  c->r[1]=c->r[1]+0x00000010u; // 800B73E4
  return; // 800B73E8
}

// fn_800B73EC
void f_800B73EC(Ctx* __restrict c) {
  trace_call(0x800B73ECu);
  return; // 800B73EC
}

// fn_800B73F0
void f_800B73F0(Ctx* __restrict c) {
  trace_call(0x800B73F0u);
  {uint32_t ea=c->r[1]+0xFFFFFF70u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B73F0
  c->r[0]=c->lr; // 800B73F4
  W32(c->r[1]+0x00000094u,c->r[0]); // 800B73F8
  c->r[11]=c->r[1]+0x00000040u; // 800B73FC
  {uint32_t ea=c->r[1]+0x00000080u; WF64(ea,c->f[31]);} // 800B7400
  {uint32_t ea=c->r[1]+0x00000088u; psq_store(c,31,ea,0,0);} // 800B7404
  {uint32_t ea=c->r[1]+0x00000070u; WF64(ea,c->f[30]);} // 800B7408
  {uint32_t ea=c->r[1]+0x00000078u; psq_store(c,30,ea,0,0);} // 800B740C
  {uint32_t ea=c->r[1]+0x00000060u; WF64(ea,c->f[29]);} // 800B7410
  {uint32_t ea=c->r[1]+0x00000068u; psq_store(c,29,ea,0,0);} // 800B7414
  {uint32_t ea=c->r[1]+0x00000050u; WF64(ea,c->f[28]);} // 800B7418
  {uint32_t ea=c->r[1]+0x00000058u; psq_store(c,28,ea,0,0);} // 800B741C
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[27]);} // 800B7420
  {uint32_t ea=c->r[1]+0x00000048u; psq_store(c,27,ea,0,0);} // 800B7424
  c->lr=0x800B742Cu; { W32(c->r[11]+0xFFFFFFD0u,c->r[20]); W32(c->r[11]+0xFFFFFFD4u,c->r[21]); W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800B7428
  c->r[20]=0u+0x80730000u; // 800B742C
  c->r[21]=0u+0x806D0000u; // 800B7430
  c->r[27]=0u+0x806D0000u; // 800B7434
  {uint32_t ea=c->r[2]+0xFFFF9DCCu; c->f[27]=c->ps1[27]=RF32(ea);} // 800B7438
  {uint32_t ea=c->r[2]+0xFFFF9DD4u; c->f[30]=c->ps1[30]=RF32(ea);} // 800B743C
  c->r[29]=c->r[3]|c->r[3]; // 800B7440
  {uint32_t ea=c->r[2]+0xFFFF9DD8u; c->f[31]=c->ps1[31]=RF32(ea);} // 800B7444
  c->r[21]=c->r[21]+0xFFFFC220u; // 800B7448
  {uint32_t ea=c->r[2]+0xFFFF9DD0u; c->f[28]=c->ps1[28]=RF32(ea);} // 800B744C
  c->r[27]=c->r[27]+0xFFFFCD3Cu; // 800B7450
  {uint32_t ea=c->r[2]+0xFFFF9DC8u; c->f[29]=c->ps1[29]=RF32(ea);} // 800B7454
  c->r[25]=c->r[20]+0x00006D10u; // 800B7458
  c->r[30]=0u+0x00000000u; // 800B745C
  c->r[28]=0u+0x00000000u; // 800B7460
  c->r[22]=0u+0x80050000u; // 800B7464
  c->r[23]=0u+0x80750000u; // 800B7468
  c->r[24]=0u+0x00000001u; // 800B746C
  c->r[26]=0u+0x80740000u; // 800B7470
L_800B7474:;
  c->r[31]=c->r[29]+c->r[28]; // 800B7474
  {uint32_t ea=c->r[31]+0x00000018u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B7478
  fcmp(c,0,c->f[0],c->f[29]); // 800B747C
  setcrb(c,2,crb(c,1)|crb(c,2)); // 800B7480
  if (!crb(c,2)) { goto L_800B754C; } // 800B7484
  c->r[0]=R8(c->r[13]+0xFFFFBB9Bu); // 800B7488
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800B748C
  if (!crb(c,2)) { goto L_800B74B4; } // 800B7490
  c->r[3]=c->r[20]+0x00006D10u; // 800B7494
  c->lr=0x800B749Cu; f_802D8298(c); // 800B7498
  W32(c->r[20]+0x00006D10u,c->r[21]); // 800B749C
  c->r[3]=c->r[20]+0x00006D10u; // 800B74A0
  c->r[4]=c->r[22]+0xFFFF9D40u; // 800B74A4
  c->r[5]=c->r[23]+0x000012E8u; // 800B74A8
  c->lr=0x800B74B0u; f_803A92B8(c); // 800B74AC
  W8(c->r[13]+0xFFFFBB9Bu,c->r[24]); // 800B74B0
L_800B74B4:;
  {uint32_t ea=c->r[25]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 800B74B4
  {uint32_t ea=c->r[31]+0x00000018u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B74B8
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 800B74BC
  {uint32_t ea=c->r[31]+0x00000018u; WF32(ea,c->f[0]);} // 800B74C0
  fcmp(c,0,c->f[0],c->f[29]); // 800B74C4
  if (!crb(c,0)) { goto L_800B754C; } // 800B74C8
  {uint32_t ea=c->r[31]+0x0000001Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800B74CC
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[27]); // 800B74D0
  {uint32_t ea=c->r[31]+0x00000018u; WF32(ea,c->f[0]);} // 800B74D4
  {uint32_t ea=c->r[31]+0x0000001Cu; WF32(ea,c->f[0]);} // 800B74D8
  c->r[0]=R8(c->r[13]+0xFFFFBBF8u); // 800B74DC
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800B74E0
  if (!crb(c,2)) { goto L_800B74F0; } // 800B74E4
  W32(c->r[26]+0x00002350u,c->r[27]); // 800B74E8
  W8(c->r[13]+0xFFFFBBF8u,c->r[24]); // 800B74EC
L_800B74F0:;
  c->r[4]=R32(c->r[31]+0x00000010u); // 800B74F0
  c->r[3]=c->r[26]+0x00002350u; // 800B74F4
  c->r[5]=R32(c->r[31]+0x00000014u); // 800B74F8
  c->r[6]=0u+0x00000000u; // 800B74FC
  {uint32_t ea=c->r[31]+0x00000020u; c->f[1]=c->ps1[1]=RF32(ea);} // 800B7500
  c->lr=0x800B7508u; f_800ADAE4(c); // 800B7504
  {uint32_t ea=c->r[31]+0x00000020u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B7508
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[28]); // 800B750C
  {uint32_t ea=c->r[31]+0x00000020u; WF32(ea,c->f[0]);} // 800B7510
  {uint32_t ea=c->r[31]+0x00000018u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B7514
  fcmp(c,0,c->f[0],c->f[29]); // 800B7518
  if (!crb(c,0)) { goto L_800B754C; } // 800B751C
  c->f[1]=c->f[29]; // 800B7520
  c->r[3]=c->r[29]+c->r[28]; // 800B7524
  c->f[2]=c->f[29]; // 800B7528
  c->r[3]=c->r[3]+0x00000004u; // 800B752C
  c->f[3]=c->f[29]; // 800B7530
  c->lr=0x800B7538u; f_8005A6D0(c); // 800B7534
  c->r[3]=c->r[29]+c->r[28]; // 800B7538
  c->f[0]=c->ps1[0]=S(c->f[30]); // 800B753C
  {uint32_t ea=c->r[3]+0x00000018u; WF32(ea,c->f[30]);} // 800B7540
  {uint32_t ea=c->r[31]+0x0000001Cu; WF32(ea,c->f[0]);} // 800B7544
  {uint32_t ea=c->r[31]+0x00000020u; WF32(ea,c->f[31]);} // 800B7548
L_800B754C:;
  c->r[30]=c->r[30]+0x00000001u; // 800B754C
  c->r[28]=c->r[28]+0x00000020u; // 800B7550
  cmps(c,0,(int32_t)c->r[30],2); // 800B7554
  if (crb(c,0)) { IRQCHK(c); goto L_800B7474; } // 800B7558
  c->r[11]=c->r[1]+0x00000040u; // 800B755C
  {uint32_t ea=c->r[1]+0x00000088u; psq_load(c,31,ea,0,0);} // 800B7560
  {uint32_t ea=c->r[1]+0x00000080u; c->f[31]=RF64(ea);} // 800B7564
  {uint32_t ea=c->r[1]+0x00000078u; psq_load(c,30,ea,0,0);} // 800B7568
  {uint32_t ea=c->r[1]+0x00000070u; c->f[30]=RF64(ea);} // 800B756C
  {uint32_t ea=c->r[1]+0x00000068u; psq_load(c,29,ea,0,0);} // 800B7570
  {uint32_t ea=c->r[1]+0x00000060u; c->f[29]=RF64(ea);} // 800B7574
  {uint32_t ea=c->r[1]+0x00000058u; psq_load(c,28,ea,0,0);} // 800B7578
  {uint32_t ea=c->r[1]+0x00000050u; c->f[28]=RF64(ea);} // 800B757C
  {uint32_t ea=c->r[1]+0x00000048u; psq_load(c,27,ea,0,0);} // 800B7580
  {uint32_t ea=c->r[1]+0x00000040u; c->f[27]=RF64(ea);} // 800B7584
  c->lr=0x800B758Cu; { c->r[20]=R32(c->r[11]+0xFFFFFFD0u); c->r[21]=R32(c->r[11]+0xFFFFFFD4u); c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800B7588
  c->r[0]=R32(c->r[1]+0x00000094u); // 800B758C
  c->lr=c->r[0]; // 800B7590
  c->r[1]=c->r[1]+0x00000090u; // 800B7594
  return; // 800B7598
}

// fn_800B759C
void f_800B759C(Ctx* __restrict c) {
  trace_call(0x800B759Cu);
  {uint32_t ea=c->r[1]+0xFFFFFC60u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B759C
  c->r[0]=c->lr; // 800B75A0
  W32(c->r[1]+0x000003A4u,c->r[0]); // 800B75A4
  c->r[11]=c->r[1]+0x000003A0u; // 800B75A8
  c->lr=0x800B75B0u; { W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800B75AC
  c->r[0]=R8(c->r[13]+0xFFFFBB9Au); // 800B75B0
  c->r[6]=0u+0x00000000u; // 800B75B4
  W32(c->r[1]+0x0000037Cu,c->r[6]); // 800B75B8
  c->r[29]=c->r[3]|c->r[3]; // 800B75BC
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800B75C0
  c->r[28]=c->r[4]|c->r[4]; // 800B75C4
  c->r[30]=c->r[5]|c->r[5]; // 800B75C8
  if (!crb(c,2)) { goto L_800B7608; } // 800B75CC
  c->r[31]=0u+0x80730000u; // 800B75D0
  c->r[3]=c->r[31]+0x000069F8u; // 800B75D4
  c->lr=0x800B75DCu; f_80299654(c); // 800B75D8
  c->r[3]=0u+0x806D0000u; // 800B75DC
  c->r[4]=0u+0x80050000u; // 800B75E0
  c->r[3]=c->r[3]+0xFFFFC230u; // 800B75E4
  c->r[5]=0u+0x80750000u; // 800B75E8
  W32(c->r[31]+0x000069F8u,c->r[3]); // 800B75EC
  c->r[3]=c->r[31]+0x000069F8u; // 800B75F0
  c->r[4]=c->r[4]+0xFFFF9D7Cu; // 800B75F4
  c->r[5]=c->r[5]+0x000012DCu; // 800B75F8
  c->lr=0x800B7600u; f_803A92B8(c); // 800B75FC
  c->r[0]=0u+0x00000001u; // 800B7600
  W8(c->r[13]+0xFFFFBB9Au,c->r[0]); // 800B7604
L_800B7608:;
  c->r[3]=0u+0x80730000u; // 800B7608
  c->r[3]=c->r[3]+0x000069F8u; // 800B760C
  c->r[3]=R32(c->r[3]+0x00000004u); // 800B7610
  c->lr=0x800B7618u; f_804CC8D4(c); // 800B7614
  W32(c->r[1]+0x00000018u,c->r[3]); // 800B7618
  c->r[3]=c->r[1]+0x00000018u; // 800B761C
  c->r[4]=c->r[1]+0x00000028u; // 800B7620
  c->lr=0x800B7628u; f_804C7AC0(c); // 800B7624
  c->r[3]=c->r[1]+0x0000001Cu; // 800B7628
  c->r[4]=c->r[1]+0x00000028u; // 800B762C
  c->lr=0x800B7634u; f_8005DC84(c); // 800B7630
  {uint32_t ea=c->r[1]+0x00000020u; c->f[1]=c->ps1[1]=RF32(ea);} // 800B7634
  {uint32_t ea=c->r[2]+0xFFFF9DDCu; c->f[0]=c->ps1[0]=RF32(ea);} // 800B7638
  c->r[0]=R8(c->r[13]+0xFFFFBB88u); // 800B763C
  c->f[0]=c->ps1[0]=S(c->f[1]-c->f[0]); // 800B7640
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800B7644
  {uint32_t ea=c->r[1]+0x00000020u; WF32(ea,c->f[0]);} // 800B7648
  if (!crb(c,2)) { goto L_800B7690; } // 800B764C
  c->r[31]=0u+0x80730000u; // 800B7650
  c->r[3]=c->r[31]+0x00006378u; // 800B7654
  c->lr=0x800B765Cu; f_800B0D5C(c); // 800B7658
  c->r[6]=0u+0x806D0000u; // 800B765C
  c->r[4]=0u+0x80050000u; // 800B7660
  c->r[6]=c->r[6]+0xFFFFC340u; // 800B7664
  c->r[3]=c->r[31]+0x00006378u; // 800B7668
  c->r[0]=c->r[6]+0x00000028u; // 800B766C
  c->r[5]=0u+0x80750000u; // 800B7670
  W32(c->r[3]+0x000000A4u,c->r[6]); // 800B7674
  c->r[4]=c->r[4]+0xFFFF9F20u; // 800B7678
  c->r[5]=c->r[5]+0x000012D0u; // 800B767C
  W32(c->r[3]+0x000000A8u,c->r[0]); // 800B7680
  c->lr=0x800B7688u; f_803A92B8(c); // 800B7684
  c->r[0]=0u+0x00000001u; // 800B7688
  W8(c->r[13]+0xFFFFBB88u,c->r[0]); // 800B768C
L_800B7690:;
  c->r[31]=0u+0x00000000u; // 800B7690
  W32(c->r[1]+0x00000008u,c->r[31]); // 800B7694
  c->r[3]=0u+0x80730000u; // 800B7698
  {uint32_t ea=c->r[2]+0xFFFF9DC8u; c->f[1]=c->ps1[1]=RF32(ea);} // 800B769C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800B76A0
  c->r[0]=0u+0x00000019u; // 800B76A4
  c->r[4]=c->r[28]|c->r[28]; // 800B76A8
  c->r[3]=c->r[3]+0x00006378u; // 800B76AC
  W32(c->r[1]+0x00000010u,c->r[0]); // 800B76B0
  c->r[5]=c->r[1]+0x00000028u; // 800B76B4
  c->r[6]=c->r[1]+0x0000001Cu; // 800B76B8
  c->r[9]=c->r[1]+0x00000034u; // 800B76BC
  c->r[7]=0u+0x00000001u; // 800B76C0
  c->r[8]=0u+0x00000000u; // 800B76C4
  c->r[10]=0u+0x00000000u; // 800B76C8
  c->lr=0x800B76D0u; f_800B1EB0(c); // 800B76CC
  cmps(c,0,(int32_t)c->r[3],1); // 800B76D0
  if (crb(c,2)) { goto L_800B76E0; } // 800B76D4
  W32(c->r[1]+0x0000037Cu,c->r[31]); // 800B76D8
  goto L_800B77A4; // 800B76DC
L_800B76E0:;
  c->r[0]=R32(c->r[29]+0x00000044u); // 800B76E0
  c->r[4]=c->r[1]+0x00000028u; // 800B76E4
  c->r[0]=rotl(c->r[0],5)&0xFFFFFFE0u; // 800B76E8
  c->r[3]=c->r[29]+c->r[0]; // 800B76EC
  c->r[3]=c->r[3]+0x00000004u; // 800B76F0
  c->lr=0x800B76F8u; f_8005DC84(c); // 800B76F4
  c->r[0]=R32(c->r[29]+0x00000044u); // 800B76F8
  c->r[4]=R32(c->r[1]+0x0000004Cu); // 800B76FC
  c->r[0]=rotl(c->r[0],5)&0xFFFFFFE0u; // 800B7700
  c->r[3]=c->r[29]+c->r[0]; // 800B7704
  c->r[0]=rotl(c->r[4],0)&0x000000FFu; // 800B7708
  W32(c->r[3]+0x00000010u,c->r[0]); // 800B770C
  c->r[0]=R32(c->r[29]+0x00000044u); // 800B7710
  c->r[0]=rotl(c->r[0],5)&0xFFFFFFE0u; // 800B7714
  c->r[3]=c->r[29]+c->r[0]; // 800B7718
  W32(c->r[3]+0x00000014u,c->r[30]); // 800B771C
  c->lr=0x800B7724u; f_803B220C(c); // 800B7720
  c->r[3]=c->r[3]^0x80000000u; // 800B7724
  c->r[0]=0u+0x43300000u; // 800B7728
  W32(c->r[1]+0x00000380u,c->r[0]); // 800B772C
  {uint32_t ea=c->r[2]+0xFFFF9DE8u; c->f[1]=RF64(ea);} // 800B7730
  W32(c->r[1]+0x00000384u,c->r[3]); // 800B7734
  c->r[0]=R32(c->r[29]+0x00000044u); // 800B7738
  {uint32_t ea=c->r[1]+0x00000380u; c->f[0]=RF64(ea);} // 800B773C
  {uint32_t ea=c->r[2]+0xFFFF9DE4u; c->f[2]=c->ps1[2]=RF32(ea);} // 800B7740
  c->r[0]=rotl(c->r[0],5)&0xFFFFFFE0u; // 800B7744
  c->f[3]=c->ps1[3]=S(c->f[0]-c->f[1]); // 800B7748
  {uint32_t ea=c->r[2]+0xFFFF9DE0u; c->f[1]=c->ps1[1]=RF32(ea);} // 800B774C
  c->r[3]=c->r[29]+c->r[0]; // 800B7750
  {uint32_t ea=c->r[2]+0xFFFF9DD8u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B7754
  c->f[1]=c->ps1[1]=S(std::fma(c->f[2],c->f[3],c->f[1])); // 800B7758
  {uint32_t ea=c->r[3]+0x00000018u; WF32(ea,c->f[1]);} // 800B775C
  c->r[0]=R32(c->r[29]+0x00000044u); // 800B7760
  c->r[0]=rotl(c->r[0],5)&0xFFFFFFE0u; // 800B7764
  c->r[3]=c->r[29]+c->r[0]; // 800B7768
  {uint32_t ea=c->r[3]+0x00000018u; c->f[1]=c->ps1[1]=RF32(ea);} // 800B776C
  {uint32_t ea=c->r[3]+0x0000001Cu; WF32(ea,c->f[1]);} // 800B7770
  c->r[0]=R32(c->r[29]+0x00000044u); // 800B7774
  c->r[0]=rotl(c->r[0],5)&0xFFFFFFE0u; // 800B7778
  c->r[3]=c->r[29]+c->r[0]; // 800B777C
  {uint32_t ea=c->r[3]+0x00000020u; WF32(ea,c->f[0]);} // 800B7780
  c->r[3]=R32(c->r[29]+0x00000044u); // 800B7784
  c->r[0]=c->r[3]+0x00000001u; // 800B7788
  W32(c->r[29]+0x00000044u,c->r[0]); // 800B778C
  cmps(c,0,(int32_t)c->r[0],2); // 800B7790
  if (crb(c,0)) { goto L_800B779C; } // 800B7794
  W32(c->r[29]+0x00000044u,c->r[31]); // 800B7798
L_800B779C:;
  c->r[0]=0u+0x00000000u; // 800B779C
  W32(c->r[1]+0x0000037Cu,c->r[0]); // 800B77A0
L_800B77A4:;
  c->r[11]=c->r[1]+0x000003A0u; // 800B77A4
  c->lr=0x800B77ACu; { c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800B77A8
  c->r[0]=R32(c->r[1]+0x000003A4u); // 800B77AC
  c->lr=c->r[0]; // 800B77B0
  c->r[1]=c->r[1]+0x000003A0u; // 800B77B4
  return; // 800B77B8
}

// fn_800B77BC
void f_800B77BC(Ctx* __restrict c) {
  trace_call(0x800B77BCu);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B77BC
  c->r[0]=c->lr; // 800B77C0
  W32(c->r[1]+0x00000044u,c->r[0]); // 800B77C4
  c->r[11]=c->r[1]+0x00000020u; // 800B77C8
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[31]);} // 800B77CC
  {uint32_t ea=c->r[1]+0x00000038u; psq_store(c,31,ea,0,0);} // 800B77D0
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[30]);} // 800B77D4
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,30,ea,0,0);} // 800B77D8
  c->lr=0x800B77E0u; { W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800B77DC
  c->r[29]=0u+0x00000000u; // 800B77E0
  {uint32_t ea=c->r[2]+0xFFFF9DD4u; c->f[30]=c->ps1[30]=RF32(ea);} // 800B77E4
  {uint32_t ea=c->r[2]+0xFFFF9DD8u; c->f[31]=c->ps1[31]=RF32(ea);} // 800B77E8
  c->r[28]=c->r[3]|c->r[3]; // 800B77EC
  c->r[30]=c->r[29]|c->r[29]; // 800B77F0
  c->r[31]=0u+0x00000000u; // 800B77F4
L_800B77F8:;
  {uint32_t ea=c->r[2]+0xFFFF9DC8u; c->f[1]=c->ps1[1]=RF32(ea);} // 800B77F8
  c->r[3]=c->r[28]+c->r[31]; // 800B77FC
  c->r[3]=c->r[3]+0x00000004u; // 800B7800
  c->f[2]=c->f[1]; // 800B7804
  c->f[3]=c->f[1]; // 800B7808
  c->lr=0x800B7810u; f_8005A6D0(c); // 800B780C
  c->r[3]=c->r[28]+c->r[31]; // 800B7810
  c->r[29]=c->r[29]+0x00000001u; // 800B7814
  W32(c->r[3]+0x00000010u,c->r[30]); // 800B7818
  cmps(c,0,(int32_t)c->r[29],2); // 800B781C
  c->r[31]=c->r[31]+0x00000020u; // 800B7820
  {uint32_t ea=c->r[3]+0x00000018u; WF32(ea,c->f[30]);} // 800B7824
  {uint32_t ea=c->r[3]+0x0000001Cu; WF32(ea,c->f[30]);} // 800B7828
  {uint32_t ea=c->r[3]+0x00000020u; WF32(ea,c->f[31]);} // 800B782C
  if (crb(c,0)) { IRQCHK(c); goto L_800B77F8; } // 800B7830
  c->r[0]=0u+0x00000000u; // 800B7834
  W32(c->r[28]+0x00000044u,c->r[0]); // 800B7838
  {uint32_t ea=c->r[1]+0x00000038u; psq_load(c,31,ea,0,0);} // 800B783C
  {uint32_t ea=c->r[1]+0x00000030u; c->f[31]=RF64(ea);} // 800B7840
  {uint32_t ea=c->r[1]+0x00000028u; psq_load(c,30,ea,0,0);} // 800B7844
  {uint32_t ea=c->r[1]+0x00000020u; c->f[30]=RF64(ea);} // 800B7848
  c->r[11]=c->r[1]+0x00000020u; // 800B784C
  c->lr=0x800B7854u; { c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800B7850
  c->r[0]=R32(c->r[1]+0x00000044u); // 800B7854
  c->lr=c->r[0]; // 800B7858
  c->r[1]=c->r[1]+0x00000040u; // 800B785C
  return; // 800B7860
}

// fn_800B7864
void f_800B7864(Ctx* __restrict c) {
  trace_call(0x800B7864u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B7864
  c->r[0]=c->lr; // 800B7868
  c->r[4]=0u+0x806D0000u; // 800B786C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B7870
  c->r[4]=c->r[4]+0x00006F04u; // 800B7874
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800B7878
  c->r[31]=c->r[3]|c->r[3]; // 800B787C
  W32(c->r[3]+0x00000000u,c->r[4]); // 800B7880
  c->lr=0x800B7888u; f_800B8BCC(c); // 800B7884
  c->r[3]=c->r[31]|c->r[31]; // 800B7888
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800B788C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800B7890
  c->lr=c->r[0]; // 800B7894
  c->r[1]=c->r[1]+0x00000010u; // 800B7898
  return; // 800B789C
}

// dtor_800B78A0
void f_800B78A0(Ctx* __restrict c) {
  return; // 800B78A0
}

// fn_800B78A4
void f_800B78A4(Ctx* __restrict c) {
  trace_call(0x800B78A4u);
  {uint32_t ea=c->r[1]+0xFFFFFF80u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B78A4
  c->r[0]=c->lr; // 800B78A8
  W32(c->r[1]+0x00000084u,c->r[0]); // 800B78AC
  c->r[11]=c->r[1]+0x00000080u; // 800B78B0
  c->lr=0x800B78B8u; { W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800B78B4
  cmpu(c,0,c->r[4],0x00000001u); // 800B78B8
  c->r[31]=c->r[3]|c->r[3]; // 800B78BC
  c->r[24]=c->r[4]|c->r[4]; // 800B78C0
  c->r[25]=c->r[5]|c->r[5]; // 800B78C4
  c->r[26]=c->r[6]|c->r[6]; // 800B78C8
  c->r[27]=c->r[7]|c->r[7]; // 800B78CC
  c->r[28]=c->r[8]|c->r[8]; // 800B78D0
  if (!crb(c,1)) { goto L_800B78DC; } // 800B78D4
  c->r[24]=0u+0x00000000u; // 800B78D8
L_800B78DC:;
  c->r[0]=0u+0x00000000u; // 800B78DC
  W8(c->r[1]+0x00000024u,c->r[0]); // 800B78E0
  c->r[3]=c->r[1]+0x00000024u; // 800B78E4
  c->lr=0x800B78ECu; f_80046F74(c); // 800B78E8
  c->r[4]=c->r[25]|c->r[25]; // 800B78EC
  c->lr=0x800B78F4u; f_800BFC10(c); // 800B78F0
  cmpu(c,0,c->r[3],0x0000000Au); // 800B78F4
  c->r[29]=c->r[3]|c->r[3]; // 800B78F8
  if (!crb(c,1)) { goto L_800B7904; } // 800B78FC
  c->r[29]=0u+0x00000000u; // 800B7900
L_800B7904:;
  {uint32_t ea=c->r[2]+0xFFFFA000u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B7904
  c->r[30]=0u+0x00000000u; // 800B7908
  W32(c->r[31]+0x00000004u,c->r[27]); // 800B790C
  c->r[3]=c->r[1]+0x00000020u; // 800B7910
  W32(c->r[31]+0x00000008u,c->r[28]); // 800B7914
  {uint32_t ea=c->r[31]+0x0000000Cu; WF32(ea,c->f[0]);} // 800B7918
  {uint32_t ea=c->r[31]+0x00000010u; WF32(ea,c->f[0]);} // 800B791C
  W8(c->r[1]+0x00000020u,c->r[30]); // 800B7920
  c->lr=0x800B7928u; f_8004F474(c); // 800B7924
  c->r[4]=c->r[24]|c->r[24]; // 800B7928
  c->r[5]=c->r[29]|c->r[29]; // 800B792C
  c->lr=0x800B7934u; f_800B0568(c); // 800B7930
  {uint32_t ea=c->r[2]+0xFFFFA004u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B7934
  c->r[3]=c->r[29]|c->r[29]; // 800B7938
  c->f[0]=c->ps1[0]=S(c->f[0]/c->f[1]); // 800B793C
  {uint32_t ea=c->r[31]+0x00000014u; WF32(ea,c->f[0]);} // 800B7940
  c->lr=0x800B7948u; f_800B0548(c); // 800B7944
  c->r[3]=R32(c->r[3]+0x0000000Cu); // 800B7948
  c->r[0]=0u+0x00000001u; // 800B794C
  W32(c->r[31]+0x00000018u,c->r[3]); // 800B7950
  c->r[3]=c->r[1]+0x0000001Cu; // 800B7954
  W32(c->r[31]+0x0000001Cu,c->r[26]); // 800B7958
  W32(c->r[31]+0x00000020u,c->r[29]); // 800B795C
  W32(c->r[31]+0x00000024u,c->r[25]); // 800B7960
  W32(c->r[31]+0x00000028u,c->r[0]); // 800B7964
  W32(c->r[31]+0x0000002Cu,c->r[24]); // 800B7968
  W8(c->r[1]+0x0000001Cu,c->r[30]); // 800B796C
  c->lr=0x800B7974u; f_80047BE8(c); // 800B7970
  c->r[4]=R32(c->r[31]+0x0000002Cu); // 800B7974
  c->r[5]=0u+0x00000000u; // 800B7978
  c->lr=0x800B7980u; f_801B78B8(c); // 800B797C
  c->r[3]=c->r[29]|c->r[29]; // 800B7980
  c->lr=0x800B7988u; f_800B5150(c); // 800B7984
  c->r[28]=R32(c->r[3]+0x00000074u); // 800B7988
  cmps(c,0,(int32_t)c->r[28],0); // 800B798C
  if (crb(c,2)) { goto L_800B7AFC; } // 800B7990
  c->r[0]=R8(c->r[28]+0x00000000u); // 800B7994
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800B7998
  if (!crb(c,2)) { goto L_800B79BC; } // 800B799C
  W8(c->r[1]+0x00000018u,c->r[30]); // 800B79A0
  c->r[3]=c->r[1]+0x00000018u; // 800B79A4
  c->lr=0x800B79ACu; f_8004F474(c); // 800B79A8
  c->r[4]=R32(c->r[31]+0x0000002Cu); // 800B79AC
  c->r[5]=0u+0x00000002u; // 800B79B0
  c->lr=0x800B79B8u; f_800B0180(c); // 800B79B4
  c->r[28]=c->r[3]|c->r[3]; // 800B79B8
L_800B79BC:;
  c->r[30]=0u+0x00000000u; // 800B79BC
  W8(c->r[1]+0x00000014u,c->r[30]); // 800B79C0
  c->r[3]=c->r[1]+0x00000014u; // 800B79C4
  c->lr=0x800B79CCu; f_8004F474(c); // 800B79C8
  c->r[4]=R32(c->r[31]+0x0000002Cu); // 800B79CC
  c->r[5]=c->r[29]|c->r[29]; // 800B79D0
  c->r[6]=0u+0x00000000u; // 800B79D4
  c->lr=0x800B79DCu; f_800B062C(c); // 800B79D8
  {uint32_t ea=c->r[1]+0x00000028u; WF32(ea,c->f[1]);} // 800B79DC
  c->r[3]=c->r[1]+0x00000010u; // 800B79E0
  W8(c->r[1]+0x00000010u,c->r[30]); // 800B79E4
  c->lr=0x800B79ECu; f_8004F474(c); // 800B79E8
  c->r[4]=R32(c->r[31]+0x0000002Cu); // 800B79EC
  c->r[5]=c->r[29]|c->r[29]; // 800B79F0
  c->r[6]=0u+0x00000001u; // 800B79F4
  c->lr=0x800B79FCu; f_800B062C(c); // 800B79F8
  {uint32_t ea=c->r[1]+0x0000002Cu; WF32(ea,c->f[1]);} // 800B79FC
  c->r[3]=c->r[1]+0x0000000Cu; // 800B7A00
  W8(c->r[1]+0x0000000Cu,c->r[30]); // 800B7A04
  c->lr=0x800B7A0Cu; f_8004F474(c); // 800B7A08
  c->r[4]=R32(c->r[31]+0x0000002Cu); // 800B7A0C
  c->r[5]=c->r[29]|c->r[29]; // 800B7A10
  c->r[6]=0u+0x00000002u; // 800B7A14
  c->lr=0x800B7A1Cu; f_800B062C(c); // 800B7A18
  {uint32_t ea=c->r[1]+0x00000030u; WF32(ea,c->f[1]);} // 800B7A1C
  c->r[0]=R32(c->r[31]+0x00000004u); // 800B7A20
  cmps(c,0,(int32_t)c->r[0],0); // 800B7A24
  if (crb(c,2)) { goto L_800B7A4C; } // 800B7A28
  c->r[3]=R32(c->r[31]+0x00000020u); // 800B7A2C
  c->lr=0x800B7A34u; f_800B5150(c); // 800B7A30
  c->r[4]=c->r[3]|c->r[3]; // 800B7A34
  c->r[3]=R32(c->r[31]+0x00000004u); // 800B7A38
  c->r[6]=c->r[28]|c->r[28]; // 800B7A3C
  c->r[5]=c->r[1]+0x00000028u; // 800B7A40
  c->r[4]=c->r[4]+0x00000078u; // 800B7A44
  c->lr=0x800B7A4Cu; f_800BA350(c); // 800B7A48
L_800B7A4C:;
  c->r[0]=R32(c->r[31]+0x00000008u); // 800B7A4C
  cmps(c,0,(int32_t)c->r[0],0); // 800B7A50
  if (crb(c,2)) { goto L_800B7AFC; } // 800B7A54
  c->r[0]=0u+0x00000000u; // 800B7A58
  W8(c->r[1]+0x00000008u,c->r[0]); // 800B7A5C
  c->r[3]=c->r[1]+0x00000008u; // 800B7A60
  c->lr=0x800B7A68u; f_8004F474(c); // 800B7A64
  c->r[4]=R32(c->r[31]+0x0000002Cu); // 800B7A68
  c->lr=0x800B7A70u; f_800B030C(c); // 800B7A6C
  cmps(c,0,(int32_t)c->r[3],0); // 800B7A70
  if (crb(c,2)) { goto L_800B7A84; } // 800B7A74
  cmps(c,0,(int32_t)c->r[3],1); // 800B7A78
  if (crb(c,2)) { goto L_800B7AC0; } // 800B7A7C
  goto L_800B7AFC; // 800B7A80
L_800B7A84:;
  c->r[4]=0u+0x80690000u; // 800B7A84
  c->r[5]=c->r[28]|c->r[28]; // 800B7A88
  c->r[3]=c->r[1]+0x00000038u; // 800B7A8C
  c->r[4]=c->r[4]+0xFFFFE248u; // 800B7A90
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800B7A94
  c->lr=0x800B7A9Cu; f_803B1FC8(c); // 800B7A98
  c->r[3]=R32(c->r[31]+0x00000020u); // 800B7A9C
  c->lr=0x800B7AA4u; f_800B5150(c); // 800B7AA0
  c->r[4]=c->r[3]|c->r[3]; // 800B7AA4
  c->r[3]=R32(c->r[31]+0x00000008u); // 800B7AA8
  c->r[4]=c->r[4]+0x00000078u; // 800B7AAC
  c->r[5]=c->r[1]+0x00000028u; // 800B7AB0
  c->r[6]=c->r[1]+0x00000038u; // 800B7AB4
  c->lr=0x800B7ABCu; f_800BA350(c); // 800B7AB8
  goto L_800B7AFC; // 800B7ABC
L_800B7AC0:;
  c->r[4]=0u+0x80690000u; // 800B7AC0
  c->r[5]=c->r[28]|c->r[28]; // 800B7AC4
  c->r[4]=c->r[4]+0xFFFFE248u; // 800B7AC8
  c->r[3]=c->r[1]+0x00000038u; // 800B7ACC
  c->r[4]=c->r[4]+0x00000005u; // 800B7AD0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800B7AD4
  c->lr=0x800B7ADCu; f_803B1FC8(c); // 800B7AD8
  c->r[3]=R32(c->r[31]+0x00000020u); // 800B7ADC
  c->lr=0x800B7AE4u; f_800B5150(c); // 800B7AE0
  c->r[4]=c->r[3]|c->r[3]; // 800B7AE4
  c->r[3]=R32(c->r[31]+0x00000008u); // 800B7AE8
  c->r[4]=c->r[4]+0x00000078u; // 800B7AEC
  c->r[5]=c->r[1]+0x00000028u; // 800B7AF0
  c->r[6]=c->r[1]+0x00000038u; // 800B7AF4
  c->lr=0x800B7AFCu; f_800BA350(c); // 800B7AF8
L_800B7AFC:;
  c->r[11]=c->r[1]+0x00000080u; // 800B7AFC
  c->lr=0x800B7B04u; { c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800B7B00
  c->r[0]=R32(c->r[1]+0x00000084u); // 800B7B04
  c->lr=c->r[0]; // 800B7B08
  c->r[1]=c->r[1]+0x00000080u; // 800B7B0C
  return; // 800B7B10
}

// fn_800B7B14
void f_800B7B14(Ctx* __restrict c) {
  trace_call(0x800B7B14u);
  {uint32_t ea=c->r[1]+0xFFFFFF90u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B7B14
  c->r[0]=c->lr; // 800B7B18
  W32(c->r[1]+0x00000074u,c->r[0]); // 800B7B1C
  c->r[11]=c->r[1]+0x00000060u; // 800B7B20
  {uint32_t ea=c->r[1]+0x00000060u; WF64(ea,c->f[31]);} // 800B7B24
  {uint32_t ea=c->r[1]+0x00000068u; psq_store(c,31,ea,0,0);} // 800B7B28
  c->lr=0x800B7B30u; { W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800B7B2C
  c->r[0]=R32(c->r[3]+0x0000002Cu); // 800B7B30
  c->r[26]=c->r[3]|c->r[3]; // 800B7B34
  c->r[25]=c->r[4]|c->r[4]; // 800B7B38
  cmps(c,0,(int32_t)c->r[0],0); // 800B7B3C
  if (crb(c,0)) { goto L_800B7FCC; } // 800B7B40
  c->r[24]=0u+0x00000000u; // 800B7B44
  W8(c->r[1]+0x0000003Cu,c->r[24]); // 800B7B48
  c->r[3]=c->r[1]+0x0000003Cu; // 800B7B4C
  c->lr=0x800B7B54u; f_80046F74(c); // 800B7B50
  c->lr=0x800B7B58u; f_800BFDB8(c); // 800B7B54
  c->r[4]=R32(c->r[26]+0x0000002Cu); // 800B7B58
  c->r[5]=R32(c->r[26]+0x00000024u); // 800B7B5C
  c->lr=0x800B7B64u; f_800CE244(c); // 800B7B60
  W32(c->r[26]+0x0000001Cu,c->r[3]); // 800B7B64
  c->r[3]=R32(c->r[26]+0x00000020u); // 800B7B68
  c->lr=0x800B7B70u; f_800B5150(c); // 800B7B6C
  c->r[0]=R32(c->r[3]+0x0000008Cu); // 800B7B70
  c->r[0]=rotl(c->r[0],0)&0x00000040u; cr0(c,c->r[0]); // 800B7B74
  if (!crb(c,2)) { goto L_800B7BBC; } // 800B7B78
  W8(c->r[1]+0x00000038u,c->r[24]); // 800B7B7C
  c->r[3]=c->r[1]+0x00000038u; // 800B7B80
  c->lr=0x800B7B88u; f_80046F74(c); // 800B7B84
  c->lr=0x800B7B8Cu; f_800BFDB8(c); // 800B7B88
  c->r[4]=R32(c->r[26]+0x00000024u); // 800B7B8C
  c->lr=0x800B7B94u; f_800CDF14(c); // 800B7B90
  c->r[0]=R32(c->r[26]+0x0000001Cu); // 800B7B94
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[3]); // 800B7B98
  if (!crb(c,1)) { goto L_800B7BBC; } // 800B7B9C
  W8(c->r[1]+0x00000034u,c->r[24]); // 800B7BA0
  c->r[3]=c->r[1]+0x00000034u; // 800B7BA4
  c->lr=0x800B7BACu; f_80046F74(c); // 800B7BA8
  c->lr=0x800B7BB0u; f_800BFDB8(c); // 800B7BAC
  c->r[4]=R32(c->r[26]+0x00000024u); // 800B7BB0
  c->lr=0x800B7BB8u; f_800CDF14(c); // 800B7BB4
  W32(c->r[26]+0x0000001Cu,c->r[3]); // 800B7BB8
L_800B7BBC:;
  c->r[0]=R32(c->r[26]+0x00000028u); // 800B7BBC
  cmps(c,0,(int32_t)c->r[0],0); // 800B7BC0
  if (crb(c,2)) { goto L_800B7BDC; } // 800B7BC4
  cmps(c,0,(int32_t)c->r[0],2); // 800B7BC8
  if (crb(c,2)) { goto L_800B7C40; } // 800B7BCC
  cmps(c,0,(int32_t)c->r[0],4); // 800B7BD0
  if (crb(c,2)) { goto L_800B7C74; } // 800B7BD4
  goto L_800B7C8C; // 800B7BD8
L_800B7BDC:;
  c->r[24]=0u+0x00000000u; // 800B7BDC
  W8(c->r[1]+0x00000030u,c->r[24]); // 800B7BE0
  c->r[3]=c->r[1]+0x00000030u; // 800B7BE4
  c->lr=0x800B7BECu; f_8004714C(c); // 800B7BE8
  {uint32_t ea=c->r[3]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 800B7BEC
  c->r[3]=c->r[1]+0x0000002Cu; // 800B7BF0
  {uint32_t ea=c->r[26]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800B7BF4
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[1]); // 800B7BF8
  {uint32_t ea=c->r[26]+0x0000000Cu; WF32(ea,c->f[0]);} // 800B7BFC
  W8(c->r[1]+0x0000002Cu,c->r[24]); // 800B7C00
  c->lr=0x800B7C08u; f_8004F474(c); // 800B7C04
  c->r[4]=R32(c->r[26]+0x0000002Cu); // 800B7C08
  c->r[5]=R32(c->r[26]+0x00000020u); // 800B7C0C
  c->lr=0x800B7C14u; f_800B0484(c); // 800B7C10
  {uint32_t ea=c->r[26]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800B7C14
  fcmp(c,0,c->f[0],c->f[1]); // 800B7C18
  setcrb(c,2,crb(c,1)|crb(c,2)); // 800B7C1C
  if (!crb(c,2)) { goto L_800B7C8C; } // 800B7C20
  {uint32_t ea=c->r[2]+0xFFFFA000u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B7C24
  c->r[0]=0u+0x00000001u; // 800B7C28
  {uint32_t ea=c->r[26]+0x0000000Cu; WF32(ea,c->f[0]);} // 800B7C2C
  c->r[3]=c->r[26]|c->r[26]; // 800B7C30
  W32(c->r[26]+0x00000028u,c->r[0]); // 800B7C34
  c->lr=0x800B7C3Cu; f_800B9454(c); // 800B7C38
  goto L_800B7C8C; // 800B7C3C
L_800B7C40:;
  c->r[3]=R32(c->r[26]+0x00000004u); // 800B7C40
  cmps(c,0,(int32_t)c->r[3],0); // 800B7C44
  if (crb(c,2)) { goto L_800B7C64; } // 800B7C48
  c->lr=0x800B7C50u; f_800BA4B4(c); // 800B7C4C
  cmps(c,0,(int32_t)c->r[3],0); // 800B7C50
  if (crb(c,2)) { goto L_800B7C6C; } // 800B7C54
  c->r[3]=c->r[26]|c->r[26]; // 800B7C58
  c->lr=0x800B7C60u; f_800B93FC(c); // 800B7C5C
  goto L_800B7C6C; // 800B7C60
L_800B7C64:;
  c->r[3]=c->r[26]|c->r[26]; // 800B7C64
  c->lr=0x800B7C6Cu; f_800B93FC(c); // 800B7C68
L_800B7C6C:;
  c->r[25]=0u+0x00000000u; // 800B7C6C
  goto L_800B7C8C; // 800B7C70
L_800B7C74:;
  cmps(c,0,(int32_t)c->r[25],0); // 800B7C74
  if (!crb(c,2)) { goto L_800B7C8C; } // 800B7C78
  {uint32_t ea=c->r[2]+0xFFFFA000u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B7C7C
  c->r[0]=0u+0x00000000u; // 800B7C80
  {uint32_t ea=c->r[26]+0x0000000Cu; WF32(ea,c->f[0]);} // 800B7C84
  W32(c->r[26]+0x00000028u,c->r[0]); // 800B7C88
L_800B7C8C:;
  cmps(c,0,(int32_t)c->r[25],0); // 800B7C8C
  if (crb(c,2)) { goto L_800B7F04; } // 800B7C90
  c->r[3]=0u+0x80740000u; // 800B7C94
  {uint32_t ea=c->r[2]+0xFFFFA000u; c->f[31]=c->ps1[31]=RF32(ea);} // 800B7C98
  c->r[27]=0u+0xFFFFFFFFu; // 800B7C9C
  c->r[29]=0u+0x00000003u; // 800B7CA0
  c->r[28]=c->r[3]+0x00004C10u; // 800B7CA4
  c->r[30]=0u+0x00000000u; // 800B7CA8
  c->r[31]=0u+0x00000001u; // 800B7CAC
  c->r[24]=0u+0x00000004u; // 800B7CB0
  goto L_800B7EF4; // 800B7CB4
L_800B7CB8:;
  cmps(c,0,(int32_t)c->r[0],0); // 800B7CB8
  c->r[27]=c->r[0]|c->r[0]; // 800B7CBC
  if (crb(c,2)) { goto L_800B7CE0; } // 800B7CC0
  cmps(c,0,(int32_t)c->r[0],1); // 800B7CC4
  if (crb(c,2)) { goto L_800B7CFC; } // 800B7CC8
  cmps(c,0,(int32_t)c->r[0],3); // 800B7CCC
  if (crb(c,2)) { goto L_800B7D84; } // 800B7CD0
  cmps(c,0,(int32_t)c->r[0],4); // 800B7CD4
  if (crb(c,2)) { goto L_800B7E60; } // 800B7CD8
  goto L_800B7EF4; // 800B7CDC
L_800B7CE0:;
  c->r[3]=c->r[26]|c->r[26]; // 800B7CE0
  c->lr=0x800B7CE8u; f_800B91FC(c); // 800B7CE4
  cmps(c,0,(int32_t)c->r[3],0); // 800B7CE8
  if (crb(c,2)) { goto L_800B7EF4; } // 800B7CEC
  c->r[3]=c->r[26]|c->r[26]; // 800B7CF0
  c->lr=0x800B7CF8u; f_800B92CC(c); // 800B7CF4
  goto L_800B7EF4; // 800B7CF8
L_800B7CFC:;
  W8(c->r[1]+0x00000028u,c->r[30]); // 800B7CFC
  c->r[3]=c->r[1]+0x00000028u; // 800B7D00
  c->lr=0x800B7D08u; f_80048270(c); // 800B7D04
  c->r[4]=R32(c->r[26]+0x0000002Cu); // 800B7D08
  c->lr=0x800B7D10u; f_800481D0(c); // 800B7D0C
  c->r[0]=R32(c->r[26]+0x0000002Cu); // 800B7D10
  c->r[4]=0u+0x00000002u; // 800B7D14
  c->r[25]=R32(c->r[3]+0x0000000Cu); // 800B7D18
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)120); // 800B7D1C
  c->r[3]=c->r[28]+c->r[0]; // 800B7D20
  c->lr=0x800B7D28u; f_80052BC8(c); // 800B7D24
  c->r[0]=c->r[25]&c->r[3]; cr0(c,c->r[0]); // 800B7D28
  if (crb(c,2)) { goto L_800B7D68; } // 800B7D2C
  c->r[3]=R32(c->r[26]+0x00000020u); // 800B7D30
  c->lr=0x800B7D38u; f_800B0548(c); // 800B7D34
  c->r[0]=R32(c->r[3]+0x0000000Cu); // 800B7D38
  c->r[3]=c->r[1]+0x00000024u; // 800B7D3C
  W32(c->r[26]+0x00000018u,c->r[0]); // 800B7D40
  W32(c->r[26]+0x00000028u,c->r[29]); // 800B7D44
  W8(c->r[1]+0x00000024u,c->r[30]); // 800B7D48
  c->lr=0x800B7D50u; f_80046EFC(c); // 800B7D4C
  c->r[4]=R32(c->r[26]+0x0000002Cu); // 800B7D50
  c->lr=0x800B7D58u; f_80046DC8(c); // 800B7D54
  c->r[0]=R32(c->r[3]+0x0000033Cu); // 800B7D58
  c->r[0]=c->r[0]|0x00000400u; // 800B7D5C
  W32(c->r[3]+0x0000033Cu,c->r[0]); // 800B7D60
  goto L_800B7EF4; // 800B7D64
L_800B7D68:;
  c->r[3]=c->r[26]|c->r[26]; // 800B7D68
  c->lr=0x800B7D70u; f_800B91FC(c); // 800B7D6C
  cmps(c,0,(int32_t)c->r[3],0); // 800B7D70
  if (crb(c,2)) { goto L_800B7EF4; } // 800B7D74
  c->r[3]=c->r[26]|c->r[26]; // 800B7D78
  c->lr=0x800B7D80u; f_800B92CC(c); // 800B7D7C
  goto L_800B7EF4; // 800B7D80
L_800B7D84:;
  c->r[3]=R32(c->r[26]+0x00000020u); // 800B7D84
  c->lr=0x800B7D8Cu; f_800B0548(c); // 800B7D88
  c->r[0]=R32(c->r[3]+0x0000000Cu); // 800B7D8C
  cmps(c,0,(int32_t)c->r[0],0); // 800B7D90
  if (!crb(c,1)) { goto L_800B7DB4; } // 800B7D94
  c->r[0]=R32(c->r[26]+0x00000018u); // 800B7D98
  cmps(c,0,(int32_t)c->r[0],0); // 800B7D9C
  if (crb(c,1)) { goto L_800B7DB4; } // 800B7DA0
  {uint32_t ea=c->r[26]+0x0000000Cu; WF32(ea,c->f[31]);} // 800B7DA4
  c->r[27]=0u+0x00000004u; // 800B7DA8
  W32(c->r[26]+0x00000028u,c->r[24]); // 800B7DAC
  goto L_800B7EF4; // 800B7DB0
L_800B7DB4:;
  c->r[0]=R32(c->r[26]+0x0000001Cu); // 800B7DB4
  cmps(c,0,(int32_t)c->r[0],0); // 800B7DB8
  if (crb(c,1)) { goto L_800B7DF4; } // 800B7DBC
  c->r[3]=R32(c->r[26]+0x00000020u); // 800B7DC0
  c->r[4]=0u+0x00000002u; // 800B7DC4
  c->r[5]=R32(c->r[26]+0x0000002Cu); // 800B7DC8
  c->r[6]=0u+0x00000000u; // 800B7DCC
  c->lr=0x800B7DD4u; f_800B87A0(c); // 800B7DD0
  c->r[3]=c->r[26]|c->r[26]; // 800B7DD4
  c->lr=0x800B7DDCu; f_800B92CC(c); // 800B7DD8
  c->r[0]=R32(c->r[26]+0x00000028u); // 800B7DDC
  cmps(c,0,(int32_t)c->r[0],3); // 800B7DE0
  if (!crb(c,2)) { goto L_800B7DEC; } // 800B7DE4
  W32(c->r[26]+0x00000028u,c->r[31]); // 800B7DE8
L_800B7DEC:;
  c->r[27]=R32(c->r[26]+0x00000028u); // 800B7DEC
  goto L_800B7EF4; // 800B7DF0
L_800B7DF4:;
  c->r[3]=c->r[26]|c->r[26]; // 800B7DF4
  c->lr=0x800B7DFCu; f_800B8C10(c); // 800B7DF8
  cmps(c,0,(int32_t)c->r[3],0); // 800B7DFC
  if (crb(c,2)) { goto L_800B7E50; } // 800B7E00
  c->r[4]=R32(c->r[26]+0x0000001Cu); // 800B7E04
  c->r[3]=R32(c->r[26]+0x00000020u); // 800B7E08
  c->r[0]=c->r[4]+0xFFFFFFFFu; // 800B7E0C
  W32(c->r[26]+0x0000001Cu,c->r[0]); // 800B7E10
  c->lr=0x800B7E18u; f_800B0548(c); // 800B7E14
  c->r[0]=R32(c->r[3]+0x0000000Cu); // 800B7E18
  cmps(c,0,(int32_t)c->r[0],0); // 800B7E1C
  if (!crb(c,1)) { goto L_800B7E30; } // 800B7E20
  c->r[3]=R32(c->r[26]+0x00000018u); // 800B7E24
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 800B7E28
  W32(c->r[26]+0x00000018u,c->r[0]); // 800B7E2C
L_800B7E30:;
  W8(c->r[1]+0x00000020u,c->r[30]); // 800B7E30
  c->r[3]=c->r[1]+0x00000020u; // 800B7E34
  c->lr=0x800B7E3Cu; f_80046EFC(c); // 800B7E38
  c->r[4]=R32(c->r[26]+0x0000002Cu); // 800B7E3C
  c->lr=0x800B7E44u; f_80046DC8(c); // 800B7E40
  c->r[0]=R32(c->r[3]+0x0000033Cu); // 800B7E44
  c->r[0]=c->r[0]|0x00000800u; // 800B7E48
  W32(c->r[3]+0x0000033Cu,c->r[0]); // 800B7E4C
L_800B7E50:;
  {uint32_t ea=c->r[26]+0x0000000Cu; WF32(ea,c->f[31]);} // 800B7E50
  c->r[27]=0u+0x00000004u; // 800B7E54
  W32(c->r[26]+0x00000028u,c->r[24]); // 800B7E58
  goto L_800B7EF4; // 800B7E5C
L_800B7E60:;
  W8(c->r[1]+0x0000001Cu,c->r[30]); // 800B7E60
  c->r[3]=c->r[1]+0x0000001Cu; // 800B7E64
  c->lr=0x800B7E6Cu; f_80048270(c); // 800B7E68
  c->r[4]=R32(c->r[26]+0x0000002Cu); // 800B7E6C
  c->lr=0x800B7E74u; f_800481D0(c); // 800B7E70
  c->r[0]=R32(c->r[26]+0x0000002Cu); // 800B7E74
  c->r[4]=0u+0x00000002u; // 800B7E78
  c->r[3]=R32(c->r[3]+0x00000008u); // 800B7E7C
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)120); // 800B7E80
  c->r[25]=~(c->r[3]|c->r[3]); // 800B7E84
  c->r[3]=c->r[28]+c->r[0]; // 800B7E88
  c->lr=0x800B7E90u; f_80052BC8(c); // 800B7E8C
  c->r[0]=R32(c->r[26]+0x0000002Cu); // 800B7E90
  c->r[25]=c->r[25]&c->r[3]; // 800B7E94
  c->r[4]=0u+0x00000002u; // 800B7E98
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)120); // 800B7E9C
  c->r[3]=c->r[28]+c->r[0]; // 800B7EA0
  c->lr=0x800B7EA8u; f_80052BC8(c); // 800B7EA4
  cmpu(c,0,c->r[3],c->r[25]); // 800B7EA8
  if (!crb(c,2)) { goto L_800B7EC0; } // 800B7EAC
  {uint32_t ea=c->r[26]+0x0000000Cu; WF32(ea,c->f[31]);} // 800B7EB0
  c->r[27]=0u+0x00000000u; // 800B7EB4
  W32(c->r[26]+0x00000028u,c->r[30]); // 800B7EB8
  goto L_800B7EF4; // 800B7EBC
L_800B7EC0:;
  W8(c->r[1]+0x00000018u,c->r[30]); // 800B7EC0
  c->r[3]=c->r[1]+0x00000018u; // 800B7EC4
  c->lr=0x800B7ECCu; f_8004714C(c); // 800B7EC8
  {uint32_t ea=c->r[3]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 800B7ECC
  {uint32_t ea=c->r[26]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800B7ED0
  {uint32_t ea=c->r[26]+0x00000014u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B7ED4
  c->f[1]=c->ps1[1]=S(c->f[1]+c->f[2]); // 800B7ED8
  {uint32_t ea=c->r[26]+0x0000000Cu; WF32(ea,c->f[1]);} // 800B7EDC
  fcmp(c,0,c->f[1],c->f[0]); // 800B7EE0
  setcrb(c,2,crb(c,1)|crb(c,2)); // 800B7EE4
  if (!crb(c,2)) { goto L_800B7EF4; } // 800B7EE8
  {uint32_t ea=c->r[26]+0x0000000Cu; WF32(ea,c->f[31]);} // 800B7EEC
  W32(c->r[26]+0x00000028u,c->r[29]); // 800B7EF0
L_800B7EF4:;
  c->r[0]=R32(c->r[26]+0x00000028u); // 800B7EF4
  cmps(c,0,(int32_t)c->r[27],(int32_t)c->r[0]); // 800B7EF8
  if (!crb(c,2)) { IRQCHK(c); goto L_800B7CB8; } // 800B7EFC
  goto L_800B7F20; // 800B7F00
L_800B7F04:;
  c->r[0]=0u+0x00000000u; // 800B7F04
  W8(c->r[1]+0x00000014u,c->r[0]); // 800B7F08
  c->r[3]=c->r[1]+0x00000014u; // 800B7F0C
  c->lr=0x800B7F14u; f_80047BE8(c); // 800B7F10
  c->r[4]=R32(c->r[26]+0x0000002Cu); // 800B7F14
  c->r[5]=0u+0x00000000u; // 800B7F18
  c->lr=0x800B7F20u; f_801B78B8(c); // 800B7F1C
L_800B7F20:;
  {uint32_t ea=c->r[26]+0x00000010u; c->f[1]=c->ps1[1]=RF32(ea);} // 800B7F20
  {uint32_t ea=c->r[2]+0xFFFFA000u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B7F24
  fcmp(c,0,c->f[1],c->f[0]); // 800B7F28
  if (!crb(c,1)) { goto L_800B7F74; } // 800B7F2C
  c->r[0]=0u+0x00000000u; // 800B7F30
  W8(c->r[1]+0x00000010u,c->r[0]); // 800B7F34
  c->r[3]=c->r[1]+0x00000010u; // 800B7F38
  c->lr=0x800B7F40u; f_8004714C(c); // 800B7F3C
  {uint32_t ea=c->r[3]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 800B7F40
  {uint32_t ea=c->r[26]+0x00000010u; c->f[1]=c->ps1[1]=RF32(ea);} // 800B7F44
  {uint32_t ea=c->r[2]+0xFFFFA000u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B7F48
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 800B7F4C
  {uint32_t ea=c->r[26]+0x00000010u; WF32(ea,c->f[1]);} // 800B7F50
  fcmp(c,0,c->f[1],c->f[0]); // 800B7F54
  setcrb(c,2,crb(c,0)|crb(c,2)); // 800B7F58
  if (!crb(c,2)) { goto L_800B7F74; } // 800B7F5C
  c->r[3]=R32(c->r[26]+0x00000020u); // 800B7F60
  c->r[4]=0u+0x00000001u; // 800B7F64
  c->r[5]=R32(c->r[26]+0x0000002Cu); // 800B7F68
  c->r[6]=0u+0x00000000u; // 800B7F6C
  c->lr=0x800B7F74u; f_800B87A0(c); // 800B7F70
L_800B7F74:;
  c->r[3]=R32(c->r[26]+0x00000020u); // 800B7F74
  c->lr=0x800B7F7Cu; f_800B5150(c); // 800B7F78
  c->r[0]=R32(c->r[3]+0x0000008Cu); // 800B7F7C
  c->r[0]=rotl(c->r[0],0)&0x00000100u; cr0(c,c->r[0]); // 800B7F80
  if (crb(c,2)) { goto L_800B7FA8; } // 800B7F84
  c->r[0]=0u+0x00000000u; // 800B7F88
  W8(c->r[1]+0x0000000Cu,c->r[0]); // 800B7F8C
  c->r[3]=c->r[1]+0x0000000Cu; // 800B7F90
  c->lr=0x800B7F98u; f_80046F74(c); // 800B7F94
  c->lr=0x800B7F9Cu; f_800BFDB8(c); // 800B7F98
  c->r[4]=R32(c->r[26]+0x00000024u); // 800B7F9C
  c->lr=0x800B7FA4u; f_800CDF14(c); // 800B7FA0
  W32(c->r[26]+0x0000001Cu,c->r[3]); // 800B7FA4
L_800B7FA8:;
  c->r[0]=0u+0x00000000u; // 800B7FA8
  W8(c->r[1]+0x00000008u,c->r[0]); // 800B7FAC
  c->r[3]=c->r[1]+0x00000008u; // 800B7FB0
  c->lr=0x800B7FB8u; f_80046F74(c); // 800B7FB4
  c->lr=0x800B7FBCu; f_800BFDB8(c); // 800B7FB8
  c->r[4]=R32(c->r[26]+0x00000024u); // 800B7FBC
  c->r[5]=R32(c->r[26]+0x0000002Cu); // 800B7FC0
  c->r[6]=R32(c->r[26]+0x0000001Cu); // 800B7FC4
  c->lr=0x800B7FCCu; f_800CDE88(c); // 800B7FC8
L_800B7FCC:;
  c->r[11]=c->r[1]+0x00000060u; // 800B7FCC
  {uint32_t ea=c->r[1]+0x00000068u; psq_load(c,31,ea,0,0);} // 800B7FD0
  {uint32_t ea=c->r[1]+0x00000060u; c->f[31]=RF64(ea);} // 800B7FD4
  c->lr=0x800B7FDCu; { c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800B7FD8
  c->r[0]=R32(c->r[1]+0x00000074u); // 800B7FDC
  c->lr=c->r[0]; // 800B7FE0
  c->r[1]=c->r[1]+0x00000070u; // 800B7FE4
  return; // 800B7FE8
}

// fn_800B7FEC
void f_800B7FEC(Ctx* __restrict c) {
  trace_call(0x800B7FECu);
  {uint32_t ea=c->r[1]+0xFFFFFC20u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B7FEC
  c->r[0]=c->lr; // 800B7FF0
  W32(c->r[1]+0x000003E4u,c->r[0]); // 800B7FF4
  c->r[11]=c->r[1]+0x000003B0u; // 800B7FF8
  {uint32_t ea=c->r[1]+0x000003D0u; WF64(ea,c->f[31]);} // 800B7FFC
  {uint32_t ea=c->r[1]+0x000003D8u; psq_store(c,31,ea,0,0);} // 800B8000
  {uint32_t ea=c->r[1]+0x000003C0u; WF64(ea,c->f[30]);} // 800B8004
  {uint32_t ea=c->r[1]+0x000003C8u; psq_store(c,30,ea,0,0);} // 800B8008
  {uint32_t ea=c->r[1]+0x000003B0u; WF64(ea,c->f[29]);} // 800B800C
  {uint32_t ea=c->r[1]+0x000003B8u; psq_store(c,29,ea,0,0);} // 800B8010
  c->lr=0x800B8018u; { W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800B8014
  cmps(c,0,(int32_t)c->r[3],0); // 800B8018
  if (crb(c,2)) { goto L_800B8370; } // 800B801C
  c->r[8]=0u+0x00000000u; // 800B8020
  c->r[5]=0u+0x00000000u; // 800B8024
  c->r[7]=0u+0x00000000u; // 800B8028
  c->r[0]=0u+0x00000014u; // 800B802C
L_800B8030:;
  c->r[9]=c->r[1]+0x00000010u; // 800B8030
  c->r[6]=0u+0x00000000u; // 800B8034
  c->r[9]=c->r[9]+c->r[5]; // 800B8038
  c->ctr=c->r[0]; // 800B803C
L_800B8040:;
  W32(c->r[9]+c->r[6],c->r[7]); // 800B8040
  c->r[6]=c->r[6]+0x00000004u; // 800B8044
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800B8040; } // 800B8048
  c->r[8]=c->r[8]+0x00000001u; // 800B804C
  c->r[5]=c->r[5]+0x00000050u; // 800B8050
  cmps(c,0,(int32_t)c->r[8],11); // 800B8054
  if (crb(c,0)) { IRQCHK(c); goto L_800B8030; } // 800B8058
  c->r[7]=c->r[1]+0x00000010u; // 800B805C
  c->r[11]=0u+0x00000000u; // 800B8060
  c->r[10]=0u+0x00000000u; // 800B8064
  c->r[5]=0u+0x00000000u; // 800B8068
  c->r[9]=0u+0x00000000u; // 800B806C
  c->r[6]=0u+0x00000000u; // 800B8070
  c->r[8]=0u+0x00000000u; // 800B8074
  c->r[0]=0u+0x00000000u; // 800B8078
  c->ctr=c->r[4]; // 800B807C
  cmpu(c,0,c->r[4],0x00000000u); // 800B8080
  if (!crb(c,1)) { goto L_800B8138; } // 800B8084
L_800B8088:;
  cmps(c,0,(int32_t)c->r[8],0); // 800B8088
  if (!crb(c,2)) { goto L_800B8094; } // 800B808C
  c->r[8]=c->r[3]+c->r[9]; // 800B8090
L_800B8094:;
  c->r[4]=R8(c->r[3]+c->r[9]); // 800B8094
  c->r[12]=c->r[3]+c->r[9]; // 800B8098
  c->r[4]=(uint32_t)(int32_t)(int8_t)c->r[4]; // 800B809C
  cmps(c,0,(int32_t)c->r[4],13); // 800B80A0
  if (!crb(c,2)) { goto L_800B80B0; } // 800B80A4
  c->r[6]=0u+0x00000001u; // 800B80A8
  goto L_800B8128; // 800B80AC
L_800B80B0:;
  cmps(c,0,(int32_t)c->r[4],10); // 800B80B0
  if (!crb(c,2)) { goto L_800B80F4; } // 800B80B4
  cmps(c,0,(int32_t)c->r[6],0); // 800B80B8
  if (!crb(c,1)) { goto L_800B8124; } // 800B80BC
  cmpu(c,0,c->r[11],0x00000013u); // 800B80C0
  if (crb(c,1)) { goto L_800B80DC; } // 800B80C4
  cmpu(c,0,c->r[10],0x0000000Au); // 800B80C8
  if (crb(c,1)) { goto L_800B80DC; } // 800B80CC
  c->r[6]=rotl(c->r[11],2)&0xFFFFFFFCu; // 800B80D0
  c->r[4]=c->r[7]+c->r[5]; // 800B80D4
  W32(c->r[6]+c->r[4],c->r[8]); // 800B80D8
L_800B80DC:;
  W8(c->r[12]+0xFFFFFFFFu,c->r[0]); // 800B80DC
  c->r[11]=0u+0x00000000u; // 800B80E0
  c->r[8]=0u+0x00000000u; // 800B80E4
  c->r[10]=c->r[10]+0x00000001u; // 800B80E8
  c->r[5]=c->r[5]+0x00000050u; // 800B80EC
  goto L_800B8124; // 800B80F0
L_800B80F4:;
  cmps(c,0,(int32_t)c->r[4],44); // 800B80F4
  if (!crb(c,2)) { goto L_800B8124; } // 800B80F8
  cmpu(c,0,c->r[11],0x00000013u); // 800B80FC
  if (crb(c,1)) { goto L_800B8118; } // 800B8100
  cmpu(c,0,c->r[10],0x0000000Au); // 800B8104
  if (crb(c,1)) { goto L_800B8118; } // 800B8108
  c->r[6]=rotl(c->r[11],2)&0xFFFFFFFCu; // 800B810C
  c->r[4]=c->r[7]+c->r[5]; // 800B8110
  W32(c->r[6]+c->r[4],c->r[8]); // 800B8114
L_800B8118:;
  W8(c->r[12]+0x00000000u,c->r[0]); // 800B8118
  c->r[8]=0u+0x00000000u; // 800B811C
  c->r[11]=c->r[11]+0x00000001u; // 800B8120
L_800B8124:;
  c->r[6]=0u+0x00000000u; // 800B8124
L_800B8128:;
  c->r[9]=c->r[9]+0x00000001u; // 800B8128
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800B8088; } // 800B812C
  goto L_800B8138; // 800B8130
  goto L_800B8370; // 800B8134
L_800B8138:;
  c->r[25]=0u+0x80750000u; // 800B8138
  c->r[27]=0u+0x806D0000u; // 800B813C
  {uint32_t ea=c->r[2]+0xFFFFA00Cu; c->f[29]=c->ps1[29]=RF32(ea);} // 800B8140
  c->r[26]=c->r[1]+0x00000010u; // 800B8144
  {uint32_t ea=c->r[2]+0xFFFFA008u; c->f[30]=c->ps1[30]=RF32(ea);} // 800B8148
  c->r[25]=c->r[25]+0x000012F8u; // 800B814C
  {uint32_t ea=c->r[2]+0xFFFFA010u; c->f[31]=c->ps1[31]=RF32(ea);} // 800B8150
  c->r[27]=c->r[27]+0x000068A8u; // 800B8154
  c->r[23]=0u+0x00000000u; // 800B8158
  c->r[31]=0u+0x00000000u; // 800B815C
  c->r[30]=0u+0x00000000u; // 800B8160
  c->r[29]=0u+0x00000000u; // 800B8164
  c->r[28]=0u+0x00000000u; // 800B8168
L_800B816C:;
  c->r[5]=c->r[23]|c->r[23]; // 800B816C
  c->r[24]=c->r[25]+c->r[30]; // 800B8170
  c->r[3]=c->r[1]+0x00000010u; // 800B8174
  c->r[4]=0u+0x00000000u; // 800B8178
  c->lr=0x800B8180u; f_800B83A0(c); // 800B817C
  {uint32_t ea=c->r[24]+0x00000000u; WF32(ea,c->f[1]);} // 800B8180
  c->r[5]=c->r[23]|c->r[23]; // 800B8184
  c->r[3]=c->r[1]+0x00000010u; // 800B8188
  c->r[4]=0u+0x00000001u; // 800B818C
  c->lr=0x800B8194u; f_800B83A0(c); // 800B8190
  {uint32_t ea=c->r[24]+0x00000004u; WF32(ea,c->f[1]);} // 800B8194
  c->r[5]=c->r[23]|c->r[23]; // 800B8198
  c->r[3]=c->r[1]+0x00000010u; // 800B819C
  c->r[4]=0u+0x00000002u; // 800B81A0
  c->lr=0x800B81A8u; f_800B83A0(c); // 800B81A4
  {uint32_t ea=c->r[24]+0x00000008u; WF32(ea,c->f[1]);} // 800B81A8
  c->r[5]=c->r[23]|c->r[23]; // 800B81AC
  c->r[3]=c->r[1]+0x00000010u; // 800B81B0
  c->r[4]=0u+0x00000003u; // 800B81B4
  c->lr=0x800B81BCu; f_800B83EC(c); // 800B81B8
  W32(c->r[24]+0x0000000Cu,c->r[3]); // 800B81BC
  c->r[5]=c->r[23]|c->r[23]; // 800B81C0
  c->r[3]=c->r[1]+0x00000010u; // 800B81C4
  c->r[4]=0u+0x00000004u; // 800B81C8
  c->lr=0x800B81D0u; f_800B83EC(c); // 800B81CC
  cmpu(c,0,c->r[23],0x0000000Au); // 800B81D0
  W32(c->r[24]+0x00000010u,c->r[3]); // 800B81D4
  if (crb(c,1)) { goto L_800B8204; } // 800B81D8
  c->r[3]=c->r[26]+c->r[29]; // 800B81DC
  c->r[3]=R32(c->r[3]+0x00000014u); // 800B81E0
  c->lr=0x800B81E8u; f_803B5690(c); // 800B81E4
  c->f[0]=c->ps1[0]=S(c->f[1]); // 800B81E8
  c->f[0]=c->ps1[0]=S(std::fma(c->f[29],c->f[0],c->f[30])); // 800B81EC
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 800B81F0
  {uint32_t ea=c->r[1]+0x00000380u; WF64(ea,c->f[0]);} // 800B81F4
  c->r[0]=R32(c->r[1]+0x00000384u); // 800B81F8
  c->r[0]=rotl(c->r[0],16)&0xFFFF0000u; // 800B81FC
  goto L_800B8208; // 800B8200
L_800B8204:;
  c->r[0]=0u+0x00000000u; // 800B8204
L_800B8208:;
  W32(c->r[24]+0x00000014u,c->r[0]); // 800B8208
  c->r[5]=c->r[23]|c->r[23]; // 800B820C
  c->r[3]=c->r[1]+0x00000010u; // 800B8210
  c->r[4]=0u+0x00000006u; // 800B8214
  c->lr=0x800B821Cu; f_800B83A0(c); // 800B8218
  {uint32_t ea=c->r[24]+0x00000018u; WF32(ea,c->f[1]);} // 800B821C
  c->r[5]=c->r[23]|c->r[23]; // 800B8220
  c->r[3]=c->r[1]+0x00000010u; // 800B8224
  c->r[4]=0u+0x00000007u; // 800B8228
  c->lr=0x800B8230u; f_800B83A0(c); // 800B822C
  {uint32_t ea=c->r[24]+0x0000001Cu; WF32(ea,c->f[1]);} // 800B8230
  c->r[5]=c->r[23]|c->r[23]; // 800B8234
  c->r[3]=c->r[1]+0x00000010u; // 800B8238
  c->r[4]=0u+0x00000008u; // 800B823C
  c->lr=0x800B8244u; f_800B83A0(c); // 800B8240
  {uint32_t ea=c->r[24]+0x00000020u; WF32(ea,c->f[1]);} // 800B8244
  c->r[5]=c->r[23]|c->r[23]; // 800B8248
  c->r[3]=c->r[1]+0x00000010u; // 800B824C
  c->r[4]=0u+0x00000009u; // 800B8250
  c->lr=0x800B8258u; f_800B83A0(c); // 800B8254
  {uint32_t ea=c->r[24]+0x00000024u; WF32(ea,c->f[1]);} // 800B8258
  c->r[5]=c->r[23]|c->r[23]; // 800B825C
  c->r[3]=c->r[1]+0x00000010u; // 800B8260
  c->r[4]=0u+0x0000000Au; // 800B8264
  c->lr=0x800B826Cu; f_800B83A0(c); // 800B8268
  {uint32_t ea=c->r[24]+0x00000028u; WF32(ea,c->f[1]);} // 800B826C
  c->r[5]=c->r[23]|c->r[23]; // 800B8270
  c->r[3]=c->r[1]+0x00000010u; // 800B8274
  c->r[4]=0u+0x0000000Bu; // 800B8278
  c->lr=0x800B8280u; f_800B83EC(c); // 800B827C
  W32(c->r[24]+0x0000002Cu,c->r[3]); // 800B8280
  c->r[5]=c->r[23]|c->r[23]; // 800B8284
  c->r[3]=c->r[1]+0x00000010u; // 800B8288
  c->r[4]=0u+0x0000000Cu; // 800B828C
  c->lr=0x800B8294u; f_800B83A0(c); // 800B8290
  {uint32_t ea=c->r[24]+0x00000030u; WF32(ea,c->f[1]);} // 800B8294
  c->r[5]=c->r[23]|c->r[23]; // 800B8298
  c->r[3]=c->r[1]+0x00000010u; // 800B829C
  c->r[4]=0u+0x0000000Du; // 800B82A0
  c->lr=0x800B82A8u; f_800B83A0(c); // 800B82A4
  {uint32_t ea=c->r[24]+0x00000034u; WF32(ea,c->f[1]);} // 800B82A8
  c->r[5]=c->r[23]|c->r[23]; // 800B82AC
  c->r[3]=c->r[1]+0x00000010u; // 800B82B0
  c->r[4]=0u+0x0000000Eu; // 800B82B4
  c->lr=0x800B82BCu; f_800B83A0(c); // 800B82B8
  {uint32_t ea=c->r[24]+0x00000038u; WF32(ea,c->f[1]);} // 800B82BC
  c->r[5]=c->r[23]|c->r[23]; // 800B82C0
  c->r[3]=c->r[1]+0x00000010u; // 800B82C4
  c->r[4]=0u+0x0000000Fu; // 800B82C8
  c->lr=0x800B82D0u; f_800B83A0(c); // 800B82CC
  {uint32_t ea=c->r[24]+0x0000003Cu; WF32(ea,c->f[1]);} // 800B82D0
  c->r[5]=c->r[23]|c->r[23]; // 800B82D4
  c->r[3]=c->r[1]+0x00000010u; // 800B82D8
  c->r[4]=0u+0x00000010u; // 800B82DC
  c->lr=0x800B82E4u; f_800B83A0(c); // 800B82E0
  {uint32_t ea=c->r[24]+0x00000040u; WF32(ea,c->f[1]);} // 800B82E4
  c->r[5]=c->r[23]|c->r[23]; // 800B82E8
  c->r[3]=c->r[1]+0x00000010u; // 800B82EC
  c->r[4]=0u+0x00000011u; // 800B82F0
  c->lr=0x800B82F8u; f_800B83EC(c); // 800B82F4
  W32(c->r[24]+0x00000044u,c->r[3]); // 800B82F8
  c->r[5]=c->r[23]|c->r[23]; // 800B82FC
  c->r[3]=c->r[1]+0x00000010u; // 800B8300
  c->r[4]=0u+0x00000013u; // 800B8304
  c->lr=0x800B830Cu; f_800B83EC(c); // 800B8308
  W32(c->r[24]+0x00000048u,c->r[3]); // 800B830C
  c->r[5]=c->r[23]|c->r[23]; // 800B8310
  c->r[3]=c->r[1]+0x00000010u; // 800B8314
  c->r[4]=0u+0x00000012u; // 800B8318
  c->lr=0x800B8320u; f_800B83A0(c); // 800B831C
  c->r[3]=c->r[27]+c->r[31]; // 800B8320
  {uint32_t ea=c->r[24]+0x0000004Cu; WF32(ea,c->f[1]);} // 800B8324
  c->r[0]=R32(c->r[3]+0x0000008Cu); // 800B8328
  c->r[0]=rotl(c->r[0],0)&0x00000080u; cr0(c,c->r[0]); // 800B832C
  if (crb(c,2)) { goto L_800B833C; } // 800B8330
  {uint32_t ea=c->r[24]+0x00000000u; WF32(ea,c->f[31]);} // 800B8334
  goto L_800B8358; // 800B8338
L_800B833C:;
  W8(c->r[1]+0x00000008u,c->r[28]); // 800B833C
  c->r[3]=c->r[1]+0x00000008u; // 800B8340
  c->lr=0x800B8348u; f_8004714C(c); // 800B8344
  {uint32_t ea=c->r[3]+0x0000002Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800B8348
  {uint32_t ea=c->r[24]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B834C
  c->f[0]=c->ps1[0]=S(c->f[0]/c->f[1]); // 800B8350
  {uint32_t ea=c->r[24]+0x00000000u; WF32(ea,c->f[0]);} // 800B8354
L_800B8358:;
  c->r[23]=c->r[23]+0x00000001u; // 800B8358
  c->r[30]=c->r[30]+0x00000068u; // 800B835C
  cmps(c,0,(int32_t)c->r[23],11); // 800B8360
  c->r[29]=c->r[29]+0x00000050u; // 800B8364
  c->r[31]=c->r[31]+0x00000094u; // 800B8368
  if (crb(c,0)) { IRQCHK(c); goto L_800B816C; } // 800B836C
L_800B8370:;
  c->r[11]=c->r[1]+0x000003B0u; // 800B8370
  {uint32_t ea=c->r[1]+0x000003D8u; psq_load(c,31,ea,0,0);} // 800B8374
  {uint32_t ea=c->r[1]+0x000003D0u; c->f[31]=RF64(ea);} // 800B8378
  {uint32_t ea=c->r[1]+0x000003C8u; psq_load(c,30,ea,0,0);} // 800B837C
  {uint32_t ea=c->r[1]+0x000003C0u; c->f[30]=RF64(ea);} // 800B8380
  {uint32_t ea=c->r[1]+0x000003B8u; psq_load(c,29,ea,0,0);} // 800B8384
  {uint32_t ea=c->r[1]+0x000003B0u; c->f[29]=RF64(ea);} // 800B8388
  c->lr=0x800B8390u; { c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800B838C
  c->r[0]=R32(c->r[1]+0x000003E4u); // 800B8390
  c->lr=c->r[0]; // 800B8394
  c->r[1]=c->r[1]+0x000003E0u; // 800B8398
  return; // 800B839C
}

// fn_800B83A0
void f_800B83A0(Ctx* __restrict c) {
  trace_call(0x800B83A0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B83A0
  c->r[0]=c->lr; // 800B83A4
  cmpu(c,0,c->r[4],0x00000013u); // 800B83A8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B83AC
  if (crb(c,1)) { goto L_800B83D8; } // 800B83B0
  cmpu(c,0,c->r[5],0x0000000Au); // 800B83B4
  if (crb(c,1)) { goto L_800B83D8; } // 800B83B8
  c->r[0]=(uint32_t)((int32_t)c->r[5]*(int32_t)80); // 800B83BC
  c->r[4]=rotl(c->r[4],2)&0xFFFFFFFCu; // 800B83C0
  c->r[0]=c->r[3]+c->r[0]; // 800B83C4
  c->r[3]=R32(c->r[4]+c->r[0]); // 800B83C8
  c->lr=0x800B83D0u; f_803B5690(c); // 800B83CC
  c->f[1]=c->ps1[1]=S(c->f[1]); // 800B83D0
  goto L_800B83DC; // 800B83D4
L_800B83D8:;
  {uint32_t ea=c->r[2]+0xFFFFA000u; c->f[1]=c->ps1[1]=RF32(ea);} // 800B83D8
L_800B83DC:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800B83DC
  c->lr=c->r[0]; // 800B83E0
  c->r[1]=c->r[1]+0x00000010u; // 800B83E4
  return; // 800B83E8
}

// fn_800B83EC
void f_800B83EC(Ctx* __restrict c) {
  trace_call(0x800B83ECu);
  cmpu(c,0,c->r[4],0x00000013u); // 800B83EC
  if (crb(c,1)) { goto L_800B8410; } // 800B83F0
  cmpu(c,0,c->r[5],0x0000000Au); // 800B83F4
  if (crb(c,1)) { goto L_800B8410; } // 800B83F8
  c->r[0]=(uint32_t)((int32_t)c->r[5]*(int32_t)80); // 800B83FC
  c->r[4]=rotl(c->r[4],2)&0xFFFFFFFCu; // 800B8400
  c->r[0]=c->r[3]+c->r[0]; // 800B8404
  c->r[3]=R32(c->r[4]+c->r[0]); // 800B8408
  f_803B613C(c); return; // 800B840C
L_800B8410:;
  c->r[3]=0u+0x00000000u; // 800B8410
  return; // 800B8414
}

// fn_800B8418
void f_800B8418(Ctx* __restrict c) {
  trace_call(0x800B8418u);
  {uint32_t ea=c->r[1]+0xFFFFEB10u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B8418
  c->r[0]=c->lr; // 800B841C
  W32(c->r[1]+0x000014F4u,c->r[0]); // 800B8420
  c->r[11]=c->r[1]+0x000014F0u; // 800B8424
  c->lr=0x800B842Cu; { W32(c->r[11]+0xFFFFFFBCu,c->r[15]); W32(c->r[11]+0xFFFFFFC0u,c->r[16]); W32(c->r[11]+0xFFFFFFC4u,c->r[17]); W32(c->r[11]+0xFFFFFFC8u,c->r[18]); W32(c->r[11]+0xFFFFFFCCu,c->r[19]); W32(c->r[11]+0xFFFFFFD0u,c->r[20]); W32(c->r[11]+0xFFFFFFD4u,c->r[21]); W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800B8428
  cmps(c,0,(int32_t)c->r[3],0); // 800B842C
  if (crb(c,2)) { goto L_800B86B0; } // 800B8430
  c->r[8]=0u+0x00000000u; // 800B8434
  c->r[5]=0u+0x00000000u; // 800B8438
  c->r[7]=0u+0x00000000u; // 800B843C
  c->r[0]=0u+0x00000014u; // 800B8440
L_800B8444:;
  c->r[9]=c->r[1]+0x00000008u; // 800B8444
  c->r[6]=0u+0x00000000u; // 800B8448
  c->r[9]=c->r[9]+c->r[5]; // 800B844C
  c->ctr=c->r[0]; // 800B8450
L_800B8454:;
  W32(c->r[9]+c->r[6],c->r[7]); // 800B8454
  c->r[6]=c->r[6]+0x00000004u; // 800B8458
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800B8454; } // 800B845C
  c->r[8]=c->r[8]+0x00000001u; // 800B8460
  c->r[5]=c->r[5]+0x00000050u; // 800B8464
  cmps(c,0,(int32_t)c->r[8],66); // 800B8468
  if (crb(c,0)) { IRQCHK(c); goto L_800B8444; } // 800B846C
  c->r[7]=c->r[1]+0x00000008u; // 800B8470
  c->r[11]=0u+0x00000000u; // 800B8474
  c->r[10]=0u+0x00000000u; // 800B8478
  c->r[5]=0u+0x00000000u; // 800B847C
  c->r[9]=0u+0x00000000u; // 800B8480
  c->r[6]=0u+0x00000000u; // 800B8484
  c->r[8]=0u+0x00000000u; // 800B8488
  c->r[0]=0u+0x00000000u; // 800B848C
  c->ctr=c->r[4]; // 800B8490
  cmpu(c,0,c->r[4],0x00000000u); // 800B8494
  if (!crb(c,1)) { goto L_800B854C; } // 800B8498
L_800B849C:;
  cmps(c,0,(int32_t)c->r[8],0); // 800B849C
  if (!crb(c,2)) { goto L_800B84A8; } // 800B84A0
  c->r[8]=c->r[3]+c->r[9]; // 800B84A4
L_800B84A8:;
  c->r[4]=R8(c->r[3]+c->r[9]); // 800B84A8
  c->r[12]=c->r[3]+c->r[9]; // 800B84AC
  c->r[4]=(uint32_t)(int32_t)(int8_t)c->r[4]; // 800B84B0
  cmps(c,0,(int32_t)c->r[4],13); // 800B84B4
  if (!crb(c,2)) { goto L_800B84C4; } // 800B84B8
  c->r[6]=0u+0x00000001u; // 800B84BC
  goto L_800B853C; // 800B84C0
L_800B84C4:;
  cmps(c,0,(int32_t)c->r[4],10); // 800B84C4
  if (!crb(c,2)) { goto L_800B8508; } // 800B84C8
  cmps(c,0,(int32_t)c->r[6],0); // 800B84CC
  if (!crb(c,1)) { goto L_800B8538; } // 800B84D0
  cmpu(c,0,c->r[11],0x00000013u); // 800B84D4
  if (crb(c,1)) { goto L_800B84F0; } // 800B84D8
  cmpu(c,0,c->r[10],0x00000041u); // 800B84DC
  if (crb(c,1)) { goto L_800B84F0; } // 800B84E0
  c->r[6]=rotl(c->r[11],2)&0xFFFFFFFCu; // 800B84E4
  c->r[4]=c->r[7]+c->r[5]; // 800B84E8
  W32(c->r[6]+c->r[4],c->r[8]); // 800B84EC
L_800B84F0:;
  W8(c->r[12]+0xFFFFFFFFu,c->r[0]); // 800B84F0
  c->r[11]=0u+0x00000000u; // 800B84F4
  c->r[8]=0u+0x00000000u; // 800B84F8
  c->r[10]=c->r[10]+0x00000001u; // 800B84FC
  c->r[5]=c->r[5]+0x00000050u; // 800B8500
  goto L_800B8538; // 800B8504
L_800B8508:;
  cmps(c,0,(int32_t)c->r[4],44); // 800B8508
  if (!crb(c,2)) { goto L_800B8538; } // 800B850C
  cmpu(c,0,c->r[11],0x00000013u); // 800B8510
  if (crb(c,1)) { goto L_800B852C; } // 800B8514
  cmpu(c,0,c->r[10],0x00000041u); // 800B8518
  if (crb(c,1)) { goto L_800B852C; } // 800B851C
  c->r[6]=rotl(c->r[11],2)&0xFFFFFFFCu; // 800B8520
  c->r[4]=c->r[7]+c->r[5]; // 800B8524
  W32(c->r[6]+c->r[4],c->r[8]); // 800B8528
L_800B852C:;
  W8(c->r[12]+0x00000000u,c->r[0]); // 800B852C
  c->r[8]=0u+0x00000000u; // 800B8530
  c->r[11]=c->r[11]+0x00000001u; // 800B8534
L_800B8538:;
  c->r[6]=0u+0x00000000u; // 800B8538
L_800B853C:;
  c->r[9]=c->r[9]+0x00000001u; // 800B853C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800B849C; } // 800B8540
  goto L_800B854C; // 800B8544
  goto L_800B86B0; // 800B8548
L_800B854C:;
  c->r[31]=0u+0x80750000u; // 800B854C
  c->r[24]=0u+0x00000000u; // 800B8550
  c->r[31]=c->r[31]+0x00001770u; // 800B8554
  c->r[20]=0u+0x00000000u; // 800B8558
  c->r[19]=0u+0x00000000u; // 800B855C
L_800B8560:;
  c->r[30]=c->r[31]+c->r[20]; // 800B8560
  c->r[23]=0u+0x00000000u; // 800B8564
  c->r[18]=0u+0x00000000u; // 800B8568
L_800B856C:;
  c->r[25]=c->r[23]+c->r[19]; // 800B856C
  c->r[29]=c->r[1]+0x00000008u; // 800B8570
  c->r[0]=(uint32_t)((int32_t)c->r[25]*(int32_t)80); // 800B8574
  c->r[28]=c->r[30]+c->r[18]; // 800B8578
  c->r[22]=0u+0x00000000u; // 800B857C
  c->r[17]=0u+0x00000000u; // 800B8580
  c->r[29]=c->r[29]+c->r[0]; // 800B8584
  c->r[16]=0u+0x00000000u; // 800B8588
L_800B858C:;
  c->r[27]=c->r[29]+c->r[17]; // 800B858C
  c->r[26]=c->r[28]+c->r[17]; // 800B8590
  c->r[21]=0u+0x00000000u; // 800B8594
  c->r[15]=0u+0x00000000u; // 800B8598
L_800B859C:;
  c->r[0]=c->r[16]+c->r[21]; // 800B859C
  cmpu(c,0,c->r[0],0x00000013u); // 800B85A0
  if (crb(c,1)) { goto L_800B85C0; } // 800B85A4
  cmpu(c,0,c->r[25],0x00000041u); // 800B85A8
  if (crb(c,1)) { goto L_800B85C0; } // 800B85AC
  c->r[3]=R32(c->r[27]+c->r[15]); // 800B85B0
  c->lr=0x800B85B8u; f_803B5690(c); // 800B85B4
  c->f[0]=c->ps1[0]=S(c->f[1]); // 800B85B8
  goto L_800B85C4; // 800B85BC
L_800B85C0:;
  {uint32_t ea=c->r[2]+0xFFFFA000u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B85C0
L_800B85C4:;
  c->r[21]=c->r[21]+0x00000001u; // 800B85C4
  {uint32_t ea=c->r[26]+c->r[15]; WF32(ea,c->f[0]);} // 800B85C8
  cmps(c,0,(int32_t)c->r[21],2); // 800B85CC
  c->r[15]=c->r[15]+0x00000004u; // 800B85D0
  if (crb(c,0)) { IRQCHK(c); goto L_800B859C; } // 800B85D4
  c->r[22]=c->r[22]+0x00000001u; // 800B85D8
  c->r[16]=c->r[16]+0x00000002u; // 800B85DC
  cmps(c,0,(int32_t)c->r[22],10); // 800B85E0
  c->r[17]=c->r[17]+0x00000008u; // 800B85E4
  if (crb(c,0)) { IRQCHK(c); goto L_800B858C; } // 800B85E8
  c->r[23]=c->r[23]+0x00000001u; // 800B85EC
  c->r[18]=c->r[18]+0x00000050u; // 800B85F0
  cmps(c,0,(int32_t)c->r[23],6); // 800B85F4
  if (crb(c,0)) { IRQCHK(c); goto L_800B856C; } // 800B85F8
  c->r[24]=c->r[24]+0x00000001u; // 800B85FC
  c->r[19]=c->r[19]+0x00000006u; // 800B8600
  cmps(c,0,(int32_t)c->r[24],11); // 800B8604
  c->r[20]=c->r[20]+0x000001E0u; // 800B8608
  if (crb(c,0)) { IRQCHK(c); goto L_800B8560; } // 800B860C
  c->r[11]=0u+0x80750000u; // 800B8610
  c->r[10]=0u+0x80750000u; // 800B8614
  {uint32_t ea=c->r[2]+0xFFFFA000u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B8618
  c->r[11]=c->r[11]+0x000012F8u; // 800B861C
  c->r[10]=c->r[10]+0x00001770u; // 800B8620
  c->r[18]=0u+0x00000000u; // 800B8624
  c->r[3]=0u+0x00000000u; // 800B8628
  c->r[4]=0u+0x00000000u; // 800B862C
  c->r[9]=0u+0x00000000u; // 800B8630
  c->r[0]=0u+0x0000000Au; // 800B8634
L_800B8638:;
  c->r[12]=c->r[11]+c->r[4]; // 800B8638
  c->r[15]=c->r[10]+c->r[3]; // 800B863C
  c->r[19]=0u+0x00000000u; // 800B8640
  c->r[5]=0u+0x00000000u; // 800B8644
  c->r[6]=0u+0x00000000u; // 800B8648
L_800B864C:;
  c->r[17]=c->r[12]+c->r[6]; // 800B864C
  c->r[16]=c->r[15]+c->r[5]; // 800B8650
  W32(c->r[17]+0x00000050u,c->r[9]); // 800B8654
  c->r[20]=0u+0x00000000u; // 800B8658
  c->r[7]=0u+0x00000000u; // 800B865C
  c->ctr=c->r[0]; // 800B8660
L_800B8664:;
  c->r[8]=c->r[16]+c->r[7]; // 800B8664
  {uint32_t ea=c->r[8]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 800B8668
  fcmp(c,0,c->f[1],c->f[0]); // 800B866C
  if (!crb(c,0)) { goto L_800B867C; } // 800B8670
  W32(c->r[17]+0x00000050u,c->r[20]); // 800B8674
  goto L_800B8688; // 800B8678
L_800B867C:;
  c->r[20]=c->r[20]+0x00000001u; // 800B867C
  c->r[7]=c->r[7]+0x00000008u; // 800B8680
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800B8664; } // 800B8684
L_800B8688:;
  c->r[19]=c->r[19]+0x00000001u; // 800B8688
  c->r[6]=c->r[6]+0x00000004u; // 800B868C
  cmps(c,0,(int32_t)c->r[19],6); // 800B8690
  c->r[5]=c->r[5]+0x00000050u; // 800B8694
  if (crb(c,0)) { IRQCHK(c); goto L_800B864C; } // 800B8698
  c->r[18]=c->r[18]+0x00000001u; // 800B869C
  c->r[4]=c->r[4]+0x00000068u; // 800B86A0
  cmps(c,0,(int32_t)c->r[18],11); // 800B86A4
  c->r[3]=c->r[3]+0x000001E0u; // 800B86A8
  if (crb(c,0)) { IRQCHK(c); goto L_800B8638; } // 800B86AC
L_800B86B0:;
  c->r[11]=c->r[1]+0x000014F0u; // 800B86B0
  c->lr=0x800B86B8u; { c->r[15]=R32(c->r[11]+0xFFFFFFBCu); c->r[16]=R32(c->r[11]+0xFFFFFFC0u); c->r[17]=R32(c->r[11]+0xFFFFFFC4u); c->r[18]=R32(c->r[11]+0xFFFFFFC8u); c->r[19]=R32(c->r[11]+0xFFFFFFCCu); c->r[20]=R32(c->r[11]+0xFFFFFFD0u); c->r[21]=R32(c->r[11]+0xFFFFFFD4u); c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800B86B4
  c->r[0]=R32(c->r[1]+0x000014F4u); // 800B86B8
  c->lr=c->r[0]; // 800B86BC
  c->r[1]=c->r[1]+0x000014F0u; // 800B86C0
  return; // 800B86C4
}

// fn_800B86C8
void f_800B86C8(Ctx* __restrict c) {
  trace_call(0x800B86C8u);
  {uint32_t ea=c->r[1]+0xFFFFFEE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B86C8
  c->r[0]=c->lr; // 800B86CC
  W32(c->r[1]+0x00000124u,c->r[0]); // 800B86D0
  {uint32_t ea=c->r[1]+0x00000110u; for(int i=28;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800B86D4
  c->r[30]=0u+0x80690000u; // 800B86D8
  c->r[29]=0u+0x00000000u; // 800B86DC
  c->r[31]=0u+0x80740000u; // 800B86E0
  c->r[30]=c->r[30]+0xFFFFE248u; // 800B86E4
L_800B86E8:;
  c->r[3]=c->r[29]|c->r[29]; // 800B86E8
  c->lr=0x800B86F0u; f_800B5150(c); // 800B86EC
  c->r[28]=R32(c->r[3]+0x00000074u); // 800B86F0
  cmps(c,0,(int32_t)c->r[28],0); // 800B86F4
  if (crb(c,2)) { goto L_800B8780; } // 800B86F8
  c->r[0]=R8(c->r[28]+0x00000000u); // 800B86FC
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800B8700
  if (crb(c,2)) { goto L_800B8780; } // 800B8704
  c->r[5]=c->r[28]|c->r[28]; // 800B8708
  c->r[3]=c->r[1]+0x00000008u; // 800B870C
  c->r[4]=c->r[30]+0x0000000Au; // 800B8710
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800B8714
  c->lr=0x800B871Cu; f_803B1FC8(c); // 800B8718
  c->lr=0x800B8720u; f_80050558(c); // 800B871C
  c->r[4]=c->r[31]+0x00005180u; // 800B8720
  c->r[5]=c->r[1]+0x00000008u; // 800B8724
  c->r[6]=0u+0x00000000u; // 800B8728
  c->lr=0x800B8730u; f_803187FC(c); // 800B872C
  c->r[5]=c->r[28]|c->r[28]; // 800B8730
  c->r[3]=c->r[1]+0x00000008u; // 800B8734
  c->r[4]=c->r[30]+0x0000001Cu; // 800B8738
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800B873C
  c->lr=0x800B8744u; f_803B1FC8(c); // 800B8740
  c->lr=0x800B8748u; f_80050558(c); // 800B8744
  c->r[4]=c->r[31]+0x00005180u; // 800B8748
  c->r[5]=c->r[1]+0x00000008u; // 800B874C
  c->r[6]=0u+0x00000000u; // 800B8750
  c->lr=0x800B8758u; f_803187FC(c); // 800B8754
  c->r[5]=c->r[28]|c->r[28]; // 800B8758
  c->r[3]=c->r[1]+0x00000008u; // 800B875C
  c->r[4]=c->r[30]+0x00000033u; // 800B8760
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800B8764
  c->lr=0x800B876Cu; f_803B1FC8(c); // 800B8768
  c->lr=0x800B8770u; f_80050558(c); // 800B876C
  c->r[4]=c->r[31]+0x00005180u; // 800B8770
  c->r[5]=c->r[1]+0x00000008u; // 800B8774
  c->r[6]=0u+0x00000000u; // 800B8778
  c->lr=0x800B8780u; f_803187FC(c); // 800B877C
L_800B8780:;
  c->r[29]=c->r[29]+0x00000001u; // 800B8780
  cmps(c,0,(int32_t)c->r[29],11); // 800B8784
  if (crb(c,0)) { IRQCHK(c); goto L_800B86E8; } // 800B8788
  {uint32_t ea=c->r[1]+0x00000110u; for(int i=28;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800B878C
  c->r[0]=R32(c->r[1]+0x00000124u); // 800B8790
  c->lr=c->r[0]; // 800B8794
  c->r[1]=c->r[1]+0x00000120u; // 800B8798
  return; // 800B879C
}

// fn_800B87A0
void f_800B87A0(Ctx* __restrict c) {
  trace_call(0x800B87A0u);
  {uint32_t ea=c->r[1]+0xFFFFFF90u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B87A0
  c->r[0]=c->lr; // 800B87A4
  W32(c->r[1]+0x00000074u,c->r[0]); // 800B87A8
  c->r[11]=c->r[1]+0x00000070u; // 800B87AC
  c->lr=0x800B87B4u; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800B87B0
  c->r[28]=c->r[3]|c->r[3]; // 800B87B4
  c->r[29]=c->r[4]|c->r[4]; // 800B87B8
  c->r[30]=c->r[5]|c->r[5]; // 800B87BC
  c->r[31]=c->r[6]|c->r[6]; // 800B87C0
  c->r[3]=c->r[1]+0x00000008u; // 800B87C4
  c->lr=0x800B87CCu; f_803209E8(c); // 800B87C8
  cmpu(c,0,c->r[29],0x00000004u); // 800B87CC
  if (!crb(c,1)) { goto L_800B87D8; } // 800B87D0
  c->r[29]=0u+0x00000000u; // 800B87D4
L_800B87D8:;
  c->r[0]=R8(c->r[13]+0xFFFFBBD2u); // 800B87D8
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800B87DC
  if (!crb(c,2)) { goto L_800B889C; } // 800B87E0
  c->r[25]=0u+0x80740000u; // 800B87E4
  c->r[25]=c->r[25]+0xFFFFD740u; // 800B87E8
  c->r[3]=c->r[25]|c->r[25]; // 800B87EC
  c->lr=0x800B87F4u; f_800506C0(c); // 800B87F0
  c->r[0]=0u+0x00000000u; // 800B87F4
  W8(c->r[25]+0x0000000Cu,c->r[0]); // 800B87F8
  c->r[0]=R8(c->r[13]+0xFFFFBC20u); // 800B87FC
  c->r[26]=0u+0x00000001u; // 800B8800
  W32(c->r[25]+0x00000008u,c->r[25]); // 800B8804
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800B8808
  W8(c->r[25]+0x0000000Cu,c->r[26]); // 800B880C
  if (!crb(c,2)) { goto L_800B8850; } // 800B8810
  c->r[27]=0u+0x80740000u; // 800B8814
  c->r[3]=c->r[27]+0x00004BC0u; // 800B8818
  c->lr=0x800B8820u; f_800506C0(c); // 800B881C
  c->r[6]=0u+0x806D0000u; // 800B8820
  c->r[4]=0u+0x80050000u; // 800B8824
  c->r[6]=c->r[6]+0xFFFFD848u; // 800B8828
  c->r[3]=c->r[27]+0x00004BC0u; // 800B882C
  c->r[0]=c->r[6]+0x00000008u; // 800B8830
  c->r[5]=0u+0x80750000u; // 800B8834
  W32(c->r[3]+0x00000010u,c->r[6]); // 800B8838
  c->r[4]=c->r[4]+0x00002050u; // 800B883C
  c->r[5]=c->r[5]+0x00002C34u; // 800B8840
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 800B8844
  c->lr=0x800B884Cu; f_803A92B8(c); // 800B8848
  W8(c->r[13]+0xFFFFBC20u,c->r[26]); // 800B884C
L_800B8850:;
  c->r[3]=0u+0x80740000u; // 800B8850
  c->r[5]=c->r[25]|c->r[25]; // 800B8854
  c->r[3]=c->r[3]+0x00004BC0u; // 800B8858
  c->r[4]=c->r[3]|c->r[3]; // 800B885C
  c->lr=0x800B8864u; f_802DDCA8(c); // 800B8860
  c->r[6]=0u+0x806D0000u; // 800B8864
  c->r[3]=0u+0x80740000u; // 800B8868
  c->r[6]=c->r[6]+0xFFFFD308u; // 800B886C
  c->r[4]=0u+0x80050000u; // 800B8870
  c->r[0]=c->r[6]+0x00000020u; // 800B8874
  c->r[5]=0u+0x80750000u; // 800B8878
  W32(c->r[25]+0x00000010u,c->r[6]); // 800B887C
  c->r[3]=c->r[3]+0xFFFFD740u; // 800B8880
  c->r[4]=c->r[4]+0x00001950u; // 800B8884
  c->r[5]=c->r[5]+0x00002C1Cu; // 800B8888
  W32(c->r[25]+0x00000014u,c->r[0]); // 800B888C
  c->lr=0x800B8894u; f_803A92B8(c); // 800B8890
  c->r[0]=0u+0x00000001u; // 800B8894
  W8(c->r[13]+0xFFFFBBD2u,c->r[0]); // 800B8898
L_800B889C:;
  c->r[3]=0u+0x80740000u; // 800B889C
  c->r[3]=c->r[3]+0xFFFFD740u; // 800B88A0
  c->lr=0x800B88A8u; f_800C60A4(c); // 800B88A4
  c->r[0]=cntlz(c->r[3]); // 800B88A8
  c->r[3]=c->r[28]|c->r[28]; // 800B88AC
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 800B88B0
  c->r[26]=rotl(c->r[29],2)&0xFFFFFFFCu; // 800B88B4
  c->r[25]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 800B88B8
  c->lr=0x800B88C0u; f_800B5150(c); // 800B88BC
  c->r[0]=c->r[26]+c->r[25]; // 800B88C0
  {uint32_t ea=c->r[2]+0xFFFFA004u; c->f[1]=c->ps1[1]=RF32(ea);} // 800B88C4
  c->r[3]=R32(c->r[3]+c->r[0]); // 800B88C8
  c->r[5]=c->r[30]|c->r[30]; // 800B88CC
  c->r[4]=0u+0x00000000u; // 800B88D0
  c->lr=0x800B88D8u; f_800AC630(c); // 800B88D4
  c->r[3]=c->r[28]|c->r[28]; // 800B88D8
  c->lr=0x800B88E0u; f_800B5150(c); // 800B88DC
  c->r[0]=c->r[26]+c->r[25]; // 800B88E0
  {uint32_t ea=c->r[2]+0xFFFFA004u; c->f[1]=c->ps1[1]=RF32(ea);} // 800B88E4
  c->r[3]=c->r[3]+c->r[0]; // 800B88E8
  c->r[4]=c->r[31]|c->r[31]; // 800B88EC
  c->r[3]=R32(c->r[3]+0x00000028u); // 800B88F0
  c->r[5]=0u+0xFFFFFFFFu; // 800B88F4
  c->lr=0x800B88FCu; f_800AC630(c); // 800B88F8
  c->r[11]=c->r[1]+0x00000070u; // 800B88FC
  c->lr=0x800B8904u; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800B8900
  c->r[0]=R32(c->r[1]+0x00000074u); // 800B8904
  c->lr=c->r[0]; // 800B8908
  c->r[1]=c->r[1]+0x00000070u; // 800B890C
  return; // 800B8910
}

// fn_800B8914
void f_800B8914(Ctx* __restrict c) {
  trace_call(0x800B8914u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B8914
  c->r[0]=c->lr; // 800B8918
  W32(c->r[1]+0x00000044u,c->r[0]); // 800B891C
  c->r[11]=c->r[1]+0x00000040u; // 800B8920
  c->lr=0x800B8928u; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800B8924
  c->r[25]=c->r[3]|c->r[3]; // 800B8928
  c->r[26]=c->r[4]|c->r[4]; // 800B892C
  c->r[30]=c->r[5]|c->r[5]; // 800B8930
  c->r[27]=c->r[6]|c->r[6]; // 800B8934
  c->r[28]=c->r[7]|c->r[7]; // 800B8938
  c->r[29]=c->r[8]|c->r[8]; // 800B893C
  c->lr=0x800B8944u; f_803209E8(c); // 800B8940
  cmpu(c,0,c->r[30],0x00000003u); // 800B8944
  if (!crb(c,1)) { goto L_800B8950; } // 800B8948
  c->r[30]=0u+0x00000000u; // 800B894C
L_800B8950:;
  c->r[31]=0u+0x00000000u; // 800B8950
  W8(c->r[1]+0x00000010u,c->r[31]); // 800B8954
  c->r[3]=c->r[1]+0x00000010u; // 800B8958
  c->lr=0x800B8960u; f_80046EFC(c); // 800B895C
  c->r[3]=R32(c->r[3]+0x000000BCu); // 800B8960
  c->lr=0x800B8968u; f_800B7284(c); // 800B8964
  c->r[3]=c->r[26]|c->r[26]; // 800B8968
  c->lr=0x800B8970u; f_800B5150(c); // 800B896C
  c->r[0]=rotl(c->r[30],2)&0xFFFFFFFCu; // 800B8970
  c->r[3]=c->r[3]+c->r[0]; // 800B8974
  c->r[30]=R32(c->r[3]+0x00000050u); // 800B8978
  c->lr=0x800B8980u; f_80323304(c); // 800B897C
  c->r[3]=c->r[3]+0x00000628u; // 800B8980
  c->lr=0x800B8988u; f_802A083C(c); // 800B8984
  {uint32_t ea=c->r[2]+0xFFFFA004u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B8988
  fcmp(c,0,c->f[1],c->f[0]); // 800B898C
  if (!crb(c,0)) { goto L_800B89DC; } // 800B8990
  c->lr=0x800B8998u; f_80323304(c); // 800B8994
  c->r[3]=c->r[3]+0x000006B4u; // 800B8998
  c->lr=0x800B89A0u; f_802A083C(c); // 800B899C
  {uint32_t ea=c->r[2]+0xFFFFA004u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B89A0
  fcmp(c,0,c->f[1],c->f[0]); // 800B89A4
  if (!crb(c,0)) { goto L_800B89DC; } // 800B89A8
  W8(c->r[1]+0x0000000Cu,c->r[31]); // 800B89AC
  c->r[3]=c->r[1]+0x0000000Cu; // 800B89B0
  c->lr=0x800B89B8u; f_80046D50(c); // 800B89B4
  c->lr=0x800B89BCu; f_8008CC78(c); // 800B89B8
  cmps(c,0,(int32_t)c->r[3],0); // 800B89BC
  if (crb(c,1)) { goto L_800B89DC; } // 800B89C0
  c->r[3]=R32(c->r[13]+0xFFFFBE10u); // 800B89C4
  c->r[4]=c->r[30]|c->r[30]; // 800B89C8
  c->r[5]=c->r[27]|c->r[27]; // 800B89CC
  c->r[6]=c->r[28]|c->r[28]; // 800B89D0
  c->r[7]=c->r[25]|c->r[25]; // 800B89D4
  c->lr=0x800B89DCu; f_80065FDC(c); // 800B89D8
L_800B89DC:;
  cmps(c,0,(int32_t)c->r[29],0); // 800B89DC
  if (crb(c,2)) { goto L_800B8A00; } // 800B89E0
  c->r[0]=0u+0x00000000u; // 800B89E4
  W8(c->r[1]+0x00000008u,c->r[0]); // 800B89E8
  c->r[3]=c->r[1]+0x00000008u; // 800B89EC
  c->lr=0x800B89F4u; f_80046EFC(c); // 800B89F0
  c->r[3]=R32(c->r[3]+0x000000BCu); // 800B89F4
  c->r[4]=c->r[25]|c->r[25]; // 800B89F8
  c->lr=0x800B8A00u; f_800B72A0(c); // 800B89FC
L_800B8A00:;
  c->r[11]=c->r[1]+0x00000040u; // 800B8A00
  c->lr=0x800B8A08u; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800B8A04
  c->r[0]=R32(c->r[1]+0x00000044u); // 800B8A08
  c->lr=c->r[0]; // 800B8A0C
  c->r[1]=c->r[1]+0x00000040u; // 800B8A10
  return; // 800B8A14
}

// fn_800B8A18
void f_800B8A18(Ctx* __restrict c) {
  trace_call(0x800B8A18u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B8A18
  c->r[0]=c->lr; // 800B8A1C
  cmpu(c,0,c->r[4],0x00000001u); // 800B8A20
  W32(c->r[1]+0x00000034u,c->r[0]); // 800B8A24
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[31]);} // 800B8A28
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,31,ea,0,0);} // 800B8A2C
  c->f[31]=c->f[1]; // 800B8A30
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800B8A34
  c->r[31]=c->r[4]|c->r[4]; // 800B8A38
  if (!crb(c,1)) { goto L_800B8A44; } // 800B8A3C
  c->r[31]=0u+0x00000000u; // 800B8A40
L_800B8A44:;
  c->lr=0x800B8A48u; f_800B5150(c); // 800B8A44
  c->r[0]=rotl(c->r[31],2)&0xFFFFFFFCu; // 800B8A48
  c->r[3]=c->r[3]+c->r[0]; // 800B8A4C
  c->r[31]=R32(c->r[3]+0x00000060u); // 800B8A50
  c->lr=0x800B8A58u; f_80323304(c); // 800B8A54
  c->r[3]=c->r[3]+0x00000628u; // 800B8A58
  c->lr=0x800B8A60u; f_802A083C(c); // 800B8A5C
  {uint32_t ea=c->r[2]+0xFFFFA004u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B8A60
  fcmp(c,0,c->f[1],c->f[0]); // 800B8A64
  if (!crb(c,0)) { goto L_800B8AFC; } // 800B8A68
  c->lr=0x800B8A70u; f_80323304(c); // 800B8A6C
  c->r[3]=c->r[3]+0x000006B4u; // 800B8A70
  c->lr=0x800B8A78u; f_802A083C(c); // 800B8A74
  {uint32_t ea=c->r[2]+0xFFFFA004u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B8A78
  fcmp(c,0,c->f[1],c->f[0]); // 800B8A7C
  if (!crb(c,0)) { goto L_800B8AFC; } // 800B8A80
  c->r[0]=0u+0x00000000u; // 800B8A84
  W8(c->r[1]+0x00000008u,c->r[0]); // 800B8A88
  c->r[3]=c->r[1]+0x00000008u; // 800B8A8C
  c->lr=0x800B8A94u; f_80046D50(c); // 800B8A90
  c->lr=0x800B8A98u; f_8008CC78(c); // 800B8A94
  cmps(c,0,(int32_t)c->r[3],0); // 800B8A98
  if (crb(c,1)) { goto L_800B8AFC; } // 800B8A9C
  cmps(c,0,(int32_t)c->r[31],0); // 800B8AA0
  if (crb(c,2)) { goto L_800B8AFC; } // 800B8AA4
  {uint32_t ea=c->r[2]+0xFFFFA000u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B8AA8
  fcmp(c,0,c->f[31],c->f[0]); // 800B8AAC
  if (!crb(c,1)) { goto L_800B8AFC; } // 800B8AB0
  {uint32_t ea=c->r[2]+0xFFFFA004u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B8AB4
  fcmp(c,0,c->f[31],c->f[0]); // 800B8AB8
  if (!crb(c,1)) { goto L_800B8AC4; } // 800B8ABC
  c->f[31]=c->f[0]; // 800B8AC0
L_800B8AC4:;
  c->r[3]=0u+0x80740000u; // 800B8AC4
  c->r[4]=0u+0x806D0000u; // 800B8AC8
  c->r[5]=c->r[31]|c->r[31]; // 800B8ACC
  c->r[6]=0u+0x00000000u; // 800B8AD0
  c->r[3]=c->r[3]+0x00004FD0u; // 800B8AD4
  c->r[4]=c->r[4]+0x00006F10u; // 800B8AD8
  c->lr=0x800B8AE0u; f_8005A7B0(c); // 800B8ADC
  c->r[31]=c->r[3]|c->r[3]; // 800B8AE0
  c->lr=0x800B8AE8u; f_8033FE4C(c); // 800B8AE4
  c->f[1]=c->f[31]; // 800B8AE8
  c->r[3]=R32(c->r[3]+0x0000021Cu); // 800B8AEC
  {uint32_t ea=c->r[2]+0xFFFFA004u; c->f[2]=c->ps1[2]=RF32(ea);} // 800B8AF0
  c->r[4]=c->r[31]|c->r[31]; // 800B8AF4
  c->lr=0x800B8AFCu; f_80332194(c); // 800B8AF8
L_800B8AFC:;
  c->r[0]=R32(c->r[1]+0x00000034u); // 800B8AFC
  {uint32_t ea=c->r[1]+0x00000028u; psq_load(c,31,ea,0,0);} // 800B8B00
  {uint32_t ea=c->r[1]+0x00000020u; c->f[31]=RF64(ea);} // 800B8B04
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800B8B08
  c->lr=c->r[0]; // 800B8B0C
  c->r[1]=c->r[1]+0x00000030u; // 800B8B10
  return; // 800B8B14
}

// fn_800B8B18
void f_800B8B18(Ctx* __restrict c) {
  trace_call(0x800B8B18u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B8B18
  c->r[0]=c->lr; // 800B8B1C
  cmpu(c,0,c->r[4],0x00000001u); // 800B8B20
  W32(c->r[1]+0x00000024u,c->r[0]); // 800B8B24
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800B8B28
  c->r[31]=c->r[4]|c->r[4]; // 800B8B2C
  W32(c->r[1]+0x00000018u,c->r[30]); // 800B8B30
  c->r[30]=c->r[5]|c->r[5]; // 800B8B34
  if (!crb(c,1)) { goto L_800B8B40; } // 800B8B38
  c->r[31]=0u+0x00000000u; // 800B8B3C
L_800B8B40:;
  cmpu(c,0,c->r[5],0x00000003u); // 800B8B40
  if (!crb(c,1)) { goto L_800B8B4C; } // 800B8B44
  c->r[30]=0u+0x00000000u; // 800B8B48
L_800B8B4C:;
  c->lr=0x800B8B50u; f_800B5150(c); // 800B8B4C
  c->r[0]=rotl(c->r[31],2)&0xFFFFFFFCu; // 800B8B50
  c->r[3]=c->r[3]+c->r[0]; // 800B8B54
  c->r[31]=R32(c->r[3]+0x00000068u); // 800B8B58
  c->lr=0x800B8B60u; f_80323304(c); // 800B8B5C
  c->r[3]=c->r[3]+0x00000628u; // 800B8B60
  c->lr=0x800B8B68u; f_802A083C(c); // 800B8B64
  {uint32_t ea=c->r[2]+0xFFFFA004u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B8B68
  fcmp(c,0,c->f[1],c->f[0]); // 800B8B6C
  if (!crb(c,0)) { goto L_800B8BB4; } // 800B8B70
  c->lr=0x800B8B78u; f_80323304(c); // 800B8B74
  c->r[3]=c->r[3]+0x000006B4u; // 800B8B78
  c->lr=0x800B8B80u; f_802A083C(c); // 800B8B7C
  {uint32_t ea=c->r[2]+0xFFFFA004u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B8B80
  fcmp(c,0,c->f[1],c->f[0]); // 800B8B84
  if (!crb(c,0)) { goto L_800B8BB4; } // 800B8B88
  c->r[0]=0u+0x00000000u; // 800B8B8C
  W8(c->r[1]+0x00000008u,c->r[0]); // 800B8B90
  c->r[3]=c->r[1]+0x00000008u; // 800B8B94
  c->lr=0x800B8B9Cu; f_80046D50(c); // 800B8B98
  c->lr=0x800B8BA0u; f_8008CC78(c); // 800B8B9C
  cmps(c,0,(int32_t)c->r[3],0); // 800B8BA0
  if (crb(c,1)) { goto L_800B8BB4; } // 800B8BA4
  c->r[3]=c->r[31]|c->r[31]; // 800B8BA8
  c->r[4]=c->r[30]|c->r[30]; // 800B8BAC
  c->lr=0x800B8BB4u; f_800735F8(c); // 800B8BB0
L_800B8BB4:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 800B8BB4
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800B8BB8
  c->r[30]=R32(c->r[1]+0x00000018u); // 800B8BBC
  c->lr=c->r[0]; // 800B8BC0
  c->r[1]=c->r[1]+0x00000020u; // 800B8BC4
  return; // 800B8BC8
}

// fn_800B8BCC
void f_800B8BCC(Ctx* __restrict c) {
  trace_call(0x800B8BCCu);
  {uint32_t ea=c->r[2]+0xFFFFA000u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B8BCC
  c->r[6]=0u+0x00000000u; // 800B8BD0
  c->r[5]=0u+0x00000006u; // 800B8BD4
  c->r[4]=0u+0x00000001u; // 800B8BD8
  c->r[0]=0u+0xFFFFFFFFu; // 800B8BDC
  W32(c->r[3]+0x00000004u,c->r[6]); // 800B8BE0
  W32(c->r[3]+0x00000008u,c->r[6]); // 800B8BE4
  {uint32_t ea=c->r[3]+0x0000000Cu; WF32(ea,c->f[0]);} // 800B8BE8
  {uint32_t ea=c->r[3]+0x00000010u; WF32(ea,c->f[0]);} // 800B8BEC
  {uint32_t ea=c->r[3]+0x00000014u; WF32(ea,c->f[0]);} // 800B8BF0
  W32(c->r[3]+0x00000018u,c->r[6]); // 800B8BF4
  W32(c->r[3]+0x0000001Cu,c->r[6]); // 800B8BF8
  W32(c->r[3]+0x00000020u,c->r[6]); // 800B8BFC
  W32(c->r[3]+0x00000024u,c->r[5]); // 800B8C00
  W32(c->r[3]+0x00000028u,c->r[4]); // 800B8C04
  W32(c->r[3]+0x0000002Cu,c->r[0]); // 800B8C08
  return; // 800B8C0C
}

// fn_800B8C10
void f_800B8C10(Ctx* __restrict c) {
  trace_call(0x800B8C10u);
  {uint32_t ea=c->r[1]+0xFFFFFE80u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B8C10
  c->r[0]=c->lr; // 800B8C14
  W32(c->r[1]+0x00000184u,c->r[0]); // 800B8C18
  c->r[11]=c->r[1]+0x00000100u; // 800B8C1C
  {uint32_t ea=c->r[1]+0x00000170u; WF64(ea,c->f[31]);} // 800B8C20
  {uint32_t ea=c->r[1]+0x00000178u; psq_store(c,31,ea,0,0);} // 800B8C24
  {uint32_t ea=c->r[1]+0x00000160u; WF64(ea,c->f[30]);} // 800B8C28
  {uint32_t ea=c->r[1]+0x00000168u; psq_store(c,30,ea,0,0);} // 800B8C2C
  {uint32_t ea=c->r[1]+0x00000150u; WF64(ea,c->f[29]);} // 800B8C30
  {uint32_t ea=c->r[1]+0x00000158u; psq_store(c,29,ea,0,0);} // 800B8C34
  {uint32_t ea=c->r[1]+0x00000140u; WF64(ea,c->f[28]);} // 800B8C38
  {uint32_t ea=c->r[1]+0x00000148u; psq_store(c,28,ea,0,0);} // 800B8C3C
  {uint32_t ea=c->r[1]+0x00000130u; WF64(ea,c->f[27]);} // 800B8C40
  {uint32_t ea=c->r[1]+0x00000138u; psq_store(c,27,ea,0,0);} // 800B8C44
  {uint32_t ea=c->r[1]+0x00000120u; WF64(ea,c->f[26]);} // 800B8C48
  {uint32_t ea=c->r[1]+0x00000128u; psq_store(c,26,ea,0,0);} // 800B8C4C
  {uint32_t ea=c->r[1]+0x00000110u; WF64(ea,c->f[25]);} // 800B8C50
  {uint32_t ea=c->r[1]+0x00000118u; psq_store(c,25,ea,0,0);} // 800B8C54
  {uint32_t ea=c->r[1]+0x00000100u; WF64(ea,c->f[24]);} // 800B8C58
  {uint32_t ea=c->r[1]+0x00000108u; psq_store(c,24,ea,0,0);} // 800B8C5C
  c->lr=0x800B8C64u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800B8C60
  c->r[0]=R32(c->r[3]+0x0000002Cu); // 800B8C64
  c->r[31]=c->r[3]|c->r[3]; // 800B8C68
  cmps(c,0,(int32_t)c->r[0],0); // 800B8C6C
  if (!crb(c,0)) { goto L_800B8C7C; } // 800B8C70
  c->r[3]=0u+0x00000000u; // 800B8C74
  goto L_800B91A4; // 800B8C78
L_800B8C7C:;
  c->r[0]=R8(c->r[13]+0xFFFFBB9Au); // 800B8C7C
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800B8C80
  if (!crb(c,2)) { goto L_800B8CC0; } // 800B8C84
  c->r[29]=0u+0x80730000u; // 800B8C88
  c->r[3]=c->r[29]+0x000069F8u; // 800B8C8C
  c->lr=0x800B8C94u; f_80299654(c); // 800B8C90
  c->r[3]=0u+0x806D0000u; // 800B8C94
  c->r[4]=0u+0x80050000u; // 800B8C98
  c->r[3]=c->r[3]+0xFFFFC230u; // 800B8C9C
  c->r[5]=0u+0x80750000u; // 800B8CA0
  W32(c->r[29]+0x000069F8u,c->r[3]); // 800B8CA4
  c->r[3]=c->r[29]+0x000069F8u; // 800B8CA8
  c->r[4]=c->r[4]+0xFFFF9D7Cu; // 800B8CAC
  c->r[5]=c->r[5]+0x00002C28u; // 800B8CB0
  c->lr=0x800B8CB8u; f_803A92B8(c); // 800B8CB4
  c->r[0]=0u+0x00000001u; // 800B8CB8
  W8(c->r[13]+0xFFFFBB9Au,c->r[0]); // 800B8CBC
L_800B8CC0:;
  c->r[3]=0u+0x80730000u; // 800B8CC0
  c->r[3]=c->r[3]+0x000069F8u; // 800B8CC4
  c->r[3]=R32(c->r[3]+0x00000004u); // 800B8CC8
  c->lr=0x800B8CD0u; f_804CC8D4(c); // 800B8CCC
  W32(c->r[1]+0x00000028u,c->r[3]); // 800B8CD0
  c->r[3]=c->r[1]+0x00000028u; // 800B8CD4
  c->r[4]=c->r[1]+0x00000068u; // 800B8CD8
  c->lr=0x800B8CE0u; f_804C7AC0(c); // 800B8CDC
  c->r[0]=0u+0x00000000u; // 800B8CE0
  W8(c->r[1]+0x00000024u,c->r[0]); // 800B8CE4
  c->r[3]=c->r[1]+0x00000024u; // 800B8CE8
  c->lr=0x800B8CF0u; f_80046EFC(c); // 800B8CEC
  c->r[4]=R32(c->r[31]+0x0000002Cu); // 800B8CF0
  c->r[5]=c->r[1]+0x0000005Cu; // 800B8CF4
  c->r[6]=0u+0x00000000u; // 800B8CF8
  c->r[7]=0u+0x00000000u; // 800B8CFC
  c->r[8]=0u+0x00000000u; // 800B8D00
  c->r[9]=0u+0x00000000u; // 800B8D04
  c->lr=0x800B8D0Cu; f_800B2400(c); // 800B8D08
  c->r[3]=c->r[1]+0x000000A8u; // 800B8D0C
  c->lr=0x800B8D14u; f_80382F00(c); // 800B8D10
  {uint32_t ea=c->r[1]+0x000000A8u; c->f[5]=c->ps1[5]=RF32(ea);} // 800B8D14
  c->r[3]=c->r[1]+0x00000068u; // 800B8D18
  {uint32_t ea=c->r[1]+0x000000B8u; c->f[4]=c->ps1[4]=RF32(ea);} // 800B8D1C
  c->r[4]=c->r[1]+0x0000005Cu; // 800B8D20
  {uint32_t ea=c->r[1]+0x000000C8u; c->f[3]=c->ps1[3]=RF32(ea);} // 800B8D24
  c->r[5]=c->r[1]+0x0000002Cu; // 800B8D28
  {uint32_t ea=c->r[1]+0x000000ACu; c->f[2]=c->ps1[2]=RF32(ea);} // 800B8D2C
  {uint32_t ea=c->r[1]+0x000000BCu; c->f[1]=c->ps1[1]=RF32(ea);} // 800B8D30
  {uint32_t ea=c->r[1]+0x000000CCu; c->f[0]=c->ps1[0]=RF32(ea);} // 800B8D34
  {uint32_t ea=c->r[1]+0x00000050u; WF32(ea,c->f[5]);} // 800B8D38
  {uint32_t ea=c->r[1]+0x00000054u; WF32(ea,c->f[4]);} // 800B8D3C
  {uint32_t ea=c->r[1]+0x00000058u; WF32(ea,c->f[3]);} // 800B8D40
  {uint32_t ea=c->r[1]+0x00000044u; WF32(ea,c->f[2]);} // 800B8D44
  {uint32_t ea=c->r[1]+0x00000048u; WF32(ea,c->f[1]);} // 800B8D48
  {uint32_t ea=c->r[1]+0x0000004Cu; WF32(ea,c->f[0]);} // 800B8D4C
  {uint32_t ea=c->r[4]+0x00000000u; psq_load(c,0,ea,0,0);} // 800B8D50
  {uint32_t ea=c->r[3]+0x00000000u; psq_load(c,1,ea,0,0);} // 800B8D54
  {double t0=S(c->f[0]-c->f[1]), t1=S(c->ps1[0]-c->ps1[1]); c->f[0]=t0; c->ps1[0]=t1;} // 800B8D58
  {uint32_t ea=c->r[5]+0x00000000u; psq_store(c,0,ea,0,0);} // 800B8D5C
  {uint32_t ea=c->r[4]+0x00000008u; psq_load(c,0,ea,1,0);} // 800B8D60
  {uint32_t ea=c->r[3]+0x00000008u; psq_load(c,1,ea,1,0);} // 800B8D64
  {double t0=S(c->f[0]-c->f[1]), t1=S(c->ps1[0]-c->ps1[1]); c->f[0]=t0; c->ps1[0]=t1;} // 800B8D68
  {uint32_t ea=c->r[5]+0x00000008u; psq_store(c,0,ea,1,0);} // 800B8D6C
  c->r[3]=c->r[1]+0x00000038u; // 800B8D70
  {uint32_t ea=c->r[1]+0x00000030u; c->f[1]=c->ps1[1]=RF32(ea);} // 800B8D74
  {uint32_t ea=c->r[1]+0x00000034u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B8D78
  {uint32_t ea=c->r[1]+0x0000002Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 800B8D7C
  {uint32_t ea=c->r[1]+0x0000003Cu; WF32(ea,c->f[1]);} // 800B8D80
  {uint32_t ea=c->r[1]+0x00000040u; WF32(ea,c->f[0]);} // 800B8D84
  {uint32_t ea=c->r[1]+0x00000038u; WF32(ea,c->f[2]);} // 800B8D88
  {uint32_t ea=c->r[3]+0x00000004u; psq_load(c,1,ea,0,0);} // 800B8D8C
  {double t0=S(c->f[1]*c->f[1]), t1=S(c->ps1[1]*c->ps1[1]); c->f[0]=t0; c->ps1[0]=t1;} // 800B8D90
  c->f[1]=c->ps1[1]=S(c->f[2]); // 800B8D94
  {double t0=S(c->f[0]+c->ps1[0]), t1=S(c->ps1[1]); c->f[0]=t0; c->ps1[0]=t1;} // 800B8D98
  {double t0=S(std::fma(c->f[1],c->ps1[0],c->f[0])), t1=S(std::fma(c->ps1[1],c->ps1[0],c->ps1[0])); c->f[1]=t0; c->ps1[1]=t1;} // 800B8D9C
  {uint32_t ea=c->r[2]+0xFFFFA014u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B8DA0
  fcmp(c,0,c->f[1],c->f[0]); // 800B8DA4
  c->r[0]=c->cr; // 800B8DA8
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 800B8DAC
  if (!crb(c,2)) { goto L_800B8DC4; } // 800B8DB0
  c->r[5]=0u+0x806A0000u; // 800B8DB4
  c->r[4]=c->r[3]|c->r[3]; // 800B8DB8
  c->r[5]=c->r[5]+0x00000AA8u; // 800B8DBC
  c->lr=0x800B8DC4u; f_8030E0BC(c); // 800B8DC0
L_800B8DC4:;
  c->r[3]=c->r[1]+0x00000050u; // 800B8DC4
  c->r[4]=c->r[1]+0x00000038u; // 800B8DC8
  c->lr=0x800B8DD0u; f_800B3C8C(c); // 800B8DCC
  c->lr=0x800B8DD4u; f_800B3C84(c); // 800B8DD0
  c->f[24]=c->f[1]; // 800B8DD4
  c->r[3]=c->r[1]+0x00000044u; // 800B8DD8
  c->r[4]=c->r[1]+0x00000038u; // 800B8DDC
  c->lr=0x800B8DE4u; f_800B3C8C(c); // 800B8DE0
  c->lr=0x800B8DE8u; f_800B3C84(c); // 800B8DE4
  fcmp(c,0,c->f[24],c->f[1]); // 800B8DE8
  if (!crb(c,0)) { goto L_800B8E14; } // 800B8DEC
  c->r[3]=c->r[1]+0x00000038u; // 800B8DF0
  c->r[4]=c->r[1]+0x00000050u; // 800B8DF4
  c->r[5]=c->r[1]+0x00000044u; // 800B8DF8
  c->lr=0x800B8E00u; f_80383DE0(c); // 800B8DFC
  c->r[3]=c->r[1]+0x00000044u; // 800B8E00
  c->r[4]=c->r[1]+0x00000038u; // 800B8E04
  c->r[5]=c->r[1]+0x00000050u; // 800B8E08
  c->lr=0x800B8E10u; f_80383DE0(c); // 800B8E0C
  goto L_800B8E34; // 800B8E10
L_800B8E14:;
  c->r[3]=c->r[1]+0x00000044u; // 800B8E14
  c->r[4]=c->r[1]+0x00000038u; // 800B8E18
  c->r[5]=c->r[1]+0x00000050u; // 800B8E1C
  c->lr=0x800B8E24u; f_80383DE0(c); // 800B8E20
  c->r[3]=c->r[1]+0x00000038u; // 800B8E24
  c->r[4]=c->r[1]+0x00000050u; // 800B8E28
  c->r[5]=c->r[1]+0x00000044u; // 800B8E2C
  c->lr=0x800B8E34u; f_80383DE0(c); // 800B8E30
L_800B8E34:;
  c->r[3]=R32(c->r[31]+0x00000020u); // 800B8E34
  c->lr=0x800B8E3Cu; f_800B0548(c); // 800B8E38
  c->r[3]=R32(c->r[3]+0x00000014u); // 800B8E3C
  c->r[0]=0u+0x43300000u; // 800B8E40
  W32(c->r[1]+0x000000D8u,c->r[0]); // 800B8E44
  c->r[0]=sraw(c,c->r[3],16); // 800B8E48
  {uint32_t ea=c->r[2]+0xFFFFA028u; c->f[2]=RF64(ea);} // 800B8E4C
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[0]; // 800B8E50
  {uint32_t ea=c->r[2]+0xFFFFA018u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B8E54
  c->r[0]=c->r[0]^0x80000000u; // 800B8E58
  W32(c->r[1]+0x000000DCu,c->r[0]); // 800B8E5C
  c->r[3]=R32(c->r[31]+0x00000020u); // 800B8E60
  {uint32_t ea=c->r[1]+0x000000D8u; c->f[1]=RF64(ea);} // 800B8E64
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 800B8E68
  c->f[30]=c->ps1[30]=S(c->f[0]*c->f[1]); // 800B8E6C
  c->lr=0x800B8E74u; f_800B0548(c); // 800B8E70
  c->r[28]=R32(c->r[3]+0x00000010u); // 800B8E74
  cmps(c,0,(int32_t)c->r[28],1); // 800B8E78
  if (!crb(c,0)) { goto L_800B8E84; } // 800B8E7C
  c->r[28]=0u+0x00000001u; // 800B8E80
L_800B8E84:;
  c->r[0]=c->r[28]^0x80000000u; // 800B8E84
  c->r[29]=0u+0x43300000u; // 800B8E88
  W32(c->r[1]+0x000000E4u,c->r[0]); // 800B8E8C
  c->r[26]=0u+0x00000000u; // 800B8E90
  {uint32_t ea=c->r[2]+0xFFFFA028u; c->f[31]=RF64(ea);} // 800B8E94
  c->r[27]=0u+0x00000000u; // 800B8E98
  W32(c->r[1]+0x000000E0u,c->r[29]); // 800B8E9C
  c->r[30]=0u+0x00000000u; // 800B8EA0
  {uint32_t ea=c->r[2]+0xFFFFA000u; c->f[29]=c->ps1[29]=RF32(ea);} // 800B8EA4
  {uint32_t ea=c->r[1]+0x000000E0u; c->f[0]=RF64(ea);} // 800B8EA8
  c->f[26]=c->f[29]; // 800B8EAC
  {uint32_t ea=c->r[2]+0xFFFFA01Cu; c->f[24]=c->ps1[24]=RF32(ea);} // 800B8EB0
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[31]); // 800B8EB4
  {uint32_t ea=c->r[2]+0xFFFFA020u; c->f[25]=c->ps1[25]=RF32(ea);} // 800B8EB8
  c->f[28]=c->f[29]; // 800B8EBC
  {uint32_t ea=c->r[2]+0xFFFFA004u; c->f[27]=c->ps1[27]=RF32(ea);} // 800B8EC0
  c->f[30]=c->ps1[30]=S(c->f[30]/c->f[0]); // 800B8EC4
  goto L_800B8FF4; // 800B8EC8
L_800B8ECC:;
  {uint32_t ea=c->r[1]+0x00000050u; c->f[8]=c->ps1[8]=RF32(ea);} // 800B8ECC
  {uint32_t ea=c->r[1]+0x00000054u; c->f[7]=c->ps1[7]=RF32(ea);} // 800B8ED0
  {uint32_t ea=c->r[1]+0x00000058u; c->f[6]=c->ps1[6]=RF32(ea);} // 800B8ED4
  {uint32_t ea=c->r[1]+0x00000044u; c->f[5]=c->ps1[5]=RF32(ea);} // 800B8ED8
  {uint32_t ea=c->r[1]+0x00000048u; c->f[4]=c->ps1[4]=RF32(ea);} // 800B8EDC
  {uint32_t ea=c->r[1]+0x0000004Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 800B8EE0
  {uint32_t ea=c->r[1]+0x00000038u; c->f[2]=c->ps1[2]=RF32(ea);} // 800B8EE4
  {uint32_t ea=c->r[1]+0x0000003Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800B8EE8
  {uint32_t ea=c->r[1]+0x00000040u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B8EEC
  {uint32_t ea=c->r[1]+0x000000A8u; WF32(ea,c->f[8]);} // 800B8EF0
  {uint32_t ea=c->r[1]+0x000000B8u; WF32(ea,c->f[7]);} // 800B8EF4
  {uint32_t ea=c->r[1]+0x000000C8u; WF32(ea,c->f[6]);} // 800B8EF8
  {uint32_t ea=c->r[1]+0x000000ACu; WF32(ea,c->f[5]);} // 800B8EFC
  {uint32_t ea=c->r[1]+0x000000BCu; WF32(ea,c->f[4]);} // 800B8F00
  {uint32_t ea=c->r[1]+0x000000CCu; WF32(ea,c->f[3]);} // 800B8F04
  {uint32_t ea=c->r[1]+0x000000B0u; WF32(ea,c->f[2]);} // 800B8F08
  {uint32_t ea=c->r[1]+0x000000C0u; WF32(ea,c->f[1]);} // 800B8F0C
  {uint32_t ea=c->r[1]+0x000000D0u; WF32(ea,c->f[0]);} // 800B8F10
  c->lr=0x800B8F18u; f_803B220C(c); // 800B8F14
  c->r[0]=c->r[3]^0x80000000u; // 800B8F18
  W32(c->r[1]+0x000000E4u,c->r[0]); // 800B8F1C
  {uint32_t ea=c->r[2]+0xFFFFA000u; c->f[1]=c->ps1[1]=RF32(ea);} // 800B8F20
  c->r[3]=c->r[1]+0x00000078u; // 800B8F24
  W32(c->r[1]+0x000000E0u,c->r[29]); // 800B8F28
  c->f[2]=c->f[1]; // 800B8F2C
  {uint32_t ea=c->r[1]+0x000000E0u; c->f[0]=RF64(ea);} // 800B8F30
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[31]); // 800B8F34
  c->f[0]=c->ps1[0]=S(c->f[24]*c->f[0]); // 800B8F38
  c->f[3]=c->ps1[3]=S(c->f[25]*c->f[0]); // 800B8F3C
  c->lr=0x800B8F44u; f_804E18A0(c); // 800B8F40
  c->r[3]=c->r[1]+0x000000A8u; // 800B8F44
  c->r[4]=c->r[1]+0x00000078u; // 800B8F48
  c->r[5]=c->r[3]|c->r[3]; // 800B8F4C
  c->lr=0x800B8F54u; f_80382F60(c); // 800B8F50
  {uint32_t ea=c->r[2]+0xFFFFA000u; c->f[2]=c->ps1[2]=RF32(ea);} // 800B8F54
  c->f[1]=c->ps1[1]=S(c->f[25]*c->f[29]); // 800B8F58
  c->r[3]=c->r[1]+0x00000078u; // 800B8F5C
  c->f[3]=c->f[2]; // 800B8F60
  c->lr=0x800B8F68u; f_804E18A0(c); // 800B8F64
  c->r[3]=c->r[1]+0x000000A8u; // 800B8F68
  c->r[4]=c->r[1]+0x00000078u; // 800B8F6C
  c->r[5]=c->r[3]|c->r[3]; // 800B8F70
  c->lr=0x800B8F78u; f_80382F60(c); // 800B8F74
  c->f[29]=c->ps1[29]=S(c->f[29]+c->f[30]); // 800B8F78
  c->r[4]=c->r[1]+0x0000005Cu; // 800B8F7C
  {uint32_t ea=c->r[1]+0x0000005Cu; WF32(ea,c->f[26]);} // 800B8F80
  c->r[5]=c->r[4]|c->r[4]; // 800B8F84
  c->r[3]=c->r[1]+0x000000A8u; // 800B8F88
  {uint32_t ea=c->r[1]+0x00000060u; WF32(ea,c->f[26]);} // 800B8F8C
  {uint32_t ea=c->r[1]+0x00000064u; WF32(ea,c->f[27]);} // 800B8F90
  c->lr=0x800B8F98u; f_80383AA0(c); // 800B8F94
  {uint32_t ea=c->r[1]+0x0000005Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800B8F98
  fcmp(c,0,c->f[28],c->f[0]); // 800B8F9C
  if (!crb(c,2)) { goto L_800B8FBC; } // 800B8FA0
  {uint32_t ea=c->r[1]+0x00000060u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B8FA4
  fcmp(c,0,c->f[28],c->f[0]); // 800B8FA8
  if (!crb(c,2)) { goto L_800B8FBC; } // 800B8FAC
  {uint32_t ea=c->r[1]+0x00000064u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B8FB0
  fcmp(c,0,c->f[28],c->f[0]); // 800B8FB4
  if (crb(c,2)) { goto L_800B8FF0; } // 800B8FB8
L_800B8FBC:;
  W8(c->r[1]+0x00000020u,c->r[30]); // 800B8FBC
  c->r[3]=c->r[1]+0x00000020u; // 800B8FC0
  c->lr=0x800B8FC8u; f_80046EFC(c); // 800B8FC4
  c->r[3]=R32(c->r[3]+0x000000BCu); // 800B8FC8
  c->r[5]=c->r[1]+0x0000005Cu; // 800B8FCC
  c->r[6]=R32(c->r[31]+0x00000020u); // 800B8FD0
  c->r[8]=rotl(c->r[27],0)&0x00000003u; // 800B8FD4
  c->r[7]=R32(c->r[31]+0x0000002Cu); // 800B8FD8
  c->r[4]=0u+0x00000000u; // 800B8FDC
  c->lr=0x800B8FE4u; f_800B6AE4(c); // 800B8FE0
  cmps(c,0,(int32_t)c->r[3],0); // 800B8FE4
  if (crb(c,2)) { goto L_800B8FF0; } // 800B8FE8
  c->r[26]=c->r[26]+0x00000001u; // 800B8FEC
L_800B8FF0:;
  c->r[27]=c->r[27]+0x00000001u; // 800B8FF0
L_800B8FF4:;
  cmps(c,0,(int32_t)c->r[27],(int32_t)c->r[28]); // 800B8FF4
  if (crb(c,0)) { IRQCHK(c); goto L_800B8ECC; } // 800B8FF8
  cmps(c,0,(int32_t)c->r[26],0); // 800B8FFC
  if (!crb(c,1)) { goto L_800B91A0; } // 800B9000
  c->r[3]=R32(c->r[31]+0x00000020u); // 800B9004
  c->lr=0x800B900Cu; f_800B5150(c); // 800B9008
  c->r[0]=R32(c->r[3]+0x0000008Cu); // 800B900C
  c->r[0]=rotl(c->r[0],0)&0x00000040u; cr0(c,c->r[0]); // 800B9010
  if (!crb(c,2)) { goto L_800B9038; } // 800B9014
  c->r[0]=0u+0x00000000u; // 800B9018
  W8(c->r[1]+0x0000001Cu,c->r[0]); // 800B901C
  c->r[3]=c->r[1]+0x0000001Cu; // 800B9020
  c->lr=0x800B9028u; f_80046F74(c); // 800B9024
  c->lr=0x800B902Cu; f_800BFDB8(c); // 800B9028
  c->r[4]=R32(c->r[31]+0x00000024u); // 800B902C
  c->r[5]=0u+0x00000001u; // 800B9030
  c->lr=0x800B9038u; f_800CDD44(c); // 800B9034
L_800B9038:;
  c->r[0]=R32(c->r[31]+0x00000020u); // 800B9038
  cmps(c,0,(int32_t)c->r[0],9); // 800B903C
  if (crb(c,2)) { goto L_800B9060; } // 800B9040
  c->r[0]=0u+0x00000000u; // 800B9044
  W8(c->r[1]+0x00000018u,c->r[0]); // 800B9048
  c->r[3]=c->r[1]+0x00000018u; // 800B904C
  c->lr=0x800B9054u; f_80046F74(c); // 800B9050
  c->lr=0x800B9058u; f_800BFDC8(c); // 800B9054
  c->lr=0x800B905Cu; f_8026D5D0(c); // 800B9058
  goto L_800B9078; // 800B905C
L_800B9060:;
  c->r[0]=0u+0x00000000u; // 800B9060
  W8(c->r[1]+0x00000014u,c->r[0]); // 800B9064
  c->r[3]=c->r[1]+0x00000014u; // 800B9068
  c->lr=0x800B9070u; f_80046F74(c); // 800B906C
  c->lr=0x800B9074u; f_800BFDC8(c); // 800B9070
  c->lr=0x800B9078u; f_8026D5F4(c); // 800B9074
L_800B9078:;
  c->r[0]=R32(c->r[31]+0x00000020u); // 800B9078
  cmps(c,0,(int32_t)c->r[0],8); // 800B907C
  if (crb(c,2)) { goto L_800B90A0; } // 800B9080
  c->r[0]=0u+0x00000000u; // 800B9084
  W8(c->r[1]+0x00000010u,c->r[0]); // 800B9088
  c->r[3]=c->r[1]+0x00000010u; // 800B908C
  c->lr=0x800B9094u; f_80046F74(c); // 800B9090
  c->lr=0x800B9098u; f_800BFDC8(c); // 800B9094
  c->lr=0x800B909Cu; f_8026D6A8(c); // 800B9098
  goto L_800B90B8; // 800B909C
L_800B90A0:;
  c->r[0]=0u+0x00000000u; // 800B90A0
  W8(c->r[1]+0x0000000Cu,c->r[0]); // 800B90A4
  c->r[3]=c->r[1]+0x0000000Cu; // 800B90A8
  c->lr=0x800B90B0u; f_80046F74(c); // 800B90AC
  c->lr=0x800B90B4u; f_800BFDC8(c); // 800B90B0
  c->lr=0x800B90B8u; f_8026D6E4(c); // 800B90B4
L_800B90B8:;
  c->r[3]=R32(c->r[31]+0x00000020u); // 800B90B8
  c->lr=0x800B90C0u; f_800B5150(c); // 800B90BC
  c->r[0]=R32(c->r[3]+0x00000090u); // 800B90C0
  cmps(c,0,(int32_t)c->r[0],0); // 800B90C4
  if (crb(c,0)) { goto L_800B90F8; } // 800B90C8
  c->r[0]=0u+0x00000000u; // 800B90CC
  W8(c->r[1]+0x00000008u,c->r[0]); // 800B90D0
  c->r[3]=c->r[1]+0x00000008u; // 800B90D4
  c->lr=0x800B90DCu; f_80046EFC(c); // 800B90D8
  c->r[29]=R32(c->r[3]+0x000000C0u); // 800B90DC
  c->r[3]=R32(c->r[31]+0x00000020u); // 800B90E0
  c->lr=0x800B90E8u; f_800B5150(c); // 800B90E4
  c->r[5]=R32(c->r[3]+0x00000090u); // 800B90E8
  c->r[3]=c->r[29]|c->r[29]; // 800B90EC
  c->r[4]=R32(c->r[31]+0x0000002Cu); // 800B90F0
  c->lr=0x800B90F8u; f_800B759C(c); // 800B90F4
L_800B90F8:;
  c->r[3]=R32(c->r[31]+0x00000020u); // 800B90F8
  c->r[4]=0u+0x00000000u; // 800B90FC
  c->r[5]=R32(c->r[31]+0x0000002Cu); // 800B9100
  c->r[6]=0u+0x00000000u; // 800B9104
  c->lr=0x800B910Cu; f_800B87A0(c); // 800B9108
  c->r[3]=R32(c->r[31]+0x00000020u); // 800B910C
  c->r[4]=0u+0x00000000u; // 800B9110
  {uint32_t ea=c->r[2]+0xFFFFA004u; c->f[1]=c->ps1[1]=RF32(ea);} // 800B9114
  c->lr=0x800B911Cu; f_800B8A18(c); // 800B9118
  c->r[3]=R32(c->r[31]+0x00000020u); // 800B911C
  c->r[4]=0u+0x00000000u; // 800B9120
  c->r[5]=R32(c->r[31]+0x0000002Cu); // 800B9124
  c->lr=0x800B912Cu; f_800B8B18(c); // 800B9128
  c->r[3]=R32(c->r[31]+0x00000020u); // 800B912C
  c->lr=0x800B9134u; f_800B0548(c); // 800B9130
  {uint32_t ea=c->r[3]+0x0000001Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800B9134
  {uint32_t ea=c->r[31]+0x00000010u; WF32(ea,c->f[0]);} // 800B9138
  c->r[0]=R8(c->r[13]+0xFFFFBBF9u); // 800B913C
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800B9140
  if (!crb(c,2)) { goto L_800B9188; } // 800B9144
  c->r[30]=0u+0x80740000u; // 800B9148
  c->r[3]=c->r[30]+0x00002B7Cu; // 800B914C
  c->lr=0x800B9154u; f_8019BBB4(c); // 800B9150
  c->r[6]=0u+0x806D0000u; // 800B9154
  c->r[4]=0u+0x80050000u; // 800B9158
  c->r[6]=c->r[6]+0xFFFFCD00u; // 800B915C
  c->r[3]=c->r[30]+0x00002B7Cu; // 800B9160
  c->r[0]=c->r[6]+0x00000028u; // 800B9164
  c->r[5]=0u+0x80750000u; // 800B9168
  W32(c->r[3]+0x000000A4u,c->r[6]); // 800B916C
  c->r[4]=c->r[4]+0x000009ACu; // 800B9170
  c->r[5]=c->r[5]+0x00002C10u; // 800B9174
  W32(c->r[3]+0x000000A8u,c->r[0]); // 800B9178
  c->lr=0x800B9180u; f_803A92B8(c); // 800B917C
  c->r[0]=0u+0x00000001u; // 800B9180
  W8(c->r[13]+0xFFFFBBF9u,c->r[0]); // 800B9184
L_800B9188:;
  c->r[3]=0u+0x80740000u; // 800B9188
  c->r[4]=R32(c->r[31]+0x0000002Cu); // 800B918C
  c->r[3]=c->r[3]+0x00002B7Cu; // 800B9190
  c->lr=0x800B9198u; f_8019C030(c); // 800B9194
  c->r[3]=0u+0x00000001u; // 800B9198
  goto L_800B91A4; // 800B919C
L_800B91A0:;
  c->r[3]=0u+0x00000000u; // 800B91A0
L_800B91A4:;
  c->r[11]=c->r[1]+0x00000100u; // 800B91A4
  {uint32_t ea=c->r[1]+0x00000178u; psq_load(c,31,ea,0,0);} // 800B91A8
  {uint32_t ea=c->r[1]+0x00000170u; c->f[31]=RF64(ea);} // 800B91AC
  {uint32_t ea=c->r[1]+0x00000168u; psq_load(c,30,ea,0,0);} // 800B91B0
  {uint32_t ea=c->r[1]+0x00000160u; c->f[30]=RF64(ea);} // 800B91B4
  {uint32_t ea=c->r[1]+0x00000158u; psq_load(c,29,ea,0,0);} // 800B91B8
  {uint32_t ea=c->r[1]+0x00000150u; c->f[29]=RF64(ea);} // 800B91BC
  {uint32_t ea=c->r[1]+0x00000148u; psq_load(c,28,ea,0,0);} // 800B91C0
  {uint32_t ea=c->r[1]+0x00000140u; c->f[28]=RF64(ea);} // 800B91C4
  {uint32_t ea=c->r[1]+0x00000138u; psq_load(c,27,ea,0,0);} // 800B91C8
  {uint32_t ea=c->r[1]+0x00000130u; c->f[27]=RF64(ea);} // 800B91CC
  {uint32_t ea=c->r[1]+0x00000128u; psq_load(c,26,ea,0,0);} // 800B91D0
  {uint32_t ea=c->r[1]+0x00000120u; c->f[26]=RF64(ea);} // 800B91D4
  {uint32_t ea=c->r[1]+0x00000118u; psq_load(c,25,ea,0,0);} // 800B91D8
  {uint32_t ea=c->r[1]+0x00000110u; c->f[25]=RF64(ea);} // 800B91DC
  {uint32_t ea=c->r[1]+0x00000108u; psq_load(c,24,ea,0,0);} // 800B91E0
  {uint32_t ea=c->r[1]+0x00000100u; c->f[24]=RF64(ea);} // 800B91E4
  c->lr=0x800B91ECu; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800B91E8
  c->r[0]=R32(c->r[1]+0x00000184u); // 800B91EC
  c->lr=c->r[0]; // 800B91F0
  c->r[1]=c->r[1]+0x00000180u; // 800B91F4
  return; // 800B91F8
}

// fn_800B91FC
void f_800B91FC(Ctx* __restrict c) {
  trace_call(0x800B91FCu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B91FC
  c->r[0]=c->lr; // 800B9200
  W32(c->r[1]+0x00000024u,c->r[0]); // 800B9204
  {uint32_t ea=c->r[1]+0x00000018u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800B9208
  c->r[30]=c->r[3]|c->r[3]; // 800B920C
  c->r[3]=R32(c->r[13]+0xFFFFC218u); // 800B9210
  c->lr=0x800B9218u; f_800CEC64(c); // 800B9214
  c->r[4]=R32(c->r[30]+0x0000002Cu); // 800B9218
  c->lr=0x800B9220u; f_800CD544(c); // 800B921C
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[3]; cr0(c,c->r[0]); // 800B9220
  if (!crb(c,2)) { goto L_800B9284; } // 800B9224
  c->r[31]=0u+0x00000000u; // 800B9228
  W8(c->r[1]+0x00000010u,c->r[31]); // 800B922C
  c->r[3]=c->r[1]+0x00000010u; // 800B9230
  c->lr=0x800B9238u; f_80047BE8(c); // 800B9234
  c->r[4]=R32(c->r[30]+0x0000002Cu); // 800B9238
  c->r[5]=0u+0x00000000u; // 800B923C
  c->r[6]=0u+0x00000000u; // 800B9240
  c->lr=0x800B9248u; f_801B7944(c); // 800B9244
  cmps(c,0,(int32_t)c->r[3],0); // 800B9248
  if (!crb(c,1)) { goto L_800B9258; } // 800B924C
  c->r[3]=0u+0x00000001u; // 800B9250
  goto L_800B92B8; // 800B9254
L_800B9258:;
  W8(c->r[1]+0x0000000Cu,c->r[31]); // 800B9258
  c->r[3]=c->r[1]+0x0000000Cu; // 800B925C
  c->lr=0x800B9264u; f_80047BE8(c); // 800B9260
  c->r[4]=R32(c->r[30]+0x0000002Cu); // 800B9264
  c->r[5]=0u+0x00000001u; // 800B9268
  c->r[6]=0u+0x00000000u; // 800B926C
  c->lr=0x800B9274u; f_801B7944(c); // 800B9270
  cmps(c,0,(int32_t)c->r[3],0); // 800B9274
  if (!crb(c,1)) { goto L_800B92B4; } // 800B9278
  c->r[3]=0u+0x00000001u; // 800B927C
  goto L_800B92B8; // 800B9280
L_800B9284:;
  c->r[0]=0u+0x00000000u; // 800B9284
  W8(c->r[1]+0x00000008u,c->r[0]); // 800B9288
  c->r[3]=c->r[1]+0x00000008u; // 800B928C
  c->lr=0x800B9294u; f_80047BE8(c); // 800B9290
  c->r[4]=R32(c->r[30]+0x0000002Cu); // 800B9294
  c->r[5]=0u+0x00000001u; // 800B9298
  c->r[6]=0u+0x00000000u; // 800B929C
  c->lr=0x800B92A4u; f_801B7944(c); // 800B92A0
  cmps(c,0,(int32_t)c->r[3],0); // 800B92A4
  if (!crb(c,1)) { goto L_800B92B4; } // 800B92A8
  c->r[3]=0u+0x00000001u; // 800B92AC
  goto L_800B92B8; // 800B92B0
L_800B92B4:;
  c->r[3]=0u+0x00000000u; // 800B92B4
L_800B92B8:;
  {uint32_t ea=c->r[1]+0x00000018u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800B92B8
  c->r[0]=R32(c->r[1]+0x00000024u); // 800B92BC
  c->lr=c->r[0]; // 800B92C0
  c->r[1]=c->r[1]+0x00000020u; // 800B92C4
  return; // 800B92C8
}

// fn_800B92CC
void f_800B92CC(Ctx* __restrict c) {
  trace_call(0x800B92CCu);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B92CC
  c->r[0]=c->lr; // 800B92D0
  W32(c->r[1]+0x00000034u,c->r[0]); // 800B92D4
  c->r[11]=c->r[1]+0x00000030u; // 800B92D8
  c->lr=0x800B92E0u; { W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800B92DC
  c->r[0]=R32(c->r[3]+0x0000002Cu); // 800B92E0
  c->r[29]=c->r[3]|c->r[3]; // 800B92E4
  cmps(c,0,(int32_t)c->r[0],0); // 800B92E8
  if (crb(c,0)) { goto L_800B93E4; } // 800B92EC
  c->r[3]=R32(c->r[13]+0xFFFFC218u); // 800B92F0
  c->lr=0x800B92F8u; f_800CEC6C(c); // 800B92F4
  c->r[4]=R32(c->r[29]+0x00000020u); // 800B92F8
  c->r[5]=0u+0x00000005u; // 800B92FC
  c->lr=0x800B9304u; f_8021FA54(c); // 800B9300
  {uint32_t ea=c->r[2]+0xFFFFA000u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B9304
  fcmp(c,0,c->f[1],c->f[0]); // 800B9308
  setcrb(c,2,crb(c,1)|crb(c,2)); // 800B930C
  if (crb(c,2)) { goto L_800B93E4; } // 800B9310
  c->r[3]=R32(c->r[29]+0x00000020u); // 800B9314
  c->lr=0x800B931Cu; f_800B5150(c); // 800B9318
  c->r[0]=R32(c->r[3]+0x0000008Cu); // 800B931C
  c->r[0]=rotl(c->r[0],0)&0x00000100u; cr0(c,c->r[0]); // 800B9320
  if (!crb(c,2)) { goto L_800B93E4; } // 800B9324
  c->r[3]=R32(c->r[13]+0xFFFFC218u); // 800B9328
  c->lr=0x800B9330u; f_800CEC6C(c); // 800B932C
  c->r[4]=R32(c->r[29]+0x00000020u); // 800B9330
  c->r[5]=0u+0x00000002u; // 800B9334
  c->lr=0x800B933Cu; f_8021FA54(c); // 800B9338
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[1],true)); // 800B933C
  c->r[3]=R32(c->r[29]+0x00000020u); // 800B9340
  c->r[30]=0u+0x00000001u; // 800B9344
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[0]);} // 800B9348
  c->r[31]=R32(c->r[1]+0x00000014u); // 800B934C
  c->lr=0x800B9354u; f_800B5150(c); // 800B9350
  c->r[0]=R32(c->r[3]+0x0000008Cu); // 800B9354
  c->r[0]=rotl(c->r[0],0)&0x00000040u; cr0(c,c->r[0]); // 800B9358
  if (!crb(c,2)) { goto L_800B9388; } // 800B935C
  c->r[0]=0u+0x00000000u; // 800B9360
  W8(c->r[1]+0x00000008u,c->r[0]); // 800B9364
  c->r[3]=c->r[1]+0x00000008u; // 800B9368
  c->lr=0x800B9370u; f_80046F74(c); // 800B936C
  c->lr=0x800B9374u; f_800BFDB8(c); // 800B9370
  c->r[4]=R32(c->r[29]+0x00000024u); // 800B9374
  c->lr=0x800B937Cu; f_800CDF14(c); // 800B9378
  cmps(c,0,(int32_t)c->r[31],(int32_t)c->r[3]); // 800B937C
  if (!crb(c,1)) { goto L_800B9388; } // 800B9380
  c->r[31]=c->r[3]|c->r[3]; // 800B9384
L_800B9388:;
  c->r[0]=R32(c->r[29]+0x0000001Cu); // 800B9388
  cmps(c,0,(int32_t)c->r[31],(int32_t)c->r[0]); // 800B938C
  if (crb(c,1)) { goto L_800B9398; } // 800B9390
  c->r[30]=0u+0x00000000u; // 800B9394
L_800B9398:;
  cmps(c,0,(int32_t)c->r[30],0); // 800B9398
  if (crb(c,2)) { goto L_800B93DC; } // 800B939C
  c->r[3]=R32(c->r[29]+0x00000004u); // 800B93A0
  cmps(c,0,(int32_t)c->r[3],0); // 800B93A4
  if (crb(c,2)) { goto L_800B93B4; } // 800B93A8
  c->r[4]=c->r[31]-c->r[0]; // 800B93AC
  c->lr=0x800B93B4u; f_800BA430(c); // 800B93B0
L_800B93B4:;
  c->r[3]=R32(c->r[29]+0x00000008u); // 800B93B4
  cmps(c,0,(int32_t)c->r[3],0); // 800B93B8
  if (crb(c,2)) { goto L_800B93CC; } // 800B93BC
  c->r[0]=R32(c->r[29]+0x0000001Cu); // 800B93C0
  c->r[4]=c->r[31]-c->r[0]; // 800B93C4
  c->lr=0x800B93CCu; f_800BA430(c); // 800B93C8
L_800B93CC:;
  c->r[0]=0u+0x00000002u; // 800B93CC
  W32(c->r[29]+0x0000001Cu,c->r[31]); // 800B93D0
  W32(c->r[29]+0x00000028u,c->r[0]); // 800B93D4
  goto L_800B93E4; // 800B93D8
L_800B93DC:;
  c->r[3]=c->r[29]|c->r[29]; // 800B93DC
  c->lr=0x800B93E4u; f_800B93FC(c); // 800B93E0
L_800B93E4:;
  c->r[11]=c->r[1]+0x00000030u; // 800B93E4
  c->lr=0x800B93ECu; { c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800B93E8
  c->r[0]=R32(c->r[1]+0x00000034u); // 800B93EC
  c->lr=c->r[0]; // 800B93F0
  c->r[1]=c->r[1]+0x00000030u; // 800B93F4
  return; // 800B93F8
}

// fn_800B93FC
void f_800B93FC(Ctx* __restrict c) {
  trace_call(0x800B93FCu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B93FC
  c->r[0]=c->lr; // 800B9400
  W32(c->r[1]+0x00000024u,c->r[0]); // 800B9404
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800B9408
  c->r[31]=c->r[3]|c->r[3]; // 800B940C
  c->r[0]=R32(c->r[3]+0x0000002Cu); // 800B9410
  cmps(c,0,(int32_t)c->r[0],0); // 800B9414
  if (crb(c,0)) { goto L_800B9440; } // 800B9418
  c->r[0]=0u+0x00000001u; // 800B941C
  W32(c->r[3]+0x00000028u,c->r[0]); // 800B9420
  c->r[0]=0u+0x00000000u; // 800B9424
  c->r[3]=c->r[1]+0x00000008u; // 800B9428
  W8(c->r[1]+0x00000008u,c->r[0]); // 800B942C
  c->lr=0x800B9434u; f_80047BE8(c); // 800B9430
  c->r[4]=R32(c->r[31]+0x0000002Cu); // 800B9434
  c->r[5]=0u+0x00000000u; // 800B9438
  c->lr=0x800B9440u; f_801B78B8(c); // 800B943C
L_800B9440:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 800B9440
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800B9444
  c->lr=c->r[0]; // 800B9448
  c->r[1]=c->r[1]+0x00000020u; // 800B944C
  return; // 800B9450
}

// fn_800B9454
void f_800B9454(Ctx* __restrict c) {
  trace_call(0x800B9454u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B9454
  c->r[0]=c->lr; // 800B9458
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B945C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800B9460
  c->r[31]=c->r[3]|c->r[3]; // 800B9464
  c->r[0]=R32(c->r[3]+0x0000002Cu); // 800B9468
  cmps(c,0,(int32_t)c->r[0],0); // 800B946C
  if (crb(c,0)) { goto L_800B94D8; } // 800B9470
  c->r[3]=R32(c->r[13]+0xFFFFC218u); // 800B9474
  c->lr=0x800B947Cu; f_800CEC6C(c); // 800B9478
  c->r[4]=R32(c->r[31]+0x00000020u); // 800B947C
  c->r[5]=0u+0x00000005u; // 800B9480
  c->lr=0x800B9488u; f_8021FA54(c); // 800B9484
  {uint32_t ea=c->r[2]+0xFFFFA000u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B9488
  fcmp(c,0,c->f[1],c->f[0]); // 800B948C
  if (crb(c,0)) { goto L_800B94D8; } // 800B9490
  c->r[3]=R32(c->r[31]+0x00000020u); // 800B9494
  c->lr=0x800B949Cu; f_800B5150(c); // 800B9498
  c->r[0]=R32(c->r[3]+0x0000008Cu); // 800B949C
  c->r[0]=rotl(c->r[0],0)&0x00000100u; cr0(c,c->r[0]); // 800B94A0
  if (!crb(c,2)) { goto L_800B94D8; } // 800B94A4
  c->r[3]=R32(c->r[31]+0x00000004u); // 800B94A8
  cmps(c,0,(int32_t)c->r[3],0); // 800B94AC
  if (crb(c,2)) { goto L_800B94BC; } // 800B94B0
  c->r[4]=0u+0x00000000u; // 800B94B4
  c->lr=0x800B94BCu; f_800BA430(c); // 800B94B8
L_800B94BC:;
  c->r[3]=R32(c->r[31]+0x00000008u); // 800B94BC
  cmps(c,0,(int32_t)c->r[3],0); // 800B94C0
  if (crb(c,2)) { goto L_800B94D0; } // 800B94C4
  c->r[4]=0u+0x00000000u; // 800B94C8
  c->lr=0x800B94D0u; f_800BA430(c); // 800B94CC
L_800B94D0:;
  c->r[0]=0u+0x00000002u; // 800B94D0
  W32(c->r[31]+0x00000028u,c->r[0]); // 800B94D4
L_800B94D8:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800B94D8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800B94DC
  c->lr=c->r[0]; // 800B94E0
  c->r[1]=c->r[1]+0x00000010u; // 800B94E4
  return; // 800B94E8
}

// fn_800B94EC
void f_800B94EC(Ctx* __restrict c) {
  trace_call(0x800B94ECu);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B94EC
  c->r[0]=c->lr; // 800B94F0
  W32(c->r[1]+0x00000044u,c->r[0]); // 800B94F4
  {uint32_t ea=c->r[1]+0x00000024u; for(int i=25;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800B94F8
  c->r[27]=c->r[3]|c->r[3]; // 800B94FC
  c->r[30]=0u+0x80690000u; // 800B9500
  c->r[31]=c->r[27]|c->r[27]; // 800B9504
  c->r[29]=c->r[27]|c->r[27]; // 800B9508
  c->r[30]=c->r[30]+0xFFFFE298u; // 800B950C
  c->lr=0x800B9514u; f_800B9B34(c); // 800B9510
  c->r[4]=0u+0x806D0000u; // 800B9514
  c->r[28]=addc(c,c->r[27],0x00000020u,0); cr0(c,c->r[28]); // 800B9518
  c->r[0]=0u+0x00000000u; // 800B951C
  W32(c->r[27]+0x00000000u,c->r[3]); // 800B9520
  c->r[4]=c->r[4]+0x000038C0u; // 800B9524
  W32(c->r[27]+0x0000001Cu,c->r[4]); // 800B9528
  W32(c->r[27]+0x00000004u,c->r[0]); // 800B952C
  W32(c->r[27]+0x00000008u,c->r[0]); // 800B9530
  W32(c->r[27]+0x0000000Cu,c->r[0]); // 800B9534
  W8(c->r[27]+0x00000010u,c->r[0]); // 800B9538
  W32(c->r[27]+0x00000014u,c->r[0]); // 800B953C
  W32(c->r[27]+0x00000018u,c->r[0]); // 800B9540
  W32(c->r[27]+0x00000020u,c->r[0]); // 800B9544
  W32(c->r[27]+0x00000024u,c->r[0]); // 800B9548
  if (crb(c,2)) { goto L_800B9554; } // 800B954C
  c->r[28]=c->r[28]+0xFFFFFFE0u; // 800B9550
L_800B9554:;
  c->lr=0x800B9558u; f_800797AC(c); // 800B9554
  c->r[0]=R32(c->r[3]+0x00000000u); // 800B9558
  c->r[0]=addc(c,c->r[0],0x00000001u,0); cr0(c,c->r[0]); // 800B955C
  W32(c->r[3]+0x00000000u,c->r[0]); // 800B9560
  if (!crb(c,2)) { goto L_800B9570; } // 800B9564
  c->r[0]=0u+0x00000001u; // 800B9568
  W32(c->r[3]+0x00000000u,c->r[0]); // 800B956C
L_800B9570:;
  c->r[7]=R32(c->r[3]+0x00000004u); // 800B9570
  c->r[5]=0u+0x0000012Cu; // 800B9574
  c->r[4]=c->r[7]+0x00000001u; // 800B9578
  c->r[0]=divwu(c->r[4],c->r[5]); // 800B957C
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)c->r[5]); // 800B9580
  c->r[6]=c->r[4]-c->r[0]; // 800B9584
  goto L_800B95D4; // 800B9588
L_800B958C:;
  c->r[0]=rotl(c->r[6],3)&0xFFFFFFF8u; // 800B958C
  c->r[4]=c->r[3]+c->r[0]; // 800B9590
  c->r[0]=R32(c->r[4]+0x00000008u); // 800B9594
  cmps(c,0,(int32_t)c->r[0],0); // 800B9598
  if (!crb(c,2)) { goto L_800B95C4; } // 800B959C
  W32(c->r[3]+0x00000004u,c->r[6]); // 800B95A0
  c->r[0]=R32(c->r[3]+0x00000000u); // 800B95A4
  W32(c->r[4]+0x00000008u,c->r[0]); // 800B95A8
  W32(c->r[4]+0x0000000Cu,c->r[28]); // 800B95AC
  c->r[4]=R32(c->r[3]+0x00000000u); // 800B95B0
  c->r[0]=R32(c->r[3]+0x00000004u); // 800B95B4
  W32(c->r[1]+0x00000010u,c->r[4]); // 800B95B8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B95BC
  goto L_800B95F0; // 800B95C0
L_800B95C4:;
  c->r[4]=c->r[6]+0x00000001u; // 800B95C4
  c->r[0]=divwu(c->r[4],c->r[5]); // 800B95C8
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)c->r[5]); // 800B95CC
  c->r[6]=c->r[4]-c->r[0]; // 800B95D0
L_800B95D4:;
  cmpu(c,0,c->r[6],c->r[7]); // 800B95D4
  if (!crb(c,2)) { IRQCHK(c); goto L_800B958C; } // 800B95D8
  c->r[0]=0u+0x00000000u; // 800B95DC
  W32(c->r[1]+0x00000008u,c->r[0]); // 800B95E0
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 800B95E4
  W32(c->r[1]+0x00000010u,c->r[0]); // 800B95E8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B95EC
L_800B95F0:;
  c->r[4]=R32(c->r[1]+0x00000010u); // 800B95F0
  c->r[25]=c->r[27]+0x00000028u; // 800B95F4
  c->r[0]=R32(c->r[1]+0x00000014u); // 800B95F8
  c->r[3]=c->r[25]|c->r[25]; // 800B95FC
  W32(c->r[1]+0x00000018u,c->r[4]); // 800B9600
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 800B9604
  W32(c->r[27]+0x00000020u,c->r[4]); // 800B9608
  W32(c->r[27]+0x00000024u,c->r[0]); // 800B960C
  c->lr=0x800B9614u; f_800506C0(c); // 800B9610
  cmps(c,0,(int32_t)c->r[25],0); // 800B9614
  c->r[3]=c->r[25]|c->r[25]; // 800B9618
  if (crb(c,2)) { goto L_800B9624; } // 800B961C
  c->r[3]=c->r[25]+0xFFFFFFD8u; // 800B9620
L_800B9624:;
  c->r[28]=0u+0x00000001u; // 800B9624
  W32(c->r[25]+0x00000008u,c->r[3]); // 800B9628
  W8(c->r[25]+0x0000000Cu,c->r[28]); // 800B962C
  c->r[0]=R8(c->r[13]+0xFFFFBE09u); // 800B9630
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800B9634
  if (!crb(c,2)) { goto L_800B9678; } // 800B9638
  c->r[26]=0u+0x80740000u; // 800B963C
  c->r[3]=c->r[26]+0x000074BCu; // 800B9640
  c->lr=0x800B9648u; f_800506C0(c); // 800B9644
  c->r[6]=0u+0x806D0000u; // 800B9648
  c->r[4]=0u+0x80060000u; // 800B964C
  c->r[6]=c->r[6]+0xFFFFE3A0u; // 800B9650
  c->r[3]=c->r[26]+0x000074BCu; // 800B9654
  c->r[0]=c->r[6]+0x00000008u; // 800B9658
  c->r[5]=0u+0x80750000u; // 800B965C
  W32(c->r[3]+0x00000010u,c->r[6]); // 800B9660
  c->r[4]=c->r[4]+0x000057D4u; // 800B9664
  c->r[5]=c->r[5]+0x00002C88u; // 800B9668
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 800B966C
  c->lr=0x800B9674u; f_803A92B8(c); // 800B9670
  W8(c->r[13]+0xFFFFBE09u,c->r[28]); // 800B9674
L_800B9678:;
  c->r[3]=0u+0x80740000u; // 800B9678
  c->r[5]=c->r[25]|c->r[25]; // 800B967C
  c->r[3]=c->r[3]+0x000074BCu; // 800B9680
  c->r[4]=c->r[3]|c->r[3]; // 800B9684
  c->lr=0x800B968Cu; f_802DDCA8(c); // 800B9688
  c->r[26]=c->r[27]+0x00000038u; // 800B968C
  c->r[3]=c->r[26]|c->r[26]; // 800B9690
  c->lr=0x800B9698u; f_800506C0(c); // 800B9694
  cmps(c,0,(int32_t)c->r[26],0); // 800B9698
  c->r[0]=c->r[26]|c->r[26]; // 800B969C
  if (crb(c,2)) { goto L_800B96A8; } // 800B96A0
  c->r[0]=c->r[26]+0xFFFFFFC8u; // 800B96A4
L_800B96A8:;
  c->r[28]=c->r[27]+0x00000044u; // 800B96A8
  W32(c->r[26]+0x00000008u,c->r[0]); // 800B96AC
  c->r[3]=c->r[28]|c->r[28]; // 800B96B0
  c->lr=0x800B96B8u; f_800506C0(c); // 800B96B4
  cmps(c,0,(int32_t)c->r[28],0); // 800B96B8
  c->r[0]=c->r[28]|c->r[28]; // 800B96BC
  if (crb(c,2)) { goto L_800B96C8; } // 800B96C0
  c->r[0]=c->r[28]+0xFFFFFFBCu; // 800B96C4
L_800B96C8:;
  c->r[3]=0u+0x806F0000u; // 800B96C8
  c->r[26]=0u+0x00000000u; // 800B96CC
  c->r[3]=c->r[3]+0x00000E80u; // 800B96D0
  W32(c->r[28]+0x00000008u,c->r[0]); // 800B96D4
  W8(c->r[28]+0x0000000Cu,c->r[26]); // 800B96D8
  W32(c->r[27]+0x0000001Cu,c->r[3]); // 800B96DC
  W32(c->r[27]+0x00000058u,c->r[26]); // 800B96E0
  W32(c->r[27]+0x00000064u,c->r[26]); // 800B96E4
  c->lr=0x800B96ECu; f_8007BDCC(c); // 800B96E8
  c->r[0]=c->r[13]+0xFFFF8114u; // 800B96EC
  W32(c->r[27]+0x0000009Cu,c->r[3]); // 800B96F0
  W32(c->r[27]+0x000000A0u,c->r[0]); // 800B96F4
  W32(c->r[27]+0x000000A4u,c->r[26]); // 800B96F8
  c->r[0]=R8(c->r[13]+0xFFFFBE54u); // 800B96FC
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800B9700
  if (!crb(c,2)) { goto L_800B9724; } // 800B9704
  c->r[4]=R32(c->r[13]+0xFFFFBCC4u); // 800B9708
  c->r[0]=0u+0x00000001u; // 800B970C
  W32(c->r[13]+0xFFFFBDF8u,c->r[4]); // 800B9710
  c->r[3]=c->r[4]+0x00000001u; // 800B9714
  W32(c->r[13]+0xFFFFBCC4u,c->r[3]); // 800B9718
  W32(c->r[13]+0xFFFFBE50u,c->r[4]); // 800B971C
  W8(c->r[13]+0xFFFFBE54u,c->r[0]); // 800B9720
L_800B9724:;
  c->r[3]=R32(c->r[13]+0xFFFFBE50u); // 800B9724
  c->r[0]=c->r[13]+0xFFFF8110u; // 800B9728
  c->r[26]=0u+0x00000000u; // 800B972C
  W32(c->r[27]+0x000000A8u,c->r[3]); // 800B9730
  W32(c->r[27]+0x000000ACu,c->r[0]); // 800B9734
  W32(c->r[27]+0x000000B0u,c->r[26]); // 800B9738
  c->lr=0x800B9740u; f_80076D18(c); // 800B973C
  c->r[0]=c->r[13]+0xFFFF810Cu; // 800B9740
  W32(c->r[27]+0x000000B4u,c->r[3]); // 800B9744
  W32(c->r[27]+0x000000B8u,c->r[0]); // 800B9748
  W32(c->r[27]+0x000000BCu,c->r[26]); // 800B974C
  c->lr=0x800B9754u; f_80076CB0(c); // 800B9750
  c->r[0]=c->r[13]+0xFFFF8108u; // 800B9754
  W32(c->r[27]+0x000000C0u,c->r[3]); // 800B9758
  W32(c->r[27]+0x000000C4u,c->r[0]); // 800B975C
  W32(c->r[27]+0x000000C8u,c->r[26]); // 800B9760
  c->r[0]=R8(c->r[13]+0xFFFFBE6Cu); // 800B9764
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800B9768
  if (!crb(c,2)) { goto L_800B978C; } // 800B976C
  c->r[4]=R32(c->r[13]+0xFFFFBCC4u); // 800B9770
  c->r[0]=0u+0x00000001u; // 800B9774
  W32(c->r[13]+0xFFFFBDF8u,c->r[4]); // 800B9778
  c->r[3]=c->r[4]+0x00000001u; // 800B977C
  W32(c->r[13]+0xFFFFBCC4u,c->r[3]); // 800B9780
  W32(c->r[13]+0xFFFFBE68u,c->r[4]); // 800B9784
  W8(c->r[13]+0xFFFFBE6Cu,c->r[0]); // 800B9788
L_800B978C:;
  c->r[3]=R32(c->r[13]+0xFFFFBE68u); // 800B978C
  c->r[0]=c->r[13]+0xFFFF8104u; // 800B9790
  c->r[26]=0u+0x00000000u; // 800B9794
  W32(c->r[27]+0x000000CCu,c->r[3]); // 800B9798
  c->r[3]=c->r[27]+0x000000D8u; // 800B979C
  W32(c->r[27]+0x000000D0u,c->r[0]); // 800B97A0
  W32(c->r[27]+0x000000D4u,c->r[26]); // 800B97A4
  c->lr=0x800B97ACu; f_800506C0(c); // 800B97A8
  c->r[4]=0u+0x806F0000u; // 800B97AC
  c->r[3]=0u+0x00000006u; // 800B97B0
  c->r[4]=c->r[4]+0x000007A0u; // 800B97B4
  c->r[28]=c->r[27]+0x000000FCu; // 800B97B8
  c->r[0]=c->r[4]+0x00000024u; // 800B97BC
  W32(c->r[27]+0x000000E8u,c->r[3]); // 800B97C0
  c->r[3]=c->r[28]+0x0000000Cu; // 800B97C4
  W32(c->r[27]+0x000000ECu,c->r[26]); // 800B97C8
  W32(c->r[27]+0x000000F8u,c->r[26]); // 800B97CC
  W32(c->r[27]+0x000000FCu,c->r[4]); // 800B97D0
  W32(c->r[27]+0x00000100u,c->r[0]); // 800B97D4
  c->lr=0x800B97DCu; f_800506C0(c); // 800B97D8
  c->r[3]=c->r[28]+0x00000018u; // 800B97DC
  c->lr=0x800B97E4u; f_800506C0(c); // 800B97E0
  W32(c->r[28]+0x00000024u,c->r[26]); // 800B97E4
  c->r[3]=c->r[28]+0x000000B0u; // 800B97E8
  c->lr=0x800B97F0u; f_800506C0(c); // 800B97EC
  c->r[12]=R32(c->r[28]+0x00000000u); // 800B97F0
  c->r[3]=c->r[28]|c->r[28]; // 800B97F4
  c->r[12]=R32(c->r[12]+0x0000003Cu); // 800B97F8
  c->ctr=c->r[12]; // 800B97FC
  if (true) { c->lr=0x800B9804u; dispatch(c,c->ctr); } // 800B9800
  c->r[0]=R8(c->r[13]+0xFFFFBE74u); // 800B9804
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800B9808
  if (!crb(c,2)) { goto L_800B9828; } // 800B980C
  c->r[3]=R32(c->r[13]+0xFFFFBE78u); // 800B9810
  c->r[0]=0u+0x00000001u; // 800B9814
  W32(c->r[13]+0xFFFFBE70u,c->r[3]); // 800B9818
  c->r[3]=c->r[3]+0x00000001u; // 800B981C
  W32(c->r[13]+0xFFFFBE78u,c->r[3]); // 800B9820
  W8(c->r[13]+0xFFFFBE74u,c->r[0]); // 800B9824
L_800B9828:;
  c->r[3]=R32(c->r[13]+0xFFFFBE70u); // 800B9828
  c->r[5]=0u+0x806F0000u; // 800B982C
  c->r[5]=c->r[5]+0x000007F8u; // 800B9830
  c->r[0]=0u+0x00000032u; // 800B9834
  c->r[4]=c->r[5]+0x00000024u; // 800B9838
  W32(c->r[28]+0x00000008u,c->r[3]); // 800B983C
  c->r[6]=0u+0x00000000u; // 800B9840
  c->r[3]=0u+0x00000000u; // 800B9844
  W32(c->r[28]+0x00000000u,c->r[5]); // 800B9848
  W32(c->r[28]+0x00000004u,c->r[4]); // 800B984C
  c->ctr=c->r[0]; // 800B9850
L_800B9854:;
  c->r[4]=c->r[28]+c->r[3]; // 800B9854
  c->r[3]=c->r[3]+0x00000004u; // 800B9858
  W32(c->r[4]+0x0000014Cu,c->r[6]); // 800B985C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800B9854; } // 800B9860
  c->r[3]=0u+0x806D0000u; // 800B9864
  c->r[7]=0u+0x00000000u; // 800B9868
  c->r[3]=c->r[3]+0x00003868u; // 800B986C
  c->r[0]=0u+0x0000000Au; // 800B9870
  c->r[4]=c->r[3]+0x00000024u; // 800B9874
  W32(c->r[28]+0x00000000u,c->r[3]); // 800B9878
  c->r[8]=0u+0x00000000u; // 800B987C
  c->r[3]=0u+0x00000000u; // 800B9880
  W32(c->r[28]+0x00000004u,c->r[4]); // 800B9884
  c->r[6]=0u+0xFFFFFFFFu; // 800B9888
  W32(c->r[27]+0x00000314u,c->r[7]); // 800B988C
  W8(c->r[27]+0x0000005Cu,c->r[7]); // 800B9890
  W32(c->r[27]+0x00000054u,c->r[7]); // 800B9894
  W32(c->r[27]+0x00000310u,c->r[27]); // 800B9898
  c->ctr=c->r[0]; // 800B989C
L_800B98A0:;
  c->r[5]=c->r[27]+c->r[3]; // 800B98A0
  c->r[4]=c->r[27]+c->r[8]; // 800B98A4
  W32(c->r[5]+0x00000068u,c->r[6]); // 800B98A8
  c->r[8]=c->r[8]+0x00000001u; // 800B98AC
  c->r[3]=c->r[3]+0x00000004u; // 800B98B0
  W8(c->r[4]+0x00000090u,c->r[7]); // 800B98B4
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800B98A0; } // 800B98B8
  c->r[25]=c->r[27]+0x00000318u; // 800B98BC
  c->r[3]=c->r[25]|c->r[25]; // 800B98C0
  c->lr=0x800B98C8u; f_800506C0(c); // 800B98C4
  cmps(c,0,(int32_t)c->r[25],0); // 800B98C8
  c->r[3]=c->r[25]|c->r[25]; // 800B98CC
  if (crb(c,2)) { goto L_800B98D8; } // 800B98D0
  c->r[3]=c->r[25]+0xFFFFFCE8u; // 800B98D4
L_800B98D8:;
  c->r[29]=0u+0x00000001u; // 800B98D8
  W32(c->r[25]+0x00000008u,c->r[3]); // 800B98DC
  W8(c->r[25]+0x0000000Cu,c->r[29]); // 800B98E0
  c->r[0]=R8(c->r[13]+0xFFFFBE9Eu); // 800B98E4
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800B98E8
  if (!crb(c,2)) { goto L_800B992C; } // 800B98EC
  c->r[28]=0u+0x80750000u; // 800B98F0
  c->r[3]=c->r[28]+0xFFFF816Cu; // 800B98F4
  c->lr=0x800B98FCu; f_800506C0(c); // 800B98F8
  c->r[6]=0u+0x806D0000u; // 800B98FC
  c->r[4]=0u+0x80080000u; // 800B9900
  c->r[6]=c->r[6]+0x000038D8u; // 800B9904
  c->r[3]=c->r[28]+0xFFFF816Cu; // 800B9908
  c->r[0]=c->r[6]+0x00000008u; // 800B990C
  c->r[5]=0u+0x80750000u; // 800B9910
  W32(c->r[3]+0x00000010u,c->r[6]); // 800B9914
  c->r[4]=c->r[4]+0xFFFF9844u; // 800B9918
  c->r[5]=c->r[5]+0x00002C70u; // 800B991C
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 800B9920
  c->lr=0x800B9928u; f_803A92B8(c); // 800B9924
  W8(c->r[13]+0xFFFFBE9Eu,c->r[29]); // 800B9928
L_800B992C:;
  c->r[3]=0u+0x80750000u; // 800B992C
  c->r[5]=c->r[25]|c->r[25]; // 800B9930
  c->r[3]=c->r[3]+0xFFFF816Cu; // 800B9934
  c->r[4]=c->r[3]|c->r[3]; // 800B9938
  c->lr=0x800B9940u; f_802DDCA8(c); // 800B993C
  c->r[3]=0u+0x806D0000u; // 800B9940
  c->r[0]=0u+0x00000000u; // 800B9944
  c->r[3]=c->r[3]+0xFFFFD974u; // 800B9948
  c->r[5]=0u+0xFFFFFFFFu; // 800B994C
  c->r[4]=0u+0x00000001u; // 800B9950
  c->r[26]=c->r[27]+0x0000032Cu; // 800B9954
  W32(c->r[27]+0x0000001Cu,c->r[3]); // 800B9958
  c->r[3]=c->r[26]|c->r[26]; // 800B995C
  W32(c->r[27]+0x00000328u,c->r[5]); // 800B9960
  W32(c->r[27]+0x000000ECu,c->r[4]); // 800B9964
  W32(c->r[27]+0x00000054u,c->r[0]); // 800B9968
  W32(c->r[27]+0x00000314u,c->r[0]); // 800B996C
  c->lr=0x800B9974u; f_800506C0(c); // 800B9970
  cmps(c,0,(int32_t)c->r[26],0); // 800B9974
  c->r[3]=c->r[26]|c->r[26]; // 800B9978
  if (crb(c,2)) { goto L_800B9984; } // 800B997C
  c->r[3]=c->r[26]+0xFFFFFCD4u; // 800B9980
L_800B9984:;
  c->r[29]=0u+0x00000001u; // 800B9984
  W32(c->r[26]+0x00000008u,c->r[3]); // 800B9988
  W8(c->r[26]+0x0000000Cu,c->r[29]); // 800B998C
  c->r[0]=R8(c->r[13]+0xFFFFC14Du); // 800B9990
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800B9994
  if (!crb(c,2)) { goto L_800B99D8; } // 800B9998
  c->r[28]=0u+0x80750000u; // 800B999C
  c->r[3]=c->r[28]+0x00002CA0u; // 800B99A0
  c->lr=0x800B99A8u; f_800506C0(c); // 800B99A4
  c->r[6]=0u+0x806D0000u; // 800B99A8
  c->r[4]=0u+0x800C0000u; // 800B99AC
  c->r[6]=c->r[6]+0x00006FA8u; // 800B99B0
  c->r[3]=c->r[28]+0x00002CA0u; // 800B99B4
  c->r[0]=c->r[6]+0x00000008u; // 800B99B8
  c->r[5]=0u+0x80750000u; // 800B99BC
  W32(c->r[3]+0x00000010u,c->r[6]); // 800B99C0
  c->r[4]=c->r[4]+0xFFFFA848u; // 800B99C4
  c->r[5]=c->r[5]+0x00002C64u; // 800B99C8
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 800B99CC
  c->lr=0x800B99D4u; f_803A92B8(c); // 800B99D0
  W8(c->r[13]+0xFFFFC14Du,c->r[29]); // 800B99D4
L_800B99D8:;
  c->r[3]=0u+0x80750000u; // 800B99D8
  c->r[5]=c->r[26]|c->r[26]; // 800B99DC
  c->r[3]=c->r[3]+0x00002CA0u; // 800B99E0
  c->r[4]=c->r[3]|c->r[3]; // 800B99E4
  c->lr=0x800B99ECu; f_802DDCA8(c); // 800B99E8
  c->r[3]=0u+0x806D0000u; // 800B99EC
  W32(c->r[27]+0x00000054u,c->r[30]); // 800B99F0
  c->r[3]=c->r[3]+0x00006F64u; // 800B99F4
  W32(c->r[27]+0x0000001Cu,c->r[3]); // 800B99F8
  c->r[0]=R8(c->r[13]+0xFFFFC144u); // 800B99FC
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800B9A00
  if (!crb(c,2)) { goto L_800B9A20; } // 800B9A04
  c->r[3]=R32(c->r[13]+0xFFFFBC48u); // 800B9A08
  c->r[0]=0u+0x00000001u; // 800B9A0C
  W32(c->r[13]+0xFFFFC140u,c->r[3]); // 800B9A10
  c->r[3]=c->r[3]+0x00000001u; // 800B9A14
  W32(c->r[13]+0xFFFFBC48u,c->r[3]); // 800B9A18
  W8(c->r[13]+0xFFFFC144u,c->r[0]); // 800B9A1C
L_800B9A20:;
  c->r[0]=R32(c->r[13]+0xFFFFC140u); // 800B9A20
  c->r[3]=0u+0x806D0000u; // 800B9A24
  c->r[3]=c->r[3]+0x00006F20u; // 800B9A28
  W32(c->r[27]+0x00000328u,c->r[0]); // 800B9A2C
  W32(c->r[27]+0x0000001Cu,c->r[3]); // 800B9A30
  c->r[25]=R32(c->r[13]+0xFFFFDBDCu); // 800B9A34
  cmps(c,0,(int32_t)c->r[25],0); // 800B9A38
  if (crb(c,2)) { goto L_800B9A80; } // 800B9A3C
  c->lr=0x800B9A44u; f_800B9B34(c); // 800B9A40
  c->r[28]=c->r[3]|c->r[3]; // 800B9A44
  c->lr=0x800B9A4Cu; f_8007BDCC(c); // 800B9A48
  c->r[4]=(uint32_t)((int32_t)c->r[28]*(int32_t)80); // 800B9A4C
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 800B9A50
  c->r[5]=0u+0x800C0000u; // 800B9A54
  c->r[3]=rotl(c->r[28],2)&0xFFFFFFFCu; // 800B9A58
  c->r[4]=c->r[25]+c->r[4]; // 800B9A5C
  c->r[5]=c->r[5]+0xFFFF9B68u; // 800B9A60
  c->r[4]=c->r[4]+c->r[0]; // 800B9A64
  W32(c->r[4]+0x000001CCu,c->r[5]); // 800B9A68
  c->r[0]=R32(c->r[25]+c->r[3]); // 800B9A6C
  cmpu(c,0,c->r[0],0x0000000Cu); // 800B9A70
  if (!crb(c,0)) { goto L_800B9A80; } // 800B9A74
  c->r[0]=0u+0x0000000Cu; // 800B9A78
  W32(c->r[25]+c->r[3],c->r[0]); // 800B9A7C
L_800B9A80:;
  c->r[25]=R32(c->r[13]+0xFFFFDBDCu); // 800B9A80
  cmps(c,0,(int32_t)c->r[25],0); // 800B9A84
  if (crb(c,2)) { goto L_800B9ACC; } // 800B9A88
  c->lr=0x800B9A90u; f_800B9B34(c); // 800B9A8C
  c->r[28]=c->r[3]|c->r[3]; // 800B9A90
  c->lr=0x800B9A98u; f_80076D18(c); // 800B9A94
  c->r[4]=(uint32_t)((int32_t)c->r[28]*(int32_t)80); // 800B9A98
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 800B9A9C
  c->r[5]=0u+0x800C0000u; // 800B9AA0
  c->r[3]=rotl(c->r[28],2)&0xFFFFFFFCu; // 800B9AA4
  c->r[4]=c->r[25]+c->r[4]; // 800B9AA8
  c->r[5]=c->r[5]+0xFFFF9B64u; // 800B9AAC
  c->r[4]=c->r[4]+c->r[0]; // 800B9AB0
  W32(c->r[4]+0x000001CCu,c->r[5]); // 800B9AB4
  c->r[0]=R32(c->r[25]+c->r[3]); // 800B9AB8
  cmpu(c,0,c->r[0],0x0000000Cu); // 800B9ABC
  if (!crb(c,0)) { goto L_800B9ACC; } // 800B9AC0
  c->r[0]=0u+0x0000000Cu; // 800B9AC4
  W32(c->r[25]+c->r[3],c->r[0]); // 800B9AC8
L_800B9ACC:;
  c->r[25]=R32(c->r[13]+0xFFFFDBDCu); // 800B9ACC
  cmps(c,0,(int32_t)c->r[25],0); // 800B9AD0
  if (crb(c,2)) { goto L_800B9B18; } // 800B9AD4
  c->lr=0x800B9ADCu; f_800B9B34(c); // 800B9AD8
  c->r[28]=c->r[3]|c->r[3]; // 800B9ADC
  c->lr=0x800B9AE4u; f_80076CB0(c); // 800B9AE0
  c->r[4]=(uint32_t)((int32_t)c->r[28]*(int32_t)80); // 800B9AE4
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 800B9AE8
  c->r[5]=0u+0x800C0000u; // 800B9AEC
  c->r[3]=rotl(c->r[28],2)&0xFFFFFFFCu; // 800B9AF0
  c->r[4]=c->r[25]+c->r[4]; // 800B9AF4
  c->r[5]=c->r[5]+0xFFFF9B30u; // 800B9AF8
  c->r[4]=c->r[4]+c->r[0]; // 800B9AFC
  W32(c->r[4]+0x000001CCu,c->r[5]); // 800B9B00
  c->r[0]=R32(c->r[25]+c->r[3]); // 800B9B04
  cmpu(c,0,c->r[0],0x0000000Cu); // 800B9B08
  if (!crb(c,0)) { goto L_800B9B18; } // 800B9B0C
  c->r[0]=0u+0x0000000Cu; // 800B9B10
  W32(c->r[25]+c->r[3],c->r[0]); // 800B9B14
L_800B9B18:;
  c->r[3]=c->r[27]|c->r[27]; // 800B9B18
  {uint32_t ea=c->r[1]+0x00000024u; for(int i=25;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800B9B1C
  c->r[0]=R32(c->r[1]+0x00000044u); // 800B9B20
  c->lr=c->r[0]; // 800B9B24
  c->r[1]=c->r[1]+0x00000040u; // 800B9B28
  return; // 800B9B2C
}

// fn_800B9B30
void f_800B9B30(Ctx* __restrict c) {
  trace_call(0x800B9B30u);
  f_800B9DF4(c); return; // 800B9B30
}

// fn_800B9B34
void f_800B9B34(Ctx* __restrict c) {
  trace_call(0x800B9B34u);
  c->r[0]=R8(c->r[13]+0xFFFFC13Cu); // 800B9B34
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800B9B38
  if (!crb(c,2)) { goto L_800B9B5C; } // 800B9B3C
  c->r[4]=R32(c->r[13]+0xFFFFBE94u); // 800B9B40
  c->r[0]=0u+0x00000001u; // 800B9B44
  W32(c->r[13]+0xFFFFBE98u,c->r[4]); // 800B9B48
  c->r[3]=c->r[4]+0x00000001u; // 800B9B4C
  W32(c->r[13]+0xFFFFBE94u,c->r[3]); // 800B9B50
  W32(c->r[13]+0xFFFFC138u,c->r[4]); // 800B9B54
  W8(c->r[13]+0xFFFFC13Cu,c->r[0]); // 800B9B58
L_800B9B5C:;
  c->r[3]=R32(c->r[13]+0xFFFFC138u); // 800B9B5C
  return; // 800B9B60
}

// fn_800B9B64
void f_800B9B64(Ctx* __restrict c) {
  trace_call(0x800B9B64u);
  f_800B9D9C(c); return; // 800B9B64
}

// fn_800B9B68
void f_800B9B68(Ctx* __restrict c) {
  trace_call(0x800B9B68u);
  f_800B9C98(c); return; // 800B9B68
}

// dtor_800B9B6C
void f_800B9B6C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B9B6C
  c->r[0]=c->lr; // 800B9B70
  cmps(c,0,(int32_t)c->r[3],0); // 800B9B74
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B9B78
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800B9B7C
  c->r[31]=c->r[3]|c->r[3]; // 800B9B80
  if (crb(c,2)) { goto L_800B9B90; } // 800B9B84
  c->r[4]=0u+0x00000000u; // 800B9B88
  c->lr=0x800B9B90u; f_800455D8(c); // 800B9B8C
L_800B9B90:;
  c->r[3]=c->r[31]|c->r[31]; // 800B9B90
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800B9B94
  c->r[0]=R32(c->r[1]+0x00000014u); // 800B9B98
  c->lr=c->r[0]; // 800B9B9C
  c->r[1]=c->r[1]+0x00000010u; // 800B9BA0
  return; // 800B9BA4
}

// dtor_800B9BA8
void f_800B9BA8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B9BA8
  c->r[0]=c->lr; // 800B9BAC
  cmps(c,0,(int32_t)c->r[3],0); // 800B9BB0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B9BB4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800B9BB8
  c->r[31]=c->r[3]|c->r[3]; // 800B9BBC
  if (crb(c,2)) { goto L_800B9BD0; } // 800B9BC0
  if (crb(c,2)) { goto L_800B9BD0; } // 800B9BC4
  c->r[4]=0u+0x00000000u; // 800B9BC8
  c->lr=0x800B9BD0u; f_800455D8(c); // 800B9BCC
L_800B9BD0:;
  c->r[3]=c->r[31]|c->r[31]; // 800B9BD0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800B9BD4
  c->r[0]=R32(c->r[1]+0x00000014u); // 800B9BD8
  c->lr=c->r[0]; // 800B9BDC
  c->r[1]=c->r[1]+0x00000010u; // 800B9BE0
  return; // 800B9BE4
}

// fn_800B9BE8
void f_800B9BE8(Ctx* __restrict c) {
  trace_call(0x800B9BE8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B9BE8
  c->r[0]=c->lr; // 800B9BEC
  cmps(c,0,(int32_t)c->r[3],0); // 800B9BF0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B9BF4
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800B9BF8
  c->r[30]=c->r[3]|c->r[3]; // 800B9BFC
  c->r[31]=c->r[4]|c->r[4]; // 800B9C00
  if (crb(c,2)) { goto L_800B9C30; } // 800B9C04
  c->r[4]=0u+0x00000000u; // 800B9C08
  c->r[3]=c->r[3]+0x0000032Cu; // 800B9C0C
  c->lr=0x800B9C14u; f_800B9BA8(c); // 800B9C10
  c->r[3]=c->r[30]|c->r[30]; // 800B9C14
  c->r[4]=0u+0x00000000u; // 800B9C18
  c->lr=0x800B9C20u; f_80053208(c); // 800B9C1C
  cmps(c,0,(int32_t)c->r[31],0); // 800B9C20
  if (!crb(c,1)) { goto L_800B9C30; } // 800B9C24
  c->r[3]=c->r[30]|c->r[30]; // 800B9C28
  c->lr=0x800B9C30u; f_8005328C(c); // 800B9C2C
L_800B9C30:;
  c->r[3]=c->r[30]|c->r[30]; // 800B9C30
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800B9C34
  c->r[0]=R32(c->r[1]+0x00000014u); // 800B9C38
  c->lr=c->r[0]; // 800B9C3C
  c->r[1]=c->r[1]+0x00000010u; // 800B9C40
  return; // 800B9C44
}

// fn_800B9C48
void f_800B9C48(Ctx* __restrict c) {
  trace_call(0x800B9C48u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B9C48
  c->r[0]=c->lr; // 800B9C4C
  cmps(c,0,(int32_t)c->r[3],0); // 800B9C50
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B9C54
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800B9C58
  c->r[30]=c->r[3]|c->r[3]; // 800B9C5C
  c->r[31]=c->r[4]|c->r[4]; // 800B9C60
  if (crb(c,2)) { goto L_800B9C80; } // 800B9C64
  c->r[4]=0u+0x00000000u; // 800B9C68
  c->lr=0x800B9C70u; f_800B9BE8(c); // 800B9C6C
  cmps(c,0,(int32_t)c->r[31],0); // 800B9C70
  if (!crb(c,1)) { goto L_800B9C80; } // 800B9C74
  c->r[3]=c->r[30]|c->r[30]; // 800B9C78
  c->lr=0x800B9C80u; f_8005328C(c); // 800B9C7C
L_800B9C80:;
  c->r[3]=c->r[30]|c->r[30]; // 800B9C80
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800B9C84
  c->r[0]=R32(c->r[1]+0x00000014u); // 800B9C88
  c->lr=c->r[0]; // 800B9C8C
  c->r[1]=c->r[1]+0x00000010u; // 800B9C90
  return; // 800B9C94
}

// fn_800B9C98
void f_800B9C98(Ctx* __restrict c) {
  trace_call(0x800B9C98u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B9C98
  c->r[0]=c->lr; // 800B9C9C
  c->r[4]=0u+0x00000000u; // 800B9CA0
  c->r[5]=0u+0x00000000u; // 800B9CA4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B9CA8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800B9CAC
  c->r[31]=c->r[3]|c->r[3]; // 800B9CB0
  c->r[3]=c->r[3]+0x000000FCu; // 800B9CB4
  c->lr=0x800B9CBCu; f_800A969C(c); // 800B9CB8
  c->r[3]=c->r[31]+0x000000FCu; // 800B9CBC
  c->r[4]=0u+0x00000000u; // 800B9CC0
  c->r[5]=0u+0x00000001u; // 800B9CC4
  c->r[6]=0u+0x00000001u; // 800B9CC8
  c->r[7]=0u+0xFFFFFFFFu; // 800B9CCC
  c->r[8]=0u+0x00000000u; // 800B9CD0
  c->lr=0x800B9CD8u; f_800A9900(c); // 800B9CD4
  c->r[0]=R8(c->r[13]+0xFFFFBD68u); // 800B9CD8
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800B9CDC
  if (!crb(c,2)) { goto L_800B9CFC; } // 800B9CE0
  c->r[3]=R32(c->r[13]+0xFFFFBCB0u); // 800B9CE4
  c->r[0]=0u+0x00000001u; // 800B9CE8
  W32(c->r[13]+0xFFFFBD64u,c->r[3]); // 800B9CEC
  c->r[3]=c->r[3]+0x00000001u; // 800B9CF0
  W32(c->r[13]+0xFFFFBCB0u,c->r[3]); // 800B9CF4
  W8(c->r[13]+0xFFFFBD68u,c->r[0]); // 800B9CF8
L_800B9CFC:;
  c->r[12]=R32(c->r[31]+0x000000FCu); // 800B9CFC
  c->r[3]=c->r[31]+0x000000FCu; // 800B9D00
  c->r[4]=R32(c->r[13]+0xFFFFBD64u); // 800B9D04
  c->r[12]=R32(c->r[12]+0x00000048u); // 800B9D08
  c->ctr=c->r[12]; // 800B9D0C
  if (true) { c->lr=0x800B9D14u; dispatch(c,c->ctr); } // 800B9D10
  c->r[0]=R32(c->r[31]+0x0000012Cu); // 800B9D14
  W32(c->r[31]+0x00000340u,c->r[3]); // 800B9D18
  c->r[3]=R32(c->r[31]+0x00000138u); // 800B9D1C
  W32(c->r[31]+0x0000033Cu,c->r[0]); // 800B9D20
  c->lr=0x800B9D28u; f_804BDAB4(c); // 800B9D24
  c->r[3]=R32(c->r[31]+0x00000340u); // 800B9D28
  c->lr=0x800B9D30u; f_802EA6C0(c); // 800B9D2C
  c->r[0]=0u+0x00000003u; // 800B9D30
  {uint32_t ea=c->r[2]+0xFFFFA030u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B9D34
  c->r[3]=0u+0x00000000u; // 800B9D38
  c->r[4]=0u+0xFFFFFFFFu; // 800B9D3C
  c->ctr=c->r[0]; // 800B9D40
L_800B9D44:;
  c->r[5]=c->r[31]+c->r[3]; // 800B9D44
  c->r[3]=c->r[3]+0x00000004u; // 800B9D48
  {uint32_t ea=c->r[5]+0x00000344u; WF32(ea,c->f[0]);} // 800B9D4C
  W32(c->r[5]+0x00000350u,c->r[4]); // 800B9D50
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800B9D44; } // 800B9D54
  {uint32_t ea=c->r[2]+0xFFFFA030u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B9D58
  c->r[4]=0u+0xFFFFFFFFu; // 800B9D5C
  c->r[3]=0u+0x00000000u; // 800B9D60
  c->r[0]=0u+0x00000001u; // 800B9D64
  W32(c->r[31]+0x0000035Cu,c->r[4]); // 800B9D68
  W32(c->r[31]+0x00000360u,c->r[4]); // 800B9D6C
  {uint32_t ea=c->r[31]+0x00000364u; WF32(ea,c->f[0]);} // 800B9D70
  {uint32_t ea=c->r[31]+0x00000368u; WF32(ea,c->f[0]);} // 800B9D74
  W32(c->r[31]+0x0000036Cu,c->r[3]); // 800B9D78
  W8(c->r[31]+0x00000370u,c->r[3]); // 800B9D7C
  W8(c->r[31]+0x00000371u,c->r[0]); // 800B9D80
  W32(c->r[31]+0x00000374u,c->r[4]); // 800B9D84
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800B9D88
  c->r[0]=R32(c->r[1]+0x00000014u); // 800B9D8C
  c->lr=c->r[0]; // 800B9D90
  c->r[1]=c->r[1]+0x00000010u; // 800B9D94
  return; // 800B9D98
}

// fn_800B9D9C
void f_800B9D9C(Ctx* __restrict c) {
  trace_call(0x800B9D9Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B9D9C
  c->r[0]=c->lr; // 800B9DA0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B9DA4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800B9DA8
  c->r[31]=c->r[3]|c->r[3]; // 800B9DAC
  c->r[0]=R8(c->r[3]+0x00000370u); // 800B9DB0
  cmps(c,0,(int32_t)c->r[0],0); // 800B9DB4
  if (crb(c,2)) { goto L_800B9DC4; } // 800B9DB8
  c->r[0]=0u+0x00000001u; // 800B9DBC
  W8(c->r[3]+0x00000371u,c->r[0]); // 800B9DC0
L_800B9DC4:;
  c->r[0]=R8(c->r[3]+0x00000371u); // 800B9DC4
  cmps(c,0,(int32_t)c->r[0],0); // 800B9DC8
  if (crb(c,2)) { goto L_800B9DD8; } // 800B9DCC
  c->r[3]=c->r[31]|c->r[31]; // 800B9DD0
  c->lr=0x800B9DD8u; f_800BA6D8(c); // 800B9DD4
L_800B9DD8:;
  c->r[3]=R32(c->r[31]+0x00000138u); // 800B9DD8
  c->lr=0x800B9DE0u; f_804BDAB4(c); // 800B9DDC
  c->r[0]=R32(c->r[1]+0x00000014u); // 800B9DE0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800B9DE4
  c->lr=c->r[0]; // 800B9DE8
  c->r[1]=c->r[1]+0x00000010u; // 800B9DEC
  return; // 800B9DF0
}

// fn_800B9DF4
void f_800B9DF4(Ctx* __restrict c) {
  trace_call(0x800B9DF4u);
  {uint32_t ea=c->r[1]+0xFFFFFEF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B9DF4
  c->r[0]=c->lr; // 800B9DF8
  W32(c->r[1]+0x00000114u,c->r[0]); // 800B9DFC
  c->r[11]=c->r[1]+0x00000110u; // 800B9E00
  c->lr=0x800B9E08u; { W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800B9E04
  c->r[0]=R8(c->r[3]+0x00000371u); // 800B9E08
  c->r[30]=c->r[3]|c->r[3]; // 800B9E0C
  cmps(c,0,(int32_t)c->r[0],0); // 800B9E10
  if (!crb(c,2)) { goto L_800BA2B8; } // 800B9E14
  {uint32_t ea=c->r[3]+0x00000364u; c->f[1]=c->ps1[1]=RF32(ea);} // 800B9E18
  {uint32_t ea=c->r[2]+0xFFFFA030u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B9E1C
  fcmp(c,0,c->f[1],c->f[0]); // 800B9E20
  setcrb(c,2,crb(c,0)|crb(c,2)); // 800B9E24
  if (!crb(c,2)) { goto L_800B9E4C; } // 800B9E28
  c->r[3]=R32(c->r[3]+0x00000340u); // 800B9E2C
  c->lr=0x800B9E34u; f_802EA43C(c); // 800B9E30
  c->r[3]=R32(c->r[30]+0x00000340u); // 800B9E34
  c->r[4]=0u+0x00000000u; // 800B9E38
  c->lr=0x800B9E40u; f_802E9C40(c); // 800B9E3C
  c->r[0]=0u+0x00000001u; // 800B9E40
  W8(c->r[30]+0x00000370u,c->r[0]); // 800B9E44
  goto L_800B9EE8; // 800B9E48
L_800B9E4C:;
  c->r[0]=R8(c->r[13]+0xFFFFBB9Bu); // 800B9E4C
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800B9E50
  if (!crb(c,2)) { goto L_800B9E90; } // 800B9E54
  c->r[29]=0u+0x80730000u; // 800B9E58
  c->r[3]=c->r[29]+0x00006D10u; // 800B9E5C
  c->lr=0x800B9E64u; f_802D8298(c); // 800B9E60
  c->r[3]=0u+0x806D0000u; // 800B9E64
  c->r[4]=0u+0x80050000u; // 800B9E68
  c->r[3]=c->r[3]+0xFFFFC220u; // 800B9E6C
  c->r[5]=0u+0x80750000u; // 800B9E70
  W32(c->r[29]+0x00006D10u,c->r[3]); // 800B9E74
  c->r[3]=c->r[29]+0x00006D10u; // 800B9E78
  c->r[4]=c->r[4]+0xFFFF9D40u; // 800B9E7C
  c->r[5]=c->r[5]+0x00002C94u; // 800B9E80
  c->lr=0x800B9E88u; f_803A92B8(c); // 800B9E84
  c->r[0]=0u+0x00000001u; // 800B9E88
  W8(c->r[13]+0xFFFFBB9Bu,c->r[0]); // 800B9E8C
L_800B9E90:;
  c->r[4]=0u+0x80730000u; // 800B9E90
  {uint32_t ea=c->r[30]+0x00000368u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B9E94
  c->r[4]=c->r[4]+0x00006D10u; // 800B9E98
  c->r[3]=R32(c->r[30]+0x00000340u); // 800B9E9C
  {uint32_t ea=c->r[4]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 800B9EA0
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[1]); // 800B9EA4
  {uint32_t ea=c->r[30]+0x00000368u; WF32(ea,c->f[0]);} // 800B9EA8
  c->lr=0x800B9EB0u; f_802EA43C(c); // 800B9EAC
  {uint32_t ea=c->r[30]+0x00000368u; c->f[2]=c->ps1[2]=RF32(ea);} // 800B9EB0
  c->r[4]=0u+0x00000000u; // 800B9EB4
  {uint32_t ea=c->r[30]+0x00000364u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B9EB8
  c->r[3]=R32(c->r[30]+0x00000340u); // 800B9EBC
  c->f[0]=c->ps1[0]=S(c->f[2]/c->f[0]); // 800B9EC0
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[1]); // 800B9EC4
  c->lr=0x800B9ECCu; f_802E9C40(c); // 800B9EC8
  {uint32_t ea=c->r[30]+0x00000368u; c->f[1]=c->ps1[1]=RF32(ea);} // 800B9ECC
  {uint32_t ea=c->r[30]+0x00000364u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B9ED0
  fcmp(c,0,c->f[1],c->f[0]); // 800B9ED4
  setcrb(c,2,crb(c,1)|crb(c,2)); // 800B9ED8
  if (!crb(c,2)) { goto L_800B9EE8; } // 800B9EDC
  c->r[0]=0u+0x00000001u; // 800B9EE0
  W8(c->r[30]+0x00000370u,c->r[0]); // 800B9EE4
L_800B9EE8:;
  c->r[29]=0u+0x00000000u; // 800B9EE8
  W8(c->r[1]+0x00000010u,c->r[29]); // 800B9EEC
  c->r[3]=c->r[1]+0x00000010u; // 800B9EF0
  c->lr=0x800B9EF8u; f_80047A80(c); // 800B9EF4
  c->r[3]=R32(c->r[3]+0x00000004u); // 800B9EF8
  c->lr=0x800B9F00u; f_804CC8D4(c); // 800B9EFC
  W32(c->r[1]+0x00000018u,c->r[3]); // 800B9F00
  c->r[3]=c->r[1]+0x00000018u; // 800B9F04
  c->r[4]=c->r[1]+0x000000C0u; // 800B9F08
  c->lr=0x800B9F10u; f_804C7FD8(c); // 800B9F0C
  W8(c->r[1]+0x0000000Cu,c->r[29]); // 800B9F10
  c->r[3]=c->r[1]+0x0000000Cu; // 800B9F14
  c->lr=0x800B9F1Cu; f_80047A80(c); // 800B9F18
  c->r[3]=R32(c->r[3]+0x00000004u); // 800B9F1C
  c->lr=0x800B9F24u; f_804CC8D4(c); // 800B9F20
  W32(c->r[1]+0x00000014u,c->r[3]); // 800B9F24
  c->r[3]=c->r[1]+0x00000014u; // 800B9F28
  c->r[4]=c->r[1]+0x00000080u; // 800B9F2C
  c->lr=0x800B9F34u; f_804C7AC0(c); // 800B9F30
  {uint32_t ea=c->r[1]+0x000000C0u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B9F34
  c->f[0]=-c->f[0]; // 800B9F38
  {uint32_t ea=c->r[30]+0x000001B8u; WF32(ea,c->f[0]);} // 800B9F3C
  {uint32_t ea=c->r[1]+0x000000D0u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B9F40
  {uint32_t ea=c->r[30]+0x000001BCu; WF32(ea,c->f[0]);} // 800B9F44
  {uint32_t ea=c->r[1]+0x000000E0u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B9F48
  c->f[0]=-c->f[0]; // 800B9F4C
  {uint32_t ea=c->r[30]+0x000001C0u; WF32(ea,c->f[0]);} // 800B9F50
  {uint32_t ea=c->r[1]+0x000000C4u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B9F54
  c->f[0]=-c->f[0]; // 800B9F58
  {uint32_t ea=c->r[30]+0x000001C8u; WF32(ea,c->f[0]);} // 800B9F5C
  {uint32_t ea=c->r[1]+0x000000D4u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B9F60
  {uint32_t ea=c->r[30]+0x000001CCu; WF32(ea,c->f[0]);} // 800B9F64
  {uint32_t ea=c->r[1]+0x000000E4u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B9F68
  c->f[0]=-c->f[0]; // 800B9F6C
  {uint32_t ea=c->r[30]+0x000001D0u; WF32(ea,c->f[0]);} // 800B9F70
  {uint32_t ea=c->r[1]+0x000000C8u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B9F74
  c->f[0]=-c->f[0]; // 800B9F78
  {uint32_t ea=c->r[30]+0x000001D8u; WF32(ea,c->f[0]);} // 800B9F7C
  {uint32_t ea=c->r[1]+0x000000D8u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B9F80
  {uint32_t ea=c->r[30]+0x000001DCu; WF32(ea,c->f[0]);} // 800B9F84
  {uint32_t ea=c->r[1]+0x000000E8u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B9F88
  c->f[0]=-c->f[0]; // 800B9F8C
  {uint32_t ea=c->r[30]+0x000001E0u; WF32(ea,c->f[0]);} // 800B9F90
  c->r[0]=R8(c->r[13]+0xFFFFBB87u); // 800B9F94
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800B9F98
  if (!crb(c,2)) { goto L_800B9FE0; } // 800B9F9C
  c->r[29]=0u+0x80730000u; // 800B9FA0
  c->r[3]=c->r[29]+0x00006160u; // 800B9FA4
  c->lr=0x800B9FACu; f_8008C1BC(c); // 800B9FA8
  c->r[6]=0u+0x806D0000u; // 800B9FAC
  c->r[4]=0u+0x80050000u; // 800B9FB0
  c->r[6]=c->r[6]+0xFFFFC37Cu; // 800B9FB4
  c->r[3]=c->r[29]+0x00006160u; // 800B9FB8
  c->r[0]=c->r[6]+0x00000028u; // 800B9FBC
  c->r[5]=0u+0x80750000u; // 800B9FC0
  W32(c->r[3]+0x000000A4u,c->r[6]); // 800B9FC4
  c->r[4]=c->r[4]+0xFFFF9F5Cu; // 800B9FC8
  c->r[5]=c->r[5]+0x00002C4Cu; // 800B9FCC
  W32(c->r[3]+0x000000A8u,c->r[0]); // 800B9FD0
  c->lr=0x800B9FD8u; f_803A92B8(c); // 800B9FD4
  c->r[0]=0u+0x00000001u; // 800B9FD8
  W8(c->r[13]+0xFFFFBB87u,c->r[0]); // 800B9FDC
L_800B9FE0:;
  c->r[3]=0u+0x80730000u; // 800B9FE0
  c->r[3]=c->r[3]+0x00006160u; // 800B9FE4
  c->lr=0x800B9FECu; f_8008CD18(c); // 800B9FE8
  cmps(c,0,(int32_t)c->r[3],1); // 800B9FEC
  if (!crb(c,1)) { goto L_800BA13C; } // 800B9FF0
  c->r[0]=R32(c->r[30]+0x00000374u); // 800B9FF4
  c->r[31]=0u+0x43300000u; // 800B9FF8
  {uint32_t ea=c->r[2]+0xFFFFA030u; c->f[1]=c->ps1[1]=RF32(ea);} // 800B9FFC
  c->r[3]=c->r[1]+0x00000090u; // 800BA000
  c->r[4]=rotl(c->r[0],1)&0xFFFFFFFEu; // 800BA004
  W32(c->r[1]+0x000000F0u,c->r[31]); // 800BA008
  c->r[0]=c->r[4]+0xFFFFFFFFu; // 800BA00C
  {uint32_t ea=c->r[2]+0xFFFFA040u; c->f[5]=RF64(ea);} // 800BA010
  c->r[0]=c->r[0]^0x80000000u; // 800BA014
  W32(c->r[1]+0x000000F4u,c->r[0]); // 800BA018
  {uint32_t ea=c->r[2]+0xFFFFA034u; c->f[2]=c->ps1[2]=RF32(ea);} // 800BA01C
  c->f[3]=c->f[1]; // 800BA020
  {uint32_t ea=c->r[1]+0x000000F0u; c->f[4]=RF64(ea);} // 800BA024
  {uint32_t ea=c->r[2]+0xFFFFA038u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BA028
  c->f[4]=c->ps1[4]=S(c->f[4]-c->f[5]); // 800BA02C
  {uint32_t ea=c->r[30]+0x000001C4u; WF32(ea,c->f[1]);} // 800BA030
  {uint32_t ea=c->r[30]+0x000001D4u; WF32(ea,c->f[1]);} // 800BA034
  c->f[2]=c->ps1[2]=S(c->f[2]*c->f[4]); // 800BA038
  {uint32_t ea=c->r[30]+0x000001E4u; WF32(ea,c->f[1]);} // 800BA03C
  c->f[2]=c->ps1[2]=S(c->f[0]*c->f[2]); // 800BA040
  c->lr=0x800BA048u; f_804E18A0(c); // 800BA044
  c->r[4]=c->r[30]+0x000001B8u; // 800BA048
  c->r[3]=c->r[1]+0x00000090u; // 800BA04C
  c->r[5]=c->r[4]|c->r[4]; // 800BA050
  c->lr=0x800BA058u; f_80382F60(c); // 800BA054
  c->lr=0x800BA05Cu; f_8033FE4C(c); // 800BA058
  c->r[29]=c->r[3]|c->r[3]; // 800BA05C
  c->r[4]=c->r[1]+0x00000044u; // 800BA060
  {uint32_t ea=c->r[3]+0x00000138u; psq_load(c,0,ea,0,0);} // 800BA064
  {uint32_t ea=c->r[3]+0x0000012Cu; psq_load(c,1,ea,0,0);} // 800BA068
  {double t0=S(c->f[0]-c->f[1]), t1=S(c->ps1[0]-c->ps1[1]); c->f[0]=t0; c->ps1[0]=t1;} // 800BA06C
  {uint32_t ea=c->r[4]+0x00000000u; psq_store(c,0,ea,0,0);} // 800BA070
  {uint32_t ea=c->r[3]+0x00000140u; psq_load(c,0,ea,1,0);} // 800BA074
  {uint32_t ea=c->r[3]+0x00000134u; psq_load(c,1,ea,1,0);} // 800BA078
  {double t0=S(c->f[0]-c->f[1]), t1=S(c->ps1[0]-c->ps1[1]); c->f[0]=t0; c->ps1[0]=t1;} // 800BA07C
  {uint32_t ea=c->r[4]+0x00000008u; psq_store(c,0,ea,1,0);} // 800BA080
  c->r[5]=0u+0x806A0000u; // 800BA084
  c->r[3]=c->r[1]+0x00000038u; // 800BA088
  c->r[5]=c->r[5]+0x00000AA8u; // 800BA08C
  c->lr=0x800BA094u; f_8030E0BC(c); // 800BA090
  c->r[3]=c->r[1]+0x00000038u; // 800BA094
  c->r[4]=c->r[1]+0x00000050u; // 800BA098
  {uint32_t ea=c->r[29]+0x00000144u; psq_load(c,1,ea,0,0);} // 800BA09C
  {uint32_t ea=c->r[3]+0x00000004u; psq_load(c,0,ea,0,0);} // 800BA0A0
  {double t0=S(c->f[1]*c->ps1[0]), t1=S(c->ps1[1]*c->ps1[0]); c->f[3]=t0; c->ps1[3]=t1;} // 800BA0A4
  {uint32_t ea=c->r[3]+0x00000000u; psq_load(c,2,ea,0,0);} // 800BA0A8
  {double t0=S(c->f[0]*c->f[1]), t1=S(c->ps1[0]*c->ps1[1]); c->f[0]=t0; c->ps1[0]=t1;} // 800BA0AC
  {uint32_t ea=c->r[29]+0x00000148u; psq_load(c,1,ea,0,0);} // 800BA0B0
  {double t0=S(std::fma(c->f[2],c->f[1],-c->f[0])), t1=S(std::fma(c->ps1[2],c->ps1[1],-c->ps1[0])); c->f[0]=t0; c->ps1[0]=t1;} // 800BA0B4
  {double t0=S(c->f[2]*c->ps1[1]), t1=S(c->ps1[2]*c->ps1[1]); c->f[1]=t0; c->ps1[1]=t1;} // 800BA0B8
  {uint32_t ea=c->r[4]+0x00000008u; psq_store(c,0,ea,1,0);} // 800BA0BC
  {double t0=S(c->f[3]-c->f[1]), t1=S(c->ps1[3]-c->ps1[1]); c->f[2]=t0; c->ps1[2]=t1;} // 800BA0C0
  {double t0=S(c->ps1[0]), t1=S(c->f[2]); c->f[1]=t0; c->ps1[1]=t1;} // 800BA0C4
  {uint32_t ea=c->r[4]+0x00000000u; psq_store(c,1,ea,0,0);} // 800BA0C8
  c->r[3]=c->r[1]+0x0000005Cu; // 800BA0CC
  c->lr=0x800BA0D4u; f_8005CD7C(c); // 800BA0D0
  c->r[0]=R32(c->r[30]+0x00000374u); // 800BA0D4
  c->r[3]=c->r[1]+0x00000068u; // 800BA0D8
  W32(c->r[1]+0x000000F8u,c->r[31]); // 800BA0DC
  c->r[4]=rotl(c->r[0],1)&0xFFFFFFFEu; // 800BA0E0
  {uint32_t ea=c->r[2]+0xFFFFA040u; c->f[1]=RF64(ea);} // 800BA0E4
  c->r[0]=c->r[4]+0xFFFFFFFFu; // 800BA0E8
  c->r[0]=c->r[0]^0x80000000u; // 800BA0EC
  W32(c->r[1]+0x000000FCu,c->r[0]); // 800BA0F0
  c->r[4]=c->r[1]+0x0000005Cu; // 800BA0F4
  {uint32_t ea=c->r[1]+0x000000F8u; c->f[0]=RF64(ea);} // 800BA0F8
  c->f[1]=c->ps1[1]=S(c->f[0]-c->f[1]); // 800BA0FC
  c->lr=0x800BA104u; f_8005ED34(c); // 800BA100
  {uint32_t ea=c->r[2]+0xFFFFA03Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800BA104
  c->r[3]=c->r[1]+0x00000074u; // 800BA108
  c->r[4]=c->r[1]+0x00000068u; // 800BA10C
  c->lr=0x800BA114u; f_8005ED34(c); // 800BA110
  c->r[3]=c->r[1]+0x00000074u; // 800BA114
  c->r[4]=c->r[1]+0x00000080u; // 800BA118
  {uint32_t ea=c->r[4]+0x00000000u; psq_load(c,1,ea,0,0);} // 800BA11C
  {uint32_t ea=c->r[3]+0x00000000u; psq_load(c,0,ea,0,0);} // 800BA120
  {double t0=S(c->f[1]+c->f[0]), t1=S(c->ps1[1]+c->ps1[0]); c->f[0]=t0; c->ps1[0]=t1;} // 800BA124
  {uint32_t ea=c->r[4]+0x00000000u; psq_store(c,0,ea,0,0);} // 800BA128
  {uint32_t ea=c->r[4]+0x00000008u; psq_load(c,1,ea,1,0);} // 800BA12C
  {uint32_t ea=c->r[3]+0x00000008u; psq_load(c,0,ea,1,0);} // 800BA130
  {double t0=S(c->f[1]+c->f[0]), t1=S(c->ps1[1]+c->ps1[0]); c->f[0]=t0; c->ps1[0]=t1;} // 800BA134
  {uint32_t ea=c->r[4]+0x00000008u; psq_store(c,0,ea,1,0);} // 800BA138
L_800BA13C:;
  {uint32_t ea=c->r[1]+0x00000080u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BA13C
  {uint32_t ea=c->r[30]+0x000001C4u; WF32(ea,c->f[0]);} // 800BA140
  c->r[3]=R32(c->r[30]+0x00000138u); // 800BA144
  {uint32_t ea=c->r[1]+0x00000084u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BA148
  {uint32_t ea=c->r[30]+0x000001D4u; WF32(ea,c->f[0]);} // 800BA14C
  {uint32_t ea=c->r[1]+0x00000088u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BA150
  {uint32_t ea=c->r[30]+0x000001E4u; WF32(ea,c->f[0]);} // 800BA154
  W32(c->r[1]+0x0000001Cu,c->r[3]); // 800BA158
  c->lr=0x800BA160u; f_804BDAB4(c); // 800BA15C
  c->r[3]=R32(c->r[30]+0x00000138u); // 800BA160
  c->r[5]=c->r[30]+0x000001B8u; // 800BA164
  c->r[4]=0u+0x00000000u; // 800BA168
  c->lr=0x800BA170u; f_804CB27C(c); // 800BA16C
  c->r[0]=0u+0x00000000u; // 800BA170
  W8(c->r[1]+0x00000008u,c->r[0]); // 800BA174
  c->r[3]=c->r[1]+0x00000008u; // 800BA178
  c->lr=0x800BA180u; f_80047A80(c); // 800BA17C
  c->r[4]=c->r[1]+0x0000001Cu; // 800BA180
  c->r[5]=0u+0x00000001u; // 800BA184
  c->lr=0x800BA18Cu; f_8029A8A0(c); // 800BA188
  c->r[0]=R32(c->r[30]+0x00000374u); // 800BA18C
  c->r[31]=0u+0x00000000u; // 800BA190
  cmps(c,0,(int32_t)c->r[0],0); // 800BA194
  if (crb(c,0)) { goto L_800BA294; } // 800BA198
  c->r[0]=R8(c->r[13]+0xFFFFBB88u); // 800BA19C
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800BA1A0
  if (!crb(c,2)) { goto L_800BA1E8; } // 800BA1A4
  c->r[29]=0u+0x80730000u; // 800BA1A8
  c->r[3]=c->r[29]+0x00006378u; // 800BA1AC
  c->lr=0x800BA1B4u; f_800B0D5C(c); // 800BA1B0
  c->r[6]=0u+0x806D0000u; // 800BA1B4
  c->r[4]=0u+0x80050000u; // 800BA1B8
  c->r[6]=c->r[6]+0xFFFFC340u; // 800BA1BC
  c->r[3]=c->r[29]+0x00006378u; // 800BA1C0
  c->r[0]=c->r[6]+0x00000028u; // 800BA1C4
  c->r[5]=0u+0x80750000u; // 800BA1C8
  W32(c->r[3]+0x000000A4u,c->r[6]); // 800BA1CC
  c->r[4]=c->r[4]+0xFFFF9F20u; // 800BA1D0
  c->r[5]=c->r[5]+0x00002C58u; // 800BA1D4
  W32(c->r[3]+0x000000A8u,c->r[0]); // 800BA1D8
  c->lr=0x800BA1E0u; f_803A92B8(c); // 800BA1DC
  c->r[0]=0u+0x00000001u; // 800BA1E0
  W8(c->r[13]+0xFFFFBB88u,c->r[0]); // 800BA1E4
L_800BA1E8:;
  c->r[28]=R32(c->r[30]+0x00000374u); // 800BA1E8
  c->r[29]=0u+0x80730000u; // 800BA1EC
  c->r[29]=c->r[29]+0x00006378u; // 800BA1F0
  c->r[3]=c->r[29]|c->r[29]; // 800BA1F4
  c->r[4]=c->r[28]|c->r[28]; // 800BA1F8
  c->lr=0x800BA200u; f_80046E74(c); // 800BA1FC
  c->r[0]=cntlz(c->r[3]); // 800BA200
  W32(c->r[1]+0x00000024u,c->r[4]); // 800BA204
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; cr0(c,c->r[0]); // 800BA208
  W32(c->r[1]+0x00000020u,c->r[3]); // 800BA20C
  if (!crb(c,2)) { goto L_800BA24C; } // 800BA210
  c->r[3]=c->r[29]|c->r[29]; // 800BA214
  c->r[4]=c->r[28]|c->r[28]; // 800BA218
  c->lr=0x800BA220u; f_80046E74(c); // 800BA21C
  W32(c->r[1]+0x0000002Cu,c->r[4]); // 800BA220
  W32(c->r[1]+0x00000028u,c->r[3]); // 800BA224
  c->lr=0x800BA22Cu; f_800797AC(c); // 800BA228
  c->r[0]=R32(c->r[1]+0x0000002Cu); // 800BA22C
  c->r[4]=R32(c->r[1]+0x00000028u); // 800BA230
  c->r[0]=rotl(c->r[0],3)&0xFFFFFFF8u; // 800BA234
  c->r[3]=c->r[3]+c->r[0]; // 800BA238
  c->r[0]=R32(c->r[3]+0x00000008u); // 800BA23C
  c->r[3]=c->r[0]-c->r[4]; // 800BA240
  c->r[0]=addc(c,c->r[3],0xFFFFFFFFu,0); // 800BA244
  c->r[0]=addc(c,~c->r[0],c->r[3],c->xer_ca); // 800BA248
L_800BA24C:;
  cmps(c,0,(int32_t)c->r[0],0); // 800BA24C
  if (crb(c,2)) { goto L_800BA25C; } // 800BA250
  c->r[3]=0u+0x00000000u; // 800BA254
  goto L_800BA284; // 800BA258
L_800BA25C:;
  c->r[3]=c->r[29]|c->r[29]; // 800BA25C
  c->r[4]=c->r[28]|c->r[28]; // 800BA260
  c->lr=0x800BA268u; f_80046E74(c); // 800BA264
  W32(c->r[1]+0x00000034u,c->r[4]); // 800BA268
  W32(c->r[1]+0x00000030u,c->r[3]); // 800BA26C
  c->lr=0x800BA274u; f_800797AC(c); // 800BA270
  c->r[0]=R32(c->r[1]+0x00000034u); // 800BA274
  c->r[0]=rotl(c->r[0],3)&0xFFFFFFF8u; // 800BA278
  c->r[3]=c->r[3]+c->r[0]; // 800BA27C
  c->r[3]=R32(c->r[3]+0x0000000Cu); // 800BA280
L_800BA284:;
  c->r[0]=R32(c->r[3]+0x0000033Cu); // 800BA284
  c->r[0]=rotl(c->r[0],0)&0x00000038u; cr0(c,c->r[0]); // 800BA288
  if (crb(c,2)) { goto L_800BA294; } // 800BA28C
  c->r[31]=0u+0x00000001u; // 800BA290
L_800BA294:;
  cmps(c,0,(int32_t)c->r[31],0); // 800BA294
  if (!crb(c,2)) { goto L_800BA2B8; } // 800BA298
  c->r[3]=R32(c->r[30]+0x0000033Cu); // 800BA29C
  c->r[5]=R32(c->r[30]+0x00000138u); // 800BA2A0
  c->r[12]=R32(c->r[3]+0x00000000u); // 800BA2A4
  c->r[4]=R32(c->r[3]+0x000000E4u); // 800BA2A8
  c->r[12]=R32(c->r[12]+0x00000034u); // 800BA2AC
  c->ctr=c->r[12]; // 800BA2B0
  if (true) { c->lr=0x800BA2B8u; dispatch(c,c->ctr); } // 800BA2B4
L_800BA2B8:;
  c->r[11]=c->r[1]+0x00000110u; // 800BA2B8
  c->lr=0x800BA2C0u; { c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800BA2BC
  c->r[0]=R32(c->r[1]+0x00000114u); // 800BA2C0
  c->lr=c->r[0]; // 800BA2C4
  c->r[1]=c->r[1]+0x00000110u; // 800BA2C8
  return; // 800BA2CC
}

// fn_800BA2D0
void f_800BA2D0(Ctx* __restrict c) {
  trace_call(0x800BA2D0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BA2D0
  c->r[0]=c->lr; // 800BA2D4
  cmpu(c,0,c->r[4],0x00000001u); // 800BA2D8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800BA2DC
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800BA2E0
  c->r[30]=c->r[3]|c->r[3]; // 800BA2E4
  c->r[31]=c->r[4]|c->r[4]; // 800BA2E8
  if (!crb(c,1)) { goto L_800BA2F4; } // 800BA2EC
  c->r[31]=0u+0x00000000u; // 800BA2F0
L_800BA2F4:;
  c->r[0]=R8(c->r[13]+0xFFFFC14Cu); // 800BA2F4
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800BA2F8
  if (!crb(c,2)) { goto L_800BA318; } // 800BA2FC
  c->r[4]=R32(c->r[13]+0xFFFFBCB0u); // 800BA300
  c->r[0]=0u+0x00000001u; // 800BA304
  W32(c->r[13]+0xFFFFC148u,c->r[4]); // 800BA308
  c->r[4]=c->r[4]+0x00000001u; // 800BA30C
  W32(c->r[13]+0xFFFFBCB0u,c->r[4]); // 800BA310
  W8(c->r[13]+0xFFFFC14Cu,c->r[0]); // 800BA314
L_800BA318:;
  {uint32_t ea=c->r[3]+0x000000FCu; c->r[12]=R32(ea); c->r[3]=ea;} // 800BA318
  c->r[4]=R32(c->r[13]+0xFFFFC148u); // 800BA31C
  c->r[12]=R32(c->r[12]+0x00000048u); // 800BA320
  c->ctr=c->r[12]; // 800BA324
  if (true) { c->lr=0x800BA32Cu; dispatch(c,c->ctr); } // 800BA328
  cmps(c,0,(int32_t)c->r[3],0); // 800BA32C
  if (crb(c,2)) { goto L_800BA338; } // 800BA330
  W32(c->r[3]+0x00000040u,c->r[31]); // 800BA334
L_800BA338:;
  W32(c->r[30]+0x00000374u,c->r[31]); // 800BA338
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800BA33C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800BA340
  c->lr=c->r[0]; // 800BA344
  c->r[1]=c->r[1]+0x00000010u; // 800BA348
  return; // 800BA34C
}

// fn_800BA350
void f_800BA350(Ctx* __restrict c) {
  trace_call(0x800BA350u);
  {uint32_t ea=c->r[1]+0xFFFFFEC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BA350
  c->r[0]=c->lr; // 800BA354
  W32(c->r[1]+0x00000144u,c->r[0]); // 800BA358
  c->r[11]=c->r[1]+0x00000130u; // 800BA35C
  {uint32_t ea=c->r[1]+0x00000130u; WF64(ea,c->f[31]);} // 800BA360
  {uint32_t ea=c->r[1]+0x00000138u; psq_store(c,31,ea,0,0);} // 800BA364
  c->lr=0x800BA36Cu; { W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800BA368
  c->r[29]=0u+0x80690000u; // 800BA36C
  {uint32_t ea=c->r[2]+0xFFFFA030u; c->f[31]=c->ps1[31]=RF32(ea);} // 800BA370
  c->r[23]=c->r[3]|c->r[3]; // 800BA374
  c->r[24]=c->r[4]|c->r[4]; // 800BA378
  c->r[25]=c->r[5]|c->r[5]; // 800BA37C
  c->r[26]=c->r[6]|c->r[6]; // 800BA380
  c->r[29]=c->r[29]+0xFFFFE298u; // 800BA384
  c->r[27]=0u+0x00000000u; // 800BA388
  c->r[31]=0u+0x00000000u; // 800BA38C
  c->r[30]=0u+0xFFFFFFFFu; // 800BA390
L_800BA394:;
  c->r[0]=R32(c->r[24]+c->r[31]); // 800BA394
  cmps(c,0,(int32_t)c->r[0],0); // 800BA398
  if (crb(c,2)) { goto L_800BA3F4; } // 800BA39C
  cmps(c,0,(int32_t)c->r[26],0); // 800BA3A0
  c->r[28]=c->r[23]+c->r[31]; // 800BA3A4
  {uint32_t ea=c->r[25]+c->r[31]; c->f[0]=c->ps1[0]=RF32(ea);} // 800BA3A8
  {uint32_t ea=c->r[28]+0x00000344u; WF32(ea,c->f[0]);} // 800BA3AC
  if (crb(c,2)) { goto L_800BA3E0; } // 800BA3B0
  c->r[6]=R32(c->r[24]+c->r[31]); // 800BA3B4
  c->r[5]=c->r[26]|c->r[26]; // 800BA3B8
  c->r[3]=c->r[1]+0x00000008u; // 800BA3BC
  c->r[4]=c->r[29]+0x00000001u; // 800BA3C0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800BA3C4
  c->lr=0x800BA3CCu; f_803B1FC8(c); // 800BA3C8
  c->r[3]=R32(c->r[23]+0x00000340u); // 800BA3CC
  c->r[4]=c->r[1]+0x00000008u; // 800BA3D0
  c->lr=0x800BA3D8u; f_802E9DB4(c); // 800BA3D4
  W32(c->r[28]+0x00000350u,c->r[3]); // 800BA3D8
  goto L_800BA400; // 800BA3DC
L_800BA3E0:;
  c->r[3]=R32(c->r[23]+0x00000340u); // 800BA3E0
  c->r[4]=R32(c->r[24]+c->r[31]); // 800BA3E4
  c->lr=0x800BA3ECu; f_802E9DB4(c); // 800BA3E8
  W32(c->r[28]+0x00000350u,c->r[3]); // 800BA3EC
  goto L_800BA400; // 800BA3F0
L_800BA3F4:;
  c->r[3]=c->r[23]+c->r[31]; // 800BA3F4
  {uint32_t ea=c->r[3]+0x00000344u; WF32(ea,c->f[31]);} // 800BA3F8
  W32(c->r[3]+0x00000350u,c->r[30]); // 800BA3FC
L_800BA400:;
  c->r[27]=c->r[27]+0x00000001u; // 800BA400
  c->r[31]=c->r[31]+0x00000004u; // 800BA404
  cmps(c,0,(int32_t)c->r[27],3); // 800BA408
  if (crb(c,0)) { IRQCHK(c); goto L_800BA394; } // 800BA40C
  c->r[11]=c->r[1]+0x00000130u; // 800BA410
  {uint32_t ea=c->r[1]+0x00000138u; psq_load(c,31,ea,0,0);} // 800BA414
  {uint32_t ea=c->r[1]+0x00000130u; c->f[31]=RF64(ea);} // 800BA418
  c->lr=0x800BA420u; { c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800BA41C
  c->r[0]=R32(c->r[1]+0x00000144u); // 800BA420
  c->lr=c->r[0]; // 800BA424
  c->r[1]=c->r[1]+0x00000140u; // 800BA428
  return; // 800BA42C
}

// fn_800BA430
void f_800BA430(Ctx* __restrict c) {
  trace_call(0x800BA430u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BA430
  c->r[0]=c->lr; // 800BA434
  W32(c->r[1]+0x00000014u,c->r[0]); // 800BA438
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800BA43C
  c->r[31]=c->r[3]|c->r[3]; // 800BA440
  c->r[5]=R32(c->r[3]+0x00000350u); // 800BA444
  cmps(c,0,(int32_t)c->r[5],0); // 800BA448
  if (crb(c,0)) { goto L_800BA4A0; } // 800BA44C
  {uint32_t ea=c->r[2]+0xFFFFA030u; c->f[1]=c->ps1[1]=RF32(ea);} // 800BA450
  c->r[0]=c->r[4]+0xFFFFFFFFu; // 800BA454
  {uint32_t ea=c->r[3]+0x00000344u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BA458
  c->r[4]=c->r[5]|c->r[5]; // 800BA45C
  c->f[2]=c->f[1]; // 800BA460
  W32(c->r[3]+0x0000035Cu,c->r[0]); // 800BA464
  c->f[3]=c->f[1]; // 800BA468
  W32(c->r[3]+0x00000360u,c->r[0]); // 800BA46C
  {uint32_t ea=c->r[3]+0x00000364u; WF32(ea,c->f[0]);} // 800BA470
  {uint32_t ea=c->r[3]+0x00000368u; WF32(ea,c->f[1]);} // 800BA474
  c->r[3]=R32(c->r[3]+0x00000340u); // 800BA478
  c->lr=0x800BA480u; f_802E8B58(c); // 800BA47C
  c->r[3]=R32(c->r[31]+0x00000340u); // 800BA480
  {uint32_t ea=c->r[2]+0xFFFFA030u; c->f[1]=c->ps1[1]=RF32(ea);} // 800BA484
  c->lr=0x800BA48Cu; f_802E8E84(c); // 800BA488
  c->r[0]=0u+0x00000000u; // 800BA48C
  c->r[3]=0u+0x00000001u; // 800BA490
  W32(c->r[31]+0x0000036Cu,c->r[3]); // 800BA494
  W8(c->r[31]+0x00000370u,c->r[0]); // 800BA498
  W8(c->r[31]+0x00000371u,c->r[0]); // 800BA49C
L_800BA4A0:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800BA4A0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800BA4A4
  c->lr=c->r[0]; // 800BA4A8
  c->r[1]=c->r[1]+0x00000010u; // 800BA4AC
  return; // 800BA4B0
}

// fn_800BA4B4
void f_800BA4B4(Ctx* __restrict c) {
  trace_call(0x800BA4B4u);
  c->r[3]=R8(c->r[3]+0x00000371u); // 800BA4B4
  return; // 800BA4B8
}

// fn_800BA4BC
void f_800BA4BC(Ctx* __restrict c) {
  trace_call(0x800BA4BCu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BA4BC
  c->r[0]=c->lr; // 800BA4C0
  cmps(c,0,(int32_t)c->r[3],0); // 800BA4C4
  W32(c->r[1]+0x00000024u,c->r[0]); // 800BA4C8
  {uint32_t ea=c->r[1]+0x00000010u; for(int i=28;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800BA4CC
  c->r[29]=c->r[3]|c->r[3]; // 800BA4D0
  c->r[30]=c->r[4]|c->r[4]; // 800BA4D4
  if (!crb(c,2)) { goto L_800BA4E4; } // 800BA4D8
  c->r[3]=0u+0x00000000u; // 800BA4DC
  goto L_800BA6C4; // 800BA4E0
L_800BA4E4:;
  c->r[0]=R8(c->r[13]+0xFFFFBC0Au); // 800BA4E4
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800BA4E8
  if (!crb(c,2)) { goto L_800BA530; } // 800BA4EC
  c->r[28]=0u+0x80740000u; // 800BA4F0
  c->r[3]=c->r[28]+0x000047D8u; // 800BA4F4
  c->lr=0x800BA4FCu; f_80317EFC(c); // 800BA4F8
  c->r[6]=0u+0x806D0000u; // 800BA4FC
  c->r[4]=0u+0x80050000u; // 800BA500
  c->r[6]=c->r[6]+0xFFFFCA68u; // 800BA504
  c->r[3]=c->r[28]+0x000047D8u; // 800BA508
  c->r[0]=c->r[6]+0x00000028u; // 800BA50C
  c->r[5]=0u+0x80750000u; // 800BA510
  W32(c->r[3]+0x000000A4u,c->r[6]); // 800BA514
  c->r[4]=c->r[4]+0x0000074Cu; // 800BA518
  c->r[5]=c->r[5]+0x00002C7Cu; // 800BA51C
  W32(c->r[3]+0x000000A8u,c->r[0]); // 800BA520
  c->lr=0x800BA528u; f_803A92B8(c); // 800BA524
  c->r[0]=0u+0x00000001u; // 800BA528
  W8(c->r[13]+0xFFFFBC0Au,c->r[0]); // 800BA52C
L_800BA530:;
  c->r[31]=0u+0x80740000u; // 800BA530
  c->r[4]=0u+0x80740000u; // 800BA534
  c->r[0]=0u+0x00000005u; // 800BA538
  c->r[3]=0u+0x00000000u; // 800BA53C
  c->r[31]=c->r[31]+0x000047D8u; // 800BA540
  c->r[4]=c->r[4]+0x00005180u; // 800BA544
  c->ctr=c->r[0]; // 800BA548
L_800BA54C:;
  c->r[5]=c->r[31]+c->r[3]; // 800BA54C
  c->r[0]=R32(c->r[5]+0x000000ACu); // 800BA550
  cmps(c,0,(int32_t)c->r[0],0); // 800BA554
  if (!crb(c,2)) { goto L_800BA56C; } // 800BA558
  c->r[3]=0u+0x80740000u; // 800BA55C
  c->r[3]=c->r[3]+0x00005180u; // 800BA560
  W32(c->r[5]+0x000000ACu,c->r[3]); // 800BA564
  goto L_800BA57C; // 800BA568
L_800BA56C:;
  cmpu(c,0,c->r[0],c->r[4]); // 800BA56C
  if (crb(c,2)) { goto L_800BA57C; } // 800BA570
  c->r[3]=c->r[3]+0x00000004u; // 800BA574
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800BA54C; } // 800BA578
L_800BA57C:;
  c->r[0]=R8(c->r[13]+0xFFFFBC30u); // 800BA57C
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800BA580
  if (!crb(c,2)) { goto L_800BA5CC; } // 800BA584
  c->r[28]=0u+0x80740000u; // 800BA588
  c->r[3]=c->r[28]+0x00004D40u; // 800BA58C
  c->lr=0x800BA594u; f_800506C0(c); // 800BA590
  c->r[3]=c->r[28]+0x00004D40u; // 800BA594
  c->r[0]=0u+0x00000000u; // 800BA598
  c->r[4]=0u+0x80040000u; // 800BA59C
  c->r[5]=0u+0x80750000u; // 800BA5A0
  W32(c->r[3]+0x00000008u,c->r[3]); // 800BA5A4
  c->r[4]=c->r[4]+0x000055F4u; // 800BA5A8
  c->r[5]=c->r[5]+0x00002C40u; // 800BA5AC
  W8(c->r[3]+0x0000000Cu,c->r[0]); // 800BA5B0
  W32(c->r[3]+0x00000014u,c->r[0]); // 800BA5B4
  W32(c->r[3]+0x00000010u,c->r[0]); // 800BA5B8
  W32(c->r[3]+0x00000028u,c->r[0]); // 800BA5BC
  c->lr=0x800BA5C4u; f_803A92B8(c); // 800BA5C0
  c->r[0]=0u+0x00000001u; // 800BA5C4
  W8(c->r[13]+0xFFFFBC30u,c->r[0]); // 800BA5C8
L_800BA5CC:;
  c->r[4]=0u+0x80740000u; // 800BA5CC
  c->r[4]=c->r[4]+0x00004D40u; // 800BA5D0
  c->r[3]=R32(c->r[4]+0x00000028u); // 800BA5D4
  cmps(c,0,(int32_t)c->r[3],0); // 800BA5D8
  if (crb(c,2)) { goto L_800BA5FC; } // 800BA5DC
  c->r[12]=R32(c->r[3]+0x00000000u); // 800BA5E0
  c->r[4]=0u+0x00000378u; // 800BA5E4
  c->r[12]=R32(c->r[12]+0x00000008u); // 800BA5E8
  c->ctr=c->r[12]; // 800BA5EC
  if (true) { c->lr=0x800BA5F4u; dispatch(c,c->ctr); } // 800BA5F0
  c->r[28]=c->r[3]|c->r[3]; // 800BA5F4
  goto L_800BA60C; // 800BA5F8
L_800BA5FC:;
  c->r[3]=c->r[4]+0x00000018u; // 800BA5FC
  c->r[4]=0u+0x00000378u; // 800BA600
  c->lr=0x800BA608u; f_803C4D08(c); // 800BA604
  c->r[28]=c->r[3]|c->r[3]; // 800BA608
L_800BA60C:;
  cmps(c,0,(int32_t)c->r[28],0); // 800BA60C
  if (crb(c,2)) { goto L_800BA61C; } // 800BA610
  c->r[3]=c->r[28]|c->r[28]; // 800BA614
  c->lr=0x800BA61Cu; f_800B94EC(c); // 800BA618
L_800BA61C:;
  c->r[0]=0u+0x00000F7Du; // 800BA61C
  W32(c->r[28]+0x000000F4u,c->r[0]); // 800BA620
  c->r[0]=0u+0x00000000u; // 800BA624
  c->r[4]=0u+0x80740000u; // 800BA628
  W32(c->r[28]+0x000000F8u,c->r[0]); // 800BA62C
  c->r[4]=c->r[4]+0x00005180u; // 800BA630
  c->r[0]=c->r[31]+0x000000D8u; // 800BA634
  c->r[3]=c->r[31]|c->r[31]; // 800BA638
  c->r[0]=c->r[4]-c->r[0]; // 800BA63C
  W32(c->r[28]+0x00000060u,c->r[4]); // 800BA640
  c->r[0]=cntlz(c->r[0]); // 800BA644
  c->r[4]=c->r[28]|c->r[28]; // 800BA648
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 800BA64C
  W8(c->r[28]+0x0000005Cu,c->r[0]); // 800BA650
  c->r[5]=c->r[29]|c->r[29]; // 800BA654
  c->r[6]=R8(c->r[31]+0x000000D4u); // 800BA658
  c->lr=0x800BA660u; f_80318CF4(c); // 800BA65C
  cmps(c,0,(int32_t)c->r[3],0); // 800BA660
  if (crb(c,2)) { goto L_800BA69C; } // 800BA664
  c->r[3]=c->r[31]|c->r[31]; // 800BA668
  c->r[4]=c->r[28]|c->r[28]; // 800BA66C
  c->r[5]=c->r[29]|c->r[29]; // 800BA670
  c->lr=0x800BA678u; f_80318E5C(c); // 800BA674
  c->r[12]=R32(c->r[28]+0x0000001Cu); // 800BA678
  c->r[3]=c->r[28]|c->r[28]; // 800BA67C
  c->r[12]=R32(c->r[12]+0x00000014u); // 800BA680
  c->ctr=c->r[12]; // 800BA684
  if (true) { c->lr=0x800BA68Cu; dispatch(c,c->ctr); } // 800BA688
  c->r[4]=R32(c->r[31]+0x000000CCu); // 800BA68C
  c->r[3]=c->r[28]+0x000000FCu; // 800BA690
  c->r[5]=R32(c->r[31]+0x000000D0u); // 800BA694
  c->lr=0x800BA69Cu; f_802E61BC(c); // 800BA698
L_800BA69C:;
  cmps(c,0,(int32_t)c->r[28],0); // 800BA69C
  if (crb(c,2)) { goto L_800BA6C0; } // 800BA6A0
  c->r[3]=c->r[28]+0x000000FCu; // 800BA6A4
  c->r[4]=0u+0x000000EDu; // 800BA6A8
  c->r[5]=0u+0x000000EDu; // 800BA6AC
  c->lr=0x800BA6B4u; f_802E61BC(c); // 800BA6B0
  c->r[3]=c->r[28]|c->r[28]; // 800BA6B4
  c->r[4]=c->r[30]|c->r[30]; // 800BA6B8
  c->lr=0x800BA6C0u; f_800BA2D0(c); // 800BA6BC
L_800BA6C0:;
  c->r[3]=c->r[28]|c->r[28]; // 800BA6C0
L_800BA6C4:;
  {uint32_t ea=c->r[1]+0x00000010u; for(int i=28;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800BA6C4
  c->r[0]=R32(c->r[1]+0x00000024u); // 800BA6C8
  c->lr=c->r[0]; // 800BA6CC
  c->r[1]=c->r[1]+0x00000020u; // 800BA6D0
  return; // 800BA6D4
}

// fn_800BA6D8
void f_800BA6D8(Ctx* __restrict c) {
  trace_call(0x800BA6D8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BA6D8
  c->r[0]=c->lr; // 800BA6DC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800BA6E0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800BA6E4
  c->r[31]=c->r[3]|c->r[3]; // 800BA6E8
  c->r[0]=R32(c->r[3]+0x0000036Cu); // 800BA6EC
  cmps(c,0,(int32_t)c->r[0],1); // 800BA6F0
  if (crb(c,2)) { goto L_800BA70C; } // 800BA6F4
  cmps(c,0,(int32_t)c->r[0],2); // 800BA6F8
  if (crb(c,2)) { goto L_800BA75C; } // 800BA6FC
  cmps(c,0,(int32_t)c->r[0],3); // 800BA700
  if (crb(c,2)) { goto L_800BA79C; } // 800BA704
  goto L_800BA7A4; // 800BA708
L_800BA70C:;
  c->r[0]=R32(c->r[3]+0x00000354u); // 800BA70C
  cmps(c,0,(int32_t)c->r[0],0); // 800BA710
  if (crb(c,0)) { goto L_800BA734; } // 800BA714
  c->r[0]=R32(c->r[3]+0x00000360u); // 800BA718
  cmps(c,0,(int32_t)c->r[0],0); // 800BA71C
  if (!crb(c,1)) { goto L_800BA734; } // 800BA720
  c->r[0]=0u+0x00000002u; // 800BA724
  W32(c->r[3]+0x0000036Cu,c->r[0]); // 800BA728
  c->r[4]=0u+0x00000001u; // 800BA72C
  goto L_800BA7A4; // 800BA730
L_800BA734:;
  c->r[0]=R32(c->r[3]+0x00000358u); // 800BA734
  cmps(c,0,(int32_t)c->r[0],0); // 800BA738
  if (crb(c,0)) { goto L_800BA750; } // 800BA73C
  c->r[0]=0u+0x00000003u; // 800BA740
  W32(c->r[3]+0x0000036Cu,c->r[0]); // 800BA744
  c->r[4]=0u+0x00000002u; // 800BA748
  goto L_800BA7A4; // 800BA74C
L_800BA750:;
  c->r[0]=0u+0x00000000u; // 800BA750
  W32(c->r[3]+0x0000036Cu,c->r[0]); // 800BA754
  goto L_800BA7A4; // 800BA758
L_800BA75C:;
  c->r[4]=R32(c->r[3]+0x00000360u); // 800BA75C
  c->r[0]=addc(c,c->r[4],0xFFFFFFFFu,0); cr0(c,c->r[0]); // 800BA760
  W32(c->r[3]+0x00000360u,c->r[0]); // 800BA764
  if (crb(c,1)) { goto L_800BA794; } // 800BA768
  c->r[0]=R32(c->r[3]+0x00000358u); // 800BA76C
  cmps(c,0,(int32_t)c->r[0],0); // 800BA770
  if (crb(c,0)) { goto L_800BA788; } // 800BA774
  c->r[0]=0u+0x00000003u; // 800BA778
  W32(c->r[3]+0x0000036Cu,c->r[0]); // 800BA77C
  c->r[4]=0u+0x00000002u; // 800BA780
  goto L_800BA7A4; // 800BA784
L_800BA788:;
  c->r[0]=0u+0x00000000u; // 800BA788
  W32(c->r[3]+0x0000036Cu,c->r[0]); // 800BA78C
  goto L_800BA7A4; // 800BA790
L_800BA794:;
  c->r[4]=0u+0x00000001u; // 800BA794
  goto L_800BA7A4; // 800BA798
L_800BA79C:;
  c->r[0]=0u+0x00000000u; // 800BA79C
  W32(c->r[3]+0x0000036Cu,c->r[0]); // 800BA7A0
L_800BA7A4:;
  c->r[0]=R32(c->r[3]+0x0000036Cu); // 800BA7A4
  cmps(c,0,(int32_t)c->r[0],0); // 800BA7A8
  if (crb(c,2)) { goto L_800BA7F4; } // 800BA7AC
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFFCu; // 800BA7B0
  {uint32_t ea=c->r[2]+0xFFFFA030u; c->f[1]=c->ps1[1]=RF32(ea);} // 800BA7B4
  c->r[4]=c->r[3]+c->r[0]; // 800BA7B8
  {uint32_t ea=c->r[4]+0x00000344u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BA7BC
  c->f[2]=c->f[1]; // 800BA7C0
  {uint32_t ea=c->r[3]+0x00000364u; WF32(ea,c->f[0]);} // 800BA7C4
  c->f[3]=c->f[1]; // 800BA7C8
  {uint32_t ea=c->r[3]+0x00000368u; WF32(ea,c->f[1]);} // 800BA7CC
  c->r[3]=R32(c->r[3]+0x00000340u); // 800BA7D0
  c->r[4]=R32(c->r[4]+0x00000350u); // 800BA7D4
  c->lr=0x800BA7DCu; f_802E8B58(c); // 800BA7D8
  c->r[3]=R32(c->r[31]+0x00000340u); // 800BA7DC
  {uint32_t ea=c->r[2]+0xFFFFA030u; c->f[1]=c->ps1[1]=RF32(ea);} // 800BA7E0
  c->lr=0x800BA7E8u; f_802E8E84(c); // 800BA7E4
  c->r[0]=0u+0x00000000u; // 800BA7E8
  W8(c->r[31]+0x00000370u,c->r[0]); // 800BA7EC
  W8(c->r[31]+0x00000371u,c->r[0]); // 800BA7F0
L_800BA7F4:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800BA7F4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800BA7F8
  c->lr=c->r[0]; // 800BA7FC
  c->r[1]=c->r[1]+0x00000010u; // 800BA800
  return; // 800BA804
}

// fn_800BA808
void f_800BA808(Ctx* __restrict c) {
  trace_call(0x800BA808u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BA808
  c->r[0]=c->lr; // 800BA80C
  cmps(c,0,(int32_t)c->r[3],0); // 800BA810
  W32(c->r[1]+0x00000014u,c->r[0]); // 800BA814
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800BA818
  c->r[31]=c->r[3]|c->r[3]; // 800BA81C
  if (crb(c,2)) { goto L_800BA830; } // 800BA820
  if (crb(c,2)) { goto L_800BA830; } // 800BA824
  c->r[4]=0u+0x00000000u; // 800BA828
  c->lr=0x800BA830u; f_80045C7C(c); // 800BA82C
L_800BA830:;
  c->r[3]=c->r[31]|c->r[31]; // 800BA830
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800BA834
  c->r[0]=R32(c->r[1]+0x00000014u); // 800BA838
  c->lr=c->r[0]; // 800BA83C
  c->r[1]=c->r[1]+0x00000010u; // 800BA840
  return; // 800BA844
}

// fn_800BA848
void f_800BA848(Ctx* __restrict c) {
  trace_call(0x800BA848u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BA848
  c->r[0]=c->lr; // 800BA84C
  cmps(c,0,(int32_t)c->r[3],0); // 800BA850
  W32(c->r[1]+0x00000014u,c->r[0]); // 800BA854
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800BA858
  c->r[31]=c->r[3]|c->r[3]; // 800BA85C
  if (crb(c,2)) { goto L_800BA86C; } // 800BA860
  c->r[4]=0u+0x00000000u; // 800BA864
  c->lr=0x800BA86Cu; f_800BA808(c); // 800BA868
L_800BA86C:;
  c->r[3]=c->r[31]|c->r[31]; // 800BA86C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800BA870
  c->r[0]=R32(c->r[1]+0x00000014u); // 800BA874
  c->lr=c->r[0]; // 800BA878
  c->r[1]=c->r[1]+0x00000010u; // 800BA87C
  return; // 800BA880
}

// fn_800BA884
void f_800BA884(Ctx* __restrict c) {
  trace_call(0x800BA884u);
  return; // 800BA884
}

// fn_800BA888
void f_800BA888(Ctx* __restrict c) {
  trace_call(0x800BA888u);
  c->r[3]=c->r[3]+0xFFFFFFF4u; // 800BA888
  f_800BA884(c); return; // 800BA88C
}

// fn_800BA890
void f_800BA890(Ctx* __restrict c) {
  trace_call(0x800BA890u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BA890
  c->r[0]=c->lr; // 800BA894
  c->r[4]=0u+0x806D0000u; // 800BA898
  W32(c->r[1]+0x00000014u,c->r[0]); // 800BA89C
  c->r[4]=c->r[4]+0x00006FC0u; // 800BA8A0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800BA8A4
  c->r[31]=c->r[3]|c->r[3]; // 800BA8A8
  W32(c->r[3]+0x00000004u,c->r[4]); // 800BA8AC
  c->lr=0x800BA8B4u; f_800BBC50(c); // 800BA8B0
  c->r[3]=c->r[31]|c->r[31]; // 800BA8B4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800BA8B8
  c->r[0]=R32(c->r[1]+0x00000014u); // 800BA8BC
  c->lr=c->r[0]; // 800BA8C0
  c->r[1]=c->r[1]+0x00000010u; // 800BA8C4
  return; // 800BA8C8
}

// dtor_800BA8CC
void f_800BA8CC(Ctx* __restrict c) {
  return; // 800BA8CC
}

// fn_800BA8D0
void f_800BA8D0(Ctx* __restrict c) {
  trace_call(0x800BA8D0u);
  {uint32_t ea=c->r[1]+0xFFFFFE60u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BA8D0
  c->r[0]=c->lr; // 800BA8D4
  W32(c->r[1]+0x000001A4u,c->r[0]); // 800BA8D8
  c->r[11]=c->r[1]+0x00000170u; // 800BA8DC
  {uint32_t ea=c->r[1]+0x00000190u; WF64(ea,c->f[31]);} // 800BA8E0
  {uint32_t ea=c->r[1]+0x00000198u; psq_store(c,31,ea,0,0);} // 800BA8E4
  {uint32_t ea=c->r[1]+0x00000180u; WF64(ea,c->f[30]);} // 800BA8E8
  {uint32_t ea=c->r[1]+0x00000188u; psq_store(c,30,ea,0,0);} // 800BA8EC
  {uint32_t ea=c->r[1]+0x00000170u; WF64(ea,c->f[29]);} // 800BA8F0
  {uint32_t ea=c->r[1]+0x00000178u; psq_store(c,29,ea,0,0);} // 800BA8F4
  c->lr=0x800BA8FCu; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800BA8F8
  c->f[31]=c->f[1]; // 800BA8FC
  cmps(c,0,(int32_t)c->r[4],0); // 800BA900
  c->r[29]=c->r[3]|c->r[3]; // 800BA904
  c->r[30]=c->r[4]|c->r[4]; // 800BA908
  if (crb(c,0)) { goto L_800BAF4C; } // 800BA90C
  c->r[28]=0u+0x00000000u; // 800BA910
  W8(c->r[1]+0x00000020u,c->r[28]); // 800BA914
  c->r[3]=c->r[1]+0x00000020u; // 800BA918
  c->lr=0x800BA920u; f_80048270(c); // 800BA91C
  c->r[4]=c->r[30]|c->r[30]; // 800BA920
  c->lr=0x800BA928u; f_800481D0(c); // 800BA924
  c->r[0]=R32(c->r[3]+0x00002A28u); // 800BA928
  cmps(c,0,(int32_t)c->r[0],-1); // 800BA92C
  if (crb(c,2)) { goto L_800BAF4C; } // 800BA930
  c->r[0]=R32(c->r[29]+0x00000000u); // 800BA934
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 800BA938
  if (!crb(c,2)) { goto L_800BA974; } // 800BA93C
  W8(c->r[1]+0x0000001Cu,c->r[28]); // 800BA940
  c->r[3]=c->r[1]+0x0000001Cu; // 800BA944
  c->lr=0x800BA94Cu; f_8004714C(c); // 800BA948
  {uint32_t ea=c->r[3]+0x00000004u; c->f[3]=c->ps1[3]=RF32(ea);} // 800BA94C
  {uint32_t ea=c->r[2]+0xFFFFA048u; c->f[2]=c->ps1[2]=RF32(ea);} // 800BA950
  {uint32_t ea=c->r[29]+0x00000470u; c->f[1]=c->ps1[1]=RF32(ea);} // 800BA954
  {uint32_t ea=c->r[2]+0xFFFFA04Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800BA958
  c->f[1]=c->ps1[1]=S(std::fma(c->f[2],c->f[3],c->f[1])); // 800BA95C
  {uint32_t ea=c->r[29]+0x00000470u; WF32(ea,c->f[1]);} // 800BA960
  fcmp(c,0,c->f[1],c->f[0]); // 800BA964
  if (!crb(c,1)) { goto L_800BA9A4; } // 800BA968
  {uint32_t ea=c->r[29]+0x00000470u; WF32(ea,c->f[0]);} // 800BA96C
  goto L_800BA9A4; // 800BA970
L_800BA974:;
  W8(c->r[1]+0x00000018u,c->r[28]); // 800BA974
  c->r[3]=c->r[1]+0x00000018u; // 800BA978
  c->lr=0x800BA980u; f_8004714C(c); // 800BA97C
  {uint32_t ea=c->r[3]+0x00000004u; c->f[3]=c->ps1[3]=RF32(ea);} // 800BA980
  {uint32_t ea=c->r[2]+0xFFFFA048u; c->f[2]=c->ps1[2]=RF32(ea);} // 800BA984
  {uint32_t ea=c->r[29]+0x00000470u; c->f[1]=c->ps1[1]=RF32(ea);} // 800BA988
  {uint32_t ea=c->r[2]+0xFFFFA050u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BA98C
  c->f[1]=c->ps1[1]=S(-std::fma(c->f[2],c->f[3],-c->f[1])); // 800BA990
  {uint32_t ea=c->r[29]+0x00000470u; WF32(ea,c->f[1]);} // 800BA994
  fcmp(c,0,c->f[1],c->f[0]); // 800BA998
  if (!crb(c,0)) { goto L_800BA9A4; } // 800BA99C
  {uint32_t ea=c->r[29]+0x00000470u; WF32(ea,c->f[0]);} // 800BA9A0
L_800BA9A4:;
  c->r[28]=0u+0x00000000u; // 800BA9A4
  W8(c->r[1]+0x00000014u,c->r[28]); // 800BA9A8
  c->r[3]=c->r[1]+0x00000014u; // 800BA9AC
  c->lr=0x800BA9B4u; f_8004F55C(c); // 800BA9B0
  c->r[4]=c->r[30]|c->r[30]; // 800BA9B4
  c->lr=0x800BA9BCu; f_8005A508(c); // 800BA9B8
  c->r[0]=R32(c->r[29]+0x0000046Cu); // 800BA9BC
  {uint32_t ea=c->r[3]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BA9C0
  c->r[3]=c->r[1]+0x00000010u; // 800BA9C4
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)136); // 800BA9C8
  c->r[4]=c->r[29]+c->r[0]; // 800BA9CC
  {uint32_t ea=c->r[4]+0x00000028u; WF32(ea,c->f[0]);} // 800BA9D0
  W8(c->r[1]+0x00000010u,c->r[28]); // 800BA9D4
  c->lr=0x800BA9DCu; f_8004F55C(c); // 800BA9D8
  c->r[4]=c->r[30]|c->r[30]; // 800BA9DC
  c->lr=0x800BA9E4u; f_8005A508(c); // 800BA9E0
  c->r[0]=R32(c->r[29]+0x0000046Cu); // 800BA9E4
  c->r[4]=0u+0x00000001u; // 800BA9E8
  {uint32_t ea=c->r[3]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BA9EC
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)136); // 800BA9F0
  c->r[3]=c->r[29]+c->r[0]; // 800BA9F4
  {uint32_t ea=c->r[3]+0x0000002Cu; WF32(ea,c->f[0]);} // 800BA9F8
  c->r[0]=R32(c->r[29]+0x0000046Cu); // 800BA9FC
  {uint32_t ea=c->r[29]+0x00000470u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BAA00
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)136); // 800BAA04
  c->r[3]=c->r[29]+c->r[0]; // 800BAA08
  {uint32_t ea=c->r[3]+0x000000A8u; WF32(ea,c->f[0]);} // 800BAA0C
  c->r[0]=R32(c->r[29]+0x0000046Cu); // 800BAA10
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)136); // 800BAA14
  c->r[3]=c->r[29]+c->r[0]; // 800BAA18
  W32(c->r[3]+0x000000ACu,c->r[4]); // 800BAA1C
  c->r[3]=R32(c->r[29]+0x0000046Cu); // 800BAA20
  c->r[0]=R32(c->r[29]+0x00000468u); // 800BAA24
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[3]); // 800BAA28
  if (crb(c,2)) { goto L_800BAF08; } // 800BAA2C
  c->r[31]=addc(c,c->r[3],0xFFFFFFFFu,0); cr0(c,c->r[31]); // 800BAA30
  if (!crb(c,0)) { goto L_800BAA3C; } // 800BAA34
  c->r[31]=0u+0x00000007u; // 800BAA38
L_800BAA3C:;
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[31]); // 800BAA3C
  if (crb(c,2)) { goto L_800BABD0; } // 800BAA40
  c->r[0]=(uint32_t)((int32_t)c->r[31]*(int32_t)136); // 800BAA44
  c->r[3]=c->r[1]+0x00000148u; // 800BAA48
  c->r[4]=c->r[29]+c->r[0]; // 800BAA4C
  c->r[26]=c->r[4]+0x00000028u; // 800BAA50
  c->r[4]=c->r[26]+0x00000078u; // 800BAA54
  c->lr=0x800BAA5Cu; f_800BAF7C(c); // 800BAA58
  {uint32_t ea=c->r[26]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BAA5C
  c->r[3]=addc(c,c->r[31],0xFFFFFFFFu,0); cr0(c,c->r[3]); // 800BAA60
  {uint32_t ea=c->r[1]+0x00000140u; WF32(ea,c->f[0]);} // 800BAA64
  {uint32_t ea=c->r[26]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BAA68
  {uint32_t ea=c->r[1]+0x00000144u; WF32(ea,c->f[0]);} // 800BAA6C
  if (!crb(c,0)) { goto L_800BAA78; } // 800BAA70
  c->r[3]=0u+0x00000007u; // 800BAA74
L_800BAA78:;
  c->r[0]=R32(c->r[29]+0x00000468u); // 800BAA78
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[3]); // 800BAA7C
  if (crb(c,2)) { goto L_800BABD0; } // 800BAA80
  c->r[0]=(uint32_t)((int32_t)c->r[3]*(int32_t)136); // 800BAA84
  c->r[3]=c->r[1]+0x00000128u; // 800BAA88
  c->r[4]=c->r[29]+c->r[0]; // 800BAA8C
  c->r[4]=c->r[4]+0x000000A0u; // 800BAA90
  c->lr=0x800BAA98u; f_800BAF7C(c); // 800BAA94
  c->r[3]=c->r[1]+0x00000148u; // 800BAA98
  c->r[4]=c->r[1]+0x00000128u; // 800BAA9C
  c->lr=0x800BAAA4u; f_800BAFE8(c); // 800BAAA0
  W32(c->r[1]+0x0000010Cu,c->r[4]); // 800BAAA4
  c->r[4]=c->r[1]+0x00000148u; // 800BAAA8
  W32(c->r[1]+0x00000108u,c->r[3]); // 800BAAAC
  c->r[3]=c->r[1]+0x00000140u; // 800BAAB0
  c->lr=0x800BAAB8u; f_800BAFE8(c); // 800BAAB4
  W32(c->r[1]+0x00000114u,c->r[4]); // 800BAAB8
  c->r[4]=c->r[1]+0x00000108u; // 800BAABC
  W32(c->r[1]+0x00000110u,c->r[3]); // 800BAAC0
  c->r[3]=c->r[1]+0x00000110u; // 800BAAC4
  c->lr=0x800BAACCu; f_800BAF9C(c); // 800BAAC8
  W32(c->r[1]+0x00000118u,c->r[3]); // 800BAACC
  c->r[3]=c->r[1]+0x00000080u; // 800BAAD0
  {uint32_t ea=c->r[2]+0xFFFFA054u; c->f[2]=c->ps1[2]=RF32(ea);} // 800BAAD4
  W32(c->r[1]+0x0000011Cu,c->r[4]); // 800BAAD8
  {uint32_t ea=c->r[1]+0x00000118u; c->f[1]=c->ps1[1]=RF32(ea);} // 800BAADC
  {uint32_t ea=c->r[1]+0x0000011Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800BAAE0
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[1]); // 800BAAE4
  c->f[2]=c->ps1[2]=S(c->f[2]*c->f[0]); // 800BAAE8
  c->lr=0x800BAAF0u; f_800BAF90(c); // 800BAAEC
  c->r[5]=R32(c->r[3]+0x00000000u); // 800BAAF0
  c->r[4]=R32(c->r[3]+0x00000004u); // 800BAAF4
  c->r[3]=c->r[1]+0x00000128u; // 800BAAF8
  W32(c->r[1]+0x00000120u,c->r[5]); // 800BAAFC
  W32(c->r[1]+0x00000124u,c->r[4]); // 800BAB00
  {uint32_t ea=c->r[1]+0x00000120u; c->f[1]=c->ps1[1]=RF32(ea);} // 800BAB04
  {uint32_t ea=c->r[1]+0x00000124u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BAB08
  {uint32_t ea=c->r[1]+0x00000138u; WF32(ea,c->f[1]);} // 800BAB0C
  {uint32_t ea=c->r[1]+0x0000013Cu; WF32(ea,c->f[0]);} // 800BAB10
  c->r[0]=R32(c->r[29]+0x0000046Cu); // 800BAB14
  W32(c->r[1]+0x00000050u,c->r[5]); // 800BAB18
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)136); // 800BAB1C
  W32(c->r[1]+0x00000054u,c->r[4]); // 800BAB20
  c->r[4]=c->r[29]+c->r[0]; // 800BAB24
  c->r[4]=c->r[4]+0x00000028u; // 800BAB28
  c->lr=0x800BAB30u; f_800BAF7C(c); // 800BAB2C
  c->r[3]=c->r[1]+0x00000128u; // 800BAB30
  c->r[4]=c->r[1]+0x00000140u; // 800BAB34
  c->lr=0x800BAB3Cu; f_800BAFE8(c); // 800BAB38
  W32(c->r[1]+0x000000ECu,c->r[4]); // 800BAB3C
  c->r[4]=c->r[1]+0x00000148u; // 800BAB40
  W32(c->r[1]+0x000000E8u,c->r[3]); // 800BAB44
  c->r[3]=c->r[1]+0x00000140u; // 800BAB48
  c->lr=0x800BAB50u; f_800BAFE8(c); // 800BAB4C
  W32(c->r[1]+0x000000F4u,c->r[4]); // 800BAB50
  c->r[4]=c->r[1]+0x000000E8u; // 800BAB54
  W32(c->r[1]+0x000000F0u,c->r[3]); // 800BAB58
  c->r[3]=c->r[1]+0x000000F0u; // 800BAB5C
  c->lr=0x800BAB64u; f_800BAF9C(c); // 800BAB60
  W32(c->r[1]+0x000000F8u,c->r[3]); // 800BAB64
  c->r[3]=c->r[1]+0x00000078u; // 800BAB68
  {uint32_t ea=c->r[2]+0xFFFFA054u; c->f[2]=c->ps1[2]=RF32(ea);} // 800BAB6C
  W32(c->r[1]+0x000000FCu,c->r[4]); // 800BAB70
  {uint32_t ea=c->r[1]+0x000000F8u; c->f[1]=c->ps1[1]=RF32(ea);} // 800BAB74
  {uint32_t ea=c->r[1]+0x000000FCu; c->f[0]=c->ps1[0]=RF32(ea);} // 800BAB78
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[1]); // 800BAB7C
  c->f[2]=c->ps1[2]=S(c->f[2]*c->f[0]); // 800BAB80
  c->lr=0x800BAB88u; f_800BAF90(c); // 800BAB84
  c->r[9]=R32(c->r[3]+0x00000000u); // 800BAB88
  c->f[1]=c->f[31]; // 800BAB8C
  c->r[0]=R32(c->r[3]+0x00000004u); // 800BAB90
  c->r[3]=c->r[29]|c->r[29]; // 800BAB94
  W32(c->r[1]+0x00000100u,c->r[9]); // 800BAB98
  c->r[4]=c->r[26]|c->r[26]; // 800BAB9C
  c->r[5]=c->r[1]+0x00000148u; // 800BABA0
  W32(c->r[1]+0x00000104u,c->r[0]); // 800BABA4
  c->r[6]=c->r[1]+0x00000140u; // 800BABA8
  {uint32_t ea=c->r[1]+0x00000100u; c->f[2]=c->ps1[2]=RF32(ea);} // 800BABAC
  c->r[7]=c->r[1]+0x00000138u; // 800BABB0
  {uint32_t ea=c->r[1]+0x00000104u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BABB4
  c->r[8]=c->r[1]+0x00000130u; // 800BABB8
  W32(c->r[1]+0x00000048u,c->r[9]); // 800BABBC
  W32(c->r[1]+0x0000004Cu,c->r[0]); // 800BABC0
  {uint32_t ea=c->r[1]+0x00000130u; WF32(ea,c->f[2]);} // 800BABC4
  {uint32_t ea=c->r[1]+0x00000134u; WF32(ea,c->f[0]);} // 800BABC8
  c->lr=0x800BABD0u; f_800BBE08(c); // 800BABCC
L_800BABD0:;
  c->r[0]=R32(c->r[29]+0x0000046Cu); // 800BABD0
  c->r[27]=(uint32_t)((int32_t)c->r[31]*(int32_t)136); // 800BABD4
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)136); // 800BABD8
  c->r[3]=c->r[29]+c->r[27]; // 800BABDC
  c->r[5]=c->r[29]+c->r[0]; // 800BABE0
  c->r[4]=c->r[3]+0x00000028u; // 800BABE4
  c->r[3]=c->r[5]+0x000000A0u; // 800BABE8
  c->lr=0x800BABF0u; f_800BAF7C(c); // 800BABEC
  c->r[0]=R32(c->r[29]+0x0000046Cu); // 800BABF0
  c->r[3]=c->r[1]+0x00000148u; // 800BABF4
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)136); // 800BABF8
  c->r[4]=c->r[29]+c->r[0]; // 800BABFC
  c->r[26]=c->r[4]+0x00000028u; // 800BAC00
  c->r[4]=c->r[26]+0x00000078u; // 800BAC04
  c->lr=0x800BAC0Cu; f_800BAF7C(c); // 800BAC08
  {uint32_t ea=c->r[26]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BAC0C
  c->r[3]=c->r[1]+0x00000140u; // 800BAC10
  {uint32_t ea=c->r[1]+0x00000140u; WF32(ea,c->f[0]);} // 800BAC14
  c->r[4]=c->r[1]+0x00000148u; // 800BAC18
  {uint32_t ea=c->r[26]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BAC1C
  {uint32_t ea=c->r[1]+0x00000144u; WF32(ea,c->f[0]);} // 800BAC20
  c->lr=0x800BAC28u; f_800BAFE8(c); // 800BAC24
  W32(c->r[1]+0x000000E4u,c->r[4]); // 800BAC28
  {uint32_t ea=c->r[2]+0xFFFFA050u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BAC2C
  {uint32_t ea=c->r[1]+0x000000E4u; c->f[2]=c->ps1[2]=RF32(ea);} // 800BAC30
  W32(c->r[1]+0x000000E0u,c->r[3]); // 800BAC34
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[2]); // 800BAC38
  {uint32_t ea=c->r[1]+0x000000E0u; c->f[3]=c->ps1[3]=RF32(ea);} // 800BAC3C
  {uint32_t ea=c->r[1]+0x00000128u; WF32(ea,c->f[3]);} // 800BAC40
  c->f[29]=c->ps1[29]=S(std::fma(c->f[3],c->f[3],c->f[1])); // 800BAC44
  {uint32_t ea=c->r[1]+0x0000012Cu; WF32(ea,c->f[2]);} // 800BAC48
  fcmp(c,0,c->f[29],c->f[0]); // 800BAC4C
  setcrb(c,2,crb(c,1)|crb(c,2)); // 800BAC50
  if (crb(c,2)) { goto L_800BAC74; } // 800BAC54
  c->r[3]=0u+0x806D0000u; // 800BAC58
  c->r[5]=0u+0x806D0000u; // 800BAC5C
  c->r[3]=c->r[3]+0xFFFFDD24u; // 800BAC60
  c->r[4]=0u+0x00000273u; // 800BAC64
  c->r[5]=c->r[5]+0xFFFFDD00u; // 800BAC68
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800BAC6C
  c->lr=0x800BAC74u; f_80484708(c); // 800BAC70
L_800BAC74:;
  {uint32_t ea=c->r[2]+0xFFFFA050u; c->f[30]=c->ps1[30]=RF32(ea);} // 800BAC74
  fcmp(c,0,c->f[29],c->f[30]); // 800BAC78
  setcrb(c,2,crb(c,0)|crb(c,2)); // 800BAC7C
  if (!crb(c,2)) { goto L_800BAC88; } // 800BAC80
  goto L_800BAC94; // 800BAC84
L_800BAC88:;
  c->f[1]=c->f[29]; // 800BAC88
  c->lr=0x800BAC90u; f_804E1098(c); // 800BAC8C
  c->f[30]=c->ps1[30]=S(c->f[29]*c->f[1]); // 800BAC90
L_800BAC94:;
  c->r[28]=0u+0x00000000u; // 800BAC94
  W8(c->r[1]+0x0000000Cu,c->r[28]); // 800BAC98
  c->r[3]=c->r[1]+0x0000000Cu; // 800BAC9C
  c->lr=0x800BACA4u; f_8004F55C(c); // 800BACA0
  c->r[4]=c->r[30]|c->r[30]; // 800BACA4
  c->lr=0x800BACACu; f_8005A524(c); // 800BACA8
  {uint32_t ea=c->r[3]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 800BACAC
  c->r[3]=c->r[1]+0x00000008u; // 800BACB0
  {uint32_t ea=c->r[1]+0x00000140u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BACB4
  W8(c->r[1]+0x00000008u,c->r[28]); // 800BACB8
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 800BACBC
  {uint32_t ea=c->r[1]+0x00000128u; WF32(ea,c->f[0]);} // 800BACC0
  c->lr=0x800BACC8u; f_8004F55C(c); // 800BACC4
  c->r[4]=c->r[30]|c->r[30]; // 800BACC8
  c->lr=0x800BACD0u; f_8005A524(c); // 800BACCC
  {uint32_t ea=c->r[3]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 800BACD0
  c->r[3]=c->r[1]+0x00000128u; // 800BACD4
  {uint32_t ea=c->r[1]+0x00000144u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BACD8
  c->r[4]=c->r[3]|c->r[3]; // 800BACDC
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 800BACE0
  {uint32_t ea=c->r[1]+0x0000012Cu; WF32(ea,c->f[0]);} // 800BACE4
  c->lr=0x800BACECu; f_800BB034(c); // 800BACE8
  {uint32_t ea=c->r[2]+0xFFFFA058u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BACEC
  fcmp(c,0,c->f[1],c->f[0]); // 800BACF0
  if (!crb(c,1)) { goto L_800BAD20; } // 800BACF4
  c->r[3]=c->r[1]+0x00000128u; // 800BACF8
  c->r[4]=c->r[3]|c->r[3]; // 800BACFC
  c->lr=0x800BAD04u; f_804E1520(c); // 800BAD00
  {uint32_t ea=c->r[1]+0x00000128u; c->f[1]=c->ps1[1]=RF32(ea);} // 800BAD04
  {uint32_t ea=c->r[1]+0x0000012Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800BAD08
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[30]); // 800BAD0C
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[30]); // 800BAD10
  {uint32_t ea=c->r[1]+0x00000128u; WF32(ea,c->f[1]);} // 800BAD14
  {uint32_t ea=c->r[1]+0x0000012Cu; WF32(ea,c->f[0]);} // 800BAD18
  goto L_800BAD44; // 800BAD1C
L_800BAD20:;
  c->r[3]=c->r[1]+0x00000140u; // 800BAD20
  c->r[4]=c->r[1]+0x00000148u; // 800BAD24
  c->lr=0x800BAD2Cu; f_800BAFE8(c); // 800BAD28
  W32(c->r[1]+0x000000DCu,c->r[4]); // 800BAD2C
  W32(c->r[1]+0x000000D8u,c->r[3]); // 800BAD30
  {uint32_t ea=c->r[1]+0x000000DCu; c->f[0]=c->ps1[0]=RF32(ea);} // 800BAD34
  {uint32_t ea=c->r[1]+0x000000D8u; c->f[1]=c->ps1[1]=RF32(ea);} // 800BAD38
  {uint32_t ea=c->r[1]+0x00000128u; WF32(ea,c->f[1]);} // 800BAD3C
  {uint32_t ea=c->r[1]+0x0000012Cu; WF32(ea,c->f[0]);} // 800BAD40
L_800BAD44:;
  c->r[3]=c->r[1]+0x00000140u; // 800BAD44
  c->r[4]=c->r[1]+0x00000148u; // 800BAD48
  c->lr=0x800BAD50u; f_800BAFE8(c); // 800BAD4C
  W32(c->r[1]+0x000000C4u,c->r[4]); // 800BAD50
  c->r[4]=c->r[1]+0x000000C0u; // 800BAD54
  W32(c->r[1]+0x000000C0u,c->r[3]); // 800BAD58
  c->r[3]=c->r[1]+0x00000128u; // 800BAD5C
  c->lr=0x800BAD64u; f_800BAF9C(c); // 800BAD60
  W32(c->r[1]+0x000000C8u,c->r[3]); // 800BAD64
  c->r[3]=c->r[1]+0x00000070u; // 800BAD68
  {uint32_t ea=c->r[2]+0xFFFFA054u; c->f[2]=c->ps1[2]=RF32(ea);} // 800BAD6C
  W32(c->r[1]+0x000000CCu,c->r[4]); // 800BAD70
  {uint32_t ea=c->r[1]+0x000000C8u; c->f[1]=c->ps1[1]=RF32(ea);} // 800BAD74
  {uint32_t ea=c->r[1]+0x000000CCu; c->f[0]=c->ps1[0]=RF32(ea);} // 800BAD78
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[1]); // 800BAD7C
  c->f[2]=c->ps1[2]=S(c->f[2]*c->f[0]); // 800BAD80
  c->lr=0x800BAD88u; f_800BAF90(c); // 800BAD84
  c->r[4]=R32(c->r[3]+0x00000000u); // 800BAD88
  c->r[3]=R32(c->r[3]+0x00000004u); // 800BAD8C
  W32(c->r[1]+0x000000D0u,c->r[4]); // 800BAD90
  W32(c->r[1]+0x000000D4u,c->r[3]); // 800BAD94
  {uint32_t ea=c->r[1]+0x000000D0u; c->f[1]=c->ps1[1]=RF32(ea);} // 800BAD98
  {uint32_t ea=c->r[1]+0x000000D4u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BAD9C
  {uint32_t ea=c->r[1]+0x00000130u; WF32(ea,c->f[1]);} // 800BADA0
  {uint32_t ea=c->r[1]+0x00000134u; WF32(ea,c->f[0]);} // 800BADA4
  c->r[0]=R32(c->r[29]+0x00000468u); // 800BADA8
  W32(c->r[1]+0x00000040u,c->r[4]); // 800BADAC
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[31]); // 800BADB0
  W32(c->r[1]+0x00000044u,c->r[3]); // 800BADB4
  if (crb(c,2)) { goto L_800BAE54; } // 800BADB8
  c->r[4]=c->r[29]+c->r[27]; // 800BADBC
  c->r[3]=c->r[1]+0x00000148u; // 800BADC0
  c->r[4]=c->r[4]+0x000000A0u; // 800BADC4
  c->lr=0x800BADCCu; f_800BAFE8(c); // 800BADC8
  W32(c->r[1]+0x000000BCu,c->r[4]); // 800BADCC
  c->r[4]=c->r[1]+0x00000148u; // 800BADD0
  W32(c->r[1]+0x000000B8u,c->r[3]); // 800BADD4
  c->r[3]=c->r[1]+0x00000140u; // 800BADD8
  {uint32_t ea=c->r[1]+0x000000BCu; c->f[0]=c->ps1[0]=RF32(ea);} // 800BADDC
  {uint32_t ea=c->r[1]+0x000000B8u; c->f[1]=c->ps1[1]=RF32(ea);} // 800BADE0
  {uint32_t ea=c->r[1]+0x00000128u; WF32(ea,c->f[1]);} // 800BADE4
  {uint32_t ea=c->r[1]+0x0000012Cu; WF32(ea,c->f[0]);} // 800BADE8
  c->lr=0x800BADF0u; f_800BAFE8(c); // 800BADEC
  W32(c->r[1]+0x000000A4u,c->r[4]); // 800BADF0
  c->r[4]=c->r[1]+0x00000128u; // 800BADF4
  W32(c->r[1]+0x000000A0u,c->r[3]); // 800BADF8
  c->r[3]=c->r[1]+0x000000A0u; // 800BADFC
  c->lr=0x800BAE04u; f_800BAF9C(c); // 800BAE00
  W32(c->r[1]+0x000000A8u,c->r[3]); // 800BAE04
  c->r[3]=c->r[1]+0x00000068u; // 800BAE08
  {uint32_t ea=c->r[2]+0xFFFFA054u; c->f[2]=c->ps1[2]=RF32(ea);} // 800BAE0C
  W32(c->r[1]+0x000000ACu,c->r[4]); // 800BAE10
  {uint32_t ea=c->r[1]+0x000000A8u; c->f[1]=c->ps1[1]=RF32(ea);} // 800BAE14
  {uint32_t ea=c->r[1]+0x000000ACu; c->f[0]=c->ps1[0]=RF32(ea);} // 800BAE18
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[1]); // 800BAE1C
  c->f[2]=c->ps1[2]=S(c->f[2]*c->f[0]); // 800BAE20
  c->lr=0x800BAE28u; f_800BAF90(c); // 800BAE24
  c->r[4]=R32(c->r[3]+0x00000000u); // 800BAE28
  c->r[0]=R32(c->r[3]+0x00000004u); // 800BAE2C
  W32(c->r[1]+0x000000B0u,c->r[4]); // 800BAE30
  W32(c->r[1]+0x000000B4u,c->r[0]); // 800BAE34
  {uint32_t ea=c->r[1]+0x000000B0u; c->f[1]=c->ps1[1]=RF32(ea);} // 800BAE38
  {uint32_t ea=c->r[1]+0x000000B4u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BAE3C
  W32(c->r[1]+0x00000038u,c->r[4]); // 800BAE40
  W32(c->r[1]+0x0000003Cu,c->r[0]); // 800BAE44
  {uint32_t ea=c->r[1]+0x00000138u; WF32(ea,c->f[1]);} // 800BAE48
  {uint32_t ea=c->r[1]+0x0000013Cu; WF32(ea,c->f[0]);} // 800BAE4C
  goto L_800BAEE0; // 800BAE50
L_800BAE54:;
  c->r[3]=c->r[1]+0x00000140u; // 800BAE54
  c->r[4]=c->r[1]+0x00000148u; // 800BAE58
  c->lr=0x800BAE60u; f_800BAFE8(c); // 800BAE5C
  W32(c->r[1]+0x00000088u,c->r[3]); // 800BAE60
  c->r[3]=c->r[1]+0x00000060u; // 800BAE64
  {uint32_t ea=c->r[2]+0xFFFFA05Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 800BAE68
  W32(c->r[1]+0x0000008Cu,c->r[4]); // 800BAE6C
  {uint32_t ea=c->r[1]+0x00000088u; c->f[1]=c->ps1[1]=RF32(ea);} // 800BAE70
  {uint32_t ea=c->r[1]+0x0000008Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800BAE74
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[1]); // 800BAE78
  c->f[2]=c->ps1[2]=S(c->f[2]*c->f[0]); // 800BAE7C
  c->lr=0x800BAE84u; f_800BAF90(c); // 800BAE80
  c->r[4]=R32(c->r[3]+0x00000000u); // 800BAE84
  c->r[0]=R32(c->r[3]+0x00000004u); // 800BAE88
  c->r[3]=c->r[1]+0x00000058u; // 800BAE8C
  W32(c->r[1]+0x00000090u,c->r[4]); // 800BAE90
  {uint32_t ea=c->r[2]+0xFFFFA054u; c->f[2]=c->ps1[2]=RF32(ea);} // 800BAE94
  W32(c->r[1]+0x00000094u,c->r[0]); // 800BAE98
  {uint32_t ea=c->r[1]+0x00000090u; c->f[1]=c->ps1[1]=RF32(ea);} // 800BAE9C
  {uint32_t ea=c->r[1]+0x00000094u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BAEA0
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[1]); // 800BAEA4
  W32(c->r[1]+0x00000030u,c->r[4]); // 800BAEA8
  c->f[2]=c->ps1[2]=S(c->f[2]*c->f[0]); // 800BAEAC
  W32(c->r[1]+0x00000034u,c->r[0]); // 800BAEB0
  c->lr=0x800BAEB8u; f_800BAF90(c); // 800BAEB4
  c->r[4]=R32(c->r[3]+0x00000000u); // 800BAEB8
  c->r[0]=R32(c->r[3]+0x00000004u); // 800BAEBC
  W32(c->r[1]+0x00000098u,c->r[4]); // 800BAEC0
  W32(c->r[1]+0x0000009Cu,c->r[0]); // 800BAEC4
  {uint32_t ea=c->r[1]+0x00000098u; c->f[1]=c->ps1[1]=RF32(ea);} // 800BAEC8
  {uint32_t ea=c->r[1]+0x0000009Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800BAECC
  W32(c->r[1]+0x00000028u,c->r[4]); // 800BAED0
  W32(c->r[1]+0x0000002Cu,c->r[0]); // 800BAED4
  {uint32_t ea=c->r[1]+0x00000138u; WF32(ea,c->f[1]);} // 800BAED8
  {uint32_t ea=c->r[1]+0x0000013Cu; WF32(ea,c->f[0]);} // 800BAEDC
L_800BAEE0:;
  c->f[1]=c->f[31]; // 800BAEE0
  c->r[3]=c->r[29]|c->r[29]; // 800BAEE4
  c->r[4]=c->r[26]|c->r[26]; // 800BAEE8
  c->r[5]=c->r[1]+0x00000148u; // 800BAEEC
  c->r[6]=c->r[1]+0x00000140u; // 800BAEF0
  c->r[7]=c->r[1]+0x00000138u; // 800BAEF4
  c->r[8]=c->r[1]+0x00000130u; // 800BAEF8
  c->lr=0x800BAF00u; f_800BBE08(c); // 800BAEFC
  c->r[0]=0u+0x00000010u; // 800BAF00
  W32(c->r[26]+0x00000084u,c->r[0]); // 800BAF04
L_800BAF08:;
  c->r[3]=R32(c->r[29]+0x0000046Cu); // 800BAF08
  c->r[0]=c->r[3]+0x00000001u; // 800BAF0C
  W32(c->r[29]+0x0000046Cu,c->r[0]); // 800BAF10
  cmps(c,0,(int32_t)c->r[0],8); // 800BAF14
  if (crb(c,0)) { goto L_800BAF24; } // 800BAF18
  c->r[0]=0u+0x00000000u; // 800BAF1C
  W32(c->r[29]+0x0000046Cu,c->r[0]); // 800BAF20
L_800BAF24:;
  c->r[3]=R32(c->r[29]+0x00000468u); // 800BAF24
  c->r[0]=R32(c->r[29]+0x0000046Cu); // 800BAF28
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 800BAF2C
  if (!crb(c,2)) { goto L_800BAF4C; } // 800BAF30
  c->r[0]=c->r[3]+0x00000001u; // 800BAF34
  W32(c->r[29]+0x00000468u,c->r[0]); // 800BAF38
  cmps(c,0,(int32_t)c->r[0],8); // 800BAF3C
  if (crb(c,0)) { goto L_800BAF4C; } // 800BAF40
  c->r[0]=0u+0x00000000u; // 800BAF44
  W32(c->r[29]+0x00000468u,c->r[0]); // 800BAF48
L_800BAF4C:;
  c->r[11]=c->r[1]+0x00000170u; // 800BAF4C
  {uint32_t ea=c->r[1]+0x00000198u; psq_load(c,31,ea,0,0);} // 800BAF50
  {uint32_t ea=c->r[1]+0x00000190u; c->f[31]=RF64(ea);} // 800BAF54
  {uint32_t ea=c->r[1]+0x00000188u; psq_load(c,30,ea,0,0);} // 800BAF58
  {uint32_t ea=c->r[1]+0x00000180u; c->f[30]=RF64(ea);} // 800BAF5C
  {uint32_t ea=c->r[1]+0x00000178u; psq_load(c,29,ea,0,0);} // 800BAF60
  {uint32_t ea=c->r[1]+0x00000170u; c->f[29]=RF64(ea);} // 800BAF64
  c->lr=0x800BAF6Cu; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800BAF68
  c->r[0]=R32(c->r[1]+0x000001A4u); // 800BAF6C
  c->lr=c->r[0]; // 800BAF70
  c->r[1]=c->r[1]+0x000001A0u; // 800BAF74
  return; // 800BAF78
}

// __as__Q34nw4r4math4VEC2FRCQ34nw4r4math4VEC2
void f_800BAF7C(Ctx* __restrict c) {
  trace_call(0x800BAF7Cu);
  {uint32_t ea=c->r[4]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 800BAF7C
  {uint32_t ea=c->r[4]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BAF80
  {uint32_t ea=c->r[3]+0x00000000u; WF32(ea,c->f[1]);} // 800BAF84
  {uint32_t ea=c->r[3]+0x00000004u; WF32(ea,c->f[0]);} // 800BAF88
  return; // 800BAF8C
}

// fn_800BAF90
void f_800BAF90(Ctx* __restrict c) {
  trace_call(0x800BAF90u);
  {uint32_t ea=c->r[3]+0x00000000u; WF32(ea,c->f[1]);} // 800BAF90
  {uint32_t ea=c->r[3]+0x00000004u; WF32(ea,c->f[2]);} // 800BAF94
  return; // 800BAF98
}

// fn_800BAF9C
void f_800BAF9C(Ctx* __restrict c) {
  trace_call(0x800BAF9Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BAF9C
  c->r[0]=c->lr; // 800BAFA0
  c->r[5]=c->r[3]|c->r[3]; // 800BAFA4
  {uint32_t ea=c->r[3]+0x00000000u; c->f[3]=c->ps1[3]=RF32(ea);} // 800BAFA8
  {uint32_t ea=c->r[4]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 800BAFAC
  c->r[3]=c->r[1]+0x00000008u; // 800BAFB0
  {uint32_t ea=c->r[5]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 800BAFB4
  {uint32_t ea=c->r[4]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BAFB8
  c->f[1]=c->ps1[1]=S(c->f[3]+c->f[1]); // 800BAFBC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800BAFC0
  c->f[2]=c->ps1[2]=S(c->f[2]+c->f[0]); // 800BAFC4
  c->lr=0x800BAFCCu; f_800BAF90(c); // 800BAFC8
  c->r[0]=R32(c->r[1]+0x00000014u); // 800BAFCC
  c->r[4]=c->r[3]|c->r[3]; // 800BAFD0
  c->r[3]=R32(c->r[3]+0x00000000u); // 800BAFD4
  c->r[4]=R32(c->r[4]+0x00000004u); // 800BAFD8
  c->lr=c->r[0]; // 800BAFDC
  c->r[1]=c->r[1]+0x00000010u; // 800BAFE0
  return; // 800BAFE4
}

// fn_800BAFE8
void f_800BAFE8(Ctx* __restrict c) {
  trace_call(0x800BAFE8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BAFE8
  c->r[0]=c->lr; // 800BAFEC
  c->r[5]=c->r[3]|c->r[3]; // 800BAFF0
  {uint32_t ea=c->r[3]+0x00000000u; c->f[3]=c->ps1[3]=RF32(ea);} // 800BAFF4
  {uint32_t ea=c->r[4]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 800BAFF8
  c->r[3]=c->r[1]+0x00000008u; // 800BAFFC
  {uint32_t ea=c->r[5]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 800BB000
  {uint32_t ea=c->r[4]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BB004
  c->f[1]=c->ps1[1]=S(c->f[3]-c->f[1]); // 800BB008
  W32(c->r[1]+0x00000014u,c->r[0]); // 800BB00C
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[0]); // 800BB010
  c->lr=0x800BB018u; f_800BAF90(c); // 800BB014
  c->r[0]=R32(c->r[1]+0x00000014u); // 800BB018
  c->r[4]=c->r[3]|c->r[3]; // 800BB01C
  c->r[3]=R32(c->r[3]+0x00000000u); // 800BB020
  c->r[4]=R32(c->r[4]+0x00000004u); // 800BB024
  c->lr=c->r[0]; // 800BB028
  c->r[1]=c->r[1]+0x00000010u; // 800BB02C
  return; // 800BB030
}

// fn_800BB034
void f_800BB034(Ctx* __restrict c) {
  trace_call(0x800BB034u);
  {uint32_t ea=c->r[3]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 800BB034
  {uint32_t ea=c->r[4]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BB038
  {uint32_t ea=c->r[3]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 800BB03C
  c->f[2]=c->ps1[2]=S(c->f[2]*c->f[0]); // 800BB040
  {uint32_t ea=c->r[4]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BB044
  c->f[1]=c->ps1[1]=S(std::fma(c->f[1],c->f[0],c->f[2])); // 800BB048
  return; // 800BB04C
}

// fn_800BB050
void f_800BB050(Ctx* __restrict c) {
  trace_call(0x800BB050u);
  {uint32_t ea=c->r[1]+0xFFFFFE50u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BB050
  c->r[0]=c->lr; // 800BB054
  W32(c->r[1]+0x000001B4u,c->r[0]); // 800BB058
  c->r[11]=c->r[1]+0x000000F0u; // 800BB05C
  {uint32_t ea=c->r[1]+0x000001A0u; WF64(ea,c->f[31]);} // 800BB060
  {uint32_t ea=c->r[1]+0x000001A8u; psq_store(c,31,ea,0,0);} // 800BB064
  {uint32_t ea=c->r[1]+0x00000190u; WF64(ea,c->f[30]);} // 800BB068
  {uint32_t ea=c->r[1]+0x00000198u; psq_store(c,30,ea,0,0);} // 800BB06C
  {uint32_t ea=c->r[1]+0x00000180u; WF64(ea,c->f[29]);} // 800BB070
  {uint32_t ea=c->r[1]+0x00000188u; psq_store(c,29,ea,0,0);} // 800BB074
  {uint32_t ea=c->r[1]+0x00000170u; WF64(ea,c->f[28]);} // 800BB078
  {uint32_t ea=c->r[1]+0x00000178u; psq_store(c,28,ea,0,0);} // 800BB07C
  {uint32_t ea=c->r[1]+0x00000160u; WF64(ea,c->f[27]);} // 800BB080
  {uint32_t ea=c->r[1]+0x00000168u; psq_store(c,27,ea,0,0);} // 800BB084
  {uint32_t ea=c->r[1]+0x00000150u; WF64(ea,c->f[26]);} // 800BB088
  {uint32_t ea=c->r[1]+0x00000158u; psq_store(c,26,ea,0,0);} // 800BB08C
  {uint32_t ea=c->r[1]+0x00000140u; WF64(ea,c->f[25]);} // 800BB090
  {uint32_t ea=c->r[1]+0x00000148u; psq_store(c,25,ea,0,0);} // 800BB094
  {uint32_t ea=c->r[1]+0x00000130u; WF64(ea,c->f[24]);} // 800BB098
  {uint32_t ea=c->r[1]+0x00000138u; psq_store(c,24,ea,0,0);} // 800BB09C
  {uint32_t ea=c->r[1]+0x00000120u; WF64(ea,c->f[23]);} // 800BB0A0
  {uint32_t ea=c->r[1]+0x00000128u; psq_store(c,23,ea,0,0);} // 800BB0A4
  {uint32_t ea=c->r[1]+0x00000110u; WF64(ea,c->f[22]);} // 800BB0A8
  {uint32_t ea=c->r[1]+0x00000118u; psq_store(c,22,ea,0,0);} // 800BB0AC
  {uint32_t ea=c->r[1]+0x00000100u; WF64(ea,c->f[21]);} // 800BB0B0
  {uint32_t ea=c->r[1]+0x00000108u; psq_store(c,21,ea,0,0);} // 800BB0B4
  {uint32_t ea=c->r[1]+0x000000F0u; WF64(ea,c->f[20]);} // 800BB0B8
  {uint32_t ea=c->r[1]+0x000000F8u; psq_store(c,20,ea,0,0);} // 800BB0BC
  c->lr=0x800BB0C4u; { W32(c->r[11]+0xFFFFFFD0u,c->r[20]); W32(c->r[11]+0xFFFFFFD4u,c->r[21]); W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800BB0C0
  c->f[21]=c->f[1]; // 800BB0C4
  cmps(c,0,(int32_t)c->r[4],0); // 800BB0C8
  c->r[6]=0u+0x43300000u; // 800BB0CC
  c->r[0]=0u+0x00000000u; // 800BB0D0
  W32(c->r[1]+0x000000B0u,c->r[6]); // 800BB0D4
  c->r[23]=c->r[3]|c->r[3]; // 800BB0D8
  W32(c->r[1]+0x000000B8u,c->r[6]); // 800BB0DC
  c->r[24]=c->r[4]|c->r[4]; // 800BB0E0
  c->r[25]=c->r[5]|c->r[5]; // 800BB0E4
  W32(c->r[1]+0x00000068u,c->r[0]); // 800BB0E8
  W32(c->r[1]+0x0000006Cu,c->r[0]); // 800BB0EC
  if (crb(c,0)) { goto L_800BBBA4; } // 800BB0F0
  W8(c->r[1]+0x00000030u,c->r[0]); // 800BB0F4
  c->r[3]=c->r[1]+0x00000030u; // 800BB0F8
  c->lr=0x800BB100u; f_80048270(c); // 800BB0FC
  c->r[4]=c->r[24]|c->r[24]; // 800BB100
  c->lr=0x800BB108u; f_800481D0(c); // 800BB104
  c->r[0]=R32(c->r[3]+0x00002A28u); // 800BB108
  cmps(c,0,(int32_t)c->r[0],-1); // 800BB10C
  if (crb(c,2)) { goto L_800BBBA4; } // 800BB110
  c->r[3]=R32(c->r[23]+0x0000046Cu); // 800BB114
  c->r[26]=addc(c,c->r[3],0xFFFFFFFFu,0); cr0(c,c->r[26]); // 800BB118
  if (!crb(c,0)) { goto L_800BB124; } // 800BB11C
  c->r[26]=0u+0x00000007u; // 800BB120
L_800BB124:;
  c->r[0]=(uint32_t)((int32_t)c->r[26]*(int32_t)136); // 800BB124
  c->r[3]=c->r[23]+c->r[0]; // 800BB128
  c->r[0]=R32(c->r[3]+0x000000ACu); // 800BB12C
  cmps(c,0,(int32_t)c->r[0],0); // 800BB130
  if (!crb(c,1)) { goto L_800BBBA4; } // 800BB134
  {uint32_t ea=c->r[3]+0x00000028u; c->f[28]=c->ps1[28]=RF32(ea);} // 800BB138
  c->f[30]=c->f[21]; // 800BB13C
  {uint32_t ea=c->r[3]+0x0000002Cu; c->f[27]=c->ps1[27]=RF32(ea);} // 800BB140
  c->r[0]=0u+0x00000000u; // 800BB144
  {uint32_t ea=c->r[3]+0x000000A8u; c->f[26]=c->ps1[26]=RF32(ea);} // 800BB148
  c->r[3]=c->r[1]+0x0000002Cu; // 800BB14C
  W8(c->r[1]+0x0000002Cu,c->r[0]); // 800BB150
  c->lr=0x800BB158u; f_80047A80(c); // 800BB154
  c->r[0]=R32(c->r[3]+0x00000260u); // 800BB158
  cmps(c,0,(int32_t)c->r[0],1); // 800BB15C
  if (!crb(c,2)) { goto L_800BB16C; } // 800BB160
  {uint32_t ea=c->r[2]+0xFFFFA060u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BB164
  c->f[30]=c->ps1[30]=S(c->f[21]*c->f[0]); // 800BB168
L_800BB16C:;
  c->f[29]=c->f[21]; // 800BB16C
  c->r[0]=0u+0x00000000u; // 800BB170
  W8(c->r[1]+0x00000028u,c->r[0]); // 800BB174
  c->r[3]=c->r[1]+0x00000028u; // 800BB178
  c->lr=0x800BB180u; f_80047A80(c); // 800BB17C
  c->r[4]=R32(c->r[3]+0x0000024Cu); // 800BB180
  cmps(c,0,(int32_t)c->r[4],0); // 800BB184
  if (crb(c,2)) { goto L_800BB1B8; } // 800BB188
  c->r[4]=R16(c->r[4]+0x00000046u); // 800BB18C
  c->r[0]=R16(c->r[3]+0x00000012u); // 800BB190
  W32(c->r[1]+0x000000B4u,c->r[4]); // 800BB194
  {uint32_t ea=c->r[2]+0xFFFFA090u; c->f[2]=RF64(ea);} // 800BB198
  W32(c->r[1]+0x000000BCu,c->r[0]); // 800BB19C
  {uint32_t ea=c->r[1]+0x000000B0u; c->f[1]=RF64(ea);} // 800BB1A0
  {uint32_t ea=c->r[1]+0x000000B8u; c->f[0]=RF64(ea);} // 800BB1A4
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 800BB1A8
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[2]); // 800BB1AC
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 800BB1B0
  c->f[29]=c->ps1[29]=S(c->f[21]*c->f[0]); // 800BB1B4
L_800BB1B8:;
  c->r[0]=0u+0x00000000u; // 800BB1B8
  W8(c->r[1]+0x00000024u,c->r[0]); // 800BB1BC
  c->r[3]=c->r[1]+0x00000024u; // 800BB1C0
  c->lr=0x800BB1C8u; f_80045BC8(c); // 800BB1C4
  {uint32_t ea=c->r[2]+0xFFFFA064u; c->f[1]=c->ps1[1]=RF32(ea);} // 800BB1C8
  c->r[4]=0u+0x00000001u; // 800BB1CC
  {uint32_t ea=c->r[2]+0xFFFFA068u; c->f[2]=c->ps1[2]=RF32(ea);} // 800BB1D0
  c->r[5]=0u+0x00000004u; // 800BB1D4
  c->r[6]=0u+0x00000004u; // 800BB1D8
  c->lr=0x800BB1E0u; f_80298354(c); // 800BB1DC
  c->r[3]=c->r[23]+0x00000008u; // 800BB1E0
  c->r[4]=0u+0x00000000u; // 800BB1E4
  c->lr=0x800BB1ECu; f_803A6784(c); // 800BB1E8
  c->r[3]=R32(c->r[23]+0x00000468u); // 800BB1EC
  c->r[6]=c->r[26]|c->r[26]; // 800BB1F0
  {uint32_t ea=c->r[2]+0xFFFFA050u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BB1F4
  c->r[5]=0u+0x00000000u; // 800BB1F8
  c->r[20]=0u+0x00000000u; // 800BB1FC
  goto L_800BB248; // 800BB200
L_800BB204:;
  c->r[0]=(uint32_t)((int32_t)c->r[6]*(int32_t)136); // 800BB204
  c->r[4]=c->r[23]+c->r[0]; // 800BB208
  c->r[0]=R32(c->r[4]+0x000000ACu); // 800BB20C
  cmps(c,0,(int32_t)c->r[0],1); // 800BB210
  if (!crb(c,1)) { goto L_800BB23C; } // 800BB214
  cmps(c,0,(int32_t)c->r[5],0); // 800BB218
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 800BB21C
  c->r[5]=c->r[5]+c->r[0]; // 800BB220
  if (!crb(c,1)) { goto L_800BB22C; } // 800BB224
  c->r[5]=c->r[5]+0xFFFFFFFEu; // 800BB228
L_800BB22C:;
  {uint32_t ea=c->r[4]+0x000000A8u; c->f[1]=c->ps1[1]=RF32(ea);} // 800BB22C
  fcmp(c,0,c->f[1],c->f[0]); // 800BB230
  if (!crb(c,1)) { goto L_800BB23C; } // 800BB234
  c->r[20]=c->r[20]+0x00000001u; // 800BB238
L_800BB23C:;
  c->r[6]=addc(c,c->r[6],0xFFFFFFFFu,0); cr0(c,c->r[6]); // 800BB23C
  if (!crb(c,0)) { goto L_800BB248; } // 800BB240
  c->r[6]=0u+0x00000007u; // 800BB244
L_800BB248:;
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[6]); // 800BB248
  if (!crb(c,2)) { IRQCHK(c); goto L_800BB204; } // 800BB24C
  cmps(c,0,(int32_t)c->r[5],2); // 800BB250
  if (!crb(c,1)) { goto L_800BB4A4; } // 800BB254
  c->r[5]=rotl(c->r[5],0)&0x0000FFFFu; // 800BB258
  c->r[3]=0u+0x00000098u; // 800BB25C
  c->r[4]=0u+0x00000000u; // 800BB260
  c->lr=0x800BB268u; f_803A4A10(c); // 800BB264
  c->r[0]=rotl(c->r[25],0)&0x000000FFu; // 800BB268
  W32(c->r[1]+0x000000B4u,c->r[0]); // 800BB26C
  c->r[0]=(uint32_t)((int32_t)c->r[20]*(int32_t)15); // 800BB270
  {uint32_t ea=c->r[2]+0xFFFFA090u; c->f[1]=RF64(ea);} // 800BB274
  {uint32_t ea=c->r[1]+0x000000B0u; c->f[0]=RF64(ea);} // 800BB278
  c->r[28]=c->r[26]|c->r[26]; // 800BB27C
  {uint32_t ea=c->r[2]+0xFFFFA098u; c->f[2]=RF64(ea);} // 800BB280
  c->r[25]=rotl(c->r[25],0)&0xFFFFFF00u; // 800BB284
  c->r[0]=c->r[0]^0x80000000u; // 800BB288
  c->f[3]=c->ps1[3]=S(c->f[0]-c->f[1]); // 800BB28C
  W32(c->r[1]+0x000000BCu,c->r[0]); // 800BB290
  c->r[21]=0u+0xCC010000u; // 800BB294
  {uint32_t ea=c->r[2]+0xFFFFA06Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800BB298
  {uint32_t ea=c->r[1]+0x000000B8u; c->f[1]=RF64(ea);} // 800BB29C
  W32(c->r[1]+0x000000B4u,c->r[0]); // 800BB2A0
  c->f[25]=c->ps1[25]=S(c->f[0]*c->f[3]); // 800BB2A4
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 800BB2A8
  {uint32_t ea=c->r[2]+0xFFFFA050u; c->f[20]=c->ps1[20]=RF32(ea);} // 800BB2AC
  {uint32_t ea=c->r[1]+0x000000B0u; c->f[0]=RF64(ea);} // 800BB2B0
  {uint32_t ea=c->r[2]+0xFFFFA070u; c->f[31]=c->ps1[31]=RF32(ea);} // 800BB2B4
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[2]); // 800BB2B8
  c->f[24]=c->ps1[24]=S(c->f[25]/c->f[1]); // 800BB2BC
  c->f[22]=c->ps1[22]=S(c->f[21]/c->f[0]); // 800BB2C0
  goto L_800BB498; // 800BB2C4
L_800BB2C8:;
  c->r[0]=(uint32_t)((int32_t)c->r[26]*(int32_t)136); // 800BB2C8
  c->r[29]=c->r[23]+c->r[0]; // 800BB2CC
  {uint32_t ea=c->r[29]+0x000000A8u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BB2D0
  c->r[0]=R32(c->r[29]+0x000000ACu); // 800BB2D4
  c->f[23]=c->ps1[23]=S(c->f[25]*c->f[0]); // 800BB2D8
  cmps(c,0,(int32_t)c->r[0],1); // 800BB2DC
  if (!crb(c,1)) { goto L_800BB48C; } // 800BB2E0
  c->r[31]=c->r[29]+0x00000028u; // 800BB2E4
  c->r[30]=c->r[29]+0x00000030u; // 800BB2E8
  c->r[27]=0u+0x00000000u; // 800BB2EC
  c->r[22]=0u+0x00000000u; // 800BB2F0
  goto L_800BB480; // 800BB2F4
L_800BB2F8:;
  cmps(c,0,(int32_t)c->r[28],(int32_t)c->r[26]); // 800BB2F8
  if (crb(c,2)) { goto L_800BB308; } // 800BB2FC
  cmps(c,0,(int32_t)c->r[27],0); // 800BB300
  if (!crb(c,1)) { goto L_800BB478; } // 800BB304
L_800BB308:;
  cmps(c,0,(int32_t)c->r[27],0); // 800BB308
  if (!crb(c,1)) { goto L_800BB340; } // 800BB30C
  c->r[0]=c->r[27]+0xFFFFFFFFu; // 800BB310
  c->r[4]=c->r[31]+c->r[22]; // 800BB314
  c->r[0]=rotl(c->r[0],3)&0xFFFFFFF8u; // 800BB318
  c->r[3]=c->r[31]+c->r[0]; // 800BB31C
  c->lr=0x800BB324u; f_800BAFE8(c); // 800BB320
  W32(c->r[1]+0x00000064u,c->r[4]); // 800BB324
  W32(c->r[1]+0x00000060u,c->r[3]); // 800BB328
  {uint32_t ea=c->r[1]+0x00000064u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BB32C
  {uint32_t ea=c->r[1]+0x00000060u; c->f[1]=c->ps1[1]=RF32(ea);} // 800BB330
  {uint32_t ea=c->r[1]+0x00000078u; WF32(ea,c->f[1]);} // 800BB334
  {uint32_t ea=c->r[1]+0x0000007Cu; WF32(ea,c->f[0]);} // 800BB338
  goto L_800BB364; // 800BB33C
L_800BB340:;
  c->r[3]=c->r[31]|c->r[31]; // 800BB340
  c->r[4]=c->r[30]|c->r[30]; // 800BB344
  c->lr=0x800BB34Cu; f_800BAFE8(c); // 800BB348
  W32(c->r[1]+0x0000005Cu,c->r[4]); // 800BB34C
  W32(c->r[1]+0x00000058u,c->r[3]); // 800BB350
  {uint32_t ea=c->r[1]+0x0000005Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800BB354
  {uint32_t ea=c->r[1]+0x00000058u; c->f[1]=c->ps1[1]=RF32(ea);} // 800BB358
  {uint32_t ea=c->r[1]+0x00000078u; WF32(ea,c->f[1]);} // 800BB35C
  {uint32_t ea=c->r[1]+0x0000007Cu; WF32(ea,c->f[0]);} // 800BB360
L_800BB364:;
  c->r[3]=c->r[1]+0x00000078u; // 800BB364
  c->r[4]=c->r[3]|c->r[3]; // 800BB368
  c->lr=0x800BB370u; f_800BB034(c); // 800BB36C
  fcmp(c,0,c->f[1],c->f[31]); // 800BB370
  if (!crb(c,1)) { goto L_800BB384; } // 800BB374
  c->r[3]=c->r[1]+0x00000078u; // 800BB378
  c->r[4]=c->r[3]|c->r[3]; // 800BB37C
  c->lr=0x800BB384u; f_804E1520(c); // 800BB380
L_800BB384:;
  {uint32_t ea=c->r[1]+0x0000007Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800BB384
  c->r[3]=c->r[1]+0x00000048u; // 800BB388
  {uint32_t ea=c->r[1]+0x00000078u; c->f[1]=c->ps1[1]=RF32(ea);} // 800BB38C
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[21]); // 800BB390
  c->f[3]=c->ps1[3]=S(c->f[1]*c->f[21]); // 800BB394
  {uint32_t ea=c->r[1]+0x0000007Cu; WF32(ea,c->f[0]);} // 800BB398
  c->f[1]=-c->f[0]; // 800BB39C
  c->f[2]=-c->f[3]; // 800BB3A0
  {uint32_t ea=c->r[1]+0x00000078u; WF32(ea,c->f[3]);} // 800BB3A4
  c->f[0]=c->ps1[0]=S(c->f[1]); // 800BB3A8
  {uint32_t ea=c->r[1]+0x00000070u; WF32(ea,c->f[1]);} // 800BB3AC
  {uint32_t ea=c->r[1]+0x00000074u; WF32(ea,c->f[3]);} // 800BB3B0
  c->f[1]=-c->f[0]; // 800BB3B4
  c->lr=0x800BB3BCu; f_800BAF90(c); // 800BB3B8
  c->r[5]=R32(c->r[3]+0x00000000u); // 800BB3BC
  c->r[20]=c->r[31]+c->r[22]; // 800BB3C0
  c->r[0]=R32(c->r[3]+0x00000004u); // 800BB3C4
  c->r[4]=c->r[20]|c->r[20]; // 800BB3C8
  W32(c->r[1]+0x00000050u,c->r[5]); // 800BB3CC
  c->r[3]=c->r[1]+0x00000078u; // 800BB3D0
  W32(c->r[1]+0x00000054u,c->r[0]); // 800BB3D4
  {uint32_t ea=c->r[1]+0x00000050u; c->f[1]=c->ps1[1]=RF32(ea);} // 800BB3D8
  {uint32_t ea=c->r[1]+0x00000054u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BB3DC
  W32(c->r[1]+0x00000040u,c->r[5]); // 800BB3E0
  W32(c->r[1]+0x00000044u,c->r[0]); // 800BB3E4
  {uint32_t ea=c->r[1]+0x00000078u; WF32(ea,c->f[1]);} // 800BB3E8
  {uint32_t ea=c->r[1]+0x0000007Cu; WF32(ea,c->f[0]);} // 800BB3EC
  c->lr=0x800BB3F4u; f_800BBC1C(c); // 800BB3F0
  c->r[4]=c->r[20]|c->r[20]; // 800BB3F4
  c->r[3]=c->r[1]+0x00000070u; // 800BB3F8
  c->lr=0x800BB400u; f_800BBC1C(c); // 800BB3FC
  {uint32_t ea=c->r[1]+0x00000078u; c->f[1]=c->ps1[1]=RF32(ea);} // 800BB400
  {uint32_t ea=c->r[1]+0x0000007Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 800BB404
  c->lr=0x800BB40Cu; f_800BBC40(c); // 800BB408
  c->f[1]=c->f[23]; // 800BB40C
  c->lr=0x800BB414u; f_803A9ADC(c); // 800BB410
  c->r[0]=c->r[25]|c->r[3]; // 800BB414
  W32(c->r[21]+0xFFFF8000u,c->r[0]); // 800BB418
  {uint32_t ea=c->r[2]+0xFFFFA050u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BB41C
  {uint32_t ea=c->r[21]+0xFFFF8000u; WF32(ea,c->f[0]);} // 800BB420
  {uint32_t ea=c->r[2]+0xFFFFA06Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800BB424
  {uint32_t ea=c->r[21]+0xFFFF8000u; WF32(ea,c->f[0]);} // 800BB428
  {uint32_t ea=c->r[1]+0x00000070u; c->f[1]=c->ps1[1]=RF32(ea);} // 800BB42C
  {uint32_t ea=c->r[1]+0x00000074u; c->f[2]=c->ps1[2]=RF32(ea);} // 800BB430
  c->lr=0x800BB438u; f_800BBC40(c); // 800BB434
  c->f[1]=c->f[23]; // 800BB438
  c->lr=0x800BB440u; f_803A9ADC(c); // 800BB43C
  c->f[25]=c->ps1[25]=S(c->f[25]-c->f[24]); // 800BB440
  c->r[0]=c->r[25]|c->r[3]; // 800BB444
  W32(c->r[21]+0xFFFF8000u,c->r[0]); // 800BB448
  {uint32_t ea=c->r[2]+0xFFFFA04Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800BB44C
  {uint32_t ea=c->r[21]+0xFFFF8000u; WF32(ea,c->f[0]);} // 800BB450
  fcmp(c,0,c->f[25],c->f[20]); // 800BB454
  {uint32_t ea=c->r[2]+0xFFFFA06Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800BB458
  {uint32_t ea=c->r[21]+0xFFFF8000u; WF32(ea,c->f[0]);} // 800BB45C
  if (!crb(c,0)) { goto L_800BB468; } // 800BB460
  c->f[25]=c->f[20]; // 800BB464
L_800BB468:;
  c->f[21]=c->ps1[21]=S(c->f[21]-c->f[22]); // 800BB468
  fcmp(c,0,c->f[21],c->f[20]); // 800BB46C
  if (!crb(c,0)) { goto L_800BB478; } // 800BB470
  c->f[21]=c->f[20]; // 800BB474
L_800BB478:;
  c->r[27]=c->r[27]+0x00000001u; // 800BB478
  c->r[22]=c->r[22]+0x00000008u; // 800BB47C
L_800BB480:;
  c->r[0]=R32(c->r[29]+0x000000ACu); // 800BB480
  cmps(c,0,(int32_t)c->r[27],(int32_t)c->r[0]); // 800BB484
  if (crb(c,0)) { IRQCHK(c); goto L_800BB2F8; } // 800BB488
L_800BB48C:;
  c->r[26]=addc(c,c->r[26],0xFFFFFFFFu,0); cr0(c,c->r[26]); // 800BB48C
  if (!crb(c,0)) { goto L_800BB498; } // 800BB490
  c->r[26]=0u+0x00000007u; // 800BB494
L_800BB498:;
  c->r[0]=R32(c->r[23]+0x00000468u); // 800BB498
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[26]); // 800BB49C
  if (!crb(c,2)) { IRQCHK(c); goto L_800BB2C8; } // 800BB4A0
L_800BB4A4:;
  {uint32_t ea=c->r[2]+0xFFFFA050u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BB4A4
  fcmp(c,0,c->f[26],c->f[0]); // 800BB4A8
  if (!crb(c,1)) { goto L_800BB560; } // 800BB4AC
  {uint32_t ea=c->r[2]+0xFFFFA074u; c->f[1]=c->ps1[1]=RF32(ea);} // 800BB4B0
  c->r[25]=rotl(c->r[25],0)&0xFFFFFF00u; // 800BB4B4
  {uint32_t ea=c->r[23]+0x00000470u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BB4B8
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[0]); // 800BB4BC
  c->lr=0x800BB4C4u; f_803A9ADC(c); // 800BB4C0
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; // 800BB4C4
  c->r[3]=0u+0x00000098u; // 800BB4C8
  c->r[25]=c->r[25]|c->r[0]; // 800BB4CC
  c->r[4]=0u+0x00000000u; // 800BB4D0
  c->r[5]=0u+0x00000004u; // 800BB4D4
  c->lr=0x800BB4DCu; f_803A4A10(c); // 800BB4D8
  c->f[4]=c->ps1[4]=S(c->f[28]-c->f[30]); // 800BB4DC
  c->r[3]=0u+0xCC010000u; // 800BB4E0
  c->f[3]=c->ps1[3]=S(c->f[27]-c->f[29]); // 800BB4E4
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[4]);} // 800BB4E8
  c->f[2]=c->ps1[2]=S(c->f[28]+c->f[30]); // 800BB4EC
  c->f[1]=c->ps1[1]=S(c->f[27]+c->f[29]); // 800BB4F0
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[3]);} // 800BB4F4
  W32(c->r[3]+0xFFFF8000u,c->r[25]); // 800BB4F8
  {uint32_t ea=c->r[2]+0xFFFFA050u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BB4FC
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[0]);} // 800BB500
  {uint32_t ea=c->r[2]+0xFFFFA050u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BB504
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[0]);} // 800BB508
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[2]);} // 800BB50C
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[3]);} // 800BB510
  W32(c->r[3]+0xFFFF8000u,c->r[25]); // 800BB514
  {uint32_t ea=c->r[2]+0xFFFFA04Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800BB518
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[0]);} // 800BB51C
  {uint32_t ea=c->r[2]+0xFFFFA050u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BB520
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[0]);} // 800BB524
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[4]);} // 800BB528
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[1]);} // 800BB52C
  W32(c->r[3]+0xFFFF8000u,c->r[25]); // 800BB530
  {uint32_t ea=c->r[2]+0xFFFFA050u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BB534
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[0]);} // 800BB538
  {uint32_t ea=c->r[2]+0xFFFFA04Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800BB53C
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[0]);} // 800BB540
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[2]);} // 800BB544
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[1]);} // 800BB548
  W32(c->r[3]+0xFFFF8000u,c->r[25]); // 800BB54C
  {uint32_t ea=c->r[2]+0xFFFFA04Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800BB550
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[0]);} // 800BB554
  {uint32_t ea=c->r[2]+0xFFFFA04Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800BB558
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[0]);} // 800BB55C
L_800BB560:;
  {uint32_t ea=c->r[2]+0xFFFFA050u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BB560
  fcmp(c,0,c->f[26],c->f[0]); // 800BB564
  if (!crb(c,1)) { goto L_800BB7F8; } // 800BB568
  c->r[3]=R32(c->r[13]+0xFFFFC218u); // 800BB56C
  c->lr=0x800BB574u; f_800CEC64(c); // 800BB570
  c->lr=0x800BB578u; f_800CD594(c); // 800BB574
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[3]; cr0(c,c->r[0]); // 800BB578
  if (!crb(c,2)) { goto L_800BB7F8; } // 800BB57C
  {uint32_t ea=c->r[2]+0xFFFFA078u; c->f[1]=c->ps1[1]=RF32(ea);} // 800BB580
  c->r[25]=rotl(c->r[25],0)&0xFFFFFF00u; // 800BB584
  {uint32_t ea=c->r[23]+0x00000470u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BB588
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[0]); // 800BB58C
  c->lr=0x800BB594u; f_803A9ADC(c); // 800BB590
  {uint32_t ea=c->r[2]+0xFFFFA07Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800BB594
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; // 800BB598
  {uint32_t ea=c->r[23]+0x00000470u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BB59C
  c->r[26]=c->r[25]|c->r[0]; // 800BB5A0
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[0]); // 800BB5A4
  c->lr=0x800BB5ACu; f_803A9ADC(c); // 800BB5A8
  c->r[0]=R8(c->r[13]+0xFFFFBB87u); // 800BB5AC
  c->r[3]=rotl(c->r[3],0)&0x000000FFu; // 800BB5B0
  c->r[25]=c->r[25]|c->r[3]; // 800BB5B4
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800BB5B8
  if (!crb(c,2)) { goto L_800BB600; } // 800BB5BC
  c->r[22]=0u+0x80730000u; // 800BB5C0
  c->r[3]=c->r[22]+0x00006160u; // 800BB5C4
  c->lr=0x800BB5CCu; f_8008C1BC(c); // 800BB5C8
  c->r[6]=0u+0x806D0000u; // 800BB5CC
  c->r[4]=0u+0x80050000u; // 800BB5D0
  c->r[6]=c->r[6]+0xFFFFC37Cu; // 800BB5D4
  c->r[3]=c->r[22]+0x00006160u; // 800BB5D8
  c->r[0]=c->r[6]+0x00000028u; // 800BB5DC
  c->r[5]=0u+0x80750000u; // 800BB5E0
  W32(c->r[3]+0x000000A4u,c->r[6]); // 800BB5E4
  c->r[4]=c->r[4]+0xFFFF9F5Cu; // 800BB5E8
  c->r[5]=c->r[5]+0x00002CD0u; // 800BB5EC
  W32(c->r[3]+0x000000A8u,c->r[0]); // 800BB5F0
  c->lr=0x800BB5F8u; f_803A92B8(c); // 800BB5F4
  c->r[0]=0u+0x00000001u; // 800BB5F8
  W8(c->r[13]+0xFFFFBB87u,c->r[0]); // 800BB5FC
L_800BB600:;
  c->r[3]=0u+0x80730000u; // 800BB600
  c->r[3]=c->r[3]+0x00006160u; // 800BB604
  c->lr=0x800BB60Cu; f_8008CD18(c); // 800BB608
  cmps(c,0,(int32_t)c->r[3],1); // 800BB60C
  if (!crb(c,1)) { goto L_800BB64C; } // 800BB610
  c->r[0]=c->r[24]^0x80000000u; // 800BB614
  W32(c->r[1]+0x000000BCu,c->r[0]); // 800BB618
  {uint32_t ea=c->r[2]+0xFFFFA080u; c->f[22]=c->ps1[22]=RF32(ea);} // 800BB61C
  {uint32_t ea=c->r[2]+0xFFFFA06Cu; c->f[4]=c->ps1[4]=RF32(ea);} // 800BB620
  {uint32_t ea=c->r[2]+0xFFFFA098u; c->f[1]=RF64(ea);} // 800BB624
  {uint32_t ea=c->r[1]+0x000000B8u; c->f[0]=RF64(ea);} // 800BB628
  c->f[3]=c->ps1[3]=S(std::fma(c->f[4],c->f[28],-c->f[22])); // 800BB62C
  {uint32_t ea=c->r[2]+0xFFFFA054u; c->f[2]=c->ps1[2]=RF32(ea);} // 800BB630
  c->f[1]=c->ps1[1]=S(c->f[0]-c->f[1]); // 800BB634
  {uint32_t ea=c->r[2]+0xFFFFA064u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BB638
  c->f[22]=c->ps1[22]=S(std::fma(c->f[2],c->f[3],c->f[22])); // 800BB63C
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[1]); // 800BB640
  c->f[22]=c->ps1[22]=S(std::fma(c->f[4],c->f[0],c->f[22])); // 800BB644
  goto L_800BB65C; // 800BB648
L_800BB64C:;
  {uint32_t ea=c->r[2]+0xFFFFA084u; c->f[22]=c->ps1[22]=RF32(ea);} // 800BB64C
  {uint32_t ea=c->r[2]+0xFFFFA054u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BB650
  c->f[1]=c->ps1[1]=S(c->f[28]-c->f[22]); // 800BB654
  c->f[22]=c->ps1[22]=S(std::fma(c->f[0],c->f[1],c->f[22])); // 800BB658
L_800BB65C:;
  c->f[1]=c->ps1[1]=S(c->f[22]-c->f[28]); // 800BB65C
  {uint32_t ea=c->r[2]+0xFFFFA088u; c->f[23]=c->ps1[23]=RF32(ea);} // 800BB660
  {uint32_t ea=c->r[2]+0xFFFFA050u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BB664
  c->r[3]=c->r[1]+0x000000A4u; // 800BB668
  c->f[2]=c->ps1[2]=S(c->f[27]-c->f[23]); // 800BB66C
  {uint32_t ea=c->r[1]+0x000000A8u; WF32(ea,c->f[1]);} // 800BB670
  {uint32_t ea=c->r[1]+0x000000ACu; WF32(ea,c->f[0]);} // 800BB674
  {uint32_t ea=c->r[1]+0x000000A4u; WF32(ea,c->f[2]);} // 800BB678
  {uint32_t ea=c->r[3]+0x00000004u; psq_load(c,1,ea,0,0);} // 800BB67C
  {double t0=S(c->f[1]*c->f[1]), t1=S(c->ps1[1]*c->ps1[1]); c->f[0]=t0; c->ps1[0]=t1;} // 800BB680
  c->f[1]=c->ps1[1]=S(c->f[2]); // 800BB684
  {double t0=S(c->f[0]+c->ps1[0]), t1=S(c->ps1[1]); c->f[0]=t0; c->ps1[0]=t1;} // 800BB688
  {double t0=S(std::fma(c->f[1],c->ps1[0],c->f[0])), t1=S(std::fma(c->ps1[1],c->ps1[0],c->ps1[0])); c->f[1]=t0; c->ps1[1]=t1;} // 800BB68C
  {uint32_t ea=c->r[2]+0xFFFFA08Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800BB690
  fcmp(c,0,c->f[1],c->f[0]); // 800BB694
  c->r[0]=c->cr; // 800BB698
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 800BB69C
  if (!crb(c,2)) { goto L_800BB6B4; } // 800BB6A0
  c->r[5]=0u+0x806A0000u; // 800BB6A4
  c->r[4]=c->r[3]|c->r[3]; // 800BB6A8
  c->r[5]=c->r[5]+0x00000AA8u; // 800BB6AC
  c->lr=0x800BB6B4u; f_8030E0BC(c); // 800BB6B0
L_800BB6B4:;
  c->r[3]=c->r[1]+0x000000A4u; // 800BB6B4
  c->r[4]=c->r[1]+0x00000080u; // 800BB6B8
  {uint32_t ea=c->r[2]+0xFFFFA05Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800BB6BC
  {uint32_t ea=c->r[3]+0x00000000u; psq_load(c,1,ea,0,0);} // 800BB6C0
  {double t0=S(c->f[1]*c->f[0]), t1=S(c->ps1[1]*c->f[0]); c->f[1]=t0; c->ps1[1]=t1;} // 800BB6C4
  {uint32_t ea=c->r[4]+0x00000000u; psq_store(c,1,ea,0,0);} // 800BB6C8
  {uint32_t ea=c->r[3]+0x00000008u; psq_load(c,1,ea,1,0);} // 800BB6CC
  {double t0=S(c->f[1]*c->f[0]), t1=S(c->ps1[1]*c->f[0]); c->f[1]=t0; c->ps1[1]=t1;} // 800BB6D0
  {uint32_t ea=c->r[4]+0x00000008u; psq_store(c,1,ea,1,0);} // 800BB6D4
  {uint32_t ea=c->r[1]+0x00000080u; c->f[2]=c->ps1[2]=RF32(ea);} // 800BB6D8
  {uint32_t ea=c->r[1]+0x00000084u; c->f[1]=c->ps1[1]=RF32(ea);} // 800BB6DC
  {uint32_t ea=c->r[1]+0x00000088u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BB6E0
  {uint32_t ea=c->r[1]+0x0000008Cu; WF32(ea,c->f[2]);} // 800BB6E4
  {uint32_t ea=c->r[2]+0xFFFFA078u; c->f[3]=c->ps1[3]=RF32(ea);} // 800BB6E8
  {uint32_t ea=c->r[1]+0x00000090u; WF32(ea,c->f[1]);} // 800BB6EC
  {uint32_t ea=c->r[1]+0x00000094u; WF32(ea,c->f[0]);} // 800BB6F0
  {uint32_t ea=c->r[1]+0x00000098u; WF32(ea,c->f[2]);} // 800BB6F4
  {uint32_t ea=c->r[1]+0x0000009Cu; WF32(ea,c->f[1]);} // 800BB6F8
  {uint32_t ea=c->r[1]+0x000000A0u; WF32(ea,c->f[0]);} // 800BB6FC
  {uint32_t ea=c->r[3]+0x00000000u; psq_load(c,0,ea,0,0);} // 800BB700
  {double t0=S(c->f[0]*c->f[3]), t1=S(c->ps1[0]*c->f[3]); c->f[0]=t0; c->ps1[0]=t1;} // 800BB704
  {uint32_t ea=c->r[3]+0x00000000u; psq_store(c,0,ea,0,0);} // 800BB708
  {uint32_t ea=c->r[3]+0x00000008u; psq_load(c,0,ea,1,0);} // 800BB70C
  {double t0=S(c->f[0]*c->f[3]), t1=S(c->ps1[0]*c->f[3]); c->f[0]=t0; c->ps1[0]=t1;} // 800BB710
  {uint32_t ea=c->r[3]+0x00000008u; psq_store(c,0,ea,1,0);} // 800BB714
  c->r[0]=0u+0x00000000u; // 800BB718
  c->r[3]=c->r[1]+0x00000020u; // 800BB71C
  W8(c->r[1]+0x00000020u,c->r[0]); // 800BB720
  c->lr=0x800BB728u; f_80045BC8(c); // 800BB724
  {uint32_t ea=c->r[2]+0xFFFFA064u; c->f[1]=c->ps1[1]=RF32(ea);} // 800BB728
  c->r[4]=0u+0x00000001u; // 800BB72C
  {uint32_t ea=c->r[2]+0xFFFFA068u; c->f[2]=c->ps1[2]=RF32(ea);} // 800BB730
  c->r[5]=0u+0x00000004u; // 800BB734
  c->lr=0x800BB73Cu; f_802980EC(c); // 800BB738
  c->r[3]=0u+0x00000098u; // 800BB73C
  c->r[4]=0u+0x00000000u; // 800BB740
  c->r[5]=0u+0x00000004u; // 800BB744
  c->lr=0x800BB74Cu; f_803A4A10(c); // 800BB748
  c->r[22]=0u+0xCC010000u; // 800BB74C
  {uint32_t ea=c->r[1]+0x00000098u; c->f[1]=c->ps1[1]=RF32(ea);} // 800BB750
  {uint32_t ea=c->r[22]+0xFFFF8000u; WF32(ea,c->f[28]);} // 800BB754
  {uint32_t ea=c->r[1]+0x0000009Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800BB758
  c->f[1]=c->ps1[1]=S(c->f[28]+c->f[1]); // 800BB75C
  {uint32_t ea=c->r[22]+0xFFFF8000u; WF32(ea,c->f[27]);} // 800BB760
  c->f[2]=c->ps1[2]=S(c->f[27]+c->f[0]); // 800BB764
  W32(c->r[22]+0xFFFF8000u,c->r[26]); // 800BB768
  {uint32_t ea=c->r[22]+0xFFFF8000u; WF32(ea,c->f[22]);} // 800BB76C
  {uint32_t ea=c->r[22]+0xFFFF8000u; WF32(ea,c->f[23]);} // 800BB770
  W32(c->r[22]+0xFFFF8000u,c->r[25]); // 800BB774
  c->lr=0x800BB77Cu; f_800BBC40(c); // 800BB778
  c->r[20]=rotl(c->r[26],0)&0xFFFFFF00u; // 800BB77C
  W32(c->r[22]+0xFFFF8000u,c->r[20]); // 800BB780
  {uint32_t ea=c->r[1]+0x000000A4u; c->f[1]=c->ps1[1]=RF32(ea);} // 800BB784
  {uint32_t ea=c->r[1]+0x000000A8u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BB788
  c->f[1]=c->ps1[1]=S(c->f[22]+c->f[1]); // 800BB78C
  c->f[2]=c->ps1[2]=S(c->f[23]+c->f[0]); // 800BB790
  c->lr=0x800BB798u; f_800BBC40(c); // 800BB794
  c->r[21]=rotl(c->r[25],0)&0xFFFFFF00u; // 800BB798
  W32(c->r[22]+0xFFFF8000u,c->r[21]); // 800BB79C
  c->r[3]=0u+0x00000098u; // 800BB7A0
  c->r[4]=0u+0x00000000u; // 800BB7A4
  c->r[5]=0u+0x00000004u; // 800BB7A8
  c->lr=0x800BB7B0u; f_803A4A10(c); // 800BB7AC
  {uint32_t ea=c->r[22]+0xFFFF8000u; WF32(ea,c->f[28]);} // 800BB7B0
  {uint32_t ea=c->r[1]+0x00000098u; c->f[1]=c->ps1[1]=RF32(ea);} // 800BB7B4
  {uint32_t ea=c->r[22]+0xFFFF8000u; WF32(ea,c->f[27]);} // 800BB7B8
  {uint32_t ea=c->r[1]+0x0000009Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800BB7BC
  c->f[1]=c->ps1[1]=S(c->f[28]-c->f[1]); // 800BB7C0
  W32(c->r[22]+0xFFFF8000u,c->r[26]); // 800BB7C4
  c->f[2]=c->ps1[2]=S(c->f[27]-c->f[0]); // 800BB7C8
  {uint32_t ea=c->r[22]+0xFFFF8000u; WF32(ea,c->f[22]);} // 800BB7CC
  {uint32_t ea=c->r[22]+0xFFFF8000u; WF32(ea,c->f[23]);} // 800BB7D0
  W32(c->r[22]+0xFFFF8000u,c->r[25]); // 800BB7D4
  c->lr=0x800BB7DCu; f_800BBC40(c); // 800BB7D8
  W32(c->r[22]+0xFFFF8000u,c->r[20]); // 800BB7DC
  {uint32_t ea=c->r[1]+0x000000A4u; c->f[1]=c->ps1[1]=RF32(ea);} // 800BB7E0
  {uint32_t ea=c->r[1]+0x000000A8u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BB7E4
  c->f[1]=c->ps1[1]=S(c->f[22]-c->f[1]); // 800BB7E8
  c->f[2]=c->ps1[2]=S(c->f[23]-c->f[0]); // 800BB7EC
  c->lr=0x800BB7F4u; f_800BBC40(c); // 800BB7F0
  W32(c->r[22]+0xFFFF8000u,c->r[21]); // 800BB7F4
L_800BB7F8:;
  c->r[0]=0u+0x00000000u; // 800BB7F8
  W8(c->r[1]+0x0000001Cu,c->r[0]); // 800BB7FC
  c->r[3]=c->r[1]+0x0000001Cu; // 800BB800
  c->lr=0x800BB808u; f_80046EFC(c); // 800BB804
  c->r[4]=c->r[24]|c->r[24]; // 800BB808
  c->r[7]=c->r[1]+0x00000068u; // 800BB80C
  c->r[8]=c->r[1]+0x00000038u; // 800BB810
  c->r[9]=c->r[1]+0x00000034u; // 800BB814
  c->r[5]=0u+0x00000000u; // 800BB818
  c->r[6]=0u+0x00000000u; // 800BB81C
  c->lr=0x800BB824u; f_800B2400(c); // 800BB820
  c->r[0]=rotl(c->r[3],0)&0x00000004u; cr0(c,c->r[0]); // 800BB824
  {uint32_t ea=c->r[23]+0x00000470u; c->f[20]=c->ps1[20]=RF32(ea);} // 800BB828
  c->r[28]=c->r[3]|c->r[3]; // 800BB82C
  c->r[29]=0u+0x00000000u; // 800BB830
  if (crb(c,2)) { goto L_800BBA00; } // 800BB834
  c->r[0]=R32(c->r[1]+0x00000068u); // 800BB838
  cmps(c,0,(int32_t)c->r[0],0); // 800BB83C
  if (crb(c,2)) { goto L_800BBA00; } // 800BB840
  c->r[3]=c->r[1]+0x00000068u; // 800BB844
  c->lr=0x800BB84Cu; f_80046E94(c); // 800BB848
  c->r[3]=R32(c->r[3]+0x00000000u); // 800BB84C
  c->r[0]=R32(c->r[1]+0x00000068u); // 800BB850
  c->r[3]=c->r[3]-c->r[0]; // 800BB854
  c->r[0]=addc(c,c->r[3],0xFFFFFFFFu,0); // 800BB858
  c->r[0]=addc(c,~c->r[0],c->r[3],c->xer_ca); cr0(c,c->r[0]); // 800BB85C
  if (!crb(c,2)) { goto L_800BBA00; } // 800BB860
  c->r[3]=c->r[1]+0x00000068u; // 800BB864
  c->lr=0x800BB86Cu; f_80046E94(c); // 800BB868
  c->r[0]=R8(c->r[13]+0xFFFFBFA0u); // 800BB86C
  c->r[5]=R32(c->r[3]+0x00000004u); // 800BB870
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800BB874
  if (!crb(c,2)) { goto L_800BB898; } // 800BB878
  c->r[4]=R32(c->r[13]+0xFFFFBE94u); // 800BB87C
  c->r[0]=0u+0x00000001u; // 800BB880
  W32(c->r[13]+0xFFFFBE98u,c->r[4]); // 800BB884
  c->r[3]=c->r[4]+0x00000001u; // 800BB888
  W32(c->r[13]+0xFFFFBE94u,c->r[3]); // 800BB88C
  W32(c->r[13]+0xFFFFBF9Cu,c->r[4]); // 800BB890
  W8(c->r[13]+0xFFFFBFA0u,c->r[0]); // 800BB894
L_800BB898:;
  c->r[3]=R32(c->r[5]+0x00000000u); // 800BB898
  c->r[0]=R32(c->r[13]+0xFFFFBF9Cu); // 800BB89C
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 800BB8A0
  if (!crb(c,2)) { goto L_800BB8C8; } // 800BB8A4
  c->r[3]=c->r[1]+0x00000068u; // 800BB8A8
  c->lr=0x800BB8B0u; f_80046E94(c); // 800BB8AC
  c->r[3]=R32(c->r[3]+0x00000004u); // 800BB8B0
  c->r[0]=R8(c->r[3]+0x000003D9u); // 800BB8B4
  cmps(c,0,(int32_t)c->r[0],0); // 800BB8B8
  if (!crb(c,2)) { goto L_800BBA00; } // 800BB8BC
  c->r[28]=rotl(c->r[28],0)&0xFFFFFFFBu; // 800BB8C0
  goto L_800BBA00; // 800BB8C4
L_800BB8C8:;
  c->r[0]=R8(c->r[13]+0xFFFFBC44u); // 800BB8C8
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800BB8CC
  if (!crb(c,2)) { goto L_800BB8EC; } // 800BB8D0
  c->r[3]=R32(c->r[13]+0xFFFFBC48u); // 800BB8D4
  c->r[0]=0u+0x00000001u; // 800BB8D8
  W32(c->r[13]+0xFFFFBC40u,c->r[3]); // 800BB8DC
  c->r[3]=c->r[3]+0x00000001u; // 800BB8E0
  W32(c->r[13]+0xFFFFBC48u,c->r[3]); // 800BB8E4
  W8(c->r[13]+0xFFFFBC44u,c->r[0]); // 800BB8E8
L_800BB8EC:;
  c->r[21]=R32(c->r[13]+0xFFFFBC40u); // 800BB8EC
  c->r[3]=c->r[1]+0x00000068u; // 800BB8F0
  c->lr=0x800BB8F8u; f_80046E94(c); // 800BB8F4
  c->r[3]=R32(c->r[3]+0x00000004u); // 800BB8F8
  c->r[0]=R32(c->r[3]+0x00000328u); // 800BB8FC
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[21]); // 800BB900
  if (!crb(c,2)) { goto L_800BB94C; } // 800BB904
  c->r[3]=c->r[1]+0x00000068u; // 800BB908
  c->lr=0x800BB910u; f_80046E94(c); // 800BB90C
  c->r[3]=R32(c->r[3]+0x00000004u); // 800BB910
  c->r[12]=R32(c->r[3]+0x0000001Cu); // 800BB914
  c->r[12]=R32(c->r[12]+0x00000044u); // 800BB918
  c->ctr=c->r[12]; // 800BB91C
  if (true) { c->lr=0x800BB924u; dispatch(c,c->ctr); } // 800BB920
  cmps(c,0,(int32_t)c->r[3],0); // 800BB924
  if (crb(c,2)) { goto L_800BBA00; } // 800BB928
  c->r[3]=c->r[1]+0x00000068u; // 800BB92C
  c->lr=0x800BB934u; f_80046E94(c); // 800BB930
  c->r[3]=R32(c->r[3]+0x00000004u); // 800BB934
  c->r[0]=R32(c->r[3]+0x00000354u); // 800BB938
  c->r[0]=c->r[0]&0x00000401u; cr0(c,c->r[0]); // 800BB93C
  if (crb(c,2)) { goto L_800BBA00; } // 800BB940
  c->r[28]=rotl(c->r[28],0)&0xFFFFFFFBu; // 800BB944
  goto L_800BBA00; // 800BB948
L_800BB94C:;
  c->r[0]=R8(c->r[13]+0xFFFFBC60u); // 800BB94C
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800BB950
  if (!crb(c,2)) { goto L_800BB970; } // 800BB954
  c->r[3]=R32(c->r[13]+0xFFFFBC48u); // 800BB958
  c->r[0]=0u+0x00000001u; // 800BB95C
  W32(c->r[13]+0xFFFFBC5Cu,c->r[3]); // 800BB960
  c->r[3]=c->r[3]+0x00000001u; // 800BB964
  W32(c->r[13]+0xFFFFBC48u,c->r[3]); // 800BB968
  W8(c->r[13]+0xFFFFBC60u,c->r[0]); // 800BB96C
L_800BB970:;
  c->r[21]=R32(c->r[13]+0xFFFFBC5Cu); // 800BB970
  c->r[3]=c->r[1]+0x00000068u; // 800BB974
  c->lr=0x800BB97Cu; f_80046E94(c); // 800BB978
  c->r[3]=R32(c->r[3]+0x00000004u); // 800BB97C
  c->r[0]=R32(c->r[3]+0x00000328u); // 800BB980
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[21]); // 800BB984
  if (!crb(c,2)) { goto L_800BBA00; } // 800BB988
  c->r[3]=c->r[1]+0x00000068u; // 800BB98C
  c->lr=0x800BB994u; f_80046E94(c); // 800BB990
  c->r[3]=R32(c->r[3]+0x00000004u); // 800BB994
  c->r[12]=R32(c->r[3]+0x0000001Cu); // 800BB998
  c->r[12]=R32(c->r[12]+0x00000130u); // 800BB99C
  c->ctr=c->r[12]; // 800BB9A0
  if (true) { c->lr=0x800BB9A8u; dispatch(c,c->ctr); } // 800BB9A4
  cmps(c,0,(int32_t)c->r[3],0); // 800BB9A8
  if (!crb(c,2)) { goto L_800BB9B8; } // 800BB9AC
  c->r[28]=rotl(c->r[28],0)&0xFFFFFFFBu; // 800BB9B0
  goto L_800BBA00; // 800BB9B4
L_800BB9B8:;
  c->r[0]=R32(c->r[1]+0x00000034u); // 800BB9B8
  cmps(c,0,(int32_t)c->r[0],1); // 800BB9BC
  if (!crb(c,2)) { goto L_800BB9D0; } // 800BB9C0
  c->r[28]=rotl(c->r[28],0)&0xFFFFFFFBu; // 800BB9C4
  c->r[29]=0u+0x00000002u; // 800BB9C8
  goto L_800BBA00; // 800BB9CC
L_800BB9D0:;
  c->r[3]=c->r[1]+0x00000068u; // 800BB9D0
  c->lr=0x800BB9D8u; f_80046E94(c); // 800BB9D4
  c->r[3]=R32(c->r[3]+0x00000004u); // 800BB9D8
  c->r[4]=R32(c->r[1]+0x00000038u); // 800BB9DC
  c->r[12]=R32(c->r[3]+0x0000001Cu); // 800BB9E0
  c->r[12]=R32(c->r[12]+0x000001ACu); // 800BB9E4
  c->ctr=c->r[12]; // 800BB9E8
  if (true) { c->lr=0x800BB9F0u; dispatch(c,c->ctr); } // 800BB9EC
  cmps(c,0,(int32_t)c->r[3],0); // 800BB9F0
  if (crb(c,2)) { goto L_800BBA00; } // 800BB9F4
  c->r[28]=rotl(c->r[28],0)&0xFFFFFFFBu; // 800BB9F8
  c->r[29]=0u+0x00000006u; // 800BB9FC
L_800BBA00:;
  c->r[0]=c->r[28]&0x00000044u; cr0(c,c->r[0]); // 800BBA00
  if (crb(c,2)) { goto L_800BBA0C; } // 800BBA04
  c->r[29]=0u+0x00000001u; // 800BBA08
L_800BBA0C:;
  c->r[0]=0u+0x00000000u; // 800BBA0C
  W8(c->r[1]+0x00000018u,c->r[0]); // 800BBA10
  c->r[3]=c->r[1]+0x00000018u; // 800BBA14
  c->lr=0x800BBA1Cu; f_80046EFC(c); // 800BBA18
  c->r[4]=c->r[24]|c->r[24]; // 800BBA1C
  c->lr=0x800BBA24u; f_80046DC8(c); // 800BBA20
  c->r[4]=0u+0x00000000u; // 800BBA24
  c->lr=0x800BBA2Cu; f_800AC77C(c); // 800BBA28
  cmps(c,0,(int32_t)c->r[3],0); // 800BBA2C
  if (!crb(c,2)) { goto L_800BBA38; } // 800BBA30
  c->r[29]=0u+0x00000003u; // 800BBA34
L_800BBA38:;
  c->r[0]=0u+0x00000000u; // 800BBA38
  W8(c->r[1]+0x00000014u,c->r[0]); // 800BBA3C
  c->r[3]=c->r[1]+0x00000014u; // 800BBA40
  c->lr=0x800BBA48u; f_8004F55C(c); // 800BBA44
  c->r[4]=c->r[24]|c->r[24]; // 800BBA48
  c->lr=0x800BBA50u; f_8005A558(c); // 800BBA4C
  cmps(c,0,(int32_t)c->r[3],0); // 800BBA50
  if (crb(c,2)) { goto L_800BBA5C; } // 800BBA54
  c->r[29]=0u+0x00000004u; // 800BBA58
L_800BBA5C:;
  c->r[0]=0u+0x00000000u; // 800BBA5C
  W8(c->r[1]+0x00000010u,c->r[0]); // 800BBA60
  c->r[3]=c->r[1]+0x00000010u; // 800BBA64
  c->lr=0x800BBA6Cu; f_80046EFC(c); // 800BBA68
  c->r[4]=c->r[24]|c->r[24]; // 800BBA6C
  c->lr=0x800BBA74u; f_80046DC8(c); // 800BBA70
  c->r[0]=R32(c->r[3]+0x0000033Cu); // 800BBA74
  c->r[0]=rotl(c->r[0],0)&0x00002000u; cr0(c,c->r[0]); // 800BBA78
  if (crb(c,2)) { goto L_800BBA84; } // 800BBA7C
  c->r[29]=0u+0x00000005u; // 800BBA80
L_800BBA84:;
  c->r[0]=R8(c->r[13]+0xFFFFBB83u); // 800BBA84
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800BBA88
  if (!crb(c,2)) { goto L_800BBAD0; } // 800BBA8C
  c->r[22]=0u+0x80730000u; // 800BBA90
  c->r[3]=c->r[22]+0x00005718u; // 800BBA94
  c->lr=0x800BBA9Cu; f_800E37EC(c); // 800BBA98
  c->r[6]=0u+0x806D0000u; // 800BBA9C
  c->r[4]=0u+0x80050000u; // 800BBAA0
  c->r[6]=c->r[6]+0xFFFFC46Cu; // 800BBAA4
  c->r[3]=c->r[22]+0x00005718u; // 800BBAA8
  c->r[0]=c->r[6]+0x00000028u; // 800BBAAC
  c->r[5]=0u+0x80750000u; // 800BBAB0
  W32(c->r[3]+0x000000A4u,c->r[6]); // 800BBAB4
  c->r[4]=c->r[4]+0xFFFFA04Cu; // 800BBAB8
  c->r[5]=c->r[5]+0x00002CC4u; // 800BBABC
  W32(c->r[3]+0x000000A8u,c->r[0]); // 800BBAC0
  c->lr=0x800BBAC8u; f_803A92B8(c); // 800BBAC4
  c->r[0]=0u+0x00000001u; // 800BBAC8
  W8(c->r[13]+0xFFFFBB83u,c->r[0]); // 800BBACC
L_800BBAD0:;
  c->r[3]=0u+0x80730000u; // 800BBAD0
  c->r[3]=c->r[3]+0x00005718u; // 800BBAD4
  c->lr=0x800BBADCu; f_800E40FC(c); // 800BBAD8
  cmps(c,0,(int32_t)c->r[3],0); // 800BBADC
  if (!crb(c,2)) { goto L_800BBB10; } // 800BBAE0
  c->r[0]=0u+0x00000000u; // 800BBAE4
  W8(c->r[1]+0x0000000Cu,c->r[0]); // 800BBAE8
  c->r[3]=c->r[1]+0x0000000Cu; // 800BBAEC
  c->lr=0x800BBAF4u; f_80046EFC(c); // 800BBAF0
  c->r[4]=c->r[24]|c->r[24]; // 800BBAF4
  c->lr=0x800BBAFCu; f_80046DC8(c); // 800BBAF8
  c->r[0]=R32(c->r[3]+0x0000033Cu); // 800BBAFC
  c->r[0]=rotl(c->r[0],0)&0x00008000u; cr0(c,c->r[0]); // 800BBB00
  if (crb(c,2)) { goto L_800BBB10; } // 800BBB04
  c->r[29]=0u+0x00000005u; // 800BBB08
  {uint32_t ea=c->r[2]+0xFFFFA04Cu; c->f[20]=c->ps1[20]=RF32(ea);} // 800BBB0C
L_800BBB10:;
  c->r[0]=0u+0x00000000u; // 800BBB10
  W8(c->r[1]+0x00000008u,c->r[0]); // 800BBB14
  c->r[3]=c->r[1]+0x00000008u; // 800BBB18
  c->lr=0x800BBB20u; f_8004F55C(c); // 800BBB1C
  c->lr=0x800BBB24u; f_8005A574(c); // 800BBB20
  cmps(c,0,(int32_t)c->r[24],(int32_t)c->r[3]); // 800BBB24
  if (crb(c,2)) { goto L_800BBBA4; } // 800BBB28
  c->r[0]=R8(c->r[13]+0xFFFFBB80u); // 800BBB2C
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800BBB30
  if (!crb(c,2)) { goto L_800BBB80; } // 800BBB34
  c->r[22]=0u+0x80730000u; // 800BBB38
  c->r[3]=c->r[22]+0x00004330u; // 800BBB3C
  c->lr=0x800BBB44u; f_800E8128(c); // 800BBB40
  c->r[7]=0u+0x806D0000u; // 800BBB44
  c->r[4]=0u+0x80050000u; // 800BBB48
  c->r[7]=c->r[7]+0xFFFFC520u; // 800BBB4C
  c->r[3]=c->r[22]+0x00004330u; // 800BBB50
  c->r[6]=c->r[7]+0x00000008u; // 800BBB54
  c->r[5]=0u+0x80750000u; // 800BBB58
  c->r[0]=c->r[7]+0x00000030u; // 800BBB5C
  W32(c->r[3]+0x000000E8u,c->r[7]); // 800BBB60
  c->r[4]=c->r[4]+0xFFFFA140u; // 800BBB64
  c->r[5]=c->r[5]+0x00002CB8u; // 800BBB68
  W32(c->r[3]+0x000000E0u,c->r[6]); // 800BBB6C
  W32(c->r[3]+0x000000E4u,c->r[0]); // 800BBB70
  c->lr=0x800BBB78u; f_803A92B8(c); // 800BBB74
  c->r[0]=0u+0x00000001u; // 800BBB78
  W8(c->r[13]+0xFFFFBB80u,c->r[0]); // 800BBB7C
L_800BBB80:;
  c->f[1]=c->f[28]; // 800BBB80
  c->r[3]=0u+0x80730000u; // 800BBB84
  c->f[2]=c->f[27]; // 800BBB88
  {uint32_t ea=c->r[2]+0xFFFFA04Cu; c->f[4]=c->ps1[4]=RF32(ea);} // 800BBB8C
  c->f[3]=c->f[20]; // 800BBB90
  c->r[4]=c->r[24]|c->r[24]; // 800BBB94
  c->r[5]=c->r[29]|c->r[29]; // 800BBB98
  c->r[3]=c->r[3]+0x00004330u; // 800BBB9C
  c->lr=0x800BBBA4u; f_800EA0B4(c); // 800BBBA0
L_800BBBA4:;
  c->r[11]=c->r[1]+0x000000F0u; // 800BBBA4
  {uint32_t ea=c->r[1]+0x000001A8u; psq_load(c,31,ea,0,0);} // 800BBBA8
  {uint32_t ea=c->r[1]+0x000001A0u; c->f[31]=RF64(ea);} // 800BBBAC
  {uint32_t ea=c->r[1]+0x00000198u; psq_load(c,30,ea,0,0);} // 800BBBB0
  {uint32_t ea=c->r[1]+0x00000190u; c->f[30]=RF64(ea);} // 800BBBB4
  {uint32_t ea=c->r[1]+0x00000188u; psq_load(c,29,ea,0,0);} // 800BBBB8
  {uint32_t ea=c->r[1]+0x00000180u; c->f[29]=RF64(ea);} // 800BBBBC
  {uint32_t ea=c->r[1]+0x00000178u; psq_load(c,28,ea,0,0);} // 800BBBC0
  {uint32_t ea=c->r[1]+0x00000170u; c->f[28]=RF64(ea);} // 800BBBC4
  {uint32_t ea=c->r[1]+0x00000168u; psq_load(c,27,ea,0,0);} // 800BBBC8
  {uint32_t ea=c->r[1]+0x00000160u; c->f[27]=RF64(ea);} // 800BBBCC
  {uint32_t ea=c->r[1]+0x00000158u; psq_load(c,26,ea,0,0);} // 800BBBD0
  {uint32_t ea=c->r[1]+0x00000150u; c->f[26]=RF64(ea);} // 800BBBD4
  {uint32_t ea=c->r[1]+0x00000148u; psq_load(c,25,ea,0,0);} // 800BBBD8
  {uint32_t ea=c->r[1]+0x00000140u; c->f[25]=RF64(ea);} // 800BBBDC
  {uint32_t ea=c->r[1]+0x00000138u; psq_load(c,24,ea,0,0);} // 800BBBE0
  {uint32_t ea=c->r[1]+0x00000130u; c->f[24]=RF64(ea);} // 800BBBE4
  {uint32_t ea=c->r[1]+0x00000128u; psq_load(c,23,ea,0,0);} // 800BBBE8
  {uint32_t ea=c->r[1]+0x00000120u; c->f[23]=RF64(ea);} // 800BBBEC
  {uint32_t ea=c->r[1]+0x00000118u; psq_load(c,22,ea,0,0);} // 800BBBF0
  {uint32_t ea=c->r[1]+0x00000110u; c->f[22]=RF64(ea);} // 800BBBF4
  {uint32_t ea=c->r[1]+0x00000108u; psq_load(c,21,ea,0,0);} // 800BBBF8
  {uint32_t ea=c->r[1]+0x00000100u; c->f[21]=RF64(ea);} // 800BBBFC
  {uint32_t ea=c->r[1]+0x000000F8u; psq_load(c,20,ea,0,0);} // 800BBC00
  {uint32_t ea=c->r[1]+0x000000F0u; c->f[20]=RF64(ea);} // 800BBC04
  c->lr=0x800BBC0Cu; { c->r[20]=R32(c->r[11]+0xFFFFFFD0u); c->r[21]=R32(c->r[11]+0xFFFFFFD4u); c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800BBC08
  c->r[0]=R32(c->r[1]+0x000001B4u); // 800BBC0C
  c->lr=c->r[0]; // 800BBC10
  c->r[1]=c->r[1]+0x000001B0u; // 800BBC14
  return; // 800BBC18
}

// fn_800BBC1C
void f_800BBC1C(Ctx* __restrict c) {
  trace_call(0x800BBC1Cu);
  {uint32_t ea=c->r[3]+0x00000000u; c->f[3]=c->ps1[3]=RF32(ea);} // 800BBC1C
  {uint32_t ea=c->r[4]+0x00000000u; c->f[2]=c->ps1[2]=RF32(ea);} // 800BBC20
  {uint32_t ea=c->r[3]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 800BBC24
  {uint32_t ea=c->r[4]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BBC28
  c->f[2]=c->ps1[2]=S(c->f[3]+c->f[2]); // 800BBC2C
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 800BBC30
  {uint32_t ea=c->r[3]+0x00000000u; WF32(ea,c->f[2]);} // 800BBC34
  {uint32_t ea=c->r[3]+0x00000004u; WF32(ea,c->f[0]);} // 800BBC38
  return; // 800BBC3C
}

// fn_800BBC40
void f_800BBC40(Ctx* __restrict c) {
  trace_call(0x800BBC40u);
  c->r[3]=0u+0xCC010000u; // 800BBC40
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[1]);} // 800BBC44
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[2]);} // 800BBC48
  return; // 800BBC4C
}

// fn_800BBC50
void f_800BBC50(Ctx* __restrict c) {
  trace_call(0x800BBC50u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BBC50
  c->r[0]=c->lr; // 800BBC54
  W32(c->r[1]+0x00000024u,c->r[0]); // 800BBC58
  c->r[11]=c->r[1]+0x00000020u; // 800BBC5C
  c->lr=0x800BBC64u; { W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800BBC60
  c->r[0]=0u+0x00000008u; // 800BBC64
  c->r[6]=0u+0x00000000u; // 800BBC68
  c->r[28]=c->r[3]|c->r[3]; // 800BBC6C
  W32(c->r[1]+0x00000008u,c->r[6]); // 800BBC70
  c->r[4]=0u+0x00000000u; // 800BBC74
  c->ctr=c->r[0]; // 800BBC78
L_800BBC7C:;
  c->r[5]=c->r[3]+c->r[4]; // 800BBC7C
  c->r[4]=c->r[4]+0x00000088u; // 800BBC80
  W32(c->r[5]+0x000000ACu,c->r[6]); // 800BBC84
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800BBC7C; } // 800BBC88
  {uint32_t ea=c->r[2]+0xFFFFA04Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800BBC8C
  c->r[4]=0u+0x80690000u; // 800BBC90
  c->r[0]=0u+0x00000000u; // 800BBC94
  W32(c->r[3]+0x00000468u,c->r[0]); // 800BBC98
  c->r[4]=c->r[4]+0xFFFFE2A0u; // 800BBC9C
  c->r[7]=0u+0x80740000u; // 800BBCA0
  W32(c->r[3]+0x0000046Cu,c->r[0]); // 800BBCA4
  c->r[5]=c->r[4]+0x0000000Du; // 800BBCA8
  c->r[6]=0u+0x00000000u; // 800BBCAC
  {uint32_t ea=c->r[3]+0x00000470u; WF32(ea,c->f[0]);} // 800BBCB0
  W32(c->r[3]+0x00000000u,c->r[0]); // 800BBCB4
  c->r[3]=c->r[7]+0x00004FD0u; // 800BBCB8
  c->lr=0x800BBCC0u; f_8005A7B0(c); // 800BBCBC
  c->r[0]=rotl(c->r[3],0)&0x0000001Fu; cr0(c,c->r[0]); // 800BBCC0
  c->r[29]=c->r[3]|c->r[3]; // 800BBCC4
  if (crb(c,2)) { goto L_800BBCE8; } // 800BBCC8
  c->r[3]=0u+0x806D0000u; // 800BBCCC
  c->r[5]=0u+0x806D0000u; // 800BBCD0
  c->r[3]=c->r[3]+0xFFFFDA50u; // 800BBCD4
  c->r[4]=0u+0x0000003Cu; // 800BBCD8
  c->r[5]=c->r[5]+0xFFFFDA28u; // 800BBCDC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800BBCE0
  c->lr=0x800BBCE8u; f_80484674(c); // 800BBCE4
L_800BBCE8:;
  c->r[4]=0u+0x80690000u; // 800BBCE8
  W32(c->r[1]+0x00000008u,c->r[29]); // 800BBCEC
  c->r[4]=c->r[4]+0xFFFFE2A0u; // 800BBCF0
  c->r[3]=c->r[1]+0x00000008u; // 800BBCF4
  c->r[4]=c->r[4]+0x00000030u; // 800BBCF8
  c->lr=0x800BBD00u; f_804AA6D0(c); // 800BBCFC
  cmps(c,0,(int32_t)c->r[3],0); // 800BBD00
  c->r[30]=c->r[3]|c->r[3]; // 800BBD04
  if (crb(c,2)) { goto L_800BBDF0; } // 800BBD08
  if (!crb(c,2)) { goto L_800BBD34; } // 800BBD0C
  c->r[3]=0u+0x806D0000u; // 800BBD10
  c->r[5]=0u+0x806D0000u; // 800BBD14
  c->r[3]=c->r[3]+0x00006FE8u; // 800BBD18
  c->r[4]=0u+0x00000026u; // 800BBD1C
  c->r[5]=c->r[5]+0x00006FCCu; // 800BBD20
  c->r[6]=c->r[13]+0xFFFF83A8u; // 800BBD24
  c->r[7]=c->r[13]+0xFFFF83A4u; // 800BBD28
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800BBD2C
  c->lr=0x800BBD34u; f_80484674(c); // 800BBD30
L_800BBD34:;
  c->r[0]=R32(c->r[30]+0x00000010u); // 800BBD34
  c->r[29]=0u+0x00000000u; // 800BBD38
  cmps(c,0,(int32_t)c->r[0],0); // 800BBD3C
  if (crb(c,2)) { goto L_800BBD48; } // 800BBD40
  c->r[29]=c->r[30]+c->r[0]; // 800BBD44
L_800BBD48:;
  cmps(c,0,(int32_t)c->r[30],0); // 800BBD48
  if (!crb(c,2)) { goto L_800BBD74; } // 800BBD4C
  c->r[3]=0u+0x806D0000u; // 800BBD50
  c->r[5]=0u+0x806D0000u; // 800BBD54
  c->r[3]=c->r[3]+0x00007018u; // 800BBD58
  c->r[4]=0u+0x00000026u; // 800BBD5C
  c->r[5]=c->r[5]+0x00006FF8u; // 800BBD60
  c->r[6]=c->r[13]+0xFFFF83A8u; // 800BBD64
  c->r[7]=c->r[13]+0xFFFF83A0u; // 800BBD68
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800BBD6C
  c->lr=0x800BBD74u; f_80484674(c); // 800BBD70
L_800BBD74:;
  cmps(c,0,(int32_t)c->r[30],0); // 800BBD74
  c->r[31]=R16(c->r[30]+0x0000001Cu); // 800BBD78
  if (!crb(c,2)) { goto L_800BBDA4; } // 800BBD7C
  c->r[3]=0u+0x806D0000u; // 800BBD80
  c->r[5]=0u+0x806D0000u; // 800BBD84
  c->r[3]=c->r[3]+0x00007018u; // 800BBD88
  c->r[4]=0u+0x00000026u; // 800BBD8C
  c->r[5]=c->r[5]+0x00006FF8u; // 800BBD90
  c->r[6]=c->r[13]+0xFFFF83A8u; // 800BBD94
  c->r[7]=c->r[13]+0xFFFF83A0u; // 800BBD98
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800BBD9C
  c->lr=0x800BBDA4u; f_80484674(c); // 800BBDA0
L_800BBDA4:;
  c->r[6]=R16(c->r[30]+0x0000001Eu); // 800BBDA4
  c->r[4]=c->r[29]|c->r[29]; // 800BBDA8
  c->r[5]=c->r[31]|c->r[31]; // 800BBDAC
  c->r[3]=c->r[28]+0x00000008u; // 800BBDB0
  c->r[7]=0u+0x00000003u; // 800BBDB4
  c->r[8]=0u+0x00000000u; // 800BBDB8
  c->r[9]=0u+0x00000000u; // 800BBDBC
  c->r[10]=0u+0x00000000u; // 800BBDC0
  c->lr=0x800BBDC8u; f_803A60BC(c); // 800BBDC4
  {uint32_t ea=c->r[2]+0xFFFFA050u; c->f[1]=c->ps1[1]=RF32(ea);} // 800BBDC8
  c->r[3]=c->r[28]+0x00000008u; // 800BBDCC
  c->r[4]=0u+0x00000001u; // 800BBDD0
  c->r[5]=0u+0x00000001u; // 800BBDD4
  c->f[2]=c->f[1]; // 800BBDD8
  c->r[6]=0u+0x00000000u; // 800BBDDC
  c->f[3]=c->f[1]; // 800BBDE0
  c->r[7]=0u+0x00000000u; // 800BBDE4
  c->r[8]=0u+0x00000000u; // 800BBDE8
  c->lr=0x800BBDF0u; f_803A6310(c); // 800BBDEC
L_800BBDF0:;
  c->r[11]=c->r[1]+0x00000020u; // 800BBDF0
  c->lr=0x800BBDF8u; { c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800BBDF4
  c->r[0]=R32(c->r[1]+0x00000024u); // 800BBDF8
  c->lr=c->r[0]; // 800BBDFC
  c->r[1]=c->r[1]+0x00000020u; // 800BBE00
  return; // 800BBE04
}

// fn_800BBE08
void f_800BBE08(Ctx* __restrict c) {
  trace_call(0x800BBE08u);
  {uint32_t ea=c->r[1]+0xFFFFFF40u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BBE08
  c->r[0]=c->lr; // 800BBE0C
  W32(c->r[1]+0x000000C4u,c->r[0]); // 800BBE10
  c->r[11]=c->r[1]+0x00000090u; // 800BBE14
  {uint32_t ea=c->r[1]+0x000000B0u; WF64(ea,c->f[31]);} // 800BBE18
  {uint32_t ea=c->r[1]+0x000000B8u; psq_store(c,31,ea,0,0);} // 800BBE1C
  {uint32_t ea=c->r[1]+0x000000A0u; WF64(ea,c->f[30]);} // 800BBE20
  {uint32_t ea=c->r[1]+0x000000A8u; psq_store(c,30,ea,0,0);} // 800BBE24
  {uint32_t ea=c->r[1]+0x00000090u; WF64(ea,c->f[29]);} // 800BBE28
  {uint32_t ea=c->r[1]+0x00000098u; psq_store(c,29,ea,0,0);} // 800BBE2C
  c->lr=0x800BBE34u; { W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800BBE30
  c->f[29]=c->f[1]; // 800BBE34
  c->r[23]=c->r[5]|c->r[5]; // 800BBE38
  c->r[24]=c->r[6]|c->r[6]; // 800BBE3C
  c->r[31]=c->r[4]|c->r[4]; // 800BBE40
  c->r[25]=c->r[7]|c->r[7]; // 800BBE44
  c->r[26]=c->r[8]|c->r[8]; // 800BBE48
  c->r[3]=c->r[23]|c->r[23]; // 800BBE4C
  c->r[4]=c->r[24]|c->r[24]; // 800BBE50
  c->lr=0x800BBE58u; f_800BAFE8(c); // 800BBE54
  W32(c->r[1]+0x0000004Cu,c->r[4]); // 800BBE58
  {uint32_t ea=c->r[1]+0x0000004Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800BBE5C
  W32(c->r[1]+0x00000048u,c->r[3]); // 800BBE60
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[1]); // 800BBE64
  {uint32_t ea=c->r[1]+0x00000048u; c->f[2]=c->ps1[2]=RF32(ea);} // 800BBE68
  {uint32_t ea=c->r[1]+0x00000050u; WF32(ea,c->f[2]);} // 800BBE6C
  c->f[0]=c->ps1[0]=S(std::fma(c->f[2],c->f[2],c->f[0])); // 800BBE70
  {uint32_t ea=c->r[1]+0x00000054u; WF32(ea,c->f[1]);} // 800BBE74
  fcmp(c,0,c->f[0],c->f[29]); // 800BBE78
  if (!crb(c,1)) { goto L_800BBF00; } // 800BBE7C
  {uint32_t ea=c->r[2]+0xFFFFA098u; c->f[30]=RF64(ea);} // 800BBE80
  c->r[27]=0u+0x00000001u; // 800BBE84
  {uint32_t ea=c->r[2]+0xFFFFA0A0u; c->f[29]=c->ps1[29]=RF32(ea);} // 800BBE88
  c->r[30]=0u+0x00000008u; // 800BBE8C
  c->r[29]=0u+0x43300000u; // 800BBE90
L_800BBE94:;
  c->r[0]=addc(c,~c->r[27],0x0000000Fu,1); // 800BBE94
  W32(c->r[1]+0x00000058u,c->r[29]); // 800BBE98
  c->r[0]=c->r[0]^0x80000000u; // 800BBE9C
  {uint32_t ea=c->r[23]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 800BBEA0
  W32(c->r[1]+0x0000005Cu,c->r[0]); // 800BBEA4
  c->r[28]=c->r[31]+c->r[30]; // 800BBEA8
  {uint32_t ea=c->r[25]+0x00000000u; c->f[2]=c->ps1[2]=RF32(ea);} // 800BBEAC
  {uint32_t ea=c->r[1]+0x00000058u; c->f[0]=RF64(ea);} // 800BBEB0
  {uint32_t ea=c->r[24]+0x00000000u; c->f[3]=c->ps1[3]=RF32(ea);} // 800BBEB4
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[30]); // 800BBEB8
  {uint32_t ea=c->r[26]+0x00000000u; c->f[4]=c->ps1[4]=RF32(ea);} // 800BBEBC
  c->f[31]=c->ps1[31]=S(c->f[29]*c->f[0]); // 800BBEC0
  c->f[5]=c->f[31]; // 800BBEC4
  c->lr=0x800BBECCu; f_804E10BC(c); // 800BBEC8
  {uint32_t ea=c->r[28]+0x00000000u; WF32(ea,c->f[1]);} // 800BBECC
  c->f[5]=c->f[31]; // 800BBED0
  {uint32_t ea=c->r[23]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 800BBED4
  {uint32_t ea=c->r[25]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 800BBED8
  {uint32_t ea=c->r[24]+0x00000004u; c->f[3]=c->ps1[3]=RF32(ea);} // 800BBEDC
  {uint32_t ea=c->r[26]+0x00000004u; c->f[4]=c->ps1[4]=RF32(ea);} // 800BBEE0
  c->lr=0x800BBEE8u; f_804E10BC(c); // 800BBEE4
  c->r[27]=c->r[27]+0x00000001u; // 800BBEE8
  {uint32_t ea=c->r[28]+0x00000004u; WF32(ea,c->f[1]);} // 800BBEEC
  cmps(c,0,(int32_t)c->r[27],15); // 800BBEF0
  c->r[30]=c->r[30]+0x00000008u; // 800BBEF4
  if (crb(c,0)) { IRQCHK(c); goto L_800BBE94; } // 800BBEF8
  goto L_800BBFEC; // 800BBEFC
L_800BBF00:;
  c->r[3]=c->r[23]|c->r[23]; // 800BBF00
  c->r[4]=c->r[24]|c->r[24]; // 800BBF04
  c->lr=0x800BBF0Cu; f_800BAFE8(c); // 800BBF08
  W32(c->r[1]+0x00000038u,c->r[3]); // 800BBF0C
  c->r[3]=c->r[1]+0x00000020u; // 800BBF10
  {uint32_t ea=c->r[2]+0xFFFFA0A0u; c->f[2]=c->ps1[2]=RF32(ea);} // 800BBF14
  W32(c->r[1]+0x0000003Cu,c->r[4]); // 800BBF18
  {uint32_t ea=c->r[1]+0x00000038u; c->f[1]=c->ps1[1]=RF32(ea);} // 800BBF1C
  {uint32_t ea=c->r[1]+0x0000003Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800BBF20
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[1]); // 800BBF24
  c->f[2]=c->ps1[2]=S(c->f[2]*c->f[0]); // 800BBF28
  c->lr=0x800BBF30u; f_800BAF90(c); // 800BBF2C
  c->r[4]=R32(c->r[3]+0x00000000u); // 800BBF30
  c->r[28]=0u+0x00000001u; // 800BBF34
  c->r[0]=R32(c->r[3]+0x00000004u); // 800BBF38
  c->r[30]=0u+0x00000008u; // 800BBF3C
  W32(c->r[1]+0x00000040u,c->r[4]); // 800BBF40
  c->r[29]=0u+0x43300000u; // 800BBF44
  {uint32_t ea=c->r[2]+0xFFFFA098u; c->f[29]=RF64(ea);} // 800BBF48
  {uint32_t ea=c->r[1]+0x00000040u; c->f[1]=c->ps1[1]=RF32(ea);} // 800BBF4C
  W32(c->r[1]+0x00000044u,c->r[0]); // 800BBF50
  c->f[30]=c->ps1[30]=S(c->f[1]); // 800BBF54
  {uint32_t ea=c->r[1]+0x00000044u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BBF58
  W32(c->r[1]+0x00000010u,c->r[4]); // 800BBF5C
  c->f[31]=c->ps1[31]=S(c->f[0]); // 800BBF60
  W32(c->r[1]+0x00000014u,c->r[0]); // 800BBF64
  {uint32_t ea=c->r[1]+0x00000050u; WF32(ea,c->f[1]);} // 800BBF68
  {uint32_t ea=c->r[1]+0x00000054u; WF32(ea,c->f[0]);} // 800BBF6C
L_800BBF70:;
  c->r[0]=c->r[28]^0x80000000u; // 800BBF70
  W32(c->r[1]+0x0000005Cu,c->r[0]); // 800BBF74
  c->r[3]=c->r[1]+0x00000018u; // 800BBF78
  W32(c->r[1]+0x00000058u,c->r[29]); // 800BBF7C
  {uint32_t ea=c->r[1]+0x00000058u; c->f[0]=RF64(ea);} // 800BBF80
  W32(c->r[1]+0x00000064u,c->r[0]); // 800BBF84
  c->f[1]=c->ps1[1]=S(c->f[0]-c->f[29]); // 800BBF88
  W32(c->r[1]+0x00000060u,c->r[29]); // 800BBF8C
  {uint32_t ea=c->r[1]+0x00000060u; c->f[0]=RF64(ea);} // 800BBF90
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[30]); // 800BBF94
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[29]); // 800BBF98
  c->f[2]=c->ps1[2]=S(c->f[0]*c->f[31]); // 800BBF9C
  c->lr=0x800BBFA4u; f_800BAF90(c); // 800BBFA0
  c->r[5]=R32(c->r[3]+0x00000000u); // 800BBFA4
  c->r[4]=c->r[1]+0x00000028u; // 800BBFA8
  c->r[0]=R32(c->r[3]+0x00000004u); // 800BBFAC
  c->r[3]=c->r[31]|c->r[31]; // 800BBFB0
  W32(c->r[1]+0x00000008u,c->r[5]); // 800BBFB4
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 800BBFB8
  W32(c->r[1]+0x00000028u,c->r[5]); // 800BBFBC
  W32(c->r[1]+0x0000002Cu,c->r[0]); // 800BBFC0
  c->lr=0x800BBFC8u; f_800BAF9C(c); // 800BBFC4
  W32(c->r[1]+0x00000034u,c->r[4]); // 800BBFC8
  c->r[4]=c->r[1]+0x00000030u; // 800BBFCC
  W32(c->r[1]+0x00000030u,c->r[3]); // 800BBFD0
  c->r[3]=c->r[31]+c->r[30]; // 800BBFD4
  c->lr=0x800BBFDCu; f_800BAF7C(c); // 800BBFD8
  c->r[28]=c->r[28]+0x00000001u; // 800BBFDC
  c->r[30]=c->r[30]+0x00000008u; // 800BBFE0
  cmps(c,0,(int32_t)c->r[28],15); // 800BBFE4
  if (crb(c,0)) { IRQCHK(c); goto L_800BBF70; } // 800BBFE8
L_800BBFEC:;
  c->r[11]=c->r[1]+0x00000090u; // 800BBFEC
  {uint32_t ea=c->r[1]+0x000000B8u; psq_load(c,31,ea,0,0);} // 800BBFF0
  {uint32_t ea=c->r[1]+0x000000B0u; c->f[31]=RF64(ea);} // 800BBFF4
  {uint32_t ea=c->r[1]+0x000000A8u; psq_load(c,30,ea,0,0);} // 800BBFF8
  {uint32_t ea=c->r[1]+0x000000A0u; c->f[30]=RF64(ea);} // 800BBFFC
  {uint32_t ea=c->r[1]+0x00000098u; psq_load(c,29,ea,0,0);} // 800BC000
  {uint32_t ea=c->r[1]+0x00000090u; c->f[29]=RF64(ea);} // 800BC004
  c->lr=0x800BC00Cu; { c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800BC008
  c->r[0]=R32(c->r[1]+0x000000C4u); // 800BC00C
  c->lr=c->r[0]; // 800BC010
  c->r[1]=c->r[1]+0x000000C0u; // 800BC014
  return; // 800BC018
}

// fn_800BC01C
void f_800BC01C(Ctx* __restrict c) {
  trace_call(0x800BC01Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BC01C
  c->r[0]=c->lr; // 800BC020
  c->r[4]=0u+0x806D0000u; // 800BC024
  W32(c->r[1]+0x00000014u,c->r[0]); // 800BC028
  c->r[4]=c->r[4]+0x00007028u; // 800BC02C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800BC030
  c->r[31]=c->r[3]|c->r[3]; // 800BC034
  W32(c->r[3]+0x00000000u,c->r[4]); // 800BC038
  c->lr=0x800BC040u; f_800BD158(c); // 800BC03C
  c->r[3]=c->r[31]|c->r[31]; // 800BC040
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800BC044
  c->r[0]=R32(c->r[1]+0x00000014u); // 800BC048
  c->lr=c->r[0]; // 800BC04C
  c->r[1]=c->r[1]+0x00000010u; // 800BC050
  return; // 800BC054
}

// fn_800BC058
void f_800BC058(Ctx* __restrict c) {
  trace_call(0x800BC058u);
  return; // 800BC058
}

// fn_800BC05C
void f_800BC05C(Ctx* __restrict c) {
  trace_call(0x800BC05Cu);
  {uint32_t ea=c->r[1]+0xFFFFFEF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BC05C
  c->r[0]=c->lr; // 800BC060
  W32(c->r[1]+0x00000114u,c->r[0]); // 800BC064
  c->r[11]=c->r[1]+0x000000D0u; // 800BC068
  {uint32_t ea=c->r[1]+0x00000100u; WF64(ea,c->f[31]);} // 800BC06C
  {uint32_t ea=c->r[1]+0x00000108u; psq_store(c,31,ea,0,0);} // 800BC070
  {uint32_t ea=c->r[1]+0x000000F0u; WF64(ea,c->f[30]);} // 800BC074
  {uint32_t ea=c->r[1]+0x000000F8u; psq_store(c,30,ea,0,0);} // 800BC078
  {uint32_t ea=c->r[1]+0x000000E0u; WF64(ea,c->f[29]);} // 800BC07C
  {uint32_t ea=c->r[1]+0x000000E8u; psq_store(c,29,ea,0,0);} // 800BC080
  {uint32_t ea=c->r[1]+0x000000D0u; WF64(ea,c->f[28]);} // 800BC084
  {uint32_t ea=c->r[1]+0x000000D8u; psq_store(c,28,ea,0,0);} // 800BC088
  c->lr=0x800BC090u; f_803A9BD0(c); // 800BC08C
  c->r[4]=0u+0xFF000000u; // 800BC090
  c->r[0]=0u+0x00000020u; // 800BC094
  c->r[5]=c->r[4]+0xFFFFFFF0u; // 800BC098
  c->r[15]=c->r[3]|c->r[3]; // 800BC09C
  c->r[4]=0u+0x00000000u; // 800BC0A0
  c->ctr=c->r[0]; // 800BC0A4
L_800BC0A8:;
  c->r[6]=c->r[3]+c->r[4]; // 800BC0A8
  c->r[4]=c->r[4]+0x00000050u; // 800BC0AC
  c->r[0]=R32(c->r[6]+0x00000020u); // 800BC0B0
  c->r[0]=c->r[0]&c->r[5]; // 800BC0B4
  W32(c->r[6]+0x00000020u,c->r[0]); // 800BC0B8
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800BC0A8; } // 800BC0BC
  c->r[0]=0u+0x806D0000u; // 800BC0C0
  W32(c->r[1]+0x0000007Cu,c->r[0]); // 800BC0C4
  c->r[3]=0u+0x80740000u; // 800BC0C8
  c->r[23]=0u+0x806D0000u; // 800BC0CC
  c->r[24]=c->r[3]+0xFFFFFF5Cu; // 800BC0D0
  c->r[3]=R32(c->r[1]+0x0000007Cu); // 800BC0D4
  c->r[0]=0u+0x80740000u; // 800BC0D8
  c->r[26]=0u+0x806D0000u; // 800BC0DC
  c->r[3]=c->r[3]+0xFFFFC230u; // 800BC0E0
  W32(c->r[1]+0x0000007Cu,c->r[3]); // 800BC0E4
  c->r[3]=c->r[0]|c->r[0]; // 800BC0E8
  c->r[21]=0u+0x806A0000u; // 800BC0EC
  c->r[22]=0u+0x806D0000u; // 800BC0F0
  c->r[27]=0u+0x806D0000u; // 800BC0F4
  c->r[3]=c->r[3]+0x00004C10u; // 800BC0F8
  c->r[0]=0u+0x00000000u; // 800BC0FC
  {uint32_t ea=c->r[2]+0xFFFFA0B0u; c->f[28]=c->ps1[28]=RF32(ea);} // 800BC100
  c->r[23]=c->r[23]+0xFFFFCD54u; // 800BC104
  {uint32_t ea=c->r[2]+0xFFFFA0ACu; c->f[29]=c->ps1[29]=RF32(ea);} // 800BC108
  c->r[26]=c->r[26]+0xFFFFC37Cu; // 800BC10C
  W32(c->r[1]+0x00000070u,c->r[3]); // 800BC110
  c->r[28]=0u+0x80730000u; // 800BC114
  c->r[21]=c->r[21]+0x00000AA8u; // 800BC118
  c->r[29]=0u+0x80730000u; // 800BC11C
  W32(c->r[1]+0x00000078u,c->r[0]); // 800BC120
  c->r[22]=c->r[22]+0xFFFFC240u; // 800BC124
  c->r[30]=0u+0x80730000u; // 800BC128
  c->r[27]=c->r[27]+0xFFFFC3B8u; // 800BC12C
  c->r[31]=0u+0x80730000u; // 800BC130
  c->r[18]=0u+0x00000000u; // 800BC134
  c->r[25]=0u+0x00000001u; // 800BC138
L_800BC13C:;
  c->r[0]=0u+0x00000000u; // 800BC13C
  W8(c->r[1]+0x00000030u,c->r[0]); // 800BC140
  c->r[3]=c->r[1]+0x00000030u; // 800BC144
  c->lr=0x800BC14Cu; f_80046EFC(c); // 800BC148
  c->r[4]=c->r[18]|c->r[18]; // 800BC14C
  c->lr=0x800BC154u; f_80046DC8(c); // 800BC150
  c->lr=0x800BC158u; f_800AC4A0(c); // 800BC154
  cmps(c,0,(int32_t)c->r[3],2); // 800BC158
  if (crb(c,2)) { goto L_800BC710; } // 800BC15C
  c->r[0]=0u+0x00000000u; // 800BC160
  W8(c->r[1]+0x0000002Cu,c->r[0]); // 800BC164
  c->r[3]=c->r[1]+0x0000002Cu; // 800BC168
  c->lr=0x800BC170u; f_80046EFC(c); // 800BC16C
  c->r[4]=c->r[18]|c->r[18]; // 800BC170
  c->lr=0x800BC178u; f_80046DC8(c); // 800BC174
  c->r[4]=0u+0x00000000u; // 800BC178
  c->lr=0x800BC180u; f_800ACFF4(c); // 800BC17C
  cmps(c,0,(int32_t)c->r[3],0); // 800BC180
  if (crb(c,2)) { goto L_800BC710; } // 800BC184
  c->r[0]=R8(c->r[13]+0xFFFFBB9Au); // 800BC188
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800BC18C
  if (!crb(c,2)) { goto L_800BC1C8; } // 800BC190
  c->r[3]=0u+0x80730000u; // 800BC194
  c->r[3]=c->r[3]+0x000069F8u; // 800BC198
  c->lr=0x800BC1A0u; f_80299654(c); // 800BC19C
  c->r[3]=0u+0x80730000u; // 800BC1A0
  c->r[0]=R32(c->r[1]+0x0000007Cu); // 800BC1A4
  W32(c->r[3]+0x000069F8u,c->r[0]); // 800BC1A8
  c->r[4]=0u+0x80050000u; // 800BC1AC
  c->r[5]=0u+0x80750000u; // 800BC1B0
  c->r[3]=c->r[3]+0x000069F8u; // 800BC1B4
  c->r[4]=c->r[4]+0xFFFF9D7Cu; // 800BC1B8
  c->r[5]=c->r[5]+0x00002D04u; // 800BC1BC
  c->lr=0x800BC1C4u; f_803A92B8(c); // 800BC1C0
  W8(c->r[13]+0xFFFFBB9Au,c->r[25]); // 800BC1C4
L_800BC1C8:;
  c->r[3]=c->r[29]+0x000069F8u; // 800BC1C8
  c->r[3]=R32(c->r[3]+0x00000004u); // 800BC1CC
  c->lr=0x800BC1D4u; f_804CC8D4(c); // 800BC1D0
  W32(c->r[1]+0x00000034u,c->r[3]); // 800BC1D4
  c->r[3]=c->r[1]+0x00000034u; // 800BC1D8
  c->r[4]=c->r[1]+0x00000058u; // 800BC1DC
  c->lr=0x800BC1E4u; f_804C7AC0(c); // 800BC1E0
  c->r[0]=0u+0x00000000u; // 800BC1E4
  W8(c->r[1]+0x00000028u,c->r[0]); // 800BC1E8
  c->r[3]=c->r[1]+0x00000028u; // 800BC1EC
  c->lr=0x800BC1F4u; f_80046EFC(c); // 800BC1F0
  c->r[4]=c->r[18]|c->r[18]; // 800BC1F4
  c->r[6]=c->r[1]+0x00000064u; // 800BC1F8
  c->r[5]=0u+0x00000000u; // 800BC1FC
  c->r[7]=0u+0x00000000u; // 800BC200
  c->r[8]=0u+0x00000000u; // 800BC204
  c->r[9]=0u+0x00000000u; // 800BC208
  c->lr=0x800BC210u; f_800B2400(c); // 800BC20C
  {uint32_t ea=c->r[1]+0x00000038u; WF32(ea,c->f[29]);} // 800BC210
  c->r[16]=0u+0xFFFFFFFFu; // 800BC214
  {uint32_t ea=c->r[2]+0xFFFFA0A8u; c->f[30]=c->ps1[30]=RF32(ea);} // 800BC218
  c->r[19]=0u+0x00000000u; // 800BC21C
  c->r[14]=0u+0x00000000u; // 800BC220
L_800BC224:;
  c->r[3]=c->r[15]+c->r[14]; // 800BC224
  c->r[17]=c->r[3]+0x00000004u; // 800BC228
  c->r[3]=R32(c->r[3]+0x00000020u); // 800BC22C
  c->r[0]=rotl(c->r[3],0)&0x40000000u; cr0(c,c->r[0]); // 800BC230
  if (!crb(c,2)) { goto L_800BC324; } // 800BC234
  c->r[0]=rotl(c->r[3],0)&0x20000000u; cr0(c,c->r[0]); // 800BC238
  if (!crb(c,2)) { goto L_800BC324; } // 800BC23C
  c->r[0]=rotl(c->r[3],0)&0x80000000u; cr0(c,c->r[0]); // 800BC240
  if (crb(c,2)) { goto L_800BC324; } // 800BC244
  c->r[3]=c->r[17]|c->r[17]; // 800BC248
  c->r[4]=c->r[1]+0x00000058u; // 800BC24C
  c->r[5]=c->r[1]+0x00000038u; // 800BC250
  c->lr=0x800BC258u; f_804E27B8(c); // 800BC254
  {uint32_t ea=c->r[17]+0x0000000Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 800BC258
  c->f[0]=c->ps1[0]=S(c->f[3]*c->f[3]); // 800BC25C
  fcmp(c,0,c->f[1],c->f[0]); // 800BC260
  setcrb(c,2,crb(c,0)|crb(c,2)); // 800BC264
  if (!crb(c,2)) { goto L_800BC324; } // 800BC268
  {uint32_t ea=c->r[1]+0x00000058u; c->f[2]=c->ps1[2]=RF32(ea);} // 800BC26C
  c->r[3]=c->r[1]+0x00000048u; // 800BC270
  {uint32_t ea=c->r[1]+0x0000005Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800BC274
  {uint32_t ea=c->r[1]+0x00000060u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BC278
  {uint32_t ea=c->r[1]+0x00000048u; WF32(ea,c->f[2]);} // 800BC27C
  {uint32_t ea=c->r[1]+0x0000004Cu; WF32(ea,c->f[1]);} // 800BC280
  {uint32_t ea=c->r[1]+0x00000050u; WF32(ea,c->f[0]);} // 800BC284
  {uint32_t ea=c->r[3]+0x00000000u; psq_load(c,5,ea,0,0);} // 800BC288
  {uint32_t ea=c->r[17]+0x00000000u; psq_load(c,4,ea,0,0);} // 800BC28C
  {double t0=S(c->f[5]-c->f[4]), t1=S(c->ps1[5]-c->ps1[4]); c->f[4]=t0; c->ps1[4]=t1;} // 800BC290
  {uint32_t ea=c->r[3]+0x00000000u; psq_store(c,4,ea,0,0);} // 800BC294
  {uint32_t ea=c->r[3]+0x00000008u; psq_load(c,5,ea,1,0);} // 800BC298
  {uint32_t ea=c->r[17]+0x00000008u; psq_load(c,4,ea,1,0);} // 800BC29C
  {double t0=S(c->f[5]-c->f[4]), t1=S(c->ps1[5]-c->ps1[4]); c->f[4]=t0; c->ps1[4]=t1;} // 800BC2A0
  {uint32_t ea=c->r[3]+0x00000008u; psq_store(c,4,ea,1,0);} // 800BC2A4
  {uint32_t ea=c->r[3]+0x00000004u; psq_load(c,5,ea,0,0);} // 800BC2A8
  {double t0=S(c->f[5]*c->f[5]), t1=S(c->ps1[5]*c->ps1[5]); c->f[4]=t0; c->ps1[4]=t1;} // 800BC2AC
  {uint32_t ea=c->r[1]+0x00000048u; c->f[5]=c->ps1[5]=RF32(ea);} // 800BC2B0
  {double t0=S(c->f[4]+c->ps1[4]), t1=S(c->ps1[5]); c->f[4]=t0; c->ps1[4]=t1;} // 800BC2B4
  {double t0=S(std::fma(c->f[5],c->ps1[4],c->f[4])), t1=S(std::fma(c->ps1[5],c->ps1[4],c->ps1[4])); c->f[5]=t0; c->ps1[5]=t1;} // 800BC2B8
  fcmp(c,0,c->f[5],c->f[28]); // 800BC2BC
  c->r[0]=c->cr; // 800BC2C0
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 800BC2C4
  if (!crb(c,2)) { goto L_800BC310; } // 800BC2C8
  {uint32_t ea=c->r[1]+0x0000003Cu; WF32(ea,c->f[2]);} // 800BC2CC
  c->r[3]=c->r[17]|c->r[17]; // 800BC2D0
  c->r[4]=c->r[1]+0x0000003Cu; // 800BC2D4
  {uint32_t ea=c->r[1]+0x00000040u; WF32(ea,c->f[1]);} // 800BC2D8
  {uint32_t ea=c->r[1]+0x00000044u; WF32(ea,c->f[0]);} // 800BC2DC
  c->lr=0x800BC2E4u; f_80383EF4(c); // 800BC2E0
  {uint32_t ea=c->r[21]+0x00000004u; c->f[3]=c->ps1[3]=RF32(ea);} // 800BC2E4
  c->f[0]=frsqrte(c->f[1]); // 800BC2E8
  {uint32_t ea=c->r[21]+0x00000008u; c->f[4]=c->ps1[4]=RF32(ea);} // 800BC2EC
  c->f[2]=c->ps1[2]=S(c->f[0]*c->f[0]); // 800BC2F0
  c->f[3]=c->ps1[3]=S(c->f[0]*c->f[3]); // 800BC2F4
  c->f[2]=c->ps1[2]=S(-std::fma(c->f[2],c->f[1],-c->f[4])); // 800BC2F8
  c->f[0]=c->ps1[0]=S(c->f[2]*c->f[3]); // 800BC2FC
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[0]); // 800BC300
  {uint32_t ea=c->r[17]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800BC304
  c->f[0]=c->ps1[0]=S(c->f[1]-c->f[0]); // 800BC308
  goto L_800BC314; // 800BC30C
L_800BC310:;
  c->f[0]=-c->f[3]; // 800BC310
L_800BC314:;
  fcmp(c,0,c->f[0],c->f[30]); // 800BC314
  if (!crb(c,0)) { goto L_800BC324; } // 800BC318
  c->f[30]=c->f[0]; // 800BC31C
  c->r[16]=c->r[19]|c->r[19]; // 800BC320
L_800BC324:;
  c->r[19]=c->r[19]+0x00000001u; // 800BC324
  c->r[14]=c->r[14]+0x00000050u; // 800BC328
  cmps(c,0,(int32_t)c->r[19],32); // 800BC32C
  if (crb(c,0)) { IRQCHK(c); goto L_800BC224; } // 800BC330
  cmps(c,0,(int32_t)c->r[16],0); // 800BC334
  if (crb(c,0)) { goto L_800BC710; } // 800BC338
  c->r[3]=(uint32_t)((int32_t)c->r[16]*(int32_t)80); // 800BC33C
  c->r[0]=((c->r[18])&0x20)?0u:(c->r[25]<<((c->r[18])&31)); // 800BC340
  c->r[0]=rotl(c->r[0],0)&0x0000000Fu; // 800BC344
  c->r[14]=c->r[15]+c->r[3]; // 800BC348
  c->r[3]=R32(c->r[14]+0x00000020u); // 800BC34C
  c->r[0]=c->r[0]|0x01000000u; // 800BC350
  c->r[0]=c->r[3]|c->r[0]; // 800BC354
  W32(c->r[14]+0x00000020u,c->r[0]); // 800BC358
  c->r[0]=rotl(c->r[0],0)&0x60000000u; cr0(c,c->r[0]); // 800BC35C
  if (!crb(c,2)) { goto L_800BC710; } // 800BC360
  c->r[0]=R8(c->r[13]+0xFFFFBB99u); // 800BC364
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800BC368
  if (!crb(c,2)) { goto L_800BC3A4; } // 800BC36C
  c->r[3]=0u+0x80730000u; // 800BC370
  c->r[3]=c->r[3]+0x000069C0u; // 800BC374
  c->lr=0x800BC37Cu; f_8029D954(c); // 800BC378
  c->r[3]=c->r[30]+0x000069C0u; // 800BC37C
  c->r[0]=c->r[22]+0x00000008u; // 800BC380
  c->r[4]=0u+0x80050000u; // 800BC384
  c->r[5]=0u+0x80750000u; // 800BC388
  W32(c->r[3]+0x00000010u,c->r[22]); // 800BC38C
  c->r[4]=c->r[4]+0xFFFF9DB8u; // 800BC390
  c->r[5]=c->r[5]+0x00002D1Cu; // 800BC394
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 800BC398
  c->lr=0x800BC3A0u; f_803A92B8(c); // 800BC39C
  W8(c->r[13]+0xFFFFBB99u,c->r[25]); // 800BC3A0
L_800BC3A4:;
  cmps(c,0,(int32_t)c->r[18],0); // 800BC3A4
  c->r[0]=c->r[18]|c->r[18]; // 800BC3A8
  if (!crb(c,0)) { goto L_800BC3B8; } // 800BC3AC
  c->r[3]=c->r[30]+0x000069C0u; // 800BC3B0
  c->r[0]=R32(c->r[3]+0x00000030u); // 800BC3B4
L_800BC3B8:;
  cmpu(c,0,c->r[0],0x00000003u); // 800BC3B8
  if (!crb(c,1)) { goto L_800BC3C4; } // 800BC3BC
  c->r[0]=0u+0x00000000u; // 800BC3C0
L_800BC3C4:;
  c->r[5]=(uint32_t)((int32_t)c->r[0]*(int32_t)10904); // 800BC3C4
  c->r[3]=c->r[30]+0x000069C0u; // 800BC3C8
  c->r[6]=R32(c->r[3]+0x00000014u); // 800BC3CC
  c->r[4]=0u+0x00000005u; // 800BC3D0
  c->r[3]=R32(c->r[1]+0x00000070u); // 800BC3D4
  c->r[0]=R32(c->r[1]+0x00000078u); // 800BC3D8
  c->r[5]=c->r[6]+c->r[5]; // 800BC3DC
  c->r[17]=R32(c->r[5]+0x0000000Cu); // 800BC3E0
  c->r[3]=c->r[3]+c->r[0]; // 800BC3E4
  c->lr=0x800BC3ECu; f_80052BC8(c); // 800BC3E8
  c->r[0]=c->r[17]&c->r[3]; cr0(c,c->r[0]); // 800BC3EC
  if (crb(c,2)) { goto L_800BC710; } // 800BC3F0
  c->r[3]=R32(c->r[14]+0x00000020u); // 800BC3F4
  c->r[0]=0u+0x00000000u; // 800BC3F8
  W32(c->r[1]+0x00000074u,c->r[0]); // 800BC3FC
  c->r[17]=0u+0x00000000u; // 800BC400
  c->r[0]=rotl(c->r[3],0)&0xFFFFFF0Fu; // 800BC404
  c->r[0]=(rotl(c->r[18],4)&0x000000F0u)|(c->r[0]&~0x000000F0u); // 800BC408
  W32(c->r[14]+0x00000020u,c->r[0]); // 800BC40C
L_800BC410:;
  c->r[0]=R32(c->r[1]+0x00000074u); // 800BC410
  cmps(c,0,(int32_t)c->r[17],(int32_t)c->r[16]); // 800BC414
  c->r[14]=c->r[15]+c->r[0]; // 800BC418
  if (crb(c,2)) { goto L_800BC430; } // 800BC41C
  c->r[0]=R32(c->r[14]+0x00000020u); // 800BC420
  c->r[0]=c->r[0]|0x20000000u; // 800BC424
  W32(c->r[14]+0x00000020u,c->r[0]); // 800BC428
  goto L_800BC678; // 800BC42C
L_800BC430:;
  c->r[0]=R32(c->r[14]+0x00000020u); // 800BC430
  c->r[0]=c->r[0]|0x40000000u; // 800BC434
  W32(c->r[14]+0x00000020u,c->r[0]); // 800BC438
  c->r[0]=R32(c->r[14]+0x00000014u); // 800BC43C
  cmps(c,0,(int32_t)c->r[0],0); // 800BC440
  if (crb(c,0)) { goto L_800BC678; } // 800BC444
  c->r[0]=R32(c->r[14]+0x00000018u); // 800BC448
  cmps(c,0,(int32_t)c->r[0],0); // 800BC44C
  if (crb(c,0)) { goto L_800BC678; } // 800BC450
  c->r[0]=R8(c->r[13]+0xFFFFBBF0u); // 800BC454
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800BC458
  if (!crb(c,2)) { goto L_800BC494; } // 800BC45C
  c->r[3]=0u+0x80740000u; // 800BC460
  c->r[3]=c->r[3]+0xFFFFFF5Cu; // 800BC464
  c->lr=0x800BC46Cu; f_800A1FCC(c); // 800BC468
  c->r[0]=c->r[23]+0x00000028u; // 800BC46C
  c->r[4]=0u+0x80050000u; // 800BC470
  c->r[5]=0u+0x80750000u; // 800BC474
  W32(c->r[24]+0x000000A4u,c->r[23]); // 800BC478
  c->r[3]=c->r[24]|c->r[24]; // 800BC47C
  c->r[4]=c->r[4]+0x000009E8u; // 800BC480
  W32(c->r[24]+0x000000A8u,c->r[0]); // 800BC484
  c->r[5]=c->r[5]+0x00002CECu; // 800BC488
  c->lr=0x800BC490u; f_803A92B8(c); // 800BC48C
  W8(c->r[13]+0xFFFFBBF0u,c->r[25]); // 800BC490
L_800BC494:;
  c->r[0]=0u+0x00000004u; // 800BC494
  c->r[20]=R32(c->r[14]+0x00000018u); // 800BC498
  c->r[6]=0u+0x00000000u; // 800BC49C
  c->r[5]=R32(c->r[14]+0x00000014u); // 800BC4A0
  c->r[3]=0u+0x00000000u; // 800BC4A4
  c->ctr=c->r[0]; // 800BC4A8
L_800BC4AC:;
  c->r[4]=c->r[24]+c->r[3]; // 800BC4AC
  c->r[0]=R32(c->r[4]+0x00000958u); // 800BC4B0
  cmps(c,0,(int32_t)c->r[5],(int32_t)c->r[0]); // 800BC4B4
  if (crb(c,2)) { goto L_800BC4C8; } // 800BC4B8
  c->r[6]=c->r[6]+0x00000001u; // 800BC4BC
  c->r[3]=c->r[3]+0x000008B0u; // 800BC4C0
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800BC4AC; } // 800BC4C4
L_800BC4C8:;
  cmps(c,0,(int32_t)c->r[6],4); // 800BC4C8
  c->r[0]=0u+0xFFFFFFFFu; // 800BC4CC
  if (!crb(c,0)) { goto L_800BC4D8; } // 800BC4D0
  c->r[0]=c->r[6]|c->r[6]; // 800BC4D4
L_800BC4D8:;
  cmps(c,0,(int32_t)c->r[0],0); // 800BC4D8
  if (crb(c,0)) { goto L_800BC678; } // 800BC4DC
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)2224); // 800BC4E0
  c->r[4]=c->r[20]|c->r[20]; // 800BC4E4
  W32(c->r[1]+0x00000080u,c->r[0]); // 800BC4E8
  c->r[3]=c->r[24]+c->r[0]; // 800BC4EC
  c->r[3]=c->r[3]+0x00000130u; // 800BC4F0
  c->lr=0x800BC4F8u; f_800A1D5C(c); // 800BC4F4
  cmps(c,0,(int32_t)c->r[3],0); // 800BC4F8
  c->r[19]=c->r[3]|c->r[3]; // 800BC4FC
  if (crb(c,2)) { goto L_800BC678; } // 800BC500
  cmpu(c,0,c->r[20],0x000003FFu); // 800BC504
  c->r[5]=c->r[20]|c->r[20]; // 800BC508
  if (!crb(c,1)) { goto L_800BC514; } // 800BC50C
  c->r[5]=0u+0x00000000u; // 800BC510
L_800BC514:;
  c->r[0]=R32(c->r[1]+0x00000080u); // 800BC514
  c->r[3]=rotl(c->r[5],0)&0x00000007u; // 800BC518
  c->r[3]=((c->r[3])&0x20)?0u:(c->r[25]<<((c->r[3])&31)); // 800BC51C
  c->r[4]=c->r[24]+c->r[0]; // 800BC520
  c->r[0]=sraw(c,c->r[5],3); // 800BC524
  c->r[14]=c->r[4]+0x000000B0u; // 800BC528
  c->r[0]=R8(c->r[14]+c->r[0]); // 800BC52C
  c->r[0]=c->r[3]&c->r[0]; cr0(c,c->r[0]); // 800BC530
  if (!crb(c,2)) { goto L_800BC598; } // 800BC534
  c->r[0]=R8(c->r[13]+0xFFFFBB87u); // 800BC538
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800BC53C
  if (!crb(c,2)) { goto L_800BC578; } // 800BC540
  c->r[3]=0u+0x80730000u; // 800BC544
  c->r[3]=c->r[3]+0x00006160u; // 800BC548
  c->lr=0x800BC550u; f_8008C1BC(c); // 800BC54C
  c->r[3]=c->r[28]+0x00006160u; // 800BC550
  c->r[0]=c->r[26]+0x00000028u; // 800BC554
  c->r[4]=0u+0x80050000u; // 800BC558
  c->r[5]=0u+0x80750000u; // 800BC55C
  W32(c->r[3]+0x000000A4u,c->r[26]); // 800BC560
  c->r[4]=c->r[4]+0xFFFF9F5Cu; // 800BC564
  c->r[5]=c->r[5]+0x00002CE0u; // 800BC568
  W32(c->r[3]+0x000000A8u,c->r[0]); // 800BC56C
  c->lr=0x800BC574u; f_803A92B8(c); // 800BC570
  W8(c->r[13]+0xFFFFBB87u,c->r[25]); // 800BC574
L_800BC578:;
  c->r[3]=0u+0x80730000u; // 800BC578
  c->r[4]=c->r[19]|c->r[19]; // 800BC57C
  c->r[3]=c->r[3]+0x00006160u; // 800BC580
  c->lr=0x800BC588u; f_8008CD98(c); // 800BC584
  c->r[0]=R32(c->r[1]+0x00000080u); // 800BC588
  c->r[3]=c->r[24]+c->r[0]; // 800BC58C
  c->r[0]=0u+0x00000002u; // 800BC590
  W32(c->r[3]+0x00000950u,c->r[0]); // 800BC594
L_800BC598:;
  cmpu(c,0,c->r[20],0x000003FFu); // 800BC598
  if (!crb(c,1)) { goto L_800BC5A4; } // 800BC59C
  c->r[20]=0u+0x00000000u; // 800BC5A0
L_800BC5A4:;
  c->r[4]=sraw(c,c->r[20],3); // 800BC5A4
  c->r[0]=rotl(c->r[20],0)&0x00000007u; // 800BC5A8
  c->r[0]=((c->r[0])&0x20)?0u:(c->r[25]<<((c->r[0])&31)); // 800BC5AC
  c->r[3]=R8(c->r[14]+c->r[4]); // 800BC5B0
  c->r[0]=rotl(c->r[0],0)&0x000000FFu; // 800BC5B4
  c->r[0]=c->r[3]|c->r[0]; // 800BC5B8
  W8(c->r[14]+c->r[4],c->r[0]); // 800BC5BC
  c->r[0]=R8(c->r[19]+0x00000000u); // 800BC5C0
  cmps(c,0,(int32_t)c->r[0],71); // 800BC5C4
  if (!crb(c,2)) { goto L_800BC5F0; } // 800BC5C8
  c->r[0]=R8(c->r[19]+0x00000001u); // 800BC5CC
  cmps(c,0,(int32_t)c->r[0],95); // 800BC5D0
  if (!crb(c,2)) { goto L_800BC5F0; } // 800BC5D4
  c->r[3]=c->r[19]+0x00000002u; // 800BC5D8
  c->lr=0x800BC5E0u; f_803B613C(c); // 800BC5DC
  cmpu(c,0,c->r[3],0x000003FFu); // 800BC5E0
  if (!crb(c,1)) { goto L_800BC5F4; } // 800BC5E4
  c->r[3]=0u+0xFFFFFFFFu; // 800BC5E8
  goto L_800BC5F4; // 800BC5EC
L_800BC5F0:;
  c->r[3]=0u+0xFFFFFFFFu; // 800BC5F0
L_800BC5F4:;
  cmpu(c,0,c->r[3],0x000003FFu); // 800BC5F4
  if (crb(c,1)) { goto L_800BC61C; } // 800BC5F8
  c->r[4]=sraw(c,c->r[3],3); // 800BC5FC
  c->r[0]=rotl(c->r[3],0)&0x00000007u; // 800BC600
  c->r[4]=c->r[24]+c->r[4]; // 800BC604
  c->r[0]=((c->r[0])&0x20)?0u:(c->r[25]<<((c->r[0])&31)); // 800BC608
  c->r[3]=R8(c->r[4]+0x0000236Cu); // 800BC60C
  c->r[0]=rotl(c->r[0],0)&0x000000FFu; // 800BC610
  c->r[0]=c->r[3]|c->r[0]; // 800BC614
  W8(c->r[4]+0x0000236Cu,c->r[0]); // 800BC618
L_800BC61C:;
  c->r[0]=R8(c->r[19]+0x00000000u); // 800BC61C
  cmps(c,0,(int32_t)c->r[0],67); // 800BC620
  if (!crb(c,2)) { goto L_800BC64C; } // 800BC624
  c->r[0]=R8(c->r[19]+0x00000001u); // 800BC628
  cmps(c,0,(int32_t)c->r[0],95); // 800BC62C
  if (!crb(c,2)) { goto L_800BC64C; } // 800BC630
  c->r[3]=c->r[19]+0x00000002u; // 800BC634
  c->lr=0x800BC63Cu; f_803B613C(c); // 800BC638
  cmpu(c,0,c->r[3],0x0000003Fu); // 800BC63C
  if (!crb(c,1)) { goto L_800BC650; } // 800BC640
  c->r[3]=0u+0xFFFFFFFFu; // 800BC644
  goto L_800BC650; // 800BC648
L_800BC64C:;
  c->r[3]=0u+0xFFFFFFFFu; // 800BC64C
L_800BC650:;
  cmpu(c,0,c->r[3],0x0000003Fu); // 800BC650
  if (crb(c,1)) { goto L_800BC678; } // 800BC654
  c->r[4]=sraw(c,c->r[3],3); // 800BC658
  c->r[0]=rotl(c->r[3],0)&0x00000007u; // 800BC65C
  c->r[4]=c->r[24]+c->r[4]; // 800BC660
  c->r[0]=((c->r[0])&0x20)?0u:(c->r[25]<<((c->r[0])&31)); // 800BC664
  c->r[3]=R8(c->r[4]+0x000023ECu); // 800BC668
  c->r[0]=rotl(c->r[0],0)&0x000000FFu; // 800BC66C
  c->r[0]=c->r[3]|c->r[0]; // 800BC670
  W8(c->r[4]+0x000023ECu,c->r[0]); // 800BC674
L_800BC678:;
  c->r[17]=c->r[17]+0x00000001u; // 800BC678
  c->r[3]=R32(c->r[1]+0x00000074u); // 800BC67C
  cmps(c,0,(int32_t)c->r[17],32); // 800BC680
  c->r[3]=c->r[3]+0x00000050u; // 800BC684
  W32(c->r[1]+0x00000074u,c->r[3]); // 800BC688
  if (crb(c,0)) { IRQCHK(c); goto L_800BC410; } // 800BC68C
  c->r[0]=0u+0x00000000u; // 800BC690
  W8(c->r[1]+0x00000024u,c->r[0]); // 800BC694
  c->r[3]=c->r[1]+0x00000024u; // 800BC698
  c->lr=0x800BC6A0u; f_800462D8(c); // 800BC69C
  c->lr=0x800BC6A4u; f_801119E0(c); // 800BC6A0
  c->r[0]=R8(c->r[13]+0xFFFFBB86u); // 800BC6A4
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800BC6A8
  if (!crb(c,2)) { goto L_800BC6E4; } // 800BC6AC
  c->r[3]=0u+0x80730000u; // 800BC6B0
  c->r[3]=c->r[3]+0x00006040u; // 800BC6B4
  c->lr=0x800BC6BCu; f_8004B784(c); // 800BC6B8
  c->r[3]=c->r[31]+0x00006040u; // 800BC6BC
  c->r[0]=c->r[27]+0x00000028u; // 800BC6C0
  c->r[4]=0u+0x80050000u; // 800BC6C4
  c->r[5]=0u+0x80750000u; // 800BC6C8
  W32(c->r[3]+0x000000A4u,c->r[27]); // 800BC6CC
  c->r[4]=c->r[4]+0xFFFF9F98u; // 800BC6D0
  c->r[5]=c->r[5]+0x00002CF8u; // 800BC6D4
  W32(c->r[3]+0x000000A8u,c->r[0]); // 800BC6D8
  c->lr=0x800BC6E0u; f_803A92B8(c); // 800BC6DC
  W8(c->r[13]+0xFFFFBB86u,c->r[25]); // 800BC6E0
L_800BC6E4:;
  c->r[3]=0u+0x80730000u; // 800BC6E4
  c->r[4]=0u+0x80690000u; // 800BC6E8
  {uint32_t ea=c->r[2]+0xFFFFA0B4u; c->f[1]=c->ps1[1]=RF32(ea);} // 800BC6EC
  c->r[3]=c->r[3]+0x00006040u; // 800BC6F0
  c->r[4]=c->r[4]+0xFFFFE2E0u; // 800BC6F4
  c->r[5]=0u+0x00000000u; // 800BC6F8
  c->r[6]=0u+0xFFFFFFFFu; // 800BC6FC
  c->r[7]=0u+0x00000000u; // 800BC700
  c->r[8]=0u+0x00000000u; // 800BC704
  c->r[9]=0u+0x00000001u; // 800BC708
  c->lr=0x800BC710u; f_8004BFE0(c); // 800BC70C
L_800BC710:;
  c->r[18]=c->r[18]+0x00000001u; // 800BC710
  c->r[3]=R32(c->r[1]+0x00000078u); // 800BC714
  cmps(c,0,(int32_t)c->r[18],2); // 800BC718
  c->r[3]=c->r[3]+0x00000078u; // 800BC71C
  W32(c->r[1]+0x00000078u,c->r[3]); // 800BC720
  if (crb(c,0)) { IRQCHK(c); goto L_800BC13C; } // 800BC724
  {uint32_t ea=c->r[2]+0xFFFFA0ACu; c->f[29]=c->ps1[29]=RF32(ea);} // 800BC728
  c->r[17]=0u+0x00000000u; // 800BC72C
  {uint32_t ea=c->r[2]+0xFFFFA0B8u; c->f[30]=c->ps1[30]=RF32(ea);} // 800BC730
  c->r[22]=0u+0x00000000u; // 800BC734
  {uint32_t ea=c->r[2]+0xFFFFA0B4u; c->f[31]=c->ps1[31]=RF32(ea);} // 800BC738
  c->r[14]=0u+0x00000000u; // 800BC73C
  {uint32_t ea=c->r[2]+0xFFFFA0BCu; c->f[28]=c->ps1[28]=RF32(ea);} // 800BC740
  c->r[16]=0u+0x00000001u; // 800BC744
  c->r[21]=0u+0x00000002u; // 800BC748
L_800BC74C:;
  c->r[3]=c->r[15]+c->r[22]; // 800BC74C
  c->r[19]=c->r[3]+0x00000004u; // 800BC750
  c->r[3]=R32(c->r[3]+0x00000020u); // 800BC754
  c->r[0]=rotl(c->r[3],0)&0x80000000u; cr0(c,c->r[0]); // 800BC758
  c->r[20]=rotl(c->r[3],0)&0x0000000Fu; // 800BC75C
  if (crb(c,2)) { goto L_800BC96C; } // 800BC760
  c->r[18]=0u+0x00000000u; // 800BC764
  c->r[23]=0u+0x00000000u; // 800BC768
L_800BC76C:;
  c->r[3]=R32(c->r[19]+0x0000001Cu); // 800BC76C
  c->r[0]=rotl(c->r[3],0)&0x40000000u; cr0(c,c->r[0]); // 800BC770
  if (!crb(c,2)) { goto L_800BC880; } // 800BC774
  c->r[0]=rotl(c->r[3],0)&0x20000000u; cr0(c,c->r[0]); // 800BC778
  if (!crb(c,2)) { goto L_800BC880; } // 800BC77C
  c->r[0]=rotl(c->r[3],0)&0x01000000u; cr0(c,c->r[0]); // 800BC780
  if (crb(c,2)) { goto L_800BC7EC; } // 800BC784
  c->r[0]=((c->r[18])&0x20)?0u:(c->r[16]<<((c->r[18])&31)); // 800BC788
  c->r[0]=c->r[20]&c->r[0]; cr0(c,c->r[0]); // 800BC78C
  if (crb(c,2)) { goto L_800BC7EC; } // 800BC790
  W8(c->r[1]+0x00000020u,c->r[14]); // 800BC794
  c->r[3]=c->r[1]+0x00000020u; // 800BC798
  c->lr=0x800BC7A0u; f_8004714C(c); // 800BC79C
  c->r[24]=c->r[19]+c->r[23]; // 800BC7A0
  {uint32_t ea=c->r[3]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 800BC7A4
  {uint32_t ea=c->r[24]+0x00000020u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BC7A8
  c->f[0]=c->ps1[0]=S(std::fma(c->f[30],c->f[1],c->f[0])); // 800BC7AC
  {uint32_t ea=c->r[24]+0x00000020u; WF32(ea,c->f[0]);} // 800BC7B0
  fcmp(c,0,c->f[0],c->f[31]); // 800BC7B4
  if (!crb(c,1)) { goto L_800BC7C0; } // 800BC7B8
  {uint32_t ea=c->r[24]+0x00000020u; WF32(ea,c->f[31]);} // 800BC7BC
L_800BC7C0:;
  W8(c->r[1]+0x0000001Cu,c->r[14]); // 800BC7C0
  c->r[3]=c->r[1]+0x0000001Cu; // 800BC7C4
  c->lr=0x800BC7CCu; f_8004714C(c); // 800BC7C8
  {uint32_t ea=c->r[3]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 800BC7CC
  {uint32_t ea=c->r[24]+0x00000028u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BC7D0
  c->f[0]=c->ps1[0]=S(std::fma(c->f[28],c->f[1],c->f[0])); // 800BC7D4
  {uint32_t ea=c->r[24]+0x00000028u; WF32(ea,c->f[0]);} // 800BC7D8
  fcmp(c,0,c->f[0],c->f[31]); // 800BC7DC
  if (!crb(c,1)) { goto L_800BC8D4; } // 800BC7E0
  {uint32_t ea=c->r[24]+0x00000028u; WF32(ea,c->f[31]);} // 800BC7E4
  goto L_800BC8D4; // 800BC7E8
L_800BC7EC:;
  c->r[24]=c->r[19]+c->r[23]; // 800BC7EC
  {uint32_t ea=c->r[24]+0x00000020u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BC7F0
  fcmp(c,0,c->f[0],c->f[31]); // 800BC7F4
  if (!crb(c,0)) { goto L_800BC828; } // 800BC7F8
  W8(c->r[1]+0x00000018u,c->r[14]); // 800BC7FC
  c->r[3]=c->r[1]+0x00000018u; // 800BC800
  c->lr=0x800BC808u; f_8004714C(c); // 800BC804
  {uint32_t ea=c->r[3]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 800BC808
  {uint32_t ea=c->r[24]+0x00000020u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BC80C
  c->f[0]=c->ps1[0]=S(std::fma(c->f[30],c->f[1],c->f[0])); // 800BC810
  {uint32_t ea=c->r[24]+0x00000020u; WF32(ea,c->f[0]);} // 800BC814
  fcmp(c,0,c->f[0],c->f[31]); // 800BC818
  if (!crb(c,1)) { goto L_800BC854; } // 800BC81C
  {uint32_t ea=c->r[24]+0x00000020u; WF32(ea,c->f[31]);} // 800BC820
  goto L_800BC854; // 800BC824
L_800BC828:;
  if (!crb(c,1)) { goto L_800BC854; } // 800BC828
  W8(c->r[1]+0x00000014u,c->r[14]); // 800BC82C
  c->r[3]=c->r[1]+0x00000014u; // 800BC830
  c->lr=0x800BC838u; f_8004714C(c); // 800BC834
  {uint32_t ea=c->r[3]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 800BC838
  {uint32_t ea=c->r[24]+0x00000020u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BC83C
  c->f[0]=c->ps1[0]=S(-std::fma(c->f[30],c->f[1],-c->f[0])); // 800BC840
  {uint32_t ea=c->r[24]+0x00000020u; WF32(ea,c->f[0]);} // 800BC844
  fcmp(c,0,c->f[0],c->f[31]); // 800BC848
  if (!crb(c,0)) { goto L_800BC854; } // 800BC84C
  {uint32_t ea=c->r[24]+0x00000020u; WF32(ea,c->f[31]);} // 800BC850
L_800BC854:;
  W8(c->r[1]+0x00000010u,c->r[14]); // 800BC854
  c->r[3]=c->r[1]+0x00000010u; // 800BC858
  c->lr=0x800BC860u; f_8004714C(c); // 800BC85C
  {uint32_t ea=c->r[3]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 800BC860
  {uint32_t ea=c->r[24]+0x00000028u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BC864
  c->f[0]=c->ps1[0]=S(std::fma(c->f[28],c->f[1],c->f[0])); // 800BC868
  {uint32_t ea=c->r[24]+0x00000028u; WF32(ea,c->f[0]);} // 800BC86C
  fcmp(c,0,c->f[0],c->f[31]); // 800BC870
  if (!crb(c,1)) { goto L_800BC8D4; } // 800BC874
  {uint32_t ea=c->r[24]+0x00000028u; WF32(ea,c->f[31]);} // 800BC878
  goto L_800BC8D4; // 800BC87C
L_800BC880:;
  W8(c->r[1]+0x0000000Cu,c->r[14]); // 800BC880
  c->r[3]=c->r[1]+0x0000000Cu; // 800BC884
  c->lr=0x800BC88Cu; f_8004714C(c); // 800BC888
  c->r[24]=c->r[19]+c->r[23]; // 800BC88C
  {uint32_t ea=c->r[3]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 800BC890
  {uint32_t ea=c->r[24]+0x00000020u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BC894
  c->f[0]=c->ps1[0]=S(-std::fma(c->f[30],c->f[1],-c->f[0])); // 800BC898
  {uint32_t ea=c->r[24]+0x00000020u; WF32(ea,c->f[0]);} // 800BC89C
  fcmp(c,0,c->f[0],c->f[29]); // 800BC8A0
  if (!crb(c,0)) { goto L_800BC8AC; } // 800BC8A4
  {uint32_t ea=c->r[24]+0x00000020u; WF32(ea,c->f[29]);} // 800BC8A8
L_800BC8AC:;
  W8(c->r[1]+0x00000008u,c->r[14]); // 800BC8AC
  c->r[3]=c->r[1]+0x00000008u; // 800BC8B0
  c->lr=0x800BC8B8u; f_8004714C(c); // 800BC8B4
  {uint32_t ea=c->r[3]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 800BC8B8
  {uint32_t ea=c->r[24]+0x00000028u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BC8BC
  c->f[0]=c->ps1[0]=S(-std::fma(c->f[30],c->f[1],-c->f[0])); // 800BC8C0
  {uint32_t ea=c->r[24]+0x00000028u; WF32(ea,c->f[0]);} // 800BC8C4
  fcmp(c,0,c->f[0],c->f[29]); // 800BC8C8
  if (!crb(c,0)) { goto L_800BC8D4; } // 800BC8CC
  {uint32_t ea=c->r[24]+0x00000028u; WF32(ea,c->f[29]);} // 800BC8D0
L_800BC8D4:;
  c->r[18]=c->r[18]+0x00000001u; // 800BC8D4
  c->r[23]=c->r[23]+0x00000004u; // 800BC8D8
  cmps(c,0,(int32_t)c->r[18],2); // 800BC8DC
  if (crb(c,0)) { IRQCHK(c); goto L_800BC76C; } // 800BC8E0
  c->r[0]=R32(c->r[19]+0x0000001Cu); // 800BC8E4
  c->r[3]=rotl(c->r[0],0)&0x06000000u; // 800BC8E8
  c->r[0]=c->r[3]+0xFA000000u; // 800BC8EC
  cmpu(c,0,c->r[0],0x00000000u); // 800BC8F0
  if (!crb(c,2)) { goto L_800BC96C; } // 800BC8F4
  c->r[5]=0u+0x00000000u; // 800BC8F8
  c->r[3]=0u+0x00000000u; // 800BC8FC
  c->ctr=c->r[21]; // 800BC900
L_800BC904:;
  c->r[4]=c->r[19]+c->r[3]; // 800BC904
  {uint32_t ea=c->r[4]+0x00000020u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BC908
  fcmp(c,0,c->f[0],c->f[29]); // 800BC90C
  if (crb(c,1)) { goto L_800BC92C; } // 800BC910
  {uint32_t ea=c->r[4]+0x00000028u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BC914
  fcmp(c,0,c->f[0],c->f[29]); // 800BC918
  if (crb(c,1)) { goto L_800BC92C; } // 800BC91C
  c->r[5]=c->r[5]+0x00000001u; // 800BC920
  c->r[3]=c->r[3]+0x00000004u; // 800BC924
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800BC904; } // 800BC928
L_800BC92C:;
  cmps(c,0,(int32_t)c->r[5],2); // 800BC92C
  if (crb(c,0)) { goto L_800BC96C; } // 800BC930
  c->r[0]=R32(c->r[19]+0x0000001Cu); // 800BC934
  c->r[0]=c->r[0]|0x08000000u; // 800BC938
  W32(c->r[19]+0x0000001Cu,c->r[0]); // 800BC93C
  c->r[0]=R32(c->r[19]+0x00000010u); // 800BC940
  cmps(c,0,(int32_t)c->r[0],0); // 800BC944
  if (crb(c,0)) { goto L_800BC958; } // 800BC948
  c->r[0]=R32(c->r[19]+0x00000014u); // 800BC94C
  cmps(c,0,(int32_t)c->r[0],0); // 800BC950
  if (!crb(c,0)) { goto L_800BC964; } // 800BC954
L_800BC958:;
  c->r[0]=R32(c->r[19]+0x0000001Cu); // 800BC958
  c->r[0]=rotl(c->r[0],0)&0x10000000u; cr0(c,c->r[0]); // 800BC95C
  if (crb(c,2)) { goto L_800BC96C; } // 800BC960
L_800BC964:;
  W32(c->r[19]+0x0000001Cu,c->r[14]); // 800BC964
  W8(c->r[19]+0x00000030u,c->r[14]); // 800BC968
L_800BC96C:;
  c->r[17]=c->r[17]+0x00000001u; // 800BC96C
  c->r[22]=c->r[22]+0x00000050u; // 800BC970
  cmps(c,0,(int32_t)c->r[17],32); // 800BC974
  if (crb(c,0)) { IRQCHK(c); goto L_800BC74C; } // 800BC978
  c->r[11]=c->r[1]+0x000000D0u; // 800BC97C
  {uint32_t ea=c->r[1]+0x00000108u; psq_load(c,31,ea,0,0);} // 800BC980
  {uint32_t ea=c->r[1]+0x00000100u; c->f[31]=RF64(ea);} // 800BC984
  {uint32_t ea=c->r[1]+0x000000F8u; psq_load(c,30,ea,0,0);} // 800BC988
  {uint32_t ea=c->r[1]+0x000000F0u; c->f[30]=RF64(ea);} // 800BC98C
  {uint32_t ea=c->r[1]+0x000000E8u; psq_load(c,29,ea,0,0);} // 800BC990
  {uint32_t ea=c->r[1]+0x000000E0u; c->f[29]=RF64(ea);} // 800BC994
  {uint32_t ea=c->r[1]+0x000000D8u; psq_load(c,28,ea,0,0);} // 800BC998
  {uint32_t ea=c->r[1]+0x000000D0u; c->f[28]=RF64(ea);} // 800BC99C
  c->lr=0x800BC9A4u; f_803A9C1C(c); // 800BC9A0
  c->r[0]=R32(c->r[1]+0x00000114u); // 800BC9A4
  c->lr=c->r[0]; // 800BC9A8
  c->r[1]=c->r[1]+0x00000110u; // 800BC9AC
  return; // 800BC9B0
}

// fn_800BC9B4
void f_800BC9B4(Ctx* __restrict c) {
  trace_call(0x800BC9B4u);
  {uint32_t ea=c->r[1]+0xFFFFFEC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BC9B4
  c->r[0]=c->lr; // 800BC9B8
  W32(c->r[1]+0x00000144u,c->r[0]); // 800BC9BC
  c->r[11]=c->r[1]+0x000000E0u; // 800BC9C0
  {uint32_t ea=c->r[1]+0x00000130u; WF64(ea,c->f[31]);} // 800BC9C4
  {uint32_t ea=c->r[1]+0x00000138u; psq_store(c,31,ea,0,0);} // 800BC9C8
  {uint32_t ea=c->r[1]+0x00000120u; WF64(ea,c->f[30]);} // 800BC9CC
  {uint32_t ea=c->r[1]+0x00000128u; psq_store(c,30,ea,0,0);} // 800BC9D0
  {uint32_t ea=c->r[1]+0x00000110u; WF64(ea,c->f[29]);} // 800BC9D4
  {uint32_t ea=c->r[1]+0x00000118u; psq_store(c,29,ea,0,0);} // 800BC9D8
  {uint32_t ea=c->r[1]+0x00000100u; WF64(ea,c->f[28]);} // 800BC9DC
  {uint32_t ea=c->r[1]+0x00000108u; psq_store(c,28,ea,0,0);} // 800BC9E0
  {uint32_t ea=c->r[1]+0x000000F0u; WF64(ea,c->f[27]);} // 800BC9E4
  {uint32_t ea=c->r[1]+0x000000F8u; psq_store(c,27,ea,0,0);} // 800BC9E8
  {uint32_t ea=c->r[1]+0x000000E0u; WF64(ea,c->f[26]);} // 800BC9EC
  {uint32_t ea=c->r[1]+0x000000E8u; psq_store(c,26,ea,0,0);} // 800BC9F0
  c->lr=0x800BC9F8u; f_803A9BD0(c); // 800BC9F4
  c->r[0]=R8(c->r[13]+0xFFFFBB7Au); // 800BC9F8
  c->r[15]=c->r[3]|c->r[3]; // 800BC9FC
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800BCA00
  if (!crb(c,2)) { goto L_800BCA34; } // 800BCA04
  c->r[14]=0u+0x80730000u; // 800BCA08
  c->r[3]=c->r[14]+0x00003B68u; // 800BCA0C
  c->lr=0x800BCA14u; f_80045E54(c); // 800BCA10
  c->r[5]=0u+0x806D0000u; // 800BCA14
  c->r[0]=0u+0x00000001u; // 800BCA18
  c->r[5]=c->r[5]+0xFFFFC6A8u; // 800BCA1C
  c->r[4]=c->r[14]+0x00003B68u; // 800BCA20
  c->r[3]=c->r[5]+0x0000003Cu; // 800BCA24
  W32(c->r[4]+0x000000A4u,c->r[5]); // 800BCA28
  W32(c->r[4]+0x000000B0u,c->r[3]); // 800BCA2C
  W8(c->r[13]+0xFFFFBB7Au,c->r[0]); // 800BCA30
L_800BCA34:;
  c->r[3]=0u+0x80730000u; // 800BCA34
  c->r[3]=c->r[3]+0x00003B68u; // 800BCA38
  c->lr=0x800BCA40u; f_8004767C(c); // 800BCA3C
  cmps(c,0,(int32_t)c->r[3],0); // 800BCA40
  if (crb(c,2)) { goto L_800BCED0; } // 800BCA44
  c->r[25]=0u+0x00000000u; // 800BCA48
  c->r[22]=0u+0x80740000u; // 800BCA4C
  c->r[23]=c->r[25]|c->r[25]; // 800BCA50
  c->r[17]=c->r[1]+0x00000028u; // 800BCA54
  c->r[22]=c->r[22]+0x00004C10u; // 800BCA58
  c->r[14]=0u+0x00000000u; // 800BCA5C
  c->r[16]=0u+0x00000000u; // 800BCA60
  c->r[18]=0u+0xFFFFFFFFu; // 800BCA64
  c->r[19]=0u+0x00000004u; // 800BCA68
  c->r[20]=0u+0x00000003u; // 800BCA6C
  c->r[21]=0u+0x00000002u; // 800BCA70
L_800BCA74:;
  W8(c->r[1]+0x00000020u,c->r[23]); // 800BCA74
  c->r[3]=c->r[1]+0x00000020u; // 800BCA78
  c->lr=0x800BCA80u; f_80046EFC(c); // 800BCA7C
  c->r[4]=c->r[25]|c->r[25]; // 800BCA80
  c->lr=0x800BCA88u; f_80046DC8(c); // 800BCA84
  c->r[4]=0u+0x00000001u; // 800BCA88
  c->lr=0x800BCA90u; f_800ACFF4(c); // 800BCA8C
  cmps(c,0,(int32_t)c->r[3],0); // 800BCA90
  if (crb(c,2)) { goto L_800BCADC; } // 800BCA94
  c->r[24]=c->r[22]+c->r[14]; // 800BCA98
  c->r[4]=0u+0x00000005u; // 800BCA9C
  c->r[3]=c->r[24]|c->r[24]; // 800BCAA0
  c->lr=0x800BCAA8u; f_80052BC8(c); // 800BCAA4
  c->r[0]=rotl(c->r[3],0)&0x00000800u; cr0(c,c->r[0]); // 800BCAA8
  if (crb(c,2)) { goto L_800BCAB8; } // 800BCAAC
  W32(c->r[17]+c->r[16],c->r[21]); // 800BCAB0
  goto L_800BCAE0; // 800BCAB4
L_800BCAB8:;
  c->r[3]=c->r[24]|c->r[24]; // 800BCAB8
  c->r[4]=0u+0x00000005u; // 800BCABC
  c->lr=0x800BCAC4u; f_80052BC8(c); // 800BCAC0
  c->r[0]=rotl(c->r[3],0)&0x00000400u; cr0(c,c->r[0]); // 800BCAC4
  if (crb(c,2)) { goto L_800BCAD4; } // 800BCAC8
  W32(c->r[17]+c->r[16],c->r[20]); // 800BCACC
  goto L_800BCAE0; // 800BCAD0
L_800BCAD4:;
  W32(c->r[17]+c->r[16],c->r[19]); // 800BCAD4
  goto L_800BCAE0; // 800BCAD8
L_800BCADC:;
  W32(c->r[17]+c->r[16],c->r[18]); // 800BCADC
L_800BCAE0:;
  c->r[25]=c->r[25]+0x00000001u; // 800BCAE0
  c->r[16]=c->r[16]+0x00000004u; // 800BCAE4
  cmps(c,0,(int32_t)c->r[25],2); // 800BCAE8
  c->r[14]=c->r[14]+0x00000078u; // 800BCAEC
  if (crb(c,0)) { IRQCHK(c); goto L_800BCA74; } // 800BCAF0
  c->r[0]=0u+0x00000002u; // 800BCAF4
  c->r[4]=c->r[1]+0x00000028u; // 800BCAF8
  c->r[19]=0u+0xFFFFFFFFu; // 800BCAFC
  c->r[3]=0u+0x00000000u; // 800BCB00
  c->ctr=c->r[0]; // 800BCB04
L_800BCB08:;
  c->r[5]=R32(c->r[4]+c->r[3]); // 800BCB08
  cmps(c,0,(int32_t)c->r[5],0); // 800BCB0C
  if (crb(c,0)) { goto L_800BCB50; } // 800BCB10
  c->r[0]=0u+0x00000002u; // 800BCB14
  c->r[19]=c->r[5]|c->r[5]; // 800BCB18
  c->r[4]=c->r[1]+0x00000028u; // 800BCB1C
  c->r[3]=0u+0x00000000u; // 800BCB20
  c->ctr=c->r[0]; // 800BCB24
L_800BCB28:;
  c->r[0]=R32(c->r[4]+c->r[3]); // 800BCB28
  cmps(c,0,(int32_t)c->r[0],0); // 800BCB2C
  if (crb(c,0)) { goto L_800BCB44; } // 800BCB30
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[5]); // 800BCB34
  if (crb(c,2)) { goto L_800BCB44; } // 800BCB38
  c->r[19]=0u+0xFFFFFFFFu; // 800BCB3C
  goto L_800BCB58; // 800BCB40
L_800BCB44:;
  c->r[3]=c->r[3]+0x00000004u; // 800BCB44
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800BCB28; } // 800BCB48
  goto L_800BCB58; // 800BCB4C
L_800BCB50:;
  c->r[3]=c->r[3]+0x00000004u; // 800BCB50
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800BCB08; } // 800BCB54
L_800BCB58:;
  c->r[24]=0u+0x806D0000u; // 800BCB58
  {uint32_t ea=c->r[2]+0xFFFFA0D0u; c->f[31]=c->ps1[31]=RF32(ea);} // 800BCB5C
  {uint32_t ea=c->r[2]+0xFFFFA0C8u; c->f[28]=c->ps1[28]=RF32(ea);} // 800BCB60
  c->r[23]=c->r[1]+0x00000028u; // 800BCB64
  {uint32_t ea=c->r[2]+0xFFFFA0C4u; c->f[27]=c->ps1[27]=RF32(ea);} // 800BCB68
  c->r[24]=c->r[24]+0xFFFFCA00u; // 800BCB6C
  {uint32_t ea=c->r[2]+0xFFFFA0CCu; c->f[29]=c->ps1[29]=RF32(ea);} // 800BCB70
  c->r[22]=0u+0x00000000u; // 800BCB74
  {uint32_t ea=c->r[2]+0xFFFFA0ACu; c->f[30]=c->ps1[30]=RF32(ea);} // 800BCB78
  c->r[31]=0u+0x00000000u; // 800BCB7C
  c->r[29]=0u+0x80760000u; // 800BCB80
  c->r[27]=0u+0x00000001u; // 800BCB84
  c->r[28]=0u+0x00000000u; // 800BCB88
  c->r[25]=0u+0x80050000u; // 800BCB8C
  c->r[14]=0u+0x80750000u; // 800BCB90
L_800BCB94:;
  c->r[3]=c->r[15]+c->r[31]; // 800BCB94
  c->r[20]=c->r[3]+0x00000004u; // 800BCB98
  c->r[3]=R32(c->r[3]+0x00000020u); // 800BCB9C
  c->r[0]=rotl(c->r[3],0)&0x80000000u; cr0(c,c->r[0]); // 800BCBA0
  c->r[16]=rotl(c->r[3],0)&0x0000000Fu; // 800BCBA4
  if (crb(c,2)) { goto L_800BCEC0; } // 800BCBA8
  c->r[0]=rotl(c->r[3],0)&0x40000000u; cr0(c,c->r[0]); // 800BCBAC
  c->r[18]=0u+0x00000000u; // 800BCBB0
  if (crb(c,2)) { goto L_800BCBBC; } // 800BCBB4
  c->r[18]=0u+0x00000001u; // 800BCBB8
L_800BCBBC:;
  c->r[0]=rotl(c->r[3],0)&0x20000000u; cr0(c,c->r[0]); // 800BCBBC
  if (crb(c,2)) { goto L_800BCBC8; } // 800BCBC0
  c->r[18]=0u+0x00000002u; // 800BCBC4
L_800BCBC8:;
  c->r[0]=R8(c->r[13]+0xFFFFBC14u); // 800BCBC8
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800BCBCC
  if (!crb(c,2)) { goto L_800BCBF4; } // 800BCBD0
  c->r[3]=c->r[13]+0xFFFFBC18u; // 800BCBD4
  c->lr=0x800BCBDCu; f_802974E0(c); // 800BCBD8
  W32(c->r[13]+0xFFFFBC18u,c->r[24]); // 800BCBDC
  c->r[4]=c->r[25]+0x00000684u; // 800BCBE0
  c->r[5]=c->r[14]+0x00002D10u; // 800BCBE4
  c->r[3]=c->r[13]+0xFFFFBC18u; // 800BCBE8
  c->lr=0x800BCBF0u; f_803A92B8(c); // 800BCBEC
  W8(c->r[13]+0xFFFFBC14u,c->r[27]); // 800BCBF0
L_800BCBF4:;
  c->r[4]=c->r[20]|c->r[20]; // 800BCBF4
  c->r[5]=c->r[1]+0x00000030u; // 800BCBF8
  c->r[3]=c->r[13]+0xFFFFBC18u; // 800BCBFC
  c->r[6]=0u+0xFFFFFFFFu; // 800BCC00
  c->lr=0x800BCC08u; f_80297C78(c); // 800BCC04
  {uint32_t ea=c->r[1]+0x00000038u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BCC08
  fcmp(c,0,c->f[0],c->f[30]); // 800BCC0C
  setcrb(c,2,crb(c,0)|crb(c,2)); // 800BCC10
  if (!crb(c,2)) { goto L_800BCEAC; } // 800BCC14
  W8(c->r[1]+0x0000001Cu,c->r[28]); // 800BCC18
  c->r[3]=c->r[1]+0x0000001Cu; // 800BCC1C
  c->lr=0x800BCC24u; f_800486E8(c); // 800BCC20
  c->r[4]=0u+0x00000006u; // 800BCC24
  c->lr=0x800BCC2Cu; f_800484D4(c); // 800BCC28
  {uint32_t ea=c->r[1]+0x00000030u; c->f[2]=c->ps1[2]=RF32(ea);} // 800BCC2C
  cmps(c,0,(int32_t)c->r[19],0); // 800BCC30
  {uint32_t ea=c->r[1]+0x00000034u; c->f[1]=c->ps1[1]=RF32(ea);} // 800BCC34
  {uint32_t ea=c->r[1]+0x00000038u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BCC38
  {uint32_t ea=c->r[1]+0x0000003Cu; WF32(ea,c->f[2]);} // 800BCC3C
  {uint32_t ea=c->r[1]+0x00000040u; WF32(ea,c->f[1]);} // 800BCC40
  {uint32_t ea=c->r[1]+0x00000044u; WF32(ea,c->f[0]);} // 800BCC44
  if (crb(c,0)) { goto L_800BCCCC; } // 800BCC48
  c->r[0]=0u+0x00000002u; // 800BCC4C
  {uint32_t ea=c->r[2]+0xFFFFA0C0u; c->f[26]=c->ps1[26]=RF32(ea);} // 800BCC50
  c->r[3]=0u+0x00000000u; // 800BCC54
  c->ctr=c->r[0]; // 800BCC58
L_800BCC5C:;
  c->r[4]=c->r[20]+c->r[3]; // 800BCC5C
  {uint32_t ea=c->r[4]+0x00000020u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BCC60
  fcmp(c,0,c->f[26],c->f[0]); // 800BCC64
  if (!crb(c,0)) { goto L_800BCC70; } // 800BCC68
  c->f[26]=c->f[0]; // 800BCC6C
L_800BCC70:;
  c->r[3]=c->r[3]+0x00000004u; // 800BCC70
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800BCC5C; } // 800BCC74
  c->r[0]=R32(c->r[20]+0x0000001Cu); // 800BCC78
  c->r[16]=0u+0x00000000u; // 800BCC7C
  c->r[0]=rotl(c->r[0],0)&0x01000000u; cr0(c,c->r[0]); // 800BCC80
  if (crb(c,2)) { goto L_800BCC8C; } // 800BCC84
  c->r[16]=0u+0x00000001u; // 800BCC88
L_800BCC8C:;
  W8(c->r[1]+0x00000018u,c->r[28]); // 800BCC8C
  c->r[3]=c->r[1]+0x00000018u; // 800BCC90
  c->lr=0x800BCC98u; f_800462D8(c); // 800BCC94
  c->f[1]=c->f[26]; // 800BCC98
  c->r[4]=c->r[19]|c->r[19]; // 800BCC9C
  c->r[7]=c->r[18]|c->r[18]; // 800BCCA0
  c->r[8]=c->r[16]|c->r[16]; // 800BCCA4
  c->r[6]=c->r[1]+0x0000003Cu; // 800BCCA8
  c->r[5]=0u+0x00000003u; // 800BCCAC
  c->lr=0x800BCCB4u; f_801117F8(c); // 800BCCB0
  cmps(c,0,(int32_t)c->r[3],0); // 800BCCB4
  if (crb(c,2)) { goto L_800BCD9C; } // 800BCCB8
  c->r[0]=R32(c->r[20]+0x0000001Cu); // 800BCCBC
  c->r[0]=c->r[0]|0x06000000u; // 800BCCC0
  W32(c->r[20]+0x0000001Cu,c->r[0]); // 800BCCC4
  goto L_800BCD9C; // 800BCCC8
L_800BCCCC:;
  c->f[0]=c->ps1[0]=S(c->f[2]-c->f[27]); // 800BCCCC
  c->r[21]=0u+0x00000000u; // 800BCCD0
  c->r[30]=0u+0x00000000u; // 800BCCD4
  {uint32_t ea=c->r[1]+0x0000003Cu; WF32(ea,c->f[0]);} // 800BCCD8
L_800BCCDC:;
  c->r[0]=R32(c->r[23]+c->r[30]); // 800BCCDC
  cmps(c,0,(int32_t)c->r[0],0); // 800BCCE0
  if (crb(c,0)) { goto L_800BCD80; } // 800BCCE4
  cmps(c,0,(int32_t)c->r[18],1); // 800BCCE8
  c->r[17]=c->r[18]|c->r[18]; // 800BCCEC
  if (!crb(c,2)) { goto L_800BCD08; } // 800BCCF0
  c->r[0]=R32(c->r[20]+0x0000001Cu); // 800BCCF4
  c->r[0]=rotl(c->r[0],28)&0x0000000Fu; // 800BCCF8
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[21]); // 800BCCFC
  if (crb(c,2)) { goto L_800BCD08; } // 800BCD00
  c->r[17]=0u+0x00000002u; // 800BCD04
L_800BCD08:;
  c->r[0]=R32(c->r[20]+0x0000001Cu); // 800BCD08
  c->r[26]=0u+0x00000000u; // 800BCD0C
  c->r[0]=rotl(c->r[0],0)&0x01000000u; cr0(c,c->r[0]); // 800BCD10
  if (crb(c,2)) { goto L_800BCD28; } // 800BCD14
  c->r[0]=((c->r[21])&0x20)?0u:(c->r[27]<<((c->r[21])&31)); // 800BCD18
  c->r[0]=c->r[16]&c->r[0]; cr0(c,c->r[0]); // 800BCD1C
  if (crb(c,2)) { goto L_800BCD28; } // 800BCD20
  c->r[26]=0u+0x00000001u; // 800BCD24
L_800BCD28:;
  W8(c->r[1]+0x00000014u,c->r[28]); // 800BCD28
  c->r[3]=c->r[1]+0x00000014u; // 800BCD2C
  c->lr=0x800BCD34u; f_800462D8(c); // 800BCD30
  c->r[5]=c->r[20]+c->r[30]; // 800BCD34
  c->r[4]=R32(c->r[23]+c->r[30]); // 800BCD38
  {uint32_t ea=c->r[5]+0x00000020u; c->f[1]=c->ps1[1]=RF32(ea);} // 800BCD3C
  c->r[7]=c->r[17]|c->r[17]; // 800BCD40
  c->r[8]=c->r[26]|c->r[26]; // 800BCD44
  c->r[6]=c->r[1]+0x0000003Cu; // 800BCD48
  c->r[5]=0u+0x00000003u; // 800BCD4C
  c->lr=0x800BCD54u; f_801117F8(c); // 800BCD50
  cmps(c,0,(int32_t)c->r[3],0); // 800BCD54
  if (crb(c,2)) { goto L_800BCD80; } // 800BCD58
  cmps(c,0,(int32_t)c->r[17],1); // 800BCD5C
  if (!crb(c,2)) { goto L_800BCD74; } // 800BCD60
  c->r[0]=R32(c->r[20]+0x0000001Cu); // 800BCD64
  c->r[0]=c->r[0]|0x02000000u; // 800BCD68
  W32(c->r[20]+0x0000001Cu,c->r[0]); // 800BCD6C
  goto L_800BCD80; // 800BCD70
L_800BCD74:;
  c->r[0]=R32(c->r[20]+0x0000001Cu); // 800BCD74
  c->r[0]=c->r[0]|0x04000000u; // 800BCD78
  W32(c->r[20]+0x0000001Cu,c->r[0]); // 800BCD7C
L_800BCD80:;
  {uint32_t ea=c->r[1]+0x0000003Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800BCD80
  c->r[21]=c->r[21]+0x00000001u; // 800BCD84
  cmps(c,0,(int32_t)c->r[21],2); // 800BCD88
  c->r[30]=c->r[30]+0x00000004u; // 800BCD8C
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[28]); // 800BCD90
  {uint32_t ea=c->r[1]+0x0000003Cu; WF32(ea,c->f[0]);} // 800BCD94
  if (crb(c,0)) { IRQCHK(c); goto L_800BCCDC; } // 800BCD98
L_800BCD9C:;
  W8(c->r[1]+0x00000010u,c->r[28]); // 800BCD9C
  c->r[3]=c->r[1]+0x00000010u; // 800BCDA0
  c->lr=0x800BCDA8u; f_800486E8(c); // 800BCDA4
  c->lr=0x800BCDACu; f_800485CC(c); // 800BCDA8
  c->r[17]=R32(c->r[20]+0x00000018u); // 800BCDAC
  cmps(c,0,(int32_t)c->r[17],0); // 800BCDB0
  if (crb(c,0)) { goto L_800BCEC0; } // 800BCDB4
  c->r[0]=0u+0x00000002u; // 800BCDB8
  {uint32_t ea=c->r[2]+0xFFFFA0C0u; c->f[1]=c->ps1[1]=RF32(ea);} // 800BCDBC
  c->r[3]=0u+0x00000000u; // 800BCDC0
  c->ctr=c->r[0]; // 800BCDC4
L_800BCDC8:;
  c->r[4]=c->r[20]+c->r[3]; // 800BCDC8
  {uint32_t ea=c->r[4]+0x00000028u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BCDCC
  fcmp(c,0,c->f[1],c->f[0]); // 800BCDD0
  if (!crb(c,0)) { goto L_800BCDDC; } // 800BCDD4
  c->f[1]=c->f[0]; // 800BCDD8
L_800BCDDC:;
  c->r[3]=c->r[3]+0x00000004u; // 800BCDDC
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800BCDC8; } // 800BCDE0
  c->f[1]=c->ps1[1]=S(c->f[29]*c->f[1]); // 800BCDE4
  c->lr=0x800BCDECu; f_803A9ADC(c); // 800BCDE8
  c->r[16]=c->r[3]|0xC0C00000u; // 800BCDEC
  c->r[3]=0u+0x80750000u; // 800BCDF0
  c->r[4]=c->r[17]|c->r[17]; // 800BCDF4
  c->r[5]=c->r[1]+0x00000048u; // 800BCDF8
  c->r[16]=c->r[16]|0x0000C000u; // 800BCDFC
  c->r[3]=c->r[3]+0xFFFFBC98u; // 800BCE00
  c->lr=0x800BCE08u; f_800AB224(c); // 800BCE04
  {uint32_t ea=c->r[2]+0xFFFFA0D0u; c->f[1]=c->ps1[1]=RF32(ea);} // 800BCE08
  c->r[3]=c->r[29]+0xFFFF9518u; // 800BCE0C
  {uint32_t ea=c->r[2]+0xFFFFA0D4u; c->f[2]=c->ps1[2]=RF32(ea);} // 800BCE10
  c->lr=0x800BCE18u; f_802DA618(c); // 800BCE14
  {uint32_t ea=c->r[1]+0x00000034u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BCE18
  c->r[3]=c->r[1]+0x0000000Cu; // 800BCE1C
  {uint32_t ea=c->r[1]+0x00000030u; c->f[1]=c->ps1[1]=RF32(ea);} // 800BCE20
  c->f[0]=c->ps1[0]=S(c->f[31]+c->f[0]); // 800BCE24
  {uint32_t ea=c->r[1]+0x0000003Cu; WF32(ea,c->f[1]);} // 800BCE28
  {uint32_t ea=c->r[1]+0x00000040u; WF32(ea,c->f[0]);} // 800BCE2C
  {uint32_t ea=c->r[1]+0x00000044u; WF32(ea,c->f[30]);} // 800BCE30
  W8(c->r[1]+0x0000000Cu,c->r[28]); // 800BCE34
  c->lr=0x800BCE3Cu; f_800486E8(c); // 800BCE38
  c->r[4]=0u+0x00000007u; // 800BCE3C
  c->lr=0x800BCE44u; f_800484D4(c); // 800BCE40
  c->r[18]=0u+0x00000000u; // 800BCE44
  c->r[17]=0u+0x00000000u; // 800BCE48
  goto L_800BCE8C; // 800BCE4C
L_800BCE50:;
  {uint32_t ea=c->r[1]+0x0000003Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800BCE50
  c->r[0]=c->r[1]+0x00000048u; // 800BCE54
  c->r[3]=c->r[0]+c->r[17]; // 800BCE58
  {uint32_t ea=c->r[1]+0x00000040u; c->f[3]=c->ps1[3]=RF32(ea);} // 800BCE5C
  c->f[2]=c->f[1]; // 800BCE60
  c->r[5]=R32(c->r[3]+0x00000008u); // 800BCE64
  c->r[4]=c->r[16]|c->r[16]; // 800BCE68
  c->r[3]=c->r[29]+0xFFFF9518u; // 800BCE6C
  setcrb(c,6,!(crb(c,6)^crb(c,6))); // 800BCE70
  c->lr=0x800BCE78u; f_802DAA7C(c); // 800BCE74
  {uint32_t ea=c->r[1]+0x00000040u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BCE78
  c->r[18]=c->r[18]+0x00000001u; // 800BCE7C
  c->r[17]=c->r[17]+0x00000004u; // 800BCE80
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[31]); // 800BCE84
  {uint32_t ea=c->r[1]+0x00000040u; WF32(ea,c->f[0]);} // 800BCE88
L_800BCE8C:;
  c->r[0]=R32(c->r[1]+0x0000004Cu); // 800BCE8C
  cmpu(c,0,c->r[18],c->r[0]); // 800BCE90
  if (crb(c,0)) { IRQCHK(c); goto L_800BCE50; } // 800BCE94
  W8(c->r[1]+0x00000008u,c->r[28]); // 800BCE98
  c->r[3]=c->r[1]+0x00000008u; // 800BCE9C
  c->lr=0x800BCEA4u; f_800486E8(c); // 800BCEA0
  c->lr=0x800BCEA8u; f_800485CC(c); // 800BCEA4
  goto L_800BCEC0; // 800BCEA8
L_800BCEAC:;
  cmps(c,0,(int32_t)c->r[18],0); // 800BCEAC
  if (crb(c,2)) { goto L_800BCEC0; } // 800BCEB0
  c->r[0]=R32(c->r[20]+0x0000001Cu); // 800BCEB4
  c->r[0]=c->r[0]|0x06000000u; // 800BCEB8
  W32(c->r[20]+0x0000001Cu,c->r[0]); // 800BCEBC
L_800BCEC0:;
  c->r[22]=c->r[22]+0x00000001u; // 800BCEC0
  c->r[31]=c->r[31]+0x00000050u; // 800BCEC4
  cmps(c,0,(int32_t)c->r[22],32); // 800BCEC8
  if (crb(c,0)) { IRQCHK(c); goto L_800BCB94; } // 800BCECC
L_800BCED0:;
  c->r[11]=c->r[1]+0x000000E0u; // 800BCED0
  {uint32_t ea=c->r[1]+0x00000138u; psq_load(c,31,ea,0,0);} // 800BCED4
  {uint32_t ea=c->r[1]+0x00000130u; c->f[31]=RF64(ea);} // 800BCED8
  {uint32_t ea=c->r[1]+0x00000128u; psq_load(c,30,ea,0,0);} // 800BCEDC
  {uint32_t ea=c->r[1]+0x00000120u; c->f[30]=RF64(ea);} // 800BCEE0
  {uint32_t ea=c->r[1]+0x00000118u; psq_load(c,29,ea,0,0);} // 800BCEE4
  {uint32_t ea=c->r[1]+0x00000110u; c->f[29]=RF64(ea);} // 800BCEE8
  {uint32_t ea=c->r[1]+0x00000108u; psq_load(c,28,ea,0,0);} // 800BCEEC
  {uint32_t ea=c->r[1]+0x00000100u; c->f[28]=RF64(ea);} // 800BCEF0
  {uint32_t ea=c->r[1]+0x000000F8u; psq_load(c,27,ea,0,0);} // 800BCEF4
  {uint32_t ea=c->r[1]+0x000000F0u; c->f[27]=RF64(ea);} // 800BCEF8
  {uint32_t ea=c->r[1]+0x000000E8u; psq_load(c,26,ea,0,0);} // 800BCEFC
  {uint32_t ea=c->r[1]+0x000000E0u; c->f[26]=RF64(ea);} // 800BCF00
  c->lr=0x800BCF08u; f_803A9C1C(c); // 800BCF04
  c->r[0]=R32(c->r[1]+0x00000144u); // 800BCF08
  c->lr=c->r[0]; // 800BCF0C
  c->r[1]=c->r[1]+0x00000140u; // 800BCF10
  return; // 800BCF14
}

// fn_800BCF18
void f_800BCF18(Ctx* __restrict c) {
  trace_call(0x800BCF18u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BCF18
  c->r[0]=c->lr; // 800BCF1C
  W32(c->r[1]+0x00000024u,c->r[0]); // 800BCF20
  c->r[11]=c->r[1]+0x00000020u; // 800BCF24
  c->lr=0x800BCF2Cu; { W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800BCF28
  c->r[0]=0u+0x00000020u; // 800BCF2C
  c->r[31]=c->r[4]|c->r[4]; // 800BCF30
  c->r[9]=0u+0x00000000u; // 800BCF34
  c->r[4]=0u+0x00000000u; // 800BCF38
  c->ctr=c->r[0]; // 800BCF3C
L_800BCF40:;
  c->r[8]=c->r[3]+c->r[4]; // 800BCF40
  c->r[0]=R32(c->r[8]+0x00000020u); // 800BCF44
  c->r[0]=rotl(c->r[0],0)&0x08000000u; cr0(c,c->r[0]); // 800BCF48
  if (crb(c,2)) { goto L_800BCF58; } // 800BCF4C
  W32(c->r[8]+0x00000020u,c->r[9]); // 800BCF50
  W8(c->r[8]+0x00000034u,c->r[9]); // 800BCF54
L_800BCF58:;
  c->r[4]=c->r[4]+0x00000050u; // 800BCF58
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800BCF40; } // 800BCF5C
  c->r[0]=0u+0x00000020u; // 800BCF60
  c->r[30]=0u+0x00000000u; // 800BCF64
  c->r[4]=0u+0x00000000u; // 800BCF68
  c->ctr=c->r[0]; // 800BCF6C
L_800BCF70:;
  c->r[8]=c->r[3]+c->r[4]; // 800BCF70
  c->r[0]=R32(c->r[8]+0x00000020u); // 800BCF74
  c->r[0]=rotl(c->r[0],0)&0x80000000u; cr0(c,c->r[0]); // 800BCF78
  if (!crb(c,2)) { goto L_800BD008; } // 800BCF7C
  {uint32_t ea=c->r[8]+0x00000004u; WF32(ea,c->f[1]);} // 800BCF80
  c->r[0]=0u+0x00000002u; // 800BCF84
  c->r[29]=c->r[8]+0x00000004u; // 800BCF88
  c->r[4]=0u+0x80000000u; // 800BCF8C
  {uint32_t ea=c->r[8]+0x00000008u; WF32(ea,c->f[2]);} // 800BCF90
  c->r[3]=0u+0x00000000u; // 800BCF94
  {uint32_t ea=c->r[2]+0xFFFFA0ACu; c->f[0]=c->ps1[0]=RF32(ea);} // 800BCF98
  {uint32_t ea=c->r[8]+0x0000000Cu; WF32(ea,c->f[3]);} // 800BCF9C
  {uint32_t ea=c->r[8]+0x00000010u; WF32(ea,c->f[4]);} // 800BCFA0
  W32(c->r[8]+0x00000014u,c->r[6]); // 800BCFA4
  W32(c->r[8]+0x00000018u,c->r[7]); // 800BCFA8
  W32(c->r[8]+0x0000001Cu,c->r[5]); // 800BCFAC
  W32(c->r[8]+0x00000020u,c->r[4]); // 800BCFB0
  c->ctr=c->r[0]; // 800BCFB4
L_800BCFB8:;
  c->r[4]=c->r[29]+c->r[3]; // 800BCFB8
  c->r[3]=c->r[3]+0x00000004u; // 800BCFBC
  {uint32_t ea=c->r[4]+0x00000020u; WF32(ea,c->f[0]);} // 800BCFC0
  {uint32_t ea=c->r[4]+0x00000028u; WF32(ea,c->f[0]);} // 800BCFC4
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800BCFB8; } // 800BCFC8
  c->r[3]=c->r[31]|c->r[31]; // 800BCFCC
  c->lr=0x800BCFD4u; f_803A91D4(c); // 800BCFD0
  cmpu(c,0,c->r[3],0x00000020u); // 800BCFD4
  if (!crb(c,0)) { goto L_800BCFEC; } // 800BCFD8
  c->r[4]=c->r[31]|c->r[31]; // 800BCFDC
  c->r[3]=c->r[29]+0x00000030u; // 800BCFE0
  c->lr=0x800BCFE8u; f_803B37C0(c); // 800BCFE4
  goto L_800BD014; // 800BCFE8
L_800BCFEC:;
  c->r[4]=c->r[31]|c->r[31]; // 800BCFEC
  c->r[3]=c->r[29]+0x00000030u; // 800BCFF0
  c->r[5]=0u+0x0000001Fu; // 800BCFF4
  c->lr=0x800BCFFCu; f_802DC484(c); // 800BCFF8
  c->r[0]=0u+0x00000000u; // 800BCFFC
  W8(c->r[29]+0x0000004Fu,c->r[0]); // 800BD000
  goto L_800BD014; // 800BD004
L_800BD008:;
  c->r[30]=c->r[30]+0x00000001u; // 800BD008
  c->r[4]=c->r[4]+0x00000050u; // 800BD00C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800BCF70; } // 800BD010
L_800BD014:;
  c->r[11]=c->r[1]+0x00000020u; // 800BD014
  c->lr=0x800BD01Cu; { c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800BD018
  c->r[0]=R32(c->r[1]+0x00000024u); // 800BD01C
  c->lr=c->r[0]; // 800BD020
  c->r[1]=c->r[1]+0x00000020u; // 800BD024
  return; // 800BD028
}

// fn_800BD02C
void f_800BD02C(Ctx* __restrict c) {
  trace_call(0x800BD02Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BD02C
  c->r[0]=c->lr; // 800BD030
  cmps(c,0,(int32_t)c->r[4],0); // 800BD034
  W32(c->r[1]+0x00000024u,c->r[0]); // 800BD038
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800BD03C
  c->r[29]=c->r[3]|c->r[3]; // 800BD040
  if (!crb(c,2)) { goto L_800BD084; } // 800BD044
  c->r[30]=0u+0x00000000u; // 800BD048
  c->r[31]=0u+0x00000000u; // 800BD04C
L_800BD050:;
  c->r[4]=c->r[29]+c->r[31]; // 800BD050
  c->r[0]=R32(c->r[4]+0x00000020u); // 800BD054
  c->r[0]=rotl(c->r[0],0)&0x80000000u; cr0(c,c->r[0]); // 800BD058
  if (crb(c,2)) { goto L_800BD06C; } // 800BD05C
  c->r[3]=c->r[29]|c->r[29]; // 800BD060
  c->r[4]=c->r[4]+0x00000034u; // 800BD064
  c->lr=0x800BD06Cu; f_800BD02C(c); // 800BD068
L_800BD06C:;
  c->r[30]=c->r[30]+0x00000001u; // 800BD06C
  c->r[31]=c->r[31]+0x00000050u; // 800BD070
  cmps(c,0,(int32_t)c->r[30],32); // 800BD074
  if (crb(c,0)) { IRQCHK(c); goto L_800BD050; } // 800BD078
  c->r[3]=0u+0x00000001u; // 800BD07C
  goto L_800BD0CC; // 800BD080
L_800BD084:;
  c->r[5]=0u+0x00000001u; // 800BD084
  c->lr=0x800BD08Cu; f_800BD214(c); // 800BD088
  cmps(c,0,(int32_t)c->r[3],0); // 800BD08C
  if (crb(c,2)) { goto L_800BD0C8; } // 800BD090
  c->r[4]=R32(c->r[3]+0x0000001Cu); // 800BD094
  c->r[0]=rotl(c->r[4],0)&0x60000000u; cr0(c,c->r[0]); // 800BD098
  if (crb(c,2)) { goto L_800BD0B4; } // 800BD09C
  c->r[0]=rotl(c->r[4],0)&0x08000000u; cr0(c,c->r[0]); // 800BD0A0
  if (!crb(c,2)) { goto L_800BD0B4; } // 800BD0A4
  c->r[0]=c->r[4]|0x10000000u; // 800BD0A8
  W32(c->r[3]+0x0000001Cu,c->r[0]); // 800BD0AC
  goto L_800BD0C0; // 800BD0B0
L_800BD0B4:;
  c->r[0]=0u+0x00000000u; // 800BD0B4
  W32(c->r[3]+0x0000001Cu,c->r[0]); // 800BD0B8
  W8(c->r[3]+0x00000030u,c->r[0]); // 800BD0BC
L_800BD0C0:;
  c->r[3]=0u+0x00000001u; // 800BD0C0
  goto L_800BD0CC; // 800BD0C4
L_800BD0C8:;
  c->r[3]=0u+0x00000000u; // 800BD0C8
L_800BD0CC:;
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800BD0CC
  c->r[0]=R32(c->r[1]+0x00000024u); // 800BD0D0
  c->lr=c->r[0]; // 800BD0D4
  c->r[1]=c->r[1]+0x00000020u; // 800BD0D8
  return; // 800BD0DC
}

// fn_800BD0E0
void f_800BD0E0(Ctx* __restrict c) {
  trace_call(0x800BD0E0u);
  c->r[0]=0u+0x00000020u; // 800BD0E0
  c->r[7]=0u+0x00000000u; // 800BD0E4
  c->r[5]=0u+0x00000000u; // 800BD0E8
  c->ctr=c->r[0]; // 800BD0EC
L_800BD0F0:;
  c->r[6]=c->r[3]+c->r[5]; // 800BD0F0
  c->r[0]=R32(c->r[6]+0x00000014u); // 800BD0F4
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[4]); // 800BD0F8
  if (!crb(c,2)) { goto L_800BD108; } // 800BD0FC
  W32(c->r[6]+0x00000020u,c->r[7]); // 800BD100
  W8(c->r[6]+0x00000034u,c->r[7]); // 800BD104
L_800BD108:;
  c->r[5]=c->r[5]+0x00000050u; // 800BD108
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800BD0F0; } // 800BD10C
  return; // 800BD110
}

// fn_800BD114
void f_800BD114(Ctx* __restrict c) {
  trace_call(0x800BD114u);
  c->r[0]=0u+0x00000020u; // 800BD114
  c->r[6]=0u+0x00000000u; // 800BD118
  c->r[4]=0u+0x00000000u; // 800BD11C
  c->ctr=c->r[0]; // 800BD120
L_800BD124:;
  c->r[5]=c->r[3]+c->r[4]; // 800BD124
  c->r[0]=R32(c->r[5]+0x00000020u); // 800BD128
  c->r[0]=rotl(c->r[0],0)&0x80000000u; cr0(c,c->r[0]); // 800BD12C
  if (!crb(c,2)) { goto L_800BD140; } // 800BD130
  c->r[6]=c->r[6]+0x00000001u; // 800BD134
  c->r[4]=c->r[4]+0x00000050u; // 800BD138
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800BD124; } // 800BD13C
L_800BD140:;
  cmps(c,0,(int32_t)c->r[6],32); // 800BD140
  if (!crb(c,0)) { goto L_800BD150; } // 800BD144
  c->r[3]=0u+0x00000001u; // 800BD148
  return; // 800BD14C
L_800BD150:;
  c->r[3]=0u+0x00000000u; // 800BD150
  return; // 800BD154
}

// fn_800BD158
void f_800BD158(Ctx* __restrict c) {
  trace_call(0x800BD158u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BD158
  c->r[0]=c->lr; // 800BD15C
  W32(c->r[1]+0x00000034u,c->r[0]); // 800BD160
  c->r[11]=c->r[1]+0x00000020u; // 800BD164
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[31]);} // 800BD168
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,31,ea,0,0);} // 800BD16C
  c->lr=0x800BD174u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800BD170
  {uint32_t ea=c->r[2]+0xFFFFA0ACu; c->f[31]=c->ps1[31]=RF32(ea);} // 800BD174
  c->r[26]=c->r[3]|c->r[3]; // 800BD178
  c->r[27]=0u+0x00000000u; // 800BD17C
  c->r[30]=0u+0x00000000u; // 800BD180
  c->r[28]=0u+0xFFFFFFFFu; // 800BD184
  c->r[29]=0u+0x00000000u; // 800BD188
  c->r[31]=0u+0x00000002u; // 800BD18C
L_800BD190:;
  c->r[4]=c->r[26]+c->r[30]; // 800BD190
  c->r[3]=0u+0x00000000u; // 800BD194
  {uint32_t ea=c->r[4]+0x00000004u; WF32(ea,c->f[31]);} // 800BD198
  c->r[5]=c->r[4]+0x00000004u; // 800BD19C
  {uint32_t ea=c->r[4]+0x00000008u; WF32(ea,c->f[31]);} // 800BD1A0
  {uint32_t ea=c->r[4]+0x0000000Cu; WF32(ea,c->f[31]);} // 800BD1A4
  {uint32_t ea=c->r[4]+0x00000010u; WF32(ea,c->f[31]);} // 800BD1A8
  W32(c->r[4]+0x00000014u,c->r[28]); // 800BD1AC
  W32(c->r[4]+0x00000018u,c->r[28]); // 800BD1B0
  W32(c->r[4]+0x0000001Cu,c->r[28]); // 800BD1B4
  W32(c->r[4]+0x00000020u,c->r[29]); // 800BD1B8
  c->ctr=c->r[31]; // 800BD1BC
L_800BD1C0:;
  c->r[4]=c->r[5]+c->r[3]; // 800BD1C0
  c->r[3]=c->r[3]+0x00000004u; // 800BD1C4
  {uint32_t ea=c->r[4]+0x00000020u; WF32(ea,c->f[31]);} // 800BD1C8
  {uint32_t ea=c->r[4]+0x00000028u; WF32(ea,c->f[31]);} // 800BD1CC
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800BD1C0; } // 800BD1D0
  c->r[3]=c->r[5]+0x00000030u; // 800BD1D4
  c->r[4]=0u+0x00000000u; // 800BD1D8
  c->r[5]=0u+0x00000020u; // 800BD1DC
  c->lr=0x800BD1E4u; f_800043EC(c); // 800BD1E0
  c->r[27]=c->r[27]+0x00000001u; // 800BD1E4
  c->r[30]=c->r[30]+0x00000050u; // 800BD1E8
  cmps(c,0,(int32_t)c->r[27],32); // 800BD1EC
  if (crb(c,0)) { IRQCHK(c); goto L_800BD190; } // 800BD1F0
  c->r[11]=c->r[1]+0x00000020u; // 800BD1F4
  {uint32_t ea=c->r[1]+0x00000028u; psq_load(c,31,ea,0,0);} // 800BD1F8
  {uint32_t ea=c->r[1]+0x00000020u; c->f[31]=RF64(ea);} // 800BD1FC
  c->lr=0x800BD204u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800BD200
  c->r[0]=R32(c->r[1]+0x00000034u); // 800BD204
  c->lr=c->r[0]; // 800BD208
  c->r[1]=c->r[1]+0x00000030u; // 800BD20C
  return; // 800BD210
}

// fn_800BD214
void f_800BD214(Ctx* __restrict c) {
  trace_call(0x800BD214u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BD214
  c->r[0]=c->lr; // 800BD218
  W32(c->r[1]+0x00000024u,c->r[0]); // 800BD21C
  {uint32_t ea=c->r[1]+0x0000000Cu; for(int i=27;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800BD220
  c->r[27]=c->r[3]|c->r[3]; // 800BD224
  c->r[28]=c->r[4]|c->r[4]; // 800BD228
  c->r[30]=0u+0x00000000u; // 800BD22C
  c->r[29]=0u+0x00000000u; // 800BD230
  c->r[31]=0u+0x00000000u; // 800BD234
L_800BD238:;
  c->r[3]=c->r[27]+c->r[31]; // 800BD238
  c->r[0]=R32(c->r[3]+0x00000020u); // 800BD23C
  c->r[0]=rotl(c->r[0],0)&0x80000000u; cr0(c,c->r[0]); // 800BD240
  if (crb(c,2)) { goto L_800BD268; } // 800BD244
  c->r[4]=c->r[28]|c->r[28]; // 800BD248
  c->r[3]=c->r[3]+0x00000034u; // 800BD24C
  c->lr=0x800BD254u; f_803B393C(c); // 800BD250
  cmps(c,0,(int32_t)c->r[3],0); // 800BD254
  if (!crb(c,2)) { goto L_800BD268; } // 800BD258
  c->r[3]=c->r[27]+c->r[31]; // 800BD25C
  c->r[30]=c->r[3]+0x00000004u; // 800BD260
  goto L_800BD278; // 800BD264
L_800BD268:;
  c->r[29]=c->r[29]+0x00000001u; // 800BD268
  c->r[31]=c->r[31]+0x00000050u; // 800BD26C
  cmps(c,0,(int32_t)c->r[29],32); // 800BD270
  if (crb(c,0)) { IRQCHK(c); goto L_800BD238; } // 800BD274
L_800BD278:;
  c->r[3]=c->r[30]|c->r[30]; // 800BD278
  {uint32_t ea=c->r[1]+0x0000000Cu; for(int i=27;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800BD27C
  c->r[0]=R32(c->r[1]+0x00000024u); // 800BD280
  c->lr=c->r[0]; // 800BD284
  c->r[1]=c->r[1]+0x00000020u; // 800BD288
  return; // 800BD28C
}

// fn_800BD290
void f_800BD290(Ctx* __restrict c) {
  trace_call(0x800BD290u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BD290
  c->r[0]=c->lr; // 800BD294
  c->r[4]=0u+0x806D0000u; // 800BD298
  c->r[7]=0u+0x00000000u; // 800BD29C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800BD2A0
  c->r[4]=c->r[4]+0x00007158u; // 800BD2A4
  c->r[6]=0u+0x00000002u; // 800BD2A8
  c->r[5]=0u+0xFFFFFFFFu; // 800BD2AC
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800BD2B0
  c->r[0]=c->r[4]+0x00000028u; // 800BD2B4
  c->r[30]=c->r[3]|c->r[3]; // 800BD2B8
  W32(c->r[3]+0x00000000u,c->r[7]); // 800BD2BC
  W32(c->r[3]+0x00000004u,c->r[6]); // 800BD2C0
  W32(c->r[3]+0x00000010u,c->r[5]); // 800BD2C4
  W32(c->r[3]+0x00000014u,c->r[7]); // 800BD2C8
  W32(c->r[3]+0x00000018u,c->r[7]); // 800BD2CC
  W32(c->r[3]+0x0000001Cu,c->r[7]); // 800BD2D0
  W32(c->r[3]+0x0000000Cu,c->r[7]); // 800BD2D4
  W32(c->r[3]+0x00000020u,c->r[7]); // 800BD2D8
  W32(c->r[3]+0x00000008u,c->r[7]); // 800BD2DC
  W32(c->r[3]+0x000000A4u,c->r[4]); // 800BD2E0
  W32(c->r[3]+0x000000A8u,c->r[0]); // 800BD2E4
  c->r[3]=c->r[3]+0x000000B8u; // 800BD2E8
  c->lr=0x800BD2F0u; f_800ADFA0(c); // 800BD2EC
  c->r[3]=c->r[30]|c->r[30]; // 800BD2F0
  c->lr=0x800BD2F8u; f_800BFE10(c); // 800BD2F4
  c->r[0]=R8(c->r[13]+0xFFFFBB98u); // 800BD2F8
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800BD2FC
  if (!crb(c,2)) { goto L_800BD324; } // 800BD300
  c->r[31]=0u+0x80730000u; // 800BD304
  c->r[3]=c->r[31]+0x000067B8u; // 800BD308
  c->lr=0x800BD310u; f_8029EF58(c); // 800BD30C
  c->r[3]=0u+0x806D0000u; // 800BD310
  c->r[0]=0u+0x00000001u; // 800BD314
  c->r[3]=c->r[3]+0xFFFFC25Cu; // 800BD318
  W32(c->r[31]+0x000067B8u,c->r[3]); // 800BD31C
  W8(c->r[13]+0xFFFFBB98u,c->r[0]); // 800BD320
L_800BD324:;
  c->r[3]=0u+0x80730000u; // 800BD324
  c->r[8]=0u+0x80690000u; // 800BD328
  c->r[4]=c->r[30]|c->r[30]; // 800BD32C
  c->r[5]=0u+0x00000000u; // 800BD330
  c->r[3]=c->r[3]+0x000067B8u; // 800BD334
  c->r[8]=c->r[8]+0xFFFFE4C0u; // 800BD338
  c->r[6]=0u+0x0000003Fu; // 800BD33C
  c->r[7]=0u+0x00000018u; // 800BD340
  c->lr=0x800BD348u; f_8029F4EC(c); // 800BD344
  c->r[3]=c->r[30]|c->r[30]; // 800BD348
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800BD34C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800BD350
  c->lr=c->r[0]; // 800BD354
  c->r[1]=c->r[1]+0x00000010u; // 800BD358
  return; // 800BD35C
}

// fn_800BD360
void f_800BD360(Ctx* __restrict c) {
  trace_call(0x800BD360u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BD360
  c->r[0]=c->lr; // 800BD364
  cmps(c,0,(int32_t)c->r[3],0); // 800BD368
  W32(c->r[1]+0x00000014u,c->r[0]); // 800BD36C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800BD370
  c->r[31]=c->r[3]|c->r[3]; // 800BD374
  if (crb(c,2)) { goto L_800BD388; } // 800BD378
  c->r[4]=0u+0xFFFFFFFFu; // 800BD37C
  c->r[3]=c->r[3]+0x000000B8u; // 800BD380
  c->lr=0x800BD388u; f_800ADFEC(c); // 800BD384
L_800BD388:;
  c->r[3]=c->r[31]|c->r[31]; // 800BD388
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800BD38C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800BD390
  c->lr=c->r[0]; // 800BD394
  c->r[1]=c->r[1]+0x00000010u; // 800BD398
  return; // 800BD39C
}

// fn_800BD3A0
void f_800BD3A0(Ctx* __restrict c) {
  trace_call(0x800BD3A0u);
  {uint32_t ea=c->r[1]+0xFFFFFF80u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BD3A0
  c->r[0]=c->lr; // 800BD3A4
  W32(c->r[1]+0x00000084u,c->r[0]); // 800BD3A8
  c->r[11]=c->r[1]+0x00000080u; // 800BD3AC
  c->lr=0x800BD3B4u; { W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800BD3B0
  c->r[31]=c->r[1]|c->r[1]; // 800BD3B4
  c->r[30]=c->r[3]|c->r[3]; // 800BD3B8
  c->r[3]=c->r[31]+0x0000001Cu; // 800BD3BC
  c->r[4]=0u+0x00000000u; // 800BD3C0
  c->lr=0x800BD3C8u; f_8007524C(c); // 800BD3C4
  c->r[3]=c->r[30]|c->r[30]; // 800BD3C8
  c->lr=0x800BD3D0u; f_800BFE10(c); // 800BD3CC
  c->r[5]=0u+0x80690000u; // 800BD3D0
  c->r[3]=0u+0x80740000u; // 800BD3D4
  c->r[5]=c->r[5]+0xFFFFE4C0u; // 800BD3D8
  c->r[6]=0u+0x00000000u; // 800BD3DC
  c->r[4]=c->r[5]+0x00000014u; // 800BD3E0
  c->r[3]=c->r[3]+0x00004FD0u; // 800BD3E4
  c->r[5]=c->r[5]+0x0000001Du; // 800BD3E8
  c->lr=0x800BD3F0u; f_8005A7B0(c); // 800BD3EC
  c->r[4]=c->r[3]|c->r[3]; // 800BD3F0
  c->r[3]=c->r[31]+0x00000018u; // 800BD3F4
  c->lr=0x800BD3FCu; f_8007524C(c); // 800BD3F8
  c->r[0]=R32(c->r[31]+0x00000018u); // 800BD3FC
  c->r[3]=c->r[31]+0x0000001Cu; // 800BD400
  W32(c->r[31]+0x0000001Cu,c->r[0]); // 800BD404
  c->lr=0x800BD40Cu; f_804AB770(c); // 800BD408
  c->r[0]=R32(c->r[31]+0x0000001Cu); // 800BD40C
  c->r[3]=c->r[31]+0x0000001Cu; // 800BD410
  W32(c->r[31]+0x00000010u,c->r[0]); // 800BD414
  c->r[4]=c->r[31]+0x00000010u; // 800BD418
  c->lr=0x800BD420u; f_804AB53C(c); // 800BD41C
  c->r[3]=c->r[30]+0x000000B8u; // 800BD420
  c->lr=0x800BD428u; f_800AF34C(c); // 800BD424
  c->r[0]=R32(c->r[31]+0x0000001Cu); // 800BD428
  c->r[8]=0u+0x00000000u; // 800BD42C
  W32(c->r[31]+0x00000014u,c->r[0]); // 800BD430
  c->r[9]=c->r[8]|c->r[8]; // 800BD434
  c->r[3]=c->r[30]+0x000000B8u; // 800BD438
  c->r[4]=c->r[31]+0x00000014u; // 800BD43C
  c->r[5]=0u+0x00000020u; // 800BD440
  c->r[6]=0u+0x00000001u; // 800BD444
  c->r[7]=0u+0x00000100u; // 800BD448
  c->lr=0x800BD450u; f_800ADFF0(c); // 800BD44C
  c->r[3]=R32(c->r[13]+0xFFFFC218u); // 800BD450
  cmps(c,0,(int32_t)c->r[3],0); // 800BD454
  if (crb(c,2)) { goto L_800BD5E0; } // 800BD458
  c->lr=0x800BD460u; f_800CECD4(c); // 800BD45C
  c->r[0]=0u+0x00000012u; // 800BD460
  c->r[6]=c->r[30]+0x000000D8u; // 800BD464
  c->r[5]=c->r[3]+0xFFFFFFFCu; // 800BD468
  c->ctr=c->r[0]; // 800BD46C
L_800BD470:;
  c->r[4]=R32(c->r[5]+0x00000004u); // 800BD470
  {uint32_t ea=c->r[5]+0x00000008u; c->r[0]=R32(ea); c->r[5]=ea;} // 800BD474
  W32(c->r[6]+0x00000004u,c->r[4]); // 800BD478
  {uint32_t ea=c->r[6]+0x00000008u; W32(ea,c->r[0]); c->r[6]=ea;} // 800BD47C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800BD470; } // 800BD480
  c->r[0]=0u+0x00000012u; // 800BD484
  c->r[6]=c->r[30]+0x00000168u; // 800BD488
  c->r[5]=c->r[3]+0x0000008Cu; // 800BD48C
  c->ctr=c->r[0]; // 800BD490
L_800BD494:;
  c->r[4]=R32(c->r[5]+0x00000004u); // 800BD494
  {uint32_t ea=c->r[5]+0x00000008u; c->r[0]=R32(ea); c->r[5]=ea;} // 800BD498
  W32(c->r[6]+0x00000004u,c->r[4]); // 800BD49C
  {uint32_t ea=c->r[6]+0x00000008u; W32(ea,c->r[0]); c->r[6]=ea;} // 800BD4A0
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800BD494; } // 800BD4A4
  c->r[0]=0u+0x00000009u; // 800BD4A8
  c->r[6]=c->r[30]+0x000001F8u; // 800BD4AC
  c->r[5]=c->r[3]+0x0000011Cu; // 800BD4B0
  c->ctr=c->r[0]; // 800BD4B4
L_800BD4B8:;
  c->r[4]=R32(c->r[5]+0x00000004u); // 800BD4B8
  {uint32_t ea=c->r[5]+0x00000008u; c->r[0]=R32(ea); c->r[5]=ea;} // 800BD4BC
  W32(c->r[6]+0x00000004u,c->r[4]); // 800BD4C0
  {uint32_t ea=c->r[6]+0x00000008u; W32(ea,c->r[0]); c->r[6]=ea;} // 800BD4C4
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800BD4B8; } // 800BD4C8
  c->r[0]=0u+0x00000004u; // 800BD4CC
  c->r[6]=c->r[30]+0x00000240u; // 800BD4D0
  c->r[5]=c->r[3]+0x00000164u; // 800BD4D4
  c->ctr=c->r[0]; // 800BD4D8
L_800BD4DC:;
  c->r[4]=R32(c->r[5]+0x00000004u); // 800BD4DC
  {uint32_t ea=c->r[5]+0x00000008u; c->r[0]=R32(ea); c->r[5]=ea;} // 800BD4E0
  W32(c->r[6]+0x00000004u,c->r[4]); // 800BD4E4
  {uint32_t ea=c->r[6]+0x00000008u; W32(ea,c->r[0]); c->r[6]=ea;} // 800BD4E8
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800BD4DC; } // 800BD4EC
  c->r[0]=R32(c->r[5]+0x00000004u); // 800BD4F0
  W32(c->r[6]+0x00000004u,c->r[0]); // 800BD4F4
  c->r[4]=R32(c->r[3]+0x0000018Cu); // 800BD4F8
  c->r[0]=R32(c->r[3]+0x00000190u); // 800BD4FC
  W32(c->r[30]+0x0000026Cu,c->r[0]); // 800BD500
  W32(c->r[30]+0x00000268u,c->r[4]); // 800BD504
  c->r[0]=R16(c->r[3]+0x00000194u); // 800BD508
  W16(c->r[30]+0x00000270u,c->r[0]); // 800BD50C
  c->r[3]=R32(c->r[13]+0xFFFFC218u); // 800BD510
  c->lr=0x800BD518u; f_800CECDC(c); // 800BD514
  c->r[0]=0u+0x00000005u; // 800BD518
  c->r[5]=c->r[30]+0x00000270u; // 800BD51C
  c->r[4]=c->r[3]+0xFFFFFFFCu; // 800BD520
  c->ctr=c->r[0]; // 800BD524
L_800BD528:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 800BD528
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R32(ea); c->r[4]=ea;} // 800BD52C
  W32(c->r[5]+0x00000004u,c->r[3]); // 800BD530
  {uint32_t ea=c->r[5]+0x00000008u; W32(ea,c->r[0]); c->r[5]=ea;} // 800BD534
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800BD528; } // 800BD538
  c->r[0]=R16(c->r[4]+0x00000004u); // 800BD53C
  W16(c->r[5]+0x00000004u,c->r[0]); // 800BD540
  c->r[0]=R8(c->r[4]+0x00000006u); // 800BD544
  W8(c->r[5]+0x00000006u,c->r[0]); // 800BD548
  c->r[3]=R32(c->r[13]+0xFFFFC218u); // 800BD54C
  c->lr=0x800BD554u; f_800CECFC(c); // 800BD550
  c->r[7]=R32(c->r[3]+0x00000000u); // 800BD554
  c->r[0]=0u+0x00000003u; // 800BD558
  c->r[4]=R32(c->r[3]+0x00000004u); // 800BD55C
  c->r[6]=c->r[30]+0x000002B0u; // 800BD560
  W32(c->r[30]+0x000002A4u,c->r[4]); // 800BD564
  c->r[5]=c->r[3]+0x00000010u; // 800BD568
  W32(c->r[30]+0x000002A0u,c->r[7]); // 800BD56C
  c->r[7]=R32(c->r[3]+0x00000008u); // 800BD570
  c->r[4]=R32(c->r[3]+0x0000000Cu); // 800BD574
  W32(c->r[30]+0x000002ACu,c->r[4]); // 800BD578
  W32(c->r[30]+0x000002A8u,c->r[7]); // 800BD57C
  c->r[4]=R32(c->r[3]+0x00000010u); // 800BD580
  W32(c->r[30]+0x000002B0u,c->r[4]); // 800BD584
  c->ctr=c->r[0]; // 800BD588
L_800BD58C:;
  c->r[4]=R32(c->r[5]+0x00000004u); // 800BD58C
  {uint32_t ea=c->r[5]+0x00000008u; c->r[0]=R32(ea); c->r[5]=ea;} // 800BD590
  W32(c->r[6]+0x00000004u,c->r[4]); // 800BD594
  {uint32_t ea=c->r[6]+0x00000008u; W32(ea,c->r[0]); c->r[6]=ea;} // 800BD598
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800BD58C; } // 800BD59C
  c->r[0]=R32(c->r[3]+0x0000002Cu); // 800BD5A0
  W32(c->r[30]+0x000002CCu,c->r[0]); // 800BD5A4
  c->r[0]=R32(c->r[3]+0x00000030u); // 800BD5A8
  W32(c->r[30]+0x000002D0u,c->r[0]); // 800BD5AC
  c->r[0]=R32(c->r[3]+0x00000034u); // 800BD5B0
  W32(c->r[30]+0x000002D4u,c->r[0]); // 800BD5B4
  c->r[0]=R32(c->r[3]+0x00000038u); // 800BD5B8
  W32(c->r[30]+0x000002D8u,c->r[0]); // 800BD5BC
  c->r[0]=R32(c->r[3]+0x0000003Cu); // 800BD5C0
  W32(c->r[30]+0x000002DCu,c->r[0]); // 800BD5C4
  c->r[0]=R32(c->r[3]+0x00000040u); // 800BD5C8
  W32(c->r[30]+0x000002E0u,c->r[0]); // 800BD5CC
  c->r[0]=R32(c->r[3]+0x00000044u); // 800BD5D0
  W32(c->r[30]+0x000002E4u,c->r[0]); // 800BD5D4
  c->r[0]=R32(c->r[3]+0x00000048u); // 800BD5D8
  W32(c->r[30]+0x000002E8u,c->r[0]); // 800BD5DC
L_800BD5E0:;
  c->r[0]=0u+0x00000000u; // 800BD5E0
  W8(c->r[31]+0x0000000Cu,c->r[0]); // 800BD5E4
  c->r[3]=c->r[31]+0x0000000Cu; // 800BD5E8
  c->lr=0x800BD5F0u; f_80045AE4(c); // 800BD5EC
  c->r[4]=0u+0x00006410u; // 800BD5F0
  c->r[3]=c->r[3]+0x00000034u; // 800BD5F4
  c->lr=0x800BD5FCu; f_803C4D08(c); // 800BD5F8
  cmps(c,0,(int32_t)c->r[3],0); // 800BD5FC
  c->r[29]=c->r[3]|c->r[3]; // 800BD600
  if (crb(c,2)) { goto L_800BD63C; } // 800BD604
  c->r[4]=0u+0x800C0000u; // 800BD608
  W32(c->r[31]+0x0000006Cu,c->r[1]); // 800BD60C
  c->r[4]=c->r[4]+0xFFFFD828u; // 800BD610
  c->r[5]=0u+0x00000000u; // 800BD614
  c->r[6]=0u+0x00000064u; // 800BD618
  c->r[7]=0u+0x00000100u; // 800BD61C
  c->lr=0x800BD624u; f_803A9670(c); // 800BD620
  c->r[29]=c->r[3]|c->r[3]; // 800BD624
  goto L_800BD63C; // 800BD628
  c->r[3]=0u+0x00000000u; // 800BD62C
  c->r[4]=0u+0x00000000u; // 800BD630
  c->r[5]=0u+0x00000000u; // 800BD634
  c->lr=0x800BD63Cu; f_803ABBF0(c); // 800BD638
L_800BD63C:;
  W32(c->r[30]+0x000000ACu,c->r[29]); // 800BD63C
  c->r[3]=0u+0x00000000u; // 800BD640
  goto L_800BD730; // 800BD644
L_800BD648:;
  c->r[0]=(uint32_t)((int32_t)c->r[3]*(int32_t)100); // 800BD648
  c->r[4]=R32(c->r[30]+0x000000ACu); // 800BD64C
  {uint32_t ea=c->r[2]+0xFFFFA0F8u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BD650
  c->r[7]=0u+0xFFFFFFFFu; // 800BD654
  c->r[6]=0u+0x00000000u; // 800BD658
  c->r[5]=c->r[4]+c->r[0]; // 800BD65C
  {uint32_t ea=c->r[5]+0x0000001Cu; WF32(ea,c->f[0]);} // 800BD660
  c->r[4]=0u+0x00000000u; // 800BD664
  {uint32_t ea=c->r[5]+0x00000020u; WF32(ea,c->f[0]);} // 800BD668
  {uint32_t ea=c->r[5]+0x00000024u; WF32(ea,c->f[0]);} // 800BD66C
  c->r[5]=R32(c->r[30]+0x000000ACu); // 800BD670
  c->r[5]=c->r[5]+c->r[0]; // 800BD674
  {uint32_t ea=c->r[5]+0x00000028u; WF32(ea,c->f[0]);} // 800BD678
  {uint32_t ea=c->r[5]+0x0000002Cu; WF32(ea,c->f[0]);} // 800BD67C
  {uint32_t ea=c->r[5]+0x00000030u; WF32(ea,c->f[0]);} // 800BD680
  c->r[5]=R32(c->r[30]+0x000000ACu); // 800BD684
  c->r[5]=c->r[5]+c->r[0]; // 800BD688
  {uint32_t ea=c->r[5]+0x00000034u; WF32(ea,c->f[0]);} // 800BD68C
  c->r[5]=R32(c->r[30]+0x000000ACu); // 800BD690
  c->r[5]=c->r[5]+c->r[0]; // 800BD694
  W32(c->r[5]+0x00000038u,c->r[7]); // 800BD698
  c->r[5]=R32(c->r[30]+0x000000ACu); // 800BD69C
  c->r[5]=c->r[5]+c->r[0]; // 800BD6A0
  W32(c->r[5]+0x0000003Cu,c->r[7]); // 800BD6A4
  c->r[5]=R32(c->r[30]+0x000000ACu); // 800BD6A8
  c->r[5]=c->r[5]+c->r[0]; // 800BD6AC
  W32(c->r[5]+0x00000040u,c->r[7]); // 800BD6B0
  c->r[5]=R32(c->r[30]+0x000000ACu); // 800BD6B4
  c->r[5]=c->r[5]+c->r[0]; // 800BD6B8
  W32(c->r[5]+0x00000044u,c->r[7]); // 800BD6BC
  c->r[5]=R32(c->r[30]+0x000000ACu); // 800BD6C0
  c->r[5]=c->r[5]+c->r[0]; // 800BD6C4
  {uint32_t ea=c->r[5]+0x00000048u; WF32(ea,c->f[0]);} // 800BD6C8
  c->r[5]=R32(c->r[30]+0x000000ACu); // 800BD6CC
  c->r[5]=c->r[5]+c->r[0]; // 800BD6D0
  {uint32_t ea=c->r[5]+0x0000004Cu; WF32(ea,c->f[0]);} // 800BD6D4
  c->r[5]=R32(c->r[30]+0x000000ACu); // 800BD6D8
  c->r[5]=c->r[5]+c->r[0]; // 800BD6DC
  {uint32_t ea=c->r[5]+0x00000050u; WF32(ea,c->f[0]);} // 800BD6E0
  c->r[5]=R32(c->r[30]+0x000000ACu); // 800BD6E4
  c->r[5]=c->r[5]+c->r[0]; // 800BD6E8
  W32(c->r[5]+0x00000054u,c->r[6]); // 800BD6EC
  goto L_800BD724; // 800BD6F0
L_800BD6F4:;
  c->r[6]=R32(c->r[30]+0x000000ACu); // 800BD6F4
  c->r[8]=rotl(c->r[4],2)&0xFFFFFFFCu; // 800BD6F8
  c->r[5]=c->r[4]+c->r[0]; // 800BD6FC
  {uint32_t ea=c->r[2]+0xFFFFA0F8u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BD700
  c->r[6]=c->r[0]+c->r[6]; // 800BD704
  c->r[7]=0u+0x00000000u; // 800BD708
  c->r[6]=c->r[8]+c->r[6]; // 800BD70C
  c->r[4]=c->r[4]+0x00000001u; // 800BD710
  {uint32_t ea=c->r[6]+0x00000058u; WF32(ea,c->f[0]);} // 800BD714
  c->r[6]=R32(c->r[30]+0x000000ACu); // 800BD718
  c->r[5]=c->r[6]+c->r[5]; // 800BD71C
  W8(c->r[5]+0x00000060u,c->r[7]); // 800BD720
L_800BD724:;
  cmps(c,0,(int32_t)c->r[4],2); // 800BD724
  if (crb(c,0)) { IRQCHK(c); goto L_800BD6F4; } // 800BD728
  c->r[3]=c->r[3]+0x00000001u; // 800BD72C
L_800BD730:;
  cmps(c,0,(int32_t)c->r[3],256); // 800BD730
  if (crb(c,0)) { IRQCHK(c); goto L_800BD648; } // 800BD734
  c->r[0]=0u+0x00000000u; // 800BD738
  W8(c->r[31]+0x00000008u,c->r[0]); // 800BD73C
  c->r[3]=c->r[31]+0x00000008u; // 800BD740
  c->lr=0x800BD748u; f_80045AE4(c); // 800BD744
  c->r[4]=0u+0x00000208u; // 800BD748
  c->r[3]=c->r[3]+0x00000034u; // 800BD74C
  c->lr=0x800BD754u; f_803C4D08(c); // 800BD750
  cmps(c,0,(int32_t)c->r[3],0); // 800BD754
  c->r[29]=c->r[3]|c->r[3]; // 800BD758
  if (crb(c,2)) { goto L_800BD794; } // 800BD75C
  c->r[4]=0u+0x800C0000u; // 800BD760
  W32(c->r[31]+0x00000054u,c->r[1]); // 800BD764
  c->r[4]=c->r[4]+0xFFFFD82Cu; // 800BD768
  c->r[5]=0u+0x00000000u; // 800BD76C
  c->r[6]=0u+0x0000001Cu; // 800BD770
  c->r[7]=0u+0x00000012u; // 800BD774
  c->lr=0x800BD77Cu; f_803A9670(c); // 800BD778
  c->r[29]=c->r[3]|c->r[3]; // 800BD77C
  goto L_800BD794; // 800BD780
  c->r[3]=0u+0x00000000u; // 800BD784
  c->r[4]=0u+0x00000000u; // 800BD788
  c->r[5]=0u+0x00000000u; // 800BD78C
  c->lr=0x800BD794u; f_803ABBF0(c); // 800BD790
L_800BD794:;
  W32(c->r[30]+0x000000B0u,c->r[29]); // 800BD794
  c->r[29]=0u+0x00000000u; // 800BD798
  goto L_800BD800; // 800BD79C
L_800BD7A0:;
  c->r[3]=0u+0x806D0000u; // 800BD7A0
  c->r[0]=rotl(c->r[29],4)&0xFFFFFFF0u; // 800BD7A4
  c->r[3]=c->r[3]+0x00007038u; // 800BD7A8
  c->r[5]=R32(c->r[3]+c->r[0]); // 800BD7AC
  cmps(c,0,(int32_t)c->r[5],0); // 800BD7B0
  if (crb(c,2)) { goto L_800BD7FC; } // 800BD7B4
  c->r[3]=c->r[31]+0x00000020u; // 800BD7B8
  c->r[4]=c->r[30]+0x000000B8u; // 800BD7BC
  c->lr=0x800BD7C4u; f_800AF0F0(c); // 800BD7C0
  c->r[3]=(uint32_t)((int32_t)c->r[29]*(int32_t)28); // 800BD7C4
  c->r[5]=R32(c->r[30]+0x000000B0u); // 800BD7C8
  c->r[0]=0u+0x00000003u; // 800BD7CC
  c->r[4]=c->r[31]+0x0000001Cu; // 800BD7D0
  c->r[6]=c->r[5]+c->r[3]; // 800BD7D4
  c->r[5]=c->r[6]+0xFFFFFFFCu; // 800BD7D8
  c->ctr=c->r[0]; // 800BD7DC
L_800BD7E0:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 800BD7E0
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R32(ea); c->r[4]=ea;} // 800BD7E4
  W32(c->r[5]+0x00000004u,c->r[3]); // 800BD7E8
  {uint32_t ea=c->r[5]+0x00000008u; W32(ea,c->r[0]); c->r[5]=ea;} // 800BD7EC
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800BD7E0; } // 800BD7F0
  {uint32_t ea=c->r[31]+0x00000038u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BD7F4
  {uint32_t ea=c->r[6]+0x00000018u; WF32(ea,c->f[0]);} // 800BD7F8
L_800BD7FC:;
  c->r[29]=c->r[29]+0x00000001u; // 800BD7FC
L_800BD800:;
  cmps(c,0,(int32_t)c->r[29],18); // 800BD800
  if (crb(c,0)) { IRQCHK(c); goto L_800BD7A0; } // 800BD804
  c->r[10]=c->r[31]|c->r[31]; // 800BD808
  c->r[11]=c->r[10]+0x00000080u; // 800BD80C
  c->lr=0x800BD814u; { c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800BD810
  c->r[10]=R32(c->r[1]+0x00000000u); // 800BD814
  c->r[0]=R32(c->r[10]+0x00000004u); // 800BD818
  c->r[1]=c->r[10]|c->r[10]; // 800BD81C
  c->lr=c->r[0]; // 800BD820
  return; // 800BD824
}

// fn_800BD828
void f_800BD828(Ctx* __restrict c) {
  trace_call(0x800BD828u);
  return; // 800BD828
}

// fn_800BD82C
void f_800BD82C(Ctx* __restrict c) {
  trace_call(0x800BD82Cu);
  return; // 800BD82C
}

// fn_800BD830
void f_800BD830(Ctx* __restrict c) {
  trace_call(0x800BD830u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BD830
  c->r[0]=c->lr; // 800BD834
  c->r[4]=0u+0xFFFFFFFFu; // 800BD838
  W32(c->r[1]+0x00000014u,c->r[0]); // 800BD83C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800BD840
  c->r[31]=c->r[3]|c->r[3]; // 800BD844
  c->lr=0x800BD84Cu; f_800BF5E8(c); // 800BD848
  c->r[3]=c->r[31]+0x000000B8u; // 800BD84C
  c->r[4]=0u+0x00000000u; // 800BD850
  c->lr=0x800BD858u; f_800AE63C(c); // 800BD854
  c->r[0]=R32(c->r[1]+0x00000014u); // 800BD858
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800BD85C
  c->lr=c->r[0]; // 800BD860
  c->r[1]=c->r[1]+0x00000010u; // 800BD864
  return; // 800BD868
}

// fn_800BD86C
void f_800BD86C(Ctx* __restrict c) {
  trace_call(0x800BD86Cu);
  {uint32_t ea=c->r[1]+0xFFFFFE50u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BD86C
  c->r[0]=c->lr; // 800BD870
  W32(c->r[1]+0x000001B4u,c->r[0]); // 800BD874
  c->r[11]=c->r[1]+0x00000140u; // 800BD878
  {uint32_t ea=c->r[1]+0x000001A0u; WF64(ea,c->f[31]);} // 800BD87C
  {uint32_t ea=c->r[1]+0x000001A8u; psq_store(c,31,ea,0,0);} // 800BD880
  {uint32_t ea=c->r[1]+0x00000190u; WF64(ea,c->f[30]);} // 800BD884
  {uint32_t ea=c->r[1]+0x00000198u; psq_store(c,30,ea,0,0);} // 800BD888
  {uint32_t ea=c->r[1]+0x00000180u; WF64(ea,c->f[29]);} // 800BD88C
  {uint32_t ea=c->r[1]+0x00000188u; psq_store(c,29,ea,0,0);} // 800BD890
  {uint32_t ea=c->r[1]+0x00000170u; WF64(ea,c->f[28]);} // 800BD894
  {uint32_t ea=c->r[1]+0x00000178u; psq_store(c,28,ea,0,0);} // 800BD898
  {uint32_t ea=c->r[1]+0x00000160u; WF64(ea,c->f[27]);} // 800BD89C
  {uint32_t ea=c->r[1]+0x00000168u; psq_store(c,27,ea,0,0);} // 800BD8A0
  {uint32_t ea=c->r[1]+0x00000150u; WF64(ea,c->f[26]);} // 800BD8A4
  {uint32_t ea=c->r[1]+0x00000158u; psq_store(c,26,ea,0,0);} // 800BD8A8
  {uint32_t ea=c->r[1]+0x00000140u; WF64(ea,c->f[25]);} // 800BD8AC
  {uint32_t ea=c->r[1]+0x00000148u; psq_store(c,25,ea,0,0);} // 800BD8B0
  c->lr=0x800BD8B8u; { W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800BD8B4
  c->r[29]=0u+0x00000000u; // 800BD8B8
  W8(c->r[1]+0x00000014u,c->r[29]); // 800BD8BC
  c->r[31]=c->r[3]|c->r[3]; // 800BD8C0
  c->r[3]=c->r[1]+0x00000014u; // 800BD8C4
  c->lr=0x800BD8CCu; f_80047A80(c); // 800BD8C8
  c->r[3]=R32(c->r[3]+0x00000004u); // 800BD8CC
  c->lr=0x800BD8D4u; f_804CC8D4(c); // 800BD8D0
  W32(c->r[1]+0x0000001Cu,c->r[3]); // 800BD8D4
  c->r[3]=c->r[1]+0x0000001Cu; // 800BD8D8
  c->r[4]=c->r[1]+0x000000BCu; // 800BD8DC
  c->lr=0x800BD8E4u; f_804C7AC0(c); // 800BD8E0
  W8(c->r[1]+0x00000010u,c->r[29]); // 800BD8E4
  c->r[3]=c->r[1]+0x00000010u; // 800BD8E8
  c->lr=0x800BD8F0u; f_80047A80(c); // 800BD8EC
  c->r[3]=R32(c->r[3]+0x00000004u); // 800BD8F0
  c->lr=0x800BD8F8u; f_804CC8D4(c); // 800BD8F4
  W32(c->r[1]+0x00000018u,c->r[3]); // 800BD8F8
  c->r[3]=c->r[1]+0x00000018u; // 800BD8FC
  c->r[4]=c->r[1]+0x000000C8u; // 800BD900
  c->lr=0x800BD908u; f_804C7D10(c); // 800BD904
  c->r[3]=c->r[1]+0x00000098u; // 800BD908
  c->r[4]=c->r[1]+0x000000D8u; // 800BD90C
  c->lr=0x800BD914u; f_800B6DE8(c); // 800BD910
  c->r[3]=c->r[1]+0x00000098u; // 800BD914
  c->r[5]=c->r[1]+0x000000BCu; // 800BD918
  c->r[4]=c->r[3]|c->r[3]; // 800BD91C
  c->lr=0x800BD924u; f_800772A0(c); // 800BD920
  c->r[28]=0u+0x80750000u; // 800BD924
  c->r[27]=0u+0x80750000u; // 800BD928
  {uint32_t ea=c->r[2]+0xFFFFA0F8u; c->f[26]=c->ps1[26]=RF32(ea);} // 800BD92C
  c->r[28]=c->r[28]+0x00002ED8u; // 800BD930
  {uint32_t ea=c->r[2]+0xFFFFA0FCu; c->f[25]=c->ps1[25]=RF32(ea);} // 800BD934
  c->r[27]=c->r[27]+0x000032D8u; // 800BD938
  c->r[22]=0u+0x00000000u; // 800BD93C
L_800BD940:;
  c->r[0]=R32(c->r[31]+0x000000ACu); // 800BD940
  c->r[3]=c->r[0]+c->r[29]; // 800BD944
  c->r[0]=R32(c->r[3]+0x0000003Cu); // 800BD948
  cmps(c,0,(int32_t)c->r[0],0); // 800BD94C
  if (!crb(c,0)) { goto L_800BD960; } // 800BD950
  c->r[24]=rotl(c->r[22],2)&0xFFFFFFFCu; // 800BD954
  {uint32_t ea=c->r[28]+c->r[24]; WF32(ea,c->f[25]);} // 800BD958
  goto L_800BD9C8; // 800BD95C
L_800BD960:;
  c->r[4]=c->r[22]|c->r[22]; // 800BD960
  c->r[3]=c->r[31]+0x000000B8u; // 800BD964
  c->lr=0x800BD96Cu; f_800AEDAC(c); // 800BD968
  c->r[4]=c->r[3]|c->r[3]; // 800BD96C
  c->r[3]=c->r[1]+0x000000B0u; // 800BD970
  {uint32_t ea=c->r[4]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800BD974
  {uint32_t ea=c->r[4]+0x0000001Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 800BD978
  {uint32_t ea=c->r[4]+0x0000002Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 800BD97C
  c->lr=0x800BD984u; f_8005A6D0(c); // 800BD980
  c->r[3]=c->r[1]+0x000000B0u; // 800BD984
  c->r[5]=c->r[1]+0x000000BCu; // 800BD988
  c->r[4]=c->r[3]|c->r[3]; // 800BD98C
  c->lr=0x800BD994u; f_800772A0(c); // 800BD990
  c->r[3]=c->r[1]+0x00000098u; // 800BD994
  c->r[4]=c->r[1]+0x000000B0u; // 800BD998
  c->lr=0x800BD9A0u; f_800B3F44(c); // 800BD99C
  fcmp(c,0,c->f[1],c->f[26]); // 800BD9A0
  if (!crb(c,0)) { goto L_800BD9B4; } // 800BD9A4
  c->r[24]=rotl(c->r[22],2)&0xFFFFFFFCu; // 800BD9A8
  {uint32_t ea=c->r[28]+c->r[24]; WF32(ea,c->f[25]);} // 800BD9AC
  goto L_800BD9C8; // 800BD9B0
L_800BD9B4:;
  c->r[3]=c->r[1]+0x000000B0u; // 800BD9B4
  c->r[24]=rotl(c->r[22],2)&0xFFFFFFFCu; // 800BD9B8
  c->r[4]=c->r[3]|c->r[3]; // 800BD9BC
  c->lr=0x800BD9C4u; f_800B3F44(c); // 800BD9C0
  {uint32_t ea=c->r[28]+c->r[24]; WF32(ea,c->f[1]);} // 800BD9C4
L_800BD9C8:;
  W32(c->r[27]+c->r[24],c->r[22]); // 800BD9C8
  c->r[22]=c->r[22]+0x00000001u; // 800BD9CC
  cmps(c,0,(int32_t)c->r[22],256); // 800BD9D0
  c->r[29]=c->r[29]+0x00000064u; // 800BD9D4
  if (crb(c,0)) { IRQCHK(c); goto L_800BD940; } // 800BD9D8
  c->r[5]=0u+0x80750000u; // 800BD9DC
  c->r[27]=0u+0x80750000u; // 800BD9E0
  c->r[5]=c->r[5]+0x00002ED8u; // 800BD9E4
  c->r[3]=0u+0x00000000u; // 800BD9E8
  c->r[6]=c->r[27]+0x000032D8u; // 800BD9EC
  c->r[4]=0u+0x000000FFu; // 800BD9F0
  c->lr=0x800BD9F8u; f_800B7164(c); // 800BD9F4
  c->r[27]=c->r[27]+0x000032D8u; // 800BD9F8
  c->r[23]=0u+0x00000000u; // 800BD9FC
  c->r[29]=0u+0x00000000u; // 800BDA00
L_800BDA04:;
  c->r[4]=R32(c->r[27]+c->r[29]); // 800BDA04
  c->r[3]=c->r[31]+0x000000B8u; // 800BDA08
  c->lr=0x800BDA10u; f_800AEBEC(c); // 800BDA0C
  c->r[23]=c->r[23]+0x00000001u; // 800BDA10
  c->r[29]=c->r[29]+0x00000004u; // 800BDA14
  cmps(c,0,(int32_t)c->r[23],32); // 800BDA18
  if (crb(c,0)) { IRQCHK(c); goto L_800BDA04; } // 800BDA1C
  c->r[27]=0u+0x80750000u; // 800BDA20
  c->r[23]=0u+0x00000020u; // 800BDA24
  c->r[27]=c->r[27]+0x000032D8u; // 800BDA28
  c->r[29]=0u+0x00000080u; // 800BDA2C
L_800BDA30:;
  c->r[4]=R32(c->r[27]+c->r[29]); // 800BDA30
  c->r[3]=c->r[31]+0x000000B8u; // 800BDA34
  c->lr=0x800BDA3Cu; f_800AEB64(c); // 800BDA38
  c->r[23]=c->r[23]+0x00000001u; // 800BDA3C
  c->r[29]=c->r[29]+0x00000004u; // 800BDA40
  cmps(c,0,(int32_t)c->r[23],256); // 800BDA44
  if (crb(c,0)) { IRQCHK(c); goto L_800BDA30; } // 800BDA48
  c->r[23]=0u+0x00000000u; // 800BDA4C
  c->r[29]=0u+0x00000000u; // 800BDA50
L_800BDA54:;
  c->r[0]=R32(c->r[31]+0x000000ACu); // 800BDA54
  c->r[3]=c->r[0]+c->r[29]; // 800BDA58
  c->r[3]=R32(c->r[3]+0x0000003Cu); // 800BDA5C
  cmps(c,0,(int32_t)c->r[3],0); // 800BDA60
  if (crb(c,0)) { goto L_800BDA84; } // 800BDA64
  c->lr=0x800BDA6Cu; f_800BFDF0(c); // 800BDA68
  c->r[0]=R32(c->r[3]+0x00000008u); // 800BDA6C
  c->r[0]=rotl(c->r[0],0)&0x00000010u; cr0(c,c->r[0]); // 800BDA70
  if (crb(c,2)) { goto L_800BDA84; } // 800BDA74
  c->r[3]=c->r[31]|c->r[31]; // 800BDA78
  c->r[4]=c->r[23]|c->r[23]; // 800BDA7C
  c->lr=0x800BDA84u; f_800C0564(c); // 800BDA80
L_800BDA84:;
  c->r[23]=c->r[23]+0x00000001u; // 800BDA84
  c->r[29]=c->r[29]+0x00000064u; // 800BDA88
  cmps(c,0,(int32_t)c->r[23],256); // 800BDA8C
  if (crb(c,0)) { IRQCHK(c); goto L_800BDA54; } // 800BDA90
  c->r[3]=c->r[31]+0x000000B8u; // 800BDA94
  c->r[4]=0u+0x00000000u; // 800BDA98
  c->lr=0x800BDAA0u; f_800AE63C(c); // 800BDA9C
  c->r[28]=0u+0x80690000u; // 800BDAA0
  {uint32_t ea=c->r[2]+0xFFFFA118u; c->f[26]=RF64(ea);} // 800BDAA4
  {uint32_t ea=c->r[2]+0xFFFFA104u; c->f[27]=c->ps1[27]=RF32(ea);} // 800BDAA8
  c->r[24]=c->r[1]+0x00000020u; // 800BDAAC
  {uint32_t ea=c->r[2]+0xFFFFA100u; c->f[28]=c->ps1[28]=RF32(ea);} // 800BDAB0
  c->r[25]=c->r[1]+0x0000002Cu; // 800BDAB4
  {uint32_t ea=c->r[2]+0xFFFFA108u; c->f[29]=c->ps1[29]=RF32(ea);} // 800BDAB8
  c->r[28]=c->r[28]+0xFFFFE4C0u; // 800BDABC
  {uint32_t ea=c->r[2]+0xFFFFA10Cu; c->f[30]=c->ps1[30]=RF32(ea);} // 800BDAC0
  c->r[23]=0u+0x00000000u; // 800BDAC4
  {uint32_t ea=c->r[2]+0xFFFFA0F8u; c->f[25]=c->ps1[25]=RF32(ea);} // 800BDAC8
  c->r[29]=0u+0x00000000u; // 800BDACC
  c->r[27]=0u+0x00000000u; // 800BDAD0
  c->r[30]=0u+0x43300000u; // 800BDAD4
L_800BDAD8:;
  c->r[0]=R32(c->r[31]+0x000000ACu); // 800BDAD8
  c->r[22]=c->r[0]+c->r[29]; // 800BDADC
  c->r[0]=R32(c->r[22]+0x0000003Cu); // 800BDAE0
  cmps(c,0,(int32_t)c->r[0],0); // 800BDAE4
  if (crb(c,0)) { goto L_800BDC90; } // 800BDAE8
  W8(c->r[1]+0x0000000Cu,c->r[27]); // 800BDAEC
  c->r[3]=c->r[1]+0x0000000Cu; // 800BDAF0
  c->lr=0x800BDAF8u; f_8004714C(c); // 800BDAF4
  {uint32_t ea=c->r[3]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 800BDAF8
  {uint32_t ea=c->r[22]+0x00000048u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BDAFC
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 800BDB00
  {uint32_t ea=c->r[22]+0x00000048u; WF32(ea,c->f[0]);} // 800BDB04
  fcmp(c,0,c->f[0],c->f[25]); // 800BDB08
  if (!crb(c,0)) { goto L_800BDC90; } // 800BDB0C
  c->lr=0x800BDB14u; f_803B220C(c); // 800BDB10
  c->r[0]=c->r[3]^0x80000000u; // 800BDB14
  W32(c->r[1]+0x000000FCu,c->r[0]); // 800BDB18
  c->r[5]=c->r[22]|c->r[22]; // 800BDB1C
  c->r[3]=c->r[1]+0x00000080u; // 800BDB20
  W32(c->r[1]+0x000000F8u,c->r[30]); // 800BDB24
  c->r[4]=c->r[22]+0x0000000Cu; // 800BDB28
  {uint32_t ea=c->r[1]+0x000000F8u; c->f[0]=RF64(ea);} // 800BDB2C
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[26]); // 800BDB30
  c->f[0]=c->ps1[0]=S(std::fma(c->f[27],c->f[0],c->f[28])); // 800BDB34
  {uint32_t ea=c->r[22]+0x00000048u; WF32(ea,c->f[0]);} // 800BDB38
  c->lr=0x800BDB40u; f_800772A0(c); // 800BDB3C
  c->lr=0x800BDB44u; f_803B220C(c); // 800BDB40
  c->r[0]=c->r[3]^0x80000000u; // 800BDB44
  W32(c->r[1]+0x00000104u,c->r[0]); // 800BDB48
  c->r[3]=c->r[1]+0x0000008Cu; // 800BDB4C
  c->r[4]=c->r[1]+0x00000080u; // 800BDB50
  W32(c->r[1]+0x00000100u,c->r[30]); // 800BDB54
  {uint32_t ea=c->r[1]+0x00000100u; c->f[0]=RF64(ea);} // 800BDB58
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[26]); // 800BDB5C
  c->f[1]=c->ps1[1]=S(c->f[27]*c->f[0]); // 800BDB60
  c->lr=0x800BDB68u; f_800BDD70(c); // 800BDB64
  c->r[3]=c->r[1]+0x000000A4u; // 800BDB68
  c->r[4]=c->r[1]+0x0000008Cu; // 800BDB6C
  c->lr=0x800BDB74u; f_800B6DE8(c); // 800BDB70
  {uint32_t ea=c->r[22]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BDB74
  c->r[3]=c->r[1]+0x000000A4u; // 800BDB78
  {uint32_t ea=c->r[1]+0x00000074u; WF32(ea,c->f[0]);} // 800BDB7C
  c->r[4]=c->r[3]|c->r[3]; // 800BDB80
  c->r[5]=c->r[1]+0x00000074u; // 800BDB84
  {uint32_t ea=c->r[22]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BDB88
  {uint32_t ea=c->r[1]+0x00000078u; WF32(ea,c->f[0]);} // 800BDB8C
  {uint32_t ea=c->r[22]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BDB90
  {uint32_t ea=c->r[1]+0x0000007Cu; WF32(ea,c->f[0]);} // 800BDB94
  c->lr=0x800BDB9Cu; f_8005ED10(c); // 800BDB98
  c->lr=0x800BDBA0u; f_8033FE4C(c); // 800BDB9C
  c->r[26]=c->r[3]|c->r[3]; // 800BDBA0
  c->r[3]=c->r[1]+0x00000020u; // 800BDBA4
  c->r[4]=c->r[26]|c->r[26]; // 800BDBA8
  c->lr=0x800BDBB0u; f_800678FC(c); // 800BDBAC
  {uint32_t ea=c->r[26]+0x00000144u; psq_load(c,1,ea,0,0);} // 800BDBB0
  {uint32_t ea=c->r[24]+0x00000004u; psq_load(c,0,ea,0,0);} // 800BDBB4
  {double t0=S(c->f[1]*c->ps1[0]), t1=S(c->ps1[1]*c->ps1[0]); c->f[3]=t0; c->ps1[3]=t1;} // 800BDBB8
  {uint32_t ea=c->r[24]+0x00000000u; psq_load(c,2,ea,0,0);} // 800BDBBC
  {double t0=S(c->f[0]*c->f[1]), t1=S(c->ps1[0]*c->ps1[1]); c->f[0]=t0; c->ps1[0]=t1;} // 800BDBC0
  {uint32_t ea=c->r[26]+0x00000148u; psq_load(c,1,ea,0,0);} // 800BDBC4
  {double t0=S(std::fma(c->f[2],c->f[1],-c->f[0])), t1=S(std::fma(c->ps1[2],c->ps1[1],-c->ps1[0])); c->f[0]=t0; c->ps1[0]=t1;} // 800BDBC8
  {double t0=S(c->f[2]*c->ps1[1]), t1=S(c->ps1[2]*c->ps1[1]); c->f[1]=t0; c->ps1[1]=t1;} // 800BDBCC
  {uint32_t ea=c->r[25]+0x00000008u; psq_store(c,0,ea,1,0);} // 800BDBD0
  {double t0=S(c->f[3]-c->f[1]), t1=S(c->ps1[3]-c->ps1[1]); c->f[2]=t0; c->ps1[2]=t1;} // 800BDBD4
  {double t0=S(c->ps1[0]), t1=S(c->f[2]); c->f[1]=t0; c->ps1[1]=t1;} // 800BDBD8
  {uint32_t ea=c->r[25]+0x00000000u; psq_store(c,1,ea,0,0);} // 800BDBDC
  c->r[4]=c->r[25]|c->r[25]; // 800BDBE0
  c->r[3]=c->r[1]+0x00000050u; // 800BDBE4
  c->lr=0x800BDBECu; f_8005CD7C(c); // 800BDBE8
  c->lr=0x800BDBF0u; f_803B220C(c); // 800BDBEC
  c->r[0]=c->r[3]^0x80000000u; // 800BDBF0
  W32(c->r[1]+0x0000010Cu,c->r[0]); // 800BDBF4
  {uint32_t ea=c->r[22]+0x00000018u; c->f[1]=c->ps1[1]=RF32(ea);} // 800BDBF8
  c->r[3]=c->r[1]+0x0000005Cu; // 800BDBFC
  W32(c->r[1]+0x00000108u,c->r[30]); // 800BDC00
  c->r[4]=c->r[1]+0x00000050u; // 800BDC04
  {uint32_t ea=c->r[1]+0x00000108u; c->f[0]=RF64(ea);} // 800BDC08
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[26]); // 800BDC0C
  c->f[31]=c->ps1[31]=S(std::fma(c->f[29],c->f[0],-c->f[28])); // 800BDC10
  c->lr=0x800BDC18u; f_8005ED34(c); // 800BDC14
  c->f[1]=c->f[31]; // 800BDC18
  c->r[3]=c->r[1]+0x00000068u; // 800BDC1C
  c->r[4]=c->r[1]+0x0000005Cu; // 800BDC20
  c->lr=0x800BDC28u; f_8005ED34(c); // 800BDC24
  c->r[3]=c->r[1]+0x000000A4u; // 800BDC28
  c->r[5]=c->r[1]+0x00000068u; // 800BDC2C
  c->r[4]=c->r[3]|c->r[3]; // 800BDC30
  c->lr=0x800BDC38u; f_8005ED10(c); // 800BDC34
  c->lr=0x800BDC3Cu; f_8033FE4C(c); // 800BDC38
  c->r[4]=c->r[3]|c->r[3]; // 800BDC3C
  c->r[3]=c->r[1]+0x00000038u; // 800BDC40
  c->lr=0x800BDC48u; f_800678FC(c); // 800BDC44
  {uint32_t ea=c->r[22]+0x00000018u; c->f[1]=c->ps1[1]=RF32(ea);} // 800BDC48
  c->r[3]=c->r[1]+0x00000044u; // 800BDC4C
  c->r[4]=c->r[1]+0x00000038u; // 800BDC50
  c->lr=0x800BDC58u; f_8005ED34(c); // 800BDC54
  c->r[3]=c->r[1]+0x000000A4u; // 800BDC58
  c->r[5]=c->r[1]+0x00000044u; // 800BDC5C
  c->r[4]=c->r[3]|c->r[3]; // 800BDC60
  c->lr=0x800BDC68u; f_800772A0(c); // 800BDC64
  c->r[3]=c->r[1]+0x000000A4u; // 800BDC68
  c->r[4]=c->r[1]+0x000000BCu; // 800BDC6C
  c->lr=0x800BDC74u; f_80383EF4(c); // 800BDC70
  fcmp(c,0,c->f[1],c->f[30]); // 800BDC74
  if (!crb(c,1)) { goto L_800BDC90; } // 800BDC78
  c->r[3]=c->r[28]+0x00000028u; // 800BDC7C
  c->r[4]=c->r[1]+0x000000A4u; // 800BDC80
  c->r[5]=0u+0x00000000u; // 800BDC84
  c->r[6]=0u+0x00000000u; // 800BDC88
  c->lr=0x800BDC90u; f_800BDD8C(c); // 800BDC8C
L_800BDC90:;
  c->r[23]=c->r[23]+0x00000001u; // 800BDC90
  c->r[29]=c->r[29]+0x00000064u; // 800BDC94
  cmps(c,0,(int32_t)c->r[23],256); // 800BDC98
  if (crb(c,0)) { IRQCHK(c); goto L_800BDAD8; } // 800BDC9C
  {uint32_t ea=c->r[2]+0xFFFFA110u; c->f[30]=c->ps1[30]=RF32(ea);} // 800BDCA0
  c->r[24]=0u+0x00000000u; // 800BDCA4
  {uint32_t ea=c->r[2]+0xFFFFA0F8u; c->f[31]=c->ps1[31]=RF32(ea);} // 800BDCA8
  c->r[30]=0u+0x00000000u; // 800BDCAC
  c->r[28]=0u+0x00000000u; // 800BDCB0
L_800BDCB4:;
  c->r[0]=R32(c->r[31]+0x000000ACu); // 800BDCB4
  c->r[22]=0u+0x00000000u; // 800BDCB8
  c->r[29]=0u+0x00000000u; // 800BDCBC
  c->r[23]=c->r[0]+c->r[30]; // 800BDCC0
L_800BDCC4:;
  W8(c->r[1]+0x00000008u,c->r[28]); // 800BDCC4
  c->r[3]=c->r[1]+0x00000008u; // 800BDCC8
  c->lr=0x800BDCD0u; f_8004714C(c); // 800BDCCC
  c->r[4]=c->r[23]+c->r[29]; // 800BDCD0
  {uint32_t ea=c->r[3]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 800BDCD4
  {uint32_t ea=c->r[4]+0x00000058u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BDCD8
  c->f[0]=c->ps1[0]=S(-std::fma(c->f[30],c->f[1],-c->f[0])); // 800BDCDC
  {uint32_t ea=c->r[4]+0x00000058u; WF32(ea,c->f[0]);} // 800BDCE0
  c->f[0]=c->ps1[0]=S(c->f[0]); // 800BDCE4
  fcmp(c,0,c->f[0],c->f[31]); // 800BDCE8
  if (!crb(c,0)) { goto L_800BDCF4; } // 800BDCEC
  {uint32_t ea=c->r[4]+0x00000058u; WF32(ea,c->f[31]);} // 800BDCF0
L_800BDCF4:;
  c->r[22]=c->r[22]+0x00000001u; // 800BDCF4
  c->r[29]=c->r[29]+0x00000004u; // 800BDCF8
  cmps(c,0,(int32_t)c->r[22],2); // 800BDCFC
  if (crb(c,0)) { IRQCHK(c); goto L_800BDCC4; } // 800BDD00
  c->r[24]=c->r[24]+0x00000001u; // 800BDD04
  c->r[30]=c->r[30]+0x00000064u; // 800BDD08
  cmps(c,0,(int32_t)c->r[24],256); // 800BDD0C
  if (crb(c,0)) { IRQCHK(c); goto L_800BDCB4; } // 800BDD10
  c->r[3]=c->r[31]|c->r[31]; // 800BDD14
  c->lr=0x800BDD1Cu; f_800BFE5C(c); // 800BDD18
  {uint32_t ea=c->r[1]+0x000001A8u; psq_load(c,31,ea,0,0);} // 800BDD1C
  c->r[3]=0u+0x00000001u; // 800BDD20
  {uint32_t ea=c->r[1]+0x000001A0u; c->f[31]=RF64(ea);} // 800BDD24
  {uint32_t ea=c->r[1]+0x00000198u; psq_load(c,30,ea,0,0);} // 800BDD28
  {uint32_t ea=c->r[1]+0x00000190u; c->f[30]=RF64(ea);} // 800BDD2C
  {uint32_t ea=c->r[1]+0x00000188u; psq_load(c,29,ea,0,0);} // 800BDD30
  {uint32_t ea=c->r[1]+0x00000180u; c->f[29]=RF64(ea);} // 800BDD34
  {uint32_t ea=c->r[1]+0x00000178u; psq_load(c,28,ea,0,0);} // 800BDD38
  {uint32_t ea=c->r[1]+0x00000170u; c->f[28]=RF64(ea);} // 800BDD3C
  {uint32_t ea=c->r[1]+0x00000168u; psq_load(c,27,ea,0,0);} // 800BDD40
  {uint32_t ea=c->r[1]+0x00000160u; c->f[27]=RF64(ea);} // 800BDD44
  {uint32_t ea=c->r[1]+0x00000158u; psq_load(c,26,ea,0,0);} // 800BDD48
  {uint32_t ea=c->r[1]+0x00000150u; c->f[26]=RF64(ea);} // 800BDD4C
  {uint32_t ea=c->r[1]+0x00000148u; psq_load(c,25,ea,0,0);} // 800BDD50
  {uint32_t ea=c->r[1]+0x00000140u; c->f[25]=RF64(ea);} // 800BDD54
  c->r[11]=c->r[1]+0x00000140u; // 800BDD58
  c->lr=0x800BDD60u; { c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800BDD5C
  c->r[0]=R32(c->r[1]+0x000001B4u); // 800BDD60
  c->lr=c->r[0]; // 800BDD64
  c->r[1]=c->r[1]+0x000001B0u; // 800BDD68
  return; // 800BDD6C
}

// fn_800BDD70
void f_800BDD70(Ctx* __restrict c) {
  trace_call(0x800BDD70u);
  {uint32_t ea=c->r[4]+0x00000000u; psq_load(c,0,ea,0,0);} // 800BDD70
  {double t0=S(c->f[0]*c->f[1]), t1=S(c->ps1[0]*c->f[1]); c->f[0]=t0; c->ps1[0]=t1;} // 800BDD74
  {uint32_t ea=c->r[3]+0x00000000u; psq_store(c,0,ea,0,0);} // 800BDD78
  {uint32_t ea=c->r[4]+0x00000008u; psq_load(c,0,ea,1,0);} // 800BDD7C
  {double t0=S(c->f[0]*c->f[1]), t1=S(c->ps1[0]*c->f[1]); c->f[0]=t0; c->ps1[0]=t1;} // 800BDD80
  {uint32_t ea=c->r[3]+0x00000008u; psq_store(c,0,ea,1,0);} // 800BDD84
  return; // 800BDD88
}

// fn_800BDD8C
void f_800BDD8C(Ctx* __restrict c) {
  trace_call(0x800BDD8Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BDD8C
  c->r[0]=c->lr; // 800BDD90
  W32(c->r[1]+0x00000024u,c->r[0]); // 800BDD94
  c->r[11]=c->r[1]+0x00000020u; // 800BDD98
  c->lr=0x800BDDA0u; { W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800BDD9C
  c->r[28]=c->r[3]|c->r[3]; // 800BDDA0
  c->r[29]=c->r[4]|c->r[4]; // 800BDDA4
  c->r[30]=c->r[5]|c->r[5]; // 800BDDA8
  c->r[31]=c->r[6]|c->r[6]; // 800BDDAC
  c->lr=0x800BDDB4u; f_80323304(c); // 800BDDB0
  c->r[3]=c->r[3]+0x00000628u; // 800BDDB4
  c->lr=0x800BDDBCu; f_802A083C(c); // 800BDDB8
  {uint32_t ea=c->r[2]+0xFFFFA100u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BDDBC
  fcmp(c,0,c->f[1],c->f[0]); // 800BDDC0
  if (!crb(c,0)) { goto L_800BDE14; } // 800BDDC4
  c->lr=0x800BDDCCu; f_80323304(c); // 800BDDC8
  c->r[3]=c->r[3]+0x000006B4u; // 800BDDCC
  c->lr=0x800BDDD4u; f_802A083C(c); // 800BDDD0
  {uint32_t ea=c->r[2]+0xFFFFA100u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BDDD4
  fcmp(c,0,c->f[1],c->f[0]); // 800BDDD8
  if (!crb(c,0)) { goto L_800BDE14; } // 800BDDDC
  c->r[0]=0u+0x00000000u; // 800BDDE0
  W8(c->r[1]+0x00000008u,c->r[0]); // 800BDDE4
  c->r[3]=c->r[1]+0x00000008u; // 800BDDE8
  c->lr=0x800BDDF0u; f_80046D50(c); // 800BDDEC
  c->lr=0x800BDDF4u; f_8008CC78(c); // 800BDDF0
  cmps(c,0,(int32_t)c->r[3],0); // 800BDDF4
  if (crb(c,1)) { goto L_800BDE14; } // 800BDDF8
  c->r[3]=R32(c->r[13]+0xFFFFBE10u); // 800BDDFC
  c->r[4]=c->r[28]|c->r[28]; // 800BDE00
  c->r[5]=c->r[29]|c->r[29]; // 800BDE04
  c->r[6]=c->r[30]|c->r[30]; // 800BDE08
  c->r[7]=c->r[31]|c->r[31]; // 800BDE0C
  c->lr=0x800BDE14u; f_80065FDC(c); // 800BDE10
L_800BDE14:;
  c->r[11]=c->r[1]+0x00000020u; // 800BDE14
  c->lr=0x800BDE1Cu; { c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800BDE18
  c->r[0]=R32(c->r[1]+0x00000024u); // 800BDE1C
  c->lr=c->r[0]; // 800BDE20
  c->r[1]=c->r[1]+0x00000020u; // 800BDE24
  return; // 800BDE28
}

// fn_800BDE2C
void f_800BDE2C(Ctx* __restrict c) {
  trace_call(0x800BDE2Cu);
  {uint32_t ea=c->r[1]+0xFFFFFED0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BDE2C
  c->r[0]=c->lr; // 800BDE30
  W32(c->r[1]+0x00000134u,c->r[0]); // 800BDE34
  c->r[11]=c->r[1]+0x000000E0u; // 800BDE38
  {uint32_t ea=c->r[1]+0x00000120u; WF64(ea,c->f[31]);} // 800BDE3C
  {uint32_t ea=c->r[1]+0x00000128u; psq_store(c,31,ea,0,0);} // 800BDE40
  {uint32_t ea=c->r[1]+0x00000110u; WF64(ea,c->f[30]);} // 800BDE44
  {uint32_t ea=c->r[1]+0x00000118u; psq_store(c,30,ea,0,0);} // 800BDE48
  {uint32_t ea=c->r[1]+0x00000100u; WF64(ea,c->f[29]);} // 800BDE4C
  {uint32_t ea=c->r[1]+0x00000108u; psq_store(c,29,ea,0,0);} // 800BDE50
  {uint32_t ea=c->r[1]+0x000000F0u; WF64(ea,c->f[28]);} // 800BDE54
  {uint32_t ea=c->r[1]+0x000000F8u; psq_store(c,28,ea,0,0);} // 800BDE58
  {uint32_t ea=c->r[1]+0x000000E0u; WF64(ea,c->f[27]);} // 800BDE5C
  {uint32_t ea=c->r[1]+0x000000E8u; psq_store(c,27,ea,0,0);} // 800BDE60
  c->lr=0x800BDE68u; { W32(c->r[11]+0xFFFFFFC8u,c->r[18]); W32(c->r[11]+0xFFFFFFCCu,c->r[19]); W32(c->r[11]+0xFFFFFFD0u,c->r[20]); W32(c->r[11]+0xFFFFFFD4u,c->r[21]); W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800BDE64
  c->r[27]=0u+0x00000000u; // 800BDE68
  W8(c->r[1]+0x00000028u,c->r[27]); // 800BDE6C
  c->r[22]=c->r[3]|c->r[3]; // 800BDE70
  c->r[3]=c->r[1]+0x00000028u; // 800BDE74
  c->lr=0x800BDE7Cu; f_8004816C(c); // 800BDE78
  c->lr=0x800BDE80u; f_8004767C(c); // 800BDE7C
  cmps(c,0,(int32_t)c->r[3],0); // 800BDE80
  if (crb(c,2)) { goto L_800BE204; } // 800BDE84
  c->r[26]=0u+0x80740000u; // 800BDE88
  c->r[19]=c->r[27]|c->r[27]; // 800BDE8C
  c->r[26]=c->r[26]+0x00004C10u; // 800BDE90
  c->r[20]=c->r[1]+0x00000030u; // 800BDE94
  c->r[29]=0u+0x00000000u; // 800BDE98
  c->r[18]=0u+0x00000000u; // 800BDE9C
  c->r[21]=0u+0xFFFFFFFFu; // 800BDEA0
  c->r[23]=0u+0x00000004u; // 800BDEA4
  c->r[24]=0u+0x00000003u; // 800BDEA8
  c->r[25]=0u+0x00000002u; // 800BDEAC
L_800BDEB0:;
  W8(c->r[1]+0x00000024u,c->r[27]); // 800BDEB0
  c->r[3]=c->r[1]+0x00000024u; // 800BDEB4
  c->lr=0x800BDEBCu; f_80046EFC(c); // 800BDEB8
  c->r[4]=c->r[29]|c->r[29]; // 800BDEBC
  c->lr=0x800BDEC4u; f_80046DC8(c); // 800BDEC0
  c->r[4]=0u+0x00000000u; // 800BDEC4
  c->lr=0x800BDECCu; f_800ACFF4(c); // 800BDEC8
  cmps(c,0,(int32_t)c->r[3],0); // 800BDECC
  if (crb(c,2)) { goto L_800BDF18; } // 800BDED0
  c->r[28]=c->r[26]+c->r[18]; // 800BDED4
  c->r[4]=0u+0x00000005u; // 800BDED8
  c->r[3]=c->r[28]|c->r[28]; // 800BDEDC
  c->lr=0x800BDEE4u; f_80052BC8(c); // 800BDEE0
  c->r[0]=rotl(c->r[3],0)&0x00000800u; cr0(c,c->r[0]); // 800BDEE4
  if (crb(c,2)) { goto L_800BDEF4; } // 800BDEE8
  W32(c->r[20]+c->r[19],c->r[25]); // 800BDEEC
  goto L_800BDF2C; // 800BDEF0
L_800BDEF4:;
  c->r[3]=c->r[28]|c->r[28]; // 800BDEF4
  c->r[4]=0u+0x00000005u; // 800BDEF8
  c->lr=0x800BDF00u; f_80052BC8(c); // 800BDEFC
  c->r[0]=rotl(c->r[3],0)&0x00000400u; cr0(c,c->r[0]); // 800BDF00
  if (crb(c,2)) { goto L_800BDF10; } // 800BDF04
  W32(c->r[20]+c->r[19],c->r[24]); // 800BDF08
  goto L_800BDF2C; // 800BDF0C
L_800BDF10:;
  W32(c->r[20]+c->r[19],c->r[23]); // 800BDF10
  goto L_800BDF2C; // 800BDF14
L_800BDF18:;
  W32(c->r[20]+c->r[19],c->r[21]); // 800BDF18
  c->r[3]=c->r[22]|c->r[22]; // 800BDF1C
  c->r[4]=c->r[29]|c->r[29]; // 800BDF20
  c->r[5]=0u+0xFFFFFFFFu; // 800BDF24
  c->lr=0x800BDF2Cu; f_800BFA84(c); // 800BDF28
L_800BDF2C:;
  c->r[29]=c->r[29]+0x00000001u; // 800BDF2C
  c->r[19]=c->r[19]+0x00000004u; // 800BDF30
  cmps(c,0,(int32_t)c->r[29],2); // 800BDF34
  c->r[18]=c->r[18]+0x00000078u; // 800BDF38
  if (crb(c,0)) { IRQCHK(c); goto L_800BDEB0; } // 800BDF3C
  {uint32_t ea=c->r[2]+0xFFFFA124u; c->f[31]=c->ps1[31]=RF32(ea);} // 800BDF40
  c->r[31]=c->r[1]+0x0000005Cu; // 800BDF44
  {uint32_t ea=c->r[2]+0xFFFFA12Cu; c->f[30]=c->ps1[30]=RF32(ea);} // 800BDF48
  c->r[27]=c->r[1]+0x00000030u; // 800BDF4C
  {uint32_t ea=c->r[2]+0xFFFFA120u; c->f[28]=c->ps1[28]=RF32(ea);} // 800BDF50
  c->r[25]=0u+0x00000000u; // 800BDF54
  {uint32_t ea=c->r[2]+0xFFFFA128u; c->f[29]=c->ps1[29]=RF32(ea);} // 800BDF58
  c->r[18]=0u+0x00000000u; // 800BDF5C
  {uint32_t ea=c->r[2]+0xFFFFA0F8u; c->f[27]=c->ps1[27]=RF32(ea);} // 800BDF60
  c->r[29]=0u+0x80760000u; // 800BDF64
  c->r[30]=0u+0xC0C10000u; // 800BDF68
  c->r[26]=0u+0x00000000u; // 800BDF6C
  c->r[28]=0u+0x80750000u; // 800BDF70
  c->r[19]=0u+0x00000002u; // 800BDF74
  c->r[21]=0u+0x00000002u; // 800BDF78
  c->r[20]=0u+0x00000002u; // 800BDF7C
L_800BDF80:;
  c->r[0]=R32(c->r[22]+0x000000ACu); // 800BDF80
  c->r[24]=c->r[0]+c->r[18]; // 800BDF84
  c->r[0]=R32(c->r[24]+0x0000003Cu); // 800BDF88
  cmps(c,0,(int32_t)c->r[0],0); // 800BDF8C
  if (crb(c,0)) { goto L_800BE1F4; } // 800BDF90
  c->r[4]=0u+0x00000000u; // 800BDF94
  c->ctr=c->r[19]; // 800BDF98
L_800BDF9C:;
  c->r[3]=c->r[24]+c->r[4]; // 800BDF9C
  c->r[0]=R8(c->r[3]+0x00000060u); // 800BDFA0
  cmps(c,0,(int32_t)c->r[0],0); // 800BDFA4
  if (!crb(c,2)) { goto L_800BDFB4; } // 800BDFA8
  c->r[4]=c->r[4]+0x00000001u; // 800BDFAC
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800BDF9C; } // 800BDFB0
L_800BDFB4:;
  cmps(c,0,(int32_t)c->r[4],2); // 800BDFB4
  if (!crb(c,0)) { goto L_800BE1F4; } // 800BDFB8
  c->r[4]=c->r[25]|c->r[25]; // 800BDFBC
  c->r[3]=c->r[22]+0x000000B8u; // 800BDFC0
  c->lr=0x800BDFC8u; f_800AEDAC(c); // 800BDFC4
  c->r[4]=c->r[3]|c->r[3]; // 800BDFC8
  c->r[3]=c->r[1]+0x00000050u; // 800BDFCC
  {uint32_t ea=c->r[4]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800BDFD0
  {uint32_t ea=c->r[4]+0x0000001Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 800BDFD4
  {uint32_t ea=c->r[4]+0x0000002Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 800BDFD8
  c->lr=0x800BDFE0u; f_8005A6D0(c); // 800BDFDC
  W8(c->r[1]+0x00000020u,c->r[26]); // 800BDFE0
  c->r[3]=c->r[1]+0x00000020u; // 800BDFE4
  c->lr=0x800BDFECu; f_8004DAFC(c); // 800BDFE8
  c->r[4]=c->r[1]+0x00000050u; // 800BDFEC
  c->r[5]=c->r[1]+0x00000038u; // 800BDFF0
  c->r[6]=0u+0xFFFFFFFFu; // 800BDFF4
  c->lr=0x800BDFFCu; f_80297C78(c); // 800BDFF8
  {uint32_t ea=c->r[1]+0x00000040u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BDFFC
  fcmp(c,0,c->f[0],c->f[27]); // 800BE000
  setcrb(c,2,crb(c,0)|crb(c,2)); // 800BE004
  if (!crb(c,2)) { goto L_800BE1F4; } // 800BE008
  {uint32_t ea=c->r[1]+0x0000003Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800BE00C
  c->f[3]=c->f[27]; // 800BE010
  {uint32_t ea=c->r[1]+0x00000038u; c->f[1]=c->ps1[1]=RF32(ea);} // 800BE014
  c->r[3]=c->r[1]+0x00000044u; // 800BE018
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[28]); // 800BE01C
  {uint32_t ea=c->r[1]+0x0000003Cu; WF32(ea,c->f[0]);} // 800BE020
  c->f[2]=c->ps1[2]=S(c->f[31]+c->f[0]); // 800BE024
  c->lr=0x800BE02Cu; f_8005A6D0(c); // 800BE028
  c->r[23]=0u+0xFFFFFFFFu; // 800BE02C
  c->r[6]=0u+0x00000000u; // 800BE030
  c->r[3]=0u+0x00000000u; // 800BE034
  c->ctr=c->r[21]; // 800BE038
L_800BE03C:;
  c->r[5]=R32(c->r[27]+c->r[3]); // 800BE03C
  cmps(c,0,(int32_t)c->r[5],0); // 800BE040
  if (crb(c,0)) { goto L_800BE0A4; } // 800BE044
  c->r[4]=c->r[24]+c->r[6]; // 800BE048
  c->r[0]=R8(c->r[4]+0x00000060u); // 800BE04C
  cmps(c,0,(int32_t)c->r[0],0); // 800BE050
  if (crb(c,2)) { goto L_800BE0A4; } // 800BE054
  c->r[23]=c->r[5]|c->r[5]; // 800BE058
  c->r[7]=0u+0x00000000u; // 800BE05C
  c->r[3]=0u+0x00000000u; // 800BE060
  c->ctr=c->r[20]; // 800BE064
L_800BE068:;
  c->r[6]=R32(c->r[27]+c->r[3]); // 800BE068
  cmps(c,0,(int32_t)c->r[6],0); // 800BE06C
  if (crb(c,0)) { goto L_800BE094; } // 800BE070
  c->r[4]=c->r[24]+c->r[7]; // 800BE074
  c->r[0]=R8(c->r[4]+0x00000060u); // 800BE078
  cmps(c,0,(int32_t)c->r[0],0); // 800BE07C
  if (crb(c,2)) { goto L_800BE094; } // 800BE080
  cmps(c,0,(int32_t)c->r[6],(int32_t)c->r[5]); // 800BE084
  if (crb(c,2)) { goto L_800BE094; } // 800BE088
  c->r[23]=0u+0xFFFFFFFFu; // 800BE08C
  goto L_800BE0B0; // 800BE090
L_800BE094:;
  c->r[7]=c->r[7]+0x00000001u; // 800BE094
  c->r[3]=c->r[3]+0x00000004u; // 800BE098
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800BE068; } // 800BE09C
  goto L_800BE0B0; // 800BE0A0
L_800BE0A4:;
  c->r[6]=c->r[6]+0x00000001u; // 800BE0A4
  c->r[3]=c->r[3]+0x00000004u; // 800BE0A8
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800BE03C; } // 800BE0AC
L_800BE0B0:;
  W8(c->r[1]+0x0000001Cu,c->r[26]); // 800BE0B0
  c->r[3]=c->r[1]+0x0000001Cu; // 800BE0B4
  c->lr=0x800BE0BCu; f_800486E8(c); // 800BE0B8
  c->r[4]=0u+0x00000006u; // 800BE0BC
  c->lr=0x800BE0C4u; f_800484D4(c); // 800BE0C0
  cmps(c,0,(int32_t)c->r[23],0); // 800BE0C4
  if (crb(c,0)) { goto L_800BE0F8; } // 800BE0C8
  W8(c->r[1]+0x00000018u,c->r[26]); // 800BE0CC
  c->r[3]=c->r[1]+0x00000018u; // 800BE0D0
  c->lr=0x800BE0D8u; f_800462D8(c); // 800BE0D4
  {uint32_t ea=c->r[2]+0xFFFFA100u; c->f[1]=c->ps1[1]=RF32(ea);} // 800BE0D8
  c->r[4]=c->r[23]|c->r[23]; // 800BE0DC
  c->r[6]=c->r[1]+0x00000038u; // 800BE0E0
  c->r[5]=0u+0x00000003u; // 800BE0E4
  c->r[7]=0u+0x00000000u; // 800BE0E8
  c->r[8]=0u+0x00000001u; // 800BE0EC
  c->lr=0x800BE0F4u; f_801117F8(c); // 800BE0F0
  goto L_800BE150; // 800BE0F4
L_800BE0F8:;
  {uint32_t ea=c->r[1]+0x00000038u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BE0F8
  c->r[24]=0u+0x00000000u; // 800BE0FC
  c->r[23]=0u+0x00000000u; // 800BE100
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[29]); // 800BE104
  {uint32_t ea=c->r[1]+0x00000038u; WF32(ea,c->f[0]);} // 800BE108
L_800BE10C:;
  W8(c->r[1]+0x00000014u,c->r[26]); // 800BE10C
  c->r[3]=c->r[1]+0x00000014u; // 800BE110
  c->lr=0x800BE118u; f_800462D8(c); // 800BE114
  c->r[4]=R32(c->r[27]+c->r[23]); // 800BE118
  c->r[6]=c->r[1]+0x00000038u; // 800BE11C
  {uint32_t ea=c->r[2]+0xFFFFA100u; c->f[1]=c->ps1[1]=RF32(ea);} // 800BE120
  c->r[5]=0u+0x00000003u; // 800BE124
  c->r[7]=0u+0x00000000u; // 800BE128
  c->r[8]=0u+0x00000001u; // 800BE12C
  c->lr=0x800BE134u; f_801117F8(c); // 800BE130
  {uint32_t ea=c->r[1]+0x00000038u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BE134
  c->r[24]=c->r[24]+0x00000001u; // 800BE138
  cmps(c,0,(int32_t)c->r[24],2); // 800BE13C
  c->r[23]=c->r[23]+0x00000004u; // 800BE140
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[30]); // 800BE144
  {uint32_t ea=c->r[1]+0x00000038u; WF32(ea,c->f[0]);} // 800BE148
  if (crb(c,0)) { IRQCHK(c); goto L_800BE10C; } // 800BE14C
L_800BE150:;
  W8(c->r[1]+0x00000010u,c->r[26]); // 800BE150
  c->r[3]=c->r[1]+0x00000010u; // 800BE154
  c->lr=0x800BE15Cu; f_800486E8(c); // 800BE158
  c->lr=0x800BE160u; f_800485CC(c); // 800BE15C
  c->r[3]=c->r[28]+0xFFFFBC98u; // 800BE160
  c->r[5]=c->r[1]+0x0000005Cu; // 800BE164
  c->r[4]=0u+0x00000002u; // 800BE168
  c->lr=0x800BE170u; f_800AB224(c); // 800BE16C
  {uint32_t ea=c->r[2]+0xFFFFA124u; c->f[1]=c->ps1[1]=RF32(ea);} // 800BE170
  c->r[3]=c->r[29]+0xFFFF9518u; // 800BE174
  {uint32_t ea=c->r[2]+0xFFFFA130u; c->f[2]=c->ps1[2]=RF32(ea);} // 800BE178
  c->lr=0x800BE180u; f_802DA618(c); // 800BE17C
  W8(c->r[1]+0x0000000Cu,c->r[26]); // 800BE180
  c->r[3]=c->r[1]+0x0000000Cu; // 800BE184
  c->lr=0x800BE18Cu; f_800486E8(c); // 800BE188
  c->r[4]=0u+0x00000007u; // 800BE18C
  c->lr=0x800BE194u; f_800484D4(c); // 800BE190
  c->r[24]=0u+0x00000000u; // 800BE194
  c->r[23]=0u+0x00000000u; // 800BE198
  goto L_800BE1D8; // 800BE19C
L_800BE1A0:;
  {uint32_t ea=c->r[1]+0x00000044u; c->f[1]=c->ps1[1]=RF32(ea);} // 800BE1A0
  c->r[4]=c->r[31]+c->r[23]; // 800BE1A4
  c->r[5]=R32(c->r[4]+0x00000008u); // 800BE1A8
  c->r[3]=c->r[29]+0xFFFF9518u; // 800BE1AC
  c->f[2]=c->f[1]; // 800BE1B0
  {uint32_t ea=c->r[1]+0x00000048u; c->f[3]=c->ps1[3]=RF32(ea);} // 800BE1B4
  c->r[4]=c->r[30]+0xFFFFC0FFu; // 800BE1B8
  setcrb(c,6,!(crb(c,6)^crb(c,6))); // 800BE1BC
  c->lr=0x800BE1C4u; f_802DAA7C(c); // 800BE1C0
  {uint32_t ea=c->r[1]+0x00000048u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BE1C4
  c->r[24]=c->r[24]+0x00000001u; // 800BE1C8
  c->r[23]=c->r[23]+0x00000004u; // 800BE1CC
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[31]); // 800BE1D0
  {uint32_t ea=c->r[1]+0x00000048u; WF32(ea,c->f[0]);} // 800BE1D4
L_800BE1D8:;
  c->r[0]=R32(c->r[1]+0x00000060u); // 800BE1D8
  cmpu(c,0,c->r[24],c->r[0]); // 800BE1DC
  if (crb(c,0)) { IRQCHK(c); goto L_800BE1A0; } // 800BE1E0
  W8(c->r[1]+0x00000008u,c->r[26]); // 800BE1E4
  c->r[3]=c->r[1]+0x00000008u; // 800BE1E8
  c->lr=0x800BE1F0u; f_800486E8(c); // 800BE1EC
  c->lr=0x800BE1F4u; f_800485CC(c); // 800BE1F0
L_800BE1F4:;
  c->r[25]=c->r[25]+0x00000001u; // 800BE1F4
  c->r[18]=c->r[18]+0x00000064u; // 800BE1F8
  cmps(c,0,(int32_t)c->r[25],256); // 800BE1FC
  if (crb(c,0)) { IRQCHK(c); goto L_800BDF80; } // 800BE200
L_800BE204:;
  c->r[11]=c->r[1]+0x000000E0u; // 800BE204
  {uint32_t ea=c->r[1]+0x00000128u; psq_load(c,31,ea,0,0);} // 800BE208
  {uint32_t ea=c->r[1]+0x00000120u; c->f[31]=RF64(ea);} // 800BE20C
  {uint32_t ea=c->r[1]+0x00000118u; psq_load(c,30,ea,0,0);} // 800BE210
  {uint32_t ea=c->r[1]+0x00000110u; c->f[30]=RF64(ea);} // 800BE214
  {uint32_t ea=c->r[1]+0x00000108u; psq_load(c,29,ea,0,0);} // 800BE218
  {uint32_t ea=c->r[1]+0x00000100u; c->f[29]=RF64(ea);} // 800BE21C
  {uint32_t ea=c->r[1]+0x000000F8u; psq_load(c,28,ea,0,0);} // 800BE220
  {uint32_t ea=c->r[1]+0x000000F0u; c->f[28]=RF64(ea);} // 800BE224
  {uint32_t ea=c->r[1]+0x000000E8u; psq_load(c,27,ea,0,0);} // 800BE228
  {uint32_t ea=c->r[1]+0x000000E0u; c->f[27]=RF64(ea);} // 800BE22C
  c->lr=0x800BE234u; { c->r[18]=R32(c->r[11]+0xFFFFFFC8u); c->r[19]=R32(c->r[11]+0xFFFFFFCCu); c->r[20]=R32(c->r[11]+0xFFFFFFD0u); c->r[21]=R32(c->r[11]+0xFFFFFFD4u); c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800BE230
  c->r[0]=R32(c->r[1]+0x00000134u); // 800BE234
  c->lr=c->r[0]; // 800BE238
  c->r[1]=c->r[1]+0x00000130u; // 800BE23C
  return; // 800BE240
}

// fn_800BE244
void f_800BE244(Ctx* __restrict c) {
  trace_call(0x800BE244u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BE244
  c->r[0]=c->lr; // 800BE248
  W32(c->r[1]+0x00000024u,c->r[0]); // 800BE24C
  c->r[0]=0u+0x00000000u; // 800BE250
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800BE254
  c->r[31]=c->r[3]|c->r[3]; // 800BE258
  c->r[3]=c->r[1]+0x00000008u; // 800BE25C
  W8(c->r[1]+0x00000008u,c->r[0]); // 800BE260
  c->lr=0x800BE268u; f_80045AE4(c); // 800BE264
  c->r[4]=0u+0x00002250u; // 800BE268
  c->r[3]=c->r[3]+0x00000034u; // 800BE26C
  c->lr=0x800BE274u; f_803C4D08(c); // 800BE270
  W32(c->r[31]+0x000000B4u,c->r[3]); // 800BE274
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800BE278
  c->r[0]=R32(c->r[1]+0x00000024u); // 800BE27C
  c->lr=c->r[0]; // 800BE280
  c->r[1]=c->r[1]+0x00000020u; // 800BE284
  return; // 800BE288
}

// fn_800BE28C
void f_800BE28C(Ctx* __restrict c) {
  trace_call(0x800BE28Cu);
  {uint32_t ea=c->r[1]+0xFFFFFE80u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BE28C
  c->r[0]=c->lr; // 800BE290
  cmps(c,0,(int32_t)c->r[4],0); // 800BE294
  W32(c->r[1]+0x00000184u,c->r[0]); // 800BE298
  {uint32_t ea=c->r[1]+0x00000170u; for(int i=28;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800BE29C
  if (crb(c,2)) { goto L_800BE444; } // 800BE2A0
  c->r[8]=0u+0x00000000u; // 800BE2A4
  c->r[3]=0u+0x00000000u; // 800BE2A8
  c->r[7]=0u+0x00000000u; // 800BE2AC
  c->r[0]=0u+0x00000005u; // 800BE2B0
L_800BE2B4:;
  c->r[9]=c->r[1]+0x00000008u; // 800BE2B4
  c->r[6]=0u+0x00000000u; // 800BE2B8
  c->r[9]=c->r[9]+c->r[3]; // 800BE2BC
  c->ctr=c->r[0]; // 800BE2C0
L_800BE2C4:;
  W32(c->r[9]+c->r[6],c->r[7]); // 800BE2C4
  c->r[6]=c->r[6]+0x00000004u; // 800BE2C8
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800BE2C4; } // 800BE2CC
  c->r[8]=c->r[8]+0x00000001u; // 800BE2D0
  c->r[3]=c->r[3]+0x00000014u; // 800BE2D4
  cmps(c,0,(int32_t)c->r[8],18); // 800BE2D8
  if (crb(c,0)) { IRQCHK(c); goto L_800BE2B4; } // 800BE2DC
  c->r[7]=c->r[1]+0x00000008u; // 800BE2E0
  c->r[11]=0u+0x00000000u; // 800BE2E4
  c->r[10]=0u+0x00000000u; // 800BE2E8
  c->r[3]=0u+0x00000000u; // 800BE2EC
  c->r[9]=0u+0x00000000u; // 800BE2F0
  c->r[6]=0u+0x00000000u; // 800BE2F4
  c->r[8]=0u+0x00000000u; // 800BE2F8
  c->r[0]=0u+0x00000000u; // 800BE2FC
  c->ctr=c->r[5]; // 800BE300
  cmpu(c,0,c->r[5],0x00000000u); // 800BE304
  if (!crb(c,1)) { goto L_800BE3BC; } // 800BE308
L_800BE30C:;
  cmps(c,0,(int32_t)c->r[8],0); // 800BE30C
  if (!crb(c,2)) { goto L_800BE318; } // 800BE310
  c->r[8]=c->r[4]+c->r[9]; // 800BE314
L_800BE318:;
  c->r[5]=R8(c->r[4]+c->r[9]); // 800BE318
  c->r[12]=c->r[4]+c->r[9]; // 800BE31C
  c->r[5]=(uint32_t)(int32_t)(int8_t)c->r[5]; // 800BE320
  cmps(c,0,(int32_t)c->r[5],13); // 800BE324
  if (!crb(c,2)) { goto L_800BE334; } // 800BE328
  c->r[6]=0u+0x00000001u; // 800BE32C
  goto L_800BE3AC; // 800BE330
L_800BE334:;
  cmps(c,0,(int32_t)c->r[5],10); // 800BE334
  if (!crb(c,2)) { goto L_800BE378; } // 800BE338
  cmps(c,0,(int32_t)c->r[6],0); // 800BE33C
  if (!crb(c,1)) { goto L_800BE3A8; } // 800BE340
  cmpu(c,0,c->r[11],0x00000004u); // 800BE344
  if (crb(c,1)) { goto L_800BE360; } // 800BE348
  cmpu(c,0,c->r[10],0x00000011u); // 800BE34C
  if (crb(c,1)) { goto L_800BE360; } // 800BE350
  c->r[6]=rotl(c->r[11],2)&0xFFFFFFFCu; // 800BE354
  c->r[5]=c->r[7]+c->r[3]; // 800BE358
  W32(c->r[6]+c->r[5],c->r[8]); // 800BE35C
L_800BE360:;
  W8(c->r[12]+0xFFFFFFFFu,c->r[0]); // 800BE360
  c->r[11]=0u+0x00000000u; // 800BE364
  c->r[8]=0u+0x00000000u; // 800BE368
  c->r[10]=c->r[10]+0x00000001u; // 800BE36C
  c->r[3]=c->r[3]+0x00000014u; // 800BE370
  goto L_800BE3A8; // 800BE374
L_800BE378:;
  cmps(c,0,(int32_t)c->r[5],44); // 800BE378
  if (!crb(c,2)) { goto L_800BE3A8; } // 800BE37C
  cmpu(c,0,c->r[11],0x00000004u); // 800BE380
  if (crb(c,1)) { goto L_800BE39C; } // 800BE384
  cmpu(c,0,c->r[10],0x00000011u); // 800BE388
  if (crb(c,1)) { goto L_800BE39C; } // 800BE38C
  c->r[6]=rotl(c->r[11],2)&0xFFFFFFFCu; // 800BE390
  c->r[5]=c->r[7]+c->r[3]; // 800BE394
  W32(c->r[6]+c->r[5],c->r[8]); // 800BE398
L_800BE39C:;
  W8(c->r[12]+0x00000000u,c->r[0]); // 800BE39C
  c->r[8]=0u+0x00000000u; // 800BE3A0
  c->r[11]=c->r[11]+0x00000001u; // 800BE3A4
L_800BE3A8:;
  c->r[6]=0u+0x00000000u; // 800BE3A8
L_800BE3AC:;
  c->r[9]=c->r[9]+0x00000001u; // 800BE3AC
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800BE30C; } // 800BE3B0
  goto L_800BE3BC; // 800BE3B4
  goto L_800BE444; // 800BE3B8
L_800BE3BC:;
  c->r[30]=0u+0x80750000u; // 800BE3BC
  c->r[28]=0u+0x00000000u; // 800BE3C0
  c->r[30]=c->r[30]+0x00002D28u; // 800BE3C4
  c->r[31]=0u+0x00000000u; // 800BE3C8
L_800BE3CC:;
  c->r[5]=c->r[28]|c->r[28]; // 800BE3CC
  c->r[29]=c->r[30]+c->r[31]; // 800BE3D0
  c->r[3]=c->r[1]+0x00000008u; // 800BE3D4
  c->r[4]=0u+0x00000000u; // 800BE3D8
  c->lr=0x800BE3E0u; f_800BE458(c); // 800BE3DC
  {uint32_t ea=c->r[29]+0x00000000u; WF32(ea,c->f[1]);} // 800BE3E0
  c->r[5]=c->r[28]|c->r[28]; // 800BE3E4
  c->r[3]=c->r[1]+0x00000008u; // 800BE3E8
  c->r[4]=0u+0x00000001u; // 800BE3EC
  c->lr=0x800BE3F4u; f_800BE458(c); // 800BE3F0
  {uint32_t ea=c->r[29]+0x00000004u; WF32(ea,c->f[1]);} // 800BE3F4
  c->r[5]=c->r[28]|c->r[28]; // 800BE3F8
  c->r[3]=c->r[1]+0x00000008u; // 800BE3FC
  c->r[4]=0u+0x00000002u; // 800BE400
  c->lr=0x800BE408u; f_800BE4A4(c); // 800BE404
  W32(c->r[29]+0x00000008u,c->r[3]); // 800BE408
  c->r[5]=c->r[28]|c->r[28]; // 800BE40C
  c->r[3]=c->r[1]+0x00000008u; // 800BE410
  c->r[4]=0u+0x00000003u; // 800BE414
  c->lr=0x800BE41Cu; f_800BE4A4(c); // 800BE418
  W32(c->r[29]+0x0000000Cu,c->r[3]); // 800BE41C
  c->r[5]=c->r[28]|c->r[28]; // 800BE420
  c->r[3]=c->r[1]+0x00000008u; // 800BE424
  c->r[4]=0u+0x00000004u; // 800BE428
  c->lr=0x800BE430u; f_800BE4A4(c); // 800BE42C
  c->r[28]=c->r[28]+0x00000001u; // 800BE430
  W32(c->r[29]+0x00000010u,c->r[3]); // 800BE434
  cmps(c,0,(int32_t)c->r[28],18); // 800BE438
  c->r[31]=c->r[31]+0x00000014u; // 800BE43C
  if (crb(c,0)) { IRQCHK(c); goto L_800BE3CC; } // 800BE440
L_800BE444:;
  {uint32_t ea=c->r[1]+0x00000170u; for(int i=28;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800BE444
  c->r[0]=R32(c->r[1]+0x00000184u); // 800BE448
  c->lr=c->r[0]; // 800BE44C
  c->r[1]=c->r[1]+0x00000180u; // 800BE450
  return; // 800BE454
}

// fn_800BE458
void f_800BE458(Ctx* __restrict c) {
  trace_call(0x800BE458u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BE458
  c->r[0]=c->lr; // 800BE45C
  cmpu(c,0,c->r[4],0x00000004u); // 800BE460
  W32(c->r[1]+0x00000014u,c->r[0]); // 800BE464
  if (crb(c,1)) { goto L_800BE490; } // 800BE468
  cmpu(c,0,c->r[5],0x00000011u); // 800BE46C
  if (crb(c,1)) { goto L_800BE490; } // 800BE470
  c->r[0]=(uint32_t)((int32_t)c->r[5]*(int32_t)20); // 800BE474
  c->r[4]=rotl(c->r[4],2)&0xFFFFFFFCu; // 800BE478
  c->r[0]=c->r[3]+c->r[0]; // 800BE47C
  c->r[3]=R32(c->r[4]+c->r[0]); // 800BE480
  c->lr=0x800BE488u; f_803B5690(c); // 800BE484
  c->f[1]=c->ps1[1]=S(c->f[1]); // 800BE488
  goto L_800BE494; // 800BE48C
L_800BE490:;
  {uint32_t ea=c->r[2]+0xFFFFA0F8u; c->f[1]=c->ps1[1]=RF32(ea);} // 800BE490
L_800BE494:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800BE494
  c->lr=c->r[0]; // 800BE498
  c->r[1]=c->r[1]+0x00000010u; // 800BE49C
  return; // 800BE4A0
}

// fn_800BE4A4
void f_800BE4A4(Ctx* __restrict c) {
  trace_call(0x800BE4A4u);
  cmpu(c,0,c->r[4],0x00000004u); // 800BE4A4
  if (crb(c,1)) { goto L_800BE4C8; } // 800BE4A8
  cmpu(c,0,c->r[5],0x00000011u); // 800BE4AC
  if (crb(c,1)) { goto L_800BE4C8; } // 800BE4B0
  c->r[0]=(uint32_t)((int32_t)c->r[5]*(int32_t)20); // 800BE4B4
  c->r[4]=rotl(c->r[4],2)&0xFFFFFFFCu; // 800BE4B8
  c->r[0]=c->r[3]+c->r[0]; // 800BE4BC
  c->r[3]=R32(c->r[4]+c->r[0]); // 800BE4C0
  f_803B613C(c); return; // 800BE4C4
L_800BE4C8:;
  c->r[3]=0u+0x00000000u; // 800BE4C8
  return; // 800BE4CC
}

// fn_800BE4D0
void f_800BE4D0(Ctx* __restrict c) {
  trace_call(0x800BE4D0u);
  {uint32_t ea=c->r[1]+0xFFFFD7C0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BE4D0
  c->r[0]=c->lr; // 800BE4D4
  cmps(c,0,(int32_t)c->r[4],0); // 800BE4D8
  W32(c->r[1]+0x00002844u,c->r[0]); // 800BE4DC
  {uint32_t ea=c->r[1]+0x0000281Cu; for(int i=23;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800BE4E0
  c->r[30]=c->r[3]|c->r[3]; // 800BE4E4
  if (crb(c,2)) { goto L_800BE7C0; } // 800BE4E8
  c->r[8]=0u+0x00000000u; // 800BE4EC
  c->r[3]=0u+0x00000000u; // 800BE4F0
  c->r[7]=0u+0x00000000u; // 800BE4F4
  c->r[0]=0u+0x0000003Du; // 800BE4F8
L_800BE4FC:;
  c->r[9]=c->r[1]+0x00000010u; // 800BE4FC
  c->r[6]=0u+0x00000000u; // 800BE500
  c->r[9]=c->r[9]+c->r[3]; // 800BE504
  c->ctr=c->r[0]; // 800BE508
L_800BE50C:;
  W32(c->r[9]+c->r[6],c->r[7]); // 800BE50C
  c->r[6]=c->r[6]+0x00000004u; // 800BE510
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800BE50C; } // 800BE514
  c->r[8]=c->r[8]+0x00000001u; // 800BE518
  c->r[3]=c->r[3]+0x000000F4u; // 800BE51C
  cmps(c,0,(int32_t)c->r[8],42); // 800BE520
  if (crb(c,0)) { IRQCHK(c); goto L_800BE4FC; } // 800BE524
  c->r[7]=c->r[1]+0x00000010u; // 800BE528
  c->r[11]=0u+0x00000000u; // 800BE52C
  c->r[10]=0u+0x00000000u; // 800BE530
  c->r[3]=0u+0x00000000u; // 800BE534
  c->r[9]=0u+0x00000000u; // 800BE538
  c->r[6]=0u+0x00000000u; // 800BE53C
  c->r[8]=0u+0x00000000u; // 800BE540
  c->r[0]=0u+0x00000000u; // 800BE544
  c->ctr=c->r[5]; // 800BE548
  cmpu(c,0,c->r[5],0x00000000u); // 800BE54C
  if (!crb(c,1)) { goto L_800BE604; } // 800BE550
L_800BE554:;
  cmps(c,0,(int32_t)c->r[8],0); // 800BE554
  if (!crb(c,2)) { goto L_800BE560; } // 800BE558
  c->r[8]=c->r[4]+c->r[9]; // 800BE55C
L_800BE560:;
  c->r[5]=R8(c->r[4]+c->r[9]); // 800BE560
  c->r[12]=c->r[4]+c->r[9]; // 800BE564
  c->r[5]=(uint32_t)(int32_t)(int8_t)c->r[5]; // 800BE568
  cmps(c,0,(int32_t)c->r[5],13); // 800BE56C
  if (!crb(c,2)) { goto L_800BE57C; } // 800BE570
  c->r[6]=0u+0x00000001u; // 800BE574
  goto L_800BE5F4; // 800BE578
L_800BE57C:;
  cmps(c,0,(int32_t)c->r[5],10); // 800BE57C
  if (!crb(c,2)) { goto L_800BE5C0; } // 800BE580
  cmps(c,0,(int32_t)c->r[6],0); // 800BE584
  if (!crb(c,1)) { goto L_800BE5F0; } // 800BE588
  cmpu(c,0,c->r[11],0x0000003Cu); // 800BE58C
  if (crb(c,1)) { goto L_800BE5A8; } // 800BE590
  cmpu(c,0,c->r[10],0x00000029u); // 800BE594
  if (crb(c,1)) { goto L_800BE5A8; } // 800BE598
  c->r[6]=rotl(c->r[11],2)&0xFFFFFFFCu; // 800BE59C
  c->r[5]=c->r[7]+c->r[3]; // 800BE5A0
  W32(c->r[6]+c->r[5],c->r[8]); // 800BE5A4
L_800BE5A8:;
  W8(c->r[12]+0xFFFFFFFFu,c->r[0]); // 800BE5A8
  c->r[11]=0u+0x00000000u; // 800BE5AC
  c->r[8]=0u+0x00000000u; // 800BE5B0
  c->r[10]=c->r[10]+0x00000001u; // 800BE5B4
  c->r[3]=c->r[3]+0x000000F4u; // 800BE5B8
  goto L_800BE5F0; // 800BE5BC
L_800BE5C0:;
  cmps(c,0,(int32_t)c->r[5],44); // 800BE5C0
  if (!crb(c,2)) { goto L_800BE5F0; } // 800BE5C4
  cmpu(c,0,c->r[11],0x0000003Cu); // 800BE5C8
  if (crb(c,1)) { goto L_800BE5E4; } // 800BE5CC
  cmpu(c,0,c->r[10],0x00000029u); // 800BE5D0
  if (crb(c,1)) { goto L_800BE5E4; } // 800BE5D4
  c->r[6]=rotl(c->r[11],2)&0xFFFFFFFCu; // 800BE5D8
  c->r[5]=c->r[7]+c->r[3]; // 800BE5DC
  W32(c->r[6]+c->r[5],c->r[8]); // 800BE5E0
L_800BE5E4:;
  W8(c->r[12]+0x00000000u,c->r[0]); // 800BE5E4
  c->r[8]=0u+0x00000000u; // 800BE5E8
  c->r[11]=c->r[11]+0x00000001u; // 800BE5EC
L_800BE5F0:;
  c->r[6]=0u+0x00000000u; // 800BE5F0
L_800BE5F4:;
  c->r[9]=c->r[9]+0x00000001u; // 800BE5F4
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800BE554; } // 800BE5F8
  goto L_800BE604; // 800BE5FC
  goto L_800BE7C0; // 800BE600
L_800BE604:;
  c->r[31]=0u+0x00000000u; // 800BE604
  c->r[29]=0u+0x00000018u; // 800BE608
  c->r[25]=0u+0x00000000u; // 800BE60C
  goto L_800BE7A8; // 800BE610
L_800BE614:;
  c->r[5]=c->r[31]|c->r[31]; // 800BE614
  c->r[3]=c->r[1]+0x00000010u; // 800BE618
  c->r[4]=0u+0x00000000u; // 800BE61C
  c->lr=0x800BE624u; f_800BE7D4(c); // 800BE620
  c->r[0]=R8(c->r[3]+0x00000000u); // 800BE624
  c->r[23]=c->r[3]|c->r[3]; // 800BE628
  cmps(c,0,(int32_t)c->r[0],115); // 800BE62C
  if (crb(c,2)) { goto L_800BE674; } // 800BE630
  c->r[23]=0u+0x00000001u; // 800BE634
  c->r[27]=0u+0x00000004u; // 800BE638
L_800BE63C:;
  c->r[4]=c->r[23]|c->r[23]; // 800BE63C
  c->r[5]=c->r[31]|c->r[31]; // 800BE640
  c->r[3]=c->r[1]+0x00000010u; // 800BE644
  c->lr=0x800BE64Cu; f_800BE800(c); // 800BE648
  c->r[0]=R32(c->r[30]+0x000000B4u); // 800BE64C
  c->r[23]=c->r[23]+0x00000001u; // 800BE650
  cmps(c,0,(int32_t)c->r[23],6); // 800BE654
  c->r[0]=c->r[29]+c->r[0]; // 800BE658
  c->r[3]=c->r[27]+c->r[0]; // 800BE65C
  c->r[27]=c->r[27]+0x00000004u; // 800BE660
  {uint32_t ea=c->r[3]+0x000021C0u; WF32(ea,c->f[1]);} // 800BE664
  if (crb(c,0)) { IRQCHK(c); goto L_800BE63C; } // 800BE668
  c->r[29]=c->r[29]+0x00000018u; // 800BE66C
  goto L_800BE7A4; // 800BE670
L_800BE674:;
  W8(c->r[1]+0x0000000Cu,c->r[25]); // 800BE674
  c->r[3]=c->r[1]+0x0000000Cu; // 800BE678
  c->lr=0x800BE680u; f_80046D50(c); // 800BE67C
  c->r[4]=c->r[23]|c->r[23]; // 800BE680
  c->lr=0x800BE688u; f_8008CA58(c); // 800BE684
  W8(c->r[1]+0x00000008u,c->r[25]); // 800BE688
  c->r[26]=c->r[3]|c->r[3]; // 800BE68C
  c->r[3]=c->r[1]+0x00000008u; // 800BE690
  c->lr=0x800BE698u; f_80046D50(c); // 800BE694
  c->r[4]=c->r[23]|c->r[23]; // 800BE698
  c->lr=0x800BE6A0u; f_8008CAC4(c); // 800BE69C
  c->r[0]=(uint32_t)((int32_t)c->r[3]*(int32_t)240); // 800BE6A0
  c->r[24]=0u+0x00000001u; // 800BE6A4
  c->r[28]=0u+0x00000028u; // 800BE6A8
  c->r[27]=0u+0x0000000Au; // 800BE6AC
  c->r[3]=(uint32_t)((int32_t)c->r[26]*(int32_t)2160); // 800BE6B0
  c->r[26]=c->r[0]+c->r[3]; // 800BE6B4
L_800BE6B8:;
  c->r[0]=R32(c->r[30]+0x000000B4u); // 800BE6B8
  c->r[5]=c->r[31]|c->r[31]; // 800BE6BC
  c->r[3]=c->r[1]+0x00000010u; // 800BE6C0
  c->r[4]=c->r[27]+0x00000001u; // 800BE6C4
  c->r[0]=c->r[0]+c->r[26]; // 800BE6C8
  c->r[23]=c->r[28]+c->r[0]; // 800BE6CC
  c->lr=0x800BE6D4u; f_800BE800(c); // 800BE6D0
  {uint32_t ea=c->r[23]+0x00000000u; WF32(ea,c->f[1]);} // 800BE6D4
  c->r[5]=c->r[31]|c->r[31]; // 800BE6D8
  c->r[3]=c->r[1]+0x00000010u; // 800BE6DC
  c->r[4]=c->r[27]+0x00000002u; // 800BE6E0
  c->lr=0x800BE6E8u; f_800BE800(c); // 800BE6E4
  {uint32_t ea=c->r[23]+0x00000004u; WF32(ea,c->f[1]);} // 800BE6E8
  c->r[5]=c->r[31]|c->r[31]; // 800BE6EC
  c->r[3]=c->r[1]+0x00000010u; // 800BE6F0
  c->r[4]=c->r[27]+0x00000003u; // 800BE6F4
  c->lr=0x800BE6FCu; f_800BE800(c); // 800BE6F8
  {uint32_t ea=c->r[23]+0x00000008u; WF32(ea,c->f[1]);} // 800BE6FC
  c->r[5]=c->r[31]|c->r[31]; // 800BE700
  c->r[3]=c->r[1]+0x00000010u; // 800BE704
  c->r[4]=c->r[27]+0x00000004u; // 800BE708
  c->lr=0x800BE710u; f_800BE800(c); // 800BE70C
  {uint32_t ea=c->r[23]+0x0000000Cu; WF32(ea,c->f[1]);} // 800BE710
  c->r[5]=c->r[31]|c->r[31]; // 800BE714
  c->r[3]=c->r[1]+0x00000010u; // 800BE718
  c->r[4]=c->r[27]+0x00000005u; // 800BE71C
  c->lr=0x800BE724u; f_800BE84C(c); // 800BE720
  W32(c->r[23]+0x00000010u,c->r[3]); // 800BE724
  c->r[5]=c->r[31]|c->r[31]; // 800BE728
  c->r[3]=c->r[1]+0x00000010u; // 800BE72C
  c->r[4]=c->r[27]+0x00000006u; // 800BE730
  c->lr=0x800BE738u; f_800BE84C(c); // 800BE734
  W32(c->r[23]+0x00000014u,c->r[3]); // 800BE738
  c->r[5]=c->r[31]|c->r[31]; // 800BE73C
  c->r[3]=c->r[1]+0x00000010u; // 800BE740
  c->r[4]=c->r[27]+0x00000007u; // 800BE744
  c->lr=0x800BE74Cu; f_800BE84C(c); // 800BE748
  W32(c->r[23]+0x00000018u,c->r[3]); // 800BE74C
  c->r[5]=c->r[31]|c->r[31]; // 800BE750
  c->r[3]=c->r[1]+0x00000010u; // 800BE754
  c->r[4]=c->r[27]+0x00000008u; // 800BE758
  c->lr=0x800BE760u; f_800BE84C(c); // 800BE75C
  W32(c->r[23]+0x0000001Cu,c->r[3]); // 800BE760
  c->r[5]=c->r[31]|c->r[31]; // 800BE764
  c->r[3]=c->r[1]+0x00000010u; // 800BE768
  c->r[4]=c->r[27]+0x00000009u; // 800BE76C
  c->lr=0x800BE774u; f_800BE84C(c); // 800BE770
  c->r[0]=c->r[24]+0x00000001u; // 800BE774
  W32(c->r[23]+0x00000020u,c->r[3]); // 800BE778
  c->r[4]=(uint32_t)((int32_t)c->r[0]*(int32_t)10); // 800BE77C
  c->r[5]=c->r[31]|c->r[31]; // 800BE780
  c->r[3]=c->r[1]+0x00000010u; // 800BE784
  c->lr=0x800BE78Cu; f_800BE84C(c); // 800BE788
  c->r[24]=c->r[24]+0x00000001u; // 800BE78C
  W32(c->r[23]+0x00000024u,c->r[3]); // 800BE790
  cmps(c,0,(int32_t)c->r[24],6); // 800BE794
  c->r[28]=c->r[28]+0x00000028u; // 800BE798
  c->r[27]=c->r[27]+0x0000000Au; // 800BE79C
  if (crb(c,0)) { IRQCHK(c); goto L_800BE6B8; } // 800BE7A0
L_800BE7A4:;
  c->r[31]=c->r[31]+0x00000001u; // 800BE7A4
L_800BE7A8:;
  c->r[5]=c->r[31]|c->r[31]; // 800BE7A8
  c->r[3]=c->r[1]+0x00000010u; // 800BE7AC
  c->r[4]=0u+0x00000000u; // 800BE7B0
  c->lr=0x800BE7B8u; f_800BE7D4(c); // 800BE7B4
  cmps(c,0,(int32_t)c->r[3],0); // 800BE7B8
  if (!crb(c,2)) { IRQCHK(c); goto L_800BE614; } // 800BE7BC
L_800BE7C0:;
  {uint32_t ea=c->r[1]+0x0000281Cu; for(int i=23;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800BE7C0
  c->r[0]=R32(c->r[1]+0x00002844u); // 800BE7C4
  c->lr=c->r[0]; // 800BE7C8
  c->r[1]=c->r[1]+0x00002840u; // 800BE7CC
  return; // 800BE7D0
}

// fn_800BE7D4
void f_800BE7D4(Ctx* __restrict c) {
  trace_call(0x800BE7D4u);
  cmpu(c,0,c->r[4],0x0000003Cu); // 800BE7D4
  if (crb(c,1)) { goto L_800BE7F8; } // 800BE7D8
  cmpu(c,0,c->r[5],0x00000029u); // 800BE7DC
  if (crb(c,1)) { goto L_800BE7F8; } // 800BE7E0
  c->r[0]=(uint32_t)((int32_t)c->r[5]*(int32_t)244); // 800BE7E4
  c->r[4]=rotl(c->r[4],2)&0xFFFFFFFCu; // 800BE7E8
  c->r[0]=c->r[3]+c->r[0]; // 800BE7EC
  c->r[3]=R32(c->r[4]+c->r[0]); // 800BE7F0
  return; // 800BE7F4
L_800BE7F8:;
  c->r[3]=0u+0x00000000u; // 800BE7F8
  return; // 800BE7FC
}

// fn_800BE800
void f_800BE800(Ctx* __restrict c) {
  trace_call(0x800BE800u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BE800
  c->r[0]=c->lr; // 800BE804
  cmpu(c,0,c->r[4],0x0000003Cu); // 800BE808
  W32(c->r[1]+0x00000014u,c->r[0]); // 800BE80C
  if (crb(c,1)) { goto L_800BE838; } // 800BE810
  cmpu(c,0,c->r[5],0x00000029u); // 800BE814
  if (crb(c,1)) { goto L_800BE838; } // 800BE818
  c->r[0]=(uint32_t)((int32_t)c->r[5]*(int32_t)244); // 800BE81C
  c->r[4]=rotl(c->r[4],2)&0xFFFFFFFCu; // 800BE820
  c->r[0]=c->r[3]+c->r[0]; // 800BE824
  c->r[3]=R32(c->r[4]+c->r[0]); // 800BE828
  c->lr=0x800BE830u; f_803B5690(c); // 800BE82C
  c->f[1]=c->ps1[1]=S(c->f[1]); // 800BE830
  goto L_800BE83C; // 800BE834
L_800BE838:;
  {uint32_t ea=c->r[2]+0xFFFFA0F8u; c->f[1]=c->ps1[1]=RF32(ea);} // 800BE838
L_800BE83C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800BE83C
  c->lr=c->r[0]; // 800BE840
  c->r[1]=c->r[1]+0x00000010u; // 800BE844
  return; // 800BE848
}

// fn_800BE84C
void f_800BE84C(Ctx* __restrict c) {
  trace_call(0x800BE84Cu);
  cmpu(c,0,c->r[4],0x0000003Cu); // 800BE84C
  if (crb(c,1)) { goto L_800BE870; } // 800BE850
  cmpu(c,0,c->r[5],0x00000029u); // 800BE854
  if (crb(c,1)) { goto L_800BE870; } // 800BE858
  c->r[0]=(uint32_t)((int32_t)c->r[5]*(int32_t)244); // 800BE85C
  c->r[4]=rotl(c->r[4],2)&0xFFFFFFFCu; // 800BE860
  c->r[0]=c->r[3]+c->r[0]; // 800BE864
  c->r[3]=R32(c->r[4]+c->r[0]); // 800BE868
  f_803B613C(c); return; // 800BE86C
L_800BE870:;
  c->r[3]=0u+0x00000000u; // 800BE870
  return; // 800BE874
}

// fn_800BE878
void f_800BE878(Ctx* __restrict c) {
  trace_call(0x800BE878u);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BE878
  c->r[0]=c->lr; // 800BE87C
  W32(c->r[1]+0x00000054u,c->r[0]); // 800BE880
  c->r[11]=c->r[1]+0x00000050u; // 800BE884
  c->lr=0x800BE88Cu; { W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800BE888
  c->r[25]=c->r[4]|c->r[4]; // 800BE88C
  c->r[24]=c->r[3]|c->r[3]; // 800BE890
  c->r[26]=c->r[5]|c->r[5]; // 800BE894
  c->r[27]=c->r[6]|c->r[6]; // 800BE898
  c->r[28]=c->r[7]|c->r[7]; // 800BE89C
  c->r[29]=c->r[8]|c->r[8]; // 800BE8A0
  c->r[3]=c->r[25]|c->r[25]; // 800BE8A4
  c->lr=0x800BE8ACu; f_800BFDF0(c); // 800BE8A8
  c->r[0]=R32(c->r[3]+0x00000008u); // 800BE8AC
  c->r[0]=rotl(c->r[0],0)&0x00000004u; cr0(c,c->r[0]); // 800BE8B0
  if (crb(c,2)) { goto L_800BE8CC; } // 800BE8B4
  c->r[4]=c->r[28]|c->r[28]; // 800BE8B8
  c->r[3]=c->r[24]+0x00000274u; // 800BE8BC
  c->lr=0x800BE8C4u; f_800CE77C(c); // 800BE8C0
  cmps(c,0,(int32_t)c->r[3],0); // 800BE8C4
  if (!crb(c,2)) { goto L_800BEA6C; } // 800BE8C8
L_800BE8CC:;
  cmpu(c,0,c->r[25],0x00000011u); // 800BE8CC
  if (!crb(c,1)) { goto L_800BE8D8; } // 800BE8D0
  c->r[25]=0u+0x00000000u; // 800BE8D4
L_800BE8D8:;
  c->r[3]=0u+0x806D0000u; // 800BE8D8
  c->r[0]=rotl(c->r[25],4)&0xFFFFFFF0u; // 800BE8DC
  c->r[3]=c->r[3]+0x00007038u; // 800BE8E0
  c->r[0]=R32(c->r[3]+c->r[0]); // 800BE8E4
  cmps(c,0,(int32_t)c->r[0],0); // 800BE8E8
  if (!crb(c,2)) { goto L_800BE8F4; } // 800BE8EC
  c->r[25]=0u+0x00000000u; // 800BE8F0
L_800BE8F4:;
  c->r[0]=0u+0x00000100u; // 800BE8F4
  c->r[30]=0u+0x00000000u; // 800BE8F8
  c->r[3]=0u+0x00000000u; // 800BE8FC
  c->ctr=c->r[0]; // 800BE900
L_800BE904:;
  c->r[0]=R32(c->r[24]+0x000000ACu); // 800BE904
  c->r[31]=c->r[0]+c->r[3]; // 800BE908
  c->r[0]=R32(c->r[31]+0x0000003Cu); // 800BE90C
  cmps(c,0,(int32_t)c->r[0],0); // 800BE910
  if (!crb(c,0)) { goto L_800BEA60; } // 800BE914
  c->r[0]=(uint32_t)((int32_t)c->r[25]*(int32_t)28); // 800BE918
  c->r[4]=R32(c->r[24]+0x000000B0u); // 800BE91C
  c->r[3]=c->r[27]|c->r[27]; // 800BE920
  c->r[5]=c->r[31]|c->r[31]; // 800BE924
  c->r[23]=c->r[4]+c->r[0]; // 800BE928
  c->r[4]=c->r[23]|c->r[23]; // 800BE92C
  c->lr=0x800BE934u; f_80383AA0(c); // 800BE930
  c->r[3]=c->r[27]|c->r[27]; // 800BE934
  c->r[4]=c->r[23]+0x0000000Cu; // 800BE938
  c->r[5]=c->r[31]+0x0000000Cu; // 800BE93C
  c->lr=0x800BE944u; f_80383AA0(c); // 800BE940
  {uint32_t ea=c->r[23]+0x00000018u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BE944
  {uint32_t ea=c->r[31]+0x00000018u; WF32(ea,c->f[0]);} // 800BE948
  {uint32_t ea=c->r[2]+0xFFFFA0F8u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BE94C
  {uint32_t ea=c->r[31]+0x0000001Cu; WF32(ea,c->f[0]);} // 800BE950
  {uint32_t ea=c->r[31]+0x00000020u; WF32(ea,c->f[0]);} // 800BE954
  {uint32_t ea=c->r[31]+0x00000024u; WF32(ea,c->f[0]);} // 800BE958
  {uint32_t ea=c->r[31]+0x00000028u; WF32(ea,c->f[0]);} // 800BE95C
  {uint32_t ea=c->r[31]+0x0000002Cu; WF32(ea,c->f[0]);} // 800BE960
  {uint32_t ea=c->r[31]+0x00000030u; WF32(ea,c->f[0]);} // 800BE964
  {uint32_t ea=c->r[31]+0x00000034u; WF32(ea,c->f[0]);} // 800BE968
  W32(c->r[31]+0x00000038u,c->r[26]); // 800BE96C
  W32(c->r[31]+0x0000003Cu,c->r[25]); // 800BE970
  W32(c->r[31]+0x00000040u,c->r[28]); // 800BE974
  W32(c->r[31]+0x00000044u,c->r[29]); // 800BE978
  c->lr=0x800BE980u; f_803B220C(c); // 800BE97C
  c->r[0]=c->r[3]^0x80000000u; // 800BE980
  c->r[3]=0u+0x43300000u; // 800BE984
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 800BE988
  c->r[6]=0u+0x00000000u; // 800BE98C
  {uint32_t ea=c->r[2]+0xFFFFA118u; c->f[3]=RF64(ea);} // 800BE990
  c->r[0]=0u+0x00000002u; // 800BE994
  W32(c->r[1]+0x00000018u,c->r[3]); // 800BE998
  c->r[3]=c->r[6]|c->r[6]; // 800BE99C
  {uint32_t ea=c->r[2]+0xFFFFA104u; c->f[1]=c->ps1[1]=RF32(ea);} // 800BE9A0
  c->r[7]=0u+0x00000000u; // 800BE9A4
  {uint32_t ea=c->r[1]+0x00000018u; c->f[2]=RF64(ea);} // 800BE9A8
  {uint32_t ea=c->r[2]+0xFFFFA0F8u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BE9AC
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[3]); // 800BE9B0
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[2]); // 800BE9B4
  {uint32_t ea=c->r[31]+0x00000048u; WF32(ea,c->f[1]);} // 800BE9B8
  {uint32_t ea=c->r[31]+0x0000004Cu; WF32(ea,c->f[0]);} // 800BE9BC
  {uint32_t ea=c->r[31]+0x00000050u; WF32(ea,c->f[0]);} // 800BE9C0
  W32(c->r[31]+0x00000054u,c->r[6]); // 800BE9C4
  c->ctr=c->r[0]; // 800BE9C8
L_800BE9CC:;
  c->r[5]=c->r[31]+c->r[3]; // 800BE9CC
  c->r[4]=c->r[31]+c->r[7]; // 800BE9D0
  {uint32_t ea=c->r[5]+0x00000058u; WF32(ea,c->f[0]);} // 800BE9D4
  c->r[7]=c->r[7]+0x00000001u; // 800BE9D8
  c->r[3]=c->r[3]+0x00000004u; // 800BE9DC
  W8(c->r[4]+0x00000060u,c->r[6]); // 800BE9E0
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800BE9CC; } // 800BE9E4
  c->r[26]=0u+0x806D0000u; // 800BE9E8
  c->r[5]=0u+0x000000E6u; // 800BE9EC
  c->r[28]=rotl(c->r[25],4)&0xFFFFFFF0u; // 800BE9F0
  W32(c->r[1]+0x00000008u,c->r[5]); // 800BE9F4
  c->r[26]=c->r[26]+0x00007038u; // 800BE9F8
  c->r[4]=c->r[30]|c->r[30]; // 800BE9FC
  c->r[0]=R32(c->r[26]+c->r[28]); // 800BEA00
  c->r[3]=c->r[24]+0x000000B8u; // 800BEA04
  W32(c->r[1]+0x0000000Cu,c->r[5]); // 800BEA08
  W32(c->r[1]+0x00000010u,c->r[0]); // 800BEA0C
  c->lr=0x800BEA14u; f_800AE518(c); // 800BEA10
  c->r[3]=c->r[26]+c->r[28]; // 800BEA14
  c->r[5]=c->r[27]|c->r[27]; // 800BEA18
  c->r[7]=R32(c->r[3]+0x00000004u); // 800BEA1C
  c->r[6]=c->r[30]|c->r[30]; // 800BEA20
  c->r[3]=c->r[24]+0x000000B8u; // 800BEA24
  c->r[4]=c->r[1]+0x00000008u; // 800BEA28
  c->r[8]=0u+0x00000000u; // 800BEA2C
  c->lr=0x800BEA34u; f_800AE348(c); // 800BEA30
  c->r[3]=c->r[25]|c->r[25]; // 800BEA34
  c->lr=0x800BEA3Cu; f_800BFDF0(c); // 800BEA38
  c->r[0]=R32(c->r[3]+0x00000008u); // 800BEA3C
  c->r[0]=rotl(c->r[0],0)&0x00000010u; cr0(c,c->r[0]); // 800BEA40
  if (crb(c,2)) { goto L_800BEA6C; } // 800BEA44
  {uint32_t ea=c->r[2]+0xFFFFA134u; c->f[1]=c->ps1[1]=RF32(ea);} // 800BEA48
  c->r[3]=c->r[24]|c->r[24]; // 800BEA4C
  {uint32_t ea=c->r[2]+0xFFFFA0F8u; c->f[2]=c->ps1[2]=RF32(ea);} // 800BEA50
  c->r[4]=c->r[30]|c->r[30]; // 800BEA54
  c->lr=0x800BEA5Cu; f_800C0364(c); // 800BEA58
  goto L_800BEA6C; // 800BEA5C
L_800BEA60:;
  c->r[30]=c->r[30]+0x00000001u; // 800BEA60
  c->r[3]=c->r[3]+0x00000064u; // 800BEA64
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800BE904; } // 800BEA68
L_800BEA6C:;
  c->r[11]=c->r[1]+0x00000050u; // 800BEA6C
  c->lr=0x800BEA74u; { c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800BEA70
  c->r[0]=R32(c->r[1]+0x00000054u); // 800BEA74
  c->lr=c->r[0]; // 800BEA78
  c->r[1]=c->r[1]+0x00000050u; // 800BEA7C
  return; // 800BEA80
}

// fn_800BEA84
void f_800BEA84(Ctx* __restrict c) {
  trace_call(0x800BEA84u);
  {uint32_t ea=c->r[1]+0xFFFFFF60u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BEA84
  c->r[0]=c->lr; // 800BEA88
  W32(c->r[1]+0x000000A4u,c->r[0]); // 800BEA8C
  c->r[11]=c->r[1]+0x00000080u; // 800BEA90
  {uint32_t ea=c->r[1]+0x00000090u; WF64(ea,c->f[31]);} // 800BEA94
  {uint32_t ea=c->r[1]+0x00000098u; psq_store(c,31,ea,0,0);} // 800BEA98
  {uint32_t ea=c->r[1]+0x00000080u; WF64(ea,c->f[30]);} // 800BEA9C
  {uint32_t ea=c->r[1]+0x00000088u; psq_store(c,30,ea,0,0);} // 800BEAA0
  c->lr=0x800BEAA8u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800BEAA4
  c->r[0]=R32(c->r[3]+0x00000004u); // 800BEAA8
  c->r[6]=0u+0x43300000u; // 800BEAAC
  W32(c->r[1]+0x00000048u,c->r[6]); // 800BEAB0
  c->r[28]=c->r[3]|c->r[3]; // 800BEAB4
  cmps(c,0,(int32_t)c->r[0],0); // 800BEAB8
  c->r[29]=c->r[4]|c->r[4]; // 800BEABC
  W32(c->r[1]+0x00000050u,c->r[6]); // 800BEAC0
  c->r[30]=c->r[5]|c->r[5]; // 800BEAC4
  if (!crb(c,2)) { goto L_800BECE0; } // 800BEAC8
  c->r[0]=R32(c->r[13]+0xFFFFC218u); // 800BEACC
  cmps(c,0,(int32_t)c->r[0],0); // 800BEAD0
  if (crb(c,2)) { goto L_800BECE0; } // 800BEAD4
  c->r[26]=0u+0x00000000u; // 800BEAD8
  W8(c->r[1]+0x00000010u,c->r[26]); // 800BEADC
  c->r[3]=c->r[1]+0x00000010u; // 800BEAE0
  c->lr=0x800BEAE8u; f_80046D50(c); // 800BEAE4
  c->r[4]=0u+0x00000000u; // 800BEAE8
  c->lr=0x800BEAF0u; f_8008CA58(c); // 800BEAEC
  W8(c->r[1]+0x0000000Cu,c->r[26]); // 800BEAF0
  c->r[27]=c->r[3]|c->r[3]; // 800BEAF4
  c->r[3]=c->r[1]+0x0000000Cu; // 800BEAF8
  c->lr=0x800BEB00u; f_80046D50(c); // 800BEAFC
  c->r[4]=0u+0x00000000u; // 800BEB00
  c->lr=0x800BEB08u; f_8008CAC4(c); // 800BEB04
  c->r[31]=c->r[3]|c->r[3]; // 800BEB08
  c->r[3]=R32(c->r[13]+0xFFFFC218u); // 800BEB0C
  c->lr=0x800BEB14u; f_800CEC64(c); // 800BEB10
  c->lr=0x800BEB18u; f_800CD5F8(c); // 800BEB14
  c->r[0]=(uint32_t)((int32_t)c->r[27]*(int32_t)2160); // 800BEB18
  c->r[4]=R32(c->r[28]+0x000000B4u); // 800BEB1C
  c->r[27]=(uint32_t)(int32_t)(int8_t)c->r[3]; // 800BEB20
  W8(c->r[1]+0x00000008u,c->r[26]); // 800BEB24
  c->r[3]=c->r[1]+0x00000008u; // 800BEB28
  c->r[0]=c->r[4]+c->r[0]; // 800BEB2C
  c->r[5]=(uint32_t)((int32_t)c->r[31]*(int32_t)240); // 800BEB30
  c->r[4]=(uint32_t)((int32_t)c->r[27]*(int32_t)40); // 800BEB34
  c->r[0]=c->r[5]+c->r[0]; // 800BEB38
  c->r[26]=c->r[4]+c->r[0]; // 800BEB3C
  c->lr=0x800BEB44u; f_80046FEC(c); // 800BEB40
  c->lr=0x800BEB48u; f_801A15A4(c); // 800BEB44
  c->r[0]=(uint32_t)((int32_t)c->r[27]*(int32_t)24); // 800BEB48
  c->r[4]=R32(c->r[28]+0x000000B4u); // 800BEB4C
  c->r[3]=rotl(c->r[3],2)&0xFFFFFFFCu; // 800BEB50
  {uint32_t ea=c->r[26]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BEB54
  c->r[0]=c->r[4]+c->r[0]; // 800BEB58
  c->r[3]=c->r[0]+c->r[3]; // 800BEB5C
  {uint32_t ea=c->r[3]+0x000021C0u; c->f[1]=c->ps1[1]=RF32(ea);} // 800BEB60
  c->f[30]=c->ps1[30]=S(c->f[0]+c->f[1]); // 800BEB64
  c->lr=0x800BEB6Cu; f_803B220C(c); // 800BEB68
  c->r[0]=c->r[3]^0x80000000u; // 800BEB6C
  W32(c->r[1]+0x0000004Cu,c->r[0]); // 800BEB70
  {uint32_t ea=c->r[2]+0xFFFFA118u; c->f[2]=RF64(ea);} // 800BEB74
  {uint32_t ea=c->r[1]+0x00000048u; c->f[1]=RF64(ea);} // 800BEB78
  {uint32_t ea=c->r[2]+0xFFFFA138u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BEB7C
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 800BEB80
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[1]); // 800BEB84
  fcmp(c,0,c->f[0],c->f[30]); // 800BEB88
  setcrb(c,2,crb(c,0)|crb(c,2)); // 800BEB8C
  if (!crb(c,2)) { goto L_800BECE0; } // 800BEB90
  c->lr=0x800BEB98u; f_803B220C(c); // 800BEB94
  {uint32_t ea=c->r[26]+0x00000004u; c->f[4]=c->ps1[4]=RF32(ea);} // 800BEB98
  c->r[0]=c->r[3]^0x80000000u; // 800BEB9C
  {uint32_t ea=c->r[26]+0x00000008u; c->f[3]=c->ps1[3]=RF32(ea);} // 800BEBA0
  {uint32_t ea=c->r[26]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800BEBA4
  c->f[2]=c->ps1[2]=S(c->f[4]+c->f[3]); // 800BEBA8
  {uint32_t ea=c->r[2]+0xFFFFA13Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800BEBAC
  W32(c->r[1]+0x00000054u,c->r[0]); // 800BEBB0
  {uint32_t ea=c->r[2]+0xFFFFA118u; c->f[5]=RF64(ea);} // 800BEBB4
  c->f[1]=c->ps1[1]=S(c->f[1]+c->f[2]); // 800BEBB8
  {uint32_t ea=c->r[1]+0x00000050u; c->f[2]=RF64(ea);} // 800BEBBC
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[5]); // 800BEBC0
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 800BEBC4
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[2]); // 800BEBC8
  fcmp(c,0,c->f[0],c->f[4]); // 800BEBCC
  setcrb(c,2,crb(c,0)|crb(c,2)); // 800BEBD0
  if (!crb(c,2)) { goto L_800BEC08; } // 800BEBD4
  c->r[3]=R32(c->r[26]+0x00000010u); // 800BEBD8
  c->r[31]=0u+0x00000003u; // 800BEBDC
  c->r[0]=R32(c->r[26]+0x00000014u); // 800BEBE0
  c->r[3]=c->r[3]^0x80000000u; // 800BEBE4
  W32(c->r[1]+0x0000004Cu,c->r[3]); // 800BEBE8
  c->r[0]=c->r[0]^0x80000000u; // 800BEBEC
  W32(c->r[1]+0x00000054u,c->r[0]); // 800BEBF0
  {uint32_t ea=c->r[1]+0x00000048u; c->f[1]=RF64(ea);} // 800BEBF4
  {uint32_t ea=c->r[1]+0x00000050u; c->f[0]=RF64(ea);} // 800BEBF8
  c->f[31]=c->ps1[31]=S(c->f[1]-c->f[5]); // 800BEBFC
  c->f[30]=c->ps1[30]=S(c->f[0]-c->f[5]); // 800BEC00
  goto L_800BEC74; // 800BEC04
L_800BEC08:;
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[4]); // 800BEC08
  fcmp(c,0,c->f[0],c->f[3]); // 800BEC0C
  setcrb(c,2,crb(c,0)|crb(c,2)); // 800BEC10
  if (!crb(c,2)) { goto L_800BEC48; } // 800BEC14
  c->r[3]=R32(c->r[26]+0x00000018u); // 800BEC18
  c->r[31]=0u+0x00000004u; // 800BEC1C
  c->r[0]=R32(c->r[26]+0x0000001Cu); // 800BEC20
  c->r[3]=c->r[3]^0x80000000u; // 800BEC24
  W32(c->r[1]+0x0000004Cu,c->r[3]); // 800BEC28
  c->r[0]=c->r[0]^0x80000000u; // 800BEC2C
  W32(c->r[1]+0x00000054u,c->r[0]); // 800BEC30
  {uint32_t ea=c->r[1]+0x00000048u; c->f[1]=RF64(ea);} // 800BEC34
  {uint32_t ea=c->r[1]+0x00000050u; c->f[0]=RF64(ea);} // 800BEC38
  c->f[31]=c->ps1[31]=S(c->f[1]-c->f[5]); // 800BEC3C
  c->f[30]=c->ps1[30]=S(c->f[0]-c->f[5]); // 800BEC40
  goto L_800BEC74; // 800BEC44
L_800BEC48:;
  c->r[3]=R32(c->r[26]+0x00000020u); // 800BEC48
  c->r[31]=0u+0x00000005u; // 800BEC4C
  c->r[0]=R32(c->r[26]+0x00000024u); // 800BEC50
  c->r[3]=c->r[3]^0x80000000u; // 800BEC54
  W32(c->r[1]+0x0000004Cu,c->r[3]); // 800BEC58
  c->r[0]=c->r[0]^0x80000000u; // 800BEC5C
  W32(c->r[1]+0x00000054u,c->r[0]); // 800BEC60
  {uint32_t ea=c->r[1]+0x00000048u; c->f[1]=RF64(ea);} // 800BEC64
  {uint32_t ea=c->r[1]+0x00000050u; c->f[0]=RF64(ea);} // 800BEC68
  c->f[31]=c->ps1[31]=S(c->f[1]-c->f[5]); // 800BEC6C
  c->f[30]=c->ps1[30]=S(c->f[0]-c->f[5]); // 800BEC70
L_800BEC74:;
  c->r[3]=c->r[1]+0x00000018u; // 800BEC74
  c->lr=0x800BEC7Cu; f_80382F00(c); // 800BEC78
  {uint32_t ea=c->r[30]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BEC7C
  {uint32_t ea=c->r[1]+0x00000024u; WF32(ea,c->f[0]);} // 800BEC80
  {uint32_t ea=c->r[30]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BEC84
  {uint32_t ea=c->r[1]+0x00000034u; WF32(ea,c->f[0]);} // 800BEC88
  {uint32_t ea=c->r[30]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BEC8C
  {uint32_t ea=c->r[1]+0x00000044u; WF32(ea,c->f[0]);} // 800BEC90
  c->lr=0x800BEC98u; f_803B220C(c); // 800BEC94
  c->f[1]=c->ps1[1]=S(c->f[30]-c->f[31]); // 800BEC98
  c->r[0]=c->r[3]^0x80000000u; // 800BEC9C
  {uint32_t ea=c->r[2]+0xFFFFA13Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800BECA0
  c->r[3]=c->r[28]|c->r[28]; // 800BECA4
  W32(c->r[1]+0x0000004Cu,c->r[0]); // 800BECA8
  c->r[4]=c->r[31]|c->r[31]; // 800BECAC
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 800BECB0
  {uint32_t ea=c->r[2]+0xFFFFA118u; c->f[2]=RF64(ea);} // 800BECB4
  {uint32_t ea=c->r[1]+0x00000048u; c->f[1]=RF64(ea);} // 800BECB8
  c->r[5]=c->r[29]|c->r[29]; // 800BECBC
  c->r[6]=c->r[1]+0x00000018u; // 800BECC0
  c->r[8]=0u+0xFFFFFFFFu; // 800BECC4
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 800BECC8
  c->f[0]=c->ps1[0]=S(std::fma(c->f[0],c->f[1],c->f[31])); // 800BECCC
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 800BECD0
  {uint32_t ea=c->r[1]+0x00000058u; WF64(ea,c->f[0]);} // 800BECD4
  c->r[7]=R32(c->r[1]+0x0000005Cu); // 800BECD8
  c->lr=0x800BECE0u; f_800BE878(c); // 800BECDC
L_800BECE0:;
  c->r[11]=c->r[1]+0x00000080u; // 800BECE0
  {uint32_t ea=c->r[1]+0x00000098u; psq_load(c,31,ea,0,0);} // 800BECE4
  {uint32_t ea=c->r[1]+0x00000090u; c->f[31]=RF64(ea);} // 800BECE8
  {uint32_t ea=c->r[1]+0x00000088u; psq_load(c,30,ea,0,0);} // 800BECEC
  {uint32_t ea=c->r[1]+0x00000080u; c->f[30]=RF64(ea);} // 800BECF0
  c->lr=0x800BECF8u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800BECF4
  c->r[0]=R32(c->r[1]+0x000000A4u); // 800BECF8
  c->lr=c->r[0]; // 800BECFC
  c->r[1]=c->r[1]+0x000000A0u; // 800BED00
  return; // 800BED04
}

// fn_800BED08
void f_800BED08(Ctx* __restrict c) {
  trace_call(0x800BED08u);
  {uint32_t ea=c->r[1]+0xFFFFFF60u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BED08
  c->r[0]=c->lr; // 800BED0C
  W32(c->r[1]+0x000000A4u,c->r[0]); // 800BED10
  c->r[11]=c->r[1]+0x000000A0u; // 800BED14
  c->lr=0x800BED1Cu; { W32(c->r[11]+0xFFFFFFD4u,c->r[21]); W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800BED18
  cmpu(c,0,c->r[4],0x00000001u); // 800BED1C
  c->r[21]=c->r[3]|c->r[3]; // 800BED20
  c->r[22]=c->r[4]|c->r[4]; // 800BED24
  c->r[23]=c->r[5]|c->r[5]; // 800BED28
  if (!crb(c,1)) { goto L_800BED34; } // 800BED2C
  c->r[22]=0u+0x00000000u; // 800BED30
L_800BED34:;
  c->r[4]=c->r[23]|c->r[23]; // 800BED34
  c->r[3]=c->r[3]+0x000000B8u; // 800BED38
  c->lr=0x800BED40u; f_800AEDAC(c); // 800BED3C
  c->r[4]=c->r[3]|c->r[3]; // 800BED40
  c->r[3]=c->r[1]+0x00000050u; // 800BED44
  {uint32_t ea=c->r[4]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800BED48
  {uint32_t ea=c->r[4]+0x0000001Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 800BED4C
  {uint32_t ea=c->r[4]+0x0000002Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 800BED50
  c->lr=0x800BED58u; f_8005A6D0(c); // 800BED54
  c->r[27]=(uint32_t)((int32_t)c->r[23]*(int32_t)100); // 800BED58
  c->r[0]=R32(c->r[21]+0x000000ACu); // 800BED5C
  c->r[24]=0u+0x00000000u; // 800BED60
  c->r[3]=c->r[0]+c->r[27]; // 800BED64
  c->r[26]=R32(c->r[3]+0x0000003Cu); // 800BED68
  c->r[25]=R32(c->r[3]+0x00000040u); // 800BED6C
  c->r[3]=c->r[26]|c->r[26]; // 800BED70
  c->lr=0x800BED78u; f_800BFDF0(c); // 800BED74
  c->r[0]=R32(c->r[3]+0x00000008u); // 800BED78
  c->r[0]=rotl(c->r[0],0)&0x00000008u; cr0(c,c->r[0]); // 800BED7C
  if (crb(c,2)) { goto L_800BEE74; } // 800BED80
  c->r[0]=R32(c->r[21]+0x000000ACu); // 800BED84
  c->r[3]=c->r[21]+0x000000DCu; // 800BED88
  c->r[4]=0u+0x00000005u; // 800BED8C
  c->r[5]=c->r[0]+c->r[27]; // 800BED90
  {uint32_t ea=c->r[5]+0x00000050u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BED94
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 800BED98
  {uint32_t ea=c->r[1]+0x00000060u; WF64(ea,c->f[0]);} // 800BED9C
  c->r[0]=R32(c->r[1]+0x00000064u); // 800BEDA0
  c->r[25]=c->r[25]+c->r[0]; // 800BEDA4
  c->r[5]=c->r[25]|c->r[25]; // 800BEDA8
  c->lr=0x800BEDB0u; f_800CDC90(c); // 800BEDAC
  c->r[29]=0u+0x00000000u; // 800BEDB0
  W8(c->r[1]+0x00000040u,c->r[29]); // 800BEDB4
  c->r[3]=c->r[1]+0x00000040u; // 800BEDB8
  c->lr=0x800BEDC0u; f_800474F4(c); // 800BEDBC
  c->r[28]=0u+0x80690000u; // 800BEDC0
  {uint32_t ea=c->r[2]+0xFFFFA100u; c->f[1]=c->ps1[1]=RF32(ea);} // 800BEDC4
  c->r[28]=c->r[28]+0xFFFFE4C0u; // 800BEDC8
  c->r[5]=0u+0x00000000u; // 800BEDCC
  c->r[4]=c->r[28]+0x0000002Fu; // 800BEDD0
  c->r[6]=0u+0xFFFFFFFFu; // 800BEDD4
  c->r[7]=0u+0x00000000u; // 800BEDD8
  c->r[8]=0u+0x00000000u; // 800BEDDC
  c->r[9]=0u+0x00000001u; // 800BEDE0
  c->lr=0x800BEDE8u; f_8004BFE0(c); // 800BEDE4
  W8(c->r[1]+0x0000003Cu,c->r[29]); // 800BEDE8
  c->r[3]=c->r[1]+0x0000003Cu; // 800BEDEC
  c->lr=0x800BEDF4u; f_800474F4(c); // 800BEDF0
  {uint32_t ea=c->r[2]+0xFFFFA100u; c->f[1]=c->ps1[1]=RF32(ea);} // 800BEDF4
  c->r[6]=c->r[22]|c->r[22]; // 800BEDF8
  c->r[4]=c->r[28]+0x00000036u; // 800BEDFC
  c->r[5]=0u+0x00000000u; // 800BEE00
  c->r[7]=0u+0x00000000u; // 800BEE04
  c->r[8]=0u+0x00000000u; // 800BEE08
  c->r[9]=0u+0x00000001u; // 800BEE0C
  c->lr=0x800BEE14u; f_8004BFE0(c); // 800BEE10
  c->r[0]=R8(c->r[13]+0xFFFFBB77u); // 800BEE14
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800BEE18
  if (!crb(c,2)) { goto L_800BEE60; } // 800BEE1C
  c->r[28]=0u+0x80730000u; // 800BEE20
  c->r[3]=c->r[28]+0x00003694u; // 800BEE24
  c->lr=0x800BEE2Cu; f_800BD290(c); // 800BEE28
  c->r[6]=0u+0x806D0000u; // 800BEE2C
  c->r[4]=0u+0x80050000u; // 800BEE30
  c->r[6]=c->r[6]+0xFFFFC740u; // 800BEE34
  c->r[3]=c->r[28]+0x00003694u; // 800BEE38
  c->r[0]=c->r[6]+0x00000028u; // 800BEE3C
  c->r[5]=0u+0x80750000u; // 800BEE40
  W32(c->r[3]+0x000000A4u,c->r[6]); // 800BEE44
  c->r[4]=c->r[4]+0xFFFFA2E4u; // 800BEE48
  c->r[5]=c->r[5]+0x00002E90u; // 800BEE4C
  W32(c->r[3]+0x000000A8u,c->r[0]); // 800BEE50
  c->lr=0x800BEE58u; f_803A92B8(c); // 800BEE54
  c->r[0]=0u+0x00000001u; // 800BEE58
  W8(c->r[13]+0xFFFFBB77u,c->r[0]); // 800BEE5C
L_800BEE60:;
  c->r[3]=0u+0x80730000u; // 800BEE60
  c->r[3]=c->r[3]+0x00003694u; // 800BEE64
  c->r[3]=c->r[3]+0x000002A0u; // 800BEE68
  c->lr=0x800BEE70u; f_8026D518(c); // 800BEE6C
  goto L_800BF0A8; // 800BEE70
L_800BEE74:;
  c->r[3]=c->r[26]|c->r[26]; // 800BEE74
  c->lr=0x800BEE7Cu; f_800BFDF0(c); // 800BEE78
  c->r[0]=R32(c->r[3]+0x00000008u); // 800BEE7C
  c->r[0]=rotl(c->r[0],0)&0x00000004u; cr0(c,c->r[0]); // 800BEE80
  if (crb(c,2)) { goto L_800BEEFC; } // 800BEE84
  c->r[4]=c->r[25]|c->r[25]; // 800BEE88
  c->r[3]=c->r[21]+0x00000274u; // 800BEE8C
  c->lr=0x800BEE94u; f_800CE718(c); // 800BEE90
  c->r[29]=0u+0x00000000u; // 800BEE94
  W8(c->r[1]+0x00000038u,c->r[29]); // 800BEE98
  c->r[3]=c->r[1]+0x00000038u; // 800BEE9C
  c->lr=0x800BEEA4u; f_800474F4(c); // 800BEEA0
  c->r[28]=0u+0x80690000u; // 800BEEA4
  {uint32_t ea=c->r[2]+0xFFFFA100u; c->f[1]=c->ps1[1]=RF32(ea);} // 800BEEA8
  c->r[28]=c->r[28]+0xFFFFE4C0u; // 800BEEAC
  c->r[5]=0u+0x00000000u; // 800BEEB0
  c->r[4]=c->r[28]+0x0000003Eu; // 800BEEB4
  c->r[6]=0u+0xFFFFFFFFu; // 800BEEB8
  c->r[7]=0u+0x00000000u; // 800BEEBC
  c->r[8]=0u+0x00000000u; // 800BEEC0
  c->r[9]=0u+0x00000001u; // 800BEEC4
  c->lr=0x800BEECCu; f_8004BFE0(c); // 800BEEC8
  W8(c->r[1]+0x00000034u,c->r[29]); // 800BEECC
  c->r[3]=c->r[1]+0x00000034u; // 800BEED0
  c->lr=0x800BEED8u; f_800474F4(c); // 800BEED4
  {uint32_t ea=c->r[2]+0xFFFFA100u; c->f[1]=c->ps1[1]=RF32(ea);} // 800BEED8
  c->r[6]=c->r[22]|c->r[22]; // 800BEEDC
  c->r[4]=c->r[28]+0x00000045u; // 800BEEE0
  c->r[5]=0u+0x00000000u; // 800BEEE4
  c->r[7]=0u+0x00000000u; // 800BEEE8
  c->r[8]=0u+0x00000000u; // 800BEEEC
  c->r[9]=0u+0x00000001u; // 800BEEF0
  c->lr=0x800BEEF8u; f_8004BFE0(c); // 800BEEF4
  goto L_800BF0A8; // 800BEEF8
L_800BEEFC:;
  c->r[3]=c->r[26]|c->r[26]; // 800BEEFC
  c->lr=0x800BEF04u; f_800BFDF0(c); // 800BEF00
  c->r[0]=R32(c->r[3]+0x00000008u); // 800BEF04
  c->r[0]=rotl(c->r[0],0)&0x00000002u; cr0(c,c->r[0]); // 800BEF08
  if (crb(c,2)) { goto L_800BF004; } // 800BEF0C
  c->r[0]=0u+0x00000000u; // 800BEF10
  W8(c->r[1]+0x00000030u,c->r[0]); // 800BEF14
  c->r[3]=c->r[1]+0x00000030u; // 800BEF18
  c->lr=0x800BEF20u; f_8004F474(c); // 800BEF1C
  c->r[4]=c->r[22]|c->r[22]; // 800BEF20
  c->r[5]=c->r[26]|c->r[26]; // 800BEF24
  c->lr=0x800BEF2Cu; f_800B0868(c); // 800BEF28
  c->r[24]=c->r[3]|c->r[3]; // 800BEF2C
  c->r[4]=c->r[26]|c->r[26]; // 800BEF30
  c->r[3]=c->r[21]+0x000000DCu; // 800BEF34
  c->lr=0x800BEF3Cu; f_800CDDE0(c); // 800BEF38
  cmps(c,0,(int32_t)c->r[3],0); // 800BEF3C
  if (!crb(c,2)) { goto L_800BEF60; } // 800BEF40
  {uint32_t ea=c->r[2]+0xFFFFA0F8u; c->f[1]=c->ps1[1]=RF32(ea);} // 800BEF44
  c->r[4]=c->r[26]|c->r[26]; // 800BEF48
  c->r[3]=c->r[21]+0x000000DCu; // 800BEF4C
  c->r[5]=0u+0x00000000u; // 800BEF50
  c->r[6]=0u+0xFFFFFFFFu; // 800BEF54
  c->r[7]=0u+0xFFFFFFFFu; // 800BEF58
  c->lr=0x800BEF60u; f_800CDB84(c); // 800BEF5C
L_800BEF60:;
  c->r[4]=c->r[26]|c->r[26]; // 800BEF60
  c->r[5]=c->r[24]|c->r[24]; // 800BEF64
  c->r[3]=c->r[21]+0x000000DCu; // 800BEF68
  c->lr=0x800BEF70u; f_800CDC90(c); // 800BEF6C
  c->r[29]=0u+0x00000000u; // 800BEF70
  W8(c->r[1]+0x0000002Cu,c->r[29]); // 800BEF74
  c->r[3]=c->r[1]+0x0000002Cu; // 800BEF78
  c->lr=0x800BEF80u; f_800474F4(c); // 800BEF7C
  c->r[28]=0u+0x80690000u; // 800BEF80
  {uint32_t ea=c->r[2]+0xFFFFA100u; c->f[1]=c->ps1[1]=RF32(ea);} // 800BEF84
  c->r[28]=c->r[28]+0xFFFFE4C0u; // 800BEF88
  c->r[5]=0u+0x00000000u; // 800BEF8C
  c->r[4]=c->r[28]+0x0000004Du; // 800BEF90
  c->r[6]=0u+0xFFFFFFFFu; // 800BEF94
  c->r[7]=0u+0x00000000u; // 800BEF98
  c->r[8]=0u+0x00000000u; // 800BEF9C
  c->r[9]=0u+0x00000001u; // 800BEFA0
  c->lr=0x800BEFA8u; f_8004BFE0(c); // 800BEFA4
  W8(c->r[1]+0x00000028u,c->r[29]); // 800BEFA8
  c->r[3]=c->r[1]+0x00000028u; // 800BEFAC
  c->lr=0x800BEFB4u; f_800474F4(c); // 800BEFB0
  {uint32_t ea=c->r[2]+0xFFFFA100u; c->f[1]=c->ps1[1]=RF32(ea);} // 800BEFB4
  c->r[6]=c->r[22]|c->r[22]; // 800BEFB8
  c->r[4]=c->r[28]+0x00000054u; // 800BEFBC
  c->r[5]=0u+0x00000000u; // 800BEFC0
  c->r[7]=0u+0x00000000u; // 800BEFC4
  c->r[8]=0u+0x00000000u; // 800BEFC8
  c->r[9]=0u+0x00000001u; // 800BEFCC
  c->lr=0x800BEFD4u; f_8004BFE0(c); // 800BEFD0
  c->r[4]=c->r[22]|c->r[22]; // 800BEFD4
  c->r[5]=c->r[26]|c->r[26]; // 800BEFD8
  c->r[3]=c->r[21]+0x000000DCu; // 800BEFDC
  c->lr=0x800BEFE4u; f_800CE1BC(c); // 800BEFE0
  cmps(c,0,(int32_t)c->r[3],0); // 800BEFE4
  if (!crb(c,0)) { goto L_800BF0A8; } // 800BEFE8
  c->r[4]=c->r[26]|c->r[26]; // 800BEFEC
  c->r[5]=c->r[22]|c->r[22]; // 800BEFF0
  c->r[3]=c->r[21]+0x000000DCu; // 800BEFF4
  c->r[6]=0u+0xFFFFFFFFu; // 800BEFF8
  c->lr=0x800BF000u; f_800CDF98(c); // 800BEFFC
  goto L_800BF0A8; // 800BF000
L_800BF004:;
  c->r[3]=c->r[26]|c->r[26]; // 800BF004
  c->lr=0x800BF00Cu; f_800BFDF0(c); // 800BF008
  c->r[0]=R32(c->r[3]+0x00000008u); // 800BF00C
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 800BF010
  if (crb(c,2)) { goto L_800BF0A8; } // 800BF014
  c->r[29]=0u+0x00000000u; // 800BF018
  W8(c->r[1]+0x00000024u,c->r[29]); // 800BF01C
  c->r[3]=c->r[1]+0x00000024u; // 800BF020
  c->lr=0x800BF028u; f_8004F474(c); // 800BF024
  c->r[4]=c->r[22]|c->r[22]; // 800BF028
  c->r[5]=c->r[26]|c->r[26]; // 800BF02C
  c->lr=0x800BF034u; f_800B0868(c); // 800BF030
  c->r[24]=c->r[3]|c->r[3]; // 800BF034
  c->r[4]=c->r[26]|c->r[26]; // 800BF038
  c->r[5]=c->r[24]|c->r[24]; // 800BF03C
  c->r[3]=c->r[21]+0x000000DCu; // 800BF040
  c->lr=0x800BF048u; f_800CDC90(c); // 800BF044
  W8(c->r[1]+0x00000020u,c->r[29]); // 800BF048
  c->r[3]=c->r[1]+0x00000020u; // 800BF04C
  c->lr=0x800BF054u; f_800474F4(c); // 800BF050
  c->r[28]=0u+0x80690000u; // 800BF054
  {uint32_t ea=c->r[2]+0xFFFFA100u; c->f[1]=c->ps1[1]=RF32(ea);} // 800BF058
  c->r[28]=c->r[28]+0xFFFFE4C0u; // 800BF05C
  c->r[5]=0u+0x00000000u; // 800BF060
  c->r[4]=c->r[28]+0x0000005Cu; // 800BF064
  c->r[6]=0u+0xFFFFFFFFu; // 800BF068
  c->r[7]=0u+0x00000000u; // 800BF06C
  c->r[8]=0u+0x00000000u; // 800BF070
  c->r[9]=0u+0x00000001u; // 800BF074
  c->lr=0x800BF07Cu; f_8004BFE0(c); // 800BF078
  W8(c->r[1]+0x0000001Cu,c->r[29]); // 800BF07C
  c->r[3]=c->r[1]+0x0000001Cu; // 800BF080
  c->lr=0x800BF088u; f_800474F4(c); // 800BF084
  {uint32_t ea=c->r[2]+0xFFFFA100u; c->f[1]=c->ps1[1]=RF32(ea);} // 800BF088
  c->r[6]=c->r[22]|c->r[22]; // 800BF08C
  c->r[4]=c->r[28]+0x00000063u; // 800BF090
  c->r[5]=0u+0x00000000u; // 800BF094
  c->r[7]=0u+0x00000000u; // 800BF098
  c->r[8]=0u+0x00000000u; // 800BF09C
  c->r[9]=0u+0x00000001u; // 800BF0A0
  c->lr=0x800BF0A8u; f_8004BFE0(c); // 800BF0A4
L_800BF0A8:;
  c->r[0]=R32(c->r[21]+0x000000ACu); // 800BF0A8
  c->r[3]=c->r[0]+c->r[27]; // 800BF0AC
  c->r[0]=R32(c->r[3]+0x00000044u); // 800BF0B0
  cmps(c,0,(int32_t)c->r[0],0); // 800BF0B4
  if (crb(c,0)) { goto L_800BF2C8; } // 800BF0B8
  c->r[0]=R8(c->r[13]+0xFFFFBBF0u); // 800BF0BC
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800BF0C0
  if (!crb(c,2)) { goto L_800BF108; } // 800BF0C4
  c->r[28]=0u+0x80740000u; // 800BF0C8
  c->r[3]=c->r[28]+0xFFFFFF5Cu; // 800BF0CC
  c->lr=0x800BF0D4u; f_800A1FCC(c); // 800BF0D0
  c->r[6]=0u+0x806D0000u; // 800BF0D4
  c->r[4]=0u+0x80050000u; // 800BF0D8
  c->r[6]=c->r[6]+0xFFFFCD54u; // 800BF0DC
  c->r[3]=c->r[28]+0xFFFFFF5Cu; // 800BF0E0
  c->r[0]=c->r[6]+0x00000028u; // 800BF0E4
  c->r[5]=0u+0x80750000u; // 800BF0E8
  W32(c->r[3]+0x000000A4u,c->r[6]); // 800BF0EC
  c->r[4]=c->r[4]+0x000009E8u; // 800BF0F0
  c->r[5]=c->r[5]+0x00002EA8u; // 800BF0F4
  W32(c->r[3]+0x000000A8u,c->r[0]); // 800BF0F8
  c->lr=0x800BF100u; f_803A92B8(c); // 800BF0FC
  c->r[0]=0u+0x00000001u; // 800BF100
  W8(c->r[13]+0xFFFFBBF0u,c->r[0]); // 800BF104
L_800BF108:;
  c->r[3]=R32(c->r[21]+0x000000ACu); // 800BF108
  c->r[31]=0u+0x80740000u; // 800BF10C
  c->r[0]=0u+0x00000004u; // 800BF110
  c->r[6]=0u+0x00000000u; // 800BF114
  c->r[4]=c->r[3]+c->r[27]; // 800BF118
  c->r[31]=c->r[31]+0xFFFFFF5Cu; // 800BF11C
  c->r[30]=R32(c->r[4]+0x00000044u); // 800BF120
  c->r[3]=0u+0x00000000u; // 800BF124
  c->r[5]=R32(c->r[4]+0x00000038u); // 800BF128
  c->ctr=c->r[0]; // 800BF12C
L_800BF130:;
  c->r[4]=c->r[31]+c->r[3]; // 800BF130
  c->r[0]=R32(c->r[4]+0x00000958u); // 800BF134
  cmps(c,0,(int32_t)c->r[5],(int32_t)c->r[0]); // 800BF138
  if (crb(c,2)) { goto L_800BF14C; } // 800BF13C
  c->r[6]=c->r[6]+0x00000001u; // 800BF140
  c->r[3]=c->r[3]+0x000008B0u; // 800BF144
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800BF130; } // 800BF148
L_800BF14C:;
  cmps(c,0,(int32_t)c->r[6],4); // 800BF14C
  c->r[0]=0u+0xFFFFFFFFu; // 800BF150
  if (!crb(c,0)) { goto L_800BF15C; } // 800BF154
  c->r[0]=c->r[6]|c->r[6]; // 800BF158
L_800BF15C:;
  cmps(c,0,(int32_t)c->r[0],0); // 800BF15C
  if (crb(c,0)) { goto L_800BF2C8; } // 800BF160
  c->r[28]=(uint32_t)((int32_t)c->r[0]*(int32_t)2224); // 800BF164
  c->r[4]=c->r[30]|c->r[30]; // 800BF168
  c->r[3]=c->r[31]+c->r[28]; // 800BF16C
  c->r[3]=c->r[3]+0x00000130u; // 800BF170
  c->lr=0x800BF178u; f_800A1D5C(c); // 800BF174
  cmps(c,0,(int32_t)c->r[3],0); // 800BF178
  c->r[29]=c->r[3]|c->r[3]; // 800BF17C
  if (crb(c,2)) { goto L_800BF2C8; } // 800BF180
  cmpu(c,0,c->r[30],0x000003FFu); // 800BF184
  c->r[4]=c->r[30]|c->r[30]; // 800BF188
  if (!crb(c,1)) { goto L_800BF194; } // 800BF18C
  c->r[4]=0u+0x00000000u; // 800BF190
L_800BF194:;
  c->r[3]=c->r[31]+c->r[28]; // 800BF194
  c->r[0]=sraw(c,c->r[4],3); // 800BF198
  c->r[27]=c->r[3]+0x000000B0u; // 800BF19C
  c->r[3]=rotl(c->r[4],0)&0x00000007u; // 800BF1A0
  c->r[4]=0u+0x00000001u; // 800BF1A4
  c->r[0]=R8(c->r[27]+c->r[0]); // 800BF1A8
  c->r[3]=((c->r[3])&0x20)?0u:(c->r[4]<<((c->r[3])&31)); // 800BF1AC
  c->r[0]=c->r[3]&c->r[0]; cr0(c,c->r[0]); // 800BF1B0
  if (!crb(c,2)) { goto L_800BF1DC; } // 800BF1B4
  c->r[0]=0u+0x00000000u; // 800BF1B8
  W8(c->r[1]+0x00000018u,c->r[0]); // 800BF1BC
  c->r[3]=c->r[1]+0x00000018u; // 800BF1C0
  c->lr=0x800BF1C8u; f_80046D50(c); // 800BF1C4
  c->r[4]=c->r[29]|c->r[29]; // 800BF1C8
  c->lr=0x800BF1D0u; f_8008CD98(c); // 800BF1CC
  c->r[3]=c->r[31]+c->r[28]; // 800BF1D0
  c->r[0]=0u+0x00000002u; // 800BF1D4
  W32(c->r[3]+0x00000950u,c->r[0]); // 800BF1D8
L_800BF1DC:;
  cmpu(c,0,c->r[30],0x000003FFu); // 800BF1DC
  if (!crb(c,1)) { goto L_800BF1E8; } // 800BF1E0
  c->r[30]=0u+0x00000000u; // 800BF1E4
L_800BF1E8:;
  c->r[5]=sraw(c,c->r[30],3); // 800BF1E8
  c->r[0]=rotl(c->r[30],0)&0x00000007u; // 800BF1EC
  c->r[3]=0u+0x00000001u; // 800BF1F0
  c->r[4]=R8(c->r[27]+c->r[5]); // 800BF1F4
  c->r[0]=((c->r[0])&0x20)?0u:(c->r[3]<<((c->r[0])&31)); // 800BF1F8
  c->r[0]=rotl(c->r[0],0)&0x000000FFu; // 800BF1FC
  c->r[0]=c->r[4]|c->r[0]; // 800BF200
  W8(c->r[27]+c->r[5],c->r[0]); // 800BF204
  c->r[0]=R8(c->r[29]+0x00000000u); // 800BF208
  cmps(c,0,(int32_t)c->r[0],71); // 800BF20C
  if (!crb(c,2)) { goto L_800BF238; } // 800BF210
  c->r[0]=R8(c->r[29]+0x00000001u); // 800BF214
  cmps(c,0,(int32_t)c->r[0],95); // 800BF218
  if (!crb(c,2)) { goto L_800BF238; } // 800BF21C
  c->r[3]=c->r[29]+0x00000002u; // 800BF220
  c->lr=0x800BF228u; f_803B613C(c); // 800BF224
  cmpu(c,0,c->r[3],0x000003FFu); // 800BF228
  if (!crb(c,1)) { goto L_800BF23C; } // 800BF22C
  c->r[3]=0u+0xFFFFFFFFu; // 800BF230
  goto L_800BF23C; // 800BF234
L_800BF238:;
  c->r[3]=0u+0xFFFFFFFFu; // 800BF238
L_800BF23C:;
  cmpu(c,0,c->r[3],0x000003FFu); // 800BF23C
  if (crb(c,1)) { goto L_800BF268; } // 800BF240
  c->r[4]=sraw(c,c->r[3],3); // 800BF244
  c->r[0]=rotl(c->r[3],0)&0x00000007u; // 800BF248
  c->r[3]=0u+0x00000001u; // 800BF24C
  c->r[0]=((c->r[0])&0x20)?0u:(c->r[3]<<((c->r[0])&31)); // 800BF250
  c->r[4]=c->r[31]+c->r[4]; // 800BF254
  c->r[3]=R8(c->r[4]+0x0000236Cu); // 800BF258
  c->r[0]=rotl(c->r[0],0)&0x000000FFu; // 800BF25C
  c->r[0]=c->r[3]|c->r[0]; // 800BF260
  W8(c->r[4]+0x0000236Cu,c->r[0]); // 800BF264
L_800BF268:;
  c->r[0]=R8(c->r[29]+0x00000000u); // 800BF268
  cmps(c,0,(int32_t)c->r[0],67); // 800BF26C
  if (!crb(c,2)) { goto L_800BF298; } // 800BF270
  c->r[0]=R8(c->r[29]+0x00000001u); // 800BF274
  cmps(c,0,(int32_t)c->r[0],95); // 800BF278
  if (!crb(c,2)) { goto L_800BF298; } // 800BF27C
  c->r[3]=c->r[29]+0x00000002u; // 800BF280
  c->lr=0x800BF288u; f_803B613C(c); // 800BF284
  cmpu(c,0,c->r[3],0x0000003Fu); // 800BF288
  if (!crb(c,1)) { goto L_800BF29C; } // 800BF28C
  c->r[3]=0u+0xFFFFFFFFu; // 800BF290
  goto L_800BF29C; // 800BF294
L_800BF298:;
  c->r[3]=0u+0xFFFFFFFFu; // 800BF298
L_800BF29C:;
  cmpu(c,0,c->r[3],0x0000003Fu); // 800BF29C
  if (crb(c,1)) { goto L_800BF2C8; } // 800BF2A0
  c->r[4]=sraw(c,c->r[3],3); // 800BF2A4
  c->r[0]=rotl(c->r[3],0)&0x00000007u; // 800BF2A8
  c->r[3]=0u+0x00000001u; // 800BF2AC
  c->r[0]=((c->r[0])&0x20)?0u:(c->r[3]<<((c->r[0])&31)); // 800BF2B0
  c->r[4]=c->r[31]+c->r[4]; // 800BF2B4
  c->r[3]=R8(c->r[4]+0x000023ECu); // 800BF2B8
  c->r[0]=rotl(c->r[0],0)&0x000000FFu; // 800BF2BC
  c->r[0]=c->r[3]|c->r[0]; // 800BF2C0
  W8(c->r[4]+0x000023ECu,c->r[0]); // 800BF2C4
L_800BF2C8:;
  c->r[0]=0u+0x00000000u; // 800BF2C8
  W8(c->r[1]+0x00000014u,c->r[0]); // 800BF2CC
  c->r[3]=c->r[1]+0x00000014u; // 800BF2D0
  c->lr=0x800BF2D8u; f_8004DAFC(c); // 800BF2D4
  c->r[4]=c->r[1]+0x00000050u; // 800BF2D8
  c->r[5]=c->r[1]+0x00000044u; // 800BF2DC
  c->r[6]=0u+0xFFFFFFFFu; // 800BF2E0
  c->lr=0x800BF2E8u; f_80297C78(c); // 800BF2E4
  {uint32_t ea=c->r[1]+0x0000004Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800BF2E8
  {uint32_t ea=c->r[2]+0xFFFFA0F8u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BF2EC
  fcmp(c,0,c->f[1],c->f[0]); // 800BF2F0
  if (!crb(c,1)) { goto L_800BF304; } // 800BF2F4
  {uint32_t ea=c->r[2]+0xFFFFA140u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BF2F8
  {uint32_t ea=c->r[1]+0x00000044u; WF32(ea,c->f[0]);} // 800BF2FC
  {uint32_t ea=c->r[1]+0x00000048u; WF32(ea,c->f[0]);} // 800BF300
L_800BF304:;
  c->r[27]=0u+0x00000000u; // 800BF304
  W8(c->r[1]+0x0000000Cu,c->r[27]); // 800BF308
  c->r[3]=c->r[1]+0x0000000Cu; // 800BF30C
  c->r[28]=c->r[1]+0x00000010u; // 800BF310
  W8(c->r[1]+0x00000010u,c->r[27]); // 800BF314
  c->lr=0x800BF31Cu; f_80046EFC(c); // 800BF318
  c->r[4]=c->r[22]|c->r[22]; // 800BF31C
  c->lr=0x800BF324u; f_800B27B8(c); // 800BF320
  c->r[22]=c->r[3]|c->r[3]; // 800BF324
  c->r[3]=c->r[28]|c->r[28]; // 800BF328
  c->lr=0x800BF330u; f_800462D8(c); // 800BF32C
  {uint32_t ea=c->r[1]+0x00000044u; c->f[1]=c->ps1[1]=RF32(ea);} // 800BF330
  c->r[4]=c->r[22]|c->r[22]; // 800BF334
  {uint32_t ea=c->r[1]+0x00000048u; c->f[2]=c->ps1[2]=RF32(ea);} // 800BF338
  c->r[5]=c->r[26]|c->r[26]; // 800BF33C
  c->r[6]=c->r[24]|c->r[24]; // 800BF340
  c->r[7]=c->r[25]|c->r[25]; // 800BF344
  c->lr=0x800BF34Cu; f_800E9DAC(c); // 800BF348
  c->r[3]=0u+0x80690000u; // 800BF34C
  c->r[4]=c->r[1]+0x00000050u; // 800BF350
  c->r[3]=c->r[3]+0xFFFFE4C0u; // 800BF354
  c->r[5]=0u+0x00000000u; // 800BF358
  c->r[3]=c->r[3]+0x0000006Bu; // 800BF35C
  c->r[6]=0u+0x00000000u; // 800BF360
  c->lr=0x800BF368u; f_800BDD8C(c); // 800BF364
  c->r[3]=c->r[21]|c->r[21]; // 800BF368
  c->r[4]=c->r[23]|c->r[23]; // 800BF36C
  c->lr=0x800BF374u; f_800BF49C(c); // 800BF370
  c->r[3]=c->r[26]|c->r[26]; // 800BF374
  c->lr=0x800BF37Cu; f_800BFDF0(c); // 800BF378
  c->r[0]=R32(c->r[3]+0x00000008u); // 800BF37C
  c->r[0]=rotl(c->r[0],0)&0x00000008u; cr0(c,c->r[0]); // 800BF380
  if (!crb(c,2)) { goto L_800BF3A0; } // 800BF384
  W8(c->r[1]+0x00000008u,c->r[27]); // 800BF388
  c->r[3]=c->r[1]+0x00000008u; // 800BF38C
  c->lr=0x800BF394u; f_80046FEC(c); // 800BF390
  {uint32_t ea=c->r[2]+0xFFFFA100u; c->f[1]=c->ps1[1]=RF32(ea);} // 800BF394
  c->r[4]=0u+0x00000003u; // 800BF398
  c->lr=0x800BF3A0u; f_801A1280(c); // 800BF39C
L_800BF3A0:;
  c->r[11]=c->r[1]+0x000000A0u; // 800BF3A0
  c->lr=0x800BF3A8u; { c->r[21]=R32(c->r[11]+0xFFFFFFD4u); c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800BF3A4
  c->r[0]=R32(c->r[1]+0x000000A4u); // 800BF3A8
  c->lr=c->r[0]; // 800BF3AC
  c->r[1]=c->r[1]+0x000000A0u; // 800BF3B0
  return; // 800BF3B4
}

// fn_800BF3B8
void f_800BF3B8(Ctx* __restrict c) {
  trace_call(0x800BF3B8u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BF3B8
  c->r[0]=c->lr; // 800BF3BC
  W32(c->r[1]+0x00000034u,c->r[0]); // 800BF3C0
  {uint32_t ea=c->r[1]+0x00000018u; for(int i=26;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800BF3C4
  c->r[26]=c->r[3]|c->r[3]; // 800BF3C8
  c->r[27]=c->r[4]|c->r[4]; // 800BF3CC
  c->r[30]=0u+0x00000000u; // 800BF3D0
  c->r[29]=0u+0x00000000u; // 800BF3D4
  c->r[31]=0u+0x00000000u; // 800BF3D8
L_800BF3DC:;
  W8(c->r[1]+0x00000008u,c->r[31]); // 800BF3DC
  c->r[3]=c->r[1]+0x00000008u; // 800BF3E0
  c->lr=0x800BF3E8u; f_80046EFC(c); // 800BF3E4
  c->r[4]=c->r[29]|c->r[29]; // 800BF3E8
  c->lr=0x800BF3F0u; f_80046DC8(c); // 800BF3EC
  c->lr=0x800BF3F4u; f_800AC498(c); // 800BF3F0
  cmps(c,0,(int32_t)c->r[3],1); // 800BF3F4
  if (!crb(c,2)) { goto L_800BF434; } // 800BF3F8
  c->r[28]=0u+0x00000000u; // 800BF3FC
L_800BF400:;
  c->r[4]=c->r[29]|c->r[29]; // 800BF400
  c->r[5]=c->r[28]|c->r[28]; // 800BF404
  c->r[3]=c->r[26]+0x000000DCu; // 800BF408
  c->lr=0x800BF410u; f_800CE33C(c); // 800BF40C
  cmps(c,0,(int32_t)c->r[3],0); // 800BF410
  if (!crb(c,0)) { goto L_800BF420; } // 800BF414
  c->r[30]=c->r[29]|c->r[29]; // 800BF418
  goto L_800BF42C; // 800BF41C
L_800BF420:;
  c->r[28]=c->r[28]+0x00000001u; // 800BF420
  cmps(c,0,(int32_t)c->r[28],4); // 800BF424
  if (crb(c,0)) { IRQCHK(c); goto L_800BF400; } // 800BF428
L_800BF42C:;
  cmps(c,0,(int32_t)c->r[28],4); // 800BF42C
  if (crb(c,0)) { goto L_800BF440; } // 800BF430
L_800BF434:;
  c->r[29]=c->r[29]+0x00000001u; // 800BF434
  cmps(c,0,(int32_t)c->r[29],2); // 800BF438
  if (crb(c,0)) { IRQCHK(c); goto L_800BF3DC; } // 800BF43C
L_800BF440:;
  c->r[0]=0u+0x00000100u; // 800BF440
  c->r[3]=0u+0x00000000u; // 800BF444
  c->r[5]=0u+0x00000000u; // 800BF448
  c->r[4]=0u+0x00000000u; // 800BF44C
  c->ctr=c->r[0]; // 800BF450
L_800BF454:;
  c->r[0]=R32(c->r[26]+0x000000ACu); // 800BF454
  c->r[6]=c->r[0]+c->r[4]; // 800BF458
  c->r[0]=R32(c->r[6]+0x0000003Cu); // 800BF45C
  cmps(c,0,(int32_t)c->r[27],(int32_t)c->r[0]); // 800BF460
  if (!crb(c,2)) { goto L_800BF47C; } // 800BF464
  c->r[3]=c->r[26]|c->r[26]; // 800BF468
  c->r[4]=c->r[30]|c->r[30]; // 800BF46C
  c->lr=0x800BF474u; f_800BED08(c); // 800BF470
  c->r[3]=0u+0x00000001u; // 800BF474
  goto L_800BF488; // 800BF478
L_800BF47C:;
  c->r[5]=c->r[5]+0x00000001u; // 800BF47C
  c->r[4]=c->r[4]+0x00000064u; // 800BF480
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800BF454; } // 800BF484
L_800BF488:;
  {uint32_t ea=c->r[1]+0x00000018u; for(int i=26;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800BF488
  c->r[0]=R32(c->r[1]+0x00000034u); // 800BF48C
  c->lr=c->r[0]; // 800BF490
  c->r[1]=c->r[1]+0x00000030u; // 800BF494
  return; // 800BF498
}

// fn_800BF49C
void f_800BF49C(Ctx* __restrict c) {
  trace_call(0x800BF49Cu);
  cmpu(c,0,c->r[4],0x000000FFu); // 800BF49C
  if (!crb(c,1)) { goto L_800BF4A8; } // 800BF4A0
  c->r[4]=0u+0x00000000u; // 800BF4A4
L_800BF4A8:;
  c->r[0]=(uint32_t)((int32_t)c->r[4]*(int32_t)100); // 800BF4A8
  c->r[5]=R32(c->r[3]+0x000000ACu); // 800BF4AC
  {uint32_t ea=c->r[2]+0xFFFFA0F8u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BF4B0
  c->r[6]=0u+0xFFFFFFFFu; // 800BF4B4
  c->r[8]=0u+0x00000000u; // 800BF4B8
  c->r[9]=c->r[5]+c->r[0]; // 800BF4BC
  {uint32_t ea=c->r[9]+0x0000001Cu; WF32(ea,c->f[0]);} // 800BF4C0
  c->r[0]=0u+0x00000002u; // 800BF4C4
  c->r[5]=c->r[8]|c->r[8]; // 800BF4C8
  c->r[10]=0u+0x00000000u; // 800BF4CC
  {uint32_t ea=c->r[9]+0x00000020u; WF32(ea,c->f[0]);} // 800BF4D0
  {uint32_t ea=c->r[9]+0x00000024u; WF32(ea,c->f[0]);} // 800BF4D4
  {uint32_t ea=c->r[9]+0x00000028u; WF32(ea,c->f[0]);} // 800BF4D8
  {uint32_t ea=c->r[9]+0x0000002Cu; WF32(ea,c->f[0]);} // 800BF4DC
  {uint32_t ea=c->r[9]+0x00000030u; WF32(ea,c->f[0]);} // 800BF4E0
  {uint32_t ea=c->r[9]+0x00000034u; WF32(ea,c->f[0]);} // 800BF4E4
  W32(c->r[9]+0x00000038u,c->r[6]); // 800BF4E8
  W32(c->r[9]+0x0000003Cu,c->r[6]); // 800BF4EC
  W32(c->r[9]+0x00000040u,c->r[6]); // 800BF4F0
  W32(c->r[9]+0x00000044u,c->r[6]); // 800BF4F4
  {uint32_t ea=c->r[9]+0x00000048u; WF32(ea,c->f[0]);} // 800BF4F8
  {uint32_t ea=c->r[9]+0x0000004Cu; WF32(ea,c->f[0]);} // 800BF4FC
  {uint32_t ea=c->r[9]+0x00000050u; WF32(ea,c->f[0]);} // 800BF500
  W32(c->r[9]+0x00000054u,c->r[8]); // 800BF504
  c->ctr=c->r[0]; // 800BF508
L_800BF50C:;
  c->r[7]=c->r[9]+c->r[5]; // 800BF50C
  c->r[6]=c->r[9]+c->r[10]; // 800BF510
  {uint32_t ea=c->r[7]+0x00000058u; WF32(ea,c->f[0]);} // 800BF514
  c->r[10]=c->r[10]+0x00000001u; // 800BF518
  c->r[5]=c->r[5]+0x00000004u; // 800BF51C
  W8(c->r[6]+0x00000060u,c->r[8]); // 800BF520
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800BF50C; } // 800BF524
  c->r[3]=c->r[3]+0x000000B8u; // 800BF528
  f_800AE518(c); return; // 800BF52C
}

// fn_800BF530
void f_800BF530(Ctx* __restrict c) {
  trace_call(0x800BF530u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BF530
  c->r[0]=c->lr; // 800BF534
  W32(c->r[1]+0x00000044u,c->r[0]); // 800BF538
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[31]);} // 800BF53C
  {uint32_t ea=c->r[1]+0x00000038u; psq_store(c,31,ea,0,0);} // 800BF540
  c->f[31]=c->f[3]; // 800BF544
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[30]);} // 800BF548
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,30,ea,0,0);} // 800BF54C
  c->f[30]=c->f[2]; // 800BF550
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[29]);} // 800BF554
  {uint32_t ea=c->r[1]+0x00000018u; psq_store(c,29,ea,0,0);} // 800BF558
  c->f[29]=c->f[1]; // 800BF55C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800BF560
  c->r[31]=0u+0x00000000u; // 800BF564
  W32(c->r[1]+0x00000008u,c->r[30]); // 800BF568
  c->r[30]=c->r[3]|c->r[3]; // 800BF56C
L_800BF570:;
  c->r[4]=c->r[31]|c->r[31]; // 800BF570
  c->r[3]=c->r[30]+0x000000B8u; // 800BF574
  c->lr=0x800BF57Cu; f_800AEDAC(c); // 800BF578
  {uint32_t ea=c->r[3]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800BF57C
  fcmp(c,0,c->f[29],c->f[0]); // 800BF580
  if (!crb(c,2)) { goto L_800BF5AC; } // 800BF584
  {uint32_t ea=c->r[3]+0x0000001Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800BF588
  fcmp(c,0,c->f[30],c->f[0]); // 800BF58C
  if (!crb(c,2)) { goto L_800BF5AC; } // 800BF590
  {uint32_t ea=c->r[3]+0x0000002Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800BF594
  fcmp(c,0,c->f[31],c->f[0]); // 800BF598
  if (!crb(c,2)) { goto L_800BF5AC; } // 800BF59C
  c->r[3]=c->r[30]|c->r[30]; // 800BF5A0
  c->r[4]=c->r[31]|c->r[31]; // 800BF5A4
  c->lr=0x800BF5ACu; f_800BF49C(c); // 800BF5A8
L_800BF5AC:;
  c->r[31]=c->r[31]+0x00000001u; // 800BF5AC
  cmps(c,0,(int32_t)c->r[31],256); // 800BF5B0
  if (crb(c,0)) { IRQCHK(c); goto L_800BF570; } // 800BF5B4
  c->r[0]=R32(c->r[1]+0x00000044u); // 800BF5B8
  {uint32_t ea=c->r[1]+0x00000038u; psq_load(c,31,ea,0,0);} // 800BF5BC
  {uint32_t ea=c->r[1]+0x00000030u; c->f[31]=RF64(ea);} // 800BF5C0
  {uint32_t ea=c->r[1]+0x00000028u; psq_load(c,30,ea,0,0);} // 800BF5C4
  {uint32_t ea=c->r[1]+0x00000020u; c->f[30]=RF64(ea);} // 800BF5C8
  {uint32_t ea=c->r[1]+0x00000018u; psq_load(c,29,ea,0,0);} // 800BF5CC
  {uint32_t ea=c->r[1]+0x00000010u; c->f[29]=RF64(ea);} // 800BF5D0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800BF5D4
  c->r[30]=R32(c->r[1]+0x00000008u); // 800BF5D8
  c->lr=c->r[0]; // 800BF5DC
  c->r[1]=c->r[1]+0x00000040u; // 800BF5E0
  return; // 800BF5E4
}

// fn_800BF5E8
void f_800BF5E8(Ctx* __restrict c) {
  trace_call(0x800BF5E8u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BF5E8
  c->r[0]=c->lr; // 800BF5EC
  W32(c->r[1]+0x00000034u,c->r[0]); // 800BF5F0
  {uint32_t ea=c->r[1]+0x0000001Cu; for(int i=27;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800BF5F4
  c->r[29]=0u+0x00000000u; // 800BF5F8
  c->r[27]=c->r[3]|c->r[3]; // 800BF5FC
  c->r[28]=c->r[4]|c->r[4]; // 800BF600
  c->r[31]=0u+0x00000000u; // 800BF604
  c->r[30]=c->r[29]|c->r[29]; // 800BF608
L_800BF60C:;
  c->r[0]=R32(c->r[27]+0x000000ACu); // 800BF60C
  c->r[4]=c->r[0]+c->r[31]; // 800BF610
  c->r[3]=R32(c->r[4]+0x0000003Cu); // 800BF614
  cmps(c,0,(int32_t)c->r[3],0); // 800BF618
  if (crb(c,0)) { goto L_800BF67C; } // 800BF61C
  c->r[0]=R32(c->r[4]+0x00000038u); // 800BF620
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[28]); // 800BF624
  if (crb(c,2)) { goto L_800BF634; } // 800BF628
  cmps(c,0,(int32_t)c->r[28],0); // 800BF62C
  if (!crb(c,0)) { goto L_800BF67C; } // 800BF630
L_800BF634:;
  c->lr=0x800BF638u; f_800BFDF0(c); // 800BF634
  c->r[0]=R32(c->r[3]+0x00000008u); // 800BF638
  c->r[0]=rotl(c->r[0],0)&0x00000010u; cr0(c,c->r[0]); // 800BF63C
  if (crb(c,2)) { goto L_800BF670; } // 800BF640
  cmps(c,0,(int32_t)c->r[28],0); // 800BF644
  if (crb(c,0)) { goto L_800BF67C; } // 800BF648
  W8(c->r[1]+0x00000008u,c->r[30]); // 800BF64C
  c->r[3]=c->r[1]+0x00000008u; // 800BF650
  c->lr=0x800BF658u; f_80046D50(c); // 800BF654
  c->lr=0x800BF65Cu; f_8008CD00(c); // 800BF658
  c->r[4]=c->r[3]|c->r[3]; // 800BF65C
  c->r[3]=c->r[27]|c->r[27]; // 800BF660
  c->r[5]=c->r[29]|c->r[29]; // 800BF664
  c->lr=0x800BF66Cu; f_800BED08(c); // 800BF668
  goto L_800BF67C; // 800BF66C
L_800BF670:;
  c->r[3]=c->r[27]|c->r[27]; // 800BF670
  c->r[4]=c->r[29]|c->r[29]; // 800BF674
  c->lr=0x800BF67Cu; f_800BF49C(c); // 800BF678
L_800BF67C:;
  c->r[29]=c->r[29]+0x00000001u; // 800BF67C
  c->r[31]=c->r[31]+0x00000064u; // 800BF680
  cmps(c,0,(int32_t)c->r[29],256); // 800BF684
  if (crb(c,0)) { IRQCHK(c); goto L_800BF60C; } // 800BF688
  {uint32_t ea=c->r[1]+0x0000001Cu; for(int i=27;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800BF68C
  c->r[0]=R32(c->r[1]+0x00000034u); // 800BF690
  c->lr=c->r[0]; // 800BF694
  c->r[1]=c->r[1]+0x00000030u; // 800BF698
  return; // 800BF69C
}

// fn_800BF6A0
void f_800BF6A0(Ctx* __restrict c) {
  trace_call(0x800BF6A0u);
  {uint32_t ea=c->r[1]+0xFFFFFF20u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BF6A0
  c->r[0]=c->lr; // 800BF6A4
  W32(c->r[1]+0x000000E4u,c->r[0]); // 800BF6A8
  c->r[11]=c->r[1]+0x000000B0u; // 800BF6AC
  {uint32_t ea=c->r[1]+0x000000D0u; WF64(ea,c->f[31]);} // 800BF6B0
  {uint32_t ea=c->r[1]+0x000000D8u; psq_store(c,31,ea,0,0);} // 800BF6B4
  {uint32_t ea=c->r[1]+0x000000C0u; WF64(ea,c->f[30]);} // 800BF6B8
  {uint32_t ea=c->r[1]+0x000000C8u; psq_store(c,30,ea,0,0);} // 800BF6BC
  {uint32_t ea=c->r[1]+0x000000B0u; WF64(ea,c->f[29]);} // 800BF6C0
  {uint32_t ea=c->r[1]+0x000000B8u; psq_store(c,29,ea,0,0);} // 800BF6C4
  c->lr=0x800BF6CCu; { W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800BF6C8
  c->f[29]=c->f[1]; // 800BF6CC
  cmpu(c,0,c->r[4],0x00000001u); // 800BF6D0
  c->r[24]=c->r[3]|c->r[3]; // 800BF6D4
  c->r[27]=c->r[4]|c->r[4]; // 800BF6D8
  c->r[26]=c->r[6]|c->r[6]; // 800BF6DC
  c->r[25]=c->r[7]|c->r[7]; // 800BF6E0
  if (!crb(c,1)) { goto L_800BF6EC; } // 800BF6E4
  c->r[27]=0u+0x00000000u; // 800BF6E8
L_800BF6EC:;
  c->r[4]=c->r[5]|c->r[5]; // 800BF6EC
  c->r[3]=c->r[1]+0x00000070u; // 800BF6F0
  c->lr=0x800BF6F8u; f_800AF330(c); // 800BF6F4
  c->r[4]=c->r[26]|c->r[26]; // 800BF6F8
  c->r[3]=c->r[1]+0x0000007Cu; // 800BF6FC
  c->lr=0x800BF704u; f_800AF330(c); // 800BF700
  {uint32_t ea=c->r[2]+0xFFFFA0F8u; c->f[31]=c->ps1[31]=RF32(ea);} // 800BF704
  c->r[30]=rotl(c->r[27],2)&0xFFFFFFFCu; // 800BF708
  {uint32_t ea=c->r[1]+0x00000088u; WF32(ea,c->f[29]);} // 800BF70C
  c->r[27]=0u+0xFFFFFFFFu; // 800BF710
  {uint32_t ea=c->r[2]+0xFFFFA0FCu; c->f[30]=c->ps1[30]=RF32(ea);} // 800BF714
  c->r[26]=0u+0x00000000u; // 800BF718
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[31]);} // 800BF71C
  c->r[31]=0u+0x00000000u; // 800BF720
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[31]);} // 800BF724
L_800BF728:;
  c->r[0]=R32(c->r[24]+0x000000ACu); // 800BF728
  c->r[28]=c->r[0]+c->r[31]; // 800BF72C
  c->r[0]=R32(c->r[28]+0x0000003Cu); // 800BF730
  cmps(c,0,(int32_t)c->r[0],0); // 800BF734
  if (crb(c,0)) { goto L_800BF874; } // 800BF738
  c->r[4]=c->r[26]|c->r[26]; // 800BF73C
  c->r[3]=c->r[24]+0x000000B8u; // 800BF740
  c->lr=0x800BF748u; f_800AEC50(c); // 800BF744
  cmps(c,0,(int32_t)c->r[3],0); // 800BF748
  if (crb(c,2)) { goto L_800BF874; } // 800BF74C
  c->r[3]=R32(c->r[28]+0x0000003Cu); // 800BF750
  c->lr=0x800BF758u; f_800BFDF0(c); // 800BF754
  c->r[0]=R32(c->r[3]+0x00000008u); // 800BF758
  c->r[0]=rotl(c->r[0],0)&0x00000010u; cr0(c,c->r[0]); // 800BF75C
  if (!crb(c,2)) { goto L_800BF874; } // 800BF760
  c->r[3]=R32(c->r[28]+0x0000003Cu); // 800BF764
  c->lr=0x800BF76Cu; f_800BFDD0(c); // 800BF768
  {uint32_t ea=c->r[3]+0x00000000u; c->f[3]=c->ps1[3]=RF32(ea);} // 800BF76C
  c->r[29]=c->r[30]+c->r[28]; // 800BF770
  {uint32_t ea=c->r[28]+0x00000018u; c->f[2]=c->ps1[2]=RF32(ea);} // 800BF774
  c->r[4]=c->r[28]|c->r[28]; // 800BF778
  {uint32_t ea=c->r[1]+0x00000088u; c->f[1]=c->ps1[1]=RF32(ea);} // 800BF77C
  c->r[3]=c->r[1]+0x00000070u; // 800BF780
  {uint32_t ea=c->r[29]+0x00000058u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BF784
  c->r[5]=c->r[1]+0x0000000Cu; // 800BF788
  c->f[29]=c->ps1[29]=S(std::fma(c->f[2],c->f[3],c->f[1])); // 800BF78C
  c->r[6]=c->r[1]+0x00000008u; // 800BF790
  c->f[29]=c->ps1[29]=S(c->f[29]+c->f[0]); // 800BF794
  c->f[29]=c->ps1[29]=S(c->f[29]*c->f[29]); // 800BF798
  c->lr=0x800BF7A0u; f_804E29F8(c); // 800BF79C
  fcmp(c,0,c->f[1],c->f[29]); // 800BF7A0
  setcrb(c,2,crb(c,0)|crb(c,2)); // 800BF7A4
  if (!crb(c,2)) { goto L_800BF870; } // 800BF7A8
  c->r[5]=c->r[28]|c->r[28]; // 800BF7AC
  c->r[3]=c->r[1]+0x00000034u; // 800BF7B0
  c->r[4]=c->r[28]+0x0000000Cu; // 800BF7B4
  c->lr=0x800BF7BCu; f_800772A0(c); // 800BF7B8
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 800BF7BC
  c->r[3]=c->r[1]+0x00000040u; // 800BF7C0
  c->r[4]=c->r[1]+0x00000034u; // 800BF7C4
  c->lr=0x800BF7CCu; f_800BDD70(c); // 800BF7C8
  c->r[5]=c->r[28]|c->r[28]; // 800BF7CC
  c->r[4]=c->r[1]+0x00000040u; // 800BF7D0
  c->r[3]=c->r[1]+0x0000004Cu; // 800BF7D4
  c->lr=0x800BF7DCu; f_8005ED10(c); // 800BF7D8
  c->r[3]=c->r[1]+0x00000058u; // 800BF7DC
  c->r[4]=c->r[1]+0x0000004Cu; // 800BF7E0
  c->r[5]=c->r[1]+0x00000070u; // 800BF7E4
  c->lr=0x800BF7ECu; f_800772A0(c); // 800BF7E8
  c->r[3]=c->r[1]+0x00000064u; // 800BF7EC
  c->r[4]=c->r[1]+0x00000058u; // 800BF7F0
  c->lr=0x800BF7F8u; f_800B6DE8(c); // 800BF7F4
  c->r[3]=c->r[1]+0x00000064u; // 800BF7F8
  c->lr=0x800BF800u; f_80061BF0(c); // 800BF7FC
  cmps(c,0,(int32_t)c->r[3],0); // 800BF800
  if (!crb(c,2)) { goto L_800BF814; } // 800BF804
  c->r[3]=c->r[1]+0x00000064u; // 800BF808
  c->lr=0x800BF810u; f_80084FAC(c); // 800BF80C
  goto L_800BF818; // 800BF810
L_800BF814:;
  {uint32_t ea=c->r[2]+0xFFFFA0F8u; c->f[1]=c->ps1[1]=RF32(ea);} // 800BF814
L_800BF818:;
  fcmp(c,0,c->f[1],c->f[30]); // 800BF818
  if (!crb(c,0)) { goto L_800BF874; } // 800BF81C
  c->f[30]=c->f[1]; // 800BF820
  cmps(c,0,(int32_t)c->r[25],0); // 800BF824
  c->r[27]=c->r[26]|c->r[26]; // 800BF828
  if (crb(c,2)) { goto L_800BF874; } // 800BF82C
  c->r[3]=c->r[1]+0x00000010u; // 800BF830
  c->r[4]=c->r[1]+0x0000007Cu; // 800BF834
  c->r[5]=c->r[1]+0x00000070u; // 800BF838
  c->lr=0x800BF840u; f_800772A0(c); // 800BF83C
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800BF840
  c->r[3]=c->r[1]+0x0000001Cu; // 800BF844
  c->r[4]=c->r[1]+0x00000010u; // 800BF848
  c->lr=0x800BF850u; f_800BDD70(c); // 800BF84C
  c->r[4]=c->r[1]+0x0000001Cu; // 800BF850
  c->r[3]=c->r[1]+0x00000028u; // 800BF854
  c->r[5]=c->r[1]+0x00000070u; // 800BF858
  c->lr=0x800BF860u; f_8005ED10(c); // 800BF85C
  c->r[3]=c->r[25]|c->r[25]; // 800BF860
  c->r[4]=c->r[1]+0x00000028u; // 800BF864
  c->lr=0x800BF86Cu; f_800B6DE8(c); // 800BF868
  goto L_800BF874; // 800BF86C
L_800BF870:;
  {uint32_t ea=c->r[29]+0x00000058u; WF32(ea,c->f[31]);} // 800BF870
L_800BF874:;
  c->r[26]=c->r[26]+0x00000001u; // 800BF874
  c->r[31]=c->r[31]+0x00000064u; // 800BF878
  cmps(c,0,(int32_t)c->r[26],256); // 800BF87C
  if (crb(c,0)) { IRQCHK(c); goto L_800BF728; } // 800BF880
  {uint32_t ea=c->r[1]+0x000000D8u; psq_load(c,31,ea,0,0);} // 800BF884
  c->r[3]=c->r[27]|c->r[27]; // 800BF888
  {uint32_t ea=c->r[1]+0x000000D0u; c->f[31]=RF64(ea);} // 800BF88C
  {uint32_t ea=c->r[1]+0x000000C8u; psq_load(c,30,ea,0,0);} // 800BF890
  {uint32_t ea=c->r[1]+0x000000C0u; c->f[30]=RF64(ea);} // 800BF894
  {uint32_t ea=c->r[1]+0x000000B8u; psq_load(c,29,ea,0,0);} // 800BF898
  {uint32_t ea=c->r[1]+0x000000B0u; c->f[29]=RF64(ea);} // 800BF89C
  c->r[11]=c->r[1]+0x000000B0u; // 800BF8A0
  c->lr=0x800BF8A8u; { c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800BF8A4
  c->r[0]=R32(c->r[1]+0x000000E4u); // 800BF8A8
  c->lr=c->r[0]; // 800BF8AC
  c->r[1]=c->r[1]+0x000000E0u; // 800BF8B0
  return; // 800BF8B4
}

// fn_800BF8B8
void f_800BF8B8(Ctx* __restrict c) {
  trace_call(0x800BF8B8u);
  {uint32_t ea=c->r[1]+0xFFFFFF60u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BF8B8
  c->r[0]=c->lr; // 800BF8BC
  W32(c->r[1]+0x000000A4u,c->r[0]); // 800BF8C0
  c->r[11]=c->r[1]+0x00000080u; // 800BF8C4
  {uint32_t ea=c->r[1]+0x00000090u; WF64(ea,c->f[31]);} // 800BF8C8
  {uint32_t ea=c->r[1]+0x00000098u; psq_store(c,31,ea,0,0);} // 800BF8CC
  {uint32_t ea=c->r[1]+0x00000080u; WF64(ea,c->f[30]);} // 800BF8D0
  {uint32_t ea=c->r[1]+0x00000088u; psq_store(c,30,ea,0,0);} // 800BF8D4
  c->lr=0x800BF8DCu; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800BF8D8
  c->f[30]=c->f[1]; // 800BF8DC
  c->r[26]=c->r[3]|c->r[3]; // 800BF8E0
  c->r[4]=c->r[5]|c->r[5]; // 800BF8E4
  c->r[28]=c->r[6]|c->r[6]; // 800BF8E8
  c->r[27]=c->r[7]|c->r[7]; // 800BF8EC
  c->r[3]=c->r[1]+0x0000004Cu; // 800BF8F0
  c->lr=0x800BF8F8u; f_800AF330(c); // 800BF8F4
  c->r[4]=c->r[28]|c->r[28]; // 800BF8F8
  c->r[3]=c->r[1]+0x00000058u; // 800BF8FC
  c->lr=0x800BF904u; f_800AF330(c); // 800BF900
  {uint32_t ea=c->r[2]+0xFFFFA0F8u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BF904
  c->r[29]=0u+0xFFFFFFFFu; // 800BF908
  {uint32_t ea=c->r[1]+0x00000064u; WF32(ea,c->f[30]);} // 800BF90C
  c->r[28]=0u+0x00000000u; // 800BF910
  {uint32_t ea=c->r[2]+0xFFFFA0FCu; c->f[31]=c->ps1[31]=RF32(ea);} // 800BF914
  c->r[31]=0u+0x00000000u; // 800BF918
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[0]);} // 800BF91C
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[0]);} // 800BF920
L_800BF924:;
  c->r[0]=R32(c->r[26]+0x000000ACu); // 800BF924
  c->r[30]=c->r[0]+c->r[31]; // 800BF928
  c->r[0]=R32(c->r[30]+0x0000003Cu); // 800BF92C
  cmps(c,0,(int32_t)c->r[0],0); // 800BF930
  if (crb(c,0)) { goto L_800BFA30; } // 800BF934
  c->r[4]=c->r[28]|c->r[28]; // 800BF938
  c->r[3]=c->r[26]+0x000000B8u; // 800BF93C
  c->lr=0x800BF944u; f_800AEC50(c); // 800BF940
  cmps(c,0,(int32_t)c->r[3],0); // 800BF944
  if (crb(c,2)) { goto L_800BFA30; } // 800BF948
  c->r[3]=R32(c->r[30]+0x0000003Cu); // 800BF94C
  c->lr=0x800BF954u; f_800BFDF0(c); // 800BF950
  c->r[0]=R32(c->r[3]+0x00000008u); // 800BF954
  c->r[0]=rotl(c->r[0],0)&0x00000010u; cr0(c,c->r[0]); // 800BF958
  if (crb(c,2)) { goto L_800BFA30; } // 800BF95C
  c->r[3]=R32(c->r[30]+0x0000003Cu); // 800BF960
  c->lr=0x800BF968u; f_800BFDD0(c); // 800BF964
  {uint32_t ea=c->r[3]+0x00000000u; c->f[2]=c->ps1[2]=RF32(ea);} // 800BF968
  c->r[4]=c->r[30]|c->r[30]; // 800BF96C
  {uint32_t ea=c->r[30]+0x00000018u; c->f[1]=c->ps1[1]=RF32(ea);} // 800BF970
  c->r[3]=c->r[1]+0x0000004Cu; // 800BF974
  {uint32_t ea=c->r[1]+0x00000064u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BF978
  c->r[5]=c->r[1]+0x0000000Cu; // 800BF97C
  c->r[6]=c->r[1]+0x00000008u; // 800BF980
  c->f[30]=c->ps1[30]=S(std::fma(c->f[1],c->f[2],c->f[0])); // 800BF984
  c->f[30]=c->ps1[30]=S(c->f[30]*c->f[30]); // 800BF988
  c->lr=0x800BF990u; f_804E29F8(c); // 800BF98C
  fcmp(c,0,c->f[1],c->f[30]); // 800BF990
  setcrb(c,2,crb(c,0)|crb(c,2)); // 800BF994
  if (!crb(c,2)) { goto L_800BFA30; } // 800BF998
  cmps(c,0,(int32_t)c->r[27],0); // 800BF99C
  if (crb(c,2)) { goto L_800BF9B4; } // 800BF9A0
  c->r[3]=c->r[26]|c->r[26]; // 800BF9A4
  c->r[4]=c->r[28]|c->r[28]; // 800BF9A8
  c->lr=0x800BF9B0u; f_800C1014(c); // 800BF9AC
  goto L_800BFA30; // 800BF9B0
L_800BF9B4:;
  c->r[5]=c->r[30]|c->r[30]; // 800BF9B4
  c->r[3]=c->r[1]+0x00000010u; // 800BF9B8
  c->r[4]=c->r[30]+0x0000000Cu; // 800BF9BC
  c->lr=0x800BF9C4u; f_800772A0(c); // 800BF9C0
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 800BF9C4
  c->r[3]=c->r[1]+0x0000001Cu; // 800BF9C8
  c->r[4]=c->r[1]+0x00000010u; // 800BF9CC
  c->lr=0x800BF9D4u; f_800BDD70(c); // 800BF9D0
  c->r[5]=c->r[30]|c->r[30]; // 800BF9D4
  c->r[4]=c->r[1]+0x0000001Cu; // 800BF9D8
  c->r[3]=c->r[1]+0x00000028u; // 800BF9DC
  c->lr=0x800BF9E4u; f_8005ED10(c); // 800BF9E0
  c->r[3]=c->r[1]+0x00000034u; // 800BF9E4
  c->r[4]=c->r[1]+0x00000028u; // 800BF9E8
  c->r[5]=c->r[1]+0x0000004Cu; // 800BF9EC
  c->lr=0x800BF9F4u; f_800772A0(c); // 800BF9F0
  c->r[3]=c->r[1]+0x00000040u; // 800BF9F4
  c->r[4]=c->r[1]+0x00000034u; // 800BF9F8
  c->lr=0x800BFA00u; f_800B6DE8(c); // 800BF9FC
  c->r[3]=c->r[1]+0x00000040u; // 800BFA00
  c->lr=0x800BFA08u; f_80061BF0(c); // 800BFA04
  cmps(c,0,(int32_t)c->r[3],0); // 800BFA08
  if (!crb(c,2)) { goto L_800BFA1C; } // 800BFA0C
  c->r[3]=c->r[1]+0x00000040u; // 800BFA10
  c->lr=0x800BFA18u; f_80084FAC(c); // 800BFA14
  goto L_800BFA20; // 800BFA18
L_800BFA1C:;
  {uint32_t ea=c->r[2]+0xFFFFA0F8u; c->f[1]=c->ps1[1]=RF32(ea);} // 800BFA1C
L_800BFA20:;
  fcmp(c,0,c->f[1],c->f[31]); // 800BFA20
  if (!crb(c,0)) { goto L_800BFA30; } // 800BFA24
  c->f[31]=c->f[1]; // 800BFA28
  c->r[29]=c->r[28]|c->r[28]; // 800BFA2C
L_800BFA30:;
  c->r[28]=c->r[28]+0x00000001u; // 800BFA30
  c->r[31]=c->r[31]+0x00000064u; // 800BFA34
  cmps(c,0,(int32_t)c->r[28],256); // 800BFA38
  if (crb(c,0)) { IRQCHK(c); goto L_800BF924; } // 800BFA3C
  cmps(c,0,(int32_t)c->r[27],0); // 800BFA40
  if (!crb(c,2)) { goto L_800BFA5C; } // 800BFA44
  cmps(c,0,(int32_t)c->r[29],0); // 800BFA48
  if (crb(c,0)) { goto L_800BFA5C; } // 800BFA4C
  c->r[3]=c->r[26]|c->r[26]; // 800BFA50
  c->r[4]=c->r[29]|c->r[29]; // 800BFA54
  c->lr=0x800BFA5Cu; f_800C1014(c); // 800BFA58
L_800BFA5C:;
  c->r[11]=c->r[1]+0x00000080u; // 800BFA5C
  {uint32_t ea=c->r[1]+0x00000098u; psq_load(c,31,ea,0,0);} // 800BFA60
  {uint32_t ea=c->r[1]+0x00000090u; c->f[31]=RF64(ea);} // 800BFA64
  {uint32_t ea=c->r[1]+0x00000088u; psq_load(c,30,ea,0,0);} // 800BFA68
  {uint32_t ea=c->r[1]+0x00000080u; c->f[30]=RF64(ea);} // 800BFA6C
  c->lr=0x800BFA74u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800BFA70
  c->r[0]=R32(c->r[1]+0x000000A4u); // 800BFA74
  c->lr=c->r[0]; // 800BFA78
  c->r[1]=c->r[1]+0x000000A0u; // 800BFA7C
  return; // 800BFA80
}

// fn_800BFA84
void f_800BFA84(Ctx* __restrict c) {
  trace_call(0x800BFA84u);
  cmpu(c,0,c->r[4],0x00000001u); // 800BFA84
  if (!crb(c,1)) { goto L_800BFA90; } // 800BFA88
  c->r[4]=0u+0x00000000u; // 800BFA8C
L_800BFA90:;
  cmps(c,0,(int32_t)c->r[5],0); // 800BFA90
  if (!crb(c,0)) { goto L_800BFAC4; } // 800BFA94
  c->r[0]=0u+0x00000100u; // 800BFA98
  c->r[7]=0u+0x00000000u; // 800BFA9C
  c->r[5]=0u+0x00000000u; // 800BFAA0
  c->ctr=c->r[0]; // 800BFAA4
L_800BFAA8:;
  c->r[0]=R32(c->r[3]+0x000000ACu); // 800BFAA8
  c->r[0]=c->r[4]+c->r[0]; // 800BFAAC
  c->r[6]=c->r[5]+c->r[0]; // 800BFAB0
  c->r[5]=c->r[5]+0x00000064u; // 800BFAB4
  W8(c->r[6]+0x00000060u,c->r[7]); // 800BFAB8
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800BFAA8; } // 800BFABC
  return; // 800BFAC0
L_800BFAC4:;
  c->r[0]=0u+0x00000100u; // 800BFAC4
  c->r[10]=0u+0x00000000u; // 800BFAC8
  c->r[6]=0u+0x00000000u; // 800BFACC
  c->r[8]=0u+0x00000000u; // 800BFAD0
  c->r[9]=0u+0x00000001u; // 800BFAD4
  c->ctr=c->r[0]; // 800BFAD8
L_800BFADC:;
  cmps(c,0,(int32_t)c->r[5],(int32_t)c->r[10]); // 800BFADC
  if (!crb(c,2)) { goto L_800BFAF8; } // 800BFAE0
  c->r[0]=R32(c->r[3]+0x000000ACu); // 800BFAE4
  c->r[0]=c->r[4]+c->r[0]; // 800BFAE8
  c->r[7]=c->r[6]+c->r[0]; // 800BFAEC
  W8(c->r[7]+0x00000060u,c->r[9]); // 800BFAF0
  goto L_800BFB08; // 800BFAF4
L_800BFAF8:;
  c->r[0]=R32(c->r[3]+0x000000ACu); // 800BFAF8
  c->r[0]=c->r[4]+c->r[0]; // 800BFAFC
  c->r[7]=c->r[6]+c->r[0]; // 800BFB00
  W8(c->r[7]+0x00000060u,c->r[8]); // 800BFB04
L_800BFB08:;
  c->r[10]=c->r[10]+0x00000001u; // 800BFB08
  c->r[6]=c->r[6]+0x00000064u; // 800BFB0C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800BFADC; } // 800BFB10
  return; // 800BFB14
}

// fn_800BFB18
void f_800BFB18(Ctx* __restrict c) {
  trace_call(0x800BFB18u);
  cmpu(c,0,c->r[4],0x00000001u); // 800BFB18
  if (!crb(c,1)) { goto L_800BFB24; } // 800BFB1C
  c->r[4]=0u+0x00000000u; // 800BFB20
L_800BFB24:;
  cmpu(c,0,c->r[5],0x000000FFu); // 800BFB24
  if (!crb(c,1)) { goto L_800BFB30; } // 800BFB28
  c->r[5]=0u+0x00000000u; // 800BFB2C
L_800BFB30:;
  c->r[5]=(uint32_t)((int32_t)c->r[5]*(int32_t)100); // 800BFB30
  c->r[3]=R32(c->r[3]+0x000000ACu); // 800BFB34
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFFCu; // 800BFB38
  {uint32_t ea=c->r[2]+0xFFFFA0F8u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BFB3C
  c->r[3]=c->r[3]+c->r[5]; // 800BFB40
  c->r[3]=c->r[3]+c->r[0]; // 800BFB44
  {uint32_t ea=c->r[3]+0x00000058u; c->f[1]=c->ps1[1]=RF32(ea);} // 800BFB48
  fcmp(c,0,c->f[1],c->f[0]); // 800BFB4C
  setcrb(c,2,crb(c,0)|crb(c,2)); // 800BFB50
  if (!crb(c,2)) return; // 800BFB54
  {uint32_t ea=c->r[2]+0xFFFFA110u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BFB58
  {uint32_t ea=c->r[3]+0x00000058u; WF32(ea,c->f[0]);} // 800BFB5C
  return; // 800BFB60
}

// fn_800BFB64
void f_800BFB64(Ctx* __restrict c) {
  trace_call(0x800BFB64u);
  c->r[0]=0u+0x00000100u; // 800BFB64
  c->r[7]=0u+0x00000000u; // 800BFB68
  c->r[5]=0u+0x00000000u; // 800BFB6C
  c->ctr=c->r[0]; // 800BFB70
L_800BFB74:;
  c->r[0]=R32(c->r[3]+0x000000ACu); // 800BFB74
  c->r[6]=c->r[0]+c->r[5]; // 800BFB78
  c->r[0]=R32(c->r[6]+0x0000003Cu); // 800BFB7C
  cmps(c,0,(int32_t)c->r[0],0); // 800BFB80
  if (crb(c,0)) { goto L_800BFBA4; } // 800BFB84
  c->r[0]=R32(c->r[6]+0x00000038u); // 800BFB88
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 800BFB8C
  if (crb(c,2)) { goto L_800BFB9C; } // 800BFB90
  cmps(c,0,(int32_t)c->r[4],0); // 800BFB94
  if (!crb(c,0)) { goto L_800BFBA4; } // 800BFB98
L_800BFB9C:;
  c->r[7]=0u+0x00000001u; // 800BFB9C
  goto L_800BFBAC; // 800BFBA0
L_800BFBA4:;
  c->r[5]=c->r[5]+0x00000064u; // 800BFBA4
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800BFB74; } // 800BFBA8
L_800BFBAC:;
  c->r[3]=c->r[7]|c->r[7]; // 800BFBAC
  return; // 800BFBB0
}

// fn_800BFBB4
void f_800BFBB4(Ctx* __restrict c) {
  trace_call(0x800BFBB4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BFBB4
  c->r[0]=c->lr; // 800BFBB8
  cmpu(c,0,c->r[4],0x00000011u); // 800BFBBC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800BFBC0
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800BFBC4
  c->r[30]=c->r[4]|c->r[4]; // 800BFBC8
  if (!crb(c,1)) { goto L_800BFBD4; } // 800BFBCC
  c->r[30]=0u+0x00000000u; // 800BFBD0
L_800BFBD4:;
  c->r[3]=c->r[30]|c->r[30]; // 800BFBD4
  c->lr=0x800BFBDCu; f_800BFDD0(c); // 800BFBD8
  c->r[31]=R32(c->r[3]+0x0000000Cu); // 800BFBDC
  c->r[3]=c->r[30]|c->r[30]; // 800BFBE0
  c->lr=0x800BFBE8u; f_800BFDF0(c); // 800BFBE4
  c->r[0]=R32(c->r[3]+0x00000008u); // 800BFBE8
  c->r[0]=rotl(c->r[0],0)&0x00000002u; cr0(c,c->r[0]); // 800BFBEC
  if (crb(c,2)) { goto L_800BFBF8; } // 800BFBF0
  c->r[31]=c->r[31]+0x00000001u; // 800BFBF4
L_800BFBF8:;
  c->r[3]=c->r[31]|c->r[31]; // 800BFBF8
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800BFBFC
  c->r[0]=R32(c->r[1]+0x00000014u); // 800BFC00
  c->lr=c->r[0]; // 800BFC04
  c->r[1]=c->r[1]+0x00000010u; // 800BFC08
  return; // 800BFC0C
}

// fn_800BFC10
void f_800BFC10(Ctx* __restrict c) {
  trace_call(0x800BFC10u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BFC10
  c->r[0]=c->lr; // 800BFC14
  cmpu(c,0,c->r[4],0x00000011u); // 800BFC18
  W32(c->r[1]+0x00000014u,c->r[0]); // 800BFC1C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800BFC20
  c->r[31]=c->r[4]|c->r[4]; // 800BFC24
  if (!crb(c,1)) { goto L_800BFC30; } // 800BFC28
  c->r[31]=0u+0x00000000u; // 800BFC2C
L_800BFC30:;
  c->r[3]=c->r[31]|c->r[31]; // 800BFC30
  c->lr=0x800BFC38u; f_800BFDF0(c); // 800BFC34
  c->r[0]=R32(c->r[3]+0x00000008u); // 800BFC38
  c->r[0]=rotl(c->r[0],0)&0x00000002u; cr0(c,c->r[0]); // 800BFC3C
  if (!crb(c,2)) { goto L_800BFC4C; } // 800BFC40
  c->r[3]=0u+0x00000000u; // 800BFC44
  goto L_800BFC58; // 800BFC48
L_800BFC4C:;
  c->r[3]=c->r[31]|c->r[31]; // 800BFC4C
  c->lr=0x800BFC54u; f_800BFDF0(c); // 800BFC50
  c->r[3]=R32(c->r[3]+0x0000000Cu); // 800BFC54
L_800BFC58:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800BFC58
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800BFC5C
  c->lr=c->r[0]; // 800BFC60
  c->r[1]=c->r[1]+0x00000010u; // 800BFC64
  return; // 800BFC68
}

// fn_800BFC6C
void f_800BFC6C(Ctx* __restrict c) {
  trace_call(0x800BFC6Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BFC6C
  c->r[0]=c->lr; // 800BFC70
  cmpu(c,0,c->r[4],0x00000011u); // 800BFC74
  W32(c->r[1]+0x00000014u,c->r[0]); // 800BFC78
  if (!crb(c,1)) { goto L_800BFC84; } // 800BFC7C
  c->r[4]=0u+0x00000000u; // 800BFC80
L_800BFC84:;
  c->r[3]=c->r[4]|c->r[4]; // 800BFC84
  c->lr=0x800BFC8Cu; f_800BFDF0(c); // 800BFC88
  c->r[0]=R32(c->r[3]+0x00000008u); // 800BFC8C
  c->r[0]=rotl(c->r[0],0)&0x00000002u; cr0(c,c->r[0]); // 800BFC90
  if (crb(c,2)) { goto L_800BFCA0; } // 800BFC94
  c->r[3]=0u+0x00000001u; // 800BFC98
  goto L_800BFCA4; // 800BFC9C
L_800BFCA0:;
  c->r[3]=0u+0x00000000u; // 800BFCA0
L_800BFCA4:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800BFCA4
  c->lr=c->r[0]; // 800BFCA8
  c->r[1]=c->r[1]+0x00000010u; // 800BFCAC
  return; // 800BFCB0
}

// fn_800BFCB4
void f_800BFCB4(Ctx* __restrict c) {
  trace_call(0x800BFCB4u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BFCB4
  c->r[0]=c->lr; // 800BFCB8
  W32(c->r[1]+0x00000024u,c->r[0]); // 800BFCBC
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800BFCC0
  c->r[29]=c->r[4]|c->r[4]; // 800BFCC4
  c->r[30]=0u+0xFFFFFFFFu; // 800BFCC8
  c->r[31]=0u+0x00000000u; // 800BFCCC
L_800BFCD0:;
  c->r[3]=c->r[31]|c->r[31]; // 800BFCD0
  c->lr=0x800BFCD8u; f_800BFDF0(c); // 800BFCD4
  c->r[0]=R32(c->r[3]+0x0000000Cu); // 800BFCD8
  cmps(c,0,(int32_t)c->r[29],(int32_t)c->r[0]); // 800BFCDC
  if (!crb(c,2)) { goto L_800BFCEC; } // 800BFCE0
  c->r[30]=c->r[31]|c->r[31]; // 800BFCE4
  goto L_800BFCF8; // 800BFCE8
L_800BFCEC:;
  c->r[31]=c->r[31]+0x00000001u; // 800BFCEC
  cmps(c,0,(int32_t)c->r[31],18); // 800BFCF0
  if (crb(c,0)) { IRQCHK(c); goto L_800BFCD0; } // 800BFCF4
L_800BFCF8:;
  c->r[3]=c->r[30]|c->r[30]; // 800BFCF8
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800BFCFC
  c->r[0]=R32(c->r[1]+0x00000024u); // 800BFD00
  c->lr=c->r[0]; // 800BFD04
  c->r[1]=c->r[1]+0x00000020u; // 800BFD08
  return; // 800BFD0C
}

// fn_800BFD10
void f_800BFD10(Ctx* __restrict c) {
  trace_call(0x800BFD10u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BFD10
  c->r[0]=c->lr; // 800BFD14
  W32(c->r[1]+0x00000034u,c->r[0]); // 800BFD18
  c->r[11]=c->r[1]+0x00000020u; // 800BFD1C
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[31]);} // 800BFD20
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,31,ea,0,0);} // 800BFD24
  c->lr=0x800BFD2Cu; { W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800BFD28
  c->r[29]=c->r[3]|c->r[3]; // 800BFD2C
  c->r[30]=c->r[4]|c->r[4]; // 800BFD30
  c->r[3]=c->r[3]+0x000000DCu; // 800BFD34
  c->lr=0x800BFD3Cu; f_800CDF14(c); // 800BFD38
  c->r[31]=c->r[3]|c->r[3]; // 800BFD3C
  c->r[3]=c->r[30]|c->r[30]; // 800BFD40
  c->lr=0x800BFD48u; f_800BFDD0(c); // 800BFD44
  c->r[0]=R32(c->r[3]+0x0000000Cu); // 800BFD48
  cmps(c,0,(int32_t)c->r[31],(int32_t)c->r[0]); // 800BFD4C
  if (crb(c,0)) { goto L_800BFD5C; } // 800BFD50
  {uint32_t ea=c->r[2]+0xFFFFA100u; c->f[1]=c->ps1[1]=RF32(ea);} // 800BFD54
  goto L_800BFD98; // 800BFD58
L_800BFD5C:;
  c->r[4]=c->r[30]|c->r[30]; // 800BFD5C
  c->r[3]=c->r[29]+0x000000DCu; // 800BFD60
  c->r[5]=0u+0x00000000u; // 800BFD64
  c->lr=0x800BFD6Cu; f_800CDEB8(c); // 800BFD68
  c->f[31]=c->f[1]; // 800BFD6C
  c->r[3]=c->r[29]|c->r[29]; // 800BFD70
  c->r[4]=c->r[30]|c->r[30]; // 800BFD74
  c->lr=0x800BFD7Cu; f_800BFC10(c); // 800BFD78
  c->r[31]=c->r[3]|c->r[3]; // 800BFD7C
  c->r[3]=R32(c->r[13]+0xFFFFC218u); // 800BFD80
  c->lr=0x800BFD88u; f_800CEC6C(c); // 800BFD84
  c->r[4]=c->r[31]|c->r[31]; // 800BFD88
  c->r[5]=0u+0x00000005u; // 800BFD8C
  c->lr=0x800BFD94u; f_8021FA54(c); // 800BFD90
  c->f[1]=c->ps1[1]=S(c->f[31]/c->f[1]); // 800BFD94
L_800BFD98:;
  c->r[11]=c->r[1]+0x00000020u; // 800BFD98
  {uint32_t ea=c->r[1]+0x00000028u; psq_load(c,31,ea,0,0);} // 800BFD9C
  {uint32_t ea=c->r[1]+0x00000020u; c->f[31]=RF64(ea);} // 800BFDA0
  c->lr=0x800BFDA8u; { c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800BFDA4
  c->r[0]=R32(c->r[1]+0x00000034u); // 800BFDA8
  c->lr=c->r[0]; // 800BFDAC
  c->r[1]=c->r[1]+0x00000030u; // 800BFDB0
  return; // 800BFDB4
}

// fn_800BFDB8
void f_800BFDB8(Ctx* __restrict c) {
  trace_call(0x800BFDB8u);
  c->r[3]=c->r[3]+0x000000DCu; // 800BFDB8
  return; // 800BFDBC
}

// fn_800BFDC0
void f_800BFDC0(Ctx* __restrict c) {
  trace_call(0x800BFDC0u);
  c->r[3]=c->r[3]+0x00000274u; // 800BFDC0
  return; // 800BFDC4
}

// fn_800BFDC8
void f_800BFDC8(Ctx* __restrict c) {
  trace_call(0x800BFDC8u);
  c->r[3]=c->r[3]+0x000002A0u; // 800BFDC8
  return; // 800BFDCC
}

// fn_800BFDD0
void f_800BFDD0(Ctx* __restrict c) {
  trace_call(0x800BFDD0u);
  cmpu(c,0,c->r[3],0x00000011u); // 800BFDD0
  if (!crb(c,1)) { goto L_800BFDDC; } // 800BFDD4
  c->r[3]=0u+0x00000000u; // 800BFDD8
L_800BFDDC:;
  c->r[0]=(uint32_t)((int32_t)c->r[3]*(int32_t)20); // 800BFDDC
  c->r[3]=0u+0x80750000u; // 800BFDE0
  c->r[3]=c->r[3]+0x00002D28u; // 800BFDE4
  c->r[3]=c->r[3]+c->r[0]; // 800BFDE8
  return; // 800BFDEC
}

// fn_800BFDF0
void f_800BFDF0(Ctx* __restrict c) {
  trace_call(0x800BFDF0u);
  cmpu(c,0,c->r[3],0x00000011u); // 800BFDF0
  if (!crb(c,1)) { goto L_800BFDFC; } // 800BFDF4
  c->r[3]=0u+0x00000000u; // 800BFDF8
L_800BFDFC:;
  c->r[4]=0u+0x806D0000u; // 800BFDFC
  c->r[0]=rotl(c->r[3],4)&0xFFFFFFF0u; // 800BFE00
  c->r[4]=c->r[4]+0x00007038u; // 800BFE04
  c->r[3]=c->r[4]+c->r[0]; // 800BFE08
  return; // 800BFE0C
}

// fn_800BFE10
void f_800BFE10(Ctx* __restrict c) {
  trace_call(0x800BFE10u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BFE10
  c->r[0]=c->lr; // 800BFE14
  W32(c->r[1]+0x00000014u,c->r[0]); // 800BFE18
  c->r[0]=0u+0x00000000u; // 800BFE1C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800BFE20
  c->r[31]=c->r[3]|c->r[3]; // 800BFE24
  W32(c->r[3]+0x000000ACu,c->r[0]); // 800BFE28
  W32(c->r[3]+0x000000B0u,c->r[0]); // 800BFE2C
  c->r[3]=c->r[3]+0x000000DCu; // 800BFE30
  c->lr=0x800BFE38u; f_800CE63C(c); // 800BFE34
  c->r[3]=c->r[31]+0x00000274u; // 800BFE38
  c->lr=0x800BFE40u; f_800CE7E0(c); // 800BFE3C
  c->r[3]=c->r[31]+0x000002A0u; // 800BFE40
  c->lr=0x800BFE48u; f_8026E900(c); // 800BFE44
  c->r[0]=R32(c->r[1]+0x00000014u); // 800BFE48
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800BFE4C
  c->lr=c->r[0]; // 800BFE50
  c->r[1]=c->r[1]+0x00000010u; // 800BFE54
  return; // 800BFE58
}

// fn_800BFE5C
void f_800BFE5C(Ctx* __restrict c) {
  trace_call(0x800BFE5Cu);
  {uint32_t ea=c->r[1]+0xFFFFFF50u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BFE5C
  c->r[0]=c->lr; // 800BFE60
  W32(c->r[1]+0x000000B4u,c->r[0]); // 800BFE64
  c->r[11]=c->r[1]+0x00000080u; // 800BFE68
  {uint32_t ea=c->r[1]+0x000000A0u; WF64(ea,c->f[31]);} // 800BFE6C
  {uint32_t ea=c->r[1]+0x000000A8u; psq_store(c,31,ea,0,0);} // 800BFE70
  {uint32_t ea=c->r[1]+0x00000090u; WF64(ea,c->f[30]);} // 800BFE74
  {uint32_t ea=c->r[1]+0x00000098u; psq_store(c,30,ea,0,0);} // 800BFE78
  {uint32_t ea=c->r[1]+0x00000080u; WF64(ea,c->f[29]);} // 800BFE7C
  {uint32_t ea=c->r[1]+0x00000088u; psq_store(c,29,ea,0,0);} // 800BFE80
  c->lr=0x800BFE88u; { W32(c->r[11]+0xFFFFFFC8u,c->r[18]); W32(c->r[11]+0xFFFFFFCCu,c->r[19]); W32(c->r[11]+0xFFFFFFD0u,c->r[20]); W32(c->r[11]+0xFFFFFFD4u,c->r[21]); W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800BFE84
  c->r[18]=0u+0x00000000u; // 800BFE88
  W8(c->r[1]+0x00000038u,c->r[18]); // 800BFE8C
  c->r[21]=c->r[3]|c->r[3]; // 800BFE90
  c->r[3]=c->r[1]+0x00000038u; // 800BFE94
  c->lr=0x800BFE9Cu; f_8004816C(c); // 800BFE98
  c->lr=0x800BFEA0u; f_8004767C(c); // 800BFE9C
  cmps(c,0,(int32_t)c->r[3],0); // 800BFEA0
  if (crb(c,2)) { goto L_800C0334; } // 800BFEA4
  W8(c->r[1]+0x00000034u,c->r[18]); // 800BFEA8
  c->r[3]=c->r[1]+0x00000034u; // 800BFEAC
  c->lr=0x800BFEB4u; f_800482E8(c); // 800BFEB0
  c->lr=0x800BFEB8u; f_8004B1F0(c); // 800BFEB4
  cmps(c,0,(int32_t)c->r[3],0); // 800BFEB8
  if (crb(c,2)) { goto L_800BFED8; } // 800BFEBC
  W8(c->r[1]+0x00000030u,c->r[18]); // 800BFEC0
  c->r[3]=c->r[1]+0x00000030u; // 800BFEC4
  c->lr=0x800BFECCu; f_800482E8(c); // 800BFEC8
  c->lr=0x800BFED0u; f_8004B1E8(c); // 800BFECC
  cmps(c,0,(int32_t)c->r[3],0); // 800BFED0
  if (!crb(c,2)) { goto L_800C0334; } // 800BFED4
L_800BFED8:;
  c->r[0]=R8(c->r[13]+0xFFFFBBE8u); // 800BFED8
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800BFEDC
  if (!crb(c,2)) { goto L_800BFF9C; } // 800BFEE0
  c->r[20]=0u+0x80740000u; // 800BFEE4
  c->r[20]=c->r[20]+0xFFFFF760u; // 800BFEE8
  c->r[3]=c->r[20]|c->r[20]; // 800BFEEC
  c->lr=0x800BFEF4u; f_800506C0(c); // 800BFEF0
  c->r[0]=0u+0x00000000u; // 800BFEF4
  W8(c->r[20]+0x0000000Cu,c->r[0]); // 800BFEF8
  c->r[0]=R8(c->r[13]+0xFFFFBC20u); // 800BFEFC
  c->r[19]=0u+0x00000001u; // 800BFF00
  W32(c->r[20]+0x00000008u,c->r[20]); // 800BFF04
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800BFF08
  W8(c->r[20]+0x0000000Cu,c->r[19]); // 800BFF0C
  if (!crb(c,2)) { goto L_800BFF50; } // 800BFF10
  c->r[18]=0u+0x80740000u; // 800BFF14
  c->r[3]=c->r[18]+0x00004BC0u; // 800BFF18
  c->lr=0x800BFF20u; f_800506C0(c); // 800BFF1C
  c->r[6]=0u+0x806D0000u; // 800BFF20
  c->r[4]=0u+0x80050000u; // 800BFF24
  c->r[6]=c->r[6]+0xFFFFD848u; // 800BFF28
  c->r[3]=c->r[18]+0x00004BC0u; // 800BFF2C
  c->r[0]=c->r[6]+0x00000008u; // 800BFF30
  c->r[5]=0u+0x80750000u; // 800BFF34
  W32(c->r[3]+0x00000010u,c->r[6]); // 800BFF38
  c->r[4]=c->r[4]+0x00002050u; // 800BFF3C
  c->r[5]=c->r[5]+0x00002ECCu; // 800BFF40
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 800BFF44
  c->lr=0x800BFF4Cu; f_803A92B8(c); // 800BFF48
  W8(c->r[13]+0xFFFFBC20u,c->r[19]); // 800BFF4C
L_800BFF50:;
  c->r[3]=0u+0x80740000u; // 800BFF50
  c->r[5]=c->r[20]|c->r[20]; // 800BFF54
  c->r[3]=c->r[3]+0x00004BC0u; // 800BFF58
  c->r[4]=c->r[3]|c->r[3]; // 800BFF5C
  c->lr=0x800BFF64u; f_802DDCA8(c); // 800BFF60
  c->r[6]=0u+0x806D0000u; // 800BFF64
  c->r[3]=0u+0x80740000u; // 800BFF68
  c->r[6]=c->r[6]+0xFFFFCEE8u; // 800BFF6C
  c->r[4]=0u+0x80050000u; // 800BFF70
  c->r[0]=c->r[6]+0x00000020u; // 800BFF74
  c->r[5]=0u+0x80750000u; // 800BFF78
  W32(c->r[20]+0x00000010u,c->r[6]); // 800BFF7C
  c->r[3]=c->r[3]+0xFFFFF760u; // 800BFF80
  c->r[4]=c->r[4]+0x00000EA8u; // 800BFF84
  c->r[5]=c->r[5]+0x00002E9Cu; // 800BFF88
  W32(c->r[20]+0x00000014u,c->r[0]); // 800BFF8C
  c->lr=0x800BFF94u; f_803A92B8(c); // 800BFF90
  c->r[0]=0u+0x00000001u; // 800BFF94
  W8(c->r[13]+0xFFFFBBE8u,c->r[0]); // 800BFF98
L_800BFF9C:;
  c->r[3]=0u+0x80740000u; // 800BFF9C
  c->r[3]=c->r[3]+0xFFFFF760u; // 800BFFA0
  c->lr=0x800BFFA8u; f_800C5EF8(c); // 800BFFA4
  cmps(c,0,(int32_t)c->r[3],0); // 800BFFA8
  if (crb(c,2)) { goto L_800BFFB4; } // 800BFFAC
  goto L_800C0334; // 800BFFB0
L_800BFFB4:;
  c->r[20]=0u+0x80690000u; // 800BFFB4
  c->r[26]=0u+0x80730000u; // 800BFFB8
  c->r[27]=0u+0x806D0000u; // 800BFFBC
  c->r[18]=0u+0x806D0000u; // 800BFFC0
  {uint32_t ea=c->r[2]+0xFFFFA0F8u; c->f[30]=c->ps1[30]=RF32(ea);} // 800BFFC4
  c->r[20]=c->r[20]+0xFFFFE4C0u; // 800BFFC8
  c->r[27]=c->r[27]+0xFFFFC240u; // 800BFFCC
  c->r[28]=c->r[26]+0x000069C0u; // 800BFFD0
  c->r[18]=c->r[18]+0x000068A8u; // 800BFFD4
  c->r[23]=0u+0x00000000u; // 800BFFD8
  c->r[19]=0u+0x00000000u; // 800BFFDC
  c->r[29]=0u+0x80050000u; // 800BFFE0
  c->r[30]=0u+0x80750000u; // 800BFFE4
  c->r[31]=0u+0x00000001u; // 800BFFE8
L_800BFFEC:;
  c->r[4]=c->r[23]|c->r[23]; // 800BFFEC
  c->r[3]=c->r[21]+0x000000DCu; // 800BFFF0
  c->lr=0x800BFFF8u; f_800CDDE0(c); // 800BFFF4
  cmps(c,0,(int32_t)c->r[3],0); // 800BFFF8
  if (crb(c,2)) { goto L_800C0328; } // 800BFFFC
  cmps(c,0,(int32_t)c->r[23],6); // 800C0000
  if (crb(c,2)) { goto L_800C0328; } // 800C0004
  c->r[3]=c->r[21]|c->r[21]; // 800C0008
  c->r[4]=c->r[23]|c->r[23]; // 800C000C
  c->lr=0x800C0014u; f_800BFC10(c); // 800C0010
  c->r[24]=c->r[3]|c->r[3]; // 800C0014
  c->r[3]=R32(c->r[13]+0xFFFFC218u); // 800C0018
  c->lr=0x800C0020u; f_800CEC6C(c); // 800C001C
  c->r[4]=c->r[24]|c->r[24]; // 800C0020
  c->r[5]=0u+0x00000005u; // 800C0024
  c->lr=0x800C002Cu; f_8021FA54(c); // 800C0028
  fcmp(c,0,c->f[1],c->f[30]); // 800C002C
  c->f[29]=c->f[1]; // 800C0030
  setcrb(c,2,crb(c,1)|crb(c,2)); // 800C0034
  if (!crb(c,2)) { goto L_800C0328; } // 800C0038
  c->r[3]=R32(c->r[13]+0xFFFFC218u); // 800C003C
  c->lr=0x800C0044u; f_800CEC6C(c); // 800C0040
  c->r[4]=c->r[24]|c->r[24]; // 800C0044
  c->r[5]=0u+0x00000002u; // 800C0048
  c->lr=0x800C0050u; f_8021FA54(c); // 800C004C
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[1],true)); // 800C0050
  c->r[5]=c->r[23]|c->r[23]; // 800C0054
  c->r[3]=c->r[21]+0x000000DCu; // 800C0058
  c->r[4]=0u+0x00000000u; // 800C005C
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[0]);} // 800C0060
  c->r[22]=R32(c->r[1]+0x00000044u); // 800C0064
  c->lr=0x800C006Cu; f_800CE244(c); // 800C0068
  cmps(c,0,(int32_t)c->r[22],(int32_t)c->r[3]); // 800C006C
  c->r[25]=c->r[3]|c->r[3]; // 800C0070
  if (!crb(c,1)) { goto L_800C0328; } // 800C0074
  cmps(c,0,(int32_t)c->r[3],0); // 800C0078
  if (crb(c,0)) { goto L_800C0328; } // 800C007C
  W8(c->r[1]+0x0000002Cu,c->r[19]); // 800C0080
  c->r[3]=c->r[1]+0x0000002Cu; // 800C0084
  c->lr=0x800C008Cu; f_800474F4(c); // 800C0088
  c->r[4]=c->r[20]+0x00000072u; // 800C008C
  c->lr=0x800C0094u; f_8004C328(c); // 800C0090
  cmps(c,0,(int32_t)c->r[3],0); // 800C0094
  if (!crb(c,2)) { goto L_800C00C8; } // 800C0098
  W8(c->r[1]+0x00000028u,c->r[19]); // 800C009C
  c->r[3]=c->r[1]+0x00000028u; // 800C00A0
  c->lr=0x800C00A8u; f_800474F4(c); // 800C00A4
  {uint32_t ea=c->r[2]+0xFFFFA100u; c->f[1]=c->ps1[1]=RF32(ea);} // 800C00A8
  c->r[4]=c->r[20]+0x00000072u; // 800C00AC
  c->r[5]=0u+0x00000000u; // 800C00B0
  c->r[6]=0u+0xFFFFFFFFu; // 800C00B4
  c->r[7]=0u+0x00000002u; // 800C00B8
  c->r[8]=0u+0x00000001u; // 800C00BC
  c->r[9]=0u+0x00000001u; // 800C00C0
  c->lr=0x800C00C8u; f_8004BFE0(c); // 800C00C4
L_800C00C8:;
  W8(c->r[1]+0x00000024u,c->r[19]); // 800C00C8
  c->r[3]=c->r[1]+0x00000024u; // 800C00CC
  c->lr=0x800C00D4u; f_800474F4(c); // 800C00D0
  c->r[4]=c->r[20]+0x00000078u; // 800C00D4
  c->lr=0x800C00DCu; f_8004C328(c); // 800C00D8
  cmps(c,0,(int32_t)c->r[3],0); // 800C00DC
  if (!crb(c,2)) { goto L_800C01C8; } // 800C00E0
  c->r[22]=0u+0x00000000u; // 800C00E4
L_800C00E8:;
  c->r[0]=R8(c->r[13]+0xFFFFBB99u); // 800C00E8
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800C00EC
  if (!crb(c,2)) { goto L_800C011C; } // 800C00F0
  c->r[3]=c->r[26]+0x000069C0u; // 800C00F4
  c->lr=0x800C00FCu; f_8029D954(c); // 800C00F8
  c->r[0]=c->r[27]+0x00000008u; // 800C00FC
  W32(c->r[28]+0x00000010u,c->r[27]); // 800C0100
  c->r[3]=c->r[28]|c->r[28]; // 800C0104
  c->r[4]=c->r[29]+0xFFFF9DB8u; // 800C0108
  W32(c->r[28]+0x0000000Cu,c->r[0]); // 800C010C
  c->r[5]=c->r[30]+0x00002EC0u; // 800C0110
  c->lr=0x800C0118u; f_803A92B8(c); // 800C0114
  W8(c->r[13]+0xFFFFBB99u,c->r[31]); // 800C0118
L_800C011C:;
  cmps(c,0,(int32_t)c->r[22],0); // 800C011C
  c->r[0]=c->r[22]|c->r[22]; // 800C0120
  if (!crb(c,0)) { goto L_800C012C; } // 800C0124
  c->r[0]=R32(c->r[28]+0x00000030u); // 800C0128
L_800C012C:;
  cmpu(c,0,c->r[0],0x00000003u); // 800C012C
  if (!crb(c,1)) { goto L_800C0138; } // 800C0130
  c->r[0]=0u+0x00000000u; // 800C0134
L_800C0138:;
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)10904); // 800C0138
  c->r[3]=R32(c->r[28]+0x00000014u); // 800C013C
  c->r[3]=c->r[3]+c->r[0]; // 800C0140
  c->r[0]=R32(c->r[3]+0x00002A28u); // 800C0144
  cmps(c,0,(int32_t)c->r[0],-1); // 800C0148
  if (crb(c,2)) { goto L_800C019C; } // 800C014C
  c->r[4]=c->r[22]|c->r[22]; // 800C0150
  c->r[5]=c->r[23]|c->r[23]; // 800C0154
  c->r[3]=c->r[21]+0x000000DCu; // 800C0158
  c->lr=0x800C0160u; f_800CE1BC(c); // 800C015C
  cmps(c,0,(int32_t)c->r[3],0); // 800C0160
  if (crb(c,0)) { goto L_800C019C; } // 800C0164
  W8(c->r[1]+0x00000020u,c->r[19]); // 800C0168
  c->r[3]=c->r[1]+0x00000020u; // 800C016C
  c->lr=0x800C0174u; f_800474F4(c); // 800C0170
  {uint32_t ea=c->r[2]+0xFFFFA100u; c->f[1]=c->ps1[1]=RF32(ea);} // 800C0174
  c->r[6]=c->r[22]|c->r[22]; // 800C0178
  c->r[4]=c->r[20]+0x00000078u; // 800C017C
  c->r[5]=0u+0x00000000u; // 800C0180
  c->r[7]=0u+0x00000002u; // 800C0184
  c->r[8]=0u+0x00000001u; // 800C0188
  c->r[9]=0u+0x00000000u; // 800C018C
  c->lr=0x800C0194u; f_8004BFE0(c); // 800C0190
  cmps(c,0,(int32_t)c->r[3],0); // 800C0194
  if (!crb(c,1)) { goto L_800C01A8; } // 800C0198
L_800C019C:;
  c->r[22]=c->r[22]+0x00000001u; // 800C019C
  cmps(c,0,(int32_t)c->r[22],2); // 800C01A0
  if (crb(c,0)) { IRQCHK(c); goto L_800C00E8; } // 800C01A4
L_800C01A8:;
  cmps(c,0,(int32_t)c->r[22],2); // 800C01A8
  if (!crb(c,0)) { goto L_800C01C8; } // 800C01AC
  W8(c->r[1]+0x0000001Cu,c->r[19]); // 800C01B0
  c->r[3]=c->r[1]+0x0000001Cu; // 800C01B4
  c->lr=0x800C01BCu; f_800474F4(c); // 800C01B8
  c->r[4]=c->r[20]+0x00000078u; // 800C01BC
  c->r[5]=0u+0x00000000u; // 800C01C0
  c->lr=0x800C01C8u; f_8004C210(c); // 800C01C4
L_800C01C8:;
  c->r[4]=c->r[23]|c->r[23]; // 800C01C8
  c->r[3]=c->r[21]+0x000000DCu; // 800C01CC
  c->r[5]=0u+0x00000000u; // 800C01D0
  c->lr=0x800C01D8u; f_800CDEB8(c); // 800C01D4
  c->f[31]=c->f[1]; // 800C01D8
  W8(c->r[1]+0x00000018u,c->r[19]); // 800C01DC
  c->r[3]=c->r[1]+0x00000018u; // 800C01E0
  c->lr=0x800C01E8u; f_8004714C(c); // 800C01E4
  {uint32_t ea=c->r[3]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C01E8
  c->f[31]=c->ps1[31]=S(c->f[31]+c->f[0]); // 800C01EC
  fcmp(c,0,c->f[31],c->f[29]); // 800C01F0
  setcrb(c,2,crb(c,1)|crb(c,2)); // 800C01F4
  if (!crb(c,2)) { goto L_800C0304; } // 800C01F8
  cmpu(c,0,c->r[24],0x0000000Au); // 800C01FC
  {uint32_t ea=c->r[2]+0xFFFFA0F8u; c->f[31]=c->ps1[31]=RF32(ea);} // 800C0200
  if (!crb(c,1)) { goto L_800C020C; } // 800C0204
  c->r[24]=0u+0x00000000u; // 800C0208
L_800C020C:;
  c->r[0]=(uint32_t)((int32_t)c->r[24]*(int32_t)148); // 800C020C
  c->r[3]=c->r[18]+c->r[0]; // 800C0210
  c->r[0]=R32(c->r[3]+0x0000008Cu); // 800C0214
  c->r[0]=rotl(c->r[0],0)&0x00000040u; cr0(c,c->r[0]); // 800C0218
  if (!crb(c,2)) { goto L_800C0230; } // 800C021C
  c->r[4]=c->r[23]|c->r[23]; // 800C0220
  c->r[3]=c->r[21]+0x000000DCu; // 800C0224
  c->r[5]=0u+0x00000001u; // 800C0228
  c->lr=0x800C0230u; f_800CDC90(c); // 800C022C
L_800C0230:;
  c->r[22]=0u+0x00000000u; // 800C0230
L_800C0234:;
  c->r[4]=c->r[23]|c->r[23]; // 800C0234
  c->r[5]=c->r[22]|c->r[22]; // 800C0238
  c->r[3]=c->r[21]+0x000000DCu; // 800C023C
  c->r[6]=c->r[25]+0x00000001u; // 800C0240
  c->lr=0x800C0248u; f_800CDE88(c); // 800C0244
  c->r[22]=c->r[22]+0x00000001u; // 800C0248
  cmps(c,0,(int32_t)c->r[22],2); // 800C024C
  if (crb(c,0)) { IRQCHK(c); goto L_800C0234; } // 800C0250
  W8(c->r[1]+0x00000014u,c->r[19]); // 800C0254
  c->r[3]=c->r[1]+0x00000014u; // 800C0258
  c->lr=0x800C0260u; f_800474F4(c); // 800C025C
  c->r[4]=c->r[20]+0x00000072u; // 800C0260
  c->r[5]=0u+0x00000000u; // 800C0264
  c->lr=0x800C026Cu; f_8004C210(c); // 800C0268
  W8(c->r[1]+0x00000010u,c->r[19]); // 800C026C
  c->r[3]=c->r[1]+0x00000010u; // 800C0270
  c->lr=0x800C0278u; f_800474F4(c); // 800C0274
  c->r[4]=c->r[20]+0x00000078u; // 800C0278
  c->r[5]=0u+0x00000000u; // 800C027C
  c->lr=0x800C0284u; f_8004C210(c); // 800C0280
  W8(c->r[1]+0x0000000Cu,c->r[19]); // 800C0284
  c->r[3]=c->r[1]+0x0000000Cu; // 800C0288
  c->lr=0x800C0290u; f_800474F4(c); // 800C028C
  {uint32_t ea=c->r[2]+0xFFFFA100u; c->f[1]=c->ps1[1]=RF32(ea);} // 800C0290
  c->r[4]=c->r[20]+0x0000007Fu; // 800C0294
  c->r[5]=0u+0x00000000u; // 800C0298
  c->r[6]=0u+0xFFFFFFFFu; // 800C029C
  c->r[7]=0u+0x00000002u; // 800C02A0
  c->r[8]=0u+0x00000000u; // 800C02A4
  c->r[9]=0u+0x00000001u; // 800C02A8
  c->lr=0x800C02B0u; f_8004BFE0(c); // 800C02AC
  c->r[22]=0u+0x00000000u; // 800C02B0
L_800C02B4:;
  c->r[4]=c->r[22]|c->r[22]; // 800C02B4
  c->r[5]=c->r[23]|c->r[23]; // 800C02B8
  c->r[3]=c->r[21]+0x000000DCu; // 800C02BC
  c->lr=0x800C02C4u; f_800CE1BC(c); // 800C02C0
  cmps(c,0,(int32_t)c->r[3],0); // 800C02C4
  if (crb(c,0)) { goto L_800C02F8; } // 800C02C8
  W8(c->r[1]+0x00000008u,c->r[19]); // 800C02CC
  c->r[3]=c->r[1]+0x00000008u; // 800C02D0
  c->lr=0x800C02D8u; f_800474F4(c); // 800C02D4
  {uint32_t ea=c->r[2]+0xFFFFA100u; c->f[1]=c->ps1[1]=RF32(ea);} // 800C02D8
  c->r[6]=c->r[22]|c->r[22]; // 800C02DC
  c->r[4]=c->r[20]+0x00000085u; // 800C02E0
  c->r[5]=0u+0x00000000u; // 800C02E4
  c->r[7]=0u+0x00000002u; // 800C02E8
  c->r[8]=0u+0x00000000u; // 800C02EC
  c->r[9]=0u+0x00000001u; // 800C02F0
  c->lr=0x800C02F8u; f_8004BFE0(c); // 800C02F4
L_800C02F8:;
  c->r[22]=c->r[22]+0x00000001u; // 800C02F8
  cmps(c,0,(int32_t)c->r[22],2); // 800C02FC
  if (crb(c,0)) { IRQCHK(c); goto L_800C02B4; } // 800C0300
L_800C0304:;
  c->r[22]=0u+0x00000000u; // 800C0304
L_800C0308:;
  c->f[1]=c->f[31]; // 800C0308
  c->r[4]=c->r[23]|c->r[23]; // 800C030C
  c->r[5]=c->r[22]|c->r[22]; // 800C0310
  c->r[3]=c->r[21]+0x000000DCu; // 800C0314
  c->lr=0x800C031Cu; f_800CDE5C(c); // 800C0318
  c->r[22]=c->r[22]+0x00000001u; // 800C031C
  cmps(c,0,(int32_t)c->r[22],2); // 800C0320
  if (crb(c,0)) { IRQCHK(c); goto L_800C0308; } // 800C0324
L_800C0328:;
  c->r[23]=c->r[23]+0x00000001u; // 800C0328
  cmps(c,0,(int32_t)c->r[23],18); // 800C032C
  if (crb(c,0)) { IRQCHK(c); goto L_800BFFEC; } // 800C0330
L_800C0334:;
  c->r[11]=c->r[1]+0x00000080u; // 800C0334
  {uint32_t ea=c->r[1]+0x000000A8u; psq_load(c,31,ea,0,0);} // 800C0338
  {uint32_t ea=c->r[1]+0x000000A0u; c->f[31]=RF64(ea);} // 800C033C
  {uint32_t ea=c->r[1]+0x00000098u; psq_load(c,30,ea,0,0);} // 800C0340
  {uint32_t ea=c->r[1]+0x00000090u; c->f[30]=RF64(ea);} // 800C0344
  {uint32_t ea=c->r[1]+0x00000088u; psq_load(c,29,ea,0,0);} // 800C0348
  {uint32_t ea=c->r[1]+0x00000080u; c->f[29]=RF64(ea);} // 800C034C
  c->lr=0x800C0354u; { c->r[18]=R32(c->r[11]+0xFFFFFFC8u); c->r[19]=R32(c->r[11]+0xFFFFFFCCu); c->r[20]=R32(c->r[11]+0xFFFFFFD0u); c->r[21]=R32(c->r[11]+0xFFFFFFD4u); c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800C0350
  c->r[0]=R32(c->r[1]+0x000000B4u); // 800C0354
  c->lr=c->r[0]; // 800C0358
  c->r[1]=c->r[1]+0x000000B0u; // 800C035C
  return; // 800C0360
}

// fn_800C0364
void f_800C0364(Ctx* __restrict c) {
  trace_call(0x800C0364u);
  {uint32_t ea=c->r[1]+0xFFFFFF80u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C0364
  c->r[0]=c->lr; // 800C0368
  W32(c->r[1]+0x00000084u,c->r[0]); // 800C036C
  c->r[0]=(uint32_t)((int32_t)c->r[4]*(int32_t)100); // 800C0370
  {uint32_t ea=c->r[1]+0x00000070u; WF64(ea,c->f[31]);} // 800C0374
  {uint32_t ea=c->r[1]+0x00000078u; psq_store(c,31,ea,0,0);} // 800C0378
  c->f[31]=c->f[2]; // 800C037C
  {uint32_t ea=c->r[1]+0x00000060u; WF64(ea,c->f[30]);} // 800C0380
  {uint32_t ea=c->r[1]+0x00000068u; psq_store(c,30,ea,0,0);} // 800C0384
  c->f[30]=c->f[1]; // 800C0388
  W32(c->r[1]+0x0000005Cu,c->r[31]); // 800C038C
  W32(c->r[1]+0x00000058u,c->r[30]); // 800C0390
  c->r[5]=R32(c->r[3]+0x000000ACu); // 800C0394
  c->r[3]=c->r[3]+0x000000B8u; // 800C0398
  c->r[30]=c->r[5]+c->r[0]; // 800C039C
  c->lr=0x800C03A4u; f_800AEDAC(c); // 800C03A0
  c->r[4]=c->r[3]|c->r[3]; // 800C03A4
  c->r[3]=c->r[30]+0x0000001Cu; // 800C03A8
  {uint32_t ea=c->r[4]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800C03AC
  {uint32_t ea=c->r[4]+0x0000001Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 800C03B0
  {uint32_t ea=c->r[4]+0x0000002Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 800C03B4
  c->lr=0x800C03BCu; f_8005A6D0(c); // 800C03B8
  c->lr=0x800C03C0u; f_8033FE4C(c); // 800C03BC
  c->r[4]=c->r[3]|c->r[3]; // 800C03C0
  c->r[3]=c->r[1]+0x00000008u; // 800C03C4
  c->lr=0x800C03CCu; f_800678FC(c); // 800C03C8
  c->f[1]=c->f[30]; // 800C03CC
  c->r[3]=c->r[1]+0x00000014u; // 800C03D0
  c->r[4]=c->r[1]+0x00000008u; // 800C03D4
  c->lr=0x800C03DCu; f_8005ED34(c); // 800C03D8
  c->lr=0x800C03E0u; f_8033FE4C(c); // 800C03DC
  c->r[4]=c->r[3]|c->r[3]; // 800C03E0
  c->r[3]=c->r[1]+0x00000020u; // 800C03E4
  c->r[4]=c->r[4]+0x0000012Cu; // 800C03E8
  c->r[5]=c->r[1]+0x00000014u; // 800C03EC
  c->lr=0x800C03F4u; f_8005ED10(c); // 800C03F0
  c->r[3]=c->r[1]+0x0000002Cu; // 800C03F4
  c->r[4]=c->r[1]+0x00000020u; // 800C03F8
  c->r[5]=c->r[30]+0x0000001Cu; // 800C03FC
  c->lr=0x800C0404u; f_800772A0(c); // 800C0400
  c->r[3]=c->r[30]+0x0000001Cu; // 800C0404
  c->r[4]=c->r[1]+0x0000002Cu; // 800C0408
  c->lr=0x800C0410u; f_8005DC84(c); // 800C040C
  {uint32_t ea=c->r[2]+0xFFFFA0F8u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C0410
  c->r[3]=c->r[30]+0x0000001Cu; // 800C0414
  {uint32_t ea=c->r[30]+0x00000020u; WF32(ea,c->f[0]);} // 800C0418
  {uint32_t ea=c->r[2]+0xFFFFA144u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C041C
  {uint32_t ea=c->r[3]+0x00000000u; psq_load(c,1,ea,0,0);} // 800C0420
  {double t0=S(c->f[1]*c->f[0]), t1=S(c->ps1[1]*c->f[0]); c->f[1]=t0; c->ps1[1]=t1;} // 800C0424
  {uint32_t ea=c->r[3]+0x00000000u; psq_store(c,1,ea,0,0);} // 800C0428
  {uint32_t ea=c->r[3]+0x00000008u; psq_load(c,1,ea,1,0);} // 800C042C
  {double t0=S(c->f[1]*c->f[0]), t1=S(c->ps1[1]*c->f[0]); c->f[1]=t0; c->ps1[1]=t1;} // 800C0430
  {uint32_t ea=c->r[3]+0x00000008u; psq_store(c,1,ea,1,0);} // 800C0434
  c->lr=0x800C043Cu; f_80061BF0(c); // 800C0438
  cmps(c,0,(int32_t)c->r[3],0); // 800C043C
  if (!crb(c,2)) { goto L_800C046C; } // 800C0440
  c->r[3]=c->r[30]+0x0000001Cu; // 800C0444
  c->lr=0x800C044Cu; f_80084FAC(c); // 800C0448
  {uint32_t ea=c->r[2]+0xFFFFA100u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C044C
  fcmp(c,0,c->f[1],c->f[0]); // 800C0450
  if (!crb(c,1)) { goto L_800C046C; } // 800C0454
  c->r[3]=c->r[30]+0x0000001Cu; // 800C0458
  c->r[5]=0u+0x806A0000u; // 800C045C
  c->r[4]=c->r[3]|c->r[3]; // 800C0460
  c->r[5]=c->r[5]+0x00000AA8u; // 800C0464
  c->lr=0x800C046Cu; f_8030E0BC(c); // 800C0468
L_800C046C:;
  {uint32_t ea=c->r[30]+0x00000020u; WF32(ea,c->f[31]);} // 800C046C
  c->lr=0x800C0474u; f_803B220C(c); // 800C0470
  c->r[0]=c->r[3]^0x80000000u; // 800C0474
  c->r[31]=0u+0x43300000u; // 800C0478
  W32(c->r[1]+0x0000003Cu,c->r[0]); // 800C047C
  {uint32_t ea=c->r[2]+0xFFFFA118u; c->f[3]=RF64(ea);} // 800C0480
  W32(c->r[1]+0x00000038u,c->r[31]); // 800C0484
  {uint32_t ea=c->r[2]+0xFFFFA108u; c->f[1]=c->ps1[1]=RF32(ea);} // 800C0488
  {uint32_t ea=c->r[1]+0x00000038u; c->f[2]=RF64(ea);} // 800C048C
  {uint32_t ea=c->r[2]+0xFFFFA100u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C0490
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[3]); // 800C0494
  c->f[0]=c->ps1[0]=S(std::fma(c->f[1],c->f[2],-c->f[0])); // 800C0498
  {uint32_t ea=c->r[30]+0x00000028u; WF32(ea,c->f[0]);} // 800C049C
  c->lr=0x800C04A4u; f_803B220C(c); // 800C04A0
  c->r[0]=c->r[3]^0x80000000u; // 800C04A4
  W32(c->r[1]+0x00000044u,c->r[0]); // 800C04A8
  {uint32_t ea=c->r[2]+0xFFFFA118u; c->f[3]=RF64(ea);} // 800C04AC
  W32(c->r[1]+0x00000040u,c->r[31]); // 800C04B0
  {uint32_t ea=c->r[2]+0xFFFFA108u; c->f[1]=c->ps1[1]=RF32(ea);} // 800C04B4
  {uint32_t ea=c->r[1]+0x00000040u; c->f[2]=RF64(ea);} // 800C04B8
  {uint32_t ea=c->r[2]+0xFFFFA100u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C04BC
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[3]); // 800C04C0
  c->f[0]=c->ps1[0]=S(std::fma(c->f[1],c->f[2],-c->f[0])); // 800C04C4
  {uint32_t ea=c->r[30]+0x0000002Cu; WF32(ea,c->f[0]);} // 800C04C8
  c->lr=0x800C04D0u; f_803B220C(c); // 800C04CC
  c->r[0]=c->r[3]^0x80000000u; // 800C04D0
  W32(c->r[1]+0x0000004Cu,c->r[0]); // 800C04D4
  {uint32_t ea=c->r[2]+0xFFFFA118u; c->f[3]=RF64(ea);} // 800C04D8
  c->r[3]=c->r[30]+0x00000028u; // 800C04DC
  W32(c->r[1]+0x00000048u,c->r[31]); // 800C04E0
  {uint32_t ea=c->r[2]+0xFFFFA108u; c->f[1]=c->ps1[1]=RF32(ea);} // 800C04E4
  {uint32_t ea=c->r[1]+0x00000048u; c->f[2]=RF64(ea);} // 800C04E8
  {uint32_t ea=c->r[2]+0xFFFFA100u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C04EC
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[3]); // 800C04F0
  c->f[0]=c->ps1[0]=S(std::fma(c->f[1],c->f[2],-c->f[0])); // 800C04F4
  {uint32_t ea=c->r[30]+0x00000030u; WF32(ea,c->f[0]);} // 800C04F8
  c->lr=0x800C0500u; f_80061BF0(c); // 800C04FC
  cmps(c,0,(int32_t)c->r[3],0); // 800C0500
  if (!crb(c,2)) { goto L_800C0520; } // 800C0504
  c->r[3]=c->r[30]+0x00000028u; // 800C0508
  c->r[5]=0u+0x806A0000u; // 800C050C
  c->r[4]=c->r[3]|c->r[3]; // 800C0510
  c->r[5]=c->r[5]+0x00000AA8u; // 800C0514
  c->lr=0x800C051Cu; f_8030E0BC(c); // 800C0518
  goto L_800C0534; // 800C051C
L_800C0520:;
  {uint32_t ea=c->r[2]+0xFFFFA0F8u; c->f[1]=c->ps1[1]=RF32(ea);} // 800C0520
  {uint32_t ea=c->r[30]+0x00000028u; WF32(ea,c->f[1]);} // 800C0524
  {uint32_t ea=c->r[2]+0xFFFFA100u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C0528
  {uint32_t ea=c->r[30]+0x0000002Cu; WF32(ea,c->f[1]);} // 800C052C
  {uint32_t ea=c->r[30]+0x00000030u; WF32(ea,c->f[0]);} // 800C0530
L_800C0534:;
  {uint32_t ea=c->r[2]+0xFFFFA134u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C0534
  {uint32_t ea=c->r[30]+0x00000034u; WF32(ea,c->f[0]);} // 800C0538
  {uint32_t ea=c->r[1]+0x00000078u; psq_load(c,31,ea,0,0);} // 800C053C
  {uint32_t ea=c->r[1]+0x00000070u; c->f[31]=RF64(ea);} // 800C0540
  {uint32_t ea=c->r[1]+0x00000068u; psq_load(c,30,ea,0,0);} // 800C0544
  {uint32_t ea=c->r[1]+0x00000060u; c->f[30]=RF64(ea);} // 800C0548
  c->r[31]=R32(c->r[1]+0x0000005Cu); // 800C054C
  c->r[30]=R32(c->r[1]+0x00000058u); // 800C0550
  c->r[0]=R32(c->r[1]+0x00000084u); // 800C0554
  c->lr=c->r[0]; // 800C0558
  c->r[1]=c->r[1]+0x00000080u; // 800C055C
  return; // 800C0560
}

// fn_800C0564
void f_800C0564(Ctx* __restrict c) {
  trace_call(0x800C0564u);
  {uint32_t ea=c->r[1]+0xFFFFFB50u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C0564
  c->r[0]=c->lr; // 800C0568
  W32(c->r[1]+0x000004B4u,c->r[0]); // 800C056C
  c->r[11]=c->r[1]+0x000004A0u; // 800C0570
  {uint32_t ea=c->r[1]+0x000004A0u; WF64(ea,c->f[31]);} // 800C0574
  {uint32_t ea=c->r[1]+0x000004A8u; psq_store(c,31,ea,0,0);} // 800C0578
  c->lr=0x800C0580u; { W32(c->r[11]+0xFFFFFFD4u,c->r[21]); W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800C057C
  c->r[0]=R8(c->r[13]+0xFFFFC150u); // 800C0580
  c->r[8]=0u+0x00000000u; // 800C0584
  W32(c->r[1]+0x00000460u,c->r[8]); // 800C0588
  c->r[23]=c->r[3]|c->r[3]; // 800C058C
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800C0590
  c->r[24]=c->r[4]|c->r[4]; // 800C0594
  if (!crb(c,2)) { goto L_800C05C8; } // 800C0598
  c->r[6]=0u+0x80750000u; // 800C059C
  c->r[7]=0u+0x806D0000u; // 800C05A0
  c->r[5]=c->r[6]+0x000036D8u; // 800C05A4
  c->r[0]=0u+0x00000001u; // 800C05A8
  c->r[7]=c->r[7]+0x00006810u; // 800C05AC
  W32(c->r[6]+0x000036D8u,c->r[7]); // 800C05B0
  W32(c->r[5]+0x00000004u,c->r[8]); // 800C05B4
  W32(c->r[5]+0x00000008u,c->r[8]); // 800C05B8
  W32(c->r[5]+0x00000044u,c->r[8]); // 800C05BC
  W32(c->r[5]+0x00000048u,c->r[8]); // 800C05C0
  W8(c->r[13]+0xFFFFC150u,c->r[0]); // 800C05C4
L_800C05C8:;
  c->r[5]=0u+0x806D0000u; // 800C05C8
  c->r[5]=c->r[5]+0xFFFFE428u; // 800C05CC
  W32(c->r[1]+0x000000D0u,c->r[5]); // 800C05D0
  c->r[0]=(uint32_t)((int32_t)c->r[4]*(int32_t)100); // 800C05D4
  c->r[4]=c->r[24]|c->r[24]; // 800C05D8
  c->r[5]=R32(c->r[3]+0x000000ACu); // 800C05DC
  c->r[3]=c->r[3]+0x000000B8u; // 800C05E0
  c->r[28]=c->r[5]+c->r[0]; // 800C05E4
  c->lr=0x800C05ECu; f_800AEDAC(c); // 800C05E8
  c->r[27]=c->r[3]|c->r[3]; // 800C05EC
  c->r[3]=c->r[1]+0x000000A8u; // 800C05F0
  {uint32_t ea=c->r[27]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800C05F4
  {uint32_t ea=c->r[27]+0x0000001Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 800C05F8
  {uint32_t ea=c->r[27]+0x0000002Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 800C05FC
  c->lr=0x800C0604u; f_8005A6D0(c); // 800C0600
  {uint32_t ea=c->r[2]+0xFFFFA0F8u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C0604
  c->r[21]=0u+0x00000000u; // 800C0608
  {uint32_t ea=c->r[27]+0x0000000Cu; WF32(ea,c->f[0]);} // 800C060C
  c->r[3]=c->r[1]+0x00000028u; // 800C0610
  {uint32_t ea=c->r[27]+0x0000001Cu; WF32(ea,c->f[0]);} // 800C0614
  {uint32_t ea=c->r[27]+0x0000002Cu; WF32(ea,c->f[0]);} // 800C0618
  W8(c->r[1]+0x00000028u,c->r[21]); // 800C061C
  c->lr=0x800C0624u; f_8004714C(c); // 800C0620
  {uint32_t ea=c->r[3]+0x00000004u; c->f[31]=c->ps1[31]=RF32(ea);} // 800C0624
  c->r[3]=c->r[1]+0x00000024u; // 800C0628
  W8(c->r[1]+0x00000024u,c->r[21]); // 800C062C
  c->lr=0x800C0634u; f_8004714C(c); // 800C0630
  c->r[5]=R32(c->r[3]+0x00000034u); // 800C0634
  c->r[0]=0u+0x43300000u; // 800C0638
  W32(c->r[1]+0x00000468u,c->r[0]); // 800C063C
  c->r[3]=c->r[1]+0x00000084u; // 800C0640
  c->r[0]=c->r[5]^0x80000000u; // 800C0644
  {uint32_t ea=c->r[2]+0xFFFFA118u; c->f[2]=RF64(ea);} // 800C0648
  W32(c->r[1]+0x0000046Cu,c->r[0]); // 800C064C
  c->r[4]=c->r[28]+0x0000001Cu; // 800C0650
  {uint32_t ea=c->r[2]+0xFFFFA148u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C0654
  {uint32_t ea=c->r[1]+0x00000468u; c->f[1]=RF64(ea);} // 800C0658
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 800C065C
  c->f[0]=c->ps1[0]=S(c->f[0]/c->f[1]); // 800C0660
  c->f[1]=c->ps1[1]=S(c->f[31]*c->f[0]); // 800C0664
  c->lr=0x800C066Cu; f_8005ED34(c); // 800C0668
  c->r[3]=c->r[1]+0x00000090u; // 800C066C
  c->r[4]=c->r[1]+0x000000A8u; // 800C0670
  c->r[5]=c->r[1]+0x00000084u; // 800C0674
  c->lr=0x800C067Cu; f_8005ED10(c); // 800C0678
  c->r[3]=c->r[1]+0x000000C0u; // 800C067C
  c->r[4]=c->r[1]+0x00000090u; // 800C0680
  c->lr=0x800C0688u; f_8005DC84(c); // 800C0684
  c->r[3]=c->r[1]+0x00000078u; // 800C0688
  c->r[4]=c->r[1]+0x000000C0u; // 800C068C
  c->r[5]=c->r[1]+0x000000A8u; // 800C0690
  c->lr=0x800C0698u; f_800772A0(c); // 800C0694
  c->r[3]=c->r[1]+0x0000009Cu; // 800C0698
  c->r[4]=c->r[1]+0x00000078u; // 800C069C
  c->lr=0x800C06A4u; f_8005DC84(c); // 800C06A0
  c->r[3]=c->r[1]+0x0000009Cu; // 800C06A4
  c->lr=0x800C06ACu; f_80061BF0(c); // 800C06A8
  cmps(c,0,(int32_t)c->r[3],0); // 800C06AC
  if (!crb(c,2)) { goto L_800C0A3C; } // 800C06B0
  c->r[3]=c->r[1]+0x000000B4u; // 800C06B4
  c->r[4]=c->r[1]+0x000000C0u; // 800C06B8
  c->lr=0x800C06C0u; f_8005DC84(c); // 800C06BC
  {uint32_t ea=c->r[2]+0xFFFFA0F8u; c->f[31]=c->ps1[31]=RF32(ea);} // 800C06C0
  c->r[3]=c->r[1]+0x0000009Cu; // 800C06C4
  c->r[26]=0u+0x00000000u; // 800C06C8
  c->r[25]=0u+0x00000000u; // 800C06CC
  c->lr=0x800C06D4u; f_80061BF0(c); // 800C06D0
  cmps(c,0,(int32_t)c->r[3],0); // 800C06D4
  if (!crb(c,2)) { goto L_800C06FC; } // 800C06D8
  c->r[3]=c->r[1]+0x0000009Cu; // 800C06DC
  c->lr=0x800C06E4u; f_80084FAC(c); // 800C06E0
  c->f[31]=c->f[1]; // 800C06E4
  c->r[3]=c->r[1]+0x0000009Cu; // 800C06E8
  c->r[5]=0u+0x806A0000u; // 800C06EC
  c->r[4]=c->r[3]|c->r[3]; // 800C06F0
  c->r[5]=c->r[5]+0x00000AA8u; // 800C06F4
  c->lr=0x800C06FCu; f_8030E0BC(c); // 800C06F8
L_800C06FC:;
  c->r[0]=0u+0x00000000u; // 800C06FC
  W8(c->r[1]+0x00000020u,c->r[0]); // 800C0700
  c->r[3]=c->r[1]+0x00000020u; // 800C0704
  c->lr=0x800C070Cu; f_8004FA38(c); // 800C0708
  c->f[2]=c->f[31]; // 800C070C
  c->r[4]=0u+0x00310000u; // 800C0710
  {uint32_t ea=c->r[28]+0x00000018u; c->f[1]=c->ps1[1]=RF32(ea);} // 800C0714
  c->r[4]=c->r[4]+0x00000010u; // 800C0718
  c->r[5]=c->r[1]+0x000000A8u; // 800C071C
  c->r[6]=c->r[1]+0x0000009Cu; // 800C0720
  c->r[7]=c->r[1]+0x00000118u; // 800C0724
  c->lr=0x800C072Cu; f_802F1EC4(c); // 800C0728
  c->r[0]=R32(c->r[1]+0x00000460u); // 800C072C
  cmps(c,0,(int32_t)c->r[0],0); // 800C0730
  if (crb(c,2)) { goto L_800C0748; } // 800C0734
  c->r[3]=c->r[1]+0x000000B4u; // 800C0738
  c->r[4]=c->r[1]+0x00000140u; // 800C073C
  c->r[26]=0u+0x00000001u; // 800C0740
  c->lr=0x800C0748u; f_8005DC84(c); // 800C0744
L_800C0748:;
  {uint32_t ea=c->r[28]+0x0000004Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800C0748
  {uint32_t ea=c->r[2]+0xFFFFA14Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800C074C
  fcmp(c,0,c->f[1],c->f[0]); // 800C0750
  setcrb(c,2,crb(c,1)|crb(c,2)); // 800C0754
  if (!crb(c,2)) { goto L_800C08EC; } // 800C0758
  {uint32_t ea=c->r[28]+0x00000018u; c->f[31]=c->ps1[31]=RF32(ea);} // 800C075C
  c->r[4]=0u+0x80750000u; // 800C0760
  c->r[4]=c->r[4]+0x000036D8u; // 800C0764
  c->r[3]=c->r[1]+0x000000D8u; // 800C0768
  W32(c->r[1]+0x000000D4u,c->r[4]); // 800C076C
  c->r[4]=c->r[1]+0x000000A8u; // 800C0770
  c->lr=0x800C0778u; f_8005DC84(c); // 800C0774
  c->r[0]=R8(c->r[13]+0xFFFFBC02u); // 800C0778
  {uint32_t ea=c->r[2]+0xFFFFA0FCu; c->f[0]=c->ps1[0]=RF32(ea);} // 800C077C
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800C0780
  {uint32_t ea=c->r[1]+0x000000E4u; WF32(ea,c->f[0]);} // 800C0784
  if (!crb(c,2)) { goto L_800C07A0; } // 800C0788
  c->r[3]=0u+0x806D0000u; // 800C078C
  c->r[0]=0u+0x00000001u; // 800C0790
  c->r[3]=c->r[3]+0xFFFFCB20u; // 800C0794
  W32(c->r[13]+0xFFFFBC04u,c->r[3]); // 800C0798
  W8(c->r[13]+0xFFFFBC02u,c->r[0]); // 800C079C
L_800C07A0:;
  c->r[0]=R8(c->r[13]+0xFFFFBE9Du); // 800C07A0
  c->r[31]=0u+0x00000000u; // 800C07A4
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800C07A8
  if (!crb(c,2)) { goto L_800C07F0; } // 800C07AC
  c->r[21]=0u+0x80750000u; // 800C07B0
  c->r[3]=c->r[21]+0xFFFF8158u; // 800C07B4
  c->lr=0x800C07BCu; f_800506C0(c); // 800C07B8
  c->r[6]=0u+0x806D0000u; // 800C07BC
  c->r[4]=0u+0x80080000u; // 800C07C0
  c->r[6]=c->r[6]+0x000038F0u; // 800C07C4
  c->r[3]=c->r[21]+0xFFFF8158u; // 800C07C8
  c->r[0]=c->r[6]+0x00000008u; // 800C07CC
  c->r[5]=0u+0x80750000u; // 800C07D0
  W32(c->r[3]+0x00000010u,c->r[6]); // 800C07D4
  c->r[4]=c->r[4]+0xFFFF98C0u; // 800C07D8
  c->r[5]=c->r[5]+0x00002EB4u; // 800C07DC
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 800C07E0
  c->lr=0x800C07E8u; f_803A92B8(c); // 800C07E4
  c->r[0]=0u+0x00000001u; // 800C07E8
  W8(c->r[13]+0xFFFFBE9Du,c->r[0]); // 800C07EC
L_800C07F0:;
  c->r[3]=0u+0x80750000u; // 800C07F0
  c->r[22]=c->r[1]+0x000000D0u; // 800C07F4
  c->r[30]=R32(c->r[3]+0xFFFF8158u); // 800C07F8
  c->r[29]=c->r[3]+0xFFFF8158u; // 800C07FC
  c->r[21]=0u+0x80740000u; // 800C0800
  goto L_800C08D0; // 800C0804
L_800C0808:;
  cmps(c,0,(int32_t)c->r[4],0); // 800C0808
  if (crb(c,2)) { goto L_800C0814; } // 800C080C
  c->r[4]=c->r[4]+0x00000020u; // 800C0810
L_800C0814:;
  c->r[3]=R32(c->r[4]+0x00000000u); // 800C0814
  c->r[0]=R32(c->r[4]+0x00000004u); // 800C0818
  cmps(c,0,(int32_t)c->r[3],0); // 800C081C
  W32(c->r[1]+0x00000038u,c->r[3]); // 800C0820
  W32(c->r[1]+0x0000003Cu,c->r[0]); // 800C0824
  W32(c->r[1]+0x00000040u,c->r[3]); // 800C0828
  W32(c->r[1]+0x00000044u,c->r[0]); // 800C082C
  if (crb(c,2)) { goto L_800C08CC; } // 800C0830
  c->r[3]=c->r[1]+0x00000040u; // 800C0834
  c->lr=0x800C083Cu; f_80046E94(c); // 800C0838
  c->r[3]=R32(c->r[3]+0x00000000u); // 800C083C
  c->r[0]=R32(c->r[1]+0x00000040u); // 800C0840
  c->r[3]=c->r[3]-c->r[0]; // 800C0844
  c->r[0]=addc(c,c->r[3],0xFFFFFFFFu,0); // 800C0848
  c->r[0]=addc(c,~c->r[0],c->r[3],c->xer_ca); cr0(c,c->r[0]); // 800C084C
  if (!crb(c,2)) { goto L_800C08CC; } // 800C0850
  c->r[3]=c->r[1]+0x00000040u; // 800C0854
  c->lr=0x800C085Cu; f_80046E94(c); // 800C0858
  c->r[3]=R32(c->r[3]+0x00000004u); // 800C085C
  c->f[1]=c->f[31]; // 800C0860
  c->r[5]=c->r[1]+0x000000A8u; // 800C0864
  c->r[6]=c->r[1]+0x000000B4u; // 800C0868
  c->r[12]=R32(c->r[3]+0x0000001Cu); // 800C086C
  c->r[7]=c->r[21]+0x000074DCu; // 800C0870
  c->r[4]=0u+0x00000019u; // 800C0874
  c->r[12]=R32(c->r[12]+0x0000002Cu); // 800C0878
  c->ctr=c->r[12]; // 800C087C
  if (true) { c->lr=0x800C0884u; dispatch(c,c->ctr); } // 800C0880
  cmps(c,0,(int32_t)c->r[3],0); // 800C0884
  if (crb(c,2)) { goto L_800C08CC; } // 800C0888
  cmps(c,0,(int32_t)c->r[22],0); // 800C088C
  c->r[31]=c->r[31]+0x00000001u; // 800C0890
  if (crb(c,2)) { goto L_800C08CC; } // 800C0894
  c->r[5]=R32(c->r[1]+0x00000040u); // 800C0898
  c->r[3]=c->r[22]|c->r[22]; // 800C089C
  c->r[0]=R32(c->r[1]+0x00000044u); // 800C08A0
  c->r[4]=c->r[1]+0x00000030u; // 800C08A4
  W32(c->r[1]+0x00000030u,c->r[5]); // 800C08A8
  c->r[5]=c->r[21]+0x000074DCu; // 800C08AC
  W32(c->r[1]+0x00000034u,c->r[0]); // 800C08B0
  c->r[12]=R32(c->r[22]+0x00000000u); // 800C08B4
  c->r[12]=R32(c->r[12]+0x00000008u); // 800C08B8
  c->ctr=c->r[12]; // 800C08BC
  if (true) { c->lr=0x800C08C4u; dispatch(c,c->ctr); } // 800C08C0
  cmps(c,0,(int32_t)c->r[3],0); // 800C08C4
  if (crb(c,2)) { goto L_800C08E0; } // 800C08C8
L_800C08CC:;
  c->r[30]=R32(c->r[30]+0x00000000u); // 800C08CC
L_800C08D0:;
  c->r[4]=R32(c->r[30]+0x00000008u); // 800C08D0
  c->r[0]=R32(c->r[29]+0x00000008u); // 800C08D4
  cmpu(c,0,c->r[4],c->r[0]); // 800C08D8
  if (!crb(c,2)) { IRQCHK(c); goto L_800C0808; } // 800C08DC
L_800C08E0:;
  cmps(c,0,(int32_t)c->r[31],0); // 800C08E0
  if (!crb(c,1)) { goto L_800C08EC; } // 800C08E4
  c->r[25]=0u+0x00000001u; // 800C08E8
L_800C08EC:;
  c->r[29]=0u+0x00000000u; // 800C08EC
  W8(c->r[1]+0x0000001Cu,c->r[29]); // 800C08F0
  c->r[3]=c->r[1]+0x0000001Cu; // 800C08F4
  c->lr=0x800C08FCu; f_8004714C(c); // 800C08F8
  {uint32_t ea=c->r[3]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 800C08FC
  {uint32_t ea=c->r[28]+0x0000004Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800C0900
  {uint32_t ea=c->r[2]+0xFFFFA150u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C0904
  c->f[1]=c->ps1[1]=S(c->f[1]+c->f[2]); // 800C0908
  {uint32_t ea=c->r[28]+0x0000004Cu; WF32(ea,c->f[1]);} // 800C090C
  fcmp(c,0,c->f[1],c->f[0]); // 800C0910
  setcrb(c,2,crb(c,1)|crb(c,2)); // 800C0914
  if (!crb(c,2)) { goto L_800C0940; } // 800C0918
  W8(c->r[1]+0x00000018u,c->r[29]); // 800C091C
  c->r[3]=c->r[1]+0x00000018u; // 800C0920
  c->lr=0x800C0928u; f_80046D50(c); // 800C0924
  c->lr=0x800C092Cu; f_8008CD00(c); // 800C0928
  c->r[4]=c->r[3]|c->r[3]; // 800C092C
  c->r[3]=c->r[23]|c->r[23]; // 800C0930
  c->r[5]=c->r[24]|c->r[24]; // 800C0934
  c->lr=0x800C093Cu; f_800BED08(c); // 800C0938
  goto L_800C0A24; // 800C093C
L_800C0940:;
  cmps(c,0,(int32_t)c->r[25],0); // 800C0940
  if (crb(c,2)) { goto L_800C0974; } // 800C0944
  c->r[4]=0u+0x80750000u; // 800C0948
  {uint32_t ea=c->r[2]+0xFFFFA154u; c->f[1]=c->ps1[1]=RF32(ea);} // 800C094C
  c->r[4]=c->r[4]+0x000036D8u; // 800C0950
  c->r[3]=c->r[23]|c->r[23]; // 800C0954
  c->r[5]=c->r[24]|c->r[24]; // 800C0958
  c->r[8]=c->r[1]+0x000000C0u; // 800C095C
  c->r[6]=c->r[4]+0x0000004Cu; // 800C0960
  c->r[7]=c->r[4]+0x00000058u; // 800C0964
  c->r[4]=0u+0x00000000u; // 800C0968
  c->lr=0x800C0970u; f_800C0C34(c); // 800C096C
  goto L_800C0A24; // 800C0970
L_800C0974:;
  cmps(c,0,(int32_t)c->r[26],0); // 800C0974
  if (crb(c,2)) { goto L_800C09C8; } // 800C0978
  c->r[0]=R32(c->r[1]+0x00000130u); // 800C097C
  c->r[0]=rotl(c->r[0],0)&0x000000FFu; // 800C0980
  cmpu(c,0,c->r[0],0x00000005u); // 800C0984
  if (crb(c,2)) { goto L_800C09B0; } // 800C0988
  {uint32_t ea=c->r[2]+0xFFFFA14Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800C098C
  c->r[3]=c->r[23]|c->r[23]; // 800C0990
  c->r[5]=c->r[24]|c->r[24]; // 800C0994
  c->r[4]=c->r[1]+0x00000118u; // 800C0998
  c->r[6]=c->r[1]+0x00000140u; // 800C099C
  c->r[7]=c->r[1]+0x0000014Cu; // 800C09A0
  c->r[8]=c->r[1]+0x000000C0u; // 800C09A4
  c->lr=0x800C09ACu; f_800C0C34(c); // 800C09A8
  goto L_800C0A24; // 800C09AC
L_800C09B0:;
  c->r[3]=c->r[23]|c->r[23]; // 800C09B0
  c->r[4]=c->r[24]|c->r[24]; // 800C09B4
  c->r[5]=c->r[1]+0x00000140u; // 800C09B8
  c->r[6]=c->r[1]+0x0000014Cu; // 800C09BC
  c->lr=0x800C09C4u; f_800C0F44(c); // 800C09C0
  goto L_800C0A24; // 800C09C4
L_800C09C8:;
  c->lr=0x800C09CCu; f_8033FE4C(c); // 800C09C8
  c->r[4]=c->r[3]|c->r[3]; // 800C09CC
  c->r[3]=c->r[1]+0x000000C0u; // 800C09D0
  c->r[4]=c->r[4]+0x0000012Cu; // 800C09D4
  c->lr=0x800C09DCu; f_80383EF4(c); // 800C09D8
  {uint32_t ea=c->r[2]+0xFFFFA158u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C09DC
  fcmp(c,0,c->f[1],c->f[0]); // 800C09E0
  if (!crb(c,0)) { goto L_800C0A24; } // 800C09E4
  c->lr=0x800C09ECu; f_8033FE4C(c); // 800C09E8
  c->r[4]=c->r[3]|c->r[3]; // 800C09EC
  c->r[3]=c->r[1]+0x0000006Cu; // 800C09F0
  c->lr=0x800C09F8u; f_800678FC(c); // 800C09F4
  c->r[3]=c->r[1]+0x000000B4u; // 800C09F8
  c->r[4]=c->r[1]+0x0000006Cu; // 800C09FC
  c->lr=0x800C0A04u; f_8005DC84(c); // 800C0A00
  {uint32_t ea=c->r[2]+0xFFFFA100u; c->f[1]=c->ps1[1]=RF32(ea);} // 800C0A04
  c->r[3]=c->r[23]|c->r[23]; // 800C0A08
  c->r[5]=c->r[24]|c->r[24]; // 800C0A0C
  c->r[6]=c->r[1]+0x000000A8u; // 800C0A10
  c->r[7]=c->r[1]+0x000000B4u; // 800C0A14
  c->r[8]=c->r[1]+0x000000C0u; // 800C0A18
  c->r[4]=0u+0x00000000u; // 800C0A1C
  c->lr=0x800C0A24u; f_800C0C34(c); // 800C0A20
L_800C0A24:;
  c->r[0]=R32(c->r[28]+0x0000003Cu); // 800C0A24
  cmps(c,0,(int32_t)c->r[0],0); // 800C0A28
  if (!crb(c,0)) { goto L_800C0A3C; } // 800C0A2C
  c->r[0]=0u+0x00000000u; // 800C0A30
  W32(c->r[1]+0x00000460u,c->r[0]); // 800C0A34
  goto L_800C0C14; // 800C0A38
L_800C0A3C:;
  c->r[3]=c->r[1]+0x00000060u; // 800C0A3C
  c->r[4]=c->r[1]+0x000000C0u; // 800C0A40
  c->r[5]=c->r[1]+0x000000A8u; // 800C0A44
  c->r[21]=0u+0x00000001u; // 800C0A48
  c->lr=0x800C0A50u; f_800772A0(c); // 800C0A4C
  c->r[3]=c->r[1]+0x0000009Cu; // 800C0A50
  c->r[4]=c->r[1]+0x00000060u; // 800C0A54
  c->lr=0x800C0A5Cu; f_8005DC84(c); // 800C0A58
  c->r[3]=c->r[1]+0x0000009Cu; // 800C0A5C
  c->lr=0x800C0A64u; f_80061BF0(c); // 800C0A60
  cmps(c,0,(int32_t)c->r[3],0); // 800C0A64
  if (!crb(c,2)) { goto L_800C0B14; } // 800C0A68
  {uint32_t ea=c->r[2]+0xFFFFA0F8u; c->f[31]=c->ps1[31]=RF32(ea);} // 800C0A6C
  c->r[3]=c->r[1]+0x0000009Cu; // 800C0A70
  c->lr=0x800C0A78u; f_80061BF0(c); // 800C0A74
  cmps(c,0,(int32_t)c->r[3],0); // 800C0A78
  if (!crb(c,2)) { goto L_800C0AA0; } // 800C0A7C
  c->r[3]=c->r[1]+0x0000009Cu; // 800C0A80
  c->lr=0x800C0A88u; f_80084FAC(c); // 800C0A84
  c->f[31]=c->f[1]; // 800C0A88
  c->r[3]=c->r[1]+0x0000009Cu; // 800C0A8C
  c->r[5]=0u+0x806A0000u; // 800C0A90
  c->r[4]=c->r[3]|c->r[3]; // 800C0A94
  c->r[5]=c->r[5]+0x00000AA8u; // 800C0A98
  c->lr=0x800C0AA0u; f_8030E0BC(c); // 800C0A9C
L_800C0AA0:;
  c->r[0]=0u+0x00000000u; // 800C0AA0
  W8(c->r[1]+0x00000014u,c->r[0]); // 800C0AA4
  c->r[3]=c->r[1]+0x00000014u; // 800C0AA8
  c->lr=0x800C0AB0u; f_8004FA38(c); // 800C0AAC
  c->f[2]=c->f[31]; // 800C0AB0
  c->r[4]=0u+0x00310000u; // 800C0AB4
  {uint32_t ea=c->r[28]+0x00000018u; c->f[1]=c->ps1[1]=RF32(ea);} // 800C0AB8
  c->r[4]=c->r[4]+0x00000010u; // 800C0ABC
  c->r[5]=c->r[1]+0x000000A8u; // 800C0AC0
  c->r[6]=c->r[1]+0x0000009Cu; // 800C0AC4
  c->r[7]=c->r[1]+0x00000118u; // 800C0AC8
  c->lr=0x800C0AD0u; f_802F1EC4(c); // 800C0ACC
  c->r[0]=R32(c->r[1]+0x00000460u); // 800C0AD0
  cmps(c,0,(int32_t)c->r[0],0); // 800C0AD4
  if (crb(c,2)) { goto L_800C0B14; } // 800C0AD8
  {uint32_t ea=c->r[2]+0xFFFFA15Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800C0ADC
  c->r[3]=c->r[1]+0x00000048u; // 800C0AE0
  {uint32_t ea=c->r[28]+0x00000018u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C0AE4
  c->r[4]=c->r[1]+0x0000014Cu; // 800C0AE8
  c->f[1]=c->ps1[1]=S(c->f[1]+c->f[0]); // 800C0AEC
  c->lr=0x800C0AF4u; f_8005ED34(c); // 800C0AF0
  c->r[3]=c->r[1]+0x00000054u; // 800C0AF4
  c->r[4]=c->r[1]+0x00000140u; // 800C0AF8
  c->r[5]=c->r[1]+0x00000048u; // 800C0AFC
  c->lr=0x800C0B04u; f_8005ED10(c); // 800C0B00
  c->r[3]=c->r[1]+0x000000C0u; // 800C0B04
  c->r[4]=c->r[1]+0x00000054u; // 800C0B08
  c->lr=0x800C0B10u; f_8005DC84(c); // 800C0B0C
  c->r[21]=0u+0x00000000u; // 800C0B10
L_800C0B14:;
  cmps(c,0,(int32_t)c->r[21],0); // 800C0B14
  if (crb(c,2)) { goto L_800C0B40; } // 800C0B18
  c->r[0]=0u+0x00000000u; // 800C0B1C
  W8(c->r[1]+0x00000010u,c->r[0]); // 800C0B20
  c->r[3]=c->r[1]+0x00000010u; // 800C0B24
  c->lr=0x800C0B2Cu; f_8004714C(c); // 800C0B28
  {uint32_t ea=c->r[3]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 800C0B2C
  {uint32_t ea=c->r[2]+0xFFFFA160u; c->f[1]=c->ps1[1]=RF32(ea);} // 800C0B30
  {uint32_t ea=c->r[28]+0x00000020u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C0B34
  c->f[0]=c->ps1[0]=S(-std::fma(c->f[1],c->f[2],-c->f[0])); // 800C0B38
  {uint32_t ea=c->r[28]+0x00000020u; WF32(ea,c->f[0]);} // 800C0B3C
L_800C0B40:;
  c->r[25]=0u+0x00000000u; // 800C0B40
  W8(c->r[1]+0x00000008u,c->r[25]); // 800C0B44
  c->r[3]=c->r[1]+0x00000008u; // 800C0B48
  c->lr=0x800C0B50u; f_8004714C(c); // 800C0B4C
  c->r[21]=R32(c->r[3]+0x00000034u); // 800C0B50
  c->r[3]=c->r[1]+0x0000000Cu; // 800C0B54
  W8(c->r[1]+0x0000000Cu,c->r[25]); // 800C0B58
  c->lr=0x800C0B60u; f_8004714C(c); // 800C0B5C
  c->r[4]=c->r[21]^0x80000000u; // 800C0B60
  c->r[0]=0u+0x43300000u; // 800C0B64
  W32(c->r[1]+0x0000046Cu,c->r[4]); // 800C0B68
  c->r[4]=c->r[28]+0x00000028u; // 800C0B6C
  {uint32_t ea=c->r[2]+0xFFFFA118u; c->f[1]=RF64(ea);} // 800C0B70
  W32(c->r[1]+0x00000468u,c->r[0]); // 800C0B74
  {uint32_t ea=c->r[3]+0x00000004u; c->f[4]=c->ps1[4]=RF32(ea);} // 800C0B78
  c->r[3]=c->r[1]+0x000000E8u; // 800C0B7C
  {uint32_t ea=c->r[1]+0x00000468u; c->f[0]=RF64(ea);} // 800C0B80
  {uint32_t ea=c->r[2]+0xFFFFA148u; c->f[2]=c->ps1[2]=RF32(ea);} // 800C0B84
  c->f[3]=c->ps1[3]=S(c->f[0]-c->f[1]); // 800C0B88
  {uint32_t ea=c->r[28]+0x00000034u; c->f[1]=c->ps1[1]=RF32(ea);} // 800C0B8C
  {uint32_t ea=c->r[2]+0xFFFFA164u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C0B90
  c->f[2]=c->ps1[2]=S(c->f[2]/c->f[3]); // 800C0B94
  c->f[2]=c->ps1[2]=S(c->f[4]*c->f[2]); // 800C0B98
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[2]); // 800C0B9C
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[1]); // 800C0BA0
  c->lr=0x800C0BA8u; f_804E1868(c); // 800C0BA4
  c->r[4]=c->r[27]|c->r[27]; // 800C0BA8
  c->r[5]=c->r[27]|c->r[27]; // 800C0BAC
  c->r[3]=c->r[1]+0x000000E8u; // 800C0BB0
  c->lr=0x800C0BB8u; f_80382F60(c); // 800C0BB4
  {uint32_t ea=c->r[1]+0x000000C0u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C0BB8
  c->r[4]=c->r[24]|c->r[24]; // 800C0BBC
  {uint32_t ea=c->r[27]+0x0000000Cu; WF32(ea,c->f[0]);} // 800C0BC0
  c->r[5]=c->r[27]|c->r[27]; // 800C0BC4
  c->r[3]=c->r[23]+0x000000B8u; // 800C0BC8
  {uint32_t ea=c->r[1]+0x000000C4u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C0BCC
  {uint32_t ea=c->r[27]+0x0000001Cu; WF32(ea,c->f[0]);} // 800C0BD0
  {uint32_t ea=c->r[1]+0x000000C8u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C0BD4
  {uint32_t ea=c->r[27]+0x0000002Cu; WF32(ea,c->f[0]);} // 800C0BD8
  c->lr=0x800C0BE0u; f_800AECAC(c); // 800C0BDC
  c->r[0]=R32(c->r[28]+0x0000003Cu); // 800C0BE0
  c->r[3]=c->r[27]|c->r[27]; // 800C0BE4
  c->r[4]=R32(c->r[23]+0x000000B0u); // 800C0BE8
  c->r[5]=c->r[28]|c->r[28]; // 800C0BEC
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)28); // 800C0BF0
  c->r[21]=c->r[4]+c->r[0]; // 800C0BF4
  c->r[4]=c->r[21]|c->r[21]; // 800C0BF8
  c->lr=0x800C0C00u; f_80383AA0(c); // 800C0BFC
  c->r[3]=c->r[27]|c->r[27]; // 800C0C00
  c->r[4]=c->r[21]+0x0000000Cu; // 800C0C04
  c->r[5]=c->r[28]+0x0000000Cu; // 800C0C08
  c->lr=0x800C0C10u; f_80383AA0(c); // 800C0C0C
  W32(c->r[1]+0x00000460u,c->r[25]); // 800C0C10
L_800C0C14:;
  c->r[11]=c->r[1]+0x000004A0u; // 800C0C14
  {uint32_t ea=c->r[1]+0x000004A8u; psq_load(c,31,ea,0,0);} // 800C0C18
  {uint32_t ea=c->r[1]+0x000004A0u; c->f[31]=RF64(ea);} // 800C0C1C
  c->lr=0x800C0C24u; { c->r[21]=R32(c->r[11]+0xFFFFFFD4u); c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800C0C20
  c->r[0]=R32(c->r[1]+0x000004B4u); // 800C0C24
  c->lr=c->r[0]; // 800C0C28
  c->r[1]=c->r[1]+0x000004B0u; // 800C0C2C
  return; // 800C0C30
}

// fn_800C0C34
void f_800C0C34(Ctx* __restrict c) {
  trace_call(0x800C0C34u);
  {uint32_t ea=c->r[1]+0xFFFFFEF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C0C34
  c->r[0]=c->lr; // 800C0C38
  W32(c->r[1]+0x00000114u,c->r[0]); // 800C0C3C
  c->r[11]=c->r[1]+0x000000F0u; // 800C0C40
  {uint32_t ea=c->r[1]+0x00000100u; WF64(ea,c->f[31]);} // 800C0C44
  {uint32_t ea=c->r[1]+0x00000108u; psq_store(c,31,ea,0,0);} // 800C0C48
  {uint32_t ea=c->r[1]+0x000000F0u; WF64(ea,c->f[30]);} // 800C0C4C
  {uint32_t ea=c->r[1]+0x000000F8u; psq_store(c,30,ea,0,0);} // 800C0C50
  c->lr=0x800C0C58u; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800C0C54
  c->r[0]=(uint32_t)((int32_t)c->r[5]*(int32_t)100); // 800C0C58
  c->r[9]=R32(c->r[3]+0x000000ACu); // 800C0C5C
  c->f[30]=c->f[1]; // 800C0C60
  c->r[29]=c->r[7]|c->r[7]; // 800C0C64
  c->r[26]=c->r[4]|c->r[4]; // 800C0C68
  c->r[30]=c->r[9]+c->r[0]; // 800C0C6C
  c->r[25]=c->r[3]|c->r[3]; // 800C0C70
  c->r[27]=c->r[5]|c->r[5]; // 800C0C74
  c->r[28]=c->r[6]|c->r[6]; // 800C0C78
  c->r[31]=c->r[8]|c->r[8]; // 800C0C7C
  c->r[4]=c->r[29]|c->r[29]; // 800C0C80
  c->r[3]=c->r[30]+0x0000001Cu; // 800C0C84
  c->lr=0x800C0C8Cu; f_800B3F44(c); // 800C0C88
  {uint32_t ea=c->r[2]+0xFFFFA0F8u; c->f[31]=c->ps1[31]=RF32(ea);} // 800C0C8C
  fcmp(c,0,c->f[1],c->f[31]); // 800C0C90
  setcrb(c,2,crb(c,1)|crb(c,2)); // 800C0C94
  if (crb(c,2)) { goto L_800C0F1C; } // 800C0C98
  c->r[3]=c->r[30]+0x0000001Cu; // 800C0C9C
  c->lr=0x800C0CA4u; f_80061BF0(c); // 800C0CA0
  cmps(c,0,(int32_t)c->r[3],0); // 800C0CA4
  if (!crb(c,2)) { goto L_800C0CE8; } // 800C0CA8
  c->r[3]=c->r[30]+0x0000001Cu; // 800C0CAC
  c->lr=0x800C0CB4u; f_80084FAC(c); // 800C0CB0
  {uint32_t ea=c->r[2]+0xFFFFA154u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C0CB4
  c->f[31]=c->f[1]; // 800C0CB8
  fcmp(c,0,c->f[1],c->f[0]); // 800C0CBC
  if (!crb(c,1)) { goto L_800C0CE8; } // 800C0CC0
  cmps(c,0,(int32_t)c->r[26],0); // 800C0CC4
  if (crb(c,2)) { goto L_800C0CE8; } // 800C0CC8
  c->r[3]=0u+0x80690000u; // 800C0CCC
  {uint32_t ea=c->r[2]+0xFFFFA100u; c->f[1]=c->ps1[1]=RF32(ea);} // 800C0CD0
  c->r[3]=c->r[3]+0xFFFFE4C0u; // 800C0CD4
  c->r[4]=c->r[28]|c->r[28]; // 800C0CD8
  c->r[3]=c->r[3]+0x0000008Cu; // 800C0CDC
  c->r[5]=0u+0xFFFFFFFFu; // 800C0CE0
  c->lr=0x800C0CE8u; f_800AC630(c); // 800C0CE4
L_800C0CE8:;
  {uint32_t ea=c->r[30]+0x00000018u; c->f[1]=c->ps1[1]=RF32(ea);} // 800C0CE8
  c->r[4]=c->r[29]|c->r[29]; // 800C0CEC
  c->r[3]=c->r[1]+0x00000054u; // 800C0CF0
  c->lr=0x800C0CF8u; f_8005ED34(c); // 800C0CF4
  c->r[4]=c->r[28]|c->r[28]; // 800C0CF8
  c->r[3]=c->r[1]+0x00000060u; // 800C0CFC
  c->r[5]=c->r[1]+0x00000054u; // 800C0D00
  c->lr=0x800C0D08u; f_8005ED10(c); // 800C0D04
  c->r[3]=c->r[31]|c->r[31]; // 800C0D08
  c->r[4]=c->r[1]+0x00000060u; // 800C0D0C
  c->lr=0x800C0D14u; f_8005DC84(c); // 800C0D10
  c->r[4]=c->r[1]+0x0000000Cu; // 800C0D14
  {uint32_t ea=c->r[30]+0x0000001Cu; psq_load(c,0,ea,0,0);} // 800C0D18
  {double t0=-c->f[0], t1=-c->ps1[0]; c->f[0]=t0; c->ps1[0]=t1;} // 800C0D1C
  {uint32_t ea=c->r[4]+0x00000000u; psq_store(c,0,ea,0,0);} // 800C0D20
  {uint32_t ea=c->r[30]+0x00000024u; psq_load(c,0,ea,1,0);} // 800C0D24
  {double t0=-c->f[0], t1=-c->ps1[0]; c->f[0]=t0; c->ps1[0]=t1;} // 800C0D28
  {uint32_t ea=c->r[4]+0x00000008u; psq_store(c,0,ea,1,0);} // 800C0D2C
  c->r[3]=c->r[1]+0x00000048u; // 800C0D30
  c->lr=0x800C0D38u; f_8005CD7C(c); // 800C0D34
  c->r[3]=c->r[1]+0x00000078u; // 800C0D38
  c->r[4]=c->r[1]+0x00000048u; // 800C0D3C
  c->lr=0x800C0D44u; f_8005DC84(c); // 800C0D40
  c->r[3]=c->r[1]+0x00000078u; // 800C0D44
  c->lr=0x800C0D4Cu; f_80061BF0(c); // 800C0D48
  cmps(c,0,(int32_t)c->r[3],0); // 800C0D4C
  if (!crb(c,2)) { goto L_800C0D68; } // 800C0D50
  c->r[3]=c->r[1]+0x00000078u; // 800C0D54
  c->r[5]=0u+0x806A0000u; // 800C0D58
  c->r[4]=c->r[3]|c->r[3]; // 800C0D5C
  c->r[5]=c->r[5]+0x00000AA8u; // 800C0D60
  c->lr=0x800C0D68u; f_8030E0BC(c); // 800C0D64
L_800C0D68:;
  c->r[4]=c->r[29]|c->r[29]; // 800C0D68
  c->r[3]=c->r[1]+0x0000006Cu; // 800C0D6C
  c->lr=0x800C0D74u; f_8005DC84(c); // 800C0D70
  c->r[3]=c->r[1]+0x0000006Cu; // 800C0D74
  c->lr=0x800C0D7Cu; f_80061BF0(c); // 800C0D78
  cmps(c,0,(int32_t)c->r[3],0); // 800C0D7C
  if (!crb(c,2)) { goto L_800C0D98; } // 800C0D80
  c->r[3]=c->r[1]+0x0000006Cu; // 800C0D84
  c->r[5]=0u+0x806A0000u; // 800C0D88
  c->r[4]=c->r[3]|c->r[3]; // 800C0D8C
  c->r[5]=c->r[5]+0x00000AA8u; // 800C0D90
  c->lr=0x800C0D98u; f_8030E0BC(c); // 800C0D94
L_800C0D98:;
  c->r[3]=c->r[1]+0x00000078u; // 800C0D98
  c->r[4]=c->r[1]+0x0000006Cu; // 800C0D9C
  c->lr=0x800C0DA4u; f_800B3F44(c); // 800C0DA0
  {uint32_t ea=c->r[2]+0xFFFFA168u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C0DA4
  c->r[3]=c->r[1]+0x00000018u; // 800C0DA8
  c->r[4]=c->r[1]+0x0000006Cu; // 800C0DAC
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[1]); // 800C0DB0
  c->lr=0x800C0DB8u; f_8005ED34(c); // 800C0DB4
  c->r[3]=c->r[1]+0x00000024u; // 800C0DB8
  c->r[4]=c->r[1]+0x00000018u; // 800C0DBC
  c->r[5]=c->r[1]+0x00000078u; // 800C0DC0
  c->lr=0x800C0DC8u; f_800772A0(c); // 800C0DC4
  c->f[1]=c->f[31]; // 800C0DC8
  c->r[3]=c->r[1]+0x00000030u; // 800C0DCC
  c->r[4]=c->r[1]+0x00000024u; // 800C0DD0
  c->lr=0x800C0DD8u; f_8005ED34(c); // 800C0DD4
  c->f[1]=c->f[30]; // 800C0DD8
  c->r[3]=c->r[1]+0x0000003Cu; // 800C0DDC
  c->r[4]=c->r[1]+0x00000030u; // 800C0DE0
  c->lr=0x800C0DE8u; f_8005ED34(c); // 800C0DE4
  c->r[3]=c->r[30]+0x0000001Cu; // 800C0DE8
  c->r[4]=c->r[1]+0x0000003Cu; // 800C0DEC
  c->lr=0x800C0DF4u; f_8005DC84(c); // 800C0DF0
  {uint32_t ea=c->r[2]+0xFFFFA154u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C0DF4
  fcmp(c,0,c->f[31],c->f[0]); // 800C0DF8
  if (!crb(c,1)) { goto L_800C0EC8; } // 800C0DFC
  c->lr=0x800C0E04u; f_803B220C(c); // 800C0E00
  c->r[0]=c->r[3]^0x80000000u; // 800C0E04
  c->r[31]=0u+0x43300000u; // 800C0E08
  W32(c->r[1]+0x000000BCu,c->r[0]); // 800C0E0C
  {uint32_t ea=c->r[2]+0xFFFFA118u; c->f[3]=RF64(ea);} // 800C0E10
  W32(c->r[1]+0x000000B8u,c->r[31]); // 800C0E14
  {uint32_t ea=c->r[2]+0xFFFFA108u; c->f[1]=c->ps1[1]=RF32(ea);} // 800C0E18
  {uint32_t ea=c->r[1]+0x000000B8u; c->f[2]=RF64(ea);} // 800C0E1C
  {uint32_t ea=c->r[2]+0xFFFFA100u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C0E20
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[3]); // 800C0E24
  c->f[0]=c->ps1[0]=S(std::fma(c->f[1],c->f[2],-c->f[0])); // 800C0E28
  {uint32_t ea=c->r[30]+0x00000028u; WF32(ea,c->f[0]);} // 800C0E2C
  c->lr=0x800C0E34u; f_803B220C(c); // 800C0E30
  c->r[0]=c->r[3]^0x80000000u; // 800C0E34
  W32(c->r[1]+0x000000C4u,c->r[0]); // 800C0E38
  {uint32_t ea=c->r[2]+0xFFFFA118u; c->f[3]=RF64(ea);} // 800C0E3C
  W32(c->r[1]+0x000000C0u,c->r[31]); // 800C0E40
  {uint32_t ea=c->r[2]+0xFFFFA108u; c->f[1]=c->ps1[1]=RF32(ea);} // 800C0E44
  {uint32_t ea=c->r[1]+0x000000C0u; c->f[2]=RF64(ea);} // 800C0E48
  {uint32_t ea=c->r[2]+0xFFFFA100u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C0E4C
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[3]); // 800C0E50
  c->f[0]=c->ps1[0]=S(std::fma(c->f[1],c->f[2],-c->f[0])); // 800C0E54
  {uint32_t ea=c->r[30]+0x0000002Cu; WF32(ea,c->f[0]);} // 800C0E58
  c->lr=0x800C0E60u; f_803B220C(c); // 800C0E5C
  c->r[0]=c->r[3]^0x80000000u; // 800C0E60
  W32(c->r[1]+0x000000CCu,c->r[0]); // 800C0E64
  {uint32_t ea=c->r[2]+0xFFFFA118u; c->f[3]=RF64(ea);} // 800C0E68
  c->r[3]=c->r[30]+0x00000028u; // 800C0E6C
  W32(c->r[1]+0x000000C8u,c->r[31]); // 800C0E70
  {uint32_t ea=c->r[2]+0xFFFFA108u; c->f[1]=c->ps1[1]=RF32(ea);} // 800C0E74
  {uint32_t ea=c->r[1]+0x000000C8u; c->f[2]=RF64(ea);} // 800C0E78
  {uint32_t ea=c->r[2]+0xFFFFA100u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C0E7C
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[3]); // 800C0E80
  c->f[0]=c->ps1[0]=S(std::fma(c->f[1],c->f[2],-c->f[0])); // 800C0E84
  {uint32_t ea=c->r[30]+0x00000030u; WF32(ea,c->f[0]);} // 800C0E88
  c->lr=0x800C0E90u; f_80061BF0(c); // 800C0E8C
  cmps(c,0,(int32_t)c->r[3],0); // 800C0E90
  if (!crb(c,2)) { goto L_800C0EB0; } // 800C0E94
  c->r[3]=c->r[30]+0x00000028u; // 800C0E98
  c->r[5]=0u+0x806A0000u; // 800C0E9C
  c->r[4]=c->r[3]|c->r[3]; // 800C0EA0
  c->r[5]=c->r[5]+0x00000AA8u; // 800C0EA4
  c->lr=0x800C0EACu; f_8030E0BC(c); // 800C0EA8
  goto L_800C0F1C; // 800C0EAC
L_800C0EB0:;
  {uint32_t ea=c->r[2]+0xFFFFA0F8u; c->f[1]=c->ps1[1]=RF32(ea);} // 800C0EB0
  {uint32_t ea=c->r[30]+0x00000028u; WF32(ea,c->f[1]);} // 800C0EB4
  {uint32_t ea=c->r[2]+0xFFFFA100u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C0EB8
  {uint32_t ea=c->r[30]+0x0000002Cu; WF32(ea,c->f[1]);} // 800C0EBC
  {uint32_t ea=c->r[30]+0x00000030u; WF32(ea,c->f[0]);} // 800C0EC0
  goto L_800C0F1C; // 800C0EC4
L_800C0EC8:;
  c->r[3]=c->r[1]+0x00000088u; // 800C0EC8
  c->lr=0x800C0ED0u; f_80382F00(c); // 800C0ECC
  {uint32_t ea=c->r[31]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C0ED0
  c->r[4]=c->r[27]|c->r[27]; // 800C0ED4
  {uint32_t ea=c->r[1]+0x00000094u; WF32(ea,c->f[0]);} // 800C0ED8
  c->r[3]=c->r[25]+0x000000B8u; // 800C0EDC
  c->r[5]=c->r[1]+0x00000088u; // 800C0EE0
  {uint32_t ea=c->r[31]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C0EE4
  {uint32_t ea=c->r[1]+0x000000A4u; WF32(ea,c->f[0]);} // 800C0EE8
  {uint32_t ea=c->r[31]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C0EEC
  {uint32_t ea=c->r[1]+0x000000B4u; WF32(ea,c->f[0]);} // 800C0EF0
  c->lr=0x800C0EF8u; f_800AECAC(c); // 800C0EF4
  c->r[0]=0u+0x00000000u; // 800C0EF8
  W8(c->r[1]+0x00000008u,c->r[0]); // 800C0EFC
  c->r[3]=c->r[1]+0x00000008u; // 800C0F00
  c->lr=0x800C0F08u; f_80046D50(c); // 800C0F04
  c->lr=0x800C0F0Cu; f_8008CD00(c); // 800C0F08
  c->r[4]=c->r[3]|c->r[3]; // 800C0F0C
  c->r[3]=c->r[25]|c->r[25]; // 800C0F10
  c->r[5]=c->r[27]|c->r[27]; // 800C0F14
  c->lr=0x800C0F1Cu; f_800BED08(c); // 800C0F18
L_800C0F1C:;
  c->r[11]=c->r[1]+0x000000F0u; // 800C0F1C
  {uint32_t ea=c->r[1]+0x00000108u; psq_load(c,31,ea,0,0);} // 800C0F20
  {uint32_t ea=c->r[1]+0x00000100u; c->f[31]=RF64(ea);} // 800C0F24
  {uint32_t ea=c->r[1]+0x000000F8u; psq_load(c,30,ea,0,0);} // 800C0F28
  {uint32_t ea=c->r[1]+0x000000F0u; c->f[30]=RF64(ea);} // 800C0F2C
  c->lr=0x800C0F34u; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800C0F30
  c->r[0]=R32(c->r[1]+0x00000114u); // 800C0F34
  c->lr=c->r[0]; // 800C0F38
  c->r[1]=c->r[1]+0x00000110u; // 800C0F3C
  return; // 800C0F40
}

// fn_800C0F44
void f_800C0F44(Ctx* __restrict c) {
  trace_call(0x800C0F44u);
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C0F44
  c->r[0]=c->lr; // 800C0F48
  W32(c->r[1]+0x00000064u,c->r[0]); // 800C0F4C
  c->r[11]=c->r[1]+0x00000060u; // 800C0F50
  c->lr=0x800C0F58u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800C0F54
  c->r[31]=0u+0x00000000u; // 800C0F58
  W8(c->r[1]+0x00000010u,c->r[31]); // 800C0F5C
  c->r[27]=c->r[3]|c->r[3]; // 800C0F60
  c->r[28]=c->r[4]|c->r[4]; // 800C0F64
  c->r[29]=c->r[5]|c->r[5]; // 800C0F68
  c->r[30]=c->r[6]|c->r[6]; // 800C0F6C
  c->r[3]=c->r[1]+0x00000010u; // 800C0F70
  c->lr=0x800C0F78u; f_8004E2A0(c); // 800C0F74
  {uint32_t ea=c->r[2]+0xFFFFA100u; c->f[1]=c->ps1[1]=RF32(ea);} // 800C0F78
  c->r[6]=c->r[29]|c->r[29]; // 800C0F7C
  c->r[4]=0u+0x00000005u; // 800C0F80
  c->r[5]=0u+0x00000001u; // 800C0F84
  c->lr=0x800C0F8Cu; f_800ADAE4(c); // 800C0F88
  W8(c->r[1]+0x0000000Cu,c->r[31]); // 800C0F8C
  c->r[3]=c->r[1]+0x0000000Cu; // 800C0F90
  c->lr=0x800C0F98u; f_8004E2A0(c); // 800C0F94
  c->r[6]=c->r[29]|c->r[29]; // 800C0F98
  c->r[7]=c->r[30]|c->r[30]; // 800C0F9C
  c->r[4]=0u+0x00000005u; // 800C0FA0
  c->r[5]=0u+0x00000000u; // 800C0FA4
  c->lr=0x800C0FACu; f_800ADC44(c); // 800C0FA8
  c->r[3]=c->r[1]+0x00000018u; // 800C0FAC
  c->lr=0x800C0FB4u; f_80382F00(c); // 800C0FB0
  {uint32_t ea=c->r[29]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C0FB4
  c->r[4]=c->r[28]|c->r[28]; // 800C0FB8
  {uint32_t ea=c->r[1]+0x00000024u; WF32(ea,c->f[0]);} // 800C0FBC
  c->r[3]=c->r[27]+0x000000B8u; // 800C0FC0
  c->r[5]=c->r[1]+0x00000018u; // 800C0FC4
  {uint32_t ea=c->r[29]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C0FC8
  {uint32_t ea=c->r[1]+0x00000034u; WF32(ea,c->f[0]);} // 800C0FCC
  {uint32_t ea=c->r[29]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C0FD0
  {uint32_t ea=c->r[1]+0x00000044u; WF32(ea,c->f[0]);} // 800C0FD4
  c->lr=0x800C0FDCu; f_800AECAC(c); // 800C0FD8
  W8(c->r[1]+0x00000008u,c->r[31]); // 800C0FDC
  c->r[3]=c->r[1]+0x00000008u; // 800C0FE0
  c->lr=0x800C0FE8u; f_80046D50(c); // 800C0FE4
  c->lr=0x800C0FECu; f_8008CD00(c); // 800C0FE8
  c->r[4]=c->r[3]|c->r[3]; // 800C0FEC
  c->r[3]=c->r[27]|c->r[27]; // 800C0FF0
  c->r[5]=c->r[28]|c->r[28]; // 800C0FF4
  c->lr=0x800C0FFCu; f_800BED08(c); // 800C0FF8
  c->r[11]=c->r[1]+0x00000060u; // 800C0FFC
  c->lr=0x800C1004u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800C1000
  c->r[0]=R32(c->r[1]+0x00000064u); // 800C1004
  c->lr=c->r[0]; // 800C1008
  c->r[1]=c->r[1]+0x00000060u; // 800C100C
  return; // 800C1010
}

// fn_800C1014
void f_800C1014(Ctx* __restrict c) {
  trace_call(0x800C1014u);
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C1014
  c->r[0]=c->lr; // 800C1018
  W32(c->r[1]+0x00000064u,c->r[0]); // 800C101C
  c->r[11]=c->r[1]+0x00000060u; // 800C1020
  c->lr=0x800C1028u; { W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800C1024
  c->r[5]=0u+0x80690000u; // 800C1028
  c->r[0]=0u+0x00000004u; // 800C102C
  c->r[5]=c->r[5]+0xFFFFE49Cu; // 800C1030
  c->r[29]=c->r[3]|c->r[3]; // 800C1034
  c->r[30]=c->r[4]|c->r[4]; // 800C1038
  c->r[6]=c->r[1]+0x00000020u; // 800C103C
  c->r[5]=c->r[5]+0xFFFFFFFCu; // 800C1040
  c->ctr=c->r[0]; // 800C1044
L_800C1048:;
  c->r[4]=R32(c->r[5]+0x00000004u); // 800C1048
  {uint32_t ea=c->r[5]+0x00000008u; c->r[0]=R32(ea); c->r[5]=ea;} // 800C104C
  W32(c->r[6]+0x00000004u,c->r[4]); // 800C1050
  {uint32_t ea=c->r[6]+0x00000008u; W32(ea,c->r[0]); c->r[6]=ea;} // 800C1054
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800C1048; } // 800C1058
  c->r[0]=R32(c->r[5]+0x00000004u); // 800C105C
  c->r[4]=c->r[30]|c->r[30]; // 800C1060
  W32(c->r[6]+0x00000004u,c->r[0]); // 800C1064
  c->r[3]=c->r[3]+0x000000B8u; // 800C1068
  c->lr=0x800C1070u; f_800AEDAC(c); // 800C106C
  c->r[31]=c->r[3]|c->r[3]; // 800C1070
  c->r[3]=c->r[1]+0x00000018u; // 800C1074
  {uint32_t ea=c->r[31]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800C1078
  {uint32_t ea=c->r[31]+0x0000001Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 800C107C
  {uint32_t ea=c->r[31]+0x0000002Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 800C1080
  c->lr=0x800C1088u; f_8005A6D0(c); // 800C1084
  {uint32_t ea=c->r[31]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 800C1088
  c->r[3]=c->r[1]+0x0000000Cu; // 800C108C
  {uint32_t ea=c->r[31]+0x00000014u; c->f[2]=c->ps1[2]=RF32(ea);} // 800C1090
  {uint32_t ea=c->r[31]+0x00000024u; c->f[3]=c->ps1[3]=RF32(ea);} // 800C1094
  c->lr=0x800C109Cu; f_8005A6D0(c); // 800C1098
  c->r[3]=0u+0x80690000u; // 800C109C
  {uint32_t ea=c->r[2]+0xFFFFA100u; c->f[1]=c->ps1[1]=RF32(ea);} // 800C10A0
  c->r[3]=c->r[3]+0xFFFFE4C0u; // 800C10A4
  c->r[4]=c->r[1]+0x00000018u; // 800C10A8
  c->r[3]=c->r[3]+0x0000008Cu; // 800C10AC
  c->r[5]=0u+0xFFFFFFFFu; // 800C10B0
  c->lr=0x800C10B8u; f_800AC630(c); // 800C10B4
  c->r[0]=0u+0x00000000u; // 800C10B8
  W8(c->r[1]+0x00000008u,c->r[0]); // 800C10BC
  c->r[3]=c->r[1]+0x00000008u; // 800C10C0
  c->lr=0x800C10C8u; f_8004E2A0(c); // 800C10C4
  c->r[6]=c->r[1]+0x00000018u; // 800C10C8
  c->r[7]=c->r[1]+0x0000000Cu; // 800C10CC
  c->r[4]=0u+0x00000002u; // 800C10D0
  c->r[5]=0u+0x00000000u; // 800C10D4
  c->lr=0x800C10DCu; f_800ADC44(c); // 800C10D8
  {uint32_t ea=c->r[2]+0xFFFFA110u; c->f[1]=c->ps1[1]=RF32(ea);} // 800C10DC
  c->r[3]=c->r[29]|c->r[29]; // 800C10E0
  {uint32_t ea=c->r[2]+0xFFFFA16Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 800C10E4
  c->r[4]=c->r[30]|c->r[30]; // 800C10E8
  c->lr=0x800C10F0u; f_800C0364(c); // 800C10EC
  c->r[0]=(uint32_t)((int32_t)c->r[30]*(int32_t)100); // 800C10F0
  c->r[3]=R32(c->r[29]+0x000000ACu); // 800C10F4
  {uint32_t ea=c->r[2]+0xFFFFA14Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800C10F8
  c->r[6]=c->r[3]+c->r[0]; // 800C10FC
  {uint32_t ea=c->r[6]+0x0000004Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800C1100
  fcmp(c,0,c->f[1],c->f[0]); // 800C1104
  setcrb(c,2,crb(c,1)|crb(c,2)); // 800C1108
  if (!crb(c,2)) { goto L_800C1114; } // 800C110C
  {uint32_t ea=c->r[6]+0x0000004Cu; WF32(ea,c->f[0]);} // 800C1110
L_800C1114:;
  c->r[5]=R32(c->r[6]+0x00000040u); // 800C1114
  c->r[4]=0u+0x43300000u; // 800C1118
  c->r[0]=R32(c->r[6]+0x00000054u); // 800C111C
  c->r[3]=c->r[1]+0x00000024u; // 800C1120
  c->r[5]=c->r[5]^0x80000000u; // 800C1124
  W32(c->r[1]+0x0000004Cu,c->r[5]); // 800C1128
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800C112C
  {uint32_t ea=c->r[2]+0xFFFFA118u; c->f[3]=RF64(ea);} // 800C1130
  W32(c->r[1]+0x00000048u,c->r[4]); // 800C1134
  {uint32_t ea=c->r[3]+c->r[0]; c->f[2]=c->ps1[2]=RF32(ea);} // 800C1138
  {uint32_t ea=c->r[1]+0x00000048u; c->f[0]=RF64(ea);} // 800C113C
  {uint32_t ea=c->r[6]+0x00000050u; c->f[1]=c->ps1[1]=RF32(ea);} // 800C1140
  c->f[3]=c->ps1[3]=S(c->f[0]-c->f[3]); // 800C1144
  {uint32_t ea=c->r[2]+0xFFFFA170u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C1148
  c->f[1]=c->ps1[1]=S(std::fma(c->f[3],c->f[2],c->f[1])); // 800C114C
  {uint32_t ea=c->r[6]+0x00000050u; WF32(ea,c->f[1]);} // 800C1150
  fcmp(c,0,c->f[1],c->f[0]); // 800C1154
  if (!crb(c,1)) { goto L_800C1160; } // 800C1158
  {uint32_t ea=c->r[6]+0x00000050u; WF32(ea,c->f[0]);} // 800C115C
L_800C1160:;
  c->r[3]=R32(c->r[6]+0x00000054u); // 800C1160
  c->r[0]=c->r[3]+0x00000001u; // 800C1164
  W32(c->r[6]+0x00000054u,c->r[0]); // 800C1168
  cmps(c,0,(int32_t)c->r[0],9); // 800C116C
  if (crb(c,0)) { goto L_800C117C; } // 800C1170
  c->r[0]=0u+0x00000008u; // 800C1174
  W32(c->r[6]+0x00000054u,c->r[0]); // 800C1178
L_800C117C:;
  c->r[11]=c->r[1]+0x00000060u; // 800C117C
  c->lr=0x800C1184u; { c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800C1180
  c->r[0]=R32(c->r[1]+0x00000064u); // 800C1184
  c->lr=c->r[0]; // 800C1188
  c->r[1]=c->r[1]+0x00000060u; // 800C118C
  return; // 800C1190
}

// fn_800C1194
void f_800C1194(Ctx* __restrict c) {
  trace_call(0x800C1194u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C1194
  c->r[0]=c->lr; // 800C1198
  c->r[6]=0u+0x806D0000u; // 800C119C
  c->r[4]=0u+0x800C0000u; // 800C11A0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800C11A4
  c->r[5]=0u+0x800C0000u; // 800C11A8
  c->r[6]=c->r[6]+0x00007190u; // 800C11AC
  c->r[4]=c->r[4]+0x00002188u; // 800C11B0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800C11B4
  c->r[31]=c->r[3]|c->r[3]; // 800C11B8
  c->r[5]=c->r[5]+0x000021E4u; // 800C11BC
  c->r[7]=0u+0x00000002u; // 800C11C0
  W32(c->r[3]+0x00000000u,c->r[6]); // 800C11C4
  c->r[6]=0u+0x00000078u; // 800C11C8
  c->r[3]=c->r[3]+0x00000004u; // 800C11CC
  c->lr=0x800C11D4u; f_803A9830(c); // 800C11D0
  c->r[3]=c->r[31]+0x00000104u; // 800C11D4
  c->lr=0x800C11DCu; f_803209E8(c); // 800C11D8
  c->r[3]=c->r[31]|c->r[31]; // 800C11DC
  c->lr=0x800C11E4u; f_800C19A0(c); // 800C11E0
  c->r[3]=c->r[31]|c->r[31]; // 800C11E4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800C11E8
  c->r[0]=R32(c->r[1]+0x00000014u); // 800C11EC
  c->lr=c->r[0]; // 800C11F0
  c->r[1]=c->r[1]+0x00000010u; // 800C11F4
  return; // 800C11F8
}

// dtor_800C11FC
void f_800C11FC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C11FC
  c->r[0]=c->lr; // 800C1200
  cmps(c,0,(int32_t)c->r[3],0); // 800C1204
  W32(c->r[1]+0x00000014u,c->r[0]); // 800C1208
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800C120C
  c->r[31]=c->r[3]|c->r[3]; // 800C1210
  if (crb(c,2)) { goto L_800C1230; } // 800C1214
  c->r[4]=0u+0x800C0000u; // 800C1218
  c->r[5]=0u+0x00000078u; // 800C121C
  c->r[4]=c->r[4]+0x000021E4u; // 800C1220
  c->r[6]=0u+0x00000002u; // 800C1224
  c->r[3]=c->r[3]+0x00000004u; // 800C1228
  c->lr=0x800C1230u; f_803A9928(c); // 800C122C
L_800C1230:;
  c->r[3]=c->r[31]|c->r[31]; // 800C1230
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800C1234
  c->r[0]=R32(c->r[1]+0x00000014u); // 800C1238
  c->lr=c->r[0]; // 800C123C
  c->r[1]=c->r[1]+0x00000010u; // 800C1240
  return; // 800C1244
}

// fn_800C1248
void f_800C1248(Ctx* __restrict c) {
  trace_call(0x800C1248u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C1248
  c->r[0]=c->lr; // 800C124C
  W32(c->r[1]+0x00000024u,c->r[0]); // 800C1250
  c->r[11]=c->r[1]+0x00000020u; // 800C1254
  c->lr=0x800C125Cu; { W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800C1258
  cmpu(c,0,c->r[4],0x00000001u); // 800C125C
  c->r[28]=c->r[3]|c->r[3]; // 800C1260
  c->r[29]=c->r[4]|c->r[4]; // 800C1264
  if (!crb(c,1)) { goto L_800C1270; } // 800C1268
  c->r[29]=0u+0x00000000u; // 800C126C
L_800C1270:;
  c->r[30]=0u+0x00000000u; // 800C1270
  c->r[31]=0u+0x00000000u; // 800C1274
L_800C1278:;
  c->r[3]=c->r[28]+c->r[31]; // 800C1278
  c->r[4]=c->r[29]|c->r[29]; // 800C127C
  c->r[5]=c->r[30]|c->r[30]; // 800C1280
  c->r[3]=c->r[3]+0x00000004u; // 800C1284
  c->lr=0x800C128Cu; f_800C2224(c); // 800C1288
  c->r[30]=c->r[30]+0x00000001u; // 800C128C
  c->r[31]=c->r[31]+0x00000078u; // 800C1290
  cmps(c,0,(int32_t)c->r[30],2); // 800C1294
  if (crb(c,0)) { IRQCHK(c); goto L_800C1278; } // 800C1298
  {uint32_t ea=c->r[2]+0xFFFFA178u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C129C
  c->r[5]=0u+0x00000000u; // 800C12A0
  c->r[0]=0u+0xFFFFFFFFu; // 800C12A4
  {uint32_t ea=c->r[28]+0x000000F4u; WF32(ea,c->f[0]);} // 800C12A8
  c->r[3]=c->r[28]+0x00000104u; // 800C12AC
  c->r[4]=0u+0x00000001u; // 800C12B0
  W32(c->r[28]+0x000000F8u,c->r[5]); // 800C12B4
  W32(c->r[28]+0x000000FCu,c->r[29]); // 800C12B8
  W32(c->r[28]+0x00000100u,c->r[0]); // 800C12BC
  c->lr=0x800C12C4u; f_80320C3C(c); // 800C12C0
  {uint32_t ea=c->r[2]+0xFFFFA178u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C12C4
  c->r[11]=c->r[1]+0x00000020u; // 800C12C8
  {uint32_t ea=c->r[28]+0x00000140u; WF32(ea,c->f[0]);} // 800C12CC
  {uint32_t ea=c->r[28]+0x00000144u; WF32(ea,c->f[0]);} // 800C12D0
  c->lr=0x800C12D8u; { c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800C12D4
  c->r[0]=R32(c->r[1]+0x00000024u); // 800C12D8
  c->lr=c->r[0]; // 800C12DC
  c->r[1]=c->r[1]+0x00000020u; // 800C12E0
  return; // 800C12E4
}

// fn_800C12E8
void f_800C12E8(Ctx* __restrict c) {
  trace_call(0x800C12E8u);
  {uint32_t ea=c->r[1]+0xFFFFFF80u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C12E8
  c->r[0]=c->lr; // 800C12EC
  W32(c->r[1]+0x00000084u,c->r[0]); // 800C12F0
  c->r[11]=c->r[1]+0x00000070u; // 800C12F4
  {uint32_t ea=c->r[1]+0x00000070u; WF64(ea,c->f[31]);} // 800C12F8
  {uint32_t ea=c->r[1]+0x00000078u; psq_store(c,31,ea,0,0);} // 800C12FC
  c->lr=0x800C1304u; { W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800C1300
  c->r[0]=R32(c->r[3]+0x000000FCu); // 800C1304
  c->r[31]=c->r[3]|c->r[3]; // 800C1308
  c->r[28]=c->r[4]|c->r[4]; // 800C130C
  cmps(c,0,(int32_t)c->r[0],0); // 800C1310
  if (crb(c,0)) { goto L_800C1500; } // 800C1314
  c->r[29]=0u+0x00000000u; // 800C1318
  c->r[30]=0u+0x00000000u; // 800C131C
L_800C1320:;
  c->r[3]=c->r[31]+c->r[30]; // 800C1320
  c->r[3]=c->r[3]+0x00000004u; // 800C1324
  c->lr=0x800C132Cu; f_800C22B0(c); // 800C1328
  c->r[29]=c->r[29]+0x00000001u; // 800C132C
  c->r[30]=c->r[30]+0x00000078u; // 800C1330
  cmps(c,0,(int32_t)c->r[29],2); // 800C1334
  if (crb(c,0)) { IRQCHK(c); goto L_800C1320; } // 800C1338
  c->r[30]=0u+0x00000000u; // 800C133C
  W8(c->r[1]+0x00000030u,c->r[30]); // 800C1340
  c->r[3]=c->r[1]+0x00000030u; // 800C1344
  c->lr=0x800C134Cu; f_80046F74(c); // 800C1348
  c->r[4]=R32(c->r[31]+0x000000FCu); // 800C134C
  c->r[5]=0u+0xFFFFFFFFu; // 800C1350
  c->lr=0x800C1358u; f_800BFA84(c); // 800C1354
  cmps(c,0,(int32_t)c->r[28],0); // 800C1358
  if (crb(c,2)) { goto L_800C1500; } // 800C135C
  W8(c->r[1]+0x0000002Cu,c->r[30]); // 800C1360
  c->r[3]=c->r[1]+0x0000002Cu; // 800C1364
  c->lr=0x800C136Cu; f_80047A80(c); // 800C1368
  c->r[3]=R32(c->r[3]+0x00000004u); // 800C136C
  c->lr=0x800C1374u; f_804CC8D4(c); // 800C1370
  W32(c->r[1]+0x00000034u,c->r[3]); // 800C1374
  c->r[3]=c->r[1]+0x00000034u; // 800C1378
  c->r[4]=c->r[1]+0x00000048u; // 800C137C
  c->lr=0x800C1384u; f_804C7AC0(c); // 800C1380
  W8(c->r[1]+0x00000028u,c->r[30]); // 800C1384
  c->r[3]=c->r[1]+0x00000028u; // 800C1388
  c->lr=0x800C1390u; f_80046EFC(c); // 800C138C
  c->r[4]=R32(c->r[31]+0x000000FCu); // 800C1390
  c->r[5]=c->r[1]+0x0000003Cu; // 800C1394
  c->r[6]=0u+0x00000000u; // 800C1398
  c->r[7]=0u+0x00000000u; // 800C139C
  c->r[8]=0u+0x00000000u; // 800C13A0
  c->r[9]=0u+0x00000000u; // 800C13A4
  c->lr=0x800C13ACu; f_800B2400(c); // 800C13A8
  c->r[0]=rotl(c->r[3],0)&0x00000010u; cr0(c,c->r[0]); // 800C13AC
  if (crb(c,2)) { goto L_800C1500; } // 800C13B0
  W8(c->r[1]+0x00000024u,c->r[30]); // 800C13B4
  c->r[3]=c->r[1]+0x00000024u; // 800C13B8
  c->lr=0x800C13C0u; f_80046EFC(c); // 800C13BC
  c->r[4]=R32(c->r[31]+0x000000FCu); // 800C13C0
  c->lr=0x800C13C8u; f_80046DC8(c); // 800C13C4
  c->lr=0x800C13CCu; f_800AC73C(c); // 800C13C8
  c->lr=0x800C13D0u; f_800B0548(c); // 800C13CC
  {uint32_t ea=c->r[3]+0x00000004u; c->f[31]=c->ps1[31]=RF32(ea);} // 800C13D0
  c->r[3]=c->r[1]+0x00000020u; // 800C13D4
  W8(c->r[1]+0x00000020u,c->r[30]); // 800C13D8
  c->lr=0x800C13E0u; f_80046EFC(c); // 800C13DC
  W32(c->r[1]+0x00000008u,c->r[30]); // 800C13E0
  c->r[4]=c->r[1]+0x00000038u; // 800C13E4
  c->r[0]=0u+0x00000019u; // 800C13E8
  c->f[1]=c->f[31]; // 800C13EC
  W32(c->r[1]+0x0000000Cu,c->r[4]); // 800C13F0
  c->r[5]=c->r[1]+0x00000048u; // 800C13F4
  c->r[6]=c->r[1]+0x0000003Cu; // 800C13F8
  c->r[7]=0u+0x00000010u; // 800C13FC
  W32(c->r[1]+0x00000010u,c->r[0]); // 800C1400
  c->r[8]=0u+0x00000000u; // 800C1404
  c->r[9]=0u+0x00000000u; // 800C1408
  c->r[4]=R32(c->r[31]+0x000000FCu); // 800C140C
  c->r[10]=0u+0x00000000u; // 800C1410
  c->lr=0x800C1418u; f_800B1EB0(c); // 800C1414
  c->r[0]=rotl(c->r[3],0)&0x00000010u; cr0(c,c->r[0]); // 800C1418
  if (crb(c,2)) { goto L_800C1500; } // 800C141C
  c->r[0]=R8(c->r[13]+0xFFFFBB99u); // 800C1420
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800C1424
  if (!crb(c,2)) { goto L_800C146C; } // 800C1428
  c->r[30]=0u+0x80730000u; // 800C142C
  c->r[3]=c->r[30]+0x000069C0u; // 800C1430
  c->lr=0x800C1438u; f_8029D954(c); // 800C1434
  c->r[6]=0u+0x806D0000u; // 800C1438
  c->r[4]=0u+0x80050000u; // 800C143C
  c->r[6]=c->r[6]+0xFFFFC240u; // 800C1440
  c->r[3]=c->r[30]+0x000069C0u; // 800C1444
  c->r[0]=c->r[6]+0x00000008u; // 800C1448
  c->r[5]=0u+0x80750000u; // 800C144C
  W32(c->r[3]+0x00000010u,c->r[6]); // 800C1450
  c->r[4]=c->r[4]+0xFFFF9DB8u; // 800C1454
  c->r[5]=c->r[5]+0x00003758u; // 800C1458
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 800C145C
  c->lr=0x800C1464u; f_803A92B8(c); // 800C1460
  c->r[0]=0u+0x00000001u; // 800C1464
  W8(c->r[13]+0xFFFFBB99u,c->r[0]); // 800C1468
L_800C146C:;
  c->r[6]=R32(c->r[31]+0x000000FCu); // 800C146C
  c->r[3]=0u+0x80730000u; // 800C1470
  c->r[3]=c->r[3]+0x000069C0u; // 800C1474
  cmps(c,0,(int32_t)c->r[6],0); // 800C1478
  c->r[0]=c->r[6]|c->r[6]; // 800C147C
  if (!crb(c,0)) { goto L_800C1488; } // 800C1480
  c->r[0]=R32(c->r[3]+0x00000030u); // 800C1484
L_800C1488:;
  cmpu(c,0,c->r[0],0x00000003u); // 800C1488
  if (!crb(c,1)) { goto L_800C1494; } // 800C148C
  c->r[0]=0u+0x00000000u; // 800C1490
L_800C1494:;
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)10904); // 800C1494
  c->r[5]=R32(c->r[3]+0x00000014u); // 800C1498
  c->r[3]=0u+0x80740000u; // 800C149C
  c->r[4]=0u+0x00000005u; // 800C14A0
  c->r[5]=c->r[5]+c->r[0]; // 800C14A4
  c->r[3]=c->r[3]+0x00004C10u; // 800C14A8
  c->r[0]=(uint32_t)((int32_t)c->r[6]*(int32_t)120); // 800C14AC
  c->r[30]=R32(c->r[5]+0x0000000Cu); // 800C14B0
  c->r[3]=c->r[3]+c->r[0]; // 800C14B4
  c->lr=0x800C14BCu; f_80052BC8(c); // 800C14B8
  c->r[0]=c->r[30]&c->r[3]; cr0(c,c->r[0]); // 800C14BC
  if (crb(c,2)) { goto L_800C14E4; } // 800C14C0
  c->r[0]=0u+0x00000000u; // 800C14C4
  W8(c->r[1]+0x0000001Cu,c->r[0]); // 800C14C8
  c->r[3]=c->r[1]+0x0000001Cu; // 800C14CC
  c->lr=0x800C14D4u; f_80046F74(c); // 800C14D0
  c->r[4]=R32(c->r[31]+0x000000FCu); // 800C14D4
  c->r[5]=R32(c->r[1]+0x00000038u); // 800C14D8
  c->lr=0x800C14E0u; f_800BED08(c); // 800C14DC
  goto L_800C1500; // 800C14E0
L_800C14E4:;
  c->r[0]=0u+0x00000000u; // 800C14E4
  W8(c->r[1]+0x00000018u,c->r[0]); // 800C14E8
  c->r[3]=c->r[1]+0x00000018u; // 800C14EC
  c->lr=0x800C14F4u; f_80046F74(c); // 800C14F0
  c->r[4]=R32(c->r[31]+0x000000FCu); // 800C14F4
  c->r[5]=R32(c->r[1]+0x00000038u); // 800C14F8
  c->lr=0x800C1500u; f_800BFA84(c); // 800C14FC
L_800C1500:;
  {uint32_t ea=c->r[31]+0x000000F4u; c->f[1]=c->ps1[1]=RF32(ea);} // 800C1500
  {uint32_t ea=c->r[2]+0xFFFFA178u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C1504
  fcmp(c,0,c->f[1],c->f[0]); // 800C1508
  if (!crb(c,1)) { goto L_800C1580; } // 800C150C
  c->r[0]=R8(c->r[13]+0xFFFFBB9Bu); // 800C1510
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800C1514
  if (!crb(c,2)) { goto L_800C1554; } // 800C1518
  c->r[30]=0u+0x80730000u; // 800C151C
  c->r[3]=c->r[30]+0x00006D10u; // 800C1520
  c->lr=0x800C1528u; f_802D8298(c); // 800C1524
  c->r[3]=0u+0x806D0000u; // 800C1528
  c->r[4]=0u+0x80050000u; // 800C152C
  c->r[3]=c->r[3]+0xFFFFC220u; // 800C1530
  c->r[5]=0u+0x80750000u; // 800C1534
  W32(c->r[30]+0x00006D10u,c->r[3]); // 800C1538
  c->r[3]=c->r[30]+0x00006D10u; // 800C153C
  c->r[4]=c->r[4]+0xFFFF9D40u; // 800C1540
  c->r[5]=c->r[5]+0x00003764u; // 800C1544
  c->lr=0x800C154Cu; f_803A92B8(c); // 800C1548
  c->r[0]=0u+0x00000001u; // 800C154C
  W8(c->r[13]+0xFFFFBB9Bu,c->r[0]); // 800C1550
L_800C1554:;
  c->r[3]=0u+0x80730000u; // 800C1554
  {uint32_t ea=c->r[31]+0x000000F4u; c->f[1]=c->ps1[1]=RF32(ea);} // 800C1558
  c->r[3]=c->r[3]+0x00006D10u; // 800C155C
  {uint32_t ea=c->r[2]+0xFFFFA178u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C1560
  {uint32_t ea=c->r[3]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 800C1564
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 800C1568
  {uint32_t ea=c->r[31]+0x000000F4u; WF32(ea,c->f[1]);} // 800C156C
  fcmp(c,0,c->f[1],c->f[0]); // 800C1570
  setcrb(c,2,crb(c,0)|crb(c,2)); // 800C1574
  if (!crb(c,2)) { goto L_800C1580; } // 800C1578
  {uint32_t ea=c->r[31]+0x000000F4u; WF32(ea,c->f[0]);} // 800C157C
L_800C1580:;
  c->r[11]=c->r[1]+0x00000070u; // 800C1580
  {uint32_t ea=c->r[1]+0x00000078u; psq_load(c,31,ea,0,0);} // 800C1584
  {uint32_t ea=c->r[1]+0x00000070u; c->f[31]=RF64(ea);} // 800C1588
  c->lr=0x800C1590u; { c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800C158C
  c->r[0]=R32(c->r[1]+0x00000084u); // 800C1590
  c->lr=c->r[0]; // 800C1594
  c->r[1]=c->r[1]+0x00000080u; // 800C1598
  return; // 800C159C
}

// fn_800C15A0
void f_800C15A0(Ctx* __restrict c) {
  trace_call(0x800C15A0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C15A0
  c->r[0]=c->lr; // 800C15A4
  W32(c->r[1]+0x00000024u,c->r[0]); // 800C15A8
  c->r[11]=c->r[1]+0x00000020u; // 800C15AC
  c->lr=0x800C15B4u; { W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800C15B0
  c->r[31]=R32(c->r[3]+0x000000FCu); // 800C15B4
  c->r[28]=c->r[3]|c->r[3]; // 800C15B8
  c->r[30]=0u+0x00000000u; // 800C15BC
  cmps(c,0,(int32_t)c->r[31],0); // 800C15C0
  if (crb(c,0)) { goto L_800C169C; } // 800C15C4
  c->r[0]=R32(c->r[3]+0x000000F8u); // 800C15C8
  cmps(c,0,(int32_t)c->r[0],0); // 800C15CC
  if (crb(c,2)) { goto L_800C15E0; } // 800C15D0
  cmps(c,0,(int32_t)c->r[0],1); // 800C15D4
  if (crb(c,2)) { goto L_800C1658; } // 800C15D8
  goto L_800C169C; // 800C15DC
L_800C15E0:;
  c->r[3]=R32(c->r[13]+0xFFFFC218u); // 800C15E0
  c->lr=0x800C15E8u; f_800CEC64(c); // 800C15E4
  c->r[4]=c->r[31]|c->r[31]; // 800C15E8
  c->lr=0x800C15F0u; f_800CD544(c); // 800C15EC
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[3]; cr0(c,c->r[0]); // 800C15F0
  if (!crb(c,2)) { goto L_800C1638; } // 800C15F4
  c->r[29]=0u+0x00000000u; // 800C15F8
  c->r[31]=0u+0x00000000u; // 800C15FC
L_800C1600:;
  c->r[3]=c->r[28]+c->r[31]; // 800C1600
  c->r[3]=c->r[3]+0x00000004u; // 800C1604
  c->lr=0x800C160Cu; f_800C24C4(c); // 800C1608
  cmps(c,0,(int32_t)c->r[3],1); // 800C160C
  if (!crb(c,2)) { goto L_800C1624; } // 800C1610
  c->r[0]=0u+0x00000001u; // 800C1614
  W32(c->r[28]+0x000000F8u,c->r[0]); // 800C1618
  W32(c->r[28]+0x00000100u,c->r[29]); // 800C161C
  goto L_800C169C; // 800C1620
L_800C1624:;
  c->r[29]=c->r[29]+0x00000001u; // 800C1624
  c->r[31]=c->r[31]+0x00000078u; // 800C1628
  cmps(c,0,(int32_t)c->r[29],2); // 800C162C
  if (crb(c,0)) { IRQCHK(c); goto L_800C1600; } // 800C1630
  goto L_800C169C; // 800C1634
L_800C1638:;
  c->r[3]=c->r[28]+0x0000007Cu; // 800C1638
  c->lr=0x800C1640u; f_800C24C4(c); // 800C163C
  cmps(c,0,(int32_t)c->r[3],1); // 800C1640
  if (!crb(c,2)) { goto L_800C169C; } // 800C1644
  c->r[0]=0u+0x00000001u; // 800C1648
  W32(c->r[28]+0x000000F8u,c->r[0]); // 800C164C
  W32(c->r[28]+0x00000100u,c->r[0]); // 800C1650
  goto L_800C169C; // 800C1654
L_800C1658:;
  c->r[0]=R32(c->r[3]+0x00000100u); // 800C1658
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)120); // 800C165C
  c->r[3]=c->r[3]+c->r[0]; // 800C1660
  c->r[3]=c->r[3]+0x00000004u; // 800C1664
  c->lr=0x800C166Cu; f_800C24C4(c); // 800C1668
  cmps(c,0,(int32_t)c->r[3],1); // 800C166C
  if (crb(c,2)) { goto L_800C169C; } // 800C1670
  {uint32_t ea=c->r[28]+0x000000F4u; c->f[1]=c->ps1[1]=RF32(ea);} // 800C1674
  {uint32_t ea=c->r[2]+0xFFFFA178u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C1678
  fcmp(c,0,c->f[1],c->f[0]); // 800C167C
  setcrb(c,2,crb(c,0)|crb(c,2)); // 800C1680
  if (!crb(c,2)) { goto L_800C1694; } // 800C1684
  c->r[3]=c->r[28]|c->r[28]; // 800C1688
  c->lr=0x800C1690u; f_800C1A30(c); // 800C168C
  c->r[30]=0u+0x00000001u; // 800C1690
L_800C1694:;
  c->r[0]=0u+0x00000000u; // 800C1694
  W32(c->r[28]+0x000000F8u,c->r[0]); // 800C1698
L_800C169C:;
  c->r[11]=c->r[1]+0x00000020u; // 800C169C
  c->r[3]=c->r[30]|c->r[30]; // 800C16A0
  c->lr=0x800C16A8u; { c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800C16A4
  c->r[0]=R32(c->r[1]+0x00000024u); // 800C16A8
  c->lr=c->r[0]; // 800C16AC
  c->r[1]=c->r[1]+0x00000020u; // 800C16B0
  return; // 800C16B4
}

// fn_800C16B8
void f_800C16B8(Ctx* __restrict c) {
  trace_call(0x800C16B8u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C16B8
  c->r[0]=c->lr; // 800C16BC
  W32(c->r[1]+0x00000024u,c->r[0]); // 800C16C0
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800C16C4
  c->r[31]=0u+0x00000000u; // 800C16C8
  c->r[29]=c->r[3]|c->r[3]; // 800C16CC
  c->r[30]=0u+0x00000000u; // 800C16D0
  W32(c->r[3]+0x000000F8u,c->r[31]); // 800C16D4
L_800C16D8:;
  c->r[3]=c->r[29]+c->r[31]; // 800C16D8
  c->r[3]=c->r[3]+0x00000004u; // 800C16DC
  c->lr=0x800C16E4u; f_800C2278(c); // 800C16E0
  c->r[30]=c->r[30]+0x00000001u; // 800C16E4
  c->r[31]=c->r[31]+0x00000078u; // 800C16E8
  cmps(c,0,(int32_t)c->r[30],2); // 800C16EC
  if (crb(c,0)) { IRQCHK(c); goto L_800C16D8; } // 800C16F0
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800C16F4
  c->r[0]=R32(c->r[1]+0x00000024u); // 800C16F8
  c->lr=c->r[0]; // 800C16FC
  c->r[1]=c->r[1]+0x00000020u; // 800C1700
  return; // 800C1704
}

// fn_800C1708
void f_800C1708(Ctx* __restrict c) {
  trace_call(0x800C1708u);
  {uint32_t ea=c->r[1]+0xFFFFFF20u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C1708
  c->r[0]=c->lr; // 800C170C
  W32(c->r[1]+0x000000E4u,c->r[0]); // 800C1710
  {uint32_t ea=c->r[1]+0x000000D0u; WF64(ea,c->f[31]);} // 800C1714
  {uint32_t ea=c->r[1]+0x000000D8u; psq_store(c,31,ea,0,0);} // 800C1718
  W32(c->r[1]+0x000000CCu,c->r[31]); // 800C171C
  W32(c->r[1]+0x000000C8u,c->r[30]); // 800C1720
  c->r[30]=c->r[3]|c->r[3]; // 800C1724
  c->r[0]=R32(c->r[3]+0x000000FCu); // 800C1728
  cmps(c,0,(int32_t)c->r[0],0); // 800C172C
  if (crb(c,0)) { goto L_800C1978; } // 800C1730
  c->r[3]=c->r[3]+0x00000104u; // 800C1734
  c->lr=0x800C173Cu; f_80320BEC(c); // 800C1738
  cmps(c,0,(int32_t)c->r[3],0); // 800C173C
  if (crb(c,2)) { goto L_800C1978; } // 800C1740
  c->r[31]=0u+0x00000000u; // 800C1744
  W8(c->r[1]+0x00000010u,c->r[31]); // 800C1748
  c->r[3]=c->r[1]+0x00000010u; // 800C174C
  c->lr=0x800C1754u; f_80047A80(c); // 800C1750
  c->r[3]=R32(c->r[3]+0x00000004u); // 800C1754
  c->lr=0x800C175Cu; f_804CC8D4(c); // 800C1758
  W32(c->r[1]+0x0000001Cu,c->r[3]); // 800C175C
  c->r[3]=c->r[1]+0x0000001Cu; // 800C1760
  c->r[4]=c->r[1]+0x00000030u; // 800C1764
  c->lr=0x800C176Cu; f_804C7FD8(c); // 800C1768
  W8(c->r[1]+0x0000000Cu,c->r[31]); // 800C176C
  c->r[3]=c->r[1]+0x0000000Cu; // 800C1770
  c->lr=0x800C1778u; f_80047A80(c); // 800C1774
  c->r[3]=R32(c->r[3]+0x00000004u); // 800C1778
  c->lr=0x800C1780u; f_804CC8D4(c); // 800C177C
  W32(c->r[1]+0x00000018u,c->r[3]); // 800C1780
  c->r[3]=c->r[1]+0x00000018u; // 800C1784
  c->r[4]=c->r[1]+0x00000020u; // 800C1788
  c->lr=0x800C1790u; f_804C7AC0(c); // 800C178C
  W8(c->r[1]+0x00000008u,c->r[31]); // 800C1790
  c->r[3]=c->r[1]+0x00000008u; // 800C1794
  c->lr=0x800C179Cu; f_80047A80(c); // 800C1798
  c->r[3]=R32(c->r[3]+0x00000004u); // 800C179C
  c->lr=0x800C17A4u; f_804CC8D4(c); // 800C17A0
  W32(c->r[1]+0x00000014u,c->r[3]); // 800C17A4
  c->r[3]=c->r[1]+0x00000014u; // 800C17A8
  c->r[4]=c->r[1]+0x00000090u; // 800C17AC
  c->lr=0x800C17B4u; f_804C7D10(c); // 800C17B0
  {uint32_t ea=c->r[1]+0x00000030u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C17B4
  {uint32_t ea=c->r[30]+0x00000104u; WF32(ea,c->f[0]);} // 800C17B8
  {uint32_t ea=c->r[2]+0xFFFFA178u; c->f[31]=c->ps1[31]=RF32(ea);} // 800C17BC
  {uint32_t ea=c->r[1]+0x00000040u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C17C0
  {uint32_t ea=c->r[30]+0x00000108u; WF32(ea,c->f[0]);} // 800C17C4
  {uint32_t ea=c->r[1]+0x00000050u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C17C8
  {uint32_t ea=c->r[30]+0x0000010Cu; WF32(ea,c->f[0]);} // 800C17CC
  {uint32_t ea=c->r[1]+0x00000020u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C17D0
  {uint32_t ea=c->r[30]+0x00000110u; WF32(ea,c->f[0]);} // 800C17D4
  {uint32_t ea=c->r[1]+0x00000034u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C17D8
  {uint32_t ea=c->r[30]+0x00000114u; WF32(ea,c->f[0]);} // 800C17DC
  {uint32_t ea=c->r[1]+0x00000044u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C17E0
  {uint32_t ea=c->r[30]+0x00000118u; WF32(ea,c->f[0]);} // 800C17E4
  {uint32_t ea=c->r[1]+0x00000054u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C17E8
  {uint32_t ea=c->r[30]+0x0000011Cu; WF32(ea,c->f[0]);} // 800C17EC
  {uint32_t ea=c->r[1]+0x00000024u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C17F0
  {uint32_t ea=c->r[30]+0x00000120u; WF32(ea,c->f[0]);} // 800C17F4
  {uint32_t ea=c->r[1]+0x00000038u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C17F8
  {uint32_t ea=c->r[30]+0x00000124u; WF32(ea,c->f[0]);} // 800C17FC
  {uint32_t ea=c->r[1]+0x00000048u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C1800
  {uint32_t ea=c->r[30]+0x00000128u; WF32(ea,c->f[0]);} // 800C1804
  {uint32_t ea=c->r[1]+0x00000058u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C1808
  {uint32_t ea=c->r[30]+0x0000012Cu; WF32(ea,c->f[0]);} // 800C180C
  {uint32_t ea=c->r[1]+0x00000028u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C1810
  {uint32_t ea=c->r[30]+0x00000130u; WF32(ea,c->f[0]);} // 800C1814
  c->r[0]=R8(c->r[13]+0xFFFFBB87u); // 800C1818
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800C181C
  if (!crb(c,2)) { goto L_800C1864; } // 800C1820
  c->r[31]=0u+0x80730000u; // 800C1824
  c->r[3]=c->r[31]+0x00006160u; // 800C1828
  c->lr=0x800C1830u; f_8008C1BC(c); // 800C182C
  c->r[6]=0u+0x806D0000u; // 800C1830
  c->r[4]=0u+0x80050000u; // 800C1834
  c->r[6]=c->r[6]+0xFFFFC37Cu; // 800C1838
  c->r[3]=c->r[31]+0x00006160u; // 800C183C
  c->r[0]=c->r[6]+0x00000028u; // 800C1840
  c->r[5]=0u+0x80750000u; // 800C1844
  W32(c->r[3]+0x000000A4u,c->r[6]); // 800C1848
  c->r[4]=c->r[4]+0xFFFF9F5Cu; // 800C184C
  c->r[5]=c->r[5]+0x00003740u; // 800C1850
  W32(c->r[3]+0x000000A8u,c->r[0]); // 800C1854
  c->lr=0x800C185Cu; f_803A92B8(c); // 800C1858
  c->r[0]=0u+0x00000001u; // 800C185C
  W8(c->r[13]+0xFFFFBB87u,c->r[0]); // 800C1860
L_800C1864:;
  c->r[3]=0u+0x80730000u; // 800C1864
  c->r[3]=c->r[3]+0x00006160u; // 800C1868
  c->lr=0x800C1870u; f_8008CD18(c); // 800C186C
  cmps(c,0,(int32_t)c->r[3],1); // 800C1870
  if (!crb(c,1)) { goto L_800C18B0; } // 800C1874
  c->r[3]=R32(c->r[30]+0x000000FCu); // 800C1878
  c->r[0]=0u+0x43300000u; // 800C187C
  W32(c->r[1]+0x000000C0u,c->r[0]); // 800C1880
  c->r[3]=rotl(c->r[3],1)&0xFFFFFFFEu; // 800C1884
  {uint32_t ea=c->r[2]+0xFFFFA198u; c->f[3]=RF64(ea);} // 800C1888
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 800C188C
  {uint32_t ea=c->r[2]+0xFFFFA180u; c->f[1]=c->ps1[1]=RF32(ea);} // 800C1890
  c->r[0]=c->r[0]^0x80000000u; // 800C1894
  W32(c->r[1]+0x000000C4u,c->r[0]); // 800C1898
  {uint32_t ea=c->r[2]+0xFFFFA17Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800C189C
  {uint32_t ea=c->r[1]+0x000000C0u; c->f[2]=RF64(ea);} // 800C18A0
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[3]); // 800C18A4
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[2]); // 800C18A8
  c->f[31]=c->ps1[31]=S(c->f[0]*c->f[1]); // 800C18AC
L_800C18B0:;
  {uint32_t ea=c->r[2]+0xFFFFA178u; c->f[1]=c->ps1[1]=RF32(ea);} // 800C18B0
  c->r[3]=c->r[1]+0x00000060u; // 800C18B4
  {uint32_t ea=c->r[2]+0xFFFFA184u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C18B8
  c->f[3]=c->f[1]; // 800C18BC
  c->f[2]=c->ps1[2]=S(c->f[0]*c->f[31]); // 800C18C0
  c->lr=0x800C18C8u; f_804E18A0(c); // 800C18C4
  c->r[3]=c->r[30]+0x00000104u; // 800C18C8
  c->r[4]=c->r[1]+0x00000060u; // 800C18CC
  c->r[5]=c->r[3]|c->r[3]; // 800C18D0
  c->lr=0x800C18D8u; f_80382F60(c); // 800C18D4
  c->r[3]=c->r[1]+0x00000060u; // 800C18D8
  c->lr=0x800C18E0u; f_80382F00(c); // 800C18DC
  {uint32_t ea=c->r[30]+0x00000144u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C18E0
  c->r[3]=c->r[30]+0x00000104u; // 800C18E4
  c->r[5]=c->r[3]|c->r[3]; // 800C18E8
  c->r[4]=c->r[1]+0x00000060u; // 800C18EC
  c->f[0]=-c->f[0]; // 800C18F0
  {uint32_t ea=c->r[1]+0x0000008Cu; WF32(ea,c->f[0]);} // 800C18F4
  c->lr=0x800C18FCu; f_80382F60(c); // 800C18F8
  {uint32_t ea=c->r[2]+0xFFFFA178u; c->f[1]=c->ps1[1]=RF32(ea);} // 800C18FC
  c->r[3]=c->r[1]+0x00000060u; // 800C1900
  {uint32_t ea=c->r[30]+0x00000140u; c->f[3]=c->ps1[3]=RF32(ea);} // 800C1904
  {uint32_t ea=c->r[2]+0xFFFFA184u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C1908
  c->f[2]=c->f[1]; // 800C190C
  c->f[3]=c->ps1[3]=S(c->f[0]*c->f[3]); // 800C1910
  c->lr=0x800C1918u; f_804E18A0(c); // 800C1914
  c->r[3]=c->r[30]+0x00000104u; // 800C1918
  c->r[4]=c->r[1]+0x00000060u; // 800C191C
  c->r[5]=c->r[3]|c->r[3]; // 800C1920
  c->lr=0x800C1928u; f_80382F60(c); // 800C1924
  {uint32_t ea=c->r[30]+0x00000140u; c->f[1]=c->ps1[1]=RF32(ea);} // 800C1928
  {uint32_t ea=c->r[2]+0xFFFFA188u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C192C
  fcmp(c,0,c->f[1],c->f[0]); // 800C1930
  if (crb(c,1)) { goto L_800C1944; } // 800C1934
  {uint32_t ea=c->r[2]+0xFFFFA18Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800C1938
  fcmp(c,0,c->f[1],c->f[0]); // 800C193C
  if (!crb(c,0)) { goto L_800C1964; } // 800C1940
L_800C1944:;
  c->r[3]=c->r[1]+0x00000060u; // 800C1944
  c->lr=0x800C194Cu; f_80382F00(c); // 800C1948
  {uint32_t ea=c->r[2]+0xFFFFA190u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C194C
  c->r[3]=c->r[30]+0x00000104u; // 800C1950
  {uint32_t ea=c->r[1]+0x00000074u; WF32(ea,c->f[0]);} // 800C1954
  c->r[5]=c->r[3]|c->r[3]; // 800C1958
  c->r[4]=c->r[1]+0x00000060u; // 800C195C
  c->lr=0x800C1964u; f_80382F60(c); // 800C1960
L_800C1964:;
  c->r[12]=R32(c->r[30]+0x0000013Cu); // 800C1964
  c->r[3]=c->r[30]+0x00000104u; // 800C1968
  c->r[12]=R32(c->r[12]+0x00000008u); // 800C196C
  c->ctr=c->r[12]; // 800C1970
  if (true) { c->lr=0x800C1978u; dispatch(c,c->ctr); } // 800C1974
L_800C1978:;
  c->r[0]=R32(c->r[1]+0x000000E4u); // 800C1978
  {uint32_t ea=c->r[1]+0x000000D8u; psq_load(c,31,ea,0,0);} // 800C197C
  {uint32_t ea=c->r[1]+0x000000D0u; c->f[31]=RF64(ea);} // 800C1980
  c->r[31]=R32(c->r[1]+0x000000CCu); // 800C1984
  c->r[30]=R32(c->r[1]+0x000000C8u); // 800C1988
  c->lr=c->r[0]; // 800C198C
  c->r[1]=c->r[1]+0x000000E0u; // 800C1990
  return; // 800C1994
}

// fn_800C1998
void f_800C1998(Ctx* __restrict c) {
  trace_call(0x800C1998u);
  c->r[3]=c->r[3]+0x00000104u; // 800C1998
  f_80320BEC(c); return; // 800C199C
}

// fn_800C19A0
void f_800C19A0(Ctx* __restrict c) {
  trace_call(0x800C19A0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C19A0
  c->r[0]=c->lr; // 800C19A4
  W32(c->r[1]+0x00000024u,c->r[0]); // 800C19A8
  c->r[11]=c->r[1]+0x00000020u; // 800C19AC
  c->lr=0x800C19B4u; { W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800C19B0
  c->r[29]=c->r[3]|c->r[3]; // 800C19B4
  c->r[30]=0u+0x00000000u; // 800C19B8
  c->r[31]=0u+0x00000000u; // 800C19BC
L_800C19C0:;
  c->r[3]=c->r[29]+c->r[31]; // 800C19C0
  c->r[5]=c->r[30]|c->r[30]; // 800C19C4
  c->r[3]=c->r[3]+0x00000004u; // 800C19C8
  c->r[4]=0u+0x00000000u; // 800C19CC
  c->lr=0x800C19D4u; f_800C2224(c); // 800C19D0
  c->r[30]=c->r[30]+0x00000001u; // 800C19D4
  c->r[31]=c->r[31]+0x00000078u; // 800C19D8
  cmps(c,0,(int32_t)c->r[30],2); // 800C19DC
  if (crb(c,0)) { IRQCHK(c); goto L_800C19C0; } // 800C19E0
  {uint32_t ea=c->r[2]+0xFFFFA178u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C19E4
  c->r[0]=0u+0xFFFFFFFFu; // 800C19E8
  c->r[5]=0u+0x00000000u; // 800C19EC
  {uint32_t ea=c->r[29]+0x000000F4u; WF32(ea,c->f[0]);} // 800C19F0
  c->r[3]=c->r[29]+0x00000104u; // 800C19F4
  c->r[4]=0u+0x00000001u; // 800C19F8
  W32(c->r[29]+0x000000F8u,c->r[5]); // 800C19FC
  W32(c->r[29]+0x000000FCu,c->r[0]); // 800C1A00
  W32(c->r[29]+0x00000100u,c->r[0]); // 800C1A04
  c->lr=0x800C1A0Cu; f_80320C3C(c); // 800C1A08
  {uint32_t ea=c->r[2]+0xFFFFA178u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C1A0C
  c->r[11]=c->r[1]+0x00000020u; // 800C1A10
  {uint32_t ea=c->r[29]+0x00000140u; WF32(ea,c->f[0]);} // 800C1A14
  {uint32_t ea=c->r[29]+0x00000144u; WF32(ea,c->f[0]);} // 800C1A18
  c->lr=0x800C1A20u; { c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800C1A1C
  c->r[0]=R32(c->r[1]+0x00000024u); // 800C1A20
  c->lr=c->r[0]; // 800C1A24
  c->r[1]=c->r[1]+0x00000020u; // 800C1A28
  return; // 800C1A2C
}

// fn_800C1A30
void f_800C1A30(Ctx* __restrict c) {
  trace_call(0x800C1A30u);
  {uint32_t ea=c->r[1]+0xFFFFFF70u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C1A30
  c->r[0]=c->lr; // 800C1A34
  W32(c->r[1]+0x00000094u,c->r[0]); // 800C1A38
  c->r[11]=c->r[1]+0x00000080u; // 800C1A3C
  {uint32_t ea=c->r[1]+0x00000080u; WF64(ea,c->f[31]);} // 800C1A40
  {uint32_t ea=c->r[1]+0x00000088u; psq_store(c,31,ea,0,0);} // 800C1A44
  c->lr=0x800C1A4Cu; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800C1A48
  c->r[4]=0u+0x806D0000u; // 800C1A4C
  c->r[28]=c->r[3]|c->r[3]; // 800C1A50
  c->r[4]=c->r[4]+0xFFFFE438u; // 800C1A54
  W32(c->r[1]+0x00000050u,c->r[4]); // 800C1A58
  c->r[0]=R32(c->r[3]+0x00000100u); // 800C1A5C
  cmpu(c,0,c->r[0],0x00000001u); // 800C1A60
  if (crb(c,1)) { goto L_800C1D4C; } // 800C1A64
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)120); // 800C1A68
  c->r[3]=c->r[3]+c->r[0]; // 800C1A6C
  c->r[3]=c->r[3]+0x00000004u; // 800C1A70
  c->lr=0x800C1A78u; f_800C24C4(c); // 800C1A74
  cmps(c,0,(int32_t)c->r[3],3); // 800C1A78
  if (crb(c,2)) { goto L_800C1D4C; } // 800C1A7C
  c->r[0]=R32(c->r[28]+0x00000100u); // 800C1A80
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)120); // 800C1A84
  c->r[3]=c->r[28]+c->r[0]; // 800C1A88
  c->r[3]=c->r[3]+0x00000004u; // 800C1A8C
  c->lr=0x800C1A94u; f_800C24CC(c); // 800C1A90
  {uint32_t ea=c->r[3]+0x00000000u; c->f[2]=c->ps1[2]=RF32(ea);} // 800C1A94
  c->r[4]=c->r[1]+0x00000038u; // 800C1A98
  {uint32_t ea=c->r[1]+0x00000038u; WF32(ea,c->f[2]);} // 800C1A9C
  {uint32_t ea=c->r[2]+0xFFFFA178u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C1AA0
  {uint32_t ea=c->r[3]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 800C1AA4
  {uint32_t ea=c->r[1]+0x0000003Cu; WF32(ea,c->f[1]);} // 800C1AA8
  {uint32_t ea=c->r[1]+0x00000040u; WF32(ea,c->f[0]);} // 800C1AAC
  {uint32_t ea=c->r[4]+0x00000004u; psq_load(c,1,ea,0,0);} // 800C1AB0
  {double t0=S(c->f[1]*c->f[1]), t1=S(c->ps1[1]*c->ps1[1]); c->f[0]=t0; c->ps1[0]=t1;} // 800C1AB4
  c->f[1]=c->ps1[1]=S(c->f[2]); // 800C1AB8
  {double t0=S(c->f[0]+c->ps1[0]), t1=S(c->ps1[1]); c->f[0]=t0; c->ps1[0]=t1;} // 800C1ABC
  {double t0=S(std::fma(c->f[1],c->ps1[0],c->f[0])), t1=S(std::fma(c->ps1[1],c->ps1[0],c->ps1[0])); c->f[1]=t0; c->ps1[1]=t1;} // 800C1AC0
  {uint32_t ea=c->r[2]+0xFFFFA1A0u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C1AC4
  fcmp(c,0,c->f[1],c->f[0]); // 800C1AC8
  c->r[0]=c->cr; // 800C1ACC
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 800C1AD0
  if (!crb(c,2)) { goto L_800C1AE8; } // 800C1AD4
  c->r[5]=0u+0x806A0000u; // 800C1AD8
  c->r[3]=c->r[4]|c->r[4]; // 800C1ADC
  c->r[5]=c->r[5]+0x00000AA8u; // 800C1AE0
  c->lr=0x800C1AE8u; f_8030E0BC(c); // 800C1AE4
L_800C1AE8:;
  {uint32_t ea=c->r[1]+0x0000003Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 800C1AE8
  {uint32_t ea=c->r[1]+0x00000038u; c->f[1]=c->ps1[1]=RF32(ea);} // 800C1AEC
  c->lr=0x800C1AF4u; f_804E1378(c); // 800C1AF0
  {uint32_t ea=c->r[2]+0xFFFFA1A4u; c->f[2]=c->ps1[2]=RF32(ea);} // 800C1AF4
  c->r[3]=c->r[28]|c->r[28]; // 800C1AF8
  {uint32_t ea=c->r[2]+0xFFFFA188u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C1AFC
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[1]); // 800C1B00
  {uint32_t ea=c->r[2]+0xFFFFA1A8u; c->f[2]=c->ps1[2]=RF32(ea);} // 800C1B04
  c->f[1]=c->ps1[1]=S(c->f[0]+c->f[1]); // 800C1B08
  c->lr=0x800C1B10u; f_800C1D6C(c); // 800C1B0C
  c->r[26]=0u+0x00000000u; // 800C1B10
  W8(c->r[1]+0x00000010u,c->r[26]); // 800C1B14
  c->r[3]=c->r[1]+0x00000010u; // 800C1B18
  c->lr=0x800C1B20u; f_80047A80(c); // 800C1B1C
  c->r[3]=R32(c->r[3]+0x00000004u); // 800C1B20
  c->lr=0x800C1B28u; f_804CC8D4(c); // 800C1B24
  W32(c->r[1]+0x00000014u,c->r[3]); // 800C1B28
  c->r[3]=c->r[1]+0x00000014u; // 800C1B2C
  c->r[4]=c->r[1]+0x00000044u; // 800C1B30
  c->lr=0x800C1B38u; f_804C7AC0(c); // 800C1B34
  c->r[3]=0u+0x0000000Au; // 800C1B38
  c->lr=0x800C1B40u; f_800B0548(c); // 800C1B3C
  {uint32_t ea=c->r[3]+0x0000003Cu; c->f[31]=c->ps1[31]=RF32(ea);} // 800C1B40
  c->r[3]=c->r[1]+0x0000000Cu; // 800C1B44
  W8(c->r[1]+0x0000000Cu,c->r[26]); // 800C1B48
  c->lr=0x800C1B50u; f_80046EFC(c); // 800C1B4C
  c->r[3]=R32(c->r[3]+0x000000BCu); // 800C1B50
  c->lr=0x800C1B58u; f_800B727C(c); // 800C1B54
  c->r[0]=R8(c->r[13]+0xFFFFBC02u); // 800C1B58
  c->r[4]=0u+0x00000100u; // 800C1B5C
  W32(c->r[1]+0x00000054u,c->r[3]); // 800C1B60
  c->r[31]=c->r[3]|c->r[3]; // 800C1B64
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800C1B68
  W32(c->r[1]+0x00000058u,c->r[26]); // 800C1B6C
  W32(c->r[1]+0x0000005Cu,c->r[4]); // 800C1B70
  if (!crb(c,2)) { goto L_800C1B8C; } // 800C1B74
  c->r[3]=0u+0x806D0000u; // 800C1B78
  c->r[0]=0u+0x00000001u; // 800C1B7C
  c->r[3]=c->r[3]+0xFFFFCB20u; // 800C1B80
  W32(c->r[13]+0xFFFFBC04u,c->r[3]); // 800C1B84
  W8(c->r[13]+0xFFFFBC02u,c->r[0]); // 800C1B88
L_800C1B8C:;
  c->r[0]=R8(c->r[13]+0xFFFFBE9Du); // 800C1B8C
  c->r[30]=0u+0x00000000u; // 800C1B90
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800C1B94
  if (!crb(c,2)) { goto L_800C1BE0; } // 800C1B98
  c->r[7]=0u+0x80750000u; // 800C1B9C
  c->r[6]=0u+0x806D0000u; // 800C1BA0
  c->r[3]=c->r[7]+0xFFFF8158u; // 800C1BA4
  c->r[4]=0u+0x80080000u; // 800C1BA8
  c->r[6]=c->r[6]+0x000038F0u; // 800C1BAC
  c->r[5]=0u+0x80750000u; // 800C1BB0
  c->r[0]=c->r[6]+0x00000008u; // 800C1BB4
  W32(c->r[7]+0xFFFF8158u,c->r[3]); // 800C1BB8
  c->r[4]=c->r[4]+0xFFFF98C0u; // 800C1BBC
  c->r[5]=c->r[5]+0x0000374Cu; // 800C1BC0
  W32(c->r[3]+0x00000004u,c->r[3]); // 800C1BC4
  W32(c->r[3]+0x00000008u,c->r[3]); // 800C1BC8
  W32(c->r[3]+0x00000010u,c->r[6]); // 800C1BCC
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 800C1BD0
  c->lr=0x800C1BD8u; f_803A92B8(c); // 800C1BD4
  c->r[0]=0u+0x00000001u; // 800C1BD8
  W8(c->r[13]+0xFFFFBE9Du,c->r[0]); // 800C1BDC
L_800C1BE0:;
  c->r[3]=0u+0x80750000u; // 800C1BE0
  c->r[27]=c->r[1]+0x00000050u; // 800C1BE4
  c->r[29]=R32(c->r[3]+0xFFFF8158u); // 800C1BE8
  c->r[25]=c->r[3]+0xFFFF8158u; // 800C1BEC
  c->r[26]=0u+0x80740000u; // 800C1BF0
  goto L_800C1CBC; // 800C1BF4
L_800C1BF8:;
  cmps(c,0,(int32_t)c->r[4],0); // 800C1BF8
  if (crb(c,2)) { goto L_800C1C04; } // 800C1BFC
  c->r[4]=c->r[4]+0x00000020u; // 800C1C00
L_800C1C04:;
  c->r[3]=R32(c->r[4]+0x00000000u); // 800C1C04
  c->r[0]=R32(c->r[4]+0x00000004u); // 800C1C08
  cmps(c,0,(int32_t)c->r[3],0); // 800C1C0C
  W32(c->r[1]+0x00000020u,c->r[3]); // 800C1C10
  W32(c->r[1]+0x00000024u,c->r[0]); // 800C1C14
  W32(c->r[1]+0x00000028u,c->r[3]); // 800C1C18
  W32(c->r[1]+0x0000002Cu,c->r[0]); // 800C1C1C
  if (crb(c,2)) { goto L_800C1CB8; } // 800C1C20
  c->r[3]=c->r[1]+0x00000028u; // 800C1C24
  c->lr=0x800C1C2Cu; f_80046E94(c); // 800C1C28
  c->r[3]=R32(c->r[3]+0x00000000u); // 800C1C2C
  c->r[0]=R32(c->r[1]+0x00000028u); // 800C1C30
  c->r[3]=c->r[3]-c->r[0]; // 800C1C34
  c->r[0]=addc(c,c->r[3],0xFFFFFFFFu,0); // 800C1C38
  c->r[0]=addc(c,~c->r[0],c->r[3],c->xer_ca); cr0(c,c->r[0]); // 800C1C3C
  if (!crb(c,2)) { goto L_800C1CB8; } // 800C1C40
  c->r[3]=c->r[1]+0x00000028u; // 800C1C44
  c->lr=0x800C1C4Cu; f_80046E94(c); // 800C1C48
  c->r[3]=R32(c->r[3]+0x00000004u); // 800C1C4C
  c->f[1]=c->f[31]; // 800C1C50
  c->r[5]=c->r[1]+0x00000044u; // 800C1C54
  c->r[6]=c->r[26]+0x000074DCu; // 800C1C58
  c->r[12]=R32(c->r[3]+0x0000001Cu); // 800C1C5C
  c->r[4]=0u+0x00000009u; // 800C1C60
  c->r[12]=R32(c->r[12]+0x00000028u); // 800C1C64
  c->ctr=c->r[12]; // 800C1C68
  if (true) { c->lr=0x800C1C70u; dispatch(c,c->ctr); } // 800C1C6C
  cmps(c,0,(int32_t)c->r[3],0); // 800C1C70
  if (crb(c,2)) { goto L_800C1CB8; } // 800C1C74
  cmps(c,0,(int32_t)c->r[27],0); // 800C1C78
  c->r[30]=c->r[30]+0x00000001u; // 800C1C7C
  if (crb(c,2)) { goto L_800C1CB8; } // 800C1C80
  c->r[5]=R32(c->r[1]+0x00000028u); // 800C1C84
  c->r[3]=c->r[27]|c->r[27]; // 800C1C88
  c->r[0]=R32(c->r[1]+0x0000002Cu); // 800C1C8C
  c->r[4]=c->r[1]+0x00000018u; // 800C1C90
  W32(c->r[1]+0x00000018u,c->r[5]); // 800C1C94
  c->r[5]=c->r[26]+0x000074DCu; // 800C1C98
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 800C1C9C
  c->r[12]=R32(c->r[27]+0x00000000u); // 800C1CA0
  c->r[12]=R32(c->r[12]+0x00000008u); // 800C1CA4
  c->ctr=c->r[12]; // 800C1CA8
  if (true) { c->lr=0x800C1CB0u; dispatch(c,c->ctr); } // 800C1CAC
  cmps(c,0,(int32_t)c->r[3],0); // 800C1CB0
  if (crb(c,2)) { goto L_800C1CCC; } // 800C1CB4
L_800C1CB8:;
  c->r[29]=R32(c->r[29]+0x00000000u); // 800C1CB8
L_800C1CBC:;
  c->r[4]=R32(c->r[29]+0x00000008u); // 800C1CBC
  c->r[0]=R32(c->r[25]+0x00000008u); // 800C1CC0
  cmpu(c,0,c->r[4],c->r[0]); // 800C1CC4
  if (!crb(c,2)) { IRQCHK(c); goto L_800C1BF8; } // 800C1CC8
L_800C1CCC:;
  c->r[26]=0u+0x00000000u; // 800C1CCC
  c->r[29]=0u+0x00000000u; // 800C1CD0
  c->r[27]=c->r[26]|c->r[26]; // 800C1CD4
  goto L_800C1D20; // 800C1CD8
L_800C1CDC:;
  c->r[25]=c->r[31]+c->r[29]; // 800C1CDC
  c->r[3]=c->r[1]+0x00000008u; // 800C1CE0
  c->r[4]=R32(c->r[25]+0x00000044u); // 800C1CE4
  c->r[0]=R32(c->r[25]+0x00000048u); // 800C1CE8
  W32(c->r[1]+0x00000034u,c->r[0]); // 800C1CEC
  W32(c->r[1]+0x00000030u,c->r[4]); // 800C1CF0
  W8(c->r[1]+0x00000008u,c->r[27]); // 800C1CF4
  c->lr=0x800C1CFCu; f_80046EFC(c); // 800C1CF8
  c->r[4]=R32(c->r[28]+0x000000FCu); // 800C1CFC
  c->lr=0x800C1D04u; f_80046DC8(c); // 800C1D00
  {uint32_t ea=c->r[2]+0xFFFFA1ACu; c->f[1]=c->ps1[1]=RF32(ea);} // 800C1D04
  c->r[4]=c->r[1]+0x00000030u; // 800C1D08
  c->r[5]=c->r[25]+0x00000004u; // 800C1D0C
  c->r[6]=0u+0x0000000Au; // 800C1D10
  c->lr=0x800C1D18u; f_800AD2A0(c); // 800C1D14
  c->r[26]=c->r[26]+0x00000001u; // 800C1D18
  c->r[29]=c->r[29]+0x00000064u; // 800C1D1C
L_800C1D20:;
  cmps(c,0,(int32_t)c->r[26],(int32_t)c->r[30]); // 800C1D20
  if (crb(c,0)) { IRQCHK(c); goto L_800C1CDC; } // 800C1D24
  c->r[5]=R32(c->r[28]+0x000000FCu); // 800C1D28
  c->r[3]=0u+0x0000000Au; // 800C1D2C
  c->r[4]=0u+0x00000000u; // 800C1D30
  c->r[6]=0u+0x00000000u; // 800C1D34
  c->lr=0x800C1D3Cu; f_800B87A0(c); // 800C1D38
  c->r[3]=0u+0x0000000Au; // 800C1D3C
  c->lr=0x800C1D44u; f_800B0548(c); // 800C1D40
  {uint32_t ea=c->r[3]+0x00000018u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C1D44
  {uint32_t ea=c->r[28]+0x000000F4u; WF32(ea,c->f[0]);} // 800C1D48
L_800C1D4C:;
  c->r[11]=c->r[1]+0x00000080u; // 800C1D4C
  {uint32_t ea=c->r[1]+0x00000088u; psq_load(c,31,ea,0,0);} // 800C1D50
  {uint32_t ea=c->r[1]+0x00000080u; c->f[31]=RF64(ea);} // 800C1D54
  c->lr=0x800C1D5Cu; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800C1D58
  c->r[0]=R32(c->r[1]+0x00000094u); // 800C1D5C
  c->lr=c->r[0]; // 800C1D60
  c->r[1]=c->r[1]+0x00000090u; // 800C1D64
  return; // 800C1D68
}

// fn_800C1D6C
void f_800C1D6C(Ctx* __restrict c) {
  trace_call(0x800C1D6Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C1D6C
  c->r[0]=c->lr; // 800C1D70
  c->r[4]=0u+0x00000001u; // 800C1D74
  W32(c->r[1]+0x00000064u,c->r[0]); // 800C1D78
  {uint32_t ea=c->r[1]+0x00000058u; WF64(ea,c->f[31]);} // 800C1D7C
  c->f[31]=c->f[2]; // 800C1D80
  {uint32_t ea=c->r[1]+0x00000050u; WF64(ea,c->f[30]);} // 800C1D84
  c->f[30]=c->f[1]; // 800C1D88
  W32(c->r[1]+0x0000004Cu,c->r[31]); // 800C1D8C
  c->r[31]=c->r[3]|c->r[3]; // 800C1D90
  c->r[3]=c->r[3]+0x00000104u; // 800C1D94
  c->lr=0x800C1D9Cu; f_80320C3C(c); // 800C1D98
  c->r[3]=c->r[1]+0x00000008u; // 800C1D9C
  c->r[4]=0u+0x0000000Au; // 800C1DA0
  c->r[5]=0u+0x00000000u; // 800C1DA4
  c->r[6]=0u+0x00000000u; // 800C1DA8
  c->r[7]=0u+0x00000000u; // 800C1DAC
  c->r[8]=0u+0x00000000u; // 800C1DB0
  c->lr=0x800C1DB8u; f_800B8914(c); // 800C1DB4
  c->r[3]=c->r[1]+0x00000008u; // 800C1DB8
  c->r[4]=c->r[31]+0x00000104u; // 800C1DBC
  c->lr=0x800C1DC4u; f_80382F2C(c); // 800C1DC0
  c->r[3]=c->r[31]+0x00000134u; // 800C1DC4
  c->r[4]=c->r[1]+0x00000038u; // 800C1DC8
  c->lr=0x800C1DD0u; f_80495690(c); // 800C1DCC
  {uint32_t ea=c->r[31]+0x00000140u; WF32(ea,c->f[30]);} // 800C1DD0
  c->r[3]=c->r[31]|c->r[31]; // 800C1DD4
  {uint32_t ea=c->r[31]+0x00000144u; WF32(ea,c->f[31]);} // 800C1DD8
  c->lr=0x800C1DE0u; f_800C1708(c); // 800C1DDC
  c->r[0]=R32(c->r[1]+0x00000064u); // 800C1DE0
  {uint32_t ea=c->r[1]+0x00000058u; c->f[31]=RF64(ea);} // 800C1DE4
  {uint32_t ea=c->r[1]+0x00000050u; c->f[30]=RF64(ea);} // 800C1DE8
  c->r[31]=R32(c->r[1]+0x0000004Cu); // 800C1DEC
  c->lr=c->r[0]; // 800C1DF0
  c->r[1]=c->r[1]+0x00000060u; // 800C1DF4
  return; // 800C1DF8
}

// fn_800C1DFC
void f_800C1DFC(Ctx* __restrict c) {
  trace_call(0x800C1DFCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C1DFC
  c->r[0]=c->lr; // 800C1E00
  c->r[4]=0u+0x806D0000u; // 800C1E04
  c->r[5]=c->r[3]+0x00000004u; // 800C1E08
  W32(c->r[1]+0x00000014u,c->r[0]); // 800C1E0C
  c->r[4]=c->r[4]+0x000071A0u; // 800C1E10
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800C1E14
  c->r[31]=c->r[3]|c->r[3]; // 800C1E18
  W32(c->r[3]+0x00000000u,c->r[4]); // 800C1E1C
  c->r[4]=0u+0xFFFFFFFFu; // 800C1E20
  c->lr=0x800C1E28u; f_800C205C(c); // 800C1E24
  c->r[0]=0u+0x00000000u; // 800C1E28
  W32(c->r[31]+0x00000010u,c->r[0]); // 800C1E2C
  c->r[3]=c->r[31]|c->r[31]; // 800C1E30
  W32(c->r[31]+0x00000014u,c->r[0]); // 800C1E34
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800C1E38
  c->r[0]=R32(c->r[1]+0x00000014u); // 800C1E3C
  c->lr=c->r[0]; // 800C1E40
  c->r[1]=c->r[1]+0x00000010u; // 800C1E44
  return; // 800C1E48
}

// fn_800C1E4C
void f_800C1E4C(Ctx* __restrict c) {
  trace_call(0x800C1E4Cu);
  return; // 800C1E4C
}

// fn_800C1E50
void f_800C1E50(Ctx* __restrict c) {
  trace_call(0x800C1E50u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C1E50
  c->r[0]=c->lr; // 800C1E54
  W32(c->r[1]+0x00000044u,c->r[0]); // 800C1E58
  c->r[5]=c->r[1]+0x00000008u; // 800C1E5C
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[31]);} // 800C1E60
  {uint32_t ea=c->r[1]+0x00000038u; psq_store(c,31,ea,0,0);} // 800C1E64
  c->f[31]=c->f[1]; // 800C1E68
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[30]);} // 800C1E6C
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,30,ea,0,0);} // 800C1E70
  c->f[30]=c->f[2]; // 800C1E74
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800C1E78
  c->r[31]=c->r[3]|c->r[3]; // 800C1E7C
  c->lr=0x800C1E84u; f_800C205C(c); // 800C1E80
  c->r[3]=c->r[1]+0x00000008u; // 800C1E84
  {uint32_t ea=c->r[3]+0x00000004u; psq_load(c,1,ea,0,0);} // 800C1E88
  {double t0=S(c->f[1]*c->f[1]), t1=S(c->ps1[1]*c->ps1[1]); c->f[0]=t0; c->ps1[0]=t1;} // 800C1E8C
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 800C1E90
  {double t0=S(c->f[0]+c->ps1[0]), t1=S(c->ps1[1]); c->f[0]=t0; c->ps1[0]=t1;} // 800C1E94
  {double t0=S(std::fma(c->f[1],c->ps1[0],c->f[0])), t1=S(std::fma(c->ps1[1],c->ps1[0],c->ps1[0])); c->f[1]=t0; c->ps1[1]=t1;} // 800C1E98
  {uint32_t ea=c->r[2]+0xFFFFA1B0u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C1E9C
  fcmp(c,1,c->f[1],c->f[0]); // 800C1EA0
  c->r[0]=c->cr; // 800C1EA4
  c->r[0]=rotl(c->r[0],5)&0x00000001u; // 800C1EA8
  cmps(c,1,(int32_t)c->r[0],0); // 800C1EAC
  if (!crb(c,6)) { goto L_800C1FEC; } // 800C1EB0
  c->r[4]=0u+0x806A0000u; // 800C1EB4
  {uint32_t ea=c->r[3]+0x00000004u; psq_load(c,4,ea,0,0);} // 800C1EB8
  {double t0=S(c->f[4]*c->f[4]), t1=S(c->ps1[4]*c->ps1[4]); c->f[3]=t0; c->ps1[3]=t1;} // 800C1EBC
  {uint32_t ea=c->r[1]+0x00000008u; c->f[4]=c->ps1[4]=RF32(ea);} // 800C1EC0
  {double t0=S(c->f[3]+c->ps1[3]), t1=S(c->ps1[4]); c->f[3]=t0; c->ps1[3]=t1;} // 800C1EC4
  {uint32_t ea=c->r[4]+0x00000AA8u; c->f[2]=c->ps1[2]=RF32(ea); c->r[4]=ea;} // 800C1EC8
  {double t0=S(std::fma(c->f[4],c->ps1[3],c->f[3])), t1=S(std::fma(c->ps1[4],c->ps1[3],c->ps1[3])); c->f[4]=t0; c->ps1[4]=t1;} // 800C1ECC
  fcmp(c,0,c->f[2],c->f[4]); // 800C1ED0
  if (crb(c,0)) { goto L_800C1EE0; } // 800C1ED4
  c->f[4]=c->f[2]; // 800C1ED8
  goto L_800C1F00; // 800C1EDC
L_800C1EE0:;
  {uint32_t ea=c->r[4]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 800C1EE0
  c->f[3]=frsqrte(c->f[4]); // 800C1EE4
  {uint32_t ea=c->r[4]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C1EE8
  c->f[2]=c->ps1[2]=S(c->f[3]*c->f[3]); // 800C1EEC
  c->f[1]=c->ps1[1]=S(c->f[3]*c->f[1]); // 800C1EF0
  c->f[2]=c->ps1[2]=S(-std::fma(c->f[2],c->f[4],-c->f[0])); // 800C1EF4
  c->f[3]=c->ps1[3]=S(c->f[2]*c->f[1]); // 800C1EF8
  c->f[4]=c->ps1[4]=S(c->f[4]*c->f[3]); // 800C1EFC
L_800C1F00:;
  fcmp(c,1,c->f[4],c->f[31]); // 800C1F00
  if (!crb(c,5)) { goto L_800C1FEC; } // 800C1F04
  c->r[3]=c->r[1]+0x00000008u; // 800C1F08
  c->r[5]=0u+0x806A0000u; // 800C1F0C
  c->r[4]=c->r[3]|c->r[3]; // 800C1F10
  c->r[5]=c->r[5]+0x00000AA8u; // 800C1F14
  c->lr=0x800C1F1Cu; f_8030E0BC(c); // 800C1F18
  c->r[3]=c->r[1]+0x00000008u; // 800C1F1C
  {uint32_t ea=c->r[31]+0x00000008u; psq_load(c,31,ea,0,0);} // 800C1F20
  {uint32_t ea=c->r[3]+0x00000004u; psq_load(c,0,ea,0,0);} // 800C1F24
  {double t0=S(c->f[31]*c->f[0]), t1=S(c->ps1[31]*c->ps1[0]); c->f[0]=t0; c->ps1[0]=t1;} // 800C1F28
  {uint32_t ea=c->r[31]+0x00000004u; c->f[31]=c->ps1[31]=RF32(ea);} // 800C1F2C
  {double t0=S(c->f[0]+c->ps1[0]), t1=S(c->ps1[31]); c->f[0]=t0; c->ps1[0]=t1;} // 800C1F30
  {uint32_t ea=c->r[1]+0x00000008u; c->f[31]=c->ps1[31]=RF32(ea);} // 800C1F34
  {double t0=S(std::fma(c->f[31],c->ps1[0],c->f[0])), t1=S(std::fma(c->ps1[31],c->ps1[0],c->ps1[0])); c->f[31]=t0; c->ps1[31]=t1;} // 800C1F38
  {uint32_t ea=c->r[2]+0xFFFFA1B4u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C1F3C
  fcmp(c,6,c->f[31],c->f[0]); // 800C1F40
  if (!crb(c,25)) { goto L_800C1F50; } // 800C1F44
  c->f[31]=c->f[0]; // 800C1F48
  goto L_800C1F60; // 800C1F4C
L_800C1F50:;
  {uint32_t ea=c->r[2]+0xFFFFA1B8u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C1F50
  fcmp(c,6,c->f[31],c->f[0]); // 800C1F54
  if (!crb(c,24)) { goto L_800C1F60; } // 800C1F58
  c->f[31]=c->f[0]; // 800C1F5C
L_800C1F60:;
  {uint32_t ea=c->r[2]+0xFFFFA1B4u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C1F60
  c->r[0]=0u+0x00000000u; // 800C1F64
  fcmp(c,6,c->f[31],c->f[0]); // 800C1F68
  setcrb(c,26,crb(c,24)|crb(c,26)); // 800C1F6C
  if (!crb(c,26)) { goto L_800C1F88; } // 800C1F70
  {uint32_t ea=c->r[2]+0xFFFFA1B8u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C1F74
  fcmp(c,6,c->f[31],c->f[0]); // 800C1F78
  setcrb(c,26,crb(c,25)|crb(c,26)); // 800C1F7C
  if (!crb(c,26)) { goto L_800C1F88; } // 800C1F80
  c->r[0]=0u+0x00000001u; // 800C1F84
L_800C1F88:;
  cmps(c,6,(int32_t)c->r[0],0); // 800C1F88
  if (!crb(c,26)) { goto L_800C1FAC; } // 800C1F8C
  c->r[3]=0u+0x806D0000u; // 800C1F90
  c->r[5]=0u+0x806D0000u; // 800C1F94
  c->r[3]=c->r[3]+0x000071D4u; // 800C1F98
  c->r[4]=0u+0x00000119u; // 800C1F9C
  c->r[5]=c->r[5]+0x000071ACu; // 800C1FA0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800C1FA4
  c->lr=0x800C1FACu; f_80484708(c); // 800C1FA8
L_800C1FAC:;
  c->f[1]=c->f[31]; // 800C1FAC
  c->lr=0x800C1FB4u; f_803BA740(c); // 800C1FB0
  c->f[1]=c->ps1[1]=S(c->f[1]); // 800C1FB4
  {uint32_t ea=c->r[2]+0xFFFFA1BCu; c->f[0]=c->ps1[0]=RF32(ea);} // 800C1FB8
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[1]); // 800C1FBC
  fcmp(c,1,c->f[0],c->f[30]); // 800C1FC0
  if (!crb(c,5)) { goto L_800C1FD4; } // 800C1FC4
  c->r[3]=R32(c->r[31]+0x00000010u); // 800C1FC8
  c->r[0]=c->r[3]+0x00000001u; // 800C1FCC
  W32(c->r[31]+0x00000010u,c->r[0]); // 800C1FD0
L_800C1FD4:;
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C1FD4
  {uint32_t ea=c->r[31]+0x00000004u; WF32(ea,c->f[0]);} // 800C1FD8
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800C1FDC
  {uint32_t ea=c->r[31]+0x00000008u; WF32(ea,c->f[0]);} // 800C1FE0
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C1FE4
  {uint32_t ea=c->r[31]+0x0000000Cu; WF32(ea,c->f[0]);} // 800C1FE8
L_800C1FEC:;
  {uint32_t ea=c->r[1]+0x00000038u; psq_load(c,31,ea,0,0);} // 800C1FEC
  {uint32_t ea=c->r[1]+0x00000030u; c->f[31]=RF64(ea);} // 800C1FF0
  {uint32_t ea=c->r[1]+0x00000028u; psq_load(c,30,ea,0,0);} // 800C1FF4
  c->r[3]=R32(c->r[31]+0x00000010u); // 800C1FF8
  {uint32_t ea=c->r[1]+0x00000020u; c->f[30]=RF64(ea);} // 800C1FFC
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800C2000
  c->r[0]=R32(c->r[1]+0x00000044u); // 800C2004
  c->lr=c->r[0]; // 800C2008
  c->r[1]=c->r[1]+0x00000040u; // 800C200C
  return; // 800C2010
}

// fn_800C2014
void f_800C2014(Ctx* __restrict c) {
  trace_call(0x800C2014u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C2014
  c->r[0]=c->lr; // 800C2018
  W32(c->r[1]+0x00000014u,c->r[0]); // 800C201C
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800C2020
  c->r[31]=c->r[5]|c->r[5]; // 800C2024
  c->r[30]=c->r[3]|c->r[3]; // 800C2028
  c->r[5]=c->r[3]+0x00000004u; // 800C202C
  c->lr=0x800C2034u; f_800C205C(c); // 800C2030
  c->r[0]=0u+0x00000000u; // 800C2034
  W32(c->r[30]+0x00000010u,c->r[0]); // 800C2038
  W32(c->r[30]+0x00000014u,c->r[31]); // 800C203C
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800C2040
  c->r[0]=R32(c->r[1]+0x00000014u); // 800C2044
  c->lr=c->r[0]; // 800C2048
  c->r[1]=c->r[1]+0x00000010u; // 800C204C
  return; // 800C2050
}

// fn_800C2054
void f_800C2054(Ctx* __restrict c) {
  trace_call(0x800C2054u);
  W32(c->r[3]+0x00000010u,c->r[4]); // 800C2054
  return; // 800C2058
}

// fn_800C205C
void f_800C205C(Ctx* __restrict c) {
  trace_call(0x800C205Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C205C
  c->r[0]=c->lr; // 800C2060
  cmps(c,0,(int32_t)c->r[4],0); // 800C2064
  W32(c->r[1]+0x00000044u,c->r[0]); // 800C2068
  W32(c->r[1]+0x0000003Cu,c->r[31]); // 800C206C
  c->r[31]=c->r[5]|c->r[5]; // 800C2070
  W32(c->r[1]+0x00000038u,c->r[30]); // 800C2074
  c->r[30]=c->r[4]|c->r[4]; // 800C2078
  if (!crb(c,0)) { goto L_800C2098; } // 800C207C
  {uint32_t ea=c->r[2]+0xFFFFA1C0u; c->f[1]=c->ps1[1]=RF32(ea);} // 800C2080
  {uint32_t ea=c->r[2]+0xFFFFA1B4u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C2084
  {uint32_t ea=c->r[5]+0x00000000u; WF32(ea,c->f[1]);} // 800C2088
  {uint32_t ea=c->r[5]+0x00000004u; WF32(ea,c->f[0]);} // 800C208C
  {uint32_t ea=c->r[5]+0x00000008u; WF32(ea,c->f[1]);} // 800C2090
  goto L_800C2154; // 800C2094
L_800C2098:;
  c->r[0]=R32(c->r[3]+0x00000014u); // 800C2098
  cmps(c,0,(int32_t)c->r[0],0); // 800C209C
  if (crb(c,2)) { goto L_800C20B0; } // 800C20A0
  cmps(c,0,(int32_t)c->r[0],1); // 800C20A4
  if (crb(c,2)) { goto L_800C20E8; } // 800C20A8
  goto L_800C2120; // 800C20AC
L_800C20B0:;
  c->r[0]=0u+0x00000000u; // 800C20B0
  W8(c->r[1]+0x00000010u,c->r[0]); // 800C20B4
  c->r[3]=c->r[1]+0x00000010u; // 800C20B8
  c->lr=0x800C20C0u; f_80048270(c); // 800C20BC
  c->r[4]=c->r[30]|c->r[30]; // 800C20C0
  c->lr=0x800C20C8u; f_800481D0(c); // 800C20C4
  c->lr=0x800C20CCu; f_8029D2C8(c); // 800C20C8
  c->r[4]=c->r[3]|c->r[3]; // 800C20CC
  c->r[3]=c->r[1]+0x0000002Cu; // 800C20D0
  c->lr=0x800C20D8u; f_800C216C(c); // 800C20D4
  c->r[4]=c->r[3]|c->r[3]; // 800C20D8
  c->r[3]=c->r[31]|c->r[31]; // 800C20DC
  c->lr=0x800C20E4u; f_800B6DE8(c); // 800C20E0
  goto L_800C2154; // 800C20E4
L_800C20E8:;
  c->r[0]=0u+0x00000000u; // 800C20E8
  W8(c->r[1]+0x0000000Cu,c->r[0]); // 800C20EC
  c->r[3]=c->r[1]+0x0000000Cu; // 800C20F0
  c->lr=0x800C20F8u; f_80048270(c); // 800C20F4
  c->r[4]=c->r[30]|c->r[30]; // 800C20F8
  c->lr=0x800C2100u; f_800481D0(c); // 800C20FC
  c->lr=0x800C2104u; f_8029D3D4(c); // 800C2100
  c->r[4]=c->r[3]|c->r[3]; // 800C2104
  c->r[3]=c->r[1]+0x00000020u; // 800C2108
  c->lr=0x800C2110u; f_800C216C(c); // 800C210C
  c->r[4]=c->r[3]|c->r[3]; // 800C2110
  c->r[3]=c->r[31]|c->r[31]; // 800C2114
  c->lr=0x800C211Cu; f_800B6DE8(c); // 800C2118
  goto L_800C2154; // 800C211C
L_800C2120:;
  c->r[0]=0u+0x00000000u; // 800C2120
  W8(c->r[1]+0x00000008u,c->r[0]); // 800C2124
  c->r[3]=c->r[1]+0x00000008u; // 800C2128
  c->lr=0x800C2130u; f_80048270(c); // 800C212C
  c->r[4]=c->r[30]|c->r[30]; // 800C2130
  c->lr=0x800C2138u; f_800481D0(c); // 800C2134
  c->lr=0x800C213Cu; f_8029D2C8(c); // 800C2138
  c->r[4]=c->r[3]|c->r[3]; // 800C213C
  c->r[3]=c->r[1]+0x00000014u; // 800C2140
  c->lr=0x800C2148u; f_800C216C(c); // 800C2144
  c->r[4]=c->r[3]|c->r[3]; // 800C2148
  c->r[3]=c->r[31]|c->r[31]; // 800C214C
  c->lr=0x800C2154u; f_800B6DE8(c); // 800C2150
L_800C2154:;
  c->r[0]=R32(c->r[1]+0x00000044u); // 800C2154
  c->r[31]=R32(c->r[1]+0x0000003Cu); // 800C2158
  c->r[30]=R32(c->r[1]+0x00000038u); // 800C215C
  c->lr=c->r[0]; // 800C2160
  c->r[1]=c->r[1]+0x00000040u; // 800C2164
  return; // 800C2168
}

// fn_800C216C
void f_800C216C(Ctx* __restrict c) {
  trace_call(0x800C216Cu);
  {uint32_t ea=c->r[4]+0x00000000u; c->f[2]=c->ps1[2]=RF32(ea);} // 800C216C
  {uint32_t ea=c->r[4]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 800C2170
  {uint32_t ea=c->r[4]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C2174
  {uint32_t ea=c->r[3]+0x00000000u; WF32(ea,c->f[2]);} // 800C2178
  {uint32_t ea=c->r[3]+0x00000004u; WF32(ea,c->f[1]);} // 800C217C
  {uint32_t ea=c->r[3]+0x00000008u; WF32(ea,c->f[0]);} // 800C2180
  return; // 800C2184
}

// fn_800C2188
void f_800C2188(Ctx* __restrict c) {
  trace_call(0x800C2188u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C2188
  c->r[0]=c->lr; // 800C218C
  c->r[4]=0u+0x806D0000u; // 800C2190
  W32(c->r[1]+0x00000014u,c->r[0]); // 800C2194
  c->r[4]=c->r[4]+0x000071E8u; // 800C2198
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800C219C
  c->r[31]=c->r[3]|c->r[3]; // 800C21A0
  W32(c->r[3]+0x00000000u,c->r[4]); // 800C21A4
  c->r[3]=c->r[3]+0x0000001Cu; // 800C21A8
  c->lr=0x800C21B0u; f_802DBEC0(c); // 800C21AC
  c->r[3]=c->r[31]|c->r[31]; // 800C21B0
  c->lr=0x800C21B8u; f_800C24D4(c); // 800C21B4
  {uint32_t ea=c->r[2]+0xFFFFA1C8u; c->f[1]=c->ps1[1]=RF32(ea);} // 800C21B8
  c->r[3]=c->r[31]|c->r[31]; // 800C21BC
  {uint32_t ea=c->r[2]+0xFFFFA1CCu; c->f[0]=c->ps1[0]=RF32(ea);} // 800C21C0
  {uint32_t ea=c->r[31]+0x00000004u; WF32(ea,c->f[1]);} // 800C21C4
  {uint32_t ea=c->r[31]+0x00000008u; WF32(ea,c->f[0]);} // 800C21C8
  {uint32_t ea=c->r[31]+0x0000000Cu; WF32(ea,c->f[1]);} // 800C21CC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800C21D0
  c->r[0]=R32(c->r[1]+0x00000014u); // 800C21D4
  c->lr=c->r[0]; // 800C21D8
  c->r[1]=c->r[1]+0x00000010u; // 800C21DC
  return; // 800C21E0
}

// dtor_800C21E4
void f_800C21E4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C21E4
  c->r[0]=c->lr; // 800C21E8
  cmps(c,0,(int32_t)c->r[3],0); // 800C21EC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800C21F0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800C21F4
  c->r[31]=c->r[3]|c->r[3]; // 800C21F8
  if (crb(c,2)) { goto L_800C220C; } // 800C21FC
  c->r[4]=0u+0xFFFFFFFFu; // 800C2200
  c->r[3]=c->r[3]+0x0000001Cu; // 800C2204
  c->lr=0x800C220Cu; f_802DBEFC(c); // 800C2208
L_800C220C:;
  c->r[3]=c->r[31]|c->r[31]; // 800C220C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800C2210
  c->r[0]=R32(c->r[1]+0x00000014u); // 800C2214
  c->lr=c->r[0]; // 800C2218
  c->r[1]=c->r[1]+0x00000010u; // 800C221C
  return; // 800C2220
}

// fn_800C2224
void f_800C2224(Ctx* __restrict c) {
  trace_call(0x800C2224u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C2224
  c->r[0]=c->lr; // 800C2228
  W32(c->r[1]+0x00000024u,c->r[0]); // 800C222C
  c->r[11]=c->r[1]+0x00000020u; // 800C2230
  c->lr=0x800C2238u; { W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800C2234
  c->r[29]=c->r[3]|c->r[3]; // 800C2238
  c->r[30]=c->r[4]|c->r[4]; // 800C223C
  c->r[31]=c->r[5]|c->r[5]; // 800C2240
  c->lr=0x800C2248u; f_800C24D4(c); // 800C2244
  {uint32_t ea=c->r[2]+0xFFFFA1C8u; c->f[1]=c->ps1[1]=RF32(ea);} // 800C2248
  c->r[4]=c->r[30]|c->r[30]; // 800C224C
  {uint32_t ea=c->r[2]+0xFFFFA1D0u; c->f[2]=c->ps1[2]=RF32(ea);} // 800C2250
  c->r[5]=c->r[31]|c->r[31]; // 800C2254
  c->r[3]=c->r[29]+0x0000001Cu; // 800C2258
  c->lr=0x800C2260u; f_802DBF00(c); // 800C225C
  c->r[11]=c->r[1]+0x00000020u; // 800C2260
  c->lr=0x800C2268u; { c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800C2264
  c->r[0]=R32(c->r[1]+0x00000024u); // 800C2268
  c->lr=c->r[0]; // 800C226C
  c->r[1]=c->r[1]+0x00000020u; // 800C2270
  return; // 800C2274
}

// fn_800C2278
void f_800C2278(Ctx* __restrict c) {
  trace_call(0x800C2278u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C2278
  c->r[0]=c->lr; // 800C227C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800C2280
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800C2284
  c->r[31]=c->r[3]|c->r[3]; // 800C2288
  c->r[3]=c->r[3]+0x0000001Cu; // 800C228C
  c->lr=0x800C2294u; f_802DBF9C(c); // 800C2290
  c->r[0]=0u+0x00000000u; // 800C2294
  W32(c->r[31]+0x00000074u,c->r[0]); // 800C2298
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800C229C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800C22A0
  c->lr=c->r[0]; // 800C22A4
  c->r[1]=c->r[1]+0x00000010u; // 800C22A8
  return; // 800C22AC
}

// fn_800C22B0
void f_800C22B0(Ctx* __restrict c) {
  trace_call(0x800C22B0u);
  {uint32_t ea=c->r[1]+0xFFFFFF80u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C22B0
  c->r[0]=c->lr; // 800C22B4
  W32(c->r[1]+0x00000084u,c->r[0]); // 800C22B8
  c->r[11]=c->r[1]+0x00000080u; // 800C22BC
  c->lr=0x800C22C4u; { W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800C22C0
  c->r[31]=c->r[3]|c->r[3]; // 800C22C4
  c->r[3]=c->r[3]+0x0000001Cu; // 800C22C8
  c->lr=0x800C22D0u; f_802DBFAC(c); // 800C22CC
  c->r[29]=c->r[3]|c->r[3]; // 800C22D0
  c->r[3]=c->r[31]|c->r[31]; // 800C22D4
  c->lr=0x800C22DCu; f_800C24F0(c); // 800C22D8
  c->r[0]=R32(c->r[31]+0x00000074u); // 800C22DC
  cmps(c,1,(int32_t)c->r[0],1); // 800C22E0
  if (!crb(c,6)) { goto L_800C2464; } // 800C22E4
  cmps(c,1,(int32_t)c->r[29],2); // 800C22E8
  if (!crb(c,5)) { goto L_800C2474; } // 800C22EC
  c->r[3]=c->r[31]+0x0000001Cu; // 800C22F0
  c->lr=0x800C22F8u; f_802DC408(c); // 800C22F4
  {uint32_t ea=c->r[3]+0x00000000u; c->f[2]=c->ps1[2]=RF32(ea);} // 800C22F8
  c->r[4]=c->r[1]+0x00000018u; // 800C22FC
  {uint32_t ea=c->r[3]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C2300
  {uint32_t ea=c->r[3]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 800C2304
  {uint32_t ea=c->r[2]+0xFFFFA1C8u; c->f[5]=c->ps1[5]=RF32(ea);} // 800C2308
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[0]);} // 800C230C
  {uint32_t ea=c->r[1]+0x00000020u; WF32(ea,c->f[5]);} // 800C2310
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[2]);} // 800C2314
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[0]);} // 800C2318
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[1]);} // 800C231C
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[2]);} // 800C2320
  {uint32_t ea=c->r[4]+0x00000004u; psq_load(c,3,ea,0,0);} // 800C2324
  {double t0=S(c->f[3]*c->f[3]), t1=S(c->ps1[3]*c->ps1[3]); c->f[0]=t0; c->ps1[0]=t1;} // 800C2328
  c->f[3]=c->ps1[3]=S(c->f[2]); // 800C232C
  {double t0=S(c->f[0]+c->ps1[0]), t1=S(c->ps1[3]); c->f[0]=t0; c->ps1[0]=t1;} // 800C2330
  {double t0=S(std::fma(c->f[3],c->ps1[0],c->f[0])), t1=S(std::fma(c->ps1[3],c->ps1[0],c->ps1[0])); c->f[3]=t0; c->ps1[3]=t1;} // 800C2334
  {uint32_t ea=c->r[2]+0xFFFFA1D4u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C2338
  fcmp(c,1,c->f[3],c->f[0]); // 800C233C
  c->r[0]=c->cr; // 800C2340
  c->r[0]=rotl(c->r[0],5)&0x00000001u; // 800C2344
  cmps(c,1,(int32_t)c->r[0],0); // 800C2348
  if (!crb(c,6)) { goto L_800C239C; } // 800C234C
  c->r[3]=0u+0x806A0000u; // 800C2350
  {uint32_t ea=c->r[4]+0x00000004u; psq_load(c,5,ea,0,0);} // 800C2354
  {double t0=S(c->f[5]*c->f[5]), t1=S(c->ps1[5]*c->ps1[5]); c->f[4]=t0; c->ps1[4]=t1;} // 800C2358
  {uint32_t ea=c->r[1]+0x00000018u; c->f[5]=c->ps1[5]=RF32(ea);} // 800C235C
  {double t0=S(c->f[4]+c->ps1[4]), t1=S(c->ps1[5]); c->f[4]=t0; c->ps1[4]=t1;} // 800C2360
  {uint32_t ea=c->r[3]+0x00000AA8u; c->f[3]=c->ps1[3]=RF32(ea); c->r[3]=ea;} // 800C2364
  {double t0=S(std::fma(c->f[5],c->ps1[4],c->f[4])), t1=S(std::fma(c->ps1[5],c->ps1[4],c->ps1[4])); c->f[5]=t0; c->ps1[5]=t1;} // 800C2368
  fcmp(c,0,c->f[3],c->f[5]); // 800C236C
  if (crb(c,0)) { goto L_800C237C; } // 800C2370
  c->f[5]=c->f[3]; // 800C2374
  goto L_800C239C; // 800C2378
L_800C237C:;
  {uint32_t ea=c->r[3]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 800C237C
  c->f[4]=frsqrte(c->f[5]); // 800C2380
  {uint32_t ea=c->r[3]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C2384
  c->f[3]=c->ps1[3]=S(c->f[4]*c->f[4]); // 800C2388
  c->f[2]=c->ps1[2]=S(c->f[4]*c->f[2]); // 800C238C
  c->f[3]=c->ps1[3]=S(-std::fma(c->f[3],c->f[5],-c->f[0])); // 800C2390
  c->f[4]=c->ps1[4]=S(c->f[3]*c->f[2]); // 800C2394
  c->f[5]=c->ps1[5]=S(c->f[5]*c->f[4]); // 800C2398
L_800C239C:;
  c->f[0]=std::fabs(c->f[1]); // 800C239C
  fcmp(c,1,c->f[5],c->f[0]); // 800C23A0
  if (!crb(c,4)) { goto L_800C23CC; } // 800C23A4
  {uint32_t ea=c->r[2]+0xFFFFA1C8u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C23A8
  fcmp(c,1,c->f[1],c->f[0]); // 800C23AC
  if (!crb(c,5)) { goto L_800C23C0; } // 800C23B0
  c->r[0]=0u+0x00000003u; // 800C23B4
  W32(c->r[31]+0x00000074u,c->r[0]); // 800C23B8
  goto L_800C2474; // 800C23BC
L_800C23C0:;
  c->r[0]=0u+0x00000000u; // 800C23C0
  W32(c->r[31]+0x00000074u,c->r[0]); // 800C23C4
  goto L_800C2474; // 800C23C8
L_800C23CC:;
  {uint32_t ea=c->r[31]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 800C23CC
  {uint32_t ea=c->r[31]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 800C23D0
  c->lr=0x800C23D8u; f_804E1378(c); // 800C23D4
  {uint32_t ea=c->r[2]+0xFFFFA1D8u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C23D8
  c->r[0]=0u+0x43300000u; // 800C23DC
  {uint32_t ea=c->r[2]+0xFFFFA1E0u; c->f[4]=c->ps1[4]=RF32(ea);} // 800C23E0
  c->r[3]=c->r[1]+0x00000028u; // 800C23E4
  c->f[3]=c->ps1[3]=S(c->f[0]*c->f[1]); // 800C23E8
  {uint32_t ea=c->r[2]+0xFFFFA1C8u; c->f[1]=c->ps1[1]=RF32(ea);} // 800C23EC
  {uint32_t ea=c->r[2]+0xFFFFA1DCu; c->f[0]=c->ps1[0]=RF32(ea);} // 800C23F0
  W32(c->r[1]+0x00000060u,c->r[0]); // 800C23F4
  c->f[2]=c->f[1]; // 800C23F8
  c->f[6]=-c->f[3]; // 800C23FC
  {uint32_t ea=c->r[2]+0xFFFFA1F0u; c->f[5]=RF64(ea);} // 800C2400
  {uint32_t ea=c->r[2]+0xFFFFA1E8u; c->f[3]=c->ps1[3]=RF32(ea);} // 800C2404
  c->f[4]=c->ps1[4]=S(std::fma(c->f[4],c->f[6],c->f[0])); // 800C2408
  {uint32_t ea=c->r[2]+0xFFFFA1E4u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C240C
  c->f[4]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[4],true)); // 800C2410
  {uint32_t ea=c->r[1]+0x00000058u; WF64(ea,c->f[4]);} // 800C2414
  c->r[0]=R32(c->r[1]+0x0000005Cu); // 800C2418
  c->r[4]=rotl(c->r[0],16)&0xFFFF0000u; // 800C241C
  c->r[0]=c->r[4]+0xC0000000u; // 800C2420
  c->r[0]=sraw(c,c->r[0],16); // 800C2424
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[0]; // 800C2428
  c->r[0]=c->r[0]^0x80000000u; // 800C242C
  W32(c->r[1]+0x00000064u,c->r[0]); // 800C2430
  {uint32_t ea=c->r[1]+0x00000060u; c->f[4]=RF64(ea);} // 800C2434
  c->f[4]=c->ps1[4]=S(c->f[4]-c->f[5]); // 800C2438
  c->f[3]=c->ps1[3]=S(c->f[3]*c->f[4]); // 800C243C
  c->f[3]=c->ps1[3]=S(c->f[0]*c->f[3]); // 800C2440
  c->lr=0x800C2448u; f_804E18A0(c); // 800C2444
  c->r[3]=c->r[1]+0x00000028u; // 800C2448
  c->r[4]=c->r[1]+0x00000018u; // 800C244C
  c->r[5]=c->r[31]+0x00000010u; // 800C2450
  c->lr=0x800C2458u; f_80383AA0(c); // 800C2454
  c->r[0]=0u+0x00000002u; // 800C2458
  W32(c->r[31]+0x00000074u,c->r[0]); // 800C245C
  goto L_800C2474; // 800C2460
L_800C2464:;
  cmps(c,1,(int32_t)c->r[29],20); // 800C2464
  if (!crb(c,4)) { goto L_800C2474; } // 800C2468
  c->r[0]=0u+0x00000001u; // 800C246C
  W32(c->r[31]+0x00000074u,c->r[0]); // 800C2470
L_800C2474:;
  c->r[29]=0u+0x00000000u; // 800C2474
  W8(c->r[1]+0x00000008u,c->r[29]); // 800C2478
  c->r[28]=c->r[1]+0x00000008u; // 800C247C
  c->r[3]=c->r[31]+0x0000001Cu; // 800C2480
  c->lr=0x800C2488u; f_802DC3F8(c); // 800C2484
  c->r[30]=c->r[3]|c->r[3]; // 800C2488
  c->r[3]=c->r[28]|c->r[28]; // 800C248C
  c->lr=0x800C2494u; f_80048270(c); // 800C2490
  c->r[4]=c->r[30]|c->r[30]; // 800C2494
  c->lr=0x800C249Cu; f_800481D0(c); // 800C2498
  c->r[0]=R32(c->r[3]+0x00002A28u); // 800C249C
  cmps(c,1,(int32_t)c->r[0],-1); // 800C24A0
  if (!crb(c,6)) { goto L_800C24AC; } // 800C24A4
  W32(c->r[31]+0x00000074u,c->r[29]); // 800C24A8
L_800C24AC:;
  c->r[11]=c->r[1]+0x00000080u; // 800C24AC
  c->lr=0x800C24B4u; { c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800C24B0
  c->r[0]=R32(c->r[1]+0x00000084u); // 800C24B4
  c->lr=c->r[0]; // 800C24B8
  c->r[1]=c->r[1]+0x00000080u; // 800C24BC
  return; // 800C24C0
}

// fn_800C24C4
void f_800C24C4(Ctx* __restrict c) {
  trace_call(0x800C24C4u);
  c->r[3]=R32(c->r[3]+0x00000074u); // 800C24C4
  return; // 800C24C8
}

// fn_800C24CC
void f_800C24CC(Ctx* __restrict c) {
  trace_call(0x800C24CCu);
  c->r[3]=c->r[3]+0x00000010u; // 800C24CC
  return; // 800C24D0
}

// fn_800C24D4
void f_800C24D4(Ctx* __restrict c) {
  trace_call(0x800C24D4u);
  {uint32_t ea=c->r[2]+0xFFFFA1C8u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C24D4
  c->r[0]=0u+0x00000000u; // 800C24D8
  {uint32_t ea=c->r[3]+0x00000010u; WF32(ea,c->f[0]);} // 800C24DC
  {uint32_t ea=c->r[3]+0x00000014u; WF32(ea,c->f[0]);} // 800C24E0
  {uint32_t ea=c->r[3]+0x00000018u; WF32(ea,c->f[0]);} // 800C24E4
  W32(c->r[3]+0x00000074u,c->r[0]); // 800C24E8
  return; // 800C24EC
}

// fn_800C24F0
void f_800C24F0(Ctx* __restrict c) {
  trace_call(0x800C24F0u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C24F0
  c->r[0]=c->lr; // 800C24F4
  W32(c->r[1]+0x00000034u,c->r[0]); // 800C24F8
  c->r[11]=c->r[1]+0x00000030u; // 800C24FC
  c->lr=0x800C2504u; { W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800C2500
  c->r[28]=c->r[3]|c->r[3]; // 800C2504
  c->r[3]=c->r[3]+0x0000001Cu; // 800C2508
  c->lr=0x800C2510u; f_802DC400(c); // 800C250C
  cmps(c,0,(int32_t)c->r[3],0); // 800C2510
  if (!crb(c,2)) { goto L_800C25CC; } // 800C2514
  c->r[31]=0u+0x00000000u; // 800C2518
  W8(c->r[1]+0x0000001Cu,c->r[31]); // 800C251C
  c->r[29]=c->r[1]+0x0000001Cu; // 800C2520
  c->r[3]=c->r[28]+0x0000001Cu; // 800C2524
  c->lr=0x800C252Cu; f_802DC3F8(c); // 800C2528
  c->r[30]=c->r[3]|c->r[3]; // 800C252C
  c->r[3]=c->r[29]|c->r[29]; // 800C2530
  c->lr=0x800C2538u; f_80048270(c); // 800C2534
  c->r[4]=c->r[30]|c->r[30]; // 800C2538
  c->lr=0x800C2540u; f_800481D0(c); // 800C253C
  c->lr=0x800C2544u; f_8029D4E0(c); // 800C2540
  {uint32_t ea=c->r[2]+0xFFFFA1F8u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C2544
  fcmp(c,0,c->f[1],c->f[0]); // 800C2548
  if (!crb(c,0)) { goto L_800C267C; } // 800C254C
  W8(c->r[1]+0x00000018u,c->r[31]); // 800C2550
  c->r[29]=c->r[1]+0x00000018u; // 800C2554
  c->r[3]=c->r[28]+0x0000001Cu; // 800C2558
  c->lr=0x800C2560u; f_802DC3F8(c); // 800C255C
  c->r[30]=c->r[3]|c->r[3]; // 800C2560
  c->r[3]=c->r[29]|c->r[29]; // 800C2564
  c->lr=0x800C256Cu; f_80048270(c); // 800C2568
  c->r[4]=c->r[30]|c->r[30]; // 800C256C
  c->lr=0x800C2574u; f_800481D0(c); // 800C2570
  c->lr=0x800C2578u; f_8029D32C(c); // 800C2574
  {uint32_t ea=c->r[28]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 800C2578
  c->r[29]=c->r[1]+0x00000014u; // 800C257C
  {uint32_t ea=c->r[2]+0xFFFFA1FCu; c->f[0]=c->ps1[0]=RF32(ea);} // 800C2580
  c->r[3]=c->r[28]+0x0000001Cu; // 800C2584
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 800C2588
  c->f[0]=c->ps1[0]=S(std::fma(c->f[0],c->f[1],c->f[2])); // 800C258C
  {uint32_t ea=c->r[28]+0x00000004u; WF32(ea,c->f[0]);} // 800C2590
  W8(c->r[1]+0x00000014u,c->r[31]); // 800C2594
  c->lr=0x800C259Cu; f_802DC3F8(c); // 800C2598
  c->r[30]=c->r[3]|c->r[3]; // 800C259C
  c->r[3]=c->r[29]|c->r[29]; // 800C25A0
  c->lr=0x800C25A8u; f_80048270(c); // 800C25A4
  c->r[4]=c->r[30]|c->r[30]; // 800C25A8
  c->lr=0x800C25B0u; f_800481D0(c); // 800C25AC
  c->lr=0x800C25B4u; f_8029D380(c); // 800C25B0
  {uint32_t ea=c->r[28]+0x00000008u; c->f[2]=c->ps1[2]=RF32(ea);} // 800C25B4
  {uint32_t ea=c->r[2]+0xFFFFA1FCu; c->f[0]=c->ps1[0]=RF32(ea);} // 800C25B8
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 800C25BC
  c->f[0]=c->ps1[0]=S(std::fma(c->f[0],c->f[1],c->f[2])); // 800C25C0
  {uint32_t ea=c->r[28]+0x00000008u; WF32(ea,c->f[0]);} // 800C25C4
  goto L_800C267C; // 800C25C8
L_800C25CC:;
  c->r[30]=0u+0x00000000u; // 800C25CC
  W8(c->r[1]+0x00000010u,c->r[30]); // 800C25D0
  c->r[29]=c->r[1]+0x00000010u; // 800C25D4
  c->r[3]=c->r[28]+0x0000001Cu; // 800C25D8
  c->lr=0x800C25E0u; f_802DC3F8(c); // 800C25DC
  c->r[31]=c->r[3]|c->r[3]; // 800C25E0
  c->r[3]=c->r[29]|c->r[29]; // 800C25E4
  c->lr=0x800C25ECu; f_80048270(c); // 800C25E8
  c->r[4]=c->r[31]|c->r[31]; // 800C25EC
  c->lr=0x800C25F4u; f_800481D0(c); // 800C25F0
  c->lr=0x800C25F8u; f_8029D534(c); // 800C25F4
  {uint32_t ea=c->r[2]+0xFFFFA1F8u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C25F8
  fcmp(c,0,c->f[1],c->f[0]); // 800C25FC
  if (!crb(c,0)) { goto L_800C267C; } // 800C2600
  W8(c->r[1]+0x0000000Cu,c->r[30]); // 800C2604
  c->r[29]=c->r[1]+0x0000000Cu; // 800C2608
  c->r[3]=c->r[28]+0x0000001Cu; // 800C260C
  c->lr=0x800C2614u; f_802DC3F8(c); // 800C2610
  c->r[31]=c->r[3]|c->r[3]; // 800C2614
  c->r[3]=c->r[29]|c->r[29]; // 800C2618
  c->lr=0x800C2620u; f_80048270(c); // 800C261C
  c->r[4]=c->r[31]|c->r[31]; // 800C2620
  c->lr=0x800C2628u; f_800481D0(c); // 800C2624
  c->lr=0x800C262Cu; f_8029D438(c); // 800C2628
  {uint32_t ea=c->r[28]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 800C262C
  c->r[29]=c->r[1]+0x00000008u; // 800C2630
  {uint32_t ea=c->r[2]+0xFFFFA1FCu; c->f[0]=c->ps1[0]=RF32(ea);} // 800C2634
  c->r[3]=c->r[28]+0x0000001Cu; // 800C2638
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 800C263C
  c->f[0]=c->ps1[0]=S(std::fma(c->f[0],c->f[1],c->f[2])); // 800C2640
  {uint32_t ea=c->r[28]+0x00000004u; WF32(ea,c->f[0]);} // 800C2644
  W8(c->r[1]+0x00000008u,c->r[30]); // 800C2648
  c->lr=0x800C2650u; f_802DC3F8(c); // 800C264C
  c->r[31]=c->r[3]|c->r[3]; // 800C2650
  c->r[3]=c->r[29]|c->r[29]; // 800C2654
  c->lr=0x800C265Cu; f_80048270(c); // 800C2658
  c->r[4]=c->r[31]|c->r[31]; // 800C265C
  c->lr=0x800C2664u; f_800481D0(c); // 800C2660
  c->lr=0x800C2668u; f_8029D48C(c); // 800C2664
  {uint32_t ea=c->r[28]+0x00000008u; c->f[2]=c->ps1[2]=RF32(ea);} // 800C2668
  {uint32_t ea=c->r[2]+0xFFFFA1FCu; c->f[0]=c->ps1[0]=RF32(ea);} // 800C266C
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 800C2670
  c->f[0]=c->ps1[0]=S(std::fma(c->f[0],c->f[1],c->f[2])); // 800C2674
  {uint32_t ea=c->r[28]+0x00000008u; WF32(ea,c->f[0]);} // 800C2678
L_800C267C:;
  c->r[11]=c->r[1]+0x00000030u; // 800C267C
  c->lr=0x800C2684u; { c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800C2680
  c->r[0]=R32(c->r[1]+0x00000034u); // 800C2684
  c->lr=c->r[0]; // 800C2688
  c->r[1]=c->r[1]+0x00000030u; // 800C268C
  return; // 800C2690
}

// fn_800C2694
void f_800C2694(Ctx* __restrict c) {
  trace_call(0x800C2694u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C2694
  c->r[0]=c->lr; // 800C2698
  c->r[4]=0u+0x806D0000u; // 800C269C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800C26A0
  c->r[4]=c->r[4]+0x000071F8u; // 800C26A4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800C26A8
  c->r[31]=c->r[3]|c->r[3]; // 800C26AC
  W32(c->r[3]+0x00000000u,c->r[4]); // 800C26B0
  c->r[3]=c->r[3]+0x00000004u; // 800C26B4
  c->lr=0x800C26BCu; f_800C2764(c); // 800C26B8
  c->r[3]=c->r[31]+0x00000010u; // 800C26BC
  c->lr=0x800C26C4u; f_800C2764(c); // 800C26C0
  c->r[4]=0u+0x800C0000u; // 800C26C4
  c->r[5]=0u+0x800C0000u; // 800C26C8
  c->r[3]=c->r[31]+0x0000001Cu; // 800C26CC
  c->r[6]=0u+0x00000018u; // 800C26D0
  c->r[4]=c->r[4]+0x00002704u; // 800C26D4
  c->r[5]=c->r[5]+0x000027D0u; // 800C26D8
  c->r[7]=0u+0x00000010u; // 800C26DC
  c->lr=0x800C26E4u; f_803A9830(c); // 800C26E0
  c->r[3]=c->r[31]|c->r[31]; // 800C26E4
  c->lr=0x800C26ECu; f_800C287C(c); // 800C26E8
  c->r[3]=c->r[31]|c->r[31]; // 800C26EC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800C26F0
  c->r[0]=R32(c->r[1]+0x00000014u); // 800C26F4
  c->lr=c->r[0]; // 800C26F8
  c->r[1]=c->r[1]+0x00000010u; // 800C26FC
  return; // 800C2700
}

// fn_800C2704
void f_800C2704(Ctx* __restrict c) {
  trace_call(0x800C2704u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C2704
  c->r[0]=c->lr; // 800C2708
  W32(c->r[1]+0x00000014u,c->r[0]); // 800C270C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800C2710
  c->r[31]=c->r[3]|c->r[3]; // 800C2714
  c->lr=0x800C271Cu; f_800506C0(c); // 800C2718
  c->r[0]=0u+0x00000000u; // 800C271C
  W32(c->r[31]+0x00000008u,c->r[31]); // 800C2720
  c->r[3]=c->r[31]|c->r[31]; // 800C2724
  W32(c->r[31]+0x0000000Cu,c->r[0]); // 800C2728
  W32(c->r[31]+0x00000010u,c->r[0]); // 800C272C
  c->lr=0x800C2734u; f_800C274C(c); // 800C2730
  c->r[3]=c->r[31]|c->r[31]; // 800C2734
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800C2738
  c->r[0]=R32(c->r[1]+0x00000014u); // 800C273C
  c->lr=c->r[0]; // 800C2740
  c->r[1]=c->r[1]+0x00000010u; // 800C2744
  return; // 800C2748
}

// fn_800C274C
void f_800C274C(Ctx* __restrict c) {
  trace_call(0x800C274Cu);
  {uint32_t ea=c->r[2]+0xFFFFA200u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C274C
  c->r[0]=0u+0x00000000u; // 800C2750
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 800C2754
  W32(c->r[3]+0x00000010u,c->r[0]); // 800C2758
  {uint32_t ea=c->r[3]+0x00000014u; WF32(ea,c->f[0]);} // 800C275C
  return; // 800C2760
}

// fn_800C2764
void f_800C2764(Ctx* __restrict c) {
  trace_call(0x800C2764u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C2764
  c->r[0]=c->lr; // 800C2768
  W32(c->r[1]+0x00000014u,c->r[0]); // 800C276C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800C2770
  c->r[31]=c->r[3]|c->r[3]; // 800C2774
  c->lr=0x800C277Cu; f_800506C0(c); // 800C2778
  c->r[3]=c->r[31]|c->r[31]; // 800C277C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800C2780
  c->r[0]=R32(c->r[1]+0x00000014u); // 800C2784
  c->lr=c->r[0]; // 800C2788
  c->r[1]=c->r[1]+0x00000010u; // 800C278C
  return; // 800C2790
}

// dtor_800C2794
void f_800C2794(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C2794
  c->r[0]=c->lr; // 800C2798
  cmps(c,0,(int32_t)c->r[3],0); // 800C279C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800C27A0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800C27A4
  c->r[31]=c->r[3]|c->r[3]; // 800C27A8
  if (crb(c,2)) { goto L_800C27B8; } // 800C27AC
  c->r[4]=0u+0x00000000u; // 800C27B0
  c->lr=0x800C27B8u; f_80045C7C(c); // 800C27B4
L_800C27B8:;
  c->r[3]=c->r[31]|c->r[31]; // 800C27B8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800C27BC
  c->r[0]=R32(c->r[1]+0x00000014u); // 800C27C0
  c->lr=c->r[0]; // 800C27C4
  c->r[1]=c->r[1]+0x00000010u; // 800C27C8
  return; // 800C27CC
}

// dtor_800C27D0
void f_800C27D0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C27D0
  c->r[0]=c->lr; // 800C27D4
  cmps(c,0,(int32_t)c->r[3],0); // 800C27D8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800C27DC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800C27E0
  c->r[31]=c->r[3]|c->r[3]; // 800C27E4
  if (crb(c,2)) { goto L_800C27F8; } // 800C27E8
  if (crb(c,2)) { goto L_800C27F8; } // 800C27EC
  c->r[4]=0u+0x00000000u; // 800C27F0
  c->lr=0x800C27F8u; f_800455D8(c); // 800C27F4
L_800C27F8:;
  c->r[3]=c->r[31]|c->r[31]; // 800C27F8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800C27FC
  c->r[0]=R32(c->r[1]+0x00000014u); // 800C2800
  c->lr=c->r[0]; // 800C2804
  c->r[1]=c->r[1]+0x00000010u; // 800C2808
  return; // 800C280C
}

// fn_800C2810
void f_800C2810(Ctx* __restrict c) {
  trace_call(0x800C2810u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C2810
  c->r[0]=c->lr; // 800C2814
  cmps(c,0,(int32_t)c->r[3],0); // 800C2818
  W32(c->r[1]+0x00000014u,c->r[0]); // 800C281C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800C2820
  c->r[31]=c->r[3]|c->r[3]; // 800C2824
  if (crb(c,2)) { goto L_800C2864; } // 800C2828
  c->r[4]=0u+0x800C0000u; // 800C282C
  c->r[5]=0u+0x00000018u; // 800C2830
  c->r[4]=c->r[4]+0x000027D0u; // 800C2834
  c->r[6]=0u+0x00000010u; // 800C2838
  c->r[3]=c->r[3]+0x0000001Cu; // 800C283C
  c->lr=0x800C2844u; f_803A9928(c); // 800C2840
  c->r[3]=addc(c,c->r[31],0x00000010u,0); cr0(c,c->r[3]); // 800C2844
  if (crb(c,2)) { goto L_800C2854; } // 800C2848
  c->r[4]=0u+0x00000000u; // 800C284C
  c->lr=0x800C2854u; f_80045C7C(c); // 800C2850
L_800C2854:;
  c->r[3]=addc(c,c->r[31],0x00000004u,0); cr0(c,c->r[3]); // 800C2854
  if (crb(c,2)) { goto L_800C2864; } // 800C2858
  c->r[4]=0u+0x00000000u; // 800C285C
  c->lr=0x800C2864u; f_80045C7C(c); // 800C2860
L_800C2864:;
  c->r[3]=c->r[31]|c->r[31]; // 800C2864
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800C2868
  c->r[0]=R32(c->r[1]+0x00000014u); // 800C286C
  c->lr=c->r[0]; // 800C2870
  c->r[1]=c->r[1]+0x00000010u; // 800C2874
  return; // 800C2878
}

// fn_800C287C
void f_800C287C(Ctx* __restrict c) {
  trace_call(0x800C287Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C287C
  c->r[0]=c->lr; // 800C2880
  c->r[4]=0u+0x00000000u; // 800C2884
  c->r[5]=0u+0x00000004u; // 800C2888
  W32(c->r[1]+0x00000024u,c->r[0]); // 800C288C
  {uint32_t ea=c->r[1]+0x00000010u; for(int i=28;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800C2890
  c->r[28]=c->r[3]|c->r[3]; // 800C2894
  c->r[3]=c->r[3]+0x0000019Cu; // 800C2898
  c->lr=0x800C28A0u; f_800043EC(c); // 800C289C
  c->r[3]=c->r[28]+0x00000004u; // 800C28A0
  c->r[4]=R32(c->r[28]+0x00000004u); // 800C28A4
  c->r[5]=c->r[3]|c->r[3]; // 800C28A8
  c->lr=0x800C28B0u; f_802DDD24(c); // 800C28AC
  c->r[3]=c->r[28]+0x00000010u; // 800C28B0
  c->r[4]=R32(c->r[28]+0x00000010u); // 800C28B4
  c->r[5]=c->r[3]|c->r[3]; // 800C28B8
  c->lr=0x800C28C0u; f_802DDD24(c); // 800C28BC
  c->r[29]=0u+0x00000000u; // 800C28C0
  c->r[31]=0u+0x00000000u; // 800C28C4
L_800C28C8:;
  c->r[3]=c->r[28]+c->r[31]; // 800C28C8
  c->r[30]=c->r[3]+0x0000001Cu; // 800C28CC
  c->r[3]=c->r[30]|c->r[30]; // 800C28D0
  c->lr=0x800C28D8u; f_800C274C(c); // 800C28D4
  c->r[3]=c->r[28]+0x00000010u; // 800C28D8
  c->r[5]=c->r[30]|c->r[30]; // 800C28DC
  c->r[4]=c->r[3]|c->r[3]; // 800C28E0
  c->lr=0x800C28E8u; f_802DDCA8(c); // 800C28E4
  c->r[29]=c->r[29]+0x00000001u; // 800C28E8
  c->r[31]=c->r[31]+0x00000018u; // 800C28EC
  cmps(c,0,(int32_t)c->r[29],16); // 800C28F0
  if (crb(c,0)) { IRQCHK(c); goto L_800C28C8; } // 800C28F4
  {uint32_t ea=c->r[1]+0x00000010u; for(int i=28;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800C28F8
  c->r[0]=R32(c->r[1]+0x00000024u); // 800C28FC
  c->lr=c->r[0]; // 800C2900
  c->r[1]=c->r[1]+0x00000020u; // 800C2904
  return; // 800C2908
}

// fn_800C290C
void f_800C290C(Ctx* __restrict c) {
  trace_call(0x800C290Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C290C
  c->r[0]=c->lr; // 800C2910
  W32(c->r[1]+0x00000024u,c->r[0]); // 800C2914
  c->r[0]=R32(c->r[3]+0x0000019Cu); // 800C2918
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800C291C
  cmps(c,0,(int32_t)c->r[0],0); // 800C2920
  if (crb(c,2)) { goto L_800C2930; } // 800C2924
  c->r[3]=0u+0x00000000u; // 800C2928
  goto L_800C2A38; // 800C292C
L_800C2930:;
  c->r[0]=R8(c->r[13]+0xFFFFBB7Au); // 800C2930
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800C2934
  if (!crb(c,2)) { goto L_800C2968; } // 800C2938
  c->r[31]=0u+0x80730000u; // 800C293C
  c->r[3]=c->r[31]+0x00003B68u; // 800C2940
  c->lr=0x800C2948u; f_80045E54(c); // 800C2944
  c->r[5]=0u+0x806D0000u; // 800C2948
  c->r[0]=0u+0x00000001u; // 800C294C
  c->r[5]=c->r[5]+0xFFFFC6A8u; // 800C2950
  c->r[4]=c->r[31]+0x00003B68u; // 800C2954
  c->r[3]=c->r[5]+0x0000003Cu; // 800C2958
  W32(c->r[4]+0x000000A4u,c->r[5]); // 800C295C
  W32(c->r[4]+0x000000B0u,c->r[3]); // 800C2960
  W8(c->r[13]+0xFFFFBB7Au,c->r[0]); // 800C2964
L_800C2968:;
  c->r[3]=0u+0x80730000u; // 800C2968
  c->r[3]=c->r[3]+0x00003B68u; // 800C296C
  c->lr=0x800C2974u; f_8004767C(c); // 800C2970
  cmps(c,0,(int32_t)c->r[3],0); // 800C2974
  if (!crb(c,2)) { goto L_800C2984; } // 800C2978
  c->r[3]=0u+0x00000000u; // 800C297C
  goto L_800C2A38; // 800C2980
L_800C2984:;
  c->r[0]=R8(c->r[13]+0xFFFFBBA9u); // 800C2984
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800C2988
  if (!crb(c,2)) { goto L_800C29D0; } // 800C298C
  c->r[31]=0u+0x80730000u; // 800C2990
  c->r[3]=c->r[31]+0x000073A8u; // 800C2994
  c->lr=0x800C299Cu; f_800506C0(c); // 800C2998
  c->r[6]=0u+0x806D0000u; // 800C299C
  c->r[4]=0u+0x80050000u; // 800C29A0
  c->r[6]=c->r[6]+0xFFFFC8C8u; // 800C29A4
  c->r[3]=c->r[31]+0x000073A8u; // 800C29A8
  c->r[0]=c->r[6]+0x00000008u; // 800C29AC
  c->r[5]=0u+0x80750000u; // 800C29B0
  W32(c->r[3]+0x00000010u,c->r[6]); // 800C29B4
  c->r[4]=c->r[4]+0xFFFFCF9Cu; // 800C29B8
  c->r[5]=c->r[5]+0x00003770u; // 800C29BC
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 800C29C0
  c->lr=0x800C29C8u; f_803A92B8(c); // 800C29C4
  c->r[0]=0u+0x00000001u; // 800C29C8
  W8(c->r[13]+0xFFFFBBA9u,c->r[0]); // 800C29CC
L_800C29D0:;
  c->r[3]=0u+0x80730000u; // 800C29D0
  c->r[29]=R32(c->r[3]+0x000073A8u); // 800C29D4
  c->r[31]=c->r[3]+0x000073A8u; // 800C29D8
  goto L_800C2A24; // 800C29DC
L_800C29E0:;
  c->r[12]=R32(c->r[30]+0x0000001Cu); // 800C29E0
  c->r[3]=c->r[30]|c->r[30]; // 800C29E4
  c->r[12]=R32(c->r[12]+0x00000100u); // 800C29E8
  c->ctr=c->r[12]; // 800C29EC
  if (true) { c->lr=0x800C29F4u; dispatch(c,c->ctr); } // 800C29F0
  cmps(c,0,(int32_t)c->r[3],0); // 800C29F4
  if (crb(c,2)) { goto L_800C2A20; } // 800C29F8
  c->r[12]=R32(c->r[30]+0x0000001Cu); // 800C29FC
  c->r[3]=c->r[30]|c->r[30]; // 800C2A00
  c->r[12]=R32(c->r[12]+0x00000108u); // 800C2A04
  c->ctr=c->r[12]; // 800C2A08
  if (true) { c->lr=0x800C2A10u; dispatch(c,c->ctr); } // 800C2A0C
  cmps(c,0,(int32_t)c->r[3],0); // 800C2A10
  if (crb(c,2)) { goto L_800C2A20; } // 800C2A14
  c->r[3]=0u+0x00000000u; // 800C2A18
  goto L_800C2A38; // 800C2A1C
L_800C2A20:;
  c->r[29]=R32(c->r[29]+0x00000000u); // 800C2A20
L_800C2A24:;
  c->r[30]=R32(c->r[29]+0x00000008u); // 800C2A24
  c->r[0]=R32(c->r[31]+0x00000008u); // 800C2A28
  cmpu(c,0,c->r[30],c->r[0]); // 800C2A2C
  if (!crb(c,2)) { IRQCHK(c); goto L_800C29E0; } // 800C2A30
  c->r[3]=0u+0x00000001u; // 800C2A34
L_800C2A38:;
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800C2A38
  c->r[0]=R32(c->r[1]+0x00000024u); // 800C2A3C
  c->lr=c->r[0]; // 800C2A40
  c->r[1]=c->r[1]+0x00000020u; // 800C2A44
  return; // 800C2A48
}

// fn_800C2A4C
void f_800C2A4C(Ctx* __restrict c) {
  trace_call(0x800C2A4Cu);
  c->r[0]=rotl(c->r[4],29)&0x1FFFFFFCu; // 800C2A4C
  c->r[7]=rotl(c->r[4],0)&0x0000001Fu; // 800C2A50
  c->r[6]=c->r[3]+c->r[0]; // 800C2A54
  c->r[0]=0u+0x00000001u; // 800C2A58
  c->r[4]=R32(c->r[6]+0x0000019Cu); // 800C2A5C
  c->r[3]=((c->r[7])&0x20)?0u:(c->r[0]<<((c->r[7])&31)); // 800C2A60
  c->r[0]=((c->r[7])&0x20)?0u:(c->r[5]<<((c->r[7])&31)); // 800C2A64
  c->r[3]=c->r[4]&~c->r[3]; // 800C2A68
  c->r[0]=c->r[3]+c->r[0]; // 800C2A6C
  W32(c->r[6]+0x0000019Cu,c->r[0]); // 800C2A70
  return; // 800C2A74
}

// fn_800C2A78
void f_800C2A78(Ctx* __restrict c) {
  trace_call(0x800C2A78u);
  {uint32_t ea=c->r[2]+0xFFFFA208u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C2A78
  c->r[5]=0u+0x806D0000u; // 800C2A7C
  c->r[0]=0u+0x00000000u; // 800C2A80
  W32(c->r[3]+0x00000004u,c->r[4]); // 800C2A84
  c->r[5]=c->r[5]+0x00007208u; // 800C2A88
  W32(c->r[3]+0x00000000u,c->r[5]); // 800C2A8C
  {uint32_t ea=c->r[3]+0x0000000Cu; WF32(ea,c->f[0]);} // 800C2A90
  W8(c->r[3]+0x00000008u,c->r[0]); // 800C2A94
  W8(c->r[3]+0x00000009u,c->r[0]); // 800C2A98
  return; // 800C2A9C
}

// fn_800C2AA0
void f_800C2AA0(Ctx* __restrict c) {
  trace_call(0x800C2AA0u);
  return; // 800C2AA0
}

// fn_800C2AA4
void f_800C2AA4(Ctx* __restrict c) {
  trace_call(0x800C2AA4u);
  c->r[4]=R32(c->r[3]+0x00000004u); // 800C2AA4
  {uint32_t ea=c->r[3]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800C2AA8
  f_800C2AC8(c); return; // 800C2AAC
}

// fn_800C2AB0
void f_800C2AB0(Ctx* __restrict c) {
  trace_call(0x800C2AB0u);
  W8(c->r[3]+0x00000008u,c->r[4]); // 800C2AB0
  return; // 800C2AB4
}

// fn_800C2AB8
void f_800C2AB8(Ctx* __restrict c) {
  trace_call(0x800C2AB8u);
  W8(c->r[3]+0x00000009u,c->r[4]); // 800C2AB8
  return; // 800C2ABC
}

// fn_800C2AC0
void f_800C2AC0(Ctx* __restrict c) {
  trace_call(0x800C2AC0u);
  {uint32_t ea=c->r[3]+0x0000000Cu; WF32(ea,c->f[1]);} // 800C2AC0
  return; // 800C2AC4
}

// fn_800C2AC8
void f_800C2AC8(Ctx* __restrict c) {
  trace_call(0x800C2AC8u);
  {uint32_t ea=c->r[1]+0xFFFFFF70u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C2AC8
  c->r[0]=c->lr; // 800C2ACC
  W32(c->r[1]+0x00000094u,c->r[0]); // 800C2AD0
  {uint32_t ea=c->r[1]+0x00000080u; WF64(ea,c->f[31]);} // 800C2AD4
  {uint32_t ea=c->r[1]+0x00000088u; psq_store(c,31,ea,0,0);} // 800C2AD8
  c->f[31]=c->f[1]; // 800C2ADC
  W32(c->r[1]+0x0000007Cu,c->r[31]); // 800C2AE0
  c->r[31]=c->r[4]|c->r[4]; // 800C2AE4
  W32(c->r[1]+0x00000078u,c->r[30]); // 800C2AE8
  c->r[30]=c->r[3]|c->r[3]; // 800C2AEC
  c->r[0]=R8(c->r[3]+0x00000008u); // 800C2AF0
  cmps(c,0,(int32_t)c->r[0],0); // 800C2AF4
  if (!crb(c,2)) { goto L_800C2B08; } // 800C2AF8
  c->r[0]=R8(c->r[3]+0x00000009u); // 800C2AFC
  cmps(c,0,(int32_t)c->r[0],0); // 800C2B00
  if (crb(c,2)) { goto L_800C2BA0; } // 800C2B04
L_800C2B08:;
  c->r[3]=c->r[30]|c->r[30]; // 800C2B08
  c->r[4]=c->r[1]+0x00000038u; // 800C2B0C
  c->r[5]=c->r[1]+0x0000002Cu; // 800C2B10
  c->r[6]=0u+0x00000001u; // 800C2B14
  c->lr=0x800C2B1Cu; f_800C2BC0(c); // 800C2B18
  c->r[3]=c->r[31]+0x000001B8u; // 800C2B1C
  c->r[4]=c->r[1]+0x00000048u; // 800C2B20
  c->lr=0x800C2B28u; f_80382F2C(c); // 800C2B24
  {uint32_t ea=c->r[1]+0x00000054u; c->f[1]=c->ps1[1]=RF32(ea);} // 800C2B28
  c->r[3]=c->r[1]+0x00000020u; // 800C2B2C
  {uint32_t ea=c->r[1]+0x00000064u; c->f[2]=c->ps1[2]=RF32(ea);} // 800C2B30
  {uint32_t ea=c->r[1]+0x00000074u; c->f[3]=c->ps1[3]=RF32(ea);} // 800C2B34
  c->lr=0x800C2B3Cu; f_8005FD70(c); // 800C2B38
  c->f[1]=c->f[31]; // 800C2B3C
  c->r[3]=c->r[1]+0x00000014u; // 800C2B40
  c->r[4]=c->r[1]+0x00000020u; // 800C2B44
  c->r[5]=c->r[1]+0x00000038u; // 800C2B48
  c->r[6]=c->r[1]+0x0000002Cu; // 800C2B4C
  c->lr=0x800C2B54u; f_8032A6F8(c); // 800C2B50
  cmps(c,0,(int32_t)c->r[3],0); // 800C2B54
  if (crb(c,2)) { goto L_800C2B98; } // 800C2B58
  {uint32_t ea=c->r[1]+0x00000054u; c->f[1]=c->ps1[1]=RF32(ea);} // 800C2B5C
  c->r[3]=c->r[1]+0x00000008u; // 800C2B60
  {uint32_t ea=c->r[1]+0x00000064u; c->f[2]=c->ps1[2]=RF32(ea);} // 800C2B64
  {uint32_t ea=c->r[1]+0x00000074u; c->f[3]=c->ps1[3]=RF32(ea);} // 800C2B68
  c->lr=0x800C2B70u; f_8005FD70(c); // 800C2B6C
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 800C2B70
  c->r[3]=c->r[1]+0x00000048u; // 800C2B74
  {uint32_t ea=c->r[1]+0x00000014u; c->f[1]=c->ps1[1]=RF32(ea);} // 800C2B78
  c->r[4]=c->r[31]+0x000001B8u; // 800C2B7C
  {uint32_t ea=c->r[1]+0x0000001Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800C2B80
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[2]);} // 800C2B84
  {uint32_t ea=c->r[1]+0x00000054u; WF32(ea,c->f[1]);} // 800C2B88
  {uint32_t ea=c->r[1]+0x00000064u; WF32(ea,c->f[2]);} // 800C2B8C
  {uint32_t ea=c->r[1]+0x00000074u; WF32(ea,c->f[0]);} // 800C2B90
  c->lr=0x800C2B98u; f_80382F2C(c); // 800C2B94
L_800C2B98:;
  c->r[0]=0u+0x00000000u; // 800C2B98
  W8(c->r[30]+0x00000009u,c->r[0]); // 800C2B9C
L_800C2BA0:;
  c->r[0]=R32(c->r[1]+0x00000094u); // 800C2BA0
  {uint32_t ea=c->r[1]+0x00000088u; psq_load(c,31,ea,0,0);} // 800C2BA4
  {uint32_t ea=c->r[1]+0x00000080u; c->f[31]=RF64(ea);} // 800C2BA8
  c->r[31]=R32(c->r[1]+0x0000007Cu); // 800C2BAC
  c->r[30]=R32(c->r[1]+0x00000078u); // 800C2BB0
  c->lr=c->r[0]; // 800C2BB4
  c->r[1]=c->r[1]+0x00000090u; // 800C2BB8
  return; // 800C2BBC
}

// fn_800C2BC0
void f_800C2BC0(Ctx* __restrict c) {
  trace_call(0x800C2BC0u);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C2BC0
  c->r[0]=c->lr; // 800C2BC4
  W32(c->r[1]+0x00000054u,c->r[0]); // 800C2BC8
  c->r[11]=c->r[1]+0x00000050u; // 800C2BCC
  c->lr=0x800C2BD4u; { W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800C2BD0
  c->r[29]=c->r[4]|c->r[4]; // 800C2BD4
  c->r[30]=c->r[5]|c->r[5]; // 800C2BD8
  c->r[31]=c->r[6]|c->r[6]; // 800C2BDC
  c->lr=0x800C2BE4u; f_8033FE4C(c); // 800C2BE0
  {uint32_t ea=c->r[3]+0x00000104u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C2BE4
  c->r[4]=c->r[1]+0x00000020u; // 800C2BE8
  {uint32_t ea=c->r[29]+0x00000000u; WF32(ea,c->f[0]);} // 800C2BEC
  {uint32_t ea=c->r[3]+0x00000108u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C2BF0
  {uint32_t ea=c->r[29]+0x00000004u; WF32(ea,c->f[0]);} // 800C2BF4
  {uint32_t ea=c->r[3]+0x0000010Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800C2BF8
  {uint32_t ea=c->r[29]+0x00000008u; WF32(ea,c->f[0]);} // 800C2BFC
  {uint32_t ea=c->r[3]+0x00000110u; psq_load(c,1,ea,0,0);} // 800C2C00
  {uint32_t ea=c->r[3]+0x00000104u; psq_load(c,0,ea,0,0);} // 800C2C04
  {double t0=S(c->f[1]-c->f[0]), t1=S(c->ps1[1]-c->ps1[0]); c->f[0]=t0; c->ps1[0]=t1;} // 800C2C08
  {uint32_t ea=c->r[4]+0x00000000u; psq_store(c,0,ea,0,0);} // 800C2C0C
  {uint32_t ea=c->r[3]+0x00000118u; psq_load(c,1,ea,1,0);} // 800C2C10
  {uint32_t ea=c->r[3]+0x0000010Cu; psq_load(c,0,ea,1,0);} // 800C2C14
  {double t0=S(c->f[1]-c->f[0]), t1=S(c->ps1[1]-c->ps1[0]); c->f[0]=t0; c->ps1[0]=t1;} // 800C2C18
  {uint32_t ea=c->r[4]+0x00000008u; psq_store(c,0,ea,1,0);} // 800C2C1C
  c->r[3]=c->r[30]|c->r[30]; // 800C2C20
  c->lr=0x800C2C28u; f_8005DC84(c); // 800C2C24
  c->r[5]=0u+0x806A0000u; // 800C2C28
  c->r[3]=c->r[30]|c->r[30]; // 800C2C2C
  c->r[4]=c->r[30]|c->r[30]; // 800C2C30
  c->r[5]=c->r[5]+0x00000AA8u; // 800C2C34
  c->lr=0x800C2C3Cu; f_8030E0BC(c); // 800C2C38
  cmps(c,0,(int32_t)c->r[31],0); // 800C2C3C
  if (crb(c,2)) { goto L_800C2CB8; } // 800C2C40
  {uint32_t ea=c->r[2]+0xFFFFA20Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800C2C44
  c->r[31]=c->r[1]+0x0000002Cu; // 800C2C48
  {uint32_t ea=c->r[30]+0x00000004u; WF32(ea,c->f[1]);} // 800C2C4C
  {uint32_t ea=c->r[30]+0x00000000u; psq_load(c,3,ea,0,0);} // 800C2C50
  {double t0=S(c->f[3]*c->f[3]), t1=S(c->ps1[3]*c->ps1[3]); c->f[3]=t0; c->ps1[3]=t1;} // 800C2C54
  {uint32_t ea=c->r[30]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C2C58
  {double t0=S(std::fma(c->f[0],c->f[0],c->f[3])), t1=S(std::fma(c->ps1[0],c->ps1[0],c->ps1[3])); c->f[2]=t0; c->ps1[2]=t1;} // 800C2C5C
  {double t0=S(c->f[2]+c->ps1[3]), t1=S(c->ps1[3]); c->f[2]=t0; c->ps1[2]=t1;} // 800C2C60
  {uint32_t ea=c->r[2]+0xFFFFA210u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C2C64
  fcmp(c,0,c->f[2],c->f[0]); // 800C2C68
  setcrb(c,2,crb(c,0)|crb(c,2)); // 800C2C6C
  if (!crb(c,2)) { goto L_800C2C94; } // 800C2C70
  c->f[2]=c->f[1]; // 800C2C74
  {uint32_t ea=c->r[2]+0xFFFFA214u; c->f[3]=c->ps1[3]=RF32(ea);} // 800C2C78
  c->r[3]=c->r[1]+0x00000008u; // 800C2C7C
  c->lr=0x800C2C84u; f_8005FD70(c); // 800C2C80
  c->r[3]=c->r[31]|c->r[31]; // 800C2C84
  c->r[4]=c->r[1]+0x00000008u; // 800C2C88
  c->lr=0x800C2C90u; f_8005CD7C(c); // 800C2C8C
  goto L_800C2CAC; // 800C2C90
L_800C2C94:;
  c->r[3]=c->r[30]|c->r[30]; // 800C2C94
  c->r[4]=c->r[1]+0x00000014u; // 800C2C98
  c->lr=0x800C2CA0u; f_80383D38(c); // 800C2C9C
  c->r[3]=c->r[31]|c->r[31]; // 800C2CA0
  c->r[4]=c->r[1]+0x00000014u; // 800C2CA4
  c->lr=0x800C2CACu; f_8005CD7C(c); // 800C2CA8
L_800C2CAC:;
  c->r[3]=c->r[30]|c->r[30]; // 800C2CAC
  c->r[4]=c->r[31]|c->r[31]; // 800C2CB0
  c->lr=0x800C2CB8u; f_8005DC84(c); // 800C2CB4
L_800C2CB8:;
  c->r[11]=c->r[1]+0x00000050u; // 800C2CB8
  c->lr=0x800C2CC0u; { c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800C2CBC
  c->r[0]=R32(c->r[1]+0x00000054u); // 800C2CC0
  c->lr=c->r[0]; // 800C2CC4
  c->r[1]=c->r[1]+0x00000050u; // 800C2CC8
  return; // 800C2CCC
}

// fn_800C2CD0
void f_800C2CD0(Ctx* __restrict c) {
  trace_call(0x800C2CD0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C2CD0
  c->r[0]=c->lr; // 800C2CD4
  c->r[4]=0u+0x806D0000u; // 800C2CD8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800C2CDC
  c->r[4]=c->r[4]+0x00007218u; // 800C2CE0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800C2CE4
  c->r[31]=c->r[3]|c->r[3]; // 800C2CE8
  W32(c->r[3]+0x00000000u,c->r[4]); // 800C2CEC
  c->r[3]=c->r[3]+0x00000004u; // 800C2CF0
  c->lr=0x800C2CF8u; f_800A08E0(c); // 800C2CF4
  c->r[3]=c->r[31]|c->r[31]; // 800C2CF8
  c->lr=0x800C2D00u; f_800C2DF8(c); // 800C2CFC
  c->r[3]=c->r[31]|c->r[31]; // 800C2D00
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800C2D04
  c->r[0]=R32(c->r[1]+0x00000014u); // 800C2D08
  c->lr=c->r[0]; // 800C2D0C
  c->r[1]=c->r[1]+0x00000010u; // 800C2D10
  return; // 800C2D14
}

// fn_800C2D18
void f_800C2D18(Ctx* __restrict c) {
  trace_call(0x800C2D18u);
  return; // 800C2D18
}

// fn_800C2D1C
void f_800C2D1C(Ctx* __restrict c) {
  trace_call(0x800C2D1Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C2D1C
  c->r[0]=c->lr; // 800C2D20
  W32(c->r[1]+0x00000034u,c->r[0]); // 800C2D24
  {uint32_t ea=c->r[1]+0x00000024u; for(int i=29;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800C2D28
  c->r[29]=c->r[3]|c->r[3]; // 800C2D2C
  c->r[30]=c->r[4]|c->r[4]; // 800C2D30
  c->r[31]=c->r[5]|c->r[5]; // 800C2D34
  c->r[0]=R8(c->r[3]+0x00000015u); // 800C2D38
  cmps(c,0,(int32_t)c->r[0],0); // 800C2D3C
  if (crb(c,2)) { goto L_800C2D4C; } // 800C2D40
  c->r[3]=0u+0x00000000u; // 800C2D44
  goto L_800C2DE4; // 800C2D48
L_800C2D4C:;
  c->r[0]=R8(c->r[3]+0x00000014u); // 800C2D4C
  cmps(c,0,(int32_t)c->r[0],0); // 800C2D50
  if (!crb(c,2)) { goto L_800C2D84; } // 800C2D54
  c->r[31]=0u+0x00000001u; // 800C2D58
  W8(c->r[3]+0x00000014u,c->r[31]); // 800C2D5C
  c->r[3]=c->r[3]+0x00000004u; // 800C2D60
  c->lr=0x800C2D68u; f_800A09D4(c); // 800C2D64
  c->r[4]=R32(c->r[29]+0x00000008u); // 800C2D68
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 800C2D6C
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 800C2D70
  if (crb(c,0)) { goto L_800C2D7C; } // 800C2D74
  W8(c->r[29]+0x00000015u,c->r[31]); // 800C2D78
L_800C2D7C:;
  c->r[3]=0u+0x00000001u; // 800C2D7C
  goto L_800C2DE4; // 800C2D80
L_800C2D84:;
  c->r[4]=c->r[29]|c->r[29]; // 800C2D84
  c->r[3]=c->r[1]+0x00000008u; // 800C2D88
  c->lr=0x800C2D90u; f_800C2FB8(c); // 800C2D8C
  c->r[4]=c->r[30]|c->r[30]; // 800C2D90
  c->r[5]=c->r[31]|c->r[31]; // 800C2D94
  c->r[3]=c->r[29]+0x0000000Cu; // 800C2D98
  c->r[6]=c->r[1]+0x00000008u; // 800C2D9C
  c->lr=0x800C2DA4u; f_800C3100(c); // 800C2DA0
  cmps(c,0,(int32_t)c->r[3],0); // 800C2DA4
  if (crb(c,2)) { goto L_800C2DE0; } // 800C2DA8
  c->r[3]=c->r[29]|c->r[29]; // 800C2DAC
  c->r[4]=0u+0x00000001u; // 800C2DB0
  c->lr=0x800C2DB8u; f_800C3068(c); // 800C2DB4
  c->r[3]=c->r[29]+0x00000004u; // 800C2DB8
  c->lr=0x800C2DC0u; f_800A09D4(c); // 800C2DBC
  c->r[4]=R32(c->r[29]+0x00000008u); // 800C2DC0
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 800C2DC4
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 800C2DC8
  if (crb(c,0)) { goto L_800C2DD8; } // 800C2DCC
  c->r[0]=0u+0x00000001u; // 800C2DD0
  W8(c->r[29]+0x00000015u,c->r[0]); // 800C2DD4
L_800C2DD8:;
  c->r[3]=0u+0x00000001u; // 800C2DD8
  goto L_800C2DE4; // 800C2DDC
L_800C2DE0:;
  c->r[3]=0u+0x00000000u; // 800C2DE0
L_800C2DE4:;
  {uint32_t ea=c->r[1]+0x00000024u; for(int i=29;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800C2DE4
  c->r[0]=R32(c->r[1]+0x00000034u); // 800C2DE8
  c->lr=c->r[0]; // 800C2DEC
  c->r[1]=c->r[1]+0x00000030u; // 800C2DF0
  return; // 800C2DF4
}

// fn_800C2DF8
void f_800C2DF8(Ctx* __restrict c) {
  trace_call(0x800C2DF8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C2DF8
  c->r[0]=c->lr; // 800C2DFC
  c->r[4]=0u+0x00000000u; // 800C2E00
  W32(c->r[1]+0x00000014u,c->r[0]); // 800C2E04
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800C2E08
  c->r[31]=c->r[3]|c->r[3]; // 800C2E0C
  c->lr=0x800C2E14u; f_800C3054(c); // 800C2E10
  {uint32_t ea=c->r[2]+0xFFFFA218u; c->f[1]=c->ps1[1]=RF32(ea);} // 800C2E14
  {uint32_t ea=c->r[2]+0xFFFFA21Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800C2E18
  {uint32_t ea=c->r[31]+0x0000000Cu; WF32(ea,c->f[1]);} // 800C2E1C
  {uint32_t ea=c->r[31]+0x00000010u; WF32(ea,c->f[0]);} // 800C2E20
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800C2E24
  c->r[0]=R32(c->r[1]+0x00000014u); // 800C2E28
  c->lr=c->r[0]; // 800C2E2C
  c->r[1]=c->r[1]+0x00000010u; // 800C2E30
  return; // 800C2E34
}

// fn_800C2E38
void f_800C2E38(Ctx* __restrict c) {
  trace_call(0x800C2E38u);
  f_800C3428(c); return; // 800C2E38
}

// fn_800C2E3C
void f_800C2E3C(Ctx* __restrict c) {
  trace_call(0x800C2E3Cu);
  f_800C34E4(c); return; // 800C2E3C
}

// fn_800C2E40
void f_800C2E40(Ctx* __restrict c) {
  trace_call(0x800C2E40u);
  c->r[3]=R32(c->r[3]+0x00000008u); // 800C2E40
  return; // 800C2E44
}

// fn_800C2E48
void f_800C2E48(Ctx* __restrict c) {
  trace_call(0x800C2E48u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C2E48
  c->r[0]=c->lr; // 800C2E4C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800C2E50
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800C2E54
  c->r[31]=c->r[4]|c->r[4]; // 800C2E58
  c->r[30]=c->r[3]|c->r[3]; // 800C2E5C
  c->r[3]=c->r[31]|c->r[31]; // 800C2E60
  c->r[4]=R32(c->r[4]+0x00000008u); // 800C2E64
  c->lr=0x800C2E6Cu; f_800C30A0(c); // 800C2E68
  c->r[4]=c->r[3]|c->r[3]; // 800C2E6C
  c->r[3]=c->r[31]+0x00000004u; // 800C2E70
  c->lr=0x800C2E78u; f_800A09F0(c); // 800C2E74
  c->r[4]=c->r[3]|c->r[3]; // 800C2E78
  c->r[3]=c->r[30]|c->r[30]; // 800C2E7C
  c->lr=0x800C2E84u; f_8005CD7C(c); // 800C2E80
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800C2E84
  c->r[0]=R32(c->r[1]+0x00000014u); // 800C2E88
  c->lr=c->r[0]; // 800C2E8C
  c->r[1]=c->r[1]+0x00000010u; // 800C2E90
  return; // 800C2E94
}

// fn_800C2E98
void f_800C2E98(Ctx* __restrict c) {
  trace_call(0x800C2E98u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C2E98
  c->r[0]=c->lr; // 800C2E9C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800C2EA0
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800C2EA4
  c->r[31]=c->r[4]|c->r[4]; // 800C2EA8
  c->r[30]=c->r[3]|c->r[3]; // 800C2EAC
  c->r[3]=c->r[31]|c->r[31]; // 800C2EB0
  c->r[4]=R32(c->r[4]+0x00000008u); // 800C2EB4
  c->lr=0x800C2EBCu; f_800C30A0(c); // 800C2EB8
  c->r[5]=c->r[3]|c->r[3]; // 800C2EBC
  c->r[3]=c->r[30]|c->r[30]; // 800C2EC0
  c->r[4]=c->r[31]+0x00000004u; // 800C2EC4
  c->lr=0x800C2ECCu; f_800A0A20(c); // 800C2EC8
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800C2ECC
  c->r[0]=R32(c->r[1]+0x00000014u); // 800C2ED0
  c->lr=c->r[0]; // 800C2ED4
  c->r[1]=c->r[1]+0x00000010u; // 800C2ED8
  return; // 800C2EDC
}

// fn_800C2EE0
void f_800C2EE0(Ctx* __restrict c) {
  trace_call(0x800C2EE0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C2EE0
  c->r[0]=c->lr; // 800C2EE4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800C2EE8
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800C2EEC
  c->r[31]=c->r[4]|c->r[4]; // 800C2EF0
  c->r[30]=c->r[3]|c->r[3]; // 800C2EF4
  c->r[4]=R32(c->r[3]+0x00000008u); // 800C2EF8
  c->lr=0x800C2F00u; f_800C30A0(c); // 800C2EFC
  c->r[4]=c->r[3]|c->r[3]; // 800C2F00
  c->r[5]=c->r[31]|c->r[31]; // 800C2F04
  c->r[3]=c->r[30]+0x00000004u; // 800C2F08
  c->lr=0x800C2F10u; f_800A0B44(c); // 800C2F0C
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800C2F10
  c->r[0]=R32(c->r[1]+0x00000014u); // 800C2F14
  c->lr=c->r[0]; // 800C2F18
  c->r[1]=c->r[1]+0x00000010u; // 800C2F1C
  return; // 800C2F20
}

// fn_800C2F24
void f_800C2F24(Ctx* __restrict c) {
  trace_call(0x800C2F24u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C2F24
  c->r[0]=c->lr; // 800C2F28
  W32(c->r[1]+0x00000014u,c->r[0]); // 800C2F2C
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800C2F30
  c->r[31]=c->r[4]|c->r[4]; // 800C2F34
  c->r[30]=c->r[3]|c->r[3]; // 800C2F38
  c->r[4]=R32(c->r[3]+0x00000008u); // 800C2F3C
  c->lr=0x800C2F44u; f_800C30A0(c); // 800C2F40
  c->r[4]=c->r[3]|c->r[3]; // 800C2F44
  c->r[5]=c->r[31]|c->r[31]; // 800C2F48
  c->r[3]=c->r[30]+0x00000004u; // 800C2F4C
  c->lr=0x800C2F54u; f_800A0B84(c); // 800C2F50
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800C2F54
  c->r[0]=R32(c->r[1]+0x00000014u); // 800C2F58
  c->lr=c->r[0]; // 800C2F5C
  c->r[1]=c->r[1]+0x00000010u; // 800C2F60
  return; // 800C2F64
}

// fn_800C2F68
void f_800C2F68(Ctx* __restrict c) {
  trace_call(0x800C2F68u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C2F68
  c->r[0]=c->lr; // 800C2F6C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800C2F70
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800C2F74
  c->r[31]=c->r[4]|c->r[4]; // 800C2F78
  c->r[30]=c->r[3]|c->r[3]; // 800C2F7C
  c->r[4]=R32(c->r[3]+0x00000008u); // 800C2F80
  c->lr=0x800C2F88u; f_800C30A0(c); // 800C2F84
  c->r[4]=c->r[3]|c->r[3]; // 800C2F88
  c->r[5]=c->r[31]|c->r[31]; // 800C2F8C
  c->r[3]=c->r[30]+0x00000004u; // 800C2F90
  c->lr=0x800C2F98u; f_800A0BC8(c); // 800C2F94
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800C2F98
  c->r[0]=R32(c->r[1]+0x00000014u); // 800C2F9C
  c->lr=c->r[0]; // 800C2FA0
  c->r[1]=c->r[1]+0x00000010u; // 800C2FA4
  return; // 800C2FA8
}

// fn_800C2FAC
void f_800C2FAC(Ctx* __restrict c) {
  trace_call(0x800C2FACu);
  c->r[3]=R32(c->r[3]+0x00000008u); // 800C2FAC
  c->r[3]=c->r[3]+0x00000001u; // 800C2FB0
  return; // 800C2FB4
}

// fn_800C2FB8
void f_800C2FB8(Ctx* __restrict c) {
  trace_call(0x800C2FB8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C2FB8
  c->r[0]=c->lr; // 800C2FBC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800C2FC0
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800C2FC4
  c->r[31]=c->r[4]|c->r[4]; // 800C2FC8
  c->r[30]=c->r[3]|c->r[3]; // 800C2FCC
  c->r[3]=c->r[31]|c->r[31]; // 800C2FD0
  c->r[5]=R32(c->r[4]+0x00000008u); // 800C2FD4
  c->r[4]=c->r[5]+0x00000001u; // 800C2FD8
  c->lr=0x800C2FE0u; f_800C30A0(c); // 800C2FDC
  c->r[4]=c->r[3]|c->r[3]; // 800C2FE0
  c->r[3]=c->r[31]+0x00000004u; // 800C2FE4
  c->lr=0x800C2FECu; f_800A09F0(c); // 800C2FE8
  c->r[4]=c->r[3]|c->r[3]; // 800C2FEC
  c->r[3]=c->r[30]|c->r[30]; // 800C2FF0
  c->lr=0x800C2FF8u; f_8005CD7C(c); // 800C2FF4
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800C2FF8
  c->r[0]=R32(c->r[1]+0x00000014u); // 800C2FFC
  c->lr=c->r[0]; // 800C3000
  c->r[1]=c->r[1]+0x00000010u; // 800C3004
  return; // 800C3008
}

// fn_800C300C
void f_800C300C(Ctx* __restrict c) {
  trace_call(0x800C300Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C300C
  c->r[0]=c->lr; // 800C3010
  W32(c->r[1]+0x00000014u,c->r[0]); // 800C3014
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800C3018
  c->r[31]=c->r[4]|c->r[4]; // 800C301C
  c->r[30]=c->r[3]|c->r[3]; // 800C3020
  c->r[5]=R32(c->r[3]+0x00000008u); // 800C3024
  c->r[4]=c->r[5]+0x00000001u; // 800C3028
  c->lr=0x800C3030u; f_800C30A0(c); // 800C302C
  c->r[4]=c->r[3]|c->r[3]; // 800C3030
  c->r[5]=c->r[31]|c->r[31]; // 800C3034
  c->r[3]=c->r[30]+0x00000004u; // 800C3038
  c->lr=0x800C3040u; f_800A0B44(c); // 800C303C
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800C3040
  c->r[0]=R32(c->r[1]+0x00000014u); // 800C3044
  c->lr=c->r[0]; // 800C3048
  c->r[1]=c->r[1]+0x00000010u; // 800C304C
  return; // 800C3050
}

// fn_800C3054
void f_800C3054(Ctx* __restrict c) {
  trace_call(0x800C3054u);
  c->r[0]=0u+0x00000000u; // 800C3054
  W32(c->r[3]+0x00000008u,c->r[4]); // 800C3058
  W8(c->r[3]+0x00000014u,c->r[0]); // 800C305C
  W8(c->r[3]+0x00000015u,c->r[0]); // 800C3060
  return; // 800C3064
}

// fn_800C3068
void f_800C3068(Ctx* __restrict c) {
  trace_call(0x800C3068u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C3068
  c->r[0]=c->lr; // 800C306C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800C3070
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800C3074
  c->r[31]=c->r[3]|c->r[3]; // 800C3078
  c->r[0]=R32(c->r[3]+0x00000008u); // 800C307C
  c->r[4]=c->r[0]+c->r[4]; // 800C3080
  c->lr=0x800C3088u; f_800C30A0(c); // 800C3084
  W32(c->r[31]+0x00000008u,c->r[3]); // 800C3088
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800C308C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800C3090
  c->lr=c->r[0]; // 800C3094
  c->r[1]=c->r[1]+0x00000010u; // 800C3098
  return; // 800C309C
}

// fn_800C30A0
void f_800C30A0(Ctx* __restrict c) {
  trace_call(0x800C30A0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C30A0
  c->r[0]=c->lr; // 800C30A4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800C30A8
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800C30AC
  c->r[31]=c->r[3]+0x00000004u; // 800C30B0
  c->r[30]=c->r[4]|c->r[4]; // 800C30B4
  c->r[3]=c->r[31]|c->r[31]; // 800C30B8
  c->lr=0x800C30C0u; f_800A09D4(c); // 800C30BC
  cmps(c,0,(int32_t)c->r[30],(int32_t)c->r[3]); // 800C30C0
  if (crb(c,0)) { goto L_800C30D8; } // 800C30C4
  c->r[3]=c->r[31]|c->r[31]; // 800C30C8
  c->lr=0x800C30D0u; f_800A09D4(c); // 800C30CC
  c->r[3]=c->r[3]+0xFFFFFFFFu; // 800C30D0
  goto L_800C30E0; // 800C30D4
L_800C30D8:;
  c->r[0]=sraw(c,c->r[30],31); // 800C30D8
  c->r[3]=c->r[30]&~c->r[0]; // 800C30DC
L_800C30E0:;
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800C30E0
  c->r[0]=R32(c->r[1]+0x00000014u); // 800C30E4
  c->lr=c->r[0]; // 800C30E8
  c->r[1]=c->r[1]+0x00000010u; // 800C30EC
  return; // 800C30F0
}

// fn_800C30F4
void f_800C30F4(Ctx* __restrict c) {
  trace_call(0x800C30F4u);
  {uint32_t ea=c->r[3]+0x0000000Cu; WF32(ea,c->f[1]);} // 800C30F4
  {uint32_t ea=c->r[3]+0x00000010u; WF32(ea,c->f[2]);} // 800C30F8
  return; // 800C30FC
}

// fn_800C3100
void f_800C3100(Ctx* __restrict c) {
  trace_call(0x800C3100u);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C3100
  c->r[0]=c->lr; // 800C3104
  W32(c->r[1]+0x00000054u,c->r[0]); // 800C3108
  c->r[11]=c->r[1]+0x00000040u; // 800C310C
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[31]);} // 800C3110
  {uint32_t ea=c->r[1]+0x00000048u; psq_store(c,31,ea,0,0);} // 800C3114
  c->lr=0x800C311Cu; { W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800C3118
  c->r[0]=c->r[4]|c->r[4]; // 800C311C
  c->r[28]=c->r[3]|c->r[3]; // 800C3120
  c->r[29]=c->r[5]|c->r[5]; // 800C3124
  c->r[4]=c->r[6]|c->r[6]; // 800C3128
  c->r[5]=c->r[0]|c->r[0]; // 800C312C
  c->r[3]=c->r[1]+0x00000020u; // 800C3130
  c->lr=0x800C3138u; f_8005FC60(c); // 800C3134
  c->r[30]=c->r[1]+0x00000020u; // 800C3138
  {uint32_t ea=c->r[30]+0x00000000u; psq_load(c,0,ea,0,0);} // 800C313C
  {double t0=S(c->f[0]*c->f[0]), t1=S(c->ps1[0]*c->ps1[0]); c->f[0]=t0; c->ps1[0]=t1;} // 800C3140
  {uint32_t ea=c->r[1]+0x00000028u; c->f[1]=c->ps1[1]=RF32(ea);} // 800C3144
  {double t0=S(std::fma(c->f[1],c->f[1],c->f[0])), t1=S(std::fma(c->ps1[1],c->ps1[1],c->ps1[0])); c->f[1]=t0; c->ps1[1]=t1;} // 800C3148
  {double t0=S(c->f[1]+c->ps1[0]), t1=S(c->ps1[0]); c->f[1]=t0; c->ps1[1]=t1;} // 800C314C
  {uint32_t ea=c->r[28]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C3150
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[0]); // 800C3154
  fcmp(c,0,c->f[1],c->f[0]); // 800C3158
  setcrb(c,2,crb(c,0)|crb(c,2)); // 800C315C
  if (!crb(c,2)) { goto L_800C316C; } // 800C3160
  c->r[3]=0u+0x00000001u; // 800C3164
  goto L_800C3294; // 800C3168
L_800C316C:;
  {uint32_t ea=c->r[28]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 800C316C
  {uint32_t ea=c->r[2]+0xFFFFA224u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C3170
  fcmp(c,0,c->f[1],c->f[0]); // 800C3174
  if (!crb(c,1)) { goto L_800C3290; } // 800C3178
  {uint32_t ea=c->r[29]+0x00000004u; psq_load(c,1,ea,0,0);} // 800C317C
  {double t0=S(c->f[1]*c->f[1]), t1=S(c->ps1[1]*c->ps1[1]); c->f[0]=t0; c->ps1[0]=t1;} // 800C3180
  {uint32_t ea=c->r[29]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 800C3184
  {double t0=S(c->f[0]+c->ps1[0]), t1=S(c->ps1[1]); c->f[0]=t0; c->ps1[0]=t1;} // 800C3188
  {double t0=S(std::fma(c->f[1],c->ps1[0],c->f[0])), t1=S(std::fma(c->ps1[1],c->ps1[0],c->ps1[0])); c->f[1]=t0; c->ps1[1]=t1;} // 800C318C
  {uint32_t ea=c->r[2]+0xFFFFA228u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C3190
  fcmp(c,0,c->f[1],c->f[0]); // 800C3194
  c->r[0]=c->cr; // 800C3198
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 800C319C
  if (!crb(c,2)) { goto L_800C3290; } // 800C31A0
  c->r[31]=0u+0x806A0000u; // 800C31A4
  c->r[4]=c->r[29]|c->r[29]; // 800C31A8
  c->r[3]=c->r[1]+0x00000008u; // 800C31AC
  c->r[5]=c->r[31]+0x00000AA8u; // 800C31B0
  c->lr=0x800C31B8u; f_8030E0BC(c); // 800C31B4
  c->r[4]=c->r[30]|c->r[30]; // 800C31B8
  c->r[3]=c->r[1]+0x00000014u; // 800C31BC
  c->r[5]=c->r[31]+0x00000AA8u; // 800C31C0
  c->lr=0x800C31C8u; f_8030E0BC(c); // 800C31C4
  c->r[4]=c->r[1]+0x00000014u; // 800C31C8
  c->r[3]=c->r[1]+0x00000008u; // 800C31CC
  {uint32_t ea=c->r[3]+0x00000004u; psq_load(c,31,ea,0,0);} // 800C31D0
  {uint32_t ea=c->r[4]+0x00000004u; psq_load(c,0,ea,0,0);} // 800C31D4
  {double t0=S(c->f[31]*c->f[0]), t1=S(c->ps1[31]*c->ps1[0]); c->f[0]=t0; c->ps1[0]=t1;} // 800C31D8
  {uint32_t ea=c->r[1]+0x00000008u; c->f[31]=c->ps1[31]=RF32(ea);} // 800C31DC
  {double t0=S(c->f[0]+c->ps1[0]), t1=S(c->ps1[31]); c->f[0]=t0; c->ps1[0]=t1;} // 800C31E0
  {uint32_t ea=c->r[1]+0x00000014u; c->f[31]=c->ps1[31]=RF32(ea);} // 800C31E4
  {double t0=S(std::fma(c->f[31],c->ps1[0],c->f[0])), t1=S(std::fma(c->ps1[31],c->ps1[0],c->ps1[0])); c->f[31]=t0; c->ps1[31]=t1;} // 800C31E8
  {uint32_t ea=c->r[2]+0xFFFFA22Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800C31EC
  fcmp(c,0,c->f[31],c->f[0]); // 800C31F0
  if (!crb(c,1)) { goto L_800C3200; } // 800C31F4
  c->f[31]=c->f[0]; // 800C31F8
  goto L_800C3210; // 800C31FC
L_800C3200:;
  {uint32_t ea=c->r[2]+0xFFFFA230u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C3200
  fcmp(c,0,c->f[31],c->f[0]); // 800C3204
  if (!crb(c,0)) { goto L_800C3210; } // 800C3208
  c->f[31]=c->f[0]; // 800C320C
L_800C3210:;
  {uint32_t ea=c->r[2]+0xFFFFA22Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800C3210
  c->r[0]=0u+0x00000000u; // 800C3214
  fcmp(c,0,c->f[31],c->f[0]); // 800C3218
  setcrb(c,2,crb(c,0)|crb(c,2)); // 800C321C
  if (!crb(c,2)) { goto L_800C3238; } // 800C3220
  {uint32_t ea=c->r[2]+0xFFFFA230u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C3224
  fcmp(c,0,c->f[31],c->f[0]); // 800C3228
  setcrb(c,2,crb(c,1)|crb(c,2)); // 800C322C
  if (!crb(c,2)) { goto L_800C3238; } // 800C3230
  c->r[0]=0u+0x00000001u; // 800C3234
L_800C3238:;
  cmps(c,0,(int32_t)c->r[0],0); // 800C3238
  if (!crb(c,2)) { goto L_800C325C; } // 800C323C
  c->r[3]=0u+0x806D0000u; // 800C3240
  c->r[5]=0u+0x806D0000u; // 800C3244
  c->r[3]=c->r[3]+0xFFFFE414u; // 800C3248
  c->r[4]=0u+0x000000EFu; // 800C324C
  c->r[5]=c->r[5]+0xFFFFE3ECu; // 800C3250
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800C3254
  c->lr=0x800C325Cu; f_80484708(c); // 800C3258
L_800C325C:;
  c->f[1]=c->f[31]; // 800C325C
  c->lr=0x800C3264u; f_803BA740(c); // 800C3260
  c->f[3]=c->ps1[3]=S(c->f[1]); // 800C3264
  {uint32_t ea=c->r[2]+0xFFFFA234u; c->f[2]=c->ps1[2]=RF32(ea);} // 800C3268
  {uint32_t ea=c->r[2]+0xFFFFA238u; c->f[1]=c->ps1[1]=RF32(ea);} // 800C326C
  {uint32_t ea=c->r[28]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C3270
  c->f[2]=c->ps1[2]=S(c->f[2]*c->f[3]); // 800C3274
  c->f[0]=c->ps1[0]=S(c->f[1]-c->f[0]); // 800C3278
  fcmp(c,0,c->f[2],c->f[0]); // 800C327C
  setcrb(c,2,crb(c,1)|crb(c,2)); // 800C3280
  if (!crb(c,2)) { goto L_800C3290; } // 800C3284
  c->r[3]=0u+0x00000001u; // 800C3288
  goto L_800C3294; // 800C328C
L_800C3290:;
  c->r[3]=0u+0x00000000u; // 800C3290
L_800C3294:;
  c->r[11]=c->r[1]+0x00000040u; // 800C3294
  {uint32_t ea=c->r[1]+0x00000048u; psq_load(c,31,ea,0,0);} // 800C3298
  {uint32_t ea=c->r[1]+0x00000040u; c->f[31]=RF64(ea);} // 800C329C
  c->lr=0x800C32A4u; { c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800C32A0
  c->r[0]=R32(c->r[1]+0x00000054u); // 800C32A4
  c->lr=c->r[0]; // 800C32A8
  c->r[1]=c->r[1]+0x00000050u; // 800C32AC
  return; // 800C32B0
}

// fn_800C32B4
void f_800C32B4(Ctx* __restrict c) {
  trace_call(0x800C32B4u);
  {uint32_t ea=c->r[1]+0xFFFFFC20u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C32B4
  c->r[0]=c->lr; // 800C32B8
  W32(c->r[1]+0x000003E4u,c->r[0]); // 800C32BC
  c->r[11]=c->r[1]+0x000003C0u; // 800C32C0
  {uint32_t ea=c->r[1]+0x000003D0u; WF64(ea,c->f[31]);} // 800C32C4
  {uint32_t ea=c->r[1]+0x000003D8u; psq_store(c,31,ea,0,0);} // 800C32C8
  {uint32_t ea=c->r[1]+0x000003C0u; WF64(ea,c->f[30]);} // 800C32CC
  {uint32_t ea=c->r[1]+0x000003C8u; psq_store(c,30,ea,0,0);} // 800C32D0
  c->lr=0x800C32D8u; { W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800C32D4
  c->f[30]=c->f[1]; // 800C32D8
  c->r[29]=c->r[3]|c->r[3]; // 800C32DC
  c->f[31]=c->f[2]; // 800C32E0
  c->r[30]=c->r[5]|c->r[5]; // 800C32E4
  c->r[31]=c->r[6]|c->r[6]; // 800C32E8
  c->r[3]=c->r[1]+0x00000044u; // 800C32EC
  c->lr=0x800C32F4u; f_8005CD7C(c); // 800C32F0
  {uint32_t ea=c->r[2]+0xFFFFA224u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C32F4
  fcmp(c,0,c->f[30],c->f[0]); // 800C32F8
  if (!crb(c,1)) { goto L_800C33AC; } // 800C32FC
  c->f[1]=c->f[30]; // 800C3300
  c->r[0]=0u+0x00000000u; // 800C3304
  c->r[3]=0u+0x00310000u; // 800C3308
  W32(c->r[1]+0x000003A4u,c->r[0]); // 800C330C
  c->r[3]=c->r[3]+0x00000004u; // 800C3310
  c->r[4]=c->r[1]+0x00000044u; // 800C3314
  c->r[5]=c->r[1]+0x0000005Cu; // 800C3318
  c->r[6]=0u+0x00000000u; // 800C331C
  c->lr=0x800C3324u; f_8005EC34(c); // 800C3320
  cmps(c,0,(int32_t)c->r[3],0); // 800C3324
  if (crb(c,2)) { goto L_800C3394; } // 800C3328
  {uint32_t ea=c->r[2]+0xFFFFA23Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800C332C
  c->r[3]=c->r[1]+0x00000020u; // 800C3330
  c->r[4]=c->r[1]+0x00000090u; // 800C3334
  c->lr=0x800C333Cu; f_8005ED34(c); // 800C3338
  c->r[3]=c->r[1]+0x00000038u; // 800C333C
  c->r[4]=c->r[1]+0x00000084u; // 800C3340
  c->r[5]=c->r[1]+0x00000020u; // 800C3344
  c->lr=0x800C334Cu; f_8005ED10(c); // 800C3348
  {uint32_t ea=c->r[2]+0xFFFFA23Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800C334C
  c->r[3]=c->r[1]+0x00000014u; // 800C3350
  c->r[4]=c->r[1]+0x00000090u; // 800C3354
  c->lr=0x800C335Cu; f_8005ED34(c); // 800C3358
  c->r[3]=c->r[1]+0x0000002Cu; // 800C335C
  c->r[4]=c->r[1]+0x00000084u; // 800C3360
  c->r[5]=c->r[1]+0x00000014u; // 800C3364
  c->lr=0x800C336Cu; f_8005FC60(c); // 800C3368
  c->r[3]=c->r[1]+0x00000038u; // 800C336C
  c->r[4]=c->r[1]+0x0000002Cu; // 800C3370
  c->r[5]=c->r[1]+0x0000005Cu; // 800C3374
  c->lr=0x800C337Cu; f_8005EB5C(c); // 800C3378
  cmps(c,0,(int32_t)c->r[3],0); // 800C337C
  if (crb(c,2)) { goto L_800C33A0; } // 800C3380
  c->r[3]=c->r[1]+0x00000050u; // 800C3384
  c->r[4]=c->r[1]+0x00000090u; // 800C3388
  c->lr=0x800C3390u; f_8005DC84(c); // 800C338C
  goto L_800C33A0; // 800C3390
L_800C3394:;
  c->r[4]=c->r[31]|c->r[31]; // 800C3394
  c->r[3]=c->r[1]+0x00000050u; // 800C3398
  c->lr=0x800C33A0u; f_8005DC84(c); // 800C339C
L_800C33A0:;
  c->r[0]=0u+0x00000000u; // 800C33A0
  W32(c->r[1]+0x000003A4u,c->r[0]); // 800C33A4
  goto L_800C33B8; // 800C33A8
L_800C33AC:;
  c->r[4]=c->r[31]|c->r[31]; // 800C33AC
  c->r[3]=c->r[1]+0x00000050u; // 800C33B0
  c->lr=0x800C33B8u; f_8005DC84(c); // 800C33B4
L_800C33B8:;
  {uint32_t ea=c->r[2]+0xFFFFA224u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C33B8
  fcmp(c,0,c->f[31],c->f[0]); // 800C33BC
  if (!crb(c,1)) { goto L_800C33E4; } // 800C33C0
  c->f[1]=c->f[31]; // 800C33C4
  c->r[3]=c->r[1]+0x00000008u; // 800C33C8
  c->r[4]=c->r[1]+0x00000050u; // 800C33CC
  c->lr=0x800C33D4u; f_8005ED34(c); // 800C33D0
  c->r[3]=c->r[1]+0x00000044u; // 800C33D4
  c->r[5]=c->r[1]+0x00000008u; // 800C33D8
  c->r[4]=c->r[3]|c->r[3]; // 800C33DC
  c->lr=0x800C33E4u; f_8005ED10(c); // 800C33E0
L_800C33E4:;
  c->r[3]=c->r[29]|c->r[29]; // 800C33E4
  c->r[5]=c->r[30]|c->r[30]; // 800C33E8
  c->r[4]=c->r[1]+0x00000050u; // 800C33EC
  c->lr=0x800C33F4u; f_8032B6F4(c); // 800C33F0
  c->r[3]=c->r[29]|c->r[29]; // 800C33F4
  c->r[4]=c->r[1]+0x00000044u; // 800C33F8
  c->lr=0x800C3400u; f_8005CDC8(c); // 800C33FC
  c->r[11]=c->r[1]+0x000003C0u; // 800C3400
  {uint32_t ea=c->r[1]+0x000003D8u; psq_load(c,31,ea,0,0);} // 800C3404
  {uint32_t ea=c->r[1]+0x000003D0u; c->f[31]=RF64(ea);} // 800C3408
  {uint32_t ea=c->r[1]+0x000003C8u; psq_load(c,30,ea,0,0);} // 800C340C
  {uint32_t ea=c->r[1]+0x000003C0u; c->f[30]=RF64(ea);} // 800C3410
  c->lr=0x800C3418u; { c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800C3414
  c->r[0]=R32(c->r[1]+0x000003E4u); // 800C3418
  c->lr=c->r[0]; // 800C341C
  c->r[1]=c->r[1]+0x000003E0u; // 800C3420
  return; // 800C3424
}

// fn_800C3428
void f_800C3428(Ctx* __restrict c) {
  trace_call(0x800C3428u);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C3428
  c->r[0]=c->lr; // 800C342C
  cmps(c,0,(int32_t)c->r[5],0); // 800C3430
  W32(c->r[1]+0x00000054u,c->r[0]); // 800C3434
  {uint32_t ea=c->r[1]+0x00000048u; WF64(ea,c->f[31]);} // 800C3438
  c->f[31]=c->f[2]; // 800C343C
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[30]);} // 800C3440
  c->f[30]=c->f[1]; // 800C3444
  {uint32_t ea=c->r[1]+0x0000002Cu; for(int i=27;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800C3448
  c->r[27]=c->r[3]|c->r[3]; // 800C344C
  c->r[28]=c->r[4]|c->r[4]; // 800C3450
  c->r[29]=c->r[6]|c->r[6]; // 800C3454
  if (!crb(c,0)) { goto L_800C3464; } // 800C3458
  c->r[31]=R32(c->r[4]+0x00000008u); // 800C345C
  goto L_800C3468; // 800C3460
L_800C3464:;
  c->r[31]=c->r[5]|c->r[5]; // 800C3464
L_800C3468:;
  c->r[4]=c->r[31]|c->r[31]; // 800C3468
  c->r[3]=c->r[28]|c->r[28]; // 800C346C
  c->lr=0x800C3474u; f_800C30A0(c); // 800C3470
  c->r[30]=c->r[28]+0x00000004u; // 800C3474
  c->r[4]=c->r[3]|c->r[3]; // 800C3478
  c->r[3]=c->r[30]|c->r[30]; // 800C347C
  c->lr=0x800C3484u; f_800A09F0(c); // 800C3480
  c->r[4]=c->r[3]|c->r[3]; // 800C3484
  c->r[3]=c->r[1]+0x00000014u; // 800C3488
  c->lr=0x800C3490u; f_8005CD7C(c); // 800C348C
  c->r[4]=c->r[31]|c->r[31]; // 800C3490
  c->r[3]=c->r[28]|c->r[28]; // 800C3494
  c->lr=0x800C349Cu; f_800C30A0(c); // 800C3498
  c->r[5]=c->r[3]|c->r[3]; // 800C349C
  c->r[4]=c->r[30]|c->r[30]; // 800C34A0
  c->r[3]=c->r[1]+0x00000008u; // 800C34A4
  c->lr=0x800C34ACu; f_800A0A20(c); // 800C34A8
  c->f[1]=c->f[30]; // 800C34AC
  c->r[3]=c->r[27]|c->r[27]; // 800C34B0
  c->f[2]=c->f[31]; // 800C34B4
  c->r[6]=c->r[29]|c->r[29]; // 800C34B8
  c->r[4]=c->r[1]+0x00000014u; // 800C34BC
  c->r[5]=c->r[1]+0x00000008u; // 800C34C0
  c->lr=0x800C34C8u; f_800C32B4(c); // 800C34C4
  {uint32_t ea=c->r[1]+0x00000048u; c->f[31]=RF64(ea);} // 800C34C8
  {uint32_t ea=c->r[1]+0x00000040u; c->f[30]=RF64(ea);} // 800C34CC
  {uint32_t ea=c->r[1]+0x0000002Cu; for(int i=27;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800C34D0
  c->r[0]=R32(c->r[1]+0x00000054u); // 800C34D4
  c->lr=c->r[0]; // 800C34D8
  c->r[1]=c->r[1]+0x00000050u; // 800C34DC
  return; // 800C34E0
}

// fn_800C34E4
void f_800C34E4(Ctx* __restrict c) {
  trace_call(0x800C34E4u);
  {uint32_t ea=c->r[1]+0xFFFFFED0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C34E4
  c->r[0]=c->lr; // 800C34E8
  W32(c->r[1]+0x00000134u,c->r[0]); // 800C34EC
  c->r[11]=c->r[1]+0x00000100u; // 800C34F0
  {uint32_t ea=c->r[1]+0x00000120u; WF64(ea,c->f[31]);} // 800C34F4
  {uint32_t ea=c->r[1]+0x00000128u; psq_store(c,31,ea,0,0);} // 800C34F8
  {uint32_t ea=c->r[1]+0x00000110u; WF64(ea,c->f[30]);} // 800C34FC
  {uint32_t ea=c->r[1]+0x00000118u; psq_store(c,30,ea,0,0);} // 800C3500
  {uint32_t ea=c->r[1]+0x00000100u; WF64(ea,c->f[29]);} // 800C3504
  {uint32_t ea=c->r[1]+0x00000108u; psq_store(c,29,ea,0,0);} // 800C3508
  c->lr=0x800C3510u; { W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800C350C
  c->f[30]=c->f[2]; // 800C3510
  c->r[28]=c->r[3]|c->r[3]; // 800C3514
  c->f[29]=c->f[1]; // 800C3518
  {uint32_t ea=c->r[2]+0xFFFFA224u; c->f[2]=c->ps1[2]=RF32(ea);} // 800C351C
  c->f[31]=c->f[3]; // 800C3520
  c->r[29]=c->r[4]|c->r[4]; // 800C3524
  c->f[1]=c->f[30]; // 800C3528
  c->r[30]=c->r[5]|c->r[5]; // 800C352C
  c->r[31]=c->r[6]|c->r[6]; // 800C3530
  c->r[3]=c->r[1]+0x000000C0u; // 800C3534
  c->lr=0x800C353Cu; f_800C3428(c); // 800C3538
  c->f[1]=c->f[30]; // 800C353C
  {uint32_t ea=c->r[2]+0xFFFFA224u; c->f[2]=c->ps1[2]=RF32(ea);} // 800C3540
  c->r[4]=c->r[29]|c->r[29]; // 800C3544
  c->r[6]=c->r[31]|c->r[31]; // 800C3548
  c->r[3]=c->r[1]+0x00000090u; // 800C354C
  c->r[5]=c->r[30]+0x00000001u; // 800C3550
  c->lr=0x800C3558u; f_800C3428(c); // 800C3554
  c->f[1]=c->f[29]; // 800C3558
  c->r[3]=c->r[1]+0x00000060u; // 800C355C
  c->r[4]=c->r[1]+0x000000C0u; // 800C3560
  c->r[5]=c->r[1]+0x00000090u; // 800C3564
  c->lr=0x800C356Cu; f_8030DFEC(c); // 800C3568
  c->r[4]=c->r[28]|c->r[28]; // 800C356C
  c->r[3]=c->r[1]+0x00000060u; // 800C3570
  c->lr=0x800C3578u; f_80382F2C(c); // 800C3574
  c->r[3]=c->r[29]|c->r[29]; // 800C3578
  c->r[4]=c->r[30]+0xFFFFFFFFu; // 800C357C
  c->lr=0x800C3584u; f_800C30A0(c); // 800C3580
  c->r[31]=c->r[29]+0x00000004u; // 800C3584
  c->r[4]=c->r[3]|c->r[3]; // 800C3588
  c->r[3]=c->r[31]|c->r[31]; // 800C358C
  c->lr=0x800C3594u; f_800A09F0(c); // 800C3590
  c->r[4]=c->r[3]|c->r[3]; // 800C3594
  c->r[3]=c->r[1]+0x00000044u; // 800C3598
  c->lr=0x800C35A0u; f_8005CD7C(c); // 800C359C
  c->r[4]=c->r[30]|c->r[30]; // 800C35A0
  c->r[3]=c->r[29]|c->r[29]; // 800C35A4
  c->lr=0x800C35ACu; f_800C30A0(c); // 800C35A8
  c->r[4]=c->r[3]|c->r[3]; // 800C35AC
  c->r[3]=c->r[31]|c->r[31]; // 800C35B0
  c->lr=0x800C35B8u; f_800A09F0(c); // 800C35B4
  c->r[4]=c->r[3]|c->r[3]; // 800C35B8
  c->r[3]=c->r[1]+0x00000038u; // 800C35BC
  c->lr=0x800C35C4u; f_8005CD7C(c); // 800C35C0
  c->r[3]=c->r[29]|c->r[29]; // 800C35C4
  c->r[4]=c->r[30]+0x00000001u; // 800C35C8
  c->lr=0x800C35D0u; f_800C30A0(c); // 800C35CC
  c->r[4]=c->r[3]|c->r[3]; // 800C35D0
  c->r[3]=c->r[31]|c->r[31]; // 800C35D4
  c->lr=0x800C35DCu; f_800A09F0(c); // 800C35D8
  c->r[4]=c->r[3]|c->r[3]; // 800C35DC
  c->r[3]=c->r[1]+0x0000002Cu; // 800C35E0
  c->lr=0x800C35E8u; f_8005CD7C(c); // 800C35E4
  c->r[3]=c->r[29]|c->r[29]; // 800C35E8
  c->r[4]=c->r[30]+0x00000002u; // 800C35EC
  c->lr=0x800C35F4u; f_800C30A0(c); // 800C35F0
  c->r[4]=c->r[3]|c->r[3]; // 800C35F4
  c->r[3]=c->r[31]|c->r[31]; // 800C35F8
  c->lr=0x800C3600u; f_800A09F0(c); // 800C35FC
  c->r[4]=c->r[3]|c->r[3]; // 800C3600
  c->r[3]=c->r[1]+0x00000020u; // 800C3604
  c->lr=0x800C360Cu; f_8005CD7C(c); // 800C3608
  c->f[5]=c->f[29]; // 800C360C
  {uint32_t ea=c->r[1]+0x00000044u; c->f[1]=c->ps1[1]=RF32(ea);} // 800C3610
  {uint32_t ea=c->r[1]+0x00000038u; c->f[2]=c->ps1[2]=RF32(ea);} // 800C3614
  {uint32_t ea=c->r[1]+0x0000002Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 800C3618
  {uint32_t ea=c->r[1]+0x00000020u; c->f[4]=c->ps1[4]=RF32(ea);} // 800C361C
  c->lr=0x800C3624u; f_800C36E4(c); // 800C3620
  c->f[5]=c->f[29]; // 800C3624
  {uint32_t ea=c->r[1]+0x00000050u; WF32(ea,c->f[1]);} // 800C3628
  {uint32_t ea=c->r[1]+0x00000048u; c->f[1]=c->ps1[1]=RF32(ea);} // 800C362C
  {uint32_t ea=c->r[1]+0x0000003Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 800C3630
  {uint32_t ea=c->r[1]+0x00000030u; c->f[3]=c->ps1[3]=RF32(ea);} // 800C3634
  {uint32_t ea=c->r[1]+0x00000024u; c->f[4]=c->ps1[4]=RF32(ea);} // 800C3638
  c->lr=0x800C3640u; f_800C36E4(c); // 800C363C
  c->f[5]=c->f[29]; // 800C3640
  {uint32_t ea=c->r[1]+0x00000054u; WF32(ea,c->f[1]);} // 800C3644
  {uint32_t ea=c->r[1]+0x0000004Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800C3648
  {uint32_t ea=c->r[1]+0x00000040u; c->f[2]=c->ps1[2]=RF32(ea);} // 800C364C
  {uint32_t ea=c->r[1]+0x00000034u; c->f[3]=c->ps1[3]=RF32(ea);} // 800C3650
  {uint32_t ea=c->r[1]+0x00000028u; c->f[4]=c->ps1[4]=RF32(ea);} // 800C3654
  c->lr=0x800C365Cu; f_800C36E4(c); // 800C3658
  {uint32_t ea=c->r[1]+0x00000058u; WF32(ea,c->f[1]);} // 800C365C
  c->r[3]=c->r[28]|c->r[28]; // 800C3660
  c->r[4]=c->r[1]+0x00000050u; // 800C3664
  c->lr=0x800C366Cu; f_8005CDC8(c); // 800C3668
  {uint32_t ea=c->r[2]+0xFFFFA224u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C366C
  fcmp(c,0,c->f[31],c->f[0]); // 800C3670
  if (!crb(c,1)) { goto L_800C36B4; } // 800C3674
  {uint32_t ea=c->r[28]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 800C3678
  c->r[3]=c->r[1]+0x00000008u; // 800C367C
  {uint32_t ea=c->r[28]+0x00000014u; c->f[2]=c->ps1[2]=RF32(ea);} // 800C3680
  {uint32_t ea=c->r[28]+0x00000024u; c->f[3]=c->ps1[3]=RF32(ea);} // 800C3684
  c->lr=0x800C368Cu; f_8005FD70(c); // 800C3688
  c->f[1]=c->f[31]; // 800C368C
  c->r[3]=c->r[1]+0x00000014u; // 800C3690
  c->r[4]=c->r[1]+0x00000008u; // 800C3694
  c->lr=0x800C369Cu; f_8005ED34(c); // 800C3698
  {uint32_t ea=c->r[1]+0x00000014u; c->f[1]=c->ps1[1]=RF32(ea);} // 800C369C
  c->r[3]=c->r[28]|c->r[28]; // 800C36A0
  {uint32_t ea=c->r[1]+0x00000018u; c->f[2]=c->ps1[2]=RF32(ea);} // 800C36A4
  c->r[4]=c->r[28]|c->r[28]; // 800C36A8
  {uint32_t ea=c->r[1]+0x0000001Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 800C36AC
  c->lr=0x800C36B4u; f_80383598(c); // 800C36B0
L_800C36B4:;
  c->r[11]=c->r[1]+0x00000100u; // 800C36B4
  {uint32_t ea=c->r[1]+0x00000128u; psq_load(c,31,ea,0,0);} // 800C36B8
  {uint32_t ea=c->r[1]+0x00000120u; c->f[31]=RF64(ea);} // 800C36BC
  {uint32_t ea=c->r[1]+0x00000118u; psq_load(c,30,ea,0,0);} // 800C36C0
  {uint32_t ea=c->r[1]+0x00000110u; c->f[30]=RF64(ea);} // 800C36C4
  {uint32_t ea=c->r[1]+0x00000108u; psq_load(c,29,ea,0,0);} // 800C36C8
  {uint32_t ea=c->r[1]+0x00000100u; c->f[29]=RF64(ea);} // 800C36CC
  c->lr=0x800C36D4u; { c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800C36D0
  c->r[0]=R32(c->r[1]+0x00000134u); // 800C36D4
  c->lr=c->r[0]; // 800C36D8
  c->r[1]=c->r[1]+0x00000130u; // 800C36DC
  return; // 800C36E0
}

// fn_800C36E4
void f_800C36E4(Ctx* __restrict c) {
  trace_call(0x800C36E4u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C36E4
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[31]);} // 800C36E8
  {uint32_t ea=c->r[1]+0x00000018u; psq_store(c,31,ea,0,0);} // 800C36EC
  c->f[13]=c->ps1[13]=S(c->f[5]*c->f[5]); // 800C36F0
  {uint32_t ea=c->r[2]+0xFFFFA250u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C36F4
  {uint32_t ea=c->r[2]+0xFFFFA23Cu; c->f[10]=c->ps1[10]=RF32(ea);} // 800C36F8
  {uint32_t ea=c->r[2]+0xFFFFA240u; c->f[12]=c->ps1[12]=RF32(ea);} // 800C36FC
  c->f[7]=c->ps1[7]=S(c->f[0]*c->f[13]); // 800C3700
  {uint32_t ea=c->r[2]+0xFFFFA24Cu; c->f[6]=c->ps1[6]=RF32(ea);} // 800C3704
  c->f[31]=c->ps1[31]=S(c->f[13]*c->f[5]); // 800C3708
  {uint32_t ea=c->r[2]+0xFFFFA248u; c->f[8]=c->ps1[8]=RF32(ea);} // 800C370C
  {uint32_t ea=c->r[2]+0xFFFFA22Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800C3710
  c->f[10]=c->ps1[10]=S(c->f[10]*c->f[13]); // 800C3714
  c->f[6]=c->ps1[6]=S(std::fma(c->f[6],c->f[31],c->f[7])); // 800C3718
  {uint32_t ea=c->r[2]+0xFFFFA244u; c->f[9]=c->ps1[9]=RF32(ea);} // 800C371C
  c->f[7]=c->ps1[7]=S(std::fma(c->f[8],c->f[31],c->f[13])); // 800C3720
  c->f[8]=c->ps1[8]=S(std::fma(c->f[9],c->f[31],c->f[10])); // 800C3724
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[6]); // 800C3728
  c->f[6]=c->ps1[6]=S(-std::fma(c->f[12],c->f[5],-c->f[7])); // 800C372C
  c->f[11]=c->ps1[11]=S(c->f[12]*c->f[13]); // 800C3730
  c->f[0]=c->ps1[0]=S(c->f[2]*c->f[0]); // 800C3734
  c->f[2]=c->ps1[2]=S(std::fma(c->f[12],c->f[5],c->f[8])); // 800C3738
  c->f[5]=c->ps1[5]=S(std::fma(c->f[12],c->f[31],-c->f[11])); // 800C373C
  {uint32_t ea=c->r[1]+0x00000018u; psq_load(c,31,ea,0,0);} // 800C3740
  c->f[0]=c->ps1[0]=S(std::fma(c->f[1],c->f[6],c->f[0])); // 800C3744
  {uint32_t ea=c->r[1]+0x00000010u; c->f[31]=RF64(ea);} // 800C3748
  c->f[0]=c->ps1[0]=S(std::fma(c->f[3],c->f[2],c->f[0])); // 800C374C
  c->f[1]=c->ps1[1]=S(std::fma(c->f[4],c->f[5],c->f[0])); // 800C3750
  c->r[1]=c->r[1]+0x00000020u; // 800C3754
  return; // 800C3758
}

// fn_800C375C
void f_800C375C(Ctx* __restrict c) {
  trace_call(0x800C375Cu);
  c->r[3]=0u+0x80690000u; // 800C375C
  c->r[3]=c->r[3]+0xFFFFE558u; // 800C3760
  return; // 800C3764
}

// fn_800C3768
void f_800C3768(Ctx* __restrict c) {
  trace_call(0x800C3768u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C3768
  c->r[0]=c->lr; // 800C376C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800C3770
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800C3774
  c->r[31]=0u+0x00000000u; // 800C3778
  W32(c->r[1]+0x00000008u,c->r[30]); // 800C377C
  c->r[30]=c->r[3]|c->r[3]; // 800C3780
  W32(c->r[3]+0x00000010u,c->r[31]); // 800C3784
  W32(c->r[3]+0x0000052Cu,c->r[31]); // 800C3788
  c->lr=0x800C3790u; f_800C38B8(c); // 800C378C
  c->r[0]=0u+0x00000001u; // 800C3790
  W32(c->r[30]+0x0000052Cu,c->r[0]); // 800C3794
  c->r[3]=c->r[30]|c->r[30]; // 800C3798
  c->lr=0x800C37A0u; f_800C38B8(c); // 800C379C
  W32(c->r[30]+0x0000052Cu,c->r[31]); // 800C37A0
  c->r[3]=c->r[30]|c->r[30]; // 800C37A4
  c->r[12]=R32(c->r[30]+0x00000004u); // 800C37A8
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800C37AC
  c->ctr=c->r[12]; // 800C37B0
  if (true) { c->lr=0x800C37B8u; dispatch(c,c->ctr); } // 800C37B4
  {uint32_t ea=c->r[13]+0xFFFF83B4u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C37B8
  {uint32_t ea=c->r[30]+0x00000538u; WF32(ea,c->f[0]);} // 800C37BC
  {uint32_t ea=c->r[2]+0xFFFFA258u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C37C0
  {uint32_t ea=c->r[13]+0xFFFF83B0u; c->f[1]=c->ps1[1]=RF32(ea);} // 800C37C4
  {uint32_t ea=c->r[30]+0x0000053Cu; WF32(ea,c->f[1]);} // 800C37C8
  W8(c->r[30]+0x0000000Cu,c->r[31]); // 800C37CC
  {uint32_t ea=c->r[30]+0x00000008u; WF32(ea,c->f[0]);} // 800C37D0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800C37D4
  c->r[30]=R32(c->r[1]+0x00000008u); // 800C37D8
  c->r[0]=R32(c->r[1]+0x00000014u); // 800C37DC
  c->lr=c->r[0]; // 800C37E0
  c->r[1]=c->r[1]+0x00000010u; // 800C37E4
  return; // 800C37E8
}

// fn_800C37EC
void f_800C37EC(Ctx* __restrict c) {
  trace_call(0x800C37ECu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C37EC
  c->r[0]=c->lr; // 800C37F0
  cmps(c,0,(int32_t)c->r[4],0); // 800C37F4
  W32(c->r[1]+0x00000024u,c->r[0]); // 800C37F8
  {uint32_t ea=c->r[1]+0x00000010u; for(int i=28;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800C37FC
  c->r[28]=c->r[3]|c->r[3]; // 800C3800
  if (crb(c,2)) { goto L_800C3858; } // 800C3804
  c->r[30]=0u+0x00000000u; // 800C3808
  c->r[29]=0u+0x00000000u; // 800C380C
  c->r[31]=0u+0x00000000u; // 800C3810
L_800C3814:;
  c->r[3]=c->r[28]+c->r[31]; // 800C3814
  c->r[3]=c->r[3]+0x0000002Cu; // 800C3818
  c->lr=0x800C3820u; f_80053614(c); // 800C381C
  cmps(c,0,(int32_t)c->r[3],0); // 800C3820
  if (crb(c,2)) { goto L_800C3840; } // 800C3824
  c->r[3]=c->r[28]+c->r[31]; // 800C3828
  c->r[0]=R8(c->r[3]+0x00000034u); // 800C382C
  cmpu(c,0,c->r[0],0x00000001u); // 800C3830
  if (!crb(c,2)) { goto L_800C3840; } // 800C3834
  c->r[30]=0u+0x00000001u; // 800C3838
  goto L_800C3850; // 800C383C
L_800C3840:;
  c->r[29]=c->r[29]+0x00000001u; // 800C3840
  c->r[31]=c->r[31]+0x0000000Cu; // 800C3844
  cmps(c,0,(int32_t)c->r[29],64); // 800C3848
  if (crb(c,0)) { IRQCHK(c); goto L_800C3814; } // 800C384C
L_800C3850:;
  c->r[3]=c->r[30]|c->r[30]; // 800C3850
  goto L_800C38A4; // 800C3854
L_800C3858:;
  c->r[29]=0u+0x00000000u; // 800C3858
  c->r[30]=0u+0x00000000u; // 800C385C
  c->r[31]=0u+0x00000000u; // 800C3860
L_800C3864:;
  c->r[3]=c->r[28]+c->r[31]; // 800C3864
  c->r[3]=c->r[3]+0x0000002Cu; // 800C3868
  c->lr=0x800C3870u; f_80053614(c); // 800C386C
  cmps(c,0,(int32_t)c->r[3],0); // 800C3870
  if (crb(c,2)) { goto L_800C3890; } // 800C3874
  c->r[3]=c->r[28]+c->r[31]; // 800C3878
  c->r[0]=R8(c->r[3]+0x00000034u); // 800C387C
  cmpu(c,0,c->r[0],0x00000001u); // 800C3880
  if (!crb(c,2)) { goto L_800C3890; } // 800C3884
  c->r[29]=0u+0x00000001u; // 800C3888
  goto L_800C38A0; // 800C388C
L_800C3890:;
  c->r[30]=c->r[30]+0x00000001u; // 800C3890
  c->r[31]=c->r[31]+0x0000000Cu; // 800C3894
  cmps(c,0,(int32_t)c->r[30],64); // 800C3898
  if (crb(c,0)) { IRQCHK(c); goto L_800C3864; } // 800C389C
L_800C38A0:;
  c->r[3]=c->r[29]|c->r[29]; // 800C38A0
L_800C38A4:;
  {uint32_t ea=c->r[1]+0x00000010u; for(int i=28;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800C38A4
  c->r[0]=R32(c->r[1]+0x00000024u); // 800C38A8
  c->lr=c->r[0]; // 800C38AC
  c->r[1]=c->r[1]+0x00000020u; // 800C38B0
  return; // 800C38B4
}

// fn_800C38B8
void f_800C38B8(Ctx* __restrict c) {
  trace_call(0x800C38B8u);
  c->r[0]=0u+0x00000040u; // 800C38B8
  c->r[7]=0u+0x00000000u; // 800C38BC
  c->r[4]=0u+0x00000000u; // 800C38C0
  c->r[5]=0u+0xFFFFFFFFu; // 800C38C4
  c->ctr=c->r[0]; // 800C38C8
L_800C38CC:;
  c->r[6]=R32(c->r[3]+0x0000052Cu); // 800C38CC
  c->r[0]=c->r[6]+0x00000001u; // 800C38D0
  c->r[6]=rotl(c->r[0],1)&0x00000001u; // 800C38D4
  c->r[0]=rotl(c->r[0],0)&0x00000001u; // 800C38D8
  c->r[0]=c->r[0]^c->r[6]; // 800C38DC
  c->r[0]=c->r[0]-c->r[6]; // 800C38E0
  c->r[0]=rotl(c->r[0],8)&0xFFFFFF00u; // 800C38E4
  c->r[0]=c->r[3]+c->r[0]; // 800C38E8
  c->r[6]=c->r[0]+c->r[4]; // 800C38EC
  c->r[4]=c->r[4]+0x00000004u; // 800C38F0
  W16(c->r[6]+0x0000032Eu,c->r[5]); // 800C38F4
  W16(c->r[6]+0x0000032Cu,c->r[7]); // 800C38F8
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800C38CC; } // 800C38FC
  c->r[4]=0u+0x00000002u; // 800C3900
  c->r[0]=0u+0x00000000u; // 800C3904
  W32(c->r[3]+0x00000530u,c->r[4]); // 800C3908
  W32(c->r[3]+0x00000534u,c->r[0]); // 800C390C
  return; // 800C3910
}

// fn_800C3914
void f_800C3914(Ctx* __restrict c) {
  trace_call(0x800C3914u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C3914
  c->r[0]=c->lr; // 800C3918
  W32(c->r[1]+0x00000044u,c->r[0]); // 800C391C
  c->r[11]=c->r[1]+0x00000040u; // 800C3920
  c->lr=0x800C3928u; { W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800C3924
  c->r[29]=c->r[3]|c->r[3]; // 800C3928
  c->r[4]=0u+0x00000001u; // 800C392C
  c->lr=0x800C3934u; f_800C37EC(c); // 800C3930
  c->r[4]=R32(c->r[13]+0xFFFFC158u); // 800C3934
  c->r[30]=c->r[3]|c->r[3]; // 800C3938
  c->r[0]=R32(c->r[13]+0xFFFFC15Cu); // 800C393C
  c->r[3]=c->r[1]+0x00000008u; // 800C3940
  W32(c->r[1]+0x00000008u,c->r[4]); // 800C3944
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 800C3948
  c->lr=0x800C3950u; f_80053614(c); // 800C394C
  cmps(c,0,(int32_t)c->r[3],0); // 800C3950
  if (!crb(c,2)) { goto L_800C3968; } // 800C3954
  {uint32_t ea=c->r[2]+0xFFFFA258u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C3958
  c->r[30]=0u+0x00000000u; // 800C395C
  {uint32_t ea=c->r[29]+0x00000008u; WF32(ea,c->f[0]);} // 800C3960
  goto L_800C3978; // 800C3964
L_800C3968:;
  cmpu(c,0,c->r[30],0x00000001u); // 800C3968
  if (!crb(c,2)) { goto L_800C3978; } // 800C396C
  {uint32_t ea=c->r[2]+0xFFFFA25Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800C3970
  {uint32_t ea=c->r[29]+0x00000008u; WF32(ea,c->f[0]);} // 800C3974
L_800C3978:;
  c->r[0]=R8(c->r[13]+0xFFFFBB9Bu); // 800C3978
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800C397C
  if (!crb(c,2)) { goto L_800C39BC; } // 800C3980
  c->r[31]=0u+0x80730000u; // 800C3984
  c->r[3]=c->r[31]+0x00006D10u; // 800C3988
  c->lr=0x800C3990u; f_802D8298(c); // 800C398C
  c->r[3]=0u+0x806D0000u; // 800C3990
  c->r[4]=0u+0x80050000u; // 800C3994
  c->r[3]=c->r[3]+0xFFFFC220u; // 800C3998
  c->r[5]=0u+0x80750000u; // 800C399C
  W32(c->r[31]+0x00006D10u,c->r[3]); // 800C39A0
  c->r[3]=c->r[31]+0x00006D10u; // 800C39A4
  c->r[4]=c->r[4]+0xFFFF9D40u; // 800C39A8
  c->r[5]=c->r[5]+0x00003780u; // 800C39AC
  c->lr=0x800C39B4u; f_803A92B8(c); // 800C39B0
  c->r[0]=0u+0x00000001u; // 800C39B4
  W8(c->r[13]+0xFFFFBB9Bu,c->r[0]); // 800C39B8
L_800C39BC:;
  c->r[3]=0u+0x80730000u; // 800C39BC
  {uint32_t ea=c->r[29]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C39C0
  c->r[3]=c->r[3]+0x00006D10u; // 800C39C4
  cmps(c,0,(int32_t)c->r[30],0); // 800C39C8
  {uint32_t ea=c->r[3]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 800C39CC
  c->f[1]=c->ps1[1]=S(c->f[0]-c->f[1]); // 800C39D0
  {uint32_t ea=c->r[29]+0x00000008u; WF32(ea,c->f[1]);} // 800C39D4
  if (!crb(c,2)) { goto L_800C3A44; } // 800C39D8
  {uint32_t ea=c->r[2]+0xFFFFA258u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C39DC
  fcmp(c,0,c->f[1],c->f[0]); // 800C39E0
  if (!crb(c,0)) { goto L_800C3A44; } // 800C39E4
  c->r[0]=R8(c->r[29]+0x0000000Cu); // 800C39E8
  cmps(c,0,(int32_t)c->r[0],0); // 800C39EC
  if (!crb(c,2)) { goto L_800C3A3C; } // 800C39F0
  c->lr=0x800C39F8u; f_8033FE4C(c); // 800C39F4
  c->r[31]=c->r[3]+0x00000104u; // 800C39F8
  c->r[3]=c->r[1]+0x0000001Cu; // 800C39FC
  c->r[4]=c->r[31]|c->r[31]; // 800C3A00
  c->lr=0x800C3A08u; f_8005DC84(c); // 800C3A04
  c->r[3]=c->r[1]+0x00000010u; // 800C3A08
  c->r[4]=c->r[31]+0x0000000Cu; // 800C3A0C
  c->r[5]=c->r[1]+0x0000001Cu; // 800C3A10
  c->lr=0x800C3A18u; f_8005FC60(c); // 800C3A14
  {uint32_t ea=c->r[2]+0xFFFFA258u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C3A18
  c->r[3]=c->r[29]+0x00000014u; // 800C3A1C
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[0]);} // 800C3A20
  c->r[4]=c->r[1]+0x0000001Cu; // 800C3A24
  c->lr=0x800C3A2Cu; f_8005DC84(c); // 800C3A28
  c->r[3]=c->r[29]+0x00000020u; // 800C3A2C
  c->r[4]=c->r[1]+0x00000010u; // 800C3A30
  c->lr=0x800C3A38u; f_8005DC84(c); // 800C3A34
  goto L_800C3A44; // 800C3A38
L_800C3A3C:;
  c->r[0]=0u+0x00000000u; // 800C3A3C
  W8(c->r[29]+0x0000000Cu,c->r[0]); // 800C3A40
L_800C3A44:;
  c->r[11]=c->r[1]+0x00000040u; // 800C3A44
  c->lr=0x800C3A4Cu; { c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800C3A48
  c->r[0]=R32(c->r[1]+0x00000044u); // 800C3A4C
  c->lr=c->r[0]; // 800C3A50
  c->r[1]=c->r[1]+0x00000040u; // 800C3A54
  return; // 800C3A58
}

// fn_800C3A5C
void f_800C3A5C(Ctx* __restrict c) {
  trace_call(0x800C3A5Cu);
  return; // 800C3A5C
}

// fn_800C3A60
void f_800C3A60(Ctx* __restrict c) {
  trace_call(0x800C3A60u);
  return; // 800C3A60
}

// fn_800C3A64
void f_800C3A64(Ctx* __restrict c) {
  trace_call(0x800C3A64u);
  c->r[0]=0u+0x00000000u; // 800C3A64
  W32(c->r[3]+0x00000000u,c->r[0]); // 800C3A68
  W32(c->r[3]+0x00000004u,c->r[0]); // 800C3A6C
  return; // 800C3A70
}

// fn_800C3A74
void f_800C3A74(Ctx* __restrict c) {
  trace_call(0x800C3A74u);
  c->r[3]=c->r[13]+0xFFFFC158u; // 800C3A74
  f_800C3A64(c); return; // 800C3A78
}

// fn_800C3A7C
void f_800C3A7C(Ctx* __restrict c) {
  trace_call(0x800C3A7Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C3A7C
  c->r[0]=c->lr; // 800C3A80
  c->r[6]=0u+0x806D0000u; // 800C3A84
  c->r[5]=0u+0x80760000u; // 800C3A88
  W32(c->r[1]+0x00000014u,c->r[0]); // 800C3A8C
  c->r[6]=c->r[6]+0x00007250u; // 800C3A90
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800C3A94
  c->r[31]=c->r[4]|c->r[4]; // 800C3A98
  c->r[4]=c->r[5]+0xFFFF9C78u; // 800C3A9C
  W32(c->r[1]+0x00000008u,c->r[30]); // 800C3AA0
  c->r[30]=c->r[3]|c->r[3]; // 800C3AA4
  W32(c->r[3]+0x00000000u,c->r[6]); // 800C3AA8
  c->r[3]=c->r[3]+0x00000008u; // 800C3AAC
  c->lr=0x800C3AB4u; f_8005DC84(c); // 800C3AB0
  {uint32_t ea=c->r[2]+0xFFFFA260u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C3AB4
  c->r[4]=0u+0x00000000u; // 800C3AB8
  c->r[0]=0u+0x00000001u; // 800C3ABC
  W32(c->r[30]+0x00000004u,c->r[31]); // 800C3AC0
  c->r[3]=c->r[30]|c->r[30]; // 800C3AC4
  {uint32_t ea=c->r[30]+0x00000014u; WF32(ea,c->f[0]);} // 800C3AC8
  {uint32_t ea=c->r[30]+0x00000018u; WF32(ea,c->f[0]);} // 800C3ACC
  W32(c->r[30]+0x0000001Cu,c->r[4]); // 800C3AD0
  W32(c->r[30]+0x00000020u,c->r[4]); // 800C3AD4
  W32(c->r[30]+0x00000024u,c->r[4]); // 800C3AD8
  W32(c->r[30]+0x00000028u,c->r[4]); // 800C3ADC
  W8(c->r[30]+0x0000002Cu,c->r[0]); // 800C3AE0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800C3AE4
  c->r[30]=R32(c->r[1]+0x00000008u); // 800C3AE8
  c->r[0]=R32(c->r[1]+0x00000014u); // 800C3AEC
  c->lr=c->r[0]; // 800C3AF0
  c->r[1]=c->r[1]+0x00000010u; // 800C3AF4
  return; // 800C3AF8
}

// fn_800C3AFC
void f_800C3AFC(Ctx* __restrict c) {
  trace_call(0x800C3AFCu);
  return; // 800C3AFC
}

// fn_800C3B00
void f_800C3B00(Ctx* __restrict c) {
  trace_call(0x800C3B00u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C3B00
  c->r[0]=c->lr; // 800C3B04
  W32(c->r[1]+0x00000014u,c->r[0]); // 800C3B08
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800C3B0C
  c->r[31]=c->r[3]|c->r[3]; // 800C3B10
  c->lr=0x800C3B18u; f_800C3B6C(c); // 800C3B14
  c->r[3]=c->r[31]|c->r[31]; // 800C3B18
  c->lr=0x800C3B20u; f_800C3C94(c); // 800C3B1C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800C3B20
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800C3B24
  c->lr=c->r[0]; // 800C3B28
  c->r[1]=c->r[1]+0x00000010u; // 800C3B2C
  return; // 800C3B30
}

// fn_800C3B34
void f_800C3B34(Ctx* __restrict c) {
  trace_call(0x800C3B34u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C3B34
  c->r[0]=c->lr; // 800C3B38
  W32(c->r[1]+0x00000014u,c->r[0]); // 800C3B3C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800C3B40
  c->r[31]=c->r[3]|c->r[3]; // 800C3B44
  c->lr=0x800C3B4Cu; f_800C3B6C(c); // 800C3B48
  {uint32_t ea=c->r[2]+0xFFFFA260u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C3B4C
  {uint32_t ea=c->r[31]+0x00000014u; WF32(ea,c->f[0]);} // 800C3B50
  {uint32_t ea=c->r[31]+0x00000018u; WF32(ea,c->f[0]);} // 800C3B54
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800C3B58
  c->r[0]=R32(c->r[1]+0x00000014u); // 800C3B5C
  c->lr=c->r[0]; // 800C3B60
  c->r[1]=c->r[1]+0x00000010u; // 800C3B64
  return; // 800C3B68
}

// fn_800C3B6C
void f_800C3B6C(Ctx* __restrict c) {
  trace_call(0x800C3B6Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C3B6C
  c->r[0]=c->lr; // 800C3B70
  W32(c->r[1]+0x00000044u,c->r[0]); // 800C3B74
  W32(c->r[1]+0x0000003Cu,c->r[31]); // 800C3B78
  c->r[31]=c->r[3]|c->r[3]; // 800C3B7C
  c->r[3]=c->r[1]+0x00000020u; // 800C3B80
  c->r[4]=R32(c->r[31]+0x00000004u); // 800C3B84
  c->r[12]=R32(c->r[4]+0x0000001Cu); // 800C3B88
  c->r[12]=R32(c->r[12]+0x00000138u); // 800C3B8C
  c->ctr=c->r[12]; // 800C3B90
  if (true) { c->lr=0x800C3B98u; dispatch(c,c->ctr); } // 800C3B94
  c->r[4]=R32(c->r[31]+0x00000004u); // 800C3B98
  c->r[3]=c->r[1]+0x00000008u; // 800C3B9C
  c->r[12]=R32(c->r[4]+0x0000001Cu); // 800C3BA0
  c->r[12]=R32(c->r[12]+0x00000138u); // 800C3BA4
  c->ctr=c->r[12]; // 800C3BA8
  if (true) { c->lr=0x800C3BB0u; dispatch(c,c->ctr); } // 800C3BAC
  c->lr=0x800C3BB4u; f_8033FE4C(c); // 800C3BB0
  c->r[0]=R8(c->r[13]+0xFFFFBC14u); // 800C3BB4
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800C3BB8
  if (!crb(c,2)) { goto L_800C3BF4; } // 800C3BBC
  c->r[3]=c->r[13]+0xFFFFBC18u; // 800C3BC0
  c->lr=0x800C3BC8u; f_802974E0(c); // 800C3BC4
  c->r[3]=0u+0x806D0000u; // 800C3BC8
  c->r[4]=0u+0x80050000u; // 800C3BCC
  c->r[3]=c->r[3]+0xFFFFCA00u; // 800C3BD0
  c->r[5]=0u+0x80750000u; // 800C3BD4
  W32(c->r[13]+0xFFFFBC18u,c->r[3]); // 800C3BD8
  c->r[4]=c->r[4]+0x00000684u; // 800C3BDC
  c->r[5]=c->r[5]+0x00003790u; // 800C3BE0
  c->r[3]=c->r[13]+0xFFFFBC18u; // 800C3BE4
  c->lr=0x800C3BECu; f_803A92B8(c); // 800C3BE8
  c->r[0]=0u+0x00000001u; // 800C3BEC
  W8(c->r[13]+0xFFFFBC14u,c->r[0]); // 800C3BF0
L_800C3BF4:;
  c->r[4]=c->r[1]+0x00000008u; // 800C3BF4
  c->r[5]=c->r[1]+0x00000014u; // 800C3BF8
  c->r[3]=c->r[13]+0xFFFFBC18u; // 800C3BFC
  c->r[6]=0u+0xFFFFFFFFu; // 800C3C00
  c->lr=0x800C3C08u; f_80297C78(c); // 800C3C04
  {uint32_t ea=c->r[1]+0x0000001Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800C3C08
  {uint32_t ea=c->r[2]+0xFFFFA260u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C3C0C
  fcmp(c,0,c->f[1],c->f[0]); // 800C3C10
  setcrb(c,2,crb(c,1)|crb(c,2)); // 800C3C14
  c->r[0]=c->cr; // 800C3C18
  c->r[3]=c->r[31]+0x00000008u; // 800C3C1C
  c->r[0]=rotl(c->r[0],3)&0x00000001u; // 800C3C20
  W8(c->r[31]+0x0000002Cu,c->r[0]); // 800C3C24
  c->r[4]=c->r[1]+0x00000014u; // 800C3C28
  c->lr=0x800C3C30u; f_8005DC84(c); // 800C3C2C
  c->r[3]=c->r[1]+0x00000014u; // 800C3C30
  c->lr=0x800C3C38u; f_800C3D4C(c); // 800C3C34
  c->r[0]=R8(c->r[31]+0x0000002Cu); // 800C3C38
  W32(c->r[31]+0x0000001Cu,c->r[3]); // 800C3C3C
  cmps(c,0,(int32_t)c->r[0],0); // 800C3C40
  if (crb(c,2)) { goto L_800C3C50; } // 800C3C44
  c->r[3]=0u+0x00000004u; // 800C3C48
  goto L_800C3C54; // 800C3C4C
L_800C3C50:;
  c->lr=0x800C3C54u; f_800C3EF4(c); // 800C3C50
L_800C3C54:;
  W32(c->r[31]+0x00000020u,c->r[3]); // 800C3C54
  c->r[3]=c->r[1]+0x00000014u; // 800C3C58
  c->lr=0x800C3C60u; f_800C3E20(c); // 800C3C5C
  c->r[0]=R8(c->r[31]+0x0000002Cu); // 800C3C60
  W32(c->r[31]+0x00000024u,c->r[3]); // 800C3C64
  cmps(c,0,(int32_t)c->r[0],0); // 800C3C68
  if (crb(c,2)) { goto L_800C3C78; } // 800C3C6C
  c->r[3]=0u+0x00000004u; // 800C3C70
  goto L_800C3C7C; // 800C3C74
L_800C3C78:;
  c->lr=0x800C3C7Cu; f_800C3EF4(c); // 800C3C78
L_800C3C7C:;
  W32(c->r[31]+0x00000028u,c->r[3]); // 800C3C7C
  c->r[31]=R32(c->r[1]+0x0000003Cu); // 800C3C80
  c->r[0]=R32(c->r[1]+0x00000044u); // 800C3C84
  c->lr=c->r[0]; // 800C3C88
  c->r[1]=c->r[1]+0x00000040u; // 800C3C8C
  return; // 800C3C90
}

// fn_800C3C94
void f_800C3C94(Ctx* __restrict c) {
  trace_call(0x800C3C94u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C3C94
  c->r[0]=c->lr; // 800C3C98
  W32(c->r[1]+0x00000024u,c->r[0]); // 800C3C9C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800C3CA0
  c->r[31]=c->r[3]|c->r[3]; // 800C3CA4
  c->lr=0x800C3CACu; f_800C3D1C(c); // 800C3CA8
  cmps(c,0,(int32_t)c->r[3],0); // 800C3CAC
  if (crb(c,2)) { goto L_800C3CE0; } // 800C3CB0
  c->r[0]=0u+0x00000000u; // 800C3CB4
  W8(c->r[1]+0x0000000Cu,c->r[0]); // 800C3CB8
  c->r[3]=c->r[1]+0x0000000Cu; // 800C3CBC
  c->lr=0x800C3CC4u; f_8004714C(c); // 800C3CC0
  {uint32_t ea=c->r[3]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 800C3CC4
  {uint32_t ea=c->r[31]+0x00000014u; c->f[1]=c->ps1[1]=RF32(ea);} // 800C3CC8
  {uint32_t ea=c->r[2]+0xFFFFA260u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C3CCC
  c->f[1]=c->ps1[1]=S(c->f[1]+c->f[2]); // 800C3CD0
  {uint32_t ea=c->r[31]+0x00000018u; WF32(ea,c->f[0]);} // 800C3CD4
  {uint32_t ea=c->r[31]+0x00000014u; WF32(ea,c->f[1]);} // 800C3CD8
  goto L_800C3D08; // 800C3CDC
L_800C3CE0:;
  c->r[0]=0u+0x00000000u; // 800C3CE0
  W8(c->r[1]+0x00000008u,c->r[0]); // 800C3CE4
  c->r[3]=c->r[1]+0x00000008u; // 800C3CE8
  c->lr=0x800C3CF0u; f_8004714C(c); // 800C3CEC
  {uint32_t ea=c->r[3]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 800C3CF0
  {uint32_t ea=c->r[31]+0x00000018u; c->f[1]=c->ps1[1]=RF32(ea);} // 800C3CF4
  {uint32_t ea=c->r[2]+0xFFFFA260u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C3CF8
  c->f[1]=c->ps1[1]=S(c->f[1]+c->f[2]); // 800C3CFC
  {uint32_t ea=c->r[31]+0x00000014u; WF32(ea,c->f[0]);} // 800C3D00
  {uint32_t ea=c->r[31]+0x00000018u; WF32(ea,c->f[1]);} // 800C3D04
L_800C3D08:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 800C3D08
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800C3D0C
  c->lr=c->r[0]; // 800C3D10
  c->r[1]=c->r[1]+0x00000020u; // 800C3D14
  return; // 800C3D18
}

// fn_800C3D1C
void f_800C3D1C(Ctx* __restrict c) {
  trace_call(0x800C3D1Cu);
  c->r[0]=R32(c->r[3]+0x00000020u); // 800C3D1C
  cmps(c,0,(int32_t)c->r[0],4); // 800C3D20
  if (crb(c,0)) { goto L_800C3D30; } // 800C3D24
  c->r[3]=0u+0x00000000u; // 800C3D28
  return; // 800C3D2C
L_800C3D30:;
  c->r[0]=R32(c->r[3]+0x00000028u); // 800C3D30
  c->r[0]=c->r[0]^0x00000004u; // 800C3D34
  c->r[3]=sraw(c,c->r[0],1); // 800C3D38
  c->r[0]=rotl(c->r[0],0)&0x00000004u; // 800C3D3C
  c->r[0]=c->r[3]-c->r[0]; // 800C3D40
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 800C3D44
  return; // 800C3D48
}

// fn_800C3D4C
void f_800C3D4C(Ctx* __restrict c) {
  trace_call(0x800C3D4Cu);
  {uint32_t ea=c->r[3]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 800C3D4C
  {uint32_t ea=c->r[2]+0xFFFFA264u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C3D50
  fcmp(c,0,c->f[1],c->f[0]); // 800C3D54
  if (!crb(c,0)) { goto L_800C3D64; } // 800C3D58
  c->r[3]=0u+0xFFFFFFFBu; // 800C3D5C
  return; // 800C3D60
L_800C3D64:;
  {uint32_t ea=c->r[2]+0xFFFFA260u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C3D64
  fcmp(c,0,c->f[1],c->f[0]); // 800C3D68
  if (!crb(c,0)) { goto L_800C3D78; } // 800C3D6C
  c->r[3]=0u+0xFFFFFFFCu; // 800C3D70
  return; // 800C3D74
L_800C3D78:;
  {uint32_t ea=c->r[2]+0xFFFFA268u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C3D78
  fcmp(c,0,c->f[1],c->f[0]); // 800C3D7C
  if (!crb(c,0)) { goto L_800C3D8C; } // 800C3D80
  c->r[3]=0u+0xFFFFFFFDu; // 800C3D84
  return; // 800C3D88
L_800C3D8C:;
  {uint32_t ea=c->r[2]+0xFFFFA26Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800C3D8C
  fcmp(c,0,c->f[1],c->f[0]); // 800C3D90
  if (!crb(c,0)) { goto L_800C3DA0; } // 800C3D94
  c->r[3]=0u+0xFFFFFFFEu; // 800C3D98
  return; // 800C3D9C
L_800C3DA0:;
  {uint32_t ea=c->r[2]+0xFFFFA270u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C3DA0
  fcmp(c,0,c->f[1],c->f[0]); // 800C3DA4
  if (!crb(c,0)) { goto L_800C3DB4; } // 800C3DA8
  c->r[3]=0u+0xFFFFFFFFu; // 800C3DAC
  return; // 800C3DB0
L_800C3DB4:;
  {uint32_t ea=c->r[2]+0xFFFFA274u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C3DB4
  fcmp(c,0,c->f[1],c->f[0]); // 800C3DB8
  if (!crb(c,0)) { goto L_800C3DC8; } // 800C3DBC
  c->r[3]=0u+0x00000000u; // 800C3DC0
  return; // 800C3DC4
L_800C3DC8:;
  {uint32_t ea=c->r[2]+0xFFFFA278u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C3DC8
  fcmp(c,0,c->f[1],c->f[0]); // 800C3DCC
  if (!crb(c,0)) { goto L_800C3DDC; } // 800C3DD0
  c->r[3]=0u+0x00000001u; // 800C3DD4
  return; // 800C3DD8
L_800C3DDC:;
  {uint32_t ea=c->r[2]+0xFFFFA27Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800C3DDC
  fcmp(c,0,c->f[1],c->f[0]); // 800C3DE0
  if (!crb(c,0)) { goto L_800C3DF0; } // 800C3DE4
  c->r[3]=0u+0x00000002u; // 800C3DE8
  return; // 800C3DEC
L_800C3DF0:;
  {uint32_t ea=c->r[2]+0xFFFFA280u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C3DF0
  fcmp(c,0,c->f[1],c->f[0]); // 800C3DF4
  if (!crb(c,0)) { goto L_800C3E04; } // 800C3DF8
  c->r[3]=0u+0x00000003u; // 800C3DFC
  return; // 800C3E00
L_800C3E04:;
  {uint32_t ea=c->r[2]+0xFFFFA284u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C3E04
  fcmp(c,0,c->f[1],c->f[0]); // 800C3E08
  if (!crb(c,0)) { goto L_800C3E18; } // 800C3E0C
  c->r[3]=0u+0x00000004u; // 800C3E10
  return; // 800C3E14
L_800C3E18:;
  c->r[3]=0u+0x00000005u; // 800C3E18
  return; // 800C3E1C
}

// fn_800C3E20
void f_800C3E20(Ctx* __restrict c) {
  trace_call(0x800C3E20u);
  {uint32_t ea=c->r[3]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 800C3E20
  {uint32_t ea=c->r[2]+0xFFFFA288u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C3E24
  fcmp(c,0,c->f[1],c->f[0]); // 800C3E28
  if (!crb(c,0)) { goto L_800C3E38; } // 800C3E2C
  c->r[3]=0u+0xFFFFFFFBu; // 800C3E30
  return; // 800C3E34
L_800C3E38:;
  {uint32_t ea=c->r[2]+0xFFFFA260u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C3E38
  fcmp(c,0,c->f[1],c->f[0]); // 800C3E3C
  if (!crb(c,0)) { goto L_800C3E4C; } // 800C3E40
  c->r[3]=0u+0xFFFFFFFCu; // 800C3E44
  return; // 800C3E48
L_800C3E4C:;
  {uint32_t ea=c->r[2]+0xFFFFA28Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800C3E4C
  fcmp(c,0,c->f[1],c->f[0]); // 800C3E50
  if (!crb(c,0)) { goto L_800C3E60; } // 800C3E54
  c->r[3]=0u+0xFFFFFFFDu; // 800C3E58
  return; // 800C3E5C
L_800C3E60:;
  {uint32_t ea=c->r[2]+0xFFFFA290u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C3E60
  fcmp(c,0,c->f[1],c->f[0]); // 800C3E64
  if (!crb(c,0)) { goto L_800C3E74; } // 800C3E68
  c->r[3]=0u+0xFFFFFFFEu; // 800C3E6C
  return; // 800C3E70
L_800C3E74:;
  {uint32_t ea=c->r[2]+0xFFFFA294u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C3E74
  fcmp(c,0,c->f[1],c->f[0]); // 800C3E78
  if (!crb(c,0)) { goto L_800C3E88; } // 800C3E7C
  c->r[3]=0u+0xFFFFFFFFu; // 800C3E80
  return; // 800C3E84
L_800C3E88:;
  {uint32_t ea=c->r[2]+0xFFFFA298u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C3E88
  fcmp(c,0,c->f[1],c->f[0]); // 800C3E8C
  if (!crb(c,0)) { goto L_800C3E9C; } // 800C3E90
  c->r[3]=0u+0x00000000u; // 800C3E94
  return; // 800C3E98
L_800C3E9C:;
  {uint32_t ea=c->r[2]+0xFFFFA29Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800C3E9C
  fcmp(c,0,c->f[1],c->f[0]); // 800C3EA0
  if (!crb(c,0)) { goto L_800C3EB0; } // 800C3EA4
  c->r[3]=0u+0x00000001u; // 800C3EA8
  return; // 800C3EAC
L_800C3EB0:;
  {uint32_t ea=c->r[2]+0xFFFFA2A0u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C3EB0
  fcmp(c,0,c->f[1],c->f[0]); // 800C3EB4
  if (!crb(c,0)) { goto L_800C3EC4; } // 800C3EB8
  c->r[3]=0u+0x00000002u; // 800C3EBC
  return; // 800C3EC0
L_800C3EC4:;
  {uint32_t ea=c->r[2]+0xFFFFA278u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C3EC4
  fcmp(c,0,c->f[1],c->f[0]); // 800C3EC8
  if (!crb(c,0)) { goto L_800C3ED8; } // 800C3ECC
  c->r[3]=0u+0x00000003u; // 800C3ED0
  return; // 800C3ED4
L_800C3ED8:;
  {uint32_t ea=c->r[2]+0xFFFFA2A4u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C3ED8
  fcmp(c,0,c->f[1],c->f[0]); // 800C3EDC
  if (!crb(c,0)) { goto L_800C3EEC; } // 800C3EE0
  c->r[3]=0u+0x00000004u; // 800C3EE4
  return; // 800C3EE8
L_800C3EEC:;
  c->r[3]=0u+0x00000005u; // 800C3EEC
  return; // 800C3EF0
}

// fn_800C3EF4
void f_800C3EF4(Ctx* __restrict c) {
  trace_call(0x800C3EF4u);
  c->r[4]=sraw(c,c->r[3],31); // 800C3EF4
  c->r[0]=c->r[4]^c->r[3]; // 800C3EF8
  c->r[0]=c->r[0]-c->r[4]; cr0(c,c->r[0]); // 800C3EFC
  if (!crb(c,2)) { goto L_800C3F0C; } // 800C3F00
  c->r[3]=0u+0x00000001u; // 800C3F04
  return; // 800C3F08
L_800C3F0C:;
  cmps(c,0,(int32_t)c->r[0],1); // 800C3F0C
  if (!crb(c,2)) { goto L_800C3F1C; } // 800C3F10
  c->r[3]=0u+0x00000002u; // 800C3F14
  return; // 800C3F18
L_800C3F1C:;
  cmps(c,0,(int32_t)c->r[0],2); // 800C3F1C
  c->r[3]=0u+0x00000004u; // 800C3F20
  if (!crb(c,2)) return; // 800C3F24
  c->r[3]=0u+0x00000003u; // 800C3F28
  return; // 800C3F2C
}

// fn_800C3F30
void f_800C3F30(Ctx* __restrict c) {
  trace_call(0x800C3F30u);
  c->r[4]=0u+0x806D0000u; // 800C3F30
  c->r[0]=0u+0x00000000u; // 800C3F34
  c->r[4]=c->r[4]+0x00007260u; // 800C3F38
  W32(c->r[3]+0x00000000u,c->r[4]); // 800C3F3C
  W32(c->r[3]+0x00000004u,c->r[0]); // 800C3F40
  return; // 800C3F44
}

// dtor_800C3F48
void f_800C3F48(Ctx* __restrict c) {
  return; // 800C3F48
}

// fn_800C3F4C
void f_800C3F4C(Ctx* __restrict c) {
  trace_call(0x800C3F4Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C3F4C
  c->r[0]=c->lr; // 800C3F50
  cmps(c,0,(int32_t)c->r[4],0); // 800C3F54
  W32(c->r[1]+0x00000014u,c->r[0]); // 800C3F58
  c->r[0]=0u+0x00000000u; // 800C3F5C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800C3F60
  c->r[31]=c->r[4]|c->r[4]; // 800C3F64
  W32(c->r[1]+0x00000008u,c->r[30]); // 800C3F68
  c->r[30]=c->r[3]|c->r[3]; // 800C3F6C
  W32(c->r[3]+0x00000004u,c->r[0]); // 800C3F70
  if (!crb(c,2)) { goto L_800C3F80; } // 800C3F74
  c->r[3]=0u+0x00000000u; // 800C3F78
  goto L_800C3FAC; // 800C3F7C
L_800C3F80:;
  c->r[4]=0u+0x80690000u; // 800C3F80
  c->r[3]=c->r[31]|c->r[31]; // 800C3F84
  c->r[4]=c->r[4]+0xFFFFE570u; // 800C3F88
  c->r[5]=0u+0x00000004u; // 800C3F8C
  c->lr=0x800C3F94u; f_803B3A58(c); // 800C3F90
  cmps(c,0,(int32_t)c->r[3],0); // 800C3F94
  if (crb(c,2)) { goto L_800C3FA4; } // 800C3F98
  c->r[3]=0u+0x00000000u; // 800C3F9C
  goto L_800C3FAC; // 800C3FA0
L_800C3FA4:;
  W32(c->r[30]+0x00000004u,c->r[31]); // 800C3FA4
  c->r[3]=0u+0x00000001u; // 800C3FA8
L_800C3FAC:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800C3FAC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800C3FB0
  c->r[30]=R32(c->r[1]+0x00000008u); // 800C3FB4
  c->lr=c->r[0]; // 800C3FB8
  c->r[1]=c->r[1]+0x00000010u; // 800C3FBC
  return; // 800C3FC0
}

// fn_800C3FC4
void f_800C3FC4(Ctx* __restrict c) {
  trace_call(0x800C3FC4u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C3FC4
  c->r[0]=c->lr; // 800C3FC8
  W32(c->r[1]+0x00000024u,c->r[0]); // 800C3FCC
  c->r[11]=c->r[1]+0x00000020u; // 800C3FD0
  c->lr=0x800C3FD8u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800C3FD4
  c->r[7]=R32(c->r[3]+0x00000004u); // 800C3FD8
  c->r[31]=c->r[5]|c->r[5]; // 800C3FDC
  cmps(c,0,(int32_t)c->r[7],0); // 800C3FE0
  if (!crb(c,2)) { goto L_800C3FF0; } // 800C3FE4
  c->r[3]=0u+0x00000000u; // 800C3FE8
  goto L_800C413C; // 800C3FEC
L_800C3FF0:;
  c->r[0]=R32(c->r[7]+0x0000000Cu); // 800C3FF0
  c->r[11]=R32(c->r[7]+0x00000008u); // 800C3FF4
  cmps(c,0,(int32_t)c->r[0],0); // 800C3FF8
  if (crb(c,2)) { goto L_800C4008; } // 800C3FFC
  c->r[9]=c->r[7]+c->r[0]; // 800C4000
  goto L_800C400C; // 800C4004
L_800C4008:;
  c->r[9]=0u+0x00000000u; // 800C4008
L_800C400C:;
  c->r[10]=0u+0x00000000u; // 800C400C
  goto L_800C4074; // 800C4010
L_800C4014:;
  c->r[6]=c->r[10]+c->r[11]; // 800C4014
  c->r[0]=rotl(c->r[6],1)&0xFFFFFFFCu; // 800C4018
  c->r[8]=R32(c->r[9]+c->r[0]); // 800C401C
  c->r[12]=sraw(c,c->r[6],1); // 800C4020
  cmps(c,0,(int32_t)c->r[8],0); // 800C4024
  if (crb(c,2)) { goto L_800C4038; } // 800C4028
  c->r[0]=R32(c->r[3]+0x00000004u); // 800C402C
  c->r[6]=c->r[0]+c->r[8]; // 800C4030
  goto L_800C403C; // 800C4034
L_800C4038:;
  c->r[6]=0u+0x00000000u; // 800C4038
L_800C403C:;
  c->r[0]=R32(c->r[6]+0x00000000u); // 800C403C
  cmpu(c,0,c->r[0],c->r[4]); // 800C4040
  if (crb(c,1)) { goto L_800C404C; } // 800C4044
  c->r[10]=c->r[12]+0x00000001u; // 800C4048
L_800C404C:;
  cmps(c,0,(int32_t)c->r[8],0); // 800C404C
  if (crb(c,2)) { goto L_800C4060; } // 800C4050
  c->r[0]=R32(c->r[3]+0x00000004u); // 800C4054
  c->r[6]=c->r[0]+c->r[8]; // 800C4058
  goto L_800C4064; // 800C405C
L_800C4060:;
  c->r[6]=0u+0x00000000u; // 800C4060
L_800C4064:;
  c->r[0]=R32(c->r[6]+0x00000000u); // 800C4064
  cmpu(c,0,c->r[0],c->r[4]); // 800C4068
  if (!crb(c,1)) { goto L_800C4074; } // 800C406C
  c->r[11]=c->r[12]|c->r[12]; // 800C4070
L_800C4074:;
  cmps(c,0,(int32_t)c->r[10],(int32_t)c->r[11]); // 800C4074
  if (crb(c,0)) { IRQCHK(c); goto L_800C4014; } // 800C4078
  c->r[0]=addc(c,c->r[10],0xFFFFFFFFu,0); cr0(c,c->r[0]); // 800C407C
  if (!crb(c,0)) { goto L_800C4088; } // 800C4080
  c->r[0]=0u+0x00000000u; // 800C4084
L_800C4088:;
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800C4088
  c->r[0]=R32(c->r[9]+c->r[0]); // 800C408C
  cmps(c,0,(int32_t)c->r[0],0); // 800C4090
  if (crb(c,2)) { goto L_800C40A0; } // 800C4094
  c->r[29]=c->r[7]+c->r[0]; // 800C4098
  goto L_800C40A4; // 800C409C
L_800C40A0:;
  c->r[29]=0u+0x00000000u; // 800C40A0
L_800C40A4:;
  c->r[0]=R32(c->r[29]+0x00000004u); // 800C40A4
  cmps(c,0,(int32_t)c->r[0],0); // 800C40A8
  if (crb(c,2)) { goto L_800C40B8; } // 800C40AC
  c->r[0]=c->r[7]+c->r[0]; // 800C40B0
  goto L_800C40BC; // 800C40B4
L_800C40B8:;
  c->r[0]=0u+0x00000000u; // 800C40B8
L_800C40BC:;
  W32(c->r[5]+0x00000000u,c->r[0]); // 800C40BC
  c->r[0]=0u+0x00000010u; // 800C40C0
  c->r[4]=R32(c->r[29]+0x00000008u); // 800C40C4
  cmpu(c,0,c->r[4],0x00000010u); // 800C40C8
  if (crb(c,1)) { goto L_800C40D4; } // 800C40CC
  c->r[0]=c->r[4]|c->r[4]; // 800C40D0
L_800C40D4:;
  W32(c->r[5]+0x00000004u,c->r[0]); // 800C40D4
  c->r[4]=R32(c->r[29]+0x0000000Cu); // 800C40D8
  cmps(c,0,(int32_t)c->r[4],0); // 800C40DC
  if (crb(c,2)) { goto L_800C40F0; } // 800C40E0
  c->r[0]=R32(c->r[3]+0x00000004u); // 800C40E4
  c->r[28]=c->r[0]+c->r[4]; // 800C40E8
  goto L_800C40F4; // 800C40EC
L_800C40F0:;
  c->r[28]=0u+0x00000000u; // 800C40F0
L_800C40F4:;
  c->r[30]=c->r[31]|c->r[31]; // 800C40F4
  c->r[27]=0u+0x00000000u; // 800C40F8
  goto L_800C411C; // 800C40FC
L_800C4100:;
  W32(c->r[30]+0x00000008u,c->r[28]); // 800C4100
  c->r[3]=c->r[28]|c->r[28]; // 800C4104
  c->lr=0x800C410Cu; f_803A91D4(c); // 800C4108
  c->r[3]=c->r[3]+c->r[28]; // 800C410C
  c->r[30]=c->r[30]+0x00000004u; // 800C4110
  c->r[28]=c->r[3]+0x00000001u; // 800C4114
  c->r[27]=c->r[27]+0x00000001u; // 800C4118
L_800C411C:;
  c->r[0]=R32(c->r[29]+0x00000008u); // 800C411C
  cmpu(c,0,c->r[27],c->r[0]); // 800C4120
  if (!crb(c,0)) { goto L_800C4130; } // 800C4124
  cmpu(c,0,c->r[27],0x00000010u); // 800C4128
  if (crb(c,0)) { IRQCHK(c); goto L_800C4100; } // 800C412C
L_800C4130:;
  {uint32_t ea=c->r[29]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C4130
  c->r[3]=0u+0x00000001u; // 800C4134
  {uint32_t ea=c->r[31]+0x00000048u; WF32(ea,c->f[0]);} // 800C4138
L_800C413C:;
  c->r[11]=c->r[1]+0x00000020u; // 800C413C
  c->lr=0x800C4144u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800C4140
  c->r[0]=R32(c->r[1]+0x00000024u); // 800C4144
  c->lr=c->r[0]; // 800C4148
  c->r[1]=c->r[1]+0x00000020u; // 800C414C
  return; // 800C4150
}

// fn_800C4154
void f_800C4154(Ctx* __restrict c) {
  trace_call(0x800C4154u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C4154
  c->r[0]=c->lr; // 800C4158
  c->r[5]=0u+0x806D0000u; // 800C415C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800C4160
  c->r[5]=c->r[5]+0x00007270u; // 800C4164
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800C4168
  c->r[31]=c->r[3]|c->r[3]; // 800C416C
  W32(c->r[3]+0x00000004u,c->r[4]); // 800C4170
  c->r[4]=0u+0x80760000u; // 800C4174
  c->r[4]=c->r[4]+0xFFFF9C78u; // 800C4178
  W32(c->r[3]+0x00000000u,c->r[5]); // 800C417C
  c->r[3]=c->r[3]+0x00000008u; // 800C4180
  c->lr=0x800C4188u; f_8005DC84(c); // 800C4184
  {uint32_t ea=c->r[2]+0xFFFFA2B0u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C4188
  c->r[0]=0u+0x00000000u; // 800C418C
  {uint32_t ea=c->r[31]+0x00000014u; WF32(ea,c->f[0]);} // 800C4190
  c->r[3]=c->r[31]|c->r[31]; // 800C4194
  {uint32_t ea=c->r[31]+0x00000018u; WF32(ea,c->f[0]);} // 800C4198
  {uint32_t ea=c->r[31]+0x0000001Cu; WF32(ea,c->f[0]);} // 800C419C
  W8(c->r[31]+0x00000030u,c->r[0]); // 800C41A0
  W8(c->r[31]+0x00000031u,c->r[0]); // 800C41A4
  W32(c->r[31]+0x0000002Cu,c->r[0]); // 800C41A8
  c->lr=0x800C41B0u; f_800C43E8(c); // 800C41AC
  c->r[3]=c->r[31]|c->r[31]; // 800C41B0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800C41B4
  c->r[0]=R32(c->r[1]+0x00000014u); // 800C41B8
  c->lr=c->r[0]; // 800C41BC
  c->r[1]=c->r[1]+0x00000010u; // 800C41C0
  return; // 800C41C4
}

// fn_800C41C8
void f_800C41C8(Ctx* __restrict c) {
  trace_call(0x800C41C8u);
  return; // 800C41C8
}

// fn_800C41CC
void f_800C41CC(Ctx* __restrict c) {
  trace_call(0x800C41CCu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C41CC
  c->r[0]=c->lr; // 800C41D0
  W32(c->r[1]+0x00000024u,c->r[0]); // 800C41D4
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800C41D8
  W32(c->r[1]+0x00000018u,c->r[30]); // 800C41DC
  c->r[30]=c->r[3]|c->r[3]; // 800C41E0
  c->r[0]=R8(c->r[3]+0x00000030u); // 800C41E4
  cmps(c,0,(int32_t)c->r[0],0); // 800C41E8
  if (crb(c,2)) { goto L_800C430C; } // 800C41EC
  c->r[4]=c->r[1]+0x00000008u; // 800C41F0
  c->lr=0x800C41F8u; f_800C4454(c); // 800C41F4
  {uint32_t ea=c->r[30]+0x0000001Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800C41F8
  {uint32_t ea=c->r[30]+0x00000014u; c->f[2]=c->ps1[2]=RF32(ea);} // 800C41FC
  {uint32_t ea=c->r[2]+0xFFFFA2B0u; c->f[1]=c->ps1[1]=RF32(ea);} // 800C4200
  c->f[0]=c->ps1[0]=S(c->f[2]+c->f[0]); // 800C4204
  fcmp(c,0,c->f[0],c->f[1]); // 800C4208
  if (!crb(c,0)) { goto L_800C4214; } // 800C420C
  goto L_800C4218; // 800C4210
L_800C4214:;
  c->f[1]=c->f[0]; // 800C4214
L_800C4218:;
  c->r[0]=R32(c->r[30]+0x0000002Cu); // 800C4218
  {uint32_t ea=c->r[30]+0x0000001Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 800C421C
  cmps(c,0,(int32_t)c->r[0],1); // 800C4220
  if (crb(c,2)) { goto L_800C4234; } // 800C4224
  cmps(c,0,(int32_t)c->r[0],2); // 800C4228
  if (crb(c,2)) { goto L_800C4248; } // 800C422C
  goto L_800C42A0; // 800C4230
L_800C4234:;
  c->r[3]=R32(c->r[30]+0x00000004u); // 800C4234
  c->r[4]=c->r[1]+0x00000008u; // 800C4238
  {uint32_t ea=c->r[30]+0x00000028u; c->f[3]=c->ps1[3]=RF32(ea);} // 800C423C
  c->lr=0x800C4244u; f_800637D0(c); // 800C4240
  goto L_800C42B0; // 800C4244
L_800C4248:;
  {uint32_t ea=c->r[30]+0x00000020u; c->f[3]=c->ps1[3]=RF32(ea);} // 800C4248
  {uint32_t ea=c->r[2]+0xFFFFA2B0u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C424C
  {uint32_t ea=c->r[30]+0x00000024u; c->f[4]=c->ps1[4]=RF32(ea);} // 800C4250
  fcmp(c,0,c->f[3],c->f[0]); // 800C4254
  if (!crb(c,0)) { goto L_800C4264; } // 800C4258
  c->f[3]=c->f[0]; // 800C425C
  goto L_800C4270; // 800C4260
L_800C4264:;
  fcmp(c,0,c->f[3],c->f[4]); // 800C4264
  if (!crb(c,1)) { goto L_800C4270; } // 800C4268
  c->f[3]=c->f[4]; // 800C426C
L_800C4270:;
  {uint32_t ea=c->r[2]+0xFFFFA2B0u; c->f[1]=c->ps1[1]=RF32(ea);} // 800C4270
  c->r[4]=c->r[1]+0x00000008u; // 800C4274
  {uint32_t ea=c->r[2]+0xFFFFA2B4u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C4278
  c->f[4]=c->ps1[4]=S(c->f[4]-c->f[1]); // 800C427C
  c->r[3]=R32(c->r[30]+0x00000004u); // 800C4280
  c->f[1]=c->ps1[1]=S(c->f[3]-c->f[1]); // 800C4284
  {uint32_t ea=c->r[30]+0x00000028u; c->f[3]=c->ps1[3]=RF32(ea);} // 800C4288
  c->f[1]=c->ps1[1]=S(c->f[4]-c->f[1]); // 800C428C
  c->f[1]=c->ps1[1]=S(c->f[1]/c->f[4]); // 800C4290
  c->f[1]=c->ps1[1]=S(c->f[0]-c->f[1]); // 800C4294
  c->lr=0x800C429Cu; f_800639CC(c); // 800C4298
  goto L_800C42B0; // 800C429C
L_800C42A0:;
  c->r[3]=R32(c->r[30]+0x00000004u); // 800C42A0
  c->r[4]=c->r[1]+0x00000008u; // 800C42A4
  {uint32_t ea=c->r[30]+0x00000028u; c->f[3]=c->ps1[3]=RF32(ea);} // 800C42A8
  c->lr=0x800C42B0u; f_800634E8(c); // 800C42AC
L_800C42B0:;
  c->r[0]=R8(c->r[13]+0xFFFFBB9Bu); // 800C42B0
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800C42B4
  if (!crb(c,2)) { goto L_800C42F4; } // 800C42B8
  c->r[31]=0u+0x80730000u; // 800C42BC
  c->r[3]=c->r[31]+0x00006D10u; // 800C42C0
  c->lr=0x800C42C8u; f_802D8298(c); // 800C42C4
  c->r[3]=0u+0x806D0000u; // 800C42C8
  c->r[4]=0u+0x80050000u; // 800C42CC
  c->r[3]=c->r[3]+0xFFFFC220u; // 800C42D0
  c->r[5]=0u+0x80750000u; // 800C42D4
  W32(c->r[31]+0x00006D10u,c->r[3]); // 800C42D8
  c->r[3]=c->r[31]+0x00006D10u; // 800C42DC
  c->r[4]=c->r[4]+0xFFFF9D40u; // 800C42E0
  c->r[5]=c->r[5]+0x000037A0u; // 800C42E4
  c->lr=0x800C42ECu; f_803A92B8(c); // 800C42E8
  c->r[0]=0u+0x00000001u; // 800C42EC
  W8(c->r[13]+0xFFFFBB9Bu,c->r[0]); // 800C42F0
L_800C42F4:;
  c->r[3]=0u+0x80730000u; // 800C42F4
  {uint32_t ea=c->r[30]+0x00000020u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C42F8
  c->r[3]=c->r[3]+0x00006D10u; // 800C42FC
  {uint32_t ea=c->r[3]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 800C4300
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[1]); // 800C4304
  {uint32_t ea=c->r[30]+0x00000020u; WF32(ea,c->f[0]);} // 800C4308
L_800C430C:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 800C430C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800C4310
  c->r[30]=R32(c->r[1]+0x00000018u); // 800C4314
  c->lr=c->r[0]; // 800C4318
  c->r[1]=c->r[1]+0x00000020u; // 800C431C
  return; // 800C4320
}

// fn_800C4324
void f_800C4324(Ctx* __restrict c) {
  trace_call(0x800C4324u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C4324
  c->r[0]=c->lr; // 800C4328
  {uint32_t ea=c->r[2]+0xFFFFA2B0u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C432C
  W32(c->r[1]+0x00000034u,c->r[0]); // 800C4330
  c->r[0]=0u+0x00000001u; // 800C4334
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[31]);} // 800C4338
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,31,ea,0,0);} // 800C433C
  c->f[31]=c->f[2]; // 800C4340
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[30]);} // 800C4344
  {uint32_t ea=c->r[1]+0x00000018u; psq_store(c,30,ea,0,0);} // 800C4348
  c->f[30]=c->f[1]; // 800C434C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800C4350
  c->r[31]=c->r[3]|c->r[3]; // 800C4354
  W32(c->r[3]+0x0000002Cu,c->r[4]); // 800C4358
  c->r[4]=c->r[5]|c->r[5]; // 800C435C
  W8(c->r[3]+0x00000030u,c->r[0]); // 800C4360
  {uint32_t ea=c->r[3]+0x00000018u; WF32(ea,c->f[0]);} // 800C4364
  {uint32_t ea=c->r[3]+0x00000020u; WF32(ea,c->f[0]);} // 800C4368
  {uint32_t ea=c->r[3]+0x00000024u; WF32(ea,c->f[1]);} // 800C436C
  {uint32_t ea=c->r[3]+0x00000028u; WF32(ea,c->f[0]);} // 800C4370
  c->lr=0x800C4378u; f_800C4400(c); // 800C4374
  {uint32_t ea=c->r[31]+0x00000014u; WF32(ea,c->f[30]);} // 800C4378
  {uint32_t ea=c->r[31]+0x0000001Cu; WF32(ea,c->f[31]);} // 800C437C
  {uint32_t ea=c->r[1]+0x00000028u; psq_load(c,31,ea,0,0);} // 800C4380
  {uint32_t ea=c->r[1]+0x00000020u; c->f[31]=RF64(ea);} // 800C4384
  {uint32_t ea=c->r[1]+0x00000018u; psq_load(c,30,ea,0,0);} // 800C4388
  {uint32_t ea=c->r[1]+0x00000010u; c->f[30]=RF64(ea);} // 800C438C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800C4390
  c->r[0]=R32(c->r[1]+0x00000034u); // 800C4394
  c->lr=c->r[0]; // 800C4398
  c->r[1]=c->r[1]+0x00000030u; // 800C439C
  return; // 800C43A0
}

// fn_800C43A4
void f_800C43A4(Ctx* __restrict c) {
  trace_call(0x800C43A4u);
  {uint32_t ea=c->r[2]+0xFFFFA2B8u; c->f[1]=c->ps1[1]=RF32(ea);} // 800C43A4
  c->r[4]=0u+0x00000000u; // 800C43A8
  {uint32_t ea=c->r[2]+0xFFFFA2B4u; c->f[2]=c->ps1[2]=RF32(ea);} // 800C43AC
  c->r[5]=0u+0x00000000u; // 800C43B0
  f_800C4324(c); return; // 800C43B4
}

// fn_800C43B8
void f_800C43B8(Ctx* __restrict c) {
  trace_call(0x800C43B8u);
  c->r[5]=c->r[4]|c->r[4]; // 800C43B8
  c->r[4]=0u+0x00000000u; // 800C43BC
  f_800C4324(c); return; // 800C43C0
}

// fn_800C43C4
void f_800C43C4(Ctx* __restrict c) {
  trace_call(0x800C43C4u);
  c->r[5]=c->r[4]|c->r[4]; // 800C43C4
  c->r[4]=0u+0x00000000u; // 800C43C8
  f_800C4324(c); return; // 800C43CC
}

// fn_800C43D0
void f_800C43D0(Ctx* __restrict c) {
  trace_call(0x800C43D0u);
  c->r[5]=c->r[4]|c->r[4]; // 800C43D0
  c->r[4]=0u+0x00000001u; // 800C43D4
  f_800C4324(c); return; // 800C43D8
}

// fn_800C43DC
void f_800C43DC(Ctx* __restrict c) {
  trace_call(0x800C43DCu);
  c->r[5]=c->r[4]|c->r[4]; // 800C43DC
  c->r[4]=0u+0x00000002u; // 800C43E0
  f_800C4324(c); return; // 800C43E4
}

// fn_800C43E8
void f_800C43E8(Ctx* __restrict c) {
  trace_call(0x800C43E8u);
  {uint32_t ea=c->r[2]+0xFFFFA2B0u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C43E8
  c->r[0]=0u+0x00000000u; // 800C43EC
  W8(c->r[3]+0x00000030u,c->r[0]); // 800C43F0
  W8(c->r[3]+0x00000031u,c->r[0]); // 800C43F4
  {uint32_t ea=c->r[3]+0x00000028u; WF32(ea,c->f[0]);} // 800C43F8
  return; // 800C43FC
}

// fn_800C4400
void f_800C4400(Ctx* __restrict c) {
  trace_call(0x800C4400u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C4400
  c->r[0]=c->lr; // 800C4404
  cmps(c,0,(int32_t)c->r[4],0); // 800C4408
  W32(c->r[1]+0x00000014u,c->r[0]); // 800C440C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800C4410
  c->r[31]=c->r[3]|c->r[3]; // 800C4414
  if (!crb(c,2)) { goto L_800C4428; } // 800C4418
  c->r[0]=0u+0x00000000u; // 800C441C
  W8(c->r[3]+0x00000031u,c->r[0]); // 800C4420
  goto L_800C4438; // 800C4424
L_800C4428:;
  c->r[3]=c->r[3]+0x00000008u; // 800C4428
  c->lr=0x800C4430u; f_8005DC84(c); // 800C442C
  c->r[0]=0u+0x00000001u; // 800C4430
  W8(c->r[31]+0x00000031u,c->r[0]); // 800C4434
L_800C4438:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800C4438
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800C443C
  c->lr=c->r[0]; // 800C4440
  c->r[1]=c->r[1]+0x00000010u; // 800C4444
  return; // 800C4448
}

// fn_800C444C
void f_800C444C(Ctx* __restrict c) {
  trace_call(0x800C444Cu);
  {uint32_t ea=c->r[3]+0x00000014u; WF32(ea,c->f[1]);} // 800C444C
  return; // 800C4450
}

// fn_800C4454
void f_800C4454(Ctx* __restrict c) {
  trace_call(0x800C4454u);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C4454
  c->r[0]=c->lr; // 800C4458
  c->r[5]=c->r[3]|c->r[3]; // 800C445C
  W32(c->r[1]+0x00000054u,c->r[0]); // 800C4460
  W32(c->r[1]+0x0000004Cu,c->r[31]); // 800C4464
  c->r[31]=c->r[4]|c->r[4]; // 800C4468
  c->r[0]=R8(c->r[3]+0x00000031u); // 800C446C
  cmps(c,0,(int32_t)c->r[0],0); // 800C4470
  if (crb(c,2)) { goto L_800C4488; } // 800C4474
  c->r[3]=c->r[31]|c->r[31]; // 800C4478
  c->r[4]=c->r[5]+0x00000008u; // 800C447C
  c->lr=0x800C4484u; f_8005DC84(c); // 800C4480
  goto L_800C44C4; // 800C4484
L_800C4488:;
  c->r[3]=R32(c->r[3]+0x00000004u); // 800C4488
  c->r[4]=c->r[1]+0x00000018u; // 800C448C
  c->r[12]=R32(c->r[3]+0x0000001Cu); // 800C4490
  c->r[12]=R32(c->r[12]+0x00000148u); // 800C4494
  c->ctr=c->r[12]; // 800C4498
  if (true) { c->lr=0x800C44A0u; dispatch(c,c->ctr); } // 800C449C
  {uint32_t ea=c->r[3]+0x0000002Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 800C44A0
  c->r[4]=c->r[1]+0x00000008u; // 800C44A4
  {uint32_t ea=c->r[3]+0x0000001Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800C44A8
  {uint32_t ea=c->r[3]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800C44AC
  c->r[3]=c->r[31]|c->r[31]; // 800C44B0
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[0]);} // 800C44B4
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[1]);} // 800C44B8
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[2]);} // 800C44BC
  c->lr=0x800C44C4u; f_8005DC84(c); // 800C44C0
L_800C44C4:;
  c->r[0]=R32(c->r[1]+0x00000054u); // 800C44C4
  c->r[31]=R32(c->r[1]+0x0000004Cu); // 800C44C8
  c->lr=c->r[0]; // 800C44CC
  c->r[1]=c->r[1]+0x00000050u; // 800C44D0
  return; // 800C44D4
}

// fn_800C44D8
void f_800C44D8(Ctx* __restrict c) {
  trace_call(0x800C44D8u);
  c->r[0]=0u+0xFFFFFFFFu; // 800C44D8
  c->r[4]=0u+0x00000000u; // 800C44DC
  W32(c->r[3]+0x00000018u,c->r[4]); // 800C44E0
  W32(c->r[3]+0x0000001Cu,c->r[0]); // 800C44E4
  W32(c->r[3]+0x00000020u,c->r[0]); // 800C44E8
  return; // 800C44EC
}

// fn_800C44F0
void f_800C44F0(Ctx* __restrict c) {
  trace_call(0x800C44F0u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C44F0
  c->r[0]=c->lr; // 800C44F4
  W32(c->r[1]+0x00000034u,c->r[0]); // 800C44F8
  {uint32_t ea=c->r[1]+0x00000010u; for(int i=24;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800C44FC
  c->r[26]=c->r[3]|c->r[3]; // 800C4500
  c->r[4]=R32(c->r[3]+0x00000018u); // 800C4504
  cmps(c,0,(int32_t)c->r[4],0); // 800C4508
  if (crb(c,2)) { goto L_800C4780; } // 800C450C
  c->r[0]=R8(c->r[4]+0x00000024u); // 800C4510
  cmps(c,0,(int32_t)c->r[0],0); // 800C4514
  if (!crb(c,2)) { goto L_800C4780; } // 800C4518
  c->r[0]=R32(c->r[3]+0x00000020u); // 800C451C
  cmps(c,0,(int32_t)c->r[0],0); // 800C4520
  if (crb(c,0)) { goto L_800C476C; } // 800C4524
  c->r[0]=R8(c->r[13]+0xFFFFBBF0u); // 800C4528
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800C452C
  if (!crb(c,2)) { goto L_800C4574; } // 800C4530
  c->r[24]=0u+0x80740000u; // 800C4534
  c->r[3]=c->r[24]+0xFFFFFF5Cu; // 800C4538
  c->lr=0x800C4540u; f_800A1FCC(c); // 800C453C
  c->r[6]=0u+0x806D0000u; // 800C4540
  c->r[4]=0u+0x80050000u; // 800C4544
  c->r[6]=c->r[6]+0xFFFFCD54u; // 800C4548
  c->r[3]=c->r[24]+0xFFFFFF5Cu; // 800C454C
  c->r[0]=c->r[6]+0x00000028u; // 800C4550
  c->r[5]=0u+0x80750000u; // 800C4554
  W32(c->r[3]+0x000000A4u,c->r[6]); // 800C4558
  c->r[4]=c->r[4]+0x000009E8u; // 800C455C
  c->r[5]=c->r[5]+0x000037BCu; // 800C4560
  W32(c->r[3]+0x000000A8u,c->r[0]); // 800C4564
  c->lr=0x800C456Cu; f_803A92B8(c); // 800C4568
  c->r[0]=0u+0x00000001u; // 800C456C
  W8(c->r[13]+0xFFFFBBF0u,c->r[0]); // 800C4570
L_800C4574:;
  c->r[31]=0u+0x80740000u; // 800C4574
  c->r[0]=0u+0x00000004u; // 800C4578
  c->r[31]=c->r[31]+0xFFFFFF5Cu; // 800C457C
  c->r[30]=R32(c->r[26]+0x00000020u); // 800C4580
  c->r[5]=R32(c->r[26]+0x0000001Cu); // 800C4584
  c->r[6]=0u+0x00000000u; // 800C4588
  c->r[3]=0u+0x00000000u; // 800C458C
  c->ctr=c->r[0]; // 800C4590
L_800C4594:;
  c->r[4]=c->r[31]+c->r[3]; // 800C4594
  c->r[0]=R32(c->r[4]+0x00000958u); // 800C4598
  cmps(c,0,(int32_t)c->r[5],(int32_t)c->r[0]); // 800C459C
  if (crb(c,2)) { goto L_800C45B0; } // 800C45A0
  c->r[6]=c->r[6]+0x00000001u; // 800C45A4
  c->r[3]=c->r[3]+0x000008B0u; // 800C45A8
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800C4594; } // 800C45AC
L_800C45B0:;
  cmps(c,0,(int32_t)c->r[6],4); // 800C45B0
  c->r[0]=0u+0xFFFFFFFFu; // 800C45B4
  if (!crb(c,0)) { goto L_800C45C0; } // 800C45B8
  c->r[0]=c->r[6]|c->r[6]; // 800C45BC
L_800C45C0:;
  cmps(c,0,(int32_t)c->r[0],0); // 800C45C0
  if (crb(c,0)) { goto L_800C476C; } // 800C45C4
  c->r[28]=(uint32_t)((int32_t)c->r[0]*(int32_t)2224); // 800C45C8
  c->r[4]=c->r[30]|c->r[30]; // 800C45CC
  c->r[3]=c->r[31]+c->r[28]; // 800C45D0
  c->r[3]=c->r[3]+0x00000130u; // 800C45D4
  c->lr=0x800C45DCu; f_800A1D5C(c); // 800C45D8
  cmps(c,0,(int32_t)c->r[3],0); // 800C45DC
  c->r[29]=c->r[3]|c->r[3]; // 800C45E0
  if (crb(c,2)) { goto L_800C476C; } // 800C45E4
  cmpu(c,0,c->r[30],0x000003FFu); // 800C45E8
  c->r[4]=c->r[30]|c->r[30]; // 800C45EC
  if (!crb(c,1)) { goto L_800C45F8; } // 800C45F0
  c->r[4]=0u+0x00000000u; // 800C45F4
L_800C45F8:;
  c->r[3]=c->r[31]+c->r[28]; // 800C45F8
  c->r[0]=sraw(c,c->r[4],3); // 800C45FC
  c->r[27]=c->r[3]+0x000000B0u; // 800C4600
  c->r[24]=0u+0x00000001u; // 800C4604
  c->r[3]=rotl(c->r[4],0)&0x00000007u; // 800C4608
  c->r[0]=R8(c->r[27]+c->r[0]); // 800C460C
  c->r[3]=((c->r[3])&0x20)?0u:(c->r[24]<<((c->r[3])&31)); // 800C4610
  c->r[0]=c->r[3]&c->r[0]; cr0(c,c->r[0]); // 800C4614
  if (!crb(c,2)) { goto L_800C4680; } // 800C4618
  c->r[0]=R8(c->r[13]+0xFFFFBB87u); // 800C461C
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800C4620
  if (!crb(c,2)) { goto L_800C4664; } // 800C4624
  c->r[25]=0u+0x80730000u; // 800C4628
  c->r[3]=c->r[25]+0x00006160u; // 800C462C
  c->lr=0x800C4634u; f_8008C1BC(c); // 800C4630
  c->r[6]=0u+0x806D0000u; // 800C4634
  c->r[4]=0u+0x80050000u; // 800C4638
  c->r[6]=c->r[6]+0xFFFFC37Cu; // 800C463C
  c->r[3]=c->r[25]+0x00006160u; // 800C4640
  c->r[0]=c->r[6]+0x00000028u; // 800C4644
  c->r[5]=0u+0x80750000u; // 800C4648
  W32(c->r[3]+0x000000A4u,c->r[6]); // 800C464C
  c->r[4]=c->r[4]+0xFFFF9F5Cu; // 800C4650
  c->r[5]=c->r[5]+0x000037B0u; // 800C4654
  W32(c->r[3]+0x000000A8u,c->r[0]); // 800C4658
  c->lr=0x800C4660u; f_803A92B8(c); // 800C465C
  W8(c->r[13]+0xFFFFBB87u,c->r[24]); // 800C4660
L_800C4664:;
  c->r[3]=0u+0x80730000u; // 800C4664
  c->r[4]=c->r[29]|c->r[29]; // 800C4668
  c->r[3]=c->r[3]+0x00006160u; // 800C466C
  c->lr=0x800C4674u; f_8008CD98(c); // 800C4670
  c->r[3]=c->r[31]+c->r[28]; // 800C4674
  c->r[0]=0u+0x00000002u; // 800C4678
  W32(c->r[3]+0x00000950u,c->r[0]); // 800C467C
L_800C4680:;
  cmpu(c,0,c->r[30],0x000003FFu); // 800C4680
  if (!crb(c,1)) { goto L_800C468C; } // 800C4684
  c->r[30]=0u+0x00000000u; // 800C4688
L_800C468C:;
  c->r[5]=sraw(c,c->r[30],3); // 800C468C
  c->r[0]=rotl(c->r[30],0)&0x00000007u; // 800C4690
  c->r[3]=0u+0x00000001u; // 800C4694
  c->r[4]=R8(c->r[27]+c->r[5]); // 800C4698
  c->r[0]=((c->r[0])&0x20)?0u:(c->r[3]<<((c->r[0])&31)); // 800C469C
  c->r[0]=rotl(c->r[0],0)&0x000000FFu; // 800C46A0
  c->r[0]=c->r[4]|c->r[0]; // 800C46A4
  W8(c->r[27]+c->r[5],c->r[0]); // 800C46A8
  c->r[0]=R8(c->r[29]+0x00000000u); // 800C46AC
  cmps(c,0,(int32_t)c->r[0],71); // 800C46B0
  if (!crb(c,2)) { goto L_800C46DC; } // 800C46B4
  c->r[0]=R8(c->r[29]+0x00000001u); // 800C46B8
  cmps(c,0,(int32_t)c->r[0],95); // 800C46BC
  if (!crb(c,2)) { goto L_800C46DC; } // 800C46C0
  c->r[3]=c->r[29]+0x00000002u; // 800C46C4
  c->lr=0x800C46CCu; f_803B613C(c); // 800C46C8
  cmpu(c,0,c->r[3],0x000003FFu); // 800C46CC
  if (!crb(c,1)) { goto L_800C46E0; } // 800C46D0
  c->r[3]=0u+0xFFFFFFFFu; // 800C46D4
  goto L_800C46E0; // 800C46D8
L_800C46DC:;
  c->r[3]=0u+0xFFFFFFFFu; // 800C46DC
L_800C46E0:;
  cmpu(c,0,c->r[3],0x000003FFu); // 800C46E0
  if (crb(c,1)) { goto L_800C470C; } // 800C46E4
  c->r[4]=sraw(c,c->r[3],3); // 800C46E8
  c->r[0]=rotl(c->r[3],0)&0x00000007u; // 800C46EC
  c->r[3]=0u+0x00000001u; // 800C46F0
  c->r[0]=((c->r[0])&0x20)?0u:(c->r[3]<<((c->r[0])&31)); // 800C46F4
  c->r[4]=c->r[31]+c->r[4]; // 800C46F8
  c->r[3]=R8(c->r[4]+0x0000236Cu); // 800C46FC
  c->r[0]=rotl(c->r[0],0)&0x000000FFu; // 800C4700
  c->r[0]=c->r[3]|c->r[0]; // 800C4704
  W8(c->r[4]+0x0000236Cu,c->r[0]); // 800C4708
L_800C470C:;
  c->r[0]=R8(c->r[29]+0x00000000u); // 800C470C
  cmps(c,0,(int32_t)c->r[0],67); // 800C4710
  if (!crb(c,2)) { goto L_800C473C; } // 800C4714
  c->r[0]=R8(c->r[29]+0x00000001u); // 800C4718
  cmps(c,0,(int32_t)c->r[0],95); // 800C471C
  if (!crb(c,2)) { goto L_800C473C; } // 800C4720
  c->r[3]=c->r[29]+0x00000002u; // 800C4724
  c->lr=0x800C472Cu; f_803B613C(c); // 800C4728
  cmpu(c,0,c->r[3],0x0000003Fu); // 800C472C
  if (!crb(c,1)) { goto L_800C4740; } // 800C4730
  c->r[3]=0u+0xFFFFFFFFu; // 800C4734
  goto L_800C4740; // 800C4738
L_800C473C:;
  c->r[3]=0u+0xFFFFFFFFu; // 800C473C
L_800C4740:;
  cmpu(c,0,c->r[3],0x0000003Fu); // 800C4740
  if (crb(c,1)) { goto L_800C476C; } // 800C4744
  c->r[4]=sraw(c,c->r[3],3); // 800C4748
  c->r[0]=rotl(c->r[3],0)&0x00000007u; // 800C474C
  c->r[3]=0u+0x00000001u; // 800C4750
  c->r[0]=((c->r[0])&0x20)?0u:(c->r[3]<<((c->r[0])&31)); // 800C4754
  c->r[4]=c->r[31]+c->r[4]; // 800C4758
  c->r[3]=R8(c->r[4]+0x000023ECu); // 800C475C
  c->r[0]=rotl(c->r[0],0)&0x000000FFu; // 800C4760
  c->r[0]=c->r[3]|c->r[0]; // 800C4764
  W8(c->r[4]+0x000023ECu,c->r[0]); // 800C4768
L_800C476C:;
  c->r[12]=R32(c->r[26]+0x00000010u); // 800C476C
  c->r[3]=c->r[26]|c->r[26]; // 800C4770
  c->r[12]=R32(c->r[12]+0x00000008u); // 800C4774
  c->ctr=c->r[12]; // 800C4778
  if (true) { c->lr=0x800C4780u; dispatch(c,c->ctr); } // 800C477C
L_800C4780:;
  {uint32_t ea=c->r[1]+0x00000010u; for(int i=24;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800C4780
  c->r[0]=R32(c->r[1]+0x00000034u); // 800C4784
  c->lr=c->r[0]; // 800C4788
  c->r[1]=c->r[1]+0x00000030u; // 800C478C
  return; // 800C4790
}

// fn_800C4794
void f_800C4794(Ctx* __restrict c) {
  trace_call(0x800C4794u);
  c->r[3]=0u+0x0000000Cu; // 800C4794
  return; // 800C4798
}

// fn_800C479C
void f_800C479C(Ctx* __restrict c) {
  trace_call(0x800C479Cu);
  c->r[3]=0u+0x800C0000u; // 800C479C
  c->r[3]=c->r[3]+0x000047A8u; // 800C47A0
  return; // 800C47A4
}

// fn_800C47A8
void f_800C47A8(Ctx* __restrict c) {
  trace_call(0x800C47A8u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C47A8
  c->r[0]=c->lr; // 800C47AC
  W32(c->r[1]+0x00000044u,c->r[0]); // 800C47B0
  c->r[11]=c->r[1]+0x00000040u; // 800C47B4
  c->lr=0x800C47BCu; { W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800C47B8
  c->r[3]=R32(c->r[4]+0x00000000u); // 800C47BC
  c->r[31]=c->r[5]|c->r[5]; // 800C47C0
  c->r[0]=c->r[3]+0xB9BF0000u; // 800C47C4
  cmpu(c,0,c->r[0],0x00004400u); // 800C47C8
  if (crb(c,2)) { goto L_800C47D8; } // 800C47CC
  c->r[3]=0u+0x00000001u; // 800C47D0
  goto L_800C499C; // 800C47D4
L_800C47D8:;
  c->r[0]=R32(c->r[4]+0x00000004u); // 800C47D8
  cmps(c,0,(int32_t)c->r[0],0); // 800C47DC
  if (crb(c,2)) { goto L_800C47EC; } // 800C47E0
  c->r[3]=0u+0x00000001u; // 800C47E4
  goto L_800C499C; // 800C47E8
L_800C47EC:;
  c->r[0]=R32(c->r[4]+0x00000008u); // 800C47EC
  c->r[28]=c->r[4]+c->r[0]; // 800C47F0
  c->r[0]=R8(c->r[28]+0x00000009u); // 800C47F4
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800C47F8
  if (crb(c,2)) { goto L_800C480C; } // 800C47FC
  cmps(c,0,(int32_t)c->r[0],1); // 800C4800
  if (crb(c,2)) { goto L_800C4830; } // 800C4804
  goto L_800C4854; // 800C4808
L_800C480C:;
  c->r[0]=0u+0x00000000u; // 800C480C
  W8(c->r[1]+0x0000002Cu,c->r[0]); // 800C4810
  c->r[29]=c->r[1]+0x0000002Cu; // 800C4814
  c->lr=0x800C481Cu; f_80323304(c); // 800C4818
  c->r[30]=c->r[3]+0x000006B4u; // 800C481C
  c->r[3]=c->r[29]|c->r[29]; // 800C4820
  c->lr=0x800C4828u; f_8004ECA8(c); // 800C4824
  W32(c->r[3]+0x00000018u,c->r[30]); // 800C4828
  goto L_800C4868; // 800C482C
L_800C4830:;
  c->r[0]=0u+0x00000000u; // 800C4830
  W8(c->r[1]+0x00000028u,c->r[0]); // 800C4834
  c->r[29]=c->r[1]+0x00000028u; // 800C4838
  c->lr=0x800C4840u; f_80323304(c); // 800C483C
  c->r[30]=c->r[3]+0x00000628u; // 800C4840
  c->r[3]=c->r[29]|c->r[29]; // 800C4844
  c->lr=0x800C484Cu; f_8004ECA8(c); // 800C4848
  W32(c->r[3]+0x00000018u,c->r[30]); // 800C484C
  goto L_800C4868; // 800C4850
L_800C4854:;
  c->r[30]=0u+0x00000000u; // 800C4854
  W8(c->r[1]+0x00000024u,c->r[30]); // 800C4858
  c->r[3]=c->r[1]+0x00000024u; // 800C485C
  c->lr=0x800C4864u; f_8004ECA8(c); // 800C4860
  W32(c->r[3]+0x00000018u,c->r[30]); // 800C4864
L_800C4868:;
  c->r[30]=0u+0x00000000u; // 800C4868
  W8(c->r[1]+0x00000020u,c->r[30]); // 800C486C
  c->r[3]=c->r[1]+0x00000020u; // 800C4870
  c->lr=0x800C4878u; f_8004ECA8(c); // 800C4874
  c->r[0]=R32(c->r[3]+0x00000018u); // 800C4878
  cmps(c,0,(int32_t)c->r[0],0); // 800C487C
  if (!crb(c,2)) { goto L_800C488C; } // 800C4880
  c->r[3]=0u+0x00000001u; // 800C4884
  goto L_800C499C; // 800C4888
L_800C488C:;
  c->r[0]=R8(c->r[28]+0x00000008u); // 800C488C
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800C4890
  if (crb(c,2)) { goto L_800C48B4; } // 800C4894
  cmps(c,0,(int32_t)c->r[0],1); // 800C4898
  if (crb(c,2)) { goto L_800C48E4; } // 800C489C
  cmps(c,0,(int32_t)c->r[0],2); // 800C48A0
  if (crb(c,2)) { goto L_800C4914; } // 800C48A4
  cmps(c,0,(int32_t)c->r[0],3); // 800C48A8
  if (crb(c,2)) { goto L_800C4944; } // 800C48AC
  goto L_800C4970; // 800C48B0
L_800C48B4:;
  W8(c->r[1]+0x0000001Cu,c->r[30]); // 800C48B4
  c->r[3]=c->r[1]+0x0000001Cu; // 800C48B8
  c->lr=0x800C48C0u; f_8004ECA8(c); // 800C48BC
  {uint32_t ea=c->r[2]+0xFFFFA2C0u; c->f[1]=c->ps1[1]=RF32(ea);} // 800C48C0
  c->r[4]=0u+0x00000001u; // 800C48C4
  c->r[3]=R32(c->r[3]+0x00000018u); // 800C48C8
  c->r[5]=0u+0x00000001u; // 800C48CC
  c->f[2]=c->f[1]; // 800C48D0
  {uint32_t ea=c->r[28]+0x00000000u; c->f[4]=c->ps1[4]=RF32(ea);} // 800C48D4
  c->f[3]=c->f[1]; // 800C48D8
  c->lr=0x800C48E0u; f_802A0888(c); // 800C48DC
  goto L_800C4970; // 800C48E0
L_800C48E4:;
  W8(c->r[1]+0x00000018u,c->r[30]); // 800C48E4
  c->r[3]=c->r[1]+0x00000018u; // 800C48E8
  c->lr=0x800C48F0u; f_8004ECA8(c); // 800C48EC
  {uint32_t ea=c->r[2]+0xFFFFA2C0u; c->f[1]=c->ps1[1]=RF32(ea);} // 800C48F0
  c->r[4]=0u+0x00000000u; // 800C48F4
  c->r[3]=R32(c->r[3]+0x00000018u); // 800C48F8
  c->r[5]=0u+0x00000001u; // 800C48FC
  c->f[2]=c->f[1]; // 800C4900
  {uint32_t ea=c->r[28]+0x00000000u; c->f[4]=c->ps1[4]=RF32(ea);} // 800C4904
  c->f[3]=c->f[1]; // 800C4908
  c->lr=0x800C4910u; f_802A0888(c); // 800C490C
  goto L_800C4970; // 800C4910
L_800C4914:;
  W8(c->r[1]+0x00000014u,c->r[30]); // 800C4914
  c->r[3]=c->r[1]+0x00000014u; // 800C4918
  c->lr=0x800C4920u; f_8004ECA8(c); // 800C491C
  {uint32_t ea=c->r[2]+0xFFFFA2C4u; c->f[1]=c->ps1[1]=RF32(ea);} // 800C4920
  c->r[4]=0u+0x00000001u; // 800C4924
  c->r[3]=R32(c->r[3]+0x00000018u); // 800C4928
  c->r[5]=0u+0x00000001u; // 800C492C
  c->f[2]=c->f[1]; // 800C4930
  {uint32_t ea=c->r[28]+0x00000000u; c->f[4]=c->ps1[4]=RF32(ea);} // 800C4934
  c->f[3]=c->f[1]; // 800C4938
  c->lr=0x800C4940u; f_802A0888(c); // 800C493C
  goto L_800C4970; // 800C4940
L_800C4944:;
  W8(c->r[1]+0x00000010u,c->r[30]); // 800C4944
  c->r[3]=c->r[1]+0x00000010u; // 800C4948
  c->lr=0x800C4950u; f_8004ECA8(c); // 800C494C
  {uint32_t ea=c->r[2]+0xFFFFA2C4u; c->f[1]=c->ps1[1]=RF32(ea);} // 800C4950
  c->r[4]=0u+0x00000000u; // 800C4954
  c->r[3]=R32(c->r[3]+0x00000018u); // 800C4958
  c->r[5]=0u+0x00000001u; // 800C495C
  c->f[2]=c->f[1]; // 800C4960
  {uint32_t ea=c->r[28]+0x00000000u; c->f[4]=c->ps1[4]=RF32(ea);} // 800C4964
  c->f[3]=c->f[1]; // 800C4968
  c->lr=0x800C4970u; f_802A0888(c); // 800C496C
L_800C4970:;
  c->r[30]=0u+0x00000000u; // 800C4970
  W8(c->r[1]+0x0000000Cu,c->r[30]); // 800C4974
  c->r[3]=c->r[1]+0x0000000Cu; // 800C4978
  c->lr=0x800C4980u; f_8004ECA8(c); // 800C497C
  W32(c->r[3]+0x0000001Cu,c->r[31]); // 800C4980
  c->r[3]=c->r[1]+0x00000008u; // 800C4984
  W8(c->r[1]+0x00000008u,c->r[30]); // 800C4988
  c->r[31]=R32(c->r[28]+0x00000004u); // 800C498C
  c->lr=0x800C4994u; f_8004ECA8(c); // 800C4990
  W32(c->r[3]+0x00000020u,c->r[31]); // 800C4994
  c->r[3]=0u+0x00000001u; // 800C4998
L_800C499C:;
  c->r[11]=c->r[1]+0x00000040u; // 800C499C
  c->lr=0x800C49A4u; { c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800C49A0
  c->r[0]=R32(c->r[1]+0x00000044u); // 800C49A4
  c->lr=c->r[0]; // 800C49A8
  c->r[1]=c->r[1]+0x00000040u; // 800C49AC
  return; // 800C49B0
}

// fn_800C49B4
void f_800C49B4(Ctx* __restrict c) {
  trace_call(0x800C49B4u);
  c->r[0]=0u+0x00000002u; // 800C49B4
  {uint32_t ea=c->r[2]+0xFFFFA2C8u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C49B8
  c->r[4]=0u+0x00000000u; // 800C49BC
  c->ctr=c->r[0]; // 800C49C0
L_800C49C4:;
  c->r[5]=c->r[3]+c->r[4]; // 800C49C4
  c->r[4]=c->r[4]+0x00000004u; // 800C49C8
  {uint32_t ea=c->r[5]+0x00000018u; WF32(ea,c->f[0]);} // 800C49CC
  {uint32_t ea=c->r[5]+0x00000020u; WF32(ea,c->f[0]);} // 800C49D0
  {uint32_t ea=c->r[5]+0x00000028u; WF32(ea,c->f[0]);} // 800C49D4
  {uint32_t ea=c->r[5]+0x00000030u; WF32(ea,c->f[0]);} // 800C49D8
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800C49C4; } // 800C49DC
  return; // 800C49E0
}

// fn_800C49E4
void f_800C49E4(Ctx* __restrict c) {
  trace_call(0x800C49E4u);
  {uint32_t ea=c->r[1]+0xFFFFFF90u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C49E4
  c->r[0]=c->lr; // 800C49E8
  W32(c->r[1]+0x00000074u,c->r[0]); // 800C49EC
  c->r[11]=c->r[1]+0x00000040u; // 800C49F0
  {uint32_t ea=c->r[1]+0x00000060u; WF64(ea,c->f[31]);} // 800C49F4
  {uint32_t ea=c->r[1]+0x00000068u; psq_store(c,31,ea,0,0);} // 800C49F8
  {uint32_t ea=c->r[1]+0x00000050u; WF64(ea,c->f[30]);} // 800C49FC
  {uint32_t ea=c->r[1]+0x00000058u; psq_store(c,30,ea,0,0);} // 800C4A00
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[29]);} // 800C4A04
  {uint32_t ea=c->r[1]+0x00000048u; psq_store(c,29,ea,0,0);} // 800C4A08
  c->lr=0x800C4A10u; { W32(c->r[11]+0xFFFFFFD0u,c->r[20]); W32(c->r[11]+0xFFFFFFD4u,c->r[21]); W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800C4A0C
  c->r[22]=0u+0x80730000u; // 800C4A10
  c->r[23]=0u+0x806D0000u; // 800C4A14
  {uint32_t ea=c->r[2]+0xFFFFA2C8u; c->f[31]=c->ps1[31]=RF32(ea);} // 800C4A18
  c->r[20]=c->r[3]|c->r[3]; // 800C4A1C
  {uint32_t ea=c->r[2]+0xFFFFA2CCu; c->f[30]=c->ps1[30]=RF32(ea);} // 800C4A20
  c->r[23]=c->r[23]+0xFFFFC220u; // 800C4A24
  c->r[27]=c->r[22]+0x00006D10u; // 800C4A28
  c->r[21]=0u+0x00000000u; // 800C4A2C
  c->r[31]=0u+0x00000000u; // 800C4A30
  c->r[24]=0u+0x80050000u; // 800C4A34
  c->r[25]=0u+0x80750000u; // 800C4A38
  c->r[26]=0u+0x00000001u; // 800C4A3C
L_800C4A40:;
  c->r[28]=c->r[20]+c->r[31]; // 800C4A40
  {uint32_t ea=c->r[28]+0x00000028u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C4A44
  fcmp(c,0,c->f[0],c->f[31]); // 800C4A48
  if (!crb(c,1)) { goto L_800C4B44; } // 800C4A4C
  c->r[0]=R8(c->r[13]+0xFFFFBB9Bu); // 800C4A50
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800C4A54
  if (!crb(c,2)) { goto L_800C4A7C; } // 800C4A58
  c->r[3]=c->r[22]+0x00006D10u; // 800C4A5C
  c->lr=0x800C4A64u; f_802D8298(c); // 800C4A60
  W32(c->r[22]+0x00006D10u,c->r[23]); // 800C4A64
  c->r[3]=c->r[22]+0x00006D10u; // 800C4A68
  c->r[4]=c->r[24]+0xFFFF9D40u; // 800C4A6C
  c->r[5]=c->r[25]+0x000037C8u; // 800C4A70
  c->lr=0x800C4A78u; f_803A92B8(c); // 800C4A74
  W8(c->r[13]+0xFFFFBB9Bu,c->r[26]); // 800C4A78
L_800C4A7C:;
  {uint32_t ea=c->r[27]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 800C4A7C
  {uint32_t ea=c->r[28]+0x00000030u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C4A80
  c->f[1]=c->ps1[1]=S(c->f[0]+c->f[1]); // 800C4A84
  {uint32_t ea=c->r[28]+0x00000030u; WF32(ea,c->f[1]);} // 800C4A88
  {uint32_t ea=c->r[28]+0x00000028u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C4A8C
  c->f[29]=c->ps1[29]=S(c->f[1]/c->f[0]); // 800C4A90
  fcmp(c,0,c->f[29],c->f[30]); // 800C4A94
  if (!crb(c,1)) { goto L_800C4AA4; } // 800C4A98
  c->f[29]=c->f[30]; // 800C4A9C
  {uint32_t ea=c->r[28]+0x00000028u; WF32(ea,c->f[31]);} // 800C4AA0
L_800C4AA4:;
  {uint32_t ea=c->r[28]+0x00000020u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C4AA4
  cmps(c,0,(int32_t)c->r[21],0); // 800C4AA8
  {uint32_t ea=c->r[28]+0x00000018u; c->f[1]=c->ps1[1]=RF32(ea);} // 800C4AAC
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 800C4AB0
  c->f[29]=c->ps1[29]=S(c->f[29]*c->f[0]); // 800C4AB4
  c->f[29]=c->ps1[29]=S(c->f[29]+c->f[1]); // 800C4AB8
  if (crb(c,2)) { goto L_800C4ACC; } // 800C4ABC
  cmps(c,0,(int32_t)c->r[21],1); // 800C4AC0
  if (crb(c,2)) { goto L_800C4AF8; } // 800C4AC4
  goto L_800C4B44; // 800C4AC8
L_800C4ACC:;
  c->lr=0x800C4AD0u; f_80323304(c); // 800C4ACC
  c->f[1]=c->f[29]; // 800C4AD0
  c->r[3]=c->r[3]+0x000007CCu; // 800C4AD4
  c->lr=0x800C4ADCu; f_8029FFD0(c); // 800C4AD8
  fcmp(c,0,c->f[29],c->f[31]); // 800C4ADC
  setcrb(c,2,crb(c,0)|crb(c,2)); // 800C4AE0
  if (!crb(c,2)) { goto L_800C4B44; } // 800C4AE4
  c->lr=0x800C4AECu; f_80323304(c); // 800C4AE8
  c->r[4]=0u+0x00000003u; // 800C4AEC
  c->lr=0x800C4AF4u; f_80323B9C(c); // 800C4AF0
  goto L_800C4B44; // 800C4AF4
L_800C4AF8:;
  c->lr=0x800C4AFCu; f_80323304(c); // 800C4AF8
  c->r[28]=c->r[3]|c->r[3]; // 800C4AFC
  c->lr=0x800C4B04u; f_80323304(c); // 800C4B00
  c->r[29]=c->r[3]|c->r[3]; // 800C4B04
  c->lr=0x800C4B0Cu; f_80323304(c); // 800C4B08
  c->r[30]=c->r[3]|c->r[3]; // 800C4B0C
  c->lr=0x800C4B14u; f_80323304(c); // 800C4B10
  c->f[3]=c->f[29]; // 800C4B14
  {uint32_t ea=c->r[30]+0x00000948u; c->f[1]=c->ps1[1]=RF32(ea);} // 800C4B18
  {uint32_t ea=c->r[29]+0x0000094Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 800C4B1C
  c->r[3]=c->r[3]+0x0000093Cu; // 800C4B20
  {uint32_t ea=c->r[28]+0x00000954u; c->f[4]=c->ps1[4]=RF32(ea);} // 800C4B24
  c->lr=0x800C4B2Cu; f_802A7D6C(c); // 800C4B28
  fcmp(c,0,c->f[29],c->f[31]); // 800C4B2C
  setcrb(c,2,crb(c,0)|crb(c,2)); // 800C4B30
  if (!crb(c,2)) { goto L_800C4B44; } // 800C4B34
  c->lr=0x800C4B3Cu; f_80323304(c); // 800C4B38
  c->r[4]=0u+0x00000006u; // 800C4B3C
  c->lr=0x800C4B44u; f_80323B9C(c); // 800C4B40
L_800C4B44:;
  c->r[21]=c->r[21]+0x00000001u; // 800C4B44
  c->r[31]=c->r[31]+0x00000004u; // 800C4B48
  cmps(c,0,(int32_t)c->r[21],2); // 800C4B4C
  if (crb(c,0)) { IRQCHK(c); goto L_800C4A40; } // 800C4B50
  c->r[11]=c->r[1]+0x00000040u; // 800C4B54
  {uint32_t ea=c->r[1]+0x00000068u; psq_load(c,31,ea,0,0);} // 800C4B58
  {uint32_t ea=c->r[1]+0x00000060u; c->f[31]=RF64(ea);} // 800C4B5C
  {uint32_t ea=c->r[1]+0x00000058u; psq_load(c,30,ea,0,0);} // 800C4B60
  {uint32_t ea=c->r[1]+0x00000050u; c->f[30]=RF64(ea);} // 800C4B64
  {uint32_t ea=c->r[1]+0x00000048u; psq_load(c,29,ea,0,0);} // 800C4B68
  {uint32_t ea=c->r[1]+0x00000040u; c->f[29]=RF64(ea);} // 800C4B6C
  c->lr=0x800C4B74u; { c->r[20]=R32(c->r[11]+0xFFFFFFD0u); c->r[21]=R32(c->r[11]+0xFFFFFFD4u); c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800C4B70
  c->r[0]=R32(c->r[1]+0x00000074u); // 800C4B74
  c->lr=c->r[0]; // 800C4B78
  c->r[1]=c->r[1]+0x00000070u; // 800C4B7C
  return; // 800C4B80
}

// fn_800C4B84
void f_800C4B84(Ctx* __restrict c) {
  trace_call(0x800C4B84u);
  c->r[3]=0u+0x00000016u; // 800C4B84
  return; // 800C4B88
}

// fn_800C4B8C
void f_800C4B8C(Ctx* __restrict c) {
  trace_call(0x800C4B8Cu);
  c->r[3]=0u+0x800C0000u; // 800C4B8C
  c->r[3]=c->r[3]+0x00004B98u; // 800C4B90
  return; // 800C4B94
}

// fn_800C4B98
void f_800C4B98(Ctx* __restrict c) {
  trace_call(0x800C4B98u);
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C4B98
  c->r[0]=c->lr; // 800C4B9C
  W32(c->r[1]+0x00000064u,c->r[0]); // 800C4BA0
  c->r[11]=c->r[1]+0x00000040u; // 800C4BA4
  {uint32_t ea=c->r[1]+0x00000050u; WF64(ea,c->f[31]);} // 800C4BA8
  {uint32_t ea=c->r[1]+0x00000058u; psq_store(c,31,ea,0,0);} // 800C4BAC
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[30]);} // 800C4BB0
  {uint32_t ea=c->r[1]+0x00000048u; psq_store(c,30,ea,0,0);} // 800C4BB4
  c->lr=0x800C4BBCu; { W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800C4BB8
  c->r[3]=R32(c->r[4]+0x00000000u); // 800C4BBC
  c->r[0]=c->r[3]+0xBDB40000u; // 800C4BC0
  cmpu(c,0,c->r[0],0x00005200u); // 800C4BC4
  if (crb(c,2)) { goto L_800C4BD4; } // 800C4BC8
  c->r[3]=0u+0x00000001u; // 800C4BCC
  goto L_800C4E60; // 800C4BD0
L_800C4BD4:;
  c->r[0]=R32(c->r[4]+0x00000004u); // 800C4BD4
  cmps(c,0,(int32_t)c->r[0],0); // 800C4BD8
  if (crb(c,2)) { goto L_800C4BE8; } // 800C4BDC
  c->r[3]=0u+0x00000001u; // 800C4BE0
  goto L_800C4E60; // 800C4BE4
L_800C4BE8:;
  c->r[0]=R32(c->r[4]+0x00000008u); // 800C4BE8
  c->r[31]=c->r[4]+c->r[0]; // 800C4BEC
  c->r[0]=R32(c->r[4]+c->r[0]); // 800C4BF0
  cmpu(c,0,c->r[0],0x00000001u); // 800C4BF4
  if (!crb(c,1)) { goto L_800C4C04; } // 800C4BF8
  c->r[3]=0u+0x00000001u; // 800C4BFC
  goto L_800C4E60; // 800C4C00
L_800C4C04:;
  c->r[30]=0u+0x00000000u; // 800C4C04
  W8(c->r[1]+0x00000020u,c->r[30]); // 800C4C08
  c->r[3]=c->r[1]+0x00000020u; // 800C4C0C
  {uint32_t ea=c->r[31]+0x00000004u; c->f[30]=c->ps1[30]=RF32(ea);} // 800C4C10
  c->lr=0x800C4C18u; f_8004F0A0(c); // 800C4C14
  c->r[0]=R32(c->r[31]+0x00000000u); // 800C4C18
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800C4C1C
  c->r[4]=c->r[3]+c->r[0]; // 800C4C20
  c->r[3]=c->r[1]+0x0000001Cu; // 800C4C24
  {uint32_t ea=c->r[4]+0x00000020u; WF32(ea,c->f[30]);} // 800C4C28
  W8(c->r[1]+0x0000001Cu,c->r[30]); // 800C4C2C
  {uint32_t ea=c->r[31]+0x00000008u; c->f[30]=c->ps1[30]=RF32(ea);} // 800C4C30
  c->lr=0x800C4C38u; f_8004F0A0(c); // 800C4C34
  c->r[0]=R32(c->r[31]+0x00000000u); // 800C4C38
  {uint32_t ea=c->r[2]+0xFFFFA2C8u; c->f[31]=c->ps1[31]=RF32(ea);} // 800C4C3C
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800C4C40
  c->r[4]=c->r[3]+c->r[0]; // 800C4C44
  c->r[3]=c->r[1]+0x00000018u; // 800C4C48
  {uint32_t ea=c->r[4]+0x00000028u; WF32(ea,c->f[30]);} // 800C4C4C
  W8(c->r[1]+0x00000018u,c->r[30]); // 800C4C50
  c->lr=0x800C4C58u; f_8004F0A0(c); // 800C4C54
  c->r[0]=R32(c->r[31]+0x00000000u); // 800C4C58
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800C4C5C
  c->r[3]=c->r[3]+c->r[0]; // 800C4C60
  {uint32_t ea=c->r[3]+0x00000030u; WF32(ea,c->f[31]);} // 800C4C64
  c->r[0]=R32(c->r[31]+0x00000000u); // 800C4C68
  cmps(c,0,(int32_t)c->r[0],0); // 800C4C6C
  if (crb(c,2)) { goto L_800C4C80; } // 800C4C70
  cmps(c,0,(int32_t)c->r[0],1); // 800C4C74
  if (crb(c,2)) { goto L_800C4D64; } // 800C4C78
  goto L_800C4E5C; // 800C4C7C
L_800C4C80:;
  c->lr=0x800C4C84u; f_80323304(c); // 800C4C80
  {uint32_t ea=c->r[3]+0x000007D8u; c->f[1]=c->ps1[1]=RF32(ea);} // 800C4C84
  {uint32_t ea=c->r[2]+0xFFFFA2C8u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C4C88
  fcmp(c,0,c->f[1],c->f[0]); // 800C4C8C
  setcrb(c,2,crb(c,0)|crb(c,2)); // 800C4C90
  if (crb(c,2)) { goto L_800C4CAC; } // 800C4C94
  c->lr=0x800C4C9Cu; f_80323304(c); // 800C4C98
  c->r[4]=0u+0x00000003u; // 800C4C9C
  c->lr=0x800C4CA4u; f_80323ADC(c); // 800C4CA0
  cmps(c,0,(int32_t)c->r[3],0); // 800C4CA4
  if (!crb(c,2)) { goto L_800C4CC8; } // 800C4CA8
L_800C4CAC:;
  c->lr=0x800C4CB0u; f_80323304(c); // 800C4CAC
  c->r[4]=0u+0x00000003u; // 800C4CB0
  c->r[5]=0u+0x00000001u; // 800C4CB4
  c->lr=0x800C4CBCu; f_8032382C(c); // 800C4CB8
  {uint32_t ea=c->r[2]+0xFFFFA2C8u; c->f[31]=c->ps1[31]=RF32(ea);} // 800C4CBC
  c->lr=0x800C4CC4u; f_80323304(c); // 800C4CC0
  {uint32_t ea=c->r[3]+0x000007D8u; WF32(ea,c->f[31]);} // 800C4CC4
L_800C4CC8:;
  c->r[30]=0u+0x00000000u; // 800C4CC8
  W8(c->r[1]+0x00000014u,c->r[30]); // 800C4CCC
  c->r[29]=c->r[1]+0x00000014u; // 800C4CD0
  c->lr=0x800C4CD8u; f_80323304(c); // 800C4CD4
  {uint32_t ea=c->r[3]+0x000007D8u; c->f[31]=c->ps1[31]=RF32(ea);} // 800C4CD8
  c->r[3]=c->r[29]|c->r[29]; // 800C4CDC
  c->lr=0x800C4CE4u; f_8004F0A0(c); // 800C4CE0
  c->r[0]=R32(c->r[31]+0x00000000u); // 800C4CE4
  {uint32_t ea=c->r[2]+0xFFFFA2C8u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C4CE8
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800C4CEC
  c->r[3]=c->r[3]+c->r[0]; // 800C4CF0
  {uint32_t ea=c->r[3]+0x00000018u; WF32(ea,c->f[31]);} // 800C4CF4
  {uint32_t ea=c->r[31]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 800C4CF8
  fcmp(c,0,c->f[1],c->f[0]); // 800C4CFC
  if (!crb(c,1)) { goto L_800C4D30; } // 800C4D00
  W8(c->r[1]+0x00000010u,c->r[30]); // 800C4D04
  c->r[3]=c->r[1]+0x00000010u; // 800C4D08
  c->lr=0x800C4D10u; f_8004F0A0(c); // 800C4D0C
  c->r[0]=R32(c->r[31]+0x00000000u); // 800C4D10
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800C4D14
  c->r[30]=c->r[3]+c->r[0]; // 800C4D18
  c->lr=0x800C4D20u; f_80323304(c); // 800C4D1C
  {uint32_t ea=c->r[30]+0x00000018u; c->f[1]=c->ps1[1]=RF32(ea);} // 800C4D20
  c->r[3]=c->r[3]+0x000007CCu; // 800C4D24
  c->lr=0x800C4D2Cu; f_8029FFD0(c); // 800C4D28
  goto L_800C4E5C; // 800C4D2C
L_800C4D30:;
  c->lr=0x800C4D34u; f_80323304(c); // 800C4D30
  {uint32_t ea=c->r[31]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 800C4D34
  c->r[3]=c->r[3]+0x000007CCu; // 800C4D38
  c->lr=0x800C4D40u; f_8029FFD0(c); // 800C4D3C
  {uint32_t ea=c->r[31]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 800C4D40
  {uint32_t ea=c->r[2]+0xFFFFA2C8u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C4D44
  fcmp(c,0,c->f[1],c->f[0]); // 800C4D48
  setcrb(c,2,crb(c,0)|crb(c,2)); // 800C4D4C
  if (!crb(c,2)) { goto L_800C4E5C; } // 800C4D50
  c->lr=0x800C4D58u; f_80323304(c); // 800C4D54
  c->r[4]=0u+0x00000003u; // 800C4D58
  c->lr=0x800C4D60u; f_80323B9C(c); // 800C4D5C
  goto L_800C4E5C; // 800C4D60
L_800C4D64:;
  c->lr=0x800C4D68u; f_80323304(c); // 800C4D64
  {uint32_t ea=c->r[3]+0x00000950u; c->f[1]=c->ps1[1]=RF32(ea);} // 800C4D68
  {uint32_t ea=c->r[2]+0xFFFFA2C8u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C4D6C
  fcmp(c,0,c->f[1],c->f[0]); // 800C4D70
  setcrb(c,2,crb(c,0)|crb(c,2)); // 800C4D74
  if (crb(c,2)) { goto L_800C4D90; } // 800C4D78
  c->lr=0x800C4D80u; f_80323304(c); // 800C4D7C
  c->r[4]=0u+0x00000006u; // 800C4D80
  c->lr=0x800C4D88u; f_80323ADC(c); // 800C4D84
  cmps(c,0,(int32_t)c->r[3],0); // 800C4D88
  if (!crb(c,2)) { goto L_800C4DAC; } // 800C4D8C
L_800C4D90:;
  c->lr=0x800C4D94u; f_80323304(c); // 800C4D90
  c->r[4]=0u+0x00000006u; // 800C4D94
  c->r[5]=0u+0x00000001u; // 800C4D98
  c->lr=0x800C4DA0u; f_8032382C(c); // 800C4D9C
  {uint32_t ea=c->r[2]+0xFFFFA2C8u; c->f[31]=c->ps1[31]=RF32(ea);} // 800C4DA0
  c->lr=0x800C4DA8u; f_80323304(c); // 800C4DA4
  {uint32_t ea=c->r[3]+0x00000950u; WF32(ea,c->f[31]);} // 800C4DA8
L_800C4DAC:;
  c->r[30]=0u+0x00000000u; // 800C4DAC
  W8(c->r[1]+0x0000000Cu,c->r[30]); // 800C4DB0
  c->r[29]=c->r[1]+0x0000000Cu; // 800C4DB4
  c->lr=0x800C4DBCu; f_80323304(c); // 800C4DB8
  {uint32_t ea=c->r[3]+0x00000950u; c->f[31]=c->ps1[31]=RF32(ea);} // 800C4DBC
  c->r[3]=c->r[29]|c->r[29]; // 800C4DC0
  c->lr=0x800C4DC8u; f_8004F0A0(c); // 800C4DC4
  c->r[0]=R32(c->r[31]+0x00000000u); // 800C4DC8
  {uint32_t ea=c->r[2]+0xFFFFA2C8u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C4DCC
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800C4DD0
  c->r[3]=c->r[3]+c->r[0]; // 800C4DD4
  {uint32_t ea=c->r[3]+0x00000018u; WF32(ea,c->f[31]);} // 800C4DD8
  {uint32_t ea=c->r[31]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 800C4DDC
  fcmp(c,0,c->f[1],c->f[0]); // 800C4DE0
  if (!crb(c,1)) { goto L_800C4E20; } // 800C4DE4
  W8(c->r[1]+0x00000008u,c->r[30]); // 800C4DE8
  c->r[3]=c->r[1]+0x00000008u; // 800C4DEC
  c->lr=0x800C4DF4u; f_8004F0A0(c); // 800C4DF0
  c->r[0]=R32(c->r[31]+0x00000000u); // 800C4DF4
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800C4DF8
  c->r[30]=c->r[3]+c->r[0]; // 800C4DFC
  c->lr=0x800C4E04u; f_80323304(c); // 800C4E00
  {uint32_t ea=c->r[31]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800C4E04
  c->r[3]=c->r[3]+0x0000093Cu; // 800C4E08
  {uint32_t ea=c->r[31]+0x00000010u; c->f[2]=c->ps1[2]=RF32(ea);} // 800C4E0C
  {uint32_t ea=c->r[30]+0x00000018u; c->f[3]=c->ps1[3]=RF32(ea);} // 800C4E10
  {uint32_t ea=c->r[31]+0x00000014u; c->f[4]=c->ps1[4]=RF32(ea);} // 800C4E14
  c->lr=0x800C4E1Cu; f_802A7D6C(c); // 800C4E18
  goto L_800C4E5C; // 800C4E1C
L_800C4E20:;
  c->lr=0x800C4E24u; f_80323304(c); // 800C4E20
  {uint32_t ea=c->r[31]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800C4E24
  c->r[3]=c->r[3]+0x0000093Cu; // 800C4E28
  {uint32_t ea=c->r[31]+0x00000010u; c->f[2]=c->ps1[2]=RF32(ea);} // 800C4E2C
  {uint32_t ea=c->r[31]+0x00000004u; c->f[3]=c->ps1[3]=RF32(ea);} // 800C4E30
  {uint32_t ea=c->r[31]+0x00000014u; c->f[4]=c->ps1[4]=RF32(ea);} // 800C4E34
  c->lr=0x800C4E3Cu; f_802A7D6C(c); // 800C4E38
  {uint32_t ea=c->r[31]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 800C4E3C
  {uint32_t ea=c->r[2]+0xFFFFA2C8u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C4E40
  fcmp(c,0,c->f[1],c->f[0]); // 800C4E44
  setcrb(c,2,crb(c,0)|crb(c,2)); // 800C4E48
  if (!crb(c,2)) { goto L_800C4E5C; } // 800C4E4C
  c->lr=0x800C4E54u; f_80323304(c); // 800C4E50
  c->r[4]=0u+0x00000006u; // 800C4E54
  c->lr=0x800C4E5Cu; f_80323B9C(c); // 800C4E58
L_800C4E5C:;
  c->r[3]=0u+0x00000001u; // 800C4E5C
L_800C4E60:;
  c->r[11]=c->r[1]+0x00000040u; // 800C4E60
  {uint32_t ea=c->r[1]+0x00000058u; psq_load(c,31,ea,0,0);} // 800C4E64
  {uint32_t ea=c->r[1]+0x00000050u; c->f[31]=RF64(ea);} // 800C4E68
  {uint32_t ea=c->r[1]+0x00000048u; psq_load(c,30,ea,0,0);} // 800C4E6C
  {uint32_t ea=c->r[1]+0x00000040u; c->f[30]=RF64(ea);} // 800C4E70
  c->lr=0x800C4E78u; { c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800C4E74
  c->r[0]=R32(c->r[1]+0x00000064u); // 800C4E78
  c->lr=c->r[0]; // 800C4E7C
  c->r[1]=c->r[1]+0x00000060u; // 800C4E80
  return; // 800C4E84
}

// fn_800C4E88
void f_800C4E88(Ctx* __restrict c) {
  trace_call(0x800C4E88u);
  {uint32_t ea=c->r[2]+0xFFFFA2D0u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C4E88
  c->r[0]=0u+0x00000000u; // 800C4E8C
  c->r[4]=0u+0xFFFFFFFFu; // 800C4E90
  c->r[5]=0u+0x00000009u; // 800C4E94
  W32(c->r[3]+0x00000018u,c->r[5]); // 800C4E98
  {uint32_t ea=c->r[3]+0x0000001Cu; WF32(ea,c->f[0]);} // 800C4E9C
  W32(c->r[3]+0x00000020u,c->r[4]); // 800C4EA0
  W32(c->r[3]+0x00000024u,c->r[4]); // 800C4EA4
  W32(c->r[3]+0x00000028u,c->r[0]); // 800C4EA8
  W32(c->r[3]+0x0000002Cu,c->r[0]); // 800C4EAC
  W8(c->r[3]+0x00000030u,c->r[0]); // 800C4EB0
  return; // 800C4EB4
}

// fn_800C4EB8
void f_800C4EB8(Ctx* __restrict c) {
  trace_call(0x800C4EB8u);
  {uint32_t ea=c->r[1]+0xFFFFFF70u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C4EB8
  c->r[0]=c->lr; // 800C4EBC
  W32(c->r[1]+0x00000094u,c->r[0]); // 800C4EC0
  c->r[11]=c->r[1]+0x00000080u; // 800C4EC4
  {uint32_t ea=c->r[1]+0x00000080u; WF64(ea,c->f[31]);} // 800C4EC8
  {uint32_t ea=c->r[1]+0x00000088u; psq_store(c,31,ea,0,0);} // 800C4ECC
  c->lr=0x800C4ED4u; f_803A9BD0(c); // 800C4ED0
  c->r[24]=0u+0x806D0000u; // 800C4ED4
  c->r[27]=0u+0x80730000u; // 800C4ED8
  c->r[28]=0u+0x806D0000u; // 800C4EDC
  c->r[31]=0u+0x806D0000u; // 800C4EE0
  c->r[23]=0u+0x80760000u; // 800C4EE4
  c->r[15]=c->r[3]|c->r[3]; // 800C4EE8
  c->r[3]=0u+0x80740000u; // 800C4EEC
  {uint32_t ea=c->r[2]+0xFFFFA2D0u; c->f[31]=c->ps1[31]=RF32(ea);} // 800C4EF0
  c->r[22]=0u+0x80690000u; // 800C4EF4
  c->r[30]=0u+0x80730000u; // 800C4EF8
  c->r[24]=c->r[24]+0xFFFFCD54u; // 800C4EFC
  c->r[25]=c->r[3]+0xFFFFFF5Cu; // 800C4F00
  c->r[28]=c->r[28]+0xFFFFC37Cu; // 800C4F04
  c->r[29]=c->r[27]+0x00006160u; // 800C4F08
  c->r[31]=c->r[31]+0xFFFFC6A8u; // 800C4F0C
  c->r[23]=c->r[23]+0xFFFF9288u; // 800C4F10
  c->r[16]=0u+0xFFFFFFFFu; // 800C4F14
  c->r[21]=0u+0x00000000u; // 800C4F18
  c->r[14]=0u+0x806D0000u; // 800C4F1C
  c->r[26]=0u+0x00000001u; // 800C4F20
  goto L_800C543C; // 800C4F24
L_800C4F28:;
  cmps(c,0,(int32_t)c->r[0],1); // 800C4F28
  c->r[16]=c->r[0]|c->r[0]; // 800C4F2C
  if (crb(c,2)) { goto L_800C4F50; } // 800C4F30
  cmps(c,0,(int32_t)c->r[0],2); // 800C4F34
  if (crb(c,2)) { goto L_800C5048; } // 800C4F38
  cmps(c,0,(int32_t)c->r[0],3); // 800C4F3C
  if (crb(c,2)) { goto L_800C50B4; } // 800C4F40
  cmps(c,0,(int32_t)c->r[0],4); // 800C4F44
  if (crb(c,2)) { goto L_800C51A0; } // 800C4F48
  goto L_800C543C; // 800C4F4C
L_800C4F50:;
  c->lr=0x800C4F54u; f_80323304(c); // 800C4F50
  c->r[0]=R8(c->r[3]+0x000006D8u); // 800C4F54
  cmps(c,0,(int32_t)c->r[0],0); // 800C4F58
  if (!crb(c,2)) { goto L_800C543C; } // 800C4F5C
  W8(c->r[1]+0x00000030u,c->r[21]); // 800C4F60
  c->r[3]=c->r[1]+0x00000030u; // 800C4F64
  c->lr=0x800C4F6Cu; f_800474F4(c); // 800C4F68
  c->r[4]=c->r[22]+0xFFFFE578u; // 800C4F6C
  c->r[5]=0u+0x00000000u; // 800C4F70
  c->lr=0x800C4F78u; f_8004C210(c); // 800C4F74
  W8(c->r[1]+0x0000002Cu,c->r[21]); // 800C4F78
  c->r[3]=c->r[1]+0x0000002Cu; // 800C4F7C
  c->lr=0x800C4F84u; f_800474F4(c); // 800C4F80
  c->r[4]=c->r[22]+0xFFFFE578u; // 800C4F84
  c->r[5]=0u+0x00000000u; // 800C4F88
  c->r[4]=c->r[4]+0x00000006u; // 800C4F8C
  c->lr=0x800C4F94u; f_8004C210(c); // 800C4F90
  c->r[3]=R32(c->r[13]+0xFFFFDA08u); // 800C4F94
  c->r[4]=0u+0x00000000u; // 800C4F98
  c->r[5]=0u+0x00000003u; // 800C4F9C
  c->r[6]=0u+0xFFFFFF7Fu; // 800C4FA0
  c->r[7]=0u+0x00000000u; // 800C4FA4
  c->r[8]=0u+0x0000000Au; // 800C4FA8
  c->lr=0x800C4FB0u; f_802E2C94(c); // 800C4FAC
  c->r[3]=R32(c->r[13]+0xFFFFDA08u); // 800C4FB0
  c->lr=0x800C4FB8u; f_802E4320(c); // 800C4FB4
  W8(c->r[1]+0x00000028u,c->r[21]); // 800C4FB8
  c->r[3]=c->r[1]+0x00000028u; // 800C4FBC
  c->lr=0x800C4FC4u; f_80046280(c); // 800C4FC0
  c->r[5]=R32(c->r[15]+0x00000018u); // 800C4FC4
  c->r[4]=c->r[14]+0x00007280u; // 800C4FC8
  c->r[6]=0u+0x00000001u; // 800C4FCC
  c->lr=0x800C4FD4u; f_8029FA80(c); // 800C4FD0
  W8(c->r[1]+0x00000024u,c->r[21]); // 800C4FD4
  c->r[3]=c->r[1]+0x00000024u; // 800C4FD8
  c->lr=0x800C4FE0u; f_80047A80(c); // 800C4FDC
  c->r[4]=0u+0x00000000u; // 800C4FE0
  c->lr=0x800C4FE8u; f_8029AF18(c); // 800C4FE4
  W8(c->r[1]+0x00000020u,c->r[21]); // 800C4FE8
  c->r[3]=c->r[1]+0x00000020u; // 800C4FEC
  c->lr=0x800C4FF4u; f_800482E8(c); // 800C4FF0
  {uint32_t ea=c->r[2]+0xFFFFA2D0u; c->f[1]=c->ps1[1]=RF32(ea);} // 800C4FF4
  c->r[5]=0u+0x00990000u; // 800C4FF8
  c->r[8]=c->r[5]+0xFFFF9680u; // 800C4FFC
  c->r[6]=R32(c->r[15]+0x0000002Cu); // 800C5000
  c->f[2]=c->f[1]; // 800C5004
  {uint32_t ea=c->r[2]+0xFFFFA2D4u; c->f[3]=c->ps1[3]=RF32(ea);} // 800C5008
  {uint32_t ea=c->r[2]+0xFFFFA2D8u; c->f[4]=c->ps1[4]=RF32(ea);} // 800C500C
  c->r[4]=c->r[15]+0x00000030u; // 800C5010
  {uint32_t ea=c->r[2]+0xFFFFA2DCu; c->f[5]=c->ps1[5]=RF32(ea);} // 800C5014
  c->r[5]=0u+0x00600000u; // 800C5018
  c->r[7]=0u+0x00000001u; // 800C501C
  c->r[9]=0u+0x00000280u; // 800C5020
  c->r[10]=0u+0x000001E0u; // 800C5024
  c->lr=0x800C502Cu; f_8004AE68(c); // 800C5028
  W8(c->r[1]+0x0000001Cu,c->r[21]); // 800C502C
  c->r[3]=c->r[1]+0x0000001Cu; // 800C5030
  c->lr=0x800C5038u; f_800482E8(c); // 800C5034
  c->lr=0x800C503Cu; f_8004B1D8(c); // 800C5038
  c->r[0]=0u+0x00000002u; // 800C503C
  W32(c->r[15]+0x00000028u,c->r[0]); // 800C5040
  goto L_800C543C; // 800C5044
L_800C5048:;
  c->r[0]=R32(c->r[23]+0x00000004u); // 800C5048
  cmps(c,0,(int32_t)c->r[0],2); // 800C504C
  if (crb(c,0)) { goto L_800C543C; } // 800C5050
  c->lr=0x800C5058u; f_80323304(c); // 800C5054
  {uint32_t ea=c->r[2]+0xFFFFA2D0u; c->f[1]=c->ps1[1]=RF32(ea);} // 800C5058
  c->r[4]=0u+0x00000001u; // 800C505C
  c->r[5]=0u+0x00000001u; // 800C5060
  c->r[3]=c->r[3]+0x00000628u; // 800C5064
  c->f[2]=c->f[1]; // 800C5068
  c->f[3]=c->f[1]; // 800C506C
  c->f[4]=c->f[1]; // 800C5070
  c->lr=0x800C5078u; f_802A0888(c); // 800C5074
  c->lr=0x800C507Cu; f_80323304(c); // 800C5078
  {uint32_t ea=c->r[2]+0xFFFFA2D0u; c->f[1]=c->ps1[1]=RF32(ea);} // 800C507C
  c->r[4]=0u+0x00000001u; // 800C5080
  c->r[5]=0u+0x00000001u; // 800C5084
  c->r[3]=c->r[3]+0x000006B4u; // 800C5088
  c->f[2]=c->f[1]; // 800C508C
  c->f[3]=c->f[1]; // 800C5090
  c->f[4]=c->f[1]; // 800C5094
  c->lr=0x800C509Cu; f_802A0888(c); // 800C5098
  c->lr=0x800C50A0u; f_80323304(c); // 800C509C
  c->r[4]=0u+0x00000001u; // 800C50A0
  c->lr=0x800C50A8u; f_80048F90(c); // 800C50A4
  c->r[0]=0u+0x00000003u; // 800C50A8
  W32(c->r[15]+0x00000028u,c->r[0]); // 800C50AC
  goto L_800C543C; // 800C50B0
L_800C50B4:;
  W8(c->r[1]+0x00000018u,c->r[21]); // 800C50B4
  c->r[3]=c->r[1]+0x00000018u; // 800C50B8
  c->lr=0x800C50C0u; f_800482E8(c); // 800C50BC
  c->lr=0x800C50C4u; f_8004B1E8(c); // 800C50C0
  cmps(c,0,(int32_t)c->r[3],0); // 800C50C4
  if (!crb(c,1)) { goto L_800C50E4; } // 800C50C8
  W8(c->r[1]+0x00000014u,c->r[21]); // 800C50CC
  c->r[3]=c->r[1]+0x00000014u; // 800C50D0
  c->lr=0x800C50D8u; f_800482E8(c); // 800C50D4
  c->lr=0x800C50DCu; f_8004B1E8(c); // 800C50D8
  cmps(c,0,(int32_t)c->r[3],5); // 800C50DC
  if (crb(c,0)) { goto L_800C543C; } // 800C50E0
L_800C50E4:;
  {uint32_t ea=c->r[15]+0x0000001Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800C50E4
  fcmp(c,0,c->f[0],c->f[31]); // 800C50E8
  if (!crb(c,0)) { goto L_800C5118; } // 800C50EC
  c->lr=0x800C50F4u; f_80323304(c); // 800C50F0
  {uint32_t ea=c->r[2]+0xFFFFA2D0u; c->f[1]=c->ps1[1]=RF32(ea);} // 800C50F4
  c->r[4]=0u+0x00000000u; // 800C50F8
  c->r[5]=0u+0x00000001u; // 800C50FC
  c->r[3]=c->r[3]+0x000006B4u; // 800C5100
  c->f[2]=c->f[1]; // 800C5104
  c->f[3]=c->f[1]; // 800C5108
  c->f[4]=c->f[1]; // 800C510C
  c->lr=0x800C5114u; f_802A0888(c); // 800C5110
  goto L_800C513C; // 800C5114
L_800C5118:;
  c->lr=0x800C511Cu; f_80323304(c); // 800C5118
  {uint32_t ea=c->r[2]+0xFFFFA2D0u; c->f[1]=c->ps1[1]=RF32(ea);} // 800C511C
  c->r[4]=0u+0x00000001u; // 800C5120
  {uint32_t ea=c->r[15]+0x0000001Cu; c->f[4]=c->ps1[4]=RF32(ea);} // 800C5124
  c->r[5]=0u+0x00000001u; // 800C5128
  c->f[2]=c->f[1]; // 800C512C
  c->r[3]=c->r[3]+0x000006B4u; // 800C5130
  c->f[3]=c->f[1]; // 800C5134
  c->lr=0x800C513Cu; f_802A0888(c); // 800C5138
L_800C513C:;
  c->r[3]=R32(c->r[13]+0xFFFFDA08u); // 800C513C
  c->r[4]=0u+0x00000001u; // 800C5140
  c->r[5]=0u+0x00000003u; // 800C5144
  c->r[6]=0u+0xFFFFFF7Fu; // 800C5148
  c->r[7]=0u+0x00000000u; // 800C514C
  c->r[8]=0u+0x0000000Au; // 800C5150
  c->lr=0x800C5158u; f_802E2C94(c); // 800C5154
  W8(c->r[1]+0x00000010u,c->r[21]); // 800C5158
  c->r[3]=c->r[1]+0x00000010u; // 800C515C
  c->lr=0x800C5164u; f_80046280(c); // 800C5160
  c->r[5]=R32(c->r[15]+0x00000018u); // 800C5164
  c->r[4]=c->r[14]+0x00007280u; // 800C5168
  c->r[6]=0u+0x00000102u; // 800C516C
  c->lr=0x800C5174u; f_8029FA80(c); // 800C5170
  c->lr=0x800C5178u; f_80323304(c); // 800C5174
  c->r[4]=0u+0x00000102u; // 800C5178
  c->lr=0x800C5180u; f_80048F90(c); // 800C517C
  W8(c->r[1]+0x0000000Cu,c->r[21]); // 800C5180
  c->r[3]=c->r[1]+0x0000000Cu; // 800C5184
  c->lr=0x800C518Cu; f_80047A80(c); // 800C5188
  c->r[4]=0u+0x00000000u; // 800C518C
  c->lr=0x800C5194u; f_8029B110(c); // 800C5190
  c->r[0]=0u+0x00000004u; // 800C5194
  W32(c->r[15]+0x00000028u,c->r[0]); // 800C5198
  goto L_800C543C; // 800C519C
L_800C51A0:;
  c->lr=0x800C51A4u; f_80323304(c); // 800C51A0
  c->r[0]=R8(c->r[3]+0x000006D8u); // 800C51A4
  cmps(c,0,(int32_t)c->r[0],0); // 800C51A8
  if (!crb(c,2)) { goto L_800C543C; } // 800C51AC
  c->r[0]=R32(c->r[15]+0x00000024u); // 800C51B0
  cmps(c,0,(int32_t)c->r[0],0); // 800C51B4
  if (crb(c,0)) { goto L_800C53CC; } // 800C51B8
  c->r[0]=R8(c->r[13]+0xFFFFBBF0u); // 800C51BC
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800C51C0
  if (!crb(c,2)) { goto L_800C51FC; } // 800C51C4
  c->r[3]=0u+0x80740000u; // 800C51C8
  c->r[3]=c->r[3]+0xFFFFFF5Cu; // 800C51CC
  c->lr=0x800C51D4u; f_800A1FCC(c); // 800C51D0
  c->r[0]=c->r[24]+0x00000028u; // 800C51D4
  c->r[4]=0u+0x80050000u; // 800C51D8
  c->r[5]=0u+0x80750000u; // 800C51DC
  W32(c->r[25]+0x000000A4u,c->r[24]); // 800C51E0
  c->r[3]=c->r[25]|c->r[25]; // 800C51E4
  c->r[4]=c->r[4]+0x000009E8u; // 800C51E8
  W32(c->r[25]+0x000000A8u,c->r[0]); // 800C51EC
  c->r[5]=c->r[5]+0x000037F0u; // 800C51F0
  c->lr=0x800C51F8u; f_803A92B8(c); // 800C51F4
  W8(c->r[13]+0xFFFFBBF0u,c->r[26]); // 800C51F8
L_800C51FC:;
  c->r[0]=0u+0x00000004u; // 800C51FC
  c->r[20]=R32(c->r[15]+0x00000024u); // 800C5200
  c->r[6]=0u+0x00000000u; // 800C5204
  c->r[5]=R32(c->r[15]+0x00000020u); // 800C5208
  c->r[3]=0u+0x00000000u; // 800C520C
  c->ctr=c->r[0]; // 800C5210
L_800C5214:;
  c->r[4]=c->r[25]+c->r[3]; // 800C5214
  c->r[0]=R32(c->r[4]+0x00000958u); // 800C5218
  cmps(c,0,(int32_t)c->r[5],(int32_t)c->r[0]); // 800C521C
  if (crb(c,2)) { goto L_800C5230; } // 800C5220
  c->r[6]=c->r[6]+0x00000001u; // 800C5224
  c->r[3]=c->r[3]+0x000008B0u; // 800C5228
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800C5214; } // 800C522C
L_800C5230:;
  cmps(c,0,(int32_t)c->r[6],4); // 800C5230
  c->r[0]=0u+0xFFFFFFFFu; // 800C5234
  if (!crb(c,0)) { goto L_800C5240; } // 800C5238
  c->r[0]=c->r[6]|c->r[6]; // 800C523C
L_800C5240:;
  cmps(c,0,(int32_t)c->r[0],0); // 800C5240
  if (crb(c,0)) { goto L_800C53CC; } // 800C5244
  c->r[18]=(uint32_t)((int32_t)c->r[0]*(int32_t)2224); // 800C5248
  c->r[4]=c->r[20]|c->r[20]; // 800C524C
  c->r[3]=c->r[25]+c->r[18]; // 800C5250
  c->r[3]=c->r[3]+0x00000130u; // 800C5254
  c->lr=0x800C525Cu; f_800A1D5C(c); // 800C5258
  cmps(c,0,(int32_t)c->r[3],0); // 800C525C
  c->r[19]=c->r[3]|c->r[3]; // 800C5260
  if (crb(c,2)) { goto L_800C53CC; } // 800C5264
  cmpu(c,0,c->r[20],0x000003FFu); // 800C5268
  c->r[0]=c->r[20]|c->r[20]; // 800C526C
  if (!crb(c,1)) { goto L_800C5278; } // 800C5270
  c->r[0]=0u+0x00000000u; // 800C5274
L_800C5278:;
  c->r[4]=c->r[25]+c->r[18]; // 800C5278
  c->r[3]=rotl(c->r[0],0)&0x00000007u; // 800C527C
  c->r[17]=c->r[4]+0x000000B0u; // 800C5280
  c->r[0]=sraw(c,c->r[0],3); // 800C5284
  c->r[0]=R8(c->r[17]+c->r[0]); // 800C5288
  c->r[3]=((c->r[3])&0x20)?0u:(c->r[26]<<((c->r[3])&31)); // 800C528C
  c->r[0]=c->r[3]&c->r[0]; cr0(c,c->r[0]); // 800C5290
  if (!crb(c,2)) { goto L_800C52EC; } // 800C5294
  c->r[0]=R8(c->r[13]+0xFFFFBB87u); // 800C5298
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800C529C
  if (!crb(c,2)) { goto L_800C52D4; } // 800C52A0
  c->r[3]=c->r[27]+0x00006160u; // 800C52A4
  c->lr=0x800C52ACu; f_8008C1BC(c); // 800C52A8
  c->r[0]=c->r[28]+0x00000028u; // 800C52AC
  c->r[4]=0u+0x80050000u; // 800C52B0
  c->r[5]=0u+0x80750000u; // 800C52B4
  W32(c->r[29]+0x000000A4u,c->r[28]); // 800C52B8
  c->r[3]=c->r[29]|c->r[29]; // 800C52BC
  c->r[4]=c->r[4]+0xFFFF9F5Cu; // 800C52C0
  W32(c->r[29]+0x000000A8u,c->r[0]); // 800C52C4
  c->r[5]=c->r[5]+0x000037D8u; // 800C52C8
  c->lr=0x800C52D0u; f_803A92B8(c); // 800C52CC
  W8(c->r[13]+0xFFFFBB87u,c->r[26]); // 800C52D0
L_800C52D4:;
  c->r[4]=c->r[19]|c->r[19]; // 800C52D4
  c->r[3]=c->r[27]+0x00006160u; // 800C52D8
  c->lr=0x800C52E0u; f_8008CD98(c); // 800C52DC
  c->r[3]=c->r[25]+c->r[18]; // 800C52E0
  c->r[0]=0u+0x00000002u; // 800C52E4
  W32(c->r[3]+0x00000950u,c->r[0]); // 800C52E8
L_800C52EC:;
  cmpu(c,0,c->r[20],0x000003FFu); // 800C52EC
  if (!crb(c,1)) { goto L_800C52F8; } // 800C52F0
  c->r[20]=0u+0x00000000u; // 800C52F4
L_800C52F8:;
  c->r[4]=sraw(c,c->r[20],3); // 800C52F8
  c->r[0]=rotl(c->r[20],0)&0x00000007u; // 800C52FC
  c->r[0]=((c->r[0])&0x20)?0u:(c->r[26]<<((c->r[0])&31)); // 800C5300
  c->r[3]=R8(c->r[17]+c->r[4]); // 800C5304
  c->r[0]=rotl(c->r[0],0)&0x000000FFu; // 800C5308
  c->r[0]=c->r[3]|c->r[0]; // 800C530C
  W8(c->r[17]+c->r[4],c->r[0]); // 800C5310
  c->r[0]=R8(c->r[19]+0x00000000u); // 800C5314
  cmps(c,0,(int32_t)c->r[0],71); // 800C5318
  if (!crb(c,2)) { goto L_800C5344; } // 800C531C
  c->r[0]=R8(c->r[19]+0x00000001u); // 800C5320
  cmps(c,0,(int32_t)c->r[0],95); // 800C5324
  if (!crb(c,2)) { goto L_800C5344; } // 800C5328
  c->r[3]=c->r[19]+0x00000002u; // 800C532C
  c->lr=0x800C5334u; f_803B613C(c); // 800C5330
  cmpu(c,0,c->r[3],0x000003FFu); // 800C5334
  if (!crb(c,1)) { goto L_800C5348; } // 800C5338
  c->r[3]=0u+0xFFFFFFFFu; // 800C533C
  goto L_800C5348; // 800C5340
L_800C5344:;
  c->r[3]=0u+0xFFFFFFFFu; // 800C5344
L_800C5348:;
  cmpu(c,0,c->r[3],0x000003FFu); // 800C5348
  if (crb(c,1)) { goto L_800C5370; } // 800C534C
  c->r[4]=sraw(c,c->r[3],3); // 800C5350
  c->r[0]=rotl(c->r[3],0)&0x00000007u; // 800C5354
  c->r[4]=c->r[25]+c->r[4]; // 800C5358
  c->r[0]=((c->r[0])&0x20)?0u:(c->r[26]<<((c->r[0])&31)); // 800C535C
  c->r[3]=R8(c->r[4]+0x0000236Cu); // 800C5360
  c->r[0]=rotl(c->r[0],0)&0x000000FFu; // 800C5364
  c->r[0]=c->r[3]|c->r[0]; // 800C5368
  W8(c->r[4]+0x0000236Cu,c->r[0]); // 800C536C
L_800C5370:;
  c->r[0]=R8(c->r[19]+0x00000000u); // 800C5370
  cmps(c,0,(int32_t)c->r[0],67); // 800C5374
  if (!crb(c,2)) { goto L_800C53A0; } // 800C5378
  c->r[0]=R8(c->r[19]+0x00000001u); // 800C537C
  cmps(c,0,(int32_t)c->r[0],95); // 800C5380
  if (!crb(c,2)) { goto L_800C53A0; } // 800C5384
  c->r[3]=c->r[19]+0x00000002u; // 800C5388
  c->lr=0x800C5390u; f_803B613C(c); // 800C538C
  cmpu(c,0,c->r[3],0x0000003Fu); // 800C5390
  if (!crb(c,1)) { goto L_800C53A4; } // 800C5394
  c->r[3]=0u+0xFFFFFFFFu; // 800C5398
  goto L_800C53A4; // 800C539C
L_800C53A0:;
  c->r[3]=0u+0xFFFFFFFFu; // 800C53A0
L_800C53A4:;
  cmpu(c,0,c->r[3],0x0000003Fu); // 800C53A4
  if (crb(c,1)) { goto L_800C53CC; } // 800C53A8
  c->r[4]=sraw(c,c->r[3],3); // 800C53AC
  c->r[0]=rotl(c->r[3],0)&0x00000007u; // 800C53B0
  c->r[4]=c->r[25]+c->r[4]; // 800C53B4
  c->r[0]=((c->r[0])&0x20)?0u:(c->r[26]<<((c->r[0])&31)); // 800C53B8
  c->r[3]=R8(c->r[4]+0x000023ECu); // 800C53BC
  c->r[0]=rotl(c->r[0],0)&0x000000FFu; // 800C53C0
  c->r[0]=c->r[3]|c->r[0]; // 800C53C4
  W8(c->r[4]+0x000023ECu,c->r[0]); // 800C53C8
L_800C53CC:;
  c->r[12]=R32(c->r[15]+0x00000010u); // 800C53CC
  c->r[3]=c->r[15]|c->r[15]; // 800C53D0
  c->r[12]=R32(c->r[12]+0x00000008u); // 800C53D4
  c->ctr=c->r[12]; // 800C53D8
  if (true) { c->lr=0x800C53E0u; dispatch(c,c->ctr); } // 800C53DC
  W8(c->r[1]+0x00000008u,c->r[21]); // 800C53E0
  c->r[3]=c->r[1]+0x00000008u; // 800C53E4
  c->lr=0x800C53ECu; f_80046EFC(c); // 800C53E8
  c->r[4]=0u+0x00000009u; // 800C53EC
  c->r[5]=0u+0x00000000u; // 800C53F0
  c->r[6]=0u+0xFFFFFFFFu; // 800C53F4
  c->lr=0x800C53FCu; f_800B1DE0(c); // 800C53F8
  c->lr=0x800C5400u; f_80049CC8(c); // 800C53FC
  c->r[4]=0u+0x00000000u; // 800C5400
  c->lr=0x800C5408u; f_800FC6C0(c); // 800C5404
  c->r[0]=R8(c->r[13]+0xFFFFBB7Au); // 800C5408
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800C540C
  if (!crb(c,2)) { goto L_800C5430; } // 800C5410
  c->r[3]=c->r[30]+0x00003B68u; // 800C5414
  c->lr=0x800C541Cu; f_80045E54(c); // 800C5418
  c->r[3]=c->r[30]+0x00003B68u; // 800C541C
  c->r[0]=c->r[31]+0x0000003Cu; // 800C5420
  W32(c->r[3]+0x000000A4u,c->r[31]); // 800C5424
  W32(c->r[3]+0x000000B0u,c->r[0]); // 800C5428
  W8(c->r[13]+0xFFFFBB7Au,c->r[26]); // 800C542C
L_800C5430:;
  c->r[3]=c->r[30]+0x00003B68u; // 800C5430
  c->r[4]=0u+0x0000000Au; // 800C5434
  c->lr=0x800C543Cu; f_80047764(c); // 800C5438
L_800C543C:;
  c->r[0]=R32(c->r[15]+0x00000028u); // 800C543C
  cmps(c,0,(int32_t)c->r[16],(int32_t)c->r[0]); // 800C5440
  if (!crb(c,2)) { IRQCHK(c); goto L_800C4F28; } // 800C5444
  c->r[11]=c->r[1]+0x00000080u; // 800C5448
  {uint32_t ea=c->r[1]+0x00000088u; psq_load(c,31,ea,0,0);} // 800C544C
  {uint32_t ea=c->r[1]+0x00000080u; c->f[31]=RF64(ea);} // 800C5450
  c->lr=0x800C5458u; f_803A9C1C(c); // 800C5454
  c->r[0]=R32(c->r[1]+0x00000094u); // 800C5458
  c->lr=c->r[0]; // 800C545C
  c->r[1]=c->r[1]+0x00000090u; // 800C5460
  return; // 800C5464
}

// fn_800C5468
void f_800C5468(Ctx* __restrict c) {
  trace_call(0x800C5468u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C5468
  c->r[0]=c->lr; // 800C546C
  W32(c->r[1]+0x00000024u,c->r[0]); // 800C5470
  {uint32_t ea=c->r[1]+0x00000018u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800C5474
  c->r[30]=c->r[3]|c->r[3]; // 800C5478
  c->r[4]=R32(c->r[3]+0x00000028u); // 800C547C
  c->r[0]=c->r[4]+0xFFFFFFFEu; // 800C5480
  cmpu(c,0,c->r[0],0x00000001u); // 800C5484
  if (crb(c,1)) { goto L_800C54EC; } // 800C5488
  c->r[3]=R32(c->r[13]+0xFFFFDA08u); // 800C548C
  c->r[4]=0u+0x00000001u; // 800C5490
  c->r[5]=0u+0x00000003u; // 800C5494
  c->r[6]=0u+0xFFFFFF7Fu; // 800C5498
  c->r[7]=0u+0x00000000u; // 800C549C
  c->r[8]=0u+0x0000000Au; // 800C54A0
  c->lr=0x800C54A8u; f_802E2C94(c); // 800C54A4
  c->r[31]=0u+0x00000000u; // 800C54A8
  W8(c->r[1]+0x0000000Cu,c->r[31]); // 800C54AC
  c->r[3]=c->r[1]+0x0000000Cu; // 800C54B0
  c->lr=0x800C54B8u; f_80046280(c); // 800C54B4
  c->r[4]=0u+0x806D0000u; // 800C54B8
  c->r[5]=R32(c->r[30]+0x00000018u); // 800C54BC
  c->r[4]=c->r[4]+0x00007280u; // 800C54C0
  c->r[6]=0u+0x00000102u; // 800C54C4
  c->lr=0x800C54CCu; f_8029FA80(c); // 800C54C8
  c->lr=0x800C54D0u; f_80323304(c); // 800C54CC
  c->r[4]=0u+0x00000102u; // 800C54D0
  c->lr=0x800C54D8u; f_80048F90(c); // 800C54D4
  W8(c->r[1]+0x00000008u,c->r[31]); // 800C54D8
  c->r[3]=c->r[1]+0x00000008u; // 800C54DC
  c->lr=0x800C54E4u; f_80047A80(c); // 800C54E0
  c->r[4]=0u+0x00000000u; // 800C54E4
  c->lr=0x800C54ECu; f_8029B110(c); // 800C54E8
L_800C54EC:;
  c->r[12]=R32(c->r[30]+0x00000010u); // 800C54EC
  c->r[3]=c->r[30]|c->r[30]; // 800C54F0
  c->r[12]=R32(c->r[12]+0x00000008u); // 800C54F4
  c->ctr=c->r[12]; // 800C54F8
  if (true) { c->lr=0x800C5500u; dispatch(c,c->ctr); } // 800C54FC
  {uint32_t ea=c->r[1]+0x00000018u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800C5500
  c->r[0]=R32(c->r[1]+0x00000024u); // 800C5504
  c->lr=c->r[0]; // 800C5508
  c->r[1]=c->r[1]+0x00000020u; // 800C550C
  return; // 800C5510
}

// fn_800C5514
void f_800C5514(Ctx* __restrict c) {
  trace_call(0x800C5514u);
  c->r[3]=0u+0x0000001Au; // 800C5514
  return; // 800C5518
}

// fn_800C551C
void f_800C551C(Ctx* __restrict c) {
  trace_call(0x800C551Cu);
  c->r[3]=0u+0x800C0000u; // 800C551C
  c->r[3]=c->r[3]+0x00005528u; // 800C5520
  return; // 800C5524
}

// fn_800C5528
void f_800C5528(Ctx* __restrict c) {
  trace_call(0x800C5528u);
  {uint32_t ea=c->r[1]+0xFFFFFF80u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C5528
  c->r[0]=c->lr; // 800C552C
  W32(c->r[1]+0x00000084u,c->r[0]); // 800C5530
  c->r[11]=c->r[1]+0x00000070u; // 800C5534
  {uint32_t ea=c->r[1]+0x00000070u; WF64(ea,c->f[31]);} // 800C5538
  {uint32_t ea=c->r[1]+0x00000078u; psq_store(c,31,ea,0,0);} // 800C553C
  c->lr=0x800C5544u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800C5540
  c->r[31]=0u+0x00000000u; // 800C5544
  W8(c->r[1]+0x00000048u,c->r[31]); // 800C5548
  c->r[27]=c->r[4]|c->r[4]; // 800C554C
  c->r[28]=c->r[5]|c->r[5]; // 800C5550
  c->r[3]=c->r[1]+0x00000048u; // 800C5554
  c->lr=0x800C555Cu; f_800474F4(c); // 800C5558
  c->r[4]=0u+0xFFFFFFFFu; // 800C555C
  c->lr=0x800C5564u; f_8004C8D0(c); // 800C5560
  c->r[3]=0u+0x80750000u; // 800C5564
  c->r[3]=c->r[3]+0xFFFFBC98u; // 800C5568
  c->lr=0x800C5570u; f_800AB428(c); // 800C556C
  c->r[3]=0u+0x80750000u; // 800C5570
  c->r[3]=c->r[3]+0xFFFFC558u; // 800C5574
  c->lr=0x800C557Cu; f_800AB428(c); // 800C5578
  c->r[3]=R32(c->r[27]+0x00000000u); // 800C557C
  c->r[0]=c->r[3]+0xB2B10000u; // 800C5580
  cmpu(c,0,c->r[0],0x00005600u); // 800C5584
  if (crb(c,2)) { goto L_800C5594; } // 800C5588
  c->r[3]=0u+0x00000001u; // 800C558C
  goto L_800C5840; // 800C5590
L_800C5594:;
  c->r[0]=R32(c->r[27]+0x00000004u); // 800C5594
  cmps(c,0,(int32_t)c->r[0],0); // 800C5598
  if (crb(c,2)) { goto L_800C55A8; } // 800C559C
  c->r[3]=0u+0x00000001u; // 800C55A0
  goto L_800C5840; // 800C55A4
L_800C55A8:;
  c->r[3]=R32(c->r[27]+0x00000008u); // 800C55A8
  c->r[0]=R32(c->r[27]+0x0000000Cu); // 800C55AC
  c->r[27]=c->r[27]+c->r[3]; // 800C55B0
  c->r[30]=c->r[27]+c->r[0]; // 800C55B4
  c->r[0]=R8(c->r[27]+c->r[0]); // 800C55B8
  cmps(c,0,(int32_t)c->r[0],82); // 800C55BC
  if (!crb(c,2)) { goto L_800C562C; } // 800C55C0
  c->r[0]=R8(c->r[13]+0xFFFFBB85u); // 800C55C4
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800C55C8
  if (!crb(c,2)) { goto L_800C5610; } // 800C55CC
  c->r[29]=0u+0x80730000u; // 800C55D0
  c->r[3]=c->r[29]+0x00005908u; // 800C55D4
  c->lr=0x800C55DCu; f_8009822C(c); // 800C55D8
  c->r[6]=0u+0x806D0000u; // 800C55DC
  c->r[4]=0u+0x80050000u; // 800C55E0
  c->r[6]=c->r[6]+0xFFFFC3F4u; // 800C55E4
  c->r[3]=c->r[29]+0x00005908u; // 800C55E8
  c->r[0]=c->r[6]+0x00000028u; // 800C55EC
  c->r[5]=0u+0x80750000u; // 800C55F0
  W32(c->r[3]+0x000000A4u,c->r[6]); // 800C55F4
  c->r[4]=c->r[4]+0xFFFF9FD4u; // 800C55F8
  c->r[5]=c->r[5]+0x000037E4u; // 800C55FC
  W32(c->r[3]+0x000000A8u,c->r[0]); // 800C5600
  c->lr=0x800C5608u; f_803A92B8(c); // 800C5604
  c->r[0]=0u+0x00000001u; // 800C5608
  W8(c->r[13]+0xFFFFBB85u,c->r[0]); // 800C560C
L_800C5610:;
  c->r[3]=0u+0x80730000u; // 800C5610
  c->r[4]=c->r[30]|c->r[30]; // 800C5614
  c->r[3]=c->r[3]+0x00005908u; // 800C5618
  c->r[5]=0u+0x00180000u; // 800C561C
  c->lr=0x800C5624u; f_80099140(c); // 800C5620
  c->r[3]=0u+0x00000001u; // 800C5624
  goto L_800C5840; // 800C5628
L_800C562C:;
  W8(c->r[1]+0x00000044u,c->r[31]); // 800C562C
  c->r[3]=c->r[1]+0x00000044u; // 800C5630
  {uint32_t ea=c->r[27]+0x00000004u; c->f[31]=c->ps1[31]=RF32(ea);} // 800C5634
  c->lr=0x800C563Cu; f_8004E870(c); // 800C5638
  {uint32_t ea=c->r[3]+0x0000001Cu; WF32(ea,c->f[31]);} // 800C563C
  c->r[3]=c->r[1]+0x00000040u; // 800C5640
  W8(c->r[1]+0x00000040u,c->r[31]); // 800C5644
  c->lr=0x800C564Cu; f_8004E870(c); // 800C5648
  W32(c->r[3]+0x00000020u,c->r[28]); // 800C564C
  c->r[3]=c->r[1]+0x0000003Cu; // 800C5650
  W8(c->r[1]+0x0000003Cu,c->r[31]); // 800C5654
  c->r[29]=R32(c->r[27]+0x00000008u); // 800C5658
  c->lr=0x800C5660u; f_8004E870(c); // 800C565C
  W32(c->r[3]+0x00000024u,c->r[29]); // 800C5660
  c->lr=0x800C5668u; f_80323304(c); // 800C5664
  {uint32_t ea=c->r[2]+0xFFFFA2D0u; c->f[1]=c->ps1[1]=RF32(ea);} // 800C5668
  c->r[4]=0u+0x00000000u; // 800C566C
  {uint32_t ea=c->r[27]+0x00000000u; c->f[4]=c->ps1[4]=RF32(ea);} // 800C5670
  c->r[5]=0u+0x00000001u; // 800C5674
  c->f[2]=c->f[1]; // 800C5678
  c->r[3]=c->r[3]+0x000006B4u; // 800C567C
  c->f[3]=c->f[1]; // 800C5680
  c->lr=0x800C5688u; f_802A0888(c); // 800C5684
  {uint32_t ea=c->r[27]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 800C5688
  {uint32_t ea=c->r[2]+0xFFFFA2D0u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C568C
  fcmp(c,0,c->f[1],c->f[0]); // 800C5690
  if (!crb(c,1)) { goto L_800C56F0; } // 800C5694
  c->r[3]=c->r[30]|c->r[30]; // 800C5698
  c->lr=0x800C56A0u; f_803A91D4(c); // 800C569C
  cmpu(c,0,c->r[3],0x00000020u); // 800C56A0
  if (!crb(c,0)) { goto L_800C5810; } // 800C56A4
  W8(c->r[1]+0x00000038u,c->r[31]); // 800C56A8
  c->r[3]=c->r[1]+0x00000038u; // 800C56AC
  c->r[29]=0u+0x00000001u; // 800C56B0
  c->lr=0x800C56B8u; f_8004E870(c); // 800C56B4
  W32(c->r[3]+0x00000028u,c->r[29]); // 800C56B8
  c->r[3]=c->r[1]+0x00000034u; // 800C56BC
  W8(c->r[1]+0x00000034u,c->r[31]); // 800C56C0
  c->r[0]=R8(c->r[27]+0x0000000Cu); // 800C56C4
  c->r[29]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 800C56C8
  c->lr=0x800C56D0u; f_8004E870(c); // 800C56CC
  W32(c->r[3]+0x0000002Cu,c->r[29]); // 800C56D0
  c->r[3]=c->r[1]+0x00000030u; // 800C56D4
  W8(c->r[1]+0x00000030u,c->r[31]); // 800C56D8
  c->lr=0x800C56E0u; f_8004E870(c); // 800C56DC
  c->r[4]=c->r[30]|c->r[30]; // 800C56E0
  c->r[3]=c->r[3]+0x00000030u; // 800C56E4
  c->lr=0x800C56ECu; f_803B37C0(c); // 800C56E8
  goto L_800C5810; // 800C56EC
L_800C56F0:;
  W8(c->r[1]+0x0000002Cu,c->r[31]); // 800C56F0
  c->r[3]=c->r[1]+0x0000002Cu; // 800C56F4
  c->lr=0x800C56FCu; f_800474F4(c); // 800C56F8
  c->r[29]=0u+0x80690000u; // 800C56FC
  c->r[5]=0u+0x00000000u; // 800C5700
  c->r[4]=c->r[29]+0xFFFFE578u; // 800C5704
  c->lr=0x800C570Cu; f_8004C210(c); // 800C5708
  W8(c->r[1]+0x00000028u,c->r[31]); // 800C570C
  c->r[3]=c->r[1]+0x00000028u; // 800C5710
  c->lr=0x800C5718u; f_800474F4(c); // 800C5714
  c->r[4]=c->r[29]+0xFFFFE578u; // 800C5718
  c->r[5]=0u+0x00000000u; // 800C571C
  c->r[4]=c->r[4]+0x00000006u; // 800C5720
  c->lr=0x800C5728u; f_8004C210(c); // 800C5724
  c->r[3]=R32(c->r[13]+0xFFFFDA08u); // 800C5728
  c->r[4]=0u+0x00000000u; // 800C572C
  c->r[5]=0u+0x00000003u; // 800C5730
  c->r[6]=0u+0xFFFFFF7Fu; // 800C5734
  c->r[7]=0u+0x00000000u; // 800C5738
  c->r[8]=0u+0x0000000Au; // 800C573C
  c->lr=0x800C5744u; f_802E2C94(c); // 800C5740
  c->r[3]=R32(c->r[13]+0xFFFFDA08u); // 800C5744
  c->lr=0x800C574Cu; f_802E4320(c); // 800C5748
  W8(c->r[1]+0x00000020u,c->r[31]); // 800C574C
  c->r[3]=c->r[1]+0x00000020u; // 800C5750
  c->r[28]=c->r[1]+0x00000024u; // 800C5754
  W8(c->r[1]+0x00000024u,c->r[31]); // 800C5758
  c->lr=0x800C5760u; f_8004E870(c); // 800C575C
  c->r[29]=c->r[3]|c->r[3]; // 800C5760
  c->r[3]=c->r[28]|c->r[28]; // 800C5764
  c->lr=0x800C576Cu; f_80046280(c); // 800C5768
  c->r[4]=0u+0x806D0000u; // 800C576C
  c->r[5]=R32(c->r[29]+0x00000018u); // 800C5770
  c->r[4]=c->r[4]+0x00007280u; // 800C5774
  c->r[6]=0u+0x00000001u; // 800C5778
  c->lr=0x800C5780u; f_8029FA80(c); // 800C577C
  W8(c->r[1]+0x0000001Cu,c->r[31]); // 800C5780
  c->r[3]=c->r[1]+0x0000001Cu; // 800C5784
  c->lr=0x800C578Cu; f_80047A80(c); // 800C5788
  c->r[4]=0u+0x00000000u; // 800C578C
  c->lr=0x800C5794u; f_8029AF18(c); // 800C5790
  W8(c->r[1]+0x00000018u,c->r[31]); // 800C5794
  c->r[3]=c->r[1]+0x00000018u; // 800C5798
  c->lr=0x800C57A0u; f_800482E8(c); // 800C579C
  {uint32_t ea=c->r[2]+0xFFFFA2D0u; c->f[1]=c->ps1[1]=RF32(ea);} // 800C57A0
  c->r[5]=0u+0x00990000u; // 800C57A4
  c->r[6]=R8(c->r[27]+0x0000000Cu); // 800C57A8
  c->r[8]=c->r[5]+0xFFFF9680u; // 800C57AC
  c->f[2]=c->f[1]; // 800C57B0
  {uint32_t ea=c->r[2]+0xFFFFA2D4u; c->f[3]=c->ps1[3]=RF32(ea);} // 800C57B4
  {uint32_t ea=c->r[2]+0xFFFFA2D8u; c->f[4]=c->ps1[4]=RF32(ea);} // 800C57B8
  c->r[4]=c->r[30]|c->r[30]; // 800C57BC
  {uint32_t ea=c->r[2]+0xFFFFA2DCu; c->f[5]=c->ps1[5]=RF32(ea);} // 800C57C0
  c->r[6]=(uint32_t)(int32_t)(int8_t)c->r[6]; // 800C57C4
  c->r[5]=0u+0x00600000u; // 800C57C8
  c->r[7]=0u+0x00000001u; // 800C57CC
  c->r[9]=0u+0x00000280u; // 800C57D0
  c->r[10]=0u+0x000001E0u; // 800C57D4
  c->lr=0x800C57DCu; f_8004AE68(c); // 800C57D8
  W8(c->r[1]+0x00000014u,c->r[31]); // 800C57DC
  c->r[3]=c->r[1]+0x00000014u; // 800C57E0
  c->lr=0x800C57E8u; f_800482E8(c); // 800C57E4
  c->lr=0x800C57ECu; f_8004B1D8(c); // 800C57E8
  W8(c->r[1]+0x00000010u,c->r[31]); // 800C57EC
  c->r[3]=c->r[1]+0x00000010u; // 800C57F0
  c->r[30]=0u+0x00000002u; // 800C57F4
  c->lr=0x800C57FCu; f_8004E870(c); // 800C57F8
  W32(c->r[3]+0x00000028u,c->r[30]); // 800C57FC
  c->r[3]=c->r[1]+0x0000000Cu; // 800C5800
  W8(c->r[1]+0x0000000Cu,c->r[31]); // 800C5804
  c->lr=0x800C580Cu; f_8004E870(c); // 800C5808
  W8(c->r[3]+0x00000030u,c->r[31]); // 800C580C
L_800C5810:;
  c->r[0]=0u+0x00000000u; // 800C5810
  W8(c->r[1]+0x00000008u,c->r[0]); // 800C5814
  c->r[3]=c->r[1]+0x00000008u; // 800C5818
  c->lr=0x800C5820u; f_80046EFC(c); // 800C581C
  c->r[4]=0u+0x00000009u; // 800C5820
  c->r[5]=0u+0x00000001u; // 800C5824
  c->r[6]=0u+0xFFFFFFFFu; // 800C5828
  c->lr=0x800C5830u; f_800B1DE0(c); // 800C582C
  c->lr=0x800C5834u; f_80049CC8(c); // 800C5830
  c->r[4]=0u+0x00000001u; // 800C5834
  c->lr=0x800C583Cu; f_800FC6C0(c); // 800C5838
  c->r[3]=0u+0x00000001u; // 800C583C
L_800C5840:;
  c->r[11]=c->r[1]+0x00000070u; // 800C5840
  {uint32_t ea=c->r[1]+0x00000078u; psq_load(c,31,ea,0,0);} // 800C5844
  {uint32_t ea=c->r[1]+0x00000070u; c->f[31]=RF64(ea);} // 800C5848
  c->lr=0x800C5850u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800C584C
  c->r[0]=R32(c->r[1]+0x00000084u); // 800C5850
  c->lr=c->r[0]; // 800C5854
  c->r[1]=c->r[1]+0x00000080u; // 800C5858
  return; // 800C585C
}

// fn_800C5860
void f_800C5860(Ctx* __restrict c) {
  trace_call(0x800C5860u);
  c->r[4]=0u+0xFFFFFFFFu; // 800C5860
  f_800C5CD4(c); return; // 800C5864
}

// fn_800C5868
void f_800C5868(Ctx* __restrict c) {
  trace_call(0x800C5868u);
  {uint32_t ea=c->r[1]+0xFFFFFF80u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C5868
  c->r[0]=c->lr; // 800C586C
  W32(c->r[1]+0x00000084u,c->r[0]); // 800C5870
  c->r[11]=c->r[1]+0x00000070u; // 800C5874
  {uint32_t ea=c->r[1]+0x00000070u; WF64(ea,c->f[31]);} // 800C5878
  {uint32_t ea=c->r[1]+0x00000078u; psq_store(c,31,ea,0,0);} // 800C587C
  c->lr=0x800C5884u; f_803A9BD0(c); // 800C5880
  c->r[16]=0u+0x80730000u; // 800C5884
  c->r[14]=0u+0x806D0000u; // 800C5888
  c->r[17]=c->r[16]+0x00006378u; // 800C588C
  c->r[15]=c->r[3]|c->r[3]; // 800C5890
  c->r[14]=c->r[14]+0xFFFFC340u; // 800C5894
  c->r[18]=0u+0x00000000u; // 800C5898
  c->r[21]=0u+0x80050000u; // 800C589C
  c->r[20]=0u+0x80750000u; // 800C58A0
  c->r[19]=0u+0x00000001u; // 800C58A4
L_800C58A8:;
  c->r[0]=R8(c->r[13]+0xFFFFBB88u); // 800C58A8
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800C58AC
  if (!crb(c,2)) { goto L_800C58DC; } // 800C58B0
  c->r[3]=c->r[16]+0x00006378u; // 800C58B4
  c->lr=0x800C58BCu; f_800B0D5C(c); // 800C58B8
  c->r[0]=c->r[14]+0x00000028u; // 800C58BC
  W32(c->r[17]+0x000000A4u,c->r[14]); // 800C58C0
  c->r[3]=c->r[17]|c->r[17]; // 800C58C4
  c->r[4]=c->r[21]+0xFFFF9F20u; // 800C58C8
  W32(c->r[17]+0x000000A8u,c->r[0]); // 800C58CC
  c->r[5]=c->r[20]+0x0000380Cu; // 800C58D0
  c->lr=0x800C58D8u; f_803A92B8(c); // 800C58D4
  W8(c->r[13]+0xFFFFBB88u,c->r[19]); // 800C58D8
L_800C58DC:;
  c->r[3]=c->r[17]|c->r[17]; // 800C58DC
  c->r[4]=c->r[18]|c->r[18]; // 800C58E0
  c->lr=0x800C58E8u; f_80046E74(c); // 800C58E4
  c->r[0]=cntlz(c->r[3]); // 800C58E8
  W32(c->r[1]+0x00000014u,c->r[4]); // 800C58EC
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; cr0(c,c->r[0]); // 800C58F0
  W32(c->r[1]+0x00000010u,c->r[3]); // 800C58F4
  if (!crb(c,2)) { goto L_800C5934; } // 800C58F8
  c->r[3]=c->r[17]|c->r[17]; // 800C58FC
  c->r[4]=c->r[18]|c->r[18]; // 800C5900
  c->lr=0x800C5908u; f_80046E74(c); // 800C5904
  W32(c->r[1]+0x00000018u,c->r[3]); // 800C5908
  c->r[3]=c->r[1]+0x00000018u; // 800C590C
  W32(c->r[1]+0x0000001Cu,c->r[4]); // 800C5910
  c->lr=0x800C5918u; f_80046E94(c); // 800C5914
  c->r[3]=R32(c->r[3]+0x00000000u); // 800C5918
  c->r[0]=R32(c->r[1]+0x00000018u); // 800C591C
  c->r[3]=c->r[3]-c->r[0]; // 800C5920
  c->r[0]=addc(c,c->r[3],0xFFFFFFFFu,0); // 800C5924
  c->r[3]=addc(c,~c->r[0],c->r[3],c->xer_ca); // 800C5928
  c->r[0]=addc(c,c->r[3],0xFFFFFFFFu,0); // 800C592C
  c->r[0]=addc(c,~c->r[0],c->r[3],c->xer_ca); // 800C5930
L_800C5934:;
  cmps(c,0,(int32_t)c->r[0],0); // 800C5934
  if (crb(c,2)) { goto L_800C5944; } // 800C5938
  c->r[3]=0u+0x00000000u; // 800C593C
  goto L_800C5964; // 800C5940
L_800C5944:;
  c->r[3]=c->r[17]|c->r[17]; // 800C5944
  c->r[4]=c->r[18]|c->r[18]; // 800C5948
  c->lr=0x800C5950u; f_80046E74(c); // 800C594C
  W32(c->r[1]+0x00000020u,c->r[3]); // 800C5950
  c->r[3]=c->r[1]+0x00000020u; // 800C5954
  W32(c->r[1]+0x00000024u,c->r[4]); // 800C5958
  c->lr=0x800C5960u; f_80046E94(c); // 800C595C
  c->r[3]=R32(c->r[3]+0x00000004u); // 800C5960
L_800C5964:;
  c->r[0]=R32(c->r[3]+0x0000033Cu); // 800C5964
  c->r[0]=rotl(c->r[0],0)&0x00000080u; cr0(c,c->r[0]); // 800C5968
  if (!crb(c,2)) { goto L_800C597C; } // 800C596C
  c->r[18]=c->r[18]+0x00000001u; // 800C5970
  cmps(c,0,(int32_t)c->r[18],2); // 800C5974
  if (crb(c,0)) { IRQCHK(c); goto L_800C58A8; } // 800C5978
L_800C597C:;
  cmps(c,0,(int32_t)c->r[18],2); // 800C597C
  if (crb(c,0)) { goto L_800C5CA0; } // 800C5980
  c->r[22]=0u+0x80740000u; // 800C5984
  c->r[23]=0u+0x806D0000u; // 800C5988
  c->r[26]=0u+0x80730000u; // 800C598C
  c->r[27]=0u+0x806D0000u; // 800C5990
  c->r[30]=0u+0x806D0000u; // 800C5994
  {uint32_t ea=c->r[2]+0xFFFFA2E0u; c->f[31]=c->ps1[31]=RF32(ea);} // 800C5998
  c->r[29]=0u+0x80730000u; // 800C599C
  c->r[23]=c->r[23]+0xFFFFCD54u; // 800C59A0
  c->r[24]=c->r[22]+0xFFFFFF5Cu; // 800C59A4
  c->r[27]=c->r[27]+0xFFFFC37Cu; // 800C59A8
  c->r[28]=c->r[26]+0x00006160u; // 800C59AC
  c->r[30]=c->r[30]+0xFFFFC220u; // 800C59B0
  c->r[16]=0u+0x00000000u; // 800C59B4
  c->r[31]=0u+0x00000000u; // 800C59B8
  c->r[21]=0u+0x00000000u; // 800C59BC
  c->r[14]=0u+0x80050000u; // 800C59C0
  c->r[25]=0u+0x00000001u; // 800C59C4
L_800C59C8:;
  c->r[17]=c->r[15]+c->r[31]; // 800C59C8
  c->r[0]=R32(c->r[17]+0x00000118u); // 800C59CC
  cmps(c,0,(int32_t)c->r[0],0); // 800C59D0
  if (crb(c,0)) { goto L_800C5C90; } // 800C59D4
  W8(c->r[1]+0x0000000Cu,c->r[21]); // 800C59D8
  c->r[3]=c->r[1]+0x0000000Cu; // 800C59DC
  c->lr=0x800C59E4u; f_8004DBC0(c); // 800C59E0
  c->r[4]=R32(c->r[17]+0x00000098u); // 800C59E4
  c->lr=0x800C59ECu; f_80099348(c); // 800C59E8
  cmps(c,0,(int32_t)c->r[3],0); // 800C59EC
  if (crb(c,2)) { goto L_800C5A10; } // 800C59F0
  W8(c->r[1]+0x00000008u,c->r[21]); // 800C59F4
  c->r[3]=c->r[1]+0x00000008u; // 800C59F8
  c->lr=0x800C5A00u; f_8004DBC0(c); // 800C59FC
  c->lr=0x800C5A04u; f_80099108(c); // 800C5A00
  c->r[0]=R32(c->r[17]+0x00000098u); // 800C5A04
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[3]); // 800C5A08
  if (crb(c,2)) { goto L_800C5A20; } // 800C5A0C
L_800C5A10:;
  c->r[3]=c->r[15]|c->r[15]; // 800C5A10
  c->r[4]=c->r[16]|c->r[16]; // 800C5A14
  c->lr=0x800C5A1Cu; f_800C5CD4(c); // 800C5A18
  goto L_800C5C90; // 800C5A1C
L_800C5A20:;
  {uint32_t ea=c->r[17]+0x00000018u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C5A20
  fcmp(c,0,c->f[0],c->f[31]); // 800C5A24
  setcrb(c,2,crb(c,0)|crb(c,2)); // 800C5A28
  if (!crb(c,2)) { goto L_800C5C44; } // 800C5A2C
  c->r[0]=R8(c->r[13]+0xFFFFBBF0u); // 800C5A30
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800C5A34
  if (!crb(c,2)) { goto L_800C5A68; } // 800C5A38
  c->r[3]=c->r[22]+0xFFFFFF5Cu; // 800C5A3C
  c->lr=0x800C5A44u; f_800A1FCC(c); // 800C5A40
  c->r[0]=c->r[23]+0x00000028u; // 800C5A44
  c->r[5]=0u+0x80750000u; // 800C5A48
  W32(c->r[24]+0x000000A4u,c->r[23]); // 800C5A4C
  c->r[3]=c->r[24]|c->r[24]; // 800C5A50
  c->r[4]=c->r[14]+0x000009E8u; // 800C5A54
  c->r[5]=c->r[5]+0x00003818u; // 800C5A58
  W32(c->r[24]+0x000000A8u,c->r[0]); // 800C5A5C
  c->lr=0x800C5A64u; f_803A92B8(c); // 800C5A60
  W8(c->r[13]+0xFFFFBBF0u,c->r[25]); // 800C5A64
L_800C5A68:;
  c->r[0]=0u+0x00000004u; // 800C5A68
  c->r[20]=R32(c->r[17]+0x00000118u); // 800C5A6C
  c->r[6]=0u+0x00000000u; // 800C5A70
  c->r[5]=R32(c->r[17]+0x00000098u); // 800C5A74
  c->r[3]=0u+0x00000000u; // 800C5A78
  c->ctr=c->r[0]; // 800C5A7C
L_800C5A80:;
  c->r[4]=c->r[24]+c->r[3]; // 800C5A80
  c->r[0]=R32(c->r[4]+0x00000958u); // 800C5A84
  cmps(c,0,(int32_t)c->r[5],(int32_t)c->r[0]); // 800C5A88
  if (crb(c,2)) { goto L_800C5A9C; } // 800C5A8C
  c->r[6]=c->r[6]+0x00000001u; // 800C5A90
  c->r[3]=c->r[3]+0x000008B0u; // 800C5A94
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800C5A80; } // 800C5A98
L_800C5A9C:;
  cmps(c,0,(int32_t)c->r[6],4); // 800C5A9C
  c->r[0]=0u+0xFFFFFFFFu; // 800C5AA0
  if (!crb(c,0)) { goto L_800C5AAC; } // 800C5AA4
  c->r[0]=c->r[6]|c->r[6]; // 800C5AA8
L_800C5AAC:;
  cmps(c,0,(int32_t)c->r[0],0); // 800C5AAC
  if (crb(c,0)) { goto L_800C5C38; } // 800C5AB0
  c->r[18]=(uint32_t)((int32_t)c->r[0]*(int32_t)2224); // 800C5AB4
  c->r[4]=c->r[20]|c->r[20]; // 800C5AB8
  c->r[3]=c->r[24]+c->r[18]; // 800C5ABC
  c->r[3]=c->r[3]+0x00000130u; // 800C5AC0
  c->lr=0x800C5AC8u; f_800A1D5C(c); // 800C5AC4
  cmps(c,0,(int32_t)c->r[3],0); // 800C5AC8
  c->r[19]=c->r[3]|c->r[3]; // 800C5ACC
  if (crb(c,2)) { goto L_800C5C38; } // 800C5AD0
  cmpu(c,0,c->r[20],0x000003FFu); // 800C5AD4
  c->r[0]=c->r[20]|c->r[20]; // 800C5AD8
  if (!crb(c,1)) { goto L_800C5AE4; } // 800C5ADC
  c->r[0]=0u+0x00000000u; // 800C5AE0
L_800C5AE4:;
  c->r[4]=c->r[24]+c->r[18]; // 800C5AE4
  c->r[3]=rotl(c->r[0],0)&0x00000007u; // 800C5AE8
  c->r[17]=c->r[4]+0x000000B0u; // 800C5AEC
  c->r[0]=sraw(c,c->r[0],3); // 800C5AF0
  c->r[0]=R8(c->r[17]+c->r[0]); // 800C5AF4
  c->r[3]=((c->r[3])&0x20)?0u:(c->r[25]<<((c->r[3])&31)); // 800C5AF8
  c->r[0]=c->r[3]&c->r[0]; cr0(c,c->r[0]); // 800C5AFC
  if (!crb(c,2)) { goto L_800C5B58; } // 800C5B00
  c->r[0]=R8(c->r[13]+0xFFFFBB87u); // 800C5B04
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800C5B08
  if (!crb(c,2)) { goto L_800C5B40; } // 800C5B0C
  c->r[3]=c->r[26]+0x00006160u; // 800C5B10
  c->lr=0x800C5B18u; f_8008C1BC(c); // 800C5B14
  c->r[0]=c->r[27]+0x00000028u; // 800C5B18
  c->r[4]=0u+0x80050000u; // 800C5B1C
  c->r[5]=0u+0x80750000u; // 800C5B20
  W32(c->r[28]+0x000000A4u,c->r[27]); // 800C5B24
  c->r[3]=c->r[28]|c->r[28]; // 800C5B28
  c->r[4]=c->r[4]+0xFFFF9F5Cu; // 800C5B2C
  W32(c->r[28]+0x000000A8u,c->r[0]); // 800C5B30
  c->r[5]=c->r[5]+0x00003800u; // 800C5B34
  c->lr=0x800C5B3Cu; f_803A92B8(c); // 800C5B38
  W8(c->r[13]+0xFFFFBB87u,c->r[25]); // 800C5B3C
L_800C5B40:;
  c->r[4]=c->r[19]|c->r[19]; // 800C5B40
  c->r[3]=c->r[26]+0x00006160u; // 800C5B44
  c->lr=0x800C5B4Cu; f_8008CD98(c); // 800C5B48
  c->r[3]=c->r[24]+c->r[18]; // 800C5B4C
  c->r[0]=0u+0x00000002u; // 800C5B50
  W32(c->r[3]+0x00000950u,c->r[0]); // 800C5B54
L_800C5B58:;
  cmpu(c,0,c->r[20],0x000003FFu); // 800C5B58
  if (!crb(c,1)) { goto L_800C5B64; } // 800C5B5C
  c->r[20]=0u+0x00000000u; // 800C5B60
L_800C5B64:;
  c->r[4]=sraw(c,c->r[20],3); // 800C5B64
  c->r[0]=rotl(c->r[20],0)&0x00000007u; // 800C5B68
  c->r[0]=((c->r[0])&0x20)?0u:(c->r[25]<<((c->r[0])&31)); // 800C5B6C
  c->r[3]=R8(c->r[17]+c->r[4]); // 800C5B70
  c->r[0]=rotl(c->r[0],0)&0x000000FFu; // 800C5B74
  c->r[0]=c->r[3]|c->r[0]; // 800C5B78
  W8(c->r[17]+c->r[4],c->r[0]); // 800C5B7C
  c->r[0]=R8(c->r[19]+0x00000000u); // 800C5B80
  cmps(c,0,(int32_t)c->r[0],71); // 800C5B84
  if (!crb(c,2)) { goto L_800C5BB0; } // 800C5B88
  c->r[0]=R8(c->r[19]+0x00000001u); // 800C5B8C
  cmps(c,0,(int32_t)c->r[0],95); // 800C5B90
  if (!crb(c,2)) { goto L_800C5BB0; } // 800C5B94
  c->r[3]=c->r[19]+0x00000002u; // 800C5B98
  c->lr=0x800C5BA0u; f_803B613C(c); // 800C5B9C
  cmpu(c,0,c->r[3],0x000003FFu); // 800C5BA0
  if (!crb(c,1)) { goto L_800C5BB4; } // 800C5BA4
  c->r[3]=0u+0xFFFFFFFFu; // 800C5BA8
  goto L_800C5BB4; // 800C5BAC
L_800C5BB0:;
  c->r[3]=0u+0xFFFFFFFFu; // 800C5BB0
L_800C5BB4:;
  cmpu(c,0,c->r[3],0x000003FFu); // 800C5BB4
  if (crb(c,1)) { goto L_800C5BDC; } // 800C5BB8
  c->r[4]=sraw(c,c->r[3],3); // 800C5BBC
  c->r[0]=rotl(c->r[3],0)&0x00000007u; // 800C5BC0
  c->r[4]=c->r[24]+c->r[4]; // 800C5BC4
  c->r[0]=((c->r[0])&0x20)?0u:(c->r[25]<<((c->r[0])&31)); // 800C5BC8
  c->r[3]=R8(c->r[4]+0x0000236Cu); // 800C5BCC
  c->r[0]=rotl(c->r[0],0)&0x000000FFu; // 800C5BD0
  c->r[0]=c->r[3]|c->r[0]; // 800C5BD4
  W8(c->r[4]+0x0000236Cu,c->r[0]); // 800C5BD8
L_800C5BDC:;
  c->r[0]=R8(c->r[19]+0x00000000u); // 800C5BDC
  cmps(c,0,(int32_t)c->r[0],67); // 800C5BE0
  if (!crb(c,2)) { goto L_800C5C0C; } // 800C5BE4
  c->r[0]=R8(c->r[19]+0x00000001u); // 800C5BE8
  cmps(c,0,(int32_t)c->r[0],95); // 800C5BEC
  if (!crb(c,2)) { goto L_800C5C0C; } // 800C5BF0
  c->r[3]=c->r[19]+0x00000002u; // 800C5BF4
  c->lr=0x800C5BFCu; f_803B613C(c); // 800C5BF8
  cmpu(c,0,c->r[3],0x0000003Fu); // 800C5BFC
  if (!crb(c,1)) { goto L_800C5C10; } // 800C5C00
  c->r[3]=0u+0xFFFFFFFFu; // 800C5C04
  goto L_800C5C10; // 800C5C08
L_800C5C0C:;
  c->r[3]=0u+0xFFFFFFFFu; // 800C5C0C
L_800C5C10:;
  cmpu(c,0,c->r[3],0x0000003Fu); // 800C5C10
  if (crb(c,1)) { goto L_800C5C38; } // 800C5C14
  c->r[4]=sraw(c,c->r[3],3); // 800C5C18
  c->r[0]=rotl(c->r[3],0)&0x00000007u; // 800C5C1C
  c->r[4]=c->r[24]+c->r[4]; // 800C5C20
  c->r[0]=((c->r[0])&0x20)?0u:(c->r[25]<<((c->r[0])&31)); // 800C5C24
  c->r[3]=R8(c->r[4]+0x000023ECu); // 800C5C28
  c->r[0]=rotl(c->r[0],0)&0x000000FFu; // 800C5C2C
  c->r[0]=c->r[3]|c->r[0]; // 800C5C30
  W8(c->r[4]+0x000023ECu,c->r[0]); // 800C5C34
L_800C5C38:;
  c->r[3]=c->r[15]|c->r[15]; // 800C5C38
  c->r[4]=c->r[16]|c->r[16]; // 800C5C3C
  c->lr=0x800C5C44u; f_800C5CD4(c); // 800C5C40
L_800C5C44:;
  c->r[0]=R8(c->r[13]+0xFFFFBB9Bu); // 800C5C44
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800C5C48
  if (!crb(c,2)) { goto L_800C5C78; } // 800C5C4C
  c->r[3]=c->r[29]+0x00006D10u; // 800C5C50
  c->lr=0x800C5C58u; f_802D8298(c); // 800C5C54
  c->r[4]=0u+0x80050000u; // 800C5C58
  c->r[5]=0u+0x80750000u; // 800C5C5C
  W32(c->r[29]+0x00006D10u,c->r[30]); // 800C5C60
  c->r[3]=c->r[29]+0x00006D10u; // 800C5C64
  c->r[4]=c->r[4]+0xFFFF9D40u; // 800C5C68
  c->r[5]=c->r[5]+0x00003824u; // 800C5C6C
  c->lr=0x800C5C74u; f_803A92B8(c); // 800C5C70
  W8(c->r[13]+0xFFFFBB9Bu,c->r[25]); // 800C5C74
L_800C5C78:;
  c->r[4]=c->r[15]+c->r[31]; // 800C5C78
  c->r[3]=c->r[29]+0x00006D10u; // 800C5C7C
  {uint32_t ea=c->r[3]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 800C5C80
  {uint32_t ea=c->r[4]+0x00000018u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C5C84
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 800C5C88
  {uint32_t ea=c->r[4]+0x00000018u; WF32(ea,c->f[0]);} // 800C5C8C
L_800C5C90:;
  c->r[16]=c->r[16]+0x00000001u; // 800C5C90
  c->r[31]=c->r[31]+0x00000004u; // 800C5C94
  cmps(c,0,(int32_t)c->r[16],32); // 800C5C98
  if (crb(c,0)) { IRQCHK(c); goto L_800C59C8; } // 800C5C9C
L_800C5CA0:;
  c->r[11]=c->r[1]+0x00000070u; // 800C5CA0
  {uint32_t ea=c->r[1]+0x00000078u; psq_load(c,31,ea,0,0);} // 800C5CA4
  {uint32_t ea=c->r[1]+0x00000070u; c->f[31]=RF64(ea);} // 800C5CA8
  c->lr=0x800C5CB0u; f_803A9C1C(c); // 800C5CAC
  c->r[0]=R32(c->r[1]+0x00000084u); // 800C5CB0
  c->lr=c->r[0]; // 800C5CB4
  c->r[1]=c->r[1]+0x00000080u; // 800C5CB8
  return; // 800C5CBC
}

// fn_800C5CC0
void f_800C5CC0(Ctx* __restrict c) {
  trace_call(0x800C5CC0u);
  c->r[3]=0u+0x0000000Du; // 800C5CC0
  return; // 800C5CC4
}

// fn_800C5CC8
void f_800C5CC8(Ctx* __restrict c) {
  trace_call(0x800C5CC8u);
  c->r[3]=0u+0x800C0000u; // 800C5CC8
  c->r[3]=c->r[3]+0x00005D48u; // 800C5CCC
  return; // 800C5CD0
}

// fn_800C5CD4
void f_800C5CD4(Ctx* __restrict c) {
  trace_call(0x800C5CD4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C5CD4
  c->r[0]=c->lr; // 800C5CD8
  cmpu(c,0,c->r[4],0x0000001Fu); // 800C5CDC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800C5CE0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800C5CE4
  W32(c->r[1]+0x00000008u,c->r[30]); // 800C5CE8
  c->r[30]=c->r[3]|c->r[3]; // 800C5CEC
  if (!crb(c,1)) { goto L_800C5D14; } // 800C5CF0
  c->r[31]=0u+0x00000000u; // 800C5CF4
L_800C5CF8:;
  c->r[3]=c->r[30]|c->r[30]; // 800C5CF8
  c->r[4]=c->r[31]|c->r[31]; // 800C5CFC
  c->lr=0x800C5D04u; f_800C5CD4(c); // 800C5D00
  c->r[31]=c->r[31]+0x00000001u; // 800C5D04
  cmps(c,0,(int32_t)c->r[31],32); // 800C5D08
  if (crb(c,0)) { IRQCHK(c); goto L_800C5CF8; } // 800C5D0C
  goto L_800C5D30; // 800C5D10
L_800C5D14:;
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFFCu; // 800C5D14
  {uint32_t ea=c->r[2]+0xFFFFA2E0u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C5D18
  c->r[3]=c->r[3]+c->r[0]; // 800C5D1C
  {uint32_t ea=c->r[3]+0x00000018u; WF32(ea,c->f[0]);} // 800C5D20
  c->r[0]=0u+0xFFFFFFFFu; // 800C5D24
  W32(c->r[3]+0x00000098u,c->r[0]); // 800C5D28
  W32(c->r[3]+0x00000118u,c->r[0]); // 800C5D2C
L_800C5D30:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800C5D30
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800C5D34
  c->r[30]=R32(c->r[1]+0x00000008u); // 800C5D38
  c->lr=c->r[0]; // 800C5D3C
  c->r[1]=c->r[1]+0x00000010u; // 800C5D40
  return; // 800C5D44
}

// fn_800C5D48
void f_800C5D48(Ctx* __restrict c) {
  trace_call(0x800C5D48u);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C5D48
  c->r[0]=c->lr; // 800C5D4C
  W32(c->r[1]+0x00000054u,c->r[0]); // 800C5D50
  c->r[11]=c->r[1]+0x00000040u; // 800C5D54
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[31]);} // 800C5D58
  {uint32_t ea=c->r[1]+0x00000048u; psq_store(c,31,ea,0,0);} // 800C5D5C
  c->lr=0x800C5D64u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800C5D60
  c->r[3]=R32(c->r[4]+0x00000000u); // 800C5D64
  c->r[27]=c->r[5]|c->r[5]; // 800C5D68
  c->r[0]=c->r[3]+0xABB70000u; // 800C5D6C
  cmpu(c,0,c->r[0],0x00004D00u); // 800C5D70
  if (crb(c,2)) { goto L_800C5D80; } // 800C5D74
  c->r[3]=0u+0x00000001u; // 800C5D78
  goto L_800C5EB8; // 800C5D7C
L_800C5D80:;
  c->r[0]=R32(c->r[4]+0x00000004u); // 800C5D80
  cmps(c,0,(int32_t)c->r[0],0); // 800C5D84
  if (crb(c,2)) { goto L_800C5D94; } // 800C5D88
  c->r[3]=0u+0x00000001u; // 800C5D8C
  goto L_800C5EB8; // 800C5D90
L_800C5D94:;
  c->r[0]=R32(c->r[4]+0x00000008u); // 800C5D94
  c->r[28]=c->r[4]+c->r[0]; // 800C5D98
  c->r[0]=R32(c->r[28]+0x00000008u); // 800C5D9C
  cmps(c,0,(int32_t)c->r[0],0); // 800C5DA0
  if (crb(c,2)) { goto L_800C5DB4; } // 800C5DA4
  cmps(c,0,(int32_t)c->r[0],1); // 800C5DA8
  if (crb(c,2)) { goto L_800C5E3C; } // 800C5DAC
  goto L_800C5EB4; // 800C5DB0
L_800C5DB4:;
  c->r[29]=0u+0x00000000u; // 800C5DB4
  c->r[31]=0u+0x00000000u; // 800C5DB8
  c->r[30]=c->r[29]|c->r[29]; // 800C5DBC
L_800C5DC0:;
  W8(c->r[1]+0x00000020u,c->r[30]); // 800C5DC0
  c->r[3]=c->r[1]+0x00000020u; // 800C5DC4
  c->lr=0x800C5DCCu; f_8004E438(c); // 800C5DC8
  c->r[3]=c->r[3]+c->r[31]; // 800C5DCC
  c->r[0]=R32(c->r[3]+0x00000118u); // 800C5DD0
  cmps(c,0,(int32_t)c->r[0],0); // 800C5DD4
  if (!crb(c,0)) { goto L_800C5E28; } // 800C5DD8
  c->r[30]=0u+0x00000000u; // 800C5DDC
  W8(c->r[1]+0x0000001Cu,c->r[30]); // 800C5DE0
  c->r[3]=c->r[1]+0x0000001Cu; // 800C5DE4
  {uint32_t ea=c->r[28]+0x00000000u; c->f[31]=c->ps1[31]=RF32(ea);} // 800C5DE8
  c->lr=0x800C5DF0u; f_8004E438(c); // 800C5DEC
  c->r[3]=c->r[3]+c->r[31]; // 800C5DF0
  {uint32_t ea=c->r[3]+0x00000018u; WF32(ea,c->f[31]);} // 800C5DF4
  c->r[3]=c->r[1]+0x00000018u; // 800C5DF8
  W8(c->r[1]+0x00000018u,c->r[30]); // 800C5DFC
  c->lr=0x800C5E04u; f_8004E438(c); // 800C5E00
  c->r[3]=c->r[3]+c->r[31]; // 800C5E04
  W32(c->r[3]+0x00000098u,c->r[27]); // 800C5E08
  c->r[3]=c->r[1]+0x00000014u; // 800C5E0C
  W8(c->r[1]+0x00000014u,c->r[30]); // 800C5E10
  c->r[30]=R32(c->r[28]+0x00000004u); // 800C5E14
  c->lr=0x800C5E1Cu; f_8004E438(c); // 800C5E18
  c->r[3]=c->r[3]+c->r[31]; // 800C5E1C
  W32(c->r[3]+0x00000118u,c->r[30]); // 800C5E20
  goto L_800C5EB4; // 800C5E24
L_800C5E28:;
  c->r[29]=c->r[29]+0x00000001u; // 800C5E28
  c->r[31]=c->r[31]+0x00000004u; // 800C5E2C
  cmps(c,0,(int32_t)c->r[29],32); // 800C5E30
  if (crb(c,0)) { IRQCHK(c); goto L_800C5DC0; } // 800C5E34
  goto L_800C5EB4; // 800C5E38
L_800C5E3C:;
  c->r[0]=R32(c->r[28]+0x00000004u); // 800C5E3C
  cmps(c,0,(int32_t)c->r[0],0); // 800C5E40
  if (!crb(c,0)) { goto L_800C5E64; } // 800C5E44
  c->r[0]=0u+0x00000000u; // 800C5E48
  W8(c->r[1]+0x00000010u,c->r[0]); // 800C5E4C
  c->r[3]=c->r[1]+0x00000010u; // 800C5E50
  c->lr=0x800C5E58u; f_8004E438(c); // 800C5E54
  c->r[4]=0u+0xFFFFFFFFu; // 800C5E58
  c->lr=0x800C5E60u; f_800C5CD4(c); // 800C5E5C
  goto L_800C5EB4; // 800C5E60
L_800C5E64:;
  c->r[29]=0u+0x00000000u; // 800C5E64
  c->r[31]=0u+0x00000000u; // 800C5E68
  c->r[30]=0u+0x00000000u; // 800C5E6C
L_800C5E70:;
  W8(c->r[1]+0x0000000Cu,c->r[30]); // 800C5E70
  c->r[3]=c->r[1]+0x0000000Cu; // 800C5E74
  c->lr=0x800C5E7Cu; f_8004E438(c); // 800C5E78
  c->r[3]=c->r[3]+c->r[31]; // 800C5E7C
  c->r[0]=R32(c->r[28]+0x00000004u); // 800C5E80
  c->r[3]=R32(c->r[3]+0x00000118u); // 800C5E84
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[3]); // 800C5E88
  if (!crb(c,2)) { goto L_800C5EA4; } // 800C5E8C
  W8(c->r[1]+0x00000008u,c->r[30]); // 800C5E90
  c->r[3]=c->r[1]+0x00000008u; // 800C5E94
  c->lr=0x800C5E9Cu; f_8004E438(c); // 800C5E98
  c->r[4]=c->r[29]|c->r[29]; // 800C5E9C
  c->lr=0x800C5EA4u; f_800C5CD4(c); // 800C5EA0
L_800C5EA4:;
  c->r[29]=c->r[29]+0x00000001u; // 800C5EA4
  c->r[31]=c->r[31]+0x00000004u; // 800C5EA8
  cmps(c,0,(int32_t)c->r[29],32); // 800C5EAC
  if (crb(c,0)) { IRQCHK(c); goto L_800C5E70; } // 800C5EB0
L_800C5EB4:;
  c->r[3]=0u+0x00000001u; // 800C5EB4
L_800C5EB8:;
  c->r[11]=c->r[1]+0x00000040u; // 800C5EB8
  {uint32_t ea=c->r[1]+0x00000048u; psq_load(c,31,ea,0,0);} // 800C5EBC
  {uint32_t ea=c->r[1]+0x00000040u; c->f[31]=RF64(ea);} // 800C5EC0
  c->lr=0x800C5EC8u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800C5EC4
  c->r[0]=R32(c->r[1]+0x00000054u); // 800C5EC8
  c->lr=c->r[0]; // 800C5ECC
  c->r[1]=c->r[1]+0x00000050u; // 800C5ED0
  return; // 800C5ED4
}

// fn_800C5ED8
void f_800C5ED8(Ctx* __restrict c) {
  trace_call(0x800C5ED8u);
  c->r[0]=0u+0x00000000u; // 800C5ED8
  W8(c->r[3]+0x00000018u,c->r[0]); // 800C5EDC
  return; // 800C5EE0
}

