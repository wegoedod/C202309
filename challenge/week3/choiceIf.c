#include <stdio.h>

int main(void) {
	int choice; //���� choice ����

	printf("1. ���� ����\n");
	printf("2. ���� ���� �ݱ�\n");
	printf("3. ����\n"); //���� ����Ʈ
	scanf_s("%d", &choice); //����ڿ��� ���� ���� choice�� ����

	if (choice == 1) { //choice�� 1�� ���
		printf("������ �����մϴ�.");
	}
	else if (choice == 2) { //choice�� 2�� ���
		printf("���� ���� �ݽ��ϴ�.");
	}
	else if (choice == 3) { //choice�� 3�� ���
		printf("�����մϴ�.");
	}
	else //choice�� 1~3�� �ƴ� ���
	{
		printf("�߸� �Է��Ͽ����ϴ�.");
	}
	return 0;
}