#include <stdio.h>

int main(void) {
	int floor; //floor ���� ����
	printf("�� ���� �װڽ��ϱ�? ");
	scanf_s("%d", &floor);//���� floor�� �Է¹��� �� ����
	int FLOOR = floor; //ó�� �Է¹��� ���� ����(���)
	while (floor > 0) //floor�� 0�� �� ������ �ݺ�
	{
		for (int i = FLOOR-floor; i > 0;i--) { //S�� FLOOR-floor�� ���
			printf("S");
		}
		for (int i = floor*2-1; i > 0;i--) { //*�� floor*2-1�� ���
			printf("*");
		}
		printf("\n"); //�� �ٲ�
		floor = floor - 1; //���� floor�� 1�� ��
	}
}