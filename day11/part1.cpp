#include <bits/stdc++.h>
using namespace std;
#define l long long
l ans;
map <string, vector <string>> mp;
void dfs(string loc)
{
    if (loc=="out")
    {
        ans++;
        return;
    }
    for (l i=0; i<mp[loc].size(); i++)
    {
        dfs(mp[loc][i]);
    }
}
int main()
{
    string s;
    vector <string> v;
	l i;
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	while (getline(cin, s))
    {
        if (s=="-1")
            break;
        string s1="", s2;
        i=0;
        while (s[i]!=':')
        {
            s1+=s[i];
            i++;
        }
        i+=2;
        v.clear();
        while (i<s.size())
        {
            s2="";
            while (i<s.size() && s[i]!=' ')
            {
                s2+=s[i];
                i++;
            }
            i++;
            v.push_back(s2);
        }
        mp[s1]=v;
    }
    s="you";
    dfs(s);
    cout<<ans;
}
