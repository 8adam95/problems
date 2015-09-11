//http://codeforces.com/problemset/problem/479/A

#include<cstdio>
#include<iostream>
#include<map>
#include<algorithm>
#include<set>
#include<queue>
#include<vector>
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
  int a, b, c;
  scanf("%d %d %d", &a, &b, &c);
  int maks = -10;
  maks = max(a+b+c, maks);
  maks = max((a+b)*c, maks);
  maks = max(a*(b+c), maks);
  maks = max(a*b*c, maks);
  maks = max(a*b+c, maks);
  
  printf("%d\n", maks);
  
  return 0;
}