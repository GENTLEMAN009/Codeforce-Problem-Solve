#include<bits/stdc++.h>
#define Max 100010
#define pi acos(-1.0)
#define mem(a,b) memset(a,b,sizeof(a))
using namespace std;
int main()
{
    int k1,k2,k3,k4,sum,n,i, m;
    while(cin>>k1>>k2>>k3>>k4)
    {
        sum=0;
        n = min(k1,min(k3,k4));
        //cout<<n<<endl;
        for(i=1; i<=n; i++)
        {
            sum+=256;
            k1--;
            k3--;
            k4--;
        }
        if(k1!=0 && k2!=0)
        {
            m = min(k1,k2);
            for(i=1; i<=m; i++)
            {
                sum+=32;
            }
        }
        cout<<sum<<endl;
    }
    return 0;
}
