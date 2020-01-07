#include<bits/stdc++.h>
#include<string>
#include<queue>
using namespace std;
int main()
{
	string str1, str2, str3, str4;
	string ans = "";
	string map[17] = {"MON", "TUE", "WED", "THU", "FRI", "SAT", "SUN"};
	string map2[24] = {"10", "11", "12", "13", "14", "15", "16", "17", "18", "19", "20", "21", "22", "23"};

	cin>>str1>>str2>>str3>>str4;
	int h,m,d;
	int i = 0;
	while(i<str1.length()&&i<str2.length())
	{
	
	
		if(str1[i]==str2[i] && (str1[i]>='A'&str1[i]<='G'))
		{
			d = str1[i] - 'A';
			ans+=(map[str1[i]-'A']+" ");
			break;
		}
		i++;
	}
	i++;
	bool fg = false;
	while(i<str1.length()&&i<str2.length())
	{
		if(str1[i]==str2[i])
		{
			if(isdigit(str1[i]))
			{
				fg = true;
				ans+=("0"+string(1,str1[i])+":");
				break;
			}else if(str1[i]>='A' && str1[i]<='N')
			{
				fg = true;
				ans+= (map2[str1[i]-'A']+":");
				break;
			}
		}
		i++;
	}
	if(fg == false){
		ans += "00";
	}
	i = 0;

	fg = false;
	while(i<str3.length()&&i<str4.length())
	{
		if(str3[i] == str4[i] && isalpha(str3[i]))
		{
			if(i<=9){
			fg = true;
			ans+=("0"+to_string(i));
			break;
			}
			else{
				fg = true;
				ans+=(to_string(i));
				break;
			}
			break;
		}
		i++;
	}
	if(fg == false) ans += "00";
	cout<<ans<<endl;
	return 0;
} 



