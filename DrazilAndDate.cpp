//http://codeforces.com/problemset/problem/515/A

#include<cstdio>
#include<iostream>
#include<algorithm>
#include<vector>
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
  int a, b, s;
  scanf("%d %d %d", &a, &b, &s);
  int distance = abs(a) + abs(b);
  
  if(distance > s)
    return printf("No\n"), 0;
    
  
  if((s-distance)%2 == 0)
    return printf("Yes\n"), 0;
    
    
  printf("No\n");
  
  return 0;
}