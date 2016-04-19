#include<utility>
#include<iostream>
using namespace std;

std::pair<long int,long int> *p;
int main()
{
int i,t,n;

cin >>t;
while(t--)
{
    cin >> n;
    p = new std::pair<long int,long int> [n+1];

    long int min=0,m[5],x,y;
    for(i=1;i<=n;i++)
    {
        cin >> x;
        cin >> y;
        p[i]= std::make_pair(x,y);
    if(i==1)
        min = x;
    else
        min=(min < x)?min:x;
    }
    short int l=1;
    long int miny,maxy,minx,maxx;
    for(i=1;i<=n;i++)
    {
        if(p[i].first == min)
        {
            if(l)
            {
                miny = maxy = p[i].second;
                l=0;
                minx=maxx=i;
            }
            else
            {
                miny=(miny < p[i].second)?miny:p[i].second;
                if(miny == p[i].second)
                    minx=i;
                maxy=(maxy > p[i].second)?maxy:p[i].second;
                if(maxy == p[i].second)
                    maxx=i;
            }
        }

    }
    int cu=0,cd=0;
    if(miny == maxy)
    {
            //cout <<maxx<<minx;
            for(i=1;i<=n;i++)
            {
                    if(p[i].second >= miny)
                        cu++;
                    if(p[i].second <= miny)
                        cd++;
            }
            if( cu == n || cd == n)
            {
                if(cu > cd)
                cout << 1<<"\n"<<minx<<" NE"<<endl;
                else
                    cout << 1<<"\n"<<maxx << " SE"<<endl;
            }
            else if( cu > cd)
            {

            }
            else if ()
    }
    else
    {   int countb=0,countu=0;;
        for(i=1;i<=n;i++)
        {
            if(p[i].second <= maxy)
                countb++;
            if(p[i].second >= miny)
                countu++;
        }
        if( countu == n  )
        {
            cout <<1<<endl;
            cout << minx<<" NE"<<endl;
        }
        else if( countb == n)
        {
            cout <<1<<endl;
            cout << maxx<<" SE"<<endl;
        }
        else{
        cout << 2<<endl;
        cout << minx<<" NE"<<endl;
        cout <<maxx<<" SE"<<endl;
    }
    }
}
return 0;
}
