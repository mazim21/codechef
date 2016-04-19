#include<bits/stdc++.h>
#include<math.h>
#include<string.h>
#include<algorithm>
#include<string.h>
#define ll long long int
#include<stdio.h>
#define in(a) scanf("%lld",&(a))
#define get(a) scanf("%d",&(a))
#define out(a) printf("%lld\n",(a))
using namespace std;

int pr[10000001];

int ispalin(ll n)
{
    int s;
    if( n <= 9 )
        return 1;
    else if ( n <= 99) s = 2;
    else if ( n <= 999) s = 3;
    else if ( n <= 9999) s = 4;
    else if ( n <= 99999) s = 5;
    else if ( n <= 999999) s = 6;
    else if ( n <= 9999999) s = 7;

    switch( s )
    {
    case 2:
        if( n /10 == n%10 )return 1;
        else
            return 0;
        break;
    case 3:
         if( n/100 == n%10 )return 1;
         else
            return 0;
        break;
    case 4:
        if( n/1000 == n%10 )
        {
           if( (n%1000)/100 == (n%100)/10 )
                return 1;
           else
            return 0;
        }
        else
            return 0;

        break;
    case 5:
        if( n / 10000 == n%10 )
        {
            if( (n % 10000)/1000 == (n%100)/10  )
               return 1;
            else
                return 0;
        }
        else
            return 0;
        break;
    case 6:
        if( n / 100000 == n%10 )
        {
            if( (n % 100000)/10000 == (n%100)/10 )
            {
                if( ( n % 10000 )/1000 == (n%1000)/100 )
                {
                    return 1;
                }
                else return 0;
            }
            else return 0;
        }
        else return 0;

        break;
    case 7:

        if( n / 1000000 == n%10 )
        {
            if(  (n%1000000)/100000 == (n%100)/10 )
            {
                if(  (n%100000)/10000 == (n%1000)/100 )
                {
                    return 1;
                }
                else
                    return 0;
            }
            else return 0;
        }
        else return 0;

        break;
    }
}

void prime()
{
    ll i,j;
    pr[0]=0;
    pr[1]=0;

    for(i=2;i<=10000001;i++)
        pr[i] = 1;

    for(i=2;i<=sqrt(10000001);i++)
    {
        if( pr[i] == 1 )
        {
            for(j=i;i*j<=10000001;j++)
                pr[i*j] = 0;
        }
    }

}

int main()
{

    ll i,j,n;
    prime();
    in(n);
    for(i=n;i<10000001;i++)
    {
        if ( /*ispalin(i)*/ pr[i] == 1 )
        {
            if( /*pr[i] == 1*/ ispalin(i) )
            {
                cout << i<<endl;
                break;
            }
        }
    }

return 0;
}
