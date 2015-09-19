//http://codeforces.com/problemset/problem/476/A

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

int n, m;

int main()
{
  int n, m;
  scanf("%d %d", &n, &m);

  int mini = 1000000000;
  
  FOR(i, 0, 10000)
    FOR(j, 0, 10000)
    {
      if(j+i*2 > n)
	break;
      if(j+i*2 == n && (j+i) % m == 0)
	mini = min(mini, j+i);
    }
    
    if(mini != 1000000000)
      printf("%d\n", mini);
    else
      printf("-1\n");
  
  return 0;
}