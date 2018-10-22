#include<bits/stdc++.h>
#define Max 100010
#define pi acos(-1.0)
#define mem(a,b) memset(a,b,sizeof(a))
using namespace std;

int main()
{
    int x, sum, i, y;
    string s;
    //getchar();
    getline(cin,s);
        //getchar();
        //sum = 0;
        int len = s.size();
        sum = min(abs(s[0]-96 -1),abs(26-(s[0]-96)+1));
        //cout<<sum<<endl;
        for(i=0; i<len-1; i++)
        {
            x = s[i]-96;
            y = s[i+1] - 96;
            if(x>y)
            {
                sum += min(abs(x-y), abs(y+26-x));
                //cout<<sum<<endl;
            }
            else
            {
                sum += min(abs(x-y), abs(x+26-y));
                //c//out<<sum<<endl;
            }
        }
        cout<<sum<<endl;
}
