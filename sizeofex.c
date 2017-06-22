/*
** a test for more learning
** deeeeep learning
*/

#include <stdio.h>

int main()
{
char *myString;
char **str;

myString = "Hello World";
str = &myString;
printf("size of a char = %d byte.\n", sizeof(char));
printf("size of a short = %d byte.\n", sizeof(short));
printf("size of a short* = %d bytes.\n", sizeof(short*));
printf("size of a int = %d bytes.\n", sizeof(int));
printf("size of a int* = %d bytes.\n", sizeof(int*));
printf("size of a char* = %d bytes.\n", sizeof(char*));
printf("Value of myString[0] = %c.\n", myString[0]);
printf("size of a float = %d bytes.\n", sizeof(float));
}
