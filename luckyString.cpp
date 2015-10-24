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

int main()
{
  int n;
  scanf("%d", &n);
  for(int i = 0; i < n; i++)
    printf("%c", i%4+'a');
  printf("\n");



  return 0;
}