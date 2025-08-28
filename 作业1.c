#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int Add(int x, int y)
{
	return x + y;
}

int subtract(int x, int y)
{
	return x - y;
}

int multiply(int x, int y)
{
	return x * y;
}

int divide(int x, int y)
{
	if (y != 0) {
		return x / y;
	}
	else {
		printf("±¨´í");
		return 0;
	}
}
int main()
{
	int a = 0, b = 0;
	scanf_s("%d %d", &a, &b);

	int c = Add(a, b);
	printf("%d\n", c);

	int d = subtract(a, b);
	printf("%d\n", d);

	int f = divide(a, b);
	printf("%d\n", f);

	int g = multiply(a, b);
	printf("%d\n", g);

	return 0;
}