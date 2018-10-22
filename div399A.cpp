/******************** NILOY ****************/
#include<bits/stdc++.h>
#define lld long long int
#define Max 100010
#define pi acos(-1.0)
#define mem(a,b) memset(a,b,sizeof(a))
#define f_input freopen("input.txt","r",stdin)
using namespace std;
vector<int> v;
long long int a[10000002];
int main()
{
    lld n, i, cnt, x, boro;

    while(cin>>n)
    {
        cnt=0;
        for(i=0; i<n; i++)
        {
            cin>>a[i];
        }
        boro = a[0];
        //cout<<a[0]<<endl;
        for(i=1; i<n; i++)
        {
            if(boro == a[i])
            {
                cnt++;
            }

            //cout<<cnt;
        }
        if(cnt+1 == n)
        {
            cout<<0<<endl;
        }
        else{
            cout<<n-2<<endl;
        }

    }
}

