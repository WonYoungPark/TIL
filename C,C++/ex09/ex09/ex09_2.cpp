/*
2. ü��(kg, �Ǽ�)�� Ű(m, �Ǽ�)�� �Է¹޾Ƽ� ü���� ������ ���ϴ� ���α׷��� ����� ������.
*/

#include <stdio.h>

int main() {
	float t, w;

	printf("ü���� �Է��ϼ���.(����:kg) : ");
	scanf_s("%f", &w);
	printf("Ű�� �Է��ϼ���. (����:m) : ");
	scanf_s("%f", &t);

	float bmi = w / (t*t);

	printf("����� ü���� ������ %.3f�Դϴ�.", bmi);
}