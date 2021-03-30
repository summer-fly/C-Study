#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>



//int main()
//{
//	char ch = 'a';
//	char* pc = &ch;
//
//	return 0;
//}

//int main()
//{
//	char arr[] = "abcdef";
//	char* pc = arr;
//	printf("%s\n", arr);
//	printf("%s\n", pc);
//
//	return 0;
//}

//int main()
//{
//	char* p = "abcdef";  // "abcdef"是个常量字符串,不能够修改
//	*p = 'w';
//	printf("%s\n", p);
//
//	return 0;
//}


//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "abcdef";
//	const char* p1 = "abcdef";
//	const char* p2 = "abcdef";
//
//	/*if (arr1 == arr2)
//	{
//		printf("hehe\n");
//	}
//	else
//	{
//		printf("haha\n");
//	}*/
//
//	if (p1 == p2)
//	{
//		printf("hehe\n");
//	}
//	else
//	{
//		printf("haha\n");
//	}
//
//
//
//	return 0;
//}


//指针数组本质上是数组,用来存放指针

//int main()
//{
//	int arr[10] = { 0 };   //整型数组
//	char arr2[10] = { 0 };  //字符数组
//	int* parr[4];   //存放整型指针的数组 - 指针数组
//	char* pch[5];   //存放字符指针的数组 - 指针数组
//
//
//	return 0;
//}


//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = 30;
//	int d = 40;
//	int* arr[4] = { &a,&b,&c,&d };
//
//
//
//
//
//	return 0;
//}




//int main()
//{
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[] = { 2,3,4,5,6 };
//	int arr3[] = { 3,4,5,6,7 };
//
//	int* parr[] = { arr1,arr2,arr3 };
//	for (int i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 5; j++)
//		{
//			printf("%d ", *(parr[i] + j));
//		}
//		printf("\n");
//	}
//
//
//
//
//	return 0;
//}




//数组指针实际上是指针


//int main()
//{
//	int* p=NULL;      //整型指针 - 指向整型的指针 - 可以存放整型的地址
//	char* pc = NULL;  //字符指针 - 指向字符的指针 - 可以存放字符的地址
//	                 //数组指针 - 指向数组的指针 - 可以存放数组的地址
//	//int arr[10] = { 0 };
//	//arr - 首元素的地址
//	//&arr[0] - 首元素的地址
//	//&arr - 数组的地址
//
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int(*p)[10] = &arr; //数组地址存储起来
//	//上面的p就是数组指针
//
//	return 0;
//}


//int main()
//{
//	char* arr[5];
//	char* (*pa)[5]=&arr;
//
//
//	return 0;
//}


//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int(*pa)[10] = &arr;
//	/*printf("%p\n", *pa);*/
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ",(*pa)[i]);
//	}
//
//
//
//	return 0;
//}

void print1(int arr[3][5], int x, int y)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < x; i++)
	{
		for (j = 0; j < y; j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
}

//参数是指针的形式
void print2(int(*p)[5], int x, int y)
{
	int i = 0;
	for (i = 0; i < x; i++)
	{
		int j = 0;
		for (j = 0;j < y; j++)
		{
			printf("%d ",*(*(p + i) + j));
		}
		printf("\n");
		
	}
}
int main()
{
	int arr[3][5] = { {1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7} };
	//print1(arr,3,5);  //arr  - 数组名 -就是数组的首元素地址
	print2(arr,3,5);
	return 0;
}