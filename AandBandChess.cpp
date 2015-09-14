//http://codeforces.com/problemset/problem/519/A

#include<cstdio>
#include<iostream>
#include<algorithm>
#include<vector>
#include<set>
#include<map>
#include<cstring>
#include<cmath>
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
  
  int fir = 0, sec = 0;
  
  REP(i, 8)
  {
    cin >> a;
    REP(j, 8)
    {
      if(a[j] == 'q')
	fir += 9;
      if(a[j] == 'r')
	fir += 5;
      if(a[j] == 'b')
	fir += 3;
      if(a[j] == 'n')
	fir += 3;
      if(a[j] == 'p')
	fir += 1;
      
      if(a[j] == 'Q')
	sec += 9;
      if(a[j] == 'R')
	sec += 5;
      if(a[j] == 'B')
	sec += 3;
      if(a[j] == 'N')
	sec += 3;
      if(a[j] == 'P')
	sec += 1;
    }
  }

  if(sec > fir)
    printf("White\n");
  else if(sec == fir)
    printf("Draw\n");
  else
    printf("Black\n");

  return 0;
}