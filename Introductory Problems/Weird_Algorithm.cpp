#include <iostream>
using namespace std;
#define int long long

signed
main ()
{
  int n;
  cin >> n;
  while (n != 1)
    {
      cout << n << " ";
      if (n & 1)
	{
	  n = (3 * n + 1);
	}
      else
	{
	  n = n / 2;
	}
    }
  cout << 1 << endl;
}
