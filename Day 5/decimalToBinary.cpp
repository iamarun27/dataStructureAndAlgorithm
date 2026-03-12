#include <iostream>
using namespace std;

int main()
{
  int num;
  cout << "Enter number : ";
  cin >> num;

  int sum = 0;
  int mul = 1;
  while (num > 0)
  {
    int digit = num % 2;
    sum = sum + digit * mul;
    num /= 2;
    mul *= 10;
  }
  cout << sum;

  return 0;
}