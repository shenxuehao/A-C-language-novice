#定义功能界面函数
def info_print():
    print('-----请选择功能-----')
    print('1.添加学员')
    print('2.删除学员')
    print('3.修改学员')
    print('4.查询学员')
    print('5.显示所有学员')
    print('6.退出系统')
    print('-'*20)

#等待存储所有学员的信息
info = []

#添加学员信息的函数
def add_info():
    """添加学员信息"""
    #1.用户输入姓名、手机号、学号
    new_id = input("请输入学号:")
    new_name = input("请输入姓名:")
    new_tel = input("请输入手机号:")
    #2.怕毛短是否添加学员 如果存在，报错数据，不存在就添加，准备空字典，字典新增数据，列表新增字典

    global info

    for i in info:#遍历列表
        if new_name == i['name']:
            print('该用户已存在')
            return


    info_dict = {}

    #字典新增数据
    info_dict['id'] = new_id
    info_dict['name'] = new_name
    info_dict['tel'] = new_tel
    info.append(info_dict)
    print(info)



def del_info():
    """删除学员"""
    while True:
        del_name = input('请输入要删除的学员的姓名:')

        global info

        for i in info:
            if del_name == i['name']:
                del_flag = input('确实要删除吗？yes or no')
                if del_flag == 'yes':
                    #del info[del_id]
                    info.remove(i)
                    break
                elif del_flag == 'no':
                    print('删除取消')
                    break
                else:
                    print('输入不合法，退出本次删除')
                    break
            else:
                print('要删除的学员的学号不存在')
            print(info)


def modify_info():
    """修改函数"""
    modify_name = input('请输入要修改的学生的姓名')

    global info

    for i in info:
        if modify_name == i['name']:
            i['tel'] = input('请输入新的手机号')
            break
    else:
        print('该学员不存在')
    print(info)


def search_info():
    """查询学员"""
    search_name = input('请输入要查询的学员的姓名')
    global info
    for i in info:
        if search_name == i['name']:
            print(f"该学员的学号是{i['id']},该学员的姓名是{i['name']},该学员的手机号是{i['tel']}")
            break
    else:
        print('查询的学员不存在')


def print_all():
    """显示所有学员信息"""
    print('学号\t姓名\t手机号\t')
    for i in info:
        print(f"{i['id']}\t{i['name']}\t{i['tel']}\t")


#系统功能需要循环使用，直到用户输入6，退出系统
while True:
#1.显示功能界面
    info_print()


#2.用户输入功能序号
    user_num = int(input('请输入功能序号:'))

#3.按照用户输入的功能序号，执行不同的功能（函数）
    if user_num == 1:
        print('添加学员')
        add_info()
    elif user_num == 2:
        print('删除学员')
        del_info()
    elif user_num == 3:
        print('修改学员')
        modify_info()
    elif user_num == 4:
        print('查询学员')
        search_info()
    elif user_num == 5:
        print('显示所有学员')
        print_all()
    elif user_num == 6:
        print('退出系统')
        exit_flag = input('确定要退出吗?yes or no')
        if exit_flag == 'yes':
            break
        elif exit_flag == 'no':
            print('取消退出')
        else:
            print('输入不合法')
    else:
        print('输入不合法')