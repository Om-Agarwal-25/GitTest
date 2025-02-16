// to create a simple calculator using switch case
// +
// -
// *
// /
// exit

#include <stdio.h>
int main (){
    int x,y;
    printf("Enter the two numbers\n");
    scanf("%d",&x);
    scanf("%d",&y);
    calculator (x,y);
}

void calculator(int a,int b) {
    int choice;
    printf("Press 1 for addition\n");
    printf("Press 2 for subtraction\n");
    printf("Press 3 for multiplication\n");
    printf("Press 4 for division\n");
    printf("Press 5 for exiting\n");
    scanf ("%d",&choice);
    switch(choice){
        case 1:
            printf("%d",a+b);
            break;
        case 2:
            printf("%d",a-b);
            break;
        case 3:
            printf("%d",a*b);
            break;
        case 4:
            printf("%d",a/b);
            break;
        case 5:
            break;
        default:
            printf("Invalid Choice");
            break;
    }
}