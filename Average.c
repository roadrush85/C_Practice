#include <stdio.h>
int main(void)
{
  int a, b;
  a = 0;
  b = 0;

  printf("두 정수를 입력하세요: ");
  scanf("%d %d", &a, &b);
  printf("AVR = %d\n", a + b / 2);

  return 0;

}
