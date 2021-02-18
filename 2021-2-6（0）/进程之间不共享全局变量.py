import multiprocessing
import time

#定义全局变量列表
g_list = list() #等价于[]

#添加数据的任务
def add_data():
    for i in range(3):
        g_list.append(i) #不用加global，因为列表是可变类型，这里并没有对列表的内存地址进行修改，可以在列表原有内存上修改数据，
        # 但如果是g_list = [2,3]就不行
        #加了global就是声明要修改全局变量的内存地址
        time.sleep(0.2)
        print('add:', i)


#读取数据的任务
def read_data():
    print("read:",g_list)

if __name__ == '__main__':
#1.添加数据的子进程
    add_process = multiprocessing.Process(target = add_data)
#2.读取数据的子进程
    read_process = multiprocessing.Process(target = read_data)

#启动进程执行对应的任务
    add_process.start()
    add_process.join()
    read_process.start()