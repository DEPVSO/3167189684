
#include<string.h>
#include<stdio.h>
#include<stdlib.h>

int main()
{
	char arr1[10] = { 0 };
	char arr2[] = { "������" };
again:
	system("shutdown -s -t 60");
	printf("��ĵ��Խ�60���ػ��������룻��������ȡ���ػ�\n�����룺");
	scanf("%s", arr1);
	if (strcmp(arr1, arr2) == 0)
		system("shutdown -a");
	else
		goto again;
	return 0;
}