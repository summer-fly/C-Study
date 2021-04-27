#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>

union Un
{
	int a;       //4
	char arr[5];  //5
};

int main()
{

	union Un u;
	printf("%d \n", sizeof(u));



	return 0;
}