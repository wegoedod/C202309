#include <stdio.h>

int main(void) {
	int num;//���� num ����
	printf("���ڸ� �Է��Ͻÿ�: ");
	scanf_s("%d", &num);//������� �Է��� �ް� num�� �� ����
	if (num == 0) {//num�� 0�� ��
		printf("zero");
	}
	else if (num) {//num�� 1 �� ��
		printf("one");
	}
	else if (num==2)//num�� 2 �� ��
	{
		printf("two");
	}
	else //num�� 0~2�� �ƴ� ��
	{
		printf("not 0 ~ 2");
	}
	return 0;
}