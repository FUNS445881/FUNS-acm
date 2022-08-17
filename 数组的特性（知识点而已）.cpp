#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int arr[] = { 4,4,5,8,8,1 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	printf("%d\n", sizeof(arr));
	printf("%p\n", *arr);
	printf("%p\n", arr);
	printf("%p\n", &arr[0]);
	printf("%p\n", &arr);	//虽然结果与1,2一致，但1,2相互等价，而&arr取出来的是整个数组的地址，代表从首元素地址开始
	//区别可以从下面3个代码看清,1,2的是下一个元素的地址，而3是整个数组地址之后的地址
	printf("*********\n");
	printf("%p\n", arr + 1);
	printf("%p\n", &arr[0] + 1);
	printf("%p\n", &arr+1);

	//数组名其实是数组首元素的地址（存在两个例外）
	//1：sizeof（数组名），此时的数组名表示的是整个数组，sizeof计算的是整个数组的大小，单位是字节。
	//2：&数组名，数组名代表真个数组，&数组名，取出的是整个数组的地址
	return 0;
}
