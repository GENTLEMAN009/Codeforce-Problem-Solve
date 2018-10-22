#include<bits/stdc++.h>
#define Max 100010
#define pi acos(-1.0)
#define mem(a,b) memset(a,b,sizeof(a))
#define f_input freopen("input.txt","r",stdin)
using namespace std;
int main()
{
    unsigned long long int n, sq;

    while(cin>>n)
    {

        if(n==0)
        {
            cout<<"1"<<endl;
        }

        else if(n%4==1)
        {
            cout<<"8"<<endl;
        }

        else if(n%4==2)
        {
            cout<<"4"<<endl;
        }

        else if(n%4==3)
        {
            cout<<"2"<<endl;
        }

        else
        {
            cout<<"6"<<endl;
        }


    }
}
