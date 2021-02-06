"""def sum_num(a,b,f):
    return f(a) + f(b)

result = sum_num(-1, -2, abs)
result2 = sum_num(1.1, 1.2, round)
print(result)
print(result2)"""



"""
def func(x):
    return x**2

result = map(func, list1)

print(result)
print(list(result))
"""

import functools

list1 = [1, 2, 3, 4, 5]

def func(a, b):
    return a + b

def func1(a, b):
    return a * b

result = functools.reduce(func, list1)
result0 = functools.reduce(func1, list1)

print(result)
print(result0)