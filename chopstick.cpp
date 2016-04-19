#include<bits/stdc++.h>
#include<math.h>
#include<algorithm>
#include<string.h>
#define ll long long int
#include<stdio.h>
#define in(a) scanf("%lld",&(a))
#define get(a) scanf("%d",&(a))
#define out(a) printf("%lld\n",(a))
using namespace std;


int main()
{
    ll n,d,i,j,t;
    t = 0;
    in(n);
    in(d);
    ll arr[n+2];
    for(i=0;i<n;i++)
        in(arr[i]);

    std::sort(&arr[0],&arr[n]);

   // for(i=0;i<n;i++)
     //cout << arr[i]<<" ";

    for(i=0;i<n-1;i++)
    {
        if( arr[i+1] - arr[i] <= d && (i+1 < n) )
        {
            t++;
            i++;
        }
    }
    out(t);
return 0;

}
