#include <stdio.h>

void Binary(int x) {
    int binary[32];
    int i = 0;
    
    if (x == 0) {
        printf("0");
        return;
    }
    
    while (x > 0) {
        binary[i] = x % 2;
        x /= 2;
        i++;
    }
    
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binary[j]);
    }
}

int main() {
    int n;
    
    printf("Enter a decimal number: ");
    scanf("%d", &n);
    
    printf("Binary number is : ");
    Binary(n);
    
    return 0;
}