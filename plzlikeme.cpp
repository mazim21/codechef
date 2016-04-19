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
    ll t,i,j,l,d,s,c;

    in(t);
    while(t--)
    {
        in(l);
        in(d);
        in(s);
        in(c);

        for(i=0;i<d-1;i++)
        {
            s = s + s*c;
            if( s >= l )
                break;
        }
        //out(s);
        if( s >= l )
            printf("ALIVE AND KICKING\n");
        else
            printf("DEAD AND ROTTING\n");
    }


return 0;
}
