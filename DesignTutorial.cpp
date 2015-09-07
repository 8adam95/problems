//http://codeforces.com/problemset/problem/472/A
#include<cstdio>
#include<iostream>
#include<vector>
#include<set>
#include<map>
#include<algorithm>
#include<queue>
#include<cstring>
using namespace std;

#define REP(I, N) for(int I = 0; I < (N); I++)
#define FOR(I, A, B) for(int I = (A); I <= (B); I++)
#define FORD(I, A, B) for(int I = (A); I >= (B); I--)
#define ll long long
#define F first
#define S 
#define MP make_pair
#define PB push_back

const int MAXN = 1000006;

bool Prime[MAXN];

void cntPrime(int a)
{
  FOR(i, 2, a)
    for(int j = 2*i; j <= a; j+=i)
      Prime[j] = true;
}

int main()
{
  int n;
  scanf("%d", &n);
  cntPrime(n);
  
  FOR(i, 1, n)
  {
    if(Prime[i])
    {
      if(Prime[n-i])
	return printf("%d %d\n", i, n-i), 0;
    }
    
  }
  
  
  return 0;
}