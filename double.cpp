#include<iostream>
using namespace std;

int main()
{

long int n;
int t;
cin >> t;
while(t--)
{
cin >> n;
if ( n%2 == 0)
    cout << n << endl;
else
    cout << n-1<<endl;

}
}
