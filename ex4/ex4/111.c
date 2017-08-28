//
//  111.c
//  ex4
//
//  Created by Sooyoung on 2017. 8. 6..
//  Copyright © 2017년 roadrush. All rights reserved.
//

#include <stdio.h>
int main(void)
{
    int i, j, c;
    for (i = 1; ; i++)
    {
        c = 0;
        for (j = 1; j <= 20; j++)
        {
            if (i % j != 0)
            {
                c = 1;
                break;
            }
        }
        if (c == 0)
        {
            printf("%d\n", i);
            break;
        }
    }
}
