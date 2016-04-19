#include<iostream>
#include<math.h>
#include<stdio.h>
#include<string.h>
using namespace std;

int main()
{
int t,y,i;
long long int l,r,sum,x,j,jj;

//cin >> t;
scanf("%d",&t);
while(t--)
{
    scanf("%lld",&l);
    scanf("%lld",&r);
//cin >> l;
//cin >>r;
sum =0;
for(jj=l;jj<=r;jj++)
{
char l1[10]="\0",revv[10]="\0";
strcpy(l1,"");
strcpy(revv,"");
i=5;
x = 100000;
//cout <<"x=="<<x;
while( jj/x <= 0)
{
    i--;
    x = x/10;
    //cout <<"x=="<<x;
}
//cout << "x=="<<x;
i++;
//cout << "i=="<<i<<endl;
long long int k;
k = jj;
for(j=i-1;j>=0;j--)
{
    l1[j] = k%10 + '0';
    k = k/10;
}
l1[i]='\0';
//cout << l1<<endl;
strcpy(revv,l1);
strrev(l1);
//strrev(l1);
if( strcmp(revv,l1) == 0)
{

    sum = sum + jj;
}

}
printf("%lld\n",sum);
//cout << sum<<endl;
}
return 0;
}

