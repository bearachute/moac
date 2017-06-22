/*
** tutorial by badprog but used as example to learn c
*/

#include <stdlib.h>
#include <stdio.h>

int main()
{
char *myString;

myString = malloc(sizeof(myString));
if (myString = NULL)
{
printf("Can not malloc(), not enough space in memory\n");
exit(1);
}
else
{
printf("Ok memory is allocated\n");
free(myString);
}
return (0);
}
