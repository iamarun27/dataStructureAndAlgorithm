#include <iostream>
using namespace std;

int main()
{
  int number;
  cout << "Enter the number : ";
  cin >> number;

  int sum = 0;

  while (number)
  {
    int digit = number % 10;

    sum = sum * 10 + digit;
    number /= 10;
  }

  cout << sum;

  return 0;
}