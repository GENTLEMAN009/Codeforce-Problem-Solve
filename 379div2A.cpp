#include<bits/stdc++.h>
#define Max 100010
#define pi acos(-1.0)
#define mem(a,b) memset(a,b,sizeof(a))
using namespace std;
int main()
{
    char s[Max];
    int a, d, i, n, len;
    while(cin>>n)
    {
        a=0;
        d=0;
        for(i=0; i<n; i++)
        {
            cin>>s[i];
            if(s[i] == 'A')
            {
                a++;
            }
            else if(s[i]== 'D')
            {
                d++;
            }
        }
        if(a>d)
        {
            cout<<"Anton"<<endl;
        }
        else if(a<d)
        {
            cout<<"Danik"<<endl;

        }
        else if(a==d)
        {
            cout<<"Friendship"<<endl;
        }
    }
    return 0;
}
