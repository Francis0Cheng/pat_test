#include<bits/stdc++.h>
//test_data +1.23400E-03
using namespace std;
int main()
{
	string str;
	cin>>str;
	if(str[0]=='-') cout<<"-";
	int E_pos = str.find("E");
	string Exp = str.substr(E_pos+1, str.length()-E_pos-1);
	string t = str.substr(1, str.length()-2-Exp.length());
//	cout<<Exp<<endl;
//	cout<<t<<endl;	
//	
	int n =  stoi(Exp);

	if(n<0)
	{
		cout<<"0.";
		for(int i=0;i<abs(n)-1;i++)
		{
			cout<<"0";
		}
		for(int i=0;i<str.length();i++)
		{
			if(t[i]!='.')
			{
				cout<<t[i];
			}
		}
		
	}else{
	//	cout<<t[0];
		cout<<t[0];
		int i,cnt;
		for(i=2,cnt=0;i<t.length()&&cnt<n;i++,cnt++)
		{
			cout<<t[i];
		}
		if(cnt<=n+1 && i==t.length()) 
		{
			for(;cnt<n;cnt++)
			cout<<"0";
		}else{
			cout<<".";
			for(;i<t.length();i++)
			cout<<t[i];
		}
		
	}
	
	return 0;
}
