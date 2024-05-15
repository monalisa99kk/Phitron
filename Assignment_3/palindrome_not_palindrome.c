#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int is_palindrome(char S) {
    int len=strlen(S);
int i,j;
    for(i=0,j=len-1;i<j;i=i+1,j--) {
        if (S[i]!=S[j]) {
            return 0;
        }
    }
    return 1;
}

int main()
{
char S[1000];
    scanf("%s",&S);
    if (is_palindrome(S)) 
    {
        printf("Palindrome\n");
    } 
    else
    {
        printf("Not Palindrome\n");
    }

    

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
