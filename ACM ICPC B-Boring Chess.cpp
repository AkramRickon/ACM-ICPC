#include<bits/stdc++.h>
#define valid(nx,ny) nx>=1 && nx<=row && ny>=1 && ny<=col
using namespace std;
int main()
{
    int t,x,y,row=8,col=8,cnt;
    int fx[]={+2,+2,-2,-2,+1,-1,+1,-1};
    int fy[]={+1,-1,+1,-1,+2,+2,-2,-2};
    cin>>t;
    for(int i=1 ;i<=t; i++)
    {
        cnt=0;
        cin>>x>>y;
        int nx,ny;
        for(int k=0 ;k<8 ;k++)
        {
            nx=x+fx[k];
            ny=y+fy[k];
            if(valid(nx,ny))
            {
                cnt++;
            }
        }
        cout<<"Case "<<i<<": "<<cnt<<endl;
    }
}
