#define _CRT_SECURE_NO_WARNINGS 1
#include<string.h>
#include<stdio.h>
#include<assert.h>
#include<stdlib.h>


//void GetMemory(char** p, int num)
//{
//    *p = ((char*)malloc(num));
//}
//void Test(void)
//{
//    char* str = NULL;
//    GetMemory(&str, 100);
//    strcpy(str, "hello");
//    printf(str);
//}
//
//int main()
//{
//    Test();
//	return 0;
//}


//void Test(void)
//{
//    char* str = (char*)malloc(100);
//    strcpy(str, 100);
//    free(str);
//    if (str != NULL)
//    {
//        strcpy(str, "world");
//        printf(str);
//    }
//}
//
//
//int main()
//{
//    Test();
//    return 0;
//}


struct S
{
	int n;
	int arr[];     //������δ֪��С�� - ���������Ա - ����Ĵ�С�ǿ��Ե�����
};

int main()
{
	//struct S s;
	//printf("%d\n", sizeof(s));  //��С������arr[]
	struct S* ps = (struct S*)malloc(sizeof(struct S) + 5 * sizeof(int));  //+5*sizeof(int)��Ϊ���������鿪�ٵ�
	ps->n = 100;
	int i = 0;
	for (i = 0; i < 5; i++)
	{
		ps->arr[i] = i; //0 1 2 3 4 
	}

	return 0;
}