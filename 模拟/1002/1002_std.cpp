#include <iostream>
using namespace std;
int main()
{
	float c[1001] = {0};
	int m, n, t;
	float num;
	scanf("%d", &m);
	for (int i = 0; i < m; i++)
	{
		scanf("%d%f", &t, &num);
		c[t] += num;
	}
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d%f", &t, &num);
		c[t] += num;
	}
	int cnt = 0;
	for (int i = 0; i < 1001; i++)
	{
		if (c[i] != 0)
			cnt++;
	}
	printf("%d", cnt); // �����ʽ 
	for (int i = 1000; i >= 0; i--)
	{
		if (c[i] != 0.0)
			printf(" %d %.1f", i, c[i]); //no extra space �͵�������  ��ͷ�ǿո��ԭ���Ƿ�ֹֻ��0���� 
	}
	return 0;
}

