class SweetPotato():
    #定义地瓜的属性---魔法方法
    def __init__(self):
        #被烤的时间
        self.cook_time = 0
        #地瓜的状态
        self.cook_static = '生的'
        #调料的列表
        self.condiments = []

    def cook(self, time):
        """烤地瓜的方法"""
        self.cook_time += time
        if 0 <= self.cook_time < 3:
            self.cook_static = '生的'
        if 3 <= self.cook_time < 5:
            self.cook_static = '半生不熟'
        if 5 <= self.cook_time < 8:
            self.cook_static = '熟了'
        if self.cook_time >= 8:
            self.cook_static ='糊了'

    #用于输出对象状态

    def add_condiments(self,condiment):
        """添加调料"""
        self.condiments.append(condiment)

    def __str__(self):
        return f'这个地瓜烤了{self.cook_time}分钟，状态是{self.cook_static}，添加的调料有{self.condiments}'

digua1 = SweetPotato()
print(digua1)

digua1.cook(2)
digua1.add_condiments('酱油')
print(digua1)

digua1.cook(2)
digua1.add_condiments('辣椒面儿')
print(digua1)

digua1.cook(2)
print(digua1)

digua1.cook(2)
print(digua1)

digua1.cook(2)
print(digua1)

digua1.cook(2)
print(digua1) 