﻿// pch.cpp: 미리 컴파일된 헤더에 해당하는 소스 파일입니다. 성공하려면 컴파일이 필요합니다.

#include "pch.h"

// 일반적으로 이 파일을 무시하지만 미리 컴파일된 헤더를 사용하는 경우 유지합니다.
#include<stdio.h>
int plus(int x, int y);
int minus(int x, int y);
int multiply(int x, int y);
int division(int x, int y);
int remainder(int x, int y);
void print_menu()
{
	printf("1. +\n2. -\n3. *\n4. /\n5. %%\n");
}
int main()
{
	int x, y, sol;
	print_menu();
	printf("메뉴를 고르시오: ");
	scanf_s("%d", &sol);
	printf("\n수를 입력하십시오.\n");
	printf("x= ");
	scanf_s("%d", &x);
	printf("y= ");
	scanf_s("%d", &y);
	if (sol == 1)
		printf("%d + %d = %d", x, y, plus(x, y));
	else if (sol == 2)
		printf("%d - %d = %d", x, y, minus(x, y));
	else if (sol == 3)
		printf("%d * %d = %d", x, y, multiply(x, y));
	else if (sol == 4)
		printf("%d / %d = %d", x, y, division(x, y));
	else if (sol == 5)
		printf("%d %% %d = %d", x, y, remainder(x, y));
}
int plus(int x, int y)
{
	int result;
	result = x + y;
	return result;
}
int minus(int x, int y)
{
	int result;
	result = x - y;
	return result;
}
int multiply(int x, int y)
{
	int result;
	result = x * y;
	return result;
}
int division(int x, int y)
{
	int result;
	result = x / y;
	return result;
}
int remainder(int x, int y)
{
	int result;
	result = x % y;
	return result;
}
