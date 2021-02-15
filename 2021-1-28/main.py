#需求：尝试打开test.txt(r),如果文件不存在，以只写方式打开(w)
"""
try:
可能发生错误的代码
except:
发生错误时执行的代码

try:
    f = open('test.txt', 'r')
except:
    f = open('test.txt', 'w')



try:
    print(num)

except NameError:
    print('有错误NameError')



import time
try:
    f= open('test.txt')
    try:
        while True:
            content = f.readline()
            if len(content) == 0:
                break
            time.sleep(2)
            print(content)
    except:
        print('程序被意外终止')
except:
    print('没有这个文件')

"""


#1.自定义异常类
class ShortInputError(Exception):
    def __init__(self, length, min_len):
        self.length = length
        self.min_len = min_len

    def __str__(self):
        return f'你输入的长度是{self.length}，不能少于{self.min_len}个字符'

def main():
    # 2.抛出异常
    try:
        con = input('请输入密码：')
        if len(con) < 3:
            raise ShortInputError(len(con), 3)
    # 3.捕获该异常
    except Exception as result:
        print(result)

    else:
        print('密码输入完成')

main()


