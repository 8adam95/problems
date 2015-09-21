//http://codeforces.com/problemset/problem/514/A

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
  int n = a.length();
  REP(i, n)
  {
    if(a[i] == '1' || a[i] == '2' || a[i] == '3' || a[i] == '4' || a[i] == '0')
      cout << a[i];
    else
    {
      if(a[i] == '5')
	cout << "4";
      else if(a[i] == '6')
	cout << "3";
      else if(a[i] == '7')
	cout << "2";
      else if(a[i] == '8')
	cout << "1";
      else if (a[i] == '9' && i != 0)
	cout << "0";
      else
	cout << "9";

    }

  }

  return 0;
}