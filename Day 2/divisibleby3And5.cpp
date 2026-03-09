#include <iostream>
using namespace std;

int main()
{
  int num;
  cout << "Enter the number : ";
  cin >> num;

  if (num % 3 == 0 && num % 5 == 0)
  {
    cout << "Perfect number";
  }
  else
    cout << "Not perfect";

  return 0;
}