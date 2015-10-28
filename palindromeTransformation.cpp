#include<cstdio>
#include<iostream>
#include<set>
#include<map>
#include<vector>
#include<algorithm>
#include<queue>
#include<list>
#include<cstring>
using namespace std;

int n, m;
char str[100010];

int work()
{
	int ans = 0, l, r;
	m = min(m, n-m+1);
	for(l = 1; l <= n && str[l] == str[n-l+1]; l++);
	if(l > n)
		return 0;

	for(r = n/2; str[r] == str[n-r+1]; r--);
	ans = min(abs(l-m), abs(r-m))+r-l;

	for(int i = m; i <= n; i++)
		if(str[i] != str[n-i+1])
		{
			ans += min(abs(str[i]-str[n-i+1]), 26-abs(str[i]-str[n-i+1]));
			str[i] = str[n-i+1];
		}

	return ans;
}

int main()
{
	scanf("%d %d %s", &n, &m, str+1);
	printf("%d\n", work());

	return 0;
}