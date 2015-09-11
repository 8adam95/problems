//http://codeforces.com/problemset/problem/460/A


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
  int n, m;
  scanf("%d %d", &n, &m);
  
  int left = n, cnt = 0;
  int day = 0;
  
  while(left > 0)
  {
      cnt++, left--, day++;
      if(day%m == 0)
	left++;
  }
  printf("%d\n", cnt);


  return 0;
}