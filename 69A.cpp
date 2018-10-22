#include<bits/stdc++.h>
#define Max 100010
#define pi acos(-1.0)
#define mem(a,b) memset(a,b,sizeof(a))
#define f_input freopen("input.txt","r",stdin)
using namespace std;
int main()
{
    //f_input;
    int a[100],b[100],c[100], i, j,sum2,sum1, n, sum;

    while(cin>>n)
    {
        sum=0;
        sum1=0;
        sum2=0;
        for(i=1; i<=n; i++)
        {
            cin>>a[i]>>b[i]>>c[i];
        }

        for(i=1; i<=n; i++)
        {
            sum+=a[i];
            sum1==b[i];
            sum2+=c[i];
        }
        if(sum==0 && sum1==0 && sum2==0)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
}
