mystr = "hello world and itcast and itheima and python"
mystr1 = "Hello World and Itcast and Itheima and Python"
mystr2 = "   hello world and itcast and itheima and python"
mystr3 = "hello world and itcast and itheima and python   "
mystr4 = "   hello world and itcast and itheima and python   "
"""
#isalpha
"""
print(mystr.isalpha())
str = "abcdef"
print(str.isalpha())
strnum = '123456'
print(strnum.isdigit())
mystr_space = "     "
print(mystr.isspace())
print(mystr_space.isspace())

"""
print(mystr.startswith('hello'))
print(mystr.startswith('hello',10,20))
print(mystr.endswith('python'))
print(mystr.endswith('python',20,60))
"""

"""
print(mystr.ljust(50,'|'))
print(mystr.ljust(100,'-'))
print(mystr.rjust(100,'*'))
print(mystr.center(100,'*'))
"""

"""
#capitalize()
print(mystr.capitalize())
#print(capitalize(mystr)) 不能这么写
print(mystr1.capitalize())
print(mystr.title())
print(mystr1.lower())
print(mystr.upper())
print(mystr.lstrip())
print(mystr2)
print(mystr3.rstrip())
print(mystr3)
print(mystr4.strip())
print(mystr4)
"""

"""
#jion
list1 = ['nan','jing','nong','ye','da','xue']
t1 = ['nan','jing','lin','ye','da','xue']
print(' '.join(list1))
print('-'.join(t1))
"""

"""
#split
print(mystr.split('and'))
my_cut_2_str = mystr.split('and',2)
print(my_cut_2_str)
print(mystr.split(' '))
"""

"""
my_str = mystr.replace('and','&')
my_1_str = mystr.replace('and','&',1)
print(mystr)
print(my_str)
print(my_1_str)
"""

"""
#查找
print(mystr.rfind('and'))
print(mystr.rfind('and',15,30))
print(mystr.rfind('ands'))
print(mystr.rindex('and'))
print(mystr.rfind('and',15,30))
print(mystr.rindex('ands'))
"""

"""
#查找
print(mystr.find('and'))
print(mystr.find('and',15,30))
print(mystr.find('ands'))
print(mystr.index('and'))
print(mystr.index('and',15,30))
print(mystr.index('ands'))
"""
