#define _CRT_SECURE_NO_WARNINGS 1
#include"Game.h"
#include<stdio.h>


void InitBoard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			board[i][j] = ' ';
		}
	}
}

void DisplayBoard(char board[ROW][COL], int row, int col)
{
	int i;
	for (i = 0; i < row; i++)
	{
		//1.打印一行数据
		int j;
		for (j = 0; j < col; j++)
		{
			printf(" %c ", board[i][j]);
			if (j < col - 1)
			{
				printf("|");
			}
		}
		printf("\n");
		//2. 打印分隔行
		if (i < row - 1)
		{
			for (j = 0; j < col; j++)
			{
				printf("---");
				if (j < col - 1)
				{
                  printf("|");
				}
				
		    }
			printf("\n");
		}
		
		
		   
	}
} 

void PlayerMove(char board[ROW][COL], int row, int col)
{
	int x = 0, y = 0;
	printf("玩家走:>\n");
	printf("请输入要下的坐标:>");
	scanf("%d%d", &x, &y);
	//判断xy坐标的合法性
	while (1)
	{
      if (x >= 1 && x <= row && y >= 1 && y <= col)
	  {
		  if (board[x - 1][y - 1]== ' ')
		  {
			  board[x - 1][y - 1] = '*';
			  break;
		  }
		  else
		  {
            printf("该坐标被占用！\n");
		  }
		
	  }
	else
	  {
		  printf("坐标非法，请重新输入！\n");
	  }
	}
	
}

void ComputerMove(char board[ROW][COL], int row, int col)
{
	printf("电脑走：>\n");
	int x, y;
	x = rand() % row;
	y = rand() % col;
	while (1)
	{ 
      if (board[x][y] == ' ')
	  {
		board[x][y] = '#';
		break;

	  }
	
	}
	
}

//返回1表示棋盘满了，返回0表示棋盘没有满
int IsFull(char board[ROW][COL], int row, int col)
{
	int i, j;
	for (i = 0; i < row; i++)
	{
		for (j = 0; i < col; j++)
		{
			if (board[i][j] == ' ')
			{
				return 0;  //棋盘没满
			}
		}
	}
	return 1; //棋盘满了
}

char IsWin(char board[ROW][COL], int row, int col)
{
	int i;
	//横三行
	for (i = 0; i < row; i++)
	{
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][1] != ' ')
		{
			return board[i][1];
		}
	}
	//竖三列
	for (i = 0; i < col; i++)
	{
		if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[1][i] != ' ')
		{
			return board[1][i];
		}
	}
	//两个对角线是否满足
	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[1][1] != ' ')
	{
		return board[1][1];
	}
	if (board[2][0] == board[1][1] && board[1][1] == board[0][2] && board[1][1] != ' ')
	{
		return board[1][1];
	}
	//判断是否平局
	if (1 == IsFull(board,ROW,COL))
	{
		return 'Q';
	}
	else
	    return 'C';
}

//void DisplayBoard(char board[ROW][COL], int row, int col)
//{
//	int i;
//	for (i = 0; i < row; i++)
//	{
//		//1.打印一行数据
//		printf(" %c | %c | %c \n", board[i][0], board[i][1], board[i][2]);
//		//2. 打印分隔行
//		if (i < row - 1)
//		{
//			printf("---|---|---\n");
//		}
//
//	}
//	printf("");
//}