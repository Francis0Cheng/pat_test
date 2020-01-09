#include <bits/stdc++.h>
using namespace std;
string f(int x)
{
    string t1 = "";
    while(x)
    {
        t1 += (char)(x%10 + '0');
        x /= 10;
    }
    reverse(t1.begin(),t1.end());
    return t1;
}
int main(void)
{
    int x,n;
    scanf("%d%d",&x,&n);
    string s1 = "";
    s1 += (char)(x + '0');
    n--;
    while(n--)
    {
        string s2 = "";
        int len = s1.length();
        for(int i=0;i<len;i++)
        {
            char ch = s1[i];
            int cnt = 1;
            while(i+1<len && s1[i] == s1[i+1]){
                i++; cnt++;
            }
            s2 += ch;
            s2 += f(cnt);
        }
        //cout<<s2<<endl;
        s1 = s2;
    }
    cout<<s1<<endl;
    return 0;
}

