#include<bits/stdc++.h>
#include<string>
using namespace std;
int main()
{
	string str1, str2, str3, str4;
	string ans = "";
	string map[7] = {"MON", "TUE", "WED","THU", "FRI","SAT","SUN"};
	string map2[14] = {"10", "11", "12", "13", "14", "15", "16", "17", "18", "19", "20", "21", "22", "23"};

	cin>>str1>>str2>>str3>>str4;

	int i = 0;
	while(i<str1.length()&&i<str2.length())
	{
		cout<<"ok"<<endl;
		if(str1[i]==str2[i] && (str1[i]>='A'&&str1[i]<='G'));
		{
			ans+=(map[str1[i]-'A']+" ");
			cout<<"bp1"<<endl;
			break;
			cout<<i<<endl;
		}
		i++;
		cout<<i<<endl;
	}
	i++;
	while(i<str1.length()&&i<str2.length())
	{
		if(str1[i]==str2[i])
		{
			if(isdigit(str1[i]))
			{
				ans+=("0"+string(1,str1[1])+":");
				break;
			}else if(str1[i]>='A' && str1[i]<='N')
			{
				ans+= (map2[str1[i]-'A'+10]+":");
				break;
			}
		}
		i++;
	}
	i = 0;

	while(i<str3.length()&&i<str4.length())
	{
		if(str3[i] == str4[i] && isalpha(str3[i]))
		{
			ans+=to_string(i);
			break;
		}
		i++;
	}
	cout<<ans<<endl;
	return 0;
} 



