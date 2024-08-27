#ifndef bkcbase_h
#define bkcbase_h

#ifdef __LP64__
typedef uint8_t u8;
typedef char s8;
typedef uint16_t u16;
typedef int16_t s16;
typedef uint32_t u32;
typedef int32_t s32;
typedef float f32;
typedef double f64;
typedef int64_t s64;
typedef uint64_t u64;
#else
typedef uint8_t u8;
typedef char s8;
typedef uint16_t u16;
typedef int16_t s16;
typedef uint32_t u32;
typedef int32_t s32;
typedef float f32;
typedef double f64;
typedef int64_t s64;
typedef uint64_t u64;
#endif

#define true 1
#define false 0

#endif  // bkcbase_h
