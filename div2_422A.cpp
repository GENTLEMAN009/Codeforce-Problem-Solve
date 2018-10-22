/******************** NILOY ****************/
#include<bits/stdc++.h>
#define lld long long int
#define Max 100010
#define pi acos(-1.0)
#define mem(a,b) memset(a,b,sizeof(a))
#define f_input freopen("input.txt","r",stdin)
using namespace std;
vector<int> v;
int ar[1000002];
int main()
{
    lld a, b, fact=1, s, i;
    while(cin>>a>>b)
    {
        s = min(a,b);

        for(i=1; i<=s; i++)
        {
            fact *= i;
        }
        cout<<fact<<endl;
    }
}
