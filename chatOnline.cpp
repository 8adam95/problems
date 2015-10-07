#include<cstdio>
#include<iostream>
#include<vector>
#include<map>
#include<set>
#include<list>
#include<cmath>
#include<algorithm>
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


int p, q, l, r, cnt;
bool first[1000005], second[1000005], vis[1000005];

int main()
{
  scanf("%d %d %d %d", &p, &q, &l, &r);
  REP(i, p)
  {
    int a, b;
    scanf("%d %d", &a, &b);
    FOR(j, a, b-1)
      first[j] = true;
  }
  REP(i, q)
  {
    int a, b;
    scanf("%d %d", &a, &b);
    FOR(j, a, b-1)
      second[j] = true;
  }
  
  FOR(i, 0, 1000)
    FOR(j, 0, 1000)
	if(first[i] && second[j])
	  vis[i-j] = vis[i-j-1] = true;
  FOR(i, l, r)
    cnt += vis[i]|vis[i-1];
  
  printf("%d\n", cnt);
    
  
  return 0;
}