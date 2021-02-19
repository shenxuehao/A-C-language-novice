#证明线程之间的执行是无序的
import threading
import time

def task():
    time.sleep(1)
    #获取当前线程
    print(threading.current_thread())
    #time.sleep(1)

if __name__ == '__main__':
    #循环创建大量线程
    for i in range(20):
        #每循环一次创建一个子线程
        sub_thread = threading.Thread(target=task)
        #启动子线程
        sub_thread.start()