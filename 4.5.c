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
//int look_up(int arr[][3], int* x, int* y, int k)
//{
//	
//	int lines= 0;
//	int ranks = *y-1;
//	while (lines < x && ranks >= 0)
//	{
//		if (arr[lines][ranks] == k)
//		{
//			*x = lines;
//			*y = ranks;
//			return 1;
//		}
//		else if (k > arr[lines][ranks])
//			lines++;
//		else
//			ranks--;
//	}
//	return 0;
//}
//int main()
//{
//	int arr[4][3] = { {1,3,5},{2,4,6},{7,9,11},{8,10,12} };
//	int k=0;
//	int tem = 0;
//	int line = 4;
//	int rank = 3;
//	printf("请输入要查找的数:");
//	scanf("%d",&k);
//	tem=look_up(arr,&line,&rank,k);
//	if (tem == 1)
//	{
//		printf("找到了\n");
//		printf("下标是%d %d", line, rank);
//		
//	}
//	else
//		printf("找不到\n");
//	return 0;
//}
//模拟strlen
int my_strlen(char* arr)
{
	char* dest = arr;
	while (*dest++ != '\0')
		;
	return (dest - arr-1);
}
int my_strcmp(const char* arr1, const char* arr2)
{
	assert(arr1 != NULL && arr2 != NULL);
	while (*arr1 == *arr2)
	{
		if (*arr1 == '\0')
			return 0;
		arr1++;
		arr2++;
	}
	return *arr1 - *arr2;
}
char* my_strcat( char* destination, const char* source)
{
	assert(destination != NULL && source != NULL);
	while ((*destination))
		destination++;
		
	while (*source)
	{
		*destination = *source;
		destination++;
		source++;
	}
	*destination='0';
}
char* my_strcpy(char* destation, const char* source)
{
	
	assert(destation != NULL && source != NULL);
	while ((*destation++ = *source++))
		;
}
char* my_strstr(const char* arr1,const char* arr2)
{
	while (*arr1)
	{
		while (*arr1 == *arr2)
		{
			char* tem = arr1;
			arr1++;
			arr2++;
			if (*arr2 == '\0')
				return tem;
			else if(*arr1!=*arr2)
				break;
		}
		arr1++;
	}
	return NULL;
}
int main()
{
	char arr1[30] = { "abcdef" };
	char arr2[] = { "ab" };
	int len = my_strlen(arr1);
	int tem = my_strcmp(arr1, arr2);
	int* a = my_strstr(arr1, arr2);
	my_strcat(arr1, arr2);
	my_strcpy(arr1, arr2);
	printf("%s\n", arr1);
	printf("%d\n", tem);
	if (*a = 0)
		printf("没找到\n");
	else
	{
		printf("找到了,地址是：");
		printf("%p\n", a);
	}
	return 0;
}