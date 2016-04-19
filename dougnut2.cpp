#include<iostream>
using namespace std;
#include<algorithm>
/*int divide(int *a,int l,int u);
void quicksort(int *a,int lower,int upper)
{
    int i;
    if(upper >= lower)
    {
       i=divide(a,lower,upper);
       quicksort(a,lower,i-1);
       quicksort(a,i+1,upper);

    }
}


int divide(int *a,int l,int u)
{
    int p,q,t,i;
    p=l+1;
    q=u;
    t=*(a+l);

    while(q>=p)
    {
        while(*(a+p)<= t )
        p++;

        while(*(a+q)> t )
        q--;

        if(q>=p)
        {
           i=*(a+p);
           *(a+p)=*(a+q);
           *(a+q)=i;
        }
    }
    i=*(a+l);
    *(a+l)=*(a+q);
    *(a+q)=i;

    return q;
}
*/
int compare (const void * a, const void * b)
{
  return ( *(int*)a - *(int*)b );
}

int main()
{
int t,c;
cin >> t;
long long int n,m,i;
while(t--)
{
    int sum=0;
    cin >> n;
    cin >> m;
    int arr[m+5],k;
    for(i=0;i<m;i++)
     cin >> arr[i];
     int t,j,sum2=0;
     if(m==n)
     {cout << m/2<<endl;
     goto xy;}
        int l;
     l = m-1;
     c=0;
     sum=0;
        k=0;
     for(i=0;i<m-1;i++)
{
for(j=0;j<m-1-i;j++)
{
if(arr[j]>arr[j+1])
{
t=arr[j];
arr[j]=arr[j+1];
arr[j+1]=t;
}

}
sum2 = sum2 + arr[k++];
if(sum2 > m-1 )
    goto xx;
}
    xx:
    //sort(arr,arr+m);
     //quicksort(arr,0,m-1);
     //sort
     i=0;
     while( arr[i] <= l )
     {
         //cout << "in";
         sum = sum + arr[i];
         //cout << "sum == "<<sum<<endl;
         l = l - arr[i]-1;
         i++;
         if (l <= 0)
            break;
     }
     if(l<=0)
     cout << sum<<endl;
     else
        cout << sum + l<<endl;
xy:
    l=l;
}


return 0;
}
