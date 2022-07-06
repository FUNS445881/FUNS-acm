#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <windows.h>
int main()
{
	char arr1[] = "Welcome to My World!";
	char arr2[] = "####################";
	int left = 0, right = 0, st = 0;
	st = strlen(arr1) - 1;
	right = st;
	while (left <= right)
	{
		arr2[left] = arr1[left];
		arr2[right] = arr1[right];
		left++, right--;	
		system("cls");
		printf("%s\n", arr2);
		Sleep(1000);
	};
	return 0;
}
