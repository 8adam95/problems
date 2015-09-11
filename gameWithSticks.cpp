//http://codeforces.com/problemset/problem/451/A


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
  if(n > m)
    swap(n, m);
  if(n%2 == 0)
    printf("Malvika\n");
  else
    printf("Akshat\n");
  
  return 0;
}