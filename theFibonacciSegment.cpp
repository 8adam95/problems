#include<cstdio>
#include<iostream>
#include<vector>
#include<set>
#include<algorithm>
#include<map>
#include<list>
#include<queue>
using namespace std;

#define REP(I, N) for(int I = 0; I < (N); I++)
#define FOR(I, A, B) for(int I = (A); I <= (B); I++)
#define FORD(I, A, B) for(int I = (A); I >= (B); I--)
#define ll long long
#define F first
#define S second
#define MP make_pair
#define PB push_back

const int MAXN = 100005;
ll a[MAXN];
int n;

int main()
{
  scanf("%d", &n);
  FOR(i, 1, n)
    cin >> a[i];
  
  int res = min(2, n);
  
  int pocz = 1;
  
  while(pocz <= n)
  {
    int i = pocz+2;
    while(a[i] == a[i-1] + a[i-2] && i <= n)
	i++;
    if(a[i] != a[i-1] + a[i-2] || i > n)
      res = max(res, i-pocz), pocz = i-1;
  }
  printf("%d\n", min(n,res));
    
  
  return 0;
}