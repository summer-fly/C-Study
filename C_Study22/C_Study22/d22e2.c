#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>


//void bubble_sort(int arr[],int sz)
//{
//	//ȷ��ð�����������
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		int flag = 1;//������һ��Ҫ�ŵ������Ѿ�����
//		int j;
//		for (j = 0; j < sz-1-i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp=arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//				flag = 0; //���������������ʵ����ȫ����
//			}
//		}
//		if (flag == 1)
//		{
//			break;
//		}
//	}
//}
//int main()
//{
//	int arr[] = { 19,8,27,6,5,44,23,20,1,0 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//��arr��������
//	//arr�����飬���Ƕ�arr���д��Σ�ʵ���ϴ��ݹ�ȥ��arr�������Ԫ�صĵ�ַ &arr[0]
//	bubble_sort(arr, sz);  //ð��������
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}


//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7 };
//	printf("%p\n", arr);     //��һ��Ԫ�ص�ַ
//	printf("%p\n", &arr[0]); //��һ��Ԫ�صĵ�ַ
//	printf("%p\n", &arr);    //����ĵ�ַ����Ȼ��ֵһ�����������岻һ��
//	//1. sizeof(������)   ��������ʾ�������飬���������������Ĵ�С����λ���ֽ�
//	//2. &������ ����������������������飬&���������������ȡ����������ĵ�ַ
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//printf("%p\n", arr);
//	//printf("%p", &arr[0]);
//	return 0;
//
//}


//void bubble_sort(int arr[], int sz)  //����ð�������� ����arr���飬ѭ������Ϊsz ��ǰ��ô��뺯��
//{
//	int i;
//	for (i = 0; i < sz - 1; i++)
//	{
//		int j;
//		int flag = 1; //�ٶ���������������
//		for (j= 0; j < sz-1-i; j++)
//		{
//			if (arr[j] > arr[j + 1])   //���е���
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//				flag = 0;
//			}
//		}
//		if (flag == 1)   //���˳���ǶԵ�������ѭ��
//		{
//			break;
//		}
//	}
//
//}
//int main()
//{
//	int arr[] = { 12,23,45,34,55,25,88 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr,sz); //�������ð����������������
//	int i;
//	for (i = 0; i < sz; i++)   //forѭ�����ӡarr����
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}



//void bubble_sort(int arr[],int sz)
//{
//	int i;
//	for (i = 0; i < sz - 1; i++)
//	{
//		int j;
//		int flag = 1;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp; \
//					flag = 1;
//			}
//		}
//		if (flag == 1)
//		{
//			break;
//		}
//	}
//}
//
//int main()
//{
//	int arr[] = { 12,34,56,78,90,99 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr, sz);
//	int i;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}


void bubble_sort(int arr[], int sz)
{
	int i;
	for (i = 0; i < sz - 1; i++)
	{
		int j;
		int flag = 1;
		for (j = 0; j < sz - 1 - i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
				flag = 0;
			}
			
		}
		if (flag == 1)
		{
			break;
		}

	}
}


int main()
{
	int arr[] = { 12,23,34,45,56,67,78,89,90 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	bubble_sort(arr, sz);
	int i;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}




	return 0;
}