#include<cstdio>
#include<iostream>
#include<set>
#include<vector>
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

int n, d, res;

int main()
{
  scanf("%d", &d);
  scanf("%d", &n);
  REP(i, n-1)
  {
    int a;
    scanf("%d", &a);
    res += (d-a);
  }
  printf("%d\n", res);


  return 0;
}