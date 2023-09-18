#include <stdio.h>

int main(void) 
{
	int i = 0;//변수 설정
	while (i <= 9)//i가 9보다 작거나 같을 때 까지 반복 
	{
		i = i + 1; //i에 1을 더함
		if(i % 2 == 0) { //i가 짝수일 때는 프린트하지 않고 처음으로 감		
			continue;
		}
		printf("%d Hello World!\n", i); //문장 출력 
	}
	return 0;
}