#include <iostream>
using namespace std;

int main()
{
  int num;
  cout << "Enter the binary number : ";
  cin >> num;

  int sum = 0;
  int mul = 1;

  while (num > 0)
  {
    int rem = num % 10;
    num /= 10;
    sum = sum + rem * mul;
    mul *= 2;
  }

  cout << sum;

  return 0;
}