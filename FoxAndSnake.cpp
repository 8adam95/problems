//http://codeforces.com/problemset/problem/510/A

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

int main()
{
  int n, m;
  scanf("%d %d", &n, &m);
  FOR(i, 1, n)
  {
    if(i%2 == 1)
    {
      FOR(j, 1, m)
	printf("#");
      printf("\n");
    }
    else if(i%4 == 2)
    {
      FOR(j, 1, m-1)
	printf(".");
      printf("#\n");
    }
    else
    {
      printf("#");
      FOR(j, 1, m-1)
	printf(".");
      printf("\n");
    }
  }


  return 0;
}