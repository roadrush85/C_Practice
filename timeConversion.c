#include <stdio.h>
int main(void)
{
  int sec, min, hour;
  sec = 0;
  min = 0;
  hour = 0;

  printf("초를 입력하세요: ");
  scanf("%d", &sec);

  min = sec / 60;
  hour = min / 60;
  sec = sec % 60;
  min = min % 60;

  printf("%d초는 %02d시간 %02d분 %02d초 입니다.\n", sec, hour, min, sec);

  return 0;

}
