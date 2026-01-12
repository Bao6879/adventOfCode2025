#include <bits/stdc++.h>
using namespace std;
#define l long long
#define eb emplace_back
const l maxn=1005;
l n, ans;
string inp[maxn];
l dp[maxn][maxn];
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
    for (j=0; j<inp[0].size(); j++)
    {
        if (inp[0][j]=='S')
        {
            dp[0][j]=1;
        }
    }
    for (i=0; i<n-1; i++)
    {
        for (j=0; j<inp[i].size(); j++)
        {
            if (dp[i][j]!=0)
            {
                if (inp[i+1][j]=='^')
                {
                    dp[i+1][j+1]+=dp[i][j];
                    dp[i+1][j-1]+=dp[i][j];
                }
                else
                {
                    dp[i+1][j]+=dp[i][j];
                }
            }
        }
    }
    for (i=0; i<inp[0].size(); i++)
    {
        ans+=dp[n-2][i];
    }
    cout<<ans;
}
