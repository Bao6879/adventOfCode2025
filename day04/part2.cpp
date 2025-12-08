#include <bits/stdc++.h>
using namespace std;
#define l long long
#define eb emplace_back
const l maxn=1005;
const l rx[]={1, 1, 1, 0, -1, -1, -1, 0};
const l ry[]={0, -1, 1, 1, 0, 1, -1, -1};
l m, n, ans;
double n1, m1, ans1;
string s2, s3, s4;
vector <l> vx, vy;
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
    ans=0;
    while (true)
    {
        vx.clear();
        vy.clear();
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
                {
                    ans++;
                    vx.eb(i);
                    vy.eb(j);
                }
            }
        }
        if (vx.size()==0)
            break;
        for (i=0; i<vx.size(); i++)
            inp[vx[i]][vy[i]]='.';
    }
    cout<<ans;
}
