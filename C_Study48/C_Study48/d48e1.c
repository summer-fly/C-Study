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

//����Ĭ�϶�����4
//# pragma pack(4)
//struct S
//{
//	char c1;   //1���ֽ�
//	//7���ֽ�
//	double d;  //8���ֽ�
//
//};
//#pragma pack()
////ȡ�����õ�Ĭ�϶�����
//
//int main()
//{
//
//	struct S s;
//	printf("%d\n", sizeof(s));     //16�ֽ�
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
	//offsetof()     ����ƫ����



	return 0;
}