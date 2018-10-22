#include<bits/stdc++.h>
#define Max 100010
#define pi acos(-1.0)
#define mem(a,b) memset(a,b,sizeof(a))
using namespace std;
int main()
{
    int x[3];
    while(cin>>x[0]>>x[1]>>x[2])
    {
        sort(x, x+3);

        int a = x[2]-x[0];
        cout<<a<<endl;
    }
}
