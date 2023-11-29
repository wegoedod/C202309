#include <stdio.h> 
#include <stdlib.h>
#include <string.h>

struct StudentScore
{
	char* name;
	int score;
};
void initializeStudentScore(struct StudentScore* student) {
	printf("�̸��� �Է��ϼ���: ");
	char temp[100];
	scanf_s("%s", temp, (int)sizeof(temp));
	student->name = (char*)malloc((strlen(temp) + 1) * sizeof(char));
	strcpy_s(student->name, strlen(temp) + 1, temp);

	printf("�л� %s�� ������ �Է��ϼ���: ", student->name);
	scanf_s("%d", &student->score);
}

void classifystudents(struct StudentScore* students, char targetGrade,int numStudents) { //������ ���� grade�� �Ű���. grade�� targetGrade�� ������ ���
	printf("�л� ���� �з�:\n");
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
			printf("%s �л��� %c ������ �޾ҽ��ϴ�.\n", students[i].name, targetGrade);
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
	return (double)sum / (double)numStudents; //������ ��ü �л����� ������ ��� ����
}

void printRanks(struct StudentScore* students, int numStudents) {
	for (int i = 0; i < numStudents; i++) {
		int rank = 0;
		for (int j = 0; j < numStudents; j++) if (students[i].score <= students[j].score) {
			rank += 1;
		} //������ ���ų� ���� ����� �� ��ŭ rank�� ����
		printf("%s �л��� ������ %d �Դϴ�.\n", students[i].name, rank);
	}
}

int main() {
	int numStudents;
	printf("�л� ���� �Է��ϼ���: ");
	scanf_s("%d", &numStudents);
	//�л����� ������ ������ �迭 ����

	struct StudentScore* students = (struct StudentScore*)malloc(numStudents * sizeof(struct StudentScore));

	//�л����� ���� �Է¹ޱ�
	for (int i = 0; i < numStudents; i++) {
		printf("\n%d�� �л�\n",i+1);
		initializeStudentScore(&students[i]);
	}


	char target;
	printf("Ư�� ���� (A,B,C,D,F)�� �Է��Ͻÿ� ");
	scanf_s(" %c", &target, 1);

	classifystudents(students, target, numStudents);

	int sum = sumScores(students, numStudents);
	double average = averageScores(sum, numStudents);
	printf("�л����� ������ �� ���� %d�̰�, ��� ���� %lf�Դϴ�.\n", sum, average);

	printRanks(students, numStudents);

	for (int i = 0; i < numStudents;i++) {
		free(students[i].name);
	}
	free(students);

	return 0;
}