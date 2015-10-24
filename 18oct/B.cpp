#include<cstdio>
#include<iostream>
#include<vector>
#include<set>
#include<map>
#include<algorithm>
#include<queue>
#include<list>
#include<cstring>
#include<cmath>
using namespace std;

#define REP(I, N) for(int I = 0; I < (N); I++)
#define FOR(I, A, B) for(int I = (A); I <= (B); I++)
#define FORD(I, A, B) for(int I = (A); I >= (B); I--)
#define ll long long
#define F first
#define S second
#define MP make_pair
#define PB push_back

const int MAXN = 4004;

int n, v[MAXN], d[MAXN], p[MAXN];

bool dead[MAXN];

vector<int> V;
queue<int> Q;

int main()
{
  scanf("%d", &n);
  
  FOR(i, 1, n)
    scanf("%d %d %d", &v[i], &d[i], &p[i]); 

  FOR(i, 1, n)
    if(!dead[i])
    {
      V.PB(i);
      for(int j = i+1; j <= n && v[i] > 0; j++)
	if(!dead[j])
	{
	  p[j] -= v[i];
	  v[i]--;
	  if(p[j] < 0 && dead[j] == 0)
	  {
	    Q.push(j);
	    dead[j] = true;
	  }
	}
	while(!Q.empty())
	{
	  int u = Q.front();
	  Q.pop();
	  
	  for(int j = u+1; j <= n; j++)
	  {
	    p[j] -= d[u];
	    if(p[j] < 0 && dead[j] == 0)
	    {
	      Q.push(j);
	      dead[j] = 1;
	    }
	  }
	}
      }
  
  printf("%d\n", (int)V.size());
  REP(i, (int)V.size())
    printf("%d ", (int)V[i]);
  printf("\n");
    
  return 0;
}