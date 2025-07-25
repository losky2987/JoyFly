#ifndef base_type_h
#define base_type_h

typedef short     i8;
typedef int       i16;
typedef long      i32;
typedef long long i64;

typedef unsigned short     u8;
typedef unsigned int       u16;
typedef unsigned long      u32;
typedef unsigned long long u64;

typedef float  f32;
typedef double f64;

typedef char* text;

typedef void* alltype;

typedef struct {
    i64 integer;
    u64 after_point;
    u8 bit_reg;
} improved_float;

#endif
