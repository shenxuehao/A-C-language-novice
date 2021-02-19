#需求：多线程根据下表同时在列表中取值，要保证同一时刻只能有一个线程去取值
import threading

#创建互斥锁
Lock = threading.Lock()


def get_value(index):
    #上锁
    Lock.acquire()
    my_list = [1,4,6]
    #判断下标是否越界
    if index >= len(my_list):
        print('下标越界:',index)
        Lock.release()
        return

    #根据下标取值
    value = my_list[index]
    print(value)
    #释放锁
    Lock.release()


if __name__ == '__main__':
    for i in range(10):
        #每循环一次创建一个子线程
        sub_thread = threading.Thread(target=get_value, args=(i,))

        sub_thread.start()