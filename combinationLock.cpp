/*
ID: adam.sz1
PROG: combo
LANG: C++
*/
#include <stdio.h>
#include <stdlib.h>
#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cmath>
#include<fstream>
using namespace std;



#define REP(I, N) for(int I = 0; I < (N); I++)
#define FOR(I, A, B) for(int I = (A); I <= (B); I++)
#define FORD(I, A, B) for(int I = (A); I >= (B); I--)
#define ll long long
#define F first
#define S second
#define MP make_pair
#define PB push_back

int n, a, b, c, x , y, z, res;
bool tab[101][101][101];

void cnt(int a, int b, int c, int n)
{
    FOR(i, 1, n)
    FOR(j, 1, n)
      FOR(k, 1, n)
      {
	if(abs(a-i) <= 2 && abs(b-j) <= 2 && abs(c-k) <= 2)
	  tab[i][j][k] = true;
	if(abs(n+a-i) <= 2 && abs(n+b-j) <= 2 && abs(n+c-k) <= 2)
	  tab[i][j][k] = true;
	if(abs(a-i-n) <= 2 && abs(b-j-n) <= 2 && abs(c-k-n) <= 2)
	  tab[i][j][k] = true;
	
	
	if(abs(n+a-i) <= 2 && abs(b-j) <= 2 && abs(c-k) <= 2)
	  tab[i][j][k] = true;
	if(abs(a-i) <= 2 && abs(n+b-j) <= 2 && abs(c-k) <= 2)
	  tab[i][j][k] = true;
	if(abs(a-i) <= 2 && abs(b-j) <= 2 && abs(c-k+n) <= 2)
	  tab[i][j][k] = true;
	if(abs(n+a-i) <= 2 && abs(n+b-j) <= 2 && abs(c-k) <= 2)
	  tab[i][j][k] = true;
	if(abs(n+a-i) <= 2 && abs(b-j) <= 2 && abs(n+c-k) <= 2)
	  tab[i][j][k] = true;
	if(abs(a-i) <= 2 && abs(n+b-j) <= 2 && abs(n+c-k) <= 2)
	  tab[i][j][k] = true;
	
	if(abs(a-i-n) <= 2 && abs(b-j) <= 2 && abs(c-k) <= 2)
	  tab[i][j][k] = true;
	if(abs(a-i) <= 2 && abs(b-j-n) <= 2 && abs(c-k) <= 2)
	  tab[i][j][k] = true;
	if(abs(a-i) <= 2 && abs(b-j) <= 2 && abs(c-k-n) <= 2)
	  tab[i][j][k] = true;
	if(abs(a-i-n) <= 2 && abs(b-j-n) <= 2 && abs(c-k) <= 2)
	  tab[i][j][k] = true;
	if(abs(a-i-n) <= 2 && abs(b-j) <= 2 && abs(c-k-n) <= 2)
	  tab[i][j][k] = true;
	if(abs(a-i) <= 2 && abs(b-j-n) <= 2 && abs(c-k-n) <= 2)
	  tab[i][j][k] = true;
	
	if(abs(a-i+n) <= 2 && abs(b-j) <= 2 && abs(c-k-n) <= 2)
	  tab[i][j][k] = true;
	if(abs(a-i+n) <= 2 && abs(b-j-n) <= 2 && abs(c-k) <= 2)
	  tab[i][j][k] = true;
	if(abs(a-i+n) <= 2 && abs(b-j-n) <= 2 && abs(c-k-n) <= 2)
	  tab[i][j][k] = true;
	
	if(abs(a-i) <= 2 && abs(b-j+n) <= 2 && abs(c-k-n) <= 2)
	  tab[i][j][k] = true;
	if(abs(a-i-n) <= 2 && abs(b-j+n) <= 2 && abs(c-k) <= 2)
	  tab[i][j][k] = true;
	if(abs(a-i-n) <= 2 && abs(b-j+n) <= 2 && abs(c-k-n) <= 2)
	  tab[i][j][k] = true;
	
	if(abs(a-i) <= 2 && abs(b-j-n) <= 2 && abs(c-k+n) <= 2)
	  tab[i][j][k] = true;
	if(abs(a-i-n) <= 2 && abs(b-j) <= 2 && abs(c-k+n) <= 2)
	  tab[i][j][k] = true;
	if(abs(a-i-n) <= 2 && abs(b-j-n) <= 2 && abs(c-k+n) <= 2)
	  tab[i][j][k] = true;
	
	if(abs(a-i+n) <= 2 && abs(b-j+n) <= 2 && abs(c-k-n) <= 2)
	  tab[i][j][k] = true;
	if(abs(a-i+n) <= 2 && abs(b-j-n) <= 2 && abs(c-k+n) <= 2)
	  tab[i][j][k] = true;
	if(abs(a-i-n) <= 2 && abs(b-j+n) <= 2 && abs(c-k+n) <= 2)
	  tab[i][j][k] = true;
      }
}

int main()
{
  ofstream fout ("combo.out");
 ifstream fin ("combo.in");
  int a, b, c, n;
  fin >> n;
  fin >> a >> b >> c;
  cnt(a, b, c, n);  
  fin >> a >> b >> c;
  
  cnt(a, b, c, n);
  
  FOR(i, 1, n)
    FOR(j, 1, n)
      FOR(k, 1, n)
	if(tab[i][j][k] == true)
	  res++;
	
  fout << res << "\n";
  
  return 0;
}