#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>



//int main()
//{
//
//	int arr[10] = { 1,2,3 };  //����ȫ��ʼ��,ʣ��Ĭ��Ϊ0
//	char arr2[5] = { 'a','b'};
//	char arr3[5] = "abc";    //���ֳ�ʼ��Ҳ�ǿ��Ե�
//	char arr4[] = "abcdef";  //������Ԫ����Ŀ δ����С�ı����ʼ��
//	printf("%s\n", arr4);
//	printf("%d\n", sizeof(arr4)); //sizeof����arr4��ռ�ռ�Ĵ�С 7*1=7
//	printf("%d\n", strlen(arr4)); //strlen���ַ������ȣ���\0��ֹͣ��
//
//
//
//
//
//	return 0;
//}

//1. strlen ��sizeofû��ʲô��ϵ
//2. strlen ֻ���������ַ����ĳ���   -�ǿ⺯�� ��Ҫ����ͷ�ļ�
//3. sizeof �Ǽ�����������飬���͵Ĵ�С-��λ���ֽ�  -������ ����Ҫ����ͷ�ļ�


//int main()
//{
//	char arr1[] = "abc";    // Ԫ���� a b c \0
//	char arr2[] = { 'a','b','c' };   //Ԫ��ֻ�� a b c
//	printf("%d\n", sizeof(arr1));
//	printf("%d\n", sizeof(arr2));
//	printf("%d\n", strlen(arr1));
//	printf("%d\n", strlen(arr2)); //���ֵ
//
//
//
//
//	return 0;
//}

//int main()
//{
//	//char arr[] = "abcdef";
//	///*printf("%c", arr[3]);*/
//	//int i;
//	//for (i = 0;i < (int)strlen(arr);i++)
//	//{
//	//	printf("%c\n",arr[i]);
//	//}
//	int arr[]={ 1,2,3,4,5,6,7,8,9 };
//	int n = sizeof(arr)/sizeof(arr[0]);
//	int i;
//	for (i = 0; i < n; i++)
//	{
//		printf("%d\0", arr[i]);
//	}
//
//
//
//	return 0;
//}

//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%p \n", &arr[i]);
//	}
//	return 0;
//}

//int main()
//{
//	int arr[3][4] = { { 1,2,3 },{4, 5} };  //����ȫ��ʼ��
//	int i,j;
//	for (i = 0; i < 3; i++)
//	{
//		
//		for (j = 0; j< 4; j++)
//		{
//			printf("%d", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

int main()
{
	int arr[3][4] = { { 1,2,3 },{4, 5} };  //����ȫ��ʼ��
	int i, j;
	for (i = 0; i < 3; i++)
	{

		for (j = 0; j < 4; j++)
		{
			printf("%p ", &arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}