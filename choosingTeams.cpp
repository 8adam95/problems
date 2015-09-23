//http://codeforces.com/problemset/problem/432/A


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

int n, k, a[2005];

int main()
{
  scanf("%d %d", &n, &k);
  REP(i, n)
    scanf("%d", a+i);
    
  sort(a, a+n);
  REP(i, n)
  {
    if(a[i]+k > 5)
      return printf("%d\n", i/3), 0;
  }
  printf("%d\n", n/3);


  return 0;
}