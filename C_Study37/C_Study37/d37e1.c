#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>




//int ADD(int x,int y)
//{
//	return x + y;
//}
//int main()
//{
//	
//	int arr[10] = { 0 };
//	int(*p)[10] = &arr;  //取出数组的地址  数组指针
//	int (*pfarr[4])(int, int);   //pfarr是一个数组-函数指针数组
//	int (*(*ppfarr)[4])(int, int) = &pfarr;
//	                              //ppfarr 是一个数组指针，指针指向的数组有4个元素
//	                              //指向数组的每个元素的类型是一个函数指针 int(*）（int，int）
//
//
//
//
//	return 0;
//}


//void print(char* str)
//{
//	printf("eheh:%s\n",str);
//}
//void test(void(*p)(char*))
//{
//	printf("test\n");
//	p("bit");
//}
//
////回调函数
//int main()
//{
//	test(print);
//	return 0;
//}

//qsort()    //可以排序任意类型的数组  C语言的一个库函数




//int add(int x,int y)
//{
//	return x + y;
//}
//
//
//int main()
//{
//	//指针数组
//	int* arr[10];
//	//数组指针
//	int* (*pa)[10] = &arr;
//	//函数指针
//	int(*padd)(int, int) = add;   //&add
//	int sum = (*padd)(1, 2);    //调用函数方法1
//	int sum = padd(1, 2);       //调用函数方法2
//	
//
//	//函数指针的数组
//	int(*parr[5])(int, int);
//	//指向函数指针数组的指针
//	int(*(*parr)[5])(int, int)=&parr;
//
//
//	return 0;
//}


//回调函数 - 通过函数指针调用的函数
void bubble_sort(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz-1; i++)
	{
		//一趟冒泡排序
		int j=0
		for (j = 0; j < ; j++)
		{

		}

	}


}
int main()
{
	int arr[10] = { 9,8,7,5,6,2,3,4,1,0};
	int sz = sizeof(arr) / sizeof(arr[0]);   //计算数组的数目
	bubble_sort(arr, sz);
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		printf("%d ", arr[i]);
	}



	return 0;
}