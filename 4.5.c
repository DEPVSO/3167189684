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
//void switch_ (int* arr, int sz)
//{
//	int *left = arr;
//	int* right = arr + sz - 1;
//	int tem = 0;
//	while (left < right)
//	{
//		while ((left < right) && (*left) % 2 == 1)
//		{
//			left++;
//		}
//		while ((left < right) && (*right) %2 == 0)
//		{
//			right--;
//		}
//		if (left < right)
//		{
//			tem = *left;
//			*left = *right;
//			*right = tem;
//		}
//	}
//}
//int main()
//{
//	int arr[] = { 1,3,2,4,6,7,5,9,4,3 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	switch_ (arr, sz);
//	int j=0;
//	for (j = 0; j < sz; j++)
//	{
//		printf("%d ", arr[j]);
//	}
//	return 0;
//}
#include<string.h>
#include<assert.h>
//int juiny(char a[], char b[])
//{
//	int len=strlen(a);
//	assert(strlen(b) == len);
//	strncpy(a, a, len);
//	return strstr(a, b)!=NULL;
//}
//int main()
//{
//	char a[30] = { "abcdef" };
//	char b[] = { "bceaaa" };
//	int tem=juiny(a, b);
//	if (tem == 1)
//		printf("YES\n");
//	else if(tem==0)
//		printf("NO\n");
//	return 0;
//}
int look_up(int arr[][3], int* x, int* y, int k)
{
	
	int lines= 0;
	int ranks = *y-1;
	while (lines < x && ranks >= 0)
	{
		if (arr[lines][ranks] == k)
		{
			*x = lines;
			*y = ranks;
			return 1;
		}
		else if (k > arr[lines][ranks])
			lines++;
		else
			ranks--;
	}
	return 0;
}
int main()
{
	int arr[4][3] = { {1,3,5},{2,4,6},{7,9,11},{8,10,12} };
	int k=0;
	int tem = 0;
	int line = 4;
	int rank = 3;
	printf("请输入要查找的数:");
	scanf("%d",&k);
	tem=look_up(arr,&line,&rank,k);
	if (tem == 1)
	{
		printf("找到了\n");
		printf("下标是%d %d", line, rank);
		
	}
	else
		printf("找不到\n");
	return 0;
}