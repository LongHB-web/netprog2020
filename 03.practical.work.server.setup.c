#include <sys/types.h>
#include <sys/socket.h>
#include <netdb.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/stat.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>


int main()
{
    int ss, cli, pid;
    struct sockaddr_in ad;
    char s[100];
    socklen_t ad_length = sizeof(ad);

    ss = socket(AF_INET, SOCK_STREAM, 0);

    memset(&ad, 0 , sizeof(ad));
    ad.sin_family = AF_INET;
    ad.sin_addr.s_addr = INADDR_ANY;
    ad.sin_port = hton(8784);
    if (bind(ss, (struct sockaddr *)&ad, ad_length) < 0){
    	printf("Can't bind")
	exit(1);
    }
    if (listen(ss, 0) == -1){
    	printf("Can't listen on port 8784");
	exit(1);
    }

    cli = accept(ss, (struct sockaddr *)&ad, &ad_length);
    if (cli == -1) {
    	printf("Wrong");
	exit(1);
    } 
    else 
	printf("Connected");

    // disconnect
    close(cli);
}