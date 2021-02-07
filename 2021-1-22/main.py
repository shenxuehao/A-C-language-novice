#用户输入目标文件
old_name = input('请输入您要备份的文件名')

#规划备份文件的名字
#2.1提取后缀
index = old_name.rfind('.')#查找

#2.2组织新名字
new_name = old_name[:index] + '[备份]' + old_name[index:]#切片


#3备份文件写入数据
#3.1打开原文件与备份文件
old_f = open(old_name, 'rb')
new_f = open(new_name, 'wb')

#3.2如果不确定目标文件大小，循环读取写入
while True:
    con = old_f.read(1024)#1024代表读取的长度
    if len(con) == 0:
        break
    new_f.write(con)

old_f.close()
new_f.close()
