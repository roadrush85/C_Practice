#include <stdio.h>
#include <limits.h>
#include <float.h>
int main(void)
{
  printf("이 시스템이 표현하는 수의 한계:\n");
  printf("int형 최대값: %d\n", INT_MAX);
  printf("long long형 최소값: %lld\n", LLONG_MIN);
  printf("이 시스템에서 1바이트는 %d비트이다.\n", CHAR_BIT);
  printf("double형 최대값: %e\n", DBL_MAX);
  printf("flaot형 최소값: %e\n", FLT_MIN);
  printf("float형 정밀도는 소수점 아래 %d자리까지\n", FLT_DIG);
  printf("float형 epsilon = %e\n", FLT_EPSILON);

  return 0;

}
