#include <iostream>
using namespace std;

int main()
{
  int num;
  cout << "Enter the number : ";
  cin >> num;

  int sum = 0;
  while (num)
  {
    int digit = num % 2;
    num /= 2;

    sum = sum * 10 + digit;
  }

  cout << sum;

  return 0;
}