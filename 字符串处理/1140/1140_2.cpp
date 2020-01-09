#include<bits/stdc++.h>
#include<string> 
using namespace std;

int main()
{
	string d;
	int n;
	cin>>d>>n;
	string str = d;	
	n--;
	while(n)
	{
		string temp = "";
		int num;
		int i,j;
		for(i=0;i<str.length();i++)
		{
			num = 0;
			temp += str[i];
			for(j=i;j<str.length();j++)
			{
				if(str[i] == str[j]) {
					num++;
				}
				else{
					
					break;
				}
				
			}
				i = j-1;
				temp += to_string(num);
		}
		str = temp;
		
		n--;
	}

	cout<<str;
	return 0;
}
