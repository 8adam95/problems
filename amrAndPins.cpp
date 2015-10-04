#include<cstdio>
#include<iostream>
#include<algorithm>
#include<set>
#include<map>
#include<vector>
#include<cmath>
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

double r, x1, y, x2, y2;//, x1, x2, y1, y2;

int main()
{
  //scanf("%d %d %d %d %d", &r, &x1, &y, &x2, &y2);
  cin >> r >> x1 >> y >> x2 >> y2;
  x1 -= x2;
  y -= y2;
  double d = (x1*x1+y*y);
  d = sqrt(d);
  r *= 2;

  cout << ceil(d/r) << "\n";


  return 0;
}
