#include<cstdio>
#include<iostream>
#include<vector>
#include<set>
#include<algorithm>
#include<map>
#include<list>
#include<queue>
using namespace std;

#define REP(I, N) for(int I = 0; I < (N); I++)
#define FOR(I, A, B) for(int I = (A); I <= (B); I++)
#define FORD(I, A, B) for(int I = (A); I >= (B); I--)
#define ll long long
#define F first
#define S second
#define MP make_pair
#define PB push_back

const int MAXN = 33;

int d, sumTime, res[33], minT[33], maxT[33];

int main()
{
  scanf("%d %d", &d, &sumTime);
  
  REP(i, d)
  {
    scanf("%d %d", &minT[i], &maxT[i]);
    sumTime -= minT[i];
    res[i] = minT[i];
  }
  if(sumTime < 0)
    return printf("NO\n"), 0;
  
  REP(i, d)
  {
    sumTime += minT[i];
    res[i] = min(maxT[i], sumTime);
    sumTime -= min(sumTime, maxT[i]);
    if(sumTime == 0)
      break;
  }
  if(sumTime > 0)
    return printf("NO\n"), 0;
  
  printf("YES\n");
  REP(i, d)
    printf("%d ", res[i]);
  printf("\n");
  
  return 0;
}