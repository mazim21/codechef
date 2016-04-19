#include<bits/stdc++.h>
#include<math.h>
#include<algorithm>
#include<string.h>
#define ll long long int
#include<stdio.h>
using namespace std;


int main()
{

ll a,b;
scanf("%lld",&a);
scanf("%lld",&b);

if( (a-b)%10 == 0 )
printf("%lld\n",a-b+1);

else if ( (a-b)%10 == 9  )
printf("%lld\n",a-b-1);

else
   printf("%lld\n",a-b+1);


return 0;
}
