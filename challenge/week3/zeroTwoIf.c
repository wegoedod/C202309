#include <stdio.h>

int main(void) {
	int num;//변수 num 생성
	printf("숫자를 입력하시오: ");
	scanf_s("%d", &num);//사용자의 입력을 받고 num에 값 저장
	if (num == 0) {//num이 0일 때
		printf("zero");
	}
	else if (num) {//num이 1 일 때
		printf("one");
	}
	else if (num==2)//num이 2 일 때
	{
		printf("two");
	}
	else //num이 0~2가 아닐 때
	{
		printf("not 0 ~ 2");
	}
	return 0;
}