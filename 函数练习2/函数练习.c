//1写一个函数实现一个整形有序数组的二分查找
//普通方法
#include<stdio.h>
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 }; 
//	int k = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int left = 0;
//	int right = sz - 1;
//
//	while (left<=right)
//	{
//		int mid = (left + right) / 2;
//		if (k < arr[mid])
//		{
//			right = mid - 1;
//		}
//		else if (k > arr[mid])
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			printf("找到了，下标是 %d ",mid);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("找不到\n");
//	}
//	return 0;
//}
//函数方法
//int binary_search(int arr[], int k, int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			return mid;
//			break;
//		}
//	}
//    return -1;
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int k = 7;
//	int ret = binary_search(arr, k, sz);
//	if (ret == -1)
//	{
//		printf("找不到指定数\n");
//	}
//	else
//	{
//		printf("找到了，下标是 %d\n", ret);
//	}
//	return 0;
//}
//2写一个函数，每调用这个函数一次，就会将其值增加1
void ADD(int* p)
{
	(*p)++;
}
int main()
{
	int num = 0;
	ADD(&num);
	printf("%d\n", num);
	ADD(&num);
	printf("%d\n", num);
	ADD(&num);
	printf("%d\n", num);
	return 0;
}