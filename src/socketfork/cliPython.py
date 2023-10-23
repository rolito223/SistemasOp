import socket

def main():
    # Create a socket
    s = socket.socket()

    # Connect to the server
    s.connect(("172.17.203.139", 6666))

    # Send some data
    s.send(b"Hola Server!!")

    # Receive a reply
    print(s.recv(1024).decode('utf-8'))

    # Close the socket
    s.close()


if __name__ == '__main__':
    main()

