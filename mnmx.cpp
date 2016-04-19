#include<iostream>
using namespace std;

main()
{
int t;
long long int s,x,n,i;
cin >> t;
while(t--)
{
cin >> n;
s=9000000;
for(i=0;i<n;i++)
{
    cin >> x;
    s=(s>x)?x:s;
}
cout << s*(n-1)<<endl;

}
}
