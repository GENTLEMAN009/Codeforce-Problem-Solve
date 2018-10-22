/******************** NILOY ****************/
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
    int n, a[Max], i, cnt, j;

    while(cin>>n)
    {
        cnt=0;
        for(i=0; i<n; i++)
        {
            cin>>a[i];
        }
        sort(a,a+n);

        for(i=0; i<n-1; i++)
        {
            if(a[i] < (a[i+1]+a[i+2]))
            {
                cout<<a[i]<<a[i+1]<<a[i+2];
                cout<<"YES"<<endl;
                break;
            }
            else
            {
                cnt=1;
            }
        }
        if(cnt==1)
        {
            cout<<"NO"<<endl;
        }
    }
}
