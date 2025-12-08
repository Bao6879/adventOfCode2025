#include <bits/stdc++.h>
using namespace std;
#define l long long
l ans;
int main()
{
    string s, s1, s2;
	l a, tmp, i, j, x, num1, num2, y;
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin>>s;
	s+=',';
	for (i=0; i<s.size(); i++)
    {
        num1=0;
        num2=0;
        while (s[i]>='0' && s[i]<='9')
        {
            num1*=10;
            num1+=s[i]-48;
            i++;
        }
        i++;
        while (s[i]>='0' && s[i]<='9')
        {
            num2*=10;
            num2+=s[i]-48;
            i++;
        }
        s1=to_string(num1);
        s2=to_string(num2);
        tmp=pow(10, s1.size()/2);
        if (s1.size()%2==0)
            x=num1/tmp;
        else
            x=num1/tmp/10;
        tmp=pow(10, s2.size()/2);
        y=num2/tmp;
        for (j=x; j<=y; j++)
        {
            tmp=pow(10, to_string(j).size());
            a=j*tmp+j;
            if (a>=num1 && a<=num2)
                ans+=a;
        }
    }
    cout<<ans;
}
