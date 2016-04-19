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
long int m,i,tt,ty,xx;
double p,sum=0,x=1000000000.0000,chef,other,sumz=0,r,sumy;
 cin >> m;
 cin >> p;
 tt=m-1;

 sum = p;
r = -1*p;
//sumz = -1*sum;
sumy = sum * (1 - pow(r,tt));
sumy = sumy / (1-r);
sumy = x*sumy;
printf("%.3lf %.3lf\n",x-sumy,sumy);

}
return 0;
}
