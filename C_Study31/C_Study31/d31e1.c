#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<assert.h>

void my_strcpy(char* dest,char* src)
{
	assert(dest != NULL); //���� -����Ҫ����������������ͱ���
	assert(src != NULL);

	while (*dest++ = *src++)
	{
		;

	}
	



}

int main()
{
	//strcpy
	//�ַ�������
	char arr1[] = "#################";
	char arr2[] = "bit";
	my_strcpy(arr1,	arr2);
	printf("%s", arr1);




	return 0;
}