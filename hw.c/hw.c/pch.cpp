// pch.cpp: 미리 컴파일된 헤더에 해당하는 소스 파일입니다. 성공하려면 컴파일이 필요합니다.

#include "pch.h"

// 일반적으로 이 파일을 무시하지만 미리 컴파일된 헤더를 사용하는 경우 유지합니다.
//실수 계산기
#include<stdio.h>
double plus(double x, double y);
double minus(double x, double y);
double multiply(double x, double y);
double division(double x, double y);
int remainder(double x, double y);
void print_menu()
{
	printf("1. +\n2. -\n3. *\n4. /\n5. %%\n");
}
int main()
{
	double x, y; 
	int sol = 0;
	print_menu();
	while (sol != 6)
	{
		printf("메뉴를 고르시오: ");
		scanf_s("%d", &sol);
		if (sol == 1)
		{
			printf("\n수를 입력하십시오.\n");
			printf("x= ");
			scanf_s("%lf", &x);
			printf("y= ");
			scanf_s("%lf", &y);
			printf("%.2lf + %.2lf = %.2lf\n", x, y, plus(x, y));
		}
		else if (sol == 2)
		{
			printf("\n수를 입력하십시오.\n");
			printf("x= ");
			scanf_s("%lf", &x);
			printf("y= ");
			scanf_s("%lf", &y);
			printf("%.2lf - %.2lf = %.2lf\n", x, y, minus(x, y));
		}
		else if (sol == 3)
		{
			printf("\n수를 입력하십시오.\n");
			printf("x= ");
			scanf_s("%lf", &x);
			printf("y= ");
			scanf_s("%lf", &y);
			printf("%.2lf * %.2lf = %.2lf\n", x, y, multiply(x, y));
		}
		else if (sol == 4)
		{
			printf("\n수를 입력하십시오.\n");
			printf("x= ");
			scanf_s("%lf", &x);
			printf("y= ");
			scanf_s("%lf", &y);
			printf("%.2lf / %.2lf = %.2lf\n", x, y, division(x, y));
		}
		else if (sol == 5)
		{
			printf("\n수를 입력하십시오.\n");
			printf("x= ");
			scanf_s("%lf", &x);
			printf("y= ");
			scanf_s("%lf", &y);
			printf("%.0lf %% %.0lf = %d\n", x, y, remainder(x, y));
		}
		else if (sol < 1 || sol>6)
			printf("올바른 menu를 고르십시요.");
	}
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
double division(double x, double y)
{
	double result;
	result = x / y;
	return result;
}
int remainder(double x, double y)
{
	int result;
	result = (int)x % (int)y;
	return result;
}
