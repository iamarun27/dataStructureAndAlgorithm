#include <iostream>
using namespace std;

// void isEvenOdd(int n)
// {
//   if (n % 2 == 0)
//     cout << "Even number" << endl;
//   else
//     cout << "Odd number" << endl;
// }

void add(int n1, int n2)
{
  cout << n1 + n2;
}

void add(int a, int b, int c)
{
  cout << a + b + c;
}

int main()
{
  // int num1, num2, num3;
  // cin >> num1 >> num2 >> num3;

  // isEvenOdd(num1);
  // isEvenOdd(num2);
  // isEvenOdd(num3);

  add(5, 9, 3);

  return 0;
}