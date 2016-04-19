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
    ll i,x,z;
    get(t);
    char s[10009];
    while(t--)
    {
        scanf("%s",s);
        int arr[10000]={0};

        ll c=0,y;

        for(i=0;i<strlen(s)-1;i++)
        {
            x = s[i];
            y = s[i+1];
            z = x*100 + y;
            if( arr[z] == 0 )
            {
                arr[z] = 1;
                c++;
            }
        }
        out(c);



    }

return 0;
}
