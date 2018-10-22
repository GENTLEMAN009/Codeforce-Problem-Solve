#include<bits/stdc++.h>
#define Max 100010
#define pi acos(-1.0)
#define mem(a,b) memset(a,b,sizeof(a))
using namespace std;
int main()
{
    long long int n,i,j,k,a,b,c, m;

    while(cin>>n>>a>>b>>c)
    {
        if(n%4==0)
        {
            cout<<"0"<<endl;
        }
        else
        {
            k = 4 - (n%4);
            if(k==1)
            {
                if(a<9*c)
                {
                    if(a<b+c)
                    {
                        cout<<a<<endl;
                    }
                    else
                    {
                        cout<<b+c<<endl;
                    }
                }
                else
                {
                    if(b+c<9*c)
                    {
                        cout<<b+c<<endl;
                    }
                    else
                    {
                        cout<<9*c<<endl;
                    }
                }
            }
            else if(k==2)
            {
                if(a*2<b)
                {
                    if(a*2<c*2)
                    {
                        cout<<a*2<<endl;
                    }
                else
                    {
                        cout<<c*2<<endl;
                    }
                }
                else
                {
                    if(b<2*c)
                    {
                        cout<<b<<endl;
                    }
                    else
                    {
                        cout<<2*c<<endl;
                    }
                }
            }
            else
            {
                if(3*a<c &&c>=a+b)
                {
                    if(a*3<=a+b)
                    {
                        cout<<3*a<<endl;
                    }
                    else
                    {
                        cout<<a+b<<endl;
                    }
                }
                else if(a*3<c && a+b>c)
                {
                    cout<<a*3<<endl;
                }
                else if(a+b<c && 3*a>c)
                {
                    cout<<a+b<<endl;
                }
                else
                {
                    cout<<c<<endl;
                }
            }
        }
    }
    return 0;
}
