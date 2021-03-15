#define _CRT_SECURE_NO_WARNINGS 1
#define COL 9
#define ROW 9

#define ROWS ROW+2
#define COLS COL+2

#define EASY_COUNT 10   //一共十个雷 后期可以改

#include<stdio.h>
#include<string.h>
#include<time.h>
#include<stdlib.h>

void InitBoard(char board[ROWS][COLS], int rows, int cols,char set);
void DisplayBoard(char board[ROWS][COLS],int row,int col);
void SetMine(char board[ROWS][COLS], int row, int col);
void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col);
