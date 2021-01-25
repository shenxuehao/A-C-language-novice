#1.准备要判断的数据：钱和座位
money = int(input("有钱吗？有输1"))
if money == 1:
    print("有钱,可以上车")
    if int(input("有座位输入1")) == 1:
        print("有座位，请坐")
    else:
        print("没座位了，站着吧")
else:
    print("没钱不能坐车")