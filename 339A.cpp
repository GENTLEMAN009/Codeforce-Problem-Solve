#include<bits/stdc++.h>
#define Max 100010
#define pi acos(-1.0)
#define mem(a,b) memset(a,b,sizeof(a))
using namespace std;
int main()
{
    //freopen("input.txt","r",stdin);
    string s;
    vector<int> v;
    int i, len;
    while(cin>>s)
    {
        v.clear();
        len = s.size();
        for(i=0; i<len; i++)
        {
            if(s.at(i)>='1' && s.at(i)<='9')
            {
                int temp = s.at(i)-'0';
                v.push_back(temp);
            }
        }
        int n=v.size();
        sort(v.begin(),v.end());
        for(i=0; i<n; i++)
        {
            if(i==n-1)
            {
                cout<<v[i]<<endl;
            }
            else
            {
                cout<<v[i]<<"+";
            }
        }
    }
    return 0;
}
