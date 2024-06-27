#include <stdio.h>
#include "CountNumFunc.h"
#include "windows.h"

void GameWin()
{
	// 승리했을 때는 색상을 붉은색으로 표시한다.

	printf("컴퓨터의 값과 일치합니다. 축하합니다.\n");

}

void SetColor(unsigned char BGColor, unsigned char TextColor)
{
	if (BGColor > 15 || TextColor > 15) return;

	unsigned char ColorNum = (BGColor << 4) | TextColor;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), ColorNum);
}