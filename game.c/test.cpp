#define _CRT_SECURE_NO_WARNINGS 1
//������������Ϸ
#include "game.h"

void menu()
{
	printf("********************************\n");
	printf("*****  1.play   0.exit     *****\n");
	printf("********************************\n");
}
void game()
{
	char arr[ROW][COL] = { 0 };//ȫ���ո�
	//��ʼ������
	board(arr, ROW, COL);
	//��ӡ����
	ass__board(arr, ROW, COL);
	//����
	while (1)
	{
		//���
		player(arr, ROW, COL);
		ass__board(arr, ROW, COL);
		char ret=iswin(arr, ROW, COL);
		if (ret != 'C')
		{
			if(ret=='*')
				printf("���ʤ\n");
				break;
		}
		//����
		complexer(arr, ROW, COL);
		ass__board(arr, ROW, COL);
		iswin(arr, ROW, COL);
		if ((ret != 'C'))
		{
			if(ret == '#')
			printf("����ʤ\n");
			break;
		}
		if (ret == 'Q')
			printf("ƽ��\n");
	}
	


}
void test()
{
	int imput = 0;
	
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("��ѡ��");
		scanf("%d", &imput);
		switch(imput)
		{
		case 0:
			printf("�˳�\n");
			break;
		case 1:
			game();
			break;
		default:
			printf("ѡ�����\n");
			break;
		}
	}while (imput);

}
int main()
{
	test();
	return 0;
}