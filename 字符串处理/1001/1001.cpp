#include<iostream>
#include<string>
using namespace std;

int main()
{
	int a,b,sum;
	scanf("%d%d",&a,&b);
	sum = a+b;
	string str_num = to_string(sum);

	if(str_num[0]=='-') {
		str_num.erase(str_num.begin()) ;
		cout<<"-";
	}
	int len = str_num.length();
	for(int i=0;i<len;i++)
	{
		if(((len-1)-i)%3==2 && i!=0 ) cout<<',';
		cout<<str_num[i]; 
	} 
		
		cout<<endl;
		
	
	return 0;	
} 
