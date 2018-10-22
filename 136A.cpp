#include<bits/stdc++.h>
#define Max 100010
#define pi acos(-1.0)
#define mem(a,b) memset(a,b,sizeof(a))
using namespace std;
int main()
{
    int a[110],n,i,j,b[110]={0};
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }

    for(i=1;i<n+1;i++)
    {

        b[a[i-1]-1]=i;

    }
    for(i=0;i<n;i++)
    {
        cout<<b[i]<<" ";
    }

    return 0;
}
