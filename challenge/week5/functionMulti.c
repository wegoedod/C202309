#include <stdio.h>

int multif(int value);//multif �Լ� ���� ����

int main() { //���ڿ� ��� �� �Լ� multif ȣ��
	printf("1���� 2������ ���� %d\n", multif(2));
	printf("1���� 3������ ���� %d\n", multif(3));
	printf("1���� 5������ ���� %d\n", multif(5));
	return 0;
}

long multif(int value)
{
	int i = 1; //���� i ����
	long multi = 1; //���� multi ����

	while (i <= value) { //i�� value���� �۰ų� ���� ������ �ݺ�
		multi = multi*i++; //multi�� i ����
		//i++; //i�� 1 ����
	}
	return multi; //���� multi�� ��ȯ
}