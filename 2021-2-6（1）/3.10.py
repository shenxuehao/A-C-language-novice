"""
import threading

g_num = 0


def task1():
    for i in range(1000000):
        #每循环一次给全局变量+1
        global g_num
        g_num += 1
    print('task1:',g_num)

def task2():
    for i in range(1000000):
        # 每循环一次给全局变量+1
        global g_num
        g_num += 1
    print('task2:', g_num)

if __name__ == '__main__':
    #创建两个子线程
    first_thread = threading.Thread(target=task1())
    second_thread = threading.Thread(target=task2())
    first_thread.start()
    second_thread.start()


"""

import threading
# 定义全局变量
g_num = 0

# 循环一次给全局变量加1
def sum_num1():
    for i in range(1000000):
        global g_num  #声明修改全局变量的内存地址
        g_num += 1

    print("sum1:", g_num)

# 循环一次给全局变量加1
def sum_num2():
    for i in range(1000000):
        global g_num
        g_num += 1
    print("sum2:", g_num)

if __name__ == '__main__':
    # 创建两个线程
    first_thread = threading.Thread(target=sum_num1)
    second_thread = threading.Thread(target=sum_num2)

    # 启动线程
    first_thread.start()
    # 启动线程
    second_thread.start()

