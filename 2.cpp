#include<iostream>
#include<string.h>
using namespace std;

int main()
{
long long int x,y,n,xi,yi,r,i,x1,y1,x2,y2,x3,y3,x4,y4;
cin >> x>>y;
int flag=1;
cin >> n;
for(i=0;i<n;i++)
{
    cin >> xi;
    cin >> yi>>r;
    x1 =xi - r;
    y1 =yi - r;
    x2 =xi - r;
    y2 =yi+r;
    x3 =xi + r;
    y3 =yi +r;
     x4=xi +r;
     y4=yi - r;

    if (  (y1<= y && y <= y2 ) && (  x1<=x && x<= x4 ) )
        {
            flag = 0;
            break;
        }
}
if(flag==1)
    cout << "ALIVE"<<endl;
else
    cout << "DEAD"<<endl;

return 0;
}
