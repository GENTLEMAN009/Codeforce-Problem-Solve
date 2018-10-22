#include<bits/stdc++.h>
#define Max 100010
#define pi acos(-1.0)
#define mem(a,b) memset(a,b,sizeof(a))
using namespace std;
int main()
{
    int n, sum =0, add = 0, a[Max];
	while(cin>>n)
    {
        for(int i=0; i<n; i++)
	{
		cin >> a[i];
		sum += a[i];
	}
	sort(a, a+n);
	int coins = 0;
	for(int i=n-1; i>=0 && add <= sum; i--)
	{
		coins ++;
		add+= a[i];
		sum -= a[i];
	}
	cout << coins << endl;
    }

	return 0;
}
