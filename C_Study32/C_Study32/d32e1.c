#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>

//void test()
//{
//
//}
//
//int main()
//{
//
//	int a = 10;
//	float b = 10.0;
//
//	test(a, b);
//
//
//
//
//	return 0;
//}


//int main()
//{
	//写代码来查看字节序
	//int a = 1;
	//char* p = (char *)&a;  //获取第一个
	//if (*p == 1)
	//{
	//	printf("是小端存储\n");
	//}
	//else
	//{
	//	printf("是大端存储\n");
	//}


//	return 0;
//}

//int check()
//{
//	int a = 1;
//	char* p= (char*)&a;
//	if (*p == 1)
//	{
//		return 1;
//	}
//	else
//	{
//		return 0;
//	}
//}
//
//int main()
//{
//
//	//返回1，小端
//	//返回0，大端
//	int ret = check();
//	if (ret == 1)
//	{
//		printf("是小端");
//	}
//	else
//	{
//		printf("是大端");
//	}
//
//	return 0;
//}


//int main()
//{
//	//输出值为？
//	char a = -1;
//	signed char b = -1;
//	unsigned char c = -1;
//	printf("%d %d %d ", a, b, c);
//
//	return 0;
//}

int main()
{
	//打印的值为？
	char a = -128;
	printf("%u\n", a);



	return 0;
}