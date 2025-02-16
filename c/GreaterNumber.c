//program to print which number is greater

#include<stdio.h>
void main(){
    int a,b;
    printf("enter a: ");
    scanf("%d",&a);
    printf("enter b: ");
    scanf("%d",&b);
    (a>b)?printf("%d is greater than %d",a,b):(a==b)?printf("Both numbers are equal"):printf("%d is greater than %d",b,a);
}