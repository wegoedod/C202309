#include <stdio.h>

int multif(int value);//multif 함수 원형 선언

int main() { //문자열 출력 및 함수 multif 호출
	printf("1부터 2까지의 곱은 %d\n", multif(2));
	printf("1부터 3까지의 곱은 %d\n", multif(3));
	printf("1부터 5까지의 곱은 %d\n", multif(5));
	return 0;
}

long multif(int value)
{
	int i = 1; //변수 i 생성
	long multi = 1; //변수 multi 생성

	while (i <= value) { //i가 value보다 작거나 같을 때까지 반복
		multi = multi*i++; //multi에 i 곱함
		//i++; //i에 1 더함
	}
	return multi; //변수 multi를 반환
}