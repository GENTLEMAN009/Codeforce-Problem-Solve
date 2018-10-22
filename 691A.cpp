#include <iostream>
using namespace std;

int main() {
	int n, a[10000], i;
	while(cin>>n)
	{

		int cnt = 0;
		for(i=0; i<n; i++)
		{
			cin>>a[i];
			if(a[i] == 0)
			{
				cnt++;
			}
		}
		if(n == 1 && a[0] == 1)
        {
            cout<<"YES"<<endl;
        }
        else if(n == 1 && a[0] == 0)
        {
            cout<<"NO"<<endl;
        }
		else if(cnt==1)
		{
			cout<<"YES"<<endl;
		}
		else
		{
			cout<<"NO"<<endl;
		}
	}
	return 0;
}
