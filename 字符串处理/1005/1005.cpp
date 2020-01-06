#include<bits/stdc++.h>
#include<string>
using namespace std;
int main()
{
	int n;
	string input;
	cin>>input;
	int sum = 0;
	for(int i=0;i<input.length();i++)
	{
		sum += input[i]-'0';
	}
	string str = to_string(sum);
	string map[10] = {"zero","one", "two", "three", "four","five", "six", "seven", "eight", "nine"}; // зЂвт0! 
	for(int i=0;i<str.length();i++)
	{
		cout<<map[str[i]-'0'];
		if(i!=str.length()-1){
			cout<<" ";
		}	
	} 
	return 0; 
} 


