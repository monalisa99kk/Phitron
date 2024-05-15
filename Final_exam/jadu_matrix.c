#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main() {
    int n,m;
    scanf("%d %d",&n,&m);
   int matrix[n][m];
    for(int i=0;i<n;i=i+1)
    {
     for(int j=0;j<m;j=j+1)
     {
       scanf("%d",&matrix[i][j]);
     }
    }
    if(n != m)
    {
     printf("NO\n");
    }
     int flag = 0;
    for(int i = 0; i<n;i=i+1)
    {
     for(int j = 0;j<m;j=j+1)
     {
     if(i==j || i+j == n-1)
     {
     if(matrix[i][j]!=1)
     {
       flag = 1;
       break;
     }
     }
    else
    {
    if(matrix[i][j]!=0)
    {
    flag = 1;
     break;
    }
    }
     }
    if(flag == 1)
    {
     break;
    }
    }

    if(flag==1)
    {
        printf("NO\n");
    }
    else
    {
        printf("YES");
    }
 /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
