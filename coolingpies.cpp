#include<bits/stdc++.h>
#include<math.h>
#include<algorithm>
#include<string.h>
#define ll long long int
#include<stdio.h>
using namespace std;


int main()
{
ll t,i,n;
scanf("%lld",&t);

while(t--)
{
    scanf("%lld",&n);

    ll arr[n+1],brr[n+1];

    for(i=0;i<n;i++)
        scanf("%lld",&arr[i]);

     for(i=0;i<n;i++)
        scanf("%lld",&brr[i]);
    sort(arr,arr+n);
    sort(brr,brr+n);

    ll c=0,j;
    i=0;
    for(j=0;j<n;j++)
    {
        if( brr[j] >= arr[i] )
            {
                c++;
                i++;
            }
    }
    printf("%lld\n",c);
}

return 0;
}
