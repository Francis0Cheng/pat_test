#include<bits/stdc++.h>
using namespace std;
const int card_num = 55; // 从1开始的所以设置成55 
int main()
{
	int n;
	cin>>n;
	int order[card_num];
	int order2[card_num];
	int scan_order[card_num];
	for(int i=1;i<=54;i++)
	{
		order[i] = i;	
	    order2[i] = i;  
	}	
	for(int i=1;i<card_num;i++) cin>>scan_order[i];
	for(int i=0;i<n;i++)
	{
		for(int j=1;j<card_num;j++)
		{
			order2[scan_order[j]] = order[j];  
		}
		for(int j=1;j<card_num;j++)
		{
			order[j] = order2[j];
		}
	}

	string str[55];
	string alpha[5]  = {"","S", "H", "C", "D"};
	for(int i=1;i<=4;i++) 
	for(int j=1;j<=13;j++) str[(i-1)*13+j] += (alpha[i]+to_string(j));
	str[53] = "J1"; str[54] = "J2";
	for(int i=1;i<=54;i++)
	{
	  cout<<str[order2[i]];
	  if(i!=54)
	  cout<<" "; 
	}
	return 0;	
} 
