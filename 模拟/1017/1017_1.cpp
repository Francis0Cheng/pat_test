#include<bits/stdc++.h>
#include<vector>
using namespace std;
const int start_time = 8*3600;
const int end_time = 17*3600;
struct node{
	int arrive;
	int process;
}tempcus;
bool cmp(node a, node b)
{
	return a.arrive<b.arrive;
}
int main()
{
 	int n,k;
 	cin>>n>>k;
 	int h,m,s;
	vector<node> customers;
	int come_time, process_time;
 	for(int i=0;i<n;i++)
 	{
 		scanf("%d:%d:%d %d", &h, &m, &s, &process_time);
 		come_time = h*3600+m*60+s;
 		if(come_time>end_time) continue;
 		tempcus = {come_time, process_time*60};
 		customers.push_back(tempcus);
	}
	sort(customers.begin(), customers.end(), cmp);
	vector<int> windows;

	for(int i=0;i<k;i++) windows.push_back(start_time);
	int cnt = 0; double res = 0.0;
	int i,j, temp_j;
	int min_time;
	for(i=0;i<customers.size();i++)
	{
		//找到时间最小的window
		min_time = windows[0];
		temp_j = 0;  
		for(j=0;j<windows.size();j++)
		{
			if(windows[j]<min_time)
			{
				temp_j = j;
				min_time = windows[j];
			}
		}
		if(min_time>customers[i].arrive)
		{
			res+=(windows[temp_j]-customers[i].arrive);
			windows[temp_j] += customers[i].process;
			cnt ++;
		}else{
			
			windows[temp_j] = customers[i].arrive+customers[i].process;
			cnt ++;
		}
		
	}

	if(customers.size() == 0)
	{
		printf("0.0");
	}else{
		printf("%.1f", res/60.0/(double)customers.size());
	}
	
}
