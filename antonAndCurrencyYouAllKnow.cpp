#include<cstdio>
#include<iostream>
#include<vector>
#include<set>
#include<map>
#include<algorithm>
#include<cstring>
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

string a;
int pos;

int main()
{
  cin >> a;
  int n = a.length();
  
  int mini = 11;
  int res = a[n-1]-'0';
  
  REP(i, n-1)
  {
    if((a[i]-'0')%2 == 0)
    {
      if(res > a[i]-'0')
      {
	mini = 0;
	  pos = i;
	  break;
      }
      else if(res < a[i]-'0')
	  mini = a[i]-'0', pos = i;
      }
    }
      

  if(mini == 11)
    printf("-1\n");
  else
  {
    REP(i, n-1)
    {
      if(i == pos)
	cout << a[n-1];
      else
	cout << a[i];
    }
    cout << a[pos] << "\n";
  }
    
  return 0;
}