#include<bits/stdc++.h>
#define Max 100010
#define pi acos(-1.0)
#define mem(a,b) memset(a,b,sizeof(a))
using namespace std;
int main()
{
    string s;
    //int pos;
    //freopen("input.txt","r",stdin);
    while(cin>>s)
    {
        int pos = 0;
        //n = s.size();
        while (pos < s.length() && s[pos] != 'h')
        {
            ++pos;
        }
        ++pos;
        while (pos < s.length() && s[pos] != 'e')
        {
            ++pos;
        }
        ++pos;
        while (pos < s.length() && s[pos] != 'l')
        {
            ++pos;
        }
        ++pos;
        while (pos < s.length() && s[pos] != 'l')
        {
            ++pos;
        }
        ++pos;
        while (pos < s.length() && s[pos] != 'o')
        {
            ++pos;
        }


        if(pos<s.length())
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
