#include<bits/stdc++.h>
#define Max 100010
#define pi acos(-1.0)
#define mem(a,b) memset(a,b,sizeof(a))
using namespace std;
int main()
{
    char s[110];
    string a;
    int i, sub, n, flag=0;
    while(cin>>a)
    {
        int l = a.size();
        sub = 0;
        n = 0;
        int cnt=0;
        int mx = 0;
        //cout<<a<<l;
        for(i=0; i<l; i++)
        {
            cnt++;
            if(a.at(i) == 'A' || a.at(i) == 'E' || a.at(i) == 'I' || a.at(i) == 'O' || a.at(i) == 'U' || a.at(i) == 'Y')
            {

                mx = max(cnt, mx);
                //cout<<cnt<<endl;
                cnt=0;
                //cout<<"max"<<mx<<endl;
            }

        }

        if(flag == 1)
        {
            cout<<cnt<<endl;
        }
        else
        cout<<mx<<endl;
    }
}
