#include<iostream>
#include<set>
#include<string.h>
#include<stdio.h>
using namespace std;


int main()

{
int i,j,t,n,a;
cin >>t;
while(t--)
{
    cin >> n;
    int arr[n+5];
    int b[n+5];
    int count =0;
    for(i=0;i<n;i++)
        {cin >> arr[i];
        b[i]=0;
        }
        count =0;
        count++;
        b[0]=arr[0];
        i=1;
        while(arr[i-1] < arr[i])
        {
        	//cout << "i=="<<i;
            b[i]=arr[i];
            i++;
            count++;
        }


    for(i=i;i<n;i++)
    {
        a = arr[i];
int h=0;
        for(j=0;j<count;j++)
        {
            h=0;
            if(b[j] > a)
            {
                b[j]=a;
                h=1;
                break;
            }

        }
        if(h==0)
            {
                b[j]=a;
                count++;
            }
    }
cout << count<<" ";
for(i=0;i<count;i++)
    cout << b[i]<<" ";
    cout << "\n";

}

return 0;
}
