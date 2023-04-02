#define _CRT_SECURE_NO_WARNINGS 1
#include"扫雷.h"
void Initialize(char arr[ROWS][COLS], int rows, int cols, int x)
{
	int i, j;
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < cols; j++)
		{
			arr[i][j] = x;
		}
	}
}void print(char arr[ROWS][COLS], int row, int col)
{
	int i, j;
	for (i = 0; i <= row; i++)
	{
		printf("%d ", i);
	}
	printf("X\n");
	for (i = 1; i <= col; i++)
	{
		printf("%d ", i);
		for (j = 1; j <= col; j++)
		{
			printf("%c ", arr[i][j]);
		}
		printf("\n");
	}
	printf("Y\n");
}void Bury(char arr[ROWS][COLS], int row, int col)
{
	int count = COUNT;
	while (count)
	{
		int x = rand() % row + 1;
		int y = rand() % col + 1;
		
		if(arr[x][y]=='0')
		{
			arr[x][y] = '1';
			count--;
		}
		
	}
}
void sweap(char arr1[ROWS][COLS], char arr2[ROWS][COLS])
{
	int flog = 1;
	int a = 0;
	do
	{
		int x, y;
		printf("请输入2个坐标Y和X：");
		scanf("%d%d", &x, &y);
		if (arr2[x][y] == '*')
		{
			if (x >= 1 && x <= ROW && y >= 1 && y <= COL)
			{
				if (arr1[x][y] == '0')
				{
					arr2[x][y] = cbb(arr1, x, y);//算出周围雷的数量

					/*print(arr2, ROW, COL);*/
					a++;
					if (arr2[x][y] == '0')
					{
						cbb2(arr1, arr2, x, y,a);

					}
					print(arr2, ROW, COL);
				}
				else if (arr1[x][y] == '1')
				{
					printf("你踩中雷，游戏结束\n");
					print(arr1, ROW, COL);
					break;
				}

				else
					printf("输入不合法\n");
				if (a == ROW * COL - COUNT)//胜利条件
				{
					flog = 0;
					printf("你赢了\n");
				}
			}
		}
		else
			printf("该坐标已经被占用\n");
	} while (flog);
}


char cbb(char arr1[ROWS][COLS], int x, int y)
{
	int i, j;
	char count = '0';
	for (i = x - 1; i <= x + 1; i++)
	{
		for(j=y-1;j<=y+1;j++)
		{
			if (i == x && j == y)
				continue;
			else if (arr1[i][j] == '1')
				count ++;
		}
	}
	return count;
}
int cbb2(char arr1[ROWS][COLS], char arr2[ROWS][COLS], int x, int y,int a)
{
	int i, j;
	for (i = x - 1; i <= x + 1; i++)
	{
		for (j = y - 1; j <= y + 1; j++)
		{
			
			if (x >= 1 && x <= ROW && y >= 1 && y <= COL)
			{
				if (i == x && j == y)
					continue;
				 if (arr1[i][j] == '0')
				{
					arr2[i][j] = cbb(arr1, x, y);
					a++;
					if (arr2[i][j] == '0')
					{
						x = i;
						y = j;
						cbb2(arr1, arr2, x, y,a);
					}
				}
			}
		}
	}
	return a;

}
