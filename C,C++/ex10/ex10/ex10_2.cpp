#include <stdio.h>

int main() {
	int a = 5;

	a = a + 6;
	a += 6;
	a *= 7;
	a -= 5;
	a %= 5;

	// ��ġ
	a = a + 1;
	a += 1;
	a++;

	a = a - 1;
	a -= 1;
	a--;

	//��ġ
	++a;
	--a;

	int m = 10;
	int n;
	printf("==��ġ ���� ����==\n");
	n = ++m;
	printf("m: %d\n", m);
	printf("n: %d\n", n);

	int g = 10;
	int h;
	printf("==��ġ ���� ����==\n");
	h = g++;
	printf("g: %d\n", g);
	printf("h: %d\n", h);
}