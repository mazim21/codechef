#include<bits/stdc++.h>
#include<math.h>
#include<algorithm>
#include<string.h>
#define ll long long int
#include<stdio.h>
#define in(a) scanf("%lld",&(a))
#define get(a) scanf("%d",&(a))
#define For(i,a,b) for( ll (i) = (ll)(a); i <= (ll)(b); (i)++ )
#define out(a) printf("%lld\n",(a))
using namespace std;


int main()
{
    ll i,j,t,n,m;

    in(t);

    while(t--)
    {
        in(n);
        in(m);
        ll arr[n+2];

        for(i=0;i<n;i++)
            in(arr[i]);

        std::sort(&arr[0],&arr[n]);
        ll c = 0,z=0;
        int g = 0;

        if( m == 0 )
            cout << "0"<<endl;
        else
        {

        c = 0;
        z =0;
        for(i=n-1;i>=0;i--)
        {
            c = c + arr[i];
            z++;
            if( c >= m )
                {
                    g = 1;
                    break;
                }
        }
        if(g)
        out(z);
        else
            cout << "-1"<<endl;

        }
    }

return 0;
}
