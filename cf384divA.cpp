#include<bits/stdc++.h>
#define Max 100010
#define pi acos(-1.0)
#define mem(a,b) memset(a,b,sizeof(a))
#define f_input freopen("input.txt","r",stdin)
using namespace std;
int main()
{
    long long int i, j, n, a, b, cnt, mn;
    char s[Max];
    while(cin>>n>>a>>b)
    {
        cin>>s;
        if(s[a-1]==s[b-1])
        {
            cnt = 0;
        }
        else
        {
            cnt = 1;
        }
        cout<<cnt<<endl;
    }
}
