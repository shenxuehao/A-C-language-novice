#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
int main()
{
	struct student
	{
		char name[20]; 
		int age;
		double score;
	};
	struct student stu1[2]; 
	int i = 0;
	for (i = 0; i <= 1; i++)
	{
		printf("请输入第%d位学生的姓名:", i + 1); scanf_s("%s",stu1[il.name);
		printf("请输入第%d位学生的年龄:", i + 1); scanf_s("%d",&stu1[i].age);
		printf("请输入第%a位学生的成绩:", i + 1); scanf_s("%1f",&stu1[i].score);
	}
	printf("第一位学生的信息为:%s %d %1f", stu1[0].name, stul[0].age, stu1[0].score);
	printf("第二位学生的信息为:%s %d %1i", stul[1].name, stu1[1].age, stu1[1].score);
	return 0;
