#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <string.h>
#include <stdlib.h>


//动态数组结构体
struct dynamicArray
{
	void** pAddr;//维护在堆区的真实数组指针
	int m_capacity;//数组容量
	int m_size;//数组大小

};


//初始化数组

struct dynamicArray* init_DynamicArray(int capacity)//capacity代表了初始化的数据的容量
{
	//开辟到堆区，栈上的话一会儿就没了
	if (capacity <= 0)
	{
		return NULL;
	}
	struct dynamicArray* array = malloc(sizeof(struct dynamicArray));
	//判断内存是否申请成功
	if (array == NULL)
	{
		return NULL;
	}
	//设置容量
	array->m_capacity = capacity;
	//设置大小
	array->m_size = 0;
	//维护在堆区的数组的指针
	array->pAddr = malloc(sizeof(void*)*array->m_capacity);
	return array;
}


//插入功能
void insert_dynamicArray(struct dynamicArray * array,int pos,void* data)//存的每一个元素都是void*的类型
{//pos为插入的位置
	if (array == NULL)
	{
		return;
	}
	if (data == NULL)
	{
		return;
	}
	if (pos<0 || pos>array->m_size)
	{
		//插入的位置是无效的
		pos = array->m_size;//尾插

	}
	//先判断是否已经满载（容量==大小，m_capacity==m_size)
	if (array->m_size == array->m_capacity)
	{
		//1、申请一个更大的内存空间
		int newCapacity = array->m_capacity * 2;//按两倍扩展
		//2、创建新空间
		void** newSpace = malloc(sizeof(void*)*newCapacity);
		//3、将原有的数据拷贝到新空间下
		memcpy(newSpace, array->pAddr, sizeof(void*)*array->m_capacity);
		//4、释放原有的空间
		free(array->pAddr);
		//5、更改指针指向
		array->pAddr = newSpace;
		//6、更新容量大小
		array->m_capacity = newCapacity;
	}


	//插入新的数据元素
	//从最后一个位置开始依次移动数据 后移
	for (int i = array->m_size; i >= pos; i--)
	{
		array->pAddr[i + 1] = array->pAddr[i];
	}

	//将新元素插入指定位置
	array->pAddr[pos] = data;

	//更新大小
	array->m_size++;
}


int main()
{
	system("pause");
	return 0;
}