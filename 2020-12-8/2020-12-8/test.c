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
	//struct S s = { "����", 20, 55.6 };
	struct S tmp = {0};
	FILE* pf = fopen("test.txt", "rb");//��count����СΪsize�����ݣ��ŵ�buffer��ȥ
	//FILE* pf = fopen("test.txt", "wb");//�Զ����Ƶ���ʽд��ȥ
	if (pf == NULL)
	{
		return 0;
	}
	//�����Ƶ���ʽд�ļ�
	//fwrite(&tmp,sizeof(struct S),1,pf);//��sд��ȥ
	fread(&tmp, sizeof(struct S), 1, pf);//��pf��
	printf("%s %d %lf", tmp.name, tmp.age, tmp.score);//�ö����Ƶ���ʽдû��ϵ������ֻҪ�ö����ƶ���������
	fclose(pf);
	pf = NULL;
	return 0;
}