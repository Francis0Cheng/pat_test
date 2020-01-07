#include<bits/stdc++.h>
#include<string>
#include<stdlib.h>
#include<cstdio>
#include<string.h>

using namespace std;
string str[110];
int n;
int len[110];
bool if_all_equal(int back)
{
	bool ans = true;
	for(int i=0;i<n;i++)	
	{
		 if(str[i][len[i]-back]!=str[0][len[0]-back]) 
		 {
		 	ans = false;
		 }
	}
	return ans;
} 
bool if_not_outbound(int back)
{
	bool ans = true;
	for(int i=0;i<n;i++)
	{
		if(len[i]-back<0)
		{
			ans = false;
		}
	}
	return ans;
}
int main()
{

	scanf("%d",&n);
	
	getchar();
	for(int i=0;i<n;i++)
	{
		//gets(str[i]);
		getline(cin, str[i]);
	}
	string ans = "";
	int flag = 0; // 1->сп 0->ц╩сп 
	
	for(int i=0;i<n;i++)
	{
		len[i] = str[i].length();
		if(len[i]==0)
		{	
			
			cout<<"nai"<<endl;
			return 0;
		}
	}

	int back=1;
	while(if_not_outbound(back))
	{
		if(if_all_equal(back)){
			ans.insert(0,string(1,str[0][len[0]-back])) ;
		}else{
			break;
		}
		back++;
	} 
	if(ans == "")
	{
		cout<<"nai"<<endl;
	}else{
		cout<<ans<<endl;
	}
	 return 0;
}
