#include <iostream>
using namespace std;

int main()
{
  int num;
  cout << "Enter the number : ";
  cin >> num;
  int first_number = 0;
  int second_number = 1;
  int current_number;

  if (num == 1)
  {
    cout << "0";
    return 0;
  }

  if (num == 2)
  {
    cout << "1";
    return 0;
  }

  for (int i = 3; i <= num; i++)
  {
    current_number = first_number + second_number;
    first_number = second_number;
    second_number = current_number;
  }

  cout << current_number;

  return 0;
}