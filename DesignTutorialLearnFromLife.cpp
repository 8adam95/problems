//http://codeforces.com/problemset/problem/472/B

#include<cstdio>
#include<iostream>
#include<set>
#include<map>
#include<vector>
#include<algorithm>
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

const int MAXN = 2005;

int a[MAXN], res = 0;

int main()
{
  int n, k;
  scanf("%d %d", &n, &k);
  
  REP(i, n)
    scanf("%d", a+i);
    
  sort(a, a+n);
  
  for(int i = n-1; i >= 0; i -= k)
    res += 2*(a[i]-1);
  
  printf("%d\n", res);
  
  
  return 0;
}