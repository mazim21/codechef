#include<iostream>
using namespace std;

int main()
{
int t,i,j,k,n;
cin >> t;
while(t--)
{
    cin >> n;
    int arr[n+5][n+5];
    int b[(n*n)+5];
    for(i=0;i<(n*n)+1;i++)
    	b[i]=0;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            cin >> k;
            arr[i][j]=k;
            b[k]=i*10+j;
        }
    }
    /*for(i=0;i<n*n + 1;i++)
        cout << b[i]<<" ";
        cout << "\n";*/
    //int z,zz;
    z = b[i]/10 + b[i]%10;
    int c=0,x,y,p,q,xx,yy;
    for(i=1;i<(n*n);i++)
    {
    	x=b[i]/10;
    	y=b[i]%10;
    	p=b[i+1]/10;
    	q=b[i+1]%10;
    	xx =(p>x)?p-x:x-p;
    	yy=(q>y)?q-y:y-q;
    	//cout << xx<<" " << yy<<endl;
    	c = yy + xx +c;

    }
    cout << c << endl;

}

return 0;
}
