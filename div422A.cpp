/******************** NILOY ****************/
#include<bits/stdc++.h>
#define lld long long int
#define Max 100010
#define pi acos(-1.0)
#define mem(a,b) memset(a,b,sizeof(a))
#define f_input freopen("input.txt","r",stdin)
using namespace std;
vector<int> v;
int main()
{
    int t, cnt=0;
    string s;
    cin>>t;
    for(int i=0; i<t; i++)
    {
        cin>>s;

        if(s == "Tetrahedron")
        {
            cnt+=4;
        }
        if( s == "Cube")
        {
            cnt+=6;
        }
        if(s == "Octahedron")
        {
            cnt+=8;
        }
        if(s == "Dodecahedron")
        {
            cnt+=12;
        }
        if(s == "Icosahedron")
        {
            cnt+=20;
        }
    }
    cout<<cnt<<endl;
}
