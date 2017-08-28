//
//  typesize.c
//  ex4
//
//  Created by Sooyoung on 2017. 8. 5..
//  Copyright © 2017년 roadrush. All rights reserved.
//

#include <stdio.h>
int main(void)
{
    // c99는 크기를 위해 %zd 포맷 지정자를 제공한다.
    printf("int형의 크기: %zd바이트\n", sizeof(int));
    printf("char형의 크기: %zd바이트\n", sizeof(char));
    printf("long형의 크기: %zd바이트\n", sizeof(long));
    printf("long long형의 크기: %zd바이트\n",
           sizeof(long long));
    printf("double형의 크기: %zd바이트\n",
           sizeof(double));
    printf("long double형의 크기: %zd바이트\n",
           sizeof(long double));
    
    return 0;
    
}
