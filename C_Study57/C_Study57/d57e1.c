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
	//��һmallocʧ��,p�ͱ���ֵΪNULL
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		*(p + i) = i;

	}
	free(p);
	p = NULL;

	//��̬���ٵ�Խ�����
	int* p = (int *)malloc(5 * sizeof(int)); //����20���ֽڵĿռ�
	if (p == NULL)
	{
		return 0;
	}
	else
	{
		int i = 0;
		for (i = 0; i < 10; i++)   //����ֻ��5��Ԫ��
		{
			*(p + i) = i;

		}
	}
	free(p);


	return 0;
}