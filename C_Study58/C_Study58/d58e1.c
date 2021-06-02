#define _CRT_SECURE_NO_WARNINGS 1
#include<string.h>
#include<stdio.h>
#include<assert.h>
#include<Windows.h>



//int main()
//{
//	//int* p = (int*)malloc(40);
//	//if (p == NULL)
//	//{
//	//	return 0;
//	//}
//	////使用开辟好的空间
//
//	////调整开辟的空间的大小
//	//int *p2 = realloc(p, 80);
//	//if (p2 != NULL)
//	//{
//	//	p = p2;
//	//}
//	//
//	//可以使用ralloc直接开辟内存空间
//	int *p = realloc(NULL, 40);   //等价于使用malloc开辟40个字节的空间
//
//
//	return 0;
//}



//int main()
//{
//	//1. 对空指针解引用操作
//	int* p = malloc(40);
//	//对p进行相关的判断
//	*p = 10;   //-malloc开辟空间失败 有可能对NULL空指针解引用 
//
//	//2.对动态开辟内存的越界访问
//	int *p = (int*)malloc(40); //十个int
//	if (p == NULL)
//	{
//		return 0;
//	}
//	int i = 0;
//	for (i = 0; i <= 10; i++)
//	{
//		*(p + i) = i;   //第十一次会越界访问
//	}
//
//	free(p);
//	p = NULL;
//
//
//
//	//3.对非动态开辟的内存使用free函数
//	int a = 10;
//	int* p = &a;
//	free(p);
//
//
//	//4.使用free释放动态开辟内存的一部分
//	int* p = (int*)malloc(40);
//	if (p == NULL)
//	{
//		return 0;
//	}
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*p++ = i;
//	}
//
//
//	//对同一块动态内存的多次释放
//	int* p = (int*)malloc(40);
//	if (p == NULL)
//	{
//		return 0;
//	}
//	//释放空间
//	free(p);
//	free(p);   //多次释放
//
//
//
//	//6.动态开辟的内存忘记释放（内存泄漏）
//	while (1)
//	{
//		malloc(1);
//		Sleep(1000);
//	}
//
//	return 0;
//}




//void GetMemory(char* p)
//{
//    p = (char*)malloc(100);
//}
//void Test(void)
//{
//    char* str = NULL;
//    GetMemory(str);
//    strcpy(str, "hello world");
//    printf(str);
//}
//
//int main()
//{
//    Test();
//    return 0;
//}



char* GetMemory(void)
{
    char p[] = "hello world";
    return p;
}
void Test(void)
{
    char* str = NULL;
    str = GetMemory();
    printf(str);
}

int main()
{
    Test();        //这会输出什么结果？
    return 0;
}