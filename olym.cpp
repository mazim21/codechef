#include<iostream>
#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;
# define ll long long int

int main()
{

std::map<ll,ll>m;
std::map<ll,ll>::iterator t;
ll n,i,a;
scanf("%lld",&n);

for(i=0;i<n;i++)
{
    scanf("%lld",&a);
    m[a]++;
}
ll ma=0,p=0;
for(t=m.begin();t!=m.end();t++)
{
    p = n*t->first;
       //cout << p<<" ";
       if( t-> second > 1)
        n = n - t->second;
       else
        n--;
    ma = ( ma > p)?ma:p;
}

cout << ma<<endl;

return 0;
}
