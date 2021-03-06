#ifdef LATER
#ifndef TEST_POSES
#define TEST_POSES
#define NOPROGMEM
#if defined(NOPROGMEM)
#define PROGMEM
#define prog_uint16_t uint16_t
#define pgm_read_byte(x)        (*((char *)x))
//  #define pgm_read_word(x)        (*((short *)(x & 0xfffffffe)))
#define pgm_read_word(x)        ( ((*((unsigned char *)x + 1)) << 8) + (*((unsigned char *)x)))
#define pgm_read_byte_near(x)   (*((char *)x))
#define pgm_read_byte_far(x)    (*((char *)x))
//  #define pgm_read_word_near(x)   (*((short *)(x & 0xfffffffe))
//  #define pgm_read_word_far(x)    (*((short *)(x & 0xfffffffe)))
#define pgm_read_word_near(x)   ( ((*((unsigned char *)x + 1)) << 8) + (*((unsigned char *)x)))
#define pgm_read_word_far(x)    ( ((*((unsigned char *)x + 1)) << 8) + (*((unsigned char *)x))))
#define PSTR(x)  x
#else
#include <avr/pgmspace.h>
#endif

PROGMEM prog_uint16_t R4[] = {18, 512, 511, 711, 595, 300, 899, 510, 510, 712, 596, 300, 900, 511, 510, 712, 800, 300, 970};
PROGMEM prog_uint16_t R5[] = {18, 512, 511, 711, 312, 201, 712, 509, 510, 712, 312, 201, 712, 511, 510, 711, 799, 207, 967};
PROGMEM prog_uint16_t R6[] = {18, 512, 512, 654, 224, 45, 506, 510, 512, 661, 225, 43, 506, 511, 510, 662, 799, 44, 967};
PROGMEM prog_uint16_t _Wag_6[] = {18, 511, 511, 297, 710, 113, 906, 628, 326, 260, 777, 368, 940, 663, 327, 306, 682, 62, 958};
PROGMEM prog_uint16_t _wag_1[] = {18, 512, 514, 280, 696, 50, 924, 492, 509, 280, 730, 42, 979, 509, 513, 273, 708, 47, 967};
PROGMEM prog_uint16_t R1[] = {18, 513, 513, 226, 796, 52, 971, 510, 510, 229, 795, 50, 970, 511, 510, 227, 796, 52, 970};
PROGMEM prog_uint16_t R2[] = {18, 512, 511, 226, 594, 52, 899, 509, 510, 229, 596, 50, 900, 511, 510, 428, 800, 124, 970};
PROGMEM prog_uint16_t R3[] = {18, 512, 511, 712, 595, 197, 899, 510, 510, 711, 596, 200, 900, 511, 510, 550, 800, 242, 970};
PROGMEM prog_uint16_t _wag_3[] = {18, 511, 512, 296, 710, 113, 906, 492, 509, 280, 730, 42, 981, 663, 327, 308, 682, 47, 967};
PROGMEM prog_uint16_t _wag_2[] = {18, 511, 511, 311, 696, 112, 920, 492, 508, 280, 731, 42, 979, 665, 326, 182, 795, 47, 967};
PROGMEM prog_uint16_t _wag_5[] = {18, 511, 512, 300, 710, 114, 906, 639, 331, 267, 779, 52, 651, 663, 327, 308, 682, 62, 962};
PROGMEM prog_uint16_t _wag_4[] = {18, 511, 512, 312, 712, 113, 906, 645, 331, 267, 772, 254, 767, 663, 327, 308, 682, 47, 967};
PROGMEM prog_uint16_t _wag_0[] = {18, 547, 514, 286, 719, 51, 935, 488, 509, 230, 788, 17, 977, 491, 518, 234, 723, 0, 921};

PROGMEM transition_t Wag[] =
{
    {
        0,17
    }
    ,
    {
        _wag_0,500
    }
    ,
    {
        _wag_1,500
    }
    ,
    {
        _wag_2,500
    }
    ,
    {
        _wag_3,500
    }
    ,
    {
        _wag_4,500
    }
    ,
    {
        _wag_5,500
    }
    ,
    {
        _Wag_6,500
    }
    ,
    {
        _wag_5,500
    }
    ,
    {
        _Wag_6,500
    }
    ,
    {
        _wag_5,500
    }
    ,
    {
        _Wag_6,500
    }
    ,
    {
        _wag_5,500
    }
    ,
    {
        _wag_4,500
    }
    ,
    {
        _wag_3,500
    }
    ,
    {
        _wag_2,500
    }
    ,
    {
        _wag_1,500
    }
    ,
    {
        _wag_0,500
    }
};
PROGMEM transition_t Rollover[] =
{
    {
        0,6
    }
    ,
    {
        R1,500
    }
    ,
    {
        R2,500
    }
    ,
    {
        R3,500
    }
    ,
    {
        R4,500
    }
    ,
    {
        R5,500
    }
    ,
    {
        R6,500
    }
};

#ifdef EXPORT_POSE_LIST
PROGMEM transition_t *PoseList[] = {  Wag ,Rollover };
#endif
#endif
#endif
