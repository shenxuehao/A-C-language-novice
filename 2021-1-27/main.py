
"""
class Dog(object):
    def work(self):
        print("指哪打哪...")

class ArmyDog(Dog):
    def work(self):
        print('追击敌人...')

class DrugDog(Dog):
    def work(self):
        print('追查毒品...')

class Person(object):
    def work_with_dog(self, dog):
        dog.work()

ad = ArmyDog()
dd = DrugDog()

daqiu = Person()
daqiu.work_with_dog(ad)
daqiu.work_with_dog(dd)


class Dog(object):
    def work(self):
        print('指哪打哪')

class ArmyDog(Dog):
    def work(self):
        print('追击敌人')

class DrugDog(Dog):
    def work(self):
        print('追查毒品')

class Person(object):
    def work_with_dog(self,dog):
        dog.work()

ad = ArmyDog()
dd = DrugDog()

daqiu = Person()
daqiu.work_with_dog(ad)
daqiu.work_with_dog(dd)




#1.定义类与类属性
#2.创建对象
#3.访问类属性

class Dog(object):
    tooth = 10

wangcai = Dog()
xiaohei = Dog()

print(Dog.tooth)
print(wangcai.tooth)
print(xiaohei.tooth)



class Dog(object):
    tooth = 10

wangcai = Dog()
xiaohei = Dog()

Dog.tooth = 12
print(Dog.tooth)
print(wangcai.tooth)
print(xiaohei.tooth)

wangcai.tooth = 20
print(Dog.tooth)
print(wangcai.tooth)
print(xiaohei.tooth)

"""

#1.定义类属性（私有类属型） 类方法获取这个私有属性
class Dog(object):
    __tooth = 10

    #定义类方法
    @classmethod
    def get_tooth(cls):
        return cls.__tooth

wangcai = Dog()
result = wangcai.get_tooth()
print(result)
#2.创建对象，调用类方法