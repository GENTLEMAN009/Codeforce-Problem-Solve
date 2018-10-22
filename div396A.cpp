/******************** NILOY ****************/
#include<bits/stdc++.h>
#define Max 100010
#define pi acos(-1.0)
#define mem(a,b) memset(a,b,sizeof(a))
#define f_input freopen("input.txt","r",stdin)
using namespace std;
vector<int> v;
int ar[1000002];
int main()
{
    string a, b;
    int na, nb, la, lb, i, j, cnt=0;

    cin>>a;
    cin>>b;

    la=a.length();
    lb=b.length();
    if(a==b)
    {
        cout<<"-1"<<endl;
    }
    else
    {
        int maxi = max(la,lb);
        cout<<maxi<<endl;
    }
}
