#include <iostream>
using namespace std;

void isEvenOdd(int n)
{
  if (n % 2 == 0)
  {
    cout << "Even number";
  }
  else
  {
    cout << "Odd number";
  }
}

void factorial(int n)
{
  int fact = 1;
  for (int i = 1; i <= n; i++)
  {
    fact = fact * i;
  }
  cout << fact;
}

int main()
{
  int num;
  cout << "Enter the number : ";
  cin >> num;

  isEvenOdd(num);
  cout << endl;
  factorial(num);

  return 0;
}