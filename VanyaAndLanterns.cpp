//http://codeforces.com/problemset/problem/492/B

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

const int MAXN = 1005;

int n, l, a[MAXN];

int res;

int main()
{
  scanf("%d %d", &n, &l);
  REP(i, n)
    scanf("%d", a+i);
  

  sort(a, a+n);

  res = 2*max(a[0], l-a[n-1]);
  
  REP(i, n-1)
    res = max(res, a[i+1]-a[i]);
  
  printf("%.10f\n", res/2.);


  return 0;
}