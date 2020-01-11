#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	long long a,b,c, sum;
	for(int i=1;i<=n;i++){
		scanf("%lld %lld %lld", &a, &b, &c);
		sum = a+b;
		if(a>0 && b>0 && sum<=0)
		{
			printf("Case #%d: true\n", i);
			continue;
		}else if(a<0&&b<0&&sum>=0){
			printf("Case #%d: false\n", i);
			continue;
		}else if(sum>c)
		{
			printf("Case #%d: true\n", i);
			continue;
		}else{
			printf("Case #%d: false\n", i);
			continue;
		}
	}
	return 0;
}
