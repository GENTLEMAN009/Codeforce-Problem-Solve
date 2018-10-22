#include<bits/stdc++.h>
#define Max 100010
#define pi acos(-1.0)
#define mem(a,b) memset(a,b,sizeof(a))
using namespace std;
int main()
{
     long long int n, n1, n2, i, mx=0;
     double sum, add;
    long long int a[100000];
    while(cin>>n>>n1>>n2)
    {
        sum=add=0;
        for(i=0; i<n; i++)
        {
            cin>>a[i];
        }
        sort(a,a+n);
        int k, l;

        if(n1<n2 || n1==n2)
        {
            k = n-1; l=0;
            while(l!=n1)
            {
                sum+=a[k];

                k--;
                l++;
            }
            //cout<<k<<endl;
            sum/=n1;
            //cout<<sum<<endl;
            l=0;
            while(l!=n2)
            {
                add+=a[k];
                k--;
                l++;
            }
            add/=n2;
        }
        else
        {
            k=n-1;
            l=0;
            while(l!=n2)
            {
                sum+=a[k];
                k--;
                l++;
            }
            sum/=n2;
            l=0;
            while(l!=n1)
            {
                add+=a[k];
                k--;
                l++;
            }
            add/=n1;
        }
        printf("%lf\n",sum+add);
    }
}
