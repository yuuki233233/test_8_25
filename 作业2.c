#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int isprime(int n);

int main()
{
	int count = 0;
	for (int a = 100; a <= 200; a++) {
		if (isprime(a)) {
				printf("%d ", a);
				count++;
			}
	}
	printf("\n100-200之间共有 %d 个质数\n",count);
	return 0;
}

int isprime(int n) {
	if (n <= 1) {
		return 0;
	}
	for (int i = 2; i < n; i++) {
		if (n % i == 0) {
			return 0;
		}
	}
	return 1;
	
}

//int isprime(int n)
//{
//	if (n <= 1) {
//		return 0;
//	}
//	int limit = sqrt(n);
//	for (int i = 2; i <= limit; i++) {
//		if (n % i == 0) {
//			return 0;
//		}
//	}
//	return 1;
//}


