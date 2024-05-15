#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--) 
    {
        long long M;
        int A, B ,C;
        scanf("%lld %d %d %d",&M,&A,&B,&C);
       long long p = A*B*C;
    if(p==0)
    {
            printf("%d\n",(M == 0) ? 0: -1);
    }
        else
        {
            if (M % p ==0) 
            {
                printf("%lld\n",M/p);
            }
            else
            {
                printf("-1\n");
            }
        }
    }
    
    
    

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
