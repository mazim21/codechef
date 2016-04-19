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
    x = (a1 + b1);
    while ( s>=1)
    {
        x = x/2;
        s--;
    }
    //x = x / pow(2,s/2);
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
    if ( k >= i)
    {
        i = (k - i)/2 ;
       // x = a1 + b1;

    x = (a1 + b1)/pow(2,s - (4*i));
    //x = x / pow(2,s);
   printf("%lf\n",x);
    }
    else
    {
        i = i/2 ;
        k = k/2;
        x =  (a1 + b1)*pow(2,4*(k-i)-s);

        /*i = ( i - k)/2;
        //x = (a1 + b1)/pow(16,i);
        //x = a1 + b1;
         x = (a1 + b1);
        if( i > s)
        {
            x = x / pow(32,s);
            x = x / pow(16,i-s);
        }
        else
        {
            x = x / pow(32,i);
            x = x / pow(2,s-i);
        }*/
        printf("%lf\n",x);
    }
}
else if ( i%2 ==0 && k%2 ==0)
{
    if ( k >= i)
    {
        i = (k - i)/2 ;
    x = (a1 + b1)/pow(2, s - (4*i));
    //x = x / pow(2,s);
    printf("%lf\n",x);
    }
    else
    {

        x = a1 + b1;
        k = k/2 -1;
        i = i/2 - 1;
         x = x*pow(2,4*(k-i)-s);
        /*i = ( i - k)/2;
        //x = (a1 + b1)/pow(16,i);
        //x = a1 + b1;
        x = (a1 + b1)/pow(2,s);

        while( i >= 1000)
        {
        x = (double)(x / 16);
        i --;
        }
        x = x / pow(16,i);
         /*while ( i>= 1 )
        {
        	x = (double)(x / 16);
        	i--;
        }*/

        //x = x / pow(2,s);
        printf("%lf\n",x);
    }
}

return 0;
}
