#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>


//void bubble_sort(int arr[],int sz)
//{
//	//确定冒泡排序的趟数
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		int flag = 1;//假设这一趟要排的数据已经有序
//		int j;
//		for (j = 0; j < sz-1-i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp=arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//				flag = 0; //本趟排序的数据其实不完全有序
//			}
//		}
//		if (flag == 1)
//		{
//			break;
//		}
//	}
//}
//int main()
//{
//	int arr[] = { 19,8,27,6,5,44,23,20,1,0 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//对arr进行排序
//	//arr是数组，我们对arr进行传参，实际上传递过去的arr数组的首元素的地址 &arr[0]
//	bubble_sort(arr, sz);  //冒泡排序函数
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}


//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7 };
//	printf("%p\n", arr);     //第一个元素地址
//	printf("%p\n", &arr[0]); //第一个元素的地址
//	printf("%p\n", &arr);    //数组的地址，虽然在值一样，但是意义不一样
//	//1. sizeof(数组名)   数组名表示整个数组，计算的是整个数组的大小，单位是字节
//	//2. &数组名 ，数组名代表的是整个数组，&数组名，代表的是取出整个数组的地址
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//printf("%p\n", arr);
//	//printf("%p", &arr[0]);
//	return 0;
//
//}


//void bubble_sort(int arr[], int sz)  //创建冒泡排序函数 带入arr数组，循环次数为sz 提前算好带入函数
//{
//	int i;
//	for (i = 0; i < sz - 1; i++)
//	{
//		int j;
//		int flag = 1; //假定这个数组是有序的
//		for (j= 0; j < sz-1-i; j++)
//		{
//			if (arr[j] > arr[j + 1])   //进行调整
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//				flag = 0;
//			}
//		}
//		if (flag == 1)   //如果顺序是对的则跳出循环
//		{
//			break;
//		}
//	}
//
//}
//int main()
//{
//	int arr[] = { 12,23,45,34,55,25,88 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr,sz); //数组进入冒泡排序函数进行排序
//	int i;
//	for (i = 0; i < sz; i++)   //for循环电打印arr数组
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}



//void bubble_sort(int arr[],int sz)
//{
//	int i;
//	for (i = 0; i < sz - 1; i++)
//	{
//		int j;
//		int flag = 1;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp; \
//					flag = 1;
//			}
//		}
//		if (flag == 1)
//		{
//			break;
//		}
//	}
//}
//
//int main()
//{
//	int arr[] = { 12,34,56,78,90,99 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr, sz);
//	int i;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}


void bubble_sort(int arr[], int sz)
{
	int i;
	for (i = 0; i < sz - 1; i++)
	{
		int j;
		int flag = 1;
		for (j = 0; j < sz - 1 - i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
				flag = 0;
			}
			
		}
		if (flag == 1)
		{
			break;
		}

	}
}


int main()
{
	int arr[] = { 12,23,34,45,56,67,78,89,90 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	bubble_sort(arr, sz);
	int i;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}




	return 0;
}