#include <bits/stdc++.h>
using namespace std;
#define l long long
l ans;
//Got a hint for the problem
int main()
{
    string s;
	l a, tmp, sta, i, j;
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	while (cin>>s)
    {
        if (s=="-1")
            break;
        sta=0;
        a=0;
        for (i=11; i>=0; i--)
        {
            tmp=0;
            for (j=sta; j<=s.size()-i-1; j++)
            {
                if (s[j]-48>tmp)
                {
                    tmp=s[j]-48;
                    sta=j+1;
                }
            }
            a*=10;
            a+=tmp;
        }
        ans+=a;
    }
    cout<<ans;
}
