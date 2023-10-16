#include <stdio.h>
#define NUMCITY 3
#define NUMPEOPLE 2

char names[NUMPEOPLE][10];
char cities[NUMCITY][10];

void calculateTravelDays();
int getSum(int travelDays[]) { //travelDays[]에 있는 값을 전부 더함
	int sum = 0;
	for (int i = 0; i < NUMPEOPLE; i++) {
		sum += travelDays[i];
	}
	return sum;
}
int getAverage(int totalday) { //전체 일 수를 사람 수로 나눔
	return totalday / NUMPEOPLE;
};
void getFamousCity(double averageDays[]) { // 가장 평균일수가 큰 도시를 출력함
	double famday = averageDays[0];
	int famcity = 0;
	for (int i = 0; i < NUMCITY; i++) {
		if (averageDays[i] >= famday) {
			famday = averageDays[i];
			famcity = i;
		}
	}
		printf("평균일 기준으로 가장 인기있었던 도시는 %s입니다. (평균 머문 일:%.2f)", cities[famcity], famday);
};

int main() {
	// 도시명 입력 받음
	printf("%d개의 도시명을 차례대로 입력해주세요. \n", NUMCITY);
	for (int i = 0; i < NUMCITY; i++) {
		scanf_s("%s", cities[i], (int)sizeof(cities[i]));
	}
	// 여행자 이름 입력 받음
	printf("%d개의 여행자 이름을 차례대로 입력해주세요. \n", NUMPEOPLE);
	for (int i = 0; i < NUMPEOPLE; i++) {
		scanf_s("%s", names[i], (int)sizeof(names[i]));
	}

	calculateTravelDays();

	return 0;
}

void calculateTravelDays() {
	int travelDays[NUMCITY][NUMPEOPLE];

	// 도시 별로 사람이 보낸 일 수 입력받기
	for (int i = 0; i < NUMCITY; i++) {
		for (int j = 0; j < NUMPEOPLE; j++) {
			printf("도시에서 %s에서 사람 %s가 보낸 일 수를 입력하세요: ", cities[i], names[j]);
			scanf_s("%d", &travelDays[i][j]);
		}
	}
	double averageDays[NUMCITY];
	// 도시 별로 보낸 평균 일자 출력
	for (int i = 0; i < NUMCITY; i++) {
		int totalDay = getSum(travelDays[i]);
		double averageDay = getAverage(totalDay);
		printf("도시 %s에서 보낸 총 일수 : %d, 평균 일 수 : %.2f\n", cities[i], totalDay, averageDay);
		averageDays[i] = averageDay;
	}
	getFamousCity(averageDays); //getFamousCity함수 호출
}
