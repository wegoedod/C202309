#include <stdio.h>

int main(void) {
	int floor; //floor���� ����
	printf("�� ���� �װڽ��ϱ�? ");
	scanf_s("%d", &floor); //�� ���� ���� �� �Է¹���

	for (int i = 1; i <= floor; i++) { //�Է¹��� �� ��ŭ ���� ����
		for (int j = 0; j < floor -i; j++) { //S�� floor-i�� ���
			printf("S");
		}
		for (int k = 0; k < i * 2 - 1; k++) { //*�� i*2-1�� ���
			printf("*");
		}
		printf("\n");//�� �ٲ�
	}
	return 0;
}