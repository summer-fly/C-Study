#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>

//дһ��������ÿ�ε������������num��ֵ�ͻ�����1
//void ADD(int *p)
//{
//	(*p)++;
//}
//int main()
//{
//	int num = 0;
//	ADD(&num);
//	printf("%d\n", num);
//	ADD(&num);
//	printf("%d\n", num);
//
//	return 0;
//}

//int main()
//{
//	printf("%d\n", strlen("abc"));     //��һ�������ķ���ֵ��Ϊ����һ�������Ĳ���   ----��������ʽ����
//
//	return 0;
//}

//int main()
//{
//	//printf�������ص����ַ�����Ŀ
//	printf("%d", printf("%d", printf("%d",43)));    //��һ�δ�ӡ43������2���ڶ��δ�ӡ2������1�����һ�δ�ӡ��1   
//	                                               //���Խ��Ϊ43 2 1
//
//
//
//
//	return 0;
//}


//#include "ADD.h"   //�����Լ���ͷ�ļ�
//int main()
//{
//	int a = 0;
//	int b = 20;
//	int sum = 0;
//	//�����ĵ���
//	sum=ADD(a, b);
//	printf("%d", sum);
//	return 0;
//}

////�����ĵݹ�
//int main()
//{
//
//	printf("hh\n");
//	main();  //�����ݹ� ��ջ���
//
//
//	return 0;
//}


//void print(int n)
//{
//	if (n > 9)
//	{
//		print(n / 10);
//	}
//	printf("%d", n % 10);
//}
//int main()
//{
//	unsigned int num = 0;
//	scanf("%d", &num);  //1234
//	//�ݹ�
//	print(num);
//
//
//	return 0;
//}

//int my_strlen(char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}

//�ݹ������
int my_strlen(char* str)
{
	if (*str != '\0')
	{
		return 1 + my_strlen(str + 1);
	}
	else
	{
		return 0;
	}
}
//�Ѵ��»�С
int main()
{
	char arr[] = "bit";
	int len = my_strlen(arr);  //arr�����飬���鴫�Σ�����ȥ�Ĳ����������飬���ǵ�һ��Ԫ�صĵ�ַ
	printf("len = %d\n", len);

	return 0;
}