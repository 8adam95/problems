//http://codeforces.com/contest/558/problem/A
#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cstring>
#include<map>
#include<vector>
#include<set>
using namespace std;

#define REP(I, N) for(int I = 0; I < (N); I++)
#define FOR(I, A, B) for(int I = (A); I <= (B); I++)
#define FORD(I, A, B) for(int I = (A); I >= (B); I--)
#define ll long long
#define F first
#define S second
#define MP make_pair
#define PB push_back

int x, a, l, k;
pair<int, int> tab[150];

int main()
{
  int n;
  scanf("%d", &n);
  REP(i, n)
  {
    scanf("%d %d", &tab[i].F, &tab[i].S);
    if(tab[i].F < 0)
      l++;
    else
      k++;
  }
  sort(tab, tab+n);
  int res = 0;
  for(int i = max(0, l-k-1); i <= min(n, l*2); i++)
    res+= tab[i].S;
  
  printf("%d\n", res);
  

  return 0;
}