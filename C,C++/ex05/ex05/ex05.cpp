#include <stdio.h>

int main() {
	// int: 32��Ʈ(4����Ʈ), ����
	/*int a = 5;
	int b = 3;

	int hap = a + b;
	int cha = a - b;
	int gop = a * b;
	int mok = a / b;
	int namuji = a % b;

	printf("%d + %d = %d\n", a, b, hap);
	printf("%d - %d = %d\n", a, b, cha);
	printf("%d * %d = %d\n", a, b, gop);
	printf("%d / %d = %d\n", a, b, mok);
	printf("%d %% %d = %d\n", a, b, namuji);
	*/

	// float: 32��Ʈ(4����Ʈ), �Ǽ� => ��Ȯ�� ���̷��� double(64��Ʈ) ���
	float a = 9.8;
	float b = 3.14;

	float hap = a + b;
	float cha = a - b;
	float gop = a * b;
	float mok = a / b;

	printf("%f + %f = %f\n", a, b, hap);
	printf("%f - %f = %f\n", a, b, cha);
	printf("%f * %f = %f\n", a, b, gop);
	printf("%f / %f = %f\n", a, b, mok);

	// �ε��Ҽ���(floating point)
}

/*
8��Ʈ = 1����Ʈ
����Ʈ: ��ǻ�Ϳ��� �����͸� ó���ϴ� ���� ���� ����

�ڷ��� - ������, �Ǽ���
������ - char(����, 1����Ʈ, 8��Ʈ), short(2����Ʈ), long(4����Ʈ), long long(8����Ʈ), int(long)
�Ǽ��� - float(4����Ʈ), double(8����Ʈ)

unsigned, signed
��ȣ���� ������ ���� : unsigned int a;

void: ���ϰ��� ���� �Լ��� �ڷ���

bool: ��/������ �����ϴ� �ڷ���(=char)
*/