#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <windows.h>
#include <string.h>
int main()
{
	char input[20] = {};
//	shutdown -s -t 60 关机指令，60对应t，s对应秒
// 	shutdown -a 取消关机指令
//  system()-是用来执行系统命令的
	system("shutdown -s -t 60");
again:
	printf("请注意，你的电脑将在1分钟内关机，请输入:FUNS445881 取消关机\n请输入:>");
	scanf("%s", &input);
	if (strcmp(input, "FUNS445881") == 0)
	{
		system("shutdown -a");
	}
	else
	{
		goto again;
	}
	return 0;
// goto 也可以在if外层嵌入一个while及加入一个break来实现
//若设法加入服务并属性改为自动，那么开机就会自动开启此exe，从而实现开机关机（手动滑稽）[你甚至可以将时间设置为1s！]
}