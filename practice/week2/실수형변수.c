#include <stdio.h>

int main(void) {
	float pi1 = 3.141592f;
	printf("%.5f\n", pi1); // n은 출력할 소수점 이하 자릿수, n+1번째 자리에서 반올림
	
	double pi2 = 3.141592f;
	printf("%.3f\n", pi2); // n은 출력할 소수점 이하 자릿수, n+1번째 자리에서 반올림
	return 0;
}