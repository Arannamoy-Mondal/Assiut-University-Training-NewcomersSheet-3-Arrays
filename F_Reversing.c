#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    long long ar[n],i,j;
    for (i =0;i<n; i++)
    {
        /* code */
        scanf("%lld",&ar[i]);
    }
    for (j=n-1;j>=0;j--)
    {
        /* code */
        printf("%lld ",ar[j]);
    }
    
    
    return 0;
}