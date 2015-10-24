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

string name[105], a;
int pizza[105], taxi[105], girls[105], maks, cnt;

int main()
{
  int n, m;
  scanf("%d", &n);

  REP(j, n)
  {
    scanf("%d", &m);
    cin >> name[j];

    REP(i, m)
    {
      cin >> a;
      if(a[0] == a[1] && a[1] == a[3] && a[3] == a[4] && a[4] == a[6] && a[6] == a[7])
	taxi[j]++;
      else if(a[0]-'0' > a[1]-'0' && a[1]-'0' > a[3]-'0' && a[3]-'0' > a[4]-'0' && a[4]-'0' > a[6]-'0' && a[6]-'0' > a[7]-'0')
	pizza[j]++;
      else
	girls[j]++;
    }
  }
  maks = -1, cnt = 0;
  REP(i, n)
  {
    if(taxi[i] > maks)
      maks = taxi[i], cnt = 1;
    else if(taxi[i] == maks)
      cnt++;
  }
  printf("If you want to call a taxi, you should call: ");
  REP(i, n)
    if(taxi[i] == maks)
    {
      cout << name[i];
      cnt--;
      if(cnt == 0)
	cout << ".\n";
      else
	cout << ", ";
    }
    
    maks = -1, cnt = 0;
  
  REP(i, n)
  {
    if(pizza[i] > maks)
      maks = pizza[i], cnt = 1;
    else if(pizza[i] == maks)
      cnt++;
  }
    
  printf("If you want to order a pizza, you should call: ");
  REP(i, n)
    if(pizza[i] == maks)
    {
      cout << name[i];
      cnt--;
      if(cnt == 0)
	cout << ".\n";
      else
	cout << ", ";
    }
    
    maks = -1, cnt = 0;
    REP(i, n)
    {
      if(girls[i] > maks)
	maks = girls[i], cnt = 1;
      else if(girls[i] == maks)
	cnt++;
    }
      printf("If you want to go to a cafe with a wonderful girl, you should call: ");
  REP(i, n)
    if(girls[i] == maks)
    {
      cout << name[i];
      cnt--;
      if(cnt == 0)
	cout << ".\n";
      else
	cout << ", ";
    }
  
  return 0;
}