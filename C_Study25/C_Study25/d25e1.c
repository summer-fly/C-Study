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

//����һ���ṹ������ -struct stu
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
//	//ʹ�� struct stu ������һ��ѧ������s1������ʼ��
//	struct stu s1 = {"juastin",20,"20000"};
//	/*printf("%s\n", s1.name);
//	printf("%d\n", s1.age);
//	printf("%s\n", s1.id);*/
//	//�ṹ�����.��Ա��
//	struct stu* ps = &s1;
//	printf("%s\n", (*ps).name);
//	printf("%d\n", ps->age);
//	//�ṹ��ָ�� -> ��Ա��
//	return 0;
//}

//int main()
//{
//	char a = 3;
//	//00000000000000000000000000000011   char ֻ��һ���ֽ� ��ȡ��Сλ
//	//00000011   - a��ֵ
//	char b = 127;
//	//00000000000000000000000001111111   char ֻ��һ���ֽ� ��ȡ��Сλ
//	//01111111   - b��ֵ
//	char c = a + b;
//	// a��b�����ӣ�
//	//00000011   ������������ ����λ����������λ�ķ���λ������
//	//00000000000000000000000000000011    ���������
//	//00000000000000000000000001111111
//	//00000000000000000000000010000010
//	 
//	 
//	
//	//10000010   -c��ֵ  ��������
//	//11111111111111111111111110000010   -����
//	//11111111111111111111111110000001   -����
//	//10000000000000000000000001111110   -ԭ��   ʮ����= -126
//	printf("%d\n", c);
//	 //10000010   -c��ֵ
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