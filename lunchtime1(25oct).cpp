#include<iostream>
#include<map>
#include<stdio.h>
using namespace std;
#define ll long long int

int main()
{
map<char,int>ma;
map<char,int>::iterator p,q,r,s,t1;
string s1;
char c;
ll t,i,j;

scanf("%lld",&t);
while(t--)
{
    cin  >> s1;

    for(i=0;i<s1.length();i++)
        {
            c = s1[i];
            ma[c]++;
        }

    p = ma.find('L');
    q = ma.find('T');
    r = ma.find('I');
    s = ma.find('M');
    t1 = ma.find('E');

    /*for(t1=ma.begin();t1!=ma.end();t1++)
        cout << t1->first<<t1->second<<endl;*/
    if( s1.length() <= 9 )
    {if( p->second >= 2 && q->second >= 2 && r->second >= 2 && s->second >=2 && t1->second >= 1 )
        cout << "YES\n";
    else
        cout << "NO\n";

    }
    else
    {
        if( p->second >= 2 && q->second >= 2 && r->second >= 2 && s->second >=2 && t1->second >= 2 )
        cout << "YES\n";
    else
        cout << "NO\n";
    }
    ma.clear();
}

return 0;
}
