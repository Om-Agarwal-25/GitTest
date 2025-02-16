//to multiply 2 matrices

#include<stdio.h>

int main(){
    int x,y;
    printf("Enter no. of rows: ");
    scanf("%d",&x);
    printf("Enter no. of columns: ");
    scanf("%d",&y);

    int a[x][y], b[x][y], mult[x][y];
    printf("Enter elements of Matrix 1: ");
    for(int i=0; i<x; i++){
        for(int j=0; j<y; j++){
            scanf("%d",&a[i][j]);
        }
    }


    printf("Enter elements of Matrix 2: ");
    for(int i=0; i<x; i++){
        for(int j=0; j<y; j++){
            scanf("%d",&b[i][j]);
        }
    }


    for(int i=0; i<x; i++){
        for(int j=0; j<y; j++){
            mult[i][j]=0;
            for(int k=0; k<x; k++){
                mult[i][j] += a[i][k]*b[k][j];
            }
        }
    }


    printf("The multiplication of the two matrices is: \n");
    for(int i=0; i<x; i++){
        for(int j=0; j<y; j++){
            printf("%d \t",mult[i][j]);
        }
        printf("\n");
    }
return 0;
}