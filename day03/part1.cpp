#include <bits/stdc++.h>
using namespace std;
#define l long long
l ans;
int main()
{
	char ch, ch1;
    string s;
	l a, tmp, i;
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	while (cin>>s)
    {
        if (s=="-1")
            break;
        ch=0;
        ch1=0;
        tmp=0;
        for (i=0; i<s.size()-1; i++)
        {
            if (s[i]>ch)
            {
                ch=s[i];
                tmp=i;
            }
        }
        for (i=tmp+1; i<s.size(); i++)
        {
            if (s[i]>ch1)
            {
                ch1=s[i];
            }
        }
        a=(ch-48)*10+ch1-48;
        ans+=a;
    }
    cout<<ans;
}
