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
//	////ʹ�ÿ��ٺõĿռ�
//
//	////�������ٵĿռ�Ĵ�С
//	//int *p2 = realloc(p, 80);
//	//if (p2 != NULL)
//	//{
//	//	p = p2;
//	//}
//	//
//	//����ʹ��rallocֱ�ӿ����ڴ�ռ�
//	int *p = realloc(NULL, 40);   //�ȼ���ʹ��malloc����40���ֽڵĿռ�
//
//
//	return 0;
//}



//int main()
//{
//	//1. �Կ�ָ������ò���
//	int* p = malloc(40);
//	//��p������ص��ж�
//	*p = 10;   //-malloc���ٿռ�ʧ�� �п��ܶ�NULL��ָ������� 
//
//	//2.�Զ�̬�����ڴ��Խ�����
//	int *p = (int*)malloc(40); //ʮ��int
//	if (p == NULL)
//	{
//		return 0;
//	}
//	int i = 0;
//	for (i = 0; i <= 10; i++)
//	{
//		*(p + i) = i;   //��ʮһ�λ�Խ�����
//	}
//
//	free(p);
//	p = NULL;
//
//
//
//	//3.�ԷǶ�̬���ٵ��ڴ�ʹ��free����
//	int a = 10;
//	int* p = &a;
//	free(p);
//
//
//	//4.ʹ��free�ͷŶ�̬�����ڴ��һ����
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
//	//��ͬһ�鶯̬�ڴ�Ķ���ͷ�
//	int* p = (int*)malloc(40);
//	if (p == NULL)
//	{
//		return 0;
//	}
//	//�ͷſռ�
//	free(p);
//	free(p);   //����ͷ�
//
//
//
//	//6.��̬���ٵ��ڴ������ͷţ��ڴ�й©��
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
    Test();        //������ʲô�����
    return 0;
}