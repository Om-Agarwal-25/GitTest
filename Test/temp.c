#include <stdio.h>
#include <string.h>

char check (char str[]) {
    char ans;
    int maxcount=0;
    int length = strlen(str);
    for (int i = 0; str[i] != '\0'; i++)
    {
        int count=0;
        for (int j = 0; str[j] != '\0'; j++)
        {
            if (str[i] == str[j])
            {
                count++;
            }
            if (count>maxcount){
                maxcount = count;
                ans=str[i];
            }
        }
        
    }
    return ans;
    
}

void main () {
    char str[50];
    printf ("input string");
    gets(str);
    // fgets(str, sizeof(str), stdin);
    // str[strcspn(str, "\n")] = '\0';
    printf ("%c ",check(str));
}