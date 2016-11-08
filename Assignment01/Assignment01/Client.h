#pragma once
#include<winsock.h>

class Client
{
	SOCKET s;
public:
	Client();
	bool ConnectToHost(int Port, char* IPAdrress);
	void CloseConnection();
};

