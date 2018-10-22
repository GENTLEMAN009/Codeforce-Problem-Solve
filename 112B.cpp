#include<bits/stdc++.h>
#define Max 100010
#define pi acos(-1.0)
#define mem(a,b) memset(a,b,sizeof(a))
using namespace std;
int main()
{
    int n, x, y;
    scanf("%d%d%d", &n, &x, &y);
    n /= 2;
    if ((x == n || x == n + 1) && (y == n || y == n + 1)) printf("NO\n");
    else printf("YES\n");
}
