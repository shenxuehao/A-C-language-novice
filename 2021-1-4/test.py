"""
案例：工龄判断
"""
age = int(input("请输入您的年龄:>"))
if age < 18:
    print(f"您的年龄是{age},是童工")
elif age>=18 and age <= 60:
    print(f"您的年龄是{age},合法工龄")
elif age>60:
    print(f"您的年龄是{age},可以退休")