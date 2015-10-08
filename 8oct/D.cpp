#include<cstdio>
#include<iostream>
#include<vector>
#include<set>
#include<map>
#include<algorithm>
#include<list>
#include<queue>
#include<cmath>
using namespace std;

#define REP(I, N) for(int I = 0; I < (N); I++)
#define FOR(I, A, B) for(int I = (A); I <= (B); I++)
#define FORD(I, A, B) for(int I = (A); I >= (B); I--)
#define ll long long
#define F first
#define S second
#define MP make_pair
#define PB push_back

bool isPrime(ll x)
{
  for(ll i = 2; i*i <= x; i++)
    if(x%i == 0)
      return 0;
  return 1;
}

int main()
{
  int n;
  scanf("%d", &n);

  
  if(n == 3)
    printf("1\n3\n");
  else if(n == 5)
    printf("2\n2 3\n");

  else
  {
    printf("3\n3 ");
    n -= 3;
    for(int i = 2; i <= n; i++)
      if(isPrime(i) && isPrime(n-i))
	return printf("%d %d\n", i, n-i), 0;
  }
  
  return 0;
}