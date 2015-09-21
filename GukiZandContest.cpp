//http://codeforces.com/problemset/problem/551/A

#include<cstdio>
#include<iostream>
#include<vector>
#include<set>
#include<map>
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

const int MAXN = 2002;

int a[MAXN];
int n;

int main()
{
  scanf("%d", &n);
  REP(i, n)
    scanf("%d", a+i);

  REP(i, n)
  {
    int cnt = 0;
    REP(j, n)
      if(a[j] > a[i])
	cnt++;
    printf("%d ", 1+cnt);
  }
  printf("\n");

  return 0;
}