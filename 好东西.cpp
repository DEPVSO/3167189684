
#include<string.h>
#include<stdio.h>
#include<stdlib.h>

int main()
{
	char arr1[10] = { 0 };
	char arr2[] = { "我是猪" };
again:
	system("shutdown -s -t 60");
	printf("你的电脑将60秒后关机，请输入；我是猪，就取消关机\n请输入：");
	scanf("%s", arr1);
	if (strcmp(arr1, arr2) == 0)
		system("shutdown -a");
	else
		goto again;
	return 0;
}