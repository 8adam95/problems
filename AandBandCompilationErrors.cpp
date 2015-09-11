//http://codeforces.com/problemset/problem/519/B

#include<cstdio>
#include<iostream>
#include<map>
#include<algorithm>
#include<set>
#include<queue>
#include<vector>
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

const int MAXN = 100006;

int n, tab[MAXN], res1[MAXN], res2[MAXN], mis;

int main()
{
  scanf("%d", &n);
  REP(i, n)
    scanf("%d", tab+i);
  
  sort(tab, tab+n);
  
  REP(i, n-1)
    scanf("%d", res1+i);
    
  sort(res1, res1+n-1);
  
  REP(i, n)
    if(res1[i] != tab[i])
    {
      printf("%d\n", tab[i]);
      tab[i] = 1000000009;
      break;
    }

  sort(tab, tab+n);

  REP(i, n-2)
    scanf("%d", res2+i);
    
  sort(res2, res2+n-2);
  
  REP(i, n)
    if(res2[i] != tab[i])
    {
	printf("%d\n", tab[i]);
	break;
    }
    
  return 0;
}