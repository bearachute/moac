/*****getipaddr.c ******/
/****simple look up socket****/
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <netdb.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>

int main(int argc, char *argv[])
{
struct hostent *h;

/* error check */
if(argc != 2)
{
fprintf(stderr, "Usage: %s <domain name\n", argv[0]);
exit(1);
}

/* get the host info */
if((h=gethostbyname(argv[1])) == NULL)
{
herror("gethostbyname(): ");
exit(1);
}
else
printf("gethostbyname() is OK.\n");

printf("The host name is: %s\n", h->h_name);
printf("The IP addy is: %s\n", inet_ntoa(*((struct in_addr *)h->h_addr)));
printf("The address length is: %d\n", h->h_length);

printf("Sniffing other names....sniff...sniff...\n");
int j = 0;
do
{
printf("An alias #%d is: %s\n", j, h->h_aliases[j]);
j++;
}
while(h->h_aliases[j] != NULL);

printf("Sniffing other IPS....sniff...snuff?\n");
int i = 0;
do
{
printf("Address #%i is: %s\n", i, inet_ntoa(*((struct in_addr *) (h->h_addr_list[1]))));
i++;
}
while(h->h_addr_list[i] != NULL);
return 0;
}
