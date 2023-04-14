#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"

void board(char arr[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i=0; i < row; i++)
	{
		for (j=0; j < col; j++)
		{
			arr[i][j] = ' ';
		}
	}
}


void ass__board(char arr[ROW][COL], int row, int col)
{
	int i, j;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			printf(" %c ", arr[i][j]);
			if (j < col - 1)
				printf("|");
		}
		printf("\n");
		if (i < row - 1)
		{
			for (j = 0; j < col; j++)
			{
				printf("---");
				if (j < col - 1)
					printf("|");
			}
		}
		printf("\n");
	}
}
	void player(char arr[ROW][COL], int row, int col)
	{
		int x = 0; int y = 0;
		printf("玩家走\n");
		while(1)
		{
			printf("请输入要下的两个坐标: ");
			scanf("%d%d", &x, &y);
			if ((x <= row && x >= 1) && (y <= col && y >= 1))
			{
				if (arr[x - 1][y - 1] == ' ')
				{
					arr[x - 1][y - 1] = '*';
					break;
				}
				else
					printf("坐标已被占用\n");
			}
			else
				printf("坐标非法\n");
		}
	}




	void complexer(char arr[ROW][COL], int row, int col)
	{
		int x = 0;
		int y = 0;
		printf("电脑走\n");
		x = rand() % 3;
		y = rand() % 3;
		while(1)
		{
			x = rand() % 3;
			y = rand() % 3;
			if (arr[x][y] == ' ')
			{
				arr[x][y] = '#';
				break;
			}
		}
	}
	char iswin(char arr[ROW][COL], int row, int col)
	{
		int i = 0,j=0;
		for (i = 0; i < row; i++)
		{
			if (arr[i][0] == arr[i][1] && arr[i][1] == arr[i][2] && arr[i][0] != ' ')
			{
				return arr[i][0];
				
			}
		}
		for (i = 0; i < col; i++)
		{
			if (arr[0][i] == arr[1][i] && arr[1][i] == arr[2][i] && arr[0][i] != ' ')
			{
				return arr[0][i];
				
			}
		}
		if (arr[0][0] == arr[1][1] && arr[1][1] == arr[2][2] && arr[1][1] != ' ')
		{
			return arr[0][i]; 
			
		}
		if (arr[0][2] == arr[1][1] && arr[1][1] == arr[2][0] && arr[1][1] != ' ')
		{
			return arr[0][i];
			
		}
		if (isqu(arr, ROW, COL) == 1)
			return 'Q';
		else
			return 'C';
	}
	int isqu(char arr[ROW][COL], int row, int col)
	{
		int i; int j;
		for (i = 0; i < row; i++)
		{
			for (j = 0; j < col; j++)
			{
				arr[i][j] == ' ';
				return 0;//没满
			}
		}
		return 1;//满了
	}

