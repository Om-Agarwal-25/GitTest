//  *
//  **
//  ***
//  ****

#include <stdio.h>
void main () {
    int rows;
    printf ("Enter how many rows you want of the star pattern\n");
    scanf ("%d",&rows);
    for (int i=1;i<=rows;i++){
        for (int j=1;j<=i;j++){
            printf (" * ");
        }
        printf ("\n");
    }
}
