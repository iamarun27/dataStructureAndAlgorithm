#include <iostream>
using namespace std;

int main()
{
  int num;
  cout << "Enter number to check is it prime : ";
  cin >> num;

  if (num < 2)
  {
    cout << "Not prime number";
    return 0;
  }

  for (int i = 2; i < num; i++)
  {
    if (num % i == 0)
    {
      cout << "Not prime number";
      return 0;
    }
  }
  cout << "Prime number";
  return 0;
}