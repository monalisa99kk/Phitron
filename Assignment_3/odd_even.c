#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
void odd_even() 
{
    int n;
    scanf("%d",&n);
    int a[n];
    int even_count=0;
    int odd_count=0;
    for (int i = 0;i<n;i=i+1) 
    {
        scanf("%d",&a[i]);
        if (a[i]%2==0)
        {
            even_count++;
        }
        else
        {
            odd_count++;
        }
    }
    printf("%d %d\n",even_count,odd_count);
}

         int main()
         {
         odd_even();
   



    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
