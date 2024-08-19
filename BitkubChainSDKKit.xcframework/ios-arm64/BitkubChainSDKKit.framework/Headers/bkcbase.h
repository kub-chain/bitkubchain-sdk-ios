#ifndef bkcbase_h
#define bkcbase_h

#ifdef __LP64__
// 64-bit code
typedef unsigned char u8;
typedef char s8;
typedef unsigned short u16;
typedef short s16;
typedef unsigned int u32;
typedef int s32;
typedef float f32;
typedef double f64;
typedef long s64;
typedef unsigned long u64;
#else
// 32-bit code
typedef unsigned char u8;
typedef char s8;
typedef unsigned short u16;
typedef short s16;
typedef unsigned long u32;
typedef long s32;
typedef float f32;
typedef double f64;
typedef long long s64;
typedef unsigned long long u64;
#endif

#define true 1
#define false 0

#endif  // bkcbase_h
