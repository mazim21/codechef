#include<iostream>
#include<vector>
#include<set>
#include<string.h>
#include<stdio.h>
using namespace std;
#define ll long long int
#include<map>

int main()
{
    int t;
    multimap <ll,ll> m;
    multimap<ll,ll>::iterator tt;
    ll n,i,b,a;
    int flag;
scanf("%d",&t);
while(t--)
{
    scanf("%lld",&n);
    flag = 1;
    ll arr[n+1];
    for(i=0;i<n;i++)
    {
         scanf("%lld",&a);
         m.insert(std::pair<ll,ll>(a,i));
         arr[i] = a;
    }
    flag = 1;

    i =0;
    for(tt=m.begin(); tt!=m.end();tt++,i++)
    {
        b = tt->first;
        if ( arr[i] == b || arr[i+1] == b || arr[i-1] == b)
            continue;
        else
        {
            flag = 0;
            break;
        }
        //i++;
    }


    if(flag)
        cout << "YES\n";
    else
        cout << "NO\n";

}

return 0;
}
