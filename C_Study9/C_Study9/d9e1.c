#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>


//int main()
//{
//	int i;
//	int jie=1;
//	int arr[4] = { 1,2,3,4};
//	for (i = 0; i < 4; i++)
//	{
//		jie = jie * arr[i];
//	}
//	printf("%d", jie);
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int ji = 1;
//	int sum = 0;
//	int n = 0;
//	for (n = 1; n <=3; n++)
//	{
//		ji = 1;
//		for (i = 1; i <=n; i++)
//		{
//			ji = ji * i;
//
//		}
//		sum = sum + ji;
//	}
//	printf("%d", sum);
//	return 0;
//}

//int main()
//{
//	int i ;
//	int ji=1;
//	for (i = 1; i < 15; i++)
//	{
//		ji = ji * i;
//	}
//	printf("%d", ji);
//	return 0;
//}

//int main()
//{
//	int a =1;
//	do
//	{
//		printf("hhh ");
//		a++;
//	} while (a <= 10);
//	return 0;
//}

//int main()
//{
//	int x, y;
//	for (x = 0, y = 0; x < 2 && y < 5; ++x, y++)
//	{
//		printf("hhh ");
//	}
//	return 0;
//}

//int main()
//{
//	for (;;)          //死循环
//	{
//		printf("hhhh");
//
//	}
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//int main()
//{
//	int i;
//	for (i = 1; i < 10; i++)
//	{
//		if (i = 5)
//			printf("hhhh");
//		printf("yyyy");
//	}
//
//
//
//
//
//	return 0;
//}
//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		if (ch < '0' || ch >'9')
//			continue;
//		putchar(ch);
//	}
//	return 0;
//}

//int main()
//{
//	int ch = 0;
//	int ret = 0;
//	char password[20] = { 0 };
//	printf("请输入密码:> ");
//	scanf("%s", password);   //输入密码保存在password中
//	while ((ch = getchar()) != '\n')
//	{
//		;
//	}
//	printf("请确认（Y/N）:");
//	ret = getchar();
//	if (ret == 'Y')
//	{
//		printf("确认成功！\n");
//
//	}
//	else
//	{
//		printf("放弃确认！\n");
//	}
//	return 0;
//
//}