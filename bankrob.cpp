#include<math.h>
#include<iostream>
#include<stdio.h>
using namespace std;

int main()
{
int t;
cin >> t;
while(t--)
{
long int m,i,tt,ty;
double p,sum=0,x=1000000000.0000,chef,other,sumz=0;
int flag=1;
 cin >> m;
 cin >> p;
tt=m-1;
chef=0;
other=0;
sum = pow(p,tt) * x;
if(m %2 == 0)
{
    other = sum;
    chef=0;
tt--;
flag=1;
while(tt!=-1)
{
    if(flag)
    {sumz=pow(p,tt)*x;
    chef = sumz - other;
    flag=0;}
    else
    {
        sumz = pow(p,tt)*x;
        other = sumz - chef;
        flag=1;
    }
    tt--;
}
printf("%.3lf %.3lf\n",chef,other);
//cout << chef<<" "<<other<<endl;
}
    else
    {
        chef = sum;
        other=0;
    tt--;
    flag=1;
    while(tt!=-1)
    {
        if(flag)
        {
            sumz=pow(p,tt)*x;
            other = sumz - chef;
            flag=0;

        }
        else
        {
        sumz=pow(p,tt)*x;
        chef = sumz - other;
        flag=1;
        }
        tt--;
    }
    printf("%.3lf %.3lf\n",chef,other);
    }

}
return 0;
}

