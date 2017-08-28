//
//  charcode.c
//  ex4
//
//  Created by Sooyoung Uh on 2017. 8. 5..
//  Copyright © 2017년 roadrush. All rights reserved.
//

#include <stdio.h>

int main(void)
{
    char ch;
    
    printf("키보드를 영문 모드로 놓고, 문자를 하나 입력하시오.\n");
    scanf("%c", &ch);
    printf("문자 %c에 대응하는 코드값은 %d이다.\n", ch, ch);
    
    return 0;
}
