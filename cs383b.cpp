#include<bits/stdc++.h>
#define Max 100010
#define pi acos(-1.0)
#define mem(a,b) memset(a,b,sizeof(a))
#define f_input freopen("input.txt","r",stdin)
using namespace std;
int main()
{
    long long int n, x, a[Max], i, j;

    while(cin>>n>>x)
    {
        long long int cnt=0;
        for(i=0; i<n; i++)
        {
            cin>>a[i];
        }
        sort(a,a+n);
        for(i=0; i<n-1; i++)
        {
            if((a[i]^a[i+1])== x)
            {
                //cout<<(a[i]^a[i+1])<<" "<<x<<cnt<<endl;
                cnt++;
            }
        }
        cout<<cnt<<endl;
    }

}
