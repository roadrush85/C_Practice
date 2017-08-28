//
//  floaterr.c
//  ex4
//
//  Created by Sooyoung on 2017. 8. 5..
//  Copyright © 2017년 roadrush. All rights reserved.
//

#include <stdio.h>
int main(void)
{
    float a, b;
    
    b = 2.0e20 + 1.0;
    a = b - 2.0e20;
    printf("%f \n", a);
    
    return 0;
    
}
