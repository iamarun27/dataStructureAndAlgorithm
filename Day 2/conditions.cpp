#include <iostream>
using namespace std;

int main()
{
  int package;
  cout << "Enter the package : ";
  cin >> package;

  if (package > 10)
  {
    cout << "\nAccepted";
  }
  else
    cout << "\nRejected";
 
  return 0;
}