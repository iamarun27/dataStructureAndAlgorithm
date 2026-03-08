#include <iostream>
using namespace std;

int main()
{
  // int a = 4;
  // cout<<a;

  // char c = 205;
  // cout<<c;

  // float f = 5.6398753654;
  // double f = 5.6398753654;
  // cout<<sizeof(f);

  // variable declare
  // int a = 10;
  // int b = 50;
  // cout << a + b;

  // bool b = true;
  // cout<<b;

  // int a = 10, b = 20;

  // if (a > b)
  // {
  //   cout << a << " is greater than " << b;
  // }
  // else
  //   cout << b << " is greater than " << a;

  // even odd

  // int num = -25;
  // if (num % 2 == 0)
  //   cout << "Even number";

  // else
  //   cout << "Odd";

  // check number

  // int num;
  // cout << "Enter the number to check : ";
  // cin >> num;

  // if (num > 0)
  //   cout << "Positive number";
  // else if (num < 0)
  //   cout << "Negative";
  // else
  //   cout << "Zero";

  // check max number among three

  int a, b, c;
  cout << "Enter first number : ";
  cin >> a;
  cout << "\nEnter second number : ";
  cin >> b;
  cout << "\nEnter third number ";
  cin >> c;

  if ((a > b) && (a > c))
  {
    cout << "A is greater";
  }
  else if ((b > a) && (b > c))
  {
    cout << "B is greater";
  }
  else
    cout << "C is greater";
  return 0;
}