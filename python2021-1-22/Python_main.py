import os

#需求1：把code文件夹所有文件重命名Python_XXX
#需求2：删除python_ 重命名 1.构造条件的数据 2.书写if


#构造条件的数据
flag = 1


#1.找到所有文件：获取code文件夹的目录列表 --listdir()
file_list = os.listdir()
print(file_list)

#2.构造名字
for i in file_list:
    if 1 ==flag:
        #new_name = 'Python_' + 源文件名
        new_name = 'Python_' + i
    elif 2 == flag:
        #删除前缀
        num = len('Python_')
        new_name = i[num:]
#3.重命名
    os.rename(i,new_name)


#os.rename('1.txt','10.txt')

#print(os.getcwd())