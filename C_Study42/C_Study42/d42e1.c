#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<assert.h>


//1.����������
//2.�ݹ�
//3.ָ��-ָ��
//int my_strlen(const char* str)
//{
//	int count = 0;
//	assert(str != '\0');
//
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//int main()
//{
//	int len = my_strlen("abcdef");
//	printf("%d \n",len);
//
//
//
//
//	return 0;
//}

//char*  my_strcpy(char* dest,char* src)
//{
//	assert(dest != NULL);
//	assert(src != NULL);
//	char* ret = dest;
//	//����srcָ����ַ�����destָ��Ŀռ䣬������\0���ַ�
//	while (*dest++ = *src++)
//	{
//		;
//
//	}
//	//����Ŀ�Ŀռ����ʼ��ַ
//	return ret;
//}
//
//int main()
//{
//	char arr1[] = "abcdefgi";
//	char arr2[] = "bit";
//	//strcpy(arr1, arr2);
//	my_strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//
//	return 0;
//}

 char* my_strcat(char* dest,const char* srt)
{
	char* ret = dest;
	assert(dest && srt);
	//1.�ҵ�Ŀ���ַ�����'\0'
	while (*dest !='\0')
	{
		dest++;
	}
	while (*dest++ = *srt++)
	{
		;
	}
	return ret;
}

int main()
{
	char arr1[12] = "hello";
	char arr2[] = " world";
	my_strcat(arr1,arr2);

	printf("%s\n", arr1);




	return 0;
}