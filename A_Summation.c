#include<stdio.h>
//#include<stdlib.h>
int main()
{
    int n;
    scanf("%d",&n);
    long long num[n];
    long long sum=0;
    long long b;
    for (int i=0;i<n; i++)
    {
        scanf("%lld",&num[i]);
        sum+=num[i];
    }
    //b=abs(sum);
    if(sum>=0)
      printf("%lld\n",sum);
    else
      printf("%lld",sum*(-1));
    

    return 0;
}
// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
// 	int size;
// 	cin >> size;
// 	long long array[size];
// 	long long sum = 0;
// 	for (int i = 0; i < size; ++i)
// 	{
// 		cin >> array[i];
// 		sum += array[i];
// 	}
// 	cout << abs(sum) << endl;
// }
