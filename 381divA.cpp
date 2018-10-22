#include<bits/stdc++.h>
#define Max 100010
#define pi acos(-1.0)
#define mem(a,b) memset(a,b,sizeof(a))
using namespace std;
int main()
{
    //freopen("input.txt","r",stdin);
    int n, k, i, node, tar;
    char s[1010];
    cin>>n>>k;
        int flag = 0;
        cin>>s;
        for(i=0; i<n; i++)
        {

            if(s[i]=='G')
            {
                node = i;
            }
            if(s[i]=='T')
            {
                tar = i;
            }
        }
        //cout<<"N"<<node<<" "<<"T"<<tar<<endl;

        if(node<=tar)
        {
            for(i=node; i<=n; i=i+k)
            {
                //cout<<s[i]<<endl;
                if(s[i]=='#')
                {
                    //cout<<s[i]<<endl;
                    //break;
                    flag  = 1;
                    cout<<"NO"<<endl;
                    return 0;
                }
                else if(s[i] == 'T')
                {
                    cout<<"YES"<<endl;
                    return 0;
                }

            }

        }
        else if(node>tar)
        {

            for(i=node; i>=0; i=i-k)
            {
                //cout<<s[i]<<endl;
                if(s[i]=='#')
                {
                    //cout<<s[i]<<endl;
                    //break;
                    flag  = 1;
                    cout<<"NO"<<endl;
                    return 0;
                }
                else if(s[i] == 'T')
                {
                    cout<<"YES"<<endl;
                    return 0;
                }
            }

        }
        //else
        cout<<"NO"<<endl;
}

