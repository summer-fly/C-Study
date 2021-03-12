#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include"Game.h"

//������������Ϸ
void menu()
{
	printf("*******************************\n");
	printf("**** 1.Play         2.Exit ****\n");
	printf("*******************************\n");
}

void Game()
{
	char ret = 0;
	//����������߹���������Ϣ
	char board[ROW][COL] = {0}; //ȫ�����ǿո�
	InitBoard(board,ROW,COL);  //��ʼ������ ���ú���
	//��ӡ����
	DisplayBoard(board,ROW,COL);
	//����
	while (1)
	{
		//�������
		PlayerMove(board,ROW,COL);
		DisplayBoard(board, ROW, COL);
		//�ж�����Ƿ�Ӯ��
		ret = IsWin(board,ROW,COL);
		if (ret != 'C')
		{
			break;
		}
		
		//��������
		ComputerMove(board,ROW,COL);
		DisplayBoard(board, ROW, COL);
		//�жϵ����Ƿ�Ӯ��
		ret = IsWin(board,ROW,COL);
		if (ret != 'C')
		{
			break;
		}

	}
	if (ret == '*')
	{
		printf("���Ӯ\n");
	}
	else if (ret == '#')
	{
		printf("����Ӯ\n");
	}
	else
	{
		printf("ƽ��\n");
	}
}

void test()
{
	int input;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
	    printf("������:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			Game();
			break;
		case 2:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ�����������ѡ��\n");
			break;


		}

	} while (input);
}
int main()
{
	test();

	return 0;
}