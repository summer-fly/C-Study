#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

int main()
{
	
	int a = 10;
	int b = a++;           //后置++，先使用a 然后再++
	printf("a = %d, b= %d\n",a, b);

	int c = 10;
	int d = ++c;         //前置++， 先++ 然后再使用c
	printf("c =%d, d=%d", c, d);


	

	

	return 0;

}