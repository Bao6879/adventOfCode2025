#include <bits/stdc++.h>
using namespace std;
#define l long long
l ans;
int main()
{
    string s, s1, s2, s3;
	l k, i, j, t, num1, num2;
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
        for (j=num1; j<=num2; j++)
        {
            s1=to_string(j);
            for (k=1; k<=s1.size()/2; k++)
            {
                s2="";
                s3="";
                for (t=0; t<k; t++)
                    s2+=s1[t];
                for (t=0; t<s1.size()/k; t++)
                    s3+=s2;
                if (s3==s1)
                {
                    ans+=j;
                    break;
                }
            }
        }
    }
    cout<<ans;
}
