#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
struct student
{
	char name[20];
	int age;
	double score;
};
int main()
{
	struct student stu1[2];
	int i = 0;
	for (i = 0; i <= 1; i++)
	{
		printf("�������%dλѧ��������:", i + 1); 
		scanf("%s", stu1[i].name);
		printf("�������%dλѧ��������:", i + 1); 
		scanf("%d", &stu1[i].age);
		printf("�������%dλѧ���ĳɼ�:", i + 1); 
		scanf("%lf", &stu1[i].score);
	}
	printf("��һλѧ������ϢΪ:%s %d %lf", stu1[0].name, stu1[0].age, stu1[0].score);
	printf("�ڶ�λѧ������ϢΪ:%s %d %lf", stu1[1].name, stu1[1].age, stu1[1].score);
	return 0;
}
