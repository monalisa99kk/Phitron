#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
     int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        char S[n];
        scanf("%s",&S);
        
        int t_w = 0;
        int p_w = 0;
        for(int i = 0; i<n; i++) 
        {
            if(S[i] == 'T')
            {
                t_w++;
            }
            else if(S[i] == 'P') 
            {
                p_w++;
            }
        }
        if(t_w>p_w)
        {
            printf("Tiger\n");
        }
      else if(p_w >t_w) 
      {
            printf("Pathaan\n");
      }
        else 
        {
            printf("Draw");
        
        }   
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
