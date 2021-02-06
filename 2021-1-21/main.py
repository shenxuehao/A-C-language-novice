"""
文件的打开
#1.打开open()
f = open('test.txt', 'w')
#2.读写操作write()
f.write('helloworld')
#3.关闭close()

f = open('test.txt','r')
f.close()

f = open('1.txt','w')
f.write('bbb')
f.close()

f = open('2.txt', 'a')
f.write('xyz')
f.close()

f = open('test.txt', 'r')
print(f.read())
f.close()

f = open('test.txt', 'r')
content = f.readlines()
print(content)
f.close()
"""

old_name = input('请输入要备份的文件名')

index = old_name.rfind('.')
#print(index)
#print(old_name[:index])

new_name = old_name[:index] + '[副本]' + old_name[index:]

print(new_name)