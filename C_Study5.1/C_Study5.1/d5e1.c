#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>


int main()
{
	int a = 10;
	int b = 20;
	int sum = ADD(a, b);
	printf("%d", sum);

	return 0;
}
















//int main()
//{
//	//extern - �����ⲿ����
//	extern int g_val;
//	printf("g_val : %d", g_val);
//
//
//
//
//	return 0;
//}

//void test()
//{
//	static int a = 1;
//	a++;
//	printf("a = %d\n", a);
//}
//int main()
//{
//	int i = 0;
//	while (i < 5)
//	{
//		test();
//		i++;
//	}
//	return 0;
//}

//int main()
//{
//    //typedef -���Ͷ��� -�����ض���
//	typedef unsigned int u_int;    //�� unsigned int ���¶���Ϊ�Լ����õ� u_int 
//	unsigned int a = 10;          
//	u_int b = 20;                 
//	printf("%d", b);
//	return 0;
//}

//int main()
//{
//    unsigned int a = -1;
//	printf("%d %u", a, a);
//	return 0;
//}

//()��Ӧ��
//int ADD(int x ,int y)       //���庯��
//{
//	int z=x+y;
//	return z;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = ADD(a, b);      //ADD() - �����ĵ���
//	printf("%d", c);
//
//
//
////[] - �±����ò�����
//	//int arr[10] = { 0 };    //����һ������
//	//arr[4];       //[]�±����ò�����
//	return 0;
//
//}

//int main()
//{   
//    //����������
//	int a = 10;               
//	int b = 20;
//	int max;
//	max = (a > b ? a : b);    // a>b���ʽ���Ϊ�棬��ִ�У������һ����a�����ʽ�����߾�ִ�еڶ������ʽ��b��
//	printf("%d", max);
//
//
//
//
//	return 0;
//
//}

//int main()
//{
//	//�� - ��0
//	//�� - 0
//	//&& - �߼���
//	//|| - �߼���
//	int a = 0;
//	int b = 5;
//	int c = a && b;        //���ҵĹ�ϵ������Ϊ����棩             ���Ϊ0
//	int c = a || b;       //��Ĺ�ϵ��ֻҪһ��Ϊ���ȫΪ��          ���Ϊ1
//	printf("%d", c);      
//
//	return 0;
//
//}