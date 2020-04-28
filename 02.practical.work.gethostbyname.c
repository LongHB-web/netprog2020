#include <stdio.h> 
#include <stdlib.h> 
#include <unistd.h> 
#include <errno.h> 
#include <netdb.h> 
#include <sys/socket.h> 
#include <netinet/in.h> 
#include <arpa/inet.h>
void checkHostName(ins hostname){
    if (hostname == -1){
        perror("gethostname");
        exit(1);
    }
}
void checkHostEntry(struct hostent * hostentry){
    if(hostentry == NULL){
        perror("gethostbyname");
        exit(1);
    }
}
int main(){
char hostbuffer[123];
char *IPbuffer;
struct hostent *host_entry;
int hostmain;

hostname = gethostname(hostbuffer, sizeof(hostbuffer));
checkHostName(host_entry);

IPbuffer =  intet_ntoa (*((struct in_addr*)host_entry->h_addr_list[0]));
printf("hostname: %s\n", hostbuffer);
printf("Host IP: %s", IPbuffer);
return 0;
}

    

