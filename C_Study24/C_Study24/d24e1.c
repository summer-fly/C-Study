#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>




//int main()
//{
//	int a = 10;
//	a = a + 2;
//	a += 2; //���ϸ�ֵ��
//
//	a = a & 1;
//	a &= 1;
//
//
//
//
//	return 0;
//}


//int main()
//{
//	int a = 0;
//	if (a)
//	{
//		printf("hehhe\n");
//	}
//	if (!a)
//	{
//		printf("hhh\n");
//	}
//	printf("%d\n", !a);
//
//
//	return 0;
//}

//
//int main()
//{
//	int a = -5;
//	a = -a;
//	printf("%d\n", a);
//
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int* p=&a; //ȡ��ַ������
//	*p=20; //�����ò�����  *p = a
//	printf("%d", a);
//
//
//
//
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	char b = 'r';
//	char* p = &b;
//	int arr[10] = { 0 };
//	//sizeof ���������ռ�ڴ�ռ�Ĵ�С ��λ���ֽ�
//	printf("%d\n", sizeof(a));  //4
//	printf("%d\n", sizeof(b));  //1
//	printf("%d\n", sizeof(p));  //4
//	printf("%d\n", sizeof(arr));  //40
//
//
//
//
//
//	return 0;
//}
//
//int main()
//{
//	/*int a = 0;
//	char b = 'w';
//	int arr[10] = { 0 };
//	printf("%d\n", sizeof(a));
//	printf("%d\n", sizeof(b));
//	printf("%d\n", sizeof(arr));*/
//
//	short s = 0;
//	int a = 10;
//	printf("%d\n", sizeof(s = a + 5));
//	printf("%d", s);
//
//
//
//	return 0;
//}


//int main()
//{
//	int a = 11;
//	//00000000000000000000000000001011
//	a = a | (1 << 2);
//	printf("%d\n", a);
//	a = a & (~(1 << 2));
//	printf("%d", a);
//	//��������ȡ��(1��0��0��1)
//	//00000000000000000000000000000000  -����
//	//11111111111111111111111111111111  -����
//	//10000000000000000000000000000001  -ԭ��      a=-1
//	/*printf("%d\n", ~a);*/
//
//
//
//
//	return 0;
//}


//int main()
//{
//	int a = 10;
//	printf("%d\n", ++a);  //ǰ��++����++����ʹ��
//	printf("%d", a++);    //����++����ʹ�ã���++
//	return 0;
//}


//int main()
//{
//	int a = (int)3.14;
//	printf("%d", a);
//
//}

//void test1(int arr[])
//{
//	printf("%d\n", sizeof(arr));
//}
//void test2(char ch[])
//{
//	printf("%d\n", sizeof(ch));
//}
//int main()
//{
//	int arr[10] = { 0 };
//	char ch[10] = { 0 };
//	printf("%d\n", sizeof(arr));
//	printf("%d\n", sizeof(ch));
//	test1(arr);
//	test2(ch);
//
//	return 0;
//}


//int main()
//{
//	int a = 0;
//	int b = 1;
//	int c = a || b;
//	printf("%d\n", c);
//
//	return 0;
//}


int main()
{
	int i = 0, a = 1, b = 2, c = 3, d = 4;
	//i = a++ && ++b && d++;
	i == a++ || ++b || d++;
	printf(" a = %d\n b = %d\n c = %d\n d = %d\n", a, b, c, d); 
	//�����1 2 3 4





	return 0;
}