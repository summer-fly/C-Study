#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>



//int main()
//{
//	//简化
//	void (*signal(int, void(*)(int)))(int);
//	typedef void(* pfun_t)(int);    //自定义函数指针
//	pfun_t signle(int, pfun_t);     //与上面函数定义意义相同
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
//	//由此可见需要一个数组可以存放4个函数的地址 -函数指针的数组
//	int (*parr[4])(int, int) = { Add,Sub,Mul,Div };    // *parr先与[]结合成为一个数组   ---函数指针数组
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
//	//1.写一个函数指针pf，能够指向my_strcpy
//	char* (*pf)(char*, const char*);
//
//	//2.写一个函数指针数组pfarr，能够存放4个my_strcpy函数的地址 
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




//实现一个计算器  方法1：
//int main()
//{
//	int input = 0;
//	int a, b;
//	//pfarr 是一个函数指针数组   用途-----转移表
//	int(*pfarr[])(int, int) = { 0,Add,Sub,Mul,Div,Xor};
//	do
//	{
//		menu();
//		printf("请选择：>");
//		scanf("%d", &input);
//		if (input >= 1 && input <= 5)
//		{
//			printf("请输入操作数：>");
//			scanf("%d%d", &a, &b);
//			int ret = pfarr[input](a, b);   //由input来悬着函数的操作数
//			printf("%d\n", ret);
//		}
//		else if(input ==0)
//		{
//			printf("退出！\n");
//		}
//		else
//		{
//			printf("选择错误！\n");
//		}
//
//
//	} while (input);  //利用input 进行退出判断
//
//
//
//	return 0;
//}




//实现一个计算器 方法2：
void Calc(int(*pf)(int, int))
{
	int a, b;
	printf("请输入两个操作数：>");
	scanf("%d%d", &a, &b);
	printf("%d\n", pf(a, b));
}

int main()
{


	int input = 0;
	do
	{
		menu();
		printf("请选择:>");
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
			printf("退出！");
			break;
		default:
			printf("选择错误，请重新选择！");
			break;
		}

	}while (input);




	return 0;

}

