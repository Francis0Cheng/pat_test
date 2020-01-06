#include<bits/stdc++.h>
#include<string>
#include<vector>
using namespace std;
int main(){
	int n;
	bool flag ;
	string name, pwd;
	vector<string> ans;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		flag = false;
		cin>>name>>pwd;
		for(int j=0;j<pwd.length();j++)
		{
			// do_switch
			switch(pwd[j]){
				case 'O':{
					pwd[j] = 'o';
					flag = true;
					break;
				}
				case 'l':{
					pwd[j] = 'L';
					flag = true;
					break;
				}
				case '0':{
					pwd[j] = '%';
					flag = true;
					break;
				}
				case '1':{
					pwd[j] = '@';
					flag = true;
					break;
				}
				default:{
					break;
				}
			}
		
				
		}	
			if(flag)
			{
				ans.push_back(name+" "+pwd);
			}
		} 
		if(ans.size()==0){
			if(n==1)
			{
				printf("There is 1 account and no account is modified");
			}else{
				printf("There are %d accounts and no account is modified", n);
			}
		}else{
			cout<<ans.size()<<endl; 
			for(int i=0;i<ans.size();i++)
			{
				cout<<ans[i]<<endl;
			}
		}
	
} 
