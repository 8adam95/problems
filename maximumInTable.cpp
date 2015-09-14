//http://codeforces.com/problemset/problem/509/A

#include<cstdio>
#include<iostream>
#include<algorithm>
#include<vector>
#include<set>
#include<map>
#include<cstring>
#include<cmath>
using namespace std;

#define REP(I, N) for(int I = 0; I < (N); I++)
#define FOR(I, A, B) for(int I = (A); I <= (B); I++)
#define FORD(I, A, B) for(int I = (A); I >= (B); I--)
#define ll long long
#define F first
#define S second
#define MP make_pair
#define PB push_back

int maks;
int tab[11][11], n;

int main()
{
  scanf("%d", &n);
  maks = 1;
  FOR(i, 1, n)
    tab[i][1] = 1, tab[1][i] = 1;
  FOR(i, 1, n)
    FOR(j, 2, n)
      tab[i][j] = tab[i][j-1] + tab[i-1][j], maks = max(maks, tab[i][j]);
      
      
  printf("%d\n", maks);
  
  
  return 0;
}