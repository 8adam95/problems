#include<cstdio>
#include<iostream>
#include<vector>
#include<set>
#include<map>
#include<queue>
#include<algorithm>
using namespace std;

#define REP(I, N) for(int I = 0; I < (N); I++)
#define FOR(I, A, B) for(int I = (A); I <= (B); I++)
#define FORD(I, A, B) for(int I = (A); I >= (B); I--)
#define ll long long
#define F first
#define S second
#define MP make_pair
#define PB push_back

vector<pair<int, int> > ans;

int main()
{
  int n, m, k;
  scanf("%d %d %d", &n, &m, &k);

  
  REP(i, n)
  {
    if(i%2)
      FORD(j, m-1, 0)
	ans.PB(MP(i, j));
    else
      REP(j, m)
	ans.PB(MP(i, j));
  }
  for(int i = 0; i+1 < k; i++)
    printf("2 %d %d %d %d\n", ans[2*i].first+1, ans[2*i].second+1, ans[i*2+1].first+1, ans[i*2+1].second+1);
  printf("%d", n*m-k*2+2);
  for(int i = k*2-2; i < n*m; i++)
    printf(" %d %d", ans[i].first+1, ans[i].second+1);

  printf("\n");
  return 0;
}