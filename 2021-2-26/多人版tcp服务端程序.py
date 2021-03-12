import socket


#tcp客户端程序
if __name__ == '__main__':
    #1.创建tcp客户端套接字
    tcp_client_socket = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
    #2.和服务端套接字建立连接
    tcp_client_socket.connect(("192.168.199.1",9090))

    send_conteent = "天权星凝光"
    #对字符串编码成为二进制数据
    send_data = send_conteent.encode("gbk")
    # 3.发送数据到服务端
    tcp_client_socket.send(send_data)
    #4.接收服务端的数据
    recv_data = tcp_client_socket.recv(1024)
    recv_content = recv_data.decode("gbk")
    print("接受服务端的数据为：",recv_content)

    #5.关闭套接字

    tcp_client_socket.close()
