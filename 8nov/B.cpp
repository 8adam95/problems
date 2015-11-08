#include<cstdio>
#include<iostream>
#include<vector>
#include<set>
#include<map>
#include<algorithm>
#include<queue>
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

const int MAXN = 100005;

int n, k, a[MAXN], b[MAXN], res[MAXN];

int len(int a) 
{
  int leng = 1;
  while(a >= 10)
    a /= 10, leng++;
  return leng;
}

int getFirst(int a)
{
  while(a >= 10)
    a /= 10;
  return a;
}

int main()
{  
  scanf("%d %d", &n, &k);
  FOR(i, 1, n/k)
    scanf("%d", &a[i]);
  FOR(i, 1, n/k)
    scanf("%d", &b[i]);
    
  
  FOR(i, 1, n/k)
  {
    int c = 0;
    while(len(c) < k)
    {
      if(b[i] != 0)
	res[i]++;
      c += a[i];
      cout << c << "\n";
    } 
    
    
    while(len(c) == k)
    {
      if(getFirst(c) != b[i])
	res[i]++;
      c += a[i];
    } 
  }
  
  printf("ok\n");
  
  ll result = res[1];
  FOR(i, 2, n/k)
  {
    result *= (ll)(res[i]);
    result %= 1000000007;
  }
  int wyn = (int)result;
  
  printf("%d\n", wyn);

  return 0;
}
