#include <bits/stdc++.h>
using namespace std;
#define l long long
const l maxn=1005;
const l rx[]={1, 1, 1, 0, -1, -1, -1, 0};
const l ry[]={0, -1, 1, 1, 0, 1, -1, -1};
l n, m, ans;
vector <l> v[maxn];
string inp[maxn];
int main()
{
	l a, k, i, j;
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	while (cin>>inp[n])
    {
        if (inp[n]=="-1")
            break;
        n++;
    }
    m=inp[0].size();
    for (i=0; i<n; i++)
    {
        for (j=0; j<m; j++)
        {
            a=0;
            if (inp[i][j]=='.')
                continue;
            for (k=0; k<8; k++)
            {
                if (i+rx[k]>=0 && i+rx[k]<n && j+ry[k]>=0 && j+ry[k]<m)
                {
                    if (inp[i+rx[k]][j+ry[k]]=='@')
                        a++;
                }
            }
            if (a<4)
                ans++;
        }
    }
    cout<<ans;
}
