/******************** NILOY ****************/
#include<bits/stdc++.h>
#define lld long long int
#define Max 100010
#define pi acos(-1.0)
#define mem(a,b) memset(a,b,sizeof(a))
#define f_input freopen("input.txt","r",stdin)
using namespace std;
int main()
{
    lld n, m, k, a[Max], i, j, ans=120, b[Max]={0};

    while(cin>>n>>m>>k)
    {
        //cnt=0;
        for(i=1; i<=n; i++)
        {
            cin>>a[i];
        }

        for(i=1; i<=n; i++)
        {
            j=0;
            //cout<<a[i]<<" "<<k<<endl;
            if(k>=a[i]&&a[i]!=0)
            {
                ans = min(ans,abs(m-i));
                //cout<<ans<<endl;
            }
        }
        cout<<ans*10<<endl;
    }
    return 0;
}
