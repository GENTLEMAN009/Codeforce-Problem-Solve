#include<bits/stdc++.h>
#define Max 100010
#define pi acos(-1.0)
#define mem(a,b) memset(a,b,sizeof(a))
using namespace std;
int main()
{
    int n, m, a[Max], sum, mx, i, j;
    //freopen("input.txt","r",stdin);
    while(cin>>n>>m)
    {

        sum=0, mx=0;
        for(i=1; i<=n; i++)
        {
            cin>>a[i];
        }
        for(i=1; i<=m; i++)
        {
            int add=0;
            int c ,b;
            cin>>c>>b;
            for(int j=c; j<=b; j++)
            {
                add+=a[j];
                //cout<<"ADD"<<add<<endl;
            }
            if(add>0)
            {
                sum+=add;
                //cout<<"SUM"<<sum<<endl;
            }
            mx = max(sum,mx);
        }
        cout<<mx<<endl;
    }
}
