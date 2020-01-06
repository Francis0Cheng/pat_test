#include<bits/stdc++.h>
#include<string>
using namespace std;
int main()
{

	int n;
	scanf("%d",&n);
	string str[n][2];
	int m[n];
	memset(m,0,sizeof(m));

	for(int i=0;i<n;i++)
	{
		cin>>str[i][0];
		cin>>str[i][1];
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<str[i][1].length();j++)
		{
			if(str[i][1][j]=='1')
			{
				str[i][1].replace(j,1,"@");
				m[i] = 1;
			}
			if(str[i][1][j]=='0')
			{
				str[i][1].replace(j,1,"%");
				m[i] = 1;
			}
			if(str[i][1][j]=='l')
			{
				str[i][1].replace(j,1,"L");
				m[i] = 1;
			}
			if(str[i][1][j]=='O')
			{
				str[i][1].replace(j,1,"o");
				m[i] = 1;
			}
		}
	}
	int sum = 0;
	for(int i=0;i<n;i++)
	{
		sum += m[i]; 
	} 
	if(sum==0&& n==1){
		printf("There is %d account and no account is modified\n", n);
	}else if(sum==0 && n>1)
		printf("There are %d accounts and no account is modified\n", n);
	else{
	
	cout<<sum<<endl; 
	for(int i=0;i<n;i++)
	{
		if(m[i]==1)
		cout<<str[i][0]<<" "<<str[i][1]<<endl;
	}
	}
	return 0;
} 
