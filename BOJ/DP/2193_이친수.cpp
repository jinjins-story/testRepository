#include<cstdio>

using namespace std;

int main()
{
	int n;
	long long dp[91] = { 0, };

	scanf("%d", &n);

	dp[1] = 1;
	dp[2] = 1;
	for (int i = 3; i <= n; i++)
		dp[i] = dp[i - 2] + dp[i - 1];

	printf("%lld", dp[n]);

	return 0;
}