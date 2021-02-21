import socket
#1.创建服务端端套接字对象
if __name__ == '__main__':
    tcp_server_socket = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
#2.绑定端口号（客户端得知道服务端的端口号）
    tcp_server_socket.bind(("", 9090))
#3.设置监听
    tcp_server_socket.listen(120)
#4.等待接受客户端的连接请求
    new_client, ip_port = tcp_server_socket.accept()
    print('客户端的ip和端口号为：', ip_port)
#5.接收数据
    recv_data = new_client.recv(1024)
    recv_content = recv_data.decode("gbk")
#6.发送数据
    send_content = ("草泥马傻逼日了狗了")
    send_data = send_content.encode("gbk")
    new_client.send(send_data)
#7.关闭套接字
    tcp_server_socket.close()
    new_client.close()