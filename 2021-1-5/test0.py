"""
1.出拳
    1.1玩家出拳：
    1.1.1手动输入
    1.2电脑出拳：
    1.2.1固定出剪刀
    1.2.2随机
    1.2.2.1导入模块 import random
    1.2.2.2 使用这个模块中的功能 random.randint(0,3)
2.判断输赢
    2.1玩家获胜
    2.2平局
    2.3电脑获胜
"""

import random
#1.出拳
#玩家
player = int(input("玩家出拳:0--石头;1--剪刀;2-布:>"))
#电脑
computer = random.randint(0,2)
print(f"computer={computer}")
#2.判断输赢
if ((player == 0) and (computer == 1))or((player == 1) and (computer == 2))or((player == 2) and (computer == 0)):
    print("player win")
elif player == computer :
        print("both win")
elif ((player == 0) and (computer == 2))or((player == 1) and (computer == 0))or((player == 2) and (computer == 1)):
            print("computer win")
