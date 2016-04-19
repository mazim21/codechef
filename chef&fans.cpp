#include<iostream>
using namespace std;

int gcd(int big,int small)
{
    if ( big % small == 0)
        return small;
    gcd(small,big%small);
}

int main()
{
int t,a,b,x,y,big,small,z;

cin >> t;
while(t--)
{
cin >> a;
cin >> b;

x = (a>0)?a:-1*a;
y = (b>0)?b:-1*b;
big = (x>=y)?x:y;
small = (x<y)?x:y;

    if( a<0&&b>0||a>0&&b<0 )
        {

             cout << (x + y)/gcd(big,small)<<endl;
        }
    else
    {
        cout <<  (big - small)/gcd(big,small)<<endl;
    }

}

return 0;
}
