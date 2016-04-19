#include<iostream>
#include<set>
#include<map>
#include<string.h>
#include<stdio.h>
using namespace std;


int main()

{
    int t,n,i,a;
    cin >> t;
    while(t--)
    {
        std::multimap <int,int> m;
        std::map<int,int>::iterator it;
        cin >> n;
        int count;
        count=0;

        for(i=0;i<n;i++)
        {
            cin >> a;
            it = m.upper_bound(a);
            if( it == m.end())
            {
                count++;
                m.insert(std::pair<int,int>(a,a));
            }
            else
            {
                m.erase(it);
                m.insert(std::pair<int,int>(a,a));

            }
        }
        cout << count<<" ";
        for(it=m.begin();it!=m.end();it++)
            cout << it->first<<" ";
        m.clear();
cout <<"\n";
    }


return 0;
}
