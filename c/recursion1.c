//to count digits of a given number

#include <stdio.h>
int count=0;

int input () {
    int n;
    printf ("Enter the number\n");
    scanf ("%d",&n);
    return n;
}

int digits (int x) {
    if (x>0){
        x /= 10;
        count++;
        digits(x);
    }
    else {
        return count;
    }
}

int main () {
    int num = input();
    printf ("Number of digits is : %d", digits (num) );
}

