#include<stdio.h>
void summation(double *a, double *b, double *result) {
	*result = *a + *b;
}
void substraction(double* a, double* b, double* result) {
	*result = *a - *b;
}
void multification(double* a, double* b, double* result) {
	*result = *a * *b;
}
void division(double* a, double* b, double* result) {
	*result = *a / *b;
}
int main() {
	double a = 2, b = 3;
	double result;
	summation(&a, &b, &result);
	printf("%.0lf + %.0lf = %.2lf \n", a, b, result);
	substraction(&a, &b, &result);
	printf("%.0lf - %.0lf = %.2lf \n", a, b, result);
	multification(&a, &b, &result);
	printf("%.0lf * %.0lf = %.2lf \n", a, b, result);
	division(&a, &b, &result);
	printf("%.0lf / %.0lf = %.2lf \n", a, b, result);
	return 0;
}