#include "stdafx.h"
#include "�ؿ�.h"

// ��ʾ��ͼ����
void ShowMap()
{
	for (int i = 0; i < 8; i++)
		printf("%s\n", Map[i]);
}

// ͨ�������жϺ���
int IsSuccess()
{
	if (Map[4][1] == 'X'&& Map[5][1] == 'X'&& Map[6][1] == 'X')
		return 1;
	else
		return 0;
}

// �޸�����λ�õ��ַ�
void FixHoleChar()
{
	for (int i = 0; i < 3; i++)
	{
		int flag = 0;
		flag = Map[holePoint[i][0]][holePoint[i][1]] == ' ' ? 1 : 0;
		if (flag)
		{
			Map[holePoint[i][0]][holePoint[i][1]] = 'O';
		}
	}
}
