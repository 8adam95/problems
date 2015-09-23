//http://codeforces.com/problemset/problem/507/A

#include<cstdio>
#include<iostream>
#include<vector>
#include<set>
#include<map>
#include<queue>
#include<algorithm>
using namespace std;

#define REP(I, N) for(int I = 0; I < (N); I++)
#define FOR(I, A, B) for(int I = (A); I <= (B); I++)
#define FORD(I, A, B) for(int I = (A); I >= (B); I--)
#define ll long long
#define F first
#define S second
#define MP make_pair
#define PB push_back

int n, k, a;
pair<int, int> B[105];

int main()
{
  scanf("%d %d", &n, &k);
  REP(i, n)
    scanf("%d", &a), B[i] = MP(a, i+1);
    
  sort(B, B+n);
  
  int res = 0;
  
  REP(i, n)
    if(k - B[i].F >= 0)
      k -= B[i].F, res++;
  
  printf("%d\n", res);
  REP(i, res)
  {
    printf("%d ", B[i].S);
  }
  
  return 0;
}