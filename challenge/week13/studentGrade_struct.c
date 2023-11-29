#include <stdio.h> 
#include <stdlib.h>
#include <string.h>

struct StudentScore
{
	char* name;
	int score;
};
void initializeStudentScore(struct StudentScore* student) {
	printf("이름을 입력하세요: ");
	char temp[100];
	scanf_s("%s", temp, (int)sizeof(temp));
	student->name = (char*)malloc((strlen(temp) + 1) * sizeof(char));
	strcpy_s(student->name, strlen(temp) + 1, temp);

	printf("학생 %s의 성적을 입력하세요: ", student->name);
	scanf_s("%d", &student->score);
}

void classifystudents(struct StudentScore* students, char targetGrade,int numStudents) { //점수에 따라 grade가 매겨짐. grade가 targetGrade와 같으면 출력
	printf("학생 성적 분류:\n");
	char grade = ' ';
	for (int i = 0; i < numStudents; i++) {
		if (students[i].score >= 90) {
			grade = 'A';
		}
		else if (students[i].score >= 80) {
			grade = 'B';
		}
		else if (students[i].score >= 70) {
			grade = 'C';
		}
		else if (students[i].score >= 60) {
			grade = 'D';
		}
		else {
			grade = 'F';
		}

		if (targetGrade == grade) {
			printf("%s 학생은 %c 점수를 받았습니다.\n", students[i].name, targetGrade);
		}
	}
}

int sumScores(struct StudentScore* students, int numStudents) {
	int sum = 0;
	for (int i = 0; i < numStudents; i++) {
		sum += students[i].score;
	}
	return sum;
}

double averageScores(int sum,int numStudents) {
	return (double)sum / (double)numStudents; //총합을 전체 학생수로 나눠서 평균 구함
}

void printRanks(struct StudentScore* students, int numStudents) {
	for (int i = 0; i < numStudents; i++) {
		int rank = 0;
		for (int j = 0; j < numStudents; j++) if (students[i].score <= students[j].score) {
			rank += 1;
		} //점수가 높거나 같은 사람의 수 많큼 rank에 더함
		printf("%s 학생의 순위는 %d 입니다.\n", students[i].name, rank);
	}
}

int main() {
	int numStudents;
	printf("학생 수를 입력하세요: ");
	scanf_s("%d", &numStudents);
	//학생들의 성적을 저장할 배열 선언

	struct StudentScore* students = (struct StudentScore*)malloc(numStudents * sizeof(struct StudentScore));

	//학생들의 성적 입력받기
	for (int i = 0; i < numStudents; i++) {
		printf("\n%d번 학생\n",i+1);
		initializeStudentScore(&students[i]);
	}


	char target;
	printf("특정 점수 (A,B,C,D,F)를 입력하시오 ");
	scanf_s(" %c", &target, 1);

	classifystudents(students, target, numStudents);

	int sum = sumScores(students, numStudents);
	double average = averageScores(sum, numStudents);
	printf("학생들의 점수의 총 합은 %d이고, 평균 값은 %lf입니다.\n", sum, average);

	printRanks(students, numStudents);

	for (int i = 0; i < numStudents;i++) {
		free(students[i].name);
	}
	free(students);

	return 0;
}