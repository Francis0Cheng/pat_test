/*
printf格式化输出%02d
while循环便利数组 
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s1, s2, s3, s4;
	cin>>s1>>s2>>s3>>s4;
	int i = 0;
	int week_num;
	int h,m;
	string week[7] = {"MON", "TUE", "WED", "THU", "FRI", "SAT", "SUN"};
	while(i<s1.length()&&i<s2.length())
	{
		if(s1[i] == s2[i] && s1[i]>='A' && s1[i]<='G')
		{

			week_num = s1[i]-'A'; 
			break;
		}
		i++;
	}
	i++;
	while(i<s1.length()&&i<s2.length())
	{
		if(s1[i]==s2[i])
		{
			if(isdigit(s1[i]))
			{
				h = s1[i] - '0';
				break;
			}else if(s1[i]>='A' && s1[i]<='N'){
				h = s1[i] - 'A' +10;
				break;
			}
		}
		i++;
	}
	i = 0;
	while(i<s3.length()&&i<s4.length())
	{
		if(s3[i] == s4[i] && isalpha(s3[i]))
		{
			m = i;
			break;
		}
		i++;
	}
	printf("%s %02d:%02d\n", week[week_num].c_str(), h, m);
	return 0; 
}
