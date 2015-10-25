#include<cstdio>
#include<algorithm>
#include<iostream>
#include<vector>
#include<set>
#include<map>
#include<cstring>
#include<cmath>
#include<list>
#include<queue>
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

int n, m;

int main()
{
  scanf("%d %d", &n, &m);
  printf("%d\n", min(n, m)+1);
  REP(i, min(n,m)+1)
    printf("%d %d\n", i, min(n,m)-i);
  
  return 0;
}