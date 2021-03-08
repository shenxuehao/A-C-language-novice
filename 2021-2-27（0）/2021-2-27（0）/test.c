#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
 

//动态数组结构体
struct dynamicArray
{
	void** pAddr;//维护在堆区的真实的数组指针，维护的每一个数据都是用户的数据地址，所以用void*去保存，返回的数据的地址用void**保存
	int m_capacity;//数组容量
	int m_size;//数组大小
};

//初始化数组，初始化数组只要拿到结构体指针就行
//结构体变量（数组）应该写到堆上，写到栈上会被释放掉
struct dynamicArray* init_DynamicArray(int capacity)//括号里要提供一个容量，比如int arr[10],参数代表初始化数组的容量
{
	if (capacity <= 0)
	{
		return NULL;
	}
	struct dynamicArray* array = malloc(sizeof(struct dynamicArray));//创建结构体
	//struct dynamicArray* array是数组
	if (NULL == array)
	{
		return NULL;
	}

	//设置容量
	array->m_capacity = capacity;
	//设置大小
	array->m_size = 0;//一开始一个元素都没有
	//维护在堆区的数组的指针
	array->pAddr = malloc(sizeof(void*)*(array->m_capacity));//这里array->pAddr就是void**的类型
	return array;
}


//插入功能
void insert_danamicArray(struct dynamicArray* array, int pos, void* data)//pos为插入的位置
{
	if (array == NULL)
	{
		return;
	}
	if (data == NULL)
	{
		return;
	}
	if (pos < 0||pos>array->m_size)
	{
		//无效的位置,那就尾插
		pos = array->m_size;
	}
	//先判断是否已经满载，如果满，动态开辟
	if (array->m_size >= array->m_capacity)
	{
		//1、申请一个更大的内存空间
		int newCapacity = array->m_capacity * 2;
		//2、创建新空间
		void** newSpace = malloc(sizeof(void*)*newCapacity);
		//3、将原有的数据拷贝到新空间下
		memcpy(newSpace, array->pAddr, sizeof(void*)*array->m_capacity);
		//4、释放原有的空间
		free(array->pAddr);
		//5、更改指针指向
		array->pAddr = newSpace;
		//6、更新新的容量大小
		array->m_capacity = newCapacity;
	}
	//插入新的数据元素
	//从最后一个位置开始依次往后移动数据
	for (int i = array->m_size - 1; i >= pos; i--)
	{
		array->pAddr[i + 1] = array->pAddr[i];
	}

	//将新元素插入到指定位置
	array->pAddr[pos] = data;
	//更新大小
	array->m_size++;
}


//遍历数组
void foreach_DynamicArray(struct dynamicArray* array,void(*myForeach)(void*))//遍历数组传数组，传数组只要传指针即可
//myForeach是函数指针，函数参数为void*，返回值为void。这里是把函数指针当作参数传入了
{
	if (array == NULL)
	{
		return;
	}
	if (myForeach == NULL)
	{
		return;
	}
	for (int i = 0; i < array->m_size; i++)
	{
		//printf("%", array->pAddr[i]); // array->pAddr[i]里的每一个元素都是void*，不好打印，所以叫给用户去转回他想要的数据类型，然后自己打印，这里只是把每一个数据都调出来
		myForeach(array->pAddr[i]);
	}
}

//删除数组中的元素(按位置)
void removeByPosition_DynamicArray(struct dynamicArray* arr,int pos)//传一个数组与位置就能删掉了
{
	if (arr == NULL)
	{
		return;
	}
	if (pos<0 || pos>arr->m_size - 1)
	{
		//无效的位置，直接return
		return;
	}
	//删数据的方法：从pos开始依次往前盖过去
	for (int i = pos; i < arr->m_size-1; i++)
	{
		arr->pAddr[i] = arr->pAddr[i + 1];//arr->pAddr就是数据

	}
	arr->m_size--;
}

//删除数组中的元素(按值)
void removeByValue_DynamicArray(struct dynamicArray* arr, void* data,int(*myCompare)(void*,void*))//我们维护的每一个数据都是void*，因此这里不用写struct Person* data
{
	if (NULL == arr)
	{
		return;
	}
	if (NULL == data)
	{
		return;
	}
	for (int i = 0; i < arr->m_size; i++)
	{
		if (myCompare(arr->pAddr[i],data))//不能写arr->pAddr[i] == data,指针与指针比较没有意义，应该对比指针指向的那个值
		//因此这里就拿出地址，然后让用户转为他需要的类型
		{
			removeByPosition_DynamicArray(arr, i);
			break;//删完就退出去
		}
	}
}

//销毁数组
void destroy_dynamicArray(struct dynamicArray* arr)
{
	if (NULL == arr)
	{
		return;
	}
	if (arr->pAddr != NULL)
	{
		free(arr->pAddr);//把开辟的空间释放掉
		arr->pAddr = NULL;
	}
	free(arr);
	arr = NULL;
}








//以下为测试代码
struct Person
{
	char name[60];
	int age;
};


void myPrintPerson(void* data)//回调函数
{
	struct Person* p = data;//数据交给用户，自己转回去打印，因为我们不知道void该怎么打印
	printf("姓名：%s 年龄：%d\n", p->name, p->age);
}



//回调函数
int myComparePerson(void* data1, void*data2)
{
	struct Person* p1 = data1;
	struct Person* p2 = data2;
	return ((strcmp(p1->name, p2->name)==0)&&(p1->age==p2->age));
}

void test01()
{
	//创建一个动态数组
	struct dynamicArray* arr = init_DynamicArray(5);
	//准备5个person数据
	struct Person p1 = { "亚瑟", 18 };
	struct Person p2 = { "王昭君", 28 };
	struct Person p3 = { "赵云", 38 };
	struct Person p4 = { "张飞", 48 };
	struct Person p5 = { "关羽", 58 };
	struct Person p6 = { "宫本", 68 };

	//将数据插入到动态的数组中
	printf("当前的容量为:%d\n", arr->m_capacity);//5


	insert_danamicArray(arr, 0, &p1);//p1是数据的地址，放地址就行了
	insert_danamicArray(arr, 0, &p2);
	insert_danamicArray(arr, 0, &p3);
	insert_danamicArray(arr, 2, &p4);
	insert_danamicArray(arr, 10, &p5);
	insert_danamicArray(arr, 1, &p6);
	//正确的顺序应该是 赵云 宫本 王昭君 张飞 亚瑟 关羽


	printf("插入数据后的容量为:%d\n", arr->m_capacity);//10
	//遍历动态数组
	foreach_DynamicArray(arr, myPrintPerson);

	printf("删除第一个元素后的容量为:%d\n", arr->m_capacity);
	printf("删除第一个元素后的数据为:\n");
	removeByPosition_DynamicArray(arr, 1);
	foreach_DynamicArray(arr, myPrintPerson);

	struct Person p = { "张飞", 48 };//这里要求按照值来删除

	removeByValue_DynamicArray(arr, &p, myComparePerson);
	printf("---------\n");
	foreach_DynamicArray(arr, myPrintPerson);
	destroy_dynamicArray(arr);
	arr = NULL;//指针置空
	printf("--------------------------\n");
	foreach_DynamicArray(arr, myPrintPerson);
}


int main()
{
	test01();
	system("pause");
	return 0;
}