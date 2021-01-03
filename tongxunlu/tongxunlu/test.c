#define _CRT_SECURE_NO_DEPRECATE
//存放1000个好友信息，一个好友包含名字，电话，性别，住址，年龄
//增加好友信息，增加删除指定名字好友信息，查找
//修改好友信息
//打印好友信息，排序

#include "Contact.h"
void menu()
{
	printf("**********************************\n");
	printf("*****1.add           2.del   *****\n");
	printf("*****3.search        4.modify*****\n");
	printf("*****5.show          6.sort  *****\n");
	printf("*****7.save          0.exit  *****\n");
	printf("**********************************\n");
}
int main()
{
	int input = 0;
	//创建通讯录
	struct Contact con;//con就是通讯录，里面包含data指针，size与capacity
	//初始化通讯录
	InitContact(&con);
	//
	do
	{
		menu();
		printf("请选择:>\n");
		scanf("%d", &input);
		switch (input)
		{
		case ADD:
			AddContact(&con);
			break;
		case DEL:
			DelContact(&con);
			break;
		case SEARCH:
			SearchContact(&con);
			break;
		case MODIFY:
			ModifyContact(&con);
			break;
		case SHOW:
			ShowContact(&con);
			break;
		case SORT:
			SortContact(&con);
			break;
		case EXIT:
			//销毁通讯录，释放动态开辟的内存
			SaveContact(&con);
			DestroyContact(&con);
			printf("退出通讯录\n");
			break;
		case SAVE:
			SaveContact(&con);
			printf("保存通讯录\n");
			break;
		default:
			printf("选择错误\n");
			break;
		}
	} while (input);
	return 0;
}