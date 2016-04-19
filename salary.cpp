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
    ll n,i,a;
    int t;
    get(t);
    while(t--)
    {
        in(n);
        ll a;
        ll sum = 0,min;

        min = 9999999;

        for(i=0;i<n;i++)
        {
            in(a);
            sum = sum + a;
            min = (min > a)?a:min;
        }
        out(sum - n*min);

    }

return 0;
}
