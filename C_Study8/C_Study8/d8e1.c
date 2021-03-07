#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	int ch=0;
	while ((ch = getchar())!= EOF)   //重复输入，重复打印  
		putchar(ch);                 //此时getchar()可以输入多个字符
	    //ctrl + Z 可以退出输入
	return 0;
}

//int main()     //getchar() 只能输入一个字符
//{
//	int ch = getchar();      //等同于 scanf()
//	putchar(ch);            //等同于 printf()
//	
//	return 0;
//}

//int main()       //打印1-10的数字
//{
//	int i = 1;
//	while (i < 11)
//	{
//		if (i == 5)
//			continue;     //陷入死循环
//		printf("%d ", i);  
//		i++;	         
//	}
//	return 0;
//}

//int main()
//{
//	int day;
//	scanf("%d", &day);
//	switch(day)
//	{
//		case 1:
//			printf("星期一");
//			break;                      //break 用来跳出switch语句
//		case 2:
//			printf("星期二");
//			break;
//		case 3:
//			printf("星期三");
//			break;
//		case 4:
//			printf("星期四");
//			break;
//		case 5:
//			printf("星期五");
//			break;
//		case 6:
//			printf("星期六");
//			break;
//		case 7:
//			printf("星期日");
//			break;
//
//
//	}
//	return 0;
//}

//int main()                //打印1-100的所有奇数
//{
//	int a = 1;
//	for (a = 1; a < 101; a++)
//	{
//		if (a % 2 != 0)
//		{
//			printf("%d\n", a);
//		}
//	}
//	return 0;
//}

//int main()
//{
//	int num = 4;
//	if (5 == num)          // =是赋值   应该使用==
//	{
//		printf("nihao \n");
//
//	}
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int b = 2;
//	if (a == 1)
//	{
//		if (b == 2)
//			printf("hh\n");
//	}
//	else
//		printf("hhehe\n");
//	return 0;
//
//}
