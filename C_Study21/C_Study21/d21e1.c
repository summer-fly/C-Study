#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>



//int main()
//{
//
//	int arr[10] = { 1,2,3 };  //不完全初始化,剩下默认为0
//	char arr2[5] = { 'a','b'};
//	char arr3[5] = "abc";    //这种初始化也是可以的
//	char arr4[] = "abcdef";  //不给定元素数目 未给大小的必须初始化
//	printf("%s\n", arr4);
//	printf("%d\n", sizeof(arr4)); //sizeof计算arr4所占空间的大小 7*1=7
//	printf("%d\n", strlen(arr4)); //strlen求字符串长度，到\0就停止了
//
//
//
//
//
//	return 0;
//}

//1. strlen 与sizeof没有什么关系
//2. strlen 只能用来求字符串的长度   -是库函数 需要引用头文件
//3. sizeof 是计算变量，数组，类型的大小-单位是字节  -操作符 不需要引用头文件


//int main()
//{
//	char arr1[] = "abc";    // 元素有 a b c \0
//	char arr2[] = { 'a','b','c' };   //元素只有 a b c
//	printf("%d\n", sizeof(arr1));
//	printf("%d\n", sizeof(arr2));
//	printf("%d\n", strlen(arr1));
//	printf("%d\n", strlen(arr2)); //随机值
//
//
//
//
//	return 0;
//}

//int main()
//{
//	//char arr[] = "abcdef";
//	///*printf("%c", arr[3]);*/
//	//int i;
//	//for (i = 0;i < (int)strlen(arr);i++)
//	//{
//	//	printf("%c\n",arr[i]);
//	//}
//	int arr[]={ 1,2,3,4,5,6,7,8,9 };
//	int n = sizeof(arr)/sizeof(arr[0]);
//	int i;
//	for (i = 0; i < n; i++)
//	{
//		printf("%d\0", arr[i]);
//	}
//
//
//
//	return 0;
//}

//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%p \n", &arr[i]);
//	}
//	return 0;
//}

//int main()
//{
//	int arr[3][4] = { { 1,2,3 },{4, 5} };  //不完全初始化
//	int i,j;
//	for (i = 0; i < 3; i++)
//	{
//		
//		for (j = 0; j< 4; j++)
//		{
//			printf("%d", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

int main()
{
	int arr[3][4] = { { 1,2,3 },{4, 5} };  //不完全初始化
	int i, j;
	for (i = 0; i < 3; i++)
	{

		for (j = 0; j < 4; j++)
		{
			printf("%p ", &arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}