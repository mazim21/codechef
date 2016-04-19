#include<iostream>
#include<math.h>
#include<stdio.h>
using namespace std;

int main()
{
long long int i,k,s;
//unsigned long int s;
double a1,b1,a,b;
double x;
cin >> i;
cin >> k;
cin >> s;

cin >> a1;
cin >> b1;
if ( k == i )
{
    x = (a1 + b1) / pow(2,s);
    printf("%lf\n",x);
    //cout << x <<endl;
    return 0;
}

if ((i%2!=0 && k%2 ==0) || (i%2 == 0 && k%2 !=0) )
{
    a = (sqrt(2)*(a1 + b1)) - (  sqrt(6)*( a1 - b1)  );
    b = (sqrt(2)*( a1 - b1)) + ( sqrt(6)* (a1 + b1)  );
    a1 = a;
    b1 = b;
    i = i + 1;
}
if( i%2!=0 && k%2!= 0)
{
    if ( k > i)
    {
        i = (k - i)/2 ;
    x = pow(16,i)* (a1 + b1)/ pow(2,s);
    //x = x / pow(2,s);
   printf("%lf\n",x);
    }
    else
    {
        i = ( i - k)/2;
        x = (a1 + b1)/pow(16,i);
        x = x / pow(2,s);
        printf("%lf\n",x);
    }
}
else if ( i%2 ==0 && k%2 ==0)
{
    if ( k > i)
    {
        i = (k - i)/2 ;
    x = pow(16,i)* (a1 + b1)/ pow(2,s);
    //x = x / pow(2,s);
    printf("%lf\n",x);
    }
    else
    {
        i = ( i - k)/2;
        x = (a1 + b1)/pow(16,i);
        x = x / pow(2,s);
        printf("%lf\n",x);
    }
}

return 0;
}
