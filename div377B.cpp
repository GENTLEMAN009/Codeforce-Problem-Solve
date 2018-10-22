#include<bits/stdc++.h>
#define Max 100010
#define pi acos(-1.0)
#define mem(a,b) memset(a,b,sizeof(a))
using namespace std;
int main()
{
    int n, k, a[510], b[510], i;
    int x,y;
    cin>>n>>k;
    for(i=0; i<n; i++)
        {
            cin>>a[i];
        }
        int cnt = 0;
        for(i=1; i<n; i++)
        {
            x = a[i-1];
            y = a[i];
            if(x+y<k)
            {
                int z = k-(y+x);
                //int c = abs(y-z);
               cnt += z;
                //b[i] = x;
                a[i]+=z;
                //cout<<cnt<<endl;
            }

        }
        cout<<cnt<<endl;
        for(i=0; i<n; i++)
        {

                cout<<a[i]<<" ";
        }
       // cout<<endl;
}
