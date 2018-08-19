#pragma once

// ʹ�ö�ά����������ؿ���ͼ
char Map[8][9] =
{
	" #####  ",
	" #P ### ",
	" # X  # ",
	"### # ##",
	"#O# #  #",
	"#OX  # #",
	"#O   X #",
	"########"
};

// С�˵Ŀ�ʼλ��
int CurrentPersonRow = 1;
int CurrentPersonCol = 2;

// ��¼����λ��
int holePoint[3][2] =
{
	{4,1},
	{5,1},
	{6,1}
};

// ��ʾ��ͼ����
void ShowMap();

// ͨ�������жϺ���
int IsSuccess();

// �޸���λ�õ��ַ�
void FixHoleChar();

// �����ⲿ���ƺ���
extern void MoveToUp();
extern void MoveToDown();
extern void MoveToLeft();
extern void MoveToRight();
