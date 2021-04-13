#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<assert.h>


//int main()
//{
//
//	//< -1
//	// ==0
//	//> 1
//	char* p1 = "kbc";
//	char* p2 = "abc";
//
//	int sss= strcmp(p1, p2);
//	//printf("%d\n", sss);
//	if (sss>0)
//	{
//		printf("p1>p2\n");
//
//	}
//	else if (sss == 0)
//	{
//		printf("p1=p2\n");
//	}
//	else if (sss < 0)
//	{
//		printf("p1<p2\n");
//	}
//
//
//
//
//	return 0;
//}

//my_strcmp(const char* str1,const char* str2)
//{
//	assert(str1 && str2);
//	//比较
//	while (*str1++ == *str2++)
//	{
//		if (*str1 == '\0')
//		{
//			return 0;        //相等
//		}
//		
//	}
//	if (*str1 > *str2)
//	{
//		return 1;              //大于
//	}
//	else
//	{
//		return -1;            //小于
//	}
//
//		              
//	
//}
//
//int main()
//{
//	char* p1 = "abcd";
//	char* p2 = "abqwe";
//	int s = my_strcmp(p1, p2);
//	printf("%d\n", s);
//	return 0;
//}


//int main()
//{
//	char arr1[5] = { 0 };
//	char arr2[] = "hello world";
//	strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//
//
//	return 0;
//}


//int main()
//{
//	char arr1[5] = "abc";
//	char arr2[] = "hello world";
//	strncpy(arr1, arr2,4);
//	
//
//
//	return 0;
//}


//int main()
//{
//	char arr1[30] = "bit\0xxxxxxxxxxxxxxx";
//	char arr2[] = "hello";
//	strncat(arr1, arr2, 4);
//	printf("%s\n", arr1);
//
//
//
//
//	return 0;
//}

//int main()
//{
//	char arr1[5] = "abcd";
//	char arr2[] = "abcd";
//
//
//
//
//	return 0;
//}



int main()
{
	const char arr1[5] = "abcde";
	const char arr2[] = "abcd";
	int cmp= strncmp(arr1, arr2, 4);
	printf("%d\n", cmp);




	return 0;
}