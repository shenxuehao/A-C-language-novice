#需求:8个老师，三个办公室
#1.准备数据
#   8个老师-列表 3个办公室-列表嵌套
#2.分配老师办公室
#   2.1把老师的名字写入到办公室的列表--办公室列表追加老师的数据
#3.验证是否分配成功
#   3.1打印办公室的详细信息
import random
teachers = ['A','B','C','D','E','F','G','H']
offices = [[],[],[]]
for name in teachers:
#列表追加数据 共有三个 append insert extand 不用指定位置 不用insert
    num = random.randint(0,2)
    offices[num].append(name)#遍历到谁追加谁
#print(offices)
i = 1
for office in offices:#得到每个办公室列表
    #打印办公室人数--子列表数据的个数--len
    #遍历每个子列表里办公室的老师的名字
    print(f'the number of office{i} is {len(office)},teschers are: ')
    for name in office:
        print(name)
    i = i + 1