#include <stdio.h>

int main(void) {
	float pi1 = 3.141592f;
	printf("%.5f\n", pi1); // n�� ����� �Ҽ��� ���� �ڸ���, n+1��° �ڸ����� �ݿø�
	
	double pi2 = 3.141592f;
	printf("%.3f\n", pi2); // n�� ����� �Ҽ��� ���� �ڸ���, n+1��° �ڸ����� �ݿø�
	return 0;
}