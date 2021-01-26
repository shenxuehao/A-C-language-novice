"""
#1.打印正方形
i = 0
j = 0
while i<5:
    while j<5:
        print("*",end = ' ')
        j = j +1
    i = i + 1
    j = 0
    print("")
"""
"""
#2.打印三角形
i = 0
j = 0
while i<5:
    while j<i+1:
        print("*",end = ' ')
        j = j +1
    i = i + 1
    j = 0
    print("")
"""
#3.打印99乘法表
i = 0
j = 0
while i<9:
    while j<i+1:
        print(f"{i+1}*{j+1}={(i+1)*(j+1)}",end = '\t')
        j = j +1
    i = i + 1
    j = 0
    print("")
