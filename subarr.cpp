#include<iostream>
using namespace std;

int main()
{
int t;
long int n,i;
cin >> t;
while(t--)
{

    cin >> n;
    long int arr[n+3],count,t,cn=0,k;
    count = 1;
    for(i=0;i<n;i++)
    {
        cin >> arr[i];
    }

     t = arr[0];
     cn=1;
     count = 0;
     arr[n]=-1;
    for(i=0;i<n;i++)
    {

        if ( arr[i+1] < t )
        {
            count = count + (cn*(cn+1) )/ 2;
            cn = 1;
            t = arr[i+1];
        }
        else
        {
            t = arr[i+1];
            cn++;
        }

    }
    //cout << cn<<endl;
    if(n==1)
        cout << 1<<endl;
    else
    {
        cout << count <<endl;
    }


}


return 0;
}
