#include<bits/stdc++.h>
#define Max 100010
#define pi acos(-1.0)
#define mem(a,b) memset(a,b,sizeof(a))
#define f_input freopen("input.txt","r",stdin)
using namespace std;
vector<int> v;
int ar[1000002];
int main()
{
    string s;
//    cin>>s;
    while(cin>>s)
    {

        char a, b, c, d;
        //char b;
        //char c;
        //char d;
        int ac,bc,cc,dc;
        ac=0;
        bc=0;
        cc=0;
        dc=0;
        int len=s.length();
        //cout<<len<<endl;
        for(int i=0; i<len; i++)
        {
            if(i%4==0 && s.at(i)!='!' && ac!=1)
            {
                a=s.at(i);
                ac=1;
                //cout<<a<<ac<<endl;
            }
            if(i%4==1 && s.at(i)!='!' && bc!=1)
            {
                b=s.at(i);
                bc=1;
                //cout<<b<<bc<<endl;
            }
            if(i%4==2 && s.at(i)!='!' && cc!=1)
            {
                c=s.at(i);
                cc=1;
                //cout<<c<<cc<<endl;
            }
            if(i%4==3 && s.at(i)!='!' && dc!=1)
            {
                d=s.at(i);
                dc=1;
                //cout<<d<<dc<<endl;
            }
            if(ac==1&& bc==1 && cc==1&& dc==1)
                //cout<<"Y"<<endl;
                break;
        }

        int cntA=0;
        int cntB=0;
        int cntC=0;
        int cntD=0;
        for(int i=0; i<len; i++)
        {
            if(i%4==0 && s.at(i)=='!')
                cntA++;
            if(i%4==1 && s.at(i)=='!')
                cntB++;
            if(i%4==2 && s.at(i)=='!')
                cntC++;
            if(i%4==3 && s.at(i)=='!')
                cntD++;
        }
        if(a=='R')
            cout<<cntA<<" ";
        else if(b=='R')
            cout<<cntB<<" ";
        else if(c=='R')
            cout<<cntC<<" ";
        else
            cout<<cntD<<" ";

        if(a=='B')
            cout<<cntA<<" ";
        else if(b=='B')
            cout<<cntB<<" ";
        else if(c=='B')
            cout<<cntC<<" ";
        else
            cout<<cntD<<" ";

        if(a=='Y')
            cout<<cntA<<" ";
        else if(b=='Y')
            cout<<cntB<<" ";
        else if(c=='Y')
            cout<<cntC<<" ";
        else
            cout<<cntD<<" ";

        if(a=='G')
            cout<<cntA<<endl;
        else if(b=='G')
            cout<<cntB<<endl;
        else if(c=='G')
            cout<<cntC<<endl;
        else
            cout<<cntD<<endl;

    }
    return 0;
}
