#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>



//int main()
//{
//	//��
//	void (*signal(int, void(*)(int)))(int);
//	typedef void(* pfun_t)(int);    //�Զ��庯��ָ��
//	pfun_t signle(int, pfun_t);     //�����溯������������ͬ
//
//
//
//	return 0;
//}

//int ADD(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//
//	int(*pa)(int, int) = ADD;
//	printf("%d\n", pa(2, 3));
//	printf("%d\n", (*pa)(2, 3));
//
//	return 0;
//}

//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int Sub(int x, int y)
//{
//	return x - y;
//}
//
//int Mul(int x, int y)
//{
//	return x * y;
//}
//
//int Div(int x, int y)
//{
//	return x / y;
//}
//
//int main()
//{
//	int (*pa)(int, int) = Add;  //Sub,Mul,Div
//	//�ɴ˿ɼ���Ҫһ��������Դ��4�������ĵ�ַ -����ָ�������
//	int (*parr[4])(int, int) = { Add,Sub,Mul,Div };    // *parr����[]��ϳ�Ϊһ������   ---����ָ������
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		printf("%d\n",parr[i](2,3));
//	}
//
//	return 0;
//}


//int main()
//{
//	char* my_strcpy(char* dest, const char* src);
//
//
//	//1.дһ������ָ��pf���ܹ�ָ��my_strcpy
//	char* (*pf)(char*, const char*);
//
//	//2.дһ������ָ������pfarr���ܹ����4��my_strcpy�����ĵ�ַ 
//	char* (*pfarr[4])(char*,const char*);
//
//
//
// 
//
//	return 0;
//}



void menu()
{
	printf("*******************************\n");
	printf("******1.Add        2.Sub*******\n");
	printf("******3.Mul        4.Div*******\n");
	printf("******5.Xor    0.Exit**********\n");
	printf("*******************************\n");


}

int Add(int x, int y)
{
	return x + y;
}
int Sub(int x, int y)
{
	return x - y;
}
int Mul(int x, int y)
{
	return x * y;
}
int Div(int x, int y)
{
	return x / y;
}
int Xor(int x, int y)
{
	return x ^ y;
}




//ʵ��һ��������  ����1��
//int main()
//{
//	int input = 0;
//	int a, b;
//	//pfarr ��һ������ָ������   ��;-----ת�Ʊ�
//	int(*pfarr[])(int, int) = { 0,Add,Sub,Mul,Div,Xor};
//	do
//	{
//		menu();
//		printf("��ѡ��>");
//		scanf("%d", &input);
//		if (input >= 1 && input <= 5)
//		{
//			printf("�������������>");
//			scanf("%d%d", &a, &b);
//			int ret = pfarr[input](a, b);   //��input�����ź����Ĳ�����
//			printf("%d\n", ret);
//		}
//		else if(input ==0)
//		{
//			printf("�˳���\n");
//		}
//		else
//		{
//			printf("ѡ�����\n");
//		}
//
//
//	} while (input);  //����input �����˳��ж�
//
//
//
//	return 0;
//}




//ʵ��һ�������� ����2��
void Calc(int(*pf)(int, int))
{
	int a, b;
	printf("������������������>");
	scanf("%d%d", &a, &b);
	printf("%d\n", pf(a, b));
}

int main()
{


	int input = 0;
	do
	{
		menu();
		printf("��ѡ��:>");
		scanf("%d", &input);
		
		switch (input)
		{
			
		case 1:
			Calc(Add);
			break;
		case 2:
			Calc(Sub);
			break;
		case 3:
			Calc(Mul);
			break;
		case 4:
			Calc(Div);
			break;
		case 5:
			Calc(Xor);
			break;
		case 0:
			printf("�˳���");
			break;
		default:
			printf("ѡ�����������ѡ��");
			break;
		}

	}while (input);




	return 0;

}

