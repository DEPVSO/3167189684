#define _CRT_SECURE_NO_WARNINGS 1
#include<stdlib.h>
#include<stdio.h>

//猜凶手
//int main()
//{
//	int killer;
//	for (killer = 'a'; killer <= 'd'; killer++)
//	{
//		if ((killer != 'a') + (killer == 'c') + (killer == 'd') + (killer != 'd') == 3)
//			printf("%c\n", killer);
//	}
//	return 0;
//}
//杨辉三角
//int main()
//{
//	int i, j,row;
//	int arr[30][30] = {1};
//	printf("请输入打印几行：");
//	scanf("%d",&row);
//	for (i = 1; i <row; i++)
//	{
//		arr[i][0] = 1;
//		for (j = 1; j <=i; j++)
//		{
//			
//			arr[i][j] = arr[i - 1][j] + arr[i - 1][j - 1];
//			
//		}
//		
//	}
//	for (i = 0; i < row; i++)
//	{
//		for (j = 0; j <= i; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}
int main()
{
	char* p = "abcdef";
	
	printf("%s", p);
	return 0;
}