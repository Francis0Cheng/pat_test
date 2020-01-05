#include<bits/stdc++.h>
using namespace std;

int main()
{
	int a, b, sum;
	scanf("%d%d", &a,&b);
	sum = a+b;
	string str_num = to_string(sum); 
	int len = str_num.size();
	for(int i=0;i<len;i++)
	{
		if(str_num[i]=='-')
		{
			cout<<'-';
			continue;	
		}	
		cout<<str_num[i];
		if(i!=len-1 && (len-1-i)%3==0)
		{
			cout<<",";
		 } 
		
	} 
	cout<<endl;
	return 0;
}
