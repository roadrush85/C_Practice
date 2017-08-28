#include <stdio.h>
int main(void)
{
  int age;
  float assets;
  char pet[30];

  printf("나이, 재산, 좋아하는 애완동물을 입력하시오.\n");
  scanf("%d %f", &age, &assets);    // 여기는 &를 사용한다.
  scanf("%s", pet);                 // 문자 배열에는 &를 사용하지 않는다.
  printf("%d $%.2f %s\n", age,assets,pet);

  return 0;

}
