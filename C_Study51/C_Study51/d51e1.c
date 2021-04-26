#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<assert.h>

//struct S
//{
//	char a : 3;
//	char b : 4;
//	char c : 5;
//	char d : 4;
//
//};
//
//int main()
//{
//	struct S s = { 0 };
//
//	s.a = 10;
//	s.b = 20;
//	s.c = 3;
//	s.d = 4;
//	
//
//
//	
//	
//	
//	return 0;
//
//}


//	enum day
//	{
//		Mon,
//		Tues,
//		Wed,
//		Thur,
//		Fri,
//		Sat,
//		Sun
//	};
//
//	enum Sex                 //枚举类型
//	{
//		Man,                 //枚举的可能取值  枚举常量
//		Woman,
//		Secret
//	};
//
//	enum Color
//	{
//		RED ,    //0
//		GREEN=9,  //1
//		BLUE     //2
//	};
//
//int main()
//{
//	enum Sex s = Man;
//
//	enum Color C = BLUE;
//
//	printf("%d %d %d\n", RED, GREEN, BLUE);
//
//
//	return 0;
//}

//联合体（共用体）定义
//union Un
//{
//	char c;
//	int i;
//
//};
//
//
//int main()
//{
//	union Un n;
//	printf("%d\n", sizeof(n));
//	
//	printf("%p\n", &(n.c));
//	printf("%p\n", &(n.i));
//
//
//
//
//
//	return 0;
//}
//
//int check_sys()
//{
//	int a = 1;
//	return *(char*)&a;   //返回1表示小端，0为大端
//}
/*
int main()
{
	*///int a = 1;
	//int ret = check_sys(a);


	//if (1 == ret)
	//{
	//	printf("小端\n");
	//}
	//else
	//{
	//	printf("大端\n");
	//}
//
//
//
//
//
//
//
//	return 0;
//}


int check_sys()
{
	union Un
	{
		char c;
		int i;
	}u;

	u.i = 1;   //
	return u.c;
	//返回1 表示小端
	//返回0 表示大端
}

int main()
{
	int ret = check_sys();
	if (1 == ret)
	{
		printf("小端\n");
	}
	else
	{
		printf("大端\n");
	}

	return 0;
}