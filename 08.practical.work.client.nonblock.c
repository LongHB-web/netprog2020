// Server C code to reverse a 
// string by sent from client 
#include <netinet/in.h> 
#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
#include <sys/socket.h> 
#include <unistd.h> 
  
#define PORT 8090 
  
// Driver code 
int main() 
{ 
    int server_fd, new_socket, valread; 
    struct sockaddr_in address; 
    char str[100]; 
    int addrlen = sizeof(address); 
    char buffer[1024] = { 0 }; 
    char* hello = "Hello from server"; 

    int i=0;
	
    // Creating socket file descriptor 
    if ((server_fd = socket(AF_INET,  
                          SOCK_STREAM, 0)) == 0) { 
        perror("socket failed"); 
        exit(EXIT_FAILURE); 
    } 
  
    address.sin_family = AF_INET; 
    address.sin_addr.s_addr = INADDR_ANY; 
    address.sin_port = htons(PORT); 
     int app = 1;
	int setkop = setsockopt(sock,SOL_SOCKET,SO_REUSEADDR, &app	 ,sizeof(app));
	int flg = fcntl(sock, F_GETFL, 0);
  
    // Forcefully attaching socket to 
    // the port 8090 
    if (bind(server_fd, (struct sockaddr*)&address,  
                          sizeof(address)) < 0) { 
        perror("bind failed"); 
        exit(EXIT_FAILURE); 
    } 
  
    // puts the server socket in passive mode 
    if (listen(server_fd, 3) < 0) { 
        perror("listen"); 
        exit(EXIT_FAILURE); 
    } 
    if ((new_socket = accept(server_fd, 
                  (struct sockaddr*)&address, 
                  (socklen_t*)&addrlen)) < 0) { 
        perror("accept"); 
        exit(EXIT_FAILURE); 
    } 
  
    // read string send by client 
    valread = read(new_socket, str, 
                   sizeof(str)); 
    int i, j, temp; 
    int l = strlen(str); 
  
    printf("\nString sent by client:%s\n", str); 

    while(1){
		cout << endl;
		
		printf("client: ");
		if(i == 0){
            
		  	sizeof(buffer, 1024);
			getchar();
			fgets(buffer, 1024 ,stdin);
		}
		else{
			sizeof(buffer, 1024);
			fgets(buffer, 1024 ,stdin);
		}
		
		if(buffer[0] == '\n'){
			close(0);
			exit(0);
		}
  
    // send reversed string to client 
    // by send system call 
    send(new_socket, str, sizeof(str), 0); 
    printf("\nModified string sent to client\n"); 

    memset(buffer, 0, sizeof(buffer));
                printf("Enter: ");
                scanf("%s", buffer);
                if (strcmp(buffer, "/dc") == 0){
                    break;
                }
                send(clientfd, buffer, strlen(buffer)+1, 0)

    close(clientfd);
    return 0;
}
