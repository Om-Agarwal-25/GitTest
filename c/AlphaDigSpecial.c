// program to check whether character is alphabet digit or special character


#include <stdio.h>

int main () {
    char var;
    printf("Enter the character\n");
    scanf ("%c",&var);
    Check (var);
}

void Check (char ch){
    if (ch>='A'&&ch<='Z'||ch>='a'&&ch<='z'){
        printf("Character is an alphabet");
    }
    else if (ch>='0'&&ch<'9'){
        printf("Character is a digit");
    }
    else {
        printf("Character is a special character");
    }
}