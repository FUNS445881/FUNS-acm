#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int my_strlen(char* str)
{
	if (*str != '\0')
		return 1 + my_strlen(str + 1);
	else
		return 0;
}

int main()
{
	char arr[] = "Funs445881";
	int len = my_strlen(arr);//arr是数组，数组传参，传过去的不是整个数组，而是数组第一个元素的地址，这也是为什么是char*str，str+1即为下一个元素的地址。
	printf("len = %d\n", len);
	return 0;
}
