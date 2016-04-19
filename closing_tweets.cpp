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

//int arr[2000];
char arr[2000];

int main()
{
    ll k,n,i,j,a;
    string s;
    in(n);in(k);

    //int arr[2000];
    //memset(arr,0,2000);
    ll c = 0;
    for(i=0;i<k;i++)
    {
        cin >> s;
        if( s.compare("CLICK") == 0)
        {
            in(a);
            //arr[a] = ( arr[a] == 0 )?1:0;
            arr[a] = !arr[a];
            if( arr[a] )
                c++;
            else
                c--;
        }
        else
        {
            memset(arr,0,n+1);
            c = 0;
        }
        out(c);
    }


return 0;
}
