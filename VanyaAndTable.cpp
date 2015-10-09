#include<cstdio>
#include<iostream>
#include<vector>
#include<set>
#include<algorithm>
#include<map>
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

int cnt;

int main()
{
  int n;
  scanf("%d", &n);
  while(n--)
  {
    int x1, x2, y, y1;
    scanf("%d %d %d %d", &x1, &y1, &x2, &y);
    cnt += (x2-x1+1)*(y-y1+1);
  }
  printf("%d\n", cnt);



  return 0;
}