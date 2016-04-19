#include<bits/stdc++.h>
#include<math.h>
#include<algorithm>
#include<string.h>
#define ll long long int
#include<stdio.h>
#define sn struct node
#define in(a) scanf("%lld",&(a))
#define get(a) scanf("%d",&(a))
#define For(i,a,b) for( ll (i) = (ll)(a); i <= (ll)(b); (i)++ )
#define out(a) printf("%lld\n",(a))
using namespace std;

inline void fast_read(ll &x)
{
	x=0;
	register char c=getchar_unlocked();
	for(;c>57  || c<48;c=getchar_unlocked());
        for(;c<=57  && c>=48;c=getchar_unlocked())
        {x=(x<<1)+(x<<3)+c-'0';}
}

int main()
{
    ll i,j,t,n;

    fast_read(t);

    while(t--)
    {

        fast_read(n);

        ll arr[n+2],c,tw;
        c = 0;
        tw = 0;
        for(i=0;i<n;i++)
        {
            fast_read(arr[i]);
            if( arr[i] == 1 || arr[i] == 0 )
                c++;
            else if( arr[i] == 2 )
                tw++;
        }

        ll ans,x,y;
        x = n-1;
        ans = (x*(x+1) )/2;

        ans = ans - (tw*(tw-1) )/ 2;
        y = (c*( 2*n - c - 1 ) )/2;
        out(ans - y);
    }

    return 0;
}
