#include <iostream>
using namespace std;

int main()
{
  int arr[8] = {1, 2, 3, 4, 5, 9, 11, 7};
  int max_number = arr[0];

  for (int i = 0; i < 8; i++)
  {
    if (arr[i] > max_number)
    {
      max_number = arr[i];
    }
  }

  cout << max_number;

  return 0;
}