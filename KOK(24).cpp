#include<iostream>
#include<map>
#include<stdio.h>
using namespace std;
#define ll long long int

int main()
{
map<char,int>ma;
multimap<int,char>ma2;
map<char,int>::iterator t1;
multimap<int,char>::iterator x,w,z;
string s;
char c;
ll t,m,i;
scanf("%lld",&t);
while(t--)
{
    cin  >> s;

    for(i=0;i<s.length();i++)
        {
            c = s[i];
            ma[c]++;
        }
        int xx = -1;
    for(t1=ma.begin();t1!=ma.end();t1++)
    {
        xx = (xx > t1->second)?xx:t1->second;
        ma2.insert(std::pair<char,int>( t1->second , t1->first ));
    }
    ll count =0,y,kk,val;

         /*for(x=ma2.begin();x!=ma2.end();x++)
            cout << x->first<<" "<<x->second<<endl;
            cout <<"\n";*/
      for(x=ma2.begin();x!=ma2.end();x++)
    {
        //cout<<"x->first=="<<x->second;
        if( x->first == xx  )
            break;
        kk = x->first;
        y = xx - kk;
        w = ma2.find(y);
        if ( w != ma2.end() )
        {
            val = w->first;
            z = ma2.upper_bound(val);
            z--;
            //cout << "here";
            count++;
         //   cout << z->second;
            z->second = c;
            ma2.erase(z);

            ma2.insert(std::pair<int,char>(xx,c));
        }
        else
        {
            //cout <<"not";
            while( y!= 0 )
            {
                 w=ma2.end();
                w--;
                while( w->first == xx)
                w--;
                kk = kk + w->first;
                y = y - w->first;
                c = w->second;
                ma2.erase(w);
                ma2.insert(std::pair<int,char>(xx,c));
                count++;
            }
        }

    }

    cout << count<<endl;
    ma.clear();
    ma2.clear();
}

return 0;
}
