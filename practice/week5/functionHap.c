#include <stdio.h>

int hapf(int value);//hapf �Լ� ���� ����

void main() { //���ڿ� ��� �� �Լ� hapf ȣ��
	printf("1���� 10������ ���� %d\n", hapf(10));
	printf("1���� 100������ ���� %d\n", hapf(100));
	printf("1���� 1000������ ���� %d\n", hapf(1000));
}

int hapf(int value) 
{
	int i = 1; //���� i ����
	int hap = 0; //���� hap ����

	while (i <= value) { //i�� value���� �۰ų� ���� ������ �ݺ�
		hap = hap + i; //hap�� i ����
		i++; //i�� 1 ����
	}
	return hap; //���� multi�� ��ȯ
}