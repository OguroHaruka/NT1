#define _WINSOCK_DEPRECATED_NO_WARNINGS
#include<winsock.h>
#include<stdio.h>

int main() {
	WSADATA wsaData;

	if (WSAStartup(MAKEWORD(2, 0), &wsaData) != 0) {
		printf("WinSockの初期化に失敗しました|n");
		return 1;
	}

	WSACleanup;

	return 0;
}