// sum of all natural numbers

#include <stdio.h>
void main (){
    int sum=0;
    int n=0;
    printf("Enter till where you want the sum\n");
    scanf("%d",&n);
    for (int i=1;i<=n;i++) {
        sum=sum+i;
    }
    printf("Sum = %d",sum);
}