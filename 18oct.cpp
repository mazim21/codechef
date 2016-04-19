#include<iostream>
#include<vector>
#include<set>
#include<string.h>
#include<stdio.h>
using namespace std;
# define ll long long int;

int main()
{
ll t,n;

cin >> t;
while(t--)
{
    cin >> n;
    string arr[n+2];
    for(i=0;i<n;i++)
    {
        cin >> arr[i];
    }
    ll count= 0;
    for(i=0;i<n;i++)
    {
        for(j=1;j<n && j!= i;j++)
        {
            if (   (arr[i].length() % 2 )== (arr[j].length() % 2 )  )
            {

            }
        }
    }

}

return 0;
}
