"""
#类：洗衣机 功能：洗衣服
class Washer():
    def wash(self):
        print('洗衣服')
        print(self)

haier = Washer()
print(haier)

haier.wash()


class Washer():
    def wash(self):
        print('洗衣服')
        print(self)

haier1 = Washer() #创建第一个对象
haier1.wash()
haier2 = Washer()
haier2.wash()

class Washer():
    def wash(self):
        print('洗衣服')

    #获取实例属性
    def print_info(self):
        print(self.width)

haier1 = Washer()
haier2 = Washer()

haier1.width = 400
haier2.height = 500


#目标：定义init魔法方法，设置初始化属性，并访问调用
#1.定义类
    #1.init魔法方法:width和height
    #2.添加实例方法，访问实例属性

#2.创建对象

#3.验证成果
    #调用实例方法


#1.定义类
class Washer():
    # 1.init魔法方法:width和height
    def __init__(self):
        #添加实例属性
        self.width = 500
        self.height = 800

    # 2.添加实例方法，访问实例属性
    def print_info(self):
        print(f'宽度是{self.width}')
        print(f'高度是{self.height}')

#2.创建对象
haier = Washer()

#3.验证成果
haier.print_info()


#1.定义类 包含了带参数的init:宽度和高度 还包含了一个实例方法：调用实例属性
class Washer():
    def __init__(self, width, height):
        self.width = width
        self.height = height

    def print_info(self):
        print(f'宽度是{self.width}')
        print(f'高度是{self.height}')


haier1 = Washer(10, 20)
haier1.print_info()

haier2 = Washer()
haier2.print_info()
"""

#2.创建对象 创建多个对象  且保证属性值不同 调用实例方法

