#include<bits/stdc++.h>
using namespace std;
const int maxn = 10000;
int main()
{
	int n,m;
	int d[100001];
	cin>>n;
	for(int i=1;i<=n;i++) cin>>d[i];
	cin>>m;
	int ex1, ex2;
	vector<int> res;
	for(int i=0;i<m;i++) 
	{
		cin>>ex1>>ex2;
		// ex1ÊÇÐ¡µÄ 
		if(ex1>ex2)
		{
			int temp = ex1;
			ex1 = ex2;
			ex2 = temp;
		} 
		int iter1 = ex1 ;
		int iter2 = ex1 - 1  ;
		int distance1 = 0;
		while(iter1!=ex2)
		{
			distance1 += d[iter1];
		
			if(iter1>n) 
			{
				iter1 = 1;
			}
			else{
				iter1++;
			}
		}
		int distance2 = 0;
		while(iter2!=ex2)
		{
			//if(i==2) cout<<iter2<<"Test"<<endl;
			if(iter2<0)
			{
				distance2 += d[0];
				iter2 = n;
				continue; 
			}
			else{
				distance2 += d[iter2];
				iter2--;
			}
			
		}
		distance2+=d[iter2];
		//cout<<distance2<<"test"<<endl;
		if(distance1<distance2)
		{
			res.push_back(distance1);
		}else{
			//cout<<distance2;
			res.push_back(distance2);
		}
	}
	for(int i=0;i<m;i++)
	{
		cout<<res[i]<<endl;
	}
  
} 
