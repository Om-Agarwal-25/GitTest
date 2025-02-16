//to print odd or even number in a given range

#include<stdio.h>
int even(int x, int y){
    if(x<=y){
       if(x%2==0){
        printf("%d ",x);
        x++;
        even(x,y);
       }
       else{
        x++;
        even(x,y);
    }
    }
}
int odd(int x, int y){
    if(x<=y){
       if(x%2!=0){
        printf("%d ",x);
        x++;
        odd(x,y);
       }
       else{
        x++;
        odd(x,y);
    }
    }
}
int main(){
    int a,b;
    printf("Enter starting number of range: ");
    scanf("%d",&a);
    printf("Enter ending number of range: ");
    scanf("%d",&b);
    printf("Even Number: ");
    even(a,b);
    printf("\n");
    printf("Odd Numbers: ");
    odd(a,b);
return 0;
}