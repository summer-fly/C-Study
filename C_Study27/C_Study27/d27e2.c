#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<string.h>

//int* test()
//{
//	int a = 10;
//	return &a;
//}
//int main()
//{
//	int* p = test();
//	printf("%d\n", *p);
//
//
//
//
//
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	pa = NULL;
//	*pa = 20;
//
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = &arr;
//	for (int i = 0; i < 5; i++)
//	{
//		printf("%d ", *p);
//		p=p + 2;
//	}
//	return 0;
//}

//int main()
//{
//	char ch[5] = { 0 };
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	printf("%d\n",&arr[9] - &arr[0]);   //得出的是指针之间的指针个数
//	&arr[9] - &ch[0];
//
//	return 0;
//}



int my_strlen(char* str)
{
	char* start = str;
	char* end = str;
	while (*end != '\0')
	{
		end++;
	}
	return end - start;
}

int main()
{
	//strlen -计算字符串的长度
	char arr[] = "bit";
	int len= my_strlen(arr);
	printf("%d\n", len);

	return 0;
}