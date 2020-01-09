#include<bits/stdc++.h>
using namespace std;
int main()
{
	string str;
	getchar();
	getline(cin, str);
	int cnt = 0 ;
	int i = 0;
	int flag = 1;
	while(i<str.length())
	{
		if(str[i]!=' ')
		{
			if(flag == 1)
			{
				cnt++;
				flag = 0; // flag赋值之后要马上变成0！！！！ 
			}
			
		}else{
			flag = 1;
		}
		i++;
	}
	cout<<cnt<<endl;
	return 0;
}
