#include <stdio.h>
#define SQUARES 64
int main(void)
{
  const double CROP=2E16;    // 밀 수확에서의 세계 밀 생산량
  double current, total;
  int count = 1;

  printf("네모칸   추가       누계        ");
  printf("세계 수확량과의\n");
  printf("번 호   낱알 수     낱알 수     ");
  printf("상대 비율\n");
  total = current = 1.0;
  printf("%4d %13.2e %12.2e %12.2e\n", count, current, total, total/CROP);
  while (count < SQUARES)
  {
    count = count + 1;
    current = 2.0 * current;
    // 다음 네모칸은 2배의 낱알로 채운다.
    total = total + current;  // 누계를 갱신한다.
    printf("%4d %13.2e %12.2e %12.2e\n", count, current, total, total/CROP);
  }
  printf("이제 끝이다.\n");

  return 0;
  
}
