#include<stdio.h>
#include<limits.h>
int main()
{
    int n;
    scanf("%d",&n);
    int ar[n];
    int i,j,min=INT_MAX,m;
    for (i=0;i<n;i++)
    {
      scanf("%d",&ar[i]);
    }
    for(j=0;j<n;j++)
    {
        if(ar[j]<min)
        {
            min=ar[j];
            m=j;
            
        }
        
    }
   printf("%d %d",min,m+1);
    

    
    return 0;
}