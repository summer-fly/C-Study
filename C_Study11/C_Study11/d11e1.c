#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<windows.h>
#include<stdlib.h>

//��ӡ1000-2000��֮�������
int main()
{
	int year;
	int cunt = 0;
	for (year = 1000; year <= 2000; year++)
	{
		//�ж�year�Ƿ�������
		//�жϷ���1���ܱ�4���������ܱ�100��������
		//�жϷ���2.�ܱ�400������������
		if (year % 4 == 0 && year % 100 != 0)
		{
			printf("%d ", year);
			cunt++;

		}
		else if (year % 400 == 0)
		{
			printf("%d ", year);
			cunt++;
		}
			
	}
	printf("\n\n%d", cunt);
	return 0;
}

//������ֵ�����Լ��    շת�����
//int main()
//{
//	int m;
//	int n;
//	int r;
//	scanf("%d%d", &m, &n);
//	while (m % n)     //m �� nȡģ������0�����
//	{
//		r = m % n;
//		m = n;
//		n = r;
//	}
//	printf("%d", n);
//	return 0;
//}

//��ӡ1-100֮���3�ı���
//int main()
//{
//	int i;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i%3 == 0)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}

//�ж��������ִ�С�������Ӵ�С˳���ӡ����
//int main()
//{
//	int a;
//	int b;
//	int c;
//	scanf("%d%d%d", &a, &b, &c);
//	if (a < b)
//	{
//		int tmp = a;
//		a = b;
//		b = tmp;
//	}
//	if (a < c)
//	{
//		int tmp = a;
//		a = c;
//		c = tmp;
//	}
//	if (b < c)
//	{
//		int tmp = b;
//		b = c;
//		c = tmp;
//	}
//	printf("%d %d %d", a, b, c);
//	return 0;
//}

//int main()
//{
//	int i;
//	char password[20];
//	for (i = 0; i <3; i++)
//	{
//		printf("���������룺>");
//		scanf("%s", password);
//		if (strcmp(password, "qwert")==0)     //==���������Ƚ��ַ����Ƿ���� Ӧʹ��һ���⺯�� -strcmp
//		{
//			printf("������ȷ��");
//			break;
//		}
//		else
//		{
//			printf("������� ");
//		}
//	}
//	if (i == 3)
//	{
//		printf("���δ��󣬳��������");
//  
//	}
//	return 0;
//}

//���####����������ͬʱ��ʾ��ĸ
//int main()
//{
//	char wel[] = "welcome to bit!!!!";
//	char xin[] = "##################";
//	int left = 0;
//	//int right = sizeof(wel) / sizeof(wel[0])-2;
//	int right = strlen(wel)-1;
//
//	while(left<=right)
//	{
//		xin[left] = wel[left];
//		xin[right] = wel[right];
//		printf("%s\n", xin);
//		Sleep(1000);    //һ���Ӵ�ӡһ��
//		system("cls");  //ִ������� -����
//		left++;
//		right--;
//
//	}
//	
//	return 0;
//}