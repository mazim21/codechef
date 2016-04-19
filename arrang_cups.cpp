#include<bits/stdc++.h>
#include<math.h>
#include<string.h>
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
    int t;
    ll i,j,n,x;
    get(t);

    while(t--)
    {
        in(n);

        ll dif;
        dif = n-1;


        for(i=2;i<=sqrt(n);i++)
        {
            if( n % i == 0 )
            {
                j = n/i;
                if( j > i )
                    x = j - i;
                else
                    x = i - j;
                dif = (dif > x)?x:dif;
            }
        }
        out(dif);

    }


return 0;
}
