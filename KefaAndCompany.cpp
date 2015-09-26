#include<cstdio>
#include<set>
#include<map>
#include<vector>
#include<algorithm>
#include<iostream>
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

int n, d;
ll cnt[MAXN], res;

pair<int, int> B[MAXN];

int main()
{
  scanf("%d %d", &n, &d);
  REP(i, n)
  {
    int a, b;
    scanf("%d %d", &a, &b);
    B[i] = MP(a,b);
  }
  sort(B, B+n);
  
  cnt[0] = B[0].S;
  
  FOR(i, 1, n-1)
    cnt[i] = cnt[i-1] + B[i].S;
    
  
  int l = 0;
  int r = 0;
  
  res = cnt[0];
  
  while(l < n && r < n)
  {
    while(B[r].F - B[l].F >= d && l <= r)
      l++;
   
     if(l >= 1)
	res = max(res, cnt[r]-cnt[l-1]);
      else
	res = max(res, cnt[r]);
   
    
    if(B[r].F - B[l].F < d)
      r++;
    
      
  }
  cout << res << "\n";;
  
  return 0;
}