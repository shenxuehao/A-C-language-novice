#功能界面
def print_info():
    print('-'*20)
    print('欢迎登陆学员管理系统')
    print('1.添加学员')
    print('2.删除学员')
    print('3.修改学员信息')
    print('4.查询学员信息')
    print('5.显示所有学员信息')
    print('6.退出系统')
    print('-'*20)

def add_info():
    """添加学员"""

    #接收用户输入的学校信息
    new_id = input('请输入学号')
    new_name = input('请输入名字')
    new_tele = input('请输入手机号')

    #声明全局变量
    global info
    #检测用户输入的姓名是否存在，则存在报错提示

    for i in info:
        if new_name == i['name']:
            print('该用户已存在')
            return

    #如果用户姓名不存在，则添加该学员信息
    info_dict = {}

    #将用户输入的数据追加到字典
    info_dict['id'] = new_id
    info_dict['name'] = new_name
    info_dict['tele'] = new_tele

    #将这个学员的字典数据追加到列表
    info.append(info_dict)

    print(info)

def del_info():
    """删除学员"""
    while True:
        del_id = int(input('请输入要删除的学员的学号'))
        global info
        #检查学员是否存在
        #如果存在则删除列表指定下标的数据
        if 0 <= del_id < len(info):
            del_flag = input('确定要删除吗?yes or no')
            if del_flag == 'yes':
                del info[del_id]
            print(info)
            #删除了目标学员信息后退出循环
            break
        else:
            print('输入学员信息有误，请重新输入')

def modify_info():
    """修改学员信息"""
    while True:
        modify_num = int(input('请输入要修改的学员的学号'))
        global info
        if 0 <= modify_num <len(info):
            print(f'该学员的学号为{info[modify_num]["id"]}')
            print(f'该学员的姓名为{info[modify_num]["name"]}')
            print(f'该学员的手机号为{info[modify_num]["tel"]}')
            info[modify_num]["id"] = input('请输入学号')
            info[modify_num]["name"] = input('请输入姓名')
            info[modify_num]["tel"] = input('请输入手机号')
            print(info)
            break
        else:
            print('输入学员的信息有误，请重新输入')

def search_info():
    """查询学员信息"""
    search_name = input('请输入要查找的学员的姓名：')

    for i in info:
        if search_name == i['name']:
            print('要查询的学员的信息如下')
            print(f'该学员的学号为{info[search_name]["id"]}')
            print(f'该学员的姓名为{info[search_name]["name"]}')
            print(f'该学员的手机号为{info[search_name]["tel"]}')
    else:
        print('-----查无此人-----')

def print_all_info():
    """显示所有学员的信息"""
    print('学号\t姓名\t手机号')
    for i in info:
        print(f'{i["id"]}\t{i["name"]}\t{i["tel"]}')



while True:
    print_info()
    info = []
    user_name = input('请选择您需要的功能序号')
    if user_name == '1':
        print('1.添加学员')
        add_info()
    elif user_name == '2':
        print('2.删除学员')
        del_info()
    elif user_name == '3':
        print('3.修改学员信息')
        modify_info()
    elif user_name == '4':
        print('4.查询学员信息')
        search_info()
    elif user_name == '5':
        print('5.显示所有学员信息')
        print_all_info()
    elif user_name == '6':
        print('6.退出系统')
        exit_flag = input('确定要退出码?yes or no')
        if exit_flag == 'yes':
            break
    else:
        print('输入不合法,请重新输入')


