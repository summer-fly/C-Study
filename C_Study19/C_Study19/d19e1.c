#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>

//写一个函数，每次调用这个函数，num的值就会增加1
//void ADD(int *p)
//{
//	(*p)++;
//}
//int main()
//{
//	int num = 0;
//	ADD(&num);
//	printf("%d\n", num);
//	ADD(&num);
//	printf("%d\n", num);
//
//	return 0;
//}

//int main()
//{
//	printf("%d\n", strlen("abc"));     //把一个函数的返回值作为另外一个函数的参数   ----函数的链式访问
//
//	return 0;
//}

//int main()
//{
//	//printf函数返回的是字符的数目
//	printf("%d", printf("%d", printf("%d",43)));    //第一次打印43，留下2，第二次打印2，留下1，最后一次打印了1   
//	                                               //所以结果为43 2 1
//
//
//
//
//	return 0;
//}


//#include "ADD.h"   //引用自己的头文件
//int main()
//{
//	int a = 0;
//	int b = 20;
//	int sum = 0;
//	//函数的调用
//	sum=ADD(a, b);
//	printf("%d", sum);
//	return 0;
//}

////函数的递归
//int main()
//{
//
//	printf("hh\n");
//	main();  //函数递归 会栈溢出
//
//
//	return 0;
//}


//void print(int n)
//{
//	if (n > 9)
//	{
//		print(n / 10);
//	}
//	printf("%d", n % 10);
//}
//int main()
//{
//	unsigned int num = 0;
//	scanf("%d", &num);  //1234
//	//递归
//	print(num);
//
//
//	return 0;
//}

//int my_strlen(char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}

//递归来解决
int my_strlen(char* str)
{
	if (*str != '\0')
	{
		return 1 + my_strlen(str + 1);
	}
	else
	{
		return 0;
	}
}
//把大事化小
int main()
{
	char arr[] = "bit";
	int len = my_strlen(arr);  //arr是数组，数组传参，传过去的不是整个数组，而是第一个元素的地址
	printf("len = %d\n", len);

	return 0;
}