#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<assert.h>

//struct S1
//{
//	char c1;
//	int a;
//	char c2;
//};
//struct S2
//{
//	char c1;
//	char c2;
//	int a;
//
//};
//
//struct S3
//{
//	double a;
//	char b;
//	int c;
//};
//struct S4
//{
//	char c1;
//	struct S3 s3;
//	double d;
//};

//int main()
//{
	//struct S4 s4 = { 0 };
	//printf("%d\n", sizeof(s4));
//
	//struct S1 s1 = { 0 };
	//printf("%d\n", sizeof(s1));
//
	//struct S2 s2 = { 0 };
	//printf("%d\n", sizeof(s2));
//
	//struct S3 s3 = { 0 };
	//printf("%d\n", sizeof(s3));
//
//	return 0;
//}

//设置默认对齐数4
//# pragma pack(4)
//struct S
//{
//	char c1;   //1个字节
//	//7个字节
//	double d;  //8个字节
//
//};
//#pragma pack()
////取消设置的默认对齐数
//
//int main()
//{
//
//	struct S s;
//	printf("%d\n", sizeof(s));     //16字节
//
//
//
//
//
//	return 0;
//}


struct S
{
	char c;
	int i;
	double d;

};

int main()
{
	//offsetof()     计算偏移量



	return 0;
}