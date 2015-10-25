#include<cstdio>
#include<algorithm>
#include<iostream>
#include<vector>
#include<set>
#include<map>
#include<cstring>
#include<cmath>
#include<list>
#include<queue>
#include<cstring>
using namespace std;

#define REP(I, N) for(int I = 0; I < (N); I++)
#define FOR(I, A, B) for(int I = (A); I <= (B); I++)
#define FORD(I, A, B) for(int I = (A); I >= (B); I--)
#define ll long long
#define F first
#define S second
#define MP make_pair
#define PB push_back

const int MOD = 1000000007;

int dp[105][3];

void add(int &a, int b)
{
  a += b;
  if(a >= MOD)
    a -= MOD;
}

int main()
{
  int n, k, d;
  scanf("%d %d %d", &n, &k, &d);

  dp[0][0] = 1;
  dp[0][1] = 0;
  
  for(int i = 1; i <= n; i++)
  {
    dp[i][0] = dp[i][1] = 0;
    
    for(int j = 1; j <= k; j++)
    {
      if(i < j)
	break;
      if(j < d)
      {
	add(dp[i][0], dp[i-j][0]);
	add(dp[i][1], dp[i-j][1]);
      }
      else
      {
	add(dp[i][1], dp[i-j][0]);
	add(dp[i][1], dp[i-j][1]);
      }
    }
  }
  printf("%d\n", dp[n][1]);
  
}