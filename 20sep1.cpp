#include<iostream>
#include<set>
#include<string.h>
#include<stdio.h>
using namespace std;


int main()

{
    int t;
    cin >> t;
    int i,j,n,k,l;
    while(t--)
    {
        cin >> n;
        cin >> k;
        string arr[n+2];
        int st[n+2];
        for(i=0;i<n;i++)
            {cin >> arr[i];
            st[i]=0;}

int l,ch=1,ll;
        for(i=0;i<k;i++)
        {
            cin >> l;
            string b;
            for(j=0;j<l;j++)
                {
                    cin >> b;
                ch =1;
                for(ll=0;ll<n;ll++)
                {
                    if(b.compare(arr[ll]) == 0)
                    {
                        st[ll]=1;
                    }
                }

                }
        }
for(i=0;i<n;i++)
{
    if(st[i] == 1)
        cout << "YES ";
    else
        cout << "NO ";
}
cout << "\n";

    }

return 0;
}
