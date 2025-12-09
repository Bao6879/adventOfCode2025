#include <bits/stdc++.h>
using namespace std;
#define l long long
#define eb emplace_back
const l maxn=1005;
l n, ans;
vector <string> v[5];
vector <char> vc;
string inp[maxn];
int main()
{
	char ch;
    string s, s1, s2, s3, s4;
	l i, j, k=0, idx=0, sta, en;
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	while (getline(cin, inp[n]))
    {
        if (inp[n]=="")
            break;
        k=max(k, (l)(inp[n].size()));
        n++;
    }
    for (i=0; i<n; i++)
    {
        while (inp[i].size()<k)
            inp[i]+=' ';
    }
    while (cin>>ch)
    {
        if (ch=='-')
            break;
        vc.eb(ch);
    }
    i=0;
    while (idx<inp[0].size())
    {
        l res;
        if (vc[i]=='*')
            res=1;
        else
            res=0;
        sta=idx;
        en=idx;
        while (inp[0][idx]==' ' || inp[1][idx]==' ' || inp[2][idx]==' ' || inp[3][idx]==' ')
        {
            if (inp[0][idx]==' ' && inp[1][idx]==' ' && inp[2][idx]==' ' && inp[3][idx]==' ')
                break;
            en++;
            idx++;
            if (idx>=inp[0].size())
                break;
        }
        while (inp[0][idx]!=' ' || inp[1][idx]!=' ' || inp[2][idx]!=' ' || inp[3][idx]==' ')
        {
            if (inp[0][idx]==' ' && inp[1][idx]==' ' && inp[2][idx]==' ' && inp[3][idx]==' ')
                break;
            en++;
            idx++;
            if (idx>=inp[0].size())
                break;
        }
        while (inp[0][idx]==' ' || inp[1][idx]==' ' || inp[2][idx]==' ' || inp[3][idx]==' ')
        {
            if (inp[0][idx]==' ' && inp[1][idx]==' ' && inp[2][idx]==' ' && inp[3][idx]==' ')
                break;
            en++;
            idx++;
            if (idx>=inp[0].size())
                break;
        }
        if (idx>=inp[0].size())
            en--;
        while (inp[0][en]==' ' && inp[1][en]==' ' && inp[2][en]==' ' && inp[3][en]==' ')
            en--;
        while (inp[0][sta]==' ' && inp[1][sta]==' ' && inp[2][sta]==' ' && inp[3][sta]==' ')
            sta++;
        for (j=en; j>=sta; j--)
        {
            l num=0;
            for (k=0; k<4; k++)
            {
                if (inp[k][j]==' ')
                {
                    continue;
                }
                else
                {
                    num*=10;
                    num+=inp[k][j]-48;
                }
            }
            if (vc[i]=='*')
                res*=num;
            else
                res+=num;
        }
        ans+=res;
        idx++;
        i++;
    }
    cout<<ans;
}
