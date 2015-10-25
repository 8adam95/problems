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

int n, m, a[3000005], k, t;

int main()
{
  scanf("%d %d", &n, &m);
  
  if(n-1 <= m && m <= 2*(n+1))
  {
    if(m == n-1)
    {
      a[0] = -1;
      a[m+1] = -1;
      t = n-1;
    }
    else if(n == m)
      a[m+1] = -1, t = n;
    else
      t = n+1;
    k = m%t;
    if(k == 0 && m != t)
      k = n+1;
    if(a[0] == -1)
      printf("0");
    for(int i = 1; i <= n; i++)
    {
      if(a[i] != -1)
      {
	if(k > 0)
	  cout << "110";
	else
	  cout << "10";
	k--;
      }
    }
    if(a[m+1] != -1)
    {
      if(k > 0)
	cout << "11\n";
      else
	cout << "1\n";
    }
    
    
    
  }
    
    
    
  else
    printf("-1\n");
    
    
  
  
  return 0;
}