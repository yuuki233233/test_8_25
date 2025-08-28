#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

double calculateAverage(int* arr, int len) {
	int sum = 0;  //定义一个和数
	for (int i = 0; i < len; i++) {
		sum += arr[i]; //for循环相加
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
		dest[i] = src[i];   //元素复制
	}
}

int main() {
	int numbers[] = { 10, 20, 30, 40, 50, 60, 70, 80, 90, 100 };
	int len = sizeof(numbers) / sizeof(numbers[0]);
	int copy[10];

	double avg = calculateAverage(numbers, len);
	printf("数组平均值:%.2f\n", avg);

	int target = 50;
	int pos = findElement(numbers, len, target);
	if (pos != -1) {
		printf("元素%d在数组中的位置:%d\n", target, pos);
	}
	else {
		printf("元素%d不在数组中\n", target);
	}

	copyArray(numbers , copy, len);
	printf("复制后的数组:");
	for (int i = 0; i < len; i++) {
		printf("%d ", copy[i]);
	}
	printf("\n");

	return 0;
}



//标准答案:
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//// 1. 打印数组函数
//void printArray(int* arr, int len) {
//	for (int i = 0; i < len; i++) {
//		printf("%d ", arr[i]); // 也可以用 *(arr + i)
//	}
//	printf("\n");
//}
//
//// 2. 查找最大值函数
//int findMax(int* arr, int len) {
//	int max = arr[0]; // 假设第一个元素是最大值
//	for (int i = 1; i < len; i++) {
//		if (arr[i] > max) {
//			max = arr[i]; // 找到更大的，更新最大值
//		}
//	}
//	return max;
//}
//
//// 3. 反转数组函数
//void reverseArray(int* arr, int len) {
//	int temp;
//	for (int i = 0; i < len / 2; i++) { // 只需要交换前半部分
//		// 交换第i个和倒数第i个元素
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
//	printf("原始数组：");
//	printArray(nums, length);
//
//	int max = findMax(nums, length);
//	printf("数组最大值：%d\n", max);
//
//	reverseArray(nums, length); 
//	printf("反转后的数组：");
//	printArray(nums, length);
//
//	return 0;
//}