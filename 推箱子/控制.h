#pragma once

// ����С�����ϡ��¡������ƶ�
void MoveToUp();
void MoveToDown();
void MoveToLeft();
void MoveToRight();

// �����ⲿ����
extern char Map[8][9];
extern int CurrentPersonRow;
extern int CurrentPersonCol;

// �����ⲿ����
extern void FixHoleChar();

