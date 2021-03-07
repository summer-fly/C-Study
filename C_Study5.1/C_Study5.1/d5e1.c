#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>


int main()
{
	int a = 10;
	int b = 20;
	int sum = ADD(a, b);
	printf("%d", sum);

	return 0;
}
















//int main()
//{
//	//extern - 声明外部符号
//	extern int g_val;
//	printf("g_val : %d", g_val);
//
//
//
//
//	return 0;
//}

//void test()
//{
//	static int a = 1;
//	a++;
//	printf("a = %d\n", a);
//}
//int main()
//{
//	int i = 0;
//	while (i < 5)
//	{
//		test();
//		i++;
//	}
//	return 0;
//}

//int main()
//{
//    //typedef -类型定义 -类型重定义
//	typedef unsigned int u_int;    //把 unsigned int 重新定义为自己设置的 u_int 
//	unsigned int a = 10;          
//	u_int b = 20;                 
//	printf("%d", b);
//	return 0;
//}

//int main()
//{
//    unsigned int a = -1;
//	printf("%d %u", a, a);
//	return 0;
//}

//()的应用
//int ADD(int x ,int y)       //定义函数
//{
//	int z=x+y;
//	return z;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = ADD(a, b);      //ADD() - 函数的调用
//	printf("%d", c);
//
//
//
////[] - 下标引用操作符
//	//int arr[10] = { 0 };    //创建一个数组
//	//arr[4];       //[]下标引用操作符
//	return 0;
//
//}

//int main()
//{   
//    //条件操作符
//	int a = 10;               
//	int b = 20;
//	int max;
//	max = (a > b ? a : b);    // a>b表达式如果为真，就执行？后面第一个（a）表达式，否者就执行第二个表达式（b）
//	printf("%d", max);
//
//
//
//
//	return 0;
//
//}

//int main()
//{
//	//真 - 非0
//	//假 - 0
//	//&& - 逻辑与
//	//|| - 逻辑或
//	int a = 0;
//	int b = 5;
//	int c = a && b;        //并且的关系（两个为真才真）             结果为0
//	int c = a || b;       //或的关系，只要一个为真就全为真          结果为1
//	printf("%d", c);      
//
//	return 0;
//
//}