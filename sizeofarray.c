#include <stdio.h>

int main()
{
char *charT[4] = {"f1","f2","f3","f4","f5"};

int size1 = sizeof(charT);
int size2 = sizeof(charT) / sizeof(char *);

printf("Size = %d\n", size1);
printf("Size2 = %d\n", size2);
return 0;
}
