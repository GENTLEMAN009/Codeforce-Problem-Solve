/******************** NILOY ****************/
#include<bits/stdc++.h>
#define Max 100010
#define pi acos(-1.0)
#define mem(a,b) memset(a,b,sizeof(a))
#define f_input freopen("input.txt","r",stdin)
using namespace std;
vector<int> v;
int main()
{
    f_input;
    string s;
    int i, j;

    while(cin>>s)
    {
        int len = s.length();
        //cout<<len<<endl;
        for(i=0; i<len; i++)
        {
            cout<<s[i];
            if(s[i] == '-')
            {
                cout<<s[i];
                cout<<s[i+1];
                if(s[i+1]=='.')
                {
                    cout<<"1";

                }
                else if(s[i+1] == '-')
                    {
                        cout<<"2";
                    }
                    i+=2;
            }
            else if(s[i]=='.')
            {
                cout<<s[i];
                cout<<"0";
            }

        }
        cout<<endl;
    }
}
