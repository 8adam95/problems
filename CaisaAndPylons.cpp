//http://codeforces.com/problemset/problem/463/B

#include<cstdio>
#include<iostream>
#include<algorithm>
#include<vector>
#include<set>
#include<map>
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

int n;

int main()
{
  scanf("%d", &n);
  
  int x = 0, energy = 0, res = 0;
  
  FOR(i, 1, n)
  {
    int h;
    scanf("%d", &h);
    energy += x-h;
 
    if(energy < 0)
    {
      res += -energy;
      energy = 0;
    }
    x = h;
  }
  
  printf("%d\n", res);

  return 0;
}