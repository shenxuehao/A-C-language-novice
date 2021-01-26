"""
str1 = 'itheima'
for i in str1:
    print(i)
"""

#需求:打印5次echo，完成之后打印另一个ha
"""
i = 0
while i<5:
    if i == 3:
        print("fuck")
        break
    print("echo")
    i += 1
else:
    print("ha")
"""


i = 0
while i<5:
    if i == 3:
        print("fuck")
        i += 1
        continue
    print("echo")
    i += 1
else:
    print("ha")