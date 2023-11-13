#include <stdio.h>
#define STUDENTS 5 //상수 생성

void classifyStudents(int *scores, char targetGrade) { //점수에 따라 grade가 매겨짐. grade가 targetGrade와 같으면 출력
	printf("학생 성적 분류:\n");
	char grade = ' ';
	for (int i = 0; i < STUDENTS; i++) {
		if (*(scores+i) >= 90) {
			grade = 'A';
		}
		else if (*(scores + i) >= 80) {
			grade = 'B';
		}
		else if (*(scores + i) >= 70) {
			grade = 'C';
		}
		else if (*(scores + i) >= 60) {
			grade = 'D';
		}
		else {
			grade = 'F';
		}

		if (targetGrade == grade) {
			printf("%d 학생은 %c 점수를 받았습니다.\n", i + 1, targetGrade);
		}
	}
}

int sumScores(int *scores) {
	int sum = 0;
	for (int i = 0; i < STUDENTS; i++) {
		sum += *(scores + i);
	}
	return sum;
}

double averageScores(int sum) {
	return (double)sum / (double)STUDENTS; //총합을 전체 학생수로 나눠서 평균 구함
}

void printRanks(int *scores) {
	for (int i = 0; i < STUDENTS; i++){
		int rank = 0;
		for (int j = 0; j < STUDENTS; j++) if (*(scores + i) <= *(scores + j)){
			rank += 1; } //점수가 높거나 같은 사람의 수 많큼 rank에 더함
		printf("%d 학생의 순위는 %d 입니다.\n", i + 1, rank);
		}
}

int main() {
	//학생들의 성적을 저장할 배열 선언
	int scores[STUDENTS];

	//학생들의 성적 입력받기
	for (int i = 0; i < STUDENTS; i++) {
		printf("학생 %d의 성적을 입력하세요: ", i + 1);
		scanf_s("%d", &*(scores + i));
	}

	char ch = getchar(); //버퍼 임시 저장 변수, 엔터지우기 위해

	char target;
	printf("특정 점수 (A,B,C,D,F)를 입력하시오 ");
	scanf_s("%c", &target, 1);

	classifyStudents(scores, target);

	int sum = sumScores(scores);
	double average = averageScores(sum);
	printf("학생들의 잠수의 총 합은 %d이고, 평균 값은 %lf입니다.\n", sum, average);

	printRanks(scores);

	return 0;
}