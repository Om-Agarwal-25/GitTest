//to print sum of digits of a given number

#include <stdio.h>
int sum=0;

int input () {
    int n;
    printf ("Enter the number\n");
    scanf ("%d",&n);
    return n;
}

int calc (int x) {
    if (x>0){
        sum += x%10;
        x /= 10;
        calc (x);
    }
    else {
        return sum;
    }
}

int main () {
    int num = input();
    printf ("Sum of digits of the number is : %d",calc (num));
}