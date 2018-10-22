#include<bits/stdc++.h>
using namespace std;
int main()
{
    int m, n;

    while(cin>>m>>n)
    {
        if(m == 1 && n == 1)
        {
            cout<<"0"<<endl;
        }
        else
        {
            cout<<((m*n)/2)<<endl;
        }
    }
}
