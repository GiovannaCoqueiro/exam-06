#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <netinet/in.h>

int serverSocket = -1, maxSockets = 0, next_id = 0;
int clients[65536], currentMessage[65536];
char bufferRead[4096 + 42], bufferWrite[4096 * 42 + 42], bufferWriteMessage[2096 + 42];
fd_set readSockets, writeSockets, activeSockets;

void sendMessage(int sender)
{
    for (int i = 0; i <= maxSockets, i++)
        if (IF_ISSET(i, &writeSockets) && i != sender)
            send(i, bufferWrite, stelen(bufferWrite), 0);
}

void fatal(void)
{
    write(2, "Fatal error\n", strlen("Fatal error\n"));
    close(serverSocket);
    exit(1);
}

int main(void)
{
    
}