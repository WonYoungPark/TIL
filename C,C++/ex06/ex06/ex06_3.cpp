// �� ��ȯ: �ڷ����� �ٸ� �ڷ������� �ٲٴ� �۾�

#include <stdio.h>

int main() {
	int math = 90, korean = 95, english = 96;
	int sum = math + korean + english;
	double avg = sum / 3; 

	printf("%f\n", avg); // ����:93.66667

}

/*
���� / ���� = ���� => 93.0000
�Ǽ� / ���� = �Ǽ�
1) double sum = math + korean + english;
2) double avg = (double)sum / 3; 
�Ǽ� / �Ǽ� = �Ǽ�


���� + ���� = ����
�Ǽ� + �Ǽ� = �Ǽ�
�Ǽ� + ���� = �Ǽ�
*/