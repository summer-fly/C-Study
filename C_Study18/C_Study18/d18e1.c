#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include<string.h>

//int ADD(int x, int y)
//{
//	int sum;
//	sum = x + y;
//	return sum;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c=ADD(a, b);
//	printf("%d\n", c);
//	
//	char arr1[] = "bit";
//	char arr2[20] = "########";
//	strcpy(arr2, arr1);   //拷贝函数
//	printf("%s\n", arr2);
//    return 0;
//}

int main()
{
	char arr[] = "hello world";
	memset(arr, '*', 5);
	printf("%s\n", arr);   //将函数的前五个字符替换层成*




	return 0;
}