//http://codeforces.com/problemset/problem/570/A

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

int tab[105];

int main()
{
  int n, m;
  scanf("%d %d", &n, &m);
  REP(i, m)
  {
    int maks = -1, whe;
    REP(j, n)
    {
      int a;
      scanf("%d", &a);
      if(maks < a)
	maks = a, whe = j;
    }
    tab[whe]++;
   
  }
  int maks = 0, whe = 0;
  
  REP(i, n)
    if(maks < tab[i])
      maks = tab[i], whe = i;
    
    
  printf("%d\n", whe+1);
  
  
  return 0;
}

