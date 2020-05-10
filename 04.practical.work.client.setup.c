#include<stdio.h>
#include<stdlib.h>
#include<string>
#include<sys/types.h>
#include<sys/socket.h>
#include<netdb.h>
#include<fcntl.h>
#include<unistd.h>
#include<sys/stat.h>

int main(){
  int clientSocket;
  char buffer[1024];
  struct sockaddr_in serverAddr;
  socklen_t addr_size;   
}
if ((sockfd=socket(AF_INET, SOCK_STREAM, 0)) < 0) {
    printf(“Error creating socket\n”);
}
if (h=gethostbyname("cs.usth.edu.vn")) == NULL) {
		printf("Unknown host\n");
	}
 
  memset(&saddr, 0, sizeof(saddr));
  saddr.sin_family = AF_INET;
  memcpy((char *) &saddr.sin_addr.s_addr, h->h_addr_list[0], h->h_length);
  saddr.sin_port = htons(port);

if (connect(sockfd, (struct sockaddr *) &saddr, sizeof(saddr)) < 0) {
    printf(“Cannot connect\n”);
...
} 




