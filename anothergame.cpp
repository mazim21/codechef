#include<iostream>
using namespace std;

int main()
{
int t;
cin >> t;
long long int n;
while(t--)
{
cin >> n;
if(n%2==0)
    cout << "ALICE"<<endl;
else
    cout <<"BOB"<<endl;

}
return 0;
}
