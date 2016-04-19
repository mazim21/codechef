#include<bits/stdc++.h>
#include<math.h>
#include<algorithm>
#include<string.h>
#define ll long long int
#include<stdio.h>
#define in(a) scanf("%lld",&(a))
#define out(a) printf("%lld\n",(a))
using namespace std;

int main()
{
    ll t,m,n,i,j,x;
    ll l,s;
    in(t);

    while(t--)
    {
        in(n);
        in(m);

        l = 0;
        s = 10000000;

        for( i = 0 ; i < m ;i++ )
        {
            in(x);
            if( m != 1 )
            {
                l = ( l > x )?l:x;
                s = ( s < x )?s:x;
            }
        }
        ll z,w;
        for( i = 0 ; i <n ;i++ )
        {
            if( m == 1 )
            {
                cout << abs( i - x )<<" ";
            }
            else
            {
                z = abs( i - s );
                w = abs( i - l );
                (z > w)?cout << z<<" ":cout << w<<" ";
            }

        }
        cout << "\n";
    }

    return 0;
}
