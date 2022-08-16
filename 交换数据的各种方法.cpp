#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//方法4函数
void swap(int* pa, int* pb)
{
	int tep = 0;
	tep = *pa;
	*pa = *pb;
	*pb = tep;
}

int main()
{
	int a = 445;
	int b = 881;
//第一个方法：无第三变量交换数据a，b
//a = a + b;
//b = a - b;
//a = a - b;
//存在问题:溢出
//int - 4个字节-32bit位-最大值：2157583647，a+b若超出此值，代码执行出问题
//第二个方法：按(二进制)位异或，相同为0，相异为1。缺点：可读性差，执行效率较低
//a = a ^ b;
//b = a ^ b;
//a = a ^ b;
//采用第三个变量的话，可读性强，执行效率高
//c = a;
//a = b;
//b = c;
//第4个方法：取地址函数
	swap(&a , &b);
printf("交换后, a=%d ,b=%d", a, b);
	return 0;
}

