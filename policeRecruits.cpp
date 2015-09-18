//http://codeforces.com/problemset/problem/427/A


#include<cstdio>
#include<iostream>
#include<algorithm>
#include<vector>
#include<set>
#include<map>
#include<cstring>
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

int main()
{
  int n, res = 0, cnt = 0;
  scanf("%d", &n);
  REP(i, n)
  {
    int a;
    scanf("%d", &a);
    res += a;
    if(res < 0)
      cnt++, res = 0;
  }
  
  printf("%d\n", cnt);
  
  
  return 0;
}