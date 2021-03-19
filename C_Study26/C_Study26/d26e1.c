#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>




//int main()
//{
//	int a=1, b=2, c=3, d=4, e=5, f=6;
//	int g = a * b + c * d + e * f;
//	printf("%d\n", g);
//	int dd = a + --c;
//	printf("%d", dd);
//	return 0;
//}


//int main()
//{
//	int  i = 1;
//	int a = (++i) + (++i) + (++i);
//	printf("%d", a);
//
//	return 0;
//}


//int main()
//{
//	/*int a = 10;
//	int* p= &a;*/
//
//	/*printf("%d\n", sizeof(char*));
//	printf("%d\n", sizeof(short*));
//	printf("%d\n", sizeof(float*));*/
//
//	int a = 0x11223344;
//	int* pc = &a;
//	*pc = 0;
//	/*int* pa= &a;
//	*pa = 0;*/
//	/*char* pc = &a;
//	printf("%p\n", pa);
//	printf("%p\n", pc);*/
//
//
//
//	return 0;
//}

//int main()
//{
//	int a = 0x11223344;
//	int* pa = &a;
//	char* pc = &a;
//	printf("%p\n", pa);
//	printf("%p\n", pa+1);
//
//	printf("%p\n", pc);
//	printf("%p\n", pc+1);
//
//	return 0;
//}


//int main()
//{
//	int arr[10] = { 0 };
//	char* p = arr;  //数组名-首元素的地址
//	int i;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = 1;
//	}
//	
//
//
//
//
//
//	return 0;
//}

//int main()
//{
//	int a; //局部变量不初始化，默认随机值
//	int* p; //局部的指针变量，就被初始化随机值
//
//
//
//
//
//	return 0;
//}

int main()
{
	int arr[10] = { 0 };
	int* p = &arr;
	for(int i=0;i<12;i++)
	{
		p++;

	}









	return 0;
}