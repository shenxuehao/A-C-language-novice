#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <string.h>
#include "game.h"
//����������
void game()
{
	char ret = 0;//�����������ֽ��
	//���飬�����Һ͵����߳���������Ϣ
	char board[ROW][COL] = {0};//������game.h�н��иĶ�
	InitBoard(board, ROW, COL);//��ΪInitBoard��game��Ĵ��룬������.h����������.c�н���ʵ��,
	//��ʼ�����̣��������ǳ�ʼ������
 	DisplayBoard(board, ROW, COL);//��ӡ����
	//����
	while (1)
 	{
		PlayerMove(board, ROW, COL);//�������
		DisplayBoard(board, ROW, COL);
		//�ж�����Ƿ��ʤ
		ret = Iswin(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
		ComputerMove(board, ROW, COL);//��������
		DisplayBoard(board, ROW, COL);
		//�жϵ����Ƿ��ʤ //ÿһ�������ܻ�����
		ret = Iswin(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
	}
	if (ret == '*')
	{
		printf("���Ӯ\n");
	}
	else if (ret == '#')
	{
		printf("����Ӯ\n");
	}
	else
	{
		printf("ƽ��\n");
	}

}
void menu()
{
	printf("**********************\n");
	printf("****1.play  0.exit****\n");
	printf("**********************\n");
}
void test()
{
	int input = 0;
	srand((unsigned int)time(NULL));//����Ϊ��ָ�룬��������д��unsigned int
	do//1.��һ�Ѳ���񫣬������
	{
		menu();//2.��ӡһ���˵�
		printf("��ѡ��:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("������\n");
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("���벻�Ϸ���������ѡ��\n");
			break;
		}
	} while (input);
}
int main()
{
	test();
	return 0;
}
