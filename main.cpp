#define _WINSOCK_DEPRECATED_NO_WARNINGS
#include<winsock.h>
#include<stdio.h>

int main() {
	WSADATA wsaData;

	if (WSAStartup(MAKEWORD(2, 0), &wsaData) != 0) {
		printf("WinSock‚Ì‰Šú‰»‚É¸”s‚µ‚Ü‚µ‚½|n");
		return 1;
	}

	WSACleanup;

	return 0;
}