#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
struct S
{
	char name[20];
	int age;
	double score;
};
int main()
{
	//struct S s = { "张三", 20, 55.6 };
	struct S tmp = {0};
	FILE* pf = fopen("test.txt", "rb");//都count个大小为size的数据，放到buffer里去
	//FILE* pf = fopen("test.txt", "wb");//以二进制的形式写进去
	if (pf == NULL)
	{
		return 0;
	}
	//二进制的形式写文件
	//fwrite(&tmp,sizeof(struct S),1,pf);//把s写进去
	fread(&tmp, sizeof(struct S), 1, pf);//从pf读
	printf("%s %d %lf", tmp.name, tmp.age, tmp.score);//用二进制的形式写没关系，我们只要用二进制读出来就行
	fclose(pf);
	pf = NULL;
	return 0;
}