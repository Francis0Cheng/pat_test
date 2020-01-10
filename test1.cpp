#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a[3] = {1,2,3};
	vector<int> v;
	v.push_back(a[0]);
	a[0] = 4;
	cout<< v[0];
	return 0;
}
