#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<assert.h>



//struct S
//{
//	int a;
//	char c;
//	double d;
//
//};
//
//void Init(struct S* tmp)
//{
//	tmp->a = 100;
//	tmp->c = 'S';
//	tmp->d = 3.14;
//}
//
//void Print(const struct S* tmp)
//{
//	printf("%d  %c  %lf \n", tmp->a, tmp->c, tmp->d);
//}
//
//int main()
//{
//	
//	struct S s = {0};
//
//	Init(&s);        //值需要改变 所以用&
//	Print(&s);        //不要改变值 使用不用加&
//
//	//printf("%d ", s.a);
//
//	//s.a = 100;
//	//s.c = 'c';
//	//s.d = 1.2;
//	//printf("%d ", s.a);
//
//	return 0;
//}




//
//位段 - 二进制位
//
//struct S           
//{
//	int a : 2;       
//	int b : 5;       
//	int c : 10;      
//	int d : 30;      
//	
//
//};
//
//
//int main()
//{
//
//	struct S s;
//	printf("%d\n", sizeof(s));  ///8个字节
//
//
//
//
//
//	return 0;
//}

struct S
{
	char a : 3;
	char b : 4;
	char c : 5;
	char d : 4;

};


int main()
{
	struct S s = { 0 };
	s.a = 10;
	s.b = 12;
	s.c = 3;
	s.d = 4;



	return 0;
}
