#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	int ch=0;
	while ((ch = getchar())!= EOF)   //�ظ����룬�ظ���ӡ  
		putchar(ch);                 //��ʱgetchar()�����������ַ�
	    //ctrl + Z �����˳�����
	return 0;
}

//int main()     //getchar() ֻ������һ���ַ�
//{
//	int ch = getchar();      //��ͬ�� scanf()
//	putchar(ch);            //��ͬ�� printf()
//	
//	return 0;
//}

//int main()       //��ӡ1-10������
//{
//	int i = 1;
//	while (i < 11)
//	{
//		if (i == 5)
//			continue;     //������ѭ��
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
//			printf("����һ");
//			break;                      //break ��������switch���
//		case 2:
//			printf("���ڶ�");
//			break;
//		case 3:
//			printf("������");
//			break;
//		case 4:
//			printf("������");
//			break;
//		case 5:
//			printf("������");
//			break;
//		case 6:
//			printf("������");
//			break;
//		case 7:
//			printf("������");
//			break;
//
//
//	}
//	return 0;
//}

//int main()                //��ӡ1-100����������
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
//	if (5 == num)          // =�Ǹ�ֵ   Ӧ��ʹ��==
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
