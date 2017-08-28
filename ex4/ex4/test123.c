//
//  test123.c
//  ex4
//
//  Created by Sooyoung on 2017. 8. 17..
//  Copyright © 2017년 roadrush. All rights reserved.
//

#include <stdio.h>
int main(void)
{
    int ultra = 0, super = 0;
    while (super > 5)
    {
        super++;
        ++ultra;
        printf("super = %d, ultra = %d \n", super, ultra);
    }
    return 0;
}
