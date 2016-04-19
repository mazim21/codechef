#include<bits/stdc++.h>
#include<math.h>
#include<algorithm>
#include<string.h>
#define ll long long int
#include<stdio.h>
#define in(a) scanf("%lld",&(a))
#define get(a) scanf("%d",&(a))
#define For(i,a,b) for( ll i = (ll)(a); i <= (ll)(b); i++ )
#define out(a) printf("%lld\n",(a))
using namespace std;


int main()
{
    ll i,t,j,k,n;

    in(t);

    while(t--)
    {
        in(n);
        in(k);
        ll c = 0,x,m=0;
        int f = 0;
        for(i=0;i<n;i++)
        {
            in(x);
            if( x %2 == 0)
                c++;
            else
                f = 1;

        }
        if( k == 0 && f == 1)
              printf("YES\n");
        else if( k == 0 && f == 0 )
             printf("NO\n");
        else if( c < k )
             printf("NO\n");
        else
            printf("YES\n");

    }



return 0;
}
