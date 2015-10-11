#include<cstdio>
#include<iostream>
#include<vector>
#include<map>
#include<set>
#include<list>
#include<cmath>
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


int p, q, l, r, cnt, a[60], b[60], c[60], d[60];

int main()
{
  scanf("%d %d %d %d", &p, &q, &l, &r);
  REP(i, p)
    scanf("%d %d", &a[i], &b[i]);
    
  REP(i, q)
    scanf("%d %d", &c[i], &d[i]);
  
  FOR(i, l, r)
  {
    bool r = false;
    int j = 0, k = 0;
    
    while(!r && j < p && k < q)
    {
      if(b[j] < c[k]+i)
	j++;
      else if(d[k]+i < a[j])
	k++;
      else
      {
	r = 1, cnt++;
	break;
      }
    }
  }
  printf("%d\n", cnt);
    
  
  return 0;
}