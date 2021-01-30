def print_line():
    print('-' * 20)

def print_lines(num):
    i = 0
    while(i < num):
        print_line()
        i += 1

print_line()

print_lines(5)

"""
#1.函数：固定数值1和2加法
def add():
    result = 1 + 2
    return result

print(add())
#2.参数形式传入数据
def add_diy(a, b):
    result = a + b
    return result

print(add_diy(2, 3))
"""
