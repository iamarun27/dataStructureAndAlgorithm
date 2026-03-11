#include <iostream>
using namespace std;

int main()
{
  int n;
  cout << "Enter the number : ";
  cin >> n;

  // int num = 10;
  // int digit = 1;

  // for (int i = 1; i > 0; i++)
  // {
  //   if (n / num == 0)
  //   {
  //     cout << digit;
  //     return 0;
  //   }

  //   num *= 10;
  //   digit++;
  // }

  int digit = 0;

  while (n)
  {
    digit++;
    n /= 10;
  }

  cout << digit;

  return 0;
}
