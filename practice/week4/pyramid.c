#include <stdio.h>

int main(void) {
	int floor; //floor변수 생성
	printf("몇 층을 쌓겠습니까? ");
	scanf_s("%d", &floor); //몇 층을 쌓을 지 입력받음

	for (int i = 1; i <= floor; i++) { //입력받은 수 만큼 층을 쌓음
		for (int j = 0; j < floor -i; j++) { //S를 floor-i번 출력
			printf("S");
		}
		for (int k = 0; k < i * 2 - 1; k++) { //*를 i*2-1번 출력
			printf("*");
		}
		printf("\n");//줄 바꿈
	}
	return 0;
}