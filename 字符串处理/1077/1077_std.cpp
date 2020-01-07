#include<bits/stdc++.h>
//当找不到了之后要及时break！！！！ whlie语句和for语句中需不需要break！ 
using namespace std;
int main()
{
	string str[200];
	string ans = "";
	int n;
	scanf("%d",&n);
	getchar();
	for(int i=0;i<n;i++)
	{
		getline(cin, str[i]); 
	}	
	//reverse
	for(int i=0;i<n;i++)
	{
		reverse(str[i].begin(), str[i].end());
	}
	
	int min_len = 10000;
	for(int i=0;i<n;i++) 
	{ 
		if(str[i].length()<min_len)
		{
			min_len = str[i].length();
		}
	} 
	for(int i=0;i<min_len;i++)
	{
		int flag = 1;
		for(int j=0;j<n;j++)
		{
			if(str[j][i]!=str[1][i]) flag = 0;
		}
		if(flag == 1)
		{
			ans+= str[1][i];
		}else{
			break;
		}
	}
	if(ans=="")
	{
		cout<<"nai";
	}else{
		reverse(ans.begin(), ans.end());
		cout<<ans;
	}
	return 0;
}
