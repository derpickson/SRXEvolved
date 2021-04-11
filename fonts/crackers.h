//Small and Medium font -  2 sets of 3 pixels - 6 bit font - crackers_font (appears to be working) 
const unsigned char crackers[] PROGMEM = {
	0x00,0x00,0x00,0x00,0x00,0x00, //  
	0x5e,0x06,0x06,0x00,0x00,0x00, // !
	0x1e,0x00,0x00,0x1e,0x00,0x00, // "
	0x20,0x7c,0x38,0x38,0x7c,0x08, // #
	0x48,0xfe,0x64,0x64,0x00,0x00, // $
	0x64,0x60,0x60,0x18,0x0c,0x0c, // %
	0x74,0x4a,0x4a,0x7e,0x48,0x00, // &
	0x1e,0x00,0x00,0x00,0x00,0x00, // '
	0x3c,0x7e,0x7e,0x42,0x00,0x00, // (
	0x42,0x7e,0x7e,0x3c,0x00,0x00, // )
	0x04,0x0c,0x04,0x06,0x0c,0x04, // *
	0x10,0x3c,0x3c,0x3c,0x10,0x00, // +
	0x00,0x60,0xe0,0x00,0x00,0x00, // ,
	0x08,0x08,0x08,0x00,0x00,0x00, // -
	0x60,0x60,0x60,0x00,0x00,0x00, // .
	0x60,0x78,0x78,0x1e,0x06,0x00, // /
	0x3c,0x3c,0x7e,0x42,0x7e,0x7e, // 0
	0x04,0x7e,0x7e,0x7e,0x00,0x00, // 1
	0x76,0x7a,0x7e,0x7e,0x4c,0x00, // 2
	0x4a,0x7e,0x7e,0x7c,0x00,0x00, // 3
	0x0e,0x08,0x7e,0x7e,0x7e,0x00, // 4
	0x4e,0x4e,0x4e,0x7a,0x1a,0x00, // 5
	0x3c,0x7e,0x7e,0x4a,0x7a,0x00, // 6
	0x02,0x02,0x0a,0x7e,0x7e,0x7e, // 7
	0x7e,0x7e,0x7e,0x4a,0x7e,0x00, // 8
	0x0c,0x4a,0x7e,0x7e,0x3c,0x00, // 9
	0x66,0x66,0x66,0x00,0x00,0x00, // :
	0x66,0xe6,0x00,0x00,0x00,0x00, // ;
	0x08,0x3c,0x7e,0x7e,0x62,0x00, // <
	0x14,0x14,0x14,0x00,0x00,0x00, // =
	0x62,0x7e,0x7e,0x3c,0x08,0x00, // >
	0x02,0x4a,0x0e,0x0e,0x0c,0x00, // ?
	0x3c,0x7e,0x7e,0x4a,0x72,0x30, // @
	0x7a,0x4a,0x7e,0x7e,0x7c,0x00, // A
	0x7e,0x7e,0x7e,0x4a,0x24,0x00, // B
	0x3c,0x7e,0x7e,0x7e,0x46,0x00, // C
	0x7e,0x7e,0x7e,0x62,0x3c,0x00, // D
	0x7e,0x7e,0x7e,0x4a,0x00,0x00, // E
	0x7e,0x7e,0x7e,0x0a,0x00,0x00, // F
	0x3c,0x7e,0x7e,0x42,0x62,0x00, // G
	0x7e,0x7e,0x7e,0x18,0x7e,0x00, // H
	0x7e,0x7e,0x7e,0x00,0x00,0x00, // I
	0x40,0x7e,0x7e,0x7e,0x00,0x00, // J
	0x7e,0x7e,0x7e,0x3c,0x66,0x00, // K
	0x7e,0x7e,0x7e,0x40,0x00,0x00, // L
	0x7e,0x3e,0x3e,0x7c,0x3e,0x3e, // M
	0x7e,0x3e,0x7e,0x7c,0x7e,0x00, // N
	0x3c,0x3c,0x7e,0x62,0x7e,0x7e, // O
	0x7e,0x7e,0x7e,0x22,0x0c,0x00, // P
	0x3c,0x7e,0x7e,0x62,0x7e,0x7c, // Q
	0x7e,0x7e,0x7e,0x0a,0x64,0x00, // R
	0x4c,0x4e,0x4e,0x7a,0x1a,0x00, // S
	0x02,0x7e,0x7e,0x7e,0x02,0x00, // T
	0x7e,0x60,0x7e,0x7e,0x7e,0x00, // U
	0x3e,0x60,0x7e,0x7e,0x3e,0x00, // V
	0x7e,0x7c,0x7c,0x3e,0x7c,0x7c, // W
	0x46,0x7e,0x08,0x7e,0x62,0x62, // X
	0x5e,0x5e,0x5e,0x70,0x3e,0x00, // Y
	0x66,0x7a,0x7a,0x5e,0x66,0x00, // Z
	0x7e,0x7e,0x7e,0x42,0x00,0x00, // [
	0x06,0x1e,0x1e,0x78,0x60,0x00, // "\"
	0x42,0x7e,0x7e,0x7e,0x00,0x00, // ]
	0x0c,0x06,0x0c,0x00,0x00,0x00, // ^
	0x40,0x40,0x40,0x40,0x40,0x00, // _
	0x02,0x06,0x06,0x04,0x00,0x00, // `
	0x78,0x24,0x7c,0x7c,0x78,0x00, // a
	0x7c,0x7c,0x7c,0x48,0x20,0x00, // b
	0x18,0x7c,0x7c,0x7c,0x4c,0x00, // c
	0x20,0x48,0x7c,0x7c,0x7c,0x00, // d
	0x18,0x7c,0x7c,0x74,0x4c,0x00, // e
	0x78,0x7c,0x7c,0x24,0x00,0x00, // f
	0x18,0x7c,0x7c,0x44,0x74,0x00, // g
	0x7c,0x7c,0x7c,0x08,0x60,0x00, // h
	0x7c,0x7c,0x7c,0x00,0x00,0x00, // i
	0x40,0x7c,0x7c,0x7c,0x00,0x00, // j
	0x7c,0x7c,0x7c,0x20,0x48,0x00, // k
	0x7c,0x7c,0x7c,0x40,0x00,0x00, // l
	0x7c,0x3c,0x3c,0x78,0x3c,0x3c, // m
	0x7c,0x7c,0x7c,0x04,0x78,0x00, // n
	0x18,0x18,0x7c,0x44,0x7c,0x7c, // o
	0x7c,0x7c,0x7c,0x24,0x08,0x00, // p
	0x18,0x18,0x7c,0x44,0x7c,0x7c, // q
	0x7c,0x7c,0x7c,0x04,0x00,0x00, // r
	0x5c,0x7c,0x7c,0x74,0x00,0x00, // s
	0x08,0x7c,0x7c,0x7c,0x48,0x00, // t
	0x7c,0x60,0x7c,0x7c,0x7c,0x00, // u
	0x3c,0x60,0x7c,0x7c,0x3c,0x00, // v
	0x7c,0x78,0x78,0x3c,0x78,0x78, // w
	0x4c,0x3c,0x3c,0x78,0x64,0x00, // x
	0x4c,0x4c,0x4c,0x78,0x3c,0x00, // y
	0x5c,0x74,0x44,0x5c,0x74,0x00, // z
	0x24,0x7e,0x42,0x42,0x00,0x00, // {
	0x7e,0x00,0x00,0x00,0x00,0x00, // |
	0x42,0x7e,0x24,0x00,0x00,0x00, // }
	0x04,0x06,0x06,0x02,0x04,0x06, // ~
	0x00,0x00,0x00,0x00,0x00,0x00
};
