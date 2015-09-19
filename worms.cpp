//http://codeforces.com/problemset/problem/474/B

#include<cstdio>
#include<iostream>
#include<algorithm>
#include<vector>
#include<set>
#include<map>
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

const int MAXN = 1000006;

int cnt = 1, begin = 1;
int n, a, tab[MAXN];

int main()
{
  scanf("%d", &n);
  REP(i, n)
  {
    scanf("%d", &a);
    FOR(i, begin, begin+a-1)
      tab[i] = cnt;
    cnt++, begin = begin+a;
  }
  
  scanf("%d", &n);
  REP(i, n)
  {
    scanf("%d", &a);
    printf("%d\n", tab[a]);
  }


  return 0;
}