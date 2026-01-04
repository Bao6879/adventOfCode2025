#include <bits/stdc++.h>
using namespace std;
#define l long long
l ans;
struct nd
{
    l x, y, z;
};
nd node[1005];
bool done[1005][1005];
l team[1005], cnt[1005];
//Was going to write a faster version, but it completed in 2 minutes. O(n^4), priority queue would've brought it down to O(n^2 log n^2).
int main()
{
    string s;
	l a, i, j, n=0, m=1;
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	while (cin>>s)
    {
        if (s=="-1")
            break;
        nd tmp;
        tmp.x=0, tmp.y=0, tmp.z=0;
        i=0;
        while (s[i]!=',')
        {
            tmp.x*=10;
            tmp.x+=s[i]-48;
            i++;
        }
        i++;
        while (s[i]!=',')
        {
            tmp.y*=10;
            tmp.y+=s[i]-48;
            i++;
        }
        i++;
        while (i<s.size())
        {
            tmp.z*=10;
            tmp.z+=s[i]-48;
            i++;
        }
        node[n]=tmp;
        n++;
    }
    while (1)
    {
        double mi=1e100;
        l x, y;
        for (i=0; i<n; i++)
        {
            for (j=i+1; j<n; j++)
            {
                if (done[i][j])
                    continue;
                double dist=sqrt(pow(node[i].x-node[j].x, 2)+pow(node[i].y-node[j].y, 2)+pow(node[i].z-node[j].z, 2));
                if (dist<mi)
                {
                    mi=dist;
                    x=i;
                    y=j;
                }
            }
        }
        if (team[x]!=0)
        {
            if (team[y]==0)
            {
                team[y]=team[x];
            }
            else if (team[x]!=team[y])
            {
                l tmp=team[y];
                for (i=0; i<n; i++)
                {
                    if (team[i]==tmp)
                        team[i]=team[x];
                }
            }
        }
        else if (team[y]!=0)
        {
            if (team[x]==0)
            {
                team[x]=team[y];
            }
            else if (team[x]!=team[y])
            {
                l tmp=team[x];
                for (i=0; i<n; i++)
                {
                    if (team[i]==tmp)
                        team[i]=team[y];
                }
            }
        }
        else if (team[x]==team[y] && team[x]==0)
        {
            team[x]=m;
            team[y]=m;
            m++;
        }
        done[x][y]=1;
        a=team[0];
        bool flag=0;
        for (i=0; i<n; i++)
        {
            if (team[i]!=a)
            {
                flag=1;
                break;
            }
        }
        if (!flag)
        {
            cout<<node[x].x*node[y].x;
            return 0;
        }
    }
}
