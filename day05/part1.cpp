#include <bits/stdc++.h>
using namespace std;
#define l long long
#define eb emplace_back
l ans;
vector <l> vx, vy;
int main()
{
    string s;
	l i, j, num1, num2;
	bool flag=0;
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	while (getline(cin, s))
    {
        if (s=="")
        {
            flag=1;
            continue;
        }
        if (s=="-1")
            break;
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
            if (!flag)
            {
                i++;
                while (s[i]>='0' && s[i]<='9')
                {
                    num2*=10;
                    num2+=s[i]-48;
                    i++;
                    if (i>=s.size())
                        break;
                }
                vx.eb(num1);
                vy.eb(num2);
            }
            else
            {
                for (j=0; j<vx.size(); j++)
                {
                    if (num1>=vx[j] && num1<=vy[j])
                    {
                        ans++;
                        break;
                    }
                }
            }
        }
    }
    cout<<ans;
}
