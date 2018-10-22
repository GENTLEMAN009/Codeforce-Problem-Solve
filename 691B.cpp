#include<bits/stdc++.h>
#include<cstring>
#define Max 100010
#define pi acos(-1.0)
#define mem(a,b) memset(a,b,sizeof(a))
using namespace std;
int main()
{
    int n, i, j;
    string s, a;
    while(getline(cin,s))
    {
        int cnt = 0;
        n = s.size();
        for(i=0; i<n; i++)
        {
            if(s[i] == 'd')
            {
                s[i] = 'b';
            }
            if(s[i] == 'q')
            {
                s[i] = 'p';
            }
        }

        //string a = strrev(s);
        for(i=n-1,j=0; i>=0; i--,j++)
        {
            a[j] = s[i];

        }
        for(i=0; i<n; i++)
        {
            if(s[i] == a[i])
                cnt++;
              //cout<<a[i];
        }
        //cout<<n<<cnt;
        if(cnt == n)
        {
            cout<<"TAK"<<endl;
        }
        else
        {
            cout<<"NIE"<<endl;
        }
    }
}
