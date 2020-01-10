#include<bits/stdc++.h>
using namespace std;
int main()
{
	double an[2010], bn[2010], cn[2010];
	for(int i=0;i<2010;i++) 
	{
		an[i] = 0;
		bn[i] = 0;
		cn[i] = 0;
	}
	
	//ÊäÈë 
	int k1, k2, n1, n2;
	cin>>k1;
	int cnt = 0;
	for(int i=0;i<k1;i++)
	{
		cin>>n1;
		cin>>an[n1];
	}
	cin>>k2;
	for(int i=0;i<k2;i++)
	{
		cin>>n2;
		cin>>bn[n2];

	}

	for(int i=0;i<1001;i++)
	{
		for(int j=0;j<1001;j++)
		{
			cn[i+j] += an[i]*bn[j]; 
		}
	}
	for(int i=0;i<2010;i++)
	{
		if(cn[i]!=0) cnt++;
	}
	cout<<cnt;
	for(int i=2009;i>=0;i--)
	{
		if(cn[i]!=0)
		{
			printf(" %d %.1f", i, cn[i]);
		}
	}
	return 0;
} 
