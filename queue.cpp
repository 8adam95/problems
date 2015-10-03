#include<cstdio>
#include<iostream>
#include<vector>
#include<set>
#include<map>
#include<algorithm>
#include<cstring>
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
int n, cnt, a[MAXN], tab[MAXN];

int main()
{
  scanf("%d", &n);
  
  FOR(i, 1, n)
    scanf("%d", &a[i]);
  
  sort(a+1, a+n+1);
  FOR(i, 1, n)
  {
      if(tab[i-1] <= a[i])
	cnt++, tab[i] = tab[i-1]+a[i];
      else
	tab[i] = tab[i-1];
	
    
  }
  printf("%d\n", cnt);
  
  return 0;
}