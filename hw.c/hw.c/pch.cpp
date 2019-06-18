// pch.cpp: 미리 컴파일된 헤더에 해당하는 소스 파일입니다. 성공하려면 컴파일이 필요합니다.

#include "pch.h"

// 일반적으로 이 파일을 무시하지만 미리 컴파일된 헤더를 사용하는 경우 유지합니다.
#include<stdio.h>
double plus(double x, double y);
double minus(double x, double y);
double multiply(double x, double y);
//int division(int x, int y);
//int remainder(int x, int y);
void print_menu()
{
	printf("1. +\n2. -\n3. *\n4. /\n5. %%\n");
}
int main()
{
	double x, y; 
	int sol;
	print_menu();
	printf("메뉴를 고르시오: ");
	scanf_s("%d", &sol);
	printf("\n수를 입력하십시오.\n");
	printf("x= ");
	scanf_s("%lf", &x);
	printf("y= ");
	scanf_s("%lf", &y);
	if (sol == 1)
		printf("%.2lf + %.2lf = %.2lf", x, y, plus(x, y));
	else if (sol == 2)
		printf("%.2lf - %.2lf = %.2lf", x, y, minus(x, y));
	else if (sol == 3)
		printf("%.2lf * %.2lf = %.2lf", x, y, multiply(x, y));
	/*else if (sol == 4)
		printf("%d / %d = %d", x, y, division(x, y));
	else if (sol == 5)
		printf("%d %% %d = %d", x, y, remainder(x, y));*/
}
double plus(double x, double y)
{
	double result;
	result = x + y;
	return result;
}
double minus(double x, double y)
{
	double result;
	result = x - y;
	return result;
}
double multiply(double x, double y)
{
	double result;
	result = x * y;
	return result;
}
//int division(int x, int y)
//{
//	int result;
//	result = x / y;
//	return result;
//}
//int remainder(int x, int y)
//{
//	int result;
//	result = x % y;
//	return result;
//}
