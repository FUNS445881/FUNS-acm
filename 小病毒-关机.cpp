#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <windows.h>
#include <string.h>
int main()
{
	char input[20] = {};
//	shutdown -s -t 60 �ػ�ָ�60��Ӧt��s��Ӧ��
// 	shutdown -a ȡ���ػ�ָ��
//  system()-������ִ��ϵͳ�����
	system("shutdown -s -t 60");
again:
	printf("��ע�⣬��ĵ��Խ���1�����ڹػ���������:FUNS445881 ȡ���ػ�\n������:>");
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
// goto Ҳ������if���Ƕ��һ��while������һ��break��ʵ��
//���跨����������Ը�Ϊ�Զ�����ô�����ͻ��Զ�������exe���Ӷ�ʵ�ֿ����ػ����ֶ�������[���������Խ�ʱ������Ϊ1s��]
}