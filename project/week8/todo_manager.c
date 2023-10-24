#include <stdio.h>
#define MAX_TASKS 10
#define CHAR_NUM 100
#include <string.h>

int main() {
	char tasks[MAX_TASKS][CHAR_NUM] = { "" }; // 할 일 목록을 저장하기 위한 2차원 배열
	int taskCount = 0; // 할 일의 수를 저장하기 위한 변수

	printf("TODO 리스트 시작! \n");

	while (1) {
		int choice = -1; // 사용자 입력 메뉴를 저장하기 위한 변수

		//할 일이 10개로 다 차면 종료함
		if (taskCount == 10) {
			printf("할 일이 다 찼습니다. 프로그램을 종료합니다.\n");
			break;
		}

		// 사용자에게 메뉴를 출력, 메뉴를 입력받기
		printf("------------------\n");
		printf("메뉴를 입력해주세요.\n");;
		printf("1. 할 일 추가\n2. 할 일 삭제\n3. 목록 보기\n4. 종료\n5.할 일 수정\n");
		printf("현재 할 일 수 = %d\n", taskCount);
		printf("------------------\n");
		scanf_s("%d", &choice);

		int terminate = 0; // 1이면 종료
		int delIndex = -1;  // 할 일 삭제를 위한 index 저장 변수
		int changeIndex = -1; // 할 일 수정을 위한 index 저장 변수

		// 입력에 따른 기능 수행
		switch (choice) {
		case 1:
			printf("할 일을 입력하세요 (공백 없이 입력하세요): ");
			scanf_s("%s", tasks[taskCount], (int)sizeof(tasks[taskCount]));
			printf("할 일 ""%s""가 저장되었습니다\n\n", tasks[taskCount]);
			taskCount++;
			break;
		case 2:
			// 할 일 삭제하는 코드 블록 
			printf("삭제할 할 일의 번호를 입력해주세요. (1부터 시작):");
			scanf_s("%d", &delIndex);
			if (delIndex > taskCount || delIndex <= 0) {
				printf("삭제 범위가 벗어났습니다.\n");
			}
			else {
				printf("%d. %s : 할 일을 삭제합니다.\n", delIndex, tasks[delIndex - 1]);

				// 배열간 대입 (=배열에 문자 배열인 문자열의 대입) 이 불가능하기 때문에
				// 문자열 복사 함수로 삭제
				strcpy_s(tasks[delIndex - 1], sizeof(tasks[delIndex - 1]), "");

				// 특정 인덱스의 할 일 삭제 후 뒤에 있는 할 일 앞으로 옮기기
				for (int i = delIndex; i < taskCount + 1; i++) {
					strcpy_s(tasks[i - 1], sizeof(tasks[i]), tasks[i]);
				}
				taskCount -= 1;
			}
			break;
		case 3:
			printf("할 일 목록\n");
			for (int i = 0; i < taskCount; i++) {
				printf("%d. %s \n", i + 1, tasks[i]);
			}
			printf("\n");
			break;
		case 4:
			terminate = 1;
			break;
		case 5:
			//수정할 할 일의 번호를 입력 받음
			printf("수정할 할 일의 번호를 입력해주세요. (1부터 시작):");
			scanf_s("%d", &changeIndex);
			if (changeIndex > taskCount || changeIndex <= 0) { //입력받은 수정할 할 일의 번호가 정상적인 값인지 확인
				printf("수정 범위가 벗어났습니다.\n"); //입력받은 수정할 할 일의 번호가 정상적이지 않은 경우
			}
			else //입력받은 수정할 할 일의 번호가 정상적인 경우
			{
				printf("수정할 할 일을 입력하세요 (공백 없이 입력하세요): ");
				scanf_s("%s", tasks[changeIndex - 1], (int)sizeof(tasks[changeIndex - 1]));
				printf("할 일 ""%s""가 저장되었습니다\n\n", tasks[changeIndex - 1]);
				changeIndex = -1;
			}
			break;
		default:
			printf("잘못된 선택입니다. 다시 선택하세요.\n"); //1~5이외의 메뉴를 입력했을 때
		}

		if (terminate == 1) {
			printf("종료를 선택하셨습니다. 프로그램을 종료합니다.\n");
			break;
		}
	}
}