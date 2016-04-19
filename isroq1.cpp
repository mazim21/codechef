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

ll fac[20];

void init()
{
    ll i;
    fac[0] = 1;
    for(i=1;i<=11;i++)
        fac[i] = fac[i-1]*i;
}

int main()
{
    ll t,i,j;
    init();
    in(t);

    while(t--)
    {
        string s;
        cin >> s;
        j = 0;
        for(i=0;i<s.length();i++)
        {
            if( s[i] == '0' || s[i] == '1' ||s[i] == '2'|| s[i] == '3' || s[i] == '4' || s[i] == '5' || s[i] == '6' ||  s[i] == '7' || s[i] == '8' ||s[i] == '9' )
            continue;
            else
            {
                j++;
            }
        }

        out(fac[j]);
    }


return 0;

}
