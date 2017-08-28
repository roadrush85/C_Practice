//
//  print2.c
//  ex4
//
//  Created by Sooyoung Uh on 2017. 8. 4..
//  Copyright © 2017년 roadrush. All rights reserved.
//

//print2.c -- printf()의 추가적인 특성을 설명한다.

#include <stdio.h>

int main(void)
{
    unsigned int un = 3000000000; //32비트 int형과
    short end = 200;              //16비트 short형을 사용하는 시스템
    long big = 65537;
    long long verybig = 12345678908642;
    
    printf("un = %u and not %d\n", un, un);
    printf("end = %hd and %d\n", end, end);
    printf("big = %ld and not %hd\n", big, big);
    printf("verybig = %lld and not %ld\n", verybig, verybig);
    
    return 0;
}
