#include "funcs.h"
#pragma GCC diagnostic ignored "-Wunused-label"

// fn_8009BA1C
void f_8009BA1C(Ctx* __restrict c) {
  trace_call(0x8009BA1Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8009BA1C
  c->r[0]=c->lr; // 8009BA20
  W32(c->r[1]+0x00000014u,c->r[0]); // 8009BA24
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8009BA28
  c->r[31]=c->r[3]|c->r[3]; // 8009BA2C
  c->lr=0x8009BA34u; f_8009BA58(c); // 8009BA30
  c->r[0]=(uint32_t)((int32_t)c->r[3]*(int32_t)12); // 8009BA34
  c->r[3]=R32(c->r[31]+0x000000D4u); // 8009BA38
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8009BA3C
  c->r[3]=R32(c->r[3]+c->r[0]); // 8009BA40
  c->r[0]=R32(c->r[1]+0x00000014u); // 8009BA44
  c->r[3]=R32(c->r[3]+0x00000008u); // 8009BA48
  c->lr=c->r[0]; // 8009BA4C
  c->r[1]=c->r[1]+0x00000010u; // 8009BA50
  return; // 8009BA54
}

// fn_8009BA58
void f_8009BA58(Ctx* __restrict c) {
  trace_call(0x8009BA58u);
  c->r[0]=R8(c->r[13]+0xFFFFBB64u); // 8009BA58
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 8009BA5C
  if (!crb(c,2)) { goto L_8009BA7C; } // 8009BA60
  c->r[3]=R32(c->r[13]+0xFFFFBB58u); // 8009BA64
  c->r[0]=0u+0x00000001u; // 8009BA68
  W32(c->r[13]+0xFFFFBB60u,c->r[3]); // 8009BA6C
  c->r[3]=c->r[3]+0x00000001u; // 8009BA70
  W32(c->r[13]+0xFFFFBB58u,c->r[3]); // 8009BA74
  W8(c->r[13]+0xFFFFBB64u,c->r[0]); // 8009BA78
L_8009BA7C:;
  c->r[3]=R32(c->r[13]+0xFFFFBB60u); // 8009BA7C
  return; // 8009BA80
}

// fn_8009BA84
void f_8009BA84(Ctx* __restrict c) {
  trace_call(0x8009BA84u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8009BA84
  c->r[0]=c->lr; // 8009BA88
  W32(c->r[1]+0x00000024u,c->r[0]); // 8009BA8C
  c->r[11]=c->r[1]+0x00000020u; // 8009BA90
  c->lr=0x8009BA98u; { W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8009BA94
  {uint32_t ea=c->r[2]+0xFFFF98A4u; c->f[1]=c->ps1[1]=RF32(ea);} // 8009BA98
  c->r[28]=c->r[3]|c->r[3]; // 8009BA9C
  c->r[29]=c->r[4]|c->r[4]; // 8009BAA0
  c->r[30]=c->r[5]|c->r[5]; // 8009BAA4
  c->r[3]=c->r[3]+0x000000C0u; // 8009BAA8
  c->lr=0x8009BAB0u; f_80100480(c); // 8009BAAC
  c->r[5]=R32(c->r[29]+0x0000000Cu); // 8009BAB0
  c->r[0]=0u+0x00000080u; // 8009BAB4
  c->r[4]=R32(c->r[29]+0x00000010u); // 8009BAB8
  c->r[7]=0u+0x00000000u; // 8009BABC
  c->r[6]=R32(c->r[29]+0x00000008u); // 8009BAC0
  c->r[3]=0u+0x00000000u; // 8009BAC4
  c->r[5]=(uint32_t)((int32_t)c->r[5]*(int32_t)c->r[4]); // 8009BAC8
  c->r[4]=0u+0xFFFFFFFFu; // 8009BACC
  c->r[6]=c->r[29]+c->r[6]; // 8009BAD0
  c->r[31]=c->r[6]+c->r[5]; // 8009BAD4
  c->ctr=c->r[0]; // 8009BAD8
L_8009BADC:;
  c->r[5]=c->r[28]+c->r[3]; // 8009BADC
  W32(c->r[5]+0x00000608u,c->r[4]); // 8009BAE0
  W32(c->r[5]+0x0000060Cu,c->r[4]); // 8009BAE4
  c->r[0]=R32(c->r[29]+0x00000010u); // 8009BAE8
  cmps(c,0,(int32_t)c->r[7],(int32_t)c->r[0]); // 8009BAEC
  if (!crb(c,0)) { goto L_8009BB0C; } // 8009BAF0
  c->r[0]=R32(c->r[6]+0x00000000u); // 8009BAF4
  W32(c->r[5]+0x00000608u,c->r[0]); // 8009BAF8
  c->r[0]=R32(c->r[6]+0x00000004u); // 8009BAFC
  W32(c->r[5]+0x0000060Cu,c->r[0]); // 8009BB00
  c->r[0]=R32(c->r[29]+0x0000000Cu); // 8009BB04
  c->r[6]=c->r[6]+c->r[0]; // 8009BB08
L_8009BB0C:;
  c->r[7]=c->r[7]+0x00000001u; // 8009BB0C
  c->r[3]=c->r[3]+0x00000008u; // 8009BB10
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8009BADC; } // 8009BB14
  c->r[0]=R32(c->r[28]+0x000005FCu); // 8009BB18
  cmps(c,0,(int32_t)c->r[0],0); // 8009BB1C
  if (crb(c,2)) { goto L_8009BB88; } // 8009BB20
  {uint32_t ea=c->r[29]+0x00000014u; c->f[0]=c->ps1[0]=RF32(ea);} // 8009BB24
  {uint32_t ea=c->r[2]+0xFFFF98A0u; c->f[1]=c->ps1[1]=RF32(ea);} // 8009BB28
  fcmp(c,0,c->f[0],c->f[1]); // 8009BB2C
  if (crb(c,1)) { goto L_8009BB40; } // 8009BB30
  {uint32_t ea=c->r[29]+0x00000018u; c->f[0]=c->ps1[0]=RF32(ea);} // 8009BB34
  fcmp(c,0,c->f[0],c->f[1]); // 8009BB38
  if (!crb(c,1)) { goto L_8009BB88; } // 8009BB3C
L_8009BB40:;
  c->lr=0x8009BB44u; f_8033FE4C(c); // 8009BB40
  c->r[0]=R8(c->r[13]+0xFFFFC064u); // 8009BB44
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 8009BB48
  if (!crb(c,2)) { goto L_8009BB68; } // 8009BB4C
  c->r[4]=R32(c->r[13]+0xFFFFBB58u); // 8009BB50
  c->r[0]=0u+0x00000001u; // 8009BB54
  W32(c->r[13]+0xFFFFC060u,c->r[4]); // 8009BB58
  c->r[4]=c->r[4]+0x00000001u; // 8009BB5C
  W32(c->r[13]+0xFFFFBB58u,c->r[4]); // 8009BB60
  W8(c->r[13]+0xFFFFC064u,c->r[0]); // 8009BB64
L_8009BB68:;
  c->r[0]=R32(c->r[13]+0xFFFFC060u); // 8009BB68
  c->r[3]=R32(c->r[3]+0x000000D4u); // 8009BB6C
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)12); // 8009BB70
  {uint32_t ea=c->r[29]+0x00000014u; c->f[1]=c->ps1[1]=RF32(ea);} // 8009BB74
  {uint32_t ea=c->r[29]+0x00000018u; c->f[2]=c->ps1[2]=RF32(ea);} // 8009BB78
  c->r[3]=R32(c->r[3]+c->r[0]); // 8009BB7C
  c->r[3]=R32(c->r[3]+0x00000008u); // 8009BB80
  c->lr=0x8009BB88u; f_8011BA94(c); // 8009BB84
L_8009BB88:;
  {uint32_t ea=c->r[2]+0xFFFF98A4u; c->f[1]=c->ps1[1]=RF32(ea);} // 8009BB88
  c->r[3]=c->r[28]+0x000000C0u; // 8009BB8C
  c->lr=0x8009BB94u; f_8010039C(c); // 8009BB90
  c->lr=0x8009BB98u; f_8033FE4C(c); // 8009BB94
  c->lr=0x8009BB9Cu; f_8009BA1C(c); // 8009BB98
  c->r[3]=c->r[3]+0x00000078u; // 8009BB9C
  W32(c->r[28]+0x000005F8u,c->r[3]); // 8009BBA0
  {uint32_t ea=c->r[2]+0xFFFF98A0u; c->f[1]=c->ps1[1]=RF32(ea);} // 8009BBA4
  c->r[4]=c->r[31]|c->r[31]; // 8009BBA8
  c->r[5]=0u+0x00000000u; // 8009BBAC
  c->r[6]=0u+0x00000000u; // 8009BBB0
  c->lr=0x8009BBB8u; f_8033169C(c); // 8009BBB4
  c->r[3]=R32(c->r[28]+0x000005F8u); // 8009BBB8
  c->r[0]=R32(c->r[3]+0x000000D8u); // 8009BBBC
  c->r[0]=rotl(c->r[0],0)&0xBFFFFFFFu; // 8009BBC0
  W32(c->r[3]+0x000000D8u,c->r[0]); // 8009BBC4
  c->lr=0x8009BBCCu; f_8033FE4C(c); // 8009BBC8
  c->r[29]=c->r[3]|c->r[3]; // 8009BBCC
  c->lr=0x8009BBD4u; f_8009BA58(c); // 8009BBD0
  c->r[4]=c->r[3]|c->r[3]; // 8009BBD4
  c->r[3]=c->r[29]|c->r[29]; // 8009BBD8
  c->lr=0x8009BBE0u; f_8034121C(c); // 8009BBDC
  {uint32_t ea=c->r[2]+0xFFFF98A4u; c->f[1]=c->ps1[1]=RF32(ea);} // 8009BBE0
  c->r[3]=0u+0x00000001u; // 8009BBE4
  c->r[0]=0u+0xFFFFFFFFu; // 8009BBE8
  W32(c->r[28]+0x000005FCu,c->r[3]); // 8009BBEC
  c->f[2]=c->f[1]; // 8009BBF0
  c->r[3]=c->r[28]+0x000000A8u; // 8009BBF4
  c->f[3]=c->f[1]; // 8009BBF8
  W32(c->r[28]+0x00000600u,c->r[30]); // 8009BBFC
  c->r[4]=0u+0x00000000u; // 8009BC00
  W32(c->r[28]+0x00000604u,c->r[0]); // 8009BC04
  c->lr=0x8009BC0Cu; f_8032A238(c); // 8009BC08
  c->r[0]=0u+0x00000000u; // 8009BC0C
  W32(c->r[28]+0x00000B14u,c->r[0]); // 8009BC10
  c->r[11]=c->r[1]+0x00000020u; // 8009BC14
  c->lr=0x8009BC1Cu; { c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8009BC18
  c->r[0]=R32(c->r[1]+0x00000024u); // 8009BC1C
  c->lr=c->r[0]; // 8009BC20
  c->r[1]=c->r[1]+0x00000020u; // 8009BC24
  return; // 8009BC28
}

// fn_8009BC2C
void f_8009BC2C(Ctx* __restrict c) {
  trace_call(0x8009BC2Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8009BC2C
  c->r[0]=c->lr; // 8009BC30
  cmps(c,0,(int32_t)c->r[4],0); // 8009BC34
  W32(c->r[1]+0x00000024u,c->r[0]); // 8009BC38
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8009BC3C
  W32(c->r[1]+0x00000018u,c->r[30]); // 8009BC40
  c->r[30]=c->r[3]|c->r[3]; // 8009BC44
  if (!crb(c,2)) { goto L_8009BC58; } // 8009BC48
  c->r[0]=0u+0x00000000u; // 8009BC4C
  W32(c->r[3]+0x00000B14u,c->r[0]); // 8009BC50
  goto L_8009BC70; // 8009BC54
L_8009BC58:;
  c->r[0]=0u+0x00000001u; // 8009BC58
  c->r[6]=R32(c->r[3]+0x00000B14u); // 8009BC5C
  c->r[0]=((c->r[4])&0x20)?0u:(c->r[0]<<((c->r[4])&31)); // 8009BC60
  c->r[0]=c->r[6]&~c->r[0]; cr0(c,c->r[0]); // 8009BC64
  W32(c->r[3]+0x00000B14u,c->r[0]); // 8009BC68
  if (!crb(c,2)) { goto L_8009BD2C; } // 8009BC6C
L_8009BC70:;
  cmps(c,0,(int32_t)c->r[5],0); // 8009BC70
  {uint32_t ea=c->r[2]+0xFFFF98A0u; c->f[0]=c->ps1[0]=RF32(ea);} // 8009BC74
  if (crb(c,2)) { goto L_8009BC84; } // 8009BC78
  c->r[0]=R32(c->r[5]+0x00000008u); // 8009BC7C
  {uint32_t ea=c->r[5]+c->r[0]; c->f[0]=c->ps1[0]=RF32(ea);} // 8009BC80
L_8009BC84:;
  c->r[4]=R32(c->r[3]+0x000005F8u); // 8009BC84
  cmps(c,0,(int32_t)c->r[4],0); // 8009BC88
  if (crb(c,2)) { goto L_8009BD2C; } // 8009BC8C
  c->r[0]=R32(c->r[4]+0x000000D8u); // 8009BC90
  c->r[0]=rotl(c->r[0],2)&0x00000001u; cr0(c,c->r[0]); // 8009BC94
  if (crb(c,2)) { goto L_8009BD2C; } // 8009BC98
  {uint32_t ea=c->r[2]+0xFFFF98A0u; c->f[1]=c->ps1[1]=RF32(ea);} // 8009BC9C
  fcmp(c,0,c->f[0],c->f[1]); // 8009BCA0
  if (!crb(c,1)) { goto L_8009BCC8; } // 8009BCA4
  {uint32_t ea=c->r[2]+0xFFFF98A4u; c->f[2]=c->ps1[2]=RF32(ea);} // 8009BCA8
  c->r[4]=0u+0x00000000u; // 8009BCAC
  c->r[3]=c->r[3]+0x000000A8u; // 8009BCB0
  c->f[3]=c->ps1[3]=S(c->f[2]/c->f[0]); // 8009BCB4
  c->lr=0x8009BCBCu; f_8032A238(c); // 8009BCB8
  {uint32_t ea=c->r[30]+0x000000ACu; c->f[1]=c->ps1[1]=RF32(ea);} // 8009BCBC
  c->r[3]=R32(c->r[30]+0x000005F8u); // 8009BCC0
  c->lr=0x8009BCC8u; f_803317D4(c); // 8009BCC4
L_8009BCC8:;
  c->lr=0x8009BCCCu; f_8033FE4C(c); // 8009BCC8
  c->r[31]=c->r[3]|c->r[3]; // 8009BCCC
  c->lr=0x8009BCD4u; f_8009BA58(c); // 8009BCD0
  c->r[4]=c->r[3]|c->r[3]; // 8009BCD4
  c->r[3]=c->r[31]|c->r[31]; // 8009BCD8
  c->lr=0x8009BCE0u; f_8034121C(c); // 8009BCDC
  c->r[3]=R32(c->r[30]+0x000005F8u); // 8009BCE0
  c->r[0]=0u+0x43300000u; // 8009BCE4
  W32(c->r[1]+0x00000008u,c->r[0]); // 8009BCE8
  c->r[0]=R32(c->r[3]+0x000000D8u); // 8009BCEC
  {uint32_t ea=c->r[2]+0xFFFF98B0u; c->f[1]=RF64(ea);} // 8009BCF0
  c->r[0]=rotl(c->r[0],0)&0xBFFFFFFFu; // 8009BCF4
  W32(c->r[3]+0x000000D8u,c->r[0]); // 8009BCF8
  c->r[0]=R32(c->r[30]+0x00000604u); // 8009BCFC
  c->r[3]=R32(c->r[30]+0x000005F8u); // 8009BD00
  c->r[0]=c->r[0]^0x80000000u; // 8009BD04
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 8009BD08
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=RF64(ea);} // 8009BD0C
  c->f[1]=c->ps1[1]=S(c->f[0]-c->f[1]); // 8009BD10
  c->lr=0x8009BD18u; f_80331808(c); // 8009BD14
  c->r[0]=0u+0x00000001u; // 8009BD18
  W32(c->r[30]+0x000005FCu,c->r[0]); // 8009BD1C
  {uint32_t ea=c->r[2]+0xFFFF98C0u; c->f[1]=c->ps1[1]=RF32(ea);} // 8009BD20
  c->r[3]=c->r[30]+0x000000C0u; // 8009BD24
  c->lr=0x8009BD2Cu; f_80100480(c); // 8009BD28
L_8009BD2C:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 8009BD2C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8009BD30
  c->r[30]=R32(c->r[1]+0x00000018u); // 8009BD34
  c->lr=c->r[0]; // 8009BD38
  c->r[1]=c->r[1]+0x00000020u; // 8009BD3C
  return; // 8009BD40
}

// fn_8009BD44
void f_8009BD44(Ctx* __restrict c) {
  trace_call(0x8009BD44u);
  c->r[6]=R32(c->r[3]+0x000005F8u); // 8009BD44
  cmps(c,0,(int32_t)c->r[6],0); // 8009BD48
  if (crb(c,2)) return; // 8009BD4C
  c->r[0]=0u+0x00000001u; // 8009BD50
  c->r[5]=R32(c->r[3]+0x00000B14u); // 8009BD54
  c->r[0]=((c->r[4])&0x20)?0u:(c->r[0]<<((c->r[4])&31)); // 8009BD58
  {uint32_t ea=c->r[2]+0xFFFF98C0u; c->f[1]=c->ps1[1]=RF32(ea);} // 8009BD5C
  c->r[0]=c->r[5]|c->r[0]; // 8009BD60
  W32(c->r[3]+0x00000B14u,c->r[0]); // 8009BD64
  c->r[0]=0u+0x00000002u; // 8009BD68
  c->r[4]=R32(c->r[6]+0x000000D8u); // 8009BD6C
  c->r[4]=c->r[4]|0x40000000u; // 8009BD70
  W32(c->r[6]+0x000000D8u,c->r[4]); // 8009BD74
  W32(c->r[3]+0x000005FCu,c->r[0]); // 8009BD78
  c->r[3]=c->r[3]+0x000000C0u; // 8009BD7C
  f_80100428(c); return; // 8009BD80
  return; // 8009BD84
}

// fn_8009BD88
void f_8009BD88(Ctx* __restrict c) {
  trace_call(0x8009BD88u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8009BD88
  c->r[0]=c->lr; // 8009BD8C
  c->r[4]=0u+0x00000000u; // 8009BD90
  W32(c->r[1]+0x00000014u,c->r[0]); // 8009BD94
  c->r[0]=0u+0x00000003u; // 8009BD98
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 8009BD9C
  c->r[31]=0u+0x00000000u; // 8009BDA0
  c->r[30]=c->r[3]|c->r[3]; // 8009BDA4
  W32(c->r[3]+0x000005F8u,c->r[31]); // 8009BDA8
  W32(c->r[3]+0x000005FCu,c->r[0]); // 8009BDAC
  c->lr=0x8009BDB4u; f_8009BE08(c); // 8009BDB0
  c->r[0]=0u+0x00000080u; // 8009BDB4
  c->r[3]=0u+0xFFFFFFFFu; // 8009BDB8
  c->ctr=c->r[0]; // 8009BDBC
L_8009BDC0:;
  c->r[4]=c->r[30]+c->r[31]; // 8009BDC0
  c->r[31]=c->r[31]+0x00000008u; // 8009BDC4
  W32(c->r[4]+0x00000608u,c->r[3]); // 8009BDC8
  W32(c->r[4]+0x0000060Cu,c->r[3]); // 8009BDCC
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8009BDC0; } // 8009BDD0
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 8009BDD4
  c->r[0]=R32(c->r[1]+0x00000014u); // 8009BDD8
  c->lr=c->r[0]; // 8009BDDC
  c->r[1]=c->r[1]+0x00000010u; // 8009BDE0
  return; // 8009BDE4
}

// fn_8009BDE8
void f_8009BDE8(Ctx* __restrict c) {
  trace_call(0x8009BDE8u);
  cmps(c,0,(int32_t)c->r[4],0); // 8009BDE8
  if (crb(c,2)) { goto L_8009BDFC; } // 8009BDEC
  c->r[0]=R8(c->r[3]+0x00000AC4u); // 8009BDF0
  cmps(c,0,(int32_t)c->r[0],0); // 8009BDF4
  if (crb(c,2)) return; // 8009BDF8
L_8009BDFC:;
  c->r[3]=c->r[3]+0x000000C0u; // 8009BDFC
  f_8010039C(c); return; // 8009BE00
  return; // 8009BE04
}

// fn_8009BE08
void f_8009BE08(Ctx* __restrict c) {
  trace_call(0x8009BE08u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8009BE08
  c->r[0]=c->lr; // 8009BE0C
  cmps(c,0,(int32_t)c->r[4],0); // 8009BE10
  W32(c->r[1]+0x00000024u,c->r[0]); // 8009BE14
  {uint32_t ea=c->r[1]+0x00000018u; WF64(ea,c->f[31]);} // 8009BE18
  c->f[31]=c->f[1]; // 8009BE1C
  W32(c->r[1]+0x00000014u,c->r[31]); // 8009BE20
  c->r[31]=c->r[3]|c->r[3]; // 8009BE24
  if (crb(c,2)) { goto L_8009BE3C; } // 8009BE28
  c->r[3]=c->r[3]+0x000000C0u; // 8009BE2C
  c->lr=0x8009BE34u; f_80100898(c); // 8009BE30
  W8(c->r[31]+0x00000AC4u,c->r[3]); // 8009BE34
  goto L_8009BE50; // 8009BE38
L_8009BE3C:;
  c->r[0]=R8(c->r[3]+0x00000AC4u); // 8009BE3C
  cmps(c,0,(int32_t)c->r[0],0); // 8009BE40
  if (crb(c,2)) { goto L_8009BE50; } // 8009BE44
  c->r[0]=0u+0x00000000u; // 8009BE48
  W8(c->r[3]+0x00000AC4u,c->r[0]); // 8009BE4C
L_8009BE50:;
  c->f[1]=c->f[31]; // 8009BE50
  c->r[3]=c->r[31]+0x000000C0u; // 8009BE54
  c->lr=0x8009BE5Cu; f_801003E4(c); // 8009BE58
  c->r[0]=R32(c->r[1]+0x00000024u); // 8009BE5C
  {uint32_t ea=c->r[1]+0x00000018u; c->f[31]=RF64(ea);} // 8009BE60
  c->r[31]=R32(c->r[1]+0x00000014u); // 8009BE64
  c->lr=c->r[0]; // 8009BE68
  c->r[1]=c->r[1]+0x00000020u; // 8009BE6C
  return; // 8009BE70
}

// fn_8009BE74
void f_8009BE74(Ctx* __restrict c) {
  trace_call(0x8009BE74u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8009BE74
  c->r[0]=c->lr; // 8009BE78
  W32(c->r[1]+0x00000024u,c->r[0]); // 8009BE7C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8009BE80
  W32(c->r[1]+0x00000018u,c->r[30]); // 8009BE84
  c->r[0]=R32(c->r[4]+0x00000008u); // 8009BE88
  c->r[30]=c->r[4]+c->r[0]; // 8009BE8C
  c->r[0]=R32(c->r[4]+c->r[0]); // 8009BE90
  cmps(c,0,(int32_t)c->r[0],0); // 8009BE94
  if (!crb(c,2)) { goto L_8009BF04; } // 8009BE98
  {uint32_t ea=c->r[30]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 8009BE9C
  c->r[3]=c->r[1]+0x00000008u; // 8009BEA0
  {uint32_t ea=c->r[30]+0x00000008u; c->f[2]=c->ps1[2]=RF32(ea);} // 8009BEA4
  {uint32_t ea=c->r[30]+0x0000000Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 8009BEA8
  c->lr=0x8009BEB0u; f_8005FD70(c); // 8009BEAC
  c->r[31]=c->r[3]|c->r[3]; // 8009BEB0
  c->lr=0x8009BEB8u; f_8033FE4C(c); // 8009BEB4
  c->lr=0x8009BEBCu; f_8007FF20(c); // 8009BEB8
  c->r[4]=c->r[31]|c->r[31]; // 8009BEBC
  c->lr=0x8009BEC4u; f_80114728(c); // 8009BEC0
  c->lr=0x8009BEC8u; f_8033FE4C(c); // 8009BEC4
  c->lr=0x8009BECCu; f_8007FF20(c); // 8009BEC8
  {uint32_t ea=c->r[30]+0x00000014u; c->f[1]=c->ps1[1]=RF32(ea);} // 8009BECC
  {uint32_t ea=c->r[30]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 8009BED0
  c->f[1]=-c->f[1]; // 8009BED4
  c->f[2]=-c->f[0]; // 8009BED8
  c->lr=0x8009BEE0u; f_80114744(c); // 8009BEDC
  c->lr=0x8009BEE4u; f_8033FE4C(c); // 8009BEE0
  c->lr=0x8009BEE8u; f_8007FF20(c); // 8009BEE4
  {uint32_t ea=c->r[30]+0x00000018u; c->f[1]=c->ps1[1]=RF32(ea);} // 8009BEE8
  {uint32_t ea=c->r[30]+0x0000001Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 8009BEEC
  c->lr=0x8009BEF4u; f_80114750(c); // 8009BEF0
  c->lr=0x8009BEF8u; f_8033FE4C(c); // 8009BEF4
  c->lr=0x8009BEFCu; f_8007FF20(c); // 8009BEF8
  c->lr=0x8009BF00u; f_801146C8(c); // 8009BEFC
  goto L_8009BF1C; // 8009BF00
L_8009BF04:;
  cmpu(c,0,c->r[0],0x00000001u); // 8009BF04
  if (!crb(c,2)) { goto L_8009BF1C; } // 8009BF08
  c->lr=0x8009BF10u; f_8033FE4C(c); // 8009BF0C
  c->lr=0x8009BF14u; f_8007FF20(c); // 8009BF10
  {uint32_t ea=c->r[30]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 8009BF14
  c->lr=0x8009BF1Cu; f_801146E8(c); // 8009BF18
L_8009BF1C:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 8009BF1C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8009BF20
  c->r[30]=R32(c->r[1]+0x00000018u); // 8009BF24
  c->lr=c->r[0]; // 8009BF28
  c->r[1]=c->r[1]+0x00000020u; // 8009BF2C
  return; // 8009BF30
}

// fn_8009BF34
void f_8009BF34(Ctx* __restrict c) {
  trace_call(0x8009BF34u);
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8009BF34
  c->r[0]=c->lr; // 8009BF38
  W32(c->r[1]+0x00000064u,c->r[0]); // 8009BF3C
  c->r[11]=c->r[1]+0x00000060u; // 8009BF40
  c->lr=0x8009BF48u; { W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8009BF44
  c->r[31]=0u+0x80690000u; // 8009BF48
  c->r[28]=c->r[4]|c->r[4]; // 8009BF4C
  c->r[31]=c->r[31]+0xFFFFDD10u; // 8009BF50
  c->r[30]=c->r[3]|c->r[3]; // 8009BF54
  c->r[29]=c->r[5]|c->r[5]; // 8009BF58
  c->r[3]=c->r[28]|c->r[28]; // 8009BF5C
  c->r[4]=c->r[31]+0x00000018u; // 8009BF60
  c->lr=0x8009BF68u; f_803B393C(c); // 8009BF64
  cmps(c,0,(int32_t)c->r[3],0); // 8009BF68
  if (!crb(c,2)) { goto L_8009BF84; } // 8009BF6C
  c->r[3]=c->r[30]|c->r[30]; // 8009BF70
  c->r[4]=c->r[28]|c->r[28]; // 8009BF74
  c->r[5]=c->r[29]|c->r[29]; // 8009BF78
  c->lr=0x8009BF80u; f_8009C364(c); // 8009BF7C
  goto L_8009C238; // 8009BF80
L_8009BF84:;
  c->r[3]=c->r[28]|c->r[28]; // 8009BF84
  c->r[4]=c->r[31]+0x0000001Du; // 8009BF88
  c->lr=0x8009BF90u; f_803B393C(c); // 8009BF8C
  cmps(c,0,(int32_t)c->r[3],0); // 8009BF90
  if (!crb(c,2)) { goto L_8009BFAC; } // 8009BF94
  c->r[3]=c->r[30]|c->r[30]; // 8009BF98
  c->r[4]=c->r[28]|c->r[28]; // 8009BF9C
  c->r[5]=c->r[29]|c->r[29]; // 8009BFA0
  c->lr=0x8009BFA8u; f_8009C3E0(c); // 8009BFA4
  goto L_8009C238; // 8009BFA8
L_8009BFAC:;
  c->r[3]=c->r[28]|c->r[28]; // 8009BFAC
  c->r[4]=c->r[31]+0x00000022u; // 8009BFB0
  c->lr=0x8009BFB8u; f_803B393C(c); // 8009BFB4
  cmps(c,0,(int32_t)c->r[3],0); // 8009BFB8
  if (!crb(c,2)) { goto L_8009BFD4; } // 8009BFBC
  c->r[3]=c->r[30]|c->r[30]; // 8009BFC0
  c->r[4]=c->r[28]|c->r[28]; // 8009BFC4
  c->r[5]=c->r[29]|c->r[29]; // 8009BFC8
  c->lr=0x8009BFD0u; f_8009C530(c); // 8009BFCC
  goto L_8009C238; // 8009BFD0
L_8009BFD4:;
  c->r[0]=R32(c->r[28]+0x00000008u); // 8009BFD4
  c->r[3]=R32(c->r[28]+c->r[0]); // 8009BFD8
  c->r[31]=c->r[28]+c->r[0]; // 8009BFDC
  c->r[0]=rotl(c->r[3],0)&0x00000001u; cr0(c,c->r[0]); // 8009BFE0
  if (crb(c,2)) { goto L_8009C004; } // 8009BFE4
  c->lr=0x8009BFECu; f_8033FE4C(c); // 8009BFE8
  c->lr=0x8009BFF0u; f_8007FF5C(c); // 8009BFEC
  {uint32_t ea=c->r[31]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 8009BFF0
  c->lr=0x8009BFF8u; f_80367920(c); // 8009BFF4
  c->r[3]=c->r[30]+0x00000AC8u; // 8009BFF8
  c->lr=0x8009C000u; f_8009A610(c); // 8009BFFC
  goto L_8009C238; // 8009C000
L_8009C004:;
  c->r[0]=rotl(c->r[3],0)&0x00000008u; cr0(c,c->r[0]); // 8009C004
  if (crb(c,2)) { goto L_8009C028; } // 8009C008
  {uint32_t ea=c->r[31]+0x00000014u; c->f[2]=c->ps1[2]=RF32(ea);} // 8009C00C
  c->r[3]=c->r[30]+0x00000A0Cu; // 8009C010
  {uint32_t ea=c->r[2]+0xFFFF98B8u; c->f[0]=c->ps1[0]=RF32(ea);} // 8009C014
  {uint32_t ea=c->r[31]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 8009C018
  c->f[2]=c->ps1[2]=S(c->f[0]*c->f[2]); // 8009C01C
  c->lr=0x8009C024u; f_8009A2EC(c); // 8009C020
  goto L_8009C238; // 8009C024
L_8009C028:;
  c->r[0]=rotl(c->r[3],0)&0x00000002u; cr0(c,c->r[0]); // 8009C028
  if (crb(c,2)) { goto L_8009C0C0; } // 8009C02C
  c->r[0]=R32(c->r[28]+0x0000000Cu); // 8009C030
  c->r[3]=c->r[30]+0x00000AC8u; // 8009C034
  c->r[29]=c->r[0]+c->r[31]; // 8009C038
  c->lr=0x8009C040u; f_8009A610(c); // 8009C03C
  c->r[4]=c->r[29]|c->r[29]; // 8009C040
  c->r[3]=c->r[30]+0x00000AD4u; // 8009C044
  c->lr=0x8009C04Cu; f_803B37C0(c); // 8009C048
  c->r[3]=R32(c->r[30]+0x00000600u); // 8009C04C
  c->r[5]=0u+0x00000001u; // 8009C050
  c->r[4]=0u+0x00000002u; // 8009C054
  c->r[0]=0u+0xFFFFFFFFu; // 8009C058
  W8(c->r[30]+0x00000AC8u,c->r[5]); // 8009C05C
  {uint32_t ea=c->r[2]+0xFFFF98A4u; c->f[0]=c->ps1[0]=RF32(ea);} // 8009C060
  W32(c->r[30]+0x00000ACCu,c->r[4]); // 8009C064
  W32(c->r[30]+0x00000AD0u,c->r[3]); // 8009C068
  W32(c->r[30]+0x00000AF8u,c->r[0]); // 8009C06C
  {uint32_t ea=c->r[31]+0x0000001Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8009C070
  {uint32_t ea=c->r[30]+0x00000AFCu; WF32(ea,c->f[1]);} // 8009C074
  fcmp(c,0,c->f[1],c->f[0]); // 8009C078
  if (!crb(c,1)) { goto L_8009C084; } // 8009C07C
  {uint32_t ea=c->r[30]+0x00000AFCu; WF32(ea,c->f[0]);} // 8009C080
L_8009C084:;
  c->r[3]=c->r[30]+0x00000B00u; // 8009C084
  c->r[4]=c->r[31]+0x00000008u; // 8009C088
  c->lr=0x8009C090u; f_8005DC84(c); // 8009C08C
  {uint32_t ea=c->r[31]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 8009C090
  {uint32_t ea=c->r[30]+0x00000AF4u; WF32(ea,c->f[0]);} // 8009C094
  {uint32_t ea=c->r[31]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 8009C098
  {uint32_t ea=c->r[30]+0x00000B0Cu; WF32(ea,c->f[0]);} // 8009C09C
  c->r[0]=R32(c->r[28]+0x00000004u); // 8009C0A0
  cmps(c,0,(int32_t)c->r[0],1); // 8009C0A4
  if (crb(c,0)) { goto L_8009C0B4; } // 8009C0A8
  {uint32_t ea=c->r[31]+0x00000020u; c->f[0]=c->ps1[0]=RF32(ea);} // 8009C0AC
  {uint32_t ea=c->r[30]+0x00000B0Cu; WF32(ea,c->f[0]);} // 8009C0B0
L_8009C0B4:;
  c->r[3]=c->r[30]|c->r[30]; // 8009C0B4
  c->lr=0x8009C0BCu; f_8009AE20(c); // 8009C0B8
  goto L_8009C238; // 8009C0BC
L_8009C0C0:;
  c->r[0]=rotl(c->r[3],0)&0x00000004u; cr0(c,c->r[0]); // 8009C0C0
  if (crb(c,2)) { goto L_8009C110; } // 8009C0C4
  c->r[0]=R32(c->r[28]+0x0000000Cu); // 8009C0C8
  c->r[3]=c->r[30]+0x00000AC8u; // 8009C0CC
  c->r[29]=c->r[0]+c->r[31]; // 8009C0D0
  c->lr=0x8009C0D8u; f_8009A610(c); // 8009C0D4
  c->r[4]=c->r[29]|c->r[29]; // 8009C0D8
  c->r[3]=c->r[30]+0x00000AD4u; // 8009C0DC
  c->lr=0x8009C0E4u; f_803B37C0(c); // 8009C0E0
  c->r[0]=R32(c->r[30]+0x00000600u); // 8009C0E4
  c->r[3]=0u+0x00000001u; // 8009C0E8
  c->r[4]=0u+0x00000003u; // 8009C0EC
  W8(c->r[30]+0x00000AC8u,c->r[3]); // 8009C0F0
  c->r[3]=c->r[30]|c->r[30]; // 8009C0F4
  W32(c->r[30]+0x00000ACCu,c->r[4]); // 8009C0F8
  W32(c->r[30]+0x00000AD0u,c->r[0]); // 8009C0FC
  {uint32_t ea=c->r[31]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 8009C100
  {uint32_t ea=c->r[30]+0x00000AF4u; WF32(ea,c->f[0]);} // 8009C104
  c->lr=0x8009C10Cu; f_8009AE20(c); // 8009C108
  goto L_8009C238; // 8009C10C
L_8009C110:;
  c->r[0]=rotl(c->r[3],0)&0x00000010u; cr0(c,c->r[0]); // 8009C110
  if (crb(c,2)) { goto L_8009C158; } // 8009C114
  c->r[3]=c->r[30]+0x00000AC8u; // 8009C118
  c->lr=0x8009C120u; f_8009A610(c); // 8009C11C
  c->r[0]=R32(c->r[30]+0x00000600u); // 8009C120
  c->r[3]=0u+0x00000001u; // 8009C124
  c->r[5]=0u+0x00000004u; // 8009C128
  W8(c->r[30]+0x00000AC8u,c->r[3]); // 8009C12C
  c->r[3]=c->r[30]+0x00000B00u; // 8009C130
  c->r[4]=c->r[31]+0x00000008u; // 8009C134
  W32(c->r[30]+0x00000ACCu,c->r[5]); // 8009C138
  W32(c->r[30]+0x00000AD0u,c->r[0]); // 8009C13C
  c->lr=0x8009C144u; f_8005DC84(c); // 8009C140
  {uint32_t ea=c->r[31]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 8009C144
  c->r[3]=c->r[30]|c->r[30]; // 8009C148
  {uint32_t ea=c->r[30]+0x00000AF4u; WF32(ea,c->f[0]);} // 8009C14C
  c->lr=0x8009C154u; f_8009AE20(c); // 8009C150
  goto L_8009C238; // 8009C154
L_8009C158:;
  c->r[0]=rotl(c->r[3],0)&0x00000020u; cr0(c,c->r[0]); // 8009C158
  if (crb(c,2)) { goto L_8009C200; } // 8009C15C
  c->r[3]=c->r[30]+0x00000AC8u; // 8009C160
  c->lr=0x8009C168u; f_8009A610(c); // 8009C164
  c->lr=0x8009C16Cu; f_8033FE4C(c); // 8009C168
  c->r[0]=R32(c->r[30]+0x00000600u); // 8009C16C
  c->r[31]=c->r[3]+0x00000104u; // 8009C170
  c->r[4]=0u+0x00000001u; // 8009C174
  W8(c->r[30]+0x00000AC8u,c->r[4]); // 8009C178
  c->r[5]=c->r[31]|c->r[31]; // 8009C17C
  c->r[3]=c->r[1]+0x00000014u; // 8009C180
  W32(c->r[30]+0x00000ACCu,c->r[4]); // 8009C184
  c->r[4]=c->r[31]+0x0000000Cu; // 8009C188
  W32(c->r[30]+0x00000AD0u,c->r[0]); // 8009C18C
  c->lr=0x8009C194u; f_8005FC60(c); // 8009C190
  c->r[3]=c->r[1]+0x00000008u; // 8009C194
  c->r[4]=c->r[1]+0x00000014u; // 8009C198
  c->lr=0x8009C1A0u; f_8005DC84(c); // 8009C19C
  c->r[3]=c->r[1]+0x00000008u; // 8009C1A0
  c->r[5]=0u+0x806A0000u; // 8009C1A4
  c->r[4]=c->r[3]|c->r[3]; // 8009C1A8
  c->r[5]=c->r[5]+0x00000AA8u; // 8009C1AC
  c->lr=0x8009C1B4u; f_8030E0BC(c); // 8009C1B0
  c->r[3]=c->r[1]+0x00000020u; // 8009C1B4
  c->r[4]=c->r[1]+0x00000008u; // 8009C1B8
  c->lr=0x8009C1C0u; f_8005CD7C(c); // 8009C1BC
  {uint32_t ea=c->r[2]+0xFFFF98C4u; c->f[1]=c->ps1[1]=RF32(ea);} // 8009C1C0
  c->r[3]=c->r[1]+0x0000002Cu; // 8009C1C4
  c->r[4]=c->r[1]+0x00000020u; // 8009C1C8
  c->lr=0x8009C1D0u; f_8005ED34(c); // 8009C1CC
  c->r[4]=c->r[31]|c->r[31]; // 8009C1D0
  c->r[3]=c->r[1]+0x00000038u; // 8009C1D4
  c->r[5]=c->r[1]+0x0000002Cu; // 8009C1D8
  c->lr=0x8009C1E0u; f_80073ACC(c); // 8009C1DC
  c->r[3]=c->r[30]+0x00000B00u; // 8009C1E0
  c->r[4]=c->r[1]+0x00000038u; // 8009C1E4
  c->lr=0x8009C1ECu; f_8005DC84(c); // 8009C1E8
  {uint32_t ea=c->r[2]+0xFFFF98C8u; c->f[0]=c->ps1[0]=RF32(ea);} // 8009C1EC
  c->r[3]=c->r[30]|c->r[30]; // 8009C1F0
  {uint32_t ea=c->r[30]+0x00000AF4u; WF32(ea,c->f[0]);} // 8009C1F4
  c->lr=0x8009C1FCu; f_8009AE20(c); // 8009C1F8
  goto L_8009C238; // 8009C1FC
L_8009C200:;
  c->r[3]=c->r[30]+0x00000AC8u; // 8009C200
  c->lr=0x8009C208u; f_8009A610(c); // 8009C204
  c->r[0]=R32(c->r[30]+0x00000600u); // 8009C208
  c->r[5]=0u+0x00000001u; // 8009C20C
  W8(c->r[30]+0x00000AC8u,c->r[5]); // 8009C210
  c->r[3]=c->r[30]+0x00000B00u; // 8009C214
  c->r[4]=c->r[31]+0x00000008u; // 8009C218
  W32(c->r[30]+0x00000ACCu,c->r[5]); // 8009C21C
  W32(c->r[30]+0x00000AD0u,c->r[0]); // 8009C220
  c->lr=0x8009C228u; f_8005DC84(c); // 8009C224
  {uint32_t ea=c->r[31]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 8009C228
  c->r[3]=c->r[30]|c->r[30]; // 8009C22C
  {uint32_t ea=c->r[30]+0x00000AF4u; WF32(ea,c->f[0]);} // 8009C230
  c->lr=0x8009C238u; f_8009AE20(c); // 8009C234
L_8009C238:;
  c->r[11]=c->r[1]+0x00000060u; // 8009C238
  c->lr=0x8009C240u; { c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8009C23C
  c->r[0]=R32(c->r[1]+0x00000064u); // 8009C240
  c->lr=c->r[0]; // 8009C244
  c->r[1]=c->r[1]+0x00000060u; // 8009C248
  return; // 8009C24C
}

// fn_8009C250
void f_8009C250(Ctx* __restrict c) {
  trace_call(0x8009C250u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8009C250
  c->r[0]=c->lr; // 8009C254
  W32(c->r[1]+0x00000024u,c->r[0]); // 8009C258
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[31]);} // 8009C25C
  {uint32_t ea=c->r[1]+0x00000018u; psq_store(c,31,ea,0,0);} // 8009C260
  c->f[31]=c->f[1]; // 8009C264
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8009C268
  c->r[31]=c->r[3]|c->r[3]; // 8009C26C
  c->lr=0x8009C274u; f_8009B3AC(c); // 8009C270
  c->lr=0x8009C278u; f_8033FE4C(c); // 8009C274
  c->lr=0x8009C27Cu; f_8007FF20(c); // 8009C278
  c->r[12]=R32(c->r[3]+0x00000000u); // 8009C27C
  c->f[2]=c->f[31]; // 8009C280
  {uint32_t ea=c->r[2]+0xFFFF98A0u; c->f[1]=c->ps1[1]=RF32(ea);} // 8009C284
  c->r[12]=R32(c->r[12]+0x00000014u); // 8009C288
  c->ctr=c->r[12]; // 8009C28C
  if (true) { c->lr=0x8009C294u; dispatch(c,c->ctr); } // 8009C290
  c->r[0]=0u+0x00000001u; // 8009C294
  W8(c->r[31]+0x00000AC9u,c->r[0]); // 8009C298
  {uint32_t ea=c->r[1]+0x00000018u; psq_load(c,31,ea,0,0);} // 8009C29C
  {uint32_t ea=c->r[1]+0x00000010u; c->f[31]=RF64(ea);} // 8009C2A0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8009C2A4
  c->r[0]=R32(c->r[1]+0x00000024u); // 8009C2A8
  c->lr=c->r[0]; // 8009C2AC
  c->r[1]=c->r[1]+0x00000020u; // 8009C2B0
  return; // 8009C2B4
}

// fn_8009C2B8
void f_8009C2B8(Ctx* __restrict c) {
  trace_call(0x8009C2B8u);
  c->r[0]=R8(c->r[3]+0x00000AC9u); // 8009C2B8
  cmps(c,0,(int32_t)c->r[0],0); // 8009C2BC
  if (crb(c,2)) return; // 8009C2C0
  f_8009B3AC(c); return; // 8009C2C4
  return; // 8009C2C8
}

// fn_8009C2CC
void f_8009C2CC(Ctx* __restrict c) {
  trace_call(0x8009C2CCu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8009C2CC
  c->r[0]=c->lr; // 8009C2D0
  W32(c->r[1]+0x00000024u,c->r[0]); // 8009C2D4
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[31]);} // 8009C2D8
  {uint32_t ea=c->r[1]+0x00000018u; psq_store(c,31,ea,0,0);} // 8009C2DC
  c->f[31]=c->f[1]; // 8009C2E0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8009C2E4
  c->r[31]=c->r[3]|c->r[3]; // 8009C2E8
  c->r[0]=R8(c->r[3]+0x00000AC9u); // 8009C2EC
  cmps(c,0,(int32_t)c->r[0],0); // 8009C2F0
  if (crb(c,2)) { goto L_8009C348; } // 8009C2F4
  c->r[0]=R8(c->r[3]+0x00000AC8u); // 8009C2F8
  cmps(c,0,(int32_t)c->r[0],0); // 8009C2FC
  if (crb(c,2)) { goto L_8009C310; } // 8009C300
  c->r[0]=0u+0x00000001u; // 8009C304
  W8(c->r[3]+0x00000B11u,c->r[0]); // 8009C308
  goto L_8009C320; // 8009C30C
L_8009C310:;
  c->lr=0x8009C314u; f_8033FE4C(c); // 8009C310
  c->lr=0x8009C318u; f_8007FF5C(c); // 8009C314
  c->f[1]=c->f[31]; // 8009C318
  c->lr=0x8009C320u; f_80367920(c); // 8009C31C
L_8009C320:;
  c->lr=0x8009C324u; f_8033FE4C(c); // 8009C320
  c->lr=0x8009C328u; f_8007FF20(c); // 8009C324
  c->r[12]=R32(c->r[3]+0x00000000u); // 8009C328
  c->f[2]=c->f[31]; // 8009C32C
  {uint32_t ea=c->r[2]+0xFFFF98A4u; c->f[1]=c->ps1[1]=RF32(ea);} // 8009C330
  c->r[12]=R32(c->r[12]+0x00000014u); // 8009C334
  c->ctr=c->r[12]; // 8009C338
  if (true) { c->lr=0x8009C340u; dispatch(c,c->ctr); } // 8009C33C
  c->r[0]=0u+0x00000000u; // 8009C340
  W8(c->r[31]+0x00000AC9u,c->r[0]); // 8009C344
L_8009C348:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 8009C348
  {uint32_t ea=c->r[1]+0x00000018u; psq_load(c,31,ea,0,0);} // 8009C34C
  {uint32_t ea=c->r[1]+0x00000010u; c->f[31]=RF64(ea);} // 8009C350
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8009C354
  c->lr=c->r[0]; // 8009C358
  c->r[1]=c->r[1]+0x00000020u; // 8009C35C
  return; // 8009C360
}

// fn_8009C364
void f_8009C364(Ctx* __restrict c) {
  trace_call(0x8009C364u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8009C364
  c->r[0]=c->lr; // 8009C368
  W32(c->r[1]+0x00000024u,c->r[0]); // 8009C36C
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[31]);} // 8009C370
  {uint32_t ea=c->r[1]+0x00000018u; psq_store(c,31,ea,0,0);} // 8009C374
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8009C378
  c->r[0]=R32(c->r[4]+0x00000008u); // 8009C37C
  c->r[31]=c->r[4]+c->r[0]; // 8009C380
  c->r[0]=R32(c->r[4]+c->r[0]); // 8009C384
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 8009C388
  if (crb(c,2)) { goto L_8009C3A4; } // 8009C38C
  c->lr=0x8009C394u; f_8033FE4C(c); // 8009C390
  c->lr=0x8009C398u; f_8007FED8(c); // 8009C394
  {uint32_t ea=c->r[31]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 8009C398
  c->lr=0x8009C3A0u; f_80367B98(c); // 8009C39C
  goto L_8009C3C4; // 8009C3A0
L_8009C3A4:;
  {uint32_t ea=c->r[31]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 8009C3A4
  {uint32_t ea=c->r[2]+0xFFFF98B8u; c->f[0]=c->ps1[0]=RF32(ea);} // 8009C3A8
  c->f[31]=c->ps1[31]=S(c->f[0]*c->f[1]); // 8009C3AC
  c->lr=0x8009C3B4u; f_8033FE4C(c); // 8009C3B0
  c->lr=0x8009C3B8u; f_8007FED8(c); // 8009C3B4
  c->f[1]=-c->f[31]; // 8009C3B8
  {uint32_t ea=c->r[31]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 8009C3BC
  c->lr=0x8009C3C4u; f_80367AD0(c); // 8009C3C0
L_8009C3C4:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 8009C3C4
  {uint32_t ea=c->r[1]+0x00000018u; psq_load(c,31,ea,0,0);} // 8009C3C8
  {uint32_t ea=c->r[1]+0x00000010u; c->f[31]=RF64(ea);} // 8009C3CC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8009C3D0
  c->lr=c->r[0]; // 8009C3D4
  c->r[1]=c->r[1]+0x00000020u; // 8009C3D8
  return; // 8009C3DC
}

// fn_8009C3E0
void f_8009C3E0(Ctx* __restrict c) {
  trace_call(0x8009C3E0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8009C3E0
  c->r[0]=c->lr; // 8009C3E4
  W32(c->r[1]+0x00000024u,c->r[0]); // 8009C3E8
  c->r[11]=c->r[1]+0x00000020u; // 8009C3EC
  c->lr=0x8009C3F4u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8009C3F0
  c->r[0]=R32(c->r[4]+0x00000008u); // 8009C3F4
  c->r[27]=c->r[3]|c->r[3]; // 8009C3F8
  c->r[30]=c->r[4]+c->r[0]; // 8009C3FC
  c->r[31]=R32(c->r[30]+0x0000001Cu); // 8009C400
  c->r[0]=rotl(c->r[31],0)&0x00000001u; cr0(c,c->r[0]); // 8009C404
  if (crb(c,2)) { goto L_8009C41C; } // 8009C408
  {uint32_t ea=c->r[30]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 8009C40C
  c->r[3]=c->r[3]+0x000000C0u; // 8009C410
  c->lr=0x8009C418u; f_8010039C(c); // 8009C414
  goto L_8009C518; // 8009C418
L_8009C41C:;
  c->r[0]=rotl(c->r[31],0)&0x00000002u; cr0(c,c->r[0]); // 8009C41C
  if (crb(c,2)) { goto L_8009C434; } // 8009C420
  {uint32_t ea=c->r[30]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 8009C424
  c->r[3]=c->r[3]+0x000000C0u; // 8009C428
  c->lr=0x8009C430u; f_801003E4(c); // 8009C42C
  goto L_8009C518; // 8009C430
L_8009C434:;
  c->r[0]=rotl(c->r[31],0)&0x00000020u; cr0(c,c->r[0]); // 8009C434
  if (crb(c,2)) { goto L_8009C44C; } // 8009C438
  c->r[4]=R32(c->r[30]+0x00000024u); // 8009C43C
  c->r[3]=c->r[3]+0x000000C0u; // 8009C440
  c->lr=0x8009C448u; f_800FFCA0(c); // 8009C444
  goto L_8009C518; // 8009C448
L_8009C44C:;
  c->r[0]=R32(c->r[4]+0x00000004u); // 8009C44C
  c->r[28]=0u+0x00000000u; // 8009C450
  c->r[3]=R32(c->r[4]+0x0000000Cu); // 8009C454
  cmps(c,0,(int32_t)c->r[0],0); // 8009C458
  c->r[29]=c->r[30]+c->r[3]; // 8009C45C
  if (!crb(c,1)) { goto L_8009C480; } // 8009C460
  c->r[0]=R32(c->r[30]+0x00000020u); // 8009C464
  c->r[28]=c->r[0]+c->r[29]; // 8009C468
  c->r[3]=c->r[28]|c->r[28]; // 8009C46C
  c->lr=0x8009C474u; f_803A91D4(c); // 8009C470
  cmps(c,0,(int32_t)c->r[3],0); // 8009C474
  if (!crb(c,2)) { goto L_8009C480; } // 8009C478
  c->r[28]=0u+0x00000000u; // 8009C47C
L_8009C480:;
  c->r[0]=rotl(c->r[31],0)&0x00000004u; cr0(c,c->r[0]); // 8009C480
  if (crb(c,2)) { goto L_8009C4AC; } // 8009C484
  {uint32_t ea=c->r[30]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 8009C488
  c->r[4]=c->r[29]|c->r[29]; // 8009C48C
  {uint32_t ea=c->r[30]+0x00000008u; c->f[2]=c->ps1[2]=RF32(ea);} // 8009C490
  c->r[5]=c->r[28]|c->r[28]; // 8009C494
  {uint32_t ea=c->r[30]+0x0000000Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 8009C498
  c->r[3]=c->r[27]+0x000000C0u; // 8009C49C
  {uint32_t ea=c->r[30]+0x00000010u; c->f[4]=c->ps1[4]=RF32(ea);} // 8009C4A0
  c->lr=0x8009C4A8u; f_801001E4(c); // 8009C4A4
  goto L_8009C518; // 8009C4A8
L_8009C4AC:;
  c->r[0]=rotl(c->r[31],0)&0x00000008u; cr0(c,c->r[0]); // 8009C4AC
  if (crb(c,2)) { goto L_8009C4DC; } // 8009C4B0
  c->lr=0x8009C4B8u; f_8033FE4C(c); // 8009C4B4
  c->lr=0x8009C4BCu; f_8009A9F8(c); // 8009C4B8
  {uint32_t ea=c->r[2]+0xFFFF98A0u; c->f[1]=c->ps1[1]=RF32(ea);} // 8009C4BC
  {uint32_t ea=c->r[2]+0xFFFF98A4u; c->f[2]=c->ps1[2]=RF32(ea);} // 8009C4C0
  c->lr=0x8009C4C8u; f_800A77CC(c); // 8009C4C4
  c->lr=0x8009C4CCu; f_8033FE4C(c); // 8009C4C8
  c->lr=0x8009C4D0u; f_8009A9F8(c); // 8009C4CC
  c->r[4]=0u+0x00000001u; // 8009C4D0
  c->lr=0x8009C4D8u; f_800A73BC(c); // 8009C4D4
  goto L_8009C518; // 8009C4D8
L_8009C4DC:;
  c->r[0]=rotl(c->r[31],0)&0x00000010u; cr0(c,c->r[0]); // 8009C4DC
  if (crb(c,2)) { goto L_8009C4F8; } // 8009C4E0
  c->lr=0x8009C4E8u; f_8033FE4C(c); // 8009C4E4
  c->lr=0x8009C4ECu; f_8009A9F8(c); // 8009C4E8
  c->r[4]=0u+0x00000000u; // 8009C4EC
  c->lr=0x8009C4F4u; f_800A73BC(c); // 8009C4F0
  goto L_8009C518; // 8009C4F4
L_8009C4F8:;
  {uint32_t ea=c->r[30]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 8009C4F8
  c->r[4]=c->r[29]|c->r[29]; // 8009C4FC
  {uint32_t ea=c->r[30]+0x00000008u; c->f[2]=c->ps1[2]=RF32(ea);} // 8009C500
  c->r[5]=c->r[28]|c->r[28]; // 8009C504
  {uint32_t ea=c->r[30]+0x0000000Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 8009C508
  c->r[3]=c->r[27]+0x000000C0u; // 8009C50C
  {uint32_t ea=c->r[30]+0x00000010u; c->f[4]=c->ps1[4]=RF32(ea);} // 8009C510
  c->lr=0x8009C518u; f_80100020(c); // 8009C514
L_8009C518:;
  c->r[11]=c->r[1]+0x00000020u; // 8009C518
  c->lr=0x8009C520u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8009C51C
  c->r[0]=R32(c->r[1]+0x00000024u); // 8009C520
  c->lr=c->r[0]; // 8009C524
  c->r[1]=c->r[1]+0x00000020u; // 8009C528
  return; // 8009C52C
}

// fn_8009C530
void f_8009C530(Ctx* __restrict c) {
  trace_call(0x8009C530u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8009C530
  c->r[0]=c->lr; // 8009C534
  W32(c->r[1]+0x00000024u,c->r[0]); // 8009C538
  c->r[11]=c->r[1]+0x00000020u; // 8009C53C
  c->lr=0x8009C544u; { W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8009C540
  c->r[0]=R32(c->r[4]+0x00000008u); // 8009C544
  c->r[29]=c->r[3]|c->r[3]; // 8009C548
  c->r[30]=c->r[5]|c->r[5]; // 8009C54C
  c->r[31]=c->r[4]+c->r[0]; // 8009C550
  c->r[0]=R32(c->r[4]+c->r[0]); // 8009C554
  cmps(c,0,(int32_t)c->r[0],0); // 8009C558
  if (!crb(c,2)) { goto L_8009C584; } // 8009C55C
  c->r[0]=R32(c->r[4]+0x0000000Cu); // 8009C560
  c->r[3]=c->r[3]+0x000000C0u; // 8009C564
  c->r[4]=c->r[31]+c->r[0]; // 8009C568
  c->lr=0x8009C570u; f_801008B0(c); // 8009C56C
  {uint32_t ea=c->r[31]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 8009C570
  c->r[4]=c->r[3]|c->r[3]; // 8009C574
  c->r[3]=c->r[29]|c->r[29]; // 8009C578
  c->lr=0x8009C580u; f_8009C6D0(c); // 8009C57C
  goto L_8009C5F0; // 8009C580
L_8009C584:;
  cmpu(c,0,c->r[0],0x00000001u); // 8009C584
  if (!crb(c,2)) { goto L_8009C598; } // 8009C588
  {uint32_t ea=c->r[31]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 8009C58C
  c->lr=0x8009C594u; f_8009C7A8(c); // 8009C590
  goto L_8009C5F0; // 8009C594
L_8009C598:;
  cmpu(c,0,c->r[0],0x00000002u); // 8009C598
  if (!crb(c,2)) { goto L_8009C5F0; } // 8009C59C
  c->r[0]=R32(c->r[4]+0x0000000Cu); // 8009C5A0
  {uint32_t ea=c->r[31]+c->r[0]; c->r[0]=R8(ea); c->r[31]=ea;} // 8009C5A4
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 8009C5A8
  if (crb(c,2)) { goto L_8009C5F0; } // 8009C5AC
  c->r[0]=0u+0x00000000u; // 8009C5B0
  W8(c->r[1]+0x00000008u,c->r[0]); // 8009C5B4
  c->r[3]=c->r[1]+0x00000008u; // 8009C5B8
  c->lr=0x8009C5C0u; f_8004DBC0(c); // 8009C5BC
  c->r[4]=c->r[30]|c->r[30]; // 8009C5C0
  c->lr=0x8009C5C8u; f_800992D4(c); // 8009C5C4
  c->r[4]=c->r[31]|c->r[31]; // 8009C5C8
  c->r[5]=0u+0x00000000u; // 8009C5CC
  c->lr=0x8009C5D4u; f_802D25B8(c); // 8009C5D0
  c->r[31]=c->r[3]|c->r[3]; // 8009C5D4
  c->lr=0x8009C5DCu; f_8033FE4C(c); // 8009C5D8
  {uint32_t ea=c->r[2]+0xFFFF98A4u; c->f[1]=c->ps1[1]=RF32(ea);} // 8009C5DC
  c->r[4]=c->r[31]|c->r[31]; // 8009C5E0
  c->r[3]=R32(c->r[3]+0x0000021Cu); // 8009C5E4
  c->f[2]=c->f[1]; // 8009C5E8
  c->lr=0x8009C5F0u; f_80332194(c); // 8009C5EC
L_8009C5F0:;
  c->r[11]=c->r[1]+0x00000020u; // 8009C5F0
  c->lr=0x8009C5F8u; { c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8009C5F4
  c->r[0]=R32(c->r[1]+0x00000024u); // 8009C5F8
  c->lr=c->r[0]; // 8009C5FC
  c->r[1]=c->r[1]+0x00000020u; // 8009C600
  return; // 8009C604
}

// fn_8009C608
void f_8009C608(Ctx* __restrict c) {
  trace_call(0x8009C608u);
  {uint32_t ea=c->r[1]+0xFFFFFF80u; W32(ea,c->r[1]); c->r[1]=ea;} // 8009C608
  c->r[0]=c->lr; // 8009C60C
  W32(c->r[1]+0x00000084u,c->r[0]); // 8009C610
  {uint32_t ea=c->r[1]+0x00000078u; WF64(ea,c->f[31]);} // 8009C614
  {uint32_t ea=c->r[1]+0x00000064u; for(int i=27;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 8009C618
  c->r[27]=c->r[3]|c->r[3]; // 8009C61C
  c->r[3]=c->r[3]+0x00000B18u; // 8009C620
  c->lr=0x8009C628u; f_80331F3C(c); // 8009C624
  c->r[3]=c->r[1]+0x00000030u; // 8009C628
  c->lr=0x8009C630u; f_8032EDFC(c); // 8009C62C
  c->r[30]=0u+0x00000000u; // 8009C630
  c->r[31]=0u+0x00000000u; // 8009C634
L_8009C638:;
  c->r[3]=c->r[27]+c->r[31]; // 8009C638
  c->r[29]=c->r[3]+0x00001A98u; // 8009C63C
  c->r[3]=c->r[29]|c->r[29]; // 8009C640
  c->lr=0x8009C648u; f_8009C8EC(c); // 8009C644
  c->r[0]=R32(c->r[29]+0x00000000u); // 8009C648
  cmps(c,0,(int32_t)c->r[0],0); // 8009C64C
  if (crb(c,2)) { goto L_8009C69C; } // 8009C650
  c->r[3]=c->r[27]+0x00000B18u; // 8009C654
  c->r[4]=c->r[29]+0x0000000Cu; // 8009C658
  c->lr=0x8009C660u; f_803322C4(c); // 8009C65C
  c->r[28]=c->r[3]|c->r[3]; // 8009C660
  c->r[3]=c->r[1]+0x00000008u; // 8009C664
  c->lr=0x8009C66Cu; f_8032EDFC(c); // 8009C668
  c->r[3]=c->r[29]|c->r[29]; // 8009C66C
  c->lr=0x8009C674u; f_8009CA3C(c); // 8009C670
  c->f[31]=c->f[1]; // 8009C674
  c->r[3]=c->r[28]|c->r[28]; // 8009C678
  c->lr=0x8009C680u; f_80331640(c); // 8009C67C
  c->f[1]=c->f[31]; // 8009C680
  c->r[4]=c->r[3]|c->r[3]; // 8009C684
  c->r[3]=c->r[1]+0x00000008u; // 8009C688
  c->lr=0x8009C690u; f_8033028C(c); // 8009C68C
  c->r[3]=c->r[1]+0x00000030u; // 8009C690
  c->r[4]=c->r[1]+0x00000008u; // 8009C694
  c->lr=0x8009C69Cu; f_8032F82C(c); // 8009C698
L_8009C69C:;
  c->r[30]=c->r[30]+0x00000001u; // 8009C69C
  c->r[31]=c->r[31]+0x00000010u; // 8009C6A0
  cmps(c,0,(int32_t)c->r[30],2); // 8009C6A4
  if (crb(c,0)) { IRQCHK(c); goto L_8009C638; } // 8009C6A8
  c->lr=0x8009C6B0u; f_8033FE4C(c); // 8009C6AC
  c->r[4]=c->r[1]+0x00000030u; // 8009C6B0
  c->lr=0x8009C6B8u; f_803412C8(c); // 8009C6B4
  {uint32_t ea=c->r[1]+0x00000078u; c->f[31]=RF64(ea);} // 8009C6B8
  {uint32_t ea=c->r[1]+0x00000064u; for(int i=27;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 8009C6BC
  c->r[0]=R32(c->r[1]+0x00000084u); // 8009C6C0
  c->lr=c->r[0]; // 8009C6C4
  c->r[1]=c->r[1]+0x00000080u; // 8009C6C8
  return; // 8009C6CC
}

// fn_8009C6D0
void f_8009C6D0(Ctx* __restrict c) {
  trace_call(0x8009C6D0u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8009C6D0
  c->r[0]=c->lr; // 8009C6D4
  W32(c->r[1]+0x00000034u,c->r[0]); // 8009C6D8
  c->r[11]=c->r[1]+0x00000020u; // 8009C6DC
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[31]);} // 8009C6E0
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,31,ea,0,0);} // 8009C6E4
  c->lr=0x8009C6ECu; { W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8009C6E8
  c->f[31]=c->f[1]; // 8009C6EC
  c->r[28]=c->r[3]|c->r[3]; // 8009C6F0
  c->r[29]=c->r[4]|c->r[4]; // 8009C6F4
  c->lr=0x8009C6FCu; f_8009C80C(c); // 8009C6F8
  cmps(c,0,(int32_t)c->r[29],0); // 8009C6FC
  c->r[30]=c->r[3]|c->r[3]; // 8009C700
  if (crb(c,2)) { goto L_8009C788; } // 8009C704
  c->r[5]=c->r[29]|c->r[29]; // 8009C708
  c->r[3]=c->r[28]+0x00000B18u; // 8009C70C
  c->r[4]=0u+0x00000006u; // 8009C710
  c->r[6]=0u+0x00000000u; // 8009C714
  c->lr=0x8009C71Cu; f_8033202C(c); // 8009C718
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 8009C71C
  c->r[3]=c->r[28]+0x00000B18u; // 8009C720
  c->r[4]=c->r[1]+0x0000000Cu; // 8009C724
  c->lr=0x8009C72Cu; f_803322C4(c); // 8009C728
  {uint32_t ea=c->r[2]+0xFFFF98A0u; c->f[1]=c->ps1[1]=RF32(ea);} // 8009C72C
  c->r[4]=c->r[29]|c->r[29]; // 8009C730
  c->r[5]=0u+0x00000000u; // 8009C734
  c->r[6]=0u+0x00000001u; // 8009C738
  c->lr=0x8009C740u; f_8033169C(c); // 8009C73C
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 8009C740
  c->f[1]=c->f[31]; // 8009C744
  W32(c->r[1]+0x00000008u,c->r[0]); // 8009C748
  c->r[3]=c->r[30]|c->r[30]; // 8009C74C
  c->r[4]=c->r[1]+0x00000008u; // 8009C750
  c->lr=0x8009C758u; f_8009C9B4(c); // 8009C754
  c->r[29]=0u+0x00000000u; // 8009C758
  c->r[31]=0u+0x00000000u; // 8009C75C
L_8009C760:;
  c->r[3]=c->r[28]+c->r[31]; // 8009C760
  c->r[3]=c->r[3]+0x00001A98u; // 8009C764
  cmpu(c,0,c->r[30],c->r[3]); // 8009C768
  if (crb(c,2)) { goto L_8009C778; } // 8009C76C
  c->f[1]=c->f[31]; // 8009C770
  c->lr=0x8009C778u; f_8009C9D4(c); // 8009C774
L_8009C778:;
  c->r[29]=c->r[29]+0x00000001u; // 8009C778
  c->r[31]=c->r[31]+0x00000010u; // 8009C77C
  cmps(c,0,(int32_t)c->r[29],2); // 8009C780
  if (crb(c,0)) { IRQCHK(c); goto L_8009C760; } // 8009C784
L_8009C788:;
  c->r[11]=c->r[1]+0x00000020u; // 8009C788
  {uint32_t ea=c->r[1]+0x00000028u; psq_load(c,31,ea,0,0);} // 8009C78C
  {uint32_t ea=c->r[1]+0x00000020u; c->f[31]=RF64(ea);} // 8009C790
  c->lr=0x8009C798u; { c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8009C794
  c->r[0]=R32(c->r[1]+0x00000034u); // 8009C798
  c->lr=c->r[0]; // 8009C79C
  c->r[1]=c->r[1]+0x00000030u; // 8009C7A0
  return; // 8009C7A4
}

// fn_8009C7A8
void f_8009C7A8(Ctx* __restrict c) {
  trace_call(0x8009C7A8u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8009C7A8
  c->r[0]=c->lr; // 8009C7AC
  W32(c->r[1]+0x00000024u,c->r[0]); // 8009C7B0
  {uint32_t ea=c->r[1]+0x00000018u; WF64(ea,c->f[31]);} // 8009C7B4
  c->f[31]=c->f[1]; // 8009C7B8
  {uint32_t ea=c->r[1]+0x0000000Cu; for(int i=29;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 8009C7BC
  c->r[29]=c->r[3]|c->r[3]; // 8009C7C0
  c->r[30]=0u+0x00000000u; // 8009C7C4
  c->r[31]=0u+0x00000000u; // 8009C7C8
L_8009C7CC:;
  c->r[3]=c->r[29]+c->r[31]; // 8009C7CC
  {uint32_t ea=c->r[3]+0x00001A98u; c->r[0]=R32(ea); c->r[3]=ea;} // 8009C7D0
  cmps(c,0,(int32_t)c->r[0],0); // 8009C7D4
  if (crb(c,2)) { goto L_8009C7E4; } // 8009C7D8
  c->f[1]=c->f[31]; // 8009C7DC
  c->lr=0x8009C7E4u; f_8009C9D4(c); // 8009C7E0
L_8009C7E4:;
  c->r[30]=c->r[30]+0x00000001u; // 8009C7E4
  c->r[31]=c->r[31]+0x00000010u; // 8009C7E8
  cmps(c,0,(int32_t)c->r[30],2); // 8009C7EC
  if (crb(c,0)) { IRQCHK(c); goto L_8009C7CC; } // 8009C7F0
  {uint32_t ea=c->r[1]+0x00000018u; c->f[31]=RF64(ea);} // 8009C7F4
  {uint32_t ea=c->r[1]+0x0000000Cu; for(int i=29;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 8009C7F8
  c->r[0]=R32(c->r[1]+0x00000024u); // 8009C7FC
  c->lr=c->r[0]; // 8009C800
  c->r[1]=c->r[1]+0x00000020u; // 8009C804
  return; // 8009C808
}

// fn_8009C80C
void f_8009C80C(Ctx* __restrict c) {
  trace_call(0x8009C80Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8009C80C
  c->r[0]=c->lr; // 8009C810
  W32(c->r[1]+0x00000034u,c->r[0]); // 8009C814
  {uint32_t ea=c->r[1]+0x00000028u; WF64(ea,c->f[31]);} // 8009C818
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=27;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 8009C81C
  c->r[27]=c->r[3]|c->r[3]; // 8009C820
  c->r[30]=0u+0x00000000u; // 8009C824
  c->r[29]=0u+0x00000000u; // 8009C828
  c->r[31]=0u+0x00000000u; // 8009C82C
L_8009C830:;
  cmps(c,0,(int32_t)c->r[30],0); // 8009C830
  c->r[3]=c->r[27]+c->r[31]; // 8009C834
  c->r[28]=c->r[3]+0x00001A98u; // 8009C838
  if (crb(c,2)) { goto L_8009C868; } // 8009C83C
  c->r[0]=R32(c->r[28]+0x00000000u); // 8009C840
  cmps(c,0,(int32_t)c->r[0],0); // 8009C844
  if (crb(c,2)) { goto L_8009C868; } // 8009C848
  c->r[3]=c->r[30]|c->r[30]; // 8009C84C
  c->lr=0x8009C854u; f_8009CA3C(c); // 8009C850
  c->f[31]=c->f[1]; // 8009C854
  c->r[3]=c->r[28]|c->r[28]; // 8009C858
  c->lr=0x8009C860u; f_8009CA3C(c); // 8009C85C
  fcmp(c,0,c->f[1],c->f[31]); // 8009C860
  if (!crb(c,0)) { goto L_8009C86C; } // 8009C864
L_8009C868:;
  c->r[30]=c->r[28]|c->r[28]; // 8009C868
L_8009C86C:;
  c->r[0]=R32(c->r[30]+0x00000000u); // 8009C86C
  cmps(c,0,(int32_t)c->r[0],0); // 8009C870
  if (crb(c,2)) { goto L_8009C888; } // 8009C874
  c->r[29]=c->r[29]+0x00000001u; // 8009C878
  c->r[31]=c->r[31]+0x00000010u; // 8009C87C
  cmps(c,0,(int32_t)c->r[29],2); // 8009C880
  if (crb(c,0)) { IRQCHK(c); goto L_8009C830; } // 8009C884
L_8009C888:;
  c->r[0]=R32(c->r[30]+0x0000000Cu); // 8009C888
  cmps(c,0,(int32_t)c->r[0],0); // 8009C88C
  if (crb(c,2)) { goto L_8009C8A0; } // 8009C890
  c->r[3]=c->r[27]+0x00000B18u; // 8009C894
  c->r[4]=c->r[30]+0x0000000Cu; // 8009C898
  c->lr=0x8009C8A0u; f_803320C0(c); // 8009C89C
L_8009C8A0:;
  c->r[3]=c->r[30]|c->r[30]; // 8009C8A0
  c->lr=0x8009C8A8u; f_8009C8C4(c); // 8009C8A4
  c->r[3]=c->r[30]|c->r[30]; // 8009C8A8
  {uint32_t ea=c->r[1]+0x00000028u; c->f[31]=RF64(ea);} // 8009C8AC
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=27;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 8009C8B0
  c->r[0]=R32(c->r[1]+0x00000034u); // 8009C8B4
  c->lr=c->r[0]; // 8009C8B8
  c->r[1]=c->r[1]+0x00000030u; // 8009C8BC
  return; // 8009C8C0
}

// fn_8009C8C4
void f_8009C8C4(Ctx* __restrict c) {
  trace_call(0x8009C8C4u);
  {uint32_t ea=c->r[2]+0xFFFF98A0u; c->f[1]=c->ps1[1]=RF32(ea);} // 8009C8C4
  c->r[0]=0u+0x00000000u; // 8009C8C8
  {uint32_t ea=c->r[2]+0xFFFF98A4u; c->f[0]=c->ps1[0]=RF32(ea);} // 8009C8CC
  c->r[4]=0u+0x00000000u; // 8009C8D0
  W32(c->r[3]+0x00000000u,c->r[0]); // 8009C8D4
  c->r[5]=0u+0x00000004u; // 8009C8D8
  {uint32_t ea=c->r[3]+0x00000004u; WF32(ea,c->f[1]);} // 8009C8DC
  {uint32_t ea=c->r[3]+0x00000008u; WF32(ea,c->f[0]);} // 8009C8E0
  c->r[3]=c->r[3]+0x0000000Cu; // 8009C8E4
  f_800043EC(c); return; // 8009C8E8
}

// fn_8009C8EC
void f_8009C8EC(Ctx* __restrict c) {
  trace_call(0x8009C8ECu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8009C8EC
  c->r[0]=c->lr; // 8009C8F0
  W32(c->r[1]+0x00000024u,c->r[0]); // 8009C8F4
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8009C8F8
  W32(c->r[1]+0x00000018u,c->r[30]); // 8009C8FC
  c->r[30]=c->r[3]|c->r[3]; // 8009C900
  c->r[0]=R32(c->r[3]+0x00000000u); // 8009C904
  cmps(c,0,(int32_t)c->r[0],1); // 8009C908
  if (crb(c,2)) { goto L_8009C91C; } // 8009C90C
  cmps(c,0,(int32_t)c->r[0],3); // 8009C910
  if (crb(c,2)) { goto L_8009C960; } // 8009C914
  goto L_8009C99C; // 8009C918
L_8009C91C:;
  c->r[0]=0u+0x00000000u; // 8009C91C
  W8(c->r[1]+0x0000000Cu,c->r[0]); // 8009C920
  c->r[3]=c->r[1]+0x0000000Cu; // 8009C924
  c->lr=0x8009C92Cu; f_8004714C(c); // 8009C928
  {uint32_t ea=c->r[3]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 8009C92C
  c->r[3]=c->r[30]|c->r[30]; // 8009C930
  {uint32_t ea=c->r[30]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 8009C934
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[1]); // 8009C938
  {uint32_t ea=c->r[30]+0x00000004u; WF32(ea,c->f[0]);} // 8009C93C
  c->lr=0x8009C944u; f_8009CA3C(c); // 8009C940
  {uint32_t ea=c->r[2]+0xFFFF98A4u; c->f[0]=c->ps1[0]=RF32(ea);} // 8009C944
  fcmp(c,0,c->f[1],c->f[0]); // 8009C948
  setcrb(c,2,crb(c,1)|crb(c,2)); // 8009C94C
  if (!crb(c,2)) { goto L_8009C99C; } // 8009C950
  c->r[0]=0u+0x00000002u; // 8009C954
  W32(c->r[30]+0x00000000u,c->r[0]); // 8009C958
  goto L_8009C99C; // 8009C95C
L_8009C960:;
  c->r[31]=0u+0x00000000u; // 8009C960
  W8(c->r[1]+0x00000008u,c->r[31]); // 8009C964
  c->r[3]=c->r[1]+0x00000008u; // 8009C968
  c->lr=0x8009C970u; f_8004714C(c); // 8009C96C
  {uint32_t ea=c->r[3]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 8009C970
  c->r[3]=c->r[30]|c->r[30]; // 8009C974
  {uint32_t ea=c->r[30]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 8009C978
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[1]); // 8009C97C
  {uint32_t ea=c->r[30]+0x00000004u; WF32(ea,c->f[0]);} // 8009C980
  c->lr=0x8009C988u; f_8009CA3C(c); // 8009C984
  {uint32_t ea=c->r[2]+0xFFFF98A0u; c->f[0]=c->ps1[0]=RF32(ea);} // 8009C988
  fcmp(c,0,c->f[1],c->f[0]); // 8009C98C
  setcrb(c,2,crb(c,0)|crb(c,2)); // 8009C990
  if (!crb(c,2)) { goto L_8009C99C; } // 8009C994
  W32(c->r[30]+0x00000000u,c->r[31]); // 8009C998
L_8009C99C:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 8009C99C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8009C9A0
  c->r[30]=R32(c->r[1]+0x00000018u); // 8009C9A4
  c->lr=c->r[0]; // 8009C9A8
  c->r[1]=c->r[1]+0x00000020u; // 8009C9AC
  return; // 8009C9B0
}

// fn_8009C9B4
void f_8009C9B4(Ctx* __restrict c) {
  trace_call(0x8009C9B4u);
  c->r[0]=0u+0x00000001u; // 8009C9B4
  W32(c->r[3]+0x00000000u,c->r[0]); // 8009C9B8
  {uint32_t ea=c->r[2]+0xFFFF98A0u; c->f[0]=c->ps1[0]=RF32(ea);} // 8009C9BC
  c->r[0]=R32(c->r[4]+0x00000000u); // 8009C9C0
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 8009C9C4
  {uint32_t ea=c->r[3]+0x00000004u; WF32(ea,c->f[0]);} // 8009C9C8
  {uint32_t ea=c->r[3]+0x00000008u; WF32(ea,c->f[1]);} // 8009C9CC
  return; // 8009C9D0
}

// fn_8009C9D4
void f_8009C9D4(Ctx* __restrict c) {
  trace_call(0x8009C9D4u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8009C9D4
  c->r[0]=c->lr; // 8009C9D8
  W32(c->r[1]+0x00000024u,c->r[0]); // 8009C9DC
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[31]);} // 8009C9E0
  {uint32_t ea=c->r[1]+0x00000018u; psq_store(c,31,ea,0,0);} // 8009C9E4
  c->f[31]=c->f[1]; // 8009C9E8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8009C9EC
  c->r[31]=c->r[3]|c->r[3]; // 8009C9F0
  c->r[0]=R32(c->r[3]+0x00000000u); // 8009C9F4
  cmps(c,0,(int32_t)c->r[0],0); // 8009C9F8
  if (crb(c,2)) { goto L_8009CA20; } // 8009C9FC
  c->lr=0x8009CA04u; f_8009CA3C(c); // 8009CA00
  {uint32_t ea=c->r[2]+0xFFFF98A4u; c->f[0]=c->ps1[0]=RF32(ea);} // 8009CA04
  c->r[0]=0u+0x00000003u; // 8009CA08
  {uint32_t ea=c->r[31]+0x00000008u; WF32(ea,c->f[31]);} // 8009CA0C
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 8009CA10
  W32(c->r[31]+0x00000000u,c->r[0]); // 8009CA14
  c->f[0]=c->ps1[0]=S(c->f[31]*c->f[0]); // 8009CA18
  {uint32_t ea=c->r[31]+0x00000004u; WF32(ea,c->f[0]);} // 8009CA1C
L_8009CA20:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 8009CA20
  {uint32_t ea=c->r[1]+0x00000018u; psq_load(c,31,ea,0,0);} // 8009CA24
  {uint32_t ea=c->r[1]+0x00000010u; c->f[31]=RF64(ea);} // 8009CA28
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8009CA2C
  c->lr=c->r[0]; // 8009CA30
  c->r[1]=c->r[1]+0x00000020u; // 8009CA34
  return; // 8009CA38
}

// fn_8009CA3C
void f_8009CA3C(Ctx* __restrict c) {
  trace_call(0x8009CA3Cu);
  c->r[0]=R32(c->r[3]+0x00000000u); // 8009CA3C
  {uint32_t ea=c->r[2]+0xFFFF98A0u; c->f[1]=c->ps1[1]=RF32(ea);} // 8009CA40
  cmps(c,0,(int32_t)c->r[0],0); // 8009CA44
  if (crb(c,2)) { goto L_8009CAB8; } // 8009CA48
  cmps(c,0,(int32_t)c->r[0],2); // 8009CA4C
  if (crb(c,2)) { goto L_8009CA6C; } // 8009CA50
  cmps(c,0,(int32_t)c->r[0],1); // 8009CA54
  if (crb(c,2)) { goto L_8009CA74; } // 8009CA58
  cmps(c,0,(int32_t)c->r[0],3); // 8009CA5C
  if (crb(c,2)) { goto L_8009CA94; } // 8009CA60
  goto L_8009CAB8; // 8009CA64
  goto L_8009CAB8; // 8009CA68
L_8009CA6C:;
  {uint32_t ea=c->r[2]+0xFFFF98A4u; c->f[1]=c->ps1[1]=RF32(ea);} // 8009CA6C
  goto L_8009CAB8; // 8009CA70
L_8009CA74:;
  {uint32_t ea=c->r[3]+0x00000008u; c->f[2]=c->ps1[2]=RF32(ea);} // 8009CA74
  fcmp(c,0,c->f[1],c->f[2]); // 8009CA78
  if (!crb(c,2)) { goto L_8009CA88; } // 8009CA7C
  {uint32_t ea=c->r[2]+0xFFFF98A4u; c->f[1]=c->ps1[1]=RF32(ea);} // 8009CA80
  goto L_8009CAB8; // 8009CA84
L_8009CA88:;
  {uint32_t ea=c->r[3]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 8009CA88
  c->f[1]=c->ps1[1]=S(c->f[0]/c->f[2]); // 8009CA8C
  goto L_8009CAB8; // 8009CA90
L_8009CA94:;
  {uint32_t ea=c->r[3]+0x00000008u; c->f[2]=c->ps1[2]=RF32(ea);} // 8009CA94
  fcmp(c,0,c->f[1],c->f[2]); // 8009CA98
  if (!crb(c,2)) { goto L_8009CAA8; } // 8009CA9C
  {uint32_t ea=c->r[2]+0xFFFF98A4u; c->f[1]=c->ps1[1]=RF32(ea);} // 8009CAA0
  goto L_8009CAB8; // 8009CAA4
L_8009CAA8:;
  {uint32_t ea=c->r[3]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 8009CAA8
  {uint32_t ea=c->r[2]+0xFFFF98A4u; c->f[0]=c->ps1[0]=RF32(ea);} // 8009CAAC
  c->f[1]=c->ps1[1]=S(c->f[1]/c->f[2]); // 8009CAB0
  c->f[1]=c->ps1[1]=S(c->f[0]-c->f[1]); // 8009CAB4
L_8009CAB8:;
  {uint32_t ea=c->r[2]+0xFFFF98A0u; c->f[0]=c->ps1[0]=RF32(ea);} // 8009CAB8
  fcmp(c,0,c->f[1],c->f[0]); // 8009CABC
  if (!crb(c,0)) { goto L_8009CAC8; } // 8009CAC0
  c->f[1]=c->f[0]; // 8009CAC4
L_8009CAC8:;
  {uint32_t ea=c->r[2]+0xFFFF98A4u; c->f[0]=c->ps1[0]=RF32(ea);} // 8009CAC8
  fcmp(c,0,c->f[1],c->f[0]); // 8009CACC
  if (!crb(c,1)) return; // 8009CAD0
  c->f[1]=c->f[0]; // 8009CAD4
  return; // 8009CAD8
}

// fn_8009CADC
void f_8009CADC(Ctx* __restrict c) {
  trace_call(0x8009CADCu);
  return; // 8009CADC
}

// fn_8009CAE0
void f_8009CAE0(Ctx* __restrict c) {
  trace_call(0x8009CAE0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8009CAE0
  c->r[0]=c->lr; // 8009CAE4
  W32(c->r[1]+0x00000014u,c->r[0]); // 8009CAE8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8009CAEC
  c->r[0]=R8(c->r[13]+0xFFFFC068u); // 8009CAF0
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 8009CAF4
  if (!crb(c,2)) { goto L_8009CB28; } // 8009CAF8
  c->r[31]=0u+0x80750000u; // 8009CAFC
  c->r[3]=c->r[31]+0xFFFFA3ECu; // 8009CB00
  c->lr=0x8009CB08u; f_8009CB44(c); // 8009CB04
  c->r[4]=0u+0x800A0000u; // 8009CB08
  c->r[5]=0u+0x80750000u; // 8009CB0C
  c->r[3]=c->r[31]+0xFFFFA3ECu; // 8009CB10
  c->r[4]=c->r[4]+0xFFFFCD5Cu; // 8009CB14
  c->r[5]=c->r[5]+0xFFFFA3B0u; // 8009CB18
  c->lr=0x8009CB20u; f_803A92B8(c); // 8009CB1C
  c->r[0]=0u+0x00000001u; // 8009CB20
  W8(c->r[13]+0xFFFFC068u,c->r[0]); // 8009CB24
L_8009CB28:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8009CB28
  c->r[3]=0u+0x80750000u; // 8009CB2C
  c->r[0]=R32(c->r[1]+0x00000014u); // 8009CB30
  c->r[3]=c->r[3]+0xFFFFA3ECu; // 8009CB34
  c->lr=c->r[0]; // 8009CB38
  c->r[1]=c->r[1]+0x00000010u; // 8009CB3C
  return; // 8009CB40
}

// fn_8009CB44
void f_8009CB44(Ctx* __restrict c) {
  trace_call(0x8009CB44u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8009CB44
  c->r[0]=c->lr; // 8009CB48
  c->r[4]=0u+0x806D0000u; // 8009CB4C
  c->r[5]=0u+0x00000002u; // 8009CB50
  W32(c->r[1]+0x00000024u,c->r[0]); // 8009CB54
  c->r[4]=c->r[4]+0x00005B98u; // 8009CB58
  c->r[0]=0u+0xFFFFFFFFu; // 8009CB5C
  {uint32_t ea=c->r[1]+0x00000018u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 8009CB60
  c->r[31]=0u+0x00000000u; // 8009CB64
  c->r[30]=c->r[3]|c->r[3]; // 8009CB68
  W32(c->r[3]+0x00000000u,c->r[31]); // 8009CB6C
  W32(c->r[3]+0x00000004u,c->r[5]); // 8009CB70
  W32(c->r[3]+0x00000010u,c->r[0]); // 8009CB74
  W32(c->r[3]+0x00000014u,c->r[31]); // 8009CB78
  W32(c->r[3]+0x00000018u,c->r[31]); // 8009CB7C
  W32(c->r[3]+0x0000001Cu,c->r[31]); // 8009CB80
  W32(c->r[3]+0x0000000Cu,c->r[31]); // 8009CB84
  W32(c->r[3]+0x00000020u,c->r[31]); // 8009CB88
  W32(c->r[3]+0x00000008u,c->r[31]); // 8009CB8C
  W32(c->r[3]+0x000000A4u,c->r[4]); // 8009CB90
  W8(c->r[3]+0x000000B0u,c->r[31]); // 8009CB94
  c->r[3]=c->r[3]+0x000000B4u; // 8009CB98
  c->lr=0x8009CBA0u; f_800506C0(c); // 8009CB9C
  c->r[3]=c->r[30]+0x000000C0u; // 8009CBA0
  c->lr=0x8009CBA8u; f_8009CC44(c); // 8009CBA4
  c->r[3]=c->r[30]+0x000000CCu; // 8009CBA8
  c->lr=0x8009CBB0u; f_8009CC44(c); // 8009CBAC
  c->r[3]=c->r[30]+0x000000D8u; // 8009CBB0
  c->lr=0x8009CBB8u; f_8009CCB0(c); // 8009CBB4
  c->r[3]=c->r[30]+0x000000E4u; // 8009CBB8
  c->lr=0x8009CBC0u; f_8009CCB0(c); // 8009CBBC
  c->r[3]=c->r[30]+0x000000F0u; // 8009CBC0
  c->lr=0x8009CBC8u; f_800506C0(c); // 8009CBC4
  W8(c->r[1]+0x00000008u,c->r[31]); // 8009CBC8
  c->r[3]=c->r[1]+0x00000008u; // 8009CBCC
  c->lr=0x8009CBD4u; f_80046280(c); // 8009CBD0
  c->r[8]=0u+0x80690000u; // 8009CBD4
  c->r[4]=c->r[30]|c->r[30]; // 8009CBD8
  c->r[8]=c->r[8]+0xFFFFDD38u; // 8009CBDC
  c->r[5]=0u+0x00000000u; // 8009CBE0
  c->r[6]=0u+0x0000003Fu; // 8009CBE4
  c->r[7]=0u+0x0000002Cu; // 8009CBE8
  c->lr=0x8009CBF0u; f_8029F4EC(c); // 8009CBEC
  c->r[3]=c->r[30]|c->r[30]; // 8009CBF0
  {uint32_t ea=c->r[1]+0x00000018u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 8009CBF4
  c->r[0]=R32(c->r[1]+0x00000024u); // 8009CBF8
  c->lr=c->r[0]; // 8009CBFC
  c->r[1]=c->r[1]+0x00000020u; // 8009CC00
  return; // 8009CC04
}

// dtor_8009CC08
void f_8009CC08(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8009CC08
  c->r[0]=c->lr; // 8009CC0C
  cmps(c,0,(int32_t)c->r[3],0); // 8009CC10
  W32(c->r[1]+0x00000014u,c->r[0]); // 8009CC14
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8009CC18
  c->r[31]=c->r[3]|c->r[3]; // 8009CC1C
  if (crb(c,2)) { goto L_8009CC2C; } // 8009CC20
  c->r[4]=0u+0x00000000u; // 8009CC24
  c->lr=0x8009CC2Cu; f_80045C7C(c); // 8009CC28
L_8009CC2C:;
  c->r[3]=c->r[31]|c->r[31]; // 8009CC2C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8009CC30
  c->r[0]=R32(c->r[1]+0x00000014u); // 8009CC34
  c->lr=c->r[0]; // 8009CC38
  c->r[1]=c->r[1]+0x00000010u; // 8009CC3C
  return; // 8009CC40
}

// fn_8009CC44
void f_8009CC44(Ctx* __restrict c) {
  trace_call(0x8009CC44u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8009CC44
  c->r[0]=c->lr; // 8009CC48
  W32(c->r[1]+0x00000014u,c->r[0]); // 8009CC4C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8009CC50
  c->r[31]=c->r[3]|c->r[3]; // 8009CC54
  c->lr=0x8009CC5Cu; f_800506C0(c); // 8009CC58
  c->r[3]=c->r[31]|c->r[31]; // 8009CC5C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8009CC60
  c->r[0]=R32(c->r[1]+0x00000014u); // 8009CC64
  c->lr=c->r[0]; // 8009CC68
  c->r[1]=c->r[1]+0x00000010u; // 8009CC6C
  return; // 8009CC70
}

// dtor_8009CC74
void f_8009CC74(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8009CC74
  c->r[0]=c->lr; // 8009CC78
  cmps(c,0,(int32_t)c->r[3],0); // 8009CC7C
  W32(c->r[1]+0x00000014u,c->r[0]); // 8009CC80
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8009CC84
  c->r[31]=c->r[3]|c->r[3]; // 8009CC88
  if (crb(c,2)) { goto L_8009CC98; } // 8009CC8C
  c->r[4]=0u+0x00000000u; // 8009CC90
  c->lr=0x8009CC98u; f_80045C7C(c); // 8009CC94
L_8009CC98:;
  c->r[3]=c->r[31]|c->r[31]; // 8009CC98
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8009CC9C
  c->r[0]=R32(c->r[1]+0x00000014u); // 8009CCA0
  c->lr=c->r[0]; // 8009CCA4
  c->r[1]=c->r[1]+0x00000010u; // 8009CCA8
  return; // 8009CCAC
}

// fn_8009CCB0
void f_8009CCB0(Ctx* __restrict c) {
  trace_call(0x8009CCB0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8009CCB0
  c->r[0]=c->lr; // 8009CCB4
  W32(c->r[1]+0x00000014u,c->r[0]); // 8009CCB8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8009CCBC
  c->r[31]=c->r[3]|c->r[3]; // 8009CCC0
  c->lr=0x8009CCC8u; f_800506C0(c); // 8009CCC4
  c->r[3]=c->r[31]|c->r[31]; // 8009CCC8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8009CCCC
  c->r[0]=R32(c->r[1]+0x00000014u); // 8009CCD0
  c->lr=c->r[0]; // 8009CCD4
  c->r[1]=c->r[1]+0x00000010u; // 8009CCD8
  return; // 8009CCDC
}

// dtor_8009CCE0
void f_8009CCE0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8009CCE0
  c->r[0]=c->lr; // 8009CCE4
  cmps(c,0,(int32_t)c->r[3],0); // 8009CCE8
  W32(c->r[1]+0x00000014u,c->r[0]); // 8009CCEC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8009CCF0
  c->r[31]=c->r[3]|c->r[3]; // 8009CCF4
  if (crb(c,2)) { goto L_8009CD08; } // 8009CCF8
  if (crb(c,2)) { goto L_8009CD08; } // 8009CCFC
  c->r[4]=0u+0x00000000u; // 8009CD00
  c->lr=0x8009CD08u; f_80045C7C(c); // 8009CD04
L_8009CD08:;
  c->r[3]=c->r[31]|c->r[31]; // 8009CD08
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8009CD0C
  c->r[0]=R32(c->r[1]+0x00000014u); // 8009CD10
  c->lr=c->r[0]; // 8009CD14
  c->r[1]=c->r[1]+0x00000010u; // 8009CD18
  return; // 8009CD1C
}

// dtor_8009CD20
void f_8009CD20(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8009CD20
  c->r[0]=c->lr; // 8009CD24
  cmps(c,0,(int32_t)c->r[3],0); // 8009CD28
  W32(c->r[1]+0x00000014u,c->r[0]); // 8009CD2C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8009CD30
  c->r[31]=c->r[3]|c->r[3]; // 8009CD34
  if (crb(c,2)) { goto L_8009CD44; } // 8009CD38
  c->r[4]=0u+0x00000000u; // 8009CD3C
  c->lr=0x8009CD44u; f_80045C7C(c); // 8009CD40
L_8009CD44:;
  c->r[3]=c->r[31]|c->r[31]; // 8009CD44
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8009CD48
  c->r[0]=R32(c->r[1]+0x00000014u); // 8009CD4C
  c->lr=c->r[0]; // 8009CD50
  c->r[1]=c->r[1]+0x00000010u; // 8009CD54
  return; // 8009CD58
}

// fn_8009CD5C
void f_8009CD5C(Ctx* __restrict c) {
  trace_call(0x8009CD5Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8009CD5C
  c->r[0]=c->lr; // 8009CD60
  cmps(c,0,(int32_t)c->r[3],0); // 8009CD64
  W32(c->r[1]+0x00000014u,c->r[0]); // 8009CD68
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8009CD6C
  c->r[31]=c->r[3]|c->r[3]; // 8009CD70
  if (crb(c,2)) { goto L_8009CDD0; } // 8009CD74
  c->r[3]=addc(c,c->r[3],0x000000F0u,0); cr0(c,c->r[3]); // 8009CD78
  if (crb(c,2)) { goto L_8009CD88; } // 8009CD7C
  c->r[4]=0u+0x00000000u; // 8009CD80
  c->lr=0x8009CD88u; f_80045C7C(c); // 8009CD84
L_8009CD88:;
  c->r[3]=c->r[31]+0x000000E4u; // 8009CD88
  c->r[4]=0u+0xFFFFFFFFu; // 8009CD8C
  c->lr=0x8009CD94u; f_8009CCE0(c); // 8009CD90
  c->r[3]=c->r[31]+0x000000D8u; // 8009CD94
  c->r[4]=0u+0xFFFFFFFFu; // 8009CD98
  c->lr=0x8009CDA0u; f_8009CCE0(c); // 8009CD9C
  c->r[3]=addc(c,c->r[31],0x000000CCu,0); cr0(c,c->r[3]); // 8009CDA0
  if (crb(c,2)) { goto L_8009CDB0; } // 8009CDA4
  c->r[4]=0u+0x00000000u; // 8009CDA8
  c->lr=0x8009CDB0u; f_80045C7C(c); // 8009CDAC
L_8009CDB0:;
  c->r[3]=addc(c,c->r[31],0x000000C0u,0); cr0(c,c->r[3]); // 8009CDB0
  if (crb(c,2)) { goto L_8009CDC0; } // 8009CDB4
  c->r[4]=0u+0x00000000u; // 8009CDB8
  c->lr=0x8009CDC0u; f_80045C7C(c); // 8009CDBC
L_8009CDC0:;
  c->r[3]=addc(c,c->r[31],0x000000B4u,0); cr0(c,c->r[3]); // 8009CDC0
  if (crb(c,2)) { goto L_8009CDD0; } // 8009CDC4
  c->r[4]=0u+0x00000000u; // 8009CDC8
  c->lr=0x8009CDD0u; f_80045C7C(c); // 8009CDCC
L_8009CDD0:;
  c->r[3]=c->r[31]|c->r[31]; // 8009CDD0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8009CDD4
  c->r[0]=R32(c->r[1]+0x00000014u); // 8009CDD8
  c->lr=c->r[0]; // 8009CDDC
  c->r[1]=c->r[1]+0x00000010u; // 8009CDE0
  return; // 8009CDE4
}

// fn_8009CDE8
void f_8009CDE8(Ctx* __restrict c) {
  trace_call(0x8009CDE8u);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8009CDE8
  c->r[0]=c->lr; // 8009CDEC
  W32(c->r[1]+0x00000054u,c->r[0]); // 8009CDF0
  c->r[0]=0u+0x00000000u; // 8009CDF4
  {uint32_t ea=c->r[1]+0x00000040u; for(int i=28;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 8009CDF8
  c->r[31]=c->r[3]|c->r[3]; // 8009CDFC
  W8(c->r[3]+0x000000B0u,c->r[0]); // 8009CE00
  c->r[0]=R8(c->r[13]+0xFFFFBB52u); // 8009CE04
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 8009CE08
  if (!crb(c,2)) { goto L_8009CE48; } // 8009CE0C
  c->r[30]=0u+0x80730000u; // 8009CE10
  c->r[3]=c->r[30]+0x00002408u; // 8009CE14
  c->lr=0x8009CE1Cu; f_802D7C5C(c); // 8009CE18
  c->r[3]=0u+0x806D0000u; // 8009CE1C
  c->r[4]=0u+0x80040000u; // 8009CE20
  c->r[3]=c->r[3]+0xFFFFC080u; // 8009CE24
  c->r[5]=0u+0x80750000u; // 8009CE28
  W32(c->r[30]+0x00002408u,c->r[3]); // 8009CE2C
  c->r[3]=c->r[30]+0x00002408u; // 8009CE30
  c->r[4]=c->r[4]+0x00005C40u; // 8009CE34
  c->r[5]=c->r[5]+0xFFFFA3E0u; // 8009CE38
  c->lr=0x8009CE40u; f_803A92B8(c); // 8009CE3C
  c->r[0]=0u+0x00000001u; // 8009CE40
  W8(c->r[13]+0xFFFFBB52u,c->r[0]); // 8009CE44
L_8009CE48:;
  c->r[3]=0u+0x80730000u; // 8009CE48
  c->r[4]=0u+0x80690000u; // 8009CE4C
  c->r[3]=c->r[3]+0x00002408u; // 8009CE50
  c->r[4]=c->r[4]+0xFFFFDD38u; // 8009CE54
  c->r[28]=R32(c->r[3]+0x00000010u); // 8009CE58
  c->r[30]=c->r[4]+0x00000017u; // 8009CE5C
  c->lr=0x8009CE64u; f_8009D324(c); // 8009CE60
  c->r[29]=c->r[3]|c->r[3]; // 8009CE64
  c->lr=0x8009CE6Cu; f_80052E38(c); // 8009CE68
  W32(c->r[29]+0x0000002Cu,c->r[30]); // 8009CE6C
  c->r[30]=0u+0x00020000u; // 8009CE70
  c->r[4]=c->r[30]+0xFFFF86A0u; // 8009CE74
  c->r[3]=c->r[28]|c->r[28]; // 8009CE78
  W32(c->r[29]+0x00000010u,c->r[4]); // 8009CE7C
  c->r[5]=0u+0x00000020u; // 8009CE80
  c->lr=0x8009CE88u; f_803C4898(c); // 8009CE84
  c->r[4]=c->r[30]+0xFFFF86A0u; // 8009CE88
  c->r[5]=0u+0x00000000u; // 8009CE8C
  c->lr=0x8009CE94u; f_803C4514(c); // 8009CE90
  W32(c->r[29]+0x00000014u,c->r[3]); // 8009CE94
  c->r[4]=c->r[3]|c->r[3]; // 8009CE98
  c->r[3]=c->r[29]+0x00000018u; // 8009CE9C
  c->r[5]=0u+0x00000020u; // 8009CEA0
  c->lr=0x8009CEA8u; f_803C4D28(c); // 8009CEA4
  c->r[9]=c->r[31]+0x000000B4u; // 8009CEA8
  c->r[8]=c->r[31]+0x000000C0u; // 8009CEAC
  c->r[7]=c->r[31]+0x000000CCu; // 8009CEB0
  c->r[6]=c->r[31]+0x000000F0u; // 8009CEB4
  c->r[5]=c->r[31]+0x000000D8u; // 8009CEB8
  c->r[4]=c->r[31]+0x000000E4u; // 8009CEBC
  c->r[0]=0u+0x00000001u; // 8009CEC0
  W32(c->r[31]+0x000000B4u,c->r[9]); // 8009CEC4
  c->r[30]=0u+0x00000000u; // 8009CEC8
  c->r[3]=c->r[1]+0x00000030u; // 8009CECC
  W32(c->r[31]+0x000000B8u,c->r[9]); // 8009CED0
  W32(c->r[31]+0x000000C0u,c->r[8]); // 8009CED4
  W32(c->r[31]+0x000000C4u,c->r[8]); // 8009CED8
  W32(c->r[31]+0x000000CCu,c->r[7]); // 8009CEDC
  W32(c->r[31]+0x000000D0u,c->r[7]); // 8009CEE0
  W32(c->r[31]+0x000000F0u,c->r[6]); // 8009CEE4
  W32(c->r[31]+0x000000F4u,c->r[6]); // 8009CEE8
  W32(c->r[31]+0x000000D8u,c->r[5]); // 8009CEEC
  W32(c->r[31]+0x000000DCu,c->r[5]); // 8009CEF0
  W32(c->r[31]+0x000000E4u,c->r[4]); // 8009CEF4
  W32(c->r[31]+0x000000E8u,c->r[4]); // 8009CEF8
  W32(c->r[31]+0x000000A8u,c->r[0]); // 8009CEFC
  W32(c->r[31]+0x000000ACu,c->r[0]); // 8009CF00
  W8(c->r[1]+0x00000030u,c->r[30]); // 8009CF04
  c->lr=0x8009CF0Cu; f_8004F3FC(c); // 8009CF08
  c->r[5]=0u+0x800A0000u; // 8009CF0C
  c->r[4]=0u+0x00000003u; // 8009CF10
  c->r[5]=c->r[5]+0xFFFFD044u; // 8009CF14
  c->lr=0x8009CF1Cu; f_800A2544(c); // 8009CF18
  W8(c->r[1]+0x0000002Cu,c->r[30]); // 8009CF1C
  c->r[3]=c->r[1]+0x0000002Cu; // 8009CF20
  c->lr=0x8009CF28u; f_8004F3FC(c); // 8009CF24
  c->r[5]=0u+0x800A0000u; // 8009CF28
  c->r[4]=0u+0x00000004u; // 8009CF2C
  c->r[5]=c->r[5]+0xFFFFD090u; // 8009CF30
  c->lr=0x8009CF38u; f_800A2544(c); // 8009CF34
  W8(c->r[1]+0x00000028u,c->r[30]); // 8009CF38
  c->r[3]=c->r[1]+0x00000028u; // 8009CF3C
  c->lr=0x8009CF44u; f_8004F3FC(c); // 8009CF40
  c->r[5]=0u+0x800A0000u; // 8009CF44
  c->r[4]=0u+0x00000005u; // 8009CF48
  c->r[5]=c->r[5]+0xFFFFD0D8u; // 8009CF4C
  c->lr=0x8009CF54u; f_800A2544(c); // 8009CF50
  W8(c->r[1]+0x00000024u,c->r[30]); // 8009CF54
  c->r[3]=c->r[1]+0x00000024u; // 8009CF58
  c->lr=0x8009CF60u; f_8004F3FC(c); // 8009CF5C
  c->r[5]=0u+0x800A0000u; // 8009CF60
  c->r[4]=0u+0x00000006u; // 8009CF64
  c->r[5]=c->r[5]+0xFFFFD124u; // 8009CF68
  c->lr=0x8009CF70u; f_800A2544(c); // 8009CF6C
  W8(c->r[1]+0x00000020u,c->r[30]); // 8009CF70
  c->r[3]=c->r[1]+0x00000020u; // 8009CF74
  c->lr=0x8009CF7Cu; f_8004F3FC(c); // 8009CF78
  c->r[5]=0u+0x800A0000u; // 8009CF7C
  c->r[4]=0u+0x00000013u; // 8009CF80
  c->r[5]=c->r[5]+0xFFFFD170u; // 8009CF84
  c->lr=0x8009CF8Cu; f_800A2544(c); // 8009CF88
  W8(c->r[1]+0x0000001Cu,c->r[30]); // 8009CF8C
  c->r[3]=c->r[1]+0x0000001Cu; // 8009CF90
  c->lr=0x8009CF98u; f_8004F3FC(c); // 8009CF94
  c->r[5]=0u+0x800A0000u; // 8009CF98
  c->r[4]=0u+0x0000001Du; // 8009CF9C
  c->r[5]=c->r[5]+0xFFFFD1B8u; // 8009CFA0
  c->lr=0x8009CFA8u; f_800A2544(c); // 8009CFA4
  W8(c->r[1]+0x00000018u,c->r[30]); // 8009CFA8
  c->r[3]=c->r[1]+0x00000018u; // 8009CFAC
  c->lr=0x8009CFB4u; f_8004F3FC(c); // 8009CFB0
  c->r[5]=0u+0x800A0000u; // 8009CFB4
  c->r[4]=0u+0x0000001Eu; // 8009CFB8
  c->r[5]=c->r[5]+0xFFFFD200u; // 8009CFBC
  c->lr=0x8009CFC4u; f_800A2544(c); // 8009CFC0
  W8(c->r[1]+0x00000014u,c->r[30]); // 8009CFC4
  c->r[3]=c->r[1]+0x00000014u; // 8009CFC8
  c->lr=0x8009CFD0u; f_8004F3FC(c); // 8009CFCC
  c->r[5]=0u+0x800A0000u; // 8009CFD0
  c->r[4]=0u+0x0000000Eu; // 8009CFD4
  c->r[5]=c->r[5]+0xFFFFD24Cu; // 8009CFD8
  c->lr=0x8009CFE0u; f_800A2544(c); // 8009CFDC
  W8(c->r[1]+0x00000010u,c->r[30]); // 8009CFE0
  c->r[3]=c->r[1]+0x00000010u; // 8009CFE4
  c->lr=0x8009CFECu; f_8004F3FC(c); // 8009CFE8
  c->r[5]=0u+0x800A0000u; // 8009CFEC
  c->r[4]=0u+0x00000017u; // 8009CFF0
  c->r[5]=c->r[5]+0xFFFFD294u; // 8009CFF4
  c->lr=0x8009CFFCu; f_800A2544(c); // 8009CFF8
  W8(c->r[1]+0x0000000Cu,c->r[30]); // 8009CFFC
  c->r[3]=c->r[1]+0x0000000Cu; // 8009D000
  c->lr=0x8009D008u; f_8004F3FC(c); // 8009D004
  c->r[5]=0u+0x800A0000u; // 8009D008
  c->r[4]=0u+0x0000003Bu; // 8009D00C
  c->r[5]=c->r[5]+0xFFFFD2DCu; // 8009D010
  c->lr=0x8009D018u; f_800A2544(c); // 8009D014
  W8(c->r[1]+0x00000008u,c->r[30]); // 8009D018
  c->r[3]=c->r[1]+0x00000008u; // 8009D01C
  c->lr=0x8009D024u; f_80046280(c); // 8009D020
  c->r[4]=0u+0x0000002Cu; // 8009D024
  c->r[5]=0u+0x00000001u; // 8009D028
  c->lr=0x8009D030u; f_8029F698(c); // 8009D02C
  {uint32_t ea=c->r[1]+0x00000040u; for(int i=28;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 8009D030
  c->r[0]=R32(c->r[1]+0x00000054u); // 8009D034
  c->lr=c->r[0]; // 8009D038
  c->r[1]=c->r[1]+0x00000050u; // 8009D03C
  return; // 8009D040
}

// fn_8009D044
void f_8009D044(Ctx* __restrict c) {
  trace_call(0x8009D044u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8009D044
  c->r[0]=c->lr; // 8009D048
  W32(c->r[1]+0x00000024u,c->r[0]); // 8009D04C
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 8009D050
  c->r[29]=c->r[3]|c->r[3]; // 8009D054
  c->r[30]=c->r[4]|c->r[4]; // 8009D058
  c->r[31]=c->r[5]|c->r[5]; // 8009D05C
  c->lr=0x8009D064u; f_8009CAE0(c); // 8009D060
  c->r[0]=R32(c->r[30]+0x00000008u); // 8009D064
  c->r[4]=c->r[29]|c->r[29]; // 8009D068
  c->r[5]=c->r[31]|c->r[31]; // 8009D06C
  c->r[6]=c->r[30]+c->r[0]; // 8009D070
  c->lr=0x8009D078u; f_8009D9E8(c); // 8009D074
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 8009D078
  c->r[3]=0u+0x00000001u; // 8009D07C
  c->r[0]=R32(c->r[1]+0x00000024u); // 8009D080
  c->lr=c->r[0]; // 8009D084
  c->r[1]=c->r[1]+0x00000020u; // 8009D088
  return; // 8009D08C
}

// fn_8009D090
void f_8009D090(Ctx* __restrict c) {
  trace_call(0x8009D090u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8009D090
  c->r[0]=c->lr; // 8009D094
  W32(c->r[1]+0x00000024u,c->r[0]); // 8009D098
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 8009D09C
  c->r[29]=c->r[3]|c->r[3]; // 8009D0A0
  c->r[30]=c->r[4]|c->r[4]; // 8009D0A4
  c->r[31]=c->r[5]|c->r[5]; // 8009D0A8
  c->lr=0x8009D0B0u; f_8009CAE0(c); // 8009D0AC
  c->r[4]=c->r[29]|c->r[29]; // 8009D0B0
  c->r[5]=c->r[30]|c->r[30]; // 8009D0B4
  c->r[6]=c->r[31]|c->r[31]; // 8009D0B8
  c->lr=0x8009D0C0u; f_8009DC88(c); // 8009D0BC
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 8009D0C0
  c->r[3]=0u+0x00000001u; // 8009D0C4
  c->r[0]=R32(c->r[1]+0x00000024u); // 8009D0C8
  c->lr=c->r[0]; // 8009D0CC
  c->r[1]=c->r[1]+0x00000020u; // 8009D0D0
  return; // 8009D0D4
}

// fn_8009D0D8
void f_8009D0D8(Ctx* __restrict c) {
  trace_call(0x8009D0D8u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8009D0D8
  c->r[0]=c->lr; // 8009D0DC
  W32(c->r[1]+0x00000024u,c->r[0]); // 8009D0E0
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 8009D0E4
  c->r[29]=c->r[3]|c->r[3]; // 8009D0E8
  c->r[30]=c->r[4]|c->r[4]; // 8009D0EC
  c->r[31]=c->r[5]|c->r[5]; // 8009D0F0
  c->lr=0x8009D0F8u; f_8009CAE0(c); // 8009D0F4
  c->r[0]=R32(c->r[30]+0x00000008u); // 8009D0F8
  c->r[4]=c->r[29]|c->r[29]; // 8009D0FC
  c->r[5]=c->r[31]|c->r[31]; // 8009D100
  c->r[6]=c->r[30]+c->r[0]; // 8009D104
  c->lr=0x8009D10Cu; f_8009DE18(c); // 8009D108
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 8009D10C
  c->r[3]=0u+0x00000001u; // 8009D110
  c->r[0]=R32(c->r[1]+0x00000024u); // 8009D114
  c->lr=c->r[0]; // 8009D118
  c->r[1]=c->r[1]+0x00000020u; // 8009D11C
  return; // 8009D120
}

// fn_8009D124
void f_8009D124(Ctx* __restrict c) {
  trace_call(0x8009D124u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8009D124
  c->r[0]=c->lr; // 8009D128
  W32(c->r[1]+0x00000024u,c->r[0]); // 8009D12C
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 8009D130
  c->r[29]=c->r[3]|c->r[3]; // 8009D134
  c->r[30]=c->r[4]|c->r[4]; // 8009D138
  c->r[31]=c->r[5]|c->r[5]; // 8009D13C
  c->lr=0x8009D144u; f_8009CAE0(c); // 8009D140
  c->r[0]=R32(c->r[30]+0x00000008u); // 8009D144
  c->r[4]=c->r[29]|c->r[29]; // 8009D148
  c->r[5]=c->r[31]|c->r[31]; // 8009D14C
  c->r[6]=c->r[30]+c->r[0]; // 8009D150
  c->lr=0x8009D158u; f_8009DCA4(c); // 8009D154
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 8009D158
  c->r[3]=0u+0x00000001u; // 8009D15C
  c->r[0]=R32(c->r[1]+0x00000024u); // 8009D160
  c->lr=c->r[0]; // 8009D164
  c->r[1]=c->r[1]+0x00000020u; // 8009D168
  return; // 8009D16C
}

// fn_8009D170
void f_8009D170(Ctx* __restrict c) {
  trace_call(0x8009D170u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8009D170
  c->r[0]=c->lr; // 8009D174
  W32(c->r[1]+0x00000024u,c->r[0]); // 8009D178
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 8009D17C
  c->r[29]=c->r[3]|c->r[3]; // 8009D180
  c->r[30]=c->r[4]|c->r[4]; // 8009D184
  c->r[31]=c->r[5]|c->r[5]; // 8009D188
  c->lr=0x8009D190u; f_8009CAE0(c); // 8009D18C
  c->r[4]=c->r[29]|c->r[29]; // 8009D190
  c->r[5]=c->r[30]|c->r[30]; // 8009D194
  c->r[6]=c->r[31]|c->r[31]; // 8009D198
  c->lr=0x8009D1A0u; f_8009E058(c); // 8009D19C
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 8009D1A0
  c->r[3]=0u+0x00000001u; // 8009D1A4
  c->r[0]=R32(c->r[1]+0x00000024u); // 8009D1A8
  c->lr=c->r[0]; // 8009D1AC
  c->r[1]=c->r[1]+0x00000020u; // 8009D1B0
  return; // 8009D1B4
}

// fn_8009D1B8
void f_8009D1B8(Ctx* __restrict c) {
  trace_call(0x8009D1B8u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8009D1B8
  c->r[0]=c->lr; // 8009D1BC
  W32(c->r[1]+0x00000024u,c->r[0]); // 8009D1C0
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 8009D1C4
  c->r[29]=c->r[3]|c->r[3]; // 8009D1C8
  c->r[30]=c->r[4]|c->r[4]; // 8009D1CC
  c->r[31]=c->r[5]|c->r[5]; // 8009D1D0
  c->lr=0x8009D1D8u; f_8009CAE0(c); // 8009D1D4
  c->r[4]=c->r[29]|c->r[29]; // 8009D1D8
  c->r[5]=c->r[30]|c->r[30]; // 8009D1DC
  c->r[6]=c->r[31]|c->r[31]; // 8009D1E0
  c->lr=0x8009D1E8u; f_8009D800(c); // 8009D1E4
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 8009D1E8
  c->r[3]=0u+0x00000001u; // 8009D1EC
  c->r[0]=R32(c->r[1]+0x00000024u); // 8009D1F0
  c->lr=c->r[0]; // 8009D1F4
  c->r[1]=c->r[1]+0x00000020u; // 8009D1F8
  return; // 8009D1FC
}

// fn_8009D200
void f_8009D200(Ctx* __restrict c) {
  trace_call(0x8009D200u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8009D200
  c->r[0]=c->lr; // 8009D204
  W32(c->r[1]+0x00000024u,c->r[0]); // 8009D208
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 8009D20C
  c->r[29]=c->r[3]|c->r[3]; // 8009D210
  c->r[30]=c->r[4]|c->r[4]; // 8009D214
  c->r[31]=c->r[5]|c->r[5]; // 8009D218
  c->lr=0x8009D220u; f_8009CAE0(c); // 8009D21C
  c->r[0]=R32(c->r[30]+0x00000008u); // 8009D220
  c->r[4]=c->r[29]|c->r[29]; // 8009D224
  c->r[5]=c->r[31]|c->r[31]; // 8009D228
  c->r[6]=c->r[30]+c->r[0]; // 8009D22C
  c->lr=0x8009D234u; f_8009D994(c); // 8009D230
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 8009D234
  c->r[3]=0u+0x00000001u; // 8009D238
  c->r[0]=R32(c->r[1]+0x00000024u); // 8009D23C
  c->lr=c->r[0]; // 8009D240
  c->r[1]=c->r[1]+0x00000020u; // 8009D244
  return; // 8009D248
}

// fn_8009D24C
void f_8009D24C(Ctx* __restrict c) {
  trace_call(0x8009D24Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8009D24C
  c->r[0]=c->lr; // 8009D250
  W32(c->r[1]+0x00000024u,c->r[0]); // 8009D254
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 8009D258
  c->r[29]=c->r[3]|c->r[3]; // 8009D25C
  c->r[30]=c->r[4]|c->r[4]; // 8009D260
  c->r[31]=c->r[5]|c->r[5]; // 8009D264
  c->lr=0x8009D26Cu; f_8009CAE0(c); // 8009D268
  c->r[4]=c->r[29]|c->r[29]; // 8009D26C
  c->r[5]=c->r[30]|c->r[30]; // 8009D270
  c->r[6]=c->r[31]|c->r[31]; // 8009D274
  c->lr=0x8009D27Cu; f_8009E1C8(c); // 8009D278
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 8009D27C
  c->r[3]=0u+0x00000001u; // 8009D280
  c->r[0]=R32(c->r[1]+0x00000024u); // 8009D284
  c->lr=c->r[0]; // 8009D288
  c->r[1]=c->r[1]+0x00000020u; // 8009D28C
  return; // 8009D290
}

// fn_8009D294
void f_8009D294(Ctx* __restrict c) {
  trace_call(0x8009D294u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8009D294
  c->r[0]=c->lr; // 8009D298
  W32(c->r[1]+0x00000024u,c->r[0]); // 8009D29C
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 8009D2A0
  c->r[29]=c->r[3]|c->r[3]; // 8009D2A4
  c->r[30]=c->r[4]|c->r[4]; // 8009D2A8
  c->r[31]=c->r[5]|c->r[5]; // 8009D2AC
  c->lr=0x8009D2B4u; f_8009CAE0(c); // 8009D2B0
  c->r[4]=c->r[29]|c->r[29]; // 8009D2B4
  c->r[5]=c->r[30]|c->r[30]; // 8009D2B8
  c->r[6]=c->r[31]|c->r[31]; // 8009D2BC
  c->lr=0x8009D2C4u; f_8009E238(c); // 8009D2C0
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 8009D2C4
  c->r[3]=0u+0x00000001u; // 8009D2C8
  c->r[0]=R32(c->r[1]+0x00000024u); // 8009D2CC
  c->lr=c->r[0]; // 8009D2D0
  c->r[1]=c->r[1]+0x00000020u; // 8009D2D4
  return; // 8009D2D8
}

// fn_8009D2DC
void f_8009D2DC(Ctx* __restrict c) {
  trace_call(0x8009D2DCu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8009D2DC
  c->r[0]=c->lr; // 8009D2E0
  W32(c->r[1]+0x00000024u,c->r[0]); // 8009D2E4
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 8009D2E8
  c->r[29]=c->r[3]|c->r[3]; // 8009D2EC
  c->r[30]=c->r[4]|c->r[4]; // 8009D2F0
  c->r[31]=c->r[5]|c->r[5]; // 8009D2F4
  c->lr=0x8009D2FCu; f_8009CAE0(c); // 8009D2F8
  c->r[4]=c->r[29]|c->r[29]; // 8009D2FC
  c->r[5]=c->r[30]|c->r[30]; // 8009D300
  c->r[6]=c->r[31]|c->r[31]; // 8009D304
  c->lr=0x8009D30Cu; f_8009E2D4(c); // 8009D308
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 8009D30C
  c->r[3]=0u+0x00000001u; // 8009D310
  c->r[0]=R32(c->r[1]+0x00000024u); // 8009D314
  c->lr=c->r[0]; // 8009D318
  c->r[1]=c->r[1]+0x00000020u; // 8009D31C
  return; // 8009D320
}

// fn_8009D324
void f_8009D324(Ctx* __restrict c) {
  trace_call(0x8009D324u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8009D324
  c->r[0]=c->lr; // 8009D328
  W32(c->r[1]+0x00000014u,c->r[0]); // 8009D32C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8009D330
  c->r[0]=R8(c->r[13]+0xFFFFC069u); // 8009D334
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 8009D338
  if (!crb(c,2)) { goto L_8009D384; } // 8009D33C
  c->r[31]=0u+0x80750000u; // 8009D340
  c->r[3]=c->r[31]+0xFFFFA4E8u; // 8009D344
  c->lr=0x8009D34Cu; f_800506C0(c); // 8009D348
  c->r[3]=c->r[31]+0xFFFFA4E8u; // 8009D34C
  c->r[0]=0u+0x00000000u; // 8009D350
  c->r[4]=0u+0x80040000u; // 8009D354
  c->r[5]=0u+0x80750000u; // 8009D358
  W32(c->r[3]+0x00000008u,c->r[3]); // 8009D35C
  c->r[4]=c->r[4]+0x000055F4u; // 8009D360
  c->r[5]=c->r[5]+0xFFFFA3BCu; // 8009D364
  W8(c->r[3]+0x0000000Cu,c->r[0]); // 8009D368
  W32(c->r[3]+0x00000014u,c->r[0]); // 8009D36C
  W32(c->r[3]+0x00000010u,c->r[0]); // 8009D370
  W32(c->r[3]+0x00000028u,c->r[0]); // 8009D374
  c->lr=0x8009D37Cu; f_803A92B8(c); // 8009D378
  c->r[0]=0u+0x00000001u; // 8009D37C
  W8(c->r[13]+0xFFFFC069u,c->r[0]); // 8009D380
L_8009D384:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8009D384
  c->r[3]=0u+0x80750000u; // 8009D388
  c->r[0]=R32(c->r[1]+0x00000014u); // 8009D38C
  c->r[3]=c->r[3]+0xFFFFA4E8u; // 8009D390
  c->lr=c->r[0]; // 8009D394
  c->r[1]=c->r[1]+0x00000010u; // 8009D398
  return; // 8009D39C
}

// fn_8009D3A0
void f_8009D3A0(Ctx* __restrict c) {
  trace_call(0x8009D3A0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8009D3A0
  c->r[0]=c->lr; // 8009D3A4
  W32(c->r[1]+0x00000024u,c->r[0]); // 8009D3A8
  {uint32_t ea=c->r[1]+0x00000018u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 8009D3AC
  c->r[31]=0u+0x00000000u; // 8009D3B0
  c->r[30]=c->r[3]|c->r[3]; // 8009D3B4
  c->r[3]=c->r[1]+0x00000008u; // 8009D3B8
  W8(c->r[1]+0x00000008u,c->r[31]); // 8009D3BC
  c->lr=0x8009D3C4u; f_80046280(c); // 8009D3C0
  c->r[4]=0u+0x0000002Cu; // 8009D3C4
  c->r[5]=0u+0x00000001u; // 8009D3C8
  c->lr=0x8009D3D0u; f_8029F8EC(c); // 8009D3CC
  c->r[7]=c->r[30]+0x000000B4u; // 8009D3D0
  c->r[6]=c->r[30]+0x000000C0u; // 8009D3D4
  c->r[5]=c->r[30]+0x000000CCu; // 8009D3D8
  c->r[4]=c->r[30]+0x000000F0u; // 8009D3DC
  c->r[3]=c->r[30]+0x000000D8u; // 8009D3E0
  c->r[0]=c->r[30]+0x000000E4u; // 8009D3E4
  W32(c->r[30]+0x000000B4u,c->r[7]); // 8009D3E8
  W32(c->r[30]+0x000000B8u,c->r[7]); // 8009D3EC
  W32(c->r[30]+0x000000C0u,c->r[6]); // 8009D3F0
  W32(c->r[30]+0x000000C4u,c->r[6]); // 8009D3F4
  W32(c->r[30]+0x000000CCu,c->r[5]); // 8009D3F8
  W32(c->r[30]+0x000000D0u,c->r[5]); // 8009D3FC
  W32(c->r[30]+0x000000F0u,c->r[4]); // 8009D400
  W32(c->r[30]+0x000000F4u,c->r[4]); // 8009D404
  W32(c->r[30]+0x000000D8u,c->r[3]); // 8009D408
  W32(c->r[30]+0x000000DCu,c->r[3]); // 8009D40C
  W32(c->r[30]+0x000000E4u,c->r[0]); // 8009D410
  W32(c->r[30]+0x000000E8u,c->r[0]); // 8009D414
  c->lr=0x8009D41Cu; f_8009D324(c); // 8009D418
  c->r[0]=R8(c->r[3]+0x0000000Cu); // 8009D41C
  c->r[30]=c->r[3]|c->r[3]; // 8009D420
  cmps(c,0,(int32_t)c->r[0],0); // 8009D424
  if (crb(c,2)) { goto L_8009D43C; } // 8009D428
  W8(c->r[3]+0x0000000Cu,c->r[31]); // 8009D42C
  c->lr=0x8009D434u; f_80053100(c); // 8009D430
  c->r[4]=c->r[30]|c->r[30]; // 8009D434
  c->lr=0x8009D43Cu; f_802DDD08(c); // 8009D438
L_8009D43C:;
  c->r[3]=R32(c->r[30]+0x00000014u); // 8009D43C
  cmps(c,0,(int32_t)c->r[3],0); // 8009D440
  if (crb(c,2)) { goto L_8009D44C; } // 8009D444
  c->lr=0x8009D44Cu; f_803C45C4(c); // 8009D448
L_8009D44C:;
  c->r[0]=0u+0x00000000u; // 8009D44C
  W32(c->r[30]+0x00000014u,c->r[0]); // 8009D450
  W32(c->r[30]+0x00000010u,c->r[0]); // 8009D454
  {uint32_t ea=c->r[1]+0x00000018u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 8009D458
  c->r[0]=R32(c->r[1]+0x00000024u); // 8009D45C
  c->lr=c->r[0]; // 8009D460
  c->r[1]=c->r[1]+0x00000020u; // 8009D464
  return; // 8009D468
}

// fn_8009D46C
void f_8009D46C(Ctx* __restrict c) {
  trace_call(0x8009D46Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8009D46C
  c->r[0]=c->lr; // 8009D470
  W32(c->r[1]+0x00000054u,c->r[0]); // 8009D474
  c->r[0]=0u+0x00000000u; // 8009D478
  c->r[6]=c->r[1]+0x00000008u; // 8009D47C
  {uint32_t ea=c->r[1]+0x00000040u; for(int i=28;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 8009D480
  c->r[31]=0u+0x80690000u; // 8009D484
  c->r[28]=c->r[4]|c->r[4]; // 8009D488
  c->r[29]=c->r[5]|c->r[5]; // 8009D48C
  c->r[31]=c->r[31]+0xFFFFDD38u; // 8009D490
  c->r[5]=c->r[1]+0x0000000Cu; // 8009D494
  c->r[3]=c->r[28]|c->r[28]; // 8009D498
  c->r[4]=c->r[31]+0x00000026u; // 8009D49C
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 8009D4A0
  c->lr=0x8009D4A8u; f_802D24C8(c); // 8009D4A4
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 8009D4A8
  cmps(c,0,(int32_t)c->r[0],0); // 8009D4AC
  if (!crb(c,2)) { goto L_8009D524; } // 8009D4B0
  c->r[3]=c->r[28]|c->r[28]; // 8009D4B4
  c->r[5]=c->r[1]+0x00000028u; // 8009D4B8
  c->r[4]=0u+0x00000000u; // 8009D4BC
  c->lr=0x8009D4C4u; f_802D27B4(c); // 8009D4C0
  cmps(c,0,(int32_t)c->r[3],0); // 8009D4C4
  if (crb(c,2)) { goto L_8009D524; } // 8009D4C8
  c->r[30]=c->r[31]+0x00000033u; // 8009D4CC
L_8009D4D0:;
  c->r[4]=R32(c->r[1]+0x00000034u); // 8009D4D0
  c->r[3]=c->r[28]|c->r[28]; // 8009D4D4
  c->r[5]=0u+0x00000000u; // 8009D4D8
  c->lr=0x8009D4E0u; f_802D25B8(c); // 8009D4DC
  c->r[31]=c->r[3]|c->r[3]; // 8009D4E0
  c->r[3]=R32(c->r[1]+0x00000034u); // 8009D4E4
  c->r[4]=c->r[30]|c->r[30]; // 8009D4E8
  c->lr=0x8009D4F0u; f_803B4278(c); // 8009D4EC
  cmps(c,0,(int32_t)c->r[3],0); // 8009D4F0
  if (crb(c,2)) { goto L_8009D500; } // 8009D4F4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8009D4F8
  goto L_8009D51C; // 8009D4FC
L_8009D500:;
  c->r[3]=c->r[28]|c->r[28]; // 8009D500
  c->r[4]=c->r[1]+0x00000028u; // 8009D504
  c->lr=0x8009D50Cu; f_802D28A4(c); // 8009D508
  cmps(c,0,(int32_t)c->r[3],0); // 8009D50C
  if (!crb(c,2)) { IRQCHK(c); goto L_8009D4D0; } // 8009D510
  c->r[3]=0u+0x00000000u; // 8009D514
  goto L_8009D57C; // 8009D518
L_8009D51C:;
  c->r[3]=c->r[28]|c->r[28]; // 8009D51C
  c->lr=0x8009D524u; f_802D2930(c); // 8009D520
L_8009D524:;
  c->r[3]=c->r[1]+0x00000018u; // 8009D524
  c->r[4]=0u+0x00000000u; // 8009D528
  c->lr=0x8009D530u; f_802D8E94(c); // 8009D52C
  c->r[4]=R32(c->r[1]+0x0000000Cu); // 8009D530
  c->r[3]=c->r[1]+0x00000018u; // 8009D534
  c->lr=0x8009D53Cu; f_802D8E94(c); // 8009D538
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 8009D53C
  cmps(c,0,(int32_t)c->r[0],0); // 8009D540
  if (crb(c,2)) { goto L_8009D550; } // 8009D544
  cmps(c,0,(int32_t)c->r[3],0); // 8009D548
  if (!crb(c,2)) { goto L_8009D558; } // 8009D54C
L_8009D550:;
  c->r[3]=0u+0x00000000u; // 8009D550
  goto L_8009D57C; // 8009D554
L_8009D558:;
  c->r[3]=c->r[1]+0x00000018u; // 8009D558
  c->r[4]=0u+0x00000000u; // 8009D55C
  c->lr=0x8009D564u; f_802D8F30(c); // 8009D560
  W32(c->r[1]+0x00000014u,c->r[4]); // 8009D564
  c->r[4]=c->r[1]+0x00000010u; // 8009D568
  W32(c->r[1]+0x00000010u,c->r[3]); // 8009D56C
  c->r[3]=c->r[29]|c->r[29]; // 8009D570
  c->lr=0x8009D578u; f_802D90A8(c); // 8009D574
  c->r[3]=0u+0x00000001u; // 8009D578
L_8009D57C:;
  {uint32_t ea=c->r[1]+0x00000040u; for(int i=28;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 8009D57C
  c->r[0]=R32(c->r[1]+0x00000054u); // 8009D580
  c->lr=c->r[0]; // 8009D584
  c->r[1]=c->r[1]+0x00000050u; // 8009D588
  return; // 8009D58C
}

// fn_8009D590
void f_8009D590(Ctx* __restrict c) {
  trace_call(0x8009D590u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8009D590
  c->r[0]=c->lr; // 8009D594
  W32(c->r[1]+0x00000034u,c->r[0]); // 8009D598
  {uint32_t ea=c->r[1]+0x00000020u; for(int i=28;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 8009D59C
  c->r[28]=c->r[4]|c->r[4]; // 8009D5A0
  c->r[29]=c->r[5]|c->r[5]; // 8009D5A4
  c->r[3]=c->r[28]|c->r[28]; // 8009D5A8
  c->lr=0x8009D5B0u; f_802D90E0(c); // 8009D5AC
  c->r[31]=c->r[3]|c->r[3]; // 8009D5B0
  c->r[30]=0u+0x00000000u; // 8009D5B4
  goto L_8009D5F0; // 8009D5B8
L_8009D5BC:;
  c->r[4]=c->r[28]|c->r[28]; // 8009D5BC
  c->r[5]=c->r[30]|c->r[30]; // 8009D5C0
  c->r[3]=c->r[1]+0x00000008u; // 8009D5C4
  c->lr=0x8009D5CCu; f_802D90FC(c); // 8009D5C8
  c->r[3]=c->r[1]+0x00000008u; // 8009D5CC
  c->r[4]=0u+0x00000006u; // 8009D5D0
  c->lr=0x8009D5D8u; f_802D9584(c); // 8009D5D4
  c->lr=0x8009D5DCu; f_803B613C(c); // 8009D5D8
  cmps(c,0,(int32_t)c->r[29],(int32_t)c->r[3]); // 8009D5DC
  if (!crb(c,2)) { goto L_8009D5EC; } // 8009D5E0
  c->r[3]=c->r[30]|c->r[30]; // 8009D5E4
  goto L_8009D5FC; // 8009D5E8
L_8009D5EC:;
  c->r[30]=c->r[30]+0x00000001u; // 8009D5EC
L_8009D5F0:;
  cmps(c,0,(int32_t)c->r[30],(int32_t)c->r[31]); // 8009D5F0
  if (crb(c,0)) { IRQCHK(c); goto L_8009D5BC; } // 8009D5F4
  c->r[3]=0u+0xFFFFFFFFu; // 8009D5F8
L_8009D5FC:;
  {uint32_t ea=c->r[1]+0x00000020u; for(int i=28;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 8009D5FC
  c->r[0]=R32(c->r[1]+0x00000034u); // 8009D600
  c->lr=c->r[0]; // 8009D604
  c->r[1]=c->r[1]+0x00000030u; // 8009D608
  return; // 8009D60C
}

// fn_8009D610
void f_8009D610(Ctx* __restrict c) {
  trace_call(0x8009D610u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8009D610
  c->r[0]=c->lr; // 8009D614
  W32(c->r[1]+0x00000024u,c->r[0]); // 8009D618
  {uint32_t ea=c->r[1]+0x00000010u; for(int i=28;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 8009D61C
  c->r[28]=c->r[4]|c->r[4]; // 8009D620
  c->r[29]=c->r[5]|c->r[5]; // 8009D624
  c->r[31]=c->r[3]+0x000000B4u; // 8009D628
  c->r[0]=R32(c->r[3]+0x000000B4u); // 8009D62C
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 8009D630
  goto L_8009D684; // 8009D634
L_8009D638:;
  cmps(c,0,(int32_t)c->r[29],0); // 8009D638
  if (crb(c,0)) { goto L_8009D654; } // 8009D63C
  c->r[3]=R32(c->r[1]+0x0000000Cu); // 8009D640
  c->r[3]=R32(c->r[3]+0x00000008u); // 8009D644
  c->r[0]=R32(c->r[3]+0x0000000Cu); // 8009D648
  cmps(c,0,(int32_t)c->r[29],(int32_t)c->r[0]); // 8009D64C
  if (!crb(c,2)) { goto L_8009D678; } // 8009D650
L_8009D654:;
  c->r[30]=R32(c->r[1]+0x0000000Cu); // 8009D654
  c->r[3]=c->r[28]|c->r[28]; // 8009D658
  c->r[4]=R32(c->r[30]+0x00000008u); // 8009D65C
  c->r[4]=c->r[4]+0x00000038u; // 8009D660
  c->lr=0x8009D668u; f_803B393C(c); // 8009D664
  cmps(c,0,(int32_t)c->r[3],0); // 8009D668
  if (!crb(c,2)) { goto L_8009D678; } // 8009D66C
  c->r[3]=R32(c->r[30]+0x00000008u); // 8009D670
  goto L_8009D6A0; // 8009D674
L_8009D678:;
  c->r[3]=R32(c->r[1]+0x0000000Cu); // 8009D678
  c->r[0]=R32(c->r[3]+0x00000000u); // 8009D67C
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 8009D680
L_8009D684:;
  W32(c->r[1]+0x00000008u,c->r[31]); // 8009D684
  c->r[3]=c->r[1]+0x0000000Cu; // 8009D688
  c->r[4]=c->r[1]+0x00000008u; // 8009D68C
  c->lr=0x8009D694u; f_8009D6B4(c); // 8009D690
  cmps(c,0,(int32_t)c->r[3],0); // 8009D694
  if (!crb(c,2)) { IRQCHK(c); goto L_8009D638; } // 8009D698
  c->r[3]=0u+0x00000000u; // 8009D69C
L_8009D6A0:;
  {uint32_t ea=c->r[1]+0x00000010u; for(int i=28;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 8009D6A0
  c->r[0]=R32(c->r[1]+0x00000024u); // 8009D6A4
  c->lr=c->r[0]; // 8009D6A8
  c->r[1]=c->r[1]+0x00000020u; // 8009D6AC
  return; // 8009D6B0
}

// fn_8009D6B4
void f_8009D6B4(Ctx* __restrict c) {
  trace_call(0x8009D6B4u);
  c->r[5]=R32(c->r[3]+0x00000000u); // 8009D6B4
  c->r[3]=R32(c->r[4]+0x00000000u); // 8009D6B8
  c->r[4]=R32(c->r[5]+0x00000008u); // 8009D6BC
  c->r[0]=R32(c->r[3]+0x00000008u); // 8009D6C0
  c->r[3]=c->r[0]-c->r[4]; // 8009D6C4
  c->r[0]=addc(c,c->r[3],0xFFFFFFFFu,0); // 8009D6C8
  c->r[3]=addc(c,~c->r[0],c->r[3],c->xer_ca); // 8009D6CC
  return; // 8009D6D0
}

// fn_8009D6D4
void f_8009D6D4(Ctx* __restrict c) {
  trace_call(0x8009D6D4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8009D6D4
  c->r[0]=c->lr; // 8009D6D8
  W32(c->r[1]+0x00000014u,c->r[0]); // 8009D6DC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8009D6E0
  c->r[31]=c->r[3]|c->r[3]; // 8009D6E4
  c->lr=0x8009D6ECu; f_800506C0(c); // 8009D6E8
  c->r[0]=0u+0xFFFFFFFFu; // 8009D6EC
  W32(c->r[31]+0x00000008u,c->r[31]); // 8009D6F0
  c->r[3]=c->r[31]|c->r[31]; // 8009D6F4
  W32(c->r[31]+0x0000000Cu,c->r[0]); // 8009D6F8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8009D6FC
  c->r[0]=R32(c->r[1]+0x00000014u); // 8009D700
  c->lr=c->r[0]; // 8009D704
  c->r[1]=c->r[1]+0x00000010u; // 8009D708
  return; // 8009D70C
}

// fn_8009D710
void f_8009D710(Ctx* __restrict c) {
  trace_call(0x8009D710u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8009D710
  c->r[0]=c->lr; // 8009D714
  W32(c->r[1]+0x00000014u,c->r[0]); // 8009D718
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8009D71C
  c->r[31]=c->r[3]|c->r[3]; // 8009D720
  c->lr=0x8009D728u; f_8009D324(c); // 8009D724
  c->r[0]=R32(c->r[3]+0x00000028u); // 8009D728
  cmps(c,0,(int32_t)c->r[0],0); // 8009D72C
  if (crb(c,2)) { goto L_8009D750; } // 8009D730
  c->r[3]=c->r[0]|c->r[0]; // 8009D734
  c->r[4]=c->r[31]|c->r[31]; // 8009D738
  c->r[12]=R32(c->r[3]+0x00000000u); // 8009D73C
  c->r[12]=R32(c->r[12]+0x00000008u); // 8009D740
  c->ctr=c->r[12]; // 8009D744
  if (true) { c->lr=0x8009D74Cu; dispatch(c,c->ctr); } // 8009D748
  goto L_8009D75C; // 8009D74C
L_8009D750:;
  c->r[4]=c->r[31]|c->r[31]; // 8009D750
  c->r[3]=c->r[3]+0x00000018u; // 8009D754
  c->lr=0x8009D75Cu; f_803C4D08(c); // 8009D758
L_8009D75C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8009D75C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8009D760
  c->lr=c->r[0]; // 8009D764
  c->r[1]=c->r[1]+0x00000010u; // 8009D768
  return; // 8009D76C
}

// dtor_8009D770
void f_8009D770(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8009D770
  c->r[0]=c->lr; // 8009D774
  W32(c->r[1]+0x00000024u,c->r[0]); // 8009D778
  {uint32_t ea=c->r[1]+0x00000010u; for(int i=28;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 8009D77C
  c->r[28]=c->r[3]|c->r[3]; // 8009D780
  c->lr=0x8009D788u; f_80053100(c); // 8009D784
  c->r[29]=R32(c->r[3]+0x00000000u); // 8009D788
  c->r[30]=c->r[3]|c->r[3]; // 8009D78C
  c->r[31]=0u+0xFFFFFFFFu; // 8009D790
  goto L_8009D7DC; // 8009D794
L_8009D798:;
  c->r[3]=R32(c->r[5]+0x00000014u); // 8009D798
  c->r[0]=R32(c->r[5]+0x00000010u); // 8009D79C
  cmpu(c,0,c->r[28],c->r[3]); // 8009D7A0
  c->r[0]=c->r[3]+c->r[0]; // 8009D7A4
  if (!crb(c,0)) { goto L_8009D7B4; } // 8009D7A8
  c->r[0]=0u+0x00000000u; // 8009D7AC
  goto L_8009D7BC; // 8009D7B0
L_8009D7B4:;
  c->r[0]=addc(c,~c->r[28],c->r[0],1); // 8009D7B4
  c->r[0]=addc(c,~c->r[31],0,c->xer_ca); // 8009D7B8
L_8009D7BC:;
  cmps(c,0,(int32_t)c->r[0],0); // 8009D7BC
  if (crb(c,2)) { goto L_8009D7D8; } // 8009D7C0
  cmps(c,0,(int32_t)c->r[28],0); // 8009D7C4
  if (crb(c,2)) { goto L_8009D7D8; } // 8009D7C8
  c->r[4]=c->r[28]|c->r[28]; // 8009D7CC
  c->r[3]=c->r[5]+0x00000018u; // 8009D7D0
  c->lr=0x8009D7D8u; f_803C4D18(c); // 8009D7D4
L_8009D7D8:;
  c->r[29]=R32(c->r[29]+0x00000000u); // 8009D7D8
L_8009D7DC:;
  c->r[5]=R32(c->r[29]+0x00000008u); // 8009D7DC
  c->r[0]=R32(c->r[30]+0x00000008u); // 8009D7E0
  cmpu(c,0,c->r[5],c->r[0]); // 8009D7E4
  if (!crb(c,2)) { IRQCHK(c); goto L_8009D798; } // 8009D7E8
  {uint32_t ea=c->r[1]+0x00000010u; for(int i=28;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 8009D7EC
  c->r[0]=R32(c->r[1]+0x00000024u); // 8009D7F0
  c->lr=c->r[0]; // 8009D7F4
  c->r[1]=c->r[1]+0x00000020u; // 8009D7F8
  return; // 8009D7FC
}

// fn_8009D800
void f_8009D800(Ctx* __restrict c) {
  trace_call(0x8009D800u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8009D800
  c->r[0]=c->lr; // 8009D804
  W32(c->r[1]+0x00000044u,c->r[0]); // 8009D808
  {uint32_t ea=c->r[1]+0x00000028u; for(int i=26;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 8009D80C
  c->r[30]=c->r[3]|c->r[3]; // 8009D810
  c->r[29]=c->r[4]|c->r[4]; // 8009D814
  c->r[31]=c->r[5]|c->r[5]; // 8009D818
  c->r[26]=c->r[6]|c->r[6]; // 8009D81C
  c->r[3]=0u+0x00000070u; // 8009D820
  c->r[0]=R32(c->r[5]+0x00000008u); // 8009D824
  c->r[27]=c->r[5]+c->r[0]; // 8009D828
  c->lr=0x8009D830u; f_8009D710(c); // 8009D82C
  cmps(c,0,(int32_t)c->r[3],0); // 8009D830
  c->r[28]=c->r[3]|c->r[3]; // 8009D834
  if (crb(c,2)) { goto L_8009D840; } // 8009D838
  c->lr=0x8009D840u; f_8009F53C(c); // 8009D83C
L_8009D840:;
  W32(c->r[28]+0x0000000Cu,c->r[26]); // 8009D840
  c->r[4]=c->r[27]|c->r[27]; // 8009D844
  c->r[3]=c->r[28]+0x00000038u; // 8009D848
  c->lr=0x8009D850u; f_803B37C0(c); // 8009D84C
  c->r[0]=R32(c->r[31]+0x00000014u); // 8009D850
  cmps(c,0,(int32_t)c->r[0],1); // 8009D854
  if (!crb(c,2)) { goto L_8009D910; } // 8009D858
  c->r[0]=R32(c->r[31]+0x00000008u); // 8009D85C
  c->r[3]=R32(c->r[31]+0x0000000Cu); // 8009D860
  c->r[0]=c->r[31]+c->r[0]; // 8009D864
  c->r[0]=R32(c->r[3]+c->r[0]); // 8009D868
  cmps(c,0,(int32_t)c->r[0],0); // 8009D86C
  if (!crb(c,0)) { goto L_8009D910; } // 8009D870
  c->r[3]=c->r[1]+0x00000008u; // 8009D874
  c->lr=0x8009D87Cu; f_802D9098(c); // 8009D878
  c->r[3]=c->r[30]|c->r[30]; // 8009D87C
  c->r[4]=c->r[29]|c->r[29]; // 8009D880
  c->r[5]=c->r[1]+0x00000008u; // 8009D884
  c->lr=0x8009D88Cu; f_8009D46C(c); // 8009D888
  c->r[3]=c->r[1]+0x00000008u; // 8009D88C
  c->lr=0x8009D894u; f_802D90E0(c); // 8009D890
  c->r[29]=c->r[3]|c->r[3]; // 8009D894
  c->r[26]=0u+0x00000000u; // 8009D898
  goto L_8009D8F4; // 8009D89C
L_8009D8A0:;
  c->r[5]=c->r[26]|c->r[26]; // 8009D8A0
  c->r[3]=c->r[1]+0x00000010u; // 8009D8A4
  c->r[4]=c->r[1]+0x00000008u; // 8009D8A8
  c->lr=0x8009D8B0u; f_802D90FC(c); // 8009D8AC
  c->r[3]=c->r[1]+0x00000010u; // 8009D8B0
  c->r[4]=0u+0x00000006u; // 8009D8B4
  c->lr=0x8009D8BCu; f_802D9584(c); // 8009D8B8
  c->lr=0x8009D8C0u; f_803B613C(c); // 8009D8BC
  c->r[31]=c->r[3]|c->r[3]; // 8009D8C0
  c->r[3]=0u+0x00000010u; // 8009D8C4
  c->lr=0x8009D8CCu; f_8009D710(c); // 8009D8C8
  cmps(c,0,(int32_t)c->r[3],0); // 8009D8CC
  c->r[27]=c->r[3]|c->r[3]; // 8009D8D0
  if (crb(c,2)) { goto L_8009D8DC; } // 8009D8D4
  c->lr=0x8009D8DCu; f_8009D6D4(c); // 8009D8D8
L_8009D8DC:;
  c->r[3]=c->r[28]+0x00000058u; // 8009D8DC
  W32(c->r[27]+0x0000000Cu,c->r[31]); // 8009D8E0
  c->r[4]=c->r[3]|c->r[3]; // 8009D8E4
  c->r[5]=c->r[27]|c->r[27]; // 8009D8E8
  c->lr=0x8009D8F0u; f_802DDCA8(c); // 8009D8EC
  c->r[26]=c->r[26]+0x00000001u; // 8009D8F0
L_8009D8F4:;
  cmps(c,0,(int32_t)c->r[26],(int32_t)c->r[29]); // 8009D8F4
  if (crb(c,0)) { IRQCHK(c); goto L_8009D8A0; } // 8009D8F8
  c->r[3]=c->r[30]+0x000000B4u; // 8009D8FC
  c->r[5]=c->r[28]|c->r[28]; // 8009D900
  c->r[4]=c->r[3]|c->r[3]; // 8009D904
  c->lr=0x8009D90Cu; f_802DDCA8(c); // 8009D908
  goto L_8009D980; // 8009D90C
L_8009D910:;
  c->r[26]=0u+0x00000000u; // 8009D910
  goto L_8009D964; // 8009D914
L_8009D918:;
  c->r[0]=R32(c->r[31]+0x00000010u); // 8009D918
  c->r[3]=0u+0x00000010u; // 8009D91C
  c->r[6]=R32(c->r[31]+0x00000008u); // 8009D920
  c->r[4]=(uint32_t)((int32_t)c->r[26]*(int32_t)c->r[0]); // 8009D924
  c->r[5]=R32(c->r[31]+0x0000000Cu); // 8009D928
  c->r[0]=c->r[31]+c->r[6]; // 8009D92C
  c->r[0]=c->r[5]+c->r[0]; // 8009D930
  c->r[29]=R32(c->r[4]+c->r[0]); // 8009D934
  c->lr=0x8009D93Cu; f_8009D710(c); // 8009D938
  cmps(c,0,(int32_t)c->r[3],0); // 8009D93C
  c->r[27]=c->r[3]|c->r[3]; // 8009D940
  if (crb(c,2)) { goto L_8009D94C; } // 8009D944
  c->lr=0x8009D94Cu; f_8009D6D4(c); // 8009D948
L_8009D94C:;
  c->r[3]=c->r[28]+0x00000058u; // 8009D94C
  W32(c->r[27]+0x0000000Cu,c->r[29]); // 8009D950
  c->r[4]=c->r[3]|c->r[3]; // 8009D954
  c->r[5]=c->r[27]|c->r[27]; // 8009D958
  c->lr=0x8009D960u; f_802DDCA8(c); // 8009D95C
  c->r[26]=c->r[26]+0x00000001u; // 8009D960
L_8009D964:;
  c->r[0]=R32(c->r[31]+0x00000014u); // 8009D964
  cmps(c,0,(int32_t)c->r[26],(int32_t)c->r[0]); // 8009D968
  if (crb(c,0)) { IRQCHK(c); goto L_8009D918; } // 8009D96C
  c->r[3]=c->r[30]+0x000000B4u; // 8009D970
  c->r[5]=c->r[28]|c->r[28]; // 8009D974
  c->r[4]=c->r[3]|c->r[3]; // 8009D978
  c->lr=0x8009D980u; f_802DDCA8(c); // 8009D97C
L_8009D980:;
  {uint32_t ea=c->r[1]+0x00000028u; for(int i=26;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 8009D980
  c->r[0]=R32(c->r[1]+0x00000044u); // 8009D984
  c->lr=c->r[0]; // 8009D988
  c->r[1]=c->r[1]+0x00000040u; // 8009D98C
  return; // 8009D990
}

// fn_8009D994
void f_8009D994(Ctx* __restrict c) {
  trace_call(0x8009D994u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8009D994
  c->r[0]=c->lr; // 8009D998
  c->r[4]=c->r[6]|c->r[6]; // 8009D99C
  c->r[5]=0u+0xFFFFFFFFu; // 8009D9A0
  W32(c->r[1]+0x00000014u,c->r[0]); // 8009D9A4
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 8009D9A8
  c->r[30]=c->r[3]|c->r[3]; // 8009D9AC
  c->lr=0x8009D9B4u; f_8009D610(c); // 8009D9B0
  c->r[31]=c->r[3]|c->r[3]; // 8009D9B4
  c->r[3]=c->r[30]+0x000000B4u; // 8009D9B8
  c->r[4]=c->r[31]|c->r[31]; // 8009D9BC
  c->lr=0x8009D9C4u; f_802DDD08(c); // 8009D9C0
  c->r[3]=c->r[31]|c->r[31]; // 8009D9C4
  c->r[4]=0u+0x00000001u; // 8009D9C8
  c->lr=0x8009D9D0u; f_8009F680(c); // 8009D9CC
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 8009D9D0
  c->r[3]=0u+0x00000001u; // 8009D9D4
  c->r[0]=R32(c->r[1]+0x00000014u); // 8009D9D8
  c->lr=c->r[0]; // 8009D9DC
  c->r[1]=c->r[1]+0x00000010u; // 8009D9E0
  return; // 8009D9E4
}

// fn_8009D9E8
void f_8009D9E8(Ctx* __restrict c) {
  trace_call(0x8009D9E8u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8009D9E8
  c->r[0]=c->lr; // 8009D9EC
  W32(c->r[1]+0x00000034u,c->r[0]); // 8009D9F0
  {uint32_t ea=c->r[1]+0x00000020u; for(int i=28;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 8009D9F4
  c->r[28]=c->r[3]|c->r[3]; // 8009D9F8
  c->r[29]=c->r[4]|c->r[4]; // 8009D9FC
  c->r[30]=c->r[5]|c->r[5]; // 8009DA00
  c->r[31]=c->r[6]|c->r[6]; // 8009DA04
  c->r[3]=c->r[1]+0x00000010u; // 8009DA08
  c->lr=0x8009DA10u; f_802D9098(c); // 8009DA0C
  c->r[3]=c->r[28]|c->r[28]; // 8009DA10
  c->r[4]=c->r[29]|c->r[29]; // 8009DA14
  c->r[5]=c->r[1]+0x00000010u; // 8009DA18
  c->lr=0x8009DA20u; f_8009D46C(c); // 8009DA1C
  c->r[3]=c->r[28]|c->r[28]; // 8009DA20
  c->r[4]=c->r[31]|c->r[31]; // 8009DA24
  c->r[5]=0u+0xFFFFFFFFu; // 8009DA28
  c->lr=0x8009DA30u; f_8009D610(c); // 8009DA2C
  c->r[0]=R32(c->r[3]+0x00000058u); // 8009DA30
  c->r[31]=c->r[3]+0x00000058u; // 8009DA34
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 8009DA38
  goto L_8009DA68; // 8009DA3C
L_8009DA40:;
  c->r[5]=R32(c->r[1]+0x0000000Cu); // 8009DA40
  c->r[4]=c->r[30]|c->r[30]; // 8009DA44
  c->r[3]=c->r[28]+0x000000E4u; // 8009DA48
  c->r[6]=0u+0x00000000u; // 8009DA4C
  c->r[5]=R32(c->r[5]+0x00000008u); // 8009DA50
  c->r[5]=R32(c->r[5]+0x0000000Cu); // 8009DA54
  c->lr=0x8009DA5Cu; f_8009F178(c); // 8009DA58
  c->r[3]=R32(c->r[1]+0x0000000Cu); // 8009DA5C
  c->r[0]=R32(c->r[3]+0x00000000u); // 8009DA60
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 8009DA64
L_8009DA68:;
  W32(c->r[1]+0x00000008u,c->r[31]); // 8009DA68
  c->r[3]=c->r[1]+0x0000000Cu; // 8009DA6C
  c->r[4]=c->r[1]+0x00000008u; // 8009DA70
  c->lr=0x8009DA78u; f_8009B618(c); // 8009DA74
  cmps(c,0,(int32_t)c->r[3],0); // 8009DA78
  if (!crb(c,2)) { IRQCHK(c); goto L_8009DA40; } // 8009DA7C
  {uint32_t ea=c->r[1]+0x00000020u; for(int i=28;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 8009DA80
  c->r[3]=0u+0x00000001u; // 8009DA84
  c->r[0]=R32(c->r[1]+0x00000034u); // 8009DA88
  c->lr=c->r[0]; // 8009DA8C
  c->r[1]=c->r[1]+0x00000030u; // 8009DA90
  return; // 8009DA94
}

// fn_8009DA98
void f_8009DA98(Ctx* __restrict c) {
  trace_call(0x8009DA98u);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8009DA98
  c->r[0]=c->lr; // 8009DA9C
  c->r[4]=c->r[6]|c->r[6]; // 8009DAA0
  W32(c->r[1]+0x00000054u,c->r[0]); // 8009DAA4
  {uint32_t ea=c->r[1]+0x00000034u; for(int i=25;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 8009DAA8
  c->r[26]=c->r[5]|c->r[5]; // 8009DAAC
  c->r[30]=c->r[3]|c->r[3]; // 8009DAB0
  c->r[25]=c->r[7]|c->r[7]; // 8009DAB4
  c->r[5]=0u+0xFFFFFFFFu; // 8009DAB8
  c->lr=0x8009DAC0u; f_8009D610(c); // 8009DABC
  cmps(c,0,(int32_t)c->r[3],0); // 8009DAC0
  c->r[29]=c->r[3]|c->r[3]; // 8009DAC4
  if (!crb(c,2)) { goto L_8009DAD4; } // 8009DAC8
  c->r[3]=0u+0x00000000u; // 8009DACC
  goto L_8009DC74; // 8009DAD0
L_8009DAD4:;
  c->r[27]=R32(c->r[3]+0x0000000Cu); // 8009DAD4
  c->r[0]=0u+0x00000000u; // 8009DAD8
  c->r[31]=c->r[3]+0x00000058u; // 8009DADC
  c->r[3]=c->r[1]+0x00000008u; // 8009DAE0
  W8(c->r[1]+0x00000008u,c->r[0]); // 8009DAE4
  c->lr=0x8009DAECu; f_8004DBC0(c); // 8009DAE8
  c->r[4]=c->r[27]|c->r[27]; // 8009DAEC
  c->lr=0x8009DAF4u; f_800992D4(c); // 8009DAF0
  c->r[27]=c->r[3]|c->r[3]; // 8009DAF4
  c->r[3]=c->r[1]+0x00000018u; // 8009DAF8
  c->lr=0x8009DB00u; f_802D9098(c); // 8009DAFC
  c->r[3]=c->r[30]|c->r[30]; // 8009DB00
  c->r[4]=c->r[27]|c->r[27]; // 8009DB04
  c->r[5]=c->r[1]+0x00000018u; // 8009DB08
  c->lr=0x8009DB10u; f_8009D46C(c); // 8009DB0C
  c->r[3]=0u+0x00000024u; // 8009DB10
  c->lr=0x8009DB18u; f_8009D710(c); // 8009DB14
  cmps(c,0,(int32_t)c->r[3],0); // 8009DB18
  c->r[28]=c->r[3]|c->r[3]; // 8009DB1C
  if (crb(c,2)) { goto L_8009DB2C; } // 8009DB20
  c->r[4]=0u+0x00000002u; // 8009DB24
  c->lr=0x8009DB2Cu; f_800A06E0(c); // 8009DB28
L_8009DB2C:;
  c->r[3]=c->r[30]+0x000000F0u; // 8009DB2C
  c->r[5]=c->r[28]|c->r[28]; // 8009DB30
  c->r[4]=c->r[3]|c->r[3]; // 8009DB34
  c->lr=0x8009DB3Cu; f_802DDCA8(c); // 8009DB38
  W32(c->r[28]+0x0000001Cu,c->r[26]); // 8009DB3C
  W32(c->r[28]+0x00000020u,c->r[25]); // 8009DB40
  c->r[0]=R32(c->r[31]+0x00000000u); // 8009DB44
  W32(c->r[1]+0x00000010u,c->r[0]); // 8009DB48
  goto L_8009DC58; // 8009DB4C
L_8009DB50:;
  c->r[5]=R32(c->r[1]+0x00000010u); // 8009DB50
  c->r[3]=c->r[30]+0x000000D8u; // 8009DB54
  c->r[4]=R32(c->r[29]+0x0000000Cu); // 8009DB58
  c->r[5]=R32(c->r[5]+0x00000008u); // 8009DB5C
  c->r[5]=R32(c->r[5]+0x0000000Cu); // 8009DB60
  c->lr=0x8009DB68u; f_8009F3B8(c); // 8009DB64
  cmps(c,0,(int32_t)c->r[3],0); // 8009DB68
  if (crb(c,2)) { goto L_8009DC4C; } // 8009DB6C
  c->r[5]=R32(c->r[1]+0x00000010u); // 8009DB70
  c->r[3]=c->r[30]+0x000000E4u; // 8009DB74
  c->r[4]=R32(c->r[29]+0x0000000Cu); // 8009DB78
  c->r[5]=R32(c->r[5]+0x00000008u); // 8009DB7C
  c->r[5]=R32(c->r[5]+0x0000000Cu); // 8009DB80
  c->lr=0x8009DB88u; f_8009F3B8(c); // 8009DB84
  cmps(c,0,(int32_t)c->r[3],0); // 8009DB88
  if (crb(c,2)) { goto L_8009DBB0; } // 8009DB8C
  c->r[5]=R32(c->r[1]+0x00000010u); // 8009DB90
  c->r[3]=c->r[30]+0x000000E4u; // 8009DB94
  c->r[4]=R32(c->r[29]+0x0000000Cu); // 8009DB98
  c->r[6]=0u+0x00000000u; // 8009DB9C
  c->r[5]=R32(c->r[5]+0x00000008u); // 8009DBA0
  c->r[5]=R32(c->r[5]+0x0000000Cu); // 8009DBA4
  c->lr=0x8009DBACu; f_8009F27C(c); // 8009DBA8
  goto L_8009DC4C; // 8009DBAC
L_8009DBB0:;
  c->r[5]=R32(c->r[1]+0x00000010u); // 8009DBB0
  c->r[3]=c->r[30]|c->r[30]; // 8009DBB4
  c->r[4]=c->r[1]+0x00000018u; // 8009DBB8
  c->r[5]=R32(c->r[5]+0x00000008u); // 8009DBBC
  c->r[5]=R32(c->r[5]+0x0000000Cu); // 8009DBC0
  c->lr=0x8009DBC8u; f_8009D590(c); // 8009DBC4
  cmps(c,0,(int32_t)c->r[3],0); // 8009DBC8
  if (crb(c,0)) { goto L_8009DC4C; } // 8009DBCC
  c->r[5]=c->r[3]|c->r[3]; // 8009DBD0
  c->r[3]=c->r[1]+0x00000020u; // 8009DBD4
  c->r[4]=c->r[1]+0x00000018u; // 8009DBD8
  c->lr=0x8009DBE0u; f_802D90FC(c); // 8009DBDC
  c->r[3]=c->r[1]+0x00000020u; // 8009DBE0
  c->r[4]=0u+0x00000000u; // 8009DBE4
  c->lr=0x8009DBECu; f_802D9584(c); // 8009DBE8
  c->r[26]=c->r[3]|c->r[3]; // 8009DBEC
  c->r[3]=c->r[1]+0x00000020u; // 8009DBF0
  c->r[4]=0u+0x00000009u; // 8009DBF4
  c->lr=0x8009DBFCu; f_802D9584(c); // 8009DBF8
  c->r[25]=c->r[3]|c->r[3]; // 8009DBFC
  c->r[3]=0u+0x00000080u; // 8009DC00
  c->lr=0x8009DC08u; f_8009D710(c); // 8009DC04
  cmps(c,0,(int32_t)c->r[3],0); // 8009DC08
  c->r[27]=c->r[3]|c->r[3]; // 8009DC0C
  if (crb(c,2)) { goto L_8009DC20; } // 8009DC10
  c->r[4]=c->r[26]|c->r[26]; // 8009DC14
  c->r[5]=c->r[25]|c->r[25]; // 8009DC18
  c->lr=0x8009DC20u; f_800A03D0(c); // 8009DC1C
L_8009DC20:;
  c->r[3]=c->r[28]+0x00000010u; // 8009DC20
  c->r[5]=c->r[27]|c->r[27]; // 8009DC24
  c->r[4]=c->r[3]|c->r[3]; // 8009DC28
  c->lr=0x8009DC30u; f_802DDCA8(c); // 8009DC2C
  c->r[5]=R32(c->r[1]+0x00000010u); // 8009DC30
  c->r[3]=c->r[30]+0x000000D8u; // 8009DC34
  c->r[4]=R32(c->r[29]+0x0000000Cu); // 8009DC38
  c->r[6]=0u+0x00000000u; // 8009DC3C
  c->r[5]=R32(c->r[5]+0x00000008u); // 8009DC40
  c->r[5]=R32(c->r[5]+0x0000000Cu); // 8009DC44
  c->lr=0x8009DC4Cu; f_8009F27C(c); // 8009DC48
L_8009DC4C:;
  c->r[3]=R32(c->r[1]+0x00000010u); // 8009DC4C
  c->r[0]=R32(c->r[3]+0x00000000u); // 8009DC50
  W32(c->r[1]+0x00000010u,c->r[0]); // 8009DC54
L_8009DC58:;
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8009DC58
  c->r[3]=c->r[1]+0x00000010u; // 8009DC5C
  c->r[4]=c->r[1]+0x0000000Cu; // 8009DC60
  c->lr=0x8009DC68u; f_8009B618(c); // 8009DC64
  cmps(c,0,(int32_t)c->r[3],0); // 8009DC68
  if (!crb(c,2)) { IRQCHK(c); goto L_8009DB50; } // 8009DC6C
  c->r[3]=0u+0x00000001u; // 8009DC70
L_8009DC74:;
  {uint32_t ea=c->r[1]+0x00000034u; for(int i=25;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 8009DC74
  c->r[0]=R32(c->r[1]+0x00000054u); // 8009DC78
  c->lr=c->r[0]; // 8009DC7C
  c->r[1]=c->r[1]+0x00000050u; // 8009DC80
  return; // 8009DC84
}

// fn_8009DC88
void f_8009DC88(Ctx* __restrict c) {
  trace_call(0x8009DC88u);
  c->r[8]=c->r[5]|c->r[5]; // 8009DC88
  c->r[5]=c->r[6]|c->r[6]; // 8009DC8C
  c->r[0]=R32(c->r[8]+0x00000008u); // 8009DC90
  c->r[7]=R32(c->r[8]+0x00000018u); // 8009DC94
  c->r[6]=c->r[8]+c->r[0]; // 8009DC98
  c->r[7]=c->r[7]+0xFFFFFFFFu; // 8009DC9C
  f_8009DA98(c); return; // 8009DCA0
}

// fn_8009DCA4
void f_8009DCA4(Ctx* __restrict c) {
  trace_call(0x8009DCA4u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8009DCA4
  c->r[0]=c->lr; // 8009DCA8
  c->r[4]=c->r[6]|c->r[6]; // 8009DCAC
  c->r[5]=0u+0xFFFFFFFFu; // 8009DCB0
  W32(c->r[1]+0x00000044u,c->r[0]); // 8009DCB4
  {uint32_t ea=c->r[1]+0x00000030u; for(int i=28;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 8009DCB8
  c->lr=0x8009DCC0u; f_8009D610(c); // 8009DCBC
  cmps(c,0,(int32_t)c->r[3],0); // 8009DCC0
  c->r[30]=c->r[3]|c->r[3]; // 8009DCC4
  if (!crb(c,2)) { goto L_8009DCD4; } // 8009DCC8
  c->r[3]=0u+0x00000000u; // 8009DCCC
  goto L_8009DE04; // 8009DCD0
L_8009DCD4:;
  c->r[0]=R32(c->r[3]+0x00000058u); // 8009DCD4
  c->r[29]=c->r[3]+0x00000058u; // 8009DCD8
  W32(c->r[1]+0x00000028u,c->r[0]); // 8009DCDC
  c->r[31]=0u+0x00000000u; // 8009DCE0
  goto L_8009DDE8; // 8009DCE4
L_8009DCE8:;
  W8(c->r[1]+0x0000000Cu,c->r[31]); // 8009DCE8
  c->r[3]=c->r[1]+0x0000000Cu; // 8009DCEC
  c->lr=0x8009DCF4u; f_8004BDA8(c); // 8009DCF0
  c->r[0]=R32(c->r[3]+0x00000000u); // 8009DCF4
  c->r[28]=c->r[3]|c->r[3]; // 8009DCF8
  W32(c->r[1]+0x00000024u,c->r[0]); // 8009DCFC
  goto L_8009DD4C; // 8009DD00
L_8009DD04:;
  c->r[3]=R32(c->r[1]+0x00000024u); // 8009DD04
  c->r[4]=R32(c->r[30]+0x0000000Cu); // 8009DD08
  c->r[3]=R32(c->r[3]+0x00000008u); // 8009DD0C
  c->r[5]=R32(c->r[3]+0x00000448u); // 8009DD10
  c->r[0]=R32(c->r[5]+0x0000000Cu); // 8009DD14
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 8009DD18
  if (!crb(c,2)) { goto L_8009DD3C; } // 8009DD1C
  c->r[4]=R32(c->r[1]+0x00000028u); // 8009DD20
  c->r[0]=R32(c->r[5]+0x00000004u); // 8009DD24
  c->r[4]=R32(c->r[4]+0x00000008u); // 8009DD28
  c->r[4]=R32(c->r[4]+0x0000000Cu); // 8009DD2C
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 8009DD30
  if (!crb(c,2)) { goto L_8009DD3C; } // 8009DD34
  c->lr=0x8009DD3Cu; f_8031749C(c); // 8009DD38
L_8009DD3C:;
  c->r[3]=c->r[1]+0x0000001Cu; // 8009DD3C
  c->r[4]=c->r[1]+0x00000024u; // 8009DD40
  c->r[5]=0u+0x00000000u; // 8009DD44
  c->lr=0x8009DD4Cu; f_80067DB0(c); // 8009DD48
L_8009DD4C:;
  W32(c->r[1]+0x00000018u,c->r[28]); // 8009DD4C
  c->r[3]=c->r[1]+0x00000024u; // 8009DD50
  c->r[4]=c->r[1]+0x00000018u; // 8009DD54
  c->lr=0x8009DD5Cu; f_8004BEB8(c); // 8009DD58
  cmps(c,0,(int32_t)c->r[3],0); // 8009DD5C
  if (!crb(c,2)) { IRQCHK(c); goto L_8009DD04; } // 8009DD60
  W8(c->r[1]+0x00000008u,c->r[31]); // 8009DD64
  c->r[3]=c->r[1]+0x00000008u; // 8009DD68
  c->lr=0x8009DD70u; f_8004BE20(c); // 8009DD6C
  c->r[0]=R32(c->r[3]+0x00000000u); // 8009DD70
  c->r[28]=c->r[3]|c->r[3]; // 8009DD74
  W32(c->r[1]+0x00000020u,c->r[0]); // 8009DD78
  goto L_8009DDC4; // 8009DD7C
L_8009DD80:;
  c->r[3]=R32(c->r[1]+0x00000020u); // 8009DD80
  c->r[4]=R32(c->r[30]+0x0000000Cu); // 8009DD84
  c->r[3]=R32(c->r[3]+0x00000008u); // 8009DD88
  c->r[5]=R32(c->r[3]+0x00000448u); // 8009DD8C
  c->r[0]=R32(c->r[5]+0x0000000Cu); // 8009DD90
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 8009DD94
  if (!crb(c,2)) { goto L_8009DDB8; } // 8009DD98
  c->r[4]=R32(c->r[1]+0x00000028u); // 8009DD9C
  c->r[0]=R32(c->r[5]+0x00000004u); // 8009DDA0
  c->r[4]=R32(c->r[4]+0x00000008u); // 8009DDA4
  c->r[4]=R32(c->r[4]+0x0000000Cu); // 8009DDA8
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 8009DDAC
  if (!crb(c,2)) { goto L_8009DDB8; } // 8009DDB0
  c->lr=0x8009DDB8u; f_8031749C(c); // 8009DDB4
L_8009DDB8:;
  c->r[3]=R32(c->r[1]+0x00000020u); // 8009DDB8
  c->r[0]=R32(c->r[3]+0x00000000u); // 8009DDBC
  W32(c->r[1]+0x00000020u,c->r[0]); // 8009DDC0
L_8009DDC4:;
  W32(c->r[1]+0x00000014u,c->r[28]); // 8009DDC4
  c->r[3]=c->r[1]+0x00000020u; // 8009DDC8
  c->r[4]=c->r[1]+0x00000014u; // 8009DDCC
  c->lr=0x8009DDD4u; f_8004BE98(c); // 8009DDD0
  cmps(c,0,(int32_t)c->r[3],0); // 8009DDD4
  if (!crb(c,2)) { IRQCHK(c); goto L_8009DD80; } // 8009DDD8
  c->r[3]=R32(c->r[1]+0x00000028u); // 8009DDDC
  c->r[0]=R32(c->r[3]+0x00000000u); // 8009DDE0
  W32(c->r[1]+0x00000028u,c->r[0]); // 8009DDE4
L_8009DDE8:;
  W32(c->r[1]+0x00000010u,c->r[29]); // 8009DDE8
  c->r[3]=c->r[1]+0x00000028u; // 8009DDEC
  c->r[4]=c->r[1]+0x00000010u; // 8009DDF0
  c->lr=0x8009DDF8u; f_8009B618(c); // 8009DDF4
  cmps(c,0,(int32_t)c->r[3],0); // 8009DDF8
  if (!crb(c,2)) { IRQCHK(c); goto L_8009DCE8; } // 8009DDFC
  c->r[3]=0u+0x00000001u; // 8009DE00
L_8009DE04:;
  {uint32_t ea=c->r[1]+0x00000030u; for(int i=28;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 8009DE04
  c->r[0]=R32(c->r[1]+0x00000044u); // 8009DE08
  c->lr=c->r[0]; // 8009DE0C
  c->r[1]=c->r[1]+0x00000040u; // 8009DE10
  return; // 8009DE14
}

// fn_8009DE18
void f_8009DE18(Ctx* __restrict c) {
  trace_call(0x8009DE18u);
  {uint32_t ea=c->r[1]+0xFFFFFF70u; W32(ea,c->r[1]); c->r[1]=ea;} // 8009DE18
  c->r[0]=c->lr; // 8009DE1C
  W32(c->r[1]+0x00000094u,c->r[0]); // 8009DE20
  {uint32_t ea=c->r[1]+0x00000060u; for(int i=20;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 8009DE24
  c->r[29]=c->r[3]|c->r[3]; // 8009DE28
  c->r[30]=c->r[4]|c->r[4]; // 8009DE2C
  c->r[31]=c->r[5]|c->r[5]; // 8009DE30
  c->r[20]=c->r[6]|c->r[6]; // 8009DE34
  c->r[3]=c->r[1]+0x00000020u; // 8009DE38
  c->lr=0x8009DE40u; f_802D9098(c); // 8009DE3C
  c->r[3]=c->r[29]|c->r[29]; // 8009DE40
  c->r[4]=c->r[30]|c->r[30]; // 8009DE44
  c->r[5]=c->r[1]+0x00000020u; // 8009DE48
  c->lr=0x8009DE50u; f_8009D46C(c); // 8009DE4C
  c->r[3]=c->r[29]|c->r[29]; // 8009DE50
  c->r[4]=c->r[20]|c->r[20]; // 8009DE54
  c->r[5]=0u+0xFFFFFFFFu; // 8009DE58
  c->lr=0x8009DE60u; f_8009D610(c); // 8009DE5C
  c->r[0]=R32(c->r[3]+0x00000058u); // 8009DE60
  c->r[26]=0u+0x80690000u; // 8009DE64
  W32(c->r[1]+0x00000018u,c->r[0]); // 8009DE68
  c->r[23]=c->r[3]+0x00000058u; // 8009DE6C
  c->r[26]=c->r[26]+0xFFFFDD38u; // 8009DE70
  c->r[25]=0u+0x00000000u; // 8009DE74
  c->r[28]=0u+0x00000001u; // 8009DE78
  goto L_8009E028; // 8009DE7C
L_8009DE80:;
  c->r[5]=R32(c->r[1]+0x00000018u); // 8009DE80
  c->r[3]=c->r[29]|c->r[29]; // 8009DE84
  c->r[4]=c->r[1]+0x00000020u; // 8009DE88
  c->r[5]=R32(c->r[5]+0x00000008u); // 8009DE8C
  c->r[22]=R32(c->r[5]+0x0000000Cu); // 8009DE90
  c->r[5]=c->r[22]|c->r[22]; // 8009DE94
  c->lr=0x8009DE9Cu; f_8009D590(c); // 8009DE98
  cmps(c,0,(int32_t)c->r[3],0); // 8009DE9C
  if (crb(c,0)) { goto L_8009E01C; } // 8009DEA0
  c->r[5]=c->r[3]|c->r[3]; // 8009DEA4
  c->r[3]=c->r[1]+0x00000034u; // 8009DEA8
  c->r[4]=c->r[1]+0x00000020u; // 8009DEAC
  c->lr=0x8009DEB4u; f_802D90FC(c); // 8009DEB0
  W32(c->r[1]+0x00000014u,c->r[25]); // 8009DEB4
  c->r[3]=c->r[1]+0x00000034u; // 8009DEB8
  c->r[4]=0u+0x00000005u; // 8009DEBC
  c->lr=0x8009DEC4u; f_802D9584(c); // 8009DEC0
  c->r[5]=c->r[3]|c->r[3]; // 8009DEC4
  c->r[3]=c->r[1]+0x00000040u; // 8009DEC8
  c->r[4]=c->r[26]+0x0000003Cu; // 8009DECC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8009DED0
  c->lr=0x8009DED8u; f_803B1FC8(c); // 8009DED4
  c->r[3]=c->r[30]|c->r[30]; // 8009DED8
  c->r[4]=c->r[1]+0x00000040u; // 8009DEDC
  c->r[5]=c->r[1]+0x00000014u; // 8009DEE0
  c->r[6]=0u+0x00000000u; // 8009DEE4
  c->lr=0x8009DEECu; f_802D24C8(c); // 8009DEE8
  c->r[0]=R32(c->r[1]+0x00000014u); // 8009DEEC
  cmps(c,0,(int32_t)c->r[0],0); // 8009DEF0
  if (!crb(c,2)) { goto L_8009DF2C; } // 8009DEF4
  c->r[3]=c->r[1]+0x00000034u; // 8009DEF8
  c->r[4]=0u+0x00000005u; // 8009DEFC
  c->lr=0x8009DF04u; f_802D9584(c); // 8009DF00
  c->r[5]=c->r[3]|c->r[3]; // 8009DF04
  c->r[3]=c->r[1]+0x00000040u; // 8009DF08
  c->r[4]=c->r[26]+0x0000003Fu; // 8009DF0C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8009DF10
  c->lr=0x8009DF18u; f_803B1FC8(c); // 8009DF14
  c->r[3]=c->r[30]|c->r[30]; // 8009DF18
  c->r[4]=c->r[1]+0x00000040u; // 8009DF1C
  c->r[5]=c->r[1]+0x00000014u; // 8009DF20
  c->r[6]=0u+0x00000000u; // 8009DF24
  c->lr=0x8009DF2Cu; f_802D24C8(c); // 8009DF28
L_8009DF2C:;
  c->r[3]=c->r[1]+0x00000010u; // 8009DF2C
  c->r[4]=0u+0x00000000u; // 8009DF30
  c->lr=0x8009DF38u; f_800A0914(c); // 8009DF34
  c->r[4]=R32(c->r[1]+0x00000014u); // 8009DF38
  c->r[3]=c->r[1]+0x00000010u; // 8009DF3C
  c->lr=0x8009DF44u; f_800A0914(c); // 8009DF40
  cmps(c,0,(int32_t)c->r[3],0); // 8009DF44
  if (crb(c,2)) { goto L_8009E01C; } // 8009DF48
  c->r[3]=c->r[1]+0x00000034u; // 8009DF4C
  c->r[4]=0u+0x00000000u; // 8009DF50
  c->lr=0x8009DF58u; f_802D9584(c); // 8009DF54
  c->r[21]=c->r[3]|c->r[3]; // 8009DF58
  c->r[3]=c->r[1]+0x00000034u; // 8009DF5C
  c->r[4]=0u+0x00000001u; // 8009DF60
  c->lr=0x8009DF68u; f_802D944C(c); // 8009DF64
  c->r[27]=c->r[3]|c->r[3]; // 8009DF68
  c->r[3]=c->r[1]+0x00000034u; // 8009DF6C
  c->r[4]=0u+0x00000009u; // 8009DF70
  c->lr=0x8009DF78u; f_802D9584(c); // 8009DF74
  c->r[20]=c->r[3]|c->r[3]; // 8009DF78
  c->r[3]=0u+0x00000080u; // 8009DF7C
  c->lr=0x8009DF84u; f_8009D710(c); // 8009DF80
  cmps(c,0,(int32_t)c->r[3],0); // 8009DF84
  c->r[24]=c->r[3]|c->r[3]; // 8009DF88
  if (crb(c,2)) { goto L_8009DF9C; } // 8009DF8C
  c->r[4]=c->r[21]|c->r[21]; // 8009DF90
  c->r[5]=c->r[20]|c->r[20]; // 8009DF94
  c->lr=0x8009DF9Cu; f_800A03D0(c); // 8009DF98
L_8009DF9C:;
  W8(c->r[1]+0x00000008u,c->r[25]); // 8009DF9C
  c->r[3]=c->r[1]+0x00000008u; // 8009DFA0
  c->lr=0x8009DFA8u; f_8004DBC0(c); // 8009DFA4
  c->r[4]=c->r[31]|c->r[31]; // 8009DFA8
  c->lr=0x8009DFB0u; f_80099344(c); // 8009DFAC
  W32(c->r[24]+0x00000014u,c->r[3]); // 8009DFB0
  c->r[3]=c->r[1]+0x00000028u; // 8009DFB4
  c->r[4]=c->r[24]+0x00000024u; // 8009DFB8
  c->r[5]=c->r[1]+0x00000034u; // 8009DFBC
  W32(c->r[24]+0x00000018u,c->r[22]); // 8009DFC0
  c->r[0]=R32(c->r[1]+0x00000014u); // 8009DFC4
  W32(c->r[24]+0x0000001Cu,c->r[0]); // 8009DFC8
  W32(c->r[24]+0x00000020u,c->r[31]); // 8009DFCC
  c->lr=0x8009DFD4u; f_802D93B8(c); // 8009DFD0
  W32(c->r[24]+0x00000030u,c->r[27]); // 8009DFD4
  c->lr=0x8009DFDCu; f_80067D60(c); // 8009DFD8
  c->r[3]=R32(c->r[3]+0x00000004u); // 8009DFDC
  c->r[4]=c->r[21]|c->r[21]; // 8009DFE0
  c->r[5]=c->r[20]|c->r[20]; // 8009DFE4
  c->lr=0x8009DFECu; f_80068D24(c); // 8009DFE8
  cmps(c,0,(int32_t)c->r[3],0); // 8009DFEC
  if (!crb(c,2)) { goto L_8009E00C; } // 8009DFF0
  c->r[3]=c->r[29]+0x000000CCu; // 8009DFF4
  c->r[5]=c->r[24]|c->r[24]; // 8009DFF8
  c->r[4]=c->r[3]|c->r[3]; // 8009DFFC
  c->lr=0x8009E004u; f_802DDCA8(c); // 8009E000
  W8(c->r[29]+0x000000B0u,c->r[28]); // 8009E004
  goto L_8009E01C; // 8009E008
L_8009E00C:;
  c->r[3]=c->r[29]+0x000000C0u; // 8009E00C
  c->r[5]=c->r[24]|c->r[24]; // 8009E010
  c->r[4]=c->r[3]|c->r[3]; // 8009E014
  c->lr=0x8009E01Cu; f_802DDCA8(c); // 8009E018
L_8009E01C:;
  c->r[3]=R32(c->r[1]+0x00000018u); // 8009E01C
  c->r[0]=R32(c->r[3]+0x00000000u); // 8009E020
  W32(c->r[1]+0x00000018u,c->r[0]); // 8009E024
L_8009E028:;
  W32(c->r[1]+0x0000000Cu,c->r[23]); // 8009E028
  c->r[3]=c->r[1]+0x00000018u; // 8009E02C
  c->r[4]=c->r[1]+0x0000000Cu; // 8009E030
  c->lr=0x8009E038u; f_8009B618(c); // 8009E034
  cmps(c,0,(int32_t)c->r[3],0); // 8009E038
  if (!crb(c,2)) { IRQCHK(c); goto L_8009DE80; } // 8009E03C
  {uint32_t ea=c->r[1]+0x00000060u; for(int i=20;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 8009E040
  c->r[3]=0u+0x00000001u; // 8009E044
  c->r[0]=R32(c->r[1]+0x00000094u); // 8009E048
  c->lr=c->r[0]; // 8009E04C
  c->r[1]=c->r[1]+0x00000090u; // 8009E050
  return; // 8009E054
}

// fn_8009E058
void f_8009E058(Ctx* __restrict c) {
  trace_call(0x8009E058u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8009E058
  c->r[0]=c->lr; // 8009E05C
  W32(c->r[1]+0x00000034u,c->r[0]); // 8009E060
  c->r[11]=c->r[1]+0x00000020u; // 8009E064
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[31]);} // 8009E068
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,31,ea,0,0);} // 8009E06C
  c->lr=0x8009E074u; { W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8009E070
  c->r[0]=R32(c->r[5]+0x00000008u); // 8009E074
  c->r[29]=c->r[5]|c->r[5]; // 8009E078
  c->r[30]=c->r[5]+c->r[0]; // 8009E07C
  c->r[0]=R32(c->r[5]+c->r[0]); // 8009E080
  c->r[4]=c->r[5]+c->r[0]; // 8009E084
  c->r[5]=0u+0xFFFFFFFFu; // 8009E088
  c->lr=0x8009E090u; f_8009D610(c); // 8009E08C
  c->r[0]=R32(c->r[30]+0x00000004u); // 8009E090
  c->r[31]=c->r[3]|c->r[3]; // 8009E094
  c->r[28]=R32(c->r[30]+0x00000008u); // 8009E098
  c->r[3]=0u+0x00000018u; // 8009E09C
  {uint32_t ea=c->r[30]+0x0000000Cu; c->f[31]=c->ps1[31]=RF32(ea);} // 8009E0A0
  c->r[29]=c->r[29]+c->r[0]; // 8009E0A4
  c->lr=0x8009E0ACu; f_8009D710(c); // 8009E0A8
  cmps(c,0,(int32_t)c->r[3],0); // 8009E0AC
  c->r[30]=c->r[3]|c->r[3]; // 8009E0B0
  if (crb(c,2)) { goto L_8009E0CC; } // 8009E0B4
  c->lr=0x8009E0BCu; f_800506C0(c); // 8009E0B8
  W32(c->r[30]+0x00000008u,c->r[30]); // 8009E0BC
  W32(c->r[30]+0x0000000Cu,c->r[29]); // 8009E0C0
  W32(c->r[30]+0x00000010u,c->r[28]); // 8009E0C4
  {uint32_t ea=c->r[30]+0x00000014u; WF32(ea,c->f[31]);} // 8009E0C8
L_8009E0CC:;
  c->r[3]=c->r[31]+0x00000064u; // 8009E0CC
  c->r[5]=c->r[30]|c->r[30]; // 8009E0D0
  c->r[4]=c->r[3]|c->r[3]; // 8009E0D4
  c->lr=0x8009E0DCu; f_802DDCA8(c); // 8009E0D8
  c->r[11]=c->r[1]+0x00000020u; // 8009E0DC
  {uint32_t ea=c->r[1]+0x00000028u; psq_load(c,31,ea,0,0);} // 8009E0E0
  {uint32_t ea=c->r[1]+0x00000020u; c->f[31]=RF64(ea);} // 8009E0E4
  c->lr=0x8009E0ECu; { c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8009E0E8
  c->r[0]=R32(c->r[1]+0x00000034u); // 8009E0EC
  c->lr=c->r[0]; // 8009E0F0
  c->r[1]=c->r[1]+0x00000030u; // 8009E0F4
  return; // 8009E0F8
}

// fn_8009E0FC
void f_8009E0FC(Ctx* __restrict c) {
  trace_call(0x8009E0FCu);
  cmpu(c,0,c->r[5],0x00000008u); // 8009E0FC
  if (crb(c,1)) return; // 8009E100
  c->r[3]=0u+0x806D0000u; // 8009E104
  c->r[0]=rotl(c->r[5],2)&0xFFFFFFFCu; // 8009E108
  c->r[3]=c->r[3]+0x00005B70u; // 8009E10C
  c->r[3]=R32(c->r[3]+c->r[0]); // 8009E110
  c->ctr=c->r[3]; // 8009E114
  if (true) { switch (c->ctr) { case 0x8009E11Cu: goto L_8009E11C; case 0x8009E134u: goto L_8009E134; case 0x8009E148u: goto L_8009E148; case 0x8009E15Cu: goto L_8009E15C; case 0x8009E16Cu: goto L_8009E16C; case 0x8009E17Cu: goto L_8009E17C; case 0x8009E18Cu: goto L_8009E18C; case 0x8009E19Cu: goto L_8009E19C; case 0x8009E1B0u: goto L_8009E1B0; default: break; } dispatch(c,c->ctr); return; } // 8009E118
L_8009E11C:;
  c->r[3]=c->r[4]|c->r[4]; // 8009E11C
  c->r[4]=c->r[6]|c->r[6]; // 8009E120
  c->r[12]=R32(c->r[3]+0x0000001Cu); // 8009E124
  c->r[12]=R32(c->r[12]+0x000000F4u); // 8009E128
  c->ctr=c->r[12]; // 8009E12C
  if (true) { switch (c->ctr) { case 0x8009E11Cu: goto L_8009E11C; case 0x8009E134u: goto L_8009E134; case 0x8009E148u: goto L_8009E148; case 0x8009E15Cu: goto L_8009E15C; case 0x8009E16Cu: goto L_8009E16C; case 0x8009E17Cu: goto L_8009E17C; case 0x8009E18Cu: goto L_8009E18C; case 0x8009E19Cu: goto L_8009E19C; case 0x8009E1B0u: goto L_8009E1B0; default: break; } dispatch(c,c->ctr); return; } // 8009E130
L_8009E134:;
  c->r[3]=R32(c->r[4]+0x0000044Cu); // 8009E134
  c->r[4]=0u+0x00000004u; // 8009E138
  c->r[5]=0u+0x00000001u; // 8009E13C
  c->r[3]=c->r[3]+0x000000C4u; // 8009E140
  f_8005DCA0(c); return; // 8009E144
L_8009E148:;
  c->r[3]=R32(c->r[4]+0x0000044Cu); // 8009E148
  c->r[4]=0u+0x00000004u; // 8009E14C
  c->r[5]=0u+0x00000000u; // 8009E150
  c->r[3]=c->r[3]+0x000000C4u; // 8009E154
  f_8005DCA0(c); return; // 8009E158
L_8009E15C:;
  c->r[3]=c->r[4]|c->r[4]; // 8009E15C
  c->r[4]=0u+0x00000010u; // 8009E160
  c->r[5]=0u+0x00000001u; // 8009E164
  f_80064C88(c); return; // 8009E168
L_8009E16C:;
  c->r[3]=c->r[4]|c->r[4]; // 8009E16C
  c->r[4]=0u+0x00000010u; // 8009E170
  c->r[5]=0u+0x00000000u; // 8009E174
  f_80064C88(c); return; // 8009E178
L_8009E17C:;
  c->r[3]=c->r[4]|c->r[4]; // 8009E17C
  c->r[4]=0u+0x00000014u; // 8009E180
  c->r[5]=0u+0x00000001u; // 8009E184
  f_80064C88(c); return; // 8009E188
L_8009E18C:;
  c->r[3]=c->r[4]|c->r[4]; // 8009E18C
  c->r[4]=0u+0x00000014u; // 8009E190
  c->r[5]=0u+0x00000000u; // 8009E194
  f_80064C88(c); return; // 8009E198
L_8009E19C:;
  c->r[3]=R32(c->r[4]+0x0000044Cu); // 8009E19C
  c->r[4]=0u+0x00000030u; // 8009E1A0
  c->r[5]=0u+0x00000001u; // 8009E1A4
  c->r[3]=c->r[3]+0x000000C4u; // 8009E1A8
  f_8005DCA0(c); return; // 8009E1AC
L_8009E1B0:;
  c->r[3]=R32(c->r[4]+0x0000044Cu); // 8009E1B0
  c->r[4]=0u+0x00000030u; // 8009E1B4
  c->r[5]=0u+0x00000000u; // 8009E1B8
  c->r[3]=c->r[3]+0x000000C4u; // 8009E1BC
  f_8005DCA0(c); return; // 8009E1C0
  return; // 8009E1C4
}

// fn_8009E1C8
void f_8009E1C8(Ctx* __restrict c) {
  trace_call(0x8009E1C8u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8009E1C8
  c->r[0]=c->lr; // 8009E1CC
  W32(c->r[1]+0x00000024u,c->r[0]); // 8009E1D0
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[31]);} // 8009E1D4
  {uint32_t ea=c->r[1]+0x00000018u; psq_store(c,31,ea,0,0);} // 8009E1D8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8009E1DC
  W32(c->r[1]+0x00000008u,c->r[30]); // 8009E1E0
  c->r[4]=R32(c->r[5]+0x00000008u); // 8009E1E4
  c->r[0]=R32(c->r[5]+0x0000000Cu); // 8009E1E8
  c->r[6]=c->r[5]+c->r[4]; // 8009E1EC
  c->r[5]=0u+0xFFFFFFFFu; // 8009E1F0
  c->r[31]=R32(c->r[6]+0x00000004u); // 8009E1F4
  c->r[4]=c->r[6]+c->r[0]; // 8009E1F8
  c->r[30]=R32(c->r[6]+0x00000000u); // 8009E1FC
  {uint32_t ea=c->r[6]+0x00000008u; c->f[31]=c->ps1[31]=RF32(ea);} // 8009E200
  c->lr=0x8009E208u; f_8009D610(c); // 8009E204
  c->f[1]=c->f[31]; // 8009E208
  c->r[4]=c->r[30]|c->r[30]; // 8009E20C
  c->r[5]=c->r[31]|c->r[31]; // 8009E210
  c->lr=0x8009E218u; f_8009F970(c); // 8009E214
  c->r[0]=R32(c->r[1]+0x00000024u); // 8009E218
  {uint32_t ea=c->r[1]+0x00000018u; psq_load(c,31,ea,0,0);} // 8009E21C
  {uint32_t ea=c->r[1]+0x00000010u; c->f[31]=RF64(ea);} // 8009E220
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8009E224
  c->r[30]=R32(c->r[1]+0x00000008u); // 8009E228
  c->lr=c->r[0]; // 8009E22C
  c->r[1]=c->r[1]+0x00000020u; // 8009E230
  return; // 8009E234
}

// fn_8009E238
void f_8009E238(Ctx* __restrict c) {
  trace_call(0x8009E238u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8009E238
  c->r[0]=c->lr; // 8009E23C
  W32(c->r[1]+0x00000034u,c->r[0]); // 8009E240
  c->r[11]=c->r[1]+0x00000020u; // 8009E244
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[31]);} // 8009E248
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,31,ea,0,0);} // 8009E24C
  c->lr=0x8009E254u; { W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8009E250
  c->r[4]=R32(c->r[5]+0x00000008u); // 8009E254
  c->r[0]=R32(c->r[5]+0x0000000Cu); // 8009E258
  c->r[6]=c->r[5]+c->r[4]; // 8009E25C
  c->r[5]=0u+0xFFFFFFFFu; // 8009E260
  c->r[31]=R32(c->r[6]+0x00000004u); // 8009E264
  c->r[4]=c->r[6]+c->r[0]; // 8009E268
  c->r[30]=R32(c->r[6]+0x00000000u); // 8009E26C
  {uint32_t ea=c->r[6]+0x00000008u; c->f[31]=c->ps1[31]=RF32(ea);} // 8009E270
  c->r[29]=R8(c->r[6]+0x0000000Cu); // 8009E274
  c->lr=0x8009E27Cu; f_8009D610(c); // 8009E278
  cmps(c,0,(int32_t)c->r[29],0); // 8009E27C
  if (crb(c,2)) { goto L_8009E290; } // 8009E280
  cmps(c,0,(int32_t)c->r[29],1); // 8009E284
  if (crb(c,2)) { goto L_8009E2A4; } // 8009E288
  goto L_8009E2B4; // 8009E28C
L_8009E290:;
  c->f[1]=c->f[31]; // 8009E290
  c->r[4]=c->r[30]|c->r[30]; // 8009E294
  c->r[5]=c->r[31]|c->r[31]; // 8009E298
  c->lr=0x8009E2A0u; f_8009F9BC(c); // 8009E29C
  goto L_8009E2B4; // 8009E2A0
L_8009E2A4:;
  c->f[1]=c->f[31]; // 8009E2A4
  c->r[4]=c->r[30]|c->r[30]; // 8009E2A8
  c->r[5]=c->r[31]|c->r[31]; // 8009E2AC
  c->lr=0x8009E2B4u; f_8009FA08(c); // 8009E2B0
L_8009E2B4:;
  c->r[11]=c->r[1]+0x00000020u; // 8009E2B4
  {uint32_t ea=c->r[1]+0x00000028u; psq_load(c,31,ea,0,0);} // 8009E2B8
  {uint32_t ea=c->r[1]+0x00000020u; c->f[31]=RF64(ea);} // 8009E2BC
  c->lr=0x8009E2C4u; { c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8009E2C0
  c->r[0]=R32(c->r[1]+0x00000034u); // 8009E2C4
  c->lr=c->r[0]; // 8009E2C8
  c->r[1]=c->r[1]+0x00000030u; // 8009E2CC
  return; // 8009E2D0
}

// fn_8009E2D4
void f_8009E2D4(Ctx* __restrict c) {
  trace_call(0x8009E2D4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8009E2D4
  c->r[0]=c->lr; // 8009E2D8
  W32(c->r[1]+0x00000014u,c->r[0]); // 8009E2DC
  c->r[0]=R32(c->r[5]+0x00000008u); // 8009E2E0
  c->r[3]=c->r[5]+c->r[0]; // 8009E2E4
  c->r[0]=R8(c->r[5]+c->r[0]); // 8009E2E8
  c->r[3]=R8(c->r[3]+0x00000001u); // 8009E2EC
  cmps(c,0,(int32_t)c->r[0],0); // 8009E2F0
  if (crb(c,2)) { goto L_8009E30C; } // 8009E2F4
  cmps(c,0,(int32_t)c->r[0],1); // 8009E2F8
  if (crb(c,2)) { goto L_8009E350; } // 8009E2FC
  cmps(c,0,(int32_t)c->r[0],2); // 8009E300
  if (crb(c,2)) { goto L_8009E394; } // 8009E304
  goto L_8009E3D4; // 8009E308
L_8009E30C:;
  cmps(c,0,(int32_t)c->r[3],0); // 8009E30C
  if (crb(c,2)) { goto L_8009E320; } // 8009E310
  cmps(c,0,(int32_t)c->r[3],1); // 8009E314
  if (crb(c,2)) { goto L_8009E338; } // 8009E318
  goto L_8009E3D4; // 8009E31C
L_8009E320:;
  c->lr=0x8009E324u; f_80067D60(c); // 8009E320
  c->r[3]=R32(c->r[3]+0x0000000Cu); // 8009E324
  c->r[4]=0u+0x00000000u; // 8009E328
  c->r[5]=0u+0x00000001u; // 8009E32C
  c->lr=0x8009E334u; f_800C2A4C(c); // 8009E330
  goto L_8009E3D4; // 8009E334
L_8009E338:;
  c->lr=0x8009E33Cu; f_80067D60(c); // 8009E338
  c->r[3]=R32(c->r[3]+0x0000000Cu); // 8009E33C
  c->r[4]=0u+0x00000000u; // 8009E340
  c->r[5]=0u+0x00000000u; // 8009E344
  c->lr=0x8009E34Cu; f_800C2A4C(c); // 8009E348
  goto L_8009E3D4; // 8009E34C
L_8009E350:;
  cmps(c,0,(int32_t)c->r[3],0); // 8009E350
  if (crb(c,2)) { goto L_8009E364; } // 8009E354
  cmps(c,0,(int32_t)c->r[3],1); // 8009E358
  if (crb(c,2)) { goto L_8009E37C; } // 8009E35C
  goto L_8009E3D4; // 8009E360
L_8009E364:;
  c->lr=0x8009E368u; f_80154938(c); // 8009E364
  c->r[4]=0u+0x00000000u; // 8009E368
  c->r[5]=0u+0x00000001u; // 8009E36C
  c->r[3]=c->r[3]+0x00000004u; // 8009E370
  c->lr=0x8009E378u; f_8005DCA0(c); // 8009E374
  goto L_8009E3D4; // 8009E378
L_8009E37C:;
  c->lr=0x8009E380u; f_80154938(c); // 8009E37C
  c->r[4]=0u+0x00000000u; // 8009E380
  c->r[5]=0u+0x00000000u; // 8009E384
  c->r[3]=c->r[3]+0x00000004u; // 8009E388
  c->lr=0x8009E390u; f_8005DCA0(c); // 8009E38C
  goto L_8009E3D4; // 8009E390
L_8009E394:;
  cmps(c,0,(int32_t)c->r[3],0); // 8009E394
  if (crb(c,2)) { goto L_8009E3A8; } // 8009E398
  cmps(c,0,(int32_t)c->r[3],1); // 8009E39C
  if (crb(c,2)) { goto L_8009E3C0; } // 8009E3A0
  goto L_8009E3D4; // 8009E3A4
L_8009E3A8:;
  c->lr=0x8009E3ACu; f_80154938(c); // 8009E3A8
  c->r[4]=0u+0x00000001u; // 8009E3AC
  c->r[5]=0u+0x00000001u; // 8009E3B0
  c->r[3]=c->r[3]+0x00000004u; // 8009E3B4
  c->lr=0x8009E3BCu; f_8005DCA0(c); // 8009E3B8
  goto L_8009E3D4; // 8009E3BC
L_8009E3C0:;
  c->lr=0x8009E3C4u; f_80154938(c); // 8009E3C0
  c->r[4]=0u+0x00000001u; // 8009E3C4
  c->r[5]=0u+0x00000000u; // 8009E3C8
  c->r[3]=c->r[3]+0x00000004u; // 8009E3CC
  c->lr=0x8009E3D4u; f_8005DCA0(c); // 8009E3D0
L_8009E3D4:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8009E3D4
  c->lr=c->r[0]; // 8009E3D8
  c->r[1]=c->r[1]+0x00000010u; // 8009E3DC
  return; // 8009E3E0
}

// fn_8009E3E4
void f_8009E3E4(Ctx* __restrict c) {
  trace_call(0x8009E3E4u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8009E3E4
  c->r[0]=c->lr; // 8009E3E8
  W32(c->r[1]+0x00000044u,c->r[0]); // 8009E3EC
  {uint32_t ea=c->r[1]+0x00000028u; for(int i=26;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 8009E3F0
  c->r[30]=c->r[3]|c->r[3]; // 8009E3F4
  c->r[26]=c->r[4]|c->r[4]; // 8009E3F8
  c->r[29]=c->r[3]+0x000000B4u; // 8009E3FC
  c->r[0]=R32(c->r[3]+0x000000B4u); // 8009E400
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 8009E404
  goto L_8009E428; // 8009E408
L_8009E40C:;
  c->r[3]=R32(c->r[1]+0x0000001Cu); // 8009E40C
  c->r[4]=c->r[26]|c->r[26]; // 8009E410
  c->r[3]=R32(c->r[3]+0x00000008u); // 8009E414
  c->lr=0x8009E41Cu; f_8009F86C(c); // 8009E418
  c->r[3]=R32(c->r[1]+0x0000001Cu); // 8009E41C
  c->r[0]=R32(c->r[3]+0x00000000u); // 8009E420
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 8009E424
L_8009E428:;
  W32(c->r[1]+0x00000014u,c->r[29]); // 8009E428
  c->r[3]=c->r[1]+0x0000001Cu; // 8009E42C
  c->r[4]=c->r[1]+0x00000014u; // 8009E430
  c->lr=0x8009E438u; f_8009D6B4(c); // 8009E434
  cmps(c,0,(int32_t)c->r[3],0); // 8009E438
  if (!crb(c,2)) { IRQCHK(c); goto L_8009E40C; } // 8009E43C
  c->r[31]=R32(c->r[30]+0x000000F0u); // 8009E440
  c->r[29]=0u+0x00000000u; // 8009E444
  goto L_8009E508; // 8009E448
L_8009E44C:;
  c->r[3]=R32(c->r[4]+0x0000000Cu); // 8009E44C
  c->r[28]=R32(c->r[31]+0x00000000u); // 8009E450
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 8009E454
  W32(c->r[4]+0x0000000Cu,c->r[0]); // 8009E458
  c->r[3]=R32(c->r[31]+0x00000008u); // 8009E45C
  c->r[0]=R32(c->r[3]+0x0000000Cu); // 8009E460
  cmps(c,0,(int32_t)c->r[0],0); // 8009E464
  if (crb(c,1)) { goto L_8009E504; } // 8009E468
  c->r[0]=R32(c->r[3]+0x00000010u); // 8009E46C
  W32(c->r[1]+0x00000018u,c->r[0]); // 8009E470
  goto L_8009E4A0; // 8009E474
L_8009E478:;
  c->r[3]=R32(c->r[1]+0x00000018u); // 8009E478
  c->r[26]=R32(c->r[3]+0x00000008u); // 8009E47C
  c->lr=0x8009E484u; f_80067D60(c); // 8009E480
  c->r[3]=R32(c->r[3]+0x00000004u); // 8009E484
  c->r[4]=c->r[26]+0x0000000Cu; // 8009E488
  c->r[5]=c->r[26]+0x00000034u; // 8009E48C
  c->lr=0x8009E494u; f_8006896C(c); // 8009E490
  c->r[3]=R32(c->r[1]+0x00000018u); // 8009E494
  c->r[0]=R32(c->r[3]+0x00000000u); // 8009E498
  W32(c->r[1]+0x00000018u,c->r[0]); // 8009E49C
L_8009E4A0:;
  c->r[5]=R32(c->r[31]+0x00000008u); // 8009E4A0
  c->r[3]=c->r[1]+0x00000018u; // 8009E4A4
  c->r[4]=c->r[1]+0x00000010u; // 8009E4A8
  c->r[0]=c->r[5]+0x00000010u; // 8009E4AC
  W32(c->r[1]+0x00000010u,c->r[0]); // 8009E4B0
  c->lr=0x8009E4B8u; f_8009E740(c); // 8009E4B4
  cmps(c,0,(int32_t)c->r[3],0); // 8009E4B8
  if (!crb(c,2)) { IRQCHK(c); goto L_8009E478; } // 8009E4BC
  c->r[3]=R32(c->r[31]+0x00000008u); // 8009E4C0
  c->r[27]=R32(c->r[3]+0x00000020u); // 8009E4C4
  cmps(c,0,(int32_t)c->r[27],0); // 8009E4C8
  if (crb(c,0)) { goto L_8009E4EC; } // 8009E4CC
  c->r[26]=R32(c->r[3]+0x0000001Cu); // 8009E4D0
  c->r[3]=c->r[1]+0x0000000Cu; // 8009E4D4
  W8(c->r[1]+0x0000000Cu,c->r[29]); // 8009E4D8
  c->lr=0x8009E4E0u; f_8004F3FC(c); // 8009E4DC
  c->r[4]=c->r[26]|c->r[26]; // 8009E4E0
  c->r[5]=c->r[27]|c->r[27]; // 8009E4E4
  c->lr=0x8009E4ECu; f_8009E56C(c); // 8009E4E8
L_8009E4EC:;
  c->r[4]=R32(c->r[31]+0x00000008u); // 8009E4EC
  c->r[3]=c->r[30]+0x000000F0u; // 8009E4F0
  c->lr=0x8009E4F8u; f_802DDD08(c); // 8009E4F4
  c->r[3]=R32(c->r[31]+0x00000008u); // 8009E4F8
  c->r[4]=0u+0x00000001u; // 8009E4FC
  c->lr=0x8009E504u; f_800A0778(c); // 8009E500
L_8009E504:;
  c->r[31]=c->r[28]|c->r[28]; // 8009E504
L_8009E508:;
  c->r[4]=R32(c->r[31]+0x00000008u); // 8009E508
  c->r[0]=R32(c->r[30]+0x000000F8u); // 8009E50C
  cmpu(c,0,c->r[4],c->r[0]); // 8009E510
  if (!crb(c,2)) { IRQCHK(c); goto L_8009E44C; } // 8009E514
  c->r[3]=c->r[30]|c->r[30]; // 8009E518
  c->lr=0x8009E520u; f_8009E760(c); // 8009E51C
  cmps(c,0,(int32_t)c->r[3],0); // 8009E520
  if (crb(c,2)) { goto L_8009E53C; } // 8009E524
  c->r[0]=0u+0x00000000u; // 8009E528
  W8(c->r[1]+0x00000008u,c->r[0]); // 8009E52C
  c->r[3]=c->r[1]+0x00000008u; // 8009E530
  c->lr=0x8009E538u; f_80046D50(c); // 8009E534
  c->lr=0x8009E53Cu; f_8008CC20(c); // 8009E538
L_8009E53C:;
  c->r[4]=R32(c->r[30]+0x000000A8u); // 8009E53C
  c->r[3]=c->r[30]|c->r[30]; // 8009E540
  c->lr=0x8009E548u; f_8009E840(c); // 8009E544
  c->r[4]=R32(c->r[30]+0x000000ACu); // 8009E548
  c->r[3]=c->r[30]|c->r[30]; // 8009E54C
  c->lr=0x8009E554u; f_8009E95C(c); // 8009E550
  {uint32_t ea=c->r[1]+0x00000028u; for(int i=26;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 8009E554
  c->r[3]=0u+0x00000001u; // 8009E558
  c->r[0]=R32(c->r[1]+0x00000044u); // 8009E55C
  c->lr=c->r[0]; // 8009E560
  c->r[1]=c->r[1]+0x00000040u; // 8009E564
  return; // 8009E568
}

// fn_8009E56C
void f_8009E56C(Ctx* __restrict c) {
  trace_call(0x8009E56Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8009E56C
  c->r[0]=c->lr; // 8009E570
  c->r[7]=0u+0x00000000u; // 8009E574
  W32(c->r[1]+0x00000034u,c->r[0]); // 8009E578
  c->r[0]=0u+0x00000004u; // 8009E57C
  {uint32_t ea=c->r[1]+0x0000001Cu; for(int i=27;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 8009E580
  c->r[29]=c->r[5]|c->r[5]; // 8009E584
  c->r[28]=c->r[3]|c->r[3]; // 8009E588
  c->r[5]=0u+0x00000000u; // 8009E58C
  c->ctr=c->r[0]; // 8009E590
L_8009E594:;
  c->r[6]=c->r[3]+c->r[5]; // 8009E594
  c->r[0]=R32(c->r[6]+0x00000958u); // 8009E598
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 8009E59C
  if (crb(c,2)) { goto L_8009E5B0; } // 8009E5A0
  c->r[7]=c->r[7]+0x00000001u; // 8009E5A4
  c->r[5]=c->r[5]+0x000008B0u; // 8009E5A8
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8009E594; } // 8009E5AC
L_8009E5B0:;
  cmps(c,0,(int32_t)c->r[7],4); // 8009E5B0
  c->r[0]=0u+0xFFFFFFFFu; // 8009E5B4
  if (!crb(c,0)) { goto L_8009E5C0; } // 8009E5B8
  c->r[0]=c->r[7]|c->r[7]; // 8009E5BC
L_8009E5C0:;
  cmps(c,0,(int32_t)c->r[0],0); // 8009E5C0
  if (crb(c,0)) { goto L_8009E72C; } // 8009E5C4
  c->r[27]=(uint32_t)((int32_t)c->r[0]*(int32_t)2224); // 8009E5C8
  c->r[4]=c->r[29]|c->r[29]; // 8009E5CC
  c->r[3]=c->r[3]+c->r[27]; // 8009E5D0
  c->r[3]=c->r[3]+0x00000130u; // 8009E5D4
  c->lr=0x8009E5DCu; f_800A1D5C(c); // 8009E5D8
  cmps(c,0,(int32_t)c->r[3],0); // 8009E5DC
  c->r[30]=c->r[3]|c->r[3]; // 8009E5E0
  if (crb(c,2)) { goto L_8009E72C; } // 8009E5E4
  cmpu(c,0,c->r[29],0x000003FFu); // 8009E5E8
  c->r[4]=c->r[29]|c->r[29]; // 8009E5EC
  if (!crb(c,1)) { goto L_8009E5F8; } // 8009E5F0
  c->r[4]=0u+0x00000000u; // 8009E5F4
L_8009E5F8:;
  c->r[3]=c->r[28]+c->r[27]; // 8009E5F8
  c->r[0]=sraw(c,c->r[4],3); // 8009E5FC
  c->r[31]=c->r[3]+0x000000B0u; // 8009E600
  c->r[3]=rotl(c->r[4],0)&0x00000007u; // 8009E604
  c->r[4]=0u+0x00000001u; // 8009E608
  c->r[0]=R8(c->r[31]+c->r[0]); // 8009E60C
  c->r[3]=((c->r[3])&0x20)?0u:(c->r[4]<<((c->r[3])&31)); // 8009E610
  c->r[0]=c->r[3]&c->r[0]; cr0(c,c->r[0]); // 8009E614
  if (!crb(c,2)) { goto L_8009E640; } // 8009E618
  c->r[0]=0u+0x00000000u; // 8009E61C
  W8(c->r[1]+0x00000008u,c->r[0]); // 8009E620
  c->r[3]=c->r[1]+0x00000008u; // 8009E624
  c->lr=0x8009E62Cu; f_80046D50(c); // 8009E628
  c->r[4]=c->r[30]|c->r[30]; // 8009E62C
  c->lr=0x8009E634u; f_8008CD98(c); // 8009E630
  c->r[3]=c->r[28]+c->r[27]; // 8009E634
  c->r[0]=0u+0x00000002u; // 8009E638
  W32(c->r[3]+0x00000950u,c->r[0]); // 8009E63C
L_8009E640:;
  cmpu(c,0,c->r[29],0x000003FFu); // 8009E640
  if (!crb(c,1)) { goto L_8009E64C; } // 8009E644
  c->r[29]=0u+0x00000000u; // 8009E648
L_8009E64C:;
  c->r[5]=sraw(c,c->r[29],3); // 8009E64C
  c->r[0]=rotl(c->r[29],0)&0x00000007u; // 8009E650
  c->r[3]=0u+0x00000001u; // 8009E654
  c->r[4]=R8(c->r[31]+c->r[5]); // 8009E658
  c->r[0]=((c->r[0])&0x20)?0u:(c->r[3]<<((c->r[0])&31)); // 8009E65C
  c->r[0]=rotl(c->r[0],0)&0x000000FFu; // 8009E660
  c->r[0]=c->r[4]|c->r[0]; // 8009E664
  W8(c->r[31]+c->r[5],c->r[0]); // 8009E668
  c->r[0]=R8(c->r[30]+0x00000000u); // 8009E66C
  cmps(c,0,(int32_t)c->r[0],71); // 8009E670
  if (!crb(c,2)) { goto L_8009E69C; } // 8009E674
  c->r[0]=R8(c->r[30]+0x00000001u); // 8009E678
  cmps(c,0,(int32_t)c->r[0],95); // 8009E67C
  if (!crb(c,2)) { goto L_8009E69C; } // 8009E680
  c->r[3]=c->r[30]+0x00000002u; // 8009E684
  c->lr=0x8009E68Cu; f_803B613C(c); // 8009E688
  cmpu(c,0,c->r[3],0x000003FFu); // 8009E68C
  if (!crb(c,1)) { goto L_8009E6A0; } // 8009E690
  c->r[3]=0u+0xFFFFFFFFu; // 8009E694
  goto L_8009E6A0; // 8009E698
L_8009E69C:;
  c->r[3]=0u+0xFFFFFFFFu; // 8009E69C
L_8009E6A0:;
  cmpu(c,0,c->r[3],0x000003FFu); // 8009E6A0
  if (crb(c,1)) { goto L_8009E6CC; } // 8009E6A4
  c->r[4]=sraw(c,c->r[3],3); // 8009E6A8
  c->r[0]=rotl(c->r[3],0)&0x00000007u; // 8009E6AC
  c->r[3]=0u+0x00000001u; // 8009E6B0
  c->r[0]=((c->r[0])&0x20)?0u:(c->r[3]<<((c->r[0])&31)); // 8009E6B4
  c->r[4]=c->r[28]+c->r[4]; // 8009E6B8
  c->r[3]=R8(c->r[4]+0x0000236Cu); // 8009E6BC
  c->r[0]=rotl(c->r[0],0)&0x000000FFu; // 8009E6C0
  c->r[0]=c->r[3]|c->r[0]; // 8009E6C4
  W8(c->r[4]+0x0000236Cu,c->r[0]); // 8009E6C8
L_8009E6CC:;
  c->r[0]=R8(c->r[30]+0x00000000u); // 8009E6CC
  cmps(c,0,(int32_t)c->r[0],67); // 8009E6D0
  if (!crb(c,2)) { goto L_8009E6FC; } // 8009E6D4
  c->r[0]=R8(c->r[30]+0x00000001u); // 8009E6D8
  cmps(c,0,(int32_t)c->r[0],95); // 8009E6DC
  if (!crb(c,2)) { goto L_8009E6FC; } // 8009E6E0
  c->r[3]=c->r[30]+0x00000002u; // 8009E6E4
  c->lr=0x8009E6ECu; f_803B613C(c); // 8009E6E8
  cmpu(c,0,c->r[3],0x0000003Fu); // 8009E6EC
  if (!crb(c,1)) { goto L_8009E700; } // 8009E6F0
  c->r[3]=0u+0xFFFFFFFFu; // 8009E6F4
  goto L_8009E700; // 8009E6F8
L_8009E6FC:;
  c->r[3]=0u+0xFFFFFFFFu; // 8009E6FC
L_8009E700:;
  cmpu(c,0,c->r[3],0x0000003Fu); // 8009E700
  if (crb(c,1)) { goto L_8009E72C; } // 8009E704
  c->r[4]=sraw(c,c->r[3],3); // 8009E708
  c->r[0]=rotl(c->r[3],0)&0x00000007u; // 8009E70C
  c->r[3]=0u+0x00000001u; // 8009E710
  c->r[0]=((c->r[0])&0x20)?0u:(c->r[3]<<((c->r[0])&31)); // 8009E714
  c->r[4]=c->r[28]+c->r[4]; // 8009E718
  c->r[3]=R8(c->r[4]+0x000023ECu); // 8009E71C
  c->r[0]=rotl(c->r[0],0)&0x000000FFu; // 8009E720
  c->r[0]=c->r[3]|c->r[0]; // 8009E724
  W8(c->r[4]+0x000023ECu,c->r[0]); // 8009E728
L_8009E72C:;
  {uint32_t ea=c->r[1]+0x0000001Cu; for(int i=27;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 8009E72C
  c->r[0]=R32(c->r[1]+0x00000034u); // 8009E730
  c->lr=c->r[0]; // 8009E734
  c->r[1]=c->r[1]+0x00000030u; // 8009E738
  return; // 8009E73C
}

// fn_8009E740
void f_8009E740(Ctx* __restrict c) {
  trace_call(0x8009E740u);
  c->r[5]=R32(c->r[3]+0x00000000u); // 8009E740
  c->r[3]=R32(c->r[4]+0x00000000u); // 8009E744
  c->r[4]=R32(c->r[5]+0x00000008u); // 8009E748
  c->r[0]=R32(c->r[3]+0x00000008u); // 8009E74C
  c->r[3]=c->r[0]-c->r[4]; // 8009E750
  c->r[0]=addc(c,c->r[3],0xFFFFFFFFu,0); // 8009E754
  c->r[3]=addc(c,~c->r[0],c->r[3],c->xer_ca); // 8009E758
  return; // 8009E75C
}

// fn_8009E760
void f_8009E760(Ctx* __restrict c) {
  trace_call(0x8009E760u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8009E760
  c->r[0]=c->lr; // 8009E764
  W32(c->r[1]+0x00000024u,c->r[0]); // 8009E768
  {uint32_t ea=c->r[1]+0x00000010u; for(int i=28;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 8009E76C
  c->r[28]=c->r[3]|c->r[3]; // 8009E770
  c->r[0]=R8(c->r[3]+0x000000B0u); // 8009E774
  cmps(c,0,(int32_t)c->r[0],0); // 8009E778
  if (crb(c,2)) { goto L_8009E828; } // 8009E77C
  c->r[0]=R32(c->r[3]+0x000000CCu); // 8009E780
  c->r[30]=c->r[3]+0x000000CCu; // 8009E784
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 8009E788
  c->r[29]=0u+0x00000001u; // 8009E78C
  goto L_8009E7E8; // 8009E790
L_8009E794:;
  c->r[3]=R32(c->r[1]+0x0000000Cu); // 8009E794
  c->r[31]=R32(c->r[3]+0x00000008u); // 8009E798
  c->lr=0x8009E7A0u; f_80067D60(c); // 8009E79C
  c->r[3]=R32(c->r[3]+0x00000004u); // 8009E7A0
  c->r[4]=c->r[31]+0x0000000Cu; // 8009E7A4
  c->lr=0x8009E7ACu; f_80069110(c); // 8009E7A8
  cmps(c,0,(int32_t)c->r[3],0); // 8009E7AC
  if (!crb(c,2)) { goto L_8009E7D4; } // 8009E7B0
  c->r[4]=R32(c->r[1]+0x0000000Cu); // 8009E7B4
  c->r[3]=c->r[28]+0x000000E4u; // 8009E7B8
  c->r[5]=R32(c->r[4]+0x00000008u); // 8009E7BC
  c->r[4]=R32(c->r[5]+0x00000020u); // 8009E7C0
  c->r[5]=R32(c->r[5]+0x00000018u); // 8009E7C4
  c->lr=0x8009E7CCu; f_8009F3B8(c); // 8009E7C8
  cmps(c,0,(int32_t)c->r[3],0); // 8009E7CC
  if (crb(c,2)) { goto L_8009E7DC; } // 8009E7D0
L_8009E7D4:;
  c->r[29]=0u+0x00000000u; // 8009E7D4
  goto L_8009E800; // 8009E7D8
L_8009E7DC:;
  c->r[3]=R32(c->r[1]+0x0000000Cu); // 8009E7DC
  c->r[0]=R32(c->r[3]+0x00000000u); // 8009E7E0
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 8009E7E4
L_8009E7E8:;
  W32(c->r[1]+0x00000008u,c->r[30]); // 8009E7E8
  c->r[3]=c->r[1]+0x0000000Cu; // 8009E7EC
  c->r[4]=c->r[1]+0x00000008u; // 8009E7F0
  c->lr=0x8009E7F8u; f_8009E740(c); // 8009E7F4
  cmps(c,0,(int32_t)c->r[3],0); // 8009E7F8
  if (!crb(c,2)) { IRQCHK(c); goto L_8009E794; } // 8009E7FC
L_8009E800:;
  cmps(c,0,(int32_t)c->r[29],0); // 8009E800
  if (crb(c,2)) { goto L_8009E81C; } // 8009E804
  c->r[3]=c->r[28]+0x000000C0u; // 8009E808
  c->r[5]=R32(c->r[28]+0x000000CCu); // 8009E80C
  c->r[4]=c->r[3]|c->r[3]; // 8009E810
  c->r[6]=c->r[28]+0x000000CCu; // 8009E814
  c->lr=0x8009E81Cu; f_802DDCD8(c); // 8009E818
L_8009E81C:;
  c->r[0]=cntlz(c->r[29]); // 8009E81C
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 8009E820
  W8(c->r[28]+0x000000B0u,c->r[0]); // 8009E824
L_8009E828:;
  c->r[3]=R8(c->r[28]+0x000000B0u); // 8009E828
  {uint32_t ea=c->r[1]+0x00000010u; for(int i=28;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 8009E82C
  c->r[0]=R32(c->r[1]+0x00000024u); // 8009E830
  c->lr=c->r[0]; // 8009E834
  c->r[1]=c->r[1]+0x00000020u; // 8009E838
  return; // 8009E83C
}

// fn_8009E840
void f_8009E840(Ctx* __restrict c) {
  trace_call(0x8009E840u);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8009E840
  c->r[0]=c->lr; // 8009E844
  W32(c->r[1]+0x00000054u,c->r[0]); // 8009E848
  {uint32_t ea=c->r[1]+0x00000030u; for(int i=24;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 8009E84C
  c->r[24]=c->r[3]|c->r[3]; // 8009E850
  c->r[25]=c->r[4]|c->r[4]; // 8009E854
  c->r[30]=0u+0x00000000u; // 8009E858
  c->r[31]=0u+0x00000000u; // 8009E85C
  goto L_8009E940; // 8009E860
L_8009E864:;
  c->r[3]=c->r[24]+0x000000E4u; // 8009E864
  c->lr=0x8009E86Cu; f_802DDD44(c); // 8009E868
  cmps(c,0,(int32_t)c->r[3],0); // 8009E86C
  if (crb(c,2)) { goto L_8009E948; } // 8009E870
  c->r[3]=c->r[24]+0x000000E4u; // 8009E874
  c->r[4]=0u+0x00000000u; // 8009E878
  c->lr=0x8009E880u; f_8009F44C(c); // 8009E87C
  c->r[29]=R32(c->r[3]+0x0000000Cu); // 8009E880
  c->r[28]=R32(c->r[3]+0x00000010u); // 8009E884
  c->r[3]=c->r[1]+0x00000008u; // 8009E888
  W8(c->r[1]+0x00000008u,c->r[31]); // 8009E88C
  c->lr=0x8009E894u; f_8004DBC0(c); // 8009E890
  c->r[4]=c->r[29]|c->r[29]; // 8009E894
  c->lr=0x8009E89Cu; f_800992D4(c); // 8009E898
  c->r[27]=c->r[3]|c->r[3]; // 8009E89C
  c->r[3]=c->r[1]+0x00000010u; // 8009E8A0
  c->lr=0x8009E8A8u; f_802D9098(c); // 8009E8A4
  c->r[3]=c->r[24]|c->r[24]; // 8009E8A8
  c->r[4]=c->r[27]|c->r[27]; // 8009E8AC
  c->r[5]=c->r[1]+0x00000010u; // 8009E8B0
  c->lr=0x8009E8B8u; f_8009D46C(c); // 8009E8B4
  c->r[3]=c->r[24]|c->r[24]; // 8009E8B8
  c->r[5]=c->r[28]|c->r[28]; // 8009E8BC
  c->r[4]=c->r[1]+0x00000010u; // 8009E8C0
  c->lr=0x8009E8C8u; f_8009D590(c); // 8009E8C4
  cmps(c,0,(int32_t)c->r[3],0); // 8009E8C8
  if (crb(c,0)) { goto L_8009E928; } // 8009E8CC
  c->r[5]=c->r[3]|c->r[3]; // 8009E8D0
  c->r[3]=c->r[1]+0x00000018u; // 8009E8D4
  c->r[4]=c->r[1]+0x00000010u; // 8009E8D8
  c->lr=0x8009E8E0u; f_802D90FC(c); // 8009E8DC
  c->r[3]=c->r[1]+0x00000018u; // 8009E8E0
  c->r[4]=0u+0x00000000u; // 8009E8E4
  c->lr=0x8009E8ECu; f_802D9584(c); // 8009E8E8
  c->r[27]=c->r[3]|c->r[3]; // 8009E8EC
  c->r[3]=c->r[1]+0x00000018u; // 8009E8F0
  c->r[4]=0u+0x00000009u; // 8009E8F4
  c->lr=0x8009E8FCu; f_802D9584(c); // 8009E8F8
  c->r[26]=c->r[3]|c->r[3]; // 8009E8FC
  c->lr=0x8009E904u; f_80067D60(c); // 8009E900
  c->r[3]=R32(c->r[3]+0x00000004u); // 8009E904
  c->r[4]=c->r[27]|c->r[27]; // 8009E908
  c->r[5]=c->r[26]|c->r[26]; // 8009E90C
  c->lr=0x8009E914u; f_800685AC(c); // 8009E910
  c->r[4]=c->r[29]|c->r[29]; // 8009E914
  c->r[5]=c->r[28]|c->r[28]; // 8009E918
  c->r[3]=c->r[24]+0x000000D8u; // 8009E91C
  c->r[6]=0u+0x00000000u; // 8009E920
  c->lr=0x8009E928u; f_8009F178(c); // 8009E924
L_8009E928:;
  c->r[4]=c->r[29]|c->r[29]; // 8009E928
  c->r[5]=c->r[28]|c->r[28]; // 8009E92C
  c->r[3]=c->r[24]+0x000000E4u; // 8009E930
  c->r[6]=0u+0x00000000u; // 8009E934
  c->lr=0x8009E93Cu; f_8009F27C(c); // 8009E938
  c->r[30]=c->r[30]+0x00000001u; // 8009E93C
L_8009E940:;
  cmps(c,0,(int32_t)c->r[30],(int32_t)c->r[25]); // 8009E940
  if (crb(c,0)) { IRQCHK(c); goto L_8009E864; } // 8009E944
L_8009E948:;
  {uint32_t ea=c->r[1]+0x00000030u; for(int i=24;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 8009E948
  c->r[0]=R32(c->r[1]+0x00000054u); // 8009E94C
  c->lr=c->r[0]; // 8009E950
  c->r[1]=c->r[1]+0x00000050u; // 8009E954
  return; // 8009E958
}

// fn_8009E95C
void f_8009E95C(Ctx* __restrict c) {
  trace_call(0x8009E95Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8009E95C
  c->r[0]=c->lr; // 8009E960
  W32(c->r[1]+0x00000034u,c->r[0]); // 8009E964
  {uint32_t ea=c->r[1]+0x00000010u; for(int i=24;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 8009E968
  c->r[24]=c->r[3]|c->r[3]; // 8009E96C
  c->r[25]=c->r[4]|c->r[4]; // 8009E970
  c->r[28]=0u+0x00000000u; // 8009E974
  c->r[31]=0u+0x00000000u; // 8009E978
  goto L_8009EA4C; // 8009E97C
L_8009E980:;
  c->r[3]=c->r[24]+0x000000C0u; // 8009E980
  c->lr=0x8009E988u; f_802DDD44(c); // 8009E984
  cmps(c,0,(int32_t)c->r[3],0); // 8009E988
  if (crb(c,2)) { goto L_8009EA54; } // 8009E98C
  c->r[29]=R32(c->r[24]+0x000000C0u); // 8009E990
  c->r[30]=R32(c->r[29]+0x00000008u); // 8009E994
  c->lr=0x8009E99Cu; f_80067D60(c); // 8009E998
  c->r[3]=R32(c->r[3]+0x00000004u); // 8009E99C
  c->r[4]=c->r[30]+0x0000000Cu; // 8009E9A0
  c->r[5]=c->r[30]+0x00000034u; // 8009E9A4
  c->lr=0x8009E9ACu; f_8006951C(c); // 8009E9A8
  cmps(c,0,(int32_t)c->r[3],0); // 8009E9AC
  c->r[27]=c->r[3]|c->r[3]; // 8009E9B0
  if (crb(c,2)) { goto L_8009EA30; } // 8009E9B4
  c->r[12]=R32(c->r[3]+0x0000001Cu); // 8009E9B8
  c->r[9]=R32(c->r[29]+0x00000008u); // 8009E9BC
  c->r[12]=R32(c->r[12]+0x000000E8u); // 8009E9C0
  c->r[8]=c->r[9]+0x00000024u; // 8009E9C4
  c->r[4]=R32(c->r[9]+0x00000014u); // 8009E9C8
  c->r[5]=R32(c->r[9]+0x00000018u); // 8009E9CC
  c->r[6]=R32(c->r[9]+0x0000001Cu); // 8009E9D0
  c->r[7]=R32(c->r[9]+0x00000020u); // 8009E9D4
  c->r[9]=R32(c->r[9]+0x00000030u); // 8009E9D8
  c->ctr=c->r[12]; // 8009E9DC
  if (true) { c->lr=0x8009E9E4u; dispatch(c,c->ctr); } // 8009E9E0
  c->r[3]=R32(c->r[29]+0x00000008u); // 8009E9E4
  c->r[3]=c->r[3]+0x00000074u; // 8009E9E8
  c->lr=0x8009E9F0u; f_802DDD44(c); // 8009E9EC
  c->r[30]=c->r[3]|c->r[3]; // 8009E9F0
  c->r[26]=0u+0x00000000u; // 8009E9F4
  goto L_8009EA28; // 8009E9F8
L_8009E9FC:;
  W32(c->r[1]+0x00000008u,c->r[31]); // 8009E9FC
  c->r[4]=c->r[26]|c->r[26]; // 8009EA00
  c->r[5]=c->r[1]+0x00000008u; // 8009EA04
  c->r[3]=R32(c->r[29]+0x00000008u); // 8009EA08
  c->lr=0x8009EA10u; f_800A064C(c); // 8009EA0C
  c->r[5]=R32(c->r[1]+0x00000008u); // 8009EA10
  c->r[6]=c->r[3]|c->r[3]; // 8009EA14
  c->r[3]=c->r[24]|c->r[24]; // 8009EA18
  c->r[4]=c->r[27]|c->r[27]; // 8009EA1C
  c->lr=0x8009EA24u; f_8009E0FC(c); // 8009EA20
  c->r[26]=c->r[26]+0x00000001u; // 8009EA24
L_8009EA28:;
  cmpu(c,0,c->r[26],c->r[30]); // 8009EA28
  if (crb(c,0)) { IRQCHK(c); goto L_8009E9FC; } // 8009EA2C
L_8009EA30:;
  c->r[4]=R32(c->r[29]+0x00000008u); // 8009EA30
  c->r[3]=c->r[24]+0x000000C0u; // 8009EA34
  c->lr=0x8009EA3Cu; f_802DDD08(c); // 8009EA38
  c->r[3]=R32(c->r[29]+0x00000008u); // 8009EA3C
  c->r[4]=0u+0x00000001u; // 8009EA40
  c->lr=0x8009EA48u; f_800A04F0(c); // 8009EA44
  c->r[28]=c->r[28]+0x00000001u; // 8009EA48
L_8009EA4C:;
  cmps(c,0,(int32_t)c->r[28],(int32_t)c->r[25]); // 8009EA4C
  if (crb(c,0)) { IRQCHK(c); goto L_8009E980; } // 8009EA50
L_8009EA54:;
  {uint32_t ea=c->r[1]+0x00000010u; for(int i=24;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 8009EA54
  c->r[0]=R32(c->r[1]+0x00000034u); // 8009EA58
  c->lr=c->r[0]; // 8009EA5C
  c->r[1]=c->r[1]+0x00000030u; // 8009EA60
  return; // 8009EA64
}

// fn_8009EA68
void f_8009EA68(Ctx* __restrict c) {
  trace_call(0x8009EA68u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8009EA68
  c->r[0]=c->lr; // 8009EA6C
  W32(c->r[1]+0x00000014u,c->r[0]); // 8009EA70
  c->r[0]=c->r[4]|c->r[4]; // 8009EA74
  c->r[4]=c->r[5]|c->r[5]; // 8009EA78
  c->r[5]=c->r[0]|c->r[0]; // 8009EA7C
  c->lr=0x8009EA84u; f_8009D610(c); // 8009EA80
  cmps(c,0,(int32_t)c->r[3],0); // 8009EA84
  if (crb(c,2)) { goto L_8009EA98; } // 8009EA88
  c->r[3]=c->r[3]+0x00000058u; // 8009EA8C
  c->lr=0x8009EA94u; f_802DDD44(c); // 8009EA90
  goto L_8009EA9C; // 8009EA94
L_8009EA98:;
  c->r[3]=0u+0x00000000u; // 8009EA98
L_8009EA9C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8009EA9C
  c->lr=c->r[0]; // 8009EAA0
  c->r[1]=c->r[1]+0x00000010u; // 8009EAA4
  return; // 8009EAA8
}

// fn_8009EAAC
void f_8009EAAC(Ctx* __restrict c) {
  trace_call(0x8009EAACu);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8009EAAC
  c->r[0]=c->lr; // 8009EAB0
  W32(c->r[1]+0x00000044u,c->r[0]); // 8009EAB4
  {uint32_t ea=c->r[1]+0x00000030u; for(int i=28;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 8009EAB8
  c->r[31]=c->r[4]|c->r[4]; // 8009EABC
  c->r[4]=c->r[5]|c->r[5]; // 8009EAC0
  c->r[28]=c->r[6]|c->r[6]; // 8009EAC4
  c->r[5]=c->r[31]|c->r[31]; // 8009EAC8
  c->lr=0x8009EAD0u; f_8009D610(c); // 8009EACC
  cmps(c,0,(int32_t)c->r[3],0); // 8009EAD0
  c->r[30]=c->r[3]|c->r[3]; // 8009EAD4
  if (crb(c,2)) { goto L_8009EBBC; } // 8009EAD8
  c->r[29]=0u+0x00000000u; // 8009EADC
  c->r[3]=c->r[3]+0x00000058u; // 8009EAE0
  c->lr=0x8009EAE8u; f_802DDD44(c); // 8009EAE4
  cmps(c,0,(int32_t)c->r[28],0); // 8009EAE8
  if (crb(c,0)) { goto L_8009EBBC; } // 8009EAEC
  cmps(c,0,(int32_t)c->r[28],(int32_t)c->r[3]); // 8009EAF0
  if (!crb(c,0)) { goto L_8009EBBC; } // 8009EAF4
  {uint32_t ea=c->r[30]+0x00000058u; c->r[0]=R32(ea); c->r[30]=ea;} // 8009EAF8
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 8009EAFC
  goto L_8009EBA4; // 8009EB00
L_8009EB04:;
  cmps(c,0,(int32_t)c->r[29],(int32_t)c->r[28]); // 8009EB04
  if (crb(c,0)) { goto L_8009EB94; } // 8009EB08
  c->r[0]=0u+0x00000000u; // 8009EB0C
  W8(c->r[1]+0x00000008u,c->r[0]); // 8009EB10
  c->r[3]=c->r[1]+0x00000008u; // 8009EB14
  c->lr=0x8009EB1Cu; f_8004BDA8(c); // 8009EB18
  c->r[0]=R32(c->r[3]+0x00000000u); // 8009EB1C
  c->r[29]=c->r[3]|c->r[3]; // 8009EB20
  W32(c->r[1]+0x00000018u,c->r[0]); // 8009EB24
  goto L_8009EB78; // 8009EB28
L_8009EB2C:;
  c->r[3]=R32(c->r[1]+0x00000018u); // 8009EB2C
  c->r[5]=R32(c->r[3]+0x00000008u); // 8009EB30
  c->r[4]=R32(c->r[5]+0x00000448u); // 8009EB34
  c->r[0]=R32(c->r[4]+0x0000000Cu); // 8009EB38
  cmps(c,0,(int32_t)c->r[31],(int32_t)c->r[0]); // 8009EB3C
  if (!crb(c,2)) { goto L_8009EB68; } // 8009EB40
  c->r[3]=R32(c->r[1]+0x0000001Cu); // 8009EB44
  c->r[0]=R32(c->r[4]+0x00000004u); // 8009EB48
  c->r[3]=R32(c->r[3]+0x00000008u); // 8009EB4C
  c->r[3]=R32(c->r[3]+0x0000000Cu); // 8009EB50
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 8009EB54
  if (!crb(c,2)) { goto L_8009EB68; } // 8009EB58
  c->r[3]=R32(c->r[5]+0x00000020u); // 8009EB5C
  c->r[4]=R32(c->r[5]+0x00000024u); // 8009EB60
  goto L_8009EBD0; // 8009EB64
L_8009EB68:;
  c->r[3]=c->r[1]+0x00000014u; // 8009EB68
  c->r[4]=c->r[1]+0x00000018u; // 8009EB6C
  c->r[5]=0u+0x00000000u; // 8009EB70
  c->lr=0x8009EB78u; f_80067DB0(c); // 8009EB74
L_8009EB78:;
  W32(c->r[1]+0x00000010u,c->r[29]); // 8009EB78
  c->r[3]=c->r[1]+0x00000018u; // 8009EB7C
  c->r[4]=c->r[1]+0x00000010u; // 8009EB80
  c->lr=0x8009EB88u; f_8004BEB8(c); // 8009EB84
  cmps(c,0,(int32_t)c->r[3],0); // 8009EB88
  if (!crb(c,2)) { IRQCHK(c); goto L_8009EB2C; } // 8009EB8C
  goto L_8009EBBC; // 8009EB90
L_8009EB94:;
  c->r[3]=R32(c->r[1]+0x0000001Cu); // 8009EB94
  c->r[29]=c->r[29]+0x00000001u; // 8009EB98
  c->r[0]=R32(c->r[3]+0x00000000u); // 8009EB9C
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 8009EBA0
L_8009EBA4:;
  W32(c->r[1]+0x0000000Cu,c->r[30]); // 8009EBA4
  c->r[3]=c->r[1]+0x0000001Cu; // 8009EBA8
  c->r[4]=c->r[1]+0x0000000Cu; // 8009EBAC
  c->lr=0x8009EBB4u; f_8009B618(c); // 8009EBB0
  cmps(c,0,(int32_t)c->r[3],0); // 8009EBB4
  if (!crb(c,2)) { IRQCHK(c); goto L_8009EB04; } // 8009EBB8
L_8009EBBC:;
  c->r[0]=0u+0x00000000u; // 8009EBBC
  W32(c->r[1]+0x00000020u,c->r[0]); // 8009EBC0
  c->r[3]=0u+0x00000000u; // 8009EBC4
  c->r[4]=0u+0x00000000u; // 8009EBC8
  W32(c->r[1]+0x00000024u,c->r[0]); // 8009EBCC
L_8009EBD0:;
  {uint32_t ea=c->r[1]+0x00000030u; for(int i=28;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 8009EBD0
  c->r[0]=R32(c->r[1]+0x00000044u); // 8009EBD4
  c->lr=c->r[0]; // 8009EBD8
  c->r[1]=c->r[1]+0x00000040u; // 8009EBDC
  return; // 8009EBE0
}

// fn_8009EBE4
void f_8009EBE4(Ctx* __restrict c) {
  trace_call(0x8009EBE4u);
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8009EBE4
  c->r[0]=c->lr; // 8009EBE8
  cmps(c,0,(int32_t)c->r[3],0); // 8009EBEC
  W32(c->r[1]+0x00000064u,c->r[0]); // 8009EBF0
  {uint32_t ea=c->r[1]+0x00000050u; for(int i=28;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 8009EBF4
  c->r[28]=c->r[3]|c->r[3]; // 8009EBF8
  c->r[29]=c->r[4]|c->r[4]; // 8009EBFC
  c->r[30]=0u+0x00000000u; // 8009EC00
  if (crb(c,2)) { goto L_8009EC8C; } // 8009EC04
  c->r[0]=R32(c->r[4]+0x00000000u); // 8009EC08
  cmps(c,0,(int32_t)c->r[0],0); // 8009EC0C
  if (crb(c,2)) { goto L_8009EC8C; } // 8009EC10
  c->r[3]=c->r[29]|c->r[29]; // 8009EC14
  c->lr=0x8009EC1Cu; f_80046E94(c); // 8009EC18
  c->r[3]=R32(c->r[3]+0x00000000u); // 8009EC1C
  c->r[0]=R32(c->r[29]+0x00000000u); // 8009EC20
  c->r[3]=c->r[3]-c->r[0]; // 8009EC24
  c->r[0]=addc(c,c->r[3],0xFFFFFFFFu,0); // 8009EC28
  c->r[0]=addc(c,~c->r[0],c->r[3],c->xer_ca); cr0(c,c->r[0]); // 8009EC2C
  if (!crb(c,2)) { goto L_8009EC8C; } // 8009EC30
  c->r[3]=c->r[29]|c->r[29]; // 8009EC34
  c->lr=0x8009EC3Cu; f_80046E94(c); // 8009EC38
  c->r[3]=R32(c->r[3]+0x00000004u); // 8009EC3C
  c->r[31]=R32(c->r[3]+0x00000328u); // 8009EC40
  c->lr=0x8009EC48u; f_8009ECA4(c); // 8009EC44
  cmps(c,0,(int32_t)c->r[31],(int32_t)c->r[3]); // 8009EC48
  if (!crb(c,2)) { goto L_8009EC8C; } // 8009EC4C
  c->r[3]=c->r[29]|c->r[29]; // 8009EC50
  c->lr=0x8009EC58u; f_80046E94(c); // 8009EC54
  c->r[3]=R32(c->r[3]+0x00000004u); // 8009EC58
  c->r[4]=c->r[1]+0x00000018u; // 8009EC5C
  c->r[12]=R32(c->r[3]+0x0000001Cu); // 8009EC60
  c->r[12]=R32(c->r[12]+0x00000140u); // 8009EC64
  c->ctr=c->r[12]; // 8009EC68
  if (true) { c->lr=0x8009EC70u; dispatch(c,c->ctr); } // 8009EC6C
  c->r[3]=c->r[1]+0x00000008u; // 8009EC70
  c->r[4]=c->r[1]+0x00000018u; // 8009EC74
  c->lr=0x8009EC7Cu; f_80060878(c); // 8009EC78
  c->r[3]=c->r[28]|c->r[28]; // 8009EC7C
  c->r[4]=c->r[1]+0x00000008u; // 8009EC80
  c->lr=0x8009EC88u; f_8005DC84(c); // 8009EC84
  c->r[30]=0u+0x00000001u; // 8009EC88
L_8009EC8C:;
  c->r[3]=c->r[30]|c->r[30]; // 8009EC8C
  {uint32_t ea=c->r[1]+0x00000050u; for(int i=28;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 8009EC90
  c->r[0]=R32(c->r[1]+0x00000064u); // 8009EC94
  c->lr=c->r[0]; // 8009EC98
  c->r[1]=c->r[1]+0x00000060u; // 8009EC9C
  return; // 8009ECA0
}

// fn_8009ECA4
void f_8009ECA4(Ctx* __restrict c) {
  trace_call(0x8009ECA4u);
  c->r[0]=R8(c->r[13]+0xFFFFBC60u); // 8009ECA4
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 8009ECA8
  if (!crb(c,2)) { goto L_8009ECC8; } // 8009ECAC
  c->r[3]=R32(c->r[13]+0xFFFFBC48u); // 8009ECB0
  c->r[0]=0u+0x00000001u; // 8009ECB4
  W32(c->r[13]+0xFFFFBC5Cu,c->r[3]); // 8009ECB8
  c->r[3]=c->r[3]+0x00000001u; // 8009ECBC
  W32(c->r[13]+0xFFFFBC48u,c->r[3]); // 8009ECC0
  W8(c->r[13]+0xFFFFBC60u,c->r[0]); // 8009ECC4
L_8009ECC8:;
  c->r[3]=R32(c->r[13]+0xFFFFBC5Cu); // 8009ECC8
  return; // 8009ECCC
}

// fn_8009ECD0
void f_8009ECD0(Ctx* __restrict c) {
  trace_call(0x8009ECD0u);
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8009ECD0
  c->r[0]=c->lr; // 8009ECD4
  cmps(c,0,(int32_t)c->r[3],0); // 8009ECD8
  W32(c->r[1]+0x00000064u,c->r[0]); // 8009ECDC
  {uint32_t ea=c->r[1]+0x00000050u; for(int i=28;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 8009ECE0
  c->r[28]=c->r[3]|c->r[3]; // 8009ECE4
  c->r[29]=c->r[4]|c->r[4]; // 8009ECE8
  c->r[30]=0u+0x00000000u; // 8009ECEC
  if (crb(c,2)) { goto L_8009ED78; } // 8009ECF0
  c->r[0]=R32(c->r[4]+0x00000000u); // 8009ECF4
  cmps(c,0,(int32_t)c->r[0],0); // 8009ECF8
  if (crb(c,2)) { goto L_8009ED78; } // 8009ECFC
  c->r[3]=c->r[29]|c->r[29]; // 8009ED00
  c->lr=0x8009ED08u; f_80046E94(c); // 8009ED04
  c->r[3]=R32(c->r[3]+0x00000000u); // 8009ED08
  c->r[0]=R32(c->r[29]+0x00000000u); // 8009ED0C
  c->r[3]=c->r[3]-c->r[0]; // 8009ED10
  c->r[0]=addc(c,c->r[3],0xFFFFFFFFu,0); // 8009ED14
  c->r[0]=addc(c,~c->r[0],c->r[3],c->xer_ca); cr0(c,c->r[0]); // 8009ED18
  if (!crb(c,2)) { goto L_8009ED78; } // 8009ED1C
  c->r[3]=c->r[29]|c->r[29]; // 8009ED20
  c->lr=0x8009ED28u; f_80046E94(c); // 8009ED24
  c->r[3]=R32(c->r[3]+0x00000004u); // 8009ED28
  c->r[31]=R32(c->r[3]+0x00000328u); // 8009ED2C
  c->lr=0x8009ED34u; f_8009ECA4(c); // 8009ED30
  cmps(c,0,(int32_t)c->r[31],(int32_t)c->r[3]); // 8009ED34
  if (!crb(c,2)) { goto L_8009ED78; } // 8009ED38
  c->r[3]=c->r[29]|c->r[29]; // 8009ED3C
  c->lr=0x8009ED44u; f_80046E94(c); // 8009ED40
  c->r[3]=R32(c->r[3]+0x00000004u); // 8009ED44
  c->r[4]=c->r[1]+0x00000018u; // 8009ED48
  c->r[12]=R32(c->r[3]+0x0000001Cu); // 8009ED4C
  c->r[12]=R32(c->r[12]+0x00000144u); // 8009ED50
  c->ctr=c->r[12]; // 8009ED54
  if (true) { c->lr=0x8009ED5Cu; dispatch(c,c->ctr); } // 8009ED58
  c->r[30]=c->r[3]|c->r[3]; // 8009ED5C
  c->r[3]=c->r[1]+0x00000008u; // 8009ED60
  c->r[4]=c->r[1]+0x00000018u; // 8009ED64
  c->lr=0x8009ED6Cu; f_80060878(c); // 8009ED68
  c->r[3]=c->r[28]|c->r[28]; // 8009ED6C
  c->r[4]=c->r[1]+0x00000008u; // 8009ED70
  c->lr=0x8009ED78u; f_8005DC84(c); // 8009ED74
L_8009ED78:;
  c->r[3]=c->r[30]|c->r[30]; // 8009ED78
  {uint32_t ea=c->r[1]+0x00000050u; for(int i=28;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 8009ED7C
  c->r[0]=R32(c->r[1]+0x00000064u); // 8009ED80
  c->lr=c->r[0]; // 8009ED84
  c->r[1]=c->r[1]+0x00000060u; // 8009ED88
  return; // 8009ED8C
}

// fn_8009ED90
void f_8009ED90(Ctx* __restrict c) {
  trace_call(0x8009ED90u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8009ED90
  c->r[0]=c->lr; // 8009ED94
  W32(c->r[1]+0x00000034u,c->r[0]); // 8009ED98
  c->r[11]=c->r[1]+0x00000030u; // 8009ED9C
  c->lr=0x8009EDA4u; { W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8009EDA0
  c->r[0]=0u+0x00000000u; // 8009EDA4
  W8(c->r[1]+0x00000008u,c->r[0]); // 8009EDA8
  c->r[29]=c->r[4]|c->r[4]; // 8009EDAC
  c->r[3]=c->r[1]+0x00000008u; // 8009EDB0
  c->lr=0x8009EDB8u; f_8004BDA8(c); // 8009EDB4
  c->r[0]=R32(c->r[3]+0x00000000u); // 8009EDB8
  c->r[30]=c->r[3]|c->r[3]; // 8009EDBC
  W32(c->r[1]+0x00000014u,c->r[0]); // 8009EDC0
  goto L_8009EE18; // 8009EDC4
L_8009EDC8:;
  c->r[3]=R32(c->r[1]+0x00000014u); // 8009EDC8
  cmps(c,0,(int32_t)c->r[29],0); // 8009EDCC
  c->r[31]=R32(c->r[3]+0x00000008u); // 8009EDD0
  if (crb(c,0)) { goto L_8009EDE8; } // 8009EDD4
  c->r[3]=R32(c->r[31]+0x00000448u); // 8009EDD8
  c->r[0]=R32(c->r[3]+0x0000000Cu); // 8009EDDC
  cmps(c,0,(int32_t)c->r[29],(int32_t)c->r[0]); // 8009EDE0
  if (!crb(c,2)) { goto L_8009EE08; } // 8009EDE4
L_8009EDE8:;
  {uint32_t ea=c->r[2]+0xFFFF98D0u; c->f[1]=c->ps1[1]=RF32(ea);} // 8009EDE8
  c->r[3]=c->r[31]|c->r[31]; // 8009EDEC
  c->lr=0x8009EDF4u; f_8005EF3C(c); // 8009EDF0
  c->r[3]=R32(c->r[31]+0x0000044Cu); // 8009EDF4
  c->r[4]=0u+0x00000016u; // 8009EDF8
  c->r[5]=0u+0x00000001u; // 8009EDFC
  c->r[3]=c->r[3]+0x000000C4u; // 8009EE00
  c->lr=0x8009EE08u; f_8005DCA0(c); // 8009EE04
L_8009EE08:;
  c->r[3]=c->r[1]+0x00000010u; // 8009EE08
  c->r[4]=c->r[1]+0x00000014u; // 8009EE0C
  c->r[5]=0u+0x00000000u; // 8009EE10
  c->lr=0x8009EE18u; f_80067DB0(c); // 8009EE14
L_8009EE18:;
  W32(c->r[1]+0x0000000Cu,c->r[30]); // 8009EE18
  c->r[3]=c->r[1]+0x00000014u; // 8009EE1C
  c->r[4]=c->r[1]+0x0000000Cu; // 8009EE20
  c->lr=0x8009EE28u; f_8004BEB8(c); // 8009EE24
  cmps(c,0,(int32_t)c->r[3],0); // 8009EE28
  if (!crb(c,2)) { IRQCHK(c); goto L_8009EDC8; } // 8009EE2C
  c->r[11]=c->r[1]+0x00000030u; // 8009EE30
  c->lr=0x8009EE38u; { c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8009EE34
  c->r[0]=R32(c->r[1]+0x00000034u); // 8009EE38
  c->lr=c->r[0]; // 8009EE3C
  c->r[1]=c->r[1]+0x00000030u; // 8009EE40
  return; // 8009EE44
}

// fn_8009EE48
void f_8009EE48(Ctx* __restrict c) {
  trace_call(0x8009EE48u);
  {uint32_t ea=c->r[1]+0xFFFFFF90u; W32(ea,c->r[1]); c->r[1]=ea;} // 8009EE48
  c->r[0]=c->lr; // 8009EE4C
  W32(c->r[1]+0x00000074u,c->r[0]); // 8009EE50
  {uint32_t ea=c->r[1]+0x0000004Cu; for(int i=23;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 8009EE54
  c->r[30]=c->r[3]|c->r[3]; // 8009EE58
  c->r[31]=c->r[4]|c->r[4]; // 8009EE5C
  c->lr=0x8009EE64u; f_8009F068(c); // 8009EE60
  c->r[0]=0u+0x00000000u; // 8009EE64
  W8(c->r[1]+0x00000010u,c->r[0]); // 8009EE68
  c->r[3]=c->r[1]+0x00000010u; // 8009EE6C
  c->lr=0x8009EE74u; f_8004BDA8(c); // 8009EE70
  c->r[0]=R32(c->r[3]+0x00000000u); // 8009EE74
  c->r[28]=c->r[3]|c->r[3]; // 8009EE78
  W32(c->r[1]+0x00000024u,c->r[0]); // 8009EE7C
  goto L_8009EEB0; // 8009EE80
L_8009EE84:;
  c->r[3]=R32(c->r[1]+0x00000024u); // 8009EE84
  c->r[3]=R32(c->r[3]+0x00000008u); // 8009EE88
  c->r[4]=R32(c->r[3]+0x00000448u); // 8009EE8C
  c->r[0]=R32(c->r[4]+0x0000000Cu); // 8009EE90
  cmps(c,0,(int32_t)c->r[31],(int32_t)c->r[0]); // 8009EE94
  if (!crb(c,2)) { goto L_8009EEA0; } // 8009EE98
  c->lr=0x8009EEA0u; f_8031749C(c); // 8009EE9C
L_8009EEA0:;
  c->r[3]=c->r[1]+0x0000001Cu; // 8009EEA0
  c->r[4]=c->r[1]+0x00000024u; // 8009EEA4
  c->r[5]=0u+0x00000000u; // 8009EEA8
  c->lr=0x8009EEB0u; f_80067DB0(c); // 8009EEAC
L_8009EEB0:;
  W32(c->r[1]+0x00000018u,c->r[28]); // 8009EEB0
  c->r[3]=c->r[1]+0x00000024u; // 8009EEB4
  c->r[4]=c->r[1]+0x00000018u; // 8009EEB8
  c->lr=0x8009EEC0u; f_8004BEB8(c); // 8009EEBC
  cmps(c,0,(int32_t)c->r[3],0); // 8009EEC0
  if (!crb(c,2)) { IRQCHK(c); goto L_8009EE84; } // 8009EEC4
  c->r[0]=0u+0x00000000u; // 8009EEC8
  W8(c->r[1]+0x0000000Cu,c->r[0]); // 8009EECC
  c->r[3]=c->r[1]+0x0000000Cu; // 8009EED0
  c->lr=0x8009EED8u; f_8004BE20(c); // 8009EED4
  c->r[0]=R32(c->r[3]+0x00000000u); // 8009EED8
  c->r[28]=c->r[3]|c->r[3]; // 8009EEDC
  W32(c->r[1]+0x00000020u,c->r[0]); // 8009EEE0
  goto L_8009EF10; // 8009EEE4
L_8009EEE8:;
  c->r[3]=R32(c->r[1]+0x00000020u); // 8009EEE8
  c->r[3]=R32(c->r[3]+0x00000008u); // 8009EEEC
  c->r[4]=R32(c->r[3]+0x00000448u); // 8009EEF0
  c->r[0]=R32(c->r[4]+0x0000000Cu); // 8009EEF4
  cmps(c,0,(int32_t)c->r[31],(int32_t)c->r[0]); // 8009EEF8
  if (!crb(c,2)) { goto L_8009EF04; } // 8009EEFC
  c->lr=0x8009EF04u; f_8031749C(c); // 8009EF00
L_8009EF04:;
  c->r[3]=R32(c->r[1]+0x00000020u); // 8009EF04
  c->r[0]=R32(c->r[3]+0x00000000u); // 8009EF08
  W32(c->r[1]+0x00000020u,c->r[0]); // 8009EF0C
L_8009EF10:;
  W32(c->r[1]+0x00000014u,c->r[28]); // 8009EF10
  c->r[3]=c->r[1]+0x00000020u; // 8009EF14
  c->r[4]=c->r[1]+0x00000014u; // 8009EF18
  c->lr=0x8009EF20u; f_8004BE98(c); // 8009EF1C
  cmps(c,0,(int32_t)c->r[3],0); // 8009EF20
  if (!crb(c,2)) { IRQCHK(c); goto L_8009EEE8; } // 8009EF24
  c->r[3]=0u+0x00000024u; // 8009EF28
  c->lr=0x8009EF30u; f_8009D710(c); // 8009EF2C
  cmps(c,0,(int32_t)c->r[3],0); // 8009EF30
  c->r[29]=c->r[3]|c->r[3]; // 8009EF34
  if (crb(c,2)) { goto L_8009EF44; } // 8009EF38
  c->r[4]=0u+0x00000002u; // 8009EF3C
  c->lr=0x8009EF44u; f_800A06E0(c); // 8009EF40
L_8009EF44:;
  c->r[3]=c->r[30]+0x000000F0u; // 8009EF44
  c->r[5]=c->r[29]|c->r[29]; // 8009EF48
  c->r[4]=c->r[3]|c->r[3]; // 8009EF4C
  c->lr=0x8009EF54u; f_802DDCA8(c); // 8009EF50
  c->r[0]=0u+0x00000000u; // 8009EF54
  W8(c->r[1]+0x00000008u,c->r[0]); // 8009EF58
  c->r[3]=c->r[1]+0x00000008u; // 8009EF5C
  c->lr=0x8009EF64u; f_8004DBC0(c); // 8009EF60
  c->r[4]=c->r[31]|c->r[31]; // 8009EF64
  c->lr=0x8009EF6Cu; f_800992D4(c); // 8009EF68
  c->r[28]=c->r[3]|c->r[3]; // 8009EF6C
  c->r[3]=c->r[1]+0x00000028u; // 8009EF70
  c->lr=0x8009EF78u; f_802D9098(c); // 8009EF74
  c->r[3]=c->r[30]|c->r[30]; // 8009EF78
  c->r[4]=c->r[28]|c->r[28]; // 8009EF7C
  c->r[5]=c->r[1]+0x00000028u; // 8009EF80
  c->lr=0x8009EF88u; f_8009D46C(c); // 8009EF84
  cmps(c,0,(int32_t)c->r[3],0); // 8009EF88
  if (!crb(c,2)) { goto L_8009EF98; } // 8009EF8C
  c->r[3]=0u+0x00000000u; // 8009EF90
  goto L_8009F054; // 8009EF94
L_8009EF98:;
  c->r[4]=c->r[31]|c->r[31]; // 8009EF98
  c->r[3]=c->r[30]+0x000000D8u; // 8009EF9C
  c->lr=0x8009EFA4u; f_8009F4C8(c); // 8009EFA0
  cmps(c,0,(int32_t)c->r[3],0); // 8009EFA4
  if (crb(c,2)) { goto L_8009F050; } // 8009EFA8
  c->r[27]=R32(c->r[3]+0x00000010u); // 8009EFAC
  c->r[4]=c->r[1]+0x00000028u; // 8009EFB0
  c->r[26]=R32(c->r[3]+0x00000014u); // 8009EFB4
  c->r[3]=c->r[30]|c->r[30]; // 8009EFB8
  c->r[5]=c->r[27]|c->r[27]; // 8009EFBC
  c->lr=0x8009EFC4u; f_8009D590(c); // 8009EFC0
  c->r[5]=c->r[3]|c->r[3]; // 8009EFC4
  c->r[3]=c->r[1]+0x00000030u; // 8009EFC8
  c->r[4]=c->r[1]+0x00000028u; // 8009EFCC
  c->lr=0x8009EFD4u; f_802D90FC(c); // 8009EFD0
  c->r[3]=c->r[1]+0x00000030u; // 8009EFD4
  c->r[4]=0u+0x00000000u; // 8009EFD8
  c->lr=0x8009EFE0u; f_802D9584(c); // 8009EFDC
  c->r[25]=c->r[3]|c->r[3]; // 8009EFE0
  c->r[3]=c->r[1]+0x00000030u; // 8009EFE4
  c->r[4]=0u+0x00000009u; // 8009EFE8
  c->lr=0x8009EFF0u; f_802D9584(c); // 8009EFEC
  c->r[24]=c->r[3]|c->r[3]; // 8009EFF0
  c->r[23]=0u+0x00000000u; // 8009EFF4
  goto L_8009F030; // 8009EFF8
L_8009EFFC:;
  c->r[3]=0u+0x00000080u; // 8009EFFC
  c->lr=0x8009F004u; f_8009D710(c); // 8009F000
  cmps(c,0,(int32_t)c->r[3],0); // 8009F004
  c->r[28]=c->r[3]|c->r[3]; // 8009F008
  if (crb(c,2)) { goto L_8009F01C; } // 8009F00C
  c->r[4]=c->r[25]|c->r[25]; // 8009F010
  c->r[5]=c->r[24]|c->r[24]; // 8009F014
  c->lr=0x8009F01Cu; f_800A03D0(c); // 8009F018
L_8009F01C:;
  c->r[3]=c->r[29]+0x00000010u; // 8009F01C
  c->r[5]=c->r[28]|c->r[28]; // 8009F020
  c->r[4]=c->r[3]|c->r[3]; // 8009F024
  c->lr=0x8009F02Cu; f_802DDCA8(c); // 8009F028
  c->r[23]=c->r[23]+0x00000001u; // 8009F02C
L_8009F030:;
  cmps(c,0,(int32_t)c->r[23],(int32_t)c->r[26]); // 8009F030
  if (crb(c,0)) { IRQCHK(c); goto L_8009EFFC; } // 8009F034
  c->r[4]=c->r[31]|c->r[31]; // 8009F038
  c->r[5]=c->r[27]|c->r[27]; // 8009F03C
  c->r[3]=c->r[30]+0x000000D8u; // 8009F040
  c->r[6]=0u+0x00000001u; // 8009F044
  c->lr=0x8009F04Cu; f_8009F27C(c); // 8009F048
  IRQCHK(c); goto L_8009EF98; // 8009F04C
L_8009F050:;
  c->r[3]=0u+0x00000001u; // 8009F050
L_8009F054:;
  {uint32_t ea=c->r[1]+0x0000004Cu; for(int i=23;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 8009F054
  c->r[0]=R32(c->r[1]+0x00000074u); // 8009F058
  c->lr=c->r[0]; // 8009F05C
  c->r[1]=c->r[1]+0x00000070u; // 8009F060
  return; // 8009F064
}

// fn_8009F068
void f_8009F068(Ctx* __restrict c) {
  trace_call(0x8009F068u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8009F068
  c->r[0]=c->lr; // 8009F06C
  W32(c->r[1]+0x00000024u,c->r[0]); // 8009F070
  {uint32_t ea=c->r[1]+0x00000010u; for(int i=28;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 8009F074
  c->r[28]=c->r[3]|c->r[3]; // 8009F078
  c->r[29]=c->r[4]|c->r[4]; // 8009F07C
  c->r[30]=c->r[3]+0x000000B4u; // 8009F080
  c->r[0]=R32(c->r[3]+0x000000B4u); // 8009F084
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 8009F088
  goto L_8009F0C4; // 8009F08C
L_8009F090:;
  c->r[3]=R32(c->r[1]+0x0000000Cu); // 8009F090
  c->r[4]=R32(c->r[3]+0x00000008u); // 8009F094
  c->r[31]=R32(c->r[3]+0x00000000u); // 8009F098
  c->r[0]=R32(c->r[4]+0x0000000Cu); // 8009F09C
  cmps(c,0,(int32_t)c->r[29],(int32_t)c->r[0]); // 8009F0A0
  if (!crb(c,2)) { goto L_8009F0C0; } // 8009F0A4
  c->r[3]=c->r[28]+0x000000B4u; // 8009F0A8
  c->lr=0x8009F0B0u; f_802DDD08(c); // 8009F0AC
  c->r[3]=R32(c->r[1]+0x0000000Cu); // 8009F0B0
  c->r[4]=0u+0x00000001u; // 8009F0B4
  c->r[3]=R32(c->r[3]+0x00000008u); // 8009F0B8
  c->lr=0x8009F0C0u; f_8009F680(c); // 8009F0BC
L_8009F0C0:;
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8009F0C0
L_8009F0C4:;
  W32(c->r[1]+0x00000008u,c->r[30]); // 8009F0C4
  c->r[3]=c->r[1]+0x0000000Cu; // 8009F0C8
  c->r[4]=c->r[1]+0x00000008u; // 8009F0CC
  c->lr=0x8009F0D4u; f_8009D6B4(c); // 8009F0D0
  cmps(c,0,(int32_t)c->r[3],0); // 8009F0D4
  if (!crb(c,2)) { IRQCHK(c); goto L_8009F090; } // 8009F0D8
  {uint32_t ea=c->r[1]+0x00000010u; for(int i=28;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 8009F0DC
  c->r[3]=0u+0x00000001u; // 8009F0E0
  c->r[0]=R32(c->r[1]+0x00000024u); // 8009F0E4
  c->lr=c->r[0]; // 8009F0E8
  c->r[1]=c->r[1]+0x00000020u; // 8009F0EC
  return; // 8009F0F0
}

// fn_8009F0F4
void f_8009F0F4(Ctx* __restrict c) {
  trace_call(0x8009F0F4u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8009F0F4
  c->r[0]=c->lr; // 8009F0F8
  W32(c->r[1]+0x00000024u,c->r[0]); // 8009F0FC
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 8009F100
  c->r[29]=c->r[4]|c->r[4]; // 8009F104
  c->r[30]=c->r[5]|c->r[5]; // 8009F108
  c->r[31]=c->r[6]|c->r[6]; // 8009F10C
  c->r[0]=R32(c->r[4]+0x00000000u); // 8009F110
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 8009F114
  goto L_8009F148; // 8009F118
L_8009F11C:;
  c->r[4]=R32(c->r[1]+0x0000000Cu); // 8009F11C
  c->r[3]=R32(c->r[4]+0x00000008u); // 8009F120
  c->r[0]=R32(c->r[3]+0x00000020u); // 8009F124
  cmps(c,0,(int32_t)c->r[30],(int32_t)c->r[0]); // 8009F128
  if (!crb(c,2)) { goto L_8009F140; } // 8009F12C
  c->r[0]=R32(c->r[3]+0x00000018u); // 8009F130
  cmps(c,0,(int32_t)c->r[31],(int32_t)c->r[0]); // 8009F134
  if (!crb(c,2)) { goto L_8009F140; } // 8009F138
  goto L_8009F164; // 8009F13C
L_8009F140:;
  c->r[0]=R32(c->r[4]+0x00000000u); // 8009F140
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 8009F144
L_8009F148:;
  W32(c->r[1]+0x00000008u,c->r[29]); // 8009F148
  c->r[3]=c->r[1]+0x0000000Cu; // 8009F14C
  c->r[4]=c->r[1]+0x00000008u; // 8009F150
  c->lr=0x8009F158u; f_8009E740(c); // 8009F154
  cmps(c,0,(int32_t)c->r[3],0); // 8009F158
  if (!crb(c,2)) { IRQCHK(c); goto L_8009F11C; } // 8009F15C
  c->r[3]=0u+0x00000000u; // 8009F160
L_8009F164:;
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 8009F164
  c->r[0]=R32(c->r[1]+0x00000024u); // 8009F168
  c->lr=c->r[0]; // 8009F16C
  c->r[1]=c->r[1]+0x00000020u; // 8009F170
  return; // 8009F174
}

// fn_8009F178
void f_8009F178(Ctx* __restrict c) {
  trace_call(0x8009F178u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8009F178
  c->r[0]=c->lr; // 8009F17C
  cmps(c,0,(int32_t)c->r[6],0); // 8009F180
  W32(c->r[1]+0x00000024u,c->r[0]); // 8009F184
  {uint32_t ea=c->r[1]+0x00000010u; for(int i=28;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 8009F188
  c->r[28]=c->r[3]|c->r[3]; // 8009F18C
  c->r[29]=c->r[4]|c->r[4]; // 8009F190
  c->r[30]=c->r[5]|c->r[5]; // 8009F194
  if (!crb(c,2)) { goto L_8009F1F8; } // 8009F198
  c->r[0]=R32(c->r[3]+0x00000000u); // 8009F19C
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 8009F1A0
  goto L_8009F1E0; // 8009F1A4
L_8009F1A8:;
  c->r[3]=R32(c->r[1]+0x0000000Cu); // 8009F1A8
  c->r[4]=R32(c->r[3]+0x00000008u); // 8009F1AC
  c->r[0]=R32(c->r[4]+0x0000000Cu); // 8009F1B0
  cmps(c,0,(int32_t)c->r[29],(int32_t)c->r[0]); // 8009F1B4
  if (!crb(c,2)) { goto L_8009F1D8; } // 8009F1B8
  c->r[0]=R32(c->r[4]+0x00000010u); // 8009F1BC
  cmps(c,0,(int32_t)c->r[30],(int32_t)c->r[0]); // 8009F1C0
  if (!crb(c,2)) { goto L_8009F1D8; } // 8009F1C4
  c->r[3]=R32(c->r[4]+0x00000014u); // 8009F1C8
  c->r[0]=c->r[3]+0x00000001u; // 8009F1CC
  W32(c->r[4]+0x00000014u,c->r[0]); // 8009F1D0
  goto L_8009F248; // 8009F1D4
L_8009F1D8:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 8009F1D8
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 8009F1DC
L_8009F1E0:;
  W32(c->r[1]+0x00000008u,c->r[28]); // 8009F1E0
  c->r[3]=c->r[1]+0x0000000Cu; // 8009F1E4
  c->r[4]=c->r[1]+0x00000008u; // 8009F1E8
  c->lr=0x8009F1F0u; f_8009F25C(c); // 8009F1EC
  cmps(c,0,(int32_t)c->r[3],0); // 8009F1F0
  if (!crb(c,2)) { IRQCHK(c); goto L_8009F1A8; } // 8009F1F4
L_8009F1F8:;
  c->r[3]=0u+0x00000018u; // 8009F1F8
  c->lr=0x8009F200u; f_8009D710(c); // 8009F1FC
  cmps(c,0,(int32_t)c->r[3],0); // 8009F200
  c->r[31]=c->r[3]|c->r[3]; // 8009F204
  if (crb(c,2)) { goto L_8009F228; } // 8009F208
  c->lr=0x8009F210u; f_800506C0(c); // 8009F20C
  W32(c->r[31]+0x00000008u,c->r[31]); // 8009F210
  c->r[3]=0u+0xFFFFFFFFu; // 8009F214
  c->r[0]=0u+0x00000000u; // 8009F218
  W32(c->r[31]+0x0000000Cu,c->r[3]); // 8009F21C
  W32(c->r[31]+0x00000010u,c->r[3]); // 8009F220
  W32(c->r[31]+0x00000014u,c->r[0]); // 8009F224
L_8009F228:;
  W32(c->r[31]+0x0000000Cu,c->r[29]); // 8009F228
  c->r[0]=0u+0x00000001u; // 8009F22C
  c->r[3]=c->r[28]|c->r[28]; // 8009F230
  c->r[4]=c->r[28]|c->r[28]; // 8009F234
  W32(c->r[31]+0x00000010u,c->r[30]); // 8009F238
  c->r[5]=c->r[31]|c->r[31]; // 8009F23C
  W32(c->r[31]+0x00000014u,c->r[0]); // 8009F240
  c->lr=0x8009F248u; f_802DDCA8(c); // 8009F244
L_8009F248:;
  {uint32_t ea=c->r[1]+0x00000010u; for(int i=28;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 8009F248
  c->r[0]=R32(c->r[1]+0x00000024u); // 8009F24C
  c->lr=c->r[0]; // 8009F250
  c->r[1]=c->r[1]+0x00000020u; // 8009F254
  return; // 8009F258
}

// fn_8009F25C
void f_8009F25C(Ctx* __restrict c) {
  trace_call(0x8009F25Cu);
  c->r[5]=R32(c->r[3]+0x00000000u); // 8009F25C
  c->r[3]=R32(c->r[4]+0x00000000u); // 8009F260
  c->r[4]=R32(c->r[5]+0x00000008u); // 8009F264
  c->r[0]=R32(c->r[3]+0x00000008u); // 8009F268
  c->r[3]=c->r[0]-c->r[4]; // 8009F26C
  c->r[0]=addc(c,c->r[3],0xFFFFFFFFu,0); // 8009F270
  c->r[3]=addc(c,~c->r[0],c->r[3],c->xer_ca); // 8009F274
  return; // 8009F278
}

// fn_8009F27C
void f_8009F27C(Ctx* __restrict c) {
  trace_call(0x8009F27Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8009F27C
  c->r[0]=c->lr; // 8009F280
  W32(c->r[1]+0x00000034u,c->r[0]); // 8009F284
  {uint32_t ea=c->r[1]+0x0000001Cu; for(int i=27;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 8009F288
  c->r[27]=c->r[3]|c->r[3]; // 8009F28C
  c->r[28]=c->r[4]|c->r[4]; // 8009F290
  c->r[29]=c->r[5]|c->r[5]; // 8009F294
  c->r[30]=c->r[6]|c->r[6]; // 8009F298
  c->r[0]=R32(c->r[3]+0x00000000u); // 8009F29C
  W32(c->r[1]+0x00000010u,c->r[0]); // 8009F2A0
  goto L_8009F31C; // 8009F2A4
L_8009F2A8:;
  c->r[31]=R32(c->r[1]+0x00000010u); // 8009F2A8
  c->r[3]=c->r[1]+0x0000000Cu; // 8009F2AC
  c->r[4]=c->r[1]+0x00000010u; // 8009F2B0
  c->r[5]=0u+0x00000000u; // 8009F2B4
  c->lr=0x8009F2BCu; f_8009F34C(c); // 8009F2B8
  c->r[4]=R32(c->r[31]+0x00000008u); // 8009F2BC
  c->r[0]=R32(c->r[4]+0x0000000Cu); // 8009F2C0
  cmps(c,0,(int32_t)c->r[28],(int32_t)c->r[0]); // 8009F2C4
  if (!crb(c,2)) { goto L_8009F31C; } // 8009F2C8
  c->r[0]=R32(c->r[4]+0x00000010u); // 8009F2CC
  cmps(c,0,(int32_t)c->r[29],(int32_t)c->r[0]); // 8009F2D0
  if (!crb(c,2)) { goto L_8009F31C; } // 8009F2D4
  c->r[3]=R32(c->r[4]+0x00000014u); // 8009F2D8
  cmps(c,0,(int32_t)c->r[30],0); // 8009F2DC
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 8009F2E0
  W32(c->r[4]+0x00000014u,c->r[0]); // 8009F2E4
  if (!crb(c,2)) { goto L_8009F2FC; } // 8009F2E8
  c->r[3]=R32(c->r[31]+0x00000008u); // 8009F2EC
  c->r[0]=R32(c->r[3]+0x00000014u); // 8009F2F0
  cmps(c,0,(int32_t)c->r[0],0); // 8009F2F4
  if (crb(c,1)) { goto L_8009F314; } // 8009F2F8
L_8009F2FC:;
  c->r[3]=c->r[27]|c->r[27]; // 8009F2FC
  c->r[4]=c->r[31]|c->r[31]; // 8009F300
  c->lr=0x8009F308u; f_802DDD08(c); // 8009F304
  c->r[3]=R32(c->r[31]+0x00000008u); // 8009F308
  c->r[4]=0u+0x00000001u; // 8009F30C
  c->lr=0x8009F314u; f_8009F364(c); // 8009F310
L_8009F314:;
  c->r[3]=0u+0x00000001u; // 8009F314
  goto L_8009F338; // 8009F318
L_8009F31C:;
  W32(c->r[1]+0x00000008u,c->r[27]); // 8009F31C
  c->r[3]=c->r[1]+0x00000010u; // 8009F320
  c->r[4]=c->r[1]+0x00000008u; // 8009F324
  c->lr=0x8009F32Cu; f_8009F25C(c); // 8009F328
  cmps(c,0,(int32_t)c->r[3],0); // 8009F32C
  if (!crb(c,2)) { IRQCHK(c); goto L_8009F2A8; } // 8009F330
  c->r[3]=0u+0x00000000u; // 8009F334
L_8009F338:;
  {uint32_t ea=c->r[1]+0x0000001Cu; for(int i=27;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 8009F338
  c->r[0]=R32(c->r[1]+0x00000034u); // 8009F33C
  c->lr=c->r[0]; // 8009F340
  c->r[1]=c->r[1]+0x00000030u; // 8009F344
  return; // 8009F348
}

// fn_8009F34C
void f_8009F34C(Ctx* __restrict c) {
  trace_call(0x8009F34Cu);
  c->r[0]=R32(c->r[4]+0x00000000u); // 8009F34C
  W32(c->r[3]+0x00000000u,c->r[0]); // 8009F350
  c->r[3]=R32(c->r[4]+0x00000000u); // 8009F354
  c->r[0]=R32(c->r[3]+0x00000000u); // 8009F358
  W32(c->r[4]+0x00000000u,c->r[0]); // 8009F35C
  return; // 8009F360
}

// fn_8009F364
void f_8009F364(Ctx* __restrict c) {
  trace_call(0x8009F364u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8009F364
  c->r[0]=c->lr; // 8009F368
  cmps(c,0,(int32_t)c->r[3],0); // 8009F36C
  W32(c->r[1]+0x00000014u,c->r[0]); // 8009F370
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 8009F374
  c->r[30]=c->r[3]|c->r[3]; // 8009F378
  c->r[31]=c->r[4]|c->r[4]; // 8009F37C
  if (crb(c,2)) { goto L_8009F3A0; } // 8009F380
  if (crb(c,2)) { goto L_8009F390; } // 8009F384
  c->r[4]=0u+0x00000000u; // 8009F388
  c->lr=0x8009F390u; f_800455D8(c); // 8009F38C
L_8009F390:;
  cmps(c,0,(int32_t)c->r[31],0); // 8009F390
  if (!crb(c,1)) { goto L_8009F3A0; } // 8009F394
  c->r[3]=c->r[30]|c->r[30]; // 8009F398
  c->lr=0x8009F3A0u; f_8009D770(c); // 8009F39C
L_8009F3A0:;
  c->r[3]=c->r[30]|c->r[30]; // 8009F3A0
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 8009F3A4
  c->r[0]=R32(c->r[1]+0x00000014u); // 8009F3A8
  c->lr=c->r[0]; // 8009F3AC
  c->r[1]=c->r[1]+0x00000010u; // 8009F3B0
  return; // 8009F3B4
}

// fn_8009F3B8
void f_8009F3B8(Ctx* __restrict c) {
  trace_call(0x8009F3B8u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8009F3B8
  c->r[0]=c->lr; // 8009F3BC
  W32(c->r[1]+0x00000034u,c->r[0]); // 8009F3C0
  {uint32_t ea=c->r[1]+0x00000024u; for(int i=29;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 8009F3C4
  c->r[29]=c->r[3]|c->r[3]; // 8009F3C8
  c->r[30]=c->r[4]|c->r[4]; // 8009F3CC
  c->r[31]=c->r[5]|c->r[5]; // 8009F3D0
  c->r[0]=R32(c->r[3]+0x00000000u); // 8009F3D4
  W32(c->r[1]+0x00000010u,c->r[0]); // 8009F3D8
  goto L_8009F418; // 8009F3DC
L_8009F3E0:;
  c->r[3]=R32(c->r[1]+0x00000010u); // 8009F3E0
  c->r[3]=R32(c->r[3]+0x00000008u); // 8009F3E4
  c->r[0]=R32(c->r[3]+0x0000000Cu); // 8009F3E8
  cmps(c,0,(int32_t)c->r[30],(int32_t)c->r[0]); // 8009F3EC
  if (!crb(c,2)) { goto L_8009F408; } // 8009F3F0
  c->r[0]=R32(c->r[3]+0x00000010u); // 8009F3F4
  cmps(c,0,(int32_t)c->r[31],(int32_t)c->r[0]); // 8009F3F8
  if (!crb(c,2)) { goto L_8009F408; } // 8009F3FC
  c->r[3]=0u+0x00000001u; // 8009F400
  goto L_8009F434; // 8009F404
L_8009F408:;
  c->r[3]=c->r[1]+0x0000000Cu; // 8009F408
  c->r[4]=c->r[1]+0x00000010u; // 8009F40C
  c->r[5]=0u+0x00000000u; // 8009F410
  c->lr=0x8009F418u; f_8009F34C(c); // 8009F414
L_8009F418:;
  W32(c->r[1]+0x00000008u,c->r[29]); // 8009F418
  c->r[3]=c->r[1]+0x00000010u; // 8009F41C
  c->r[4]=c->r[1]+0x00000008u; // 8009F420
  c->lr=0x8009F428u; f_8009F25C(c); // 8009F424
  cmps(c,0,(int32_t)c->r[3],0); // 8009F428
  if (!crb(c,2)) { IRQCHK(c); goto L_8009F3E0; } // 8009F42C
  c->r[3]=0u+0x00000000u; // 8009F430
L_8009F434:;
  {uint32_t ea=c->r[1]+0x00000024u; for(int i=29;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 8009F434
  c->r[0]=R32(c->r[1]+0x00000034u); // 8009F438
  c->lr=c->r[0]; // 8009F43C
  c->r[1]=c->r[1]+0x00000030u; // 8009F440
  return; // 8009F444
}

// fn_8009F448
void f_8009F448(Ctx* __restrict c) {
  trace_call(0x8009F448u);
  f_802DDD44(c); return; // 8009F448
}

// fn_8009F44C
void f_8009F44C(Ctx* __restrict c) {
  trace_call(0x8009F44Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8009F44C
  c->r[0]=c->lr; // 8009F450
  W32(c->r[1]+0x00000024u,c->r[0]); // 8009F454
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 8009F458
  c->r[29]=c->r[3]|c->r[3]; // 8009F45C
  c->r[30]=c->r[4]|c->r[4]; // 8009F460
  c->r[31]=0u+0x00000000u; // 8009F464
  c->r[0]=R32(c->r[3]+0x00000000u); // 8009F468
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 8009F46C
  goto L_8009F498; // 8009F470
L_8009F474:;
  cmpu(c,0,c->r[31],c->r[30]); // 8009F474
  if (crb(c,0)) { goto L_8009F488; } // 8009F478
  c->r[3]=R32(c->r[1]+0x0000000Cu); // 8009F47C
  c->r[3]=R32(c->r[3]+0x00000008u); // 8009F480
  goto L_8009F4B4; // 8009F484
L_8009F488:;
  c->r[3]=R32(c->r[1]+0x0000000Cu); // 8009F488
  c->r[31]=c->r[31]+0x00000001u; // 8009F48C
  c->r[0]=R32(c->r[3]+0x00000000u); // 8009F490
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 8009F494
L_8009F498:;
  W32(c->r[1]+0x00000008u,c->r[29]); // 8009F498
  c->r[3]=c->r[1]+0x0000000Cu; // 8009F49C
  c->r[4]=c->r[1]+0x00000008u; // 8009F4A0
  c->lr=0x8009F4A8u; f_8009F25C(c); // 8009F4A4
  cmps(c,0,(int32_t)c->r[3],0); // 8009F4A8
  if (!crb(c,2)) { IRQCHK(c); goto L_8009F474; } // 8009F4AC
  c->r[3]=0u+0x00000000u; // 8009F4B0
L_8009F4B4:;
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 8009F4B4
  c->r[0]=R32(c->r[1]+0x00000024u); // 8009F4B8
  c->lr=c->r[0]; // 8009F4BC
  c->r[1]=c->r[1]+0x00000020u; // 8009F4C0
  return; // 8009F4C4
}

// fn_8009F4C8
void f_8009F4C8(Ctx* __restrict c) {
  trace_call(0x8009F4C8u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8009F4C8
  c->r[0]=c->lr; // 8009F4CC
  W32(c->r[1]+0x00000024u,c->r[0]); // 8009F4D0
  {uint32_t ea=c->r[1]+0x00000018u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 8009F4D4
  c->r[30]=c->r[3]|c->r[3]; // 8009F4D8
  c->r[31]=c->r[4]|c->r[4]; // 8009F4DC
  c->r[0]=R32(c->r[3]+0x00000000u); // 8009F4E0
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 8009F4E4
  goto L_8009F50C; // 8009F4E8
L_8009F4EC:;
  c->r[4]=R32(c->r[1]+0x0000000Cu); // 8009F4EC
  c->r[3]=R32(c->r[4]+0x00000008u); // 8009F4F0
  c->r[0]=R32(c->r[3]+0x0000000Cu); // 8009F4F4
  cmps(c,0,(int32_t)c->r[31],(int32_t)c->r[0]); // 8009F4F8
  if (!crb(c,2)) { goto L_8009F504; } // 8009F4FC
  goto L_8009F528; // 8009F500
L_8009F504:;
  c->r[0]=R32(c->r[4]+0x00000000u); // 8009F504
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 8009F508
L_8009F50C:;
  W32(c->r[1]+0x00000008u,c->r[30]); // 8009F50C
  c->r[3]=c->r[1]+0x0000000Cu; // 8009F510
  c->r[4]=c->r[1]+0x00000008u; // 8009F514
  c->lr=0x8009F51Cu; f_8009F25C(c); // 8009F518
  cmps(c,0,(int32_t)c->r[3],0); // 8009F51C
  if (!crb(c,2)) { IRQCHK(c); goto L_8009F4EC; } // 8009F520
  c->r[3]=0u+0x00000000u; // 8009F524
L_8009F528:;
  {uint32_t ea=c->r[1]+0x00000018u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 8009F528
  c->r[0]=R32(c->r[1]+0x00000024u); // 8009F52C
  c->lr=c->r[0]; // 8009F530
  c->r[1]=c->r[1]+0x00000020u; // 8009F534
  return; // 8009F538
}

// fn_8009F53C
void f_8009F53C(Ctx* __restrict c) {
  trace_call(0x8009F53Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8009F53C
  c->r[0]=c->lr; // 8009F540
  W32(c->r[1]+0x00000014u,c->r[0]); // 8009F544
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8009F548
  c->r[31]=c->r[3]|c->r[3]; // 8009F54C
  c->lr=0x8009F554u; f_800506C0(c); // 8009F550
  W32(c->r[31]+0x00000008u,c->r[31]); // 8009F554
  c->r[3]=c->r[31]+0x00000058u; // 8009F558
  c->lr=0x8009F560u; f_800506C0(c); // 8009F55C
  c->r[3]=c->r[31]+0x00000064u; // 8009F560
  c->lr=0x8009F568u; f_800506C0(c); // 8009F564
  c->r[0]=0u+0xFFFFFFFFu; // 8009F568
  W32(c->r[31]+0x0000000Cu,c->r[0]); // 8009F56C
  c->r[3]=c->r[31]|c->r[31]; // 8009F570
  c->lr=0x8009F578u; f_8009FA54(c); // 8009F574
  c->r[3]=c->r[31]|c->r[31]; // 8009F578
  c->lr=0x8009F580u; f_8009FA78(c); // 8009F57C
  c->r[3]=c->r[31]|c->r[31]; // 8009F580
  c->lr=0x8009F588u; f_8009FA9C(c); // 8009F584
  c->r[4]=0u+0x80690000u; // 8009F588
  c->r[3]=c->r[31]+0x00000038u; // 8009F58C
  c->r[4]=c->r[4]+0xFFFFDD38u; // 8009F590
  c->r[4]=c->r[4]+0x00000047u; // 8009F594
  c->lr=0x8009F59Cu; f_803B37C0(c); // 8009F598
  c->r[4]=c->r[31]+0x00000058u; // 8009F59C
  c->r[0]=c->r[31]+0x00000064u; // 8009F5A0
  W32(c->r[31]+0x00000058u,c->r[4]); // 8009F5A4
  c->r[3]=c->r[31]|c->r[31]; // 8009F5A8
  W32(c->r[31]+0x0000005Cu,c->r[4]); // 8009F5AC
  W32(c->r[31]+0x00000064u,c->r[0]); // 8009F5B0
  W32(c->r[31]+0x00000068u,c->r[0]); // 8009F5B4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8009F5B8
  c->r[0]=R32(c->r[1]+0x00000014u); // 8009F5BC
  c->lr=c->r[0]; // 8009F5C0
  c->r[1]=c->r[1]+0x00000010u; // 8009F5C4
  return; // 8009F5C8
}

// dtor_8009F5CC
void f_8009F5CC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8009F5CC
  c->r[0]=c->lr; // 8009F5D0
  cmps(c,0,(int32_t)c->r[3],0); // 8009F5D4
  W32(c->r[1]+0x00000014u,c->r[0]); // 8009F5D8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8009F5DC
  c->r[31]=c->r[3]|c->r[3]; // 8009F5E0
  if (crb(c,2)) { goto L_8009F5F0; } // 8009F5E4
  c->r[4]=0u+0x00000000u; // 8009F5E8
  c->lr=0x8009F5F0u; f_800455D8(c); // 8009F5EC
L_8009F5F0:;
  c->r[3]=c->r[31]|c->r[31]; // 8009F5F0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8009F5F4
  c->r[0]=R32(c->r[1]+0x00000014u); // 8009F5F8
  c->lr=c->r[0]; // 8009F5FC
  c->r[1]=c->r[1]+0x00000010u; // 8009F600
  return; // 8009F604
}

// dtor_8009F608
void f_8009F608(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8009F608
  c->r[0]=c->lr; // 8009F60C
  cmps(c,0,(int32_t)c->r[3],0); // 8009F610
  W32(c->r[1]+0x00000014u,c->r[0]); // 8009F614
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8009F618
  c->r[31]=c->r[3]|c->r[3]; // 8009F61C
  if (crb(c,2)) { goto L_8009F62C; } // 8009F620
  c->r[4]=0u+0x00000000u; // 8009F624
  c->lr=0x8009F62Cu; f_80045C7C(c); // 8009F628
L_8009F62C:;
  c->r[3]=c->r[31]|c->r[31]; // 8009F62C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8009F630
  c->r[0]=R32(c->r[1]+0x00000014u); // 8009F634
  c->lr=c->r[0]; // 8009F638
  c->r[1]=c->r[1]+0x00000010u; // 8009F63C
  return; // 8009F640
}

// dtor_8009F644
void f_8009F644(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8009F644
  c->r[0]=c->lr; // 8009F648
  cmps(c,0,(int32_t)c->r[3],0); // 8009F64C
  W32(c->r[1]+0x00000014u,c->r[0]); // 8009F650
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8009F654
  c->r[31]=c->r[3]|c->r[3]; // 8009F658
  if (crb(c,2)) { goto L_8009F668; } // 8009F65C
  c->r[4]=0u+0x00000000u; // 8009F660
  c->lr=0x8009F668u; f_80045C7C(c); // 8009F664
L_8009F668:;
  c->r[3]=c->r[31]|c->r[31]; // 8009F668
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8009F66C
  c->r[0]=R32(c->r[1]+0x00000014u); // 8009F670
  c->lr=c->r[0]; // 8009F674
  c->r[1]=c->r[1]+0x00000010u; // 8009F678
  return; // 8009F67C
}

// fn_8009F680
void f_8009F680(Ctx* __restrict c) {
  trace_call(0x8009F680u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8009F680
  c->r[0]=c->lr; // 8009F684
  cmps(c,0,(int32_t)c->r[3],0); // 8009F688
  W32(c->r[1]+0x00000044u,c->r[0]); // 8009F68C
  {uint32_t ea=c->r[1]+0x0000002Cu; for(int i=27;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 8009F690
  c->r[27]=c->r[3]|c->r[3]; // 8009F694
  c->r[28]=c->r[4]|c->r[4]; // 8009F698
  if (crb(c,2)) { goto L_8009F7C8; } // 8009F69C
  c->r[0]=R32(c->r[3]+0x00000058u); // 8009F6A0
  c->r[31]=c->r[3]+0x00000058u; // 8009F6A4
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 8009F6A8
  goto L_8009F6F0; // 8009F6AC
L_8009F6B0:;
  c->r[4]=R32(c->r[1]+0x0000001Cu); // 8009F6B0
  c->r[3]=c->r[27]+0x00000058u; // 8009F6B4
  c->r[30]=R32(c->r[4]+0x00000000u); // 8009F6B8
  c->r[4]=R32(c->r[4]+0x00000008u); // 8009F6BC
  c->lr=0x8009F6C4u; f_802DDD08(c); // 8009F6C0
  c->r[3]=R32(c->r[1]+0x0000001Cu); // 8009F6C4
  c->r[29]=R32(c->r[3]+0x00000008u); // 8009F6C8
  cmps(c,0,(int32_t)c->r[29],0); // 8009F6CC
  if (crb(c,2)) { goto L_8009F6EC; } // 8009F6D0
  if (crb(c,2)) { goto L_8009F6E4; } // 8009F6D4
  c->r[3]=c->r[29]|c->r[29]; // 8009F6D8
  c->r[4]=0u+0x00000000u; // 8009F6DC
  c->lr=0x8009F6E4u; f_800455D8(c); // 8009F6E0
L_8009F6E4:;
  c->r[3]=c->r[29]|c->r[29]; // 8009F6E4
  c->lr=0x8009F6ECu; f_8009D770(c); // 8009F6E8
L_8009F6EC:;
  W32(c->r[1]+0x0000001Cu,c->r[30]); // 8009F6EC
L_8009F6F0:;
  W32(c->r[1]+0x00000010u,c->r[31]); // 8009F6F0
  c->r[3]=c->r[1]+0x0000001Cu; // 8009F6F4
  c->r[4]=c->r[1]+0x00000010u; // 8009F6F8
  c->lr=0x8009F700u; f_8009B618(c); // 8009F6FC
  cmps(c,0,(int32_t)c->r[3],0); // 8009F700
  if (!crb(c,2)) { IRQCHK(c); goto L_8009F6B0; } // 8009F704
  c->r[3]=c->r[27]+0x00000058u; // 8009F708
  W32(c->r[27]+0x00000058u,c->r[3]); // 8009F70C
  c->r[0]=R32(c->r[27]+0x00000064u); // 8009F710
  c->r[31]=c->r[27]+0x00000064u; // 8009F714
  W32(c->r[27]+0x0000005Cu,c->r[3]); // 8009F718
  W32(c->r[1]+0x00000018u,c->r[0]); // 8009F71C
  goto L_8009F764; // 8009F720
L_8009F724:;
  c->r[0]=R32(c->r[1]+0x00000018u); // 8009F724
  c->r[3]=c->r[1]+0x0000000Cu; // 8009F728
  W32(c->r[1]+0x00000014u,c->r[0]); // 8009F72C
  c->r[4]=c->r[1]+0x00000014u; // 8009F730
  c->r[5]=0u+0x00000000u; // 8009F734
  c->lr=0x8009F73Cu; f_8009F7E0(c); // 8009F738
  c->r[4]=R32(c->r[1]+0x00000018u); // 8009F73C
  c->r[3]=c->r[27]+0x00000064u; // 8009F740
  c->r[4]=R32(c->r[4]+0x00000008u); // 8009F744
  c->lr=0x8009F74Cu; f_802DDD08(c); // 8009F748
  c->r[3]=R32(c->r[1]+0x00000018u); // 8009F74C
  c->r[4]=0u+0x00000001u; // 8009F750
  c->r[3]=R32(c->r[3]+0x00000008u); // 8009F754
  c->lr=0x8009F75Cu; f_8009F7F8(c); // 8009F758
  c->r[0]=R32(c->r[1]+0x00000014u); // 8009F75C
  W32(c->r[1]+0x00000018u,c->r[0]); // 8009F760
L_8009F764:;
  W32(c->r[1]+0x00000008u,c->r[31]); // 8009F764
  c->r[3]=c->r[1]+0x00000018u; // 8009F768
  c->r[4]=c->r[1]+0x00000008u; // 8009F76C
  c->lr=0x8009F774u; f_8009F84C(c); // 8009F770
  cmps(c,0,(int32_t)c->r[3],0); // 8009F774
  if (!crb(c,2)) { IRQCHK(c); goto L_8009F724; } // 8009F778
  c->r[3]=addc(c,c->r[27],0x00000064u,0); cr0(c,c->r[3]); // 8009F77C
  W32(c->r[27]+0x00000064u,c->r[3]); // 8009F780
  W32(c->r[27]+0x00000068u,c->r[3]); // 8009F784
  if (crb(c,2)) { goto L_8009F794; } // 8009F788
  c->r[4]=0u+0x00000000u; // 8009F78C
  c->lr=0x8009F794u; f_80045C7C(c); // 8009F790
L_8009F794:;
  c->r[3]=addc(c,c->r[27],0x00000058u,0); cr0(c,c->r[3]); // 8009F794
  if (crb(c,2)) { goto L_8009F7A4; } // 8009F798
  c->r[4]=0u+0x00000000u; // 8009F79C
  c->lr=0x8009F7A4u; f_80045C7C(c); // 8009F7A0
L_8009F7A4:;
  cmps(c,0,(int32_t)c->r[27],0); // 8009F7A4
  if (crb(c,2)) { goto L_8009F7B8; } // 8009F7A8
  c->r[3]=c->r[27]|c->r[27]; // 8009F7AC
  c->r[4]=0u+0x00000000u; // 8009F7B0
  c->lr=0x8009F7B8u; f_800455D8(c); // 8009F7B4
L_8009F7B8:;
  cmps(c,0,(int32_t)c->r[28],0); // 8009F7B8
  if (!crb(c,1)) { goto L_8009F7C8; } // 8009F7BC
  c->r[3]=c->r[27]|c->r[27]; // 8009F7C0
  c->lr=0x8009F7C8u; f_8009D770(c); // 8009F7C4
L_8009F7C8:;
  c->r[3]=c->r[27]|c->r[27]; // 8009F7C8
  {uint32_t ea=c->r[1]+0x0000002Cu; for(int i=27;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 8009F7CC
  c->r[0]=R32(c->r[1]+0x00000044u); // 8009F7D0
  c->lr=c->r[0]; // 8009F7D4
  c->r[1]=c->r[1]+0x00000040u; // 8009F7D8
  return; // 8009F7DC
}

// fn_8009F7E0
void f_8009F7E0(Ctx* __restrict c) {
  trace_call(0x8009F7E0u);
  c->r[0]=R32(c->r[4]+0x00000000u); // 8009F7E0
  W32(c->r[3]+0x00000000u,c->r[0]); // 8009F7E4
  c->r[3]=R32(c->r[4]+0x00000000u); // 8009F7E8
  c->r[0]=R32(c->r[3]+0x00000000u); // 8009F7EC
  W32(c->r[4]+0x00000000u,c->r[0]); // 8009F7F0
  return; // 8009F7F4
}

// fn_8009F7F8
void f_8009F7F8(Ctx* __restrict c) {
  trace_call(0x8009F7F8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8009F7F8
  c->r[0]=c->lr; // 8009F7FC
  cmps(c,0,(int32_t)c->r[3],0); // 8009F800
  W32(c->r[1]+0x00000014u,c->r[0]); // 8009F804
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 8009F808
  c->r[30]=c->r[3]|c->r[3]; // 8009F80C
  c->r[31]=c->r[4]|c->r[4]; // 8009F810
  if (crb(c,2)) { goto L_8009F834; } // 8009F814
  if (crb(c,2)) { goto L_8009F824; } // 8009F818
  c->r[4]=0u+0x00000000u; // 8009F81C
  c->lr=0x8009F824u; f_800455D8(c); // 8009F820
L_8009F824:;
  cmps(c,0,(int32_t)c->r[31],0); // 8009F824
  if (!crb(c,1)) { goto L_8009F834; } // 8009F828
  c->r[3]=c->r[30]|c->r[30]; // 8009F82C
  c->lr=0x8009F834u; f_8009D770(c); // 8009F830
L_8009F834:;
  c->r[3]=c->r[30]|c->r[30]; // 8009F834
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 8009F838
  c->r[0]=R32(c->r[1]+0x00000014u); // 8009F83C
  c->lr=c->r[0]; // 8009F840
  c->r[1]=c->r[1]+0x00000010u; // 8009F844
  return; // 8009F848
}

// fn_8009F84C
void f_8009F84C(Ctx* __restrict c) {
  trace_call(0x8009F84Cu);
  c->r[5]=R32(c->r[3]+0x00000000u); // 8009F84C
  c->r[3]=R32(c->r[4]+0x00000000u); // 8009F850
  c->r[4]=R32(c->r[5]+0x00000008u); // 8009F854
  c->r[0]=R32(c->r[3]+0x00000008u); // 8009F858
  c->r[3]=c->r[0]-c->r[4]; // 8009F85C
  c->r[0]=addc(c,c->r[3],0xFFFFFFFFu,0); // 8009F860
  c->r[3]=addc(c,~c->r[0],c->r[3],c->xer_ca); // 8009F864
  return; // 8009F868
}

// fn_8009F86C
void f_8009F86C(Ctx* __restrict c) {
  trace_call(0x8009F86Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8009F86C
  c->r[0]=c->lr; // 8009F870
  W32(c->r[1]+0x00000024u,c->r[0]); // 8009F874
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[31]);} // 8009F878
  {uint32_t ea=c->r[1]+0x00000018u; psq_store(c,31,ea,0,0);} // 8009F87C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8009F880
  W32(c->r[1]+0x00000008u,c->r[30]); // 8009F884
  c->r[30]=c->r[3]|c->r[3]; // 8009F888
  c->r[0]=R8(c->r[13]+0xFFFFBB9Bu); // 8009F88C
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 8009F890
  if (!crb(c,2)) { goto L_8009F8D0; } // 8009F894
  c->r[31]=0u+0x80730000u; // 8009F898
  c->r[3]=c->r[31]+0x00006D10u; // 8009F89C
  c->lr=0x8009F8A4u; f_802D8298(c); // 8009F8A0
  c->r[3]=0u+0x806D0000u; // 8009F8A4
  c->r[4]=0u+0x80050000u; // 8009F8A8
  c->r[3]=c->r[3]+0xFFFFC220u; // 8009F8AC
  c->r[5]=0u+0x80750000u; // 8009F8B0
  W32(c->r[31]+0x00006D10u,c->r[3]); // 8009F8B4
  c->r[3]=c->r[31]+0x00006D10u; // 8009F8B8
  c->r[4]=c->r[4]+0xFFFF9D40u; // 8009F8BC
  c->r[5]=c->r[5]+0xFFFFA3D4u; // 8009F8C0
  c->lr=0x8009F8C8u; f_803A92B8(c); // 8009F8C4
  c->r[0]=0u+0x00000001u; // 8009F8C8
  W8(c->r[13]+0xFFFFBB9Bu,c->r[0]); // 8009F8CC
L_8009F8D0:;
  c->r[0]=R32(c->r[30]+0x00000014u); // 8009F8D0
  c->r[3]=0u+0x80730000u; // 8009F8D4
  c->r[3]=c->r[3]+0x00006D10u; // 8009F8D8
  cmps(c,0,(int32_t)c->r[0],0); // 8009F8DC
  {uint32_t ea=c->r[3]+0x00000004u; c->f[31]=c->ps1[31]=RF32(ea);} // 8009F8E0
  if (crb(c,0)) { goto L_8009F8F4; } // 8009F8E4
  c->f[1]=c->f[31]; // 8009F8E8
  c->r[3]=c->r[30]|c->r[30]; // 8009F8EC
  c->lr=0x8009F8F4u; f_8009FAC0(c); // 8009F8F0
L_8009F8F4:;
  c->r[0]=R32(c->r[30]+0x00000020u); // 8009F8F4
  cmps(c,0,(int32_t)c->r[0],0); // 8009F8F8
  if (crb(c,0)) { goto L_8009F90C; } // 8009F8FC
  c->f[1]=c->f[31]; // 8009F900
  c->r[3]=c->r[30]|c->r[30]; // 8009F904
  c->lr=0x8009F90Cu; f_8009FC78(c); // 8009F908
L_8009F90C:;
  c->r[0]=R32(c->r[30]+0x0000002Cu); // 8009F90C
  cmps(c,0,(int32_t)c->r[0],0); // 8009F910
  if (crb(c,0)) { goto L_8009F924; } // 8009F914
  c->f[1]=c->f[31]; // 8009F918
  c->r[3]=c->r[30]|c->r[30]; // 8009F91C
  c->lr=0x8009F924u; f_8009FE38(c); // 8009F920
L_8009F924:;
  c->r[3]=c->r[30]+0x00000064u; // 8009F924
  c->lr=0x8009F92Cu; f_802DDD44(c); // 8009F928
  c->r[0]=addc(c,c->r[3],0xFFFFFFFFu,0); // 8009F92C
  c->r[0]=addc(c,~c->r[0],c->r[3],c->xer_ca); cr0(c,c->r[0]); // 8009F930
  if (crb(c,2)) { goto L_8009F944; } // 8009F934
  c->f[1]=c->f[31]; // 8009F938
  c->r[3]=c->r[30]|c->r[30]; // 8009F93C
  c->lr=0x8009F944u; f_800A0004(c); // 8009F940
L_8009F944:;
  {uint32_t ea=c->r[1]+0x00000018u; psq_load(c,31,ea,0,0);} // 8009F944
  c->r[3]=0u+0x00000001u; // 8009F948
  {uint32_t ea=c->r[1]+0x00000010u; c->f[31]=RF64(ea);} // 8009F94C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8009F950
  c->r[30]=R32(c->r[1]+0x00000008u); // 8009F954
  c->r[0]=R32(c->r[1]+0x00000024u); // 8009F958
  c->lr=c->r[0]; // 8009F95C
  c->r[1]=c->r[1]+0x00000020u; // 8009F960
  return; // 8009F964
}

// fn_8009F968
void f_8009F968(Ctx* __restrict c) {
  trace_call(0x8009F968u);
  c->r[3]=c->r[3]+0x00000058u; // 8009F968
  return; // 8009F96C
}

// fn_8009F970
void f_8009F970(Ctx* __restrict c) {
  trace_call(0x8009F970u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8009F970
  c->r[0]=c->lr; // 8009F974
  W32(c->r[1]+0x00000024u,c->r[0]); // 8009F978
  {uint32_t ea=c->r[1]+0x00000018u; WF64(ea,c->f[31]);} // 8009F97C
  c->f[31]=c->f[1]; // 8009F980
  {uint32_t ea=c->r[1]+0x0000000Cu; for(int i=29;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 8009F984
  c->r[29]=c->r[3]|c->r[3]; // 8009F988
  c->r[30]=c->r[4]|c->r[4]; // 8009F98C
  c->r[31]=c->r[5]|c->r[5]; // 8009F990
  c->lr=0x8009F998u; f_8009FA54(c); // 8009F994
  W32(c->r[29]+0x00000014u,c->r[30]); // 8009F998
  W32(c->r[29]+0x00000018u,c->r[31]); // 8009F99C
  {uint32_t ea=c->r[29]+0x0000001Cu; WF32(ea,c->f[31]);} // 8009F9A0
  {uint32_t ea=c->r[1]+0x00000018u; c->f[31]=RF64(ea);} // 8009F9A4
  {uint32_t ea=c->r[1]+0x0000000Cu; for(int i=29;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 8009F9A8
  c->r[0]=R32(c->r[1]+0x00000024u); // 8009F9AC
  c->lr=c->r[0]; // 8009F9B0
  c->r[1]=c->r[1]+0x00000020u; // 8009F9B4
  return; // 8009F9B8
}

// fn_8009F9BC
void f_8009F9BC(Ctx* __restrict c) {
  trace_call(0x8009F9BCu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8009F9BC
  c->r[0]=c->lr; // 8009F9C0
  W32(c->r[1]+0x00000024u,c->r[0]); // 8009F9C4
  {uint32_t ea=c->r[1]+0x00000018u; WF64(ea,c->f[31]);} // 8009F9C8
  c->f[31]=c->f[1]; // 8009F9CC
  {uint32_t ea=c->r[1]+0x0000000Cu; for(int i=29;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 8009F9D0
  c->r[29]=c->r[3]|c->r[3]; // 8009F9D4
  c->r[30]=c->r[4]|c->r[4]; // 8009F9D8
  c->r[31]=c->r[5]|c->r[5]; // 8009F9DC
  c->lr=0x8009F9E4u; f_8009FA78(c); // 8009F9E0
  W32(c->r[29]+0x00000020u,c->r[30]); // 8009F9E4
  W32(c->r[29]+0x00000024u,c->r[31]); // 8009F9E8
  {uint32_t ea=c->r[29]+0x00000028u; WF32(ea,c->f[31]);} // 8009F9EC
  {uint32_t ea=c->r[1]+0x00000018u; c->f[31]=RF64(ea);} // 8009F9F0
  {uint32_t ea=c->r[1]+0x0000000Cu; for(int i=29;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 8009F9F4
  c->r[0]=R32(c->r[1]+0x00000024u); // 8009F9F8
  c->lr=c->r[0]; // 8009F9FC
  c->r[1]=c->r[1]+0x00000020u; // 8009FA00
  return; // 8009FA04
}

// fn_8009FA08
void f_8009FA08(Ctx* __restrict c) {
  trace_call(0x8009FA08u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8009FA08
  c->r[0]=c->lr; // 8009FA0C
  W32(c->r[1]+0x00000024u,c->r[0]); // 8009FA10
  {uint32_t ea=c->r[1]+0x00000018u; WF64(ea,c->f[31]);} // 8009FA14
  c->f[31]=c->f[1]; // 8009FA18
  {uint32_t ea=c->r[1]+0x0000000Cu; for(int i=29;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 8009FA1C
  c->r[29]=c->r[3]|c->r[3]; // 8009FA20
  c->r[30]=c->r[4]|c->r[4]; // 8009FA24
  c->r[31]=c->r[5]|c->r[5]; // 8009FA28
  c->lr=0x8009FA30u; f_8009FA9C(c); // 8009FA2C
  W32(c->r[29]+0x0000002Cu,c->r[30]); // 8009FA30
  W32(c->r[29]+0x00000030u,c->r[31]); // 8009FA34
  {uint32_t ea=c->r[29]+0x00000034u; WF32(ea,c->f[31]);} // 8009FA38
  {uint32_t ea=c->r[1]+0x00000018u; c->f[31]=RF64(ea);} // 8009FA3C
  {uint32_t ea=c->r[1]+0x0000000Cu; for(int i=29;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 8009FA40
  c->r[0]=R32(c->r[1]+0x00000024u); // 8009FA44
  c->lr=c->r[0]; // 8009FA48
  c->r[1]=c->r[1]+0x00000020u; // 8009FA4C
  return; // 8009FA50
}

// fn_8009FA54
void f_8009FA54(Ctx* __restrict c) {
  trace_call(0x8009FA54u);
  c->r[0]=R32(c->r[3]+0x00000010u); // 8009FA54
  c->r[4]=0u+0xFFFFFFFFu; // 8009FA58
  {uint32_t ea=c->r[2]+0xFFFF98D0u; c->f[0]=c->ps1[0]=RF32(ea);} // 8009FA5C
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFEu; // 8009FA60
  W32(c->r[3]+0x00000014u,c->r[4]); // 8009FA64
  W32(c->r[3]+0x00000018u,c->r[4]); // 8009FA68
  {uint32_t ea=c->r[3]+0x0000001Cu; WF32(ea,c->f[0]);} // 8009FA6C
  W32(c->r[3]+0x00000010u,c->r[0]); // 8009FA70
  return; // 8009FA74
}

// fn_8009FA78
void f_8009FA78(Ctx* __restrict c) {
  trace_call(0x8009FA78u);
  c->r[0]=R32(c->r[3]+0x00000010u); // 8009FA78
  c->r[4]=0u+0xFFFFFFFFu; // 8009FA7C
  {uint32_t ea=c->r[2]+0xFFFF98D0u; c->f[0]=c->ps1[0]=RF32(ea);} // 8009FA80
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFDu; // 8009FA84
  W32(c->r[3]+0x00000020u,c->r[4]); // 8009FA88
  W32(c->r[3]+0x00000024u,c->r[4]); // 8009FA8C
  {uint32_t ea=c->r[3]+0x00000028u; WF32(ea,c->f[0]);} // 8009FA90
  W32(c->r[3]+0x00000010u,c->r[0]); // 8009FA94
  return; // 8009FA98
}

// fn_8009FA9C
void f_8009FA9C(Ctx* __restrict c) {
  trace_call(0x8009FA9Cu);
  c->r[0]=R32(c->r[3]+0x00000010u); // 8009FA9C
  c->r[4]=0u+0xFFFFFFFFu; // 8009FAA0
  {uint32_t ea=c->r[2]+0xFFFF98D0u; c->f[0]=c->ps1[0]=RF32(ea);} // 8009FAA4
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFBu; // 8009FAA8
  W32(c->r[3]+0x0000002Cu,c->r[4]); // 8009FAAC
  W32(c->r[3]+0x00000030u,c->r[4]); // 8009FAB0
  {uint32_t ea=c->r[3]+0x00000034u; WF32(ea,c->f[0]);} // 8009FAB4
  W32(c->r[3]+0x00000010u,c->r[0]); // 8009FAB8
  return; // 8009FABC
}

// fn_8009FAC0
void f_8009FAC0(Ctx* __restrict c) {
  trace_call(0x8009FAC0u);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8009FAC0
  c->r[0]=c->lr; // 8009FAC4
  W32(c->r[1]+0x00000054u,c->r[0]); // 8009FAC8
  c->r[11]=c->r[1]+0x00000040u; // 8009FACC
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[31]);} // 8009FAD0
  {uint32_t ea=c->r[1]+0x00000048u; psq_store(c,31,ea,0,0);} // 8009FAD4
  c->lr=0x8009FADCu; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8009FAD8
  c->r[0]=R32(c->r[3]+0x00000010u); // 8009FADC
  c->f[31]=c->f[1]; // 8009FAE0
  c->r[28]=c->r[3]|c->r[3]; // 8009FAE4
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 8009FAE8
  if (!crb(c,2)) { goto L_8009FBF8; } // 8009FAEC
  c->r[3]=c->r[3]+0x00000058u; // 8009FAF0
  c->lr=0x8009FAF8u; f_802DDD44(c); // 8009FAF4
  c->r[0]=R32(c->r[28]+0x00000058u); // 8009FAF8
  c->r[29]=c->r[3]|c->r[3]; // 8009FAFC
  W32(c->r[1]+0x00000020u,c->r[0]); // 8009FB00
  c->r[30]=c->r[28]+0x00000058u; // 8009FB04
  c->r[31]=0u+0x00000000u; // 8009FB08
  goto L_8009FBC8; // 8009FB0C
L_8009FB10:;
  W8(c->r[1]+0x0000000Cu,c->r[31]); // 8009FB10
  c->r[3]=c->r[1]+0x0000000Cu; // 8009FB14
  c->lr=0x8009FB1Cu; f_8004BDA8(c); // 8009FB18
  c->r[0]=R32(c->r[3]+0x00000000u); // 8009FB1C
  c->r[26]=c->r[3]|c->r[3]; // 8009FB20
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 8009FB24
  goto L_8009FBA4; // 8009FB28
L_8009FB2C:;
  c->r[4]=R32(c->r[1]+0x0000001Cu); // 8009FB2C
  c->r[3]=R32(c->r[28]+0x0000000Cu); // 8009FB30
  c->r[27]=R32(c->r[4]+0x00000008u); // 8009FB34
  c->r[4]=R32(c->r[27]+0x00000448u); // 8009FB38
  c->r[0]=R32(c->r[4]+0x0000000Cu); // 8009FB3C
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 8009FB40
  if (!crb(c,2)) { goto L_8009FB94; } // 8009FB44
  c->r[3]=R32(c->r[1]+0x00000020u); // 8009FB48
  c->r[0]=R32(c->r[4]+0x00000004u); // 8009FB4C
  c->r[3]=R32(c->r[3]+0x00000008u); // 8009FB50
  c->r[3]=R32(c->r[3]+0x0000000Cu); // 8009FB54
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 8009FB58
  if (!crb(c,2)) { goto L_8009FB94; } // 8009FB5C
  c->r[12]=R32(c->r[27]+0x0000001Cu); // 8009FB60
  c->r[3]=c->r[27]|c->r[27]; // 8009FB64
  c->r[12]=R32(c->r[12]+0x00000100u); // 8009FB68
  c->ctr=c->r[12]; // 8009FB6C
  if (true) { c->lr=0x8009FB74u; dispatch(c,c->ctr); } // 8009FB70
  cmps(c,0,(int32_t)c->r[3],0); // 8009FB74
  if (!crb(c,2)) { goto L_8009FBBC; } // 8009FB78
  c->r[3]=R32(c->r[27]+0x0000044Cu); // 8009FB7C
  c->r[0]=R32(c->r[3]+0x000000C4u); // 8009FB80
  c->r[0]=rotl(c->r[0],10)&0x00000001u; cr0(c,c->r[0]); // 8009FB84
  if (crb(c,2)) { goto L_8009FBBC; } // 8009FB88
  c->r[29]=c->r[29]+0xFFFFFFFFu; // 8009FB8C
  goto L_8009FBBC; // 8009FB90
L_8009FB94:;
  c->r[3]=c->r[1]+0x00000018u; // 8009FB94
  c->r[4]=c->r[1]+0x0000001Cu; // 8009FB98
  c->r[5]=0u+0x00000000u; // 8009FB9C
  c->lr=0x8009FBA4u; f_80067DB0(c); // 8009FBA0
L_8009FBA4:;
  W32(c->r[1]+0x00000014u,c->r[26]); // 8009FBA4
  c->r[3]=c->r[1]+0x0000001Cu; // 8009FBA8
  c->r[4]=c->r[1]+0x00000014u; // 8009FBAC
  c->lr=0x8009FBB4u; f_8004BEB8(c); // 8009FBB0
  cmps(c,0,(int32_t)c->r[3],0); // 8009FBB4
  if (!crb(c,2)) { IRQCHK(c); goto L_8009FB2C; } // 8009FBB8
L_8009FBBC:;
  c->r[3]=R32(c->r[1]+0x00000020u); // 8009FBBC
  c->r[0]=R32(c->r[3]+0x00000000u); // 8009FBC0
  W32(c->r[1]+0x00000020u,c->r[0]); // 8009FBC4
L_8009FBC8:;
  W32(c->r[1]+0x00000010u,c->r[30]); // 8009FBC8
  c->r[3]=c->r[1]+0x00000020u; // 8009FBCC
  c->r[4]=c->r[1]+0x00000010u; // 8009FBD0
  c->lr=0x8009FBD8u; f_8009B618(c); // 8009FBD4
  cmps(c,0,(int32_t)c->r[3],0); // 8009FBD8
  if (!crb(c,2)) { IRQCHK(c); goto L_8009FB10; } // 8009FBDC
  c->r[0]=R32(c->r[28]+0x00000014u); // 8009FBE0
  cmps(c,0,(int32_t)c->r[29],(int32_t)c->r[0]); // 8009FBE4
  if (crb(c,1)) { goto L_8009FBF8; } // 8009FBE8
  c->r[0]=R32(c->r[28]+0x00000010u); // 8009FBEC
  c->r[0]=c->r[0]|0x00000001u; // 8009FBF0
  W32(c->r[28]+0x00000010u,c->r[0]); // 8009FBF4
L_8009FBF8:;
  c->r[0]=R32(c->r[28]+0x00000010u); // 8009FBF8
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 8009FBFC
  if (crb(c,2)) { goto L_8009FC58; } // 8009FC00
  c->r[3]=c->r[28]|c->r[28]; // 8009FC04
  c->lr=0x8009FC0Cu; f_800A02A4(c); // 8009FC08
  cmps(c,0,(int32_t)c->r[3],0); // 8009FC0C
  if (!crb(c,2)) { goto L_8009FC58; } // 8009FC10
  {uint32_t ea=c->r[28]+0x0000001Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8009FC14
  {uint32_t ea=c->r[2]+0xFFFF98D0u; c->f[0]=c->ps1[0]=RF32(ea);} // 8009FC18
  fcmp(c,0,c->f[1],c->f[0]); // 8009FC1C
  setcrb(c,2,crb(c,0)|crb(c,2)); // 8009FC20
  if (!crb(c,2)) { goto L_8009FC50; } // 8009FC24
  c->r[0]=0u+0x00000000u; // 8009FC28
  W8(c->r[1]+0x00000008u,c->r[0]); // 8009FC2C
  c->r[3]=c->r[1]+0x00000008u; // 8009FC30
  c->lr=0x8009FC38u; f_8004F3FC(c); // 8009FC34
  c->r[4]=R32(c->r[28]+0x0000000Cu); // 8009FC38
  c->r[5]=R32(c->r[28]+0x00000018u); // 8009FC3C
  c->lr=0x8009FC44u; f_8009E56C(c); // 8009FC40
  c->r[3]=c->r[28]|c->r[28]; // 8009FC44
  c->lr=0x8009FC4Cu; f_8009FA54(c); // 8009FC48
  goto L_8009FC58; // 8009FC4C
L_8009FC50:;
  c->f[0]=c->ps1[0]=S(c->f[1]-c->f[31]); // 8009FC50
  {uint32_t ea=c->r[28]+0x0000001Cu; WF32(ea,c->f[0]);} // 8009FC54
L_8009FC58:;
  c->r[11]=c->r[1]+0x00000040u; // 8009FC58
  {uint32_t ea=c->r[1]+0x00000048u; psq_load(c,31,ea,0,0);} // 8009FC5C
  {uint32_t ea=c->r[1]+0x00000040u; c->f[31]=RF64(ea);} // 8009FC60
  c->lr=0x8009FC68u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8009FC64
  c->r[0]=R32(c->r[1]+0x00000054u); // 8009FC68
  c->lr=c->r[0]; // 8009FC6C
  c->r[1]=c->r[1]+0x00000050u; // 8009FC70
  return; // 8009FC74
}

// fn_8009FC78
void f_8009FC78(Ctx* __restrict c) {
  trace_call(0x8009FC78u);
  {uint32_t ea=c->r[1]+0xFFFFFF90u; W32(ea,c->r[1]); c->r[1]=ea;} // 8009FC78
  c->r[0]=c->lr; // 8009FC7C
  W32(c->r[1]+0x00000074u,c->r[0]); // 8009FC80
  c->r[11]=c->r[1]+0x00000050u; // 8009FC84
  {uint32_t ea=c->r[1]+0x00000060u; WF64(ea,c->f[31]);} // 8009FC88
  {uint32_t ea=c->r[1]+0x00000068u; psq_store(c,31,ea,0,0);} // 8009FC8C
  {uint32_t ea=c->r[1]+0x00000050u; WF64(ea,c->f[30]);} // 8009FC90
  {uint32_t ea=c->r[1]+0x00000058u; psq_store(c,30,ea,0,0);} // 8009FC94
  c->lr=0x8009FC9Cu; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8009FC98
  c->r[0]=R32(c->r[3]+0x00000010u); // 8009FC9C
  c->f[30]=c->f[1]; // 8009FCA0
  c->r[29]=c->r[3]|c->r[3]; // 8009FCA4
  c->r[0]=rotl(c->r[0],0)&0x00000002u; cr0(c,c->r[0]); // 8009FCA8
  if (!crb(c,2)) { goto L_8009FDB0; } // 8009FCAC
  c->r[0]=R32(c->r[3]+0x00000058u); // 8009FCB0
  c->r[30]=c->r[3]+0x00000058u; // 8009FCB4
  W32(c->r[1]+0x00000020u,c->r[0]); // 8009FCB8
  c->r[31]=0u+0x00000000u; // 8009FCBC
  {uint32_t ea=c->r[2]+0xFFFF98D8u; c->f[31]=RF64(ea);} // 8009FCC0
  c->r[28]=0u+0x43300000u; // 8009FCC4
  goto L_8009FD98; // 8009FCC8
L_8009FCCC:;
  W8(c->r[1]+0x0000000Cu,c->r[31]); // 8009FCCC
  c->r[3]=c->r[1]+0x0000000Cu; // 8009FCD0
  c->lr=0x8009FCD8u; f_8004BDA8(c); // 8009FCD4
  c->r[0]=R32(c->r[3]+0x00000000u); // 8009FCD8
  c->r[27]=c->r[3]|c->r[3]; // 8009FCDC
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 8009FCE0
  goto L_8009FD68; // 8009FCE4
L_8009FCE8:;
  c->r[4]=R32(c->r[1]+0x0000001Cu); // 8009FCE8
  c->r[3]=R32(c->r[29]+0x0000000Cu); // 8009FCEC
  c->r[5]=R32(c->r[4]+0x00000008u); // 8009FCF0
  c->r[4]=R32(c->r[5]+0x00000448u); // 8009FCF4
  c->r[0]=R32(c->r[4]+0x0000000Cu); // 8009FCF8
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 8009FCFC
  if (!crb(c,2)) { goto L_8009FD58; } // 8009FD00
  c->r[3]=R32(c->r[1]+0x00000020u); // 8009FD04
  c->r[0]=R32(c->r[4]+0x00000004u); // 8009FD08
  c->r[3]=R32(c->r[3]+0x00000008u); // 8009FD0C
  c->r[3]=R32(c->r[3]+0x0000000Cu); // 8009FD10
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 8009FD14
  if (!crb(c,2)) { goto L_8009FD58; } // 8009FD18
  c->r[0]=R32(c->r[29]+0x00000020u); // 8009FD1C
  c->r[3]=R32(c->r[5]+0x0000044Cu); // 8009FD20
  c->r[0]=c->r[0]^0x80000000u; // 8009FD24
  W32(c->r[1]+0x0000002Cu,c->r[0]); // 8009FD28
  {uint32_t ea=c->r[3]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 8009FD2C
  W32(c->r[1]+0x00000028u,c->r[28]); // 8009FD30
  {uint32_t ea=c->r[1]+0x00000028u; c->f[0]=RF64(ea);} // 8009FD34
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[31]); // 8009FD38
  fcmp(c,0,c->f[1],c->f[0]); // 8009FD3C
  setcrb(c,2,crb(c,0)|crb(c,2)); // 8009FD40
  if (!crb(c,2)) { goto L_8009FD80; } // 8009FD44
  c->r[0]=R32(c->r[29]+0x00000010u); // 8009FD48
  c->r[0]=c->r[0]|0x00000002u; // 8009FD4C
  W32(c->r[29]+0x00000010u,c->r[0]); // 8009FD50
  goto L_8009FD80; // 8009FD54
L_8009FD58:;
  c->r[3]=c->r[1]+0x00000018u; // 8009FD58
  c->r[4]=c->r[1]+0x0000001Cu; // 8009FD5C
  c->r[5]=0u+0x00000000u; // 8009FD60
  c->lr=0x8009FD68u; f_80067DB0(c); // 8009FD64
L_8009FD68:;
  W32(c->r[1]+0x00000014u,c->r[27]); // 8009FD68
  c->r[3]=c->r[1]+0x0000001Cu; // 8009FD6C
  c->r[4]=c->r[1]+0x00000014u; // 8009FD70
  c->lr=0x8009FD78u; f_8004BEB8(c); // 8009FD74
  cmps(c,0,(int32_t)c->r[3],0); // 8009FD78
  if (!crb(c,2)) { IRQCHK(c); goto L_8009FCE8; } // 8009FD7C
L_8009FD80:;
  c->r[0]=R32(c->r[29]+0x00000010u); // 8009FD80
  c->r[0]=rotl(c->r[0],0)&0x00000002u; cr0(c,c->r[0]); // 8009FD84
  if (!crb(c,2)) { goto L_8009FDB0; } // 8009FD88
  c->r[3]=R32(c->r[1]+0x00000020u); // 8009FD8C
  c->r[0]=R32(c->r[3]+0x00000000u); // 8009FD90
  W32(c->r[1]+0x00000020u,c->r[0]); // 8009FD94
L_8009FD98:;
  W32(c->r[1]+0x00000010u,c->r[30]); // 8009FD98
  c->r[3]=c->r[1]+0x00000020u; // 8009FD9C
  c->r[4]=c->r[1]+0x00000010u; // 8009FDA0
  c->lr=0x8009FDA8u; f_8009B618(c); // 8009FDA4
  cmps(c,0,(int32_t)c->r[3],0); // 8009FDA8
  if (!crb(c,2)) { IRQCHK(c); goto L_8009FCCC; } // 8009FDAC
L_8009FDB0:;
  c->r[0]=R32(c->r[29]+0x00000010u); // 8009FDB0
  c->r[0]=rotl(c->r[0],0)&0x00000002u; cr0(c,c->r[0]); // 8009FDB4
  if (crb(c,2)) { goto L_8009FE10; } // 8009FDB8
  c->r[3]=c->r[29]|c->r[29]; // 8009FDBC
  c->lr=0x8009FDC4u; f_800A02A4(c); // 8009FDC0
  cmps(c,0,(int32_t)c->r[3],0); // 8009FDC4
  if (!crb(c,2)) { goto L_8009FE10; } // 8009FDC8
  {uint32_t ea=c->r[29]+0x00000028u; c->f[1]=c->ps1[1]=RF32(ea);} // 8009FDCC
  {uint32_t ea=c->r[2]+0xFFFF98D0u; c->f[0]=c->ps1[0]=RF32(ea);} // 8009FDD0
  fcmp(c,0,c->f[1],c->f[0]); // 8009FDD4
  setcrb(c,2,crb(c,0)|crb(c,2)); // 8009FDD8
  if (!crb(c,2)) { goto L_8009FE08; } // 8009FDDC
  c->r[0]=0u+0x00000000u; // 8009FDE0
  W8(c->r[1]+0x00000008u,c->r[0]); // 8009FDE4
  c->r[3]=c->r[1]+0x00000008u; // 8009FDE8
  c->lr=0x8009FDF0u; f_8004F3FC(c); // 8009FDEC
  c->r[4]=R32(c->r[29]+0x0000000Cu); // 8009FDF0
  c->r[5]=R32(c->r[29]+0x00000024u); // 8009FDF4
  c->lr=0x8009FDFCu; f_8009E56C(c); // 8009FDF8
  c->r[3]=c->r[29]|c->r[29]; // 8009FDFC
  c->lr=0x8009FE04u; f_8009FA78(c); // 8009FE00
  goto L_8009FE10; // 8009FE04
L_8009FE08:;
  c->f[0]=c->ps1[0]=S(c->f[1]-c->f[30]); // 8009FE08
  {uint32_t ea=c->r[29]+0x00000028u; WF32(ea,c->f[0]);} // 8009FE0C
L_8009FE10:;
  c->r[11]=c->r[1]+0x00000050u; // 8009FE10
  {uint32_t ea=c->r[1]+0x00000068u; psq_load(c,31,ea,0,0);} // 8009FE14
  {uint32_t ea=c->r[1]+0x00000060u; c->f[31]=RF64(ea);} // 8009FE18
  {uint32_t ea=c->r[1]+0x00000058u; psq_load(c,30,ea,0,0);} // 8009FE1C
  {uint32_t ea=c->r[1]+0x00000050u; c->f[30]=RF64(ea);} // 8009FE20
  c->lr=0x8009FE28u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8009FE24
  c->r[0]=R32(c->r[1]+0x00000074u); // 8009FE28
  c->lr=c->r[0]; // 8009FE2C
  c->r[1]=c->r[1]+0x00000070u; // 8009FE30
  return; // 8009FE34
}

// fn_8009FE38
void f_8009FE38(Ctx* __restrict c) {
  trace_call(0x8009FE38u);
  {uint32_t ea=c->r[1]+0xFFFFFF90u; W32(ea,c->r[1]); c->r[1]=ea;} // 8009FE38
  c->r[0]=c->lr; // 8009FE3C
  W32(c->r[1]+0x00000074u,c->r[0]); // 8009FE40
  c->r[11]=c->r[1]+0x00000050u; // 8009FE44
  {uint32_t ea=c->r[1]+0x00000060u; WF64(ea,c->f[31]);} // 8009FE48
  {uint32_t ea=c->r[1]+0x00000068u; psq_store(c,31,ea,0,0);} // 8009FE4C
  {uint32_t ea=c->r[1]+0x00000050u; WF64(ea,c->f[30]);} // 8009FE50
  {uint32_t ea=c->r[1]+0x00000058u; psq_store(c,30,ea,0,0);} // 8009FE54
  c->lr=0x8009FE5Cu; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8009FE58
  c->r[0]=R32(c->r[3]+0x00000010u); // 8009FE5C
  c->f[30]=c->f[1]; // 8009FE60
  c->r[29]=c->r[3]|c->r[3]; // 8009FE64
  c->r[0]=rotl(c->r[0],0)&0x00000004u; cr0(c,c->r[0]); // 8009FE68
  if (!crb(c,2)) { goto L_8009FF7C; } // 8009FE6C
  c->r[0]=R32(c->r[3]+0x00000058u); // 8009FE70
  c->r[30]=c->r[3]+0x00000058u; // 8009FE74
  W32(c->r[1]+0x00000020u,c->r[0]); // 8009FE78
  c->r[31]=0u+0x00000000u; // 8009FE7C
  {uint32_t ea=c->r[2]+0xFFFF98D8u; c->f[31]=RF64(ea);} // 8009FE80
  c->r[28]=0u+0x43300000u; // 8009FE84
  goto L_8009FF64; // 8009FE88
L_8009FE8C:;
  W8(c->r[1]+0x0000000Cu,c->r[31]); // 8009FE8C
  c->r[3]=c->r[1]+0x0000000Cu; // 8009FE90
  c->lr=0x8009FE98u; f_8004BDA8(c); // 8009FE94
  c->r[0]=R32(c->r[3]+0x00000000u); // 8009FE98
  c->r[27]=c->r[3]|c->r[3]; // 8009FE9C
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 8009FEA0
  goto L_8009FF34; // 8009FEA4
L_8009FEA8:;
  c->r[4]=R32(c->r[1]+0x0000001Cu); // 8009FEA8
  c->r[3]=R32(c->r[29]+0x0000000Cu); // 8009FEAC
  c->r[5]=R32(c->r[4]+0x00000008u); // 8009FEB0
  c->r[4]=R32(c->r[5]+0x00000448u); // 8009FEB4
  c->r[0]=R32(c->r[4]+0x0000000Cu); // 8009FEB8
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 8009FEBC
  if (!crb(c,2)) { goto L_8009FF24; } // 8009FEC0
  c->r[3]=R32(c->r[1]+0x00000020u); // 8009FEC4
  c->r[0]=R32(c->r[4]+0x00000004u); // 8009FEC8
  c->r[3]=R32(c->r[3]+0x00000008u); // 8009FECC
  c->r[3]=R32(c->r[3]+0x0000000Cu); // 8009FED0
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 8009FED4
  if (!crb(c,2)) { goto L_8009FF24; } // 8009FED8
  c->r[0]=R32(c->r[29]+0x0000002Cu); // 8009FEDC
  c->r[4]=R32(c->r[5]+0x00000444u); // 8009FEE0
  c->r[0]=c->r[0]^0x80000000u; // 8009FEE4
  c->r[3]=R32(c->r[5]+0x0000044Cu); // 8009FEE8
  W32(c->r[1]+0x0000002Cu,c->r[0]); // 8009FEEC
  {uint32_t ea=c->r[4]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 8009FEF0
  W32(c->r[1]+0x00000028u,c->r[28]); // 8009FEF4
  {uint32_t ea=c->r[3]+0x00000000u; c->f[2]=c->ps1[2]=RF32(ea);} // 8009FEF8
  {uint32_t ea=c->r[1]+0x00000028u; c->f[0]=RF64(ea);} // 8009FEFC
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 8009FF00
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[31]); // 8009FF04
  fcmp(c,0,c->f[1],c->f[0]); // 8009FF08
  setcrb(c,2,crb(c,1)|crb(c,2)); // 8009FF0C
  if (!crb(c,2)) { goto L_8009FF4C; } // 8009FF10
  c->r[0]=R32(c->r[29]+0x00000010u); // 8009FF14
  c->r[0]=c->r[0]|0x00000004u; // 8009FF18
  W32(c->r[29]+0x00000010u,c->r[0]); // 8009FF1C
  goto L_8009FF4C; // 8009FF20
L_8009FF24:;
  c->r[3]=c->r[1]+0x00000018u; // 8009FF24
  c->r[4]=c->r[1]+0x0000001Cu; // 8009FF28
  c->r[5]=0u+0x00000000u; // 8009FF2C
  c->lr=0x8009FF34u; f_80067DB0(c); // 8009FF30
L_8009FF34:;
  W32(c->r[1]+0x00000014u,c->r[27]); // 8009FF34
  c->r[3]=c->r[1]+0x0000001Cu; // 8009FF38
  c->r[4]=c->r[1]+0x00000014u; // 8009FF3C
  c->lr=0x8009FF44u; f_8004BEB8(c); // 8009FF40
  cmps(c,0,(int32_t)c->r[3],0); // 8009FF44
  if (!crb(c,2)) { IRQCHK(c); goto L_8009FEA8; } // 8009FF48
L_8009FF4C:;
  c->r[0]=R32(c->r[29]+0x00000010u); // 8009FF4C
  c->r[0]=rotl(c->r[0],0)&0x00000004u; cr0(c,c->r[0]); // 8009FF50
  if (!crb(c,2)) { goto L_8009FF7C; } // 8009FF54
  c->r[3]=R32(c->r[1]+0x00000020u); // 8009FF58
  c->r[0]=R32(c->r[3]+0x00000000u); // 8009FF5C
  W32(c->r[1]+0x00000020u,c->r[0]); // 8009FF60
L_8009FF64:;
  W32(c->r[1]+0x00000010u,c->r[30]); // 8009FF64
  c->r[3]=c->r[1]+0x00000020u; // 8009FF68
  c->r[4]=c->r[1]+0x00000010u; // 8009FF6C
  c->lr=0x8009FF74u; f_8009B618(c); // 8009FF70
  cmps(c,0,(int32_t)c->r[3],0); // 8009FF74
  if (!crb(c,2)) { IRQCHK(c); goto L_8009FE8C; } // 8009FF78
L_8009FF7C:;
  c->r[0]=R32(c->r[29]+0x00000010u); // 8009FF7C
  c->r[0]=rotl(c->r[0],0)&0x00000004u; cr0(c,c->r[0]); // 8009FF80
  if (crb(c,2)) { goto L_8009FFDC; } // 8009FF84
  c->r[3]=c->r[29]|c->r[29]; // 8009FF88
  c->lr=0x8009FF90u; f_800A02A4(c); // 8009FF8C
  cmps(c,0,(int32_t)c->r[3],0); // 8009FF90
  if (!crb(c,2)) { goto L_8009FFDC; } // 8009FF94
  {uint32_t ea=c->r[29]+0x00000034u; c->f[1]=c->ps1[1]=RF32(ea);} // 8009FF98
  {uint32_t ea=c->r[2]+0xFFFF98D0u; c->f[0]=c->ps1[0]=RF32(ea);} // 8009FF9C
  fcmp(c,0,c->f[1],c->f[0]); // 8009FFA0
  setcrb(c,2,crb(c,0)|crb(c,2)); // 8009FFA4
  if (!crb(c,2)) { goto L_8009FFD4; } // 8009FFA8
  c->r[0]=0u+0x00000000u; // 8009FFAC
  W8(c->r[1]+0x00000008u,c->r[0]); // 8009FFB0
  c->r[3]=c->r[1]+0x00000008u; // 8009FFB4
  c->lr=0x8009FFBCu; f_8004F3FC(c); // 8009FFB8
  c->r[4]=R32(c->r[29]+0x0000000Cu); // 8009FFBC
  c->r[5]=R32(c->r[29]+0x00000030u); // 8009FFC0
  c->lr=0x8009FFC8u; f_8009E56C(c); // 8009FFC4
  c->r[3]=c->r[29]|c->r[29]; // 8009FFC8
  c->lr=0x8009FFD0u; f_8009FA9C(c); // 8009FFCC
  goto L_8009FFDC; // 8009FFD0
L_8009FFD4:;
  c->f[0]=c->ps1[0]=S(c->f[1]-c->f[30]); // 8009FFD4
  {uint32_t ea=c->r[29]+0x00000034u; WF32(ea,c->f[0]);} // 8009FFD8
L_8009FFDC:;
  c->r[11]=c->r[1]+0x00000050u; // 8009FFDC
  {uint32_t ea=c->r[1]+0x00000068u; psq_load(c,31,ea,0,0);} // 8009FFE0
  {uint32_t ea=c->r[1]+0x00000060u; c->f[31]=RF64(ea);} // 8009FFE4
  {uint32_t ea=c->r[1]+0x00000058u; psq_load(c,30,ea,0,0);} // 8009FFE8
  {uint32_t ea=c->r[1]+0x00000050u; c->f[30]=RF64(ea);} // 8009FFEC
  c->lr=0x8009FFF4u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8009FFF0
  c->r[0]=R32(c->r[1]+0x00000074u); // 8009FFF4
  c->lr=c->r[0]; // 8009FFF8
  c->r[1]=c->r[1]+0x00000070u; // 8009FFFC
  return; // 800A0000
}

// fn_800A0004
void f_800A0004(Ctx* __restrict c) {
  trace_call(0x800A0004u);
  {uint32_t ea=c->r[1]+0xFFFFFF70u; W32(ea,c->r[1]); c->r[1]=ea;} // 800A0004
  c->r[0]=c->lr; // 800A0008
  W32(c->r[1]+0x00000094u,c->r[0]); // 800A000C
  c->r[11]=c->r[1]+0x00000070u; // 800A0010
  {uint32_t ea=c->r[1]+0x00000080u; WF64(ea,c->f[31]);} // 800A0014
  {uint32_t ea=c->r[1]+0x00000088u; psq_store(c,31,ea,0,0);} // 800A0018
  {uint32_t ea=c->r[1]+0x00000070u; WF64(ea,c->f[30]);} // 800A001C
  {uint32_t ea=c->r[1]+0x00000078u; psq_store(c,30,ea,0,0);} // 800A0020
  c->lr=0x800A0028u; { W32(c->r[11]+0xFFFFFFD4u,c->r[21]); W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800A0024
  c->r[0]=R32(c->r[3]+0x00000064u); // 800A0028
  c->f[30]=c->f[1]; // 800A002C
  W32(c->r[1]+0x00000034u,c->r[0]); // 800A0030
  c->r[22]=c->r[3]|c->r[3]; // 800A0034
  {uint32_t ea=c->r[2]+0xFFFF98D0u; c->f[31]=c->ps1[31]=RF32(ea);} // 800A0038
  c->r[29]=c->r[3]+0x00000064u; // 800A003C
  c->r[31]=0u+0x00000000u; // 800A0040
  goto L_800A0264; // 800A0044
L_800A0048:;
  c->r[28]=R32(c->r[1]+0x00000034u); // 800A0048
  c->r[3]=c->r[1]+0x00000024u; // 800A004C
  c->r[4]=c->r[1]+0x00000034u; // 800A0050
  c->r[5]=0u+0x00000000u; // 800A0054
  c->lr=0x800A005Cu; f_8009F7E0(c); // 800A0058
  c->r[3]=R32(c->r[28]+0x00000008u); // 800A005C
  {uint32_t ea=c->r[3]+0x00000014u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A0060
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[30]); // 800A0064
  {uint32_t ea=c->r[3]+0x00000014u; WF32(ea,c->f[0]);} // 800A0068
  c->r[3]=R32(c->r[28]+0x00000008u); // 800A006C
  {uint32_t ea=c->r[3]+0x00000014u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A0070
  fcmp(c,0,c->f[0],c->f[31]); // 800A0074
  setcrb(c,2,crb(c,0)|crb(c,2)); // 800A0078
  c->r[0]=c->cr; // 800A007C
  c->r[0]=rotl(c->r[0],3)&0x00000001u; cr0(c,c->r[0]); // 800A0080
  if (crb(c,2)) { goto L_800A0264; } // 800A0084
  c->r[27]=R32(c->r[22]+0x0000000Cu); // 800A0088
  c->r[30]=c->r[22]+0x00000058u; // 800A008C
  c->r[26]=R32(c->r[3]+0x0000000Cu); // 800A0090
  c->r[25]=R32(c->r[3]+0x00000010u); // 800A0094
  c->r[0]=R32(c->r[22]+0x00000058u); // 800A0098
  W32(c->r[1]+0x00000030u,c->r[0]); // 800A009C
  goto L_800A0234; // 800A00A0
L_800A00A4:;
  c->r[24]=0u+0x00000000u; // 800A00A4
  W8(c->r[1]+0x0000000Cu,c->r[24]); // 800A00A8
  c->r[3]=c->r[1]+0x0000000Cu; // 800A00AC
  c->lr=0x800A00B4u; f_8004BDA8(c); // 800A00B0
  c->r[0]=R32(c->r[3]+0x00000000u); // 800A00B4
  c->r[23]=c->r[3]|c->r[3]; // 800A00B8
  W32(c->r[1]+0x0000002Cu,c->r[0]); // 800A00BC
  goto L_800A0120; // 800A00C0
L_800A00C4:;
  c->r[3]=R32(c->r[1]+0x0000002Cu); // 800A00C4
  c->r[21]=R32(c->r[3]+0x00000008u); // 800A00C8
  c->r[4]=R32(c->r[21]+0x00000448u); // 800A00CC
  c->r[0]=R32(c->r[4]+0x0000000Cu); // 800A00D0
  cmps(c,0,(int32_t)c->r[27],(int32_t)c->r[0]); // 800A00D4
  if (!crb(c,2)) { goto L_800A0110; } // 800A00D8
  c->r[3]=R32(c->r[1]+0x00000030u); // 800A00DC
  c->r[0]=R32(c->r[4]+0x00000004u); // 800A00E0
  c->r[3]=R32(c->r[3]+0x00000008u); // 800A00E4
  c->r[3]=R32(c->r[3]+0x0000000Cu); // 800A00E8
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 800A00EC
  if (!crb(c,2)) { goto L_800A0110; } // 800A00F0
  c->lr=0x800A00F8u; f_8009CAE0(c); // 800A00F4
  c->r[4]=c->r[21]|c->r[21]; // 800A00F8
  c->r[5]=c->r[25]|c->r[25]; // 800A00FC
  c->r[6]=c->r[26]|c->r[26]; // 800A0100
  c->lr=0x800A0108u; f_8009E0FC(c); // 800A0104
  c->r[24]=0u+0x00000001u; // 800A0108
  goto L_800A0138; // 800A010C
L_800A0110:;
  c->r[3]=c->r[1]+0x00000020u; // 800A0110
  c->r[4]=c->r[1]+0x0000002Cu; // 800A0114
  c->r[5]=0u+0x00000000u; // 800A0118
  c->lr=0x800A0120u; f_80067DB0(c); // 800A011C
L_800A0120:;
  W32(c->r[1]+0x0000001Cu,c->r[23]); // 800A0120
  c->r[3]=c->r[1]+0x0000002Cu; // 800A0124
  c->r[4]=c->r[1]+0x0000001Cu; // 800A0128
  c->lr=0x800A0130u; f_8004BEB8(c); // 800A012C
  cmps(c,0,(int32_t)c->r[3],0); // 800A0130
  if (!crb(c,2)) { IRQCHK(c); goto L_800A00C4; } // 800A0134
L_800A0138:;
  W8(c->r[1]+0x00000008u,c->r[31]); // 800A0138
  c->r[3]=c->r[1]+0x00000008u; // 800A013C
  c->lr=0x800A0144u; f_8004BE20(c); // 800A0140
  c->r[0]=R32(c->r[3]+0x00000000u); // 800A0144
  c->r[23]=c->r[3]|c->r[3]; // 800A0148
  W32(c->r[1]+0x00000028u,c->r[0]); // 800A014C
  goto L_800A01AC; // 800A0150
L_800A0154:;
  c->r[3]=R32(c->r[1]+0x00000028u); // 800A0154
  c->r[21]=R32(c->r[3]+0x00000008u); // 800A0158
  c->r[4]=R32(c->r[21]+0x00000448u); // 800A015C
  c->r[0]=R32(c->r[4]+0x0000000Cu); // 800A0160
  cmps(c,0,(int32_t)c->r[27],(int32_t)c->r[0]); // 800A0164
  if (!crb(c,2)) { goto L_800A01A0; } // 800A0168
  c->r[3]=R32(c->r[1]+0x00000030u); // 800A016C
  c->r[0]=R32(c->r[4]+0x00000004u); // 800A0170
  c->r[3]=R32(c->r[3]+0x00000008u); // 800A0174
  c->r[3]=R32(c->r[3]+0x0000000Cu); // 800A0178
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 800A017C
  if (!crb(c,2)) { goto L_800A01A0; } // 800A0180
  c->lr=0x800A0188u; f_8009CAE0(c); // 800A0184
  c->r[4]=c->r[21]|c->r[21]; // 800A0188
  c->r[5]=c->r[25]|c->r[25]; // 800A018C
  c->r[6]=c->r[26]|c->r[26]; // 800A0190
  c->lr=0x800A0198u; f_8009E0FC(c); // 800A0194
  c->r[24]=0u+0x00000001u; // 800A0198
  goto L_800A01C4; // 800A019C
L_800A01A0:;
  c->r[3]=R32(c->r[1]+0x00000028u); // 800A01A0
  c->r[0]=R32(c->r[3]+0x00000000u); // 800A01A4
  W32(c->r[1]+0x00000028u,c->r[0]); // 800A01A8
L_800A01AC:;
  W32(c->r[1]+0x00000018u,c->r[23]); // 800A01AC
  c->r[3]=c->r[1]+0x00000028u; // 800A01B0
  c->r[4]=c->r[1]+0x00000018u; // 800A01B4
  c->lr=0x800A01BCu; f_8004BE98(c); // 800A01B8
  cmps(c,0,(int32_t)c->r[3],0); // 800A01BC
  if (!crb(c,2)) { IRQCHK(c); goto L_800A0154; } // 800A01C0
L_800A01C4:;
  cmps(c,0,(int32_t)c->r[24],0); // 800A01C4
  if (!crb(c,2)) { goto L_800A0228; } // 800A01C8
  c->r[3]=R32(c->r[1]+0x00000030u); // 800A01CC
  c->r[3]=R32(c->r[3]+0x00000008u); // 800A01D0
  c->r[23]=R32(c->r[3]+0x0000000Cu); // 800A01D4
  c->lr=0x800A01DCu; f_8009CAE0(c); // 800A01D8
  c->r[5]=c->r[27]|c->r[27]; // 800A01DC
  c->r[6]=c->r[23]|c->r[23]; // 800A01E0
  c->r[4]=c->r[3]+0x000000C0u; // 800A01E4
  c->lr=0x800A01ECu; f_8009F0F4(c); // 800A01E8
  cmps(c,0,(int32_t)c->r[3],0); // 800A01EC
  if (!crb(c,2)) { goto L_800A0214; } // 800A01F0
  c->r[3]=R32(c->r[1]+0x00000030u); // 800A01F4
  c->r[3]=R32(c->r[3]+0x00000008u); // 800A01F8
  c->r[23]=R32(c->r[3]+0x0000000Cu); // 800A01FC
  c->lr=0x800A0204u; f_8009CAE0(c); // 800A0200
  c->r[5]=c->r[27]|c->r[27]; // 800A0204
  c->r[6]=c->r[23]|c->r[23]; // 800A0208
  c->r[4]=c->r[3]+0x000000CCu; // 800A020C
  c->lr=0x800A0214u; f_8009F0F4(c); // 800A0210
L_800A0214:;
  cmps(c,0,(int32_t)c->r[3],0); // 800A0214
  if (crb(c,2)) { goto L_800A0228; } // 800A0218
  c->r[4]=c->r[25]|c->r[25]; // 800A021C
  c->r[5]=c->r[26]|c->r[26]; // 800A0220
  c->lr=0x800A0228u; f_800A05E8(c); // 800A0224
L_800A0228:;
  c->r[3]=R32(c->r[1]+0x00000030u); // 800A0228
  c->r[0]=R32(c->r[3]+0x00000000u); // 800A022C
  W32(c->r[1]+0x00000030u,c->r[0]); // 800A0230
L_800A0234:;
  W32(c->r[1]+0x00000014u,c->r[30]); // 800A0234
  c->r[3]=c->r[1]+0x00000030u; // 800A0238
  c->r[4]=c->r[1]+0x00000014u; // 800A023C
  c->lr=0x800A0244u; f_8009B618(c); // 800A0240
  cmps(c,0,(int32_t)c->r[3],0); // 800A0244
  if (!crb(c,2)) { IRQCHK(c); goto L_800A00A4; } // 800A0248
  c->r[4]=c->r[28]|c->r[28]; // 800A024C
  c->r[3]=c->r[22]+0x00000064u; // 800A0250
  c->lr=0x800A0258u; f_802DDD08(c); // 800A0254
  c->r[3]=R32(c->r[28]+0x00000008u); // 800A0258
  c->r[4]=0u+0x00000001u; // 800A025C
  c->lr=0x800A0264u; f_8009F7F8(c); // 800A0260
L_800A0264:;
  W32(c->r[1]+0x00000010u,c->r[29]); // 800A0264
  c->r[3]=c->r[1]+0x00000034u; // 800A0268
  c->r[4]=c->r[1]+0x00000010u; // 800A026C
  c->lr=0x800A0274u; f_8009F84C(c); // 800A0270
  cmps(c,0,(int32_t)c->r[3],0); // 800A0274
  if (!crb(c,2)) { IRQCHK(c); goto L_800A0048; } // 800A0278
  c->r[11]=c->r[1]+0x00000070u; // 800A027C
  {uint32_t ea=c->r[1]+0x00000088u; psq_load(c,31,ea,0,0);} // 800A0280
  {uint32_t ea=c->r[1]+0x00000080u; c->f[31]=RF64(ea);} // 800A0284
  {uint32_t ea=c->r[1]+0x00000078u; psq_load(c,30,ea,0,0);} // 800A0288
  {uint32_t ea=c->r[1]+0x00000070u; c->f[30]=RF64(ea);} // 800A028C
  c->lr=0x800A0294u; { c->r[21]=R32(c->r[11]+0xFFFFFFD4u); c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800A0290
  c->r[0]=R32(c->r[1]+0x00000094u); // 800A0294
  c->lr=c->r[0]; // 800A0298
  c->r[1]=c->r[1]+0x00000090u; // 800A029C
  return; // 800A02A0
}

// fn_800A02A4
void f_800A02A4(Ctx* __restrict c) {
  trace_call(0x800A02A4u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800A02A4
  c->r[0]=c->lr; // 800A02A8
  W32(c->r[1]+0x00000044u,c->r[0]); // 800A02AC
  {uint32_t ea=c->r[1]+0x00000024u; for(int i=25;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800A02B0
  c->r[25]=0u+0x80730000u; // 800A02B4
  c->r[26]=0u+0x806D0000u; // 800A02B8
  c->r[30]=0u+0x00000000u; // 800A02BC
  c->r[31]=c->r[25]+0x00006378u; // 800A02C0
  c->r[27]=0u+0x80050000u; // 800A02C4
  c->r[26]=c->r[26]+0xFFFFC340u; // 800A02C8
  c->r[28]=0u+0x80750000u; // 800A02CC
  c->r[29]=0u+0x00000001u; // 800A02D0
L_800A02D4:;
  c->r[0]=R8(c->r[13]+0xFFFFBB88u); // 800A02D4
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800A02D8
  if (!crb(c,2)) { goto L_800A0308; } // 800A02DC
  c->r[3]=c->r[25]+0x00006378u; // 800A02E0
  c->lr=0x800A02E8u; f_800B0D5C(c); // 800A02E4
  c->r[0]=c->r[26]+0x00000028u; // 800A02E8
  W32(c->r[31]+0x000000A4u,c->r[26]); // 800A02EC
  c->r[3]=c->r[31]|c->r[31]; // 800A02F0
  c->r[4]=c->r[27]+0xFFFF9F20u; // 800A02F4
  W32(c->r[31]+0x000000A8u,c->r[0]); // 800A02F8
  c->r[5]=c->r[28]+0xFFFFA3C8u; // 800A02FC
  c->lr=0x800A0304u; f_803A92B8(c); // 800A0300
  W8(c->r[13]+0xFFFFBB88u,c->r[29]); // 800A0304
L_800A0308:;
  c->r[3]=c->r[31]|c->r[31]; // 800A0308
  c->r[4]=c->r[30]|c->r[30]; // 800A030C
  c->lr=0x800A0314u; f_80046E74(c); // 800A0310
  c->r[0]=cntlz(c->r[3]); // 800A0314
  W32(c->r[1]+0x0000000Cu,c->r[4]); // 800A0318
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; cr0(c,c->r[0]); // 800A031C
  W32(c->r[1]+0x00000008u,c->r[3]); // 800A0320
  if (!crb(c,2)) { goto L_800A0360; } // 800A0324
  c->r[3]=c->r[31]|c->r[31]; // 800A0328
  c->r[4]=c->r[30]|c->r[30]; // 800A032C
  c->lr=0x800A0334u; f_80046E74(c); // 800A0330
  W32(c->r[1]+0x00000010u,c->r[3]); // 800A0334
  c->r[3]=c->r[1]+0x00000010u; // 800A0338
  W32(c->r[1]+0x00000014u,c->r[4]); // 800A033C
  c->lr=0x800A0344u; f_80046E94(c); // 800A0340
  c->r[3]=R32(c->r[3]+0x00000000u); // 800A0344
  c->r[0]=R32(c->r[1]+0x00000010u); // 800A0348
  c->r[3]=c->r[3]-c->r[0]; // 800A034C
  c->r[0]=addc(c,c->r[3],0xFFFFFFFFu,0); // 800A0350
  c->r[3]=addc(c,~c->r[0],c->r[3],c->xer_ca); // 800A0354
  c->r[0]=addc(c,c->r[3],0xFFFFFFFFu,0); // 800A0358
  c->r[0]=addc(c,~c->r[0],c->r[3],c->xer_ca); // 800A035C
L_800A0360:;
  cmps(c,0,(int32_t)c->r[0],0); // 800A0360
  if (crb(c,2)) { goto L_800A0370; } // 800A0364
  c->r[3]=0u+0x00000000u; // 800A0368
  goto L_800A0390; // 800A036C
L_800A0370:;
  c->r[3]=c->r[31]|c->r[31]; // 800A0370
  c->r[4]=c->r[30]|c->r[30]; // 800A0374
  c->lr=0x800A037Cu; f_80046E74(c); // 800A0378
  W32(c->r[1]+0x00000018u,c->r[3]); // 800A037C
  c->r[3]=c->r[1]+0x00000018u; // 800A0380
  W32(c->r[1]+0x0000001Cu,c->r[4]); // 800A0384
  c->lr=0x800A038Cu; f_80046E94(c); // 800A0388
  c->r[3]=R32(c->r[3]+0x00000004u); // 800A038C
L_800A0390:;
  c->r[0]=R32(c->r[3]+0x0000033Cu); // 800A0390
  c->r[0]=rotl(c->r[0],0)&0x00000080u; cr0(c,c->r[0]); // 800A0394
  if (!crb(c,2)) { goto L_800A03A8; } // 800A0398
  c->r[30]=c->r[30]+0x00000001u; // 800A039C
  cmps(c,0,(int32_t)c->r[30],2); // 800A03A0
  if (crb(c,0)) { IRQCHK(c); goto L_800A02D4; } // 800A03A4
L_800A03A8:;
  cmps(c,0,(int32_t)c->r[30],2); // 800A03A8
  if (!crb(c,0)) { goto L_800A03B8; } // 800A03AC
  c->r[3]=0u+0x00000001u; // 800A03B0
  goto L_800A03BC; // 800A03B4
L_800A03B8:;
  c->r[3]=0u+0x00000000u; // 800A03B8
L_800A03BC:;
  {uint32_t ea=c->r[1]+0x00000024u; for(int i=25;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800A03BC
  c->r[0]=R32(c->r[1]+0x00000044u); // 800A03C0
  c->lr=c->r[0]; // 800A03C4
  c->r[1]=c->r[1]+0x00000040u; // 800A03C8
  return; // 800A03CC
}

// fn_800A03D0
void f_800A03D0(Ctx* __restrict c) {
  trace_call(0x800A03D0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800A03D0
  c->r[0]=c->lr; // 800A03D4
  W32(c->r[1]+0x00000024u,c->r[0]); // 800A03D8
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800A03DC
  c->r[29]=c->r[3]|c->r[3]; // 800A03E0
  c->r[30]=c->r[4]|c->r[4]; // 800A03E4
  c->r[31]=c->r[5]|c->r[5]; // 800A03E8
  c->lr=0x800A03F0u; f_800506C0(c); // 800A03EC
  c->r[0]=0u+0x00000000u; // 800A03F0
  W32(c->r[29]+0x00000008u,c->r[29]); // 800A03F4
  c->r[3]=c->r[29]+0x00000024u; // 800A03F8
  W32(c->r[29]+0x00000014u,c->r[0]); // 800A03FC
  W32(c->r[29]+0x00000018u,c->r[0]); // 800A0400
  W32(c->r[29]+0x0000001Cu,c->r[0]); // 800A0404
  c->lr=0x800A040Cu; f_802D93A4(c); // 800A0408
  c->r[0]=0u+0xFFFFFFFFu; // 800A040C
  W32(c->r[29]+0x00000030u,c->r[0]); // 800A0410
  c->r[3]=c->r[29]+0x00000074u; // 800A0414
  c->lr=0x800A041Cu; f_800506C0(c); // 800A0418
  c->r[4]=c->r[30]|c->r[30]; // 800A041C
  c->r[3]=c->r[29]+0x0000000Cu; // 800A0420
  c->lr=0x800A0428u; f_803B37C0(c); // 800A0424
  cmps(c,0,(int32_t)c->r[31],0); // 800A0428
  if (crb(c,2)) { goto L_800A0440; } // 800A042C
  c->r[4]=c->r[31]|c->r[31]; // 800A0430
  c->r[3]=c->r[29]+0x00000034u; // 800A0434
  c->lr=0x800A043Cu; f_803B37C0(c); // 800A0438
  goto L_800A0454; // 800A043C
L_800A0440:;
  c->r[4]=0u+0x80690000u; // 800A0440
  c->r[3]=c->r[29]+0x00000034u; // 800A0444
  c->r[4]=c->r[4]+0xFFFFDD38u; // 800A0448
  c->r[4]=c->r[4]+0x00000047u; // 800A044C
  c->lr=0x800A0454u; f_803B37C0(c); // 800A0450
L_800A0454:;
  c->r[0]=c->r[29]+0x00000074u; // 800A0454
  W32(c->r[29]+0x00000074u,c->r[0]); // 800A0458
  c->r[3]=c->r[29]|c->r[29]; // 800A045C
  W32(c->r[29]+0x00000078u,c->r[0]); // 800A0460
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800A0464
  c->r[0]=R32(c->r[1]+0x00000024u); // 800A0468
  c->lr=c->r[0]; // 800A046C
  c->r[1]=c->r[1]+0x00000020u; // 800A0470
  return; // 800A0474
}

// dtor_800A0478
void f_800A0478(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800A0478
  c->r[0]=c->lr; // 800A047C
  cmps(c,0,(int32_t)c->r[3],0); // 800A0480
  W32(c->r[1]+0x00000014u,c->r[0]); // 800A0484
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800A0488
  c->r[31]=c->r[3]|c->r[3]; // 800A048C
  if (crb(c,2)) { goto L_800A049C; } // 800A0490
  c->r[4]=0u+0x00000000u; // 800A0494
  c->lr=0x800A049Cu; f_800455D8(c); // 800A0498
L_800A049C:;
  c->r[3]=c->r[31]|c->r[31]; // 800A049C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800A04A0
  c->r[0]=R32(c->r[1]+0x00000014u); // 800A04A4
  c->lr=c->r[0]; // 800A04A8
  c->r[1]=c->r[1]+0x00000010u; // 800A04AC
  return; // 800A04B0
}

// dtor_800A04B4
void f_800A04B4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800A04B4
  c->r[0]=c->lr; // 800A04B8
  cmps(c,0,(int32_t)c->r[3],0); // 800A04BC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800A04C0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800A04C4
  c->r[31]=c->r[3]|c->r[3]; // 800A04C8
  if (crb(c,2)) { goto L_800A04D8; } // 800A04CC
  c->r[4]=0u+0x00000000u; // 800A04D0
  c->lr=0x800A04D8u; f_80045C7C(c); // 800A04D4
L_800A04D8:;
  c->r[3]=c->r[31]|c->r[31]; // 800A04D8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800A04DC
  c->r[0]=R32(c->r[1]+0x00000014u); // 800A04E0
  c->lr=c->r[0]; // 800A04E4
  c->r[1]=c->r[1]+0x00000010u; // 800A04E8
  return; // 800A04EC
}

// fn_800A04F0
void f_800A04F0(Ctx* __restrict c) {
  trace_call(0x800A04F0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800A04F0
  c->r[0]=c->lr; // 800A04F4
  cmps(c,0,(int32_t)c->r[3],0); // 800A04F8
  W32(c->r[1]+0x00000024u,c->r[0]); // 800A04FC
  {uint32_t ea=c->r[1]+0x00000010u; for(int i=28;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800A0500
  c->r[28]=c->r[3]|c->r[3]; // 800A0504
  c->r[29]=c->r[4]|c->r[4]; // 800A0508
  if (crb(c,2)) { goto L_800A05B0; } // 800A050C
  c->r[0]=R32(c->r[3]+0x00000074u); // 800A0510
  c->r[31]=c->r[3]+0x00000074u; // 800A0514
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 800A0518
  goto L_800A055C; // 800A051C
L_800A0520:;
  c->r[30]=R32(c->r[1]+0x0000000Cu); // 800A0520
  c->r[3]=c->r[28]+0x00000074u; // 800A0524
  c->r[0]=R32(c->r[30]+0x00000000u); // 800A0528
  c->r[4]=c->r[30]|c->r[30]; // 800A052C
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 800A0530
  c->lr=0x800A0538u; f_802DDD08(c); // 800A0534
  c->r[30]=R32(c->r[30]+0x00000008u); // 800A0538
  cmps(c,0,(int32_t)c->r[30],0); // 800A053C
  if (crb(c,2)) { goto L_800A055C; } // 800A0540
  if (crb(c,2)) { goto L_800A0554; } // 800A0544
  c->r[3]=c->r[30]|c->r[30]; // 800A0548
  c->r[4]=0u+0x00000000u; // 800A054C
  c->lr=0x800A0554u; f_800455D8(c); // 800A0550
L_800A0554:;
  c->r[3]=c->r[30]|c->r[30]; // 800A0554
  c->lr=0x800A055Cu; f_8009D770(c); // 800A0558
L_800A055C:;
  W32(c->r[1]+0x00000008u,c->r[31]); // 800A055C
  c->r[3]=c->r[1]+0x0000000Cu; // 800A0560
  c->r[4]=c->r[1]+0x00000008u; // 800A0564
  c->lr=0x800A056Cu; f_800A05C8(c); // 800A0568
  cmps(c,0,(int32_t)c->r[3],0); // 800A056C
  if (!crb(c,2)) { IRQCHK(c); goto L_800A0520; } // 800A0570
  c->r[3]=addc(c,c->r[28],0x00000074u,0); cr0(c,c->r[3]); // 800A0574
  W32(c->r[28]+0x00000074u,c->r[3]); // 800A0578
  W32(c->r[28]+0x00000078u,c->r[3]); // 800A057C
  if (crb(c,2)) { goto L_800A058C; } // 800A0580
  c->r[4]=0u+0x00000000u; // 800A0584
  c->lr=0x800A058Cu; f_80045C7C(c); // 800A0588
L_800A058C:;
  cmps(c,0,(int32_t)c->r[28],0); // 800A058C
  if (crb(c,2)) { goto L_800A05A0; } // 800A0590
  c->r[3]=c->r[28]|c->r[28]; // 800A0594
  c->r[4]=0u+0x00000000u; // 800A0598
  c->lr=0x800A05A0u; f_800455D8(c); // 800A059C
L_800A05A0:;
  cmps(c,0,(int32_t)c->r[29],0); // 800A05A0
  if (!crb(c,1)) { goto L_800A05B0; } // 800A05A4
  c->r[3]=c->r[28]|c->r[28]; // 800A05A8
  c->lr=0x800A05B0u; f_8009D770(c); // 800A05AC
L_800A05B0:;
  c->r[3]=c->r[28]|c->r[28]; // 800A05B0
  {uint32_t ea=c->r[1]+0x00000010u; for(int i=28;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800A05B4
  c->r[0]=R32(c->r[1]+0x00000024u); // 800A05B8
  c->lr=c->r[0]; // 800A05BC
  c->r[1]=c->r[1]+0x00000020u; // 800A05C0
  return; // 800A05C4
}

// fn_800A05C8
void f_800A05C8(Ctx* __restrict c) {
  trace_call(0x800A05C8u);
  c->r[5]=R32(c->r[3]+0x00000000u); // 800A05C8
  c->r[3]=R32(c->r[4]+0x00000000u); // 800A05CC
  c->r[4]=R32(c->r[5]+0x00000008u); // 800A05D0
  c->r[0]=R32(c->r[3]+0x00000008u); // 800A05D4
  c->r[3]=c->r[0]-c->r[4]; // 800A05D8
  c->r[0]=addc(c,c->r[3],0xFFFFFFFFu,0); // 800A05DC
  c->r[3]=addc(c,~c->r[0],c->r[3],c->xer_ca); // 800A05E0
  return; // 800A05E4
}

// fn_800A05E8
void f_800A05E8(Ctx* __restrict c) {
  trace_call(0x800A05E8u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800A05E8
  c->r[0]=c->lr; // 800A05EC
  W32(c->r[1]+0x00000024u,c->r[0]); // 800A05F0
  {uint32_t ea=c->r[1]+0x00000010u; for(int i=28;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800A05F4
  c->r[28]=c->r[3]|c->r[3]; // 800A05F8
  c->r[29]=c->r[4]|c->r[4]; // 800A05FC
  c->r[30]=c->r[5]|c->r[5]; // 800A0600
  c->r[3]=0u+0x00000014u; // 800A0604
  c->lr=0x800A060Cu; f_8009D710(c); // 800A0608
  cmps(c,0,(int32_t)c->r[3],0); // 800A060C
  c->r[31]=c->r[3]|c->r[3]; // 800A0610
  if (crb(c,2)) { goto L_800A0628; } // 800A0614
  c->lr=0x800A061Cu; f_800506C0(c); // 800A0618
  W32(c->r[31]+0x00000008u,c->r[31]); // 800A061C
  W32(c->r[31]+0x0000000Cu,c->r[29]); // 800A0620
  W32(c->r[31]+0x00000010u,c->r[30]); // 800A0624
L_800A0628:;
  c->r[3]=c->r[28]+0x00000074u; // 800A0628
  c->r[5]=c->r[31]|c->r[31]; // 800A062C
  c->r[4]=c->r[3]|c->r[3]; // 800A0630
  c->lr=0x800A0638u; f_802DDCA8(c); // 800A0634
  {uint32_t ea=c->r[1]+0x00000010u; for(int i=28;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800A0638
  c->r[0]=R32(c->r[1]+0x00000024u); // 800A063C
  c->lr=c->r[0]; // 800A0640
  c->r[1]=c->r[1]+0x00000020u; // 800A0644
  return; // 800A0648
}

// fn_800A064C
void f_800A064C(Ctx* __restrict c) {
  trace_call(0x800A064Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800A064C
  c->r[0]=c->lr; // 800A0650
  W32(c->r[1]+0x00000024u,c->r[0]); // 800A0654
  {uint32_t ea=c->r[1]+0x00000010u; for(int i=28;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800A0658
  c->r[28]=c->r[4]|c->r[4]; // 800A065C
  c->r[29]=c->r[5]|c->r[5]; // 800A0660
  c->r[31]=c->r[3]+0x00000074u; // 800A0664
  c->r[30]=0u+0x00000000u; // 800A0668
  c->r[0]=R32(c->r[3]+0x00000074u); // 800A066C
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 800A0670
  goto L_800A06B0; // 800A0674
L_800A0678:;
  cmpu(c,0,c->r[30],c->r[28]); // 800A0678
  if (crb(c,0)) { goto L_800A06A0; } // 800A067C
  c->r[3]=R32(c->r[1]+0x0000000Cu); // 800A0680
  c->r[3]=R32(c->r[3]+0x00000008u); // 800A0684
  c->r[0]=R32(c->r[3]+0x0000000Cu); // 800A0688
  W32(c->r[29]+0x00000000u,c->r[0]); // 800A068C
  c->r[3]=R32(c->r[1]+0x0000000Cu); // 800A0690
  c->r[3]=R32(c->r[3]+0x00000008u); // 800A0694
  c->r[3]=R32(c->r[3]+0x00000010u); // 800A0698
  goto L_800A06CC; // 800A069C
L_800A06A0:;
  c->r[3]=R32(c->r[1]+0x0000000Cu); // 800A06A0
  c->r[30]=c->r[30]+0x00000001u; // 800A06A4
  c->r[0]=R32(c->r[3]+0x00000000u); // 800A06A8
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 800A06AC
L_800A06B0:;
  W32(c->r[1]+0x00000008u,c->r[31]); // 800A06B0
  c->r[3]=c->r[1]+0x0000000Cu; // 800A06B4
  c->r[4]=c->r[1]+0x00000008u; // 800A06B8
  c->lr=0x800A06C0u; f_800A05C8(c); // 800A06BC
  cmps(c,0,(int32_t)c->r[3],0); // 800A06C0
  if (!crb(c,2)) { IRQCHK(c); goto L_800A0678; } // 800A06C4
  c->r[3]=0u+0x00000000u; // 800A06C8
L_800A06CC:;
  {uint32_t ea=c->r[1]+0x00000010u; for(int i=28;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800A06CC
  c->r[0]=R32(c->r[1]+0x00000024u); // 800A06D0
  c->lr=c->r[0]; // 800A06D4
  c->r[1]=c->r[1]+0x00000020u; // 800A06D8
  return; // 800A06DC
}

// fn_800A06E0
void f_800A06E0(Ctx* __restrict c) {
  trace_call(0x800A06E0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800A06E0
  c->r[0]=c->lr; // 800A06E4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800A06E8
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800A06EC
  c->r[30]=c->r[3]|c->r[3]; // 800A06F0
  c->r[31]=c->r[4]|c->r[4]; // 800A06F4
  c->lr=0x800A06FCu; f_800506C0(c); // 800A06F8
  W32(c->r[30]+0x00000008u,c->r[30]); // 800A06FC
  c->r[3]=c->r[30]+0x00000010u; // 800A0700
  c->lr=0x800A0708u; f_8009CC44(c); // 800A0704
  c->r[4]=c->r[30]+0x00000010u; // 800A0708
  c->r[0]=0u+0xFFFFFFFFu; // 800A070C
  W32(c->r[30]+0x0000000Cu,c->r[31]); // 800A0710
  c->r[3]=c->r[30]|c->r[30]; // 800A0714
  W32(c->r[30]+0x00000010u,c->r[4]); // 800A0718
  W32(c->r[30]+0x00000014u,c->r[4]); // 800A071C
  W32(c->r[30]+0x0000001Cu,c->r[0]); // 800A0720
  W32(c->r[30]+0x00000020u,c->r[0]); // 800A0724
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800A0728
  c->r[0]=R32(c->r[1]+0x00000014u); // 800A072C
  c->lr=c->r[0]; // 800A0730
  c->r[1]=c->r[1]+0x00000010u; // 800A0734
  return; // 800A0738
}

// dtor_800A073C
void f_800A073C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800A073C
  c->r[0]=c->lr; // 800A0740
  cmps(c,0,(int32_t)c->r[3],0); // 800A0744
  W32(c->r[1]+0x00000014u,c->r[0]); // 800A0748
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800A074C
  c->r[31]=c->r[3]|c->r[3]; // 800A0750
  if (crb(c,2)) { goto L_800A0760; } // 800A0754
  c->r[4]=0u+0x00000000u; // 800A0758
  c->lr=0x800A0760u; f_800455D8(c); // 800A075C
L_800A0760:;
  c->r[3]=c->r[31]|c->r[31]; // 800A0760
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800A0764
  c->r[0]=R32(c->r[1]+0x00000014u); // 800A0768
  c->lr=c->r[0]; // 800A076C
  c->r[1]=c->r[1]+0x00000010u; // 800A0770
  return; // 800A0774
}

// fn_800A0778
void f_800A0778(Ctx* __restrict c) {
  trace_call(0x800A0778u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800A0778
  c->r[0]=c->lr; // 800A077C
  cmps(c,0,(int32_t)c->r[3],0); // 800A0780
  W32(c->r[1]+0x00000024u,c->r[0]); // 800A0784
  {uint32_t ea=c->r[1]+0x00000010u; for(int i=28;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800A0788
  c->r[28]=c->r[3]|c->r[3]; // 800A078C
  c->r[29]=c->r[4]|c->r[4]; // 800A0790
  if (crb(c,2)) { goto L_800A0824; } // 800A0794
  c->r[0]=R32(c->r[3]+0x00000010u); // 800A0798
  c->r[31]=c->r[3]+0x00000010u; // 800A079C
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 800A07A0
  goto L_800A07D0; // 800A07A4
L_800A07A8:;
  c->r[4]=R32(c->r[1]+0x0000000Cu); // 800A07A8
  c->r[3]=c->r[28]+0x00000010u; // 800A07AC
  c->r[30]=R32(c->r[4]+0x00000000u); // 800A07B0
  c->r[4]=R32(c->r[4]+0x00000008u); // 800A07B4
  c->lr=0x800A07BCu; f_802DDD08(c); // 800A07B8
  c->r[3]=R32(c->r[1]+0x0000000Cu); // 800A07BC
  c->r[4]=0u+0x00000001u; // 800A07C0
  c->r[3]=R32(c->r[3]+0x00000008u); // 800A07C4
  c->lr=0x800A07CCu; f_800A04F0(c); // 800A07C8
  W32(c->r[1]+0x0000000Cu,c->r[30]); // 800A07CC
L_800A07D0:;
  W32(c->r[1]+0x00000008u,c->r[31]); // 800A07D0
  c->r[3]=c->r[1]+0x0000000Cu; // 800A07D4
  c->r[4]=c->r[1]+0x00000008u; // 800A07D8
  c->lr=0x800A07E0u; f_8009E740(c); // 800A07DC
  cmps(c,0,(int32_t)c->r[3],0); // 800A07E0
  if (!crb(c,2)) { IRQCHK(c); goto L_800A07A8; } // 800A07E4
  c->r[3]=addc(c,c->r[28],0x00000010u,0); cr0(c,c->r[3]); // 800A07E8
  W32(c->r[28]+0x00000010u,c->r[3]); // 800A07EC
  W32(c->r[28]+0x00000014u,c->r[3]); // 800A07F0
  if (crb(c,2)) { goto L_800A0800; } // 800A07F4
  c->r[4]=0u+0x00000000u; // 800A07F8
  c->lr=0x800A0800u; f_80045C7C(c); // 800A07FC
L_800A0800:;
  cmps(c,0,(int32_t)c->r[28],0); // 800A0800
  if (crb(c,2)) { goto L_800A0814; } // 800A0804
  c->r[3]=c->r[28]|c->r[28]; // 800A0808
  c->r[4]=0u+0x00000000u; // 800A080C
  c->lr=0x800A0814u; f_800455D8(c); // 800A0810
L_800A0814:;
  cmps(c,0,(int32_t)c->r[29],0); // 800A0814
  if (!crb(c,1)) { goto L_800A0824; } // 800A0818
  c->r[3]=c->r[28]|c->r[28]; // 800A081C
  c->lr=0x800A0824u; f_8009D770(c); // 800A0820
L_800A0824:;
  c->r[3]=c->r[28]|c->r[28]; // 800A0824
  {uint32_t ea=c->r[1]+0x00000010u; for(int i=28;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800A0828
  c->r[0]=R32(c->r[1]+0x00000024u); // 800A082C
  c->lr=c->r[0]; // 800A0830
  c->r[1]=c->r[1]+0x00000020u; // 800A0834
  return; // 800A0838
}

// fn_800A083C
void f_800A083C(Ctx* __restrict c) {
  trace_call(0x800A083Cu);
  c->r[0]=R32(c->r[3]+0x00000000u); // 800A083C
  c->r[4]=0u+0x00000000u; // 800A0840
  cmps(c,0,(int32_t)c->r[0],0); // 800A0844
  if (crb(c,2)) { goto L_800A085C; } // 800A0848
  c->r[0]=R32(c->r[3]+0x00000004u); // 800A084C
  cmps(c,0,(int32_t)c->r[0],0); // 800A0850
  if (crb(c,2)) { goto L_800A085C; } // 800A0854
  c->r[4]=0u+0x00000001u; // 800A0858
L_800A085C:;
  cmps(c,0,(int32_t)c->r[4],0); // 800A085C
  if (crb(c,2)) { goto L_800A086C; } // 800A0860
  c->r[3]=R32(c->r[3]+0x00000004u); // 800A0864
  return; // 800A0868
L_800A086C:;
  c->r[3]=0u+0x80760000u; // 800A086C
  c->r[3]=c->r[3]+0xFFFF9C78u; // 800A0870
  return; // 800A0874
}

// fn_800A0878
void f_800A0878(Ctx* __restrict c) {
  trace_call(0x800A0878u);
  c->r[6]=R32(c->r[3]+0x00000000u); // 800A0878
  c->r[5]=0u+0x00000000u; // 800A087C
  cmps(c,0,(int32_t)c->r[6],0); // 800A0880
  if (crb(c,2)) { goto L_800A0898; } // 800A0884
  c->r[0]=R32(c->r[3]+0x00000004u); // 800A0888
  cmps(c,0,(int32_t)c->r[0],0); // 800A088C
  if (crb(c,2)) { goto L_800A0898; } // 800A0890
  c->r[5]=0u+0x00000001u; // 800A0894
L_800A0898:;
  cmps(c,0,(int32_t)c->r[5],0); // 800A0898
  if (!crb(c,2)) { goto L_800A08B0; } // 800A089C
  c->r[3]=0u+0x80690000u; // 800A08A0
  c->r[3]=c->r[3]+0xFFFFDD38u; // 800A08A4
  c->r[3]=c->r[3]+0x00000047u; // 800A08A8
  return; // 800A08AC
L_800A08B0:;
  c->r[3]=R32(c->r[3]+0x00000004u); // 800A08B0
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFFCu; // 800A08B4
  c->r[3]=c->r[3]+c->r[0]; // 800A08B8
  c->r[0]=R32(c->r[3]+0x0000000Cu); // 800A08BC
  cmps(c,0,(int32_t)c->r[0],0); // 800A08C0
  if (!crb(c,2)) { goto L_800A08D8; } // 800A08C4
  c->r[3]=0u+0x80690000u; // 800A08C8
  c->r[3]=c->r[3]+0xFFFFDD38u; // 800A08CC
  c->r[3]=c->r[3]+0x00000047u; // 800A08D0
  return; // 800A08D4
L_800A08D8:;
  c->r[3]=c->r[6]+c->r[0]; // 800A08D8
  return; // 800A08DC
}

// fn_800A08E0
void f_800A08E0(Ctx* __restrict c) {
  trace_call(0x800A08E0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800A08E0
  c->r[0]=c->lr; // 800A08E4
  c->r[4]=0u+0x00000000u; // 800A08E8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800A08EC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800A08F0
  c->r[31]=c->r[3]|c->r[3]; // 800A08F4
  c->lr=0x800A08FCu; f_800A0914(c); // 800A08F8
  c->r[3]=c->r[31]|c->r[31]; // 800A08FC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800A0900
  c->r[0]=R32(c->r[1]+0x00000014u); // 800A0904
  c->lr=c->r[0]; // 800A0908
  c->r[1]=c->r[1]+0x00000010u; // 800A090C
  return; // 800A0910
}

// fn_800A0914
void f_800A0914(Ctx* __restrict c) {
  trace_call(0x800A0914u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800A0914
  c->r[0]=c->lr; // 800A0918
  cmps(c,0,(int32_t)c->r[4],0); // 800A091C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800A0920
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800A0924
  c->r[31]=c->r[3]|c->r[3]; // 800A0928
  W32(c->r[3]+0x00000000u,c->r[4]); // 800A092C
  if (crb(c,2)) { goto L_800A0954; } // 800A0930
  c->r[6]=0u+0x80690000u; // 800A0934
  c->r[3]=c->r[4]|c->r[4]; // 800A0938
  c->r[6]=c->r[6]+0xFFFFDD38u; // 800A093C
  c->r[5]=0u+0x00000004u; // 800A0940
  c->r[4]=c->r[6]+0x00000048u; // 800A0944
  c->lr=0x800A094Cu; f_803B3A58(c); // 800A0948
  cmps(c,0,(int32_t)c->r[3],0); // 800A094C
  if (crb(c,2)) { goto L_800A0964; } // 800A0950
L_800A0954:;
  c->r[0]=0u+0x00000000u; // 800A0954
  W32(c->r[31]+0x00000000u,c->r[0]); // 800A0958
  c->r[3]=0u+0x00000000u; // 800A095C
  goto L_800A0968; // 800A0960
L_800A0964:;
  c->r[3]=0u+0x00000001u; // 800A0964
L_800A0968:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800A0968
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800A096C
  c->lr=c->r[0]; // 800A0970
  c->r[1]=c->r[1]+0x00000010u; // 800A0974
  return; // 800A0978
}

// fn_800A097C
void f_800A097C(Ctx* __restrict c) {
  trace_call(0x800A097Cu);
  c->r[3]=R32(c->r[3]+0x00000000u); // 800A097C
  c->r[0]=addc(c,c->r[3],0xFFFFFFFFu,0); // 800A0980
  c->r[3]=addc(c,~c->r[0],c->r[3],c->xer_ca); // 800A0984
  return; // 800A0988
}

// fn_800A098C
void f_800A098C(Ctx* __restrict c) {
  trace_call(0x800A098Cu);
  c->r[6]=R32(c->r[3]+0x00000000u); // 800A098C
  c->r[0]=0u+0x00000000u; // 800A0990
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800A0994
  cmps(c,0,(int32_t)c->r[6],0); // 800A0998
  W32(c->r[1]+0x00000008u,c->r[0]); // 800A099C
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 800A09A0
  if (crb(c,2)) { goto L_800A09C4; } // 800A09A4
  c->r[0]=R32(c->r[6]+0x0000000Cu); // 800A09A8
  c->r[5]=R32(c->r[6]+0x00000008u); // 800A09AC
  c->r[3]=(uint32_t)((int32_t)c->r[4]*(int32_t)c->r[0]); // 800A09B0
  W32(c->r[1]+0x00000008u,c->r[6]); // 800A09B4
  c->r[0]=c->r[6]+c->r[5]; // 800A09B8
  c->r[0]=c->r[3]+c->r[0]; // 800A09BC
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 800A09C0
L_800A09C4:;
  c->r[3]=R32(c->r[1]+0x00000008u); // 800A09C4
  c->r[4]=R32(c->r[1]+0x0000000Cu); // 800A09C8
  c->r[1]=c->r[1]+0x00000010u; // 800A09CC
  return; // 800A09D0
}

// fn_800A09D4
void f_800A09D4(Ctx* __restrict c) {
  trace_call(0x800A09D4u);
  c->r[3]=R32(c->r[3]+0x00000000u); // 800A09D4
  cmps(c,0,(int32_t)c->r[3],0); // 800A09D8
  if (!crb(c,2)) { goto L_800A09E8; } // 800A09DC
  c->r[3]=0u+0x00000000u; // 800A09E0
  return; // 800A09E4
L_800A09E8:;
  c->r[3]=R32(c->r[3]+0x00000010u); // 800A09E8
  return; // 800A09EC
}

// fn_800A09F0
void f_800A09F0(Ctx* __restrict c) {
  trace_call(0x800A09F0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800A09F0
  c->r[0]=c->lr; // 800A09F4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800A09F8
  c->lr=0x800A0A00u; f_800A098C(c); // 800A09FC
  W32(c->r[1]+0x00000008u,c->r[3]); // 800A0A00
  c->r[3]=c->r[1]+0x00000008u; // 800A0A04
  W32(c->r[1]+0x0000000Cu,c->r[4]); // 800A0A08
  c->lr=0x800A0A10u; f_800A083C(c); // 800A0A0C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800A0A10
  c->lr=c->r[0]; // 800A0A14
  c->r[1]=c->r[1]+0x00000010u; // 800A0A18
  return; // 800A0A1C
}

// fn_800A0A20
void f_800A0A20(Ctx* __restrict c) {
  trace_call(0x800A0A20u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800A0A20
  c->r[0]=c->lr; // 800A0A24
  W32(c->r[1]+0x00000044u,c->r[0]); // 800A0A28
  c->r[11]=c->r[1]+0x00000040u; // 800A0A2C
  c->lr=0x800A0A34u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800A0A30
  c->r[28]=c->r[4]|c->r[4]; // 800A0A34
  c->r[27]=c->r[3]|c->r[3]; // 800A0A38
  c->r[29]=c->r[5]|c->r[5]; // 800A0A3C
  c->r[3]=c->r[28]|c->r[28]; // 800A0A40
  c->lr=0x800A0A48u; f_800A09D4(c); // 800A0A44
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 800A0A48
  cmps(c,0,(int32_t)c->r[29],(int32_t)c->r[0]); // 800A0A4C
  if (crb(c,0)) { goto L_800A0A70; } // 800A0A50
  c->r[29]=addc(c,c->r[29],0xFFFFFFFFu,0); cr0(c,c->r[29]); // 800A0A54
  if (!crb(c,0)) { goto L_800A0A70; } // 800A0A58
  c->r[4]=0u+0x80760000u; // 800A0A5C
  c->r[3]=c->r[27]|c->r[27]; // 800A0A60
  c->r[4]=c->r[4]+0xFFFF9CA8u; // 800A0A64
  c->lr=0x800A0A6Cu; f_8005CD7C(c); // 800A0A68
  goto L_800A0B2C; // 800A0A6C
L_800A0A70:;
  c->r[3]=c->r[28]|c->r[28]; // 800A0A70
  c->r[4]=c->r[29]|c->r[29]; // 800A0A74
  c->lr=0x800A0A7Cu; f_800A098C(c); // 800A0A78
  W32(c->r[1]+0x00000008u,c->r[3]); // 800A0A7C
  c->r[3]=c->r[1]+0x00000008u; // 800A0A80
  W32(c->r[1]+0x0000000Cu,c->r[4]); // 800A0A84
  c->lr=0x800A0A8Cu; f_800A083C(c); // 800A0A88
  c->r[30]=c->r[3]|c->r[3]; // 800A0A8C
  c->r[3]=c->r[28]|c->r[28]; // 800A0A90
  c->r[4]=c->r[29]+0x00000001u; // 800A0A94
  c->lr=0x800A0A9Cu; f_800A098C(c); // 800A0A98
  W32(c->r[1]+0x00000010u,c->r[3]); // 800A0A9C
  c->r[3]=c->r[1]+0x00000010u; // 800A0AA0
  W32(c->r[1]+0x00000014u,c->r[4]); // 800A0AA4
  c->lr=0x800A0AACu; f_800A083C(c); // 800A0AA8
  c->r[31]=c->r[1]+0x00000018u; // 800A0AAC
  {uint32_t ea=c->r[3]+0x00000000u; psq_load(c,0,ea,0,0);} // 800A0AB0
  {uint32_t ea=c->r[30]+0x00000000u; psq_load(c,1,ea,0,0);} // 800A0AB4
  {double t0=S(c->f[0]-c->f[1]), t1=S(c->ps1[0]-c->ps1[1]); c->f[0]=t0; c->ps1[0]=t1;} // 800A0AB8
  {uint32_t ea=c->r[31]+0x00000000u; psq_store(c,0,ea,0,0);} // 800A0ABC
  {uint32_t ea=c->r[3]+0x00000008u; psq_load(c,0,ea,1,0);} // 800A0AC0
  {uint32_t ea=c->r[30]+0x00000008u; psq_load(c,1,ea,1,0);} // 800A0AC4
  {double t0=S(c->f[0]-c->f[1]), t1=S(c->ps1[0]-c->ps1[1]); c->f[0]=t0; c->ps1[0]=t1;} // 800A0AC8
  {uint32_t ea=c->r[31]+0x00000008u; psq_store(c,0,ea,1,0);} // 800A0ACC
  {uint32_t ea=c->r[31]+0x00000004u; psq_load(c,1,ea,0,0);} // 800A0AD0
  {double t0=S(c->f[1]*c->f[1]), t1=S(c->ps1[1]*c->ps1[1]); c->f[0]=t0; c->ps1[0]=t1;} // 800A0AD4
  {uint32_t ea=c->r[1]+0x00000018u; c->f[1]=c->ps1[1]=RF32(ea);} // 800A0AD8
  {double t0=S(c->f[0]+c->ps1[0]), t1=S(c->ps1[1]); c->f[0]=t0; c->ps1[0]=t1;} // 800A0ADC
  {double t0=S(std::fma(c->f[1],c->ps1[0],c->f[0])), t1=S(std::fma(c->ps1[1],c->ps1[0],c->ps1[0])); c->f[1]=t0; c->ps1[1]=t1;} // 800A0AE0
  {uint32_t ea=c->r[2]+0xFFFF98E0u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A0AE4
  fcmp(c,0,c->f[1],c->f[0]); // 800A0AE8
  c->r[0]=c->cr; // 800A0AEC
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 800A0AF0
  if (crb(c,2)) { goto L_800A0B0C; } // 800A0AF4
  c->r[3]=c->r[27]|c->r[27]; // 800A0AF8
  c->r[4]=c->r[28]|c->r[28]; // 800A0AFC
  c->r[5]=c->r[29]+0xFFFFFFFFu; // 800A0B00
  c->lr=0x800A0B08u; f_800A0A20(c); // 800A0B04
  goto L_800A0B2C; // 800A0B08
L_800A0B0C:;
  c->r[5]=0u+0x806A0000u; // 800A0B0C
  c->r[3]=c->r[31]|c->r[31]; // 800A0B10
  c->r[4]=c->r[31]|c->r[31]; // 800A0B14
  c->r[5]=c->r[5]+0x00000AA8u; // 800A0B18
  c->lr=0x800A0B20u; f_8030E0BC(c); // 800A0B1C
  c->r[3]=c->r[27]|c->r[27]; // 800A0B20
  c->r[4]=c->r[31]|c->r[31]; // 800A0B24
  c->lr=0x800A0B2Cu; f_8005CD7C(c); // 800A0B28
L_800A0B2C:;
  c->r[11]=c->r[1]+0x00000040u; // 800A0B2C
  c->lr=0x800A0B34u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800A0B30
  c->r[0]=R32(c->r[1]+0x00000044u); // 800A0B34
  c->lr=c->r[0]; // 800A0B38
  c->r[1]=c->r[1]+0x00000040u; // 800A0B3C
  return; // 800A0B40
}

// fn_800A0B44
void f_800A0B44(Ctx* __restrict c) {
  trace_call(0x800A0B44u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800A0B44
  c->r[0]=c->lr; // 800A0B48
  W32(c->r[1]+0x00000024u,c->r[0]); // 800A0B4C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800A0B50
  c->r[31]=c->r[5]|c->r[5]; // 800A0B54
  c->lr=0x800A0B5Cu; f_800A098C(c); // 800A0B58
  W32(c->r[1]+0x0000000Cu,c->r[4]); // 800A0B5C
  c->r[4]=c->r[31]|c->r[31]; // 800A0B60
  W32(c->r[1]+0x00000008u,c->r[3]); // 800A0B64
  c->r[3]=c->r[1]+0x00000008u; // 800A0B68
  c->lr=0x800A0B70u; f_800A0878(c); // 800A0B6C
  c->r[0]=R32(c->r[1]+0x00000024u); // 800A0B70
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800A0B74
  c->lr=c->r[0]; // 800A0B78
  c->r[1]=c->r[1]+0x00000020u; // 800A0B7C
  return; // 800A0B80
}

// fn_800A0B84
void f_800A0B84(Ctx* __restrict c) {
  trace_call(0x800A0B84u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800A0B84
  c->r[0]=c->lr; // 800A0B88
  W32(c->r[1]+0x00000024u,c->r[0]); // 800A0B8C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800A0B90
  c->r[31]=c->r[5]|c->r[5]; // 800A0B94
  c->lr=0x800A0B9Cu; f_800A098C(c); // 800A0B98
  W32(c->r[1]+0x0000000Cu,c->r[4]); // 800A0B9C
  c->r[4]=c->r[31]|c->r[31]; // 800A0BA0
  W32(c->r[1]+0x00000008u,c->r[3]); // 800A0BA4
  c->r[3]=c->r[1]+0x00000008u; // 800A0BA8
  c->lr=0x800A0BB0u; f_800A0878(c); // 800A0BAC
  c->lr=0x800A0BB4u; f_803B613C(c); // 800A0BB0
  c->r[0]=R32(c->r[1]+0x00000024u); // 800A0BB4
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800A0BB8
  c->lr=c->r[0]; // 800A0BBC
  c->r[1]=c->r[1]+0x00000020u; // 800A0BC0
  return; // 800A0BC4
}

// fn_800A0BC8
void f_800A0BC8(Ctx* __restrict c) {
  trace_call(0x800A0BC8u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800A0BC8
  c->r[0]=c->lr; // 800A0BCC
  W32(c->r[1]+0x00000024u,c->r[0]); // 800A0BD0
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800A0BD4
  c->r[31]=c->r[5]|c->r[5]; // 800A0BD8
  c->lr=0x800A0BE0u; f_800A098C(c); // 800A0BDC
  W32(c->r[1]+0x0000000Cu,c->r[4]); // 800A0BE0
  c->r[4]=c->r[31]|c->r[31]; // 800A0BE4
  W32(c->r[1]+0x00000008u,c->r[3]); // 800A0BE8
  c->r[3]=c->r[1]+0x00000008u; // 800A0BEC
  c->lr=0x800A0BF4u; f_800A0878(c); // 800A0BF0
  c->lr=0x800A0BF8u; f_803B5690(c); // 800A0BF4
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800A0BF8
  c->f[1]=c->ps1[1]=S(c->f[1]); // 800A0BFC
  c->r[0]=R32(c->r[1]+0x00000024u); // 800A0C00
  c->lr=c->r[0]; // 800A0C04
  c->r[1]=c->r[1]+0x00000020u; // 800A0C08
  return; // 800A0C0C
}

// fn_800A0C10
void f_800A0C10(Ctx* __restrict c) {
  trace_call(0x800A0C10u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800A0C10
  c->r[0]=c->lr; // 800A0C14
  c->r[4]=0u+0x806D0000u; // 800A0C18
  W32(c->r[1]+0x00000014u,c->r[0]); // 800A0C1C
  c->r[4]=c->r[4]+0x00005BC0u; // 800A0C20
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800A0C24
  c->r[31]=c->r[3]|c->r[3]; // 800A0C28
  W32(c->r[3]+0x00000000u,c->r[4]); // 800A0C2C
  c->lr=0x800A0C34u; f_800A0DFC(c); // 800A0C30
  c->r[3]=c->r[31]|c->r[31]; // 800A0C34
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800A0C38
  c->r[0]=R32(c->r[1]+0x00000014u); // 800A0C3C
  c->lr=c->r[0]; // 800A0C40
  c->r[1]=c->r[1]+0x00000010u; // 800A0C44
  return; // 800A0C48
}

// dtor_800A0C4C
void f_800A0C4C(Ctx* __restrict c) {
  return; // 800A0C4C
}

// fn_800A0C50
void f_800A0C50(Ctx* __restrict c) {
  trace_call(0x800A0C50u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800A0C50
  c->r[0]=c->lr; // 800A0C54
  W32(c->r[1]+0x00000014u,c->r[0]); // 800A0C58
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800A0C5C
  c->r[31]=c->r[3]|c->r[3]; // 800A0C60
  W32(c->r[3]+0x00000004u,c->r[4]); // 800A0C64
  W32(c->r[3]+0x00000008u,c->r[5]); // 800A0C68
  c->r[4]=R32(c->r[5]+0x00000000u); // 800A0C6C
  c->r[0]=c->r[4]+0xB2BA0000u; // 800A0C70
  cmpu(c,0,c->r[0],0x00004A00u); // 800A0C74
  if (crb(c,2)) { goto L_800A0C80; } // 800A0C78
  c->lr=0x800A0C80u; f_800A0DFC(c); // 800A0C7C
L_800A0C80:;
  c->r[3]=R32(c->r[31]+0x00000008u); // 800A0C80
  c->r[0]=R32(c->r[3]+0x00000004u); // 800A0C84
  cmps(c,0,(int32_t)c->r[0],0); // 800A0C88
  if (crb(c,2)) { goto L_800A0C98; } // 800A0C8C
  c->r[3]=c->r[31]|c->r[31]; // 800A0C90
  c->lr=0x800A0C98u; f_800A0DFC(c); // 800A0C94
L_800A0C98:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800A0C98
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800A0C9C
  c->lr=c->r[0]; // 800A0CA0
  c->r[1]=c->r[1]+0x00000010u; // 800A0CA4
  return; // 800A0CA8
}

// fn_800A0CAC
void f_800A0CAC(Ctx* __restrict c) {
  trace_call(0x800A0CACu);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800A0CAC
  c->r[0]=c->lr; // 800A0CB0
  W32(c->r[1]+0x00000044u,c->r[0]); // 800A0CB4
  {uint32_t ea=c->r[1]+0x00000010u; for(int i=20;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800A0CB8
  c->r[26]=c->r[3]|c->r[3]; // 800A0CBC
  c->r[27]=c->r[4]|c->r[4]; // 800A0CC0
  c->r[28]=c->r[5]|c->r[5]; // 800A0CC4
  c->r[0]=R32(c->r[3]+0x00000004u); // 800A0CC8
  cmps(c,0,(int32_t)c->r[0],0); // 800A0CCC
  if (crb(c,2)) { goto L_800A0CE0; } // 800A0CD0
  c->r[0]=R32(c->r[3]+0x00000008u); // 800A0CD4
  cmps(c,0,(int32_t)c->r[0],0); // 800A0CD8
  if (!crb(c,2)) { goto L_800A0CE8; } // 800A0CDC
L_800A0CE0:;
  c->r[3]=0u+0x00000000u; // 800A0CE0
  goto L_800A0DE8; // 800A0CE4
L_800A0CE8:;
  c->r[20]=0u+0x80740000u; // 800A0CE8
  c->r[21]=0u+0x806D0000u; // 800A0CEC
  c->r[21]=c->r[21]+0xFFFFCD54u; // 800A0CF0
  c->r[29]=0u+0x00000001u; // 800A0CF4
  c->r[22]=c->r[20]+0xFFFFFF5Cu; // 800A0CF8
  c->r[30]=0u+0x00000000u; // 800A0CFC
  c->r[23]=0u+0x80050000u; // 800A0D00
  c->r[24]=0u+0x80750000u; // 800A0D04
  c->r[25]=0u+0x00000001u; // 800A0D08
  c->r[31]=0u+0x00000000u; // 800A0D0C
  goto L_800A0DD4; // 800A0D10
L_800A0D14:;
  c->r[0]=R32(c->r[5]+0x0000000Cu); // 800A0D14
  c->r[4]=R32(c->r[5]+0x00000008u); // 800A0D18
  c->r[3]=(uint32_t)((int32_t)c->r[0]*(int32_t)c->r[30]); // 800A0D1C
  c->r[0]=c->r[5]+c->r[4]; // 800A0D20
  W32(c->r[26]+0x00000010u,c->r[31]); // 800A0D24
  c->r[3]=c->r[3]+c->r[0]; // 800A0D28
  W32(c->r[26]+0x0000000Cu,c->r[3]); // 800A0D2C
  c->r[0]=R32(c->r[3]+0x00000000u); // 800A0D30
  c->r[0]=rotl(c->r[0],0)&0x80000000u; cr0(c,c->r[0]); // 800A0D34
  if (!crb(c,2)) { goto L_800A0DD0; } // 800A0D38
  c->r[0]=R16(c->r[3]+0x00000014u); // 800A0D3C
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[27]); // 800A0D40
  if (crb(c,1)) { goto L_800A0DD0; } // 800A0D44
  c->r[0]=R16(c->r[3]+0x00000016u); // 800A0D48
  cmps(c,0,(int32_t)c->r[27],(int32_t)c->r[0]); // 800A0D4C
  if (crb(c,1)) { goto L_800A0DD0; } // 800A0D50
  c->r[3]=c->r[26]|c->r[26]; // 800A0D54
  c->lr=0x800A0D5Cu; f_800A0E14(c); // 800A0D58
  cmps(c,0,(int32_t)c->r[3],0); // 800A0D5C
  if (crb(c,2)) { goto L_800A0DD0; } // 800A0D60
  c->r[0]=R8(c->r[13]+0xFFFFBBF0u); // 800A0D64
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800A0D68
  if (!crb(c,2)) { goto L_800A0D98; } // 800A0D6C
  c->r[3]=c->r[20]+0xFFFFFF5Cu; // 800A0D70
  c->lr=0x800A0D78u; f_800A1FCC(c); // 800A0D74
  c->r[0]=c->r[21]+0x00000028u; // 800A0D78
  W32(c->r[22]+0x000000A4u,c->r[21]); // 800A0D7C
  c->r[3]=c->r[22]|c->r[22]; // 800A0D80
  c->r[4]=c->r[23]+0x000009E8u; // 800A0D84
  W32(c->r[22]+0x000000A8u,c->r[0]); // 800A0D88
  c->r[5]=c->r[24]+0xFFFFA518u; // 800A0D8C
  c->lr=0x800A0D94u; f_803A92B8(c); // 800A0D90
  W8(c->r[13]+0xFFFFBBF0u,c->r[25]); // 800A0D94
L_800A0D98:;
  c->r[6]=R32(c->r[26]+0x0000000Cu); // 800A0D98
  c->r[4]=c->r[28]|c->r[28]; // 800A0D9C
  c->r[3]=c->r[20]+0xFFFFFF5Cu; // 800A0DA0
  c->r[5]=R32(c->r[6]+0x00000000u); // 800A0DA4
  c->r[6]=c->r[6]+0x00000004u; // 800A0DA8
  c->lr=0x800A0DB0u; f_800A258C(c); // 800A0DAC
  cmps(c,0,(int32_t)c->r[3],0); // 800A0DB0
  if (crb(c,2)) { goto L_800A0DCC; } // 800A0DB4
  c->r[3]=R32(c->r[26]+0x0000000Cu); // 800A0DB8
  c->r[0]=R32(c->r[3]+0x00000000u); // 800A0DBC
  c->r[0]=c->r[0]|0x80000000u; // 800A0DC0
  W32(c->r[3]+0x00000000u,c->r[0]); // 800A0DC4
  goto L_800A0DD0; // 800A0DC8
L_800A0DCC:;
  c->r[29]=0u+0x00000000u; // 800A0DCC
L_800A0DD0:;
  c->r[30]=c->r[30]+0x00000001u; // 800A0DD0
L_800A0DD4:;
  c->r[5]=R32(c->r[26]+0x00000008u); // 800A0DD4
  c->r[0]=R32(c->r[5]+0x00000014u); // 800A0DD8
  cmps(c,0,(int32_t)c->r[30],(int32_t)c->r[0]); // 800A0DDC
  if (crb(c,0)) { IRQCHK(c); goto L_800A0D14; } // 800A0DE0
  c->r[3]=c->r[29]|c->r[29]; // 800A0DE4
L_800A0DE8:;
  {uint32_t ea=c->r[1]+0x00000010u; for(int i=20;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800A0DE8
  c->r[0]=R32(c->r[1]+0x00000044u); // 800A0DEC
  c->lr=c->r[0]; // 800A0DF0
  c->r[1]=c->r[1]+0x00000040u; // 800A0DF4
  return; // 800A0DF8
}

// fn_800A0DFC
void f_800A0DFC(Ctx* __restrict c) {
  trace_call(0x800A0DFCu);
  c->r[0]=0u+0x00000000u; // 800A0DFC
  W32(c->r[3]+0x00000004u,c->r[0]); // 800A0E00
  W32(c->r[3]+0x00000008u,c->r[0]); // 800A0E04
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 800A0E08
  W32(c->r[3]+0x00000010u,c->r[0]); // 800A0E0C
  return; // 800A0E10
}

// fn_800A0E14
void f_800A0E14(Ctx* __restrict c) {
  trace_call(0x800A0E14u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800A0E14
  c->r[0]=c->lr; // 800A0E18
  W32(c->r[1]+0x00000014u,c->r[0]); // 800A0E1C
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800A0E20
  c->r[30]=c->r[3]|c->r[3]; // 800A0E24
  c->lr=0x800A0E2Cu; f_800A0EBC(c); // 800A0E28
  c->r[4]=R32(c->r[30]+0x00000008u); // 800A0E2C
  c->r[31]=c->r[3]|c->r[3]; // 800A0E30
  c->r[5]=R32(c->r[30]+0x00000010u); // 800A0E34
  c->r[0]=R32(c->r[4]+0x00000010u); // 800A0E38
  cmps(c,0,(int32_t)c->r[5],(int32_t)c->r[0]); // 800A0E3C
  if (crb(c,0)) { goto L_800A0E8C; } // 800A0E40
  goto L_800A0EA8; // 800A0E44
  goto L_800A0E8C; // 800A0E48
L_800A0E4C:;
  c->r[4]=R32(c->r[30]+0x00000010u); // 800A0E4C
  c->r[3]=c->r[30]|c->r[30]; // 800A0E50
  c->r[0]=c->r[4]+0x00000001u; // 800A0E54
  W32(c->r[30]+0x00000010u,c->r[0]); // 800A0E58
  c->lr=0x800A0E60u; f_800A0EBC(c); // 800A0E5C
  cmps(c,0,(int32_t)c->r[31],0); // 800A0E60
  c->r[31]=0u+0x00000000u; // 800A0E64
  if (!crb(c,2)) { goto L_800A0E74; } // 800A0E68
  cmps(c,0,(int32_t)c->r[3],0); // 800A0E6C
  if (crb(c,2)) { goto L_800A0E78; } // 800A0E70
L_800A0E74:;
  c->r[31]=0u+0x00000001u; // 800A0E74
L_800A0E78:;
  c->r[3]=R32(c->r[30]+0x00000008u); // 800A0E78
  c->r[5]=R32(c->r[30]+0x00000010u); // 800A0E7C
  c->r[0]=R32(c->r[3]+0x00000010u); // 800A0E80
  cmps(c,0,(int32_t)c->r[5],(int32_t)c->r[0]); // 800A0E84
  if (!crb(c,0)) { goto L_800A0EA4; } // 800A0E88
L_800A0E8C:;
  c->r[3]=R32(c->r[30]+0x0000000Cu); // 800A0E8C
  c->r[0]=rotl(c->r[5],1)&0xFFFFFFFEu; // 800A0E90
  c->r[3]=c->r[3]+c->r[0]; // 800A0E94
  c->r[0]=R16(c->r[3]+0x00000020u); // 800A0E98
  cmpu(c,0,c->r[0],0x0000807Cu); // 800A0E9C
  if (crb(c,2)) { IRQCHK(c); goto L_800A0E4C; } // 800A0EA0
L_800A0EA4:;
  c->r[3]=c->r[31]|c->r[31]; // 800A0EA4
L_800A0EA8:;
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800A0EA8
  c->r[0]=R32(c->r[1]+0x00000014u); // 800A0EAC
  c->lr=c->r[0]; // 800A0EB0
  c->r[1]=c->r[1]+0x00000010u; // 800A0EB4
  return; // 800A0EB8
}

// fn_800A0EBC
void f_800A0EBC(Ctx* __restrict c) {
  trace_call(0x800A0EBCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800A0EBC
  c->r[0]=c->lr; // 800A0EC0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800A0EC4
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800A0EC8
  c->r[30]=c->r[3]|c->r[3]; // 800A0ECC
  c->lr=0x800A0ED4u; f_800A0F64(c); // 800A0ED0
  c->r[4]=R32(c->r[30]+0x00000008u); // 800A0ED4
  c->r[31]=c->r[3]|c->r[3]; // 800A0ED8
  c->r[5]=R32(c->r[30]+0x00000010u); // 800A0EDC
  c->r[0]=R32(c->r[4]+0x00000010u); // 800A0EE0
  cmps(c,0,(int32_t)c->r[5],(int32_t)c->r[0]); // 800A0EE4
  if (crb(c,0)) { goto L_800A0F34; } // 800A0EE8
  goto L_800A0F50; // 800A0EEC
  goto L_800A0F34; // 800A0EF0
L_800A0EF4:;
  c->r[4]=R32(c->r[30]+0x00000010u); // 800A0EF4
  c->r[3]=c->r[30]|c->r[30]; // 800A0EF8
  c->r[0]=c->r[4]+0x00000001u; // 800A0EFC
  W32(c->r[30]+0x00000010u,c->r[0]); // 800A0F00
  c->lr=0x800A0F08u; f_800A0F64(c); // 800A0F04
  cmps(c,0,(int32_t)c->r[31],0); // 800A0F08
  c->r[31]=0u+0x00000000u; // 800A0F0C
  if (crb(c,2)) { goto L_800A0F20; } // 800A0F10
  cmps(c,0,(int32_t)c->r[3],0); // 800A0F14
  if (crb(c,2)) { goto L_800A0F20; } // 800A0F18
  c->r[31]=0u+0x00000001u; // 800A0F1C
L_800A0F20:;
  c->r[3]=R32(c->r[30]+0x00000008u); // 800A0F20
  c->r[5]=R32(c->r[30]+0x00000010u); // 800A0F24
  c->r[0]=R32(c->r[3]+0x00000010u); // 800A0F28
  cmps(c,0,(int32_t)c->r[5],(int32_t)c->r[0]); // 800A0F2C
  if (!crb(c,0)) { goto L_800A0F4C; } // 800A0F30
L_800A0F34:;
  c->r[3]=R32(c->r[30]+0x0000000Cu); // 800A0F34
  c->r[0]=rotl(c->r[5],1)&0xFFFFFFFEu; // 800A0F38
  c->r[3]=c->r[3]+c->r[0]; // 800A0F3C
  c->r[0]=R16(c->r[3]+0x00000020u); // 800A0F40
  cmpu(c,0,c->r[0],0x00008026u); // 800A0F44
  if (crb(c,2)) { IRQCHK(c); goto L_800A0EF4; } // 800A0F48
L_800A0F4C:;
  c->r[3]=c->r[31]|c->r[31]; // 800A0F4C
L_800A0F50:;
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800A0F50
  c->r[0]=R32(c->r[1]+0x00000014u); // 800A0F54
  c->lr=c->r[0]; // 800A0F58
  c->r[1]=c->r[1]+0x00000010u; // 800A0F5C
  return; // 800A0F60
}

// fn_800A0F64
void f_800A0F64(Ctx* __restrict c) {
  trace_call(0x800A0F64u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800A0F64
  c->r[0]=c->lr; // 800A0F68
  c->r[7]=0u+0x00000001u; // 800A0F6C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800A0F70
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800A0F74
  c->r[31]=c->r[3]|c->r[3]; // 800A0F78
  c->r[6]=R32(c->r[3]+0x00000008u); // 800A0F7C
  c->r[4]=R32(c->r[3]+0x00000010u); // 800A0F80
  c->r[0]=R32(c->r[6]+0x00000010u); // 800A0F84
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 800A0F88
  if (crb(c,0)) { goto L_800A0F98; } // 800A0F8C
  c->r[3]=0u+0x00000001u; // 800A0F90
  goto L_800A104C; // 800A0F94
L_800A0F98:;
  c->r[5]=R32(c->r[3]+0x0000000Cu); // 800A0F98
  c->r[0]=rotl(c->r[4],1)&0xFFFFFFFEu; // 800A0F9C
  c->r[4]=c->r[4]+0x00000001u; // 800A0FA0
  c->r[5]=c->r[5]+c->r[0]; // 800A0FA4
  c->r[5]=R16(c->r[5]+0x00000020u); // 800A0FA8
  c->r[0]=rotl(c->r[5],0)&0x00008000u; cr0(c,c->r[0]); // 800A0FAC
  W32(c->r[3]+0x00000010u,c->r[4]); // 800A0FB0
  if (crb(c,2)) { goto L_800A1014; } // 800A0FB4
  c->r[0]=rotl(c->r[5],0)&0x00007FFFu; // 800A0FB8
  cmps(c,0,(int32_t)c->r[0],40); // 800A0FBC
  if (crb(c,2)) { goto L_800A0FD8; } // 800A0FC0
  cmps(c,0,(int32_t)c->r[0],33); // 800A0FC4
  if (crb(c,2)) { goto L_800A0FF0; } // 800A0FC8
  cmps(c,0,(int32_t)c->r[0],0); // 800A0FCC
  if (crb(c,2)) { goto L_800A1000; } // 800A0FD0
  goto L_800A1008; // 800A0FD4
L_800A0FD8:;
  c->lr=0x800A0FDCu; f_800A0E14(c); // 800A0FD8
  c->r[4]=R32(c->r[31]+0x00000010u); // 800A0FDC
  c->r[7]=c->r[3]|c->r[3]; // 800A0FE0
  c->r[0]=c->r[4]+0x00000001u; // 800A0FE4
  W32(c->r[31]+0x00000010u,c->r[0]); // 800A0FE8
  goto L_800A1048; // 800A0FEC
L_800A0FF0:;
  c->lr=0x800A0FF4u; f_800A0F64(c); // 800A0FF0
  c->r[0]=cntlz(c->r[3]); // 800A0FF4
  c->r[7]=rotl(c->r[0],27)&0x07FFFFFFu; // 800A0FF8
  goto L_800A1048; // 800A0FFC
L_800A1000:;
  c->r[7]=0u+0x00000001u; // 800A1000
  goto L_800A1048; // 800A1004
L_800A1008:;
  c->r[0]=R32(c->r[6]+0x00000010u); // 800A1008
  W32(c->r[3]+0x00000010u,c->r[0]); // 800A100C
  goto L_800A1048; // 800A1010
L_800A1014:;
  cmpu(c,0,c->r[5],0x000003FFu); // 800A1014
  c->r[3]=R32(c->r[3]+0x00000004u); // 800A1018
  if (!crb(c,1)) { goto L_800A1024; } // 800A101C
  c->r[5]=0u+0x00000000u; // 800A1020
L_800A1024:;
  c->r[0]=sraw(c,c->r[5],3); // 800A1024
  c->r[4]=rotl(c->r[5],0)&0x00000007u; // 800A1028
  c->r[3]=c->r[3]+c->r[0]; // 800A102C
  c->r[5]=0u+0x00000001u; // 800A1030
  c->r[0]=R8(c->r[3]+0x00000004u); // 800A1034
  c->r[3]=((c->r[4])&0x20)?0u:(c->r[5]<<((c->r[4])&31)); // 800A1038
  c->r[3]=c->r[3]&c->r[0]; // 800A103C
  c->r[0]=addc(c,c->r[3],0xFFFFFFFFu,0); // 800A1040
  c->r[7]=addc(c,~c->r[0],c->r[3],c->xer_ca); // 800A1044
L_800A1048:;
  c->r[3]=c->r[7]|c->r[7]; // 800A1048
L_800A104C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800A104C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800A1050
  c->lr=c->r[0]; // 800A1054
  c->r[1]=c->r[1]+0x00000010u; // 800A1058
  return; // 800A105C
}

// fn_800A1060
void f_800A1060(Ctx* __restrict c) {
  trace_call(0x800A1060u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800A1060
  c->r[4]=0u+0x806D0000u; // 800A1064
  c->r[12]=0u+0x80750000u; // 800A1068
  c->r[0]=0u+0x00000040u; // 800A106C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800A1070
  c->r[10]=0u+0x00000000u; // 800A1074
  c->r[4]=c->r[4]+0x00005BD0u; // 800A1078
  c->r[31]=c->r[3]|c->r[3]; // 800A107C
  W32(c->r[3]+0x00000000u,c->r[4]); // 800A1080
  c->r[12]=c->r[12]+0xFFFFA528u; // 800A1084
  c->r[11]=0u+0x00000000u; // 800A1088
  W32(c->r[3]+0x00000004u,c->r[10]); // 800A108C
  W32(c->r[3]+0x00000008u,c->r[10]); // 800A1090
  c->ctr=c->r[0]; // 800A1094
L_800A1098:;
  W32(c->r[12]+0x00000000u,c->r[10]); // 800A1098
  c->r[9]=c->r[11]+0x00000001u; // 800A109C
  c->r[8]=c->r[11]+0x00000002u; // 800A10A0
  c->r[7]=c->r[11]+0x00000003u; // 800A10A4
  W16(c->r[31]+0x0000000Cu,c->r[11]); // 800A10A8
  c->r[6]=c->r[11]+0x00000004u; // 800A10AC
  c->r[5]=c->r[11]+0x00000005u; // 800A10B0
  c->r[4]=c->r[11]+0x00000006u; // 800A10B4
  W32(c->r[12]+0x00000004u,c->r[10]); // 800A10B8
  c->r[0]=c->r[11]+0x00000007u; // 800A10BC
  W16(c->r[31]+0x0000000Eu,c->r[9]); // 800A10C0
  c->r[9]=c->r[11]+0x00000009u; // 800A10C4
  W32(c->r[12]+0x00000008u,c->r[10]); // 800A10C8
  W16(c->r[31]+0x00000010u,c->r[8]); // 800A10CC
  c->r[8]=c->r[11]+0x0000000Au; // 800A10D0
  W32(c->r[12]+0x0000000Cu,c->r[10]); // 800A10D4
  W16(c->r[31]+0x00000012u,c->r[7]); // 800A10D8
  c->r[7]=c->r[11]+0x0000000Bu; // 800A10DC
  W32(c->r[12]+0x00000010u,c->r[10]); // 800A10E0
  W16(c->r[31]+0x00000014u,c->r[6]); // 800A10E4
  c->r[6]=c->r[11]+0x0000000Cu; // 800A10E8
  W32(c->r[12]+0x00000014u,c->r[10]); // 800A10EC
  W16(c->r[31]+0x00000016u,c->r[5]); // 800A10F0
  c->r[5]=c->r[11]+0x0000000Du; // 800A10F4
  W32(c->r[12]+0x00000018u,c->r[10]); // 800A10F8
  W16(c->r[31]+0x00000018u,c->r[4]); // 800A10FC
  c->r[4]=c->r[11]+0x0000000Eu; // 800A1100
  W32(c->r[12]+0x0000001Cu,c->r[10]); // 800A1104
  W16(c->r[31]+0x0000001Au,c->r[0]); // 800A1108
  c->r[0]=c->r[11]+0x0000000Fu; // 800A110C
  c->r[11]=c->r[11]+0x00000008u; // 800A1110
  W32(c->r[12]+0x00000020u,c->r[10]); // 800A1114
  W16(c->r[31]+0x0000001Cu,c->r[11]); // 800A1118
  c->r[11]=c->r[11]+0x00000008u; // 800A111C
  W32(c->r[12]+0x00000024u,c->r[10]); // 800A1120
  W16(c->r[31]+0x0000001Eu,c->r[9]); // 800A1124
  W32(c->r[12]+0x00000028u,c->r[10]); // 800A1128
  W16(c->r[31]+0x00000020u,c->r[8]); // 800A112C
  W32(c->r[12]+0x0000002Cu,c->r[10]); // 800A1130
  W16(c->r[31]+0x00000022u,c->r[7]); // 800A1134
  W32(c->r[12]+0x00000030u,c->r[10]); // 800A1138
  W16(c->r[31]+0x00000024u,c->r[6]); // 800A113C
  W32(c->r[12]+0x00000034u,c->r[10]); // 800A1140
  W16(c->r[31]+0x00000026u,c->r[5]); // 800A1144
  W32(c->r[12]+0x00000038u,c->r[10]); // 800A1148
  W16(c->r[31]+0x00000028u,c->r[4]); // 800A114C
  W32(c->r[12]+0x0000003Cu,c->r[10]); // 800A1150
  c->r[12]=c->r[12]+0x00000040u; // 800A1154
  W16(c->r[31]+0x0000002Au,c->r[0]); // 800A1158
  c->r[31]=c->r[31]+0x00000020u; // 800A115C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800A1098; } // 800A1160
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800A1164
  c->r[1]=c->r[1]+0x00000010u; // 800A1168
  return; // 800A116C
}

// dtor_800A1170
void f_800A1170(Ctx* __restrict c) {
  return; // 800A1170
}

// fn_800A1174
void f_800A1174(Ctx* __restrict c) {
  trace_call(0x800A1174u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800A1174
  c->r[0]=c->lr; // 800A1178
  W32(c->r[1]+0x00000044u,c->r[0]); // 800A117C
  {uint32_t ea=c->r[1]+0x00000010u; for(int i=20;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800A1180
  c->r[31]=c->r[3]|c->r[3]; // 800A1184
  W32(c->r[3]+0x00000004u,c->r[4]); // 800A1188
  W32(c->r[3]+0x00000008u,c->r[5]); // 800A118C
  c->r[4]=R32(c->r[5]+0x00000000u); // 800A1190
  c->r[0]=c->r[4]+0xB2BA0000u; // 800A1194
  cmpu(c,0,c->r[0],0x00004E00u); // 800A1198
  if (crb(c,2)) { goto L_800A1290; } // 800A119C
  c->r[12]=0u+0x80750000u; // 800A11A0
  c->r[0]=0u+0x00000040u; // 800A11A4
  c->r[10]=0u+0x00000000u; // 800A11A8
  c->r[20]=c->r[31]|c->r[31]; // 800A11AC
  W32(c->r[3]+0x00000004u,c->r[10]); // 800A11B0
  c->r[12]=c->r[12]+0xFFFFA528u; // 800A11B4
  c->r[11]=0u+0x00000000u; // 800A11B8
  W32(c->r[3]+0x00000008u,c->r[10]); // 800A11BC
  c->ctr=c->r[0]; // 800A11C0
L_800A11C4:;
  W32(c->r[12]+0x00000000u,c->r[10]); // 800A11C4
  c->r[9]=c->r[11]+0x00000001u; // 800A11C8
  c->r[8]=c->r[11]+0x00000002u; // 800A11CC
  c->r[7]=c->r[11]+0x00000003u; // 800A11D0
  W16(c->r[20]+0x0000000Cu,c->r[11]); // 800A11D4
  c->r[6]=c->r[11]+0x00000004u; // 800A11D8
  c->r[5]=c->r[11]+0x00000005u; // 800A11DC
  c->r[4]=c->r[11]+0x00000006u; // 800A11E0
  W32(c->r[12]+0x00000004u,c->r[10]); // 800A11E4
  c->r[0]=c->r[11]+0x00000007u; // 800A11E8
  W16(c->r[20]+0x0000000Eu,c->r[9]); // 800A11EC
  c->r[9]=c->r[11]+0x00000009u; // 800A11F0
  W32(c->r[12]+0x00000008u,c->r[10]); // 800A11F4
  W16(c->r[20]+0x00000010u,c->r[8]); // 800A11F8
  c->r[8]=c->r[11]+0x0000000Au; // 800A11FC
  W32(c->r[12]+0x0000000Cu,c->r[10]); // 800A1200
  W16(c->r[20]+0x00000012u,c->r[7]); // 800A1204
  c->r[7]=c->r[11]+0x0000000Bu; // 800A1208
  W32(c->r[12]+0x00000010u,c->r[10]); // 800A120C
  W16(c->r[20]+0x00000014u,c->r[6]); // 800A1210
  c->r[6]=c->r[11]+0x0000000Cu; // 800A1214
  W32(c->r[12]+0x00000014u,c->r[10]); // 800A1218
  W16(c->r[20]+0x00000016u,c->r[5]); // 800A121C
  c->r[5]=c->r[11]+0x0000000Du; // 800A1220
  W32(c->r[12]+0x00000018u,c->r[10]); // 800A1224
  W16(c->r[20]+0x00000018u,c->r[4]); // 800A1228
  c->r[4]=c->r[11]+0x0000000Eu; // 800A122C
  W32(c->r[12]+0x0000001Cu,c->r[10]); // 800A1230
  W16(c->r[20]+0x0000001Au,c->r[0]); // 800A1234
  c->r[0]=c->r[11]+0x0000000Fu; // 800A1238
  c->r[11]=c->r[11]+0x00000008u; // 800A123C
  W32(c->r[12]+0x00000020u,c->r[10]); // 800A1240
  W16(c->r[20]+0x0000001Cu,c->r[11]); // 800A1244
  c->r[11]=c->r[11]+0x00000008u; // 800A1248
  W32(c->r[12]+0x00000024u,c->r[10]); // 800A124C
  W16(c->r[20]+0x0000001Eu,c->r[9]); // 800A1250
  W32(c->r[12]+0x00000028u,c->r[10]); // 800A1254
  W16(c->r[20]+0x00000020u,c->r[8]); // 800A1258
  W32(c->r[12]+0x0000002Cu,c->r[10]); // 800A125C
  W16(c->r[20]+0x00000022u,c->r[7]); // 800A1260
  W32(c->r[12]+0x00000030u,c->r[10]); // 800A1264
  W16(c->r[20]+0x00000024u,c->r[6]); // 800A1268
  W32(c->r[12]+0x00000034u,c->r[10]); // 800A126C
  W16(c->r[20]+0x00000026u,c->r[5]); // 800A1270
  W32(c->r[12]+0x00000038u,c->r[10]); // 800A1274
  W16(c->r[20]+0x00000028u,c->r[4]); // 800A1278
  W32(c->r[12]+0x0000003Cu,c->r[10]); // 800A127C
  c->r[12]=c->r[12]+0x00000040u; // 800A1280
  W16(c->r[20]+0x0000002Au,c->r[0]); // 800A1284
  c->r[20]=c->r[20]+0x00000020u; // 800A1288
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800A11C4; } // 800A128C
L_800A1290:;
  c->r[4]=R32(c->r[3]+0x00000008u); // 800A1290
  c->r[0]=R32(c->r[4]+0x00000004u); // 800A1294
  cmps(c,0,(int32_t)c->r[0],0); // 800A1298
  if (crb(c,2)) { goto L_800A1390; } // 800A129C
  c->r[12]=0u+0x80750000u; // 800A12A0
  c->r[0]=0u+0x00000040u; // 800A12A4
  c->r[10]=0u+0x00000000u; // 800A12A8
  c->r[20]=c->r[31]|c->r[31]; // 800A12AC
  W32(c->r[3]+0x00000004u,c->r[10]); // 800A12B0
  c->r[12]=c->r[12]+0xFFFFA528u; // 800A12B4
  c->r[11]=0u+0x00000000u; // 800A12B8
  W32(c->r[3]+0x00000008u,c->r[10]); // 800A12BC
  c->ctr=c->r[0]; // 800A12C0
L_800A12C4:;
  W32(c->r[12]+0x00000000u,c->r[10]); // 800A12C4
  c->r[9]=c->r[11]+0x00000001u; // 800A12C8
  c->r[8]=c->r[11]+0x00000002u; // 800A12CC
  c->r[7]=c->r[11]+0x00000003u; // 800A12D0
  W16(c->r[20]+0x0000000Cu,c->r[11]); // 800A12D4
  c->r[6]=c->r[11]+0x00000004u; // 800A12D8
  c->r[5]=c->r[11]+0x00000005u; // 800A12DC
  c->r[4]=c->r[11]+0x00000006u; // 800A12E0
  W32(c->r[12]+0x00000004u,c->r[10]); // 800A12E4
  c->r[0]=c->r[11]+0x00000007u; // 800A12E8
  W16(c->r[20]+0x0000000Eu,c->r[9]); // 800A12EC
  c->r[9]=c->r[11]+0x00000009u; // 800A12F0
  W32(c->r[12]+0x00000008u,c->r[10]); // 800A12F4
  W16(c->r[20]+0x00000010u,c->r[8]); // 800A12F8
  c->r[8]=c->r[11]+0x0000000Au; // 800A12FC
  W32(c->r[12]+0x0000000Cu,c->r[10]); // 800A1300
  W16(c->r[20]+0x00000012u,c->r[7]); // 800A1304
  c->r[7]=c->r[11]+0x0000000Bu; // 800A1308
  W32(c->r[12]+0x00000010u,c->r[10]); // 800A130C
  W16(c->r[20]+0x00000014u,c->r[6]); // 800A1310
  c->r[6]=c->r[11]+0x0000000Cu; // 800A1314
  W32(c->r[12]+0x00000014u,c->r[10]); // 800A1318
  W16(c->r[20]+0x00000016u,c->r[5]); // 800A131C
  c->r[5]=c->r[11]+0x0000000Du; // 800A1320
  W32(c->r[12]+0x00000018u,c->r[10]); // 800A1324
  W16(c->r[20]+0x00000018u,c->r[4]); // 800A1328
  c->r[4]=c->r[11]+0x0000000Eu; // 800A132C
  W32(c->r[12]+0x0000001Cu,c->r[10]); // 800A1330
  W16(c->r[20]+0x0000001Au,c->r[0]); // 800A1334
  c->r[0]=c->r[11]+0x0000000Fu; // 800A1338
  c->r[11]=c->r[11]+0x00000008u; // 800A133C
  W32(c->r[12]+0x00000020u,c->r[10]); // 800A1340
  W16(c->r[20]+0x0000001Cu,c->r[11]); // 800A1344
  c->r[11]=c->r[11]+0x00000008u; // 800A1348
  W32(c->r[12]+0x00000024u,c->r[10]); // 800A134C
  W16(c->r[20]+0x0000001Eu,c->r[9]); // 800A1350
  W32(c->r[12]+0x00000028u,c->r[10]); // 800A1354
  W16(c->r[20]+0x00000020u,c->r[8]); // 800A1358
  W32(c->r[12]+0x0000002Cu,c->r[10]); // 800A135C
  W16(c->r[20]+0x00000022u,c->r[7]); // 800A1360
  W32(c->r[12]+0x00000030u,c->r[10]); // 800A1364
  W16(c->r[20]+0x00000024u,c->r[6]); // 800A1368
  W32(c->r[12]+0x00000034u,c->r[10]); // 800A136C
  W16(c->r[20]+0x00000026u,c->r[5]); // 800A1370
  W32(c->r[12]+0x00000038u,c->r[10]); // 800A1374
  W16(c->r[20]+0x00000028u,c->r[4]); // 800A1378
  W32(c->r[12]+0x0000003Cu,c->r[10]); // 800A137C
  c->r[12]=c->r[12]+0x00000040u; // 800A1380
  W16(c->r[20]+0x0000002Au,c->r[0]); // 800A1384
  c->r[20]=c->r[20]+0x00000020u; // 800A1388
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800A12C4; } // 800A138C
L_800A1390:;
  c->r[11]=0u+0x80750000u; // 800A1390
  c->r[0]=0u+0x00000040u; // 800A1394
  c->r[12]=c->r[31]|c->r[31]; // 800A1398
  c->r[20]=0u+0x00000000u; // 800A139C
  c->r[11]=c->r[11]+0xFFFFA528u; // 800A13A0
  c->r[10]=0u+0x00000000u; // 800A13A4
  c->ctr=c->r[0]; // 800A13A8
L_800A13AC:;
  W32(c->r[11]+0x00000000u,c->r[10]); // 800A13AC
  c->r[9]=c->r[20]+0x00000001u; // 800A13B0
  c->r[8]=c->r[20]+0x00000002u; // 800A13B4
  c->r[7]=c->r[20]+0x00000003u; // 800A13B8
  W16(c->r[12]+0x0000000Cu,c->r[20]); // 800A13BC
  c->r[6]=c->r[20]+0x00000004u; // 800A13C0
  c->r[5]=c->r[20]+0x00000005u; // 800A13C4
  c->r[4]=c->r[20]+0x00000006u; // 800A13C8
  W32(c->r[11]+0x00000004u,c->r[10]); // 800A13CC
  c->r[0]=c->r[20]+0x00000007u; // 800A13D0
  W16(c->r[12]+0x0000000Eu,c->r[9]); // 800A13D4
  c->r[9]=c->r[20]+0x00000009u; // 800A13D8
  W32(c->r[11]+0x00000008u,c->r[10]); // 800A13DC
  W16(c->r[12]+0x00000010u,c->r[8]); // 800A13E0
  c->r[8]=c->r[20]+0x0000000Au; // 800A13E4
  W32(c->r[11]+0x0000000Cu,c->r[10]); // 800A13E8
  W16(c->r[12]+0x00000012u,c->r[7]); // 800A13EC
  c->r[7]=c->r[20]+0x0000000Bu; // 800A13F0
  W32(c->r[11]+0x00000010u,c->r[10]); // 800A13F4
  W16(c->r[12]+0x00000014u,c->r[6]); // 800A13F8
  c->r[6]=c->r[20]+0x0000000Cu; // 800A13FC
  W32(c->r[11]+0x00000014u,c->r[10]); // 800A1400
  W16(c->r[12]+0x00000016u,c->r[5]); // 800A1404
  c->r[5]=c->r[20]+0x0000000Du; // 800A1408
  W32(c->r[11]+0x00000018u,c->r[10]); // 800A140C
  W16(c->r[12]+0x00000018u,c->r[4]); // 800A1410
  c->r[4]=c->r[20]+0x0000000Eu; // 800A1414
  W32(c->r[11]+0x0000001Cu,c->r[10]); // 800A1418
  W16(c->r[12]+0x0000001Au,c->r[0]); // 800A141C
  c->r[0]=c->r[20]+0x0000000Fu; // 800A1420
  c->r[20]=c->r[20]+0x00000008u; // 800A1424
  W32(c->r[11]+0x00000020u,c->r[10]); // 800A1428
  W16(c->r[12]+0x0000001Cu,c->r[20]); // 800A142C
  c->r[20]=c->r[20]+0x00000008u; // 800A1430
  W32(c->r[11]+0x00000024u,c->r[10]); // 800A1434
  W16(c->r[12]+0x0000001Eu,c->r[9]); // 800A1438
  W32(c->r[11]+0x00000028u,c->r[10]); // 800A143C
  W16(c->r[12]+0x00000020u,c->r[8]); // 800A1440
  W32(c->r[11]+0x0000002Cu,c->r[10]); // 800A1444
  W16(c->r[12]+0x00000022u,c->r[7]); // 800A1448
  W32(c->r[11]+0x00000030u,c->r[10]); // 800A144C
  W16(c->r[12]+0x00000024u,c->r[6]); // 800A1450
  W32(c->r[11]+0x00000034u,c->r[10]); // 800A1454
  W16(c->r[12]+0x00000026u,c->r[5]); // 800A1458
  W32(c->r[11]+0x00000038u,c->r[10]); // 800A145C
  W16(c->r[12]+0x00000028u,c->r[4]); // 800A1460
  W32(c->r[11]+0x0000003Cu,c->r[10]); // 800A1464
  c->r[11]=c->r[11]+0x00000040u; // 800A1468
  W16(c->r[12]+0x0000002Au,c->r[0]); // 800A146C
  c->r[12]=c->r[12]+0x00000020u; // 800A1470
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800A13AC; } // 800A1474
  c->r[6]=0u+0x80750000u; // 800A1478
  c->r[8]=0u+0x00000000u; // 800A147C
  c->r[6]=c->r[6]+0xFFFFA528u; // 800A1480
  goto L_800A14A8; // 800A1484
L_800A1488:;
  c->r[0]=R32(c->r[7]+0x0000000Cu); // 800A1488
  c->r[5]=R32(c->r[7]+0x00000008u); // 800A148C
  c->r[4]=(uint32_t)((int32_t)c->r[0]*(int32_t)c->r[8]); // 800A1490
  c->r[8]=c->r[8]+0x00000001u; // 800A1494
  c->r[0]=c->r[7]+c->r[5]; // 800A1498
  c->r[0]=c->r[4]+c->r[0]; // 800A149C
  W32(c->r[6]+0x00000000u,c->r[0]); // 800A14A0
  c->r[6]=c->r[6]+0x00000004u; // 800A14A4
L_800A14A8:;
  c->r[7]=R32(c->r[3]+0x00000008u); // 800A14A8
  c->r[4]=R32(c->r[7]+0x00000010u); // 800A14AC
  cmps(c,0,(int32_t)c->r[8],(int32_t)c->r[4]); // 800A14B0
  if (crb(c,0)) { IRQCHK(c); goto L_800A1488; } // 800A14B4
  c->r[28]=addc(c,c->r[4],0xFFFFFFFFu,0); cr0(c,c->r[28]); // 800A14B8
  if (crb(c,0)) { goto L_800A18F0; } // 800A14BC
  c->r[0]=rotl(c->r[28],0)&0xFFFFFFFEu; // 800A14C0
  c->r[30]=0u+0x80750000u; // 800A14C4
  c->r[3]=c->r[3]+c->r[0]; // 800A14C8
  c->r[25]=c->r[28]|c->r[28]; // 800A14CC
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x0000000Cu); // 800A14D0
  c->r[30]=c->r[30]+0xFFFFA528u; // 800A14D4
  c->r[24]=0u+0x00000000u; // 800A14D8
  c->r[20]=0u+0x00000000u; // 800A14DC
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800A14E0
  c->r[29]=R32(c->r[30]+c->r[0]); // 800A14E4
  goto L_800A14F4; // 800A14E8
L_800A14EC:;
  c->r[24]=c->r[24]+0x00000001u; // 800A14EC
  c->r[20]=c->r[20]+0x00000002u; // 800A14F0
L_800A14F4:;
  c->r[22]=c->r[31]+c->r[20]; // 800A14F4
  c->r[23]=(uint32_t)(int32_t)(int16_t)R16(c->r[22]+0x0000000Cu); // 800A14F8
  c->r[0]=rotl(c->r[23],2)&0xFFFFFFFCu; // 800A14FC
  c->r[3]=R32(c->r[30]+c->r[0]); // 800A1500
  cmps(c,0,(int32_t)c->r[3],0); // 800A1504
  if (!crb(c,2)) { goto L_800A1514; } // 800A1508
  c->r[0]=0u+0x00000000u; // 800A150C
  goto L_800A1530; // 800A1510
L_800A1514:;
  cmps(c,0,(int32_t)c->r[29],0); // 800A1514
  if (!crb(c,2)) { goto L_800A1524; } // 800A1518
  c->r[0]=0u+0x00000001u; // 800A151C
  goto L_800A1530; // 800A1520
L_800A1524:;
  c->r[4]=c->r[29]|c->r[29]; // 800A1524
  c->lr=0x800A152Cu; f_803B393C(c); // 800A1528
  c->r[0]=rotl(c->r[3],1)&0x00000001u; // 800A152C
L_800A1530:;
  cmps(c,0,(int32_t)c->r[0],0); // 800A1530
  c->r[0]=0u+0x00000000u; // 800A1534
  if (crb(c,2)) { goto L_800A1548; } // 800A1538
  cmps(c,0,(int32_t)c->r[24],(int32_t)c->r[28]); // 800A153C
  if (crb(c,1)) { goto L_800A1548; } // 800A1540
  c->r[0]=0u+0x00000001u; // 800A1544
L_800A1548:;
  cmps(c,0,(int32_t)c->r[0],0); // 800A1548
  if (!crb(c,2)) { IRQCHK(c); goto L_800A14EC; } // 800A154C
  c->r[0]=rotl(c->r[25],1)&0xFFFFFFFEu; // 800A1550
  c->r[21]=c->r[31]+c->r[0]; // 800A1554
  goto L_800A1564; // 800A1558
L_800A155C:;
  c->r[21]=c->r[21]+0xFFFFFFFEu; // 800A155C
  c->r[25]=c->r[25]+0xFFFFFFFFu; // 800A1560
L_800A1564:;
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[21]+0x0000000Cu); // 800A1564
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800A1568
  c->r[3]=R32(c->r[30]+c->r[0]); // 800A156C
  cmps(c,0,(int32_t)c->r[3],0); // 800A1570
  if (!crb(c,2)) { goto L_800A1580; } // 800A1574
  c->r[0]=0u+0x00000001u; // 800A1578
  goto L_800A15A4; // 800A157C
L_800A1580:;
  cmps(c,0,(int32_t)c->r[29],0); // 800A1580
  if (!crb(c,2)) { goto L_800A1590; } // 800A1584
  c->r[0]=0u+0x00000000u; // 800A1588
  goto L_800A15A4; // 800A158C
L_800A1590:;
  c->r[4]=c->r[29]|c->r[29]; // 800A1590
  c->lr=0x800A1598u; f_803B393C(c); // 800A1594
  c->r[0]=0u-c->r[3]; // 800A1598
  c->r[0]=c->r[0]&~c->r[3]; // 800A159C
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 800A15A0
L_800A15A4:;
  cmps(c,0,(int32_t)c->r[0],0); // 800A15A4
  c->r[0]=0u+0x00000000u; // 800A15A8
  if (crb(c,2)) { goto L_800A15BC; } // 800A15AC
  cmps(c,0,(int32_t)c->r[25],0); // 800A15B0
  if (crb(c,0)) { goto L_800A15BC; } // 800A15B4
  c->r[0]=0u+0x00000001u; // 800A15B8
L_800A15BC:;
  cmps(c,0,(int32_t)c->r[0],0); // 800A15BC
  if (!crb(c,2)) { IRQCHK(c); goto L_800A155C; } // 800A15C0
  cmps(c,0,(int32_t)c->r[24],(int32_t)c->r[25]); // 800A15C4
  if (!crb(c,0)) { goto L_800A15F0; } // 800A15C8
  c->r[0]=rotl(c->r[25],1)&0xFFFFFFFEu; // 800A15CC
  c->r[24]=c->r[24]+0x00000001u; // 800A15D0
  c->r[3]=c->r[31]+c->r[0]; // 800A15D4
  c->r[20]=c->r[20]+0x00000002u; // 800A15D8
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x0000000Cu); // 800A15DC
  c->r[25]=c->r[25]+0xFFFFFFFFu; // 800A15E0
  W16(c->r[22]+0x0000000Cu,c->r[0]); // 800A15E4
  W16(c->r[3]+0x0000000Cu,c->r[23]); // 800A15E8
  IRQCHK(c); goto L_800A14F4; // 800A15EC
L_800A15F0:;
  c->r[27]=c->r[24]+0xFFFFFFFFu; // 800A15F0
  cmps(c,0,(int32_t)c->r[27],1); // 800A15F4
  if (crb(c,0)) { goto L_800A1768; } // 800A15F8
  c->r[0]=rotl(c->r[27],0)&0xFFFFFFFEu; // 800A15FC
  c->r[30]=0u+0x80750000u; // 800A1600
  c->r[3]=c->r[31]+c->r[0]; // 800A1604
  c->r[26]=0u+0x00000000u; // 800A1608
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x0000000Cu); // 800A160C
  c->r[30]=c->r[30]+0xFFFFA528u; // 800A1610
  c->r[20]=0u+0x00000000u; // 800A1614
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800A1618
  c->r[29]=R32(c->r[30]+c->r[0]); // 800A161C
  goto L_800A162C; // 800A1620
L_800A1624:;
  c->r[26]=c->r[26]+0x00000001u; // 800A1624
  c->r[20]=c->r[20]+0x00000002u; // 800A1628
L_800A162C:;
  c->r[21]=c->r[31]+c->r[20]; // 800A162C
  c->r[22]=(uint32_t)(int32_t)(int16_t)R16(c->r[21]+0x0000000Cu); // 800A1630
  c->r[0]=rotl(c->r[22],2)&0xFFFFFFFCu; // 800A1634
  c->r[3]=R32(c->r[30]+c->r[0]); // 800A1638
  cmps(c,0,(int32_t)c->r[3],0); // 800A163C
  if (!crb(c,2)) { goto L_800A164C; } // 800A1640
  c->r[0]=0u+0x00000000u; // 800A1644
  goto L_800A1668; // 800A1648
L_800A164C:;
  cmps(c,0,(int32_t)c->r[29],0); // 800A164C
  if (!crb(c,2)) { goto L_800A165C; } // 800A1650
  c->r[0]=0u+0x00000001u; // 800A1654
  goto L_800A1668; // 800A1658
L_800A165C:;
  c->r[4]=c->r[29]|c->r[29]; // 800A165C
  c->lr=0x800A1664u; f_803B393C(c); // 800A1660
  c->r[0]=rotl(c->r[3],1)&0x00000001u; // 800A1664
L_800A1668:;
  cmps(c,0,(int32_t)c->r[0],0); // 800A1668
  c->r[3]=0u+0x00000000u; // 800A166C
  if (crb(c,2)) { goto L_800A1684; } // 800A1670
  c->r[0]=c->r[24]+0xFFFFFFFFu; // 800A1674
  cmps(c,0,(int32_t)c->r[26],(int32_t)c->r[0]); // 800A1678
  if (crb(c,1)) { goto L_800A1684; } // 800A167C
  c->r[3]=0u+0x00000001u; // 800A1680
L_800A1684:;
  cmps(c,0,(int32_t)c->r[3],0); // 800A1684
  if (!crb(c,2)) { IRQCHK(c); goto L_800A1624; } // 800A1688
  c->r[0]=rotl(c->r[27],1)&0xFFFFFFFEu; // 800A168C
  c->r[23]=c->r[31]+c->r[0]; // 800A1690
  goto L_800A16A0; // 800A1694
L_800A1698:;
  c->r[23]=c->r[23]+0xFFFFFFFEu; // 800A1698
  c->r[27]=c->r[27]+0xFFFFFFFFu; // 800A169C
L_800A16A0:;
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[23]+0x0000000Cu); // 800A16A0
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800A16A4
  c->r[3]=R32(c->r[30]+c->r[0]); // 800A16A8
  cmps(c,0,(int32_t)c->r[3],0); // 800A16AC
  if (!crb(c,2)) { goto L_800A16BC; } // 800A16B0
  c->r[0]=0u+0x00000001u; // 800A16B4
  goto L_800A16E0; // 800A16B8
L_800A16BC:;
  cmps(c,0,(int32_t)c->r[29],0); // 800A16BC
  if (!crb(c,2)) { goto L_800A16CC; } // 800A16C0
  c->r[0]=0u+0x00000000u; // 800A16C4
  goto L_800A16E0; // 800A16C8
L_800A16CC:;
  c->r[4]=c->r[29]|c->r[29]; // 800A16CC
  c->lr=0x800A16D4u; f_803B393C(c); // 800A16D0
  c->r[0]=0u-c->r[3]; // 800A16D4
  c->r[0]=c->r[0]&~c->r[3]; // 800A16D8
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 800A16DC
L_800A16E0:;
  cmps(c,0,(int32_t)c->r[0],0); // 800A16E0
  c->r[0]=0u+0x00000000u; // 800A16E4
  if (crb(c,2)) { goto L_800A16F8; } // 800A16E8
  cmps(c,0,(int32_t)c->r[27],0); // 800A16EC
  if (crb(c,0)) { goto L_800A16F8; } // 800A16F0
  c->r[0]=0u+0x00000001u; // 800A16F4
L_800A16F8:;
  cmps(c,0,(int32_t)c->r[0],0); // 800A16F8
  if (!crb(c,2)) { IRQCHK(c); goto L_800A1698; } // 800A16FC
  cmps(c,0,(int32_t)c->r[26],(int32_t)c->r[27]); // 800A1700
  if (!crb(c,0)) { goto L_800A172C; } // 800A1704
  c->r[0]=rotl(c->r[27],1)&0xFFFFFFFEu; // 800A1708
  c->r[26]=c->r[26]+0x00000001u; // 800A170C
  c->r[3]=c->r[31]+c->r[0]; // 800A1710
  c->r[20]=c->r[20]+0x00000002u; // 800A1714
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x0000000Cu); // 800A1718
  c->r[27]=c->r[27]+0xFFFFFFFFu; // 800A171C
  W16(c->r[21]+0x0000000Cu,c->r[0]); // 800A1720
  W16(c->r[3]+0x0000000Cu,c->r[22]); // 800A1724
  IRQCHK(c); goto L_800A162C; // 800A1728
L_800A172C:;
  c->r[4]=addc(c,c->r[26],0xFFFFFFFFu,0); cr0(c,c->r[4]); // 800A172C
  if (!crb(c,1)) { goto L_800A1748; } // 800A1730
  c->r[5]=0u+0x80750000u; // 800A1734
  c->r[6]=c->r[31]+0x0000000Cu; // 800A1738
  c->r[5]=c->r[5]+0xFFFFA528u; // 800A173C
  c->r[3]=0u+0x00000000u; // 800A1740
  c->lr=0x800A1748u; f_800A1904(c); // 800A1744
L_800A1748:;
  c->r[4]=c->r[24]+0xFFFFFFFFu; // 800A1748
  c->r[3]=c->r[27]+0x00000001u; // 800A174C
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[3]); // 800A1750
  if (!crb(c,1)) { goto L_800A1768; } // 800A1754
  c->r[5]=0u+0x80750000u; // 800A1758
  c->r[6]=c->r[31]+0x0000000Cu; // 800A175C
  c->r[5]=c->r[5]+0xFFFFA528u; // 800A1760
  c->lr=0x800A1768u; f_800A1904(c); // 800A1764
L_800A1768:;
  c->r[27]=c->r[25]+0x00000001u; // 800A1768
  cmps(c,0,(int32_t)c->r[28],(int32_t)c->r[27]); // 800A176C
  if (!crb(c,1)) { goto L_800A18F0; } // 800A1770
  cmps(c,0,(int32_t)c->r[27],(int32_t)c->r[28]); // 800A1774
  if (crb(c,1)) { goto L_800A18F0; } // 800A1778
  c->r[0]=c->r[27]+c->r[28]; // 800A177C
  c->r[29]=0u+0x80750000u; // 800A1780
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFEu; // 800A1784
  c->r[26]=c->r[28]|c->r[28]; // 800A1788
  c->r[3]=c->r[31]+c->r[0]; // 800A178C
  c->r[29]=c->r[29]+0xFFFFA528u; // 800A1790
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x0000000Cu); // 800A1794
  c->r[23]=rotl(c->r[27],1)&0xFFFFFFFEu; // 800A1798
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800A179C
  c->r[30]=R32(c->r[29]+c->r[0]); // 800A17A0
  goto L_800A17B0; // 800A17A4
L_800A17A8:;
  c->r[27]=c->r[27]+0x00000001u; // 800A17A8
  c->r[23]=c->r[23]+0x00000002u; // 800A17AC
L_800A17B0:;
  c->r[21]=c->r[31]+c->r[23]; // 800A17B0
  c->r[22]=(uint32_t)(int32_t)(int16_t)R16(c->r[21]+0x0000000Cu); // 800A17B4
  c->r[0]=rotl(c->r[22],2)&0xFFFFFFFCu; // 800A17B8
  c->r[3]=R32(c->r[29]+c->r[0]); // 800A17BC
  cmps(c,0,(int32_t)c->r[3],0); // 800A17C0
  if (!crb(c,2)) { goto L_800A17D0; } // 800A17C4
  c->r[0]=0u+0x00000000u; // 800A17C8
  goto L_800A17EC; // 800A17CC
L_800A17D0:;
  cmps(c,0,(int32_t)c->r[30],0); // 800A17D0
  if (!crb(c,2)) { goto L_800A17E0; } // 800A17D4
  c->r[0]=0u+0x00000001u; // 800A17D8
  goto L_800A17EC; // 800A17DC
L_800A17E0:;
  c->r[4]=c->r[30]|c->r[30]; // 800A17E0
  c->lr=0x800A17E8u; f_803B393C(c); // 800A17E4
  c->r[0]=rotl(c->r[3],1)&0x00000001u; // 800A17E8
L_800A17EC:;
  cmps(c,0,(int32_t)c->r[0],0); // 800A17EC
  c->r[0]=0u+0x00000000u; // 800A17F0
  if (crb(c,2)) { goto L_800A1804; } // 800A17F4
  cmps(c,0,(int32_t)c->r[27],(int32_t)c->r[28]); // 800A17F8
  if (crb(c,1)) { goto L_800A1804; } // 800A17FC
  c->r[0]=0u+0x00000001u; // 800A1800
L_800A1804:;
  cmps(c,0,(int32_t)c->r[0],0); // 800A1804
  if (!crb(c,2)) { IRQCHK(c); goto L_800A17A8; } // 800A1808
  c->r[0]=rotl(c->r[26],1)&0xFFFFFFFEu; // 800A180C
  c->r[24]=c->r[31]+c->r[0]; // 800A1810
  goto L_800A1820; // 800A1814
L_800A1818:;
  c->r[24]=c->r[24]+0xFFFFFFFEu; // 800A1818
  c->r[26]=c->r[26]+0xFFFFFFFFu; // 800A181C
L_800A1820:;
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[24]+0x0000000Cu); // 800A1820
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800A1824
  c->r[3]=R32(c->r[29]+c->r[0]); // 800A1828
  cmps(c,0,(int32_t)c->r[3],0); // 800A182C
  if (!crb(c,2)) { goto L_800A183C; } // 800A1830
  c->r[0]=0u+0x00000001u; // 800A1834
  goto L_800A1860; // 800A1838
L_800A183C:;
  cmps(c,0,(int32_t)c->r[30],0); // 800A183C
  if (!crb(c,2)) { goto L_800A184C; } // 800A1840
  c->r[0]=0u+0x00000000u; // 800A1844
  goto L_800A1860; // 800A1848
L_800A184C:;
  c->r[4]=c->r[30]|c->r[30]; // 800A184C
  c->lr=0x800A1854u; f_803B393C(c); // 800A1850
  c->r[0]=0u-c->r[3]; // 800A1854
  c->r[0]=c->r[0]&~c->r[3]; // 800A1858
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 800A185C
L_800A1860:;
  cmps(c,0,(int32_t)c->r[0],0); // 800A1860
  c->r[3]=0u+0x00000000u; // 800A1864
  if (crb(c,2)) { goto L_800A187C; } // 800A1868
  c->r[0]=c->r[25]+0x00000001u; // 800A186C
  cmps(c,0,(int32_t)c->r[26],(int32_t)c->r[0]); // 800A1870
  if (crb(c,0)) { goto L_800A187C; } // 800A1874
  c->r[3]=0u+0x00000001u; // 800A1878
L_800A187C:;
  cmps(c,0,(int32_t)c->r[3],0); // 800A187C
  if (!crb(c,2)) { IRQCHK(c); goto L_800A1818; } // 800A1880
  cmps(c,0,(int32_t)c->r[27],(int32_t)c->r[26]); // 800A1884
  if (!crb(c,0)) { goto L_800A18B0; } // 800A1888
  c->r[0]=rotl(c->r[26],1)&0xFFFFFFFEu; // 800A188C
  c->r[27]=c->r[27]+0x00000001u; // 800A1890
  c->r[3]=c->r[31]+c->r[0]; // 800A1894
  c->r[23]=c->r[23]+0x00000002u; // 800A1898
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x0000000Cu); // 800A189C
  c->r[26]=c->r[26]+0xFFFFFFFFu; // 800A18A0
  W16(c->r[21]+0x0000000Cu,c->r[0]); // 800A18A4
  W16(c->r[3]+0x0000000Cu,c->r[22]); // 800A18A8
  IRQCHK(c); goto L_800A17B0; // 800A18AC
L_800A18B0:;
  c->r[3]=c->r[25]+0x00000001u; // 800A18B0
  c->r[4]=c->r[27]+0xFFFFFFFFu; // 800A18B4
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[4]); // 800A18B8
  if (!crb(c,0)) { goto L_800A18D0; } // 800A18BC
  c->r[5]=0u+0x80750000u; // 800A18C0
  c->r[6]=c->r[31]+0x0000000Cu; // 800A18C4
  c->r[5]=c->r[5]+0xFFFFA528u; // 800A18C8
  c->lr=0x800A18D0u; f_800A1904(c); // 800A18CC
L_800A18D0:;
  c->r[3]=c->r[26]+0x00000001u; // 800A18D0
  cmps(c,0,(int32_t)c->r[28],(int32_t)c->r[3]); // 800A18D4
  if (!crb(c,1)) { goto L_800A18F0; } // 800A18D8
  c->r[5]=0u+0x80750000u; // 800A18DC
  c->r[4]=c->r[28]|c->r[28]; // 800A18E0
  c->r[6]=c->r[31]+0x0000000Cu; // 800A18E4
  c->r[5]=c->r[5]+0xFFFFA528u; // 800A18E8
  c->lr=0x800A18F0u; f_800A1904(c); // 800A18EC
L_800A18F0:;
  {uint32_t ea=c->r[1]+0x00000010u; for(int i=20;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800A18F0
  c->r[0]=R32(c->r[1]+0x00000044u); // 800A18F4
  c->lr=c->r[0]; // 800A18F8
  c->r[1]=c->r[1]+0x00000040u; // 800A18FC
  return; // 800A1900
}

// fn_800A1904
void f_800A1904(Ctx* __restrict c) {
  trace_call(0x800A1904u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800A1904
  c->r[0]=c->lr; // 800A1908
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[4]); // 800A190C
  W32(c->r[1]+0x00000044u,c->r[0]); // 800A1910
  {uint32_t ea=c->r[1]+0x00000010u; for(int i=20;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800A1914
  c->r[21]=c->r[3]|c->r[3]; // 800A1918
  c->r[22]=c->r[4]|c->r[4]; // 800A191C
  c->r[23]=c->r[5]|c->r[5]; // 800A1920
  c->r[24]=c->r[6]|c->r[6]; // 800A1924
  if (crb(c,1)) { goto L_800A1D20; } // 800A1928
  c->r[0]=c->r[3]+c->r[4]; // 800A192C
  c->r[26]=c->r[21]|c->r[21]; // 800A1930
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFEu; // 800A1934
  c->r[25]=c->r[22]|c->r[22]; // 800A1938
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[6]+c->r[0]); // 800A193C
  c->r[20]=rotl(c->r[3],1)&0xFFFFFFFEu; // 800A1940
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800A1944
  c->r[31]=R32(c->r[5]+c->r[0]); // 800A1948
  goto L_800A1958; // 800A194C
L_800A1950:;
  c->r[26]=c->r[26]+0x00000001u; // 800A1950
  c->r[20]=c->r[20]+0x00000002u; // 800A1954
L_800A1958:;
  c->r[28]=(uint32_t)(int32_t)(int16_t)R16(c->r[24]+c->r[20]); // 800A1958
  c->r[0]=rotl(c->r[28],2)&0xFFFFFFFCu; // 800A195C
  c->r[3]=R32(c->r[23]+c->r[0]); // 800A1960
  cmps(c,0,(int32_t)c->r[3],0); // 800A1964
  if (!crb(c,2)) { goto L_800A1974; } // 800A1968
  c->r[0]=0u+0x00000000u; // 800A196C
  goto L_800A1990; // 800A1970
L_800A1974:;
  cmps(c,0,(int32_t)c->r[31],0); // 800A1974
  if (!crb(c,2)) { goto L_800A1984; } // 800A1978
  c->r[0]=0u+0x00000001u; // 800A197C
  goto L_800A1990; // 800A1980
L_800A1984:;
  c->r[4]=c->r[31]|c->r[31]; // 800A1984
  c->lr=0x800A198Cu; f_803B393C(c); // 800A1988
  c->r[0]=rotl(c->r[3],1)&0x00000001u; // 800A198C
L_800A1990:;
  cmps(c,0,(int32_t)c->r[0],0); // 800A1990
  c->r[0]=0u+0x00000000u; // 800A1994
  if (crb(c,2)) { goto L_800A19A8; } // 800A1998
  cmps(c,0,(int32_t)c->r[26],(int32_t)c->r[22]); // 800A199C
  if (crb(c,1)) { goto L_800A19A8; } // 800A19A0
  c->r[0]=0u+0x00000001u; // 800A19A4
L_800A19A8:;
  cmps(c,0,(int32_t)c->r[0],0); // 800A19A8
  if (!crb(c,2)) { IRQCHK(c); goto L_800A1950; } // 800A19AC
  c->r[0]=rotl(c->r[25],1)&0xFFFFFFFEu; // 800A19B0
  c->r[27]=c->r[24]+c->r[0]; // 800A19B4
  goto L_800A19C4; // 800A19B8
L_800A19BC:;
  c->r[27]=c->r[27]+0xFFFFFFFEu; // 800A19BC
  c->r[25]=c->r[25]+0xFFFFFFFFu; // 800A19C0
L_800A19C4:;
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[27]+0x00000000u); // 800A19C4
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800A19C8
  c->r[3]=R32(c->r[23]+c->r[0]); // 800A19CC
  cmps(c,0,(int32_t)c->r[3],0); // 800A19D0
  if (!crb(c,2)) { goto L_800A19E0; } // 800A19D4
  c->r[0]=0u+0x00000001u; // 800A19D8
  goto L_800A1A04; // 800A19DC
L_800A19E0:;
  cmps(c,0,(int32_t)c->r[31],0); // 800A19E0
  if (!crb(c,2)) { goto L_800A19F0; } // 800A19E4
  c->r[0]=0u+0x00000000u; // 800A19E8
  goto L_800A1A04; // 800A19EC
L_800A19F0:;
  c->r[4]=c->r[31]|c->r[31]; // 800A19F0
  c->lr=0x800A19F8u; f_803B393C(c); // 800A19F4
  c->r[0]=0u-c->r[3]; // 800A19F8
  c->r[0]=c->r[0]&~c->r[3]; // 800A19FC
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 800A1A00
L_800A1A04:;
  cmps(c,0,(int32_t)c->r[0],0); // 800A1A04
  c->r[0]=0u+0x00000000u; // 800A1A08
  if (crb(c,2)) { goto L_800A1A1C; } // 800A1A0C
  cmps(c,0,(int32_t)c->r[25],(int32_t)c->r[21]); // 800A1A10
  if (crb(c,0)) { goto L_800A1A1C; } // 800A1A14
  c->r[0]=0u+0x00000001u; // 800A1A18
L_800A1A1C:;
  cmps(c,0,(int32_t)c->r[0],0); // 800A1A1C
  if (!crb(c,2)) { IRQCHK(c); goto L_800A19BC; } // 800A1A20
  cmps(c,0,(int32_t)c->r[26],(int32_t)c->r[25]); // 800A1A24
  if (!crb(c,0)) { goto L_800A1A4C; } // 800A1A28
  c->r[3]=rotl(c->r[25],1)&0xFFFFFFFEu; // 800A1A2C
  c->r[26]=c->r[26]+0x00000001u; // 800A1A30
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[24]+c->r[3]); // 800A1A34
  c->r[25]=c->r[25]+0xFFFFFFFFu; // 800A1A38
  W16(c->r[24]+c->r[20],c->r[0]); // 800A1A3C
  c->r[20]=c->r[20]+0x00000002u; // 800A1A40
  W16(c->r[24]+c->r[3],c->r[28]); // 800A1A44
  IRQCHK(c); goto L_800A1958; // 800A1A48
L_800A1A4C:;
  c->r[30]=c->r[26]+0xFFFFFFFFu; // 800A1A4C
  cmps(c,0,(int32_t)c->r[21],(int32_t)c->r[30]); // 800A1A50
  if (!crb(c,0)) { goto L_800A1BB4; } // 800A1A54
  if (crb(c,1)) { goto L_800A1BB4; } // 800A1A58
  c->r[0]=c->r[21]+c->r[30]; // 800A1A5C
  c->r[29]=c->r[21]|c->r[21]; // 800A1A60
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFEu; // 800A1A64
  c->r[20]=rotl(c->r[21],1)&0xFFFFFFFEu; // 800A1A68
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[24]+c->r[0]); // 800A1A6C
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800A1A70
  c->r[31]=R32(c->r[23]+c->r[0]); // 800A1A74
  goto L_800A1A84; // 800A1A78
L_800A1A7C:;
  c->r[29]=c->r[29]+0x00000001u; // 800A1A7C
  c->r[20]=c->r[20]+0x00000002u; // 800A1A80
L_800A1A84:;
  c->r[27]=(uint32_t)(int32_t)(int16_t)R16(c->r[24]+c->r[20]); // 800A1A84
  c->r[0]=rotl(c->r[27],2)&0xFFFFFFFCu; // 800A1A88
  c->r[3]=R32(c->r[23]+c->r[0]); // 800A1A8C
  cmps(c,0,(int32_t)c->r[3],0); // 800A1A90
  if (!crb(c,2)) { goto L_800A1AA0; } // 800A1A94
  c->r[0]=0u+0x00000000u; // 800A1A98
  goto L_800A1ABC; // 800A1A9C
L_800A1AA0:;
  cmps(c,0,(int32_t)c->r[31],0); // 800A1AA0
  if (!crb(c,2)) { goto L_800A1AB0; } // 800A1AA4
  c->r[0]=0u+0x00000001u; // 800A1AA8
  goto L_800A1ABC; // 800A1AAC
L_800A1AB0:;
  c->r[4]=c->r[31]|c->r[31]; // 800A1AB0
  c->lr=0x800A1AB8u; f_803B393C(c); // 800A1AB4
  c->r[0]=rotl(c->r[3],1)&0x00000001u; // 800A1AB8
L_800A1ABC:;
  cmps(c,0,(int32_t)c->r[0],0); // 800A1ABC
  c->r[3]=0u+0x00000000u; // 800A1AC0
  if (crb(c,2)) { goto L_800A1AD8; } // 800A1AC4
  c->r[0]=c->r[26]+0xFFFFFFFFu; // 800A1AC8
  cmps(c,0,(int32_t)c->r[29],(int32_t)c->r[0]); // 800A1ACC
  if (crb(c,1)) { goto L_800A1AD8; } // 800A1AD0
  c->r[3]=0u+0x00000001u; // 800A1AD4
L_800A1AD8:;
  cmps(c,0,(int32_t)c->r[3],0); // 800A1AD8
  if (!crb(c,2)) { IRQCHK(c); goto L_800A1A7C; } // 800A1ADC
  c->r[0]=rotl(c->r[30],1)&0xFFFFFFFEu; // 800A1AE0
  c->r[28]=c->r[24]+c->r[0]; // 800A1AE4
  goto L_800A1AF4; // 800A1AE8
L_800A1AEC:;
  c->r[28]=c->r[28]+0xFFFFFFFEu; // 800A1AEC
  c->r[30]=c->r[30]+0xFFFFFFFFu; // 800A1AF0
L_800A1AF4:;
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[28]+0x00000000u); // 800A1AF4
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800A1AF8
  c->r[3]=R32(c->r[23]+c->r[0]); // 800A1AFC
  cmps(c,0,(int32_t)c->r[3],0); // 800A1B00
  if (!crb(c,2)) { goto L_800A1B10; } // 800A1B04
  c->r[0]=0u+0x00000001u; // 800A1B08
  goto L_800A1B34; // 800A1B0C
L_800A1B10:;
  cmps(c,0,(int32_t)c->r[31],0); // 800A1B10
  if (!crb(c,2)) { goto L_800A1B20; } // 800A1B14
  c->r[0]=0u+0x00000000u; // 800A1B18
  goto L_800A1B34; // 800A1B1C
L_800A1B20:;
  c->r[4]=c->r[31]|c->r[31]; // 800A1B20
  c->lr=0x800A1B28u; f_803B393C(c); // 800A1B24
  c->r[0]=0u-c->r[3]; // 800A1B28
  c->r[0]=c->r[0]&~c->r[3]; // 800A1B2C
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 800A1B30
L_800A1B34:;
  cmps(c,0,(int32_t)c->r[0],0); // 800A1B34
  c->r[0]=0u+0x00000000u; // 800A1B38
  if (crb(c,2)) { goto L_800A1B4C; } // 800A1B3C
  cmps(c,0,(int32_t)c->r[30],(int32_t)c->r[21]); // 800A1B40
  if (crb(c,0)) { goto L_800A1B4C; } // 800A1B44
  c->r[0]=0u+0x00000001u; // 800A1B48
L_800A1B4C:;
  cmps(c,0,(int32_t)c->r[0],0); // 800A1B4C
  if (!crb(c,2)) { IRQCHK(c); goto L_800A1AEC; } // 800A1B50
  cmps(c,0,(int32_t)c->r[29],(int32_t)c->r[30]); // 800A1B54
  if (!crb(c,0)) { goto L_800A1B7C; } // 800A1B58
  c->r[3]=rotl(c->r[30],1)&0xFFFFFFFEu; // 800A1B5C
  c->r[29]=c->r[29]+0x00000001u; // 800A1B60
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[24]+c->r[3]); // 800A1B64
  c->r[30]=c->r[30]+0xFFFFFFFFu; // 800A1B68
  W16(c->r[24]+c->r[20],c->r[0]); // 800A1B6C
  c->r[20]=c->r[20]+0x00000002u; // 800A1B70
  W16(c->r[24]+c->r[3],c->r[27]); // 800A1B74
  IRQCHK(c); goto L_800A1A84; // 800A1B78
L_800A1B7C:;
  c->r[4]=c->r[29]+0xFFFFFFFFu; // 800A1B7C
  cmps(c,0,(int32_t)c->r[21],(int32_t)c->r[4]); // 800A1B80
  if (!crb(c,0)) { goto L_800A1B98; } // 800A1B84
  c->r[3]=c->r[21]|c->r[21]; // 800A1B88
  c->r[5]=c->r[23]|c->r[23]; // 800A1B8C
  c->r[6]=c->r[24]|c->r[24]; // 800A1B90
  c->lr=0x800A1B98u; f_800A1904(c); // 800A1B94
L_800A1B98:;
  c->r[4]=c->r[26]+0xFFFFFFFFu; // 800A1B98
  c->r[3]=c->r[30]+0x00000001u; // 800A1B9C
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[3]); // 800A1BA0
  if (!crb(c,1)) { goto L_800A1BB4; } // 800A1BA4
  c->r[5]=c->r[23]|c->r[23]; // 800A1BA8
  c->r[6]=c->r[24]|c->r[24]; // 800A1BAC
  c->lr=0x800A1BB4u; f_800A1904(c); // 800A1BB0
L_800A1BB4:;
  c->r[30]=c->r[25]+0x00000001u; // 800A1BB4
  cmps(c,0,(int32_t)c->r[22],(int32_t)c->r[30]); // 800A1BB8
  if (!crb(c,1)) { goto L_800A1D20; } // 800A1BBC
  cmps(c,0,(int32_t)c->r[30],(int32_t)c->r[22]); // 800A1BC0
  if (crb(c,1)) { goto L_800A1D20; } // 800A1BC4
  c->r[0]=c->r[30]+c->r[22]; // 800A1BC8
  c->r[29]=c->r[22]|c->r[22]; // 800A1BCC
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFEu; // 800A1BD0
  c->r[21]=rotl(c->r[30],1)&0xFFFFFFFEu; // 800A1BD4
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[24]+c->r[0]); // 800A1BD8
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800A1BDC
  c->r[31]=R32(c->r[23]+c->r[0]); // 800A1BE0
  goto L_800A1BF0; // 800A1BE4
L_800A1BE8:;
  c->r[30]=c->r[30]+0x00000001u; // 800A1BE8
  c->r[21]=c->r[21]+0x00000002u; // 800A1BEC
L_800A1BF0:;
  c->r[27]=(uint32_t)(int32_t)(int16_t)R16(c->r[24]+c->r[21]); // 800A1BF0
  c->r[0]=rotl(c->r[27],2)&0xFFFFFFFCu; // 800A1BF4
  c->r[3]=R32(c->r[23]+c->r[0]); // 800A1BF8
  cmps(c,0,(int32_t)c->r[3],0); // 800A1BFC
  if (!crb(c,2)) { goto L_800A1C0C; } // 800A1C00
  c->r[0]=0u+0x00000000u; // 800A1C04
  goto L_800A1C28; // 800A1C08
L_800A1C0C:;
  cmps(c,0,(int32_t)c->r[31],0); // 800A1C0C
  if (!crb(c,2)) { goto L_800A1C1C; } // 800A1C10
  c->r[0]=0u+0x00000001u; // 800A1C14
  goto L_800A1C28; // 800A1C18
L_800A1C1C:;
  c->r[4]=c->r[31]|c->r[31]; // 800A1C1C
  c->lr=0x800A1C24u; f_803B393C(c); // 800A1C20
  c->r[0]=rotl(c->r[3],1)&0x00000001u; // 800A1C24
L_800A1C28:;
  cmps(c,0,(int32_t)c->r[0],0); // 800A1C28
  c->r[0]=0u+0x00000000u; // 800A1C2C
  if (crb(c,2)) { goto L_800A1C40; } // 800A1C30
  cmps(c,0,(int32_t)c->r[30],(int32_t)c->r[22]); // 800A1C34
  if (crb(c,1)) { goto L_800A1C40; } // 800A1C38
  c->r[0]=0u+0x00000001u; // 800A1C3C
L_800A1C40:;
  cmps(c,0,(int32_t)c->r[0],0); // 800A1C40
  if (!crb(c,2)) { IRQCHK(c); goto L_800A1BE8; } // 800A1C44
  c->r[0]=rotl(c->r[29],1)&0xFFFFFFFEu; // 800A1C48
  c->r[20]=c->r[24]+c->r[0]; // 800A1C4C
  goto L_800A1C5C; // 800A1C50
L_800A1C54:;
  c->r[20]=c->r[20]+0xFFFFFFFEu; // 800A1C54
  c->r[29]=c->r[29]+0xFFFFFFFFu; // 800A1C58
L_800A1C5C:;
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[20]+0x00000000u); // 800A1C5C
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800A1C60
  c->r[3]=R32(c->r[23]+c->r[0]); // 800A1C64
  cmps(c,0,(int32_t)c->r[3],0); // 800A1C68
  if (!crb(c,2)) { goto L_800A1C78; } // 800A1C6C
  c->r[0]=0u+0x00000001u; // 800A1C70
  goto L_800A1C9C; // 800A1C74
L_800A1C78:;
  cmps(c,0,(int32_t)c->r[31],0); // 800A1C78
  if (!crb(c,2)) { goto L_800A1C88; } // 800A1C7C
  c->r[0]=0u+0x00000000u; // 800A1C80
  goto L_800A1C9C; // 800A1C84
L_800A1C88:;
  c->r[4]=c->r[31]|c->r[31]; // 800A1C88
  c->lr=0x800A1C90u; f_803B393C(c); // 800A1C8C
  c->r[0]=0u-c->r[3]; // 800A1C90
  c->r[0]=c->r[0]&~c->r[3]; // 800A1C94
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 800A1C98
L_800A1C9C:;
  cmps(c,0,(int32_t)c->r[0],0); // 800A1C9C
  c->r[3]=0u+0x00000000u; // 800A1CA0
  if (crb(c,2)) { goto L_800A1CB8; } // 800A1CA4
  c->r[0]=c->r[25]+0x00000001u; // 800A1CA8
  cmps(c,0,(int32_t)c->r[29],(int32_t)c->r[0]); // 800A1CAC
  if (crb(c,0)) { goto L_800A1CB8; } // 800A1CB0
  c->r[3]=0u+0x00000001u; // 800A1CB4
L_800A1CB8:;
  cmps(c,0,(int32_t)c->r[3],0); // 800A1CB8
  if (!crb(c,2)) { IRQCHK(c); goto L_800A1C54; } // 800A1CBC
  cmps(c,0,(int32_t)c->r[30],(int32_t)c->r[29]); // 800A1CC0
  if (!crb(c,0)) { goto L_800A1CE8; } // 800A1CC4
  c->r[3]=rotl(c->r[29],1)&0xFFFFFFFEu; // 800A1CC8
  c->r[30]=c->r[30]+0x00000001u; // 800A1CCC
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[24]+c->r[3]); // 800A1CD0
  c->r[29]=c->r[29]+0xFFFFFFFFu; // 800A1CD4
  W16(c->r[24]+c->r[21],c->r[0]); // 800A1CD8
  c->r[21]=c->r[21]+0x00000002u; // 800A1CDC
  W16(c->r[24]+c->r[3],c->r[27]); // 800A1CE0
  IRQCHK(c); goto L_800A1BF0; // 800A1CE4
L_800A1CE8:;
  c->r[3]=c->r[25]+0x00000001u; // 800A1CE8
  c->r[4]=c->r[30]+0xFFFFFFFFu; // 800A1CEC
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[4]); // 800A1CF0
  if (!crb(c,0)) { goto L_800A1D04; } // 800A1CF4
  c->r[5]=c->r[23]|c->r[23]; // 800A1CF8
  c->r[6]=c->r[24]|c->r[24]; // 800A1CFC
  c->lr=0x800A1D04u; f_800A1904(c); // 800A1D00
L_800A1D04:;
  c->r[3]=c->r[29]+0x00000001u; // 800A1D04
  cmps(c,0,(int32_t)c->r[22],(int32_t)c->r[3]); // 800A1D08
  if (!crb(c,1)) { goto L_800A1D20; } // 800A1D0C
  c->r[4]=c->r[22]|c->r[22]; // 800A1D10
  c->r[5]=c->r[23]|c->r[23]; // 800A1D14
  c->r[6]=c->r[24]|c->r[24]; // 800A1D18
  c->lr=0x800A1D20u; f_800A1904(c); // 800A1D1C
L_800A1D20:;
  {uint32_t ea=c->r[1]+0x00000010u; for(int i=20;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800A1D20
  c->r[0]=R32(c->r[1]+0x00000044u); // 800A1D24
  c->lr=c->r[0]; // 800A1D28
  c->r[1]=c->r[1]+0x00000040u; // 800A1D2C
  return; // 800A1D30
}

// fn_800A1D34
void f_800A1D34(Ctx* __restrict c) {
  trace_call(0x800A1D34u);
  c->r[0]=R32(c->r[3]+0x00000004u); // 800A1D34
  cmps(c,0,(int32_t)c->r[0],0); // 800A1D38
  if (crb(c,2)) { goto L_800A1D4C; } // 800A1D3C
  c->r[3]=R32(c->r[3]+0x00000008u); // 800A1D40
  cmps(c,0,(int32_t)c->r[3],0); // 800A1D44
  if (!crb(c,2)) { goto L_800A1D54; } // 800A1D48
L_800A1D4C:;
  c->r[3]=0u+0x00000000u; // 800A1D4C
  return; // 800A1D50
L_800A1D54:;
  c->r[3]=R32(c->r[3]+0x00000010u); // 800A1D54
  return; // 800A1D58
}

// fn_800A1D5C
void f_800A1D5C(Ctx* __restrict c) {
  trace_call(0x800A1D5Cu);
  c->r[0]=R32(c->r[3]+0x00000004u); // 800A1D5C
  cmps(c,0,(int32_t)c->r[0],0); // 800A1D60
  if (crb(c,2)) { goto L_800A1D74; } // 800A1D64
  c->r[6]=R32(c->r[3]+0x00000008u); // 800A1D68
  cmps(c,0,(int32_t)c->r[6],0); // 800A1D6C
  if (!crb(c,2)) { goto L_800A1D7C; } // 800A1D70
L_800A1D74:;
  c->r[3]=0u+0x00000000u; // 800A1D74
  return; // 800A1D78
L_800A1D7C:;
  cmps(c,0,(int32_t)c->r[4],0); // 800A1D7C
  if (crb(c,0)) { goto L_800A1D90; } // 800A1D80
  c->r[0]=R32(c->r[6]+0x00000010u); // 800A1D84
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 800A1D88
  if (crb(c,0)) { goto L_800A1D98; } // 800A1D8C
L_800A1D90:;
  c->r[3]=0u+0x00000000u; // 800A1D90
  return; // 800A1D94
L_800A1D98:;
  c->r[0]=R32(c->r[6]+0x0000000Cu); // 800A1D98
  c->r[5]=R32(c->r[6]+0x00000008u); // 800A1D9C
  c->r[3]=(uint32_t)((int32_t)c->r[0]*(int32_t)c->r[4]); // 800A1DA0
  c->r[0]=c->r[6]+c->r[5]; // 800A1DA4
  c->r[3]=c->r[3]+c->r[0]; // 800A1DA8
  return; // 800A1DAC
}

// fn_800A1DB0
void f_800A1DB0(Ctx* __restrict c) {
  trace_call(0x800A1DB0u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800A1DB0
  c->r[0]=c->lr; // 800A1DB4
  W32(c->r[1]+0x00000034u,c->r[0]); // 800A1DB8
  {uint32_t ea=c->r[1]+0x00000010u; for(int i=24;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800A1DBC
  c->r[24]=c->r[3]|c->r[3]; // 800A1DC0
  c->r[25]=c->r[4]|c->r[4]; // 800A1DC4
  c->r[0]=R32(c->r[3]+0x00000004u); // 800A1DC8
  cmps(c,0,(int32_t)c->r[0],0); // 800A1DCC
  if (crb(c,2)) { goto L_800A1DE0; } // 800A1DD0
  c->r[31]=R32(c->r[3]+0x00000008u); // 800A1DD4
  cmps(c,0,(int32_t)c->r[31],0); // 800A1DD8
  if (!crb(c,2)) { goto L_800A1DE8; } // 800A1DDC
L_800A1DE0:;
  c->r[3]=0u+0xFFFFFFFFu; // 800A1DE0
  goto L_800A1E6C; // 800A1DE4
L_800A1DE8:;
  cmps(c,0,(int32_t)c->r[4],0); // 800A1DE8
  if (!crb(c,2)) { goto L_800A1DF8; } // 800A1DEC
  c->r[3]=0u+0xFFFFFFFFu; // 800A1DF0
  goto L_800A1E6C; // 800A1DF4
L_800A1DF8:;
  c->r[3]=R32(c->r[31]+0x00000010u); // 800A1DF8
  c->r[30]=0u+0x00000000u; // 800A1DFC
  c->r[26]=0u+0xFFFFFFFFu; // 800A1E00
  c->r[29]=c->r[3]+0xFFFFFFFFu; // 800A1E04
  goto L_800A1E60; // 800A1E08
L_800A1E0C:;
  c->r[5]=c->r[30]+c->r[29]; // 800A1E0C
  c->r[0]=R32(c->r[31]+0x00000008u); // 800A1E10
  c->r[3]=rotl(c->r[5],0)&0xFFFFFFFEu; // 800A1E14
  c->r[4]=R32(c->r[31]+0x0000000Cu); // 800A1E18
  c->r[3]=c->r[24]+c->r[3]; // 800A1E1C
  c->r[0]=c->r[31]+c->r[0]; // 800A1E20
  c->r[27]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x0000000Cu); // 800A1E24
  c->r[3]=c->r[25]|c->r[25]; // 800A1E28
  c->r[28]=sraw(c,c->r[5],1); // 800A1E2C
  c->r[4]=(uint32_t)((int32_t)c->r[4]*(int32_t)c->r[27]); // 800A1E30
  c->r[4]=c->r[4]+c->r[0]; // 800A1E34
  c->lr=0x800A1E3Cu; f_803B393C(c); // 800A1E38
  cmps(c,0,(int32_t)c->r[3],0); // 800A1E3C
  if (!crb(c,2)) { goto L_800A1E4C; } // 800A1E40
  c->r[26]=c->r[27]|c->r[27]; // 800A1E44
  goto L_800A1E68; // 800A1E48
L_800A1E4C:;
  if (!crb(c,0)) { goto L_800A1E54; } // 800A1E4C
  c->r[29]=c->r[28]+0xFFFFFFFFu; // 800A1E50
L_800A1E54:;
  cmps(c,0,(int32_t)c->r[3],0); // 800A1E54
  if (crb(c,0)) { goto L_800A1E60; } // 800A1E58
  c->r[30]=c->r[28]+0x00000001u; // 800A1E5C
L_800A1E60:;
  cmps(c,0,(int32_t)c->r[30],(int32_t)c->r[29]); // 800A1E60
  if (!crb(c,1)) { IRQCHK(c); goto L_800A1E0C; } // 800A1E64
L_800A1E68:;
  c->r[3]=c->r[26]|c->r[26]; // 800A1E68
L_800A1E6C:;
  {uint32_t ea=c->r[1]+0x00000010u; for(int i=24;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800A1E6C
  c->r[0]=R32(c->r[1]+0x00000034u); // 800A1E70
  c->lr=c->r[0]; // 800A1E74
  c->r[1]=c->r[1]+0x00000030u; // 800A1E78
  return; // 800A1E7C
}

// fn_800A1E80
void f_800A1E80(Ctx* __restrict c) {
  trace_call(0x800A1E80u);
  c->r[11]=0u+0x80750000u; // 800A1E80
  c->r[0]=0u+0x00000040u; // 800A1E84
  c->r[10]=0u+0x00000000u; // 800A1E88
  W32(c->r[3]+0x00000004u,c->r[10]); // 800A1E8C
  c->r[11]=c->r[11]+0xFFFFA528u; // 800A1E90
  c->r[12]=0u+0x00000000u; // 800A1E94
  W32(c->r[3]+0x00000008u,c->r[10]); // 800A1E98
  c->ctr=c->r[0]; // 800A1E9C
L_800A1EA0:;
  W32(c->r[11]+0x00000000u,c->r[10]); // 800A1EA0
  c->r[9]=c->r[12]+0x00000001u; // 800A1EA4
  c->r[8]=c->r[12]+0x00000002u; // 800A1EA8
  c->r[7]=c->r[12]+0x00000003u; // 800A1EAC
  W16(c->r[3]+0x0000000Cu,c->r[12]); // 800A1EB0
  c->r[6]=c->r[12]+0x00000004u; // 800A1EB4
  c->r[5]=c->r[12]+0x00000005u; // 800A1EB8
  c->r[4]=c->r[12]+0x00000006u; // 800A1EBC
  W32(c->r[11]+0x00000004u,c->r[10]); // 800A1EC0
  c->r[0]=c->r[12]+0x00000007u; // 800A1EC4
  W16(c->r[3]+0x0000000Eu,c->r[9]); // 800A1EC8
  c->r[9]=c->r[12]+0x00000009u; // 800A1ECC
  W32(c->r[11]+0x00000008u,c->r[10]); // 800A1ED0
  W16(c->r[3]+0x00000010u,c->r[8]); // 800A1ED4
  c->r[8]=c->r[12]+0x0000000Au; // 800A1ED8
  W32(c->r[11]+0x0000000Cu,c->r[10]); // 800A1EDC
  W16(c->r[3]+0x00000012u,c->r[7]); // 800A1EE0
  c->r[7]=c->r[12]+0x0000000Bu; // 800A1EE4
  W32(c->r[11]+0x00000010u,c->r[10]); // 800A1EE8
  W16(c->r[3]+0x00000014u,c->r[6]); // 800A1EEC
  c->r[6]=c->r[12]+0x0000000Cu; // 800A1EF0
  W32(c->r[11]+0x00000014u,c->r[10]); // 800A1EF4
  W16(c->r[3]+0x00000016u,c->r[5]); // 800A1EF8
  c->r[5]=c->r[12]+0x0000000Du; // 800A1EFC
  W32(c->r[11]+0x00000018u,c->r[10]); // 800A1F00
  W16(c->r[3]+0x00000018u,c->r[4]); // 800A1F04
  c->r[4]=c->r[12]+0x0000000Eu; // 800A1F08
  W32(c->r[11]+0x0000001Cu,c->r[10]); // 800A1F0C
  W16(c->r[3]+0x0000001Au,c->r[0]); // 800A1F10
  c->r[0]=c->r[12]+0x0000000Fu; // 800A1F14
  c->r[12]=c->r[12]+0x00000008u; // 800A1F18
  W32(c->r[11]+0x00000020u,c->r[10]); // 800A1F1C
  W16(c->r[3]+0x0000001Cu,c->r[12]); // 800A1F20
  c->r[12]=c->r[12]+0x00000008u; // 800A1F24
  W32(c->r[11]+0x00000024u,c->r[10]); // 800A1F28
  W16(c->r[3]+0x0000001Eu,c->r[9]); // 800A1F2C
  W32(c->r[11]+0x00000028u,c->r[10]); // 800A1F30
  W16(c->r[3]+0x00000020u,c->r[8]); // 800A1F34
  W32(c->r[11]+0x0000002Cu,c->r[10]); // 800A1F38
  W16(c->r[3]+0x00000022u,c->r[7]); // 800A1F3C
  W32(c->r[11]+0x00000030u,c->r[10]); // 800A1F40
  W16(c->r[3]+0x00000024u,c->r[6]); // 800A1F44
  W32(c->r[11]+0x00000034u,c->r[10]); // 800A1F48
  W16(c->r[3]+0x00000026u,c->r[5]); // 800A1F4C
  W32(c->r[11]+0x00000038u,c->r[10]); // 800A1F50
  W16(c->r[3]+0x00000028u,c->r[4]); // 800A1F54
  W32(c->r[11]+0x0000003Cu,c->r[10]); // 800A1F58
  c->r[11]=c->r[11]+0x00000040u; // 800A1F5C
  W16(c->r[3]+0x0000002Au,c->r[0]); // 800A1F60
  c->r[3]=c->r[3]+0x00000020u; // 800A1F64
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800A1EA0; } // 800A1F68
  return; // 800A1F6C
}

// fn_800A1F70
void f_800A1F70(Ctx* __restrict c) {
  trace_call(0x800A1F70u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800A1F70
  c->r[0]=c->lr; // 800A1F74
  c->r[4]=0u+0x806D0000u; // 800A1F78
  c->r[5]=0u+0x00000080u; // 800A1F7C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800A1F80
  c->r[4]=c->r[4]+0x00005BE0u; // 800A1F84
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800A1F88
  c->r[31]=c->r[3]|c->r[3]; // 800A1F8C
  W32(c->r[3]+0x00000000u,c->r[4]); // 800A1F90
  c->r[4]=0u+0x00000000u; // 800A1F94
  c->r[3]=c->r[3]+0x00000004u; // 800A1F98
  c->lr=0x800A1FA0u; f_800043EC(c); // 800A1F9C
  c->r[3]=c->r[31]|c->r[31]; // 800A1FA0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800A1FA4
  c->r[0]=R32(c->r[1]+0x00000014u); // 800A1FA8
  c->lr=c->r[0]; // 800A1FAC
  c->r[1]=c->r[1]+0x00000010u; // 800A1FB0
  return; // 800A1FB4
}

// dtor_800A1FB8
void f_800A1FB8(Ctx* __restrict c) {
  return; // 800A1FB8
}

// fn_800A1FBC
void f_800A1FBC(Ctx* __restrict c) {
  trace_call(0x800A1FBCu);
  c->r[4]=0u+0x00000000u; // 800A1FBC
  c->r[5]=0u+0x00000080u; // 800A1FC0
  c->r[3]=c->r[3]+0x00000004u; // 800A1FC4
  f_800043EC(c); return; // 800A1FC8
}

// fn_800A1FCC
void f_800A1FCC(Ctx* __restrict c) {
  trace_call(0x800A1FCCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800A1FCC
  c->r[0]=c->lr; // 800A1FD0
  c->r[8]=0u+0x806D0000u; // 800A1FD4
  c->r[4]=0u+0x800A0000u; // 800A1FD8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800A1FDC
  c->r[8]=c->r[8]+0x00005BF0u; // 800A1FE0
  c->r[5]=0u+0x800A0000u; // 800A1FE4
  c->r[10]=0u+0x00000000u; // 800A1FE8
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800A1FEC
  c->r[6]=0u+0x00000002u; // 800A1FF0
  c->r[0]=c->r[8]+0x00000028u; // 800A1FF4
  c->r[9]=0u+0xFFFFFFFFu; // 800A1FF8
  c->r[30]=c->r[3]|c->r[3]; // 800A1FFC
  c->r[4]=c->r[4]+0x000020C0u; // 800A2000
  c->r[5]=c->r[5]+0x00002100u; // 800A2004
  c->r[7]=0u+0x00000004u; // 800A2008
  W32(c->r[3]+0x00000004u,c->r[6]); // 800A200C
  c->r[6]=0u+0x000008B0u; // 800A2010
  W32(c->r[3]+0x00000000u,c->r[10]); // 800A2014
  W32(c->r[3]+0x00000010u,c->r[9]); // 800A2018
  W32(c->r[3]+0x00000014u,c->r[10]); // 800A201C
  W32(c->r[3]+0x00000018u,c->r[10]); // 800A2020
  W32(c->r[3]+0x0000001Cu,c->r[10]); // 800A2024
  W32(c->r[3]+0x0000000Cu,c->r[10]); // 800A2028
  W32(c->r[3]+0x00000020u,c->r[10]); // 800A202C
  W32(c->r[3]+0x00000008u,c->r[10]); // 800A2030
  W32(c->r[3]+0x000000A4u,c->r[8]); // 800A2034
  W32(c->r[3]+0x000000A8u,c->r[0]); // 800A2038
  c->r[3]=c->r[3]+0x000000ACu; // 800A203C
  c->lr=0x800A2044u; f_803A9830(c); // 800A2040
  c->r[3]=c->r[30]|c->r[30]; // 800A2044
  c->r[4]=0u+0xFFFFFFFFu; // 800A2048
  c->lr=0x800A2050u; f_800A2790(c); // 800A204C
  c->r[3]=c->r[30]|c->r[30]; // 800A2050
  c->lr=0x800A2058u; f_800A282C(c); // 800A2054
  c->r[0]=R8(c->r[13]+0xFFFFBB98u); // 800A2058
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800A205C
  if (!crb(c,2)) { goto L_800A2084; } // 800A2060
  c->r[31]=0u+0x80730000u; // 800A2064
  c->r[3]=c->r[31]+0x000067B8u; // 800A2068
  c->lr=0x800A2070u; f_8029EF58(c); // 800A206C
  c->r[3]=0u+0x806D0000u; // 800A2070
  c->r[0]=0u+0x00000001u; // 800A2074
  c->r[3]=c->r[3]+0xFFFFC25Cu; // 800A2078
  W32(c->r[31]+0x000067B8u,c->r[3]); // 800A207C
  W8(c->r[13]+0xFFFFBB98u,c->r[0]); // 800A2080
L_800A2084:;
  c->r[3]=0u+0x80730000u; // 800A2084
  c->r[8]=0u+0x80690000u; // 800A2088
  c->r[4]=c->r[30]|c->r[30]; // 800A208C
  c->r[5]=0u+0x00000000u; // 800A2090
  c->r[3]=c->r[3]+0x000067B8u; // 800A2094
  c->r[8]=c->r[8]+0xFFFFDD88u; // 800A2098
  c->r[6]=0u+0x0000003Fu; // 800A209C
  c->r[7]=0u+0x0000001Au; // 800A20A0
  c->lr=0x800A20A8u; f_8029F4EC(c); // 800A20A4
  c->r[3]=c->r[30]|c->r[30]; // 800A20A8
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800A20AC
  c->r[0]=R32(c->r[1]+0x00000014u); // 800A20B0
  c->lr=c->r[0]; // 800A20B4
  c->r[1]=c->r[1]+0x00000010u; // 800A20B8
  return; // 800A20BC
}

// fn_800A20C0
void f_800A20C0(Ctx* __restrict c) {
  trace_call(0x800A20C0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800A20C0
  c->r[0]=c->lr; // 800A20C4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800A20C8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800A20CC
  c->r[31]=c->r[3]|c->r[3]; // 800A20D0
  c->lr=0x800A20D8u; f_800A1F70(c); // 800A20D4
  c->r[3]=c->r[31]+0x00000084u; // 800A20D8
  c->lr=0x800A20E0u; f_800A1060(c); // 800A20DC
  c->r[3]=c->r[31]+0x00000890u; // 800A20E0
  c->lr=0x800A20E8u; f_800A0C10(c); // 800A20E4
  c->r[3]=c->r[31]|c->r[31]; // 800A20E8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800A20EC
  c->r[0]=R32(c->r[1]+0x00000014u); // 800A20F0
  c->lr=c->r[0]; // 800A20F4
  c->r[1]=c->r[1]+0x00000010u; // 800A20F8
  return; // 800A20FC
}

// dtor_800A2100
void f_800A2100(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800A2100
  c->r[0]=c->lr; // 800A2104
  cmps(c,0,(int32_t)c->r[3],0); // 800A2108
  W32(c->r[1]+0x00000014u,c->r[0]); // 800A210C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800A2110
  c->r[31]=c->r[3]|c->r[3]; // 800A2114
  if (crb(c,2)) { goto L_800A2140; } // 800A2118
  c->r[4]=0u+0xFFFFFFFFu; // 800A211C
  c->r[3]=c->r[3]+0x00000890u; // 800A2120
  c->lr=0x800A2128u; f_800A0C4C(c); // 800A2124
  c->r[3]=c->r[31]+0x00000084u; // 800A2128
  c->r[4]=0u+0xFFFFFFFFu; // 800A212C
  c->lr=0x800A2134u; f_800A1170(c); // 800A2130
  c->r[3]=c->r[31]|c->r[31]; // 800A2134
  c->r[4]=0u+0xFFFFFFFFu; // 800A2138
  c->lr=0x800A2140u; f_800A1FB8(c); // 800A213C
L_800A2140:;
  c->r[3]=c->r[31]|c->r[31]; // 800A2140
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800A2144
  c->r[0]=R32(c->r[1]+0x00000014u); // 800A2148
  c->lr=c->r[0]; // 800A214C
  c->r[1]=c->r[1]+0x00000010u; // 800A2150
  return; // 800A2154
}

// fn_800A2158
void f_800A2158(Ctx* __restrict c) {
  trace_call(0x800A2158u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800A2158
  c->r[0]=c->lr; // 800A215C
  cmps(c,0,(int32_t)c->r[3],0); // 800A2160
  W32(c->r[1]+0x00000014u,c->r[0]); // 800A2164
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800A2168
  c->r[31]=c->r[3]|c->r[3]; // 800A216C
  if (crb(c,2)) { goto L_800A218C; } // 800A2170
  c->r[4]=0u+0x800A0000u; // 800A2174
  c->r[5]=0u+0x000008B0u; // 800A2178
  c->r[4]=c->r[4]+0x00002100u; // 800A217C
  c->r[6]=0u+0x00000004u; // 800A2180
  c->r[3]=c->r[3]+0x000000ACu; // 800A2184
  c->lr=0x800A218Cu; f_803A9928(c); // 800A2188
L_800A218C:;
  c->r[3]=c->r[31]|c->r[31]; // 800A218C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800A2190
  c->r[0]=R32(c->r[1]+0x00000014u); // 800A2194
  c->lr=c->r[0]; // 800A2198
  c->r[1]=c->r[1]+0x00000010u; // 800A219C
  return; // 800A21A0
}

// fn_800A21A4
void f_800A21A4(Ctx* __restrict c) {
  trace_call(0x800A21A4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800A21A4
  c->r[0]=c->lr; // 800A21A8
  c->r[4]=0u+0xFFFFFFFFu; // 800A21AC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800A21B0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800A21B4
  c->r[31]=c->r[3]|c->r[3]; // 800A21B8
  c->lr=0x800A21C0u; f_800A2790(c); // 800A21BC
  c->r[3]=R32(c->r[13]+0xFFFFC218u); // 800A21C0
  cmps(c,0,(int32_t)c->r[3],0); // 800A21C4
  if (crb(c,2)) { goto L_800A220C; } // 800A21C8
  c->lr=0x800A21D0u; f_800CED04(c); // 800A21CC
  c->r[0]=0u+0x00000010u; // 800A21D0
  c->r[5]=c->r[31]+0x00002368u; // 800A21D4
  c->r[4]=c->r[3]+0xFFFFFFFCu; // 800A21D8
  c->ctr=c->r[0]; // 800A21DC
L_800A21E0:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 800A21E0
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R32(ea); c->r[4]=ea;} // 800A21E4
  W32(c->r[5]+0x00000004u,c->r[3]); // 800A21E8
  {uint32_t ea=c->r[5]+0x00000008u; W32(ea,c->r[0]); c->r[5]=ea;} // 800A21EC
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800A21E0; } // 800A21F0
  c->r[3]=R32(c->r[13]+0xFFFFC218u); // 800A21F4
  c->lr=0x800A21FCu; f_800CED0C(c); // 800A21F8
  c->r[4]=R32(c->r[3]+0x00000000u); // 800A21FC
  c->r[0]=R32(c->r[3]+0x00000004u); // 800A2200
  W32(c->r[31]+0x000023F0u,c->r[0]); // 800A2204
  W32(c->r[31]+0x000023ECu,c->r[4]); // 800A2208
L_800A220C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800A220C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800A2210
  c->lr=c->r[0]; // 800A2214
  c->r[1]=c->r[1]+0x00000010u; // 800A2218
  return; // 800A221C
}

// fn_800A2220
void f_800A2220(Ctx* __restrict c) {
  trace_call(0x800A2220u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800A2220
  c->r[0]=c->lr; // 800A2224
  W32(c->r[1]+0x00000014u,c->r[0]); // 800A2228
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800A222C
  W32(c->r[1]+0x00000008u,c->r[30]); // 800A2230
  c->r[30]=c->r[3]|c->r[3]; // 800A2234
  c->r[0]=R8(c->r[13]+0xFFFFBB9Bu); // 800A2238
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800A223C
  if (!crb(c,2)) { goto L_800A227C; } // 800A2240
  c->r[31]=0u+0x80730000u; // 800A2244
  c->r[3]=c->r[31]+0x00006D10u; // 800A2248
  c->lr=0x800A2250u; f_802D8298(c); // 800A224C
  c->r[3]=0u+0x806D0000u; // 800A2250
  c->r[4]=0u+0x80050000u; // 800A2254
  c->r[3]=c->r[3]+0xFFFFC220u; // 800A2258
  c->r[5]=0u+0x80750000u; // 800A225C
  W32(c->r[31]+0x00006D10u,c->r[3]); // 800A2260
  c->r[3]=c->r[31]+0x00006D10u; // 800A2264
  c->r[4]=c->r[4]+0xFFFF9D40u; // 800A2268
  c->r[5]=c->r[5]+0xFFFFB630u; // 800A226C
  c->lr=0x800A2274u; f_803A92B8(c); // 800A2270
  c->r[0]=0u+0x00000001u; // 800A2274
  W8(c->r[13]+0xFFFFBB9Bu,c->r[0]); // 800A2278
L_800A227C:;
  c->r[3]=0u+0x80730000u; // 800A227C
  {uint32_t ea=c->r[2]+0xFFFF98E8u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A2280
  c->r[3]=c->r[3]+0x00006D10u; // 800A2284
  {uint32_t ea=c->r[3]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 800A2288
  fcmp(c,0,c->f[1],c->f[0]); // 800A228C
  if (!crb(c,1)) { goto L_800A229C; } // 800A2290
  c->r[3]=c->r[30]|c->r[30]; // 800A2294
  c->lr=0x800A229Cu; f_800A22B8(c); // 800A2298
L_800A229C:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800A229C
  c->r[3]=0u+0x00000001u; // 800A22A0
  c->r[30]=R32(c->r[1]+0x00000008u); // 800A22A4
  c->r[0]=R32(c->r[1]+0x00000014u); // 800A22A8
  c->lr=c->r[0]; // 800A22AC
  c->r[1]=c->r[1]+0x00000010u; // 800A22B0
  return; // 800A22B4
}

// fn_800A22B8
void f_800A22B8(Ctx* __restrict c) {
  trace_call(0x800A22B8u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800A22B8
  c->r[0]=c->lr; // 800A22BC
  W32(c->r[1]+0x00000034u,c->r[0]); // 800A22C0
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=25;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800A22C4
  c->r[31]=c->r[3]|c->r[3]; // 800A22C8
  c->r[0]=R8(c->r[13]+0xFFFFBB7Au); // 800A22CC
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800A22D0
  if (!crb(c,2)) { goto L_800A2304; } // 800A22D4
  c->r[29]=0u+0x80730000u; // 800A22D8
  c->r[3]=c->r[29]+0x00003B68u; // 800A22DC
  c->lr=0x800A22E4u; f_80045E54(c); // 800A22E0
  c->r[5]=0u+0x806D0000u; // 800A22E4
  c->r[0]=0u+0x00000001u; // 800A22E8
  c->r[5]=c->r[5]+0xFFFFC6A8u; // 800A22EC
  c->r[4]=c->r[29]+0x00003B68u; // 800A22F0
  c->r[3]=c->r[5]+0x0000003Cu; // 800A22F4
  W32(c->r[4]+0x000000A4u,c->r[5]); // 800A22F8
  W32(c->r[4]+0x000000B0u,c->r[3]); // 800A22FC
  W8(c->r[13]+0xFFFFBB7Au,c->r[0]); // 800A2300
L_800A2304:;
  c->r[3]=0u+0x80730000u; // 800A2304
  c->r[3]=c->r[3]+0x00003B68u; // 800A2308
  c->lr=0x800A2310u; f_8004767C(c); // 800A230C
  cmps(c,0,(int32_t)c->r[3],0); // 800A2310
  if (crb(c,2)) { goto L_800A23B0; } // 800A2314
  c->r[26]=0u+0x00000000u; // 800A2318
  c->r[30]=0u+0x00000000u; // 800A231C
  c->r[29]=c->r[26]|c->r[26]; // 800A2320
L_800A2324:;
  W8(c->r[1]+0x00000008u,c->r[29]); // 800A2324
  c->r[3]=c->r[1]+0x00000008u; // 800A2328
  c->r[27]=c->r[31]+c->r[30]; // 800A232C
  c->lr=0x800A2334u; f_8004DBC0(c); // 800A2330
  c->r[4]=R32(c->r[27]+0x00000958u); // 800A2334
  c->lr=0x800A233Cu; f_800993A0(c); // 800A2338
  cmps(c,0,(int32_t)c->r[3],0); // 800A233C
  if (crb(c,2)) { goto L_800A23A0; } // 800A2340
  c->r[0]=R32(c->r[27]+0x00000950u); // 800A2344
  cmps(c,0,(int32_t)c->r[0],0); // 800A2348
  if (!crb(c,1)) { goto L_800A2394; } // 800A234C
  c->r[3]=c->r[27]|c->r[27]; // 800A2350
  c->r[25]=0u+0xFFFFFFFFu; // 800A2354
  c->r[28]=c->r[3]+0x0000093Cu; // 800A2358
  c->r[3]=0u+0x00000000u; // 800A235C
  goto L_800A2374; // 800A2360
L_800A2364:;
  c->r[5]=R32(c->r[27]+0x00000958u); // 800A2364
  c->r[25]=c->r[4]|c->r[4]; // 800A2368
  c->r[3]=c->r[28]|c->r[28]; // 800A236C
  c->lr=0x800A2374u; f_800A0CAC(c); // 800A2370
L_800A2374:;
  c->r[4]=R32(c->r[27]+0x00000954u); // 800A2374
  cmps(c,0,(int32_t)c->r[25],(int32_t)c->r[4]); // 800A2378
  if (!crb(c,2)) { IRQCHK(c); goto L_800A2364; } // 800A237C
  cmps(c,0,(int32_t)c->r[3],0); // 800A2380
  if (crb(c,2)) { goto L_800A2394; } // 800A2384
  c->r[3]=R32(c->r[27]+0x00000950u); // 800A2388
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 800A238C
  W32(c->r[27]+0x00000950u,c->r[0]); // 800A2390
L_800A2394:;
  c->r[3]=c->r[31]|c->r[31]; // 800A2394
  c->r[4]=c->r[26]|c->r[26]; // 800A2398
  c->lr=0x800A23A0u; f_800A2868(c); // 800A239C
L_800A23A0:;
  c->r[26]=c->r[26]+0x00000001u; // 800A23A0
  c->r[30]=c->r[30]+0x000008B0u; // 800A23A4
  cmps(c,0,(int32_t)c->r[26],4); // 800A23A8
  if (crb(c,0)) { IRQCHK(c); goto L_800A2324; } // 800A23AC
L_800A23B0:;
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=25;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800A23B0
  c->r[0]=R32(c->r[1]+0x00000034u); // 800A23B4
  c->lr=c->r[0]; // 800A23B8
  c->r[1]=c->r[1]+0x00000030u; // 800A23BC
  return; // 800A23C0
}

// fn_800A23C4
void f_800A23C4(Ctx* __restrict c) {
  trace_call(0x800A23C4u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800A23C4
  c->r[0]=c->lr; // 800A23C8
  W32(c->r[1]+0x00000034u,c->r[0]); // 800A23CC
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=25;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800A23D0
  c->r[26]=c->r[4]|c->r[4]; // 800A23D4
  c->r[25]=c->r[3]|c->r[3]; // 800A23D8
  c->r[27]=c->r[5]|c->r[5]; // 800A23DC
  c->r[28]=c->r[6]|c->r[6]; // 800A23E0
  c->r[4]=0u+0xFFFFFFFFu; // 800A23E4
  c->lr=0x800A23ECu; f_80092B48(c); // 800A23E8
  cmps(c,0,(int32_t)c->r[3],0); // 800A23EC
  c->r[29]=c->r[3]|c->r[3]; // 800A23F0
  if (crb(c,0)) { goto L_800A2454; } // 800A23F4
  c->r[31]=(uint32_t)((int32_t)c->r[3]*(int32_t)2224); // 800A23F8
  c->r[3]=c->r[25]+c->r[31]; // 800A23FC
  c->r[30]=c->r[3]+0x000000ACu; // 800A2400
  c->r[3]=c->r[30]|c->r[30]; // 800A2404
  c->lr=0x800A240Cu; f_800A1FBC(c); // 800A2408
  c->r[6]=c->r[25]+c->r[31]; // 800A240C
  c->r[0]=0u+0x00000002u; // 800A2410
  W32(c->r[6]+0x00000950u,c->r[0]); // 800A2414
  c->r[0]=0u+0x00000000u; // 800A2418
  c->r[4]=c->r[30]|c->r[30]; // 800A241C
  c->r[5]=c->r[27]|c->r[27]; // 800A2420
  W32(c->r[6]+0x00000954u,c->r[0]); // 800A2424
  c->r[3]=c->r[6]+0x00000130u; // 800A2428
  W32(c->r[6]+0x00000958u,c->r[26]); // 800A242C
  c->lr=0x800A2434u; f_800A1174(c); // 800A2430
  c->r[3]=c->r[25]+c->r[31]; // 800A2434
  c->r[4]=c->r[30]|c->r[30]; // 800A2438
  c->r[5]=c->r[28]|c->r[28]; // 800A243C
  c->r[3]=c->r[3]+0x0000093Cu; // 800A2440
  c->lr=0x800A2448u; f_800A0C50(c); // 800A2444
  c->r[3]=c->r[25]|c->r[25]; // 800A2448
  c->r[4]=c->r[29]|c->r[29]; // 800A244C
  c->lr=0x800A2454u; f_800A2868(c); // 800A2450
L_800A2454:;
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=25;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800A2454
  c->r[0]=R32(c->r[1]+0x00000034u); // 800A2458
  c->lr=c->r[0]; // 800A245C
  c->r[1]=c->r[1]+0x00000030u; // 800A2460
  return; // 800A2464
}

// fn_800A2468
void f_800A2468(Ctx* __restrict c) {
  trace_call(0x800A2468u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800A2468
  c->r[0]=c->lr; // 800A246C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800A2470
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800A2474
  c->r[31]=c->r[3]|c->r[3]; // 800A2478
  c->lr=0x800A2480u; f_80092B48(c); // 800A247C
  cmps(c,0,(int32_t)c->r[3],0); // 800A2480
  c->r[4]=c->r[3]|c->r[3]; // 800A2484
  if (crb(c,0)) { goto L_800A2494; } // 800A2488
  c->r[3]=c->r[31]|c->r[31]; // 800A248C
  c->lr=0x800A2494u; f_800A2790(c); // 800A2490
L_800A2494:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800A2494
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800A2498
  c->lr=c->r[0]; // 800A249C
  c->r[1]=c->r[1]+0x00000010u; // 800A24A0
  return; // 800A24A4
}

// fn_800A24A8
void f_800A24A8(Ctx* __restrict c) {
  trace_call(0x800A24A8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800A24A8
  c->r[0]=c->lr; // 800A24AC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800A24B0
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800A24B4
  c->r[30]=c->r[3]|c->r[3]; // 800A24B8
  c->r[31]=c->r[5]|c->r[5]; // 800A24BC
  c->lr=0x800A24C4u; f_80092B48(c); // 800A24C0
  cmps(c,0,(int32_t)c->r[3],0); // 800A24C4
  if (crb(c,0)) { goto L_800A24E0; } // 800A24C8
  c->r[3]=(uint32_t)((int32_t)c->r[3]*(int32_t)2224); // 800A24CC
  c->r[0]=0u+0x00000002u; // 800A24D0
  c->r[3]=c->r[30]+c->r[3]; // 800A24D4
  W32(c->r[3]+0x00000950u,c->r[0]); // 800A24D8
  W32(c->r[3]+0x00000954u,c->r[31]); // 800A24DC
L_800A24E0:;
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800A24E0
  c->r[0]=R32(c->r[1]+0x00000014u); // 800A24E4
  c->lr=c->r[0]; // 800A24E8
  c->r[1]=c->r[1]+0x00000010u; // 800A24EC
  return; // 800A24F0
}

// fn_800A24F4
void f_800A24F4(Ctx* __restrict c) {
  trace_call(0x800A24F4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800A24F4
  c->r[0]=c->lr; // 800A24F8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800A24FC
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800A2500
  c->r[30]=c->r[3]|c->r[3]; // 800A2504
  c->r[31]=c->r[5]|c->r[5]; // 800A2508
  c->lr=0x800A2510u; f_80092B48(c); // 800A250C
  cmps(c,0,(int32_t)c->r[3],0); // 800A2510
  if (!crb(c,0)) { goto L_800A251C; } // 800A2514
  c->r[3]=0u+0x00000000u; // 800A2518
L_800A251C:;
  c->r[0]=(uint32_t)((int32_t)c->r[3]*(int32_t)2224); // 800A251C
  c->r[4]=c->r[31]|c->r[31]; // 800A2520
  c->r[3]=c->r[30]+c->r[0]; // 800A2524
  c->r[3]=c->r[3]+0x00000130u; // 800A2528
  c->lr=0x800A2530u; f_800A1D5C(c); // 800A252C
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800A2530
  c->r[0]=R32(c->r[1]+0x00000014u); // 800A2534
  c->lr=c->r[0]; // 800A2538
  c->r[1]=c->r[1]+0x00000010u; // 800A253C
  return; // 800A2540
}

// fn_800A2544
void f_800A2544(Ctx* __restrict c) {
  trace_call(0x800A2544u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800A2544
  c->r[0]=c->lr; // 800A2548
  cmpu(c,0,c->r[4],0x00000041u); // 800A254C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800A2550
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800A2554
  c->r[30]=c->r[4]|c->r[4]; // 800A2558
  c->r[31]=c->r[5]|c->r[5]; // 800A255C
  if (crb(c,1)) { goto L_800A2578; } // 800A2560
  c->lr=0x800A2568u; f_800A282C(c); // 800A2564
  c->r[3]=0u+0x80750000u; // 800A2568
  c->r[0]=rotl(c->r[30],2)&0xFFFFFFFCu; // 800A256C
  c->r[3]=c->r[3]+0xFFFFB528u; // 800A2570
  W32(c->r[3]+c->r[0],c->r[31]); // 800A2574
L_800A2578:;
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800A2578
  c->r[0]=R32(c->r[1]+0x00000014u); // 800A257C
  c->lr=c->r[0]; // 800A2580
  c->r[1]=c->r[1]+0x00000010u; // 800A2584
  return; // 800A2588
}

// fn_800A258C
void f_800A258C(Ctx* __restrict c) {
  trace_call(0x800A258Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800A258C
  c->r[0]=c->lr; // 800A2590
  cmps(c,0,(int32_t)c->r[4],0); // 800A2594
  W32(c->r[1]+0x00000054u,c->r[0]); // 800A2598
  {uint32_t ea=c->r[1]+0x00000038u; for(int i=26;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800A259C
  c->r[26]=c->r[4]|c->r[4]; // 800A25A0
  c->r[28]=c->r[5]|c->r[5]; // 800A25A4
  c->r[27]=c->r[6]|c->r[6]; // 800A25A8
  if (!crb(c,0)) { goto L_800A25B8; } // 800A25AC
  c->r[3]=0u+0x00000000u; // 800A25B0
  goto L_800A277C; // 800A25B4
L_800A25B8:;
  cmpu(c,0,c->r[5],0x00000041u); // 800A25B8
  if (!crb(c,1)) { goto L_800A25C8; } // 800A25BC
  c->r[3]=0u+0x00000000u; // 800A25C0
  goto L_800A277C; // 800A25C4
L_800A25C8:;
  c->r[30]=0u+0x80750000u; // 800A25C8
  c->r[29]=rotl(c->r[5],2)&0xFFFFFFFCu; // 800A25CC
  c->r[30]=c->r[30]+0xFFFFB528u; // 800A25D0
  c->r[0]=R32(c->r[30]+c->r[29]); // 800A25D4
  cmps(c,0,(int32_t)c->r[0],0); // 800A25D8
  if (!crb(c,2)) { goto L_800A25E8; } // 800A25DC
  c->r[3]=0u+0x00000000u; // 800A25E0
  goto L_800A277C; // 800A25E4
L_800A25E8:;
  c->r[31]=0u+0x00000000u; // 800A25E8
  W8(c->r[1]+0x0000002Cu,c->r[31]); // 800A25EC
  c->r[3]=c->r[1]+0x0000002Cu; // 800A25F0
  c->lr=0x800A25F8u; f_8004F3D4(c); // 800A25F4
  c->r[4]=c->r[28]|c->r[28]; // 800A25F8
  c->r[5]=0u+0x00000001u; // 800A25FC
  c->lr=0x800A2604u; f_800AA074(c); // 800A2600
  cmps(c,0,(int32_t)c->r[3],0); // 800A2604
  if (crb(c,2)) { goto L_800A262C; } // 800A2608
  W8(c->r[1]+0x00000028u,c->r[31]); // 800A260C
  c->r[3]=c->r[1]+0x00000028u; // 800A2610
  c->lr=0x800A2618u; f_8004DBC0(c); // 800A2614
  c->lr=0x800A261Cu; f_80099108(c); // 800A2618
  cmps(c,0,(int32_t)c->r[26],(int32_t)c->r[3]); // 800A261C
  if (crb(c,2)) { goto L_800A262C; } // 800A2620
  c->r[3]=0u+0x00000000u; // 800A2624
  goto L_800A277C; // 800A2628
L_800A262C:;
  c->r[31]=0u+0x00000000u; // 800A262C
  W8(c->r[1]+0x00000024u,c->r[31]); // 800A2630
  c->r[3]=c->r[1]+0x00000024u; // 800A2634
  c->lr=0x800A263Cu; f_8004F3D4(c); // 800A2638
  c->r[4]=c->r[28]|c->r[28]; // 800A263C
  c->r[5]=0u+0x00000002u; // 800A2640
  c->lr=0x800A2648u; f_800AA074(c); // 800A2644
  cmps(c,0,(int32_t)c->r[3],0); // 800A2648
  if (crb(c,2)) { goto L_800A2674; } // 800A264C
  W8(c->r[1]+0x00000020u,c->r[31]); // 800A2650
  c->r[3]=c->r[1]+0x00000020u; // 800A2654
  c->lr=0x800A265Cu; f_8004DBC0(c); // 800A2658
  c->r[4]=c->r[26]|c->r[26]; // 800A265C
  c->lr=0x800A2664u; f_8009930C(c); // 800A2660
  cmps(c,0,(int32_t)c->r[3],3); // 800A2664
  if (crb(c,2)) { goto L_800A2674; } // 800A2668
  c->r[3]=0u+0x00000000u; // 800A266C
  goto L_800A277C; // 800A2670
L_800A2674:;
  c->r[31]=0u+0x00000000u; // 800A2674
  W8(c->r[1]+0x0000001Cu,c->r[31]); // 800A2678
  c->r[3]=c->r[1]+0x0000001Cu; // 800A267C
  c->lr=0x800A2684u; f_8004F3D4(c); // 800A2680
  c->r[4]=c->r[28]|c->r[28]; // 800A2684
  c->r[5]=0u+0x00000004u; // 800A2688
  c->lr=0x800A2690u; f_800AA074(c); // 800A268C
  cmps(c,0,(int32_t)c->r[3],0); // 800A2690
  if (crb(c,2)) { goto L_800A26BC; } // 800A2694
  W8(c->r[1]+0x00000018u,c->r[31]); // 800A2698
  c->r[3]=c->r[1]+0x00000018u; // 800A269C
  c->lr=0x800A26A4u; f_8004DBC0(c); // 800A26A0
  c->r[4]=c->r[26]|c->r[26]; // 800A26A4
  c->lr=0x800A26ACu; f_80099400(c); // 800A26A8
  cmps(c,0,(int32_t)c->r[3],0); // 800A26AC
  if (!crb(c,2)) { goto L_800A26BC; } // 800A26B0
  c->r[3]=0u+0x00000000u; // 800A26B4
  goto L_800A277C; // 800A26B8
L_800A26BC:;
  cmps(c,0,(int32_t)c->r[27],0); // 800A26BC
  if (crb(c,2)) { goto L_800A2750; } // 800A26C0
  c->r[0]=R8(c->r[27]+0x00000000u); // 800A26C4
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800A26C8
  if (crb(c,2)) { goto L_800A2720; } // 800A26CC
  c->r[0]=0u+0x00000000u; // 800A26D0
  W8(c->r[1]+0x00000010u,c->r[0]); // 800A26D4
  c->r[3]=c->r[1]+0x00000010u; // 800A26D8
  c->r[28]=c->r[1]+0x00000014u; // 800A26DC
  W8(c->r[1]+0x00000014u,c->r[0]); // 800A26E0
  c->lr=0x800A26E8u; f_8004DBC0(c); // 800A26E4
  c->r[4]=c->r[27]|c->r[27]; // 800A26E8
  c->r[5]=c->r[26]|c->r[26]; // 800A26EC
  c->lr=0x800A26F4u; f_80099254(c); // 800A26F0
  c->r[31]=c->r[3]|c->r[3]; // 800A26F4
  c->r[3]=c->r[28]|c->r[28]; // 800A26F8
  c->lr=0x800A2700u; f_8004DBC0(c); // 800A26FC
  c->r[4]=c->r[26]|c->r[26]; // 800A2700
  c->lr=0x800A2708u; f_800992D4(c); // 800A2704
  c->r[12]=R32(c->r[30]+c->r[29]); // 800A2708
  c->r[4]=c->r[31]|c->r[31]; // 800A270C
  c->r[5]=c->r[26]|c->r[26]; // 800A2710
  c->ctr=c->r[12]; // 800A2714
  if (true) { c->lr=0x800A271Cu; dispatch(c,c->ctr); } // 800A2718
  goto L_800A277C; // 800A271C
L_800A2720:;
  c->r[0]=0u+0x00000000u; // 800A2720
  W8(c->r[1]+0x0000000Cu,c->r[0]); // 800A2724
  c->r[3]=c->r[1]+0x0000000Cu; // 800A2728
  c->lr=0x800A2730u; f_8004DBC0(c); // 800A272C
  c->r[4]=c->r[26]|c->r[26]; // 800A2730
  c->lr=0x800A2738u; f_800992D4(c); // 800A2734
  c->r[12]=R32(c->r[30]+c->r[29]); // 800A2738
  c->r[5]=c->r[26]|c->r[26]; // 800A273C
  c->r[4]=0u+0x00000000u; // 800A2740
  c->ctr=c->r[12]; // 800A2744
  if (true) { c->lr=0x800A274Cu; dispatch(c,c->ctr); } // 800A2748
  goto L_800A277C; // 800A274C
L_800A2750:;
  c->r[0]=0u+0x00000000u; // 800A2750
  W8(c->r[1]+0x00000008u,c->r[0]); // 800A2754
  c->r[3]=c->r[1]+0x00000008u; // 800A2758
  c->lr=0x800A2760u; f_8004DBC0(c); // 800A275C
  c->r[4]=c->r[26]|c->r[26]; // 800A2760
  c->lr=0x800A2768u; f_800992D4(c); // 800A2764
  c->r[12]=R32(c->r[30]+c->r[29]); // 800A2768
  c->r[5]=c->r[26]|c->r[26]; // 800A276C
  c->r[4]=0u+0x00000000u; // 800A2770
  c->ctr=c->r[12]; // 800A2774
  if (true) { c->lr=0x800A277Cu; dispatch(c,c->ctr); } // 800A2778
L_800A277C:;
  {uint32_t ea=c->r[1]+0x00000038u; for(int i=26;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800A277C
  c->r[0]=R32(c->r[1]+0x00000054u); // 800A2780
  c->lr=c->r[0]; // 800A2784
  c->r[1]=c->r[1]+0x00000050u; // 800A2788
  return; // 800A278C
}

// fn_800A2790
void f_800A2790(Ctx* __restrict c) {
  trace_call(0x800A2790u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800A2790
  c->r[0]=c->lr; // 800A2794
  cmps(c,0,(int32_t)c->r[4],0); // 800A2798
  W32(c->r[1]+0x00000014u,c->r[0]); // 800A279C
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800A27A0
  c->r[30]=c->r[3]|c->r[3]; // 800A27A4
  if (!crb(c,0)) { goto L_800A27CC; } // 800A27A8
  c->r[31]=0u+0x00000000u; // 800A27AC
L_800A27B0:;
  c->r[3]=c->r[30]|c->r[30]; // 800A27B0
  c->r[4]=c->r[31]|c->r[31]; // 800A27B4
  c->lr=0x800A27BCu; f_800A2790(c); // 800A27B8
  c->r[31]=c->r[31]+0x00000001u; // 800A27BC
  cmps(c,0,(int32_t)c->r[31],4); // 800A27C0
  if (crb(c,0)) { IRQCHK(c); goto L_800A27B0; } // 800A27C4
  goto L_800A2818; // 800A27C8
L_800A27CC:;
  cmps(c,0,(int32_t)c->r[4],4); // 800A27CC
  if (crb(c,0)) { goto L_800A27D8; } // 800A27D0
  c->r[4]=0u+0x00000000u; // 800A27D4
L_800A27D8:;
  c->r[31]=(uint32_t)((int32_t)c->r[4]*(int32_t)2224); // 800A27D8
  c->r[3]=c->r[3]+c->r[31]; // 800A27DC
  c->r[3]=c->r[3]+0x000000ACu; // 800A27E0
  c->lr=0x800A27E8u; f_800A1FBC(c); // 800A27E4
  c->r[3]=c->r[30]+c->r[31]; // 800A27E8
  c->r[3]=c->r[3]+0x00000130u; // 800A27EC
  c->lr=0x800A27F4u; f_800A1E80(c); // 800A27F0
  c->r[3]=c->r[30]+c->r[31]; // 800A27F4
  c->r[3]=c->r[3]+0x0000093Cu; // 800A27F8
  c->lr=0x800A2800u; f_800A0DFC(c); // 800A27FC
  c->r[3]=c->r[30]+c->r[31]; // 800A2800
  c->r[4]=0u+0x00000000u; // 800A2804
  W32(c->r[3]+0x00000950u,c->r[4]); // 800A2808
  c->r[0]=0u+0xFFFFFFFFu; // 800A280C
  W32(c->r[3]+0x00000954u,c->r[4]); // 800A2810
  W32(c->r[3]+0x00000958u,c->r[0]); // 800A2814
L_800A2818:;
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800A2818
  c->r[0]=R32(c->r[1]+0x00000014u); // 800A281C
  c->lr=c->r[0]; // 800A2820
  c->r[1]=c->r[1]+0x00000010u; // 800A2824
  return; // 800A2828
}

// fn_800A282C
void f_800A282C(Ctx* __restrict c) {
  trace_call(0x800A282Cu);
  c->r[0]=R8(c->r[13]+0xFFFFC070u); // 800A282C
  cmps(c,0,(int32_t)c->r[0],0); // 800A2830
  if (!crb(c,2)) return; // 800A2834
  c->r[4]=0u+0x80750000u; // 800A2838
  c->r[0]=0u+0x00000042u; // 800A283C
  c->r[4]=c->r[4]+0xFFFFB528u; // 800A2840
  c->r[5]=0u+0x00000000u; // 800A2844
  c->r[3]=0u+0x00000000u; // 800A2848
  c->ctr=c->r[0]; // 800A284C
L_800A2850:;
  W32(c->r[4]+c->r[3],c->r[5]); // 800A2850
  c->r[3]=c->r[3]+0x00000004u; // 800A2854
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800A2850; } // 800A2858
  c->r[0]=0u+0x00000001u; // 800A285C
  W8(c->r[13]+0xFFFFC070u,c->r[0]); // 800A2860
  return; // 800A2864
}

// fn_800A2868
void f_800A2868(Ctx* __restrict c) {
  trace_call(0x800A2868u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800A2868
  c->r[0]=c->lr; // 800A286C
  W32(c->r[1]+0x00000034u,c->r[0]); // 800A2870
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=25;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800A2874
  c->r[26]=(uint32_t)((int32_t)c->r[4]*(int32_t)2224); // 800A2878
  c->r[25]=c->r[3]|c->r[3]; // 800A287C
  c->r[3]=c->r[3]+c->r[26]; // 800A2880
  c->r[27]=c->r[3]+0x00000130u; // 800A2884
  c->r[3]=c->r[27]|c->r[27]; // 800A2888
  c->lr=0x800A2890u; f_800A1D34(c); // 800A288C
  c->r[28]=c->r[25]+c->r[26]; // 800A2890
  c->r[29]=c->r[3]|c->r[3]; // 800A2894
  c->r[26]=0u+0x00000000u; // 800A2898
  c->r[31]=0u+0x00000001u; // 800A289C
  goto L_800A29E4; // 800A28A0
L_800A28A4:;
  c->r[4]=R32(c->r[28]+0x00000958u); // 800A28A4
  c->r[3]=c->r[25]|c->r[25]; // 800A28A8
  c->lr=0x800A28B0u; f_80092B48(c); // 800A28AC
  cmps(c,0,(int32_t)c->r[3],0); // 800A28B0
  if (!crb(c,0)) { goto L_800A28C0; } // 800A28B4
  c->r[30]=0u+0x00000000u; // 800A28B8
  goto L_800A28D8; // 800A28BC
L_800A28C0:;
  c->r[0]=(uint32_t)((int32_t)c->r[3]*(int32_t)2224); // 800A28C0
  c->r[4]=c->r[26]|c->r[26]; // 800A28C4
  c->r[3]=c->r[25]+c->r[0]; // 800A28C8
  c->r[3]=c->r[3]+0x000000ACu; // 800A28CC
  c->lr=0x800A28D4u; f_80092B8C(c); // 800A28D0
  c->r[30]=c->r[3]|c->r[3]; // 800A28D4
L_800A28D8:;
  c->r[3]=c->r[27]|c->r[27]; // 800A28D8
  c->r[4]=c->r[26]|c->r[26]; // 800A28DC
  c->lr=0x800A28E4u; f_800A1D5C(c); // 800A28E0
  c->r[4]=c->r[3]|c->r[3]; // 800A28E4
  c->r[3]=c->r[25]+0x0000236Cu; // 800A28E8
  c->lr=0x800A28F0u; f_80092C14(c); // 800A28EC
  cmps(c,0,(int32_t)c->r[3],0); // 800A28F0
  if (crb(c,0)) { goto L_800A295C; } // 800A28F4
  cmpu(c,0,c->r[3],0x000003FFu); // 800A28F8
  if (crb(c,1)) { goto L_800A2924; } // 800A28FC
  c->r[0]=sraw(c,c->r[3],3); // 800A2900
  c->r[4]=rotl(c->r[3],0)&0x00000007u; // 800A2904
  c->r[3]=c->r[25]+c->r[0]; // 800A2908
  c->r[0]=R8(c->r[3]+0x0000236Cu); // 800A290C
  c->r[3]=((c->r[4])&0x20)?0u:(c->r[31]<<((c->r[4])&31)); // 800A2910
  c->r[3]=c->r[3]&c->r[0]; // 800A2914
  c->r[0]=addc(c,c->r[3],0xFFFFFFFFu,0); // 800A2918
  c->r[0]=addc(c,~c->r[0],c->r[3],c->xer_ca); // 800A291C
  goto L_800A2928; // 800A2920
L_800A2924:;
  c->r[0]=0u+0x00000000u; // 800A2924
L_800A2928:;
  cmpu(c,0,c->r[30],c->r[0]); // 800A2928
  if (crb(c,2)) { goto L_800A295C; } // 800A292C
  cmps(c,0,(int32_t)c->r[30],0); // 800A2930
  if (!crb(c,2)) { goto L_800A294C; } // 800A2934
  c->r[4]=R32(c->r[28]+0x00000958u); // 800A2938
  c->r[3]=c->r[25]|c->r[25]; // 800A293C
  c->r[5]=c->r[26]|c->r[26]; // 800A2940
  c->lr=0x800A2948u; f_8009E56C(c); // 800A2944
  goto L_800A295C; // 800A2948
L_800A294C:;
  c->r[4]=R32(c->r[28]+0x00000958u); // 800A294C
  c->r[3]=c->r[25]|c->r[25]; // 800A2950
  c->r[5]=c->r[26]|c->r[26]; // 800A2954
  c->lr=0x800A295Cu; f_800A2A00(c); // 800A2958
L_800A295C:;
  c->r[3]=c->r[27]|c->r[27]; // 800A295C
  c->r[4]=c->r[26]|c->r[26]; // 800A2960
  c->lr=0x800A2968u; f_800A1D5C(c); // 800A2964
  c->r[4]=c->r[3]|c->r[3]; // 800A2968
  c->r[3]=c->r[25]+0x000023ECu; // 800A296C
  c->lr=0x800A2974u; f_80092CB8(c); // 800A2970
  cmps(c,0,(int32_t)c->r[3],0); // 800A2974
  if (crb(c,0)) { goto L_800A29E0; } // 800A2978
  cmpu(c,0,c->r[3],0x0000003Fu); // 800A297C
  if (crb(c,1)) { goto L_800A29A8; } // 800A2980
  c->r[0]=sraw(c,c->r[3],3); // 800A2984
  c->r[4]=rotl(c->r[3],0)&0x00000007u; // 800A2988
  c->r[3]=c->r[25]+c->r[0]; // 800A298C
  c->r[0]=R8(c->r[3]+0x000023ECu); // 800A2990
  c->r[3]=((c->r[4])&0x20)?0u:(c->r[31]<<((c->r[4])&31)); // 800A2994
  c->r[3]=c->r[3]&c->r[0]; // 800A2998
  c->r[0]=addc(c,c->r[3],0xFFFFFFFFu,0); // 800A299C
  c->r[0]=addc(c,~c->r[0],c->r[3],c->xer_ca); // 800A29A0
  goto L_800A29AC; // 800A29A4
L_800A29A8:;
  c->r[0]=0u+0x00000000u; // 800A29A8
L_800A29AC:;
  cmpu(c,0,c->r[30],c->r[0]); // 800A29AC
  if (crb(c,2)) { goto L_800A29E0; } // 800A29B0
  cmps(c,0,(int32_t)c->r[30],0); // 800A29B4
  if (!crb(c,2)) { goto L_800A29D0; } // 800A29B8
  c->r[4]=R32(c->r[28]+0x00000958u); // 800A29BC
  c->r[3]=c->r[25]|c->r[25]; // 800A29C0
  c->r[5]=c->r[26]|c->r[26]; // 800A29C4
  c->lr=0x800A29CCu; f_8009E56C(c); // 800A29C8
  goto L_800A29E0; // 800A29CC
L_800A29D0:;
  c->r[4]=R32(c->r[28]+0x00000958u); // 800A29D0
  c->r[3]=c->r[25]|c->r[25]; // 800A29D4
  c->r[5]=c->r[26]|c->r[26]; // 800A29D8
  c->lr=0x800A29E0u; f_800A2A00(c); // 800A29DC
L_800A29E0:;
  c->r[26]=c->r[26]+0x00000001u; // 800A29E0
L_800A29E4:;
  cmps(c,0,(int32_t)c->r[26],(int32_t)c->r[29]); // 800A29E4
  if (crb(c,0)) { IRQCHK(c); goto L_800A28A4; } // 800A29E8
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=25;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800A29EC
  c->r[0]=R32(c->r[1]+0x00000034u); // 800A29F0
  c->lr=c->r[0]; // 800A29F4
  c->r[1]=c->r[1]+0x00000030u; // 800A29F8
  return; // 800A29FC
}

// fn_800A2A00
void f_800A2A00(Ctx* __restrict c) {
  trace_call(0x800A2A00u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800A2A00
  c->r[0]=c->lr; // 800A2A04
  W32(c->r[1]+0x00000024u,c->r[0]); // 800A2A08
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800A2A0C
  c->r[31]=c->r[3]|c->r[3]; // 800A2A10
  c->r[29]=c->r[5]|c->r[5]; // 800A2A14
  c->lr=0x800A2A1Cu; f_80092B48(c); // 800A2A18
  cmps(c,0,(int32_t)c->r[3],0); // 800A2A1C
  if (crb(c,0)) { goto L_800A2B14; } // 800A2A20
  c->r[30]=(uint32_t)((int32_t)c->r[3]*(int32_t)2224); // 800A2A24
  c->r[4]=c->r[29]|c->r[29]; // 800A2A28
  c->r[3]=c->r[31]+c->r[30]; // 800A2A2C
  c->r[3]=c->r[3]+0x000000ACu; // 800A2A30
  c->lr=0x800A2A38u; f_80092B8C(c); // 800A2A34
  cmps(c,0,(int32_t)c->r[3],0); // 800A2A38
  if (crb(c,2)) { goto L_800A2A4C; } // 800A2A3C
  c->r[3]=c->r[31]+c->r[30]; // 800A2A40
  c->r[0]=0u+0x00000002u; // 800A2A44
  W32(c->r[3]+0x00000950u,c->r[0]); // 800A2A48
L_800A2A4C:;
  cmpu(c,0,c->r[29],0x000003FFu); // 800A2A4C
  c->r[4]=c->r[29]|c->r[29]; // 800A2A50
  if (!crb(c,1)) { goto L_800A2A5C; } // 800A2A54
  c->r[4]=0u+0x00000000u; // 800A2A58
L_800A2A5C:;
  c->r[3]=c->r[31]+c->r[30]; // 800A2A5C
  c->r[0]=sraw(c,c->r[4],3); // 800A2A60
  c->r[6]=c->r[3]+c->r[0]; // 800A2A64
  c->r[30]=0u+0x00000001u; // 800A2A68
  c->r[0]=rotl(c->r[4],0)&0x00000007u; // 800A2A6C
  c->r[5]=R8(c->r[6]+0x000000B0u); // 800A2A70
  c->r[0]=((c->r[0])&0x20)?0u:(c->r[30]<<((c->r[0])&31)); // 800A2A74
  c->r[4]=c->r[29]|c->r[29]; // 800A2A78
  c->r[0]=~(c->r[0]|c->r[0]); // 800A2A7C
  c->r[3]=c->r[3]+0x00000130u; // 800A2A80
  c->r[0]=rotl(c->r[0],0)&0x000000FFu; // 800A2A84
  c->r[0]=c->r[5]&c->r[0]; // 800A2A88
  W8(c->r[6]+0x000000B0u,c->r[0]); // 800A2A8C
  c->lr=0x800A2A94u; f_800A1D5C(c); // 800A2A90
  cmps(c,0,(int32_t)c->r[3],0); // 800A2A94
  c->r[29]=c->r[3]|c->r[3]; // 800A2A98
  if (crb(c,2)) { goto L_800A2B14; } // 800A2A9C
  c->r[4]=c->r[29]|c->r[29]; // 800A2AA0
  c->r[3]=c->r[31]+0x0000236Cu; // 800A2AA4
  c->lr=0x800A2AACu; f_80092C14(c); // 800A2AA8
  cmpu(c,0,c->r[3],0x000003FFu); // 800A2AAC
  if (crb(c,1)) { goto L_800A2AD8; } // 800A2AB0
  c->r[4]=sraw(c,c->r[3],3); // 800A2AB4
  c->r[0]=rotl(c->r[3],0)&0x00000007u; // 800A2AB8
  c->r[4]=c->r[31]+c->r[4]; // 800A2ABC
  c->r[0]=((c->r[0])&0x20)?0u:(c->r[30]<<((c->r[0])&31)); // 800A2AC0
  c->r[3]=R8(c->r[4]+0x0000236Cu); // 800A2AC4
  c->r[0]=~(c->r[0]|c->r[0]); // 800A2AC8
  c->r[0]=rotl(c->r[0],0)&0x000000FFu; // 800A2ACC
  c->r[0]=c->r[3]&c->r[0]; // 800A2AD0
  W8(c->r[4]+0x0000236Cu,c->r[0]); // 800A2AD4
L_800A2AD8:;
  c->r[4]=c->r[29]|c->r[29]; // 800A2AD8
  c->r[3]=c->r[31]+0x000023ECu; // 800A2ADC
  c->lr=0x800A2AE4u; f_80092CB8(c); // 800A2AE0
  cmpu(c,0,c->r[3],0x0000003Fu); // 800A2AE4
  if (crb(c,1)) { goto L_800A2B14; } // 800A2AE8
  c->r[4]=sraw(c,c->r[3],3); // 800A2AEC
  c->r[0]=rotl(c->r[3],0)&0x00000007u; // 800A2AF0
  c->r[3]=0u+0x00000001u; // 800A2AF4
  c->r[0]=((c->r[0])&0x20)?0u:(c->r[3]<<((c->r[0])&31)); // 800A2AF8
  c->r[4]=c->r[31]+c->r[4]; // 800A2AFC
  c->r[0]=~(c->r[0]|c->r[0]); // 800A2B00
  c->r[3]=R8(c->r[4]+0x000023ECu); // 800A2B04
  c->r[0]=rotl(c->r[0],0)&0x000000FFu; // 800A2B08
  c->r[0]=c->r[3]&c->r[0]; // 800A2B0C
  W8(c->r[4]+0x000023ECu,c->r[0]); // 800A2B10
L_800A2B14:;
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800A2B14
  c->r[0]=R32(c->r[1]+0x00000024u); // 800A2B18
  c->lr=c->r[0]; // 800A2B1C
  c->r[1]=c->r[1]+0x00000020u; // 800A2B20
  return; // 800A2B24
}

// fn_800A2B28
void f_800A2B28(Ctx* __restrict c) {
  trace_call(0x800A2B28u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800A2B28
  c->r[0]=c->lr; // 800A2B2C
  c->r[6]=0u+0x806D0000u; // 800A2B30
  c->r[8]=0u+0x00000000u; // 800A2B34
  W32(c->r[1]+0x00000024u,c->r[0]); // 800A2B38
  c->r[6]=c->r[6]+0x00005C28u; // 800A2B3C
  c->r[7]=0u+0x00000002u; // 800A2B40
  c->r[0]=0u+0xFFFFFFFFu; // 800A2B44
  {uint32_t ea=c->r[1]+0x00000010u; for(int i=28;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800A2B48
  c->r[28]=c->r[3]|c->r[3]; // 800A2B4C
  c->r[29]=c->r[4]|c->r[4]; // 800A2B50
  c->r[30]=c->r[5]|c->r[5]; // 800A2B54
  W32(c->r[3]+0x00000000u,c->r[8]); // 800A2B58
  W32(c->r[3]+0x00000004u,c->r[7]); // 800A2B5C
  W32(c->r[3]+0x00000010u,c->r[0]); // 800A2B60
  W32(c->r[3]+0x00000014u,c->r[8]); // 800A2B64
  W32(c->r[3]+0x00000018u,c->r[8]); // 800A2B68
  W32(c->r[3]+0x0000001Cu,c->r[8]); // 800A2B6C
  W32(c->r[3]+0x0000000Cu,c->r[8]); // 800A2B70
  W32(c->r[3]+0x00000020u,c->r[8]); // 800A2B74
  W32(c->r[3]+0x00000008u,c->r[8]); // 800A2B78
  W32(c->r[3]+0x000000A4u,c->r[6]); // 800A2B7C
  c->r[0]=R8(c->r[13]+0xFFFFBB98u); // 800A2B80
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800A2B84
  if (!crb(c,2)) { goto L_800A2BAC; } // 800A2B88
  c->r[31]=0u+0x80730000u; // 800A2B8C
  c->r[3]=c->r[31]+0x000067B8u; // 800A2B90
  c->lr=0x800A2B98u; f_8029EF58(c); // 800A2B94
  c->r[3]=0u+0x806D0000u; // 800A2B98
  c->r[0]=0u+0x00000001u; // 800A2B9C
  c->r[3]=c->r[3]+0xFFFFC25Cu; // 800A2BA0
  W32(c->r[31]+0x000067B8u,c->r[3]); // 800A2BA4
  W8(c->r[13]+0xFFFFBB98u,c->r[0]); // 800A2BA8
L_800A2BAC:;
  c->r[3]=0u+0x80730000u; // 800A2BAC
  c->r[4]=c->r[28]|c->r[28]; // 800A2BB0
  c->r[7]=c->r[29]|c->r[29]; // 800A2BB4
  c->r[8]=c->r[30]|c->r[30]; // 800A2BB8
  c->r[3]=c->r[3]+0x000067B8u; // 800A2BBC
  c->r[5]=0u+0x00000000u; // 800A2BC0
  c->r[6]=0u+0x0000003Fu; // 800A2BC4
  c->lr=0x800A2BCCu; f_8029F4EC(c); // 800A2BC8
  c->r[0]=0u+0x00000000u; // 800A2BCC
  W8(c->r[28]+0x000000A8u,c->r[0]); // 800A2BD0
  c->r[3]=c->r[28]|c->r[28]; // 800A2BD4
  W8(c->r[28]+0x000000A9u,c->r[0]); // 800A2BD8
  {uint32_t ea=c->r[1]+0x00000010u; for(int i=28;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800A2BDC
  c->r[0]=R32(c->r[1]+0x00000024u); // 800A2BE0
  c->lr=c->r[0]; // 800A2BE4
  c->r[1]=c->r[1]+0x00000020u; // 800A2BE8
  return; // 800A2BEC
}

// fn_800A2BF0
void f_800A2BF0(Ctx* __restrict c) {
  trace_call(0x800A2BF0u);
  {uint32_t ea=c->r[1]+0xFFFFFF90u; W32(ea,c->r[1]); c->r[1]=ea;} // 800A2BF0
  c->r[0]=c->lr; // 800A2BF4
  W32(c->r[1]+0x00000074u,c->r[0]); // 800A2BF8
  {uint32_t ea=c->r[1]+0x00000064u; for(int i=29;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800A2BFC
  c->r[29]=0u+0x00000000u; // 800A2C00
  c->r[31]=c->r[3]|c->r[3]; // 800A2C04
  W8(c->r[3]+0x000000A8u,c->r[29]); // 800A2C08
  W8(c->r[3]+0x000000A9u,c->r[29]); // 800A2C0C
  c->r[3]=c->r[1]+0x00000050u; // 800A2C10
  W8(c->r[1]+0x00000050u,c->r[29]); // 800A2C14
  c->lr=0x800A2C1Cu; f_80045AE4(c); // 800A2C18
  c->r[4]=0u+0x00000004u; // 800A2C1C
  c->lr=0x800A2C24u; f_802D7DF8(c); // 800A2C20
  W8(c->r[1]+0x00000048u,c->r[29]); // 800A2C24
  c->r[3]=c->r[1]+0x00000048u; // 800A2C28
  c->lr=0x800A2C30u; f_80045AE4(c); // 800A2C2C
  W8(c->r[1]+0x0000004Cu,c->r[29]); // 800A2C30
  c->r[30]=c->r[3]|c->r[3]; // 800A2C34
  c->r[3]=c->r[1]+0x0000004Cu; // 800A2C38
  c->lr=0x800A2C40u; f_8004FB50(c); // 800A2C3C
  c->r[4]=c->r[30]+0x00000034u; // 800A2C40
  c->r[5]=0u+0x00000023u; // 800A2C44
  c->r[6]=0u+0x00000001u; // 800A2C48
  c->r[7]=0u+0x00000001u; // 800A2C4C
  c->lr=0x800A2C54u; f_80360110(c); // 800A2C50
  W8(c->r[1]+0x00000040u,c->r[29]); // 800A2C54
  c->r[3]=c->r[1]+0x00000040u; // 800A2C58
  c->lr=0x800A2C60u; f_80045AE4(c); // 800A2C5C
  W8(c->r[1]+0x00000044u,c->r[29]); // 800A2C60
  c->r[30]=c->r[3]|c->r[3]; // 800A2C64
  c->r[3]=c->r[1]+0x00000044u; // 800A2C68
  c->lr=0x800A2C70u; f_8004FB50(c); // 800A2C6C
  c->r[4]=c->r[30]+0x00000034u; // 800A2C70
  c->r[5]=0u+0x00000081u; // 800A2C74
  c->r[6]=0u+0x00000001u; // 800A2C78
  c->r[7]=0u+0x00000001u; // 800A2C7C
  c->lr=0x800A2C84u; f_80360110(c); // 800A2C80
  W8(c->r[1]+0x00000038u,c->r[29]); // 800A2C84
  c->r[3]=c->r[1]+0x00000038u; // 800A2C88
  c->lr=0x800A2C90u; f_80045AE4(c); // 800A2C8C
  W8(c->r[1]+0x0000003Cu,c->r[29]); // 800A2C90
  c->r[30]=c->r[3]|c->r[3]; // 800A2C94
  c->r[3]=c->r[1]+0x0000003Cu; // 800A2C98
  c->lr=0x800A2CA0u; f_8004FB50(c); // 800A2C9C
  c->r[4]=c->r[30]+0x00000034u; // 800A2CA0
  c->r[5]=0u+0x000000E3u; // 800A2CA4
  c->r[6]=0u+0x00000001u; // 800A2CA8
  c->r[7]=0u+0x00000001u; // 800A2CAC
  c->lr=0x800A2CB4u; f_80360110(c); // 800A2CB0
  W8(c->r[1]+0x00000030u,c->r[29]); // 800A2CB4
  c->r[3]=c->r[1]+0x00000030u; // 800A2CB8
  c->lr=0x800A2CC0u; f_80045AE4(c); // 800A2CBC
  W8(c->r[1]+0x00000034u,c->r[29]); // 800A2CC0
  c->r[30]=c->r[3]|c->r[3]; // 800A2CC4
  c->r[3]=c->r[1]+0x00000034u; // 800A2CC8
  c->lr=0x800A2CD0u; f_8004FB50(c); // 800A2CCC
  c->r[4]=c->r[30]+0x00000034u; // 800A2CD0
  c->r[5]=0u+0x000000E7u; // 800A2CD4
  c->r[6]=0u+0x00000001u; // 800A2CD8
  c->r[7]=0u+0x00000001u; // 800A2CDC
  c->lr=0x800A2CE4u; f_80360110(c); // 800A2CE0
  W8(c->r[1]+0x00000028u,c->r[29]); // 800A2CE4
  c->r[3]=c->r[1]+0x00000028u; // 800A2CE8
  c->lr=0x800A2CF0u; f_80045AE4(c); // 800A2CEC
  W8(c->r[1]+0x0000002Cu,c->r[29]); // 800A2CF0
  c->r[30]=c->r[3]|c->r[3]; // 800A2CF4
  c->r[3]=c->r[1]+0x0000002Cu; // 800A2CF8
  c->lr=0x800A2D00u; f_8004FB50(c); // 800A2CFC
  c->r[4]=c->r[30]+0x00000034u; // 800A2D00
  c->r[5]=0u+0x000000EAu; // 800A2D04
  c->r[6]=0u+0x00000001u; // 800A2D08
  c->r[7]=0u+0x00000001u; // 800A2D0C
  c->lr=0x800A2D14u; f_80360110(c); // 800A2D10
  W8(c->r[1]+0x00000020u,c->r[29]); // 800A2D14
  c->r[3]=c->r[1]+0x00000020u; // 800A2D18
  c->lr=0x800A2D20u; f_80045AE4(c); // 800A2D1C
  W8(c->r[1]+0x00000024u,c->r[29]); // 800A2D20
  c->r[30]=c->r[3]|c->r[3]; // 800A2D24
  c->r[3]=c->r[1]+0x00000024u; // 800A2D28
  c->lr=0x800A2D30u; f_8004FB50(c); // 800A2D2C
  c->r[4]=c->r[30]+0x00000034u; // 800A2D30
  c->r[5]=0u+0x000000EEu; // 800A2D34
  c->r[6]=0u+0x00000001u; // 800A2D38
  c->r[7]=0u+0x00000001u; // 800A2D3C
  c->lr=0x800A2D44u; f_80360110(c); // 800A2D40
  W8(c->r[1]+0x00000018u,c->r[29]); // 800A2D44
  c->r[3]=c->r[1]+0x00000018u; // 800A2D48
  c->lr=0x800A2D50u; f_80045AE4(c); // 800A2D4C
  W8(c->r[1]+0x0000001Cu,c->r[29]); // 800A2D50
  c->r[30]=c->r[3]|c->r[3]; // 800A2D54
  c->r[3]=c->r[1]+0x0000001Cu; // 800A2D58
  c->lr=0x800A2D60u; f_8004FB50(c); // 800A2D5C
  c->r[4]=c->r[30]+0x00000034u; // 800A2D60
  c->r[5]=0u+0x000000F0u; // 800A2D64
  c->r[6]=0u+0x00000001u; // 800A2D68
  c->r[7]=0u+0x00000001u; // 800A2D6C
  c->lr=0x800A2D74u; f_80360110(c); // 800A2D70
  c->r[12]=R32(c->r[31]+0x000000A4u); // 800A2D74
  c->r[3]=c->r[31]|c->r[31]; // 800A2D78
  c->r[12]=R32(c->r[12]+0x00000028u); // 800A2D7C
  c->ctr=c->r[12]; // 800A2D80
  if (true) { c->lr=0x800A2D88u; dispatch(c,c->ctr); } // 800A2D84
  c->r[0]=R8(c->r[13]+0xFFFFBB86u); // 800A2D88
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800A2D8C
  if (!crb(c,2)) { goto L_800A2DD4; } // 800A2D90
  c->r[30]=0u+0x80730000u; // 800A2D94
  c->r[3]=c->r[30]+0x00006040u; // 800A2D98
  c->lr=0x800A2DA0u; f_8004B784(c); // 800A2D9C
  c->r[6]=0u+0x806D0000u; // 800A2DA0
  c->r[4]=0u+0x80050000u; // 800A2DA4
  c->r[6]=c->r[6]+0xFFFFC3B8u; // 800A2DA8
  c->r[3]=c->r[30]+0x00006040u; // 800A2DAC
  c->r[0]=c->r[6]+0x00000028u; // 800A2DB0
  c->r[5]=0u+0x80750000u; // 800A2DB4
  W32(c->r[3]+0x000000A4u,c->r[6]); // 800A2DB8
  c->r[4]=c->r[4]+0xFFFF9F98u; // 800A2DBC
  c->r[5]=c->r[5]+0xFFFFB658u; // 800A2DC0
  W32(c->r[3]+0x000000A8u,c->r[0]); // 800A2DC4
  c->lr=0x800A2DCCu; f_803A92B8(c); // 800A2DC8
  c->r[0]=0u+0x00000001u; // 800A2DCC
  W8(c->r[13]+0xFFFFBB86u,c->r[0]); // 800A2DD0
L_800A2DD4:;
  c->r[3]=0u+0x80730000u; // 800A2DD4
  c->r[3]=c->r[3]+0x00006040u; // 800A2DD8
  c->lr=0x800A2DE0u; f_8004CB80(c); // 800A2DDC
  c->r[0]=R8(c->r[13]+0xFFFFBB7Cu); // 800A2DE0
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800A2DE4
  if (!crb(c,2)) { goto L_800A2E2C; } // 800A2DE8
  c->r[30]=0u+0x80730000u; // 800A2DEC
  c->r[3]=c->r[30]+0x00003E20u; // 800A2DF0
  c->lr=0x800A2DF8u; f_8019F1C0(c); // 800A2DF4
  c->r[6]=0u+0x806D0000u; // 800A2DF8
  c->r[4]=0u+0x80050000u; // 800A2DFC
  c->r[6]=c->r[6]+0xFFFFC638u; // 800A2E00
  c->r[3]=c->r[30]+0x00003E20u; // 800A2E04
  c->r[0]=c->r[6]+0x00000028u; // 800A2E08
  c->r[5]=0u+0x80750000u; // 800A2E0C
  W32(c->r[3]+0x000000A4u,c->r[6]); // 800A2E10
  c->r[4]=c->r[4]+0xFFFFA230u; // 800A2E14
  c->r[5]=c->r[5]+0xFFFFB640u; // 800A2E18
  W32(c->r[3]+0x000000A8u,c->r[0]); // 800A2E1C
  c->lr=0x800A2E24u; f_803A92B8(c); // 800A2E20
  c->r[0]=0u+0x00000001u; // 800A2E24
  W8(c->r[13]+0xFFFFBB7Cu,c->r[0]); // 800A2E28
L_800A2E2C:;
  c->r[3]=0u+0x80730000u; // 800A2E2C
  c->r[3]=c->r[3]+0x00003E20u; // 800A2E30
  c->r[0]=R32(c->r[3]+0x00000004u); // 800A2E34
  cmps(c,0,(int32_t)c->r[0],0); // 800A2E38
  if (!crb(c,2)) { goto L_800A2ED8; } // 800A2E3C
  c->r[0]=0u+0x00000001u; // 800A2E40
  W8(c->r[31]+0x000000A8u,c->r[0]); // 800A2E44
  W8(c->r[31]+0x000000A9u,c->r[0]); // 800A2E48
  c->r[3]=R32(c->r[13]+0xFFFFBE10u); // 800A2E4C
  c->lr=0x800A2E54u; f_80065E00(c); // 800A2E50
  c->r[31]=0u+0x00000000u; // 800A2E54
  W8(c->r[1]+0x00000014u,c->r[31]); // 800A2E58
  c->r[3]=c->r[1]+0x00000014u; // 800A2E5C
  c->lr=0x800A2E64u; f_80047A08(c); // 800A2E60
  c->r[0]=R32(c->r[3]+0x00000008u); // 800A2E64
  cmps(c,0,(int32_t)c->r[0],0); // 800A2E68
  if (!crb(c,2)) { goto L_800A2EAC; } // 800A2E6C
  c->r[4]=0u+0x80690000u; // 800A2E70
  c->r[3]=0u+0x80740000u; // 800A2E74
  c->r[4]=c->r[4]+0xFFFFDDA0u; // 800A2E78
  W8(c->r[1]+0x00000010u,c->r[31]); // 800A2E7C
  c->r[29]=c->r[1]+0x00000010u; // 800A2E80
  c->r[3]=c->r[3]+0x00004FD0u; // 800A2E84
  c->r[5]=c->r[4]+0x0000000Du; // 800A2E88
  c->r[6]=0u+0x00000000u; // 800A2E8C
  c->lr=0x800A2E94u; f_8005A7B0(c); // 800A2E90
  c->r[31]=c->r[3]|c->r[3]; // 800A2E94
  c->r[3]=c->r[29]|c->r[29]; // 800A2E98
  c->lr=0x800A2EA0u; f_80047A08(c); // 800A2E9C
  c->r[4]=c->r[31]|c->r[31]; // 800A2EA0
  c->r[5]=0u+0x00000400u; // 800A2EA4
  c->lr=0x800A2EACu; f_802D44FC(c); // 800A2EA8
L_800A2EAC:;
  c->r[31]=0u+0x00000000u; // 800A2EAC
  W8(c->r[1]+0x0000000Cu,c->r[31]); // 800A2EB0
  c->r[3]=c->r[1]+0x0000000Cu; // 800A2EB4
  c->lr=0x800A2EBCu; f_80046D50(c); // 800A2EB8
  c->r[0]=R32(c->r[3]+0x00000004u); // 800A2EBC
  cmps(c,0,(int32_t)c->r[0],0); // 800A2EC0
  if (!crb(c,2)) { goto L_800A2ED8; } // 800A2EC4
  W8(c->r[1]+0x00000008u,c->r[31]); // 800A2EC8
  c->r[3]=c->r[1]+0x00000008u; // 800A2ECC
  c->lr=0x800A2ED4u; f_80046D50(c); // 800A2ED0
  c->lr=0x800A2ED8u; f_8008CC20(c); // 800A2ED4
L_800A2ED8:;
  {uint32_t ea=c->r[1]+0x00000064u; for(int i=29;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800A2ED8
  c->r[0]=R32(c->r[1]+0x00000074u); // 800A2EDC
  c->lr=c->r[0]; // 800A2EE0
  c->r[1]=c->r[1]+0x00000070u; // 800A2EE4
  return; // 800A2EE8
}

// fn_800A2EEC
void f_800A2EEC(Ctx* __restrict c) {
  trace_call(0x800A2EECu);
  return; // 800A2EEC
}

// fn_800A2EF0
void f_800A2EF0(Ctx* __restrict c) {
  trace_call(0x800A2EF0u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800A2EF0
  c->r[0]=c->lr; // 800A2EF4
  W32(c->r[1]+0x00000034u,c->r[0]); // 800A2EF8
  {uint32_t ea=c->r[1]+0x00000024u; for(int i=29;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800A2EFC
  c->r[31]=c->r[3]|c->r[3]; // 800A2F00
  c->lr=0x800A2F08u; f_803A43C4(c); // 800A2F04
  c->lr=0x800A2F0Cu; f_8038E618(c); // 800A2F08
  c->lr=0x800A2F10u; f_8038E618(c); // 800A2F0C
  c->lr=0x800A2F14u; f_8038E618(c); // 800A2F10
  c->lr=0x800A2F18u; f_8038E618(c); // 800A2F14
  c->r[0]=0u+0x00000000u; // 800A2F18
  W32(c->r[1]+0x00000014u,c->r[0]); // 800A2F1C
  c->r[30]=c->r[1]+0x00000014u; // 800A2F20
  c->r[3]=c->r[1]+0x00000010u; // 800A2F24
  W8(c->r[1]+0x00000010u,c->r[0]); // 800A2F28
  c->lr=0x800A2F30u; f_80047A80(c); // 800A2F2C
  c->r[4]=c->r[30]|c->r[30]; // 800A2F30
  c->lr=0x800A2F38u; f_8029A61C(c); // 800A2F34
  c->r[0]=R8(c->r[31]+0x000000A9u); // 800A2F38
  cmps(c,0,(int32_t)c->r[0],0); // 800A2F3C
  if (crb(c,2)) { goto L_800A2F4C; } // 800A2F40
  c->r[3]=R32(c->r[13]+0xFFFFBE10u); // 800A2F44
  c->lr=0x800A2F4Cu; f_80065EB0(c); // 800A2F48
L_800A2F4C:;
  c->r[12]=R32(c->r[31]+0x000000A4u); // 800A2F4C
  c->r[3]=c->r[31]|c->r[31]; // 800A2F50
  c->r[12]=R32(c->r[12]+0x0000002Cu); // 800A2F54
  c->ctr=c->r[12]; // 800A2F58
  if (true) { c->lr=0x800A2F60u; dispatch(c,c->ctr); } // 800A2F5C
  c->r[0]=R8(c->r[13]+0xFFFFBB89u); // 800A2F60
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800A2F64
  if (!crb(c,2)) { goto L_800A2FAC; } // 800A2F68
  c->r[30]=0u+0x80730000u; // 800A2F6C
  c->r[3]=c->r[30]+0x00006450u; // 800A2F70
  c->lr=0x800A2F78u; f_8029EBCC(c); // 800A2F74
  c->r[6]=0u+0x806D0000u; // 800A2F78
  c->r[4]=0u+0x80050000u; // 800A2F7C
  c->r[6]=c->r[6]+0xFFFFC324u; // 800A2F80
  c->r[3]=c->r[30]+0x00006450u; // 800A2F84
  c->r[0]=c->r[6]+0x00000008u; // 800A2F88
  c->r[5]=0u+0x80750000u; // 800A2F8C
  W32(c->r[3]+0x00000010u,c->r[6]); // 800A2F90
  c->r[4]=c->r[4]+0xFFFF9EE4u; // 800A2F94
  c->r[5]=c->r[5]+0xFFFFB664u; // 800A2F98
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 800A2F9C
  c->lr=0x800A2FA4u; f_803A92B8(c); // 800A2FA0
  c->r[0]=0u+0x00000001u; // 800A2FA4
  W8(c->r[13]+0xFFFFBB89u,c->r[0]); // 800A2FA8
L_800A2FAC:;
  c->r[3]=0u+0x80730000u; // 800A2FAC
  c->r[3]=c->r[3]+0x00006450u; // 800A2FB0
  c->lr=0x800A2FB8u; f_8029EE6C(c); // 800A2FB4
  c->r[0]=R8(c->r[13]+0xFFFFBB8Au); // 800A2FB8
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800A2FBC
  if (!crb(c,2)) { goto L_800A3004; } // 800A2FC0
  c->r[30]=0u+0x80730000u; // 800A2FC4
  c->r[3]=c->r[30]+0x00006464u; // 800A2FC8
  c->lr=0x800A2FD0u; f_8029E538(c); // 800A2FCC
  c->r[6]=0u+0x806D0000u; // 800A2FD0
  c->r[4]=0u+0x80050000u; // 800A2FD4
  c->r[6]=c->r[6]+0xFFFFC300u; // 800A2FD8
  c->r[3]=c->r[30]+0x00006464u; // 800A2FDC
  c->r[0]=c->r[6]+0x00000010u; // 800A2FE0
  c->r[5]=0u+0x80750000u; // 800A2FE4
  W32(c->r[3]+0x00000008u,c->r[6]); // 800A2FE8
  c->r[4]=c->r[4]+0xFFFF9EA8u; // 800A2FEC
  c->r[5]=c->r[5]+0xFFFFB670u; // 800A2FF0
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 800A2FF4
  c->lr=0x800A2FFCu; f_803A92B8(c); // 800A2FF8
  c->r[0]=0u+0x00000001u; // 800A2FFC
  W8(c->r[13]+0xFFFFBB8Au,c->r[0]); // 800A3000
L_800A3004:;
  c->r[3]=0u+0x80730000u; // 800A3004
  c->r[3]=c->r[3]+0x00006464u; // 800A3008
  c->lr=0x800A3010u; f_8029E864(c); // 800A300C
  c->r[0]=0u+0x00000000u; // 800A3010
  W8(c->r[1]+0x0000000Cu,c->r[0]); // 800A3014
  c->r[3]=c->r[1]+0x0000000Cu; // 800A3018
  c->lr=0x800A3020u; f_80047A80(c); // 800A301C
  c->r[30]=c->r[3]|c->r[3]; // 800A3020
  c->r[3]=R32(c->r[3]+0x00000004u); // 800A3024
  c->lr=0x800A302Cu; f_804CC974(c); // 800A3028
  c->r[29]=R32(c->r[30]+0x00000004u); // 800A302C
  goto L_800A304C; // 800A3030
L_800A3034:;
  c->r[12]=R32(c->r[29]+0x00000000u); // 800A3034
  c->r[3]=c->r[29]|c->r[29]; // 800A3038
  c->r[4]=c->r[4]+0xFFFFFFFFu; // 800A303C
  c->r[12]=R32(c->r[12]+0x00000038u); // 800A3040
  c->ctr=c->r[12]; // 800A3044
  if (true) { c->lr=0x800A304Cu; dispatch(c,c->ctr); } // 800A3048
L_800A304C:;
  c->r[4]=R32(c->r[29]+0x000000E4u); // 800A304C
  cmps(c,0,(int32_t)c->r[4],0); // 800A3050
  if (!crb(c,2)) { IRQCHK(c); goto L_800A3034; } // 800A3054
  c->r[3]=R32(c->r[30]+0x00000004u); // 800A3058
  c->r[4]=0u+0x00000000u; // 800A305C
  c->lr=0x800A3064u; f_804CC910(c); // 800A3060
  c->r[0]=R8(c->r[13]+0xFFFFBB84u); // 800A3064
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800A3068
  if (!crb(c,2)) { goto L_800A30B0; } // 800A306C
  c->r[30]=0u+0x80730000u; // 800A3070
  c->r[3]=c->r[30]+0x00005818u; // 800A3074
  c->lr=0x800A307Cu; f_8004A4E0(c); // 800A3078
  c->r[6]=0u+0x806D0000u; // 800A307C
  c->r[4]=0u+0x80050000u; // 800A3080
  c->r[6]=c->r[6]+0xFFFFC430u; // 800A3084
  c->r[3]=c->r[30]+0x00005818u; // 800A3088
  c->r[0]=c->r[6]+0x00000028u; // 800A308C
  c->r[5]=0u+0x80750000u; // 800A3090
  W32(c->r[3]+0x000000A4u,c->r[6]); // 800A3094
  c->r[4]=c->r[4]+0xFFFFA010u; // 800A3098
  c->r[5]=c->r[5]+0xFFFFB64Cu; // 800A309C
  W32(c->r[3]+0x000000A8u,c->r[0]); // 800A30A0
  c->lr=0x800A30A8u; f_803A92B8(c); // 800A30A4
  c->r[0]=0u+0x00000001u; // 800A30A8
  W8(c->r[13]+0xFFFFBB84u,c->r[0]); // 800A30AC
L_800A30B0:;
  c->r[3]=0u+0x80730000u; // 800A30B0
  c->r[3]=c->r[3]+0x00005818u; // 800A30B4
  c->lr=0x800A30BCu; f_8004B0F8(c); // 800A30B8
  c->r[29]=0u+0x00000000u; // 800A30BC
L_800A30C0:;
  cmps(c,0,(int32_t)c->r[29],0); // 800A30C0
  if (crb(c,2)) { goto L_800A30DC; } // 800A30C4
  cmps(c,0,(int32_t)c->r[29],1); // 800A30C8
  if (crb(c,2)) { goto L_800A30DC; } // 800A30CC
  c->lr=0x800A30D4u; f_80323304(c); // 800A30D0
  c->r[4]=c->r[29]|c->r[29]; // 800A30D4
  c->lr=0x800A30DCu; f_80323B9C(c); // 800A30D8
L_800A30DC:;
  c->r[29]=c->r[29]+0x00000001u; // 800A30DC
  cmps(c,0,(int32_t)c->r[29],20); // 800A30E0
  if (crb(c,0)) { IRQCHK(c); goto L_800A30C0; } // 800A30E4
  c->r[3]=0u+0x80750000u; // 800A30E8
  c->r[3]=c->r[3]+0xFFFFBC98u; // 800A30EC
  c->lr=0x800A30F4u; f_800AA9C4(c); // 800A30F0
  c->r[3]=0u+0x80750000u; // 800A30F4
  c->r[3]=c->r[3]+0xFFFFC558u; // 800A30F8
  c->lr=0x800A3100u; f_800AA9C4(c); // 800A30FC
  c->r[30]=0u+0x00000000u; // 800A3100
  W8(c->r[1]+0x00000008u,c->r[30]); // 800A3104
  c->r[3]=c->r[1]+0x00000008u; // 800A3108
  c->lr=0x800A3110u; f_80045AE4(c); // 800A310C
  c->r[4]=0u+0x00000004u; // 800A3110
  c->lr=0x800A3118u; f_802D7E40(c); // 800A3114
  W8(c->r[31]+0x000000A8u,c->r[30]); // 800A3118
  W8(c->r[31]+0x000000A9u,c->r[30]); // 800A311C
  {uint32_t ea=c->r[1]+0x00000024u; for(int i=29;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800A3120
  c->r[0]=R32(c->r[1]+0x00000034u); // 800A3124
  c->lr=c->r[0]; // 800A3128
  c->r[1]=c->r[1]+0x00000030u; // 800A312C
  return; // 800A3130
}

// fn_800A3134
void f_800A3134(Ctx* __restrict c) {
  trace_call(0x800A3134u);
  return; // 800A3134
}

// fn_800A3138
void f_800A3138(Ctx* __restrict c) {
  trace_call(0x800A3138u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800A3138
  c->r[0]=c->lr; // 800A313C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800A3140
  c->r[0]=R8(c->r[3]+0x000000A8u); // 800A3144
  cmps(c,0,(int32_t)c->r[0],0); // 800A3148
  if (crb(c,2)) { goto L_800A3178; } // 800A314C
  c->r[0]=R8(c->r[3]+0x000000A9u); // 800A3150
  cmps(c,0,(int32_t)c->r[0],0); // 800A3154
  if (crb(c,2)) { goto L_800A3178; } // 800A3158
  c->r[0]=0u+0x00000000u; // 800A315C
  W8(c->r[1]+0x00000008u,c->r[0]); // 800A3160
  c->r[3]=c->r[1]+0x00000008u; // 800A3164
  c->lr=0x800A316Cu; f_80046D50(c); // 800A3168
  c->lr=0x800A3170u; f_8008CC20(c); // 800A316C
  c->r[3]=0u+0x00000001u; // 800A3170
  goto L_800A318C; // 800A3174
L_800A3178:;
  c->r[12]=R32(c->r[3]+0x000000A4u); // 800A3178
  c->r[12]=R32(c->r[12]+0x00000030u); // 800A317C
  c->ctr=c->r[12]; // 800A3180
  if (true) { c->lr=0x800A3188u; dispatch(c,c->ctr); } // 800A3184
  c->r[3]=0u+0x00000001u; // 800A3188
L_800A318C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800A318C
  c->lr=c->r[0]; // 800A3190
  c->r[1]=c->r[1]+0x00000010u; // 800A3194
  return; // 800A3198
}

// fn_800A319C
void f_800A319C(Ctx* __restrict c) {
  trace_call(0x800A319Cu);
  return; // 800A319C
}

// fn_800A31A0
void f_800A31A0(Ctx* __restrict c) {
  trace_call(0x800A31A0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800A31A0
  c->r[0]=c->lr; // 800A31A4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800A31A8
  c->r[0]=R8(c->r[3]+0x000000A8u); // 800A31AC
  cmps(c,0,(int32_t)c->r[0],0); // 800A31B0
  if (crb(c,2)) { goto L_800A31CC; } // 800A31B4
  c->r[0]=R8(c->r[3]+0x000000A9u); // 800A31B8
  cmps(c,0,(int32_t)c->r[0],0); // 800A31BC
  if (crb(c,2)) { goto L_800A31CC; } // 800A31C0
  c->r[3]=0u+0x00000001u; // 800A31C4
  goto L_800A31E0; // 800A31C8
L_800A31CC:;
  c->r[12]=R32(c->r[3]+0x000000A4u); // 800A31CC
  c->r[12]=R32(c->r[12]+0x00000034u); // 800A31D0
  c->ctr=c->r[12]; // 800A31D4
  if (true) { c->lr=0x800A31DCu; dispatch(c,c->ctr); } // 800A31D8
  c->r[3]=0u+0x00000001u; // 800A31DC
L_800A31E0:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800A31E0
  c->lr=c->r[0]; // 800A31E4
  c->r[1]=c->r[1]+0x00000010u; // 800A31E8
  return; // 800A31EC
}

// fn_800A31F0
void f_800A31F0(Ctx* __restrict c) {
  trace_call(0x800A31F0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800A31F0
  c->r[0]=c->lr; // 800A31F4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800A31F8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800A31FC
  c->r[31]=c->r[3]|c->r[3]; // 800A3200
  c->r[0]=R8(c->r[3]+0x000000A8u); // 800A3204
  cmps(c,0,(int32_t)c->r[0],0); // 800A3208
  if (crb(c,2)) { goto L_800A322C; } // 800A320C
  c->r[0]=R8(c->r[3]+0x000000A9u); // 800A3210
  cmps(c,0,(int32_t)c->r[0],0); // 800A3214
  if (crb(c,2)) { goto L_800A322C; } // 800A3218
  c->r[3]=R32(c->r[13]+0xFFFFBE10u); // 800A321C
  c->lr=0x800A3224u; f_80065F00(c); // 800A3220
  W8(c->r[31]+0x000000A8u,c->r[3]); // 800A3224
  goto L_800A3240; // 800A3228
L_800A322C:;
  c->r[12]=R32(c->r[31]+0x000000A4u); // 800A322C
  c->r[3]=c->r[31]|c->r[31]; // 800A3230
  c->r[12]=R32(c->r[12]+0x00000038u); // 800A3234
  c->ctr=c->r[12]; // 800A3238
  if (true) { c->lr=0x800A3240u; dispatch(c,c->ctr); } // 800A323C
L_800A3240:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800A3240
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800A3244
  c->lr=c->r[0]; // 800A3248
  c->r[1]=c->r[1]+0x00000010u; // 800A324C
  return; // 800A3250
}

// fn_800A3254
void f_800A3254(Ctx* __restrict c) {
  trace_call(0x800A3254u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800A3254
  c->r[0]=c->lr; // 800A3258
  W32(c->r[1]+0x00000014u,c->r[0]); // 800A325C
  c->r[0]=0u+0x00000001u; // 800A3260
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800A3264
  c->r[31]=0u+0x80690000u; // 800A3268
  c->r[4]=c->r[31]+0xFFFFDDC0u; // 800A326C
  W32(c->r[1]+0x00000008u,c->r[30]); // 800A3270
  c->r[30]=c->r[3]|c->r[3]; // 800A3274
  W32(c->r[3]+0x00000018u,c->r[0]); // 800A3278
  c->lr=0x800A3280u; f_802DF854(c); // 800A327C
  c->r[4]=R32(c->r[30]+0x000000A0u); // 800A3280
  c->r[5]=c->r[3]|c->r[3]; // 800A3284
  {uint32_t ea=c->r[2]+0xFFFF98F0u; c->f[1]=c->ps1[1]=RF32(ea);} // 800A3288
  c->r[3]=c->r[30]|c->r[30]; // 800A328C
  c->lr=0x800A3294u; f_802E02F0(c); // 800A3290
  c->r[5]=c->r[31]+0xFFFFDDC0u; // 800A3294
  c->r[4]=R32(c->r[30]+0x000000A4u); // 800A3298
  {uint32_t ea=c->r[2]+0xFFFF98F0u; c->f[1]=c->ps1[1]=RF32(ea);} // 800A329C
  c->r[3]=c->r[30]|c->r[30]; // 800A32A0
  {uint32_t ea=c->r[2]+0xFFFF98F4u; c->f[2]=c->ps1[2]=RF32(ea);} // 800A32A4
  c->r[5]=c->r[5]+0x00000006u; // 800A32A8
  c->lr=0x800A32B0u; f_8020F510(c); // 800A32AC
  c->r[0]=R32(c->r[1]+0x00000014u); // 800A32B0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800A32B4
  c->r[30]=R32(c->r[1]+0x00000008u); // 800A32B8
  c->lr=c->r[0]; // 800A32BC
  c->r[1]=c->r[1]+0x00000010u; // 800A32C0
  return; // 800A32C4
}

// fn_800A32C8
void f_800A32C8(Ctx* __restrict c) {
  trace_call(0x800A32C8u);
  {uint32_t ea=c->r[1]+0xFFFFFEF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800A32C8
  c->r[0]=c->lr; // 800A32CC
  c->r[4]=0u+0x80690000u; // 800A32D0
  c->r[4]=c->r[4]+0xFFFFDDC0u; // 800A32D4
  W32(c->r[1]+0x00000114u,c->r[0]); // 800A32D8
  c->r[3]=c->r[1]+0x00000010u; // 800A32DC
  c->r[4]=c->r[4]+0x0000000Bu; // 800A32E0
  c->lr=0x800A32E8u; f_80048E74(c); // 800A32E4
  c->r[0]=0u+0x00000000u; // 800A32E8
  W8(c->r[1]+0x00000008u,c->r[0]); // 800A32EC
  c->r[3]=c->r[1]+0x00000008u; // 800A32F0
  c->lr=0x800A32F8u; f_800A3310(c); // 800A32F4
  c->r[4]=c->r[1]+0x00000010u; // 800A32F8
  c->lr=0x800A3300u; f_802E1A50(c); // 800A32FC
  c->r[0]=R32(c->r[1]+0x00000114u); // 800A3300
  c->lr=c->r[0]; // 800A3304
  c->r[1]=c->r[1]+0x00000110u; // 800A3308
  return; // 800A330C
}

// fn_800A3310
void f_800A3310(Ctx* __restrict c) {
  trace_call(0x800A3310u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800A3310
  c->r[0]=c->lr; // 800A3314
  W32(c->r[1]+0x00000014u,c->r[0]); // 800A3318
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800A331C
  c->r[0]=R8(c->r[13]+0xFFFFC079u); // 800A3320
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800A3324
  if (!crb(c,2)) { goto L_800A3364; } // 800A3328
  c->r[31]=0u+0x80750000u; // 800A332C
  c->r[3]=c->r[31]+0xFFFFB6E0u; // 800A3330
  c->lr=0x800A3338u; f_802E1428(c); // 800A3334
  c->r[3]=0u+0x806D0000u; // 800A3338
  c->r[4]=0u+0x800A0000u; // 800A333C
  c->r[3]=c->r[3]+0x00005D20u; // 800A3340
  c->r[5]=0u+0x80750000u; // 800A3344
  W32(c->r[31]+0xFFFFB6E0u,c->r[3]); // 800A3348
  c->r[3]=c->r[31]+0xFFFFB6E0u; // 800A334C
  c->r[4]=c->r[4]+0x00003D68u; // 800A3350
  c->r[5]=c->r[5]+0xFFFFB68Cu; // 800A3354
  c->lr=0x800A335Cu; f_803A92B8(c); // 800A3358
  c->r[0]=0u+0x00000001u; // 800A335C
  W8(c->r[13]+0xFFFFC079u,c->r[0]); // 800A3360
L_800A3364:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800A3364
  c->r[3]=0u+0x80750000u; // 800A3368
  c->r[0]=R32(c->r[1]+0x00000014u); // 800A336C
  c->r[3]=c->r[3]+0xFFFFB6E0u; // 800A3370
  c->lr=c->r[0]; // 800A3374
  c->r[1]=c->r[1]+0x00000010u; // 800A3378
  return; // 800A337C
}

// fn_800A3380
void f_800A3380(Ctx* __restrict c) {
  trace_call(0x800A3380u);
  return; // 800A3380
}

// fn_800A3384
void f_800A3384(Ctx* __restrict c) {
  trace_call(0x800A3384u);
  {uint32_t ea=c->r[1]+0xFFFFFEE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800A3384
  c->r[0]=c->lr; // 800A3388
  c->r[4]=0u+0x80690000u; // 800A338C
  W32(c->r[1]+0x00000124u,c->r[0]); // 800A3390
  c->r[4]=c->r[4]+0xFFFFDDC0u; // 800A3394
  c->r[4]=c->r[4]+0x0000000Bu; // 800A3398
  {uint32_t ea=c->r[1]+0x00000118u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800A339C
  c->r[30]=c->r[3]|c->r[3]; // 800A33A0
  c->r[3]=c->r[1]+0x00000010u; // 800A33A4
  c->lr=0x800A33ACu; f_80048E74(c); // 800A33A8
  c->r[3]=0u+0x80740000u; // 800A33AC
  c->r[4]=c->r[1]+0x00000010u; // 800A33B0
  c->r[3]=c->r[3]+0x000054E0u; // 800A33B4
  c->lr=0x800A33BCu; f_80313128(c); // 800A33B8
  c->r[0]=R8(c->r[3]+0x00000018u); // 800A33BC
  c->r[4]=0u+0x00000000u; // 800A33C0
  c->r[0]=rotl(c->r[0],25)&0x00000001u; cr0(c,c->r[0]); // 800A33C4
  if (crb(c,2)) { goto L_800A33DC; } // 800A33C8
  c->r[0]=R8(c->r[3]+0x00000019u); // 800A33CC
  c->r[0]=rotl(c->r[0],27)&0x00000001u; cr0(c,c->r[0]); // 800A33D0
  if (!crb(c,2)) { goto L_800A33DC; } // 800A33D4
  c->r[4]=0u+0x00000001u; // 800A33D8
L_800A33DC:;
  cmps(c,0,(int32_t)c->r[4],0); // 800A33DC
  if (crb(c,2)) { goto L_800A33EC; } // 800A33E0
  c->r[31]=R32(c->r[3]+0x0000001Cu); // 800A33E4
  goto L_800A33F0; // 800A33E8
L_800A33EC:;
  c->r[31]=0u+0x00000000u; // 800A33EC
L_800A33F0:;
  c->r[0]=0u+0x00000000u; // 800A33F0
  W8(c->r[1]+0x00000008u,c->r[0]); // 800A33F4
  c->r[3]=c->r[1]+0x00000008u; // 800A33F8
  c->lr=0x800A3400u; f_800A3310(c); // 800A33FC
  c->r[5]=c->r[31]|c->r[31]; // 800A3400
  c->r[4]=c->r[1]+0x00000010u; // 800A3404
  c->lr=0x800A340Cu; f_802E1740(c); // 800A3408
  c->r[31]=0u+0x80690000u; // 800A340C
  c->r[3]=c->r[30]|c->r[30]; // 800A3410
  c->r[31]=c->r[31]+0xFFFFDDC0u; // 800A3414
  c->r[4]=c->r[31]+0x00000015u; // 800A3418
  c->lr=0x800A3420u; f_802DFB68(c); // 800A341C
  c->r[3]=c->r[30]|c->r[30]; // 800A3420
  c->r[4]=c->r[31]+0x00000021u; // 800A3424
  c->lr=0x800A342Cu; f_802DFCE8(c); // 800A3428
  W32(c->r[30]+0x000000A0u,c->r[3]); // 800A342C
  c->r[3]=c->r[30]|c->r[30]; // 800A3430
  c->r[4]=c->r[31]+0x00000033u; // 800A3434
  c->lr=0x800A343Cu; f_802DFCE8(c); // 800A3438
  W32(c->r[30]+0x000000A4u,c->r[3]); // 800A343C
  {uint32_t ea=c->r[1]+0x00000118u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800A3440
  c->r[0]=R32(c->r[1]+0x00000124u); // 800A3444
  c->lr=c->r[0]; // 800A3448
  c->r[1]=c->r[1]+0x00000120u; // 800A344C
  return; // 800A3450
}

// fn_800A3454
void f_800A3454(Ctx* __restrict c) {
  trace_call(0x800A3454u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800A3454
  c->r[0]=c->lr; // 800A3458
  c->r[5]=0u+0x80690000u; // 800A345C
  c->r[4]=0u+0x0000000Eu; // 800A3460
  W32(c->r[1]+0x00000014u,c->r[0]); // 800A3464
  c->r[5]=c->r[5]+0xFFFFDDC0u; // 800A3468
  c->r[5]=c->r[5]+0x00000044u; // 800A346C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800A3470
  c->r[31]=c->r[3]|c->r[3]; // 800A3474
  c->lr=0x800A347Cu; f_800A2B28(c); // 800A3478
  c->r[4]=0u+0x806D0000u; // 800A347C
  c->r[3]=c->r[31]|c->r[31]; // 800A3480
  c->r[4]=c->r[4]+0x00005C68u; // 800A3484
  W32(c->r[31]+0x000000A4u,c->r[4]); // 800A3488
  c->r[0]=c->r[4]+0x0000003Cu; // 800A348C
  W32(c->r[31]+0x000000ACu,c->r[0]); // 800A3490
  c->lr=0x800A3498u; f_800A3D10(c); // 800A3494
  c->r[3]=c->r[31]|c->r[31]; // 800A3498
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800A349C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800A34A0
  c->lr=c->r[0]; // 800A34A4
  c->r[1]=c->r[1]+0x00000010u; // 800A34A8
  return; // 800A34AC
}

// fn_800A34B0
void f_800A34B0(Ctx* __restrict c) {
  trace_call(0x800A34B0u);
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800A34B0
  c->r[0]=c->lr; // 800A34B4
  W32(c->r[1]+0x00000064u,c->r[0]); // 800A34B8
  c->r[11]=c->r[1]+0x00000060u; // 800A34BC
  c->lr=0x800A34C4u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800A34C0
  c->r[31]=c->r[1]|c->r[1]; // 800A34C4
  c->r[27]=c->r[3]|c->r[3]; // 800A34C8
  c->lr=0x800A34D0u; f_800A3D10(c); // 800A34CC
  c->r[29]=0u+0x00000000u; // 800A34D0
  W8(c->r[31]+0x00000024u,c->r[29]); // 800A34D4
  c->r[3]=c->r[31]+0x00000024u; // 800A34D8
  c->lr=0x800A34E0u; f_80046280(c); // 800A34DC
  c->r[4]=0u+0x00000005u; // 800A34E0
  c->r[5]=0u+0x00000000u; // 800A34E4
  c->lr=0x800A34ECu; f_8029F698(c); // 800A34E8
  W8(c->r[31]+0x00000020u,c->r[29]); // 800A34EC
  c->r[3]=c->r[31]+0x00000020u; // 800A34F0
  c->lr=0x800A34F8u; f_80046280(c); // 800A34F4
  c->r[4]=0u+0x00000001u; // 800A34F8
  c->r[5]=0u+0x00000000u; // 800A34FC
  c->lr=0x800A3504u; f_8029F698(c); // 800A3500
  W8(c->r[31]+0x0000001Cu,c->r[29]); // 800A3504
  c->r[3]=c->r[31]+0x0000001Cu; // 800A3508
  c->lr=0x800A3510u; f_80046280(c); // 800A350C
  c->r[4]=0u+0x00000007u; // 800A3510
  c->r[5]=0u+0x00000000u; // 800A3514
  c->lr=0x800A351Cu; f_8029F698(c); // 800A3518
  W8(c->r[31]+0x00000018u,c->r[29]); // 800A351C
  c->r[3]=c->r[31]+0x00000018u; // 800A3520
  c->lr=0x800A3528u; f_80046280(c); // 800A3524
  c->r[4]=0u+0x00000006u; // 800A3528
  c->r[5]=0u+0x00000000u; // 800A352C
  c->lr=0x800A3534u; f_8029F698(c); // 800A3530
  W8(c->r[31]+0x00000014u,c->r[29]); // 800A3534
  c->r[3]=c->r[31]+0x00000014u; // 800A3538
  c->lr=0x800A3540u; f_80046280(c); // 800A353C
  c->r[4]=0u+0x00000009u; // 800A3540
  c->r[5]=0u+0x00000000u; // 800A3544
  c->lr=0x800A354Cu; f_8029F698(c); // 800A3548
  c->r[0]=R32(c->r[27]+0x000000C0u); // 800A354C
  cmps(c,0,(int32_t)c->r[0],0); // 800A3550
  if (!crb(c,2)) { goto L_800A3648; } // 800A3554
  c->lr=0x800A355Cu; f_800A37D0(c); // 800A3558
  c->r[0]=R32(c->r[3]+0x00000028u); // 800A355C
  cmps(c,0,(int32_t)c->r[0],0); // 800A3560
  if (crb(c,2)) { goto L_800A3588; } // 800A3564
  c->r[3]=c->r[0]|c->r[0]; // 800A3568
  c->r[4]=0u+0x000000A8u; // 800A356C
  c->r[12]=R32(c->r[3]+0x00000000u); // 800A3570
  c->r[12]=R32(c->r[12]+0x00000008u); // 800A3574
  c->ctr=c->r[12]; // 800A3578
  if (true) { c->lr=0x800A3580u; dispatch(c,c->ctr); } // 800A357C
  c->r[28]=c->r[3]|c->r[3]; // 800A3580
  goto L_800A3598; // 800A3584
L_800A3588:;
  c->r[4]=0u+0x000000A8u; // 800A3588
  c->r[3]=c->r[3]+0x00000018u; // 800A358C
  c->lr=0x800A3594u; f_803C4D08(c); // 800A3590
  c->r[28]=c->r[3]|c->r[3]; // 800A3594
L_800A3598:;
  cmps(c,0,(int32_t)c->r[28],0); // 800A3598
  if (crb(c,2)) { goto L_800A3644; } // 800A359C
  c->r[3]=0u+0x806D0000u; // 800A35A0
  c->r[8]=0u+0x806E0000u; // 800A35A4
  c->r[3]=c->r[3]+0x00005CF4u; // 800A35A8
  W32(c->r[28]+0x00000000u,c->r[3]); // 800A35AC
  c->r[0]=0u+0x00000000u; // 800A35B0
  c->r[29]=0u+0x800A0000u; // 800A35B4
  W32(c->r[28]+0x00000010u,c->r[0]); // 800A35B8
  c->r[30]=0u+0x800A0000u; // 800A35BC
  c->r[9]=c->r[28]+0x00000010u; // 800A35C0
  c->r[8]=c->r[8]+0x00006A60u; // 800A35C4
  W32(c->r[28]+0x00000014u,c->r[0]); // 800A35C8
  c->r[3]=c->r[28]+0x00000080u; // 800A35CC
  c->r[4]=c->r[29]+0x0000372Cu; // 800A35D0
  c->r[5]=c->r[30]+0x0000373Cu; // 800A35D4
  W32(c->r[28]+0x0000000Cu,c->r[0]); // 800A35D8
  c->r[6]=0u+0x00000008u; // 800A35DC
  c->r[7]=0u+0x00000002u; // 800A35E0
  W32(c->r[28]+0x00000010u,c->r[9]); // 800A35E4
  W32(c->r[28]+0x00000014u,c->r[9]); // 800A35E8
  W32(c->r[31]+0x0000003Cu,c->r[1]); // 800A35EC
  W32(c->r[28]+0x00000000u,c->r[8]); // 800A35F0
  c->lr=0x800A35F8u; f_803A9830(c); // 800A35F4
  c->r[3]=c->r[28]+0x00000090u; // 800A35F8
  c->r[4]=c->r[29]+0x0000372Cu; // 800A35FC
  c->r[5]=c->r[30]+0x0000373Cu; // 800A3600
  c->r[6]=0u+0x00000008u; // 800A3604
  c->r[7]=0u+0x00000002u; // 800A3608
  c->lr=0x800A3610u; f_803A9830(c); // 800A360C
  c->r[3]=c->r[28]|c->r[28]; // 800A3610
  c->lr=0x800A3618u; f_8020ED84(c); // 800A3614
  c->r[4]=0u+0x806D0000u; // 800A3618
  c->r[3]=c->r[28]|c->r[28]; // 800A361C
  c->r[4]=c->r[4]+0x00005CB0u; // 800A3620
  W32(c->r[28]+0x00000000u,c->r[4]); // 800A3624
  c->r[4]=0u+0x00000000u; // 800A3628
  c->lr=0x800A3630u; f_802DF8F0(c); // 800A362C
  goto L_800A3644; // 800A3630
  c->r[3]=0u+0x00000000u; // 800A3634
  c->r[4]=0u+0x00000000u; // 800A3638
  c->r[5]=0u+0x00000000u; // 800A363C
  c->lr=0x800A3644u; f_803ABBF0(c); // 800A3640
L_800A3644:;
  W32(c->r[27]+0x000000C0u,c->r[28]); // 800A3644
L_800A3648:;
  c->r[30]=0u+0x00000000u; // 800A3648
  W8(c->r[31]+0x00000010u,c->r[30]); // 800A364C
  c->r[3]=c->r[31]+0x00000010u; // 800A3650
  c->lr=0x800A3658u; f_80046280(c); // 800A3654
  c->lr=0x800A365Cu; f_8029F200(c); // 800A3658
  c->r[0]=0u+0x00000001u; // 800A365C
  W32(c->r[27]+0x000000B4u,c->r[0]); // 800A3660
  c->r[3]=c->r[31]+0x0000000Cu; // 800A3664
  W8(c->r[31]+0x0000000Cu,c->r[30]); // 800A3668
  c->lr=0x800A3670u; f_80046D50(c); // 800A366C
  c->r[4]=0u+0x00000000u; // 800A3670
  c->lr=0x800A3678u; f_8008CB30(c); // 800A3674
  W8(c->r[31]+0x00000008u,c->r[30]); // 800A3678
  c->r[3]=c->r[31]+0x00000008u; // 800A367C
  c->lr=0x800A3684u; f_800474F4(c); // 800A3680
  c->r[4]=0u+0x80690000u; // 800A3684
  {uint32_t ea=c->r[2]+0xFFFF98F0u; c->f[1]=c->ps1[1]=RF32(ea);} // 800A3688
  c->r[4]=c->r[4]+0xFFFFDDC0u; // 800A368C
  c->r[5]=0u+0x0000005Au; // 800A3690
  c->r[4]=c->r[4]+0x0000004Fu; // 800A3694
  c->r[6]=0u+0x00000000u; // 800A3698
  c->lr=0x800A36A0u; f_8004C390(c); // 800A369C
  c->lr=0x800A36A4u; f_80323304(c); // 800A36A0
  {uint32_t ea=c->r[2]+0xFFFF98F8u; c->f[1]=c->ps1[1]=RF32(ea);} // 800A36A4
  c->r[4]=0u+0x00000000u; // 800A36A8
  c->r[5]=0u+0x00000001u; // 800A36AC
  c->r[3]=c->r[3]+0x000006B4u; // 800A36B0
  c->f[2]=c->f[1]; // 800A36B4
  c->f[3]=c->f[1]; // 800A36B8
  c->f[4]=c->f[1]; // 800A36BC
  c->lr=0x800A36C4u; f_802A0888(c); // 800A36C0
  c->r[10]=c->r[31]|c->r[31]; // 800A36C4
  c->r[11]=c->r[10]+0x00000060u; // 800A36C8
  c->lr=0x800A36D0u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800A36CC
  c->r[10]=R32(c->r[1]+0x00000000u); // 800A36D0
  c->r[0]=R32(c->r[10]+0x00000004u); // 800A36D4
  c->r[1]=c->r[10]|c->r[10]; // 800A36D8
  c->lr=c->r[0]; // 800A36DC
  return; // 800A36E0
}

// dtor_800A36E4
void f_800A36E4(Ctx* __restrict c) {
  return; // 800A36E4
}

// dtor_800A36E8
void f_800A36E8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800A36E8
  c->r[0]=c->lr; // 800A36EC
  cmps(c,0,(int32_t)c->r[3],0); // 800A36F0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800A36F4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800A36F8
  c->r[31]=c->r[3]|c->r[3]; // 800A36FC
  if (crb(c,2)) { goto L_800A3714; } // 800A3700
  c->r[3]=addc(c,c->r[3],0x0000000Cu,0); cr0(c,c->r[3]); // 800A3704
  if (crb(c,2)) { goto L_800A3714; } // 800A3708
  c->r[4]=0u+0x00000000u; // 800A370C
  c->lr=0x800A3714u; f_80507DCC(c); // 800A3710
L_800A3714:;
  c->r[3]=c->r[31]|c->r[31]; // 800A3714
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800A3718
  c->r[0]=R32(c->r[1]+0x00000014u); // 800A371C
  c->lr=c->r[0]; // 800A3720
  c->r[1]=c->r[1]+0x00000010u; // 800A3724
  return; // 800A3728
}

// fn_800A372C
void f_800A372C(Ctx* __restrict c) {
  trace_call(0x800A372Cu);
  c->r[0]=0u+0xFFFFFFFFu; // 800A372C
  W32(c->r[3]+0x00000000u,c->r[0]); // 800A3730
  W32(c->r[3]+0x00000004u,c->r[0]); // 800A3734
  return; // 800A3738
}

// dtor_800A373C
void f_800A373C(Ctx* __restrict c) {
  cmps(c,0,(int32_t)c->r[3],0); // 800A373C
  if (crb(c,2)) return; // 800A3740
  c->r[0]=0u+0xFFFFFFFFu; // 800A3744
  W32(c->r[3]+0x00000000u,c->r[0]); // 800A3748
  W32(c->r[3]+0x00000004u,c->r[0]); // 800A374C
  return; // 800A3750
}

// dtor_800A3754
void f_800A3754(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800A3754
  c->r[0]=c->lr; // 800A3758
  cmps(c,0,(int32_t)c->r[3],0); // 800A375C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800A3760
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800A3764
  c->r[30]=c->r[3]|c->r[3]; // 800A3768
  if (crb(c,2)) { goto L_800A37B8; } // 800A376C
  c->r[4]=0u+0x806E0000u; // 800A3770
  c->r[4]=c->r[4]+0x00006A60u; // 800A3774
  W32(c->r[3]+0x00000000u,c->r[4]); // 800A3778
  c->lr=0x800A3780u; f_8020ED84(c); // 800A377C
  c->r[31]=0u+0x800A0000u; // 800A3780
  c->r[3]=c->r[30]+0x00000090u; // 800A3784
  c->r[4]=c->r[31]+0x0000373Cu; // 800A3788
  c->r[5]=0u+0x00000008u; // 800A378C
  c->r[6]=0u+0x00000002u; // 800A3790
  c->lr=0x800A3798u; f_803A9928(c); // 800A3794
  c->r[3]=c->r[30]+0x00000080u; // 800A3798
  c->r[4]=c->r[31]+0x0000373Cu; // 800A379C
  c->r[5]=0u+0x00000008u; // 800A37A0
  c->r[6]=0u+0x00000002u; // 800A37A4
  c->lr=0x800A37ACu; f_803A9928(c); // 800A37A8
  c->r[3]=c->r[30]|c->r[30]; // 800A37AC
  c->r[4]=0u+0x00000000u; // 800A37B0
  c->lr=0x800A37B8u; f_800A36E8(c); // 800A37B4
L_800A37B8:;
  c->r[3]=c->r[30]|c->r[30]; // 800A37B8
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800A37BC
  c->r[0]=R32(c->r[1]+0x00000014u); // 800A37C0
  c->lr=c->r[0]; // 800A37C4
  c->r[1]=c->r[1]+0x00000010u; // 800A37C8
  return; // 800A37CC
}

// fn_800A37D0
void f_800A37D0(Ctx* __restrict c) {
  trace_call(0x800A37D0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800A37D0
  c->r[0]=c->lr; // 800A37D4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800A37D8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800A37DC
  c->r[0]=R8(c->r[13]+0xFFFFC078u); // 800A37E0
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800A37E4
  if (!crb(c,2)) { goto L_800A3830; } // 800A37E8
  c->r[31]=0u+0x80750000u; // 800A37EC
  c->r[3]=c->r[31]+0xFFFFB6B0u; // 800A37F0
  c->lr=0x800A37F8u; f_800506C0(c); // 800A37F4
  c->r[3]=c->r[31]+0xFFFFB6B0u; // 800A37F8
  c->r[0]=0u+0x00000000u; // 800A37FC
  c->r[4]=0u+0x80040000u; // 800A3800
  c->r[5]=0u+0x80750000u; // 800A3804
  W32(c->r[3]+0x00000008u,c->r[3]); // 800A3808
  c->r[4]=c->r[4]+0x000055F4u; // 800A380C
  c->r[5]=c->r[5]+0xFFFFB680u; // 800A3810
  W8(c->r[3]+0x0000000Cu,c->r[0]); // 800A3814
  W32(c->r[3]+0x00000014u,c->r[0]); // 800A3818
  W32(c->r[3]+0x00000010u,c->r[0]); // 800A381C
  W32(c->r[3]+0x00000028u,c->r[0]); // 800A3820
  c->lr=0x800A3828u; f_803A92B8(c); // 800A3824
  c->r[0]=0u+0x00000001u; // 800A3828
  W8(c->r[13]+0xFFFFC078u,c->r[0]); // 800A382C
L_800A3830:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800A3830
  c->r[3]=0u+0x80750000u; // 800A3834
  c->r[0]=R32(c->r[1]+0x00000014u); // 800A3838
  c->r[3]=c->r[3]+0xFFFFB6B0u; // 800A383C
  c->lr=c->r[0]; // 800A3840
  c->r[1]=c->r[1]+0x00000010u; // 800A3844
  return; // 800A3848
}

// fn_800A384C
void f_800A384C(Ctx* __restrict c) {
  trace_call(0x800A384Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800A384C
  c->r[0]=c->lr; // 800A3850
  W32(c->r[1]+0x00000034u,c->r[0]); // 800A3854
  {uint32_t ea=c->r[1]+0x00000028u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800A3858
  c->r[31]=0u+0x00000000u; // 800A385C
  c->r[30]=c->r[3]|c->r[3]; // 800A3860
  c->r[3]=c->r[1]+0x0000001Cu; // 800A3864
  W8(c->r[1]+0x0000001Cu,c->r[31]); // 800A3868
  c->lr=0x800A3870u; f_80046280(c); // 800A386C
  c->r[4]=0u+0x00000005u; // 800A3870
  c->r[5]=0u+0x00000000u; // 800A3874
  c->lr=0x800A387Cu; f_8029F8EC(c); // 800A3878
  W8(c->r[1]+0x00000018u,c->r[31]); // 800A387C
  c->r[3]=c->r[1]+0x00000018u; // 800A3880
  c->lr=0x800A3888u; f_80046280(c); // 800A3884
  c->r[4]=0u+0x00000001u; // 800A3888
  c->r[5]=0u+0x00000000u; // 800A388C
  c->lr=0x800A3894u; f_8029F8EC(c); // 800A3890
  W8(c->r[1]+0x00000014u,c->r[31]); // 800A3894
  c->r[3]=c->r[1]+0x00000014u; // 800A3898
  c->lr=0x800A38A0u; f_80046280(c); // 800A389C
  c->r[4]=0u+0x00000007u; // 800A38A0
  c->r[5]=0u+0x00000000u; // 800A38A4
  c->lr=0x800A38ACu; f_8029F8EC(c); // 800A38A8
  W8(c->r[1]+0x00000010u,c->r[31]); // 800A38AC
  c->r[3]=c->r[1]+0x00000010u; // 800A38B0
  c->lr=0x800A38B8u; f_80046280(c); // 800A38B4
  c->r[4]=0u+0x00000006u; // 800A38B8
  c->r[5]=0u+0x00000000u; // 800A38BC
  c->lr=0x800A38C4u; f_8029F8EC(c); // 800A38C0
  W8(c->r[1]+0x0000000Cu,c->r[31]); // 800A38C4
  c->r[3]=c->r[1]+0x0000000Cu; // 800A38C8
  c->lr=0x800A38D0u; f_80046280(c); // 800A38CC
  c->r[4]=0u+0x00000009u; // 800A38D0
  c->r[5]=0u+0x00000000u; // 800A38D4
  c->lr=0x800A38DCu; f_8029F8EC(c); // 800A38D8
  c->r[3]=R32(c->r[30]+0x000000C0u); // 800A38DC
  cmps(c,0,(int32_t)c->r[3],0); // 800A38E0
  if (crb(c,2)) { goto L_800A38FC; } // 800A38E4
  c->lr=0x800A38ECu; f_802DF9A4(c); // 800A38E8
  c->lr=0x800A38F0u; f_800A37D0(c); // 800A38EC
  c->r[3]=R32(c->r[30]+0x000000C0u); // 800A38F0
  c->lr=0x800A38F8u; f_8005328C(c); // 800A38F4
  W32(c->r[30]+0x000000C0u,c->r[31]); // 800A38F8
L_800A38FC:;
  c->r[0]=0u+0x00000000u; // 800A38FC
  W8(c->r[1]+0x00000008u,c->r[0]); // 800A3900
  c->r[3]=c->r[1]+0x00000008u; // 800A3904
  c->lr=0x800A390Cu; f_80046280(c); // 800A3908
  c->lr=0x800A3910u; f_8029F200(c); // 800A390C
  c->r[3]=c->r[30]|c->r[30]; // 800A3910
  c->lr=0x800A3918u; f_800A3D10(c); // 800A3914
  {uint32_t ea=c->r[1]+0x00000028u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800A3918
  c->r[0]=R32(c->r[1]+0x00000034u); // 800A391C
  c->lr=c->r[0]; // 800A3920
  c->r[1]=c->r[1]+0x00000030u; // 800A3924
  return; // 800A3928
}

// fn_800A392C
void f_800A392C(Ctx* __restrict c) {
  trace_call(0x800A392Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800A392C
  c->r[0]=c->lr; // 800A3930
  W32(c->r[1]+0x00000024u,c->r[0]); // 800A3934
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800A3938
  c->r[31]=c->r[3]|c->r[3]; // 800A393C
  c->r[0]=R32(c->r[3]+0x000000B4u); // 800A3940
  cmps(c,0,(int32_t)c->r[0],1); // 800A3944
  if (!crb(c,2)) { goto L_800A39A8; } // 800A3948
  c->lr=0x800A3950u; f_800A39C8(c); // 800A394C
  cmps(c,0,(int32_t)c->r[3],0); // 800A3950
  if (crb(c,2)) { goto L_800A39A8; } // 800A3954
  c->r[0]=R8(c->r[31]+0x000000BCu); // 800A3958
  cmps(c,0,(int32_t)c->r[0],0); // 800A395C
  if (!crb(c,2)) { goto L_800A3988; } // 800A3960
  c->r[0]=0u+0x00000000u; // 800A3964
  W8(c->r[1]+0x0000000Cu,c->r[0]); // 800A3968
  c->r[3]=c->r[1]+0x0000000Cu; // 800A396C
  c->lr=0x800A3974u; f_80046D50(c); // 800A3970
  c->r[4]=0u+0x00000001u; // 800A3974
  c->lr=0x800A397Cu; f_8008CB30(c); // 800A3978
  c->r[0]=0u+0x00000002u; // 800A397C
  W32(c->r[31]+0x000000B4u,c->r[0]); // 800A3980
  goto L_800A39A8; // 800A3984
L_800A3988:;
  c->r[0]=0u+0x00000000u; // 800A3988
  W8(c->r[1]+0x00000008u,c->r[0]); // 800A398C
  c->r[3]=c->r[1]+0x00000008u; // 800A3990
  c->lr=0x800A3998u; f_80046D50(c); // 800A3994
  c->r[4]=0u+0x00000000u; // 800A3998
  c->lr=0x800A39A0u; f_8008CB30(c); // 800A399C
  c->r[0]=0u+0x00000002u; // 800A39A0
  W32(c->r[31]+0x000000B4u,c->r[0]); // 800A39A4
L_800A39A8:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 800A39A8
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800A39AC
  c->lr=c->r[0]; // 800A39B0
  c->r[1]=c->r[1]+0x00000020u; // 800A39B4
  return; // 800A39B8
}

// fn_800A39BC
void f_800A39BC(Ctx* __restrict c) {
  trace_call(0x800A39BCu);
  return; // 800A39BC
}

// fn_800A39C0
void f_800A39C0(Ctx* __restrict c) {
  trace_call(0x800A39C0u);
  c->r[3]=R32(c->r[3]+0x000000B4u); // 800A39C0
  return; // 800A39C4
}

// fn_800A39C8
void f_800A39C8(Ctx* __restrict c) {
  trace_call(0x800A39C8u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800A39C8
  c->r[0]=c->lr; // 800A39CC
  W32(c->r[1]+0x00000044u,c->r[0]); // 800A39D0
  c->r[11]=c->r[1]+0x00000040u; // 800A39D4
  c->lr=0x800A39DCu; { W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800A39D8
  c->r[0]=R32(c->r[3]+0x000000B8u); // 800A39DC
  c->r[30]=c->r[3]|c->r[3]; // 800A39E0
  c->r[31]=0u+0x00000000u; // 800A39E4
  cmps(c,0,(int32_t)c->r[0],0); // 800A39E8
  if (crb(c,2)) { goto L_800A3A0C; } // 800A39EC
  cmps(c,0,(int32_t)c->r[0],1); // 800A39F0
  if (crb(c,2)) { goto L_800A3A7C; } // 800A39F4
  cmps(c,0,(int32_t)c->r[0],2); // 800A39F8
  if (crb(c,2)) { goto L_800A3CB0; } // 800A39FC
  cmps(c,0,(int32_t)c->r[0],3); // 800A3A00
  if (crb(c,2)) { goto L_800A3CE0; } // 800A3A04
  goto L_800A3CF4; // 800A3A08
L_800A3A0C:;
  c->lr=0x800A3A10u; f_80323304(c); // 800A3A0C
  c->r[0]=R8(c->r[3]+0x000006D8u); // 800A3A10
  cmps(c,0,(int32_t)c->r[0],0); // 800A3A14
  if (!crb(c,2)) { goto L_800A3CF4; } // 800A3A18
  c->r[0]=0u+0x00000000u; // 800A3A1C
  W8(c->r[1]+0x00000024u,c->r[0]); // 800A3A20
  c->r[3]=c->r[1]+0x00000024u; // 800A3A24
  c->lr=0x800A3A2Cu; f_800474F4(c); // 800A3A28
  c->r[4]=0u+0x80690000u; // 800A3A2C
  c->r[4]=c->r[4]+0xFFFFDDC0u; // 800A3A30
  c->r[4]=c->r[4]+0x00000056u; // 800A3A34
  c->lr=0x800A3A3Cu; f_8004BF58(c); // 800A3A38
  cmps(c,0,(int32_t)c->r[3],0); // 800A3A3C
  if (crb(c,2)) { goto L_800A3CF4; } // 800A3A40
  {uint32_t ea=c->r[2]+0xFFFF98F8u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A3A44
  c->r[0]=0u+0x00000001u; // 800A3A48
  {uint32_t ea=c->r[30]+0x000000B0u; WF32(ea,c->f[0]);} // 800A3A4C
  W32(c->r[30]+0x000000B8u,c->r[0]); // 800A3A50
  c->lr=0x800A3A58u; f_80323304(c); // 800A3A54
  {uint32_t ea=c->r[2]+0xFFFF98F8u; c->f[1]=c->ps1[1]=RF32(ea);} // 800A3A58
  c->r[4]=0u+0x00000001u; // 800A3A5C
  {uint32_t ea=c->r[2]+0xFFFF98FCu; c->f[4]=c->ps1[4]=RF32(ea);} // 800A3A60
  c->r[5]=0u+0x00000001u; // 800A3A64
  c->f[2]=c->f[1]; // 800A3A68
  c->r[3]=c->r[3]+0x000006B4u; // 800A3A6C
  c->f[3]=c->f[1]; // 800A3A70
  c->lr=0x800A3A78u; f_802A0888(c); // 800A3A74
  goto L_800A3CF4; // 800A3A78
L_800A3A7C:;
  c->r[0]=R8(c->r[13]+0xFFFFBB9Bu); // 800A3A7C
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800A3A80
  if (!crb(c,2)) { goto L_800A3AC0; } // 800A3A84
  c->r[29]=0u+0x80730000u; // 800A3A88
  c->r[3]=c->r[29]+0x00006D10u; // 800A3A8C
  c->lr=0x800A3A94u; f_802D8298(c); // 800A3A90
  c->r[3]=0u+0x806D0000u; // 800A3A94
  c->r[4]=0u+0x80050000u; // 800A3A98
  c->r[3]=c->r[3]+0xFFFFC220u; // 800A3A9C
  c->r[5]=0u+0x80750000u; // 800A3AA0
  W32(c->r[29]+0x00006D10u,c->r[3]); // 800A3AA4
  c->r[3]=c->r[29]+0x00006D10u; // 800A3AA8
  c->r[4]=c->r[4]+0xFFFF9D40u; // 800A3AAC
  c->r[5]=c->r[5]+0xFFFFB6A4u; // 800A3AB0
  c->lr=0x800A3AB8u; f_803A92B8(c); // 800A3AB4
  c->r[0]=0u+0x00000001u; // 800A3AB8
  W8(c->r[13]+0xFFFFBB9Bu,c->r[0]); // 800A3ABC
L_800A3AC0:;
  c->r[3]=0u+0x80730000u; // 800A3AC0
  {uint32_t ea=c->r[30]+0x000000B0u; c->f[1]=c->ps1[1]=RF32(ea);} // 800A3AC4
  c->r[3]=c->r[3]+0x00006D10u; // 800A3AC8
  {uint32_t ea=c->r[2]+0xFFFF9900u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A3ACC
  {uint32_t ea=c->r[3]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 800A3AD0
  c->f[1]=c->ps1[1]=S(c->f[1]+c->f[2]); // 800A3AD4
  {uint32_t ea=c->r[30]+0x000000B0u; WF32(ea,c->f[1]);} // 800A3AD8
  fcmp(c,0,c->f[1],c->f[0]); // 800A3ADC
  if (!crb(c,1)) { goto L_800A3B34; } // 800A3AE0
  c->r[0]=0u+0x00000001u; // 800A3AE4
  W8(c->r[30]+0x000000BCu,c->r[0]); // 800A3AE8
  c->r[0]=0u+0x00000000u; // 800A3AEC
  c->r[3]=c->r[1]+0x00000020u; // 800A3AF0
  W8(c->r[1]+0x00000020u,c->r[0]); // 800A3AF4
  c->lr=0x800A3AFCu; f_800474F4(c); // 800A3AF8
  c->r[4]=0u+0x0000005Au; // 800A3AFC
  c->lr=0x800A3B04u; f_8004C4C0(c); // 800A3B00
  c->lr=0x800A3B08u; f_80323304(c); // 800A3B04
  {uint32_t ea=c->r[2]+0xFFFF98F8u; c->f[1]=c->ps1[1]=RF32(ea);} // 800A3B08
  c->r[4]=0u+0x00000000u; // 800A3B0C
  {uint32_t ea=c->r[2]+0xFFFF98FCu; c->f[4]=c->ps1[4]=RF32(ea);} // 800A3B10
  c->r[5]=0u+0x00000001u; // 800A3B14
  c->f[2]=c->f[1]; // 800A3B18
  c->r[3]=c->r[3]+0x000006B4u; // 800A3B1C
  c->f[3]=c->f[1]; // 800A3B20
  c->lr=0x800A3B28u; f_802A0888(c); // 800A3B24
  c->r[0]=0u+0x00000003u; // 800A3B28
  W32(c->r[30]+0x000000B8u,c->r[0]); // 800A3B2C
  goto L_800A3CF4; // 800A3B30
L_800A3B34:;
  c->r[0]=R8(c->r[13]+0xFFFFBB99u); // 800A3B34
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800A3B38
  if (!crb(c,2)) { goto L_800A3B80; } // 800A3B3C
  c->r[29]=0u+0x80730000u; // 800A3B40
  c->r[3]=c->r[29]+0x000069C0u; // 800A3B44
  c->lr=0x800A3B4Cu; f_8029D954(c); // 800A3B48
  c->r[6]=0u+0x806D0000u; // 800A3B4C
  c->r[4]=0u+0x80050000u; // 800A3B50
  c->r[6]=c->r[6]+0xFFFFC240u; // 800A3B54
  c->r[3]=c->r[29]+0x000069C0u; // 800A3B58
  c->r[0]=c->r[6]+0x00000008u; // 800A3B5C
  c->r[5]=0u+0x80750000u; // 800A3B60
  W32(c->r[3]+0x00000010u,c->r[6]); // 800A3B64
  c->r[4]=c->r[4]+0xFFFF9DB8u; // 800A3B68
  c->r[5]=c->r[5]+0xFFFFB698u; // 800A3B6C
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 800A3B70
  c->lr=0x800A3B78u; f_803A92B8(c); // 800A3B74
  c->r[0]=0u+0x00000001u; // 800A3B78
  W8(c->r[13]+0xFFFFBB99u,c->r[0]); // 800A3B7C
L_800A3B80:;
  c->r[5]=0u+0x80730000u; // 800A3B80
  c->r[3]=0u+0x80740000u; // 800A3B84
  c->r[5]=c->r[5]+0x000069C0u; // 800A3B88
  c->r[4]=0u+0x00000000u; // 800A3B8C
  c->r[5]=R32(c->r[5]+0x00000014u); // 800A3B90
  c->r[3]=c->r[3]+0x00004C10u; // 800A3B94
  c->r[29]=R32(c->r[5]+0x0000000Cu); // 800A3B98
  c->lr=0x800A3BA0u; f_80052BC8(c); // 800A3B9C
  c->r[0]=c->r[29]&c->r[3]; cr0(c,c->r[0]); // 800A3BA0
  if (crb(c,2)) { goto L_800A3CF4; } // 800A3BA4
  c->r[0]=0u+0x00000002u; // 800A3BA8
  W32(c->r[30]+0x000000B8u,c->r[0]); // 800A3BAC
  c->r[29]=0u+0x00000000u; // 800A3BB0
  c->r[3]=c->r[1]+0x0000001Cu; // 800A3BB4
  W8(c->r[1]+0x0000001Cu,c->r[29]); // 800A3BB8
  c->lr=0x800A3BC0u; f_800474F4(c); // 800A3BBC
  c->r[30]=0u+0x80690000u; // 800A3BC0
  {uint32_t ea=c->r[2]+0xFFFF98F0u; c->f[1]=c->ps1[1]=RF32(ea);} // 800A3BC4
  c->r[30]=c->r[30]+0xFFFFDDC0u; // 800A3BC8
  c->r[5]=0u+0x00000000u; // 800A3BCC
  c->r[4]=c->r[30]+0x0000005Fu; // 800A3BD0
  c->r[6]=0u+0xFFFFFFFFu; // 800A3BD4
  c->r[7]=0u+0x00000000u; // 800A3BD8
  c->r[8]=0u+0x00000000u; // 800A3BDC
  c->r[9]=0u+0x00000001u; // 800A3BE0
  c->lr=0x800A3BE8u; f_8004BFE0(c); // 800A3BE4
  W8(c->r[1]+0x00000018u,c->r[29]); // 800A3BE8
  c->r[3]=c->r[1]+0x00000018u; // 800A3BEC
  c->lr=0x800A3BF4u; f_800474F4(c); // 800A3BF0
  {uint32_t ea=c->r[2]+0xFFFF98F0u; c->f[1]=c->ps1[1]=RF32(ea);} // 800A3BF4
  c->r[4]=c->r[30]+0x00000066u; // 800A3BF8
  c->r[5]=0u+0x00000000u; // 800A3BFC
  c->r[6]=0u+0x00000000u; // 800A3C00
  c->r[7]=0u+0x00000000u; // 800A3C04
  c->r[8]=0u+0x00000000u; // 800A3C08
  c->r[9]=0u+0x00000001u; // 800A3C0C
  c->lr=0x800A3C14u; f_8004BFE0(c); // 800A3C10
  W8(c->r[1]+0x00000014u,c->r[29]); // 800A3C14
  c->r[3]=c->r[1]+0x00000014u; // 800A3C18
  c->lr=0x800A3C20u; f_8004DA9C(c); // 800A3C1C
  c->lr=0x800A3C24u; f_802DC804(c); // 800A3C20
  cmps(c,0,(int32_t)c->r[3],0); // 800A3C24
  if (crb(c,2)) { goto L_800A3C44; } // 800A3C28
  W8(c->r[1]+0x00000010u,c->r[29]); // 800A3C2C
  c->r[3]=c->r[1]+0x00000010u; // 800A3C30
  c->lr=0x800A3C38u; f_8004DA9C(c); // 800A3C34
  c->lr=0x800A3C3Cu; f_802DC804(c); // 800A3C38
  cmps(c,0,(int32_t)c->r[3],10); // 800A3C3C
  if (!crb(c,2)) { goto L_800A3C80; } // 800A3C40
L_800A3C44:;
  c->r[0]=0u+0x00000000u; // 800A3C44
  W8(c->r[1]+0x0000000Cu,c->r[0]); // 800A3C48
  c->r[3]=c->r[1]+0x0000000Cu; // 800A3C4C
  c->lr=0x800A3C54u; f_800474F4(c); // 800A3C50
  c->r[4]=0u+0x80690000u; // 800A3C54
  {uint32_t ea=c->r[2]+0xFFFF98F0u; c->f[1]=c->ps1[1]=RF32(ea);} // 800A3C58
  c->r[4]=c->r[4]+0xFFFFDDC0u; // 800A3C5C
  c->r[5]=0u+0x00000000u; // 800A3C60
  c->r[4]=c->r[4]+0x0000006Eu; // 800A3C64
  c->r[6]=0u+0xFFFFFFFFu; // 800A3C68
  c->r[7]=0u+0x00000000u; // 800A3C6C
  c->r[8]=0u+0x00000000u; // 800A3C70
  c->r[9]=0u+0x00000001u; // 800A3C74
  c->lr=0x800A3C7Cu; f_8004BFE0(c); // 800A3C78
  goto L_800A3CF4; // 800A3C7C
L_800A3C80:;
  W8(c->r[1]+0x00000008u,c->r[29]); // 800A3C80
  c->r[3]=c->r[1]+0x00000008u; // 800A3C84
  c->lr=0x800A3C8Cu; f_800474F4(c); // 800A3C88
  {uint32_t ea=c->r[2]+0xFFFF98F0u; c->f[1]=c->ps1[1]=RF32(ea);} // 800A3C8C
  c->r[4]=c->r[30]+0x00000075u; // 800A3C90
  c->r[5]=0u+0x00000000u; // 800A3C94
  c->r[6]=0u+0xFFFFFFFFu; // 800A3C98
  c->r[7]=0u+0x00000000u; // 800A3C9C
  c->r[8]=0u+0x00000000u; // 800A3CA0
  c->r[9]=0u+0x00000001u; // 800A3CA4
  c->lr=0x800A3CACu; f_8004BFE0(c); // 800A3CA8
  goto L_800A3CF4; // 800A3CAC
L_800A3CB0:;
  c->lr=0x800A3CB4u; f_80323304(c); // 800A3CB0
  {uint32_t ea=c->r[2]+0xFFFF98F8u; c->f[1]=c->ps1[1]=RF32(ea);} // 800A3CB4
  c->r[4]=0u+0x00000000u; // 800A3CB8
  {uint32_t ea=c->r[2]+0xFFFF98FCu; c->f[4]=c->ps1[4]=RF32(ea);} // 800A3CBC
  c->r[5]=0u+0x00000001u; // 800A3CC0
  c->f[2]=c->f[1]; // 800A3CC4
  c->r[3]=c->r[3]+0x000006B4u; // 800A3CC8
  c->f[3]=c->f[1]; // 800A3CCC
  c->lr=0x800A3CD4u; f_802A0888(c); // 800A3CD0
  c->r[0]=0u+0x00000003u; // 800A3CD4
  W32(c->r[30]+0x000000B8u,c->r[0]); // 800A3CD8
  goto L_800A3CF4; // 800A3CDC
L_800A3CE0:;
  c->lr=0x800A3CE4u; f_80323304(c); // 800A3CE0
  c->r[0]=R8(c->r[3]+0x000006D8u); // 800A3CE4
  cmps(c,0,(int32_t)c->r[0],0); // 800A3CE8
  if (!crb(c,2)) { goto L_800A3CF4; } // 800A3CEC
  c->r[31]=0u+0x00000001u; // 800A3CF0
L_800A3CF4:;
  c->r[11]=c->r[1]+0x00000040u; // 800A3CF4
  c->r[3]=c->r[31]|c->r[31]; // 800A3CF8
  c->lr=0x800A3D00u; { c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800A3CFC
  c->r[0]=R32(c->r[1]+0x00000044u); // 800A3D00
  c->lr=c->r[0]; // 800A3D04
  c->r[1]=c->r[1]+0x00000040u; // 800A3D08
  return; // 800A3D0C
}

// fn_800A3D10
void f_800A3D10(Ctx* __restrict c) {
  trace_call(0x800A3D10u);
  {uint32_t ea=c->r[2]+0xFFFF98F8u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A3D10
  c->r[0]=0u+0x00000000u; // 800A3D14
  {uint32_t ea=c->r[3]+0x000000B0u; WF32(ea,c->f[0]);} // 800A3D18
  W32(c->r[3]+0x000000B4u,c->r[0]); // 800A3D1C
  W32(c->r[3]+0x000000B8u,c->r[0]); // 800A3D20
  W8(c->r[3]+0x000000BCu,c->r[0]); // 800A3D24
  return; // 800A3D28
}

// fn_800A3D2C
void f_800A3D2C(Ctx* __restrict c) {
  trace_call(0x800A3D2Cu);
  return; // 800A3D2C
}

// fn_800A3D30
void f_800A3D30(Ctx* __restrict c) {
  trace_call(0x800A3D30u);
  return; // 800A3D30
}

// fn_800A3D34
void f_800A3D34(Ctx* __restrict c) {
  trace_call(0x800A3D34u);
  return; // 800A3D34
}

// fn_800A3D38
void f_800A3D38(Ctx* __restrict c) {
  trace_call(0x800A3D38u);
  c->r[3]=0u+0x00000008u; // 800A3D38
  return; // 800A3D3C
}

// fn_800A3D40
void f_800A3D40(Ctx* __restrict c) {
  trace_call(0x800A3D40u);
  c->r[3]=0u+0x00000000u; // 800A3D40
  return; // 800A3D44
}

// fn_800A3D48
void f_800A3D48(Ctx* __restrict c) {
  trace_call(0x800A3D48u);
  return; // 800A3D48
}

// fn_800A3D4C
void f_800A3D4C(Ctx* __restrict c) {
  trace_call(0x800A3D4Cu);
  return; // 800A3D4C
}

// fn_800A3D50
void f_800A3D50(Ctx* __restrict c) {
  trace_call(0x800A3D50u);
  return; // 800A3D50
}

// fn_800A3D54
void f_800A3D54(Ctx* __restrict c) {
  trace_call(0x800A3D54u);
  return; // 800A3D54
}

// fn_800A3D58
void f_800A3D58(Ctx* __restrict c) {
  trace_call(0x800A3D58u);
  return; // 800A3D58
}

// fn_800A3D5C
void f_800A3D5C(Ctx* __restrict c) {
  trace_call(0x800A3D5Cu);
  return; // 800A3D5C
}

// fn_800A3D60
void f_800A3D60(Ctx* __restrict c) {
  trace_call(0x800A3D60u);
  c->r[3]=0u+0xFFFFFFFFu; // 800A3D60
  return; // 800A3D64
}

// fn_800A3D68
void f_800A3D68(Ctx* __restrict c) {
  trace_call(0x800A3D68u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800A3D68
  c->r[0]=c->lr; // 800A3D6C
  cmps(c,0,(int32_t)c->r[3],0); // 800A3D70
  W32(c->r[1]+0x00000014u,c->r[0]); // 800A3D74
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800A3D78
  c->r[31]=c->r[3]|c->r[3]; // 800A3D7C
  if (crb(c,2)) { goto L_800A3D8C; } // 800A3D80
  c->r[4]=0u+0x00000000u; // 800A3D84
  c->lr=0x800A3D8Cu; f_802E1444(c); // 800A3D88
L_800A3D8C:;
  c->r[3]=c->r[31]|c->r[31]; // 800A3D8C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800A3D90
  c->r[0]=R32(c->r[1]+0x00000014u); // 800A3D94
  c->lr=c->r[0]; // 800A3D98
  c->r[1]=c->r[1]+0x00000010u; // 800A3D9C
  return; // 800A3DA0
}

// fn_800A3DA4
void f_800A3DA4(Ctx* __restrict c) {
  trace_call(0x800A3DA4u);
  return; // 800A3DA4
}

// fn_800A3DA8
void f_800A3DA8(Ctx* __restrict c) {
  trace_call(0x800A3DA8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800A3DA8
  c->r[0]=c->lr; // 800A3DAC
  c->r[4]=0u+0x806D0000u; // 800A3DB0
  c->r[7]=0u+0x00000000u; // 800A3DB4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800A3DB8
  c->r[4]=c->r[4]+0x00005D30u; // 800A3DBC
  c->r[6]=0u+0x00000002u; // 800A3DC0
  c->r[5]=0u+0xFFFFFFFFu; // 800A3DC4
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800A3DC8
  c->r[0]=c->r[4]+0x00000028u; // 800A3DCC
  c->r[30]=c->r[3]|c->r[3]; // 800A3DD0
  W32(c->r[3]+0x00000000u,c->r[7]); // 800A3DD4
  W32(c->r[3]+0x00000004u,c->r[6]); // 800A3DD8
  W32(c->r[3]+0x00000010u,c->r[5]); // 800A3DDC
  W32(c->r[3]+0x00000014u,c->r[7]); // 800A3DE0
  W32(c->r[3]+0x00000018u,c->r[7]); // 800A3DE4
  W32(c->r[3]+0x0000001Cu,c->r[7]); // 800A3DE8
  W32(c->r[3]+0x0000000Cu,c->r[7]); // 800A3DEC
  W32(c->r[3]+0x00000020u,c->r[7]); // 800A3DF0
  W32(c->r[3]+0x00000008u,c->r[7]); // 800A3DF4
  W32(c->r[3]+0x000000A4u,c->r[4]); // 800A3DF8
  W32(c->r[3]+0x000000A8u,c->r[0]); // 800A3DFC
  c->r[0]=R8(c->r[13]+0xFFFFBB98u); // 800A3E00
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800A3E04
  if (!crb(c,2)) { goto L_800A3E2C; } // 800A3E08
  c->r[31]=0u+0x80730000u; // 800A3E0C
  c->r[3]=c->r[31]+0x000067B8u; // 800A3E10
  c->lr=0x800A3E18u; f_8029EF58(c); // 800A3E14
  c->r[3]=0u+0x806D0000u; // 800A3E18
  c->r[0]=0u+0x00000001u; // 800A3E1C
  c->r[3]=c->r[3]+0xFFFFC25Cu; // 800A3E20
  W32(c->r[31]+0x000067B8u,c->r[3]); // 800A3E24
  W8(c->r[13]+0xFFFFBB98u,c->r[0]); // 800A3E28
L_800A3E2C:;
  c->r[3]=0u+0x80730000u; // 800A3E2C
  c->r[8]=0u+0x80690000u; // 800A3E30
  c->r[4]=c->r[30]|c->r[30]; // 800A3E34
  c->r[5]=0u+0x00000000u; // 800A3E38
  c->r[3]=c->r[3]+0x000067B8u; // 800A3E3C
  c->r[8]=c->r[8]+0xFFFFDE40u; // 800A3E40
  c->r[6]=0u+0x0000003Fu; // 800A3E44
  c->r[7]=0u+0x0000001Bu; // 800A3E48
  c->lr=0x800A3E50u; f_8029F4EC(c); // 800A3E4C
  c->r[3]=c->r[30]|c->r[30]; // 800A3E50
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800A3E54
  c->r[0]=R32(c->r[1]+0x00000014u); // 800A3E58
  c->lr=c->r[0]; // 800A3E5C
  c->r[1]=c->r[1]+0x00000010u; // 800A3E60
  return; // 800A3E64
}

// fn_800A3E68
void f_800A3E68(Ctx* __restrict c) {
  trace_call(0x800A3E68u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800A3E68
  c->r[0]=c->lr; // 800A3E6C
  W32(c->r[1]+0x00000044u,c->r[0]); // 800A3E70
  c->r[0]=0u+0x00000000u; // 800A3E74
  c->r[3]=c->r[1]+0x00000008u; // 800A3E78
  {uint32_t ea=c->r[1]+0x00000018u; for(int i=22;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800A3E7C
  W8(c->r[1]+0x00000008u,c->r[0]); // 800A3E80
  c->lr=0x800A3E88u; f_800A3FB0(c); // 800A3E84
  c->r[0]=R32(c->r[3]+0x00000000u); // 800A3E88
  c->r[24]=0u+0x80740000u; // 800A3E8C
  c->r[25]=0u+0x806D0000u; // 800A3E90
  W32(c->r[1]+0x00000010u,c->r[0]); // 800A3E94
  c->r[31]=c->r[3]|c->r[3]; // 800A3E98
  c->r[26]=c->r[24]+0xFFFFFF5Cu; // 800A3E9C
  c->r[25]=c->r[25]+0xFFFFCD54u; // 800A3EA0
  c->r[27]=0u+0x80050000u; // 800A3EA4
  c->r[28]=0u+0x80750000u; // 800A3EA8
  c->r[29]=0u+0x00000001u; // 800A3EAC
  goto L_800A3F84; // 800A3EB0
L_800A3EB4:;
  c->r[3]=R32(c->r[1]+0x00000010u); // 800A3EB4
  c->r[3]=R32(c->r[3]+0x00000008u); // 800A3EB8
  c->r[12]=R32(c->r[3]+0x00000010u); // 800A3EBC
  c->r[12]=R32(c->r[12]+0x00000008u); // 800A3EC0
  c->ctr=c->r[12]; // 800A3EC4
  if (true) { c->lr=0x800A3ECCu; dispatch(c,c->ctr); } // 800A3EC8
  c->r[22]=0u+0x00000000u; // 800A3ECC
  goto L_800A3F58; // 800A3ED0
L_800A3ED4:;
  c->r[0]=R8(c->r[13]+0xFFFFBBF0u); // 800A3ED4
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800A3ED8
  if (!crb(c,2)) { goto L_800A3F08; } // 800A3EDC
  c->r[3]=c->r[24]+0xFFFFFF5Cu; // 800A3EE0
  c->lr=0x800A3EE8u; f_800A1FCC(c); // 800A3EE4
  c->r[0]=c->r[25]+0x00000028u; // 800A3EE8
  W32(c->r[26]+0x000000A4u,c->r[25]); // 800A3EEC
  c->r[3]=c->r[26]|c->r[26]; // 800A3EF0
  c->r[4]=c->r[27]+0x000009E8u; // 800A3EF4
  W32(c->r[26]+0x000000A8u,c->r[0]); // 800A3EF8
  c->r[5]=c->r[28]+0xFFFFB6FCu; // 800A3EFC
  c->lr=0x800A3F04u; f_803A92B8(c); // 800A3F00
  W8(c->r[13]+0xFFFFBBF0u,c->r[29]); // 800A3F04
L_800A3F08:;
  c->r[3]=R32(c->r[1]+0x00000010u); // 800A3F08
  c->r[4]=c->r[22]|c->r[22]; // 800A3F0C
  c->r[23]=R32(c->r[3]+0x00000008u); // 800A3F10
  c->r[12]=R32(c->r[23]+0x00000010u); // 800A3F14
  c->r[3]=c->r[23]|c->r[23]; // 800A3F18
  c->r[12]=R32(c->r[12]+0x0000001Cu); // 800A3F1C
  c->ctr=c->r[12]; // 800A3F20
  if (true) { c->lr=0x800A3F28u; dispatch(c,c->ctr); } // 800A3F24
  c->r[12]=R32(c->r[23]+0x00000010u); // 800A3F28
  c->r[30]=c->r[3]|c->r[3]; // 800A3F2C
  c->r[3]=c->r[23]|c->r[23]; // 800A3F30
  c->r[4]=c->r[22]|c->r[22]; // 800A3F34
  c->r[12]=R32(c->r[12]+0x00000018u); // 800A3F38
  c->ctr=c->r[12]; // 800A3F3C
  if (true) { c->lr=0x800A3F44u; dispatch(c,c->ctr); } // 800A3F40
  c->r[4]=c->r[3]|c->r[3]; // 800A3F44
  c->r[5]=c->r[30]|c->r[30]; // 800A3F48
  c->r[3]=c->r[24]+0xFFFFFF5Cu; // 800A3F4C
  c->lr=0x800A3F54u; f_800A2544(c); // 800A3F50
  c->r[22]=c->r[22]+0x00000001u; // 800A3F54
L_800A3F58:;
  c->r[3]=R32(c->r[1]+0x00000010u); // 800A3F58
  c->r[3]=R32(c->r[3]+0x00000008u); // 800A3F5C
  c->r[12]=R32(c->r[3]+0x00000010u); // 800A3F60
  c->r[12]=R32(c->r[12]+0x00000014u); // 800A3F64
  c->ctr=c->r[12]; // 800A3F68
  if (true) { c->lr=0x800A3F70u; dispatch(c,c->ctr); } // 800A3F6C
  cmps(c,0,(int32_t)c->r[22],(int32_t)c->r[3]); // 800A3F70
  if (crb(c,0)) { IRQCHK(c); goto L_800A3ED4; } // 800A3F74
  c->r[3]=R32(c->r[1]+0x00000010u); // 800A3F78
  c->r[0]=R32(c->r[3]+0x00000000u); // 800A3F7C
  W32(c->r[1]+0x00000010u,c->r[0]); // 800A3F80
L_800A3F84:;
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800A3F84
  c->r[3]=c->r[1]+0x00000010u; // 800A3F88
  c->r[4]=c->r[1]+0x0000000Cu; // 800A3F8C
  c->lr=0x800A3F94u; f_800A4024(c); // 800A3F90
  cmps(c,0,(int32_t)c->r[3],0); // 800A3F94
  if (!crb(c,2)) { IRQCHK(c); goto L_800A3EB4; } // 800A3F98
  {uint32_t ea=c->r[1]+0x00000018u; for(int i=22;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800A3F9C
  c->r[0]=R32(c->r[1]+0x00000044u); // 800A3FA0
  c->lr=c->r[0]; // 800A3FA4
  c->r[1]=c->r[1]+0x00000040u; // 800A3FA8
  return; // 800A3FAC
}

// fn_800A3FB0
void f_800A3FB0(Ctx* __restrict c) {
  trace_call(0x800A3FB0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800A3FB0
  c->r[0]=c->lr; // 800A3FB4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800A3FB8
  c->r[0]=R8(c->r[13]+0xFFFFBC20u); // 800A3FBC
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800A3FC0
  if (!crb(c,2)) { goto L_800A400C; } // 800A3FC4
  c->r[7]=0u+0x80740000u; // 800A3FC8
  c->r[6]=0u+0x806D0000u; // 800A3FCC
  c->r[3]=c->r[7]+0x00004BC0u; // 800A3FD0
  c->r[4]=0u+0x80050000u; // 800A3FD4
  c->r[6]=c->r[6]+0xFFFFD848u; // 800A3FD8
  c->r[5]=0u+0x80750000u; // 800A3FDC
  c->r[0]=c->r[6]+0x00000008u; // 800A3FE0
  W32(c->r[7]+0x00004BC0u,c->r[3]); // 800A3FE4
  c->r[4]=c->r[4]+0x00002050u; // 800A3FE8
  c->r[5]=c->r[5]+0xFFFFB6F0u; // 800A3FEC
  W32(c->r[3]+0x00000004u,c->r[3]); // 800A3FF0
  W32(c->r[3]+0x00000008u,c->r[3]); // 800A3FF4
  W32(c->r[3]+0x00000010u,c->r[6]); // 800A3FF8
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 800A3FFC
  c->lr=0x800A4004u; f_803A92B8(c); // 800A4000
  c->r[0]=0u+0x00000001u; // 800A4004
  W8(c->r[13]+0xFFFFBC20u,c->r[0]); // 800A4008
L_800A400C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800A400C
  c->r[3]=0u+0x80740000u; // 800A4010
  c->r[3]=c->r[3]+0x00004BC0u; // 800A4014
  c->lr=c->r[0]; // 800A4018
  c->r[1]=c->r[1]+0x00000010u; // 800A401C
  return; // 800A4020
}

// fn_800A4024
void f_800A4024(Ctx* __restrict c) {
  trace_call(0x800A4024u);
  c->r[5]=R32(c->r[3]+0x00000000u); // 800A4024
  c->r[3]=R32(c->r[4]+0x00000000u); // 800A4028
  c->r[4]=R32(c->r[5]+0x00000008u); // 800A402C
  c->r[0]=R32(c->r[3]+0x00000008u); // 800A4030
  c->r[3]=c->r[0]-c->r[4]; // 800A4034
  c->r[0]=addc(c,c->r[3],0xFFFFFFFFu,0); // 800A4038
  c->r[3]=addc(c,~c->r[0],c->r[3],c->xer_ca); // 800A403C
  return; // 800A4040
}

// fn_800A4044
void f_800A4044(Ctx* __restrict c) {
  trace_call(0x800A4044u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800A4044
  c->r[0]=c->lr; // 800A4048
  W32(c->r[1]+0x00000024u,c->r[0]); // 800A404C
  c->r[0]=0u+0x00000000u; // 800A4050
  c->r[3]=c->r[1]+0x00000008u; // 800A4054
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800A4058
  W8(c->r[1]+0x00000008u,c->r[0]); // 800A405C
  c->lr=0x800A4064u; f_800A3FB0(c); // 800A4060
  c->r[0]=R32(c->r[3]+0x00000000u); // 800A4064
  c->r[31]=c->r[3]|c->r[3]; // 800A4068
  W32(c->r[1]+0x00000010u,c->r[0]); // 800A406C
  goto L_800A4098; // 800A4070
L_800A4074:;
  c->r[3]=R32(c->r[1]+0x00000010u); // 800A4074
  c->r[3]=R32(c->r[3]+0x00000008u); // 800A4078
  c->r[12]=R32(c->r[3]+0x00000010u); // 800A407C
  c->r[12]=R32(c->r[12]+0x00000010u); // 800A4080
  c->ctr=c->r[12]; // 800A4084
  if (true) { c->lr=0x800A408Cu; dispatch(c,c->ctr); } // 800A4088
  c->r[3]=R32(c->r[1]+0x00000010u); // 800A408C
  c->r[0]=R32(c->r[3]+0x00000000u); // 800A4090
  W32(c->r[1]+0x00000010u,c->r[0]); // 800A4094
L_800A4098:;
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800A4098
  c->r[3]=c->r[1]+0x00000010u; // 800A409C
  c->r[4]=c->r[1]+0x0000000Cu; // 800A40A0
  c->lr=0x800A40A8u; f_800A4024(c); // 800A40A4
  cmps(c,0,(int32_t)c->r[3],0); // 800A40A8
  if (!crb(c,2)) { IRQCHK(c); goto L_800A4074; } // 800A40AC
  c->r[0]=R32(c->r[1]+0x00000024u); // 800A40B0
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800A40B4
  c->lr=c->r[0]; // 800A40B8
  c->r[1]=c->r[1]+0x00000020u; // 800A40BC
  return; // 800A40C0
}

// fn_800A40C4
void f_800A40C4(Ctx* __restrict c) {
  trace_call(0x800A40C4u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800A40C4
  c->r[0]=c->lr; // 800A40C8
  W32(c->r[1]+0x00000024u,c->r[0]); // 800A40CC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800A40D0
  c->r[0]=R8(c->r[13]+0xFFFFBB7Au); // 800A40D4
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800A40D8
  if (!crb(c,2)) { goto L_800A410C; } // 800A40DC
  c->r[31]=0u+0x80730000u; // 800A40E0
  c->r[3]=c->r[31]+0x00003B68u; // 800A40E4
  c->lr=0x800A40ECu; f_80045E54(c); // 800A40E8
  c->r[5]=0u+0x806D0000u; // 800A40EC
  c->r[0]=0u+0x00000001u; // 800A40F0
  c->r[5]=c->r[5]+0xFFFFC6A8u; // 800A40F4
  c->r[4]=c->r[31]+0x00003B68u; // 800A40F8
  c->r[3]=c->r[5]+0x0000003Cu; // 800A40FC
  W32(c->r[4]+0x000000A4u,c->r[5]); // 800A4100
  W32(c->r[4]+0x000000B0u,c->r[3]); // 800A4104
  W8(c->r[13]+0xFFFFBB7Au,c->r[0]); // 800A4108
L_800A410C:;
  c->r[3]=0u+0x80730000u; // 800A410C
  c->r[3]=c->r[3]+0x00003B68u; // 800A4110
  c->lr=0x800A4118u; f_8004767C(c); // 800A4114
  cmps(c,0,(int32_t)c->r[3],0); // 800A4118
  if (!crb(c,2)) { goto L_800A4128; } // 800A411C
  c->r[3]=0u+0x00000001u; // 800A4120
  goto L_800A4188; // 800A4124
L_800A4128:;
  c->r[0]=0u+0x00000000u; // 800A4128
  W8(c->r[1]+0x00000008u,c->r[0]); // 800A412C
  c->r[3]=c->r[1]+0x00000008u; // 800A4130
  c->lr=0x800A4138u; f_800A3FB0(c); // 800A4134
  c->r[0]=R32(c->r[3]+0x00000000u); // 800A4138
  c->r[31]=c->r[3]|c->r[3]; // 800A413C
  W32(c->r[1]+0x00000010u,c->r[0]); // 800A4140
  goto L_800A416C; // 800A4144
L_800A4148:;
  c->r[3]=R32(c->r[1]+0x00000010u); // 800A4148
  c->r[3]=R32(c->r[3]+0x00000008u); // 800A414C
  c->r[12]=R32(c->r[3]+0x00000010u); // 800A4150
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800A4154
  c->ctr=c->r[12]; // 800A4158
  if (true) { c->lr=0x800A4160u; dispatch(c,c->ctr); } // 800A415C
  c->r[3]=R32(c->r[1]+0x00000010u); // 800A4160
  c->r[0]=R32(c->r[3]+0x00000000u); // 800A4164
  W32(c->r[1]+0x00000010u,c->r[0]); // 800A4168
L_800A416C:;
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800A416C
  c->r[3]=c->r[1]+0x00000010u; // 800A4170
  c->r[4]=c->r[1]+0x0000000Cu; // 800A4174
  c->lr=0x800A417Cu; f_800A4024(c); // 800A4178
  cmps(c,0,(int32_t)c->r[3],0); // 800A417C
  if (!crb(c,2)) { IRQCHK(c); goto L_800A4148; } // 800A4180
  c->r[3]=0u+0x00000001u; // 800A4184
L_800A4188:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 800A4188
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800A418C
  c->lr=c->r[0]; // 800A4190
  c->r[1]=c->r[1]+0x00000020u; // 800A4194
  return; // 800A4198
}

// fn_800A419C
void f_800A419C(Ctx* __restrict c) {
  trace_call(0x800A419Cu);
  return; // 800A419C
}

// dtor_800A41A0
void f_800A41A0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800A41A0
  c->r[0]=c->lr; // 800A41A4
  cmps(c,0,(int32_t)c->r[3],0); // 800A41A8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800A41AC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800A41B0
  c->r[31]=c->r[3]|c->r[3]; // 800A41B4
  if (crb(c,2)) { goto L_800A41D8; } // 800A41B8
  cmps(c,0,(int32_t)c->r[4],0); // 800A41BC
  if (!crb(c,1)) { goto L_800A41D8; } // 800A41C0
  c->r[3]=R32(c->r[13]+0xFFFFE750u); // 800A41C4
  c->r[4]=c->r[31]|c->r[31]; // 800A41C8
  c->r[5]=R16(c->r[31]+0x00000004u); // 800A41CC
  c->r[6]=0u+0x00000016u; // 800A41D0
  c->lr=0x800A41D8u; f_8062C630(c); // 800A41D4
L_800A41D8:;
  c->r[3]=c->r[31]|c->r[31]; // 800A41D8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800A41DC
  c->r[0]=R32(c->r[1]+0x00000014u); // 800A41E0
  c->lr=c->r[0]; // 800A41E4
  c->r[1]=c->r[1]+0x00000010u; // 800A41E8
  return; // 800A41EC
}

// dtor_800A41F0
void f_800A41F0(Ctx* __restrict c) {
  c->r[4]=c->r[3]|c->r[3]; // 800A41F0
  c->r[3]=R32(c->r[13]+0xFFFFE750u); // 800A41F4
  c->r[5]=R16(c->r[4]+0x00000004u); // 800A41F8
  c->r[6]=0u+0x00000016u; // 800A41FC
  f_8062C630(c); return; // 800A4200
}

// dtor_800A4204
void f_800A4204(Ctx* __restrict c) {
  return; // 800A4204
}

// fn_800A4208
void f_800A4208(Ctx* __restrict c) {
  trace_call(0x800A4208u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800A4208
  c->r[0]=c->lr; // 800A420C
  cmps(c,0,(int32_t)c->r[3],0); // 800A4210
  W32(c->r[1]+0x00000014u,c->r[0]); // 800A4214
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800A4218
  c->r[31]=c->r[4]|c->r[4]; // 800A421C
  W32(c->r[1]+0x00000008u,c->r[30]); // 800A4220
  c->r[30]=c->r[3]|c->r[3]; // 800A4224
  if (crb(c,2)) { goto L_800A4270; } // 800A4228
  c->r[5]=0u+0x806D0000u; // 800A422C
  c->r[4]=c->r[30]|c->r[30]; // 800A4230
  c->r[5]=c->r[5]+0x00005DA4u; // 800A4234
  W32(c->r[3]+0x00000000u,c->r[5]); // 800A4238
  c->r[0]=c->r[5]+0x00000014u; // 800A423C
  W32(c->r[3]+0x00000008u,c->r[0]); // 800A4240
  if (crb(c,2)) { goto L_800A424C; } // 800A4244
  c->r[4]=c->r[3]+0x00000008u; // 800A4248
L_800A424C:;
  c->r[3]=R32(c->r[3]+0x0000000Cu); // 800A424C
  c->lr=0x800A4254u; f_805A1728(c); // 800A4250
  cmps(c,0,(int32_t)c->r[31],0); // 800A4254
  if (!crb(c,1)) { goto L_800A4270; } // 800A4258
  c->r[3]=R32(c->r[13]+0xFFFFE750u); // 800A425C
  c->r[4]=c->r[30]|c->r[30]; // 800A4260
  c->r[5]=R16(c->r[30]+0x00000004u); // 800A4264
  c->r[6]=0u+0x00000016u; // 800A4268
  c->lr=0x800A4270u; f_8062C630(c); // 800A426C
L_800A4270:;
  c->r[3]=c->r[30]|c->r[30]; // 800A4270
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800A4274
  c->r[30]=R32(c->r[1]+0x00000008u); // 800A4278
  c->r[0]=R32(c->r[1]+0x00000014u); // 800A427C
  c->lr=c->r[0]; // 800A4280
  c->r[1]=c->r[1]+0x00000010u; // 800A4284
  return; // 800A4288
}

// fn_800A428C
void f_800A428C(Ctx* __restrict c) {
  trace_call(0x800A428Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800A428C
  c->r[0]=c->lr; // 800A4290
  W32(c->r[1]+0x00000024u,c->r[0]); // 800A4294
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800A4298
  W32(c->r[1]+0x00000018u,c->r[30]); // 800A429C
  c->r[30]=c->r[3]|c->r[3]; // 800A42A0
  c->r[0]=R32(c->r[3]+0x00000110u); // 800A42A4
  cmpu(c,0,c->r[0],0x00000005u); // 800A42A8
  if (!crb(c,1)) { goto L_800A4368; } // 800A42AC
  c->r[0]=R8(c->r[3]+0x00000010u); // 800A42B0
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800A42B4
  if (crb(c,2)) { goto L_800A4368; } // 800A42B8
  {uint32_t ea=c->r[4]+0x00000018u; c->f[1]=c->ps1[1]=RF32(ea);} // 800A42BC
  {uint32_t ea=c->r[2]+0xFFFF9908u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A42C0
  fcmp(c,0,c->f[1],c->f[0]); // 800A42C4
  if (crb(c,0)) { goto L_800A42D8; } // 800A42C8
  {uint32_t ea=c->r[2]+0xFFFF990Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800A42CC
  fcmp(c,0,c->f[1],c->f[0]); // 800A42D0
  if (!crb(c,1)) { goto L_800A4368; } // 800A42D4
L_800A42D8:;
  c->r[3]=R32(c->r[4]+0x0000000Cu); // 800A42D8
  c->r[0]=R8(c->r[13]+0xFFFFBB86u); // 800A42DC
  {uint32_t ea=c->r[3]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A42E0
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[0]);} // 800A42E4
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800A42E8
  {uint32_t ea=c->r[3]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A42EC
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[0]);} // 800A42F0
  {uint32_t ea=c->r[3]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A42F4
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[0]);} // 800A42F8
  if (!crb(c,2)) { goto L_800A4340; } // 800A42FC
  c->r[31]=0u+0x80730000u; // 800A4300
  c->r[3]=c->r[31]+0x00006040u; // 800A4304
  c->lr=0x800A430Cu; f_8004B784(c); // 800A4308
  c->r[6]=0u+0x806D0000u; // 800A430C
  c->r[4]=0u+0x80050000u; // 800A4310
  c->r[6]=c->r[6]+0xFFFFC3B8u; // 800A4314
  c->r[3]=c->r[31]+0x00006040u; // 800A4318
  c->r[0]=c->r[6]+0x00000028u; // 800A431C
  c->r[5]=0u+0x80750000u; // 800A4320
  W32(c->r[3]+0x000000A4u,c->r[6]); // 800A4324
  c->r[4]=c->r[4]+0xFFFF9F98u; // 800A4328
  c->r[5]=c->r[5]+0xFFFFB708u; // 800A432C
  W32(c->r[3]+0x000000A8u,c->r[0]); // 800A4330
  c->lr=0x800A4338u; f_803A92B8(c); // 800A4334
  c->r[0]=0u+0x00000001u; // 800A4338
  W8(c->r[13]+0xFFFFBB86u,c->r[0]); // 800A433C
L_800A4340:;
  c->r[3]=0u+0x80730000u; // 800A4340
  {uint32_t ea=c->r[2]+0xFFFF9910u; c->f[1]=c->ps1[1]=RF32(ea);} // 800A4344
  c->r[3]=c->r[3]+0x00006040u; // 800A4348
  c->r[4]=c->r[30]+0x00000010u; // 800A434C
  c->r[5]=c->r[1]+0x00000008u; // 800A4350
  c->r[6]=0u+0xFFFFFFFFu; // 800A4354
  c->r[7]=0u+0x00000000u; // 800A4358
  c->r[8]=0u+0x00000000u; // 800A435C
  c->r[9]=0u+0x00000001u; // 800A4360
  c->lr=0x800A4368u; f_8004BFE0(c); // 800A4364
L_800A4368:;
  c->r[0]=0u+0x00000000u; // 800A4368
  W32(c->r[30]+0x00000110u,c->r[0]); // 800A436C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800A4370
  c->r[30]=R32(c->r[1]+0x00000018u); // 800A4374
  c->r[0]=R32(c->r[1]+0x00000024u); // 800A4378
  c->lr=c->r[0]; // 800A437C
  c->r[1]=c->r[1]+0x00000020u; // 800A4380
  return; // 800A4384
}

// fn_800A4388
void f_800A4388(Ctx* __restrict c) {
  trace_call(0x800A4388u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800A4388
  c->r[0]=c->lr; // 800A438C
  cmps(c,0,(int32_t)c->r[3],0); // 800A4390
  W32(c->r[1]+0x00000014u,c->r[0]); // 800A4394
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800A4398
  c->r[31]=c->r[3]|c->r[3]; // 800A439C
  if (crb(c,2)) { goto L_800A43C0; } // 800A43A0
  cmps(c,0,(int32_t)c->r[4],0); // 800A43A4
  if (!crb(c,1)) { goto L_800A43C0; } // 800A43A8
  c->r[3]=R32(c->r[13]+0xFFFFE750u); // 800A43AC
  c->r[4]=c->r[31]|c->r[31]; // 800A43B0
  c->r[5]=R16(c->r[31]+0x00000004u); // 800A43B4
  c->r[6]=0u+0x00000016u; // 800A43B8
  c->lr=0x800A43C0u; f_8062C630(c); // 800A43BC
L_800A43C0:;
  c->r[3]=c->r[31]|c->r[31]; // 800A43C0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800A43C4
  c->r[0]=R32(c->r[1]+0x00000014u); // 800A43C8
  c->lr=c->r[0]; // 800A43CC
  c->r[1]=c->r[1]+0x00000010u; // 800A43D0
  return; // 800A43D4
}

// fn_800A43D8
void f_800A43D8(Ctx* __restrict c) {
  trace_call(0x800A43D8u);
  c->r[5]=R32(c->r[4]+0x00000000u); // 800A43D8
  c->r[6]=R32(c->r[4]+0x00000004u); // 800A43DC
  c->r[0]=R32(c->r[5]+0x0000001Cu); // 800A43E0
  c->r[5]=R32(c->r[6]+0x0000001Cu); // 800A43E4
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 800A43E8
  if (!crb(c,2)) { goto L_800A43F8; } // 800A43EC
  c->r[0]=rotl(c->r[5],0)&0x00000001u; cr0(c,c->r[0]); // 800A43F0
  if (crb(c,2)) return; // 800A43F4
L_800A43F8:;
  c->r[0]=0u+0x00000001u; // 800A43F8
  W8(c->r[3]+0x0000000Cu,c->r[0]); // 800A43FC
  c->r[4]=R32(c->r[4]+0x0000000Cu); // 800A4400
  {uint32_t ea=0u+c->r[4]; psq_load(c,0,ea,0,0);} // 800A4404
  {uint32_t ea=c->r[3]+0x00000010u; psq_store(c,0,ea,0,0);} // 800A4408
  {uint32_t ea=c->r[4]+0x00000008u; psq_load(c,0,ea,0,0);} // 800A440C
  {uint32_t ea=c->r[3]+0x00000018u; psq_store(c,0,ea,0,0);} // 800A4410
  return; // 800A4414
}

// fn_800A4418
void f_800A4418(Ctx* __restrict c) {
  trace_call(0x800A4418u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800A4418
  c->r[0]=c->lr; // 800A441C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800A4420
  c->r[0]=0u+0x0000000Cu; // 800A4424
  cmps(c,0,(int32_t)c->r[0],16); // 800A4428
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800A442C
  c->r[31]=c->r[3]|c->r[3]; // 800A4430
  c->r[7]=R32(c->r[13]+0xFFFFE750u); // 800A4434
  if (crb(c,1)) { goto L_800A4444; } // 800A4438
  c->r[4]=0u+0x00000001u; // 800A443C
  goto L_800A4548; // 800A4440
L_800A4444:;
  cmps(c,0,(int32_t)c->r[0],32); // 800A4444
  if (crb(c,1)) { goto L_800A4454; } // 800A4448
  c->r[4]=0u+0x00000002u; // 800A444C
  goto L_800A4548; // 800A4450
L_800A4454:;
  cmps(c,0,(int32_t)c->r[0],48); // 800A4454
  if (crb(c,1)) { goto L_800A4464; } // 800A4458
  c->r[4]=0u+0x00000003u; // 800A445C
  goto L_800A4548; // 800A4460
L_800A4464:;
  cmps(c,0,(int32_t)c->r[0],64); // 800A4464
  if (crb(c,1)) { goto L_800A4474; } // 800A4468
  c->r[4]=0u+0x00000004u; // 800A446C
  goto L_800A4548; // 800A4470
L_800A4474:;
  cmps(c,0,(int32_t)c->r[0],96); // 800A4474
  if (crb(c,1)) { goto L_800A4484; } // 800A4478
  c->r[4]=0u+0x00000005u; // 800A447C
  goto L_800A4548; // 800A4480
L_800A4484:;
  cmps(c,0,(int32_t)c->r[0],128); // 800A4484
  if (crb(c,1)) { goto L_800A4494; } // 800A4488
  c->r[4]=0u+0x00000006u; // 800A448C
  goto L_800A4548; // 800A4490
L_800A4494:;
  cmps(c,0,(int32_t)c->r[0],160); // 800A4494
  if (crb(c,1)) { goto L_800A44A4; } // 800A4498
  c->r[4]=0u+0x00000007u; // 800A449C
  goto L_800A4548; // 800A44A0
L_800A44A4:;
  cmps(c,0,(int32_t)c->r[0],192); // 800A44A4
  if (crb(c,1)) { goto L_800A44B4; } // 800A44A8
  c->r[4]=0u+0x00000008u; // 800A44AC
  goto L_800A4548; // 800A44B0
L_800A44B4:;
  cmps(c,0,(int32_t)c->r[0],256); // 800A44B4
  if (crb(c,1)) { goto L_800A44C4; } // 800A44B8
  c->r[4]=0u+0x00000009u; // 800A44BC
  goto L_800A4548; // 800A44C0
L_800A44C4:;
  cmps(c,0,(int32_t)c->r[0],320); // 800A44C4
  if (crb(c,1)) { goto L_800A44D4; } // 800A44C8
  c->r[4]=0u+0x0000000Au; // 800A44CC
  goto L_800A4548; // 800A44D0
L_800A44D4:;
  cmps(c,0,(int32_t)c->r[0],512); // 800A44D4
  if (crb(c,1)) { goto L_800A44E4; } // 800A44D8
  c->r[4]=0u+0x0000000Bu; // 800A44DC
  goto L_800A4548; // 800A44E0
L_800A44E4:;
  cmps(c,0,(int32_t)c->r[0],544); // 800A44E4
  if (crb(c,1)) { goto L_800A44F4; } // 800A44E8
  c->r[4]=0u+0x0000000Cu; // 800A44EC
  goto L_800A4548; // 800A44F0
L_800A44F4:;
  cmps(c,0,(int32_t)c->r[0],1024); // 800A44F4
  if (crb(c,1)) { goto L_800A4504; } // 800A44F8
  c->r[4]=0u+0x0000000Du; // 800A44FC
  goto L_800A4548; // 800A4500
L_800A4504:;
  cmps(c,0,(int32_t)c->r[0],2048); // 800A4504
  if (crb(c,1)) { goto L_800A4514; } // 800A4508
  c->r[4]=0u+0x0000000Eu; // 800A450C
  goto L_800A4548; // 800A4510
L_800A4514:;
  cmps(c,0,(int32_t)c->r[0],4096); // 800A4514
  if (crb(c,1)) { goto L_800A4524; } // 800A4518
  c->r[4]=0u+0x0000000Fu; // 800A451C
  goto L_800A4548; // 800A4520
L_800A4524:;
  cmps(c,0,(int32_t)c->r[0],8192); // 800A4524
  if (crb(c,1)) { goto L_800A4534; } // 800A4528
  c->r[4]=0u+0x00000010u; // 800A452C
  goto L_800A4548; // 800A4530
L_800A4534:;
  c->r[3]=c->msr; // 800A4534
  c->r[0]=c->r[3]|0x00000400u; // 800A4538
  c->msr=c->r[0]; // 800A453C
  c->msr=c->r[3]; // 800A4540
  c->r[4]=0u+0xFFFFFFFFu; // 800A4544
L_800A4548:;
  c->r[0]=rotl(c->r[4],3)&0xFFFFFFF8u; // 800A4548
  c->r[6]=c->r[7]+c->r[0]; // 800A454C
  c->r[3]=R32(c->r[6]+0x00000028u); // 800A4550
  cmps(c,0,(int32_t)c->r[3],0); // 800A4554
  if (crb(c,2)) { goto L_800A4578; } // 800A4558
  c->r[5]=R32(c->r[6]+0x0000002Cu); // 800A455C
  c->r[0]=c->r[5]+0xFFFFFFFFu; // 800A4560
  W32(c->r[6]+0x0000002Cu,c->r[0]); // 800A4564
  c->r[5]=R32(c->r[6]+0x00000028u); // 800A4568
  c->r[0]=R32(c->r[5]+0x00000000u); // 800A456C
  W32(c->r[6]+0x00000028u,c->r[0]); // 800A4570
  goto L_800A457C; // 800A4574
L_800A4578:;
  c->r[3]=0u+0x00000000u; // 800A4578
L_800A457C:;
  cmps(c,0,(int32_t)c->r[3],0); // 800A457C
  if (crb(c,2)) { goto L_800A4588; } // 800A4580
  goto L_800A4594; // 800A4584
L_800A4588:;
  c->r[3]=c->r[7]|c->r[7]; // 800A4588
  c->r[5]=0u+0x00000018u; // 800A458C
  c->lr=0x800A4594u; f_8062BDA4(c); // 800A4590
L_800A4594:;
  cmps(c,0,(int32_t)c->r[3],0); // 800A4594
  if (crb(c,2)) { goto L_800A45B0; } // 800A4598
  c->r[4]=0u+0x00000000u; // 800A459C
  W32(c->r[3]+0x00000000u,c->r[4]); // 800A45A0
  c->r[0]=0u+0x80000000u; // 800A45A4
  W32(c->r[3]+0x00000004u,c->r[4]); // 800A45A8
  W32(c->r[3]+0x00000008u,c->r[0]); // 800A45AC
L_800A45B0:;
  W32(c->r[31]+0x00000004u,c->r[3]); // 800A45B0
  c->r[0]=0u+0x00000000u; // 800A45B4
  c->r[4]=0u+0x0000000Cu; // 800A45B8
  W32(c->r[3]+0x00000004u,c->r[0]); // 800A45BC
  cmps(c,0,(int32_t)c->r[4],16); // 800A45C0
  c->r[3]=R32(c->r[13]+0xFFFFE750u); // 800A45C4
  if (crb(c,1)) { goto L_800A45D4; } // 800A45C8
  c->r[4]=0u+0x00000001u; // 800A45CC
  goto L_800A46D8; // 800A45D0
L_800A45D4:;
  cmps(c,0,(int32_t)c->r[4],32); // 800A45D4
  if (crb(c,1)) { goto L_800A45E4; } // 800A45D8
  c->r[4]=0u+0x00000002u; // 800A45DC
  goto L_800A46D8; // 800A45E0
L_800A45E4:;
  cmps(c,0,(int32_t)c->r[4],48); // 800A45E4
  if (crb(c,1)) { goto L_800A45F4; } // 800A45E8
  c->r[4]=0u+0x00000003u; // 800A45EC
  goto L_800A46D8; // 800A45F0
L_800A45F4:;
  cmps(c,0,(int32_t)c->r[4],64); // 800A45F4
  if (crb(c,1)) { goto L_800A4604; } // 800A45F8
  c->r[4]=0u+0x00000004u; // 800A45FC
  goto L_800A46D8; // 800A4600
L_800A4604:;
  cmps(c,0,(int32_t)c->r[4],96); // 800A4604
  if (crb(c,1)) { goto L_800A4614; } // 800A4608
  c->r[4]=0u+0x00000005u; // 800A460C
  goto L_800A46D8; // 800A4610
L_800A4614:;
  cmps(c,0,(int32_t)c->r[4],128); // 800A4614
  if (crb(c,1)) { goto L_800A4624; } // 800A4618
  c->r[4]=0u+0x00000006u; // 800A461C
  goto L_800A46D8; // 800A4620
L_800A4624:;
  cmps(c,0,(int32_t)c->r[4],160); // 800A4624
  if (crb(c,1)) { goto L_800A4634; } // 800A4628
  c->r[4]=0u+0x00000007u; // 800A462C
  goto L_800A46D8; // 800A4630
L_800A4634:;
  cmps(c,0,(int32_t)c->r[4],192); // 800A4634
  if (crb(c,1)) { goto L_800A4644; } // 800A4638
  c->r[4]=0u+0x00000008u; // 800A463C
  goto L_800A46D8; // 800A4640
L_800A4644:;
  cmps(c,0,(int32_t)c->r[4],256); // 800A4644
  if (crb(c,1)) { goto L_800A4654; } // 800A4648
  c->r[4]=0u+0x00000009u; // 800A464C
  goto L_800A46D8; // 800A4650
L_800A4654:;
  cmps(c,0,(int32_t)c->r[4],320); // 800A4654
  if (crb(c,1)) { goto L_800A4664; } // 800A4658
  c->r[4]=0u+0x0000000Au; // 800A465C
  goto L_800A46D8; // 800A4660
L_800A4664:;
  cmps(c,0,(int32_t)c->r[4],512); // 800A4664
  if (crb(c,1)) { goto L_800A4674; } // 800A4668
  c->r[4]=0u+0x0000000Bu; // 800A466C
  goto L_800A46D8; // 800A4670
L_800A4674:;
  cmps(c,0,(int32_t)c->r[4],544); // 800A4674
  if (crb(c,1)) { goto L_800A4684; } // 800A4678
  c->r[4]=0u+0x0000000Cu; // 800A467C
  goto L_800A46D8; // 800A4680
L_800A4684:;
  cmps(c,0,(int32_t)c->r[4],1024); // 800A4684
  if (crb(c,1)) { goto L_800A4694; } // 800A4688
  c->r[4]=0u+0x0000000Du; // 800A468C
  goto L_800A46D8; // 800A4690
L_800A4694:;
  cmps(c,0,(int32_t)c->r[4],2048); // 800A4694
  if (crb(c,1)) { goto L_800A46A4; } // 800A4698
  c->r[4]=0u+0x0000000Eu; // 800A469C
  goto L_800A46D8; // 800A46A0
L_800A46A4:;
  cmps(c,0,(int32_t)c->r[4],4096); // 800A46A4
  if (crb(c,1)) { goto L_800A46B4; } // 800A46A8
  c->r[4]=0u+0x0000000Fu; // 800A46AC
  goto L_800A46D8; // 800A46B0
L_800A46B4:;
  cmps(c,0,(int32_t)c->r[4],8192); // 800A46B4
  if (crb(c,1)) { goto L_800A46C4; } // 800A46B8
  c->r[4]=0u+0x00000010u; // 800A46BC
  goto L_800A46D8; // 800A46C0
L_800A46C4:;
  c->r[4]=c->msr; // 800A46C4
  c->r[0]=c->r[4]|0x00000400u; // 800A46C8
  c->msr=c->r[0]; // 800A46CC
  c->msr=c->r[4]; // 800A46D0
  c->r[4]=0u+0xFFFFFFFFu; // 800A46D4
L_800A46D8:;
  c->r[0]=rotl(c->r[4],3)&0xFFFFFFF8u; // 800A46D8
  c->r[6]=c->r[3]+c->r[0]; // 800A46DC
  c->r[7]=R32(c->r[6]+0x00000028u); // 800A46E0
  cmps(c,0,(int32_t)c->r[7],0); // 800A46E4
  if (crb(c,2)) { goto L_800A4708; } // 800A46E8
  c->r[5]=R32(c->r[6]+0x0000002Cu); // 800A46EC
  c->r[0]=c->r[5]+0xFFFFFFFFu; // 800A46F0
  W32(c->r[6]+0x0000002Cu,c->r[0]); // 800A46F4
  c->r[5]=R32(c->r[6]+0x00000028u); // 800A46F8
  c->r[0]=R32(c->r[5]+0x00000000u); // 800A46FC
  W32(c->r[6]+0x00000028u,c->r[0]); // 800A4700
  goto L_800A470C; // 800A4704
L_800A4708:;
  c->r[7]=0u+0x00000000u; // 800A4708
L_800A470C:;
  cmps(c,0,(int32_t)c->r[7],0); // 800A470C
  if (crb(c,2)) { goto L_800A4718; } // 800A4710
  goto L_800A4724; // 800A4714
L_800A4718:;
  c->r[5]=0u+0x00000018u; // 800A4718
  c->lr=0x800A4720u; f_8062BDA4(c); // 800A471C
  c->r[7]=c->r[3]|c->r[3]; // 800A4720
L_800A4724:;
  cmps(c,0,(int32_t)c->r[7],0); // 800A4724
  if (crb(c,2)) { goto L_800A4740; } // 800A4728
  c->r[3]=0u+0x00000000u; // 800A472C
  W32(c->r[7]+0x00000000u,c->r[3]); // 800A4730
  c->r[0]=0u+0x80000000u; // 800A4734
  W32(c->r[7]+0x00000004u,c->r[3]); // 800A4738
  W32(c->r[7]+0x00000008u,c->r[0]); // 800A473C
L_800A4740:;
  W32(c->r[31]+0x00000008u,c->r[7]); // 800A4740
  c->r[0]=0u+0x00000000u; // 800A4744
  c->r[4]=0u+0x0000000Cu; // 800A4748
  W32(c->r[7]+0x00000004u,c->r[0]); // 800A474C
  cmps(c,0,(int32_t)c->r[4],16); // 800A4750
  c->r[3]=R32(c->r[13]+0xFFFFE750u); // 800A4754
  if (crb(c,1)) { goto L_800A4764; } // 800A4758
  c->r[4]=0u+0x00000001u; // 800A475C
  goto L_800A4868; // 800A4760
L_800A4764:;
  cmps(c,0,(int32_t)c->r[4],32); // 800A4764
  if (crb(c,1)) { goto L_800A4774; } // 800A4768
  c->r[4]=0u+0x00000002u; // 800A476C
  goto L_800A4868; // 800A4770
L_800A4774:;
  cmps(c,0,(int32_t)c->r[4],48); // 800A4774
  if (crb(c,1)) { goto L_800A4784; } // 800A4778
  c->r[4]=0u+0x00000003u; // 800A477C
  goto L_800A4868; // 800A4780
L_800A4784:;
  cmps(c,0,(int32_t)c->r[4],64); // 800A4784
  if (crb(c,1)) { goto L_800A4794; } // 800A4788
  c->r[4]=0u+0x00000004u; // 800A478C
  goto L_800A4868; // 800A4790
L_800A4794:;
  cmps(c,0,(int32_t)c->r[4],96); // 800A4794
  if (crb(c,1)) { goto L_800A47A4; } // 800A4798
  c->r[4]=0u+0x00000005u; // 800A479C
  goto L_800A4868; // 800A47A0
L_800A47A4:;
  cmps(c,0,(int32_t)c->r[4],128); // 800A47A4
  if (crb(c,1)) { goto L_800A47B4; } // 800A47A8
  c->r[4]=0u+0x00000006u; // 800A47AC
  goto L_800A4868; // 800A47B0
L_800A47B4:;
  cmps(c,0,(int32_t)c->r[4],160); // 800A47B4
  if (crb(c,1)) { goto L_800A47C4; } // 800A47B8
  c->r[4]=0u+0x00000007u; // 800A47BC
  goto L_800A4868; // 800A47C0
L_800A47C4:;
  cmps(c,0,(int32_t)c->r[4],192); // 800A47C4
  if (crb(c,1)) { goto L_800A47D4; } // 800A47C8
  c->r[4]=0u+0x00000008u; // 800A47CC
  goto L_800A4868; // 800A47D0
L_800A47D4:;
  cmps(c,0,(int32_t)c->r[4],256); // 800A47D4
  if (crb(c,1)) { goto L_800A47E4; } // 800A47D8
  c->r[4]=0u+0x00000009u; // 800A47DC
  goto L_800A4868; // 800A47E0
L_800A47E4:;
  cmps(c,0,(int32_t)c->r[4],320); // 800A47E4
  if (crb(c,1)) { goto L_800A47F4; } // 800A47E8
  c->r[4]=0u+0x0000000Au; // 800A47EC
  goto L_800A4868; // 800A47F0
L_800A47F4:;
  cmps(c,0,(int32_t)c->r[4],512); // 800A47F4
  if (crb(c,1)) { goto L_800A4804; } // 800A47F8
  c->r[4]=0u+0x0000000Bu; // 800A47FC
  goto L_800A4868; // 800A4800
L_800A4804:;
  cmps(c,0,(int32_t)c->r[4],544); // 800A4804
  if (crb(c,1)) { goto L_800A4814; } // 800A4808
  c->r[4]=0u+0x0000000Cu; // 800A480C
  goto L_800A4868; // 800A4810
L_800A4814:;
  cmps(c,0,(int32_t)c->r[4],1024); // 800A4814
  if (crb(c,1)) { goto L_800A4824; } // 800A4818
  c->r[4]=0u+0x0000000Du; // 800A481C
  goto L_800A4868; // 800A4820
L_800A4824:;
  cmps(c,0,(int32_t)c->r[4],2048); // 800A4824
  if (crb(c,1)) { goto L_800A4834; } // 800A4828
  c->r[4]=0u+0x0000000Eu; // 800A482C
  goto L_800A4868; // 800A4830
L_800A4834:;
  cmps(c,0,(int32_t)c->r[4],4096); // 800A4834
  if (crb(c,1)) { goto L_800A4844; } // 800A4838
  c->r[4]=0u+0x0000000Fu; // 800A483C
  goto L_800A4868; // 800A4840
L_800A4844:;
  cmps(c,0,(int32_t)c->r[4],8192); // 800A4844
  if (crb(c,1)) { goto L_800A4854; } // 800A4848
  c->r[4]=0u+0x00000010u; // 800A484C
  goto L_800A4868; // 800A4850
L_800A4854:;
  c->r[4]=c->msr; // 800A4854
  c->r[0]=c->r[4]|0x00000400u; // 800A4858
  c->msr=c->r[0]; // 800A485C
  c->msr=c->r[4]; // 800A4860
  c->r[4]=0u+0xFFFFFFFFu; // 800A4864
L_800A4868:;
  c->r[0]=rotl(c->r[4],3)&0xFFFFFFF8u; // 800A4868
  c->r[6]=c->r[3]+c->r[0]; // 800A486C
  c->r[7]=R32(c->r[6]+0x00000028u); // 800A4870
  cmps(c,0,(int32_t)c->r[7],0); // 800A4874
  if (crb(c,2)) { goto L_800A4898; } // 800A4878
  c->r[5]=R32(c->r[6]+0x0000002Cu); // 800A487C
  c->r[0]=c->r[5]+0xFFFFFFFFu; // 800A4880
  W32(c->r[6]+0x0000002Cu,c->r[0]); // 800A4884
  c->r[5]=R32(c->r[6]+0x00000028u); // 800A4888
  c->r[0]=R32(c->r[5]+0x00000000u); // 800A488C
  W32(c->r[6]+0x00000028u,c->r[0]); // 800A4890
  goto L_800A489C; // 800A4894
L_800A4898:;
  c->r[7]=0u+0x00000000u; // 800A4898
L_800A489C:;
  cmps(c,0,(int32_t)c->r[7],0); // 800A489C
  if (crb(c,2)) { goto L_800A48A8; } // 800A48A0
  goto L_800A48B4; // 800A48A4
L_800A48A8:;
  c->r[5]=0u+0x00000018u; // 800A48A8
  c->lr=0x800A48B0u; f_8062BDA4(c); // 800A48AC
  c->r[7]=c->r[3]|c->r[3]; // 800A48B0
L_800A48B4:;
  cmps(c,0,(int32_t)c->r[7],0); // 800A48B4
  if (crb(c,2)) { goto L_800A48D0; } // 800A48B8
  c->r[3]=0u+0x00000000u; // 800A48BC
  W32(c->r[7]+0x00000000u,c->r[3]); // 800A48C0
  c->r[0]=0u+0x80000000u; // 800A48C4
  W32(c->r[7]+0x00000004u,c->r[3]); // 800A48C8
  W32(c->r[7]+0x00000008u,c->r[0]); // 800A48CC
L_800A48D0:;
  W32(c->r[31]+0x0000000Cu,c->r[7]); // 800A48D0
  c->r[0]=0u+0x00000000u; // 800A48D4
  W32(c->r[7]+0x00000004u,c->r[0]); // 800A48D8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800A48DC
  c->r[0]=R32(c->r[1]+0x00000014u); // 800A48E0
  c->lr=c->r[0]; // 800A48E4
  c->r[1]=c->r[1]+0x00000010u; // 800A48E8
  return; // 800A48EC
}

// fn_800A48F0
void f_800A48F0(Ctx* __restrict c) {
  trace_call(0x800A48F0u);
  c->r[7]=0u+0x00000000u; // 800A48F0
  c->r[6]=0u+0x00000000u; // 800A48F4
  goto L_800A4918; // 800A48F8
L_800A48FC:;
  c->r[4]=R32(c->r[4]+0x00000000u); // 800A48FC
  c->r[7]=c->r[7]+0x00000001u; // 800A4900
  c->r[5]=R32(c->r[4]+c->r[6]); // 800A4904
  c->r[6]=c->r[6]+0x00000004u; // 800A4908
  c->r[4]=R32(c->r[5]+0x00000110u); // 800A490C
  c->r[0]=c->r[4]+0x00000001u; // 800A4910
  W32(c->r[5]+0x00000110u,c->r[0]); // 800A4914
L_800A4918:;
  c->r[4]=R32(c->r[3]+0x0000000Cu); // 800A4918
  c->r[0]=R32(c->r[4]+0x00000004u); // 800A491C
  cmps(c,0,(int32_t)c->r[7],(int32_t)c->r[0]); // 800A4920
  if (crb(c,0)) { IRQCHK(c); goto L_800A48FC; } // 800A4924
  return; // 800A4928
}

// fn_800A492C
void f_800A492C(Ctx* __restrict c) {
  trace_call(0x800A492Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800A492C
  c->r[0]=c->lr; // 800A4930
  W32(c->r[1]+0x00000024u,c->r[0]); // 800A4934
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800A4938
  c->r[31]=c->r[3]|c->r[3]; // 800A493C
  W32(c->r[1]+0x00000018u,c->r[30]); // 800A4940
  c->r[30]=0u+0x00000000u; // 800A4944
  W32(c->r[1]+0x00000014u,c->r[29]); // 800A4948
  c->r[29]=0u+0x00000000u; // 800A494C
  W32(c->r[1]+0x00000010u,c->r[28]); // 800A4950
  goto L_800A497C; // 800A4954
L_800A4958:;
  c->r[3]=R32(c->r[31]+0x0000000Cu); // 800A4958
  c->r[3]=R32(c->r[3]+0x00000000u); // 800A495C
  c->r[28]=R32(c->r[3]+c->r[30]); // 800A4960
  c->r[3]=c->r[28]|c->r[28]; // 800A4964
  c->lr=0x800A496Cu; f_8062D488(c); // 800A4968
  c->r[3]=c->r[28]|c->r[28]; // 800A496C
  c->lr=0x800A4974u; f_8062D488(c); // 800A4970
  c->r[29]=c->r[29]+0x00000001u; // 800A4974
  c->r[30]=c->r[30]+0x00000004u; // 800A4978
L_800A497C:;
  c->r[3]=R32(c->r[31]+0x0000000Cu); // 800A497C
  c->r[0]=R32(c->r[3]+0x00000004u); // 800A4980
  cmps(c,0,(int32_t)c->r[29],(int32_t)c->r[0]); // 800A4984
  if (crb(c,0)) { IRQCHK(c); goto L_800A4958; } // 800A4988
  c->r[0]=0u+0x00000000u; // 800A498C
  W32(c->r[3]+0x00000004u,c->r[0]); // 800A4990
  c->r[30]=R32(c->r[31]+0x0000000Cu); // 800A4994
  cmps(c,0,(int32_t)c->r[30],0); // 800A4998
  if (crb(c,2)) { goto L_800A4B30; } // 800A499C
  c->r[0]=R32(c->r[30]+0x00000008u); // 800A49A0
  c->r[0]=rotl(c->r[0],0)&0x80000000u; cr0(c,c->r[0]); // 800A49A4
  if (!crb(c,2)) { goto L_800A49C4; } // 800A49A8
  c->r[0]=R32(c->r[30]+0x00000008u); // 800A49AC
  c->r[6]=0u+0x00000018u; // 800A49B0
  c->r[3]=R32(c->r[13]+0xFFFFE750u); // 800A49B4
  c->r[4]=R32(c->r[30]+0x00000000u); // 800A49B8
  c->r[5]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800A49BC
  c->lr=0x800A49C4u; f_8062C630(c); // 800A49C0
L_800A49C4:;
  c->r[0]=0u+0x00000001u; // 800A49C4
  cmps(c,0,(int32_t)c->r[0],0); // 800A49C8
  if (!crb(c,1)) { goto L_800A4B30; } // 800A49CC
  cmps(c,0,(int32_t)c->r[30],0); // 800A49D0
  if (crb(c,2)) { goto L_800A4B30; } // 800A49D4
  c->r[0]=0u+0x0000000Cu; // 800A49D8
  c->r[3]=R32(c->r[13]+0xFFFFE750u); // 800A49DC
  cmps(c,0,(int32_t)c->r[0],16); // 800A49E0
  if (crb(c,1)) { goto L_800A49F0; } // 800A49E4
  c->r[4]=0u+0x00000001u; // 800A49E8
  goto L_800A4AF4; // 800A49EC
L_800A49F0:;
  cmps(c,0,(int32_t)c->r[0],32); // 800A49F0
  if (crb(c,1)) { goto L_800A4A00; } // 800A49F4
  c->r[4]=0u+0x00000002u; // 800A49F8
  goto L_800A4AF4; // 800A49FC
L_800A4A00:;
  cmps(c,0,(int32_t)c->r[0],48); // 800A4A00
  if (crb(c,1)) { goto L_800A4A10; } // 800A4A04
  c->r[4]=0u+0x00000003u; // 800A4A08
  goto L_800A4AF4; // 800A4A0C
L_800A4A10:;
  cmps(c,0,(int32_t)c->r[0],64); // 800A4A10
  if (crb(c,1)) { goto L_800A4A20; } // 800A4A14
  c->r[4]=0u+0x00000004u; // 800A4A18
  goto L_800A4AF4; // 800A4A1C
L_800A4A20:;
  cmps(c,0,(int32_t)c->r[0],96); // 800A4A20
  if (crb(c,1)) { goto L_800A4A30; } // 800A4A24
  c->r[4]=0u+0x00000005u; // 800A4A28
  goto L_800A4AF4; // 800A4A2C
L_800A4A30:;
  cmps(c,0,(int32_t)c->r[0],128); // 800A4A30
  if (crb(c,1)) { goto L_800A4A40; } // 800A4A34
  c->r[4]=0u+0x00000006u; // 800A4A38
  goto L_800A4AF4; // 800A4A3C
L_800A4A40:;
  cmps(c,0,(int32_t)c->r[0],160); // 800A4A40
  if (crb(c,1)) { goto L_800A4A50; } // 800A4A44
  c->r[4]=0u+0x00000007u; // 800A4A48
  goto L_800A4AF4; // 800A4A4C
L_800A4A50:;
  cmps(c,0,(int32_t)c->r[0],192); // 800A4A50
  if (crb(c,1)) { goto L_800A4A60; } // 800A4A54
  c->r[4]=0u+0x00000008u; // 800A4A58
  goto L_800A4AF4; // 800A4A5C
L_800A4A60:;
  cmps(c,0,(int32_t)c->r[0],256); // 800A4A60
  if (crb(c,1)) { goto L_800A4A70; } // 800A4A64
  c->r[4]=0u+0x00000009u; // 800A4A68
  goto L_800A4AF4; // 800A4A6C
L_800A4A70:;
  cmps(c,0,(int32_t)c->r[0],320); // 800A4A70
  if (crb(c,1)) { goto L_800A4A80; } // 800A4A74
  c->r[4]=0u+0x0000000Au; // 800A4A78
  goto L_800A4AF4; // 800A4A7C
L_800A4A80:;
  cmps(c,0,(int32_t)c->r[0],512); // 800A4A80
  if (crb(c,1)) { goto L_800A4A90; } // 800A4A84
  c->r[4]=0u+0x0000000Bu; // 800A4A88
  goto L_800A4AF4; // 800A4A8C
L_800A4A90:;
  cmps(c,0,(int32_t)c->r[0],544); // 800A4A90
  if (crb(c,1)) { goto L_800A4AA0; } // 800A4A94
  c->r[4]=0u+0x0000000Cu; // 800A4A98
  goto L_800A4AF4; // 800A4A9C
L_800A4AA0:;
  cmps(c,0,(int32_t)c->r[0],1024); // 800A4AA0
  if (crb(c,1)) { goto L_800A4AB0; } // 800A4AA4
  c->r[4]=0u+0x0000000Du; // 800A4AA8
  goto L_800A4AF4; // 800A4AAC
L_800A4AB0:;
  cmps(c,0,(int32_t)c->r[0],2048); // 800A4AB0
  if (crb(c,1)) { goto L_800A4AC0; } // 800A4AB4
  c->r[4]=0u+0x0000000Eu; // 800A4AB8
  goto L_800A4AF4; // 800A4ABC
L_800A4AC0:;
  cmps(c,0,(int32_t)c->r[0],4096); // 800A4AC0
  if (crb(c,1)) { goto L_800A4AD0; } // 800A4AC4
  c->r[4]=0u+0x0000000Fu; // 800A4AC8
  goto L_800A4AF4; // 800A4ACC
L_800A4AD0:;
  cmps(c,0,(int32_t)c->r[0],8192); // 800A4AD0
  if (crb(c,1)) { goto L_800A4AE0; } // 800A4AD4
  c->r[4]=0u+0x00000010u; // 800A4AD8
  goto L_800A4AF4; // 800A4ADC
L_800A4AE0:;
  c->r[0]=c->msr; // 800A4AE0
  c->r[4]=c->r[0]|0x00000400u; // 800A4AE4
  c->msr=c->r[4]; // 800A4AE8
  c->msr=c->r[0]; // 800A4AEC
  c->r[4]=0u+0xFFFFFFFFu; // 800A4AF0
L_800A4AF4:;
  c->r[5]=rotl(c->r[4],3)&0xFFFFFFF8u; // 800A4AF4
  c->r[0]=R32(c->r[3]+0x00000024u); // 800A4AF8
  c->r[6]=c->r[3]+c->r[5]; // 800A4AFC
  c->r[5]=R32(c->r[6]+0x0000002Cu); // 800A4B00
  cmps(c,0,(int32_t)c->r[5],(int32_t)c->r[0]); // 800A4B04
  if (crb(c,0)) { goto L_800A4B1C; } // 800A4B08
  c->r[5]=c->r[30]|c->r[30]; // 800A4B0C
  c->r[6]=0u+0x00000018u; // 800A4B10
  c->lr=0x800A4B18u; f_8062C000(c); // 800A4B14
  goto L_800A4B30; // 800A4B18
L_800A4B1C:;
  c->r[0]=c->r[5]+0x00000001u; // 800A4B1C
  W32(c->r[6]+0x0000002Cu,c->r[0]); // 800A4B20
  c->r[0]=R32(c->r[6]+0x00000028u); // 800A4B24
  W32(c->r[30]+0x00000000u,c->r[0]); // 800A4B28
  W32(c->r[6]+0x00000028u,c->r[30]); // 800A4B2C
L_800A4B30:;
  c->r[3]=R32(c->r[31]+0x00000004u); // 800A4B30
  c->r[0]=0u+0x00000000u; // 800A4B34
  W32(c->r[3]+0x00000004u,c->r[0]); // 800A4B38
  c->r[30]=R32(c->r[31]+0x00000004u); // 800A4B3C
  cmps(c,0,(int32_t)c->r[30],0); // 800A4B40
  if (crb(c,2)) { goto L_800A4CD8; } // 800A4B44
  c->r[0]=R32(c->r[30]+0x00000008u); // 800A4B48
  c->r[0]=rotl(c->r[0],0)&0x80000000u; cr0(c,c->r[0]); // 800A4B4C
  if (!crb(c,2)) { goto L_800A4B6C; } // 800A4B50
  c->r[0]=R32(c->r[30]+0x00000008u); // 800A4B54
  c->r[6]=0u+0x00000018u; // 800A4B58
  c->r[3]=R32(c->r[13]+0xFFFFE750u); // 800A4B5C
  c->r[4]=R32(c->r[30]+0x00000000u); // 800A4B60
  c->r[5]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800A4B64
  c->lr=0x800A4B6Cu; f_8062C630(c); // 800A4B68
L_800A4B6C:;
  c->r[0]=0u+0x00000001u; // 800A4B6C
  cmps(c,0,(int32_t)c->r[0],0); // 800A4B70
  if (!crb(c,1)) { goto L_800A4CD8; } // 800A4B74
  cmps(c,0,(int32_t)c->r[30],0); // 800A4B78
  if (crb(c,2)) { goto L_800A4CD8; } // 800A4B7C
  c->r[0]=0u+0x0000000Cu; // 800A4B80
  c->r[3]=R32(c->r[13]+0xFFFFE750u); // 800A4B84
  cmps(c,0,(int32_t)c->r[0],16); // 800A4B88
  if (crb(c,1)) { goto L_800A4B98; } // 800A4B8C
  c->r[4]=0u+0x00000001u; // 800A4B90
  goto L_800A4C9C; // 800A4B94
L_800A4B98:;
  cmps(c,0,(int32_t)c->r[0],32); // 800A4B98
  if (crb(c,1)) { goto L_800A4BA8; } // 800A4B9C
  c->r[4]=0u+0x00000002u; // 800A4BA0
  goto L_800A4C9C; // 800A4BA4
L_800A4BA8:;
  cmps(c,0,(int32_t)c->r[0],48); // 800A4BA8
  if (crb(c,1)) { goto L_800A4BB8; } // 800A4BAC
  c->r[4]=0u+0x00000003u; // 800A4BB0
  goto L_800A4C9C; // 800A4BB4
L_800A4BB8:;
  cmps(c,0,(int32_t)c->r[0],64); // 800A4BB8
  if (crb(c,1)) { goto L_800A4BC8; } // 800A4BBC
  c->r[4]=0u+0x00000004u; // 800A4BC0
  goto L_800A4C9C; // 800A4BC4
L_800A4BC8:;
  cmps(c,0,(int32_t)c->r[0],96); // 800A4BC8
  if (crb(c,1)) { goto L_800A4BD8; } // 800A4BCC
  c->r[4]=0u+0x00000005u; // 800A4BD0
  goto L_800A4C9C; // 800A4BD4
L_800A4BD8:;
  cmps(c,0,(int32_t)c->r[0],128); // 800A4BD8
  if (crb(c,1)) { goto L_800A4BE8; } // 800A4BDC
  c->r[4]=0u+0x00000006u; // 800A4BE0
  goto L_800A4C9C; // 800A4BE4
L_800A4BE8:;
  cmps(c,0,(int32_t)c->r[0],160); // 800A4BE8
  if (crb(c,1)) { goto L_800A4BF8; } // 800A4BEC
  c->r[4]=0u+0x00000007u; // 800A4BF0
  goto L_800A4C9C; // 800A4BF4
L_800A4BF8:;
  cmps(c,0,(int32_t)c->r[0],192); // 800A4BF8
  if (crb(c,1)) { goto L_800A4C08; } // 800A4BFC
  c->r[4]=0u+0x00000008u; // 800A4C00
  goto L_800A4C9C; // 800A4C04
L_800A4C08:;
  cmps(c,0,(int32_t)c->r[0],256); // 800A4C08
  if (crb(c,1)) { goto L_800A4C18; } // 800A4C0C
  c->r[4]=0u+0x00000009u; // 800A4C10
  goto L_800A4C9C; // 800A4C14
L_800A4C18:;
  cmps(c,0,(int32_t)c->r[0],320); // 800A4C18
  if (crb(c,1)) { goto L_800A4C28; } // 800A4C1C
  c->r[4]=0u+0x0000000Au; // 800A4C20
  goto L_800A4C9C; // 800A4C24
L_800A4C28:;
  cmps(c,0,(int32_t)c->r[0],512); // 800A4C28
  if (crb(c,1)) { goto L_800A4C38; } // 800A4C2C
  c->r[4]=0u+0x0000000Bu; // 800A4C30
  goto L_800A4C9C; // 800A4C34
L_800A4C38:;
  cmps(c,0,(int32_t)c->r[0],544); // 800A4C38
  if (crb(c,1)) { goto L_800A4C48; } // 800A4C3C
  c->r[4]=0u+0x0000000Cu; // 800A4C40
  goto L_800A4C9C; // 800A4C44
L_800A4C48:;
  cmps(c,0,(int32_t)c->r[0],1024); // 800A4C48
  if (crb(c,1)) { goto L_800A4C58; } // 800A4C4C
  c->r[4]=0u+0x0000000Du; // 800A4C50
  goto L_800A4C9C; // 800A4C54
L_800A4C58:;
  cmps(c,0,(int32_t)c->r[0],2048); // 800A4C58
  if (crb(c,1)) { goto L_800A4C68; } // 800A4C5C
  c->r[4]=0u+0x0000000Eu; // 800A4C60
  goto L_800A4C9C; // 800A4C64
L_800A4C68:;
  cmps(c,0,(int32_t)c->r[0],4096); // 800A4C68
  if (crb(c,1)) { goto L_800A4C78; } // 800A4C6C
  c->r[4]=0u+0x0000000Fu; // 800A4C70
  goto L_800A4C9C; // 800A4C74
L_800A4C78:;
  cmps(c,0,(int32_t)c->r[0],8192); // 800A4C78
  if (crb(c,1)) { goto L_800A4C88; } // 800A4C7C
  c->r[4]=0u+0x00000010u; // 800A4C80
  goto L_800A4C9C; // 800A4C84
L_800A4C88:;
  c->r[0]=c->msr; // 800A4C88
  c->r[4]=c->r[0]|0x00000400u; // 800A4C8C
  c->msr=c->r[4]; // 800A4C90
  c->msr=c->r[0]; // 800A4C94
  c->r[4]=0u+0xFFFFFFFFu; // 800A4C98
L_800A4C9C:;
  c->r[5]=rotl(c->r[4],3)&0xFFFFFFF8u; // 800A4C9C
  c->r[0]=R32(c->r[3]+0x00000024u); // 800A4CA0
  c->r[6]=c->r[3]+c->r[5]; // 800A4CA4
  c->r[5]=R32(c->r[6]+0x0000002Cu); // 800A4CA8
  cmps(c,0,(int32_t)c->r[5],(int32_t)c->r[0]); // 800A4CAC
  if (crb(c,0)) { goto L_800A4CC4; } // 800A4CB0
  c->r[5]=c->r[30]|c->r[30]; // 800A4CB4
  c->r[6]=0u+0x00000018u; // 800A4CB8
  c->lr=0x800A4CC0u; f_8062C000(c); // 800A4CBC
  goto L_800A4CD8; // 800A4CC0
L_800A4CC4:;
  c->r[0]=c->r[5]+0x00000001u; // 800A4CC4
  W32(c->r[6]+0x0000002Cu,c->r[0]); // 800A4CC8
  c->r[0]=R32(c->r[6]+0x00000028u); // 800A4CCC
  W32(c->r[30]+0x00000000u,c->r[0]); // 800A4CD0
  W32(c->r[6]+0x00000028u,c->r[30]); // 800A4CD4
L_800A4CD8:;
  c->r[28]=0u+0x00000000u; // 800A4CD8
  c->r[30]=0u+0x00000000u; // 800A4CDC
  goto L_800A4D08; // 800A4CE0
L_800A4CE4:;
  c->r[4]=R32(c->r[31]+0x00000008u); // 800A4CE4
  c->r[5]=0u+0x00000008u; // 800A4CE8
  c->r[3]=R32(c->r[13]+0xFFFFE750u); // 800A4CEC
  c->r[6]=0u+0x00000015u; // 800A4CF0
  c->r[4]=R32(c->r[4]+0x00000000u); // 800A4CF4
  c->r[4]=R32(c->r[4]+c->r[30]); // 800A4CF8
  c->lr=0x800A4D00u; f_8062C630(c); // 800A4CFC
  c->r[28]=c->r[28]+0x00000001u; // 800A4D00
  c->r[30]=c->r[30]+0x00000004u; // 800A4D04
L_800A4D08:;
  c->r[3]=R32(c->r[31]+0x00000008u); // 800A4D08
  c->r[0]=R32(c->r[3]+0x00000004u); // 800A4D0C
  cmps(c,0,(int32_t)c->r[28],(int32_t)c->r[0]); // 800A4D10
  if (crb(c,0)) { IRQCHK(c); goto L_800A4CE4; } // 800A4D14
  c->r[0]=0u+0x00000000u; // 800A4D18
  W32(c->r[3]+0x00000004u,c->r[0]); // 800A4D1C
  c->r[30]=R32(c->r[31]+0x00000008u); // 800A4D20
  cmps(c,0,(int32_t)c->r[30],0); // 800A4D24
  if (crb(c,2)) { goto L_800A4EBC; } // 800A4D28
  c->r[0]=R32(c->r[30]+0x00000008u); // 800A4D2C
  c->r[0]=rotl(c->r[0],0)&0x80000000u; cr0(c,c->r[0]); // 800A4D30
  if (!crb(c,2)) { goto L_800A4D50; } // 800A4D34
  c->r[0]=R32(c->r[30]+0x00000008u); // 800A4D38
  c->r[6]=0u+0x00000018u; // 800A4D3C
  c->r[3]=R32(c->r[13]+0xFFFFE750u); // 800A4D40
  c->r[4]=R32(c->r[30]+0x00000000u); // 800A4D44
  c->r[5]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800A4D48
  c->lr=0x800A4D50u; f_8062C630(c); // 800A4D4C
L_800A4D50:;
  c->r[0]=0u+0x00000001u; // 800A4D50
  cmps(c,0,(int32_t)c->r[0],0); // 800A4D54
  if (!crb(c,1)) { goto L_800A4EBC; } // 800A4D58
  cmps(c,0,(int32_t)c->r[30],0); // 800A4D5C
  if (crb(c,2)) { goto L_800A4EBC; } // 800A4D60
  c->r[0]=0u+0x0000000Cu; // 800A4D64
  c->r[3]=R32(c->r[13]+0xFFFFE750u); // 800A4D68
  cmps(c,0,(int32_t)c->r[0],16); // 800A4D6C
  if (crb(c,1)) { goto L_800A4D7C; } // 800A4D70
  c->r[4]=0u+0x00000001u; // 800A4D74
  goto L_800A4E80; // 800A4D78
L_800A4D7C:;
  cmps(c,0,(int32_t)c->r[0],32); // 800A4D7C
  if (crb(c,1)) { goto L_800A4D8C; } // 800A4D80
  c->r[4]=0u+0x00000002u; // 800A4D84
  goto L_800A4E80; // 800A4D88
L_800A4D8C:;
  cmps(c,0,(int32_t)c->r[0],48); // 800A4D8C
  if (crb(c,1)) { goto L_800A4D9C; } // 800A4D90
  c->r[4]=0u+0x00000003u; // 800A4D94
  goto L_800A4E80; // 800A4D98
L_800A4D9C:;
  cmps(c,0,(int32_t)c->r[0],64); // 800A4D9C
  if (crb(c,1)) { goto L_800A4DAC; } // 800A4DA0
  c->r[4]=0u+0x00000004u; // 800A4DA4
  goto L_800A4E80; // 800A4DA8
L_800A4DAC:;
  cmps(c,0,(int32_t)c->r[0],96); // 800A4DAC
  if (crb(c,1)) { goto L_800A4DBC; } // 800A4DB0
  c->r[4]=0u+0x00000005u; // 800A4DB4
  goto L_800A4E80; // 800A4DB8
L_800A4DBC:;
  cmps(c,0,(int32_t)c->r[0],128); // 800A4DBC
  if (crb(c,1)) { goto L_800A4DCC; } // 800A4DC0
  c->r[4]=0u+0x00000006u; // 800A4DC4
  goto L_800A4E80; // 800A4DC8
L_800A4DCC:;
  cmps(c,0,(int32_t)c->r[0],160); // 800A4DCC
  if (crb(c,1)) { goto L_800A4DDC; } // 800A4DD0
  c->r[4]=0u+0x00000007u; // 800A4DD4
  goto L_800A4E80; // 800A4DD8
L_800A4DDC:;
  cmps(c,0,(int32_t)c->r[0],192); // 800A4DDC
  if (crb(c,1)) { goto L_800A4DEC; } // 800A4DE0
  c->r[4]=0u+0x00000008u; // 800A4DE4
  goto L_800A4E80; // 800A4DE8
L_800A4DEC:;
  cmps(c,0,(int32_t)c->r[0],256); // 800A4DEC
  if (crb(c,1)) { goto L_800A4DFC; } // 800A4DF0
  c->r[4]=0u+0x00000009u; // 800A4DF4
  goto L_800A4E80; // 800A4DF8
L_800A4DFC:;
  cmps(c,0,(int32_t)c->r[0],320); // 800A4DFC
  if (crb(c,1)) { goto L_800A4E0C; } // 800A4E00
  c->r[4]=0u+0x0000000Au; // 800A4E04
  goto L_800A4E80; // 800A4E08
L_800A4E0C:;
  cmps(c,0,(int32_t)c->r[0],512); // 800A4E0C
  if (crb(c,1)) { goto L_800A4E1C; } // 800A4E10
  c->r[4]=0u+0x0000000Bu; // 800A4E14
  goto L_800A4E80; // 800A4E18
L_800A4E1C:;
  cmps(c,0,(int32_t)c->r[0],544); // 800A4E1C
  if (crb(c,1)) { goto L_800A4E2C; } // 800A4E20
  c->r[4]=0u+0x0000000Cu; // 800A4E24
  goto L_800A4E80; // 800A4E28
L_800A4E2C:;
  cmps(c,0,(int32_t)c->r[0],1024); // 800A4E2C
  if (crb(c,1)) { goto L_800A4E3C; } // 800A4E30
  c->r[4]=0u+0x0000000Du; // 800A4E34
  goto L_800A4E80; // 800A4E38
L_800A4E3C:;
  cmps(c,0,(int32_t)c->r[0],2048); // 800A4E3C
  if (crb(c,1)) { goto L_800A4E4C; } // 800A4E40
  c->r[4]=0u+0x0000000Eu; // 800A4E44
  goto L_800A4E80; // 800A4E48
L_800A4E4C:;
  cmps(c,0,(int32_t)c->r[0],4096); // 800A4E4C
  if (crb(c,1)) { goto L_800A4E5C; } // 800A4E50
  c->r[4]=0u+0x0000000Fu; // 800A4E54
  goto L_800A4E80; // 800A4E58
L_800A4E5C:;
  cmps(c,0,(int32_t)c->r[0],8192); // 800A4E5C
  if (crb(c,1)) { goto L_800A4E6C; } // 800A4E60
  c->r[4]=0u+0x00000010u; // 800A4E64
  goto L_800A4E80; // 800A4E68
L_800A4E6C:;
  c->r[0]=c->msr; // 800A4E6C
  c->r[4]=c->r[0]|0x00000400u; // 800A4E70
  c->msr=c->r[4]; // 800A4E74
  c->msr=c->r[0]; // 800A4E78
  c->r[4]=0u+0xFFFFFFFFu; // 800A4E7C
L_800A4E80:;
  c->r[5]=rotl(c->r[4],3)&0xFFFFFFF8u; // 800A4E80
  c->r[0]=R32(c->r[3]+0x00000024u); // 800A4E84
  c->r[6]=c->r[3]+c->r[5]; // 800A4E88
  c->r[5]=R32(c->r[6]+0x0000002Cu); // 800A4E8C
  cmps(c,0,(int32_t)c->r[5],(int32_t)c->r[0]); // 800A4E90
  if (crb(c,0)) { goto L_800A4EA8; } // 800A4E94
  c->r[5]=c->r[30]|c->r[30]; // 800A4E98
  c->r[6]=0u+0x00000018u; // 800A4E9C
  c->lr=0x800A4EA4u; f_8062C000(c); // 800A4EA0
  goto L_800A4EBC; // 800A4EA4
L_800A4EA8:;
  c->r[0]=c->r[5]+0x00000001u; // 800A4EA8
  W32(c->r[6]+0x0000002Cu,c->r[0]); // 800A4EAC
  c->r[0]=R32(c->r[6]+0x00000028u); // 800A4EB0
  W32(c->r[30]+0x00000000u,c->r[0]); // 800A4EB4
  W32(c->r[6]+0x00000028u,c->r[30]); // 800A4EB8
L_800A4EBC:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 800A4EBC
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800A4EC0
  c->r[30]=R32(c->r[1]+0x00000018u); // 800A4EC4
  c->r[29]=R32(c->r[1]+0x00000014u); // 800A4EC8
  c->r[28]=R32(c->r[1]+0x00000010u); // 800A4ECC
  c->lr=c->r[0]; // 800A4ED0
  c->r[1]=c->r[1]+0x00000020u; // 800A4ED4
  return; // 800A4ED8
}

// fn_800A4EDC
void f_800A4EDC(Ctx* __restrict c) {
  trace_call(0x800A4EDCu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800A4EDC
  c->r[0]=c->lr; // 800A4EE0
  W32(c->r[1]+0x00000024u,c->r[0]); // 800A4EE4
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800A4EE8
  W32(c->r[1]+0x00000018u,c->r[30]); // 800A4EEC
  W32(c->r[1]+0x00000014u,c->r[29]); // 800A4EF0
  c->r[29]=c->r[4]|c->r[4]; // 800A4EF4
  W32(c->r[1]+0x00000010u,c->r[28]); // 800A4EF8
  c->r[28]=c->r[3]|c->r[3]; // 800A4EFC
  c->r[0]=R8(c->r[13]+0xFFFFBC09u); // 800A4F00
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800A4F04
  if (!crb(c,2)) { goto L_800A4F4C; } // 800A4F08
  c->r[30]=0u+0x80740000u; // 800A4F0C
  c->r[3]=c->r[30]+0x000046F0u; // 800A4F10
  c->lr=0x800A4F18u; f_8035805C(c); // 800A4F14
  c->r[6]=0u+0x806D0000u; // 800A4F18
  c->r[4]=0u+0x80050000u; // 800A4F1C
  c->r[6]=c->r[6]+0xFFFFCAA0u; // 800A4F20
  c->r[3]=c->r[30]+0x000046F0u; // 800A4F24
  c->r[0]=c->r[6]+0x0000000Cu; // 800A4F28
  c->r[5]=0u+0x80750000u; // 800A4F2C
  W32(c->r[30]+0x000046F0u,c->r[6]); // 800A4F30
  c->r[4]=c->r[4]+0x00000788u; // 800A4F34
  c->r[5]=c->r[5]+0xFFFFB714u; // 800A4F38
  W32(c->r[3]+0x000000A8u,c->r[0]); // 800A4F3C
  c->lr=0x800A4F44u; f_803A92B8(c); // 800A4F40
  c->r[0]=0u+0x00000001u; // 800A4F44
  W8(c->r[13]+0xFFFFBC09u,c->r[0]); // 800A4F48
L_800A4F4C:;
  c->r[30]=0u+0x80740000u; // 800A4F4C
  c->r[31]=c->r[30]+0x000046F0u; // 800A4F50
  c->r[0]=R8(c->r[31]+0x000000ACu); // 800A4F54
  cmps(c,0,(int32_t)c->r[0],0); // 800A4F58
  if (!crb(c,2)) { goto L_800A4F68; } // 800A4F5C
  c->r[3]=0u+0xFFFFFFFFu; // 800A4F60
  goto L_800A5058; // 800A4F64
L_800A4F68:;
  c->r[0]=R8(c->r[13]+0xFFFFBC09u); // 800A4F68
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800A4F6C
  if (!crb(c,2)) { goto L_800A4FB0; } // 800A4F70
  c->r[3]=c->r[31]|c->r[31]; // 800A4F74
  c->lr=0x800A4F7Cu; f_8035805C(c); // 800A4F78
  c->r[3]=0u+0x806D0000u; // 800A4F7C
  c->r[4]=0u+0x80050000u; // 800A4F80
  c->r[3]=c->r[3]+0xFFFFCAA0u; // 800A4F84
  c->r[5]=0u+0x80750000u; // 800A4F88
  c->r[0]=c->r[3]+0x0000000Cu; // 800A4F8C
  W32(c->r[30]+0x000046F0u,c->r[3]); // 800A4F90
  c->r[3]=c->r[31]|c->r[31]; // 800A4F94
  c->r[4]=c->r[4]+0x00000788u; // 800A4F98
  W32(c->r[31]+0x000000A8u,c->r[0]); // 800A4F9C
  c->r[5]=c->r[5]+0xFFFFB714u; // 800A4FA0
  c->lr=0x800A4FA8u; f_803A92B8(c); // 800A4FA4
  c->r[0]=0u+0x00000001u; // 800A4FA8
  W8(c->r[13]+0xFFFFBC09u,c->r[0]); // 800A4FAC
L_800A4FB0:;
  c->r[31]=0u+0x80740000u; // 800A4FB0
  c->r[4]=c->r[28]|c->r[28]; // 800A4FB4
  c->r[5]=c->r[29]|c->r[29]; // 800A4FB8
  c->r[3]=c->r[31]+0x000046F0u; // 800A4FBC
  c->lr=0x800A4FC4u; f_8035A13C(c); // 800A4FC0
  cmps(c,0,(int32_t)c->r[3],0); // 800A4FC4
  c->r[30]=c->r[3]|c->r[3]; // 800A4FC8
  if (!crb(c,0)) { goto L_800A4FD4; } // 800A4FCC
  goto L_800A5058; // 800A4FD0
L_800A4FD4:;
  c->r[0]=R8(c->r[13]+0xFFFFBC09u); // 800A4FD4
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800A4FD8
  if (!crb(c,2)) { goto L_800A501C; } // 800A4FDC
  c->r[3]=c->r[31]+0x000046F0u; // 800A4FE0
  c->lr=0x800A4FE8u; f_8035805C(c); // 800A4FE4
  c->r[6]=0u+0x806D0000u; // 800A4FE8
  c->r[4]=0u+0x80050000u; // 800A4FEC
  c->r[6]=c->r[6]+0xFFFFCAA0u; // 800A4FF0
  c->r[3]=c->r[31]+0x000046F0u; // 800A4FF4
  c->r[0]=c->r[6]+0x0000000Cu; // 800A4FF8
  c->r[5]=0u+0x80750000u; // 800A4FFC
  W32(c->r[31]+0x000046F0u,c->r[6]); // 800A5000
  c->r[4]=c->r[4]+0x00000788u; // 800A5004
  c->r[5]=c->r[5]+0xFFFFB714u; // 800A5008
  W32(c->r[3]+0x000000A8u,c->r[0]); // 800A500C
  c->lr=0x800A5014u; f_803A92B8(c); // 800A5010
  c->r[0]=0u+0x00000001u; // 800A5014
  W8(c->r[13]+0xFFFFBC09u,c->r[0]); // 800A5018
L_800A501C:;
  c->r[3]=0u+0x80740000u; // 800A501C
  c->r[4]=c->r[30]|c->r[30]; // 800A5020
  c->r[3]=c->r[3]+0x000046F0u; // 800A5024
  c->lr=0x800A502Cu; f_8035A440(c); // 800A5028
  cmps(c,0,(int32_t)c->r[3],0); // 800A502C
  if (!crb(c,2)) { goto L_800A503C; } // 800A5030
  c->r[3]=0u+0x00000000u; // 800A5034
  goto L_800A5058; // 800A5038
L_800A503C:;
  c->r[4]=R32(c->r[3]+0x0000000Cu); // 800A503C
  c->r[0]=0u+0x00000002u; // 800A5040
  c->r[3]=c->r[30]|c->r[30]; // 800A5044
  c->r[4]=R32(c->r[4]+0x00000000u); // 800A5048
  c->r[4]=R32(c->r[4]+0x00000008u); // 800A504C
  c->r[4]=R32(c->r[4]+0x00000000u); // 800A5050
  W32(c->r[4]+0x0000002Cu,c->r[0]); // 800A5054
L_800A5058:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 800A5058
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800A505C
  c->r[30]=R32(c->r[1]+0x00000018u); // 800A5060
  c->r[29]=R32(c->r[1]+0x00000014u); // 800A5064
  c->r[28]=R32(c->r[1]+0x00000010u); // 800A5068
  c->lr=c->r[0]; // 800A506C
  c->r[1]=c->r[1]+0x00000020u; // 800A5070
  return; // 800A5074
}

// fn_800A5078
void f_800A5078(Ctx* __restrict c) {
  trace_call(0x800A5078u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800A5078
  c->r[0]=c->lr; // 800A507C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800A5080
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800A5084
  W32(c->r[1]+0x00000008u,c->r[30]); // 800A5088
  c->r[30]=c->r[3]|c->r[3]; // 800A508C
  c->r[0]=R8(c->r[13]+0xFFFFBC09u); // 800A5090
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800A5094
  if (!crb(c,2)) { goto L_800A50DC; } // 800A5098
  c->r[31]=0u+0x80740000u; // 800A509C
  c->r[3]=c->r[31]+0x000046F0u; // 800A50A0
  c->lr=0x800A50A8u; f_8035805C(c); // 800A50A4
  c->r[6]=0u+0x806D0000u; // 800A50A8
  c->r[4]=0u+0x80050000u; // 800A50AC
  c->r[6]=c->r[6]+0xFFFFCAA0u; // 800A50B0
  c->r[3]=c->r[31]+0x000046F0u; // 800A50B4
  c->r[0]=c->r[6]+0x0000000Cu; // 800A50B8
  c->r[5]=0u+0x80750000u; // 800A50BC
  W32(c->r[31]+0x000046F0u,c->r[6]); // 800A50C0
  c->r[4]=c->r[4]+0x00000788u; // 800A50C4
  c->r[5]=c->r[5]+0xFFFFB714u; // 800A50C8
  W32(c->r[3]+0x000000A8u,c->r[0]); // 800A50CC
  c->lr=0x800A50D4u; f_803A92B8(c); // 800A50D0
  c->r[0]=0u+0x00000001u; // 800A50D4
  W8(c->r[13]+0xFFFFBC09u,c->r[0]); // 800A50D8
L_800A50DC:;
  c->r[3]=0u+0x80740000u; // 800A50DC
  c->r[4]=c->r[30]|c->r[30]; // 800A50E0
  c->r[3]=c->r[3]+0x000046F0u; // 800A50E4
  c->lr=0x800A50ECu; f_8035A354(c); // 800A50E8
  c->r[0]=R32(c->r[1]+0x00000014u); // 800A50EC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800A50F0
  c->r[30]=R32(c->r[1]+0x00000008u); // 800A50F4
  c->lr=c->r[0]; // 800A50F8
  c->r[1]=c->r[1]+0x00000010u; // 800A50FC
  return; // 800A5100
}

// fn_800A5104
void f_800A5104(Ctx* __restrict c) {
  trace_call(0x800A5104u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800A5104
  c->r[0]=c->lr; // 800A5108
  W32(c->r[1]+0x00000044u,c->r[0]); // 800A510C
  {uint32_t ea=c->r[1]+0x0000000Cu; for(int i=19;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800A5110
  c->r[30]=c->r[3]|c->r[3]; // 800A5114
  c->r[31]=c->r[4]|c->r[4]; // 800A5118
  c->r[0]=R8(c->r[13]+0xFFFFBC09u); // 800A511C
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800A5120
  if (!crb(c,2)) { goto L_800A5168; } // 800A5124
  c->r[19]=0u+0x80740000u; // 800A5128
  c->r[3]=c->r[19]+0x000046F0u; // 800A512C
  c->lr=0x800A5134u; f_8035805C(c); // 800A5130
  c->r[6]=0u+0x806D0000u; // 800A5134
  c->r[4]=0u+0x80050000u; // 800A5138
  c->r[6]=c->r[6]+0xFFFFCAA0u; // 800A513C
  c->r[3]=c->r[19]+0x000046F0u; // 800A5140
  c->r[0]=c->r[6]+0x0000000Cu; // 800A5144
  c->r[5]=0u+0x80750000u; // 800A5148
  W32(c->r[19]+0x000046F0u,c->r[6]); // 800A514C
  c->r[4]=c->r[4]+0x00000788u; // 800A5150
  c->r[5]=c->r[5]+0xFFFFB714u; // 800A5154
  W32(c->r[3]+0x000000A8u,c->r[0]); // 800A5158
  c->lr=0x800A5160u; f_803A92B8(c); // 800A515C
  c->r[0]=0u+0x00000001u; // 800A5160
  W8(c->r[13]+0xFFFFBC09u,c->r[0]); // 800A5164
L_800A5168:;
  c->r[3]=0u+0x80740000u; // 800A5168
  c->r[4]=c->r[30]|c->r[30]; // 800A516C
  c->r[3]=c->r[3]+0x000046F0u; // 800A5170
  c->lr=0x800A5178u; f_8035A440(c); // 800A5174
  cmps(c,0,(int32_t)c->r[3],0); // 800A5178
  c->r[25]=c->r[3]|c->r[3]; // 800A517C
  if (crb(c,2)) { goto L_800A5350; } // 800A5180
  c->r[21]=0u+0x00000000u; // 800A5184
  c->r[23]=0u+0x00000000u; // 800A5188
  c->r[29]=0u+0x80690000u; // 800A518C
  c->r[19]=0u+0x00000000u; // 800A5190
  c->r[28]=0u+0x00000001u; // 800A5194
  goto L_800A528C; // 800A5198
L_800A519C:;
  c->r[3]=R32(c->r[25]+0x0000000Cu); // 800A519C
  c->r[20]=0u+0x00000000u; // 800A51A0
  c->r[22]=0u+0x00000000u; // 800A51A4
  c->r[26]=R32(c->r[3]+c->r[23]); // 800A51A8
  goto L_800A5278; // 800A51AC
L_800A51B0:;
  c->r[24]=R32(c->r[31]+0x00000004u); // 800A51B0
  c->r[27]=R32(c->r[26]+0x00000008u); // 800A51B4
  c->r[0]=R32(c->r[24]+0x00000008u); // 800A51B8
  c->r[3]=R32(c->r[24]+0x00000004u); // 800A51BC
  c->r[0]=rotl(c->r[0],0)&0x3FFFFFFFu; // 800A51C0
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 800A51C4
  if (!crb(c,2)) { goto L_800A51D8; } // 800A51C8
  c->r[3]=c->r[24]|c->r[24]; // 800A51CC
  c->r[4]=0u+0x00000004u; // 800A51D0
  c->lr=0x800A51D8u; f_80623A68(c); // 800A51D4
L_800A51D8:;
  c->r[3]=R32(c->r[24]+0x00000004u); // 800A51D8
  c->r[4]=R32(c->r[24]+0x00000000u); // 800A51DC
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 800A51E0
  c->r[5]=R32(c->r[27]+c->r[22]); // 800A51E4
  W32(c->r[4]+c->r[0],c->r[5]); // 800A51E8
  c->r[0]=c->r[3]+0x00000001u; // 800A51EC
  W32(c->r[24]+0x00000004u,c->r[0]); // 800A51F0
  c->r[4]=R32(c->r[26]+0x00000008u); // 800A51F4
  c->r[3]=R32(c->r[4]+c->r[22]); // 800A51F8
  c->r[3]=R32(c->r[3]+0x00000074u); // 800A51FC
  goto L_800A5210; // 800A5200
L_800A5204:;
  c->r[0]=R8(c->r[3]+0x00000000u); // 800A5204
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800A5208
  if (crb(c,2)) { goto L_800A5220; } // 800A520C
L_800A5210:;
  c->r[0]=R8(c->r[3]+0x00000000u); // 800A5210
  c->r[3]=c->r[3]+0x00000001u; // 800A5214
  cmps(c,0,(int32_t)c->r[0],46); // 800A5218
  if (!crb(c,2)) { IRQCHK(c); goto L_800A5204; } // 800A521C
L_800A5220:;
  c->r[4]=R32(c->r[4]+c->r[22]); // 800A5220
  W32(c->r[4]+0x00000074u,c->r[3]); // 800A5224
  c->r[0]=R8(c->r[3]+0x00000000u); // 800A5228
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800A522C
  if (!crb(c,2)) { goto L_800A5244; } // 800A5230
  c->r[3]=R32(c->r[26]+0x00000008u); // 800A5234
  c->r[3]=R32(c->r[3]+c->r[22]); // 800A5238
  W32(c->r[3]+0x0000000Cu,c->r[28]); // 800A523C
  goto L_800A5270; // 800A5240
L_800A5244:;
  c->r[4]=c->r[29]+0xFFFFDE58u; // 800A5244
  c->lr=0x800A524Cu; f_803B393C(c); // 800A5248
  cmps(c,0,(int32_t)c->r[3],0); // 800A524C
  if (!crb(c,2)) { goto L_800A5264; } // 800A5250
  c->r[3]=R32(c->r[26]+0x00000008u); // 800A5254
  c->r[3]=R32(c->r[3]+c->r[22]); // 800A5258
  W32(c->r[3]+0x0000000Cu,c->r[28]); // 800A525C
  goto L_800A5270; // 800A5260
L_800A5264:;
  c->r[3]=R32(c->r[26]+0x00000008u); // 800A5264
  c->r[3]=R32(c->r[3]+c->r[22]); // 800A5268
  W32(c->r[3]+0x0000000Cu,c->r[19]); // 800A526C
L_800A5270:;
  c->r[22]=c->r[22]+0x00000004u; // 800A5270
  c->r[20]=c->r[20]+0x00000001u; // 800A5274
L_800A5278:;
  c->r[0]=R32(c->r[26]+0x0000000Cu); // 800A5278
  cmps(c,0,(int32_t)c->r[20],(int32_t)c->r[0]); // 800A527C
  if (crb(c,0)) { IRQCHK(c); goto L_800A51B0; } // 800A5280
  c->r[23]=c->r[23]+0x00000004u; // 800A5284
  c->r[21]=c->r[21]+0x00000001u; // 800A5288
L_800A528C:;
  c->r[0]=R32(c->r[25]+0x00000010u); // 800A528C
  cmps(c,0,(int32_t)c->r[21],(int32_t)c->r[0]); // 800A5290
  if (crb(c,0)) { IRQCHK(c); goto L_800A519C; } // 800A5294
  c->r[20]=0u+0x00000000u; // 800A5298
  c->r[24]=0u+0x00000000u; // 800A529C
  goto L_800A533C; // 800A52A0
L_800A52A4:;
  c->r[3]=R32(c->r[25]+0x0000000Cu); // 800A52A4
  c->r[21]=0u+0x00000000u; // 800A52A8
  c->r[26]=0u+0x00000000u; // 800A52AC
  c->r[28]=R32(c->r[3]+c->r[24]); // 800A52B0
  goto L_800A5328; // 800A52B4
L_800A52B8:;
  c->r[3]=R32(c->r[13]+0xFFFFE750u); // 800A52B8
  c->r[4]=0u+0x00000008u; // 800A52BC
  c->r[5]=0u+0x00000015u; // 800A52C0
  c->lr=0x800A52C8u; f_8062C34C(c); // 800A52C4
  c->r[4]=R32(c->r[28]+0x00000014u); // 800A52C8
  c->r[29]=c->r[3]|c->r[3]; // 800A52CC
  c->r[4]=R32(c->r[4]+c->r[26]); // 800A52D0
  W32(c->r[3]+0x00000000u,c->r[4]); // 800A52D4
  c->r[4]=R32(c->r[4]+0x00000014u); // 800A52D8
  c->r[0]=R32(c->r[4]+0x00000074u); // 800A52DC
  W32(c->r[3]+0x00000004u,c->r[0]); // 800A52E0
  c->r[19]=R32(c->r[31]+0x00000008u); // 800A52E4
  c->r[0]=R32(c->r[19]+0x00000008u); // 800A52E8
  c->r[3]=R32(c->r[19]+0x00000004u); // 800A52EC
  c->r[0]=rotl(c->r[0],0)&0x3FFFFFFFu; // 800A52F0
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 800A52F4
  if (!crb(c,2)) { goto L_800A5308; } // 800A52F8
  c->r[3]=c->r[19]|c->r[19]; // 800A52FC
  c->r[4]=0u+0x00000004u; // 800A5300
  c->lr=0x800A5308u; f_80623A68(c); // 800A5304
L_800A5308:;
  c->r[3]=R32(c->r[19]+0x00000004u); // 800A5308
  c->r[26]=c->r[26]+0x00000004u; // 800A530C
  c->r[4]=R32(c->r[19]+0x00000000u); // 800A5310
  c->r[21]=c->r[21]+0x00000001u; // 800A5314
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 800A5318
  c->r[3]=c->r[3]+0x00000001u; // 800A531C
  W32(c->r[4]+c->r[0],c->r[29]); // 800A5320
  W32(c->r[19]+0x00000004u,c->r[3]); // 800A5324
L_800A5328:;
  c->r[0]=R32(c->r[28]+0x00000018u); // 800A5328
  cmps(c,0,(int32_t)c->r[21],(int32_t)c->r[0]); // 800A532C
  if (crb(c,0)) { IRQCHK(c); goto L_800A52B8; } // 800A5330
  c->r[24]=c->r[24]+0x00000004u; // 800A5334
  c->r[20]=c->r[20]+0x00000001u; // 800A5338
L_800A533C:;
  c->r[0]=R32(c->r[25]+0x00000010u); // 800A533C
  cmps(c,0,(int32_t)c->r[20],(int32_t)c->r[0]); // 800A5340
  if (crb(c,0)) { IRQCHK(c); goto L_800A52A4; } // 800A5344
  c->r[0]=c->r[30]|0x00420000u; // 800A5348
  W32(c->r[31]+0x00000000u,c->r[0]); // 800A534C
L_800A5350:;
  {uint32_t ea=c->r[1]+0x0000000Cu; for(int i=19;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800A5350
  c->r[0]=R32(c->r[1]+0x00000044u); // 800A5354
  c->lr=c->r[0]; // 800A5358
  c->r[1]=c->r[1]+0x00000040u; // 800A535C
  return; // 800A5360
}

// fn_800A5364
void f_800A5364(Ctx* __restrict c) {
  trace_call(0x800A5364u);
  c->r[11]=rotl(c->r[1],0)&0x0000000Fu; // 800A5364
  c->r[12]=c->r[1]|c->r[1]; // 800A5368
  c->r[11]=addc(c,~c->r[11],0xFFFFFD70u,1); // 800A536C
  {uint32_t ea=c->r[1]+c->r[11]; W32(ea,c->r[1]); c->r[1]=ea;} // 800A5370
  c->r[0]=c->lr; // 800A5374
  c->r[11]=c->r[12]+0xFFFFFF90u; // 800A5378
  W32(c->r[12]+0x00000004u,c->r[0]); // 800A537C
  {uint32_t ea=c->r[12]+0xFFFFFFF0u; WF64(ea,c->f[31]);} // 800A5380
  {uint32_t ea=c->r[12]+0xFFFFFFF8u; psq_store(c,31,ea,0,0);} // 800A5384
  {uint32_t ea=c->r[12]+0xFFFFFFE0u; WF64(ea,c->f[30]);} // 800A5388
  {uint32_t ea=c->r[12]+0xFFFFFFE8u; psq_store(c,30,ea,0,0);} // 800A538C
  {uint32_t ea=c->r[12]+0xFFFFFFD0u; WF64(ea,c->f[29]);} // 800A5390
  {uint32_t ea=c->r[12]+0xFFFFFFD8u; psq_store(c,29,ea,0,0);} // 800A5394
  {uint32_t ea=c->r[12]+0xFFFFFFC0u; WF64(ea,c->f[28]);} // 800A5398
  {uint32_t ea=c->r[12]+0xFFFFFFC8u; psq_store(c,28,ea,0,0);} // 800A539C
  {uint32_t ea=c->r[12]+0xFFFFFFB0u; WF64(ea,c->f[27]);} // 800A53A0
  {uint32_t ea=c->r[12]+0xFFFFFFB8u; psq_store(c,27,ea,0,0);} // 800A53A4
  {uint32_t ea=c->r[12]+0xFFFFFFA0u; WF64(ea,c->f[26]);} // 800A53A8
  {uint32_t ea=c->r[12]+0xFFFFFFA8u; psq_store(c,26,ea,0,0);} // 800A53AC
  {uint32_t ea=c->r[12]+0xFFFFFF90u; WF64(ea,c->f[25]);} // 800A53B0
  {uint32_t ea=c->r[12]+0xFFFFFF98u; psq_store(c,25,ea,0,0);} // 800A53B4
  c->lr=0x800A53BCu; f_803A9BD0(c); // 800A53B8
  {uint32_t ea=c->r[3]+0x0000001Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800A53BC
  c->r[16]=c->r[5]|c->r[5]; // 800A53C0
  {uint32_t ea=c->r[3]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800A53C4
  c->r[14]=c->r[3]|c->r[3]; // 800A53C8
  c->r[15]=c->r[4]|c->r[4]; // 800A53CC
  c->r[5]=c->r[1]+0x000000A0u; // 800A53D0
  {uint32_t ea=c->r[2]+0xFFFF9914u; c->f[3]=c->ps1[3]=RF32(ea);} // 800A53D4
  {uint32_t ea=c->r[3]+0x0000002Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 800A53D8
  {double t0=S(c->f[0]), t1=S(c->f[1]); c->f[0]=t0; c->ps1[0]=t1;} // 800A53DC
  {uint32_t ea=c->r[1]+0x000000A0u; psq_store(c,0,ea,0,0);} // 800A53E0
  {double t0=S(c->f[2]), t1=S(c->f[3]); c->f[0]=t0; c->ps1[0]=t1;} // 800A53E4
  c->r[24]=0u+0x00000008u; // 800A53E8
  c->r[4]=c->r[14]|c->r[14]; // 800A53EC
  {uint32_t ea=c->r[5]+0x00000008u; psq_store(c,0,ea,0,0);} // 800A53F0
  {uint32_t ea=c->r[3]+0x0000000Cu; WF32(ea,c->f[3]);} // 800A53F4
  {uint32_t ea=c->r[3]+0x0000001Cu; WF32(ea,c->f[3]);} // 800A53F8
  {uint32_t ea=c->r[3]+0x0000002Cu; WF32(ea,c->f[3]);} // 800A53FC
  c->lr=0x800A5404u; f_803831C4(c); // 800A5400
  c->r[10]=R32(c->r[15]+0x00000004u); // 800A5404
  c->r[22]=c->r[1]+0x00000160u; // 800A5408
  {uint32_t ea=0u+c->r[14]; psq_load(c,26,ea,0,0);} // 800A540C
  c->r[25]=c->r[1]+0x00000010u; // 800A5410
  {uint32_t ea=c->r[14]+0x00000010u; psq_load(c,28,ea,0,0);} // 800A5414
  c->r[26]=c->r[1]+0x00000018u; // 800A5418
  {uint32_t ea=c->r[14]+c->r[24]; psq_load(c,27,ea,0,0);} // 800A541C
  c->r[27]=c->r[1]+0x00000020u; // 800A5420
  {uint32_t ea=c->r[14]+0x00000018u; psq_load(c,29,ea,0,0);} // 800A5424
  c->r[28]=c->r[1]+0x00000028u; // 800A5428
  {uint32_t ea=c->r[14]+0x00000020u; psq_load(c,30,ea,0,0);} // 800A542C
  c->r[29]=c->r[1]+0x00000030u; // 800A5430
  {uint32_t ea=c->r[14]+0x00000028u; psq_load(c,31,ea,0,0);} // 800A5434
  c->r[30]=c->r[1]+0x00000038u; // 800A5438
  {uint32_t ea=c->r[1]+0x000001A0u; psq_store(c,26,ea,0,0);} // 800A543C
  c->r[31]=c->r[1]+0x00000040u; // 800A5440
  c->r[18]=R32(c->r[10]+0x00000000u); // 800A5444
  c->r[14]=c->r[1]+0x00000048u; // 800A5448
  {uint32_t ea=c->r[1]+0x000001A8u; psq_store(c,27,ea,0,0);} // 800A544C
  c->r[21]=c->r[1]+0x00000170u; // 800A5450
  {uint32_t ea=c->r[2]+0xFFFF9914u; c->f[25]=c->ps1[25]=RF32(ea);} // 800A5454
  c->r[20]=c->r[1]+0x00000180u; // 800A5458
  {uint32_t ea=c->r[1]+0x000001B0u; psq_store(c,28,ea,0,0);} // 800A545C
  c->r[19]=c->r[1]+0x00000190u; // 800A5460
  c->r[23]=c->r[1]+0x00000090u; // 800A5464
  {uint32_t ea=c->r[1]+0x000001B8u; psq_store(c,29,ea,0,0);} // 800A5468
  {uint32_t ea=c->r[1]+0x000001C0u; psq_store(c,30,ea,0,0);} // 800A546C
  {uint32_t ea=c->r[1]+0x000001C8u; psq_store(c,31,ea,0,0);} // 800A5470
  goto L_800A5568; // 800A5474
L_800A5478:;
  c->r[17]=R32(c->r[18]+0x00000000u); // 800A5478
  c->r[3]=c->r[17]+0x000000F0u; // 800A547C
  {uint32_t ea=c->r[17]+0x000000F0u; psq_load(c,7,ea,0,0);} // 800A5480
  c->r[4]=c->r[3]+0x00000010u; // 800A5484
  {uint32_t ea=c->r[3]+c->r[24]; psq_load(c,6,ea,0,0);} // 800A5488
  c->r[5]=c->r[3]+0x00000020u; // 800A548C
  c->r[6]=c->r[3]+0x00000030u; // 800A5490
  {uint32_t ea=c->r[3]+0x00000010u; psq_load(c,5,ea,0,0);} // 800A5494
  {uint32_t ea=c->r[4]+c->r[24]; psq_load(c,4,ea,0,0);} // 800A5498
  {uint32_t ea=c->r[3]+0x00000020u; psq_load(c,3,ea,0,0);} // 800A549C
  {uint32_t ea=c->r[5]+c->r[24]; psq_load(c,2,ea,0,0);} // 800A54A0
  {uint32_t ea=c->r[3]+0x00000030u; psq_load(c,1,ea,0,0);} // 800A54A4
  {uint32_t ea=c->r[6]+c->r[24]; psq_load(c,0,ea,0,0);} // 800A54A8
  {uint32_t ea=0u+c->r[25]; psq_store(c,7,ea,0,0);} // 800A54AC
  {uint32_t ea=0u+c->r[22]; psq_store(c,7,ea,0,0);} // 800A54B0
  {uint32_t ea=c->r[22]+c->r[24]; psq_store(c,6,ea,0,0);} // 800A54B4
  {uint32_t ea=0u+c->r[21]; psq_store(c,5,ea,0,0);} // 800A54B8
  {uint32_t ea=c->r[21]+c->r[24]; psq_store(c,4,ea,0,0);} // 800A54BC
  {uint32_t ea=0u+c->r[20]; psq_store(c,3,ea,0,0);} // 800A54C0
  {uint32_t ea=c->r[20]+c->r[24]; psq_store(c,2,ea,0,0);} // 800A54C4
  {uint32_t ea=0u+c->r[19]; psq_store(c,1,ea,0,0);} // 800A54C8
  {uint32_t ea=c->r[19]+c->r[24]; psq_store(c,0,ea,0,0);} // 800A54CC
  c->r[0]=R32(c->r[17]+0x0000000Cu); // 800A54D0
  {uint32_t ea=0u+c->r[26]; psq_store(c,6,ea,0,0);} // 800A54D4
  cmps(c,0,(int32_t)c->r[0],0); // 800A54D8
  {uint32_t ea=0u+c->r[27]; psq_store(c,5,ea,0,0);} // 800A54DC
  {uint32_t ea=0u+c->r[28]; psq_store(c,4,ea,0,0);} // 800A54E0
  {uint32_t ea=0u+c->r[29]; psq_store(c,3,ea,0,0);} // 800A54E4
  {uint32_t ea=0u+c->r[30]; psq_store(c,2,ea,0,0);} // 800A54E8
  {uint32_t ea=0u+c->r[31]; psq_store(c,1,ea,0,0);} // 800A54EC
  {uint32_t ea=0u+c->r[14]; psq_store(c,0,ea,0,0);} // 800A54F0
  if (crb(c,2)) { goto L_800A5508; } // 800A54F4
  c->r[3]=c->r[16]+0x000000BCu; // 800A54F8
  c->r[4]=c->r[1]+0x00000130u; // 800A54FC
  c->lr=0x800A5504u; f_80382F2C(c); // 800A5500
  goto L_800A551C; // 800A5504
L_800A5508:;
  c->r[4]=R32(c->r[17]+0x00000074u); // 800A5508
  c->r[3]=c->r[16]|c->r[16]; // 800A550C
  c->lr=0x800A5514u; f_802E6F14(c); // 800A5510
  c->r[4]=c->r[1]+0x00000130u; // 800A5514
  c->lr=0x800A551Cu; f_80382F2C(c); // 800A5518
L_800A551C:;
  {uint32_t ea=c->r[1]+0x0000014Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800A551C
  {uint32_t ea=c->r[1]+0x0000013Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800A5520
  {uint32_t ea=c->r[1]+0x0000015Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 800A5524
  {double t0=S(c->f[0]), t1=S(c->f[1]); c->f[1]=t0; c->ps1[1]=t1;} // 800A5528
  {uint32_t ea=0u+c->r[23]; psq_store(c,1,ea,0,0);} // 800A552C
  {double t0=S(c->f[2]), t1=S(c->f[25]); c->f[0]=t0; c->ps1[0]=t1;} // 800A5530
  c->r[3]=c->r[17]|c->r[17]; // 800A5534
  c->r[4]=c->r[22]|c->r[22]; // 800A5538
  {uint32_t ea=c->r[23]+c->r[24]; psq_store(c,0,ea,0,0);} // 800A553C
  {uint32_t ea=0u+c->r[19]; psq_store(c,1,ea,0,0);} // 800A5540
  {uint32_t ea=c->r[1]+0x00000198u; psq_store(c,0,ea,0,0);} // 800A5544
  {uint32_t ea=0u+c->r[22]; psq_store(c,26,ea,0,0);} // 800A5548
  {uint32_t ea=c->r[1]+0x00000168u; psq_store(c,27,ea,0,0);} // 800A554C
  {uint32_t ea=0u+c->r[21]; psq_store(c,28,ea,0,0);} // 800A5550
  {uint32_t ea=c->r[1]+0x00000178u; psq_store(c,29,ea,0,0);} // 800A5554
  {uint32_t ea=0u+c->r[20]; psq_store(c,30,ea,0,0);} // 800A5558
  {uint32_t ea=c->r[1]+0x00000188u; psq_store(c,31,ea,0,0);} // 800A555C
  c->lr=0x800A5564u; f_805A3958(c); // 800A5560
  c->r[18]=c->r[18]+0x00000004u; // 800A5564
L_800A5568:;
  c->r[3]=R32(c->r[15]+0x00000004u); // 800A5568
  c->r[0]=R32(c->r[3]+0x00000004u); // 800A556C
  c->r[3]=R32(c->r[3]+0x00000000u); // 800A5570
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800A5574
  c->r[0]=c->r[3]+c->r[0]; // 800A5578
  cmpu(c,0,c->r[18],c->r[0]); // 800A557C
  if (!crb(c,2)) { IRQCHK(c); goto L_800A5478; } // 800A5580
  c->r[0]=R8(c->r[13]+0xFFFFBC09u); // 800A5584
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800A5588
  if (!crb(c,2)) { goto L_800A55D4; } // 800A558C
  c->r[14]=0u+0x80740000u; // 800A5590
  c->r[14]=c->r[14]+0x000046F0u; // 800A5594
  c->r[3]=c->r[14]|c->r[14]; // 800A5598
  c->lr=0x800A55A0u; f_8035805C(c); // 800A559C
  c->r[3]=0u+0x806D0000u; // 800A55A0
  c->r[4]=0u+0x80050000u; // 800A55A4
  c->r[3]=c->r[3]+0xFFFFCAA0u; // 800A55A8
  c->r[5]=0u+0x80750000u; // 800A55AC
  c->r[0]=c->r[3]+0x0000000Cu; // 800A55B0
  W32(c->r[14]+0x00000000u,c->r[3]); // 800A55B4
  c->r[3]=c->r[14]|c->r[14]; // 800A55B8
  c->r[4]=c->r[4]+0x00000788u; // 800A55BC
  W32(c->r[14]+0x000000A8u,c->r[0]); // 800A55C0
  c->r[5]=c->r[5]+0xFFFFB714u; // 800A55C4
  c->lr=0x800A55CCu; f_803A92B8(c); // 800A55C8
  c->r[0]=0u+0x00000001u; // 800A55CC
  W8(c->r[13]+0xFFFFBC09u,c->r[0]); // 800A55D0
L_800A55D4:;
  c->r[3]=0u+0x80740000u; // 800A55D4
  c->r[4]=R32(c->r[15]+0x00000008u); // 800A55D8
  c->r[3]=c->r[3]+0x000046F0u; // 800A55DC
  c->r[22]=c->r[1]+0x00000080u; // 800A55E0
  c->r[3]=R32(c->r[3]+0x000000B4u); // 800A55E4
  c->r[20]=c->r[1]+0x00000088u; // 800A55E8
  c->r[16]=R32(c->r[4]+0x00000000u); // 800A55EC
  c->r[19]=c->r[1]+0x00000060u; // 800A55F0
  c->r[14]=R32(c->r[3]+0x00000024u); // 800A55F4
  c->r[18]=c->r[1]+0x00000068u; // 800A55F8
  c->r[23]=0u+0x00000020u; // 800A55FC
  c->r[21]=0u+0x00000028u; // 800A5600
  goto L_800A578C; // 800A5604
L_800A5608:;
  c->r[3]=R32(c->r[16]+0x00000000u); // 800A5608
  c->r[3]=R32(c->r[3]+0x00000000u); // 800A560C
  c->r[17]=R32(c->r[3]+0x0000000Cu); // 800A5610
  cmps(c,0,(int32_t)c->r[17],0); // 800A5614
  if (crb(c,2)) { goto L_800A5788; } // 800A5618
  c->r[12]=R32(c->r[17]+0x00000000u); // 800A561C
  c->r[3]=c->r[17]|c->r[17]; // 800A5620
  c->r[12]=R32(c->r[12]+0x00000028u); // 800A5624
  c->ctr=c->r[12]; // 800A5628
  if (true) { c->lr=0x800A5630u; dispatch(c,c->ctr); } // 800A562C
  cmps(c,0,(int32_t)c->r[3],2); // 800A5630
  if (crb(c,2)) { goto L_800A573C; } // 800A5634
  if (!crb(c,0)) { goto L_800A564C; } // 800A5638
  cmps(c,0,(int32_t)c->r[3],0); // 800A563C
  if (crb(c,2)) { goto L_800A56A8; } // 800A5640
  if (!crb(c,0)) { goto L_800A56F4; } // 800A5644
  goto L_800A5788; // 800A5648
L_800A564C:;
  cmps(c,0,(int32_t)c->r[3],12); // 800A564C
  if (crb(c,2)) { goto L_800A5658; } // 800A5650
  goto L_800A5788; // 800A5654
L_800A5658:;
  c->r[3]=R32(c->r[16]+0x00000000u); // 800A5658
  c->r[3]=R32(c->r[3]+0x00000000u); // 800A565C
  c->r[0]=R32(c->r[3]+0x00000018u); // 800A5660
  cmpu(c,0,c->r[0],c->r[14]); // 800A5664
  if (!crb(c,2)) { goto L_800A5788; } // 800A5668
  c->r[17]=R32(c->r[17]+0x00000018u); // 800A566C
  c->r[5]=c->r[22]|c->r[22]; // 800A5670
  c->r[4]=R32(c->r[3]+0x00000014u); // 800A5674
  c->r[3]=c->r[1]+0x00000070u; // 800A5678
  {uint32_t ea=c->r[17]+c->r[23]; psq_load(c,0,ea,0,0);} // 800A567C
  {uint32_t ea=0u+c->r[22]; psq_store(c,0,ea,0,0);} // 800A5680
  c->r[4]=c->r[4]+0x000000F0u; // 800A5684
  {uint32_t ea=c->r[17]+c->r[21]; psq_load(c,0,ea,0,0);} // 800A5688
  {uint32_t ea=0u+c->r[20]; psq_store(c,0,ea,0,0);} // 800A568C
  c->lr=0x800A5694u; f_8062AC30(c); // 800A5690
  c->r[3]=c->r[17]|c->r[17]; // 800A5694
  c->r[4]=c->r[22]|c->r[22]; // 800A5698
  c->r[5]=c->r[1]+0x00000070u; // 800A569C
  c->lr=0x800A56A4u; f_8058E4F8(c); // 800A56A0
  goto L_800A5788; // 800A56A4
L_800A56A8:;
  c->r[3]=R32(c->r[16]+0x00000000u); // 800A56A8
  c->r[3]=R32(c->r[3]+0x00000000u); // 800A56AC
  c->r[0]=R32(c->r[3]+0x00000018u); // 800A56B0
  cmpu(c,0,c->r[0],c->r[14]); // 800A56B4
  if (!crb(c,2)) { goto L_800A5788; } // 800A56B8
  c->r[4]=R32(c->r[3]+0x00000014u); // 800A56BC
  c->r[5]=c->r[19]|c->r[19]; // 800A56C0
  {uint32_t ea=c->r[17]+c->r[23]; psq_load(c,0,ea,0,0);} // 800A56C4
  c->r[3]=c->r[1]+0x00000050u; // 800A56C8
  {uint32_t ea=0u+c->r[19]; psq_store(c,0,ea,0,0);} // 800A56CC
  c->r[4]=c->r[4]+0x000000F0u; // 800A56D0
  {uint32_t ea=c->r[17]+c->r[21]; psq_load(c,0,ea,0,0);} // 800A56D4
  {uint32_t ea=0u+c->r[18]; psq_store(c,0,ea,0,0);} // 800A56D8
  c->lr=0x800A56E0u; f_8062AC30(c); // 800A56DC
  c->r[3]=c->r[17]|c->r[17]; // 800A56E0
  c->r[4]=c->r[19]|c->r[19]; // 800A56E4
  c->r[5]=c->r[1]+0x00000050u; // 800A56E8
  c->lr=0x800A56F0u; f_8058E4F8(c); // 800A56EC
  goto L_800A5788; // 800A56F0
L_800A56F4:;
  c->r[3]=R32(c->r[16]+0x00000000u); // 800A56F4
  c->r[3]=R32(c->r[3]+0x00000000u); // 800A56F8
  c->r[0]=R32(c->r[3]+0x00000018u); // 800A56FC
  cmpu(c,0,c->r[0],c->r[14]); // 800A5700
  if (!crb(c,2)) { goto L_800A5788; } // 800A5704
  c->r[4]=R32(c->r[3]+0x00000014u); // 800A5708
  c->r[24]=c->r[17]+0x00000020u; // 800A570C
  c->r[5]=c->r[24]|c->r[24]; // 800A5710
  c->r[3]=c->r[1]+0x000000F0u; // 800A5714
  c->r[4]=c->r[4]+0x000000F0u; // 800A5718
  c->lr=0x800A5720u; f_806294D4(c); // 800A571C
  c->r[6]=c->r[24]|c->r[24]; // 800A5720
  c->r[3]=c->r[17]|c->r[17]; // 800A5724
  c->r[7]=c->r[1]+0x000000F0u; // 800A5728
  c->r[5]=c->r[1]+0x00000120u; // 800A572C
  c->r[4]=c->r[24]+0x00000030u; // 800A5730
  c->lr=0x800A5738u; f_8058E8CC(c); // 800A5734
  goto L_800A5788; // 800A5738
L_800A573C:;
  c->r[3]=R32(c->r[16]+0x00000000u); // 800A573C
  c->r[3]=R32(c->r[3]+0x00000000u); // 800A5740
  c->r[0]=R32(c->r[3]+0x00000018u); // 800A5744
  cmpu(c,0,c->r[0],c->r[14]); // 800A5748
  if (!crb(c,2)) { goto L_800A5788; } // 800A574C
  c->r[4]=R32(c->r[3]+0x00000014u); // 800A5750
  c->r[24]=c->r[17]+0x00000020u; // 800A5754
  c->r[5]=c->r[24]|c->r[24]; // 800A5758
  c->r[3]=c->r[1]+0x000000B0u; // 800A575C
  c->r[4]=c->r[4]+0x000000F0u; // 800A5760
  c->lr=0x800A5768u; f_806294D4(c); // 800A5764
  c->r[6]=c->r[24]|c->r[24]; // 800A5768
  c->r[3]=c->r[17]|c->r[17]; // 800A576C
  c->r[9]=c->r[1]+0x000000C0u; // 800A5770
  c->r[8]=c->r[24]+0x00000010u; // 800A5774
  c->r[7]=c->r[1]+0x000000B0u; // 800A5778
  c->r[5]=c->r[1]+0x000000E0u; // 800A577C
  c->r[4]=c->r[24]+0x00000030u; // 800A5780
  c->lr=0x800A5788u; f_8058F60C(c); // 800A5784
L_800A5788:;
  c->r[16]=c->r[16]+0x00000004u; // 800A5788
L_800A578C:;
  c->r[3]=R32(c->r[15]+0x00000008u); // 800A578C
  c->r[0]=R32(c->r[3]+0x00000004u); // 800A5790
  c->r[3]=R32(c->r[3]+0x00000000u); // 800A5794
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800A5798
  c->r[0]=c->r[3]+c->r[0]; // 800A579C
  cmpu(c,0,c->r[16],c->r[0]); // 800A57A0
  if (!crb(c,2)) { IRQCHK(c); goto L_800A5608; } // 800A57A4
  c->r[3]=R32(c->r[15]+0x00000004u); // 800A57A8
  c->r[14]=R32(c->r[3]+0x00000000u); // 800A57AC
  goto L_800A57C0; // 800A57B0
L_800A57B4:;
  c->r[3]=R32(c->r[14]+0x00000000u); // 800A57B4
  c->lr=0x800A57BCu; f_805A18AC(c); // 800A57B8
  c->r[14]=c->r[14]+0x00000004u; // 800A57BC
L_800A57C0:;
  c->r[3]=R32(c->r[15]+0x00000004u); // 800A57C0
  c->r[0]=R32(c->r[3]+0x00000004u); // 800A57C4
  c->r[3]=R32(c->r[3]+0x00000000u); // 800A57C8
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800A57CC
  c->r[0]=c->r[3]+c->r[0]; // 800A57D0
  cmpu(c,0,c->r[14],c->r[0]); // 800A57D4
  if (!crb(c,2)) { IRQCHK(c); goto L_800A57B4; } // 800A57D8
  c->r[10]=R32(c->r[1]+0x00000000u); // 800A57DC
  c->r[11]=c->r[10]+0xFFFFFF90u; // 800A57E0
  {uint32_t ea=c->r[10]+0xFFFFFFF8u; psq_load(c,31,ea,0,0);} // 800A57E4
  {uint32_t ea=c->r[10]+0xFFFFFFF0u; c->f[31]=RF64(ea);} // 800A57E8
  {uint32_t ea=c->r[10]+0xFFFFFFE8u; psq_load(c,30,ea,0,0);} // 800A57EC
  {uint32_t ea=c->r[10]+0xFFFFFFE0u; c->f[30]=RF64(ea);} // 800A57F0
  {uint32_t ea=c->r[10]+0xFFFFFFD8u; psq_load(c,29,ea,0,0);} // 800A57F4
  {uint32_t ea=c->r[10]+0xFFFFFFD0u; c->f[29]=RF64(ea);} // 800A57F8
  {uint32_t ea=c->r[10]+0xFFFFFFC8u; psq_load(c,28,ea,0,0);} // 800A57FC
  {uint32_t ea=c->r[10]+0xFFFFFFC0u; c->f[28]=RF64(ea);} // 800A5800
  {uint32_t ea=c->r[10]+0xFFFFFFB8u; psq_load(c,27,ea,0,0);} // 800A5804
  {uint32_t ea=c->r[10]+0xFFFFFFB0u; c->f[27]=RF64(ea);} // 800A5808
  {uint32_t ea=c->r[10]+0xFFFFFFA8u; psq_load(c,26,ea,0,0);} // 800A580C
  {uint32_t ea=c->r[10]+0xFFFFFFA0u; c->f[26]=RF64(ea);} // 800A5810
  {uint32_t ea=c->r[10]+0xFFFFFF98u; psq_load(c,25,ea,0,0);} // 800A5814
  {uint32_t ea=c->r[10]+0xFFFFFF90u; c->f[25]=RF64(ea);} // 800A5818
  c->lr=0x800A5820u; f_803A9C1C(c); // 800A581C
  c->r[0]=R32(c->r[10]+0x00000004u); // 800A5820
  c->lr=c->r[0]; // 800A5824
  c->r[1]=c->r[10]|c->r[10]; // 800A5828
  return; // 800A582C
}

// fn_800A5830
void f_800A5830(Ctx* __restrict c) {
  trace_call(0x800A5830u);
  {uint32_t ea=c->r[1]+0xFFFFFF90u; W32(ea,c->r[1]); c->r[1]=ea;} // 800A5830
  c->r[0]=c->lr; // 800A5834
  W32(c->r[1]+0x00000074u,c->r[0]); // 800A5838
  {uint32_t ea=c->r[1]+0x00000038u; for(int i=18;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800A583C
  c->r[24]=0u+0x80740000u; // 800A5840
  c->r[25]=0u+0x806D0000u; // 800A5844
  c->r[18]=c->r[3]|c->r[3]; // 800A5848
  c->r[19]=c->r[4]|c->r[4]; // 800A584C
  c->r[20]=c->r[5]|c->r[5]; // 800A5850
  c->r[21]=c->r[6]|c->r[6]; // 800A5854
  c->r[25]=c->r[25]+0xFFFFCAA0u; // 800A5858
  c->r[26]=c->r[24]+0x000046F0u; // 800A585C
  c->r[27]=0u+0x80050000u; // 800A5860
  c->r[28]=0u+0x80750000u; // 800A5864
  c->r[29]=0u+0x00000001u; // 800A5868
  c->r[30]=0u+0x806D0000u; // 800A586C
  c->r[31]=0u+0x806D0000u; // 800A5870
  c->r[7]=R32(c->r[3]+0x00000004u); // 800A5874
  c->r[23]=R32(c->r[7]+0x00000000u); // 800A5878
  goto L_800A5948; // 800A587C
L_800A5880:;
  c->r[0]=R8(c->r[13]+0xFFFFBC09u); // 800A5880
  c->r[22]=R32(c->r[23]+0x00000000u); // 800A5884
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800A5888
  if (!crb(c,2)) { goto L_800A58B8; } // 800A588C
  c->r[3]=c->r[24]+0x000046F0u; // 800A5890
  c->lr=0x800A5898u; f_8035805C(c); // 800A5894
  c->r[0]=c->r[25]+0x0000000Cu; // 800A5898
  W32(c->r[24]+0x000046F0u,c->r[25]); // 800A589C
  c->r[3]=c->r[26]|c->r[26]; // 800A58A0
  c->r[4]=c->r[27]+0x00000788u; // 800A58A4
  W32(c->r[26]+0x000000A8u,c->r[0]); // 800A58A8
  c->r[5]=c->r[28]+0xFFFFB714u; // 800A58AC
  c->lr=0x800A58B4u; f_803A92B8(c); // 800A58B0
  W8(c->r[13]+0xFFFFBC09u,c->r[29]); // 800A58B4
L_800A58B8:;
  c->r[5]=c->r[22]|c->r[22]; // 800A58B8
  c->r[3]=c->r[1]+0x00000008u; // 800A58BC
  c->r[4]=c->r[24]+0x000046F0u; // 800A58C0
  c->lr=0x800A58C8u; f_8035A544(c); // 800A58C4
  c->r[0]=R32(c->r[22]+0x0000000Cu); // 800A58C8
  cmps(c,0,(int32_t)c->r[0],0); // 800A58CC
  if (crb(c,2)) { goto L_800A58F0; } // 800A58D0
  c->r[3]=c->r[1]+0x00000008u; // 800A58D4
  c->r[4]=c->r[19]+0x000000BCu; // 800A58D8
  c->lr=0x800A58E0u; f_80382F2C(c); // 800A58DC
  c->r[3]=c->r[19]+0x000000BCu; // 800A58E0
  c->r[4]=c->r[19]+0x000000ECu; // 800A58E4
  c->lr=0x800A58ECu; f_80382F2C(c); // 800A58E8
  goto L_800A5944; // 800A58EC
L_800A58F0:;
  c->r[4]=R32(c->r[22]+0x00000074u); // 800A58F0
  c->r[3]=c->r[21]|c->r[21]; // 800A58F4
  c->lr=0x800A58FCu; f_804AC3C4(c); // 800A58F8
  cmps(c,0,(int32_t)c->r[3],0); // 800A58FC
  c->r[22]=c->r[3]|c->r[3]; // 800A5900
  if (crb(c,2)) { goto L_800A5944; } // 800A5904
  if (!crb(c,2)) { goto L_800A5920; } // 800A5908
  c->r[3]=c->r[30]+0xFFFFD9D8u; // 800A590C
  c->r[5]=c->r[31]+0xFFFFD9B8u; // 800A5910
  c->r[4]=0u+0x00000053u; // 800A5914
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800A5918
  c->lr=0x800A5920u; f_80484674(c); // 800A591C
L_800A5920:;
  cmps(c,0,(int32_t)c->r[22],0); // 800A5920
  c->r[3]=c->r[1]+0x00000008u; // 800A5924
  if (crb(c,2)) { goto L_800A5934; } // 800A5928
  c->r[0]=R32(c->r[22]+0x00000010u); // 800A592C
  goto L_800A5938; // 800A5930
L_800A5934:;
  c->r[0]=0u+0x00000000u; // 800A5934
L_800A5938:;
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)48); // 800A5938
  c->r[4]=c->r[20]+c->r[0]; // 800A593C
  c->lr=0x800A5944u; f_80382F2C(c); // 800A5940
L_800A5944:;
  c->r[23]=c->r[23]+0x00000004u; // 800A5944
L_800A5948:;
  c->r[3]=R32(c->r[18]+0x00000004u); // 800A5948
  c->r[0]=R32(c->r[3]+0x00000004u); // 800A594C
  c->r[3]=R32(c->r[3]+0x00000000u); // 800A5950
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800A5954
  c->r[0]=c->r[3]+c->r[0]; // 800A5958
  cmpu(c,0,c->r[23],c->r[0]); // 800A595C
  if (!crb(c,2)) { IRQCHK(c); goto L_800A5880; } // 800A5960
  {uint32_t ea=c->r[1]+0x00000038u; for(int i=18;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800A5964
  c->r[0]=R32(c->r[1]+0x00000074u); // 800A5968
  c->lr=c->r[0]; // 800A596C
  c->r[1]=c->r[1]+0x00000070u; // 800A5970
  return; // 800A5974
}

// fn_800A5978
void f_800A5978(Ctx* __restrict c) {
  trace_call(0x800A5978u);
  c->r[11]=rotl(c->r[1],0)&0x0000000Fu; // 800A5978
  c->r[12]=c->r[1]|c->r[1]; // 800A597C
  c->r[11]=addc(c,~c->r[11],0xFFFFFF40u,1); // 800A5980
  {uint32_t ea=c->r[1]+c->r[11]; W32(ea,c->r[1]); c->r[1]=ea;} // 800A5984
  c->r[0]=c->lr; // 800A5988
  c->r[11]=c->r[12]|c->r[12]; // 800A598C
  W32(c->r[12]+0x00000004u,c->r[0]); // 800A5990
  c->lr=0x800A5998u; { W32(c->r[11]+0xFFFFFFD0u,c->r[20]); W32(c->r[11]+0xFFFFFFD4u,c->r[21]); W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800A5994
  {uint32_t ea=c->r[2]+0xFFFF9910u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A5998
  c->r[8]=0u+0xFFFFFFFFu; // 800A599C
  c->r[0]=0u+0x00000000u; // 800A59A0
  {uint32_t ea=c->r[1]+0x00000050u; WF32(ea,c->f[0]);} // 800A59A4
  c->r[20]=0u+0x80740000u; // 800A59A8
  c->r[21]=0u+0x806D0000u; // 800A59AC
  W32(c->r[1]+0x00000054u,c->r[8]); // 800A59B0
  c->r[26]=c->r[3]|c->r[3]; // 800A59B4
  c->r[27]=c->r[4]|c->r[4]; // 800A59B8
  c->r[28]=c->r[5]|c->r[5]; // 800A59BC
  W32(c->r[1]+0x00000080u,c->r[0]); // 800A59C0
  c->r[29]=c->r[6]|c->r[6]; // 800A59C4
  c->r[30]=c->r[7]|c->r[7]; // 800A59C8
  c->r[21]=c->r[21]+0xFFFFCAA0u; // 800A59CC
  W32(c->r[1]+0x00000060u,c->r[8]); // 800A59D0
  c->r[22]=c->r[20]+0x000046F0u; // 800A59D4
  c->r[23]=0u+0x80050000u; // 800A59D8
  c->r[24]=0u+0x80750000u; // 800A59DC
  c->r[3]=R32(c->r[3]+0x00000004u); // 800A59E0
  c->r[25]=0u+0x00000001u; // 800A59E4
  c->r[31]=R32(c->r[3]+0x00000000u); // 800A59E8
  goto L_800A5B2C; // 800A59EC
L_800A59F0:;
  c->r[0]=R8(c->r[13]+0xFFFFBC09u); // 800A59F0
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800A59F4
  if (!crb(c,2)) { goto L_800A5A24; } // 800A59F8
  c->r[3]=c->r[20]+0x000046F0u; // 800A59FC
  c->lr=0x800A5A04u; f_8035805C(c); // 800A5A00
  c->r[0]=c->r[21]+0x0000000Cu; // 800A5A04
  W32(c->r[20]+0x000046F0u,c->r[21]); // 800A5A08
  c->r[3]=c->r[22]|c->r[22]; // 800A5A0C
  c->r[4]=c->r[23]+0x00000788u; // 800A5A10
  W32(c->r[22]+0x000000A8u,c->r[0]); // 800A5A14
  c->r[5]=c->r[24]+0xFFFFB714u; // 800A5A18
  c->lr=0x800A5A20u; f_803A92B8(c); // 800A5A1C
  W8(c->r[13]+0xFFFFBC09u,c->r[25]); // 800A5A20
L_800A5A24:;
  c->r[4]=R32(c->r[31]+0x00000000u); // 800A5A24
  c->r[5]=c->r[27]|c->r[27]; // 800A5A28
  c->r[6]=c->r[28]|c->r[28]; // 800A5A2C
  c->r[3]=c->r[20]+0x000046F0u; // 800A5A30
  c->r[7]=c->r[1]+0x00000040u; // 800A5A34
  c->lr=0x800A5A3Cu; f_8035B0C8(c); // 800A5A38
  cmps(c,0,(int32_t)c->r[3],0); // 800A5A3C
  if (crb(c,2)) { goto L_800A5B28; } // 800A5A40
  c->r[4]=c->r[1]+0x00000028u; // 800A5A44
  {uint32_t ea=c->r[28]+0x00000000u; psq_load(c,0,ea,0,0);} // 800A5A48
  {uint32_t ea=c->r[27]+0x00000000u; psq_load(c,1,ea,0,0);} // 800A5A4C
  {double t0=S(c->f[0]-c->f[1]), t1=S(c->ps1[0]-c->ps1[1]); c->f[0]=t0; c->ps1[0]=t1;} // 800A5A50
  {uint32_t ea=c->r[4]+0x00000000u; psq_store(c,0,ea,0,0);} // 800A5A54
  {uint32_t ea=c->r[28]+0x00000008u; psq_load(c,0,ea,1,0);} // 800A5A58
  {uint32_t ea=c->r[27]+0x00000008u; psq_load(c,1,ea,1,0);} // 800A5A5C
  {double t0=S(c->f[0]-c->f[1]), t1=S(c->ps1[0]-c->ps1[1]); c->f[0]=t0; c->ps1[0]=t1;} // 800A5A60
  {uint32_t ea=c->r[4]+0x00000008u; psq_store(c,0,ea,1,0);} // 800A5A64
  c->r[0]=0u+0x00000001u; // 800A5A68
  c->r[3]=R32(c->r[31]+0x00000000u); // 800A5A6C
  c->r[5]=c->r[1]+0x00000010u; // 800A5A70
  W32(c->r[30]+0x00000000u,c->r[3]); // 800A5A74
  W8(c->r[29]+0x00000000u,c->r[0]); // 800A5A78
  {uint32_t ea=c->r[1]+0x00000050u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A5A7C
  {uint32_t ea=c->r[4]+0x00000000u; psq_load(c,1,ea,0,0);} // 800A5A80
  {double t0=S(c->f[1]*c->f[0]), t1=S(c->ps1[1]*c->f[0]); c->f[1]=t0; c->ps1[1]=t1;} // 800A5A84
  {uint32_t ea=c->r[5]+0x00000000u; psq_store(c,1,ea,0,0);} // 800A5A88
  {uint32_t ea=c->r[4]+0x00000008u; psq_load(c,1,ea,1,0);} // 800A5A8C
  {double t0=S(c->f[1]*c->f[0]), t1=S(c->ps1[1]*c->f[0]); c->f[1]=t0; c->ps1[1]=t1;} // 800A5A90
  {uint32_t ea=c->r[5]+0x00000008u; psq_store(c,1,ea,1,0);} // 800A5A94
  c->r[3]=c->r[1]+0x0000001Cu; // 800A5A98
  {uint32_t ea=c->r[1]+0x00000010u; c->f[2]=c->ps1[2]=RF32(ea);} // 800A5A9C
  {uint32_t ea=c->r[1]+0x00000014u; c->f[1]=c->ps1[1]=RF32(ea);} // 800A5AA0
  {uint32_t ea=c->r[1]+0x00000018u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A5AA4
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[2]);} // 800A5AA8
  {uint32_t ea=c->r[1]+0x00000020u; WF32(ea,c->f[1]);} // 800A5AAC
  {uint32_t ea=c->r[1]+0x00000024u; WF32(ea,c->f[0]);} // 800A5AB0
  {uint32_t ea=c->r[27]+0x00000000u; psq_load(c,0,ea,0,0);} // 800A5AB4
  {uint32_t ea=c->r[3]+0x00000000u; psq_load(c,1,ea,0,0);} // 800A5AB8
  {double t0=S(c->f[0]+c->f[1]), t1=S(c->ps1[0]+c->ps1[1]); c->f[0]=t0; c->ps1[0]=t1;} // 800A5ABC
  {uint32_t ea=c->r[29]+0x000003BCu; psq_store(c,0,ea,0,0);} // 800A5AC0
  {uint32_t ea=c->r[27]+0x00000008u; psq_load(c,0,ea,1,0);} // 800A5AC4
  {uint32_t ea=c->r[3]+0x00000008u; psq_load(c,1,ea,1,0);} // 800A5AC8
  {double t0=S(c->f[0]+c->f[1]), t1=S(c->ps1[0]+c->ps1[1]); c->f[0]=t0; c->ps1[0]=t1;} // 800A5ACC
  {uint32_t ea=c->r[29]+0x000003C4u; psq_store(c,0,ea,1,0);} // 800A5AD0
  c->r[3]=0u+0x00000001u; // 800A5AD4
  c->r[4]=R32(c->r[29]+0x00000398u); // 800A5AD8
  c->r[0]=c->r[4]+0x00000001u; // 800A5ADC
  W32(c->r[29]+0x00000398u,c->r[0]); // 800A5AE0
  c->r[0]=R32(c->r[26]+0x00000000u); // 800A5AE4
  W32(c->r[29]+0x0000000Cu,c->r[0]); // 800A5AE8
  c->r[0]=R32(c->r[30]+0x00000000u); // 800A5AEC
  W32(c->r[29]+0x00000014u,c->r[0]); // 800A5AF0
  {uint32_t ea=c->r[1]+0x00000040u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A5AF4
  {uint32_t ea=c->r[29]+0x00000038u; WF32(ea,c->f[0]);} // 800A5AF8
  {uint32_t ea=c->r[1]+0x00000044u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A5AFC
  {uint32_t ea=c->r[29]+0x0000003Cu; WF32(ea,c->f[0]);} // 800A5B00
  {uint32_t ea=c->r[1]+0x00000048u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A5B04
  {uint32_t ea=c->r[29]+0x00000040u; WF32(ea,c->f[0]);} // 800A5B08
  {uint32_t ea=c->r[1]+0x00000040u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A5B0C
  {uint32_t ea=c->r[29]+0x000003C8u; WF32(ea,c->f[0]);} // 800A5B10
  {uint32_t ea=c->r[1]+0x00000044u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A5B14
  {uint32_t ea=c->r[29]+0x000003CCu; WF32(ea,c->f[0]);} // 800A5B18
  {uint32_t ea=c->r[1]+0x00000048u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A5B1C
  {uint32_t ea=c->r[29]+0x000003D0u; WF32(ea,c->f[0]);} // 800A5B20
  goto L_800A5B4C; // 800A5B24
L_800A5B28:;
  c->r[31]=c->r[31]+0x00000004u; // 800A5B28
L_800A5B2C:;
  c->r[3]=R32(c->r[26]+0x00000004u); // 800A5B2C
  c->r[0]=R32(c->r[3]+0x00000004u); // 800A5B30
  c->r[3]=R32(c->r[3]+0x00000000u); // 800A5B34
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800A5B38
  c->r[0]=c->r[3]+c->r[0]; // 800A5B3C
  cmpu(c,0,c->r[31],c->r[0]); // 800A5B40
  if (!crb(c,2)) { IRQCHK(c); goto L_800A59F0; } // 800A5B44
  c->r[3]=0u+0x00000000u; // 800A5B48
L_800A5B4C:;
  c->r[10]=R32(c->r[1]+0x00000000u); // 800A5B4C
  c->r[11]=c->r[10]|c->r[10]; // 800A5B50
  c->lr=0x800A5B58u; { c->r[20]=R32(c->r[11]+0xFFFFFFD0u); c->r[21]=R32(c->r[11]+0xFFFFFFD4u); c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800A5B54
  c->r[0]=R32(c->r[10]+0x00000004u); // 800A5B58
  c->lr=c->r[0]; // 800A5B5C
  c->r[1]=c->r[10]|c->r[10]; // 800A5B60
  return; // 800A5B64
}

// fn_800A5B68
void f_800A5B68(Ctx* __restrict c) {
  trace_call(0x800A5B68u);
  c->r[11]=rotl(c->r[1],0)&0x0000000Fu; // 800A5B68
  c->r[12]=c->r[1]|c->r[1]; // 800A5B6C
  c->r[11]=addc(c,~c->r[11],0xFFFFFF80u,1); // 800A5B70
  {uint32_t ea=c->r[1]+c->r[11]; W32(ea,c->r[1]); c->r[1]=ea;} // 800A5B74
  c->r[0]=c->lr; // 800A5B78
  c->r[11]=c->r[12]+0xFFFFFFF0u; // 800A5B7C
  W32(c->r[12]+0x00000004u,c->r[0]); // 800A5B80
  {uint32_t ea=c->r[12]+0xFFFFFFF0u; WF64(ea,c->f[31]);} // 800A5B84
  {uint32_t ea=c->r[12]+0xFFFFFFF8u; psq_store(c,31,ea,0,0);} // 800A5B88
  c->lr=0x800A5B90u; { W32(c->r[11]+0xFFFFFFD4u,c->r[21]); W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800A5B8C
  c->r[7]=R32(c->r[3]+0x00000004u); // 800A5B90
  c->r[22]=0u+0x80740000u; // 800A5B94
  c->f[31]=c->f[1]; // 800A5B98
  c->r[23]=0u+0x806D0000u; // 800A5B9C
  c->r[31]=R32(c->r[7]+0x00000000u); // 800A5BA0
  c->r[27]=c->r[3]|c->r[3]; // 800A5BA4
  c->r[28]=c->r[4]|c->r[4]; // 800A5BA8
  c->r[29]=c->r[5]|c->r[5]; // 800A5BAC
  c->r[30]=c->r[6]|c->r[6]; // 800A5BB0
  c->r[21]=c->r[22]+0x000046F0u; // 800A5BB4
  c->r[23]=c->r[23]+0xFFFFCAA0u; // 800A5BB8
  c->r[24]=0u+0x80050000u; // 800A5BBC
  c->r[25]=0u+0x80750000u; // 800A5BC0
  c->r[26]=0u+0x00000001u; // 800A5BC4
  goto L_800A5CEC; // 800A5BC8
L_800A5BCC:;
  c->r[0]=R8(c->r[13]+0xFFFFBC09u); // 800A5BCC
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800A5BD0
  if (!crb(c,2)) { goto L_800A5C00; } // 800A5BD4
  c->r[3]=c->r[21]|c->r[21]; // 800A5BD8
  c->lr=0x800A5BE0u; f_8035805C(c); // 800A5BDC
  c->r[0]=c->r[23]+0x0000000Cu; // 800A5BE0
  W32(c->r[21]+0x00000000u,c->r[23]); // 800A5BE4
  c->r[3]=c->r[21]|c->r[21]; // 800A5BE8
  c->r[4]=c->r[24]+0x00000788u; // 800A5BEC
  W32(c->r[21]+0x000000A8u,c->r[0]); // 800A5BF0
  c->r[5]=c->r[25]+0xFFFFB714u; // 800A5BF4
  c->lr=0x800A5BFCu; f_803A92B8(c); // 800A5BF8
  W8(c->r[13]+0xFFFFBC09u,c->r[26]); // 800A5BFC
L_800A5C00:;
  c->f[1]=c->f[31]; // 800A5C00
  c->r[4]=R32(c->r[31]+0x00000000u); // 800A5C04
  c->r[5]=c->r[28]|c->r[28]; // 800A5C08
  c->r[3]=c->r[22]+0x000046F0u; // 800A5C0C
  c->r[6]=c->r[1]+0x00000020u; // 800A5C10
  c->lr=0x800A5C18u; f_8035B34C(c); // 800A5C14
  cmps(c,0,(int32_t)c->r[3],0); // 800A5C18
  if (crb(c,2)) { goto L_800A5CE8; } // 800A5C1C
  {uint32_t ea=c->r[1]+0x0000003Cu; c->f[31]=c->ps1[31]=RF32(ea);} // 800A5C20
  c->r[5]=c->r[1]+0x00000020u; // 800A5C24
  c->r[6]=c->r[5]+0x00000010u; // 800A5C28
  {uint32_t ea=c->r[5]+0x00000010u; psq_load(c,3,ea,0,0);} // 800A5C2C
  {double t0=S(c->f[31]), t1=S(c->f[31]); c->f[31]=t0; c->ps1[31]=t1;} // 800A5C30
  {uint32_t ea=c->r[1]+0x00000020u; psq_load(c,0,ea,0,0);} // 800A5C34
  {uint32_t ea=c->r[6]+0x00000008u; psq_load(c,2,ea,0,0);} // 800A5C38
  {uint32_t ea=c->r[1]+0x00000010u; psq_store(c,31,ea,0,0);} // 800A5C3C
  {uint32_t ea=c->r[5]+0x00000008u; psq_load(c,1,ea,0,0);} // 800A5C40
  {uint32_t ea=c->r[1]+0x00000018u; psq_store(c,31,ea,0,0);} // 800A5C44
  {double t0=S(std::fma(c->f[3],c->f[31],c->f[0])), t1=S(std::fma(c->ps1[3],c->ps1[31],c->ps1[0])); c->f[0]=t0; c->ps1[0]=t1;} // 800A5C48
  {uint32_t ea=c->r[1]+0x00000020u; psq_store(c,0,ea,0,0);} // 800A5C4C
  {double t0=S(std::fma(c->f[2],c->f[31],c->f[1])), t1=S(std::fma(c->ps1[2],c->ps1[31],c->ps1[1])); c->f[0]=t0; c->ps1[0]=t1;} // 800A5C50
  {uint32_t ea=c->r[5]+0x00000008u; psq_store(c,0,ea,0,0);} // 800A5C54
  {double t0=-c->f[3], t1=-c->ps1[3]; c->f[1]=t0; c->ps1[1]=t1;} // 800A5C58
  {double t0=-c->f[2], t1=-c->ps1[2]; c->f[0]=t0; c->ps1[0]=t1;} // 800A5C5C
  {double t0=S(c->f[0]), t1=S(c->ps1[2]); c->f[0]=t0; c->ps1[0]=t1;} // 800A5C60
  {uint32_t ea=c->r[5]+0x00000010u; psq_store(c,1,ea,0,0);} // 800A5C64
  c->r[0]=0u+0x00000001u; // 800A5C68
  c->r[3]=0u+0x00000001u; // 800A5C6C
  {uint32_t ea=c->r[6]+0x00000008u; psq_store(c,0,ea,0,0);} // 800A5C70
  c->r[4]=R32(c->r[31]+0x00000000u); // 800A5C74
  W32(c->r[30]+0x00000000u,c->r[4]); // 800A5C78
  W8(c->r[29]+0x00000000u,c->r[0]); // 800A5C7C
  c->r[4]=R32(c->r[29]+0x00000398u); // 800A5C80
  {uint32_t ea=c->r[1]+0x00000020u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A5C84
  {uint32_t ea=c->r[29]+0x000003BCu; WF32(ea,c->f[0]);} // 800A5C88
  c->r[0]=c->r[4]+0x00000001u; // 800A5C8C
  {uint32_t ea=c->r[1]+0x00000024u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A5C90
  {uint32_t ea=c->r[29]+0x000003C0u; WF32(ea,c->f[0]);} // 800A5C94
  {uint32_t ea=c->r[1]+0x00000028u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A5C98
  {uint32_t ea=c->r[29]+0x000003C4u; WF32(ea,c->f[0]);} // 800A5C9C
  W32(c->r[29]+0x00000398u,c->r[0]); // 800A5CA0
  c->r[0]=R32(c->r[27]+0x00000000u); // 800A5CA4
  W32(c->r[29]+0x0000000Cu,c->r[0]); // 800A5CA8
  c->r[0]=R32(c->r[30]+0x00000000u); // 800A5CAC
  W32(c->r[29]+0x00000014u,c->r[0]); // 800A5CB0
  {uint32_t ea=c->r[1]+0x00000030u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A5CB4
  {uint32_t ea=c->r[29]+0x00000038u; WF32(ea,c->f[0]);} // 800A5CB8
  {uint32_t ea=c->r[1]+0x00000034u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A5CBC
  {uint32_t ea=c->r[29]+0x0000003Cu; WF32(ea,c->f[0]);} // 800A5CC0
  {uint32_t ea=c->r[1]+0x00000038u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A5CC4
  {uint32_t ea=c->r[29]+0x00000040u; WF32(ea,c->f[0]);} // 800A5CC8
  {uint32_t ea=c->r[1]+0x00000030u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A5CCC
  {uint32_t ea=c->r[29]+0x000003C8u; WF32(ea,c->f[0]);} // 800A5CD0
  {uint32_t ea=c->r[1]+0x00000034u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A5CD4
  {uint32_t ea=c->r[29]+0x000003CCu; WF32(ea,c->f[0]);} // 800A5CD8
  {uint32_t ea=c->r[1]+0x00000038u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A5CDC
  {uint32_t ea=c->r[29]+0x000003D0u; WF32(ea,c->f[0]);} // 800A5CE0
  goto L_800A5D0C; // 800A5CE4
L_800A5CE8:;
  c->r[31]=c->r[31]+0x00000004u; // 800A5CE8
L_800A5CEC:;
  c->r[3]=R32(c->r[27]+0x00000004u); // 800A5CEC
  c->r[0]=R32(c->r[3]+0x00000004u); // 800A5CF0
  c->r[3]=R32(c->r[3]+0x00000000u); // 800A5CF4
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800A5CF8
  c->r[0]=c->r[3]+c->r[0]; // 800A5CFC
  cmpu(c,0,c->r[31],c->r[0]); // 800A5D00
  if (!crb(c,2)) { IRQCHK(c); goto L_800A5BCC; } // 800A5D04
  c->r[3]=0u+0x00000000u; // 800A5D08
L_800A5D0C:;
  c->r[10]=R32(c->r[1]+0x00000000u); // 800A5D0C
  c->r[11]=c->r[10]+0xFFFFFFF0u; // 800A5D10
  {uint32_t ea=c->r[10]+0xFFFFFFF8u; psq_load(c,31,ea,0,0);} // 800A5D14
  {uint32_t ea=c->r[10]+0xFFFFFFF0u; c->f[31]=RF64(ea);} // 800A5D18
  c->lr=0x800A5D20u; { c->r[21]=R32(c->r[11]+0xFFFFFFD4u); c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800A5D1C
  c->r[0]=R32(c->r[10]+0x00000004u); // 800A5D20
  c->lr=c->r[0]; // 800A5D24
  c->r[1]=c->r[10]|c->r[10]; // 800A5D28
  return; // 800A5D2C
}

// fn_800A5D30
void f_800A5D30(Ctx* __restrict c) {
  trace_call(0x800A5D30u);
  c->r[11]=rotl(c->r[1],0)&0x0000000Fu; // 800A5D30
  c->r[12]=c->r[1]|c->r[1]; // 800A5D34
  c->r[11]=addc(c,~c->r[11],0xFFFFFF80u,1); // 800A5D38
  {uint32_t ea=c->r[1]+c->r[11]; W32(ea,c->r[1]); c->r[1]=ea;} // 800A5D3C
  c->r[0]=c->lr; // 800A5D40
  c->r[11]=c->r[12]+0xFFFFFFF0u; // 800A5D44
  W32(c->r[12]+0x00000004u,c->r[0]); // 800A5D48
  {uint32_t ea=c->r[12]+0xFFFFFFF0u; WF64(ea,c->f[31]);} // 800A5D4C
  {uint32_t ea=c->r[12]+0xFFFFFFF8u; psq_store(c,31,ea,0,0);} // 800A5D50
  c->lr=0x800A5D58u; { W32(c->r[11]+0xFFFFFFD0u,c->r[20]); W32(c->r[11]+0xFFFFFFD4u,c->r[21]); W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800A5D54
  c->r[8]=R32(c->r[3]+0x00000004u); // 800A5D58
  c->r[20]=0u+0x80740000u; // 800A5D5C
  c->f[31]=c->f[1]; // 800A5D60
  c->r[21]=0u+0x806D0000u; // 800A5D64
  c->r[30]=R32(c->r[8]+0x00000000u); // 800A5D68
  c->r[25]=c->r[3]|c->r[3]; // 800A5D6C
  c->r[26]=c->r[4]|c->r[4]; // 800A5D70
  c->r[27]=c->r[5]|c->r[5]; // 800A5D74
  c->r[28]=c->r[6]|c->r[6]; // 800A5D78
  c->r[29]=c->r[7]|c->r[7]; // 800A5D7C
  c->r[31]=c->r[20]+0x000046F0u; // 800A5D80
  c->r[21]=c->r[21]+0xFFFFCAA0u; // 800A5D84
  c->r[22]=0u+0x80050000u; // 800A5D88
  c->r[23]=0u+0x80750000u; // 800A5D8C
  c->r[24]=0u+0x00000001u; // 800A5D90
  goto L_800A5EBC; // 800A5D94
L_800A5D98:;
  c->r[0]=R8(c->r[13]+0xFFFFBC09u); // 800A5D98
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800A5D9C
  if (!crb(c,2)) { goto L_800A5DCC; } // 800A5DA0
  c->r[3]=c->r[31]|c->r[31]; // 800A5DA4
  c->lr=0x800A5DACu; f_8035805C(c); // 800A5DA8
  c->r[0]=c->r[21]+0x0000000Cu; // 800A5DAC
  W32(c->r[31]+0x00000000u,c->r[21]); // 800A5DB0
  c->r[3]=c->r[31]|c->r[31]; // 800A5DB4
  c->r[4]=c->r[22]+0x00000788u; // 800A5DB8
  W32(c->r[31]+0x000000A8u,c->r[0]); // 800A5DBC
  c->r[5]=c->r[23]+0xFFFFB714u; // 800A5DC0
  c->lr=0x800A5DC8u; f_803A92B8(c); // 800A5DC4
  W8(c->r[13]+0xFFFFBC09u,c->r[24]); // 800A5DC8
L_800A5DCC:;
  c->f[1]=c->f[31]; // 800A5DCC
  c->r[4]=R32(c->r[30]+0x00000000u); // 800A5DD0
  c->r[5]=c->r[26]|c->r[26]; // 800A5DD4
  c->r[6]=c->r[27]|c->r[27]; // 800A5DD8
  c->r[3]=c->r[20]+0x000046F0u; // 800A5DDC
  c->r[7]=c->r[1]+0x00000020u; // 800A5DE0
  c->lr=0x800A5DE8u; f_8035B530(c); // 800A5DE4
  cmps(c,0,(int32_t)c->r[3],0); // 800A5DE8
  if (crb(c,2)) { goto L_800A5EB8; } // 800A5DEC
  {uint32_t ea=c->r[1]+0x0000003Cu; c->f[31]=c->ps1[31]=RF32(ea);} // 800A5DF0
  c->r[5]=c->r[1]+0x00000020u; // 800A5DF4
  c->r[6]=c->r[5]+0x00000010u; // 800A5DF8
  {uint32_t ea=c->r[5]+0x00000010u; psq_load(c,3,ea,0,0);} // 800A5DFC
  {double t0=S(c->f[31]), t1=S(c->f[31]); c->f[31]=t0; c->ps1[31]=t1;} // 800A5E00
  {uint32_t ea=c->r[1]+0x00000020u; psq_load(c,0,ea,0,0);} // 800A5E04
  {uint32_t ea=c->r[6]+0x00000008u; psq_load(c,2,ea,0,0);} // 800A5E08
  {uint32_t ea=c->r[1]+0x00000010u; psq_store(c,31,ea,0,0);} // 800A5E0C
  {uint32_t ea=c->r[5]+0x00000008u; psq_load(c,1,ea,0,0);} // 800A5E10
  {uint32_t ea=c->r[1]+0x00000018u; psq_store(c,31,ea,0,0);} // 800A5E14
  {double t0=S(std::fma(c->f[3],c->f[31],c->f[0])), t1=S(std::fma(c->ps1[3],c->ps1[31],c->ps1[0])); c->f[0]=t0; c->ps1[0]=t1;} // 800A5E18
  {uint32_t ea=c->r[1]+0x00000020u; psq_store(c,0,ea,0,0);} // 800A5E1C
  {double t0=S(std::fma(c->f[2],c->f[31],c->f[1])), t1=S(std::fma(c->ps1[2],c->ps1[31],c->ps1[1])); c->f[0]=t0; c->ps1[0]=t1;} // 800A5E20
  {uint32_t ea=c->r[5]+0x00000008u; psq_store(c,0,ea,0,0);} // 800A5E24
  {double t0=-c->f[3], t1=-c->ps1[3]; c->f[1]=t0; c->ps1[1]=t1;} // 800A5E28
  {double t0=-c->f[2], t1=-c->ps1[2]; c->f[0]=t0; c->ps1[0]=t1;} // 800A5E2C
  {double t0=S(c->f[0]), t1=S(c->ps1[2]); c->f[0]=t0; c->ps1[0]=t1;} // 800A5E30
  {uint32_t ea=c->r[5]+0x00000010u; psq_store(c,1,ea,0,0);} // 800A5E34
  c->r[0]=0u+0x00000001u; // 800A5E38
  c->r[3]=0u+0x00000001u; // 800A5E3C
  {uint32_t ea=c->r[6]+0x00000008u; psq_store(c,0,ea,0,0);} // 800A5E40
  c->r[4]=R32(c->r[30]+0x00000000u); // 800A5E44
  W32(c->r[29]+0x00000000u,c->r[4]); // 800A5E48
  W8(c->r[28]+0x00000000u,c->r[0]); // 800A5E4C
  c->r[4]=R32(c->r[28]+0x00000398u); // 800A5E50
  {uint32_t ea=c->r[1]+0x00000020u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A5E54
  {uint32_t ea=c->r[28]+0x000003BCu; WF32(ea,c->f[0]);} // 800A5E58
  c->r[0]=c->r[4]+0x00000001u; // 800A5E5C
  {uint32_t ea=c->r[1]+0x00000024u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A5E60
  {uint32_t ea=c->r[28]+0x000003C0u; WF32(ea,c->f[0]);} // 800A5E64
  {uint32_t ea=c->r[1]+0x00000028u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A5E68
  {uint32_t ea=c->r[28]+0x000003C4u; WF32(ea,c->f[0]);} // 800A5E6C
  W32(c->r[28]+0x00000398u,c->r[0]); // 800A5E70
  c->r[0]=R32(c->r[25]+0x00000000u); // 800A5E74
  W32(c->r[28]+0x0000000Cu,c->r[0]); // 800A5E78
  c->r[0]=R32(c->r[29]+0x00000000u); // 800A5E7C
  W32(c->r[28]+0x00000014u,c->r[0]); // 800A5E80
  {uint32_t ea=c->r[1]+0x00000030u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A5E84
  {uint32_t ea=c->r[28]+0x00000038u; WF32(ea,c->f[0]);} // 800A5E88
  {uint32_t ea=c->r[1]+0x00000034u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A5E8C
  {uint32_t ea=c->r[28]+0x0000003Cu; WF32(ea,c->f[0]);} // 800A5E90
  {uint32_t ea=c->r[1]+0x00000038u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A5E94
  {uint32_t ea=c->r[28]+0x00000040u; WF32(ea,c->f[0]);} // 800A5E98
  {uint32_t ea=c->r[1]+0x00000030u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A5E9C
  {uint32_t ea=c->r[28]+0x000003C8u; WF32(ea,c->f[0]);} // 800A5EA0
  {uint32_t ea=c->r[1]+0x00000034u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A5EA4
  {uint32_t ea=c->r[28]+0x000003CCu; WF32(ea,c->f[0]);} // 800A5EA8
  {uint32_t ea=c->r[1]+0x00000038u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A5EAC
  {uint32_t ea=c->r[28]+0x000003D0u; WF32(ea,c->f[0]);} // 800A5EB0
  goto L_800A5EDC; // 800A5EB4
L_800A5EB8:;
  c->r[30]=c->r[30]+0x00000004u; // 800A5EB8
L_800A5EBC:;
  c->r[3]=R32(c->r[25]+0x00000004u); // 800A5EBC
  c->r[0]=R32(c->r[3]+0x00000004u); // 800A5EC0
  c->r[3]=R32(c->r[3]+0x00000000u); // 800A5EC4
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800A5EC8
  c->r[0]=c->r[3]+c->r[0]; // 800A5ECC
  cmpu(c,0,c->r[30],c->r[0]); // 800A5ED0
  if (!crb(c,2)) { IRQCHK(c); goto L_800A5D98; } // 800A5ED4
  c->r[3]=0u+0x00000000u; // 800A5ED8
L_800A5EDC:;
  c->r[10]=R32(c->r[1]+0x00000000u); // 800A5EDC
  c->r[11]=c->r[10]+0xFFFFFFF0u; // 800A5EE0
  {uint32_t ea=c->r[10]+0xFFFFFFF8u; psq_load(c,31,ea,0,0);} // 800A5EE4
  {uint32_t ea=c->r[10]+0xFFFFFFF0u; c->f[31]=RF64(ea);} // 800A5EE8
  c->lr=0x800A5EF0u; { c->r[20]=R32(c->r[11]+0xFFFFFFD0u); c->r[21]=R32(c->r[11]+0xFFFFFFD4u); c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800A5EEC
  c->r[0]=R32(c->r[10]+0x00000004u); // 800A5EF0
  c->lr=c->r[0]; // 800A5EF4
  c->r[1]=c->r[10]|c->r[10]; // 800A5EF8
  return; // 800A5EFC
}

// fn_800A5F00
void f_800A5F00(Ctx* __restrict c) {
  trace_call(0x800A5F00u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800A5F00
  c->r[0]=c->lr; // 800A5F04
  W32(c->r[1]+0x00000034u,c->r[0]); // 800A5F08
  {uint32_t ea=c->r[1]+0x00000010u; for(int i=24;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800A5F0C
  c->r[31]=0u+0x806D0000u; // 800A5F10
  c->r[26]=c->r[3]|c->r[3]; // 800A5F14
  c->r[27]=c->r[4]|c->r[4]; // 800A5F18
  c->r[31]=c->r[31]+0x00005DA4u; // 800A5F1C
  c->r[30]=0u+0x00000001u; // 800A5F20
  c->r[29]=0u+0x00000114u; // 800A5F24
  c->r[5]=R32(c->r[3]+0x00000004u); // 800A5F28
  c->r[28]=R32(c->r[5]+0x00000000u); // 800A5F2C
  goto L_800A5FD8; // 800A5F30
L_800A5F34:;
  c->r[3]=R32(c->r[13]+0xFFFFE750u); // 800A5F34
  c->r[4]=0u+0x00000114u; // 800A5F38
  c->r[5]=0u+0x00000016u; // 800A5F3C
  c->lr=0x800A5F44u; f_8062C34C(c); // 800A5F40
  c->r[25]=c->r[3]|c->r[3]; cr0(c,c->r[25]); // 800A5F44
  W16(c->r[3]+0x00000004u,c->r[29]); // 800A5F48
  if (crb(c,2)) { goto L_800A5F98; } // 800A5F4C
  c->r[5]=R32(c->r[28]+0x00000000u); // 800A5F50
  c->r[0]=c->r[31]+0x00000014u; // 800A5F54
  c->r[24]=c->r[25]|c->r[25]; // 800A5F58
  c->r[4]=c->r[27]|c->r[27]; // 800A5F5C
  W16(c->r[3]+0x00000006u,c->r[30]); // 800A5F60
  W32(c->r[3]+0x00000000u,c->r[31]); // 800A5F64
  W32(c->r[3]+0x00000008u,c->r[0]); // 800A5F68
  W32(c->r[3]+0x0000000Cu,c->r[5]); // 800A5F6C
  c->r[3]=c->r[3]+0x00000010u; // 800A5F70
  c->lr=0x800A5F78u; f_803B37C0(c); // 800A5F74
  cmps(c,0,(int32_t)c->r[25],0); // 800A5F78
  c->r[4]=c->r[25]|c->r[25]; // 800A5F7C
  if (crb(c,2)) { goto L_800A5F88; } // 800A5F80
  c->r[4]=c->r[25]+0x00000008u; // 800A5F84
L_800A5F88:;
  c->r[3]=R32(c->r[25]+0x0000000Cu); // 800A5F88
  c->lr=0x800A5F90u; f_805A1668(c); // 800A5F8C
  c->r[3]=c->r[24]|c->r[24]; // 800A5F90
  c->lr=0x800A5F98u; f_8062D410(c); // 800A5F94
L_800A5F98:;
  c->r[24]=R32(c->r[26]+0x0000000Cu); // 800A5F98
  c->r[0]=R32(c->r[24]+0x00000008u); // 800A5F9C
  c->r[3]=R32(c->r[24]+0x00000004u); // 800A5FA0
  c->r[0]=rotl(c->r[0],0)&0x3FFFFFFFu; // 800A5FA4
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 800A5FA8
  if (!crb(c,2)) { goto L_800A5FBC; } // 800A5FAC
  c->r[3]=c->r[24]|c->r[24]; // 800A5FB0
  c->r[4]=0u+0x00000004u; // 800A5FB4
  c->lr=0x800A5FBCu; f_80623A68(c); // 800A5FB8
L_800A5FBC:;
  c->r[3]=R32(c->r[24]+0x00000004u); // 800A5FBC
  c->r[28]=c->r[28]+0x00000004u; // 800A5FC0
  c->r[4]=R32(c->r[24]+0x00000000u); // 800A5FC4
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 800A5FC8
  c->r[3]=c->r[3]+0x00000001u; // 800A5FCC
  W32(c->r[4]+c->r[0],c->r[25]); // 800A5FD0
  W32(c->r[24]+0x00000004u,c->r[3]); // 800A5FD4
L_800A5FD8:;
  c->r[3]=R32(c->r[26]+0x00000004u); // 800A5FD8
  c->r[0]=R32(c->r[3]+0x00000004u); // 800A5FDC
  c->r[3]=R32(c->r[3]+0x00000000u); // 800A5FE0
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800A5FE4
  c->r[0]=c->r[3]+c->r[0]; // 800A5FE8
  cmpu(c,0,c->r[28],c->r[0]); // 800A5FEC
  if (!crb(c,2)) { IRQCHK(c); goto L_800A5F34; } // 800A5FF0
  {uint32_t ea=c->r[1]+0x00000010u; for(int i=24;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800A5FF4
  c->r[0]=R32(c->r[1]+0x00000034u); // 800A5FF8
  c->lr=c->r[0]; // 800A5FFC
  c->r[1]=c->r[1]+0x00000030u; // 800A6000
  return; // 800A6004
}

// fn_800A6008
void f_800A6008(Ctx* __restrict c) {
  trace_call(0x800A6008u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800A6008
  c->r[0]=c->lr; // 800A600C
  W32(c->r[1]+0x00000024u,c->r[0]); // 800A6010
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800A6014
  c->r[31]=c->r[4]|c->r[4]; // 800A6018
  W32(c->r[1]+0x00000018u,c->r[30]); // 800A601C
  W32(c->r[1]+0x00000014u,c->r[29]); // 800A6020
  c->r[3]=R32(c->r[3]+0x00000004u); // 800A6024
  c->r[0]=R32(c->r[3]+0x00000004u); // 800A6028
  c->r[29]=R32(c->r[3]+0x00000000u); // 800A602C
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800A6030
  c->r[30]=c->r[29]+c->r[0]; // 800A6034
  goto L_800A60C4; // 800A6038
L_800A603C:;
  c->r[3]=R32(c->r[29]+0x00000000u); // 800A603C
  c->r[4]=c->r[31]|c->r[31]; // 800A6040
  c->r[3]=R32(c->r[3]+0x00000074u); // 800A6044
  c->lr=0x800A604Cu; f_803B393C(c); // 800A6048
  cmps(c,0,(int32_t)c->r[3],0); // 800A604C
  if (!crb(c,2)) { goto L_800A60C0; } // 800A6050
  c->r[3]=R32(c->r[13]+0xFFFFE750u); // 800A6054
  c->r[4]=0u+0x00000050u; // 800A6058
  c->r[5]=0u+0x00000016u; // 800A605C
  c->lr=0x800A6064u; f_8062C34C(c); // 800A6060
  cmps(c,0,(int32_t)c->r[3],0); // 800A6064
  c->r[30]=c->r[3]|c->r[3]; // 800A6068
  c->r[0]=0u+0x00000050u; // 800A606C
  W16(c->r[3]+0x00000004u,c->r[0]); // 800A6070
  c->r[31]=c->r[30]|c->r[30]; // 800A6074
  if (crb(c,2)) { goto L_800A60B8; } // 800A6078
  c->r[6]=R32(c->r[29]+0x00000000u); // 800A607C
  c->r[0]=0u+0x00000001u; // 800A6080
  c->r[5]=0u+0x806D0000u; // 800A6084
  c->r[4]=c->r[30]|c->r[30]; // 800A6088
  W16(c->r[3]+0x00000006u,c->r[0]); // 800A608C
  c->r[5]=c->r[5]+0x00005D68u; // 800A6090
  c->r[0]=c->r[5]+0x00000014u; // 800A6094
  W32(c->r[3]+0x00000000u,c->r[5]); // 800A6098
  W32(c->r[3]+0x00000008u,c->r[0]); // 800A609C
  if (crb(c,2)) { goto L_800A60A8; } // 800A60A0
  c->r[4]=c->r[3]+0x00000008u; // 800A60A4
L_800A60A8:;
  c->r[3]=c->r[6]|c->r[6]; // 800A60A8
  c->lr=0x800A60B0u; f_805A1668(c); // 800A60AC
  c->r[0]=0u+0x00000000u; // 800A60B0
  W8(c->r[30]+0x0000000Cu,c->r[0]); // 800A60B4
L_800A60B8:;
  c->r[3]=c->r[31]|c->r[31]; // 800A60B8
  goto L_800A60D0; // 800A60BC
L_800A60C0:;
  c->r[29]=c->r[29]+0x00000004u; // 800A60C0
L_800A60C4:;
  cmpu(c,0,c->r[29],c->r[30]); // 800A60C4
  if (!crb(c,2)) { IRQCHK(c); goto L_800A603C; } // 800A60C8
  c->r[3]=0u+0x00000000u; // 800A60CC
L_800A60D0:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 800A60D0
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800A60D4
  c->r[30]=R32(c->r[1]+0x00000018u); // 800A60D8
  c->r[29]=R32(c->r[1]+0x00000014u); // 800A60DC
  c->lr=c->r[0]; // 800A60E0
  c->r[1]=c->r[1]+0x00000020u; // 800A60E4
  return; // 800A60E8
}

// fn_800A60EC
void f_800A60EC(Ctx* __restrict c) {
  trace_call(0x800A60ECu);
  c->r[3]=R8(c->r[3]+0x0000000Cu); // 800A60EC
  return; // 800A60F0
}

// fn_800A60F4
void f_800A60F4(Ctx* __restrict c) {
  trace_call(0x800A60F4u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800A60F4
  c->r[0]=c->lr; // 800A60F8
  W32(c->r[1]+0x00000024u,c->r[0]); // 800A60FC
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=26;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800A6100
  c->r[26]=c->r[3]|c->r[3]; // 800A6104
  c->r[27]=c->r[4]|c->r[4]; // 800A6108
  c->r[5]=R32(c->r[3]+0x00000004u); // 800A610C
  c->r[29]=R32(c->r[5]+0x00000000u); // 800A6110
  goto L_800A6164; // 800A6114
L_800A6118:;
  c->r[30]=R32(c->r[29]+0x00000000u); // 800A6118
  c->r[4]=c->r[27]|c->r[27]; // 800A611C
  c->r[3]=R32(c->r[30]+0x00000074u); // 800A6120
  c->lr=0x800A6128u; f_803B393C(c); // 800A6124
  cmps(c,0,(int32_t)c->r[3],0); // 800A6128
  if (!crb(c,2)) { goto L_800A6160; } // 800A612C
  c->r[28]=0u+0x00000000u; // 800A6130
  c->r[31]=0u+0x00000000u; // 800A6134
  goto L_800A6154; // 800A6138
L_800A613C:;
  c->r[4]=R32(c->r[30]+0x00000200u); // 800A613C
  c->r[3]=R32(c->r[29]+0x00000000u); // 800A6140
  c->r[4]=R32(c->r[4]+c->r[31]); // 800A6144
  c->lr=0x800A614Cu; f_805A1728(c); // 800A6148
  c->r[31]=c->r[31]+0x00000004u; // 800A614C
  c->r[28]=c->r[28]+0x00000001u; // 800A6150
L_800A6154:;
  c->r[0]=R16(c->r[30]+0x00000204u); // 800A6154
  cmps(c,0,(int32_t)c->r[28],(int32_t)c->r[0]); // 800A6158
  if (crb(c,0)) { IRQCHK(c); goto L_800A613C; } // 800A615C
L_800A6160:;
  c->r[29]=c->r[29]+0x00000004u; // 800A6160
L_800A6164:;
  c->r[3]=R32(c->r[26]+0x00000004u); // 800A6164
  c->r[0]=R32(c->r[3]+0x00000004u); // 800A6168
  c->r[3]=R32(c->r[3]+0x00000000u); // 800A616C
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800A6170
  c->r[0]=c->r[3]+c->r[0]; // 800A6174
  cmpu(c,0,c->r[29],c->r[0]); // 800A6178
  if (!crb(c,2)) { IRQCHK(c); goto L_800A6118; } // 800A617C
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=26;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800A6180
  c->r[0]=R32(c->r[1]+0x00000024u); // 800A6184
  c->lr=c->r[0]; // 800A6188
  c->r[1]=c->r[1]+0x00000020u; // 800A618C
  return; // 800A6190
}

// fn_800A6194
void f_800A6194(Ctx* __restrict c) {
  trace_call(0x800A6194u);
  c->r[11]=rotl(c->r[1],0)&0x0000000Fu; // 800A6194
  c->r[12]=c->r[1]|c->r[1]; // 800A6198
  c->r[11]=addc(c,~c->r[11],0xFFFFFFB0u,1); // 800A619C
  {uint32_t ea=c->r[1]+c->r[11]; W32(ea,c->r[1]); c->r[1]=ea;} // 800A61A0
  c->r[0]=c->lr; // 800A61A4
  {uint32_t ea=c->r[2]+0xFFFF9914u; c->f[3]=c->ps1[3]=RF32(ea);} // 800A61A8
  W32(c->r[12]+0x00000004u,c->r[0]); // 800A61AC
  c->r[6]=c->r[1]+0x00000020u; // 800A61B0
  {uint32_t ea=c->r[12]+0xFFFFFFF0u; WF64(ea,c->f[31]);} // 800A61B4
  {uint32_t ea=c->r[12]+0xFFFFFFF8u; psq_store(c,31,ea,0,0);} // 800A61B8
  W32(c->r[12]+0xFFFFFFECu,c->r[31]); // 800A61BC
  W32(c->r[12]+0xFFFFFFE8u,c->r[30]); // 800A61C0
  c->r[30]=c->r[3]|c->r[3]; // 800A61C4
  {uint32_t ea=c->r[4]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 800A61C8
  {uint32_t ea=c->r[4]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A61CC
  {uint32_t ea=c->r[4]+0x00000008u; c->f[2]=c->ps1[2]=RF32(ea);} // 800A61D0
  {double t0=S(c->f[0]), t1=S(c->f[1]); c->f[0]=t0; c->ps1[0]=t1;} // 800A61D4
  {uint32_t ea=c->r[1]+0x00000020u; psq_store(c,0,ea,0,0);} // 800A61D8
  {double t0=S(c->f[2]), t1=S(c->f[3]); c->f[0]=t0; c->ps1[0]=t1;} // 800A61DC
  c->r[4]=c->r[1]+0x00000010u; // 800A61E0
  {uint32_t ea=c->r[6]+0x00000008u; psq_store(c,0,ea,0,0);} // 800A61E4
  {uint32_t ea=c->r[5]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 800A61E8
  {uint32_t ea=c->r[5]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A61EC
  {uint32_t ea=c->r[5]+0x00000008u; c->f[2]=c->ps1[2]=RF32(ea);} // 800A61F0
  {double t0=S(c->f[0]), t1=S(c->f[1]); c->f[0]=t0; c->ps1[0]=t1;} // 800A61F4
  {uint32_t ea=c->r[1]+0x00000010u; psq_store(c,0,ea,0,0);} // 800A61F8
  {double t0=S(c->f[2]), t1=S(c->f[3]); c->f[0]=t0; c->ps1[0]=t1;} // 800A61FC
  c->r[0]=R8(c->r[13]+0xFFFFBB9Bu); // 800A6200
  {uint32_t ea=c->r[4]+0x00000008u; psq_store(c,0,ea,0,0);} // 800A6204
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800A6208
  if (!crb(c,2)) { goto L_800A624C; } // 800A620C
  c->r[31]=0u+0x80730000u; // 800A6210
  c->r[31]=c->r[31]+0x00006D10u; // 800A6214
  c->r[3]=c->r[31]|c->r[31]; // 800A6218
  c->lr=0x800A6220u; f_802D8298(c); // 800A621C
  c->r[3]=0u+0x806D0000u; // 800A6220
  c->r[4]=0u+0x80050000u; // 800A6224
  c->r[3]=c->r[3]+0xFFFFC220u; // 800A6228
  c->r[5]=0u+0x80750000u; // 800A622C
  W32(c->r[31]+0x00000000u,c->r[3]); // 800A6230
  c->r[3]=c->r[31]|c->r[31]; // 800A6234
  c->r[4]=c->r[4]+0xFFFF9D40u; // 800A6238
  c->r[5]=c->r[5]+0xFFFFB720u; // 800A623C
  c->lr=0x800A6244u; f_803A92B8(c); // 800A6240
  c->r[0]=0u+0x00000001u; // 800A6244
  W8(c->r[13]+0xFFFFBB9Bu,c->r[0]); // 800A6248
L_800A624C:;
  c->r[4]=0u+0x80730000u; // 800A624C
  c->r[3]=c->r[30]|c->r[30]; // 800A6250
  c->r[4]=c->r[4]+0x00006D10u; // 800A6254
  {uint32_t ea=c->r[4]+0x00000004u; c->f[31]=c->ps1[31]=RF32(ea);} // 800A6258
  c->lr=0x800A6260u; f_805A179C(c); // 800A625C
  c->r[12]=R32(c->r[30]+0x000000E0u); // 800A6260
  c->f[1]=c->f[31]; // 800A6264
  c->r[3]=c->r[30]+0x000000E0u; // 800A6268
  c->r[4]=c->r[1]+0x00000020u; // 800A626C
  c->r[12]=R32(c->r[12]+0x00000064u); // 800A6270
  c->r[5]=c->r[1]+0x00000010u; // 800A6274
  c->ctr=c->r[12]; // 800A6278
  if (true) { c->lr=0x800A6280u; dispatch(c,c->ctr); } // 800A627C
  c->r[10]=R32(c->r[1]+0x00000000u); // 800A6280
  c->r[0]=R32(c->r[10]+0x00000004u); // 800A6284
  {uint32_t ea=c->r[10]+0xFFFFFFF8u; psq_load(c,31,ea,0,0);} // 800A6288
  {uint32_t ea=c->r[10]+0xFFFFFFF0u; c->f[31]=RF64(ea);} // 800A628C
  c->r[31]=R32(c->r[10]+0xFFFFFFECu); // 800A6290
  c->r[30]=R32(c->r[10]+0xFFFFFFE8u); // 800A6294
  c->lr=c->r[0]; // 800A6298
  c->r[1]=c->r[10]|c->r[10]; // 800A629C
  return; // 800A62A0
}

// fn_800A62A4
void f_800A62A4(Ctx* __restrict c) {
  trace_call(0x800A62A4u);
  c->r[11]=rotl(c->r[1],0)&0x0000000Fu; // 800A62A4
  c->r[12]=c->r[1]|c->r[1]; // 800A62A8
  c->r[11]=addc(c,~c->r[11],0xFFFFFFB0u,1); // 800A62AC
  {uint32_t ea=c->r[1]+c->r[11]; W32(ea,c->r[1]); c->r[1]=ea;} // 800A62B0
  c->r[0]=c->lr; // 800A62B4
  {uint32_t ea=c->r[2]+0xFFFF9914u; c->f[3]=c->ps1[3]=RF32(ea);} // 800A62B8
  W32(c->r[12]+0x00000004u,c->r[0]); // 800A62BC
  c->r[6]=c->r[1]+0x00000020u; // 800A62C0
  {uint32_t ea=c->r[12]+0xFFFFFFF0u; WF64(ea,c->f[31]);} // 800A62C4
  {uint32_t ea=c->r[12]+0xFFFFFFF8u; psq_store(c,31,ea,0,0);} // 800A62C8
  W32(c->r[12]+0xFFFFFFECu,c->r[31]); // 800A62CC
  W32(c->r[12]+0xFFFFFFE8u,c->r[30]); // 800A62D0
  c->r[3]=R32(c->r[3]+0x00000004u); // 800A62D4
  {uint32_t ea=c->r[4]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 800A62D8
  c->r[3]=R32(c->r[3]+0x00000000u); // 800A62DC
  {uint32_t ea=c->r[4]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A62E0
  c->r[30]=R32(c->r[3]+0x00000000u); // 800A62E4
  {uint32_t ea=c->r[4]+0x00000008u; c->f[2]=c->ps1[2]=RF32(ea);} // 800A62E8
  {double t0=S(c->f[0]), t1=S(c->f[1]); c->f[0]=t0; c->ps1[0]=t1;} // 800A62EC
  {uint32_t ea=c->r[1]+0x00000020u; psq_store(c,0,ea,0,0);} // 800A62F0
  {double t0=S(c->f[2]), t1=S(c->f[3]); c->f[0]=t0; c->ps1[0]=t1;} // 800A62F4
  c->r[4]=c->r[1]+0x00000010u; // 800A62F8
  {uint32_t ea=c->r[6]+0x00000008u; psq_store(c,0,ea,0,0);} // 800A62FC
  {uint32_t ea=c->r[5]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 800A6300
  {uint32_t ea=c->r[5]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A6304
  {uint32_t ea=c->r[5]+0x00000008u; c->f[2]=c->ps1[2]=RF32(ea);} // 800A6308
  {double t0=S(c->f[0]), t1=S(c->f[1]); c->f[0]=t0; c->ps1[0]=t1;} // 800A630C
  {uint32_t ea=c->r[1]+0x00000010u; psq_store(c,0,ea,0,0);} // 800A6310
  {double t0=S(c->f[2]), t1=S(c->f[3]); c->f[0]=t0; c->ps1[0]=t1;} // 800A6314
  c->r[0]=R8(c->r[13]+0xFFFFBB9Bu); // 800A6318
  {uint32_t ea=c->r[4]+0x00000008u; psq_store(c,0,ea,0,0);} // 800A631C
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800A6320
  if (!crb(c,2)) { goto L_800A6364; } // 800A6324
  c->r[31]=0u+0x80730000u; // 800A6328
  c->r[31]=c->r[31]+0x00006D10u; // 800A632C
  c->r[3]=c->r[31]|c->r[31]; // 800A6330
  c->lr=0x800A6338u; f_802D8298(c); // 800A6334
  c->r[3]=0u+0x806D0000u; // 800A6338
  c->r[4]=0u+0x80050000u; // 800A633C
  c->r[3]=c->r[3]+0xFFFFC220u; // 800A6340
  c->r[5]=0u+0x80750000u; // 800A6344
  W32(c->r[31]+0x00000000u,c->r[3]); // 800A6348
  c->r[3]=c->r[31]|c->r[31]; // 800A634C
  c->r[4]=c->r[4]+0xFFFF9D40u; // 800A6350
  c->r[5]=c->r[5]+0xFFFFB720u; // 800A6354
  c->lr=0x800A635Cu; f_803A92B8(c); // 800A6358
  c->r[0]=0u+0x00000001u; // 800A635C
  W8(c->r[13]+0xFFFFBB9Bu,c->r[0]); // 800A6360
L_800A6364:;
  c->r[4]=0u+0x80730000u; // 800A6364
  c->r[3]=c->r[30]|c->r[30]; // 800A6368
  c->r[4]=c->r[4]+0x00006D10u; // 800A636C
  {uint32_t ea=c->r[4]+0x00000004u; c->f[31]=c->ps1[31]=RF32(ea);} // 800A6370
  c->lr=0x800A6378u; f_805A179C(c); // 800A6374
  c->r[12]=R32(c->r[30]+0x000000E0u); // 800A6378
  c->f[1]=c->f[31]; // 800A637C
  c->r[3]=c->r[30]+0x000000E0u; // 800A6380
  c->r[4]=c->r[1]+0x00000020u; // 800A6384
  c->r[12]=R32(c->r[12]+0x00000064u); // 800A6388
  c->r[5]=c->r[1]+0x00000010u; // 800A638C
  c->ctr=c->r[12]; // 800A6390
  if (true) { c->lr=0x800A6398u; dispatch(c,c->ctr); } // 800A6394
  c->r[10]=R32(c->r[1]+0x00000000u); // 800A6398
  c->r[0]=R32(c->r[10]+0x00000004u); // 800A639C
  {uint32_t ea=c->r[10]+0xFFFFFFF8u; psq_load(c,31,ea,0,0);} // 800A63A0
  {uint32_t ea=c->r[10]+0xFFFFFFF0u; c->f[31]=RF64(ea);} // 800A63A4
  c->r[31]=R32(c->r[10]+0xFFFFFFECu); // 800A63A8
  c->r[30]=R32(c->r[10]+0xFFFFFFE8u); // 800A63AC
  c->lr=c->r[0]; // 800A63B0
  c->r[1]=c->r[10]|c->r[10]; // 800A63B4
  return; // 800A63B8
}

// fn_800A63BC
void f_800A63BC(Ctx* __restrict c) {
  trace_call(0x800A63BCu);
  c->r[11]=rotl(c->r[1],0)&0x0000000Fu; // 800A63BC
  c->r[12]=c->r[1]|c->r[1]; // 800A63C0
  c->r[11]=addc(c,~c->r[11],0xFFFFFF90u,1); // 800A63C4
  {uint32_t ea=c->r[1]+c->r[11]; W32(ea,c->r[1]); c->r[1]=ea;} // 800A63C8
  c->r[0]=c->lr; // 800A63CC
  c->r[11]=c->r[12]+0xFFFFFFE0u; // 800A63D0
  W32(c->r[12]+0x00000004u,c->r[0]); // 800A63D4
  {uint32_t ea=c->r[12]+0xFFFFFFF0u; WF64(ea,c->f[31]);} // 800A63D8
  {uint32_t ea=c->r[12]+0xFFFFFFF8u; psq_store(c,31,ea,0,0);} // 800A63DC
  {uint32_t ea=c->r[12]+0xFFFFFFE0u; WF64(ea,c->f[30]);} // 800A63E0
  {uint32_t ea=c->r[12]+0xFFFFFFE8u; psq_store(c,30,ea,0,0);} // 800A63E4
  c->lr=0x800A63ECu; { W32(c->r[11]+0xFFFFFFD4u,c->r[21]); W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800A63E8
  c->r[5]=R32(c->r[3]+0x00000004u); // 800A63EC
  c->r[22]=0u+0x80730000u; // 800A63F0
  c->r[24]=0u+0x806D0000u; // 800A63F4
  {uint32_t ea=c->r[2]+0xFFFF9914u; c->f[31]=c->ps1[31]=RF32(ea);} // 800A63F8
  c->r[31]=R32(c->r[5]+0x00000000u); // 800A63FC
  c->r[29]=c->r[3]|c->r[3]; // 800A6400
  c->r[30]=c->r[4]|c->r[4]; // 800A6404
  c->r[22]=c->r[22]+0x00006D10u; // 800A6408
  c->r[24]=c->r[24]+0xFFFFC220u; // 800A640C
  c->r[21]=c->r[1]+0x00000010u; // 800A6410
  c->r[25]=0u+0x80050000u; // 800A6414
  c->r[26]=0u+0x80750000u; // 800A6418
  c->r[27]=0u+0x00000001u; // 800A641C
  c->r[28]=0u+0x00000008u; // 800A6420
  goto L_800A64A0; // 800A6424
L_800A6428:;
  c->r[0]=R8(c->r[13]+0xFFFFBB9Bu); // 800A6428
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800A642C
  if (!crb(c,2)) { goto L_800A6454; } // 800A6430
  c->r[3]=c->r[22]|c->r[22]; // 800A6434
  c->lr=0x800A643Cu; f_802D8298(c); // 800A6438
  W32(c->r[22]+0x00000000u,c->r[24]); // 800A643C
  c->r[3]=c->r[22]|c->r[22]; // 800A6440
  c->r[4]=c->r[25]+0xFFFF9D40u; // 800A6444
  c->r[5]=c->r[26]+0xFFFFB720u; // 800A6448
  c->lr=0x800A6450u; f_803A92B8(c); // 800A644C
  W8(c->r[13]+0xFFFFBB9Bu,c->r[27]); // 800A6450
L_800A6454:;
  {uint32_t ea=c->r[30]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 800A6454
  {uint32_t ea=c->r[30]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A6458
  {uint32_t ea=c->r[30]+0x00000008u; c->f[2]=c->ps1[2]=RF32(ea);} // 800A645C
  {double t0=S(c->f[0]), t1=S(c->f[1]); c->f[0]=t0; c->ps1[0]=t1;} // 800A6460
  {uint32_t ea=0u+c->r[21]; psq_store(c,0,ea,0,0);} // 800A6464
  {double t0=S(c->f[2]), t1=S(c->f[31]); c->f[0]=t0; c->ps1[0]=t1;} // 800A6468
  {uint32_t ea=c->r[22]+0x00000004u; c->f[30]=c->ps1[30]=RF32(ea);} // 800A646C
  {uint32_t ea=c->r[21]+c->r[28]; psq_store(c,0,ea,0,0);} // 800A6470
  c->r[23]=R32(c->r[31]+0x00000000u); // 800A6474
  c->r[3]=c->r[23]|c->r[23]; // 800A6478
  c->lr=0x800A6480u; f_805A179C(c); // 800A647C
  c->r[12]=R32(c->r[23]+0x000000E0u); // 800A6480
  c->f[1]=c->f[30]; // 800A6484
  c->r[3]=c->r[23]+0x000000E0u; // 800A6488
  c->r[4]=c->r[21]|c->r[21]; // 800A648C
  c->r[12]=R32(c->r[12]+0x00000060u); // 800A6490
  c->ctr=c->r[12]; // 800A6494
  if (true) { c->lr=0x800A649Cu; dispatch(c,c->ctr); } // 800A6498
  c->r[31]=c->r[31]+0x00000004u; // 800A649C
L_800A64A0:;
  c->r[3]=R32(c->r[29]+0x00000004u); // 800A64A0
  c->r[0]=R32(c->r[3]+0x00000004u); // 800A64A4
  c->r[3]=R32(c->r[3]+0x00000000u); // 800A64A8
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800A64AC
  c->r[0]=c->r[3]+c->r[0]; // 800A64B0
  cmpu(c,0,c->r[31],c->r[0]); // 800A64B4
  if (!crb(c,2)) { IRQCHK(c); goto L_800A6428; } // 800A64B8
  c->r[10]=R32(c->r[1]+0x00000000u); // 800A64BC
  c->r[11]=c->r[10]+0xFFFFFFE0u; // 800A64C0
  {uint32_t ea=c->r[10]+0xFFFFFFF8u; psq_load(c,31,ea,0,0);} // 800A64C4
  {uint32_t ea=c->r[10]+0xFFFFFFF0u; c->f[31]=RF64(ea);} // 800A64C8
  {uint32_t ea=c->r[10]+0xFFFFFFE8u; psq_load(c,30,ea,0,0);} // 800A64CC
  {uint32_t ea=c->r[10]+0xFFFFFFE0u; c->f[30]=RF64(ea);} // 800A64D0
  c->lr=0x800A64D8u; { c->r[21]=R32(c->r[11]+0xFFFFFFD4u); c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800A64D4
  c->r[0]=R32(c->r[10]+0x00000004u); // 800A64D8
  c->lr=c->r[0]; // 800A64DC
  c->r[1]=c->r[10]|c->r[10]; // 800A64E0
  return; // 800A64E4
}

// fn_800A64E8
void f_800A64E8(Ctx* __restrict c) {
  trace_call(0x800A64E8u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800A64E8
  c->r[0]=c->lr; // 800A64EC
  W32(c->r[1]+0x00000034u,c->r[0]); // 800A64F0
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[31]);} // 800A64F4
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,31,ea,0,0);} // 800A64F8
  {uint32_t ea=c->r[2]+0xFFFF9914u; c->f[31]=c->ps1[31]=RF32(ea);} // 800A64FC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800A6500
  W32(c->r[1]+0x00000018u,c->r[30]); // 800A6504
  c->r[30]=c->r[3]|c->r[3]; // 800A6508
  W32(c->r[1]+0x00000014u,c->r[29]); // 800A650C
  W32(c->r[1]+0x00000010u,c->r[28]); // 800A6510
  c->r[4]=R32(c->r[3]+0x00000008u); // 800A6514
  c->r[31]=R32(c->r[4]+0x00000000u); // 800A6518
  goto L_800A6594; // 800A651C
L_800A6520:;
  c->r[3]=R32(c->r[31]+0x00000000u); // 800A6520
  c->r[3]=R32(c->r[3]+0x00000000u); // 800A6524
  c->r[29]=R32(c->r[3]+0x0000000Cu); // 800A6528
  cmps(c,0,(int32_t)c->r[29],0); // 800A652C
  if (crb(c,2)) { goto L_800A6590; } // 800A6530
  c->r[12]=R32(c->r[29]+0x00000000u); // 800A6534
  c->r[3]=c->r[29]|c->r[29]; // 800A6538
  c->r[12]=R32(c->r[12]+0x00000028u); // 800A653C
  c->ctr=c->r[12]; // 800A6540
  if (true) { c->lr=0x800A6548u; dispatch(c,c->ctr); } // 800A6544
  cmps(c,0,(int32_t)c->r[3],12); // 800A6548
  if (!crb(c,2)) { goto L_800A6590; } // 800A654C
  c->r[28]=R32(c->r[31]+0x00000000u); // 800A6550
  c->r[3]=R32(c->r[28]+0x00000000u); // 800A6554
  c->r[4]=R32(c->r[28]+0x00000004u); // 800A6558
  c->r[3]=R32(c->r[3]+0x00000014u); // 800A655C
  c->r[3]=R32(c->r[3]+0x00000074u); // 800A6560
  c->lr=0x800A6568u; f_803B393C(c); // 800A6564
  cmps(c,0,(int32_t)c->r[3],0); // 800A6568
  if (!crb(c,2)) { goto L_800A6590; } // 800A656C
  c->r[3]=R32(c->r[28]+0x00000000u); // 800A6570
  c->r[0]=R16(c->r[29]+0x0000001Cu); // 800A6574
  c->r[3]=R32(c->r[3]+0x00000030u); // 800A6578
  c->r[3]=R32(c->r[3]+0x0000001Cu); // 800A657C
  c->r[0]=R8(c->r[3]+c->r[0]); // 800A6580
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800A6584
  if (!crb(c,2)) { goto L_800A6590; } // 800A6588
  {uint32_t ea=c->r[29]+0x00000020u; WF32(ea,c->f[31]);} // 800A658C
L_800A6590:;
  c->r[31]=c->r[31]+0x00000004u; // 800A6590
L_800A6594:;
  c->r[3]=R32(c->r[30]+0x00000008u); // 800A6594
  c->r[0]=R32(c->r[3]+0x00000004u); // 800A6598
  c->r[3]=R32(c->r[3]+0x00000000u); // 800A659C
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800A65A0
  c->r[0]=c->r[3]+c->r[0]; // 800A65A4
  cmpu(c,0,c->r[31],c->r[0]); // 800A65A8
  if (!crb(c,2)) { IRQCHK(c); goto L_800A6520; } // 800A65AC
  c->r[0]=R32(c->r[1]+0x00000034u); // 800A65B0
  {uint32_t ea=c->r[1]+0x00000028u; psq_load(c,31,ea,0,0);} // 800A65B4
  {uint32_t ea=c->r[1]+0x00000020u; c->f[31]=RF64(ea);} // 800A65B8
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800A65BC
  c->r[30]=R32(c->r[1]+0x00000018u); // 800A65C0
  c->r[29]=R32(c->r[1]+0x00000014u); // 800A65C4
  c->r[28]=R32(c->r[1]+0x00000010u); // 800A65C8
  c->lr=c->r[0]; // 800A65CC
  c->r[1]=c->r[1]+0x00000030u; // 800A65D0
  return; // 800A65D4
}

// fn_800A65D8
void f_800A65D8(Ctx* __restrict c) {
  trace_call(0x800A65D8u);
  return; // 800A65D8
}

// fn_800A65DC
void f_800A65DC(Ctx* __restrict c) {
  trace_call(0x800A65DCu);
  return; // 800A65DC
}

// fn_800A65E0
void f_800A65E0(Ctx* __restrict c) {
  trace_call(0x800A65E0u);
  return; // 800A65E0
}

// fn_800A65E4
void f_800A65E4(Ctx* __restrict c) {
  trace_call(0x800A65E4u);
  return; // 800A65E4
}

// fn_800A65E8
void f_800A65E8(Ctx* __restrict c) {
  trace_call(0x800A65E8u);
  return; // 800A65E8
}

// fn_800A65EC
void f_800A65EC(Ctx* __restrict c) {
  trace_call(0x800A65ECu);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800A65EC
  c->r[0]=c->lr; // 800A65F0
  c->r[3]=0u+0x80690000u; // 800A65F4
  c->r[4]=0u+0x00000000u; // 800A65F8
  c->r[3]=c->r[3]+0xFFFFDE58u; // 800A65FC
  W32(c->r[1]+0x00000054u,c->r[0]); // 800A6600
  c->r[5]=c->r[1]+0x00000038u; // 800A6604
  c->r[3]=c->r[3]+0x00000006u; // 800A6608
  goto L_800A6620; // 800A660C
L_800A6610:;
  W8(c->r[5]+0x00000000u,c->r[6]); // 800A6610
  c->r[5]=c->r[5]+0x00000001u; // 800A6614
  c->r[4]=c->r[4]+0x00000001u; // 800A6618
  c->r[3]=c->r[3]+0x00000001u; // 800A661C
L_800A6620:;
  cmps(c,0,(int32_t)c->r[4],10); // 800A6620
  if (!crb(c,0)) { goto L_800A663C; } // 800A6624
  c->r[6]=R8(c->r[3]+0x00000000u); // 800A6628
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[6]; cr0(c,c->r[0]); // 800A662C
  if (crb(c,2)) { goto L_800A663C; } // 800A6630
  cmps(c,0,(int32_t)c->r[0],58); // 800A6634
  if (!crb(c,2)) { IRQCHK(c); goto L_800A6610; } // 800A6638
L_800A663C:;
  c->r[3]=c->r[1]+0x00000038u; // 800A663C
  c->r[0]=0u+0x00000000u; // 800A6640
  W8(c->r[3]+c->r[4],c->r[0]); // 800A6644
  c->r[4]=0u+0x00000010u; // 800A6648
  c->lr=0x800A6650u; f_80625ED8(c); // 800A664C
  c->r[4]=0u+0x80690000u; // 800A6650
  W32(c->r[13]+0xFFFFC080u,c->r[3]); // 800A6654
  c->r[4]=c->r[4]+0xFFFFDE58u; // 800A6658
  c->r[5]=c->r[1]+0x0000002Cu; // 800A665C
  c->r[3]=c->r[4]+0x00000040u; // 800A6660
  c->r[4]=0u+0x00000000u; // 800A6664
  goto L_800A667C; // 800A6668
L_800A666C:;
  W8(c->r[5]+0x00000000u,c->r[6]); // 800A666C
  c->r[5]=c->r[5]+0x00000001u; // 800A6670
  c->r[4]=c->r[4]+0x00000001u; // 800A6674
  c->r[3]=c->r[3]+0x00000001u; // 800A6678
L_800A667C:;
  cmps(c,0,(int32_t)c->r[4],10); // 800A667C
  if (!crb(c,0)) { goto L_800A6698; } // 800A6680
  c->r[6]=R8(c->r[3]+0x00000000u); // 800A6684
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[6]; cr0(c,c->r[0]); // 800A6688
  if (crb(c,2)) { goto L_800A6698; } // 800A668C
  cmps(c,0,(int32_t)c->r[0],58); // 800A6690
  if (!crb(c,2)) { IRQCHK(c); goto L_800A666C; } // 800A6694
L_800A6698:;
  c->r[3]=c->r[1]+0x0000002Cu; // 800A6698
  c->r[0]=0u+0x00000000u; // 800A669C
  W8(c->r[3]+c->r[4],c->r[0]); // 800A66A0
  c->r[4]=0u+0x00000010u; // 800A66A4
  c->lr=0x800A66ACu; f_80625ED8(c); // 800A66A8
  c->r[4]=0u+0x80690000u; // 800A66AC
  W32(c->r[13]+0xFFFFC084u,c->r[3]); // 800A66B0
  c->r[4]=c->r[4]+0xFFFFDE58u; // 800A66B4
  c->r[5]=c->r[1]+0x00000020u; // 800A66B8
  c->r[3]=c->r[4]+0x00000040u; // 800A66BC
  c->r[4]=0u+0x00000000u; // 800A66C0
  goto L_800A66D8; // 800A66C4
L_800A66C8:;
  W8(c->r[5]+0x00000000u,c->r[6]); // 800A66C8
  c->r[5]=c->r[5]+0x00000001u; // 800A66CC
  c->r[4]=c->r[4]+0x00000001u; // 800A66D0
  c->r[3]=c->r[3]+0x00000001u; // 800A66D4
L_800A66D8:;
  cmps(c,0,(int32_t)c->r[4],10); // 800A66D8
  if (!crb(c,0)) { goto L_800A66F4; } // 800A66DC
  c->r[6]=R8(c->r[3]+0x00000000u); // 800A66E0
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[6]; cr0(c,c->r[0]); // 800A66E4
  if (crb(c,2)) { goto L_800A66F4; } // 800A66E8
  cmps(c,0,(int32_t)c->r[0],58); // 800A66EC
  if (!crb(c,2)) { IRQCHK(c); goto L_800A66C8; } // 800A66F0
L_800A66F4:;
  c->r[3]=c->r[1]+0x00000020u; // 800A66F4
  c->r[0]=0u+0x00000000u; // 800A66F8
  W8(c->r[3]+c->r[4],c->r[0]); // 800A66FC
  c->r[4]=0u+0x00000010u; // 800A6700
  c->lr=0x800A6708u; f_80625ED8(c); // 800A6704
  c->r[4]=0u+0x80690000u; // 800A6708
  W32(c->r[13]+0xFFFFC088u,c->r[3]); // 800A670C
  c->r[4]=c->r[4]+0xFFFFDE58u; // 800A6710
  c->r[5]=c->r[1]+0x00000014u; // 800A6714
  c->r[3]=c->r[4]+0x00000040u; // 800A6718
  c->r[4]=0u+0x00000000u; // 800A671C
  goto L_800A6734; // 800A6720
L_800A6724:;
  W8(c->r[5]+0x00000000u,c->r[6]); // 800A6724
  c->r[5]=c->r[5]+0x00000001u; // 800A6728
  c->r[4]=c->r[4]+0x00000001u; // 800A672C
  c->r[3]=c->r[3]+0x00000001u; // 800A6730
L_800A6734:;
  cmps(c,0,(int32_t)c->r[4],10); // 800A6734
  if (!crb(c,0)) { goto L_800A6750; } // 800A6738
  c->r[6]=R8(c->r[3]+0x00000000u); // 800A673C
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[6]; cr0(c,c->r[0]); // 800A6740
  if (crb(c,2)) { goto L_800A6750; } // 800A6744
  cmps(c,0,(int32_t)c->r[0],58); // 800A6748
  if (!crb(c,2)) { IRQCHK(c); goto L_800A6724; } // 800A674C
L_800A6750:;
  c->r[3]=c->r[1]+0x00000014u; // 800A6750
  c->r[0]=0u+0x00000000u; // 800A6754
  W8(c->r[3]+c->r[4],c->r[0]); // 800A6758
  c->r[4]=0u+0x00000010u; // 800A675C
  c->lr=0x800A6764u; f_80625ED8(c); // 800A6760
  c->r[4]=0u+0x80690000u; // 800A6764
  W32(c->r[13]+0xFFFFC08Cu,c->r[3]); // 800A6768
  c->r[4]=c->r[4]+0xFFFFDE58u; // 800A676C
  c->r[5]=c->r[1]+0x00000008u; // 800A6770
  c->r[3]=c->r[4]+0x00000040u; // 800A6774
  c->r[4]=0u+0x00000000u; // 800A6778
  goto L_800A6790; // 800A677C
L_800A6780:;
  W8(c->r[5]+0x00000000u,c->r[6]); // 800A6780
  c->r[5]=c->r[5]+0x00000001u; // 800A6784
  c->r[4]=c->r[4]+0x00000001u; // 800A6788
  c->r[3]=c->r[3]+0x00000001u; // 800A678C
L_800A6790:;
  cmps(c,0,(int32_t)c->r[4],10); // 800A6790
  if (!crb(c,0)) { goto L_800A67AC; } // 800A6794
  c->r[6]=R8(c->r[3]+0x00000000u); // 800A6798
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[6]; cr0(c,c->r[0]); // 800A679C
  if (crb(c,2)) { goto L_800A67AC; } // 800A67A0
  cmps(c,0,(int32_t)c->r[0],58); // 800A67A4
  if (!crb(c,2)) { IRQCHK(c); goto L_800A6780; } // 800A67A8
L_800A67AC:;
  c->r[3]=c->r[1]+0x00000008u; // 800A67AC
  c->r[0]=0u+0x00000000u; // 800A67B0
  W8(c->r[3]+c->r[4],c->r[0]); // 800A67B4
  c->r[4]=0u+0x00000010u; // 800A67B8
  c->lr=0x800A67C0u; f_80625ED8(c); // 800A67BC
  c->r[0]=R32(c->r[1]+0x00000054u); // 800A67C0
  W32(c->r[13]+0xFFFFC090u,c->r[3]); // 800A67C4
  c->lr=c->r[0]; // 800A67C8
  c->r[1]=c->r[1]+0x00000050u; // 800A67CC
  return; // 800A67D0
}

// fn_800A67D4
void f_800A67D4(Ctx* __restrict c) {
  trace_call(0x800A67D4u);
  c->r[3]=c->r[3]+0xFFFFFFF8u; // 800A67D4
  f_800A4208(c); return; // 800A67D8
}

// fn_800A67DC
void f_800A67DC(Ctx* __restrict c) {
  trace_call(0x800A67DCu);
  c->r[3]=c->r[3]+0xFFFFFFF8u; // 800A67DC
  f_800A65E8(c); return; // 800A67E0
}

// fn_800A67E4
void f_800A67E4(Ctx* __restrict c) {
  trace_call(0x800A67E4u);
  c->r[3]=c->r[3]+0xFFFFFFF8u; // 800A67E4
  f_800A428C(c); return; // 800A67E8
}

// fn_800A67EC
void f_800A67EC(Ctx* __restrict c) {
  trace_call(0x800A67ECu);
  c->r[3]=c->r[3]+0xFFFFFFF8u; // 800A67EC
  f_800A65E4(c); return; // 800A67F0
}

// fn_800A67F4
void f_800A67F4(Ctx* __restrict c) {
  trace_call(0x800A67F4u);
  c->r[3]=c->r[3]+0xFFFFFFF8u; // 800A67F4
  f_800A4388(c); return; // 800A67F8
}

// fn_800A67FC
void f_800A67FC(Ctx* __restrict c) {
  trace_call(0x800A67FCu);
  c->r[3]=c->r[3]+0xFFFFFFF8u; // 800A67FC
  f_800A65DC(c); return; // 800A6800
}

// fn_800A6804
void f_800A6804(Ctx* __restrict c) {
  trace_call(0x800A6804u);
  c->r[3]=c->r[3]+0xFFFFFFF8u; // 800A6804
  f_800A43D8(c); return; // 800A6808
}

// fn_800A680C
void f_800A680C(Ctx* __restrict c) {
  trace_call(0x800A680Cu);
  c->r[3]=c->r[3]+0xFFFFFFF8u; // 800A680C
  f_800A65D8(c); return; // 800A6810
}

// fn_800A6814
void f_800A6814(Ctx* __restrict c) {
  trace_call(0x800A6814u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800A6814
  c->r[0]=c->lr; // 800A6818
  {uint32_t ea=c->r[3]+0x00000000u; c->f[4]=c->ps1[4]=RF32(ea);} // 800A681C
  c->f[5]=c->f[2]; // 800A6820
  {uint32_t ea=c->r[3]+0x00000004u; c->f[3]=c->ps1[3]=RF32(ea);} // 800A6824
  {uint32_t ea=c->r[3]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800A6828
  c->f[3]=c->ps1[3]=S(c->f[4]+c->f[3]); // 800A682C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800A6830
  c->f[0]=c->ps1[0]=S(c->f[2]-c->f[0]); // 800A6834
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800A6838
  c->r[31]=c->r[3]|c->r[3]; // 800A683C
  fcmp(c,0,c->f[1],c->f[3]); // 800A6840
  if (!crb(c,0)) { goto L_800A6874; } // 800A6844
  fcmp(c,0,c->f[3],c->f[4]); // 800A6848
  if (!crb(c,1)) { goto L_800A685C; } // 800A684C
  c->f[2]=c->f[4]; // 800A6850
  c->lr=0x800A6858u; f_80073B4C(c); // 800A6854
  goto L_800A6860; // 800A6858
L_800A685C:;
  {uint32_t ea=c->r[2]+0xFFFF9938u; c->f[1]=c->ps1[1]=RF32(ea);} // 800A685C
L_800A6860:;
  {uint32_t ea=c->r[2]+0xFFFF9938u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A6860
  {uint32_t ea=c->r[31]+0x00000008u; c->f[2]=c->ps1[2]=RF32(ea);} // 800A6864
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[2]); // 800A6868
  c->f[1]=c->ps1[1]=S(std::fma(c->f[1],c->f[0],c->f[2])); // 800A686C
  goto L_800A68B0; // 800A6870
L_800A6874:;
  fcmp(c,0,c->f[1],c->f[0]); // 800A6874
  if (!crb(c,1)) { goto L_800A68AC; } // 800A6878
  fcmp(c,0,c->f[2],c->f[0]); // 800A687C
  if (!crb(c,1)) { goto L_800A6894; } // 800A6880
  c->f[2]=c->f[0]; // 800A6884
  c->f[3]=c->f[5]; // 800A6888
  c->lr=0x800A6890u; f_80073B4C(c); // 800A688C
  goto L_800A6898; // 800A6890
L_800A6894:;
  {uint32_t ea=c->r[2]+0xFFFF9938u; c->f[1]=c->ps1[1]=RF32(ea);} // 800A6894
L_800A6898:;
  {uint32_t ea=c->r[31]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A6898
  {uint32_t ea=c->r[2]+0xFFFF9938u; c->f[2]=c->ps1[2]=RF32(ea);} // 800A689C
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[2]); // 800A68A0
  c->f[1]=c->ps1[1]=S(std::fma(c->f[1],c->f[0],c->f[2])); // 800A68A4
  goto L_800A68B0; // 800A68A8
L_800A68AC:;
  {uint32_t ea=c->r[2]+0xFFFF9938u; c->f[1]=c->ps1[1]=RF32(ea);} // 800A68AC
L_800A68B0:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800A68B0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800A68B4
  c->lr=c->r[0]; // 800A68B8
  c->r[1]=c->r[1]+0x00000010u; // 800A68BC
  return; // 800A68C0
}

// fn_800A68C4
void f_800A68C4(Ctx* __restrict c) {
  trace_call(0x800A68C4u);
  {uint32_t ea=c->r[2]+0xFFFF993Cu; c->f[8]=c->ps1[8]=RF32(ea);} // 800A68C4
  {uint32_t ea=c->r[2]+0xFFFF9938u; c->f[7]=c->ps1[7]=RF32(ea);} // 800A68C8
  {uint32_t ea=c->r[2]+0xFFFF9940u; c->f[6]=c->ps1[6]=RF32(ea);} // 800A68CC
  {uint32_t ea=c->r[2]+0xFFFF9944u; c->f[5]=c->ps1[5]=RF32(ea);} // 800A68D0
  {uint32_t ea=c->r[2]+0xFFFF9948u; c->f[4]=c->ps1[4]=RF32(ea);} // 800A68D4
  {uint32_t ea=c->r[2]+0xFFFF994Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 800A68D8
  {uint32_t ea=c->r[2]+0xFFFF9950u; c->f[2]=c->ps1[2]=RF32(ea);} // 800A68DC
  {uint32_t ea=c->r[2]+0xFFFF9954u; c->f[1]=c->ps1[1]=RF32(ea);} // 800A68E0
  {uint32_t ea=c->r[2]+0xFFFF9958u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A68E4
  {uint32_t ea=c->r[3]+0x00000000u; WF32(ea,c->f[8]);} // 800A68E8
  {uint32_t ea=c->r[3]+0x00000004u; WF32(ea,c->f[8]);} // 800A68EC
  {uint32_t ea=c->r[3]+0x00000008u; WF32(ea,c->f[7]);} // 800A68F0
  {uint32_t ea=c->r[3]+0x0000000Cu; WF32(ea,c->f[8]);} // 800A68F4
  {uint32_t ea=c->r[3]+0x00000010u; WF32(ea,c->f[7]);} // 800A68F8
  {uint32_t ea=c->r[3]+0x00000014u; WF32(ea,c->f[6]);} // 800A68FC
  {uint32_t ea=c->r[3]+0x00000018u; WF32(ea,c->f[5]);} // 800A6900
  {uint32_t ea=c->r[3]+0x0000001Cu; WF32(ea,c->f[4]);} // 800A6904
  {uint32_t ea=c->r[3]+0x00000020u; WF32(ea,c->f[3]);} // 800A6908
  {uint32_t ea=c->r[3]+0x00000024u; WF32(ea,c->f[2]);} // 800A690C
  {uint32_t ea=c->r[3]+0x00000028u; WF32(ea,c->f[1]);} // 800A6910
  {uint32_t ea=c->r[3]+0x0000002Cu; WF32(ea,c->f[8]);} // 800A6914
  {uint32_t ea=c->r[3]+0x00000030u; WF32(ea,c->f[7]);} // 800A6918
  {uint32_t ea=c->r[3]+0x00000034u; WF32(ea,c->f[8]);} // 800A691C
  {uint32_t ea=c->r[3]+0x00000038u; WF32(ea,c->f[7]);} // 800A6920
  {uint32_t ea=c->r[3]+0x0000003Cu; WF32(ea,c->f[0]);} // 800A6924
  {uint32_t ea=c->r[3]+0x00000040u; WF32(ea,c->f[8]);} // 800A6928
  {uint32_t ea=c->r[3]+0x00000044u; WF32(ea,c->f[7]);} // 800A692C
  {uint32_t ea=c->r[3]+0x00000048u; WF32(ea,c->f[8]);} // 800A6930
  {uint32_t ea=c->r[3]+0x0000004Cu; WF32(ea,c->f[7]);} // 800A6934
  return; // 800A6938
}

// fn_800A693C
void f_800A693C(Ctx* __restrict c) {
  trace_call(0x800A693Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800A693C
  c->r[0]=c->lr; // 800A6940
  W32(c->r[1]+0x00000014u,c->r[0]); // 800A6944
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800A6948
  c->r[31]=c->r[5]|c->r[5]; // 800A694C
  W32(c->r[1]+0x00000008u,c->r[30]); // 800A6950
  c->r[30]=c->r[4]|c->r[4]; // 800A6954
  {uint32_t ea=c->r[3]+0x0000003Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 800A6958
  fcmp(c,0,c->f[1],c->f[2]); // 800A695C
  if (!crb(c,1)) { goto L_800A697C; } // 800A6960
  {uint32_t ea=c->r[2]+0xFFFF995Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800A6964
  c->r[3]=c->r[3]+0x0000003Cu; // 800A6968
  c->f[2]=c->ps1[2]=S(c->f[0]+c->f[2]); // 800A696C
  c->lr=0x800A6974u; f_800A6814(c); // 800A6970
  c->r[0]=0u+0x00000003u; // 800A6974
  goto L_800A69C4; // 800A6978
L_800A697C:;
  {uint32_t ea=c->r[3]+0x00000028u; c->f[3]=c->ps1[3]=RF32(ea);} // 800A697C
  fcmp(c,0,c->f[1],c->f[3]); // 800A6980
  if (!crb(c,1)) { goto L_800A6998; } // 800A6984
  c->r[3]=c->r[3]+0x00000028u; // 800A6988
  c->lr=0x800A6990u; f_800A6814(c); // 800A698C
  c->r[0]=0u+0x00000002u; // 800A6990
  goto L_800A69C4; // 800A6994
L_800A6998:;
  {uint32_t ea=c->r[3]+0x00000014u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A6998
  fcmp(c,0,c->f[1],c->f[0]); // 800A699C
  if (!crb(c,1)) { goto L_800A69B8; } // 800A69A0
  c->f[2]=c->f[3]; // 800A69A4
  c->r[3]=c->r[3]+0x00000014u; // 800A69A8
  c->lr=0x800A69B0u; f_800A6814(c); // 800A69AC
  c->r[0]=0u+0x00000001u; // 800A69B0
  goto L_800A69C4; // 800A69B4
L_800A69B8:;
  {uint32_t ea=c->r[3]+0x00000000u; c->f[2]=c->ps1[2]=RF32(ea);} // 800A69B8
  c->lr=0x800A69C0u; f_800A6814(c); // 800A69BC
  c->r[0]=0u+0x00000000u; // 800A69C0
L_800A69C4:;
  W32(c->r[30]+0x00000000u,c->r[0]); // 800A69C4
  {uint32_t ea=c->r[31]+0x00000000u; WF32(ea,c->f[1]);} // 800A69C8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800A69CC
  c->r[30]=R32(c->r[1]+0x00000008u); // 800A69D0
  c->r[0]=R32(c->r[1]+0x00000014u); // 800A69D4
  c->lr=c->r[0]; // 800A69D8
  c->r[1]=c->r[1]+0x00000010u; // 800A69DC
  return; // 800A69E0
}

// fn_800A69E4
void f_800A69E4(Ctx* __restrict c) {
  trace_call(0x800A69E4u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800A69E4
  c->r[0]=c->lr; // 800A69E8
  W32(c->r[1]+0x00000024u,c->r[0]); // 800A69EC
  c->r[11]=c->r[1]+0x00000020u; // 800A69F0
  c->lr=0x800A69F8u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800A69F4
  c->r[31]=c->r[3]|c->r[3]; // 800A69F8
  c->r[29]=0u+0x80690000u; // 800A69FC
  c->r[30]=c->r[31]|c->r[31]; // 800A6A00
  c->r[29]=c->r[29]+0xFFFFDEA0u; // 800A6A04
  c->lr=0x800A6A0Cu; f_80373290(c); // 800A6A08
  c->r[28]=c->r[31]+0x0000001Cu; // 800A6A0C
  c->r[3]=c->r[28]|c->r[28]; // 800A6A10
  c->lr=0x800A6A18u; f_800506C0(c); // 800A6A14
  cmps(c,0,(int32_t)c->r[28],0); // 800A6A18
  c->r[0]=c->r[28]|c->r[28]; // 800A6A1C
  if (crb(c,2)) { goto L_800A6A28; } // 800A6A20
  c->r[0]=c->r[28]+0xFFFFFFE4u; // 800A6A24
L_800A6A28:;
  c->r[27]=c->r[31]+0x00000028u; // 800A6A28
  W32(c->r[28]+0x00000008u,c->r[0]); // 800A6A2C
  c->r[3]=c->r[27]|c->r[27]; // 800A6A30
  c->lr=0x800A6A38u; f_800506C0(c); // 800A6A34
  cmps(c,0,(int32_t)c->r[27],0); // 800A6A38
  c->r[0]=c->r[27]|c->r[27]; // 800A6A3C
  if (crb(c,2)) { goto L_800A6A48; } // 800A6A40
  c->r[0]=c->r[27]+0xFFFFFFD8u; // 800A6A44
L_800A6A48:;
  c->r[28]=c->r[31]+0x00000034u; // 800A6A48
  W32(c->r[27]+0x00000008u,c->r[0]); // 800A6A4C
  c->r[3]=c->r[28]|c->r[28]; // 800A6A50
  c->lr=0x800A6A58u; f_800506C0(c); // 800A6A54
  cmps(c,0,(int32_t)c->r[28],0); // 800A6A58
  c->r[0]=c->r[28]|c->r[28]; // 800A6A5C
  if (crb(c,2)) { goto L_800A6A68; } // 800A6A60
  c->r[0]=c->r[28]+0xFFFFFFCCu; // 800A6A64
L_800A6A68:;
  c->r[4]=0u+0x806F0000u; // 800A6A68
  W32(c->r[28]+0x00000008u,c->r[0]); // 800A6A6C
  c->r[4]=c->r[4]+0x00001C90u; // 800A6A70
  c->r[3]=c->r[31]+0x0000004Cu; // 800A6A74
  W32(c->r[31]+0x00000000u,c->r[4]); // 800A6A78
  c->lr=0x800A6A80u; f_8007382C(c); // 800A6A7C
  c->r[0]=R8(c->r[13]+0xFFFFC05Cu); // 800A6A80
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800A6A84
  if (!crb(c,2)) { goto L_800A6AA4; } // 800A6A88
  c->r[3]=R32(c->r[13]+0xFFFFBB58u); // 800A6A8C
  c->r[0]=0u+0x00000001u; // 800A6A90
  W32(c->r[13]+0xFFFFC058u,c->r[3]); // 800A6A94
  c->r[3]=c->r[3]+0x00000001u; // 800A6A98
  W32(c->r[13]+0xFFFFBB58u,c->r[3]); // 800A6A9C
  W8(c->r[13]+0xFFFFC05Cu,c->r[0]); // 800A6AA0
L_800A6AA4:;
  c->r[0]=R32(c->r[13]+0xFFFFC058u); // 800A6AA4
  c->r[3]=c->r[31]+0x0000004Cu; // 800A6AA8
  W32(c->r[31]+0x00000044u,c->r[0]); // 800A6AAC
  c->r[0]=R32(c->r[13]+0xFFFF8080u); // 800A6AB0
  W32(c->r[31]+0x00000048u,c->r[0]); // 800A6AB4
  c->lr=0x800A6ABCu; f_8032EDFC(c); // 800A6AB8
  c->r[30]=0u+0x00000001u; // 800A6ABC
  W8(c->r[31]+0x00000074u,c->r[30]); // 800A6AC0
  c->r[3]=c->r[31]+0x00000078u; // 800A6AC4
  W32(c->r[31]+0x00000040u,c->r[29]); // 800A6AC8
  c->lr=0x800A6AD0u; f_8035FDE4(c); // 800A6ACC
  c->r[3]=0u+0x806D0000u; // 800A6AD0
  c->r[4]=0u+0x800A0000u; // 800A6AD4
  c->r[3]=c->r[3]+0x00005F40u; // 800A6AD8
  c->r[5]=0u+0x800A0000u; // 800A6ADC
  c->r[0]=c->r[3]+0x00000054u; // 800A6AE0
  W32(c->r[31]+0x00000000u,c->r[3]); // 800A6AE4
  c->r[3]=c->r[31]+0x0000009Cu; // 800A6AE8
  c->r[4]=c->r[4]+0x00006B64u; // 800A6AEC
  W32(c->r[31]+0x00000080u,c->r[0]); // 800A6AF0
  c->r[5]=c->r[5]+0x00006BCCu; // 800A6AF4
  c->r[6]=0u+0x00000028u; // 800A6AF8
  c->r[7]=0u+0x00000010u; // 800A6AFC
  c->lr=0x800A6B04u; f_803A9830(c); // 800A6B00
  c->r[3]=c->r[31]+0x0000031Cu; // 800A6B04
  c->lr=0x800A6B0Cu; f_800A6C08(c); // 800A6B08
  c->r[3]=c->r[31]+0x00000328u; // 800A6B0C
  c->lr=0x800A6B14u; f_800A6C08(c); // 800A6B10
  c->r[3]=c->r[31]+0x00000334u; // 800A6B14
  c->lr=0x800A6B1Cu; f_80331BF8(c); // 800A6B18
  c->r[3]=c->r[31]+0x000012B4u; // 800A6B1C
  c->lr=0x800A6B24u; f_8007382C(c); // 800A6B20
  c->r[3]=c->r[31]+0x000012E8u; // 800A6B24
  c->lr=0x800A6B2Cu; f_800A68C4(c); // 800A6B28
  c->r[3]=c->r[31]+0x00001340u; // 800A6B2C
  c->r[4]=0u+0x00000000u; // 800A6B30
  c->r[5]=0u+0x00000018u; // 800A6B34
  c->lr=0x800A6B3Cu; f_800043EC(c); // 800A6B38
  {uint32_t ea=c->r[2]+0xFFFF993Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800A6B3C
  c->r[11]=c->r[1]+0x00000020u; // 800A6B40
  W8(c->r[31]+0x0000134Cu,c->r[30]); // 800A6B44
  c->r[3]=c->r[31]|c->r[31]; // 800A6B48
  {uint32_t ea=c->r[31]+0x00001338u; WF32(ea,c->f[0]);} // 800A6B4C
  c->lr=0x800A6B54u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800A6B50
  c->r[0]=R32(c->r[1]+0x00000024u); // 800A6B54
  c->lr=c->r[0]; // 800A6B58
  c->r[1]=c->r[1]+0x00000020u; // 800A6B5C
  return; // 800A6B60
}

// fn_800A6B64
void f_800A6B64(Ctx* __restrict c) {
  trace_call(0x800A6B64u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800A6B64
  c->r[0]=c->lr; // 800A6B68
  W32(c->r[1]+0x00000014u,c->r[0]); // 800A6B6C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800A6B70
  c->r[31]=c->r[3]|c->r[3]; // 800A6B74
  c->lr=0x800A6B7Cu; f_800A6BBC(c); // 800A6B78
  c->r[3]=c->r[31]+0x0000000Cu; // 800A6B7C
  c->r[4]=0u+0x00000000u; // 800A6B80
  c->r[5]=0u+0x00000004u; // 800A6B84
  c->lr=0x800A6B8Cu; f_800043EC(c); // 800A6B88
  c->r[3]=c->r[31]+0x00000010u; // 800A6B8C
  c->r[4]=0u+0x00000000u; // 800A6B90
  c->r[5]=0u+0x00000018u; // 800A6B94
  c->lr=0x800A6B9Cu; f_800043EC(c); // 800A6B98
  c->r[0]=0u+0x00000001u; // 800A6B9C
  W8(c->r[31]+0x0000001Cu,c->r[0]); // 800A6BA0
  c->r[3]=c->r[31]|c->r[31]; // 800A6BA4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800A6BA8
  c->r[0]=R32(c->r[1]+0x00000014u); // 800A6BAC
  c->lr=c->r[0]; // 800A6BB0
  c->r[1]=c->r[1]+0x00000010u; // 800A6BB4
  return; // 800A6BB8
}

// fn_800A6BBC
void f_800A6BBC(Ctx* __restrict c) {
  trace_call(0x800A6BBCu);
  c->r[0]=0u+0x00000000u; // 800A6BBC
  W32(c->r[3]+0x00000000u,c->r[0]); // 800A6BC0
  W32(c->r[3]+0x00000004u,c->r[0]); // 800A6BC4
  return; // 800A6BC8
}

// dtor_800A6BCC
void f_800A6BCC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800A6BCC
  c->r[0]=c->lr; // 800A6BD0
  cmps(c,0,(int32_t)c->r[3],0); // 800A6BD4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800A6BD8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800A6BDC
  c->r[31]=c->r[3]|c->r[3]; // 800A6BE0
  if (crb(c,2)) { goto L_800A6BF0; } // 800A6BE4
  c->r[4]=0u+0x00000000u; // 800A6BE8
  c->lr=0x800A6BF0u; f_800A36E4(c); // 800A6BEC
L_800A6BF0:;
  c->r[3]=c->r[31]|c->r[31]; // 800A6BF0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800A6BF4
  c->r[0]=R32(c->r[1]+0x00000014u); // 800A6BF8
  c->lr=c->r[0]; // 800A6BFC
  c->r[1]=c->r[1]+0x00000010u; // 800A6C00
  return; // 800A6C04
}

// fn_800A6C08
void f_800A6C08(Ctx* __restrict c) {
  trace_call(0x800A6C08u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800A6C08
  c->r[0]=c->lr; // 800A6C0C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800A6C10
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800A6C14
  c->r[31]=c->r[3]|c->r[3]; // 800A6C18
  c->r[3]=c->r[3]+0x00000004u; // 800A6C1C
  c->lr=0x800A6C24u; f_800A6BBC(c); // 800A6C20
  c->r[0]=c->r[31]+0x00000004u; // 800A6C24
  c->r[3]=0u+0x00000000u; // 800A6C28
  W32(c->r[31]+0x00000000u,c->r[3]); // 800A6C2C
  c->r[3]=c->r[31]|c->r[31]; // 800A6C30
  W32(c->r[31]+0x00000004u,c->r[0]); // 800A6C34
  W32(c->r[31]+0x00000008u,c->r[0]); // 800A6C38
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800A6C3C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800A6C40
  c->lr=c->r[0]; // 800A6C44
  c->r[1]=c->r[1]+0x00000010u; // 800A6C48
  return; // 800A6C4C
}

// dtor_800A6C50
void f_800A6C50(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800A6C50
  c->r[0]=c->lr; // 800A6C54
  cmps(c,0,(int32_t)c->r[3],0); // 800A6C58
  W32(c->r[1]+0x00000014u,c->r[0]); // 800A6C5C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800A6C60
  c->r[31]=c->r[3]|c->r[3]; // 800A6C64
  if (crb(c,2)) { goto L_800A6C78; } // 800A6C68
  if (crb(c,2)) { goto L_800A6C78; } // 800A6C6C
  c->r[4]=0u+0x00000000u; // 800A6C70
  c->lr=0x800A6C78u; f_80507DCC(c); // 800A6C74
L_800A6C78:;
  c->r[3]=c->r[31]|c->r[31]; // 800A6C78
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800A6C7C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800A6C80
  c->lr=c->r[0]; // 800A6C84
  c->r[1]=c->r[1]+0x00000010u; // 800A6C88
  return; // 800A6C8C
}

// dtor_800A6C90
void f_800A6C90(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800A6C90
  c->r[0]=c->lr; // 800A6C94
  cmps(c,0,(int32_t)c->r[3],0); // 800A6C98
  W32(c->r[1]+0x00000014u,c->r[0]); // 800A6C9C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800A6CA0
  c->r[31]=c->r[3]|c->r[3]; // 800A6CA4
  if (crb(c,2)) { goto L_800A6D14; } // 800A6CA8
  c->r[12]=0u+0x806D0000u; // 800A6CAC
  c->r[12]=c->r[12]+0x00005F40u; // 800A6CB0
  W32(c->r[3]+0x00000000u,c->r[12]); // 800A6CB4
  c->r[0]=c->r[12]+0x00000054u; // 800A6CB8
  W32(c->r[3]+0x00000080u,c->r[0]); // 800A6CBC
  c->r[12]=R32(c->r[12]+0x00000028u); // 800A6CC0
  c->ctr=c->r[12]; // 800A6CC4
  if (true) { c->lr=0x800A6CCCu; dispatch(c,c->ctr); } // 800A6CC8
  c->r[3]=c->r[31]+0x00000334u; // 800A6CCC
  c->r[4]=0u+0xFFFFFFFFu; // 800A6CD0
  c->lr=0x800A6CD8u; f_80331D6C(c); // 800A6CD4
  c->r[3]=c->r[31]+0x00000328u; // 800A6CD8
  c->r[4]=0u+0xFFFFFFFFu; // 800A6CDC
  c->lr=0x800A6CE4u; f_800A6C50(c); // 800A6CE0
  c->r[3]=c->r[31]+0x0000031Cu; // 800A6CE4
  c->r[4]=0u+0xFFFFFFFFu; // 800A6CE8
  c->lr=0x800A6CF0u; f_800A6C50(c); // 800A6CEC
  c->r[4]=0u+0x800A0000u; // 800A6CF0
  c->r[3]=c->r[31]+0x0000009Cu; // 800A6CF4
  c->r[4]=c->r[4]+0x00006BCCu; // 800A6CF8
  c->r[5]=0u+0x00000028u; // 800A6CFC
  c->r[6]=0u+0x00000010u; // 800A6D00
  c->lr=0x800A6D08u; f_803A9928(c); // 800A6D04
  c->r[3]=c->r[31]|c->r[31]; // 800A6D08
  c->r[4]=0u+0x00000000u; // 800A6D0C
  c->lr=0x800A6D14u; f_8005AF20(c); // 800A6D10
L_800A6D14:;
  c->r[3]=c->r[31]|c->r[31]; // 800A6D14
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800A6D18
  c->r[0]=R32(c->r[1]+0x00000014u); // 800A6D1C
  c->lr=c->r[0]; // 800A6D20
  c->r[1]=c->r[1]+0x00000010u; // 800A6D24
  return; // 800A6D28
}

// fn_800A6D2C
void f_800A6D2C(Ctx* __restrict c) {
  trace_call(0x800A6D2Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800A6D2C
  c->r[0]=c->lr; // 800A6D30
  W32(c->r[1]+0x00000024u,c->r[0]); // 800A6D34
  c->r[11]=c->r[1]+0x00000020u; // 800A6D38
  c->lr=0x800A6D40u; { W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800A6D3C
  c->r[0]=0u+0x00000010u; // 800A6D40
  c->r[28]=c->r[3]|c->r[3]; // 800A6D44
  c->r[6]=0u+0x00000000u; // 800A6D48
  c->r[4]=0u+0x00000000u; // 800A6D4C
  c->ctr=c->r[0]; // 800A6D50
L_800A6D54:;
  c->r[5]=c->r[3]+c->r[4]; // 800A6D54
  c->r[4]=c->r[4]+0x00000004u; // 800A6D58
  W32(c->r[5]+0x00000084u,c->r[6]); // 800A6D5C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800A6D54; } // 800A6D60
  c->r[29]=0u+0x00000000u; // 800A6D64
  c->r[31]=0u+0x00000000u; // 800A6D68
L_800A6D6C:;
  c->r[30]=c->r[28]+c->r[31]; // 800A6D6C
  c->r[4]=0u+0x00000000u; // 800A6D70
  c->r[3]=c->r[30]+0x000000A8u; // 800A6D74
  c->r[5]=0u+0x00000004u; // 800A6D78
  c->lr=0x800A6D80u; f_800043EC(c); // 800A6D7C
  {uint32_t ea=c->r[2]+0xFFFF993Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800A6D80
  c->r[3]=c->r[30]+0x000000ACu; // 800A6D84
  {uint32_t ea=c->r[2]+0xFFFF9960u; c->f[3]=c->ps1[3]=RF32(ea);} // 800A6D88
  c->r[4]=0u+0x00000002u; // 800A6D8C
  c->f[2]=c->f[1]; // 800A6D90
  c->lr=0x800A6D98u; f_8032A238(c); // 800A6D94
  c->r[29]=c->r[29]+0x00000001u; // 800A6D98
  c->r[31]=c->r[31]+0x00000028u; // 800A6D9C
  cmpu(c,0,c->r[29],0x00000010u); // 800A6DA0
  if (crb(c,0)) { IRQCHK(c); goto L_800A6D6C; } // 800A6DA4
  c->r[3]=c->r[28]+0x0000031Cu; // 800A6DA8
  c->lr=0x800A6DB0u; f_80507E98(c); // 800A6DAC
  c->r[3]=c->r[28]+0x00000328u; // 800A6DB0
  c->lr=0x800A6DB8u; f_80507E98(c); // 800A6DB4
  c->r[29]=0u+0x00000000u; // 800A6DB8
  c->r[31]=0u+0x00000000u; // 800A6DBC
L_800A6DC0:;
  c->r[4]=c->r[28]+c->r[31]; // 800A6DC0
  c->r[3]=c->r[28]+0x0000031Cu; // 800A6DC4
  c->r[4]=c->r[4]+0x0000009Cu; // 800A6DC8
  c->lr=0x800A6DD0u; f_800A6E50(c); // 800A6DCC
  c->r[29]=c->r[29]+0x00000001u; // 800A6DD0
  c->r[31]=c->r[31]+0x00000028u; // 800A6DD4
  cmpu(c,0,c->r[29],0x00000010u); // 800A6DD8
  if (crb(c,0)) { IRQCHK(c); goto L_800A6DC0; } // 800A6DDC
  c->r[3]=c->r[28]+0x000012B4u; // 800A6DE0
  c->lr=0x800A6DE8u; f_8032EDFC(c); // 800A6DE4
  c->r[3]=c->r[28]+0x00000334u; // 800A6DE8
  c->lr=0x800A6DF0u; f_80331E18(c); // 800A6DEC
  {uint32_t ea=c->r[2]+0xFFFF993Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800A6DF0
  c->r[0]=0u+0x00000000u; // 800A6DF4
  W32(c->r[28]+0x000012E0u,c->r[0]); // 800A6DF8
  c->r[3]=c->r[28]+0x0000133Cu; // 800A6DFC
  c->r[4]=0u+0x00000000u; // 800A6E00
  c->r[5]=0u+0x00000004u; // 800A6E04
  W32(c->r[28]+0x000012E4u,c->r[0]); // 800A6E08
  {uint32_t ea=c->r[28]+0x00001338u; WF32(ea,c->f[0]);} // 800A6E0C
  c->lr=0x800A6E14u; f_800043EC(c); // 800A6E10
  c->r[3]=c->r[28]|c->r[28]; // 800A6E14
  c->r[4]=0u+0x00000001u; // 800A6E18
  c->lr=0x800A6E20u; f_800A73BC(c); // 800A6E1C
  {uint32_t ea=c->r[2]+0xFFFF9938u; c->f[1]=c->ps1[1]=RF32(ea);} // 800A6E20
  c->r[3]=c->r[28]+0x00001340u; // 800A6E24
  c->r[4]=0u+0x00000000u; // 800A6E28
  c->f[2]=c->f[1]; // 800A6E2C
  c->f[3]=c->f[1]; // 800A6E30
  c->lr=0x800A6E38u; f_8032A238(c); // 800A6E34
  c->r[11]=c->r[1]+0x00000020u; // 800A6E38
  c->lr=0x800A6E40u; { c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800A6E3C
  c->r[0]=R32(c->r[1]+0x00000024u); // 800A6E40
  c->lr=c->r[0]; // 800A6E44
  c->r[1]=c->r[1]+0x00000020u; // 800A6E48
  return; // 800A6E4C
}

// fn_800A6E50
void f_800A6E50(Ctx* __restrict c) {
  trace_call(0x800A6E50u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800A6E50
  c->r[0]=c->lr; // 800A6E54
  W32(c->r[1]+0x00000024u,c->r[0]); // 800A6E58
  {uint32_t ea=c->r[1]+0x00000018u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800A6E5C
  c->r[30]=c->r[3]|c->r[3]; // 800A6E60
  c->r[31]=c->r[4]|c->r[4]; // 800A6E64
  c->lr=0x800A6E6Cu; f_800A6E94(c); // 800A6E68
  W32(c->r[1]+0x00000008u,c->r[3]); // 800A6E6C
  c->r[3]=c->r[30]|c->r[30]; // 800A6E70
  c->r[5]=c->r[31]|c->r[31]; // 800A6E74
  c->r[4]=c->r[1]+0x00000008u; // 800A6E78
  c->lr=0x800A6E80u; f_80507EDC(c); // 800A6E7C
  {uint32_t ea=c->r[1]+0x00000018u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800A6E80
  c->r[0]=R32(c->r[1]+0x00000024u); // 800A6E84
  c->lr=c->r[0]; // 800A6E88
  c->r[1]=c->r[1]+0x00000020u; // 800A6E8C
  return; // 800A6E90
}

// fn_800A6E94
void f_800A6E94(Ctx* __restrict c) {
  trace_call(0x800A6E94u);
  c->r[3]=c->r[3]+0x00000004u; // 800A6E94
  return; // 800A6E98
}

// fn_800A6E9C
void f_800A6E9C(Ctx* __restrict c) {
  trace_call(0x800A6E9Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800A6E9C
  c->r[0]=c->lr; // 800A6EA0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800A6EA4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800A6EA8
  c->r[31]=c->r[3]|c->r[3]; // 800A6EAC
  c->r[3]=c->r[3]+0x0000031Cu; // 800A6EB0
  c->lr=0x800A6EB8u; f_80507E98(c); // 800A6EB4
  c->r[3]=c->r[31]+0x00000328u; // 800A6EB8
  c->lr=0x800A6EC0u; f_80507E98(c); // 800A6EBC
  c->r[0]=0u+0x00000010u; // 800A6EC0
  c->r[5]=0u+0x00000000u; // 800A6EC4
  c->r[3]=0u+0x00000000u; // 800A6EC8
  c->ctr=c->r[0]; // 800A6ECC
L_800A6ED0:;
  c->r[4]=c->r[31]+c->r[3]; // 800A6ED0
  c->r[3]=c->r[3]+0x00000004u; // 800A6ED4
  W32(c->r[4]+0x00000084u,c->r[5]); // 800A6ED8
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800A6ED0; } // 800A6EDC
  c->r[3]=c->r[31]+0x00000334u; // 800A6EE0
  c->lr=0x800A6EE8u; f_80331ED8(c); // 800A6EE4
  {uint32_t ea=c->r[2]+0xFFFF993Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800A6EE8
  {uint32_t ea=c->r[31]+0x00001338u; WF32(ea,c->f[0]);} // 800A6EEC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800A6EF0
  c->r[0]=R32(c->r[1]+0x00000014u); // 800A6EF4
  c->lr=c->r[0]; // 800A6EF8
  c->r[1]=c->r[1]+0x00000010u; // 800A6EFC
  return; // 800A6F00
}

// fn_800A6F04
void f_800A6F04(Ctx* __restrict c) {
  trace_call(0x800A6F04u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800A6F04
  c->r[0]=c->lr; // 800A6F08
  W32(c->r[1]+0x00000014u,c->r[0]); // 800A6F0C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800A6F10
  c->r[31]=c->r[3]|c->r[3]; // 800A6F14
  W32(c->r[1]+0x00000008u,c->r[30]); // 800A6F18
  c->lr=0x800A6F20u; f_8033FE4C(c); // 800A6F1C
  c->r[0]=R8(c->r[13]+0xFFFFC09Cu); // 800A6F20
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800A6F24
  if (!crb(c,2)) { goto L_800A6F44; } // 800A6F28
  c->r[4]=R32(c->r[13]+0xFFFFBB58u); // 800A6F2C
  c->r[0]=0u+0x00000001u; // 800A6F30
  W32(c->r[13]+0xFFFFC098u,c->r[4]); // 800A6F34
  c->r[4]=c->r[4]+0x00000001u; // 800A6F38
  W32(c->r[13]+0xFFFFBB58u,c->r[4]); // 800A6F3C
  W8(c->r[13]+0xFFFFC09Cu,c->r[0]); // 800A6F40
L_800A6F44:;
  c->r[30]=R32(c->r[13]+0xFFFFC098u); // 800A6F44
  c->lr=0x800A6F4Cu; f_803412BC(c); // 800A6F48
  c->r[0]=c->r[3]-c->r[30]; // 800A6F4C
  c->r[0]=cntlz(c->r[0]); // 800A6F50
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; cr0(c,c->r[0]); // 800A6F54
  if (!crb(c,2)) { goto L_800A6FD0; } // 800A6F58
  c->lr=0x800A6F60u; f_8033FE4C(c); // 800A6F5C
  c->r[0]=R8(c->r[13]+0xFFFFBB64u); // 800A6F60
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800A6F64
  if (!crb(c,2)) { goto L_800A6F84; } // 800A6F68
  c->r[4]=R32(c->r[13]+0xFFFFBB58u); // 800A6F6C
  c->r[0]=0u+0x00000001u; // 800A6F70
  W32(c->r[13]+0xFFFFBB60u,c->r[4]); // 800A6F74
  c->r[4]=c->r[4]+0x00000001u; // 800A6F78
  W32(c->r[13]+0xFFFFBB58u,c->r[4]); // 800A6F7C
  W8(c->r[13]+0xFFFFBB64u,c->r[0]); // 800A6F80
L_800A6F84:;
  c->r[30]=R32(c->r[13]+0xFFFFBB60u); // 800A6F84
  c->lr=0x800A6F8Cu; f_803412BC(c); // 800A6F88
  c->r[0]=c->r[3]-c->r[30]; // 800A6F8C
  c->r[3]=c->r[31]|c->r[31]; // 800A6F90
  c->r[0]=cntlz(c->r[0]); // 800A6F94
  c->r[4]=rotl(c->r[0],27)&0x07FFFFFFu; // 800A6F98
  c->lr=0x800A6FA0u; f_800A6FF0(c); // 800A6F9C
  c->r[3]=c->r[31]+0x0000004Cu; // 800A6FA0
  c->r[4]=c->r[31]+0x000012B4u; // 800A6FA4
  c->lr=0x800A6FACu; f_8005DC84(c); // 800A6FA8
  c->r[3]=c->r[31]+0x00000058u; // 800A6FAC
  c->r[4]=c->r[31]+0x000012C0u; // 800A6FB0
  c->lr=0x800A6FB8u; f_8005DC84(c); // 800A6FB4
  c->r[3]=c->r[31]+0x00000064u; // 800A6FB8
  c->r[4]=c->r[31]+0x000012CCu; // 800A6FBC
  c->lr=0x800A6FC4u; f_8005DC84(c); // 800A6FC0
  {uint32_t ea=c->r[31]+0x000012D8u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A6FC4
  {uint32_t ea=c->r[31]+0x00000070u; WF32(ea,c->f[0]);} // 800A6FC8
  goto L_800A6FD8; // 800A6FCC
L_800A6FD0:;
  c->r[3]=c->r[31]+0x0000004Cu; // 800A6FD0
  c->lr=0x800A6FD8u; f_8032EDFC(c); // 800A6FD4
L_800A6FD8:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800A6FD8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800A6FDC
  c->r[30]=R32(c->r[1]+0x00000008u); // 800A6FE0
  c->lr=c->r[0]; // 800A6FE4
  c->r[1]=c->r[1]+0x00000010u; // 800A6FE8
  return; // 800A6FEC
}

// fn_800A6FF0
void f_800A6FF0(Ctx* __restrict c) {
  trace_call(0x800A6FF0u);
  {uint32_t ea=c->r[1]+0xFFFFFF50u; W32(ea,c->r[1]); c->r[1]=ea;} // 800A6FF0
  c->r[0]=c->lr; // 800A6FF4
  W32(c->r[1]+0x000000B4u,c->r[0]); // 800A6FF8
  c->r[11]=c->r[1]+0x00000060u; // 800A6FFC
  {uint32_t ea=c->r[1]+0x000000A0u; WF64(ea,c->f[31]);} // 800A7000
  {uint32_t ea=c->r[1]+0x000000A8u; psq_store(c,31,ea,0,0);} // 800A7004
  {uint32_t ea=c->r[1]+0x00000090u; WF64(ea,c->f[30]);} // 800A7008
  {uint32_t ea=c->r[1]+0x00000098u; psq_store(c,30,ea,0,0);} // 800A700C
  {uint32_t ea=c->r[1]+0x00000080u; WF64(ea,c->f[29]);} // 800A7010
  {uint32_t ea=c->r[1]+0x00000088u; psq_store(c,29,ea,0,0);} // 800A7014
  {uint32_t ea=c->r[1]+0x00000070u; WF64(ea,c->f[28]);} // 800A7018
  {uint32_t ea=c->r[1]+0x00000078u; psq_store(c,28,ea,0,0);} // 800A701C
  {uint32_t ea=c->r[1]+0x00000060u; WF64(ea,c->f[27]);} // 800A7020
  {uint32_t ea=c->r[1]+0x00000068u; psq_store(c,27,ea,0,0);} // 800A7024
  c->lr=0x800A702Cu; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800A7028
  c->r[0]=R32(c->r[3]+0x0000133Cu); // 800A702C
  c->r[26]=c->r[3]|c->r[3]; // 800A7030
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 800A7034
  if (crb(c,2)) { goto L_800A7040; } // 800A7038
  c->lr=0x800A7040u; f_800A7664(c); // 800A703C
L_800A7040:;
  c->r[3]=c->r[26]+0x00000334u; // 800A7040
  c->lr=0x800A7048u; f_80331F3C(c); // 800A7044
  c->r[31]=0u+0x00000000u; // 800A7048
  W8(c->r[1]+0x0000000Cu,c->r[31]); // 800A704C
  c->r[3]=c->r[1]+0x0000000Cu; // 800A7050
  c->lr=0x800A7058u; f_8004714C(c); // 800A7054
  {uint32_t ea=c->r[3]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 800A7058
  c->r[3]=c->r[26]+0x00001340u; // 800A705C
  c->lr=0x800A7064u; f_8032A288(c); // 800A7060
  c->r[3]=c->r[26]+0x000012B4u; // 800A7064
  c->lr=0x800A706Cu; f_8032EDFC(c); // 800A7068
  c->r[0]=R32(c->r[26]+0x00000328u); // 800A706C
  cmps(c,0,(int32_t)c->r[0],0); // 800A7070
  if (crb(c,2)) { goto L_800A7204; } // 800A7074
  c->r[3]=c->r[26]+0x00000328u; // 800A7078
  c->r[29]=0u+0x00000000u; // 800A707C
  c->lr=0x800A7084u; f_800A7244(c); // 800A7080
  W32(c->r[1]+0x00000018u,c->r[3]); // 800A7084
  {uint32_t ea=c->r[2]+0xFFFF993Cu; c->f[31]=c->ps1[31]=RF32(ea);} // 800A7088
  {uint32_t ea=c->r[2]+0xFFFF9938u; c->f[30]=c->ps1[30]=RF32(ea);} // 800A708C
  {uint32_t ea=c->r[2]+0xFFFF9964u; c->f[29]=c->ps1[29]=RF32(ea);} // 800A7090
  goto L_800A71A4; // 800A7094
L_800A7098:;
  c->r[3]=c->r[1]+0x00000018u; // 800A7098
  c->r[4]=0u+0x00000000u; // 800A709C
  c->lr=0x800A70A4u; f_800A724C(c); // 800A70A0
  c->r[30]=c->r[3]|c->r[3]; // 800A70A4
  c->r[3]=c->r[26]+0x00000334u; // 800A70A8
  c->r[4]=c->r[30]+0x0000000Cu; // 800A70AC
  c->lr=0x800A70B4u; f_803322C4(c); // 800A70B0
  c->r[28]=c->r[3]|c->r[3]; // 800A70B4
  c->r[27]=c->r[30]+0x00000010u; // 800A70B8
  c->r[3]=c->r[1]+0x00000020u; // 800A70BC
  c->lr=0x800A70C4u; f_8032EDFC(c); // 800A70C0
  {uint32_t ea=c->r[26]+0x00001344u; c->f[28]=c->ps1[28]=RF32(ea);} // 800A70C4
  c->r[3]=c->r[28]|c->r[28]; // 800A70C8
  {uint32_t ea=c->r[30]+0x00000014u; c->f[27]=c->ps1[27]=RF32(ea);} // 800A70CC
  c->lr=0x800A70D4u; f_80331640(c); // 800A70D0
  c->f[1]=c->ps1[1]=S(c->f[27]*c->f[28]); // 800A70D4
  c->r[4]=c->r[3]|c->r[3]; // 800A70D8
  c->r[3]=c->r[1]+0x00000020u; // 800A70DC
  c->lr=0x800A70E4u; f_8033028C(c); // 800A70E0
  c->r[3]=c->r[26]+0x000012B4u; // 800A70E4
  c->r[4]=c->r[1]+0x00000020u; // 800A70E8
  c->lr=0x800A70F0u; f_8032F82C(c); // 800A70EC
  c->r[3]=R32(c->r[30]+0x00000008u); // 800A70F0
  c->r[4]=R32(c->r[26]+0x000012E0u); // 800A70F4
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[4]); // 800A70F8
  if (!crb(c,2)) { goto L_800A7110; } // 800A70FC
  W8(c->r[27]+0x0000000Cu,c->r[31]); // 800A7100
  c->r[29]=c->r[28]|c->r[28]; // 800A7104
  {uint32_t ea=c->r[27]+0x00000008u; WF32(ea,c->f[30]);} // 800A7108
  goto L_800A7150; // 800A710C
L_800A7110:;
  c->r[0]=R32(c->r[26]+0x000012E4u); // 800A7110
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 800A7114
  if (!crb(c,2)) { goto L_800A7148; } // 800A7118
  c->r[3]=c->r[26]|c->r[26]; // 800A711C
  c->lr=0x800A7124u; f_800A75C8(c); // 800A7120
  cmps(c,0,(int32_t)c->r[3],0); // 800A7124
  if (crb(c,2)) { goto L_800A713C; } // 800A7128
  {uint32_t ea=c->r[3]+0x00000014u; c->f[1]=c->ps1[1]=RF32(ea);} // 800A712C
  {uint32_t ea=c->r[13]+0xFFFF82E8u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A7130
  fcmp(c,0,c->f[1],c->f[0]); // 800A7134
  if (!crb(c,1)) { goto L_800A7150; } // 800A7138
L_800A713C:;
  W8(c->r[27]+0x0000000Cu,c->r[31]); // 800A713C
  {uint32_t ea=c->r[27]+0x00000008u; WF32(ea,c->f[31]);} // 800A7140
  goto L_800A7150; // 800A7144
L_800A7148:;
  W8(c->r[27]+0x0000000Cu,c->r[31]); // 800A7148
  {uint32_t ea=c->r[27]+0x00000008u; WF32(ea,c->f[31]);} // 800A714C
L_800A7150:;
  W8(c->r[1]+0x00000008u,c->r[31]); // 800A7150
  c->r[3]=c->r[1]+0x00000008u; // 800A7154
  c->lr=0x800A715Cu; f_8004714C(c); // 800A7158
  {uint32_t ea=c->r[3]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 800A715C
  c->r[3]=c->r[27]|c->r[27]; // 800A7160
  c->lr=0x800A7168u; f_8032A288(c); // 800A7164
  c->r[3]=R32(c->r[26]+0x000012E0u); // 800A7168
  c->r[0]=R32(c->r[30]+0x00000008u); // 800A716C
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 800A7170
  if (crb(c,2)) { goto L_800A71A4; } // 800A7174
  {uint32_t ea=c->r[27]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A7178
  fcmp(c,0,c->f[0],c->f[30]); // 800A717C
  if (!crb(c,0)) { goto L_800A71A4; } // 800A7180
  {uint32_t ea=c->r[27]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 800A7184
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 800A7188
  c->f[0]=std::fabs(c->f[0]); // 800A718C
  fcmp(c,0,c->f[0],c->f[29]); // 800A7190
  if (!crb(c,0)) { goto L_800A71A4; } // 800A7194
  c->r[3]=c->r[26]|c->r[26]; // 800A7198
  c->r[4]=c->r[30]|c->r[30]; // 800A719C
  c->lr=0x800A71A4u; f_800A74E0(c); // 800A71A0
L_800A71A4:;
  c->r[3]=c->r[26]+0x00000328u; // 800A71A4
  c->lr=0x800A71ACu; f_800A6E94(c); // 800A71A8
  c->r[0]=R32(c->r[1]+0x00000018u); // 800A71AC
  c->r[4]=c->r[1]+0x00000010u; // 800A71B0
  W32(c->r[1]+0x00000010u,c->r[3]); // 800A71B4
  c->r[3]=c->r[1]+0x00000014u; // 800A71B8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800A71BC
  c->lr=0x800A71C4u; f_800A7260(c); // 800A71C0
  cmps(c,0,(int32_t)c->r[3],0); // 800A71C4
  if (!crb(c,2)) { IRQCHK(c); goto L_800A7098; } // 800A71C8
  cmps(c,0,(int32_t)c->r[29],0); // 800A71CC
  if (crb(c,2)) { goto L_800A7204; } // 800A71D0
  c->r[3]=R32(c->r[26]+0x000012E0u); // 800A71D4
  c->r[0]=c->r[3]+0xFFFFFFFDu; // 800A71D8
  cmpu(c,0,c->r[0],0x00000002u); // 800A71DC
  if (crb(c,1)) { goto L_800A7204; } // 800A71E0
  c->r[3]=c->r[29]|c->r[29]; // 800A71E4
  c->lr=0x800A71ECu; f_80331648(c); // 800A71E8
  c->f[27]=c->f[1]; // 800A71EC
  {uint32_t ea=c->r[26]+0x00001338u; c->f[1]=c->ps1[1]=RF32(ea);} // 800A71F0
  c->r[3]=c->r[26]+0x00000078u; // 800A71F4
  c->f[2]=c->f[27]; // 800A71F8
  c->lr=0x800A7200u; f_8035FE14(c); // 800A71FC
  {uint32_t ea=c->r[26]+0x00001338u; WF32(ea,c->f[27]);} // 800A7200
L_800A7204:;
  c->r[11]=c->r[1]+0x00000060u; // 800A7204
  {uint32_t ea=c->r[1]+0x000000A8u; psq_load(c,31,ea,0,0);} // 800A7208
  {uint32_t ea=c->r[1]+0x000000A0u; c->f[31]=RF64(ea);} // 800A720C
  {uint32_t ea=c->r[1]+0x00000098u; psq_load(c,30,ea,0,0);} // 800A7210
  {uint32_t ea=c->r[1]+0x00000090u; c->f[30]=RF64(ea);} // 800A7214
  {uint32_t ea=c->r[1]+0x00000088u; psq_load(c,29,ea,0,0);} // 800A7218
  {uint32_t ea=c->r[1]+0x00000080u; c->f[29]=RF64(ea);} // 800A721C
  {uint32_t ea=c->r[1]+0x00000078u; psq_load(c,28,ea,0,0);} // 800A7220
  {uint32_t ea=c->r[1]+0x00000070u; c->f[28]=RF64(ea);} // 800A7224
  {uint32_t ea=c->r[1]+0x00000068u; psq_load(c,27,ea,0,0);} // 800A7228
  {uint32_t ea=c->r[1]+0x00000060u; c->f[27]=RF64(ea);} // 800A722C
  c->lr=0x800A7234u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800A7230
  c->r[0]=R32(c->r[1]+0x000000B4u); // 800A7234
  c->lr=c->r[0]; // 800A7238
  c->r[1]=c->r[1]+0x000000B0u; // 800A723C
  return; // 800A7240
}

// fn_800A7244
void f_800A7244(Ctx* __restrict c) {
  trace_call(0x800A7244u);
  c->r[3]=R32(c->r[3]+0x00000004u); // 800A7244
  return; // 800A7248
}

// fn_800A724C
void f_800A724C(Ctx* __restrict c) {
  trace_call(0x800A724Cu);
  c->r[4]=R32(c->r[3]+0x00000000u); // 800A724C
  c->r[0]=R32(c->r[4]+0x00000000u); // 800A7250
  W32(c->r[3]+0x00000000u,c->r[0]); // 800A7254
  c->r[3]=c->r[4]|c->r[4]; // 800A7258
  return; // 800A725C
}

// fn_800A7260
void f_800A7260(Ctx* __restrict c) {
  trace_call(0x800A7260u);
  c->r[4]=R32(c->r[4]+0x00000000u); // 800A7260
  c->r[0]=R32(c->r[3]+0x00000000u); // 800A7264
  c->r[3]=c->r[4]-c->r[0]; // 800A7268
  c->r[0]=addc(c,c->r[3],0xFFFFFFFFu,0); // 800A726C
  c->r[3]=addc(c,~c->r[0],c->r[3],c->xer_ca); // 800A7270
  return; // 800A7274
}

// fn_800A7278
void f_800A7278(Ctx* __restrict c) {
  trace_call(0x800A7278u);
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFFCu; // 800A7278
  c->r[3]=c->r[3]+c->r[0]; // 800A727C
  W32(c->r[3]+0x00000084u,c->r[5]); // 800A7280
  return; // 800A7284
}

// fn_800A7288
void f_800A7288(Ctx* __restrict c) {
  trace_call(0x800A7288u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800A7288
  c->r[0]=c->lr; // 800A728C
  W32(c->r[1]+0x00000024u,c->r[0]); // 800A7290
  c->r[11]=c->r[1]+0x00000020u; // 800A7294
  c->lr=0x800A729Cu; { W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800A7298
  c->r[30]=0u+0x806D0000u; // 800A729C
  W32(c->r[3]+0x000012DCu,c->r[4]); // 800A72A0
  c->r[28]=c->r[3]|c->r[3]; // 800A72A4
  c->r[29]=c->r[4]|c->r[4]; // 800A72A8
  c->r[30]=c->r[30]+0x00005DF0u; // 800A72AC
  c->lr=0x800A72B4u; f_800A7410(c); // 800A72B0
  cmps(c,0,(int32_t)c->r[3],0); // 800A72B4
  c->r[31]=c->r[3]|c->r[3]; // 800A72B8
  if (crb(c,2)) { goto L_800A7300; } // 800A72BC
  c->r[0]=R32(c->r[28]+0x000012E0u); // 800A72C0
  c->r[3]=c->r[28]+0x00000334u; // 800A72C4
  W32(c->r[28]+0x000012E4u,c->r[0]); // 800A72C8
  c->r[4]=c->r[31]+0x0000000Cu; // 800A72CC
  c->lr=0x800A72D4u; f_803322C4(c); // 800A72D0
  c->r[0]=rotl(c->r[29],2)&0xFFFFFFFCu; // 800A72D4
  {uint32_t ea=c->r[2]+0xFFFF993Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800A72D8
  c->r[4]=c->r[28]+c->r[0]; // 800A72DC
  c->r[5]=0u+0x00000000u; // 800A72E0
  c->r[4]=R32(c->r[4]+0x00000084u); // 800A72E4
  c->r[6]=0u+0x00000001u; // 800A72E8
  c->lr=0x800A72F0u; f_8033169C(c); // 800A72EC
  c->r[0]=0u+0x00000000u; // 800A72F0
  W8(c->r[31]+0x0000001Cu,c->r[0]); // 800A72F4
  {uint32_t ea=c->r[2]+0xFFFF9938u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A72F8
  {uint32_t ea=c->r[31]+0x00000018u; WF32(ea,c->f[0]);} // 800A72FC
L_800A7300:;
  cmps(c,0,(int32_t)c->r[29],3); // 800A7300
  c->r[3]=0u+0x00000000u; // 800A7304
  if (crb(c,2)) { goto L_800A7320; } // 800A7308
  cmps(c,0,(int32_t)c->r[29],4); // 800A730C
  if (crb(c,2)) { goto L_800A7338; } // 800A7310
  cmps(c,0,(int32_t)c->r[29],5); // 800A7314
  if (crb(c,2)) { goto L_800A7350; } // 800A7318
  goto L_800A7368; // 800A731C
L_800A7320:;
  c->r[3]=c->r[28]+0x00000078u; // 800A7320
  c->r[4]=c->r[30]+0x00000000u; // 800A7324
  c->r[5]=0u+0x00000000u; // 800A7328
  c->lr=0x800A7330u; f_8035FDFC(c); // 800A732C
  c->r[3]=0u+0x00000001u; // 800A7330
  goto L_800A7370; // 800A7334
L_800A7338:;
  c->r[3]=c->r[28]+0x00000078u; // 800A7338
  c->r[4]=c->r[30]+0x00000048u; // 800A733C
  c->r[5]=0u+0x00000000u; // 800A7340
  c->lr=0x800A7348u; f_8035FDFC(c); // 800A7344
  c->r[3]=0u+0x00000001u; // 800A7348
  goto L_800A7370; // 800A734C
L_800A7350:;
  c->r[3]=c->r[28]+0x00000078u; // 800A7350
  c->r[4]=c->r[30]+0x000000CCu; // 800A7354
  c->r[5]=0u+0x00000000u; // 800A7358
  c->lr=0x800A7360u; f_8035FDFC(c); // 800A735C
  c->r[3]=0u+0x00000001u; // 800A7360
  goto L_800A7370; // 800A7364
L_800A7368:;
  c->r[0]=0u+0x00000000u; // 800A7368
  W32(c->r[28]+0x00000078u,c->r[0]); // 800A736C
L_800A7370:;
  cmps(c,0,(int32_t)c->r[3],0); // 800A7370
  if (crb(c,2)) { goto L_800A739C; } // 800A7374
  c->r[3]=c->r[28]|c->r[28]; // 800A7378
  c->r[4]=c->r[29]|c->r[29]; // 800A737C
  c->lr=0x800A7384u; f_800A75C8(c); // 800A7380
  c->r[4]=c->r[3]|c->r[3]; // 800A7384
  c->r[3]=c->r[28]+0x00000334u; // 800A7388
  c->r[4]=c->r[4]+0x0000000Cu; // 800A738C
  c->lr=0x800A7394u; f_803322C4(c); // 800A7390
  c->lr=0x800A7398u; f_80331648(c); // 800A7394
  {uint32_t ea=c->r[28]+0x00001338u; WF32(ea,c->f[1]);} // 800A7398
L_800A739C:;
  c->r[0]=R32(c->r[28]+0x000012DCu); // 800A739C
  c->r[11]=c->r[1]+0x00000020u; // 800A73A0
  W32(c->r[28]+0x000012E0u,c->r[0]); // 800A73A4
  c->lr=0x800A73ACu; { c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800A73A8
  c->r[0]=R32(c->r[1]+0x00000024u); // 800A73AC
  c->lr=c->r[0]; // 800A73B0
  c->r[1]=c->r[1]+0x00000020u; // 800A73B4
  return; // 800A73B8
}

// fn_800A73BC
void f_800A73BC(Ctx* __restrict c) {
  trace_call(0x800A73BCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800A73BC
  c->r[0]=c->lr; // 800A73C0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800A73C4
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800A73C8
  c->r[30]=c->r[3]|c->r[3]; // 800A73CC
  c->r[31]=c->r[4]|c->r[4]; // 800A73D0
  c->r[0]=R32(c->r[3]+0x0000133Cu); // 800A73D4
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 800A73D8
  if (crb(c,2)) { goto L_800A73F0; } // 800A73DC
  cmps(c,0,(int32_t)c->r[4],0); // 800A73E0
  if (!crb(c,2)) { goto L_800A73F0; } // 800A73E4
  c->r[4]=0u+0x00000000u; // 800A73E8
  c->lr=0x800A73F0u; f_800A7288(c); // 800A73EC
L_800A73F0:;
  c->r[0]=R32(c->r[30]+0x0000133Cu); // 800A73F0
  c->r[0]=(rotl(c->r[31],31)&0x80000000u)|(c->r[0]&~0x80000000u); // 800A73F4
  W32(c->r[30]+0x0000133Cu,c->r[0]); // 800A73F8
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800A73FC
  c->r[0]=R32(c->r[1]+0x00000014u); // 800A7400
  c->lr=c->r[0]; // 800A7404
  c->r[1]=c->r[1]+0x00000010u; // 800A7408
  return; // 800A740C
}

// fn_800A7410
void f_800A7410(Ctx* __restrict c) {
  trace_call(0x800A7410u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800A7410
  c->r[0]=c->lr; // 800A7414
  W32(c->r[1]+0x00000024u,c->r[0]); // 800A7418
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800A741C
  c->r[29]=c->r[3]|c->r[3]; // 800A7420
  c->r[30]=c->r[4]|c->r[4]; // 800A7424
  c->lr=0x800A742Cu; f_800A75C8(c); // 800A7428
  cmps(c,0,(int32_t)c->r[3],0); // 800A742C
  if (crb(c,2)) { goto L_800A743C; } // 800A7430
  c->r[3]=0u+0x00000000u; // 800A7434
  goto L_800A74CC; // 800A7438
L_800A743C:;
  cmps(c,0,(int32_t)c->r[30],0); // 800A743C
  if (!crb(c,2)) { goto L_800A744C; } // 800A7440
  c->r[3]=0u+0x00000000u; // 800A7444
  goto L_800A74CC; // 800A7448
L_800A744C:;
  c->r[3]=c->r[1]+0x0000000Cu; // 800A744C
  c->r[4]=0u+0x00000000u; // 800A7450
  c->r[5]=0u+0x00000004u; // 800A7454
  c->lr=0x800A745Cu; f_800043EC(c); // 800A7458
  c->r[3]=c->r[1]+0x0000000Cu; // 800A745C
  c->r[4]=0u+0x00000000u; // 800A7460
  c->r[5]=0u+0x00000004u; // 800A7464
  c->lr=0x800A746Cu; f_800043EC(c); // 800A7468
  c->r[0]=R32(c->r[29]+0x0000031Cu); // 800A746C
  cmps(c,0,(int32_t)c->r[0],0); // 800A7470
  if (!crb(c,2)) { goto L_800A7480; } // 800A7474
  c->r[3]=0u+0x00000000u; // 800A7478
  goto L_800A74CC; // 800A747C
L_800A7480:;
  c->r[3]=c->r[29]+0x0000031Cu; // 800A7480
  c->lr=0x800A7488u; f_800A7244(c); // 800A7484
  c->r[0]=R32(c->r[29]+0x00000320u); // 800A7488
  c->r[31]=c->r[3]|c->r[3]; // 800A748C
  W32(c->r[1]+0x00000008u,c->r[0]); // 800A7490
  c->r[3]=c->r[29]+0x0000031Cu; // 800A7494
  c->r[4]=c->r[1]+0x00000008u; // 800A7498
  c->lr=0x800A74A0u; f_80507E50(c); // 800A749C
  c->r[4]=c->r[31]|c->r[31]; // 800A74A0
  c->r[3]=c->r[29]+0x00000328u; // 800A74A4
  c->lr=0x800A74ACu; f_800A6E50(c); // 800A74A8
  c->r[5]=c->r[31]|c->r[31]; // 800A74AC
  c->r[3]=c->r[29]+0x00000334u; // 800A74B0
  c->r[4]=0u+0x00000007u; // 800A74B4
  c->r[6]=0u+0x00000000u; // 800A74B8
  c->lr=0x800A74C0u; f_8033202C(c); // 800A74BC
  W32(c->r[31]+0x00000008u,c->r[30]); // 800A74C0
  W32(c->r[31]+0x0000000Cu,c->r[3]); // 800A74C4
  c->r[3]=c->r[31]|c->r[31]; // 800A74C8
L_800A74CC:;
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800A74CC
  c->r[0]=R32(c->r[1]+0x00000024u); // 800A74D0
  c->lr=c->r[0]; // 800A74D4
  c->r[1]=c->r[1]+0x00000020u; // 800A74D8
  return; // 800A74DC
}

// fn_800A74E0
void f_800A74E0(Ctx* __restrict c) {
  trace_call(0x800A74E0u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800A74E0
  c->r[0]=c->lr; // 800A74E4
  cmps(c,0,(int32_t)c->r[4],0); // 800A74E8
  W32(c->r[1]+0x00000034u,c->r[0]); // 800A74EC
  {uint32_t ea=c->r[1]+0x00000024u; for(int i=29;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800A74F0
  c->r[29]=c->r[3]|c->r[3]; // 800A74F4
  c->r[30]=c->r[4]|c->r[4]; // 800A74F8
  if (!crb(c,2)) { goto L_800A7508; } // 800A74FC
  c->r[3]=0u+0x00000000u; // 800A7500
  goto L_800A75B4; // 800A7504
L_800A7508:;
  c->r[0]=R32(c->r[3]+0x00000328u); // 800A7508
  cmps(c,0,(int32_t)c->r[0],0); // 800A750C
  if (!crb(c,2)) { goto L_800A751C; } // 800A7510
  c->r[3]=0u+0x00000000u; // 800A7514
  goto L_800A75B4; // 800A7518
L_800A751C:;
  c->r[3]=c->r[3]+0x00000328u; // 800A751C
  c->lr=0x800A7524u; f_800A7244(c); // 800A7520
  W32(c->r[1]+0x00000014u,c->r[3]); // 800A7524
  goto L_800A7588; // 800A7528
L_800A752C:;
  c->r[31]=R32(c->r[1]+0x00000014u); // 800A752C
  cmpu(c,0,c->r[30],c->r[31]); // 800A7530
  if (!crb(c,2)) { goto L_800A757C; } // 800A7534
  c->r[3]=c->r[29]+0x00000334u; // 800A7538
  c->r[4]=c->r[31]+0x0000000Cu; // 800A753C
  c->lr=0x800A7544u; f_803322C4(c); // 800A7540
  c->lr=0x800A7548u; f_803315D0(c); // 800A7544
  c->r[3]=c->r[29]+0x00000334u; // 800A7548
  c->r[4]=c->r[31]+0x0000000Cu; // 800A754C
  c->lr=0x800A7554u; f_803320C0(c); // 800A7550
  c->r[0]=R32(c->r[1]+0x00000014u); // 800A7554
  c->r[3]=c->r[29]+0x00000328u; // 800A7558
  W32(c->r[1]+0x00000008u,c->r[0]); // 800A755C
  c->r[4]=c->r[1]+0x00000008u; // 800A7560
  c->lr=0x800A7568u; f_80507E50(c); // 800A7564
  c->r[4]=c->r[31]|c->r[31]; // 800A7568
  c->r[3]=c->r[29]+0x0000031Cu; // 800A756C
  c->lr=0x800A7574u; f_800A6E50(c); // 800A7570
  c->r[3]=0u+0x00000001u; // 800A7574
  goto L_800A75B4; // 800A7578
L_800A757C:;
  c->r[3]=c->r[1]+0x00000014u; // 800A757C
  c->r[4]=0u+0x00000000u; // 800A7580
  c->lr=0x800A7588u; f_800A724C(c); // 800A7584
L_800A7588:;
  c->r[3]=c->r[29]+0x00000328u; // 800A7588
  c->lr=0x800A7590u; f_800A6E94(c); // 800A758C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800A7590
  c->r[4]=c->r[1]+0x0000000Cu; // 800A7594
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 800A7598
  c->r[3]=c->r[1]+0x00000010u; // 800A759C
  W32(c->r[1]+0x00000010u,c->r[0]); // 800A75A0
  c->lr=0x800A75A8u; f_800A7260(c); // 800A75A4
  cmps(c,0,(int32_t)c->r[3],0); // 800A75A8
  if (!crb(c,2)) { IRQCHK(c); goto L_800A752C; } // 800A75AC
  c->r[3]=0u+0x00000000u; // 800A75B0
L_800A75B4:;
  {uint32_t ea=c->r[1]+0x00000024u; for(int i=29;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800A75B4
  c->r[0]=R32(c->r[1]+0x00000034u); // 800A75B8
  c->lr=c->r[0]; // 800A75BC
  c->r[1]=c->r[1]+0x00000030u; // 800A75C0
  return; // 800A75C4
}

// fn_800A75C8
void f_800A75C8(Ctx* __restrict c) {
  trace_call(0x800A75C8u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800A75C8
  c->r[0]=c->lr; // 800A75CC
  W32(c->r[1]+0x00000024u,c->r[0]); // 800A75D0
  {uint32_t ea=c->r[1]+0x00000018u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800A75D4
  c->r[30]=c->r[3]|c->r[3]; // 800A75D8
  c->r[31]=c->r[4]|c->r[4]; // 800A75DC
  c->r[0]=R32(c->r[3]+0x00000328u); // 800A75E0
  cmps(c,0,(int32_t)c->r[0],0); // 800A75E4
  if (!crb(c,2)) { goto L_800A75F4; } // 800A75E8
  c->r[3]=0u+0x00000000u; // 800A75EC
  goto L_800A7650; // 800A75F0
L_800A75F4:;
  c->r[3]=c->r[3]+0x00000328u; // 800A75F4
  c->lr=0x800A75FCu; f_800A7244(c); // 800A75F8
  W32(c->r[1]+0x00000010u,c->r[3]); // 800A75FC
  goto L_800A7624; // 800A7600
L_800A7604:;
  c->r[3]=R32(c->r[1]+0x00000010u); // 800A7604
  c->r[0]=R32(c->r[3]+0x00000008u); // 800A7608
  cmps(c,0,(int32_t)c->r[31],(int32_t)c->r[0]); // 800A760C
  if (!crb(c,2)) { goto L_800A7618; } // 800A7610
  goto L_800A7650; // 800A7614
L_800A7618:;
  c->r[3]=c->r[1]+0x00000010u; // 800A7618
  c->r[4]=0u+0x00000000u; // 800A761C
  c->lr=0x800A7624u; f_800A724C(c); // 800A7620
L_800A7624:;
  c->r[3]=c->r[30]+0x00000328u; // 800A7624
  c->lr=0x800A762Cu; f_800A6E94(c); // 800A7628
  c->r[0]=R32(c->r[1]+0x00000010u); // 800A762C
  c->r[4]=c->r[1]+0x00000008u; // 800A7630
  W32(c->r[1]+0x00000008u,c->r[3]); // 800A7634
  c->r[3]=c->r[1]+0x0000000Cu; // 800A7638
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 800A763C
  c->lr=0x800A7644u; f_800A7260(c); // 800A7640
  cmps(c,0,(int32_t)c->r[3],0); // 800A7644
  if (!crb(c,2)) { IRQCHK(c); goto L_800A7604; } // 800A7648
  c->r[3]=0u+0x00000000u; // 800A764C
L_800A7650:;
  {uint32_t ea=c->r[1]+0x00000018u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800A7650
  c->r[0]=R32(c->r[1]+0x00000024u); // 800A7654
  c->lr=c->r[0]; // 800A7658
  c->r[1]=c->r[1]+0x00000020u; // 800A765C
  return; // 800A7660
}

// fn_800A7664
void f_800A7664(Ctx* __restrict c) {
  trace_call(0x800A7664u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800A7664
  c->r[0]=c->lr; // 800A7668
  W32(c->r[1]+0x00000024u,c->r[0]); // 800A766C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800A7670
  c->r[31]=c->r[4]|c->r[4]; // 800A7674
  W32(c->r[1]+0x00000018u,c->r[30]); // 800A7678
  c->r[30]=c->r[3]|c->r[3]; // 800A767C
  c->lr=0x800A7684u; f_8033FE4C(c); // 800A7680
  c->r[3]=c->r[3]+0x000002F4u; // 800A7684
  c->lr=0x800A768Cu; f_80383D7C(c); // 800A7688
  cmps(c,0,(int32_t)c->r[31],0); // 800A768C
  c->r[3]=c->r[30]+0x000012E8u; // 800A7690
  if (crb(c,2)) { goto L_800A76A8; } // 800A7694
  c->r[4]=c->r[1]+0x0000000Cu; // 800A7698
  c->r[5]=c->r[1]+0x00000008u; // 800A769C
  c->lr=0x800A76A4u; f_800A693C(c); // 800A76A0
  goto L_800A76B0; // 800A76A4
L_800A76A8:;
  c->r[0]=0u+0x00000004u; // 800A76A8
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 800A76AC
L_800A76B0:;
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 800A76B0
  cmps(c,0,(int32_t)c->r[0],0); // 800A76B4
  if (crb(c,2)) { goto L_800A76D8; } // 800A76B8
  cmps(c,0,(int32_t)c->r[0],1); // 800A76BC
  if (crb(c,2)) { goto L_800A76E0; } // 800A76C0
  cmps(c,0,(int32_t)c->r[0],2); // 800A76C4
  if (crb(c,2)) { goto L_800A76E8; } // 800A76C8
  cmps(c,0,(int32_t)c->r[0],3); // 800A76CC
  if (crb(c,2)) { goto L_800A76F0; } // 800A76D0
  goto L_800A76F8; // 800A76D4
L_800A76D8:;
  c->r[31]=0u+0x00000002u; // 800A76D8
  goto L_800A76FC; // 800A76DC
L_800A76E0:;
  c->r[31]=0u+0x00000003u; // 800A76E0
  goto L_800A76FC; // 800A76E4
L_800A76E8:;
  c->r[31]=0u+0x00000004u; // 800A76E8
  goto L_800A76FC; // 800A76EC
L_800A76F0:;
  c->r[31]=0u+0x00000005u; // 800A76F0
  goto L_800A76FC; // 800A76F4
L_800A76F8:;
  c->r[31]=0u+0x00000000u; // 800A76F8
L_800A76FC:;
  c->r[3]=c->r[30]|c->r[30]; // 800A76FC
  c->r[4]=c->r[31]|c->r[31]; // 800A7700
  c->lr=0x800A7708u; f_800A7288(c); // 800A7704
  c->r[3]=c->r[30]|c->r[30]; // 800A7708
  c->r[4]=c->r[31]|c->r[31]; // 800A770C
  c->lr=0x800A7714u; f_800A75C8(c); // 800A7710
  cmps(c,0,(int32_t)c->r[3],0); // 800A7714
  c->r[4]=c->r[3]|c->r[3]; // 800A7718
  if (crb(c,2)) { goto L_800A7734; } // 800A771C
  c->r[3]=c->r[30]+0x00000334u; // 800A7720
  c->r[4]=c->r[4]+0x0000000Cu; // 800A7724
  c->lr=0x800A772Cu; f_803322C4(c); // 800A7728
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 800A772C
  c->lr=0x800A7734u; f_803317D4(c); // 800A7730
L_800A7734:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 800A7734
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800A7738
  c->r[30]=R32(c->r[1]+0x00000018u); // 800A773C
  c->lr=c->r[0]; // 800A7740
  c->r[1]=c->r[1]+0x00000020u; // 800A7744
  return; // 800A7748
}

// fn_800A774C
void f_800A774C(Ctx* __restrict c) {
  trace_call(0x800A774Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800A774C
  c->r[0]=c->lr; // 800A7750
  W32(c->r[1]+0x00000014u,c->r[0]); // 800A7754
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800A7758
  W32(c->r[1]+0x00000008u,c->r[30]); // 800A775C
  c->r[30]=c->r[4]|c->r[4]; // 800A7760
  c->lr=0x800A7768u; f_801005C0(c); // 800A7764
  c->r[31]=c->r[3]|c->r[3]; // 800A7768
  c->r[3]=c->r[30]|c->r[30]; // 800A776C
  c->lr=0x800A7774u; f_801006E4(c); // 800A7770
  c->r[0]=R8(c->r[13]+0xFFFFBBF8u); // 800A7774
  c->r[5]=c->r[3]|c->r[3]; // 800A7778
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800A777C
  if (!crb(c,2)) { goto L_800A779C; } // 800A7780
  c->r[3]=0u+0x806D0000u; // 800A7784
  c->r[4]=0u+0x80740000u; // 800A7788
  c->r[3]=c->r[3]+0xFFFFCD3Cu; // 800A778C
  c->r[0]=0u+0x00000001u; // 800A7790
  W32(c->r[4]+0x00002350u,c->r[3]); // 800A7794
  W8(c->r[13]+0xFFFFBBF8u,c->r[0]); // 800A7798
L_800A779C:;
  c->r[3]=0u+0x80740000u; // 800A779C
  {uint32_t ea=c->r[2]+0xFFFF9938u; c->f[1]=c->ps1[1]=RF32(ea);} // 800A77A0
  c->r[4]=c->r[31]|c->r[31]; // 800A77A4
  c->r[6]=0u+0x00000000u; // 800A77A8
  c->r[3]=c->r[3]+0x00002350u; // 800A77AC
  c->lr=0x800A77B4u; f_800ADAE4(c); // 800A77B0
  c->r[0]=R32(c->r[1]+0x00000014u); // 800A77B4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800A77B8
  c->r[30]=R32(c->r[1]+0x00000008u); // 800A77BC
  c->lr=c->r[0]; // 800A77C0
  c->r[1]=c->r[1]+0x00000010u; // 800A77C4
  return; // 800A77C8
}

// fn_800A77CC
void f_800A77CC(Ctx* __restrict c) {
  trace_call(0x800A77CCu);
  {uint32_t ea=c->r[2]+0xFFFF993Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800A77CC
  fcmp(c,0,c->f[2],c->f[0]); // 800A77D0
  setcrb(c,2,crb(c,0)|crb(c,2)); // 800A77D4
  if (!crb(c,2)) { goto L_800A77F0; } // 800A77D8
  c->r[0]=0u+0x00000000u; // 800A77DC
  {uint32_t ea=c->r[3]+0x00001344u; WF32(ea,c->f[1]);} // 800A77E0
  W8(c->r[3]+0x0000134Cu,c->r[0]); // 800A77E4
  {uint32_t ea=c->r[3]+0x00001348u; WF32(ea,c->f[1]);} // 800A77E8
  return; // 800A77EC
L_800A77F0:;
  {uint32_t ea=c->r[2]+0xFFFF9938u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A77F0
  c->r[0]=0u+0x00000000u; // 800A77F4
  {uint32_t ea=c->r[3]+0x00001348u; WF32(ea,c->f[1]);} // 800A77F8
  c->f[1]=c->ps1[1]=S(c->f[0]/c->f[2]); // 800A77FC
  W8(c->r[3]+0x0000134Cu,c->r[0]); // 800A7800
  c->r[3]=c->r[3]+0x00001340u; // 800A7804
  f_8032A3C8(c); return; // 800A7808
  return; // 800A780C
}

// fn_800A7810
void f_800A7810(Ctx* __restrict c) {
  trace_call(0x800A7810u);
  c->r[3]=c->r[3]+0xFFFFFF88u; // 800A7810
  f_800A774C(c); return; // 800A7814
}

// fn_800A7818
void f_800A7818(Ctx* __restrict c) {
  trace_call(0x800A7818u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800A7818
  c->r[0]=c->lr; // 800A781C
  W32(c->r[1]+0x00000024u,c->r[0]); // 800A7820
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800A7824
  c->r[31]=c->r[3]|c->r[3]; // 800A7828
  W32(c->r[1]+0x00000018u,c->r[30]); // 800A782C
  c->r[30]=0u+0x80690000u; // 800A7830
  c->r[30]=c->r[30]+0xFFFFDEA8u; // 800A7834
  W32(c->r[1]+0x00000014u,c->r[29]); // 800A7838
  c->lr=0x800A7840u; f_80373290(c); // 800A783C
  c->r[4]=addc(c,c->r[31],0x0000001Cu,0); cr0(c,c->r[4]); // 800A7840
  W32(c->r[4]+0x00000000u,c->r[4]); // 800A7844
  c->r[0]=c->r[4]|c->r[4]; // 800A7848
  W32(c->r[4]+0x00000004u,c->r[4]); // 800A784C
  W32(c->r[4]+0x00000008u,c->r[4]); // 800A7850
  if (crb(c,2)) { goto L_800A785C; } // 800A7854
  c->r[0]=c->r[4]+0xFFFFFFE4u; // 800A7858
L_800A785C:;
  c->r[3]=addc(c,c->r[31],0x00000028u,0); cr0(c,c->r[3]); // 800A785C
  W32(c->r[4]+0x00000008u,c->r[0]); // 800A7860
  W32(c->r[3]+0x00000000u,c->r[3]); // 800A7864
  c->r[0]=c->r[3]|c->r[3]; // 800A7868
  W32(c->r[3]+0x00000004u,c->r[3]); // 800A786C
  W32(c->r[3]+0x00000008u,c->r[3]); // 800A7870
  if (crb(c,2)) { goto L_800A787C; } // 800A7874
  c->r[0]=c->r[3]+0xFFFFFFD8u; // 800A7878
L_800A787C:;
  c->r[4]=addc(c,c->r[31],0x00000034u,0); cr0(c,c->r[4]); // 800A787C
  W32(c->r[3]+0x00000008u,c->r[0]); // 800A7880
  W32(c->r[4]+0x00000000u,c->r[4]); // 800A7884
  c->r[0]=c->r[4]|c->r[4]; // 800A7888
  W32(c->r[4]+0x00000004u,c->r[4]); // 800A788C
  W32(c->r[4]+0x00000008u,c->r[4]); // 800A7890
  if (crb(c,2)) { goto L_800A789C; } // 800A7894
  c->r[0]=c->r[4]+0xFFFFFFCCu; // 800A7898
L_800A789C:;
  c->r[3]=0u+0x806F0000u; // 800A789C
  W32(c->r[4]+0x00000008u,c->r[0]); // 800A78A0
  c->r[3]=c->r[3]+0x00001C90u; // 800A78A4
  W32(c->r[31]+0x00000000u,c->r[3]); // 800A78A8
  c->r[0]=R8(c->r[13]+0xFFFFBB64u); // 800A78AC
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800A78B0
  if (!crb(c,2)) { goto L_800A78D0; } // 800A78B4
  c->r[3]=R32(c->r[13]+0xFFFFBB58u); // 800A78B8
  c->r[0]=0u+0x00000001u; // 800A78BC
  W32(c->r[13]+0xFFFFBB60u,c->r[3]); // 800A78C0
  c->r[3]=c->r[3]+0x00000001u; // 800A78C4
  W32(c->r[13]+0xFFFFBB58u,c->r[3]); // 800A78C8
  W8(c->r[13]+0xFFFFBB64u,c->r[0]); // 800A78CC
L_800A78D0:;
  c->r[0]=R32(c->r[13]+0xFFFFBB60u); // 800A78D0
  c->r[3]=c->r[31]+0x0000004Cu; // 800A78D4
  W32(c->r[31]+0x00000044u,c->r[0]); // 800A78D8
  c->r[0]=R32(c->r[13]+0xFFFF82F0u); // 800A78DC
  W32(c->r[31]+0x00000048u,c->r[0]); // 800A78E0
  c->lr=0x800A78E8u; f_8032EDFC(c); // 800A78E4
  c->r[4]=0u+0x806D0000u; // 800A78E8
  c->r[29]=c->r[31]+0x00000078u; // 800A78EC
  c->r[4]=c->r[4]+0x00005FE8u; // 800A78F0
  c->r[0]=0u+0x00000001u; // 800A78F4
  W8(c->r[31]+0x00000074u,c->r[0]); // 800A78F8
  c->r[3]=c->r[29]|c->r[29]; // 800A78FC
  W32(c->r[31]+0x00000040u,c->r[30]); // 800A7900
  W32(c->r[31]+0x00000000u,c->r[4]); // 800A7904
  c->lr=0x800A790Cu; f_80331210(c); // 800A7908
  c->r[4]=0u+0x806D0000u; // 800A790C
  c->r[3]=c->r[31]|c->r[31]; // 800A7910
  c->r[4]=c->r[4]+0x000030C4u; // 800A7914
  W32(c->r[29]+0x00000000u,c->r[4]); // 800A7918
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800A791C
  c->r[30]=R32(c->r[1]+0x00000018u); // 800A7920
  c->r[29]=R32(c->r[1]+0x00000014u); // 800A7924
  c->r[0]=R32(c->r[1]+0x00000024u); // 800A7928
  c->lr=c->r[0]; // 800A792C
  c->r[1]=c->r[1]+0x00000020u; // 800A7930
  return; // 800A7934
}

// dtor_800A7938
void f_800A7938(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800A7938
  c->r[0]=c->lr; // 800A793C
  cmps(c,0,(int32_t)c->r[3],0); // 800A7940
  W32(c->r[1]+0x00000014u,c->r[0]); // 800A7944
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800A7948
  c->r[31]=c->r[3]|c->r[3]; // 800A794C
  if (crb(c,2)) { goto L_800A79D8; } // 800A7950
  c->r[12]=0u+0x806D0000u; // 800A7954
  c->r[12]=c->r[12]+0x00005FE8u; // 800A7958
  W32(c->r[3]+0x00000000u,c->r[12]); // 800A795C
  c->r[12]=R32(c->r[12]+0x00000028u); // 800A7960
  c->ctr=c->r[12]; // 800A7964
  if (true) { c->lr=0x800A796Cu; dispatch(c,c->ctr); } // 800A7968
  c->r[3]=addc(c,c->r[31],0x00000078u,0); cr0(c,c->r[3]); // 800A796C
  if (crb(c,2)) { goto L_800A797C; } // 800A7970
  c->r[4]=0u+0x00000000u; // 800A7974
  c->lr=0x800A797Cu; f_803312D4(c); // 800A7978
L_800A797C:;
  cmps(c,0,(int32_t)c->r[31],0); // 800A797C
  if (crb(c,2)) { goto L_800A79D8; } // 800A7980
  c->r[3]=addc(c,c->r[31],0x00000034u,0); cr0(c,c->r[3]); // 800A7984
  if (crb(c,2)) { goto L_800A79A0; } // 800A7988
  if (crb(c,2)) { goto L_800A79A0; } // 800A798C
  c->r[4]=R32(c->r[3]+0x00000004u); // 800A7990
  c->r[3]=R32(c->r[3]+0x00000000u); // 800A7994
  W32(c->r[4]+0x00000000u,c->r[3]); // 800A7998
  W32(c->r[3]+0x00000004u,c->r[4]); // 800A799C
L_800A79A0:;
  c->r[3]=addc(c,c->r[31],0x00000028u,0); cr0(c,c->r[3]); // 800A79A0
  if (crb(c,2)) { goto L_800A79BC; } // 800A79A4
  if (crb(c,2)) { goto L_800A79BC; } // 800A79A8
  c->r[4]=R32(c->r[3]+0x00000004u); // 800A79AC
  c->r[3]=R32(c->r[3]+0x00000000u); // 800A79B0
  W32(c->r[4]+0x00000000u,c->r[3]); // 800A79B4
  W32(c->r[3]+0x00000004u,c->r[4]); // 800A79B8
L_800A79BC:;
  c->r[3]=addc(c,c->r[31],0x0000001Cu,0); cr0(c,c->r[3]); // 800A79BC
  if (crb(c,2)) { goto L_800A79D8; } // 800A79C0
  if (crb(c,2)) { goto L_800A79D8; } // 800A79C4
  c->r[4]=R32(c->r[3]+0x00000004u); // 800A79C8
  c->r[3]=R32(c->r[3]+0x00000000u); // 800A79CC
  W32(c->r[4]+0x00000000u,c->r[3]); // 800A79D0
  W32(c->r[3]+0x00000004u,c->r[4]); // 800A79D4
L_800A79D8:;
  c->r[3]=c->r[31]|c->r[31]; // 800A79D8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800A79DC
  c->r[0]=R32(c->r[1]+0x00000014u); // 800A79E0
  c->lr=c->r[0]; // 800A79E4
  c->r[1]=c->r[1]+0x00000010u; // 800A79E8
  return; // 800A79EC
}

// fn_800A79F0
void f_800A79F0(Ctx* __restrict c) {
  trace_call(0x800A79F0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800A79F0
  c->r[0]=c->lr; // 800A79F4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800A79F8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800A79FC
  c->r[31]=c->r[3]|c->r[3]; // 800A7A00
  c->r[3]=c->r[3]+0x00000078u; // 800A7A04
  c->lr=0x800A7A0Cu; f_8033137C(c); // 800A7A08
  c->r[3]=c->r[31]+0x0000004Cu; // 800A7A0C
  c->lr=0x800A7A14u; f_8032EDFC(c); // 800A7A10
  c->r[0]=R32(c->r[1]+0x00000014u); // 800A7A14
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800A7A18
  c->lr=c->r[0]; // 800A7A1C
  c->r[1]=c->r[1]+0x00000010u; // 800A7A20
  return; // 800A7A24
}

// fn_800A7A28
void f_800A7A28(Ctx* __restrict c) {
  trace_call(0x800A7A28u);
  c->r[3]=c->r[3]+0x00000078u; // 800A7A28
  f_803313F0(c); return; // 800A7A2C
}

// fn_800A7A30
void f_800A7A30(Ctx* __restrict c) {
  trace_call(0x800A7A30u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800A7A30
  c->r[0]=c->lr; // 800A7A34
  W32(c->r[1]+0x00000014u,c->r[0]); // 800A7A38
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800A7A3C
  c->r[31]=c->r[3]|c->r[3]; // 800A7A40
  c->r[3]=c->r[3]+0x00000078u; // 800A7A44
  c->lr=0x800A7A4Cu; f_80331464(c); // 800A7A48
  c->r[3]=c->r[31]+0x00000078u; // 800A7A4C
  c->lr=0x800A7A54u; f_80331640(c); // 800A7A50
  {uint32_t ea=c->r[3]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A7A54
  {uint32_t ea=c->r[31]+0x0000004Cu; WF32(ea,c->f[0]);} // 800A7A58
  {uint32_t ea=c->r[3]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A7A5C
  {uint32_t ea=c->r[31]+0x00000050u; WF32(ea,c->f[0]);} // 800A7A60
  {uint32_t ea=c->r[3]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A7A64
  {uint32_t ea=c->r[31]+0x00000054u; WF32(ea,c->f[0]);} // 800A7A68
  {uint32_t ea=c->r[3]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800A7A6C
  {uint32_t ea=c->r[31]+0x00000058u; WF32(ea,c->f[0]);} // 800A7A70
  {uint32_t ea=c->r[3]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A7A74
  {uint32_t ea=c->r[31]+0x0000005Cu; WF32(ea,c->f[0]);} // 800A7A78
  {uint32_t ea=c->r[3]+0x00000014u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A7A7C
  {uint32_t ea=c->r[31]+0x00000060u; WF32(ea,c->f[0]);} // 800A7A80
  {uint32_t ea=c->r[3]+0x00000018u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A7A84
  {uint32_t ea=c->r[31]+0x00000064u; WF32(ea,c->f[0]);} // 800A7A88
  {uint32_t ea=c->r[3]+0x0000001Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800A7A8C
  {uint32_t ea=c->r[31]+0x00000068u; WF32(ea,c->f[0]);} // 800A7A90
  {uint32_t ea=c->r[3]+0x00000020u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A7A94
  {uint32_t ea=c->r[31]+0x0000006Cu; WF32(ea,c->f[0]);} // 800A7A98
  {uint32_t ea=c->r[3]+0x00000024u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A7A9C
  {uint32_t ea=c->r[31]+0x00000070u; WF32(ea,c->f[0]);} // 800A7AA0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800A7AA4
  c->r[0]=R32(c->r[1]+0x00000014u); // 800A7AA8
  c->lr=c->r[0]; // 800A7AAC
  c->r[1]=c->r[1]+0x00000010u; // 800A7AB0
  return; // 800A7AB4
}

// fn_800A7AB8
void f_800A7AB8(Ctx* __restrict c) {
  trace_call(0x800A7AB8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800A7AB8
  c->r[0]=c->lr; // 800A7ABC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800A7AC0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800A7AC4
  c->r[31]=c->r[3]|c->r[3]; // 800A7AC8
  c->lr=0x800A7AD0u; f_800A7AE8(c); // 800A7ACC
  c->r[3]=c->r[31]|c->r[31]; // 800A7AD0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800A7AD4
  c->r[0]=R32(c->r[1]+0x00000014u); // 800A7AD8
  c->lr=c->r[0]; // 800A7ADC
  c->r[1]=c->r[1]+0x00000010u; // 800A7AE0
  return; // 800A7AE4
}

// fn_800A7AE8
void f_800A7AE8(Ctx* __restrict c) {
  trace_call(0x800A7AE8u);
  {uint32_t ea=c->r[2]+0xFFFF9968u; c->f[1]=c->ps1[1]=RF32(ea);} // 800A7AE8
  c->r[0]=0u+0x00000000u; // 800A7AEC
  {uint32_t ea=c->r[2]+0xFFFF996Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800A7AF0
  W8(c->r[3]+0x0000000Cu,c->r[0]); // 800A7AF4
  {uint32_t ea=c->r[3]+0x00000000u; WF32(ea,c->f[1]);} // 800A7AF8
  {uint32_t ea=c->r[3]+0x00000004u; WF32(ea,c->f[1]);} // 800A7AFC
  {uint32_t ea=c->r[3]+0x00000008u; WF32(ea,c->f[0]);} // 800A7B00
  return; // 800A7B04
}

// fn_800A7B08
void f_800A7B08(Ctx* __restrict c) {
  trace_call(0x800A7B08u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800A7B08
  c->r[0]=c->lr; // 800A7B0C
  W32(c->r[1]+0x00000034u,c->r[0]); // 800A7B10
  c->r[11]=c->r[1]+0x00000030u; // 800A7B14
  c->lr=0x800A7B1Cu; { {uint32_t ea=c->r[11]+0xFFFFFFE8u; WF64(ea,c->f[29]);} {uint32_t ea=c->r[11]+0xFFFFFFF0u; WF64(ea,c->f[30]);} {uint32_t ea=c->r[11]+0xFFFFFFF8u; WF64(ea,c->f[31]);} } // 800A7B18
  W32(c->r[1]+0x00000014u,c->r[31]); // 800A7B1C
  c->f[29]=c->f[1]; // 800A7B20
  c->r[31]=c->r[3]|c->r[3]; // 800A7B24
  c->f[30]=c->f[2]; // 800A7B28
  c->f[31]=c->f[3]; // 800A7B2C
  c->lr=0x800A7B34u; f_800A7AE8(c); // 800A7B30
  c->r[0]=0u+0x00000001u; // 800A7B34
  W8(c->r[31]+0x0000000Cu,c->r[0]); // 800A7B38
  c->r[11]=c->r[1]+0x00000030u; // 800A7B3C
  {uint32_t ea=c->r[31]+0x00000000u; WF32(ea,c->f[29]);} // 800A7B40
  {uint32_t ea=c->r[31]+0x00000004u; WF32(ea,c->f[30]);} // 800A7B44
  {uint32_t ea=c->r[31]+0x00000008u; WF32(ea,c->f[31]);} // 800A7B48
  c->lr=0x800A7B50u; { {uint32_t ea=c->r[11]+0xFFFFFFE8u; c->f[29]=RF64(ea);} {uint32_t ea=c->r[11]+0xFFFFFFF0u; c->f[30]=RF64(ea);} {uint32_t ea=c->r[11]+0xFFFFFFF8u; c->f[31]=RF64(ea);} } // 800A7B4C
  c->r[31]=R32(c->r[1]+0x00000014u); // 800A7B50
  c->r[0]=R32(c->r[1]+0x00000034u); // 800A7B54
  c->lr=c->r[0]; // 800A7B58
  c->r[1]=c->r[1]+0x00000030u; // 800A7B5C
  return; // 800A7B60
}

// fn_800A7B64
void f_800A7B64(Ctx* __restrict c) {
  trace_call(0x800A7B64u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800A7B64
  c->r[0]=c->lr; // 800A7B68
  W32(c->r[1]+0x00000024u,c->r[0]); // 800A7B6C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800A7B70
  c->r[31]=c->r[3]|c->r[3]; // 800A7B74
  c->r[0]=R8(c->r[3]+0x0000000Cu); // 800A7B78
  cmps(c,0,(int32_t)c->r[0],0); // 800A7B7C
  if (crb(c,2)) { goto L_800A7BC0; } // 800A7B80
  c->r[0]=0u+0x00000000u; // 800A7B84
  W8(c->r[1]+0x00000008u,c->r[0]); // 800A7B88
  c->r[3]=c->r[1]+0x00000008u; // 800A7B8C
  c->lr=0x800A7B94u; f_8004714C(c); // 800A7B90
  {uint32_t ea=c->r[3]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 800A7B94
  {uint32_t ea=c->r[31]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 800A7B98
  {uint32_t ea=c->r[31]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A7B9C
  {uint32_t ea=c->r[31]+0x00000008u; c->f[3]=c->ps1[3]=RF32(ea);} // 800A7BA0
  c->f[0]=c->ps1[0]=S(std::fma(c->f[1],c->f[2],c->f[0])); // 800A7BA4
  {uint32_t ea=c->r[31]+0x00000004u; WF32(ea,c->f[0]);} // 800A7BA8
  fcmp(c,0,c->f[0],c->f[3]); // 800A7BAC
  if (!crb(c,1)) { goto L_800A7BB8; } // 800A7BB0
  goto L_800A7BBC; // 800A7BB4
L_800A7BB8:;
  c->f[3]=c->f[0]; // 800A7BB8
L_800A7BBC:;
  {uint32_t ea=c->r[31]+0x00000004u; WF32(ea,c->f[3]);} // 800A7BBC
L_800A7BC0:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 800A7BC0
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800A7BC4
  c->lr=c->r[0]; // 800A7BC8
  c->r[1]=c->r[1]+0x00000020u; // 800A7BCC
  return; // 800A7BD0
}

// fn_800A7BD4
void f_800A7BD4(Ctx* __restrict c) {
  trace_call(0x800A7BD4u);
  {uint32_t ea=c->r[2]+0xFFFF9968u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A7BD4
  W8(c->r[3]+0x0000000Cu,c->r[4]); // 800A7BD8
  {uint32_t ea=c->r[3]+0x00000004u; WF32(ea,c->f[0]);} // 800A7BDC
  return; // 800A7BE0
}

// fn_800A7BE4
void f_800A7BE4(Ctx* __restrict c) {
  trace_call(0x800A7BE4u);
  c->r[3]=R8(c->r[3]+0x0000000Cu); // 800A7BE4
  return; // 800A7BE8
}

// fn_800A7BEC
void f_800A7BEC(Ctx* __restrict c) {
  trace_call(0x800A7BECu);
  {uint32_t ea=c->r[3]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 800A7BEC
  return; // 800A7BF0
}

