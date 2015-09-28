#include<cstdio>
#include<cstring>
#include<iostream>
#include<vector>
#include<algorithm>
#include<map>
#include<set>
#include<cmath>
#include<list>
using namespace std;

#define REP(I, N) for(int I = 0; I < (N); I++)
#define FOR(I, A, B) for(int I = (A); I <= (B); I++)
#define FORD(I, A, B) for(int I = (A); I >= (B); I--)
#define ll long long
#define F first
#define S second
#define MP make_pair
#define PB push_back

const int MAXN = 100006;

int n, k, a[MAXN];
pair<int, int> B[MAXN];

int main()
{
  scanf("%d %d", &n, &k);
  REP(i, n)
  {
    scanf("%d", &a[i]);
    B[i] = MP(10-(a[i]%10), i);
  }
 
  sort(B, B+n);
   
  int l = 0;
  bool decr = false;
  while(k)
  {
    if(decr)
    {
      REP(i, n)
      {
	int hel = min(k, 100-a[i]);
	k -= hel;
	a[i] += hel;
	if(k <= 0)
	  break;
      }
      break;
    }
    else
    {
      int hel = min(k, B[l].F);
      if(a[B[l].S] + hel >= 100)
	hel = 100-a[B[l].S];
      k -= hel;
      a[B[l].S] += hel;
      l++;
      
      if(decr && l > n-1)
	break;
      
      if(l > n-1)
	l = 0, decr = true;
    }
  }
  int res = 0;
  REP(i, n)
    res += ceil(a[i]/10);
    
  printf("%d\n", res);


  return 0;
}