#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>

//描述一个学生
	//struct - 结构体关键字  stu - 结构体标签  struct stu -结构体类型
//	struct stuu
//	{
//		//成员变量
//		char name[20];
//		short age;
//		char tele[12];
//		char sex[5];
//	}s1,s2,s3;   //三个结构体全局变量
//
//	typedef struct stu       //自己定义结构体
//	{
//		//成员变量
//		char name[20];
//		short age;
//		char tele[12];
//		char sex[5];
//	}stu;
////结构体
//int main()
//{
//	
//	struct stuu s = {"战三",20,"1111111","男"};   //s 是局部的结构体变量
//	stu s1 = {"ssss",21,"22323232","nv"};
//
//	return 0;
//}

//struct s
//{
//	int a;
//	char c;
//	char arr[20];
//	double d;
//};
//
//struct t
//{
//	char ch[10];
//	struct s s;    //结构体可以包含结构体
//	char* pc;
//};
//
//int main()
//{
//	struct t t = { "hehhe",{100,'w',"hello world",3.14},NULL }; //结构体嵌套结构体
//	printf("%s\n", t.ch);
//	printf("%s\n", t.s.arr);
//	printf("%lf\n", t.s.d);
//	printf("%s\n", t.pc);
//
//	return 0;
//}


typedef struct stu       //自己定义结构体
{
	//成员变量
	char name[20];
	short age;
	char tele[12];
	char sex[5];
}stu;

void print(stu s)
{
	printf("name: %s\n", s.name);
	printf("age: %d\n", s.age);
	printf("tele: %s\n", s.tele);
	printf("sex: %s\n", s.sex);


}
void print2(stu* ps)
{
	printf("name: %s\n", ps->name); 
	printf("age: %d\n", ps->age);
	printf("tele: %s\n", ps->tele);
	printf("sex: %s\n", ps->sex);	
}

int  main()
{
	stu s = { "lisi",40,"2222222","nan" };
	print(s);
	print2(&s);

	return 0;
}