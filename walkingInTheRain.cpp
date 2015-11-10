#include<cstdio>
#include<iostream>
#include<vector>
#include<set>
#include<map>
#include<algorithm>
#include<queue>
#include<list>
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

const int MAXN = 1005;

int n, a[MAXN], res[MAXN];

int main()
{
  scanf("%d", &n);
  FOR(i, 1, n)
  {
    scanf("%d", &a[i]);
  }
  
  a[0] = a[1];
  
  int j = 1;
  
  for(j = 1; j <= 1000; j++)
  {
    bool bug = true;
    
    FOR(i, 1, n)
    {
      if((a[i] >= j) || (a[i-1] >= j && a[i+1] >= j))
	bug = bug;
      else
	bug = false;
    }
    if(bug == false)
      return printf("%d\n", j-1), 0;
  }
  


  return 0;
}