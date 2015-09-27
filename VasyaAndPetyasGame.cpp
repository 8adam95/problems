//http://codeforces.com/contest/577/problem/C

#include<cstdio>
#include<iostream>
#include<vector>
#include<algorithm>
#include<cstring>
#include<map>
#include<set>
using namespace std;

#define REP(I, N) for(int I = 0; I < (N); I++)
#define FOR(I, A, B) for(int I = (A); I <= (B); I++)
#define FORD(I, A, B) for(int I = (A); I >= (B); I--)
#define ll long long
#define F first
#define S second
#define MP make_pair
#define PB push_back

const int MAXN = 1004;

int n;
bool isPrime[MAXN];
vector<int> ans;

int main()
{
  scanf("%d", &n);
  FOR(i, 1, 1000)
    isPrime[i] = true;
    
    isPrime[0] = isPrime[1] = false;
    
  for(int i = 2; i*i <= n; i++)
    if(isPrime[i])
      for(int j = i*i; j <= n; j+=i)
	isPrime[j] = false;


  for(int i = 1; i <= n; i++)
    if(isPrime[i])
    {
      int q = 1;
      while(q <= n/i)
	q *= i, ans.PB(q);
    }
  
  printf("%d\n", (int)ans.size());
  for(int i = 0; i < (int)ans.size(); i++)
    printf("%d ", ans[i]);
  printf("\n");
  return 0;
}