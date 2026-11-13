#include "funcs.h"
#pragma GCC diagnostic ignored "-Wunused-label"

// GKI_create_pool
void f_803CE410(Ctx* __restrict c) {
  trace_call(0x803CE410u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803CE410
  c->r[0]=c->lr; // 803CE414
  W32(c->r[1]+0x00000024u,c->r[0]); // 803CE418
  c->r[11]=c->r[1]+0x00000020u; // 803CE41C
  c->lr=0x803CE424u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 803CE420
  c->r[7]=0u+0x80790000u; // 803CE424
  cmpu(c,0,c->r[3],0x0000FFF3u); // 803CE428
  c->r[7]=c->r[7]+0xFFFF9EE0u; // 803CE42C
  c->r[27]=c->r[3]|c->r[3]; // 803CE430
  c->r[28]=c->r[4]|c->r[4]; // 803CE434
  c->r[29]=c->r[5]|c->r[5]; // 803CE438
  c->r[30]=c->r[7]+0x00000054u; // 803CE43C
  if (!crb(c,1)) { goto L_803CE44C; } // 803CE440
  c->r[3]=0u+0x000000FFu; // 803CE444
  goto L_803CE740; // 803CE448
L_803CE44C:;
  c->r[0]=0u+0x00000003u; // 803CE44C
  c->r[31]=0u+0x00000000u; // 803CE450
  c->ctr=c->r[0]; // 803CE454
L_803CE458:;
  c->r[5]=rotl(c->r[31],2)&0x000003FCu; // 803CE458
  c->r[5]=c->r[5]+0x00030000u; // 803CE45C
  c->r[0]=c->r[5]+0xFFFF8A1Cu; // 803CE460
  c->r[0]=R32(c->r[30]+c->r[0]); // 803CE464
  cmps(c,0,(int32_t)c->r[0],0); // 803CE468
  if (crb(c,2)) { goto L_803CE4B0; } // 803CE46C
  c->r[31]=c->r[31]+0x00000001u; // 803CE470
  c->r[5]=rotl(c->r[31],2)&0x000003FCu; // 803CE474
  c->r[5]=c->r[5]+0x00030000u; // 803CE478
  c->r[0]=c->r[5]+0xFFFF8A1Cu; // 803CE47C
  c->r[0]=R32(c->r[30]+c->r[0]); // 803CE480
  cmps(c,0,(int32_t)c->r[0],0); // 803CE484
  if (crb(c,2)) { goto L_803CE4B0; } // 803CE488
  c->r[31]=c->r[31]+0x00000001u; // 803CE48C
  c->r[5]=rotl(c->r[31],2)&0x000003FCu; // 803CE490
  c->r[5]=c->r[5]+0x00030000u; // 803CE494
  c->r[0]=c->r[5]+0xFFFF8A1Cu; // 803CE498
  c->r[0]=R32(c->r[30]+c->r[0]); // 803CE49C
  cmps(c,0,(int32_t)c->r[0],0); // 803CE4A0
  if (crb(c,2)) { goto L_803CE4B0; } // 803CE4A4
  c->r[31]=c->r[31]+0x00000001u; // 803CE4A8
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_803CE458; } // 803CE4AC
L_803CE4B0:;
  c->r[0]=rotl(c->r[31],0)&0x000000FFu; // 803CE4B0
  cmpu(c,0,c->r[0],0x00000009u); // 803CE4B4
  if (!crb(c,2)) { goto L_803CE4C4; } // 803CE4B8
  c->r[3]=0u+0x000000FFu; // 803CE4BC
  goto L_803CE740; // 803CE4C0
L_803CE4C4:;
  c->r[0]=c->r[3]+0x00000003u; // 803CE4C4
  cmps(c,0,(int32_t)c->r[6],0); // 803CE4C8
  c->r[3]=rotl(c->r[0],0)&0xFFFFFFFCu; // 803CE4CC
  c->r[0]=c->r[3]+0x0000000Cu; // 803CE4D0
  c->r[3]=(uint32_t)((int32_t)c->r[0]*(int32_t)c->r[4]); // 803CE4D4
  if (!crb(c,2)) { goto L_803CE4E4; } // 803CE4D8
  c->lr=0x803CE4E0u; f_803CF070(c); // 803CE4DC
  c->r[6]=c->r[3]|c->r[3]; // 803CE4E0
L_803CE4E4:;
  cmps(c,0,(int32_t)c->r[6],0); // 803CE4E4
  if (crb(c,2)) { goto L_803CE73C; } // 803CE4E8
  c->r[4]=c->r[27]|c->r[27]; // 803CE4EC
  c->r[5]=c->r[28]|c->r[28]; // 803CE4F0
  c->r[3]=rotl(c->r[31],0)&0x000000FFu; // 803CE4F4
  c->lr=0x803CE4FCu; f_803CD474(c); // 803CE4F8
  c->r[3]=0u+0x80790000u; // 803CE4FC
  c->r[5]=rotl(c->r[31],4)&0x00000FF0u; // 803CE500
  c->r[3]=c->r[3]+0xFFFF9EE0u; // 803CE504
  c->r[4]=0u+0x00000000u; // 803CE508
  c->r[3]=c->r[3]+0x00000054u; // 803CE50C
  c->r[6]=c->r[5]+0x00030000u; // 803CE510
  c->r[5]=c->r[3]+0x00030000u; // 803CE514
  c->r[5]=R8(c->r[5]+0xFFFF8A87u); // 803CE518
  c->r[0]=c->r[6]+0xFFFF8994u; // 803CE51C
  c->r[7]=R16(c->r[3]+c->r[0]); // 803CE520
  c->ctr=c->r[5]; // 803CE524
  cmps(c,0,(int32_t)c->r[5],0); // 803CE528
  if (!crb(c,1)) { goto L_803CE55C; } // 803CE52C
L_803CE530:;
  c->r[6]=c->r[4]+0x00030000u; // 803CE530
  c->r[0]=c->r[6]+0xFFFF8A7Eu; // 803CE534
  c->r[0]=R8(c->r[3]+c->r[0]); // 803CE538
  c->r[6]=rotl(c->r[0],4)&0xFFFFFFF0u; // 803CE53C
  c->r[6]=c->r[6]+0x00030000u; // 803CE540
  c->r[0]=c->r[6]+0xFFFF8994u; // 803CE544
  c->r[0]=R16(c->r[3]+c->r[0]); // 803CE548
  cmpu(c,0,c->r[7],c->r[0]); // 803CE54C
  if (!crb(c,1)) { goto L_803CE55C; } // 803CE550
  c->r[4]=c->r[4]+0x00000001u; // 803CE554
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_803CE530; } // 803CE558
L_803CE55C:;
  cmps(c,0,(int32_t)c->r[5],(int32_t)c->r[4]); // 803CE55C
  if (!crb(c,1)) { goto L_803CE6C4; } // 803CE560
  c->r[0]=c->r[5]-c->r[4]; // 803CE564
  c->r[8]=c->r[4]+0x00000008u; // 803CE568
  cmps(c,0,(int32_t)c->r[0],8); // 803CE56C
  if (!crb(c,1)) { goto L_803CE69C; } // 803CE570
  c->r[6]=c->r[3]+0x00030000u; // 803CE574
  c->r[9]=0u+0x00000000u; // 803CE578
  c->r[0]=R8(c->r[6]+0xFFFF8A87u); // 803CE57C
  c->r[10]=0u+0x00000000u; // 803CE580
  c->r[11]=0u+0x00000000u; // 803CE584
  c->r[7]=0u+0x00000000u; // 803CE588
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[4]); // 803CE58C
  if (crb(c,0)) { goto L_803CE5A8; } // 803CE590
  c->r[6]=0u+0x80000000u; // 803CE594
  c->r[0]=c->r[6]+0x00000001u; // 803CE598
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 803CE59C
  if (crb(c,0)) { goto L_803CE5A8; } // 803CE5A0
  c->r[7]=0u+0x00000001u; // 803CE5A4
L_803CE5A8:;
  cmps(c,0,(int32_t)c->r[7],0); // 803CE5A8
  if (crb(c,2)) { goto L_803CE5CC; } // 803CE5AC
  c->r[7]=c->r[3]+0x00030000u; // 803CE5B0
  c->r[6]=0u+0x80000000u; // 803CE5B4
  c->r[7]=R8(c->r[7]+0xFFFF8A87u); // 803CE5B8
  c->r[0]=c->r[6]+0x00000001u; // 803CE5BC
  cmps(c,0,(int32_t)c->r[7],(int32_t)c->r[0]); // 803CE5C0
  if (crb(c,0)) { goto L_803CE5CC; } // 803CE5C4
  c->r[11]=0u+0x00000001u; // 803CE5C8
L_803CE5CC:;
  cmps(c,0,(int32_t)c->r[11],0); // 803CE5CC
  if (crb(c,2)) { goto L_803CE5E4; } // 803CE5D0
  c->r[0]=c->r[4]+0x80000000u; // 803CE5D4
  cmpu(c,0,c->r[0],0x00000000u); // 803CE5D8
  if (crb(c,2)) { goto L_803CE5E4; } // 803CE5DC
  c->r[10]=0u+0x00000001u; // 803CE5E0
L_803CE5E4:;
  cmps(c,0,(int32_t)c->r[10],0); // 803CE5E4
  if (crb(c,2)) { goto L_803CE62C; } // 803CE5E8
  c->r[6]=c->r[3]+0x00030000u; // 803CE5EC
  c->r[0]=0u-c->r[4]; // 803CE5F0
  c->r[10]=R8(c->r[6]+0xFFFF8A87u); // 803CE5F4
  c->r[0]=rotl(c->r[0],0)&0x80000000u; // 803CE5F8
  c->r[6]=0u+0x00000001u; // 803CE5FC
  c->r[7]=rotl(c->r[10],0)&0x80000000u; // 803CE600
  cmps(c,0,(int32_t)c->r[7],(int32_t)c->r[0]); // 803CE604
  if (!crb(c,2)) { goto L_803CE620; } // 803CE608
  c->r[0]=c->r[10]-c->r[4]; // 803CE60C
  c->r[0]=rotl(c->r[0],0)&0x80000000u; // 803CE610
  cmps(c,0,(int32_t)c->r[7],(int32_t)c->r[0]); // 803CE614
  if (crb(c,2)) { goto L_803CE620; } // 803CE618
  c->r[6]=0u+0x00000000u; // 803CE61C
L_803CE620:;
  cmps(c,0,(int32_t)c->r[6],0); // 803CE620
  if (crb(c,2)) { goto L_803CE62C; } // 803CE624
  c->r[9]=0u+0x00000001u; // 803CE628
L_803CE62C:;
  cmps(c,0,(int32_t)c->r[9],0); // 803CE62C
  if (crb(c,2)) { goto L_803CE69C; } // 803CE630
  c->r[0]=c->r[5]+0x00000007u; // 803CE634
  c->r[0]=c->r[0]-c->r[8]; // 803CE638
  c->r[0]=rotl(c->r[0],29)&0x1FFFFFFFu; // 803CE63C
  c->ctr=c->r[0]; // 803CE640
  cmps(c,0,(int32_t)c->r[5],(int32_t)c->r[8]); // 803CE644
  if (!crb(c,1)) { goto L_803CE69C; } // 803CE648
L_803CE64C:;
  c->r[6]=c->r[3]+c->r[5]; // 803CE64C
  c->r[5]=c->r[5]+0xFFFFFFF8u; // 803CE650
  c->r[6]=c->r[6]+0x00030000u; // 803CE654
  c->r[0]=R8(c->r[6]+0xFFFF8A7Du); // 803CE658
  W8(c->r[6]+0xFFFF8A7Eu,c->r[0]); // 803CE65C
  c->r[0]=R8(c->r[6]+0xFFFF8A7Cu); // 803CE660
  W8(c->r[6]+0xFFFF8A7Du,c->r[0]); // 803CE664
  c->r[0]=R8(c->r[6]+0xFFFF8A7Bu); // 803CE668
  W8(c->r[6]+0xFFFF8A7Cu,c->r[0]); // 803CE66C
  c->r[0]=R8(c->r[6]+0xFFFF8A7Au); // 803CE670
  W8(c->r[6]+0xFFFF8A7Bu,c->r[0]); // 803CE674
  c->r[0]=R8(c->r[6]+0xFFFF8A79u); // 803CE678
  W8(c->r[6]+0xFFFF8A7Au,c->r[0]); // 803CE67C
  c->r[0]=R8(c->r[6]+0xFFFF8A78u); // 803CE680
  W8(c->r[6]+0xFFFF8A79u,c->r[0]); // 803CE684
  c->r[0]=R8(c->r[6]+0xFFFF8A77u); // 803CE688
  W8(c->r[6]+0xFFFF8A78u,c->r[0]); // 803CE68C
  c->r[0]=R8(c->r[6]+0xFFFF8A76u); // 803CE690
  W8(c->r[6]+0xFFFF8A77u,c->r[0]); // 803CE694
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_803CE64C; } // 803CE698
L_803CE69C:;
  c->r[0]=c->r[5]-c->r[4]; // 803CE69C
  c->ctr=c->r[0]; // 803CE6A0
  cmps(c,0,(int32_t)c->r[5],(int32_t)c->r[4]); // 803CE6A4
  if (!crb(c,1)) { goto L_803CE6C4; } // 803CE6A8
L_803CE6AC:;
  c->r[6]=c->r[3]+c->r[5]; // 803CE6AC
  c->r[5]=c->r[5]+0xFFFFFFFFu; // 803CE6B0
  c->r[6]=c->r[6]+0x00030000u; // 803CE6B4
  c->r[0]=R8(c->r[6]+0xFFFF8A7Du); // 803CE6B8
  W8(c->r[6]+0xFFFF8A7Eu,c->r[0]); // 803CE6BC
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_803CE6AC; } // 803CE6C0
L_803CE6C4:;
  c->r[0]=c->r[3]+0x00030000u; // 803CE6C4
  c->r[5]=rotl(c->r[31],0)&0x000000FFu; // 803CE6C8
  c->r[4]=c->r[0]+c->r[4]; // 803CE6CC
  c->r[3]=0u+0x80790000u; // 803CE6D0
  c->r[3]=c->r[3]+0xFFFF9EE0u; // 803CE6D4
  cmpu(c,0,c->r[5],0x00000009u); // 803CE6D8
  W8(c->r[4]+0xFFFF8A7Eu,c->r[31]); // 803CE6DC
  c->r[3]=c->r[3]+0x00000054u; // 803CE6E0
  if (!crb(c,0)) { goto L_803CE724; } // 803CE6E4
  cmpu(c,0,c->r[29],0x00000001u); // 803CE6E8
  if (!crb(c,2)) { goto L_803CE70C; } // 803CE6EC
  c->r[4]=c->r[3]+0x00030000u; // 803CE6F0
  c->r[0]=0u+0x00000001u; // 803CE6F4
  c->r[3]=R16(c->r[4]+0xFFFF8A7Cu); // 803CE6F8
  c->r[0]=((c->r[5])&0x20)?0u:(c->r[0]<<((c->r[5])&31)); // 803CE6FC
  c->r[0]=c->r[3]|c->r[0]; // 803CE700
  W16(c->r[4]+0xFFFF8A7Cu,c->r[0]); // 803CE704
  goto L_803CE724; // 803CE708
L_803CE70C:;
  c->r[4]=c->r[3]+0x00030000u; // 803CE70C
  c->r[0]=0u+0x00000001u; // 803CE710
  c->r[3]=R16(c->r[4]+0xFFFF8A7Cu); // 803CE714
  c->r[0]=((c->r[5])&0x20)?0u:(c->r[0]<<((c->r[5])&31)); // 803CE718
  c->r[0]=c->r[3]&~c->r[0]; // 803CE71C
  W16(c->r[4]+0xFFFF8A7Cu,c->r[0]); // 803CE720
L_803CE724:;
  c->r[5]=c->r[30]+0x00030000u; // 803CE724
  c->r[3]=c->r[31]|c->r[31]; // 803CE728
  c->r[4]=R8(c->r[5]+0xFFFF8A87u); // 803CE72C
  c->r[0]=c->r[4]+0x00000001u; // 803CE730
  W8(c->r[5]+0xFFFF8A87u,c->r[0]); // 803CE734
  goto L_803CE740; // 803CE738
L_803CE73C:;
  c->r[3]=0u+0x000000FFu; // 803CE73C
L_803CE740:;
  c->r[11]=c->r[1]+0x00000020u; // 803CE740
  c->lr=0x803CE748u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 803CE744
  c->r[0]=R32(c->r[1]+0x00000024u); // 803CE748
  c->lr=c->r[0]; // 803CE74C
  c->r[1]=c->r[1]+0x00000020u; // 803CE750
  return; // 803CE754
}

// GKI_delete_pool
void f_803CE758(Ctx* __restrict c) {
  trace_call(0x803CE758u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803CE758
  c->r[0]=c->lr; // 803CE75C
  W32(c->r[1]+0x00000024u,c->r[0]); // 803CE760
  c->r[11]=c->r[1]+0x00000020u; // 803CE764
  c->lr=0x803CE76Cu; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 803CE768
  c->r[27]=0u+0x80790000u; // 803CE76C
  cmpu(c,0,c->r[3],0x00000009u); // 803CE770
  c->r[27]=c->r[27]+0xFFFF9EE0u; // 803CE774
  c->r[30]=c->r[3]|c->r[3]; // 803CE778
  c->r[31]=c->r[27]+0x00000054u; // 803CE77C
  if (!crb(c,0)) { goto L_803CE8A0; } // 803CE780
  c->r[26]=rotl(c->r[3],2)&0x000003FCu; // 803CE784
  c->r[0]=c->r[31]+0x00030000u; // 803CE788
  c->r[3]=c->r[0]+c->r[26]; // 803CE78C
  c->r[0]=R32(c->r[3]+0xFFFF8A1Cu); // 803CE790
  cmps(c,0,(int32_t)c->r[0],0); // 803CE794
  if (!crb(c,2)) { goto L_803CE7A0; } // 803CE798
  goto L_803CE8A0; // 803CE79C
L_803CE7A0:;
  c->lr=0x803CE7A4u; f_803CF028(c); // 803CE7A0
  c->r[4]=c->r[31]+0x00030000u; // 803CE7A4
  c->r[0]=rotl(c->r[30],4)&0x00000FF0u; // 803CE7A8
  c->r[3]=c->r[4]+c->r[0]; // 803CE7AC
  c->r[0]=R16(c->r[3]+0xFFFF8998u); // 803CE7B0
  cmps(c,0,(int32_t)c->r[0],0); // 803CE7B4
  if (!crb(c,2)) { goto L_803CE884; } // 803CE7B8
  c->r[28]=0u+0x00000000u; // 803CE7BC
  c->r[29]=c->r[4]+c->r[26]; // 803CE7C0
  W16(c->r[3]+0xFFFF8994u,c->r[28]); // 803CE7C4
  W16(c->r[3]+0xFFFF8996u,c->r[28]); // 803CE7C8
  W16(c->r[3]+0xFFFF8998u,c->r[28]); // 803CE7CC
  W16(c->r[3]+0xFFFF899Au,c->r[28]); // 803CE7D0
  W32(c->r[3]+0xFFFF898Cu,c->r[28]); // 803CE7D4
  W32(c->r[3]+0xFFFF8990u,c->r[28]); // 803CE7D8
  c->r[3]=R32(c->r[29]+0xFFFF8A1Cu); // 803CE7DC
  c->lr=0x803CE7E4u; f_803CF09C(c); // 803CE7E0
  c->r[4]=c->r[31]+0x00030000u; // 803CE7E4
  W32(c->r[29]+0xFFFF8A1Cu,c->r[28]); // 803CE7E8
  c->r[3]=c->r[4]+c->r[26]; // 803CE7EC
  c->r[0]=rotl(c->r[30],1)&0x000001FEu; // 803CE7F0
  W32(c->r[3]+0xFFFF8A40u,c->r[28]); // 803CE7F4
  c->r[3]=c->r[4]+c->r[0]; // 803CE7F8
  c->r[7]=c->r[31]|c->r[31]; // 803CE7FC
  c->r[6]=0u+0x00000000u; // 803CE800
  W16(c->r[3]+0xFFFF8A64u,c->r[28]); // 803CE804
  c->r[4]=R8(c->r[4]+0xFFFF8A87u); // 803CE808
  goto L_803CE82C; // 803CE80C
L_803CE810:;
  c->r[3]=rotl(c->r[6],0)&0x000000FFu; // 803CE810
  c->r[3]=c->r[3]+0x00030000u; // 803CE814
  c->r[0]=c->r[3]+0xFFFF8A7Eu; // 803CE818
  c->r[0]=R8(c->r[7]+c->r[0]); // 803CE81C
  cmpu(c,0,c->r[30],c->r[0]); // 803CE820
  if (crb(c,2)) { goto L_803CE838; } // 803CE824
  c->r[6]=c->r[6]+0x00000001u; // 803CE828
L_803CE82C:;
  c->r[0]=rotl(c->r[6],0)&0x000000FFu; // 803CE82C
  cmpu(c,0,c->r[0],c->r[4]); // 803CE830
  if (crb(c,0)) { IRQCHK(c); goto L_803CE810; } // 803CE834
L_803CE838:;
  c->r[4]=c->r[7]+0x00030000u; // 803CE838
  goto L_803CE85C; // 803CE83C
L_803CE840:;
  c->r[3]=rotl(c->r[6],0)&0x000000FFu; // 803CE840
  c->r[6]=c->r[6]+0x00000001u; // 803CE844
  c->r[3]=c->r[3]+0x00030000u; // 803CE848
  c->r[3]=c->r[3]+0xFFFF8A7Eu; // 803CE84C
  c->r[3]=c->r[7]+c->r[3]; // 803CE850
  c->r[0]=R8(c->r[3]+0x00000001u); // 803CE854
  W8(c->r[3]+0x00000000u,c->r[0]); // 803CE858
L_803CE85C:;
  c->r[3]=R8(c->r[4]+0xFFFF8A87u); // 803CE85C
  c->r[5]=rotl(c->r[6],0)&0x000000FFu; // 803CE860
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 803CE864
  cmps(c,0,(int32_t)c->r[5],(int32_t)c->r[0]); // 803CE868
  if (crb(c,0)) { IRQCHK(c); goto L_803CE840; } // 803CE86C
  c->r[4]=c->r[31]+0x00030000u; // 803CE870
  c->r[3]=R8(c->r[4]+0xFFFF8A87u); // 803CE874
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 803CE878
  W8(c->r[4]+0xFFFF8A87u,c->r[0]); // 803CE87C
  goto L_803CE89C; // 803CE880
L_803CE884:;
  c->r[3]=0u+0x00010000u; // 803CE884
  c->r[4]=0u+0x80710000u; // 803CE888
  c->r[0]=c->r[3]+0xFFFFFFF8u; // 803CE88C
  c->r[3]=rotl(c->r[0],0)&0x0000FFFFu; // 803CE890
  c->r[4]=c->r[4]+0xFFFFAA20u; // 803CE894
  c->lr=0x803CE89Cu; f_803CF06C(c); // 803CE898
L_803CE89C:;
  c->lr=0x803CE8A0u; f_803CF004(c); // 803CE89C
L_803CE8A0:;
  c->r[11]=c->r[1]+0x00000020u; // 803CE8A0
  c->lr=0x803CE8A8u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 803CE8A4
  c->r[0]=R32(c->r[1]+0x00000024u); // 803CE8A8
  c->lr=c->r[0]; // 803CE8AC
  c->r[1]=c->r[1]+0x00000020u; // 803CE8B0
  return; // 803CE8B4
}

// gki_timers_init
void f_803CE8B8(Ctx* __restrict c) {
  trace_call(0x803CE8B8u);
  c->r[3]=0u+0x80790000u; // 803CE8B8
  c->r[0]=0u+0x00000000u; // 803CE8BC
  c->r[3]=c->r[3]+0xFFFF9EE0u; // 803CE8C0
  c->r[3]=c->r[3]+0x00030000u; // 803CE8C4
  W32(c->r[3]+0xFFFF8838u,c->r[0]); // 803CE8C8
  W32(c->r[3]+0xFFFF883Cu,c->r[0]); // 803CE8CC
  W32(c->r[3]+0xFFFF8840u,c->r[0]); // 803CE8D0
  W32(c->r[3]+0xFFFF8860u,c->r[0]); // 803CE8D4
  W32(c->r[3]+0xFFFF8880u,c->r[0]); // 803CE8D8
  W32(c->r[3]+0xFFFF88A0u,c->r[0]); // 803CE8DC
  W32(c->r[3]+0xFFFF88C0u,c->r[0]); // 803CE8E0
  W32(c->r[3]+0xFFFF8844u,c->r[0]); // 803CE8E4
  W32(c->r[3]+0xFFFF8864u,c->r[0]); // 803CE8E8
  W32(c->r[3]+0xFFFF8884u,c->r[0]); // 803CE8EC
  W32(c->r[3]+0xFFFF88A4u,c->r[0]); // 803CE8F0
  W32(c->r[3]+0xFFFF88C4u,c->r[0]); // 803CE8F4
  W32(c->r[3]+0xFFFF8848u,c->r[0]); // 803CE8F8
  W32(c->r[3]+0xFFFF8868u,c->r[0]); // 803CE8FC
  W32(c->r[3]+0xFFFF8888u,c->r[0]); // 803CE900
  W32(c->r[3]+0xFFFF88A8u,c->r[0]); // 803CE904
  W32(c->r[3]+0xFFFF88C8u,c->r[0]); // 803CE908
  W32(c->r[3]+0xFFFF884Cu,c->r[0]); // 803CE90C
  W32(c->r[3]+0xFFFF886Cu,c->r[0]); // 803CE910
  W32(c->r[3]+0xFFFF888Cu,c->r[0]); // 803CE914
  W32(c->r[3]+0xFFFF88ACu,c->r[0]); // 803CE918
  W32(c->r[3]+0xFFFF88CCu,c->r[0]); // 803CE91C
  W32(c->r[3]+0xFFFF8850u,c->r[0]); // 803CE920
  W32(c->r[3]+0xFFFF8870u,c->r[0]); // 803CE924
  W32(c->r[3]+0xFFFF8890u,c->r[0]); // 803CE928
  W32(c->r[3]+0xFFFF88B0u,c->r[0]); // 803CE92C
  W32(c->r[3]+0xFFFF88D0u,c->r[0]); // 803CE930
  W32(c->r[3]+0xFFFF8854u,c->r[0]); // 803CE934
  W32(c->r[3]+0xFFFF8874u,c->r[0]); // 803CE938
  W32(c->r[3]+0xFFFF8894u,c->r[0]); // 803CE93C
  W32(c->r[3]+0xFFFF88B4u,c->r[0]); // 803CE940
  W32(c->r[3]+0xFFFF88D4u,c->r[0]); // 803CE944
  W32(c->r[3]+0xFFFF8858u,c->r[0]); // 803CE948
  W32(c->r[3]+0xFFFF8878u,c->r[0]); // 803CE94C
  W32(c->r[3]+0xFFFF8898u,c->r[0]); // 803CE950
  W32(c->r[3]+0xFFFF88B8u,c->r[0]); // 803CE954
  W32(c->r[3]+0xFFFF88D8u,c->r[0]); // 803CE958
  W32(c->r[3]+0xFFFF885Cu,c->r[0]); // 803CE95C
  W32(c->r[3]+0xFFFF887Cu,c->r[0]); // 803CE960
  W32(c->r[3]+0xFFFF889Cu,c->r[0]); // 803CE964
  W32(c->r[3]+0xFFFF88BCu,c->r[0]); // 803CE968
  W32(c->r[3]+0xFFFF88DCu,c->r[0]); // 803CE96C
  return; // 803CE970
}

// GKI_get_tick_count
void f_803CE974(Ctx* __restrict c) {
  trace_call(0x803CE974u);
  c->r[3]=0u+0x80790000u; // 803CE974
  c->r[3]=c->r[3]+0xFFFF9EE0u; // 803CE978
  c->r[3]=c->r[3]+0x00030000u; // 803CE97C
  c->r[3]=R32(c->r[3]+0xFFFF8828u); // 803CE980
  return; // 803CE984
}

// GKI_start_timer
void f_803CE988(Ctx* __restrict c) {
  trace_call(0x803CE988u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803CE988
  c->r[0]=c->lr; // 803CE98C
  W32(c->r[1]+0x00000024u,c->r[0]); // 803CE990
  c->r[11]=c->r[1]+0x00000020u; // 803CE994
  c->lr=0x803CE99Cu; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 803CE998
  c->r[27]=c->r[3]|c->r[3]; // 803CE99C
  c->r[29]=c->r[4]|c->r[4]; // 803CE9A0
  c->r[31]=c->r[5]|c->r[5]; // 803CE9A4
  c->lr=0x803CE9ACu; f_803CEFFC(c); // 803CE9A8
  cmps(c,0,(int32_t)c->r[29],0); // 803CE9AC
  c->r[28]=c->r[3]|c->r[3]; // 803CE9B0
  c->r[30]=0u+0x00000000u; // 803CE9B4
  if (crb(c,1)) { goto L_803CE9C0; } // 803CE9B8
  c->r[29]=0u+0x00000001u; // 803CE9BC
L_803CE9C0:;
  c->r[0]=0u-c->r[31]; // 803CE9C0
  c->r[0]=c->r[0]|c->r[31]; // 803CE9C4
  c->r[0]=sraw(c,c->r[0],31); // 803CE9C8
  c->r[31]=c->r[29]&c->r[0]; // 803CE9CC
  c->lr=0x803CE9D4u; f_803CF028(c); // 803CE9D0
  c->r[4]=0u+0x80790000u; // 803CE9D4
  c->r[3]=0u+0x80000000u; // 803CE9D8
  c->r[4]=c->r[4]+0xFFFF9EE0u; // 803CE9DC
  c->r[5]=c->r[4]+0x00030000u; // 803CE9E0
  c->r[4]=c->r[3]+0xFFFFFFFFu; // 803CE9E4
  c->r[3]=R32(c->r[5]+0xFFFF8838u); // 803CE9E8
  c->r[0]=R32(c->r[5]+0xFFFF883Cu); // 803CE9EC
  c->r[3]=c->r[0]-c->r[3]; // 803CE9F0
  c->r[0]=c->r[4]-c->r[3]; // 803CE9F4
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[29]); // 803CE9F8
  if (!crb(c,1)) { goto L_803CEA04; } // 803CE9FC
  c->r[4]=c->r[29]+c->r[3]; // 803CEA00
L_803CEA04:;
  cmps(c,0,(int32_t)c->r[27],1); // 803CEA04
  if (crb(c,2)) { goto L_803CEA3C; } // 803CEA08
  if (!crb(c,0)) { goto L_803CEA5C; } // 803CEA0C
  cmps(c,0,(int32_t)c->r[27],0); // 803CEA10
  if (!crb(c,0)) { goto L_803CEA1C; } // 803CEA14
  goto L_803CEA5C; // 803CEA18
L_803CEA1C:;
  c->r[3]=0u+0x80790000u; // 803CEA1C
  c->r[5]=rotl(c->r[28],2)&0x000003FCu; // 803CEA20
  c->r[3]=c->r[3]+0xFFFF9EE0u; // 803CEA24
  c->r[0]=c->r[3]+0x00030000u; // 803CEA28
  c->r[3]=c->r[0]+c->r[5]; // 803CEA2C
  W32(c->r[3]+0xFFFF8880u,c->r[31]); // 803CEA30
  W32(c->r[3]+0xFFFF8860u,c->r[4]); // 803CEA34
  goto L_803CEA60; // 803CEA38
L_803CEA3C:;
  c->r[3]=0u+0x80790000u; // 803CEA3C
  c->r[5]=rotl(c->r[28],2)&0x000003FCu; // 803CEA40
  c->r[3]=c->r[3]+0xFFFF9EE0u; // 803CEA44
  c->r[0]=c->r[3]+0x00030000u; // 803CEA48
  c->r[3]=c->r[0]+c->r[5]; // 803CEA4C
  W32(c->r[3]+0xFFFF88C0u,c->r[31]); // 803CEA50
  W32(c->r[3]+0xFFFF88A0u,c->r[4]); // 803CEA54
  goto L_803CEA60; // 803CEA58
L_803CEA5C:;
  c->r[30]=0u+0x00000001u; // 803CEA5C
L_803CEA60:;
  cmps(c,0,(int32_t)c->r[30],0); // 803CEA60
  if (!crb(c,2)) { goto L_803CEABC; } // 803CEA64
  cmps(c,0,(int32_t)c->r[29],0); // 803CEA68
  if (!crb(c,1)) { goto L_803CEABC; } // 803CEA6C
  c->r[3]=0u+0x80790000u; // 803CEA70
  c->r[3]=c->r[3]+0xFFFF9EE0u; // 803CEA74
  c->r[3]=c->r[3]+0x00030000u; // 803CEA78
  c->r[4]=R32(c->r[3]+0xFFFF883Cu); // 803CEA7C
  cmps(c,0,(int32_t)c->r[4],0); // 803CEA80
  if (crb(c,2)) { goto L_803CEA9C; } // 803CEA84
  c->r[0]=R32(c->r[3]+0xFFFF8838u); // 803CEA88
  cmps(c,0,(int32_t)c->r[29],(int32_t)c->r[0]); // 803CEA8C
  if (!crb(c,0)) { goto L_803CEABC; } // 803CEA90
  cmps(c,0,(int32_t)c->r[0],0); // 803CEA94
  if (!crb(c,1)) { goto L_803CEABC; } // 803CEA98
L_803CEA9C:;
  c->r[3]=0u+0x80790000u; // 803CEA9C
  c->r[3]=c->r[3]+0xFFFF9EE0u; // 803CEAA0
  c->r[3]=c->r[3]+0x00030000u; // 803CEAA4
  c->r[0]=R32(c->r[3]+0xFFFF8838u); // 803CEAA8
  c->r[0]=c->r[4]-c->r[0]; // 803CEAAC
  c->r[0]=c->r[29]+c->r[0]; // 803CEAB0
  W32(c->r[3]+0xFFFF883Cu,c->r[0]); // 803CEAB4
  W32(c->r[3]+0xFFFF8838u,c->r[29]); // 803CEAB8
L_803CEABC:;
  c->lr=0x803CEAC0u; f_803CF004(c); // 803CEABC
  c->r[11]=c->r[1]+0x00000020u; // 803CEAC0
  c->lr=0x803CEAC8u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 803CEAC4
  c->r[0]=R32(c->r[1]+0x00000024u); // 803CEAC8
  c->lr=c->r[0]; // 803CEACC
  c->r[1]=c->r[1]+0x00000020u; // 803CEAD0
  return; // 803CEAD4
}

// GKI_stop_timer
void f_803CEAD8(Ctx* __restrict c) {
  trace_call(0x803CEAD8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803CEAD8
  c->r[0]=c->lr; // 803CEADC
  W32(c->r[1]+0x00000014u,c->r[0]); // 803CEAE0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 803CEAE4
  c->r[31]=c->r[3]|c->r[3]; // 803CEAE8
  c->lr=0x803CEAF0u; f_803CEFFC(c); // 803CEAEC
  cmps(c,0,(int32_t)c->r[31],1); // 803CEAF0
  if (crb(c,2)) { goto L_803CEB2C; } // 803CEAF4
  if (!crb(c,0)) { goto L_803CEB4C; } // 803CEAF8
  cmps(c,0,(int32_t)c->r[31],0); // 803CEAFC
  if (!crb(c,0)) { goto L_803CEB08; } // 803CEB00
  goto L_803CEB4C; // 803CEB04
L_803CEB08:;
  c->r[4]=0u+0x80790000u; // 803CEB08
  c->r[3]=rotl(c->r[3],2)&0x000003FCu; // 803CEB0C
  c->r[4]=c->r[4]+0xFFFF9EE0u; // 803CEB10
  c->r[5]=0u+0x00000000u; // 803CEB14
  c->r[0]=c->r[4]+0x00030000u; // 803CEB18
  c->r[3]=c->r[0]+c->r[3]; // 803CEB1C
  W32(c->r[3]+0xFFFF8880u,c->r[5]); // 803CEB20
  W32(c->r[3]+0xFFFF8860u,c->r[5]); // 803CEB24
  goto L_803CEB4C; // 803CEB28
L_803CEB2C:;
  c->r[4]=0u+0x80790000u; // 803CEB2C
  c->r[3]=rotl(c->r[3],2)&0x000003FCu; // 803CEB30
  c->r[4]=c->r[4]+0xFFFF9EE0u; // 803CEB34
  c->r[5]=0u+0x00000000u; // 803CEB38
  c->r[0]=c->r[4]+0x00030000u; // 803CEB3C
  c->r[3]=c->r[0]+c->r[3]; // 803CEB40
  W32(c->r[3]+0xFFFF88C0u,c->r[5]); // 803CEB44
  W32(c->r[3]+0xFFFF88A0u,c->r[5]); // 803CEB48
L_803CEB4C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 803CEB4C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 803CEB50
  c->lr=c->r[0]; // 803CEB54
  c->r[1]=c->r[1]+0x00000010u; // 803CEB58
  return; // 803CEB5C
}

// GKI_init_timer_list
void f_803CEB60(Ctx* __restrict c) {
  trace_call(0x803CEB60u);
  c->r[0]=0u+0x00000000u; // 803CEB60
  W32(c->r[3]+0x00000000u,c->r[0]); // 803CEB64
  W32(c->r[3]+0x00000004u,c->r[0]); // 803CEB68
  W32(c->r[3]+0x00000008u,c->r[0]); // 803CEB6C
  return; // 803CEB70
}

// GKI_update_timer_list
void f_803CEB74(Ctx* __restrict c) {
  trace_call(0x803CEB74u);
  c->r[6]=R32(c->r[3]+0x00000000u); // 803CEB74
  c->r[7]=0u+0x00000000u; // 803CEB78
  goto L_803CEB88; // 803CEB7C
L_803CEB80:;
  c->r[6]=R32(c->r[6]+0x00000000u); // 803CEB80
  c->r[7]=c->r[7]+0x00000001u; // 803CEB84
L_803CEB88:;
  cmps(c,0,(int32_t)c->r[6],0); // 803CEB88
  if (crb(c,2)) { goto L_803CEB9C; } // 803CEB8C
  c->r[0]=R32(c->r[6]+0x0000000Cu); // 803CEB90
  cmps(c,0,(int32_t)c->r[0],0); // 803CEB94
  if (!crb(c,1)) { IRQCHK(c); goto L_803CEB80; } // 803CEB98
L_803CEB9C:;
  c->r[8]=c->r[4]|c->r[4]; // 803CEB9C
  c->r[0]=0u+0x00000000u; // 803CEBA0
  goto L_803CEBC8; // 803CEBA4
L_803CEBA8:;
  c->r[9]=R32(c->r[6]+0x0000000Cu); // 803CEBA8
  c->r[5]=c->r[9]-c->r[8]; cr0(c,c->r[5]); // 803CEBAC
  W32(c->r[6]+0x0000000Cu,c->r[5]); // 803CEBB0
  if (crb(c,1)) { goto L_803CEBC0; } // 803CEBB4
  W32(c->r[6]+0x0000000Cu,c->r[0]); // 803CEBB8
  c->r[7]=c->r[7]+0x00000001u; // 803CEBBC
L_803CEBC0:;
  c->r[8]=c->r[8]-c->r[9]; // 803CEBC0
  c->r[6]=R32(c->r[6]+0x00000000u); // 803CEBC4
L_803CEBC8:;
  cmps(c,0,(int32_t)c->r[6],0); // 803CEBC8
  if (crb(c,2)) { goto L_803CEBD8; } // 803CEBCC
  cmps(c,0,(int32_t)c->r[8],0); // 803CEBD0
  if (crb(c,1)) { IRQCHK(c); goto L_803CEBA8; } // 803CEBD4
L_803CEBD8:;
  c->r[0]=R32(c->r[3]+0x00000008u); // 803CEBD8
  cmps(c,0,(int32_t)c->r[0],0); // 803CEBDC
  if (!crb(c,1)) { goto L_803CEBF8; } // 803CEBE0
  c->r[0]=c->r[0]-c->r[4]; cr0(c,c->r[0]); // 803CEBE4
  W32(c->r[3]+0x00000008u,c->r[0]); // 803CEBE8
  if (!crb(c,0)) { goto L_803CEBF8; } // 803CEBEC
  c->r[0]=0u+0x00000000u; // 803CEBF0
  W32(c->r[3]+0x00000008u,c->r[0]); // 803CEBF4
L_803CEBF8:;
  c->r[3]=c->r[7]|c->r[7]; // 803CEBF8
  return; // 803CEBFC
}

// GKI_add_to_timer_list
void f_803CEC00(Ctx* __restrict c) {
  trace_call(0x803CEC00u);
  c->r[5]=R32(c->r[4]+0x0000000Cu); // 803CEC00
  cmps(c,0,(int32_t)c->r[5],0); // 803CEC04
  if (crb(c,0)) return; // 803CEC08
  c->r[0]=R32(c->r[3]+0x00000008u); // 803CEC0C
  cmps(c,0,(int32_t)c->r[5],(int32_t)c->r[0]); // 803CEC10
  if (crb(c,0)) { goto L_803CEC68; } // 803CEC14
  c->r[0]=R32(c->r[3]+0x00000000u); // 803CEC18
  cmps(c,0,(int32_t)c->r[0],0); // 803CEC1C
  if (!crb(c,2)) { goto L_803CEC2C; } // 803CEC20
  W32(c->r[3]+0x00000000u,c->r[4]); // 803CEC24
  goto L_803CEC44; // 803CEC28
L_803CEC2C:;
  c->r[5]=R32(c->r[3]+0x00000004u); // 803CEC2C
  cmps(c,0,(int32_t)c->r[5],0); // 803CEC30
  if (crb(c,2)) { goto L_803CEC3C; } // 803CEC34
  W32(c->r[5]+0x00000000u,c->r[4]); // 803CEC38
L_803CEC3C:;
  c->r[0]=R32(c->r[3]+0x00000004u); // 803CEC3C
  W32(c->r[4]+0x00000004u,c->r[0]); // 803CEC40
L_803CEC44:;
  c->r[0]=0u+0x00000000u; // 803CEC44
  W32(c->r[4]+0x00000000u,c->r[0]); // 803CEC48
  W32(c->r[3]+0x00000004u,c->r[4]); // 803CEC4C
  c->r[0]=R32(c->r[3]+0x00000008u); // 803CEC50
  c->r[5]=R32(c->r[4]+0x0000000Cu); // 803CEC54
  c->r[0]=c->r[5]-c->r[0]; // 803CEC58
  W32(c->r[4]+0x0000000Cu,c->r[0]); // 803CEC5C
  W32(c->r[3]+0x00000008u,c->r[5]); // 803CEC60
  goto L_803CECE0; // 803CEC64
L_803CEC68:;
  c->r[6]=R32(c->r[3]+0x00000000u); // 803CEC68
  goto L_803CEC88; // 803CEC6C
L_803CEC70:;
  cmps(c,0,(int32_t)c->r[5],0); // 803CEC70
  if (!crb(c,1)) { goto L_803CEC84; } // 803CEC74
  c->r[0]=R32(c->r[4]+0x0000000Cu); // 803CEC78
  c->r[0]=c->r[0]-c->r[5]; // 803CEC7C
  W32(c->r[4]+0x0000000Cu,c->r[0]); // 803CEC80
L_803CEC84:;
  c->r[6]=R32(c->r[6]+0x00000000u); // 803CEC84
L_803CEC88:;
  c->r[5]=R32(c->r[6]+0x0000000Cu); // 803CEC88
  c->r[0]=R32(c->r[4]+0x0000000Cu); // 803CEC8C
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[5]); // 803CEC90
  if (crb(c,1)) { IRQCHK(c); goto L_803CEC70; } // 803CEC94
  c->r[0]=R32(c->r[3]+0x00000000u); // 803CEC98
  cmpu(c,0,c->r[6],c->r[0]); // 803CEC9C
  if (!crb(c,2)) { goto L_803CECB8; } // 803CECA0
  W32(c->r[4]+0x00000000u,c->r[0]); // 803CECA4
  c->r[5]=R32(c->r[3]+0x00000000u); // 803CECA8
  W32(c->r[5]+0x00000004u,c->r[4]); // 803CECAC
  W32(c->r[3]+0x00000000u,c->r[4]); // 803CECB0
  goto L_803CECD0; // 803CECB4
L_803CECB8:;
  c->r[3]=R32(c->r[6]+0x00000004u); // 803CECB8
  W32(c->r[3]+0x00000000u,c->r[4]); // 803CECBC
  c->r[0]=R32(c->r[6]+0x00000004u); // 803CECC0
  W32(c->r[4]+0x00000004u,c->r[0]); // 803CECC4
  W32(c->r[6]+0x00000004u,c->r[4]); // 803CECC8
  W32(c->r[4]+0x00000000u,c->r[6]); // 803CECCC
L_803CECD0:;
  c->r[3]=R32(c->r[4]+0x0000000Cu); // 803CECD0
  c->r[0]=R32(c->r[6]+0x0000000Cu); // 803CECD4
  c->r[0]=c->r[0]-c->r[3]; // 803CECD8
  W32(c->r[6]+0x0000000Cu,c->r[0]); // 803CECDC
L_803CECE0:;
  c->r[0]=0u+0x00000001u; // 803CECE0
  W8(c->r[4]+0x00000016u,c->r[0]); // 803CECE4
  return; // 803CECE8
}

// GKI_remove_from_timer_list
void f_803CECEC(Ctx* __restrict c) {
  trace_call(0x803CECECu);
  cmps(c,0,(int32_t)c->r[4],0); // 803CECEC
  if (crb(c,2)) return; // 803CECF0
  c->r[0]=R8(c->r[4]+0x00000016u); // 803CECF4
  cmps(c,0,(int32_t)c->r[0],0); // 803CECF8
  if (crb(c,2)) return; // 803CECFC
  c->r[0]=R32(c->r[3]+0x00000000u); // 803CED00
  cmps(c,0,(int32_t)c->r[0],0); // 803CED04
  if (!crb(c,2)) { goto L_803CED10; } // 803CED08
  return; // 803CED0C
L_803CED10:;
  c->r[6]=R32(c->r[4]+0x00000000u); // 803CED10
  cmps(c,0,(int32_t)c->r[6],0); // 803CED14
  if (crb(c,2)) { goto L_803CED30; } // 803CED18
  c->r[5]=R32(c->r[6]+0x0000000Cu); // 803CED1C
  c->r[0]=R32(c->r[4]+0x0000000Cu); // 803CED20
  c->r[0]=c->r[5]+c->r[0]; // 803CED24
  W32(c->r[6]+0x0000000Cu,c->r[0]); // 803CED28
  goto L_803CED40; // 803CED2C
L_803CED30:;
  c->r[5]=R32(c->r[4]+0x0000000Cu); // 803CED30
  c->r[0]=R32(c->r[3]+0x00000008u); // 803CED34
  c->r[0]=c->r[0]-c->r[5]; // 803CED38
  W32(c->r[3]+0x00000008u,c->r[0]); // 803CED3C
L_803CED40:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 803CED40
  cmpu(c,0,c->r[0],c->r[4]); // 803CED44
  if (!crb(c,2)) { goto L_803CED7C; } // 803CED48
  c->r[5]=R32(c->r[4]+0x00000000u); // 803CED4C
  cmps(c,0,(int32_t)c->r[5],0); // 803CED50
  W32(c->r[3]+0x00000000u,c->r[5]); // 803CED54
  if (crb(c,2)) { goto L_803CED64; } // 803CED58
  c->r[0]=0u+0x00000000u; // 803CED5C
  W32(c->r[5]+0x00000004u,c->r[0]); // 803CED60
L_803CED64:;
  c->r[0]=R32(c->r[3]+0x00000004u); // 803CED64
  cmpu(c,0,c->r[0],c->r[4]); // 803CED68
  if (!crb(c,2)) { goto L_803CEDF4; } // 803CED6C
  c->r[0]=0u+0x00000000u; // 803CED70
  W32(c->r[3]+0x00000004u,c->r[0]); // 803CED74
  goto L_803CEDF4; // 803CED78
L_803CED7C:;
  c->r[0]=R32(c->r[3]+0x00000004u); // 803CED7C
  cmpu(c,0,c->r[0],c->r[4]); // 803CED80
  if (!crb(c,2)) { goto L_803CEDA4; } // 803CED84
  c->r[5]=R32(c->r[4]+0x00000004u); // 803CED88
  cmps(c,0,(int32_t)c->r[5],0); // 803CED8C
  W32(c->r[3]+0x00000004u,c->r[5]); // 803CED90
  if (crb(c,2)) { goto L_803CEDF4; } // 803CED94
  c->r[0]=0u+0x00000000u; // 803CED98
  W32(c->r[5]+0x00000000u,c->r[0]); // 803CED9C
  goto L_803CEDF4; // 803CEDA0
L_803CEDA4:;
  c->r[3]=R32(c->r[4]+0x00000000u); // 803CEDA4
  cmps(c,0,(int32_t)c->r[3],0); // 803CEDA8
  if (crb(c,2)) return; // 803CEDAC
  c->r[0]=R32(c->r[3]+0x00000004u); // 803CEDB0
  cmpu(c,0,c->r[0],c->r[4]); // 803CEDB4
  if (!crb(c,2)) return; // 803CEDB8
  c->r[0]=R32(c->r[4]+0x00000004u); // 803CEDBC
  W32(c->r[3]+0x00000004u,c->r[0]); // 803CEDC0
  goto L_803CEDCC; // 803CEDC4
  return; // 803CEDC8
L_803CEDCC:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 803CEDCC
  cmps(c,0,(int32_t)c->r[3],0); // 803CEDD0
  if (crb(c,2)) return; // 803CEDD4
  c->r[0]=R32(c->r[3]+0x00000000u); // 803CEDD8
  cmpu(c,0,c->r[0],c->r[4]); // 803CEDDC
  if (!crb(c,2)) return; // 803CEDE0
  c->r[0]=R32(c->r[4]+0x00000000u); // 803CEDE4
  W32(c->r[3]+0x00000000u,c->r[0]); // 803CEDE8
  goto L_803CEDF4; // 803CEDEC
  return; // 803CEDF0
L_803CEDF4:;
  c->r[3]=0u+0x00000000u; // 803CEDF4
  c->r[0]=0u+0x80000000u; // 803CEDF8
  W32(c->r[4]+0x00000004u,c->r[3]); // 803CEDFC
  W32(c->r[4]+0x00000000u,c->r[3]); // 803CEE00
  W32(c->r[4]+0x0000000Cu,c->r[0]); // 803CEE04
  W8(c->r[4]+0x00000016u,c->r[3]); // 803CEE08
  return; // 803CEE0C
}

// GKI_init
void f_803CEE10(Ctx* __restrict c) {
  trace_call(0x803CEE10u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803CEE10
  c->r[0]=c->lr; // 803CEE14
  c->r[5]=0u+0x00030000u; // 803CEE18
  c->r[4]=0u+0x00000000u; // 803CEE1C
  W32(c->r[1]+0x00000014u,c->r[0]); // 803CEE20
  c->r[5]=c->r[5]+0xFFFF8AE0u; // 803CEE24
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 803CEE28
  W32(c->r[1]+0x00000008u,c->r[30]); // 803CEE2C
  c->r[30]=0u+0x80790000u; // 803CEE30
  c->r[3]=c->r[30]+0xFFFF9EE0u; // 803CEE34
  c->lr=0x803CEE3Cu; f_800043EC(c); // 803CEE38
  c->lr=0x803CEE40u; f_803CD694(c); // 803CEE3C
  c->lr=0x803CEE44u; f_803CE8B8(c); // 803CEE40
  c->r[31]=c->r[30]+0xFFFF9EE0u; // 803CEE44
  c->r[4]=0u+0x00000001u; // 803CEE48
  c->r[3]=c->r[31]+0x00030000u; // 803CEE4C
  c->r[0]=0u+0x00000000u; // 803CEE50
  W8(c->r[3]+0xFFFF8802u,c->r[4]); // 803CEE54
  W32(c->r[3]+0xFFFF87E8u,c->r[0]); // 803CEE58
  W32(c->r[3]+0xFFFF8848u,c->r[0]); // 803CEE5C
  W16(c->r[3]+0xFFFF880Cu,c->r[0]); // 803CEE60
  W8(c->r[30]+0xFFFF9EE0u,c->r[0]); // 803CEE64
  c->lr=0x803CEE6Cu; f_8037BBB8(c); // 803CEE68
  c->r[0]=R8(c->r[30]+0xFFFF9EE0u); // 803CEE6C
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 803CEE70
  c->r[4]=c->r[31]+c->r[0]; // 803CEE74
  W32(c->r[4]+0x00000004u,c->r[3]); // 803CEE78
  c->r[3]=R8(c->r[30]+0xFFFF9EE0u); // 803CEE7C
  c->r[0]=c->r[3]+0x00000001u; // 803CEE80
  W8(c->r[30]+0xFFFF9EE0u,c->r[0]); // 803CEE84
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 803CEE88
  c->r[30]=R32(c->r[1]+0x00000008u); // 803CEE8C
  c->r[0]=R32(c->r[1]+0x00000014u); // 803CEE90
  c->lr=c->r[0]; // 803CEE94
  c->r[1]=c->r[1]+0x00000010u; // 803CEE98
  return; // 803CEE9C
}

// GKI_shutdown
void f_803CEEA0(Ctx* __restrict c) {
  trace_call(0x803CEEA0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803CEEA0
  c->r[0]=c->lr; // 803CEEA4
  W32(c->r[1]+0x00000014u,c->r[0]); // 803CEEA8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 803CEEAC
  W32(c->r[1]+0x00000008u,c->r[30]); // 803CEEB0
  c->lr=0x803CEEB8u; f_8037BBA4(c); // 803CEEB4
  c->r[30]=0u+0x80790000u; // 803CEEB8
  c->r[0]=0u+0x00000000u; // 803CEEBC
  c->r[5]=R8(c->r[30]+0xFFFF9EE0u); // 803CEEC0
  c->r[31]=c->r[30]+0xFFFF9EE0u; // 803CEEC4
  c->r[4]=c->r[31]+0x00030000u; // 803CEEC8
  c->r[5]=rotl(c->r[5],2)&0xFFFFFFFCu; // 803CEECC
  c->r[5]=c->r[31]+c->r[5]; // 803CEED0
  W32(c->r[5]+0x00000004u,c->r[3]); // 803CEED4
  c->r[3]=R8(c->r[30]+0xFFFF9EE0u); // 803CEED8
  c->r[3]=c->r[3]+0x00000001u; // 803CEEDC
  W8(c->r[30]+0xFFFF9EE0u,c->r[3]); // 803CEEE0
  W8(c->r[4]+0xFFFF8802u,c->r[0]); // 803CEEE4
  c->r[3]=R8(c->r[30]+0xFFFF9EE0u); // 803CEEE8
  c->r[3]=c->r[3]+0xFFFFFFFFu; // 803CEEEC
  c->r[0]=rotl(c->r[3],2)&0x000003FCu; // 803CEEF0
  W8(c->r[30]+0xFFFF9EE0u,c->r[3]); // 803CEEF4
  c->r[3]=c->r[31]+c->r[0]; // 803CEEF8
  c->r[3]=R32(c->r[3]+0x00000004u); // 803CEEFC
  c->lr=0x803CEF04u; f_8037BBCC(c); // 803CEF00
  goto L_803CEF24; // 803CEF04
L_803CEF08:;
  c->r[3]=R8(c->r[30]+0xFFFF9EE0u); // 803CEF08
  c->r[3]=c->r[3]+0xFFFFFFFFu; // 803CEF0C
  c->r[0]=rotl(c->r[3],2)&0x000003FCu; // 803CEF10
  W8(c->r[30]+0xFFFF9EE0u,c->r[3]); // 803CEF14
  c->r[3]=c->r[31]+c->r[0]; // 803CEF18
  c->r[3]=R32(c->r[3]+0x00000004u); // 803CEF1C
  c->lr=0x803CEF24u; f_8037BBCC(c); // 803CEF20
L_803CEF24:;
  c->r[0]=R8(c->r[30]+0xFFFF9EE0u); // 803CEF24
  cmps(c,0,(int32_t)c->r[0],0); // 803CEF28
  if (!crb(c,2)) { IRQCHK(c); goto L_803CEF08; } // 803CEF2C
  c->r[0]=R32(c->r[1]+0x00000014u); // 803CEF30
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 803CEF34
  c->r[30]=R32(c->r[1]+0x00000008u); // 803CEF38
  c->lr=c->r[0]; // 803CEF3C
  c->r[1]=c->r[1]+0x00000010u; // 803CEF40
  return; // 803CEF44
}

// fn_803CEF48
void f_803CEF48(Ctx* __restrict c) {
  trace_call(0x803CEF48u);
  return; // 803CEF48
}

// fn_803CEF4C
void f_803CEF4C(Ctx* __restrict c) {
  trace_call(0x803CEF4Cu);
  return; // 803CEF4C
}

// fn_803CEF50
void f_803CEF50(Ctx* __restrict c) {
  trace_call(0x803CEF50u);
  return; // 803CEF50
}

// fn_803CEF54
void f_803CEF54(Ctx* __restrict c) {
  trace_call(0x803CEF54u);
  return; // 803CEF54
}

// GKI_send_event
void f_803CEF58(Ctx* __restrict c) {
  trace_call(0x803CEF58u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803CEF58
  c->r[0]=c->lr; // 803CEF5C
  cmpu(c,0,c->r[3],0x00000008u); // 803CEF60
  W32(c->r[1]+0x00000014u,c->r[0]); // 803CEF64
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 803CEF68
  c->r[31]=c->r[4]|c->r[4]; // 803CEF6C
  W32(c->r[1]+0x00000008u,c->r[30]); // 803CEF70
  c->r[30]=c->r[3]|c->r[3]; // 803CEF74
  if (crb(c,0)) { goto L_803CEF84; } // 803CEF78
  c->r[3]=0u+0x00000001u; // 803CEF7C
  goto L_803CEFE4; // 803CEF80
L_803CEF84:;
  c->lr=0x803CEF88u; f_8037BBA4(c); // 803CEF84
  c->r[7]=0u+0x80790000u; // 803CEF88
  c->r[0]=rotl(c->r[30],1)&0x000001FEu; // 803CEF8C
  c->r[5]=R8(c->r[7]+0xFFFF9EE0u); // 803CEF90
  c->r[6]=c->r[7]+0xFFFF9EE0u; // 803CEF94
  c->r[4]=c->r[6]+0x00030000u; // 803CEF98
  c->r[5]=rotl(c->r[5],2)&0xFFFFFFFCu; // 803CEF9C
  c->r[5]=c->r[6]+c->r[5]; // 803CEFA0
  c->r[4]=c->r[4]+c->r[0]; // 803CEFA4
  W32(c->r[5]+0x00000004u,c->r[3]); // 803CEFA8
  c->r[3]=R8(c->r[7]+0xFFFF9EE0u); // 803CEFAC
  c->r[0]=c->r[3]+0x00000001u; // 803CEFB0
  W8(c->r[7]+0xFFFF9EE0u,c->r[0]); // 803CEFB4
  c->r[0]=R16(c->r[4]+0xFFFF8808u); // 803CEFB8
  c->r[0]=c->r[0]|c->r[31]; // 803CEFBC
  W16(c->r[4]+0xFFFF8808u,c->r[0]); // 803CEFC0
  c->r[3]=R8(c->r[7]+0xFFFF9EE0u); // 803CEFC4
  c->r[3]=c->r[3]+0xFFFFFFFFu; // 803CEFC8
  c->r[0]=rotl(c->r[3],2)&0x000003FCu; // 803CEFCC
  W8(c->r[7]+0xFFFF9EE0u,c->r[3]); // 803CEFD0
  c->r[3]=c->r[6]+c->r[0]; // 803CEFD4
  c->r[3]=R32(c->r[3]+0x00000004u); // 803CEFD8
  c->lr=0x803CEFE0u; f_8037BBCC(c); // 803CEFDC
  c->r[3]=0u+0x00000000u; // 803CEFE0
L_803CEFE4:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 803CEFE4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 803CEFE8
  c->r[30]=R32(c->r[1]+0x00000008u); // 803CEFEC
  c->lr=c->r[0]; // 803CEFF0
  c->r[1]=c->r[1]+0x00000010u; // 803CEFF4
  return; // 803CEFF8
}

// GKI_get_taskid
void f_803CEFFC(Ctx* __restrict c) {
  trace_call(0x803CEFFCu);
  c->r[3]=0u+0x00000002u; // 803CEFFC
  return; // 803CF000
}

// GKI_enable
void f_803CF004(Ctx* __restrict c) {
  trace_call(0x803CF004u);
  c->r[5]=0u+0x80790000u; // 803CF004
  c->r[4]=R8(c->r[5]+0xFFFF9EE0u); // 803CF008
  c->r[3]=c->r[5]+0xFFFF9EE0u; // 803CF00C
  c->r[4]=c->r[4]+0xFFFFFFFFu; // 803CF010
  c->r[0]=rotl(c->r[4],2)&0x000003FCu; // 803CF014
  W8(c->r[5]+0xFFFF9EE0u,c->r[4]); // 803CF018
  c->r[3]=c->r[3]+c->r[0]; // 803CF01C
  c->r[3]=R32(c->r[3]+0x00000004u); // 803CF020
  f_8037BBCC(c); return; // 803CF024
}

// GKI_disable
void f_803CF028(Ctx* __restrict c) {
  trace_call(0x803CF028u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803CF028
  c->r[0]=c->lr; // 803CF02C
  W32(c->r[1]+0x00000014u,c->r[0]); // 803CF030
  c->lr=0x803CF038u; f_8037BBA4(c); // 803CF034
  c->r[5]=0u+0x80790000u; // 803CF038
  c->r[0]=R8(c->r[5]+0xFFFF9EE0u); // 803CF03C
  c->r[4]=c->r[5]+0xFFFF9EE0u; // 803CF040
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 803CF044
  c->r[4]=c->r[4]+c->r[0]; // 803CF048
  W32(c->r[4]+0x00000004u,c->r[3]); // 803CF04C
  c->r[3]=R8(c->r[5]+0xFFFF9EE0u); // 803CF050
  c->r[0]=c->r[3]+0x00000001u; // 803CF054
  W8(c->r[5]+0xFFFF9EE0u,c->r[0]); // 803CF058
  c->r[0]=R32(c->r[1]+0x00000014u); // 803CF05C
  c->lr=c->r[0]; // 803CF060
  c->r[1]=c->r[1]+0x00000010u; // 803CF064
  return; // 803CF068
}

// fn_803CF06C
void f_803CF06C(Ctx* __restrict c) {
  trace_call(0x803CF06Cu);
  return; // 803CF06C
}

// GKI_os_malloc
void f_803CF070(Ctx* __restrict c) {
  trace_call(0x803CF070u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803CF070
  c->r[0]=c->lr; // 803CF074
  W32(c->r[1]+0x00000014u,c->r[0]); // 803CF078
  c->lr=0x803CF080u; f_80408AA4(c); // 803CF07C
  cmps(c,0,(int32_t)c->r[3],0); // 803CF080
  if (!crb(c,2)) { goto L_803CF08C; } // 803CF084
  c->r[3]=0u+0x00000000u; // 803CF088
L_803CF08C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 803CF08C
  c->lr=c->r[0]; // 803CF090
  c->r[1]=c->r[1]+0x00000010u; // 803CF094
  return; // 803CF098
}

// fn_803CF09C
void f_803CF09C(Ctx* __restrict c) {
  trace_call(0x803CF09Cu);
  f_80408AF4(c); return; // 803CF09C
}

// hcisu_h2_usb_cback
void f_803CF0A0(Ctx* __restrict c) {
  trace_call(0x803CF0A0u);
  cmps(c,0,(int32_t)c->r[3],4); // 803CF0A0
  if (crb(c,2)) { goto L_803CF0B8; } // 803CF0A4
  if (!crb(c,0)) return; // 803CF0A8
  cmps(c,0,(int32_t)c->r[3],0); // 803CF0AC
  if (crb(c,2)) return; // 803CF0B0
  return; // 803CF0B4
L_803CF0B8:;
  c->r[3]=(uint32_t)(int32_t)(int8_t)c->r[4]; // 803CF0B8
  f_803D06B0(c); return; // 803CF0BC
  return; // 803CF0C0
}

// hcisu_h2_receive_msg
void f_803CF0C4(Ctx* __restrict c) {
  trace_call(0x803CF0C4u);
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803CF0C4
  c->r[0]=c->lr; // 803CF0C8
  W32(c->r[1]+0x00000064u,c->r[0]); // 803CF0CC
  c->r[11]=c->r[1]+0x00000060u; // 803CF0D0
  c->lr=0x803CF0D8u; f_803A9BD0(c); // 803CF0D4
  c->r[0]=R8(c->r[4]+0x0000001Eu); // 803CF0D8
  c->r[15]=c->r[4]|c->r[4]; // 803CF0DC
  c->r[19]=0u+0x00000000u; // 803CF0E0
  cmpu(c,0,c->r[0],0x00000002u); // 803CF0E4
  if (crb(c,2)) { goto L_803CF0F4; } // 803CF0E8
  c->r[3]=0u+0x00000000u; // 803CF0EC
  goto L_803CF444; // 803CF0F0
L_803CF0F4:;
  c->r[20]=c->r[3]+0x00000001u; // 803CF0F4
  c->r[0]=rotl(c->r[3],1)&0x0001FFFEu; // 803CF0F8
  c->r[31]=0u+0x807B0000u; // 803CF0FC
  c->r[22]=c->r[4]+c->r[3]; // 803CF100
  c->r[16]=rotl(c->r[20],0)&0x0000FFFFu; // 803CF104
  c->r[23]=rotl(c->r[3],2)&0x0003FFFCu; // 803CF108
  c->r[21]=c->r[4]+c->r[0]; // 803CF10C
  c->r[31]=c->r[31]+0x000029C0u; // 803CF110
  c->r[29]=0u+0x00000000u; // 803CF114
  c->r[30]=0u+0x00000004u; // 803CF118
  c->r[28]=c->r[2]+0x00000E58u; // 803CF11C
  c->r[25]=0u+0x00000003u; // 803CF120
  c->r[24]=0u+0x00000002u; // 803CF124
  c->r[14]=0u+0x80710000u; // 803CF128
  c->r[26]=c->r[2]+0x00000E60u; // 803CF12C
  c->r[27]=0u+0x00000001u; // 803CF130
L_803CF134:;
  c->r[3]=rotl(c->r[16],0)&0x000000FFu; // 803CF134
  c->r[4]=c->r[1]+0x00000008u; // 803CF138
  c->r[5]=0u+0x00000001u; // 803CF13C
  c->lr=0x803CF144u; f_803D0034(c); // 803CF140
  c->r[0]=rotl(c->r[3],0)&0x0000FFFFu; cr0(c,c->r[0]); // 803CF144
  if (crb(c,2)) { goto L_803CF440; } // 803CF148
  c->r[0]=R8(c->r[22]+0x0000001Au); // 803CF14C
  c->r[17]=0u+0x00000000u; // 803CF150
  c->r[19]=c->r[19]+0x00000001u; // 803CF154
  cmps(c,0,(int32_t)c->r[0],2); // 803CF158
  if (crb(c,2)) { goto L_803CF324; } // 803CF15C
  if (!crb(c,0)) { goto L_803CF174; } // 803CF160
  cmps(c,0,(int32_t)c->r[0],0); // 803CF164
  if (crb(c,2)) { goto L_803CF184; } // 803CF168
  if (!crb(c,0)) { goto L_803CF22C; } // 803CF16C
  goto L_803CF420; // 803CF170
L_803CF174:;
  cmps(c,0,(int32_t)c->r[0],4); // 803CF174
  if (crb(c,2)) { goto L_803CF408; } // 803CF178
  if (!crb(c,0)) { goto L_803CF420; } // 803CF17C
  goto L_803CF370; // 803CF180
L_803CF184:;
  cmpu(c,0,c->r[16],0x00000001u); // 803CF184
  if (!crb(c,2)) { goto L_803CF1A0; } // 803CF188
  c->r[3]=0u+0x00000002u; // 803CF18C
  c->lr=0x803CF194u; f_803CDAF4(c); // 803CF190
  W32(c->r[15]+c->r[23],c->r[3]); // 803CF194
  W8(c->r[22]+0x00000014u,c->r[30]); // 803CF198
  goto L_803CF1D4; // 803CF19C
L_803CF1A0:;
  cmpu(c,0,c->r[16],0x00000002u); // 803CF1A0
  if (!crb(c,2)) { goto L_803CF1BC; } // 803CF1A4
  c->r[3]=0u+0x00000003u; // 803CF1A8
  c->lr=0x803CF1B0u; f_803CDAF4(c); // 803CF1AC
  W32(c->r[15]+c->r[23],c->r[3]); // 803CF1B0
  W8(c->r[22]+0x00000014u,c->r[24]); // 803CF1B4
  goto L_803CF1D4; // 803CF1B8
L_803CF1BC:;
  cmpu(c,0,c->r[16],0x00000003u); // 803CF1BC
  if (!crb(c,2)) { goto L_803CF420; } // 803CF1C0
  c->r[3]=0u+0x00000001u; // 803CF1C4
  c->lr=0x803CF1CCu; f_803CDAF4(c); // 803CF1C8
  W32(c->r[15]+c->r[23],c->r[3]); // 803CF1CC
  W8(c->r[22]+0x00000014u,c->r[25]); // 803CF1D0
L_803CF1D4:;
  c->r[3]=R32(c->r[15]+c->r[23]); // 803CF1D4
  cmps(c,0,(int32_t)c->r[3],0); // 803CF1D8
  if (crb(c,2)) { goto L_803CF20C; } // 803CF1DC
  W16(c->r[3]+0x00000002u,c->r[29]); // 803CF1E0
  c->r[0]=R8(c->r[22]+0x00000014u); // 803CF1E4
  c->r[3]=R32(c->r[15]+c->r[23]); // 803CF1E8
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 803CF1EC
  c->r[4]=c->r[26]+c->r[0]; // 803CF1F0
  c->r[0]=R16(c->r[4]+0xFFFFFFFEu); // 803CF1F4
  W16(c->r[3]+0x00000000u,c->r[0]); // 803CF1F8
  c->r[3]=R32(c->r[15]+c->r[23]); // 803CF1FC
  W16(c->r[3]+0x00000004u,c->r[29]); // 803CF200
  W8(c->r[22]+0x0000001Au,c->r[27]); // 803CF204
  goto L_803CF21C; // 803CF208
L_803CF20C:;
  c->r[4]=c->r[14]+0xFFFFAA38u; // 803CF20C
  c->r[3]=0u+0x00070000u; // 803CF210
  c->lr=0x803CF218u; f_803D04E0(c); // 803CF214
  W8(c->r[22]+0x0000001Au,c->r[24]); // 803CF218
L_803CF21C:;
  c->r[0]=R8(c->r[22]+0x00000014u); // 803CF21C
  c->r[3]=c->r[28]+c->r[0]; // 803CF220
  c->r[0]=R8(c->r[3]+0xFFFFFFFFu); // 803CF224
  W16(c->r[21]+0x0000000Cu,c->r[0]); // 803CF228
L_803CF22C:;
  c->r[6]=R32(c->r[15]+c->r[23]); // 803CF22C
  c->r[5]=R8(c->r[1]+0x00000008u); // 803CF230
  c->r[4]=R16(c->r[6]+0x00000002u); // 803CF234
  c->r[3]=c->r[6]+c->r[4]; // 803CF238
  c->r[0]=c->r[4]+0x00000001u; // 803CF23C
  W8(c->r[3]+0x00000008u,c->r[5]); // 803CF240
  W16(c->r[6]+0x00000002u,c->r[0]); // 803CF244
  c->r[3]=R16(c->r[21]+0x0000000Cu); // 803CF248
  c->r[3]=c->r[3]+0xFFFFFFFFu; // 803CF24C
  c->r[0]=rotl(c->r[3],0)&0x0000FFFFu; cr0(c,c->r[0]); // 803CF250
  W16(c->r[21]+0x0000000Cu,c->r[3]); // 803CF254
  if (!crb(c,2)) { goto L_803CF318; } // 803CF258
  c->r[0]=R8(c->r[22]+0x00000014u); // 803CF25C
  c->r[18]=R8(c->r[1]+0x00000008u); // 803CF260
  cmpu(c,0,c->r[0],0x00000002u); // 803CF264
  if (!crb(c,2)) { goto L_803CF2AC; } // 803CF268
  c->r[0]=R8(c->r[22]+0x00000017u); // 803CF26C
  c->r[4]=rotl(c->r[18],8)&0x00FFFF00u; // 803CF270
  c->r[3]=R32(c->r[15]+c->r[23]); // 803CF274
  c->r[0]=c->r[4]+c->r[0]; // 803CF278
  c->r[18]=rotl(c->r[0],0)&0x0000FFFFu; // 803CF27C
  c->lr=0x803CF284u; f_803EBBEC(c); // 803CF280
  cmps(c,0,(int32_t)c->r[3],0); // 803CF284
  W32(c->r[15]+c->r[23],c->r[3]); // 803CF288
  if (!crb(c,2)) { goto L_803CF2AC; } // 803CF28C
  cmps(c,0,(int32_t)c->r[18],0); // 803CF290
  W16(c->r[21]+0x0000000Cu,c->r[18]); // 803CF294
  if (!crb(c,2)) { goto L_803CF2A4; } // 803CF298
  W8(c->r[22]+0x0000001Au,c->r[29]); // 803CF29C
  goto L_803CF420; // 803CF2A0
L_803CF2A4:;
  W8(c->r[22]+0x0000001Au,c->r[30]); // 803CF2A4
  goto L_803CF420; // 803CF2A8
L_803CF2AC:;
  W16(c->r[21]+0x0000000Cu,c->r[18]); // 803CF2AC
  c->r[3]=R32(c->r[15]+c->r[23]); // 803CF2B0
  c->lr=0x803CF2B8u; f_803CDD4C(c); // 803CF2B4
  c->r[0]=R8(c->r[22]+0x00000014u); // 803CF2B8
  c->r[4]=rotl(c->r[3],0)&0x0000FFFFu; // 803CF2BC
  c->r[3]=c->r[28]+c->r[0]; // 803CF2C0
  c->r[0]=R8(c->r[3]+0xFFFFFFFFu); // 803CF2C4
  c->r[3]=c->r[18]+c->r[0]; // 803CF2C8
  c->r[0]=c->r[3]+0x00000008u; // 803CF2CC
  cmpu(c,0,c->r[0],c->r[4]); // 803CF2D0
  if (!crb(c,1)) { goto L_803CF2FC; } // 803CF2D4
  c->r[3]=R32(c->r[15]+c->r[23]); // 803CF2D8
  c->lr=0x803CF2E0u; f_803CDBDC(c); // 803CF2DC
  W32(c->r[15]+c->r[23],c->r[29]); // 803CF2E0
  c->r[3]=0u+0x80710000u; // 803CF2E4
  c->r[4]=c->r[3]+0xFFFFAA74u; // 803CF2E8
  W8(c->r[22]+0x0000001Au,c->r[30]); // 803CF2EC
  c->r[3]=0u+0x00070000u; // 803CF2F0
  c->lr=0x803CF2F8u; f_803D04E0(c); // 803CF2F4
  goto L_803CF420; // 803CF2F8
L_803CF2FC:;
  cmps(c,0,(int32_t)c->r[18],0); // 803CF2FC
  if (crb(c,2)) { goto L_803CF30C; } // 803CF300
  W8(c->r[22]+0x0000001Au,c->r[25]); // 803CF304
  goto L_803CF420; // 803CF308
L_803CF30C:;
  W8(c->r[22]+0x0000001Au,c->r[29]); // 803CF30C
  c->r[17]=0u+0x00000001u; // 803CF310
  goto L_803CF420; // 803CF314
L_803CF318:;
  c->r[0]=R8(c->r[1]+0x00000008u); // 803CF318
  W8(c->r[22]+0x00000017u,c->r[0]); // 803CF31C
  goto L_803CF420; // 803CF320
L_803CF324:;
  c->r[3]=R16(c->r[21]+0x0000000Cu); // 803CF324
  c->r[3]=c->r[3]+0xFFFFFFFFu; // 803CF328
  c->r[0]=rotl(c->r[3],0)&0x0000FFFFu; cr0(c,c->r[0]); // 803CF32C
  W16(c->r[21]+0x0000000Cu,c->r[3]); // 803CF330
  if (!crb(c,2)) { goto L_803CF364; } // 803CF334
  c->r[0]=R8(c->r[22]+0x00000014u); // 803CF338
  c->r[3]=R8(c->r[1]+0x00000008u); // 803CF33C
  cmpu(c,0,c->r[0],0x00000002u); // 803CF340
  if (!crb(c,2)) { goto L_803CF358; } // 803CF344
  c->r[0]=R8(c->r[22]+0x00000017u); // 803CF348
  c->r[3]=rotl(c->r[3],8)&0x00FFFF00u; // 803CF34C
  c->r[0]=c->r[3]+c->r[0]; // 803CF350
  c->r[3]=rotl(c->r[0],0)&0x0000FFFFu; // 803CF354
L_803CF358:;
  W16(c->r[21]+0x0000000Cu,c->r[3]); // 803CF358
  W8(c->r[22]+0x0000001Au,c->r[30]); // 803CF35C
  goto L_803CF420; // 803CF360
L_803CF364:;
  c->r[0]=R8(c->r[1]+0x00000008u); // 803CF364
  W8(c->r[22]+0x00000017u,c->r[0]); // 803CF368
  goto L_803CF420; // 803CF36C
L_803CF370:;
  c->r[7]=R32(c->r[15]+c->r[23]); // 803CF370
  c->r[3]=rotl(c->r[20],0)&0x000000FFu; // 803CF374
  c->r[6]=R8(c->r[1]+0x00000008u); // 803CF378
  c->r[5]=R16(c->r[7]+0x00000002u); // 803CF37C
  c->r[4]=c->r[7]+c->r[5]; // 803CF380
  c->r[0]=c->r[5]+0x00000001u; // 803CF384
  W8(c->r[4]+0x00000008u,c->r[6]); // 803CF388
  W16(c->r[7]+0x00000002u,c->r[0]); // 803CF38C
  c->r[4]=R16(c->r[21]+0x0000000Cu); // 803CF390
  c->r[0]=c->r[4]+0xFFFFFFFFu; // 803CF394
  W16(c->r[21]+0x0000000Cu,c->r[0]); // 803CF398
  c->r[5]=rotl(c->r[0],0)&0x0000FFFFu; // 803CF39C
  c->r[4]=R32(c->r[15]+c->r[23]); // 803CF3A0
  c->r[0]=R16(c->r[4]+0x00000002u); // 803CF3A4
  c->r[4]=c->r[4]+c->r[0]; // 803CF3A8
  c->r[4]=c->r[4]+0x00000008u; // 803CF3AC
  c->lr=0x803CF3B4u; f_803D0034(c); // 803CF3B0
  c->r[4]=R32(c->r[15]+c->r[23]); // 803CF3B4
  c->r[19]=c->r[19]+c->r[3]; // 803CF3B8
  c->r[0]=R16(c->r[4]+0x00000002u); // 803CF3BC
  c->r[0]=c->r[0]+c->r[3]; // 803CF3C0
  W16(c->r[4]+0x00000002u,c->r[0]); // 803CF3C4
  c->r[0]=R16(c->r[21]+0x0000000Cu); // 803CF3C8
  c->r[3]=c->r[0]-c->r[3]; // 803CF3CC
  c->r[0]=rotl(c->r[3],0)&0x0000FFFFu; cr0(c,c->r[0]); // 803CF3D0
  W16(c->r[21]+0x0000000Cu,c->r[3]); // 803CF3D4
  if (!crb(c,2)) { goto L_803CF420; } // 803CF3D8
  c->r[0]=R8(c->r[22]+0x00000014u); // 803CF3DC
  cmpu(c,0,c->r[0],0x00000002u); // 803CF3E0
  if (!crb(c,2)) { goto L_803CF3FC; } // 803CF3E4
  c->lr=0x803CF3ECu; f_803EBDBC(c); // 803CF3E8
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 803CF3EC
  if (!crb(c,2)) { goto L_803CF3FC; } // 803CF3F0
  W8(c->r[22]+0x0000001Au,c->r[29]); // 803CF3F4
  goto L_803CF420; // 803CF3F8
L_803CF3FC:;
  W8(c->r[22]+0x0000001Au,c->r[29]); // 803CF3FC
  c->r[17]=0u+0x00000001u; // 803CF400
  goto L_803CF420; // 803CF404
L_803CF408:;
  c->r[3]=R16(c->r[21]+0x0000000Cu); // 803CF408
  c->r[3]=c->r[3]+0xFFFFFFFFu; // 803CF40C
  c->r[0]=rotl(c->r[3],0)&0x0000FFFFu; cr0(c,c->r[0]); // 803CF410
  W16(c->r[21]+0x0000000Cu,c->r[3]); // 803CF414
  if (!crb(c,2)) { goto L_803CF420; } // 803CF418
  W8(c->r[22]+0x0000001Au,c->r[29]); // 803CF41C
L_803CF420:;
  cmps(c,0,(int32_t)c->r[17],0); // 803CF420
  if (crb(c,2)) { IRQCHK(c); goto L_803CF134; } // 803CF424
  c->r[3]=R8(c->r[31]+0x0000001Fu); // 803CF428
  c->r[4]=0u+0x00000000u; // 803CF42C
  c->r[5]=R32(c->r[15]+c->r[23]); // 803CF430
  c->lr=0x803CF438u; f_803CDD90(c); // 803CF434
  W32(c->r[15]+c->r[23],c->r[29]); // 803CF438
  IRQCHK(c); goto L_803CF134; // 803CF43C
L_803CF440:;
  c->r[3]=c->r[19]|c->r[19]; // 803CF440
L_803CF444:;
  c->r[11]=c->r[1]+0x00000060u; // 803CF444
  c->lr=0x803CF44Cu; f_803A9C1C(c); // 803CF448
  c->r[0]=R32(c->r[1]+0x00000064u); // 803CF44C
  c->lr=c->r[0]; // 803CF450
  c->r[1]=c->r[1]+0x00000060u; // 803CF454
  return; // 803CF458
}

// hcisu_h2_send_msg_now
void f_803CF45C(Ctx* __restrict c) {
  trace_call(0x803CF45Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803CF45C
  c->r[0]=c->lr; // 803CF460
  W32(c->r[1]+0x00000024u,c->r[0]); // 803CF464
  c->r[11]=c->r[1]+0x00000020u; // 803CF468
  c->lr=0x803CF470u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 803CF46C
  c->r[5]=R16(c->r[4]+0x00000000u); // 803CF470
  c->r[27]=c->r[4]|c->r[4]; // 803CF474
  c->r[0]=R16(c->r[4]+0x00000004u); // 803CF478
  cmpu(c,0,c->r[5],0x00002100u); // 803CF47C
  c->r[3]=c->r[4]+c->r[0]; // 803CF480
  c->r[6]=c->r[3]+0x00000008u; // 803CF484
  if (!crb(c,2)) { goto L_803CF494; } // 803CF488
  c->r[28]=0u+0x00000002u; // 803CF48C
  goto L_803CF4B0; // 803CF490
L_803CF494:;
  cmpu(c,0,c->r[5],0x00002200u); // 803CF494
  if (!crb(c,2)) { goto L_803CF4A4; } // 803CF498
  c->r[28]=0u+0x00000003u; // 803CF49C
  goto L_803CF4B0; // 803CF4A0
L_803CF4A4:;
  cmpu(c,0,c->r[5],0x00002000u); // 803CF4A4
  if (!crb(c,2)) { goto L_803CF4B0; } // 803CF4A8
  c->r[28]=0u+0x00000000u; // 803CF4AC
L_803CF4B0:;
  cmpu(c,0,c->r[5],0x00002100u); // 803CF4B0
  if (!crb(c,2)) { goto L_803CF5D4; } // 803CF4B4
  c->r[3]=0u+0x807B0000u; // 803CF4B8
  c->r[4]=R16(c->r[4]+0x00000002u); // 803CF4BC
  c->r[30]=c->r[3]+0x00006270u; // 803CF4C0
  c->r[0]=R16(c->r[30]+0x0000007Eu); // 803CF4C4
  cmpu(c,0,c->r[4],c->r[0]); // 803CF4C8
  if (!crb(c,1)) { goto L_803CF5D4; } // 803CF4CC
  c->r[0]=R8(c->r[6]+0x00000001u); // 803CF4D0
  c->r[3]=R8(c->r[6]+0x00000000u); // 803CF4D4
  c->r[6]=c->r[6]+0x00000002u; // 803CF4D8
  c->r[0]=rotl(c->r[0],8)&0x0000FF00u; // 803CF4DC
  c->r[0]=c->r[3]+c->r[0]; // 803CF4E0
  c->r[0]=rotl(c->r[0],0)&0x0000FFFFu; // 803CF4E4
  c->r[0]=c->r[0]&0x0000CFFFu; cr0(c,c->r[0]); // 803CF4E8
  c->r[31]=c->r[0]|0x00001000u; // 803CF4EC
  c->r[29]=sraw(c,c->r[31],8); // 803CF4F0
  goto L_803CF5C4; // 803CF4F4
L_803CF4F8:;
  c->r[4]=c->r[6]|c->r[6]; // 803CF4F8
  c->r[3]=c->r[28]|c->r[28]; // 803CF4FC
  c->r[6]=c->r[27]|c->r[27]; // 803CF500
  c->lr=0x803CF508u; f_803D003C(c); // 803CF504
  c->r[3]=R16(c->r[27]+0x00000004u); // 803CF508
  c->r[0]=R16(c->r[30]+0x0000007Cu); // 803CF50C
  c->r[4]=R16(c->r[27]+0x00000002u); // 803CF510
  c->r[0]=c->r[3]+c->r[0]; // 803CF514
  W16(c->r[27]+0x00000004u,c->r[0]); // 803CF518
  c->r[0]=rotl(c->r[0],0)&0x0000FFFFu; // 803CF51C
  c->r[3]=c->r[27]+c->r[0]; // 803CF520
  c->r[0]=R16(c->r[30]+0x0000007Cu); // 803CF524
  c->r[6]=c->r[3]+0x0000000Au; // 803CF528
  c->r[0]=c->r[4]-c->r[0]; // 803CF52C
  W16(c->r[27]+0x00000002u,c->r[0]); // 803CF530
  W8(c->r[3]+0x00000008u,c->r[31]); // 803CF534
  W8(c->r[3]+0x00000009u,c->r[29]); // 803CF538
  c->r[3]=R16(c->r[27]+0x00000002u); // 803CF53C
  c->r[0]=R16(c->r[30]+0x0000007Eu); // 803CF540
  cmpu(c,0,c->r[3],c->r[0]); // 803CF544
  if (!crb(c,1)) { goto L_803CF568; } // 803CF548
  c->r[0]=R16(c->r[30]+0x0000007Cu); // 803CF54C
  W8(c->r[6]+0x00000000u,c->r[0]); // 803CF550
  c->r[0]=R16(c->r[30]+0x0000007Cu); // 803CF554
  c->r[0]=sraw(c,c->r[0],8); // 803CF558
  W8(c->r[6]+0x00000001u,c->r[0]); // 803CF55C
  c->r[6]=c->r[6]+0x00000002u; // 803CF560
  goto L_803CF584; // 803CF564
L_803CF568:;
  c->r[0]=c->r[3]+0xFFFFFFFCu; // 803CF568
  W8(c->r[6]+0x00000000u,c->r[0]); // 803CF56C
  c->r[3]=R16(c->r[27]+0x00000002u); // 803CF570
  c->r[0]=c->r[3]+0xFFFFFFFCu; // 803CF574
  c->r[0]=sraw(c,c->r[0],8); // 803CF578
  W8(c->r[6]+0x00000001u,c->r[0]); // 803CF57C
  c->r[6]=c->r[6]+0x00000002u; // 803CF580
L_803CF584:;
  c->r[3]=R16(c->r[27]+0x00000006u); // 803CF584
  cmps(c,0,(int32_t)c->r[3],0); // 803CF588
  if (crb(c,2)) { goto L_803CF5C4; } // 803CF58C
  c->r[3]=c->r[3]+0xFFFFFFFFu; // 803CF590
  c->r[0]=rotl(c->r[3],0)&0x0000FFFFu; cr0(c,c->r[0]); // 803CF594
  W16(c->r[27]+0x00000006u,c->r[3]); // 803CF598
  if (!crb(c,2)) { goto L_803CF5C4; } // 803CF59C
  c->r[0]=0u+0x00001900u; // 803CF5A0
  c->r[3]=0u+0x807B0000u; // 803CF5A4
  W16(c->r[27]+0x00000000u,c->r[0]); // 803CF5A8
  c->r[3]=c->r[3]+0x000029C0u; // 803CF5AC
  c->r[5]=c->r[27]|c->r[27]; // 803CF5B0
  c->r[4]=0u+0x00000000u; // 803CF5B4
  c->r[3]=R8(c->r[3]+0x0000001Fu); // 803CF5B8
  c->lr=0x803CF5C0u; f_803CDD90(c); // 803CF5BC
  goto L_803CF5F0; // 803CF5C0
L_803CF5C4:;
  c->r[5]=R16(c->r[30]+0x0000007Eu); // 803CF5C4
  c->r[0]=R16(c->r[27]+0x00000002u); // 803CF5C8
  cmpu(c,0,c->r[0],c->r[5]); // 803CF5CC
  if (crb(c,1)) { IRQCHK(c); goto L_803CF4F8; } // 803CF5D0
L_803CF5D4:;
  c->r[5]=R16(c->r[27]+0x00000002u); // 803CF5D4
  c->r[4]=c->r[6]|c->r[6]; // 803CF5D8
  c->r[3]=c->r[28]|c->r[28]; // 803CF5DC
  c->r[6]=c->r[27]|c->r[27]; // 803CF5E0
  c->lr=0x803CF5E8u; f_803D003C(c); // 803CF5E4
  c->r[3]=c->r[27]|c->r[27]; // 803CF5E8
  c->lr=0x803CF5F0u; f_803CDBDC(c); // 803CF5EC
L_803CF5F0:;
  c->r[11]=c->r[1]+0x00000020u; // 803CF5F0
  c->lr=0x803CF5F8u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 803CF5F4
  c->r[0]=R32(c->r[1]+0x00000024u); // 803CF5F8
  c->lr=c->r[0]; // 803CF5FC
  c->r[1]=c->r[1]+0x00000020u; // 803CF600
  return; // 803CF604
}

// hcisu_h2_init
void f_803CF608(Ctx* __restrict c) {
  trace_call(0x803CF608u);
  c->r[6]=0u+0x807B0000u; // 803CF608
  c->r[0]=0u+0x00000000u; // 803CF60C
  c->r[6]=c->r[6]+0x000029C0u; // 803CF610
  W8(c->r[6]+0x0000001Eu,c->r[0]); // 803CF614
  W8(c->r[6]+0x0000001Au,c->r[0]); // 803CF618
  W8(c->r[6]+0x0000001Bu,c->r[0]); // 803CF61C
  W8(c->r[6]+0x0000001Cu,c->r[0]); // 803CF620
  W8(c->r[6]+0x0000001Fu,c->r[3]); // 803CF624
  W8(c->r[6]+0x00000020u,c->r[4]); // 803CF628
  W16(c->r[6]+0x00000012u,c->r[5]); // 803CF62C
  return; // 803CF630
}

// hcisu_h2_open
void f_803CF634(Ctx* __restrict c) {
  trace_call(0x803CF634u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803CF634
  c->r[0]=c->lr; // 803CF638
  c->r[5]=0u+0x807B0000u; // 803CF63C
  W32(c->r[1]+0x00000024u,c->r[0]); // 803CF640
  c->r[0]=0u+0x00000000u; // 803CF644
  c->r[5]=c->r[5]+0x000029C0u; // 803CF648
  W8(c->r[1]+0x00000013u,c->r[0]); // 803CF64C
  c->r[0]=0u+0x00000002u; // 803CF650
  c->r[4]=R8(c->r[5]+0x0000001Fu); // 803CF654
  c->r[6]=R16(c->r[3]+0x00000000u); // 803CF658
  W16(c->r[1]+0x0000000Cu,c->r[6]); // 803CF65C
  c->r[6]=R16(c->r[3]+0x00000002u); // 803CF660
  c->r[3]=c->r[1]+0x00000008u; // 803CF664
  W16(c->r[1]+0x0000000Eu,c->r[6]); // 803CF668
  W16(c->r[1]+0x00000010u,c->r[4]); // 803CF66C
  W8(c->r[5]+0x0000001Eu,c->r[0]); // 803CF670
  c->lr=0x803CF678u; f_803CFD24(c); // 803CF674
  c->r[4]=0u+0x803D0000u; // 803CF678
  c->r[3]=c->r[1]+0x00000008u; // 803CF67C
  c->r[4]=c->r[4]+0xFFFFF0A0u; // 803CF680
  c->lr=0x803CF688u; f_803CFF2C(c); // 803CF684
  c->r[0]=R32(c->r[1]+0x00000024u); // 803CF688
  c->r[3]=0u+0x00000001u; // 803CF68C
  c->lr=c->r[0]; // 803CF690
  c->r[1]=c->r[1]+0x00000020u; // 803CF694
  return; // 803CF698
}

// hcisu_h2_close
void f_803CF69C(Ctx* __restrict c) {
  trace_call(0x803CF69Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803CF69C
  c->r[0]=c->lr; // 803CF6A0
  c->r[3]=0u+0x807B0000u; // 803CF6A4
  W32(c->r[1]+0x00000014u,c->r[0]); // 803CF6A8
  c->r[0]=0u+0x00000000u; // 803CF6AC
  c->r[3]=c->r[3]+0x000029C0u; // 803CF6B0
  W8(c->r[3]+0x0000001Eu,c->r[0]); // 803CF6B4
  c->lr=0x803CF6BCu; f_803D0250(c); // 803CF6B8
  c->lr=0x803CF6C0u; f_803D02FC(c); // 803CF6BC
  c->r[0]=R32(c->r[1]+0x00000014u); // 803CF6C0
  c->lr=c->r[0]; // 803CF6C4
  c->r[1]=c->r[1]+0x00000010u; // 803CF6C8
  return; // 803CF6CC
}

// hcisu_h2_send
void f_803CF6D0(Ctx* __restrict c) {
  trace_call(0x803CF6D0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803CF6D0
  c->r[0]=c->lr; // 803CF6D4
  c->r[5]=0u+0x807B0000u; // 803CF6D8
  c->r[4]=c->r[3]|c->r[3]; // 803CF6DC
  W32(c->r[1]+0x00000014u,c->r[0]); // 803CF6E0
  c->r[3]=c->r[5]+0x000029C0u; // 803CF6E4
  c->lr=0x803CF6ECu; f_803CF45C(c); // 803CF6E8
  c->r[0]=R32(c->r[1]+0x00000014u); // 803CF6EC
  c->r[3]=0u+0x00000001u; // 803CF6F0
  c->lr=c->r[0]; // 803CF6F4
  c->r[1]=c->r[1]+0x00000010u; // 803CF6F8
  return; // 803CF6FC
}

// hcisu_h2_handle_event
void f_803CF700(Ctx* __restrict c) {
  trace_call(0x803CF700u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803CF700
  c->r[0]=c->lr; // 803CF704
  c->r[4]=0u+0x807B0000u; // 803CF708
  W32(c->r[1]+0x00000014u,c->r[0]); // 803CF70C
  c->r[4]=c->r[4]+0x000029C0u; // 803CF710
  c->r[0]=c->r[3]+0xFFFFFFF8u; // 803CF714
  c->r[3]=R16(c->r[4]+0x00000012u); // 803CF718
  c->r[0]=c->r[0]-c->r[3]; // 803CF71C
  c->r[3]=rotl(c->r[0],0)&0x0000FFFFu; // 803CF720
  c->lr=0x803CF728u; f_803CF0C4(c); // 803CF724
  c->r[0]=R32(c->r[1]+0x00000014u); // 803CF728
  c->r[3]=0u+0x00000000u; // 803CF72C
  c->lr=c->r[0]; // 803CF730
  c->r[1]=c->r[1]+0x00000010u; // 803CF734
  return; // 803CF738
}

// fn_803CF73C
void f_803CF73C(Ctx* __restrict c) {
  trace_call(0x803CF73Cu);
  c->r[3]=0u+0x00010000u; // 803CF73C
  c->r[3]=c->r[3]+0x00004A78u; // 803CF740
  return; // 803CF744
}

// uusb_CloseDeviceCB
void f_803CF748(Ctx* __restrict c) {
  trace_call(0x803CF748u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803CF748
  c->r[0]=c->lr; // 803CF74C
  c->r[4]=0u+0x807B0000u; // 803CF750
  W32(c->r[1]+0x00000024u,c->r[0]); // 803CF754
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 803CF758
  c->r[31]=c->r[4]+0x00002A00u; // 803CF75C
  W32(c->r[1]+0x00000018u,c->r[30]); // 803CF760
  c->r[30]=0u+0x00000000u; // 803CF764
  W32(c->r[1]+0x00000014u,c->r[29]); // 803CF768
  c->r[29]=c->r[3]|c->r[3]; // 803CF76C
  W32(c->r[4]+0x00002A00u,c->r[30]); // 803CF770
  W8(c->r[31]+0x00000010u,c->r[30]); // 803CF774
  W8(c->r[31]+0x00000011u,c->r[30]); // 803CF778
  W8(c->r[31]+0x00000012u,c->r[30]); // 803CF77C
  W8(c->r[31]+0x00000013u,c->r[30]); // 803CF780
  W8(c->r[13]+0xFFFFE2E8u,c->r[30]); // 803CF784
  c->lr=0x803CF78Cu; f_803FAC6C(c); // 803CF788
  c->lr=0x803CF790u; f_803CF028(c); // 803CF78C
  c->r[0]=0u+0x00000005u; // 803CF790
  W8(c->r[31]+0x00000028u,c->r[30]); // 803CF794
  W8(c->r[31]+0x00000029u,c->r[0]); // 803CF798
  W8(c->r[13]+0xFFFFE2E9u,c->r[30]); // 803CF79C
  c->lr=0x803CF7A4u; f_803CF004(c); // 803CF7A0
  c->r[12]=R32(c->r[31]+0x00000020u); // 803CF7A4
  cmps(c,0,(int32_t)c->r[12],0); // 803CF7A8
  if (crb(c,2)) { goto L_803CF7C0; } // 803CF7AC
  c->r[4]=(uint32_t)(int32_t)(int8_t)c->r[29]; // 803CF7B0
  c->r[3]=0u+0x00000004u; // 803CF7B4
  c->ctr=c->r[12]; // 803CF7B8
  if (true) { c->lr=0x803CF7C0u; dispatch(c,c->ctr); } // 803CF7BC
L_803CF7C0:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 803CF7C0
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 803CF7C4
  c->r[30]=R32(c->r[1]+0x00000018u); // 803CF7C8
  c->r[29]=R32(c->r[1]+0x00000014u); // 803CF7CC
  c->lr=c->r[0]; // 803CF7D0
  c->r[1]=c->r[1]+0x00000020u; // 803CF7D4
  return; // 803CF7D8
}

// uusb_ReadIntrDataCB
void f_803CF7DC(Ctx* __restrict c) {
  trace_call(0x803CF7DCu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803CF7DC
  c->r[0]=c->lr; // 803CF7E0
  c->r[5]=0u+0x00000000u; // 803CF7E4
  W32(c->r[1]+0x00000024u,c->r[0]); // 803CF7E8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 803CF7EC
  c->r[31]=0u+0x807B0000u; // 803CF7F0
  c->r[31]=c->r[31]+0x00002A00u; // 803CF7F4
  W32(c->r[1]+0x00000018u,c->r[30]); // 803CF7F8
  c->r[30]=c->r[4]|c->r[4]; // 803CF7FC
  W32(c->r[1]+0x00000014u,c->r[29]); // 803CF800
  c->r[29]=c->r[3]|c->r[3]; // 803CF804
  c->r[0]=R8(c->r[31]+0x00000029u); // 803CF808
  W8(c->r[31]+0x0000002Bu,c->r[5]); // 803CF80C
  cmpu(c,0,c->r[0],0x00000002u); // 803CF810
  if (crb(c,2)) { goto L_803CF834; } // 803CF814
  c->r[3]=c->r[30]|c->r[30]; // 803CF818
  c->lr=0x803CF820u; f_803CDBDC(c); // 803CF81C
  c->r[3]=R8(c->r[31]+0x0000001Cu); // 803CF820
  c->lr=0x803CF828u; f_803CE758(c); // 803CF824
  c->r[0]=0u+0x000000FFu; // 803CF828
  W8(c->r[31]+0x0000001Cu,c->r[0]); // 803CF82C
  goto L_803CF8D4; // 803CF830
L_803CF834:;
  c->r[0]=0u+0x00000000u; // 803CF834
  cmpu(c,0,c->r[4],c->r[0]); // 803CF838
  if (crb(c,2)) { goto L_803CF8D0; } // 803CF83C
  cmps(c,0,(int32_t)c->r[3],0); // 803CF840
  if (crb(c,1)) { goto L_803CF854; } // 803CF844
  c->r[3]=c->r[30]|c->r[30]; // 803CF848
  c->lr=0x803CF850u; f_803CDBDC(c); // 803CF84C
  goto L_803CF8D0; // 803CF850
L_803CF854:;
  c->r[3]=0u+0x00000002u; // 803CF854
  c->lr=0x803CF85Cu; f_803CDAF4(c); // 803CF858
  cmps(c,0,(int32_t)c->r[3],0); // 803CF85C
  c->r[31]=c->r[3]|c->r[3]; // 803CF860
  if (!crb(c,2)) { goto L_803CF874; } // 803CF864
  c->r[3]=c->r[30]|c->r[30]; // 803CF868
  c->lr=0x803CF870u; f_803CDBDC(c); // 803CF86C
  goto L_803CF8D0; // 803CF870
L_803CF874:;
  c->r[0]=R16(c->r[30]+0x00000004u); // 803CF874
  c->r[4]=rotl(c->r[29],0)&0x0000FFFFu; // 803CF878
  c->r[6]=0u+0x00001000u; // 803CF87C
  W16(c->r[30]+0x00000002u,c->r[29]); // 803CF880
  c->r[5]=c->r[4]+c->r[0]; // 803CF884
  c->r[4]=c->r[30]|c->r[30]; // 803CF888
  c->r[0]=c->r[5]+0x00000008u; // 803CF88C
  W16(c->r[30]+0x00000000u,c->r[6]); // 803CF890
  c->r[5]=rotl(c->r[0],0)&0xFFFFFFFCu; // 803CF894
  c->r[5]=c->r[5]+0x00000004u; // 803CF898
  c->lr=0x803CF8A0u; f_802DC484(c); // 803CF89C
  c->r[5]=0u+0x807B0000u; // 803CF8A0
  c->r[7]=0u+0x803D0000u; // 803CF8A4
  c->r[5]=c->r[5]+0x00002A60u; // 803CF8A8
  c->r[3]=c->r[31]|c->r[31]; // 803CF8AC
  c->r[8]=c->r[5]+0x00001000u; // 803CF8B0
  c->r[7]=c->r[7]+0x000003E8u; // 803CF8B4
  c->r[4]=0u+0x00000000u; // 803CF8B8
  c->r[5]=0u+0x00000000u; // 803CF8BC
  c->r[6]=0u+0x00000000u; // 803CF8C0
  c->lr=0x803CF8C8u; f_80377C48(c); // 803CF8C4
  c->r[3]=c->r[30]|c->r[30]; // 803CF8C8
  c->lr=0x803CF8D0u; f_803CDBDC(c); // 803CF8CC
L_803CF8D0:;
  c->lr=0x803CF8D4u; f_803CFA8C(c); // 803CF8D0
L_803CF8D4:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 803CF8D4
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 803CF8D8
  c->r[30]=R32(c->r[1]+0x00000018u); // 803CF8DC
  c->r[29]=R32(c->r[1]+0x00000014u); // 803CF8E0
  c->lr=c->r[0]; // 803CF8E4
  c->r[1]=c->r[1]+0x00000020u; // 803CF8E8
  return; // 803CF8EC
}

// uusb_ReadBulkDataCB
void f_803CF8F0(Ctx* __restrict c) {
  trace_call(0x803CF8F0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803CF8F0
  c->r[0]=c->lr; // 803CF8F4
  W32(c->r[1]+0x00000024u,c->r[0]); // 803CF8F8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 803CF8FC
  W32(c->r[1]+0x00000018u,c->r[30]); // 803CF900
  c->r[30]=0u+0x807B0000u; // 803CF904
  c->r[30]=c->r[30]+0x00002A00u; // 803CF908
  W32(c->r[1]+0x00000014u,c->r[29]); // 803CF90C
  c->r[29]=c->r[4]|c->r[4]; // 803CF910
  W32(c->r[1]+0x00000010u,c->r[28]); // 803CF914
  c->r[0]=R8(c->r[30]+0x00000029u); // 803CF918
  cmpu(c,0,c->r[0],0x00000002u); // 803CF91C
  if (crb(c,2)) { goto L_803CF940; } // 803CF920
  c->r[3]=c->r[29]|c->r[29]; // 803CF924
  c->lr=0x803CF92Cu; f_803CDBDC(c); // 803CF928
  c->r[3]=R8(c->r[30]+0x0000001Du); // 803CF92C
  c->lr=0x803CF934u; f_803CE758(c); // 803CF930
  c->r[0]=0u+0x000000FFu; // 803CF934
  W8(c->r[30]+0x0000001Du,c->r[0]); // 803CF938
  goto L_803CFA6C; // 803CF93C
L_803CF940:;
  cmps(c,0,(int32_t)c->r[3],0); // 803CF940
  if (crb(c,1)) { goto L_803CF954; } // 803CF944
  c->r[3]=c->r[29]|c->r[29]; // 803CF948
  c->lr=0x803CF950u; f_803CDBDC(c); // 803CF94C
  goto L_803CF9EC; // 803CF950
L_803CF954:;
  W16(c->r[4]+0x00000002u,c->r[3]); // 803CF954
  c->r[3]=0u+0x00000003u; // 803CF958
  c->lr=0x803CF960u; f_803CDAF4(c); // 803CF95C
  cmps(c,0,(int32_t)c->r[3],0); // 803CF960
  c->r[28]=c->r[3]|c->r[3]; // 803CF964
  if (!crb(c,2)) { goto L_803CF978; } // 803CF968
  c->r[3]=c->r[29]|c->r[29]; // 803CF96C
  c->lr=0x803CF974u; f_803CDBDC(c); // 803CF970
  goto L_803CF9EC; // 803CF974
L_803CF978:;
  c->r[5]=R16(c->r[29]+0x00000002u); // 803CF978
  c->r[4]=c->r[29]|c->r[29]; // 803CF97C
  c->r[0]=R16(c->r[29]+0x00000004u); // 803CF980
  c->r[5]=c->r[5]+c->r[0]; // 803CF984
  c->r[0]=c->r[5]+0x00000008u; // 803CF988
  c->r[5]=rotl(c->r[0],0)&0xFFFFFFFCu; // 803CF98C
  c->r[5]=c->r[5]+0x00000004u; // 803CF990
  c->lr=0x803CF998u; f_802DC484(c); // 803CF994
  c->r[3]=c->r[28]|c->r[28]; // 803CF998
  c->lr=0x803CF9A0u; f_803EBBEC(c); // 803CF99C
  c->r[0]=0u+0x00000000u; // 803CF9A0
  c->r[28]=c->r[3]|c->r[3]; // 803CF9A4
  cmpu(c,0,c->r[3],c->r[0]); // 803CF9A8
  if (crb(c,2)) { goto L_803CF9E4; } // 803CF9AC
  c->lr=0x803CF9B4u; f_803EBDBC(c); // 803CF9B0
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 803CF9B4
  if (crb(c,2)) { goto L_803CF9E4; } // 803CF9B8
  c->r[5]=0u+0x807B0000u; // 803CF9BC
  c->r[7]=0u+0x803D0000u; // 803CF9C0
  c->r[5]=c->r[5]+0x00003A60u; // 803CF9C4
  c->r[3]=c->r[28]|c->r[28]; // 803CF9C8
  c->r[8]=c->r[5]+0x00001000u; // 803CF9CC
  c->r[7]=c->r[7]+0x000003E8u; // 803CF9D0
  c->r[4]=0u+0x00000000u; // 803CF9D4
  c->r[5]=0u+0x00000000u; // 803CF9D8
  c->r[6]=0u+0x00000000u; // 803CF9DC
  c->lr=0x803CF9E4u; f_80377C48(c); // 803CF9E0
L_803CF9E4:;
  c->r[3]=c->r[29]|c->r[29]; // 803CF9E4
  c->lr=0x803CF9ECu; f_803CDBDC(c); // 803CF9E8
L_803CF9EC:;
  c->r[30]=0u+0x807B0000u; // 803CF9EC
  c->r[31]=c->r[30]+0x00002A00u; // 803CF9F0
L_803CF9F4:;
  c->r[3]=R8(c->r[31]+0x0000001Du); // 803CF9F4
  c->lr=0x803CF9FCu; f_803CDAF4(c); // 803CF9F8
  cmps(c,0,(int32_t)c->r[3],0); // 803CF9FC
  c->r[28]=c->r[3]|c->r[3]; // 803CFA00
  if (crb(c,2)) { IRQCHK(c); goto L_803CF9F4; } // 803CFA04
  c->r[4]=0u+0x00001100u; // 803CFA08
  c->r[0]=c->r[3]+0x00000027u; // 803CFA0C
  W16(c->r[3]+0x00000000u,c->r[4]); // 803CFA10
  c->r[4]=0u+0x00000000u; // 803CFA14
  c->r[29]=rotl(c->r[0],0)&0xFFFFFFE0u; // 803CFA18
  c->r[0]=c->r[3]+0x00000008u; // 803CFA1C
  W16(c->r[3]+0x00000002u,c->r[4]); // 803CFA20
  c->r[0]=c->r[29]-c->r[0]; // 803CFA24
  W16(c->r[3]+0x00000004u,c->r[0]); // 803CFA28
  c->lr=0x803CFA30u; f_803CDD4C(c); // 803CFA2C
  c->r[3]=rotl(c->r[3],0)&0x0000FFFFu; // 803CFA30
  c->r[0]=R16(c->r[28]+0x00000004u); // 803CFA34
  c->r[5]=c->r[3]+0xFFFFFFD8u; // 803CFA38
  c->r[7]=0u+0x803D0000u; // 803CFA3C
  c->r[3]=R32(c->r[30]+0x00002A00u); // 803CFA40
  c->r[6]=c->r[29]|c->r[29]; // 803CFA44
  c->r[4]=R8(c->r[31]+0x00000011u); // 803CFA48
  c->r[8]=c->r[28]|c->r[28]; // 803CFA4C
  c->r[5]=c->r[5]-c->r[0]; // 803CFA50
  c->r[7]=c->r[7]+0xFFFFF8F0u; // 803CFA54
  c->lr=0x803CFA5Cu; f_803FB7A4(c); // 803CFA58
  cmps(c,0,(int32_t)c->r[3],0); // 803CFA5C
  if (crb(c,2)) { goto L_803CFA6C; } // 803CFA60
  c->r[3]=c->r[28]|c->r[28]; // 803CFA64
  c->lr=0x803CFA6Cu; f_803CDBDC(c); // 803CFA68
L_803CFA6C:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 803CFA6C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 803CFA70
  c->r[30]=R32(c->r[1]+0x00000018u); // 803CFA74
  c->r[29]=R32(c->r[1]+0x00000014u); // 803CFA78
  c->r[28]=R32(c->r[1]+0x00000010u); // 803CFA7C
  c->lr=c->r[0]; // 803CFA80
  c->r[1]=c->r[1]+0x00000020u; // 803CFA84
  return; // 803CFA88
}

// uusb_issue_intr_read
void f_803CFA8C(Ctx* __restrict c) {
  trace_call(0x803CFA8Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803CFA8C
  c->r[0]=c->lr; // 803CFA90
  W32(c->r[1]+0x00000024u,c->r[0]); // 803CFA94
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 803CFA98
  W32(c->r[1]+0x00000018u,c->r[30]); // 803CFA9C
  c->r[30]=0u+0x807B0000u; // 803CFAA0
  c->r[31]=c->r[30]+0x00002A00u; // 803CFAA4
  W32(c->r[1]+0x00000014u,c->r[29]); // 803CFAA8
  W32(c->r[1]+0x00000010u,c->r[28]); // 803CFAAC
L_803CFAB0:;
  c->r[3]=R8(c->r[31]+0x0000001Cu); // 803CFAB0
  c->lr=0x803CFAB8u; f_803CDAF4(c); // 803CFAB4
  cmps(c,0,(int32_t)c->r[3],0); // 803CFAB8
  c->r[29]=c->r[3]|c->r[3]; // 803CFABC
  if (crb(c,2)) { IRQCHK(c); goto L_803CFAB0; } // 803CFAC0
  c->r[4]=0u+0x00001000u; // 803CFAC4
  c->r[0]=c->r[3]+0x00000027u; // 803CFAC8
  W16(c->r[3]+0x00000000u,c->r[4]); // 803CFACC
  c->r[4]=0u+0x00000000u; // 803CFAD0
  c->r[28]=rotl(c->r[0],0)&0xFFFFFFE0u; // 803CFAD4
  c->r[0]=c->r[3]+0x00000008u; // 803CFAD8
  W16(c->r[3]+0x00000002u,c->r[4]); // 803CFADC
  c->r[0]=c->r[28]-c->r[0]; // 803CFAE0
  W16(c->r[3]+0x00000004u,c->r[0]); // 803CFAE4
  c->lr=0x803CFAECu; f_803CDD4C(c); // 803CFAE8
  c->r[3]=rotl(c->r[3],0)&0x0000FFFFu; // 803CFAEC
  c->r[0]=R16(c->r[29]+0x00000004u); // 803CFAF0
  c->r[5]=c->r[3]+0xFFFFFFD8u; // 803CFAF4
  c->r[7]=0u+0x803D0000u; // 803CFAF8
  c->r[3]=R32(c->r[30]+0x00002A00u); // 803CFAFC
  c->r[6]=c->r[28]|c->r[28]; // 803CFB00
  c->r[4]=R8(c->r[31]+0x00000012u); // 803CFB04
  c->r[8]=c->r[29]|c->r[29]; // 803CFB08
  c->r[5]=c->r[5]-c->r[0]; // 803CFB0C
  c->r[7]=c->r[7]+0xFFFFF7DCu; // 803CFB10
  c->lr=0x803CFB18u; f_803FB730(c); // 803CFB14
  cmps(c,0,(int32_t)c->r[3],0); // 803CFB18
  if (crb(c,2)) { goto L_803CFB28; } // 803CFB1C
  c->r[3]=c->r[29]|c->r[29]; // 803CFB20
  c->lr=0x803CFB28u; f_803CDBDC(c); // 803CFB24
L_803CFB28:;
  c->r[3]=0u+0x807B0000u; // 803CFB28
  c->r[0]=0u+0x00000001u; // 803CFB2C
  c->r[3]=c->r[3]+0x00002A00u; // 803CFB30
  W8(c->r[3]+0x0000002Bu,c->r[0]); // 803CFB34
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 803CFB38
  c->r[30]=R32(c->r[1]+0x00000018u); // 803CFB3C
  c->r[29]=R32(c->r[1]+0x00000014u); // 803CFB40
  c->r[28]=R32(c->r[1]+0x00000010u); // 803CFB44
  c->r[0]=R32(c->r[1]+0x00000024u); // 803CFB48
  c->lr=c->r[0]; // 803CFB4C
  c->r[1]=c->r[1]+0x00000020u; // 803CFB50
  return; // 803CFB54
}

// uusb_WriteCtrlDataCB
void f_803CFB58(Ctx* __restrict c) {
  trace_call(0x803CFB58u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803CFB58
  c->r[0]=c->lr; // 803CFB5C
  cmps(c,0,(int32_t)c->r[4],0); // 803CFB60
  W32(c->r[1]+0x00000024u,c->r[0]); // 803CFB64
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 803CFB68
  W32(c->r[1]+0x00000018u,c->r[30]); // 803CFB6C
  W32(c->r[1]+0x00000014u,c->r[29]); // 803CFB70
  if (crb(c,2)) { goto L_803CFB9C; } // 803CFB74
  c->r[3]=c->r[4]|c->r[4]; // 803CFB78
  c->lr=0x803CFB80u; f_803CDBDC(c); // 803CFB7C
  c->lr=0x803CFB84u; f_803CF028(c); // 803CFB80
  c->r[4]=0u+0x807B0000u; // 803CFB84
  c->r[4]=c->r[4]+0x00002A00u; // 803CFB88
  c->r[3]=R8(c->r[4]+0x00000048u); // 803CFB8C
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 803CFB90
  W8(c->r[4]+0x00000048u,c->r[0]); // 803CFB94
  c->lr=0x803CFB9Cu; f_803CF004(c); // 803CFB98
L_803CFB9C:;
  c->r[30]=0u+0x807B0000u; // 803CFB9C
  c->r[31]=c->r[30]+0x00002A00u; // 803CFBA0
  c->r[0]=R8(c->r[31]+0x00000048u); // 803CFBA4
  cmpu(c,0,c->r[0],0x00000005u); // 803CFBA8
  if (!crb(c,0)) { goto L_803CFC28; } // 803CFBAC
  c->r[0]=R16(c->r[31]+0x00000044u); // 803CFBB0
  cmps(c,0,(int32_t)c->r[0],0); // 803CFBB4
  if (crb(c,2)) { goto L_803CFC28; } // 803CFBB8
  c->r[3]=c->r[31]+0x0000003Cu; // 803CFBBC
  c->lr=0x803CFBC4u; f_803CE278(c); // 803CFBC0
  W32(c->r[1]+0x00000008u,c->r[3]); // 803CFBC4
  c->r[29]=c->r[3]|c->r[3]; // 803CFBC8
  c->r[10]=0u+0x803D0000u; // 803CFBCC
  c->r[4]=0u+0x00000020u; // 803CFBD0
  c->r[0]=R16(c->r[3]+0x00000004u); // 803CFBD4
  c->r[10]=c->r[10]+0xFFFFFB58u; // 803CFBD8
  c->r[3]=R32(c->r[30]+0x00002A00u); // 803CFBDC
  c->r[5]=0u+0x00000000u; // 803CFBE0
  c->r[6]=c->r[29]+c->r[0]; // 803CFBE4
  c->r[8]=R16(c->r[29]+0x00000002u); // 803CFBE8
  c->r[9]=c->r[6]+0x00000008u; // 803CFBEC
  c->r[7]=0u+0x00000000u; // 803CFBF0
  c->r[6]=0u+0x00000000u; // 803CFBF4
  c->lr=0x803CFBFCu; f_803FBE88(c); // 803CFBF8
  cmps(c,0,(int32_t)c->r[3],0); // 803CFBFC
  if (!crb(c,0)) { goto L_803CFC14; } // 803CFC00
  c->r[4]=c->r[29]|c->r[29]; // 803CFC04
  c->r[3]=c->r[31]+0x0000003Cu; // 803CFC08
  c->lr=0x803CFC10u; f_803CE138(c); // 803CFC0C
  goto L_803CFC28; // 803CFC10
L_803CFC14:;
  c->lr=0x803CFC18u; f_803CF028(c); // 803CFC14
  c->r[3]=R8(c->r[31]+0x00000048u); // 803CFC18
  c->r[0]=c->r[3]+0x00000001u; // 803CFC1C
  W8(c->r[31]+0x00000048u,c->r[0]); // 803CFC20
  c->lr=0x803CFC28u; f_803CF004(c); // 803CFC24
L_803CFC28:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 803CFC28
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 803CFC2C
  c->r[30]=R32(c->r[1]+0x00000018u); // 803CFC30
  c->r[29]=R32(c->r[1]+0x00000014u); // 803CFC34
  c->lr=c->r[0]; // 803CFC38
  c->r[1]=c->r[1]+0x00000020u; // 803CFC3C
  return; // 803CFC40
}

// uusb_WriteBulkDataCB
void f_803CFC44(Ctx* __restrict c) {
  trace_call(0x803CFC44u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803CFC44
  c->r[0]=c->lr; // 803CFC48
  cmps(c,0,(int32_t)c->r[4],0); // 803CFC4C
  W32(c->r[1]+0x00000024u,c->r[0]); // 803CFC50
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 803CFC54
  W32(c->r[1]+0x00000018u,c->r[30]); // 803CFC58
  W32(c->r[1]+0x00000014u,c->r[29]); // 803CFC5C
  if (crb(c,2)) { goto L_803CFC88; } // 803CFC60
  c->r[3]=c->r[4]|c->r[4]; // 803CFC64
  c->lr=0x803CFC6Cu; f_803CDBDC(c); // 803CFC68
  c->lr=0x803CFC70u; f_803CF028(c); // 803CFC6C
  c->r[4]=0u+0x807B0000u; // 803CFC70
  c->r[4]=c->r[4]+0x00002A00u; // 803CFC74
  c->r[3]=R8(c->r[4]+0x00000038u); // 803CFC78
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 803CFC7C
  W8(c->r[4]+0x00000038u,c->r[0]); // 803CFC80
  c->lr=0x803CFC88u; f_803CF004(c); // 803CFC84
L_803CFC88:;
  c->r[30]=0u+0x807B0000u; // 803CFC88
  c->r[31]=c->r[30]+0x00002A00u; // 803CFC8C
  c->r[0]=R8(c->r[31]+0x00000038u); // 803CFC90
  cmpu(c,0,c->r[0],0x00000005u); // 803CFC94
  if (!crb(c,0)) { goto L_803CFD08; } // 803CFC98
  c->r[0]=R16(c->r[31]+0x00000034u); // 803CFC9C
  cmps(c,0,(int32_t)c->r[0],0); // 803CFCA0
  if (crb(c,2)) { goto L_803CFD08; } // 803CFCA4
  c->r[3]=c->r[31]+0x0000002Cu; // 803CFCA8
  c->lr=0x803CFCB0u; f_803CE278(c); // 803CFCAC
  c->r[0]=R16(c->r[3]+0x00000004u); // 803CFCB0
  c->r[29]=c->r[3]|c->r[3]; // 803CFCB4
  c->r[7]=0u+0x803D0000u; // 803CFCB8
  c->r[3]=R32(c->r[30]+0x00002A00u); // 803CFCBC
  c->r[6]=c->r[29]+c->r[0]; // 803CFCC0
  c->r[4]=R8(c->r[31]+0x00000010u); // 803CFCC4
  c->r[5]=R16(c->r[29]+0x00000002u); // 803CFCC8
  c->r[8]=c->r[29]|c->r[29]; // 803CFCCC
  c->r[7]=c->r[7]+0xFFFFFC44u; // 803CFCD0
  c->r[6]=c->r[6]+0x00000008u; // 803CFCD4
  c->lr=0x803CFCDCu; f_803FB844(c); // 803CFCD8
  cmps(c,0,(int32_t)c->r[3],0); // 803CFCDC
  if (!crb(c,0)) { goto L_803CFCF4; } // 803CFCE0
  c->r[4]=c->r[29]|c->r[29]; // 803CFCE4
  c->r[3]=c->r[31]+0x0000002Cu; // 803CFCE8
  c->lr=0x803CFCF0u; f_803CE138(c); // 803CFCEC
  goto L_803CFD08; // 803CFCF0
L_803CFCF4:;
  c->lr=0x803CFCF8u; f_803CF028(c); // 803CFCF4
  c->r[3]=R8(c->r[31]+0x00000038u); // 803CFCF8
  c->r[0]=c->r[3]+0x00000001u; // 803CFCFC
  W8(c->r[31]+0x00000038u,c->r[0]); // 803CFD00
  c->lr=0x803CFD08u; f_803CF004(c); // 803CFD04
L_803CFD08:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 803CFD08
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 803CFD0C
  c->r[30]=R32(c->r[1]+0x00000018u); // 803CFD10
  c->r[29]=R32(c->r[1]+0x00000014u); // 803CFD14
  c->lr=c->r[0]; // 803CFD18
  c->r[1]=c->r[1]+0x00000020u; // 803CFD1C
  return; // 803CFD20
}

// UUSB_Register
void f_803CFD24(Ctx* __restrict c) {
  trace_call(0x803CFD24u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803CFD24
  c->r[0]=c->lr; // 803CFD28
  c->r[4]=0u+0x00000000u; // 803CFD2C
  c->r[5]=0u+0x0000004Cu; // 803CFD30
  W32(c->r[1]+0x00000014u,c->r[0]); // 803CFD34
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 803CFD38
  c->r[31]=c->r[3]|c->r[3]; // 803CFD3C
  W32(c->r[1]+0x00000008u,c->r[30]); // 803CFD40
  c->r[30]=0u+0x807B0000u; // 803CFD44
  c->r[3]=c->r[30]+0x00002A00u; // 803CFD48
  c->lr=0x803CFD50u; f_800043EC(c); // 803CFD4C
  c->lr=0x803CFD54u; f_803CF028(c); // 803CFD50
  c->r[30]=c->r[30]+0x00002A00u; // 803CFD54
  c->r[0]=0u+0x00000005u; // 803CFD58
  W8(c->r[30]+0x00000029u,c->r[0]); // 803CFD5C
  c->lr=0x803CFD64u; f_803CF004(c); // 803CFD60
  c->r[0]=R8(c->r[13]+0xFFFFE2E9u); // 803CFD64
  cmps(c,0,(int32_t)c->r[0],0); // 803CFD68
  if (!crb(c,2)) { goto L_803CFD80; } // 803CFD6C
  c->r[3]=0u+0x00000000u; // 803CFD70
  c->r[0]=0u+0x00000001u; // 803CFD74
  W8(c->r[30]+0x00000028u,c->r[3]); // 803CFD78
  W8(c->r[13]+0xFFFFE2E9u,c->r[0]); // 803CFD7C
L_803CFD80:;
  c->lr=0x803CFD84u; f_803C6CE4(c); // 803CFD80
  cmps(c,0,(int32_t)c->r[3],0); // 803CFD84
  if (!crb(c,2)) { goto L_803CFF14; } // 803CFD88
  c->lr=0x803CFD90u; f_803FAB74(c); // 803CFD8C
  cmps(c,0,(int32_t)c->r[3],0); // 803CFD90
  if (!crb(c,2)) { goto L_803CFF14; } // 803CFD94
  c->r[0]=R8(c->r[13]+0xFFFFE2F4u); // 803CFD98
  c->r[4]=0u+0x807B0000u; // 803CFD9C
  c->r[4]=c->r[4]+0x00002A00u; // 803CFDA0
  cmpu(c,0,c->r[0],0x00000001u); // 803CFDA4
  W32(c->r[4]+0x00000024u,c->r[31]); // 803CFDA8
  if (!crb(c,2)) { goto L_803CFDC4; } // 803CFDAC
  c->r[3]=R32(c->r[13]+0xFFFFE2F8u); // 803CFDB0
  c->r[0]=R32(c->r[13]+0xFFFFE2FCu); // 803CFDB4
  W32(c->r[4]+0x00000014u,c->r[3]); // 803CFDB8
  W32(c->r[4]+0x00000018u,c->r[0]); // 803CFDBC
  goto L_803CFDD4; // 803CFDC0
L_803CFDC4:;
  c->r[3]=0u+0x0000057Eu; // 803CFDC4
  c->r[0]=0u+0x00000305u; // 803CFDC8
  W32(c->r[4]+0x00000014u,c->r[3]); // 803CFDCC
  W32(c->r[4]+0x00000018u,c->r[0]); // 803CFDD0
L_803CFDD4:;
  c->r[0]=R32(c->r[13]+0xFFFFE2F0u); // 803CFDD4
  c->r[6]=0u+0x807B0000u; // 803CFDD8
  c->r[6]=c->r[6]+0x00002A00u; // 803CFDDC
  c->r[3]=0u+0x00000000u; // 803CFDE0
  cmpu(c,0,c->r[0],0x00000001u); // 803CFDE4
  W8(c->r[6]+0x00000010u,c->r[3]); // 803CFDE8
  c->r[5]=R32(c->r[6]+0x00000018u); // 803CFDEC
  W8(c->r[6]+0x00000011u,c->r[3]); // 803CFDF0
  c->r[0]=R32(c->r[6]+0x00000014u); // 803CFDF4
  W8(c->r[6]+0x00000012u,c->r[3]); // 803CFDF8
  W8(c->r[6]+0x00000013u,c->r[3]); // 803CFDFC
  if (!crb(c,2)) { goto L_803CFE48; } // 803CFE00
  c->r[3]=R32(c->r[13]+0xFFFFE2ECu); // 803CFE04
  cmps(c,0,(int32_t)c->r[3],0); // 803CFE08
  if (!crb(c,2)) { goto L_803CFE28; } // 803CFE0C
  c->r[4]=rotl(c->r[0],0)&0x0000FFFFu; // 803CFE10
  c->r[5]=rotl(c->r[5],0)&0x0000FFFFu; // 803CFE14
  c->r[3]=c->r[13]+0xFFFFA088u; // 803CFE18
  c->lr=0x803CFE20u; f_803FAE1C(c); // 803CFE1C
  c->r[30]=c->r[3]|c->r[3]; // 803CFE20
  goto L_803CFE5C; // 803CFE24
L_803CFE28:;
  cmpu(c,0,c->r[3],0x00000001u); // 803CFE28
  if (!crb(c,2)) { goto L_803CFE5C; } // 803CFE2C
  c->r[4]=rotl(c->r[0],0)&0x0000FFFFu; // 803CFE30
  c->r[5]=rotl(c->r[5],0)&0x0000FFFFu; // 803CFE34
  c->r[3]=c->r[13]+0xFFFFA08Cu; // 803CFE38
  c->lr=0x803CFE40u; f_803FAE1C(c); // 803CFE3C
  c->r[30]=c->r[3]|c->r[3]; // 803CFE40
  goto L_803CFE5C; // 803CFE44
L_803CFE48:;
  c->r[4]=rotl(c->r[0],0)&0x0000FFFFu; // 803CFE48
  c->r[5]=rotl(c->r[5],0)&0x0000FFFFu; // 803CFE4C
  c->r[3]=c->r[13]+0xFFFFA08Cu; // 803CFE50
  c->lr=0x803CFE58u; f_803FAE1C(c); // 803CFE54
  c->r[30]=c->r[3]|c->r[3]; // 803CFE58
L_803CFE5C:;
  cmps(c,0,(int32_t)c->r[30],0); // 803CFE5C
  if (crb(c,0)) { goto L_803CFE68; } // 803CFE60
  W32(c->r[13]+0xFFFFA084u,c->r[30]); // 803CFE64
L_803CFE68:;
  cmps(c,0,(int32_t)c->r[30],0); // 803CFE68
  if (crb(c,0)) { goto L_803CFF14; } // 803CFE6C
  c->r[30]=0u+0x807B0000u; // 803CFE70
  c->r[3]=0u+0x00000002u; // 803CFE74
  c->r[30]=c->r[30]+0x00002A00u; // 803CFE78
  c->r[4]=0u+0x00000082u; // 803CFE7C
  c->r[0]=0u+0x00000081u; // 803CFE80
  c->r[31]=0u+0x00000000u; // 803CFE84
  W8(c->r[30]+0x00000010u,c->r[3]); // 803CFE88
  c->r[3]=c->r[30]+0x0000002Cu; // 803CFE8C
  W8(c->r[30]+0x00000011u,c->r[4]); // 803CFE90
  W8(c->r[30]+0x00000012u,c->r[0]); // 803CFE94
  W8(c->r[30]+0x00000013u,c->r[31]); // 803CFE98
  c->lr=0x803CFEA0u; f_803CD940(c); // 803CFE9C
  W8(c->r[30]+0x00000038u,c->r[31]); // 803CFEA0
  c->r[3]=c->r[30]+0x0000003Cu; // 803CFEA4
  c->lr=0x803CFEACu; f_803CD940(c); // 803CFEA8
  W8(c->r[30]+0x00000048u,c->r[31]); // 803CFEAC
  c->r[3]=0u+0x00000294u; // 803CFEB0
  c->r[4]=0u+0x0000002Du; // 803CFEB4
  c->r[5]=0u+0x00000001u; // 803CFEB8
  c->r[6]=0u+0x00000000u; // 803CFEBC
  c->lr=0x803CFEC4u; f_803CE410(c); // 803CFEC0
  W8(c->r[30]+0x0000001Cu,c->r[3]); // 803CFEC4
  c->r[3]=0u+0x00000708u; // 803CFEC8
  c->r[4]=0u+0x0000001Eu; // 803CFECC
  c->r[5]=0u+0x00000001u; // 803CFED0
  c->r[6]=0u+0x00000000u; // 803CFED4
  c->lr=0x803CFEDCu; f_803CE410(c); // 803CFED8
  c->r[0]=R8(c->r[30]+0x0000001Cu); // 803CFEDC
  W8(c->r[30]+0x0000001Du,c->r[3]); // 803CFEE0
  cmpu(c,0,c->r[0],0x000000FFu); // 803CFEE4
  if (crb(c,2)) { goto L_803CFF14; } // 803CFEE8
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; // 803CFEEC
  cmpu(c,0,c->r[0],0x000000FFu); // 803CFEF0
  if (!crb(c,2)) { goto L_803CFEFC; } // 803CFEF4
  goto L_803CFF14; // 803CFEF8
L_803CFEFC:;
  c->lr=0x803CFF00u; f_803CF028(c); // 803CFEFC
  c->r[0]=0u+0x00000004u; // 803CFF00
  W8(c->r[30]+0x00000029u,c->r[0]); // 803CFF04
  c->lr=0x803CFF0Cu; f_803CF004(c); // 803CFF08
  c->r[0]=0u+0x00000001u; // 803CFF0C
  W32(c->r[13]+0xFFFFA080u,c->r[0]); // 803CFF10
L_803CFF14:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 803CFF14
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 803CFF18
  c->r[30]=R32(c->r[1]+0x00000008u); // 803CFF1C
  c->lr=c->r[0]; // 803CFF20
  c->r[1]=c->r[1]+0x00000010u; // 803CFF24
  return; // 803CFF28
}

// UUSB_Open
void f_803CFF2C(Ctx* __restrict c) {
  trace_call(0x803CFF2Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803CFF2C
  c->r[0]=c->lr; // 803CFF30
  W32(c->r[1]+0x00000024u,c->r[0]); // 803CFF34
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 803CFF38
  W32(c->r[1]+0x00000018u,c->r[30]); // 803CFF3C
  c->r[30]=0u+0x807B0000u; // 803CFF40
  c->r[31]=c->r[30]+0x00002A00u; // 803CFF44
  W32(c->r[1]+0x00000014u,c->r[29]); // 803CFF48
  W32(c->r[1]+0x00000010u,c->r[28]); // 803CFF4C
  c->r[28]=c->r[4]|c->r[4]; // 803CFF50
  c->r[0]=R8(c->r[31]+0x00000029u); // 803CFF54
  cmpu(c,0,c->r[0],0x00000004u); // 803CFF58
  if (!crb(c,2)) { goto L_803D0014; } // 803CFF5C
  c->r[0]=R8(c->r[31]+0x0000001Cu); // 803CFF60
  cmpu(c,0,c->r[0],0x000000FFu); // 803CFF64
  if (crb(c,2)) { goto L_803D0014; } // 803CFF68
  c->r[0]=R8(c->r[31]+0x0000001Du); // 803CFF6C
  cmpu(c,0,c->r[0],0x000000FFu); // 803CFF70
  if (!crb(c,2)) { goto L_803CFF7C; } // 803CFF74
  goto L_803D0014; // 803CFF78
L_803CFF7C:;
  c->lr=0x803CFF80u; f_803CF028(c); // 803CFF7C
  c->r[0]=0u+0x00000002u; // 803CFF80
  W32(c->r[31]+0x00000020u,c->r[28]); // 803CFF84
  W8(c->r[31]+0x00000029u,c->r[0]); // 803CFF88
  c->lr=0x803CFF90u; f_803CF004(c); // 803CFF8C
  c->lr=0x803CFF94u; f_803CFA8C(c); // 803CFF90
L_803CFF94:;
  c->r[3]=R8(c->r[31]+0x0000001Du); // 803CFF94
  c->lr=0x803CFF9Cu; f_803CDAF4(c); // 803CFF98
  cmps(c,0,(int32_t)c->r[3],0); // 803CFF9C
  c->r[28]=c->r[3]|c->r[3]; // 803CFFA0
  if (crb(c,2)) { IRQCHK(c); goto L_803CFF94; } // 803CFFA4
  c->r[4]=0u+0x00001100u; // 803CFFA8
  c->r[0]=c->r[3]+0x00000027u; // 803CFFAC
  W16(c->r[3]+0x00000000u,c->r[4]); // 803CFFB0
  c->r[4]=0u+0x00000000u; // 803CFFB4
  c->r[29]=rotl(c->r[0],0)&0xFFFFFFE0u; // 803CFFB8
  c->r[0]=c->r[3]+0x00000008u; // 803CFFBC
  W16(c->r[3]+0x00000002u,c->r[4]); // 803CFFC0
  c->r[0]=c->r[29]-c->r[0]; // 803CFFC4
  W16(c->r[3]+0x00000004u,c->r[0]); // 803CFFC8
  c->lr=0x803CFFD0u; f_803CDD4C(c); // 803CFFCC
  c->r[3]=rotl(c->r[3],0)&0x0000FFFFu; // 803CFFD0
  c->r[0]=R16(c->r[28]+0x00000004u); // 803CFFD4
  c->r[5]=c->r[3]+0xFFFFFFD8u; // 803CFFD8
  c->r[7]=0u+0x803D0000u; // 803CFFDC
  c->r[3]=R32(c->r[30]+0x00002A00u); // 803CFFE0
  c->r[6]=c->r[29]|c->r[29]; // 803CFFE4
  c->r[4]=R8(c->r[31]+0x00000011u); // 803CFFE8
  c->r[8]=c->r[28]|c->r[28]; // 803CFFEC
  c->r[5]=c->r[5]-c->r[0]; // 803CFFF0
  c->r[7]=c->r[7]+0xFFFFF8F0u; // 803CFFF4
  c->lr=0x803CFFFCu; f_803FB7A4(c); // 803CFFF8
  cmps(c,0,(int32_t)c->r[3],0); // 803CFFFC
  if (crb(c,2)) { goto L_803D000C; } // 803D0000
  c->r[3]=c->r[28]|c->r[28]; // 803D0004
  c->lr=0x803D000Cu; f_803CDBDC(c); // 803D0008
L_803D000C:;
  c->r[0]=0u+0x00000000u; // 803D000C
  W32(c->r[13]+0xFFFFA080u,c->r[0]); // 803D0010
L_803D0014:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 803D0014
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 803D0018
  c->r[30]=R32(c->r[1]+0x00000018u); // 803D001C
  c->r[29]=R32(c->r[1]+0x00000014u); // 803D0020
  c->r[28]=R32(c->r[1]+0x00000010u); // 803D0024
  c->lr=c->r[0]; // 803D0028
  c->r[1]=c->r[1]+0x00000020u; // 803D002C
  return; // 803D0030
}

// UUSB_Read
void f_803D0034(Ctx* __restrict c) {
  trace_call(0x803D0034u);
  c->r[3]=0u+0x00000000u; // 803D0034
  return; // 803D0038
}

// UUSB_Write
void f_803D003C(Ctx* __restrict c) {
  trace_call(0x803D003Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803D003C
  c->r[0]=c->lr; // 803D0040
  W32(c->r[1]+0x00000034u,c->r[0]); // 803D0044
  c->r[11]=c->r[1]+0x00000030u; // 803D0048
  c->lr=0x803D0050u; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 803D004C
  c->r[29]=0u+0x807B0000u; // 803D0050
  c->r[25]=c->r[4]|c->r[4]; // 803D0054
  c->r[30]=c->r[29]+0x00002A00u; // 803D0058
  c->r[31]=c->r[5]|c->r[5]; // 803D005C
  c->r[0]=R8(c->r[30]+0x00000029u); // 803D0060
  c->r[28]=0u+0x00000000u; // 803D0064
  cmpu(c,0,c->r[0],0x00000002u); // 803D0068
  if (crb(c,2)) { goto L_803D0078; } // 803D006C
  c->r[3]=0u+0x00000000u; // 803D0070
  goto L_803D0238; // 803D0074
L_803D0078:;
  cmps(c,0,(int32_t)c->r[3],2); // 803D0078
  if (crb(c,2)) { goto L_803D016C; } // 803D007C
  if (!crb(c,0)) { goto L_803D0234; } // 803D0080
  cmps(c,0,(int32_t)c->r[3],0); // 803D0084
  if (crb(c,2)) { goto L_803D0094; } // 803D0088
  goto L_803D0234; // 803D008C
  goto L_803D0234; // 803D0090
L_803D0094:;
  c->r[3]=R8(c->r[30]+0x0000001Cu); // 803D0094
  c->lr=0x803D009Cu; f_803CDAF4(c); // 803D0098
  cmps(c,0,(int32_t)c->r[3],0); // 803D009C
  c->r[26]=c->r[3]|c->r[3]; // 803D00A0
  if (!crb(c,2)) { goto L_803D00B0; } // 803D00A4
  c->r[3]=0u+0x00000000u; // 803D00A8
  goto L_803D0238; // 803D00AC
L_803D00B0:;
  c->r[0]=c->r[3]+0x00000027u; // 803D00B0
  W16(c->r[3]+0x00000002u,c->r[31]); // 803D00B4
  c->r[27]=rotl(c->r[0],0)&0xFFFFFFE0u; // 803D00B8
  c->r[4]=c->r[25]|c->r[25]; // 803D00BC
  c->r[0]=c->r[3]+0x00000008u; // 803D00C0
  c->r[5]=c->r[31]|c->r[31]; // 803D00C4
  c->r[0]=c->r[27]-c->r[0]; // 803D00C8
  W16(c->r[3]+0x00000004u,c->r[0]); // 803D00CC
  c->r[3]=c->r[27]|c->r[27]; // 803D00D0
  c->lr=0x803D00D8u; f_802DC484(c); // 803D00D4
  c->r[0]=R8(c->r[30]+0x00000048u); // 803D00D8
  cmpu(c,0,c->r[0],0x00000005u); // 803D00DC
  if (!crb(c,0)) { goto L_803D0124; } // 803D00E0
  c->r[0]=R16(c->r[30]+0x00000044u); // 803D00E4
  cmps(c,0,(int32_t)c->r[0],0); // 803D00E8
  if (!crb(c,2)) { goto L_803D0124; } // 803D00EC
  W32(c->r[1]+0x00000008u,c->r[26]); // 803D00F0
  c->r[10]=0u+0x803D0000u; // 803D00F4
  c->r[8]=c->r[31]|c->r[31]; // 803D00F8
  c->r[9]=c->r[27]|c->r[27]; // 803D00FC
  c->r[3]=R32(c->r[29]+0x00002A00u); // 803D0100
  c->r[10]=c->r[10]+0xFFFFFB58u; // 803D0104
  c->r[4]=0u+0x00000020u; // 803D0108
  c->r[5]=0u+0x00000000u; // 803D010C
  c->r[6]=0u+0x00000000u; // 803D0110
  c->r[7]=0u+0x00000000u; // 803D0114
  c->lr=0x803D011Cu; f_803FBE88(c); // 803D0118
  c->r[28]=c->r[3]|c->r[3]; // 803D011C
  goto L_803D0140; // 803D0120
L_803D0124:;
  c->r[3]=0u+0x807B0000u; // 803D0124
  c->r[4]=c->r[26]|c->r[26]; // 803D0128
  c->r[3]=c->r[3]+0x00002A00u; // 803D012C
  c->r[3]=c->r[3]+0x0000003Cu; // 803D0130
  c->lr=0x803D0138u; f_803CDFFC(c); // 803D0134
  c->r[3]=0u+0x00000000u; // 803D0138
  goto L_803D0238; // 803D013C
L_803D0140:;
  cmps(c,0,(int32_t)c->r[3],0); // 803D0140
  if (crb(c,2)) { goto L_803D0154; } // 803D0144
  c->r[3]=c->r[26]|c->r[26]; // 803D0148
  c->lr=0x803D0150u; f_803CDBDC(c); // 803D014C
  goto L_803D0234; // 803D0150
L_803D0154:;
  c->lr=0x803D0158u; f_803CF028(c); // 803D0154
  c->r[3]=R8(c->r[30]+0x00000048u); // 803D0158
  c->r[0]=c->r[3]+0x00000001u; // 803D015C
  W8(c->r[30]+0x00000048u,c->r[0]); // 803D0160
  c->lr=0x803D0168u; f_803CF004(c); // 803D0164
  goto L_803D0234; // 803D0168
L_803D016C:;
  c->r[3]=R8(c->r[30]+0x0000001Du); // 803D016C
  c->lr=0x803D0174u; f_803CDAF4(c); // 803D0170
  cmps(c,0,(int32_t)c->r[3],0); // 803D0174
  c->r[27]=c->r[3]|c->r[3]; // 803D0178
  if (!crb(c,2)) { goto L_803D0188; } // 803D017C
  c->r[3]=0u+0x00000000u; // 803D0180
  goto L_803D0238; // 803D0184
L_803D0188:;
  c->r[0]=c->r[3]+0x00000027u; // 803D0188
  W16(c->r[3]+0x00000002u,c->r[31]); // 803D018C
  c->r[28]=rotl(c->r[0],0)&0xFFFFFFE0u; // 803D0190
  c->r[4]=c->r[25]|c->r[25]; // 803D0194
  c->r[0]=c->r[3]+0x00000008u; // 803D0198
  c->r[5]=c->r[31]|c->r[31]; // 803D019C
  c->r[0]=c->r[28]-c->r[0]; // 803D01A0
  W16(c->r[3]+0x00000004u,c->r[0]); // 803D01A4
  c->r[3]=c->r[28]|c->r[28]; // 803D01A8
  c->lr=0x803D01B0u; f_802DC484(c); // 803D01AC
  c->r[0]=R8(c->r[30]+0x00000038u); // 803D01B0
  cmpu(c,0,c->r[0],0x00000005u); // 803D01B4
  if (!crb(c,0)) { goto L_803D01F0; } // 803D01B8
  c->r[0]=R16(c->r[30]+0x00000034u); // 803D01BC
  cmps(c,0,(int32_t)c->r[0],0); // 803D01C0
  if (!crb(c,2)) { goto L_803D01F0; } // 803D01C4
  c->r[7]=0u+0x803D0000u; // 803D01C8
  c->r[3]=R32(c->r[29]+0x00002A00u); // 803D01CC
  c->r[4]=R8(c->r[30]+0x00000010u); // 803D01D0
  c->r[5]=c->r[31]|c->r[31]; // 803D01D4
  c->r[6]=c->r[28]|c->r[28]; // 803D01D8
  c->r[8]=c->r[27]|c->r[27]; // 803D01DC
  c->r[7]=c->r[7]+0xFFFFFC44u; // 803D01E0
  c->lr=0x803D01E8u; f_803FB844(c); // 803D01E4
  c->r[28]=c->r[3]|c->r[3]; // 803D01E8
  goto L_803D020C; // 803D01EC
L_803D01F0:;
  c->r[3]=0u+0x807B0000u; // 803D01F0
  c->r[4]=c->r[27]|c->r[27]; // 803D01F4
  c->r[3]=c->r[3]+0x00002A00u; // 803D01F8
  c->r[3]=c->r[3]+0x0000002Cu; // 803D01FC
  c->lr=0x803D0204u; f_803CDFFC(c); // 803D0200
  c->r[3]=0u+0x00000000u; // 803D0204
  goto L_803D0238; // 803D0208
L_803D020C:;
  cmps(c,0,(int32_t)c->r[3],0); // 803D020C
  if (crb(c,2)) { goto L_803D0220; } // 803D0210
  c->r[3]=c->r[27]|c->r[27]; // 803D0214
  c->lr=0x803D021Cu; f_803CDBDC(c); // 803D0218
  goto L_803D0234; // 803D021C
L_803D0220:;
  c->lr=0x803D0224u; f_803CF028(c); // 803D0220
  c->r[3]=R8(c->r[30]+0x00000038u); // 803D0224
  c->r[0]=c->r[3]+0x00000001u; // 803D0228
  W8(c->r[30]+0x00000038u,c->r[0]); // 803D022C
  c->lr=0x803D0234u; f_803CF004(c); // 803D0230
L_803D0234:;
  c->r[3]=rotl(c->r[28],0)&0x0000FFFFu; // 803D0234
L_803D0238:;
  c->r[11]=c->r[1]+0x00000030u; // 803D0238
  c->lr=0x803D0240u; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 803D023C
  c->r[0]=R32(c->r[1]+0x00000034u); // 803D0240
  c->lr=c->r[0]; // 803D0244
  c->r[1]=c->r[1]+0x00000030u; // 803D0248
  return; // 803D024C
}

// UUSB_Close
void f_803D0250(Ctx* __restrict c) {
  trace_call(0x803D0250u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803D0250
  c->r[0]=c->lr; // 803D0254
  W32(c->r[1]+0x00000014u,c->r[0]); // 803D0258
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 803D025C
  c->lr=0x803D0264u; f_803CF028(c); // 803D0260
  c->r[3]=0u+0x807B0000u; // 803D0264
  c->r[0]=0u+0x00000000u; // 803D0268
  c->r[31]=c->r[3]+0x00002A00u; // 803D026C
  W8(c->r[31]+0x00000029u,c->r[0]); // 803D0270
  c->lr=0x803D0278u; f_803CF004(c); // 803D0274
  c->r[0]=R16(c->r[31]+0x00000034u); // 803D0278
  cmps(c,0,(int32_t)c->r[0],0); // 803D027C
  if (crb(c,2)) { goto L_803D02A0; } // 803D0280
  goto L_803D0294; // 803D0284
L_803D0288:;
  c->r[3]=c->r[31]+0x0000002Cu; // 803D0288
  c->lr=0x803D0290u; f_803CE278(c); // 803D028C
  c->lr=0x803D0294u; f_803CDBDC(c); // 803D0290
L_803D0294:;
  c->r[0]=R16(c->r[31]+0x00000034u); // 803D0294
  cmps(c,0,(int32_t)c->r[0],0); // 803D0298
  if (!crb(c,2)) { IRQCHK(c); goto L_803D0288; } // 803D029C
L_803D02A0:;
  c->r[3]=0u+0x807B0000u; // 803D02A0
  c->r[31]=c->r[3]+0x00002A00u; // 803D02A4
  c->r[0]=R16(c->r[31]+0x00000044u); // 803D02A8
  cmps(c,0,(int32_t)c->r[0],0); // 803D02AC
  if (crb(c,2)) { goto L_803D02D0; } // 803D02B0
  goto L_803D02C4; // 803D02B4
L_803D02B8:;
  c->r[3]=c->r[31]+0x0000003Cu; // 803D02B8
  c->lr=0x803D02C0u; f_803CE278(c); // 803D02BC
  c->lr=0x803D02C4u; f_803CDBDC(c); // 803D02C0
L_803D02C4:;
  c->r[0]=R16(c->r[31]+0x00000044u); // 803D02C4
  cmps(c,0,(int32_t)c->r[0],0); // 803D02C8
  if (!crb(c,2)) { IRQCHK(c); goto L_803D02B8; } // 803D02CC
L_803D02D0:;
  c->r[3]=0u+0x807B0000u; // 803D02D0
  c->r[4]=0u+0x803D0000u; // 803D02D4
  c->r[3]=R32(c->r[3]+0x00002A00u); // 803D02D8
  c->r[4]=c->r[4]+0xFFFFF748u; // 803D02DC
  c->r[5]=0u+0x00000000u; // 803D02E0
  c->lr=0x803D02E8u; f_803FAF60(c); // 803D02E4
  c->r[0]=R32(c->r[1]+0x00000014u); // 803D02E8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 803D02EC
  c->lr=c->r[0]; // 803D02F0
  c->r[1]=c->r[1]+0x00000010u; // 803D02F4
  return; // 803D02F8
}

// UUSB_Unregister
void f_803D02FC(Ctx* __restrict c) {
  trace_call(0x803D02FCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803D02FC
  c->r[0]=c->lr; // 803D0300
  W32(c->r[1]+0x00000014u,c->r[0]); // 803D0304
  c->lr=0x803D030Cu; f_803FAC6C(c); // 803D0308
  c->lr=0x803D0310u; f_803CF028(c); // 803D030C
  c->r[3]=0u+0x807B0000u; // 803D0310
  c->r[0]=0u+0x00000000u; // 803D0314
  c->r[3]=c->r[3]+0x00002A00u; // 803D0318
  c->r[4]=0u+0x00000005u; // 803D031C
  W8(c->r[3]+0x00000029u,c->r[4]); // 803D0320
  W8(c->r[3]+0x00000028u,c->r[0]); // 803D0324
  W8(c->r[13]+0xFFFFE2E9u,c->r[0]); // 803D0328
  c->lr=0x803D0330u; f_803CF004(c); // 803D032C
  c->r[0]=R32(c->r[1]+0x00000014u); // 803D0330
  c->lr=c->r[0]; // 803D0334
  c->r[1]=c->r[1]+0x00000010u; // 803D0338
  return; // 803D033C
}

// bte_hcisu_send
void f_803D0340(Ctx* __restrict c) {
  trace_call(0x803D0340u);
  W16(c->r[3]+0x00000000u,c->r[4]); // 803D0340
  c->r[4]=R32(c->r[13]+0xFFFFE300u); // 803D0344
  cmps(c,0,(int32_t)c->r[4],0); // 803D0348
  if (crb(c,2)) { goto L_803D035C; } // 803D034C
  c->r[12]=R32(c->r[4]+0x0000000Cu); // 803D0350
  c->ctr=c->r[12]; // 803D0354
  if (true) { dispatch(c,c->ctr); return; } // 803D0358
L_803D035C:;
  f_803CDBDC(c); return; // 803D035C
}

// bte_hcisu_task
void f_803D0360(Ctx* __restrict c) {
  trace_call(0x803D0360u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803D0360
  c->r[0]=c->lr; // 803D0364
  W32(c->r[1]+0x00000014u,c->r[0]); // 803D0368
  c->r[3]=R32(c->r[13]+0xFFFFE300u); // 803D036C
  cmps(c,0,(int32_t)c->r[3],0); // 803D0370
  if (crb(c,2)) { goto L_803D03B4; } // 803D0374
  c->r[12]=R32(c->r[3]+0x00000000u); // 803D0378
  cmps(c,0,(int32_t)c->r[12],0); // 803D037C
  if (crb(c,2)) { goto L_803D0398; } // 803D0380
  c->r[3]=0u+0x00000002u; // 803D0384
  c->r[4]=0u+0x00000001u; // 803D0388
  c->r[5]=0u+0x00000800u; // 803D038C
  c->ctr=c->r[12]; // 803D0390
  if (true) { c->lr=0x803D0398u; dispatch(c,c->ctr); } // 803D0394
L_803D0398:;
  c->r[3]=R32(c->r[13]+0xFFFFE300u); // 803D0398
  c->r[12]=R32(c->r[3]+0x00000004u); // 803D039C
  cmps(c,0,(int32_t)c->r[12],0); // 803D03A0
  if (crb(c,2)) { goto L_803D03B4; } // 803D03A4
  c->r[3]=R32(c->r[13]+0xFFFFE304u); // 803D03A8
  c->ctr=c->r[12]; // 803D03AC
  if (true) { c->lr=0x803D03B4u; dispatch(c,c->ctr); } // 803D03B0
L_803D03B4:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 803D03B4
  c->lr=c->r[0]; // 803D03B8
  c->r[1]=c->r[1]+0x00000010u; // 803D03BC
  return; // 803D03C0
}

// bte_hcisu_close
void f_803D03C4(Ctx* __restrict c) {
  trace_call(0x803D03C4u);
  c->r[3]=R32(c->r[13]+0xFFFFE300u); // 803D03C4
  cmps(c,0,(int32_t)c->r[3],0); // 803D03C8
  if (crb(c,2)) return; // 803D03CC
  c->r[12]=R32(c->r[3]+0x00000008u); // 803D03D0
  cmps(c,0,(int32_t)c->r[12],0); // 803D03D4
  if (crb(c,2)) return; // 803D03D8
  c->ctr=c->r[12]; // 803D03DC
  if (true) { dispatch(c,c->ctr); return; } // 803D03E0
  return; // 803D03E4
}

// fn_803D03E8
void f_803D03E8(Ctx* __restrict c) {
  trace_call(0x803D03E8u);
  c->r[5]=c->r[3]|c->r[3]; // 803D03E8
  c->r[3]=0u+0x00000002u; // 803D03EC
  c->r[4]=0u+0x00000000u; // 803D03F0
  f_803CDD90(c); return; // 803D03F4
}

// BTE_InitStack
void f_803D03F8(Ctx* __restrict c) {
  trace_call(0x803D03F8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803D03F8
  c->r[0]=c->lr; // 803D03FC
  W32(c->r[1]+0x00000014u,c->r[0]); // 803D0400
  c->lr=0x803D0408u; f_803EEF28(c); // 803D0404
  c->lr=0x803D040Cu; f_803E2200(c); // 803D0408
  c->lr=0x803D0410u; f_803E5AD4(c); // 803D040C
  c->lr=0x803D0414u; f_803E6558(c); // 803D0410
  c->r[0]=R32(c->r[1]+0x00000014u); // 803D0414
  c->lr=c->r[0]; // 803D0418
  c->r[1]=c->r[1]+0x00000010u; // 803D041C
  return; // 803D0420
}

// LogMsg
void f_803D0424(Ctx* __restrict c) {
  trace_call(0x803D0424u);
  {uint32_t ea=c->r[1]+0xFFFFFF80u; W32(ea,c->r[1]); c->r[1]=ea;} // 803D0424
  c->r[0]=c->lr; // 803D0428
  W32(c->r[1]+0x00000084u,c->r[0]); // 803D042C
  W32(c->r[1]+0x0000007Cu,c->r[31]); // 803D0430
  W32(c->r[1]+0x00000078u,c->r[30]); // 803D0434
  if (!crb(c,6)) { goto L_803D045C; } // 803D0438
  {uint32_t ea=c->r[1]+0x00000028u; WF64(ea,c->f[1]);} // 803D043C
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[2]);} // 803D0440
  {uint32_t ea=c->r[1]+0x00000038u; WF64(ea,c->f[3]);} // 803D0444
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[4]);} // 803D0448
  {uint32_t ea=c->r[1]+0x00000048u; WF64(ea,c->f[5]);} // 803D044C
  {uint32_t ea=c->r[1]+0x00000050u; WF64(ea,c->f[6]);} // 803D0450
  {uint32_t ea=c->r[1]+0x00000058u; WF64(ea,c->f[7]);} // 803D0454
  {uint32_t ea=c->r[1]+0x00000060u; WF64(ea,c->f[8]);} // 803D0458
L_803D045C:;
  c->r[11]=c->r[1]+0x00000088u; // 803D045C
  c->r[0]=c->r[1]+0x00000008u; // 803D0460
  c->r[12]=0u+0x02000000u; // 803D0464
  W32(c->r[1]+0x0000000Cu,c->r[4]); // 803D0468
  c->r[30]=c->r[1]+0x00000068u; // 803D046C
  c->r[31]=0u+0x807B0000u; // 803D0470
  W32(c->r[1]+0x00000008u,c->r[3]); // 803D0474
  c->r[3]=c->r[31]+0x00004A60u; // 803D0478
  W32(c->r[1]+0x00000010u,c->r[5]); // 803D047C
  c->r[5]=c->r[30]|c->r[30]; // 803D0480
  W32(c->r[1]+0x00000014u,c->r[6]); // 803D0484
  W32(c->r[1]+0x00000018u,c->r[7]); // 803D0488
  W32(c->r[1]+0x0000001Cu,c->r[8]); // 803D048C
  W32(c->r[1]+0x00000020u,c->r[9]); // 803D0490
  W32(c->r[1]+0x00000024u,c->r[10]); // 803D0494
  W32(c->r[1]+0x00000068u,c->r[12]); // 803D0498
  W32(c->r[1]+0x0000006Cu,c->r[11]); // 803D049C
  W32(c->r[1]+0x00000070u,c->r[0]); // 803D04A0
  c->lr=0x803D04A8u; f_803B1E50(c); // 803D04A4
  c->r[3]=c->r[31]+0x00004A60u; // 803D04A8
  c->r[4]=c->r[13]+0xFFFFA0C0u; // 803D04AC
  c->r[5]=c->r[3]|c->r[3]; // 803D04B0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 803D04B4
  c->lr=0x803D04BCu; f_803B1FC8(c); // 803D04B8
  c->r[3]=c->r[31]+0x00004A60u; // 803D04BC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 803D04C0
  c->lr=0x803D04C8u; f_802DB4AC(c); // 803D04C4
  c->r[0]=R32(c->r[1]+0x00000084u); // 803D04C8
  c->r[31]=R32(c->r[1]+0x0000007Cu); // 803D04CC
  c->r[30]=R32(c->r[1]+0x00000078u); // 803D04D0
  c->lr=c->r[0]; // 803D04D4
  c->r[1]=c->r[1]+0x00000080u; // 803D04D8
  return; // 803D04DC
}

// LogMsg_0
void f_803D04E0(Ctx* __restrict c) {
  trace_call(0x803D04E0u);
  c->r[0]=R8(c->r[13]+0xFFFFE308u); // 803D04E0
  cmps(c,0,(int32_t)c->r[0],0); // 803D04E4
  if (!crb(c,2)) return; // 803D04E8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 803D04EC
  f_803D0424(c); return; // 803D04F0
  return; // 803D04F4
}

// LogMsg_1
void f_803D04F8(Ctx* __restrict c) {
  trace_call(0x803D04F8u);
  c->r[0]=R8(c->r[13]+0xFFFFE308u); // 803D04F8
  cmps(c,0,(int32_t)c->r[0],0); // 803D04FC
  if (!crb(c,2)) return; // 803D0500
  setcrb(c,6,crb(c,6)^crb(c,6)); // 803D0504
  f_803D0424(c); return; // 803D0508
  return; // 803D050C
}

// LogMsg_2
void f_803D0510(Ctx* __restrict c) {
  trace_call(0x803D0510u);
  c->r[0]=R8(c->r[13]+0xFFFFE308u); // 803D0510
  cmps(c,0,(int32_t)c->r[0],0); // 803D0514
  if (!crb(c,2)) return; // 803D0518
  setcrb(c,6,crb(c,6)^crb(c,6)); // 803D051C
  f_803D0424(c); return; // 803D0520
  return; // 803D0524
}

// LogMsg_3
void f_803D0528(Ctx* __restrict c) {
  trace_call(0x803D0528u);
  c->r[0]=R8(c->r[13]+0xFFFFE308u); // 803D0528
  cmps(c,0,(int32_t)c->r[0],0); // 803D052C
  if (!crb(c,2)) return; // 803D0530
  setcrb(c,6,crb(c,6)^crb(c,6)); // 803D0534
  f_803D0424(c); return; // 803D0538
  return; // 803D053C
}

// LogMsg_4
void f_803D0540(Ctx* __restrict c) {
  trace_call(0x803D0540u);
  c->r[0]=R8(c->r[13]+0xFFFFE308u); // 803D0540
  cmps(c,0,(int32_t)c->r[0],0); // 803D0544
  if (!crb(c,2)) return; // 803D0548
  setcrb(c,6,crb(c,6)^crb(c,6)); // 803D054C
  f_803D0424(c); return; // 803D0550
  return; // 803D0554
}

// LogMsg_5
void f_803D0558(Ctx* __restrict c) {
  trace_call(0x803D0558u);
  c->r[0]=R8(c->r[13]+0xFFFFE308u); // 803D0558
  cmps(c,0,(int32_t)c->r[0],0); // 803D055C
  if (!crb(c,2)) return; // 803D0560
  setcrb(c,6,crb(c,6)^crb(c,6)); // 803D0564
  f_803D0424(c); return; // 803D0568
  return; // 803D056C
}

// LogMsg_6
void f_803D0570(Ctx* __restrict c) {
  trace_call(0x803D0570u);
  c->r[0]=R8(c->r[13]+0xFFFFE308u); // 803D0570
  cmps(c,0,(int32_t)c->r[0],0); // 803D0574
  if (!crb(c,2)) return; // 803D0578
  setcrb(c,6,crb(c,6)^crb(c,6)); // 803D057C
  f_803D0424(c); return; // 803D0580
  return; // 803D0584
}

// BTUInterruptHandler
void f_803D0588(Ctx* __restrict c) {
  trace_call(0x803D0588u);
  c->r[4]=0u+0x807B0000u; // 803D0588
  c->r[3]=0u+0x803D0000u; // 803D058C
  c->r[4]=c->r[4]+0x00005240u; // 803D0590
  c->r[3]=c->r[3]+0x00000720u; // 803D0594
  c->r[4]=c->r[4]+0x00001000u; // 803D0598
  f_80377C18(c); return; // 803D059C
}

// BTA_Init
void f_803D05A0(Ctx* __restrict c) {
  trace_call(0x803D05A0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803D05A0
  c->r[0]=c->lr; // 803D05A4
  W32(c->r[1]+0x00000014u,c->r[0]); // 803D05A8
  c->r[0]=0u+0x00000000u; // 803D05AC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 803D05B0
  W32(c->r[13]+0xFFFFE30Cu,c->r[0]); // 803D05B4
  c->lr=0x803D05BCu; f_803CEE10(c); // 803D05B8
  c->lr=0x803D05C0u; f_803CF004(c); // 803D05BC
  c->lr=0x803D05C4u; f_803E20D4(c); // 803D05C0
  c->r[4]=0u+0x806A0000u; // 803D05C4
  c->r[0]=c->r[13]+0xFFFFA0C8u; // 803D05C8
  c->r[4]=c->r[4]+0x00004510u; // 803D05CC
  W32(c->r[13]+0xFFFFE304u,c->r[0]); // 803D05D0
  c->r[3]=0u+0x00000000u; // 803D05D4
  W32(c->r[13]+0xFFFFE300u,c->r[4]); // 803D05D8
  c->lr=0x803D05E0u; f_803D0360(c); // 803D05DC
  goto L_803D05EC; // 803D05E0
L_803D05E4:;
  c->r[3]=0u+0x00000064u; // 803D05E4
  c->lr=0x803D05ECu; f_803CEF54(c); // 803D05E8
L_803D05EC:;
  c->r[0]=R32(c->r[13]+0xFFFFA080u); // 803D05EC
  cmps(c,0,(int32_t)c->r[0],0); // 803D05F0
  if (!crb(c,2)) { IRQCHK(c); goto L_803D05E4; } // 803D05F4
  c->lr=0x803D05FCu; f_803D06E0(c); // 803D05F8
  c->r[31]=0u+0x807B0000u; // 803D05FC
  c->r[3]=c->r[31]+0x00006240u; // 803D0600
  c->lr=0x803D0608u; f_80376140(c); // 803D0604
  c->lr=0x803D060Cu; f_8037FD18(c); // 803D0608
  c->r[5]=0u+0x80000000u; // 803D060C
  c->r[9]=0u+0x803D0000u; // 803D0610
  c->r[0]=R32(c->r[5]+0x000000F8u); // 803D0614
  c->r[6]=0u+0x10620000u; // 803D0618
  c->r[5]=c->r[3]|c->r[3]; // 803D061C
  c->r[9]=c->r[9]+0x00000588u; // 803D0620
  c->r[3]=c->r[6]+0x00004DD3u; // 803D0624
  c->r[0]=rotl(c->r[0],30)&0x3FFFFFFFu; // 803D0628
  c->r[0]=(uint32_t)(((uint64_t)c->r[3]*(uint64_t)c->r[0])>>32); // 803D062C
  c->r[6]=c->r[4]|c->r[4]; // 803D0630
  c->r[3]=c->r[31]+0x00006240u; // 803D0634
  c->r[7]=0u+0x00000000u; // 803D0638
  c->r[8]=rotl(c->r[0],27)&0x07FFFFFEu; // 803D063C
  c->lr=0x803D0644u; f_80376410(c); // 803D0640
  c->r[3]=0u+0x00000000u; // 803D0644
  c->lr=0x803D064Cu; f_803CEF48(c); // 803D0648
  goto L_803D0658; // 803D064C
L_803D0650:;
  c->r[3]=0u+0x000007D0u; // 803D0650
  c->lr=0x803D0658u; f_803CEF54(c); // 803D0654
L_803D0658:;
  c->lr=0x803D065Cu; f_803D36BC(c); // 803D0658
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 803D065C
  if (crb(c,2)) { IRQCHK(c); goto L_803D0650; } // 803D0660
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 803D0664
  c->r[3]=0u+0x00000000u; // 803D0668
  c->r[0]=R32(c->r[1]+0x00000014u); // 803D066C
  c->lr=c->r[0]; // 803D0670
  c->r[1]=c->r[1]+0x00000010u; // 803D0674
  return; // 803D0678
}

// BTA_CleanUp
void f_803D067C(Ctx* __restrict c) {
  trace_call(0x803D067Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803D067C
  c->r[0]=c->lr; // 803D0680
  W32(c->r[1]+0x00000014u,c->r[0]); // 803D0684
  W32(c->r[13]+0xFFFFE30Cu,c->r[3]); // 803D0688
  c->r[3]=0u+0x807B0000u; // 803D068C
  c->r[3]=c->r[3]+0x00006240u; // 803D0690
  c->lr=0x803D0698u; f_80376494(c); // 803D0694
  c->lr=0x803D069Cu; f_803D03C4(c); // 803D0698
  c->lr=0x803D06A0u; f_803CEEA0(c); // 803D069C
  c->r[0]=R32(c->r[1]+0x00000014u); // 803D06A0
  c->lr=c->r[0]; // 803D06A4
  c->r[1]=c->r[1]+0x00000010u; // 803D06A8
  return; // 803D06AC
}

// bta_usb_close_evt
void f_803D06B0(Ctx* __restrict c) {
  trace_call(0x803D06B0u);
  c->r[12]=R32(c->r[13]+0xFFFFE30Cu); // 803D06B0
  cmps(c,0,(int32_t)c->r[12],0); // 803D06B4
  if (crb(c,2)) return; // 803D06B8
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[3]; cr0(c,c->r[0]); // 803D06BC
  if (crb(c,0)) { goto L_803D06D0; } // 803D06C0
  c->r[3]=0u+0x00000000u; // 803D06C4
  c->ctr=c->r[12]; // 803D06C8
  if (true) { dispatch(c,c->ctr); return; } // 803D06CC
L_803D06D0:;
  c->r[3]=0u+0x00000001u; // 803D06D0
  c->ctr=c->r[12]; // 803D06D4
  if (true) { dispatch(c,c->ctr); return; } // 803D06D8
  return; // 803D06DC
}

// btu_task_init
void f_803D06E0(Ctx* __restrict c) {
  trace_call(0x803D06E0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803D06E0
  c->r[0]=c->lr; // 803D06E4
  c->r[3]=0u+0x00000001u; // 803D06E8
  W32(c->r[1]+0x00000014u,c->r[0]); // 803D06EC
  c->r[0]=0u+0x00000000u; // 803D06F0
  W8(c->r[13]+0xFFFFA0D0u,c->r[3]); // 803D06F4
  W32(c->r[13]+0xFFFFA0D4u,c->r[3]); // 803D06F8
  W32(c->r[13]+0xFFFFE310u,c->r[0]); // 803D06FC
  W32(c->r[13]+0xFFFFE314u,c->r[0]); // 803D0700
  c->lr=0x803D0708u; f_803E20A8(c); // 803D0704
  c->lr=0x803D070Cu; f_803D03F8(c); // 803D0708
  c->lr=0x803D0710u; f_803D0E58(c); // 803D070C
  c->r[0]=R32(c->r[1]+0x00000014u); // 803D0710
  c->lr=c->r[0]; // 803D0714
  c->r[1]=c->r[1]+0x00000010u; // 803D0718
  return; // 803D071C
}

// btu_task_msg_handler
void f_803D0720(Ctx* __restrict c) {
  trace_call(0x803D0720u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803D0720
  c->r[0]=c->lr; // 803D0724
  W32(c->r[1]+0x00000024u,c->r[0]); // 803D0728
  c->r[11]=c->r[1]+0x00000020u; // 803D072C
  c->lr=0x803D0734u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 803D0730
  c->r[30]=0u+0x00000000u; // 803D0734
  c->lr=0x803D073Cu; f_8037FD18(c); // 803D0738
  c->r[3]=R32(c->r[13]+0xFFFFE310u); // 803D073C
  c->r[0]=c->r[3]+0x00000001u; // 803D0740
  W32(c->r[13]+0xFFFFE310u,c->r[0]); // 803D0744
  c->lr=0x803D074Cu; f_803CF028(c); // 803D0748
  c->r[0]=R32(c->r[13]+0xFFFFA0D4u); // 803D074C
  cmps(c,0,(int32_t)c->r[0],0); // 803D0750
  if (crb(c,2)) { goto L_803D076C; } // 803D0754
  c->r[3]=0u+0x00000000u; // 803D0758
  c->r[0]=0u+0x00000001u; // 803D075C
  W32(c->r[13]+0xFFFFA0D4u,c->r[3]); // 803D0760
  W8(c->r[13]+0xFFFFA0D0u,c->r[0]); // 803D0764
  goto L_803D0780; // 803D0768
L_803D076C:;
  c->r[3]=R8(c->r[13]+0xFFFFA0D0u); // 803D076C
  c->r[0]=c->r[3]+0x00000001u; // 803D0770
  W8(c->r[13]+0xFFFFA0D0u,c->r[0]); // 803D0774
  c->lr=0x803D077Cu; f_803CF004(c); // 803D0778
  goto L_803D0A94; // 803D077C
L_803D0780:;
  c->lr=0x803D0784u; f_803CF004(c); // 803D0780
  c->r[3]=R32(c->r[13]+0xFFFFE314u); // 803D0784
  c->r[31]=0u+0x00000005u; // 803D0788
  c->r[4]=R32(c->r[13]+0xFFFFE310u); // 803D078C
  c->r[0]=c->r[3]+0x000001F4u; // 803D0790
  cmpu(c,0,c->r[4],c->r[0]); // 803D0794
  if (!crb(c,1)) { goto L_803D07A4; } // 803D0798
  W32(c->r[13]+0xFFFFE314u,c->r[4]); // 803D079C
  c->r[31]=c->r[31]|0x00000030u; // 803D07A0
L_803D07A4:;
  c->r[3]=0u+0x807B0000u; // 803D07A4
  c->r[29]=c->r[3]+0x00006270u; // 803D07A8
  goto L_803D0A84; // 803D07AC
L_803D07B0:;
  c->r[0]=rotl(c->r[31],0)&0x00000001u; cr0(c,c->r[0]); // 803D07B0
  c->r[30]=0u+0x00000001u; // 803D07B4
  if (crb(c,2)) { goto L_803D08C8; } // 803D07B8
  goto L_803D08B4; // 803D07BC
L_803D07C0:;
  c->r[0]=R16(c->r[3]+0x00000000u); // 803D07C0
  c->r[30]=0u+0x00000000u; // 803D07C4
  c->r[28]=rotl(c->r[0],0)&0x0000FF00u; // 803D07C8
  cmps(c,0,(int32_t)c->r[28],4608); // 803D07CC
  if (crb(c,2)) { goto L_803D0820; } // 803D07D0
  if (!crb(c,0)) { goto L_803D07F0; } // 803D07D4
  cmps(c,0,(int32_t)c->r[28],4352); // 803D07D8
  if (crb(c,2)) { goto L_803D0808; } // 803D07DC
  if (!crb(c,0)) { goto L_803D084C; } // 803D07E0
  cmps(c,0,(int32_t)c->r[28],4096); // 803D07E4
  if (crb(c,2)) { goto L_803D082C; } // 803D07E8
  goto L_803D084C; // 803D07EC
L_803D07F0:;
  cmps(c,0,(int32_t)c->r[28],6400); // 803D07F0
  if (crb(c,2)) { goto L_803D0814; } // 803D07F4
  if (!crb(c,0)) { goto L_803D084C; } // 803D07F8
  cmps(c,0,(int32_t)c->r[28],5632); // 803D07FC
  if (crb(c,2)) { goto L_803D0840; } // 803D0800
  goto L_803D084C; // 803D0804
L_803D0808:;
  c->r[3]=c->r[27]|c->r[27]; // 803D0808
  c->lr=0x803D0810u; f_803EC148(c); // 803D080C
  goto L_803D08B4; // 803D0810
L_803D0814:;
  c->r[3]=c->r[27]|c->r[27]; // 803D0814
  c->lr=0x803D081Cu; f_803EBF14(c); // 803D0818
  goto L_803D08B4; // 803D081C
L_803D0820:;
  c->r[3]=c->r[27]|c->r[27]; // 803D0820
  c->lr=0x803D0828u; f_803DDA80(c); // 803D0824
  goto L_803D08B4; // 803D0828
L_803D082C:;
  c->r[3]=c->r[27]|c->r[27]; // 803D082C
  c->lr=0x803D0834u; f_803E0E4C(c); // 803D0830
  c->r[3]=c->r[27]|c->r[27]; // 803D0834
  c->lr=0x803D083Cu; f_803CDBDC(c); // 803D0838
  goto L_803D08B4; // 803D083C
L_803D0840:;
  c->r[3]=c->r[27]|c->r[27]; // 803D0840
  c->lr=0x803D0848u; f_803E1404(c); // 803D0844
  goto L_803D08B4; // 803D0848
L_803D084C:;
  c->r[26]=0u+0x00000000u; // 803D084C
  c->r[4]=0u+0x00000000u; // 803D0850
  goto L_803D0890; // 803D0854
L_803D0858:;
  c->r[0]=rotl(c->r[26],3)&0x000007F8u; // 803D0858
  c->r[3]=c->r[29]+c->r[0]; // 803D085C
  c->r[12]=R32(c->r[3]+0x00000014u); // 803D0860
  cmps(c,1,(int32_t)c->r[12],0); // 803D0864
  if (crb(c,6)) { goto L_803D088C; } // 803D0868
  c->r[0]=R16(c->r[3]+0x00000010u); // 803D086C
  cmpu(c,0,c->r[28],c->r[0]); // 803D0870
  if (!crb(c,2)) { goto L_803D088C; } // 803D0874
  if (crb(c,6)) { goto L_803D088C; } // 803D0878
  c->r[3]=c->r[27]|c->r[27]; // 803D087C
  c->ctr=c->r[12]; // 803D0880
  if (true) { c->lr=0x803D0888u; dispatch(c,c->ctr); } // 803D0884
  c->r[4]=0u+0x00000001u; // 803D0888
L_803D088C:;
  c->r[26]=c->r[26]+0x00000001u; // 803D088C
L_803D0890:;
  cmps(c,0,(int32_t)c->r[4],0); // 803D0890
  if (!crb(c,2)) { goto L_803D08A4; } // 803D0894
  c->r[0]=rotl(c->r[26],0)&0x000000FFu; // 803D0898
  cmpu(c,0,c->r[0],0x00000006u); // 803D089C
  if (crb(c,0)) { IRQCHK(c); goto L_803D0858; } // 803D08A0
L_803D08A4:;
  cmps(c,0,(int32_t)c->r[4],0); // 803D08A4
  if (!crb(c,2)) { goto L_803D08B4; } // 803D08A8
  c->r[3]=c->r[27]|c->r[27]; // 803D08AC
  c->lr=0x803D08B4u; f_803CDBDC(c); // 803D08B0
L_803D08B4:;
  c->r[3]=0u+0x00000000u; // 803D08B4
  c->lr=0x803D08BCu; f_803CDF4C(c); // 803D08B8
  cmps(c,0,(int32_t)c->r[3],0); // 803D08BC
  c->r[27]=c->r[3]|c->r[3]; // 803D08C0
  if (!crb(c,2)) { IRQCHK(c); goto L_803D07C0; } // 803D08C4
L_803D08C8:;
  c->r[0]=rotl(c->r[31],0)&0x00000010u; cr0(c,c->r[0]); // 803D08C8
  if (crb(c,2)) { goto L_803D0A44; } // 803D08CC
  c->r[3]=c->r[29]+0x00000040u; // 803D08D0
  c->r[4]=0u+0x00000001u; // 803D08D4
  c->lr=0x803D08DCu; f_803CEB74(c); // 803D08D8
  c->r[0]=rotl(c->r[31],0)&0xFFFFFFEFu; // 803D08DC
  c->r[31]=rotl(c->r[0],0)&0x0000FFFFu; // 803D08E0
  goto L_803D0A2C; // 803D08E4
L_803D08E8:;
  c->r[4]=c->r[28]|c->r[28]; // 803D08E8
  c->r[3]=c->r[29]+0x00000040u; // 803D08EC
  c->r[30]=0u+0x00000000u; // 803D08F0
  c->lr=0x803D08F8u; f_803CECEC(c); // 803D08F4
  c->r[0]=R16(c->r[28]+0x00000014u); // 803D08F8
  cmps(c,0,(int32_t)c->r[0],10); // 803D08FC
  if (crb(c,2)) { goto L_803D0994; } // 803D0900
  if (!crb(c,0)) { goto L_803D0934; } // 803D0904
  cmps(c,0,(int32_t)c->r[0],5); // 803D0908
  if (crb(c,2)) { goto L_803D0988; } // 803D090C
  if (!crb(c,0)) { goto L_803D0924; } // 803D0910
  cmps(c,0,(int32_t)c->r[0],1); // 803D0914
  if (crb(c,2)) { goto L_803D0964; } // 803D0918
  if (!crb(c,0)) { goto L_803D097C; } // 803D091C
  goto L_803D09D8; // 803D0920
L_803D0924:;
  cmps(c,0,(int32_t)c->r[0],8); // 803D0924
  if (crb(c,2)) { goto L_803D099C; } // 803D0928
  if (!crb(c,0)) { goto L_803D0970; } // 803D092C
  goto L_803D09D8; // 803D0930
L_803D0934:;
  cmps(c,0,(int32_t)c->r[0],60); // 803D0934
  if (crb(c,2)) { goto L_803D09B0; } // 803D0938
  if (!crb(c,0)) { goto L_803D0958; } // 803D093C
  cmps(c,0,(int32_t)c->r[0],22); // 803D0940
  if (crb(c,2)) { goto L_803D09C4; } // 803D0944
  if (!crb(c,0)) { goto L_803D09D8; } // 803D0948
  cmps(c,0,(int32_t)c->r[0],13); // 803D094C
  if (!crb(c,0)) { goto L_803D09D8; } // 803D0950
  goto L_803D09A4; // 803D0954
L_803D0958:;
  cmps(c,0,(int32_t)c->r[0],66); // 803D0958
  if (crb(c,2)) { goto L_803D09B8; } // 803D095C
  goto L_803D09D8; // 803D0960
L_803D0964:;
  c->r[3]=c->r[28]|c->r[28]; // 803D0964
  c->lr=0x803D096Cu; f_803D91AC(c); // 803D0968
  goto L_803D0A2C; // 803D096C
L_803D0970:;
  c->r[3]=c->r[28]|c->r[28]; // 803D0970
  c->lr=0x803D0978u; f_803D7CA0(c); // 803D0974
  goto L_803D0A2C; // 803D0978
L_803D097C:;
  c->r[3]=c->r[28]|c->r[28]; // 803D097C
  c->lr=0x803D0984u; f_803ECEE8(c); // 803D0980
  goto L_803D0A2C; // 803D0984
L_803D0988:;
  c->r[3]=R32(c->r[28]+0x00000010u); // 803D0988
  c->lr=0x803D0990u; f_803F8C48(c); // 803D098C
  goto L_803D0A2C; // 803D0990
L_803D0994:;
  c->lr=0x803D0998u; f_803DC320(c); // 803D0994
  goto L_803D0A2C; // 803D0998
L_803D099C:;
  c->lr=0x803D09A0u; f_803DA8C4(c); // 803D099C
  goto L_803D0A2C; // 803D09A0
L_803D09A4:;
  c->r[3]=c->r[28]|c->r[28]; // 803D09A4
  c->lr=0x803D09ACu; f_803F50A4(c); // 803D09A8
  goto L_803D0A2C; // 803D09AC
L_803D09B0:;
  c->lr=0x803D09B4u; f_803E1E70(c); // 803D09B0
  goto L_803D0A2C; // 803D09B4
L_803D09B8:;
  c->r[3]=c->r[28]|c->r[28]; // 803D09B8
  c->lr=0x803D09C0u; f_803E7344(c); // 803D09BC
  goto L_803D0A2C; // 803D09C0
L_803D09C4:;
  c->r[12]=R32(c->r[28]+0x00000010u); // 803D09C4
  c->r[3]=c->r[28]|c->r[28]; // 803D09C8
  c->ctr=c->r[12]; // 803D09CC
  if (true) { c->lr=0x803D09D4u; dispatch(c,c->ctr); } // 803D09D0
  goto L_803D0A2C; // 803D09D4
L_803D09D8:;
  c->r[27]=0u+0x00000000u; // 803D09D8
  c->r[4]=0u+0x00000000u; // 803D09DC
  goto L_803D0A18; // 803D09E0
L_803D09E4:;
  c->r[0]=rotl(c->r[27],3)&0x000007F8u; // 803D09E4
  c->r[3]=c->r[29]+c->r[0]; // 803D09E8
  c->r[12]=R32(c->r[3]+0x00000004u); // 803D09EC
  cmps(c,0,(int32_t)c->r[12],0); // 803D09F0
  if (crb(c,2)) { goto L_803D0A14; } // 803D09F4
  c->r[0]=R32(c->r[3]+0x00000000u); // 803D09F8
  cmpu(c,0,c->r[0],c->r[28]); // 803D09FC
  if (!crb(c,2)) { goto L_803D0A14; } // 803D0A00
  c->r[3]=c->r[28]|c->r[28]; // 803D0A04
  c->ctr=c->r[12]; // 803D0A08
  if (true) { c->lr=0x803D0A10u; dispatch(c,c->ctr); } // 803D0A0C
  c->r[4]=0u+0x00000001u; // 803D0A10
L_803D0A14:;
  c->r[27]=c->r[27]+0x00000001u; // 803D0A14
L_803D0A18:;
  cmps(c,0,(int32_t)c->r[4],0); // 803D0A18
  if (!crb(c,2)) { goto L_803D0A2C; } // 803D0A1C
  c->r[0]=rotl(c->r[27],0)&0x000000FFu; // 803D0A20
  cmpu(c,0,c->r[0],0x00000002u); // 803D0A24
  if (crb(c,0)) { IRQCHK(c); goto L_803D09E4; } // 803D0A28
L_803D0A2C:;
  c->r[28]=R32(c->r[29]+0x00000040u); // 803D0A2C
  cmps(c,0,(int32_t)c->r[28],0); // 803D0A30
  if (crb(c,2)) { goto L_803D0A44; } // 803D0A34
  c->r[0]=R32(c->r[28]+0x0000000Cu); // 803D0A38
  cmps(c,0,(int32_t)c->r[0],0); // 803D0A3C
  if (crb(c,2)) { IRQCHK(c); goto L_803D08E8; } // 803D0A40
L_803D0A44:;
  c->r[0]=rotl(c->r[31],0)&0x00000004u; cr0(c,c->r[0]); // 803D0A44
  if (crb(c,2)) { goto L_803D0A68; } // 803D0A48
  goto L_803D0A58; // 803D0A4C
L_803D0A50:;
  c->r[30]=0u+0x00000000u; // 803D0A50
  c->lr=0x803D0A58u; f_803D0EBC(c); // 803D0A54
L_803D0A58:;
  c->r[3]=0u+0x00000002u; // 803D0A58
  c->lr=0x803D0A60u; f_803CDF4C(c); // 803D0A5C
  cmps(c,0,(int32_t)c->r[3],0); // 803D0A60
  if (!crb(c,2)) { IRQCHK(c); goto L_803D0A50; } // 803D0A64
L_803D0A68:;
  c->r[0]=rotl(c->r[31],0)&0x00000020u; cr0(c,c->r[0]); // 803D0A68
  if (crb(c,2)) { goto L_803D0A7C; } // 803D0A6C
  c->r[0]=rotl(c->r[31],0)&0xFFFFFFDFu; // 803D0A70
  c->r[31]=rotl(c->r[0],0)&0x0000FFFFu; // 803D0A74
  c->lr=0x803D0A7Cu; f_803D0FA8(c); // 803D0A78
L_803D0A7C:;
  c->r[0]=rotl(c->r[31],0)&0x00008000u; cr0(c,c->r[0]); // 803D0A7C
  if (!crb(c,2)) { goto L_803D0A8C; } // 803D0A80
L_803D0A84:;
  cmps(c,0,(int32_t)c->r[30],0); // 803D0A84
  if (crb(c,2)) { IRQCHK(c); goto L_803D07B0; } // 803D0A88
L_803D0A8C:;
  c->r[0]=0u+0x00000001u; // 803D0A8C
  W32(c->r[13]+0xFFFFA0D4u,c->r[0]); // 803D0A90
L_803D0A94:;
  c->r[11]=c->r[1]+0x00000020u; // 803D0A94
  c->lr=0x803D0A9Cu; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 803D0A98
  c->r[0]=R32(c->r[1]+0x00000024u); // 803D0A9C
  c->lr=c->r[0]; // 803D0AA0
  c->r[1]=c->r[1]+0x00000020u; // 803D0AA4
  return; // 803D0AA8
}

// btu_start_timer
void f_803D0AAC(Ctx* __restrict c) {
  trace_call(0x803D0AACu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803D0AAC
  c->r[0]=c->lr; // 803D0AB0
  W32(c->r[1]+0x00000024u,c->r[0]); // 803D0AB4
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 803D0AB8
  c->r[31]=0u+0x807B0000u; // 803D0ABC
  c->r[31]=c->r[31]+0x00006270u; // 803D0AC0
  W32(c->r[1]+0x00000018u,c->r[30]); // 803D0AC4
  c->r[30]=c->r[5]|c->r[5]; // 803D0AC8
  W32(c->r[1]+0x00000014u,c->r[29]); // 803D0ACC
  c->r[29]=c->r[4]|c->r[4]; // 803D0AD0
  W32(c->r[1]+0x00000010u,c->r[28]); // 803D0AD4
  c->r[28]=c->r[3]|c->r[3]; // 803D0AD8
  c->r[4]=c->r[28]|c->r[28]; // 803D0ADC
  c->r[3]=c->r[31]+0x00000040u; // 803D0AE0
  c->lr=0x803D0AE8u; f_803CECEC(c); // 803D0AE4
  W16(c->r[28]+0x00000014u,c->r[29]); // 803D0AE8
  c->r[4]=c->r[28]|c->r[28]; // 803D0AEC
  c->r[3]=c->r[31]+0x00000040u; // 803D0AF0
  W32(c->r[28]+0x0000000Cu,c->r[30]); // 803D0AF4
  c->lr=0x803D0AFCu; f_803CEC00(c); // 803D0AF8
  c->r[0]=R32(c->r[1]+0x00000024u); // 803D0AFC
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 803D0B00
  c->r[30]=R32(c->r[1]+0x00000018u); // 803D0B04
  c->r[29]=R32(c->r[1]+0x00000014u); // 803D0B08
  c->r[28]=R32(c->r[1]+0x00000010u); // 803D0B0C
  c->lr=c->r[0]; // 803D0B10
  c->r[1]=c->r[1]+0x00000020u; // 803D0B14
  return; // 803D0B18
}

// btu_stop_timer
void f_803D0B1C(Ctx* __restrict c) {
  trace_call(0x803D0B1Cu);
  c->r[5]=0u+0x807B0000u; // 803D0B1C
  c->r[4]=c->r[3]|c->r[3]; // 803D0B20
  c->r[5]=c->r[5]+0x00006270u; // 803D0B24
  c->r[3]=c->r[5]+0x00000040u; // 803D0B28
  f_803CECEC(c); return; // 803D0B2C
}

// bdcpy
void f_803D0B30(Ctx* __restrict c) {
  trace_call(0x803D0B30u);
  c->r[9]=R8(c->r[4]+0x00000000u); // 803D0B30
  c->r[8]=R8(c->r[4]+0x00000001u); // 803D0B34
  c->r[7]=R8(c->r[4]+0x00000002u); // 803D0B38
  c->r[6]=R8(c->r[4]+0x00000003u); // 803D0B3C
  c->r[5]=R8(c->r[4]+0x00000004u); // 803D0B40
  c->r[0]=R8(c->r[4]+0x00000005u); // 803D0B44
  W8(c->r[3]+0x00000000u,c->r[9]); // 803D0B48
  W8(c->r[3]+0x00000001u,c->r[8]); // 803D0B4C
  W8(c->r[3]+0x00000002u,c->r[7]); // 803D0B50
  W8(c->r[3]+0x00000003u,c->r[6]); // 803D0B54
  W8(c->r[3]+0x00000004u,c->r[5]); // 803D0B58
  W8(c->r[3]+0x00000005u,c->r[0]); // 803D0B5C
  return; // 803D0B60
}

// bdcmp
void f_803D0B64(Ctx* __restrict c) {
  trace_call(0x803D0B64u);
  c->r[5]=R8(c->r[3]+0x00000000u); // 803D0B64
  c->r[0]=R8(c->r[4]+0x00000000u); // 803D0B68
  cmpu(c,0,c->r[5],c->r[0]); // 803D0B6C
  if (crb(c,2)) { goto L_803D0B7C; } // 803D0B70
  c->r[3]=0u+0xFFFFFFFFu; // 803D0B74
  return; // 803D0B78
L_803D0B7C:;
  c->r[5]=R8(c->r[3]+0x00000001u); // 803D0B7C
  c->r[6]=c->r[3]+0x00000002u; // 803D0B80
  c->r[0]=R8(c->r[4]+0x00000001u); // 803D0B84
  c->r[3]=c->r[4]+0x00000002u; // 803D0B88
  cmpu(c,0,c->r[5],c->r[0]); // 803D0B8C
  if (crb(c,2)) { goto L_803D0B9C; } // 803D0B90
  c->r[3]=0u+0xFFFFFFFFu; // 803D0B94
  return; // 803D0B98
L_803D0B9C:;
  c->r[5]=R8(c->r[6]+0x00000000u); // 803D0B9C
  c->r[0]=R8(c->r[3]+0x00000000u); // 803D0BA0
  cmpu(c,0,c->r[5],c->r[0]); // 803D0BA4
  if (crb(c,2)) { goto L_803D0BB4; } // 803D0BA8
  c->r[3]=0u+0xFFFFFFFFu; // 803D0BAC
  return; // 803D0BB0
L_803D0BB4:;
  c->r[5]=R8(c->r[6]+0x00000001u); // 803D0BB4
  c->r[0]=R8(c->r[3]+0x00000001u); // 803D0BB8
  cmpu(c,0,c->r[5],c->r[0]); // 803D0BBC
  if (crb(c,2)) { goto L_803D0BCC; } // 803D0BC0
  c->r[3]=0u+0xFFFFFFFFu; // 803D0BC4
  return; // 803D0BC8
L_803D0BCC:;
  c->r[5]=R8(c->r[6]+0x00000002u); // 803D0BCC
  c->r[0]=R8(c->r[3]+0x00000002u); // 803D0BD0
  cmpu(c,0,c->r[5],c->r[0]); // 803D0BD4
  if (crb(c,2)) { goto L_803D0BE4; } // 803D0BD8
  c->r[3]=0u+0xFFFFFFFFu; // 803D0BDC
  return; // 803D0BE0
L_803D0BE4:;
  c->r[5]=R8(c->r[6]+0x00000003u); // 803D0BE4
  c->r[0]=R8(c->r[3]+0x00000003u); // 803D0BE8
  cmpu(c,0,c->r[5],c->r[0]); // 803D0BEC
  if (crb(c,2)) { goto L_803D0BFC; } // 803D0BF0
  c->r[3]=0u+0xFFFFFFFFu; // 803D0BF4
  return; // 803D0BF8
L_803D0BFC:;
  c->r[3]=0u+0x00000000u; // 803D0BFC
  return; // 803D0C00
}

// bta_sys_rm_register
void f_803D0C04(Ctx* __restrict c) {
  trace_call(0x803D0C04u);
  c->r[4]=0u+0x807B0000u; // 803D0C04
  c->r[4]=c->r[4]+0x000062F8u; // 803D0C08
  W32(c->r[4]+0x00000080u,c->r[3]); // 803D0C0C
  return; // 803D0C10
}

// bta_sys_compress_register
void f_803D0C14(Ctx* __restrict c) {
  trace_call(0x803D0C14u);
  c->r[4]=0u+0x807B0000u; // 803D0C14
  c->r[4]=c->r[4]+0x000062F8u; // 803D0C18
  W32(c->r[4]+0x00000088u,c->r[3]); // 803D0C1C
  return; // 803D0C20
}

// bta_sys_pm_register
void f_803D0C24(Ctx* __restrict c) {
  trace_call(0x803D0C24u);
  c->r[4]=0u+0x807B0000u; // 803D0C24
  c->r[4]=c->r[4]+0x000062F8u; // 803D0C28
  W32(c->r[4]+0x00000084u,c->r[3]); // 803D0C2C
  return; // 803D0C30
}

// bta_sys_conn_open
void f_803D0C34(Ctx* __restrict c) {
  trace_call(0x803D0C34u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803D0C34
  c->r[0]=c->lr; // 803D0C38
  c->r[6]=0u+0x807B0000u; // 803D0C3C
  W32(c->r[1]+0x00000024u,c->r[0]); // 803D0C40
  c->r[6]=c->r[6]+0x000062F8u; // 803D0C44
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 803D0C48
  c->r[31]=c->r[5]|c->r[5]; // 803D0C4C
  W32(c->r[1]+0x00000018u,c->r[30]); // 803D0C50
  c->r[30]=c->r[4]|c->r[4]; // 803D0C54
  W32(c->r[1]+0x00000014u,c->r[29]); // 803D0C58
  c->r[29]=c->r[3]|c->r[3]; // 803D0C5C
  c->r[12]=R32(c->r[6]+0x00000080u); // 803D0C60
  cmps(c,0,(int32_t)c->r[12],0); // 803D0C64
  if (crb(c,2)) { goto L_803D0C84; } // 803D0C68
  c->r[4]=c->r[29]|c->r[29]; // 803D0C6C
  c->r[5]=c->r[30]|c->r[30]; // 803D0C70
  c->r[6]=c->r[31]|c->r[31]; // 803D0C74
  c->r[3]=0u+0x00000000u; // 803D0C78
  c->ctr=c->r[12]; // 803D0C7C
  if (true) { c->lr=0x803D0C84u; dispatch(c,c->ctr); } // 803D0C80
L_803D0C84:;
  c->r[3]=0u+0x807B0000u; // 803D0C84
  c->r[3]=c->r[3]+0x000062F8u; // 803D0C88
  c->r[12]=R32(c->r[3]+0x00000084u); // 803D0C8C
  cmps(c,0,(int32_t)c->r[12],0); // 803D0C90
  if (crb(c,2)) { goto L_803D0CB0; } // 803D0C94
  c->r[4]=c->r[29]|c->r[29]; // 803D0C98
  c->r[5]=c->r[30]|c->r[30]; // 803D0C9C
  c->r[6]=c->r[31]|c->r[31]; // 803D0CA0
  c->r[3]=0u+0x00000000u; // 803D0CA4
  c->ctr=c->r[12]; // 803D0CA8
  if (true) { c->lr=0x803D0CB0u; dispatch(c,c->ctr); } // 803D0CAC
L_803D0CB0:;
  c->r[3]=0u+0x807B0000u; // 803D0CB0
  c->r[3]=c->r[3]+0x000062F8u; // 803D0CB4
  c->r[12]=R32(c->r[3]+0x00000088u); // 803D0CB8
  cmps(c,0,(int32_t)c->r[12],0); // 803D0CBC
  if (crb(c,2)) { goto L_803D0CDC; } // 803D0CC0
  c->r[4]=c->r[29]|c->r[29]; // 803D0CC4
  c->r[5]=c->r[30]|c->r[30]; // 803D0CC8
  c->r[6]=c->r[31]|c->r[31]; // 803D0CCC
  c->r[3]=0u+0x00000000u; // 803D0CD0
  c->ctr=c->r[12]; // 803D0CD4
  if (true) { c->lr=0x803D0CDCu; dispatch(c,c->ctr); } // 803D0CD8
L_803D0CDC:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 803D0CDC
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 803D0CE0
  c->r[30]=R32(c->r[1]+0x00000018u); // 803D0CE4
  c->r[29]=R32(c->r[1]+0x00000014u); // 803D0CE8
  c->lr=c->r[0]; // 803D0CEC
  c->r[1]=c->r[1]+0x00000020u; // 803D0CF0
  return; // 803D0CF4
}

// bta_sys_conn_close
void f_803D0CF8(Ctx* __restrict c) {
  trace_call(0x803D0CF8u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803D0CF8
  c->r[0]=c->lr; // 803D0CFC
  c->r[6]=0u+0x807B0000u; // 803D0D00
  W32(c->r[1]+0x00000024u,c->r[0]); // 803D0D04
  c->r[6]=c->r[6]+0x000062F8u; // 803D0D08
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 803D0D0C
  c->r[31]=c->r[5]|c->r[5]; // 803D0D10
  W32(c->r[1]+0x00000018u,c->r[30]); // 803D0D14
  c->r[30]=c->r[4]|c->r[4]; // 803D0D18
  W32(c->r[1]+0x00000014u,c->r[29]); // 803D0D1C
  c->r[29]=c->r[3]|c->r[3]; // 803D0D20
  c->r[12]=R32(c->r[6]+0x00000080u); // 803D0D24
  cmps(c,0,(int32_t)c->r[12],0); // 803D0D28
  if (crb(c,2)) { goto L_803D0D48; } // 803D0D2C
  c->r[4]=c->r[29]|c->r[29]; // 803D0D30
  c->r[5]=c->r[30]|c->r[30]; // 803D0D34
  c->r[6]=c->r[31]|c->r[31]; // 803D0D38
  c->r[3]=0u+0x00000001u; // 803D0D3C
  c->ctr=c->r[12]; // 803D0D40
  if (true) { c->lr=0x803D0D48u; dispatch(c,c->ctr); } // 803D0D44
L_803D0D48:;
  c->r[3]=0u+0x807B0000u; // 803D0D48
  c->r[3]=c->r[3]+0x000062F8u; // 803D0D4C
  c->r[12]=R32(c->r[3]+0x00000084u); // 803D0D50
  cmps(c,0,(int32_t)c->r[12],0); // 803D0D54
  if (crb(c,2)) { goto L_803D0D74; } // 803D0D58
  c->r[4]=c->r[29]|c->r[29]; // 803D0D5C
  c->r[5]=c->r[30]|c->r[30]; // 803D0D60
  c->r[6]=c->r[31]|c->r[31]; // 803D0D64
  c->r[3]=0u+0x00000001u; // 803D0D68
  c->ctr=c->r[12]; // 803D0D6C
  if (true) { c->lr=0x803D0D74u; dispatch(c,c->ctr); } // 803D0D70
L_803D0D74:;
  c->r[3]=0u+0x807B0000u; // 803D0D74
  c->r[3]=c->r[3]+0x000062F8u; // 803D0D78
  c->r[12]=R32(c->r[3]+0x00000088u); // 803D0D7C
  cmps(c,0,(int32_t)c->r[12],0); // 803D0D80
  if (crb(c,2)) { goto L_803D0DA0; } // 803D0D84
  c->r[4]=c->r[29]|c->r[29]; // 803D0D88
  c->r[5]=c->r[30]|c->r[30]; // 803D0D8C
  c->r[6]=c->r[31]|c->r[31]; // 803D0D90
  c->r[3]=0u+0x00000001u; // 803D0D94
  c->ctr=c->r[12]; // 803D0D98
  if (true) { c->lr=0x803D0DA0u; dispatch(c,c->ctr); } // 803D0D9C
L_803D0DA0:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 803D0DA0
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 803D0DA4
  c->r[30]=R32(c->r[1]+0x00000018u); // 803D0DA8
  c->r[29]=R32(c->r[1]+0x00000014u); // 803D0DAC
  c->lr=c->r[0]; // 803D0DB0
  c->r[1]=c->r[1]+0x00000020u; // 803D0DB4
  return; // 803D0DB8
}

// bta_sys_sco_close
void f_803D0DBC(Ctx* __restrict c) {
  trace_call(0x803D0DBCu);
  c->r[6]=0u+0x807B0000u; // 803D0DBC
  c->r[0]=c->r[4]|c->r[4]; // 803D0DC0
  c->r[6]=c->r[6]+0x000062F8u; // 803D0DC4
  c->r[12]=R32(c->r[6]+0x00000084u); // 803D0DC8
  c->r[6]=c->r[5]|c->r[5]; // 803D0DCC
  cmps(c,0,(int32_t)c->r[12],0); // 803D0DD0
  if (crb(c,2)) return; // 803D0DD4
  c->r[4]=c->r[3]|c->r[3]; // 803D0DD8
  c->r[5]=c->r[0]|c->r[0]; // 803D0DDC
  c->r[3]=0u+0x00000005u; // 803D0DE0
  c->ctr=c->r[12]; // 803D0DE4
  if (true) { dispatch(c,c->ctr); return; } // 803D0DE8
  return; // 803D0DEC
}

// bta_sys_idle
void f_803D0DF0(Ctx* __restrict c) {
  trace_call(0x803D0DF0u);
  c->r[6]=0u+0x807B0000u; // 803D0DF0
  c->r[0]=c->r[4]|c->r[4]; // 803D0DF4
  c->r[6]=c->r[6]+0x000062F8u; // 803D0DF8
  c->r[12]=R32(c->r[6]+0x00000084u); // 803D0DFC
  c->r[6]=c->r[5]|c->r[5]; // 803D0E00
  cmps(c,0,(int32_t)c->r[12],0); // 803D0E04
  if (crb(c,2)) return; // 803D0E08
  c->r[4]=c->r[3]|c->r[3]; // 803D0E0C
  c->r[5]=c->r[0]|c->r[0]; // 803D0E10
  c->r[3]=0u+0x00000006u; // 803D0E14
  c->ctr=c->r[12]; // 803D0E18
  if (true) { dispatch(c,c->ctr); return; } // 803D0E1C
  return; // 803D0E20
}

// bta_sys_busy
void f_803D0E24(Ctx* __restrict c) {
  trace_call(0x803D0E24u);
  c->r[6]=0u+0x807B0000u; // 803D0E24
  c->r[0]=c->r[4]|c->r[4]; // 803D0E28
  c->r[6]=c->r[6]+0x000062F8u; // 803D0E2C
  c->r[12]=R32(c->r[6]+0x00000084u); // 803D0E30
  c->r[6]=c->r[5]|c->r[5]; // 803D0E34
  cmps(c,0,(int32_t)c->r[12],0); // 803D0E38
  if (crb(c,2)) return; // 803D0E3C
  c->r[4]=c->r[3]|c->r[3]; // 803D0E40
  c->r[5]=c->r[0]|c->r[0]; // 803D0E44
  c->r[3]=0u+0x00000007u; // 803D0E48
  c->ctr=c->r[12]; // 803D0E4C
  if (true) { dispatch(c,c->ctr); return; } // 803D0E50
  return; // 803D0E54
}

// bta_sys_init
void f_803D0E58(Ctx* __restrict c) {
  trace_call(0x803D0E58u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803D0E58
  c->r[0]=c->lr; // 803D0E5C
  c->r[4]=0u+0x00000000u; // 803D0E60
  c->r[5]=0u+0x0000008Cu; // 803D0E64
  W32(c->r[1]+0x00000014u,c->r[0]); // 803D0E68
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 803D0E6C
  c->r[31]=0u+0x807B0000u; // 803D0E70
  c->r[3]=c->r[31]+0x000062F8u; // 803D0E74
  c->lr=0x803D0E7Cu; f_800043EC(c); // 803D0E78
  c->r[5]=R32(c->r[13]+0xFFFFA0B8u); // 803D0E7C
  c->r[31]=c->r[31]+0x000062F8u; // 803D0E80
  c->r[3]=c->r[31]+0x00000068u; // 803D0E84
  c->r[4]=0u+0x000003E8u; // 803D0E88
  c->r[5]=R8(c->r[5]+0x00000003u); // 803D0E8C
  c->lr=0x803D0E94u; f_803D109C(c); // 803D0E90
  c->lr=0x803D0E98u; f_803CEFFC(c); // 803D0E94
  W8(c->r[31]+0x0000007Du,c->r[3]); // 803D0E98
  c->r[3]=R32(c->r[13]+0xFFFFA0B8u); // 803D0E9C
  c->r[0]=R8(c->r[3]+0x00000004u); // 803D0EA0
  W8(c->r[13]+0xFFFFE318u,c->r[0]); // 803D0EA4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 803D0EA8
  c->r[0]=R32(c->r[1]+0x00000014u); // 803D0EAC
  c->lr=c->r[0]; // 803D0EB0
  c->r[1]=c->r[1]+0x00000010u; // 803D0EB4
  return; // 803D0EB8
}

// bta_sys_event
void f_803D0EBC(Ctx* __restrict c) {
  trace_call(0x803D0EBCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803D0EBC
  c->r[0]=c->lr; // 803D0EC0
  W32(c->r[1]+0x00000014u,c->r[0]); // 803D0EC4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 803D0EC8
  c->r[31]=0u+0x00000001u; // 803D0ECC
  W32(c->r[1]+0x00000008u,c->r[30]); // 803D0ED0
  c->r[30]=c->r[3]|c->r[3]; // 803D0ED4
  c->r[0]=R8(c->r[13]+0xFFFFE318u); // 803D0ED8
  cmpu(c,0,c->r[0],0x00000004u); // 803D0EDC
  if (crb(c,0)) { goto L_803D0EF8; } // 803D0EE0
  c->r[4]=0u+0x80710000u; // 803D0EE4
  c->r[5]=R16(c->r[30]+0x00000000u); // 803D0EE8
  c->r[4]=c->r[4]+0xFFFFAAA8u; // 803D0EEC
  c->r[3]=0u+0x00000503u; // 803D0EF0
  c->lr=0x803D0EF8u; f_803D04F8(c); // 803D0EF4
L_803D0EF8:;
  c->r[3]=0u+0x807B0000u; // 803D0EF8
  c->r[4]=R16(c->r[30]+0x00000000u); // 803D0EFC
  c->r[3]=c->r[3]+0x000062F8u; // 803D0F00
  c->r[0]=R8(c->r[3]+0x0000007Eu); // 803D0F04
  c->r[5]=sraw(c,c->r[4],8); // 803D0F08
  cmps(c,0,(int32_t)c->r[0],0); // 803D0F0C
  if (crb(c,2)) { goto L_803D0F2C; } // 803D0F10
  cmpu(c,0,c->r[4],0x00000101u); // 803D0F14
  if (!crb(c,2)) { goto L_803D0F20; } // 803D0F18
  c->lr=0x803D0F20u; f_803D358C(c); // 803D0F1C
L_803D0F20:;
  c->r[3]=c->r[30]|c->r[30]; // 803D0F20
  c->lr=0x803D0F28u; f_803CDBDC(c); // 803D0F24
  goto L_803D0F90; // 803D0F28
L_803D0F2C:;
  c->r[0]=rotl(c->r[5],0)&0x000000FFu; // 803D0F2C
  cmpu(c,0,c->r[0],0x0000001Au); // 803D0F30
  if (!crb(c,0)) { goto L_803D0F60; } // 803D0F34
  c->r[0]=rotl(c->r[5],2)&0x000003FCu; // 803D0F38
  c->r[3]=R32(c->r[3]+c->r[0]); // 803D0F3C
  cmps(c,0,(int32_t)c->r[3],0); // 803D0F40
  if (crb(c,2)) { goto L_803D0F60; } // 803D0F44
  c->r[12]=R32(c->r[3]+0x00000000u); // 803D0F48
  c->r[3]=c->r[30]|c->r[30]; // 803D0F4C
  c->ctr=c->r[12]; // 803D0F50
  if (true) { c->lr=0x803D0F58u; dispatch(c,c->ctr); } // 803D0F54
  c->r[31]=c->r[3]|c->r[3]; // 803D0F58
  goto L_803D0F80; // 803D0F5C
L_803D0F60:;
  c->r[0]=R8(c->r[13]+0xFFFFE318u); // 803D0F60
  cmpu(c,0,c->r[0],0x00000002u); // 803D0F64
  if (crb(c,0)) { goto L_803D0F80; } // 803D0F68
  c->r[4]=0u+0x80710000u; // 803D0F6C
  c->r[5]=rotl(c->r[5],0)&0x000000FFu; // 803D0F70
  c->r[4]=c->r[4]+0xFFFFAABCu; // 803D0F74
  c->r[3]=0u+0x00000501u; // 803D0F78
  c->lr=0x803D0F80u; f_803D04F8(c); // 803D0F7C
L_803D0F80:;
  c->r[0]=rotl(c->r[31],0)&0x000000FFu; cr0(c,c->r[0]); // 803D0F80
  if (crb(c,2)) { goto L_803D0F90; } // 803D0F84
  c->r[3]=c->r[30]|c->r[30]; // 803D0F88
  c->lr=0x803D0F90u; f_803CDBDC(c); // 803D0F8C
L_803D0F90:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 803D0F90
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 803D0F94
  c->r[30]=R32(c->r[1]+0x00000008u); // 803D0F98
  c->lr=c->r[0]; // 803D0F9C
  c->r[1]=c->r[1]+0x00000010u; // 803D0FA0
  return; // 803D0FA4
}

// bta_sys_timer_update
void f_803D0FA8(Ctx* __restrict c) {
  trace_call(0x803D0FA8u);
  c->r[3]=0u+0x807B0000u; // 803D0FA8
  c->r[3]=c->r[3]+0x000062F8u; // 803D0FAC
  c->r[0]=R8(c->r[3]+0x0000007Cu); // 803D0FB0
  cmps(c,0,(int32_t)c->r[0],0); // 803D0FB4
  if (!crb(c,2)) return; // 803D0FB8
  c->r[3]=c->r[3]+0x00000068u; // 803D0FBC
  f_803D10E8(c); return; // 803D0FC0
  return; // 803D0FC4
}

// bta_sys_register
void f_803D0FC8(Ctx* __restrict c) {
  trace_call(0x803D0FC8u);
  c->r[5]=0u+0x807B0000u; // 803D0FC8
  c->r[0]=rotl(c->r[3],2)&0x000003FCu; // 803D0FCC
  c->r[5]=c->r[5]+0x000062F8u; // 803D0FD0
  W32(c->r[5]+c->r[0],c->r[4]); // 803D0FD4
  return; // 803D0FD8
}

// bta_sys_sendmsg
void f_803D0FDC(Ctx* __restrict c) {
  trace_call(0x803D0FDCu);
  c->r[4]=R32(c->r[13]+0xFFFFA0B8u); // 803D0FDC
  c->r[6]=0u+0x807B0000u; // 803D0FE0
  c->r[6]=c->r[6]+0x000062F8u; // 803D0FE4
  c->r[5]=c->r[3]|c->r[3]; // 803D0FE8
  c->r[3]=R8(c->r[6]+0x0000007Du); // 803D0FEC
  c->r[4]=R8(c->r[4]+0x00000002u); // 803D0FF0
  f_803CDD90(c); return; // 803D0FF4
}

// bta_sys_start_timer
void f_803D0FF8(Ctx* __restrict c) {
  trace_call(0x803D0FF8u);
  c->r[7]=0u+0x807B0000u; // 803D0FF8
  c->r[0]=c->r[4]|c->r[4]; // 803D0FFC
  c->r[7]=c->r[7]+0x000062F8u; // 803D1000
  c->r[6]=c->r[5]|c->r[5]; // 803D1004
  c->r[4]=c->r[3]|c->r[3]; // 803D1008
  c->r[5]=c->r[0]|c->r[0]; // 803D100C
  c->r[3]=c->r[7]+0x00000068u; // 803D1010
  f_803D119C(c); return; // 803D1014
}

// bta_sys_stop_timer
void f_803D1018(Ctx* __restrict c) {
  trace_call(0x803D1018u);
  c->r[5]=0u+0x807B0000u; // 803D1018
  c->r[4]=c->r[3]|c->r[3]; // 803D101C
  c->r[5]=c->r[5]+0x000062F8u; // 803D1020
  c->r[3]=c->r[5]+0x00000068u; // 803D1024
  f_803D123C(c); return; // 803D1028
}

// bta_sys_disable
void f_803D102C(Ctx* __restrict c) {
  trace_call(0x803D102Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803D102C
  c->r[0]=c->lr; // 803D1030
  W32(c->r[1]+0x00000014u,c->r[0]); // 803D1034
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 803D1038
  c->r[31]=0u+0x807B0000u; // 803D103C
  c->r[31]=c->r[31]+0x000062F8u; // 803D1040
  W32(c->r[1]+0x00000008u,c->r[30]); // 803D1044
  c->r[30]=0u+0x00000000u; // 803D1048
L_803D104C:;
  c->r[3]=R32(c->r[31]+0x00000000u); // 803D104C
  cmps(c,0,(int32_t)c->r[3],0); // 803D1050
  if (crb(c,2)) { goto L_803D106C; } // 803D1054
  c->r[12]=R32(c->r[3]+0x00000004u); // 803D1058
  cmps(c,0,(int32_t)c->r[12],0); // 803D105C
  if (crb(c,2)) { goto L_803D106C; } // 803D1060
  c->ctr=c->r[12]; // 803D1064
  if (true) { c->lr=0x803D106Cu; dispatch(c,c->ctr); } // 803D1068
L_803D106C:;
  c->r[30]=c->r[30]+0x00000001u; // 803D106C
  c->r[31]=c->r[31]+0x00000004u; // 803D1070
  cmps(c,0,(int32_t)c->r[30],26); // 803D1074
  if (crb(c,0)) { IRQCHK(c); goto L_803D104C; } // 803D1078
  c->r[0]=R32(c->r[1]+0x00000014u); // 803D107C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 803D1080
  c->r[30]=R32(c->r[1]+0x00000008u); // 803D1084
  c->lr=c->r[0]; // 803D1088
  c->r[1]=c->r[1]+0x00000010u; // 803D108C
  return; // 803D1090
}

// bta_sys_set_trace_level
void f_803D1094(Ctx* __restrict c) {
  trace_call(0x803D1094u);
  W8(c->r[13]+0xFFFFE318u,c->r[3]); // 803D1094
  return; // 803D1098
}

// ptim_init
void f_803D109C(Ctx* __restrict c) {
  trace_call(0x803D109Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803D109C
  c->r[0]=c->lr; // 803D10A0
  W32(c->r[1]+0x00000024u,c->r[0]); // 803D10A4
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 803D10A8
  c->r[31]=c->r[5]|c->r[5]; // 803D10AC
  W32(c->r[1]+0x00000018u,c->r[30]); // 803D10B0
  c->r[30]=c->r[4]|c->r[4]; // 803D10B4
  W32(c->r[1]+0x00000014u,c->r[29]); // 803D10B8
  c->r[29]=c->r[3]|c->r[3]; // 803D10BC
  c->lr=0x803D10C4u; f_803CEB60(c); // 803D10C0
  W32(c->r[29]+0x0000000Cu,c->r[30]); // 803D10C4
  W8(c->r[29]+0x00000010u,c->r[31]); // 803D10C8
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 803D10CC
  c->r[30]=R32(c->r[1]+0x00000018u); // 803D10D0
  c->r[29]=R32(c->r[1]+0x00000014u); // 803D10D4
  c->r[0]=R32(c->r[1]+0x00000024u); // 803D10D8
  c->lr=c->r[0]; // 803D10DC
  c->r[1]=c->r[1]+0x00000020u; // 803D10E0
  return; // 803D10E4
}

// ptim_timer_update
void f_803D10E8(Ctx* __restrict c) {
  trace_call(0x803D10E8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803D10E8
  c->r[0]=c->lr; // 803D10EC
  W32(c->r[1]+0x00000014u,c->r[0]); // 803D10F0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 803D10F4
  W32(c->r[1]+0x00000008u,c->r[30]); // 803D10F8
  c->r[30]=c->r[3]|c->r[3]; // 803D10FC
  c->r[4]=R32(c->r[3]+0x0000000Cu); // 803D1100
  c->lr=0x803D1108u; f_803CEB74(c); // 803D1104
  goto L_803D115C; // 803D1108
L_803D110C:;
  c->r[3]=c->r[30]|c->r[30]; // 803D110C
  c->r[4]=c->r[31]|c->r[31]; // 803D1110
  c->lr=0x803D1118u; f_803CECEC(c); // 803D1114
  c->r[12]=R32(c->r[31]+0x00000008u); // 803D1118
  cmps(c,0,(int32_t)c->r[12],0); // 803D111C
  if (crb(c,2)) { goto L_803D1134; } // 803D1120
  c->r[3]=c->r[31]|c->r[31]; // 803D1124
  c->ctr=c->r[12]; // 803D1128
  if (true) { c->lr=0x803D1130u; dispatch(c,c->ctr); } // 803D112C
  goto L_803D115C; // 803D1130
L_803D1134:;
  c->r[0]=R16(c->r[31]+0x00000014u); // 803D1134
  cmps(c,0,(int32_t)c->r[0],0); // 803D1138
  if (crb(c,2)) { goto L_803D115C; } // 803D113C
  c->r[3]=0u+0x00000008u; // 803D1140
  c->lr=0x803D1148u; f_803CD954(c); // 803D1144
  cmps(c,0,(int32_t)c->r[3],0); // 803D1148
  if (crb(c,2)) { goto L_803D115C; } // 803D114C
  c->r[0]=R16(c->r[31]+0x00000014u); // 803D1150
  W16(c->r[3]+0x00000000u,c->r[0]); // 803D1154
  c->lr=0x803D115Cu; f_803D0FDC(c); // 803D1158
L_803D115C:;
  c->r[31]=R32(c->r[30]+0x00000000u); // 803D115C
  cmps(c,0,(int32_t)c->r[31],0); // 803D1160
  if (crb(c,2)) { goto L_803D1174; } // 803D1164
  c->r[0]=R32(c->r[31]+0x0000000Cu); // 803D1168
  cmps(c,0,(int32_t)c->r[0],0); // 803D116C
  if (!crb(c,1)) { IRQCHK(c); goto L_803D110C; } // 803D1170
L_803D1174:;
  cmps(c,0,(int32_t)c->r[31],0); // 803D1174
  if (!crb(c,2)) { goto L_803D1184; } // 803D1178
  c->r[3]=R8(c->r[30]+0x00000010u); // 803D117C
  c->lr=0x803D1184u; f_803CEAD8(c); // 803D1180
L_803D1184:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 803D1184
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 803D1188
  c->r[30]=R32(c->r[1]+0x00000008u); // 803D118C
  c->lr=c->r[0]; // 803D1190
  c->r[1]=c->r[1]+0x00000010u; // 803D1194
  return; // 803D1198
}

// ptim_start_timer
void f_803D119C(Ctx* __restrict c) {
  trace_call(0x803D119Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803D119C
  c->r[0]=c->lr; // 803D11A0
  W32(c->r[1]+0x00000024u,c->r[0]); // 803D11A4
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 803D11A8
  c->r[31]=c->r[6]|c->r[6]; // 803D11AC
  W32(c->r[1]+0x00000018u,c->r[30]); // 803D11B0
  c->r[30]=c->r[5]|c->r[5]; // 803D11B4
  W32(c->r[1]+0x00000014u,c->r[29]); // 803D11B8
  c->r[29]=c->r[4]|c->r[4]; // 803D11BC
  W32(c->r[1]+0x00000010u,c->r[28]); // 803D11C0
  c->r[28]=c->r[3]|c->r[3]; // 803D11C4
  c->r[0]=R32(c->r[3]+0x00000000u); // 803D11C8
  cmps(c,0,(int32_t)c->r[0],0); // 803D11CC
  if (!crb(c,2)) { goto L_803D11FC; } // 803D11D0
  c->r[4]=0u+0x66660000u; // 803D11D4
  c->r[0]=R32(c->r[28]+0x0000000Cu); // 803D11D8
  c->r[4]=c->r[4]+0x00006667u; // 803D11DC
  c->r[3]=R8(c->r[3]+0x00000010u); // 803D11E0
  c->r[0]=(uint32_t)(((int64_t)(int32_t)c->r[4]*(int64_t)(int32_t)c->r[0])>>32); // 803D11E4
  c->r[5]=0u+0x00000001u; // 803D11E8
  c->r[0]=sraw(c,c->r[0],2); // 803D11EC
  c->r[4]=rotl(c->r[0],1)&0x00000001u; // 803D11F0
  c->r[4]=c->r[0]+c->r[4]; // 803D11F4
  c->lr=0x803D11FCu; f_803CE988(c); // 803D11F8
L_803D11FC:;
  c->r[3]=c->r[28]|c->r[28]; // 803D11FC
  c->r[4]=c->r[29]|c->r[29]; // 803D1200
  c->lr=0x803D1208u; f_803CECEC(c); // 803D1204
  W16(c->r[29]+0x00000014u,c->r[30]); // 803D1208
  c->r[3]=c->r[28]|c->r[28]; // 803D120C
  c->r[4]=c->r[29]|c->r[29]; // 803D1210
  W32(c->r[29]+0x0000000Cu,c->r[31]); // 803D1214
  c->lr=0x803D121Cu; f_803CEC00(c); // 803D1218
  c->r[0]=R32(c->r[1]+0x00000024u); // 803D121C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 803D1220
  c->r[30]=R32(c->r[1]+0x00000018u); // 803D1224
  c->r[29]=R32(c->r[1]+0x00000014u); // 803D1228
  c->r[28]=R32(c->r[1]+0x00000010u); // 803D122C
  c->lr=c->r[0]; // 803D1230
  c->r[1]=c->r[1]+0x00000020u; // 803D1234
  return; // 803D1238
}

// ptim_stop_timer
void f_803D123C(Ctx* __restrict c) {
  trace_call(0x803D123Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803D123C
  c->r[0]=c->lr; // 803D1240
  W32(c->r[1]+0x00000014u,c->r[0]); // 803D1244
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 803D1248
  c->r[31]=c->r[3]|c->r[3]; // 803D124C
  c->lr=0x803D1254u; f_803CECEC(c); // 803D1250
  c->r[0]=R32(c->r[31]+0x00000000u); // 803D1254
  cmps(c,0,(int32_t)c->r[0],0); // 803D1258
  if (!crb(c,2)) { goto L_803D1268; } // 803D125C
  c->r[3]=R8(c->r[31]+0x00000010u); // 803D1260
  c->lr=0x803D1268u; f_803CEAD8(c); // 803D1264
L_803D1268:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 803D1268
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 803D126C
  c->lr=c->r[0]; // 803D1270
  c->r[1]=c->r[1]+0x00000010u; // 803D1274
  return; // 803D1278
}

// utl_freebuf
void f_803D127C(Ctx* __restrict c) {
  trace_call(0x803D127Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803D127C
  c->r[0]=c->lr; // 803D1280
  W32(c->r[1]+0x00000014u,c->r[0]); // 803D1284
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 803D1288
  c->r[31]=c->r[3]|c->r[3]; // 803D128C
  c->r[0]=R32(c->r[3]+0x00000000u); // 803D1290
  cmps(c,0,(int32_t)c->r[0],0); // 803D1294
  if (crb(c,2)) { goto L_803D12AC; } // 803D1298
  c->r[3]=c->r[0]|c->r[0]; // 803D129C
  c->lr=0x803D12A4u; f_803CDBDC(c); // 803D12A0
  c->r[0]=0u+0x00000000u; // 803D12A4
  W32(c->r[31]+0x00000000u,c->r[0]); // 803D12A8
L_803D12AC:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 803D12AC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 803D12B0
  c->lr=c->r[0]; // 803D12B4
  c->r[1]=c->r[1]+0x00000010u; // 803D12B8
  return; // 803D12BC
}

// bta_dm_enable
void f_803D12C0(Ctx* __restrict c) {
  trace_call(0x803D12C0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803D12C0
  c->r[0]=c->lr; // 803D12C4
  c->r[4]=0u+0x807B0000u; // 803D12C8
  c->r[5]=0u+0x0000007Cu; // 803D12CC
  W32(c->r[1]+0x00000024u,c->r[0]); // 803D12D0
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 803D12D4
  W32(c->r[1]+0x00000018u,c->r[30]); // 803D12D8
  c->r[30]=c->r[3]|c->r[3]; // 803D12DC
  c->r[3]=c->r[4]+0x000063B8u; // 803D12E0
  c->r[4]=0u+0x00000000u; // 803D12E4
  c->lr=0x803D12ECu; f_800043EC(c); // 803D12E8
  c->r[3]=0u+0x807B0000u; // 803D12EC
  c->r[4]=0u+0x00000000u; // 803D12F0
  c->r[3]=c->r[3]+0x00006538u; // 803D12F4
  c->r[5]=0u+0x0000002Eu; // 803D12F8
  c->lr=0x803D1300u; f_800043EC(c); // 803D12FC
  c->r[31]=0u+0x806A0000u; // 803D1300
  c->r[3]=c->r[1]+0x00000008u; // 803D1304
  c->r[4]=c->r[31]+0x00004528u; // 803D1308
  c->r[5]=0u+0x00000003u; // 803D130C
  c->lr=0x803D1314u; f_802DC484(c); // 803D1310
  c->r[3]=c->r[1]+0x00000008u; // 803D1314
  c->lr=0x803D131Cu; f_803D9EA0(c); // 803D1318
  c->r[4]=0u+0x807B0000u; // 803D131C
  c->r[0]=R32(c->r[30]+0x00000008u); // 803D1320
  c->r[4]=c->r[4]+0x00006434u; // 803D1324
  c->r[3]=0u+0x806A0000u; // 803D1328
  W32(c->r[4]+0x00000050u,c->r[0]); // 803D132C
  c->r[3]=c->r[3]+0x00004658u; // 803D1330
  c->lr=0x803D1338u; f_803DDE88(c); // 803D1334
  c->r[31]=c->r[31]+0x00004528u; // 803D1338
  c->r[3]=R16(c->r[31]+0x00000008u); // 803D133C
  c->lr=0x803D1344u; f_803D7820(c); // 803D1340
  c->r[3]=R16(c->r[31]+0x00000006u); // 803D1344
  c->lr=0x803D134Cu; f_803DA190(c); // 803D1348
  c->r[3]=R16(c->r[31]+0x00000004u); // 803D134C
  c->lr=0x803D1354u; f_803D7454(c); // 803D1350
  c->r[3]=0u+0x803D0000u; // 803D1354
  c->r[3]=c->r[3]+0x00002D00u; // 803D1358
  c->lr=0x803D1360u; f_803D7E9C(c); // 803D135C
  c->r[3]=0u+0x803D0000u; // 803D1360
  c->r[3]=c->r[3]+0x00002BA8u; // 803D1364
  c->lr=0x803D136Cu; f_803D9DCC(c); // 803D1368
  c->r[3]=0u+0x803D0000u; // 803D136C
  c->r[3]=c->r[3]+0x00003400u; // 803D1370
  c->lr=0x803D1378u; f_803D0C04(c); // 803D1374
  c->r[31]=0u+0x803D0000u; // 803D1378
  c->r[3]=c->r[31]+0x000031C8u; // 803D137C
  c->lr=0x803D1384u; f_803D0C14(c); // 803D1380
  c->lr=0x803D1388u; f_803D3BC8(c); // 803D1384
  c->r[3]=0u+0x807B0000u; // 803D1388
  c->r[4]=0u+0x00000000u; // 803D138C
  c->r[3]=c->r[3]+0x00006388u; // 803D1390
  c->r[5]=0u+0x0000002Du; // 803D1394
  c->lr=0x803D139Cu; f_800043EC(c); // 803D1398
  c->r[3]=c->r[31]+0x000031C8u; // 803D139C
  c->lr=0x803D13A4u; f_803D0C14(c); // 803D13A0
  c->r[3]=0u+0x803D0000u; // 803D13A4
  c->r[4]=0u+0x00000000u; // 803D13A8
  c->r[3]=c->r[3]+0x000030E4u; // 803D13AC
  c->lr=0x803D13B4u; f_803E99C8(c); // 803D13B0
  c->lr=0x803D13B8u; f_803E2120(c); // 803D13B4
  c->r[0]=R32(c->r[1]+0x00000024u); // 803D13B8
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 803D13BC
  c->r[30]=R32(c->r[1]+0x00000018u); // 803D13C0
  c->lr=c->r[0]; // 803D13C4
  c->r[1]=c->r[1]+0x00000020u; // 803D13C8
  return; // 803D13CC
}

// bta_dm_disable
void f_803D13D0(Ctx* __restrict c) {
  trace_call(0x803D13D0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803D13D0
  c->r[0]=c->lr; // 803D13D4
  c->r[3]=c->r[2]+0x00000EA8u; // 803D13D8
  c->r[4]=0u+0x00000000u; // 803D13DC
  W32(c->r[1]+0x00000014u,c->r[0]); // 803D13E0
  c->lr=0x803D13E8u; f_803E98AC(c); // 803D13E4
  c->lr=0x803D13ECu; f_803D102C(c); // 803D13E8
  c->r[3]=0u+0x00000000u; // 803D13EC
  c->r[4]=0u+0x00000000u; // 803D13F0
  c->r[5]=0u+0x00000000u; // 803D13F4
  c->lr=0x803D13FCu; f_803DA8C8(c); // 803D13F8
  c->r[3]=0u+0x00000000u; // 803D13FC
  c->r[4]=0u+0x00000000u; // 803D1400
  c->r[5]=0u+0x00000000u; // 803D1404
  c->lr=0x803D140Cu; f_803DAD44(c); // 803D1408
  c->lr=0x803D1410u; f_803D3C30(c); // 803D140C
  c->lr=0x803D1414u; f_803D7908(c); // 803D1410
  c->r[0]=rotl(c->r[3],0)&0x0000FFFFu; cr0(c,c->r[0]); // 803D1414
  if (!crb(c,2)) { goto L_803D1444; } // 803D1418
  c->r[6]=0u+0x803D0000u; // 803D141C
  c->r[3]=0u+0x807B0000u; // 803D1420
  c->r[3]=c->r[3]+0x00006434u; // 803D1424
  c->r[4]=0u+0x00000000u; // 803D1428
  c->r[6]=c->r[6]+0x00002FF0u; // 803D142C
  c->r[5]=0u+0x000003E8u; // 803D1430
  W32(c->r[3]+0x0000007Cu,c->r[6]); // 803D1434
  c->r[3]=c->r[3]+0x00000074u; // 803D1438
  c->lr=0x803D1440u; f_803D0FF8(c); // 803D143C
  goto L_803D1470; // 803D1440
L_803D1444:;
  c->r[6]=0u+0x807B0000u; // 803D1444
  c->r[5]=0u+0x803D0000u; // 803D1448
  c->r[6]=c->r[6]+0x00006434u; // 803D144C
  c->r[0]=0u+0x00000001u; // 803D1450
  c->r[5]=c->r[5]+0x00001480u; // 803D1454
  W8(c->r[6]+0x00000072u,c->r[0]); // 803D1458
  c->r[3]=c->r[6]+0x00000074u; // 803D145C
  c->r[4]=0u+0x00000000u; // 803D1460
  W32(c->r[6]+0x0000007Cu,c->r[5]); // 803D1464
  c->r[5]=0u+0x00001388u; // 803D1468
  c->lr=0x803D1470u; f_803D0FF8(c); // 803D146C
L_803D1470:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 803D1470
  c->lr=c->r[0]; // 803D1474
  c->r[1]=c->r[1]+0x00000010u; // 803D1478
  return; // 803D147C
}

// bta_dm_disable_timer_cback
void f_803D1480(Ctx* __restrict c) {
  trace_call(0x803D1480u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803D1480
  c->r[0]=c->lr; // 803D1484
  W32(c->r[1]+0x00000014u,c->r[0]); // 803D1488
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 803D148C
  W32(c->r[1]+0x00000008u,c->r[30]); // 803D1490
  c->r[0]=R8(c->r[13]+0xFFFFE318u); // 803D1494
  cmpu(c,0,c->r[0],0x00000004u); // 803D1498
  if (crb(c,0)) { goto L_803D14B0; } // 803D149C
  c->r[4]=0u+0x80710000u; // 803D14A0
  c->r[3]=0u+0x00000503u; // 803D14A4
  c->r[4]=c->r[4]+0xFFFFAAE0u; // 803D14A8
  c->lr=0x803D14B0u; f_803D04E0(c); // 803D14AC
L_803D14B0:;
  c->lr=0x803D14B4u; f_803D7908(c); // 803D14B0
  c->r[0]=rotl(c->r[3],0)&0x0000FFFFu; cr0(c,c->r[0]); // 803D14B4
  if (crb(c,2)) { goto L_803D1500; } // 803D14B8
  c->r[3]=0u+0x807B0000u; // 803D14BC
  c->r[31]=c->r[3]+0x00006434u; // 803D14C0
  c->r[0]=R8(c->r[31]+0x00000101u); // 803D14C4
  cmps(c,0,(int32_t)c->r[0],0); // 803D14C8
  if (!crb(c,2)) { goto L_803D1500; } // 803D14CC
  c->r[30]=0u+0x00000000u; // 803D14D0
  goto L_803D14EC; // 803D14D4
L_803D14D8:;
  c->r[0]=rotl(c->r[30],0)&0x000000FFu; // 803D14D8
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)11); // 803D14DC
  c->r[3]=c->r[31]+c->r[0]; // 803D14E0
  c->lr=0x803D14E8u; f_803D8464(c); // 803D14E4
  c->r[30]=c->r[30]+0x00000001u; // 803D14E8
L_803D14EC:;
  c->r[0]=R8(c->r[31]+0x0000004Du); // 803D14EC
  c->r[3]=rotl(c->r[30],0)&0x000000FFu; // 803D14F0
  cmpu(c,0,c->r[3],c->r[0]); // 803D14F4
  if (crb(c,0)) { IRQCHK(c); goto L_803D14D8; } // 803D14F8
  goto L_803D1524; // 803D14FC
L_803D1500:;
  c->r[5]=0u+0x807B0000u; // 803D1500
  c->r[0]=0u+0x00000000u; // 803D1504
  c->r[5]=c->r[5]+0x00006434u; // 803D1508
  c->r[3]=0u+0x00000001u; // 803D150C
  c->r[12]=R32(c->r[5]+0x00000050u); // 803D1510
  c->r[4]=0u+0x00000000u; // 803D1514
  W8(c->r[5]+0x00000072u,c->r[0]); // 803D1518
  c->ctr=c->r[12]; // 803D151C
  if (true) { c->lr=0x803D1524u; dispatch(c,c->ctr); } // 803D1520
L_803D1524:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 803D1524
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 803D1528
  c->r[30]=R32(c->r[1]+0x00000008u); // 803D152C
  c->lr=c->r[0]; // 803D1530
  c->r[1]=c->r[1]+0x00000010u; // 803D1534
  return; // 803D1538
}

// fn_803D153C
void f_803D153C(Ctx* __restrict c) {
  trace_call(0x803D153Cu);
  c->r[3]=c->r[3]+0x00000008u; // 803D153C
  f_803D9C88(c); return; // 803D1540
}

// bta_dm_set_visibility
void f_803D1544(Ctx* __restrict c) {
  trace_call(0x803D1544u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803D1544
  c->r[0]=c->lr; // 803D1548
  c->r[4]=0u+0x00000000u; // 803D154C
  c->r[5]=0u+0x00000000u; // 803D1550
  W32(c->r[1]+0x00000014u,c->r[0]); // 803D1554
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 803D1558
  c->r[31]=c->r[3]|c->r[3]; // 803D155C
  c->r[3]=R8(c->r[3]+0x00000008u); // 803D1560
  c->lr=0x803D1568u; f_803DA8C8(c); // 803D1564
  c->r[3]=R8(c->r[31]+0x00000009u); // 803D1568
  c->r[4]=0u+0x00000000u; // 803D156C
  c->r[5]=0u+0x00000000u; // 803D1570
  c->lr=0x803D1578u; f_803DAD44(c); // 803D1574
  c->r[0]=R32(c->r[1]+0x00000014u); // 803D1578
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 803D157C
  c->lr=c->r[0]; // 803D1580
  c->r[1]=c->r[1]+0x00000010u; // 803D1584
  return; // 803D1588
}

// bta_dm_bond
void f_803D158C(Ctx* __restrict c) {
  trace_call(0x803D158Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803D158C
  c->r[0]=c->lr; // 803D1590
  W32(c->r[1]+0x00000024u,c->r[0]); // 803D1594
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 803D1598
  c->r[31]=c->r[3]|c->r[3]; // 803D159C
  c->r[3]=c->r[3]+0x00000008u; // 803D15A0
  c->lr=0x803D15A8u; f_803E0E18(c); // 803D15A4
  cmps(c,0,(int32_t)c->r[3],0); // 803D15A8
  if (crb(c,2)) { goto L_803D15C4; } // 803D15AC
  c->r[4]=c->r[3]|c->r[3]; // 803D15B0
  c->r[3]=c->r[1]+0x00000008u; // 803D15B4
  c->r[5]=0u+0x00000008u; // 803D15B8
  c->lr=0x803D15C0u; f_802DC484(c); // 803D15BC
  goto L_803D15D4; // 803D15C0
L_803D15C4:;
  c->r[3]=c->r[1]+0x00000008u; // 803D15C4
  c->r[4]=0u+0x00000000u; // 803D15C8
  c->r[5]=0u+0x00000008u; // 803D15CC
  c->lr=0x803D15D4u; f_800043EC(c); // 803D15D0
L_803D15D4:;
  c->r[4]=R8(c->r[31]+0x0000000Eu); // 803D15D4
  c->r[3]=c->r[31]+0x00000008u; // 803D15D8
  c->r[5]=c->r[31]+0x0000000Fu; // 803D15DC
  c->r[6]=c->r[1]+0x00000008u; // 803D15E0
  c->lr=0x803D15E8u; f_803DE51C(c); // 803D15E4
  c->r[0]=R32(c->r[1]+0x00000024u); // 803D15E8
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 803D15EC
  c->lr=c->r[0]; // 803D15F0
  c->r[1]=c->r[1]+0x00000020u; // 803D15F4
  return; // 803D15F8
}

// bta_dm_pin_reply
void f_803D15FC(Ctx* __restrict c) {
  trace_call(0x803D15FCu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803D15FC
  c->r[0]=c->lr; // 803D1600
  W32(c->r[1]+0x00000024u,c->r[0]); // 803D1604
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 803D1608
  c->r[31]=c->r[3]|c->r[3]; // 803D160C
  c->r[3]=c->r[3]+0x00000008u; // 803D1610
  c->lr=0x803D1618u; f_803E0E18(c); // 803D1614
  cmps(c,0,(int32_t)c->r[3],0); // 803D1618
  if (crb(c,2)) { goto L_803D1634; } // 803D161C
  c->r[4]=c->r[3]|c->r[3]; // 803D1620
  c->r[3]=c->r[1]+0x00000008u; // 803D1624
  c->r[5]=0u+0x00000008u; // 803D1628
  c->lr=0x803D1630u; f_802DC484(c); // 803D162C
  goto L_803D1644; // 803D1630
L_803D1634:;
  c->r[3]=c->r[1]+0x00000008u; // 803D1634
  c->r[4]=0u+0x00000000u; // 803D1638
  c->r[5]=0u+0x00000008u; // 803D163C
  c->lr=0x803D1644u; f_800043EC(c); // 803D1640
L_803D1644:;
  c->r[0]=R8(c->r[31]+0x0000000Eu); // 803D1644
  cmps(c,0,(int32_t)c->r[0],0); // 803D1648
  if (crb(c,2)) { goto L_803D166C; } // 803D164C
  c->r[5]=R8(c->r[31]+0x0000000Fu); // 803D1650
  c->r[3]=c->r[31]+0x00000008u; // 803D1654
  c->r[6]=c->r[31]+0x00000010u; // 803D1658
  c->r[7]=c->r[1]+0x00000008u; // 803D165C
  c->r[4]=0u+0x00000000u; // 803D1660
  c->lr=0x803D1668u; f_803DE27C(c); // 803D1664
  goto L_803D1684; // 803D1668
L_803D166C:;
  c->r[3]=c->r[31]+0x00000008u; // 803D166C
  c->r[7]=c->r[1]+0x00000008u; // 803D1670
  c->r[4]=0u+0x0000000Bu; // 803D1674
  c->r[5]=0u+0x00000000u; // 803D1678
  c->r[6]=0u+0x00000000u; // 803D167C
  c->lr=0x803D1684u; f_803DE27C(c); // 803D1680
L_803D1684:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 803D1684
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 803D1688
  c->lr=c->r[0]; // 803D168C
  c->r[1]=c->r[1]+0x00000020u; // 803D1690
  return; // 803D1694
}

// bta_dm_auth_reply
void f_803D1698(Ctx* __restrict c) {
  trace_call(0x803D1698u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803D1698
  c->r[0]=c->lr; // 803D169C
  W32(c->r[1]+0x00000024u,c->r[0]); // 803D16A0
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 803D16A4
  c->r[31]=c->r[3]|c->r[3]; // 803D16A8
  c->r[3]=c->r[3]+0x00000008u; // 803D16AC
  c->lr=0x803D16B4u; f_803E0E18(c); // 803D16B0
  cmps(c,0,(int32_t)c->r[3],0); // 803D16B4
  if (crb(c,2)) { goto L_803D16D0; } // 803D16B8
  c->r[4]=c->r[3]|c->r[3]; // 803D16BC
  c->r[3]=c->r[1]+0x00000008u; // 803D16C0
  c->r[5]=0u+0x00000008u; // 803D16C4
  c->lr=0x803D16CCu; f_802DC484(c); // 803D16C8
  goto L_803D16E0; // 803D16CC
L_803D16D0:;
  c->r[3]=c->r[1]+0x00000008u; // 803D16D0
  c->r[4]=0u+0x00000000u; // 803D16D4
  c->r[5]=0u+0x00000008u; // 803D16D8
  c->lr=0x803D16E0u; f_800043EC(c); // 803D16DC
L_803D16E0:;
  c->r[0]=R8(c->r[31]+0x0000000Fu); // 803D16E0
  cmpu(c,0,c->r[0],0x00000002u); // 803D16E4
  if (crb(c,2)) { goto L_803D1748; } // 803D16E8
  cmps(c,0,(int32_t)c->r[0],0); // 803D16EC
  if (!crb(c,2)) { goto L_803D1734; } // 803D16F0
  c->r[0]=R8(c->r[31]+0x0000000Eu); // 803D16F4
  cmpu(c,0,c->r[0],0x00000017u); // 803D16F8
  if (crb(c,1)) { goto L_803D1734; } // 803D16FC
  c->r[3]=0u+0x806A0000u; // 803D1700
  c->r[0]=rotl(c->r[0],2)&0x000003FCu; // 803D1704
  c->r[3]=c->r[3]+0x000045F8u; // 803D1708
  c->r[5]=c->r[1]+0x00000008u; // 803D170C
  c->r[4]=R32(c->r[3]+c->r[0]); // 803D1710
  c->r[3]=0u+0x00000001u; // 803D1714
  c->r[0]=rotl(c->r[4],0)&0x00001FE0u; // 803D1718
  c->r[6]=rotl(c->r[4],29)&0x000003FCu; // 803D171C
  c->r[0]=c->r[4]-c->r[0]; // 803D1720
  c->r[4]=R32(c->r[5]+c->r[6]); // 803D1724
  c->r[0]=((c->r[0])&0x20)?0u:(c->r[3]<<((c->r[0])&31)); // 803D1728
  c->r[0]=c->r[4]|c->r[0]; // 803D172C
  W32(c->r[5]+c->r[6],c->r[0]); // 803D1730
L_803D1734:;
  c->r[3]=c->r[31]+0x00000008u; // 803D1734
  c->r[5]=c->r[1]+0x00000008u; // 803D1738
  c->r[4]=0u+0x00000000u; // 803D173C
  c->lr=0x803D1744u; f_803DE340(c); // 803D1740
  goto L_803D1758; // 803D1744
L_803D1748:;
  c->r[3]=c->r[31]+0x00000008u; // 803D1748
  c->r[5]=c->r[1]+0x00000008u; // 803D174C
  c->r[4]=0u+0x0000000Bu; // 803D1750
  c->lr=0x803D1758u; f_803DE340(c); // 803D1754
L_803D1758:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 803D1758
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 803D175C
  c->lr=c->r[0]; // 803D1760
  c->r[1]=c->r[1]+0x00000020u; // 803D1764
  return; // 803D1768
}

// bta_dm_search_start
void f_803D176C(Ctx* __restrict c) {
  trace_call(0x803D176Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803D176C
  c->r[0]=c->lr; // 803D1770
  W32(c->r[1]+0x00000014u,c->r[0]); // 803D1774
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 803D1778
  c->r[31]=c->r[3]|c->r[3]; // 803D177C
  c->r[3]=0u+0x00000000u; // 803D1780
  c->lr=0x803D1788u; f_803DB5AC(c); // 803D1784
  c->r[0]=R32(c->r[31]+0x00000018u); // 803D1788
  c->r[3]=0u+0x807B0000u; // 803D178C
  c->r[4]=0u+0x803D0000u; // 803D1790
  c->r[5]=0u+0x803D0000u; // 803D1794
  W32(c->r[3]+0x000063B8u,c->r[0]); // 803D1798
  c->r[6]=c->r[3]+0x000063B8u; // 803D179C
  c->r[3]=c->r[31]+0x00000008u; // 803D17A0
  c->r[4]=c->r[4]+0x00002594u; // 803D17A4
  c->r[0]=R32(c->r[31]+0x00000014u); // 803D17A8
  c->r[5]=c->r[5]+0x00002624u; // 803D17AC
  W32(c->r[6]+0x00000008u,c->r[0]); // 803D17B0
  c->lr=0x803D17B8u; f_803DAFE4(c); // 803D17B4
  c->r[0]=R32(c->r[1]+0x00000014u); // 803D17B8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 803D17BC
  c->lr=c->r[0]; // 803D17C0
  c->r[1]=c->r[1]+0x00000010u; // 803D17C4
  return; // 803D17C8
}

// bta_dm_search_cancel
void f_803D17CC(Ctx* __restrict c) {
  trace_call(0x803D17CCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803D17CC
  c->r[0]=c->lr; // 803D17D0
  c->r[3]=0u+0x00000000u; // 803D17D4
  W32(c->r[1]+0x00000014u,c->r[0]); // 803D17D8
  c->lr=0x803D17E0u; f_803DB5AC(c); // 803D17DC
  c->lr=0x803D17E4u; f_803DAECC(c); // 803D17E0
  c->r[0]=rotl(c->r[3],0)&0x0000FFFFu; cr0(c,c->r[0]); // 803D17E4
  if (crb(c,2)) { goto L_803D1828; } // 803D17E8
  c->lr=0x803D17F0u; f_803DAEDC(c); // 803D17EC
  c->r[4]=0u+0x807B0000u; // 803D17F0
  c->r[3]=0u+0x00000004u; // 803D17F4
  c->r[12]=R32(c->r[4]+0x000063B8u); // 803D17F8
  c->r[4]=0u+0x00000000u; // 803D17FC
  c->ctr=c->r[12]; // 803D1800
  if (true) { c->lr=0x803D1808u; dispatch(c,c->ctr); } // 803D1804
  c->r[3]=0u+0x00000110u; // 803D1808
  c->lr=0x803D1810u; f_803CD954(c); // 803D180C
  cmps(c,0,(int32_t)c->r[3],0); // 803D1810
  if (crb(c,2)) { goto L_803D1840; } // 803D1814
  c->r[0]=0u+0x00000207u; // 803D1818
  W16(c->r[3]+0x00000000u,c->r[0]); // 803D181C
  c->lr=0x803D1824u; f_803D0FDC(c); // 803D1820
  goto L_803D1840; // 803D1824
L_803D1828:;
  c->r[3]=0u+0x807B0000u; // 803D1828
  c->r[3]=c->r[3]+0x000063B8u; // 803D182C
  c->r[0]=R32(c->r[3]+0x00000008u); // 803D1830
  cmps(c,0,(int32_t)c->r[0],0); // 803D1834
  if (!crb(c,2)) { goto L_803D1840; } // 803D1838
  c->lr=0x803D1840u; f_803DB280(c); // 803D183C
L_803D1840:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 803D1840
  c->lr=c->r[0]; // 803D1844
  c->r[1]=c->r[1]+0x00000010u; // 803D1848
  return; // 803D184C
}

// bta_dm_discover
void f_803D1850(Ctx* __restrict c) {
  trace_call(0x803D1850u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803D1850
  c->r[0]=c->lr; // 803D1854
  c->r[4]=0u+0x807B0000u; // 803D1858
  W32(c->r[1]+0x00000014u,c->r[0]); // 803D185C
  c->r[0]=0u+0x00000000u; // 803D1860
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 803D1864
  c->r[31]=c->r[4]+0x000063B8u; // 803D1868
  W32(c->r[1]+0x00000008u,c->r[30]); // 803D186C
  c->r[30]=c->r[3]|c->r[3]; // 803D1870
  c->r[5]=R32(c->r[3]+0x00000014u); // 803D1874
  W32(c->r[4]+0x000063B8u,c->r[5]); // 803D1878
  c->r[4]=0u+0x803D0000u; // 803D187C
  c->r[5]=R32(c->r[3]+0x00000010u); // 803D1880
  c->r[3]=c->r[4]+0x00002670u; // 803D1884
  W32(c->r[31]+0x00000008u,c->r[5]); // 803D1888
  W32(c->r[31]+0x0000000Cu,c->r[5]); // 803D188C
  W8(c->r[31]+0x00000070u,c->r[0]); // 803D1890
  W32(c->r[31]+0x00000010u,c->r[0]); // 803D1894
  W8(c->r[31]+0x00000020u,c->r[0]); // 803D1898
  c->lr=0x803D18A0u; f_803DDF00(c); // 803D189C
  c->r[3]=c->r[31]+0x0000001Au; // 803D18A0
  c->r[4]=c->r[30]+0x00000008u; // 803D18A4
  c->lr=0x803D18ACu; f_803D0B30(c); // 803D18A8
  c->r[0]=R32(c->r[31]+0x00000008u); // 803D18AC
  cmps(c,0,(int32_t)c->r[0],0); // 803D18B0
  if (crb(c,2)) { goto L_803D18C4; } // 803D18B4
  c->r[3]=c->r[31]+0x0000001Au; // 803D18B8
  c->lr=0x803D18C0u; f_803D22CC(c); // 803D18BC
  goto L_803D194C; // 803D18C0
L_803D18C4:;
  c->r[3]=0u+0x807B0000u; // 803D18C4
  c->r[3]=c->r[3]+0x00006798u; // 803D18C8
  c->r[4]=R16(c->r[3]+0x0000064Cu); // 803D18CC
  cmpu(c,0,c->r[4],0x00007530u); // 803D18D0
  if (!crb(c,0)) { goto L_803D18E8; } // 803D18D4
  c->r[5]=c->r[4]+0x00000064u; // 803D18D8
  c->r[3]=c->r[31]+0x00000058u; // 803D18DC
  c->r[4]=0u+0x00000205u; // 803D18E0
  c->lr=0x803D18E8u; f_803D0FF8(c); // 803D18E4
L_803D18E8:;
  c->r[31]=0u+0x807B0000u; // 803D18E8
  c->r[4]=0u+0x803D0000u; // 803D18EC
  c->r[31]=c->r[31]+0x000063B8u; // 803D18F0
  c->r[3]=c->r[31]+0x0000001Au; // 803D18F4
  c->r[4]=c->r[4]+0x0000273Cu; // 803D18F8
  c->lr=0x803D1900u; f_803DB198(c); // 803D18FC
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; // 803D1900
  cmpu(c,0,c->r[0],0x00000001u); // 803D1904
  if (crb(c,2)) { goto L_803D194C; } // 803D1908
  c->r[3]=c->r[31]+0x00000058u; // 803D190C
  c->lr=0x803D1914u; f_803D1018(c); // 803D1910
  c->r[3]=0u+0x00000110u; // 803D1914
  c->lr=0x803D191Cu; f_803CD954(c); // 803D1918
  cmps(c,0,(int32_t)c->r[3],0); // 803D191C
  c->r[30]=c->r[3]|c->r[3]; // 803D1920
  if (crb(c,2)) { goto L_803D194C; } // 803D1924
  c->r[3]=c->r[3]+0x00000008u; // 803D1928
  c->r[4]=c->r[31]+0x0000001Au; // 803D192C
  c->lr=0x803D1934u; f_803D0B30(c); // 803D1930
  c->r[3]=0u+0x00000000u; // 803D1934
  c->r[0]=0u+0x00000204u; // 803D1938
  W8(c->r[30]+0x0000000Eu,c->r[3]); // 803D193C
  c->r[3]=c->r[30]|c->r[30]; // 803D1940
  W16(c->r[30]+0x00000000u,c->r[0]); // 803D1944
  c->lr=0x803D194Cu; f_803D0FDC(c); // 803D1948
L_803D194C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 803D194C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 803D1950
  c->r[30]=R32(c->r[1]+0x00000008u); // 803D1954
  c->lr=c->r[0]; // 803D1958
  c->r[1]=c->r[1]+0x00000010u; // 803D195C
  return; // 803D1960
}

// bta_dm_inq_cmpl
void f_803D1964(Ctx* __restrict c) {
  trace_call(0x803D1964u);
  {uint32_t ea=c->r[1]+0xFFFFFDD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803D1964
  c->r[0]=c->lr; // 803D1968
  W32(c->r[1]+0x00000234u,c->r[0]); // 803D196C
  c->r[11]=c->r[1]+0x00000230u; // 803D1970
  c->lr=0x803D1978u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 803D1974
  c->r[31]=c->r[3]|c->r[3]; // 803D1978
  c->r[27]=0u+0x00000001u; // 803D197C
  c->lr=0x803D1984u; f_803DB3B8(c); // 803D1980
  c->r[28]=0u+0x807B0000u; // 803D1984
  cmps(c,0,(int32_t)c->r[3],0); // 803D1988
  c->r[29]=c->r[28]+0x000063B8u; // 803D198C
  W32(c->r[29]+0x00000004u,c->r[3]); // 803D1990
  if (crb(c,2)) { goto L_803D1B1C; } // 803D1994
  c->r[0]=R32(c->r[29]+0x00000008u); // 803D1998
  c->r[27]=0u+0x00000000u; // 803D199C
  cmps(c,0,(int32_t)c->r[0],0); // 803D19A0
  if (crb(c,2)) { goto L_803D1A1C; } // 803D19A4
  c->r[3]=c->r[3]+0x00000002u; // 803D19A8
  c->lr=0x803D19B0u; f_803D7830(c); // 803D19AC
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 803D19B0
  if (crb(c,2)) { goto L_803D19C4; } // 803D19B4
  c->r[0]=0u+0x00000000u; // 803D19B8
  W8(c->r[29]+0x00000078u,c->r[0]); // 803D19BC
  goto L_803D19CC; // 803D19C0
L_803D19C4:;
  c->r[0]=0u+0x00000001u; // 803D19C4
  W8(c->r[29]+0x00000078u,c->r[0]); // 803D19C8
L_803D19CC:;
  c->r[30]=0u+0x807B0000u; // 803D19CC
  c->r[3]=0u+0x803D0000u; // 803D19D0
  c->r[30]=c->r[30]+0x000063B8u; // 803D19D4
  c->r[29]=0u+0x00000000u; // 803D19D8
  W8(c->r[30]+0x00000079u,c->r[29]); // 803D19DC
  c->r[3]=c->r[3]+0x00002670u; // 803D19E0
  c->lr=0x803D19E8u; f_803DDF00(c); // 803D19E4
  c->r[0]=R32(c->r[30]+0x00000008u); // 803D19E8
  c->r[3]=c->r[30]+0x0000001Au; // 803D19EC
  c->r[4]=R32(c->r[30]+0x00000004u); // 803D19F0
  W8(c->r[30]+0x00000070u,c->r[29]); // 803D19F4
  c->r[4]=c->r[4]+0x00000002u; // 803D19F8
  W32(c->r[30]+0x00000010u,c->r[29]); // 803D19FC
  W32(c->r[30]+0x0000000Cu,c->r[0]); // 803D1A00
  W8(c->r[30]+0x00000020u,c->r[29]); // 803D1A04
  c->lr=0x803D1A0Cu; f_803D0B30(c); // 803D1A08
  c->r[3]=R32(c->r[30]+0x00000004u); // 803D1A0C
  c->r[3]=c->r[3]+0x00000002u; // 803D1A10
  c->lr=0x803D1A18u; f_803D22CC(c); // 803D1A14
  goto L_803D1B1C; // 803D1A18
L_803D1A1C:;
  c->r[27]=0u+0x00000001u; // 803D1A1C
  c->r[30]=0u+0x00000000u; // 803D1A20
  goto L_803D1B10; // 803D1A24
L_803D1A28:;
  c->r[0]=R8(c->r[4]+0x00000010u); // 803D1A28
  cmps(c,0,(int32_t)c->r[0],0); // 803D1A2C
  if (crb(c,2)) { goto L_803D1A60; } // 803D1A30
  c->r[3]=c->r[1]+0x00000008u; // 803D1A34
  c->r[4]=c->r[4]+0x00000002u; // 803D1A38
  c->lr=0x803D1A40u; f_803D0B30(c); // 803D1A3C
  c->r[12]=R32(c->r[28]+0x000063B8u); // 803D1A40
  c->r[4]=c->r[1]+0x00000008u; // 803D1A44
  W8(c->r[1]+0x0000000Eu,c->r[30]); // 803D1A48
  c->r[3]=0u+0x00000002u; // 803D1A4C
  W32(c->r[1]+0x00000108u,c->r[30]); // 803D1A50
  c->ctr=c->r[12]; // 803D1A54
  if (true) { c->lr=0x803D1A5Cu; dispatch(c,c->ctr); } // 803D1A58
  goto L_803D1B04; // 803D1A5C
L_803D1A60:;
  c->r[3]=0u+0x807B0000u; // 803D1A60
  c->r[3]=c->r[3]+0x00006798u; // 803D1A64
  c->r[4]=R16(c->r[3]+0x0000064Cu); // 803D1A68
  cmpu(c,0,c->r[4],0x00007530u); // 803D1A6C
  if (!crb(c,0)) { goto L_803D1A8C; } // 803D1A70
  c->r[3]=0u+0x807B0000u; // 803D1A74
  c->r[5]=c->r[4]+0x00000064u; // 803D1A78
  c->r[3]=c->r[3]+0x000063B8u; // 803D1A7C
  c->r[4]=0u+0x00000205u; // 803D1A80
  c->r[3]=c->r[3]+0x00000058u; // 803D1A84
  c->lr=0x803D1A8Cu; f_803D0FF8(c); // 803D1A88
L_803D1A8C:;
  c->r[30]=0u+0x807B0000u; // 803D1A8C
  c->r[4]=0u+0x803D0000u; // 803D1A90
  c->r[30]=c->r[30]+0x000063B8u; // 803D1A94
  c->r[3]=R32(c->r[30]+0x00000004u); // 803D1A98
  c->r[4]=c->r[4]+0x000026B0u; // 803D1A9C
  c->r[3]=c->r[3]+0x00000002u; // 803D1AA0
  c->lr=0x803D1AA8u; f_803DB198(c); // 803D1AA4
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; // 803D1AA8
  cmpu(c,0,c->r[0],0x00000001u); // 803D1AAC
  if (crb(c,2)) { goto L_803D1AFC; } // 803D1AB0
  c->r[3]=c->r[30]+0x00000058u; // 803D1AB4
  c->lr=0x803D1ABCu; f_803D1018(c); // 803D1AB8
  c->r[4]=R32(c->r[30]+0x00000004u); // 803D1ABC
  c->r[3]=0u+0x00000110u; // 803D1AC0
  c->r[28]=c->r[4]+0x00000002u; // 803D1AC4
  c->lr=0x803D1ACCu; f_803CD954(c); // 803D1AC8
  cmps(c,0,(int32_t)c->r[3],0); // 803D1ACC
  c->r[29]=c->r[3]|c->r[3]; // 803D1AD0
  if (crb(c,2)) { goto L_803D1AFC; } // 803D1AD4
  c->r[4]=c->r[28]|c->r[28]; // 803D1AD8
  c->r[3]=c->r[3]+0x00000008u; // 803D1ADC
  c->lr=0x803D1AE4u; f_803D0B30(c); // 803D1AE0
  c->r[3]=0u+0x00000000u; // 803D1AE4
  c->r[0]=0u+0x00000204u; // 803D1AE8
  W8(c->r[29]+0x0000000Eu,c->r[3]); // 803D1AEC
  c->r[3]=c->r[29]|c->r[29]; // 803D1AF0
  W16(c->r[29]+0x00000000u,c->r[0]); // 803D1AF4
  c->lr=0x803D1AFCu; f_803D0FDC(c); // 803D1AF8
L_803D1AFC:;
  c->r[27]=0u+0x00000000u; // 803D1AFC
  goto L_803D1B1C; // 803D1B00
L_803D1B04:;
  c->r[3]=R32(c->r[29]+0x00000004u); // 803D1B04
  c->lr=0x803D1B0Cu; f_803DB470(c); // 803D1B08
  W32(c->r[29]+0x00000004u,c->r[3]); // 803D1B0C
L_803D1B10:;
  c->r[4]=R32(c->r[29]+0x00000004u); // 803D1B10
  cmps(c,0,(int32_t)c->r[4],0); // 803D1B14
  if (!crb(c,2)) { IRQCHK(c); goto L_803D1A28; } // 803D1B18
L_803D1B1C:;
  cmps(c,0,(int32_t)c->r[27],0); // 803D1B1C
  if (crb(c,2)) { goto L_803D1B50; } // 803D1B20
  c->r[4]=0u+0x807B0000u; // 803D1B24
  c->r[0]=0u+0x00000000u; // 803D1B28
  c->r[4]=c->r[4]+0x000063B8u; // 803D1B2C
  c->r[3]=0u+0x00000110u; // 803D1B30
  W32(c->r[4]+0x00000008u,c->r[0]); // 803D1B34
  c->lr=0x803D1B3Cu; f_803CD954(c); // 803D1B38
  cmps(c,0,(int32_t)c->r[3],0); // 803D1B3C
  if (crb(c,2)) { goto L_803D1B50; } // 803D1B40
  c->r[0]=0u+0x00000207u; // 803D1B44
  W16(c->r[3]+0x00000000u,c->r[0]); // 803D1B48
  c->lr=0x803D1B50u; f_803D0FDC(c); // 803D1B4C
L_803D1B50:;
  c->r[3]=0u+0x807B0000u; // 803D1B50
  c->r[0]=R8(c->r[31]+0x00000008u); // 803D1B54
  c->r[12]=R32(c->r[3]+0x000063B8u); // 803D1B58
  c->r[4]=c->r[1]+0x00000110u; // 803D1B5C
  W8(c->r[1]+0x00000110u,c->r[0]); // 803D1B60
  c->r[3]=0u+0x00000001u; // 803D1B64
  c->ctr=c->r[12]; // 803D1B68
  if (true) { c->lr=0x803D1B70u; dispatch(c,c->ctr); } // 803D1B6C
  c->r[11]=c->r[1]+0x00000230u; // 803D1B70
  c->lr=0x803D1B78u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 803D1B74
  c->r[0]=R32(c->r[1]+0x00000234u); // 803D1B78
  c->lr=c->r[0]; // 803D1B7C
  c->r[1]=c->r[1]+0x00000230u; // 803D1B80
  return; // 803D1B84
}

// bta_dm_rmt_name
void f_803D1B88(Ctx* __restrict c) {
  trace_call(0x803D1B88u);
  {uint32_t ea=c->r[1]+0xFFFFFED0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803D1B88
  c->r[0]=c->lr; // 803D1B8C
  W32(c->r[1]+0x00000134u,c->r[0]); // 803D1B90
  c->r[11]=c->r[1]+0x00000130u; // 803D1B94
  c->lr=0x803D1B9Cu; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 803D1B98
  c->r[28]=0u+0x807B0000u; // 803D1B9C
  c->r[31]=c->r[3]|c->r[3]; // 803D1BA0
  c->r[27]=0u+0x00000001u; // 803D1BA4
  c->r[30]=0u+0x00000000u; // 803D1BA8
  c->r[29]=c->r[28]+0x000063B8u; // 803D1BAC
  goto L_803D1C8C; // 803D1BB0
L_803D1BB4:;
  c->r[4]=R32(c->r[29]+0x00000004u); // 803D1BB4
  c->r[0]=R8(c->r[4]+0x00000010u); // 803D1BB8
  cmps(c,0,(int32_t)c->r[0],0); // 803D1BBC
  if (crb(c,2)) { goto L_803D1BF0; } // 803D1BC0
  c->r[3]=c->r[1]+0x00000008u; // 803D1BC4
  c->r[4]=c->r[4]+0x00000002u; // 803D1BC8
  c->lr=0x803D1BD0u; f_803D0B30(c); // 803D1BCC
  c->r[12]=R32(c->r[28]+0x000063B8u); // 803D1BD0
  c->r[4]=c->r[1]+0x00000008u; // 803D1BD4
  W8(c->r[1]+0x0000000Eu,c->r[30]); // 803D1BD8
  c->r[3]=0u+0x00000002u; // 803D1BDC
  W32(c->r[1]+0x00000108u,c->r[30]); // 803D1BE0
  c->ctr=c->r[12]; // 803D1BE4
  if (true) { c->lr=0x803D1BECu; dispatch(c,c->ctr); } // 803D1BE8
  goto L_803D1C8C; // 803D1BEC
L_803D1BF0:;
  c->r[3]=0u+0x807B0000u; // 803D1BF0
  c->r[3]=c->r[3]+0x00006798u; // 803D1BF4
  c->r[4]=R16(c->r[3]+0x0000064Cu); // 803D1BF8
  cmpu(c,0,c->r[4],0x00007530u); // 803D1BFC
  if (!crb(c,0)) { goto L_803D1C14; } // 803D1C00
  c->r[5]=c->r[4]+0x00000064u; // 803D1C04
  c->r[3]=c->r[29]+0x00000058u; // 803D1C08
  c->r[4]=0u+0x00000205u; // 803D1C0C
  c->lr=0x803D1C14u; f_803D0FF8(c); // 803D1C10
L_803D1C14:;
  c->r[30]=0u+0x807B0000u; // 803D1C14
  c->r[4]=0u+0x803D0000u; // 803D1C18
  c->r[30]=c->r[30]+0x000063B8u; // 803D1C1C
  c->r[3]=R32(c->r[30]+0x00000004u); // 803D1C20
  c->r[4]=c->r[4]+0x000026B0u; // 803D1C24
  c->r[3]=c->r[3]+0x00000002u; // 803D1C28
  c->lr=0x803D1C30u; f_803DB198(c); // 803D1C2C
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; // 803D1C30
  cmpu(c,0,c->r[0],0x00000001u); // 803D1C34
  if (crb(c,2)) { goto L_803D1C84; } // 803D1C38
  c->r[3]=c->r[30]+0x00000058u; // 803D1C3C
  c->lr=0x803D1C44u; f_803D1018(c); // 803D1C40
  c->r[4]=R32(c->r[30]+0x00000004u); // 803D1C44
  c->r[3]=0u+0x00000110u; // 803D1C48
  c->r[28]=c->r[4]+0x00000002u; // 803D1C4C
  c->lr=0x803D1C54u; f_803CD954(c); // 803D1C50
  cmps(c,0,(int32_t)c->r[3],0); // 803D1C54
  c->r[29]=c->r[3]|c->r[3]; // 803D1C58
  if (crb(c,2)) { goto L_803D1C84; } // 803D1C5C
  c->r[4]=c->r[28]|c->r[28]; // 803D1C60
  c->r[3]=c->r[3]+0x00000008u; // 803D1C64
  c->lr=0x803D1C6Cu; f_803D0B30(c); // 803D1C68
  c->r[3]=0u+0x00000000u; // 803D1C6C
  c->r[0]=0u+0x00000204u; // 803D1C70
  W8(c->r[29]+0x0000000Eu,c->r[3]); // 803D1C74
  c->r[3]=c->r[29]|c->r[29]; // 803D1C78
  W16(c->r[29]+0x00000000u,c->r[0]); // 803D1C7C
  c->lr=0x803D1C84u; f_803D0FDC(c); // 803D1C80
L_803D1C84:;
  c->r[27]=0u+0x00000000u; // 803D1C84
  goto L_803D1CA0; // 803D1C88
L_803D1C8C:;
  c->r[3]=R32(c->r[29]+0x00000004u); // 803D1C8C
  c->lr=0x803D1C94u; f_803DB470(c); // 803D1C90
  cmps(c,0,(int32_t)c->r[3],0); // 803D1C94
  W32(c->r[29]+0x00000004u,c->r[3]); // 803D1C98
  if (!crb(c,2)) { IRQCHK(c); goto L_803D1BB4; } // 803D1C9C
L_803D1CA0:;
  cmps(c,0,(int32_t)c->r[27],0); // 803D1CA0
  if (crb(c,2)) { goto L_803D1CC4; } // 803D1CA4
  c->r[3]=0u+0x00000110u; // 803D1CA8
  c->lr=0x803D1CB0u; f_803CD954(c); // 803D1CAC
  cmps(c,0,(int32_t)c->r[3],0); // 803D1CB0
  if (crb(c,2)) { goto L_803D1CC4; } // 803D1CB4
  c->r[0]=0u+0x00000207u; // 803D1CB8
  W16(c->r[3]+0x00000000u,c->r[0]); // 803D1CBC
  c->lr=0x803D1CC4u; f_803D0FDC(c); // 803D1CC0
L_803D1CC4:;
  c->r[3]=0u+0x807B0000u; // 803D1CC4
  c->r[4]=c->r[31]+0x00000008u; // 803D1CC8
  c->r[12]=R32(c->r[3]+0x000063B8u); // 803D1CCC
  c->r[3]=0u+0x00000002u; // 803D1CD0
  c->ctr=c->r[12]; // 803D1CD4
  if (true) { c->lr=0x803D1CDCu; dispatch(c,c->ctr); } // 803D1CD8
  c->r[11]=c->r[1]+0x00000130u; // 803D1CDC
  c->lr=0x803D1CE4u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 803D1CE0
  c->r[0]=R32(c->r[1]+0x00000134u); // 803D1CE4
  c->lr=c->r[0]; // 803D1CE8
  c->r[1]=c->r[1]+0x00000130u; // 803D1CEC
  return; // 803D1CF0
}

// bta_dm_disc_rmt_name
void f_803D1CF4(Ctx* __restrict c) {
  trace_call(0x803D1CF4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803D1CF4
  c->r[0]=c->lr; // 803D1CF8
  W32(c->r[1]+0x00000014u,c->r[0]); // 803D1CFC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 803D1D00
  c->r[31]=c->r[3]|c->r[3]; // 803D1D04
  c->r[3]=0u+0x00000110u; // 803D1D08
  c->lr=0x803D1D10u; f_803CD954(c); // 803D1D0C
  cmps(c,0,(int32_t)c->r[3],0); // 803D1D10
  if (crb(c,2)) { goto L_803D1D24; } // 803D1D14
  c->r[0]=0u+0x00000207u; // 803D1D18
  W16(c->r[3]+0x00000000u,c->r[0]); // 803D1D1C
  c->lr=0x803D1D24u; f_803D0FDC(c); // 803D1D20
L_803D1D24:;
  c->r[0]=0u+0x00000000u; // 803D1D24
  c->r[5]=0u+0x807B0000u; // 803D1D28
  W32(c->r[31]+0x00000108u,c->r[0]); // 803D1D2C
  c->r[4]=c->r[31]+0x00000008u; // 803D1D30
  c->r[3]=0u+0x00000002u; // 803D1D34
  c->r[12]=R32(c->r[5]+0x000063B8u); // 803D1D38
  c->ctr=c->r[12]; // 803D1D3C
  if (true) { c->lr=0x803D1D44u; dispatch(c,c->ctr); } // 803D1D40
  c->r[0]=R32(c->r[1]+0x00000014u); // 803D1D44
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 803D1D48
  c->lr=c->r[0]; // 803D1D4C
  c->r[1]=c->r[1]+0x00000010u; // 803D1D50
  return; // 803D1D54
}

// bta_dm_sdp_result
void f_803D1D58(Ctx* __restrict c) {
  trace_call(0x803D1D58u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803D1D58
  c->r[0]=c->lr; // 803D1D5C
  W32(c->r[1]+0x00000024u,c->r[0]); // 803D1D60
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 803D1D64
  W32(c->r[1]+0x00000018u,c->r[30]); // 803D1D68
  W32(c->r[1]+0x00000014u,c->r[29]); // 803D1D6C
  c->r[29]=0u+0x00000000u; // 803D1D70
  c->r[5]=R16(c->r[3]+0x00000008u); // 803D1D74
  c->r[3]=0u+0x00000000u; // 803D1D78
  cmps(c,0,(int32_t)c->r[5],0); // 803D1D7C
  if (crb(c,2)) { goto L_803D1D94; } // 803D1D80
  cmpu(c,0,c->r[5],0x0000FFF0u); // 803D1D84
  if (crb(c,2)) { goto L_803D1D94; } // 803D1D88
  cmpu(c,0,c->r[5],0x0000FFF4u); // 803D1D8C
  if (!crb(c,2)) { goto L_803D1EE4; } // 803D1D90
L_803D1D94:;
  c->r[6]=0u+0x807B0000u; // 803D1D94
  c->r[4]=0u+0x806A0000u; // 803D1D98
  c->r[6]=c->r[6]+0x000063B8u; // 803D1D9C
  cmpu(c,0,c->r[5],0x0000FFF4u); // 803D1DA0
  c->r[5]=R8(c->r[6]+0x00000070u); // 803D1DA4
  c->r[4]=c->r[4]+0x000045C8u; // 803D1DA8
  c->r[0]=c->r[5]+0xFFFFFFFFu; // 803D1DAC
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 803D1DB0
  c->r[30]=R16(c->r[4]+c->r[0]); // 803D1DB4
  if (crb(c,2)) { goto L_803D1DD4; } // 803D1DB8
  c->r[3]=R32(c->r[6]+0x00000014u); // 803D1DBC
  c->r[4]=c->r[30]|c->r[30]; // 803D1DC0
  c->r[5]=0u+0x00000000u; // 803D1DC4
  c->lr=0x803D1DCCu; f_803F5818(c); // 803D1DC8
  cmps(c,0,(int32_t)c->r[3],0); // 803D1DCC
  if (crb(c,2)) { goto L_803D1E34; } // 803D1DD0
L_803D1DD4:;
  cmpu(c,0,c->r[30],0x00001200u); // 803D1DD4
  if (!crb(c,2)) { goto L_803D1E04; } // 803D1DD8
  cmps(c,0,(int32_t)c->r[3],0); // 803D1DDC
  if (crb(c,2)) { goto L_803D1E08; } // 803D1DE0
  c->r[4]=0u+0x00010000u; // 803D1DE4
  c->r[0]=c->r[4]+0xFFFF8001u; // 803D1DE8
  c->r[4]=rotl(c->r[0],0)&0x0000FFFFu; // 803D1DEC
  c->lr=0x803D1DF4u; f_803F57F0(c); // 803D1DF0
  cmps(c,0,(int32_t)c->r[3],0); // 803D1DF4
  if (crb(c,2)) { goto L_803D1E08; } // 803D1DF8
  c->r[29]=0u+0x00000001u; // 803D1DFC
  goto L_803D1E08; // 803D1E00
L_803D1E04:;
  c->r[29]=0u+0x00000001u; // 803D1E04
L_803D1E08:;
  cmps(c,0,(int32_t)c->r[29],0); // 803D1E08
  if (crb(c,2)) { goto L_803D1E34; } // 803D1E0C
  c->r[6]=0u+0x807B0000u; // 803D1E10
  c->r[4]=0u+0x00000001u; // 803D1E14
  c->r[6]=c->r[6]+0x000063B8u; // 803D1E18
  c->r[3]=R8(c->r[6]+0x00000070u); // 803D1E1C
  c->r[5]=R32(c->r[6]+0x00000010u); // 803D1E20
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 803D1E24
  c->r[0]=((c->r[0])&0x20)?0u:(c->r[4]<<((c->r[0])&31)); // 803D1E28
  c->r[0]=c->r[5]|c->r[0]; // 803D1E2C
  W32(c->r[6]+0x00000010u,c->r[0]); // 803D1E30
L_803D1E34:;
  c->r[30]=0u+0x807B0000u; // 803D1E34
  c->r[30]=c->r[30]+0x000063B8u; // 803D1E38
  c->r[3]=R32(c->r[30]+0x00000014u); // 803D1E3C
  c->lr=0x803D1E44u; f_803CDBDC(c); // 803D1E40
  c->r[0]=R32(c->r[30]+0x0000000Cu); // 803D1E44
  c->r[31]=0u+0x00000000u; // 803D1E48
  W32(c->r[30]+0x00000014u,c->r[31]); // 803D1E4C
  cmps(c,0,(int32_t)c->r[0],0); // 803D1E50
  if (crb(c,2)) { goto L_803D1E64; } // 803D1E54
  c->r[3]=c->r[30]+0x0000001Au; // 803D1E58
  c->lr=0x803D1E60u; f_803D22CC(c); // 803D1E5C
  goto L_803D1FA4; // 803D1E60
L_803D1E64:;
  c->r[3]=0u+0x803D0000u; // 803D1E64
  c->r[3]=c->r[3]+0x00002670u; // 803D1E68
  c->lr=0x803D1E70u; f_803DDF50(c); // 803D1E6C
  c->r[3]=0u+0x00000110u; // 803D1E70
  c->lr=0x803D1E78u; f_803CD954(c); // 803D1E74
  cmps(c,0,(int32_t)c->r[3],0); // 803D1E78
  c->r[29]=c->r[3]|c->r[3]; // 803D1E7C
  if (crb(c,2)) { goto L_803D1FA4; } // 803D1E80
  c->r[0]=0u+0x00000208u; // 803D1E84
  c->r[4]=c->r[30]+0x0000001Au; // 803D1E88
  W16(c->r[3]+0x00000000u,c->r[0]); // 803D1E8C
  W8(c->r[3]+0x0000010Cu,c->r[31]); // 803D1E90
  c->r[0]=R32(c->r[30]+0x00000010u); // 803D1E94
  W32(c->r[3]+0x00000108u,c->r[0]); // 803D1E98
  c->r[3]=c->r[3]+0x00000008u; // 803D1E9C
  c->lr=0x803D1EA4u; f_803D0B30(c); // 803D1EA0
  c->r[0]=R8(c->r[30]+0x00000020u); // 803D1EA4
  c->r[31]=c->r[30]+0x00000020u; // 803D1EA8
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 803D1EAC
  if (!crb(c,2)) { goto L_803D1EC8; } // 803D1EB0
  c->r[3]=c->r[30]+0x0000001Au; // 803D1EB4
  c->lr=0x803D1EBCu; f_803D8974(c); // 803D1EB8
  cmps(c,0,(int32_t)c->r[3],0); // 803D1EBC
  if (crb(c,2)) { goto L_803D1EC8; } // 803D1EC0
  c->r[31]=c->r[3]|c->r[3]; // 803D1EC4
L_803D1EC8:;
  c->r[4]=c->r[31]|c->r[31]; // 803D1EC8
  c->r[3]=c->r[29]+0x0000000Eu; // 803D1ECC
  c->r[5]=0u+0x00000020u; // 803D1ED0
  c->lr=0x803D1ED8u; f_803B3880(c); // 803D1ED4
  c->r[3]=c->r[29]|c->r[29]; // 803D1ED8
  c->lr=0x803D1EE0u; f_803D0FDC(c); // 803D1EDC
  goto L_803D1FA4; // 803D1EE0
L_803D1EE4:;
  cmpu(c,0,c->r[5],0x0000FFF1u); // 803D1EE4
  if (crb(c,2)) { goto L_803D1EFC; } // 803D1EE8
  c->r[0]=c->r[5]+0x0000000Au; // 803D1EEC
  c->r[0]=rotl(c->r[0],0)&0x0000FFFFu; // 803D1EF0
  cmpu(c,0,c->r[0],0x00000001u); // 803D1EF4
  if (crb(c,1)) { goto L_803D1F0C; } // 803D1EF8
L_803D1EFC:;
  c->r[3]=0u+0x807B0000u; // 803D1EFC
  c->r[0]=0u+0x00000000u; // 803D1F00
  c->r[3]=c->r[3]+0x000063B8u; // 803D1F04
  W8(c->r[3]+0x00000078u,c->r[0]); // 803D1F08
L_803D1F0C:;
  c->r[31]=0u+0x807B0000u; // 803D1F0C
  c->r[31]=c->r[31]+0x000063B8u; // 803D1F10
  c->r[3]=R32(c->r[31]+0x00000014u); // 803D1F14
  c->lr=0x803D1F1Cu; f_803CDBDC(c); // 803D1F18
  c->r[0]=0u+0x00000000u; // 803D1F1C
  c->r[3]=0u+0x803D0000u; // 803D1F20
  W32(c->r[31]+0x00000014u,c->r[0]); // 803D1F24
  c->r[3]=c->r[3]+0x00002670u; // 803D1F28
  c->lr=0x803D1F30u; f_803DDF50(c); // 803D1F2C
  c->r[3]=0u+0x00000110u; // 803D1F30
  c->lr=0x803D1F38u; f_803CD954(c); // 803D1F34
  cmps(c,0,(int32_t)c->r[3],0); // 803D1F38
  c->r[29]=c->r[3]|c->r[3]; // 803D1F3C
  if (crb(c,2)) { goto L_803D1FA4; } // 803D1F40
  c->r[4]=0u+0x00000208u; // 803D1F44
  c->r[0]=0u+0x00000001u; // 803D1F48
  W16(c->r[3]+0x00000000u,c->r[4]); // 803D1F4C
  c->r[4]=c->r[31]+0x0000001Au; // 803D1F50
  W8(c->r[3]+0x0000010Cu,c->r[0]); // 803D1F54
  c->r[0]=R32(c->r[31]+0x00000010u); // 803D1F58
  W32(c->r[3]+0x00000108u,c->r[0]); // 803D1F5C
  c->r[3]=c->r[3]+0x00000008u; // 803D1F60
  c->lr=0x803D1F68u; f_803D0B30(c); // 803D1F64
  c->r[0]=R8(c->r[31]+0x00000020u); // 803D1F68
  c->r[30]=c->r[31]+0x00000020u; // 803D1F6C
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 803D1F70
  if (!crb(c,2)) { goto L_803D1F8C; } // 803D1F74
  c->r[3]=c->r[31]+0x0000001Au; // 803D1F78
  c->lr=0x803D1F80u; f_803D8974(c); // 803D1F7C
  cmps(c,0,(int32_t)c->r[3],0); // 803D1F80
  if (crb(c,2)) { goto L_803D1F8C; } // 803D1F84
  c->r[30]=c->r[3]|c->r[3]; // 803D1F88
L_803D1F8C:;
  c->r[4]=c->r[30]|c->r[30]; // 803D1F8C
  c->r[3]=c->r[29]+0x0000000Eu; // 803D1F90
  c->r[5]=0u+0x00000020u; // 803D1F94
  c->lr=0x803D1F9Cu; f_803B3880(c); // 803D1F98
  c->r[3]=c->r[29]|c->r[29]; // 803D1F9C
  c->lr=0x803D1FA4u; f_803D0FDC(c); // 803D1FA0
L_803D1FA4:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 803D1FA4
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 803D1FA8
  c->r[30]=R32(c->r[1]+0x00000018u); // 803D1FAC
  c->r[29]=R32(c->r[1]+0x00000014u); // 803D1FB0
  c->lr=c->r[0]; // 803D1FB4
  c->r[1]=c->r[1]+0x00000020u; // 803D1FB8
  return; // 803D1FBC
}

// fn_803D1FC0
void f_803D1FC0(Ctx* __restrict c) {
  trace_call(0x803D1FC0u);
  c->r[4]=0u+0x807B0000u; // 803D1FC0
  c->r[3]=0u+0x00000003u; // 803D1FC4
  c->r[12]=R32(c->r[4]+0x000063B8u); // 803D1FC8
  c->r[4]=0u+0x00000000u; // 803D1FCC
  c->ctr=c->r[12]; // 803D1FD0
  if (true) { dispatch(c,c->ctr); return; } // 803D1FD4
}

// bta_dm_disc_result
void f_803D1FD8(Ctx* __restrict c) {
  trace_call(0x803D1FD8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803D1FD8
  c->r[0]=c->lr; // 803D1FDC
  c->r[4]=0u+0x807B0000u; // 803D1FE0
  W32(c->r[1]+0x00000014u,c->r[0]); // 803D1FE4
  c->r[12]=R32(c->r[4]+0x000063B8u); // 803D1FE8
  c->r[4]=c->r[3]+0x00000008u; // 803D1FEC
  c->r[3]=0u+0x00000002u; // 803D1FF0
  c->ctr=c->r[12]; // 803D1FF4
  if (true) { c->lr=0x803D1FFCu; dispatch(c,c->ctr); } // 803D1FF8
  c->r[3]=0u+0x00000110u; // 803D1FFC
  c->lr=0x803D2004u; f_803CD954(c); // 803D2000
  cmps(c,0,(int32_t)c->r[3],0); // 803D2004
  if (crb(c,2)) { goto L_803D2018; } // 803D2008
  c->r[0]=0u+0x00000207u; // 803D200C
  W16(c->r[3]+0x00000000u,c->r[0]); // 803D2010
  c->lr=0x803D2018u; f_803D0FDC(c); // 803D2014
L_803D2018:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 803D2018
  c->lr=c->r[0]; // 803D201C
  c->r[1]=c->r[1]+0x00000010u; // 803D2020
  return; // 803D2024
}

// bta_dm_search_result
void f_803D2028(Ctx* __restrict c) {
  trace_call(0x803D2028u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803D2028
  c->r[0]=c->lr; // 803D202C
  W32(c->r[1]+0x00000014u,c->r[0]); // 803D2030
  c->r[0]=R32(c->r[3]+0x00000108u); // 803D2034
  cmps(c,0,(int32_t)c->r[0],0); // 803D2038
  if (crb(c,2)) { goto L_803D2058; } // 803D203C
  c->r[5]=0u+0x807B0000u; // 803D2040
  c->r[4]=c->r[3]+0x00000008u; // 803D2044
  c->r[12]=R32(c->r[5]+0x000063B8u); // 803D2048
  c->r[3]=0u+0x00000002u; // 803D204C
  c->ctr=c->r[12]; // 803D2050
  if (true) { c->lr=0x803D2058u; dispatch(c,c->ctr); } // 803D2054
L_803D2058:;
  c->r[6]=0u+0x807B0000u; // 803D2058
  c->r[6]=c->r[6]+0x000063B8u; // 803D205C
  c->r[0]=R8(c->r[6]+0x00000078u); // 803D2060
  cmps(c,0,(int32_t)c->r[0],0); // 803D2064
  if (!crb(c,2)) { goto L_803D207C; } // 803D2068
  c->r[0]=0u+0x00000000u; // 803D206C
  W8(c->r[6]+0x00000078u,c->r[0]); // 803D2070
  c->lr=0x803D2078u; f_803D246C(c); // 803D2074
  goto L_803D20A0; // 803D2078
L_803D207C:;
  c->r[5]=0u+0x803D0000u; // 803D207C
  c->r[0]=0u+0x00000001u; // 803D2080
  c->r[5]=c->r[5]+0x000020B0u; // 803D2084
  W8(c->r[6]+0x00000079u,c->r[0]); // 803D2088
  c->r[3]=c->r[6]+0x00000040u; // 803D208C
  c->r[4]=0u+0x00000000u; // 803D2090
  W32(c->r[6]+0x00000048u,c->r[5]); // 803D2094
  c->r[5]=0u+0x00000BB8u; // 803D2098
  c->lr=0x803D20A0u; f_803D0FF8(c); // 803D209C
L_803D20A0:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 803D20A0
  c->lr=c->r[0]; // 803D20A4
  c->r[1]=c->r[1]+0x00000010u; // 803D20A8
  return; // 803D20AC
}

// bta_dm_search_timer_cback
void f_803D20B0(Ctx* __restrict c) {
  trace_call(0x803D20B0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803D20B0
  c->r[0]=c->lr; // 803D20B4
  W32(c->r[1]+0x00000014u,c->r[0]); // 803D20B8
  c->r[0]=R8(c->r[13]+0xFFFFE318u); // 803D20BC
  cmpu(c,0,c->r[0],0x00000004u); // 803D20C0
  if (crb(c,0)) { goto L_803D20D8; } // 803D20C4
  c->r[4]=0u+0x80710000u; // 803D20C8
  c->r[3]=0u+0x00000503u; // 803D20CC
  c->r[4]=c->r[4]+0xFFFFAB00u; // 803D20D0
  c->lr=0x803D20D8u; f_803D04E0(c); // 803D20D4
L_803D20D8:;
  c->r[3]=0u+0x807B0000u; // 803D20D8
  c->r[0]=0u+0x00000000u; // 803D20DC
  c->r[3]=c->r[3]+0x000063B8u; // 803D20E0
  W8(c->r[3]+0x00000078u,c->r[0]); // 803D20E4
  c->lr=0x803D20ECu; f_803D246C(c); // 803D20E8
  c->r[0]=R32(c->r[1]+0x00000014u); // 803D20EC
  c->lr=c->r[0]; // 803D20F0
  c->r[1]=c->r[1]+0x00000010u; // 803D20F4
  return; // 803D20F8
}

// fn_803D20FC
void f_803D20FC(Ctx* __restrict c) {
  trace_call(0x803D20FCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803D20FC
  c->r[0]=c->lr; // 803D2100
  W32(c->r[1]+0x00000014u,c->r[0]); // 803D2104
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 803D2108
  c->r[31]=0u+0x807B0000u; // 803D210C
  c->r[31]=c->r[31]+0x000063B8u; // 803D2110
  c->r[3]=R32(c->r[31]+0x00000014u); // 803D2114
  cmps(c,0,(int32_t)c->r[3],0); // 803D2118
  if (crb(c,2)) { goto L_803D212C; } // 803D211C
  c->lr=0x803D2124u; f_803CDBDC(c); // 803D2120
  c->r[0]=0u+0x00000000u; // 803D2124
  W32(c->r[31]+0x00000014u,c->r[0]); // 803D2128
L_803D212C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 803D212C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 803D2130
  c->lr=c->r[0]; // 803D2134
  c->r[1]=c->r[1]+0x00000010u; // 803D2138
  return; // 803D213C
}

// fn_803D2140
void f_803D2140(Ctx* __restrict c) {
  trace_call(0x803D2140u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803D2140
  c->r[0]=c->lr; // 803D2144
  W32(c->r[1]+0x00000014u,c->r[0]); // 803D2148
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 803D214C
  c->r[31]=c->r[3]|c->r[3]; // 803D2150
  c->r[3]=0u+0x0000001Cu; // 803D2154
  c->lr=0x803D215Cu; f_803CD954(c); // 803D2158
  c->r[6]=0u+0x807B0000u; // 803D215C
  c->r[4]=c->r[31]|c->r[31]; // 803D2160
  c->r[6]=c->r[6]+0x000063B8u; // 803D2164
  c->r[5]=0u+0x0000001Cu; // 803D2168
  W32(c->r[6]+0x00000074u,c->r[3]); // 803D216C
  c->lr=0x803D2174u; f_802DC484(c); // 803D2170
  c->r[0]=R32(c->r[1]+0x00000014u); // 803D2174
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 803D2178
  c->lr=c->r[0]; // 803D217C
  c->r[1]=c->r[1]+0x00000010u; // 803D2180
  return; // 803D2184
}

// fn_803D2188
void f_803D2188(Ctx* __restrict c) {
  trace_call(0x803D2188u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803D2188
  c->r[0]=c->lr; // 803D218C
  W32(c->r[1]+0x00000014u,c->r[0]); // 803D2190
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 803D2194
  c->r[31]=c->r[3]|c->r[3]; // 803D2198
  c->r[3]=0u+0x00000018u; // 803D219C
  c->lr=0x803D21A4u; f_803CD954(c); // 803D21A0
  c->r[6]=0u+0x807B0000u; // 803D21A4
  c->r[4]=c->r[31]|c->r[31]; // 803D21A8
  c->r[6]=c->r[6]+0x000063B8u; // 803D21AC
  c->r[5]=0u+0x00000018u; // 803D21B0
  W32(c->r[6]+0x00000074u,c->r[3]); // 803D21B4
  c->lr=0x803D21BCu; f_802DC484(c); // 803D21B8
  c->r[0]=R32(c->r[1]+0x00000014u); // 803D21BC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 803D21C0
  c->lr=c->r[0]; // 803D21C4
  c->r[1]=c->r[1]+0x00000010u; // 803D21C8
  return; // 803D21CC
}

// fn_803D21D0
void f_803D21D0(Ctx* __restrict c) {
  trace_call(0x803D21D0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803D21D0
  c->r[0]=c->lr; // 803D21D4
  W32(c->r[1]+0x00000014u,c->r[0]); // 803D21D8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 803D21DC
  c->r[31]=0u+0x807B0000u; // 803D21E0
  c->r[31]=c->r[31]+0x000063B8u; // 803D21E4
  c->r[3]=R32(c->r[31]+0x00000074u); // 803D21E8
  cmps(c,0,(int32_t)c->r[3],0); // 803D21EC
  if (crb(c,2)) { goto L_803D2200; } // 803D21F0
  c->lr=0x803D21F8u; f_803CDBDC(c); // 803D21F4
  c->r[0]=0u+0x00000000u; // 803D21F8
  W32(c->r[31]+0x00000074u,c->r[0]); // 803D21FC
L_803D2200:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 803D2200
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 803D2204
  c->lr=c->r[0]; // 803D2208
  c->r[1]=c->r[1]+0x00000010u; // 803D220C
  return; // 803D2210
}

// fn_803D2214
void f_803D2214(Ctx* __restrict c) {
  trace_call(0x803D2214u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803D2214
  c->r[0]=c->lr; // 803D2218
  W32(c->r[1]+0x00000014u,c->r[0]); // 803D221C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 803D2220
  c->r[31]=0u+0x807B0000u; // 803D2224
  c->r[31]=c->r[31]+0x000063B8u; // 803D2228
  c->r[3]=R32(c->r[31]+0x00000074u); // 803D222C
  cmps(c,0,(int32_t)c->r[3],0); // 803D2230
  if (crb(c,2)) { goto L_803D2244; } // 803D2234
  c->lr=0x803D223Cu; f_803D0FDC(c); // 803D2238
  c->r[0]=0u+0x00000000u; // 803D223C
  W32(c->r[31]+0x00000074u,c->r[0]); // 803D2240
L_803D2244:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 803D2244
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 803D2248
  c->lr=c->r[0]; // 803D224C
  c->r[1]=c->r[1]+0x00000010u; // 803D2250
  return; // 803D2254
}

// bta_dm_search_cancel_transac_cmpl
void f_803D2258(Ctx* __restrict c) {
  trace_call(0x803D2258u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803D2258
  c->r[0]=c->lr; // 803D225C
  W32(c->r[1]+0x00000014u,c->r[0]); // 803D2260
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 803D2264
  c->r[31]=0u+0x807B0000u; // 803D2268
  c->r[31]=c->r[31]+0x000063B8u; // 803D226C
  c->r[3]=R32(c->r[31]+0x00000014u); // 803D2270
  cmps(c,0,(int32_t)c->r[3],0); // 803D2274
  if (crb(c,2)) { goto L_803D2288; } // 803D2278
  c->lr=0x803D2280u; f_803CDBDC(c); // 803D227C
  c->r[0]=0u+0x00000000u; // 803D2280
  W32(c->r[31]+0x00000014u,c->r[0]); // 803D2284
L_803D2288:;
  c->r[4]=0u+0x807B0000u; // 803D2288
  c->r[3]=0u+0x00000004u; // 803D228C
  c->r[12]=R32(c->r[4]+0x000063B8u); // 803D2290
  c->r[4]=0u+0x00000000u; // 803D2294
  c->ctr=c->r[12]; // 803D2298
  if (true) { c->lr=0x803D22A0u; dispatch(c,c->ctr); } // 803D229C
  c->r[0]=R32(c->r[1]+0x00000014u); // 803D22A0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 803D22A4
  c->lr=c->r[0]; // 803D22A8
  c->r[1]=c->r[1]+0x00000010u; // 803D22AC
  return; // 803D22B0
}

// fn_803D22B4
void f_803D22B4(Ctx* __restrict c) {
  trace_call(0x803D22B4u);
  c->r[4]=0u+0x807B0000u; // 803D22B4
  c->r[3]=0u+0x00000004u; // 803D22B8
  c->r[12]=R32(c->r[4]+0x000063B8u); // 803D22BC
  c->r[4]=0u+0x00000000u; // 803D22C0
  c->ctr=c->r[12]; // 803D22C4
  if (true) { dispatch(c,c->ctr); return; } // 803D22C8
}

// bta_dm_find_services
void f_803D22CC(Ctx* __restrict c) {
  trace_call(0x803D22CCu);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803D22CC
  c->r[0]=c->lr; // 803D22D0
  W32(c->r[1]+0x00000054u,c->r[0]); // 803D22D4
  c->r[11]=c->r[1]+0x00000050u; // 803D22D8
  c->lr=0x803D22E0u; { W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 803D22DC
  c->r[4]=R16(c->r[2]+0x00000E70u); // 803D22E0
  c->r[26]=0u+0x807B0000u; // 803D22E4
  c->r[0]=R16(c->r[2]+0x00000E72u); // 803D22E8
  c->r[25]=0u+0x806A0000u; // 803D22EC
  W16(c->r[1]+0x00000008u,c->r[4]); // 803D22F0
  c->r[30]=c->r[3]|c->r[3]; // 803D22F4
  c->r[25]=c->r[25]+0x000045C8u; // 803D22F8
  c->r[26]=c->r[26]+0x000063B8u; // 803D22FC
  W16(c->r[1]+0x0000000Au,c->r[0]); // 803D2300
  c->r[31]=0u+0x00000001u; // 803D2304
  c->r[23]=0u+0x00000001u; // 803D2308
  c->r[24]=0u+0x00000002u; // 803D230C
  c->r[27]=0u+0x803D0000u; // 803D2310
  c->r[28]=0u+0x00000000u; // 803D2314
  c->r[29]=0u+0x00000017u; // 803D2318
  goto L_803D23D8; // 803D231C
L_803D2320:;
  c->r[3]=R32(c->r[26]+0x0000000Cu); // 803D2320
  c->r[0]=((c->r[0])&0x20)?0u:(c->r[23]<<((c->r[0])&31)); // 803D2324
  c->r[0]=c->r[3]&c->r[0]; cr0(c,c->r[0]); // 803D2328
  if (crb(c,2)) { goto L_803D23CC; } // 803D232C
  c->r[3]=0u+0x000000FAu; // 803D2330
  c->lr=0x803D2338u; f_803CD954(c); // 803D2334
  cmps(c,0,(int32_t)c->r[3],0); // 803D2338
  W32(c->r[26]+0x00000014u,c->r[3]); // 803D233C
  if (crb(c,2)) { goto L_803D23CC; } // 803D2340
  c->r[3]=R8(c->r[26]+0x00000070u); // 803D2344
  c->r[4]=R32(c->r[26]+0x0000000Cu); // 803D2348
  c->r[0]=rotl(c->r[3],1)&0xFFFFFFFEu; // 803D234C
  c->r[3]=((c->r[3])&0x20)?0u:(c->r[23]<<((c->r[3])&31)); // 803D2350
  c->r[0]=R16(c->r[25]+c->r[0]); // 803D2354
  c->r[3]=c->r[4]&~c->r[3]; // 803D2358
  W32(c->r[26]+0x0000000Cu,c->r[3]); // 803D235C
  cmpu(c,0,c->r[0],0x00001200u); // 803D2360
  W16(c->r[1]+0x0000000Cu,c->r[24]); // 803D2364
  W16(c->r[1]+0x00000010u,c->r[0]); // 803D2368
  if (!crb(c,2)) { goto L_803D2374; } // 803D236C
  c->r[31]=0u+0x00000002u; // 803D2370
L_803D2374:;
  c->r[3]=R32(c->r[26]+0x00000014u); // 803D2374
  c->r[7]=c->r[31]|c->r[31]; // 803D2378
  c->r[6]=c->r[1]+0x0000000Cu; // 803D237C
  c->r[8]=c->r[1]+0x00000008u; // 803D2380
  c->r[4]=0u+0x000000FAu; // 803D2384
  c->r[5]=0u+0x00000001u; // 803D2388
  c->lr=0x803D2390u; f_803F53B8(c); // 803D238C
  c->r[4]=R32(c->r[26]+0x00000014u); // 803D2390
  c->r[3]=c->r[30]|c->r[30]; // 803D2394
  c->r[5]=c->r[27]+0x0000254Cu; // 803D2398
  c->lr=0x803D23A0u; f_803F578C(c); // 803D239C
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 803D23A0
  if (!crb(c,2)) { goto L_803D23BC; } // 803D23A4
  c->r[3]=R32(c->r[26]+0x00000014u); // 803D23A8
  c->lr=0x803D23B0u; f_803CDBDC(c); // 803D23AC
  W32(c->r[26]+0x00000014u,c->r[28]); // 803D23B0
  W8(c->r[26]+0x00000070u,c->r[29]); // 803D23B4
  goto L_803D23CC; // 803D23B8
L_803D23BC:;
  c->r[3]=R8(c->r[26]+0x00000070u); // 803D23BC
  c->r[0]=c->r[3]+0x00000001u; // 803D23C0
  W8(c->r[26]+0x00000070u,c->r[0]); // 803D23C4
  goto L_803D2454; // 803D23C8
L_803D23CC:;
  c->r[3]=R8(c->r[26]+0x00000070u); // 803D23CC
  c->r[0]=c->r[3]+0x00000001u; // 803D23D0
  W8(c->r[26]+0x00000070u,c->r[0]); // 803D23D4
L_803D23D8:;
  c->r[0]=R8(c->r[26]+0x00000070u); // 803D23D8
  cmpu(c,0,c->r[0],0x00000017u); // 803D23DC
  if (crb(c,0)) { IRQCHK(c); goto L_803D2320; } // 803D23E0
  if (crb(c,0)) { goto L_803D2454; } // 803D23E4
  c->r[3]=0u+0x00000110u; // 803D23E8
  c->lr=0x803D23F0u; f_803CD954(c); // 803D23EC
  cmps(c,0,(int32_t)c->r[3],0); // 803D23F0
  c->r[24]=c->r[3]|c->r[3]; // 803D23F4
  if (crb(c,2)) { goto L_803D2454; } // 803D23F8
  c->r[0]=0u+0x00000208u; // 803D23FC
  c->r[4]=c->r[26]+0x0000001Au; // 803D2400
  W16(c->r[3]+0x00000000u,c->r[0]); // 803D2404
  c->r[0]=R32(c->r[26]+0x00000010u); // 803D2408
  W32(c->r[3]+0x00000108u,c->r[0]); // 803D240C
  c->r[3]=c->r[3]+0x00000008u; // 803D2410
  c->lr=0x803D2418u; f_803D0B30(c); // 803D2414
  c->r[0]=R8(c->r[26]+0x00000020u); // 803D2418
  c->r[23]=c->r[26]+0x00000020u; // 803D241C
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 803D2420
  if (!crb(c,2)) { goto L_803D243C; } // 803D2424
  c->r[3]=c->r[26]+0x0000001Au; // 803D2428
  c->lr=0x803D2430u; f_803D8974(c); // 803D242C
  cmps(c,0,(int32_t)c->r[3],0); // 803D2430
  if (crb(c,2)) { goto L_803D243C; } // 803D2434
  c->r[23]=c->r[3]|c->r[3]; // 803D2438
L_803D243C:;
  c->r[4]=c->r[23]|c->r[23]; // 803D243C
  c->r[3]=c->r[24]+0x0000000Eu; // 803D2440
  c->r[5]=0u+0x00000020u; // 803D2444
  c->lr=0x803D244Cu; f_803B3880(c); // 803D2448
  c->r[3]=c->r[24]|c->r[24]; // 803D244C
  c->lr=0x803D2454u; f_803D0FDC(c); // 803D2450
L_803D2454:;
  c->r[11]=c->r[1]+0x00000050u; // 803D2454
  c->lr=0x803D245Cu; { c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 803D2458
  c->r[0]=R32(c->r[1]+0x00000054u); // 803D245C
  c->lr=c->r[0]; // 803D2460
  c->r[1]=c->r[1]+0x00000050u; // 803D2464
  return; // 803D2468
}

// bta_dm_discover_next_device
void f_803D246C(Ctx* __restrict c) {
  trace_call(0x803D246Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803D246C
  c->r[0]=c->lr; // 803D2470
  W32(c->r[1]+0x00000014u,c->r[0]); // 803D2474
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 803D2478
  W32(c->r[1]+0x00000008u,c->r[30]); // 803D247C
  c->r[30]=0u+0x807B0000u; // 803D2480
  c->r[30]=c->r[30]+0x000063B8u; // 803D2484
  c->r[3]=R32(c->r[30]+0x00000004u); // 803D2488
  c->lr=0x803D2490u; f_803DB470(c); // 803D248C
  cmps(c,0,(int32_t)c->r[3],0); // 803D2490
  W32(c->r[30]+0x00000004u,c->r[3]); // 803D2494
  if (crb(c,2)) { goto L_803D2510; } // 803D2498
  c->r[3]=c->r[3]+0x00000002u; // 803D249C
  c->lr=0x803D24A4u; f_803D7830(c); // 803D24A0
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 803D24A4
  if (crb(c,2)) { goto L_803D24B8; } // 803D24A8
  c->r[0]=0u+0x00000000u; // 803D24AC
  W8(c->r[30]+0x00000078u,c->r[0]); // 803D24B0
  goto L_803D24C0; // 803D24B4
L_803D24B8:;
  c->r[0]=0u+0x00000001u; // 803D24B8
  W8(c->r[30]+0x00000078u,c->r[0]); // 803D24BC
L_803D24C0:;
  c->r[31]=0u+0x807B0000u; // 803D24C0
  c->r[3]=0u+0x803D0000u; // 803D24C4
  c->r[31]=c->r[31]+0x000063B8u; // 803D24C8
  c->r[30]=0u+0x00000000u; // 803D24CC
  W8(c->r[31]+0x00000079u,c->r[30]); // 803D24D0
  c->r[3]=c->r[3]+0x00002670u; // 803D24D4
  c->lr=0x803D24DCu; f_803DDF00(c); // 803D24D8
  c->r[0]=R32(c->r[31]+0x00000008u); // 803D24DC
  c->r[3]=c->r[31]+0x0000001Au; // 803D24E0
  c->r[4]=R32(c->r[31]+0x00000004u); // 803D24E4
  W8(c->r[31]+0x00000070u,c->r[30]); // 803D24E8
  c->r[4]=c->r[4]+0x00000002u; // 803D24EC
  W32(c->r[31]+0x00000010u,c->r[30]); // 803D24F0
  W8(c->r[31]+0x00000020u,c->r[30]); // 803D24F4
  W32(c->r[31]+0x0000000Cu,c->r[0]); // 803D24F8
  c->lr=0x803D2500u; f_803D0B30(c); // 803D24FC
  c->r[3]=R32(c->r[31]+0x00000004u); // 803D2500
  c->r[3]=c->r[3]+0x00000002u; // 803D2504
  c->lr=0x803D250Cu; f_803D22CC(c); // 803D2508
  goto L_803D2534; // 803D250C
L_803D2510:;
  c->r[0]=0u+0x00000000u; // 803D2510
  c->r[3]=0u+0x00000110u; // 803D2514
  W32(c->r[30]+0x00000008u,c->r[0]); // 803D2518
  c->lr=0x803D2520u; f_803CD954(c); // 803D251C
  cmps(c,0,(int32_t)c->r[3],0); // 803D2520
  if (crb(c,2)) { goto L_803D2534; } // 803D2524
  c->r[0]=0u+0x00000207u; // 803D2528
  W16(c->r[3]+0x00000000u,c->r[0]); // 803D252C
  c->lr=0x803D2534u; f_803D0FDC(c); // 803D2530
L_803D2534:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 803D2534
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 803D2538
  c->r[30]=R32(c->r[1]+0x00000008u); // 803D253C
  c->lr=c->r[0]; // 803D2540
  c->r[1]=c->r[1]+0x00000010u; // 803D2544
  return; // 803D2548
}

// bta_dm_sdp_callback
void f_803D254C(Ctx* __restrict c) {
  trace_call(0x803D254Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803D254C
  c->r[0]=c->lr; // 803D2550
  W32(c->r[1]+0x00000014u,c->r[0]); // 803D2554
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 803D2558
  c->r[31]=c->r[3]|c->r[3]; // 803D255C
  c->r[3]=0u+0x0000000Au; // 803D2560
  c->lr=0x803D2568u; f_803CD954(c); // 803D2564
  cmps(c,0,(int32_t)c->r[3],0); // 803D2568
  if (crb(c,2)) { goto L_803D2580; } // 803D256C
  c->r[0]=0u+0x00000206u; // 803D2570
  W16(c->r[3]+0x00000000u,c->r[0]); // 803D2574
  W16(c->r[3]+0x00000008u,c->r[31]); // 803D2578
  c->lr=0x803D2580u; f_803D0FDC(c); // 803D257C
L_803D2580:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 803D2580
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 803D2584
  c->lr=c->r[0]; // 803D2588
  c->r[1]=c->r[1]+0x00000010u; // 803D258C
  return; // 803D2590
}

// bta_dm_inq_results_cb
void f_803D2594(Ctx* __restrict c) {
  trace_call(0x803D2594u);
  {uint32_t ea=c->r[1]+0xFFFFFEE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803D2594
  c->r[0]=c->lr; // 803D2598
  W32(c->r[1]+0x00000124u,c->r[0]); // 803D259C
  W32(c->r[1]+0x0000011Cu,c->r[31]); // 803D25A0
  c->r[31]=c->r[3]|c->r[3]; // 803D25A4
  c->r[3]=c->r[1]+0x00000008u; // 803D25A8
  c->r[4]=c->r[31]+0x00000002u; // 803D25AC
  c->lr=0x803D25B4u; f_803D0B30(c); // 803D25B0
  c->r[3]=c->r[1]+0x0000000Eu; // 803D25B4
  c->r[4]=c->r[31]+0x00000008u; // 803D25B8
  c->r[5]=0u+0x00000003u; // 803D25BC
  c->lr=0x803D25C4u; f_802DC484(c); // 803D25C0
  c->r[0]=R8(c->r[31]+0x0000000Eu); // 803D25C4
  c->r[3]=c->r[31]+0x00000002u; // 803D25C8
  W8(c->r[1]+0x00000011u,c->r[0]); // 803D25CC
  c->lr=0x803D25D4u; f_803DB2F8(c); // 803D25D0
  cmps(c,0,(int32_t)c->r[3],0); // 803D25D4
  c->r[31]=c->r[3]|c->r[3]; // 803D25D8
  if (crb(c,2)) { goto L_803D25E8; } // 803D25DC
  c->r[0]=0u+0x00000000u; // 803D25E0
  W8(c->r[1]+0x00000012u,c->r[0]); // 803D25E4
L_803D25E8:;
  c->r[3]=0u+0x807B0000u; // 803D25E8
  c->r[4]=c->r[1]+0x00000008u; // 803D25EC
  c->r[12]=R32(c->r[3]+0x000063B8u); // 803D25F0
  c->r[3]=0u+0x00000000u; // 803D25F4
  c->ctr=c->r[12]; // 803D25F8
  if (true) { c->lr=0x803D2600u; dispatch(c,c->ctr); } // 803D25FC
  cmps(c,0,(int32_t)c->r[31],0); // 803D2600
  if (crb(c,2)) { goto L_803D2610; } // 803D2604
  c->r[0]=R8(c->r[1]+0x00000012u); // 803D2608
  W8(c->r[31]+0x00000010u,c->r[0]); // 803D260C
L_803D2610:;
  c->r[0]=R32(c->r[1]+0x00000124u); // 803D2610
  c->r[31]=R32(c->r[1]+0x0000011Cu); // 803D2614
  c->lr=c->r[0]; // 803D2618
  c->r[1]=c->r[1]+0x00000120u; // 803D261C
  return; // 803D2620
}

// bta_dm_inq_cmpl_cb
void f_803D2624(Ctx* __restrict c) {
  trace_call(0x803D2624u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803D2624
  c->r[0]=c->lr; // 803D2628
  W32(c->r[1]+0x00000014u,c->r[0]); // 803D262C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 803D2630
  c->r[31]=c->r[3]|c->r[3]; // 803D2634
  c->r[3]=0u+0x00000110u; // 803D2638
  c->lr=0x803D2640u; f_803CD954(c); // 803D263C
  cmps(c,0,(int32_t)c->r[3],0); // 803D2640
  if (crb(c,2)) { goto L_803D265C; } // 803D2644
  c->r[0]=0u+0x00000203u; // 803D2648
  W16(c->r[3]+0x00000000u,c->r[0]); // 803D264C
  c->r[0]=R8(c->r[31]+0x00000001u); // 803D2650
  W8(c->r[3]+0x00000008u,c->r[0]); // 803D2654
  c->lr=0x803D265Cu; f_803D0FDC(c); // 803D2658
L_803D265C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 803D265C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 803D2660
  c->lr=c->r[0]; // 803D2664
  c->r[1]=c->r[1]+0x00000010u; // 803D2668
  return; // 803D266C
}

// bta_dm_service_search_remname_cback
void f_803D2670(Ctx* __restrict c) {
  trace_call(0x803D2670u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803D2670
  c->r[0]=c->lr; // 803D2674
  c->r[3]=0u+0x807B0000u; // 803D2678
  c->r[4]=c->r[5]|c->r[5]; // 803D267C
  c->r[3]=c->r[3]+0x000063B8u; // 803D2680
  W32(c->r[1]+0x00000014u,c->r[0]); // 803D2684
  c->r[5]=0u+0x0000001Fu; // 803D2688
  c->r[3]=c->r[3]+0x00000020u; // 803D268C
  c->lr=0x803D2694u; f_803B3880(c); // 803D2690
  c->r[3]=0u+0x803D0000u; // 803D2694
  c->r[3]=c->r[3]+0x00002670u; // 803D2698
  c->lr=0x803D26A0u; f_803DDF50(c); // 803D269C
  c->r[0]=R32(c->r[1]+0x00000014u); // 803D26A0
  c->lr=c->r[0]; // 803D26A4
  c->r[1]=c->r[1]+0x00000010u; // 803D26A8
  return; // 803D26AC
}

// bta_dm_remname_cback
void f_803D26B0(Ctx* __restrict c) {
  trace_call(0x803D26B0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803D26B0
  c->r[0]=c->lr; // 803D26B4
  W32(c->r[1]+0x00000024u,c->r[0]); // 803D26B8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 803D26BC
  c->r[31]=0u+0x807B0000u; // 803D26C0
  c->r[31]=c->r[31]+0x000063B8u; // 803D26C4
  W32(c->r[1]+0x00000018u,c->r[30]); // 803D26C8
  W32(c->r[1]+0x00000014u,c->r[29]); // 803D26CC
  c->r[29]=c->r[3]|c->r[3]; // 803D26D0
  c->r[3]=c->r[31]+0x00000058u; // 803D26D4
  c->lr=0x803D26DCu; f_803D1018(c); // 803D26D8
  c->r[3]=0u+0x00000110u; // 803D26DC
  c->lr=0x803D26E4u; f_803CD954(c); // 803D26E0
  cmps(c,0,(int32_t)c->r[3],0); // 803D26E4
  c->r[30]=c->r[3]|c->r[3]; // 803D26E8
  if (crb(c,2)) { goto L_803D2720; } // 803D26EC
  c->r[4]=R32(c->r[31]+0x00000004u); // 803D26F0
  c->r[3]=c->r[3]+0x00000008u; // 803D26F4
  c->r[4]=c->r[4]+0x00000002u; // 803D26F8
  c->lr=0x803D2700u; f_803D0B30(c); // 803D26FC
  c->r[3]=c->r[30]+0x0000000Eu; // 803D2700
  c->r[4]=c->r[29]+0x00000004u; // 803D2704
  c->r[5]=0u+0x00000020u; // 803D2708
  c->lr=0x803D2710u; f_803B3880(c); // 803D270C
  c->r[0]=0u+0x00000204u; // 803D2710
  c->r[3]=c->r[30]|c->r[30]; // 803D2714
  W16(c->r[30]+0x00000000u,c->r[0]); // 803D2718
  c->lr=0x803D2720u; f_803D0FDC(c); // 803D271C
L_803D2720:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 803D2720
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 803D2724
  c->r[30]=R32(c->r[1]+0x00000018u); // 803D2728
  c->r[29]=R32(c->r[1]+0x00000014u); // 803D272C
  c->lr=c->r[0]; // 803D2730
  c->r[1]=c->r[1]+0x00000020u; // 803D2734
  return; // 803D2738
}

// bta_dm_disc_remname_cback
void f_803D273C(Ctx* __restrict c) {
  trace_call(0x803D273Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803D273C
  c->r[0]=c->lr; // 803D2740
  W32(c->r[1]+0x00000024u,c->r[0]); // 803D2744
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 803D2748
  c->r[31]=0u+0x807B0000u; // 803D274C
  c->r[31]=c->r[31]+0x000063B8u; // 803D2750
  W32(c->r[1]+0x00000018u,c->r[30]); // 803D2754
  W32(c->r[1]+0x00000014u,c->r[29]); // 803D2758
  c->r[29]=c->r[3]|c->r[3]; // 803D275C
  c->r[3]=c->r[31]+0x00000058u; // 803D2760
  c->lr=0x803D2768u; f_803D1018(c); // 803D2764
  c->r[3]=0u+0x00000110u; // 803D2768
  c->lr=0x803D2770u; f_803CD954(c); // 803D276C
  cmps(c,0,(int32_t)c->r[3],0); // 803D2770
  c->r[30]=c->r[3]|c->r[3]; // 803D2774
  if (crb(c,2)) { goto L_803D27A8; } // 803D2778
  c->r[3]=c->r[3]+0x00000008u; // 803D277C
  c->r[4]=c->r[31]+0x0000001Au; // 803D2780
  c->lr=0x803D2788u; f_803D0B30(c); // 803D2784
  c->r[3]=c->r[30]+0x0000000Eu; // 803D2788
  c->r[4]=c->r[29]+0x00000004u; // 803D278C
  c->r[5]=0u+0x00000020u; // 803D2790
  c->lr=0x803D2798u; f_803B3880(c); // 803D2794
  c->r[0]=0u+0x00000204u; // 803D2798
  c->r[3]=c->r[30]|c->r[30]; // 803D279C
  W16(c->r[30]+0x00000000u,c->r[0]); // 803D27A0
  c->lr=0x803D27A8u; f_803D0FDC(c); // 803D27A4
L_803D27A8:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 803D27A8
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 803D27AC
  c->r[30]=R32(c->r[1]+0x00000018u); // 803D27B0
  c->r[29]=R32(c->r[1]+0x00000014u); // 803D27B4
  c->lr=c->r[0]; // 803D27B8
  c->r[1]=c->r[1]+0x00000020u; // 803D27BC
  return; // 803D27C0
}

// fn_803D27C4
void f_803D27C4(Ctx* __restrict c) {
  trace_call(0x803D27C4u);
  f_803DB280(c); return; // 803D27C4
}

// bta_dm_authorize_cback
void f_803D27C8(Ctx* __restrict c) {
  trace_call(0x803D27C8u);
  {uint32_t ea=c->r[1]+0xFFFFFED0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803D27C8
  c->r[0]=c->lr; // 803D27CC
  c->r[4]=c->r[3]|c->r[3]; // 803D27D0
  W32(c->r[1]+0x00000134u,c->r[0]); // 803D27D4
  c->r[3]=c->r[1]+0x00000008u; // 803D27D8
  W32(c->r[1]+0x0000012Cu,c->r[31]); // 803D27DC
  c->r[31]=0u+0x00000001u; // 803D27E0
  W32(c->r[1]+0x00000128u,c->r[30]); // 803D27E4
  c->r[30]=c->r[7]|c->r[7]; // 803D27E8
  W32(c->r[1]+0x00000124u,c->r[29]); // 803D27EC
  c->r[29]=c->r[5]|c->r[5]; // 803D27F0
  c->lr=0x803D27F8u; f_803D0B30(c); // 803D27F4
  c->r[4]=c->r[29]|c->r[29]; // 803D27F8
  c->r[3]=c->r[1]+0x0000000Eu; // 803D27FC
  c->r[5]=0u+0x00000020u; // 803D2800
  c->lr=0x803D2808u; f_803B3880(c); // 803D2804
  c->r[3]=0u+0x806A0000u; // 803D2808
  c->r[0]=0u+0x00000017u; // 803D280C
  c->r[3]=c->r[3]+0x000045F8u; // 803D2810
  c->ctr=c->r[0]; // 803D2814
L_803D2818:;
  c->r[0]=rotl(c->r[31],2)&0x000003FCu; // 803D2818
  c->r[0]=R32(c->r[3]+c->r[0]); // 803D281C
  cmpu(c,0,c->r[30],c->r[0]); // 803D2820
  if (!crb(c,2)) { goto L_803D2830; } // 803D2824
  W8(c->r[1]+0x00000106u,c->r[31]); // 803D2828
  goto L_803D2838; // 803D282C
L_803D2830:;
  c->r[31]=c->r[31]+0x00000001u; // 803D2830
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_803D2818; } // 803D2834
L_803D2838:;
  c->r[3]=0u+0x807B0000u; // 803D2838
  c->r[3]=c->r[3]+0x00006434u; // 803D283C
  c->r[12]=R32(c->r[3]+0x00000050u); // 803D2840
  cmps(c,0,(int32_t)c->r[12],0); // 803D2844
  if (crb(c,2)) { goto L_803D2870; } // 803D2848
  c->r[0]=rotl(c->r[31],0)&0x000000FFu; // 803D284C
  cmpu(c,0,c->r[0],0x00000017u); // 803D2850
  if (crb(c,1)) { goto L_803D2870; } // 803D2854
  c->r[4]=c->r[1]+0x00000008u; // 803D2858
  c->r[3]=0u+0x00000004u; // 803D285C
  c->ctr=c->r[12]; // 803D2860
  if (true) { c->lr=0x803D2868u; dispatch(c,c->ctr); } // 803D2864
  c->r[3]=0u+0x00000001u; // 803D2868
  goto L_803D2874; // 803D286C
L_803D2870:;
  c->r[3]=0u+0x0000000Bu; // 803D2870
L_803D2874:;
  c->r[0]=R32(c->r[1]+0x00000134u); // 803D2874
  c->r[31]=R32(c->r[1]+0x0000012Cu); // 803D2878
  c->r[30]=R32(c->r[1]+0x00000128u); // 803D287C
  c->r[29]=R32(c->r[1]+0x00000124u); // 803D2880
  c->lr=c->r[0]; // 803D2884
  c->r[1]=c->r[1]+0x00000130u; // 803D2888
  return; // 803D288C
}

// bta_dm_pinname_cback
void f_803D2890(Ctx* __restrict c) {
  trace_call(0x803D2890u);
  {uint32_t ea=c->r[1]+0xFFFFFEE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803D2890
  c->r[0]=c->lr; // 803D2894
  W32(c->r[1]+0x00000124u,c->r[0]); // 803D2898
  W32(c->r[1]+0x0000011Cu,c->r[31]); // 803D289C
  c->r[31]=0u+0x807B0000u; // 803D28A0
  c->r[31]=c->r[31]+0x00006434u; // 803D28A4
  W32(c->r[1]+0x00000118u,c->r[30]); // 803D28A8
  c->r[30]=c->r[3]|c->r[3]; // 803D28AC
  c->r[3]=c->r[1]+0x00000008u; // 803D28B0
  c->r[4]=c->r[31]+0x000000F8u; // 803D28B4
  c->lr=0x803D28BCu; f_803D0B30(c); // 803D28B8
  c->r[4]=R8(c->r[31]+0x000000FEu); // 803D28BC
  cmps(c,0,(int32_t)c->r[30],0); // 803D28C0
  c->r[3]=R8(c->r[31]+0x000000FFu); // 803D28C4
  c->r[0]=R8(c->r[31]+0x00000100u); // 803D28C8
  W8(c->r[1]+0x00000106u,c->r[4]); // 803D28CC
  W8(c->r[1]+0x00000107u,c->r[3]); // 803D28D0
  W8(c->r[1]+0x00000108u,c->r[0]); // 803D28D4
  if (crb(c,2)) { goto L_803D2914; } // 803D28D8
  c->r[0]=R16(c->r[30]+0x00000000u); // 803D28DC
  cmps(c,0,(int32_t)c->r[0],0); // 803D28E0
  if (!crb(c,2)) { goto L_803D2914; } // 803D28E4
  c->r[0]=R16(c->r[30]+0x00000002u); // 803D28E8
  c->r[3]=c->r[1]+0x0000000Eu; // 803D28EC
  c->r[4]=c->r[30]+0x00000004u; // 803D28F0
  c->r[5]=0u+0x00000020u; // 803D28F4
  cmpu(c,0,c->r[0],0x00000020u); // 803D28F8
  if (!crb(c,0)) { goto L_803D2904; } // 803D28FC
  c->r[5]=c->r[0]|c->r[0]; // 803D2900
L_803D2904:;
  c->lr=0x803D2908u; f_802DC484(c); // 803D2904
  c->r[0]=0u+0x00000000u; // 803D2908
  W8(c->r[1]+0x0000002Eu,c->r[0]); // 803D290C
  goto L_803D291C; // 803D2910
L_803D2914:;
  c->r[0]=0u+0x00000000u; // 803D2914
  W8(c->r[1]+0x0000000Eu,c->r[0]); // 803D2918
L_803D291C:;
  c->r[5]=0u+0x807B0000u; // 803D291C
  c->r[4]=c->r[1]+0x00000008u; // 803D2920
  c->r[5]=c->r[5]+0x00006434u; // 803D2924
  c->r[3]=0u+0x00000002u; // 803D2928
  c->r[12]=R32(c->r[5]+0x00000050u); // 803D292C
  c->ctr=c->r[12]; // 803D2930
  if (true) { c->lr=0x803D2938u; dispatch(c,c->ctr); } // 803D2934
  c->r[0]=R32(c->r[1]+0x00000124u); // 803D2938
  c->r[31]=R32(c->r[1]+0x0000011Cu); // 803D293C
  c->r[30]=R32(c->r[1]+0x00000118u); // 803D2940
  c->lr=c->r[0]; // 803D2944
  c->r[1]=c->r[1]+0x00000120u; // 803D2948
  return; // 803D294C
}

// bta_dm_pin_cback
void f_803D2950(Ctx* __restrict c) {
  trace_call(0x803D2950u);
  {uint32_t ea=c->r[1]+0xFFFFFED0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803D2950
  c->r[0]=c->lr; // 803D2954
  W32(c->r[1]+0x00000134u,c->r[0]); // 803D2958
  W32(c->r[1]+0x0000012Cu,c->r[31]); // 803D295C
  c->r[31]=0u+0x807B0000u; // 803D2960
  c->r[31]=c->r[31]+0x00006434u; // 803D2964
  W32(c->r[1]+0x00000128u,c->r[30]); // 803D2968
  c->r[30]=c->r[5]|c->r[5]; // 803D296C
  W32(c->r[1]+0x00000124u,c->r[29]); // 803D2970
  c->r[29]=c->r[4]|c->r[4]; // 803D2974
  W32(c->r[1]+0x00000120u,c->r[28]); // 803D2978
  c->r[28]=c->r[3]|c->r[3]; // 803D297C
  c->r[0]=R32(c->r[31]+0x00000050u); // 803D2980
  cmps(c,0,(int32_t)c->r[0],0); // 803D2984
  if (!crb(c,2)) { goto L_803D2994; } // 803D2988
  c->r[3]=0u+0x0000000Bu; // 803D298C
  goto L_803D2A60; // 803D2990
L_803D2994:;
  c->r[0]=R8(c->r[5]+0x00000000u); // 803D2994
  cmps(c,0,(int32_t)c->r[0],0); // 803D2998
  if (!crb(c,2)) { goto L_803D2A04; } // 803D299C
  c->r[4]=c->r[28]|c->r[28]; // 803D29A0
  c->r[3]=c->r[31]+0x000000F8u; // 803D29A4
  c->lr=0x803D29ACu; f_803D0B30(c); // 803D29A8
  c->r[0]=R8(c->r[29]+0x00000000u); // 803D29AC
  c->r[4]=0u+0x803D0000u; // 803D29B0
  c->r[3]=c->r[28]|c->r[28]; // 803D29B4
  W8(c->r[31]+0x000000FEu,c->r[0]); // 803D29B8
  c->r[4]=c->r[4]+0x00002890u; // 803D29BC
  c->r[0]=R8(c->r[29]+0x00000001u); // 803D29C0
  W8(c->r[31]+0x000000FFu,c->r[0]); // 803D29C4
  c->r[0]=R8(c->r[29]+0x00000002u); // 803D29C8
  W8(c->r[31]+0x00000100u,c->r[0]); // 803D29CC
  c->lr=0x803D29D4u; f_803DB198(c); // 803D29D0
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; // 803D29D4
  cmpu(c,0,c->r[0],0x00000001u); // 803D29D8
  if (!crb(c,2)) { goto L_803D29E8; } // 803D29DC
  c->r[3]=0u+0x00000001u; // 803D29E0
  goto L_803D2A60; // 803D29E4
L_803D29E8:;
  c->r[0]=R8(c->r[13]+0xFFFFE318u); // 803D29E8
  cmpu(c,0,c->r[0],0x00000002u); // 803D29EC
  if (crb(c,0)) { goto L_803D2A04; } // 803D29F0
  c->r[4]=0u+0x80710000u; // 803D29F4
  c->r[3]=0u+0x00000501u; // 803D29F8
  c->r[4]=c->r[4]+0xFFFFAB20u; // 803D29FC
  c->lr=0x803D2A04u; f_803D04E0(c); // 803D2A00
L_803D2A04:;
  c->r[4]=c->r[28]|c->r[28]; // 803D2A04
  c->r[3]=c->r[1]+0x00000008u; // 803D2A08
  c->lr=0x803D2A10u; f_803D0B30(c); // 803D2A0C
  c->r[0]=R8(c->r[29]+0x00000000u); // 803D2A10
  c->r[4]=c->r[30]|c->r[30]; // 803D2A14
  c->r[3]=c->r[1]+0x0000000Eu; // 803D2A18
  c->r[5]=0u+0x00000020u; // 803D2A1C
  W8(c->r[1]+0x00000106u,c->r[0]); // 803D2A20
  c->r[0]=R8(c->r[29]+0x00000001u); // 803D2A24
  W8(c->r[1]+0x00000107u,c->r[0]); // 803D2A28
  c->r[0]=R8(c->r[29]+0x00000002u); // 803D2A2C
  W8(c->r[1]+0x00000108u,c->r[0]); // 803D2A30
  c->lr=0x803D2A38u; f_803B3880(c); // 803D2A34
  c->r[3]=0u+0x807B0000u; // 803D2A38
  c->r[0]=0u+0x00000000u; // 803D2A3C
  c->r[3]=c->r[3]+0x00006434u; // 803D2A40
  W8(c->r[1]+0x0000002Eu,c->r[0]); // 803D2A44
  c->r[12]=R32(c->r[3]+0x00000050u); // 803D2A48
  c->r[4]=c->r[1]+0x00000008u; // 803D2A4C
  c->r[3]=0u+0x00000002u; // 803D2A50
  c->ctr=c->r[12]; // 803D2A54
  if (true) { c->lr=0x803D2A5Cu; dispatch(c,c->ctr); } // 803D2A58
  c->r[3]=0u+0x00000001u; // 803D2A5C
L_803D2A60:;
  c->r[0]=R32(c->r[1]+0x00000134u); // 803D2A60
  c->r[31]=R32(c->r[1]+0x0000012Cu); // 803D2A64
  c->r[30]=R32(c->r[1]+0x00000128u); // 803D2A68
  c->r[29]=R32(c->r[1]+0x00000124u); // 803D2A6C
  c->r[28]=R32(c->r[1]+0x00000120u); // 803D2A70
  c->lr=c->r[0]; // 803D2A74
  c->r[1]=c->r[1]+0x00000130u; // 803D2A78
  return; // 803D2A7C
}

// fn_803D2A80
void f_803D2A80(Ctx* __restrict c) {
  trace_call(0x803D2A80u);
  c->r[3]=0u+0x0000000Bu; // 803D2A80
  return; // 803D2A84
}

// bta_dm_new_link_key_cback
void f_803D2A88(Ctx* __restrict c) {
  trace_call(0x803D2A88u);
  {uint32_t ea=c->r[1]+0xFFFFFEE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803D2A88
  c->r[0]=c->lr; // 803D2A8C
  c->r[4]=c->r[3]|c->r[3]; // 803D2A90
  W32(c->r[1]+0x00000124u,c->r[0]); // 803D2A94
  c->r[3]=c->r[1]+0x00000008u; // 803D2A98
  W32(c->r[1]+0x0000011Cu,c->r[31]); // 803D2A9C
  c->r[31]=c->r[6]|c->r[6]; // 803D2AA0
  W32(c->r[1]+0x00000118u,c->r[30]); // 803D2AA4
  c->r[30]=c->r[5]|c->r[5]; // 803D2AA8
  c->lr=0x803D2AB0u; f_803D0B30(c); // 803D2AAC
  c->r[4]=c->r[30]|c->r[30]; // 803D2AB0
  c->r[3]=c->r[1]+0x0000000Eu; // 803D2AB4
  c->r[5]=0u+0x0000001Fu; // 803D2AB8
  c->lr=0x803D2AC0u; f_802DC484(c); // 803D2ABC
  c->r[0]=0u+0x00000000u; // 803D2AC0
  c->r[4]=c->r[31]|c->r[31]; // 803D2AC4
  W8(c->r[1]+0x0000002Du,c->r[0]); // 803D2AC8
  c->r[3]=c->r[1]+0x00000107u; // 803D2ACC
  c->r[5]=0u+0x00000010u; // 803D2AD0
  c->lr=0x803D2AD8u; f_802DC484(c); // 803D2AD4
  c->r[3]=0u+0x807B0000u; // 803D2AD8
  c->r[0]=0u+0x00000001u; // 803D2ADC
  c->r[3]=c->r[3]+0x00006434u; // 803D2AE0
  W8(c->r[1]+0x00000106u,c->r[0]); // 803D2AE4
  c->r[12]=R32(c->r[3]+0x00000050u); // 803D2AE8
  W8(c->r[1]+0x00000117u,c->r[0]); // 803D2AEC
  cmps(c,0,(int32_t)c->r[12],0); // 803D2AF0
  if (crb(c,2)) { goto L_803D2B08; } // 803D2AF4
  c->r[4]=c->r[1]+0x00000008u; // 803D2AF8
  c->r[3]=0u+0x00000003u; // 803D2AFC
  c->ctr=c->r[12]; // 803D2B00
  if (true) { c->lr=0x803D2B08u; dispatch(c,c->ctr); } // 803D2B04
L_803D2B08:;
  c->r[31]=R32(c->r[1]+0x0000011Cu); // 803D2B08
  c->r[3]=0u+0x00000001u; // 803D2B0C
  c->r[30]=R32(c->r[1]+0x00000118u); // 803D2B10
  c->r[0]=R32(c->r[1]+0x00000124u); // 803D2B14
  c->lr=c->r[0]; // 803D2B18
  c->r[1]=c->r[1]+0x00000120u; // 803D2B1C
  return; // 803D2B20
}

// bta_dm_authentication_complete_cback
void f_803D2B24(Ctx* __restrict c) {
  trace_call(0x803D2B24u);
  {uint32_t ea=c->r[1]+0xFFFFFEE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803D2B24
  c->r[0]=c->lr; // 803D2B28
  cmps(c,0,(int32_t)c->r[6],0); // 803D2B2C
  W32(c->r[1]+0x00000124u,c->r[0]); // 803D2B30
  W32(c->r[1]+0x0000011Cu,c->r[31]); // 803D2B34
  c->r[31]=c->r[5]|c->r[5]; // 803D2B38
  if (crb(c,2)) { goto L_803D2B90; } // 803D2B3C
  c->r[4]=c->r[3]|c->r[3]; // 803D2B40
  c->r[3]=c->r[1]+0x00000008u; // 803D2B44
  c->lr=0x803D2B4Cu; f_803D0B30(c); // 803D2B48
  c->r[4]=c->r[31]|c->r[31]; // 803D2B4C
  c->r[3]=c->r[1]+0x0000000Eu; // 803D2B50
  c->r[5]=0u+0x0000001Fu; // 803D2B54
  c->lr=0x803D2B5Cu; f_802DC484(c); // 803D2B58
  c->r[3]=0u+0x807B0000u; // 803D2B5C
  c->r[0]=0u+0x00000000u; // 803D2B60
  c->r[3]=c->r[3]+0x00006434u; // 803D2B64
  W8(c->r[1]+0x0000002Du,c->r[0]); // 803D2B68
  c->r[12]=R32(c->r[3]+0x00000050u); // 803D2B6C
  W8(c->r[1]+0x00000117u,c->r[0]); // 803D2B70
  cmps(c,0,(int32_t)c->r[12],0); // 803D2B74
  W8(c->r[1]+0x00000106u,c->r[0]); // 803D2B78
  if (crb(c,2)) { goto L_803D2B90; } // 803D2B7C
  c->r[4]=c->r[1]+0x00000008u; // 803D2B80
  c->r[3]=0u+0x00000003u; // 803D2B84
  c->ctr=c->r[12]; // 803D2B88
  if (true) { c->lr=0x803D2B90u; dispatch(c,c->ctr); } // 803D2B8C
L_803D2B90:;
  c->r[31]=R32(c->r[1]+0x0000011Cu); // 803D2B90
  c->r[3]=0u+0x00000000u; // 803D2B94
  c->r[0]=R32(c->r[1]+0x00000124u); // 803D2B98
  c->lr=c->r[0]; // 803D2B9C
  c->r[1]=c->r[1]+0x00000120u; // 803D2BA0
  return; // 803D2BA4
}

// bta_dm_local_addr_cback
void f_803D2BA8(Ctx* __restrict c) {
  trace_call(0x803D2BA8u);
  c->r[4]=0u+0x807B0000u; // 803D2BA8
  c->r[4]=c->r[4]+0x00006434u; // 803D2BAC
  c->r[12]=R32(c->r[4]+0x00000050u); // 803D2BB0
  cmps(c,0,(int32_t)c->r[12],0); // 803D2BB4
  if (crb(c,2)) return; // 803D2BB8
  c->r[4]=c->r[3]|c->r[3]; // 803D2BBC
  c->r[3]=0u+0x00000000u; // 803D2BC0
  c->ctr=c->r[12]; // 803D2BC4
  if (true) { dispatch(c,c->ctr); return; } // 803D2BC8
  return; // 803D2BCC
}

// bta_dm_signal_strength
void f_803D2BD0(Ctx* __restrict c) {
  trace_call(0x803D2BD0u);
  c->r[0]=R8(c->r[3]+0x0000000Cu); // 803D2BD0
  cmps(c,0,(int32_t)c->r[0],0); // 803D2BD4
  if (crb(c,2)) { goto L_803D2BFC; } // 803D2BD8
  c->r[4]=0u+0x807B0000u; // 803D2BDC
  c->r[0]=R8(c->r[3]+0x00000008u); // 803D2BE0
  c->r[4]=c->r[4]+0x00006434u; // 803D2BE4
  W8(c->r[4]+0x0000006Cu,c->r[0]); // 803D2BE8
  c->r[0]=R16(c->r[3]+0x0000000Au); // 803D2BEC
  c->r[3]=0u+0x00000000u; // 803D2BF0
  W16(c->r[4]+0x00000070u,c->r[0]); // 803D2BF4
  f_803D2C0C(c); return; // 803D2BF8
L_803D2BFC:;
  c->r[3]=0u+0x807B0000u; // 803D2BFC
  c->r[3]=c->r[3]+0x00006434u; // 803D2C00
  c->r[3]=c->r[3]+0x00000054u; // 803D2C04
  f_803D1018(c); return; // 803D2C08
}

// bta_dm_signal_strength_timer_cback
void f_803D2C0C(Ctx* __restrict c) {
  trace_call(0x803D2C0Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803D2C0C
  c->r[0]=c->lr; // 803D2C10
  c->r[3]=0u+0x807B0000u; // 803D2C14
  W32(c->r[1]+0x00000024u,c->r[0]); // 803D2C18
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 803D2C1C
  c->r[31]=c->r[3]+0x00006434u; // 803D2C20
  W32(c->r[1]+0x00000018u,c->r[30]); // 803D2C24
  W32(c->r[1]+0x00000014u,c->r[29]); // 803D2C28
  c->r[0]=R8(c->r[31]+0x0000006Cu); // 803D2C2C
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 803D2C30
  if (crb(c,2)) { goto L_803D2C6C; } // 803D2C34
  c->r[29]=0u+0x00000000u; // 803D2C38
  c->r[30]=0u+0x803D0000u; // 803D2C3C
  goto L_803D2C5C; // 803D2C40
L_803D2C44:;
  c->r[0]=rotl(c->r[29],0)&0x000000FFu; // 803D2C44
  c->r[4]=c->r[30]+0x0000300Cu; // 803D2C48
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)11); // 803D2C4C
  c->r[3]=c->r[31]+c->r[0]; // 803D2C50
  c->lr=0x803D2C58u; f_803D7FB8(c); // 803D2C54
  c->r[29]=c->r[29]+0x00000001u; // 803D2C58
L_803D2C5C:;
  c->r[0]=R8(c->r[31]+0x0000004Du); // 803D2C5C
  c->r[3]=rotl(c->r[29],0)&0x000000FFu; // 803D2C60
  cmpu(c,0,c->r[3],c->r[0]); // 803D2C64
  if (crb(c,0)) { IRQCHK(c); goto L_803D2C44; } // 803D2C68
L_803D2C6C:;
  c->r[3]=0u+0x807B0000u; // 803D2C6C
  c->r[30]=c->r[3]+0x00006434u; // 803D2C70
  c->r[0]=R8(c->r[30]+0x0000006Cu); // 803D2C74
  c->r[0]=rotl(c->r[0],0)&0x00000002u; cr0(c,c->r[0]); // 803D2C78
  if (crb(c,2)) { goto L_803D2CB4; } // 803D2C7C
  c->r[29]=0u+0x00000000u; // 803D2C80
  c->r[31]=0u+0x803D0000u; // 803D2C84
  goto L_803D2CA4; // 803D2C88
L_803D2C8C:;
  c->r[0]=rotl(c->r[29],0)&0x000000FFu; // 803D2C8C
  c->r[4]=c->r[31]+0x00003078u; // 803D2C90
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)11); // 803D2C94
  c->r[3]=c->r[30]+c->r[0]; // 803D2C98
  c->lr=0x803D2CA0u; f_803D80F4(c); // 803D2C9C
  c->r[29]=c->r[29]+0x00000001u; // 803D2CA0
L_803D2CA4:;
  c->r[0]=R8(c->r[30]+0x0000004Du); // 803D2CA4
  c->r[3]=rotl(c->r[29],0)&0x000000FFu; // 803D2CA8
  cmpu(c,0,c->r[3],c->r[0]); // 803D2CAC
  if (crb(c,0)) { IRQCHK(c); goto L_803D2C8C; } // 803D2CB0
L_803D2CB4:;
  c->r[7]=0u+0x807B0000u; // 803D2CB4
  c->r[7]=c->r[7]+0x00006434u; // 803D2CB8
  c->r[0]=R16(c->r[7]+0x00000070u); // 803D2CBC
  cmps(c,0,(int32_t)c->r[0],0); // 803D2CC0
  if (crb(c,2)) { goto L_803D2CE4; } // 803D2CC4
  c->r[6]=0u+0x803D0000u; // 803D2CC8
  c->r[3]=c->r[7]+0x00000054u; // 803D2CCC
  c->r[6]=c->r[6]+0x00002C0Cu; // 803D2CD0
  c->r[4]=0u+0x00000000u; // 803D2CD4
  c->r[5]=(uint32_t)((int32_t)c->r[0]*(int32_t)1000); // 803D2CD8
  W32(c->r[7]+0x0000005Cu,c->r[6]); // 803D2CDC
  c->lr=0x803D2CE4u; f_803D0FF8(c); // 803D2CE0
L_803D2CE4:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 803D2CE4
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 803D2CE8
  c->r[30]=R32(c->r[1]+0x00000018u); // 803D2CEC
  c->r[29]=R32(c->r[1]+0x00000014u); // 803D2CF0
  c->lr=c->r[0]; // 803D2CF4
  c->r[1]=c->r[1]+0x00000020u; // 803D2CF8
  return; // 803D2CFC
}

// bta_dm_acl_change_cback
void f_803D2D00(Ctx* __restrict c) {
  trace_call(0x803D2D00u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803D2D00
  c->r[0]=c->lr; // 803D2D04
  W32(c->r[1]+0x00000024u,c->r[0]); // 803D2D08
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 803D2D0C
  W32(c->r[1]+0x00000018u,c->r[30]); // 803D2D10
  c->r[30]=c->r[7]|c->r[7]; // 803D2D14
  W32(c->r[1]+0x00000014u,c->r[29]); // 803D2D18
  c->r[29]=c->r[3]|c->r[3]; // 803D2D1C
  c->r[3]=0u+0x00000012u; // 803D2D20
  c->lr=0x803D2D28u; f_803CD954(c); // 803D2D24
  cmps(c,0,(int32_t)c->r[3],0); // 803D2D28
  c->r[31]=c->r[3]|c->r[3]; // 803D2D2C
  if (crb(c,2)) { goto L_803D2D54; } // 803D2D30
  c->r[4]=c->r[29]|c->r[29]; // 803D2D34
  c->r[3]=c->r[3]+0x0000000Bu; // 803D2D38
  c->lr=0x803D2D40u; f_803D0B30(c); // 803D2D3C
  W8(c->r[31]+0x0000000Au,c->r[30]); // 803D2D40
  c->r[0]=0u+0x00000105u; // 803D2D44
  c->r[3]=c->r[31]|c->r[31]; // 803D2D48
  W16(c->r[31]+0x00000000u,c->r[0]); // 803D2D4C
  c->lr=0x803D2D54u; f_803D0FDC(c); // 803D2D50
L_803D2D54:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 803D2D54
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 803D2D58
  c->r[30]=R32(c->r[1]+0x00000018u); // 803D2D5C
  c->r[29]=R32(c->r[1]+0x00000014u); // 803D2D60
  c->lr=c->r[0]; // 803D2D64
  c->r[1]=c->r[1]+0x00000020u; // 803D2D68
  return; // 803D2D6C
}

// bta_dm_acl_change
void f_803D2D70(Ctx* __restrict c) {
  trace_call(0x803D2D70u);
  {uint32_t ea=c->r[1]+0xFFFFFED0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803D2D70
  c->r[0]=c->lr; // 803D2D74
  W32(c->r[1]+0x00000134u,c->r[0]); // 803D2D78
  W32(c->r[1]+0x0000012Cu,c->r[31]); // 803D2D7C
  c->r[31]=c->r[3]+0x0000000Bu; // 803D2D80
  W32(c->r[1]+0x00000128u,c->r[30]); // 803D2D84
  W32(c->r[1]+0x00000124u,c->r[29]); // 803D2D88
  c->r[0]=R8(c->r[3]+0x0000000Au); // 803D2D8C
  cmps(c,0,(int32_t)c->r[0],0); // 803D2D90
  if (crb(c,2)) { goto L_803D2E54; } // 803D2D94
  c->r[3]=0u+0x807B0000u; // 803D2D98
  c->r[29]=0u+0x00000000u; // 803D2D9C
  c->r[30]=c->r[3]+0x00006434u; // 803D2DA0
  goto L_803D2DC8; // 803D2DA4
L_803D2DA8:;
  c->r[0]=rotl(c->r[29],0)&0x000000FFu; // 803D2DA8
  c->r[4]=c->r[31]|c->r[31]; // 803D2DAC
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)11); // 803D2DB0
  c->r[3]=c->r[30]+c->r[0]; // 803D2DB4
  c->lr=0x803D2DBCu; f_803D0B64(c); // 803D2DB8
  cmps(c,0,(int32_t)c->r[3],0); // 803D2DBC
  if (crb(c,2)) { goto L_803D2DD8; } // 803D2DC0
  c->r[29]=c->r[29]+0x00000001u; // 803D2DC4
L_803D2DC8:;
  c->r[0]=R8(c->r[30]+0x0000004Du); // 803D2DC8
  c->r[3]=rotl(c->r[29],0)&0x000000FFu; // 803D2DCC
  cmpu(c,0,c->r[3],c->r[0]); // 803D2DD0
  if (crb(c,0)) { IRQCHK(c); goto L_803D2DA8; } // 803D2DD4
L_803D2DD8:;
  c->r[30]=0u+0x807B0000u; // 803D2DD8
  c->r[0]=rotl(c->r[29],0)&0x000000FFu; // 803D2DDC
  c->r[30]=c->r[30]+0x00006434u; // 803D2DE0
  c->r[3]=R8(c->r[30]+0x0000004Du); // 803D2DE4
  cmpu(c,0,c->r[0],c->r[3]); // 803D2DE8
  if (!crb(c,2)) { goto L_803D2E0C; } // 803D2DEC
  c->r[0]=(uint32_t)((int32_t)c->r[3]*(int32_t)11); // 803D2DF0
  c->r[4]=c->r[31]|c->r[31]; // 803D2DF4
  c->r[3]=c->r[30]+c->r[0]; // 803D2DF8
  c->lr=0x803D2E00u; f_803D0B30(c); // 803D2DFC
  c->r[3]=R8(c->r[30]+0x0000004Du); // 803D2E00
  c->r[0]=c->r[3]+0x00000001u; // 803D2E04
  W8(c->r[30]+0x0000004Du,c->r[0]); // 803D2E08
L_803D2E0C:;
  c->r[0]=rotl(c->r[29],0)&0x000000FFu; // 803D2E0C
  c->r[30]=0u+0x807B0000u; // 803D2E10
  c->r[4]=(uint32_t)((int32_t)c->r[0]*(int32_t)11); // 803D2E14
  c->r[3]=0u+0x00000001u; // 803D2E18
  c->r[30]=c->r[30]+0x00006434u; // 803D2E1C
  c->r[0]=0u+0x00000000u; // 803D2E20
  c->r[5]=c->r[30]+c->r[4]; // 803D2E24
  W8(c->r[5]+0x00000006u,c->r[3]); // 803D2E28
  c->r[4]=c->r[31]|c->r[31]; // 803D2E2C
  c->r[3]=c->r[1]+0x00000008u; // 803D2E30
  W8(c->r[5]+0x00000007u,c->r[0]); // 803D2E34
  c->lr=0x803D2E3Cu; f_803D0B30(c); // 803D2E38
  c->r[12]=R32(c->r[30]+0x00000050u); // 803D2E3C
  c->r[4]=c->r[1]+0x00000008u; // 803D2E40
  c->r[3]=0u+0x00000005u; // 803D2E44
  c->ctr=c->r[12]; // 803D2E48
  if (true) { c->lr=0x803D2E50u; dispatch(c,c->ctr); } // 803D2E4C
  goto L_803D2FD4; // 803D2E50
L_803D2E54:;
  c->r[3]=0u+0x807B0000u; // 803D2E54
  c->r[29]=0u+0x00000000u; // 803D2E58
  c->r[30]=c->r[3]+0x00006434u; // 803D2E5C
  goto L_803D2EC8; // 803D2E60
L_803D2E64:;
  c->r[0]=rotl(c->r[29],0)&0x000000FFu; // 803D2E64
  c->r[4]=c->r[31]|c->r[31]; // 803D2E68
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)11); // 803D2E6C
  c->r[3]=c->r[30]+c->r[0]; // 803D2E70
  c->lr=0x803D2E78u; f_803D0B64(c); // 803D2E74
  cmps(c,0,(int32_t)c->r[3],0); // 803D2E78
  if (!crb(c,2)) { goto L_803D2EC4; } // 803D2E7C
  c->r[3]=0u+0x807B0000u; // 803D2E80
  c->r[30]=c->r[3]+0x00006434u; // 803D2E84
  goto L_803D2EB0; // 803D2E88
L_803D2E8C:;
  c->r[3]=rotl(c->r[29],0)&0x000000FFu; // 803D2E8C
  c->r[5]=0u+0x0000000Bu; // 803D2E90
  c->r[0]=c->r[3]+0x00000001u; // 803D2E94
  c->r[3]=(uint32_t)((int32_t)c->r[3]*(int32_t)11); // 803D2E98
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)11); // 803D2E9C
  c->r[3]=c->r[30]+c->r[3]; // 803D2EA0
  c->r[4]=c->r[30]+c->r[0]; // 803D2EA4
  c->lr=0x803D2EACu; f_802DC484(c); // 803D2EA8
  c->r[29]=c->r[29]+0x00000001u; // 803D2EAC
L_803D2EB0:;
  c->r[0]=R8(c->r[30]+0x0000004Du); // 803D2EB0
  c->r[3]=rotl(c->r[29],0)&0x000000FFu; // 803D2EB4
  cmpu(c,0,c->r[3],c->r[0]); // 803D2EB8
  if (crb(c,0)) { IRQCHK(c); goto L_803D2E8C; } // 803D2EBC
  goto L_803D2ED8; // 803D2EC0
L_803D2EC4:;
  c->r[29]=c->r[29]+0x00000001u; // 803D2EC4
L_803D2EC8:;
  c->r[0]=R8(c->r[30]+0x0000004Du); // 803D2EC8
  c->r[3]=rotl(c->r[29],0)&0x000000FFu; // 803D2ECC
  cmpu(c,0,c->r[3],c->r[0]); // 803D2ED0
  if (crb(c,0)) { IRQCHK(c); goto L_803D2E64; } // 803D2ED4
L_803D2ED8:;
  c->r[4]=0u+0x807B0000u; // 803D2ED8
  c->r[30]=0u+0x807B0000u; // 803D2EDC
  c->r[4]=c->r[4]+0x00006434u; // 803D2EE0
  c->r[30]=c->r[30]+0x000063B8u; // 803D2EE4
  c->r[3]=R8(c->r[4]+0x0000004Du); // 803D2EE8
  c->r[0]=R8(c->r[30]+0x00000078u); // 803D2EEC
  c->r[3]=c->r[3]+0xFFFFFFFFu; // 803D2EF0
  cmps(c,0,(int32_t)c->r[0],0); // 803D2EF4
  W8(c->r[4]+0x0000004Du,c->r[3]); // 803D2EF8
  if (crb(c,2)) { goto L_803D2F58; } // 803D2EFC
  c->r[4]=c->r[31]|c->r[31]; // 803D2F00
  c->r[3]=c->r[30]+0x0000001Au; // 803D2F04
  c->lr=0x803D2F0Cu; f_803D0B64(c); // 803D2F08
  cmps(c,0,(int32_t)c->r[3],0); // 803D2F0C
  if (!crb(c,2)) { goto L_803D2F58; } // 803D2F10
  c->r[0]=R8(c->r[30]+0x00000079u); // 803D2F14
  c->r[3]=0u+0x00000000u; // 803D2F18
  W8(c->r[30]+0x00000078u,c->r[3]); // 803D2F1C
  cmps(c,0,(int32_t)c->r[0],0); // 803D2F20
  if (crb(c,2)) { goto L_803D2F58; } // 803D2F24
  c->r[0]=R8(c->r[13]+0xFFFFE318u); // 803D2F28
  cmpu(c,0,c->r[0],0x00000004u); // 803D2F2C
  if (crb(c,0)) { goto L_803D2F44; } // 803D2F30
  c->r[4]=0u+0x80710000u; // 803D2F34
  c->r[3]=0u+0x00000503u; // 803D2F38
  c->r[4]=c->r[4]+0xFFFFAB60u; // 803D2F3C
  c->lr=0x803D2F44u; f_803D04E0(c); // 803D2F40
L_803D2F44:;
  c->r[3]=0u+0x807B0000u; // 803D2F44
  c->r[3]=c->r[3]+0x000063B8u; // 803D2F48
  c->r[3]=c->r[3]+0x00000040u; // 803D2F4C
  c->lr=0x803D2F54u; f_803D1018(c); // 803D2F50
  c->lr=0x803D2F58u; f_803D246C(c); // 803D2F54
L_803D2F58:;
  c->r[30]=0u+0x807B0000u; // 803D2F58
  c->r[30]=c->r[30]+0x00006434u; // 803D2F5C
  c->r[0]=R8(c->r[30]+0x00000072u); // 803D2F60
  cmps(c,0,(int32_t)c->r[0],0); // 803D2F64
  if (crb(c,2)) { goto L_803D2FA4; } // 803D2F68
  c->lr=0x803D2F70u; f_803D7908(c); // 803D2F6C
  c->r[0]=rotl(c->r[3],0)&0x0000FFFFu; cr0(c,c->r[0]); // 803D2F70
  if (!crb(c,2)) { goto L_803D2FA4; } // 803D2F74
  c->r[0]=0u+0x00000000u; // 803D2F78
  c->r[3]=c->r[30]+0x00000074u; // 803D2F7C
  W8(c->r[30]+0x00000072u,c->r[0]); // 803D2F80
  c->lr=0x803D2F88u; f_803D1018(c); // 803D2F84
  c->r[5]=0u+0x803D0000u; // 803D2F88
  c->r[3]=c->r[30]+0x00000074u; // 803D2F8C
  c->r[5]=c->r[5]+0x00002FF0u; // 803D2F90
  c->r[4]=0u+0x00000000u; // 803D2F94
  W32(c->r[30]+0x0000007Cu,c->r[5]); // 803D2F98
  c->r[5]=0u+0x000003E8u; // 803D2F9C
  c->lr=0x803D2FA4u; f_803D0FF8(c); // 803D2FA0
L_803D2FA4:;
  c->r[4]=c->r[31]|c->r[31]; // 803D2FA4
  c->r[3]=c->r[1]+0x00000008u; // 803D2FA8
  c->lr=0x803D2FB0u; f_803D0B30(c); // 803D2FAC
  c->lr=0x803D2FB4u; f_803D7964(c); // 803D2FB0
  c->r[5]=0u+0x807B0000u; // 803D2FB4
  W8(c->r[1]+0x0000000Eu,c->r[3]); // 803D2FB8
  c->r[5]=c->r[5]+0x00006434u; // 803D2FBC
  c->r[4]=c->r[1]+0x00000008u; // 803D2FC0
  c->r[12]=R32(c->r[5]+0x00000050u); // 803D2FC4
  c->r[3]=0u+0x00000006u; // 803D2FC8
  c->ctr=c->r[12]; // 803D2FCC
  if (true) { c->lr=0x803D2FD4u; dispatch(c,c->ctr); } // 803D2FD0
L_803D2FD4:;
  c->r[0]=R32(c->r[1]+0x00000134u); // 803D2FD4
  c->r[31]=R32(c->r[1]+0x0000012Cu); // 803D2FD8
  c->r[30]=R32(c->r[1]+0x00000128u); // 803D2FDC
  c->r[29]=R32(c->r[1]+0x00000124u); // 803D2FE0
  c->lr=c->r[0]; // 803D2FE4
  c->r[1]=c->r[1]+0x00000130u; // 803D2FE8
  return; // 803D2FEC
}

// fn_803D2FF0
void f_803D2FF0(Ctx* __restrict c) {
  trace_call(0x803D2FF0u);
  c->r[5]=0u+0x807B0000u; // 803D2FF0
  c->r[3]=0u+0x00000001u; // 803D2FF4
  c->r[5]=c->r[5]+0x00006434u; // 803D2FF8
  c->r[4]=0u+0x00000000u; // 803D2FFC
  c->r[12]=R32(c->r[5]+0x00000050u); // 803D3000
  c->ctr=c->r[12]; // 803D3004
  if (true) { dispatch(c,c->ctr); return; } // 803D3008
}

// fn_803D300C
void f_803D300C(Ctx* __restrict c) {
  trace_call(0x803D300Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803D300C
  c->r[0]=c->lr; // 803D3010
  W32(c->r[1]+0x00000024u,c->r[0]); // 803D3014
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 803D3018
  c->r[31]=c->r[3]|c->r[3]; // 803D301C
  c->r[0]=R8(c->r[3]+0x00000000u); // 803D3020
  cmps(c,0,(int32_t)c->r[0],0); // 803D3024
  if (!crb(c,2)) { goto L_803D3064; } // 803D3028
  c->r[3]=c->r[1]+0x00000008u; // 803D302C
  c->r[4]=c->r[31]+0x00000003u; // 803D3030
  c->lr=0x803D3038u; f_803D0B30(c); // 803D3034
  c->r[0]=0u+0x00000001u; // 803D3038
  c->r[3]=0u+0x807B0000u; // 803D303C
  W8(c->r[1]+0x0000000Eu,c->r[0]); // 803D3040
  c->r[3]=c->r[3]+0x00006434u; // 803D3044
  c->r[12]=R32(c->r[3]+0x00000050u); // 803D3048
  c->r[4]=c->r[1]+0x00000008u; // 803D304C
  c->r[0]=R8(c->r[31]+0x00000002u); // 803D3050
  c->r[3]=0u+0x00000007u; // 803D3054
  W8(c->r[1]+0x0000000Fu,c->r[0]); // 803D3058
  c->ctr=c->r[12]; // 803D305C
  if (true) { c->lr=0x803D3064u; dispatch(c,c->ctr); } // 803D3060
L_803D3064:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 803D3064
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 803D3068
  c->lr=c->r[0]; // 803D306C
  c->r[1]=c->r[1]+0x00000020u; // 803D3070
  return; // 803D3074
}

// fn_803D3078
void f_803D3078(Ctx* __restrict c) {
  trace_call(0x803D3078u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803D3078
  c->r[0]=c->lr; // 803D307C
  W32(c->r[1]+0x00000024u,c->r[0]); // 803D3080
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 803D3084
  c->r[31]=c->r[3]|c->r[3]; // 803D3088
  c->r[0]=R8(c->r[3]+0x00000000u); // 803D308C
  cmps(c,0,(int32_t)c->r[0],0); // 803D3090
  if (!crb(c,2)) { goto L_803D30D0; } // 803D3094
  c->r[3]=c->r[1]+0x00000008u; // 803D3098
  c->r[4]=c->r[31]+0x00000003u; // 803D309C
  c->lr=0x803D30A4u; f_803D0B30(c); // 803D30A0
  c->r[0]=0u+0x00000002u; // 803D30A4
  c->r[3]=0u+0x807B0000u; // 803D30A8
  W8(c->r[1]+0x0000000Eu,c->r[0]); // 803D30AC
  c->r[3]=c->r[3]+0x00006434u; // 803D30B0
  c->r[12]=R32(c->r[3]+0x00000050u); // 803D30B4
  c->r[4]=c->r[1]+0x00000008u; // 803D30B8
  c->r[0]=R8(c->r[31]+0x00000002u); // 803D30BC
  c->r[3]=0u+0x00000007u; // 803D30C0
  W8(c->r[1]+0x00000010u,c->r[0]); // 803D30C4
  c->ctr=c->r[12]; // 803D30C8
  if (true) { c->lr=0x803D30D0u; dispatch(c,c->ctr); } // 803D30CC
L_803D30D0:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 803D30D0
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 803D30D4
  c->lr=c->r[0]; // 803D30D8
  c->r[1]=c->r[1]+0x00000020u; // 803D30DC
  return; // 803D30E0
}

// bta_dm_l2cap_server_compress_cback
void f_803D30E4(Ctx* __restrict c) {
  trace_call(0x803D30E4u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803D30E4
  c->r[0]=c->lr; // 803D30E8
  W32(c->r[1]+0x00000034u,c->r[0]); // 803D30EC
  c->r[11]=c->r[1]+0x00000030u; // 803D30F0
  c->lr=0x803D30F8u; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 803D30F4
  c->r[31]=0u+0x807B0000u; // 803D30F8
  c->r[27]=R32(c->r[1]+0x00000038u); // 803D30FC
  c->r[31]=c->r[31]+0x00006388u; // 803D3100
  c->r[25]=c->r[3]|c->r[3]; // 803D3104
  c->r[26]=c->r[10]|c->r[10]; // 803D3108
  c->r[29]=0u+0x00000000u; // 803D310C
  c->r[30]=c->r[31]|c->r[31]; // 803D3110
  c->r[28]=0u+0x00000000u; // 803D3114
L_803D3118:;
  c->r[0]=R8(c->r[31]+0x00000008u); // 803D3118
  cmpu(c,0,c->r[0],0x00000001u); // 803D311C
  if (!crb(c,2)) { goto L_803D3198; } // 803D3120
  c->r[3]=c->r[30]|c->r[30]; // 803D3124
  c->r[4]=c->r[25]|c->r[25]; // 803D3128
  c->lr=0x803D3130u; f_803D0B64(c); // 803D312C
  cmps(c,0,(int32_t)c->r[3],0); // 803D3130
  if (!crb(c,2)) { goto L_803D3198; } // 803D3134
  c->r[0]=R8(c->r[13]+0xFFFFE318u); // 803D3138
  cmpu(c,0,c->r[0],0x00000004u); // 803D313C
  if (crb(c,0)) { goto L_803D316C; } // 803D3140
  c->r[0]=rotl(c->r[28],3)&0xFFFFFFF8u; // 803D3144
  c->r[5]=0u+0x807B0000u; // 803D3148
  c->r[5]=c->r[5]+0x00006388u; // 803D314C
  c->r[4]=0u+0x80710000u; // 803D3150
  c->r[0]=c->r[0]+c->r[28]; // 803D3154
  c->r[3]=0u+0x00000503u; // 803D3158
  c->r[5]=c->r[5]+c->r[0]; // 803D315C
  c->r[4]=c->r[4]+0xFFFFAB74u; // 803D3160
  c->r[5]=R8(c->r[5]+0x00000006u); // 803D3164
  c->lr=0x803D316Cu; f_803D04F8(c); // 803D3168
L_803D316C:;
  c->r[0]=rotl(c->r[28],3)&0xFFFFFFF8u; // 803D316C
  c->r[3]=0u+0x807B0000u; // 803D3170
  c->r[3]=c->r[3]+0x00006388u; // 803D3174
  c->r[4]=c->r[26]|c->r[26]; // 803D3178
  c->r[0]=c->r[0]+c->r[28]; // 803D317C
  c->r[5]=c->r[27]|c->r[27]; // 803D3180
  c->r[3]=c->r[3]+c->r[0]; // 803D3184
  c->r[3]=R8(c->r[3]+0x00000006u); // 803D3188
  c->lr=0x803D3190u; f_8040F2B0(c); // 803D318C
  c->r[29]=c->r[3]|c->r[3]; // 803D3190
  goto L_803D31AC; // 803D3194
L_803D3198:;
  c->r[28]=c->r[28]+0x00000001u; // 803D3198
  c->r[30]=c->r[30]+0x00000009u; // 803D319C
  cmps(c,0,(int32_t)c->r[28],5); // 803D31A0
  c->r[31]=c->r[31]+0x00000009u; // 803D31A4
  if (crb(c,0)) { IRQCHK(c); goto L_803D3118; } // 803D31A8
L_803D31AC:;
  c->r[11]=c->r[1]+0x00000030u; // 803D31AC
  c->r[3]=c->r[29]|c->r[29]; // 803D31B0
  c->lr=0x803D31B8u; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 803D31B4
  c->r[0]=R32(c->r[1]+0x00000034u); // 803D31B8
  c->lr=c->r[0]; // 803D31BC
  c->r[1]=c->r[1]+0x00000030u; // 803D31C0
  return; // 803D31C4
}

// bta_dm_compress_cback
void f_803D31C8(Ctx* __restrict c) {
  trace_call(0x803D31C8u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803D31C8
  c->r[0]=c->lr; // 803D31CC
  cmps(c,0,(int32_t)c->r[3],0); // 803D31D0
  W32(c->r[1]+0x00000024u,c->r[0]); // 803D31D4
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 803D31D8
  W32(c->r[1]+0x00000018u,c->r[30]); // 803D31DC
  W32(c->r[1]+0x00000014u,c->r[29]); // 803D31E0
  if (!crb(c,2)) { goto L_803D333C; } // 803D31E4
  c->r[3]=R32(c->r[13]+0xFFFFA094u); // 803D31E8
  c->r[7]=0u+0x00000001u; // 803D31EC
  c->r[9]=R8(c->r[3]+0x00000001u); // 803D31F0
  goto L_803D332C; // 803D31F4
L_803D31F8:;
  c->r[8]=rotl(c->r[7],0)&0x000000FFu; // 803D31F8
  c->r[0]=rotl(c->r[7],2)&0x000003FCu; // 803D31FC
  c->r[0]=c->r[0]-c->r[8]; // 803D3200
  c->r[8]=c->r[3]+c->r[0]; // 803D3204
  c->r[0]=R8(c->r[8]+0x00000001u); // 803D3208
  cmpu(c,0,c->r[5],c->r[0]); // 803D320C
  if (crb(c,2)) { goto L_803D321C; } // 803D3210
  cmpu(c,0,c->r[0],0x000000FFu); // 803D3214
  if (!crb(c,2)) { goto L_803D3328; } // 803D3218
L_803D321C:;
  c->r[0]=R8(c->r[8]+0x00000000u); // 803D321C
  cmpu(c,0,c->r[4],c->r[0]); // 803D3220
  if (!crb(c,2)) { goto L_803D3328; } // 803D3224
  c->r[0]=R8(c->r[8]+0x00000002u); // 803D3228
  cmpu(c,0,c->r[0],0x00000001u); // 803D322C
  if (!crb(c,2)) { goto L_803D3328; } // 803D3230
  c->r[8]=0u+0x807B0000u; // 803D3234
  c->r[11]=R8(c->r[3]+0x00000001u); // 803D3238
  c->r[10]=R8(c->r[8]+0x00006538u); // 803D323C
  c->r[9]=c->r[8]+0x00006538u; // 803D3240
  c->r[31]=0u+0x00000000u; // 803D3244
  c->r[29]=0u+0x00000001u; // 803D3248
  goto L_803D32AC; // 803D324C
L_803D3250:;
  c->r[8]=rotl(c->r[29],0)&0x000000FFu; // 803D3250
  c->r[0]=rotl(c->r[29],2)&0x000003FCu; // 803D3254
  c->r[0]=c->r[0]-c->r[8]; // 803D3258
  c->r[12]=c->r[3]+c->r[0]; // 803D325C
  c->r[0]=R8(c->r[12]+0x00000002u); // 803D3260
  cmpu(c,0,c->r[0],0x00000002u); // 803D3264
  if (!crb(c,2)) { goto L_803D32A8; } // 803D3268
  c->r[30]=0u+0x00000000u; // 803D326C
  goto L_803D329C; // 803D3270
L_803D3274:;
  c->r[8]=rotl(c->r[30],0)&0x000000FFu; // 803D3274
  c->r[0]=rotl(c->r[30],3)&0x000007F8u; // 803D3278
  c->r[8]=c->r[0]+c->r[8]; // 803D327C
  c->r[0]=R8(c->r[12]+0x00000000u); // 803D3280
  c->r[8]=c->r[9]+c->r[8]; // 803D3284
  c->r[8]=R8(c->r[8]+0x00000007u); // 803D3288
  cmpu(c,0,c->r[8],c->r[0]); // 803D328C
  if (!crb(c,2)) { goto L_803D3298; } // 803D3290
  c->r[31]=0u+0x00000001u; // 803D3294
L_803D3298:;
  c->r[30]=c->r[30]+0x00000001u; // 803D3298
L_803D329C:;
  c->r[0]=rotl(c->r[30],0)&0x000000FFu; // 803D329C
  cmpu(c,0,c->r[0],c->r[10]); // 803D32A0
  if (crb(c,0)) { IRQCHK(c); goto L_803D3274; } // 803D32A4
L_803D32A8:;
  c->r[29]=c->r[29]+0x00000001u; // 803D32A8
L_803D32AC:;
  c->r[0]=rotl(c->r[29],0)&0x000000FFu; // 803D32AC
  cmpu(c,0,c->r[0],c->r[11]); // 803D32B0
  if (!crb(c,1)) { IRQCHK(c); goto L_803D3250; } // 803D32B4
  cmps(c,0,(int32_t)c->r[31],0); // 803D32B8
  if (!crb(c,2)) { goto L_803D33E4; } // 803D32BC
  c->r[3]=rotl(c->r[7],0)&0x000000FFu; // 803D32C0
  c->r[30]=0u+0x807B0000u; // 803D32C4
  c->r[3]=c->r[3]+0xFFFFFFFFu; // 803D32C8
  c->r[0]=rotl(c->r[3],3)&0xFFFFFFF8u; // 803D32CC
  c->r[30]=c->r[30]+0x00006388u; // 803D32D0
  c->r[29]=c->r[0]+c->r[3]; // 803D32D4
  c->r[31]=c->r[30]+c->r[29]; // 803D32D8
  W8(c->r[31]+0x00000007u,c->r[5]); // 803D32DC
  c->r[3]=c->r[31]|c->r[31]; // 803D32E0
  W8(c->r[31]+0x00000006u,c->r[4]); // 803D32E4
  c->r[4]=c->r[6]|c->r[6]; // 803D32E8
  c->lr=0x803D32F0u; f_803D0B30(c); // 803D32EC
  c->r[0]=R8(c->r[13]+0xFFFFE318u); // 803D32F0
  c->r[3]=0u+0x00000001u; // 803D32F4
  W8(c->r[31]+0x00000008u,c->r[3]); // 803D32F8
  c->r[7]=c->r[31]|c->r[31]; // 803D32FC
  cmpu(c,0,c->r[0],0x00000004u); // 803D3300
  if (crb(c,0)) { goto L_803D33E4; } // 803D3304
  c->r[4]=0u+0x80710000u; // 803D3308
  c->r[5]=R8(c->r[31]+0x00000007u); // 803D330C
  c->r[6]=R8(c->r[31]+0x00000006u); // 803D3310
  c->r[4]=c->r[4]+0xFFFFABA4u; // 803D3314
  c->r[7]=R8(c->r[7]+0x00000008u); // 803D3318
  c->r[3]=0u+0x00000503u; // 803D331C
  c->lr=0x803D3324u; f_803D0528(c); // 803D3320
  goto L_803D33E4; // 803D3324
L_803D3328:;
  c->r[7]=c->r[7]+0x00000001u; // 803D3328
L_803D332C:;
  c->r[0]=rotl(c->r[7],0)&0x000000FFu; // 803D332C
  cmpu(c,0,c->r[0],c->r[9]); // 803D3330
  if (!crb(c,1)) { IRQCHK(c); goto L_803D31F8; } // 803D3334
  goto L_803D33E4; // 803D3338
L_803D333C:;
  cmpu(c,0,c->r[3],0x00000001u); // 803D333C
  if (!crb(c,2)) { goto L_803D33E4; } // 803D3340
  c->r[7]=R32(c->r[13]+0xFFFFA094u); // 803D3344
  c->r[8]=0u+0x00000001u; // 803D3348
  c->r[6]=R8(c->r[7]+0x00000001u); // 803D334C
  goto L_803D33D8; // 803D3350
L_803D3354:;
  c->r[3]=rotl(c->r[8],0)&0x000000FFu; // 803D3354
  c->r[0]=rotl(c->r[8],2)&0x000003FCu; // 803D3358
  c->r[0]=c->r[0]-c->r[3]; // 803D335C
  c->r[3]=c->r[7]+c->r[0]; // 803D3360
  c->r[0]=R8(c->r[3]+0x00000001u); // 803D3364
  cmpu(c,0,c->r[5],c->r[0]); // 803D3368
  if (crb(c,2)) { goto L_803D3378; } // 803D336C
  cmpu(c,0,c->r[0],0x000000FFu); // 803D3370
  if (!crb(c,2)) { goto L_803D33D4; } // 803D3374
L_803D3378:;
  c->r[0]=R8(c->r[3]+0x00000000u); // 803D3378
  cmpu(c,0,c->r[4],c->r[0]); // 803D337C
  if (!crb(c,2)) { goto L_803D33D4; } // 803D3380
  c->r[3]=rotl(c->r[8],0)&0x000000FFu; // 803D3384
  c->r[0]=R8(c->r[13]+0xFFFFE318u); // 803D3388
  c->r[5]=c->r[3]+0xFFFFFFFFu; // 803D338C
  c->r[3]=0u+0x807B0000u; // 803D3390
  cmpu(c,0,c->r[0],0x00000004u); // 803D3394
  c->r[4]=rotl(c->r[5],3)&0xFFFFFFF8u; // 803D3398
  c->r[0]=c->r[4]+c->r[5]; // 803D339C
  c->r[3]=c->r[3]+0x00006388u; // 803D33A0
  c->r[3]=c->r[3]+c->r[0]; // 803D33A4
  c->r[0]=0u+0x00000000u; // 803D33A8
  W8(c->r[3]+0x00000008u,c->r[0]); // 803D33AC
  if (crb(c,0)) { goto L_803D33E4; } // 803D33B0
  c->r[4]=0u+0x80710000u; // 803D33B4
  c->r[5]=R8(c->r[3]+0x00000007u); // 803D33B8
  c->r[6]=R8(c->r[3]+0x00000006u); // 803D33BC
  c->r[4]=c->r[4]+0xFFFFABE0u; // 803D33C0
  c->r[7]=R8(c->r[3]+0x00000008u); // 803D33C4
  c->r[3]=0u+0x00000503u; // 803D33C8
  c->lr=0x803D33D0u; f_803D0528(c); // 803D33CC
  goto L_803D33E4; // 803D33D0
L_803D33D4:;
  c->r[8]=c->r[8]+0x00000001u; // 803D33D4
L_803D33D8:;
  c->r[0]=rotl(c->r[8],0)&0x000000FFu; // 803D33D8
  cmpu(c,0,c->r[0],c->r[6]); // 803D33DC
  if (!crb(c,1)) { IRQCHK(c); goto L_803D3354; } // 803D33E0
L_803D33E4:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 803D33E4
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 803D33E8
  c->r[30]=R32(c->r[1]+0x00000018u); // 803D33EC
  c->r[29]=R32(c->r[1]+0x00000014u); // 803D33F0
  c->lr=c->r[0]; // 803D33F4
  c->r[1]=c->r[1]+0x00000020u; // 803D33F8
  return; // 803D33FC
}

// bta_dm_rm_cback
void f_803D3400(Ctx* __restrict c) {
  trace_call(0x803D3400u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803D3400
  c->r[0]=c->lr; // 803D3404
  W32(c->r[1]+0x00000024u,c->r[0]); // 803D3408
  c->r[11]=c->r[1]+0x00000020u; // 803D340C
  c->lr=0x803D3414u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 803D3410
  cmps(c,0,(int32_t)c->r[3],0); // 803D3414
  c->r[30]=c->r[4]|c->r[4]; // 803D3418
  c->r[31]=c->r[5]|c->r[5]; // 803D341C
  c->r[26]=c->r[6]|c->r[6]; // 803D3420
  if (!crb(c,2)) { goto L_803D34F0; } // 803D3424
  c->r[3]=0u+0x807B0000u; // 803D3428
  c->r[27]=0u+0x00000000u; // 803D342C
  c->r[29]=c->r[3]+0x00006434u; // 803D3430
  goto L_803D34E0; // 803D3434
L_803D3438:;
  c->r[0]=rotl(c->r[27],0)&0x000000FFu; // 803D3438
  c->r[4]=c->r[26]|c->r[26]; // 803D343C
  c->r[28]=(uint32_t)((int32_t)c->r[0]*(int32_t)11); // 803D3440
  c->r[3]=c->r[29]+c->r[28]; // 803D3444
  c->lr=0x803D344Cu; f_803D0B64(c); // 803D3448
  cmps(c,0,(int32_t)c->r[3],0); // 803D344C
  if (!crb(c,2)) { goto L_803D34DC; } // 803D3450
  c->r[3]=c->r[29]+c->r[28]; // 803D3454
  c->r[0]=0u+0x00000001u; // 803D3458
  W8(c->r[3]+0x00000006u,c->r[0]); // 803D345C
  c->r[7]=0u+0x00000001u; // 803D3460
  c->r[6]=R32(c->r[13]+0xFFFFA090u); // 803D3464
  c->r[4]=R8(c->r[6]+0x00000001u); // 803D3468
  goto L_803D34CC; // 803D346C
L_803D3470:;
  c->r[3]=rotl(c->r[7],0)&0x000000FFu; // 803D3470
  c->r[0]=rotl(c->r[7],2)&0x000003FCu; // 803D3474
  c->r[5]=c->r[0]-c->r[3]; // 803D3478
  c->r[3]=c->r[6]+c->r[5]; // 803D347C
  c->r[0]=R8(c->r[3]+0x00000001u); // 803D3480
  cmpu(c,0,c->r[31],c->r[0]); // 803D3484
  if (crb(c,2)) { goto L_803D3494; } // 803D3488
  cmpu(c,0,c->r[0],0x000000FFu); // 803D348C
  if (!crb(c,2)) { goto L_803D34C8; } // 803D3490
L_803D3494:;
  c->r[0]=R8(c->r[3]+0x00000000u); // 803D3494
  cmpu(c,0,c->r[30],c->r[0]); // 803D3498
  if (!crb(c,2)) { goto L_803D34C8; } // 803D349C
  c->r[3]=0u+0x807B0000u; // 803D34A0
  c->r[4]=c->r[6]+c->r[5]; // 803D34A4
  c->r[3]=c->r[3]+0x00006434u; // 803D34A8
  c->r[4]=R8(c->r[4]+0x00000002u); // 803D34AC
  c->r[3]=c->r[3]+c->r[28]; // 803D34B0
  c->r[0]=R8(c->r[3]+0x00000007u); // 803D34B4
  cmpu(c,0,c->r[4],c->r[0]); // 803D34B8
  if (!crb(c,1)) { goto L_803D34F0; } // 803D34BC
  W8(c->r[3]+0x00000007u,c->r[4]); // 803D34C0
  goto L_803D34F0; // 803D34C4
L_803D34C8:;
  c->r[7]=c->r[7]+0x00000001u; // 803D34C8
L_803D34CC:;
  c->r[0]=rotl(c->r[7],0)&0x000000FFu; // 803D34CC
  cmpu(c,0,c->r[0],c->r[4]); // 803D34D0
  if (!crb(c,1)) { IRQCHK(c); goto L_803D3470; } // 803D34D4
  goto L_803D34F0; // 803D34D8
L_803D34DC:;
  c->r[27]=c->r[27]+0x00000001u; // 803D34DC
L_803D34E0:;
  c->r[0]=R8(c->r[29]+0x0000004Du); // 803D34E0
  c->r[3]=rotl(c->r[27],0)&0x000000FFu; // 803D34E4
  cmpu(c,0,c->r[3],c->r[0]); // 803D34E8
  if (crb(c,0)) { IRQCHK(c); goto L_803D3438; } // 803D34EC
L_803D34F0:;
  c->r[11]=c->r[1]+0x00000020u; // 803D34F0
  c->lr=0x803D34F8u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 803D34F4
  c->r[0]=R32(c->r[1]+0x00000024u); // 803D34F8
  c->lr=c->r[0]; // 803D34FC
  c->r[1]=c->r[1]+0x00000020u; // 803D3500
  return; // 803D3504
}

// bta_dm_keep_acl
void f_803D3508(Ctx* __restrict c) {
  trace_call(0x803D3508u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803D3508
  c->r[0]=c->lr; // 803D350C
  W32(c->r[1]+0x00000014u,c->r[0]); // 803D3510
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 803D3514
  c->r[4]=R16(c->r[3]+0x00000006u); // 803D3518
  c->r[3]=0u+0x807B0000u; // 803D351C
  c->r[3]=c->r[3]+0x00006434u; // 803D3520
  c->r[0]=rotl(c->r[4],0)&0x000000FFu; cr0(c,c->r[0]); // 803D3524
  W8(c->r[3]+0x00000101u,c->r[4]); // 803D3528
  if (crb(c,2)) { goto L_803D355C; } // 803D352C
  c->r[31]=0u+0x00010000u; // 803D3530
  c->r[3]=c->r[2]+0x00000EA8u; // 803D3534
  c->r[0]=c->r[31]+0xFFFFFFFFu; // 803D3538
  c->r[4]=rotl(c->r[0],0)&0x0000FFFFu; // 803D353C
  c->lr=0x803D3544u; f_803E98AC(c); // 803D3540
  c->r[0]=c->r[31]+0xFFFFFFFFu; // 803D3544
  c->r[3]=0u+0x00000000u; // 803D3548
  c->r[4]=rotl(c->r[0],0)&0x0000FFFFu; // 803D354C
  c->r[5]=0u+0x00000001u; // 803D3550
  c->lr=0x803D3558u; f_803E97E4(c); // 803D3554
  goto L_803D3578; // 803D3558
L_803D355C:;
  c->r[3]=c->r[2]+0x00000EA8u; // 803D355C
  c->r[4]=0u+0x00000002u; // 803D3560
  c->lr=0x803D3568u; f_803E98AC(c); // 803D3564
  c->r[3]=0u+0x00000000u; // 803D3568
  c->r[4]=0u+0x00000002u; // 803D356C
  c->r[5]=0u+0x00000001u; // 803D3570
  c->lr=0x803D3578u; f_803E97E4(c); // 803D3574
L_803D3578:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 803D3578
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 803D357C
  c->lr=c->r[0]; // 803D3580
  c->r[1]=c->r[1]+0x00000010u; // 803D3584
  return; // 803D3588
}

// bta_dm_immediate_disable
void f_803D358C(Ctx* __restrict c) {
  trace_call(0x803D358Cu);
  c->r[5]=0u+0x807B0000u; // 803D358C
  c->r[3]=0u+0x00000001u; // 803D3590
  c->r[5]=c->r[5]+0x00006434u; // 803D3594
  c->r[4]=0u+0x00000000u; // 803D3598
  c->r[12]=R32(c->r[5]+0x00000050u); // 803D359C
  c->ctr=c->r[12]; // 803D35A0
  if (true) { dispatch(c,c->ctr); return; } // 803D35A4
}

// fn_803D35A8
void f_803D35A8(Ctx* __restrict c) {
  trace_call(0x803D35A8u);
  return; // 803D35A8
}

// bta_dm_send_hci_reset
void f_803D35AC(Ctx* __restrict c) {
  trace_call(0x803D35ACu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803D35AC
  c->r[0]=c->lr; // 803D35B0
  c->r[4]=0u+0x807B0000u; // 803D35B4
  c->r[3]=0u+0x00000002u; // 803D35B8
  W32(c->r[1]+0x00000014u,c->r[0]); // 803D35BC
  c->r[0]=0u+0x00000001u; // 803D35C0
  c->r[4]=c->r[4]+0x000062F8u; // 803D35C4
  W8(c->r[4]+0x0000007Eu,c->r[0]); // 803D35C8
  c->lr=0x803D35D0u; f_803CDAF4(c); // 803D35CC
  cmps(c,0,(int32_t)c->r[3],0); // 803D35D0
  if (crb(c,2)) { goto L_803D35E0; } // 803D35D4
  c->r[4]=0u+0x00000000u; // 803D35D8
  c->lr=0x803D35E0u; f_803E4F10(c); // 803D35DC
L_803D35E0:;
  c->r[3]=0u+0x803D0000u; // 803D35E0
  c->r[3]=c->r[3]+0x000035A8u; // 803D35E4
  c->lr=0x803D35ECu; f_803D8FF8(c); // 803D35E8
  c->r[0]=R32(c->r[1]+0x00000014u); // 803D35EC
  c->lr=c->r[0]; // 803D35F0
  c->r[1]=c->r[1]+0x00000010u; // 803D35F4
  return; // 803D35F8
}

// BTA_EnableBluetooth
void f_803D35FC(Ctx* __restrict c) {
  trace_call(0x803D35FCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803D35FC
  c->r[0]=c->lr; // 803D3600
  c->r[4]=0u+0x807B0000u; // 803D3604
  c->r[5]=0u+0x00000104u; // 803D3608
  W32(c->r[1]+0x00000014u,c->r[0]); // 803D360C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 803D3610
  c->r[31]=c->r[3]|c->r[3]; // 803D3614
  c->r[3]=c->r[4]+0x00006434u; // 803D3618
  c->r[4]=0u+0x00000000u; // 803D361C
  c->lr=0x803D3624u; f_800043EC(c); // 803D3620
  c->lr=0x803D3628u; f_803CEF4C(c); // 803D3624
  c->r[3]=0u+0x00000001u; // 803D3628
  c->r[4]=c->r[2]+0x00000E78u; // 803D362C
  c->lr=0x803D3634u; f_803D0FC8(c); // 803D3630
  c->r[3]=0u+0x00000002u; // 803D3634
  c->r[4]=c->r[2]+0x00000E80u; // 803D3638
  c->lr=0x803D3640u; f_803D0FC8(c); // 803D363C
  c->lr=0x803D3644u; f_803CEF50(c); // 803D3640
  c->r[3]=0u+0x0000000Cu; // 803D3644
  c->lr=0x803D364Cu; f_803CD954(c); // 803D3648
  cmps(c,0,(int32_t)c->r[3],0); // 803D364C
  if (crb(c,2)) { goto L_803D366C; } // 803D3650
  c->r[0]=0u+0x00000100u; // 803D3654
  W16(c->r[3]+0x00000000u,c->r[0]); // 803D3658
  W32(c->r[3]+0x00000008u,c->r[31]); // 803D365C
  c->lr=0x803D3664u; f_803D0FDC(c); // 803D3660
  c->r[3]=0u+0x00000000u; // 803D3664
  goto L_803D3670; // 803D3668
L_803D366C:;
  c->r[3]=0u+0x00000001u; // 803D366C
L_803D3670:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 803D3670
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 803D3674
  c->lr=c->r[0]; // 803D3678
  c->r[1]=c->r[1]+0x00000010u; // 803D367C
  return; // 803D3680
}

// BTA_DisableBluetooth
void f_803D3684(Ctx* __restrict c) {
  trace_call(0x803D3684u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803D3684
  c->r[0]=c->lr; // 803D3688
  c->r[3]=0u+0x00000008u; // 803D368C
  W32(c->r[1]+0x00000014u,c->r[0]); // 803D3690
  c->lr=0x803D3698u; f_803CD954(c); // 803D3694
  cmps(c,0,(int32_t)c->r[3],0); // 803D3698
  if (crb(c,2)) { goto L_803D36AC; } // 803D369C
  c->r[0]=0u+0x00000101u; // 803D36A0
  W16(c->r[3]+0x00000000u,c->r[0]); // 803D36A4
  c->lr=0x803D36ACu; f_803D0FDC(c); // 803D36A8
L_803D36AC:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 803D36AC
  c->lr=c->r[0]; // 803D36B0
  c->r[1]=c->r[1]+0x00000010u; // 803D36B4
  return; // 803D36B8
}

// BTA_DmIsDeviceUp
void f_803D36BC(Ctx* __restrict c) {
  trace_call(0x803D36BCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803D36BC
  c->r[0]=c->lr; // 803D36C0
  W32(c->r[1]+0x00000014u,c->r[0]); // 803D36C4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 803D36C8
  c->lr=0x803D36D0u; f_803CEF4C(c); // 803D36CC
  c->lr=0x803D36D4u; f_803D90A0(c); // 803D36D0
  c->r[31]=c->r[3]|c->r[3]; // 803D36D4
  c->lr=0x803D36DCu; f_803CEF50(c); // 803D36D8
  c->r[3]=c->r[31]|c->r[31]; // 803D36DC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 803D36E0
  c->r[0]=R32(c->r[1]+0x00000014u); // 803D36E4
  c->lr=c->r[0]; // 803D36E8
  c->r[1]=c->r[1]+0x00000010u; // 803D36EC
  return; // 803D36F0
}

// BTA_DmSetDeviceName
void f_803D36F4(Ctx* __restrict c) {
  trace_call(0x803D36F4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803D36F4
  c->r[0]=c->lr; // 803D36F8
  W32(c->r[1]+0x00000014u,c->r[0]); // 803D36FC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 803D3700
  W32(c->r[1]+0x00000008u,c->r[30]); // 803D3704
  c->r[30]=c->r[3]|c->r[3]; // 803D3708
  c->r[3]=0u+0x00000028u; // 803D370C
  c->lr=0x803D3714u; f_803CD954(c); // 803D3710
  cmps(c,0,(int32_t)c->r[3],0); // 803D3714
  c->r[31]=c->r[3]|c->r[3]; // 803D3718
  if (crb(c,2)) { goto L_803D3740; } // 803D371C
  c->r[0]=0u+0x00000102u; // 803D3720
  c->r[4]=c->r[30]|c->r[30]; // 803D3724
  W16(c->r[3]+0x00000000u,c->r[0]); // 803D3728
  c->r[5]=0u+0x00000020u; // 803D372C
  c->r[3]=c->r[3]+0x00000008u; // 803D3730
  c->lr=0x803D3738u; f_803B3880(c); // 803D3734
  c->r[3]=c->r[31]|c->r[31]; // 803D3738
  c->lr=0x803D3740u; f_803D0FDC(c); // 803D373C
L_803D3740:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 803D3740
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 803D3744
  c->r[30]=R32(c->r[1]+0x00000008u); // 803D3748
  c->lr=c->r[0]; // 803D374C
  c->r[1]=c->r[1]+0x00000010u; // 803D3750
  return; // 803D3754
}

// BTA_DmSetVisibility
void f_803D3758(Ctx* __restrict c) {
  trace_call(0x803D3758u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803D3758
  c->r[0]=c->lr; // 803D375C
  W32(c->r[1]+0x00000014u,c->r[0]); // 803D3760
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 803D3764
  c->r[31]=c->r[4]|c->r[4]; // 803D3768
  W32(c->r[1]+0x00000008u,c->r[30]); // 803D376C
  c->r[30]=c->r[3]|c->r[3]; // 803D3770
  c->r[3]=0u+0x00000110u; // 803D3774
  c->lr=0x803D377Cu; f_803CD954(c); // 803D3778
  cmps(c,0,(int32_t)c->r[3],0); // 803D377C
  if (crb(c,2)) { goto L_803D3798; } // 803D3780
  c->r[0]=0u+0x00000103u; // 803D3784
  W16(c->r[3]+0x00000000u,c->r[0]); // 803D3788
  W8(c->r[3]+0x00000008u,c->r[30]); // 803D378C
  W8(c->r[3]+0x00000009u,c->r[31]); // 803D3790
  c->lr=0x803D3798u; f_803D0FDC(c); // 803D3794
L_803D3798:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 803D3798
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 803D379C
  c->r[30]=R32(c->r[1]+0x00000008u); // 803D37A0
  c->lr=c->r[0]; // 803D37A4
  c->r[1]=c->r[1]+0x00000010u; // 803D37A8
  return; // 803D37AC
}

// BTA_DmSearch
void f_803D37B0(Ctx* __restrict c) {
  trace_call(0x803D37B0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803D37B0
  c->r[0]=c->lr; // 803D37B4
  W32(c->r[1]+0x00000024u,c->r[0]); // 803D37B8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 803D37BC
  W32(c->r[1]+0x00000018u,c->r[30]); // 803D37C0
  c->r[30]=c->r[5]|c->r[5]; // 803D37C4
  W32(c->r[1]+0x00000014u,c->r[29]); // 803D37C8
  c->r[29]=c->r[4]|c->r[4]; // 803D37CC
  W32(c->r[1]+0x00000010u,c->r[28]); // 803D37D0
  c->r[28]=c->r[3]|c->r[3]; // 803D37D4
  c->r[3]=0u+0x0000001Cu; // 803D37D8
  c->lr=0x803D37E0u; f_803CD954(c); // 803D37DC
  cmps(c,0,(int32_t)c->r[3],0); // 803D37E0
  c->r[31]=c->r[3]|c->r[3]; // 803D37E4
  if (crb(c,2)) { goto L_803D3814; } // 803D37E8
  c->r[0]=0u+0x00000200u; // 803D37EC
  c->r[4]=c->r[28]|c->r[28]; // 803D37F0
  W16(c->r[3]+0x00000000u,c->r[0]); // 803D37F4
  c->r[5]=0u+0x0000000Au; // 803D37F8
  c->r[3]=c->r[3]+0x00000008u; // 803D37FC
  c->lr=0x803D3804u; f_802DC484(c); // 803D3800
  W32(c->r[31]+0x00000014u,c->r[29]); // 803D3804
  c->r[3]=c->r[31]|c->r[31]; // 803D3808
  W32(c->r[31]+0x00000018u,c->r[30]); // 803D380C
  c->lr=0x803D3814u; f_803D0FDC(c); // 803D3810
L_803D3814:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 803D3814
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 803D3818
  c->r[30]=R32(c->r[1]+0x00000018u); // 803D381C
  c->r[29]=R32(c->r[1]+0x00000014u); // 803D3820
  c->r[28]=R32(c->r[1]+0x00000010u); // 803D3824
  c->lr=c->r[0]; // 803D3828
  c->r[1]=c->r[1]+0x00000020u; // 803D382C
  return; // 803D3830
}

// BTA_DmSearchCancel
void f_803D3834(Ctx* __restrict c) {
  trace_call(0x803D3834u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803D3834
  c->r[0]=c->lr; // 803D3838
  c->r[3]=0u+0x00000008u; // 803D383C
  W32(c->r[1]+0x00000014u,c->r[0]); // 803D3840
  c->lr=0x803D3848u; f_803CD954(c); // 803D3844
  cmps(c,0,(int32_t)c->r[3],0); // 803D3848
  if (crb(c,2)) { goto L_803D385C; } // 803D384C
  c->r[0]=0u+0x00000201u; // 803D3850
  W16(c->r[3]+0x00000000u,c->r[0]); // 803D3854
  c->lr=0x803D385Cu; f_803D0FDC(c); // 803D3858
L_803D385C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 803D385C
  c->lr=c->r[0]; // 803D3860
  c->r[1]=c->r[1]+0x00000010u; // 803D3864
  return; // 803D3868
}

// BTA_DmPinReply
void f_803D386C(Ctx* __restrict c) {
  trace_call(0x803D386Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803D386C
  c->r[0]=c->lr; // 803D3870
  W32(c->r[1]+0x00000024u,c->r[0]); // 803D3874
  c->r[11]=c->r[1]+0x00000020u; // 803D3878
  c->lr=0x803D3880u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 803D387C
  c->r[27]=c->r[3]|c->r[3]; // 803D3880
  c->r[28]=c->r[4]|c->r[4]; // 803D3884
  c->r[29]=c->r[5]|c->r[5]; // 803D3888
  c->r[30]=c->r[6]|c->r[6]; // 803D388C
  c->r[3]=0u+0x00000020u; // 803D3890
  c->lr=0x803D3898u; f_803CD954(c); // 803D3894
  cmps(c,0,(int32_t)c->r[3],0); // 803D3898
  c->r[31]=c->r[3]|c->r[3]; // 803D389C
  if (crb(c,2)) { goto L_803D38E0; } // 803D38A0
  c->r[0]=0u+0x00000107u; // 803D38A4
  c->r[4]=c->r[27]|c->r[27]; // 803D38A8
  W16(c->r[3]+0x00000000u,c->r[0]); // 803D38AC
  c->r[3]=c->r[3]+0x00000008u; // 803D38B0
  c->lr=0x803D38B8u; f_803D0B30(c); // 803D38B4
  cmps(c,0,(int32_t)c->r[28],0); // 803D38B8
  W8(c->r[31]+0x0000000Eu,c->r[28]); // 803D38BC
  if (crb(c,2)) { goto L_803D38D8; } // 803D38C0
  W8(c->r[31]+0x0000000Fu,c->r[29]); // 803D38C4
  c->r[4]=c->r[30]|c->r[30]; // 803D38C8
  c->r[5]=c->r[29]|c->r[29]; // 803D38CC
  c->r[3]=c->r[31]+0x00000010u; // 803D38D0
  c->lr=0x803D38D8u; f_802DC484(c); // 803D38D4
L_803D38D8:;
  c->r[3]=c->r[31]|c->r[31]; // 803D38D8
  c->lr=0x803D38E0u; f_803D0FDC(c); // 803D38DC
L_803D38E0:;
  c->r[11]=c->r[1]+0x00000020u; // 803D38E0
  c->lr=0x803D38E8u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 803D38E4
  c->r[0]=R32(c->r[1]+0x00000024u); // 803D38E8
  c->lr=c->r[0]; // 803D38EC
  c->r[1]=c->r[1]+0x00000020u; // 803D38F0
  return; // 803D38F4
}

// BTA_DmAddDevice
void f_803D38F8(Ctx* __restrict c) {
  trace_call(0x803D38F8u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803D38F8
  c->r[0]=c->lr; // 803D38FC
  W32(c->r[1]+0x00000034u,c->r[0]); // 803D3900
  c->r[11]=c->r[1]+0x00000030u; // 803D3904
  c->lr=0x803D390Cu; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 803D3908
  c->r[28]=c->r[3]|c->r[3]; // 803D390C
  c->r[29]=c->r[4]|c->r[4]; // 803D3910
  c->r[30]=c->r[5]|c->r[5]; // 803D3914
  c->r[27]=c->r[6]|c->r[6]; // 803D3918
  c->r[3]=c->r[1]+0x00000008u; // 803D391C
  c->r[31]=0u+0x00000000u; // 803D3920
  c->r[4]=0u+0x00000000u; // 803D3924
  c->r[5]=0u+0x00000008u; // 803D3928
  c->lr=0x803D3930u; f_800043EC(c); // 803D392C
  cmps(c,0,(int32_t)c->r[27],0); // 803D3930
  if (crb(c,2)) { goto L_803D399C; } // 803D3934
  c->r[7]=0u+0x806A0000u; // 803D3938
  c->r[5]=c->r[1]+0x00000008u; // 803D393C
  c->r[7]=c->r[7]+0x000045F8u; // 803D3940
  c->r[3]=0u+0x00000001u; // 803D3944
  goto L_803D3988; // 803D3948
L_803D394C:;
  c->r[0]=rotl(c->r[31],0)&0x000000FFu; // 803D394C
  c->r[4]=((c->r[0])&0x20)?0u:(c->r[3]<<((c->r[0])&31)); // 803D3950
  c->r[0]=c->r[30]&c->r[4]; cr0(c,c->r[0]); // 803D3954
  if (crb(c,2)) { goto L_803D3984; } // 803D3958
  c->r[0]=rotl(c->r[31],2)&0x000003FCu; // 803D395C
  c->r[30]=c->r[30]&~c->r[4]; // 803D3960
  c->r[4]=R32(c->r[7]+c->r[0]); // 803D3964
  c->r[0]=rotl(c->r[4],0)&0x00001FE0u; // 803D3968
  c->r[6]=rotl(c->r[4],29)&0x000003FCu; // 803D396C
  c->r[0]=c->r[4]-c->r[0]; // 803D3970
  c->r[4]=R32(c->r[5]+c->r[6]); // 803D3974
  c->r[0]=((c->r[0])&0x20)?0u:(c->r[3]<<((c->r[0])&31)); // 803D3978
  c->r[0]=c->r[4]|c->r[0]; // 803D397C
  W32(c->r[5]+c->r[6],c->r[0]); // 803D3980
L_803D3984:;
  c->r[31]=c->r[31]+0x00000001u; // 803D3984
L_803D3988:;
  cmps(c,0,(int32_t)c->r[30],0); // 803D3988
  if (crb(c,2)) { goto L_803D399C; } // 803D398C
  c->r[0]=rotl(c->r[31],0)&0x000000FFu; // 803D3990
  cmpu(c,0,c->r[0],0x00000017u); // 803D3994
  if (crb(c,0)) { IRQCHK(c); goto L_803D394C; } // 803D3998
L_803D399C:;
  c->lr=0x803D39A0u; f_803CEF4C(c); // 803D399C
  c->r[3]=c->r[28]|c->r[28]; // 803D39A0
  c->r[8]=c->r[29]|c->r[29]; // 803D39A4
  c->r[7]=c->r[1]+0x00000008u; // 803D39A8
  c->r[4]=0u+0x00000000u; // 803D39AC
  c->r[5]=0u+0x00000000u; // 803D39B0
  c->r[6]=0u+0x00000000u; // 803D39B4
  c->lr=0x803D39BCu; f_803D8740(c); // 803D39B8
  c->r[28]=c->r[3]|c->r[3]; // 803D39BC
  c->lr=0x803D39C4u; f_803CEF50(c); // 803D39C0
  c->r[0]=rotl(c->r[28],0)&0x000000FFu; // 803D39C4
  c->r[11]=c->r[1]+0x00000030u; // 803D39C8
  c->r[0]=cntlz(c->r[0]); // 803D39CC
  c->r[3]=rotl(c->r[0],27)&0x000000FFu; // 803D39D0
  c->lr=0x803D39D8u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 803D39D4
  c->r[0]=R32(c->r[1]+0x00000034u); // 803D39D8
  c->lr=c->r[0]; // 803D39DC
  c->r[1]=c->r[1]+0x00000030u; // 803D39E0
  return; // 803D39E4
}

// BTA_DmRemoveDevice
void f_803D39E8(Ctx* __restrict c) {
  trace_call(0x803D39E8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803D39E8
  c->r[0]=c->lr; // 803D39EC
  W32(c->r[1]+0x00000014u,c->r[0]); // 803D39F0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 803D39F4
  c->r[31]=c->r[3]|c->r[3]; // 803D39F8
  c->lr=0x803D3A00u; f_803CEF4C(c); // 803D39FC
  c->r[3]=c->r[31]|c->r[31]; // 803D3A00
  c->lr=0x803D3A08u; f_803D88C8(c); // 803D3A04
  c->r[31]=c->r[3]|c->r[3]; // 803D3A08
  c->lr=0x803D3A10u; f_803CEF50(c); // 803D3A0C
  c->r[0]=rotl(c->r[31],0)&0x000000FFu; // 803D3A10
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 803D3A14
  c->r[0]=cntlz(c->r[0]); // 803D3A18
  c->r[3]=rotl(c->r[0],27)&0x000000FFu; // 803D3A1C
  c->r[0]=R32(c->r[1]+0x00000014u); // 803D3A20
  c->lr=c->r[0]; // 803D3A24
  c->r[1]=c->r[1]+0x00000010u; // 803D3A28
  return; // 803D3A2C
}

// fn_803D3A30
void f_803D3A30(Ctx* __restrict c) {
  trace_call(0x803D3A30u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803D3A30
  c->r[0]=c->lr; // 803D3A34
  c->r[3]=0u+0x00000008u; // 803D3A38
  W32(c->r[1]+0x00000014u,c->r[0]); // 803D3A3C
  c->lr=0x803D3A44u; f_803CD954(c); // 803D3A40
  cmps(c,0,(int32_t)c->r[3],0); // 803D3A44
  if (crb(c,2)) { goto L_803D3A58; } // 803D3A48
  c->r[0]=0u+0x0000010Cu; // 803D3A4C
  W16(c->r[3]+0x00000000u,c->r[0]); // 803D3A50
  c->lr=0x803D3A58u; f_803D0FDC(c); // 803D3A54
L_803D3A58:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 803D3A58
  c->lr=c->r[0]; // 803D3A5C
  c->r[1]=c->r[1]+0x00000010u; // 803D3A60
  return; // 803D3A64
}

// bta_dm_sm_execute
void f_803D3A68(Ctx* __restrict c) {
  trace_call(0x803D3A68u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803D3A68
  c->r[0]=c->lr; // 803D3A6C
  W32(c->r[1]+0x00000024u,c->r[0]); // 803D3A70
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 803D3A74
  c->r[31]=0u+0x806A0000u; // 803D3A78
  c->r[31]=c->r[31]+0x00004670u; // 803D3A7C
  W32(c->r[1]+0x00000018u,c->r[30]); // 803D3A80
  c->r[30]=0u+0x806A0000u; // 803D3A84
  c->r[30]=c->r[30]+0x000046A4u; // 803D3A88
  W32(c->r[1]+0x00000014u,c->r[29]); // 803D3A8C
  c->r[29]=0u+0x00000000u; // 803D3A90
  W32(c->r[1]+0x00000010u,c->r[28]); // 803D3A94
  c->r[28]=c->r[3]|c->r[3]; // 803D3A98
L_803D3A9C:;
  c->r[3]=R16(c->r[28]+0x00000000u); // 803D3A9C
  c->r[0]=c->r[29]+c->r[30]; // 803D3AA0
  c->r[4]=rotl(c->r[3],0)&0x000000FFu; // 803D3AA4
  c->r[3]=rotl(c->r[3],2)&0x000003FCu; // 803D3AA8
  c->r[3]=c->r[3]-c->r[4]; // 803D3AAC
  c->r[0]=R8(c->r[3]+c->r[0]); // 803D3AB0
  cmpu(c,0,c->r[0],0x0000000Du); // 803D3AB4
  if (crb(c,2)) { goto L_803D3ADC; } // 803D3AB8
  c->r[0]=rotl(c->r[0],2)&0x000003FCu; // 803D3ABC
  c->r[3]=c->r[28]|c->r[28]; // 803D3AC0
  c->r[12]=R32(c->r[31]+c->r[0]); // 803D3AC4
  c->ctr=c->r[12]; // 803D3AC8
  if (true) { c->lr=0x803D3AD0u; dispatch(c,c->ctr); } // 803D3ACC
  c->r[29]=c->r[29]+0x00000001u; // 803D3AD0
  cmps(c,0,(int32_t)c->r[29],2); // 803D3AD4
  if (crb(c,0)) { IRQCHK(c); goto L_803D3A9C; } // 803D3AD8
L_803D3ADC:;
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 803D3ADC
  c->r[3]=0u+0x00000001u; // 803D3AE0
  c->r[30]=R32(c->r[1]+0x00000018u); // 803D3AE4
  c->r[29]=R32(c->r[1]+0x00000014u); // 803D3AE8
  c->r[28]=R32(c->r[1]+0x00000010u); // 803D3AEC
  c->r[0]=R32(c->r[1]+0x00000024u); // 803D3AF0
  c->lr=c->r[0]; // 803D3AF4
  c->r[1]=c->r[1]+0x00000020u; // 803D3AF8
  return; // 803D3AFC
}

// bta_dm_search_sm_execute
void f_803D3B00(Ctx* __restrict c) {
  trace_call(0x803D3B00u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803D3B00
  c->r[0]=c->lr; // 803D3B04
  c->r[7]=0u+0x807B0000u; // 803D3B08
  c->r[5]=0u+0x806A0000u; // 803D3B0C
  W32(c->r[1]+0x00000024u,c->r[0]); // 803D3B10
  c->r[7]=c->r[7]+0x000063B8u; // 803D3B14
  c->r[5]=c->r[5]+0x00004788u; // 803D3B18
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 803D3B1C
  c->r[31]=0u+0x806A0000u; // 803D3B20
  c->r[31]=c->r[31]+0x000046D0u; // 803D3B24
  W32(c->r[1]+0x00000018u,c->r[30]); // 803D3B28
  W32(c->r[1]+0x00000014u,c->r[29]); // 803D3B2C
  c->r[29]=0u+0x00000000u; // 803D3B30
  W32(c->r[1]+0x00000010u,c->r[28]); // 803D3B34
  c->r[28]=c->r[3]|c->r[3]; // 803D3B38
  c->r[6]=R16(c->r[7]+0x00000018u); // 803D3B3C
  c->r[0]=R16(c->r[3]+0x00000000u); // 803D3B40
  c->r[6]=rotl(c->r[6],2)&0xFFFFFFFCu; // 803D3B44
  c->r[4]=rotl(c->r[0],0)&0x000000FFu; // 803D3B48
  c->r[0]=rotl(c->r[0],2)&0x000003FCu; // 803D3B4C
  c->r[30]=R32(c->r[5]+c->r[6]); // 803D3B50
  c->r[0]=c->r[0]-c->r[4]; // 803D3B54
  c->r[3]=c->r[30]+c->r[0]; // 803D3B58
  c->r[0]=R8(c->r[3]+0x00000002u); // 803D3B5C
  W16(c->r[7]+0x00000018u,c->r[0]); // 803D3B60
L_803D3B64:;
  c->r[3]=R16(c->r[28]+0x00000000u); // 803D3B64
  c->r[0]=c->r[29]+c->r[30]; // 803D3B68
  c->r[4]=rotl(c->r[3],0)&0x000000FFu; // 803D3B6C
  c->r[3]=rotl(c->r[3],2)&0x000003FCu; // 803D3B70
  c->r[3]=c->r[3]-c->r[4]; // 803D3B74
  c->r[0]=R8(c->r[3]+c->r[0]); // 803D3B78
  cmpu(c,0,c->r[0],0x00000012u); // 803D3B7C
  if (crb(c,2)) { goto L_803D3BA4; } // 803D3B80
  c->r[0]=rotl(c->r[0],2)&0x000003FCu; // 803D3B84
  c->r[3]=c->r[28]|c->r[28]; // 803D3B88
  c->r[12]=R32(c->r[31]+c->r[0]); // 803D3B8C
  c->ctr=c->r[12]; // 803D3B90
  if (true) { c->lr=0x803D3B98u; dispatch(c,c->ctr); } // 803D3B94
  c->r[29]=c->r[29]+0x00000001u; // 803D3B98
  cmps(c,0,(int32_t)c->r[29],2); // 803D3B9C
  if (crb(c,0)) { IRQCHK(c); goto L_803D3B64; } // 803D3BA0
L_803D3BA4:;
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 803D3BA4
  c->r[3]=0u+0x00000001u; // 803D3BA8
  c->r[30]=R32(c->r[1]+0x00000018u); // 803D3BAC
  c->r[29]=R32(c->r[1]+0x00000014u); // 803D3BB0
  c->r[28]=R32(c->r[1]+0x00000010u); // 803D3BB4
  c->r[0]=R32(c->r[1]+0x00000024u); // 803D3BB8
  c->lr=c->r[0]; // 803D3BBC
  c->r[1]=c->r[1]+0x00000020u; // 803D3BC0
  return; // 803D3BC4
}

// bta_dm_init_pm
void f_803D3BC8(Ctx* __restrict c) {
  trace_call(0x803D3BC8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803D3BC8
  c->r[0]=c->lr; // 803D3BCC
  c->r[3]=0u+0x807B0000u; // 803D3BD0
  c->r[4]=0u+0x00000000u; // 803D3BD4
  W32(c->r[1]+0x00000014u,c->r[0]); // 803D3BD8
  c->r[3]=c->r[3]+0x00006538u; // 803D3BDC
  c->r[5]=0u+0x0000002Eu; // 803D3BE0
  c->lr=0x803D3BE8u; f_800043EC(c); // 803D3BE4
  c->r[3]=R32(c->r[13]+0xFFFFA098u); // 803D3BE8
  c->r[0]=R8(c->r[3]+0x00000001u); // 803D3BEC
  cmps(c,0,(int32_t)c->r[0],0); // 803D3BF0
  if (crb(c,2)) { goto L_803D3C20; } // 803D3BF4
  c->r[3]=0u+0x803D0000u; // 803D3BF8
  c->r[3]=c->r[3]+0x00003C48u; // 803D3BFC
  c->lr=0x803D3C04u; f_803D0C24(c); // 803D3C00
  c->r[4]=0u+0x807B0000u; // 803D3C04
  c->r[5]=0u+0x803D0000u; // 803D3C08
  c->r[4]=c->r[4]+0x00006434u; // 803D3C0C
  c->r[3]=0u+0x00000003u; // 803D3C10
  c->r[4]=c->r[4]+0x00000095u; // 803D3C14
  c->r[5]=c->r[5]+0x00004348u; // 803D3C18
  c->lr=0x803D3C20u; f_803DC3BC(c); // 803D3C1C
L_803D3C20:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 803D3C20
  c->lr=c->r[0]; // 803D3C24
  c->r[1]=c->r[1]+0x00000010u; // 803D3C28
  return; // 803D3C2C
}

// bta_dm_disable_pm
void f_803D3C30(Ctx* __restrict c) {
  trace_call(0x803D3C30u);
  c->r[4]=0u+0x807B0000u; // 803D3C30
  c->r[3]=0u+0x00000004u; // 803D3C34
  c->r[4]=c->r[4]+0x00006434u; // 803D3C38
  c->r[5]=0u+0x00000000u; // 803D3C3C
  c->r[4]=c->r[4]+0x00000095u; // 803D3C40
  f_803DC3BC(c); return; // 803D3C44
}

// bta_dm_pm_cback
void f_803D3C48(Ctx* __restrict c) {
  trace_call(0x803D3C48u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803D3C48
  c->r[0]=c->lr; // 803D3C4C
  W32(c->r[1]+0x00000044u,c->r[0]); // 803D3C50
  c->r[11]=c->r[1]+0x00000040u; // 803D3C54
  c->lr=0x803D3C5Cu; { W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 803D3C58
  c->r[25]=c->r[3]|c->r[3]; // 803D3C5C
  c->r[26]=c->r[4]|c->r[4]; // 803D3C60
  c->r[27]=c->r[5]|c->r[5]; // 803D3C64
  c->r[28]=c->r[6]|c->r[6]; // 803D3C68
  c->r[3]=c->r[1]+0x0000000Cu; // 803D3C6C
  c->lr=0x803D3C74u; f_803D9E54(c); // 803D3C70
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 803D3C74
  if (!crb(c,2)) { goto L_803D3CE4; } // 803D3C78
  c->r[0]=R16(c->r[1]+0x00000012u); // 803D3C7C
  cmpu(c,0,c->r[0],0x0000000Fu); // 803D3C80
  if (!crb(c,2)) { goto L_803D3CE4; } // 803D3C84
  c->r[0]=R8(c->r[1]+0x0000000Cu); // 803D3C88
  cmpu(c,0,c->r[0],0x00000003u); // 803D3C8C
  if (!crb(c,0)) { goto L_803D3CE4; } // 803D3C90
  cmpu(c,0,c->r[25],0x00000004u); // 803D3C94
  if (!crb(c,2)) { goto L_803D3CC0; } // 803D3C98
  c->r[5]=0u+0x806A0000u; // 803D3C9C
  c->r[3]=c->r[28]|c->r[28]; // 803D3CA0
  c->r[5]=c->r[5]+0x00004528u; // 803D3CA4
  c->r[4]=c->r[1]+0x00000008u; // 803D3CA8
  c->r[0]=R16(c->r[5]+0x00000004u); // 803D3CAC
  c->r[0]=c->r[0]&0x0000000Bu; cr0(c,c->r[0]); // 803D3CB0
  W16(c->r[1]+0x00000008u,c->r[0]); // 803D3CB4
  c->lr=0x803D3CBCu; f_803D7264(c); // 803D3CB8
  goto L_803D3CE4; // 803D3CBC
L_803D3CC0:;
  cmpu(c,0,c->r[25],0x00000005u); // 803D3CC0
  if (!crb(c,2)) { goto L_803D3CE4; } // 803D3CC4
  c->r[5]=0u+0x806A0000u; // 803D3CC8
  c->r[3]=c->r[28]|c->r[28]; // 803D3CCC
  c->r[5]=c->r[5]+0x00004528u; // 803D3CD0
  c->r[4]=c->r[1]+0x00000008u; // 803D3CD4
  c->r[0]=R16(c->r[5]+0x00000004u); // 803D3CD8
  W16(c->r[1]+0x00000008u,c->r[0]); // 803D3CDC
  c->lr=0x803D3CE4u; f_803D7264(c); // 803D3CE0
L_803D3CE4:;
  c->r[5]=R32(c->r[13]+0xFFFFA098u); // 803D3CE4
  c->r[30]=0u+0x00000001u; // 803D3CE8
  c->r[4]=R8(c->r[5]+0x00000001u); // 803D3CEC
  goto L_803D3D28; // 803D3CF0
L_803D3CF4:;
  c->r[3]=rotl(c->r[30],0)&0x000000FFu; // 803D3CF4
  c->r[0]=rotl(c->r[30],2)&0x000003FCu; // 803D3CF8
  c->r[0]=c->r[0]-c->r[3]; // 803D3CFC
  c->r[3]=c->r[5]+c->r[0]; // 803D3D00
  c->r[0]=R8(c->r[5]+c->r[0]); // 803D3D04
  cmpu(c,0,c->r[26],c->r[0]); // 803D3D08
  if (!crb(c,2)) { goto L_803D3D24; } // 803D3D0C
  c->r[0]=R8(c->r[3]+0x00000001u); // 803D3D10
  cmpu(c,0,c->r[0],0x000000FFu); // 803D3D14
  if (crb(c,2)) { goto L_803D3D34; } // 803D3D18
  cmpu(c,0,c->r[27],c->r[0]); // 803D3D1C
  if (crb(c,2)) { goto L_803D3D34; } // 803D3D20
L_803D3D24:;
  c->r[30]=c->r[30]+0x00000001u; // 803D3D24
L_803D3D28:;
  c->r[0]=rotl(c->r[30],0)&0x000000FFu; // 803D3D28
  cmpu(c,0,c->r[0],c->r[4]); // 803D3D2C
  if (!crb(c,1)) { IRQCHK(c); goto L_803D3CF4; } // 803D3D30
L_803D3D34:;
  c->r[0]=R8(c->r[5]+0x00000001u); // 803D3D34
  c->r[3]=rotl(c->r[30],0)&0x000000FFu; // 803D3D38
  cmpu(c,0,c->r[3],c->r[0]); // 803D3D3C
  if (crb(c,1)) { goto L_803D3FB0; } // 803D3D40
  c->r[23]=0u+0x807B0000u; // 803D3D44
  c->r[31]=0u+0x00000000u; // 803D3D48
  c->r[23]=c->r[23]+0x00006434u; // 803D3D4C
L_803D3D50:;
  c->r[29]=rotl(c->r[31],5)&0x00001FE0u; // 803D3D50
  c->r[24]=c->r[23]+c->r[29]; // 803D3D54
  c->r[0]=R8(c->r[24]+0x000000B6u); // 803D3D58
  cmps(c,0,(int32_t)c->r[0],0); // 803D3D5C
  if (crb(c,2)) { goto L_803D3D90; } // 803D3D60
  c->r[4]=c->r[28]|c->r[28]; // 803D3D64
  c->r[3]=c->r[24]+0x000000B0u; // 803D3D68
  c->lr=0x803D3D70u; f_803D0B64(c); // 803D3D6C
  cmps(c,0,(int32_t)c->r[3],0); // 803D3D70
  if (!crb(c,2)) { goto L_803D3D90; } // 803D3D74
  c->r[3]=c->r[24]|c->r[24]; // 803D3D78
  c->r[3]=c->r[3]+0x00000098u; // 803D3D7C
  c->lr=0x803D3D84u; f_803D1018(c); // 803D3D80
  c->r[0]=0u+0x00000000u; // 803D3D84
  W8(c->r[24]+0x000000B6u,c->r[0]); // 803D3D88
  goto L_803D3D9C; // 803D3D8C
L_803D3D90:;
  c->r[31]=c->r[31]+0x00000001u; // 803D3D90
  cmpu(c,0,c->r[31],0x00000003u); // 803D3D94
  if (crb(c,0)) { IRQCHK(c); goto L_803D3D50; } // 803D3D98
L_803D3D9C:;
  c->r[4]=rotl(c->r[30],0)&0x000000FFu; // 803D3D9C
  c->r[3]=rotl(c->r[30],2)&0x000003FCu; // 803D3DA0
  c->r[30]=c->r[3]-c->r[4]; // 803D3DA4
  c->r[0]=R32(c->r[13]+0xFFFFA098u); // 803D3DA8
  c->r[4]=R32(c->r[13]+0xFFFFA09Cu); // 803D3DAC
  c->r[31]=rotl(c->r[25],3)&0x000007F8u; // 803D3DB0
  c->r[3]=c->r[0]+c->r[30]; // 803D3DB4
  c->r[0]=R8(c->r[3]+0x00000002u); // 803D3DB8
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)74); // 803D3DBC
  c->r[0]=c->r[4]+c->r[0]; // 803D3DC0
  c->r[3]=c->r[0]+c->r[31]; // 803D3DC4
  c->r[0]=R8(c->r[3]+0x00000002u); // 803D3DC8
  cmps(c,0,(int32_t)c->r[0],0); // 803D3DCC
  if (crb(c,2)) { goto L_803D3FB0; } // 803D3DD0
  c->r[23]=0u+0x807B0000u; // 803D3DD4
  c->r[29]=0u+0x00000000u; // 803D3DD8
  c->r[24]=c->r[23]+0x00006538u; // 803D3DDC
  goto L_803D3E24; // 803D3DE0
L_803D3DE4:;
  c->r[3]=rotl(c->r[29],0)&0x000000FFu; // 803D3DE4
  c->r[0]=rotl(c->r[29],3)&0x000007F8u; // 803D3DE8
  c->r[0]=c->r[0]+c->r[3]; // 803D3DEC
  c->r[3]=c->r[24]+c->r[0]; // 803D3DF0
  c->r[0]=R8(c->r[3]+0x00000007u); // 803D3DF4
  cmpu(c,0,c->r[26],c->r[0]); // 803D3DF8
  if (!crb(c,2)) { goto L_803D3E20; } // 803D3DFC
  c->r[0]=R8(c->r[3]+0x00000008u); // 803D3E00
  cmpu(c,0,c->r[27],c->r[0]); // 803D3E04
  if (!crb(c,2)) { goto L_803D3E20; } // 803D3E08
  c->r[4]=c->r[28]|c->r[28]; // 803D3E0C
  c->r[3]=c->r[3]+0x00000001u; // 803D3E10
  c->lr=0x803D3E18u; f_803D0B64(c); // 803D3E14
  cmps(c,0,(int32_t)c->r[3],0); // 803D3E18
  if (crb(c,2)) { goto L_803D3E34; } // 803D3E1C
L_803D3E20:;
  c->r[29]=c->r[29]+0x00000001u; // 803D3E20
L_803D3E24:;
  c->r[0]=R8(c->r[23]+0x00006538u); // 803D3E24
  c->r[3]=rotl(c->r[29],0)&0x000000FFu; // 803D3E28
  cmpu(c,0,c->r[3],c->r[0]); // 803D3E2C
  if (crb(c,0)) { IRQCHK(c); goto L_803D3DE4; } // 803D3E30
L_803D3E34:;
  c->r[0]=R32(c->r[13]+0xFFFFA098u); // 803D3E34
  c->r[4]=R32(c->r[13]+0xFFFFA09Cu); // 803D3E38
  c->r[3]=c->r[0]+c->r[30]; // 803D3E3C
  c->r[0]=R8(c->r[3]+0x00000002u); // 803D3E40
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)74); // 803D3E44
  c->r[0]=c->r[4]+c->r[0]; // 803D3E48
  c->r[3]=c->r[0]+c->r[31]; // 803D3E4C
  c->r[0]=R8(c->r[3]+0x00000002u); // 803D3E50
  cmpu(c,0,c->r[0],0x00000010u); // 803D3E54
  if (!crb(c,2)) { goto L_803D3EC8; } // 803D3E58
  c->r[27]=0u+0x807B0000u; // 803D3E5C
  c->r[3]=rotl(c->r[29],0)&0x000000FFu; // 803D3E60
  c->r[0]=R8(c->r[27]+0x00006538u); // 803D3E64
  cmpu(c,0,c->r[3],c->r[0]); // 803D3E68
  if (crb(c,2)) { goto L_803D3F34; } // 803D3E6C
  c->r[26]=c->r[27]+0x00006538u; // 803D3E70
  goto L_803D3EAC; // 803D3E74
L_803D3E78:;
  c->r[6]=rotl(c->r[29],0)&0x000000FFu; // 803D3E78
  c->r[4]=rotl(c->r[29],3)&0x000007F8u; // 803D3E7C
  c->r[3]=c->r[6]+0x00000001u; // 803D3E80
  c->r[5]=0u+0x00000009u; // 803D3E84
  c->r[0]=rotl(c->r[3],3)&0xFFFFFFF8u; // 803D3E88
  c->r[4]=c->r[4]+c->r[6]; // 803D3E8C
  c->r[0]=c->r[0]+c->r[3]; // 803D3E90
  c->r[3]=c->r[26]+c->r[4]; // 803D3E94
  c->r[4]=c->r[26]+c->r[0]; // 803D3E98
  c->r[3]=c->r[3]+0x00000001u; // 803D3E9C
  c->r[4]=c->r[4]+0x00000001u; // 803D3EA0
  c->lr=0x803D3EA8u; f_802DC484(c); // 803D3EA4
  c->r[29]=c->r[29]+0x00000001u; // 803D3EA8
L_803D3EAC:;
  c->r[3]=R8(c->r[27]+0x00006538u); // 803D3EAC
  c->r[0]=rotl(c->r[29],0)&0x000000FFu; // 803D3EB0
  cmpu(c,0,c->r[0],c->r[3]); // 803D3EB4
  if (crb(c,0)) { IRQCHK(c); goto L_803D3E78; } // 803D3EB8
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 803D3EBC
  W8(c->r[27]+0x00006538u,c->r[0]); // 803D3EC0
  goto L_803D3F34; // 803D3EC4
L_803D3EC8:;
  c->r[30]=0u+0x807B0000u; // 803D3EC8
  c->r[4]=rotl(c->r[29],0)&0x000000FFu; // 803D3ECC
  c->r[0]=R8(c->r[30]+0x00006538u); // 803D3ED0
  cmpu(c,0,c->r[4],c->r[0]); // 803D3ED4
  if (!crb(c,2)) { goto L_803D3F34; } // 803D3ED8
  cmpu(c,0,c->r[0],0x00000005u); // 803D3EDC
  if (!crb(c,2)) { goto L_803D3F04; } // 803D3EE0
  c->r[0]=R8(c->r[13]+0xFFFFE318u); // 803D3EE4
  cmpu(c,0,c->r[0],0x00000002u); // 803D3EE8
  if (crb(c,0)) { goto L_803D3FB0; } // 803D3EEC
  c->r[4]=0u+0x80710000u; // 803D3EF0
  c->r[3]=0u+0x00000501u; // 803D3EF4
  c->r[4]=c->r[4]+0xFFFFAC20u; // 803D3EF8
  c->lr=0x803D3F00u; f_803D04E0(c); // 803D3EFC
  goto L_803D3FB0; // 803D3F00
L_803D3F04:;
  c->r[3]=rotl(c->r[29],3)&0x000007F8u; // 803D3F04
  c->r[0]=c->r[30]+0x00006538u; // 803D3F08
  c->r[3]=c->r[3]+c->r[4]; // 803D3F0C
  c->r[4]=c->r[28]|c->r[28]; // 803D3F10
  c->r[5]=c->r[0]+c->r[3]; // 803D3F14
  W8(c->r[5]+0x00000007u,c->r[26]); // 803D3F18
  c->r[3]=c->r[5]+0x00000001u; // 803D3F1C
  W8(c->r[5]+0x00000008u,c->r[27]); // 803D3F20
  c->lr=0x803D3F28u; f_803D0B30(c); // 803D3F24
  c->r[3]=R8(c->r[30]+0x00006538u); // 803D3F28
  c->r[0]=c->r[3]+0x00000001u; // 803D3F2C
  W8(c->r[30]+0x00006538u,c->r[0]); // 803D3F30
L_803D3F34:;
  c->r[3]=0u+0x807B0000u; // 803D3F34
  c->r[24]=0u+0x00000000u; // 803D3F38
  c->r[26]=c->r[3]+0x00006434u; // 803D3F3C
  goto L_803D3F78; // 803D3F40
L_803D3F44:;
  c->r[0]=rotl(c->r[24],0)&0x000000FFu; // 803D3F44
  c->r[4]=c->r[28]|c->r[28]; // 803D3F48
  c->r[23]=(uint32_t)((int32_t)c->r[0]*(int32_t)11); // 803D3F4C
  c->r[3]=c->r[26]+c->r[23]; // 803D3F50
  c->lr=0x803D3F58u; f_803D0B64(c); // 803D3F54
  cmps(c,0,(int32_t)c->r[3],0); // 803D3F58
  if (!crb(c,2)) { goto L_803D3F74; } // 803D3F5C
  c->r[3]=c->r[26]+c->r[23]; // 803D3F60
  c->r[0]=0u+0x00000000u; // 803D3F64
  W8(c->r[3]+0x00000009u,c->r[0]); // 803D3F68
  W8(c->r[3]+0x0000000Au,c->r[0]); // 803D3F6C
  goto L_803D3F88; // 803D3F70
L_803D3F74:;
  c->r[24]=c->r[24]+0x00000001u; // 803D3F74
L_803D3F78:;
  c->r[0]=R8(c->r[26]+0x0000004Du); // 803D3F78
  c->r[3]=rotl(c->r[24],0)&0x000000FFu; // 803D3F7C
  cmpu(c,0,c->r[3],c->r[0]); // 803D3F80
  if (crb(c,0)) { IRQCHK(c); goto L_803D3F44; } // 803D3F84
L_803D3F88:;
  c->r[6]=0u+0x807B0000u; // 803D3F88
  c->r[5]=rotl(c->r[29],0)&0x000000FFu; // 803D3F8C
  c->r[0]=rotl(c->r[29],3)&0x000007F8u; // 803D3F90
  c->r[3]=c->r[28]|c->r[28]; // 803D3F94
  c->r[6]=c->r[6]+0x00006538u; // 803D3F98
  c->r[4]=0u+0x00000000u; // 803D3F9C
  c->r[0]=c->r[0]+c->r[5]; // 803D3FA0
  c->r[5]=c->r[6]+c->r[0]; // 803D3FA4
  W8(c->r[5]+0x00000009u,c->r[25]); // 803D3FA8
  c->lr=0x803D3FB0u; f_803D3FC8(c); // 803D3FAC
L_803D3FB0:;
  c->r[11]=c->r[1]+0x00000040u; // 803D3FB0
  c->lr=0x803D3FB8u; { c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 803D3FB4
  c->r[0]=R32(c->r[1]+0x00000044u); // 803D3FB8
  c->lr=c->r[0]; // 803D3FBC
  c->r[1]=c->r[1]+0x00000040u; // 803D3FC0
  return; // 803D3FC4
}

// bta_dm_pm_set_mode
void f_803D3FC8(Ctx* __restrict c) {
  trace_call(0x803D3FC8u);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803D3FC8
  c->r[0]=c->lr; // 803D3FCC
  W32(c->r[1]+0x00000054u,c->r[0]); // 803D3FD0
  c->r[11]=c->r[1]+0x00000050u; // 803D3FD4
  c->lr=0x803D3FDCu; { W32(c->r[11]+0xFFFFFFD0u,c->r[20]); W32(c->r[11]+0xFFFFFFD4u,c->r[21]); W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 803D3FD8
  c->r[5]=0u+0x807B0000u; // 803D3FDC
  c->r[20]=c->r[3]|c->r[3]; // 803D3FE0
  c->r[28]=c->r[5]+0x00006434u; // 803D3FE4
  c->r[21]=c->r[4]|c->r[4]; // 803D3FE8
  c->r[0]=R8(c->r[28]+0x0000004Du); // 803D3FEC
  c->r[27]=0u+0x00000000u; // 803D3FF0
  c->r[26]=0u+0x00000000u; // 803D3FF4
  c->r[25]=0u+0x00000000u; // 803D3FF8
  cmps(c,0,(int32_t)c->r[0],0); // 803D3FFC
  c->r[24]=0u+0x00000000u; // 803D4000
  c->r[23]=0u+0x00000000u; // 803D4004
  c->r[22]=0u+0x00000000u; // 803D4008
  if (crb(c,2)) { goto L_803D4330; } // 803D400C
  c->r[30]=0u+0x00000000u; // 803D4010
  goto L_803D4044; // 803D4014
L_803D4018:;
  c->r[0]=rotl(c->r[30],0)&0x000000FFu; // 803D4018
  c->r[4]=c->r[20]|c->r[20]; // 803D401C
  c->r[29]=(uint32_t)((int32_t)c->r[0]*(int32_t)11); // 803D4020
  c->r[3]=c->r[28]+c->r[29]; // 803D4024
  c->lr=0x803D402Cu; f_803D0B64(c); // 803D4028
  cmps(c,0,(int32_t)c->r[3],0); // 803D402C
  if (!crb(c,2)) { goto L_803D4040; } // 803D4030
  c->r[24]=c->r[28]+c->r[29]; // 803D4034
  c->r[25]=R8(c->r[24]+0x0000000Au); // 803D4038
  goto L_803D4054; // 803D403C
L_803D4040:;
  c->r[30]=c->r[30]+0x00000001u; // 803D4040
L_803D4044:;
  c->r[0]=R8(c->r[28]+0x0000004Du); // 803D4044
  c->r[3]=rotl(c->r[30],0)&0x000000FFu; // 803D4048
  cmpu(c,0,c->r[3],c->r[0]); // 803D404C
  if (crb(c,0)) { IRQCHK(c); goto L_803D4018; } // 803D4050
L_803D4054:;
  cmps(c,0,(int32_t)c->r[24],0); // 803D4054
  if (crb(c,2)) { goto L_803D4330; } // 803D4058
  c->r[30]=0u+0x807B0000u; // 803D405C
  c->r[28]=0u+0x00000000u; // 803D4060
  c->r[31]=c->r[30]+0x00006538u; // 803D4064
  goto L_803D4198; // 803D4068
L_803D406C:;
  c->r[3]=rotl(c->r[28],0)&0x000000FFu; // 803D406C
  c->r[0]=rotl(c->r[28],3)&0x000007F8u; // 803D4070
  c->r[29]=c->r[0]+c->r[3]; // 803D4074
  c->r[4]=c->r[20]|c->r[20]; // 803D4078
  c->r[3]=c->r[31]+c->r[29]; // 803D407C
  c->r[3]=c->r[3]+0x00000001u; // 803D4080
  c->lr=0x803D4088u; f_803D0B64(c); // 803D4084
  cmps(c,0,(int32_t)c->r[3],0); // 803D4088
  if (!crb(c,2)) { goto L_803D4194; } // 803D408C
  c->r[7]=R32(c->r[13]+0xFFFFA098u); // 803D4090
  c->r[8]=c->r[31]+c->r[29]; // 803D4094
  c->r[3]=R8(c->r[8]+0x00000008u); // 803D4098
  c->r[9]=0u+0x00000001u; // 803D409C
  c->r[6]=R8(c->r[7]+0x00000001u); // 803D40A0
  c->r[4]=R8(c->r[8]+0x00000007u); // 803D40A4
  goto L_803D40E0; // 803D40A8
L_803D40AC:;
  c->r[5]=rotl(c->r[9],0)&0x000000FFu; // 803D40AC
  c->r[0]=rotl(c->r[9],2)&0x000003FCu; // 803D40B0
  c->r[0]=c->r[0]-c->r[5]; // 803D40B4
  c->r[5]=c->r[7]+c->r[0]; // 803D40B8
  c->r[0]=R8(c->r[7]+c->r[0]); // 803D40BC
  cmpu(c,0,c->r[0],c->r[4]); // 803D40C0
  if (!crb(c,2)) { goto L_803D40DC; } // 803D40C4
  c->r[0]=R8(c->r[5]+0x00000001u); // 803D40C8
  cmpu(c,0,c->r[0],0x000000FFu); // 803D40CC
  if (crb(c,2)) { goto L_803D40EC; } // 803D40D0
  cmpu(c,0,c->r[0],c->r[3]); // 803D40D4
  if (crb(c,2)) { goto L_803D40EC; } // 803D40D8
L_803D40DC:;
  c->r[9]=c->r[9]+0x00000001u; // 803D40DC
L_803D40E0:;
  c->r[0]=rotl(c->r[9],0)&0x000000FFu; // 803D40E0
  cmpu(c,0,c->r[0],c->r[6]); // 803D40E4
  if (!crb(c,1)) { IRQCHK(c); goto L_803D40AC; } // 803D40E8
L_803D40EC:;
  c->r[3]=rotl(c->r[9],0)&0x000000FFu; // 803D40EC
  c->r[0]=rotl(c->r[9],2)&0x000003FCu; // 803D40F0
  c->r[3]=c->r[0]-c->r[3]; // 803D40F4
  c->r[0]=R8(c->r[8]+0x00000009u); // 803D40F8
  c->r[4]=c->r[7]+c->r[3]; // 803D40FC
  c->r[3]=R32(c->r[13]+0xFFFFA09Cu); // 803D4100
  c->r[4]=R8(c->r[4]+0x00000002u); // 803D4104
  c->r[0]=rotl(c->r[0],3)&0xFFFFFFF8u; // 803D4108
  c->r[4]=(uint32_t)((int32_t)c->r[4]*(int32_t)74); // 803D410C
  c->r[5]=c->r[3]+c->r[4]; // 803D4110
  c->r[3]=c->r[5]+c->r[0]; // 803D4114
  c->r[0]=R8(c->r[5]+0x00000000u); // 803D4118
  c->r[4]=R8(c->r[3]+0x00000002u); // 803D411C
  c->r[23]=c->r[23]|c->r[0]; // 803D4120
  c->r[0]=c->r[25]&c->r[4]; cr0(c,c->r[0]); // 803D4124
  if (!crb(c,2)) { goto L_803D415C; } // 803D4128
  c->r[3]=c->r[31]+c->r[29]; // 803D412C
  c->r[0]=rotl(c->r[27],0)&0x000000FFu; // 803D4130
  c->r[3]=R8(c->r[3]+0x00000009u); // 803D4134
  c->r[3]=rotl(c->r[3],3)&0xFFFFFFF8u; // 803D4138
  c->r[5]=c->r[5]+c->r[3]; // 803D413C
  c->r[3]=R8(c->r[5]+0x00000002u); // 803D4140
  cmpu(c,0,c->r[3],c->r[0]); // 803D4144
  c->r[22]=c->r[22]|c->r[3]; // 803D4148
  if (!crb(c,1)) { goto L_803D4194; } // 803D414C
  c->r[26]=R16(c->r[5]+0x00000004u); // 803D4150
  c->r[27]=c->r[4]|c->r[4]; // 803D4154
  goto L_803D4194; // 803D4158
L_803D415C:;
  c->r[3]=R8(c->r[3]+0x00000006u); // 803D415C
  c->r[0]=c->r[25]&c->r[3]; cr0(c,c->r[0]); // 803D4160
  if (!crb(c,2)) { goto L_803D4194; } // 803D4164
  c->r[4]=c->r[31]+c->r[29]; // 803D4168
  c->r[0]=rotl(c->r[27],0)&0x000000FFu; // 803D416C
  c->r[4]=R8(c->r[4]+0x00000009u); // 803D4170
  c->r[4]=rotl(c->r[4],3)&0xFFFFFFF8u; // 803D4174
  c->r[5]=c->r[5]+c->r[4]; // 803D4178
  c->r[4]=R8(c->r[5]+0x00000006u); // 803D417C
  cmpu(c,0,c->r[4],c->r[0]); // 803D4180
  c->r[22]=c->r[22]|c->r[4]; // 803D4184
  if (!crb(c,1)) { goto L_803D4194; } // 803D4188
  c->r[27]=c->r[3]|c->r[3]; // 803D418C
  c->r[26]=R16(c->r[5]+0x00000008u); // 803D4190
L_803D4194:;
  c->r[28]=c->r[28]+0x00000001u; // 803D4194
L_803D4198:;
  c->r[0]=R8(c->r[30]+0x00006538u); // 803D4198
  c->r[3]=rotl(c->r[28],0)&0x000000FFu; // 803D419C
  cmpu(c,0,c->r[3],c->r[0]); // 803D41A0
  if (crb(c,0)) { IRQCHK(c); goto L_803D406C; } // 803D41A4
  c->r[0]=rotl(c->r[27],0)&0x00000003u; cr0(c,c->r[0]); // 803D41A8
  if (crb(c,2)) { goto L_803D41D0; } // 803D41AC
  c->r[3]=rotl(c->r[23],0)&0x000000FFu; // 803D41B0
  c->r[0]=rotl(c->r[27],0)&0x000000FFu; // 803D41B4
  c->r[0]=c->r[3]&c->r[0]; cr0(c,c->r[0]); // 803D41B8
  if (!crb(c,2)) { goto L_803D41D0; } // 803D41BC
  c->r[0]=c->r[23]&c->r[22]; // 803D41C0
  c->r[27]=rotl(c->r[0],0)&0x00000003u; cr0(c,c->r[27]); // 803D41C4
  if (!crb(c,2)) { goto L_803D41D0; } // 803D41C8
  c->r[26]=0u+0x00000000u; // 803D41CC
L_803D41D0:;
  cmps(c,0,(int32_t)c->r[21],0); // 803D41D0
  if (!crb(c,2)) { goto L_803D4274; } // 803D41D4
  cmps(c,0,(int32_t)c->r[26],0); // 803D41D8
  if (crb(c,2)) { goto L_803D4274; } // 803D41DC
  c->r[21]=0u+0x807B0000u; // 803D41E0
  c->r[0]=0u+0x00000003u; // 803D41E4
  c->r[21]=c->r[21]+0x00006434u; // 803D41E8
  c->r[4]=0u+0x00000000u; // 803D41EC
  c->ctr=c->r[0]; // 803D41F0
L_803D41F4:;
  c->r[22]=rotl(c->r[4],5)&0x00001FE0u; // 803D41F4
  c->r[3]=c->r[21]+c->r[22]; // 803D41F8
  c->r[0]=R8(c->r[3]+0x000000B6u); // 803D41FC
  cmps(c,0,(int32_t)c->r[0],0); // 803D4200
  if (!crb(c,2)) { goto L_803D4240; } // 803D4204
  c->r[0]=0u+0x00000001u; // 803D4208
  c->r[4]=c->r[20]|c->r[20]; // 803D420C
  W8(c->r[3]+0x000000B6u,c->r[0]); // 803D4210
  c->r[3]=c->r[3]+0x000000B0u; // 803D4214
  c->lr=0x803D421Cu; f_803D0B30(c); // 803D4218
  c->r[4]=0u+0x803D0000u; // 803D421C
  c->r[3]=c->r[21]+c->r[22]; // 803D4220
  c->r[4]=c->r[4]+0x000043C0u; // 803D4224
  c->r[5]=c->r[26]|c->r[26]; // 803D4228
  W32(c->r[3]+0x000000A0u,c->r[4]); // 803D422C
  c->r[3]=c->r[3]+0x00000098u; // 803D4230
  c->r[4]=0u+0x00000000u; // 803D4234
  c->lr=0x803D423Cu; f_803D0FF8(c); // 803D4238
  goto L_803D4330; // 803D423C
L_803D4240:;
  c->r[4]=c->r[4]+0x00000001u; // 803D4240
  c->r[0]=rotl(c->r[4],0)&0x000000FFu; // 803D4244
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_803D41F4; } // 803D4248
  cmpu(c,0,c->r[0],0x00000003u); // 803D424C
  if (!crb(c,2)) { goto L_803D4274; } // 803D4250
  c->r[0]=R8(c->r[13]+0xFFFFE318u); // 803D4254
  cmpu(c,0,c->r[0],0x00000002u); // 803D4258
  if (crb(c,0)) { goto L_803D4330; } // 803D425C
  c->r[4]=0u+0x80710000u; // 803D4260
  c->r[3]=0u+0x00000501u; // 803D4264
  c->r[4]=c->r[4]+0xFFFFAC4Cu; // 803D4268
  c->lr=0x803D4270u; f_803D04E0(c); // 803D426C
  goto L_803D4330; // 803D4270
L_803D4274:;
  c->r[0]=rotl(c->r[27],0)&0x000000FFu; cr0(c,c->r[0]); // 803D4274
  if (crb(c,2)) { goto L_803D4330; } // 803D4278
  cmpu(c,0,c->r[0],0x00000001u); // 803D427C
  if (!crb(c,2)) { goto L_803D42C4; } // 803D4280
  c->r[0]=0u+0x00000001u; // 803D4284
  c->r[3]=c->r[20]|c->r[20]; // 803D4288
  W8(c->r[24]+0x00000009u,c->r[0]); // 803D428C
  c->r[4]=c->r[1]+0x00000009u; // 803D4290
  c->lr=0x803D4298u; f_803DC648(c); // 803D4294
  c->r[0]=R8(c->r[1]+0x00000009u); // 803D4298
  cmpu(c,0,c->r[0],0x00000003u); // 803D429C
  if (crb(c,2)) { goto L_803D4330; } // 803D42A0
  c->r[3]=0u+0x807B0000u; // 803D42A4
  c->r[5]=R32(c->r[13]+0xFFFFA0A0u); // 803D42A8
  c->r[3]=c->r[3]+0x00006434u; // 803D42AC
  c->r[4]=c->r[20]|c->r[20]; // 803D42B0
  c->r[3]=R8(c->r[3]+0x00000095u); // 803D42B4
  c->r[5]=c->r[5]+0x0000000Au; // 803D42B8
  c->lr=0x803D42C0u; f_803DC478(c); // 803D42BC
  goto L_803D4330; // 803D42C0
L_803D42C4:;
  cmpu(c,0,c->r[0],0x00000002u); // 803D42C4
  if (!crb(c,2)) { goto L_803D4308; } // 803D42C8
  c->r[0]=0u+0x00000002u; // 803D42CC
  c->r[3]=c->r[20]|c->r[20]; // 803D42D0
  W8(c->r[24]+0x00000009u,c->r[0]); // 803D42D4
  c->r[4]=c->r[1]+0x00000008u; // 803D42D8
  c->lr=0x803D42E0u; f_803DC648(c); // 803D42DC
  c->r[0]=R8(c->r[1]+0x00000008u); // 803D42E0
  cmpu(c,0,c->r[0],0x00000002u); // 803D42E4
  if (crb(c,2)) { goto L_803D4330; } // 803D42E8
  c->r[3]=0u+0x807B0000u; // 803D42EC
  c->r[5]=R32(c->r[13]+0xFFFFA0A0u); // 803D42F0
  c->r[3]=c->r[3]+0x00006434u; // 803D42F4
  c->r[4]=c->r[20]|c->r[20]; // 803D42F8
  c->r[3]=R8(c->r[3]+0x00000095u); // 803D42FC
  c->lr=0x803D4304u; f_803DC478(c); // 803D4300
  goto L_803D4330; // 803D4304
L_803D4308:;
  cmpu(c,0,c->r[0],0x00000004u); // 803D4308
  if (!crb(c,2)) { goto L_803D4330; } // 803D430C
  c->r[3]=0u+0x807B0000u; // 803D4310
  c->r[0]=0u+0x00000000u; // 803D4314
  c->r[3]=c->r[3]+0x00006434u; // 803D4318
  W8(c->r[1]+0x00000014u,c->r[0]); // 803D431C
  c->r[3]=R8(c->r[3]+0x00000095u); // 803D4320
  c->r[4]=c->r[20]|c->r[20]; // 803D4324
  c->r[5]=c->r[1]+0x0000000Cu; // 803D4328
  c->lr=0x803D4330u; f_803DC478(c); // 803D432C
L_803D4330:;
  c->r[11]=c->r[1]+0x00000050u; // 803D4330
  c->lr=0x803D4338u; { c->r[20]=R32(c->r[11]+0xFFFFFFD0u); c->r[21]=R32(c->r[11]+0xFFFFFFD4u); c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 803D4334
  c->r[0]=R32(c->r[1]+0x00000054u); // 803D4338
  c->lr=c->r[0]; // 803D433C
  c->r[1]=c->r[1]+0x00000050u; // 803D4340
  return; // 803D4344
}

// bta_dm_pm_btm_cback
void f_803D4348(Ctx* __restrict c) {
  trace_call(0x803D4348u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803D4348
  c->r[0]=c->lr; // 803D434C
  W32(c->r[1]+0x00000024u,c->r[0]); // 803D4350
  c->r[11]=c->r[1]+0x00000020u; // 803D4354
  c->lr=0x803D435Cu; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 803D4358
  c->r[27]=c->r[3]|c->r[3]; // 803D435C
  c->r[28]=c->r[4]|c->r[4]; // 803D4360
  c->r[29]=c->r[5]|c->r[5]; // 803D4364
  c->r[30]=c->r[6]|c->r[6]; // 803D4368
  c->r[3]=0u+0x00000014u; // 803D436C
  c->lr=0x803D4374u; f_803CD954(c); // 803D4370
  cmps(c,0,(int32_t)c->r[3],0); // 803D4374
  c->r[31]=c->r[3]|c->r[3]; // 803D4378
  if (crb(c,2)) { goto L_803D43A8; } // 803D437C
  c->r[0]=0u+0x00000109u; // 803D4380
  c->r[4]=c->r[27]|c->r[27]; // 803D4384
  W16(c->r[3]+0x00000000u,c->r[0]); // 803D4388
  W8(c->r[3]+0x0000000Eu,c->r[28]); // 803D438C
  W16(c->r[3]+0x00000010u,c->r[29]); // 803D4390
  W8(c->r[3]+0x00000012u,c->r[30]); // 803D4394
  c->r[3]=c->r[3]+0x00000008u; // 803D4398
  c->lr=0x803D43A0u; f_803D0B30(c); // 803D439C
  c->r[3]=c->r[31]|c->r[31]; // 803D43A0
  c->lr=0x803D43A8u; f_803D0FDC(c); // 803D43A4
L_803D43A8:;
  c->r[11]=c->r[1]+0x00000020u; // 803D43A8
  c->lr=0x803D43B0u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 803D43AC
  c->r[0]=R32(c->r[1]+0x00000024u); // 803D43B0
  c->lr=c->r[0]; // 803D43B4
  c->r[1]=c->r[1]+0x00000020u; // 803D43B8
  return; // 803D43BC
}

// bta_dm_pm_timer_cback
void f_803D43C0(Ctx* __restrict c) {
  trace_call(0x803D43C0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803D43C0
  c->r[0]=c->lr; // 803D43C4
  c->r[4]=0u+0x807B0000u; // 803D43C8
  W32(c->r[1]+0x00000014u,c->r[0]); // 803D43CC
  c->r[4]=c->r[4]+0x00006434u; // 803D43D0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 803D43D4
  W32(c->r[1]+0x00000008u,c->r[30]); // 803D43D8
  c->r[30]=0u+0x00000000u; // 803D43DC
  c->r[0]=R8(c->r[4]+0x000000B6u); // 803D43E0
  cmps(c,0,(int32_t)c->r[0],0); // 803D43E4
  if (crb(c,2)) { goto L_803D4404; } // 803D43E8
  c->r[0]=c->r[4]+0x00000098u; // 803D43EC
  cmpu(c,0,c->r[0],c->r[3]); // 803D43F0
  if (!crb(c,2)) { goto L_803D4404; } // 803D43F4
  c->r[0]=0u+0x00000000u; // 803D43F8
  W8(c->r[4]+0x000000B6u,c->r[0]); // 803D43FC
  goto L_803D4458; // 803D4400
L_803D4404:;
  c->r[0]=R8(c->r[4]+0x000000D6u); // 803D4404
  c->r[30]=0u+0x00000001u; // 803D4408
  cmps(c,0,(int32_t)c->r[0],0); // 803D440C
  if (crb(c,2)) { goto L_803D442C; } // 803D4410
  c->r[0]=c->r[4]+0x000000B8u; // 803D4414
  cmpu(c,0,c->r[0],c->r[3]); // 803D4418
  if (!crb(c,2)) { goto L_803D442C; } // 803D441C
  c->r[0]=0u+0x00000000u; // 803D4420
  W8(c->r[4]+0x000000D6u,c->r[0]); // 803D4424
  goto L_803D4458; // 803D4428
L_803D442C:;
  c->r[0]=R8(c->r[4]+0x000000F6u); // 803D442C
  c->r[30]=0u+0x00000002u; // 803D4430
  cmps(c,0,(int32_t)c->r[0],0); // 803D4434
  if (crb(c,2)) { goto L_803D4454; } // 803D4438
  c->r[0]=c->r[4]+0x000000D8u; // 803D443C
  cmpu(c,0,c->r[0],c->r[3]); // 803D4440
  if (!crb(c,2)) { goto L_803D4454; } // 803D4444
  c->r[0]=0u+0x00000000u; // 803D4448
  W8(c->r[4]+0x000000F6u,c->r[0]); // 803D444C
  goto L_803D4458; // 803D4450
L_803D4454:;
  c->r[30]=0u+0x00000003u; // 803D4454
L_803D4458:;
  cmpu(c,0,c->r[30],0x00000003u); // 803D4458
  if (crb(c,2)) { goto L_803D44A0; } // 803D445C
  c->r[3]=0u+0x0000000Eu; // 803D4460
  c->lr=0x803D4468u; f_803CD954(c); // 803D4464
  cmps(c,0,(int32_t)c->r[3],0); // 803D4468
  c->r[31]=c->r[3]|c->r[3]; // 803D446C
  if (crb(c,2)) { goto L_803D44A0; } // 803D4470
  c->r[4]=0u+0x807B0000u; // 803D4474
  c->r[5]=0u+0x0000010Au; // 803D4478
  c->r[4]=c->r[4]+0x00006434u; // 803D447C
  c->r[0]=rotl(c->r[30],5)&0x00001FE0u; // 803D4480
  W16(c->r[3]+0x00000000u,c->r[5]); // 803D4484
  c->r[4]=c->r[4]+c->r[0]; // 803D4488
  c->r[4]=c->r[4]+0x000000B0u; // 803D448C
  c->r[3]=c->r[3]+0x00000008u; // 803D4490
  c->lr=0x803D4498u; f_803D0B30(c); // 803D4494
  c->r[3]=c->r[31]|c->r[31]; // 803D4498
  c->lr=0x803D44A0u; f_803D0FDC(c); // 803D449C
L_803D44A0:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 803D44A0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 803D44A4
  c->r[30]=R32(c->r[1]+0x00000008u); // 803D44A8
  c->lr=c->r[0]; // 803D44AC
  c->r[1]=c->r[1]+0x00000010u; // 803D44B0
  return; // 803D44B4
}

// bta_dm_pm_btm_status
void f_803D44B8(Ctx* __restrict c) {
  trace_call(0x803D44B8u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803D44B8
  c->r[0]=c->lr; // 803D44BC
  W32(c->r[1]+0x00000024u,c->r[0]); // 803D44C0
  c->r[11]=c->r[1]+0x00000020u; // 803D44C4
  c->lr=0x803D44CCu; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 803D44C8
  c->r[30]=0u+0x807B0000u; // 803D44CC
  c->r[31]=c->r[3]|c->r[3]; // 803D44D0
  c->r[30]=c->r[30]+0x00006434u; // 803D44D4
  c->r[27]=0u+0x00000000u; // 803D44D8
L_803D44DC:;
  c->r[28]=rotl(c->r[27],5)&0x00001FE0u; // 803D44DC
  c->r[29]=c->r[30]+c->r[28]; // 803D44E0
  c->r[0]=R8(c->r[29]+0x000000B6u); // 803D44E4
  cmps(c,0,(int32_t)c->r[0],0); // 803D44E8
  if (crb(c,2)) { goto L_803D451C; } // 803D44EC
  c->r[3]=c->r[29]+0x000000B0u; // 803D44F0
  c->r[4]=c->r[31]+0x00000008u; // 803D44F4
  c->lr=0x803D44FCu; f_803D0B64(c); // 803D44F8
  cmps(c,0,(int32_t)c->r[3],0); // 803D44FC
  if (!crb(c,2)) { goto L_803D451C; } // 803D4500
  c->r[3]=c->r[29]|c->r[29]; // 803D4504
  c->r[3]=c->r[3]+0x00000098u; // 803D4508
  c->lr=0x803D4510u; f_803D1018(c); // 803D450C
  c->r[0]=0u+0x00000000u; // 803D4510
  W8(c->r[29]+0x000000B6u,c->r[0]); // 803D4514
  goto L_803D4528; // 803D4518
L_803D451C:;
  c->r[27]=c->r[27]+0x00000001u; // 803D451C
  cmpu(c,0,c->r[27],0x00000003u); // 803D4520
  if (crb(c,0)) { IRQCHK(c); goto L_803D44DC; } // 803D4524
L_803D4528:;
  c->r[0]=R8(c->r[31]+0x0000000Eu); // 803D4528
  cmps(c,0,(int32_t)c->r[0],0); // 803D452C
  if (crb(c,2)) { goto L_803D4538; } // 803D4530
  goto L_803D45C0; // 803D4534
L_803D4538:;
  c->r[0]=R8(c->r[31]+0x00000012u); // 803D4538
  cmps(c,0,(int32_t)c->r[0],0); // 803D453C
  if (crb(c,2)) { goto L_803D45B4; } // 803D4540
  c->r[3]=0u+0x807B0000u; // 803D4544
  c->r[29]=0u+0x00000000u; // 803D4548
  c->r[30]=c->r[3]+0x00006434u; // 803D454C
  goto L_803D45A0; // 803D4550
L_803D4554:;
  c->r[0]=rotl(c->r[29],0)&0x000000FFu; // 803D4554
  c->r[4]=c->r[31]+0x00000008u; // 803D4558
  c->r[28]=(uint32_t)((int32_t)c->r[0]*(int32_t)11); // 803D455C
  c->r[3]=c->r[30]+c->r[28]; // 803D4560
  c->lr=0x803D4568u; f_803D0B64(c); // 803D4564
  cmps(c,0,(int32_t)c->r[3],0); // 803D4568
  if (!crb(c,2)) { goto L_803D459C; } // 803D456C
  c->r[5]=c->r[30]+c->r[28]; // 803D4570
  c->r[0]=R8(c->r[5]+0x00000009u); // 803D4574
  c->r[6]=rotl(c->r[0],0)&0x00000003u; cr0(c,c->r[6]); // 803D4578
  if (crb(c,2)) { goto L_803D45C0; } // 803D457C
  c->r[0]=R8(c->r[5]+0x0000000Au); // 803D4580
  c->r[3]=c->r[31]+0x00000008u; // 803D4584
  c->r[4]=0u+0x00000000u; // 803D4588
  c->r[0]=c->r[0]|c->r[6]; // 803D458C
  W8(c->r[5]+0x0000000Au,c->r[0]); // 803D4590
  c->lr=0x803D4598u; f_803D3FC8(c); // 803D4594
  goto L_803D45C0; // 803D4598
L_803D459C:;
  c->r[29]=c->r[29]+0x00000001u; // 803D459C
L_803D45A0:;
  c->r[0]=R8(c->r[30]+0x0000004Du); // 803D45A0
  c->r[3]=rotl(c->r[29],0)&0x000000FFu; // 803D45A4
  cmpu(c,0,c->r[3],c->r[0]); // 803D45A8
  if (crb(c,0)) { IRQCHK(c); goto L_803D4554; } // 803D45AC
  goto L_803D45C0; // 803D45B0
L_803D45B4:;
  c->r[3]=c->r[31]+0x00000008u; // 803D45B4
  c->r[4]=0u+0x00000000u; // 803D45B8
  c->lr=0x803D45C0u; f_803D3FC8(c); // 803D45BC
L_803D45C0:;
  c->r[11]=c->r[1]+0x00000020u; // 803D45C0
  c->lr=0x803D45C8u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 803D45C4
  c->r[0]=R32(c->r[1]+0x00000024u); // 803D45C8
  c->lr=c->r[0]; // 803D45CC
  c->r[1]=c->r[1]+0x00000020u; // 803D45D0
  return; // 803D45D4
}

// fn_803D45D8
void f_803D45D8(Ctx* __restrict c) {
  trace_call(0x803D45D8u);
  c->r[4]=0u+0x00000001u; // 803D45D8
  c->r[3]=c->r[3]+0x00000008u; // 803D45DC
  f_803D3FC8(c); return; // 803D45E0
}

// bta_hh_api_enable
void f_803D45E4(Ctx* __restrict c) {
  trace_call(0x803D45E4u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803D45E4
  c->r[0]=c->lr; // 803D45E8
  W32(c->r[1]+0x00000024u,c->r[0]); // 803D45EC
  c->r[0]=0u+0x00000006u; // 803D45F0
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 803D45F4
  W32(c->r[1]+0x00000018u,c->r[30]); // 803D45F8
  W32(c->r[1]+0x00000014u,c->r[29]); // 803D45FC
  c->r[29]=c->r[3]|c->r[3]; // 803D4600
  W8(c->r[1]+0x00000008u,c->r[0]); // 803D4604
  c->lr=0x803D460Cu; f_803E6558(c); // 803D4608
  c->r[31]=0u+0x807B0000u; // 803D460C
  c->r[4]=0u+0x00000000u; // 803D4610
  c->r[3]=c->r[31]+0x00006568u; // 803D4614
  c->r[5]=0u+0x00000230u; // 803D4618
  c->lr=0x803D4620u; f_800043EC(c); // 803D461C
  c->r[4]=R8(c->r[29]+0x00000008u); // 803D4620
  c->r[3]=c->r[13]+0xFFFFA0D8u; // 803D4624
  c->lr=0x803D462Cu; f_803E6B98(c); // 803D4628
  c->r[3]=0u+0x803D0000u; // 803D462C
  c->r[3]=c->r[3]+0x00005A94u; // 803D4630
  c->lr=0x803D4638u; f_803E659C(c); // 803D4634
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 803D4638
  if (!crb(c,2)) { goto L_803D4720; } // 803D463C
  c->r[4]=R32(c->r[29]+0x00000030u); // 803D4640
  c->r[12]=c->r[31]+0x00006568u; // 803D4644
  c->r[3]=0u+0x00000000u; // 803D4648
  c->r[0]=0u+0x00000002u; // 803D464C
  W32(c->r[12]+0x00000224u,c->r[4]); // 803D4650
  c->r[29]=0u+0x00000000u; // 803D4654
  c->r[11]=0u+0x00000001u; // 803D4658
  c->r[10]=0u+0x000000FFu; // 803D465C
  W8(c->r[1]+0x00000008u,c->r[3]); // 803D4660
  c->r[9]=0u+0x00000010u; // 803D4664
  c->ctr=c->r[0]; // 803D4668
L_803D466C:;
  c->r[3]=rotl(c->r[29],5)&0x00001FE0u; // 803D466C
  c->r[0]=rotl(c->r[29],0)&0x000000FFu; // 803D4670
  c->r[31]=c->r[12]+c->r[3]; // 803D4674
  c->r[8]=c->r[29]+0x00000001u; // 803D4678
  W8(c->r[31]+0x0000002Cu,c->r[11]); // 803D467C
  c->r[30]=c->r[12]+c->r[0]; // 803D4680
  c->r[7]=c->r[29]+0x00000002u; // 803D4684
  c->r[6]=c->r[29]+0x00000003u; // 803D4688
  W8(c->r[31]+0x00000026u,c->r[10]); // 803D468C
  c->r[5]=c->r[29]+0x00000004u; // 803D4690
  c->r[4]=c->r[29]+0x00000005u; // 803D4694
  c->r[3]=c->r[29]+0x00000006u; // 803D4698
  W8(c->r[31]+0x00000022u,c->r[29]); // 803D469C
  c->r[0]=c->r[29]+0x00000007u; // 803D46A0
  c->r[29]=c->r[29]+0x00000008u; // 803D46A4
  W8(c->r[30]+0x00000214u,c->r[9]); // 803D46A8
  W8(c->r[31]+0x0000004Cu,c->r[11]); // 803D46AC
  W8(c->r[31]+0x00000046u,c->r[10]); // 803D46B0
  W8(c->r[31]+0x00000042u,c->r[8]); // 803D46B4
  W8(c->r[30]+0x00000215u,c->r[9]); // 803D46B8
  W8(c->r[31]+0x0000006Cu,c->r[11]); // 803D46BC
  W8(c->r[31]+0x00000066u,c->r[10]); // 803D46C0
  W8(c->r[31]+0x00000062u,c->r[7]); // 803D46C4
  W8(c->r[30]+0x00000216u,c->r[9]); // 803D46C8
  W8(c->r[31]+0x0000008Cu,c->r[11]); // 803D46CC
  W8(c->r[31]+0x00000086u,c->r[10]); // 803D46D0
  W8(c->r[31]+0x00000082u,c->r[6]); // 803D46D4
  W8(c->r[30]+0x00000217u,c->r[9]); // 803D46D8
  W8(c->r[31]+0x000000ACu,c->r[11]); // 803D46DC
  W8(c->r[31]+0x000000A6u,c->r[10]); // 803D46E0
  W8(c->r[31]+0x000000A2u,c->r[5]); // 803D46E4
  W8(c->r[30]+0x00000218u,c->r[9]); // 803D46E8
  W8(c->r[31]+0x000000CCu,c->r[11]); // 803D46EC
  W8(c->r[31]+0x000000C6u,c->r[10]); // 803D46F0
  W8(c->r[31]+0x000000C2u,c->r[4]); // 803D46F4
  W8(c->r[30]+0x00000219u,c->r[9]); // 803D46F8
  W8(c->r[31]+0x000000ECu,c->r[11]); // 803D46FC
  W8(c->r[31]+0x000000E6u,c->r[10]); // 803D4700
  W8(c->r[31]+0x000000E2u,c->r[3]); // 803D4704
  W8(c->r[30]+0x0000021Au,c->r[9]); // 803D4708
  W8(c->r[31]+0x0000010Cu,c->r[11]); // 803D470C
  W8(c->r[31]+0x00000106u,c->r[10]); // 803D4710
  W8(c->r[31]+0x00000102u,c->r[0]); // 803D4714
  W8(c->r[30]+0x0000021Bu,c->r[9]); // 803D4718
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_803D466C; } // 803D471C
L_803D4720:;
  c->r[5]=0u+0x807B0000u; // 803D4720
  c->r[4]=c->r[1]+0x00000008u; // 803D4724
  c->r[5]=c->r[5]+0x00006568u; // 803D4728
  c->r[3]=0u+0x00000000u; // 803D472C
  c->r[12]=R32(c->r[5]+0x00000224u); // 803D4730
  c->ctr=c->r[12]; // 803D4734
  if (true) { c->lr=0x803D473Cu; dispatch(c,c->ctr); } // 803D4738
  c->r[0]=R32(c->r[1]+0x00000024u); // 803D473C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 803D4740
  c->r[30]=R32(c->r[1]+0x00000018u); // 803D4744
  c->r[29]=R32(c->r[1]+0x00000014u); // 803D4748
  c->lr=c->r[0]; // 803D474C
  c->r[1]=c->r[1]+0x00000020u; // 803D4750
  return; // 803D4754
}

// bta_hh_api_disable
void f_803D4758(Ctx* __restrict c) {
  trace_call(0x803D4758u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803D4758
  c->r[0]=c->lr; // 803D475C
  c->r[3]=0u+0x807B0000u; // 803D4760
  W32(c->r[1]+0x00000024u,c->r[0]); // 803D4764
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 803D4768
  c->r[31]=c->r[3]+0x00006568u; // 803D476C
  W32(c->r[1]+0x00000018u,c->r[30]); // 803D4770
  c->r[0]=R32(c->r[31]+0x00000224u); // 803D4774
  cmps(c,0,(int32_t)c->r[0],0); // 803D4778
  if (crb(c,2)) { goto L_803D4844; } // 803D477C
  c->r[0]=R8(c->r[31]+0x0000022Du); // 803D4780
  cmps(c,0,(int32_t)c->r[0],0); // 803D4784
  if (!crb(c,2)) { goto L_803D4808; } // 803D4788
  c->r[0]=0u+0x00000000u; // 803D478C
  W8(c->r[1]+0x00000008u,c->r[0]); // 803D4790
  c->lr=0x803D4798u; f_803E6618(c); // 803D4794
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 803D4798
  if (crb(c,2)) { goto L_803D47A8; } // 803D479C
  c->r[0]=0u+0x00000006u; // 803D47A0
  W8(c->r[1]+0x00000008u,c->r[0]); // 803D47A4
L_803D47A8:;
  c->r[31]=0u+0x807B0000u; // 803D47A8
  c->r[30]=0u+0x00000000u; // 803D47AC
  c->r[31]=c->r[31]+0x00006568u; // 803D47B0
L_803D47B4:;
  c->r[0]=rotl(c->r[30],5)&0x00001FE0u; // 803D47B4
  c->r[3]=c->r[31]+c->r[0]; // 803D47B8
  c->r[3]=c->r[3]+0x00000014u; // 803D47BC
  c->lr=0x803D47C4u; f_803D127C(c); // 803D47C0
  c->r[30]=c->r[30]+0x00000001u; // 803D47C4
  cmpu(c,0,c->r[30],0x00000010u); // 803D47C8
  if (crb(c,0)) { IRQCHK(c); goto L_803D47B4; } // 803D47CC
  c->r[31]=0u+0x807B0000u; // 803D47D0
  c->r[31]=c->r[31]+0x00006568u; // 803D47D4
  c->r[3]=c->r[31]+0x00000228u; // 803D47D8
  c->lr=0x803D47E0u; f_803D127C(c); // 803D47DC
  c->r[12]=R32(c->r[31]+0x00000224u); // 803D47E0
  c->r[4]=c->r[1]+0x00000008u; // 803D47E4
  c->r[3]=0u+0x00000001u; // 803D47E8
  c->ctr=c->r[12]; // 803D47EC
  if (true) { c->lr=0x803D47F4u; dispatch(c,c->ctr); } // 803D47F0
  c->r[3]=c->r[31]|c->r[31]; // 803D47F4
  c->r[4]=0u+0x00000000u; // 803D47F8
  c->r[5]=0u+0x00000230u; // 803D47FC
  c->lr=0x803D4804u; f_800043EC(c); // 803D4800
  goto L_803D4844; // 803D4804
L_803D4808:;
  c->r[0]=0u+0x00000001u; // 803D4808
  c->r[30]=0u+0x00000000u; // 803D480C
  W8(c->r[31]+0x0000022Eu,c->r[0]); // 803D4810
L_803D4814:;
  c->r[0]=rotl(c->r[30],5)&0x00001FE0u; // 803D4814
  c->r[3]=c->r[31]+c->r[0]; // 803D4818
  c->r[0]=R8(c->r[3]+0x0000002Cu); // 803D481C
  cmpu(c,0,c->r[0],0x00000003u); // 803D4820
  if (!crb(c,2)) { goto L_803D4838; } // 803D4824
  c->r[3]=c->r[3]+0x00000010u; // 803D4828
  c->r[4]=0u+0x00001701u; // 803D482C
  c->r[5]=0u+0x00000000u; // 803D4830
  c->lr=0x803D4838u; f_803D60FC(c); // 803D4834
L_803D4838:;
  c->r[30]=c->r[30]+0x00000001u; // 803D4838
  cmpu(c,0,c->r[30],0x00000010u); // 803D483C
  if (crb(c,0)) { IRQCHK(c); goto L_803D4814; } // 803D4840
L_803D4844:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 803D4844
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 803D4848
  c->r[30]=R32(c->r[1]+0x00000018u); // 803D484C
  c->lr=c->r[0]; // 803D4850
  c->r[1]=c->r[1]+0x00000020u; // 803D4854
  return; // 803D4858
}

// bta_hh_disc_cmpl
void f_803D485C(Ctx* __restrict c) {
  trace_call(0x803D485Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803D485C
  c->r[0]=c->lr; // 803D4860
  W32(c->r[1]+0x00000024u,c->r[0]); // 803D4864
  c->r[0]=0u+0x00000000u; // 803D4868
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 803D486C
  W32(c->r[1]+0x00000018u,c->r[30]); // 803D4870
  W8(c->r[1]+0x00000008u,c->r[0]); // 803D4874
  c->lr=0x803D487Cu; f_803E6618(c); // 803D4878
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 803D487C
  if (crb(c,2)) { goto L_803D488C; } // 803D4880
  c->r[0]=0u+0x00000006u; // 803D4884
  W8(c->r[1]+0x00000008u,c->r[0]); // 803D4888
L_803D488C:;
  c->r[31]=0u+0x807B0000u; // 803D488C
  c->r[30]=0u+0x00000000u; // 803D4890
  c->r[31]=c->r[31]+0x00006568u; // 803D4894
L_803D4898:;
  c->r[0]=rotl(c->r[30],5)&0x00001FE0u; // 803D4898
  c->r[3]=c->r[31]+c->r[0]; // 803D489C
  c->r[3]=c->r[3]+0x00000014u; // 803D48A0
  c->lr=0x803D48A8u; f_803D127C(c); // 803D48A4
  c->r[30]=c->r[30]+0x00000001u; // 803D48A8
  cmpu(c,0,c->r[30],0x00000010u); // 803D48AC
  if (crb(c,0)) { IRQCHK(c); goto L_803D4898; } // 803D48B0
  c->r[31]=0u+0x807B0000u; // 803D48B4
  c->r[31]=c->r[31]+0x00006568u; // 803D48B8
  c->r[3]=c->r[31]+0x00000228u; // 803D48BC
  c->lr=0x803D48C4u; f_803D127C(c); // 803D48C0
  c->r[12]=R32(c->r[31]+0x00000224u); // 803D48C4
  c->r[4]=c->r[1]+0x00000008u; // 803D48C8
  c->r[3]=0u+0x00000001u; // 803D48CC
  c->ctr=c->r[12]; // 803D48D0
  if (true) { c->lr=0x803D48D8u; dispatch(c,c->ctr); } // 803D48D4
  c->r[3]=c->r[31]|c->r[31]; // 803D48D8
  c->r[4]=0u+0x00000000u; // 803D48DC
  c->r[5]=0u+0x00000230u; // 803D48E0
  c->lr=0x803D48E8u; f_800043EC(c); // 803D48E4
  c->r[0]=R32(c->r[1]+0x00000024u); // 803D48E8
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 803D48EC
  c->r[30]=R32(c->r[1]+0x00000018u); // 803D48F0
  c->lr=c->r[0]; // 803D48F4
  c->r[1]=c->r[1]+0x00000020u; // 803D48F8
  return; // 803D48FC
}

// bta_hh_sdp_cback
void f_803D4900(Ctx* __restrict c) {
  trace_call(0x803D4900u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803D4900
  c->r[0]=c->lr; // 803D4904
  c->r[6]=0u+0x807B0000u; // 803D4908
  cmps(c,0,(int32_t)c->r[3],0); // 803D490C
  W32(c->r[1]+0x00000024u,c->r[0]); // 803D4910
  c->r[0]=0u+0x00000010u; // 803D4914
  c->r[6]=c->r[6]+0x00006568u; // 803D4918
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 803D491C
  W32(c->r[1]+0x00000018u,c->r[30]); // 803D4920
  c->r[30]=c->r[5]|c->r[5]; // 803D4924
  W32(c->r[1]+0x00000014u,c->r[29]); // 803D4928
  c->r[29]=c->r[4]|c->r[4]; // 803D492C
  W8(c->r[1]+0x00000008u,c->r[0]); // 803D4930
  c->r[31]=R32(c->r[6]+0x00000210u); // 803D4934
  if (!crb(c,2)) { goto L_803D49F8; } // 803D4938
  c->r[0]=R8(c->r[31]+0x00000014u); // 803D493C
  cmps(c,0,(int32_t)c->r[0],0); // 803D4940
  if (crb(c,2)) { goto L_803D494C; } // 803D4944
  c->r[29]=c->r[4]|0x00008000u; // 803D4948
L_803D494C:;
  c->r[0]=R8(c->r[13]+0xFFFFE318u); // 803D494C
  cmpu(c,0,c->r[0],0x00000004u); // 803D4950
  if (crb(c,0)) { goto L_803D4974; } // 803D4954
  c->r[4]=0u+0x80710000u; // 803D4958
  c->r[6]=c->r[3]|c->r[3]; // 803D495C
  c->r[5]=c->r[31]|c->r[31]; // 803D4960
  c->r[7]=rotl(c->r[29],0)&0x0000FFFFu; // 803D4964
  c->r[4]=c->r[4]+0xFFFFAC70u; // 803D4968
  c->r[3]=0u+0x00000503u; // 803D496C
  c->lr=0x803D4974u; f_803D0528(c); // 803D4970
L_803D4974:;
  c->r[4]=R8(c->r[30]+0x00000064u); // 803D4974
  c->r[3]=c->r[31]|c->r[31]; // 803D4978
  c->lr=0x803D4980u; f_803D68C8(c); // 803D497C
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 803D4980
  if (crb(c,2)) { goto L_803D49F0; } // 803D4984
  c->r[0]=R8(c->r[31]+0x00000016u); // 803D4988
  cmpu(c,0,c->r[0],0x000000FFu); // 803D498C
  if (!crb(c,2)) { goto L_803D49F8; } // 803D4990
  c->r[3]=c->r[31]+0x00000008u; // 803D4994
  c->r[4]=rotl(c->r[29],0)&0x0000FFFFu; // 803D4998
  c->r[5]=c->r[1]+0x00000009u; // 803D499C
  c->lr=0x803D49A4u; f_803E66FC(c); // 803D49A0
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 803D49A4
  W8(c->r[1]+0x00000008u,c->r[3]); // 803D49A8
  if (!crb(c,2)) { goto L_803D49E4; } // 803D49AC
  c->r[3]=0u+0x807B0000u; // 803D49B0
  c->r[4]=R8(c->r[1]+0x00000009u); // 803D49B4
  c->r[3]=c->r[3]+0x00006568u; // 803D49B8
  c->r[0]=R8(c->r[31]+0x00000012u); // 803D49BC
  c->r[5]=c->r[3]+c->r[4]; // 803D49C0
  c->r[6]=c->r[30]+0x00000068u; // 803D49C4
  W8(c->r[5]+0x00000214u,c->r[0]); // 803D49C8
  c->r[3]=c->r[31]|c->r[31]; // 803D49CC
  c->r[5]=rotl(c->r[29],0)&0x0000FFFFu; // 803D49D0
  c->r[7]=R8(c->r[30]+0x00000064u); // 803D49D4
  c->r[8]=R8(c->r[31]+0x00000015u); // 803D49D8
  c->lr=0x803D49E0u; f_803D680C(c); // 803D49DC
  goto L_803D49F8; // 803D49E0
L_803D49E4:;
  c->r[0]=0u+0x00000000u; // 803D49E4
  W8(c->r[31]+0x00000015u,c->r[0]); // 803D49E8
  goto L_803D49F8; // 803D49EC
L_803D49F0:;
  c->r[0]=0u+0x000000FFu; // 803D49F0
  W8(c->r[1]+0x00000008u,c->r[0]); // 803D49F4
L_803D49F8:;
  c->r[3]=0u+0x807B0000u; // 803D49F8
  c->r[3]=c->r[3]+0x00006568u; // 803D49FC
  c->r[3]=c->r[3]+0x00000228u; // 803D4A00
  c->lr=0x803D4A08u; f_803D127C(c); // 803D4A04
  c->r[3]=c->r[31]|c->r[31]; // 803D4A08
  c->r[5]=c->r[1]+0x00000008u; // 803D4A0C
  c->r[4]=0u+0x00001707u; // 803D4A10
  c->lr=0x803D4A18u; f_803D60FC(c); // 803D4A14
  c->r[0]=R32(c->r[1]+0x00000024u); // 803D4A18
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 803D4A1C
  c->r[30]=R32(c->r[1]+0x00000018u); // 803D4A20
  c->r[29]=R32(c->r[1]+0x00000014u); // 803D4A24
  c->lr=c->r[0]; // 803D4A28
  c->r[1]=c->r[1]+0x00000020u; // 803D4A2C
  return; // 803D4A30
}

// bta_hh_start_sdp
void f_803D4A34(Ctx* __restrict c) {
  trace_call(0x803D4A34u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803D4A34
  c->r[0]=c->lr; // 803D4A38
  W32(c->r[1]+0x00000024u,c->r[0]); // 803D4A3C
  c->r[0]=0u+0x00000010u; // 803D4A40
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 803D4A44
  c->r[31]=c->r[3]|c->r[3]; // 803D4A48
  W32(c->r[1]+0x00000018u,c->r[30]); // 803D4A4C
  W32(c->r[1]+0x00000014u,c->r[29]); // 803D4A50
  c->r[29]=c->r[4]|c->r[4]; // 803D4A54
  W8(c->r[1]+0x00000009u,c->r[0]); // 803D4A58
  c->r[5]=R8(c->r[4]+0x0000000Eu); // 803D4A5C
  c->r[0]=R8(c->r[3]+0x00000015u); // 803D4A60
  W8(c->r[3]+0x00000014u,c->r[5]); // 803D4A64
  cmps(c,0,(int32_t)c->r[0],0); // 803D4A68
  c->r[0]=R8(c->r[4]+0x0000000Fu); // 803D4A6C
  W8(c->r[3]+0x0000001Bu,c->r[0]); // 803D4A70
  if (crb(c,2)) { goto L_803D4B0C; } // 803D4A74
  c->r[0]=R8(c->r[13]+0xFFFFE318u); // 803D4A78
  c->r[3]=0u+0x00000000u; // 803D4A7C
  W8(c->r[1]+0x00000009u,c->r[3]); // 803D4A80
  cmpu(c,0,c->r[0],0x00000005u); // 803D4A84
  if (crb(c,0)) { goto L_803D4A9C; } // 803D4A88
  c->r[4]=0u+0x80710000u; // 803D4A8C
  c->r[3]=0u+0x00000504u; // 803D4A90
  c->r[4]=c->r[4]+0xFFFFACC8u; // 803D4A94
  c->lr=0x803D4A9Cu; f_803D04E0(c); // 803D4A98
L_803D4A9C:;
  c->r[0]=R8(c->r[31]+0x00000016u); // 803D4A9C
  cmpu(c,0,c->r[0],0x000000FFu); // 803D4AA0
  if (!crb(c,2)) { goto L_803D4AF8; } // 803D4AA4
  c->r[4]=R16(c->r[31]+0x0000000Eu); // 803D4AA8
  c->r[3]=c->r[31]+0x00000008u; // 803D4AAC
  c->r[5]=c->r[1]+0x00000008u; // 803D4AB0
  c->lr=0x803D4AB8u; f_803E66FC(c); // 803D4AB4
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 803D4AB8
  W8(c->r[1]+0x00000009u,c->r[3]); // 803D4ABC
  if (!crb(c,2)) { goto L_803D4AF8; } // 803D4AC0
  c->r[4]=R8(c->r[1]+0x00000008u); // 803D4AC4
  c->r[3]=c->r[31]|c->r[31]; // 803D4AC8
  c->r[5]=R16(c->r[31]+0x0000000Eu); // 803D4ACC
  c->r[6]=0u+0x00000000u; // 803D4AD0
  c->r[7]=R8(c->r[31]+0x00000013u); // 803D4AD4
  c->r[8]=R8(c->r[31]+0x00000015u); // 803D4AD8
  c->lr=0x803D4AE0u; f_803D680C(c); // 803D4ADC
  c->r[3]=0u+0x807B0000u; // 803D4AE0
  c->r[0]=R8(c->r[1]+0x00000008u); // 803D4AE4
  c->r[3]=c->r[3]+0x00006568u; // 803D4AE8
  c->r[4]=R8(c->r[31]+0x00000012u); // 803D4AEC
  c->r[3]=c->r[3]+c->r[0]; // 803D4AF0
  W8(c->r[3]+0x00000214u,c->r[4]); // 803D4AF4
L_803D4AF8:;
  c->r[3]=c->r[31]|c->r[31]; // 803D4AF8
  c->r[5]=c->r[1]+0x00000009u; // 803D4AFC
  c->r[4]=0u+0x00001707u; // 803D4B00
  c->lr=0x803D4B08u; f_803D60FC(c); // 803D4B04
  goto L_803D4BAC; // 803D4B08
L_803D4B0C:;
  c->r[30]=0u+0x807B0000u; // 803D4B0C
  c->r[30]=c->r[30]+0x00006568u; // 803D4B10
  c->r[0]=R32(c->r[30]+0x00000228u); // 803D4B14
  cmps(c,0,(int32_t)c->r[0],0); // 803D4B18
  if (!crb(c,2)) { goto L_803D4B90; } // 803D4B1C
  c->r[3]=R32(c->r[13]+0xFFFFA0B0u); // 803D4B20
  c->r[3]=R16(c->r[3]+0x00000008u); // 803D4B24
  c->lr=0x803D4B2Cu; f_803CD954(c); // 803D4B28
  W32(c->r[30]+0x00000228u,c->r[3]); // 803D4B2C
  c->r[6]=0u+0x803D0000u; // 803D4B30
  c->r[5]=R32(c->r[13]+0xFFFFA0B0u); // 803D4B34
  c->r[4]=c->r[3]|c->r[3]; // 803D4B38
  W32(c->r[30]+0x00000210u,c->r[31]); // 803D4B3C
  c->r[3]=c->r[29]+0x00000008u; // 803D4B40
  c->r[6]=c->r[6]+0x00004900u; // 803D4B44
  c->r[5]=R16(c->r[5]+0x00000008u); // 803D4B48
  c->lr=0x803D4B50u; f_803E6040(c); // 803D4B4C
  c->r[5]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[5]); // 803D4B50
  W8(c->r[1]+0x00000009u,c->r[3]); // 803D4B54
  if (crb(c,2)) { goto L_803D4B90; } // 803D4B58
  c->r[0]=R8(c->r[13]+0xFFFFE318u); // 803D4B5C
  cmpu(c,0,c->r[0],0x00000005u); // 803D4B60
  if (crb(c,0)) { goto L_803D4B78; } // 803D4B64
  c->r[4]=0u+0x80710000u; // 803D4B68
  c->r[3]=0u+0x00000504u; // 803D4B6C
  c->r[4]=c->r[4]+0xFFFFACF8u; // 803D4B70
  c->lr=0x803D4B78u; f_803D04F8(c); // 803D4B74
L_803D4B78:;
  c->r[0]=0u+0x00000007u; // 803D4B78
  c->r[3]=0u+0x807B0000u; // 803D4B7C
  c->r[3]=c->r[3]+0x00006568u; // 803D4B80
  W8(c->r[1]+0x00000009u,c->r[0]); // 803D4B84
  c->r[3]=c->r[3]+0x00000228u; // 803D4B88
  c->lr=0x803D4B90u; f_803D127C(c); // 803D4B8C
L_803D4B90:;
  c->r[0]=R8(c->r[1]+0x00000009u); // 803D4B90
  cmps(c,0,(int32_t)c->r[0],0); // 803D4B94
  if (crb(c,2)) { goto L_803D4BAC; } // 803D4B98
  c->r[3]=c->r[31]|c->r[31]; // 803D4B9C
  c->r[5]=c->r[1]+0x00000009u; // 803D4BA0
  c->r[4]=0u+0x00001707u; // 803D4BA4
  c->lr=0x803D4BACu; f_803D60FC(c); // 803D4BA8
L_803D4BAC:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 803D4BAC
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 803D4BB0
  c->r[30]=R32(c->r[1]+0x00000018u); // 803D4BB4
  c->r[29]=R32(c->r[1]+0x00000014u); // 803D4BB8
  c->lr=c->r[0]; // 803D4BBC
  c->r[1]=c->r[1]+0x00000020u; // 803D4BC0
  return; // 803D4BC4
}

// bta_hh_sdp_cmpl
void f_803D4BC8(Ctx* __restrict c) {
  trace_call(0x803D4BC8u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803D4BC8
  c->r[0]=c->lr; // 803D4BCC
  W32(c->r[1]+0x00000024u,c->r[0]); // 803D4BD0
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 803D4BD4
  W32(c->r[1]+0x00000018u,c->r[30]); // 803D4BD8
  c->r[30]=c->r[4]|c->r[4]; // 803D4BDC
  W32(c->r[1]+0x00000014u,c->r[29]); // 803D4BE0
  c->r[29]=c->r[3]|c->r[3]; // 803D4BE4
  c->r[0]=R8(c->r[13]+0xFFFFE318u); // 803D4BE8
  cmpu(c,0,c->r[0],0x00000005u); // 803D4BEC
  if (crb(c,0)) { goto L_803D4C08; } // 803D4BF0
  c->r[4]=0u+0x80710000u; // 803D4BF4
  c->r[5]=R8(c->r[30]+0x00000000u); // 803D4BF8
  c->r[4]=c->r[4]+0xFFFFAD48u; // 803D4BFC
  c->r[3]=0u+0x00000504u; // 803D4C00
  c->lr=0x803D4C08u; f_803D04F8(c); // 803D4C04
L_803D4C08:;
  c->r[3]=c->r[1]+0x00000008u; // 803D4C08
  c->r[4]=0u+0x00000000u; // 803D4C0C
  c->r[5]=0u+0x00000008u; // 803D4C10
  c->lr=0x803D4C18u; f_800043EC(c); // 803D4C14
  c->r[0]=R8(c->r[29]+0x00000016u); // 803D4C18
  c->r[3]=c->r[1]+0x00000008u; // 803D4C1C
  c->r[4]=c->r[29]+0x00000008u; // 803D4C20
  W8(c->r[1]+0x0000000Fu,c->r[0]); // 803D4C24
  c->lr=0x803D4C2Cu; f_803D0B30(c); // 803D4C28
  c->r[31]=R8(c->r[30]+0x00000000u); // 803D4C2C
  cmps(c,0,(int32_t)c->r[31],0); // 803D4C30
  if (!crb(c,2)) { goto L_803D4C9C; } // 803D4C34
  c->r[0]=R8(c->r[29]+0x00000019u); // 803D4C38
  cmps(c,0,(int32_t)c->r[0],0); // 803D4C3C
  if (!crb(c,2)) { goto L_803D4C8C; } // 803D4C40
  c->r[4]=R8(c->r[29]+0x00000014u); // 803D4C44
  c->r[3]=c->r[13]+0xFFFFA0D8u; // 803D4C48
  c->lr=0x803D4C50u; f_803E6B98(c); // 803D4C4C
  c->r[3]=R8(c->r[29]+0x00000016u); // 803D4C50
  c->lr=0x803D4C58u; f_803E6954(c); // 803D4C54
  c->r[5]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[5]); // 803D4C58
  c->r[31]=c->r[3]|c->r[3]; // 803D4C5C
  if (crb(c,2)) { goto L_803D4C9C; } // 803D4C60
  c->r[0]=R8(c->r[13]+0xFFFFE318u); // 803D4C64
  cmpu(c,0,c->r[0],0x00000005u); // 803D4C68
  if (crb(c,0)) { goto L_803D4C80; } // 803D4C6C
  c->r[4]=0u+0x80710000u; // 803D4C70
  c->r[3]=0u+0x00000504u; // 803D4C74
  c->r[4]=c->r[4]+0xFFFFAD68u; // 803D4C78
  c->lr=0x803D4C80u; f_803D04F8(c); // 803D4C7C
L_803D4C80:;
  c->r[3]=R8(c->r[29]+0x00000016u); // 803D4C80
  c->lr=0x803D4C88u; f_803E688C(c); // 803D4C84
  goto L_803D4C9C; // 803D4C88
L_803D4C8C:;
  c->r[3]=c->r[29]|c->r[29]; // 803D4C8C
  c->r[4]=0u+0x0000170Bu; // 803D4C90
  c->r[5]=0u+0x00000000u; // 803D4C94
  c->lr=0x803D4C9Cu; f_803D60FC(c); // 803D4C98
L_803D4C9C:;
  c->r[0]=rotl(c->r[31],0)&0x000000FFu; cr0(c,c->r[0]); // 803D4C9C
  if (crb(c,2)) { goto L_803D4D14; } // 803D4CA0
  c->r[0]=R8(c->r[30]+0x00000000u); // 803D4CA4
  cmpu(c,0,c->r[0],0x000000FFu); // 803D4CA8
  if (!crb(c,2)) { goto L_803D4CBC; } // 803D4CAC
  c->r[0]=0u+0x0000000Au; // 803D4CB0
  W8(c->r[1]+0x0000000Eu,c->r[0]); // 803D4CB4
  goto L_803D4CC4; // 803D4CB8
L_803D4CBC:;
  c->r[0]=0u+0x00000007u; // 803D4CBC
  W8(c->r[1]+0x0000000Eu,c->r[0]); // 803D4CC0
L_803D4CC4:;
  c->r[5]=0u+0x807B0000u; // 803D4CC4
  c->r[4]=c->r[1]+0x00000008u; // 803D4CC8
  c->r[5]=c->r[5]+0x00006568u; // 803D4CCC
  c->r[3]=0u+0x00000002u; // 803D4CD0
  c->r[12]=R32(c->r[5]+0x00000224u); // 803D4CD4
  c->ctr=c->r[12]; // 803D4CD8
  if (true) { c->lr=0x803D4CE0u; dispatch(c,c->ctr); } // 803D4CDC
  c->r[3]=c->r[29]|c->r[29]; // 803D4CE0
  c->r[4]=0u+0x00001701u; // 803D4CE4
  c->r[5]=0u+0x00000000u; // 803D4CE8
  c->lr=0x803D4CF0u; f_803D60FC(c); // 803D4CEC
  c->r[0]=R8(c->r[29]+0x00000015u); // 803D4CF0
  cmps(c,0,(int32_t)c->r[0],0); // 803D4CF4
  if (!crb(c,2)) { goto L_803D4D10; } // 803D4CF8
  c->r[0]=R8(c->r[29]+0x00000019u); // 803D4CFC
  cmps(c,0,(int32_t)c->r[0],0); // 803D4D00
  if (!crb(c,2)) { goto L_803D4D10; } // 803D4D04
  c->r[3]=c->r[29]|c->r[29]; // 803D4D08
  c->lr=0x803D4D10u; f_803D678C(c); // 803D4D0C
L_803D4D10:;
  c->lr=0x803D4D14u; f_803D691C(c); // 803D4D10
L_803D4D14:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 803D4D14
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 803D4D18
  c->r[30]=R32(c->r[1]+0x00000018u); // 803D4D1C
  c->r[29]=R32(c->r[1]+0x00000014u); // 803D4D20
  c->lr=c->r[0]; // 803D4D24
  c->r[1]=c->r[1]+0x00000020u; // 803D4D28
  return; // 803D4D2C
}

// bta_hh_api_disc_act
void f_803D4D30(Ctx* __restrict c) {
  trace_call(0x803D4D30u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803D4D30
  c->r[0]=c->lr; // 803D4D34
  cmps(c,0,(int32_t)c->r[4],0); // 803D4D38
  W32(c->r[1]+0x00000014u,c->r[0]); // 803D4D3C
  if (crb(c,2)) { goto L_803D4D50; } // 803D4D40
  c->r[0]=R16(c->r[4]+0x00000006u); // 803D4D44
  c->r[3]=rotl(c->r[0],0)&0x000000FFu; // 803D4D48
  goto L_803D4D54; // 803D4D4C
L_803D4D50:;
  c->r[3]=R8(c->r[3]+0x00000016u); // 803D4D50
L_803D4D54:;
  c->r[0]=0u+0x00000006u; // 803D4D54
  W8(c->r[1]+0x00000009u,c->r[3]); // 803D4D58
  W8(c->r[1]+0x00000008u,c->r[0]); // 803D4D5C
  c->lr=0x803D4D64u; f_803E6AF8(c); // 803D4D60
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 803D4D64
  if (crb(c,2)) { goto L_803D4D88; } // 803D4D68
  c->r[5]=0u+0x807B0000u; // 803D4D6C
  c->r[4]=c->r[1]+0x00000008u; // 803D4D70
  c->r[5]=c->r[5]+0x00006568u; // 803D4D74
  c->r[3]=0u+0x00000003u; // 803D4D78
  c->r[12]=R32(c->r[5]+0x00000224u); // 803D4D7C
  c->ctr=c->r[12]; // 803D4D80
  if (true) { c->lr=0x803D4D88u; dispatch(c,c->ctr); } // 803D4D84
L_803D4D88:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 803D4D88
  c->lr=c->r[0]; // 803D4D8C
  c->r[1]=c->r[1]+0x00000010u; // 803D4D90
  return; // 803D4D94
}

// bta_hh_open_cmpl_act
void f_803D4D98(Ctx* __restrict c) {
  trace_call(0x803D4D98u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803D4D98
  c->r[0]=c->lr; // 803D4D9C
  cmps(c,0,(int32_t)c->r[4],0); // 803D4DA0
  W32(c->r[1]+0x00000024u,c->r[0]); // 803D4DA4
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 803D4DA8
  W32(c->r[1]+0x00000018u,c->r[30]); // 803D4DAC
  W32(c->r[1]+0x00000014u,c->r[29]); // 803D4DB0
  c->r[29]=c->r[3]|c->r[3]; // 803D4DB4
  if (crb(c,2)) { goto L_803D4DC8; } // 803D4DB8
  c->r[0]=R16(c->r[4]+0x00000006u); // 803D4DBC
  c->r[30]=rotl(c->r[0],0)&0x000000FFu; // 803D4DC0
  goto L_803D4DCC; // 803D4DC4
L_803D4DC8:;
  c->r[30]=R8(c->r[3]+0x00000016u); // 803D4DC8
L_803D4DCC:;
  c->r[3]=c->r[1]+0x00000008u; // 803D4DCC
  c->r[4]=0u+0x00000000u; // 803D4DD0
  c->r[5]=0u+0x00000008u; // 803D4DD4
  c->lr=0x803D4DDCu; f_800043EC(c); // 803D4DD8
  W8(c->r[1]+0x0000000Fu,c->r[30]); // 803D4DDC
  c->r[3]=c->r[1]+0x00000008u; // 803D4DE0
  c->r[4]=c->r[29]+0x00000008u; // 803D4DE4
  c->lr=0x803D4DECu; f_803D0B30(c); // 803D4DE8
  c->r[31]=0u+0x807B0000u; // 803D4DEC
  c->r[31]=c->r[31]+0x00006568u; // 803D4DF0
  c->r[3]=R8(c->r[31]+0x0000022Du); // 803D4DF4
  c->r[0]=c->r[3]+0x00000001u; // 803D4DF8
  W8(c->r[31]+0x0000022Du,c->r[0]); // 803D4DFC
  c->r[3]=R8(c->r[29]+0x00000016u); // 803D4E00
  c->r[4]=R8(c->r[29]+0x00000013u); // 803D4E04
  c->r[5]=R16(c->r[29]+0x0000000Eu); // 803D4E08
  c->r[6]=R8(c->r[29]+0x00000015u); // 803D4E0C
  c->lr=0x803D4E14u; f_8040F290(c); // 803D4E10
  c->r[4]=R8(c->r[29]+0x00000015u); // 803D4E14
  c->r[5]=c->r[29]+0x00000008u; // 803D4E18
  c->r[3]=0u+0x00000017u; // 803D4E1C
  c->lr=0x803D4E24u; f_803D0C34(c); // 803D4E20
  c->r[5]=R8(c->r[29]+0x0000001Bu); // 803D4E24
  cmps(c,0,(int32_t)c->r[5],0); // 803D4E28
  if (crb(c,2)) { goto L_803D4E80; } // 803D4E2C
  c->r[3]=c->r[30]|c->r[30]; // 803D4E30
  c->r[4]=0u+0x00000007u; // 803D4E34
  c->r[6]=0u+0x00000000u; // 803D4E38
  c->r[7]=0u+0x00000000u; // 803D4E3C
  c->r[8]=0u+0x00000000u; // 803D4E40
  c->lr=0x803D4E48u; f_803E69B8(c); // 803D4E44
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 803D4E48
  W8(c->r[1]+0x0000000Eu,c->r[3]); // 803D4E4C
  if (crb(c,2)) { goto L_803D4E74; } // 803D4E50
  c->r[12]=R32(c->r[31]+0x00000224u); // 803D4E54
  c->r[0]=0u+0x00000008u; // 803D4E58
  W8(c->r[1]+0x0000000Eu,c->r[0]); // 803D4E5C
  c->r[4]=c->r[1]+0x00000008u; // 803D4E60
  c->r[3]=0u+0x00000002u; // 803D4E64
  c->ctr=c->r[12]; // 803D4E68
  if (true) { c->lr=0x803D4E70u; dispatch(c,c->ctr); } // 803D4E6C
  goto L_803D4E9C; // 803D4E70
L_803D4E74:;
  c->r[0]=0u+0x00000002u; // 803D4E74
  W16(c->r[29]+0x00000010u,c->r[0]); // 803D4E78
  goto L_803D4E9C; // 803D4E7C
L_803D4E80:;
  c->r[0]=0u+0x00000001u; // 803D4E80
  c->r[4]=c->r[1]+0x00000008u; // 803D4E84
  W8(c->r[29]+0x0000001Au,c->r[0]); // 803D4E88
  c->r[3]=0u+0x00000002u; // 803D4E8C
  c->r[12]=R32(c->r[31]+0x00000224u); // 803D4E90
  c->ctr=c->r[12]; // 803D4E94
  if (true) { c->lr=0x803D4E9Cu; dispatch(c,c->ctr); } // 803D4E98
L_803D4E9C:;
  c->r[0]=0u+0x00000000u; // 803D4E9C
  W8(c->r[29]+0x00000019u,c->r[0]); // 803D4EA0
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 803D4EA4
  c->r[30]=R32(c->r[1]+0x00000018u); // 803D4EA8
  c->r[29]=R32(c->r[1]+0x00000014u); // 803D4EAC
  c->r[0]=R32(c->r[1]+0x00000024u); // 803D4EB0
  c->lr=c->r[0]; // 803D4EB4
  c->r[1]=c->r[1]+0x00000020u; // 803D4EB8
  return; // 803D4EBC
}

// bta_hh_open_act
void f_803D4EC0(Ctx* __restrict c) {
  trace_call(0x803D4EC0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803D4EC0
  c->r[0]=c->lr; // 803D4EC4
  cmps(c,0,(int32_t)c->r[4],0); // 803D4EC8
  W32(c->r[1]+0x00000024u,c->r[0]); // 803D4ECC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 803D4ED0
  c->r[31]=c->r[4]|c->r[4]; // 803D4ED4
  W32(c->r[1]+0x00000018u,c->r[30]); // 803D4ED8
  c->r[30]=c->r[3]|c->r[3]; // 803D4EDC
  if (crb(c,2)) { goto L_803D4EF0; } // 803D4EE0
  c->r[0]=R16(c->r[4]+0x00000006u); // 803D4EE4
  c->r[5]=rotl(c->r[0],0)&0x000000FFu; // 803D4EE8
  goto L_803D4EF4; // 803D4EEC
L_803D4EF0:;
  c->r[5]=R8(c->r[3]+0x00000016u); // 803D4EF0
L_803D4EF4:;
  c->r[0]=R8(c->r[13]+0xFFFFE318u); // 803D4EF4
  cmpu(c,0,c->r[0],0x00000004u); // 803D4EF8
  if (crb(c,0)) { goto L_803D4F10; } // 803D4EFC
  c->r[4]=0u+0x80710000u; // 803D4F00
  c->r[3]=0u+0x00000503u; // 803D4F04
  c->r[4]=c->r[4]+0xFFFFADB4u; // 803D4F08
  c->lr=0x803D4F10u; f_803D04F8(c); // 803D4F0C
L_803D4F10:;
  c->r[0]=R8(c->r[30]+0x00000015u); // 803D4F10
  cmps(c,0,(int32_t)c->r[0],0); // 803D4F14
  if (crb(c,2)) { goto L_803D4F30; } // 803D4F18
  c->r[3]=c->r[30]|c->r[30]; // 803D4F1C
  c->r[5]=c->r[31]|c->r[31]; // 803D4F20
  c->r[4]=0u+0x0000170Bu; // 803D4F24
  c->lr=0x803D4F2Cu; f_803D60FC(c); // 803D4F28
  goto L_803D4F60; // 803D4F2C
L_803D4F30:;
  c->r[0]=0u+0x00000001u; // 803D4F30
  c->r[3]=c->r[1]+0x00000008u; // 803D4F34
  W8(c->r[30]+0x00000019u,c->r[0]); // 803D4F38
  c->r[4]=0u+0x00000000u; // 803D4F3C
  c->r[5]=0u+0x00000010u; // 803D4F40
  c->lr=0x803D4F48u; f_800043EC(c); // 803D4F44
  c->r[3]=c->r[1]+0x00000010u; // 803D4F48
  c->r[4]=c->r[30]+0x00000008u; // 803D4F4C
  c->lr=0x803D4F54u; f_803D0B30(c); // 803D4F50
  c->r[3]=c->r[30]|c->r[30]; // 803D4F54
  c->r[4]=c->r[1]+0x00000008u; // 803D4F58
  c->lr=0x803D4F60u; f_803D4A34(c); // 803D4F5C
L_803D4F60:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 803D4F60
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 803D4F64
  c->r[30]=R32(c->r[1]+0x00000018u); // 803D4F68
  c->lr=c->r[0]; // 803D4F6C
  c->r[1]=c->r[1]+0x00000020u; // 803D4F70
  return; // 803D4F74
}

// bta_hh_data_act
void f_803D4F78(Ctx* __restrict c) {
  trace_call(0x803D4F78u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803D4F78
  c->r[0]=c->lr; // 803D4F7C
  c->r[8]=c->r[3]|c->r[3]; // 803D4F80
  W32(c->r[1]+0x00000014u,c->r[0]); // 803D4F84
  c->r[5]=R32(c->r[4]+0x0000000Cu); // 803D4F88
  W32(c->r[1]+0x00000008u,c->r[5]); // 803D4F8C
  c->r[0]=R16(c->r[5]+0x00000004u); // 803D4F90
  c->r[3]=R16(c->r[4]+0x00000006u); // 803D4F94
  c->r[4]=c->r[5]+c->r[0]; // 803D4F98
  c->r[5]=R16(c->r[5]+0x00000002u); // 803D4F9C
  c->r[6]=R8(c->r[8]+0x0000001Bu); // 803D4FA0
  c->r[3]=rotl(c->r[3],0)&0x000000FFu; // 803D4FA4
  c->r[7]=R8(c->r[8]+0x00000013u); // 803D4FA8
  c->r[4]=c->r[4]+0x00000008u; // 803D4FAC
  c->r[8]=R8(c->r[8]+0x00000015u); // 803D4FB0
  c->lr=0x803D4FB8u; f_8040F254(c); // 803D4FB4
  c->r[3]=c->r[1]+0x00000008u; // 803D4FB8
  c->lr=0x803D4FC0u; f_803D127C(c); // 803D4FBC
  c->r[0]=R32(c->r[1]+0x00000014u); // 803D4FC0
  c->lr=c->r[0]; // 803D4FC4
  c->r[1]=c->r[1]+0x00000010u; // 803D4FC8
  return; // 803D4FCC
}

// bta_hh_handsk_act
void f_803D4FD0(Ctx* __restrict c) {
  trace_call(0x803D4FD0u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803D4FD0
  c->r[0]=c->lr; // 803D4FD4
  W32(c->r[1]+0x00000044u,c->r[0]); // 803D4FD8
  W32(c->r[1]+0x0000003Cu,c->r[31]); // 803D4FDC
  c->r[31]=c->r[3]|c->r[3]; // 803D4FE0
  W32(c->r[1]+0x00000038u,c->r[30]); // 803D4FE4
  c->r[30]=0u+0x80710000u; // 803D4FE8
  c->r[30]=c->r[30]+0xFFFFAC70u; // 803D4FEC
  W32(c->r[1]+0x00000034u,c->r[29]); // 803D4FF0
  c->r[29]=c->r[4]|c->r[4]; // 803D4FF4
  c->r[0]=R8(c->r[13]+0xFFFFE318u); // 803D4FF8
  cmpu(c,0,c->r[0],0x00000005u); // 803D4FFC
  if (crb(c,0)) { goto L_803D5074; } // 803D5000
  c->r[0]=R16(c->r[3]+0x00000010u); // 803D5004
  cmpu(c,0,c->r[0],0x00000009u); // 803D5008
  if (crb(c,1)) { goto L_803D5060; } // 803D500C
  c->r[3]=0u+0x80710000u; // 803D5010
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 803D5014
  c->r[3]=c->r[3]+0xFFFFAEF0u; // 803D5018
  c->r[3]=R32(c->r[3]+c->r[0]); // 803D501C
  c->ctr=c->r[3]; // 803D5020
  if (true) { switch (c->ctr) { case 0x803D5028u: goto L_803D5028; case 0x803D5030u: goto L_803D5030; case 0x803D5038u: goto L_803D5038; case 0x803D5040u: goto L_803D5040; case 0x803D5048u: goto L_803D5048; case 0x803D5050u: goto L_803D5050; case 0x803D5058u: goto L_803D5058; case 0x803D5060u: goto L_803D5060; case 0x803D5098u: goto L_803D5098; case 0x803D5118u: goto L_803D5118; case 0x803D5188u: goto L_803D5188; case 0x803D51F4u: goto L_803D51F4; default: break; } dispatch(c,c->ctr); return; } // 803D5024
L_803D5028:;
  c->r[5]=c->r[30]+0x0000016Cu; // 803D5028
  goto L_803D5064; // 803D502C
L_803D5030:;
  c->r[5]=c->r[30]+0x00000180u; // 803D5030
  goto L_803D5064; // 803D5034
L_803D5038:;
  c->r[5]=c->r[30]+0x00000194u; // 803D5038
  goto L_803D5064; // 803D503C
L_803D5040:;
  c->r[5]=c->r[30]+0x000001ACu; // 803D5040
  goto L_803D5064; // 803D5044
L_803D5048:;
  c->r[5]=c->r[30]+0x000001C4u; // 803D5048
  goto L_803D5064; // 803D504C
L_803D5050:;
  c->r[5]=c->r[30]+0x000001D8u; // 803D5050
  goto L_803D5064; // 803D5054
L_803D5058:;
  c->r[5]=c->r[30]+0x000001F0u; // 803D5058
  goto L_803D5064; // 803D505C
L_803D5060:;
  c->r[5]=c->r[30]+0x00000200u; // 803D5060
L_803D5064:;
  c->r[6]=R32(c->r[29]+0x00000008u); // 803D5064
  c->r[4]=c->r[30]+0x00000210u; // 803D5068
  c->r[3]=0u+0x00000504u; // 803D506C
  c->lr=0x803D5074u; f_803D0510(c); // 803D5070
L_803D5074:;
  c->r[0]=R16(c->r[31]+0x00000010u); // 803D5074
  cmpu(c,0,c->r[0],0x00000009u); // 803D5078
  if (crb(c,1)) { goto L_803D51F4; } // 803D507C
  c->r[3]=0u+0x80710000u; // 803D5080
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 803D5084
  c->r[3]=c->r[3]+0xFFFFAEC8u; // 803D5088
  c->r[3]=R32(c->r[3]+c->r[0]); // 803D508C
  c->ctr=c->r[3]; // 803D5090
  if (true) { switch (c->ctr) { case 0x803D5028u: goto L_803D5028; case 0x803D5030u: goto L_803D5030; case 0x803D5038u: goto L_803D5038; case 0x803D5040u: goto L_803D5040; case 0x803D5048u: goto L_803D5048; case 0x803D5050u: goto L_803D5050; case 0x803D5058u: goto L_803D5058; case 0x803D5060u: goto L_803D5060; case 0x803D5098u: goto L_803D5098; case 0x803D5118u: goto L_803D5118; case 0x803D5188u: goto L_803D5188; case 0x803D51F4u: goto L_803D51F4; default: break; } dispatch(c,c->ctr); return; } // 803D5094
L_803D5098:;
  c->r[3]=c->r[1]+0x00000018u; // 803D5098
  c->r[4]=0u+0x00000000u; // 803D509C
  c->r[5]=0u+0x0000000Au; // 803D50A0
  c->lr=0x803D50A8u; f_800043EC(c); // 803D50A4
  c->r[0]=R8(c->r[31]+0x00000016u); // 803D50A8
  W8(c->r[1]+0x00000019u,c->r[0]); // 803D50AC
  c->r[0]=R32(c->r[29]+0x00000008u); // 803D50B0
  cmps(c,0,(int32_t)c->r[0],5); // 803D50B4
  if (!crb(c,0)) { goto L_803D50CC; } // 803D50B8
  cmps(c,0,(int32_t)c->r[0],0); // 803D50BC
  if (crb(c,2)) { goto L_803D50D8; } // 803D50C0
  if (!crb(c,0)) { goto L_803D50E0; } // 803D50C4
  goto L_803D50E8; // 803D50C8
L_803D50CC:;
  cmps(c,0,(int32_t)c->r[0],16); // 803D50CC
  if (!crb(c,0)) { goto L_803D50E8; } // 803D50D0
  goto L_803D50E8; // 803D50D4
L_803D50D8:;
  c->r[0]=0u+0x00000000u; // 803D50D8
  goto L_803D50EC; // 803D50DC
L_803D50E0:;
  c->r[0]=rotl(c->r[0],0)&0x000000FFu; // 803D50E0
  goto L_803D50EC; // 803D50E4
L_803D50E8:;
  c->r[0]=0u+0x00000005u; // 803D50E8
L_803D50EC:;
  c->r[3]=0u+0x807B0000u; // 803D50EC
  W8(c->r[1]+0x00000018u,c->r[0]); // 803D50F0
  c->r[3]=c->r[3]+0x00006568u; // 803D50F4
  c->r[4]=c->r[1]+0x00000018u; // 803D50F8
  c->r[12]=R32(c->r[3]+0x00000224u); // 803D50FC
  c->r[3]=R16(c->r[31]+0x00000010u); // 803D5100
  c->ctr=c->r[12]; // 803D5104
  if (true) { c->lr=0x803D510Cu; dispatch(c,c->ctr); } // 803D5108
  c->r[0]=0u+0x00000000u; // 803D510C
  W16(c->r[31]+0x00000010u,c->r[0]); // 803D5110
  goto L_803D520C; // 803D5114
L_803D5118:;
  c->r[0]=R8(c->r[31]+0x00000016u); // 803D5118
  W8(c->r[1]+0x00000009u,c->r[0]); // 803D511C
  c->r[0]=R32(c->r[29]+0x00000008u); // 803D5120
  cmps(c,0,(int32_t)c->r[0],5); // 803D5124
  if (!crb(c,0)) { goto L_803D513C; } // 803D5128
  cmps(c,0,(int32_t)c->r[0],0); // 803D512C
  if (crb(c,2)) { goto L_803D5148; } // 803D5130
  if (!crb(c,0)) { goto L_803D5150; } // 803D5134
  goto L_803D5158; // 803D5138
L_803D513C:;
  cmps(c,0,(int32_t)c->r[0],16); // 803D513C
  if (!crb(c,0)) { goto L_803D5158; } // 803D5140
  goto L_803D5158; // 803D5144
L_803D5148:;
  c->r[0]=0u+0x00000000u; // 803D5148
  goto L_803D515C; // 803D514C
L_803D5150:;
  c->r[0]=rotl(c->r[0],0)&0x000000FFu; // 803D5150
  goto L_803D515C; // 803D5154
L_803D5158:;
  c->r[0]=0u+0x00000005u; // 803D5158
L_803D515C:;
  c->r[3]=0u+0x807B0000u; // 803D515C
  W8(c->r[1]+0x00000008u,c->r[0]); // 803D5160
  c->r[3]=c->r[3]+0x00006568u; // 803D5164
  c->r[4]=c->r[1]+0x00000008u; // 803D5168
  c->r[12]=R32(c->r[3]+0x00000224u); // 803D516C
  c->r[3]=R16(c->r[31]+0x00000010u); // 803D5170
  c->ctr=c->r[12]; // 803D5174
  if (true) { c->lr=0x803D517Cu; dispatch(c,c->ctr); } // 803D5178
  c->r[0]=0u+0x00000000u; // 803D517C
  W16(c->r[31]+0x00000010u,c->r[0]); // 803D5180
  goto L_803D520C; // 803D5184
L_803D5188:;
  c->r[0]=R32(c->r[29]+0x00000008u); // 803D5188
  c->r[3]=0u+0x00000000u; // 803D518C
  cmps(c,0,(int32_t)c->r[0],0); // 803D5190
  if (crb(c,2)) { goto L_803D519C; } // 803D5194
  c->r[3]=0u+0x00000008u; // 803D5198
L_803D519C:;
  W8(c->r[1]+0x00000016u,c->r[3]); // 803D519C
  c->r[3]=c->r[1]+0x00000010u; // 803D51A0
  c->r[4]=c->r[31]+0x00000008u; // 803D51A4
  c->r[0]=R8(c->r[31]+0x00000016u); // 803D51A8
  W8(c->r[1]+0x00000017u,c->r[0]); // 803D51AC
  c->lr=0x803D51B4u; f_803D0B30(c); // 803D51B0
  c->r[5]=0u+0x807B0000u; // 803D51B4
  c->r[4]=c->r[1]+0x00000010u; // 803D51B8
  c->r[5]=c->r[5]+0x00006568u; // 803D51BC
  c->r[3]=R16(c->r[31]+0x00000010u); // 803D51C0
  c->r[12]=R32(c->r[5]+0x00000224u); // 803D51C4
  c->ctr=c->r[12]; // 803D51C8
  if (true) { c->lr=0x803D51D0u; dispatch(c,c->ctr); } // 803D51CC
  c->lr=0x803D51D4u; f_803D691C(c); // 803D51D0
  c->r[0]=0u+0x00000000u; // 803D51D4
  W16(c->r[31]+0x00000010u,c->r[0]); // 803D51D8
  c->r[0]=R8(c->r[1]+0x00000016u); // 803D51DC
  cmps(c,0,(int32_t)c->r[0],0); // 803D51E0
  if (!crb(c,2)) { goto L_803D520C; } // 803D51E4
  c->r[0]=0u+0x00000001u; // 803D51E8
  W8(c->r[31]+0x0000001Au,c->r[0]); // 803D51EC
  goto L_803D520C; // 803D51F0
L_803D51F4:;
  c->r[0]=R8(c->r[13]+0xFFFFE318u); // 803D51F4
  cmpu(c,0,c->r[0],0x00000005u); // 803D51F8
  if (crb(c,0)) { goto L_803D520C; } // 803D51FC
  c->r[4]=c->r[30]+0x0000023Cu; // 803D5200
  c->r[3]=0u+0x00000504u; // 803D5204
  c->lr=0x803D520Cu; f_803D04E0(c); // 803D5208
L_803D520C:;
  c->r[4]=R8(c->r[31]+0x00000015u); // 803D520C
  c->r[5]=c->r[31]+0x00000008u; // 803D5210
  c->r[3]=0u+0x00000017u; // 803D5214
  c->lr=0x803D521Cu; f_803D0DF0(c); // 803D5218
  c->r[0]=R32(c->r[1]+0x00000044u); // 803D521C
  c->r[31]=R32(c->r[1]+0x0000003Cu); // 803D5220
  c->r[30]=R32(c->r[1]+0x00000038u); // 803D5224
  c->r[29]=R32(c->r[1]+0x00000034u); // 803D5228
  c->lr=c->r[0]; // 803D522C
  c->r[1]=c->r[1]+0x00000040u; // 803D5230
  return; // 803D5234
}

// bta_hh_ctrl_dat_act
void f_803D5238(Ctx* __restrict c) {
  trace_call(0x803D5238u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803D5238
  c->r[0]=c->lr; // 803D523C
  W32(c->r[1]+0x00000034u,c->r[0]); // 803D5240
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 803D5244
  c->r[31]=c->r[3]|c->r[3]; // 803D5248
  W32(c->r[1]+0x00000028u,c->r[30]); // 803D524C
  W32(c->r[1]+0x00000024u,c->r[29]); // 803D5250
  c->r[29]=0u+0x80710000u; // 803D5254
  c->r[29]=c->r[29]+0xFFFFAC70u; // 803D5258
  c->r[4]=R32(c->r[4]+0x0000000Cu); // 803D525C
  c->r[0]=R8(c->r[13]+0xFFFFE318u); // 803D5260
  W32(c->r[1]+0x00000008u,c->r[4]); // 803D5264
  cmpu(c,0,c->r[0],0x00000005u); // 803D5268
  c->r[0]=R16(c->r[4]+0x00000004u); // 803D526C
  c->r[30]=c->r[4]+c->r[0]; // 803D5270
  if (crb(c,0)) { goto L_803D52E4; } // 803D5274
  c->r[0]=R16(c->r[3]+0x00000010u); // 803D5278
  cmpu(c,0,c->r[0],0x00000009u); // 803D527C
  if (crb(c,1)) { goto L_803D52D4; } // 803D5280
  c->r[3]=0u+0x80710000u; // 803D5284
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 803D5288
  c->r[3]=c->r[3]+0xFFFFAF9Cu; // 803D528C
  c->r[3]=R32(c->r[3]+c->r[0]); // 803D5290
  c->ctr=c->r[3]; // 803D5294
  if (true) { switch (c->ctr) { case 0x803D529Cu: goto L_803D529C; case 0x803D52A4u: goto L_803D52A4; case 0x803D52ACu: goto L_803D52AC; case 0x803D52B4u: goto L_803D52B4; case 0x803D52BCu: goto L_803D52BC; case 0x803D52C4u: goto L_803D52C4; case 0x803D52CCu: goto L_803D52CC; case 0x803D52D4u: goto L_803D52D4; case 0x803D5380u: goto L_803D5380; case 0x803D5388u: goto L_803D5388; case 0x803D5390u: goto L_803D5390; case 0x803D5398u: goto L_803D5398; case 0x803D53A0u: goto L_803D53A0; case 0x803D53A8u: goto L_803D53A8; case 0x803D53B0u: goto L_803D53B0; case 0x803D53B8u: goto L_803D53B8; default: break; } dispatch(c,c->ctr); return; } // 803D5298
L_803D529C:;
  c->r[5]=c->r[29]+0x0000016Cu; // 803D529C
  goto L_803D52D8; // 803D52A0
L_803D52A4:;
  c->r[5]=c->r[29]+0x00000180u; // 803D52A4
  goto L_803D52D8; // 803D52A8
L_803D52AC:;
  c->r[5]=c->r[29]+0x00000194u; // 803D52AC
  goto L_803D52D8; // 803D52B0
L_803D52B4:;
  c->r[5]=c->r[29]+0x000001ACu; // 803D52B4
  goto L_803D52D8; // 803D52B8
L_803D52BC:;
  c->r[5]=c->r[29]+0x000001C4u; // 803D52BC
  goto L_803D52D8; // 803D52C0
L_803D52C4:;
  c->r[5]=c->r[29]+0x000001D8u; // 803D52C4
  goto L_803D52D8; // 803D52C8
L_803D52CC:;
  c->r[5]=c->r[29]+0x000001F0u; // 803D52CC
  goto L_803D52D8; // 803D52D0
L_803D52D4:;
  c->r[5]=c->r[29]+0x00000200u; // 803D52D4
L_803D52D8:;
  c->r[4]=c->r[29]+0x000002A8u; // 803D52D8
  c->r[3]=0u+0x00000504u; // 803D52DC
  c->lr=0x803D52E4u; f_803D04F8(c); // 803D52E0
L_803D52E4:;
  c->r[0]=0u+0x00000000u; // 803D52E4
  W8(c->r[1]+0x0000000Cu,c->r[0]); // 803D52E8
  c->r[0]=R8(c->r[31]+0x00000016u); // 803D52EC
  W8(c->r[1]+0x0000000Du,c->r[0]); // 803D52F0
  c->r[4]=R16(c->r[31]+0x00000010u); // 803D52F4
  cmps(c,0,(int32_t)c->r[4],7); // 803D52F8
  if (crb(c,2)) { goto L_803D5354; } // 803D52FC
  if (!crb(c,0)) { goto L_803D531C; } // 803D5300
  cmps(c,0,(int32_t)c->r[4],5); // 803D5304
  if (crb(c,2)) { goto L_803D5354; } // 803D5308
  if (!crb(c,0)) { goto L_803D5348; } // 803D530C
  cmps(c,0,(int32_t)c->r[4],4); // 803D5310
  if (!crb(c,0)) { goto L_803D5334; } // 803D5314
  goto L_803D5354; // 803D5318
L_803D531C:;
  cmps(c,0,(int32_t)c->r[4],9); // 803D531C
  if (crb(c,2)) { goto L_803D5354; } // 803D5320
  if (!crb(c,0)) { goto L_803D5354; } // 803D5324
  c->r[0]=R8(c->r[30]+0x00000008u); // 803D5328
  W8(c->r[1]+0x0000000Eu,c->r[0]); // 803D532C
  goto L_803D53C8; // 803D5330
L_803D5334:;
  c->r[4]=R32(c->r[1]+0x00000008u); // 803D5334
  c->r[3]=c->r[1]+0x0000000Eu; // 803D5338
  c->r[5]=0u+0x00000008u; // 803D533C
  c->lr=0x803D5344u; f_802DC484(c); // 803D5340
  goto L_803D53C8; // 803D5344
L_803D5348:;
  c->r[0]=R8(c->r[30]+0x00000008u); // 803D5348
  W8(c->r[1]+0x0000000Eu,c->r[0]); // 803D534C
  goto L_803D53C8; // 803D5350
L_803D5354:;
  c->r[0]=R8(c->r[13]+0xFFFFE318u); // 803D5354
  cmpu(c,0,c->r[0],0x00000005u); // 803D5358
  if (crb(c,0)) { goto L_803D53C8; } // 803D535C
  cmpu(c,0,c->r[4],0x00000009u); // 803D5360
  if (crb(c,1)) { goto L_803D53B8; } // 803D5364
  c->r[3]=0u+0x80710000u; // 803D5368
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFFCu; // 803D536C
  c->r[3]=c->r[3]+0xFFFFAF74u; // 803D5370
  c->r[3]=R32(c->r[3]+c->r[0]); // 803D5374
  c->ctr=c->r[3]; // 803D5378
  if (true) { switch (c->ctr) { case 0x803D529Cu: goto L_803D529C; case 0x803D52A4u: goto L_803D52A4; case 0x803D52ACu: goto L_803D52AC; case 0x803D52B4u: goto L_803D52B4; case 0x803D52BCu: goto L_803D52BC; case 0x803D52C4u: goto L_803D52C4; case 0x803D52CCu: goto L_803D52CC; case 0x803D52D4u: goto L_803D52D4; case 0x803D5380u: goto L_803D5380; case 0x803D5388u: goto L_803D5388; case 0x803D5390u: goto L_803D5390; case 0x803D5398u: goto L_803D5398; case 0x803D53A0u: goto L_803D53A0; case 0x803D53A8u: goto L_803D53A8; case 0x803D53B0u: goto L_803D53B0; case 0x803D53B8u: goto L_803D53B8; default: break; } dispatch(c,c->ctr); return; } // 803D537C
L_803D5380:;
  c->r[5]=c->r[29]+0x0000016Cu; // 803D5380
  goto L_803D53BC; // 803D5384
L_803D5388:;
  c->r[5]=c->r[29]+0x00000180u; // 803D5388
  goto L_803D53BC; // 803D538C
L_803D5390:;
  c->r[5]=c->r[29]+0x00000194u; // 803D5390
  goto L_803D53BC; // 803D5394
L_803D5398:;
  c->r[5]=c->r[29]+0x000001ACu; // 803D5398
  goto L_803D53BC; // 803D539C
L_803D53A0:;
  c->r[5]=c->r[29]+0x000001C4u; // 803D53A0
  goto L_803D53BC; // 803D53A4
L_803D53A8:;
  c->r[5]=c->r[29]+0x000001D8u; // 803D53A8
  goto L_803D53BC; // 803D53AC
L_803D53B0:;
  c->r[5]=c->r[29]+0x000001F0u; // 803D53B0
  goto L_803D53BC; // 803D53B4
L_803D53B8:;
  c->r[5]=c->r[29]+0x00000200u; // 803D53B8
L_803D53BC:;
  c->r[4]=c->r[29]+0x000002CCu; // 803D53BC
  c->r[3]=0u+0x00000504u; // 803D53C0
  c->lr=0x803D53C8u; f_803D04F8(c); // 803D53C4
L_803D53C8:;
  c->r[4]=R8(c->r[31]+0x00000015u); // 803D53C8
  c->r[5]=c->r[31]+0x00000008u; // 803D53CC
  c->r[3]=0u+0x00000017u; // 803D53D0
  c->lr=0x803D53D8u; f_803D0E24(c); // 803D53D4
  c->r[4]=R8(c->r[31]+0x00000015u); // 803D53D8
  c->r[5]=c->r[31]+0x00000008u; // 803D53DC
  c->r[3]=0u+0x00000017u; // 803D53E0
  c->lr=0x803D53E8u; f_803D0DF0(c); // 803D53E4
  c->r[5]=0u+0x807B0000u; // 803D53E8
  c->r[4]=c->r[1]+0x0000000Cu; // 803D53EC
  c->r[5]=c->r[5]+0x00006568u; // 803D53F0
  c->r[3]=R16(c->r[31]+0x00000010u); // 803D53F4
  c->r[12]=R32(c->r[5]+0x00000224u); // 803D53F8
  c->ctr=c->r[12]; // 803D53FC
  if (true) { c->lr=0x803D5404u; dispatch(c,c->ctr); } // 803D5400
  c->r[0]=0u+0x00000000u; // 803D5404
  c->r[3]=c->r[1]+0x00000008u; // 803D5408
  W16(c->r[31]+0x00000010u,c->r[0]); // 803D540C
  c->lr=0x803D5414u; f_803D127C(c); // 803D5410
  c->r[0]=R32(c->r[1]+0x00000034u); // 803D5414
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 803D5418
  c->r[30]=R32(c->r[1]+0x00000028u); // 803D541C
  c->r[29]=R32(c->r[1]+0x00000024u); // 803D5420
  c->lr=c->r[0]; // 803D5424
  c->r[1]=c->r[1]+0x00000030u; // 803D5428
  return; // 803D542C
}

// bta_hh_close_act
void f_803D5430(Ctx* __restrict c) {
  trace_call(0x803D5430u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803D5430
  c->r[0]=c->lr; // 803D5434
  W32(c->r[1]+0x00000024u,c->r[0]); // 803D5438
  c->r[0]=0u+0x00000000u; // 803D543C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 803D5440
  c->r[31]=c->r[3]|c->r[3]; // 803D5444
  W32(c->r[1]+0x00000018u,c->r[30]); // 803D5448
  c->r[30]=0u+0x00000003u; // 803D544C
  W16(c->r[1]+0x0000000Cu,c->r[0]); // 803D5450
  c->r[0]=R8(c->r[3]+0x00000017u); // 803D5454
  c->r[6]=R32(c->r[4]+0x00000008u); // 803D5458
  cmps(c,0,(int32_t)c->r[0],0); // 803D545C
  if (crb(c,2)) { goto L_803D5468; } // 803D5460
  c->r[30]=0u+0x0000000Du; // 803D5464
L_803D5468:;
  c->r[5]=R8(c->r[3]+0x00000016u); // 803D5468
  c->r[0]=rotl(c->r[6],0)&0x00000700u; cr0(c,c->r[0]); // 803D546C
  W8(c->r[1]+0x0000000Du,c->r[5]); // 803D5470
  c->r[0]=R32(c->r[4]+0x00000008u); // 803D5474
  W8(c->r[1]+0x0000000Cu,c->r[0]); // 803D5478
  if (!crb(c,2)) { goto L_803D549C; } // 803D547C
  cmpu(c,0,c->r[6],0x0000000Fu); // 803D5480
  if (crb(c,2)) { goto L_803D549C; } // 803D5484
  cmpu(c,0,c->r[6],0x0000000Eu); // 803D5488
  if (crb(c,2)) { goto L_803D549C; } // 803D548C
  c->r[0]=R8(c->r[3]+0x0000001Au); // 803D5490
  cmps(c,0,(int32_t)c->r[0],0); // 803D5494
  if (!crb(c,2)) { goto L_803D54F0; } // 803D5498
L_803D549C:;
  c->r[3]=R8(c->r[3]+0x00000016u); // 803D549C
  cmpu(c,0,c->r[6],0x0000000Fu); // 803D54A0
  c->r[0]=0u+0x00000006u; // 803D54A4
  W8(c->r[1]+0x00000017u,c->r[3]); // 803D54A8
  if (!crb(c,2)) { goto L_803D54B4; } // 803D54AC
  c->r[0]=0u+0x0000000Cu; // 803D54B0
L_803D54B4:;
  W8(c->r[1]+0x00000016u,c->r[0]); // 803D54B4
  c->r[3]=c->r[1]+0x00000010u; // 803D54B8
  c->r[4]=c->r[31]+0x00000008u; // 803D54BC
  c->lr=0x803D54C4u; f_803D0B30(c); // 803D54C0
  c->r[3]=R8(c->r[31]+0x00000016u); // 803D54C4
  c->lr=0x803D54CCu; f_803E6AF8(c); // 803D54C8
  c->r[5]=0u+0x807B0000u; // 803D54CC
  c->r[4]=c->r[1]+0x00000010u; // 803D54D0
  c->r[5]=c->r[5]+0x00006568u; // 803D54D4
  c->r[3]=0u+0x00000002u; // 803D54D8
  c->r[12]=R32(c->r[5]+0x00000224u); // 803D54DC
  c->ctr=c->r[12]; // 803D54E0
  if (true) { c->lr=0x803D54E8u; dispatch(c,c->ctr); } // 803D54E4
  c->lr=0x803D54ECu; f_803D691C(c); // 803D54E8
  goto L_803D5618; // 803D54EC
L_803D54F0:;
  c->r[3]=R8(c->r[3]+0x00000016u); // 803D54F0
  c->r[4]=R8(c->r[31]+0x00000015u); // 803D54F4
  c->lr=0x803D54FCu; f_8040F2A0(c); // 803D54F8
  c->r[4]=R8(c->r[31]+0x00000015u); // 803D54FC
  c->r[5]=c->r[31]+0x00000008u; // 803D5500
  c->r[3]=0u+0x00000017u; // 803D5504
  c->lr=0x803D550Cu; f_803D0CF8(c); // 803D5508
  c->r[4]=0u+0x807B0000u; // 803D550C
  c->r[0]=0u+0x00000000u; // 803D5510
  c->r[4]=c->r[4]+0x00006568u; // 803D5514
  c->r[3]=R8(c->r[4]+0x0000022Du); // 803D5518
  c->r[3]=c->r[3]+0xFFFFFFFFu; // 803D551C
  W8(c->r[4]+0x0000022Du,c->r[3]); // 803D5520
  W8(c->r[31]+0x0000001Au,c->r[0]); // 803D5524
  c->r[0]=R8(c->r[1]+0x0000000Cu); // 803D5528
  cmps(c,0,(int32_t)c->r[0],0); // 803D552C
  if (crb(c,2)) { goto L_803D553C; } // 803D5530
  c->r[0]=0u+0x00000006u; // 803D5534
  W8(c->r[1]+0x0000000Cu,c->r[0]); // 803D5538
L_803D553C:;
  c->r[5]=0u+0x807B0000u; // 803D553C
  c->r[3]=c->r[30]|c->r[30]; // 803D5540
  c->r[5]=c->r[5]+0x00006568u; // 803D5544
  c->r[4]=c->r[1]+0x0000000Cu; // 803D5548
  c->r[12]=R32(c->r[5]+0x00000224u); // 803D554C
  c->ctr=c->r[12]; // 803D5550
  if (true) { c->lr=0x803D5558u; dispatch(c,c->ctr); } // 803D5554
  c->r[0]=R8(c->r[31]+0x00000017u); // 803D5558
  cmps(c,0,(int32_t)c->r[0],0); // 803D555C
  if (crb(c,2)) { goto L_803D5574; } // 803D5560
  c->r[3]=R8(c->r[31]+0x00000016u); // 803D5564
  c->lr=0x803D556Cu; f_803E688C(c); // 803D5568
  c->r[3]=c->r[31]|c->r[31]; // 803D556C
  c->lr=0x803D5574u; f_803D678C(c); // 803D5570
L_803D5574:;
  c->lr=0x803D5578u; f_803D691C(c); // 803D5574
  c->r[4]=0u+0x00000000u; // 803D5578
  c->r[3]=0u+0x807B0000u; // 803D557C
  W8(c->r[31]+0x00000017u,c->r[4]); // 803D5580
  c->r[3]=c->r[3]+0x00006568u; // 803D5584
  W16(c->r[31]+0x00000010u,c->r[4]); // 803D5588
  c->r[0]=R8(c->r[3]+0x0000022Du); // 803D558C
  cmps(c,0,(int32_t)c->r[0],0); // 803D5590
  if (!crb(c,2)) { goto L_803D5618; } // 803D5594
  c->r[0]=R8(c->r[3]+0x0000022Eu); // 803D5598
  cmps(c,0,(int32_t)c->r[0],0); // 803D559C
  if (crb(c,2)) { goto L_803D5618; } // 803D55A0
  W8(c->r[1]+0x00000008u,c->r[4]); // 803D55A4
  c->lr=0x803D55ACu; f_803E6618(c); // 803D55A8
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 803D55AC
  if (crb(c,2)) { goto L_803D55BC; } // 803D55B0
  c->r[0]=0u+0x00000006u; // 803D55B4
  W8(c->r[1]+0x00000008u,c->r[0]); // 803D55B8
L_803D55BC:;
  c->r[31]=0u+0x807B0000u; // 803D55BC
  c->r[30]=0u+0x00000000u; // 803D55C0
  c->r[31]=c->r[31]+0x00006568u; // 803D55C4
L_803D55C8:;
  c->r[0]=rotl(c->r[30],5)&0x00001FE0u; // 803D55C8
  c->r[3]=c->r[31]+c->r[0]; // 803D55CC
  c->r[3]=c->r[3]+0x00000014u; // 803D55D0
  c->lr=0x803D55D8u; f_803D127C(c); // 803D55D4
  c->r[30]=c->r[30]+0x00000001u; // 803D55D8
  cmpu(c,0,c->r[30],0x00000010u); // 803D55DC
  if (crb(c,0)) { IRQCHK(c); goto L_803D55C8; } // 803D55E0
  c->r[31]=0u+0x807B0000u; // 803D55E4
  c->r[31]=c->r[31]+0x00006568u; // 803D55E8
  c->r[3]=c->r[31]+0x00000228u; // 803D55EC
  c->lr=0x803D55F4u; f_803D127C(c); // 803D55F0
  c->r[12]=R32(c->r[31]+0x00000224u); // 803D55F4
  c->r[4]=c->r[1]+0x00000008u; // 803D55F8
  c->r[3]=0u+0x00000001u; // 803D55FC
  c->ctr=c->r[12]; // 803D5600
  if (true) { c->lr=0x803D5608u; dispatch(c,c->ctr); } // 803D5604
  c->r[3]=c->r[31]|c->r[31]; // 803D5608
  c->r[4]=0u+0x00000000u; // 803D560C
  c->r[5]=0u+0x00000230u; // 803D5610
  c->lr=0x803D5618u; f_800043EC(c); // 803D5614
L_803D5618:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 803D5618
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 803D561C
  c->r[30]=R32(c->r[1]+0x00000018u); // 803D5620
  c->lr=c->r[0]; // 803D5624
  c->r[1]=c->r[1]+0x00000020u; // 803D5628
  return; // 803D562C
}

// bta_hh_get_dscp_act
void f_803D5630(Ctx* __restrict c) {
  trace_call(0x803D5630u);
  c->r[5]=0u+0x807B0000u; // 803D5630
  c->r[4]=c->r[3]|c->r[3]; // 803D5634
  c->r[5]=c->r[5]+0x00006568u; // 803D5638
  c->r[3]=0u+0x0000000Au; // 803D563C
  c->r[12]=R32(c->r[5]+0x00000224u); // 803D5640
  c->ctr=c->r[12]; // 803D5644
  if (true) { dispatch(c,c->ctr); return; } // 803D5648
}

// bta_hh_maint_dev_act
void f_803D564C(Ctx* __restrict c) {
  trace_call(0x803D564Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803D564C
  c->r[0]=c->lr; // 803D5650
  c->r[5]=0u+0x00000006u; // 803D5654
  W32(c->r[1]+0x00000024u,c->r[0]); // 803D5658
  c->r[0]=0u+0x000000FFu; // 803D565C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 803D5660
  c->r[31]=c->r[4]|c->r[4]; // 803D5664
  W32(c->r[1]+0x00000018u,c->r[30]); // 803D5668
  c->r[30]=c->r[3]|c->r[3]; // 803D566C
  W8(c->r[1]+0x00000016u,c->r[5]); // 803D5670
  W8(c->r[1]+0x00000017u,c->r[0]); // 803D5674
  c->r[0]=R16(c->r[4]+0x00000010u); // 803D5678
  cmps(c,0,(int32_t)c->r[0],12); // 803D567C
  if (crb(c,2)) { goto L_803D571C; } // 803D5680
  if (!crb(c,0)) { goto L_803D5760; } // 803D5684
  cmps(c,0,(int32_t)c->r[0],11); // 803D5688
  if (!crb(c,0)) { goto L_803D5694; } // 803D568C
  goto L_803D5760; // 803D5690
L_803D5694:;
  c->r[3]=c->r[1]+0x00000010u; // 803D5694
  c->r[4]=c->r[4]+0x00000008u; // 803D5698
  c->lr=0x803D56A0u; f_803D0B30(c); // 803D569C
  c->r[3]=R8(c->r[30]+0x00000016u); // 803D56A0
  cmpu(c,0,c->r[3],0x000000FFu); // 803D56A4
  if (!crb(c,2)) { goto L_803D5708; } // 803D56A8
  c->r[4]=R16(c->r[31]+0x0000000Eu); // 803D56AC
  c->r[3]=c->r[31]+0x00000008u; // 803D56B0
  c->r[5]=c->r[1]+0x00000008u; // 803D56B4
  c->lr=0x803D56BCu; f_803E66FC(c); // 803D56B8
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 803D56BC
  if (!crb(c,2)) { goto L_803D5714; } // 803D56C0
  c->r[4]=R8(c->r[1]+0x00000008u); // 803D56C4
  c->r[0]=0u+0x00000000u; // 803D56C8
  W8(c->r[1]+0x00000016u,c->r[0]); // 803D56CC
  c->r[3]=c->r[30]|c->r[30]; // 803D56D0
  c->r[6]=0u+0x00000000u; // 803D56D4
  W8(c->r[1]+0x00000017u,c->r[4]); // 803D56D8
  c->r[5]=R16(c->r[31]+0x0000000Eu); // 803D56DC
  c->r[7]=R8(c->r[31]+0x00000012u); // 803D56E0
  c->r[8]=R8(c->r[31]+0x00000013u); // 803D56E4
  c->lr=0x803D56ECu; f_803D680C(c); // 803D56E8
  c->r[3]=0u+0x807B0000u; // 803D56EC
  c->r[0]=R8(c->r[1]+0x00000008u); // 803D56F0
  c->r[3]=c->r[3]+0x00006568u; // 803D56F4
  c->r[4]=R8(c->r[30]+0x00000012u); // 803D56F8
  c->r[3]=c->r[3]+c->r[0]; // 803D56FC
  W8(c->r[3]+0x00000214u,c->r[4]); // 803D5700
  goto L_803D5714; // 803D5704
L_803D5708:;
  c->r[0]=0u+0x00000000u; // 803D5708
  W8(c->r[1]+0x00000017u,c->r[3]); // 803D570C
  W8(c->r[1]+0x00000016u,c->r[0]); // 803D5710
L_803D5714:;
  c->lr=0x803D5718u; f_803D691C(c); // 803D5714
  goto L_803D577C; // 803D5718
L_803D571C:;
  c->r[0]=R16(c->r[4]+0x00000006u); // 803D571C
  c->r[3]=c->r[1]+0x00000010u; // 803D5720
  c->r[4]=c->r[30]+0x00000008u; // 803D5724
  W8(c->r[1]+0x00000017u,c->r[0]); // 803D5728
  c->lr=0x803D5730u; f_803D0B30(c); // 803D572C
  c->r[0]=R8(c->r[30]+0x0000001Cu); // 803D5730
  cmpu(c,0,c->r[0],0x00000003u); // 803D5734
  if (crb(c,2)) { goto L_803D577C; } // 803D5738
  c->r[3]=R8(c->r[1]+0x00000017u); // 803D573C
  c->lr=0x803D5744u; f_803E688C(c); // 803D5740
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 803D5744
  if (!crb(c,2)) { goto L_803D577C; } // 803D5748
  c->r[0]=0u+0x00000000u; // 803D574C
  c->r[3]=c->r[30]|c->r[30]; // 803D5750
  W8(c->r[1]+0x00000016u,c->r[0]); // 803D5754
  c->lr=0x803D575Cu; f_803D678C(c); // 803D5758
  goto L_803D577C; // 803D575C
L_803D5760:;
  c->r[0]=R8(c->r[13]+0xFFFFE318u); // 803D5760
  cmpu(c,0,c->r[0],0x00000005u); // 803D5764
  if (crb(c,0)) { goto L_803D577C; } // 803D5768
  c->r[4]=0u+0x80710000u; // 803D576C
  c->r[3]=0u+0x00000504u; // 803D5770
  c->r[4]=c->r[4]+0xFFFFAFC8u; // 803D5774
  c->lr=0x803D577Cu; f_803D04E0(c); // 803D5778
L_803D577C:;
  c->r[5]=0u+0x807B0000u; // 803D577C
  c->r[4]=c->r[1]+0x00000010u; // 803D5780
  c->r[5]=c->r[5]+0x00006568u; // 803D5784
  c->r[3]=R16(c->r[31]+0x00000010u); // 803D5788
  c->r[12]=R32(c->r[5]+0x00000224u); // 803D578C
  c->ctr=c->r[12]; // 803D5790
  if (true) { c->lr=0x803D5798u; dispatch(c,c->ctr); } // 803D5794
  c->r[0]=R32(c->r[1]+0x00000024u); // 803D5798
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 803D579C
  c->r[30]=R32(c->r[1]+0x00000018u); // 803D57A0
  c->lr=c->r[0]; // 803D57A4
  c->r[1]=c->r[1]+0x00000020u; // 803D57A8
  return; // 803D57AC
}

// bta_hh_get_acl_q_info
void f_803D57B0(Ctx* __restrict c) {
  trace_call(0x803D57B0u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803D57B0
  c->r[0]=c->lr; // 803D57B4
  W32(c->r[1]+0x00000044u,c->r[0]); // 803D57B8
  c->r[11]=c->r[1]+0x00000040u; // 803D57BC
  c->lr=0x803D57C4u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 803D57C0
  c->r[3]=c->r[1]+0x00000008u; // 803D57C4
  c->r[31]=0u+0x00000000u; // 803D57C8
  c->r[4]=0u+0x00000000u; // 803D57CC
  c->r[5]=0u+0x0000001Eu; // 803D57D0
  c->lr=0x803D57D8u; f_800043EC(c); // 803D57D4
  c->r[30]=0u+0x807C0000u; // 803D57D8
  c->r[29]=0u+0x807B0000u; // 803D57DC
  c->r[30]=c->r[30]+0xFFFF9458u; // 803D57E0
  c->r[27]=0u+0x00000000u; // 803D57E4
  c->r[29]=c->r[29]+0x00006568u; // 803D57E8
L_803D57EC:;
  c->r[0]=rotl(c->r[27],5)&0x00001FE0u; // 803D57EC
  c->r[3]=c->r[29]+c->r[0]; // 803D57F0
  c->r[0]=R8(c->r[3]+0x00000028u); // 803D57F4
  cmps(c,0,(int32_t)c->r[0],0); // 803D57F8
  if (crb(c,2)) { goto L_803D586C; } // 803D57FC
  c->r[0]=R8(c->r[3]+0x0000002Cu); // 803D5800
  cmpu(c,0,c->r[0],0x00000003u); // 803D5804
  if (!crb(c,2)) { goto L_803D586C; } // 803D5808
  c->r[4]=R8(c->r[3]+0x00000026u); // 803D580C
  c->r[0]=rotl(c->r[31],0)&0x000000FFu; // 803D5810
  c->r[5]=(uint32_t)((int32_t)c->r[0]*(int32_t)6); // 803D5814
  c->r[28]=c->r[1]+0x00000008u; // 803D5818
  c->r[3]=0u+0x00000000u; // 803D581C
  c->r[28]=c->r[28]+c->r[5]; // 803D5820
  c->r[0]=(uint32_t)((int32_t)c->r[4]*(int32_t)52); // 803D5824
  W8(c->r[28]+0x00000006u,c->r[4]); // 803D5828
  c->r[4]=c->r[30]+c->r[0]; // 803D582C
  c->r[4]=R16(c->r[4]+0x00000016u); // 803D5830
  c->lr=0x803D5838u; f_803EE714(c); // 803D5834
  cmps(c,0,(int32_t)c->r[3],0); // 803D5838
  if (crb(c,2)) { goto L_803D5868; } // 803D583C
  c->r[3]=R32(c->r[3]+0x00000010u); // 803D5840
  cmps(c,0,(int32_t)c->r[3],0); // 803D5844
  if (crb(c,2)) { goto L_803D5868; } // 803D5848
  c->r[0]=R8(c->r[3]+0x00000000u); // 803D584C
  cmps(c,0,(int32_t)c->r[0],0); // 803D5850
  if (crb(c,2)) { goto L_803D5868; } // 803D5854
  c->r[0]=R16(c->r[3]+0x0000004Cu); // 803D5858
  W16(c->r[28]+0x00000008u,c->r[0]); // 803D585C
  c->r[0]=R16(c->r[3]+0x00000038u); // 803D5860
  W16(c->r[28]+0x0000000Au,c->r[0]); // 803D5864
L_803D5868:;
  c->r[31]=c->r[31]+0x00000001u; // 803D5868
L_803D586C:;
  c->r[27]=c->r[27]+0x00000001u; // 803D586C
  cmpu(c,0,c->r[27],0x00000010u); // 803D5870
  if (crb(c,0)) { IRQCHK(c); goto L_803D57EC; } // 803D5874
  c->r[4]=0u+0x807C0000u; // 803D5878
  c->r[3]=0u+0x807B0000u; // 803D587C
  c->r[4]=c->r[4]+0xFFFF9860u; // 803D5880
  c->r[0]=rotl(c->r[31],0)&0x000000FFu; // 803D5884
  c->r[3]=c->r[3]+0x00006568u; // 803D5888
  c->r[6]=R16(c->r[4]+0x00000004u); // 803D588C
  c->r[5]=R16(c->r[4]+0x00000002u); // 803D5890
  c->r[4]=c->r[1]+0x00000008u; // 803D5894
  c->r[12]=R32(c->r[3]+0x00000224u); // 803D5898
  c->r[3]=0u+0x0000000Fu; // 803D589C
  W16(c->r[1]+0x00000008u,c->r[6]); // 803D58A0
  W16(c->r[1]+0x0000000Au,c->r[5]); // 803D58A4
  W16(c->r[1]+0x0000000Cu,c->r[0]); // 803D58A8
  c->ctr=c->r[12]; // 803D58AC
  if (true) { c->lr=0x803D58B4u; dispatch(c,c->ctr); } // 803D58B0
  c->r[11]=c->r[1]+0x00000040u; // 803D58B4
  c->lr=0x803D58BCu; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 803D58B8
  c->r[0]=R32(c->r[1]+0x00000044u); // 803D58BC
  c->lr=c->r[0]; // 803D58C0
  c->r[1]=c->r[1]+0x00000040u; // 803D58C4
  return; // 803D58C8
}

// bta_hh_write_dev_act
void f_803D58CC(Ctx* __restrict c) {
  trace_call(0x803D58CCu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803D58CC
  c->r[0]=c->lr; // 803D58D0
  W32(c->r[1]+0x00000024u,c->r[0]); // 803D58D4
  c->r[0]=0u+0x00000000u; // 803D58D8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 803D58DC
  W32(c->r[1]+0x00000018u,c->r[30]); // 803D58E0
  c->r[30]=c->r[4]|c->r[4]; // 803D58E4
  W32(c->r[1]+0x00000014u,c->r[29]); // 803D58E8
  c->r[29]=c->r[3]|c->r[3]; // 803D58EC
  W16(c->r[1]+0x00000008u,c->r[0]); // 803D58F0
  c->r[31]=R8(c->r[4]+0x00000008u); // 803D58F4
  c->r[0]=R8(c->r[3]+0x00000016u); // 803D58F8
  W8(c->r[1]+0x00000009u,c->r[0]); // 803D58FC
  c->r[3]=R8(c->r[3]+0x00000016u); // 803D5900
  c->r[4]=R8(c->r[4]+0x00000008u); // 803D5904
  c->r[5]=R8(c->r[30]+0x00000009u); // 803D5908
  c->r[6]=R16(c->r[30]+0x0000000Cu); // 803D590C
  c->r[7]=R8(c->r[30]+0x0000000Au); // 803D5910
  c->r[8]=R32(c->r[30]+0x00000010u); // 803D5914
  c->lr=0x803D591Cu; f_803E69B8(c); // 803D5918
  c->r[5]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[5]); // 803D591C
  if (crb(c,2)) { goto L_803D59A8; } // 803D5920
  c->r[0]=R8(c->r[13]+0xFFFFE318u); // 803D5924
  cmpu(c,0,c->r[0],0x00000001u); // 803D5928
  if (crb(c,0)) { goto L_803D5940; } // 803D592C
  c->r[4]=0u+0x80710000u; // 803D5930
  c->r[3]=0u+0x00000500u; // 803D5934
  c->r[4]=c->r[4]+0xFFFFAFD8u; // 803D5938
  c->lr=0x803D5940u; f_803D04F8(c); // 803D593C
L_803D5940:;
  c->r[0]=0u+0x00000006u; // 803D5940
  W8(c->r[1]+0x00000008u,c->r[0]); // 803D5944
  c->r[0]=R8(c->r[30]+0x00000008u); // 803D5948
  cmpu(c,0,c->r[0],0x00000001u); // 803D594C
  if (crb(c,2)) { goto L_803D597C; } // 803D5950
  cmpu(c,0,c->r[0],0x0000000Au); // 803D5954
  if (crb(c,2)) { goto L_803D597C; } // 803D5958
  c->r[5]=0u+0x807B0000u; // 803D595C
  c->r[3]=c->r[31]|c->r[31]; // 803D5960
  c->r[5]=c->r[5]+0x00006568u; // 803D5964
  c->r[4]=c->r[1]+0x00000008u; // 803D5968
  c->r[12]=R32(c->r[5]+0x00000224u); // 803D596C
  c->ctr=c->r[12]; // 803D5970
  if (true) { c->lr=0x803D5978u; dispatch(c,c->ctr); } // 803D5974
  goto L_803D5A78; // 803D5978
L_803D597C:;
  c->r[0]=R8(c->r[30]+0x00000009u); // 803D597C
  cmpu(c,0,c->r[0],0x00000005u); // 803D5980
  if (!crb(c,2)) { goto L_803D5A78; } // 803D5984
  c->r[5]=0u+0x807B0000u; // 803D5988
  c->r[4]=c->r[1]+0x00000008u; // 803D598C
  c->r[5]=c->r[5]+0x00006568u; // 803D5990
  c->r[3]=0u+0x0000000Du; // 803D5994
  c->r[12]=R32(c->r[5]+0x00000224u); // 803D5998
  c->ctr=c->r[12]; // 803D599C
  if (true) { c->lr=0x803D59A4u; dispatch(c,c->ctr); } // 803D59A0
  goto L_803D5A78; // 803D59A4
L_803D59A8:;
  c->r[5]=R8(c->r[30]+0x00000008u); // 803D59A8
  cmps(c,0,(int32_t)c->r[5],10); // 803D59AC
  if (crb(c,2)) { goto L_803D59DC; } // 803D59B0
  if (!crb(c,0)) { goto L_803D59F4; } // 803D59B4
  cmps(c,0,(int32_t)c->r[5],1); // 803D59B8
  if (crb(c,2)) { goto L_803D59DC; } // 803D59BC
  if (crb(c,0)) { goto L_803D59F4; } // 803D59C0
  cmps(c,0,(int32_t)c->r[5],4); // 803D59C4
  if (!crb(c,0)) { goto L_803D59D4; } // 803D59C8
  goto L_803D59F4; // 803D59CC
  goto L_803D59F4; // 803D59D0
L_803D59D4:;
  W16(c->r[29]+0x00000010u,c->r[31]); // 803D59D4
  goto L_803D5A10; // 803D59D8
L_803D59DC:;
  c->r[0]=R8(c->r[30]+0x00000009u); // 803D59DC
  cmpu(c,0,c->r[0],0x00000005u); // 803D59E0
  if (!crb(c,2)) { goto L_803D5A10; } // 803D59E4
  c->r[0]=0u+0x00000001u; // 803D59E8
  W8(c->r[29]+0x00000017u,c->r[0]); // 803D59EC
  goto L_803D5A10; // 803D59F0
L_803D59F4:;
  c->r[0]=R8(c->r[13]+0xFFFFE318u); // 803D59F4
  cmpu(c,0,c->r[0],0x00000005u); // 803D59F8
  if (crb(c,0)) { goto L_803D5A10; } // 803D59FC
  c->r[4]=0u+0x80710000u; // 803D5A00
  c->r[3]=0u+0x00000504u; // 803D5A04
  c->r[4]=c->r[4]+0xFFFFAFF4u; // 803D5A08
  c->lr=0x803D5A10u; f_803D04F8(c); // 803D5A0C
L_803D5A10:;
  c->r[0]=R8(c->r[30]+0x00000008u); // 803D5A10
  cmpu(c,0,c->r[0],0x00000001u); // 803D5A14
  if (crb(c,2)) { goto L_803D5A40; } // 803D5A18
  c->r[4]=R8(c->r[29]+0x00000015u); // 803D5A1C
  c->r[5]=c->r[29]+0x00000008u; // 803D5A20
  c->r[3]=0u+0x00000017u; // 803D5A24
  c->lr=0x803D5A2Cu; f_803D0E24(c); // 803D5A28
  c->r[4]=R8(c->r[29]+0x00000015u); // 803D5A2C
  c->r[5]=c->r[29]+0x00000008u; // 803D5A30
  c->r[3]=0u+0x00000017u; // 803D5A34
  c->lr=0x803D5A3Cu; f_803D0DF0(c); // 803D5A38
  goto L_803D5A78; // 803D5A3C
L_803D5A40:;
  c->r[0]=R8(c->r[30]+0x00000009u); // 803D5A40
  cmpu(c,0,c->r[0],0x00000003u); // 803D5A44
  if (!crb(c,2)) { goto L_803D5A60; } // 803D5A48
  c->r[4]=R8(c->r[29]+0x00000015u); // 803D5A4C
  c->r[5]=c->r[29]+0x00000008u; // 803D5A50
  c->r[3]=0u+0x00000017u; // 803D5A54
  c->lr=0x803D5A5Cu; f_803D0DBC(c); // 803D5A58
  goto L_803D5A78; // 803D5A5C
L_803D5A60:;
  cmpu(c,0,c->r[0],0x00000004u); // 803D5A60
  if (!crb(c,2)) { goto L_803D5A78; } // 803D5A64
  c->r[4]=R8(c->r[29]+0x00000015u); // 803D5A68
  c->r[5]=c->r[29]+0x00000008u; // 803D5A6C
  c->r[3]=0u+0x00000017u; // 803D5A70
  c->lr=0x803D5A78u; f_803D0E24(c); // 803D5A74
L_803D5A78:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 803D5A78
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 803D5A7C
  c->r[30]=R32(c->r[1]+0x00000018u); // 803D5A80
  c->r[29]=R32(c->r[1]+0x00000014u); // 803D5A84
  c->lr=c->r[0]; // 803D5A88
  c->r[1]=c->r[1]+0x00000020u; // 803D5A8C
  return; // 803D5A90
}

// bta_hh_cback
void f_803D5A94(Ctx* __restrict c) {
  trace_call(0x803D5A94u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803D5A94
  c->r[0]=c->lr; // 803D5A98
  c->r[7]=0u+0x80710000u; // 803D5A9C
  W32(c->r[1]+0x00000024u,c->r[0]); // 803D5AA0
  c->r[7]=c->r[7]+0xFFFFAC70u; // 803D5AA4
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 803D5AA8
  c->r[31]=0u+0x00001710u; // 803D5AAC
  W32(c->r[1]+0x00000018u,c->r[30]); // 803D5AB0
  c->r[30]=c->r[5]|c->r[5]; // 803D5AB4
  W32(c->r[1]+0x00000014u,c->r[29]); // 803D5AB8
  c->r[29]=c->r[4]|c->r[4]; // 803D5ABC
  W32(c->r[1]+0x00000010u,c->r[28]); // 803D5AC0
  c->r[28]=c->r[3]|c->r[3]; // 803D5AC4
  c->r[0]=R8(c->r[13]+0xFFFFE318u); // 803D5AC8
  W32(c->r[1]+0x00000008u,c->r[6]); // 803D5ACC
  cmpu(c,0,c->r[0],0x00000005u); // 803D5AD0
  if (crb(c,0)) { goto L_803D5B50; } // 803D5AD4
  cmpu(c,0,c->r[4],0x00000008u); // 803D5AD8
  if (crb(c,1)) { goto L_803D5B40; } // 803D5ADC
  c->r[3]=0u+0x80710000u; // 803D5AE0
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFFCu; // 803D5AE4
  c->r[3]=c->r[3]+0xFFFFB144u; // 803D5AE8
  c->r[3]=R32(c->r[3]+c->r[0]); // 803D5AEC
  c->ctr=c->r[3]; // 803D5AF0
  if (true) { switch (c->ctr) { case 0x803D5AF8u: goto L_803D5AF8; case 0x803D5B00u: goto L_803D5B00; case 0x803D5B08u: goto L_803D5B08; case 0x803D5B10u: goto L_803D5B10; case 0x803D5B18u: goto L_803D5B18; case 0x803D5B20u: goto L_803D5B20; case 0x803D5B28u: goto L_803D5B28; case 0x803D5B30u: goto L_803D5B30; case 0x803D5B38u: goto L_803D5B38; case 0x803D5B70u: goto L_803D5B70; case 0x803D5B78u: goto L_803D5B78; case 0x803D5B80u: goto L_803D5B80; case 0x803D5B88u: goto L_803D5B88; case 0x803D5B90u: goto L_803D5B90; case 0x803D5B98u: goto L_803D5B98; case 0x803D5BA4u: goto L_803D5BA4; case 0x803D5CDCu: goto L_803D5CDC; default: break; } dispatch(c,c->ctr); return; } // 803D5AF4
L_803D5AF8:;
  c->r[5]=c->r[7]+0x000003ACu; // 803D5AF8
  goto L_803D5B44; // 803D5AFC
L_803D5B00:;
  c->r[5]=c->r[7]+0x000003C0u; // 803D5B00
  goto L_803D5B44; // 803D5B04
L_803D5B08:;
  c->r[5]=c->r[7]+0x000003D4u; // 803D5B08
  goto L_803D5B44; // 803D5B0C
L_803D5B10:;
  c->r[5]=c->r[7]+0x000003ECu; // 803D5B10
  goto L_803D5B44; // 803D5B14
L_803D5B18:;
  c->r[5]=c->r[7]+0x00000404u; // 803D5B18
  goto L_803D5B44; // 803D5B1C
L_803D5B20:;
  c->r[5]=c->r[7]+0x0000041Cu; // 803D5B20
  goto L_803D5B44; // 803D5B24
L_803D5B28:;
  c->r[5]=c->r[7]+0x00000434u; // 803D5B28
  goto L_803D5B44; // 803D5B2C
L_803D5B30:;
  c->r[5]=c->r[7]+0x0000044Cu; // 803D5B30
  goto L_803D5B44; // 803D5B34
L_803D5B38:;
  c->r[5]=c->r[7]+0x00000464u; // 803D5B38
  goto L_803D5B44; // 803D5B3C
L_803D5B40:;
  c->r[5]=c->r[7]+0x0000047Cu; // 803D5B40
L_803D5B44:;
  c->r[4]=c->r[7]+0x00000490u; // 803D5B44
  c->r[3]=0u+0x00000504u; // 803D5B48
  c->lr=0x803D5B50u; f_803D04F8(c); // 803D5B4C
L_803D5B50:;
  cmpu(c,0,c->r[29],0x00000008u); // 803D5B50
  if (crb(c,1)) { goto L_803D5CDC; } // 803D5B54
  c->r[3]=0u+0x80710000u; // 803D5B58
  c->r[0]=rotl(c->r[29],2)&0xFFFFFFFCu; // 803D5B5C
  c->r[3]=c->r[3]+0xFFFFB120u; // 803D5B60
  c->r[3]=R32(c->r[3]+c->r[0]); // 803D5B64
  c->ctr=c->r[3]; // 803D5B68
  if (true) { switch (c->ctr) { case 0x803D5AF8u: goto L_803D5AF8; case 0x803D5B00u: goto L_803D5B00; case 0x803D5B08u: goto L_803D5B08; case 0x803D5B10u: goto L_803D5B10; case 0x803D5B18u: goto L_803D5B18; case 0x803D5B20u: goto L_803D5B20; case 0x803D5B28u: goto L_803D5B28; case 0x803D5B30u: goto L_803D5B30; case 0x803D5B38u: goto L_803D5B38; case 0x803D5B70u: goto L_803D5B70; case 0x803D5B78u: goto L_803D5B78; case 0x803D5B80u: goto L_803D5B80; case 0x803D5B88u: goto L_803D5B88; case 0x803D5B90u: goto L_803D5B90; case 0x803D5B98u: goto L_803D5B98; case 0x803D5BA4u: goto L_803D5BA4; case 0x803D5CDCu: goto L_803D5CDC; default: break; } dispatch(c,c->ctr); return; } // 803D5B6C
L_803D5B70:;
  c->r[31]=0u+0x00001702u; // 803D5B70
  goto L_803D5CDC; // 803D5B74
L_803D5B78:;
  c->r[31]=0u+0x00001703u; // 803D5B78
  goto L_803D5CDC; // 803D5B7C
L_803D5B80:;
  c->r[31]=0u+0x00001704u; // 803D5B80
  goto L_803D5CDC; // 803D5B84
L_803D5B88:;
  c->r[31]=0u+0x00001706u; // 803D5B88
  goto L_803D5CDC; // 803D5B8C
L_803D5B90:;
  c->r[31]=0u+0x00001705u; // 803D5B90
  goto L_803D5CDC; // 803D5B94
L_803D5B98:;
  c->r[3]=c->r[1]+0x00000008u; // 803D5B98
  c->lr=0x803D5BA0u; f_803D127C(c); // 803D5B9C
  goto L_803D5CDC; // 803D5BA0
L_803D5BA4:;
  c->r[4]=0u+0x807B0000u; // 803D5BA4
  c->r[0]=0u+0x00000002u; // 803D5BA8
  c->r[4]=c->r[4]+0x00006568u; // 803D5BAC
  c->r[5]=0u+0x00000000u; // 803D5BB0
  c->ctr=c->r[0]; // 803D5BB4
L_803D5BB8:;
  c->r[0]=rotl(c->r[5],5)&0x00001FE0u; // 803D5BB8
  c->r[3]=c->r[4]+c->r[0]; // 803D5BBC
  c->r[0]=R8(c->r[3]+0x00000026u); // 803D5BC0
  cmpu(c,0,c->r[28],c->r[0]); // 803D5BC4
  if (!crb(c,2)) { goto L_803D5BD8; } // 803D5BC8
  c->r[0]=0u+0x00000001u; // 803D5BCC
  W8(c->r[3]+0x00000027u,c->r[0]); // 803D5BD0
  goto L_803D5CDC; // 803D5BD4
L_803D5BD8:;
  c->r[5]=c->r[5]+0x00000001u; // 803D5BD8
  c->r[0]=rotl(c->r[5],5)&0x00001FE0u; // 803D5BDC
  c->r[3]=c->r[4]+c->r[0]; // 803D5BE0
  c->r[0]=R8(c->r[3]+0x00000026u); // 803D5BE4
  cmpu(c,0,c->r[28],c->r[0]); // 803D5BE8
  if (!crb(c,2)) { goto L_803D5BFC; } // 803D5BEC
  c->r[0]=0u+0x00000001u; // 803D5BF0
  W8(c->r[3]+0x00000027u,c->r[0]); // 803D5BF4
  goto L_803D5CDC; // 803D5BF8
L_803D5BFC:;
  c->r[5]=c->r[5]+0x00000001u; // 803D5BFC
  c->r[0]=rotl(c->r[5],5)&0x00001FE0u; // 803D5C00
  c->r[3]=c->r[4]+c->r[0]; // 803D5C04
  c->r[0]=R8(c->r[3]+0x00000026u); // 803D5C08
  cmpu(c,0,c->r[28],c->r[0]); // 803D5C0C
  if (!crb(c,2)) { goto L_803D5C20; } // 803D5C10
  c->r[0]=0u+0x00000001u; // 803D5C14
  W8(c->r[3]+0x00000027u,c->r[0]); // 803D5C18
  goto L_803D5CDC; // 803D5C1C
L_803D5C20:;
  c->r[5]=c->r[5]+0x00000001u; // 803D5C20
  c->r[0]=rotl(c->r[5],5)&0x00001FE0u; // 803D5C24
  c->r[3]=c->r[4]+c->r[0]; // 803D5C28
  c->r[0]=R8(c->r[3]+0x00000026u); // 803D5C2C
  cmpu(c,0,c->r[28],c->r[0]); // 803D5C30
  if (!crb(c,2)) { goto L_803D5C44; } // 803D5C34
  c->r[0]=0u+0x00000001u; // 803D5C38
  W8(c->r[3]+0x00000027u,c->r[0]); // 803D5C3C
  goto L_803D5CDC; // 803D5C40
L_803D5C44:;
  c->r[5]=c->r[5]+0x00000001u; // 803D5C44
  c->r[0]=rotl(c->r[5],5)&0x00001FE0u; // 803D5C48
  c->r[3]=c->r[4]+c->r[0]; // 803D5C4C
  c->r[0]=R8(c->r[3]+0x00000026u); // 803D5C50
  cmpu(c,0,c->r[28],c->r[0]); // 803D5C54
  if (!crb(c,2)) { goto L_803D5C68; } // 803D5C58
  c->r[0]=0u+0x00000001u; // 803D5C5C
  W8(c->r[3]+0x00000027u,c->r[0]); // 803D5C60
  goto L_803D5CDC; // 803D5C64
L_803D5C68:;
  c->r[5]=c->r[5]+0x00000001u; // 803D5C68
  c->r[0]=rotl(c->r[5],5)&0x00001FE0u; // 803D5C6C
  c->r[3]=c->r[4]+c->r[0]; // 803D5C70
  c->r[0]=R8(c->r[3]+0x00000026u); // 803D5C74
  cmpu(c,0,c->r[28],c->r[0]); // 803D5C78
  if (!crb(c,2)) { goto L_803D5C8C; } // 803D5C7C
  c->r[0]=0u+0x00000001u; // 803D5C80
  W8(c->r[3]+0x00000027u,c->r[0]); // 803D5C84
  goto L_803D5CDC; // 803D5C88
L_803D5C8C:;
  c->r[5]=c->r[5]+0x00000001u; // 803D5C8C
  c->r[0]=rotl(c->r[5],5)&0x00001FE0u; // 803D5C90
  c->r[3]=c->r[4]+c->r[0]; // 803D5C94
  c->r[0]=R8(c->r[3]+0x00000026u); // 803D5C98
  cmpu(c,0,c->r[28],c->r[0]); // 803D5C9C
  if (!crb(c,2)) { goto L_803D5CB0; } // 803D5CA0
  c->r[0]=0u+0x00000001u; // 803D5CA4
  W8(c->r[3]+0x00000027u,c->r[0]); // 803D5CA8
  goto L_803D5CDC; // 803D5CAC
L_803D5CB0:;
  c->r[5]=c->r[5]+0x00000001u; // 803D5CB0
  c->r[0]=rotl(c->r[5],5)&0x00001FE0u; // 803D5CB4
  c->r[3]=c->r[4]+c->r[0]; // 803D5CB8
  c->r[0]=R8(c->r[3]+0x00000026u); // 803D5CBC
  cmpu(c,0,c->r[28],c->r[0]); // 803D5CC0
  if (!crb(c,2)) { goto L_803D5CD4; } // 803D5CC4
  c->r[0]=0u+0x00000001u; // 803D5CC8
  W8(c->r[3]+0x00000027u,c->r[0]); // 803D5CCC
  goto L_803D5CDC; // 803D5CD0
L_803D5CD4:;
  c->r[5]=c->r[5]+0x00000001u; // 803D5CD4
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_803D5BB8; } // 803D5CD8
L_803D5CDC:;
  cmpu(c,0,c->r[31],0x00001710u); // 803D5CDC
  if (crb(c,2)) { goto L_803D5D0C; } // 803D5CE0
  c->r[3]=0u+0x00000018u; // 803D5CE4
  c->lr=0x803D5CECu; f_803CD954(c); // 803D5CE8
  cmps(c,0,(int32_t)c->r[3],0); // 803D5CEC
  if (crb(c,2)) { goto L_803D5D0C; } // 803D5CF0
  W16(c->r[3]+0x00000000u,c->r[31]); // 803D5CF4
  W16(c->r[3]+0x00000006u,c->r[28]); // 803D5CF8
  W32(c->r[3]+0x00000008u,c->r[30]); // 803D5CFC
  c->r[0]=R32(c->r[1]+0x00000008u); // 803D5D00
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 803D5D04
  c->lr=0x803D5D0Cu; f_803D0FDC(c); // 803D5D08
L_803D5D0C:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 803D5D0C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 803D5D10
  c->r[30]=R32(c->r[1]+0x00000018u); // 803D5D14
  c->r[29]=R32(c->r[1]+0x00000014u); // 803D5D18
  c->r[28]=R32(c->r[1]+0x00000010u); // 803D5D1C
  c->lr=c->r[0]; // 803D5D20
  c->r[1]=c->r[1]+0x00000020u; // 803D5D24
  return; // 803D5D28
}

// BTA_HhEnable
void f_803D5D2C(Ctx* __restrict c) {
  trace_call(0x803D5D2Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803D5D2C
  c->r[0]=c->lr; // 803D5D30
  W32(c->r[1]+0x00000024u,c->r[0]); // 803D5D34
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 803D5D38
  W32(c->r[1]+0x00000018u,c->r[30]); // 803D5D3C
  c->r[30]=c->r[4]|c->r[4]; // 803D5D40
  W32(c->r[1]+0x00000014u,c->r[29]); // 803D5D44
  c->r[29]=c->r[3]|c->r[3]; // 803D5D48
  c->lr=0x803D5D50u; f_803CEF4C(c); // 803D5D4C
  c->r[3]=0u+0x00000017u; // 803D5D50
  c->r[4]=c->r[2]+0x00000E88u; // 803D5D54
  c->lr=0x803D5D5Cu; f_803D0FC8(c); // 803D5D58
  c->lr=0x803D5D60u; f_803CEF50(c); // 803D5D5C
  c->r[3]=0u+0x00000034u; // 803D5D60
  c->lr=0x803D5D68u; f_803CD954(c); // 803D5D64
  cmps(c,0,(int32_t)c->r[3],0); // 803D5D68
  c->r[31]=c->r[3]|c->r[3]; // 803D5D6C
  if (crb(c,2)) { goto L_803D5D98; } // 803D5D70
  c->r[4]=0u+0x00000000u; // 803D5D74
  c->r[5]=0u+0x00000034u; // 803D5D78
  c->lr=0x803D5D80u; f_800043EC(c); // 803D5D7C
  c->r[0]=0u+0x0000170Cu; // 803D5D80
  c->r[3]=c->r[31]|c->r[31]; // 803D5D84
  W16(c->r[31]+0x00000000u,c->r[0]); // 803D5D88
  W32(c->r[31]+0x00000030u,c->r[30]); // 803D5D8C
  W8(c->r[31]+0x00000008u,c->r[29]); // 803D5D90
  c->lr=0x803D5D98u; f_803D0FDC(c); // 803D5D94
L_803D5D98:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 803D5D98
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 803D5D9C
  c->r[30]=R32(c->r[1]+0x00000018u); // 803D5DA0
  c->r[29]=R32(c->r[1]+0x00000014u); // 803D5DA4
  c->lr=c->r[0]; // 803D5DA8
  c->r[1]=c->r[1]+0x00000020u; // 803D5DAC
  return; // 803D5DB0
}

// fn_803D5DB4
void f_803D5DB4(Ctx* __restrict c) {
  trace_call(0x803D5DB4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803D5DB4
  c->r[0]=c->lr; // 803D5DB8
  c->r[3]=0u+0x00000008u; // 803D5DBC
  W32(c->r[1]+0x00000014u,c->r[0]); // 803D5DC0
  c->lr=0x803D5DC8u; f_803CD954(c); // 803D5DC4
  cmps(c,0,(int32_t)c->r[3],0); // 803D5DC8
  if (crb(c,2)) { goto L_803D5DDC; } // 803D5DCC
  c->r[0]=0u+0x0000170Du; // 803D5DD0
  W16(c->r[3]+0x00000000u,c->r[0]); // 803D5DD4
  c->lr=0x803D5DDCu; f_803D0FDC(c); // 803D5DD8
L_803D5DDC:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 803D5DDC
  c->lr=c->r[0]; // 803D5DE0
  c->r[1]=c->r[1]+0x00000010u; // 803D5DE4
  return; // 803D5DE8
}

// BTA_HhClose
void f_803D5DEC(Ctx* __restrict c) {
  trace_call(0x803D5DECu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803D5DEC
  c->r[0]=c->lr; // 803D5DF0
  W32(c->r[1]+0x00000014u,c->r[0]); // 803D5DF4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 803D5DF8
  W32(c->r[1]+0x00000008u,c->r[30]); // 803D5DFC
  c->r[30]=c->r[3]|c->r[3]; // 803D5E00
  c->r[3]=0u+0x00000008u; // 803D5E04
  c->lr=0x803D5E0Cu; f_803CD954(c); // 803D5E08
  cmps(c,0,(int32_t)c->r[3],0); // 803D5E0C
  c->r[31]=c->r[3]|c->r[3]; // 803D5E10
  if (crb(c,2)) { goto L_803D5E38; } // 803D5E14
  c->r[4]=0u+0x00000000u; // 803D5E18
  c->r[5]=0u+0x00000008u; // 803D5E1C
  c->lr=0x803D5E24u; f_800043EC(c); // 803D5E20
  c->r[0]=0u+0x00001701u; // 803D5E24
  c->r[3]=c->r[31]|c->r[31]; // 803D5E28
  W16(c->r[31]+0x00000000u,c->r[0]); // 803D5E2C
  W16(c->r[31]+0x00000006u,c->r[30]); // 803D5E30
  c->lr=0x803D5E38u; f_803D0FDC(c); // 803D5E34
L_803D5E38:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 803D5E38
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 803D5E3C
  c->r[30]=R32(c->r[1]+0x00000008u); // 803D5E40
  c->lr=c->r[0]; // 803D5E44
  c->r[1]=c->r[1]+0x00000010u; // 803D5E48
  return; // 803D5E4C
}

// BTA_HhOpen
void f_803D5E50(Ctx* __restrict c) {
  trace_call(0x803D5E50u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803D5E50
  c->r[0]=c->lr; // 803D5E54
  W32(c->r[1]+0x00000024u,c->r[0]); // 803D5E58
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 803D5E5C
  W32(c->r[1]+0x00000018u,c->r[30]); // 803D5E60
  c->r[30]=c->r[5]|c->r[5]; // 803D5E64
  W32(c->r[1]+0x00000014u,c->r[29]); // 803D5E68
  c->r[29]=c->r[4]|c->r[4]; // 803D5E6C
  W32(c->r[1]+0x00000010u,c->r[28]); // 803D5E70
  c->r[28]=c->r[3]|c->r[3]; // 803D5E74
  c->r[3]=0u+0x00000010u; // 803D5E78
  c->lr=0x803D5E80u; f_803CD954(c); // 803D5E7C
  cmps(c,0,(int32_t)c->r[3],0); // 803D5E80
  c->r[31]=c->r[3]|c->r[3]; // 803D5E84
  if (crb(c,2)) { goto L_803D5EC8; } // 803D5E88
  c->r[4]=0u+0x00000000u; // 803D5E8C
  c->r[5]=0u+0x00000010u; // 803D5E90
  c->lr=0x803D5E98u; f_800043EC(c); // 803D5E94
  c->r[3]=0u+0x00001700u; // 803D5E98
  c->r[0]=0u+0x000000FFu; // 803D5E9C
  W16(c->r[31]+0x00000000u,c->r[3]); // 803D5EA0
  c->r[4]=c->r[28]|c->r[28]; // 803D5EA4
  c->r[3]=c->r[31]+0x00000008u; // 803D5EA8
  W16(c->r[31]+0x00000006u,c->r[0]); // 803D5EAC
  W8(c->r[31]+0x0000000Eu,c->r[30]); // 803D5EB0
  W8(c->r[31]+0x0000000Fu,c->r[29]); // 803D5EB4
  c->lr=0x803D5EBCu; f_803D0B30(c); // 803D5EB8
  c->r[3]=c->r[31]|c->r[31]; // 803D5EBC
  c->lr=0x803D5EC4u; f_803D0FDC(c); // 803D5EC0
  goto L_803D5EE4; // 803D5EC4
L_803D5EC8:;
  c->r[0]=R8(c->r[13]+0xFFFFE318u); // 803D5EC8
  cmpu(c,0,c->r[0],0x00000001u); // 803D5ECC
  if (crb(c,0)) { goto L_803D5EE4; } // 803D5ED0
  c->r[4]=0u+0x80710000u; // 803D5ED4
  c->r[3]=0u+0x00000500u; // 803D5ED8
  c->r[4]=c->r[4]+0xFFFFB168u; // 803D5EDC
  c->lr=0x803D5EE4u; f_803D04E0(c); // 803D5EE0
L_803D5EE4:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 803D5EE4
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 803D5EE8
  c->r[30]=R32(c->r[1]+0x00000018u); // 803D5EEC
  c->r[29]=R32(c->r[1]+0x00000014u); // 803D5EF0
  c->r[28]=R32(c->r[1]+0x00000010u); // 803D5EF4
  c->lr=c->r[0]; // 803D5EF8
  c->r[1]=c->r[1]+0x00000020u; // 803D5EFC
  return; // 803D5F00
}

// BTA_HhSendData
void f_803D5F04(Ctx* __restrict c) {
  trace_call(0x803D5F04u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803D5F04
  c->r[0]=c->lr; // 803D5F08
  W32(c->r[1]+0x00000024u,c->r[0]); // 803D5F0C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 803D5F10
  W32(c->r[1]+0x00000018u,c->r[30]); // 803D5F14
  c->r[30]=c->r[4]|c->r[4]; // 803D5F18
  W32(c->r[1]+0x00000014u,c->r[29]); // 803D5F1C
  c->r[29]=c->r[3]|c->r[3]; // 803D5F20
  c->r[3]=0u+0x00000014u; // 803D5F24
  c->lr=0x803D5F2Cu; f_803CD954(c); // 803D5F28
  cmps(c,0,(int32_t)c->r[3],0); // 803D5F2C
  c->r[31]=c->r[3]|c->r[3]; // 803D5F30
  if (crb(c,2)) { goto L_803D5F78; } // 803D5F34
  c->r[4]=0u+0x00000000u; // 803D5F38
  c->r[5]=0u+0x00000014u; // 803D5F3C
  c->lr=0x803D5F44u; f_800043EC(c); // 803D5F40
  c->r[0]=0u+0x00001708u; // 803D5F44
  c->r[5]=0u+0x0000000Au; // 803D5F48
  W16(c->r[31]+0x00000000u,c->r[0]); // 803D5F4C
  c->r[4]=0u+0x00000000u; // 803D5F50
  c->r[0]=0u+0x00000002u; // 803D5F54
  c->r[3]=c->r[31]|c->r[31]; // 803D5F58
  W16(c->r[31]+0x00000006u,c->r[29]); // 803D5F5C
  W8(c->r[31]+0x00000008u,c->r[5]); // 803D5F60
  W16(c->r[31]+0x0000000Cu,c->r[4]); // 803D5F64
  W8(c->r[31]+0x00000009u,c->r[0]); // 803D5F68
  W32(c->r[31]+0x00000010u,c->r[30]); // 803D5F6C
  W8(c->r[31]+0x0000000Au,c->r[4]); // 803D5F70
  c->lr=0x803D5F78u; f_803D0FDC(c); // 803D5F74
L_803D5F78:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 803D5F78
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 803D5F7C
  c->r[30]=R32(c->r[1]+0x00000018u); // 803D5F80
  c->r[29]=R32(c->r[1]+0x00000014u); // 803D5F84
  c->lr=c->r[0]; // 803D5F88
  c->r[1]=c->r[1]+0x00000020u; // 803D5F8C
  return; // 803D5F90
}

// BTA_HhAddDev
void f_803D5F94(Ctx* __restrict c) {
  trace_call(0x803D5F94u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803D5F94
  c->r[0]=c->lr; // 803D5F98
  W32(c->r[1]+0x00000024u,c->r[0]); // 803D5F9C
  c->r[11]=c->r[1]+0x00000020u; // 803D5FA0
  c->lr=0x803D5FA8u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 803D5FA4
  c->r[26]=c->r[3]|c->r[3]; // 803D5FA8
  c->r[27]=c->r[4]|c->r[4]; // 803D5FAC
  c->r[28]=c->r[5]|c->r[5]; // 803D5FB0
  c->r[29]=c->r[6]|c->r[6]; // 803D5FB4
  c->r[30]=c->r[7]|c->r[7]; // 803D5FB8
  c->r[3]=0u+0x0000001Cu; // 803D5FBC
  c->lr=0x803D5FC4u; f_803CD954(c); // 803D5FC0
  cmps(c,0,(int32_t)c->r[3],0); // 803D5FC4
  c->r[31]=c->r[3]|c->r[3]; // 803D5FC8
  if (crb(c,2)) { goto L_803D6024; } // 803D5FCC
  c->r[4]=0u+0x00000000u; // 803D5FD0
  c->r[5]=0u+0x0000001Cu; // 803D5FD4
  c->lr=0x803D5FDCu; f_800043EC(c); // 803D5FD8
  c->r[0]=0u+0x0000170Au; // 803D5FDC
  c->r[5]=0u+0x0000000Bu; // 803D5FE0
  W16(c->r[31]+0x00000000u,c->r[0]); // 803D5FE4
  c->r[0]=0u+0x000000FFu; // 803D5FE8
  c->r[4]=c->r[30]|c->r[30]; // 803D5FEC
  c->r[3]=c->r[31]+0x00000014u; // 803D5FF0
  W16(c->r[31]+0x00000010u,c->r[5]); // 803D5FF4
  c->r[5]=0u+0x00000008u; // 803D5FF8
  W16(c->r[31]+0x00000006u,c->r[0]); // 803D5FFC
  W16(c->r[31]+0x0000000Eu,c->r[27]); // 803D6000
  W8(c->r[31]+0x00000012u,c->r[28]); // 803D6004
  W8(c->r[31]+0x00000013u,c->r[29]); // 803D6008
  c->lr=0x803D6010u; f_802DC484(c); // 803D600C
  c->r[4]=c->r[26]|c->r[26]; // 803D6010
  c->r[3]=c->r[31]+0x00000008u; // 803D6014
  c->lr=0x803D601Cu; f_803D0B30(c); // 803D6018
  c->r[3]=c->r[31]|c->r[31]; // 803D601C
  c->lr=0x803D6024u; f_803D0FDC(c); // 803D6020
L_803D6024:;
  c->r[11]=c->r[1]+0x00000020u; // 803D6024
  c->lr=0x803D602Cu; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 803D6028
  c->r[0]=R32(c->r[1]+0x00000024u); // 803D602C
  c->lr=c->r[0]; // 803D6030
  c->r[1]=c->r[1]+0x00000020u; // 803D6034
  return; // 803D6038
}

// BTA_HhRemoveDev
void f_803D603C(Ctx* __restrict c) {
  trace_call(0x803D603Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803D603C
  c->r[0]=c->lr; // 803D6040
  W32(c->r[1]+0x00000014u,c->r[0]); // 803D6044
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 803D6048
  W32(c->r[1]+0x00000008u,c->r[30]); // 803D604C
  c->r[30]=c->r[3]|c->r[3]; // 803D6050
  c->r[3]=0u+0x0000001Cu; // 803D6054
  c->lr=0x803D605Cu; f_803CD954(c); // 803D6058
  cmps(c,0,(int32_t)c->r[3],0); // 803D605C
  c->r[31]=c->r[3]|c->r[3]; // 803D6060
  if (crb(c,2)) { goto L_803D6090; } // 803D6064
  c->r[4]=0u+0x00000000u; // 803D6068
  c->r[5]=0u+0x0000001Cu; // 803D606C
  c->lr=0x803D6074u; f_800043EC(c); // 803D6070
  c->r[3]=0u+0x0000170Au; // 803D6074
  c->r[0]=0u+0x0000000Cu; // 803D6078
  W16(c->r[31]+0x00000000u,c->r[3]); // 803D607C
  c->r[3]=c->r[31]|c->r[31]; // 803D6080
  W16(c->r[31]+0x00000010u,c->r[0]); // 803D6084
  W16(c->r[31]+0x00000006u,c->r[30]); // 803D6088
  c->lr=0x803D6090u; f_803D0FDC(c); // 803D608C
L_803D6090:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 803D6090
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 803D6094
  c->r[30]=R32(c->r[1]+0x00000008u); // 803D6098
  c->lr=c->r[0]; // 803D609C
  c->r[1]=c->r[1]+0x00000010u; // 803D60A0
  return; // 803D60A4
}

// BTA_HhGetAclQueueInfo
void f_803D60A8(Ctx* __restrict c) {
  trace_call(0x803D60A8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803D60A8
  c->r[0]=c->lr; // 803D60AC
  c->r[3]=0u+0x00000008u; // 803D60B0
  W32(c->r[1]+0x00000014u,c->r[0]); // 803D60B4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 803D60B8
  c->lr=0x803D60C0u; f_803CD954(c); // 803D60BC
  cmps(c,0,(int32_t)c->r[3],0); // 803D60C0
  c->r[31]=c->r[3]|c->r[3]; // 803D60C4
  if (crb(c,2)) { goto L_803D60E8; } // 803D60C8
  c->r[4]=0u+0x00000000u; // 803D60CC
  c->r[5]=0u+0x00000008u; // 803D60D0
  c->lr=0x803D60D8u; f_800043EC(c); // 803D60D4
  c->r[0]=0u+0x0000170Eu; // 803D60D8
  c->r[3]=c->r[31]|c->r[31]; // 803D60DC
  W16(c->r[31]+0x00000000u,c->r[0]); // 803D60E0
  c->lr=0x803D60E8u; f_803D0FDC(c); // 803D60E4
L_803D60E8:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 803D60E8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 803D60EC
  c->lr=c->r[0]; // 803D60F0
  c->r[1]=c->r[1]+0x00000010u; // 803D60F4
  return; // 803D60F8
}

// bta_hh_sm_execute
void f_803D60FC(Ctx* __restrict c) {
  trace_call(0x803D60FCu);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803D60FC
  c->r[0]=c->lr; // 803D6100
  W32(c->r[1]+0x00000044u,c->r[0]); // 803D6104
  c->r[11]=c->r[1]+0x00000040u; // 803D6108
  c->lr=0x803D6110u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 803D610C
  c->r[31]=0u+0x80710000u; // 803D6110
  c->r[27]=c->r[3]|c->r[3]; // 803D6114
  c->r[28]=c->r[4]|c->r[4]; // 803D6118
  c->r[29]=c->r[5]|c->r[5]; // 803D611C
  c->r[31]=c->r[31]+0xFFFFB198u; // 803D6120
  c->r[3]=c->r[1]+0x00000008u; // 803D6124
  c->r[30]=0u+0x00000000u; // 803D6128
  c->r[4]=0u+0x00000000u; // 803D612C
  c->r[5]=0u+0x00000020u; // 803D6130
  c->lr=0x803D6138u; f_800043EC(c); // 803D6134
  cmps(c,0,(int32_t)c->r[27],0); // 803D6138
  if (!crb(c,2)) { goto L_803D6294; } // 803D613C
  c->r[3]=0u+0x807B0000u; // 803D6140
  c->r[3]=c->r[3]+0x00006568u; // 803D6144
  c->r[0]=R32(c->r[3]+0x00000224u); // 803D6148
  cmps(c,0,(int32_t)c->r[0],0); // 803D614C
  if (crb(c,2)) { goto L_803D6438; } // 803D6150
  cmps(c,0,(int32_t)c->r[28],5896); // 803D6154
  if (crb(c,2)) { goto L_803D61E8; } // 803D6158
  if (!crb(c,0)) { goto L_803D6178; } // 803D615C
  cmps(c,0,(int32_t)c->r[28],5889); // 803D6160
  if (crb(c,2)) { goto L_803D623C; } // 803D6164
  if (!crb(c,0)) { goto L_803D6254; } // 803D6168
  cmps(c,0,(int32_t)c->r[28],5888); // 803D616C
  if (!crb(c,0)) { goto L_803D6184; } // 803D6170
  goto L_803D6254; // 803D6174
L_803D6178:;
  cmps(c,0,(int32_t)c->r[28],5898); // 803D6178
  if (crb(c,2)) { goto L_803D61A8; } // 803D617C
  goto L_803D6254; // 803D6180
L_803D6184:;
  c->r[3]=c->r[1]+0x00000008u; // 803D6184
  c->r[4]=c->r[29]+0x00000008u; // 803D6188
  c->r[30]=0u+0x00000002u; // 803D618C
  c->lr=0x803D6194u; f_803D0B30(c); // 803D6190
  c->r[3]=0u+0x00000009u; // 803D6194
  c->r[0]=0u+0x000000FFu; // 803D6198
  W8(c->r[1]+0x0000000Eu,c->r[3]); // 803D619C
  W8(c->r[1]+0x0000000Fu,c->r[0]); // 803D61A0
  goto L_803D6270; // 803D61A4
L_803D61A8:;
  c->r[30]=R16(c->r[29]+0x00000010u); // 803D61A8
  cmpu(c,0,c->r[30],0x0000000Bu); // 803D61AC
  if (!crb(c,2)) { goto L_803D61D4; } // 803D61B0
  c->r[3]=c->r[1]+0x00000008u; // 803D61B4
  c->r[4]=c->r[29]+0x00000008u; // 803D61B8
  c->lr=0x803D61C0u; f_803D0B30(c); // 803D61BC
  c->r[3]=0u+0x00000009u; // 803D61C0
  c->r[0]=0u+0x000000FFu; // 803D61C4
  W8(c->r[1]+0x0000000Eu,c->r[3]); // 803D61C8
  W8(c->r[1]+0x0000000Fu,c->r[0]); // 803D61CC
  goto L_803D6270; // 803D61D0
L_803D61D4:;
  c->r[0]=0u+0x0000000Du; // 803D61D4
  W8(c->r[1]+0x0000000Eu,c->r[0]); // 803D61D8
  c->r[0]=R16(c->r[29]+0x00000006u); // 803D61DC
  W8(c->r[1]+0x0000000Fu,c->r[0]); // 803D61E0
  goto L_803D6270; // 803D61E4
L_803D61E8:;
  c->r[30]=R8(c->r[29]+0x00000008u); // 803D61E8
  cmpu(c,0,c->r[30],0x00000007u); // 803D61EC
  if (crb(c,2)) { goto L_803D6204; } // 803D61F0
  cmpu(c,0,c->r[30],0x00000005u); // 803D61F4
  if (crb(c,2)) { goto L_803D6204; } // 803D61F8
  cmpu(c,0,c->r[30],0x00000009u); // 803D61FC
  if (!crb(c,2)) { goto L_803D6218; } // 803D6200
L_803D6204:;
  c->r[0]=0u+0x0000000Du; // 803D6204
  W8(c->r[1]+0x00000008u,c->r[0]); // 803D6208
  c->r[0]=R16(c->r[29]+0x00000006u); // 803D620C
  W8(c->r[1]+0x00000009u,c->r[0]); // 803D6210
  goto L_803D6270; // 803D6214
L_803D6218:;
  cmpu(c,0,c->r[30],0x0000000Au); // 803D6218
  if (crb(c,2)) { goto L_803D6270; } // 803D621C
  cmpu(c,0,c->r[30],0x00000001u); // 803D6220
  if (crb(c,2)) { goto L_803D6270; } // 803D6224
  c->r[3]=R16(c->r[29]+0x00000006u); // 803D6228
  c->r[0]=0u+0x0000000Du; // 803D622C
  W8(c->r[1]+0x00000009u,c->r[3]); // 803D6230
  W8(c->r[1]+0x00000008u,c->r[0]); // 803D6234
  goto L_803D6270; // 803D6238
L_803D623C:;
  c->r[0]=0u+0x0000000Du; // 803D623C
  c->r[30]=0u+0x00000003u; // 803D6240
  W8(c->r[1]+0x00000008u,c->r[0]); // 803D6244
  c->r[0]=R16(c->r[29]+0x00000006u); // 803D6248
  W8(c->r[1]+0x00000009u,c->r[0]); // 803D624C
  goto L_803D6270; // 803D6250
L_803D6254:;
  c->r[0]=R8(c->r[13]+0xFFFFE318u); // 803D6254
  cmpu(c,0,c->r[0],0x00000001u); // 803D6258
  if (crb(c,0)) { goto L_803D6270; } // 803D625C
  c->r[5]=R16(c->r[29]+0x00000006u); // 803D6260
  c->r[4]=c->r[31]+0x00000000u; // 803D6264
  c->r[3]=0u+0x00000500u; // 803D6268
  c->lr=0x803D6270u; f_803D04F8(c); // 803D626C
L_803D6270:;
  c->r[3]=rotl(c->r[30],0)&0x0000FFFFu; cr0(c,c->r[3]); // 803D6270
  if (crb(c,2)) { goto L_803D6438; } // 803D6274
  c->r[5]=0u+0x807B0000u; // 803D6278
  c->r[4]=c->r[1]+0x00000008u; // 803D627C
  c->r[5]=c->r[5]+0x00006568u; // 803D6280
  c->r[12]=R32(c->r[5]+0x00000224u); // 803D6284
  c->ctr=c->r[12]; // 803D6288
  if (true) { c->lr=0x803D6290u; dispatch(c,c->ctr); } // 803D628C
  goto L_803D6438; // 803D6290
L_803D6294:;
  c->r[0]=R8(c->r[13]+0xFFFFE318u); // 803D6294
  c->r[30]=R8(c->r[27]+0x0000001Cu); // 803D6298
  cmpu(c,0,c->r[0],0x00000004u); // 803D629C
  if (crb(c,0)) { goto L_803D6310; } // 803D62A0
  cmps(c,0,(int32_t)c->r[30],2); // 803D62A4
  if (crb(c,2)) { goto L_803D62DC; } // 803D62A8
  if (!crb(c,0)) { goto L_803D62C0; } // 803D62AC
  cmps(c,0,(int32_t)c->r[30],0); // 803D62B0
  if (crb(c,2)) { goto L_803D62CC; } // 803D62B4
  if (!crb(c,0)) { goto L_803D62D4; } // 803D62B8
  goto L_803D62EC; // 803D62BC
L_803D62C0:;
  cmps(c,0,(int32_t)c->r[30],4); // 803D62C0
  if (!crb(c,0)) { goto L_803D62EC; } // 803D62C4
  goto L_803D62E4; // 803D62C8
L_803D62CC:;
  c->r[26]=c->r[31]+0x0000001Cu; // 803D62CC
  goto L_803D62F0; // 803D62D0
L_803D62D4:;
  c->r[26]=c->r[31]+0x0000002Cu; // 803D62D4
  goto L_803D62F0; // 803D62D8
L_803D62DC:;
  c->r[26]=c->r[31]+0x0000003Cu; // 803D62DC
  goto L_803D62F0; // 803D62E0
L_803D62E4:;
  c->r[26]=c->r[31]+0x00000050u; // 803D62E4
  goto L_803D62F0; // 803D62E8
L_803D62EC:;
  c->r[26]=c->r[31]+0x00000060u; // 803D62EC
L_803D62F0:;
  c->r[3]=c->r[28]|c->r[28]; // 803D62F0
  c->lr=0x803D62F8u; f_803D659C(c); // 803D62F4
  c->r[7]=c->r[3]|c->r[3]; // 803D62F8
  c->r[5]=c->r[30]|c->r[30]; // 803D62FC
  c->r[6]=c->r[26]|c->r[26]; // 803D6300
  c->r[4]=c->r[31]+0x00000078u; // 803D6304
  c->r[3]=0u+0x00000503u; // 803D6308
  c->lr=0x803D6310u; f_803D0528(c); // 803D630C
L_803D6310:;
  c->r[4]=R8(c->r[27]+0x0000001Cu); // 803D6310
  c->r[3]=0u+0x806A0000u; // 803D6314
  c->r[3]=c->r[3]+0x00004810u; // 803D6318
  c->r[28]=rotl(c->r[28],0)&0x000000FFu; // 803D631C
  c->r[0]=c->r[4]+0xFFFFFFFFu; // 803D6320
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 803D6324
  c->r[4]=rotl(c->r[28],1)&0xFFFFFFFEu; // 803D6328
  c->r[5]=R32(c->r[3]+c->r[0]); // 803D632C
  c->r[3]=c->r[5]+c->r[4]; // 803D6330
  c->r[0]=R8(c->r[3]+0x00000001u); // 803D6334
  W8(c->r[27]+0x0000001Cu,c->r[0]); // 803D6338
  c->r[0]=R8(c->r[5]+c->r[4]); // 803D633C
  cmpu(c,0,c->r[0],0x0000000Cu); // 803D6340
  if (crb(c,2)) { goto L_803D6368; } // 803D6344
  c->r[4]=0u+0x806A0000u; // 803D6348
  c->r[0]=rotl(c->r[0],2)&0x000003FCu; // 803D634C
  c->r[4]=c->r[4]+0x00004798u; // 803D6350
  c->r[3]=c->r[27]|c->r[27]; // 803D6354
  c->r[12]=R32(c->r[4]+c->r[0]); // 803D6358
  c->r[4]=c->r[29]|c->r[29]; // 803D635C
  c->ctr=c->r[12]; // 803D6360
  if (true) { c->lr=0x803D6368u; dispatch(c,c->ctr); } // 803D6364
L_803D6368:;
  c->r[3]=R8(c->r[27]+0x0000001Cu); // 803D6368
  cmpu(c,0,c->r[30],c->r[3]); // 803D636C
  if (crb(c,2)) { goto L_803D6438; } // 803D6370
  c->r[0]=R8(c->r[13]+0xFFFFE318u); // 803D6374
  cmpu(c,0,c->r[0],0x00000005u); // 803D6378
  if (crb(c,0)) { goto L_803D6438; } // 803D637C
  cmps(c,0,(int32_t)c->r[30],2); // 803D6380
  if (crb(c,2)) { goto L_803D63B8; } // 803D6384
  if (!crb(c,0)) { goto L_803D639C; } // 803D6388
  cmps(c,0,(int32_t)c->r[30],0); // 803D638C
  if (crb(c,2)) { goto L_803D63A8; } // 803D6390
  if (!crb(c,0)) { goto L_803D63B0; } // 803D6394
  goto L_803D63C8; // 803D6398
L_803D639C:;
  cmps(c,0,(int32_t)c->r[30],4); // 803D639C
  if (!crb(c,0)) { goto L_803D63C8; } // 803D63A0
  goto L_803D63C0; // 803D63A4
L_803D63A8:;
  c->r[26]=c->r[31]+0x0000001Cu; // 803D63A8
  goto L_803D63CC; // 803D63AC
L_803D63B0:;
  c->r[26]=c->r[31]+0x0000002Cu; // 803D63B0
  goto L_803D63CC; // 803D63B4
L_803D63B8:;
  c->r[26]=c->r[31]+0x0000003Cu; // 803D63B8
  goto L_803D63CC; // 803D63BC
L_803D63C0:;
  c->r[26]=c->r[31]+0x00000050u; // 803D63C0
  goto L_803D63CC; // 803D63C4
L_803D63C8:;
  c->r[26]=c->r[31]+0x00000060u; // 803D63C8
L_803D63CC:;
  cmps(c,0,(int32_t)c->r[3],2); // 803D63CC
  if (crb(c,2)) { goto L_803D6404; } // 803D63D0
  if (!crb(c,0)) { goto L_803D63E8; } // 803D63D4
  cmps(c,0,(int32_t)c->r[3],0); // 803D63D8
  if (crb(c,2)) { goto L_803D63F4; } // 803D63DC
  if (!crb(c,0)) { goto L_803D63FC; } // 803D63E0
  goto L_803D6414; // 803D63E4
L_803D63E8:;
  cmps(c,0,(int32_t)c->r[3],4); // 803D63E8
  if (!crb(c,0)) { goto L_803D6414; } // 803D63EC
  goto L_803D640C; // 803D63F0
L_803D63F4:;
  c->r[27]=c->r[31]+0x0000001Cu; // 803D63F4
  goto L_803D6418; // 803D63F8
L_803D63FC:;
  c->r[27]=c->r[31]+0x0000002Cu; // 803D63FC
  goto L_803D6418; // 803D6400
L_803D6404:;
  c->r[27]=c->r[31]+0x0000003Cu; // 803D6404
  goto L_803D6418; // 803D6408
L_803D640C:;
  c->r[27]=c->r[31]+0x00000050u; // 803D640C
  goto L_803D6418; // 803D6410
L_803D6414:;
  c->r[27]=c->r[31]+0x00000060u; // 803D6414
L_803D6418:;
  c->r[3]=c->r[28]|c->r[28]; // 803D6418
  c->lr=0x803D6420u; f_803D659C(c); // 803D641C
  c->r[7]=c->r[3]|c->r[3]; // 803D6420
  c->r[5]=c->r[26]|c->r[26]; // 803D6424
  c->r[6]=c->r[27]|c->r[27]; // 803D6428
  c->r[4]=c->r[31]+0x000000ACu; // 803D642C
  c->r[3]=0u+0x00000504u; // 803D6430
  c->lr=0x803D6438u; f_803D0528(c); // 803D6434
L_803D6438:;
  c->r[11]=c->r[1]+0x00000040u; // 803D6438
  c->lr=0x803D6440u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 803D643C
  c->r[0]=R32(c->r[1]+0x00000044u); // 803D6440
  c->lr=c->r[0]; // 803D6444
  c->r[1]=c->r[1]+0x00000040u; // 803D6448
  return; // 803D644C
}

// bta_hh_hdl_event
void f_803D6450(Ctx* __restrict c) {
  trace_call(0x803D6450u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803D6450
  c->r[0]=c->lr; // 803D6454
  c->r[6]=0u+0x00000010u; // 803D6458
  W32(c->r[1]+0x00000014u,c->r[0]); // 803D645C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 803D6460
  c->r[31]=0u+0x00000000u; // 803D6464
  W32(c->r[1]+0x00000008u,c->r[30]); // 803D6468
  c->r[30]=c->r[3]|c->r[3]; // 803D646C
  c->r[0]=R16(c->r[3]+0x00000000u); // 803D6470
  cmps(c,0,(int32_t)c->r[0],5902); // 803D6474
  if (crb(c,2)) { goto L_803D64B4; } // 803D6478
  if (!crb(c,0)) { goto L_803D6490; } // 803D647C
  cmps(c,0,(int32_t)c->r[0],5900); // 803D6480
  if (crb(c,2)) { goto L_803D649C; } // 803D6484
  if (!crb(c,0)) { goto L_803D64A4; } // 803D6488
  goto L_803D64BC; // 803D648C
L_803D6490:;
  cmps(c,0,(int32_t)c->r[0],5904); // 803D6490
  if (!crb(c,0)) { goto L_803D64BC; } // 803D6494
  goto L_803D64AC; // 803D6498
L_803D649C:;
  c->lr=0x803D64A0u; f_803D45E4(c); // 803D649C
  goto L_803D6580; // 803D64A0
L_803D64A4:;
  c->lr=0x803D64A8u; f_803D4758(c); // 803D64A4
  goto L_803D6580; // 803D64A8
L_803D64AC:;
  c->lr=0x803D64B0u; f_803D485C(c); // 803D64AC
  goto L_803D6580; // 803D64B0
L_803D64B4:;
  c->lr=0x803D64B8u; f_803D57B0(c); // 803D64B4
  goto L_803D6580; // 803D64B8
L_803D64BC:;
  cmpu(c,0,c->r[0],0x00001700u); // 803D64BC
  if (!crb(c,2)) { goto L_803D64D4; } // 803D64C0
  c->r[3]=c->r[3]+0x00000008u; // 803D64C4
  c->lr=0x803D64CCu; f_803D6650(c); // 803D64C8
  c->r[6]=c->r[3]|c->r[3]; // 803D64CC
  goto L_803D652C; // 803D64D0
L_803D64D4:;
  cmpu(c,0,c->r[0],0x0000170Au); // 803D64D4
  if (!crb(c,2)) { goto L_803D6510; } // 803D64D8
  c->r[0]=R16(c->r[3]+0x00000010u); // 803D64DC
  cmpu(c,0,c->r[0],0x0000000Bu); // 803D64E0
  if (!crb(c,2)) { goto L_803D64F8; } // 803D64E4
  c->r[3]=c->r[3]+0x00000008u; // 803D64E8
  c->lr=0x803D64F0u; f_803D6650(c); // 803D64EC
  c->r[6]=c->r[3]|c->r[3]; // 803D64F0
  goto L_803D652C; // 803D64F4
L_803D64F8:;
  c->r[4]=0u+0x807B0000u; // 803D64F8
  c->r[0]=R16(c->r[3]+0x00000006u); // 803D64FC
  c->r[4]=c->r[4]+0x00006568u; // 803D6500
  c->r[3]=c->r[4]+c->r[0]; // 803D6504
  c->r[6]=R8(c->r[3]+0x00000214u); // 803D6508
  goto L_803D652C; // 803D650C
L_803D6510:;
  c->r[0]=R16(c->r[3]+0x00000006u); // 803D6510
  cmpu(c,0,c->r[0],0x00000010u); // 803D6514
  if (!crb(c,0)) { goto L_803D652C; } // 803D6518
  c->r[3]=0u+0x807B0000u; // 803D651C
  c->r[3]=c->r[3]+0x00006568u; // 803D6520
  c->r[3]=c->r[3]+c->r[0]; // 803D6524
  c->r[6]=R8(c->r[3]+0x00000214u); // 803D6528
L_803D652C:;
  c->r[0]=rotl(c->r[6],0)&0x000000FFu; // 803D652C
  cmpu(c,0,c->r[0],0x00000010u); // 803D6530
  if (crb(c,2)) { goto L_803D654C; } // 803D6534
  c->r[3]=0u+0x807B0000u; // 803D6538
  c->r[0]=rotl(c->r[6],5)&0x00001FE0u; // 803D653C
  c->r[3]=c->r[3]+0x00006568u; // 803D6540
  c->r[3]=c->r[3]+c->r[0]; // 803D6544
  c->r[31]=c->r[3]+0x00000010u; // 803D6548
L_803D654C:;
  c->r[0]=R8(c->r[13]+0xFFFFE318u); // 803D654C
  cmpu(c,0,c->r[0],0x00000005u); // 803D6550
  if (crb(c,0)) { goto L_803D6570; } // 803D6554
  c->r[4]=0u+0x80710000u; // 803D6558
  c->r[5]=R16(c->r[30]+0x00000006u); // 803D655C
  c->r[4]=c->r[4]+0xFFFFB274u; // 803D6560
  c->r[6]=rotl(c->r[6],0)&0x000000FFu; // 803D6564
  c->r[3]=0u+0x00000504u; // 803D6568
  c->lr=0x803D6570u; f_803D0510(c); // 803D656C
L_803D6570:;
  c->r[4]=R16(c->r[30]+0x00000000u); // 803D6570
  c->r[3]=c->r[31]|c->r[31]; // 803D6574
  c->r[5]=c->r[30]|c->r[30]; // 803D6578
  c->lr=0x803D6580u; f_803D60FC(c); // 803D657C
L_803D6580:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 803D6580
  c->r[3]=0u+0x00000001u; // 803D6584
  c->r[30]=R32(c->r[1]+0x00000008u); // 803D6588
  c->r[0]=R32(c->r[1]+0x00000014u); // 803D658C
  c->lr=c->r[0]; // 803D6590
  c->r[1]=c->r[1]+0x00000010u; // 803D6594
  return; // 803D6598
}

// bta_hh_evt_code
void f_803D659C(Ctx* __restrict c) {
  trace_call(0x803D659Cu);
  c->r[0]=c->r[3]+0xFFFFE900u; // 803D659C
  c->r[4]=0u+0x80710000u; // 803D65A0
  cmpu(c,0,c->r[0],0x0000000Fu); // 803D65A4
  c->r[4]=c->r[4]+0xFFFFB198u; // 803D65A8
  if (crb(c,1)) { goto L_803D6648; } // 803D65AC
  c->r[3]=0u+0x80710000u; // 803D65B0
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 803D65B4
  c->r[3]=c->r[3]+0xFFFFB438u; // 803D65B8
  c->r[3]=R32(c->r[3]+c->r[0]); // 803D65BC
  c->ctr=c->r[3]; // 803D65C0
  if (true) { switch (c->ctr) { case 0x803D65C8u: goto L_803D65C8; case 0x803D65D0u: goto L_803D65D0; case 0x803D65D8u: goto L_803D65D8; case 0x803D65E0u: goto L_803D65E0; case 0x803D65E8u: goto L_803D65E8; case 0x803D65F0u: goto L_803D65F0; case 0x803D65F8u: goto L_803D65F8; case 0x803D6600u: goto L_803D6600; case 0x803D6608u: goto L_803D6608; case 0x803D6610u: goto L_803D6610; case 0x803D6618u: goto L_803D6618; case 0x803D6620u: goto L_803D6620; case 0x803D6628u: goto L_803D6628; case 0x803D6630u: goto L_803D6630; case 0x803D6638u: goto L_803D6638; case 0x803D6640u: goto L_803D6640; default: break; } dispatch(c,c->ctr); return; } // 803D65C4
L_803D65C8:;
  c->r[3]=c->r[4]+0x00000108u; // 803D65C8
  return; // 803D65CC
L_803D65D0:;
  c->r[3]=c->r[4]+0x00000120u; // 803D65D0
  return; // 803D65D4
L_803D65D8:;
  c->r[3]=c->r[4]+0x00000138u; // 803D65D8
  return; // 803D65DC
L_803D65E0:;
  c->r[3]=c->r[4]+0x0000014Cu; // 803D65E0
  return; // 803D65E4
L_803D65E8:;
  c->r[3]=c->r[4]+0x00000164u; // 803D65E8
  return; // 803D65EC
L_803D65F0:;
  c->r[3]=c->r[4]+0x00000178u; // 803D65F0
  return; // 803D65F4
L_803D65F8:;
  c->r[3]=c->r[4]+0x00000190u; // 803D65F8
  return; // 803D65FC
L_803D6600:;
  c->r[3]=c->r[4]+0x000001A8u; // 803D6600
  return; // 803D6604
L_803D6608:;
  c->r[3]=c->r[4]+0x000001BCu; // 803D6608
  return; // 803D660C
L_803D6610:;
  c->r[3]=c->r[4]+0x000001D4u; // 803D6610
  return; // 803D6614
L_803D6618:;
  c->r[3]=c->r[4]+0x000001F0u; // 803D6618
  return; // 803D661C
L_803D6620:;
  c->r[3]=c->r[4]+0x00000204u; // 803D6620
  return; // 803D6624
L_803D6628:;
  c->r[3]=c->r[4]+0x0000021Cu; // 803D6628
  return; // 803D662C
L_803D6630:;
  c->r[3]=c->r[4]+0x00000238u; // 803D6630
  return; // 803D6634
L_803D6638:;
  c->r[3]=c->r[4]+0x00000250u; // 803D6638
  return; // 803D663C
L_803D6640:;
  c->r[3]=c->r[4]+0x00000268u; // 803D6640
  return; // 803D6644
L_803D6648:;
  c->r[3]=c->r[4]+0x00000284u; // 803D6648
  return; // 803D664C
}

// bta_hh_find_cb
void f_803D6650(Ctx* __restrict c) {
  trace_call(0x803D6650u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803D6650
  c->r[0]=c->lr; // 803D6654
  W32(c->r[1]+0x00000024u,c->r[0]); // 803D6658
  c->r[11]=c->r[1]+0x00000020u; // 803D665C
  c->lr=0x803D6664u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 803D6660
  c->r[31]=0u+0x807B0000u; // 803D6664
  c->r[30]=0u+0x80710000u; // 803D6668
  c->r[27]=c->r[3]|c->r[3]; // 803D666C
  c->r[28]=0u+0x00000000u; // 803D6670
  c->r[30]=c->r[30]+0xFFFFB478u; // 803D6674
  c->r[31]=c->r[31]+0x00006568u; // 803D6678
L_803D667C:;
  c->r[29]=rotl(c->r[28],5)&0x00001FE0u; // 803D667C
  c->r[3]=c->r[27]|c->r[27]; // 803D6680
  c->r[4]=c->r[31]+c->r[29]; // 803D6684
  c->r[4]=c->r[4]+0x00000018u; // 803D6688
  c->lr=0x803D6690u; f_803D0B64(c); // 803D668C
  cmps(c,0,(int32_t)c->r[3],0); // 803D6690
  if (!crb(c,2)) { goto L_803D66D8; } // 803D6694
  c->r[3]=c->r[27]|c->r[27]; // 803D6698
  c->r[4]=c->r[2]+0x00003348u; // 803D669C
  c->lr=0x803D66A4u; f_803D0B64(c); // 803D66A0
  cmps(c,0,(int32_t)c->r[3],0); // 803D66A4
  if (crb(c,2)) { goto L_803D66D8; } // 803D66A8
  c->r[0]=R8(c->r[13]+0xFFFFE318u); // 803D66AC
  cmpu(c,0,c->r[0],0x00000005u); // 803D66B0
  if (crb(c,0)) { goto L_803D66D0; } // 803D66B4
  c->r[3]=c->r[31]+c->r[29]; // 803D66B8
  c->r[4]=c->r[30]+0x00000000u; // 803D66BC
  c->r[6]=R8(c->r[3]+0x00000026u); // 803D66C0
  c->r[5]=rotl(c->r[28],0)&0x000000FFu; // 803D66C4
  c->r[3]=0u+0x00000504u; // 803D66C8
  c->lr=0x803D66D0u; f_803D0510(c); // 803D66CC
L_803D66D0:;
  c->r[3]=c->r[28]|c->r[28]; // 803D66D0
  goto L_803D6774; // 803D66D4
L_803D66D8:;
  c->r[0]=R8(c->r[13]+0xFFFFE318u); // 803D66D8
  cmpu(c,0,c->r[0],0x00000005u); // 803D66DC
  if (crb(c,0)) { goto L_803D6704; } // 803D66E0
  c->r[8]=c->r[31]+c->r[29]; // 803D66E4
  c->r[4]=c->r[30]+0x00000024u; // 803D66E8
  c->r[5]=R8(c->r[8]+0x00000028u); // 803D66EC
  c->r[6]=rotl(c->r[28],0)&0x000000FFu; // 803D66F0
  c->r[7]=R8(c->r[8]+0x00000026u); // 803D66F4
  c->r[3]=0u+0x00000504u; // 803D66F8
  c->r[8]=R8(c->r[8]+0x0000002Cu); // 803D66FC
  c->lr=0x803D6704u; f_803D0540(c); // 803D6700
L_803D6704:;
  c->r[28]=c->r[28]+0x00000001u; // 803D6704
  cmpu(c,0,c->r[28],0x00000010u); // 803D6708
  if (crb(c,0)) { IRQCHK(c); goto L_803D667C; } // 803D670C
  c->r[4]=0u+0x807B0000u; // 803D6710
  c->r[0]=0u+0x00000010u; // 803D6714
  c->r[4]=c->r[4]+0x00006568u; // 803D6718
  c->r[29]=0u+0x00000000u; // 803D671C
  c->ctr=c->r[0]; // 803D6720
L_803D6724:;
  c->r[0]=rotl(c->r[29],5)&0x00001FE0u; // 803D6724
  c->r[3]=c->r[4]+c->r[0]; // 803D6728
  c->r[0]=R8(c->r[3]+0x00000028u); // 803D672C
  cmps(c,0,(int32_t)c->r[0],0); // 803D6730
  if (!crb(c,2)) { goto L_803D6748; } // 803D6734
  c->r[4]=c->r[27]|c->r[27]; // 803D6738
  c->r[3]=c->r[3]+0x00000018u; // 803D673C
  c->lr=0x803D6744u; f_803D0B30(c); // 803D6740
  goto L_803D6750; // 803D6744
L_803D6748:;
  c->r[29]=c->r[29]+0x00000001u; // 803D6748
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_803D6724; } // 803D674C
L_803D6750:;
  c->r[0]=R8(c->r[13]+0xFFFFE318u); // 803D6750
  cmpu(c,0,c->r[0],0x00000005u); // 803D6754
  if (crb(c,0)) { goto L_803D6770; } // 803D6758
  c->r[4]=c->r[30]+0x00000058u; // 803D675C
  c->r[5]=rotl(c->r[29],0)&0x000000FFu; // 803D6760
  c->r[3]=0u+0x00000504u; // 803D6764
  c->r[6]=0u+0x00000010u; // 803D6768
  c->lr=0x803D6770u; f_803D0510(c); // 803D676C
L_803D6770:;
  c->r[3]=c->r[29]|c->r[29]; // 803D6770
L_803D6774:;
  c->r[11]=c->r[1]+0x00000020u; // 803D6774
  c->lr=0x803D677Cu; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 803D6778
  c->r[0]=R32(c->r[1]+0x00000024u); // 803D677C
  c->lr=c->r[0]; // 803D6780
  c->r[1]=c->r[1]+0x00000020u; // 803D6784
  return; // 803D6788
}

// bta_hh_clean_up_kdev
void f_803D678C(Ctx* __restrict c) {
  trace_call(0x803D678Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803D678C
  c->r[0]=c->lr; // 803D6790
  W32(c->r[1]+0x00000014u,c->r[0]); // 803D6794
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 803D6798
  W32(c->r[1]+0x00000008u,c->r[30]); // 803D679C
  c->r[30]=c->r[3]|c->r[3]; // 803D67A0
  c->r[5]=R8(c->r[3]+0x00000016u); // 803D67A4
  cmpu(c,0,c->r[5],0x000000FFu); // 803D67A8
  if (crb(c,2)) { goto L_803D67C4; } // 803D67AC
  c->r[4]=0u+0x807B0000u; // 803D67B0
  c->r[0]=0u+0x00000010u; // 803D67B4
  c->r[4]=c->r[4]+0x00006568u; // 803D67B8
  c->r[4]=c->r[4]+c->r[5]; // 803D67BC
  W8(c->r[4]+0x00000214u,c->r[0]); // 803D67C0
L_803D67C4:;
  c->r[31]=R8(c->r[3]+0x00000012u); // 803D67C4
  c->r[3]=c->r[3]+0x00000004u; // 803D67C8
  c->lr=0x803D67D0u; f_803D127C(c); // 803D67CC
  c->r[3]=c->r[30]|c->r[30]; // 803D67D0
  c->r[4]=0u+0x00000000u; // 803D67D4
  c->r[5]=0u+0x00000020u; // 803D67D8
  c->lr=0x803D67E0u; f_800043EC(c); // 803D67DC
  c->r[3]=0u+0x00000001u; // 803D67E0
  c->r[0]=0u+0x000000FFu; // 803D67E4
  W8(c->r[30]+0x00000012u,c->r[31]); // 803D67E8
  W8(c->r[30]+0x0000001Cu,c->r[3]); // 803D67EC
  W8(c->r[30]+0x00000016u,c->r[0]); // 803D67F0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 803D67F4
  c->r[30]=R32(c->r[1]+0x00000008u); // 803D67F8
  c->r[0]=R32(c->r[1]+0x00000014u); // 803D67FC
  c->lr=c->r[0]; // 803D6800
  c->r[1]=c->r[1]+0x00000010u; // 803D6804
  return; // 803D6808
}

// bta_hh_add_device_to_list
void f_803D680C(Ctx* __restrict c) {
  trace_call(0x803D680Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803D680C
  c->r[0]=c->lr; // 803D6810
  W32(c->r[1]+0x00000024u,c->r[0]); // 803D6814
  c->r[11]=c->r[1]+0x00000020u; // 803D6818
  c->lr=0x803D6820u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 803D681C
  c->r[0]=R8(c->r[13]+0xFFFFE318u); // 803D6820
  c->r[26]=c->r[3]|c->r[3]; // 803D6824
  c->r[27]=c->r[4]|c->r[4]; // 803D6828
  c->r[28]=c->r[5]|c->r[5]; // 803D682C
  cmpu(c,0,c->r[0],0x00000005u); // 803D6830
  c->r[29]=c->r[6]|c->r[6]; // 803D6834
  c->r[30]=c->r[7]|c->r[7]; // 803D6838
  c->r[31]=c->r[8]|c->r[8]; // 803D683C
  if (crb(c,0)) { goto L_803D6858; } // 803D6840
  c->r[4]=0u+0x80710000u; // 803D6844
  c->r[5]=c->r[30]|c->r[30]; // 803D6848
  c->r[4]=c->r[4]+0xFFFFB4FCu; // 803D684C
  c->r[3]=0u+0x00000504u; // 803D6850
  c->lr=0x803D6858u; f_803D04F8(c); // 803D6854
L_803D6858:;
  c->r[0]=0u+0x00000001u; // 803D6858
  cmps(c,0,(int32_t)c->r[29],0); // 803D685C
  W8(c->r[26]+0x00000016u,c->r[27]); // 803D6860
  W8(c->r[26]+0x00000018u,c->r[0]); // 803D6864
  W16(c->r[26]+0x0000000Eu,c->r[28]); // 803D6868
  W8(c->r[26]+0x00000013u,c->r[30]); // 803D686C
  W8(c->r[26]+0x00000015u,c->r[31]); // 803D6870
  if (crb(c,2)) { goto L_803D68B0; } // 803D6874
  c->r[3]=c->r[26]+0x00000004u; // 803D6878
  c->lr=0x803D6880u; f_803D127C(c); // 803D687C
  c->r[3]=R16(c->r[29]+0x00000000u); // 803D6880
  cmps(c,0,(int32_t)c->r[3],0); // 803D6884
  if (crb(c,2)) { goto L_803D68B0; } // 803D6888
  c->lr=0x803D6890u; f_803CD954(c); // 803D688C
  cmps(c,0,(int32_t)c->r[3],0); // 803D6890
  W32(c->r[26]+0x00000004u,c->r[3]); // 803D6894
  if (crb(c,2)) { goto L_803D68B0; } // 803D6898
  c->r[0]=R16(c->r[29]+0x00000000u); // 803D689C
  W16(c->r[26]+0x00000000u,c->r[0]); // 803D68A0
  c->r[4]=R32(c->r[29]+0x00000004u); // 803D68A4
  c->r[5]=R16(c->r[29]+0x00000000u); // 803D68A8
  c->lr=0x803D68B0u; f_802DC484(c); // 803D68AC
L_803D68B0:;
  c->r[11]=c->r[1]+0x00000020u; // 803D68B0
  c->lr=0x803D68B8u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 803D68B4
  c->r[0]=R32(c->r[1]+0x00000024u); // 803D68B8
  c->lr=c->r[0]; // 803D68BC
  c->r[1]=c->r[1]+0x00000020u; // 803D68C0
  return; // 803D68C4
}

// bta_hh_tod_spt
void f_803D68C8(Ctx* __restrict c) {
  trace_call(0x803D68C8u);
  c->r[7]=R32(c->r[13]+0xFFFFA0B0u); // 803D68C8
  c->r[9]=rotl(c->r[4],30)&0x0000003Fu; // 803D68CC
  c->r[8]=0u+0x00000000u; // 803D68D0
  c->r[5]=R8(c->r[7]+0x00000000u); // 803D68D4
  goto L_803D6908; // 803D68D8
L_803D68DC:;
  c->r[4]=R32(c->r[7]+0x00000004u); // 803D68DC
  c->r[6]=rotl(c->r[8],1)&0x000001FEu; // 803D68E0
  c->r[0]=R8(c->r[4]+c->r[6]); // 803D68E4
  cmpu(c,0,c->r[9],c->r[0]); // 803D68E8
  if (!crb(c,2)) { goto L_803D6904; } // 803D68EC
  c->r[4]=c->r[4]+c->r[6]; // 803D68F0
  c->r[0]=R8(c->r[4]+0x00000001u); // 803D68F4
  W8(c->r[3]+0x00000015u,c->r[0]); // 803D68F8
  c->r[3]=0u+0x00000001u; // 803D68FC
  return; // 803D6900
L_803D6904:;
  c->r[8]=c->r[8]+0x00000001u; // 803D6904
L_803D6908:;
  c->r[0]=rotl(c->r[8],0)&0x000000FFu; // 803D6908
  cmpu(c,0,c->r[0],c->r[5]); // 803D690C
  if (crb(c,0)) { IRQCHK(c); goto L_803D68DC; } // 803D6910
  c->r[3]=0u+0x00000000u; // 803D6914
  return; // 803D6918
}

// bta_hh_trace_dev_db
void f_803D691C(Ctx* __restrict c) {
  trace_call(0x803D691Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803D691C
  c->r[0]=c->lr; // 803D6920
  W32(c->r[1]+0x00000024u,c->r[0]); // 803D6924
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 803D6928
  W32(c->r[1]+0x00000018u,c->r[30]); // 803D692C
  c->r[30]=0u+0x80710000u; // 803D6930
  c->r[30]=c->r[30]+0xFFFFB478u; // 803D6934
  W32(c->r[1]+0x00000014u,c->r[29]); // 803D6938
  c->r[0]=R8(c->r[13]+0xFFFFE318u); // 803D693C
  cmpu(c,0,c->r[0],0x00000005u); // 803D6940
  if (crb(c,0)) { goto L_803D6954; } // 803D6944
  c->r[4]=c->r[30]+0x000001E4u; // 803D6948
  c->r[3]=0u+0x00000504u; // 803D694C
  c->lr=0x803D6954u; f_803D04E0(c); // 803D6950
L_803D6954:;
  c->r[3]=0u+0x807B0000u; // 803D6954
  c->r[29]=0u+0x00000000u; // 803D6958
  c->r[31]=c->r[3]+0x00006568u; // 803D695C
L_803D6960:;
  c->r[0]=R8(c->r[13]+0xFFFFE318u); // 803D6960
  cmpu(c,0,c->r[0],0x00000005u); // 803D6964
  if (crb(c,0)) { goto L_803D698C; } // 803D6968
  c->r[0]=rotl(c->r[29],5)&0x00001FE0u; // 803D696C
  c->r[4]=c->r[30]+0x00000220u; // 803D6970
  c->r[7]=c->r[31]+c->r[0]; // 803D6974
  c->r[5]=rotl(c->r[29],0)&0x000000FFu; // 803D6978
  c->r[6]=R8(c->r[7]+0x00000028u); // 803D697C
  c->r[3]=0u+0x00000504u; // 803D6980
  c->r[7]=R8(c->r[7]+0x00000026u); // 803D6984
  c->lr=0x803D698Cu; f_803D0528(c); // 803D6988
L_803D698C:;
  c->r[0]=R8(c->r[13]+0xFFFFE318u); // 803D698C
  cmpu(c,0,c->r[0],0x00000005u); // 803D6990
  if (crb(c,0)) { goto L_803D69BC; } // 803D6994
  c->r[0]=rotl(c->r[29],5)&0x00001FE0u; // 803D6998
  c->r[4]=c->r[30]+0x00000244u; // 803D699C
  c->r[8]=c->r[31]+c->r[0]; // 803D69A0
  c->r[3]=0u+0x00000504u; // 803D69A4
  c->r[5]=R16(c->r[8]+0x0000001Eu); // 803D69A8
  c->r[6]=R8(c->r[8]+0x0000002Cu); // 803D69AC
  c->r[7]=R8(c->r[8]+0x00000023u); // 803D69B0
  c->r[8]=R8(c->r[8]+0x00000022u); // 803D69B4
  c->lr=0x803D69BCu; f_803D0540(c); // 803D69B8
L_803D69BC:;
  c->r[29]=c->r[29]+0x00000001u; // 803D69BC
  cmpu(c,0,c->r[29],0x00000010u); // 803D69C0
  if (crb(c,0)) { IRQCHK(c); goto L_803D6960; } // 803D69C4
  c->r[0]=R8(c->r[13]+0xFFFFE318u); // 803D69C8
  cmpu(c,0,c->r[0],0x00000005u); // 803D69CC
  if (crb(c,0)) { goto L_803D69E0; } // 803D69D0
  c->r[4]=c->r[30]+0x00000280u; // 803D69D4
  c->r[3]=0u+0x00000504u; // 803D69D8
  c->lr=0x803D69E0u; f_803D04E0(c); // 803D69DC
L_803D69E0:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 803D69E0
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 803D69E4
  c->r[30]=R32(c->r[1]+0x00000018u); // 803D69E8
  c->r[29]=R32(c->r[1]+0x00000014u); // 803D69EC
  c->lr=c->r[0]; // 803D69F0
  c->r[1]=c->r[1]+0x00000020u; // 803D69F4
  return; // 803D69F8
}

// btm_acl_init
void f_803D69FC(Ctx* __restrict c) {
  trace_call(0x803D69FCu);
  c->r[3]=0u+0x807B0000u; // 803D69FC
  c->r[4]=0u+0x00007D00u; // 803D6A00
  c->r[3]=c->r[3]+0x00006798u; // 803D6A04
  c->r[0]=0u+0x000000FFu; // 803D6A08
  W16(c->r[3]+0x000004C6u,c->r[4]); // 803D6A0C
  W8(c->r[3]+0x000027BFu,c->r[0]); // 803D6A10
  return; // 803D6A14
}

// btm_handle_to_acl_index
void f_803D6A18(Ctx* __restrict c) {
  trace_call(0x803D6A18u);
  c->r[4]=0u+0x807B0000u; // 803D6A18
  c->r[5]=0u+0x00000000u; // 803D6A1C
  c->r[4]=c->r[4]+0x00006798u; // 803D6A20
  c->r[0]=R8(c->r[4]+0x0000014Du); // 803D6A24
  cmps(c,0,(int32_t)c->r[0],0); // 803D6A28
  if (crb(c,2)) { goto L_803D6A3C; } // 803D6A2C
  c->r[0]=R16(c->r[4]+0x00000034u); // 803D6A30
  cmpu(c,0,c->r[0],c->r[3]); // 803D6A34
  if (crb(c,2)) { goto L_803D6A94; } // 803D6A38
L_803D6A3C:;
  c->r[0]=R8(c->r[4]+0x00000269u); // 803D6A3C
  c->r[5]=0u+0x00000001u; // 803D6A40
  cmps(c,0,(int32_t)c->r[0],0); // 803D6A44
  if (crb(c,2)) { goto L_803D6A58; } // 803D6A48
  c->r[0]=R16(c->r[4]+0x00000150u); // 803D6A4C
  cmpu(c,0,c->r[0],c->r[3]); // 803D6A50
  if (crb(c,2)) { goto L_803D6A94; } // 803D6A54
L_803D6A58:;
  c->r[0]=R8(c->r[4]+0x00000385u); // 803D6A58
  c->r[5]=0u+0x00000002u; // 803D6A5C
  cmps(c,0,(int32_t)c->r[0],0); // 803D6A60
  if (crb(c,2)) { goto L_803D6A74; } // 803D6A64
  c->r[0]=R16(c->r[4]+0x0000026Cu); // 803D6A68
  cmpu(c,0,c->r[0],c->r[3]); // 803D6A6C
  if (crb(c,2)) { goto L_803D6A94; } // 803D6A70
L_803D6A74:;
  c->r[0]=R8(c->r[4]+0x000004A1u); // 803D6A74
  c->r[5]=0u+0x00000003u; // 803D6A78
  cmps(c,0,(int32_t)c->r[0],0); // 803D6A7C
  if (crb(c,2)) { goto L_803D6A90; } // 803D6A80
  c->r[0]=R16(c->r[4]+0x00000388u); // 803D6A84
  cmpu(c,0,c->r[0],c->r[3]); // 803D6A88
  if (crb(c,2)) { goto L_803D6A94; } // 803D6A8C
L_803D6A90:;
  c->r[5]=0u+0x00000004u; // 803D6A90
L_803D6A94:;
  c->r[3]=c->r[5]|c->r[5]; // 803D6A94
  return; // 803D6A98
}

// btm_acl_created
void f_803D6A9C(Ctx* __restrict c) {
  trace_call(0x803D6A9Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803D6A9C
  c->r[0]=c->lr; // 803D6AA0
  W32(c->r[1]+0x00000034u,c->r[0]); // 803D6AA4
  c->r[11]=c->r[1]+0x00000030u; // 803D6AA8
  c->lr=0x803D6AB0u; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 803D6AAC
  c->r[8]=0u+0x807B0000u; // 803D6AB0
  c->r[30]=c->r[3]|c->r[3]; // 803D6AB4
  c->r[8]=c->r[8]+0x00006798u; // 803D6AB8
  c->r[25]=c->r[4]|c->r[4]; // 803D6ABC
  c->r[26]=c->r[5]|c->r[5]; // 803D6AC0
  c->r[27]=c->r[6]|c->r[6]; // 803D6AC4
  c->r[28]=c->r[7]|c->r[7]; // 803D6AC8
  c->r[29]=c->r[8]+0x00000034u; // 803D6ACC
  c->r[31]=0u+0x00000000u; // 803D6AD0
L_803D6AD4:;
  c->r[0]=R8(c->r[29]+0x00000119u); // 803D6AD4
  cmps(c,0,(int32_t)c->r[0],0); // 803D6AD8
  if (crb(c,2)) { goto L_803D6AFC; } // 803D6ADC
  c->r[4]=c->r[30]|c->r[30]; // 803D6AE0
  c->r[3]=c->r[29]+0x00000008u; // 803D6AE4
  c->r[5]=0u+0x00000006u; // 803D6AE8
  c->lr=0x803D6AF0u; f_803AF7B8(c); // 803D6AEC
  cmps(c,0,(int32_t)c->r[3],0); // 803D6AF0
  if (!crb(c,2)) { goto L_803D6AFC; } // 803D6AF4
  goto L_803D6B10; // 803D6AF8
L_803D6AFC:;
  c->r[31]=c->r[31]+0x00000001u; // 803D6AFC
  c->r[29]=c->r[29]+0x0000011Cu; // 803D6B00
  cmpu(c,0,c->r[31],0x00000004u); // 803D6B04
  if (crb(c,0)) { IRQCHK(c); goto L_803D6AD4; } // 803D6B08
  c->r[29]=0u+0x00000000u; // 803D6B0C
L_803D6B10:;
  cmps(c,0,(int32_t)c->r[29],0); // 803D6B10
  if (crb(c,2)) { goto L_803D6B64; } // 803D6B14
  W16(c->r[29]+0x00000000u,c->r[27]); // 803D6B18
  c->r[3]=0u+0x807B0000u; // 803D6B1C
  c->r[3]=c->r[3]+0x00006798u; // 803D6B20
  W8(c->r[29]+0x0000011Au,c->r[28]); // 803D6B24
  c->r[0]=R8(c->r[3]+0x000027C0u); // 803D6B28
  cmpu(c,0,c->r[0],0x00000004u); // 803D6B2C
  if (crb(c,0)) { goto L_803D6D98; } // 803D6B30
  c->r[3]=0u+0x000D0000u; // 803D6B34
  c->r[4]=0u+0x80710000u; // 803D6B38
  c->r[5]=R8(c->r[30]+0x00000000u); // 803D6B3C
  c->r[3]=c->r[3]+0x00000003u; // 803D6B40
  c->r[6]=R8(c->r[30]+0x00000001u); // 803D6B44
  c->r[4]=c->r[4]+0xFFFFB738u; // 803D6B48
  c->r[7]=R8(c->r[30]+0x00000002u); // 803D6B4C
  c->r[8]=R8(c->r[30]+0x00000003u); // 803D6B50
  c->r[9]=R8(c->r[30]+0x00000004u); // 803D6B54
  c->r[10]=R8(c->r[30]+0x00000005u); // 803D6B58
  c->lr=0x803D6B60u; f_803D0570(c); // 803D6B5C
  goto L_803D6D98; // 803D6B60
L_803D6B64:;
  c->r[3]=0u+0x807B0000u; // 803D6B64
  c->r[0]=0u+0x00000004u; // 803D6B68
  c->r[3]=c->r[3]+0x00006798u; // 803D6B6C
  c->r[4]=0u+0x00000000u; // 803D6B70
  c->r[31]=c->r[3]+0x00000034u; // 803D6B74
  c->ctr=c->r[0]; // 803D6B78
L_803D6B7C:;
  c->r[0]=R8(c->r[31]+0x00000119u); // 803D6B7C
  cmps(c,0,(int32_t)c->r[0],0); // 803D6B80
  if (!crb(c,2)) { goto L_803D6D8C; } // 803D6B84
  c->r[3]=0u+0x00000001u; // 803D6B88
  c->r[0]=0u+0x00000000u; // 803D6B8C
  W8(c->r[31]+0x00000119u,c->r[3]); // 803D6B90
  c->r[3]=rotl(c->r[4],0)&0x000000FFu; // 803D6B94
  W16(c->r[31]+0x00000000u,c->r[27]); // 803D6B98
  W8(c->r[31]+0x0000011Au,c->r[28]); // 803D6B9C
  W16(c->r[31]+0x00000004u,c->r[0]); // 803D6BA0
  c->lr=0x803D6BA8u; f_803DC778(c); // 803D6BA4
  c->r[4]=c->r[30]|c->r[30]; // 803D6BA8
  c->r[3]=c->r[31]+0x00000008u; // 803D6BAC
  c->r[5]=0u+0x00000006u; // 803D6BB0
  c->lr=0x803D6BB8u; f_802DC484(c); // 803D6BB4
  cmps(c,0,(int32_t)c->r[25],0); // 803D6BB8
  if (crb(c,2)) { goto L_803D6BD0; } // 803D6BBC
  c->r[4]=c->r[25]|c->r[25]; // 803D6BC0
  c->r[3]=c->r[31]+0x0000000Eu; // 803D6BC4
  c->r[5]=0u+0x00000003u; // 803D6BC8
  c->lr=0x803D6BD0u; f_802DC484(c); // 803D6BCC
L_803D6BD0:;
  cmps(c,0,(int32_t)c->r[26],0); // 803D6BD0
  if (crb(c,2)) { goto L_803D6BE8; } // 803D6BD4
  c->r[4]=c->r[26]|c->r[26]; // 803D6BD8
  c->r[3]=c->r[31]+0x00000011u; // 803D6BDC
  c->r[5]=0u+0x000000F8u; // 803D6BE0
  c->lr=0x803D6BE8u; f_802DC484(c); // 803D6BE4
L_803D6BE8:;
  c->r[3]=R16(c->r[31]+0x00000000u); // 803D6BE8
  c->lr=0x803D6BF0u; f_803E40FC(c); // 803D6BEC
  c->r[3]=R16(c->r[31]+0x00000000u); // 803D6BF0
  c->lr=0x803D6BF8u; f_803E4080(c); // 803D6BF4
  c->r[3]=c->r[27]|c->r[27]; // 803D6BF8
  c->lr=0x803D6C00u; f_803D8B34(c); // 803D6BFC
  cmps(c,0,(int32_t)c->r[3],0); // 803D6C00
  c->r[5]=c->r[3]|c->r[3]; // 803D6C04
  if (crb(c,2)) { goto L_803D6D80; } // 803D6C08
  c->r[0]=0u+0x00000008u; // 803D6C0C
  c->r[6]=0u+0x00000000u; // 803D6C10
  c->ctr=c->r[0]; // 803D6C14
L_803D6C18:;
  c->r[0]=rotl(c->r[6],0)&0x000000FFu; // 803D6C18
  c->r[4]=c->r[3]+c->r[0]; // 803D6C1C
  c->r[0]=R8(c->r[4]+0x00000077u); // 803D6C20
  cmps(c,0,(int32_t)c->r[0],0); // 803D6C24
  if (crb(c,2)) { goto L_803D6D78; } // 803D6C28
  c->r[4]=c->r[5]+0x00000077u; // 803D6C2C
  c->r[3]=c->r[31]+0x00000110u; // 803D6C30
  c->r[5]=0u+0x00000008u; // 803D6C34
  c->lr=0x803D6C3Cu; f_802DC484(c); // 803D6C38
  c->r[3]=0u+0x807B0000u; // 803D6C3C
  c->r[0]=0u+0xFFFFCCF9u; // 803D6C40
  c->r[3]=c->r[3]+0x00006798u; // 803D6C44
  c->r[5]=R16(c->r[3]+0x00000654u); // 803D6C48
  c->r[3]=R8(c->r[3]+0x00000636u); // 803D6C4C
  c->r[4]=c->r[5]&0x0000CC18u; cr0(c,c->r[4]); // 803D6C50
  cmpu(c,0,c->r[3],0x00000003u); // 803D6C54
  c->r[30]=c->r[4]&c->r[0]; // 803D6C58
  if (crb(c,0)) { goto L_803D6C6C; } // 803D6C5C
  c->r[0]=c->r[5]&0x00003306u; cr0(c,c->r[0]); // 803D6C60
  c->r[0]=c->r[4]|c->r[0]; // 803D6C64
  c->r[30]=rotl(c->r[0],0)&0x0000FFFFu; // 803D6C68
L_803D6C6C:;
  c->r[3]=0u+0x807B0000u; // 803D6C6C
  c->r[3]=c->r[3]+0x00006798u; // 803D6C70
  c->r[0]=R8(c->r[3]+0x000027C0u); // 803D6C74
  cmpu(c,0,c->r[0],0x00000004u); // 803D6C78
  if (crb(c,0)) { goto L_803D6C98; } // 803D6C7C
  c->r[3]=0u+0x000D0000u; // 803D6C80
  c->r[4]=0u+0x80710000u; // 803D6C84
  c->r[3]=c->r[3]+0x00000003u; // 803D6C88
  c->r[5]=rotl(c->r[30],0)&0x0000FFFFu; // 803D6C8C
  c->r[4]=c->r[4]+0xFFFFB778u; // 803D6C90
  c->lr=0x803D6C98u; f_803D04F8(c); // 803D6C94
L_803D6C98:;
  c->r[3]=R16(c->r[31]+0x00000000u); // 803D6C98
  c->r[4]=rotl(c->r[30],0)&0x0000FFFFu; // 803D6C9C
  c->lr=0x803D6CA4u; f_803E3CF4(c); // 803D6CA0
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 803D6CA4
  if (crb(c,2)) { goto L_803D6CB0; } // 803D6CA8
  W16(c->r[31]+0x00000002u,c->r[30]); // 803D6CAC
L_803D6CB0:;
  c->r[4]=0u+0x807B0000u; // 803D6CB0
  c->r[4]=c->r[4]+0x00006798u; // 803D6CB4
  c->r[0]=R16(c->r[4]+0x000004C4u); // 803D6CB8
  cmps(c,0,(int32_t)c->r[0],0); // 803D6CBC
  if (crb(c,2)) { goto L_803D6CD0; } // 803D6CC0
  c->r[3]=c->r[31]+0x00000008u; // 803D6CC4
  c->r[4]=c->r[4]+0x000004C4u; // 803D6CC8
  c->lr=0x803D6CD0u; f_803D7264(c); // 803D6CCC
L_803D6CD0:;
  c->r[3]=0u+0x807B0000u; // 803D6CD0
  c->r[29]=0u+0x00000000u; // 803D6CD4
  c->r[3]=c->r[3]+0x00006798u; // 803D6CD8
  c->r[28]=R16(c->r[3]+0x000004C6u); // 803D6CDC
  c->r[30]=c->r[3]+0x00000034u; // 803D6CE0
L_803D6CE4:;
  c->r[0]=R8(c->r[30]+0x00000119u); // 803D6CE4
  cmps(c,0,(int32_t)c->r[0],0); // 803D6CE8
  if (crb(c,2)) { goto L_803D6D0C; } // 803D6CEC
  c->r[3]=c->r[30]+0x00000008u; // 803D6CF0
  c->r[4]=c->r[31]+0x00000008u; // 803D6CF4
  c->r[5]=0u+0x00000006u; // 803D6CF8
  c->lr=0x803D6D00u; f_803AF7B8(c); // 803D6CFC
  cmps(c,0,(int32_t)c->r[3],0); // 803D6D00
  if (!crb(c,2)) { goto L_803D6D0C; } // 803D6D04
  goto L_803D6D20; // 803D6D08
L_803D6D0C:;
  c->r[29]=c->r[29]+0x00000001u; // 803D6D0C
  c->r[30]=c->r[30]+0x0000011Cu; // 803D6D10
  cmpu(c,0,c->r[29],0x00000004u); // 803D6D14
  if (crb(c,0)) { IRQCHK(c); goto L_803D6CE4; } // 803D6D18
  c->r[30]=0u+0x00000000u; // 803D6D1C
L_803D6D20:;
  cmps(c,0,(int32_t)c->r[30],0); // 803D6D20
  if (crb(c,2)) { goto L_803D6D44; } // 803D6D24
  W16(c->r[30]+0x0000010Eu,c->r[28]); // 803D6D28
  c->r[0]=R8(c->r[30]+0x0000011Au); // 803D6D2C
  cmps(c,0,(int32_t)c->r[0],0); // 803D6D30
  if (!crb(c,2)) { goto L_803D6D44; } // 803D6D34
  c->r[3]=R16(c->r[30]+0x00000000u); // 803D6D38
  c->r[4]=c->r[28]|c->r[28]; // 803D6D3C
  c->lr=0x803D6D44u; f_803E51F4(c); // 803D6D40
L_803D6D44:;
  c->r[3]=0u+0x807B0000u; // 803D6D44
  c->r[3]=c->r[3]+0x00006798u; // 803D6D48
  c->r[12]=R32(c->r[3]+0x000004C8u); // 803D6D4C
  cmps(c,0,(int32_t)c->r[12],0); // 803D6D50
  if (crb(c,2)) { goto L_803D6D98; } // 803D6D54
  c->r[3]=c->r[31]+0x00000008u; // 803D6D58
  c->r[4]=c->r[31]+0x0000000Eu; // 803D6D5C
  c->r[5]=c->r[31]+0x00000011u; // 803D6D60
  c->r[6]=c->r[31]+0x00000110u; // 803D6D64
  c->r[7]=0u+0x00000001u; // 803D6D68
  c->ctr=c->r[12]; // 803D6D6C
  if (true) { c->lr=0x803D6D74u; dispatch(c,c->ctr); } // 803D6D70
  goto L_803D6D98; // 803D6D74
L_803D6D78:;
  c->r[6]=c->r[6]+0x00000001u; // 803D6D78
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_803D6C18; } // 803D6D7C
L_803D6D80:;
  c->r[3]=R16(c->r[31]+0x00000000u); // 803D6D80
  c->lr=0x803D6D88u; f_803E4004(c); // 803D6D84
  goto L_803D6D98; // 803D6D88
L_803D6D8C:;
  c->r[4]=c->r[4]+0x00000001u; // 803D6D8C
  c->r[31]=c->r[31]+0x0000011Cu; // 803D6D90
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_803D6B7C; } // 803D6D94
L_803D6D98:;
  c->r[11]=c->r[1]+0x00000030u; // 803D6D98
  c->lr=0x803D6DA0u; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 803D6D9C
  c->r[0]=R32(c->r[1]+0x00000034u); // 803D6DA0
  c->lr=c->r[0]; // 803D6DA4
  c->r[1]=c->r[1]+0x00000030u; // 803D6DA8
  return; // 803D6DAC
}

// btm_acl_removed
void f_803D6DB0(Ctx* __restrict c) {
  trace_call(0x803D6DB0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803D6DB0
  c->r[0]=c->lr; // 803D6DB4
  c->r[4]=0u+0x807B0000u; // 803D6DB8
  W32(c->r[1]+0x00000024u,c->r[0]); // 803D6DBC
  c->r[4]=c->r[4]+0x00006798u; // 803D6DC0
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 803D6DC4
  c->r[31]=0u+0x00000000u; // 803D6DC8
  W32(c->r[1]+0x00000018u,c->r[30]); // 803D6DCC
  c->r[30]=c->r[4]+0x00000034u; // 803D6DD0
  W32(c->r[1]+0x00000014u,c->r[29]); // 803D6DD4
  c->r[29]=c->r[3]|c->r[3]; // 803D6DD8
L_803D6DDC:;
  c->r[0]=R8(c->r[30]+0x00000119u); // 803D6DDC
  cmps(c,0,(int32_t)c->r[0],0); // 803D6DE0
  if (crb(c,2)) { goto L_803D6E04; } // 803D6DE4
  c->r[4]=c->r[29]|c->r[29]; // 803D6DE8
  c->r[3]=c->r[30]+0x00000008u; // 803D6DEC
  c->r[5]=0u+0x00000006u; // 803D6DF0
  c->lr=0x803D6DF8u; f_803AF7B8(c); // 803D6DF4
  cmps(c,0,(int32_t)c->r[3],0); // 803D6DF8
  if (!crb(c,2)) { goto L_803D6E04; } // 803D6DFC
  goto L_803D6E18; // 803D6E00
L_803D6E04:;
  c->r[31]=c->r[31]+0x00000001u; // 803D6E04
  c->r[30]=c->r[30]+0x0000011Cu; // 803D6E08
  cmpu(c,0,c->r[31],0x00000004u); // 803D6E0C
  if (crb(c,0)) { IRQCHK(c); goto L_803D6DDC; } // 803D6E10
  c->r[30]=0u+0x00000000u; // 803D6E14
L_803D6E18:;
  cmps(c,0,(int32_t)c->r[30],0); // 803D6E18
  if (crb(c,2)) { goto L_803D6E58; } // 803D6E1C
  c->r[0]=0u+0x00000000u; // 803D6E20
  c->r[3]=0u+0x807B0000u; // 803D6E24
  W8(c->r[30]+0x00000119u,c->r[0]); // 803D6E28
  c->r[3]=c->r[3]+0x00006798u; // 803D6E2C
  c->r[12]=R32(c->r[3]+0x000004C8u); // 803D6E30
  cmps(c,0,(int32_t)c->r[12],0); // 803D6E34
  if (crb(c,2)) { goto L_803D6E58; } // 803D6E38
  c->r[3]=c->r[29]|c->r[29]; // 803D6E3C
  c->r[4]=0u+0x00000000u; // 803D6E40
  c->r[5]=0u+0x00000000u; // 803D6E44
  c->r[6]=0u+0x00000000u; // 803D6E48
  c->r[7]=0u+0x00000000u; // 803D6E4C
  c->ctr=c->r[12]; // 803D6E50
  if (true) { c->lr=0x803D6E58u; dispatch(c,c->ctr); } // 803D6E54
L_803D6E58:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 803D6E58
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 803D6E5C
  c->r[30]=R32(c->r[1]+0x00000018u); // 803D6E60
  c->r[29]=R32(c->r[1]+0x00000014u); // 803D6E64
  c->lr=c->r[0]; // 803D6E68
  c->r[1]=c->r[1]+0x00000020u; // 803D6E6C
  return; // 803D6E70
}

// btm_acl_device_down
void f_803D6E74(Ctx* __restrict c) {
  trace_call(0x803D6E74u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803D6E74
  c->r[0]=c->lr; // 803D6E78
  c->r[3]=0u+0x807B0000u; // 803D6E7C
  W32(c->r[1]+0x00000014u,c->r[0]); // 803D6E80
  c->r[3]=c->r[3]+0x00006798u; // 803D6E84
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 803D6E88
  c->r[31]=c->r[3]+0x00000034u; // 803D6E8C
  W32(c->r[1]+0x00000008u,c->r[30]); // 803D6E90
  c->r[30]=0u+0x00000000u; // 803D6E94
L_803D6E98:;
  c->r[0]=R8(c->r[31]+0x00000119u); // 803D6E98
  cmps(c,0,(int32_t)c->r[0],0); // 803D6E9C
  if (crb(c,2)) { goto L_803D6EB0; } // 803D6EA0
  c->r[3]=R16(c->r[31]+0x00000000u); // 803D6EA4
  c->r[4]=0u+0x00000003u; // 803D6EA8
  c->lr=0x803D6EB0u; f_803EB2E8(c); // 803D6EAC
L_803D6EB0:;
  c->r[30]=c->r[30]+0x00000001u; // 803D6EB0
  c->r[31]=c->r[31]+0x0000011Cu; // 803D6EB4
  cmpu(c,0,c->r[30],0x00000004u); // 803D6EB8
  if (crb(c,0)) { IRQCHK(c); goto L_803D6E98; } // 803D6EBC
  c->r[0]=R32(c->r[1]+0x00000014u); // 803D6EC0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 803D6EC4
  c->r[30]=R32(c->r[1]+0x00000008u); // 803D6EC8
  c->lr=c->r[0]; // 803D6ECC
  c->r[1]=c->r[1]+0x00000010u; // 803D6ED0
  return; // 803D6ED4
}

// BTM_SwitchRole
void f_803D6ED8(Ctx* __restrict c) {
  trace_call(0x803D6ED8u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803D6ED8
  c->r[0]=c->lr; // 803D6EDC
  W32(c->r[1]+0x00000034u,c->r[0]); // 803D6EE0
  c->r[11]=c->r[1]+0x00000030u; // 803D6EE4
  c->lr=0x803D6EECu; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 803D6EE8
  c->r[6]=0u+0x807B0000u; // 803D6EEC
  c->r[28]=c->r[3]|c->r[3]; // 803D6EF0
  c->r[6]=c->r[6]+0x00006798u; // 803D6EF4
  c->r[29]=c->r[4]|c->r[4]; // 803D6EF8
  c->r[0]=R8(c->r[6]+0x00000640u); // 803D6EFC
  c->r[30]=c->r[5]|c->r[5]; // 803D6F00
  c->r[0]=rotl(c->r[0],0)&0x00000020u; cr0(c,c->r[0]); // 803D6F04
  if (!crb(c,2)) { goto L_803D6F14; } // 803D6F08
  c->r[3]=0u+0x00000004u; // 803D6F0C
  goto L_803D70DC; // 803D6F10
L_803D6F14:;
  c->r[31]=c->r[6]+0x00000034u; // 803D6F14
  c->r[27]=0u+0x00000000u; // 803D6F18
L_803D6F1C:;
  c->r[0]=R8(c->r[31]+0x00000119u); // 803D6F1C
  cmps(c,0,(int32_t)c->r[0],0); // 803D6F20
  if (crb(c,2)) { goto L_803D6F44; } // 803D6F24
  c->r[4]=c->r[28]|c->r[28]; // 803D6F28
  c->r[3]=c->r[31]+0x00000008u; // 803D6F2C
  c->r[5]=0u+0x00000006u; // 803D6F30
  c->lr=0x803D6F38u; f_803AF7B8(c); // 803D6F34
  cmps(c,0,(int32_t)c->r[3],0); // 803D6F38
  if (!crb(c,2)) { goto L_803D6F44; } // 803D6F3C
  goto L_803D6F58; // 803D6F40
L_803D6F44:;
  c->r[27]=c->r[27]+0x00000001u; // 803D6F44
  c->r[31]=c->r[31]+0x0000011Cu; // 803D6F48
  cmpu(c,0,c->r[27],0x00000004u); // 803D6F4C
  if (crb(c,0)) { IRQCHK(c); goto L_803D6F1C; } // 803D6F50
  c->r[31]=0u+0x00000000u; // 803D6F54
L_803D6F58:;
  cmps(c,0,(int32_t)c->r[31],0); // 803D6F58
  if (!crb(c,2)) { goto L_803D6F68; } // 803D6F5C
  c->r[3]=0u+0x00000007u; // 803D6F60
  goto L_803D70DC; // 803D6F64
L_803D6F68:;
  c->r[0]=R8(c->r[31]+0x0000011Au); // 803D6F68
  cmpu(c,0,c->r[0],c->r[29]); // 803D6F6C
  if (!crb(c,2)) { goto L_803D6F7C; } // 803D6F70
  c->r[3]=0u+0x00000000u; // 803D6F74
  goto L_803D70DC; // 803D6F78
L_803D6F7C:;
  c->r[3]=c->r[28]|c->r[28]; // 803D6F7C
  c->lr=0x803D6F84u; f_803DDE00(c); // 803D6F80
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; // 803D6F84
  cmpu(c,0,c->r[0],0x00000001u); // 803D6F88
  if (!crb(c,2)) { goto L_803D6F98; } // 803D6F8C
  c->r[3]=0u+0x00000003u; // 803D6F90
  goto L_803D70DC; // 803D6F94
L_803D6F98:;
  c->r[0]=R8(c->r[31]+0x0000011Bu); // 803D6F98
  cmps(c,0,(int32_t)c->r[0],0); // 803D6F9C
  if (crb(c,2)) { goto L_803D6FD4; } // 803D6FA0
  c->r[3]=0u+0x807B0000u; // 803D6FA4
  c->r[3]=c->r[3]+0x00006798u; // 803D6FA8
  c->r[0]=R8(c->r[3]+0x000027C0u); // 803D6FAC
  cmpu(c,0,c->r[0],0x00000005u); // 803D6FB0
  if (crb(c,0)) { goto L_803D6FCC; } // 803D6FB4
  c->r[3]=0u+0x000D0000u; // 803D6FB8
  c->r[4]=0u+0x80710000u; // 803D6FBC
  c->r[3]=c->r[3]+0x00000004u; // 803D6FC0
  c->r[4]=c->r[4]+0xFFFFB798u; // 803D6FC4
  c->lr=0x803D6FCCu; f_803D04E0(c); // 803D6FC8
L_803D6FCC:;
  c->r[3]=0u+0x00000002u; // 803D6FCC
  goto L_803D70DC; // 803D6FD0
L_803D6FD4:;
  c->r[3]=0u+0x807B0000u; // 803D6FD4
  c->r[4]=0u+0x00000000u; // 803D6FD8
  c->r[3]=c->r[3]+0x00006798u; // 803D6FDC
  c->r[5]=0u+0x00000008u; // 803D6FE0
  c->r[3]=c->r[3]+0x00000624u; // 803D6FE4
  c->lr=0x803D6FECu; f_800043EC(c); // 803D6FE8
  c->r[3]=c->r[31]+0x00000008u; // 803D6FEC
  c->r[4]=c->r[1]+0x00000008u; // 803D6FF0
  c->lr=0x803D6FF8u; f_803DC648(c); // 803D6FF4
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 803D6FF8
  if (crb(c,2)) { goto L_803D7004; } // 803D6FFC
  goto L_803D70DC; // 803D7000
L_803D7004:;
  c->r[3]=R8(c->r[1]+0x00000008u); // 803D7004
  c->r[0]=c->r[3]+0x000000FEu; // 803D7008
  c->r[0]=rotl(c->r[0],0)&0x000000FFu; // 803D700C
  cmpu(c,0,c->r[0],0x00000001u); // 803D7010
  if (crb(c,1)) { goto L_803D7050; } // 803D7014
  c->r[0]=0u+0x00000000u; // 803D7018
  c->r[4]=c->r[31]+0x00000008u; // 803D701C
  W8(c->r[1]+0x00000014u,c->r[0]); // 803D7020
  c->r[5]=c->r[1]+0x0000000Cu; // 803D7024
  c->r[3]=0u+0x00000080u; // 803D7028
  c->lr=0x803D7030u; f_803DC478(c); // 803D702C
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; // 803D7030
  cmpu(c,0,c->r[0],0x00000001u); // 803D7034
  if (crb(c,2)) { goto L_803D7044; } // 803D7038
  c->r[3]=0u+0x00000006u; // 803D703C
  goto L_803D70DC; // 803D7040
L_803D7044:;
  c->r[0]=0u+0x00000001u; // 803D7044
  W8(c->r[31]+0x0000011Bu,c->r[0]); // 803D7048
  goto L_803D70B8; // 803D704C
L_803D7050:;
  c->r[3]=c->r[28]|c->r[28]; // 803D7050
  c->lr=0x803D7058u; f_803D8BEC(c); // 803D7054
  cmps(c,0,(int32_t)c->r[3],0); // 803D7058
  if (crb(c,2)) { goto L_803D7094; } // 803D705C
  c->r[0]=R8(c->r[3]+0x00000076u); // 803D7060
  c->r[0]=rotl(c->r[0],0)&0x00000004u; cr0(c,c->r[0]); // 803D7064
  if (crb(c,2)) { goto L_803D7094; } // 803D7068
  c->r[3]=R16(c->r[31]+0x00000000u); // 803D706C
  c->r[4]=0u+0x00000000u; // 803D7070
  c->lr=0x803D7078u; f_803E3E00(c); // 803D7074
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 803D7078
  if (!crb(c,2)) { goto L_803D7088; } // 803D707C
  c->r[3]=0u+0x00000003u; // 803D7080
  goto L_803D70DC; // 803D7084
L_803D7088:;
  c->r[0]=0u+0x00000002u; // 803D7088
  W8(c->r[31]+0x0000011Bu,c->r[0]); // 803D708C
  goto L_803D70B8; // 803D7090
L_803D7094:;
  c->r[3]=c->r[28]|c->r[28]; // 803D7094
  c->r[4]=c->r[29]|c->r[29]; // 803D7098
  c->lr=0x803D70A0u; f_803E46F8(c); // 803D709C
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 803D70A0
  if (!crb(c,2)) { goto L_803D70B0; } // 803D70A4
  c->r[3]=0u+0x00000003u; // 803D70A8
  goto L_803D70DC; // 803D70AC
L_803D70B0:;
  c->r[0]=0u+0x00000005u; // 803D70B0
  W8(c->r[31]+0x0000011Bu,c->r[0]); // 803D70B4
L_803D70B8:;
  c->r[31]=0u+0x807B0000u; // 803D70B8
  c->r[4]=c->r[28]|c->r[28]; // 803D70BC
  c->r[31]=c->r[31]+0x00006798u; // 803D70C0
  c->r[5]=0u+0x00000006u; // 803D70C4
  c->r[3]=c->r[31]+0x00000626u; // 803D70C8
  c->lr=0x803D70D0u; f_802DC484(c); // 803D70CC
  W8(c->r[31]+0x00000625u,c->r[29]); // 803D70D0
  c->r[3]=0u+0x00000001u; // 803D70D4
  W32(c->r[31]+0x0000062Cu,c->r[30]); // 803D70D8
L_803D70DC:;
  c->r[11]=c->r[1]+0x00000030u; // 803D70DC
  c->lr=0x803D70E4u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 803D70E0
  c->r[0]=R32(c->r[1]+0x00000034u); // 803D70E4
  c->lr=c->r[0]; // 803D70E8
  c->r[1]=c->r[1]+0x00000030u; // 803D70EC
  return; // 803D70F0
}

// btm_acl_encrypt_change
void f_803D70F4(Ctx* __restrict c) {
  trace_call(0x803D70F4u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803D70F4
  c->r[0]=c->lr; // 803D70F8
  c->r[4]=0u+0x807B0000u; // 803D70FC
  c->r[6]=0u+0x00000000u; // 803D7100
  W32(c->r[1]+0x00000024u,c->r[0]); // 803D7104
  c->r[4]=c->r[4]+0x00006798u; // 803D7108
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 803D710C
  W32(c->r[1]+0x00000018u,c->r[30]); // 803D7110
  W32(c->r[1]+0x00000014u,c->r[29]); // 803D7114
  c->r[0]=R8(c->r[4]+0x0000014Du); // 803D7118
  cmps(c,0,(int32_t)c->r[0],0); // 803D711C
  if (crb(c,2)) { goto L_803D7130; } // 803D7120
  c->r[0]=R16(c->r[4]+0x00000034u); // 803D7124
  cmpu(c,0,c->r[0],c->r[3]); // 803D7128
  if (crb(c,2)) { goto L_803D7188; } // 803D712C
L_803D7130:;
  c->r[0]=R8(c->r[4]+0x00000269u); // 803D7130
  c->r[6]=0u+0x00000001u; // 803D7134
  cmps(c,0,(int32_t)c->r[0],0); // 803D7138
  if (crb(c,2)) { goto L_803D714C; } // 803D713C
  c->r[0]=R16(c->r[4]+0x00000150u); // 803D7140
  cmpu(c,0,c->r[0],c->r[3]); // 803D7144
  if (crb(c,2)) { goto L_803D7188; } // 803D7148
L_803D714C:;
  c->r[0]=R8(c->r[4]+0x00000385u); // 803D714C
  c->r[6]=0u+0x00000002u; // 803D7150
  cmps(c,0,(int32_t)c->r[0],0); // 803D7154
  if (crb(c,2)) { goto L_803D7168; } // 803D7158
  c->r[0]=R16(c->r[4]+0x0000026Cu); // 803D715C
  cmpu(c,0,c->r[0],c->r[3]); // 803D7160
  if (crb(c,2)) { goto L_803D7188; } // 803D7164
L_803D7168:;
  c->r[0]=R8(c->r[4]+0x000004A1u); // 803D7168
  c->r[6]=0u+0x00000003u; // 803D716C
  cmps(c,0,(int32_t)c->r[0],0); // 803D7170
  if (crb(c,2)) { goto L_803D7184; } // 803D7174
  c->r[0]=R16(c->r[4]+0x00000388u); // 803D7178
  cmpu(c,0,c->r[0],c->r[3]); // 803D717C
  if (crb(c,2)) { goto L_803D7188; } // 803D7180
L_803D7184:;
  c->r[6]=0u+0x00000004u; // 803D7184
L_803D7188:;
  cmpu(c,0,c->r[6],0x00000004u); // 803D7188
  if (!crb(c,0)) { goto L_803D7248; } // 803D718C
  c->r[0]=(uint32_t)((int32_t)c->r[6]*(int32_t)284); // 803D7190
  c->r[30]=0u+0x807B0000u; // 803D7194
  c->r[30]=c->r[30]+0x00006798u; // 803D7198
  c->r[29]=c->r[30]+c->r[0]; // 803D719C
  goto L_803D71A8; // 803D71A0
  goto L_803D7248; // 803D71A4
L_803D71A8:;
  c->r[0]=R8(c->r[29]+0x0000014Fu); // 803D71A8
  cmpu(c,0,c->r[0],0x00000002u); // 803D71AC
  if (!crb(c,2)) { goto L_803D721C; } // 803D71B0
  cmps(c,0,(int32_t)c->r[5],0); // 803D71B4
  if (crb(c,2)) { goto L_803D71C8; } // 803D71B8
  c->r[0]=0u+0x00000000u; // 803D71BC
  W8(c->r[29]+0x0000014Fu,c->r[0]); // 803D71C0
  goto L_803D71D0; // 803D71C4
L_803D71C8:;
  c->r[0]=0u+0x00000003u; // 803D71C8
  W8(c->r[29]+0x0000014Fu,c->r[0]); // 803D71CC
L_803D71D0:;
  c->r[0]=R8(c->r[29]+0x0000014Eu); // 803D71D0
  c->r[3]=c->r[29]+0x0000003Cu; // 803D71D4
  c->r[0]=cntlz(c->r[0]); // 803D71D8
  c->r[4]=rotl(c->r[0],27)&0x000000FFu; // 803D71DC
  c->lr=0x803D71E4u; f_803E46F8(c); // 803D71E0
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 803D71E4
  if (!crb(c,2)) { goto L_803D7248; } // 803D71E8
  c->r[30]=0u+0x00000000u; // 803D71EC
  c->r[31]=0u+0x807B0000u; // 803D71F0
  W8(c->r[29]+0x0000014Fu,c->r[30]); // 803D71F4
  c->r[31]=c->r[31]+0x00006798u; // 803D71F8
  c->r[12]=R32(c->r[31]+0x0000062Cu); // 803D71FC
  cmps(c,0,(int32_t)c->r[12],0); // 803D7200
  if (crb(c,2)) { goto L_803D7248; } // 803D7204
  c->r[3]=c->r[31]+0x00000624u; // 803D7208
  c->ctr=c->r[12]; // 803D720C
  if (true) { c->lr=0x803D7214u; dispatch(c,c->ctr); } // 803D7210
  W32(c->r[31]+0x0000062Cu,c->r[30]); // 803D7214
  goto L_803D7248; // 803D7218
L_803D721C:;
  cmpu(c,0,c->r[0],0x00000004u); // 803D721C
  if (!crb(c,2)) { goto L_803D7248; } // 803D7220
  c->r[31]=0u+0x00000000u; // 803D7224
  W8(c->r[29]+0x0000014Fu,c->r[31]); // 803D7228
  c->r[12]=R32(c->r[30]+0x0000062Cu); // 803D722C
  cmps(c,0,(int32_t)c->r[12],0); // 803D7230
  if (crb(c,2)) { goto L_803D7248; } // 803D7234
  c->r[3]=c->r[30]+0x00000624u; // 803D7238
  c->ctr=c->r[12]; // 803D723C
  if (true) { c->lr=0x803D7244u; dispatch(c,c->ctr); } // 803D7240
  W32(c->r[30]+0x0000062Cu,c->r[31]); // 803D7244
L_803D7248:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 803D7248
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 803D724C
  c->r[30]=R32(c->r[1]+0x00000018u); // 803D7250
  c->r[29]=R32(c->r[1]+0x00000014u); // 803D7254
  c->lr=c->r[0]; // 803D7258
  c->r[1]=c->r[1]+0x00000020u; // 803D725C
  return; // 803D7260
}

// BTM_SetLinkPolicy
void f_803D7264(Ctx* __restrict c) {
  trace_call(0x803D7264u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803D7264
  c->r[0]=c->lr; // 803D7268
  W32(c->r[1]+0x00000024u,c->r[0]); // 803D726C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 803D7270
  W32(c->r[1]+0x00000018u,c->r[30]); // 803D7274
  c->r[30]=0u+0x80710000u; // 803D7278
  c->r[30]=c->r[30]+0xFFFFB738u; // 803D727C
  W32(c->r[1]+0x00000014u,c->r[29]); // 803D7280
  c->r[29]=c->r[4]|c->r[4]; // 803D7284
  W32(c->r[1]+0x00000010u,c->r[28]); // 803D7288
  c->r[28]=c->r[3]|c->r[3]; // 803D728C
  c->lr=0x803D7294u; f_803D9F30(c); // 803D7290
  c->r[4]=R16(c->r[29]+0x00000000u); // 803D7294
  c->r[31]=c->r[3]|c->r[3]; // 803D7298
  cmps(c,0,(int32_t)c->r[4],0); // 803D729C
  if (crb(c,2)) { goto L_803D73BC; } // 803D72A0
  c->r[0]=rotl(c->r[4],0)&0x00000001u; cr0(c,c->r[0]); // 803D72A4
  if (crb(c,2)) { goto L_803D72E4; } // 803D72A8
  c->r[0]=R8(c->r[3]+0x00000000u); // 803D72AC
  c->r[0]=rotl(c->r[0],0)&0x00000020u; cr0(c,c->r[0]); // 803D72B0
  if (!crb(c,2)) { goto L_803D72E4; } // 803D72B4
  c->r[5]=rotl(c->r[4],0)&0x0000FFFEu; // 803D72B8
  c->r[3]=0u+0x807B0000u; // 803D72BC
  W16(c->r[29]+0x00000000u,c->r[5]); // 803D72C0
  c->r[3]=c->r[3]+0x00006798u; // 803D72C4
  c->r[0]=R8(c->r[3]+0x000027C0u); // 803D72C8
  cmpu(c,0,c->r[0],0x00000003u); // 803D72CC
  if (crb(c,0)) { goto L_803D72E4; } // 803D72D0
  c->r[3]=0u+0x000D0000u; // 803D72D4
  c->r[4]=c->r[30]+0x000000BCu; // 803D72D8
  c->r[3]=c->r[3]+0x00000002u; // 803D72DC
  c->lr=0x803D72E4u; f_803D04F8(c); // 803D72E0
L_803D72E4:;
  c->r[3]=R16(c->r[29]+0x00000000u); // 803D72E4
  c->r[0]=rotl(c->r[3],0)&0x00000002u; cr0(c,c->r[0]); // 803D72E8
  if (crb(c,2)) { goto L_803D732C; } // 803D72EC
  c->r[0]=R8(c->r[31]+0x00000000u); // 803D72F0
  c->r[0]=rotl(c->r[0],0)&0x00000040u; cr0(c,c->r[0]); // 803D72F4
  if (!crb(c,2)) { goto L_803D732C; } // 803D72F8
  c->r[5]=rotl(c->r[3],0)&0xFFFFFFFDu; // 803D72FC
  c->r[3]=0u+0x807B0000u; // 803D7300
  W16(c->r[29]+0x00000000u,c->r[5]); // 803D7304
  c->r[3]=c->r[3]+0x00006798u; // 803D7308
  c->r[0]=R8(c->r[3]+0x000027C0u); // 803D730C
  cmpu(c,0,c->r[0],0x00000003u); // 803D7310
  if (crb(c,0)) { goto L_803D732C; } // 803D7314
  c->r[3]=0u+0x000D0000u; // 803D7318
  c->r[4]=c->r[30]+0x000000F8u; // 803D731C
  c->r[3]=c->r[3]+0x00000002u; // 803D7320
  c->r[5]=rotl(c->r[5],0)&0x0000FFFFu; // 803D7324
  c->lr=0x803D732Cu; f_803D04F8(c); // 803D7328
L_803D732C:;
  c->r[3]=R16(c->r[29]+0x00000000u); // 803D732C
  c->r[0]=rotl(c->r[3],0)&0x00000004u; cr0(c,c->r[0]); // 803D7330
  if (crb(c,2)) { goto L_803D7374; } // 803D7334
  c->r[0]=R8(c->r[31]+0x00000000u); // 803D7338
  c->r[0]=rotl(c->r[0],0)&0x00000080u; cr0(c,c->r[0]); // 803D733C
  if (!crb(c,2)) { goto L_803D7374; } // 803D7340
  c->r[5]=rotl(c->r[3],0)&0xFFFFFFFBu; // 803D7344
  c->r[3]=0u+0x807B0000u; // 803D7348
  W16(c->r[29]+0x00000000u,c->r[5]); // 803D734C
  c->r[3]=c->r[3]+0x00006798u; // 803D7350
  c->r[0]=R8(c->r[3]+0x000027C0u); // 803D7354
  cmpu(c,0,c->r[0],0x00000003u); // 803D7358
  if (crb(c,0)) { goto L_803D7374; } // 803D735C
  c->r[3]=0u+0x000D0000u; // 803D7360
  c->r[4]=c->r[30]+0x00000130u; // 803D7364
  c->r[3]=c->r[3]+0x00000002u; // 803D7368
  c->r[5]=rotl(c->r[5],0)&0x0000FFFFu; // 803D736C
  c->lr=0x803D7374u; f_803D04F8(c); // 803D7370
L_803D7374:;
  c->r[3]=R16(c->r[29]+0x00000000u); // 803D7374
  c->r[0]=rotl(c->r[3],0)&0x00000008u; cr0(c,c->r[0]); // 803D7378
  if (crb(c,2)) { goto L_803D73BC; } // 803D737C
  c->r[0]=R8(c->r[31]+0x00000001u); // 803D7380
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 803D7384
  if (!crb(c,2)) { goto L_803D73BC; } // 803D7388
  c->r[5]=rotl(c->r[3],0)&0xFFFFFFF7u; // 803D738C
  c->r[3]=0u+0x807B0000u; // 803D7390
  W16(c->r[29]+0x00000000u,c->r[5]); // 803D7394
  c->r[3]=c->r[3]+0x00006798u; // 803D7398
  c->r[0]=R8(c->r[3]+0x000027C0u); // 803D739C
  cmpu(c,0,c->r[0],0x00000003u); // 803D73A0
  if (crb(c,0)) { goto L_803D73BC; } // 803D73A4
  c->r[3]=0u+0x000D0000u; // 803D73A8
  c->r[4]=c->r[30]+0x00000170u; // 803D73AC
  c->r[3]=c->r[3]+0x00000002u; // 803D73B0
  c->r[5]=rotl(c->r[5],0)&0x0000FFFFu; // 803D73B4
  c->lr=0x803D73BCu; f_803D04F8(c); // 803D73B8
L_803D73BC:;
  c->r[3]=0u+0x807B0000u; // 803D73BC
  c->r[30]=0u+0x00000000u; // 803D73C0
  c->r[3]=c->r[3]+0x00006798u; // 803D73C4
  c->r[31]=c->r[3]+0x00000034u; // 803D73C8
L_803D73CC:;
  c->r[0]=R8(c->r[31]+0x00000119u); // 803D73CC
  cmps(c,0,(int32_t)c->r[0],0); // 803D73D0
  if (crb(c,2)) { goto L_803D73F4; } // 803D73D4
  c->r[4]=c->r[28]|c->r[28]; // 803D73D8
  c->r[3]=c->r[31]+0x00000008u; // 803D73DC
  c->r[5]=0u+0x00000006u; // 803D73E0
  c->lr=0x803D73E8u; f_803AF7B8(c); // 803D73E4
  cmps(c,0,(int32_t)c->r[3],0); // 803D73E8
  if (!crb(c,2)) { goto L_803D73F4; } // 803D73EC
  goto L_803D7408; // 803D73F0
L_803D73F4:;
  c->r[30]=c->r[30]+0x00000001u; // 803D73F4
  c->r[31]=c->r[31]+0x0000011Cu; // 803D73F8
  cmpu(c,0,c->r[30],0x00000004u); // 803D73FC
  if (crb(c,0)) { IRQCHK(c); goto L_803D73CC; } // 803D7400
  c->r[31]=0u+0x00000000u; // 803D7404
L_803D7408:;
  cmps(c,0,(int32_t)c->r[31],0); // 803D7408
  if (crb(c,2)) { goto L_803D7430; } // 803D740C
  c->r[3]=R16(c->r[31]+0x00000000u); // 803D7410
  c->r[4]=R16(c->r[29]+0x00000000u); // 803D7414
  c->lr=0x803D741Cu; f_803E47A8(c); // 803D7418
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 803D741C
  c->r[3]=0u+0x00000003u; // 803D7420
  if (crb(c,2)) { goto L_803D7434; } // 803D7424
  c->r[3]=0u+0x00000001u; // 803D7428
  goto L_803D7434; // 803D742C
L_803D7430:;
  c->r[3]=0u+0x00000007u; // 803D7430
L_803D7434:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 803D7434
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 803D7438
  c->r[30]=R32(c->r[1]+0x00000018u); // 803D743C
  c->r[29]=R32(c->r[1]+0x00000014u); // 803D7440
  c->r[28]=R32(c->r[1]+0x00000010u); // 803D7444
  c->lr=c->r[0]; // 803D7448
  c->r[1]=c->r[1]+0x00000020u; // 803D744C
  return; // 803D7450
}

// BTM_SetDefaultLinkPolicy
void f_803D7454(Ctx* __restrict c) {
  trace_call(0x803D7454u);
  c->r[4]=0u+0x807B0000u; // 803D7454
  c->r[4]=c->r[4]+0x00006798u; // 803D7458
  W16(c->r[4]+0x000004C4u,c->r[3]); // 803D745C
  return; // 803D7460
}

// btm_read_link_policy_complete
void f_803D7464(Ctx* __restrict c) {
  trace_call(0x803D7464u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803D7464
  c->r[0]=c->lr; // 803D7468
  W32(c->r[1]+0x00000034u,c->r[0]); // 803D746C
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 803D7470
  c->r[31]=0u+0x807B0000u; // 803D7474
  c->r[31]=c->r[31]+0x00006798u; // 803D7478
  W32(c->r[1]+0x00000028u,c->r[30]); // 803D747C
  W32(c->r[1]+0x00000024u,c->r[29]); // 803D7480
  c->r[29]=c->r[31]+0x00000034u; // 803D7484
  W32(c->r[1]+0x00000020u,c->r[28]); // 803D7488
  c->r[28]=c->r[3]|c->r[3]; // 803D748C
  c->r[3]=c->r[31]+0x000005ACu; // 803D7490
  c->r[30]=R32(c->r[31]+0x000005C4u); // 803D7494
  c->lr=0x803D749Cu; f_803D0B1C(c); // 803D7498
  c->r[3]=0u+0x00000000u; // 803D749C
  cmps(c,0,(int32_t)c->r[30],0); // 803D74A0
  W32(c->r[31]+0x000005C4u,c->r[3]); // 803D74A4
  if (crb(c,2)) { goto L_803D7548; } // 803D74A8
  c->r[0]=R8(c->r[28]+0x00000000u); // 803D74AC
  cmps(c,0,(int32_t)c->r[0],0); // 803D74B0
  W8(c->r[1]+0x00000009u,c->r[0]); // 803D74B4
  if (!crb(c,2)) { goto L_803D7530; } // 803D74B8
  W8(c->r[1]+0x00000008u,c->r[3]); // 803D74BC
  c->r[0]=0u+0x00000004u; // 803D74C0
  c->r[7]=0u+0x00000000u; // 803D74C4
  c->r[4]=R8(c->r[28]+0x00000002u); // 803D74C8
  c->r[3]=R8(c->r[28]+0x00000004u); // 803D74CC
  c->r[5]=rotl(c->r[4],8)&0xFFFFFF00u; // 803D74D0
  c->r[6]=R8(c->r[28]+0x00000001u); // 803D74D4
  c->r[4]=R8(c->r[28]+0x00000003u); // 803D74D8
  c->r[3]=rotl(c->r[3],8)&0xFFFFFF00u; // 803D74DC
  c->r[5]=c->r[6]+c->r[5]; // 803D74E0
  c->r[3]=c->r[4]+c->r[3]; // 803D74E4
  W16(c->r[1]+0x00000010u,c->r[3]); // 803D74E8
  c->r[3]=rotl(c->r[5],0)&0x0000FFFFu; // 803D74EC
  c->ctr=c->r[0]; // 803D74F0
L_803D74F4:;
  c->r[0]=R8(c->r[29]+0x00000119u); // 803D74F4
  cmps(c,0,(int32_t)c->r[0],0); // 803D74F8
  if (crb(c,2)) { goto L_803D7520; } // 803D74FC
  c->r[0]=R16(c->r[29]+0x00000000u); // 803D7500
  cmpu(c,0,c->r[3],c->r[0]); // 803D7504
  if (!crb(c,2)) { goto L_803D7520; } // 803D7508
  c->r[3]=c->r[1]+0x0000000Au; // 803D750C
  c->r[4]=c->r[29]+0x00000008u; // 803D7510
  c->r[5]=0u+0x00000006u; // 803D7514
  c->lr=0x803D751Cu; f_802DC484(c); // 803D7518
  goto L_803D7538; // 803D751C
L_803D7520:;
  c->r[7]=c->r[7]+0x00000001u; // 803D7520
  c->r[29]=c->r[29]+0x0000011Cu; // 803D7524
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_803D74F4; } // 803D7528
  goto L_803D7538; // 803D752C
L_803D7530:;
  c->r[0]=0u+0x0000000Au; // 803D7530
  W8(c->r[1]+0x00000008u,c->r[0]); // 803D7534
L_803D7538:;
  c->r[12]=c->r[30]|c->r[30]; // 803D7538
  c->r[3]=c->r[1]+0x00000008u; // 803D753C
  c->ctr=c->r[12]; // 803D7540
  if (true) { c->lr=0x803D7548u; dispatch(c,c->ctr); } // 803D7544
L_803D7548:;
  c->r[0]=R32(c->r[1]+0x00000034u); // 803D7548
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 803D754C
  c->r[30]=R32(c->r[1]+0x00000028u); // 803D7550
  c->r[29]=R32(c->r[1]+0x00000024u); // 803D7554
  c->r[28]=R32(c->r[1]+0x00000020u); // 803D7558
  c->lr=c->r[0]; // 803D755C
  c->r[1]=c->r[1]+0x00000030u; // 803D7560
  return; // 803D7564
}

// btm_read_remote_version_complete
void f_803D7568(Ctx* __restrict c) {
  trace_call(0x803D7568u);
  c->r[0]=R8(c->r[3]+0x00000000u); // 803D7568
  c->r[4]=0u+0x807B0000u; // 803D756C
  c->r[4]=c->r[4]+0x00006798u; // 803D7570
  cmps(c,0,(int32_t)c->r[0],0); // 803D7574
  c->r[6]=c->r[4]+0x00000034u; // 803D7578
  if (!crb(c,2)) return; // 803D757C
  c->r[4]=R8(c->r[3]+0x00000002u); // 803D7580
  c->r[0]=0u+0x00000004u; // 803D7584
  c->r[5]=R8(c->r[3]+0x00000001u); // 803D7588
  c->r[4]=rotl(c->r[4],8)&0xFFFFFF00u; // 803D758C
  c->r[4]=c->r[5]+c->r[4]; // 803D7590
  c->r[4]=rotl(c->r[4],0)&0x0000FFFFu; // 803D7594
  c->ctr=c->r[0]; // 803D7598
L_803D759C:;
  c->r[0]=R8(c->r[6]+0x00000119u); // 803D759C
  cmps(c,0,(int32_t)c->r[0],0); // 803D75A0
  if (crb(c,2)) { goto L_803D75E8; } // 803D75A4
  c->r[0]=R16(c->r[6]+0x00000000u); // 803D75A8
  cmpu(c,0,c->r[0],c->r[4]); // 803D75AC
  if (!crb(c,2)) { goto L_803D75E8; } // 803D75B0
  c->r[0]=R8(c->r[3]+0x00000003u); // 803D75B4
  W8(c->r[6]+0x00000118u,c->r[0]); // 803D75B8
  c->r[0]=R8(c->r[3]+0x00000005u); // 803D75BC
  c->r[4]=R8(c->r[3]+0x00000004u); // 803D75C0
  c->r[0]=rotl(c->r[0],8)&0xFFFFFF00u; // 803D75C4
  c->r[0]=c->r[4]+c->r[0]; // 803D75C8
  W16(c->r[6]+0x0000010Au,c->r[0]); // 803D75CC
  c->r[0]=R8(c->r[3]+0x00000007u); // 803D75D0
  c->r[3]=R8(c->r[3]+0x00000006u); // 803D75D4
  c->r[0]=rotl(c->r[0],8)&0xFFFFFF00u; // 803D75D8
  c->r[0]=c->r[3]+c->r[0]; // 803D75DC
  W16(c->r[6]+0x0000010Cu,c->r[0]); // 803D75E0
  return; // 803D75E4
L_803D75E8:;
  c->r[6]=c->r[6]+0x0000011Cu; // 803D75E8
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_803D759C; } // 803D75EC
  return; // 803D75F0
}

// btm_read_remote_features_complete
void f_803D75F4(Ctx* __restrict c) {
  trace_call(0x803D75F4u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803D75F4
  c->r[0]=c->lr; // 803D75F8
  c->r[4]=0u+0x807B0000u; // 803D75FC
  W32(c->r[1]+0x00000024u,c->r[0]); // 803D7600
  c->r[4]=c->r[4]+0x00006798u; // 803D7604
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 803D7608
  c->r[31]=c->r[4]+0x00000034u; // 803D760C
  W32(c->r[1]+0x00000018u,c->r[30]); // 803D7610
  W32(c->r[1]+0x00000014u,c->r[29]); // 803D7614
  W32(c->r[1]+0x00000010u,c->r[28]); // 803D7618
  c->r[0]=R8(c->r[3]+0x00000000u); // 803D761C
  cmps(c,0,(int32_t)c->r[0],0); // 803D7620
  if (!crb(c,2)) { goto L_803D7800; } // 803D7624
  c->r[4]=R8(c->r[3]+0x00000002u); // 803D7628
  c->r[0]=0u+0x00000004u; // 803D762C
  c->r[5]=R8(c->r[3]+0x00000001u); // 803D7630
  c->r[4]=rotl(c->r[4],8)&0xFFFFFF00u; // 803D7634
  c->r[4]=c->r[5]+c->r[4]; // 803D7638
  c->r[4]=rotl(c->r[4],0)&0x0000FFFFu; // 803D763C
  c->ctr=c->r[0]; // 803D7640
L_803D7644:;
  c->r[0]=R8(c->r[31]+0x00000119u); // 803D7644
  cmps(c,0,(int32_t)c->r[0],0); // 803D7648
  if (crb(c,2)) { goto L_803D77F8; } // 803D764C
  c->r[0]=R16(c->r[31]+0x00000000u); // 803D7650
  cmpu(c,0,c->r[0],c->r[4]); // 803D7654
  if (!crb(c,2)) { goto L_803D77F8; } // 803D7658
  c->r[0]=R8(c->r[3]+0x00000003u); // 803D765C
  W8(c->r[31]+0x00000110u,c->r[0]); // 803D7660
  c->r[0]=R8(c->r[3]+0x00000004u); // 803D7664
  W8(c->r[31]+0x00000111u,c->r[0]); // 803D7668
  c->r[0]=R8(c->r[3]+0x00000005u); // 803D766C
  W8(c->r[31]+0x00000112u,c->r[0]); // 803D7670
  c->r[0]=R8(c->r[3]+0x00000006u); // 803D7674
  W8(c->r[31]+0x00000113u,c->r[0]); // 803D7678
  c->r[0]=R8(c->r[3]+0x00000007u); // 803D767C
  W8(c->r[31]+0x00000114u,c->r[0]); // 803D7680
  c->r[0]=R8(c->r[3]+0x00000008u); // 803D7684
  W8(c->r[31]+0x00000115u,c->r[0]); // 803D7688
  c->r[0]=R8(c->r[3]+0x00000009u); // 803D768C
  W8(c->r[31]+0x00000116u,c->r[0]); // 803D7690
  c->r[0]=R8(c->r[3]+0x0000000Au); // 803D7694
  c->r[3]=c->r[4]|c->r[4]; // 803D7698
  W8(c->r[31]+0x00000117u,c->r[0]); // 803D769C
  c->lr=0x803D76A4u; f_803D8B34(c); // 803D76A0
  cmps(c,0,(int32_t)c->r[3],0); // 803D76A4
  if (crb(c,2)) { goto L_803D76BC; } // 803D76A8
  c->r[4]=c->r[31]+0x00000110u; // 803D76AC
  c->r[5]=0u+0x00000008u; // 803D76B0
  c->r[3]=c->r[3]+0x00000077u; // 803D76B4
  c->lr=0x803D76BCu; f_802DC484(c); // 803D76B8
L_803D76BC:;
  c->r[3]=0u+0x807B0000u; // 803D76BC
  c->r[0]=0u+0xFFFFCCF9u; // 803D76C0
  c->r[3]=c->r[3]+0x00006798u; // 803D76C4
  c->r[5]=R16(c->r[3]+0x00000654u); // 803D76C8
  c->r[3]=R8(c->r[3]+0x00000636u); // 803D76CC
  c->r[4]=c->r[5]&0x0000CC18u; cr0(c,c->r[4]); // 803D76D0
  cmpu(c,0,c->r[3],0x00000003u); // 803D76D4
  c->r[30]=c->r[4]&c->r[0]; // 803D76D8
  if (crb(c,0)) { goto L_803D76EC; } // 803D76DC
  c->r[0]=c->r[5]&0x00003306u; cr0(c,c->r[0]); // 803D76E0
  c->r[0]=c->r[4]|c->r[0]; // 803D76E4
  c->r[30]=rotl(c->r[0],0)&0x0000FFFFu; // 803D76E8
L_803D76EC:;
  c->r[3]=0u+0x807B0000u; // 803D76EC
  c->r[3]=c->r[3]+0x00006798u; // 803D76F0
  c->r[0]=R8(c->r[3]+0x000027C0u); // 803D76F4
  cmpu(c,0,c->r[0],0x00000004u); // 803D76F8
  if (crb(c,0)) { goto L_803D7718; } // 803D76FC
  c->r[3]=0u+0x000D0000u; // 803D7700
  c->r[4]=0u+0x80710000u; // 803D7704
  c->r[3]=c->r[3]+0x00000003u; // 803D7708
  c->r[5]=rotl(c->r[30],0)&0x0000FFFFu; // 803D770C
  c->r[4]=c->r[4]+0xFFFFB778u; // 803D7710
  c->lr=0x803D7718u; f_803D04F8(c); // 803D7714
L_803D7718:;
  c->r[3]=R16(c->r[31]+0x00000000u); // 803D7718
  c->r[4]=rotl(c->r[30],0)&0x0000FFFFu; // 803D771C
  c->lr=0x803D7724u; f_803E3CF4(c); // 803D7720
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 803D7724
  if (crb(c,2)) { goto L_803D7730; } // 803D7728
  W16(c->r[31]+0x00000002u,c->r[30]); // 803D772C
L_803D7730:;
  c->r[4]=0u+0x807B0000u; // 803D7730
  c->r[4]=c->r[4]+0x00006798u; // 803D7734
  c->r[0]=R16(c->r[4]+0x000004C4u); // 803D7738
  cmps(c,0,(int32_t)c->r[0],0); // 803D773C
  if (crb(c,2)) { goto L_803D7750; } // 803D7740
  c->r[3]=c->r[31]+0x00000008u; // 803D7744
  c->r[4]=c->r[4]+0x000004C4u; // 803D7748
  c->lr=0x803D7750u; f_803D7264(c); // 803D774C
L_803D7750:;
  c->r[3]=0u+0x807B0000u; // 803D7750
  c->r[30]=0u+0x00000000u; // 803D7754
  c->r[3]=c->r[3]+0x00006798u; // 803D7758
  c->r[28]=R16(c->r[3]+0x000004C6u); // 803D775C
  c->r[29]=c->r[3]+0x00000034u; // 803D7760
L_803D7764:;
  c->r[0]=R8(c->r[29]+0x00000119u); // 803D7764
  cmps(c,0,(int32_t)c->r[0],0); // 803D7768
  if (crb(c,2)) { goto L_803D778C; } // 803D776C
  c->r[3]=c->r[29]+0x00000008u; // 803D7770
  c->r[4]=c->r[31]+0x00000008u; // 803D7774
  c->r[5]=0u+0x00000006u; // 803D7778
  c->lr=0x803D7780u; f_803AF7B8(c); // 803D777C
  cmps(c,0,(int32_t)c->r[3],0); // 803D7780
  if (!crb(c,2)) { goto L_803D778C; } // 803D7784
  goto L_803D77A0; // 803D7788
L_803D778C:;
  c->r[30]=c->r[30]+0x00000001u; // 803D778C
  c->r[29]=c->r[29]+0x0000011Cu; // 803D7790
  cmpu(c,0,c->r[30],0x00000004u); // 803D7794
  if (crb(c,0)) { IRQCHK(c); goto L_803D7764; } // 803D7798
  c->r[29]=0u+0x00000000u; // 803D779C
L_803D77A0:;
  cmps(c,0,(int32_t)c->r[29],0); // 803D77A0
  if (crb(c,2)) { goto L_803D77C4; } // 803D77A4
  W16(c->r[29]+0x0000010Eu,c->r[28]); // 803D77A8
  c->r[0]=R8(c->r[29]+0x0000011Au); // 803D77AC
  cmps(c,0,(int32_t)c->r[0],0); // 803D77B0
  if (!crb(c,2)) { goto L_803D77C4; } // 803D77B4
  c->r[3]=R16(c->r[29]+0x00000000u); // 803D77B8
  c->r[4]=c->r[28]|c->r[28]; // 803D77BC
  c->lr=0x803D77C4u; f_803E51F4(c); // 803D77C0
L_803D77C4:;
  c->r[3]=0u+0x807B0000u; // 803D77C4
  c->r[3]=c->r[3]+0x00006798u; // 803D77C8
  c->r[12]=R32(c->r[3]+0x000004C8u); // 803D77CC
  cmps(c,0,(int32_t)c->r[12],0); // 803D77D0
  if (crb(c,2)) { goto L_803D7800; } // 803D77D4
  c->r[3]=c->r[31]+0x00000008u; // 803D77D8
  c->r[4]=c->r[31]+0x0000000Eu; // 803D77DC
  c->r[5]=c->r[31]+0x00000011u; // 803D77E0
  c->r[6]=c->r[31]+0x00000110u; // 803D77E4
  c->r[7]=0u+0x00000001u; // 803D77E8
  c->ctr=c->r[12]; // 803D77EC
  if (true) { c->lr=0x803D77F4u; dispatch(c,c->ctr); } // 803D77F0
  goto L_803D7800; // 803D77F4
L_803D77F8:;
  c->r[31]=c->r[31]+0x0000011Cu; // 803D77F8
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_803D7644; } // 803D77FC
L_803D7800:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 803D7800
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 803D7804
  c->r[30]=R32(c->r[1]+0x00000018u); // 803D7808
  c->r[29]=R32(c->r[1]+0x00000014u); // 803D780C
  c->r[28]=R32(c->r[1]+0x00000010u); // 803D7810
  c->lr=c->r[0]; // 803D7814
  c->r[1]=c->r[1]+0x00000020u; // 803D7818
  return; // 803D781C
}

// BTM_SetDefaultLinkSuperTout
void f_803D7820(Ctx* __restrict c) {
  trace_call(0x803D7820u);
  c->r[4]=0u+0x807B0000u; // 803D7820
  c->r[4]=c->r[4]+0x00006798u; // 803D7824
  W16(c->r[4]+0x000004C6u,c->r[3]); // 803D7828
  return; // 803D782C
}

// BTM_IsAclConnectionUp
void f_803D7830(Ctx* __restrict c) {
  trace_call(0x803D7830u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803D7830
  c->r[0]=c->lr; // 803D7834
  c->r[4]=0u+0x807B0000u; // 803D7838
  W32(c->r[1]+0x00000024u,c->r[0]); // 803D783C
  c->r[4]=c->r[4]+0x00006798u; // 803D7840
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 803D7844
  W32(c->r[1]+0x00000018u,c->r[30]); // 803D7848
  W32(c->r[1]+0x00000014u,c->r[29]); // 803D784C
  c->r[29]=c->r[3]|c->r[3]; // 803D7850
  c->r[0]=R8(c->r[4]+0x000027C0u); // 803D7854
  cmpu(c,0,c->r[0],0x00000003u); // 803D7858
  if (crb(c,0)) { goto L_803D788C; } // 803D785C
  c->r[3]=0u+0x000D0000u; // 803D7860
  c->r[4]=0u+0x80710000u; // 803D7864
  c->r[5]=R8(c->r[29]+0x00000000u); // 803D7868
  c->r[3]=c->r[3]+0x00000002u; // 803D786C
  c->r[6]=R8(c->r[29]+0x00000001u); // 803D7870
  c->r[4]=c->r[4]+0xFFFFB918u; // 803D7874
  c->r[7]=R8(c->r[29]+0x00000002u); // 803D7878
  c->r[8]=R8(c->r[29]+0x00000003u); // 803D787C
  c->r[9]=R8(c->r[29]+0x00000004u); // 803D7880
  c->r[10]=R8(c->r[29]+0x00000005u); // 803D7884
  c->lr=0x803D788Cu; f_803D0570(c); // 803D7888
L_803D788C:;
  c->r[3]=0u+0x807B0000u; // 803D788C
  c->r[31]=0u+0x00000000u; // 803D7890
  c->r[3]=c->r[3]+0x00006798u; // 803D7894
  c->r[30]=c->r[3]+0x00000034u; // 803D7898
L_803D789C:;
  c->r[0]=R8(c->r[30]+0x00000119u); // 803D789C
  cmps(c,0,(int32_t)c->r[0],0); // 803D78A0
  if (crb(c,2)) { goto L_803D78C4; } // 803D78A4
  c->r[4]=c->r[29]|c->r[29]; // 803D78A8
  c->r[3]=c->r[30]+0x00000008u; // 803D78AC
  c->r[5]=0u+0x00000006u; // 803D78B0
  c->lr=0x803D78B8u; f_803AF7B8(c); // 803D78B4
  cmps(c,0,(int32_t)c->r[3],0); // 803D78B8
  if (!crb(c,2)) { goto L_803D78C4; } // 803D78BC
  goto L_803D78D8; // 803D78C0
L_803D78C4:;
  c->r[31]=c->r[31]+0x00000001u; // 803D78C4
  c->r[30]=c->r[30]+0x0000011Cu; // 803D78C8
  cmpu(c,0,c->r[31],0x00000004u); // 803D78CC
  if (crb(c,0)) { IRQCHK(c); goto L_803D789C; } // 803D78D0
  c->r[30]=0u+0x00000000u; // 803D78D4
L_803D78D8:;
  cmps(c,0,(int32_t)c->r[30],0); // 803D78D8
  if (crb(c,2)) { goto L_803D78E8; } // 803D78DC
  c->r[3]=0u+0x00000001u; // 803D78E0
  goto L_803D78EC; // 803D78E4
L_803D78E8:;
  c->r[3]=0u+0x00000000u; // 803D78E8
L_803D78EC:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 803D78EC
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 803D78F0
  c->r[30]=R32(c->r[1]+0x00000018u); // 803D78F4
  c->r[29]=R32(c->r[1]+0x00000014u); // 803D78F8
  c->lr=c->r[0]; // 803D78FC
  c->r[1]=c->r[1]+0x00000020u; // 803D7900
  return; // 803D7904
}

// BTM_GetNumAclLinks
void f_803D7908(Ctx* __restrict c) {
  trace_call(0x803D7908u);
  c->r[4]=0u+0x807B0000u; // 803D7908
  c->r[3]=0u+0x00000000u; // 803D790C
  c->r[4]=c->r[4]+0x00006798u; // 803D7910
  c->r[0]=R8(c->r[4]+0x0000014Du); // 803D7914
  cmps(c,0,(int32_t)c->r[0],0); // 803D7918
  if (crb(c,2)) { goto L_803D7924; } // 803D791C
  c->r[3]=0u+0x00000001u; // 803D7920
L_803D7924:;
  c->r[0]=R8(c->r[4]+0x00000269u); // 803D7924
  cmps(c,0,(int32_t)c->r[0],0); // 803D7928
  if (crb(c,2)) { goto L_803D7938; } // 803D792C
  c->r[0]=c->r[3]+0x00000001u; // 803D7930
  c->r[3]=rotl(c->r[0],0)&0x0000FFFFu; // 803D7934
L_803D7938:;
  c->r[0]=R8(c->r[4]+0x00000385u); // 803D7938
  cmps(c,0,(int32_t)c->r[0],0); // 803D793C
  if (crb(c,2)) { goto L_803D794C; } // 803D7940
  c->r[0]=c->r[3]+0x00000001u; // 803D7944
  c->r[3]=rotl(c->r[0],0)&0x0000FFFFu; // 803D7948
L_803D794C:;
  c->r[0]=R8(c->r[4]+0x000004A1u); // 803D794C
  cmps(c,0,(int32_t)c->r[0],0); // 803D7950
  if (crb(c,2)) return; // 803D7954
  c->r[0]=c->r[3]+0x00000001u; // 803D7958
  c->r[3]=rotl(c->r[0],0)&0x0000FFFFu; // 803D795C
  return; // 803D7960
}

// btm_get_acl_disc_reason_code
void f_803D7964(Ctx* __restrict c) {
  trace_call(0x803D7964u);
  c->r[3]=0u+0x807B0000u; // 803D7964
  c->r[3]=c->r[3]+0x00006798u; // 803D7968
  c->r[3]=R8(c->r[3]+0x000027BFu); // 803D796C
  return; // 803D7970
}

// BTM_GetHCIConnHandle
void f_803D7974(Ctx* __restrict c) {
  trace_call(0x803D7974u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803D7974
  c->r[0]=c->lr; // 803D7978
  c->r[4]=0u+0x807B0000u; // 803D797C
  W32(c->r[1]+0x00000024u,c->r[0]); // 803D7980
  c->r[4]=c->r[4]+0x00006798u; // 803D7984
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 803D7988
  c->r[31]=0u+0x00000000u; // 803D798C
  W32(c->r[1]+0x00000018u,c->r[30]); // 803D7990
  c->r[30]=c->r[4]+0x00000034u; // 803D7994
  W32(c->r[1]+0x00000014u,c->r[29]); // 803D7998
  c->r[29]=c->r[3]|c->r[3]; // 803D799C
L_803D79A0:;
  c->r[0]=R8(c->r[30]+0x00000119u); // 803D79A0
  cmps(c,0,(int32_t)c->r[0],0); // 803D79A4
  if (crb(c,2)) { goto L_803D79C8; } // 803D79A8
  c->r[4]=c->r[29]|c->r[29]; // 803D79AC
  c->r[3]=c->r[30]+0x00000008u; // 803D79B0
  c->r[5]=0u+0x00000006u; // 803D79B4
  c->lr=0x803D79BCu; f_803AF7B8(c); // 803D79B8
  cmps(c,0,(int32_t)c->r[3],0); // 803D79BC
  if (!crb(c,2)) { goto L_803D79C8; } // 803D79C0
  goto L_803D79DC; // 803D79C4
L_803D79C8:;
  c->r[31]=c->r[31]+0x00000001u; // 803D79C8
  c->r[30]=c->r[30]+0x0000011Cu; // 803D79CC
  cmpu(c,0,c->r[31],0x00000004u); // 803D79D0
  if (crb(c,0)) { IRQCHK(c); goto L_803D79A0; } // 803D79D4
  c->r[30]=0u+0x00000000u; // 803D79D8
L_803D79DC:;
  cmps(c,0,(int32_t)c->r[30],0); // 803D79DC
  if (crb(c,2)) { goto L_803D79EC; } // 803D79E0
  c->r[3]=R16(c->r[30]+0x00000000u); // 803D79E4
  goto L_803D79F4; // 803D79E8
L_803D79EC:;
  c->r[3]=0u+0x00010000u; // 803D79EC
  c->r[3]=c->r[3]+0xFFFFFFFFu; // 803D79F0
L_803D79F4:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 803D79F4
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 803D79F8
  c->r[30]=R32(c->r[1]+0x00000018u); // 803D79FC
  c->r[29]=R32(c->r[1]+0x00000014u); // 803D7A00
  c->lr=c->r[0]; // 803D7A04
  c->r[1]=c->r[1]+0x00000020u; // 803D7A08
  return; // 803D7A0C
}

// btm_process_clk_off_comp_evt
void f_803D7A10(Ctx* __restrict c) {
  trace_call(0x803D7A10u);
  c->r[5]=0u+0x807B0000u; // 803D7A10
  c->r[6]=0u+0x00000000u; // 803D7A14
  c->r[5]=c->r[5]+0x00006798u; // 803D7A18
  c->r[0]=R8(c->r[5]+0x0000014Du); // 803D7A1C
  cmps(c,0,(int32_t)c->r[0],0); // 803D7A20
  if (crb(c,2)) { goto L_803D7A34; } // 803D7A24
  c->r[0]=R16(c->r[5]+0x00000034u); // 803D7A28
  cmpu(c,0,c->r[0],c->r[3]); // 803D7A2C
  if (crb(c,2)) { goto L_803D7A8C; } // 803D7A30
L_803D7A34:;
  c->r[0]=R8(c->r[5]+0x00000269u); // 803D7A34
  c->r[6]=0u+0x00000001u; // 803D7A38
  cmps(c,0,(int32_t)c->r[0],0); // 803D7A3C
  if (crb(c,2)) { goto L_803D7A50; } // 803D7A40
  c->r[0]=R16(c->r[5]+0x00000150u); // 803D7A44
  cmpu(c,0,c->r[0],c->r[3]); // 803D7A48
  if (crb(c,2)) { goto L_803D7A8C; } // 803D7A4C
L_803D7A50:;
  c->r[0]=R8(c->r[5]+0x00000385u); // 803D7A50
  c->r[6]=0u+0x00000002u; // 803D7A54
  cmps(c,0,(int32_t)c->r[0],0); // 803D7A58
  if (crb(c,2)) { goto L_803D7A6C; } // 803D7A5C
  c->r[0]=R16(c->r[5]+0x0000026Cu); // 803D7A60
  cmpu(c,0,c->r[0],c->r[3]); // 803D7A64
  if (crb(c,2)) { goto L_803D7A8C; } // 803D7A68
L_803D7A6C:;
  c->r[0]=R8(c->r[5]+0x000004A1u); // 803D7A6C
  c->r[6]=0u+0x00000003u; // 803D7A70
  cmps(c,0,(int32_t)c->r[0],0); // 803D7A74
  if (crb(c,2)) { goto L_803D7A88; } // 803D7A78
  c->r[0]=R16(c->r[5]+0x00000388u); // 803D7A7C
  cmpu(c,0,c->r[0],c->r[3]); // 803D7A80
  if (crb(c,2)) { goto L_803D7A8C; } // 803D7A84
L_803D7A88:;
  c->r[6]=0u+0x00000004u; // 803D7A88
L_803D7A8C:;
  cmpu(c,0,c->r[6],0x00000004u); // 803D7A8C
  if (!crb(c,0)) return; // 803D7A90
  c->r[0]=(uint32_t)((int32_t)c->r[6]*(int32_t)284); // 803D7A94
  c->r[3]=0u+0x807B0000u; // 803D7A98
  c->r[3]=c->r[3]+0x00006798u; // 803D7A9C
  c->r[3]=c->r[3]+c->r[0]; // 803D7AA0
  W16(c->r[3]+0x0000003Au,c->r[4]); // 803D7AA4
  return; // 803D7AA8
}

// btm_acl_role_changed
void f_803D7AAC(Ctx* __restrict c) {
  trace_call(0x803D7AACu);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803D7AAC
  c->r[0]=c->lr; // 803D7AB0
  W32(c->r[1]+0x00000034u,c->r[0]); // 803D7AB4
  c->r[11]=c->r[1]+0x00000030u; // 803D7AB8
  c->lr=0x803D7AC0u; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 803D7ABC
  cmps(c,0,(int32_t)c->r[4],0); // 803D7AC0
  c->r[25]=c->r[3]|c->r[3]; // 803D7AC4
  c->r[26]=c->r[4]|c->r[4]; // 803D7AC8
  c->r[28]=c->r[5]|c->r[5]; // 803D7ACC
  if (crb(c,2)) { goto L_803D7ADC; } // 803D7AD0
  c->r[27]=c->r[26]|c->r[26]; // 803D7AD4
  goto L_803D7AE8; // 803D7AD8
L_803D7ADC:;
  c->r[3]=0u+0x807B0000u; // 803D7ADC
  c->r[3]=c->r[3]+0x00006798u; // 803D7AE0
  c->r[27]=c->r[3]+0x000027B4u; // 803D7AE4
L_803D7AE8:;
  c->r[3]=0u+0x807B0000u; // 803D7AE8
  c->r[30]=0u+0x00000000u; // 803D7AEC
  c->r[3]=c->r[3]+0x00006798u; // 803D7AF0
  c->r[29]=c->r[3]+0x00000034u; // 803D7AF4
L_803D7AF8:;
  c->r[0]=R8(c->r[29]+0x00000119u); // 803D7AF8
  cmps(c,0,(int32_t)c->r[0],0); // 803D7AFC
  if (crb(c,2)) { goto L_803D7B20; } // 803D7B00
  c->r[4]=c->r[27]|c->r[27]; // 803D7B04
  c->r[3]=c->r[29]+0x00000008u; // 803D7B08
  c->r[5]=0u+0x00000006u; // 803D7B0C
  c->lr=0x803D7B14u; f_803AF7B8(c); // 803D7B10
  cmps(c,0,(int32_t)c->r[3],0); // 803D7B14
  if (!crb(c,2)) { goto L_803D7B20; } // 803D7B18
  goto L_803D7B34; // 803D7B1C
L_803D7B20:;
  c->r[30]=c->r[30]+0x00000001u; // 803D7B20
  c->r[29]=c->r[29]+0x0000011Cu; // 803D7B24
  cmpu(c,0,c->r[30],0x00000004u); // 803D7B28
  if (crb(c,0)) { IRQCHK(c); goto L_803D7AF8; } // 803D7B2C
  c->r[29]=0u+0x00000000u; // 803D7B30
L_803D7B34:;
  c->r[3]=0u+0x807B0000u; // 803D7B34
  cmps(c,0,(int32_t)c->r[29],0); // 803D7B38
  c->r[3]=c->r[3]+0x00006798u; // 803D7B3C
  c->r[31]=c->r[3]+0x00000624u; // 803D7B40
  if (crb(c,2)) { goto L_803D7C88; } // 803D7B44
  cmps(c,0,(int32_t)c->r[25],0); // 803D7B48
  W8(c->r[31]+0x00000000u,c->r[25]); // 803D7B4C
  if (!crb(c,2)) { goto L_803D7B6C; } // 803D7B50
  W8(c->r[31]+0x00000001u,c->r[28]); // 803D7B54
  c->r[4]=c->r[27]|c->r[27]; // 803D7B58
  c->r[3]=c->r[31]+0x00000002u; // 803D7B5C
  c->r[5]=0u+0x00000006u; // 803D7B60
  c->lr=0x803D7B68u; f_802DC484(c); // 803D7B64
  W8(c->r[29]+0x0000011Au,c->r[28]); // 803D7B68
L_803D7B6C:;
  cmps(c,0,(int32_t)c->r[26],0); // 803D7B6C
  if (crb(c,2)) { goto L_803D7BE8; } // 803D7B70
  c->r[3]=0u+0x807B0000u; // 803D7B74
  c->r[30]=R16(c->r[29]+0x0000010Eu); // 803D7B78
  c->r[3]=c->r[3]+0x00006798u; // 803D7B7C
  c->r[28]=0u+0x00000000u; // 803D7B80
  c->r[27]=c->r[3]+0x00000034u; // 803D7B84
L_803D7B88:;
  c->r[0]=R8(c->r[27]+0x00000119u); // 803D7B88
  cmps(c,0,(int32_t)c->r[0],0); // 803D7B8C
  if (crb(c,2)) { goto L_803D7BB0; } // 803D7B90
  c->r[3]=c->r[27]+0x00000008u; // 803D7B94
  c->r[4]=c->r[29]+0x00000008u; // 803D7B98
  c->r[5]=0u+0x00000006u; // 803D7B9C
  c->lr=0x803D7BA4u; f_803AF7B8(c); // 803D7BA0
  cmps(c,0,(int32_t)c->r[3],0); // 803D7BA4
  if (!crb(c,2)) { goto L_803D7BB0; } // 803D7BA8
  goto L_803D7BC4; // 803D7BAC
L_803D7BB0:;
  c->r[28]=c->r[28]+0x00000001u; // 803D7BB0
  c->r[27]=c->r[27]+0x0000011Cu; // 803D7BB4
  cmpu(c,0,c->r[28],0x00000004u); // 803D7BB8
  if (crb(c,0)) { IRQCHK(c); goto L_803D7B88; } // 803D7BBC
  c->r[27]=0u+0x00000000u; // 803D7BC0
L_803D7BC4:;
  cmps(c,0,(int32_t)c->r[27],0); // 803D7BC4
  if (crb(c,2)) { goto L_803D7BE8; } // 803D7BC8
  W16(c->r[27]+0x0000010Eu,c->r[30]); // 803D7BCC
  c->r[0]=R8(c->r[27]+0x0000011Au); // 803D7BD0
  cmps(c,0,(int32_t)c->r[0],0); // 803D7BD4
  if (!crb(c,2)) { goto L_803D7BE8; } // 803D7BD8
  c->r[3]=R16(c->r[27]+0x00000000u); // 803D7BDC
  c->r[4]=c->r[30]|c->r[30]; // 803D7BE0
  c->lr=0x803D7BE8u; f_803E51F4(c); // 803D7BE4
L_803D7BE8:;
  c->r[0]=R8(c->r[29]+0x0000011Bu); // 803D7BE8
  cmpu(c,0,c->r[0],0x00000003u); // 803D7BEC
  if (!crb(c,2)) { goto L_803D7C14; } // 803D7BF0
  c->r[3]=R16(c->r[29]+0x00000000u); // 803D7BF4
  c->r[4]=0u+0x00000001u; // 803D7BF8
  c->lr=0x803D7C00u; f_803E3E00(c); // 803D7BFC
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 803D7C00
  if (crb(c,2)) { goto L_803D7C14; } // 803D7C04
  c->r[0]=0u+0x00000004u; // 803D7C08
  W8(c->r[29]+0x0000011Bu,c->r[0]); // 803D7C0C
  goto L_803D7C88; // 803D7C10
L_803D7C14:;
  cmps(c,0,(int32_t)c->r[29],0); // 803D7C14
  if (crb(c,2)) { goto L_803D7C30; } // 803D7C18
  c->r[0]=R8(c->r[29]+0x0000011Bu); // 803D7C1C
  cmpu(c,0,c->r[0],0x00000005u); // 803D7C20
  if (!crb(c,2)) { goto L_803D7C30; } // 803D7C24
  c->r[0]=0u+0x00000000u; // 803D7C28
  W8(c->r[29]+0x0000011Bu,c->r[0]); // 803D7C2C
L_803D7C30:;
  c->r[30]=0u+0x807B0000u; // 803D7C30
  c->r[30]=c->r[30]+0x00006798u; // 803D7C34
  c->r[12]=R32(c->r[30]+0x0000062Cu); // 803D7C38
  cmps(c,0,(int32_t)c->r[12],0); // 803D7C3C
  if (crb(c,2)) { goto L_803D7C58; } // 803D7C40
  c->r[3]=c->r[31]|c->r[31]; // 803D7C44
  c->ctr=c->r[12]; // 803D7C48
  if (true) { c->lr=0x803D7C50u; dispatch(c,c->ctr); } // 803D7C4C
  c->r[0]=0u+0x00000000u; // 803D7C50
  W32(c->r[30]+0x0000062Cu,c->r[0]); // 803D7C54
L_803D7C58:;
  c->r[3]=0u+0x807B0000u; // 803D7C58
  c->r[3]=c->r[3]+0x00006798u; // 803D7C5C
  c->r[0]=R8(c->r[3]+0x000027C0u); // 803D7C60
  cmpu(c,0,c->r[0],0x00000004u); // 803D7C64
  if (crb(c,0)) { goto L_803D7C88; } // 803D7C68
  c->r[3]=0u+0x000D0000u; // 803D7C6C
  c->r[4]=0u+0x80710000u; // 803D7C70
  c->r[5]=R8(c->r[31]+0x00000001u); // 803D7C74
  c->r[3]=c->r[3]+0x00000003u; // 803D7C78
  c->r[6]=R8(c->r[31]+0x00000000u); // 803D7C7C
  c->r[4]=c->r[4]+0xFFFFB954u; // 803D7C80
  c->lr=0x803D7C88u; f_803D0510(c); // 803D7C84
L_803D7C88:;
  c->r[11]=c->r[1]+0x00000030u; // 803D7C88
  c->lr=0x803D7C90u; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 803D7C8C
  c->r[0]=R32(c->r[1]+0x00000034u); // 803D7C90
  c->lr=c->r[0]; // 803D7C94
  c->r[1]=c->r[1]+0x00000030u; // 803D7C98
  return; // 803D7C9C
}

// btm_acl_timeout
void f_803D7CA0(Ctx* __restrict c) {
  trace_call(0x803D7CA0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803D7CA0
  c->r[0]=c->lr; // 803D7CA4
  W32(c->r[1]+0x00000024u,c->r[0]); // 803D7CA8
  c->r[0]=R32(c->r[3]+0x00000010u); // 803D7CAC
  cmpu(c,0,c->r[0],0x00000004u); // 803D7CB0
  if (!crb(c,2)) { goto L_803D7CEC; } // 803D7CB4
  c->r[4]=0u+0x807B0000u; // 803D7CB8
  c->r[3]=0u+0x0000000Au; // 803D7CBC
  c->r[4]=c->r[4]+0x00006798u; // 803D7CC0
  c->r[0]=0u+0x00000000u; // 803D7CC4
  c->r[12]=R32(c->r[4]+0x000005C4u); // 803D7CC8
  W8(c->r[1]+0x00000008u,c->r[3]); // 803D7CCC
  cmps(c,0,(int32_t)c->r[12],0); // 803D7CD0
  W16(c->r[1]+0x00000010u,c->r[0]); // 803D7CD4
  W32(c->r[4]+0x000005C4u,c->r[0]); // 803D7CD8
  if (crb(c,2)) { goto L_803D7CEC; } // 803D7CDC
  c->r[3]=c->r[1]+0x00000008u; // 803D7CE0
  c->ctr=c->r[12]; // 803D7CE4
  if (true) { c->lr=0x803D7CECu; dispatch(c,c->ctr); } // 803D7CE8
L_803D7CEC:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 803D7CEC
  c->lr=c->r[0]; // 803D7CF0
  c->r[1]=c->r[1]+0x00000020u; // 803D7CF4
  return; // 803D7CF8
}

// btm_get_max_packet_size
void f_803D7CFC(Ctx* __restrict c) {
  trace_call(0x803D7CFCu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803D7CFC
  c->r[0]=c->lr; // 803D7D00
  W32(c->r[1]+0x00000024u,c->r[0]); // 803D7D04
  c->r[11]=c->r[1]+0x00000020u; // 803D7D08
  c->lr=0x803D7D10u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 803D7D0C
  c->r[4]=0u+0x807B0000u; // 803D7D10
  c->r[27]=c->r[3]|c->r[3]; // 803D7D14
  c->r[4]=c->r[4]+0x00006798u; // 803D7D18
  c->r[30]=0u+0x00000000u; // 803D7D1C
  c->r[29]=c->r[4]+0x00000034u; // 803D7D20
L_803D7D24:;
  c->r[0]=R8(c->r[29]+0x00000119u); // 803D7D24
  cmps(c,0,(int32_t)c->r[0],0); // 803D7D28
  if (crb(c,2)) { goto L_803D7D4C; } // 803D7D2C
  c->r[4]=c->r[27]|c->r[27]; // 803D7D30
  c->r[3]=c->r[29]+0x00000008u; // 803D7D34
  c->r[5]=0u+0x00000006u; // 803D7D38
  c->lr=0x803D7D40u; f_803AF7B8(c); // 803D7D3C
  cmps(c,0,(int32_t)c->r[3],0); // 803D7D40
  if (!crb(c,2)) { goto L_803D7D4C; } // 803D7D44
  goto L_803D7D60; // 803D7D48
L_803D7D4C:;
  c->r[30]=c->r[30]+0x00000001u; // 803D7D4C
  c->r[29]=c->r[29]+0x0000011Cu; // 803D7D50
  cmpu(c,0,c->r[30],0x00000004u); // 803D7D54
  if (crb(c,0)) { IRQCHK(c); goto L_803D7D24; } // 803D7D58
  c->r[29]=0u+0x00000000u; // 803D7D5C
L_803D7D60:;
  cmps(c,0,(int32_t)c->r[29],0); // 803D7D60
  c->r[28]=0u+0x00000000u; // 803D7D64
  c->r[31]=0u+0x00000000u; // 803D7D68
  if (crb(c,2)) { goto L_803D7D78; } // 803D7D6C
  c->r[28]=R16(c->r[29]+0x00000002u); // 803D7D70
  goto L_803D7D9C; // 803D7D74
L_803D7D78:;
  c->r[30]=0u+0x807B0000u; // 803D7D78
  c->r[4]=c->r[27]|c->r[27]; // 803D7D7C
  c->r[30]=c->r[30]+0x00006798u; // 803D7D80
  c->r[5]=0u+0x00000006u; // 803D7D84
  c->r[3]=c->r[30]+0x00000630u; // 803D7D88
  c->lr=0x803D7D90u; f_803AF7B8(c); // 803D7D8C
  cmps(c,0,(int32_t)c->r[3],0); // 803D7D90
  if (!crb(c,2)) { goto L_803D7D9C; } // 803D7D94
  c->r[28]=R16(c->r[30]+0x00000654u); // 803D7D98
L_803D7D9C:;
  cmps(c,0,(int32_t)c->r[28],0); // 803D7D9C
  if (crb(c,2)) { goto L_803D7E60; } // 803D7DA0
  c->r[0]=rotl(c->r[28],0)&0x00002000u; cr0(c,c->r[0]); // 803D7DA4
  if (!crb(c,2)) { goto L_803D7DB4; } // 803D7DA8
  c->r[31]=0u+0x000003FDu; // 803D7DAC
  goto L_803D7E60; // 803D7DB0
L_803D7DB4:;
  c->r[0]=rotl(c->r[28],0)&0x00001000u; cr0(c,c->r[0]); // 803D7DB4
  if (!crb(c,2)) { goto L_803D7DC4; } // 803D7DB8
  c->r[31]=0u+0x000002A7u; // 803D7DBC
  goto L_803D7E60; // 803D7DC0
L_803D7DC4:;
  c->r[0]=rotl(c->r[28],0)&0x00000200u; cr0(c,c->r[0]); // 803D7DC4
  if (!crb(c,2)) { goto L_803D7DD4; } // 803D7DC8
  c->r[31]=0u+0x00000228u; // 803D7DCC
  goto L_803D7E60; // 803D7DD0
L_803D7DD4:;
  c->r[0]=rotl(c->r[28],0)&0x00008000u; cr0(c,c->r[0]); // 803D7DD4
  if (crb(c,2)) { goto L_803D7DE4; } // 803D7DD8
  c->r[31]=0u+0x00000153u; // 803D7DDC
  goto L_803D7E60; // 803D7DE0
L_803D7DE4:;
  c->r[0]=rotl(c->r[28],0)&0x00000100u; cr0(c,c->r[0]); // 803D7DE4
  if (!crb(c,2)) { goto L_803D7DF4; } // 803D7DE8
  c->r[31]=0u+0x0000016Fu; // 803D7DEC
  goto L_803D7E60; // 803D7DF0
L_803D7DF4:;
  c->r[0]=rotl(c->r[28],0)&0x00004000u; cr0(c,c->r[0]); // 803D7DF4
  if (crb(c,2)) { goto L_803D7E04; } // 803D7DF8
  c->r[31]=0u+0x000000E0u; // 803D7DFC
  goto L_803D7E60; // 803D7E00
L_803D7E04:;
  c->r[0]=rotl(c->r[28],0)&0x00000800u; cr0(c,c->r[0]); // 803D7E04
  if (crb(c,2)) { goto L_803D7E14; } // 803D7E08
  c->r[31]=0u+0x000000B7u; // 803D7E0C
  goto L_803D7E60; // 803D7E10
L_803D7E14:;
  c->r[0]=rotl(c->r[28],0)&0x00000400u; cr0(c,c->r[0]); // 803D7E14
  if (crb(c,2)) { goto L_803D7E24; } // 803D7E18
  c->r[31]=0u+0x00000079u; // 803D7E1C
  goto L_803D7E60; // 803D7E20
L_803D7E24:;
  c->r[0]=rotl(c->r[28],0)&0x00000004u; cr0(c,c->r[0]); // 803D7E24
  if (!crb(c,2)) { goto L_803D7E34; } // 803D7E28
  c->r[31]=0u+0x00000053u; // 803D7E2C
  goto L_803D7E60; // 803D7E30
L_803D7E34:;
  c->r[0]=rotl(c->r[28],0)&0x00000002u; cr0(c,c->r[0]); // 803D7E34
  if (!crb(c,2)) { goto L_803D7E44; } // 803D7E38
  c->r[31]=0u+0x00000036u; // 803D7E3C
  goto L_803D7E60; // 803D7E40
L_803D7E44:;
  c->r[0]=rotl(c->r[28],0)&0x00000010u; cr0(c,c->r[0]); // 803D7E44
  if (crb(c,2)) { goto L_803D7E54; } // 803D7E48
  c->r[31]=0u+0x0000001Bu; // 803D7E4C
  goto L_803D7E60; // 803D7E50
L_803D7E54:;
  c->r[0]=rotl(c->r[28],0)&0x00000008u; cr0(c,c->r[0]); // 803D7E54
  if (crb(c,2)) { goto L_803D7E60; } // 803D7E58
  c->r[31]=0u+0x00000011u; // 803D7E5C
L_803D7E60:;
  cmpu(c,0,c->r[31],0x000003FDu); // 803D7E60
  if (!crb(c,2)) { goto L_803D7E80; } // 803D7E64
  c->r[3]=0u+0x807B0000u; // 803D7E68
  c->r[3]=c->r[3]+0x00006270u; // 803D7E6C
  c->r[0]=R16(c->r[3]+0x0000007Cu); // 803D7E70
  cmpu(c,0,c->r[0],0x000003F9u); // 803D7E74
  if (!crb(c,2)) { goto L_803D7E80; } // 803D7E78
  c->r[31]=0u+0x000003F9u; // 803D7E7C
L_803D7E80:;
  c->r[11]=c->r[1]+0x00000020u; // 803D7E80
  c->r[3]=c->r[31]|c->r[31]; // 803D7E84
  c->lr=0x803D7E8Cu; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 803D7E88
  c->r[0]=R32(c->r[1]+0x00000024u); // 803D7E8C
  c->lr=c->r[0]; // 803D7E90
  c->r[1]=c->r[1]+0x00000020u; // 803D7E94
  return; // 803D7E98
}

// BTM_AclRegisterForChanges
void f_803D7E9C(Ctx* __restrict c) {
  trace_call(0x803D7E9Cu);
  cmps(c,0,(int32_t)c->r[3],0); // 803D7E9C
  if (!crb(c,2)) { goto L_803D7EB8; } // 803D7EA0
  c->r[3]=0u+0x807B0000u; // 803D7EA4
  c->r[0]=0u+0x00000000u; // 803D7EA8
  c->r[3]=c->r[3]+0x00006798u; // 803D7EAC
  W32(c->r[3]+0x000004C8u,c->r[0]); // 803D7EB0
  goto L_803D7ED8; // 803D7EB4
L_803D7EB8:;
  c->r[4]=0u+0x807B0000u; // 803D7EB8
  c->r[4]=c->r[4]+0x00006798u; // 803D7EBC
  c->r[0]=R32(c->r[4]+0x000004C8u); // 803D7EC0
  cmps(c,0,(int32_t)c->r[0],0); // 803D7EC4
  if (crb(c,2)) { goto L_803D7ED4; } // 803D7EC8
  c->r[3]=0u+0x00000002u; // 803D7ECC
  return; // 803D7ED0
L_803D7ED4:;
  W32(c->r[4]+0x000004C8u,c->r[3]); // 803D7ED4
L_803D7ED8:;
  c->r[3]=0u+0x00000000u; // 803D7ED8
  return; // 803D7EDC
}

// btm_qos_setup_complete
void f_803D7EE0(Ctx* __restrict c) {
  trace_call(0x803D7EE0u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803D7EE0
  c->r[0]=c->lr; // 803D7EE4
  W32(c->r[1]+0x00000044u,c->r[0]); // 803D7EE8
  c->r[11]=c->r[1]+0x00000040u; // 803D7EEC
  c->lr=0x803D7EF4u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 803D7EF0
  c->r[31]=0u+0x807B0000u; // 803D7EF4
  c->r[27]=c->r[3]|c->r[3]; // 803D7EF8
  c->r[31]=c->r[31]+0x00006798u; // 803D7EFC
  c->r[28]=c->r[4]|c->r[4]; // 803D7F00
  c->r[30]=R32(c->r[31]+0x00000618u); // 803D7F04
  c->r[29]=c->r[5]|c->r[5]; // 803D7F08
  c->r[3]=c->r[31]+0x00000600u; // 803D7F0C
  c->lr=0x803D7F14u; f_803D0B1C(c); // 803D7F10
  c->r[0]=0u+0x00000000u; // 803D7F14
  cmps(c,0,(int32_t)c->r[30],0); // 803D7F18
  W32(c->r[31]+0x00000618u,c->r[0]); // 803D7F1C
  if (crb(c,2)) { goto L_803D7FA0; } // 803D7F20
  cmps(c,0,(int32_t)c->r[29],0); // 803D7F24
  W8(c->r[1]+0x00000022u,c->r[27]); // 803D7F28
  W16(c->r[1]+0x00000020u,c->r[28]); // 803D7F2C
  if (crb(c,2)) { goto L_803D7F64; } // 803D7F30
  c->r[0]=R8(c->r[29]+0x00000000u); // 803D7F34
  W8(c->r[1]+0x00000008u,c->r[0]); // 803D7F38
  c->r[0]=R8(c->r[29]+0x00000001u); // 803D7F3C
  W8(c->r[1]+0x00000009u,c->r[0]); // 803D7F40
  c->r[0]=R32(c->r[29]+0x00000004u); // 803D7F44
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 803D7F48
  c->r[0]=R32(c->r[29]+0x0000000Cu); // 803D7F4C
  W32(c->r[1]+0x00000014u,c->r[0]); // 803D7F50
  c->r[0]=R32(c->r[29]+0x00000010u); // 803D7F54
  W32(c->r[1]+0x00000018u,c->r[0]); // 803D7F58
  c->r[0]=R32(c->r[29]+0x00000014u); // 803D7F5C
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 803D7F60
L_803D7F64:;
  c->r[3]=0u+0x807B0000u; // 803D7F64
  c->r[3]=c->r[3]+0x00006798u; // 803D7F68
  c->r[0]=R8(c->r[3]+0x000027C0u); // 803D7F6C
  cmpu(c,0,c->r[0],0x00000005u); // 803D7F70
  if (crb(c,0)) { goto L_803D7F90; } // 803D7F74
  c->r[3]=0u+0x000D0000u; // 803D7F78
  c->r[4]=0u+0x80710000u; // 803D7F7C
  c->r[5]=R32(c->r[29]+0x00000014u); // 803D7F80
  c->r[3]=c->r[3]+0x00000004u; // 803D7F84
  c->r[4]=c->r[4]+0xFFFFB9BCu; // 803D7F88
  c->lr=0x803D7F90u; f_803D04F8(c); // 803D7F8C
L_803D7F90:;
  c->r[12]=c->r[30]|c->r[30]; // 803D7F90
  c->r[3]=c->r[1]+0x00000008u; // 803D7F94
  c->ctr=c->r[12]; // 803D7F98
  if (true) { c->lr=0x803D7FA0u; dispatch(c,c->ctr); } // 803D7F9C
L_803D7FA0:;
  c->r[11]=c->r[1]+0x00000040u; // 803D7FA0
  c->lr=0x803D7FA8u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 803D7FA4
  c->r[0]=R32(c->r[1]+0x00000044u); // 803D7FA8
  c->lr=c->r[0]; // 803D7FAC
  c->r[1]=c->r[1]+0x00000040u; // 803D7FB0
  return; // 803D7FB4
}

// BTM_ReadRSSI
void f_803D7FB8(Ctx* __restrict c) {
  trace_call(0x803D7FB8u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803D7FB8
  c->r[0]=c->lr; // 803D7FBC
  c->r[5]=0u+0x807B0000u; // 803D7FC0
  W32(c->r[1]+0x00000024u,c->r[0]); // 803D7FC4
  c->r[5]=c->r[5]+0x00006798u; // 803D7FC8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 803D7FCC
  W32(c->r[1]+0x00000018u,c->r[30]); // 803D7FD0
  W32(c->r[1]+0x00000014u,c->r[29]); // 803D7FD4
  c->r[29]=c->r[4]|c->r[4]; // 803D7FD8
  W32(c->r[1]+0x00000010u,c->r[28]); // 803D7FDC
  c->r[28]=c->r[3]|c->r[3]; // 803D7FE0
  c->r[0]=R8(c->r[5]+0x000027C0u); // 803D7FE4
  cmpu(c,0,c->r[0],0x00000003u); // 803D7FE8
  if (crb(c,0)) { goto L_803D801C; } // 803D7FEC
  c->r[3]=0u+0x000D0000u; // 803D7FF0
  c->r[4]=0u+0x80710000u; // 803D7FF4
  c->r[5]=R8(c->r[28]+0x00000000u); // 803D7FF8
  c->r[3]=c->r[3]+0x00000002u; // 803D7FFC
  c->r[6]=R8(c->r[28]+0x00000001u); // 803D8000
  c->r[4]=c->r[4]+0xFFFFB9E4u; // 803D8004
  c->r[7]=R8(c->r[28]+0x00000002u); // 803D8008
  c->r[8]=R8(c->r[28]+0x00000003u); // 803D800C
  c->r[9]=R8(c->r[28]+0x00000004u); // 803D8010
  c->r[10]=R8(c->r[28]+0x00000005u); // 803D8014
  c->lr=0x803D801Cu; f_803D0570(c); // 803D8018
L_803D801C:;
  c->r[3]=0u+0x807B0000u; // 803D801C
  c->r[3]=c->r[3]+0x00006798u; // 803D8020
  c->r[0]=R32(c->r[3]+0x000005E0u); // 803D8024
  cmps(c,0,(int32_t)c->r[0],0); // 803D8028
  if (crb(c,2)) { goto L_803D8038; } // 803D802C
  c->r[3]=0u+0x00000002u; // 803D8030
  goto L_803D80D4; // 803D8034
L_803D8038:;
  c->r[30]=c->r[3]+0x00000034u; // 803D8038
  c->r[31]=0u+0x00000000u; // 803D803C
L_803D8040:;
  c->r[0]=R8(c->r[30]+0x00000119u); // 803D8040
  cmps(c,0,(int32_t)c->r[0],0); // 803D8044
  if (crb(c,2)) { goto L_803D8068; } // 803D8048
  c->r[4]=c->r[28]|c->r[28]; // 803D804C
  c->r[3]=c->r[30]+0x00000008u; // 803D8050
  c->r[5]=0u+0x00000006u; // 803D8054
  c->lr=0x803D805Cu; f_803AF7B8(c); // 803D8058
  cmps(c,0,(int32_t)c->r[3],0); // 803D805C
  if (!crb(c,2)) { goto L_803D8068; } // 803D8060
  goto L_803D807C; // 803D8064
L_803D8068:;
  c->r[31]=c->r[31]+0x00000001u; // 803D8068
  c->r[30]=c->r[30]+0x0000011Cu; // 803D806C
  cmpu(c,0,c->r[31],0x00000004u); // 803D8070
  if (crb(c,0)) { IRQCHK(c); goto L_803D8040; } // 803D8074
  c->r[30]=0u+0x00000000u; // 803D8078
L_803D807C:;
  cmps(c,0,(int32_t)c->r[30],0); // 803D807C
  if (crb(c,2)) { goto L_803D80D0; } // 803D8080
  c->r[31]=0u+0x807B0000u; // 803D8084
  c->r[4]=0u+0x00000009u; // 803D8088
  c->r[31]=c->r[31]+0x00006798u; // 803D808C
  c->r[5]=0u+0x00000003u; // 803D8090
  c->r[3]=c->r[31]+0x000005C8u; // 803D8094
  c->lr=0x803D809Cu; f_803D0AAC(c); // 803D8098
  W32(c->r[31]+0x000005E0u,c->r[29]); // 803D809C
  c->r[3]=R16(c->r[30]+0x00000000u); // 803D80A0
  c->lr=0x803D80A8u; f_803E54B8(c); // 803D80A4
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 803D80A8
  if (!crb(c,2)) { goto L_803D80C8; } // 803D80AC
  c->r[0]=0u+0x00000000u; // 803D80B0
  c->r[3]=c->r[31]+0x000005C8u; // 803D80B4
  W32(c->r[31]+0x000005E0u,c->r[0]); // 803D80B8
  c->lr=0x803D80C0u; f_803D0B1C(c); // 803D80BC
  c->r[3]=0u+0x00000003u; // 803D80C0
  goto L_803D80D4; // 803D80C4
L_803D80C8:;
  c->r[3]=0u+0x00000001u; // 803D80C8
  goto L_803D80D4; // 803D80CC
L_803D80D0:;
  c->r[3]=0u+0x00000007u; // 803D80D0
L_803D80D4:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 803D80D4
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 803D80D8
  c->r[30]=R32(c->r[1]+0x00000018u); // 803D80DC
  c->r[29]=R32(c->r[1]+0x00000014u); // 803D80E0
  c->r[28]=R32(c->r[1]+0x00000010u); // 803D80E4
  c->lr=c->r[0]; // 803D80E8
  c->r[1]=c->r[1]+0x00000020u; // 803D80EC
  return; // 803D80F0
}

// BTM_ReadLinkQuality
void f_803D80F4(Ctx* __restrict c) {
  trace_call(0x803D80F4u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803D80F4
  c->r[0]=c->lr; // 803D80F8
  c->r[5]=0u+0x807B0000u; // 803D80FC
  W32(c->r[1]+0x00000024u,c->r[0]); // 803D8100
  c->r[5]=c->r[5]+0x00006798u; // 803D8104
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 803D8108
  W32(c->r[1]+0x00000018u,c->r[30]); // 803D810C
  W32(c->r[1]+0x00000014u,c->r[29]); // 803D8110
  c->r[29]=c->r[4]|c->r[4]; // 803D8114
  W32(c->r[1]+0x00000010u,c->r[28]); // 803D8118
  c->r[28]=c->r[3]|c->r[3]; // 803D811C
  c->r[0]=R8(c->r[5]+0x000027C0u); // 803D8120
  cmpu(c,0,c->r[0],0x00000003u); // 803D8124
  if (crb(c,0)) { goto L_803D8158; } // 803D8128
  c->r[3]=0u+0x000D0000u; // 803D812C
  c->r[4]=0u+0x80710000u; // 803D8130
  c->r[5]=R8(c->r[28]+0x00000000u); // 803D8134
  c->r[3]=c->r[3]+0x00000002u; // 803D8138
  c->r[6]=R8(c->r[28]+0x00000001u); // 803D813C
  c->r[4]=c->r[4]+0xFFFFBA18u; // 803D8140
  c->r[7]=R8(c->r[28]+0x00000002u); // 803D8144
  c->r[8]=R8(c->r[28]+0x00000003u); // 803D8148
  c->r[9]=R8(c->r[28]+0x00000004u); // 803D814C
  c->r[10]=R8(c->r[28]+0x00000005u); // 803D8150
  c->lr=0x803D8158u; f_803D0570(c); // 803D8154
L_803D8158:;
  c->r[3]=0u+0x807B0000u; // 803D8158
  c->r[3]=c->r[3]+0x00006798u; // 803D815C
  c->r[0]=R32(c->r[3]+0x000005FCu); // 803D8160
  cmps(c,0,(int32_t)c->r[0],0); // 803D8164
  if (crb(c,2)) { goto L_803D8174; } // 803D8168
  c->r[3]=0u+0x00000002u; // 803D816C
  goto L_803D8210; // 803D8170
L_803D8174:;
  c->r[30]=c->r[3]+0x00000034u; // 803D8174
  c->r[31]=0u+0x00000000u; // 803D8178
L_803D817C:;
  c->r[0]=R8(c->r[30]+0x00000119u); // 803D817C
  cmps(c,0,(int32_t)c->r[0],0); // 803D8180
  if (crb(c,2)) { goto L_803D81A4; } // 803D8184
  c->r[4]=c->r[28]|c->r[28]; // 803D8188
  c->r[3]=c->r[30]+0x00000008u; // 803D818C
  c->r[5]=0u+0x00000006u; // 803D8190
  c->lr=0x803D8198u; f_803AF7B8(c); // 803D8194
  cmps(c,0,(int32_t)c->r[3],0); // 803D8198
  if (!crb(c,2)) { goto L_803D81A4; } // 803D819C
  goto L_803D81B8; // 803D81A0
L_803D81A4:;
  c->r[31]=c->r[31]+0x00000001u; // 803D81A4
  c->r[30]=c->r[30]+0x0000011Cu; // 803D81A8
  cmpu(c,0,c->r[31],0x00000004u); // 803D81AC
  if (crb(c,0)) { IRQCHK(c); goto L_803D817C; } // 803D81B0
  c->r[30]=0u+0x00000000u; // 803D81B4
L_803D81B8:;
  cmps(c,0,(int32_t)c->r[30],0); // 803D81B8
  if (crb(c,2)) { goto L_803D820C; } // 803D81BC
  c->r[31]=0u+0x807B0000u; // 803D81C0
  c->r[4]=0u+0x00000009u; // 803D81C4
  c->r[31]=c->r[31]+0x00006798u; // 803D81C8
  c->r[5]=0u+0x00000003u; // 803D81CC
  c->r[3]=c->r[31]+0x000005E4u; // 803D81D0
  c->lr=0x803D81D8u; f_803D0AAC(c); // 803D81D4
  W32(c->r[31]+0x000005FCu,c->r[29]); // 803D81D8
  c->r[3]=R16(c->r[30]+0x00000000u); // 803D81DC
  c->lr=0x803D81E4u; f_803E543C(c); // 803D81E0
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 803D81E4
  if (!crb(c,2)) { goto L_803D8204; } // 803D81E8
  c->r[3]=c->r[31]+0x000005E4u; // 803D81EC
  c->lr=0x803D81F4u; f_803D0B1C(c); // 803D81F0
  c->r[0]=0u+0x00000000u; // 803D81F4
  c->r[3]=0u+0x00000003u; // 803D81F8
  W32(c->r[31]+0x000005FCu,c->r[0]); // 803D81FC
  goto L_803D8210; // 803D8200
L_803D8204:;
  c->r[3]=0u+0x00000001u; // 803D8204
  goto L_803D8210; // 803D8208
L_803D820C:;
  c->r[3]=0u+0x00000007u; // 803D820C
L_803D8210:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 803D8210
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 803D8214
  c->r[30]=R32(c->r[1]+0x00000018u); // 803D8218
  c->r[29]=R32(c->r[1]+0x00000014u); // 803D821C
  c->r[28]=R32(c->r[1]+0x00000010u); // 803D8220
  c->lr=c->r[0]; // 803D8224
  c->r[1]=c->r[1]+0x00000020u; // 803D8228
  return; // 803D822C
}

// btm_read_rssi_complete
void f_803D8230(Ctx* __restrict c) {
  trace_call(0x803D8230u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803D8230
  c->r[0]=c->lr; // 803D8234
  W32(c->r[1]+0x00000034u,c->r[0]); // 803D8238
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 803D823C
  c->r[31]=0u+0x807B0000u; // 803D8240
  c->r[31]=c->r[31]+0x00006798u; // 803D8244
  W32(c->r[1]+0x00000028u,c->r[30]); // 803D8248
  W32(c->r[1]+0x00000024u,c->r[29]); // 803D824C
  c->r[29]=c->r[31]+0x00000034u; // 803D8250
  W32(c->r[1]+0x00000020u,c->r[28]); // 803D8254
  c->r[28]=c->r[3]|c->r[3]; // 803D8258
  c->r[3]=c->r[31]+0x000005C8u; // 803D825C
  c->r[30]=R32(c->r[31]+0x000005E0u); // 803D8260
  c->lr=0x803D8268u; f_803D0B1C(c); // 803D8264
  c->r[0]=0u+0x00000000u; // 803D8268
  cmps(c,0,(int32_t)c->r[30],0); // 803D826C
  W32(c->r[31]+0x000005E0u,c->r[0]); // 803D8270
  if (crb(c,2)) { goto L_803D832C; } // 803D8274
  c->r[6]=R8(c->r[28]+0x00000000u); // 803D8278
  cmps(c,0,(int32_t)c->r[6],0); // 803D827C
  W8(c->r[1]+0x00000009u,c->r[6]); // 803D8280
  if (!crb(c,2)) { goto L_803D8314; } // 803D8284
  W8(c->r[1]+0x00000008u,c->r[0]); // 803D8288
  c->r[0]=R8(c->r[31]+0x000027C0u); // 803D828C
  c->r[3]=R8(c->r[28]+0x00000002u); // 803D8290
  c->r[4]=R8(c->r[28]+0x00000001u); // 803D8294
  cmpu(c,0,c->r[0],0x00000004u); // 803D8298
  c->r[5]=R8(c->r[28]+0x00000003u); // 803D829C
  c->r[0]=rotl(c->r[3],8)&0xFFFFFF00u; // 803D82A0
  c->r[0]=c->r[4]+c->r[0]; // 803D82A4
  W8(c->r[1]+0x0000000Au,c->r[5]); // 803D82A8
  c->r[31]=rotl(c->r[0],0)&0x0000FFFFu; // 803D82AC
  if (crb(c,0)) { goto L_803D82CC; } // 803D82B0
  c->r[3]=0u+0x000D0000u; // 803D82B4
  c->r[4]=0u+0x80710000u; // 803D82B8
  c->r[3]=c->r[3]+0x00000003u; // 803D82BC
  c->r[5]=(uint32_t)(int32_t)(int8_t)c->r[5]; // 803D82C0
  c->r[4]=c->r[4]+0xFFFFBA54u; // 803D82C4
  c->lr=0x803D82CCu; f_803D0510(c); // 803D82C8
L_803D82CC:;
  c->r[0]=0u+0x00000004u; // 803D82CC
  c->r[3]=0u+0x00000000u; // 803D82D0
  c->ctr=c->r[0]; // 803D82D4
L_803D82D8:;
  c->r[0]=R8(c->r[29]+0x00000119u); // 803D82D8
  cmps(c,0,(int32_t)c->r[0],0); // 803D82DC
  if (crb(c,2)) { goto L_803D8304; } // 803D82E0
  c->r[0]=R16(c->r[29]+0x00000000u); // 803D82E4
  cmpu(c,0,c->r[31],c->r[0]); // 803D82E8
  if (!crb(c,2)) { goto L_803D8304; } // 803D82EC
  c->r[3]=c->r[1]+0x0000000Bu; // 803D82F0
  c->r[4]=c->r[29]+0x00000008u; // 803D82F4
  c->r[5]=0u+0x00000006u; // 803D82F8
  c->lr=0x803D8300u; f_802DC484(c); // 803D82FC
  goto L_803D831C; // 803D8300
L_803D8304:;
  c->r[3]=c->r[3]+0x00000001u; // 803D8304
  c->r[29]=c->r[29]+0x0000011Cu; // 803D8308
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_803D82D8; } // 803D830C
  goto L_803D831C; // 803D8310
L_803D8314:;
  c->r[0]=0u+0x0000000Au; // 803D8314
  W8(c->r[1]+0x00000008u,c->r[0]); // 803D8318
L_803D831C:;
  c->r[12]=c->r[30]|c->r[30]; // 803D831C
  c->r[3]=c->r[1]+0x00000008u; // 803D8320
  c->ctr=c->r[12]; // 803D8324
  if (true) { c->lr=0x803D832Cu; dispatch(c,c->ctr); } // 803D8328
L_803D832C:;
  c->r[0]=R32(c->r[1]+0x00000034u); // 803D832C
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 803D8330
  c->r[30]=R32(c->r[1]+0x00000028u); // 803D8334
  c->r[29]=R32(c->r[1]+0x00000024u); // 803D8338
  c->r[28]=R32(c->r[1]+0x00000020u); // 803D833C
  c->lr=c->r[0]; // 803D8340
  c->r[1]=c->r[1]+0x00000030u; // 803D8344
  return; // 803D8348
}

// btm_read_link_quality_complete
void f_803D834C(Ctx* __restrict c) {
  trace_call(0x803D834Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803D834C
  c->r[0]=c->lr; // 803D8350
  W32(c->r[1]+0x00000034u,c->r[0]); // 803D8354
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 803D8358
  c->r[31]=0u+0x807B0000u; // 803D835C
  c->r[31]=c->r[31]+0x00006798u; // 803D8360
  W32(c->r[1]+0x00000028u,c->r[30]); // 803D8364
  W32(c->r[1]+0x00000024u,c->r[29]); // 803D8368
  c->r[29]=c->r[31]+0x00000034u; // 803D836C
  W32(c->r[1]+0x00000020u,c->r[28]); // 803D8370
  c->r[28]=c->r[3]|c->r[3]; // 803D8374
  c->r[3]=c->r[31]+0x000005C8u; // 803D8378
  c->r[30]=R32(c->r[31]+0x000005FCu); // 803D837C
  c->lr=0x803D8384u; f_803D0B1C(c); // 803D8380
  c->r[0]=0u+0x00000000u; // 803D8384
  cmps(c,0,(int32_t)c->r[30],0); // 803D8388
  W32(c->r[31]+0x000005FCu,c->r[0]); // 803D838C
  if (crb(c,2)) { goto L_803D8444; } // 803D8390
  c->r[6]=R8(c->r[28]+0x00000000u); // 803D8394
  cmps(c,0,(int32_t)c->r[6],0); // 803D8398
  W8(c->r[1]+0x00000009u,c->r[6]); // 803D839C
  if (!crb(c,2)) { goto L_803D842C; } // 803D83A0
  W8(c->r[1]+0x00000008u,c->r[0]); // 803D83A4
  c->r[0]=R8(c->r[31]+0x000027C0u); // 803D83A8
  c->r[3]=R8(c->r[28]+0x00000002u); // 803D83AC
  c->r[4]=R8(c->r[28]+0x00000001u); // 803D83B0
  cmpu(c,0,c->r[0],0x00000004u); // 803D83B4
  c->r[5]=R8(c->r[28]+0x00000003u); // 803D83B8
  c->r[0]=rotl(c->r[3],8)&0xFFFFFF00u; // 803D83BC
  c->r[0]=c->r[4]+c->r[0]; // 803D83C0
  W8(c->r[1]+0x0000000Au,c->r[5]); // 803D83C4
  c->r[31]=rotl(c->r[0],0)&0x0000FFFFu; // 803D83C8
  if (crb(c,0)) { goto L_803D83E4; } // 803D83CC
  c->r[3]=0u+0x000D0000u; // 803D83D0
  c->r[4]=0u+0x80710000u; // 803D83D4
  c->r[3]=c->r[3]+0x00000003u; // 803D83D8
  c->r[4]=c->r[4]+0xFFFFBA84u; // 803D83DC
  c->lr=0x803D83E4u; f_803D0510(c); // 803D83E0
L_803D83E4:;
  c->r[0]=0u+0x00000004u; // 803D83E4
  c->r[3]=0u+0x00000000u; // 803D83E8
  c->ctr=c->r[0]; // 803D83EC
L_803D83F0:;
  c->r[0]=R8(c->r[29]+0x00000119u); // 803D83F0
  cmps(c,0,(int32_t)c->r[0],0); // 803D83F4
  if (crb(c,2)) { goto L_803D841C; } // 803D83F8
  c->r[0]=R16(c->r[29]+0x00000000u); // 803D83FC
  cmpu(c,0,c->r[31],c->r[0]); // 803D8400
  if (!crb(c,2)) { goto L_803D841C; } // 803D8404
  c->r[3]=c->r[1]+0x0000000Bu; // 803D8408
  c->r[4]=c->r[29]+0x00000008u; // 803D840C
  c->r[5]=0u+0x00000006u; // 803D8410
  c->lr=0x803D8418u; f_802DC484(c); // 803D8414
  goto L_803D8434; // 803D8418
L_803D841C:;
  c->r[3]=c->r[3]+0x00000001u; // 803D841C
  c->r[29]=c->r[29]+0x0000011Cu; // 803D8420
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_803D83F0; } // 803D8424
  goto L_803D8434; // 803D8428
L_803D842C:;
  c->r[0]=0u+0x0000000Au; // 803D842C
  W8(c->r[1]+0x00000008u,c->r[0]); // 803D8430
L_803D8434:;
  c->r[12]=c->r[30]|c->r[30]; // 803D8434
  c->r[3]=c->r[1]+0x00000008u; // 803D8438
  c->ctr=c->r[12]; // 803D843C
  if (true) { c->lr=0x803D8444u; dispatch(c,c->ctr); } // 803D8440
L_803D8444:;
  c->r[0]=R32(c->r[1]+0x00000034u); // 803D8444
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 803D8448
  c->r[30]=R32(c->r[1]+0x00000028u); // 803D844C
  c->r[29]=R32(c->r[1]+0x00000024u); // 803D8450
  c->r[28]=R32(c->r[1]+0x00000020u); // 803D8454
  c->lr=c->r[0]; // 803D8458
  c->r[1]=c->r[1]+0x00000030u; // 803D845C
  return; // 803D8460
}

// btm_remove_acl
void f_803D8464(Ctx* __restrict c) {
  trace_call(0x803D8464u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803D8464
  c->r[0]=c->lr; // 803D8468
  c->r[4]=0u+0x807B0000u; // 803D846C
  W32(c->r[1]+0x00000024u,c->r[0]); // 803D8470
  c->r[4]=c->r[4]+0x00006798u; // 803D8474
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 803D8478
  c->r[31]=0u+0x00000000u; // 803D847C
  W32(c->r[1]+0x00000018u,c->r[30]); // 803D8480
  c->r[30]=c->r[4]+0x00000034u; // 803D8484
  W32(c->r[1]+0x00000014u,c->r[29]); // 803D8488
  c->r[29]=c->r[3]|c->r[3]; // 803D848C
L_803D8490:;
  c->r[0]=R8(c->r[30]+0x00000119u); // 803D8490
  cmps(c,0,(int32_t)c->r[0],0); // 803D8494
  if (crb(c,2)) { goto L_803D84B8; } // 803D8498
  c->r[4]=c->r[29]|c->r[29]; // 803D849C
  c->r[3]=c->r[30]+0x00000008u; // 803D84A0
  c->r[5]=0u+0x00000006u; // 803D84A4
  c->lr=0x803D84ACu; f_803AF7B8(c); // 803D84A8
  cmps(c,0,(int32_t)c->r[3],0); // 803D84AC
  if (!crb(c,2)) { goto L_803D84B8; } // 803D84B0
  goto L_803D84CC; // 803D84B4
L_803D84B8:;
  c->r[31]=c->r[31]+0x00000001u; // 803D84B8
  c->r[30]=c->r[30]+0x0000011Cu; // 803D84BC
  cmpu(c,0,c->r[31],0x00000004u); // 803D84C0
  if (crb(c,0)) { IRQCHK(c); goto L_803D8490; } // 803D84C4
  c->r[30]=0u+0x00000000u; // 803D84C8
L_803D84CC:;
  cmps(c,0,(int32_t)c->r[30],0); // 803D84CC
  if (crb(c,2)) { goto L_803D84DC; } // 803D84D0
  c->r[3]=R16(c->r[30]+0x00000000u); // 803D84D4
  goto L_803D84E4; // 803D84D8
L_803D84DC:;
  c->r[3]=0u+0x00010000u; // 803D84DC
  c->r[3]=c->r[3]+0xFFFFFFFFu; // 803D84E0
L_803D84E4:;
  c->r[3]=rotl(c->r[3],0)&0x0000FFFFu; // 803D84E4
  c->r[4]=0u+0x00000013u; // 803D84E8
  c->lr=0x803D84F0u; f_803E3660(c); // 803D84EC
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 803D84F0
  if (!crb(c,2)) { goto L_803D8500; } // 803D84F4
  c->r[3]=0u+0x00000003u; // 803D84F8
  goto L_803D8504; // 803D84FC
L_803D8500:;
  c->r[3]=0u+0x00000000u; // 803D8500
L_803D8504:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 803D8504
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 803D8508
  c->r[30]=R32(c->r[1]+0x00000018u); // 803D850C
  c->r[29]=R32(c->r[1]+0x00000014u); // 803D8510
  c->lr=c->r[0]; // 803D8514
  c->r[1]=c->r[1]+0x00000020u; // 803D8518
  return; // 803D851C
}

// btm_chg_all_acl_pkt_types
void f_803D8520(Ctx* __restrict c) {
  trace_call(0x803D8520u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803D8520
  c->r[0]=c->lr; // 803D8524
  W32(c->r[1]+0x00000044u,c->r[0]); // 803D8528
  c->r[11]=c->r[1]+0x00000040u; // 803D852C
  c->lr=0x803D8534u; { W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 803D8530
  c->r[4]=0u+0x807B0000u; // 803D8534
  cmps(c,0,(int32_t)c->r[3],0); // 803D8538
  c->r[31]=c->r[4]+0x00006798u; // 803D853C
  c->r[30]=0u+0x80710000u; // 803D8540
  c->r[30]=c->r[30]+0xFFFFB738u; // 803D8544
  c->r[28]=c->r[31]+0x00000034u; // 803D8548
  if (crb(c,2)) { goto L_803D8614; } // 803D854C
  c->r[29]=0u+0x00000000u; // 803D8550
  c->r[26]=0u+0x000D0000u; // 803D8554
  c->r[24]=0u+0xFFFFCCF9u; // 803D8558
L_803D855C:;
  c->r[0]=R8(c->r[28]+0x00000119u); // 803D855C
  cmps(c,0,(int32_t)c->r[0],0); // 803D8560
  if (crb(c,2)) { goto L_803D8600; } // 803D8564
  c->r[0]=R8(c->r[31]+0x000027C0u); // 803D8568
  cmpu(c,0,c->r[0],0x00000005u); // 803D856C
  if (crb(c,0)) { goto L_803D8584; } // 803D8570
  c->r[5]=R16(c->r[28]+0x00000000u); // 803D8574
  c->r[3]=c->r[26]+0x00000004u; // 803D8578
  c->r[4]=c->r[30]+0x0000038Cu; // 803D857C
  c->lr=0x803D8584u; f_803D04F8(c); // 803D8580
L_803D8584:;
  c->r[0]=R16(c->r[28]+0x00000002u); // 803D8584
  c->r[5]=0u+0x00000018u; // 803D8588
  W16(c->r[28]+0x00000004u,c->r[0]); // 803D858C
  c->r[3]=R8(c->r[31]+0x00000636u); // 803D8590
  cmpu(c,0,c->r[3],0x00000003u); // 803D8594
  if (crb(c,0)) { goto L_803D85A4; } // 803D8598
  c->r[0]=c->r[5]|0x00003300u; // 803D859C
  c->r[5]=rotl(c->r[0],0)&0x0000FFFFu; // 803D85A0
L_803D85A4:;
  c->r[4]=R16(c->r[31]+0x00000654u); // 803D85A4
  cmpu(c,1,c->r[3],0x00000003u); // 803D85A8
  c->r[0]=c->r[5]&c->r[4]; // 803D85AC
  c->r[3]=c->r[0]&0x0000CC18u; cr0(c,c->r[3]); // 803D85B0
  c->r[25]=c->r[3]&c->r[24]; // 803D85B4
  if (crb(c,4)) { goto L_803D85CC; } // 803D85B8
  c->r[0]=c->r[5]|c->r[4]; // 803D85BC
  c->r[0]=c->r[0]&0x00003306u; cr0(c,c->r[0]); // 803D85C0
  c->r[0]=c->r[3]|c->r[0]; // 803D85C4
  c->r[25]=rotl(c->r[0],0)&0x0000FFFFu; // 803D85C8
L_803D85CC:;
  c->r[0]=R8(c->r[31]+0x000027C0u); // 803D85CC
  cmpu(c,0,c->r[0],0x00000004u); // 803D85D0
  if (crb(c,0)) { goto L_803D85E8; } // 803D85D4
  c->r[3]=c->r[26]+0x00000003u; // 803D85D8
  c->r[4]=c->r[30]+0x00000040u; // 803D85DC
  c->r[5]=rotl(c->r[25],0)&0x0000FFFFu; // 803D85E0
  c->lr=0x803D85E8u; f_803D04F8(c); // 803D85E4
L_803D85E8:;
  c->r[3]=R16(c->r[28]+0x00000000u); // 803D85E8
  c->r[4]=rotl(c->r[25],0)&0x0000FFFFu; // 803D85EC
  c->lr=0x803D85F4u; f_803E3CF4(c); // 803D85F0
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 803D85F4
  if (crb(c,2)) { goto L_803D8600; } // 803D85F8
  W16(c->r[28]+0x00000002u,c->r[25]); // 803D85FC
L_803D8600:;
  c->r[29]=c->r[29]+0x00000001u; // 803D8600
  c->r[28]=c->r[28]+0x0000011Cu; // 803D8604
  cmpu(c,0,c->r[29],0x00000004u); // 803D8608
  if (crb(c,0)) { IRQCHK(c); goto L_803D855C; } // 803D860C
  goto L_803D8728; // 803D8610
L_803D8614:;
  c->r[29]=0u+0x00000000u; // 803D8614
  c->r[24]=0u+0x000D0000u; // 803D8618
  c->r[25]=0u+0x00000000u; // 803D861C
  c->r[27]=0u+0xFFFFCCF9u; // 803D8620
L_803D8624:;
  c->r[0]=R8(c->r[28]+0x00000119u); // 803D8624
  cmps(c,0,(int32_t)c->r[0],0); // 803D8628
  if (crb(c,2)) { goto L_803D8718; } // 803D862C
  c->r[0]=R16(c->r[28]+0x00000004u); // 803D8630
  cmps(c,0,(int32_t)c->r[0],0); // 803D8634
  if (crb(c,2)) { goto L_803D8718; } // 803D8638
  c->r[3]=c->r[28]+0x00000008u; // 803D863C
  c->r[4]=c->r[1]+0x00000008u; // 803D8640
  c->lr=0x803D8648u; f_803DC648(c); // 803D8644
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 803D8648
  if (!crb(c,2)) { goto L_803D8718; } // 803D864C
  c->r[0]=R8(c->r[1]+0x00000008u); // 803D8650
  cmpu(c,0,c->r[0],0x00000002u); // 803D8654
  if (!crb(c,2)) { goto L_803D8690; } // 803D8658
  c->r[0]=R8(c->r[31]+0x000027C0u); // 803D865C
  cmpu(c,0,c->r[0],0x00000005u); // 803D8660
  if (crb(c,0)) { goto L_803D8678; } // 803D8664
  c->r[5]=R16(c->r[28]+0x00000000u); // 803D8668
  c->r[3]=c->r[24]+0x00000004u; // 803D866C
  c->r[4]=c->r[30]+0x000003BCu; // 803D8670
  c->lr=0x803D8678u; f_803D04F8(c); // 803D8674
L_803D8678:;
  W8(c->r[1]+0x00000014u,c->r[25]); // 803D8678
  c->r[4]=c->r[28]+0x00000008u; // 803D867C
  c->r[5]=c->r[1]+0x0000000Cu; // 803D8680
  c->r[3]=0u+0x00000080u; // 803D8684
  c->lr=0x803D868Cu; f_803DC478(c); // 803D8688
  goto L_803D8718; // 803D868C
L_803D8690:;
  c->r[0]=R8(c->r[31]+0x000027C0u); // 803D8690
  cmpu(c,0,c->r[0],0x00000005u); // 803D8694
  if (crb(c,0)) { goto L_803D86B0; } // 803D8698
  c->r[5]=R16(c->r[28]+0x00000000u); // 803D869C
  c->r[3]=c->r[24]+0x00000004u; // 803D86A0
  c->r[6]=R16(c->r[28]+0x00000002u); // 803D86A4
  c->r[4]=c->r[30]+0x000003ECu; // 803D86A8
  c->lr=0x803D86B0u; f_803D0510(c); // 803D86AC
L_803D86B0:;
  c->r[4]=R16(c->r[28]+0x00000004u); // 803D86B0
  c->r[5]=R16(c->r[31]+0x00000654u); // 803D86B4
  c->r[0]=R8(c->r[31]+0x00000636u); // 803D86B8
  c->r[3]=c->r[4]&c->r[5]; // 803D86BC
  c->r[3]=c->r[3]&0x0000CC18u; cr0(c,c->r[3]); // 803D86C0
  cmpu(c,0,c->r[0],0x00000003u); // 803D86C4
  c->r[26]=c->r[3]&c->r[27]; // 803D86C8
  if (crb(c,0)) { goto L_803D86E0; } // 803D86CC
  c->r[0]=c->r[4]|c->r[5]; // 803D86D0
  c->r[0]=c->r[0]&0x00003306u; cr0(c,c->r[0]); // 803D86D4
  c->r[0]=c->r[3]|c->r[0]; // 803D86D8
  c->r[26]=rotl(c->r[0],0)&0x0000FFFFu; // 803D86DC
L_803D86E0:;
  c->r[0]=R8(c->r[31]+0x000027C0u); // 803D86E0
  cmpu(c,0,c->r[0],0x00000004u); // 803D86E4
  if (crb(c,0)) { goto L_803D86FC; } // 803D86E8
  c->r[3]=c->r[24]+0x00000003u; // 803D86EC
  c->r[4]=c->r[30]+0x00000040u; // 803D86F0
  c->r[5]=rotl(c->r[26],0)&0x0000FFFFu; // 803D86F4
  c->lr=0x803D86FCu; f_803D04F8(c); // 803D86F8
L_803D86FC:;
  c->r[3]=R16(c->r[28]+0x00000000u); // 803D86FC
  c->r[4]=rotl(c->r[26],0)&0x0000FFFFu; // 803D8700
  c->lr=0x803D8708u; f_803E3CF4(c); // 803D8704
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 803D8708
  if (crb(c,2)) { goto L_803D8714; } // 803D870C
  W16(c->r[28]+0x00000002u,c->r[26]); // 803D8710
L_803D8714:;
  W16(c->r[28]+0x00000004u,c->r[25]); // 803D8714
L_803D8718:;
  c->r[29]=c->r[29]+0x00000001u; // 803D8718
  c->r[28]=c->r[28]+0x0000011Cu; // 803D871C
  cmpu(c,0,c->r[29],0x00000004u); // 803D8720
  if (crb(c,0)) { IRQCHK(c); goto L_803D8624; } // 803D8724
L_803D8728:;
  c->r[11]=c->r[1]+0x00000040u; // 803D8728
  c->lr=0x803D8730u; { c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 803D872C
  c->r[0]=R32(c->r[1]+0x00000044u); // 803D8730
  c->lr=c->r[0]; // 803D8734
  c->r[1]=c->r[1]+0x00000040u; // 803D8738
  return; // 803D873C
}

// BTM_SecAddDevice
void f_803D8740(Ctx* __restrict c) {
  trace_call(0x803D8740u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803D8740
  c->r[0]=c->lr; // 803D8744
  W32(c->r[1]+0x00000034u,c->r[0]); // 803D8748
  c->r[11]=c->r[1]+0x00000030u; // 803D874C
  c->lr=0x803D8754u; { W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 803D8750
  c->r[9]=0u+0x807B0000u; // 803D8754
  c->r[24]=c->r[3]|c->r[3]; // 803D8758
  c->r[9]=c->r[9]+0x00006798u; // 803D875C
  c->r[25]=c->r[4]|c->r[4]; // 803D8760
  c->r[26]=c->r[5]|c->r[5]; // 803D8764
  c->r[27]=c->r[6]|c->r[6]; // 803D8768
  c->r[28]=c->r[7]|c->r[7]; // 803D876C
  c->r[29]=c->r[8]|c->r[8]; // 803D8770
  c->r[30]=c->r[9]+0x00001F30u; // 803D8774
  c->r[31]=0u+0x00000000u; // 803D8778
L_803D877C:;
  c->r[0]=R8(c->r[30]+0x00000076u); // 803D877C
  c->r[0]=rotl(c->r[0],0)&0x00000080u; cr0(c,c->r[0]); // 803D8780
  if (crb(c,2)) { goto L_803D87A4; } // 803D8784
  c->r[4]=c->r[24]|c->r[24]; // 803D8788
  c->r[3]=c->r[30]+0x0000001Cu; // 803D878C
  c->r[5]=0u+0x00000006u; // 803D8790
  c->lr=0x803D8798u; f_803AF7B8(c); // 803D8794
  cmps(c,0,(int32_t)c->r[3],0); // 803D8798
  if (!crb(c,2)) { goto L_803D87A4; } // 803D879C
  goto L_803D87B8; // 803D87A0
L_803D87A4:;
  c->r[31]=c->r[31]+0x00000001u; // 803D87A4
  c->r[30]=c->r[30]+0x00000088u; // 803D87A8
  cmps(c,0,(int32_t)c->r[31],16); // 803D87AC
  if (crb(c,0)) { IRQCHK(c); goto L_803D877C; } // 803D87B0
  c->r[30]=0u+0x00000000u; // 803D87B4
L_803D87B8:;
  cmps(c,0,(int32_t)c->r[30],0); // 803D87B8
  if (!crb(c,2)) { goto L_803D87DC; } // 803D87BC
  c->r[3]=c->r[24]|c->r[24]; // 803D87C0
  c->lr=0x803D87C8u; f_803D8A14(c); // 803D87C4
  cmps(c,0,(int32_t)c->r[3],0); // 803D87C8
  c->r[30]=c->r[3]|c->r[3]; // 803D87CC
  if (!crb(c,2)) { goto L_803D87F4; } // 803D87D0
  c->r[3]=0u+0x00000000u; // 803D87D4
  goto L_803D88B0; // 803D87D8
L_803D87DC:;
  c->r[4]=0u+0x807B0000u; // 803D87DC
  c->r[4]=c->r[4]+0x00006798u; // 803D87E0
  c->r[3]=R32(c->r[4]+0x00001974u); // 803D87E4
  W32(c->r[30]+0x0000000Cu,c->r[3]); // 803D87E8
  c->r[0]=c->r[3]+0x00000001u; // 803D87EC
  W32(c->r[4]+0x00001974u,c->r[0]); // 803D87F0
L_803D87F4:;
  cmps(c,0,(int32_t)c->r[25],0); // 803D87F4
  if (crb(c,2)) { goto L_803D880C; } // 803D87F8
  c->r[4]=c->r[25]|c->r[25]; // 803D87FC
  c->r[3]=c->r[30]+0x00000022u; // 803D8800
  c->r[5]=0u+0x00000003u; // 803D8804
  c->lr=0x803D880Cu; f_802DC484(c); // 803D8808
L_803D880C:;
  c->r[3]=c->r[30]+0x00000035u; // 803D880C
  c->r[4]=0u+0x00000000u; // 803D8810
  c->r[5]=0u+0x00000041u; // 803D8814
  c->lr=0x803D881Cu; f_800043EC(c); // 803D8818
  cmps(c,0,(int32_t)c->r[26],0); // 803D881C
  if (crb(c,2)) { goto L_803D884C; } // 803D8820
  c->r[0]=R8(c->r[26]+0x00000000u); // 803D8824
  cmps(c,0,(int32_t)c->r[0],0); // 803D8828
  if (crb(c,2)) { goto L_803D884C; } // 803D882C
  c->r[0]=R8(c->r[30]+0x00000076u); // 803D8830
  c->r[4]=c->r[26]|c->r[26]; // 803D8834
  c->r[3]=c->r[30]+0x00000035u; // 803D8838
  c->r[5]=0u+0x00000040u; // 803D883C
  c->r[0]=c->r[0]|0x00000008u; // 803D8840
  W8(c->r[30]+0x00000076u,c->r[0]); // 803D8844
  c->lr=0x803D884Cu; f_803B3880(c); // 803D8848
L_803D884C:;
  cmps(c,0,(int32_t)c->r[27],0); // 803D884C
  if (crb(c,2)) { goto L_803D8868; } // 803D8850
  c->r[4]=c->r[27]|c->r[27]; // 803D8854
  c->r[3]=c->r[30]+0x00000077u; // 803D8858
  c->r[5]=0u+0x00000008u; // 803D885C
  c->lr=0x803D8864u; f_802DC484(c); // 803D8860
  goto L_803D8878; // 803D8864
L_803D8868:;
  c->r[3]=c->r[30]+0x00000077u; // 803D8868
  c->r[4]=0u+0x00000000u; // 803D886C
  c->r[5]=0u+0x00000008u; // 803D8870
  c->lr=0x803D8878u; f_800043EC(c); // 803D8874
L_803D8878:;
  c->r[0]=R32(c->r[28]+0x00000000u); // 803D8878
  cmps(c,0,(int32_t)c->r[29],0); // 803D887C
  W32(c->r[30]+0x00000010u,c->r[0]); // 803D8880
  c->r[0]=R32(c->r[28]+0x00000004u); // 803D8884
  W32(c->r[30]+0x00000014u,c->r[0]); // 803D8888
  if (crb(c,2)) { goto L_803D88AC; } // 803D888C
  c->r[0]=R8(c->r[30]+0x00000076u); // 803D8890
  c->r[4]=c->r[29]|c->r[29]; // 803D8894
  c->r[3]=c->r[30]+0x00000025u; // 803D8898
  c->r[5]=0u+0x00000010u; // 803D889C
  c->r[0]=c->r[0]|0x00000010u; // 803D88A0
  W8(c->r[30]+0x00000076u,c->r[0]); // 803D88A4
  c->lr=0x803D88ACu; f_802DC484(c); // 803D88A8
L_803D88AC:;
  c->r[3]=0u+0x00000001u; // 803D88AC
L_803D88B0:;
  c->r[11]=c->r[1]+0x00000030u; // 803D88B0
  c->lr=0x803D88B8u; { c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 803D88B4
  c->r[0]=R32(c->r[1]+0x00000034u); // 803D88B8
  c->lr=c->r[0]; // 803D88BC
  c->r[1]=c->r[1]+0x00000030u; // 803D88C0
  return; // 803D88C4
}

// BTM_SecDeleteDevice
void f_803D88C8(Ctx* __restrict c) {
  trace_call(0x803D88C8u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803D88C8
  c->r[0]=c->lr; // 803D88CC
  c->r[4]=0u+0x807B0000u; // 803D88D0
  W32(c->r[1]+0x00000024u,c->r[0]); // 803D88D4
  c->r[4]=c->r[4]+0x00006798u; // 803D88D8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 803D88DC
  c->r[31]=0u+0x00000000u; // 803D88E0
  W32(c->r[1]+0x00000018u,c->r[30]); // 803D88E4
  c->r[30]=c->r[4]+0x00001F30u; // 803D88E8
  W32(c->r[1]+0x00000014u,c->r[29]); // 803D88EC
  c->r[29]=c->r[3]|c->r[3]; // 803D88F0
L_803D88F4:;
  c->r[0]=R8(c->r[30]+0x00000076u); // 803D88F4
  c->r[0]=rotl(c->r[0],0)&0x00000080u; cr0(c,c->r[0]); // 803D88F8
  if (crb(c,2)) { goto L_803D891C; } // 803D88FC
  c->r[4]=c->r[29]|c->r[29]; // 803D8900
  c->r[3]=c->r[30]+0x0000001Cu; // 803D8904
  c->r[5]=0u+0x00000006u; // 803D8908
  c->lr=0x803D8910u; f_803AF7B8(c); // 803D890C
  cmps(c,0,(int32_t)c->r[3],0); // 803D8910
  if (!crb(c,2)) { goto L_803D891C; } // 803D8914
  goto L_803D8930; // 803D8918
L_803D891C:;
  c->r[31]=c->r[31]+0x00000001u; // 803D891C
  c->r[30]=c->r[30]+0x00000088u; // 803D8920
  cmps(c,0,(int32_t)c->r[31],16); // 803D8924
  if (crb(c,0)) { IRQCHK(c); goto L_803D88F4; } // 803D8928
  c->r[30]=0u+0x00000000u; // 803D892C
L_803D8930:;
  cmps(c,0,(int32_t)c->r[30],0); // 803D8930
  if (!crb(c,2)) { goto L_803D8940; } // 803D8934
  c->r[3]=0u+0x00000000u; // 803D8938
  goto L_803D8958; // 803D893C
L_803D8940:;
  c->r[0]=0u+0x00000000u; // 803D8940
  c->r[3]=c->r[29]|c->r[29]; // 803D8944
  W8(c->r[30]+0x00000076u,c->r[0]); // 803D8948
  c->r[4]=0u+0x00000000u; // 803D894C
  c->lr=0x803D8954u; f_803DA3D8(c); // 803D8950
  c->r[3]=0u+0x00000001u; // 803D8954
L_803D8958:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 803D8958
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 803D895C
  c->r[30]=R32(c->r[1]+0x00000018u); // 803D8960
  c->r[29]=R32(c->r[1]+0x00000014u); // 803D8964
  c->lr=c->r[0]; // 803D8968
  c->r[1]=c->r[1]+0x00000020u; // 803D896C
  return; // 803D8970
}

// BTM_SecReadDevName
void f_803D8974(Ctx* __restrict c) {
  trace_call(0x803D8974u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803D8974
  c->r[0]=c->lr; // 803D8978
  c->r[4]=0u+0x807B0000u; // 803D897C
  W32(c->r[1]+0x00000024u,c->r[0]); // 803D8980
  c->r[4]=c->r[4]+0x00006798u; // 803D8984
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 803D8988
  c->r[31]=0u+0x00000000u; // 803D898C
  W32(c->r[1]+0x00000018u,c->r[30]); // 803D8990
  c->r[30]=c->r[4]+0x00001F30u; // 803D8994
  W32(c->r[1]+0x00000014u,c->r[29]); // 803D8998
  c->r[29]=0u+0x00000000u; // 803D899C
  W32(c->r[1]+0x00000010u,c->r[28]); // 803D89A0
  c->r[28]=c->r[3]|c->r[3]; // 803D89A4
L_803D89A8:;
  c->r[0]=R8(c->r[30]+0x00000076u); // 803D89A8
  c->r[0]=rotl(c->r[0],0)&0x00000080u; cr0(c,c->r[0]); // 803D89AC
  if (crb(c,2)) { goto L_803D89D0; } // 803D89B0
  c->r[4]=c->r[28]|c->r[28]; // 803D89B4
  c->r[3]=c->r[30]+0x0000001Cu; // 803D89B8
  c->r[5]=0u+0x00000006u; // 803D89BC
  c->lr=0x803D89C4u; f_803AF7B8(c); // 803D89C0
  cmps(c,0,(int32_t)c->r[3],0); // 803D89C4
  if (!crb(c,2)) { goto L_803D89D0; } // 803D89C8
  goto L_803D89E4; // 803D89CC
L_803D89D0:;
  c->r[31]=c->r[31]+0x00000001u; // 803D89D0
  c->r[30]=c->r[30]+0x00000088u; // 803D89D4
  cmps(c,0,(int32_t)c->r[31],16); // 803D89D8
  if (crb(c,0)) { IRQCHK(c); goto L_803D89A8; } // 803D89DC
  c->r[30]=0u+0x00000000u; // 803D89E0
L_803D89E4:;
  cmps(c,0,(int32_t)c->r[30],0); // 803D89E4
  if (crb(c,2)) { goto L_803D89F0; } // 803D89E8
  c->r[29]=c->r[30]+0x00000035u; // 803D89EC
L_803D89F0:;
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 803D89F0
  c->r[3]=c->r[29]|c->r[29]; // 803D89F4
  c->r[30]=R32(c->r[1]+0x00000018u); // 803D89F8
  c->r[29]=R32(c->r[1]+0x00000014u); // 803D89FC
  c->r[28]=R32(c->r[1]+0x00000010u); // 803D8A00
  c->r[0]=R32(c->r[1]+0x00000024u); // 803D8A04
  c->lr=c->r[0]; // 803D8A08
  c->r[1]=c->r[1]+0x00000020u; // 803D8A0C
  return; // 803D8A10
}

// btm_sec_alloc_dev
void f_803D8A14(Ctx* __restrict c) {
  trace_call(0x803D8A14u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803D8A14
  c->r[0]=c->lr; // 803D8A18
  c->r[4]=0u+0x807B0000u; // 803D8A1C
  W32(c->r[1]+0x00000014u,c->r[0]); // 803D8A20
  c->r[0]=0u+0x00000010u; // 803D8A24
  c->r[4]=c->r[4]+0x00006798u; // 803D8A28
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 803D8A2C
  c->r[31]=0u+0x00000000u; // 803D8A30
  W32(c->r[1]+0x00000008u,c->r[30]); // 803D8A34
  c->r[30]=c->r[3]|c->r[3]; // 803D8A38
  c->r[3]=0u+0x00000000u; // 803D8A3C
  c->ctr=c->r[0]; // 803D8A40
L_803D8A44:;
  c->r[0]=R8(c->r[4]+0x00001FA6u); // 803D8A44
  c->r[0]=rotl(c->r[0],0)&0x00000080u; cr0(c,c->r[0]); // 803D8A48
  if (!crb(c,2)) { goto L_803D8A68; } // 803D8A4C
  c->r[0]=(uint32_t)((int32_t)c->r[3]*(int32_t)136); // 803D8A50
  c->r[3]=0u+0x807B0000u; // 803D8A54
  c->r[3]=c->r[3]+0x00006798u; // 803D8A58
  c->r[3]=c->r[3]+c->r[0]; // 803D8A5C
  c->r[31]=c->r[3]+0x00001F30u; // 803D8A60
  goto L_803D8A74; // 803D8A64
L_803D8A68:;
  c->r[4]=c->r[4]+0x00000088u; // 803D8A68
  c->r[3]=c->r[3]+0x00000001u; // 803D8A6C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_803D8A44; } // 803D8A70
L_803D8A74:;
  cmps(c,0,(int32_t)c->r[31],0); // 803D8A74
  if (!crb(c,2)) { goto L_803D8A84; } // 803D8A78
  c->lr=0x803D8A80u; f_803D8C74(c); // 803D8A7C
  c->r[31]=c->r[3]|c->r[3]; // 803D8A80
L_803D8A84:;
  c->r[3]=c->r[31]|c->r[31]; // 803D8A84
  c->r[4]=0u+0x00000000u; // 803D8A88
  c->r[5]=0u+0x00000088u; // 803D8A8C
  c->lr=0x803D8A94u; f_800043EC(c); // 803D8A90
  c->r[3]=0u+0x00000080u; // 803D8A94
  c->r[0]=0u+0x00000000u; // 803D8A98
  W8(c->r[31]+0x00000076u,c->r[3]); // 803D8A9C
  c->r[3]=c->r[30]|c->r[30]; // 803D8AA0
  W8(c->r[31]+0x00000085u,c->r[0]); // 803D8AA4
  c->lr=0x803D8AACu; f_803DB2F8(c); // 803D8AA8
  cmps(c,0,(int32_t)c->r[3],0); // 803D8AAC
  c->r[4]=c->r[3]|c->r[3]; // 803D8AB0
  if (crb(c,2)) { goto L_803D8ACC; } // 803D8AB4
  c->r[3]=c->r[31]+0x00000022u; // 803D8AB8
  c->r[4]=c->r[4]+0x00000008u; // 803D8ABC
  c->r[5]=0u+0x00000003u; // 803D8AC0
  c->lr=0x803D8AC8u; f_802DC484(c); // 803D8AC4
  goto L_803D8AE4; // 803D8AC8
L_803D8ACC:;
  c->r[4]=0u+0x807B0000u; // 803D8ACC
  c->r[3]=c->r[31]+0x00000022u; // 803D8AD0
  c->r[4]=c->r[4]+0x00006798u; // 803D8AD4
  c->r[5]=0u+0x00000003u; // 803D8AD8
  c->r[4]=c->r[4]+0x000027BAu; // 803D8ADC
  c->lr=0x803D8AE4u; f_802DC484(c); // 803D8AE0
L_803D8AE4:;
  c->r[4]=c->r[30]|c->r[30]; // 803D8AE4
  c->r[3]=c->r[31]+0x0000001Cu; // 803D8AE8
  c->r[5]=0u+0x00000006u; // 803D8AEC
  c->lr=0x803D8AF4u; f_802DC484(c); // 803D8AF0
  c->r[3]=c->r[30]|c->r[30]; // 803D8AF4
  c->lr=0x803D8AFCu; f_803D7974(c); // 803D8AF8
  W16(c->r[31]+0x00000018u,c->r[3]); // 803D8AFC
  c->r[5]=0u+0x807B0000u; // 803D8B00
  c->r[5]=c->r[5]+0x00006798u; // 803D8B04
  c->r[3]=c->r[31]|c->r[31]; // 803D8B08
  c->r[4]=R32(c->r[5]+0x00001974u); // 803D8B0C
  W32(c->r[31]+0x0000000Cu,c->r[4]); // 803D8B10
  c->r[0]=c->r[4]+0x00000001u; // 803D8B14
  W32(c->r[5]+0x00001974u,c->r[0]); // 803D8B18
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 803D8B1C
  c->r[30]=R32(c->r[1]+0x00000008u); // 803D8B20
  c->r[0]=R32(c->r[1]+0x00000014u); // 803D8B24
  c->lr=c->r[0]; // 803D8B28
  c->r[1]=c->r[1]+0x00000010u; // 803D8B2C
  return; // 803D8B30
}

// btm_find_dev_by_handle
void f_803D8B34(Ctx* __restrict c) {
  trace_call(0x803D8B34u);
  c->r[4]=0u+0x807B0000u; // 803D8B34
  c->r[0]=0u+0x00000004u; // 803D8B38
  c->r[4]=c->r[4]+0x00006798u; // 803D8B3C
  c->r[5]=0u+0x00000000u; // 803D8B40
  c->r[4]=c->r[4]+0x00001F30u; // 803D8B44
  c->ctr=c->r[0]; // 803D8B48
L_803D8B4C:;
  c->r[0]=R8(c->r[4]+0x00000076u); // 803D8B4C
  c->r[0]=rotl(c->r[0],0)&0x00000080u; cr0(c,c->r[0]); // 803D8B50
  if (crb(c,2)) { goto L_803D8B6C; } // 803D8B54
  c->r[0]=R16(c->r[4]+0x00000018u); // 803D8B58
  cmpu(c,0,c->r[0],c->r[3]); // 803D8B5C
  if (!crb(c,2)) { goto L_803D8B6C; } // 803D8B60
  c->r[3]=c->r[4]|c->r[4]; // 803D8B64
  return; // 803D8B68
L_803D8B6C:;
  c->r[0]=R8(c->r[4]+0x000000FEu); // 803D8B6C
  c->r[4]=c->r[4]+0x00000088u; // 803D8B70
  c->r[0]=rotl(c->r[0],0)&0x00000080u; cr0(c,c->r[0]); // 803D8B74
  if (crb(c,2)) { goto L_803D8B90; } // 803D8B78
  c->r[0]=R16(c->r[4]+0x00000018u); // 803D8B7C
  cmpu(c,0,c->r[0],c->r[3]); // 803D8B80
  if (!crb(c,2)) { goto L_803D8B90; } // 803D8B84
  c->r[3]=c->r[4]|c->r[4]; // 803D8B88
  return; // 803D8B8C
L_803D8B90:;
  c->r[0]=R8(c->r[4]+0x000000FEu); // 803D8B90
  c->r[4]=c->r[4]+0x00000088u; // 803D8B94
  c->r[0]=rotl(c->r[0],0)&0x00000080u; cr0(c,c->r[0]); // 803D8B98
  if (crb(c,2)) { goto L_803D8BB4; } // 803D8B9C
  c->r[0]=R16(c->r[4]+0x00000018u); // 803D8BA0
  cmpu(c,0,c->r[0],c->r[3]); // 803D8BA4
  if (!crb(c,2)) { goto L_803D8BB4; } // 803D8BA8
  c->r[3]=c->r[4]|c->r[4]; // 803D8BAC
  return; // 803D8BB0
L_803D8BB4:;
  c->r[0]=R8(c->r[4]+0x000000FEu); // 803D8BB4
  c->r[4]=c->r[4]+0x00000088u; // 803D8BB8
  c->r[0]=rotl(c->r[0],0)&0x00000080u; cr0(c,c->r[0]); // 803D8BBC
  if (crb(c,2)) { goto L_803D8BD8; } // 803D8BC0
  c->r[0]=R16(c->r[4]+0x00000018u); // 803D8BC4
  cmpu(c,0,c->r[0],c->r[3]); // 803D8BC8
  if (!crb(c,2)) { goto L_803D8BD8; } // 803D8BCC
  c->r[3]=c->r[4]|c->r[4]; // 803D8BD0
  return; // 803D8BD4
L_803D8BD8:;
  c->r[5]=c->r[5]+0x00000003u; // 803D8BD8
  c->r[4]=c->r[4]+0x00000088u; // 803D8BDC
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_803D8B4C; } // 803D8BE0
  c->r[3]=0u+0x00000000u; // 803D8BE4
  return; // 803D8BE8
}

// btm_find_dev
void f_803D8BEC(Ctx* __restrict c) {
  trace_call(0x803D8BECu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803D8BEC
  c->r[0]=c->lr; // 803D8BF0
  c->r[4]=0u+0x807B0000u; // 803D8BF4
  W32(c->r[1]+0x00000024u,c->r[0]); // 803D8BF8
  c->r[4]=c->r[4]+0x00006798u; // 803D8BFC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 803D8C00
  c->r[31]=c->r[4]+0x00001F30u; // 803D8C04
  W32(c->r[1]+0x00000018u,c->r[30]); // 803D8C08
  c->r[30]=0u+0x00000000u; // 803D8C0C
  W32(c->r[1]+0x00000014u,c->r[29]); // 803D8C10
  c->r[29]=c->r[3]|c->r[3]; // 803D8C14
L_803D8C18:;
  c->r[0]=R8(c->r[31]+0x00000076u); // 803D8C18
  c->r[0]=rotl(c->r[0],0)&0x00000080u; cr0(c,c->r[0]); // 803D8C1C
  if (crb(c,2)) { goto L_803D8C44; } // 803D8C20
  c->r[4]=c->r[29]|c->r[29]; // 803D8C24
  c->r[3]=c->r[31]+0x0000001Cu; // 803D8C28
  c->r[5]=0u+0x00000006u; // 803D8C2C
  c->lr=0x803D8C34u; f_803AF7B8(c); // 803D8C30
  cmps(c,0,(int32_t)c->r[3],0); // 803D8C34
  if (!crb(c,2)) { goto L_803D8C44; } // 803D8C38
  c->r[3]=c->r[31]|c->r[31]; // 803D8C3C
  goto L_803D8C58; // 803D8C40
L_803D8C44:;
  c->r[30]=c->r[30]+0x00000001u; // 803D8C44
  c->r[31]=c->r[31]+0x00000088u; // 803D8C48
  cmps(c,0,(int32_t)c->r[30],16); // 803D8C4C
  if (crb(c,0)) { IRQCHK(c); goto L_803D8C18; } // 803D8C50
  c->r[3]=0u+0x00000000u; // 803D8C54
L_803D8C58:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 803D8C58
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 803D8C5C
  c->r[30]=R32(c->r[1]+0x00000018u); // 803D8C60
  c->r[29]=R32(c->r[1]+0x00000014u); // 803D8C64
  c->lr=c->r[0]; // 803D8C68
  c->r[1]=c->r[1]+0x00000020u; // 803D8C6C
  return; // 803D8C70
}

// btm_find_oldest_dev
void f_803D8C74(Ctx* __restrict c) {
  trace_call(0x803D8C74u);
  c->r[3]=0u+0x807B0000u; // 803D8C74
  c->r[0]=0u+0x00000004u; // 803D8C78
  c->r[3]=c->r[3]+0x00006798u; // 803D8C7C
  c->r[6]=0u+0xFFFFFFFFu; // 803D8C80
  c->r[5]=c->r[3]+0x00001F30u; // 803D8C84
  c->r[7]=0u+0x00000000u; // 803D8C88
  c->r[3]=c->r[5]|c->r[5]; // 803D8C8C
  c->ctr=c->r[0]; // 803D8C90
L_803D8C94:;
  c->r[4]=R8(c->r[5]+0x00000076u); // 803D8C94
  c->r[0]=rotl(c->r[4],0)&0x00000080u; cr0(c,c->r[0]); // 803D8C98
  if (crb(c,2)) { goto L_803D8CBC; } // 803D8C9C
  c->r[0]=rotl(c->r[4],0)&0x00000010u; cr0(c,c->r[0]); // 803D8CA0
  if (!crb(c,2)) { goto L_803D8CBC; } // 803D8CA4
  c->r[0]=R32(c->r[5]+0x0000000Cu); // 803D8CA8
  cmpu(c,0,c->r[0],c->r[6]); // 803D8CAC
  if (!crb(c,0)) { goto L_803D8CBC; } // 803D8CB0
  c->r[3]=c->r[5]|c->r[5]; // 803D8CB4
  c->r[6]=c->r[0]|c->r[0]; // 803D8CB8
L_803D8CBC:;
  c->r[4]=R8(c->r[5]+0x000000FEu); // 803D8CBC
  c->r[5]=c->r[5]+0x00000088u; // 803D8CC0
  c->r[0]=rotl(c->r[4],0)&0x00000080u; cr0(c,c->r[0]); // 803D8CC4
  if (crb(c,2)) { goto L_803D8CE8; } // 803D8CC8
  c->r[0]=rotl(c->r[4],0)&0x00000010u; cr0(c,c->r[0]); // 803D8CCC
  if (!crb(c,2)) { goto L_803D8CE8; } // 803D8CD0
  c->r[0]=R32(c->r[5]+0x0000000Cu); // 803D8CD4
  cmpu(c,0,c->r[0],c->r[6]); // 803D8CD8
  if (!crb(c,0)) { goto L_803D8CE8; } // 803D8CDC
  c->r[3]=c->r[5]|c->r[5]; // 803D8CE0
  c->r[6]=c->r[0]|c->r[0]; // 803D8CE4
L_803D8CE8:;
  c->r[4]=R8(c->r[5]+0x000000FEu); // 803D8CE8
  c->r[5]=c->r[5]+0x00000088u; // 803D8CEC
  c->r[0]=rotl(c->r[4],0)&0x00000080u; cr0(c,c->r[0]); // 803D8CF0
  if (crb(c,2)) { goto L_803D8D14; } // 803D8CF4
  c->r[0]=rotl(c->r[4],0)&0x00000010u; cr0(c,c->r[0]); // 803D8CF8
  if (!crb(c,2)) { goto L_803D8D14; } // 803D8CFC
  c->r[0]=R32(c->r[5]+0x0000000Cu); // 803D8D00
  cmpu(c,0,c->r[0],c->r[6]); // 803D8D04
  if (!crb(c,0)) { goto L_803D8D14; } // 803D8D08
  c->r[3]=c->r[5]|c->r[5]; // 803D8D0C
  c->r[6]=c->r[0]|c->r[0]; // 803D8D10
L_803D8D14:;
  c->r[4]=R8(c->r[5]+0x000000FEu); // 803D8D14
  c->r[5]=c->r[5]+0x00000088u; // 803D8D18
  c->r[0]=rotl(c->r[4],0)&0x00000080u; cr0(c,c->r[0]); // 803D8D1C
  if (crb(c,2)) { goto L_803D8D40; } // 803D8D20
  c->r[0]=rotl(c->r[4],0)&0x00000010u; cr0(c,c->r[0]); // 803D8D24
  if (!crb(c,2)) { goto L_803D8D40; } // 803D8D28
  c->r[0]=R32(c->r[5]+0x0000000Cu); // 803D8D2C
  cmpu(c,0,c->r[0],c->r[6]); // 803D8D30
  if (!crb(c,0)) { goto L_803D8D40; } // 803D8D34
  c->r[3]=c->r[5]|c->r[5]; // 803D8D38
  c->r[6]=c->r[0]|c->r[0]; // 803D8D3C
L_803D8D40:;
  c->r[7]=c->r[7]+0x00000003u; // 803D8D40
  c->r[5]=c->r[5]+0x00000088u; // 803D8D44
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_803D8C94; } // 803D8D48
  c->r[0]=c->r[6]+0x00010000u; // 803D8D4C
  cmpu(c,0,c->r[0],0x0000FFFFu); // 803D8D50
  if (!crb(c,2)) return; // 803D8D54
  c->r[4]=0u+0x807B0000u; // 803D8D58
  c->r[0]=0u+0x00000004u; // 803D8D5C
  c->r[4]=c->r[4]+0x00006798u; // 803D8D60
  c->r[5]=0u+0x00000000u; // 803D8D64
  c->r[4]=c->r[4]+0x00001F30u; // 803D8D68
  c->ctr=c->r[0]; // 803D8D6C
L_803D8D70:;
  c->r[0]=R8(c->r[4]+0x00000076u); // 803D8D70
  c->r[0]=rotl(c->r[0],0)&0x00000080u; cr0(c,c->r[0]); // 803D8D74
  if (crb(c,2)) { goto L_803D8D90; } // 803D8D78
  c->r[0]=R32(c->r[4]+0x0000000Cu); // 803D8D7C
  cmpu(c,0,c->r[0],c->r[6]); // 803D8D80
  if (!crb(c,0)) { goto L_803D8D90; } // 803D8D84
  c->r[3]=c->r[4]|c->r[4]; // 803D8D88
  c->r[6]=c->r[0]|c->r[0]; // 803D8D8C
L_803D8D90:;
  c->r[0]=R8(c->r[4]+0x000000FEu); // 803D8D90
  c->r[4]=c->r[4]+0x00000088u; // 803D8D94
  c->r[0]=rotl(c->r[0],0)&0x00000080u; cr0(c,c->r[0]); // 803D8D98
  if (crb(c,2)) { goto L_803D8DB4; } // 803D8D9C
  c->r[0]=R32(c->r[4]+0x0000000Cu); // 803D8DA0
  cmpu(c,0,c->r[0],c->r[6]); // 803D8DA4
  if (!crb(c,0)) { goto L_803D8DB4; } // 803D8DA8
  c->r[3]=c->r[4]|c->r[4]; // 803D8DAC
  c->r[6]=c->r[0]|c->r[0]; // 803D8DB0
L_803D8DB4:;
  c->r[0]=R8(c->r[4]+0x000000FEu); // 803D8DB4
  c->r[4]=c->r[4]+0x00000088u; // 803D8DB8
  c->r[0]=rotl(c->r[0],0)&0x00000080u; cr0(c,c->r[0]); // 803D8DBC
  if (crb(c,2)) { goto L_803D8DD8; } // 803D8DC0
  c->r[0]=R32(c->r[4]+0x0000000Cu); // 803D8DC4
  cmpu(c,0,c->r[0],c->r[6]); // 803D8DC8
  if (!crb(c,0)) { goto L_803D8DD8; } // 803D8DCC
  c->r[3]=c->r[4]|c->r[4]; // 803D8DD0
  c->r[6]=c->r[0]|c->r[0]; // 803D8DD4
L_803D8DD8:;
  c->r[0]=R8(c->r[4]+0x000000FEu); // 803D8DD8
  c->r[4]=c->r[4]+0x00000088u; // 803D8DDC
  c->r[0]=rotl(c->r[0],0)&0x00000080u; cr0(c,c->r[0]); // 803D8DE0
  if (crb(c,2)) { goto L_803D8DFC; } // 803D8DE4
  c->r[0]=R32(c->r[4]+0x0000000Cu); // 803D8DE8
  cmpu(c,0,c->r[0],c->r[6]); // 803D8DEC
  if (!crb(c,0)) { goto L_803D8DFC; } // 803D8DF0
  c->r[3]=c->r[4]|c->r[4]; // 803D8DF4
  c->r[6]=c->r[0]|c->r[0]; // 803D8DF8
L_803D8DFC:;
  c->r[5]=c->r[5]+0x00000003u; // 803D8DFC
  c->r[4]=c->r[4]+0x00000088u; // 803D8E00
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_803D8D70; } // 803D8E04
  return; // 803D8E08
}

// btm_dev_init
void f_803D8E0C(Ctx* __restrict c) {
  trace_call(0x803D8E0Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803D8E0C
  c->r[0]=c->lr; // 803D8E10
  c->r[4]=c->r[13]+0xFFFFA0E0u; // 803D8E14
  c->r[5]=0u+0x00000003u; // 803D8E18
  W32(c->r[1]+0x00000014u,c->r[0]); // 803D8E1C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 803D8E20
  c->r[31]=0u+0x807B0000u; // 803D8E24
  c->r[31]=c->r[31]+0x00006798u; // 803D8E28
  c->r[3]=c->r[31]+0x00000648u; // 803D8E2C
  c->lr=0x803D8E34u; f_802DC484(c); // 803D8E30
  c->r[3]=0u+0x00010000u; // 803D8E34
  c->r[7]=0u+0x000000FFu; // 803D8E38
  c->r[9]=c->r[3]+0xFFFFCC18u; // 803D8E3C
  c->r[12]=0u+0x00000001u; // 803D8E40
  c->r[3]=0u+0x00001400u; // 803D8E44
  c->r[11]=0u+0x00000002u; // 803D8E48
  c->r[10]=0u+0x00000004u; // 803D8E4C
  c->r[8]=0u+0x0000003Fu; // 803D8E50
  c->r[6]=0u+0x00000000u; // 803D8E54
  c->r[0]=0u+0x00000005u; // 803D8E58
  W16(c->r[31]+0x0000064Cu,c->r[3]); // 803D8E5C
  c->r[3]=c->r[31]+0x00000574u; // 803D8E60
  c->r[4]=0u+0x00000001u; // 803D8E64
  c->r[5]=0u+0x00000004u; // 803D8E68
  W32(c->r[31]+0x00000584u,c->r[12]); // 803D8E6C
  W32(c->r[31]+0x000005A0u,c->r[11]); // 803D8E70
  W32(c->r[31]+0x000005BCu,c->r[10]); // 803D8E74
  W16(c->r[31]+0x00000654u,c->r[9]); // 803D8E78
  W16(c->r[31]+0x00000656u,c->r[8]); // 803D8E7C
  W8(c->r[31]+0x000027BDu,c->r[7]); // 803D8E80
  W8(c->r[31]+0x000027BEu,c->r[7]); // 803D8E84
  W8(c->r[31]+0x0000064Eu,c->r[6]); // 803D8E88
  W8(c->r[31]+0x0000064Fu,c->r[0]); // 803D8E8C
  c->lr=0x803D8E94u; f_803D0AAC(c); // 803D8E90
  c->lr=0x803D8E98u; f_803E483C(c); // 803D8E94
  c->r[0]=R32(c->r[1]+0x00000014u); // 803D8E98
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 803D8E9C
  c->lr=c->r[0]; // 803D8EA0
  c->r[1]=c->r[1]+0x00000010u; // 803D8EA4
  return; // 803D8EA8
}

// btm_db_reset
void f_803D8EAC(Ctx* __restrict c) {
  trace_call(0x803D8EACu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803D8EAC
  c->r[0]=c->lr; // 803D8EB0
  W32(c->r[1]+0x00000014u,c->r[0]); // 803D8EB4
  c->r[0]=0u+0x0000000Cu; // 803D8EB8
  W8(c->r[1]+0x00000008u,c->r[0]); // 803D8EBC
  c->lr=0x803D8EC4u; f_803DB67C(c); // 803D8EC0
  c->lr=0x803D8EC8u; f_803DA80C(c); // 803D8EC4
  c->r[3]=0u+0x807B0000u; // 803D8EC8
  c->r[3]=c->r[3]+0x00006798u; // 803D8ECC
  c->r[12]=R32(c->r[3]+0x000005A8u); // 803D8ED0
  cmps(c,0,(int32_t)c->r[12],0); // 803D8ED4
  if (crb(c,2)) { goto L_803D8EF4; } // 803D8ED8
  c->r[0]=0u+0x00000000u; // 803D8EDC
  W32(c->r[3]+0x000005A8u,c->r[0]); // 803D8EE0
  if (crb(c,2)) { goto L_803D8EF4; } // 803D8EE4
  c->r[3]=0u+0x00000000u; // 803D8EE8
  c->ctr=c->r[12]; // 803D8EEC
  if (true) { c->lr=0x803D8EF4u; dispatch(c,c->ctr); } // 803D8EF0
L_803D8EF4:;
  c->r[3]=0u+0x807B0000u; // 803D8EF4
  c->r[3]=c->r[3]+0x00006798u; // 803D8EF8
  c->r[12]=R32(c->r[3]+0x000005C4u); // 803D8EFC
  cmps(c,0,(int32_t)c->r[12],0); // 803D8F00
  if (crb(c,2)) { goto L_803D8F20; } // 803D8F04
  c->r[0]=0u+0x00000000u; // 803D8F08
  W32(c->r[3]+0x000005C4u,c->r[0]); // 803D8F0C
  if (crb(c,2)) { goto L_803D8F20; } // 803D8F10
  c->r[3]=c->r[1]+0x00000008u; // 803D8F14
  c->ctr=c->r[12]; // 803D8F18
  if (true) { c->lr=0x803D8F20u; dispatch(c,c->ctr); } // 803D8F1C
L_803D8F20:;
  c->r[3]=0u+0x807B0000u; // 803D8F20
  c->r[3]=c->r[3]+0x00006798u; // 803D8F24
  c->r[12]=R32(c->r[3]+0x000005E0u); // 803D8F28
  cmps(c,0,(int32_t)c->r[12],0); // 803D8F2C
  if (crb(c,2)) { goto L_803D8F4C; } // 803D8F30
  c->r[0]=0u+0x00000000u; // 803D8F34
  W32(c->r[3]+0x000005E0u,c->r[0]); // 803D8F38
  if (crb(c,2)) { goto L_803D8F4C; } // 803D8F3C
  c->r[3]=c->r[1]+0x00000008u; // 803D8F40
  c->ctr=c->r[12]; // 803D8F44
  if (true) { c->lr=0x803D8F4Cu; dispatch(c,c->ctr); } // 803D8F48
L_803D8F4C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 803D8F4C
  c->lr=c->r[0]; // 803D8F50
  c->r[1]=c->r[1]+0x00000010u; // 803D8F54
  return; // 803D8F58
}

// BTM_DeviceReset
void f_803D8F5C(Ctx* __restrict c) {
  trace_call(0x803D8F5Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803D8F5C
  c->r[0]=c->lr; // 803D8F60
  c->r[4]=0u+0x807B0000u; // 803D8F64
  W32(c->r[1]+0x00000014u,c->r[0]); // 803D8F68
  c->r[4]=c->r[4]+0x00006798u; // 803D8F6C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 803D8F70
  W32(c->r[1]+0x00000008u,c->r[30]); // 803D8F74
  c->r[30]=c->r[3]|c->r[3]; // 803D8F78
  c->r[0]=R32(c->r[4]+0x0000058Cu); // 803D8F7C
  cmps(c,0,(int32_t)c->r[0],0); // 803D8F80
  if (crb(c,2)) { goto L_803D8F90; } // 803D8F84
  cmpu(c,0,c->r[0],c->r[3]); // 803D8F88
  if (!crb(c,2)) { goto L_803D8FE0; } // 803D8F8C
L_803D8F90:;
  c->lr=0x803D8F94u; f_803D6E74(c); // 803D8F90
  c->lr=0x803D8F98u; f_803D8EAC(c); // 803D8F94
  c->r[31]=0u+0x807B0000u; // 803D8F98
  c->r[6]=0u+0x00000000u; // 803D8F9C
  c->r[31]=c->r[31]+0x00006798u; // 803D8FA0
  c->r[0]=0u+0x00000005u; // 803D8FA4
  W32(c->r[31]+0x0000058Cu,c->r[30]); // 803D8FA8
  c->r[3]=c->r[31]+0x00000574u; // 803D8FAC
  c->r[4]=0u+0x00000001u; // 803D8FB0
  c->r[5]=0u+0x00000004u; // 803D8FB4
  W8(c->r[31]+0x0000064Eu,c->r[6]); // 803D8FB8
  W8(c->r[31]+0x0000064Fu,c->r[0]); // 803D8FBC
  c->lr=0x803D8FC4u; f_803D0AAC(c); // 803D8FC0
  c->lr=0x803D8FC8u; f_803E483C(c); // 803D8FC4
  c->r[12]=R32(c->r[31]+0x00000568u); // 803D8FC8
  cmps(c,0,(int32_t)c->r[12],0); // 803D8FCC
  if (crb(c,2)) { goto L_803D8FE0; } // 803D8FD0
  c->r[3]=0u+0x00000001u; // 803D8FD4
  c->ctr=c->r[12]; // 803D8FD8
  if (true) { c->lr=0x803D8FE0u; dispatch(c,c->ctr); } // 803D8FDC
L_803D8FE0:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 803D8FE0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 803D8FE4
  c->r[30]=R32(c->r[1]+0x00000008u); // 803D8FE8
  c->lr=c->r[0]; // 803D8FEC
  c->r[1]=c->r[1]+0x00000010u; // 803D8FF0
  return; // 803D8FF4
}

// BTM_SendHciReset
void f_803D8FF8(Ctx* __restrict c) {
  trace_call(0x803D8FF8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803D8FF8
  c->r[0]=c->lr; // 803D8FFC
  c->r[4]=0u+0x807B0000u; // 803D9000
  W32(c->r[1]+0x00000014u,c->r[0]); // 803D9004
  c->r[4]=c->r[4]+0x00006798u; // 803D9008
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 803D900C
  W32(c->r[1]+0x00000008u,c->r[30]); // 803D9010
  c->r[30]=c->r[3]|c->r[3]; // 803D9014
  c->r[0]=R32(c->r[4]+0x0000058Cu); // 803D9018
  cmps(c,0,(int32_t)c->r[0],0); // 803D901C
  if (crb(c,2)) { goto L_803D9038; } // 803D9020
  cmpu(c,0,c->r[0],c->r[3]); // 803D9024
  if (crb(c,2)) { goto L_803D9038; } // 803D9028
  c->r[0]=R32(c->r[4]+0x00000620u); // 803D902C
  cmpu(c,0,c->r[0],c->r[3]); // 803D9030
  if (!crb(c,2)) { goto L_803D9088; } // 803D9034
L_803D9038:;
  c->lr=0x803D903Cu; f_803D6E74(c); // 803D9038
  c->lr=0x803D9040u; f_803D8EAC(c); // 803D903C
  c->r[31]=0u+0x807B0000u; // 803D9040
  c->r[6]=0u+0x00000000u; // 803D9044
  c->r[31]=c->r[31]+0x00006798u; // 803D9048
  c->r[0]=0u+0x00000005u; // 803D904C
  W32(c->r[31]+0x00000620u,c->r[30]); // 803D9050
  c->r[3]=c->r[31]+0x00000574u; // 803D9054
  c->r[4]=0u+0x00000001u; // 803D9058
  c->r[5]=0u+0x00000004u; // 803D905C
  W8(c->r[31]+0x0000064Eu,c->r[6]); // 803D9060
  W8(c->r[31]+0x0000064Fu,c->r[0]); // 803D9064
  c->lr=0x803D906Cu; f_803D0AAC(c); // 803D9068
  c->lr=0x803D9070u; f_803E483C(c); // 803D906C
  c->r[12]=R32(c->r[31]+0x00000568u); // 803D9070
  cmps(c,0,(int32_t)c->r[12],0); // 803D9074
  if (crb(c,2)) { goto L_803D9088; } // 803D9078
  c->r[3]=0u+0x00000001u; // 803D907C
  c->ctr=c->r[12]; // 803D9080
  if (true) { c->lr=0x803D9088u; dispatch(c,c->ctr); } // 803D9084
L_803D9088:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 803D9088
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 803D908C
  c->r[30]=R32(c->r[1]+0x00000008u); // 803D9090
  c->lr=c->r[0]; // 803D9094
  c->r[1]=c->r[1]+0x00000010u; // 803D9098
  return; // 803D909C
}

// BTM_IsDeviceUp
void f_803D90A0(Ctx* __restrict c) {
  trace_call(0x803D90A0u);
  c->r[3]=0u+0x807B0000u; // 803D90A0
  c->r[3]=c->r[3]+0x00006798u; // 803D90A4
  c->r[3]=R8(c->r[3]+0x0000064Eu); // 803D90A8
  c->r[0]=c->r[3]+0xFFFFFFFBu; // 803D90AC
  c->r[0]=cntlz(c->r[0]); // 803D90B0
  c->r[3]=rotl(c->r[0],27)&0x000000FFu; // 803D90B4
  return; // 803D90B8
}

// BTM_SetAfhChannels
void f_803D90BC(Ctx* __restrict c) {
  trace_call(0x803D90BCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803D90BC
  c->r[0]=c->lr; // 803D90C0
  c->r[7]=0u+0x807B0000u; // 803D90C4
  W32(c->r[1]+0x00000014u,c->r[0]); // 803D90C8
  c->r[7]=c->r[7]+0x00006798u; // 803D90CC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 803D90D0
  c->r[31]=c->r[4]|c->r[4]; // 803D90D4
  W32(c->r[1]+0x00000008u,c->r[30]); // 803D90D8
  c->r[30]=c->r[3]|c->r[3]; // 803D90DC
  c->r[0]=R8(c->r[7]+0x000027C0u); // 803D90E0
  cmpu(c,0,c->r[0],0x00000003u); // 803D90E4
  if (crb(c,0)) { goto L_803D9110; } // 803D90E8
  c->r[3]=0u+0x000D0000u; // 803D90EC
  c->r[4]=0u+0x80710000u; // 803D90F0
  c->r[6]=R8(c->r[7]+0x000027BDu); // 803D90F4
  c->r[5]=c->r[30]|c->r[30]; // 803D90F8
  c->r[8]=R8(c->r[7]+0x000027BEu); // 803D90FC
  c->r[7]=c->r[31]|c->r[31]; // 803D9100
  c->r[3]=c->r[3]+0x00000002u; // 803D9104
  c->r[4]=c->r[4]+0xFFFFBB58u; // 803D9108
  c->lr=0x803D9110u; f_803D0540(c); // 803D910C
L_803D9110:;
  c->r[3]=0u+0x807B0000u; // 803D9110
  c->r[3]=c->r[3]+0x00006798u; // 803D9114
  c->r[4]=R8(c->r[3]+0x00000645u); // 803D9118
  c->r[0]=rotl(c->r[4],0)&0x00000008u; cr0(c,c->r[0]); // 803D911C
  if (!crb(c,2)) { goto L_803D9140; } // 803D9120
  c->r[0]=R8(c->r[3]+0x00000644u); // 803D9124
  c->r[0]=rotl(c->r[0],0)&0x00000010u; cr0(c,c->r[0]); // 803D9128
  if (!crb(c,2)) { goto L_803D9140; } // 803D912C
  c->r[0]=rotl(c->r[4],0)&0x00000010u; cr0(c,c->r[0]); // 803D9130
  if (!crb(c,2)) { goto L_803D9140; } // 803D9134
  c->r[3]=0u+0x00000004u; // 803D9138
  goto L_803D9194; // 803D913C
L_803D9140:;
  c->r[3]=0u+0x807B0000u; // 803D9140
  c->r[3]=c->r[3]+0x00006798u; // 803D9144
  c->r[0]=R8(c->r[3]+0x000027BDu); // 803D9148
  cmpu(c,0,c->r[0],c->r[30]); // 803D914C
  if (!crb(c,2)) { goto L_803D9160; } // 803D9150
  c->r[0]=R8(c->r[3]+0x000027BEu); // 803D9154
  cmpu(c,0,c->r[0],c->r[31]); // 803D9158
  if (crb(c,2)) { goto L_803D9190; } // 803D915C
L_803D9160:;
  c->r[3]=c->r[30]|c->r[30]; // 803D9160
  c->r[4]=c->r[31]|c->r[31]; // 803D9164
  c->lr=0x803D916Cu; f_803E5530(c); // 803D9168
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 803D916C
  if (crb(c,2)) { goto L_803D9188; } // 803D9170
  c->r[3]=0u+0x807B0000u; // 803D9174
  c->r[3]=c->r[3]+0x00006798u; // 803D9178
  W8(c->r[3]+0x000027BDu,c->r[30]); // 803D917C
  W8(c->r[3]+0x000027BEu,c->r[31]); // 803D9180
  goto L_803D9190; // 803D9184
L_803D9188:;
  c->r[3]=0u+0x00000003u; // 803D9188
  goto L_803D9194; // 803D918C
L_803D9190:;
  c->r[3]=0u+0x00000000u; // 803D9190
L_803D9194:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 803D9194
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 803D9198
  c->r[30]=R32(c->r[1]+0x00000008u); // 803D919C
  c->lr=c->r[0]; // 803D91A0
  c->r[1]=c->r[1]+0x00000010u; // 803D91A4
  return; // 803D91A8
}

// btm_dev_timeout
void f_803D91AC(Ctx* __restrict c) {
  trace_call(0x803D91ACu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803D91AC
  c->r[0]=c->lr; // 803D91B0
  W32(c->r[1]+0x00000014u,c->r[0]); // 803D91B4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 803D91B8
  W32(c->r[1]+0x00000008u,c->r[30]); // 803D91BC
  c->r[0]=R32(c->r[3]+0x00000010u); // 803D91C0
  cmpu(c,0,c->r[0],0x00000001u); // 803D91C4
  if (!crb(c,2)) { goto L_803D93FC; } // 803D91C8
  c->r[6]=0u+0x807B0000u; // 803D91CC
  c->r[6]=c->r[6]+0x00006798u; // 803D91D0
  c->r[0]=R8(c->r[6]+0x0000064Eu); // 803D91D4
  cmps(c,0,(int32_t)c->r[0],2); // 803D91D8
  if (crb(c,2)) { goto L_803D933C; } // 803D91DC
  if (!crb(c,0)) { goto L_803D91F4; } // 803D91E0
  cmps(c,0,(int32_t)c->r[0],0); // 803D91E4
  if (crb(c,2)) { goto L_803D9200; } // 803D91E8
  if (!crb(c,0)) { goto L_803D9228; } // 803D91EC
  goto L_803D942C; // 803D91F0
L_803D91F4:;
  cmps(c,0,(int32_t)c->r[0],4); // 803D91F4
  if (!crb(c,0)) { goto L_803D942C; } // 803D91F8
  goto L_803D93A0; // 803D91FC
L_803D9200:;
  c->r[3]=0u+0x00000000u; // 803D9200
  c->r[0]=0u+0x00000005u; // 803D9204
  W8(c->r[6]+0x0000064Eu,c->r[3]); // 803D9208
  c->r[3]=c->r[6]+0x00000574u; // 803D920C
  c->r[4]=0u+0x00000001u; // 803D9210
  c->r[5]=0u+0x00000004u; // 803D9214
  W8(c->r[6]+0x0000064Fu,c->r[0]); // 803D9218
  c->lr=0x803D9220u; f_803D0AAC(c); // 803D921C
  c->lr=0x803D9224u; f_803E483C(c); // 803D9220
  goto L_803D942C; // 803D9224
L_803D9228:;
  c->r[0]=0u+0x00000004u; // 803D9228
  c->r[3]=0u+0x00000002u; // 803D922C
  W8(c->r[6]+0x0000064Eu,c->r[3]); // 803D9230
  W8(c->r[6]+0x0000064Fu,c->r[0]); // 803D9234
  goto L_803D9250; // 803D9238
  W8(c->r[6]+0x0000064Fu,c->r[0]); // 803D923C
  W8(c->r[6]+0x0000064Eu,c->r[0]); // 803D9240
  c->lr=0x803D9248u; f_803D0AAC(c); // 803D9244
  c->lr=0x803D924Cu; f_803E483C(c); // 803D9248
  goto L_803D9274; // 803D924C
L_803D9250:;
  c->r[3]=c->r[6]+0x00000574u; // 803D9250
  c->r[4]=0u+0x00000001u; // 803D9254
  c->r[5]=0u+0x00000001u; // 803D9258
  c->lr=0x803D9260u; f_803D0AAC(c); // 803D925C
  c->r[3]=0u+0x00000002u; // 803D9260
  c->lr=0x803D9268u; f_803CDAF4(c); // 803D9264
  cmps(c,0,(int32_t)c->r[3],0); // 803D9268
  if (crb(c,2)) { goto L_803D9274; } // 803D926C
  c->lr=0x803D9274u; f_803E53B4(c); // 803D9270
L_803D9274:;
  c->r[31]=0u+0x807B0000u; // 803D9274
  c->r[5]=0u+0x00000003u; // 803D9278
  c->r[31]=c->r[31]+0x00006798u; // 803D927C
  c->r[3]=c->r[31]+0x00000648u; // 803D9280
  c->r[4]=c->r[3]|c->r[3]; // 803D9284
  c->lr=0x803D928Cu; f_802DC484(c); // 803D9288
  c->r[0]=R8(c->r[31]+0x0000064Eu); // 803D928C
  cmps(c,0,(int32_t)c->r[0],0); // 803D9290
  if (crb(c,2)) { goto L_803D92B8; } // 803D9294
  cmpu(c,0,c->r[0],0x00000001u); // 803D9298
  if (crb(c,2)) { goto L_803D92B8; } // 803D929C
  c->r[3]=0u+0x00000002u; // 803D92A0
  c->lr=0x803D92A8u; f_803CDAF4(c); // 803D92A4
  cmps(c,0,(int32_t)c->r[3],0); // 803D92A8
  if (crb(c,2)) { goto L_803D92B8; } // 803D92AC
  c->r[4]=c->r[31]+0x00000648u; // 803D92B0
  c->lr=0x803D92B8u; f_803E50B0(c); // 803D92B4
L_803D92B8:;
  c->r[0]=0u+0x807B0000u; // 803D92B8
  c->r[31]=addc(c,c->r[0],0x00006798u,0); cr0(c,c->r[31]); // 803D92BC
  if (crb(c,2)) { goto L_803D9320; } // 803D92C0
  c->r[0]=R8(c->r[31]+0x0000064Eu); // 803D92C4
  cmps(c,0,(int32_t)c->r[0],0); // 803D92C8
  if (crb(c,2)) { goto L_803D9320; } // 803D92CC
  cmpu(c,0,c->r[0],0x00000001u); // 803D92D0
  if (crb(c,2)) { goto L_803D9320; } // 803D92D4
  c->r[3]=0u+0x00000002u; // 803D92D8
  c->lr=0x803D92E0u; f_803CDAF4(c); // 803D92DC
  cmps(c,0,(int32_t)c->r[3],0); // 803D92E0
  c->r[30]=c->r[3]|c->r[3]; // 803D92E4
  if (crb(c,2)) { goto L_803D9320; } // 803D92E8
  cmpu(c,0,c->r[31],c->r[31]); // 803D92EC
  if (crb(c,2)) { goto L_803D9314; } // 803D92F0
  c->r[3]=c->r[31]|c->r[31]; // 803D92F4
  c->r[4]=0u+0x00000000u; // 803D92F8
  c->r[5]=0u+0x00000020u; // 803D92FC
  c->lr=0x803D9304u; f_800043EC(c); // 803D9300
  c->r[3]=c->r[31]|c->r[31]; // 803D9304
  c->r[4]=c->r[31]|c->r[31]; // 803D9308
  c->r[5]=0u+0x0000001Fu; // 803D930C
  c->lr=0x803D9314u; f_803B3880(c); // 803D9310
L_803D9314:;
  c->r[3]=c->r[30]|c->r[30]; // 803D9314
  c->r[4]=c->r[31]|c->r[31]; // 803D9318
  c->lr=0x803D9320u; f_803E4D98(c); // 803D931C
L_803D9320:;
  c->r[5]=0u+0x807B0000u; // 803D9320
  c->r[5]=c->r[5]+0x00006798u; // 803D9324
  c->r[3]=R8(c->r[5]+0x00000020u); // 803D9328
  c->r[4]=c->r[5]+0x00000022u; // 803D932C
  c->r[5]=R8(c->r[5]+0x00000021u); // 803D9330
  c->lr=0x803D9338u; f_803DDFA4(c); // 803D9334
  goto L_803D942C; // 803D9338
L_803D933C:;
  c->r[3]=R8(c->r[6]+0x0000064Fu); // 803D933C
  c->r[3]=c->r[3]+0xFFFFFFFFu; // 803D9340
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 803D9344
  W8(c->r[6]+0x0000064Fu,c->r[3]); // 803D9348
  if (!crb(c,2)) { goto L_803D9378; } // 803D934C
  c->r[3]=0u+0x00000000u; // 803D9350
  c->r[0]=0u+0x00000005u; // 803D9354
  W8(c->r[6]+0x0000064Eu,c->r[3]); // 803D9358
  c->r[3]=c->r[6]+0x00000574u; // 803D935C
  c->r[4]=0u+0x00000001u; // 803D9360
  c->r[5]=0u+0x00000004u; // 803D9364
  W8(c->r[6]+0x0000064Fu,c->r[0]); // 803D9368
  c->lr=0x803D9370u; f_803D0AAC(c); // 803D936C
  c->lr=0x803D9374u; f_803E483C(c); // 803D9370
  goto L_803D942C; // 803D9374
L_803D9378:;
  c->r[3]=c->r[6]+0x00000574u; // 803D9378
  c->r[4]=0u+0x00000001u; // 803D937C
  c->r[5]=0u+0x00000001u; // 803D9380
  c->lr=0x803D9388u; f_803D0AAC(c); // 803D9384
  c->r[3]=0u+0x00000002u; // 803D9388
  c->lr=0x803D9390u; f_803CDAF4(c); // 803D938C
  cmps(c,0,(int32_t)c->r[3],0); // 803D9390
  if (crb(c,2)) { goto L_803D942C; } // 803D9394
  c->lr=0x803D939Cu; f_803E53B4(c); // 803D9398
  goto L_803D942C; // 803D939C
L_803D93A0:;
  c->r[3]=R8(c->r[6]+0x0000064Fu); // 803D93A0
  c->r[3]=c->r[3]+0xFFFFFFFFu; // 803D93A4
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 803D93A8
  W8(c->r[6]+0x0000064Fu,c->r[3]); // 803D93AC
  if (!crb(c,2)) { goto L_803D93DC; } // 803D93B0
  c->r[3]=0u+0x00000000u; // 803D93B4
  c->r[0]=0u+0x00000005u; // 803D93B8
  W8(c->r[6]+0x0000064Eu,c->r[3]); // 803D93BC
  c->r[3]=c->r[6]+0x00000574u; // 803D93C0
  c->r[4]=0u+0x00000001u; // 803D93C4
  c->r[5]=0u+0x00000004u; // 803D93C8
  W8(c->r[6]+0x0000064Fu,c->r[0]); // 803D93CC
  c->lr=0x803D93D4u; f_803D0AAC(c); // 803D93D0
  c->lr=0x803D93D8u; f_803E483C(c); // 803D93D4
  goto L_803D942C; // 803D93D8
L_803D93DC:;
  c->r[3]=c->r[6]+0x00000574u; // 803D93DC
  c->r[4]=0u+0x00000001u; // 803D93E0
  c->r[5]=0u+0x00000001u; // 803D93E4
  c->lr=0x803D93ECu; f_803D0AAC(c); // 803D93E8
  c->lr=0x803D93F0u; f_803E52F8(c); // 803D93EC
  c->lr=0x803D93F4u; f_803E53DC(c); // 803D93F0
  c->lr=0x803D93F8u; f_803DC700(c); // 803D93F4
  goto L_803D942C; // 803D93F8
L_803D93FC:;
  cmpu(c,0,c->r[0],0x00000002u); // 803D93FC
  if (!crb(c,2)) { goto L_803D942C; } // 803D9400
  c->r[3]=0u+0x807B0000u; // 803D9404
  c->r[0]=0u+0x00000000u; // 803D9408
  c->r[3]=c->r[3]+0x00006798u; // 803D940C
  c->r[12]=R32(c->r[3]+0x000005A8u); // 803D9410
  cmps(c,0,(int32_t)c->r[12],0); // 803D9414
  W32(c->r[3]+0x000005A8u,c->r[0]); // 803D9418
  if (crb(c,2)) { goto L_803D942C; } // 803D941C
  c->r[3]=0u+0x00000000u; // 803D9420
  c->ctr=c->r[12]; // 803D9424
  if (true) { c->lr=0x803D942Cu; dispatch(c,c->ctr); } // 803D9428
L_803D942C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 803D942C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 803D9430
  c->r[30]=R32(c->r[1]+0x00000008u); // 803D9434
  c->lr=c->r[0]; // 803D9438
  c->r[1]=c->r[1]+0x00000010u; // 803D943C
  return; // 803D9440
}

// btm_reset_complete
void f_803D9444(Ctx* __restrict c) {
  trace_call(0x803D9444u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803D9444
  c->r[0]=c->lr; // 803D9448
  c->r[3]=0u+0x807B0000u; // 803D944C
  W32(c->r[1]+0x00000014u,c->r[0]); // 803D9450
  c->r[3]=c->r[3]+0x00006798u; // 803D9454
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 803D9458
  W32(c->r[1]+0x00000008u,c->r[30]); // 803D945C
  c->r[0]=R8(c->r[3]+0x000027C0u); // 803D9460
  cmpu(c,0,c->r[0],0x00000004u); // 803D9464
  if (crb(c,0)) { goto L_803D9480; } // 803D9468
  c->r[3]=0u+0x000D0000u; // 803D946C
  c->r[4]=0u+0x80710000u; // 803D9470
  c->r[3]=c->r[3]+0x00000003u; // 803D9474
  c->r[4]=c->r[4]+0xFFFFBB88u; // 803D9478
  c->lr=0x803D9480u; f_803D04E0(c); // 803D947C
L_803D9480:;
  c->r[31]=0u+0x807B0000u; // 803D9480
  c->r[31]=c->r[31]+0x00006798u; // 803D9484
  c->r[12]=R32(c->r[31]+0x00000620u); // 803D9488
  cmps(c,0,(int32_t)c->r[12],0); // 803D948C
  if (crb(c,2)) { goto L_803D94AC; } // 803D9490
  c->r[0]=0u+0x00000000u; // 803D9494
  c->r[3]=0u+0x00000000u; // 803D9498
  W32(c->r[31]+0x00000620u,c->r[0]); // 803D949C
  c->ctr=c->r[12]; // 803D94A0
  if (true) { c->lr=0x803D94A8u; dispatch(c,c->ctr); } // 803D94A4
  goto L_803D95F0; // 803D94A8
L_803D94AC:;
  c->r[0]=R8(c->r[31]+0x0000064Eu); // 803D94AC
  cmps(c,0,(int32_t)c->r[0],0); // 803D94B0
  if (!crb(c,2)) { goto L_803D95F0; } // 803D94B4
  c->lr=0x803D94BCu; f_803EEB5C(c); // 803D94B8
  c->r[6]=0u+0x00000012u; // 803D94BC
  c->r[5]=0u+0x00000800u; // 803D94C0
  c->r[4]=0u+0x00000000u; // 803D94C4
  c->r[0]=0u+0x00000004u; // 803D94C8
  c->r[3]=0u+0x00000002u; // 803D94CC
  W16(c->r[31]+0x000016A0u,c->r[6]); // 803D94D0
  W16(c->r[31]+0x000016A2u,c->r[5]); // 803D94D4
  W16(c->r[31]+0x000016A4u,c->r[4]); // 803D94D8
  W16(c->r[31]+0x0000169Cu,c->r[6]); // 803D94DC
  W16(c->r[31]+0x0000169Eu,c->r[5]); // 803D94E0
  W16(c->r[31]+0x000016A6u,c->r[4]); // 803D94E4
  W8(c->r[31]+0x0000064Eu,c->r[3]); // 803D94E8
  W8(c->r[31]+0x0000064Fu,c->r[0]); // 803D94EC
  goto L_803D9508; // 803D94F0
  W8(c->r[31]+0x0000064Eu,c->r[4]); // 803D94F4
  W8(c->r[31]+0x0000064Fu,c->r[0]); // 803D94F8
  c->lr=0x803D9500u; f_803D0AAC(c); // 803D94FC
  c->lr=0x803D9504u; f_803E483C(c); // 803D9500
  goto L_803D952C; // 803D9504
L_803D9508:;
  c->r[3]=c->r[31]+0x00000574u; // 803D9508
  c->r[4]=0u+0x00000001u; // 803D950C
  c->r[5]=0u+0x00000001u; // 803D9510
  c->lr=0x803D9518u; f_803D0AAC(c); // 803D9514
  c->r[3]=0u+0x00000002u; // 803D9518
  c->lr=0x803D9520u; f_803CDAF4(c); // 803D951C
  cmps(c,0,(int32_t)c->r[3],0); // 803D9520
  if (crb(c,2)) { goto L_803D952C; } // 803D9524
  c->lr=0x803D952Cu; f_803E53B4(c); // 803D9528
L_803D952C:;
  c->r[31]=0u+0x807B0000u; // 803D952C
  c->r[5]=0u+0x00000003u; // 803D9530
  c->r[31]=c->r[31]+0x00006798u; // 803D9534
  c->r[3]=c->r[31]+0x00000648u; // 803D9538
  c->r[4]=c->r[3]|c->r[3]; // 803D953C
  c->lr=0x803D9544u; f_802DC484(c); // 803D9540
  c->r[0]=R8(c->r[31]+0x0000064Eu); // 803D9544
  cmps(c,0,(int32_t)c->r[0],0); // 803D9548
  if (crb(c,2)) { goto L_803D9570; } // 803D954C
  cmpu(c,0,c->r[0],0x00000001u); // 803D9550
  if (crb(c,2)) { goto L_803D9570; } // 803D9554
  c->r[3]=0u+0x00000002u; // 803D9558
  c->lr=0x803D9560u; f_803CDAF4(c); // 803D955C
  cmps(c,0,(int32_t)c->r[3],0); // 803D9560
  if (crb(c,2)) { goto L_803D9570; } // 803D9564
  c->r[4]=c->r[31]+0x00000648u; // 803D9568
  c->lr=0x803D9570u; f_803E50B0(c); // 803D956C
L_803D9570:;
  c->r[0]=0u+0x807B0000u; // 803D9570
  c->r[31]=addc(c,c->r[0],0x00006798u,0); cr0(c,c->r[31]); // 803D9574
  if (crb(c,2)) { goto L_803D95D8; } // 803D9578
  c->r[0]=R8(c->r[31]+0x0000064Eu); // 803D957C
  cmps(c,0,(int32_t)c->r[0],0); // 803D9580
  if (crb(c,2)) { goto L_803D95D8; } // 803D9584
  cmpu(c,0,c->r[0],0x00000001u); // 803D9588
  if (crb(c,2)) { goto L_803D95D8; } // 803D958C
  c->r[3]=0u+0x00000002u; // 803D9590
  c->lr=0x803D9598u; f_803CDAF4(c); // 803D9594
  cmps(c,0,(int32_t)c->r[3],0); // 803D9598
  c->r[30]=c->r[3]|c->r[3]; // 803D959C
  if (crb(c,2)) { goto L_803D95D8; } // 803D95A0
  cmpu(c,0,c->r[31],c->r[31]); // 803D95A4
  if (crb(c,2)) { goto L_803D95CC; } // 803D95A8
  c->r[3]=c->r[31]|c->r[31]; // 803D95AC
  c->r[4]=0u+0x00000000u; // 803D95B0
  c->r[5]=0u+0x00000020u; // 803D95B4
  c->lr=0x803D95BCu; f_800043EC(c); // 803D95B8
  c->r[3]=c->r[31]|c->r[31]; // 803D95BC
  c->r[4]=c->r[31]|c->r[31]; // 803D95C0
  c->r[5]=0u+0x0000001Fu; // 803D95C4
  c->lr=0x803D95CCu; f_803B3880(c); // 803D95C8
L_803D95CC:;
  c->r[3]=c->r[30]|c->r[30]; // 803D95CC
  c->r[4]=c->r[31]|c->r[31]; // 803D95D0
  c->lr=0x803D95D8u; f_803E4D98(c); // 803D95D4
L_803D95D8:;
  c->r[5]=0u+0x807B0000u; // 803D95D8
  c->r[5]=c->r[5]+0x00006798u; // 803D95DC
  c->r[3]=R8(c->r[5]+0x00000020u); // 803D95E0
  c->r[4]=c->r[5]+0x00000022u; // 803D95E4
  c->r[5]=R8(c->r[5]+0x00000021u); // 803D95E8
  c->lr=0x803D95F0u; f_803DDFA4(c); // 803D95EC
L_803D95F0:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 803D95F0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 803D95F4
  c->r[30]=R32(c->r[1]+0x00000008u); // 803D95F8
  c->lr=c->r[0]; // 803D95FC
  c->r[1]=c->r[1]+0x00000010u; // 803D9600
  return; // 803D9604
}

// btm_read_hci_buf_size_complete
void f_803D9608(Ctx* __restrict c) {
  trace_call(0x803D9608u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803D9608
  c->r[0]=c->lr; // 803D960C
  W32(c->r[1]+0x00000014u,c->r[0]); // 803D9610
  c->r[0]=R8(c->r[3]+0x00000000u); // 803D9614
  cmps(c,0,(int32_t)c->r[0],0); // 803D9618
  if (!crb(c,2)) { goto L_803D9674; } // 803D961C
  c->r[0]=R8(c->r[3]+0x00000002u); // 803D9620
  c->r[6]=0u+0x807B0000u; // 803D9624
  c->r[4]=R8(c->r[3]+0x00000001u); // 803D9628
  c->r[6]=c->r[6]+0x00006270u; // 803D962C
  c->r[0]=rotl(c->r[0],8)&0xFFFFFF00u; // 803D9630
  c->r[0]=c->r[4]+c->r[0]; // 803D9634
  W16(c->r[6]+0x0000007Cu,c->r[0]); // 803D9638
  c->r[4]=rotl(c->r[0],0)&0x0000FFFFu; // 803D963C
  c->r[0]=c->r[4]+0x00000004u; // 803D9640
  c->r[4]=R8(c->r[3]+0x00000005u); // 803D9644
  c->r[5]=R8(c->r[3]+0x00000004u); // 803D9648
  c->r[3]=rotl(c->r[4],8)&0xFFFFFF00u; // 803D964C
  c->r[3]=c->r[5]+c->r[3]; // 803D9650
  W16(c->r[6]+0x0000007Eu,c->r[0]); // 803D9654
  c->r[3]=rotl(c->r[3],0)&0x0000FFFFu; // 803D9658
  c->lr=0x803D9660u; f_803EBBD8(c); // 803D965C
  c->r[3]=0u+0x0000069Bu; // 803D9660
  c->r[4]=0u+0x0000001Eu; // 803D9664
  c->r[5]=0u+0x00000014u; // 803D9668
  c->r[6]=0u+0x0000000Au; // 803D966C
  c->lr=0x803D9674u; f_803E5138(c); // 803D9670
L_803D9674:;
  c->r[3]=0u+0x807B0000u; // 803D9674
  c->r[0]=0u+0x00000004u; // 803D9678
  c->r[3]=c->r[3]+0x00006798u; // 803D967C
  c->r[4]=0u+0x00000003u; // 803D9680
  W8(c->r[3]+0x0000064Eu,c->r[4]); // 803D9684
  W8(c->r[3]+0x0000064Fu,c->r[0]); // 803D9688
  goto L_803D96A4; // 803D968C
  W8(c->r[3]+0x0000064Fu,c->r[0]); // 803D9690
  W8(c->r[3]+0x0000064Eu,c->r[0]); // 803D9694
  c->lr=0x803D969Cu; f_803D0AAC(c); // 803D9698
  c->lr=0x803D96A0u; f_803E483C(c); // 803D969C
  goto L_803D96C0; // 803D96A0
L_803D96A4:;
  c->r[3]=c->r[3]+0x00000574u; // 803D96A4
  c->r[4]=0u+0x00000001u; // 803D96A8
  c->r[5]=0u+0x00000001u; // 803D96AC
  c->lr=0x803D96B4u; f_803D0AAC(c); // 803D96B0
  c->lr=0x803D96B8u; f_803E52F8(c); // 803D96B4
  c->lr=0x803D96BCu; f_803E53DC(c); // 803D96B8
  c->lr=0x803D96C0u; f_803DC700(c); // 803D96BC
L_803D96C0:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 803D96C0
  c->lr=c->r[0]; // 803D96C4
  c->r[1]=c->r[1]+0x00000010u; // 803D96C8
  return; // 803D96CC
}

// btm_read_local_version_complete
void f_803D96D0(Ctx* __restrict c) {
  trace_call(0x803D96D0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803D96D0
  c->r[0]=c->lr; // 803D96D4
  c->r[5]=0u+0x807B0000u; // 803D96D8
  W32(c->r[1]+0x00000014u,c->r[0]); // 803D96DC
  c->r[5]=c->r[5]+0x00006798u; // 803D96E0
  c->r[0]=R8(c->r[3]+0x00000000u); // 803D96E4
  cmps(c,0,(int32_t)c->r[0],0); // 803D96E8
  if (!crb(c,2)) { goto L_803D973C; } // 803D96EC
  c->r[0]=R8(c->r[3]+0x00000001u); // 803D96F0
  W8(c->r[5]+0x00000636u,c->r[0]); // 803D96F4
  c->r[0]=R8(c->r[3]+0x00000003u); // 803D96F8
  c->r[4]=R8(c->r[3]+0x00000002u); // 803D96FC
  c->r[0]=rotl(c->r[0],8)&0xFFFFFF00u; // 803D9700
  c->r[0]=c->r[4]+c->r[0]; // 803D9704
  W16(c->r[5]+0x00000638u,c->r[0]); // 803D9708
  c->r[0]=R8(c->r[3]+0x00000004u); // 803D970C
  W8(c->r[5]+0x0000063Au,c->r[0]); // 803D9710
  c->r[0]=R8(c->r[3]+0x00000006u); // 803D9714
  c->r[4]=R8(c->r[3]+0x00000005u); // 803D9718
  c->r[0]=rotl(c->r[0],8)&0xFFFFFF00u; // 803D971C
  c->r[0]=c->r[4]+c->r[0]; // 803D9720
  W16(c->r[5]+0x0000063Cu,c->r[0]); // 803D9724
  c->r[0]=R8(c->r[3]+0x00000008u); // 803D9728
  c->r[3]=R8(c->r[3]+0x00000007u); // 803D972C
  c->r[0]=rotl(c->r[0],8)&0xFFFFFF00u; // 803D9730
  c->r[0]=c->r[3]+c->r[0]; // 803D9734
  W16(c->r[5]+0x0000063Eu,c->r[0]); // 803D9738
L_803D973C:;
  c->r[3]=0u+0x807B0000u; // 803D973C
  c->r[0]=0u+0x00000004u; // 803D9740
  c->r[3]=c->r[3]+0x00006798u; // 803D9744
  W8(c->r[3]+0x0000064Eu,c->r[0]); // 803D9748
  W8(c->r[3]+0x0000064Fu,c->r[0]); // 803D974C
  goto L_803D9768; // 803D9750
  W8(c->r[3]+0x0000064Fu,c->r[0]); // 803D9754
  W8(c->r[3]+0x0000064Eu,c->r[0]); // 803D9758
  c->lr=0x803D9760u; f_803D0AAC(c); // 803D975C
  c->lr=0x803D9764u; f_803E483C(c); // 803D9760
  goto L_803D977C; // 803D9764
L_803D9768:;
  c->r[3]=c->r[3]+0x00000574u; // 803D9768
  c->r[4]=0u+0x00000001u; // 803D976C
  c->r[5]=0u+0x00000001u; // 803D9770
  c->lr=0x803D9778u; f_803D0AAC(c); // 803D9774
  c->lr=0x803D977Cu; f_803E5358(c); // 803D9778
L_803D977C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 803D977C
  c->lr=c->r[0]; // 803D9780
  c->r[1]=c->r[1]+0x00000010u; // 803D9784
  return; // 803D9788
}

// btm_read_local_features_complete
void f_803D978C(Ctx* __restrict c) {
  trace_call(0x803D978Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803D978C
  c->r[0]=c->lr; // 803D9790
  W32(c->r[1]+0x00000024u,c->r[0]); // 803D9794
  c->r[11]=c->r[1]+0x00000020u; // 803D9798
  c->lr=0x803D97A0u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 803D979C
  c->r[31]=0u+0x807B0000u; // 803D97A0
  c->r[30]=0u+0x80710000u; // 803D97A4
  c->r[31]=c->r[31]+0x00006798u; // 803D97A8
  c->r[0]=0u+0x00000000u; // 803D97AC
  c->r[28]=R32(c->r[31]+0x0000058Cu); // 803D97B0
  c->r[30]=c->r[30]+0xFFFFBB58u; // 803D97B4
  W32(c->r[31]+0x0000058Cu,c->r[0]); // 803D97B8
  c->r[0]=R8(c->r[3]+0x00000000u); // 803D97BC
  cmps(c,0,(int32_t)c->r[0],0); // 803D97C0
  if (!crb(c,2)) { goto L_803D9C70; } // 803D97C4
  c->r[0]=0u+0x00000005u; // 803D97C8
  c->r[4]=0u+0x00000018u; // 803D97CC
  W8(c->r[31]+0x0000064Eu,c->r[0]); // 803D97D0
  c->r[0]=R8(c->r[3]+0x00000001u); // 803D97D4
  W8(c->r[31]+0x00000640u,c->r[0]); // 803D97D8
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 803D97DC
  c->r[0]=R8(c->r[3]+0x00000002u); // 803D97E0
  W8(c->r[31]+0x00000641u,c->r[0]); // 803D97E4
  c->r[0]=R8(c->r[3]+0x00000003u); // 803D97E8
  W8(c->r[31]+0x00000642u,c->r[0]); // 803D97EC
  c->r[0]=R8(c->r[3]+0x00000004u); // 803D97F0
  W8(c->r[31]+0x00000643u,c->r[0]); // 803D97F4
  c->r[0]=R8(c->r[3]+0x00000005u); // 803D97F8
  W8(c->r[31]+0x00000644u,c->r[0]); // 803D97FC
  c->r[0]=R8(c->r[3]+0x00000006u); // 803D9800
  W8(c->r[31]+0x00000645u,c->r[0]); // 803D9804
  c->r[0]=R8(c->r[3]+0x00000007u); // 803D9808
  W8(c->r[31]+0x00000646u,c->r[0]); // 803D980C
  c->r[0]=R8(c->r[3]+0x00000008u); // 803D9810
  W8(c->r[31]+0x00000647u,c->r[0]); // 803D9814
  W16(c->r[31]+0x00000654u,c->r[4]); // 803D9818
  if (crb(c,2)) { goto L_803D9828; } // 803D981C
  c->r[0]=c->r[4]|0x00000C00u; // 803D9820
  W16(c->r[31]+0x00000654u,c->r[0]); // 803D9824
L_803D9828:;
  c->r[0]=R8(c->r[31]+0x00000640u); // 803D9828
  c->r[0]=rotl(c->r[0],0)&0x00000002u; cr0(c,c->r[0]); // 803D982C
  if (crb(c,2)) { goto L_803D9848; } // 803D9830
  c->r[3]=0u+0x807B0000u; // 803D9834
  c->r[3]=c->r[3]+0x00006798u; // 803D9838
  c->r[0]=R16(c->r[3]+0x00000654u); // 803D983C
  c->r[0]=c->r[0]|0x0000C000u; // 803D9840
  W16(c->r[3]+0x00000654u,c->r[0]); // 803D9844
L_803D9848:;
  c->r[3]=0u+0x807B0000u; // 803D9848
  c->r[3]=c->r[3]+0x00006798u; // 803D984C
  c->r[0]=R8(c->r[3]+0x00000636u); // 803D9850
  cmpu(c,0,c->r[0],0x00000003u); // 803D9854
  if (crb(c,0)) { goto L_803D98E8; } // 803D9858
  c->r[0]=R8(c->r[31]+0x00000643u); // 803D985C
  c->r[0]=rotl(c->r[0],0)&0x00000002u; cr0(c,c->r[0]); // 803D9860
  if (!crb(c,2)) { goto L_803D9874; } // 803D9864
  c->r[0]=R16(c->r[3]+0x00000654u); // 803D9868
  c->r[0]=c->r[0]|0x00001102u; // 803D986C
  W16(c->r[3]+0x00000654u,c->r[0]); // 803D9870
L_803D9874:;
  c->r[0]=R8(c->r[31]+0x00000643u); // 803D9874
  c->r[0]=rotl(c->r[0],0)&0x00000004u; cr0(c,c->r[0]); // 803D9878
  if (!crb(c,2)) { goto L_803D9894; } // 803D987C
  c->r[3]=0u+0x807B0000u; // 803D9880
  c->r[3]=c->r[3]+0x00006798u; // 803D9884
  c->r[0]=R16(c->r[3]+0x00000654u); // 803D9888
  c->r[0]=c->r[0]|0x00002204u; // 803D988C
  W16(c->r[3]+0x00000654u,c->r[0]); // 803D9890
L_803D9894:;
  c->r[3]=R8(c->r[31]+0x00000643u); // 803D9894
  c->r[0]=rotl(c->r[3],0)&0x00000002u; cr0(c,c->r[0]); // 803D9898
  if (!crb(c,2)) { goto L_803D98A8; } // 803D989C
  c->r[0]=rotl(c->r[3],0)&0x00000004u; cr0(c,c->r[0]); // 803D98A0
  if (crb(c,2)) { goto L_803D98E8; } // 803D98A4
L_803D98A8:;
  c->r[0]=R8(c->r[31]+0x00000644u); // 803D98A8
  c->r[0]=rotl(c->r[0],0)&0x00000080u; cr0(c,c->r[0]); // 803D98AC
  if (!crb(c,2)) { goto L_803D98C8; } // 803D98B0
  c->r[3]=0u+0x807B0000u; // 803D98B4
  c->r[3]=c->r[3]+0x00006798u; // 803D98B8
  c->r[0]=R16(c->r[3]+0x00000654u); // 803D98BC
  c->r[0]=c->r[0]|0x00000300u; // 803D98C0
  W16(c->r[3]+0x00000654u,c->r[0]); // 803D98C4
L_803D98C8:;
  c->r[0]=R8(c->r[31]+0x00000645u); // 803D98C8
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 803D98CC
  if (!crb(c,2)) { goto L_803D98E8; } // 803D98D0
  c->r[3]=0u+0x807B0000u; // 803D98D4
  c->r[3]=c->r[3]+0x00006798u; // 803D98D8
  c->r[0]=R16(c->r[3]+0x00000654u); // 803D98DC
  c->r[0]=c->r[0]|0x00003000u; // 803D98E0
  W16(c->r[3]+0x00000654u,c->r[0]); // 803D98E4
L_803D98E8:;
  c->r[4]=0u+0x807B0000u; // 803D98E8
  c->r[4]=c->r[4]+0x00006798u; // 803D98EC
  c->r[0]=R8(c->r[4]+0x000027C0u); // 803D98F0
  cmpu(c,0,c->r[0],0x00000005u); // 803D98F4
  if (crb(c,0)) { goto L_803D9910; } // 803D98F8
  c->r[3]=0u+0x000D0000u; // 803D98FC
  c->r[5]=R16(c->r[4]+0x00000654u); // 803D9900
  c->r[3]=c->r[3]+0x00000004u; // 803D9904
  c->r[4]=c->r[30]+0x00000044u; // 803D9908
  c->lr=0x803D9910u; f_803D04F8(c); // 803D990C
L_803D9910:;
  c->r[3]=R8(c->r[31]+0x00000641u); // 803D9910
  c->r[4]=0u+0x807B0000u; // 803D9914
  c->r[4]=c->r[4]+0x00006798u; // 803D9918
  c->r[5]=0u+0x00000000u; // 803D991C
  c->r[0]=rotl(c->r[3],0)&0x00000008u; cr0(c,c->r[0]); // 803D9920
  W16(c->r[4]+0x00000656u,c->r[5]); // 803D9924
  W8(c->r[4]+0x00001908u,c->r[5]); // 803D9928
  if (crb(c,2)) { goto L_803D9968; } // 803D992C
  c->r[0]=rotl(c->r[3],0)&0x00000010u; cr0(c,c->r[0]); // 803D9930
  c->r[0]=0u+0x00000001u; // 803D9934
  W16(c->r[4]+0x00000656u,c->r[0]); // 803D9938
  if (crb(c,2)) { goto L_803D9948; } // 803D993C
  c->r[0]=c->r[0]|0x00000002u; // 803D9940
  W16(c->r[4]+0x00000656u,c->r[0]); // 803D9944
L_803D9948:;
  c->r[0]=R8(c->r[31]+0x00000641u); // 803D9948
  c->r[0]=rotl(c->r[0],0)&0x00000020u; cr0(c,c->r[0]); // 803D994C
  if (crb(c,2)) { goto L_803D9968; } // 803D9950
  c->r[3]=0u+0x807B0000u; // 803D9954
  c->r[3]=c->r[3]+0x00006798u; // 803D9958
  c->r[0]=R16(c->r[3]+0x00000656u); // 803D995C
  c->r[0]=c->r[0]|0x00000004u; // 803D9960
  W16(c->r[3]+0x00000656u,c->r[0]); // 803D9964
L_803D9968:;
  c->r[0]=R8(c->r[31]+0x00000643u); // 803D9968
  c->r[0]=rotl(c->r[0],0)&0x00000080u; cr0(c,c->r[0]); // 803D996C
  if (crb(c,2)) { goto L_803D9988; } // 803D9970
  c->r[3]=0u+0x807B0000u; // 803D9974
  c->r[3]=c->r[3]+0x00006798u; // 803D9978
  c->r[0]=R16(c->r[3]+0x00000656u); // 803D997C
  c->r[0]=c->r[0]|0x00000008u; // 803D9980
  W16(c->r[3]+0x00000656u,c->r[0]); // 803D9984
L_803D9988:;
  c->r[0]=R8(c->r[31]+0x00000644u); // 803D9988
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 803D998C
  if (crb(c,2)) { goto L_803D99A8; } // 803D9990
  c->r[3]=0u+0x807B0000u; // 803D9994
  c->r[3]=c->r[3]+0x00006798u; // 803D9998
  c->r[0]=R16(c->r[3]+0x00000656u); // 803D999C
  c->r[0]=c->r[0]|0x00000010u; // 803D99A0
  W16(c->r[3]+0x00000656u,c->r[0]); // 803D99A4
L_803D99A8:;
  c->r[0]=R8(c->r[31]+0x00000644u); // 803D99A8
  c->r[0]=rotl(c->r[0],0)&0x00000002u; cr0(c,c->r[0]); // 803D99AC
  if (crb(c,2)) { goto L_803D99C8; } // 803D99B0
  c->r[3]=0u+0x807B0000u; // 803D99B4
  c->r[3]=c->r[3]+0x00006798u; // 803D99B8
  c->r[0]=R16(c->r[3]+0x00000656u); // 803D99BC
  c->r[0]=c->r[0]|0x00000020u; // 803D99C0
  W16(c->r[3]+0x00000656u,c->r[0]); // 803D99C4
L_803D99C8:;
  c->r[4]=0u+0x807B0000u; // 803D99C8
  c->r[4]=c->r[4]+0x00006798u; // 803D99CC
  c->r[3]=R16(c->r[4]+0x00000656u); // 803D99D0
  c->r[0]=rotl(c->r[3],0)&0x00000038u; cr0(c,c->r[0]); // 803D99D4
  if (crb(c,2)) { goto L_803D9A4C; } // 803D99D8
  c->r[5]=R8(c->r[31]+0x00000645u); // 803D99DC
  c->r[0]=0u+0x00000001u; // 803D99E0
  W8(c->r[4]+0x00001908u,c->r[0]); // 803D99E4
  c->r[0]=rotl(c->r[5],0)&0x00000020u; cr0(c,c->r[0]); // 803D99E8
  if (crb(c,2)) { goto L_803D9A04; } // 803D99EC
  c->r[0]=rotl(c->r[5],0)&0x00000080u; cr0(c,c->r[0]); // 803D99F0
  if (!crb(c,2)) { goto L_803D9A0C; } // 803D99F4
  c->r[0]=c->r[3]|0x00000100u; // 803D99F8
  W16(c->r[4]+0x00000656u,c->r[0]); // 803D99FC
  goto L_803D9A0C; // 803D9A00
L_803D9A04:;
  c->r[0]=c->r[3]|0x00000140u; // 803D9A04
  W16(c->r[4]+0x00000656u,c->r[0]); // 803D9A08
L_803D9A0C:;
  c->r[3]=R8(c->r[31]+0x00000645u); // 803D9A0C
  c->r[0]=rotl(c->r[3],0)&0x00000040u; cr0(c,c->r[0]); // 803D9A10
  if (crb(c,2)) { goto L_803D9A38; } // 803D9A14
  c->r[0]=rotl(c->r[3],0)&0x00000080u; cr0(c,c->r[0]); // 803D9A18
  if (!crb(c,2)) { goto L_803D9A4C; } // 803D9A1C
  c->r[3]=0u+0x807B0000u; // 803D9A20
  c->r[3]=c->r[3]+0x00006798u; // 803D9A24
  c->r[0]=R16(c->r[3]+0x00000656u); // 803D9A28
  c->r[0]=c->r[0]|0x00000200u; // 803D9A2C
  W16(c->r[3]+0x00000656u,c->r[0]); // 803D9A30
  goto L_803D9A4C; // 803D9A34
L_803D9A38:;
  c->r[3]=0u+0x807B0000u; // 803D9A38
  c->r[3]=c->r[3]+0x00006798u; // 803D9A3C
  c->r[0]=R16(c->r[3]+0x00000656u); // 803D9A40
  c->r[0]=c->r[0]|0x00000280u; // 803D9A44
  W16(c->r[3]+0x00000656u,c->r[0]); // 803D9A48
L_803D9A4C:;
  c->r[4]=0u+0x807B0000u; // 803D9A4C
  c->r[4]=c->r[4]+0x00006798u; // 803D9A50
  c->r[0]=R8(c->r[4]+0x000027C0u); // 803D9A54
  cmpu(c,0,c->r[0],0x00000005u); // 803D9A58
  if (crb(c,0)) { goto L_803D9A74; } // 803D9A5C
  c->r[3]=0u+0x000D0000u; // 803D9A60
  c->r[5]=R16(c->r[4]+0x00000656u); // 803D9A64
  c->r[3]=c->r[3]+0x00000004u; // 803D9A68
  c->r[4]=c->r[30]+0x00000070u; // 803D9A6C
  c->lr=0x803D9A74u; f_803D04F8(c); // 803D9A70
L_803D9A74:;
  c->r[0]=R8(c->r[31]+0x00000640u); // 803D9A74
  c->r[0]=rotl(c->r[0],0)&0x00000020u; cr0(c,c->r[0]); // 803D9A78
  if (crb(c,2)) { goto L_803D9A98; } // 803D9A7C
  c->r[3]=0u+0x807B0000u; // 803D9A80
  c->r[3]=c->r[3]+0x00006798u; // 803D9A84
  c->r[0]=R16(c->r[3]+0x000004C4u); // 803D9A88
  c->r[0]=c->r[0]|0x00000001u; // 803D9A8C
  W16(c->r[3]+0x000004C4u,c->r[0]); // 803D9A90
  goto L_803D9AAC; // 803D9A94
L_803D9A98:;
  c->r[3]=0u+0x807B0000u; // 803D9A98
  c->r[3]=c->r[3]+0x00006798u; // 803D9A9C
  c->r[0]=R16(c->r[3]+0x000004C4u); // 803D9AA0
  c->r[0]=rotl(c->r[0],0)&0x0000FFFEu; // 803D9AA4
  W16(c->r[3]+0x000004C4u,c->r[0]); // 803D9AA8
L_803D9AAC:;
  c->r[0]=R8(c->r[31]+0x00000640u); // 803D9AAC
  c->r[0]=rotl(c->r[0],0)&0x00000040u; cr0(c,c->r[0]); // 803D9AB0
  if (crb(c,2)) { goto L_803D9AD0; } // 803D9AB4
  c->r[3]=0u+0x807B0000u; // 803D9AB8
  c->r[3]=c->r[3]+0x00006798u; // 803D9ABC
  c->r[0]=R16(c->r[3]+0x000004C4u); // 803D9AC0
  c->r[0]=c->r[0]|0x00000002u; // 803D9AC4
  W16(c->r[3]+0x000004C4u,c->r[0]); // 803D9AC8
  goto L_803D9AE4; // 803D9ACC
L_803D9AD0:;
  c->r[3]=0u+0x807B0000u; // 803D9AD0
  c->r[3]=c->r[3]+0x00006798u; // 803D9AD4
  c->r[0]=R16(c->r[3]+0x000004C4u); // 803D9AD8
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFDu; // 803D9ADC
  W16(c->r[3]+0x000004C4u,c->r[0]); // 803D9AE0
L_803D9AE4:;
  c->r[0]=R8(c->r[31]+0x00000640u); // 803D9AE4
  c->r[0]=rotl(c->r[0],0)&0x00000080u; cr0(c,c->r[0]); // 803D9AE8
  if (crb(c,2)) { goto L_803D9B08; } // 803D9AEC
  c->r[3]=0u+0x807B0000u; // 803D9AF0
  c->r[3]=c->r[3]+0x00006798u; // 803D9AF4
  c->r[0]=R16(c->r[3]+0x000004C4u); // 803D9AF8
  c->r[0]=c->r[0]|0x00000004u; // 803D9AFC
  W16(c->r[3]+0x000004C4u,c->r[0]); // 803D9B00
  goto L_803D9B1C; // 803D9B04
L_803D9B08:;
  c->r[3]=0u+0x807B0000u; // 803D9B08
  c->r[3]=c->r[3]+0x00006798u; // 803D9B0C
  c->r[0]=R16(c->r[3]+0x000004C4u); // 803D9B10
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFBu; // 803D9B14
  W16(c->r[3]+0x000004C4u,c->r[0]); // 803D9B18
L_803D9B1C:;
  c->r[0]=R8(c->r[31]+0x00000641u); // 803D9B1C
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 803D9B20
  if (crb(c,2)) { goto L_803D9B40; } // 803D9B24
  c->r[3]=0u+0x807B0000u; // 803D9B28
  c->r[3]=c->r[3]+0x00006798u; // 803D9B2C
  c->r[0]=R16(c->r[3]+0x000004C4u); // 803D9B30
  c->r[0]=c->r[0]|0x00000008u; // 803D9B34
  W16(c->r[3]+0x000004C4u,c->r[0]); // 803D9B38
  goto L_803D9B54; // 803D9B3C
L_803D9B40:;
  c->r[3]=0u+0x807B0000u; // 803D9B40
  c->r[3]=c->r[3]+0x00006798u; // 803D9B44
  c->r[0]=R16(c->r[3]+0x000004C4u); // 803D9B48
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFF7u; // 803D9B4C
  W16(c->r[3]+0x000004C4u,c->r[0]); // 803D9B50
L_803D9B54:;
  c->lr=0x803D9B58u; f_803DF130(c); // 803D9B54
  c->r[4]=0u+0x807B0000u; // 803D9B58
  c->r[4]=c->r[4]+0x00006798u; // 803D9B5C
  c->r[29]=R8(c->r[4]+0x000027BEu); // 803D9B60
  cmpu(c,0,c->r[29],0x000000FFu); // 803D9B64
  if (crb(c,2)) { goto L_803D9C14; } // 803D9B68
  c->r[0]=R8(c->r[4]+0x000027C0u); // 803D9B6C
  c->r[3]=0u+0x000000FFu; // 803D9B70
  c->r[27]=R8(c->r[4]+0x000027BDu); // 803D9B74
  cmpu(c,0,c->r[0],0x00000003u); // 803D9B78
  W8(c->r[4]+0x000027BEu,c->r[3]); // 803D9B7C
  W8(c->r[4]+0x000027BDu,c->r[3]); // 803D9B80
  if (crb(c,0)) { goto L_803D9BA8; } // 803D9B84
  c->r[3]=0u+0x000D0000u; // 803D9B88
  c->r[5]=c->r[27]|c->r[27]; // 803D9B8C
  c->r[7]=c->r[29]|c->r[29]; // 803D9B90
  c->r[4]=c->r[30]+0x00000000u; // 803D9B94
  c->r[3]=c->r[3]+0x00000002u; // 803D9B98
  c->r[6]=0u+0x000000FFu; // 803D9B9C
  c->r[8]=0u+0x000000FFu; // 803D9BA0
  c->lr=0x803D9BA8u; f_803D0540(c); // 803D9BA4
L_803D9BA8:;
  c->r[3]=0u+0x807B0000u; // 803D9BA8
  c->r[3]=c->r[3]+0x00006798u; // 803D9BAC
  c->r[4]=R8(c->r[3]+0x00000645u); // 803D9BB0
  c->r[0]=rotl(c->r[4],0)&0x00000008u; cr0(c,c->r[0]); // 803D9BB4
  if (!crb(c,2)) { goto L_803D9BD0; } // 803D9BB8
  c->r[0]=R8(c->r[3]+0x00000644u); // 803D9BBC
  c->r[0]=rotl(c->r[0],0)&0x00000010u; cr0(c,c->r[0]); // 803D9BC0
  if (!crb(c,2)) { goto L_803D9BD0; } // 803D9BC4
  c->r[0]=rotl(c->r[4],0)&0x00000010u; cr0(c,c->r[0]); // 803D9BC8
  if (crb(c,2)) { goto L_803D9C14; } // 803D9BCC
L_803D9BD0:;
  c->r[3]=0u+0x807B0000u; // 803D9BD0
  c->r[3]=c->r[3]+0x00006798u; // 803D9BD4
  c->r[0]=R8(c->r[3]+0x000027BDu); // 803D9BD8
  cmpu(c,0,c->r[0],c->r[27]); // 803D9BDC
  if (!crb(c,2)) { goto L_803D9BF0; } // 803D9BE0
  c->r[0]=R8(c->r[3]+0x000027BEu); // 803D9BE4
  cmpu(c,0,c->r[0],c->r[29]); // 803D9BE8
  if (crb(c,2)) { goto L_803D9C14; } // 803D9BEC
L_803D9BF0:;
  c->r[3]=c->r[27]|c->r[27]; // 803D9BF0
  c->r[4]=c->r[29]|c->r[29]; // 803D9BF4
  c->lr=0x803D9BFCu; f_803E5530(c); // 803D9BF8
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 803D9BFC
  if (crb(c,2)) { goto L_803D9C14; } // 803D9C00
  c->r[3]=0u+0x807B0000u; // 803D9C04
  c->r[3]=c->r[3]+0x00006798u; // 803D9C08
  W8(c->r[3]+0x000027BDu,c->r[27]); // 803D9C0C
  W8(c->r[3]+0x000027BEu,c->r[29]); // 803D9C10
L_803D9C14:;
  c->r[0]=R8(c->r[31]+0x00000643u); // 803D9C14
  c->r[0]=rotl(c->r[0],0)&0x00000040u; cr0(c,c->r[0]); // 803D9C18
  if (crb(c,2)) { goto L_803D9C28; } // 803D9C1C
  c->r[3]=0u+0x00000001u; // 803D9C20
  c->lr=0x803D9C28u; f_803DACAC(c); // 803D9C24
L_803D9C28:;
  c->r[3]=0u+0x00000001u; // 803D9C28
  c->lr=0x803D9C30u; f_803DABFC(c); // 803D9C2C
  c->r[3]=0u+0x00000001u; // 803D9C30
  c->lr=0x803D9C38u; f_803DAB4C(c); // 803D9C34
  c->r[3]=0u+0x807B0000u; // 803D9C38
  c->r[3]=c->r[3]+0x00006798u; // 803D9C3C
  c->r[12]=R32(c->r[3]+0x00000568u); // 803D9C40
  cmps(c,0,(int32_t)c->r[12],0); // 803D9C44
  if (crb(c,2)) { goto L_803D9C58; } // 803D9C48
  c->r[3]=0u+0x00000000u; // 803D9C4C
  c->ctr=c->r[12]; // 803D9C50
  if (true) { c->lr=0x803D9C58u; dispatch(c,c->ctr); } // 803D9C54
L_803D9C58:;
  cmps(c,0,(int32_t)c->r[28],0); // 803D9C58
  if (crb(c,2)) { goto L_803D9C70; } // 803D9C5C
  c->r[12]=c->r[28]|c->r[28]; // 803D9C60
  c->r[3]=0u+0x00000000u; // 803D9C64
  c->ctr=c->r[12]; // 803D9C68
  if (true) { c->lr=0x803D9C70u; dispatch(c,c->ctr); } // 803D9C6C
L_803D9C70:;
  c->r[11]=c->r[1]+0x00000020u; // 803D9C70
  c->lr=0x803D9C78u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 803D9C74
  c->r[0]=R32(c->r[1]+0x00000024u); // 803D9C78
  c->lr=c->r[0]; // 803D9C7C
  c->r[1]=c->r[1]+0x00000020u; // 803D9C80
  return; // 803D9C84
}

// BTM_SetLocalDeviceName
void f_803D9C88(Ctx* __restrict c) {
  trace_call(0x803D9C88u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803D9C88
  c->r[0]=c->lr; // 803D9C8C
  cmps(c,0,(int32_t)c->r[3],0); // 803D9C90
  W32(c->r[1]+0x00000024u,c->r[0]); // 803D9C94
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 803D9C98
  W32(c->r[1]+0x00000018u,c->r[30]); // 803D9C9C
  W32(c->r[1]+0x00000014u,c->r[29]); // 803D9CA0
  c->r[29]=c->r[3]|c->r[3]; // 803D9CA4
  if (!crb(c,2)) { goto L_803D9CB4; } // 803D9CA8
  c->r[3]=0u+0x00000005u; // 803D9CAC
  goto L_803D9D24; // 803D9CB0
L_803D9CB4:;
  c->r[30]=0u+0x807B0000u; // 803D9CB4
  c->r[30]=c->r[30]+0x00006798u; // 803D9CB8
  c->r[0]=R8(c->r[30]+0x0000064Eu); // 803D9CBC
  cmpu(c,0,c->r[0],0x00000001u); // 803D9CC0
  if (crb(c,1)) { goto L_803D9CD0; } // 803D9CC4
  c->r[3]=0u+0x0000000Cu; // 803D9CC8
  goto L_803D9D24; // 803D9CCC
L_803D9CD0:;
  c->r[3]=0u+0x00000002u; // 803D9CD0
  c->lr=0x803D9CD8u; f_803CDAF4(c); // 803D9CD4
  cmps(c,0,(int32_t)c->r[3],0); // 803D9CD8
  c->r[31]=c->r[3]|c->r[3]; // 803D9CDC
  if (crb(c,2)) { goto L_803D9D20; } // 803D9CE0
  cmpu(c,0,c->r[30],c->r[29]); // 803D9CE4
  if (crb(c,2)) { goto L_803D9D0C; } // 803D9CE8
  c->r[3]=c->r[30]|c->r[30]; // 803D9CEC
  c->r[4]=0u+0x00000000u; // 803D9CF0
  c->r[5]=0u+0x00000020u; // 803D9CF4
  c->lr=0x803D9CFCu; f_800043EC(c); // 803D9CF8
  c->r[3]=c->r[30]|c->r[30]; // 803D9CFC
  c->r[4]=c->r[29]|c->r[29]; // 803D9D00
  c->r[5]=0u+0x0000001Fu; // 803D9D04
  c->lr=0x803D9D0Cu; f_803B3880(c); // 803D9D08
L_803D9D0C:;
  c->r[3]=c->r[31]|c->r[31]; // 803D9D0C
  c->r[4]=c->r[30]|c->r[30]; // 803D9D10
  c->lr=0x803D9D18u; f_803E4D98(c); // 803D9D14
  c->r[3]=0u+0x00000001u; // 803D9D18
  goto L_803D9D24; // 803D9D1C
L_803D9D20:;
  c->r[3]=0u+0x00000003u; // 803D9D20
L_803D9D24:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 803D9D24
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 803D9D28
  c->r[30]=R32(c->r[1]+0x00000018u); // 803D9D2C
  c->r[29]=R32(c->r[1]+0x00000014u); // 803D9D30
  c->lr=c->r[0]; // 803D9D34
  c->r[1]=c->r[1]+0x00000020u; // 803D9D38
  return; // 803D9D3C
}

// btm_read_local_name_complete
void f_803D9D40(Ctx* __restrict c) {
  trace_call(0x803D9D40u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803D9D40
  c->r[0]=c->lr; // 803D9D44
  W32(c->r[1]+0x00000024u,c->r[0]); // 803D9D48
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 803D9D4C
  c->r[31]=0u+0x807B0000u; // 803D9D50
  c->r[31]=c->r[31]+0x00006798u; // 803D9D54
  W32(c->r[1]+0x00000018u,c->r[30]); // 803D9D58
  W32(c->r[1]+0x00000014u,c->r[29]); // 803D9D5C
  c->r[29]=c->r[3]|c->r[3]; // 803D9D60
  c->r[3]=c->r[31]+0x00000590u; // 803D9D64
  c->r[30]=R32(c->r[31]+0x000005A8u); // 803D9D68
  c->lr=0x803D9D70u; f_803D0B1C(c); // 803D9D6C
  c->r[0]=0u+0x00000000u; // 803D9D70
  cmps(c,0,(int32_t)c->r[30],0); // 803D9D74
  W32(c->r[31]+0x000005A8u,c->r[0]); // 803D9D78
  if (crb(c,2)) { goto L_803D9DB0; } // 803D9D7C
  c->r[0]=R8(c->r[29]+0x00000000u); // 803D9D80
  cmps(c,0,(int32_t)c->r[0],0); // 803D9D84
  if (!crb(c,2)) { goto L_803D9DA0; } // 803D9D88
  c->r[12]=c->r[30]|c->r[30]; // 803D9D8C
  c->r[3]=c->r[29]+0x00000001u; // 803D9D90
  c->ctr=c->r[12]; // 803D9D94
  if (true) { c->lr=0x803D9D9Cu; dispatch(c,c->ctr); } // 803D9D98
  goto L_803D9DB0; // 803D9D9C
L_803D9DA0:;
  c->r[12]=c->r[30]|c->r[30]; // 803D9DA0
  c->r[3]=0u+0x00000000u; // 803D9DA4
  c->ctr=c->r[12]; // 803D9DA8
  if (true) { c->lr=0x803D9DB0u; dispatch(c,c->ctr); } // 803D9DAC
L_803D9DB0:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 803D9DB0
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 803D9DB4
  c->r[30]=R32(c->r[1]+0x00000018u); // 803D9DB8
  c->r[29]=R32(c->r[1]+0x00000014u); // 803D9DBC
  c->lr=c->r[0]; // 803D9DC0
  c->r[1]=c->r[1]+0x00000020u; // 803D9DC4
  return; // 803D9DC8
}

// BTM_ReadLocalDeviceAddr
void f_803D9DCC(Ctx* __restrict c) {
  trace_call(0x803D9DCCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803D9DCC
  c->r[0]=c->lr; // 803D9DD0
  cmps(c,0,(int32_t)c->r[3],0); // 803D9DD4
  W32(c->r[1]+0x00000014u,c->r[0]); // 803D9DD8
  if (crb(c,2)) { goto L_803D9DF8; } // 803D9DDC
  c->r[4]=0u+0x807B0000u; // 803D9DE0
  c->r[12]=c->r[3]|c->r[3]; // 803D9DE4
  c->r[4]=c->r[4]+0x00006798u; // 803D9DE8
  c->r[3]=c->r[4]+0x00000630u; // 803D9DEC
  c->ctr=c->r[12]; // 803D9DF0
  if (true) { c->lr=0x803D9DF8u; dispatch(c,c->ctr); } // 803D9DF4
L_803D9DF8:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 803D9DF8
  c->r[3]=0u+0x00000000u; // 803D9DFC
  c->lr=c->r[0]; // 803D9E00
  c->r[1]=c->r[1]+0x00000010u; // 803D9E04
  return; // 803D9E08
}

// btm_read_local_addr_complete
void f_803D9E0C(Ctx* __restrict c) {
  trace_call(0x803D9E0Cu);
  c->r[0]=R8(c->r[3]+0x00000000u); // 803D9E0C
  cmps(c,0,(int32_t)c->r[0],0); // 803D9E10
  if (!crb(c,2)) return; // 803D9E14
  c->r[4]=0u+0x807B0000u; // 803D9E18
  c->r[0]=R8(c->r[3]+0x00000001u); // 803D9E1C
  c->r[4]=c->r[4]+0x00006798u; // 803D9E20
  W8(c->r[4]+0x00000635u,c->r[0]); // 803D9E24
  c->r[0]=R8(c->r[3]+0x00000002u); // 803D9E28
  W8(c->r[4]+0x00000634u,c->r[0]); // 803D9E2C
  c->r[0]=R8(c->r[3]+0x00000003u); // 803D9E30
  W8(c->r[4]+0x00000633u,c->r[0]); // 803D9E34
  c->r[0]=R8(c->r[3]+0x00000004u); // 803D9E38
  W8(c->r[4]+0x00000632u,c->r[0]); // 803D9E3C
  c->r[0]=R8(c->r[3]+0x00000005u); // 803D9E40
  W8(c->r[4]+0x00000631u,c->r[0]); // 803D9E44
  c->r[0]=R8(c->r[3]+0x00000006u); // 803D9E48
  W8(c->r[4]+0x00000630u,c->r[0]); // 803D9E4C
  return; // 803D9E50
}

// BTM_ReadLocalVersion
void f_803D9E54(Ctx* __restrict c) {
  trace_call(0x803D9E54u);
  c->r[5]=0u+0x807B0000u; // 803D9E54
  c->r[5]=c->r[5]+0x00006798u; // 803D9E58
  c->r[0]=R8(c->r[5]+0x0000064Eu); // 803D9E5C
  cmpu(c,0,c->r[0],0x00000004u); // 803D9E60
  if (!crb(c,0)) { goto L_803D9E70; } // 803D9E64
  c->r[3]=0u+0x0000000Cu; // 803D9E68
  return; // 803D9E6C
L_803D9E70:;
  c->r[4]=R16(c->r[5]+0x00000636u); // 803D9E70
  c->r[0]=R16(c->r[5]+0x00000638u); // 803D9E74
  W16(c->r[3]+0x00000000u,c->r[4]); // 803D9E78
  W16(c->r[3]+0x00000002u,c->r[0]); // 803D9E7C
  c->r[4]=R16(c->r[5]+0x0000063Au); // 803D9E80
  c->r[0]=R16(c->r[5]+0x0000063Cu); // 803D9E84
  W16(c->r[3]+0x00000004u,c->r[4]); // 803D9E88
  W16(c->r[3]+0x00000006u,c->r[0]); // 803D9E8C
  c->r[0]=R16(c->r[5]+0x0000063Eu); // 803D9E90
  W16(c->r[3]+0x00000008u,c->r[0]); // 803D9E94
  c->r[3]=0u+0x00000000u; // 803D9E98
  return; // 803D9E9C
}

// BTM_SetDeviceClass
void f_803D9EA0(Ctx* __restrict c) {
  trace_call(0x803D9EA0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803D9EA0
  c->r[0]=c->lr; // 803D9EA4
  c->r[5]=0u+0x00000003u; // 803D9EA8
  W32(c->r[1]+0x00000014u,c->r[0]); // 803D9EAC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 803D9EB0
  c->r[31]=0u+0x807B0000u; // 803D9EB4
  c->r[31]=c->r[31]+0x00006798u; // 803D9EB8
  W32(c->r[1]+0x00000008u,c->r[30]); // 803D9EBC
  c->r[30]=c->r[3]|c->r[3]; // 803D9EC0
  c->r[4]=c->r[30]|c->r[30]; // 803D9EC4
  c->r[3]=c->r[31]+0x00000648u; // 803D9EC8
  c->lr=0x803D9ED0u; f_802DC484(c); // 803D9ECC
  c->r[0]=R8(c->r[31]+0x0000064Eu); // 803D9ED0
  cmpu(c,0,c->r[0],0x00000001u); // 803D9ED4
  if (crb(c,1)) { goto L_803D9EE4; } // 803D9ED8
  c->r[3]=0u+0x0000000Cu; // 803D9EDC
  goto L_803D9F08; // 803D9EE0
L_803D9EE4:;
  c->r[3]=0u+0x00000002u; // 803D9EE4
  c->lr=0x803D9EECu; f_803CDAF4(c); // 803D9EE8
  cmps(c,0,(int32_t)c->r[3],0); // 803D9EEC
  if (crb(c,2)) { goto L_803D9F04; } // 803D9EF0
  c->r[4]=c->r[30]|c->r[30]; // 803D9EF4
  c->lr=0x803D9EFCu; f_803E50B0(c); // 803D9EF8
  c->r[3]=0u+0x00000000u; // 803D9EFC
  goto L_803D9F08; // 803D9F00
L_803D9F04:;
  c->r[3]=0u+0x00000003u; // 803D9F04
L_803D9F08:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 803D9F08
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 803D9F0C
  c->r[30]=R32(c->r[1]+0x00000008u); // 803D9F10
  c->lr=c->r[0]; // 803D9F14
  c->r[1]=c->r[1]+0x00000010u; // 803D9F18
  return; // 803D9F1C
}

// BTM_ReadDeviceClass
void f_803D9F20(Ctx* __restrict c) {
  trace_call(0x803D9F20u);
  c->r[3]=0u+0x807B0000u; // 803D9F20
  c->r[3]=c->r[3]+0x00006798u; // 803D9F24
  c->r[3]=c->r[3]+0x00000648u; // 803D9F28
  return; // 803D9F2C
}

// BTM_ReadLocalFeatures
void f_803D9F30(Ctx* __restrict c) {
  trace_call(0x803D9F30u);
  c->r[3]=0u+0x807B0000u; // 803D9F30
  c->r[3]=c->r[3]+0x00006798u; // 803D9F34
  c->r[3]=c->r[3]+0x00000640u; // 803D9F38
  return; // 803D9F3C
}

// BTM_RegisterForDeviceStatusNotif
void f_803D9F40(Ctx* __restrict c) {
  trace_call(0x803D9F40u);
  c->r[4]=0u+0x807B0000u; // 803D9F40
  c->r[0]=c->r[3]|c->r[3]; // 803D9F44
  c->r[4]=c->r[4]+0x00006798u; // 803D9F48
  c->r[3]=R32(c->r[4]+0x00000568u); // 803D9F4C
  W32(c->r[4]+0x00000568u,c->r[0]); // 803D9F50
  return; // 803D9F54
}

// BTM_VendorSpecificCommand
void f_803D9F58(Ctx* __restrict c) {
  trace_call(0x803D9F58u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803D9F58
  c->r[0]=c->lr; // 803D9F5C
  W32(c->r[1]+0x00000024u,c->r[0]); // 803D9F60
  c->r[11]=c->r[1]+0x00000020u; // 803D9F64
  c->lr=0x803D9F6Cu; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 803D9F68
  c->r[7]=0u+0x807B0000u; // 803D9F6C
  c->r[27]=c->r[3]|c->r[3]; // 803D9F70
  c->r[7]=c->r[7]+0x00006798u; // 803D9F74
  c->r[28]=c->r[4]|c->r[4]; // 803D9F78
  c->r[0]=R8(c->r[7]+0x000027C0u); // 803D9F7C
  c->r[29]=c->r[5]|c->r[5]; // 803D9F80
  c->r[30]=c->r[6]|c->r[6]; // 803D9F84
  cmpu(c,0,c->r[0],0x00000004u); // 803D9F88
  if (crb(c,0)) { goto L_803D9FAC; } // 803D9F8C
  c->r[3]=0u+0x000D0000u; // 803D9F90
  c->r[4]=0u+0x80710000u; // 803D9F94
  c->r[5]=c->r[27]|c->r[27]; // 803D9F98
  c->r[6]=c->r[28]|c->r[28]; // 803D9F9C
  c->r[3]=c->r[3]+0x00000003u; // 803D9FA0
  c->r[4]=c->r[4]+0xFFFFBBF4u; // 803D9FA4
  c->lr=0x803D9FACu; f_803D0510(c); // 803D9FA8
L_803D9FAC:;
  c->r[31]=0u+0x807B0000u; // 803D9FAC
  c->r[31]=c->r[31]+0x00006798u; // 803D9FB0
  c->r[0]=R8(c->r[31]+0x00000650u); // 803D9FB4
  cmps(c,0,(int32_t)c->r[0],0); // 803D9FB8
  if (crb(c,2)) { goto L_803D9FE8; } // 803D9FBC
  c->r[0]=R8(c->r[31]+0x000027C0u); // 803D9FC0
  cmpu(c,0,c->r[0],0x00000004u); // 803D9FC4
  if (crb(c,0)) { goto L_803D9FE0; } // 803D9FC8
  c->r[3]=0u+0x000D0000u; // 803D9FCC
  c->r[4]=0u+0x80710000u; // 803D9FD0
  c->r[3]=c->r[3]+0x00000003u; // 803D9FD4
  c->r[4]=c->r[4]+0xFFFFBC34u; // 803D9FD8
  c->lr=0x803D9FE0u; f_803D04E0(c); // 803D9FDC
L_803D9FE0:;
  c->r[3]=0u+0x00000002u; // 803D9FE0
  goto L_803DA03C; // 803D9FE4
L_803D9FE8:;
  c->r[0]=c->r[28]+0x0000000Bu; // 803D9FE8
  c->r[3]=rotl(c->r[0],0)&0x0000FFFFu; // 803D9FEC
  c->lr=0x803D9FF4u; f_803CD954(c); // 803D9FF0
  cmps(c,0,(int32_t)c->r[3],0); // 803D9FF4
  if (crb(c,2)) { goto L_803DA038; } // 803D9FF8
  cmps(c,0,(int32_t)c->r[30],0); // 803D9FFC
  W32(c->r[31]+0x0000061Cu,c->r[30]); // 803DA000
  if (crb(c,2)) { goto L_803DA010; } // 803DA004
  c->r[0]=0u+0x00000001u; // 803DA008
  W8(c->r[31]+0x00000650u,c->r[0]); // 803DA00C
L_803DA010:;
  c->r[4]=c->r[27]|c->r[27]; // 803DA010
  c->r[5]=c->r[28]|c->r[28]; // 803DA014
  c->r[6]=c->r[29]|c->r[29]; // 803DA018
  c->lr=0x803DA020u; f_803E59E0(c); // 803DA01C
  cmps(c,0,(int32_t)c->r[30],0); // 803DA020
  if (crb(c,2)) { goto L_803DA030; } // 803DA024
  c->r[3]=0u+0x00000001u; // 803DA028
  goto L_803DA03C; // 803DA02C
L_803DA030:;
  c->r[3]=0u+0x00000000u; // 803DA030
  goto L_803DA03C; // 803DA034
L_803DA038:;
  c->r[3]=0u+0x00000003u; // 803DA038
L_803DA03C:;
  c->r[11]=c->r[1]+0x00000020u; // 803DA03C
  c->lr=0x803DA044u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 803DA040
  c->r[0]=R32(c->r[1]+0x00000024u); // 803DA044
  c->lr=c->r[0]; // 803DA048
  c->r[1]=c->r[1]+0x00000020u; // 803DA04C
  return; // 803DA050
}

// btm_vsc_complete
void f_803DA054(Ctx* __restrict c) {
  trace_call(0x803DA054u);
  {uint32_t ea=c->r[1]+0xFFFFFEE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803DA054
  c->r[0]=c->lr; // 803DA058
  c->r[6]=0u+0x807B0000u; // 803DA05C
  c->r[7]=c->r[3]|c->r[3]; // 803DA060
  W32(c->r[1]+0x00000124u,c->r[0]); // 803DA064
  c->r[6]=c->r[6]+0x00006798u; // 803DA068
  c->r[0]=0u+0x00000000u; // 803DA06C
  c->r[3]=c->r[1]+0x0000000Cu; // 803DA070
  W32(c->r[1]+0x0000011Cu,c->r[31]); // 803DA074
  c->r[31]=R32(c->r[6]+0x0000061Cu); // 803DA078
  W8(c->r[6]+0x00000650u,c->r[0]); // 803DA07C
  cmps(c,0,(int32_t)c->r[31],0); // 803DA080
  W32(c->r[6]+0x0000061Cu,c->r[0]); // 803DA084
  if (crb(c,2)) { goto L_803DA0AC; } // 803DA088
  W16(c->r[1]+0x00000008u,c->r[4]); // 803DA08C
  c->r[4]=c->r[7]|c->r[7]; // 803DA090
  W16(c->r[1]+0x0000000Au,c->r[5]); // 803DA094
  c->lr=0x803DA09Cu; f_802DC484(c); // 803DA098
  c->r[12]=c->r[31]|c->r[31]; // 803DA09C
  c->r[3]=c->r[1]+0x00000008u; // 803DA0A0
  c->ctr=c->r[12]; // 803DA0A4
  if (true) { c->lr=0x803DA0ACu; dispatch(c,c->ctr); } // 803DA0A8
L_803DA0AC:;
  c->r[0]=R32(c->r[1]+0x00000124u); // 803DA0AC
  c->r[31]=R32(c->r[1]+0x0000011Cu); // 803DA0B0
  c->lr=c->r[0]; // 803DA0B4
  c->r[1]=c->r[1]+0x00000120u; // 803DA0B8
  return; // 803DA0BC
}

// BTM_RegisterForVSEvents
void f_803DA0C0(Ctx* __restrict c) {
  trace_call(0x803DA0C0u);
  c->r[4]=0u+0x807B0000u; // 803DA0C0
  c->r[4]=c->r[4]+0x00006798u; // 803DA0C4
  c->r[0]=R32(c->r[4]+0x0000056Cu); // 803DA0C8
  cmps(c,0,(int32_t)c->r[0],0); // 803DA0CC
  if (crb(c,2)) { goto L_803DA0E4; } // 803DA0D0
  cmps(c,0,(int32_t)c->r[3],0); // 803DA0D4
  if (crb(c,2)) { goto L_803DA0E4; } // 803DA0D8
  c->r[3]=0u+0x00000002u; // 803DA0DC
  return; // 803DA0E0
L_803DA0E4:;
  c->r[4]=0u+0x807B0000u; // 803DA0E4
  c->r[4]=c->r[4]+0x00006798u; // 803DA0E8
  W32(c->r[4]+0x0000056Cu,c->r[3]); // 803DA0EC
  c->r[3]=0u+0x00000000u; // 803DA0F0
  return; // 803DA0F4
}

// btm_vendor_specific_evt
void f_803DA0F8(Ctx* __restrict c) {
  trace_call(0x803DA0F8u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803DA0F8
  c->r[0]=c->lr; // 803DA0FC
  W32(c->r[1]+0x00000024u,c->r[0]); // 803DA100
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 803DA104
  c->r[31]=0u+0x807B0000u; // 803DA108
  c->r[31]=c->r[31]+0x00006798u; // 803DA10C
  W32(c->r[1]+0x00000018u,c->r[30]); // 803DA110
  c->r[30]=c->r[4]|c->r[4]; // 803DA114
  W32(c->r[1]+0x00000014u,c->r[29]); // 803DA118
  c->r[29]=c->r[3]|c->r[3]; // 803DA11C
  c->r[0]=R16(c->r[31]+0x0000063Cu); // 803DA120
  cmpu(c,0,c->r[0],0x00000012u); // 803DA124
  if (crb(c,2)) { goto L_803DA14C; } // 803DA128
  c->r[0]=R8(c->r[31]+0x000027C0u); // 803DA12C
  cmpu(c,0,c->r[0],0x00000004u); // 803DA130
  if (crb(c,0)) { goto L_803DA14C; } // 803DA134
  c->r[3]=0u+0x000D0000u; // 803DA138
  c->r[4]=0u+0x80710000u; // 803DA13C
  c->r[3]=c->r[3]+0x00000003u; // 803DA140
  c->r[4]=c->r[4]+0xFFFFBC78u; // 803DA144
  c->lr=0x803DA14Cu; f_803D04E0(c); // 803DA148
L_803DA14C:;
  c->r[12]=R32(c->r[31]+0x0000056Cu); // 803DA14C
  c->r[0]=0u+0x00000000u; // 803DA150
  W32(c->r[31]+0x0000061Cu,c->r[0]); // 803DA154
  cmps(c,0,(int32_t)c->r[12],0); // 803DA158
  W8(c->r[31]+0x00000650u,c->r[0]); // 803DA15C
  if (crb(c,2)) { goto L_803DA174; } // 803DA160
  c->r[3]=c->r[30]|c->r[30]; // 803DA164
  c->r[4]=c->r[29]|c->r[29]; // 803DA168
  c->ctr=c->r[12]; // 803DA16C
  if (true) { c->lr=0x803DA174u; dispatch(c,c->ctr); } // 803DA170
L_803DA174:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 803DA174
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 803DA178
  c->r[30]=R32(c->r[1]+0x00000018u); // 803DA17C
  c->r[29]=R32(c->r[1]+0x00000014u); // 803DA180
  c->lr=c->r[0]; // 803DA184
  c->r[1]=c->r[1]+0x00000020u; // 803DA188
  return; // 803DA18C
}

// BTM_WritePageTimeout
void f_803DA190(Ctx* __restrict c) {
  trace_call(0x803DA190u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803DA190
  c->r[0]=c->lr; // 803DA194
  c->r[4]=0u+0x807B0000u; // 803DA198
  W32(c->r[1]+0x00000014u,c->r[0]); // 803DA19C
  c->r[4]=c->r[4]+0x00006798u; // 803DA1A0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 803DA1A4
  c->r[31]=c->r[3]|c->r[3]; // 803DA1A8
  c->r[0]=R8(c->r[4]+0x000027C0u); // 803DA1AC
  cmpu(c,0,c->r[0],0x00000004u); // 803DA1B0
  if (crb(c,0)) { goto L_803DA1D0; } // 803DA1B4
  c->r[3]=0u+0x000D0000u; // 803DA1B8
  c->r[4]=0u+0x80710000u; // 803DA1BC
  c->r[5]=c->r[31]|c->r[31]; // 803DA1C0
  c->r[3]=c->r[3]+0x00000003u; // 803DA1C4
  c->r[4]=c->r[4]+0xFFFFBCB8u; // 803DA1C8
  c->lr=0x803DA1D0u; f_803D04F8(c); // 803DA1CC
L_803DA1D0:;
  c->r[0]=(uint32_t)((int32_t)c->r[31]*(int32_t)625); // 803DA1D0
  c->r[3]=0u+0x10620000u; // 803DA1D4
  c->r[4]=0u+0x807B0000u; // 803DA1D8
  c->r[3]=c->r[3]+0x00004DD3u; // 803DA1DC
  c->r[0]=(uint32_t)(((int64_t)(int32_t)c->r[3]*(int64_t)(int32_t)c->r[0])>>32); // 803DA1E0
  c->r[4]=c->r[4]+0x00006798u; // 803DA1E4
  c->r[3]=0u+0x00000002u; // 803DA1E8
  c->r[0]=sraw(c,c->r[0],6); // 803DA1EC
  c->r[5]=rotl(c->r[0],1)&0x00000001u; // 803DA1F0
  c->r[0]=c->r[0]+c->r[5]; // 803DA1F4
  W16(c->r[4]+0x0000064Cu,c->r[0]); // 803DA1F8
  c->lr=0x803DA200u; f_803CDAF4(c); // 803DA1FC
  cmps(c,0,(int32_t)c->r[3],0); // 803DA200
  if (crb(c,2)) { goto L_803DA218; } // 803DA204
  c->r[4]=c->r[31]|c->r[31]; // 803DA208
  c->lr=0x803DA210u; f_803E4ED8(c); // 803DA20C
  c->r[3]=0u+0x00000000u; // 803DA210
  goto L_803DA21C; // 803DA214
L_803DA218:;
  c->r[3]=0u+0x00000003u; // 803DA218
L_803DA21C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 803DA21C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 803DA220
  c->lr=c->r[0]; // 803DA224
  c->r[1]=c->r[1]+0x00000010u; // 803DA228
  return; // 803DA22C
}

// BTM_ReadStoredLinkKey
void f_803DA230(Ctx* __restrict c) {
  trace_call(0x803DA230u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803DA230
  c->r[0]=c->lr; // 803DA234
  c->r[5]=0u+0x807B0000u; // 803DA238
  W32(c->r[1]+0x00000024u,c->r[0]); // 803DA23C
  c->r[5]=c->r[5]+0x00006798u; // 803DA240
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 803DA244
  c->r[31]=0u+0x00000000u; // 803DA248
  W32(c->r[1]+0x00000018u,c->r[30]); // 803DA24C
  c->r[30]=c->r[4]|c->r[4]; // 803DA250
  W32(c->r[1]+0x00000014u,c->r[29]); // 803DA254
  c->r[29]=c->r[3]|c->r[3]; // 803DA258
  c->r[0]=R32(c->r[5]+0x00000570u); // 803DA25C
  cmps(c,0,(int32_t)c->r[0],0); // 803DA260
  if (crb(c,2)) { goto L_803DA270; } // 803DA264
  c->r[3]=0u+0x00000002u; // 803DA268
  goto L_803DA2EC; // 803DA26C
L_803DA270:;
  cmps(c,0,(int32_t)c->r[3],0); // 803DA270
  if (!crb(c,2)) { goto L_803DA280; } // 803DA274
  c->r[31]=0u+0x00000001u; // 803DA278
  c->r[29]=c->r[1]+0x00000008u; // 803DA27C
L_803DA280:;
  c->r[3]=0u+0x807B0000u; // 803DA280
  c->r[3]=c->r[3]+0x00006798u; // 803DA284
  c->r[0]=R8(c->r[3]+0x000027C0u); // 803DA288
  cmpu(c,0,c->r[0],0x00000004u); // 803DA28C
  if (crb(c,0)) { goto L_803DA2B8; } // 803DA290
  cmps(c,0,(int32_t)c->r[31],0); // 803DA294
  c->r[3]=0u+0x000D0000u; // 803DA298
  c->r[4]=0u+0x80710000u; // 803DA29C
  c->r[5]=c->r[13]+0xFFFFA0ECu; // 803DA2A0
  c->r[3]=c->r[3]+0x00000003u; // 803DA2A4
  c->r[4]=c->r[4]+0xFFFFBD28u; // 803DA2A8
  if (crb(c,2)) { goto L_803DA2B4; } // 803DA2AC
  c->r[5]=c->r[13]+0xFFFFA0E4u; // 803DA2B0
L_803DA2B4:;
  c->lr=0x803DA2B8u; f_803D04F8(c); // 803DA2B4
L_803DA2B8:;
  c->r[3]=0u+0x00000002u; // 803DA2B8
  c->lr=0x803DA2C0u; f_803CDAF4(c); // 803DA2BC
  cmps(c,0,(int32_t)c->r[3],0); // 803DA2C0
  if (crb(c,2)) { goto L_803DA2E8; } // 803DA2C4
  c->r[6]=0u+0x807B0000u; // 803DA2C8
  c->r[4]=c->r[29]|c->r[29]; // 803DA2CC
  c->r[6]=c->r[6]+0x00006798u; // 803DA2D0
  c->r[5]=c->r[31]|c->r[31]; // 803DA2D4
  W32(c->r[6]+0x00000570u,c->r[30]); // 803DA2D8
  c->lr=0x803DA2E0u; f_803E4AC8(c); // 803DA2DC
  c->r[3]=0u+0x00000000u; // 803DA2E0
  goto L_803DA2EC; // 803DA2E4
L_803DA2E8:;
  c->r[3]=0u+0x00000003u; // 803DA2E8
L_803DA2EC:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 803DA2EC
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 803DA2F0
  c->r[30]=R32(c->r[1]+0x00000018u); // 803DA2F4
  c->r[29]=R32(c->r[1]+0x00000014u); // 803DA2F8
  c->lr=c->r[0]; // 803DA2FC
  c->r[1]=c->r[1]+0x00000020u; // 803DA300
  return; // 803DA304
}

// BTM_WriteStoredLinkKey
void f_803DA308(Ctx* __restrict c) {
  trace_call(0x803DA308u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803DA308
  c->r[0]=c->lr; // 803DA30C
  c->r[7]=0u+0x807B0000u; // 803DA310
  W32(c->r[1]+0x00000024u,c->r[0]); // 803DA314
  c->r[7]=c->r[7]+0x00006798u; // 803DA318
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 803DA31C
  c->r[31]=c->r[6]|c->r[6]; // 803DA320
  W32(c->r[1]+0x00000018u,c->r[30]); // 803DA324
  c->r[30]=c->r[5]|c->r[5]; // 803DA328
  W32(c->r[1]+0x00000014u,c->r[29]); // 803DA32C
  c->r[29]=c->r[4]|c->r[4]; // 803DA330
  W32(c->r[1]+0x00000010u,c->r[28]); // 803DA334
  c->r[28]=c->r[3]|c->r[3]; // 803DA338
  c->r[0]=R32(c->r[7]+0x00000570u); // 803DA33C
  cmps(c,0,(int32_t)c->r[0],0); // 803DA340
  if (crb(c,2)) { goto L_803DA350; } // 803DA344
  c->r[3]=0u+0x00000002u; // 803DA348
  goto L_803DA3B8; // 803DA34C
L_803DA350:;
  c->r[0]=R8(c->r[7]+0x000027C0u); // 803DA350
  cmpu(c,0,c->r[0],0x00000004u); // 803DA354
  if (crb(c,0)) { goto L_803DA374; } // 803DA358
  c->r[3]=0u+0x000D0000u; // 803DA35C
  c->r[4]=0u+0x80710000u; // 803DA360
  c->r[5]=c->r[28]|c->r[28]; // 803DA364
  c->r[3]=c->r[3]+0x00000003u; // 803DA368
  c->r[4]=c->r[4]+0xFFFFBD54u; // 803DA36C
  c->lr=0x803DA374u; f_803D04F8(c); // 803DA370
L_803DA374:;
  cmpu(c,0,c->r[28],0x0000000Bu); // 803DA374
  if (!crb(c,1)) { goto L_803DA380; } // 803DA378
  c->r[28]=0u+0x0000000Bu; // 803DA37C
L_803DA380:;
  c->r[3]=0u+0x00000002u; // 803DA380
  c->lr=0x803DA388u; f_803CDAF4(c); // 803DA384
  cmps(c,0,(int32_t)c->r[3],0); // 803DA388
  if (crb(c,2)) { goto L_803DA3B4; } // 803DA38C
  c->r[6]=0u+0x807B0000u; // 803DA390
  c->r[4]=c->r[28]|c->r[28]; // 803DA394
  c->r[6]=c->r[6]+0x00006798u; // 803DA398
  c->r[5]=c->r[29]|c->r[29]; // 803DA39C
  W32(c->r[6]+0x00000570u,c->r[31]); // 803DA3A0
  c->r[6]=c->r[30]|c->r[30]; // 803DA3A4
  c->lr=0x803DA3ACu; f_803E4B28(c); // 803DA3A8
  c->r[3]=0u+0x00000000u; // 803DA3AC
  goto L_803DA3B8; // 803DA3B0
L_803DA3B4:;
  c->r[3]=0u+0x00000003u; // 803DA3B4
L_803DA3B8:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 803DA3B8
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 803DA3BC
  c->r[30]=R32(c->r[1]+0x00000018u); // 803DA3C0
  c->r[29]=R32(c->r[1]+0x00000014u); // 803DA3C4
  c->r[28]=R32(c->r[1]+0x00000010u); // 803DA3C8
  c->lr=c->r[0]; // 803DA3CC
  c->r[1]=c->r[1]+0x00000020u; // 803DA3D0
  return; // 803DA3D4
}

// BTM_DeleteStoredLinkKey
void f_803DA3D8(Ctx* __restrict c) {
  trace_call(0x803DA3D8u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803DA3D8
  c->r[0]=c->lr; // 803DA3DC
  c->r[5]=0u+0x807B0000u; // 803DA3E0
  W32(c->r[1]+0x00000024u,c->r[0]); // 803DA3E4
  c->r[5]=c->r[5]+0x00006798u; // 803DA3E8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 803DA3EC
  c->r[31]=0u+0x00000000u; // 803DA3F0
  W32(c->r[1]+0x00000018u,c->r[30]); // 803DA3F4
  c->r[30]=c->r[4]|c->r[4]; // 803DA3F8
  W32(c->r[1]+0x00000014u,c->r[29]); // 803DA3FC
  c->r[29]=c->r[3]|c->r[3]; // 803DA400
  c->r[0]=R32(c->r[5]+0x00000570u); // 803DA404
  cmps(c,0,(int32_t)c->r[0],0); // 803DA408
  if (crb(c,2)) { goto L_803DA418; } // 803DA40C
  c->r[3]=0u+0x00000002u; // 803DA410
  goto L_803DA48C; // 803DA414
L_803DA418:;
  cmps(c,0,(int32_t)c->r[3],0); // 803DA418
  if (!crb(c,2)) { goto L_803DA428; } // 803DA41C
  c->r[31]=0u+0x00000001u; // 803DA420
  c->r[29]=c->r[1]+0x00000008u; // 803DA424
L_803DA428:;
  c->r[3]=0u+0x807B0000u; // 803DA428
  c->r[3]=c->r[3]+0x00006798u; // 803DA42C
  c->r[0]=R8(c->r[3]+0x000027C0u); // 803DA430
  cmpu(c,0,c->r[0],0x00000004u); // 803DA434
  if (crb(c,0)) { goto L_803DA460; } // 803DA438
  cmps(c,0,(int32_t)c->r[31],0); // 803DA43C
  c->r[3]=0u+0x000D0000u; // 803DA440
  c->r[4]=0u+0x80710000u; // 803DA444
  c->r[5]=c->r[13]+0xFFFFA0ECu; // 803DA448
  c->r[3]=c->r[3]+0x00000003u; // 803DA44C
  c->r[4]=c->r[4]+0xFFFFBD80u; // 803DA450
  if (crb(c,2)) { goto L_803DA45C; } // 803DA454
  c->r[5]=c->r[13]+0xFFFFA0E4u; // 803DA458
L_803DA45C:;
  c->lr=0x803DA460u; f_803D04F8(c); // 803DA45C
L_803DA460:;
  c->r[5]=0u+0x807B0000u; // 803DA460
  c->r[3]=c->r[29]|c->r[29]; // 803DA464
  c->r[5]=c->r[5]+0x00006798u; // 803DA468
  c->r[4]=c->r[31]|c->r[31]; // 803DA46C
  W32(c->r[5]+0x00000570u,c->r[30]); // 803DA470
  c->lr=0x803DA478u; f_803E4CE8(c); // 803DA474
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 803DA478
  if (!crb(c,2)) { goto L_803DA488; } // 803DA47C
  c->r[3]=0u+0x00000003u; // 803DA480
  goto L_803DA48C; // 803DA484
L_803DA488:;
  c->r[3]=0u+0x00000000u; // 803DA488
L_803DA48C:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 803DA48C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 803DA490
  c->r[30]=R32(c->r[1]+0x00000018u); // 803DA494
  c->r[29]=R32(c->r[1]+0x00000014u); // 803DA498
  c->lr=c->r[0]; // 803DA49C
  c->r[1]=c->r[1]+0x00000020u; // 803DA4A0
  return; // 803DA4A4
}

// btm_read_stored_link_key_complete
void f_803DA4A8(Ctx* __restrict c) {
  trace_call(0x803DA4A8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803DA4A8
  c->r[0]=c->lr; // 803DA4AC
  c->r[4]=0u+0x807B0000u; // 803DA4B0
  W32(c->r[1]+0x00000014u,c->r[0]); // 803DA4B4
  c->r[4]=c->r[4]+0x00006798u; // 803DA4B8
  c->r[0]=0u+0x00000000u; // 803DA4BC
  c->r[12]=R32(c->r[4]+0x00000570u); // 803DA4C0
  cmps(c,0,(int32_t)c->r[12],0); // 803DA4C4
  W32(c->r[4]+0x00000570u,c->r[0]); // 803DA4C8
  if (crb(c,2)) { goto L_803DA514; } // 803DA4CC
  c->r[0]=0u+0x00000002u; // 803DA4D0
  W8(c->r[1]+0x00000008u,c->r[0]); // 803DA4D4
  c->r[0]=R8(c->r[3]+0x00000000u); // 803DA4D8
  W8(c->r[1]+0x00000009u,c->r[0]); // 803DA4DC
  c->r[0]=R8(c->r[3]+0x00000002u); // 803DA4E0
  c->r[4]=R8(c->r[3]+0x00000001u); // 803DA4E4
  c->r[0]=rotl(c->r[0],8)&0xFFFFFF00u; // 803DA4E8
  c->r[0]=c->r[4]+c->r[0]; // 803DA4EC
  W16(c->r[1]+0x0000000Au,c->r[0]); // 803DA4F0
  c->r[0]=R8(c->r[3]+0x00000004u); // 803DA4F4
  c->r[4]=R8(c->r[3]+0x00000003u); // 803DA4F8
  c->r[3]=c->r[1]+0x00000008u; // 803DA4FC
  c->r[0]=rotl(c->r[0],8)&0xFFFFFF00u; // 803DA500
  c->r[0]=c->r[4]+c->r[0]; // 803DA504
  W16(c->r[1]+0x0000000Cu,c->r[0]); // 803DA508
  c->ctr=c->r[12]; // 803DA50C
  if (true) { c->lr=0x803DA514u; dispatch(c,c->ctr); } // 803DA510
L_803DA514:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 803DA514
  c->lr=c->r[0]; // 803DA518
  c->r[1]=c->r[1]+0x00000010u; // 803DA51C
  return; // 803DA520
}

// btm_write_stored_link_key_complete
void f_803DA524(Ctx* __restrict c) {
  trace_call(0x803DA524u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803DA524
  c->r[0]=c->lr; // 803DA528
  c->r[4]=0u+0x807B0000u; // 803DA52C
  W32(c->r[1]+0x00000014u,c->r[0]); // 803DA530
  c->r[4]=c->r[4]+0x00006798u; // 803DA534
  c->r[0]=0u+0x00000000u; // 803DA538
  c->r[12]=R32(c->r[4]+0x00000570u); // 803DA53C
  cmps(c,0,(int32_t)c->r[12],0); // 803DA540
  W32(c->r[4]+0x00000570u,c->r[0]); // 803DA544
  if (crb(c,2)) { goto L_803DA570; } // 803DA548
  c->r[0]=0u+0x00000003u; // 803DA54C
  W8(c->r[1]+0x00000008u,c->r[0]); // 803DA550
  c->r[0]=R8(c->r[3]+0x00000000u); // 803DA554
  W8(c->r[1]+0x00000009u,c->r[0]); // 803DA558
  c->r[0]=R8(c->r[3]+0x00000001u); // 803DA55C
  c->r[3]=c->r[1]+0x00000008u; // 803DA560
  W8(c->r[1]+0x0000000Au,c->r[0]); // 803DA564
  c->ctr=c->r[12]; // 803DA568
  if (true) { c->lr=0x803DA570u; dispatch(c,c->ctr); } // 803DA56C
L_803DA570:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 803DA570
  c->lr=c->r[0]; // 803DA574
  c->r[1]=c->r[1]+0x00000010u; // 803DA578
  return; // 803DA57C
}

// btm_delete_stored_link_key_complete
void f_803DA580(Ctx* __restrict c) {
  trace_call(0x803DA580u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803DA580
  c->r[0]=c->lr; // 803DA584
  c->r[4]=0u+0x807B0000u; // 803DA588
  W32(c->r[1]+0x00000014u,c->r[0]); // 803DA58C
  c->r[4]=c->r[4]+0x00006798u; // 803DA590
  c->r[0]=0u+0x00000000u; // 803DA594
  c->r[12]=R32(c->r[4]+0x00000570u); // 803DA598
  cmps(c,0,(int32_t)c->r[12],0); // 803DA59C
  W32(c->r[4]+0x00000570u,c->r[0]); // 803DA5A0
  if (crb(c,2)) { goto L_803DA5D8; } // 803DA5A4
  c->r[0]=0u+0x00000004u; // 803DA5A8
  W8(c->r[1]+0x00000008u,c->r[0]); // 803DA5AC
  c->r[0]=R8(c->r[3]+0x00000000u); // 803DA5B0
  W8(c->r[1]+0x00000009u,c->r[0]); // 803DA5B4
  c->r[0]=R8(c->r[3]+0x00000002u); // 803DA5B8
  c->r[4]=R8(c->r[3]+0x00000001u); // 803DA5BC
  c->r[3]=c->r[1]+0x00000008u; // 803DA5C0
  c->r[0]=rotl(c->r[0],8)&0xFFFFFF00u; // 803DA5C4
  c->r[0]=c->r[4]+c->r[0]; // 803DA5C8
  W16(c->r[1]+0x0000000Au,c->r[0]); // 803DA5CC
  c->ctr=c->r[12]; // 803DA5D0
  if (true) { c->lr=0x803DA5D8u; dispatch(c,c->ctr); } // 803DA5D4
L_803DA5D8:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 803DA5D8
  c->lr=c->r[0]; // 803DA5DC
  c->r[1]=c->r[1]+0x00000010u; // 803DA5E0
  return; // 803DA5E4
}

// btm_return_link_keys_evt
void f_803DA5E8(Ctx* __restrict c) {
  trace_call(0x803DA5E8u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803DA5E8
  c->r[0]=c->lr; // 803DA5EC
  c->r[4]=0u+0x807B0000u; // 803DA5F0
  W32(c->r[1]+0x00000024u,c->r[0]); // 803DA5F4
  c->r[4]=c->r[4]+0x00006798u; // 803DA5F8
  c->r[12]=R32(c->r[4]+0x00000570u); // 803DA5FC
  cmps(c,0,(int32_t)c->r[12],0); // 803DA600
  if (crb(c,2)) { goto L_803DA764; } // 803DA604
  c->r[5]=c->r[3]+0x00000002u; // 803DA608
  c->r[4]=0u+0x00000000u; // 803DA60C
  goto L_803DA74C; // 803DA610
L_803DA614:;
  c->r[11]=R8(c->r[5]+0x00000000u); // 803DA614
  c->r[4]=c->r[4]+0x00000001u; // 803DA618
  c->r[10]=R8(c->r[5]+0x00000001u); // 803DA61C
  c->r[9]=R8(c->r[5]+0x00000002u); // 803DA620
  c->r[8]=R8(c->r[5]+0x00000003u); // 803DA624
  c->r[7]=R8(c->r[5]+0x00000004u); // 803DA628
  c->r[6]=R8(c->r[5]+0x00000005u); // 803DA62C
  c->r[0]=R8(c->r[5]+0x00000006u); // 803DA630
  W8(c->r[1]+0x00000017u,c->r[0]); // 803DA634
  c->r[0]=R8(c->r[5]+0x00000007u); // 803DA638
  W8(c->r[1]+0x00000016u,c->r[0]); // 803DA63C
  c->r[0]=R8(c->r[5]+0x00000008u); // 803DA640
  W8(c->r[1]+0x00000015u,c->r[0]); // 803DA644
  c->r[0]=R8(c->r[5]+0x00000009u); // 803DA648
  W8(c->r[1]+0x00000014u,c->r[0]); // 803DA64C
  c->r[0]=R8(c->r[5]+0x0000000Au); // 803DA650
  W8(c->r[1]+0x00000013u,c->r[0]); // 803DA654
  c->r[0]=R8(c->r[5]+0x0000000Bu); // 803DA658
  W8(c->r[1]+0x00000012u,c->r[0]); // 803DA65C
  c->r[0]=R8(c->r[5]+0x0000000Cu); // 803DA660
  W8(c->r[1]+0x00000011u,c->r[0]); // 803DA664
  c->r[0]=R8(c->r[5]+0x0000000Du); // 803DA668
  W8(c->r[1]+0x00000010u,c->r[0]); // 803DA66C
  c->r[0]=R8(c->r[5]+0x0000000Eu); // 803DA670
  W8(c->r[1]+0x0000000Fu,c->r[0]); // 803DA674
  c->r[0]=R8(c->r[5]+0x0000000Fu); // 803DA678
  W8(c->r[1]+0x0000000Eu,c->r[0]); // 803DA67C
  c->r[0]=R8(c->r[5]+0x00000010u); // 803DA680
  W8(c->r[1]+0x0000000Du,c->r[0]); // 803DA684
  c->r[0]=R8(c->r[5]+0x00000011u); // 803DA688
  W8(c->r[1]+0x0000000Cu,c->r[0]); // 803DA68C
  c->r[0]=R8(c->r[5]+0x00000012u); // 803DA690
  W8(c->r[1]+0x0000000Bu,c->r[0]); // 803DA694
  c->r[0]=R8(c->r[5]+0x00000013u); // 803DA698
  W8(c->r[1]+0x0000000Au,c->r[0]); // 803DA69C
  c->r[0]=R8(c->r[5]+0x00000014u); // 803DA6A0
  W8(c->r[1]+0x00000009u,c->r[0]); // 803DA6A4
  c->r[0]=R8(c->r[5]+0x00000015u); // 803DA6A8
  W8(c->r[1]+0x00000008u,c->r[0]); // 803DA6AC
  W8(c->r[5]+0x00000000u,c->r[6]); // 803DA6B0
  W8(c->r[5]+0x00000001u,c->r[7]); // 803DA6B4
  W8(c->r[5]+0x00000002u,c->r[8]); // 803DA6B8
  W8(c->r[5]+0x00000003u,c->r[9]); // 803DA6BC
  W8(c->r[5]+0x00000004u,c->r[10]); // 803DA6C0
  W8(c->r[5]+0x00000005u,c->r[11]); // 803DA6C4
  c->r[0]=R8(c->r[1]+0x00000008u); // 803DA6C8
  W8(c->r[5]+0x00000006u,c->r[0]); // 803DA6CC
  c->r[0]=R8(c->r[1]+0x00000009u); // 803DA6D0
  W8(c->r[5]+0x00000007u,c->r[0]); // 803DA6D4
  c->r[0]=R8(c->r[1]+0x0000000Au); // 803DA6D8
  W8(c->r[5]+0x00000008u,c->r[0]); // 803DA6DC
  c->r[0]=R8(c->r[1]+0x0000000Bu); // 803DA6E0
  W8(c->r[5]+0x00000009u,c->r[0]); // 803DA6E4
  c->r[0]=R8(c->r[1]+0x0000000Cu); // 803DA6E8
  W8(c->r[5]+0x0000000Au,c->r[0]); // 803DA6EC
  c->r[0]=R8(c->r[1]+0x0000000Du); // 803DA6F0
  W8(c->r[5]+0x0000000Bu,c->r[0]); // 803DA6F4
  c->r[0]=R8(c->r[1]+0x0000000Eu); // 803DA6F8
  W8(c->r[5]+0x0000000Cu,c->r[0]); // 803DA6FC
  c->r[0]=R8(c->r[1]+0x0000000Fu); // 803DA700
  W8(c->r[5]+0x0000000Du,c->r[0]); // 803DA704
  c->r[0]=R8(c->r[1]+0x00000010u); // 803DA708
  W8(c->r[5]+0x0000000Eu,c->r[0]); // 803DA70C
  c->r[0]=R8(c->r[1]+0x00000011u); // 803DA710
  W8(c->r[5]+0x0000000Fu,c->r[0]); // 803DA714
  c->r[0]=R8(c->r[1]+0x00000012u); // 803DA718
  W8(c->r[5]+0x00000010u,c->r[0]); // 803DA71C
  c->r[0]=R8(c->r[1]+0x00000013u); // 803DA720
  W8(c->r[5]+0x00000011u,c->r[0]); // 803DA724
  c->r[0]=R8(c->r[1]+0x00000014u); // 803DA728
  W8(c->r[5]+0x00000012u,c->r[0]); // 803DA72C
  c->r[0]=R8(c->r[1]+0x00000015u); // 803DA730
  W8(c->r[5]+0x00000013u,c->r[0]); // 803DA734
  c->r[0]=R8(c->r[1]+0x00000016u); // 803DA738
  W8(c->r[5]+0x00000014u,c->r[0]); // 803DA73C
  c->r[0]=R8(c->r[1]+0x00000017u); // 803DA740
  W8(c->r[5]+0x00000015u,c->r[0]); // 803DA744
  c->r[5]=c->r[5]+0x00000016u; // 803DA748
L_803DA74C:;
  c->r[0]=R8(c->r[3]+0x00000001u); // 803DA74C
  c->r[6]=rotl(c->r[4],0)&0x000000FFu; // 803DA750
  cmpu(c,0,c->r[6],c->r[0]); // 803DA754
  if (crb(c,0)) { IRQCHK(c); goto L_803DA614; } // 803DA758
  c->ctr=c->r[12]; // 803DA75C
  if (true) { c->lr=0x803DA764u; dispatch(c,c->ctr); } // 803DA760
L_803DA764:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 803DA764
  c->lr=c->r[0]; // 803DA768
  c->r[1]=c->r[1]+0x00000020u; // 803DA76C
  return; // 803DA770
}

// btm_report_device_status
void f_803DA774(Ctx* __restrict c) {
  trace_call(0x803DA774u);
  c->r[4]=0u+0x807B0000u; // 803DA774
  c->r[4]=c->r[4]+0x00006798u; // 803DA778
  c->r[12]=R32(c->r[4]+0x00000568u); // 803DA77C
  cmps(c,0,(int32_t)c->r[12],0); // 803DA780
  if (crb(c,2)) return; // 803DA784
  c->ctr=c->r[12]; // 803DA788
  if (true) { dispatch(c,c->ctr); return; } // 803DA78C
  return; // 803DA790
}

// btm_discovery_db_init
void f_803DA794(Ctx* __restrict c) {
  trace_call(0x803DA794u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803DA794
  c->r[0]=c->lr; // 803DA798
  c->r[4]=0u+0x00000000u; // 803DA79C
  c->r[5]=0u+0x00001020u; // 803DA7A0
  W32(c->r[1]+0x00000014u,c->r[0]); // 803DA7A4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 803DA7A8
  c->r[31]=0u+0x807B0000u; // 803DA7AC
  c->r[31]=c->r[31]+0x00006798u; // 803DA7B0
  c->r[0]=c->r[31]+0x000006D4u; // 803DA7B4
  W32(c->r[31]+0x00001678u,c->r[0]); // 803DA7B8
  c->r[3]=c->r[31]+0x00000658u; // 803DA7BC
  c->lr=0x803DA7C4u; f_800043EC(c); // 803DA7C0
  c->r[3]=0u+0x00000001u; // 803DA7C4
  c->r[4]=0u+0x00000002u; // 803DA7C8
  c->r[0]=0u+0x00001002u; // 803DA7CC
  W16(c->r[31]+0x00000670u,c->r[3]); // 803DA7D0
  c->r[3]=R32(c->r[31]+0x00001678u); // 803DA7D4
  c->r[6]=c->r[31]+0x00000674u; // 803DA7D8
  W16(c->r[31]+0x00000674u,c->r[4]); // 803DA7DC
  c->r[4]=0u+0x00000FA0u; // 803DA7E0
  c->r[5]=0u+0x00000001u; // 803DA7E4
  c->r[7]=0u+0x00000000u; // 803DA7E8
  W16(c->r[31]+0x00000678u,c->r[0]); // 803DA7EC
  c->r[8]=0u+0x00000000u; // 803DA7F0
  c->lr=0x803DA7F8u; f_803F53B8(c); // 803DA7F4
  c->r[0]=R32(c->r[1]+0x00000014u); // 803DA7F8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 803DA7FC
  c->lr=c->r[0]; // 803DA800
  c->r[1]=c->r[1]+0x00000010u; // 803DA804
  return; // 803DA808
}

// btm_discovery_db_reset
void f_803DA80C(Ctx* __restrict c) {
  trace_call(0x803DA80Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803DA80C
  c->r[0]=c->lr; // 803DA810
  W32(c->r[1]+0x00000014u,c->r[0]); // 803DA814
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 803DA818
  c->r[31]=0u+0x807B0000u; // 803DA81C
  c->r[31]=c->r[31]+0x00006798u; // 803DA820
  c->r[3]=c->r[31]+0x00000658u; // 803DA824
  c->lr=0x803DA82Cu; f_803D0B1C(c); // 803DA828
  c->r[0]=R8(c->r[31]+0x00001674u); // 803DA82C
  cmps(c,0,(int32_t)c->r[0],0); // 803DA830
  if (crb(c,2)) { goto L_803DA85C; } // 803DA834
  c->r[12]=R32(c->r[31]+0x000006D0u); // 803DA838
  c->r[0]=0u+0x00000000u; // 803DA83C
  W8(c->r[31]+0x00001674u,c->r[0]); // 803DA840
  cmps(c,0,(int32_t)c->r[12],0); // 803DA844
  W32(c->r[31]+0x000006D0u,c->r[0]); // 803DA848
  if (crb(c,2)) { goto L_803DA85C; } // 803DA84C
  c->r[3]=0u+0x00000000u; // 803DA850
  c->ctr=c->r[12]; // 803DA854
  if (true) { c->lr=0x803DA85Cu; dispatch(c,c->ctr); } // 803DA858
L_803DA85C:;
  c->r[31]=0u+0x807B0000u; // 803DA85C
  c->r[4]=0u+0x00000000u; // 803DA860
  c->r[31]=c->r[31]+0x00006798u; // 803DA864
  c->r[5]=0u+0x00001020u; // 803DA868
  c->r[0]=c->r[31]+0x000006D4u; // 803DA86C
  W32(c->r[31]+0x00001678u,c->r[0]); // 803DA870
  c->r[3]=c->r[31]+0x00000658u; // 803DA874
  c->lr=0x803DA87Cu; f_800043EC(c); // 803DA878
  c->r[3]=0u+0x00000001u; // 803DA87C
  c->r[4]=0u+0x00000002u; // 803DA880
  c->r[0]=0u+0x00001002u; // 803DA884
  W16(c->r[31]+0x00000670u,c->r[3]); // 803DA888
  c->r[3]=R32(c->r[31]+0x00001678u); // 803DA88C
  c->r[6]=c->r[31]+0x00000674u; // 803DA890
  W16(c->r[31]+0x00000674u,c->r[4]); // 803DA894
  c->r[4]=0u+0x00000FA0u; // 803DA898
  c->r[5]=0u+0x00000001u; // 803DA89C
  c->r[7]=0u+0x00000000u; // 803DA8A0
  W16(c->r[31]+0x00000678u,c->r[0]); // 803DA8A4
  c->r[8]=0u+0x00000000u; // 803DA8A8
  c->lr=0x803DA8B0u; f_803F53B8(c); // 803DA8AC
  c->r[0]=R32(c->r[1]+0x00000014u); // 803DA8B0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 803DA8B4
  c->lr=c->r[0]; // 803DA8B8
  c->r[1]=c->r[1]+0x00000010u; // 803DA8BC
  return; // 803DA8C0
}

// fn_803DA8C4
void f_803DA8C4(Ctx* __restrict c) {
  trace_call(0x803DA8C4u);
  return; // 803DA8C4
}

// BTM_SetDiscoverability
void f_803DA8C8(Ctx* __restrict c) {
  trace_call(0x803DA8C8u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803DA8C8
  c->r[0]=c->lr; // 803DA8CC
  W32(c->r[1]+0x00000034u,c->r[0]); // 803DA8D0
  c->r[11]=c->r[1]+0x00000030u; // 803DA8D4
  c->lr=0x803DA8DCu; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 803DA8D8
  cmps(c,0,(int32_t)c->r[3],0); // 803DA8DC
  c->r[31]=c->r[3]|c->r[3]; // 803DA8E0
  c->r[27]=c->r[4]|c->r[4]; // 803DA8E4
  c->r[28]=c->r[5]|c->r[5]; // 803DA8E8
  c->r[30]=0u+0x00000000u; // 803DA8EC
  if (crb(c,2)) { goto L_803DA90C; } // 803DA8F0
  cmpu(c,0,c->r[3],0x00000001u); // 803DA8F4
  if (crb(c,2)) { goto L_803DA90C; } // 803DA8F8
  cmpu(c,0,c->r[3],0x00000002u); // 803DA8FC
  if (crb(c,2)) { goto L_803DA90C; } // 803DA900
  c->r[3]=0u+0x00000005u; // 803DA904
  goto L_803DAB34; // 803DA908
L_803DA90C:;
  c->r[3]=0u+0x807B0000u; // 803DA90C
  c->r[3]=c->r[3]+0x00006798u; // 803DA910
  c->r[0]=R8(c->r[3]+0x0000064Eu); // 803DA914
  cmpu(c,0,c->r[0],0x00000003u); // 803DA918
  if (!crb(c,0)) { goto L_803DA928; } // 803DA91C
  c->r[3]=0u+0x0000000Cu; // 803DA920
  goto L_803DAB34; // 803DA924
L_803DA928:;
  cmps(c,0,(int32_t)c->r[4],0); // 803DA928
  if (!crb(c,2)) { goto L_803DA934; } // 803DA92C
  c->r[27]=0u+0x00000012u; // 803DA930
L_803DA934:;
  cmps(c,0,(int32_t)c->r[5],0); // 803DA934
  if (!crb(c,2)) { goto L_803DA940; } // 803DA938
  c->r[28]=0u+0x00000800u; // 803DA93C
L_803DA940:;
  c->r[3]=0u+0x807B0000u; // 803DA940
  c->r[3]=c->r[3]+0x00006798u; // 803DA944
  c->r[0]=R8(c->r[3]+0x000027C0u); // 803DA948
  cmpu(c,0,c->r[0],0x00000003u); // 803DA94C
  if (crb(c,0)) { goto L_803DA974; } // 803DA950
  c->r[3]=0u+0x000D0000u; // 803DA954
  c->r[4]=0u+0x80710000u; // 803DA958
  c->r[5]=c->r[31]|c->r[31]; // 803DA95C
  c->r[6]=c->r[27]|c->r[27]; // 803DA960
  c->r[7]=c->r[28]|c->r[28]; // 803DA964
  c->r[3]=c->r[3]+0x00000002u; // 803DA968
  c->r[4]=c->r[4]+0xFFFFBDB8u; // 803DA96C
  c->lr=0x803DA974u; f_803D0528(c); // 803DA970
L_803DA974:;
  cmps(c,0,(int32_t)c->r[31],0); // 803DA974
  if (crb(c,2)) { goto L_803DA9AC; } // 803DA978
  cmpu(c,0,c->r[27],0x00000012u); // 803DA97C
  if (crb(c,0)) { goto L_803DA9A4; } // 803DA980
  cmpu(c,0,c->r[27],0x00001000u); // 803DA984
  if (crb(c,1)) { goto L_803DA9A4; } // 803DA988
  cmpu(c,0,c->r[28],0x00000012u); // 803DA98C
  if (crb(c,0)) { goto L_803DA9A4; } // 803DA990
  cmpu(c,0,c->r[28],0x00001000u); // 803DA994
  if (crb(c,1)) { goto L_803DA9A4; } // 803DA998
  cmpu(c,0,c->r[27],c->r[28]); // 803DA99C
  if (!crb(c,1)) { goto L_803DA9AC; } // 803DA9A0
L_803DA9A4:;
  c->r[3]=0u+0x00000005u; // 803DA9A4
  goto L_803DAB34; // 803DA9A8
L_803DA9AC:;
  cmps(c,0,(int32_t)c->r[31],0); // 803DA9AC
  if (crb(c,2)) { goto L_803DAA20; } // 803DA9B0
  c->r[3]=0u+0x00000002u; // 803DA9B4
  c->lr=0x803DA9BCu; f_803CDAF4(c); // 803DA9B8
  cmps(c,0,(int32_t)c->r[3],0); // 803DA9BC
  c->r[29]=c->r[3]|c->r[3]; // 803DA9C0
  if (crb(c,2)) { goto L_803DAA18; } // 803DA9C4
  c->r[0]=rotl(c->r[31],0)&0x00000001u; cr0(c,c->r[0]); // 803DA9C8
  if (crb(c,2)) { goto L_803DAA04; } // 803DA9CC
  c->r[3]=c->r[1]+0x0000000Cu; // 803DA9D0
  c->r[4]=c->r[2]+0x00000E94u; // 803DA9D4
  c->r[5]=0u+0x00000003u; // 803DA9D8
  c->lr=0x803DA9E0u; f_802DC484(c); // 803DA9DC
  c->r[3]=c->r[1]+0x0000000Fu; // 803DA9E0
  c->r[4]=c->r[2]+0x00000E90u; // 803DA9E4
  c->r[5]=0u+0x00000003u; // 803DA9E8
  c->lr=0x803DA9F0u; f_802DC484(c); // 803DA9EC
  c->r[3]=c->r[29]|c->r[29]; // 803DA9F0
  c->r[5]=c->r[1]+0x0000000Cu; // 803DA9F4
  c->r[4]=0u+0x00000002u; // 803DA9F8
  c->lr=0x803DAA00u; f_803E5288(c); // 803DA9FC
  goto L_803DAA10; // 803DAA00
L_803DAA04:;
  c->r[4]=0u+0x00000001u; // 803DAA04
  c->r[5]=c->r[2]+0x00000E90u; // 803DAA08
  c->lr=0x803DAA10u; f_803E5288(c); // 803DAA0C
L_803DAA10:;
  c->r[30]=c->r[30]|0x00000001u; // 803DAA10
  goto L_803DAA20; // 803DAA14
L_803DAA18:;
  c->r[3]=0u+0x00000003u; // 803DAA18
  goto L_803DAB34; // 803DAA1C
L_803DAA20:;
  c->r[3]=0u+0x807B0000u; // 803DAA20
  c->r[3]=c->r[3]+0x00006798u; // 803DAA24
  c->r[0]=R16(c->r[3]+0x000016A0u); // 803DAA28
  cmpu(c,0,c->r[27],c->r[0]); // 803DAA2C
  if (!crb(c,2)) { goto L_803DAA40; } // 803DAA30
  c->r[0]=R16(c->r[3]+0x000016A2u); // 803DAA34
  cmpu(c,0,c->r[28],c->r[0]); // 803DAA38
  if (crb(c,2)) { goto L_803DAA78; } // 803DAA3C
L_803DAA40:;
  c->r[3]=0u+0x00000002u; // 803DAA40
  c->lr=0x803DAA48u; f_803CDAF4(c); // 803DAA44
  cmps(c,0,(int32_t)c->r[3],0); // 803DAA48
  if (crb(c,2)) { goto L_803DAA70; } // 803DAA4C
  c->r[6]=0u+0x807B0000u; // 803DAA50
  c->r[4]=c->r[28]|c->r[28]; // 803DAA54
  c->r[6]=c->r[6]+0x00006798u; // 803DAA58
  c->r[5]=c->r[27]|c->r[27]; // 803DAA5C
  W16(c->r[6]+0x000016A0u,c->r[27]); // 803DAA60
  W16(c->r[6]+0x000016A2u,c->r[28]); // 803DAA64
  c->lr=0x803DAA6Cu; f_803E4F84(c); // 803DAA68
  goto L_803DAA78; // 803DAA6C
L_803DAA70:;
  c->r[3]=0u+0x00000003u; // 803DAA70
  goto L_803DAB34; // 803DAA74
L_803DAA78:;
  c->r[3]=0u+0x00000002u; // 803DAA78
  c->lr=0x803DAA80u; f_803CDAF4(c); // 803DAA7C
  cmps(c,0,(int32_t)c->r[3],0); // 803DAA80
  if (crb(c,2)) { goto L_803DAABC; } // 803DAA84
  c->r[4]=0u+0x807B0000u; // 803DAA88
  c->r[4]=c->r[4]+0x00006798u; // 803DAA8C
  c->r[0]=R16(c->r[4]+0x0000169Au); // 803DAA90
  cmps(c,0,(int32_t)c->r[0],0); // 803DAA94
  if (crb(c,2)) { goto L_803DAAA4; } // 803DAA98
  c->r[0]=c->r[30]|0x00000002u; // 803DAA9C
  c->r[30]=rotl(c->r[0],0)&0x000000FFu; // 803DAAA0
L_803DAAA4:;
  c->r[5]=0u+0x807B0000u; // 803DAAA4
  c->r[4]=rotl(c->r[30],0)&0x000000FFu; // 803DAAA8
  c->r[5]=c->r[5]+0x00006798u; // 803DAAAC
  W16(c->r[5]+0x00001698u,c->r[31]); // 803DAAB0
  c->lr=0x803DAAB8u; f_803E4F10(c); // 803DAAB4
  goto L_803DAAC4; // 803DAAB8
L_803DAABC:;
  c->r[3]=0u+0x00000003u; // 803DAABC
  goto L_803DAB34; // 803DAAC0
L_803DAAC4:;
  c->lr=0x803DAAC8u; f_803D9F20(c); // 803DAAC4
  c->r[4]=R8(c->r[3]+0x00000000u); // 803DAAC8
  c->r[6]=rotl(c->r[31],0)&0x00000001u; // 803DAACC
  c->r[5]=R8(c->r[3]+0x00000001u); // 803DAAD0
  c->r[4]=rotl(c->r[4],8)&0x0000FF00u; // 803DAAD4
  c->r[0]=rotl(c->r[5],0)&0x000000E0u; // 803DAAD8
  c->r[4]=c->r[4]+c->r[0]; // 803DAADC
  c->r[0]=rotl(c->r[4],27)&0x00000001u; // 803DAAE0
  c->r[0]=c->r[6]^c->r[0]; cr0(c,c->r[0]); // 803DAAE4
  c->r[4]=rotl(c->r[4],0)&0x0000FFFFu; // 803DAAE8
  if (crb(c,2)) { goto L_803DAB30; } // 803DAAEC
  c->r[3]=R8(c->r[3]+0x00000002u); // 803DAAF0
  cmps(c,0,(int32_t)c->r[6],0); // 803DAAF4
  c->r[0]=rotl(c->r[4],0)&0xFFFFFFDFu; // 803DAAF8
  c->r[5]=rotl(c->r[5],0)&0x0000001Fu; // 803DAAFC
  c->r[6]=rotl(c->r[3],0)&0x000000FCu; // 803DAB00
  c->r[0]=rotl(c->r[0],0)&0x0000FFFFu; // 803DAB04
  if (crb(c,2)) { goto L_803DAB10; } // 803DAB08
  c->r[0]=c->r[4]|0x00000020u; // 803DAB0C
L_803DAB10:;
  c->r[3]=rotl(c->r[0],0)&0x000000E0u; // 803DAB10
  c->r[0]=rotl(c->r[0],24)&0x000000FFu; // 803DAB14
  c->r[4]=c->r[5]+c->r[3]; // 803DAB18
  W8(c->r[1]+0x0000000Au,c->r[6]); // 803DAB1C
  c->r[3]=c->r[1]+0x00000008u; // 803DAB20
  W8(c->r[1]+0x00000009u,c->r[4]); // 803DAB24
  W8(c->r[1]+0x00000008u,c->r[0]); // 803DAB28
  c->lr=0x803DAB30u; f_803D9EA0(c); // 803DAB2C
L_803DAB30:;
  c->r[3]=0u+0x00000000u; // 803DAB30
L_803DAB34:;
  c->r[11]=c->r[1]+0x00000030u; // 803DAB34
  c->lr=0x803DAB3Cu; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 803DAB38
  c->r[0]=R32(c->r[1]+0x00000034u); // 803DAB3C
  c->lr=c->r[0]; // 803DAB40
  c->r[1]=c->r[1]+0x00000030u; // 803DAB44
  return; // 803DAB48
}

// BTM_SetInquiryScanType
void f_803DAB4C(Ctx* __restrict c) {
  trace_call(0x803DAB4Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803DAB4C
  c->r[0]=c->lr; // 803DAB50
  cmps(c,0,(int32_t)c->r[3],0); // 803DAB54
  W32(c->r[1]+0x00000014u,c->r[0]); // 803DAB58
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 803DAB5C
  W32(c->r[1]+0x00000008u,c->r[30]); // 803DAB60
  c->r[30]=c->r[3]|c->r[3]; // 803DAB64
  if (crb(c,2)) { goto L_803DAB7C; } // 803DAB68
  cmpu(c,0,c->r[3],0x00000001u); // 803DAB6C
  if (crb(c,2)) { goto L_803DAB7C; } // 803DAB70
  c->r[3]=0u+0x00000005u; // 803DAB74
  goto L_803DABE4; // 803DAB78
L_803DAB7C:;
  c->r[31]=0u+0x807B0000u; // 803DAB7C
  c->r[31]=c->r[31]+0x00006798u; // 803DAB80
  c->r[0]=R8(c->r[31]+0x00000643u); // 803DAB84
  c->r[0]=rotl(c->r[0],0)&0x00000010u; cr0(c,c->r[0]); // 803DAB88
  if (!crb(c,2)) { goto L_803DAB98; } // 803DAB8C
  c->r[3]=0u+0x00000004u; // 803DAB90
  goto L_803DABE4; // 803DAB94
L_803DAB98:;
  c->r[0]=R16(c->r[31]+0x000016A4u); // 803DAB98
  cmpu(c,0,c->r[3],c->r[0]); // 803DAB9C
  if (crb(c,2)) { goto L_803DABE0; } // 803DABA0
  c->lr=0x803DABA8u; f_803D90A0(c); // 803DABA4
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 803DABA8
  if (crb(c,2)) { goto L_803DABD8; } // 803DABAC
  c->r[3]=0u+0x00000002u; // 803DABB0
  c->lr=0x803DABB8u; f_803CDAF4(c); // 803DABB4
  cmps(c,0,(int32_t)c->r[3],0); // 803DABB8
  if (crb(c,2)) { goto L_803DABD0; } // 803DABBC
  c->r[4]=rotl(c->r[30],0)&0x000000FFu; // 803DABC0
  c->lr=0x803DABC8u; f_803E5950(c); // 803DABC4
  W16(c->r[31]+0x000016A4u,c->r[30]); // 803DABC8
  goto L_803DABE0; // 803DABCC
L_803DABD0:;
  c->r[3]=0u+0x00000003u; // 803DABD0
  goto L_803DABE4; // 803DABD4
L_803DABD8:;
  c->r[3]=0u+0x00000006u; // 803DABD8
  goto L_803DABE4; // 803DABDC
L_803DABE0:;
  c->r[3]=0u+0x00000000u; // 803DABE0
L_803DABE4:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 803DABE4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 803DABE8
  c->r[30]=R32(c->r[1]+0x00000008u); // 803DABEC
  c->lr=c->r[0]; // 803DABF0
  c->r[1]=c->r[1]+0x00000010u; // 803DABF4
  return; // 803DABF8
}

// BTM_SetPageScanType
void f_803DABFC(Ctx* __restrict c) {
  trace_call(0x803DABFCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803DABFC
  c->r[0]=c->lr; // 803DAC00
  cmps(c,0,(int32_t)c->r[3],0); // 803DAC04
  W32(c->r[1]+0x00000014u,c->r[0]); // 803DAC08
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 803DAC0C
  W32(c->r[1]+0x00000008u,c->r[30]); // 803DAC10
  c->r[30]=c->r[3]|c->r[3]; // 803DAC14
  if (crb(c,2)) { goto L_803DAC2C; } // 803DAC18
  cmpu(c,0,c->r[3],0x00000001u); // 803DAC1C
  if (crb(c,2)) { goto L_803DAC2C; } // 803DAC20
  c->r[3]=0u+0x00000005u; // 803DAC24
  goto L_803DAC94; // 803DAC28
L_803DAC2C:;
  c->r[31]=0u+0x807B0000u; // 803DAC2C
  c->r[31]=c->r[31]+0x00006798u; // 803DAC30
  c->r[0]=R8(c->r[31]+0x00000643u); // 803DAC34
  c->r[0]=rotl(c->r[0],0)&0x00000020u; cr0(c,c->r[0]); // 803DAC38
  if (!crb(c,2)) { goto L_803DAC48; } // 803DAC3C
  c->r[3]=0u+0x00000004u; // 803DAC40
  goto L_803DAC94; // 803DAC44
L_803DAC48:;
  c->r[0]=R16(c->r[31]+0x000016A6u); // 803DAC48
  cmpu(c,0,c->r[3],c->r[0]); // 803DAC4C
  if (crb(c,2)) { goto L_803DAC90; } // 803DAC50
  c->lr=0x803DAC58u; f_803D90A0(c); // 803DAC54
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 803DAC58
  if (crb(c,2)) { goto L_803DAC88; } // 803DAC5C
  c->r[3]=0u+0x00000002u; // 803DAC60
  c->lr=0x803DAC68u; f_803CDAF4(c); // 803DAC64
  cmps(c,0,(int32_t)c->r[3],0); // 803DAC68
  if (crb(c,2)) { goto L_803DAC80; } // 803DAC6C
  c->r[4]=rotl(c->r[30],0)&0x000000FFu; // 803DAC70
  c->lr=0x803DAC78u; f_803E59B0(c); // 803DAC74
  W16(c->r[31]+0x000016A6u,c->r[30]); // 803DAC78
  goto L_803DAC90; // 803DAC7C
L_803DAC80:;
  c->r[3]=0u+0x00000003u; // 803DAC80
  goto L_803DAC94; // 803DAC84
L_803DAC88:;
  c->r[3]=0u+0x00000006u; // 803DAC88
  goto L_803DAC94; // 803DAC8C
L_803DAC90:;
  c->r[3]=0u+0x00000000u; // 803DAC90
L_803DAC94:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 803DAC94
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 803DAC98
  c->r[30]=R32(c->r[1]+0x00000008u); // 803DAC9C
  c->lr=c->r[0]; // 803DACA0
  c->r[1]=c->r[1]+0x00000010u; // 803DACA4
  return; // 803DACA8
}

// BTM_SetInquiryMode
void f_803DACAC(Ctx* __restrict c) {
  trace_call(0x803DACACu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803DACAC
  c->r[0]=c->lr; // 803DACB0
  cmps(c,0,(int32_t)c->r[3],0); // 803DACB4
  W32(c->r[1]+0x00000014u,c->r[0]); // 803DACB8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 803DACBC
  c->r[31]=c->r[3]|c->r[3]; // 803DACC0
  if (crb(c,2)) { goto L_803DACD8; } // 803DACC4
  cmpu(c,0,c->r[3],0x00000001u); // 803DACC8
  if (crb(c,2)) { goto L_803DACD8; } // 803DACCC
  c->r[3]=0u+0x00000005u; // 803DACD0
  goto L_803DAD30; // 803DACD4
L_803DACD8:;
  c->r[3]=0u+0x807B0000u; // 803DACD8
  c->r[3]=c->r[3]+0x00006798u; // 803DACDC
  c->r[0]=R8(c->r[3]+0x00000643u); // 803DACE0
  c->r[0]=rotl(c->r[0],0)&0x00000040u; cr0(c,c->r[0]); // 803DACE4
  if (!crb(c,2)) { goto L_803DACF4; } // 803DACE8
  c->r[3]=0u+0x00000004u; // 803DACEC
  goto L_803DAD30; // 803DACF0
L_803DACF4:;
  c->lr=0x803DACF8u; f_803D90A0(c); // 803DACF4
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 803DACF8
  if (!crb(c,2)) { goto L_803DAD08; } // 803DACFC
  c->r[3]=0u+0x00000006u; // 803DAD00
  goto L_803DAD30; // 803DAD04
L_803DAD08:;
  c->r[3]=0u+0x00000002u; // 803DAD08
  c->lr=0x803DAD10u; f_803CDAF4(c); // 803DAD0C
  cmps(c,0,(int32_t)c->r[3],0); // 803DAD10
  if (crb(c,2)) { goto L_803DAD24; } // 803DAD14
  c->r[4]=c->r[31]|c->r[31]; // 803DAD18
  c->lr=0x803DAD20u; f_803E5980(c); // 803DAD1C
  goto L_803DAD2C; // 803DAD20
L_803DAD24:;
  c->r[3]=0u+0x00000003u; // 803DAD24
  goto L_803DAD30; // 803DAD28
L_803DAD2C:;
  c->r[3]=0u+0x00000000u; // 803DAD2C
L_803DAD30:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 803DAD30
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 803DAD34
  c->lr=c->r[0]; // 803DAD38
  c->r[1]=c->r[1]+0x00000010u; // 803DAD3C
  return; // 803DAD40
}

// BTM_SetConnectability
void f_803DAD44(Ctx* __restrict c) {
  trace_call(0x803DAD44u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803DAD44
  c->r[0]=c->lr; // 803DAD48
  W32(c->r[1]+0x00000024u,c->r[0]); // 803DAD4C
  c->r[11]=c->r[1]+0x00000020u; // 803DAD50
  c->lr=0x803DAD58u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 803DAD54
  cmps(c,0,(int32_t)c->r[3],0); // 803DAD58
  c->r[31]=0u+0x807B0000u; // 803DAD5C
  c->r[27]=c->r[3]|c->r[3]; // 803DAD60
  c->r[28]=c->r[4]|c->r[4]; // 803DAD64
  c->r[29]=c->r[5]|c->r[5]; // 803DAD68
  c->r[31]=c->r[31]+0x00006798u; // 803DAD6C
  c->r[30]=0u+0x00000000u; // 803DAD70
  if (crb(c,2)) { goto L_803DAD88; } // 803DAD74
  cmpu(c,0,c->r[3],0x00000001u); // 803DAD78
  if (crb(c,2)) { goto L_803DAD88; } // 803DAD7C
  c->r[3]=0u+0x00000005u; // 803DAD80
  goto L_803DAEB4; // 803DAD84
L_803DAD88:;
  c->r[3]=0u+0x807B0000u; // 803DAD88
  c->r[3]=c->r[3]+0x00006798u; // 803DAD8C
  c->r[0]=R8(c->r[3]+0x0000064Eu); // 803DAD90
  cmpu(c,0,c->r[0],0x00000003u); // 803DAD94
  if (!crb(c,0)) { goto L_803DADA4; } // 803DAD98
  c->r[3]=0u+0x0000000Cu; // 803DAD9C
  goto L_803DAEB4; // 803DADA0
L_803DADA4:;
  cmps(c,0,(int32_t)c->r[4],0); // 803DADA4
  if (!crb(c,2)) { goto L_803DADB0; } // 803DADA8
  c->r[28]=0u+0x00000012u; // 803DADAC
L_803DADB0:;
  cmps(c,0,(int32_t)c->r[5],0); // 803DADB0
  if (!crb(c,2)) { goto L_803DADBC; } // 803DADB4
  c->r[29]=0u+0x00000800u; // 803DADB8
L_803DADBC:;
  c->r[3]=0u+0x807B0000u; // 803DADBC
  c->r[3]=c->r[3]+0x00006798u; // 803DADC0
  c->r[0]=R8(c->r[3]+0x000027C0u); // 803DADC4
  cmpu(c,0,c->r[0],0x00000003u); // 803DADC8
  if (crb(c,0)) { goto L_803DADF0; } // 803DADCC
  c->r[3]=0u+0x000D0000u; // 803DADD0
  c->r[4]=0u+0x80710000u; // 803DADD4
  c->r[5]=c->r[27]|c->r[27]; // 803DADD8
  c->r[6]=c->r[28]|c->r[28]; // 803DADDC
  c->r[7]=c->r[29]|c->r[29]; // 803DADE0
  c->r[3]=c->r[3]+0x00000002u; // 803DADE4
  c->r[4]=c->r[4]+0xFFFFBE14u; // 803DADE8
  c->lr=0x803DADF0u; f_803D0528(c); // 803DADEC
L_803DADF0:;
  cmpu(c,0,c->r[27],0x00000001u); // 803DADF0
  if (!crb(c,2)) { goto L_803DAE2C; } // 803DADF4
  cmpu(c,0,c->r[28],0x00000012u); // 803DADF8
  if (crb(c,0)) { goto L_803DAE20; } // 803DADFC
  cmpu(c,0,c->r[28],0x00001000u); // 803DAE00
  if (crb(c,1)) { goto L_803DAE20; } // 803DAE04
  cmpu(c,0,c->r[29],0x00000012u); // 803DAE08
  if (crb(c,0)) { goto L_803DAE20; } // 803DAE0C
  cmpu(c,0,c->r[29],0x00001000u); // 803DAE10
  if (crb(c,1)) { goto L_803DAE20; } // 803DAE14
  cmpu(c,0,c->r[28],c->r[29]); // 803DAE18
  if (!crb(c,1)) { goto L_803DAE28; } // 803DAE1C
L_803DAE20:;
  c->r[3]=0u+0x00000005u; // 803DAE20
  goto L_803DAEB4; // 803DAE24
L_803DAE28:;
  c->r[30]=c->r[30]|0x00000002u; // 803DAE28
L_803DAE2C:;
  c->r[0]=R16(c->r[31]+0x0000169Cu); // 803DAE2C
  cmpu(c,0,c->r[28],c->r[0]); // 803DAE30
  if (!crb(c,2)) { goto L_803DAE44; } // 803DAE34
  c->r[0]=R16(c->r[31]+0x0000169Eu); // 803DAE38
  cmpu(c,0,c->r[29],c->r[0]); // 803DAE3C
  if (crb(c,2)) { goto L_803DAE74; } // 803DAE40
L_803DAE44:;
  c->r[3]=0u+0x00000002u; // 803DAE44
  c->lr=0x803DAE4Cu; f_803CDAF4(c); // 803DAE48
  cmps(c,0,(int32_t)c->r[3],0); // 803DAE4C
  if (crb(c,2)) { goto L_803DAE6C; } // 803DAE50
  W16(c->r[31]+0x0000169Cu,c->r[28]); // 803DAE54
  c->r[4]=c->r[29]|c->r[29]; // 803DAE58
  c->r[5]=c->r[28]|c->r[28]; // 803DAE5C
  W16(c->r[31]+0x0000169Eu,c->r[29]); // 803DAE60
  c->lr=0x803DAE68u; f_803E4F40(c); // 803DAE64
  goto L_803DAE74; // 803DAE68
L_803DAE6C:;
  c->r[3]=0u+0x00000003u; // 803DAE6C
  goto L_803DAEB4; // 803DAE70
L_803DAE74:;
  c->r[3]=0u+0x00000002u; // 803DAE74
  c->lr=0x803DAE7Cu; f_803CDAF4(c); // 803DAE78
  cmps(c,0,(int32_t)c->r[3],0); // 803DAE7C
  if (crb(c,2)) { goto L_803DAEA8; } // 803DAE80
  c->r[0]=R16(c->r[31]+0x00001698u); // 803DAE84
  cmps(c,0,(int32_t)c->r[0],0); // 803DAE88
  if (crb(c,2)) { goto L_803DAE98; } // 803DAE8C
  c->r[0]=c->r[30]|0x00000001u; // 803DAE90
  c->r[30]=rotl(c->r[0],0)&0x000000FFu; // 803DAE94
L_803DAE98:;
  W16(c->r[31]+0x0000169Au,c->r[27]); // 803DAE98
  c->r[4]=rotl(c->r[30],0)&0x000000FFu; // 803DAE9C
  c->lr=0x803DAEA4u; f_803E4F10(c); // 803DAEA0
  goto L_803DAEB0; // 803DAEA4
L_803DAEA8:;
  c->r[3]=0u+0x00000003u; // 803DAEA8
  goto L_803DAEB4; // 803DAEAC
L_803DAEB0:;
  c->r[3]=0u+0x00000000u; // 803DAEB0
L_803DAEB4:;
  c->r[11]=c->r[1]+0x00000020u; // 803DAEB4
  c->lr=0x803DAEBCu; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 803DAEB8
  c->r[0]=R32(c->r[1]+0x00000024u); // 803DAEBC
  c->lr=c->r[0]; // 803DAEC0
  c->r[1]=c->r[1]+0x00000020u; // 803DAEC4
  return; // 803DAEC8
}

// BTM_IsInquiryActive
void f_803DAECC(Ctx* __restrict c) {
  trace_call(0x803DAECCu);
  c->r[3]=0u+0x807B0000u; // 803DAECC
  c->r[3]=c->r[3]+0x00006798u; // 803DAED0
  c->r[3]=R8(c->r[3]+0x00001848u); // 803DAED4
  return; // 803DAED8
}

// BTM_CancelInquiry
void f_803DAEDC(Ctx* __restrict c) {
  trace_call(0x803DAEDCu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803DAEDC
  c->r[0]=c->lr; // 803DAEE0
  W32(c->r[1]+0x00000024u,c->r[0]); // 803DAEE4
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 803DAEE8
  W32(c->r[1]+0x00000018u,c->r[30]); // 803DAEEC
  c->r[30]=0u+0x807B0000u; // 803DAEF0
  c->r[30]=c->r[30]+0x00006798u; // 803DAEF4
  W32(c->r[1]+0x00000014u,c->r[29]); // 803DAEF8
  c->r[29]=0u+0x00000000u; // 803DAEFC
  c->r[0]=R8(c->r[30]+0x000027C0u); // 803DAF00
  cmpu(c,0,c->r[0],0x00000003u); // 803DAF04
  if (crb(c,0)) { goto L_803DAF20; } // 803DAF08
  c->r[3]=0u+0x000D0000u; // 803DAF0C
  c->r[4]=0u+0x80710000u; // 803DAF10
  c->r[3]=c->r[3]+0x00000002u; // 803DAF14
  c->r[4]=c->r[4]+0xFFFFBE68u; // 803DAF18
  c->lr=0x803DAF20u; f_803D04E0(c); // 803DAF1C
L_803DAF20:;
  c->lr=0x803DAF24u; f_803D90A0(c); // 803DAF20
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 803DAF24
  if (!crb(c,2)) { goto L_803DAF34; } // 803DAF28
  c->r[3]=0u+0x00000006u; // 803DAF2C
  goto L_803DAFC8; // 803DAF30
L_803DAF34:;
  c->r[0]=R8(c->r[30]+0x00001848u); // 803DAF34
  cmps(c,0,(int32_t)c->r[0],0); // 803DAF38
  if (crb(c,2)) { goto L_803DAFC4; } // 803DAF3C
  c->r[0]=rotl(c->r[0],0)&0x00000004u; cr0(c,c->r[0]); // 803DAF40
  if (!crb(c,2)) { goto L_803DAFC4; } // 803DAF44
  c->r[0]=R8(c->r[30]+0x00001844u); // 803DAF48
  c->r[4]=0u+0x00000000u; // 803DAF4C
  W8(c->r[30]+0x00001848u,c->r[4]); // 803DAF50
  cmps(c,0,(int32_t)c->r[0],0); // 803DAF54
  W8(c->r[30]+0x00001847u,c->r[4]); // 803DAF58
  W32(c->r[30]+0x000016B4u,c->r[4]); // 803DAF5C
  W32(c->r[30]+0x000016B0u,c->r[4]); // 803DAF60
  if (crb(c,2)) { goto L_803DAF7C; } // 803DAF64
  c->r[3]=R8(c->r[30]+0x00001845u); // 803DAF68
  W8(c->r[30]+0x00001844u,c->r[4]); // 803DAF6C
  c->r[0]=c->r[3]+0x00000001u; // 803DAF70
  W8(c->r[30]+0x00001845u,c->r[0]); // 803DAF74
  goto L_803DAF8C; // 803DAF78
L_803DAF7C:;
  c->lr=0x803DAF80u; f_803E3460(c); // 803DAF7C
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 803DAF80
  if (!crb(c,2)) { goto L_803DAF8C; } // 803DAF84
  c->r[29]=0u+0x00000003u; // 803DAF88
L_803DAF8C:;
  c->r[31]=0u+0x807B0000u; // 803DAF8C
  c->r[4]=R32(c->r[30]+0x000016C0u); // 803DAF90
  c->r[31]=c->r[31]+0x00006798u; // 803DAF94
  c->r[3]=R32(c->r[31]+0x000016DCu); // 803DAF98
  c->r[0]=c->r[4]+0x00000001u; // 803DAF9C
  W32(c->r[30]+0x000016C0u,c->r[0]); // 803DAFA0
  cmps(c,0,(int32_t)c->r[3],0); // 803DAFA4
  if (crb(c,2)) { goto L_803DAFB8; } // 803DAFA8
  c->lr=0x803DAFB0u; f_803CDBDC(c); // 803DAFAC
  c->r[0]=0u+0x00000000u; // 803DAFB0
  W32(c->r[31]+0x000016DCu,c->r[0]); // 803DAFB4
L_803DAFB8:;
  c->r[0]=0u+0x00000000u; // 803DAFB8
  W16(c->r[31]+0x000016E0u,c->r[0]); // 803DAFBC
  W16(c->r[31]+0x000016E2u,c->r[0]); // 803DAFC0
L_803DAFC4:;
  c->r[3]=c->r[29]|c->r[29]; // 803DAFC4
L_803DAFC8:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 803DAFC8
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 803DAFCC
  c->r[30]=R32(c->r[1]+0x00000018u); // 803DAFD0
  c->r[29]=R32(c->r[1]+0x00000014u); // 803DAFD4
  c->lr=c->r[0]; // 803DAFD8
  c->r[1]=c->r[1]+0x00000020u; // 803DAFDC
  return; // 803DAFE0
}

// BTM_StartInquiry
void f_803DAFE4(Ctx* __restrict c) {
  trace_call(0x803DAFE4u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803DAFE4
  c->r[0]=c->lr; // 803DAFE8
  W32(c->r[1]+0x00000024u,c->r[0]); // 803DAFEC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 803DAFF0
  c->r[31]=0u+0x807B0000u; // 803DAFF4
  c->r[31]=c->r[31]+0x00006798u; // 803DAFF8
  W32(c->r[1]+0x00000018u,c->r[30]); // 803DAFFC
  c->r[30]=c->r[5]|c->r[5]; // 803DB000
  W32(c->r[1]+0x00000014u,c->r[29]); // 803DB004
  c->r[29]=c->r[4]|c->r[4]; // 803DB008
  W32(c->r[1]+0x00000010u,c->r[28]); // 803DB00C
  c->r[28]=c->r[3]|c->r[3]; // 803DB010
  c->r[0]=R8(c->r[31]+0x000027C0u); // 803DB014
  cmpu(c,0,c->r[0],0x00000003u); // 803DB018
  if (crb(c,0)) { goto L_803DB044; } // 803DB01C
  c->r[3]=0u+0x000D0000u; // 803DB020
  c->r[4]=0u+0x80710000u; // 803DB024
  c->r[5]=R8(c->r[28]+0x00000000u); // 803DB028
  c->r[3]=c->r[3]+0x00000002u; // 803DB02C
  c->r[6]=R8(c->r[28]+0x00000001u); // 803DB030
  c->r[4]=c->r[4]+0xFFFFBE84u; // 803DB034
  c->r[7]=R8(c->r[28]+0x00000002u); // 803DB038
  c->r[8]=R8(c->r[28]+0x00000003u); // 803DB03C
  c->lr=0x803DB044u; f_803D0540(c); // 803DB040
L_803DB044:;
  c->r[0]=R8(c->r[31]+0x00001848u); // 803DB044
  cmps(c,0,(int32_t)c->r[0],0); // 803DB048
  if (!crb(c,2)) { goto L_803DB05C; } // 803DB04C
  c->r[0]=R8(c->r[31]+0x00001844u); // 803DB050
  cmps(c,0,(int32_t)c->r[0],0); // 803DB054
  if (crb(c,2)) { goto L_803DB064; } // 803DB058
L_803DB05C:;
  c->r[3]=0u+0x00000002u; // 803DB05C
  goto L_803DB178; // 803DB060
L_803DB064:;
  c->r[0]=R8(c->r[28]+0x00000000u); // 803DB064
  cmps(c,0,(int32_t)c->r[0],0); // 803DB068
  if (crb(c,2)) { goto L_803DB080; } // 803DB06C
  cmpu(c,0,c->r[0],0x00000001u); // 803DB070
  if (crb(c,2)) { goto L_803DB080; } // 803DB074
  c->r[3]=0u+0x00000005u; // 803DB078
  goto L_803DB178; // 803DB07C
L_803DB080:;
  c->lr=0x803DB084u; f_803D90A0(c); // 803DB080
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 803DB084
  if (!crb(c,2)) { goto L_803DB094; } // 803DB088
  c->r[3]=0u+0x00000006u; // 803DB08C
  goto L_803DB178; // 803DB090
L_803DB094:;
  c->r[5]=R8(c->r[28]+0x00000000u); // 803DB094
  c->r[0]=0u+0x00000003u; // 803DB098
  c->r[3]=R8(c->r[28]+0x00000001u); // 803DB09C
  c->r[6]=0u+0x00000000u; // 803DB0A0
  c->r[4]=0u+0x00000001u; // 803DB0A4
  W8(c->r[31]+0x00001834u,c->r[5]); // 803DB0A8
  W8(c->r[31]+0x00001835u,c->r[3]); // 803DB0AC
  c->r[5]=R8(c->r[28]+0x00000002u); // 803DB0B0
  c->r[3]=R8(c->r[28]+0x00000003u); // 803DB0B4
  W8(c->r[31]+0x00001836u,c->r[5]); // 803DB0B8
  W8(c->r[31]+0x00001837u,c->r[3]); // 803DB0BC
  c->r[5]=R8(c->r[28]+0x00000004u); // 803DB0C0
  c->r[3]=R8(c->r[28]+0x00000005u); // 803DB0C4
  W8(c->r[31]+0x00001838u,c->r[5]); // 803DB0C8
  W8(c->r[31]+0x00001839u,c->r[3]); // 803DB0CC
  c->r[5]=R8(c->r[28]+0x00000006u); // 803DB0D0
  c->r[3]=R8(c->r[28]+0x00000007u); // 803DB0D4
  W8(c->r[31]+0x0000183Au,c->r[5]); // 803DB0D8
  W8(c->r[31]+0x0000183Bu,c->r[3]); // 803DB0DC
  c->r[3]=R8(c->r[28]+0x00000008u); // 803DB0E0
  W8(c->r[31]+0x0000183Cu,c->r[3]); // 803DB0E4
  c->r[3]=R8(c->r[28]+0x00000009u); // 803DB0E8
  W8(c->r[31]+0x0000183Du,c->r[3]); // 803DB0EC
  W8(c->r[31]+0x00001847u,c->r[0]); // 803DB0F0
  W32(c->r[31]+0x000016B0u,c->r[30]); // 803DB0F4
  W32(c->r[31]+0x000016B4u,c->r[29]); // 803DB0F8
  W8(c->r[31]+0x0000183Fu,c->r[6]); // 803DB0FC
  c->r[5]=R8(c->r[28]+0x00000000u); // 803DB100
  c->r[3]=c->r[5]+0xFFFFFFFFu; // 803DB104
  c->r[0]=addc(c,~c->r[5],0x00000001u,1); // 803DB108
  c->r[0]=~(c->r[3]|c->r[0]); // 803DB10C
  c->r[3]=sraw(c,c->r[0],31); // 803DB110
  c->r[0]=c->r[3]+0x00000002u; // 803DB114
  W8(c->r[31]+0x00001848u,c->r[0]); // 803DB118
  c->r[0]=R8(c->r[28]+0x00000003u); // 803DB11C
  cmps(c,0,(int32_t)c->r[0],0); // 803DB120
  if (crb(c,2)) { goto L_803DB138; } // 803DB124
  if (crb(c,0)) { goto L_803DB150; } // 803DB128
  cmps(c,0,(int32_t)c->r[0],3); // 803DB12C
  if (!crb(c,0)) { goto L_803DB150; } // 803DB130
  goto L_803DB144; // 803DB134
L_803DB138:;
  c->r[0]=0u+0x00000002u; // 803DB138
  W8(c->r[31]+0x00001847u,c->r[0]); // 803DB13C
  goto L_803DB158; // 803DB140
L_803DB144:;
  W8(c->r[31]+0x00001847u,c->r[4]); // 803DB144
  W8(c->r[28]+0x00000003u,c->r[6]); // 803DB148
  goto L_803DB158; // 803DB14C
L_803DB150:;
  c->r[3]=0u+0x00000005u; // 803DB150
  goto L_803DB178; // 803DB154
L_803DB158:;
  c->r[3]=R8(c->r[28]+0x00000003u); // 803DB158
  c->r[4]=c->r[28]+0x00000004u; // 803DB15C
  c->lr=0x803DB164u; f_803DB9F8(c); // 803DB160
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; // 803DB164
  cmpu(c,0,c->r[0],0x00000001u); // 803DB168
  if (crb(c,2)) { goto L_803DB178; } // 803DB16C
  c->r[0]=0u+0x00000000u; // 803DB170
  W8(c->r[31]+0x00001847u,c->r[0]); // 803DB174
L_803DB178:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 803DB178
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 803DB17C
  c->r[30]=R32(c->r[1]+0x00000018u); // 803DB180
  c->r[29]=R32(c->r[1]+0x00000014u); // 803DB184
  c->r[28]=R32(c->r[1]+0x00000010u); // 803DB188
  c->lr=c->r[0]; // 803DB18C
  c->r[1]=c->r[1]+0x00000020u; // 803DB190
  return; // 803DB194
}

// BTM_ReadRemoteDeviceName
void f_803DB198(Ctx* __restrict c) {
  trace_call(0x803DB198u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803DB198
  c->r[0]=c->lr; // 803DB19C
  W32(c->r[1]+0x00000024u,c->r[0]); // 803DB1A0
  c->r[11]=c->r[1]+0x00000020u; // 803DB1A4
  c->lr=0x803DB1ACu; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 803DB1A8
  c->r[5]=0u+0x807B0000u; // 803DB1AC
  c->r[27]=c->r[3]|c->r[3]; // 803DB1B0
  c->r[5]=c->r[5]+0x00006798u; // 803DB1B4
  c->r[28]=c->r[4]|c->r[4]; // 803DB1B8
  c->r[0]=R8(c->r[5]+0x000027C0u); // 803DB1BC
  c->r[29]=0u+0x00000000u; // 803DB1C0
  cmpu(c,0,c->r[0],0x00000003u); // 803DB1C4
  if (crb(c,0)) { goto L_803DB1F8; } // 803DB1C8
  c->r[3]=0u+0x000D0000u; // 803DB1CC
  c->r[4]=0u+0x80710000u; // 803DB1D0
  c->r[5]=R8(c->r[27]+0x00000000u); // 803DB1D4
  c->r[3]=c->r[3]+0x00000002u; // 803DB1D8
  c->r[6]=R8(c->r[27]+0x00000001u); // 803DB1DC
  c->r[4]=c->r[4]+0xFFFFBEBCu; // 803DB1E0
  c->r[7]=R8(c->r[27]+0x00000002u); // 803DB1E4
  c->r[8]=R8(c->r[27]+0x00000003u); // 803DB1E8
  c->r[9]=R8(c->r[27]+0x00000004u); // 803DB1EC
  c->r[10]=R8(c->r[27]+0x00000005u); // 803DB1F0
  c->lr=0x803DB1F8u; f_803D0570(c); // 803DB1F4
L_803DB1F8:;
  c->r[3]=0u+0x807B0000u; // 803DB1F8
  c->r[30]=0u+0x00000000u; // 803DB1FC
  c->r[3]=c->r[3]+0x00006798u; // 803DB200
  c->r[31]=c->r[3]+0x000016E4u; // 803DB204
L_803DB208:;
  c->r[0]=R8(c->r[31]+0x0000001Au); // 803DB208
  cmps(c,0,(int32_t)c->r[0],0); // 803DB20C
  if (crb(c,2)) { goto L_803DB230; } // 803DB210
  c->r[4]=c->r[27]|c->r[27]; // 803DB214
  c->r[3]=c->r[31]+0x0000000Au; // 803DB218
  c->r[5]=0u+0x00000006u; // 803DB21C
  c->lr=0x803DB224u; f_803AF7B8(c); // 803DB220
  cmps(c,0,(int32_t)c->r[3],0); // 803DB224
  if (!crb(c,2)) { goto L_803DB230; } // 803DB228
  goto L_803DB244; // 803DB22C
L_803DB230:;
  c->r[30]=c->r[30]+0x00000001u; // 803DB230
  c->r[31]=c->r[31]+0x0000001Cu; // 803DB234
  cmpu(c,0,c->r[30],0x0000000Cu); // 803DB238
  if (crb(c,0)) { IRQCHK(c); goto L_803DB208; } // 803DB23C
  c->r[31]=0u+0x00000000u; // 803DB240
L_803DB244:;
  cmps(c,0,(int32_t)c->r[31],0); // 803DB244
  if (crb(c,2)) { goto L_803DB250; } // 803DB248
  c->r[29]=c->r[31]+0x00000008u; // 803DB24C
L_803DB250:;
  c->r[3]=c->r[27]|c->r[27]; // 803DB250
  c->r[4]=c->r[29]|c->r[29]; // 803DB254
  c->r[7]=c->r[28]|c->r[28]; // 803DB258
  c->r[5]=0u+0x00000001u; // 803DB25C
  c->r[6]=0u+0x00000028u; // 803DB260
  c->lr=0x803DB268u; f_803DC078(c); // 803DB264
  c->r[11]=c->r[1]+0x00000020u; // 803DB268
  c->lr=0x803DB270u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 803DB26C
  c->r[0]=R32(c->r[1]+0x00000024u); // 803DB270
  c->lr=c->r[0]; // 803DB274
  c->r[1]=c->r[1]+0x00000020u; // 803DB278
  return; // 803DB27C
}

// BTM_CancelRemoteDeviceName
void f_803DB280(Ctx* __restrict c) {
  trace_call(0x803DB280u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803DB280
  c->r[0]=c->lr; // 803DB284
  W32(c->r[1]+0x00000014u,c->r[0]); // 803DB288
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 803DB28C
  c->r[31]=0u+0x807B0000u; // 803DB290
  c->r[31]=c->r[31]+0x00006798u; // 803DB294
  c->r[0]=R8(c->r[31]+0x000027C0u); // 803DB298
  cmpu(c,0,c->r[0],0x00000003u); // 803DB29C
  if (crb(c,0)) { goto L_803DB2B8; } // 803DB2A0
  c->r[3]=0u+0x000D0000u; // 803DB2A4
  c->r[4]=0u+0x80710000u; // 803DB2A8
  c->r[3]=c->r[3]+0x00000002u; // 803DB2AC
  c->r[4]=c->r[4]+0xFFFFBEFCu; // 803DB2B0
  c->lr=0x803DB2B8u; f_803D04E0(c); // 803DB2B4
L_803DB2B8:;
  c->r[0]=R8(c->r[31]+0x000016AEu); // 803DB2B8
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 803DB2BC
  if (crb(c,2)) { goto L_803DB2E0; } // 803DB2C0
  c->r[3]=c->r[31]+0x000016A8u; // 803DB2C4
  c->lr=0x803DB2CCu; f_803E3F64(c); // 803DB2C8
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 803DB2CC
  c->r[3]=0u+0x00000003u; // 803DB2D0
  if (crb(c,2)) { goto L_803DB2E4; } // 803DB2D4
  c->r[3]=0u+0x00000001u; // 803DB2D8
  goto L_803DB2E4; // 803DB2DC
L_803DB2E0:;
  c->r[3]=0u+0x00000006u; // 803DB2E0
L_803DB2E4:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 803DB2E4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 803DB2E8
  c->lr=c->r[0]; // 803DB2EC
  c->r[1]=c->r[1]+0x00000010u; // 803DB2F0
  return; // 803DB2F4
}

// BTM_InqDbRead
void f_803DB2F8(Ctx* __restrict c) {
  trace_call(0x803DB2F8u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803DB2F8
  c->r[0]=c->lr; // 803DB2FC
  c->r[4]=0u+0x807B0000u; // 803DB300
  W32(c->r[1]+0x00000024u,c->r[0]); // 803DB304
  c->r[4]=c->r[4]+0x00006798u; // 803DB308
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 803DB30C
  W32(c->r[1]+0x00000018u,c->r[30]); // 803DB310
  c->r[30]=c->r[4]+0x000016E4u; // 803DB314
  W32(c->r[1]+0x00000014u,c->r[29]); // 803DB318
  c->r[29]=c->r[3]|c->r[3]; // 803DB31C
  c->r[0]=R8(c->r[4]+0x000027C0u); // 803DB320
  cmpu(c,0,c->r[0],0x00000003u); // 803DB324
  if (crb(c,0)) { goto L_803DB358; } // 803DB328
  c->r[3]=0u+0x000D0000u; // 803DB32C
  c->r[4]=0u+0x80710000u; // 803DB330
  c->r[5]=R8(c->r[29]+0x00000000u); // 803DB334
  c->r[3]=c->r[3]+0x00000002u; // 803DB338
  c->r[6]=R8(c->r[29]+0x00000001u); // 803DB33C
  c->r[4]=c->r[4]+0xFFFFBF1Cu; // 803DB340
  c->r[7]=R8(c->r[29]+0x00000002u); // 803DB344
  c->r[8]=R8(c->r[29]+0x00000003u); // 803DB348
  c->r[9]=R8(c->r[29]+0x00000004u); // 803DB34C
  c->r[10]=R8(c->r[29]+0x00000005u); // 803DB350
  c->lr=0x803DB358u; f_803D0570(c); // 803DB354
L_803DB358:;
  c->r[31]=0u+0x00000000u; // 803DB358
L_803DB35C:;
  c->r[0]=R8(c->r[30]+0x0000001Au); // 803DB35C
  cmps(c,0,(int32_t)c->r[0],0); // 803DB360
  if (crb(c,2)) { goto L_803DB388; } // 803DB364
  c->r[4]=c->r[29]|c->r[29]; // 803DB368
  c->r[3]=c->r[30]+0x0000000Au; // 803DB36C
  c->r[5]=0u+0x00000006u; // 803DB370
  c->lr=0x803DB378u; f_803AF7B8(c); // 803DB374
  cmps(c,0,(int32_t)c->r[3],0); // 803DB378
  if (!crb(c,2)) { goto L_803DB388; } // 803DB37C
  c->r[3]=c->r[30]+0x00000008u; // 803DB380
  goto L_803DB39C; // 803DB384
L_803DB388:;
  c->r[31]=c->r[31]+0x00000001u; // 803DB388
  c->r[30]=c->r[30]+0x0000001Cu; // 803DB38C
  cmpu(c,0,c->r[31],0x0000000Cu); // 803DB390
  if (crb(c,0)) { IRQCHK(c); goto L_803DB35C; } // 803DB394
  c->r[3]=0u+0x00000000u; // 803DB398
L_803DB39C:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 803DB39C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 803DB3A0
  c->r[30]=R32(c->r[1]+0x00000018u); // 803DB3A4
  c->r[29]=R32(c->r[1]+0x00000014u); // 803DB3A8
  c->lr=c->r[0]; // 803DB3AC
  c->r[1]=c->r[1]+0x00000020u; // 803DB3B0
  return; // 803DB3B4
}

// BTM_InqDbFirst
void f_803DB3B8(Ctx* __restrict c) {
  trace_call(0x803DB3B8u);
  c->r[3]=0u+0x807B0000u; // 803DB3B8
  c->r[0]=0u+0x00000002u; // 803DB3BC
  c->r[3]=c->r[3]+0x00006798u; // 803DB3C0
  c->r[4]=0u+0x00000000u; // 803DB3C4
  c->r[3]=c->r[3]+0x000016E4u; // 803DB3C8
  c->ctr=c->r[0]; // 803DB3CC
L_803DB3D0:;
  c->r[0]=R8(c->r[3]+0x0000001Au); // 803DB3D0
  cmps(c,0,(int32_t)c->r[0],0); // 803DB3D4
  if (crb(c,2)) { goto L_803DB3E4; } // 803DB3D8
  c->r[3]=c->r[3]+0x00000008u; // 803DB3DC
  return; // 803DB3E0
L_803DB3E4:;
  c->r[0]=R8(c->r[3]+0x00000036u); // 803DB3E4
  c->r[4]=c->r[4]+0x00000001u; // 803DB3E8
  cmps(c,0,(int32_t)c->r[0],0); // 803DB3EC
  if (crb(c,2)) { goto L_803DB3FC; } // 803DB3F0
  c->r[3]=c->r[3]+0x00000024u; // 803DB3F4
  return; // 803DB3F8
L_803DB3FC:;
  c->r[0]=R8(c->r[3]+0x00000052u); // 803DB3FC
  c->r[4]=c->r[4]+0x00000001u; // 803DB400
  cmps(c,0,(int32_t)c->r[0],0); // 803DB404
  if (crb(c,2)) { goto L_803DB414; } // 803DB408
  c->r[3]=c->r[3]+0x00000040u; // 803DB40C
  return; // 803DB410
L_803DB414:;
  c->r[0]=R8(c->r[3]+0x0000006Eu); // 803DB414
  c->r[4]=c->r[4]+0x00000001u; // 803DB418
  cmps(c,0,(int32_t)c->r[0],0); // 803DB41C
  if (crb(c,2)) { goto L_803DB42C; } // 803DB420
  c->r[3]=c->r[3]+0x0000005Cu; // 803DB424
  return; // 803DB428
L_803DB42C:;
  c->r[0]=R8(c->r[3]+0x0000008Au); // 803DB42C
  c->r[4]=c->r[4]+0x00000001u; // 803DB430
  cmps(c,0,(int32_t)c->r[0],0); // 803DB434
  if (crb(c,2)) { goto L_803DB444; } // 803DB438
  c->r[3]=c->r[3]+0x00000078u; // 803DB43C
  return; // 803DB440
L_803DB444:;
  c->r[0]=R8(c->r[3]+0x000000A6u); // 803DB444
  c->r[4]=c->r[4]+0x00000001u; // 803DB448
  cmps(c,0,(int32_t)c->r[0],0); // 803DB44C
  if (crb(c,2)) { goto L_803DB45C; } // 803DB450
  c->r[3]=c->r[3]+0x00000094u; // 803DB454
  return; // 803DB458
L_803DB45C:;
  c->r[4]=c->r[4]+0x00000001u; // 803DB45C
  c->r[3]=c->r[3]+0x000000A8u; // 803DB460
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_803DB3D0; } // 803DB464
  c->r[3]=0u+0x00000000u; // 803DB468
  return; // 803DB46C
}

// BTM_InqDbNext
void f_803DB470(Ctx* __restrict c) {
  trace_call(0x803DB470u);
  cmps(c,0,(int32_t)c->r[3],0); // 803DB470
  if (crb(c,2)) { goto L_803DB4F4; } // 803DB474
  c->r[5]=0u+0x807B0000u; // 803DB478
  c->r[4]=0u+0x92490000u; // 803DB47C
  c->r[5]=c->r[5]+0x00006798u; // 803DB480
  c->r[0]=c->r[3]+0xFFFFFFF8u; // 803DB484
  c->r[3]=c->r[5]+0x000016E4u; // 803DB488
  c->r[4]=c->r[4]+0x00002493u; // 803DB48C
  c->r[0]=c->r[0]-c->r[3]; // 803DB490
  c->r[3]=(uint32_t)(((int64_t)(int32_t)c->r[4]*(int64_t)(int32_t)c->r[0])>>32); // 803DB494
  c->r[0]=c->r[3]+c->r[0]; // 803DB498
  c->r[0]=sraw(c,c->r[0],4); // 803DB49C
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 803DB4A0
  c->r[3]=c->r[0]+c->r[3]; // 803DB4A4
  c->r[0]=c->r[3]+0x00000001u; // 803DB4A8
  c->r[4]=rotl(c->r[0],0)&0x0000FFFFu; // 803DB4AC
  c->r[3]=(uint32_t)((int32_t)c->r[4]*(int32_t)28); // 803DB4B0
  c->r[0]=addc(c,~c->r[4],0x0000000Cu,1); // 803DB4B4
  c->r[3]=c->r[5]+c->r[3]; // 803DB4B8
  c->r[3]=c->r[3]+0x000016E4u; // 803DB4BC
  c->ctr=c->r[0]; // 803DB4C0
  cmpu(c,0,c->r[4],0x0000000Cu); // 803DB4C4
  if (!crb(c,0)) { goto L_803DB4EC; } // 803DB4C8
L_803DB4CC:;
  c->r[0]=R8(c->r[3]+0x0000001Au); // 803DB4CC
  cmps(c,0,(int32_t)c->r[0],0); // 803DB4D0
  if (crb(c,2)) { goto L_803DB4E0; } // 803DB4D4
  c->r[3]=c->r[3]+0x00000008u; // 803DB4D8
  return; // 803DB4DC
L_803DB4E0:;
  c->r[4]=c->r[4]+0x00000001u; // 803DB4E0
  c->r[3]=c->r[3]+0x0000001Cu; // 803DB4E4
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_803DB4CC; } // 803DB4E8
L_803DB4EC:;
  c->r[3]=0u+0x00000000u; // 803DB4EC
  return; // 803DB4F0
L_803DB4F4:;
  c->r[3]=0u+0x807B0000u; // 803DB4F4
  c->r[0]=0u+0x00000002u; // 803DB4F8
  c->r[3]=c->r[3]+0x00006798u; // 803DB4FC
  c->r[4]=0u+0x00000000u; // 803DB500
  c->r[3]=c->r[3]+0x000016E4u; // 803DB504
  c->ctr=c->r[0]; // 803DB508
L_803DB50C:;
  c->r[0]=R8(c->r[3]+0x0000001Au); // 803DB50C
  cmps(c,0,(int32_t)c->r[0],0); // 803DB510
  if (crb(c,2)) { goto L_803DB520; } // 803DB514
  c->r[3]=c->r[3]+0x00000008u; // 803DB518
  return; // 803DB51C
L_803DB520:;
  c->r[0]=R8(c->r[3]+0x00000036u); // 803DB520
  c->r[4]=c->r[4]+0x00000001u; // 803DB524
  cmps(c,0,(int32_t)c->r[0],0); // 803DB528
  if (crb(c,2)) { goto L_803DB538; } // 803DB52C
  c->r[3]=c->r[3]+0x00000024u; // 803DB530
  return; // 803DB534
L_803DB538:;
  c->r[0]=R8(c->r[3]+0x00000052u); // 803DB538
  c->r[4]=c->r[4]+0x00000001u; // 803DB53C
  cmps(c,0,(int32_t)c->r[0],0); // 803DB540
  if (crb(c,2)) { goto L_803DB550; } // 803DB544
  c->r[3]=c->r[3]+0x00000040u; // 803DB548
  return; // 803DB54C
L_803DB550:;
  c->r[0]=R8(c->r[3]+0x0000006Eu); // 803DB550
  c->r[4]=c->r[4]+0x00000001u; // 803DB554
  cmps(c,0,(int32_t)c->r[0],0); // 803DB558
  if (crb(c,2)) { goto L_803DB568; } // 803DB55C
  c->r[3]=c->r[3]+0x0000005Cu; // 803DB560
  return; // 803DB564
L_803DB568:;
  c->r[0]=R8(c->r[3]+0x0000008Au); // 803DB568
  c->r[4]=c->r[4]+0x00000001u; // 803DB56C
  cmps(c,0,(int32_t)c->r[0],0); // 803DB570
  if (crb(c,2)) { goto L_803DB580; } // 803DB574
  c->r[3]=c->r[3]+0x00000078u; // 803DB578
  return; // 803DB57C
L_803DB580:;
  c->r[0]=R8(c->r[3]+0x000000A6u); // 803DB580
  c->r[4]=c->r[4]+0x00000001u; // 803DB584
  cmps(c,0,(int32_t)c->r[0],0); // 803DB588
  if (crb(c,2)) { goto L_803DB598; } // 803DB58C
  c->r[3]=c->r[3]+0x00000094u; // 803DB590
  return; // 803DB594
L_803DB598:;
  c->r[4]=c->r[4]+0x00000001u; // 803DB598
  c->r[3]=c->r[3]+0x000000A8u; // 803DB59C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_803DB50C; } // 803DB5A0
  c->r[3]=0u+0x00000000u; // 803DB5A4
  return; // 803DB5A8
}

// BTM_ClearInqDb
void f_803DB5AC(Ctx* __restrict c) {
  trace_call(0x803DB5ACu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803DB5AC
  c->r[0]=c->lr; // 803DB5B0
  W32(c->r[1]+0x00000024u,c->r[0]); // 803DB5B4
  c->r[11]=c->r[1]+0x00000020u; // 803DB5B8
  c->lr=0x803DB5C0u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 803DB5BC
  c->r[4]=0u+0x807B0000u; // 803DB5C0
  c->r[27]=c->r[3]|c->r[3]; // 803DB5C4
  c->r[30]=c->r[4]+0x00006798u; // 803DB5C8
  c->r[0]=R8(c->r[30]+0x00001848u); // 803DB5CC
  cmps(c,0,(int32_t)c->r[0],0); // 803DB5D0
  if (!crb(c,2)) { goto L_803DB5F0; } // 803DB5D4
  c->r[0]=R8(c->r[30]+0x000016AEu); // 803DB5D8
  cmps(c,0,(int32_t)c->r[0],0); // 803DB5DC
  if (!crb(c,2)) { goto L_803DB5F0; } // 803DB5E0
  c->r[0]=R8(c->r[30]+0x00001844u); // 803DB5E4
  cmps(c,0,(int32_t)c->r[0],0); // 803DB5E8
  if (crb(c,2)) { goto L_803DB5F8; } // 803DB5EC
L_803DB5F0:;
  c->r[3]=0u+0x00000002u; // 803DB5F0
  goto L_803DB664; // 803DB5F4
L_803DB5F8:;
  c->r[28]=c->r[30]+0x000016E4u; // 803DB5F8
  c->r[29]=0u+0x00000000u; // 803DB5FC
  c->r[31]=0u+0x00000000u; // 803DB600
L_803DB604:;
  c->r[0]=R8(c->r[28]+0x0000001Au); // 803DB604
  cmps(c,0,(int32_t)c->r[0],0); // 803DB608
  if (crb(c,2)) { goto L_803DB650; } // 803DB60C
  cmps(c,0,(int32_t)c->r[27],0); // 803DB610
  if (crb(c,2)) { goto L_803DB630; } // 803DB614
  c->r[4]=c->r[27]|c->r[27]; // 803DB618
  c->r[3]=c->r[28]+0x0000000Au; // 803DB61C
  c->r[5]=0u+0x00000006u; // 803DB620
  c->lr=0x803DB628u; f_803AF7B8(c); // 803DB624
  cmps(c,0,(int32_t)c->r[3],0); // 803DB628
  if (!crb(c,2)) { goto L_803DB650; } // 803DB62C
L_803DB630:;
  W8(c->r[28]+0x0000001Au,c->r[31]); // 803DB630
  c->r[12]=R32(c->r[30]+0x000016BCu); // 803DB634
  cmps(c,0,(int32_t)c->r[12],0); // 803DB638
  if (crb(c,2)) { goto L_803DB650; } // 803DB63C
  c->r[3]=c->r[28]+0x00000008u; // 803DB640
  c->r[4]=0u+0x00000000u; // 803DB644
  c->ctr=c->r[12]; // 803DB648
  if (true) { c->lr=0x803DB650u; dispatch(c,c->ctr); } // 803DB64C
L_803DB650:;
  c->r[29]=c->r[29]+0x00000001u; // 803DB650
  c->r[28]=c->r[28]+0x0000001Cu; // 803DB654
  cmpu(c,0,c->r[29],0x0000000Cu); // 803DB658
  if (crb(c,0)) { IRQCHK(c); goto L_803DB604; } // 803DB65C
  c->r[3]=0u+0x00000000u; // 803DB660
L_803DB664:;
  c->r[11]=c->r[1]+0x00000020u; // 803DB664
  c->lr=0x803DB66Cu; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 803DB668
  c->r[0]=R32(c->r[1]+0x00000024u); // 803DB66C
  c->lr=c->r[0]; // 803DB670
  c->r[1]=c->r[1]+0x00000020u; // 803DB674
  return; // 803DB678
}

// btm_inq_db_reset
void f_803DB67C(Ctx* __restrict c) {
  trace_call(0x803DB67Cu);
  {uint32_t ea=c->r[1]+0xFFFFFEE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803DB67C
  c->r[0]=c->lr; // 803DB680
  W32(c->r[1]+0x00000124u,c->r[0]); // 803DB684
  c->r[11]=c->r[1]+0x00000120u; // 803DB688
  c->lr=0x803DB690u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 803DB68C
  c->r[29]=0u+0x807B0000u; // 803DB690
  c->r[29]=c->r[29]+0x00006798u; // 803DB694
  c->r[3]=c->r[29]+0x000016C4u; // 803DB698
  c->lr=0x803DB6A0u; f_803D0B1C(c); // 803DB69C
  c->r[3]=R8(c->r[29]+0x00001848u); // 803DB6A0
  cmps(c,0,(int32_t)c->r[3],0); // 803DB6A4
  if (crb(c,2)) { goto L_803DB6E0; } // 803DB6A8
  c->r[0]=c->r[3]+0x000000FFu; // 803DB6AC
  c->r[3]=0u+0x00000000u; // 803DB6B0
  c->r[0]=rotl(c->r[0],0)&0x000000FFu; // 803DB6B4
  W8(c->r[29]+0x00001848u,c->r[3]); // 803DB6B8
  cmpu(c,0,c->r[0],0x00000001u); // 803DB6BC
  if (crb(c,1)) { goto L_803DB6E0; } // 803DB6C0
  c->r[12]=R32(c->r[29]+0x000016B0u); // 803DB6C4
  cmps(c,0,(int32_t)c->r[12],0); // 803DB6C8
  if (crb(c,2)) { goto L_803DB6E0; } // 803DB6CC
  W8(c->r[1]+0x00000009u,c->r[3]); // 803DB6D0
  c->r[3]=c->r[1]+0x00000009u; // 803DB6D4
  c->ctr=c->r[12]; // 803DB6D8
  if (true) { c->lr=0x803DB6E0u; dispatch(c,c->ctr); } // 803DB6DC
L_803DB6E0:;
  c->r[0]=R8(c->r[29]+0x000016AEu); // 803DB6E0
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 803DB6E4
  if (crb(c,2)) { goto L_803DB730; } // 803DB6E8
  c->r[3]=c->r[29]+0x00001680u; // 803DB6EC
  c->lr=0x803DB6F4u; f_803D0B1C(c); // 803DB6F0
  c->r[30]=0u+0x00000000u; // 803DB6F4
  c->r[3]=c->r[29]+0x000016A8u; // 803DB6F8
  W8(c->r[29]+0x000016AEu,c->r[30]); // 803DB6FC
  c->r[4]=0u+0x00000000u; // 803DB700
  c->r[5]=0u+0x00000006u; // 803DB704
  c->lr=0x803DB70Cu; f_800043EC(c); // 803DB708
  c->r[12]=R32(c->r[29]+0x0000167Cu); // 803DB70C
  cmps(c,0,(int32_t)c->r[12],0); // 803DB710
  if (crb(c,2)) { goto L_803DB730; } // 803DB714
  c->r[0]=0u+0x0000000Cu; // 803DB718
  c->r[3]=c->r[1]+0x0000000Cu; // 803DB71C
  W16(c->r[1]+0x0000000Cu,c->r[0]); // 803DB720
  c->ctr=c->r[12]; // 803DB724
  if (true) { c->lr=0x803DB72Cu; dispatch(c,c->ctr); } // 803DB728
  W32(c->r[29]+0x0000167Cu,c->r[30]); // 803DB72C
L_803DB730:;
  c->r[0]=R8(c->r[29]+0x00001844u); // 803DB730
  cmps(c,0,(int32_t)c->r[0],0); // 803DB734
  if (crb(c,2)) { goto L_803DB764; } // 803DB738
  c->r[12]=R32(c->r[29]+0x000016B8u); // 803DB73C
  c->r[0]=0u+0x00000000u; // 803DB740
  W8(c->r[29]+0x00001844u,c->r[0]); // 803DB744
  cmps(c,0,(int32_t)c->r[12],0); // 803DB748
  if (crb(c,2)) { goto L_803DB764; } // 803DB74C
  c->r[0]=0u+0x0000000Cu; // 803DB750
  c->r[3]=c->r[1]+0x00000008u; // 803DB754
  W8(c->r[1]+0x00000008u,c->r[0]); // 803DB758
  c->ctr=c->r[12]; // 803DB75C
  if (true) { c->lr=0x803DB764u; dispatch(c,c->ctr); } // 803DB760
L_803DB764:;
  c->r[30]=0u+0x00000000u; // 803DB764
  c->r[31]=0u+0x807B0000u; // 803DB768
  c->r[31]=c->r[31]+0x00006798u; // 803DB76C
  W8(c->r[29]+0x00001847u,c->r[30]); // 803DB770
  c->r[28]=0u+0x00000000u; // 803DB774
  W8(c->r[29]+0x00001845u,c->r[30]); // 803DB778
  c->r[27]=c->r[31]+0x000016E4u; // 803DB77C
  W32(c->r[29]+0x000016B4u,c->r[30]); // 803DB780
L_803DB784:;
  c->r[0]=R8(c->r[27]+0x0000001Au); // 803DB784
  cmps(c,0,(int32_t)c->r[0],0); // 803DB788
  if (crb(c,2)) { goto L_803DB7B0; } // 803DB78C
  W8(c->r[27]+0x0000001Au,c->r[30]); // 803DB790
  c->r[12]=R32(c->r[31]+0x000016BCu); // 803DB794
  cmps(c,0,(int32_t)c->r[12],0); // 803DB798
  if (crb(c,2)) { goto L_803DB7B0; } // 803DB79C
  c->r[3]=c->r[27]+0x00000008u; // 803DB7A0
  c->r[4]=0u+0x00000000u; // 803DB7A4
  c->ctr=c->r[12]; // 803DB7A8
  if (true) { c->lr=0x803DB7B0u; dispatch(c,c->ctr); } // 803DB7AC
L_803DB7B0:;
  c->r[28]=c->r[28]+0x00000001u; // 803DB7B0
  c->r[27]=c->r[27]+0x0000001Cu; // 803DB7B4
  cmpu(c,0,c->r[28],0x0000000Cu); // 803DB7B8
  if (crb(c,0)) { IRQCHK(c); goto L_803DB784; } // 803DB7BC
  c->r[31]=0u+0x807B0000u; // 803DB7C0
  c->r[31]=c->r[31]+0x00006798u; // 803DB7C4
  c->r[3]=R32(c->r[31]+0x000016DCu); // 803DB7C8
  cmps(c,0,(int32_t)c->r[3],0); // 803DB7CC
  if (crb(c,2)) { goto L_803DB7E0; } // 803DB7D0
  c->lr=0x803DB7D8u; f_803CDBDC(c); // 803DB7D4
  c->r[0]=0u+0x00000000u; // 803DB7D8
  W32(c->r[31]+0x000016DCu,c->r[0]); // 803DB7DC
L_803DB7E0:;
  c->r[0]=0u+0x00000000u; // 803DB7E0
  c->r[11]=c->r[1]+0x00000120u; // 803DB7E4
  W16(c->r[31]+0x000016E0u,c->r[0]); // 803DB7E8
  W16(c->r[31]+0x000016E2u,c->r[0]); // 803DB7EC
  W16(c->r[29]+0x00001698u,c->r[0]); // 803DB7F0
  W16(c->r[29]+0x0000169Au,c->r[0]); // 803DB7F4
  W16(c->r[29]+0x000016A6u,c->r[0]); // 803DB7F8
  W16(c->r[29]+0x000016A4u,c->r[0]); // 803DB7FC
  c->lr=0x803DB804u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 803DB800
  c->r[0]=R32(c->r[1]+0x00000124u); // 803DB804
  c->lr=c->r[0]; // 803DB808
  c->r[1]=c->r[1]+0x00000120u; // 803DB80C
  return; // 803DB810
}

// fn_803DB814
void f_803DB814(Ctx* __restrict c) {
  trace_call(0x803DB814u);
  return; // 803DB814
}

// btm_inq_find_bdaddr
void f_803DB818(Ctx* __restrict c) {
  trace_call(0x803DB818u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803DB818
  c->r[0]=c->lr; // 803DB81C
  W32(c->r[1]+0x00000024u,c->r[0]); // 803DB820
  c->r[11]=c->r[1]+0x00000020u; // 803DB824
  c->lr=0x803DB82Cu; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 803DB828
  c->r[31]=0u+0x807B0000u; // 803DB82C
  c->r[27]=c->r[3]|c->r[3]; // 803DB830
  c->r[31]=c->r[31]+0x00006798u; // 803DB834
  c->r[0]=R8(c->r[31]+0x00001848u); // 803DB838
  c->r[29]=R32(c->r[31]+0x000016DCu); // 803DB83C
  c->r[0]=rotl(c->r[0],0)&0x00000004u; cr0(c,c->r[0]); // 803DB840
  if (!crb(c,2)) { goto L_803DB850; } // 803DB844
  cmps(c,0,(int32_t)c->r[29],0); // 803DB848
  if (!crb(c,2)) { goto L_803DB858; } // 803DB84C
L_803DB850:;
  c->r[3]=0u+0x00000000u; // 803DB850
  goto L_803DB8DC; // 803DB854
L_803DB858:;
  c->r[30]=R16(c->r[31]+0x000016E0u); // 803DB858
  c->r[28]=0u+0x00000000u; // 803DB85C
  goto L_803DB89C; // 803DB860
L_803DB864:;
  c->r[4]=c->r[27]|c->r[27]; // 803DB864
  c->r[3]=c->r[29]+0x00000004u; // 803DB868
  c->r[5]=0u+0x00000006u; // 803DB86C
  c->lr=0x803DB874u; f_803AF7B8(c); // 803DB870
  cmps(c,0,(int32_t)c->r[3],0); // 803DB874
  if (!crb(c,2)) { goto L_803DB894; } // 803DB878
  c->r[3]=R32(c->r[29]+0x00000000u); // 803DB87C
  c->r[0]=R32(c->r[31]+0x000016C0u); // 803DB880
  cmpu(c,0,c->r[3],c->r[0]); // 803DB884
  if (!crb(c,2)) { goto L_803DB894; } // 803DB888
  c->r[3]=0u+0x00000001u; // 803DB88C
  goto L_803DB8DC; // 803DB890
L_803DB894:;
  c->r[28]=c->r[28]+0x00000001u; // 803DB894
  c->r[29]=c->r[29]+0x0000000Cu; // 803DB898
L_803DB89C:;
  c->r[3]=rotl(c->r[28],0)&0x0000FFFFu; // 803DB89C
  cmpu(c,0,c->r[3],c->r[30]); // 803DB8A0
  if (crb(c,0)) { IRQCHK(c); goto L_803DB864; } // 803DB8A4
  c->r[0]=R16(c->r[31]+0x000016E2u); // 803DB8A8
  cmpu(c,0,c->r[3],c->r[0]); // 803DB8AC
  if (!crb(c,0)) { goto L_803DB8D8; } // 803DB8B0
  c->r[0]=R32(c->r[31]+0x000016C0u); // 803DB8B4
  c->r[4]=c->r[27]|c->r[27]; // 803DB8B8
  c->r[3]=c->r[29]+0x00000004u; // 803DB8BC
  c->r[5]=0u+0x00000006u; // 803DB8C0
  W32(c->r[29]+0x00000000u,c->r[0]); // 803DB8C4
  c->lr=0x803DB8CCu; f_802DC484(c); // 803DB8C8
  c->r[3]=R16(c->r[31]+0x000016E0u); // 803DB8CC
  c->r[0]=c->r[3]+0x00000001u; // 803DB8D0
  W16(c->r[31]+0x000016E0u,c->r[0]); // 803DB8D4
L_803DB8D8:;
  c->r[3]=0u+0x00000000u; // 803DB8D8
L_803DB8DC:;
  c->r[11]=c->r[1]+0x00000020u; // 803DB8DC
  c->lr=0x803DB8E4u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 803DB8E0
  c->r[0]=R32(c->r[1]+0x00000024u); // 803DB8E4
  c->lr=c->r[0]; // 803DB8E8
  c->r[1]=c->r[1]+0x00000020u; // 803DB8EC
  return; // 803DB8F0
}

// btm_inq_db_new
void f_803DB8F4(Ctx* __restrict c) {
  trace_call(0x803DB8F4u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803DB8F4
  c->r[0]=c->lr; // 803DB8F8
  c->r[4]=0u+0x807B0000u; // 803DB8FC
  W32(c->r[1]+0x00000024u,c->r[0]); // 803DB900
  c->r[4]=c->r[4]+0x00006798u; // 803DB904
  c->r[0]=0u+0x0000000Cu; // 803DB908
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 803DB90C
  c->r[31]=c->r[4]+0x000016E4u; // 803DB910
  c->r[4]=0u+0xFFFFFFFFu; // 803DB914
  W32(c->r[1]+0x00000018u,c->r[30]); // 803DB918
  c->r[30]=c->r[31]|c->r[31]; // 803DB91C
  W32(c->r[1]+0x00000014u,c->r[29]); // 803DB920
  c->r[29]=c->r[3]|c->r[3]; // 803DB924
  c->r[3]=0u+0x00000000u; // 803DB928
  c->ctr=c->r[0]; // 803DB92C
L_803DB930:;
  c->r[0]=R8(c->r[31]+0x0000001Au); // 803DB930
  cmps(c,0,(int32_t)c->r[0],0); // 803DB934
  if (!crb(c,2)) { goto L_803DB96C; } // 803DB938
  c->r[3]=c->r[31]|c->r[31]; // 803DB93C
  c->r[4]=0u+0x00000000u; // 803DB940
  c->r[5]=0u+0x0000001Cu; // 803DB944
  c->lr=0x803DB94Cu; f_800043EC(c); // 803DB948
  c->r[4]=c->r[29]|c->r[29]; // 803DB94C
  c->r[3]=c->r[31]+0x0000000Au; // 803DB950
  c->r[5]=0u+0x00000006u; // 803DB954
  c->lr=0x803DB95Cu; f_802DC484(c); // 803DB958
  c->r[0]=0u+0x00000001u; // 803DB95C
  c->r[3]=c->r[31]|c->r[31]; // 803DB960
  W8(c->r[31]+0x0000001Au,c->r[0]); // 803DB964
  goto L_803DB9DC; // 803DB968
L_803DB96C:;
  c->r[0]=R32(c->r[31]+0x00000000u); // 803DB96C
  cmpu(c,0,c->r[0],c->r[4]); // 803DB970
  if (!crb(c,0)) { goto L_803DB980; } // 803DB974
  c->r[30]=c->r[31]|c->r[31]; // 803DB978
  c->r[4]=c->r[0]|c->r[0]; // 803DB97C
L_803DB980:;
  c->r[3]=c->r[3]+0x00000001u; // 803DB980
  c->r[31]=c->r[31]+0x0000001Cu; // 803DB984
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_803DB930; } // 803DB988
  c->r[3]=0u+0x807B0000u; // 803DB98C
  c->r[3]=c->r[3]+0x00006798u; // 803DB990
  c->r[12]=R32(c->r[3]+0x000016BCu); // 803DB994
  cmps(c,0,(int32_t)c->r[12],0); // 803DB998
  if (crb(c,2)) { goto L_803DB9B0; } // 803DB99C
  c->r[3]=c->r[30]+0x00000008u; // 803DB9A0
  c->r[4]=0u+0x00000000u; // 803DB9A4
  c->ctr=c->r[12]; // 803DB9A8
  if (true) { c->lr=0x803DB9B0u; dispatch(c,c->ctr); } // 803DB9AC
L_803DB9B0:;
  c->r[3]=c->r[30]|c->r[30]; // 803DB9B0
  c->r[4]=0u+0x00000000u; // 803DB9B4
  c->r[5]=0u+0x0000001Cu; // 803DB9B8
  c->lr=0x803DB9C0u; f_800043EC(c); // 803DB9BC
  c->r[4]=c->r[29]|c->r[29]; // 803DB9C0
  c->r[3]=c->r[30]+0x0000000Au; // 803DB9C4
  c->r[5]=0u+0x00000006u; // 803DB9C8
  c->lr=0x803DB9D0u; f_802DC484(c); // 803DB9CC
  c->r[0]=0u+0x00000001u; // 803DB9D0
  c->r[3]=c->r[30]|c->r[30]; // 803DB9D4
  W8(c->r[30]+0x0000001Au,c->r[0]); // 803DB9D8
L_803DB9DC:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 803DB9DC
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 803DB9E0
  c->r[30]=R32(c->r[1]+0x00000018u); // 803DB9E4
  c->r[29]=R32(c->r[1]+0x00000014u); // 803DB9E8
  c->lr=c->r[0]; // 803DB9EC
  c->r[1]=c->r[1]+0x00000020u; // 803DB9F0
  return; // 803DB9F4
}

// btm_set_inq_event_filter
void f_803DB9F8(Ctx* __restrict c) {
  trace_call(0x803DB9F8u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803DB9F8
  c->r[0]=c->lr; // 803DB9FC
  W32(c->r[1]+0x00000034u,c->r[0]); // 803DBA00
  c->r[11]=c->r[1]+0x00000030u; // 803DBA04
  c->lr=0x803DBA0Cu; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 803DBA08
  c->r[27]=c->r[3]|c->r[3]; // 803DBA0C
  c->r[28]=c->r[4]|c->r[4]; // 803DBA10
  c->r[29]=c->r[1]+0x00000008u; // 803DBA14
  c->r[30]=0u+0x00000006u; // 803DBA18
  c->r[3]=0u+0x00000002u; // 803DBA1C
  c->lr=0x803DBA24u; f_803CDAF4(c); // 803DBA20
  cmps(c,0,(int32_t)c->r[3],0); // 803DBA24
  c->r[31]=c->r[3]|c->r[3]; // 803DBA28
  if (crb(c,2)) { goto L_803DBAC0; } // 803DBA2C
  cmps(c,0,(int32_t)c->r[27],1); // 803DBA30
  if (crb(c,2)) { goto L_803DBA54; } // 803DBA34
  if (!crb(c,0)) { goto L_803DBA48; } // 803DBA38
  cmps(c,0,(int32_t)c->r[27],0); // 803DBA3C
  if (!crb(c,0)) { goto L_803DBA80; } // 803DBA40
  goto L_803DBA88; // 803DBA44
L_803DBA48:;
  cmps(c,0,(int32_t)c->r[27],3); // 803DBA48
  if (!crb(c,0)) { goto L_803DBA88; } // 803DBA4C
  goto L_803DBA78; // 803DBA50
L_803DBA54:;
  c->r[3]=c->r[29]|c->r[29]; // 803DBA54
  c->r[4]=c->r[28]|c->r[28]; // 803DBA58
  c->r[5]=0u+0x00000003u; // 803DBA5C
  c->lr=0x803DBA64u; f_802DC484(c); // 803DBA60
  c->r[3]=c->r[1]+0x0000000Bu; // 803DBA64
  c->r[4]=c->r[28]+0x00000003u; // 803DBA68
  c->r[5]=0u+0x00000003u; // 803DBA6C
  c->lr=0x803DBA74u; f_802DC484(c); // 803DBA70
  goto L_803DBA90; // 803DBA74
L_803DBA78:;
  c->r[29]=c->r[28]|c->r[28]; // 803DBA78
  goto L_803DBA90; // 803DBA7C
L_803DBA80:;
  c->r[30]=0u+0x00000000u; // 803DBA80
  goto L_803DBA90; // 803DBA84
L_803DBA88:;
  c->r[3]=0u+0x00000005u; // 803DBA88
  goto L_803DBAC4; // 803DBA8C
L_803DBA90:;
  c->r[4]=0u+0x807B0000u; // 803DBA90
  c->r[0]=0u+0x00000001u; // 803DBA94
  c->r[4]=c->r[4]+0x00006798u; // 803DBA98
  c->r[3]=c->r[31]|c->r[31]; // 803DBA9C
  W8(c->r[4]+0x00001844u,c->r[0]); // 803DBAA0
  c->r[5]=c->r[27]|c->r[27]; // 803DBAA4
  c->r[6]=c->r[29]|c->r[29]; // 803DBAA8
  c->r[7]=c->r[30]|c->r[30]; // 803DBAAC
  c->r[4]=0u+0x00000001u; // 803DBAB0
  c->lr=0x803DBAB8u; f_803E4898(c); // 803DBAB4
  c->r[3]=0u+0x00000001u; // 803DBAB8
  goto L_803DBAC4; // 803DBABC
L_803DBAC0:;
  c->r[3]=0u+0x00000003u; // 803DBAC0
L_803DBAC4:;
  c->r[11]=c->r[1]+0x00000030u; // 803DBAC4
  c->lr=0x803DBACCu; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 803DBAC8
  c->r[0]=R32(c->r[1]+0x00000034u); // 803DBACC
  c->lr=c->r[0]; // 803DBAD0
  c->r[1]=c->r[1]+0x00000030u; // 803DBAD4
  return; // 803DBAD8
}

// btm_event_filter_complete
void f_803DBADC(Ctx* __restrict c) {
  trace_call(0x803DBADCu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803DBADC
  c->r[0]=c->lr; // 803DBAE0
  W32(c->r[1]+0x00000024u,c->r[0]); // 803DBAE4
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 803DBAE8
  c->r[31]=0u+0x807B0000u; // 803DBAEC
  c->r[31]=c->r[31]+0x00006798u; // 803DBAF0
  W32(c->r[1]+0x00000018u,c->r[30]); // 803DBAF4
  W32(c->r[1]+0x00000014u,c->r[29]); // 803DBAF8
  c->r[4]=R8(c->r[31]+0x00001845u); // 803DBAFC
  c->r[29]=R32(c->r[31]+0x000016B8u); // 803DBB00
  cmps(c,0,(int32_t)c->r[4],0); // 803DBB04
  if (crb(c,2)) { goto L_803DBB18; } // 803DBB08
  c->r[0]=c->r[4]+0xFFFFFFFFu; // 803DBB0C
  W8(c->r[31]+0x00001845u,c->r[0]); // 803DBB10
  goto L_803DBCE0; // 803DBB14
L_803DBB18:;
  c->r[0]=R8(c->r[31]+0x00001844u); // 803DBB18
  cmpu(c,0,c->r[0],0x00000001u); // 803DBB1C
  if (!crb(c,2)) { goto L_803DBCE0; } // 803DBB20
  c->r[5]=R8(c->r[3]+0x00000000u); // 803DBB24
  cmps(c,0,(int32_t)c->r[5],0); // 803DBB28
  if (crb(c,2)) { goto L_803DBB5C; } // 803DBB2C
  c->r[0]=R8(c->r[31]+0x000027C0u); // 803DBB30
  cmpu(c,0,c->r[0],0x00000002u); // 803DBB34
  if (crb(c,0)) { goto L_803DBB50; } // 803DBB38
  c->r[3]=0u+0x000D0000u; // 803DBB3C
  c->r[4]=0u+0x80710000u; // 803DBB40
  c->r[3]=c->r[3]+0x00000001u; // 803DBB44
  c->r[4]=c->r[4]+0xFFFFBF50u; // 803DBB48
  c->lr=0x803DBB50u; f_803D04F8(c); // 803DBB4C
L_803DBB50:;
  c->r[0]=0u+0x0000000Au; // 803DBB50
  W8(c->r[1]+0x00000008u,c->r[0]); // 803DBB54
  goto L_803DBB64; // 803DBB58
L_803DBB5C:;
  c->r[0]=0u+0x00000000u; // 803DBB5C
  W8(c->r[1]+0x00000008u,c->r[0]); // 803DBB60
L_803DBB64:;
  c->r[3]=R8(c->r[31]+0x00001847u); // 803DBB64
  cmps(c,0,(int32_t)c->r[3],0); // 803DBB68
  if (!crb(c,2)) { goto L_803DBB94; } // 803DBB6C
  c->r[0]=0u+0x00000000u; // 803DBB70
  cmps(c,0,(int32_t)c->r[29],0); // 803DBB74
  W8(c->r[31]+0x00001844u,c->r[0]); // 803DBB78
  if (crb(c,2)) { goto L_803DBCE0; } // 803DBB7C
  c->r[12]=c->r[29]|c->r[29]; // 803DBB80
  c->r[3]=c->r[1]+0x00000008u; // 803DBB84
  c->ctr=c->r[12]; // 803DBB88
  if (true) { c->lr=0x803DBB90u; dispatch(c,c->ctr); } // 803DBB8C
  goto L_803DBCE0; // 803DBB90
L_803DBB94:;
  cmps(c,0,(int32_t)c->r[0],0); // 803DBB94
  if (crb(c,2)) { goto L_803DBBB8; } // 803DBB98
  c->r[3]=0u+0x0000000Au; // 803DBB9C
  c->lr=0x803DBBA4u; f_803DBF74(c); // 803DBBA0
  c->r[0]=0u+0x00000000u; // 803DBBA4
  W8(c->r[31]+0x00001844u,c->r[0]); // 803DBBA8
  W8(c->r[31]+0x00001848u,c->r[0]); // 803DBBAC
  W8(c->r[31]+0x00001847u,c->r[0]); // 803DBBB0
  goto L_803DBCE0; // 803DBBB4
L_803DBBB8:;
  cmpu(c,0,c->r[3],0x00000001u); // 803DBBB8
  if (!crb(c,2)) { goto L_803DBBFC; } // 803DBBBC
  c->r[3]=R8(c->r[31]+0x00001837u); // 803DBBC0
  c->r[4]=c->r[31]+0x00001838u; // 803DBBC4
  c->lr=0x803DBBCCu; f_803DB9F8(c); // 803DBBC8
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; // 803DBBCC
  W8(c->r[1]+0x00000008u,c->r[3]); // 803DBBD0
  cmpu(c,0,c->r[0],0x00000001u); // 803DBBD4
  if (!crb(c,2)) { goto L_803DBBE8; } // 803DBBD8
  c->r[0]=0u+0x00000002u; // 803DBBDC
  W8(c->r[31]+0x00001847u,c->r[0]); // 803DBBE0
  goto L_803DBCE0; // 803DBBE4
L_803DBBE8:;
  c->r[0]=0u+0x00000000u; // 803DBBE8
  c->r[3]=0u+0x0000000Au; // 803DBBEC
  W8(c->r[31]+0x00001844u,c->r[0]); // 803DBBF0
  c->lr=0x803DBBF8u; f_803DBF74(c); // 803DBBF4
  goto L_803DBCE0; // 803DBBF8
L_803DBBFC:;
  c->r[4]=R8(c->r[31]+0x00001836u); // 803DBBFC
  c->r[0]=0u+0x00000003u; // 803DBC00
  c->r[3]=0u+0x00000000u; // 803DBC04
  W8(c->r[31]+0x00001847u,c->r[0]); // 803DBC08
  cmpu(c,0,c->r[4],0x0000000Cu); // 803DBC0C
  c->r[0]=0u+0x0000000Cu; // 803DBC10
  W8(c->r[31]+0x00001844u,c->r[3]); // 803DBC14
  if (crb(c,1)) { goto L_803DBC20; } // 803DBC18
  c->r[0]=c->r[4]|c->r[4]; // 803DBC1C
L_803DBC20:;
  c->r[3]=R8(c->r[31]+0x00001848u); // 803DBC20
  c->r[29]=c->r[2]+0x00000E90u; // 803DBC24
  W8(c->r[31]+0x00001836u,c->r[0]); // 803DBC28
  c->r[0]=rotl(c->r[3],0)&0x00000001u; cr0(c,c->r[0]); // 803DBC2C
  if (crb(c,2)) { goto L_803DBC38; } // 803DBC30
  c->r[29]=c->r[2]+0x00000E94u; // 803DBC34
L_803DBC38:;
  c->r[0]=rotl(c->r[3],0)&0x00000004u; cr0(c,c->r[0]); // 803DBC38
  if (crb(c,2)) { goto L_803DBC6C; } // 803DBC3C
  c->r[3]=R16(c->r[31]+0x00001842u); // 803DBC40
  c->r[5]=c->r[29]|c->r[29]; // 803DBC44
  c->r[4]=R16(c->r[31]+0x00001840u); // 803DBC48
  c->r[6]=R8(c->r[31]+0x00001835u); // 803DBC4C
  c->r[7]=R8(c->r[31]+0x00001836u); // 803DBC50
  c->lr=0x803DBC58u; f_803E34C0(c); // 803DBC54
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 803DBC58
  if (!crb(c,2)) { goto L_803DBCE0; } // 803DBC5C
  c->r[3]=0u+0x00000003u; // 803DBC60
  c->lr=0x803DBC68u; f_803DBF74(c); // 803DBC64
  goto L_803DBCE0; // 803DBC68
L_803DBC6C:;
  c->r[30]=0u+0x807B0000u; // 803DBC6C
  c->r[30]=c->r[30]+0x00006798u; // 803DBC70
  c->r[3]=R32(c->r[30]+0x000016DCu); // 803DBC74
  cmps(c,0,(int32_t)c->r[3],0); // 803DBC78
  if (crb(c,2)) { goto L_803DBC8C; } // 803DBC7C
  c->lr=0x803DBC84u; f_803CDBDC(c); // 803DBC80
  c->r[0]=0u+0x00000000u; // 803DBC84
  W32(c->r[30]+0x000016DCu,c->r[0]); // 803DBC88
L_803DBC8C:;
  c->r[0]=0u+0x00000000u; // 803DBC8C
  c->r[3]=0u+0x00000708u; // 803DBC90
  W16(c->r[30]+0x000016E0u,c->r[0]); // 803DBC94
  W16(c->r[30]+0x000016E2u,c->r[0]); // 803DBC98
  c->lr=0x803DBCA0u; f_803CD954(c); // 803DBC9C
  cmps(c,0,(int32_t)c->r[3],0); // 803DBCA0
  W32(c->r[31]+0x000016DCu,c->r[3]); // 803DBCA4
  if (crb(c,2)) { goto L_803DBCC0; } // 803DBCA8
  c->r[0]=0u+0x00000096u; // 803DBCAC
  c->r[4]=0u+0x00000000u; // 803DBCB0
  W16(c->r[31]+0x000016E2u,c->r[0]); // 803DBCB4
  c->r[5]=0u+0x00000708u; // 803DBCB8
  c->lr=0x803DBCC0u; f_800043EC(c); // 803DBCBC
L_803DBCC0:;
  c->r[4]=R8(c->r[31]+0x00001835u); // 803DBCC0
  c->r[3]=c->r[29]|c->r[29]; // 803DBCC4
  c->r[5]=0u+0x00000000u; // 803DBCC8
  c->lr=0x803DBCD0u; f_803E33B8(c); // 803DBCCC
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 803DBCD0
  if (!crb(c,2)) { goto L_803DBCE0; } // 803DBCD4
  c->r[3]=0u+0x00000003u; // 803DBCD8
  c->lr=0x803DBCE0u; f_803DBF74(c); // 803DBCDC
L_803DBCE0:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 803DBCE0
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 803DBCE4
  c->r[30]=R32(c->r[1]+0x00000018u); // 803DBCE8
  c->r[29]=R32(c->r[1]+0x00000014u); // 803DBCEC
  c->lr=c->r[0]; // 803DBCF0
  c->r[1]=c->r[1]+0x00000020u; // 803DBCF4
  return; // 803DBCF8
}

// btm_process_inq_results
void f_803DBCFC(Ctx* __restrict c) {
  trace_call(0x803DBCFCu);
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803DBCFC
  c->r[0]=c->lr; // 803DBD00
  W32(c->r[1]+0x00000064u,c->r[0]); // 803DBD04
  c->r[11]=c->r[1]+0x00000060u; // 803DBD08
  c->lr=0x803DBD10u; { W32(c->r[11]+0xFFFFFFC0u,c->r[16]); W32(c->r[11]+0xFFFFFFC4u,c->r[17]); W32(c->r[11]+0xFFFFFFC8u,c->r[18]); W32(c->r[11]+0xFFFFFFCCu,c->r[19]); W32(c->r[11]+0xFFFFFFD0u,c->r[20]); W32(c->r[11]+0xFFFFFFD4u,c->r[21]); W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 803DBD0C
  c->r[5]=0u+0x807B0000u; // 803DBD10
  c->r[18]=c->r[4]|c->r[4]; // 803DBD14
  c->r[27]=c->r[5]+0x00006798u; // 803DBD18
  c->r[23]=0u+0x00000001u; // 803DBD1C
  c->r[0]=R8(c->r[27]+0x00001848u); // 803DBD20
  c->r[21]=0u+0x00000000u; // 803DBD24
  c->r[22]=R32(c->r[27]+0x000016B4u); // 803DBD28
  c->r[20]=0u+0x00000000u; // 803DBD2C
  cmps(c,0,(int32_t)c->r[0],0); // 803DBD30
  if (crb(c,2)) { goto L_803DBF5C; } // 803DBD34
  c->r[28]=R8(c->r[3]+0x00000000u); // 803DBD38
  c->r[17]=c->r[3]+0x00000001u; // 803DBD3C
  c->r[26]=0u+0x00000000u; // 803DBD40
  c->r[31]=0u+0x0000007Fu; // 803DBD44
  c->r[16]=0u+0x00000000u; // 803DBD48
  goto L_803DBF50; // 803DBD4C
L_803DBD50:;
  c->r[0]=R8(c->r[17]+0x00000000u); // 803DBD50
  cmps(c,0,(int32_t)c->r[18],0); // 803DBD54
  W8(c->r[1]+0x00000011u,c->r[0]); // 803DBD58
  c->r[0]=R8(c->r[17]+0x00000001u); // 803DBD5C
  W8(c->r[1]+0x00000010u,c->r[0]); // 803DBD60
  c->r[0]=R8(c->r[17]+0x00000002u); // 803DBD64
  W8(c->r[1]+0x0000000Fu,c->r[0]); // 803DBD68
  c->r[0]=R8(c->r[17]+0x00000003u); // 803DBD6C
  W8(c->r[1]+0x0000000Eu,c->r[0]); // 803DBD70
  c->r[0]=R8(c->r[17]+0x00000004u); // 803DBD74
  W8(c->r[1]+0x0000000Du,c->r[0]); // 803DBD78
  c->r[0]=R8(c->r[17]+0x00000005u); // 803DBD7C
  W8(c->r[1]+0x0000000Cu,c->r[0]); // 803DBD80
  c->r[29]=R8(c->r[17]+0x00000006u); // 803DBD84
  c->r[30]=R8(c->r[17]+0x00000007u); // 803DBD88
  c->r[17]=c->r[17]+0x00000008u; // 803DBD8C
  if (!crb(c,2)) { goto L_803DBD9C; } // 803DBD90
  c->r[21]=R8(c->r[17]+0x00000000u); // 803DBD94
  c->r[17]=c->r[17]+0x00000001u; // 803DBD98
L_803DBD9C:;
  c->r[0]=R8(c->r[17]+0x00000000u); // 803DBD9C
  cmps(c,0,(int32_t)c->r[18],0); // 803DBDA0
  W8(c->r[1]+0x0000000Au,c->r[0]); // 803DBDA4
  c->r[0]=R8(c->r[17]+0x00000001u); // 803DBDA8
  W8(c->r[1]+0x00000009u,c->r[0]); // 803DBDAC
  c->r[0]=R8(c->r[17]+0x00000002u); // 803DBDB0
  W8(c->r[1]+0x00000008u,c->r[0]); // 803DBDB4
  c->r[0]=R8(c->r[17]+0x00000004u); // 803DBDB8
  c->r[3]=R8(c->r[17]+0x00000003u); // 803DBDBC
  c->r[17]=c->r[17]+0x00000005u; // 803DBDC0
  c->r[0]=rotl(c->r[0],8)&0xFFFFFF00u; // 803DBDC4
  c->r[0]=c->r[3]+c->r[0]; // 803DBDC8
  c->r[19]=rotl(c->r[0],0)&0x0000FFFFu; // 803DBDCC
  if (crb(c,2)) { goto L_803DBDDC; } // 803DBDD0
  c->r[20]=R8(c->r[17]+0x00000000u); // 803DBDD4
  c->r[17]=c->r[17]+0x00000001u; // 803DBDD8
L_803DBDDC:;
  c->r[3]=c->r[1]+0x0000000Cu; // 803DBDDC
  c->lr=0x803DBDE4u; f_803DB818(c); // 803DBDE0
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 803DBDE4
  if (!crb(c,2)) { goto L_803DBF4C; } // 803DBDE8
  c->r[12]=R32(c->r[27]+0x0000184Cu); // 803DBDEC
  cmps(c,0,(int32_t)c->r[12],0); // 803DBDF0
  if (crb(c,2)) { goto L_803DBE10; } // 803DBDF4
  c->r[3]=c->r[1]+0x0000000Cu; // 803DBDF8
  c->r[4]=c->r[1]+0x00000008u; // 803DBDFC
  c->ctr=c->r[12]; // 803DBE00
  if (true) { c->lr=0x803DBE08u; dispatch(c,c->ctr); } // 803DBE04
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 803DBE08
  if (crb(c,2)) { goto L_803DBF4C; } // 803DBE0C
L_803DBE10:;
  c->r[25]=c->r[27]+0x000016E4u; // 803DBE10
  c->r[24]=0u+0x00000000u; // 803DBE14
L_803DBE18:;
  c->r[0]=R8(c->r[25]+0x0000001Au); // 803DBE18
  cmps(c,0,(int32_t)c->r[0],0); // 803DBE1C
  if (crb(c,2)) { goto L_803DBE40; } // 803DBE20
  c->r[3]=c->r[25]+0x0000000Au; // 803DBE24
  c->r[4]=c->r[1]+0x0000000Cu; // 803DBE28
  c->r[5]=0u+0x00000006u; // 803DBE2C
  c->lr=0x803DBE34u; f_803AF7B8(c); // 803DBE30
  cmps(c,0,(int32_t)c->r[3],0); // 803DBE34
  if (!crb(c,2)) { goto L_803DBE40; } // 803DBE38
  goto L_803DBE54; // 803DBE3C
L_803DBE40:;
  c->r[24]=c->r[24]+0x00000001u; // 803DBE40
  c->r[25]=c->r[25]+0x0000001Cu; // 803DBE44
  cmpu(c,0,c->r[24],0x0000000Cu); // 803DBE48
  if (crb(c,0)) { IRQCHK(c); goto L_803DBE18; } // 803DBE4C
  c->r[25]=0u+0x00000000u; // 803DBE50
L_803DBE54:;
  cmps(c,0,(int32_t)c->r[25],0); // 803DBE54
  if (!crb(c,2)) { goto L_803DBE70; } // 803DBE58
  c->r[3]=c->r[1]+0x0000000Cu; // 803DBE5C
  c->lr=0x803DBE64u; f_803DB8F4(c); // 803DBE60
  c->r[25]=c->r[3]|c->r[3]; // 803DBE64
  c->r[23]=0u+0x00000001u; // 803DBE68
  goto L_803DBE84; // 803DBE6C
L_803DBE70:;
  c->r[3]=R32(c->r[25]+0x00000004u); // 803DBE70
  c->r[0]=R32(c->r[27]+0x000016C0u); // 803DBE74
  cmpu(c,0,c->r[3],c->r[0]); // 803DBE78
  if (!crb(c,2)) { goto L_803DBE84; } // 803DBE7C
  c->r[23]=0u+0x00000000u; // 803DBE80
L_803DBE84:;
  cmpu(c,0,c->r[23],0x00000001u); // 803DBE84
  if (!crb(c,2)) { goto L_803DBF4C; } // 803DBE88
  W8(c->r[25]+0x00000013u,c->r[29]); // 803DBE8C
  cmps(c,0,(int32_t)c->r[18],0); // 803DBE90
  c->r[5]=R8(c->r[1]+0x00000008u); // 803DBE94
  c->r[0]=c->r[19]|0x00008000u; // 803DBE98
  W8(c->r[25]+0x00000014u,c->r[30]); // 803DBE9C
  c->r[24]=c->r[25]+0x00000008u; // 803DBEA0
  c->r[4]=R8(c->r[1]+0x00000009u); // 803DBEA4
  W8(c->r[25]+0x00000015u,c->r[21]); // 803DBEA8
  c->r[3]=R8(c->r[1]+0x0000000Au); // 803DBEAC
  W8(c->r[25]+0x00000010u,c->r[5]); // 803DBEB0
  W8(c->r[25]+0x00000011u,c->r[4]); // 803DBEB4
  W8(c->r[25]+0x00000012u,c->r[3]); // 803DBEB8
  W16(c->r[25]+0x00000008u,c->r[0]); // 803DBEBC
  if (crb(c,2)) { goto L_803DBECC; } // 803DBEC0
  W8(c->r[24]+0x0000000Eu,c->r[20]); // 803DBEC4
  goto L_803DBED0; // 803DBEC8
L_803DBECC:;
  W8(c->r[24]+0x0000000Eu,c->r[31]); // 803DBECC
L_803DBED0:;
  c->lr=0x803DBED4u; f_803CE974(c); // 803DBED0
  W32(c->r[25]+0x00000000u,c->r[3]); // 803DBED4
  c->r[0]=R32(c->r[27]+0x000016C0u); // 803DBED8
  W32(c->r[25]+0x00000004u,c->r[0]); // 803DBEDC
  c->r[0]=R8(c->r[27]+0x00001848u); // 803DBEE0
  c->r[3]=R8(c->r[27]+0x0000183Fu); // 803DBEE4
  c->r[0]=rotl(c->r[0],0)&0x00000004u; cr0(c,c->r[0]); // 803DBEE8
  c->r[0]=c->r[3]+0x00000001u; // 803DBEEC
  W8(c->r[27]+0x0000183Fu,c->r[0]); // 803DBEF0
  if (!crb(c,2)) { goto L_803DBF14; } // 803DBEF4
  c->r[3]=R8(c->r[27]+0x00001836u); // 803DBEF8
  cmps(c,0,(int32_t)c->r[3],0); // 803DBEFC
  if (crb(c,2)) { goto L_803DBF14; } // 803DBF00
  c->r[0]=rotl(c->r[0],0)&0x000000FFu; // 803DBF04
  cmpu(c,0,c->r[0],c->r[3]); // 803DBF08
  if (!crb(c,2)) { goto L_803DBF14; } // 803DBF0C
  c->lr=0x803DBF14u; f_803E3460(c); // 803DBF10
L_803DBF14:;
  cmps(c,0,(int32_t)c->r[22],0); // 803DBF14
  W8(c->r[25]+0x00000018u,c->r[16]); // 803DBF18
  if (crb(c,2)) { goto L_803DBF30; } // 803DBF1C
  c->r[12]=c->r[22]|c->r[22]; // 803DBF20
  c->r[3]=c->r[24]|c->r[24]; // 803DBF24
  c->ctr=c->r[12]; // 803DBF28
  if (true) { c->lr=0x803DBF30u; dispatch(c,c->ctr); } // 803DBF2C
L_803DBF30:;
  c->r[12]=R32(c->r[27]+0x000016BCu); // 803DBF30
  cmps(c,0,(int32_t)c->r[12],0); // 803DBF34
  if (crb(c,2)) { goto L_803DBF4C; } // 803DBF38
  c->r[3]=c->r[25]+0x00000008u; // 803DBF3C
  c->r[4]=0u+0x00000001u; // 803DBF40
  c->ctr=c->r[12]; // 803DBF44
  if (true) { c->lr=0x803DBF4Cu; dispatch(c,c->ctr); } // 803DBF48
L_803DBF4C:;
  c->r[26]=c->r[26]+0x00000001u; // 803DBF4C
L_803DBF50:;
  c->r[0]=rotl(c->r[26],0)&0x000000FFu; // 803DBF50
  cmpu(c,0,c->r[0],c->r[28]); // 803DBF54
  if (crb(c,0)) { IRQCHK(c); goto L_803DBD50; } // 803DBF58
L_803DBF5C:;
  c->r[11]=c->r[1]+0x00000060u; // 803DBF5C
  c->lr=0x803DBF64u; { c->r[16]=R32(c->r[11]+0xFFFFFFC0u); c->r[17]=R32(c->r[11]+0xFFFFFFC4u); c->r[18]=R32(c->r[11]+0xFFFFFFC8u); c->r[19]=R32(c->r[11]+0xFFFFFFCCu); c->r[20]=R32(c->r[11]+0xFFFFFFD0u); c->r[21]=R32(c->r[11]+0xFFFFFFD4u); c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 803DBF60
  c->r[0]=R32(c->r[1]+0x00000064u); // 803DBF64
  c->lr=c->r[0]; // 803DBF68
  c->r[1]=c->r[1]+0x00000060u; // 803DBF6C
  return; // 803DBF70
}

// btm_process_inq_complete
void f_803DBF74(Ctx* __restrict c) {
  trace_call(0x803DBF74u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803DBF74
  c->r[0]=c->lr; // 803DBF78
  W32(c->r[1]+0x00000024u,c->r[0]); // 803DBF7C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 803DBF80
  W32(c->r[1]+0x00000018u,c->r[30]); // 803DBF84
  W32(c->r[1]+0x00000014u,c->r[29]); // 803DBF88
  c->r[29]=0u+0x807B0000u; // 803DBF8C
  c->r[29]=c->r[29]+0x00006798u; // 803DBF90
  W32(c->r[1]+0x00000010u,c->r[28]); // 803DBF94
  c->r[0]=R8(c->r[29]+0x00001848u); // 803DBF98
  c->r[28]=R32(c->r[29]+0x000016B0u); // 803DBF9C
  cmps(c,0,(int32_t)c->r[0],0); // 803DBFA0
  if (crb(c,2)) { goto L_803DC058; } // 803DBFA4
  c->r[4]=R32(c->r[29]+0x000016C0u); // 803DBFA8
  cmps(c,0,(int32_t)c->r[3],0); // 803DBFAC
  c->r[3]=0u+0x0000000Au; // 803DBFB0
  c->r[0]=c->r[4]+0x00000001u; // 803DBFB4
  W32(c->r[29]+0x000016C0u,c->r[0]); // 803DBFB8
  if (!crb(c,2)) { goto L_803DBFC4; } // 803DBFBC
  c->r[3]=0u+0x00000000u; // 803DBFC0
L_803DBFC4:;
  c->r[0]=R8(c->r[29]+0x00001848u); // 803DBFC4
  W8(c->r[29]+0x0000183Eu,c->r[3]); // 803DBFC8
  c->r[0]=rotl(c->r[0],0)&0x00000004u; cr0(c,c->r[0]); // 803DBFCC
  if (!crb(c,2)) { goto L_803DC058; } // 803DBFD0
  c->r[31]=0u+0x807B0000u; // 803DBFD4
  c->r[30]=0u+0x00000000u; // 803DBFD8
  c->r[31]=c->r[31]+0x00006798u; // 803DBFDC
  W32(c->r[29]+0x000016B4u,c->r[30]); // 803DBFE0
  c->r[3]=R32(c->r[31]+0x000016DCu); // 803DBFE4
  W8(c->r[29]+0x00001848u,c->r[30]); // 803DBFE8
  cmps(c,0,(int32_t)c->r[3],0); // 803DBFEC
  W8(c->r[29]+0x00001847u,c->r[30]); // 803DBFF0
  W32(c->r[29]+0x000016B0u,c->r[30]); // 803DBFF4
  if (crb(c,2)) { goto L_803DC004; } // 803DBFF8
  c->lr=0x803DC000u; f_803CDBDC(c); // 803DBFFC
  W32(c->r[31]+0x000016DCu,c->r[30]); // 803DC000
L_803DC004:;
  c->r[3]=0u+0x807B0000u; // 803DC004
  c->r[4]=0u+0x00000000u; // 803DC008
  c->r[3]=c->r[3]+0x00006798u; // 803DC00C
  W16(c->r[31]+0x000016E0u,c->r[4]); // 803DC010
  c->r[0]=R8(c->r[3]+0x000027C0u); // 803DC014
  W16(c->r[31]+0x000016E2u,c->r[4]); // 803DC018
  cmpu(c,0,c->r[0],0x00000005u); // 803DC01C
  if (crb(c,0)) { goto L_803DC040; } // 803DC020
  c->r[3]=0u+0x000D0000u; // 803DC024
  c->r[4]=0u+0x80710000u; // 803DC028
  c->r[5]=R8(c->r[29]+0x0000183Eu); // 803DC02C
  c->r[3]=c->r[3]+0x00000004u; // 803DC030
  c->r[6]=R8(c->r[29]+0x0000183Fu); // 803DC034
  c->r[4]=c->r[4]+0xFFFFBF8Cu; // 803DC038
  c->lr=0x803DC040u; f_803D0510(c); // 803DC03C
L_803DC040:;
  cmps(c,0,(int32_t)c->r[28],0); // 803DC040
  if (crb(c,2)) { goto L_803DC058; } // 803DC044
  c->r[12]=c->r[28]|c->r[28]; // 803DC048
  c->r[3]=c->r[29]+0x0000183Eu; // 803DC04C
  c->ctr=c->r[12]; // 803DC050
  if (true) { c->lr=0x803DC058u; dispatch(c,c->ctr); } // 803DC054
L_803DC058:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 803DC058
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 803DC05C
  c->r[30]=R32(c->r[1]+0x00000018u); // 803DC060
  c->r[29]=R32(c->r[1]+0x00000014u); // 803DC064
  c->r[28]=R32(c->r[1]+0x00000010u); // 803DC068
  c->lr=c->r[0]; // 803DC06C
  c->r[1]=c->r[1]+0x00000020u; // 803DC070
  return; // 803DC074
}

// btm_initiate_rem_name
void f_803DC078(Ctx* __restrict c) {
  trace_call(0x803DC078u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803DC078
  c->r[0]=c->lr; // 803DC07C
  W32(c->r[1]+0x00000034u,c->r[0]); // 803DC080
  c->r[11]=c->r[1]+0x00000030u; // 803DC084
  c->lr=0x803DC08Cu; { W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 803DC088
  c->r[31]=0u+0x807B0000u; // 803DC08C
  c->r[23]=c->r[3]|c->r[3]; // 803DC090
  c->r[24]=c->r[4]|c->r[4]; // 803DC094
  c->r[25]=c->r[5]|c->r[5]; // 803DC098
  c->r[26]=c->r[6]|c->r[6]; // 803DC09C
  c->r[27]=c->r[7]|c->r[7]; // 803DC0A0
  c->r[31]=c->r[31]+0x00006798u; // 803DC0A4
  c->r[30]=0u+0x00000001u; // 803DC0A8
  c->r[29]=0u+0x00000001u; // 803DC0AC
  c->r[28]=0u+0x00000001u; // 803DC0B0
  c->lr=0x803DC0B8u; f_803D90A0(c); // 803DC0B4
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 803DC0B8
  if (!crb(c,2)) { goto L_803DC0C8; } // 803DC0BC
  c->r[3]=0u+0x00000006u; // 803DC0C0
  goto L_803DC1B0; // 803DC0C4
L_803DC0C8:;
  c->r[3]=R8(c->r[31]+0x000016AEu); // 803DC0C8
  c->r[0]=c->r[3]&c->r[25]; cr0(c,c->r[0]); // 803DC0CC
  if (!crb(c,2)) { goto L_803DC1A8; } // 803DC0D0
  cmpu(c,0,c->r[25],0x00000001u); // 803DC0D4
  if (!crb(c,2)) { goto L_803DC114; } // 803DC0D8
  cmps(c,0,(int32_t)c->r[3],0); // 803DC0DC
  if (crb(c,2)) { goto L_803DC10C; } // 803DC0E0
  c->r[3]=c->r[23]|c->r[23]; // 803DC0E4
  c->r[4]=c->r[31]+0x000016A8u; // 803DC0E8
  c->r[5]=0u+0x00000006u; // 803DC0EC
  c->lr=0x803DC0F4u; f_803AF7B8(c); // 803DC0F0
  cmps(c,0,(int32_t)c->r[3],0); // 803DC0F4
  if (!crb(c,2)) { goto L_803DC104; } // 803DC0F8
  c->r[30]=0u+0x00000000u; // 803DC0FC
  goto L_803DC10C; // 803DC100
L_803DC104:;
  c->r[3]=0u+0x00000002u; // 803DC104
  goto L_803DC1B0; // 803DC108
L_803DC10C:;
  W32(c->r[31]+0x0000167Cu,c->r[27]); // 803DC10C
  goto L_803DC124; // 803DC110
L_803DC114:;
  cmps(c,0,(int32_t)c->r[3],0); // 803DC114
  if (crb(c,2)) { goto L_803DC124; } // 803DC118
  c->r[3]=0u+0x00000002u; // 803DC11C
  goto L_803DC1B0; // 803DC120
L_803DC124:;
  cmps(c,0,(int32_t)c->r[30],0); // 803DC124
  if (crb(c,2)) { goto L_803DC188; } // 803DC128
  c->r[4]=c->r[23]|c->r[23]; // 803DC12C
  c->r[3]=c->r[31]+0x000016A8u; // 803DC130
  c->r[5]=0u+0x00000006u; // 803DC134
  c->lr=0x803DC13Cu; f_802DC484(c); // 803DC138
  c->r[5]=c->r[26]|c->r[26]; // 803DC13C
  c->r[3]=c->r[31]+0x00001680u; // 803DC140
  c->r[4]=0u+0x0000000Au; // 803DC144
  c->lr=0x803DC14Cu; f_803D0AAC(c); // 803DC148
  cmps(c,0,(int32_t)c->r[24],0); // 803DC14C
  if (crb(c,2)) { goto L_803DC170; } // 803DC150
  c->r[0]=R16(c->r[24]+0x00000000u); // 803DC154
  c->r[3]=c->r[23]|c->r[23]; // 803DC158
  c->r[4]=R8(c->r[24]+0x0000000Bu); // 803DC15C
  c->r[5]=R8(c->r[24]+0x0000000Du); // 803DC160
  c->r[6]=c->r[0]|0x00008000u; // 803DC164
  c->lr=0x803DC16Cu; f_803E3E8C(c); // 803DC168
  goto L_803DC184; // 803DC16C
L_803DC170:;
  c->r[3]=c->r[23]|c->r[23]; // 803DC170
  c->r[4]=0u+0x00000001u; // 803DC174
  c->r[5]=0u+0x00000000u; // 803DC178
  c->r[6]=0u+0x00000000u; // 803DC17C
  c->lr=0x803DC184u; f_803E3E8C(c); // 803DC180
L_803DC184:;
  c->r[29]=c->r[3]|c->r[3]; // 803DC184
L_803DC188:;
  c->r[0]=rotl(c->r[29],0)&0x000000FFu; cr0(c,c->r[0]); // 803DC188
  if (crb(c,2)) { goto L_803DC1A0; } // 803DC18C
  c->r[0]=R8(c->r[31]+0x000016AEu); // 803DC190
  c->r[0]=c->r[0]|c->r[25]; // 803DC194
  W8(c->r[31]+0x000016AEu,c->r[0]); // 803DC198
  goto L_803DC1AC; // 803DC19C
L_803DC1A0:;
  c->r[28]=0u+0x00000003u; // 803DC1A0
  goto L_803DC1AC; // 803DC1A4
L_803DC1A8:;
  c->r[28]=0u+0x00000002u; // 803DC1A8
L_803DC1AC:;
  c->r[3]=c->r[28]|c->r[28]; // 803DC1AC
L_803DC1B0:;
  c->r[11]=c->r[1]+0x00000030u; // 803DC1B0
  c->lr=0x803DC1B8u; { c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 803DC1B4
  c->r[0]=R32(c->r[1]+0x00000034u); // 803DC1B8
  c->lr=c->r[0]; // 803DC1BC
  c->r[1]=c->r[1]+0x00000030u; // 803DC1C0
  return; // 803DC1C4
}

// btm_process_remote_name
void f_803DC1C8(Ctx* __restrict c) {
  trace_call(0x803DC1C8u);
  {uint32_t ea=c->r[1]+0xFFFFFEE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803DC1C8
  c->r[0]=c->lr; // 803DC1CC
  W32(c->r[1]+0x00000124u,c->r[0]); // 803DC1D0
  c->r[11]=c->r[1]+0x00000120u; // 803DC1D4
  c->lr=0x803DC1DCu; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 803DC1D8
  c->r[31]=0u+0x807B0000u; // 803DC1DC
  c->r[26]=c->r[4]|c->r[4]; // 803DC1E0
  c->r[31]=c->r[31]+0x00006798u; // 803DC1E4
  c->r[27]=c->r[5]|c->r[5]; // 803DC1E8
  c->r[30]=R32(c->r[31]+0x0000167Cu); // 803DC1EC
  c->r[28]=c->r[6]|c->r[6]; // 803DC1F0
  c->r[29]=R8(c->r[31]+0x000016AEu); // 803DC1F4
  c->r[3]=c->r[31]+0x00001680u; // 803DC1F8
  c->lr=0x803DC200u; f_803D0B1C(c); // 803DC1FC
  c->r[3]=0u+0x00000000u; // 803DC200
  cmps(c,0,(int32_t)c->r[28],0); // 803DC204
  W8(c->r[31]+0x000016AEu,c->r[3]); // 803DC208
  if (!crb(c,2)) { goto L_803DC2C0; } // 803DC20C
  cmpu(c,0,c->r[27],0x000000F8u); // 803DC210
  c->r[4]=c->r[1]+0x0000000Cu; // 803DC214
  c->r[3]=0u+0x000000F8u; // 803DC218
  if (!crb(c,0)) { goto L_803DC224; } // 803DC21C
  c->r[3]=c->r[27]|c->r[27]; // 803DC220
L_803DC224:;
  c->r[5]=rotl(c->r[3],0)&0x0000FFFFu; cr0(c,c->r[5]); // 803DC224
  c->r[0]=0u+0x00000000u; // 803DC228
  W16(c->r[1]+0x0000000Au,c->r[3]); // 803DC22C
  W16(c->r[1]+0x00000008u,c->r[0]); // 803DC230
  c->r[3]=c->r[5]|c->r[5]; // 803DC234
  if (crb(c,2)) { goto L_803DC2D0; } // 803DC238
  c->r[0]=rotl(c->r[5],29)&0x1FFFFFFFu; cr0(c,c->r[0]); // 803DC23C
  c->ctr=c->r[0]; // 803DC240
  if (crb(c,2)) { goto L_803DC2A0; } // 803DC244
L_803DC248:;
  c->r[0]=R8(c->r[26]+0x00000000u); // 803DC248
  c->r[5]=c->r[5]+0xFFFFFFF8u; // 803DC24C
  W8(c->r[4]+0x00000000u,c->r[0]); // 803DC250
  c->r[0]=R8(c->r[26]+0x00000001u); // 803DC254
  W8(c->r[4]+0x00000001u,c->r[0]); // 803DC258
  c->r[0]=R8(c->r[26]+0x00000002u); // 803DC25C
  W8(c->r[4]+0x00000002u,c->r[0]); // 803DC260
  c->r[0]=R8(c->r[26]+0x00000003u); // 803DC264
  W8(c->r[4]+0x00000003u,c->r[0]); // 803DC268
  c->r[0]=R8(c->r[26]+0x00000004u); // 803DC26C
  W8(c->r[4]+0x00000004u,c->r[0]); // 803DC270
  c->r[0]=R8(c->r[26]+0x00000005u); // 803DC274
  W8(c->r[4]+0x00000005u,c->r[0]); // 803DC278
  c->r[0]=R8(c->r[26]+0x00000006u); // 803DC27C
  W8(c->r[4]+0x00000006u,c->r[0]); // 803DC280
  c->r[0]=R8(c->r[26]+0x00000007u); // 803DC284
  c->r[26]=c->r[26]+0x00000008u; // 803DC288
  W8(c->r[4]+0x00000007u,c->r[0]); // 803DC28C
  c->r[4]=c->r[4]+0x00000008u; // 803DC290
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_803DC248; } // 803DC294
  c->r[3]=c->r[3]&0x00000007u; cr0(c,c->r[3]); // 803DC298
  if (crb(c,2)) { goto L_803DC2D0; } // 803DC29C
L_803DC2A0:;
  c->ctr=c->r[3]; // 803DC2A0
L_803DC2A4:;
  c->r[0]=R8(c->r[26]+0x00000000u); // 803DC2A4
  c->r[5]=c->r[5]+0xFFFFFFFFu; // 803DC2A8
  c->r[26]=c->r[26]+0x00000001u; // 803DC2AC
  W8(c->r[4]+0x00000000u,c->r[0]); // 803DC2B0
  c->r[4]=c->r[4]+0x00000001u; // 803DC2B4
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_803DC2A4; } // 803DC2B8
  goto L_803DC2D0; // 803DC2BC
L_803DC2C0:;
  c->r[0]=0u+0x00000009u; // 803DC2C0
  W16(c->r[1]+0x0000000Au,c->r[3]); // 803DC2C4
  W16(c->r[1]+0x00000008u,c->r[0]); // 803DC2C8
  W8(c->r[1]+0x0000000Cu,c->r[3]); // 803DC2CC
L_803DC2D0:;
  c->r[3]=c->r[31]+0x000016A8u; // 803DC2D0
  c->r[4]=0u+0x00000000u; // 803DC2D4
  c->r[5]=0u+0x00000006u; // 803DC2D8
  c->lr=0x803DC2E0u; f_800043EC(c); // 803DC2DC
  c->r[0]=rotl(c->r[29],0)&0x00000001u; cr0(c,c->r[0]); // 803DC2E0
  if (crb(c,2)) { goto L_803DC308; } // 803DC2E4
  c->r[0]=0u+0x00000000u; // 803DC2E8
  cmps(c,0,(int32_t)c->r[30],0); // 803DC2EC
  W32(c->r[31]+0x0000167Cu,c->r[0]); // 803DC2F0
  if (crb(c,2)) { goto L_803DC308; } // 803DC2F4
  c->r[12]=c->r[30]|c->r[30]; // 803DC2F8
  c->r[3]=c->r[1]+0x00000008u; // 803DC2FC
  c->ctr=c->r[12]; // 803DC300
  if (true) { c->lr=0x803DC308u; dispatch(c,c->ctr); } // 803DC304
L_803DC308:;
  c->r[11]=c->r[1]+0x00000120u; // 803DC308
  c->lr=0x803DC310u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 803DC30C
  c->r[0]=R32(c->r[1]+0x00000124u); // 803DC310
  c->lr=c->r[0]; // 803DC314
  c->r[1]=c->r[1]+0x00000120u; // 803DC318
  return; // 803DC31C
}

// btm_inq_rmt_name_failed
void f_803DC320(Ctx* __restrict c) {
  trace_call(0x803DC320u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803DC320
  c->r[0]=c->lr; // 803DC324
  c->r[3]=0u+0x00000000u; // 803DC328
  c->r[4]=0u+0x00000000u; // 803DC32C
  W32(c->r[1]+0x00000014u,c->r[0]); // 803DC330
  c->r[5]=0u+0x00000000u; // 803DC334
  c->r[6]=0u+0x0000001Fu; // 803DC338
  c->lr=0x803DC340u; f_803DC1C8(c); // 803DC33C
  c->r[3]=0u+0x00000000u; // 803DC340
  c->r[4]=0u+0x00000000u; // 803DC344
  c->r[5]=0u+0x0000001Fu; // 803DC348
  c->lr=0x803DC350u; f_803DF224(c); // 803DC34C
  c->r[0]=R32(c->r[1]+0x00000014u); // 803DC350
  c->lr=c->r[0]; // 803DC354
  c->r[1]=c->r[1]+0x00000010u; // 803DC358
  return; // 803DC35C
}

// btm_init
void f_803DC360(Ctx* __restrict c) {
  trace_call(0x803DC360u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803DC360
  c->r[0]=c->lr; // 803DC364
  c->r[4]=0u+0x00000000u; // 803DC368
  c->r[5]=0u+0x000027C4u; // 803DC36C
  W32(c->r[1]+0x00000014u,c->r[0]); // 803DC370
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 803DC374
  c->r[31]=0u+0x807B0000u; // 803DC378
  c->r[3]=c->r[31]+0x00006798u; // 803DC37C
  c->lr=0x803DC384u; f_800043EC(c); // 803DC380
  c->r[3]=c->r[31]+0x00006798u; // 803DC384
  c->r[0]=0u+0x00000000u; // 803DC388
  W8(c->r[3]+0x000027C0u,c->r[0]); // 803DC38C
  c->lr=0x803DC394u; f_803DB814(c); // 803DC390
  c->lr=0x803DC398u; f_803D69FC(c); // 803DC394
  c->r[3]=0u+0x00000002u; // 803DC398
  c->lr=0x803DC3A0u; f_803DF114(c); // 803DC39C
  c->lr=0x803DC3A4u; f_803DD050(c); // 803DC3A0
  c->lr=0x803DC3A8u; f_803D8E0C(c); // 803DC3A4
  c->r[0]=R32(c->r[1]+0x00000014u); // 803DC3A8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 803DC3AC
  c->lr=c->r[0]; // 803DC3B0
  c->r[1]=c->r[1]+0x00000010u; // 803DC3B4
  return; // 803DC3B8
}

// BTM_PmRegister
void f_803DC3BC(Ctx* __restrict c) {
  trace_call(0x803DC3BCu);
  c->r[0]=rotl(c->r[3],0)&0x00000004u; cr0(c,c->r[0]); // 803DC3BC
  if (crb(c,2)) { goto L_803DC3F8; } // 803DC3C0
  c->r[0]=R8(c->r[4]+0x00000000u); // 803DC3C4
  cmpu(c,0,c->r[0],0x00000002u); // 803DC3C8
  if (crb(c,0)) { goto L_803DC3D8; } // 803DC3CC
  c->r[3]=0u+0x00000005u; // 803DC3D0
  return; // 803DC3D4
L_803DC3D8:;
  c->r[3]=0u+0x807B0000u; // 803DC3D8
  c->r[0]=rotl(c->r[0],3)&0x000007F8u; // 803DC3DC
  c->r[3]=c->r[3]+0x00006798u; // 803DC3E0
  c->r[5]=0u+0x00000000u; // 803DC3E4
  c->r[4]=c->r[3]+c->r[0]; // 803DC3E8
  W8(c->r[4]+0x00000558u,c->r[5]); // 803DC3EC
  c->r[3]=0u+0x00000000u; // 803DC3F0
  return; // 803DC3F4
L_803DC3F8:;
  c->r[6]=0u+0x807B0000u; // 803DC3F8
  c->r[0]=0u+0x00000002u; // 803DC3FC
  c->r[6]=c->r[6]+0x00006798u; // 803DC400
  c->r[7]=0u+0x00000000u; // 803DC404
  c->ctr=c->r[0]; // 803DC408
L_803DC40C:;
  c->r[0]=R8(c->r[6]+0x00000558u); // 803DC40C
  cmps(c,0,(int32_t)c->r[0],0); // 803DC410
  if (!crb(c,2)) { goto L_803DC464; } // 803DC414
  c->r[0]=rotl(c->r[3],0)&0x00000002u; cr0(c,c->r[0]); // 803DC418
  if (crb(c,2)) { goto L_803DC444; } // 803DC41C
  cmps(c,0,(int32_t)c->r[5],0); // 803DC420
  if (!crb(c,2)) { goto L_803DC430; } // 803DC424
  c->r[3]=0u+0x00000005u; // 803DC428
  return; // 803DC42C
L_803DC430:;
  c->r[6]=0u+0x807B0000u; // 803DC430
  c->r[0]=rotl(c->r[7],3)&0xFFFFFFF8u; // 803DC434
  c->r[6]=c->r[6]+0x00006798u; // 803DC438
  c->r[6]=c->r[6]+c->r[0]; // 803DC43C
  W32(c->r[6]+0x00000554u,c->r[5]); // 803DC440
L_803DC444:;
  c->r[5]=0u+0x807B0000u; // 803DC444
  c->r[0]=rotl(c->r[7],3)&0xFFFFFFF8u; // 803DC448
  c->r[5]=c->r[5]+0x00006798u; // 803DC44C
  c->r[5]=c->r[5]+c->r[0]; // 803DC450
  W8(c->r[5]+0x00000558u,c->r[3]); // 803DC454
  c->r[3]=0u+0x00000000u; // 803DC458
  W8(c->r[4]+0x00000000u,c->r[7]); // 803DC45C
  return; // 803DC460
L_803DC464:;
  c->r[6]=c->r[6]+0x00000008u; // 803DC464
  c->r[7]=c->r[7]+0x00000001u; // 803DC468
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_803DC40C; } // 803DC46C
  c->r[3]=0u+0x00000003u; // 803DC470
  return; // 803DC474
}

// BTM_SetPowerMode
void f_803DC478(Ctx* __restrict c) {
  trace_call(0x803DC478u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803DC478
  c->r[0]=c->lr; // 803DC47C
  W32(c->r[1]+0x00000024u,c->r[0]); // 803DC480
  c->r[11]=c->r[1]+0x00000020u; // 803DC484
  c->lr=0x803DC48Cu; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 803DC488
  cmpu(c,0,c->r[3],0x00000002u); // 803DC48C
  c->r[27]=c->r[3]|c->r[3]; // 803DC490
  c->r[26]=c->r[4]|c->r[4]; // 803DC494
  c->r[28]=c->r[5]|c->r[5]; // 803DC498
  if (crb(c,0)) { goto L_803DC4A4; } // 803DC49C
  c->r[27]=0u+0x00000080u; // 803DC4A0
L_803DC4A4:;
  cmps(c,0,(int32_t)c->r[5],0); // 803DC4A4
  if (!crb(c,2)) { goto L_803DC4B4; } // 803DC4A8
  c->r[3]=0u+0x00000005u; // 803DC4AC
  goto L_803DC630; // 803DC4B0
L_803DC4B4:;
  c->r[0]=R8(c->r[5]+0x00000008u); // 803DC4B4
  c->r[3]=0u+0x807B0000u; // 803DC4B8
  c->r[3]=c->r[3]+0x00006798u; // 803DC4BC
  c->r[29]=0u+0x00000000u; // 803DC4C0
  c->r[31]=rotl(c->r[0],0)&0xFFFFFFEFu; // 803DC4C4
  c->r[30]=c->r[3]+0x00000034u; // 803DC4C8
L_803DC4CC:;
  c->r[0]=R8(c->r[30]+0x00000119u); // 803DC4CC
  cmps(c,0,(int32_t)c->r[0],0); // 803DC4D0
  if (crb(c,2)) { goto L_803DC4F0; } // 803DC4D4
  c->r[4]=c->r[26]|c->r[26]; // 803DC4D8
  c->r[3]=c->r[30]+0x00000008u; // 803DC4DC
  c->r[5]=0u+0x00000006u; // 803DC4E0
  c->lr=0x803DC4E8u; f_803AF7B8(c); // 803DC4E4
  cmps(c,0,(int32_t)c->r[3],0); // 803DC4E8
  if (crb(c,2)) { goto L_803DC500; } // 803DC4EC
L_803DC4F0:;
  c->r[29]=c->r[29]+0x00000001u; // 803DC4F0
  c->r[30]=c->r[30]+0x0000011Cu; // 803DC4F4
  cmpu(c,0,c->r[29],0x00000004u); // 803DC4F8
  if (crb(c,0)) { IRQCHK(c); goto L_803DC4CC; } // 803DC4FC
L_803DC500:;
  c->r[30]=rotl(c->r[29],0)&0x000000FFu; // 803DC500
  cmps(c,0,(int32_t)c->r[30],4); // 803DC504
  if (!crb(c,2)) { goto L_803DC514; } // 803DC508
  c->r[3]=0u+0x00000007u; // 803DC50C
  goto L_803DC630; // 803DC510
L_803DC514:;
  c->r[0]=(uint32_t)((int32_t)c->r[30]*(int32_t)34); // 803DC514
  c->r[4]=0u+0x807B0000u; // 803DC518
  c->r[3]=rotl(c->r[31],0)&0x000000FFu; cr0(c,c->r[3]); // 803DC51C
  c->r[4]=c->r[4]+0x00006798u; // 803DC520
  c->r[4]=c->r[4]+c->r[0]; // 803DC524
  c->r[29]=c->r[4]+0x000004CCu; // 803DC528
  if (crb(c,2)) { goto L_803DC55C; } // 803DC52C
  c->r[26]=c->r[3]+0xFFFFFFFFu; // 803DC530
  c->lr=0x803DC538u; f_803D9F30(c); // 803DC534
  c->r[4]=c->r[2]+0x00000E98u; // 803DC538
  c->r[5]=c->r[2]+0x00000E9Cu; // 803DC53C
  c->r[0]=R8(c->r[4]+c->r[26]); // 803DC540
  c->r[4]=R8(c->r[5]+c->r[26]); // 803DC544
  c->r[0]=R8(c->r[3]+c->r[0]); // 803DC548
  c->r[0]=c->r[4]&c->r[0]; cr0(c,c->r[0]); // 803DC54C
  if (!crb(c,2)) { goto L_803DC55C; } // 803DC550
  c->r[3]=0u+0x00000004u; // 803DC554
  goto L_803DC630; // 803DC558
L_803DC55C:;
  c->r[0]=R8(c->r[29]+0x00000020u); // 803DC55C
  c->r[3]=rotl(c->r[31],0)&0x000000FFu; // 803DC560
  cmpu(c,0,c->r[3],c->r[0]); // 803DC564
  if (!crb(c,2)) { goto L_803DC598; } // 803DC568
  cmps(c,0,(int32_t)c->r[3],0); // 803DC56C
  if (crb(c,2)) { goto L_803DC590; } // 803DC570
  c->r[3]=R16(c->r[29]+0x0000001Eu); // 803DC574
  c->r[0]=R16(c->r[28]+0x00000000u); // 803DC578
  cmpu(c,0,c->r[0],c->r[3]); // 803DC57C
  if (crb(c,0)) { goto L_803DC598; } // 803DC580
  c->r[0]=R16(c->r[28]+0x00000002u); // 803DC584
  cmpu(c,0,c->r[0],c->r[3]); // 803DC588
  if (crb(c,1)) { goto L_803DC598; } // 803DC58C
L_803DC590:;
  c->r[3]=0u+0x00000000u; // 803DC590
  goto L_803DC630; // 803DC594
L_803DC598:;
  cmpu(c,0,c->r[27],0x00000080u); // 803DC598
  if (crb(c,2)) { goto L_803DC5F0; } // 803DC59C
  c->r[3]=0u+0x807B0000u; // 803DC5A0
  c->r[0]=rotl(c->r[27],3)&0x000007F8u; // 803DC5A4
  c->r[3]=c->r[3]+0x00006798u; // 803DC5A8
  c->r[3]=c->r[3]+c->r[0]; // 803DC5AC
  c->r[0]=R8(c->r[3]+0x00000558u); // 803DC5B0
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 803DC5B4
  if (crb(c,2)) { goto L_803DC5F0; } // 803DC5B8
  c->r[4]=R16(c->r[28]+0x00000000u); // 803DC5BC
  c->r[5]=(uint32_t)((int32_t)c->r[27]*(int32_t)10); // 803DC5C0
  c->r[3]=R16(c->r[28]+0x00000002u); // 803DC5C4
  c->r[0]=0u+0x00000001u; // 803DC5C8
  {uint32_t ea=c->r[5]+c->r[29]; W16(ea,c->r[4]); c->r[5]=ea;} // 803DC5CC
  W16(c->r[5]+0x00000002u,c->r[3]); // 803DC5D0
  c->r[4]=R16(c->r[28]+0x00000004u); // 803DC5D4
  c->r[3]=R16(c->r[28]+0x00000006u); // 803DC5D8
  W16(c->r[5]+0x00000004u,c->r[4]); // 803DC5DC
  W16(c->r[5]+0x00000006u,c->r[3]); // 803DC5E0
  c->r[3]=R16(c->r[28]+0x00000008u); // 803DC5E4
  W16(c->r[5]+0x00000008u,c->r[3]); // 803DC5E8
  W8(c->r[29]+0x00000021u,c->r[0]); // 803DC5EC
L_803DC5F0:;
  c->r[0]=R8(c->r[29]+0x00000020u); // 803DC5F0
  cmpu(c,0,c->r[0],0x00000001u); // 803DC5F4
  if (crb(c,2)) { goto L_803DC618; } // 803DC5F8
  cmpu(c,0,c->r[0],0x00000004u); // 803DC5FC
  if (crb(c,2)) { goto L_803DC618; } // 803DC600
  c->r[3]=0u+0x807B0000u; // 803DC604
  c->r[3]=c->r[3]+0x00006798u; // 803DC608
  c->r[0]=R8(c->r[3]+0x00000564u); // 803DC60C
  cmpu(c,0,c->r[0],0x00000004u); // 803DC610
  if (crb(c,2)) { goto L_803DC620; } // 803DC614
L_803DC618:;
  c->r[3]=0u+0x0000000Du; // 803DC618
  goto L_803DC630; // 803DC61C
L_803DC620:;
  c->r[3]=c->r[27]|c->r[27]; // 803DC620
  c->r[4]=c->r[30]|c->r[30]; // 803DC624
  c->r[5]=c->r[28]|c->r[28]; // 803DC628
  c->lr=0x803DC630u; f_803DCB44(c); // 803DC62C
L_803DC630:;
  c->r[11]=c->r[1]+0x00000020u; // 803DC630
  c->lr=0x803DC638u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 803DC634
  c->r[0]=R32(c->r[1]+0x00000024u); // 803DC638
  c->lr=c->r[0]; // 803DC63C
  c->r[1]=c->r[1]+0x00000020u; // 803DC640
  return; // 803DC644
}

