//http://main.edu.pl/pl/archive/ilocamp/2010/tab
//ILOCAMP 2010

#include<cstdio>
#include<iostream>
#include<vector>
#include<set>
#include<map>
#include<algorithm>
using namespace std;

#define REP(I, N) for(int I = 0; I < (N); I++)
#define FOR(I, A, B) for(int I = (A); I <= (B); I++)
#define FORD(I, A, B) for(int I = (A); I >= (B); I--)


const int MAXN = 1000006;

int n, m, a[MAXN], b[MAXN], cnt1[MAXN], cnt2[MAXN];
int p[MAXN], k[MAXN];

int main()
{
  scanf("%d %d", &n, &m);
  REP(i, n)
    scanf("%d", a+i);
  REP(i, m)
    scanf("%d", b+i);
  
  //I count how many "1" is to 'i-th' position in both rows 
  //we now that numbers of "1" is non-decreasing
    
  cnt1[0] = !a[0];
    
  FOR(i, 1, n-1)
    cnt1[i] = cnt1[i-1]+(!a[i]);
    
  FORD(i, n-1, 0)
    p[i] = p[i+1]+a[i];
    
  cnt2[0] = !b[0];
    
  FOR(i, 1, m-1)
      cnt2[i] = cnt2[i-1]+(!b[i]);
      
   FORD(i, m-1, 0)
    k[i] = k[i+1]+b[i];
        
  //now looking from the back i will count maximum possible lenght of string, which looks like
  // '000...011..1', so i will try to find the longest possible stirng with exact number of 1's.
      
  int end1 = n, end2 = m, res = min(cnt1[n-1], cnt2[m-1]);
  
  while(end1 >= 0 && end2 >= 0)
  {
      end1--, end2--;
      while(end1 >= 0 && a[end1] == 0)
	end1--;
      while(end2 >= 0 && b[end2] == 0)
	end2--;
      
      if(end1 >= 0 && end2 >= 0 && a[end1] == 1 && b[end2] == 1)
	res = max(res, p[end1]+ min(cnt1[end1], cnt2[end2]));
  }
  
  printf("%d\n", res);
   
  return 0;
}