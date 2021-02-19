import threading
import time

def show_info(name, age):
    print('name:%s age:%d' %(name,age))

if __name__ == '__main__':
    #创建子线程
    sub_thread = threading.Thread(target = show_info,args = ('lisi', 20))
    #启动线程
    sub_thread.start()
