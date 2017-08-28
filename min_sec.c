#include <stdio.h>
#define SEC_PER_MIN 60	// 1분은 60초
int main(void)
{
	int sec, min, left;

	printf("초 수로 주어지는 시간을 분과 초로 변환합니다!\n");
	printf("초를 입력하십시오.(<=0이면 끝):\n");
	scanf("%d", &sec);	//입력한 초를 읽는다.
	while(sec>0)
	{
		min = sec / SEC_PER_MIN;	//나머지를 버린 분수
		left = sec % SEC_PER_MIN;	//나머지 초
		printf("%d 초는 %d분, %d초 입니다.\n", sec, min, left);
		printf("다음 초를 입력하십시오.(<=0이면 끝)\n");
		scanf("%d", &sec);
	}
	printf("끝!\n");
	
	return 0;
}
