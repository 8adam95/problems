//http://main.edu.pl/pl/archive/ilocamp/2011/lic

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
  int n;
  scanf("%d", &n);
  FOR(i, 2, n)
    if(n%i != 0)
    {
      printf("%d ", i);
      break;
    }

  FORD(i, n, 1)
    if(n%i != 0)
    {
      printf("%d\n", i);
      break;
    }
  return 0;
}