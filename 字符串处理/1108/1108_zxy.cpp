#include <bits/stdc++.h>
using namespace std;
const int N = 1e5+10;
double y;
bool f(string s)
{
    y = 0;
    int len = s.length();
    if(s[0] == '-')
    {
        double x1 = 0,x2 = 0;
        int i;
        for(i=1;i<len;i++)
        {
            if(s[i] >= '0' && s[i] <='9') x1 = x1*10 + 1.0*(s[i] - '0');
            else if(s[i] == '.') break;
            else return false;
            if(x1 > 1000) return false;
        }
        if(i<len && s[i] == '.')
        {
            double tp = 0.1;
            for(i=i+1;i<len;i++,tp = tp*0.1)
            {
                //printf("tp = %.5f\n",tp);
                if(tp < 0.01) return false;
                if(s[i] >= '0' && s[i] <='9')
                    x2 = x2 + (s[i] - '0')*tp;
                else return false;
            }
            y = x1 + x2;
            if(y > 1000) return false;
            y *= (-1.0);
            return true;
        }
        else if(i == len)
        {
            y = -1.0*x1;
            return true;
        }
        else return false;
    }
    else if(s[0] >= '0' && s[0] <='9')
    {
        double x1 = 0,x2 = 0;
        int i;
        for(i=0;i<len;i++)
        {
            if(s[i] >= '0' && s[i] <='9') x1 = x1*10 + 1.0*(s[i] - '0');
            else if(s[i] == '.') break;
            else return false;
            if(x1 > 1000) return false;
        }
        if(i<len && s[i] == '.')
        {
            double tp = 0.1;
            for(i=i+1;i<len;i++,tp = tp*0.1)
            {
                //printf("tp = %.5f\n",tp);
                if(tp < 0.01) return false;
                if(s[i] >= '0' && s[i] <='9')
                    x2 = x2 + (s[i] - '0')*tp;
                else return false;
            }
            y = x1 + x2;
            if(y > 1000) return false;
            return true;
        }
        else if(i == len)
        {
            y = x1;
            return true;
        }
        else return false;
    }
    else return false;
}
int main(void)
{
    int n,tot = 0;
    double sum = 0;
    string ss;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>ss;
        if(f(ss) == false) cout<<"ERROR: "<<ss<<" is not a legal number"<<endl;
        else{
            tot++;
            sum += y;
            //printf("y = %.4f\n",y);
        }
    }
    if(tot == 1)
        printf("The average of 1 number is %.2f\n",sum);
    else if(tot > 1)
        printf("The average of %d numbers is %.2f\n",tot,sum/(1.0*tot));
    else printf("The average of 0 numbers is Undefined\n");
    return 0;
}

