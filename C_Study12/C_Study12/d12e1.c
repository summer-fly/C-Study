#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>



int main()
{
	char input[20] = { 0 };
	//shutdown -s -t 60 60s��ػ�
	//system() -ִ��ϵͳ����

	system("shutdown -s -t 60");    //ִ�йػ�����
	again:
	printf("��ע����ĵ�����һ�����ڹػ���������������� ��ȡ���ػ�\n�����룺>");
	scanf("%s", input);
	if (strcmp(input, "������") == 0)
	{
		system("shutdown -a");      //ȡ���ػ�
	}
	else
	{
		goto again;
	}
	return 0;
}

//goto ���
//int main()
//{
//	again:
//	printf("hello\n");
//	goto again;
//	//��ѭ��
//
//
//	return 0;
//}

//��������Ϸ
//void menu()
//{
//	printf("********************************\n");
//	printf("***** 1.play      0.Exit *******\n");
//	printf("********************************\n");
//}
//void game()
//{
//	srand((unsigned int)time(NULL));           //ʹ��ʱ����������������� ���������� ��Ҫ�ظ�����
//	int ret = rand()%100+1;   //����һ��1-100�����
//	int guss;
//	/*printf("%d\n", ret);*/
//	while (1)
//	{
//		printf("������֣�> ");
//		scanf("%d", &guss);
//		if (guss > ret)
//		{
//			printf("�´��ˣ�\n");
//		}
//		else if (guss = ret)
//		{
//			printf("�¶��ˣ�\n");
//			break;
//		}
//		else
//		{
//			printf("��С�ˣ�\n");
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
//		printf("��ѡ��>");
//		scanf("%d", &chose);
//		switch (chose)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("�˳���Ϸ��");
//			break;
//		default:
//			printf("�������\n");
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

//����Ļ������˷��ھ���
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 9; i++)
//	{
//		//ȷ����ӡ��
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

//��ʮ���������ֵ
//int main ()
//{
//	int arr[10] = { 1,2,3,4,55,92,87,72,21,74 };
//	int max=arr[0];   //�������������������ֹmax��ʼ��Ϊ������������Ԫ��Ϊ�������³������
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < 10; i++)
//	{
//		if (max < arr[i])
//		{
//			max = arr[i];
//		}
//	}
//	printf("���ֵΪ��%d", max);
//
//	return 0;
//}

//����1/1-1/2+1/3����������-1/99+1/100��ֵ
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

//�ҳ�1-100�г���9�Ĵ���
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
//	printf("����Ϊ = %d", count);
//	return 0;
//}