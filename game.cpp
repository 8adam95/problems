

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

int main()
{
  int n1, n2, k1, k2;
  scanf("%d %d %d %d", &n1, &n2, &k1, &k2);

  if(n1 > n2)
    printf("First\n");
  else
    printf("Second\n");
  

  return 0;
}