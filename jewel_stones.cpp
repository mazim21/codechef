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
    ll t,i;
    string j,s;

    in(t);
    while(t--)
    {
        cin >> j;
        cin >> s;

        int arr[1000];
        memset(arr,0,1000);

        for(i=0;i<j.length();i++)
            {
                arr[ j[i] ] = 1;
            }
            ll c = 0 ;
        for(i=0;i<s.length();i++)
        {
            if( arr[ s[i] ] == 1 )
                c++;
        }
        out(c);
    }


return 0;
}
