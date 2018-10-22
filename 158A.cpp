#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, k, a[1000], i, cnt;

    while(cin>>n>>k)
    {
        cnt=0;
        for(i=0; i<n; i++)
        {
            cin>>a[i];
        }
        for(i=0; i<n; i++)
        {
            if(a[i]>=a[k-1] && a[i]>0)
            {
                cnt++;
            }
        }
        cout<<cnt<<endl;
    }
    return 0;
}
