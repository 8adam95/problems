//http://codeforces.com/problemset/problem/545/B

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

string a, b;
int cnt = 0, res;

int main()
{
  cin >> a;
  cin >> b;
  
  int n = a.length();
  
  REP(i, n)
    if(a[i] != b[i])
      cnt++;
    
  if(cnt % 2 == 1)
    return printf("impossible\n"), 0;
  
  cnt /= 2;
  
  REP(i, n)
  {
    if(cnt)
    {
      if(a[i] != b[i])
	cnt--, cout<<b[i];
      else
	cout << b[i];
    }
    else
      cout << a[i];
  }
  printf("\n");
  
  return 0;
}