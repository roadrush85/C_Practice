//
//  nogood.c
//  ex4
//
//  Created by Sooyoung Uh on 2017. 8. 3..
//  Copyright © 2017년 roadrush. All rights reserved.
//

// nogood.c -- 몇 개의 에러가 있는 프로그램

#include <stdio.h>
int main(void) {
    
    int n, n2, n3;
    
    n = 1;
    n2 = n * n;
    n3 = n2 * n2;
    printf("n = %d, n의 제곱 = %d, n의 세제곱 = %d\n", n, n2, n3);
    for(int i = 0 ; i < 5 ; i++)
    {
        n *= 5;
        n = n + 1;
        n += 1;
        
    
    
    
    int sum;
    for(int i = 1; i < 1001; i++)
    {
        if(i % 3 == 0 || i % 5 == 0) // ||는 or 연산 &&는 and 연산
        {
            sum += i;
        }
    }
    
    for(int i = 1; i < 1001; i++)
    {
        if(i % 2 == 0)
        {
            sum1+= i;
        }
        else
        {
            sum2 += i;
        }
            
    }
    
    int[] intarray = new int[4];
    bool clearcheck = true;
    for(int i = 0 ; i < 4; i++)
        {
            
            if(intarray[i] == 2)
                continue;
            
            if(intarray[i] == 0)
            {
                
            }
            else if(intarray[i] == 1)
            {
                
            }
            else if(intarray[i] == 2)
            {
                
            }
            
            if(intarray[i] != 1)
            {
                clearcheck = false;
                break;
            }
        }
    
    int[] testarray = new int[10];
    int count;
    int index = 0;
    while(testarray[index] < 5)
    {
        
        
            count++;
            index++
        
        
        
        
        
    }
    
    
    int number;
    switch(number)
    {
        case "charleft" :
        {
            
        }
        
        case 1:
        case 2:
        {
            number -= 1;
        }
            break;
        default :
        {
            
        }
            
    }
    return 0;
}
