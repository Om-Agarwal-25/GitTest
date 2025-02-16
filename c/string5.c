// length with strlen

#include <stdio.h>
#include <string.h>
#include <conio.h>

void main (){
    char a[20];
    printf ("Enter the String \n");
    gets(a);
    printf ("Length of the string is %d", strlen(a));
}