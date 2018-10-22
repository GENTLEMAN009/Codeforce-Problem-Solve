#include<bits/stdc++.h>
#define Max 100010
#define pi acos(-1.0)
#define mem(a,b) memset(a,b,sizeof(a))
#define finput freopen("input.txt","r",stdin)
using namespace std;
int a[1004][1004];
int main()
{
    //finput;

    int n, m, i, j, cnt=0, d;
    scanf("%d %d", &n, &m);
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
         d=0;
        for(j=0;j<m;j++)
        {
            if(a[i][j]==0 && d>0)
            {
                cnt++;
            }
            if(a[i][j]==1) d++;
        }
    }
    //cout<<cnt<<endl;
    for(i=n-1;i>=0;i--)
    {
        d=0;
        for(j=m-1;j>=0;j--)
        {
            if(a[i][j]==0 && d>0)
            {
                cnt++;
            }
            if(a[i][j]==1) d++;
        }
    }
    //cout<<cnt<<endl;
    for(i=m-1;i>=0;i--)
    {
        d=0;
        for(j=n-1;j>=0;j--)
        {
            if(a[j][i]==0 && d>0)
            {
                cnt++;
            }
            if(a[j][i]==1) d++;
        }
    }
    //cout<<cnt<<endl;
    for(i=0;i<m;i++)
    {
        d=0;
        for(j=0;j<n;j++)
        {
            if(a[j][i]==0 && d>0)
            {
                cnt++;
            }
            if(a[j][i]==1) d++;
        }
    }
    cout<<cnt<<endl;
    return 0;
}
