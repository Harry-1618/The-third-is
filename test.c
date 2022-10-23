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
		printf("��Ӯ�ˡ�\n");
	}
	else if (ret == '#')
	{
		printf("����Ӯ�ˡ�\n");
	}
	else
	{
		printf("ƽ�֡�\n");
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
		printf("��Ӯ�ˡ�\n");
	}
	else if (ret == '#')
	{
		printf("����Ӯ�ˡ�\n");
	}
	else
	{
		printf("ƽ�֡�\n");
	}
}

void GradeMenue()
{
	int option = 0;


	Option();
	printf("��ѡ������Ѷȣ�");
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
		printf("������䣨-��-��==\n");
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
		printf("��ѡ��");
		scanf("%d", &input);
		while (getchar() != '\n')
			continue;
		switch (input)
		{
		case 1:
			printf("��Ϸ��ʼ�ˣ�׼�������Ʋð�\n");
			GradeMenue();
			break;
		case 0:
			printf("���Ȼ������?\n");
			break;
		default:
			printf("������䣨-��-��==\n");
			break;
		}
		
	} while (input);

	getchar();

	return 0;
}