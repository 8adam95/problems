//http://codeforces.com/problemset/problem/577/A

#include<cstdio>
#include<iostream>
#include<vector>
#include<algorithm>
#include<cstring>
#include<map>
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

int n, x, cnt;

int main()
{
  scanf("%d %d", &n, &x);
  
  FOR(i, 1, n)
    if(x%i == 0)
      if((x/i) <= n && (x/i) >= 1)
	cnt++;
  
  printf("%d\n", cnt);
      
  return 0;
}