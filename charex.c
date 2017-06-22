#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

int main()
{
int fd1;
int fd2; 
int fd3;
char i;
char j;
char k;

i = 120;
j = 0x78;
k = 0b01111000;
printf("Char = %c\n", i);
printf("Char = %c\n", j);
printf("Char = %c\n", k);
}
