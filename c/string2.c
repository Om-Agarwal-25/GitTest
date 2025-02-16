// getch putch

#include <stdio.h>
#include <string.h>
#include <conio.h>

void main (){
    char a;
    printf ("Enter character \n");
    a=getch();
    printf ("Entered character is: ");
    putch(a);
}