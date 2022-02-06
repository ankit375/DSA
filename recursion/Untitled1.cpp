#include <bits/stdc++.h>
using namespace std;

int divide(long long dividend, long long divisor) {

  int sign = ((dividend < 0) ^
              (divisor < 0)) ? -1 : 1;

  dividend = abs(dividend);
  divisor = abs(divisor);

  long long quotient = 0, temp = 0;

  for (int i = 31; i >= 0; --i) {
 
    if (temp + (divisor << i) <= dividend) {
      temp += divisor << i;
      quotient |= 1LL << i;
    }
  }

  if(sign==-1) quotient=-quotient;
   
  return quotient;
}

int multiply(int x, int y)
{

    if(y == 0)
    return 0;
 

    if(y > 0 )
    return (x + multiply(x, y-1));

    if(y < 0 )
    return -multiply(x, -y);
}
 

int main() {
  int a,b;
  cin>>a>>b;
  cout << multiply(a, b) <<endl;

  cout << divide(a, b)<<endl;
 
  return 0;
}
