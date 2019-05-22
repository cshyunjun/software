// pch.cpp: 미리 컴파일된 헤더에 해당하는 소스 파일입니다. 성공하려면 컴파일이 필요합니다.

#include "pch.h"

// 일반적으로 이 파일을 무시하지만 미리 컴파일된 헤더를 사용하는 경우 유지합니다.
#include<stdio.h>
#include<string.h>

int check(char s[], char a[], char ch);
int main()
{
	char solution[100] = "meet at midnight"; //정답이 들어있는 문자 배열
	char answer[100] = "____ __ ________"; //현재까지 사용자가 맞춘 문자열이 들어 있는 문자 배열
	char ch;

	while (1)
	{
		printf("문자열을 입력하시오: %s \n", answer); //문자열 선택
		printf("글자를 추측하시오: "); //선택한 문자열에 들어갈 글자 추측
		ch = getchar();
		if (check(solution, answer, ch) == 1)
			break;
		getchar(); //줄바꿈 문자 제거
	}
	return 0;
}
int check(char s[], char a[], char ch) //사용자로부터 답을 받아 정답과 비교하여 맞는지 틀린지 구분하는 함수
{
	int i;

	for (i = 0; s[i] != '\0'; i++) //정답 문자열의 끝까지 반복
	{
		if (s[i] == ch)
			a[i] = ch;
	}
	if (strcmp(s, a) == 0) // 정답이면 
		return 1;
	else //정답이 아니면
		return 0;
}