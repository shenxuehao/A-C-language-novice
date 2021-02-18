import multiprocessing
import time

# 定义进程所需要执行的任务
def task():
    for i in range(10):
            print("任务执行中...")
            time.sleep(0.2)
if __name__ == '__main__':
    # 创建子进程
    sub_process = multiprocessing.Process(target=task)
    # 设置守护主进程，主进程退出子进程直接销毁，子进程的生命周期依赖与主进程
    # sub_process.daemon = True
    sub_process.start()

    time.sleep(0.5)
    # 退出主进程之前，先让子进程销毁
    sub_process.terminate()
    print("over")