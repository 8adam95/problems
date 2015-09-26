//http://codeforces.com/problemset/problem/550/A

#include<cstdio>
#include<iostream>
#include<vector>
#include<set>
#include<map>
#include<algorithm>
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

string a;

int main()
{
  cin >> a;
  int n = a.size();

  REP(i, n)
    if(a[i] == 'A' && a[i+1] == 'B')
      FOR(j, i+2, n-1)
	if(a[j] == 'B' && a[j+1] == 'A')
	  return printf("YES\n"), 0;

  REP(i, n)
    if(a[i] == 'B' && a[i+1] == 'A')
      FOR(j, i+2, n-1)
	if(a[j] == 'A' && a[j+1] == 'B')
	  return printf("YES\n"), 0;


  printf("NO\n");


  return 0;
}