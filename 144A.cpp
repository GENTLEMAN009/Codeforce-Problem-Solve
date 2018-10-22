#include<bits/stdc++.h>
#define Max 100010
#define pi acos(-1.0)
#define mem(a,b) memset(a,b,sizeof(a))
#define f_input freopen("input.txt","r",stdin)
using namespace std;
int main()
{
    //f_input;
    int n, a[1000], i, j, cnt1, cnt2, maxi, mini, big,big1;

    while(cin>>n)
    {
        cnt1=0;
        cnt2=0;
        maxi=0;
        mini=100;
        for(i=1; i<=n; i++)
        {
            cin>>a[i];
        }
        for(i=1; i<=n; i++)
        {
            if(a[i]>maxi)
            {
                maxi=a[i];
            }
            if(a[i]<mini)
            {
                mini = a[i];
            }
        }
        for(i=1; i<=n; i++)
        {
            if(a[i]==maxi)
            {
                big=i;
                break;
            }
            else
            {
                cnt1++;
            }
        }
        for(i=n; i>=1; i--)
        {
            if(a[i]==mini)
            {
                big1=i;
                break;
            }
            else
            {
                cnt2++;
            }
        }
        //cout<<cnt1<<" "<<cnt2<<endl;;
        //cout<<maxi<<" "<<mini<<endl;
        if(big>big1)
        {
            cout<<cnt1+cnt2-1<<endl;
        }
        else
        {
            cout<<cnt1+cnt2<<endl;
        }
        //cout<<(cnt1-1)+(n-cnt2-1)<<endl;
    }
}
