// ������.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include<stdlib.h>
#include "������.h"

int main()
{
	int flag = 1;
	while (flag)
	{
		system("cls"); // �������̨������
		ShowMap(); // ��ʾ���µĵ�ͼ
		if (IsSuccess())
		{
			printf("��ϲ�㣬��Ϸʤ������\n");
			break;
		}
		Menu(); // ��ʾ����˵�
		char direction = InputDirection(); // �����û�����
		//�ж����뷽���Ĳ���                                                                           
		switch (direction)
		{
		case 'W':
		case 'w':
			MoveToUp();
			break;
		case 'S':
		case 's':
			MoveToDown();
			break;
		case 'A':
		case 'a':
			MoveToLeft();
			break;
		case 'D':
		case 'd':
			MoveToRight();
			break;
		case 'Q':
		// �û������˳���Ϸ
		case 'q':
			printf("��ѽ������������.\n");
			flag = 0;
			break;
		}

	}
	system("pause");
    return 0;
}

// ��ʾ��Ϸ�˵�����
void Menu()
{
	printf("��ӭ���������ӵ����磡\n");
	printf("P����С��,X��������,O��������Ҫ�Ƶ���λ��.");
	printf("W(w)����. S(s)����. A(a)����. D(d)����.\nQ(q)������Ϸ.\n");
	printf("������С�˵�ǰ������:\n");
}

// �û����뷽����
char InputDirection()
{
	char direction;
	rewind(stdin);
	scanf_s("%c", &direction, sizeof(direction));
	return direction;
}