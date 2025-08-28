#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void printArray(int* arr, int len)
{
	for (int i = 0; i < len; i++) {
		printf("%d ", arr[i]);
	}
}

int findMax(int* arr, int len)
{
	int max = arr[0];
	for (int j = 1; j < len; j++) {
		if (arr[j] > max) {
			max = arr[j];
		}
	}
	return max;
}

void reverseArray(int* arr, int len)
{
	for (int i = 0; i < len / 2; i++) {
		int temp = arr[i];
		arr[i] = arr[len - 1 - i];
		arr[len - 1 - i] = temp;
	}
}

int main()
{
	int nums[] = { 1, 2, 3, 4, 5 };
	int len = sizeof(nums) / sizeof(nums[0]);

	printf("��ӡ������:");
	printArray(nums, len);

	printf("�������ֵ:");
	int a = findMax(nums, len);
	printf("%d\n", a);

	printf("�����������: ");
	reverseArray(nums, len);
	printArray(nums, len);

	return 0;
}





//��׼��
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//// 1. ��ӡ���麯��
//void printArray(int* arr, int len) {
//    for (int i = 0; i < len; i++) {
//        printf("%d ", arr[i]); // Ҳ������ *(arr + i)
//    }
//    printf("\n");
//}
//
//// 2. �������ֵ����
//int findMax(int* arr, int len) {
//    int max = arr[0]; // �����һ��Ԫ�������ֵ
//    for (int i = 1; i < len; i++) {
//        if (arr[i] > max) {
//            max = arr[i]; // �ҵ�����ģ��������ֵ
//        }
//    }
//    return max;
//}
//
// 3. ��ת���麯��
//void reverseArray(int* arr, int len) {
//    int temp;
//    for (int i = 0; i < len / 2; i++) { // ֻ��Ҫ����ǰ�벿��
//        // ������i���͵�����i��Ԫ��
//        temp = arr[i];
//        arr[i] = arr[len - 1 - i];
//        arr[len - 1 - i] = temp;
//    }
//}
//
//int main() {
//    int nums[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//    int length = sizeof(nums) / sizeof(nums[0]);
//
//    printf("ԭʼ���飺");
//    printArray(nums, length);
//
//    int max = findMax(nums, length);
//    printf("�������ֵ��%d\n", max);
//
//    reverseArray(nums, length);
//    printf("��ת������飺");
//    printArray(nums, length);
//
//    return 0;
//}