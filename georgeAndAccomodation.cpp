#include<cstdio>
#include<iostream>
#include<vector>
#include<set>
#include<map>
#include<algorithm>
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


int main()
{
  int n, cnt = 0;
  scanf("%d", &n);
  REP(i, n)
  {
    int a, b;
    scanf("%d %d", &a, &b);
    if(a < b-1)
      cnt++;
  }
  printf("%d\n", cnt);

  return 0;
}