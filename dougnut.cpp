#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;
#include<algorithm>
/*int compare (const void * a, const void * b)
{
  return ( *(int*)a - *(int*)b );
}
*/
int main()
{
int t,c;
scanf("%d",&t);
long long int n,m,i;
while(t--)
{
    long long int sum=0;
    scanf("%lld %lld",&n,&m);

    //cin >> n;
    //cin >> m;
    long long int arr[m+5],k,count1=0;
    for(i=0;i<m;i++)
     {scanf("%lld",&arr[i]);
     if(arr[i]==1)
        count1++;}
     if(m==n)
     {  printf("%lld\n",m/2);
         //cout << m/2<<endl;
     goto xy;}
        long long int l;
    // l = m-1;
     c=0;
     sum=0;
        l=m-1-(2*count1);
			if(count1>0)
				sum+=count1;
    sort(&arr[0],&arr[m-1]);
     //quicksort(arr,0,m-1);
     //sort
     i=0;
     while(arr[i]==1)
				i++;
     while( arr[i] < l )
     {
         //cout << "in";
         sum = sum + arr[i];
         //cout << "sum == "<<sum<<endl;
         l = l - arr[i]-1;
         i++;
         if (l <= 0)
            break;
     }
     /*if(l<=0)
        printf("%lld\n",sum);
     //cout << sum<<endl;
     else*/
        if(l>0)
        sum = sum +l;
        printf("%lld\n",sum);

     //printf("%lld\n",sum + l);
        //cout << sum + l<<endl;}
xy:
    l=l;
}


return 0;
}
