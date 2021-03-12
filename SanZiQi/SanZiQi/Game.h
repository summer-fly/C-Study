#define _CRT_SECURE_NO_WARNINGS 1
#include<stdlib.h>
#include<time.h>
#define ROW 3
#define COL 3
void InitBoard(char board[ROW][COL], int row,int col); //函数声明
void DisplayBoard(char board[ROW][COL], int row, int col);  //声明打印棋盘函数
void PlayerMove(char board[ROW][COL],int row,int col);
void ComputerMove(char board[ROW][COL], int row, int col);
char IsWin(char board[ROW][COL], int row, int col);

//告诉我们四种状态 玩家赢‘*’ 电脑赢 ‘#’ 平局‘Q’’ 谁都没赢'C'