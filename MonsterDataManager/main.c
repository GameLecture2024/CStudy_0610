#include <stdio.h>
#include <string.h>
#include "Function.h"

// 1. Monster name, region, grade, level ����ü ������ �����ؼ� printf ���.
// 2. ����ü �迭. ����� ���� �ݺ������� ���� �迭 ���.
// 3. �迭���ٰ� ����ü �迭 �����͸� �־�� ����.
// 4. char name[100][30] = Monster.name;


int SearchMonster();	 // compare �Լ� ������ �մϴ�.
int ShowAllMonster();	 // printf( �迭�� �ִ� ��� ��� Monster[i].name)...
int DeleteMonster();	 // Ư�� �迭 ��� �˻��ؼ� �����Ͱ� ������ �ش� �����͸� null, 0 ����

int main()
{
	int playerInput = 0;

	Monster monsterGroup[100]; // ������ ���� 100���� �����ϴ� Monster ����ü

	char monster_name[100][30];
	char monster_region[100][30];
	char monster_grade[100][30];
	int monster_level[100];

	int totalMonsterCount = 0; // ���� �����Ϳ� ��� Index�� ����Ǿ��°�

	while (1)
	{
		printf("1. ���� ������ �߰�\n");

		// 1. ���� ������ �߰�
		// 2. ���� ������ ����
		// 3. ���� ������ ����
		// 4. ���α׷� ����
		printf("4. ���α׷� ����\n");

		scanf_s("%d", &playerInput);

		if (playerInput == 1) {
			AddMonsterInfo(monsterGroup, &totalMonsterCount);
		}

		if (playerInput == 2) {
			// SearchByName();
			printf("���� �̸� : %s, ���� ���� : %s, ���� ��� : %s", monsterGroup[0].name, monsterGroup[0].region, monsterGroup[0].grade);
		}

		if (playerInput == 4) {										
			break;
		}

	}


}