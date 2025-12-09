#include <bits/stdc++.h>
using namespace std;
#define l long long
#define eb emplace_back
const l maxn=1005;
l n, ans;
vector <l> v[5];
vector <char> vc;
string inp[maxn];
int main()
{
	char ch;
    string s;
	l i, tmp;
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	while (getline(cin, s))
    {
        if (s=="")
            break;
        for (i=0; i<s.size(); i++)
        {
            tmp=0;
            if (s[i]==' ')
                continue;
            while (s[i]>='0' && s[i]<='9')
            {
                tmp*=10;
                tmp+=s[i]-48;
                i++;
                if (i>=s.size())
                    break;
            }
            v[n].eb(tmp);
        }
        n++;
    }
    while (cin>>ch)
    {
        if (ch=='-')
            break;
        vc.eb(ch);
    }
    for (i=0; i<v[0].size(); i++)
    {
        if (vc[i]=='*')
            ans+=v[0][i]*v[1][i]*v[2][i]*v[3][i];
        else
            ans+=v[0][i]+v[1][i]+v[2][i]+v[3][i];
    }
    cout<<ans;
}
