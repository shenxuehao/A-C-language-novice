"""
class A(object):
    def __init__(self):
        self.num = 1

    def info_print(self):
        print(self.num)

class B(A):
    pass

result = B()
result.info_print()
"""


#师傅类
class Master(object):
    def __init__(self):
        self.kongfu = '[古法煎饼果子配方]'

    def make_cake(self):
        print(f'运用{self.kongfu}制作煎饼果子')

#学校类
class School(object):
    def __init__(self):
        self.kongfu = '[黑马煎饼果子配方]'

    def make_cake(self):
        print(f'运用{self.kongfu}制作煎饼果子')

#徒弟类
class Prentice(School, Master):
    pass

daqiu = Prentice()
print(daqiu.kongfu)
daqiu.make_cake()