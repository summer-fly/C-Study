#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>



//int main()
//{
//	char ch = 'a';
//	char* pc = &ch;
//
//	return 0;
//}

//int main()
//{
//	char arr[] = "abcdef";
//	char* pc = arr;
//	printf("%s\n", arr);
//	printf("%s\n", pc);
//
//	return 0;
//}

//int main()
//{
//	char* p = "abcdef";  // "abcdef"�Ǹ������ַ���,���ܹ��޸�
//	*p = 'w';
//	printf("%s\n", p);
//
//	return 0;
//}


//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "abcdef";
//	const char* p1 = "abcdef";
//	const char* p2 = "abcdef";
//
//	/*if (arr1 == arr2)
//	{
//		printf("hehe\n");
//	}
//	else
//	{
//		printf("haha\n");
//	}*/
//
//	if (p1 == p2)
//	{
//		printf("hehe\n");
//	}
//	else
//	{
//		printf("haha\n");
//	}
//
//
//
//	return 0;
//}


//ָ�����鱾����������,�������ָ��

//int main()
//{
//	int arr[10] = { 0 };   //��������
//	char arr2[10] = { 0 };  //�ַ�����
//	int* parr[4];   //�������ָ������� - ָ������
//	char* pch[5];   //����ַ�ָ������� - ָ������
//
//
//	return 0;
//}


//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = 30;
//	int d = 40;
//	int* arr[4] = { &a,&b,&c,&d };
//
//
//
//
//
//	return 0;
//}




//int main()
//{
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[] = { 2,3,4,5,6 };
//	int arr3[] = { 3,4,5,6,7 };
//
//	int* parr[] = { arr1,arr2,arr3 };
//	for (int i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 5; j++)
//		{
//			printf("%d ", *(parr[i] + j));
//		}
//		printf("\n");
//	}
//
//
//
//
//	return 0;
//}




//����ָ��ʵ������ָ��


//int main()
//{
//	int* p=NULL;      //����ָ�� - ָ�����͵�ָ�� - ���Դ�����͵ĵ�ַ
//	char* pc = NULL;  //�ַ�ָ�� - ָ���ַ���ָ�� - ���Դ���ַ��ĵ�ַ
//	                 //����ָ�� - ָ�������ָ�� - ���Դ������ĵ�ַ
//	//int arr[10] = { 0 };
//	//arr - ��Ԫ�صĵ�ַ
//	//&arr[0] - ��Ԫ�صĵ�ַ
//	//&arr - ����ĵ�ַ
//
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int(*p)[10] = &arr; //�����ַ�洢����
//	//�����p��������ָ��
//
//	return 0;
//}


//int main()
//{
//	char* arr[5];
//	char* (*pa)[5]=&arr;
//
//
//	return 0;
//}


//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int(*pa)[10] = &arr;
//	/*printf("%p\n", *pa);*/
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ",(*pa)[i]);
//	}
//
//
//
//	return 0;
//}

void print1(int arr[3][5], int x, int y)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < x; i++)
	{
		for (j = 0; j < y; j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
}

//������ָ�����ʽ
void print2(int(*p)[5], int x, int y)
{
	int i = 0;
	for (i = 0; i < x; i++)
	{
		int j = 0;
		for (j = 0;j < y; j++)
		{
			printf("%d ",*(*(p + i) + j));
		}
		printf("\n");
		
	}
}
int main()
{
	int arr[3][5] = { {1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7} };
	//print1(arr,3,5);  //arr  - ������ -�����������Ԫ�ص�ַ
	print2(arr,3,5);
	return 0;
}