#include<bits/stdc++.h>
#include<map> 
#define MIN_VALUE 1e-8
using namespace std;
int main()
{
	double an[1010], bn[1010],cn[1010];
	for(int i=0;i<1010;i++)
	{
		an[i] = 0.0;
		cn[i] = 0.0;
		bn[i] = 0.0;
	}
	int k1, k2;
	int n1, n2;
	cin>>k1;
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
	for(int i=0;i<1010;i++)
	{
		cn[i] = an[i]+bn[i];
	}
	int cnt = 0;
	int min = 1009;
	for(int i=1009;i>=0;i--)
	{
		if(abs(cn[i])>MIN_VALUE) {
		cnt++;
		min = i;
	}
	}
	
	if(cnt == 0)
	{
		cout<<"0";
		return 0;
	}
	cout<<cnt<<" ";
	for(int i=1009;i>=min;i--)
	{
		if(abs(cn[i]!=0)) {  
			
			cout<<i<<" "; 
			if(i!=min)
			printf("%.1f ", cn[i]);
			else{
				printf("%.1f", cn[i]);
			}
		}
	}
	return 0;


} 
