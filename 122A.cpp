#include<bits/stdc++.h>
#define Max 100010
#define pi acos(-1.0)
#define mem(a,b) memset(a,b,sizeof(a))
using namespace std;
int main()
{
    int n, i, cnt;
    //string s;
    cin>>n;
    cnt=0;
    if(n%4==0 || n%7==0 || n%47==0)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        while(n!=0)
        {
            int ac = n%10;

            if(ac==4 || ac == 7)
            {
                cnt++;
            }
            else
            {
                cout<<"NO"<<endl;
                cnt=0;
                break;
            }
            n/=10;
        }
        if(cnt!=0)
        {
            cout<<"YES"<<endl;
        }
    }


}

