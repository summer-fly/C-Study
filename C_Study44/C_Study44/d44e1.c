#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<assert.h>
#include<errno.h>
#include<ctype.h>




//char* my_strstr(const char* p1,const char* p2)
//{
//	assert(p1 != NULL);
//	assert(p2 != NULL);
//	char* s1 = p1;
//	char* s2 = (char*)p2;
//	char* cur = (char*)p1;
//
//	//�������������p2ΪNULL
//	if (*p2 == '\0')
//	{
//		return (char*)p1;
//	}
//	while (*cur)
//	{
//		s1 = cur;
//		s2 = p2;
//		while ((*s1!='\0') && (*s2!='\0') && (*s1 == *s2))
//		{
//			s1++;
//			s2++;
//		}
//		if (*s2 == '\0')
//		{
//			return cur;   //�ҵ��ַ���
//		}
//		if (*s1 == '\0')
//		{
//			return NULL;
//		}
//		cur++;
//	}
//	return NULL;    //�Ҳ����ַ���
//}
//
//int main()
//{
//	//strstr - �����ַ���
//	char* p1 = "abcdefgh";
//	char* p2 = "def";
//	char* ret = my_strstr(p1,p2);
//
//	if (ret == NULL)
//	{
//		printf("�ַ��������ڣ�\n");
//	}
//	else
//	{
//		printf("�ַ�������%s \n", ret);
//	}
//
//
//
//	return 0;
//}


//int main()
//{
//	char arr[] = "zpw@bitedu.tech";
//	char* p = "@.";                 //�ָ��ַ�����
//
//	//strtok(arr, p);
//	char buf[1024] = { 0 }; 
//	strcpy(buf, arr);
//	//�и�buf�е��ַ���
//
//	/*char* ret = strtok(arr, p);
//	printf("%s\n", ret);
//
//	ret = strtok(NULL, p);
//	printf("%s\n", ret);
//
//	ret = strtok(NULL, p);
//	printf("%s\n", ret);*/
//
//	char* ret = NULL;
//	for (ret = strtok(arr, p);ret!=NULL;ret=strtok(NULL,p))
//	{
//		printf("%s\n", ret);
//	}
//	return 0;
//}



//int main()
//{
//	//������ -      ������Ϣ
//	//0     -      No error
//	//1     -      Operation not permitted
//	//2     -      No such file or directory
//	//...
//
//	//errno ��ȫ�ֵĴ�����ı�������c���Ե�ִ��ʱ��������ͻ������Ѷ�Ӧ�Ĵ����룬��ֵ��errno��
//
//	char* str = strerror(errno);
//	printf("%s\n", str);
//
//
//
//	//���ļ�
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		printf("Open file success\n");
//	}
//
//	return 0;
//}

//int main()
//{
//	char ch = 'q';
//	int c=islower(ch);
//	
//	char i = '1';
//	int ret = isdigit(i);
//	printf("%d\n", ret);
//
//
//
//	return 0;
//}


int main()
{
	//char ch = tolower('Q');    //��дתСд
	//char ch = toupper('q');    //Сдת��д

	//putchar(ch);


	char arr[] = "I Am Iron Man";
	int i = 0;
	while (arr[i])
	{
		if (isupper(arr[i]))
		{
			arr[i]=tolower(arr[i]);
		}
		i++;
	}
	printf("%s\n", arr);
	



	return 0;
}