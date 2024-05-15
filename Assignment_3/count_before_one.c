#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
    
    int count_before_one(int n,int a[])
{ 
    int count=0;
    for (int i=0;i<n;i++) 
    {
        if (a[i]==1)
        {
            break;
            }
            
            count++;
            
            } 
            
            return count; 
    
}

int main() 

{ 
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i=0;i<n;i++) 
    { 
        scanf("%d",&a[i]);
     }
        int m = count_before_one(n,a);
        printf("%d\n",m);
        return 0;
        }
