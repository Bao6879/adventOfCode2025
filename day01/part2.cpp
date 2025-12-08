#include <bits/stdc++.h>
using namespace std;
#define l long long
int main()
{
    string s;
	l i, num, dial, count;
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	count=0;
	dial=50;
	while (cin>>s)
    {
        if (s=="-1")
            break;
        num=0;
        i=1;
        while (i<s.size())
        {
            num*=10;
            num+=s[i]-48;
            i++;
        }
        if (s[0]=='L')
        {
            while (num>0)
            {
                dial--;
                if (dial==0)
                    count++;
                if (dial<0)
                    dial=99;
                num--;
            }
        }
        else
        {
            while (num>0)
            {
                dial++;
                if (dial>99)
                    dial=0;
                if (dial==0)
                    count++;
                num--;
            }
        }
    }
    cout<<"\n"<<count;
}
