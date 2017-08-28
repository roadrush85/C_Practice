include <stdio.h>
int main(void)
{
  float cm;
  cm = 0;

  printf("키를 cm로 입력하세요: ");
  scanf("%f", &cm);

  printf("%.2fcm는 %.2f인치 입니다.\n", cm, cm / 2.54);

}
