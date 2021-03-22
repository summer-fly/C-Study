#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>



//int main()
//{
//	int arr[10] = { 0 };
//	printf("%p\n", arr);    //地址-首元素地址
//	printf("%p\n", arr+1);
//	printf("%p\n", &arr[0]);  //地址-首元素地址
//	printf("%p\n", &arr[0]+1);
//	printf("%p\n", &arr);       //不是首元素地址！！！是整个数组的地址
//	printf("%p\n", &arr+1);
//
//
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;
//	/*printf("%p", p);*/
//	/*for (int i = 0; i < 10; i++)
//	{
//		printf("%p ====== %p\n",p+i,&arr[i]);
//	}*/
//
//	for (int i = 0; i < 10; i++)
//	{
//		*(p + i) = i;
//	}
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d", *(p+i));
//	}
//
//
//
//
//	return 0;
//}


//int main()
//{
//	int a = 10;
//	int* pa=&a;                //pa - 一级指针
//	int** ppa = &pa;           //ppa - 二级指针
//	int*** pppa = &ppa;        //pppa - 三级指针
//	printf("%d", **ppa);
//
//	return 0;
//}



//指针数组 --数组 -存放指针的数组
//数组指针 --指针
int main()
{
	int a = 10;
	int b = 20;
	int c = 30;
	//int* pa = &a;
	//int* pb = &b;
	//int* pc = &c;
	
	int* arr[3] = { &a,&b,&c };
	for (int i = 0; i < 3; i++)
	{
		printf("%p\n", arr[i]);
	}
	



	return 0;
}