#include<bits/stdc++.h>
#include<math.h>
#include<algorithm>
#include<string.h>
#define ll long long int
#include<stdio.h>
#define in(a) scanf("%lld",&(a))
#define get(a) scanf("%d",&(a))
#define For(i,a,b) for( ll (i) = (ll)(a); i < (ll)(b); (i)++ )
#define out(a) printf("%lld\n",(a))
using namespace std;


int main()
{
    ll i,j,t,n;

    in(t);

    while(t--)
    {
        in(n);

        ll arr[n+2],dep[n+2];

        For(i,0,n)
        in(arr[i]);

        For(i,0,n)
        in(dep[i]);

        ll a[1003];
        ll ar,de;

        For(i,0,1002)
        a[i] = 0;
        ll ans=0;
        For(i,0,n)
        {
            ar = arr[i];
            de = dep[i];

            for(j = ar ; j < de ;j++ )
            {
                a[j]++;
                ans = (ans > a[j])?ans:a[j];
            }
        }
        out(ans);

    }

    return 0;
}
