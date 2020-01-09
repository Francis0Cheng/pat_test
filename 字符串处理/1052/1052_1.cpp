#include<bits/stdc++.h>

// (int)s.length() https://blog.csdn.net/lonyw/article/details/75268172ÀàĞÍ×ª»» 
using namespace std;
bool isPrime(int x)
{
	if(x==0||x==1) return false;
	for(int i=2;i*i<=x;i++)
	{
		if(x%i==0) return false; 
	}
	return true; 
}
int main()
{
	int l,k;
	string s;
	cin>>l>>k>>s;
	//int len = s.length();
	for(int i=0;i<=s.length()-k;i++)
	{
		string temp = s.substr(i,k);
		int x = stoi(temp);
		if(isPrime(x))
		{
			cout<<temp;
			return 0;
		}
	}
	cout<<"404\n";
	return 0;	
} 
