#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>




//int ADD(int x,int y)
//{
//	return x + y;
//}
//int main()
//{
//	
//	int arr[10] = { 0 };
//	int(*p)[10] = &arr;  //ȡ������ĵ�ַ  ����ָ��
//	int (*pfarr[4])(int, int);   //pfarr��һ������-����ָ������
//	int (*(*ppfarr)[4])(int, int) = &pfarr;
//	                              //ppfarr ��һ������ָ�룬ָ��ָ���������4��Ԫ��
//	                              //ָ�������ÿ��Ԫ�ص�������һ������ָ�� int(*����int��int��
//
//
//
//
//	return 0;
//}


//void print(char* str)
//{
//	printf("eheh:%s\n",str);
//}
//void test(void(*p)(char*))
//{
//	printf("test\n");
//	p("bit");
//}
//
////�ص�����
//int main()
//{
//	test(print);
//	return 0;
//}

//qsort()    //���������������͵�����  C���Ե�һ���⺯��




//int add(int x,int y)
//{
//	return x + y;
//}
//
//
//int main()
//{
//	//ָ������
//	int* arr[10];
//	//����ָ��
//	int* (*pa)[10] = &arr;
//	//����ָ��
//	int(*padd)(int, int) = add;   //&add
//	int sum = (*padd)(1, 2);    //���ú�������1
//	int sum = padd(1, 2);       //���ú�������2
//	
//
//	//����ָ�������
//	int(*parr[5])(int, int);
//	//ָ����ָ�������ָ��
//	int(*(*parr)[5])(int, int)=&parr;
//
//
//	return 0;
//}


//�ص����� - ͨ������ָ����õĺ���
void bubble_sort(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz-1; i++)
	{
		//һ��ð������
		int j=0
		for (j = 0; j < ; j++)
		{

		}

	}


}
int main()
{
	int arr[10] = { 9,8,7,5,6,2,3,4,1,0};
	int sz = sizeof(arr) / sizeof(arr[0]);   //�����������Ŀ
	bubble_sort(arr, sz);
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		printf("%d ", arr[i]);
	}



	return 0;
}