#include <iostream>
using namespace std;

int main()
{
  int num;
  cout << "Enter the number : ";
  cin >> num;

  for (int i = 1; i <= num; i++)
  {
    // start
    for (int j = 1; j <= i; j++)
    {
      cout << "*";
    }
    // spaces
    for (int j = 1; j <= 2 * num - 2 * i; j++)
    {
      cout << " ";
    }
    for (int j = 1; j <= i; j++)
    {
      cout << "*";
    }
    cout << endl;
  }

  // lower part

  for (int row = 1; row <= num - 1; row++)
  {
    // *
    for (int col = 1; col <= num - row; col++)
    {
      cout << "*";
    }

    for (int col = 1; col <= 2 * row; col++)
    {
      cout << " ";
    }

    for (int col = 1; col <= num - row; col++)
    {
      cout << "*";
    }

    cout << endl;
  }

  return 0;
}