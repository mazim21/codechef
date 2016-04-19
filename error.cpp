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
    ll t,n;
    string s;
    in(t);
    while(t--)
    {
        int flag;
        flag = 0;
        cin >> s;
        std::size_t found = s.find("010");
        if (found!=std::string::npos)
            {
                flag = 1;
                goto xy;
            }
         found = s.find("101");
             if (found!=std::string::npos)
             {
                 flag = 1;
             }
             xy:
            if(flag)
                cout <<"Good\n";
            else
                cout <<"Bad\n";

    }

return 0;
}
