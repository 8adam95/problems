//http://codeforces.com/problemset/problem/441/A

#include<cstdio>
#include<iostream>
#include<vector>
#include<set>
#include<algorithm>
#include<cstring>
#include<map>
#include<list>
using namespace std;

#define REP(I, N) for(int I = 0; I < (N); I++)
#define FOR(I, A, B) for(int I = (A); I <= (B); I++)
#define FORD(I, A, B) for(int I = (A); I >= (B); I--)
#define ll long long
#define F first
#define S second
#define MP make_pair
#define PB push_back

vector<int> v;

int main()
{
  int n, k;
  scanf("%d %d", &n, &k);

  REP(i, n)
  {
    int a;
    scanf("%d", &a);
    bool ok = false;
    REP(j, a)
    {
      int b;
      scanf("%d", &b);
      if(b < k && ok == false)
	v.PB(i+1), ok = true;
    }
  }
  sort(v.begin(), v.end());
  
  printf("%d\n", (int)v.size());
  
  REP(i, v.size())
    printf("%d ", v[i]);

  printf("\n");
    
  return 0;
}