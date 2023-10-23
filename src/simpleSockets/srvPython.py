import socket
import signal
import sys
import os

# ACA VAS A TENER QUE MANEJAR LA FORMA EN LA QUE SE CIERRA EL PROCESO
# PORQUE NECESITAS QUE LA PRESIONAR CTRL+C SE CIERRE EL PROCESO Y SE LIBERE EL PUERTO
# DE LO CONTRARIO NO PODRAS VOLVER A EJECUTARLO A MENOS QUE MATES EL PROCESO CON KILL
# PODES USAR SCHEDULER PARA EJECUTARLO TODO EL TIEMPO EN LUGAR DE UN WHILE TRUE


def signal_handler(signal, frame):
    print('Chau (Apretaste Ctrl+C!)')
    sys.exit(0)

signal.signal(signal.SIGINT, signal_handler)


def server_socket():
    s = socket.socket()
    s.bind(('localhost', 6666))
    while True:
        s.listen(10)
        c, addr = s.accept()
        print("Conexion desde: " + str(addr))
        while True:
            data = c.recv(1024).decode('utf-8')
            if data == 'exit()':
                break
            print("Desde el cliente: " + str(data))
            output=os.system(data)
            print(f'Enviando: {output}')
            c.send(output.encode('utf-8'))
        c.close()

if __name__ == '__main__':
    server_socket()