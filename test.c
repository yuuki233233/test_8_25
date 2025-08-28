#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>


//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf_s("%d", &a);
//
//	while (a > 0)
//	{
//		a /= 10;
//		b++;
//	}
//	printf("%d\n", b);
//	return 0;
//}



//int main()
//{
//	int i = 0;
//	while (i <= 10)
//	{
//		printf("%d ", i);
//		i++;
//		if (i == 5)
//		{
//			break;
//		}
//	}
//}



#include<math.h>
int main()
{
	for (int a = 101; a <= 200; a+=2)
	{
		int j = 0;
		int flag = 1;
		for (int j = 2; j < sqrt(a); j++)
		{
			if (a % j == 0)
			{
				flag = 0;
				break;
			}
		}
		if (flag == 1)
		{
			printf("%d ", a);
		}
	}
	return 0;
}