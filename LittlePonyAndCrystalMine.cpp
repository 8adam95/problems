//http://codeforces.com/problemset/problem/454/A

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
  int n;
  scanf("%d", &n);
  REP(i, n/2)
  {
    FOR(j, 1, (n/2)-i)
      printf("*");
   
    FOR(j, 1, 1+i*2)
      printf("D");
    FOR(j, 1, (n/2)-i)
      printf("*");
    printf("\n");
  }
  REP(i, n)
    printf("D");
  printf("\n");
  int a = 1;
  REP(i, n/2)
  {
    FOR(j, 1, a)
      printf("*");
    FOR(j, 1, n-(2*a))
      printf("D");
    FOR(j, 1, a)
      printf("*");
    printf("\n");
    a++;
  }

  return 0;
}