#include<bits/stdc++.h>
#define Max 100010
#define pi acos(-1.0)
#define mem(a,b) memset(a,b,sizeof(a))
#define f_input freopen("input.txt","r",stdin)
using namespace std;
int main()
{
    //f_input; //freopen();
    int a[6][6], i, j, r=0, c=0;

    for(i=1; i<=5; i++)
    {
        for(j=1; j<=5; j++)
        {
            cin>>a[i][j];
            if(a[i][j] == 1)
            {
                r =i;
                c=j;
            }
        }
    }
    int cnt = abs(3-r)+abs(3-c);
    cout<<cnt<<endl;


}
