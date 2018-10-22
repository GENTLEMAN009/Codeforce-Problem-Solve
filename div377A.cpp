#include<bits/stdc++.h>
#define Max 100010
#define pi acos(-1.0)
#define mem(a,b) memset(a,b,sizeof(a))
using namespace std;
int main()
{
    int k, r, cnt, a;

    while(cin>>k>>r)
    {
        cnt=1;

        while(true)
        {
            a = k * cnt;
            if(a %10 == 0)
            {
                break;
            }
            a = a - r;
            if(a%10 == 0)
            {
                break;
            }
            cnt++;
        }
            cout<<cnt<<endl;
    }
}
