import threading
import time

g_list = []

def add_data():
    for i in range(5):
        g_list.append(i)
        print('add:',i)
    print('complete', g_list)


def read_data():
    print(g_list)



if __name__ == '__main__':
    #创建添加数据的子线程
    add_thread = threading.Thread(target=add_data)
    read_thread = threading.Thread(target=read_data)

    add_thread.start()
    read_thread.start()
