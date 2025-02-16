//to add 2 matrices

#include<stdio.h>

int main(){
    int x,y;
    printf("Enter no. of rows: ");
    scanf("%d",&x);
    printf("Enter no. of columns: ");
    scanf("%d",&y);
    int a[x][y], b[x][y], add[x][y];


    printf("Enter elements of Matrix 1: ");
    for(int i=0; i<x; i++){
        for(int j=0; j<y; j++){
            scanf("%d",&a[i][j]);
        }
    }


    printf("Enter elements of Matrix 2: ");
    for(int i=0;i<x;i++){
        for(int j=0;j<y;j++){
            scanf("%d",&b[i][j]);
        }
    }


    for(int i=0;i<x;i++){
        for(int j=0;j<y;j++){
                add[i][j]=a[i][j]+b[i][j];
        }
    }


    printf("The addition of the matrices: \n");
    for(int i=0;i<x;i++){
        for(int j=0;j<y;j++){
            printf("%d \t",add[i][j]);
        }
        printf("\n");
    }
return 0;
}