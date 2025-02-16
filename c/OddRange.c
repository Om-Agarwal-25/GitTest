// odd numbers between given range
#include <stdio.h>
int main(){
    int a,b;
    printf("Enter the range\n");
    scanf("%d",&a);
    scanf("%d",&b);
    for (int i=a;i<=b;i++){
        if (i%2!=0){
            printf("%d  ",i);
        }
    }
}