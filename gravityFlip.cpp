//http://codeforces.com/problemset/problem/405/A


#include<cstdio>
#include<iostream>
#include<vector>
#include<set>
#include<map>
#include<cmath>
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

int n, a[105];

int main()
{
  scanf("%d", &n);
  REP(i, n)
  {
    scanf("%d", &a[i]);
  }
  sort(a, a+n);
  REP(i, n)
    printf("%d ", a[i]);

  return 0;
}