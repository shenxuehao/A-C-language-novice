import socket

if __name__ == '__main__':
    #1.创建TCP客户端套接字
    tcp_client_socket = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
    #2.和服务端套接字建立连接，建立连接以后才能发送数据
    tcp_client_socket.connect(("192.168.199.1",8080))
    #3.发送数据到服务端
    send_content = "nihao"
    send_data = send_content.encode("utf-8")
    tcp_client_socket.send(send_data)
    #4.接收服务端的数据
    recv_data = tcp_client_socket.recv(1024)
    recv_content = recv_data.decode("utf-8")
    print(recv_content)
    #5.关闭套接字
    tcp_client_socket.close()