/******************** NILOY ****************/
#include<bits/stdc++.h>
#define lld long long int
#define _I int
#define Max 100010
#define pi acos(-1.0)
#define mem(a,b) memset(a,b,sizeof(a))
#define f_input freopen("input.txt","r",stdin)
using namespace std;
int main()
{
    lld n, p, i, j;
    _I a[3] = {0};
    while(cin>>n>>p)
    {

        _I a[3] = {0};
        a[p] = 1;
        if(n%2==0)
        {
            for(i=1; i<=n; i++)
            {
                if(i%2==1)
                {
                    swap(a[1],a[2]);
                    //cout<<"1"<<a[0]<<a[1]<<a[2]<<endl;
                }
                else
                {
                    swap(a[0],a[1]);
                    //cout<<"2"<<a[0]<<a[1]<<a[2]<<endl;
                }
            }
        }
        else
        {
            for(i=1; i<=n; i++)
            {
                if(i%2==0)
                {
                    swap(a[1],a[2]);
                    //cout<<"1"<<a[0]<<a[1]<<a[2]<<endl;
                }
                else
                {
                    swap(a[0],a[1]);
                    //cout<<"2"<<a[0]<<a[1]<<a[2]<<endl;
                }
            }
        }

        if(a[0] == 1)
        {
            printf("0\n");
        }
        else if(a[1]== 1)
        {
            printf("1\n");
        }
        else
        {
            printf("2\n");
        }
        //cout<<a[0]<<a[1]<<a[2]<<endl;
    }
    return 0;
}
