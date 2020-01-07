#include<bits/stdc++.h>
#include<string>

//test_data
// +1.23400E-03
// +1.1230E+03
using namespace std;
int main()
{
	string s;
	cin>>s;
	int i=0;
	while(s[i]!='E')i++;
	string t = s.substr(1,i-1);

	int n = stoi(s.substr(i+1));
	if(s[0]=='-') cout<<"-";
	if(n<0)
	{
		cout<<"0.";
		for(int j=0;j<abs(n)-1;j++) cout<<"0";
		for(int j=0;j<t.length();j++)
		{
			if(t[j]!='.')cout<<t[j];
		}
	}else{
	
	
		cout<<t[0];
		int flag = 1; 
		for(int i=2;i<t.length();i++)
		{
			if(n)
			{
				cout<<t[i];
				n--;
			}else{
				if(flag == 1 && i!=t.length())  //i!=length!!! 
				{
					cout<<".";
					cout<<t[i];
					flag = 0;
				}else{
					cout<<t[i];
				}
			}
		}
		while(n)
		{
			cout<<"0";
			n--;
		}

	} 
	return 0;
} 
