#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	//方法1
	int min1=0,min=0,mid,a, b, c,max1,max;
	scanf("%d%d%d", &a, &b, &c);
	max1 = (a > b ? a : b);
	max = (max1 > c ? max1 : c);
	min1 = (a > b ? b : a);
	min = (min1 > c ? c : min1);
	if (max > a ,a> min)
		mid = a;
	else if (max > b,b > min)
		mid = b;
	else 
		mid = c;
	printf("%d %d %d", max, mid, min);
	/*方法2*/
	//int a, b, c, mid;
	//scanf("%d%d%d", &a, &b, &c);
	//if (a < b)
	//{
	//	mid = a;
	//	a = b;
	//	b = mid;
	//}
	//if (a < c)
	//{
	//	mid = a;
	//	a = c;
	//	c = mid;
	//}
	//if (b < c)
	//{
	//	mid = b;
	//	b = c;
	//	c = mid;
	//}
	//printf("%d%d%d", a, b, c);
	return 0;
}
