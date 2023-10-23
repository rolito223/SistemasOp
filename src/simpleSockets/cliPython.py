import socket
import signal
import sys



def signal_handler(signal, frame):
    print('Chau (Apretaste Ctrl+C!)')
    sys.exit(0)

signal.signal(signal.SIGINT, signal_handler)


def main():
    # Create a socket
    s = socket.socket()

    # Connect to the server
    try:
        s.connect(("localhost", 6666))
    except socket.error as e:
        print(e)
        sys.exit(0)
        
    message = ''
    
    while (message != 'fin'):
        message = input("->")
        # Send some data
        s.send(bytes(message, 'utf-8'))
        # Receive a reply
        print(s.recv(1024).decode('utf-8'))
        
    # Close the socket
    s.close()


if __name__ == '__main__':
    
    main()

