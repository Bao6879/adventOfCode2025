#include <bits/stdc++.h>
using namespace std;
#define l long long
#define eb emplace_back
#define se second
#define fi first
const l maxn=1005;
l n, ans;
vector <l> vx, vy;
vector <pair<l, l>> v;
string inp[maxn];
int main()
{
    string s;
	l tmp, i, j, num1, num2;
	bool flag=0;
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	while (getline(cin, inp[n]))
    {
        if (inp[n]=="")
            break;
        s=inp[n];
        n++;
        for (i=0; i<s.size(); i++)
        {
            num1=0;
            num2=0;
            while (s[i]>='0' && s[i]<='9')
            {
                num1*=10;
                num1+=s[i]-48;
                i++;
                if (i>=s.size())
                    break;
            }
            i++;
            while (s[i]>='0' && s[i]<='9')
            {
                num2*=10;
                num2+=s[i]-48;
                i++;
                if (i>=s.size())
                    break;
            }
        }
        pair <l, l> temp={num1, num2};
        v.eb(temp);
    }
    sort(v.begin(), v.end());
    tmp=0;
    while (tmp==0)
    {
        tmp=1;
        for (i=0; i<v.size(); i++)
        {
            num1=v[i].fi;
            num2=v[i].se;
            flag=0;
            for (j=0; j<v.size(); j++)
            {
                if (i==j)
                    continue;
                if (num1>=v[j].fi && num1<=v[j].se && num2>=v[j].fi && num2<=v[j].se)
                {
                    flag=1;
                    break;
                }
                if (num1>=v[j].fi && num1<=v[j].se)
                {
                    v[j].se=num2;
                    flag=1;
                    break;
                }
                if (num2>=v[j].fi && num2<=v[j].se)
                {
                    v[j].fi=num1;
                    flag=1;
                    break;
                }
            }
            if (flag==1)
            {
                tmp=0;
                v.erase(v.begin()+i);
                break;
            }
        }
    }
    for (i=0; i<v.size(); i++)
    {
        ans+=v[i].se-v[i].fi+1;
    }
    cout<<ans;
}
