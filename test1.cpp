#include <iostream>
using namespace std;
int main()
{
	double a[1000] = {0.0};
	int flag = 0;
	for(int i=0;i<1000;i++)
	if(a[i]!=0) 
	{
	flag = 1;
	cout<<a[i]<<endl;
	};
	return 0;
}
