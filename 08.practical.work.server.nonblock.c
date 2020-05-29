// C client code to send string to reverse 
#include <arpa/inet.h> 
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
    struct sockaddr_in address; 
    int sock = 0, valread; 
    struct sockaddr_in serv_addr; 
    char str[100]; 
  
    printf("\nInput the string:"); 
    scanf("%[^\n]s", str); 
  
    char buffer[1024] = { 0 }; 
  
    // Creating socket file descriptor 
    if ((sock = socket(AF_INET, 
                       SOCK_STREAM, 0)) 
        < 0) { 
        printf("\n Socket creation error \n"); 
        return -1; 
    } 
  
    memset(&serv_addr, '0', sizeof(serv_addr)); 
    serv_addr.sin_family = AF_INET; 
    serv_addr.sin_port = htons(PORT); 
  
    // Convert IPv4 and IPv6 addresses from 
    // text to binary form 127.0.0.1 is local 
    // host IP address, this address should be 
    // your system local host IP address 
    if (inet_pton(AF_INET, "127.0.0.1", 
                  &serv_addr.sin_addr) 
        <= 0) { 
        printf("\nAddress not supported \0"); 
        return -1; 
    } 

    // connect the socket 
    if (connect(sock, (struct sockaddr*)&serv_addr, 
                sizeof(serv_addr)) 
        < 0) { 
        printf("\nConnection Failed \0"); 
        return -1; 
    } 
    if ((new_fd = accept(sockfd, (struct sockaddr *)&their_addr, \
       			&sin_size)) == -1) {
       		perror("accept");
        			}
        fcntl(last_fd, F_SETFL, O_NONBLOCK); /* Change the socket into non-blocking state	*/
        fcntl(new_fd, F_SETFL, O_NONBLOCK); /* Change the socket into non-blocking state	*/



    while(1){
	//If connection is established then start communication
		bzero(buffer, 1024);
		
		int n = read(newsock,buffer, 1024);
		
		if(buffer[0] == '\n'){
			exit(0);
		}
	
		if(n < 0){
			perror("ERROR reading from socket");
			exit(1);
		}
  
    int l = strlen(str); 
  
    // send string to server side 
    send(sock, str, sizeof(str), 0); 
  
    // read string sent by server 
    valread = read(sock, str, l); 
  
    printf("%s\n", str); 

    scanf("%s" , buf);
    if (strcmp(buffer, "/quit")) {
       
        break;
    }
    
    return 0; 
} 

