#include <bits/stdc++.h>
using namespace std;
#define l long long
#define eb emplace_back
const l maxn=1005;
l n, ans;
string inp[maxn];
int main()
{
	l i, j;
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	while (getline(cin, inp[n]))
    {
        if (inp[n]=="")
            break;
        n++;
    }
    for (i=0; i<n-1; i++)
    {
        for (j=0; j<inp[i].size(); j++)
        {
            if (inp[i][j]=='S' || inp[i][j]=='|')
            {
                if (inp[i+1][j]=='^')
                {
                    inp[i+1][j-1]='|';
                    inp[i+1][j+1]='|';
                    ans++;
                }
                else
                    inp[i+1][j]='|';
            }
        }
    }
    cout<<ans;
}
