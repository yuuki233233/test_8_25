#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

double calculateAverage(int* arr, int len) {
	int sum = 0;  //����һ������
	for (int i = 0; i < len; i++) {
		sum += arr[i]; //forѭ�����
	}
	return (double)sum / len; //no    printf("%d\n", sum / len);
}

int findElement(int* arr, int len, int terget) {
	//no   scanf_s("%d", &terget);
	for (int i = 0; i < len; i++) {
		if (terget == arr[i]) {
			return i;
		}   
	}
	return -1;//no  return 0;
}

void copyArray(int* src, int* dest, int len) {
	for (int i = 0; i < len; i++) {
		dest[i] = src[i];   //Ԫ�ظ���
	}
}

int main() {
	int numbers[] = { 10, 20, 30, 40, 50, 60, 70, 80, 90, 100 };
	int len = sizeof(numbers) / sizeof(numbers[0]);
	int copy[10];

	double avg = calculateAverage(numbers, len);
	printf("����ƽ��ֵ:%.2f\n", avg);

	int target = 50;
	int pos = findElement(numbers, len, target);
	if (pos != -1) {
		printf("Ԫ��%d�������е�λ��:%d\n", target, pos);
	}
	else {
		printf("Ԫ��%d����������\n", target);
	}

	copyArray(numbers , copy, len);
	printf("���ƺ������:");
	for (int i = 0; i < len; i++) {
		printf("%d ", copy[i]);
	}
	printf("\n");

	return 0;
}



//��׼��:
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//// 1. ��ӡ���麯��
//void printArray(int* arr, int len) {
//	for (int i = 0; i < len; i++) {
//		printf("%d ", arr[i]); // Ҳ������ *(arr + i)
//	}
//	printf("\n");
//}
//
//// 2. �������ֵ����
//int findMax(int* arr, int len) {
//	int max = arr[0]; // �����һ��Ԫ�������ֵ
//	for (int i = 1; i < len; i++) {
//		if (arr[i] > max) {
//			max = arr[i]; // �ҵ�����ģ��������ֵ
//		}
//	}
//	return max;
//}
//
//// 3. ��ת���麯��
//void reverseArray(int* arr, int len) {
//	int temp;
//	for (int i = 0; i < len / 2; i++) { // ֻ��Ҫ����ǰ�벿��
//		// ������i���͵�����i��Ԫ��
//		temp = arr[i];
//		arr[i] = arr[len - 1 - i];
//		arr[len - 1 - i] = temp;
//	}
//}
//
//int main() {
//	int nums[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int length = sizeof(nums) / sizeof(nums[0]);
//
//	printf("ԭʼ���飺");
//	printArray(nums, length);
//
//	int max = findMax(nums, length);
//	printf("�������ֵ��%d\n", max);
//
//	reverseArray(nums, length); 
//	printf("��ת������飺");
//	printArray(nums, length);
//
//	return 0;
//}