#include <stdio.h> // printf, scanf 함수를 사용하기 위해서 필요하다.	// 시스템 폴더의 헤더파일을 불러온다.
#include "Console.h" // 프로젝트 안에 ""안에 있는 파일을 찾아서 복사해라
#include <stdbool.h>
// main함수에서 사용할 수 있게 키워드를 작성해주세요.

int main()
{
   // 콘솔창에 게임의 맵의 크기를 만들어 줘야 합니다.

	SetConsoleSize(30, 30);
	SetConsoleCursorVisibility(0);

	// 맵의 크기를 만들었다. 그 다음에 무엇을 하고 싶나요?
	// 캐릭터 + 움직인다.
	// 캐릭터의 위치 (14,28);

	// 플레이어의 총알 구현(Bullet)
	// GotoXY, Printf 함수를 사용해서 총알을 화면에 출력해보세요

	int x = 14, y = 28;	  // 플레이어의 x , y 좌표
	int bx = 0, by = 0;	  // 총알의 bx , xy 좌표
	bool bullet = false;  // 현재 총알이 생성되지 않았으면 false, 생성됬으면 true


#if true // 플레이어의 이동 조작
	while (true) // 무한 루프
	{
		Clear();      // 이전 위치를 지우고 새로 그리기 위해서

		if (GetAsyncKeyState(VK_LEFT) & 8001) // 왼쪽 키를 눌렀을 때
		{
			if (x < 1) x = 1;
			x--;          //
		}
		else if (GetAsyncKeyState(VK_RIGHT) & 8001) 
		{
			if (x > 27) x = 27;
			x++;          //
		}
		else if (GetAsyncKeyState(VK_UP) & 8001) 
		{
			if (y < 1) y = 1;
			y--;
		}
		else if (GetAsyncKeyState(VK_DOWN) & 8001)
		{
			if (y > 28) y = 28;
			y++;
		}
#endif
		GotoXY(x, y); //
		printf("▲");  //

#if true // 총알
		if (GetAsyncKeyState(VK_SPACE) & 8001)
		{
			if (!bullet)	 // !bullet과 bullet == false 같은 의미
			{
				bx = x;
				by = y - 1;
				bullet = true;
			}
		}

		if (bullet)	// 총알이 생성되어 있을 경우에만
		{
			by--; // 한 칸위로 움직이고
			GotoXY(bx, by);
			printf("↑");

			if (by < 1)	    // 총알이 화면 가장 위로 넘어갔을 때 총알이 비활성화된다.
				bullet = false;
		}

#endif
		Sleep(100); // 숫자만큼 기다렸다가 다시 실행한다.

	}

}