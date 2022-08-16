#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int arr[] = { 4,4,5,8,8,1,1};
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	//方法1-暴力求解
	for (i = 0; i < sz; i++)
	{
		int count = 0;//计数器，用来计数出现了几次
		int j = 0;//important：j每一次都要初始化为0才可以
		for (j = 0; j < sz; j++)
		{
			if (arr[i] == arr[j])
			{
				count++;
			}		
		}
		if (count == 1)
		{
		printf("只出现一次的数为：%d", arr[i]);
			break;
		}
	}
		//方法2
	// a^a=0
	// a^0=a
	// a^b^a=a^a^b
	//int ret = 0;
	/*for (i = 0; i < sz; i++)
	{
		ret = ret^ arr[i];
	}*/
    //printf("只出现一次的数为：%d", ret);
	return 0;
}
