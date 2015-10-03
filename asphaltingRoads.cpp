#include<cstdio>
#include<iostream>
#include<vector>
#include<set>
#include<map>
#include<algorithm>
#include<cstring>
#include<list>
#include<queue>
using namespace std;

#define REP(I, N) for(int I = 0; I < (N); I++)
#define FOR(I, A, B) for(int I = (A); I <= (B); I++)
#define FORD(I, A, B) for(int I = (A); I >= (B); I--)
#define ll long long 
#define F first
#define S second
#define MP make_pair
#define PB push_back

bool poz[2500], pion[2500];

int main()
{
  int n;
  scanf("%d", &n);
  REP(i, n*n)
  {
    int h, v;
    scanf("%d %d", &h, &v);
    if(poz[h] == false && pion[v] == false)
      poz[h] = true, pion[v] = true, printf("%d ", i+1);
  }
  printf("\n");
  
  return 0;
}