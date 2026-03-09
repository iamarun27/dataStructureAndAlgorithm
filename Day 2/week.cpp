#include <iostream>
using namespace std;

int main()
{
  int num;
  cout << "Enter the number : ";
  cin >> num;

  // if (num == 1)
  //   cout << "Sunday";
  // else if (num == 2)
  //   cout << "Monday";
  // else if (num == 3)
  //   cout << "Tuesday";
  // else if (num == 4)
  //   cout << "Wednesday";
  // else if (num == 5)
  //   cout << "Thursday";
  // else if (num == 6)
  //   cout << "Friday";
  // else if (num == 7)
  //   cout << "Saturday";
  // else
  //   cout << "Enter the valid number";

  switch (num)
  {

  case 1:
    cout << "Sunday";
    break;

  case 2:
    cout << "Monday";
    break;

  case 3:
    cout << "Tuesday";
    break;
  case 4:
    cout << "Wednesday";
    break;
  case 5:
    cout << "Thursday";
    break;
  case 6:
    cout << "Friday";
    break;
  case 7:
    cout << "Saturday";
    break;
  default:
    cout << "enter valid number between 1 to 7";
  }

  return 0;
}