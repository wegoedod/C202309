#include <stdio.h>

int main(void) {
	int choice; //변수 choice 생성

	printf("1. 파일 저장\n");
	printf("2. 저장 없이 닫기\n");
	printf("3. 종료\n"); //사용법 프린트
	scanf_s("%d", &choice); //사용자에게 값을 묻고 choice에 저장

	if (choice == 1) { //choice가 1인 경우
		printf("파일을 저장합니다.");
	}
	else if (choice == 2) { //choice가 2인 경우
		printf("저장 없이 닫습니다.");
	}
	else if (choice == 3) { //choice가 3인 경우
		printf("종료합니다.");
	}
	else //choice가 1~3이 아닌 경우
	{
		printf("잘못 입력하였습니다.");
	}
	return 0;
}