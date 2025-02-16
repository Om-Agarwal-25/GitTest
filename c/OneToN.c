// to print 0 to n and n to 0 using for loop

#include <stdio.h>
int main (){
    int n;
    printf("Till where do you want your numbers ?\n");
    scanf("%d",&n);
    for (int i=0;i<=n;i++){
        printf ("%d  ",i);
    }   
    for (int j=n;j>=0;j--){
        printf ("%d  ",j);
    }
}