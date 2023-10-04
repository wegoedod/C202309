#include <stdio.h>

int hapf(int value);//hapf 함수 원형 선언

void main() { //문자열 출력 및 함수 hapf 호출
	printf("1부터 10까지의 합은 %d\n", hapf(10));
	printf("1부터 100까지의 합은 %d\n", hapf(100));
	printf("1부터 1000까지의 합은 %d\n", hapf(1000));
}

int hapf(int value) 
{
	int i = 1; //변수 i 생성
	int hap = 0; //변수 hap 생성

	while (i <= value) { //i가 value보다 작거나 같을 때까지 반복
		hap = hap + i; //hap에 i 더함
		i++; //i에 1 더함
	}
	return hap; //변수 multi를 반환
}