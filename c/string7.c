// concat with strconcat

#include <stdio.h>
#include <string.h>
#include <conio.h>

void main (){
    char a[20];
    char b[20];
    printf ("Enter the String 1 \n");
    gets(a);
    printf ("Enter the String 2 \n");
    gets(b);
    printf ("Concatenated string is %s", strcat(a,b));
}