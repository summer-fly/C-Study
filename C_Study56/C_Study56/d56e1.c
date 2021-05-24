#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<assert.h>
#include<stdlib.h>
#include<errno.h>



//int main()
//{
//	//向内存申请10个字节的空间
//	int* p = (int*)malloc(10 * sizeof(int));
//	if (p == NULL)
//	{
//		//打印错误原因的一个方式
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		//正常使用
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
//	//当申请完的空间不用的时候要还给系统
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

    //释放空间
    //free函数是用来释放动态开辟的空间的
    free(p);
    p = NULL;

    return 0;
}