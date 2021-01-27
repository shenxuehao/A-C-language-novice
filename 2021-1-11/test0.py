list1 = {1, 1, 2}
set1 = {i ** 2 for i in list1}
print(set1)

"""
counts = {'MBP':268, 'HP':125, 'DELL':201, 'Lenovo':199, 'acer':99}
count1 = { key:value for key,value in counts.items() if value >= 200}
print(count1)

"""

"""
list1 = ['name', 'age', 'gender']
list2 = ['Tom', 20, 'male']
dict1 = {list1[i]:list2[i] for i in range(len(list1))}
print(dict1)
"""

"""
#创建字典 key是1-5的数字，v是这个数字的平方
dict1 = {i:i**2 for i in range(1,5)}
print(dict1)

"""



"""
#多个for循环实现列表推导式
#创建一个列表[(1, 0), (1, 1), (1, 2), (2, 0), (2, 0), (2, 0),
#数据1:1 2 range(1,3)、数据2：0 1 2 range(3)
list = []
for i in range(1, 3):
    for j in range(3):
        #列表里面追加元组，循环前准备一个空列表
        list.append((i, j))
print(list)

#多个for实现列表推导式
list1 = [(i, j) for i in range(1,3) for j in range(3)]
print(list1)
"""


"""
#需求：0-10偶数数据的列表
#1.简单列表的推导式，用range控制步长
list1 = [i for i in range(0, 10 ,2)]
print(list1)

#2.for循环加if去创建有规律的列表
list2 = []
for i in range(10):
    if i % 2 == 0:
        list2.append(i)
print(list2)


#3.把for循环配合if的代码改写成带if的列表推导式
list3 = [i for i in range(10) if i % 2 == 0]
print(list3)
"""

"""
1,2,3,4,5,6......
1.循环实现
    1.1创建空列表
    1.2循环将有规律的数据写入列表
2.列表推导式
"""

"""
list1 = [i for i in range(10)]
print(list1)

"""

"""
#for--------------
list = []
for i in range(10):
    list.append(i)
print(list)
"""

"""
#while---------
list1 = []
i = 0
while i<10:
    list1.append(i)
    i += 1

print(list1)
"""

