#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<windows.h>
int main()
{
	int a = 0;
	int i = 0, j = 0;
	int max = 0;
	int arr[10] = { 0 };
	printf("ÇëÊäÈë10¸öÊı");
	for (i = 0; i < 10; i++)
	{
		scanf("%d", &a);
		arr[i] = a;
	}
	max = arr[0];
	system("cls");
	for (j = 0; j < 10; j++)
	{
		if (max < arr[j])
		{
			max = arr[j];
		}
	}
	printf("%d\n", max);
	return 0;
}
