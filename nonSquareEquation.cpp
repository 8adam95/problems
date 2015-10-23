#include<cstdio>
#include<algorithm>
#include<iostream>
#include<vector>
#include<set>
#include<map>
#include<cstring>
#include<cmath>
#include<list>
#include<queue>
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

int sum(ll x)
{
  int sum = 0;
  while(x) 
    sum += x%10, x/=10;
  return sum;
}

int main()
{
  ll n;
  cin >> n;
  int tmp = (int)(sqrt(n)), begin;
  if(tmp < 5000)
    begin = 1;
  else
    begin = tmp - 5000;
  for(int i = begin; i <= tmp; i++)
    if(n%i == 0)
    {
      if(sum(i)+i == n/i)
      {
	cout << i << "\n";
	return 0;
      }
    }
    cout << -1 << "\n";
  return 0;
  


  return 0;
}