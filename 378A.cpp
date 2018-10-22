#include<bits/stdc++.h>
#define Max 100010
#define pi acos(-1.0)
#define mem(a,b) memset(a,b,sizeof(a))
using namespace std;
int main()
{
    char a[110];

    int i, sub, n;
    cin>>a;
    int l = strlen(a);
        sub = 0;
        n = 0;
        int cnt=0;
        int mx = 0;
        int flag = 0;
        //cout<<a<<l;
        for(i=0; i<l; i++)
        {
            cnt++;
            if(a[i] == 'A' || a[i] == 'E' || a[i] == 'I' || a[i] == 'O' || a[i] == 'U' || a[i] == 'Y')
            {
                //flag = 1;
                mx = max(cnt, mx);
                cnt=0;
                //cout<<"max"<<mx<<endl;
            }
        }
        if(a[l-1] != 'A' || a[i-1] != 'E' || a[i-1] != 'I' || a[i-1] != 'O' || a[i-1] != 'U' || a[i-1] != 'Y')
        {
            cnt++;
        mx=max(mx,cnt);
        }
        cout<<mx<<endl;
}
