#include<stdio.h>
int main()
{
    long long n,num,count=0,count1;
    scanf("%lld",&n);
    long long ar[n];
    for (long long i=0;i<n; i++)
    {
        scanf("%lld",&ar[i]);
    }
    scanf("%lld",&num);
    for (long long j=0;j<n;j++)
    {
        if(num==ar[j])
        {
          count1=j;
          count++;
          break;
        }
    }
    if(count>=1)
      printf("%lld",count1);
    else
      printf("-1");
    
    
    return 0;
} 