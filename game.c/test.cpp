#define _CRT_SECURE_NO_WARNINGS 1
//测试三字棋游戏
#include "game.h"

void menu()
{
	printf("********************************\n");
	printf("*****  1.play   0.exit     *****\n");
	printf("********************************\n");
}
void game()
{
	char arr[ROW][COL] = { 0 };//全部空格
	//初始化棋盘
	board(arr, ROW, COL);
	//打印棋盘
	ass__board(arr, ROW, COL);
	//下棋
	while (1)
	{
		//玩家
		player(arr, ROW, COL);
		ass__board(arr, ROW, COL);
		char ret=iswin(arr, ROW, COL);
		if (ret != 'C')
		{
			if(ret=='*')
				printf("玩家胜\n");
				break;
		}
		//电脑
		complexer(arr, ROW, COL);
		ass__board(arr, ROW, COL);
		iswin(arr, ROW, COL);
		if ((ret != 'C'))
		{
			if(ret == '#')
			printf("电脑胜\n");
			break;
		}
		if (ret == 'Q')
			printf("平局\n");
	}
	


}
void test()
{
	int imput = 0;
	
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("请选择：");
		scanf("%d", &imput);
		switch(imput)
		{
		case 0:
			printf("退出\n");
			break;
		case 1:
			game();
			break;
		default:
			printf("选择错误\n");
			break;
		}
	}while (imput);

}
int main()
{
	test();
	return 0;
}