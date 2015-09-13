//http://codeforces.com/problemset/problem/474/A

#include<cstdio>
#include<iostream>
#include<vector>
#include<set>
#include<map>
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

string side;
string stri;


int main()
{
  cin >> side;
  cin >> stri;
  
  if(side[0] == 'R')
    REP(i, stri.length())
    {
      if(stri[i] == 'w')
	cout << "q";
      if(stri[i] == 'e')
	cout << "w";
      if(stri[i] == 'r')
	cout << "e";
      if(stri[i] == 't')
	cout << "r";
      if(stri[i] == 'y')
	cout << "t";
      if(stri[i] == 'u')
	cout << "y";
      if(stri[i] == 'i')
	cout << "u";
      if(stri[i] == 'o')
	cout << "i";
      if(stri[i] == 'p')
	cout << "o";
      if(stri[i] == 's')
	cout << "a";
      if(stri[i] == 'd')
	cout << "s";
      if(stri[i] == 'f')
	cout << "d";
      if(stri[i] == 'g')
	cout << "f";
      if(stri[i] == 'h')
	cout << "g";
      if(stri[i] == 'j')
	cout << "h";
      if(stri[i] == 'k')
	cout << "j";
      if(stri[i] == 'l')
	cout << "k";
      if(stri[i] == ';')
	cout << "l";
      if(stri[i] == 'x')
	cout << "z";
      if(stri[i] == 'c')
	cout << "x";
      if(stri[i] == 'v')
	cout << "c";
      if(stri[i] == 'b')
	cout << "v";
      if(stri[i] == 'n')
	cout << "b";
      if(stri[i] == 'm')
	cout << "n";
      if(stri[i] == ',')
	cout << "m";
      if(stri[i] == '.')
	cout << ",";
      if(stri[i] == '/')
	cout << ".";
    }
    
     if(side[0] == 'L')
    REP(i, stri.length())
    {
      if(stri[i] == 'q')
	cout << "w";
      if(stri[i] == 'w')
	cout << "e";
      if(stri[i] == 'e')
	cout << "r";
      if(stri[i] == 'r')
	cout << "t";
      if(stri[i] == 't')
	cout << "y";
      if(stri[i] == 'y')
	cout << "u";
      if(stri[i] == 'u')
	cout << "i";
      if(stri[i] == 'i')
	cout << "o";
      if(stri[i] == 'o')
	cout << "p";
      if(stri[i] == 'a')
	cout << "s";
      if(stri[i] == 's')
	cout << "d";
      if(stri[i] == 'd')
	cout << "f";
      if(stri[i] == 'f')
	cout << "g";
      if(stri[i] == 'g')
	cout << "h";
      if(stri[i] == 'h')
	cout << "j";
      if(stri[i] == 'j')
	cout << "k";
      if(stri[i] == 'k')
	cout << "l";
      if(stri[i] == 'l')
	cout << ";";
      if(stri[i] == 'z')
	cout << "x";
      if(stri[i] == 'x')
	cout << "c";
      if(stri[i] == 'c')
	cout << "v";
      if(stri[i] == 'v')
	cout << "b";
      if(stri[i] == 'b')
	cout << "n";
      if(stri[i] == 'n')
	cout << "m";
      if(stri[i] == 'm')
	cout << ",";
      if(stri[i] == ',')
	cout << ".";
      if(stri[i] == '.')
	cout << "/";
    }
    
    printf("\n");
    
  
  return 0;
}