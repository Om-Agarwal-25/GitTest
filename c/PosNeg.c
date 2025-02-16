// program to check whether number is positive negative or zero


#include <stdio.h>
int main () {
    int x;
    printf("Enter the number\n");
    scanf("%d",&x);
    Check (x);
}
void Check (int n) {
    if (n>0){
        printf ("Number is positive");
    }
    else if (n<0) {
        printf ("Number is negative");
    }
    else {
        printf("Number is 0");
    }
}