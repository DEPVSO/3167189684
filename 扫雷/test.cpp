#define _CRT_SECURE_NO_WARNINGS 1
#include "扫雷.h"
void menu()
{
	printf("********************************\n");
	printf("*****  1.play   0.exit     *****\n");
	printf("********************************\n");
}
void game()
{

	char arr1[ROWS][COLS] = { 0 };//用来埋雷
	char arr2[ROWS][COLS] = { 0 };//用来作表面
	Initialize(arr1, ROWS, COLS, '0');//初始化棋盘
	Initialize(arr2, ROWS, COLS, '*');
	//print(arr1, ROW, COL);//打印棋盘
	//print(arr2, ROW, COL);
	Bury(arr1, ROW, COL);//埋雷
	print(arr1, ROW, COL);
	print(arr2, ROW, COL);
	sweap(arr1, arr2);//扫雷

	

}

int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("请输入:");
		scanf("%d", &input);
		switch (input)
		{
		case 1:game();
			break;
		case 0:printf("退出\n");
			break;
		default:
			break;
		}
	} while (input);
		return 0;


}