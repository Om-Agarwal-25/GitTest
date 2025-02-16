// program to check whether alphabet is uppercase or lowercase



#include <stdio.h>
int main()
{
    char var;
    printf("Enter the alphabet\n");
    scanf ("%c",&var);
    Check(var);
}

void Check (char ch){
    if (ch>='a'&&ch<='z'){
        printf("Character is Lowercase");
    }
    else if (ch>='A'&&ch<='Z'){
        printf("Character is Uppercase");
    }
}