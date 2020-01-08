#include<bits/stdc++.h>
#include<string>
using namespace std;
int main()
{
	string str;
	cin>>str;

	string ans = "";
	int  yi, wan, qian;
	string ch_num[10]  = {"","yi", "er","san", "si", "wu","liu", "qi", "ba", "jiu"};
	if(str[0]=='-')
	{
		ans.insert(0, "Fu  ");
		str.erase(0, 1);
	}
	int len = str.length();
	if(len==9)
	{
		yi = str[0] - '0';
		wan = stoi(str.substr(1,4));
		qian = stoi(str.substr(5, 4));
	}else if(len<=8 && len>4  ){
		yi = 0;
		wan = stoi(str.substr(0, len-4));
		qian = stoi(str.substr(len-4, 4));
	}else if(len<=4){
		yi = 0;
		wan = 0;
		qian = stoi(str);
	}
	cout<<yi<<" "<<wan<<" "<<qian;
	if(yi!=0)
	{
		cout<<ch_num[yi]<<"Yi";
	}
	if(wan!=0){
		if(yi!=0&str[1]!='0')
		{
			if()
		}
	}
	return 0;
}
 
