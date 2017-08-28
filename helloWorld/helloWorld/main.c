//
//  main.c
//  helloWorld
//
//  Created by Sooyoung Uh on 2017. 7. 20..
//  Copyright © 2017년 roadrush. All rights reserved.
//

#include <stdio.h>

int main(void) {
    
    //%d = 정수 출력 (1,2,-5,-6 ...)
    printf("%d + %d = %d\n", 2,3,5);
    
    // %f = 실수 출력 (1.1, -2.5 ....)
    printf("%f\n", 3.14);
    printf("%.2f\n", 3.141592); // 소수점 2번째 자리까지 출력(반올림)
    
    // %g = 실수 출력 (지수 형태로 출력)
    printf("%g\n", 3.142592);
    printf("%.3g\n", 129380.1923819038);
    
    // %c = 문자 출력 (알파벳, 숫자, 기호, \n) - 한글, 유니코드 출력 안됨
    printf("%c %c %c\n", 'a','b','c');
    
    // %s = 문자열 출력
    printf("%s\n", "안녕하세요");
    
    return 0;
    
}
