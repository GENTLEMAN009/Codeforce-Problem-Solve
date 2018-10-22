#include<bits/stdc++.h>
using namespace std;
int main()
{
    char str[1000];
    int t, len;
    cin>>t;
    while(t--)
    {
        cin>>str;
        len = strlen(str);
        if(len<=10)
        {
            cout<<str<<endl;
        }
        else
        {
            cout<<str[0]<<len-2<<str[len-1]<<endl;
        }
        //cout<<endl;
    }
    return 0;
}
