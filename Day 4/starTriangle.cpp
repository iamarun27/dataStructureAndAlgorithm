#include <iostream>
using namespace std;

int main()
{
  int num;
  cout << "Enter the number : ";
  cin >> num;

  for (int i = 1; i <= num; i++)
  {
    // spaces
    for (int col = 1; col < num - i; col++)
    {
      cout << " ";
    }

    for (int j = 1; j <= 2 * i - 1; j++)
    {
      cout << "*";
    }

    cout << endl;
  }

  return 0;
}