#include<cstdio>
#include<iostream>
#include<vector>
#include<set>
#include<map>
#include<algorithm>
#include<list>
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

int n, x[6], y[6];
pair<int, int> B[6];

int main()
{
  scanf("%d", &n);
  
  FOR(i, 1, n)
  {
    scanf("%d %d", &x[i], &y[i]);
    B[i] = MP(x[i], y[i]);
  }
    
  if(n == 1)
    return printf("-1\n"), 0;
  
  if(n == 2)
  {
    if(x[1] != x[2] && y[1] != y[2])
      return printf("%d\n", abs(x[2]-x[1])*abs(y[2]-y[1])), 0;
    
    return printf("-1\n"), 0;  
  }
  
  sort(B+1, B+n+1);
  
  
  if(n == 3)
  {
    if(x[1] == x[2])
    {
      if(y[3] == y[1])
	return printf("%d\n", abs(x[3]-x[1])*abs(y[3]-y[2])), 0;
      if(y[3] == y[2])
	return printf("%d\n", abs(x[3]-x[1])*abs(y[3]-y[1])), 0;
      return printf("-1\n"), 0;
    }
    if(x[2] == x[3])
    {
      if(y[3] == y[1])
	return printf("%d\n", abs(x[2]-x[1])*abs(y[3]-y[2])), 0;
      if(y[2] == y[1])
	return printf("%d\n", abs(x[2]-x[1])*abs(y[3]-y[1])), 0;
      return printf("-1\n"), 0;
    }
    return printf("-1\n"), 0;
  }
  
  if(n == 4)
  {
    if(x[1] == x[2] && y[3] == y[1] && y[4] == y[2] && x[3] == x[4])
      return printf("%d\n", abs(x[3]-x[1])*abs(y[4]-y[3])), 0;
    return printf("-1\n"), 0;
  }
  return printf("-1\n"), 0;
    
  
  return 0;
} 