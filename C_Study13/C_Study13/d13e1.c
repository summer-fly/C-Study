#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<string.h>

int main()
{
	//memset -memory set -内存设置
	char arr[] = "hello world";
	memset(arr, '*', 5);    // memset(需要修改的字符串，修改的值，修改的数目)
	printf("%s", arr);

	return 0;
}

//int main()
//{
//
//	char arr1[] = "bit";
//	char arr2[20] = "###################";
//	strcpy(arr2,arr1);
//	printf("%s\n", arr2);
//	return 0;
//}

//int main()
//{
//	
//	strlen();
//	return 0;
//}
//int add(int x, int y)
//{
//	int z;
//	z = x + y;
//	return z;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int num = add(a,b);
//	return 0;
//}