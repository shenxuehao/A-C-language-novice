import socket
import os

def main():
    # 创建tcp服务端的套接字
    tcp_server_socket = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
    # 设置端口号复用，程序退出端口号立即释放
    tcp_server_socket.setsockopt(socket.SOL_SOCKET, socket.SO_REUSEADDR, True)
    # 服务端必须要bind绑定端口号
    tcp_server_socket.bind(("", 8000))
    # 设置监听
    tcp_server_socket.listen(128)  # 最大有128个链接可以进行等待
    # 循环等待接收客户端的连接请求
    while True:

        # 等待接收客户端的连接请求
        new_socket, ip_port = tcp_server_socket.accept()  # 解阻塞之后，代码就能继续往下执行，表示连接建立成功
        # ip_port指的是客户端的ip地址和端口号，代码执行到此说明连接建立成功
        # 接收客户端的请求信息
        recv_data = new_socket.recv(4096)  # 浏览器发送数据请求的时候，数据上限一般是4kb

        if len(recv_data) == 0:
            new_socket.close()
            return

        # 对二进制数据进行解码
        recv_content = recv_data.decode("gbk")
        print(recv_content)
        # 对数据按照空格分隔
        request_list = recv_content.split(" ", 2)  # 分割完得到一个元组
        # 获取请求的资源路劲
        request_path = request_list[1]
        print(request_path)

        # 判断请求的是不是根目录
        if (request_path == "/"):
            request_path = "/index.html"

        #方法一os.path.exits
        #os.path.exists("static"+request_path)
        #方法二 try except


        try:
            # 打开文件读取文件中的数据
            with open("static" + request_path, "rb") as file:  # 这里的file表示打开文件对象
                file_data = file.read()
                # with open关闭文件这步操作不用程序员来完成，系统会帮我们完成
        except Exception as e:
            #代码执行到此说明没有请求的该文件，返回404状态信息
            # 响应行
            response_line = "HTTP/1.1 404 Not Found\r\n"
            # 响应头
            response_header = "Server:PWS/1.0\r\n"
            # 空行

            #读取404页面数据
            with open("static/error.html","rb") as file:
                file_data=file.read()
                # 响应体
                response_body = file_data

                # 把数据封装成http 响应报文格式数据
                response = (response_line + response_header + "\r\n").encode("gbk") + response_body
                # 把字符串编码成二进制
                # 发送给浏览器的响应报文数据
                new_socket.send(response)
        else:
            # 不能写成new_socket.send(file_data.encode("utf-8"))，因为这个只能发送普通数据，浏览器不接受这种数据，http只能识别http协议的数据
            # 把数据封装成http响应报文格式的数据
            # 响应行
            response_line = "HTTP/1.1 200 OK\r\n"
            # 响应头
            response_header = "Server:PWS/1.0\r\n"
            # 空行

            # 响应体
            response_body = file_data

            # 把数据封装成http 响应报文格式数据
            response = (response_line + response_header + "\r\n").encode("gbk") + response_body
            # 把字符串编码成二进制
            #
            # 发送给浏览器的响应报文数据
            new_socket.send(response)
        finally:
            # 关闭服务于客户端的套接字，服务端的套接字不能关，关了以后就不能提供服务了
            new_socket.close()


#判断是否是主模块的代码
if __name__ == '__main__':
    main()

        #打开google，输入http://localhost:8000/grand.html