#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include "game.h"
void menu()
{
	printf("********************\n");
	printf("*******1.play*******\n");
	printf("*******0.exit*******\n");
	printf("********************\n");
}
void game()
{
	//�׵���Ϣ�洢,һ���������׵���Ϣ����һ���������Ų�������׵���Ϣ
	//1.���úõ��׵���Ϣ
	char mine[ROWS][COLS] = { 0 };
	//2.�Ų�����׵���Ϣ
	char show[ROWS][COLS] = { 0 };//���Ҫ��ӡ����
	//��ʼ��
	Initboard(mine, ROWS, COLS, '0');//���ε�ʱ��ʵ�β���дmine[][]��ֻҪд���������βα���д[][]����һά�������ʡ�Ը���
	Initboard(show, ROWS, COLS, '*'); //Ϊ�˷�ֹmine��show���
	//��ӡ����
	//Displayboard(mine, ROW, COL);//�����һȦ���ô�ӡ����
	Displayboard(show, ROW, COL);
	//������
	SetMine(mine, ROW, COL);
	// Displayboard(mine, ROW, COL);
	FindMine(mine, show, ROW, COL);//��mine��������Ϣ���ŵ�show������ȥ
}

void test()
{
	int input = 0;
	srand((unsigned)time(NULL));//unsignedΪǿ������ת��
	do//���һ�Ѳ���񫣬����һ��
	{
		menu();
		printf("��ѡ��:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("������Ч��������ѡ��\n");
			break;
		}
	} while (input);
}
int main()
{
	test();
	return 0;
}