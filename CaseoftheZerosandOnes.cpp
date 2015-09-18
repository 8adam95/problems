//http://codeforces.com/problemset/problem/556/A

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

int zer, ones, n;
string a;

int main()
{
  scanf("%d", &n);
  cin >> a;
  REP(i, n)
  {
    if(a[i] == '0')
      zer++;
    else
      ones++;
  }
  printf("%d\n", max(zer,ones)-min(zer,ones));
  
  
  return 0;
}