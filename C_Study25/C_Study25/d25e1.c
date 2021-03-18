#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>




//int main()
//{
//	int a = 1;
//	int b = 2;
//	int c = (a > b,a=b+10,a,b=a+1);
//	printf("%d", c);
//
//
//
//	return 0;
//}

//创建一个结构体类型 -struct stu
//struct stu
//{
//	char name[20];
//	int age;
//	char id[20];
//};
//
//int main()
//{
//	int a=10;
//	//使用 struct stu 创建了一个学生对象s1，并初始化
//	struct stu s1 = {"juastin",20,"20000"};
//	/*printf("%s\n", s1.name);
//	printf("%d\n", s1.age);
//	printf("%s\n", s1.id);*/
//	//结构体变量.成员名
//	struct stu* ps = &s1;
//	printf("%s\n", (*ps).name);
//	printf("%d\n", ps->age);
//	//结构体指针 -> 成员名
//	return 0;
//}

//int main()
//{
//	char a = 3;
//	//00000000000000000000000000000011   char 只有一个字节 截取最小位
//	//00000011   - a的值
//	char b = 127;
//	//00000000000000000000000001111111   char 只有一个字节 截取最小位
//	//01111111   - b的值
//	char c = a + b;
//	// a与b如何相加？
//	//00000011   进行整型提升 符号位提升（按高位的符号位提升）
//	//00000000000000000000000000000011    两个数相加
//	//00000000000000000000000001111111
//	//00000000000000000000000010000010
//	 
//	 
//	
//	//10000010   -c的值  整型提升
//	//11111111111111111111111110000010   -补码
//	//11111111111111111111111110000001   -反码
//	//10000000000000000000000001111110   -原码   十进制= -126
//	printf("%d\n", c);
//	 //10000010   -c的值
//
//
//
//
//
//	return 0;
//}

int main()
{
	char c = 1;
	printf("%u\n", sizeof(c));
	printf("%u\n", sizeof(+c));
	printf("%u\n", sizeof(!c));







	return 0;
}