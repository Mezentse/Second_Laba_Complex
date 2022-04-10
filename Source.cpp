#include<iostream>
#include"Complex.h"

using namespace std;
int main()
{
  int n, m, g;
  Complex a(3, 7);
  Complex b;
  Complex c;

  cin >> c;
  b = c;

  cout << "a + b = " << a + b;
  cout << "a - b = " << a - b;
  cout << "a * b = " << a * b;
  cout << "a / b = " << a / b;

  if (a == b) cout << "a = b"<<"\n";

  cout << "positive pow: " << a.IntPow(5);
  cout << "negative pow: " << a.IntPow(-3);
  cout << "fractional pow: " << a.DoublePow(2, 3);
  cout << "the triganometric form of a given complex number: "; 
  b.CoutTrigonom();
}