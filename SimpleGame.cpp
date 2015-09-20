//http://codeforces.com/problemset/problem/570/B

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

int main()
{
  
  int n, m;
  
  scanf("%d %d", &n, &m);
  if(n == m && m == 1)
    return printf("1\n"), 0;
  if(n-m+1 > m)
    printf("%d\n", m+1);
  else
    printf("%d\n", m-1);
  
  return 0;
}