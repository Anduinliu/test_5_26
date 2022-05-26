#define _CRT_SECURE_NO_WARNINGS  1
#include<stdio.h>
int main()
{
	int num = 0;
	printf("依次输入数字'1-5' 让anduin学习起来：\n");
	scanf("%d", &num);
	switch (num)
	{
	case 1:
		printf("今天我anduin休息!\n");
		printf("耶稣来了都拦不住!\n");
		printf("我说的！\n");
		break;
	case 2:
		printf("失败了？\n");
		printf("我说休息就休息\n");
		break;
	case 3:
		printf("休息！\n");
	case 4:
		printf("我就休息!\n");
	case 5:
		printf("byebye!\n");
		break;
	default:
		printf("try again!\n");
		break;
	}

	return 0;
}