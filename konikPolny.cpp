//http://main.edu.pl/pl/archive/ilocamp/2011/kon

#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cstring>
#include<map>
#include<vector>
#include<set>
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
  int x, s;
  ll res = 0;
  scanf("%d %d", &x, &s);
  while(s > 1 && x > 0)
    x -= s, res++, s /= 2;
  res += max(x, 0);
  
  printf("%lld\n", res);
  
  
  
  return 0;
}