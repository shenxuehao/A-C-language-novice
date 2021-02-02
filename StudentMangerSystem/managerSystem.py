from student import *
class StudentManager(object):
    def __init__(self):
        self.student_list = []

    #1.程序入口函数

    def run(self):
        #1.加载文件里的学员数据
        self.load_student()

        while True:

        #2.显示功能菜单
            self.show_menu()

        #3.用户输入目标功能序号
            menu_num = int(input('请输入要选择的功能序号'))
            # 4.根据用户输入的序号执行不同的功能
            if menu_num == 1:
                #添加学员
                self.add_student()

            if menu_num == 2:
                #删除学员
                self.del_student()

            elif menu_num == 3:
                #修改学员信息
                self.modify_student()

            elif menu_num == 4:
                #查询学员信息
                self.search_student()

            elif menu_num == 5:
                #显示所有学员信息
                self.show_student()

            elif menu_num == 6:
                #保存学员信息
                self.save_student()

            elif menu_num == 7:
                #退出系统
                break

    #2.系统功能函数

    #2.1显示功能菜单--打印序号对应的功能关系
    @staticmethod
    def show_menu():
        print('请选择如下功能----------')
        print('1.添加学员')
        print('2.删除学员')
        print('3.修改学员信息')
        print('4.查询学员信息')
        print('5.显示所有学员信息')
        print('6.保存学员信息')
        print('7.退出系统')


    #2.2添加学员
    def add_student(self):
        #1.用户输入姓名，性别，手机号
        name = input('请输入学员的姓名')
        gender = input('请输入学员的姓别')
        tel = input('请输入您的手机号')
        #2.创建对象
        student = Student(name, gender, tel)
        #3.将该对象添加到学院列表
        self.student_list.append(student)

        print(self.student_list)
        print(student)

    #2.3删除学员
    def del_student(self):
        del_name = input('请输入要删除的学员的姓名')
        for i in self.student_list:
            if i.name == del_name:
                self.student_list.remove(i)
                break

        else:
            print('查无此人')

        print(self.student_list)

    #2.4修改学员信息
    def modify_student(self):
        modify_name = input('请输入要修改的学员的信息')
        for i in self.student_list:
            if modify_name == i.name:
                i.name = input('请输入新的学员姓名')
                i.gender = input('请输入新的学员性别')
                i.tel = input('请输入新的学员名字')
                print(f'修改成功，{i.name},{i.gender},{i.tel}')
                break
        else:
            print('查无此人')

    #2.5查询学员信息
    def search_student(self):
        search_name = input('请输入要查询的学员名字')
        for i in self.student_list:
            print(f'姓名{i.name}，性别{i.gender}，手机号{i.tel}')
            break
        else:
            print('查无此人')

    #2.6显示所有学员信息
    def show_student(self):
        print('姓名\t性别\t手机号')
        for i in self.student_list:
            print(f'{i.name}\t{i.gender}\t{i.tel}')

    #2.7保存学员信息
    def save_student(self):
        f = open('student.data', 'w')
        new_list = [i.__dict__ for i in self.student_list]
        print(new_list)

        f.write(str(new_list))
        f.close()

    #2.8加载学员信息
    def load_student(self):
        #1.打开文件
        try:
            f = open('student.data', 'r')
        except:
            f = open('student.data', 'w')
        else:
        # 2.读取数据
            data = f.read() #字符串
            new_list = eval(data)
            self.student_list = [Student(i['name'], i['gender'], i['tel']) for i in new_list]

        #3.关闭文件
        finally:
            f.close()

