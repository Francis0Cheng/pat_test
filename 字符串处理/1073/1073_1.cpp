//仍然有问题  5/7pass 
#include<bits/stdc++.h>
#include<string>
using namespace std;
int main()
{
	string s;
	cin>>s;
	int flag = 1; // 后缀 1表示是正，-1为负
	if(s.find("-",1)==string::npos)
	{
		flag = 1;
	}else{
		flag = -1;
	} 
	
	int E_pos = s.find("E");
	if(E_pos==string::npos) {
		cout<<s<<endl;
		return 0;
	}
	string str_exp = s.substr(E_pos+2, s.length()-E_pos-2);
	int exp = stoi(str_exp);
	string s_ = s.substr(1, s.length()-3-str_exp.length());
	int dot_pos = s_.find(".");
	if(dot_pos == string::npos) dot_pos = s_.length();
	while(exp)
	{
		if(flag == 1)
		{
			if(dot_pos < s_.length()-1)
			{
				s_.insert(dot_pos+2, ".");
				s_.erase(dot_pos, 1);
				dot_pos++;
				
			}else{
				s_.erase(dot_pos, 1);
				dot_pos++;
				s_.insert(s_.length(), "0");
				
			}
		}else{
			if(dot_pos >1)
			{
				s_.insert(dot_pos-1, ".");
				s_.erase(dot_pos, 1);
				dot_pos--;
			}else{
				s_.erase(dot_pos, 1);
				s_.insert(0,"0");
				s_.insert(1, ".");
				
			}
		}
		exp--;
	}
	if(s[0]== '-')
	cout<<s[0]+s_<<endl;
	else{
		cout<<s_<<endl; 
	}
	return 0;
} 
