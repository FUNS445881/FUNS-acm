#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
	int i=0;
	char password[20] = { 0 };
	char repassword[20] = { 0 };
	printf("请输入密码:");
	scanf("%s" ,password);
	system("cls");
	for (i = 1; i <= 2; i++) {
		printf("请重新确认密码:");
		scanf("%s", repassword);
		system("cls");
		if (strcmp(repassword, password)== 0 )
		{
			printf("登陆成功\n");
			break;
		}
		else
		{
			printf("密码错误\n");
		}
	}
	if (i == 3)
		printf("登陆失败,请离开这个舞台");
	return 0;
}