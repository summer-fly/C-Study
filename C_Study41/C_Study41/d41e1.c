#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>


//int main()
//{
//	//����������Ԫ�ص�ַ
//	//1.sizeof(������) - ��ʾ��������
//	//2.&������ - ������������������
//	int a[] = { 1,2,3,4 };
//	printf("%d\n", sizeof(a));        //16 - sizeof(������) - �������������ܴ�С - ��λ���ֽ�-16
//	printf("%d\n", sizeof(a+0));      //4 - a���������Ԫ�ص�ַ +0���ǵ�ַ  32λƽ̨��ַ��СΪ4���ֽ�
//	printf("%d\n", sizeof(*a));       //4 - *a����Ԫ��1��1�Ĵ�С��4�ֽ�
//	printf("%d\n", sizeof(a+1));      //4 - a����Ԫ�ص�ַ +1��ʾλ����2�ĵ�ַ ����Ϊ4
//	printf("%d\n", sizeof(a[1]));     //4 - �ڶ���Ԫ���Ĵ�С4
//	printf("%d\n", sizeof(&a));       //4/8 - ȡ��ַaȡ�����ǵ�ַ ��ַ�Ĵ�СΪ4��8���ֽ�
//	printf("%d\n", sizeof(*&a));      //16 - &a������ĵ�ַ�����÷��ʵ����飬sizeof()����ľ�������Ĵ�С
//	printf("%d\n", sizeof(&a+1));     //4/8 - &a�ǵ�ַ�ô�С��+1�����������飬���ǻ���һ����ַ ���Դ�С��4/8
//	printf("%d\n", sizeof(&a[0]));    //4/8 - a[0]ȡ����һ�������Ԫ�أ�&a[0]�ǵ�ַ����ַ�Ĵ�С��4/8
//	printf("%d\n", sizeof(&a[0]+1));  //4/8 - �ڶ���Ԫ�صĵ�ַ
//
//
//
//
//	return 0;
//}


//int main()
//{
//
//
//
//	char arr[] = { 'a','b','c','d','e','f' };
//	printf("%d\n", sizeof(arr));         //6 - sizeof()�������arr�����С ��6*1 =6
//	printf("%d\n", sizeof(arr+0));       //4/8  - arr�ĵ�ַ��0 �� ��ַ�Ĵ�С��4/8
//	printf("%d\n", sizeof(*arr));        //1 - arr����Ԫ�ص�ַ��*arr����Ԫ��a ��С��һ���ֽ�
//	printf("%d\n", sizeof(arr[1]));      //1
//	printf("%d\n", sizeof(&arr));        //4/8  - &arr����ȡ��arr�ĵ�ַ�� ��ַ�Ĵ�С��4/8
//	printf("%d\n", sizeof(&arr+1));      //4/8  - &arr��һ����ַ��+1�����������飬���ǻ���һ����ַ ���Խ����4/8
//	printf("%d\n", sizeof(&arr[0]+1));   //4/8 - ȡ����һ��Ԫ�صĵ�ַ ��+1�ǵڶ���Ԫ�صĵ�ַ ��С����4/8
//
//
//
//	return 0;
//}


//int main()
//{
//	char arr[] = { 'a','b','c','d','e','f' };
//	printf("%d\n", strlen(arr));            //���ֵ
//	printf("%d\n", strlen(arr+0));          //���ֵ - �������д����ȫ��ͬ
//	printf("%d\n", strlen(*arr));           //err -- *arr
//	printf("%d\n", strlen(arr[1]));         //err
//    printf("%d\n", strlen(&arr));           //���ֵ
//	printf("%d\n", strlen(&arr+1));         //���ֵ - ����������ֵ��ֵΪ6�ַ�
//	printf("%d\n", strlen(&arr[0]+1));      //���ֵ
//
//
//
//
//
//
//	return 0;
//}



int main()
{
	//int len = strlen("abcdef");
	char arr[] = { 'a','b','c','d','e','f' };
	int len = strlen(arr);
	printf("%d\n", len);


	return 0;
}