#define _CRT_SECURE_NO_WARNINGS 1
#include "ɨ��.h"
void menu()
{
	printf("********************************\n");
	printf("*****  1.play   0.exit     *****\n");
	printf("********************************\n");
}
void game()
{

	char arr1[ROWS][COLS] = { 0 };//��������
	char arr2[ROWS][COLS] = { 0 };//����������
	Initialize(arr1, ROWS, COLS, '0');//��ʼ������
	Initialize(arr2, ROWS, COLS, '*');
	//print(arr1, ROW, COL);//��ӡ����
	//print(arr2, ROW, COL);
	Bury(arr1, ROW, COL);//����
	print(arr1, ROW, COL);
	print(arr2, ROW, COL);
	sweap(arr1, arr2);//ɨ��

	

}

int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("������:");
		scanf("%d", &input);
		switch (input)
		{
		case 1:game();
			break;
		case 0:printf("�˳�\n");
			break;
		default:
			break;
		}
	} while (input);
		return 0;


}