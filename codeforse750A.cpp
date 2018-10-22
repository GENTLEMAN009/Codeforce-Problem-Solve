#include<bits/stdc++.h>
#define Max 100010
#define pi acos(-1.0)
#define mem(a,b) memset(a,b,sizeof(a))
#define f_input freopen("input.txt","r",stdin)
using namespace std;
int main()
{
    int n, k;

    while(cin>>n>>k)
    {
        int add = 240 - k;
        //cout<<"add"<<add<<endl;
        int sum =0, cnt=0;
        for(int i =1; i<=n; i++)
        {
            sum = sum + 5*i;
            //cout<<"SUM"<<sum<<endl;
            if(sum<=add)
            {
                cnt++;
                //cout<<"cnt"<<cnt<<endl;
            }
        }
        cout<<cnt<<endl;
    }
}
