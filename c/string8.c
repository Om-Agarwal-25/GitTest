// concat without strconcat

#include <stdio.h>
#include <string.h>
#include <conio.h>

void main (){
    char a[20],b[20];
    printf ("Enter the String 1 \n");
    gets(a);
    printf ("Enter the String 2 \n");
    gets(b);
    int i=strlen(a);
    int j=0;
    while (b[j]!='\0'){
        a[i]=b[j];
        i++;
        j++;
    }
    a[i]='\0';
    printf ("Concatenated string is %s", a);
}