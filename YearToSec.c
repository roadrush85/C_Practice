#include <stdio.h>
int main(void)
{
  int years;
  years = 0;

  printf("나이를 입력하세요: ");
  scanf("%d", &years);

  printf("%d를 초로 환산하면 %.2f입니다.\n", years, years * 3.156e7);

}
