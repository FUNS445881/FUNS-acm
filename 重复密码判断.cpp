#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
	int i=0;
	char password[20] = { 0 };
	char repassword[20] = { 0 };
	printf("����������:");
	scanf("%s" ,password);
	system("cls");
	for (i = 1; i <= 2; i++) {
		printf("������ȷ������:");
		scanf("%s", repassword);
		system("cls");
		if (strcmp(repassword, password)== 0 )
		{
			printf("��½�ɹ�\n");
			break;
		}
		else
		{
			printf("�������\n");
		}
	}
	if (i == 3)
		printf("��½ʧ��,���뿪�����̨");
	return 0;
}