#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>

//����һ��ѧ��
	//struct - �ṹ��ؼ���  stu - �ṹ���ǩ  struct stu -�ṹ������
//	struct stuu
//	{
//		//��Ա����
//		char name[20];
//		short age;
//		char tele[12];
//		char sex[5];
//	}s1,s2,s3;   //�����ṹ��ȫ�ֱ���
//
//	typedef struct stu       //�Լ�����ṹ��
//	{
//		//��Ա����
//		char name[20];
//		short age;
//		char tele[12];
//		char sex[5];
//	}stu;
////�ṹ��
//int main()
//{
//	
//	struct stuu s = {"ս��",20,"1111111","��"};   //s �Ǿֲ��Ľṹ�����
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
//	struct s s;    //�ṹ����԰����ṹ��
//	char* pc;
//};
//
//int main()
//{
//	struct t t = { "hehhe",{100,'w',"hello world",3.14},NULL }; //�ṹ��Ƕ�׽ṹ��
//	printf("%s\n", t.ch);
//	printf("%s\n", t.s.arr);
//	printf("%lf\n", t.s.d);
//	printf("%s\n", t.pc);
//
//	return 0;
//}


typedef struct stu       //�Լ�����ṹ��
{
	//��Ա����
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