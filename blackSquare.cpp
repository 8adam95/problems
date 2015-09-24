//http://codeforces.com/problemset/problem/431/A

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

int a[6];
string b;

int main()
{
  int res = 0;
  scanf("%d %d %d %d", &a[1], &a[2], &a[3], &a[4]);
  cin >> b;
  
  REP(i, b.size())
  {
    res += a[b[i]-'1'+1];
  }

  printf("%d\n", res);
  
  return 0;
}