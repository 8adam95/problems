#include<cstdio>
#include<iostream>
#include<algorithm>
#include<set>
#include<map>
#include<vector>
#include<cmath>
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

const int MAXN = 200005;

int n, a[MAXN], cnt, s[MAXN];

int main()
{
  scanf("%d", &n);
  REP(i, n)
    scanf("%d", a+i), a[i+n] = a[i];
  
  FOR(i, 1, 2*n)
    s[i] = s[i-1] + (a[i] >= a[i-1]);
  int cnt = -1;
  REP(i, n+1)
    if(s[i+n-1] - s[i] == n-1)
      cnt = n-i;
 
  printf("%d\n", cnt);  
  
  return 0;
}