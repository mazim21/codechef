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
double p,sum=0,x=1000000000.000,sumz;
 cin >> m;
 cin >> p;
/*if(m==1)
{
    printf("%.3lf %.3lf\n",1000000000.0,0.0);
    goto xy;
} */                                       //if m is odd then chef
tt=m-1;
sum = pow(p,tt) * x;
//ty=m-2;
//sumz = p *x;
/*if( m%2 != 0)
{
    if (sumy > sum)
    {printf("%.4lf %.4lf\n",sumy,sum);}
    else
    {
       printf("%.4lf %.4lf\n",sum,sumy);
    }
}
else
{
    if (sum > sumy)
    {printf("%.3lf %.3lf\n",sumy,sum);}
    else
    {
       printf("%.3lf %.3lf\n",sum,sumy);
    }
     //printf("%.3lf %.3lf\n",sumy,sum);

}*/
if( m%2 != 0)
{
        printf("%.3lf %.3lf\n",sum,x-sum);
}
else
{
        printf("%.3lf %.3lf\n",x-sum,sum);
}
   //printf("%.4lf %.4lf\n",sumy,sum);
//cout << x - sum <<" "<<sum<<endl;
xy:
    m=m;
}
return 0;
}
