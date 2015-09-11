//http://codeforces.com/problemset/problem/486/A


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
  ll n;
  cin >> n;
  if(n % 2 == 0)
    cout << (n/2) << "\n";
  else
    cout << (n/2) - n << "\n";
  
  
  return 0;
}