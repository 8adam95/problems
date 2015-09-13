//http://codeforces.com/problemset/problem/469/A

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

const int MAXN = 105;

bool tab[MAXN];

int main()
{
  int n, a, b;
  scanf("%d", &n);
  scanf("%d", &a);
  REP(i, a)
    scanf("%d", &b), tab[b] = true;
  scanf("%d", &a);
  REP(i, a)
    scanf("%d", &b), tab[b] = true;

  FOR(i, 1, n)
    if(!tab[i])
      return printf("Oh, my keyborad!\n"), 0;
  printf("I become the guy.\n");


  return 0;
}