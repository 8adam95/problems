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

const int MAXN = 500*500+3;

int n, a[MAXN];
map<int, int> mapa;
vector<int> v;


int main()
{
  scanf("%d", &n);
  REP(i, n*n)
    scanf("%d", &a[i]);
    
  sort(a, a+(n*n));
  FORD(i, (n*n)-1, 0)
  {
    if(mapa[a[i]] == 0)
    {
      for(int j = 0; j < v.size(); j++)
	mapa[__gcd(a[i], v[j])] += 2;
      v.PB(a[i]);
    }
    else
      mapa[a[i]]--;
  }
  for(int i = 0; i < v.size(); i++)
    printf("%d ", v[i]);
  
  return 0;
}