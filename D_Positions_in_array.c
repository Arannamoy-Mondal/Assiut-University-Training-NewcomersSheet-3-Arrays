#include<stdio.h>
int main()
{
    int n,i,j;
    scanf("%d",&n);
    int ar[n];
    for (i = 0; i <n; i++)
    {
        scanf("%d",&ar[i]);
        if(ar[i]<=10)
        {
            printf("A[%d] = %d\n",i,ar[i]);
        }
    }
    // for (j=0;j<n;j++)
    // {
        
    //     if(ar[i]<=10)
    //     {
    //         printf("A[%d]=%d\n",j,i);
    //     }
    // }
    
    
    return 0;
}