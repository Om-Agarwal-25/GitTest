// length without strlen


#include <stdio.h>
#include <string.h>

int main (){
    char a[20];
    int pointer=0;
    int i=0;
    printf ("Enter the String \n");
    gets(a);
    while (a[i]!='\0'){
        pointer++;
        i++;
    }
    printf ("Length of string is: %d",pointer);
    return 0;
}