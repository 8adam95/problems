//http://codeforces.com/problemset/problem/479/C

#include<cstdio>
#include<iostream>
#include<vector>
#include<set>
#include<algorithm>
#include<cstring>
#include<map>
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

const int MAXN = 5005;

int n;
pair<int, int> C[MAXN];

int main()
{
  scanf("%d", &n);
  REP(i, n)
  {
    int a, b;
    scanf("%d %d", &a, &b);
    C[i] = MP(a, b);
  }
  
  sort(C, C+n);
  
  int res = -1;
  
  REP(i, n)
  {
    if(res <= C[i].S)
      res = C[i].S;
    else
      res = C[i].F;
  }
  printf("%d\n", res);
  
  return 0;
}