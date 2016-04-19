#include<iostream>
#include<string.h>
using namespace std;

long long int state[10006],count = 0;
long long int arr[10006][10006],countx[10005];

void fn(long long z, long long int n)
{
long long int w,ww,j;
state[z] = 1 - state[z];
   for(j=0;j<n;j++)
        {

            if( arr[z][j] == 1)
            {
                //if(state[z] == 0 )
                  //  count++;
                //state[j] = 1 - state[j];
                fn(j,n);
            }
        }
        //countx[z] = count;
}

void fns(long long int aa,long long int n)
{
    long long i,j;
    for(j=0;j<n;j++)
    {
        if (arr[aa][j] == 1)
        {
            if(state[j] == 1)
                count ++ ;
            fns(j,n);
        }
    }
    //cout << count<<endl;
}

int main()
{

long long int q,i,k,j,x,y,n;
count = 0;
cin >> n;
cin >> q;

for(i=0;i<n;i++)
{
    for(j=0;j<n;j++)
        {arr[i][j]=0;}
        state[i]=0;
        countx[i]=0;
}

for(i=0;i<n-1;i++)
{
    cin >> x;
    cin >> y;
    arr[x-1][y-1]=1;
}
for(i=0;i<q;i++)
{
    cin >> x;
    cin >> y;
    if(x == 0)
    {
       long long int ii = y-1;
        //if( state[i] == 0)
          //  state[i] = 1 - state[i];
        fn(ii,n);
        /*for(int kk=0;kk<n;kk++)
        {
            cout << state[kk]<<" ";
        }*/
        //cout << "\n";
    }
    else
    {
        count = 0;
        fns(y-1,n);
        cout << count<<endl;
    }
}

return 0;
}
