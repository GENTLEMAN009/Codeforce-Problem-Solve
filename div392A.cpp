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
    int n, add, i, max;

    while(cin>>n)
    {
        max =0;
        add = 0;
        for(i=0; i<n; i++)
        {
            cin>>ar[i];
            if(max<ar[i])
            {
                max = ar[i];
            }
        }
        for(i=0; i<n; i++)
        {
            add+= max - ar[i];
        }
        cout<<add<<endl;;
    }
}
