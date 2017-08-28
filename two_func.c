#include <stdio.h>

void butler(void);
int main(void) {

    printf("bulter 함수 밖에 있느냐?\n");
    bulter();
    printf("그래, 차 한잔 내오고, DVD도 가져오너라.\n");

    return 0;

}

void bulter(void) {

    printf("부르셨습니까? 주인님!\n");

}
