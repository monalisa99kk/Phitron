#include <stdio.h>
int main() {

    int N;
    scanf("%d",&N);
    for(int i = 1; i <= N; i=i+1) 
    {
        for(int j = 1; j <= N - i; j=j+1) 
        {
            printf(" ");
        }
    
        for (int j = i; j >= 1; j=j-1) 
        {
            printf("%d", j);
        }
        printf("\n");
    }
 
    return 0;
}
