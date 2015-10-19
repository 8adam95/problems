#include<cstdio>
#include<iostream>
#include<vector>
#include<set>
#include<map>
#include<vector>
#include<algorithm>
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

int n, m, tab[6][50006], res[7][50006];

int main()
{
  scanf("%d %d", &n, &m);
  FOR(i, 1, n)
    FOR(j, 1, m)
    {
      scanf("%d", &tab[i][j]);
      res[i][j] = max(res[i][j-1]+tab[i][j], res[i-1][j]+tab[i][j]);
    }
      
  FOR(i, 1, n)
    printf("%d ", res[i][m]);
  printf("\n");

  return 0;
}