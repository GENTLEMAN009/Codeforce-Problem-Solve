#include<bits/stdc++.h>
#define Max 100010
#define pi acos(-1.0)
#define mem(a,b) memset(a,b,sizeof(a))
using namespace std;
string to_lower(string s)
{
    for(int i=0; i<s.size(); i++)
    {
        if(s.at(i) >= 'A' && s.at(i)<='Z')
        {
            s.at(i) = s.at(i) + 32;
        }
    }
    return s;
}
int main()
{
    string a;
    string b;

    while(cin>>a>>b)
    {
        a = to_lower(a);
        b = to_lower(b);

        cout << strcmp(a.c_str(), b.c_str()) << endl;
    }
    return 0;
}
