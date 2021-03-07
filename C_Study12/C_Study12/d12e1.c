#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>



int main()
{
	char input[20] = { 0 };
	//shutdown -s -t 60 60s后关机
	//system() -执行系统命令

	system("shutdown -s -t 60");    //执行关机命令
	again:
	printf("请注意你的电脑在一分钟内关机，如果输入我是猪 就取消关机\n请输入：>");
	scanf("%s", input);
	if (strcmp(input, "我是猪") == 0)
	{
		system("shutdown -a");      //取消关机
	}
	else
	{
		goto again;
	}
	return 0;
}

//goto 语句
//int main()
//{
//	again:
//	printf("hello\n");
//	goto again;
//	//死循环
//
//
//	return 0;
//}

//猜数字游戏
//void menu()
//{
//	printf("********************************\n");
//	printf("***** 1.play      0.Exit *******\n");
//	printf("********************************\n");
//}
//void game()
//{
//	srand((unsigned int)time(NULL));           //使用时间戳来设置随机数起点 放在主函数 不要重复生成
//	int ret = rand()%100+1;   //生成一个1-100随机数
//	int guss;
//	/*printf("%d\n", ret);*/
//	while (1)
//	{
//		printf("请猜数字：> ");
//		scanf("%d", &guss);
//		if (guss > ret)
//		{
//			printf("猜大了！\n");
//		}
//		else if (guss = ret)
//		{
//			printf("猜对了！\n");
//			break;
//		}
//		else
//		{
//			printf("猜小了！\n");
//		}
//	}
//
//
//}
//int main()
//{
//	
//	int chose;
//	do
//	{
//		menu();
//		printf("请选择：>");
//		scanf("%d", &chose);
//		switch (chose)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("退出游戏！");
//			break;
//		default:
//			printf("输入错误！\n");
//			break;
//
//		}
//
//
//
//	} while (chose);
//
//	return 0;
//}

//在屏幕上输出乘法口诀表
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 9; i++)
//	{
//		//确定打印行
//		int j = 1;
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d * %d = %-2d  ", i, j, i * j);
//		}
//		printf("\n");
//	}
//
//	return 0;
//}

//求十个数的最大值
//int main ()
//{
//	int arr[10] = { 1,2,3,4,55,92,87,72,21,74 };
//	int max=arr[0];   //利用数组里面的数，防止max初始化为整数但数组内元素为负数导致程序出错
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < 10; i++)
//	{
//		if (max < arr[i])
//		{
//			max = arr[i];
//		}
//	}
//	printf("最大值为：%d", max);
//
//	return 0;
//}

//计算1/1-1/2+1/3。。。。。-1/99+1/100的值
//int main()
//{
//	int i;
//	double sum = 0;
//	int flag =1;
//	for (i = 1; i <= 100; i++)
//	{
//		sum += flag * 1.0 / i;
//		flag = -flag;
//	}
//	printf("%lf", sum);
//	return 0;
//}

//找出1-100中出现9的次数
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 10 == 9)
//		{
//			count++;
//		}
//		if (i / 10 == 9)
//		{
//			count++;
//		}
//	}
//	printf("个数为 = %d", count);
//	return 0;
//}