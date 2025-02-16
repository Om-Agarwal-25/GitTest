// 1
// 12
// 123
// 1234

#include <stdio.h>
void main () {
    int rows;
    printf ("Enter how many rows you want of the number pattern\n");
    scanf ("%d",&rows);
    for (int i=1;i<=rows;i++){
        for (int j=1;j<=i;j++){
            printf (" %d ",j);
        }
        printf ("\n");
    }
}