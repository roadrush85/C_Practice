//
//  main.c
//  ex2
//
//  Created by Sooyoung Uh on 2017. 8. 3..
//  Copyright © 2017년 roadrush. All rights reserved.
//

#include <stdio.h>

int main(void)
{
    int feet, fathoms;
    
    fathoms = 2;
    feet = 6 * fathoms;
    printf("%d fathoms는 %d feet다!\n", fathoms, feet);
    printf("맞아, %d feet야.\n", 6 * fathoms);
    
    return 0;
    
}
