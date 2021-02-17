#1.导入进程包
import multiprocessing
import time
#跳舞任务
def dance():
    for i in range(3):
        print('跳舞中...')
        time.sleep(0.2)

#唱歌任务
def sing():
    for i in range(3):
        print('唱歌中...')
        time.sleep(0.2)


#2.创建子进程（自己手动创建的进程为子进程，在__init__.py的文件中已经导入Process类）
#target为执行进程的目标任务，不用加小括号
if __name__ == '__main__':
    dance_process = multiprocessing.Process(target=dance)#跳舞就交给子进程进行了

#3.启动进程执行对应的任务
    dance_process.start()
#主进程执行唱歌任务
    sing()#只要没有交给另外一个进程，那么这个任务就是主进程执行的