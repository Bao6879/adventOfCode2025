#include <bits/stdc++.h>
using namespace std;
#define l long long
l ans;
int main()
{
    string s;
	l c, i, dial;
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	dial=50;
	while (cin>>s)
    {
        if (s=="-1")
            break;
        c=0;
        i=1;
        while (i<s.size())
        {
            c*=10;
            c+=s[i]-48;
            i++;
        }
        if (s[0]=='L')
        {
            dial-=c;
            while (dial<0)
                dial+=100;
        }
        else
        {
            dial+=c;
            while (dial>99)
                dial-=100;
        }
        if (dial==0)
            ans++;
    }
    cout<<ans;
}
