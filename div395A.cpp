#include<bits/stdc++.h>
#define Max 100010
#define pi acos(-1.0)
#define mem(a,b) memset(a,b,sizeof(a))
#define f_input freopen("input.txt","r",stdin)
using namespace std;

 int gcd(int x,int y)
{
    if(x%y==0)
        return y;
    else
        return gcd(y,x%y);
}
 int lcm(int  x,int y)
{
    x/=gcd(x,y);
     return x*y;
}

int main()
{
    int n, m, z, cnt, a;

    while(cin>>n>>m>>z)
    {
        a = lcm(n,m);
        cnt = z/a;
        cout<<cnt<<endl;
    }
    return 0;
}
