#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"
void InitBoard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for(i=0;i<row;i++)
		for (j = 0; j < col; j++)
		{
			board[i][j] = ' ';
		}
}

void DisplayBoard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	for (i = 0; i < row; i++)
	{
		int j = 0;
		for (j = 0; j < col; j++)
		{
			printf(" %c ", board[i][j]);
			if (j < col - 1)
				printf("|");
		}
		printf("\n");
		for (j = 0; j < col; j++)
		{
			printf("---");
			if (j< col - 1)
				printf("|");
		}
		printf("\n");
	}
}

void PlayerMove(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;

	printf("请输入坐标：");
	printf("（如：2【空格】3，表示第二行第三列）");
	while (1)
	{
		scanf("%d %d", &i, &j);
		if (i >= 1 && i <= row && j >= 1 && j <= col)
		{
			if (board[i-1][j-1] == ' ')
			{
				board[i - 1][j - 1] = '*';
				break;
			}
			else
			{
				printf("坐标已被占用，请重新输入\n");
			}
		}
		else
		{
			printf("输入错误坐标，输个正确的坐标\n");
		}
	}
}

void HardComMove(char board[ROW][COL], int row, int col)
{
	while (1)
	{
		int x = rand() % row;
		int y = rand() % col;
		int i = 0;
		int j = 0;

		

		for (i = 0; i < col; i++)
		{
			if (board[0][i] == board[1][i] && board[0][i] == '#' && board[2][i] == ' ')
			{
				board[2][i] = '#';
				printf("\n"); printf("\n");
				goto end;
			}
		}

		for (i = 0; i < col; i++)
		{
			if (board[0][i] == board[2][i] && board[0][i] == '#' && board[1][i] == ' ')
			{
				board[1][i] = '#';
				printf("\n"); printf("\n");
				goto end;
			}
		}

		for (i = 0; i < col; i++)
		{
			if (board[2][i] == board[1][i] && board[2][i] == '#' && board[0][i] == ' ')
			{
				board[0][i] = '#';
				printf("\n"); printf("\n");
				goto end;
			}
		}

		for (j = 0; j < row; j++)
		{
			if (board[j][0] == board[j][1] && board[j][0] == '#' && board[j][2] == ' ')
			{
				board[j][2] = '#';
				printf("\n"); printf("\n");
				goto end;
			}
		}

		for (j = 0; j < row; j++)
		{
			if (board[j][0] == board[j][2] && board[j][0] == '#' && board[j][1] == ' ')
			{
				board[j][1] = '#';
				printf("\n"); printf("\n");
				goto end;
			}
		}

		for (j = 0; j < row; j++)
		{
			if (board[j][2] == board[j][1] && board[j][2] == '*' && board[j][0] == ' ')
			{
				board[j][0] = '#';
				printf("\n"); printf("\n");
				goto end;
			}
		}


		if (board[0][0] == board[1][1] && board[0][0] == '#' && board[2][2] == ' ')
		{
			board[2][2] = '#';
			printf("\n"); printf("\n");
			goto end;
		}
		else if (board[2][2] == board[1][1] && board[2][2] == '#' && board[0][0] == ' ')
		{
			board[0][0] = '#';
			printf("\n"); printf("\n");
			goto end;
		}
		else if (board[0][0] == board[2][2] && board[0][0] == '#' && board[1][1] == ' ')
		{
			board[1][1] = '#';
			printf("\n"); printf("\n");
			goto end;
		}
		else if (board[0][2] == board[1][1] && board[0][2] == '#' && board[2][0] == ' ')
		{
			board[2][0] = '#';
			printf("\n"); printf("\n");
			goto end;
		}
		else if (board[2][0] == board[1][1] && board[2][0] == '#' && board[0][2] == ' ')
		{
			board[0][2] = '#';
			printf("\n"); printf("\n");
			goto end;
		}
		else if (board[0][2] == board[2][0] && board[1][1] == '#' && board[1][1] == ' ')
		{
			board[1][1] = '#';
			printf("\n"); printf("\n");
			goto end;
		}
		else if (board[1][1] == ' ')
		{
			board[1][1] = '#';
			printf("\n"); printf("\n");
			goto end;
		}
	
		for (i = 0; i < col; i++)
		{
			if (board[0][i] == board[1][i] && board[0][i] == '*' && board[2][i] == ' ')
			{
				board[2][i] = '#';
				printf("\n"); printf("\n");
				goto end;
			}
		}

		for (i = 0; i < col; i++)
		{
			if (board[0][i] == board[2][i] && board[0][i] == '*' && board[1][i] == ' ')
			{
				board[1][i] = '#';
				printf("\n"); printf("\n");
				goto end;
			}
		}

		for (i = 0; i < col; i++)
		{
			if (board[2][i] == board[1][i] && board[2][i] == '*' && board[0][i] == ' ')
			{
				board[0][i] = '#';
				printf("\n"); printf("\n");
				goto end;
			}
		}

		for (j = 0; j < row; j++)
		{
			if (board[j][0] == board[j][1] && board[j][0] == '*' && board[j][2] == ' ')
			{
				board[j][2] = '#';
				printf("\n"); printf("\n");
				goto end;
			}
		}

		for (j = 0; j < row; j++)
		{
			if (board[j][0] == board[j][2] && board[j][0] == '*' && board[j][1] == ' ')
			{
				board[j][1] = '#';
				printf("\n"); printf("\n");
				goto end;
			}
		}

		for (j = 0; j < row; j++)
		{
			if (board[j][2] == board[j][1] && board[j][2] == '*' && board[j][0] == ' ')
			{
				board[j][0] = '#';
				printf("\n"); printf("\n");
				goto end;
			}
		}


		if (board[0][0] == board[1][1] && board[0][0] == '*' && board[2][2] == ' ')
		{
			board[2][2] = '#';
			printf("\n"); printf("\n");
			goto end;
		}
		else if (board[2][2] == board[1][1] && board[2][2] == '*' && board[0][0] == ' ')
		{
			board[0][0] = '#';
			printf("\n"); printf("\n");
			goto end;
		}
		else if (board[0][0] == board[2][2] && board[0][0] == '*' && board[1][1] == ' ')
		{
			board[1][1] = '#';
			printf("\n"); printf("\n");
			goto end;
		}
		else if (board[0][2] == board[1][1] && board[0][2] == '*' && board[2][0] == ' ')
		{
			board[2][0] = '#';
			printf("\n"); printf("\n");
			goto end;
		}
		else if (board[2][0] == board[1][1] && board[2][0] == '*' && board[0][2] == ' ')
		{
			board[0][2] = '#';
			printf("\n"); printf("\n");
			goto end;
		}
		else if (board[0][2] == board[2][0] && board[1][1] == '*' && board[1][1] == ' ')
		{
			board[1][1] = '#';
			printf("\n"); printf("\n");
			goto end;
		}
		else if (board[1][1] == ' ')
		{
			board[1][1] = '#';
			printf("\n"); printf("\n");
			goto end;
		}
		else if (board[x][y] == ' ')
		{
			board[x][y] = '#';
			printf("\n"); printf("\n");
			break;
		}

	}	
end: return;
}

char IsWin(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;

	for (i = 0; i < row; i++)
	{
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][1] != ' ')
			return board[i][1];
	}

	for (i = 0; i < col; i++)
	{
		if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[1][i] != ' ')
			return board[1][i];
	}

	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[0][0] != ' ')
	{
		return board[1][1];
	}

	if (board[2][0] == board[1][1] && board[1][1] == board[0][2] && board[1][1] != ' ')
	{
		return board[1][1];
	}

	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			if (board[i][j] == ' ')
				return 'C';
		}
	}
	
	return 'Q';
}

void EasyComMove(char board[ROW][COL], int row, int col)
{
	while (1)
	{
		int x = rand() % row;
		int y = rand() % col;
		
		 if (board[x][y] == ' ')
		{
			board[x][y] = '#';
			printf("\n"); printf("\n");
			break;
		}
	}

}