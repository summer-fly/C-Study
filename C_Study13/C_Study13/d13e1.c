#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<string.h>

int main()
{
	//memset -memory set -�ڴ�����
	char arr[] = "hello world";
	memset(arr, '*', 5);    // memset(��Ҫ�޸ĵ��ַ������޸ĵ�ֵ���޸ĵ���Ŀ)
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