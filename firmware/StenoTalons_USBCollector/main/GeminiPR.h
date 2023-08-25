#pragma once

#if defined(__cplusplus)
extern "C"
{
#endif

#include <ctype.h>

    typedef uint64_t gemini_pr_byte_packet_t;

// clang-format off
#define KEYS_LEFT_NUM1  (1 << 46)
#define KEYS_RIGHT_NUM2 (1 << 45)
#define KEYS_LEFT_S1    (1 << 39)
#define KEYS_LEFT_S2    (1 << 38)
#define KEYS_LEFT_T     (1 << 37)
#define KEYS_LEFT_K     (1 << 36)
#define KEYS_LEFT_P     (1 << 35)
#define KEYS_LEFT_W     (1 << 34)
#define KEYS_LEFT_H     (1 << 33)
#define KEYS_LEFT_R     (1 << 31)
#define KEYS_LEFT_A     (1 << 30)
#define KEYS_LEFT_O     (1 << 29)
    // clang-format on

    /*

      - The left hand shall have S1-,S2-,T-,K-,P-,W-,H-,R-,A-,O-,\*1,#1
      - The right hand shall have #2,\*3,-E,-U,-F,-R,-P,-B,-L,-G,-T,-S,-D,-Z

      GeminiPR key layout:

      Index, Key
      48     1
      47     Fn
      46     #1
      45     #2
      44     #3
      43     #4
      42     #5
      41     #6
      40     0
      39     S1-
      38     S2-
      37     T-
      36     K-
      35     P-
      34     W-
      33     H-
      32     0
      31     R-
      30     A-
      29     O-
      28     *1
      27     *2
      26     res1
      25     res2
      24     0
      23     pwr
      22     *3
      21     *4
      20     -E
      19     -U
      18     -F
      17     -R
      16     0
      15     -P
      14     -B
      13     -L
      12     -G
      11     -T
      10     -S
      9      -D
      8      0
      7      #7
      6      #8
      5      #9
      4      #A
      3      #B
      2      #C
      1      -Z

    */

#if defined(__cplusplus)
}
#endif
