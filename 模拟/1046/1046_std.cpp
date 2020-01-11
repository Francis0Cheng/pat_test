	#include<bits/stdc++.h>
	using namespace std;
	int maxn = 100010;
	int main()
	{
		int n,m, temp_num;	 
		int sum =0;
		cin>>n;
		vector<int> dis(n+1);
		vector<int> res;
		for(int i=1;i<=n;i++)
		{
			cin>>temp_num;
			sum+=temp_num;
			dis[i] = sum;
		}
		cin>>m;
		for(int i=0;i<m;i++)
		{
			int ex1, ex2;
			cin>>ex1>>ex2;
			if(ex1>ex2) swap(ex1, ex2);
			int disRight = dis[ex2-1]-dis[ex1-1];
			int disLeft = sum-disRight;
			if(disRight<disLeft) res.push_back(disRight);
			else{
				res.push_back(disLeft);
			} 
		}
		for(int i=0;i<m;i++)cout<<res[i]<<endl;
	} 
