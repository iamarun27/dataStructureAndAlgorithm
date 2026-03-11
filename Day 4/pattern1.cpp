#include <iostream>
using namespace std;

int main()
{
  int num;
  cout << "Enter the number : ";
  cin >> num;

  for (int row = 1; row <= num; row++)
  {
    // spaces
    for (int col = 1; col <= num - row; col++)
    {
      cout << " ";
    }

    // stars
    for (int col = 1; col <= row; col++)
    {
      cout << "* ";
    }
    cout << endl;
  }
  return 0;
}