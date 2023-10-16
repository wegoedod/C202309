#include <stdio.h>
#define NUMCITY 3
#define NUMPEOPLE 2

char names[NUMPEOPLE][10];
char cities[NUMCITY][10];

void calculateTravelDays();
int getSum(int travelDays[]) { //travelDays[]�� �ִ� ���� ���� ����
	int sum = 0;
	for (int i = 0; i < NUMPEOPLE; i++) {
		sum += travelDays[i];
	}
	return sum;
}
int getAverage(int totalday) { //��ü �� ���� ��� ���� ����
	return totalday / NUMPEOPLE;
};
void getFamousCity(double averageDays[]) { // ���� ����ϼ��� ū ���ø� �����
	double famday = averageDays[0];
	int famcity = 0;
	for (int i = 0; i < NUMCITY; i++) {
		if (averageDays[i] >= famday) {
			famday = averageDays[i];
			famcity = i;
		}
	}
		printf("����� �������� ���� �α��־��� ���ô� %s�Դϴ�. (��� �ӹ� ��:%.2f)", cities[famcity], famday);
};

int main() {
	// ���ø� �Է� ����
	printf("%d���� ���ø��� ���ʴ�� �Է����ּ���. \n", NUMCITY);
	for (int i = 0; i < NUMCITY; i++) {
		scanf_s("%s", cities[i], (int)sizeof(cities[i]));
	}
	// ������ �̸� �Է� ����
	printf("%d���� ������ �̸��� ���ʴ�� �Է����ּ���. \n", NUMPEOPLE);
	for (int i = 0; i < NUMPEOPLE; i++) {
		scanf_s("%s", names[i], (int)sizeof(names[i]));
	}

	calculateTravelDays();

	return 0;
}

void calculateTravelDays() {
	int travelDays[NUMCITY][NUMPEOPLE];

	// ���� ���� ����� ���� �� �� �Է¹ޱ�
	for (int i = 0; i < NUMCITY; i++) {
		for (int j = 0; j < NUMPEOPLE; j++) {
			printf("���ÿ��� %s���� ��� %s�� ���� �� ���� �Է��ϼ���: ", cities[i], names[j]);
			scanf_s("%d", &travelDays[i][j]);
		}
	}
	double averageDays[NUMCITY];
	// ���� ���� ���� ��� ���� ���
	for (int i = 0; i < NUMCITY; i++) {
		int totalDay = getSum(travelDays[i]);
		double averageDay = getAverage(totalDay);
		printf("���� %s���� ���� �� �ϼ� : %d, ��� �� �� : %.2f\n", cities[i], totalDay, averageDay);
		averageDays[i] = averageDay;
	}
	getFamousCity(averageDays); //getFamousCity�Լ� ȣ��
}
