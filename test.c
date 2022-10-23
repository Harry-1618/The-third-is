#define _CRT_SECURE_NO_WARNINGS 1

#include"game.h"

void menue()
{
	printf("******************************\n");
	printf("******    1.play       *******\n");
	printf("******    0.exit       *******\n");
	printf("******************************\n");
	
}

void Option()
{
	printf("******************************\n");
	printf("******    1.EASY       *******\n");
	printf("******    0.HARD       *******\n");
	printf("******************************\n");

}

void Easygame()
{
	char board[ROW][COL];
	InitBoard(board, ROW, COL);
	DisplayBoard(board, ROW, COL);
	char ret = 0;
	while (1)
	{

		PlayerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		ret = IsWin(board, ROW, COL);
		if (ret != 'C')
			break;

		EasyComMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		ret = IsWin(board, ROW, COL);
		if (ret != 'C')
			break;
	}
	if (ret == '*')
	{
		printf("你赢了。\n");
	}
	else if (ret == '#')
	{
		printf("电脑赢了。\n");
	}
	else
	{
		printf("平局。\n");
	}
}

void Hardgame()
{
	char board[ROW][COL];
	InitBoard(board, ROW, COL);
	DisplayBoard(board, ROW, COL);
	char ret = 0;
	while (1)
	{

		HardComMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		ret = IsWin(board, ROW, COL);
		if (ret != 'C')
			break;

		PlayerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		ret = IsWin(board, ROW, COL);
		if (ret != 'C')
			break;

	}
	if (ret == '*')
	{
		printf("你赢了。\n");
	}
	else if (ret == '#')
	{
		printf("电脑赢了。\n");
	}
	else
	{
		printf("平局。\n");
	}
}

void GradeMenue()
{
	int option = 0;


	Option();
	printf("请选择你的难度：");
	scanf("%d", &option);
	while (getchar() != '\n')
		continue;
	switch (option)
	{
	case 1:
		Easygame();
		break;
	case 0:
		Hardgame();
		break;
	default:
		printf("认真点输（-。-）==\n");
		break;
	}
}


int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menue();
		printf("请选择；");
		scanf("%d", &input);
		while (getchar() != '\n')
			continue;
		switch (input)
		{
		case 1:
			printf("游戏开始了，准备接受制裁吧\n");
			GradeMenue();
			break;
		case 0:
			printf("你居然不玩了?\n");
			break;
		default:
			printf("认真点输（-。-）==\n");
			break;
		}
		
	} while (input);

	getchar();

	return 0;
}