
sockaddr_in addr;
addr.sin_family = AF_INET;
addr.sin_addr.s_addr = inet_addr("127.0.0.1");
addr.sin_port = htons(5000);
bind(serverSocket, (sockaddr*)&addr, sizeof(addr));
