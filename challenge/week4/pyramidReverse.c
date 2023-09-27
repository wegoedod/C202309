#include <stdio.h>

int main(void) {
	int floor; //floor 변수 생성
	printf("몇 층을 쌓겠습니까? ");
	scanf_s("%d", &floor);//변수 floor에 입력받은 값 저장
	int FLOOR = floor; //처음 입력받은 수를 저장(상수)
	while (floor > 0) //floor가 0이 될 때까지 반복
	{
		for (int i = FLOOR-floor; i > 0;i--) { //S를 FLOOR-floor번 출력
			printf("S");
		}
		for (int i = floor*2-1; i > 0;i--) { //*을 floor*2-1번 출력
			printf("*");
		}
		printf("\n"); //줄 바꿈
		floor = floor - 1; //변수 floor에 1을 뺌
	}
}