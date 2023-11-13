#include <stdio.h>
#define STUDENTS 5 //��� ����

void classifyStudents(int *scores, char targetGrade) { //������ ���� grade�� �Ű���. grade�� targetGrade�� ������ ���
	printf("�л� ���� �з�:\n");
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
			printf("%d �л��� %c ������ �޾ҽ��ϴ�.\n", i + 1, targetGrade);
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
	return (double)sum / (double)STUDENTS; //������ ��ü �л����� ������ ��� ����
}

void printRanks(int *scores) {
	for (int i = 0; i < STUDENTS; i++){
		int rank = 0;
		for (int j = 0; j < STUDENTS; j++) if (*(scores + i) <= *(scores + j)){
			rank += 1; } //������ ���ų� ���� ����� �� ��ŭ rank�� ����
		printf("%d �л��� ������ %d �Դϴ�.\n", i + 1, rank);
		}
}

int main() {
	//�л����� ������ ������ �迭 ����
	int scores[STUDENTS];

	//�л����� ���� �Է¹ޱ�
	for (int i = 0; i < STUDENTS; i++) {
		printf("�л� %d�� ������ �Է��ϼ���: ", i + 1);
		scanf_s("%d", &*(scores + i));
	}

	char ch = getchar(); //���� �ӽ� ���� ����, ��������� ����

	char target;
	printf("Ư�� ���� (A,B,C,D,F)�� �Է��Ͻÿ� ");
	scanf_s("%c", &target, 1);

	classifyStudents(scores, target);

	int sum = sumScores(scores);
	double average = averageScores(sum);
	printf("�л����� ����� �� ���� %d�̰�, ��� ���� %lf�Դϴ�.\n", sum, average);

	printRanks(scores);

	return 0;
}