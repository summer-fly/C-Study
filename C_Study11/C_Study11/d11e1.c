#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<windows.h>
#include<stdlib.h>

//打印1000-2000年之间的闰年
int main()
{
	int year;
	int cunt = 0;
	for (year = 1000; year <= 2000; year++)
	{
		//判断year是否是闰年
		//判断方法1：能被4整除，不能被100整除的数
		//判断方法2.能被400整除的是润年
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

//求两个值得最大公约数    辗转相除法
//int main()
//{
//	int m;
//	int n;
//	int r;
//	scanf("%d%d", &m, &n);
//	while (m % n)     //m 与 n取模不等于0则继续
//	{
//		r = m % n;
//		m = n;
//		n = r;
//	}
//	printf("%d", n);
//	return 0;
//}

//打印1-100之间的3的倍数
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

//判断三个数字大小，并按从大到小顺序打印出来
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
//		printf("请输入密码：>");
//		scanf("%s", password);
//		if (strcmp(password, "qwert")==0)     //==不能用来比较字符串是否相等 应使用一个库函数 -strcmp
//		{
//			printf("密码正确！");
//			break;
//		}
//		else
//		{
//			printf("密码错误 ");
//		}
//	}
//	if (i == 3)
//	{
//		printf("三次错误，程序结束！");
//  
//	}
//	return 0;
//}

//完成####从左右两边同时显示字母
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
//		Sleep(1000);    //一秒钟打印一次
//		system("cls");  //执行命令函数 -清屏
//		left++;
//		right--;
//
//	}
//	
//	return 0;
//}