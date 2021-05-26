#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<assert.h>
#include<stdlib.h>



//int main()
//{
//
//	int* p = (int*)malloc(10 * sizeof(int));
//
//	int* pr = realloc(p, INT_MAX);
//
//	if (pr != NULL)
//	{
//		p = pr;
//	}
//
//
//
//
//
//
//
//	return 0;
//
//}




int main()
{

	int* p = (int*)malloc(40);
	//万一malloc失败,p就被赋值为NULL
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		*(p + i) = i;

	}
	free(p);
	p = NULL;

	//动态开辟的越界访问
	int* p = (int *)malloc(5 * sizeof(int)); //开辟20个字节的空间
	if (p == NULL)
	{
		return 0;
	}
	else
	{
		int i = 0;
		for (i = 0; i < 10; i++)   //本来只有5个元素
		{
			*(p + i) = i;

		}
	}
	free(p);


	return 0;
}