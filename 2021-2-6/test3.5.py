import multiprocessing

def show_info(name, age):
    print(name, age)


if __name__ == '__main__':
#创建子进程
    sub_process = multiprocessing.Process(target = show_info, args = ("李四",22))

#启动进程
    sub_process.start()