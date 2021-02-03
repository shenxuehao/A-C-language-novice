"""
缺省参数
def user_info(name,age,gender = 'male'):
    print(f'your name is {name},your age is {age},your gender is {gender}')

user_info('TOM',20)
user_info('ROSE',18,'gender')
"""


#不定长参数
#1.包裹位置传递
def user_info(*args):
    print(args)

user_info('TOM')
user_info('TOM',18)

#2.包裹关键字传递
def user_info(**kwargs):
    print(kwargs)

user_info(name='TOM',age=18,id=110)
#user_info(name='TOM',age,id=110)