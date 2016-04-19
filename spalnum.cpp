#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int scan() {
    long int val = 0;
    char c = getchar();
    while (c < '0' || c > '9') c = getchar();
    while (c >= '0' && c <= '9') {
        val = (val<<1) + (val<<3) + (c-'0');
        c = getchar();
    }
    return val;
}
int main()
{
int t,y;
int l,r,i,sum;

t=scan();

while(t--)
{
            l=scan();
            r=scan();
            sum = 0;
//fn(l);
for(i=l;i<=r;i++)
{
    int z,su;
    //y = fn(i);
    z = i;

    su =0;
    while( z > 0)
    {
        su = su*10 + (z%10);
        z = z/10;
    }
    if( su == i)
        {sum = sum + i;}
}

printf("%d\n",sum);
}

return 0;
}
