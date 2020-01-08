// stod()º¯Êý 

#include<bits/stdc++.h>
#include<string>
#include<vector>
#include<cstring>
 
using namespace std;
vector<string> vc;
bool Legal(string s)
{
	int dot_num = 0;
	if(s[0]=='-') s.erase(0,1);
	for(int i=0;i<s.length();i++)
	{
		if(!(s[i]<='9' && s[i]>='0') && s[i]!='.')
		return false;
		if(s[i]=='.') dot_num ++;
	}
	if(dot_num >1) return false;
	return true;
}
bool precision(string s)
{
	if(s.find(".")==string::npos) return true;
	string xiaoshu = s.substr(s.find(".")+1, s.length()-s.find('.')-1);
	if(xiaoshu.length()>2) return false;
	return true;
}
int main()
{	
	int n;
	cin>>n;
	vector<string> ilegal;
	double double_num[n];
	bool isLegal[n];
	for(int i=0;i<n;i++) 
	{
		double_num[i] = 0;
		isLegal[i] = true;
	} 
	string str[n];
	for(int i=0;i<n;i++)
	cin>>str[i];
	for(int i=0;i<n;i++)
	{
		
		if(Legal(str[i]))
		{
			double_num[i] = stod(str[i]);
			if(double_num[i]<-1000||double_num[i]>1000) 
			{
				double_num[i] = 0;
				ilegal.push_back(str[i]);
				isLegal[i] = false;
				continue;
			}
			if(precision(str[i])== false)
			{
				double_num[i] = 0; 
				ilegal.push_back(str[i]);
				isLegal[i] = false;
				continue;
			}
		}else{
			ilegal.push_back(str[i]);
			isLegal[i] = false;
			continue;
		}
	}
	int legalNum = 0;
	for(int i=0;i<n;i++) 
	{
		if(isLegal[i]==true) legalNum++;
	}
	for(int i=0;i<ilegal.size();i++)
	{
		printf("ERROR: %s is not a legal number\n", ilegal[i].c_str());
	}
	double average = 0;
	if(legalNum == 0)
	{
		printf("The average of 0 numbers is Undefined\n");
		return 0;
	}
	for(int i=0;i<n;i++)
	{
		if(isLegal[i]== true) average += double_num[i];
	}
	average = average/legalNum;
	if(legalNum == 1 )
	{
		printf("The average of 1 number is %.2f\n", average); 
	}else{
		printf("The average of %d numbers is %.2f\n", legalNum, average); 
	}
	
	return 0;
}
