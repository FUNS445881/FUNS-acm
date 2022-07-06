#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int sk, right, mid = 0, k = 0;
	int left = 0;
	scanf("%d", &k);
	sk = sizeof(arr) / sizeof(arr[0]);
	right = sk - 1;
	while (left <= right)
	{
		mid = (left + right) / 2;
		if (arr[mid] < k)
		{
			left = mid + 1;
		}
		else if (arr[mid] > k)
		{
			right = mid - 1;
		}
		else
		{
			printf("已找到，下标为:%d\n", mid);
			break;
		}
	}
	if (left > right)
	{
		printf("找不到所选数字");
	}
	return 0;
}
