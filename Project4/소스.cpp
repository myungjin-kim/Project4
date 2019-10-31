#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int a;

	printf("입력: ");

	scanf("%d", &a);

	if (a >= 360)
	{
		printf("잘못입력하였습니다.");

	}
	else if (a > 0 && a < 90)
	{
		printf("1사분면"); 
	}
	else if (a > 90 && a < 180)
	{
		printf("2사분면");

	}
	else if (a > 180 && a < 270)
	{
		printf("3사분면");
	}
	else if (a > 270 && a < 360)
	{
		printf("4사분면");
	}
	else if (a == 0)
	{
		printf("양의 x축");
	}
	else if (a == 90)
	{
		printf("양의 Y축");
	}
	else if (a == 180)
	{
		printf("음의 x축");
	}
	else if (a == 270)
	{
		printf("음의 Y축");
	}

}