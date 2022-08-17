#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void bubble(int arr[],int sz)
{
	int i = 0;
	for (i = 0; i < sz-1; i++)//sz要减一，是因为10个数字进行冒泡排序时，仅仅只需要比较9次
	{
		int j = 0;
		for (j = 0; j < sz-1-i; j++)
		//sz-1-i是因为，当有一个数通过冒泡排序来到最右侧时，下一个数进行冒泡排序时可以已知比上一个数字小，不再需要比较，可以节省算力
		{
			if (arr[j] > arr[j+1])
			{
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
				//这里传递的不是形参而是实参的原因是你使用了一个数组来接收了arr的首元素地址（及之后）【数组传的其实就是地址】
			}
		}
	}
}

int main()
{
	int arr[] = {9,8,7,6,5,4,3,2,1,0};//这里其实不要求一定要按照数字大小排序，因为if函数的使用，小于，不动，进行下一步比较；大于，交换，大的继续比较；从而实现最大的数移动到最右边
	int i = 0;
	int sz = 0;
	sz = sizeof(arr) / sizeof(arr[0]);
	//对该数列进行排序从而形成升序
	bubble(arr,sz);
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}
