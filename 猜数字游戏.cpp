#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include<time.h>
void menu()
{
	printf("************************\n");
	printf("*** 1.Play   0.Exit ****\n");
	printf("************************\n");
}

void game()
{
	int ret = 0;
	int guess = 0;
	ret = rand()%100 +1;//使ret范围为1-100，rand_max大小为32767
//	printf("%d\n", ret);测试ret是否随机使用
	while (1)
	{
		printf("请输入你猜的数字:>");
		scanf("%d", &guess);
		if (guess > ret)
			printf("猜大了\n");
		else if (guess < ret)
			printf("猜小了\n");
		else 
		{
			printf("猜对了！\n");
			break;
		}
	}
}

int main()
{
	//time 是long定义，要强制转换为int，使用unsigned int
	//NULL表示空指针，因为不想产生效果。
	//srand放在此处是为了让他srand（）内的数字不会一直变化，从而实现每次不同的伪随机。若放在game（）{}内的话则会发生随机数相差不大
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("请输入选择:>\n");
		scanf("%d", & input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏");
			break;
		default:
			printf("输入错误，请重来");
			break;
		}
	} while (input);
	return 0;
}
