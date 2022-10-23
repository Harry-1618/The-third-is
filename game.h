#pragma once

#define ROW 3
#define COL 3 

#include <stdio.h>
#include <stdlib.h>
#include <time.h>


void InitBoard(char board[ROW][COL], int row, int col);
void DisplayBoard(char board[ROW][COL], int row, int col);
void PlayerMove(char board[ROW][COL], int row, int col);
void HardComMove(char board[ROW][COL], int row, int col);
char IsWin(char board[ROW][COL], int row, int col);
void EasyComMove(char board[ROW][COL], int row, int col);