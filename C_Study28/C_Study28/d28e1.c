#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>



//int main()
//{
//	int arr[10] = { 0 };
//	printf("%p\n", arr);    //��ַ-��Ԫ�ص�ַ
//	printf("%p\n", arr+1);
//	printf("%p\n", &arr[0]);  //��ַ-��Ԫ�ص�ַ
//	printf("%p\n", &arr[0]+1);
//	printf("%p\n", &arr);       //������Ԫ�ص�ַ����������������ĵ�ַ
//	printf("%p\n", &arr+1);
//
//
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;
//	/*printf("%p", p);*/
//	/*for (int i = 0; i < 10; i++)
//	{
//		printf("%p ====== %p\n",p+i,&arr[i]);
//	}*/
//
//	for (int i = 0; i < 10; i++)
//	{
//		*(p + i) = i;
//	}
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d", *(p+i));
//	}
//
//
//
//
//	return 0;
//}


//int main()
//{
//	int a = 10;
//	int* pa=&a;                //pa - һ��ָ��
//	int** ppa = &pa;           //ppa - ����ָ��
//	int*** pppa = &ppa;        //pppa - ����ָ��
//	printf("%d", **ppa);
//
//	return 0;
//}



//ָ������ --���� -���ָ�������
//����ָ�� --ָ��
int main()
{
	int a = 10;
	int b = 20;
	int c = 30;
	//int* pa = &a;
	//int* pb = &b;
	//int* pc = &c;
	
	int* arr[3] = { &a,&b,&c };
	for (int i = 0; i < 3; i++)
	{
		printf("%p\n", arr[i]);
	}
	



	return 0;
}