#include<cstdio>
#include<iostream>
#include<vector>
#include<algorithm>
#include<set>
#include<map>
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
  int n;
  scanf("%d", &n);
  FORD(i, n, 1)
    if(n%i == 0)
      printf("%d ", i), n = i;
      
  printf("\n");
    
}