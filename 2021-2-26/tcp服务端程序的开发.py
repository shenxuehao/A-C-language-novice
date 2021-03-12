import socket


if __name__ == '__main__':


    #1.创建一个tcp服务端套接字对象
    tcp_sever_socket = socket.socket(socket.AF_INET,socket.SOCK_STREAM)
    #2.绑定端口号
    tcp_sever_socket.bind(("",9090))
    #3.设置监听
    tcp_sever_socket.listen(128)
    #4.等待接收客户端的连接请求
    new_client,ip_port = result = tcp_sever_socket.accept()
    print("客户端的ip和端口号为",ip_port)
    #5.接收客户端的数据
    recv_data = new_client.recv(1024)
    recv_content = recv_data.decode("gbk")
    print("接收客户端的数据为:",recv_content)
    #6.发送数据到客户端
    send_content = "异世相遇，尽享美味"
    #对字符串进行编码
    send_data = send_content.encode("gbk")
    new_client.send(send_data)
    #7.关闭套接字
    new_client.close()
    tcp_sever_socket.close()