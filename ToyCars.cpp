#include<cstdio>
#include<iostream>
#include<vector>
#include<set>
#include<map>
#include<algorithm>
using namespace std;

#define REP(I, N) for(int I = 0; I < (N); I++)
#define FOR(I, A, B) for(int I = (A); I <= (B); I++)
#define FORD(I, A, B) for(int I = (A); I >= (B); I--)
#define ll long long
#define F first
#define S second
#define MP make_pair
#define PB push_back

int n, a, tu[105];

int main()
{
  scanf("%d", &n);
  FOR(i, 1, n)
    FOR(j, 1, n)
    {
      scanf("%d", &a);
      if(a == 1)
	tu[i] = true;
      else if(a == 2)
	tu[j] = true;
      else if(a == 3)
	tu[j] = true, tu[i] = true;
    }
    
  int cnt = 0;
  FOR(i, 1, n)
    if(!tu[i])
      cnt++;
    
  printf("%d\n", cnt);
  FOR(i, 1, n)
    if(!tu[i])
      printf("%d ", i);
    
  return 0;
}