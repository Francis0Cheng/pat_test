#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m;
	vector<int> res;
	cin>>n;
	int dis[100010];
	int ex1, ex2;
	for(int i=1;i<=n;i++) cin>>dis[i];
	int disRight;
	cin>>m;
	for(int i=0;i<m;i++)
	{
		cin>>ex1>>ex2;
		if(ex1>ex2) swap(ex1, ex2);
		int iter1 = ex1;
		int iter2 = ex1;
		disRight= 0;
		while(iter1!=ex2)
		{
			
			if(iter1==n)
			{
			  disRight += dis[n];
			  iter1 = 1;
	
			}else{
			  disRight += dis[iter1];
			  iter1++;
			}
			
		} 
		int disLeft = 0;
		while(iter2!=iter1)
		{
			if(iter2 == 1)
			{
				iter2 = n;
				disLeft += dis[iter2];
				
			}else{
				disLeft += dis[--iter2]; 
			}
		}
		if(disLeft<disRight)
		{
			res.push_back(disLeft);
		}else{
			res.push_back(disRight); 
		}
	
	}
	for(int i=0;i<res.size();i++) cout<<res[i]<<endl;
	return 0;
}
