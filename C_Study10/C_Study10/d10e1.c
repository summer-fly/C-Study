#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//二分查找有序数组方法
int main ()
{
	int k = 17;
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };    
	int sz = sizeof(arr) / sizeof(arr[0]);    //计算元素数目
	int left = 0;                            //左下标
	int right = sz-1;                        //右下标
	while (left<=right)
	{
		int mid = (left + right) / 2;
		if (arr[mid] > k)
		{
			right = mid - 1;

		}
		else if (arr[mid] < k)
		{
			left = mid + 1;

		}
		else if (arr[mid] == k)
		{
			printf("找到了，下标是 %d", mid);
			break;
		}
	}
	if (left > right)
	{
		printf("找不到！");
	}
	return 0;
}

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int a=5;
//	int i;
//	//scanf("你要找的数字是：%d\n", &a);
//	int z = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i<z; i++)
//	{
//		if (arr[i] == a)
//		{
//			printf("下标是 %d", i);
//			break;
//		}
//		
//	}
//	if (i == z)
//	{
//		printf("zhoabudao ");
//	}
//	return 0;
//}