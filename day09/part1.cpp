#include <bits/stdc++.h>
using namespace std;
#define l long long
l ans;
struct nd
{
    l x, y;
};
nd node[1005];
int main()
{
    string s;
	l a, i, j, n=0;
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	while (cin>>s)
    {
        if (s=="-1")
            break;
        nd tmp;
        tmp.x=0, tmp.y=0;
        i=0;
        while (s[i]!=',')
        {
            tmp.x*=10;
            tmp.x+=s[i]-48;
            i++;
        }
        i++;
        while (i<s.size())
        {
            tmp.y*=10;
            tmp.y+=s[i]-48;
            i++;
        }
        node[n]=tmp;
        n++;
    }
    a=0;
    for (i=0; i<n; i++)
    {
        for (j=i+1; j<n; j++)
        {
            a=max(a, (abs(node[i].x-node[j].x)+1)*(abs(node[i].y-node[j].y)+1));
        }
    }
    cout<<a;
}
