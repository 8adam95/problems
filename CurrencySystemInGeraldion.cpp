//http://codeforces.com/contest/560/problem/A

#include<cstdio>
#include<iostream>
#include<vector>
#include<set>
#include<algorithm>
#include<cstring>
#include<map>
#include<list>
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
  int res = 1;
  int n;
  scanf("%d", &n);
  REP(i, n)
  {
    int a;
    scanf("%d", &a);
    if(a == 1)
      res = -1;
  }
  printf("%d\n", res);
  

  
  return 0;
}