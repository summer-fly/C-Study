#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>

//void test(int arr[3][5])
//{
//
//}

//void test(int* arr) //err
//{}


//void test(int(*arr)[5])
//{}
//int main()
//{
//	int arr[3][5] = { 0 };
//	test(arr);
//
//	return 0;
//}

//void test(int **p)
//{
//
//}
//int main()
//{
//	int* ptr;
//	test(&ptr);
//
//
//
//	return 0;
//}


//函数指针 - 指向函数的指针

//int ADD(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	//printf("%d\n",ADD(a, b));
//	printf("%p\n", &ADD);
//	printf("%p\n", ADD);  //函数ADD与&ADD都是函数的地址
//
//
//	int (*pa)(int, int) = &ADD;
//
//
//	return 0;
//}


//void Print(char* str)
//{
//	printf("%s\n", str);
//}
//int main()
//{
//	void (*p)(char*) = Print;
//	(*p)("hello ");
//
//	return 0;
//}



int main()
{
	(*(void (*)())0)();
	void (*signal(int, void(*)(int)))(int);



	return 0;
}



