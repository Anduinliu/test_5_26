#define _CRT_SECURE_NO_WARNINGS  1
#include<stdio.h>
int main()
{
	int num = 0;
	printf("������������'1-5' ��anduinѧϰ������\n");
	scanf("%d", &num);
	switch (num)
	{
	case 1:
		printf("������anduin��Ϣ!\n");
		printf("Ү�����˶�����ס!\n");
		printf("��˵�ģ�\n");
		break;
	case 2:
		printf("ʧ���ˣ�\n");
		printf("��˵��Ϣ����Ϣ\n");
		break;
	case 3:
		printf("��Ϣ��\n");
	case 4:
		printf("�Ҿ���Ϣ!\n");
	case 5:
		printf("byebye!\n");
		break;
	default:
		printf("try again!\n");
		break;
	}

	return 0;
}