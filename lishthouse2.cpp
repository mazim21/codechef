#include<utility>
#include<iostream>
#include<set>
using namespace std;


int main()
{
int i,t,n,y,x;

cin >>t;
while(t--)
{
cin >> n;
std::multiset< std::pair< std::pair<long int,long int >,long int> >::iterator it,i2;
std::pair<long int,long int> p,p2;
std::pair< std::pair<long int,long int >,long int>q;
//set nodes;
std::multiset< std::pair< std::pair<long int,long int >,long int> > nodes,ny;
for(i=1;i<=n;i++)
    {
        cin >> x;
        cin >> y;
        p= std::make_pair(x,y);
        q=std::make_pair(p,i);
        it=nodes.insert(q);
        p2=std::make_pair(y,x);
        q = std::make_pair(p2,i);
        i2 = ny.insert(q);
}
int leftmst,rightmst,topmst,botmst;
    it = nodes.begin();
    q = *it;
    leftmst = q.second;
    int xc_lef,yc_lef,xc_rig,yc_rig;
    int xc_top,yc_top,xc_bot,yc_bot;
    p = q.first;
    xc_lef = p.first;  //useful
    yc_lef = p.second;
    for(i=0;i<n-1;i++)
        it++;
    q = *it;
    rightmst = q.second;
    p = q.first;
     xc_rig = p.first;   //useful
    yc_rig = p.second;

    //cout << xc_lef<<" "<<xc_rig;
    i2 = ny.begin();
    q = *i2;
    botmst = q.second;
    p2=q.first;
    yc_bot = p2.first;  //usefl
    xc_bot = p2.second;
    for(i=0;i<n-1;i++)
        i2++;
        q = *i2;
    topmst = q.second;
    p2=q.first;
    yc_top= p2.first;   //useful
    xc_top = p2.second;
    //cout << yc_top<<" "<<yc_bot<<endl;
    if( xc_top == xc_rig)//  topmst == rightmst)
    {
        cout << 1<<"\n"<<topmst <<" SW"<<endl;
        //goto xx;
    }
    else if(  xc_bot==  xc_lef)//   botmst == leftmst)
    {
       cout << 1<<"\n"<<botmst <<" NE"<<endl;
       //goto xx;
    }
    else if(xc_top == xc_lef )
    {
        cout << 1<<"\n"<<topmst<<" SE"<<endl;
    }
    else if(xc_rig == xc_bot )//&& yc_rig == yc_bot)
    {
        cout << 1<<"\n"<<botmst<<" NW"<<endl;

    }
    else if( xc_bot == xc_top && xc_bot == xc_lef && xc_bot == xc_rig)
    {
        cout << 1<<"\n"<<topmst<<" SE"<<endl;
        //goto xx;
    }
    else if ( yc_lef == yc_rig && yc_lef== yc_bot && yc_lef==yc_top)
    {
        cout << 1<<"\n"<<leftmst<<" NE"<<endl;
    }
    else
    {
        int xx,yy;
        xx=xc_top;
        yy=xc_bot;
        if( xx > yy)
        {
            cout <<2<<endl;
            cout <<topmst<<" SW"<<endl;
            cout <<botmst<<" NE"<<endl;
        }
        else
        {
            cout <<2<<endl;
            cout <<topmst<<" SE"<<endl;
            cout <<botmst<<" NW"<<endl;
        }
    }
}
return 0;
}
