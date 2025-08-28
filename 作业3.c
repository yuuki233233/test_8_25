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

	printf("打印的数组:");
	printArray(nums, len);

	printf("数组最大值:");
	int a = findMax(nums, len);
	printf("%d\n", a);

	printf("交换后的数组: ");
	reverseArray(nums, len);
	printArray(nums, len);

	return 0;
}





//标准答案
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//// 1. 打印数组函数
//void printArray(int* arr, int len) {
//    for (int i = 0; i < len; i++) {
//        printf("%d ", arr[i]); // 也可以用 *(arr + i)
//    }
//    printf("\n");
//}
//
//// 2. 查找最大值函数
//int findMax(int* arr, int len) {
//    int max = arr[0]; // 假设第一个元素是最大值
//    for (int i = 1; i < len; i++) {
//        if (arr[i] > max) {
//            max = arr[i]; // 找到更大的，更新最大值
//        }
//    }
//    return max;
//}
//
// 3. 反转数组函数
//void reverseArray(int* arr, int len) {
//    int temp;
//    for (int i = 0; i < len / 2; i++) { // 只需要交换前半部分
//        // 交换第i个和倒数第i个元素
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
//    printf("原始数组：");
//    printArray(nums, length);
//
//    int max = findMax(nums, length);
//    printf("数组最大值：%d\n", max);
//
//    reverseArray(nums, length);
//    printf("反转后的数组：");
//    printArray(nums, length);
//
//    return 0;
//}