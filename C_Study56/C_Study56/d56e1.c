#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<assert.h>
#include<stdlib.h>
#include<errno.h>



//int main()
//{
//	//���ڴ�����10���ֽڵĿռ�
//	int* p = (int*)malloc(10 * sizeof(int));
//	if (p == NULL)
//	{
//		//��ӡ����ԭ���һ����ʽ
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		//����ʹ��
//		int i = 0;
//		for (i = 0; i < 10; i++)
//		{
//			*(p + i) = i;
//
//		}
//
//		for (i = 0; i < 10; i++)
//		{
//			printf("%d",*(p+i));
//
//		}
//	}
//
//
//	//��������Ŀռ䲻�õ�ʱ��Ҫ����ϵͳ
//	free(p);
//
//	return 0;
//}


int main()
{
    int* p = (int*)calloc(10, sizeof(int));
    if (p == NULL)
    {
        printf("%s", strerror(errno));
    }
    else
    {
        int i = 0;
        for (i = 0; i < 10; i++)
        {
            printf("%d", *(p + i));
        }
    }

    //�ͷſռ�
    //free�����������ͷŶ�̬���ٵĿռ��
    free(p);
    p = NULL;

    return 0;
}