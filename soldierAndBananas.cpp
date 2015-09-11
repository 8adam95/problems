//http://codeforces.com/problemset/problem/546/A

#include<cstdio>
#include<iostream>
#include<map>
#include<algorithm>
#include<set>
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
  int k, n, w;
  scanf("%d %d %d", &k, &n, &w);
  ll sum = 0;
  sum = ((k+k*w)*w/2);
  cout << max((ll)0, (ll)sum - (ll)n) << "\n";


  return 0;
}