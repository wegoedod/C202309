#include <stdio.h>

int main(void) 
{
	int i = 0;//���� ����
	while (i <= 9)//i�� 9���� �۰ų� ���� �� ���� �ݺ� 
	{
		i = i + 1; //i�� 1�� ����
		if(i % 2 == 0) { //i�� ¦���� ���� ����Ʈ���� �ʰ� ó������ ��		
			continue;
		}
		printf("%d Hello World!\n", i); //���� ��� 
	}
	return 0;
}