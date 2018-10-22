#include<bits/stdc++.h>
#define Max 200002
#define pi acos(-1.0)
#define mem(a,b) memset(a,b,sizeof(a))
#define f_input freopen("input.txt","r",stdin)
using namespace std;
int main()
{
    //f_input;
        int a[Max], i, j, n;

       scanf("%d", &n);
        for(i=0; i<n; i++)
        {
            scanf("%d", &a[i]);
        }
        j=n-1;
        for(i=0; i<n/2; i+=2)
        {
           swap(a[i], a[j]);
           //cout<<i<<" "<<j<<" "<<a[i]<<" "<<a[j]<<endl;
           j-=2;
        }
        for(i=0; i<n; i++)
        {
            printf("%d ", a[i]);
        }
    return 0;
}
