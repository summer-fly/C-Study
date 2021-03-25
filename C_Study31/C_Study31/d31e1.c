#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<assert.h>

void my_strcpy(char* dest,char* src)
{
	assert(dest != NULL); //断言 -满足要求不做操作，不满足就报错
	assert(src != NULL);

	while (*dest++ = *src++)
	{
		;

	}
	



}

int main()
{
	//strcpy
	//字符串拷贝
	char arr1[] = "#################";
	char arr2[] = "bit";
	my_strcpy(arr1,	arr2);
	printf("%s", arr1);




	return 0;
}