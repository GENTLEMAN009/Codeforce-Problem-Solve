#include<bits/stdc++.h>
#define Max 100010
#define pi acos(-1.0)
#define mem(a,b) memset(a,b,sizeof(a))
using namespace std;
int main()
{
    char a[1000], c[1000];
    int i, j, n;
    vector<char> v;
    freopen("input.txt","r",stdin);
    while(cin>>a)
    {
        v.clear();
        int l = strlen(a);
        for(i=0; i<l; i++)
        {
            if(a[i] == 'A' || a[i] == 'E' || a[i] == 'I' || a[i] == 'O' || a[i] == 'U' || a[i] == 'a' || a[i] == 'e' || a[i] == 'i' || a[i] == 'o' || a[i] == 'u'|| a[i] == 'Y' || a[i] == 'y')
            {
                //cout<<a[i]<<endl;
                //c[i] = a[i];
                continue;
            }
            else
            {
                v.push_back('.');
                if(a[i]>='B' && a[i]<='Z')
                {
                    v.push_back(a[i]+32);
                }
                else
                {
                    v.push_back(a[i]);
                }

            }
        }
        for(i=0; i<v.size(); i++)
        {
            cout<<v[i];
        }
        cout<<endl;
    }
}
